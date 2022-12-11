//
// Created by kaiwei jiang on 2022/12/11.
//

#include <iostream>
#include "3DArrayOffset.h"
#include "PointOffset.h"
#include "MDArrayPoint.h"
#include "PointAssignment.h"
#include "MPMAPointOffset.h"
int main() {

    //1、三维数组的偏移
    ThreeDArrayOffetFunc1();
    ThreeDArrayOffetFunc2();
    //2、指针偏移
    PointOffsetFunc1();
    //3、三维数组和二维数组指针的结合
    MDArrayPointFunc1();
    //4、赋值后指针指向内容突变
    PointAssignmentFunc1();
    //5、多级指针多级数组指针偏移计算
    MPMAPointOffsetFunc1();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}