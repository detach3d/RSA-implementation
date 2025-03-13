

namespace find_decryption_exponent{
    class FindDExponent{
        private:
            int find_decryption_exponent(int e, int phi);
        public:
            int operator()(int e, int phi);
    };

}