#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////�ú���ʵ����������Ķ��ֲ��ҷ�
////�Լ�д�ģ��ܴ�
// 
//int binary_search(int n, int a[], int* pm, int s)
//{
//	int right = s - 1;
//	int left = 0;
//
//	while (left <= right) {
//		*pm = (left + right) / 2;
//
//		if (n < a[*pm]) {
//			right = *pm - 1;
//		}
//		else if (n > a[*pm]) {
//			left = *pm + 1;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	
//	for (i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//	}
//
//	int key = 0;
//	scanf("%d", &key);
//
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
//	//��������ȥ��������Ԫ�صĵ�ַ
//	if (binary_search(key, arr, &mid, sz)) {
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	}
//	else {
//		printf("������û�и�Ԫ��\n");
//	}
//
//	return 0;
//}

////����д��
////�ú���ʵ����������Ķ��ֲ��ҷ�
//
//int binary_search(int k, int a[], int s)
//{
//	int right = s - 1;
//	int left = 0;
//
//	while (left <= right) {
//		int mid = (right + left) / 2;
//
//		if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else if (a[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ڴ���֮ǰ������鳤��
//
//	int key = 0;
//	scanf("%d", &key);
//
//	//�ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1
//	int ret = binary_search(key, arr, sz);
//
//	if (ret != -1) {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	else {
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

////дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//
//void Add(int* pn)
//{
//	*pn = *pn + 1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int ch = 0;
//	int cg = 0;
//
//	while (1) {
//		printf("�Ƿ�Ҫ���ú���(y/n):>");
//		ch = getchar();
//
//		while ((cg = getchar()) != '\n') {
//			;
//		}
//
//		if (ch == 'y') {
//			Add(&num);
//		}
//		else if (ch == 'n') {
//			printf("�˳�����\n");
//			break;
//		}
//		else {
//			printf("�����������������\n");
//		}
//
//		printf("%d\n", num);
//	}
//
//	return 0;
//}

