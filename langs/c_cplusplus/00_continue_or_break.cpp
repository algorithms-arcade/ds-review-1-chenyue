#include <stdio.h>
#include <string.h>

int main () {
         
    for (int i = 0; i < 10; i++) {
        if (i == 3) {  printf("You are here!\n"); break; }        
        printf("i = %d\n", i);
    }

    printf("--------------\n");

    for (int j = 0; j < 10; j++) {
        if (j == 3) {  printf("I am here!\n"); continue; }        
        printf("j = %d\n", j);
    }
}