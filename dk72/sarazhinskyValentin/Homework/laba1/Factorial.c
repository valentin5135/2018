#include <stdio.h>
#include "Factorial.h"
int i;
 double doFactorial(double z)
 {
     double theFactorial=1;
     
     for(i=1;i<=z;i++){
     	theFactorial=theFactorial*i;
	 }
    
     return theFactorial;
 }
