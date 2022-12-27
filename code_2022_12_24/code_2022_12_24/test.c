#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//大量频繁使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//}

////类型重命名
//typedef unsigned int u_int;
////张伟爱学习 - 张三
//int main()
//{
//	unsigned int num1 = 100;//signed - 有符号的；unsigned - 无符号的；
//	u_int num2 = 100;//这两行作用相同
//
//	return 0;
//}

//static - 静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//
//	while (i < 10) {
//		test();
//		i++;
//	}
//
//	return 0;
//}

////extern声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


////define是一个预处理指令
////1.定义符号

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

////2.定义宏
//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));//宏没加括号就变成11了
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p是专门用来打印地址的
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//指针就是地址

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作
//	//*pa就是通过pa里边的地址找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}


//结构体可以让C语言创建新的类型出来
//创建一个学生类型

//struct Stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建一个书的类型
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量名
//
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
//
//	printf("%d\n", sizeof(s));//创建结构体时的字节数相加，20个char + int的4 + double的8 = 32字节
//	printf("%d\n", sizeof(ps));//32位地址大小均为4个字节
//	printf("%p\n", &s);
//
//	return 0;
//}

//作业

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("输入俩个整数：");
//	scanf("%d%d", &a, &b);
//
//	int max = Compare(a, b);
//	printf("较大值为：%d\n", max);
//
//	return 0;
//}
////一般不建议将函数名称写成全大写
//int Compare(int x, int y)
//{
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}

//int main()
//{
//	printf("     **     \n     **     \n************\n    *  *    \n    *  *");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a % 5 == 0) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//
//	return 0;
//}