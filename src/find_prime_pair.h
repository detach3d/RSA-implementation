#include <utility>

namespace find_prime_pair{


class FindPrimePair{
private:
    std::pair<long long, long long> find_primes();

public:
    std::pair<long long,long long> operator()();

};

}