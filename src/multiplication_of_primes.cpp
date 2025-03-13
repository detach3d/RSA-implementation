#include "multiplication_of_primes.h"
#include <utility>


int multiplication_of_primes::FindMultiply::find_multiplication(std::pair<long long, long long>& pair_of_primes){
    return (pair_of_primes.first * pair_of_primes.second);
}

int multiplication_of_primes::FindMultiply::operator()(std::pair<long long, long long>& pair_of_primes)
{
    return find_multiplication(pair_of_primes);
}