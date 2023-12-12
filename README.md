# DDR4 FPGA Characterization

## Abstract
This project involves the creation of an application utilizing a Samsung SmartSSD. The project aims to characterize and test if on-board DRAM is able to be used in an unconventional manner, then to harness that exploit in order to do neural network computation. The development environment used for this project is Xilinx Vivado/Vitis and the FPGA configuration is done using the Xilinx Runtime (XRT) along with the Samsung SmartSSD FPGA Shell and PYNQ.

## Requirements:
To replicate the environment and run the project, the following software and tools are required:

1. **Xilinx Vivado/Vitis**:
    - Download and install Xilinx Vivado/Vitis from the [Xilinx official website](https://www.xilinx.com/support/download.html).
    - The necessary licenses for the tools and IP cores used in this project should be included through normal installation.

2. **Xilinx XRT (Xilinx Runtime)**:
    - Download and install Xilinx Runtime (XRT) from the [Xilinx official website](https://www.xilinx.com/support/download.html).
    - XRT is crucial for configuring and managing the FPGA.

3. **Samsung SmartSSD FPGA Shell**:
    - Follow the Samsung SmartSSD FPGA Shell install procedure found in [Xilinx's SmartSSD Documentation](https://www.xilinx.com/content/dam/xilinx/support/documents/boards_and_kits/accelerator-cards/1_3/ug1382-smartssd-csd.pdf).

4. **Alveo-PYNQ Repository**
    - We will be using the Jupyter Notebooks found in the repository to program the FPGA. [GitHub](https://github.com/Xilinx/Alveo-PYNQ)

4. **Linux/MacOS Terminal**
    - We will be using the terminal to execute the project.

## Quick Guide:
1. Clone the repository.
```bash
git clone https://github.com/edro360/ddr4_fpga_characterization.git
```

2. Navigate to krnl_dummy to build the bitstream
    - The outputs can be found in the `xclbin/` and `xo/` folders but if you'd like to build them yourself then enter the following into the terminal.
```bash
cd krnl_dummy
```
```bash
make xo
```
```bash
make xclbin
```

3. (Optional) Open the Vivado/Vitis project found in `_x/link/vivado/vpl/prj/` which is generated along with the xclbin file.
    - This allows us to see the block diagram of the design going into the FPGA and verify that the DRAM DDR4 IP has been modified.
    
4. Navigate to `pynq/` and copy the .ipynb and .xclbin files to a new directory in the Alveo-PYNQ repository `Alveo-PYNQ/pynq_alveo_examples/notebooks/dram_fpga_char/`
    
5. Open the .ipynb files using Jupyter Notebooks and follow the instructions there.

## License:
MIT License

Copyright (c) [2023] [Copyright holders]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
