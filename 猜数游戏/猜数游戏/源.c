#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	//printf("%d", number);
	int a = 0;
	int count = 0;
	printf("�Ҽ��������һ��������²��Ƕ���\n");
	do {
		scanf("%d", &a);
		if (a > number) {
			printf("������\n");
		}
		else if (a < number) {
			printf("��С��\n");
		}
		count++;
	} while (a != number);
	printf("��¶���\n�ܹ�����%d��", count);
	return 0;

}
