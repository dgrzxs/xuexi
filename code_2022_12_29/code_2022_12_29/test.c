#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////用函数实现有序数组的二分查找法
////自己写的，很挫
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
//	//数组arr传参，实际传递的不是数组本身
//	//仅仅传过去了数组首元素的地址
//	if (binary_search(key, arr, &mid, sz)) {
//		printf("找到了，下标是%d\n", mid);
//	}
//	else {
//		printf("数组内没有该元素\n");
//	}
//
//	return 0;
//}

////鹏哥写的
////用函数实现有序数组的二分查找法
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//在传参之前求出数组长度
//
//	int key = 0;
//	scanf("%d", &key);
//
//	//找到了就返回下标，找不到就返回-1
//	int ret = binary_search(key, arr, sz);
//
//	if (ret != -1) {
//		printf("找到了，下标是：%d\n", ret);
//	}
//	else {
//		printf("找不到\n");
//	}
//
//	return 0;
//}

////写一个函数，每调用一次这个函数，就会将num的值增加1
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
//		printf("是否要调用函数(y/n):>");
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
//			printf("退出程序\n");
//			break;
//		}
//		else {
//			printf("输入错误，请重新输入\n");
//		}
//
//		printf("%d\n", num);
//	}
//
//	return 0;
//}

