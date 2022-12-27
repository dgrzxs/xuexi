#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int age = 20;
//	if (age >= 18) {
//		printf("成年\n");
//	}
//	else {
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 110;
//
//	if (age < 18) {
//		printf("未成年\n");
//	}
//	else if(age >= 18 && age <26){
//		printf("青年\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("老年\n");
//	}
//	else {
//		printf("老不死\n");
//	}
//	return 0;
//}

//int main()
//{
//	test();
//	return 0;
//}
//int test()
//{
//	if (0) {
//		printf("hehe\n");
//		return 0;
//	}
//	printf("haha\n");
//	return 1;
//}

//int main()
//{
//	int num = 15;
//	if (1 == num % 2) {
//		printf("奇数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100) {
//		if (1 == i % 2) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期%d\n", day);
//		break;
//	case 2:
//		printf("星期%d\n", day);
//		break;
//	case 3:
//		printf("星期%d\n", day);
//		break;
//	case 4:
//		printf("星期%d\n", day);
//		break;
//	case 5:
//		printf("星期%d\n", day);
//		break;
//	case 6:
//		printf("星期%d\n", day);
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永远的终止循环
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断是否需要进行下一次循环
//	while (i <= 10) {
//		if (5 == i) {
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

////EOF - end of file - 文件结束标志
//int main()
//{
//	printf("%d\n", EOF);//EOF是-1
//	int ch = getchar();//从键盘上获取一个字符(输入一个字符)
//	//获取失败返回EOF
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//输入ctrl+z - getchar读取失败，返回EOF
//
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//
//	return 0;
//}

//作业

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int min = 0;
//
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		min = a;
//	}
//	else {
//		min = b;
//	}
//
//	for (i = min; i >= 1; i--) {
//		if (0 == a % i && 0 == b % i) {
//			printf("%d\n", i);
//			break;
//		}
//	}//最小公倍数 = a*b/最小公约数
//	return 0;
//}

//int main()
//{
//	for (int i = 1000; i <= 2000; i++) {
//		if (0 == i % 4 && 0 != i%100) {
//			printf("%d ", i);
//		}
//		else if (0 == i % 400) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求100到200之间的素数
//方法一

int main()
{
	for (int i = 100; i <= 200; i++) 
	{
		for (int j = 2; j <= i; j++) 
		{
			if (0 == i % j) 
			{
				if (i == j) 
				{
					printf("%d ", i);
				}
				else 
				{
					break;
				}
			}
		}
	}

	return 0;
}

//优化后：方法二

#include <math.h>//sqrt的引用头文件

int main()
{
	int i = 0;
	int j = 0;
	
	for (i = 101; i <= 200; i+=2) {
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) {//sqrt是开平方
			if (0 == i % j) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf("%d ", i);
		}
	}

	return 0;
}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int max = 0, min = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b){
//		max = a; min = b;
//	}
//	else{
//		max = b; min = a;
//	}
//	if (c > max){
//		printf("%d %d %d\n", c, max, min);
//	}
//	else{
//		if (c < min)
//			printf("%d %d %d\n", max, min, c);
//		else
//			printf("%d %d %d\n", max, c, min);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++) {
//		if (0 == i % 3) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}