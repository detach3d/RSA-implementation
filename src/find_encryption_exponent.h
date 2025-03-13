

namespace find_encryption_exponent{
    class FindEExponent{
        private:
            int find_encryption_exponent(const int& phi);
        public:
            int operator()(const int& phi);
    };

}