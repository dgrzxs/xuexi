#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()//ѡ�����
//{
//	int input = 0;//�������ֵ
//
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?:>");
//	printf("(1�϶���0��)\n");
//	
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��offer!\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//int main()//ѭ�����
//{
//	printf("��ʼд����\n");
//	
//	int line = 0;
//	while (line <= 30000)
//	{
//		printf("��������:%d\n", line);
//		line++;
//	}
//	if (line >= 30000)
//	{
//		printf("��offer!\n");
//	}
//
//	return 0;
//}


//int Add(int x, int y)//����һ������
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
//	printf("������������\n");
//	scanf("%d%d", &num1, &num2);
//	//scanf("%d", &num2);
//
//	//int sum = num1 + num2;
//	//�ú����ķ�ʽ���
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
//	//int d = 4;//̫�鷳
//
//	//������
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {'a', 'b', 'c'};//����ȫ��ʼ����ʣ�µ�Ĭ��Ϊ��
//	//���������±���з��ʣ���һ��Ԫ�ص��±���0���ڶ�����1���Դ�����
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
//	//int a = 9 % 2;//% - ȡģ(��)
//	//printf("%d\n", a);
//
//	//int a = 2;
//	//int b = a << 1;//<< - ���Ʋ�������a�Ķ���������������һλ��ĩβ����
//	////a=00000000000000000000000000000010=2
//	////���ƺ�b=00000000000000000000000000000100=4
//	////���Ʋ�����ͬ��
//	//printf("%d\n", b);
//
//	//λ������
//	//% - ��λ��
//	//| - ��λ��
//	//^ - ��λ���
//
//	int a = 2;//��ֵ������
//	a = a + 5;
//	a += 5;//���ϲ�����
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
//	printf("%d\n", !a);//0��ʾ�٣���0��ʾ�棬!���٣��ٱ���
//
//	if (a) {
//		//aΪ�棬ִ��
//	}
//	if(!a) {
//		//aλ�٣�ִ��
//	}
//
//	return 0;
//}

//int main()
//{
//	//sizeof��һ�����������������ͻ�����Ĵ�С��,���Ǻ���
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
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	//һ�����ʹ�СΪ4���ֽ�
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);//��μ�������Ԫ�ظ���
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~��������λȡ��
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = ++a;//ǰ��++����++��ʹ��
//
//	int a = 10;
//	int b = a++;//����++����ʹ�ú�++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
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
//	printf("%d\n%d\n%d\n", d,e,f);//&&�߼��룬||�߼���
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
//	//����Ŀ����������
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
//	//���ű��ʽ���Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//
//	printf("%d\n", d);
//	
//	return 0;
//}

//c���ԵĹؼ���
//1.c�����ṩ�ģ������Լ������Ĺؼ���
//2.�ؼ��ֲ����Ǳ�����
