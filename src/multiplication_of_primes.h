#ifndef MULTIPLICATION_OF_PRIMES_H
#define MULTIPLICATION_OF_PRIMES_H

#include <utility>

namespace multiplication_of_primes{

    class FindMultiply{
        private:
            int find_multiplication(std::pair<long long, long long>& pair_of_primes);
        public:
        int operator()(std::pair<long long, long long>& pair_of_primes);
    };

}

#endif