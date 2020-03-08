#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,n,topla = 0;
	float toplam = 0.0;
	printf("Dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("Eleman giriniz : ");
		scanf("%d",&dizi[i]);
		topla = topla + dizi[i];
	}
	float ort,orneklem;
	ort=topla / n;
	for(i=0;i<n;i++)
	{
		dizi[i] = dizi[i] - ort;
		dizi[i] = dizi[i] * dizi[i];
	}
	for(i=0;i<n;i++)
	{
		toplam = toplam + dizi[i];
	}
	orneklem = toplam / (n-1);
	printf("Orneklem Varyansi : %f\n",orneklem);
	printf("Standart Sapma : %f\n",sqrt(orneklem));
	getchar();
}
