#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	/*
	int a, b, c,sum,s;
	a = 1;
	s = 1;
	sum = 0;
	while (a<100)
	{
		sum = s * a+a+sum;
		a = a + 1;
		s = s * (-1);
		printf("%d\n",s);
		printf("%d\n", sum);
	}
	*/


	/*
	int cha;
	cha = getchar();
	putchar(cha);
	*/




	/*do while用法不会

	do
	{
		printf("hello\n");
	} while ( getchar() == '3');
	*/


	/*
	while (getchar() != '\n') {
		printf("hello");
	}
	*/

	/*
	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	printf("hello%c\n", getchar());
	*/


	/*******************判断子字符长度getchar的运用
	char ch;
	int len = 0;
	printf("enter:");
	ch = getchar();
	printf("%c\n", ch);
	
	while (ch != '\n') {
		len++;
		ch = getchar();
		printf("%c\n", ch);
	}

	printf("your message was %d characters long.\n", len);
	*/


	/*******************类型转化
	float a=1.5;
	printf("%f", (long double) a);
	*/


	/*******************6666666666666666666666666
	int i = 1;
	while (long int(666666666666666))
	{
		i++;
		printf("%d:666\n",i);
	}
	*/


	/*typedef创建宏定义类型
	typedef int Money;
	Money a = 2;
	printf("your money last %d", a);
	*/



	return 0;
}