#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////博客内容
// 
//int main()
//{
//	char password[20] = { 0 };
//	char arr[20] = { 0 };
//	
//	printf("请输入一个字符串:>");
//	scanf("%s", password);
//	printf("请输入一个字符串:>");
//	scanf("%s", arr);
//
//	printf("%s\n", password);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//void empty()
//{
//	int ch = 0;
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[20] = { 0 };
//
//	scanf("%s", arr1);
//	empty();
//	scanf("%s", arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

////用函数找到俩个整数之间的较大值
// 
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

////用函数交换变量的值
// 
//void Swap(int x, int y)//函数无效果//传值调用
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换2个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//void Swap(int* pa, int* pb)//将a，b的地址赋给pa，pb - 指针变量//传址调用
//{
//	int z = 0;
//	z = *pa;//pa存储地址，*pa使用地址指向地址所代表的变量，* - 解应用
//	*pa = *pb;//要在函数外改变函数内变量的值，需要使用地址
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换2个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);//取a，b的地址
//	printf("交换后：a=%d b=%d\n", a, b);//通过调用地址成功交换了a，b的值
//
//	return 0;
//}

////用函数找到100到200之间的素数
// 
//int is_prime(int n)
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
//	int count = 0;
//
//	for (i = 100; i <= 200; i++) {
//		if (is_prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//用函数求闰年

//int is_leap_year(int n)//函数如果不写返回类型，默认返回int类型
//{
//	return (0 == n % 4 && 0 != n % 100 || 0 == n % 400);
//}
//int main()
//{
//	int y = 0;
//	//scanf("%d", &y);
//
//	for (y = 1000; y <= 2000; y++) {
//		if (is_leap_year(y)) {
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

////函数的嵌套调用和链式访问
////函数的嵌套
//void test2()
//{
//	printf("hehe\n");
//}
//int test1()
//{
//	test2();
//	return 0;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//
////链式访问
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问 - 将一个函数的返回值作为另一个函数的参数
//	//printf("%d\n", strlen("abc"));
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	printf("%d", printf("%d", printf("%d", 43)));//链式访问
//	//第一个printf函数会先执行，需要第二个printf函数的返回值，第一个printf暂停
//	//此时就会执行第二个printf函数，需要第三个printf函数的返回值，第二个printf暂停
//	//然后就会执行第三个printf函数，第三个printf函数会打印一个43在屏幕上，然后输出一个返回值交给第二个printf函数
//	//printf函数的返回值是这个函数打印在屏幕上的字符个数，第三个printf函数打印了43，有俩个字符数
//	//所以第三个printf函数返回值为2，第二个printf函数就会打印出这个2
//	//第二个printf函数只打印了一个字符2，所以他的返回值是1
//	//第一个printf函数就会打印这个1，所以结果就是打印了4321
//
//	return 0;
//}

//int main()
//{
//	int Add();//函数声明 - 函数写在main之后时，要使用该函数，需要提前声明该函数
//	
//	int a = 10;
//	int b = 20;
//	
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = Add(a, b);
	printf("%d\n", c);

	c = Sub(a, b);
	printf("%d\n", c);

	return 0;
}