#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8

/* ---------- Typedef ---------- */
typedef struct string_node {
    char str[SIZE]; // 字符存储的单位长度
    struct string_node * next;
} StringNode;

typedef struct string {
    int item_size; // 存储的字符节点数
    struct string_node * firstnode; // 字符节点的头指针
} String;



/* ------ Function Statement ------ */
// 从 stdin 读取内容, 创建String. 开发完成.
String * getString();
// 打印 String, 出现了bug
void putString(String * using_str);
// 释放 String. 开发完成.
void freeString(String * using_str);
// 将 String 对象转化为 char* 字符串
char * toString(String * using_str);



/* ---------- Functions ---------- */
String * getString() {
    // 创建 String 对象, 分配大小为 4+8=12 字节的内存  
    String * ret_val = (String *)malloc(sizeof(String));
    
    // 创建 StringNode 指针作为首节点, 大小为 SIZE+8 字节
    StringNode * head = (StringNode *)malloc(sizeof(StringNode));

    // 将 String 的首节点绑定到 head
    ret_val->firstnode = head;
    // 初始化 String 的节点数
    ret_val->item_size = 1;

    // 在栈分配两个指针
    StringNode * current, * prev;
    // 将当前处理的指针与 head 进行绑定
    current = head;

    // 初始化两个中间变量，ch 用于读取和注入数据，count 用于控制节点增长
    char ch;
    int count = 1;
    while((ch = getchar()) != EOF) {
        if (ch == '\n' || ch == '\0') break;

        current->str[count - 1] = ch;
        count++;
        
        if (count % (SIZE+1) == 0) {
            prev = current;
            current = (StringNode *)malloc(sizeof(StringNode));
            prev->next = current;
            ret_val->item_size++;
            count = 1;
        }
    }

    current->next = NULL;

    return ret_val;
}


void putString(String * using_str) {
    // have implict bugs here
    int i;
    StringNode * current = using_str->firstnode;
    char * sentence;
    for (i = 0; i < using_str->item_size; i++) {
        sentence = current->str;
        // 这里需要重新编写
        
        current = current->next;
        if (current) break;
    }
    putchar('\n');

}


void freeString(String * using_str) {
    int size = using_str->item_size;
    StringNode * current = using_str->firstnode;
    StringNode * nodelist[size];
    unsigned short int index = 0;
    while (current != NULL) {
        nodelist[index] = current;
        current = current->next;
        index++;
    }
    nodelist[index] = current;

    for (index = 0; index < size; index++) {
        free(nodelist[index]);
    }

    //free(using_str->firstnode);
    free(using_str);
}


char * toString(String * using_str) {
    char * res = (char*)malloc(using_str->item_size*SIZE);
    StringNode * current = using_str->firstnode;
    char * ch = res;
    int index = 0;
    while (index < using_str->item_size) {
        for (int i = 0; i < SIZE; i++) {
            *ch = current->str[i];
            ch++; 
        }
        
        current = current->next;
    }
}