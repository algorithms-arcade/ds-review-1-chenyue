#include <stdio.h>
#include <stdlib.h>
 
int main() {
    /* A nice long string */
    // char string[256];  
    // printf("0: string: %p\n", string);  
    // printf("0: string: %s\n", string);  

    char *string;   
    printf("1: string: %p\n", string);

    string = malloc( sizeof(*string) * 256 );
    printf("2: string: %p\n", string);

    int i;    

    printf( "Please enter a long string: " );
 
    /* notice stdin being passed in */
    fgets ( string, 256, stdin );  

    for ( i = 0; i < 256; i++ ) {
        if ( string[i] == '\n' ) {
            string[i] = '\0';
            break;
        }
    }         
 
    printf( "You entered a very long string, %s\n", string );

    printf("3: string: %p\n", string);

    free(string);
    string = NULL;
 
    getchar();
}
