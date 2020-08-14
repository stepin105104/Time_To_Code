#include "calculator.h"
#include "addition.h"
#include "substraction.h"
#include<string.h>
int calculator(int a, int b, char *str)
{
   int (*ip)(int,int);
   int result;
   if(strcmp(str,"add")==0)
   {
   ip=addition;
   result=(*ip)(a,b);
   }
   if(strcmp(str,"sub")==0)
   {
    ip=substraction;
   result=(*ip)(a,b);
   }

    return result;
}
