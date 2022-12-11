#include "PointOffset.h"
#include <iostream>
#include <stdio.h>
//1级指针 S[0],S[1],S[2],S[3]
//2级指针 s,s+1,s+2,s+3
//3级指针 ptr,ptr+1,ptr+2,ptr+3
void PointOffsetFunc1(){
    static const char* s[] = {"black","white","pink","violet"};
    const char** ptr[] = {s+3,s+2,s+1,s}, ***p;
    p = ptr;
    ++p;
    printf("%s", **p+1);    //ink
    std::cout<<"\n*************"<<std::endl;
}