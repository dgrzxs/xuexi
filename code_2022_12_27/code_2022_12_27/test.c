#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//作业

////二分查找法
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}

////猜数字游戏
// 
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	void menu();
//	void game();
//	srand((unsigned int)time(NULL));
//
//	int input = 0;
//
//	do {
//		printf("猜数字游戏\n");
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏，游戏结束\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//void menu()
//{
//	printf("#####################\n");
//	printf("###### 1. play ######\n");
//	printf("###### 0. exit ######\n");
//	printf("#####################\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int max = 100;
//	int min = 1;
//	int i = 1;
//	int guess = 0;
//	while (1) {
//		printf("请猜一个%d-%d之间的数:>", min, max);
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//			max = guess;
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//			min = guess;
//		}
//		else {
//			printf("恭喜您猜对了！这个数是%d\n", guess);
//			break;
//		}
//		i++;
//	}
//	printf("您一共猜了%d次\n\n", i);
//}

////数一下1-100之间的整数一共出现了多少个数字9
// 
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i <= 100; i++) {
//		if (9 == i % 10) {
//			j++;
//		}
//		if (9 == i / 10) {
//			j++;
//		}
//	}
//	
//	printf("%d\n", j);
//
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
// 
//int main()
//{
//	int i = 0;
//	float n = 0.0;
//
//	for (i = 1; i <= 100; i++) {
//		if (1 == i % 2) {
//			n = n + 1.0 / i;
//		}
//		else {
//			n = n - 1.0 / i;
//		}
//	}
//	
//	printf("%f\n", n);
//
//	return 0;
//}

////求10个整数中的最大值
// 
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//
//	for (i = 0; i < 10; i++) {
//		if (max > arr[i]) {
//			;
//		}
//		else {
//			max = arr[i];
//		}
//	}
//
//	printf("最大的数是%d\n", max);
//
//	return 0;
//}

////在屏幕上输出9*9乘法口诀表
// 
//int main()
//{
//	int i = 0, j = 0;
//	int n = 0;
//
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			n = i * j;
//			if (n < 10) {
//				printf("%d*%d= %d ", j, i, n);
//			}
//			else {
//				printf("%d*%d=%d ", j, i, n);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//作业完成

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag;
//
//	return 0;
//}

////关机程序
////只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
////shutdown -s -t 60  ---关机代码，-s设置关机，-t设置时间
////shutdown -a  ---取消关机，这些是在电脑的命令提示符里用的
//
//#include <stdlib.h>//system的引用头文件
//#include <string.h>//strcmp的引用头文件
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//
//again:
//	printf("你的电脑将在1分钟后关机，如果输入：我是猪，可取消关机\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0) {
//		system("shutdown -a");
//		printf("你是猪，关机取消\n");
//	}
//	else {
//		printf("输入错误\n");
//		goto again;
//	}
//
//	return 0;
//}

//多层循环嵌套的情况下，想要跳出全部循环时，可以使用goto语句，其他情况不建议使用goto语句
//goto只能在一个函数范围内跳转，不能跨函数
//视频P40节，53:23，整蛊用的方法


////两个库函数应用的介绍，要会使用库函数介绍文档
// 
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit!" };
//
//	strcpy(arr1, arr2);//将arr2的内容复制到arr1中
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[] = { "hello bit!" };
//
//	memset(arr, 'x', 5);//将arr的前五个字符改为x
//	printf("%s\n", arr);
//
//	return 0;
//}