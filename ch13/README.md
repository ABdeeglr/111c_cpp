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




## Appendix: Program List

1. count.c | 如何用标准 IO 读取文件和统计文件中的字符数.

2. reducto.c | 压缩文件程序。你就说它能不能压缩吧？

3. 









