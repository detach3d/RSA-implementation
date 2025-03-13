#include "decrypt.h"
#include "find_power.h"

using namespace power;

long decrypt::Decrypt::decrypt(long c, long d, long n) {
    return Power{}.find_power(c, d, n);
}