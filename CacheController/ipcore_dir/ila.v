///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2025 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 13.4
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : ila.v
// /___/   /\     Timestamp  : Tue Oct 21 16:16:10 EDT 2025
// \   \  /  \
//  \___\/\___\
//
// Design Name: Verilog Synthesis Wrapper
///////////////////////////////////////////////////////////////////////////////
// This wrapper is used to integrate with Project Navigator and PlanAhead

`timescale 1ns/1ps

module ila(
    CONTROL,
    CLK,
    DATA,
    TRIG0);


inout [35 : 0] CONTROL;
input CLK;
input [99 : 0] DATA;
input [0 : 0] TRIG0;

endmodule
