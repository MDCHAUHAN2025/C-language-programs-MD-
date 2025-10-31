#include<stdio.h>
#include<conio.h>


   void main () {

   int a,b;

   clrscr();

   printf("Enter a:");
   scanf("%d",&a);

   printf("Enter b:");
   scanf("%d",&b);

   if(a>b) {
			printf("a is largest and b is smallest");
			 }
   else if (a<b) {printf("a is smallest and b is largest");
			 }
   else {printf("a and b is equal");
			 }

   getch();

}
