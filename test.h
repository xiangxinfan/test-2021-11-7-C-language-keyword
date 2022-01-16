#pragma once//防止头文件被重复包含

//1、C头文件
//2、所有的变量的声明
//3、所有的函数的声明
//4、#define 类型typedef,struct
//5、不能出现任何变量的定义


#include <stdio.h>
#include <windows.h>

////声明部分就会挪到这里
//
//extern int g_val; //这个带不带这个呢？不带也可以编译过去，还是带上最好
//                     //所以变量声明必须带上extern！
////extern void show();//函数声明建议带上extern!
////extern void show(int x);//尽量这样
//extern void show(int);//这样也可以