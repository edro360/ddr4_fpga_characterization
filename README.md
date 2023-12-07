# DDR4 FPGA Characterization

## Abstract
This project involves the creation and implementation of an FPGA-accelerated application utilizing a Samsung SmartSSD. The project aims to harness the computational power of the on-board FPGA to accelerate specific data processing tasks, thereby significantly reducing the data processing time and offloading the workload from the host system. The development environment used for this project is Xilinx Vivado/Vitis and the FPGA configuration is done using the Xilinx Runtime (XRT) along with the Samsung SmartSSD FPGA Shell.

## Requirements:
To replicate the environment and run the project, the following software and tools are required:

1. **Xilinx Vivado/Vitis**:
    - Download and install Xilinx Vivado/Vitis from the [Xilinx official website](https://www.xilinx.com/support/download.html).
    - Ensure that you have the necessary licenses for the tools and IP cores used in this project.

2. **Xilinx XRT (Xilinx Runtime)**:
    - Download and install Xilinx Runtime (XRT) from the [Xilinx official website](https://www.xilinx.com/support/download.html).
    - XRT is crucial for configuring and managing the FPGA.

3. **Samsung SmartSSD FPGA Shell**:
    - Download the Samsung SmartSSD FPGA Shell from the [Samsung official website](https://www.samsung.com/semiconductor/minisite/ssd/product/smart/ssd/).
    - Follow the installation instructions provided in the download package.

## Replication:
    1. Open the Vivado/Vitis project provided in the project repository.
    2. Build the project to generate the FPGA bitstream.
    3. Use the Xilinx Runtime (XRT) to load the bitstream onto the SmartSSD.
    4. Run the application on your host machine, and verify the acceleration on data processing tasks.

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
