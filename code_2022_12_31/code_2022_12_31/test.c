#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��д����������������ʱ���������ַ�������

//#include <string.h>

//�Ȳ����ǵڶ��仰

//�Լ�д�ģ�ֱ���õ�char a[]����

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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//����д�ģ��õ��������һ��Ԫ�ص�ָ�����

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

//������ʹ����ʱ����
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

//��n�Ľ׳ˡ�(���������)

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
//��һЩ���ܣ������õ���(ѭ������һ�ֵ���)�ķ�ʽʵ�֣�Ҳ�����õݹ�ʵ��

//���n��쳲���������(���������) - ǰ������֮�͵��ڵ�������

//�ݹ�ȷʵ���Խ��������⣬����Ч��̫��

//int count = 3;

//int Fib(int n)
//{
//	//�����ظ���̫�࣬��3��쳲��������ļ��������nԽ����Ĵ���Խ��
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

//�õ�����������һ�£������ܷ����Ч��
//�Լ�д��

//int Fib(int n)
//{
//	int i = 0;
//	int ret = 1, x = 1, y = 1;
//
//	/*if (n <= 2) {//��һ����ȫ����Ҫ��ret��1������
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

//����д��

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
//�������⣬ѡ����ȷ�ķ���
//��������õݹ���д���ǳ��ļ��׶������Ҵ���û�����Ե�ȱ�ݣ��Ǿ��õݹ�
//���ȱ�ݹ����Ǿͻ��ǵݹ�ķ�ʽ���������

//��ŵ������
// 
//������̨������
//һ������1��2��̨��
//n��̨���ж���������

//��ҵ
//ʵ��һ���������ж�һ�����ǲ�������
//��������ʵ�ֵĺ�����ӡ100��200֮�������

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
//���ھۣ����еĹ��ܼ����ں�������
//����ϣ���Ҫ������������������ĵ���

//ʵ�ֺ����ж�year�ǲ�������

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
//		printf("������\n");
//	}
//	else {
//		printf("��������\n");
//	}
//
//	return 0;
//}

//ʵ��һ��������������������������

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

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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