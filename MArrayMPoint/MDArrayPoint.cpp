
#include "MDArrayPoint.h"
#include <iostream>
#include <stdio.h>

void MDArrayPointFunc1(){
    int array1[3][4] = { {1,2,3,4},
                    {2,3,4,5},
                    {3,4,5,6}
                  };
    int array2[3][4] = { {10,11,12,13},
                    {11,12,13,14},
                    {12,13,14,15}
                  };
    int(*aaa[2])[4] = {array1,array2};
    int* PtrPtr1[3] = {array1[0],array1[1],array1[2]};
    int* PtrPtr2[3] = {array2[0],array2[1],array2[2]};
    int** PtrPtrPtr[2] = {PtrPtr1,PtrPtr2};
    int*** ppp = PtrPtrPtr;

    printf("%d\n", (*(*ppp+2))[1]);// array1[2][1] = 4
    printf("%ld\n", aaa[1][2]-aaa[1][0]);//中间有8个元素
    printf("%p %p\n", aaa[1][2], aaa[1][0]);//相差0x20 == 32
    std::cout<<"*************"<<std::endl;
}
