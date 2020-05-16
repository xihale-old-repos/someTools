//封装函数调试 
//测试软件:Notepad++
//调试时间:2020.4.2
//制作者:"嘻哈乐"一位有梦想的中学生!!!
//如果有什么没做好的地方请联系我!!!
//需要转载请联系我!!!
//知识量有限,不喜勿喷!!!
//qq:1745488156(嘻哈乐)

#include"xihale.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>//exit  程序结束符
#include <time.h>

using namespace std;

//函数1
void fcin(char *name,char *str)
{
	FILE *file = fopen(name,"w");//打开文件w是写格式:先删掉文件里的字符,再输入!

		while(*str!=NULL)
		{
			fputc(*str++,file);
		}
		fclose(file);
}

//函数2
void fcin2(char *name,char *str)
{
	FILE *file = fopen(name,"a");//打开文件a是写格式:直接在文件末尾添加字符!

	while(*str!=NULL)
		{
			fputc(*str++,file);
		}
		fclose(file);
}

//函数3
void fcout(char *name)
{
	char ch;
	FILE *file = fopen(name,"r");//打开文件r是读格式
	
	while((ch=fgetc(file))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(file);
}


//文件复制函数
//函数4
void fcopy(FILE *c,FILE *p,char *strc,char *strp)
{
	char ch;
	int i;
	c = fopen(strc,"r");//这个用来读(从这里复制)
	p = fopen(strp,"w");//这个用来写(在这里粘贴)
	
		while((ch=fgetc(c))!=EOF)
			fputc(ch,p);
}


void irand(int n,int n1,int i)//是从n到n1,循环i次
{
	srand(time(NULL));
	for (; i >= 0; i--)
	{
		printf("%d ",rand() %(n>n1?n:n1)+(n<n1?n:n1));
	}
}

void irand1(int n,int n1,int i)//是从n到n1,循环i次
{
	srand(time(NULL));
	for (; i >= 0; i--)
	{
		printf("%d",rand() % n+n1);
	}
}

void crand(int n,char a,int i)
{
	srand(time(NULL));
	for (; i >= 0; i--)
	{
		printf("%c ",rand() % 26+a);
	}
}

void crand1(int n,char a,int i)
{
	srand(time(NULL));
	for (; i >= 0; i--)
	{
		printf("%c",rand() % 26+a);
	}
}

int len(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
int len(int a)
{
	int i;
	for (i = 0; a != 0; i++)a /= 10;
	return i;
}
int len(double a)
{
	int i;
	for (i = 0; a != 0; i++)a /= 10;
	return i;
}

char *bspace(char str1[20])//去除空格函数
{
	char *str2;
	int i, j = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != ' ')//去除空格
			str2[j++] = str1[i];
	}
	str2[j] = '\0';
	return str2;
}
