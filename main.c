#include "jojo.h"


#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
int main() {
    hello_msg();
    system("color 4");
    printf("%d", getpid());
    while (1) {
        char c;
        printf("\n\n [C]to use criptograf\t\t [K]to create key \n");
        scanf("%c", &c);
        if (c == 'c' || c == 'C') {
            system("cls");
            criptograf();
        } else if (c == 'k' || c == 'K') {
            system("cls");
            keygen();
        }
        else if (c == '#'){
            int how;
            printf("how m?");
            scanf("%d", &how);
            for (int oo = 0; oo != how ; oo++){
                keygendeb();
                if (oo == how - 1){
                    printf("\npress eny key to continue");
                    getch();
                }
                sleep(1);
            }
        }
        else {
            system("cls");
            printf("\nChoose something\n");
        }
    }
    return 0;
}

#pragma clang diagnostic pop