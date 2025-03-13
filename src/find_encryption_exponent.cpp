#include "find_encryption_exponent.h"
#include <algorithm>

int find_encryption_exponent::FindEExponent::find_encryption_exponent(const int& phi){
    for(int i = 2; i < phi; ++i ){
        if(std::__gcd(i,phi) == 1){
            return i;
        }
    }
}

int find_encryption_exponent::FindEExponent::operator()(const int& phi){
    return find_encryption_exponent::FindEExponent::find_encryption_exponent(phi);
}