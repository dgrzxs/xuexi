#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//编写函数，不允许创建临时变量，求字符串长度

//#include <string.h>

//先不考虑第二句话

//自己写的，直接用的char a[]数组

//int my_strlen(char a[])
//{
//	int i = 0;
//	for (i = 0; a[i] != '\0'; i++) {
//		;
//	}
//
//	return i;
//}
//int main()
//{
//	char arr[] = "asdhasdnkah";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//鹏哥写的，用的是数组第一个元素的指针变量

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//不允许使用临时变量
//my_strlen("bit");
//1 + my_strlen("it"):
//1 + 1 + my_strlen("t");
//1 + 1 + 1 + my_strlen("");
//1 + 1 + 1 + 0 = 3

//int my_strlen(char* str)
//{
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//求n的阶乘。(不考虑溢出)

//int Fac(int n)
//{
//	if (n > 1) {
//		return n * Fac(n - 1);
//	}
//	else {
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fac(n));
//
//	return 0;
//}
//有一些功能：可以用跌代(循环就是一种跌代)的方式实现，也可以用递归实现

//求第n个斐波那契数。(不考虑溢出) - 前两个数之和等于第三个数

//递归确实可以解决这个问题，但是效率太低

//int count = 3;

//int Fib(int n)
//{
//	//计算重复度太多，第3个斐波那契数的计算次数，n越大，算的次数越多
//	if (n == 3) {
//		count++;
//	}
//
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fib(n));
//	printf("count = %d\n", count);
//
//	return 0;
//}

//用跌代来求着试一下，看看能否提高效率
//自己写的

//int Fib(int n)
//{
//	int i = 0;
//	int ret = 1, x = 1, y = 1;
//
//	/*if (n <= 2) {//这一段完全不需要，ret是1就行了
//		return 1;
//	}
//	else {*/
//		for (i = 3; i <= n; i++) {
//			ret = x + y;
//			x = y;
//			y = ret;
//		}
//		return ret;
//	//}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fib(n));
//
//	return 0;
//}

//鹏哥写的

//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n --;
//	}
//
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fib(n));
//
//	return 0;
//}
//遇到问题，选择正确的方法
//如果问题用递归来写，非常的简单易懂，并且代码没有明显的缺陷，那就用递归
//如果缺陷过大，那就换非递归的方式，比如跌代

//汉诺塔问题
// 
//青蛙跳台阶问题
//一次能跳1或2个台阶
//n个台阶有多少种跳法

//作业
//实现一个函数，判断一个数是不是素数
//利用上面实现的函数打印100到200之间的素数

//int prime_number(int n)
//{
//	int j = 0;
//
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//
//	return 1;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++) {
//		if (prime_number(i)) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//高内聚：所有的功能集中在函数自身
//低耦合：不要和其他函数产生过多的调用

//实现函数判断year是不是润年

//int leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if (leap_year(year)) {
//		printf("是闰年\n");
//	}
//	else {
//		printf("不是闰年\n");
//	}
//
//	return 0;
//}

//实现一个函数来交换两个整数的内容

//void exchange(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("a = %d, b = %d\n", a, b);
//
//	exchange(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

void multiplication_table(int n)
{
	int i = 0, j = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i * j);
		}

		printf("\n");
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);

	multiplication_table(num);

	return 0;
}