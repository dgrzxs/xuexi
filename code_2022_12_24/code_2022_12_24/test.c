#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//����Ƶ��ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//}

////����������
//typedef unsigned int u_int;
////��ΰ��ѧϰ - ����
//int main()
//{
//	unsigned int num1 = 100;//signed - �з��ŵģ�unsigned - �޷��ŵģ�
//	u_int num2 = 100;//������������ͬ
//
//	return 0;
//}

//static - ��̬��
//1.static���ξֲ�����
//2.static����ȫ�ֱ���
//3.static���κ���

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//
//	while (i < 10) {
//		test();
//		i++;
//	}
//
//	return 0;
//}

////extern�����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


////define��һ��Ԥ����ָ��
////1.�������

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

////2.�����
//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));//��û�����žͱ��11��
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p��ר��������ӡ��ַ��
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//ָ����ǵ�ַ

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//*�����ò���
//	//*pa����ͨ��pa��ߵĵ�ַ�ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}


//�ṹ�������C���Դ����µ����ͳ���
//����һ��ѧ������

//struct Stu
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
//
////����һ���������
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա������
//
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
//
//	printf("%d\n", sizeof(s));//�����ṹ��ʱ���ֽ�����ӣ�20��char + int��4 + double��8 = 32�ֽ�
//	printf("%d\n", sizeof(ps));//32λ��ַ��С��Ϊ4���ֽ�
//	printf("%p\n", &s);
//
//	return 0;
//}

//��ҵ

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//
//	int max = Compare(a, b);
//	printf("�ϴ�ֵΪ��%d\n", max);
//
//	return 0;
//}
////һ�㲻���齫��������д��ȫ��д
//int Compare(int x, int y)
//{
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}

//int main()
//{
//	printf("     **     \n     **     \n************\n    *  *    \n    *  *");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a % 5 == 0) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//
//	return 0;
//}