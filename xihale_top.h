//封装函数调试
//测试软件:Notepad++
//调试时间:2020.4.2
//制作者:"嘻哈乐"一位有梦想的中学生!!!
//如果有什么没做好的地方请联系我!!!
//需要转载请联系我!!!
//知识量有限,不喜勿喷!!!
//qq:1745488156(嘻哈乐)

#ifndef _XIHALE_TOP_H_
#define _XIHALE_TOP_H_ "xihale.top.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>//exit  程序结束符
#include <time.h>

using namespace std;

//函数1
void fin(char *name,char str[],bool wa)
{
	int i=0;
	FILE *file = fopen(name,(wa?"w":"a"));

	while(str[i]!='\0')
	{
		fputc(str[i++],file);
	}
	fclose(file);
}

//函数3
void fout(char *name)
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
int copy(char strc[],char strp[])
{
	FILE *c,*p;
	char ch;
	int i;
	if((c = fopen(strc,"r"))==NULL)return 0;//这个用来读(从这里复制)
	if((p = fopen(strp,"w"))==NULL)return 0;//这个用来写(在这里粘贴)

	while((ch=fgetc(c))!=EOF)
		fputc(ch,p);
	return 0;
}

int len(char str[])
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
	for(; a/10*10==a;)a*10;
	for (i = 0; a != 0; i++)a /= 10;
	return i;
}

char *bspace(char str1[])   //去除空格函数
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

#endif
