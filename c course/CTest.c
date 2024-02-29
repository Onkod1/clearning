#include <stdio.h>    // main liberary
#include <stdlib.h>
#include <stdbool.h>

/*
====c data tybes====
To define a variable:
tybe name = value;   // value is optional

----for integer variables ----
int x = 5;    range [-32,767 <===> +32,767]
long

----- for floating point variables -----
float x = 1.5; 
double

---- for Text variable ----
char x = 'a';        // for single character use %c when you print it
char x[4] = "abdi"    // for a stringe of character  // use %s when you print it

---- for Boolean variables ----
bool x = true;       // return 1
bool x = false;      // return 0 
*/

/*void main()
{
    int x = 35;
    float j = 7.8723;
    char a = 'k';
    char m[] = "abdiqani farah";
    bool l= true;
    printf("hello\n");               // (\n) for new line
    printf("magacaygu waa abdi\n");
    printf("the value of x is %i \n", x);
    printf("the value of x is %d \n", x);
    printf("the value of x is %f \n", j);
    printf("the value of x is %c \n", a);
    printf("the value of x is %s \n", m);
    printf("the value of x is %i \n", l);
}*/

/*void main()
{
    char name[10];
    printf("enter your name: ");
    scanf("%s", &name);
    printf("your name is: %s \n", name);

    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    printf("your age is: %d \n", age);
}
*/

/*
===Arithmatic Operator===
   Addition +
   Subtraction -
   Multiplication *
   Division /
   Remainder %

*/


/*
===if statement ===
   if(condition)
   {
    excute this code if condition is (true)
   }
----conditions----
    >     ka weyn 
    <     ka yar  
    >=
    <=
    ==
    !=

*/

/*void main()
{
    int x =6;
    
    if (x==6)
    printf("condition is true\n");
}*/

/*
=== if / else statement ===
    if (condition A){
        excute this code if condition is (true)
    }
    else if (condition B){
         excute this code if condition B is (true)
    }
    else if (condition C){
        excute this code if condtion C is (true)
    }
    else {
        excute this code if all condition are (false)
    }

*/
/*void main()
{
    int y=7;
    if (y==0)
    {
        printf("number is 0\n");
    }
    else if (y==8)
    {
        printf("number is 8 \n");
    }
    else if (y==74)
    {
        printf("number is 74\n");
    }
    else 
    {
        printf ("all condition are false \n");
    }
}*/

/*
===calculator App with c===
num1 + num2 = result
what wee need from user?
#num1
#num2
#operation ( + | - | * | / | % )

*/

/*void main()
{
    int num1;
    int num2;
    char op;
    
    printf("enter num1: ");
    scanf("%d",&num1);

    printf("enter operator: ");
    scanf("%s",&op);

    printf("enter num2: ");
    scanf("%d",&num2);

    if (op=='+'){
        printf("num1 + num2 %d \n", num1 + num2);
    }
    else if (op=='-'){
        printf("num1 - num2 %d \n", num1 - num2);
    }
    else if (op=='*'){
        printf("num1 * num2 %d \n", num1 * num2);
    }
    else if (op=='/'){
        printf("num1 / num2 %d \n", num1 / num2);
    }
    else if (op=='%'){
        printf("num1 %% num2 %d \n", num1 % num2);
    }
    else {
        printf ("inviled oparation");
    }
}*/

/*
===switch statement===
switch (check value)
{
case v1:
       //code
    break;
case v2:
       //code
    break;
case v3:
        //code
    break;
default:
        //code
    break;

}*/

int main()
{
    printf("hello\n");
    printf("how are you\n");
    printf("how ");
}