#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char possword[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", possword);//����123�س���������������һ���ַ�'\n'
//	                       //����123 456�س���������������" 456\n"����ַ�
//	                       //scanfֻ���ȡ�ո�ǰ������
//	printf("��ȷ������(Y/N):>");
//	//�������� - getchar��scanf���Ƕ�ȡ������������
//	//getchar();//ֻ�ܴ���һ���ַ� - �����������'\n'
//	//���������еĶ���ַ�
//	int tem = 0;
//	while ((tem = getchar()) != '\n') {
//		;//�����
//	}
//
//	int ch = getchar();//��ȡ�ַ����ַ�����ASCII��ֵ�洢
//	                   //ASCII��ֵ�����ͣ����Է���ֵ������
//	if ('Y' == ch) {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("ȷ��ʧ��\n");
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
//	int i = 1;//��ʼ��
//
//	while (i <= 10) {//�жϲ���
//		printf("%d ", i);
//
//		i++;//��������
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++) {//����Ӱ��ѭ�������ط�����һ�𣬷����޸�
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
//	for (i = 0; i < 10; i++) {//����ǰ�պ󿪣����������10����ѭ������
//		                      //���ڱȽϺõĴ�����
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//�жϲ���ʡ�ԣ��ͻ��Ϊ�棬������ѭ��
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
//		for (; j < 3; j++) {//ʡ�Ի�����仯
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int x, y;
//	//��������Ҳ�ǿ��Ե�
//	for (x = 0, y = 0; x < 5 && y < 3; x++, y++) {
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//����ѭ������
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) {
//		k++;//�����⣬һ��ѭ��������ȥ
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	do {
//		printf("%d ", i);//ѭ��������Ҫִ��һ��
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//��ϰ

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

//int main()//���ֲ��ҷ�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//Ҫ���ҵ�Ԫ��
//	//��arr������������в���7���Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�����ڸ�Ԫ��\n");
//	}
//
//	return 0;
//}

//#include <string.h>//ʹ��strlen
//
//#include <windows.h>//ʹ��sleep
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
//	int right = sz - 1;//��sizeof��-2����strlen��-1��sizeof���'\0'���ȥ������Ҫ��2
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//��λ���룬˯��0.5��
//		system("cls");//�����Ļ
//		left++ , right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <string.h>//�ַ���������Ҫ���ø�ͷ�ļ�
//                   //strlen��strcmp�����ַ�������
//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//	//����������123456
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", password);
//		//if(password == "123456"){//err - �����ַ����Ƚϣ�����ʹ��==
//			                      //Ӧ��ʹ��strcmp - �ַ����ȽϺ���
//		if (strcmp(password, "123456") == 0) {//��ͬ����ֵΪ��
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		}
//	}
//	if (i == 3) {
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}

//дһ�������ֵ���Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//  a.�¶��ˣ��ͻṧϲ�㣬��Ϸ����
//  b.�´��ˣ��ͻ������´��ˣ����ǲ�С�ˣ�Ȼ������£�֪���¶�Ϊֹ
//3.��Ϸ����һֱ�棬�����˳���Ϸ

#include <stdlib.h>//rand����srand������ͷ�ļ�
#include <time.h>//time������ͷ�ļ�
//void menu()
//{
//	printf("#####################\n");
//	printf("###### 1. play ######\n");
//	printf("###### 0. exit ######\n");
//	printf("#####################\n");
//}
int main()
{
	void menu();//���������main����֮����Ҫ��main����������һ�¸ú���
	void game();//�����֮ǰ������Ҫ����

	srand((unsigned int)time(NULL));//ר����������������ĺ������ã�д����һ������ֱ��ʹ��rand�����������
	//ʹ��rand���������ǰ����Ҫʹ��srand�����������ɵ����
	//time����������ʱ��仯��ʱ�����Ȼ��time�ķ���ֵǿ������ת��Ϊunsigned int����
	//unsigned int��srand������ʹ�ò������൱�ڸ���srandһ����ǰʱ��Ĵ���������srand��������Ϊ����������
	//time(NULL)��������ȡ��ǰʱ���ʱ����������ϵõ�����һ����ǰʱ���Ӧ�Ĵ�����
	//time()���������ʵ�������һ����ʷʱ�䣬������Ҫ��NULL�������ʷʱ�����һ��
	//time()�ͻ��Զ����浱ǰʱ���ˣ����Լ򵥵����ΪNULL���Ǹ�time()��ʼ��
	//ÿ�����г����ʱ�䲻ͬ�������Ͷ���һ��
	//ֻҪÿ���ڳ�������ʱ����һ�β�ͬ���������㣬���ܱ�֤ÿ�����г���õ����������ͬ

	int input = 0;

	do {
		printf("1-100֮��Ĳ�������Ϸ\n");
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
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
	//��������Ϸ��ʵ��
	int ret = rand() % 100 + 1;//rand����������һ��0��32767֮�������
	//%100��������0-99��Ȼ��+1����Χ����1-100֮��������

	int guess = 0;
	int min = 1;
	int max = 100;
	int i = 1;
	while (1) {

		printf("���һ��%d-%d֮�������:>", min, max);
		scanf("%d", &guess);
		if (guess > ret) {
			printf("�������̫����\n");
			max = guess;
		}
		else if (guess < ret) {
			printf("�������̫С��\n");
			min = guess;
		}
		else {
			printf("��ϲ�������¶���!\n");
			break;
		}
		i++;
	}

	printf("���������%d\n", ret);
	printf("��һ������%d��\n\n", i);
}