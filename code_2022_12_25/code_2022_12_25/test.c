#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int age = 20;
//	if (age >= 18) {
//		printf("����\n");
//	}
//	else {
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 110;
//
//	if (age < 18) {
//		printf("δ����\n");
//	}
//	else if(age >= 18 && age <26){
//		printf("����\n");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("����\n");
//	}
//	else {
//		printf("�ϲ���\n");
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
//		printf("����\n");
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
//		printf("����%d\n", day);
//		break;
//	case 2:
//		printf("����%d\n", day);
//		break;
//	case 3:
//		printf("����%d\n", day);
//		break;
//	case 4:
//		printf("����%d\n", day);
//		break;
//	case 5:
//		printf("����%d\n", day);
//		break;
//	case 6:
//		printf("����%d\n", day);
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break������Զ����ֹѭ��
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�ж��Ƿ���Ҫ������һ��ѭ��
//	while (i <= 10) {
//		if (5 == i) {
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

////EOF - end of file - �ļ�������־
//int main()
//{
//	printf("%d\n", EOF);//EOF��-1
//	int ch = getchar();//�Ӽ����ϻ�ȡһ���ַ�(����һ���ַ�)
//	//��ȡʧ�ܷ���EOF
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//����ctrl+z - getchar��ȡʧ�ܣ�����EOF
//
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//
//	return 0;
//}

//��ҵ

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
//	}//��С������ = a*b/��С��Լ��
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

//��100��200֮�������
//����һ

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

//�Ż��󣺷�����

#include <math.h>//sqrt������ͷ�ļ�

int main()
{
	int i = 0;
	int j = 0;
	
	for (i = 101; i <= 200; i+=2) {
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++) {//sqrt�ǿ�ƽ��
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