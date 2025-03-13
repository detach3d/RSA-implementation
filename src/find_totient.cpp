#include <utility>
#include "find_totient.h"


int find_totient::FindTotient::find_totient(std::pair<long long,long long>& pair_of_primes){
    return (pair_of_primes.first - 1) * (pair_of_primes.second - 1);
}

int find_totient::FindTotient::operator()(std::pair<long long,long long>& pair_of_primes){
    return find_totient::FindTotient::find_totient(pair_of_primes);
}