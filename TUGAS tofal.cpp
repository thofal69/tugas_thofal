#include <stdio.h>                                  
#include <conio.h>

main()
{
	float f;
   float r;
   float c;
   c=0;
	printf("Tugas program konvensi suhu Fahrenheit,Reamur,Celsius""\n""Masukkan suhu derajat celsius : ");
   scanf("%f",&c);
   f=c*1.8+32;
   r=c*0.8;
   printf("jadi %2.4f derajat Fahrenheit sama dengan %2.4f derajat Reamur dan %2.4f derajat Celsius",f,r,c);
	getch();
}

