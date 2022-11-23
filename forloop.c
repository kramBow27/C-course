#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("\ntest");
        printf("\n%d", i);

    }

    for(int i = 10; i >= 1; i--) {
        printf("\ntest");
        printf("\n%d", i);

    }

    for(int i = 0; i <=26; i++ ) {
        if(i % 2 == 0) {
            printf("\n%d\n", i);
        } else {};
    }


    return 0;
}
