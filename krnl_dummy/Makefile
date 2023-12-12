all: xo xclbin

xclbin:
	v++ -t hw -s -g --link --config xclbin/krnl_configuration.cfg -o xclbin/krnl_dummy.xclbin xo/krnl_dummy.xo

xo:
	v++ -t hw --platform xilinx_u2_gen3x4_xdma_gc_2_202110_1 -c -k krnl_dummy hls/krnl_dummy.cpp -o xo/krnl_dummy.xo

clean:
	rm -rf _x .Xil hls/.Xil xclbin/.Xil xo/.Xil *.log *.compile_summary .ipcache

.PHONY: all xclbin xo clean
