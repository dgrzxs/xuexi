#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��������
// 
//int main()
//{
//	char password[20] = { 0 };
//	char arr[20] = { 0 };
//	
//	printf("������һ���ַ���:>");
//	scanf("%s", password);
//	printf("������һ���ַ���:>");
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

////�ú����ҵ���������֮��Ľϴ�ֵ
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

////�ú�������������ֵ
// 
//void Swap(int x, int y)//������Ч��//��ֵ����
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
//	//дһ������ - ����2�����ͱ�����ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//void Swap(int* pa, int* pb)//��a��b�ĵ�ַ����pa��pb - ָ�����//��ַ����
//{
//	int z = 0;
//	z = *pa;//pa�洢��ַ��*paʹ�õ�ַָ���ַ������ı�����* - ��Ӧ��
//	*pa = *pb;//Ҫ�ں�����ı亯���ڱ�����ֵ����Ҫʹ�õ�ַ
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - ����2�����ͱ�����ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);//ȡa��b�ĵ�ַ
//	printf("������a=%d b=%d\n", a, b);//ͨ�����õ�ַ�ɹ�������a��b��ֵ
//
//	return 0;
//}

////�ú����ҵ�100��200֮�������
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

//�ú���������

//int is_leap_year(int n)//���������д�������ͣ�Ĭ�Ϸ���int����
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

////������Ƕ�׵��ú���ʽ����
////������Ƕ��
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
////��ʽ����
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////��ʽ���� - ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	//printf("%d\n", strlen("abc"));
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	printf("%d", printf("%d", printf("%d", 43)));//��ʽ����
//	//��һ��printf��������ִ�У���Ҫ�ڶ���printf�����ķ���ֵ����һ��printf��ͣ
//	//��ʱ�ͻ�ִ�еڶ���printf��������Ҫ������printf�����ķ���ֵ���ڶ���printf��ͣ
//	//Ȼ��ͻ�ִ�е�����printf������������printf�������ӡһ��43����Ļ�ϣ�Ȼ�����һ������ֵ�����ڶ���printf����
//	//printf�����ķ���ֵ�����������ӡ����Ļ�ϵ��ַ�������������printf������ӡ��43���������ַ���
//	//���Ե�����printf��������ֵΪ2���ڶ���printf�����ͻ��ӡ�����2
//	//�ڶ���printf����ֻ��ӡ��һ���ַ�2���������ķ���ֵ��1
//	//��һ��printf�����ͻ��ӡ���1�����Խ�����Ǵ�ӡ��4321
//
//	return 0;
//}

//int main()
//{
//	int Add();//�������� - ����д��main֮��ʱ��Ҫʹ�øú�������Ҫ��ǰ�����ú���
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