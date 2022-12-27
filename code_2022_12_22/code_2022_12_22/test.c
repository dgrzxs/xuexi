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

//extern int g_val;//声明一下变量
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

//enum Sex//4.枚举常量，可以一一列举的常量
//{
//	MALE,
//	FEMALE,
//	SECRET//这种枚举类型的变量未来可能的取值
//};
//
//#define MAX 10000;//3.定义的标识符常量
//
//int main()
//{
//	//12;//1.字面常量
//	//123;
//	//"a";
//	//"abc";
//	////2.const修饰的常变量
//	//const int num = 10;//num就是常变量 - 具有常属性(不能被改变的属性)
//	//int arr[10] = { 0 };//10个元素
//
//	//const int n = 10;
//	//int arr2[n] = { 0 };//常变量不是常量
//
//	//int MAX = 20000;//err
//
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	enum Sex s = MALE;//只能取定义的三种中的一种
//	printf("MALE = %d\n", MALE);
//	printf("FEMALE = %d\n", FEMALE);
//	printf("SECRET = %d\n", SECRET);//枚举常量从第一个往后加一
//
//	return 0;
//}

//字符串就是一串字符--用双引号括起来的一串字符

#include <string.h>//引用头文件，strlen

//int main()
//{
//	//"asd";
//	//"hello world!";
//
//	////字符数组 - 数组是一组相同类型的元素
//	////字符串在结尾的位置隐藏了一个\0的字符
//	////\0是字符串的结束标准
//	//char arr[] = "hello";
//
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c'};
//
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//求一下字符串的长度
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//随机值
//
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\test.c");//转义字符 - 转变了他原来的意思
//	//printf("ab\ncd");
//
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	//printf在打印数据的时候，可以指定打印的格式
//	//printf("%d", 100);打印整型
//	//printf("%c", 'a');打印字符
//	//printf("%s", "abc");打印字符串
//
//	printf("c:\\test\\test.c");
//	printf("\a");
//
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130，转为十进制是88
//	////X - ASCII码值是88
//	//printf("%c\n", '\x30');//16进制的30，转为十进制是48
//	////0 - ASCII码值是48
//
//	printf("%d\n", strlen("c:\test\328\test.c"));//数长度，数明白了就理解了转义字符
//
//	return 0;
//}
