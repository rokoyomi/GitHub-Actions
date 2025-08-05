#include <iostream>

int main(int argc, const char* argv[]) {

    if (argc != 2) {
        return -1;
    }

    int n = atoi(argv[1]);
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 0;
    }

    return 0;
}