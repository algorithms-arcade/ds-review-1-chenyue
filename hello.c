#include <stdio.h>
 
int main()
{
    int *ptr;
    int num;
    ptr = &num; /* Requires & to give the memory address to the ptr */


    char *p;
    char str[40];
    p = str;  /* Gives the memory address without a reference operator(&) */

    char astring[10];
    int i = 0;
    /* Using scanf isn't really the best way to do this; we'll talk about that 
       in the next tutorial, on strings */
    scanf( "%s", astring );
    for ( i = 0; i < 10; ++i )
    {
        if ( astring[i] == 'a' )
        {
            printf( "You entered an a!\n" );
        }
    }

    int x;
    int y;
    int array[8][8]; /* Declares an array like a chessboard */
    
    for ( x = 0; x < 8; x++ ) {
        for ( y = 0; y < 8; y++ )
        array[x][y] = x * y; /* Set each element to a value */
    }
    printf( "Array Indices:\n" );
    for ( x = 0; x < 8;x++ ) {
        for ( y = 0; y < 8; y++ )
        {
            printf( "[%d][%d]=%d", x, y, array[x][y] );
        }
        printf( "\n" );
    }

    getchar();
}