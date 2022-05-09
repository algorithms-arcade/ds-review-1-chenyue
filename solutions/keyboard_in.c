#include <stdio.h>
#include <stdlib.h>
 
// int mult ( int x, int y );

int mult (int x, int y){
  return x * y;
}
 
int main(){
  int x;
  int y;

  int* p = &x;

  printf("p: %p\n", p);

  printf("malloc( sizeof(int) ): %p\n", malloc( sizeof(int) ));

  // *p = &x; // wrong !!!!!
   
  printf( "Please input two numbers to be multiplied: " );

  scanf( "%d", p );

  scanf( "%d", &y );
  printf( "The product of your two numbers is %d\n", mult( x, y ) );
  getchar(); 
}
 
