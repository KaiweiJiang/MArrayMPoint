
#include "MPMAPointOffset.h"
#include <iostream>
#include <stdio.h>

void MPMAPointOffsetFunc1(){
    const char* strstr[] = {"welcome","to","kevin", "amazing"};
    const char** strstrstr[] = {strstr+3,strstr+2,strstr+1,strstr};
    const char*** ppp = strstrstr;

    printf("%s\n", **++ppp);        //1. ppp = ppp + 1  2. **ppp  kevin
    printf("%s\n", *--*++ppp + 3);  //1. ppp = ppp + 1  2.*ppp 3.--  come
    printf("%s\n", *ppp[-2] + 3);   //*ppp[-2] == *(*(ppp-2))  zing
    printf("%s\n", ppp[-1][-1] + 1);    //ppp[-1][-1] == *(*(ppp-1)-1) O

    std::cout<<"*************"<<std::endl;
}