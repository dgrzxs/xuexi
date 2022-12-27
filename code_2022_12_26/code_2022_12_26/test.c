#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char possword[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", possword);//输入123回车，缓冲区会留下一个字符'\n'
//	                       //输入123 456回车，缓冲区会留下" 456\n"多个字符
//	                       //scanf只会读取空格前的数据
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区 - getchar，scanf都是读取缓冲区的数据
//	//getchar();//只能处理一个字符 - 这里清理的是'\n'
//	//清理缓冲区中的多个字符
//	int tem = 0;
//	while ((tem = getchar()) != '\n') {
//		;//空语句
//	}
//
//	int ch = getchar();//读取字符，字符是用ASCII码值存储
//	                   //ASCII码值是整型，所以返回值是整型
//	if ('Y' == ch) {
//		printf("确认成功\n");
//	}
//	else {
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9') {
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10) {//判断部分
//		printf("%d ", i);
//
//		i++;//调整部分
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++) {//三个影响循环的因素放在了一起，方便修改
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++) {//建议前闭后开，这样里面的10就是循环次数
//		                      //属于比较好的代码风格
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//判断部分省略，就会恒为真，导致死循环
//	for (;;) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 3; i++) {
//		for (; j < 3; j++) {//省略会带来变化
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int x, y;
//	//俩个变量也是可以的
//	for (x = 0, y = 0; x < 5 && y < 3; x++, y++) {
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//请问循环几次
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) {
//		k++;//笔试题，一次循环都进不去
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	do {
//		printf("%d ", i);//循环体至少要执行一次
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习

//int main()
//{
//	int i = 0;
//	int j = 1;
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		j = i * j;
//		m = m + j;
//	}
//
//	printf("%d %d\n", j, m);
//
//	return 0;
//}

//int main()//二分查找法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//要查找的元素
//	//在arr这个有序数组中查找7这个元素
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("不存在该元素\n");
//	}
//
//	return 0;
//}

//#include <string.h>//使用strlen
//
//#include <windows.h>//使用sleep
//
//int main()
//{
//	char arr1[] = "wellcome to bit!!!!!!";
//	char arr2[] = "#####################";
//	
//	printf("%s\n", arr2);
//	Sleep(500);
//	system("cls");
//
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;//用sizeof就-2，用strlen就-1，sizeof会把'\0'算进去，所以要减2
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//单位毫秒，睡眠0.5秒
//		system("cls");//清空屏幕
//		left++ , right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <string.h>//字符串函数需要引用该头文件
//                   //strlen和strcmp都是字符串函数
//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//	//假设密码是123456
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if(password == "123456"){//err - 俩个字符串比较，不能使用==
//			                      //应该使用strcmp - 字符串比较函数
//		if (strcmp(password, "123456") == 0) {//相同返回值为零
//			printf("登陆成功\n");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3) {
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}

//写一个猜数字的游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//  a.猜对了，就会恭喜你，游戏结束
//  b.猜错了，就会告诉你猜大了，还是猜小了，然后继续猜，知道猜对为止
//3.游戏可以一直玩，除非退出游戏

#include <stdlib.h>//rand，和srand的引用头文件
#include <time.h>//time的引用头文件
//void menu()
//{
//	printf("#####################\n");
//	printf("###### 1. play ######\n");
//	printf("###### 0. exit ######\n");
//	printf("#####################\n");
//}
int main()
{
	void menu();//如果函数在main函数之后，需要在main函数中声明一下该函数
	void game();//如果在之前，则不需要声明

	srand((unsigned int)time(NULL));//专门用来生成随机数的函数设置，写完这一条就能直接使用rand生成随机数了
	//使用rand生成随机数前，需要使用srand获得随机数生成的起点
	//time函数生成随时间变化的时间戳，然后将time的返回值强制类型转换为unsigned int类型
	//unsigned int是srand函数的使用参数，相当于给了srand一个当前时间的大整数，由srand将其设置为随机数的起点
	//time(NULL)是用来获取当前时间的时间戳，本质上得到的是一个当前时间对应的大整数
	//time()这个函数其实保存的是一个历史时间，所以需要用NULL把这个历史时间清空一下
	//time()就会自动保存当前时间了，可以简单的理解为NULL就是给time()初始化
	//每次运行程序的时间不同，那起点就都不一样
	//只要每次在程序运行时定义一次不同随机数的起点，就能保证每次运行程序得到的随机数不同

	int input = 0;

	do {
		printf("1-100之间的猜数字游戏\n");
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}
void menu()
{
	printf("#####################\n");
	printf("###### 1. play ######\n");
	printf("###### 0. exit ######\n");
	printf("#####################\n");
}
void game()
{
	//猜数字游戏的实现
	int ret = rand() % 100 + 1;//rand函数返回了一个0到32767之间的数字
	//%100的余数是0-99，然后+1，范围就是1-100之间的随机数

	int guess = 0;
	int min = 1;
	int max = 100;
	int i = 1;
	while (1) {

		printf("请猜一个%d-%d之间的数字:>", min, max);
		scanf("%d", &guess);
		if (guess > ret) {
			printf("这个数字太大了\n");
			max = guess;
		}
		else if (guess < ret) {
			printf("这个数字太小了\n");
			min = guess;
		}
		else {
			printf("恭喜您，您猜对了!\n");
			break;
		}
		i++;
	}

	printf("这个数字是%d\n", ret);
	printf("您一共猜了%d次\n\n", i);
}