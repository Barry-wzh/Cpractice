#include "stdio.h"
#include "limits.h"
#include "stdlib.h"

int main()
{
	int number;
	int* a;
	printf("输入数量：");
	scanf ("%d",&number);
	a = (int*)malloc(number*sizeof(int));
   	//printf("int = %lu\n",sizeof(int));
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	free(a);
	return 0;
}
