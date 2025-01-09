//Write a C program to list all files and sub-directories in a directory.
#include<stdio.h> 
#include<dirent.h> 
int main(void) 
{ 
    struct dirent *de;    
    DIR *dr = opendir("."); 
    if (dr == NULL)   
    { 
        printf("Could not open current directory" ); 
        return 0; 
    } 
    while ((de = readdir(dr)) != NULL)
	{
		printf("%s\n", de->d_name);
	} 
    closedir(dr);     
    return 0; 
} 
