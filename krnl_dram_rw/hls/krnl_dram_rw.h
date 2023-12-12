#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdint>
using namespace std;

#if 0
typedef int data_t;
typedef int addr_t;
#else
#define DATAWIDTH 32
typedef uint32_t data_t;
typedef uint32_t addr_t;
#endif

data_t krnl_dram_rw(bool wr_en, data_t &data_i, data_t *data_o, data_t *dummy);
