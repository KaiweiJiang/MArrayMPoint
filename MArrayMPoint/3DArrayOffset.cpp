#include <stdio.h>
#include <iostream>
#include "3DArrayOffset.h"
//不管a是几维数组，(&a+1)一定是整个数组的跨度
void ThreeDArrayOffetFunc1(){
    int a[5] = {1, 2, 3, 4, 5};
    int* ptr = (int*)(&a+1);
    printf("%d,%d", *(a+1), *(ptr-1));// 2 5
    std::cout<<"\n*************"<<std::endl;
}
//数组是一段连续存储的内存，不管是几维数组，都可以等效为1维数组
//a指向三维数组首地址，是3级指针，a+1跨度可以通过a[2] [2][3]来计算，跨度为2*3=6
//*a指向三维数组首地址，解引用是2级指针，*a+1跨度可以通过a[2][2] [3]来计算，跨度为3
//**a指向三维数组首地址，解引用是1级指针，**a+1跨度为1
void ThreeDArrayOffetFunc2(){
    int a[2][2][3] = {{{1,2,3},{4,5,6}},
                      {{7,8,9},{10,11,12}}
                     };
    int* ptr = (int*)(&a+1);
    printf("%d,%d", *(int*)(a+1), *(ptr-1));//7,12
    std::cout<<"\n*************"<<std::endl;
    printf("%d,%d", *(int*)(*a+1), *(int*)(*a+3));//4,10
    std::cout<<"\n*************"<<std::endl;
    printf("%d,%d", *(int*)(**a+2), *(int*)(**a+3));//3,4
    std::cout<<"\n*************"<<std::endl;
}

void ThreeDArrayOffetFunc3(){
    int a[2][2][3] = {};
    int* ptr = (int*)(&a+1);
    printf("%d,%d", *(int*)(a+1), *(ptr-1));//7,12
    std::cout<<"\n*************"<<std::endl;
    printf("%d,%d", *(int*)(*a+1), *(int*)(*a+3));//4,10
    std::cout<<"\n*************"<<std::endl;
    printf("%d,%d", *(int*)(**a+2), *(int*)(**a+3));//3,4
    std::cout<<"\n*************"<<std::endl;
}
