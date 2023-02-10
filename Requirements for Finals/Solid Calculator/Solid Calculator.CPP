#include<stdio.h>
#include<conio.h>

double pi,l,w,h,r,solid,result;
#define pi 3.141592654

void main()

{
     printf("Solid Volume Calculator");
     printf("\n\n\t\t1 - CUBE\n\n\t\t2 - CONE\n\n\t\t3 - CYLINDER\n\n\t\t4 - SPHERE\n\n\t\t");
     printf("\n\n\t\t\tEnter the number of your Solid : #");
     scanf("%lf",&solid);
     if(solid==1)

	printf("\n\n\n\t\tEnter the dimensions of your CUBE.");
	printf("\n\n\t\tLength = ");
	scanf("lf",&l);
	printf("\n\n\t\tWidth  = ");
	scanf("lf",&w);
	printf("\n\n\t\tHeight = ");
	scanf("lf",&h);
	result=l*w*h;

     else if(solid==2)

	printf("\n\n\n\t\tEnter the dimensions of your CONE.");
	printf("\n\n\t\tRadius = ");
	scanf("lf",&r);
	printf("\n\n\t\tHeight = ");
	scanf("lf",&h);
	result=(pi*r*r*h)/3;

     else if(solid==3)

	printf("\n\n\n\t\tEnter the dimensions of your Cylinder.");
	printf("\n\n\t\tRadius = ");
	scanf("lf",&r);
	printf("\n\n\t\tHeight = ");
	scanf("lf",&h);
	result=pi*r*r*h;

     else if(solid==4)

	printf("\n\n\n\t\tEnter the dimension of your SPHERE.");
	printf("\n\n\t\tRadius = ");
	scanf("lf",&r);
	result=(4*pi*r*r)/3;

     else

	printf("\n\n\n\t\tInvalid Input. ^_^");

     printf("Volume = %5.2lf cubic unit/s");
     getch();
}
