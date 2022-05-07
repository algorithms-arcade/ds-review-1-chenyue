#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
   int a; // Declares a variable
   int * b; // Declares a pointer
   
   a = 10;
   b = &a; // b gets the address of a

   // int & c = b; // int & is illegal in c but not in c++

   printf("1 a: %d\n", a);
   printf("1 &a: %p\n", &a);
   printf("1 *(&a): %d\n", *(&a));
   printf("1 b: %p\n", b);
   printf("1 *b: %d\n", *b);   
   printf("1 &*b: %p\n", &*b);   

   *b = 20; // a now has the value 20

   printf("2 a: %d\n", a);
   printf("2 b: %p\n", b);
   printf("2 *b: %d\n", *b);   

   /* 23309 bus error  ./a.out

   int * c;        //!!! where is c pointing to !!!! 

   printf( "pointer c: %p\n", c ); 

   printf( "Please enter a number: " );
   scanf( "%d", c );
   printf( "You entered %d\n", *c );
   getchar();
   return 0; 
   */

   int x;            /* A normal integer*/
   int* p;           /* A pointer to an integer ("*p" is an integer, so p
                     must be a pointer to an integer) */

   // int* p = &x;  same p = &x;                  

   // p = &x;           /* Read it, "assign the address of x to p" */

   p = malloc( sizeof(*p) );

   printf("&x: %p\n", &x);
   printf("p: %p\n", p);

   // *p = x but *p != x
 
   printf( "Please enter a number: " );
   scanf( "%d", &x ); /* Put a value in x, we could also use p here */
   // scanf( "%d", p ); /* Put a value in x, we could also use p here */
   printf( "You entered x %d\n", x );
   printf( "You entered *&x %d\n", *&x );
   printf( "You entered *&x located at &x %p\n", &x );

   printf( "Please enter a number: " );
   // scanf( "%d", &x ); /* Put a value in x, we could also use p here */
   scanf( "%d", p ); /* Put a value in x, we could also use p here */
   printf( "You entered *p %d\n", *p );  /* Note the use of the * to get the value */  
   printf( "You entered *p located at p %p\n", p );   

   free(p);
   printf("p after free: %p\n", p);
   p = NULL;
   printf("p after Null: %p\n", p);

   getchar();
   return 0;
}