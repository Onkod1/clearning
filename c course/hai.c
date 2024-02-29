//#include <stdio.h>
/*int main()
{
    char name[15];
    printf("hello\n");
    printf("enter your name\n");
    scanf("%s",name);
    printf("your name is %s\n, name");
}*/

#include <stdio.h>
void main() 
{
    char name[50]; // Assuming a maximum name length of 49 characters
    printf("hello\n");
    printf("enter your name\n");
    scanf("%s", name); // No need for the address operator & for arrays
    printf("your name is %s\n", name); // Corrected the format specifier and added \n
}
