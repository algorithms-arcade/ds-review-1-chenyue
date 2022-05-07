#include <stdio.h>
#include <stdlib.h>
 
struct xampl {
  int x;
};
 
void database();

int main()
{  
    struct xampl structure;
    struct xampl *p;
 
    structure.x = 12;
    
    // p = &structure; /* Yes, you need the & when dealing with 
    //                        structures and using pointers to them*/

    // printf( "p: %p\n", p );

    // p = (struct xampl *)malloc( sizeof(*p) ); 

    p = (struct xampl *)malloc( sizeof(struct xampl) ); 

    printf( "p: %p\n", p );

    printf( "p->x: %d\n", p->x );  /* The -> acts somewhat like the * when 
                                   does when it is used with pointers
                                    It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/
    
    
    printf( "structure.x: %d\n", structure.x );

    database();

    free(p);
    printf("p after free: %p\n", p);
    p = NULL;
    printf("p after Null: %p\n", p);

    getchar();
}


struct database {
    int id_number;
    int age;
    float salary;
};
 
void database() {
    struct database employee;  /* There is now an employee variable that has
                                modifiable variables inside it.*/
    employee.age = 22;
    employee.id_number = 1;
    employee.salary = 12000.21;

    struct  database* ptr = &employee;

    printf( "ptr->age: %d\n", ptr->age );
    printf( "ptr->id_number: %d\n", ptr->id_number );
    printf( "ptr->salary: %.4f\n", ptr->salary );
}

