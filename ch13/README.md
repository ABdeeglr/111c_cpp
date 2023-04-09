# README

Readme for "C primer plus": Chapter 13.

**相关函数**

1. fopen() | 打开文件的函数，返回函数指针, 该指针在整个文件读写期间保持不变
2. getc() | 根据函数指针读取文件，但是我不知道它的机制
3. fclose() | 根据函数指针关闭文件


### Main

### Concepts

**文件指针**

由 `ifopen()` 返回的文件指针，定义在 `stdio.h` 文件中, 它不指向实际文件，而是交给 IO 函数使用的一个中间对象，是一个 C 结构。

文件指针包含了文件信息、IO 函数所需的缓冲区信息。

**四个函数**

getc(), putc() 与 getchar(), putchar() 之间相互对应。

getc() 读取文件中的字符。
getchar() 读取 stdin 中的字符。
所以在概念上，getc(stdin) 等价于 getchar().

putc(ch, file_pointer) 也形似 putchar(ch).

### 标准 IO 机制

调用 fopen() 函数是 IO 过程的第一步，该函数完成了三件事，分别为：
1. 打开一个文件
2. 创建缓冲区
3. 创建文件指针及其对应的数据结构

**打开一个文件**

```c
#include <stdio.h>

int main(void) {
    FILE * fp1;
    FILE * fp2;

    fp1 = fopen("count.c", "r");
    fp2 = fopen("count.c", "r");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
```

上面的代码在编译后可以顺利运行，如果编译器没有优化的化，这疑问着同一个文件被同时打开了？

不了解文件管理系统似乎无法真正理解 IO？


**二进制IO**

一个 double 数值，比如 1/3, 如果使用 fprintf() 保存其内容，通常会以文本形式保存为"1.3"或"1.333"等，但不管怎样，再次读取时它就变成了"1.3...300"这样的数值。也就是说，从存储到读取，该数值的精度被降低了。

为了保证存储和读取时数据的精确存储，有必要使用二进制 IO 函数，分别是 fread() 和 fwrite().




## Appendix: Program List

1. count.c | 如何用标准 IO 读取文件和统计文件中的字符数.

2. reducto.c | 压缩文件程序。你就说它能不能压缩吧？

3. duopen.c | 一个驱动程序，测试能否同时打开两个文件

4. append.c | 展示标准 IO 的函数
