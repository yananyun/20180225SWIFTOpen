//
//  CFramWork.c
//  SwiftBasicMac
//
//  Created by admindyn on 2018/5/9.
//  Copyright © 2018年 admindyn. All rights reserved.
//

#include "CFramWork.h"



void cFuncStr(const char *str)
{
    printf("输出c字符串 %s \n",str);
}
void cFuncInt(const int *str)
{
    printf("输出c数组 %lx",str);
     printf("输出c数组 首元素 %lx \n",*str);
}
