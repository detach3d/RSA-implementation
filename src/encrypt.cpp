
#include "find_power.h"
#include "encrypt.h"

using namespace power;

long encrypt::Encrypt::encrypt(long m, long e, long n) {
    return Power{}.find_power(m, e, n);
}

