#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ҵ

////���ֲ��ҷ�
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//
//	printf("������һ����:>");
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}

////��������Ϸ
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
//		printf("��������Ϸ\n");
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ����Ϸ����\n");
//			break;
//		default:
//			printf("�����������������\n");
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
//		printf("���һ��%d-%d֮�����:>", min, max);
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//			max = guess;
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//			min = guess;
//		}
//		else {
//			printf("��ϲ���¶��ˣ��������%d\n", guess);
//			break;
//		}
//		i++;
//	}
//	printf("��һ������%d��\n\n", i);
//}

////��һ��1-100֮�������һ�������˶��ٸ�����9
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

////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

////��10�������е����ֵ
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
//	printf("��������%d\n", max);
//
//	return 0;
//}

////����Ļ�����9*9�˷��ھ���
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

//��ҵ���

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

////�ػ�����
////ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���
////shutdown -s -t 60  ---�ػ����룬-s���ùػ���-t����ʱ��
////shutdown -a  ---ȡ���ػ�����Щ���ڵ��Ե�������ʾ�����õ�
//
//#include <stdlib.h>//system������ͷ�ļ�
//#include <string.h>//strcmp������ͷ�ļ�
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//
//again:
//	printf("��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "������") == 0) {
//		system("shutdown -a");
//		printf("�������ػ�ȡ��\n");
//	}
//	else {
//		printf("�������\n");
//		goto again;
//	}
//
//	return 0;
//}

//���ѭ��Ƕ�׵�����£���Ҫ����ȫ��ѭ��ʱ������ʹ��goto��䣬�������������ʹ��goto���
//gotoֻ����һ��������Χ����ת�����ܿ纯��
//��ƵP40�ڣ�53:23�������õķ���


////�����⺯��Ӧ�õĽ��ܣ�Ҫ��ʹ�ÿ⺯�������ĵ�
// 
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit!" };
//
//	strcpy(arr1, arr2);//��arr2�����ݸ��Ƶ�arr1��
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
//	memset(arr, 'x', 5);//��arr��ǰ����ַ���Ϊx
//	printf("%s\n", arr);
//
//	return 0;
//}