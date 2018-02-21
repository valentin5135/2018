#include <stdio.h>
#include <stdlib.h>
#include "Product.h"
#include "Factorial.h"
#include "Sum.h"
#include "Share.h"
#include "Sqrt.h"


int a,b,c,d; double part1,part2,q;
int main(int argc, char *argv[]) {
	printf("enter the value of A:");
	scanf("%d",&a);
	printf("enter the value of B:");
	scanf("%d",&b);
	printf("enter the value of C:");
	scanf("%d",&c);
	 part1=doProduct(a,doShare(doSqrt(doSum(b,c)),b));
	 
	 for(d=0;d<=c;d++){				//summ of factorials
	 	part2=part2+doFactorial(doSum(a,d));
	 }
	
	q=part1+part2;
	printf("Q= %f \n",q);

	return 0;
}
