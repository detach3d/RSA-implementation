#include <iostream>
#include <utility>
#include "find_prime_pair.h"
#include "multiplication_of_primes.h"
#include "find_totient.h"
#include "find_encryption_exponent.h"
#include "find_decryption_exponent.h"
#include <vector>
#include <cstring>
#include "find_power.h"
#include "encrypt.h"
#include "decrypt.h"

int main(){
    using namespace find_prime_pair;
    using namespace multiplication_of_primes;
    using namespace find_totient;
    using namespace find_decryption_exponent;
    using namespace find_encryption_exponent;
    using namespace power;
    using namespace encrypt;
    using namespace decrypt;

    FindPrimePair find_primes;
    FindMultiply find_multiply;
    FindTotient find_totient;
    FindEExponent exponent_e;
    FindDExponent exponent_d;
    Encrypt enc;
    Decrypt dec;

    std::pair pair_of_primes = find_primes();
    const int mul_prime = find_multiply(pair_of_primes);
    const int tot_prime = find_totient(pair_of_primes);
    const int e = exponent_e(tot_prime);
    const long long d = exponent_d(e,tot_prime);
    
    std::cout << "Public Key (e, n): (" << e << ", " << mul_prime << ")\n";
    std::cout << "Private Key (d, n): (" << d << ", " << mul_prime << ")\n";
    
    
    const char* arr = "SecResearch\0";
    std::string arr2;
    
    std::cout << "Original Message: " << arr << '\n';
    
    std::vector<long> vec;
    for(int i = 0; i < std::strlen(arr); ++i){
        vec.push_back(enc.encrypt(arr[i], e, mul_prime));
        std::cout << "Encrypted Message: " << vec[i] << '\n';
        //std::cout << i << '\n';
    }
    // std::cout << "end for\n";
    for(int i = 0; i < std::strlen(arr); ++i){
        arr2[i] = (char)(dec.decrypt(vec[i], e, mul_prime));
        std::cout << "Decrypted Message: " << arr[i] << '\n';
    }
    
    //std::cout << "Original Message: " << arr2 << '\n';
    
        //std::cout << pair_of_primes.first << " * " << pair_of_primes.second << " = "; 
    
        //std::cout << mul_prime << "\n";
    
        //std::cout << "tot_prime = " << tot_prime << '\n';
    
        //std::cout << "exponent e " << e << '\n';
    
        //std::cout << "exponent d " << d << '\n';
    
}