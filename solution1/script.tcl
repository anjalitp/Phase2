############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Phase2_final
set_top myCNN
add_files Phase2_final/.apc/top.cpp
add_files -tb Phase2_final/solution1/test1.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./Phase2_final/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
