#include "krnl_dram_rw.h"

data_t krnl_dram_rw(bool wr_en, data_t &data_i, data_t *data_o, data_t *dummy) {
#pragma HLS INTERFACE mode=m_axi port=dummy bundle=gmem0

    data_t a = 5;
    if (wr_en) {
        *data_o = data_i;
        *dummy = a;
    } else {
        data_i = *data_o;
        a = *dummy;
    }
    return 0xAAAAAAAA;
}
