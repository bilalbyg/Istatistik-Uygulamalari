#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,n;
	float top=0.0;
	printf("Dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("Eleman giriniz : ");
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<n;i++)
	{
		top = top + (1/(float)dizi[i]);
	}
	printf("Dizinin harmonik ortalamasi : %f",n/top);
}
