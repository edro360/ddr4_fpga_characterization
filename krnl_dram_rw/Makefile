all: xo xclbin

xclbin:
	v++ -t hw -s -g --link --config xclbin/krnl_dram_config.cfg --optimize 0 -o xclbin/krnl_dram_rw.xclbin xo/krnl_dram_rw.xo

xo:
	v++ -t hw --platform xilinx_u2_gen3x4_xdma_gc_2_202110_1 -c -k krnl_dram_rw hls/krnl_dram_rw.cpp -o xo/krnl_dram_rw.xo

clean:
	rm -rf _x .Xil hls/.Xil xclbin/.Xil xo/.Xil *.log *.compile_summary .ipcache

.PHONY: all xclbin xo clean
