# 字符串与字符串函数

**C 语言中常见的 I/O 函数**

| 输入      | 输出      | 说明 |
| --------- | --------- | ---- |
| gets()    | puts()    |      |
| fgets()   | fputs()   |      |
| scanf()   | printf()  |      |
| getchar() | putchar() |      |



**string.h 中常用的处理字符串的函数**

1. `strlen()`
2. `strcat()`
3. `strncat()`
4. `strcmp()` 用于解决比较两个字符串时，比较了指针地址的错误
5. `strncmp()` 实现了只比较前 n 个字符
6. `strcpy()`
7. `strncpy()`
8. `sprintf()` 用于创建格式化字符串



妈的，每一次都需要考虑内存分配，好烦啊！







## 表示字符串与字符串函数

- `puts()` 函数

`puts()` 函数类似于 `printf()` 函数，但是它只能接受并输出字符串，并且在末尾具有自动换行的功能。



**1.1 定义字符串的方式**

1. 使用字符串常量定义字符串
2. 使用字符串数组定义字符串
3. 使用指向 char 的指针定义字符串



使用字符串数组声明字符串时，数组的长度至少比字符串的长度多 1. 如果一个字符串数组的末尾不是 `\0`, 那么它是字符数组而不是字符串。

`char word[10] = "abcde";` 是以下形式的简化，或者说一个语法糖

`char word[10] = {'a', 'b', 'c', 'd', 'e', '\0'};`





## 字符串输入

不要只初始化指针。

使用 `gets()` 函数可以获取一整行的输入，然而，它会直接把指针和字符串绑定起来，如果输入的字符串长度超过该指针指向的字符串的长度，就有可能造成缓冲区溢出 (buffer overflow). 

`fputs()` 和 `fgets()` 优化了上述函数的缺点，并且能够对文件进行读写，代价则是使用起来不那么方便了。`fputs()` 和 `fgets()` 的使用方法如下。

- `fgets(char* str, int length, FILE or stdin)`
- `fputs(char* str, FILE or stdout)`







## 字符串输出

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char side_a[] = "Side A";
	char dont[] = {'x', 'Y', 'Z', '!'};
	char sied_b[] = "Side B";

	puts(dont);
	printf("dont->%p, side_a->%p\n",dont, side_a);

	return 0;
}
```

这一段代码的输出结果是：

```bash
xYZ!Side A
dont->0x7fff4bff6576, side_a->0x7fff4bff657a
```

为什么字符串会以这种连续的形式存储，真的很奇怪。



## 自定义输入、输出函数

比较无趣。使用 putchar 和 getchar 进行自定义



## 字符串函数







## 字符串示例





## ctype.h 字符串函数和字符串

ctype.h 中的函数不处理字符串，但是能够识别字符串中的字符，比如说：

1. `toupper()` 函数将字符串中的每一个字符都设定为大写
2. `ispunct()` 函数识别字符串中的标点符号的个数







## 命令行参数

C 编译器允许 main 函数没有参数或者有两个参数（通常来说是这样的）。



一些环境中允许用双引号将多个单词括起来作为一个参数传递给 main.



## 把字符串转换为数字

使用 `atoi()` 函数，将字符转换为整数。

`strtol()` 和 `strtoul()` 提供了更多实现。

`itoa()` 则将数字转化为字符。



## 关键概念总结
