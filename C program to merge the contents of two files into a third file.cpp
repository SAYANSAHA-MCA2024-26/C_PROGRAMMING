//Write a C program to merge the contents of two files into a third file.
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
   FILE *fp1 = fopen("ex.txt", "r"); 
   FILE *fp2 = fopen("ex1.txt", "r"); 
   FILE *fp3 = fopen("ex2.txt", "w"); 
   char c; 
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { 
        puts("Could not open files"); 
        exit(0); 
   } 
   while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3); 
   printf("Merged ex.txt and ex1.txt into ex2.txt"); 
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
