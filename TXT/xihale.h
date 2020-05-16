#ifndef _XIHALE_H_
#define _XIHALE_H_
#include "xihale.c"

void fcin(char*);//w格式:先删掉文件里的字符,再输入!
void fcin1(char*);//a格式:直接在文件末尾添加字符!
void fcout(char*);//r格式:读写字符!
void fcopy(FILE*,FILE*,char*,char*);//文件复制函数 
void irand1(int,int,int);//int 型 
void irand(int,int,int);//有空格
void crand1(int,char,int);//char 型 
void crand(int,char,int);//有空格
int len(char *);
int len(int);
int len(double);
void bspace(char*, char*);


#endif
