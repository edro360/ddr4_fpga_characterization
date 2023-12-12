#include "krnl_dummy.h"

data_t krnl_dummy(bool en, data_t *dummy_a, data_t *dummy_b) {
#pragma HLS INTERFACE mode=m_axi port=dummy_b bundle=gmem0
    data_t data_a = 5;
    data_t data_b = 5;
    if (en) {
        *dummy_a = data_a;
        *dummy_b = data_b;
    } else {
        data_a = *dummy_a;
        data_b = *dummy_b;
    }
    return 0xAAAAAAAA;
}
