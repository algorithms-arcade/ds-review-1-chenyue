#include <iostream>
 
using namespace std;
 
int main(){ 
  
  int x;            // A normal integer
  int *p;           // A pointer to an integer
 
  p = &x;           // Read it, "assign the address of x to p"
  cin>> x;          // Put a value in x, we could also use *p here
  cin.ignore();
  cout<< *p <<"\n"; // Note the use of the * to get the value

  // delete p; // pointer being freed was not allocated! 
  
  // Creating int pointer
  int* ptr1 = new int;
    
  // Initializing pointer with value 20
  int* ptr2 = new int(20);

  cout<< "ptr1: " <<  ptr1 <<"\n";
  cout<< "ptr2: " <<  ptr2 <<"\n";

  cout << "Value of *ptr1 = " << *ptr1 << "\n";
  cout << "Value of *ptr2 = " << *ptr2 << "\n";

  *ptr1 = x;
  cout << "Value of *ptr1 = " << *ptr1 << "\n";

  delete ptr1; // Destroying ptr1
  delete ptr2; // Destroying ptr2

  cout<< "ptr1: " <<  ptr1 <<"\n";
  cout<< "ptr2: " <<  ptr2 <<"\n";

  return 0;
}
