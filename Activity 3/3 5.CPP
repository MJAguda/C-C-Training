#include<stdio.h>
#include<conio.h>

void main()
{
float length,width,height,volume;
clrscr();
printf("Enter The Length : ");
scanf("%f",&length);
printf("Enter The Width : ");
scanf("%f",&width);
printf("Enter The Height : ");
scanf("%f",&height);
volume=length*width*height;
printf("\n\tThe Volume with a Length of %5.2f",length);
printf(", \n\tWidth of %5.2f",width);
printf(" \n\tand Height of %5.2f",height);
printf("\n\n\tis : %5.2f\n",volume);
getch();
}