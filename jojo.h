
#ifndef FULL_JOJO_H
#define FULL_JOJO_H

#endif //FULL_JOJO_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int genr(int from, int to){
    return from + rand()%(to - from + 1);
}


void keygen(void) {
    int joh = 1;
    /* 52 */
    char EN [52]= "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    char output[52];
    for (int h = 0; h != 52; h++) { output[h] = '#'; }
    int a = 0;
    while (a == 0) {
        for (int i = 0; i != 53; i++) {
            joh++;
            srand(time(NULL) + joh);
            char test;
            test = EN[genr(0, 51)];
            int sd = 0;
            for (int io = 0; io != 52; io++) {   //53
                if (output[io] != test) { sd++; }
            }
            if (sd == 52) {               //53
                output[i] = test;

            }
            int sp = 0;
            for (int tt = 0; tt != 53; tt++) {
                if (output[tt] != '#') { sp++; }
            }
            if (sp == 52) {
                output[i] = test;
                a = 1;
            }
        }
    }


    printf("\nstart/ %s /end", output);
    printf("\npress eny key to exit");
    getch();
}
void keygendeb(void) {
    int joh = 1;
    /* 52 */
    char EN [52]= "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    char output[52];
    for (int h = 0; h != 52; h++) { output[h] = '#'; }
    int a = 0;
    while (a == 0) {
        for (int i = 0; i != 53; i++) {
            joh++;
            srand(time(NULL) + joh);
            char test;
            test = EN[genr(0, 51)];
            int sd = 0;
            for (int io = 0; io != 52; io++) {   //53
                if (output[io] != test) { sd++; }
            }
            if (sd == 52) {               //53
                output[i] = test;

            }
            int sp = 0;
            for (int tt = 0; tt != 53; tt++) {
                if (output[tt] != '#') { sp++; }
            }
            if (sp == 52) {
                output[i] = test;
                a = 1;
            }
        }
    }


    printf("\nstart/ %s /end", output);
}

#define MAX_KEY key_size-1
#define MAX_KEY1 key_size

void criptograf() {
    int step, choise,ww = 0,key_size = -1;
    char *key;
    key = (char*) malloc(300);
    char mess[50], itog[50];
    for(int m1 = 0 ; m1 != 300; m1++){
        key[m1] = '#';
    }
    for(int m2 = 0 ; m2 != 50; m2++){
        mess[m2] = '#';
    }
    printf("\n\nKEY: ");
    scanf("%s", key);
    for (int n = 0 ; n != 301; n++){
        if ((key[n] != '#') && (key[n + 1] != '#')){
            key_size++;
        }
    }
    printf("[1]to encrypt\t\t[2]to decipher\n");
    printf("choise: ");
    scanf("%d", &choise);
    while (ww == 0) {
        for(int m2 = 0 ; m2 != 50; m2++){
            mess[m2] = '#';
        }
        if (choise == 1) {
            printf("\n\nStEp: ");
            scanf("%d", &step);
            printf("\nMESSEGE: ");
            scanf("%s", mess);

            for (int i = 0; i != 51; i++) {
                for (int i2 = 0; i2 != MAX_KEY+1; i2++){
                    if ((mess[i] == key[i2]) && (mess[i] != '\0')) {
                        if(i2 + step <= MAX_KEY) {
                            itog[i] = key[i2 + step];
                        }
                        else if (i2 + step > MAX_KEY){
                            int io = MAX_KEY - i2 ;
                            io++;
                            itog[i] = key[step - io];
                        }
                    }
                }
            }
            printf("\nencrypted message: %s", itog);
        }
        else if (choise == 2) {
            printf("\nMESSEGE: ");
            scanf("%s", mess);
            for (int step_e = 0; step_e != 21; step_e++) {
                for (int i = 0; i != 51; i++) {
                    for (int i2 = 0; i2 != MAX_KEY1 + 1; i2++) {
                        if ((mess[i] == key[i2]) && (mess[i] != '#') && (mess[i + 1] != '#')) {
                            if (i2 - step_e >= 0) {
                                itog[i] = key[i2 - step_e];
                            }
                            else if ((i2 - step_e < 0) && (mess[i] != '#') && (mess[i+1] != '#')){
                                itog[i] = key[i2 - step_e + MAX_KEY1];

                            }
                        }
                    }
                }
                printf("\nSTEP[%d]: %s", step_e, itog);
            }
        }
        else printf("input \t1 \tor\t 2\t");
    }

}

void hello_msg(){
    printf("      ___            __   __         ___    ___  __      __   __   __      \n"
           "|  | |__  |    |    /  ` /  \\  |\\/| |__      |  /  \\    |__) /  \\ /__` \\ / \n"
           "|/\\| |___ |___ |___ \\__, \\__/  |  | |___     |  \\__/    |  \\ \\__/ .__/  | ");
}
