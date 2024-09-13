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
	printf("我己经想好了一个数，你猜猜是多少\n");
	do {
		scanf("%d", &a);
		if (a > number) {
			printf("数大了\n");
		}
		else if (a < number) {
			printf("数小了\n");
		}
		count++;
	} while (a != number);
	printf("你猜对了\n总共用了%d次", count);
	return 0;

}
