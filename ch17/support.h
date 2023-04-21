#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

#define TSIZE 45 /*影片名的最大长度*/
#define FMAX 5 /*影片的最大数量*/


typedef struct film{
    char title[TSIZE];
    int rating;
    Film * pton; /*指向下一个结构的指针, pointer to the next*/
} Film;

// 从头指针开始，动态创建整个链表
void create_movies(Film * movie_head_pointer);

// 通过链表的头指针，遍历全部节点
void show_movies(Film * movie_head_pointer);

// 通过链表的头指针，释放全部节点的内存
void free_movies(Film * movie_head_pointer);

// 填充一部影片的信息
Film * desc_movie();

// 一个行为良好的读取函数
char * s_gets(char * st, int n);

// 检测错误时退出
void die(const char * message);