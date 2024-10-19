

#include <iostream>

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 10; j >= 1; j--) {
            if (j > i && j < (11 - i)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = 6; i < 10; i++) {
        for (int j = 10; j > 0; j--) {
            if (j > i || j < (11 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
