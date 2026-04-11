#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char name [30] = "";
    int age = 0;
    float gpa = 0;
    char grade = '\0';
     printf("enter your full name:");
     fgets(name,sizeof(name),stdin);
     name[strlen(name) - 1 ] = '\0';
     printf("enter your age:");
     scanf("%d",&age);
     printf("enter your gpa:");
     scanf("%f",&gpa);
     printf("enter your grade:");
     scanf(" %c",&grade);

     printf("your stats: \n ");
     printf("%s \n",name);
     printf("%d \n",age);
     printf("%f \n",gpa);
     printf("%c \n",grade);
    
}