//��װ�������� 
//�������:Notepad++
//����ʱ��:2020.4.2
//������:"������"һλ���������ѧ��!!!
//�����ʲôû���õĵط�����ϵ��!!!
//��Ҫת������ϵ��!!!
//֪ʶ������,��ϲ����!!!
//qq:1745488156(������)

#include"xihale.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>//exit  ���������
#include <time.h>

using namespace std;

//����1
void fcin(char *name,char *str)
{
	FILE *file = fopen(name,"w");//���ļ�w��д��ʽ:��ɾ���ļ�����ַ�,������!

		while(*str!=NULL)
		{
			fputc(*str++,file);
		}
		fclose(file);
}

//����2
void fcin2(char *name,char *str)
{
	FILE *file = fopen(name,"a");//���ļ�a��д��ʽ:ֱ�����ļ�ĩβ����ַ�!

	while(*str!=NULL)
		{
			fputc(*str++,file);
		}
		fclose(file);
}

//����3
void fcout(char *name)
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
void fcopy(FILE *c,FILE *p,char *strc,char *strp)
{
	char ch;
	int i;
	c = fopen(strc,"r");//���������(�����︴��)
	p = fopen(strp,"w");//�������д(������ճ��)
	
		while((ch=fgetc(c))!=EOF)
			fputc(ch,p);
}


void irand(int n,int n1,int i)//�Ǵ�n��n1,ѭ��i��
{
	srand(time(NULL));
	for (; i >= 0; i--)
	{
		printf("%d ",rand() %(n>n1?n:n1)+(n<n1?n:n1));
	}
}

void irand1(int n,int n1,int i)//�Ǵ�n��n1,ѭ��i��
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

char *bspace(char str1[20])//ȥ���ո���
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
