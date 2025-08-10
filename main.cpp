#include <iostream>
#include <random>


int func() {
    std::mt19937 rng((std::random_device())());
    return rng();
}


int main(int argc, const char* argv[]) {
    if (argc != 2) {
        return -1;
    }

    std::cout << func() << std::endl;
    return 0;
}
