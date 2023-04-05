# README

README for "C primer plus": chapter 14.

## Setction 14.7

**2023.04.05**

1. funds2.c & funds3.c: 用于区分 `->` 和 `.` 的区别。

2. names1.c & names2.c: 用于展示将结构指针作为函数参数和将结构本身作为函数参数的区别。根据书中的论述过程，传递小的结构体适合整个传递，传递大的结构体适合只传递成员指针或者结构体指针。

3. names3.c: 展示了如何为结构中的指针动态分配内存.

4. funds4.c: 展示了结构数组的使用.

## Section 14.8: 将结构内容保存到文件中


## Section 14.9: 链式结构

None content.

## Section 14.10: Union

一种语法糖... 开始 python 起来了.

## Section 14.11: 枚举类型

**2023.04.05**

1. enum.c: 展示 enum 类型作为语法糖在提高可读性上的作用。

## Section 14.12: typedef 简介

typedef 是 #define 的加强版。#define 只在预处理阶段替换字符串，而 typedef 更强大。下面用一个例子说明：

```c
typedef char * STRING;

STRING a, b;
```

其中 `STRING a, b;` 等价于 `char * a, * b;`.
而如果是用 `#define char * STRING`, 那么就会被替换成 `char * a, b;`.

## Section 14.13: 复杂类型说明

这里是重要内容！
