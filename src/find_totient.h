#ifndef FIND_TOTIENT_H
#define FIND_TOTIENT_H


namespace find_totient{

    class FindTotient{
        private:
            int find_totient(std::pair<long long,long long>& pair_of_primes);
        public:
        int operator()(std::pair<long long,long long>& pair_of_primes);
        
    };
}

#endif