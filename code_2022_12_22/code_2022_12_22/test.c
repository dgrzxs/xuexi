#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int  g_val = 2021;
//
//int main()
//{
//	printf("hehe\n");
//	printf("1:%d\n", g_val);
//
//	{
//		int a = 10;
//
//		printf("a = %d\n", a);
//		printf("2:%d\n", g_val);
//
//	}
//
//	printf("3:%d\n", g_val);
//
//	return 0;
//}

//extern int g_val;//����һ�±���
//
//int main()
//{
//	printf("%d\n", g_val);
//	
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	return 0;
//}

//enum Sex//4.ö�ٳ���������һһ�оٵĳ���
//{
//	MALE,
//	FEMALE,
//	SECRET//����ö�����͵ı���δ�����ܵ�ȡֵ
//};
//
//#define MAX 10000;//3.����ı�ʶ������
//
//int main()
//{
//	//12;//1.���泣��
//	//123;
//	//"a";
//	//"abc";
//	////2.const���εĳ�����
//	//const int num = 10;//num���ǳ����� - ���г�����(���ܱ��ı������)
//	//int arr[10] = { 0 };//10��Ԫ��
//
//	//const int n = 10;
//	//int arr2[n] = { 0 };//���������ǳ���
//
//	//int MAX = 20000;//err
//
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	enum Sex s = MALE;//ֻ��ȡ����������е�һ��
//	printf("MALE = %d\n", MALE);
//	printf("FEMALE = %d\n", FEMALE);
//	printf("SECRET = %d\n", SECRET);//ö�ٳ����ӵ�һ�������һ
//
//	return 0;
//}

//�ַ�������һ���ַ�--��˫������������һ���ַ�

#include <string.h>//����ͷ�ļ���strlen

//int main()
//{
//	//"asd";
//	//"hello world!";
//
//	////�ַ����� - ������һ����ͬ���͵�Ԫ��
//	////�ַ����ڽ�β��λ��������һ��\0���ַ�
//	////\0���ַ����Ľ�����׼
//	//char arr[] = "hello";
//
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c'};
//
//	//��ӡ�ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//��һ���ַ����ĳ���
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\test.c");//ת���ַ� - ת������ԭ������˼
//	//printf("ab\ncd");
//
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//	//printf("%d", 100);��ӡ����
//	//printf("%c", 'a');��ӡ�ַ�
//	//printf("%s", "abc");��ӡ�ַ���
//
//	printf("c:\\test\\test.c");
//	printf("\a");
//
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", '\130');//8���Ƶ�130��תΪʮ������88
//	////X - ASCII��ֵ��88
//	//printf("%c\n", '\x30');//16���Ƶ�30��תΪʮ������48
//	////0 - ASCII��ֵ��48
//
//	printf("%d\n", strlen("c:\test\328\test.c"));//�����ȣ��������˾������ת���ַ�
//
//	return 0;
//}
