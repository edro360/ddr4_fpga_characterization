#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdint>
using namespace std;

#if 0
typedef int data_t;
#else
#define DATAWIDTH 32
typedef uint32_t data_t;
#endif

data_t krnl_dummy(bool en, data_t *dummy_a, data_t *dummy_b);
