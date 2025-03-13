#include <iostream>
#include <fstream>
#include <string>
#include "find_prime_pair.h"

std::pair<long long, long long> find_prime_pair::FindPrimePair::find_primes()
{
    std::string first_number_string, second_number_string;

    // std::string cmd{"head -200 /dev/urandom | cksum | cut -f1 -d ' ' >> random_number.txt"};

    std::fstream file1("random_number.txt");
    if (!file1)
    {
        std::cerr << "Error opening file!" << std::endl;
        // return 1;
    }

    system("head -200 /dev/urandom | cksum | cut -f1 -d ' ' > random_number.txt");
    std::getline(file1, first_number_string);

    //std::cout << first_number_string << "\n";

    system("head -200 /dev/urandom | cksum | cut -f1 -d ' ' >> random_number.txt");
    std::getline(file1, second_number_string);

    //std::cout << second_number_string << '\n';

    file1.close();

    std::pair<long long, long long> pair_of_prime{std::stoll(first_number_string), std::stoll(second_number_string)};

    std::fstream file2("primes.txt");
    if (!file2)
    {
        std::cerr << "Error opening file!" << std::endl;
        // return 1;
    }

    int temp1{pair_of_prime.first % 1061}, temp2{pair_of_prime.second % 1061};

    // std::cout << "\n" << pair_of_prime.first << " " << pair_of_prime.second;

    
    if (temp1 < temp2)
    {
        int temp(temp1);
        temp1 = temp2;
        temp2 = temp;
    }
    else if (temp1 == temp2)
    {
        temp2++;
    }

    //std::cout << "\n"
    //          << temp1 << " " << temp2;


    std::string temp_str_for_write;
    for (int i = 0; i <= temp1; ++i)
    {
        std::getline(file2, temp_str_for_write);
        if (i == temp2)
        {
            std::getline(file2, first_number_string);
        }
        else if (i == temp1)
        {
            std::getline(file2, second_number_string);
        }
    }

    pair_of_prime.first = std::stoll(first_number_string);
    pair_of_prime.second = std::stoll(second_number_string);

    file2.close();
    return pair_of_prime;
}

std::pair<long long, long long> find_prime_pair::FindPrimePair::operator()()
{
    return find_prime_pair::FindPrimePair::find_primes();
}

