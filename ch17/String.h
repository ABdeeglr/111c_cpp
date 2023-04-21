#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8

/* ---------- Typedef ---------- */
typedef struct string_node {
    char str[SIZE];
    struct string_node * next;
} StringNode;

typedef struct string {
    int size;
    struct string_node * firstnode;
} String;



/* ------ Function Statement ------ */
// 从 stdin 读取内容, 创建String
String * getString();
// 打印 String
void putString(String * using_str);
// 释放 String
void freeString(String * using_str);


/* ---------- Functions ---------- */
String * getString() {
    // 创建 String 对象, 分配大小为 4+8=12 字节的内存  
    String * ret_val = (String *)malloc(sizeof(String));
    
    // 创建 StringNode 指针作为首节点, 大小为 SIZE+8 字节
    StringNode * head = (StringNode *)malloc(sizeof(StringNode));

    // 将 String 的首节点绑定到 head
    ret_val->firstnode = head;
    // 初始化 String 的节点数
    ret_val->size = 1;

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
            ret_val->size++;
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
    for (i = 0; i < using_str->size; i++) {
        char * sentence = current->str;
        unsigned short int index;
        for (index = 0; index < SIZE; index++) {
            putchar(sentence[index]);
        }
        current = current->next;
    }
    putchar('\n');

}


void freeString(String * using_str) {
    int size = using_str->size;
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
