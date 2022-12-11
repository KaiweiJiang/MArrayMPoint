
#include "PointAssignment.h"
#include <iostream>
#include <stdio.h>

void PointAssignmentFunc1(){
    const char* ptrptr[] = {"welcome","to","kevin","amazing"};
    const char** pp = ptrptr + 1;
    //赋值语句变化的是左边
    ptrptr[0] = (*pp++) + 2; //1.*pp 2. pp=pp+1   ptrptr[0]=空的字符串
    ptrptr[1] = *(pp + 1); //amazing
    ptrptr[2] = pp[1] + 3; //pp[1]==*(pp+1)+3  zing
    ptrptr[3] = pp[0] + (ptrptr[2] - ptrptr[1]); //p[0]+3 g

    printf("%s\n", ptrptr[0]);
    printf("%s\n", ptrptr[1]);
    printf("%s\n", ptrptr[2]);
    printf("%s\n", ptrptr[3]);

    std::cout<<"*************"<<std::endl;
}
