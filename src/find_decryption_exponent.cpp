#include "find_decryption_exponent.h"
#include <algorithm>

int find_decryption_exponent::FindDExponent::find_decryption_exponent(int e, int phi){
    for (int i = 2; i < phi; ++i) {
        if ((e * i) % phi == 1)
            return i;
    }
    return -1;
}

int find_decryption_exponent::FindDExponent::operator()(int e, int phi){
    return find_decryption_exponent::FindDExponent::find_decryption_exponent(e, phi);
}