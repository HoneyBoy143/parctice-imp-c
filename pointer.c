#include<stdio.h>

int printAge(int *pointer)
{
    printf("yr age is: %d", *pointer);
}
int main()
{
    int age= 20;
    int *pointer= NULL;
    pointer= &age;

    printf("the value of age is: %d\n",age);

    printf("the address of age is: %p\n",pointer);// address of age
    printf("the address of age is: %p\n",*pointer); // printing hexa number
    
    printf("the size of age variable is: %d bytes\n", sizeof(age));
    printf("the size of pointer variable is: %d bytes\n", sizeof(pointer));

    printAge(age);
    return 0;
}