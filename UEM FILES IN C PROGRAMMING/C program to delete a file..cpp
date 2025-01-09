//Write a C program to delete a file.
#include <stdio.h>
int main()
{
    if (remove("ex3.txt") == 0)
        printf("Deleted successfully");
    else
        printf("Unable to delete the file");
 
    return 0;
}
