# README

C 预处理器和 C 库。

预处理指令

```c
#define
#include
#ifdef
#else
#endif
#ifndef
#if
#elif
#line
#error
#pragma
```

关键字

```c
_Generic;
_Noreturn;
_Static_assert;
```

函数和宏

```c
sqrt();
atan();
atan2();
exit();atexit();
assert();
memcpy();
memmove();
va_start();va_arg();va_copy();va_end();
```


## Section 01 烦人的宏

不知道，不想总结，遇到问题再说吧，反正见过面了。



## Section 02 其他指令

- `#undef` 用于取消 `#define` 产生的宏定义，这样可以在链接多个文件时更安全。
- `#ifdef, #else, #endif` 产生了条件编译。条件编译取决于预处理器是否认为标识符已经被定义。这里的定义和普通变量不是同一个东西，必须是 `#define` 定义的宏标识符或者预定义宏标识符，比如 `__DATE__`, `__FILE__`.
- `#ifndef` 意思是如果没有定义，和 `#ifdef` 的使用方式相反，但思路是一致的。
- `#if`, `elif` 也是为了控制头文件。
- `#line` 为 `__LINE__` 宏赋值，通常用于重置
- `#error` 和 `#if` 这些宏组合起来使用，预处理器可以通过它发送错误信息。比如 `#error Not c11` 可以发送 `Not c11` 的错误信息。
- 


**预定义宏**

- `__DATE__` 表示预处理日期，字符串字面量。
- `__FILE__` 表示当前源代码的名称，字符串字面量。
- `__LINE__` 表示当前源代码文件中的行号，整型。
- `__STDC__` 设置为 1 时，表示实现遵循 C 标准。（不懂）
- `__STDC_VERSION__` 表示支持的标准。
- `__TIME__` 表示翻译代码的时间，字符串字面量。

这些预定义宏帮助实现了编译器报告错误（行号、文件等）。

## Appendix 程序清单

1. preproc.c | 一个用于展示各种预处理指令的样例。 

`#define` 指令定义的内容在预处理完成后不会替换字面量字符创中的内容

2. mac_arg.c | 一个展示类函数宏的行为的样例.

类函数宏是恼人的，应当尽量避免。

3. subst.c | 使用宏参数创建字符串, `#x` 转化为 `"x"`, 这是令人头疼。

4. glue.c | 展示预处理指令中的 `##`, 我感觉这非常糟糕。它确实是粘合剂... 但还会和类函数宏等组合起来使用，看起来非常糟糕。

5. variadic.c | 宏展开形成的可变参数函数. 似乎宏的种种设计的最优使用场景类似与 lambda 函数?

6. names_st.h, name_st.c, useheader.c | 这三个文件展示了 `#include` 的使用方式。链接是在哪个阶段的？

7. test.c | 测试预定义宏

8. 
