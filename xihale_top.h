//��װ��������
//�������:Notepad++
//����ʱ��:2020.4.2
//������:"������"һλ���������ѧ��!!!
//�����ʲôû���õĵط�����ϵ��!!!
//��Ҫת������ϵ��!!!
//֪ʶ������,��ϲ����!!!
//qq:1745488156(������)

#ifndef _XIHALE_TOP_H_
#define _XIHALE_TOP_H_ "xihale.top.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>//exit  ���������
#include <time.h>

using namespace std;

//����1
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

//����3
void fout(char *name)
{
	char ch;
	FILE *file = fopen(name,"r");//���ļ�r�Ƕ���ʽ

	while((ch=fgetc(file))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(file);
}


//�ļ����ƺ���
//����4
int copy(char strc[],char strp[])
{
	FILE *c,*p;
	char ch;
	int i;
	if((c = fopen(strc,"r"))==NULL)return 0;//���������(�����︴��)
	if((p = fopen(strp,"w"))==NULL)return 0;//�������д(������ճ��)

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

char *bspace(char str1[])   //ȥ���ո���
{
	char *str2;
	int i, j = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != ' ')//ȥ���ո�
			str2[j++] = str1[i];
	}
	str2[j] = '\0';
	return str2;
}

#endif
