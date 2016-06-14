`timescale 1ns / 1ps
// Created by fizzim.pl version 5.10 on 2016:06:08 at 22:41:39 (www.fizzim.com)

module FSM (
  input wire clk,
  input wire reset,
  output reg [2:0] ra1,
  output reg [2:0] ra2,
  output wire rf_we,
  output reg [2:0] wa,
  output reg [31:0] imm,
  output reg [1:0] wd_sel,
  output reg [2:0] alu_op,
  output wire ld_we,
  output wire c_enable,
  output wire c_limit_we,
  output wire c_reset,
  input wire isZero,
  input wire limit_reached
);

  // state bits
  parameter 
  init_leds         = 8'b00010000, // extra=000 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  check_bounds      = 8'b00000000, // extra=000 rf_we=0 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  counter_reset     = 8'b00000100, // extra=000 rf_we=0 ld_we=0 c_reset=1 c_limit_we=0 c_enable=0 
  cut               = 8'b00110000, // extra=001 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_bound        = 8'b01010000, // extra=010 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_counter      = 8'b01110000, // extra=011 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_mask         = 8'b10010000, // extra=100 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_shift_offset = 8'b10110000, // extra=101 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  left_shift        = 8'b11010000, // extra=110 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  rotate            = 8'b11110000, // extra=111 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  set_counter       = 8'b00000010, // extra=000 rf_we=0 ld_we=0 c_reset=0 c_limit_we=1 c_enable=0 
  set_leds          = 8'b00001000, // extra=000 rf_we=0 ld_we=1 c_reset=0 c_limit_we=0 c_enable=0 
  wait_counter      = 8'b00000001; // extra=000 rf_we=0 ld_we=0 c_reset=0 c_limit_we=0 c_enable=1 

  reg [7:0] state;
  reg [7:0] nextstate;

  // comb always block
  always @* begin
    // Warning I2: Neither implied_loopback nor default_state_is_x attribute is set on state machine - defaulting to implied_loopback to avoid latches being inferred 
    nextstate = state; // default to hold value because implied_loopback is set
    case (state)
      init_leds        : begin
        begin
          nextstate = init_bound;
        end
      end
      check_bounds     : begin
        // Warning P3: State check_bounds has multiple exit transitions, and transition trans41 has no defined priority 
        if (!isZero) begin
          nextstate = counter_reset;
        end
        else if (isZero) begin
          nextstate = cut;
        end
      end
      counter_reset    : begin
        begin
          nextstate = wait_counter;
        end
      end
      cut              : begin
        begin
          nextstate = rotate;
        end
      end
      init_bound       : begin
        begin
          nextstate = init_counter;
        end
      end
      init_counter     : begin
        begin
          nextstate = init_mask;
        end
      end
      init_mask        : begin
        begin
          nextstate = init_shift_offset;
        end
      end
      init_shift_offset: begin
        begin
          nextstate = set_counter;
        end
      end
      left_shift       : begin
        begin
          nextstate = check_bounds;
        end
      end
      rotate           : begin
        begin
          nextstate = counter_reset;
        end
      end
      set_counter      : begin
        begin
          nextstate = set_leds;
        end
      end
      set_leds         : begin
        begin
          nextstate = left_shift;
        end
      end
      wait_counter     : begin
        // Warning P3: State wait_counter has multiple exit transitions, and transition trans43 has no defined priority 
        if (!limit_reached) begin
          nextstate = wait_counter;
        end
        else if (limit_reached) begin
          nextstate = set_leds;
        end
      end
    endcase
  end

  // Assign reg'd outputs to state bits
  assign c_enable = state[0];
  assign c_limit_we = state[1];
  assign c_reset = state[2];
  assign ld_we = state[3];
  assign rf_we = state[4];

  // sequential always block
  always @(posedge clk or posedge reset) begin
    if (reset)
      state <= init_leds;
    else
      state <= nextstate;
  end

  // datapath sequential always block
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // Warning R18: No reset value set for datapath output alu_op[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      alu_op[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output imm[31:0].   Assigning a reset value of 32'h0 based on value in reset state init_leds 
      imm[31:0] <= 32'h0;
      // Warning R18: No reset value set for datapath output ra1[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      ra1[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output ra2[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      ra2[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output wa[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      wa[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output wd_sel[1:0].   Assigning a reset value of 2'b01 based on value in reset state init_leds 
      wd_sel[1:0] <= 2'b01;
    end
    else begin
      alu_op[2:0] <= 3'b000; // default
      imm[31:0] <= 32'h0; // default
      ra1[2:0] <= 3'b000; // default
      ra2[2:0] <= 3'b000; // default
      wa[2:0] <= 3'b000; // default
      wd_sel[1:0] <= 2'b00; // default
      case (nextstate)
        init_leds        : begin
          wd_sel[1:0] <= 2'b01;
        end
        check_bounds     : begin
          alu_op[2:0] <= 3'b011;
          ra2[2:0] <= 3'b001;
        end
        cut              : begin
          alu_op[2:0] <= 3'b111;
          ra2[2:0] <= 3'b011;
          wd_sel[1:0] <= 2'b10;
        end
        init_bound       : begin
          imm[31:0] <= 32'h100;
          wa[2:0] <= 3'b001;
        end
        init_counter     : begin
          imm[31:0] <= 32'h17D7840;
          wa[2:0] <= 3'b010;
        end
        init_mask        : begin
          imm[31:0] <= 32'hFF;
          wa[2:0] <= 3'b011;
        end
        init_shift_offset: begin
          imm[31:0] <= 32'h1;
          wa[2:0] <= 3'b100;
        end
        left_shift       : begin
          alu_op[2:0] <= 3'b100;
          ra2[2:0] <= 3'b100;
          wd_sel[1:0] <= 2'b10;
        end
        rotate           : begin
          ra2[2:0] <= 3'b100;
          wd_sel[1:0] <= 2'b10;
        end
        set_counter      : begin
          ra1[2:0] <= 3'b010;
        end
      endcase
    end
  end

  // This code allows you to see state names in simulation
  `ifndef SYNTHESIS
  reg [135:0] statename;
  always @* begin
    case (state)
      init_leds        :
        statename = "init_leds";
      check_bounds     :
        statename = "check_bounds";
      counter_reset    :
        statename = "counter_reset";
      cut              :
        statename = "cut";
      init_bound       :
        statename = "init_bound";
      init_counter     :
        statename = "init_counter";
      init_mask        :
        statename = "init_mask";
      init_shift_offset:
        statename = "init_shift_offset";
      left_shift       :
        statename = "left_shift";
      rotate           :
        statename = "rotate";
      set_counter      :
        statename = "set_counter";
      set_leds         :
        statename = "set_leds";
      wait_counter     :
        statename = "wait_counter";
      default          :
        statename = "XXXXXXXXXXXXXXXXX";
    endcase
  end
  `endif

endmodule
