#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define N 10;
int main() {

/*最难
	int A[100];
	int a,L,sum;
	int i = 1;
	sum = 0;
	a = getchar();
	A[0] = a;
	while (a!='\n')
	{
		L = (a-48) * i;
		A[i] = a;
		a = getchar();
		i++;
	}
	int u=0;
	int ii = i;
	while (u<i)
	{
		A[u] = A[u] - 48;
	//	printf("A[%d]=%d\n", u, A[u]);
		L = A[u] * ii;
		u++;
		//printf("%d\n", ii);
		//printf("%d\n", u-1);
		ii--;
		//printf("%d\n", L);
		sum = sum + L;
		printf("%d\n", sum-A[0]*u);
	}
	*/










	/*数组初次尝试
	int i=1;
	int ch;
	int a[10]={1,2,3,4,5,6,7,8,9,10};//初始化数组
	int b[10]={0};                   //赋值为0
	while (i < 5)
	{
		printf("debug:%d\n", i);
		scanf("%d", &ch);
		a[i] = ch;
		i++;
	}
	int u = 1;
	while ( u < 5)
	{
		printf("%d", a[u]);
		u++;
		printf("debug:%d\n", u);
	}
	//*/



	/*   i++和++i的比较
	int a,b = 3;
	a = a++*a;
	b=++b*b;
	printf("%d", a);

	//	++i = (i = i + 1 ; i=i)
	*/



	//               bug
	//int a[N],i;

	



	return 0;
 }