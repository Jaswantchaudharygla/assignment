#include<stdio.h>
#include<conio.h>
Void main(){
Char string1[25],string2[25];
int l;
Clrscr();
Printf(“***** performing string length ******\n”);
Printf(“enter only one string \n”);
Scanf(“%s”,string1);
l = strlen(string1);                   
printf(“the string length is %d\n\n”,l);
printf(“**** performing string concatenation ****\n”);
printf(“enter two strings\n”);
scanf(“%s%s”,string1,string2);
printf(“the concatenated string is %s\n\n”,strcat(string1,string2)); 
printf(“***** performing string compare *****\n”);
printf(“enter two strings \n”);
scanf(“%s%s”,string1,string2);

if(strcmp(string1,string2) = = 0) 
printf(“strings are equal\n”);

else
printf(“strings are not equal\n”);
printf(“*** performing string copy ****\n”);
printf(“enter the two strings\n”);
scanf(“%d%d”,string1,string2);
printf(“the first string is %s and second string is %s\n”,string1,string2);
strcpy(string1,string2);         
printf(“the first string is %s and second string is %s\n”,string1,string2);
getch();
}
