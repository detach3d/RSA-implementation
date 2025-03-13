#include "find_power.h"

long power::Power::find_power(long base, long expo, long m) {
    long res = 1;
    base = base % m;
    while (expo > 0) {
        if (expo & 1)
            res = (res * 1LL * base) % m;
        base = (base * 1LL * base) % m;
        expo = expo / 2;
    }
    return res;
}