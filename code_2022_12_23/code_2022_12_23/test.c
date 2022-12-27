#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()//选择语句
//{
//	int input = 0;//存放输入值
//
//	printf("加入比特:>\n");
//	printf("你要好好学习吗(1/0)?:>");
//	printf("(1肯定，0否定)\n");
//	
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer!\n");
//	else
//		printf("卖红薯。\n");
//
//	return 0;
//}

//int main()//循环语句
//{
//	printf("开始写代码\n");
//	
//	int line = 0;
//	while (line <= 30000)
//	{
//		printf("代码行数:%d\n", line);
//		line++;
//	}
//	if (line >= 30000)
//	{
//		printf("好offer!\n");
//	}
//
//	return 0;
//}


//int Add(int x, int y)//建立一个函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	printf("输入俩个整数\n");
//	scanf("%d%d", &num1, &num2);
//	//scanf("%d", &num2);
//
//	//int sum = num1 + num2;
//	//用函数的方式解决
//	int sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;//太麻烦
//
//	//用数组
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩下的默认为零
//	//数组是用下标进行访问，第一个元素的下标是0，第二个是1，以此类推
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	//printf("%f", a);
//	//int a = 9 % 2;//% - 取模(余)
//	//printf("%d\n", a);
//
//	//int a = 2;
//	//int b = a << 1;//<< - 左移操作符，a的二进制数整体左移一位，末尾补零
//	////a=00000000000000000000000000000010=2
//	////左移后b=00000000000000000000000000000100=4
//	////右移操作符同理
//	//printf("%d\n", b);
//
//	//位操作符
//	//% - 按位与
//	//| - 按位或
//	//^ - 按位异或
//
//	int a = 2;//赋值操作符
//	a = a + 5;
//	a += 5;//复合操作符
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", !a);//0表示假，非0表示真，!真变假，假变真
//
//	if (a) {
//		//a为真，执行
//	}
//	if(!a) {
//		//a位假，执行
//	}
//
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符，计算类型或变量的大小的,不是函数
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	//10*4 = 40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	//一个整型大小为4个字节
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);//如何计算数组元素个数
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~按二进制位取反
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = ++a;//前置++，先++后使用
//
//	int a = 10;
//	int b = a++;//后置++，先使用后++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = a && b;
//	int e = a || c;
//	int f = a && c;
//
//	printf("%d\n%d\n%d\n", d,e,f);//&&逻辑与，||逻辑或
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b) {
//		max = a;
//	}
//	else {
//		max = b;
//	}*/
//
//	//用三目操作符计算
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左往右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//	
//	return 0;
//}

//c语言的关键字
//1.c语言提供的，不能自己创建的关键字
//2.关键字不能是变量名
