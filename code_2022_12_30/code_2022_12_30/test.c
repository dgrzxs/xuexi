#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数递归

//int main()
//{
//	printf("hehe\n");
//
//	main();
//
//	return 0;
//}

////接受一个整型值(无符号)，按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4.
////自己写的，没有用函数递归
// 
//int main()
//{
//	unsigned int n = 0;
//	int arr[20] = { 0 };
//	int i = 0;
//
//	scanf("%u", &n);
//
//	do {
//		arr[i] = n % 10;
//		n = n / 10;
//		i ++;
//	} while (n > 0);
//
//	i--;
//
//	for (i; i >= 0; i--) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

////鹏哥写的，运用函数递归 - 函数自己调用自己 - 大事化小
////想法：1234 -> print1
////print1:123 -> print2 ,等待打印4
////print2:12 -> print3 ,等待打印3
////print3:12 -> print4 ,等待打印2
////print4:1 ,直接打印1；回到print3，打印2；回到print2，打印3；回到print1，打印4
//
//void print(unsigned int n)
//{
//	if (n > 9) {
//		print(n / 10);//函数递归中，判断条件和递归参数非常重要 - (n > 9 和 n / 10)
//	}
//	//函数需要顺序执行，所以在执行printf函数之前，会先执行if
//	//第一次进入print函数，第一print函数里的n = 1234 > 10，所以执行第二次print函数
//	//第二个print函数里的n = 123 > 10，所以执行第三次print函数
//	//第三个print函数里的n = 12 > 10，所以执行第四次print函数
//	//第四个print函数里的n = 1 < 10，跳过它的if执行它的printf函数，打印n = n % 10 = 1，第四个print函数执行完成
//	//第四个print函数执行完代表第三个print函数的if执行完成，接着执行它的的printf函数，打印n = 12 % 10 = 2，第三个print函数执行完成
//	//第三个print函数执行完代表第二个print函数的if执行完成，接着执行它的的printf函数，打印n = 123 % 10 = 3，第二个print函数执行完成
//	//第二个print函数执行完代表第一个print函数的if执行完成，接着执行它的的printf函数，打印n = 1234 % 10 = 4，所有print函数执行完成
//	//回到main函数
//	
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}

void test(int n)
{
	if (n < 10000) {
		n++;
		test(n);
	}
}
int main()
{
	int a = 10;
	test(1);

	printf("%d\n", a);
	return 0;
}
//函数递归
//1. 存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2. 每次递归调用之后越来越接近这个限制条件
//3. 递归的层次不能太深，不然会出出现 栈溢出 的问题