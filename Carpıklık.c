#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int n,i,toplam=0;
	float ort,carpiklik = 0.0;
	printf("Dizinin eleman sayisini giriniz : ");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("Eleman giriniz : ");
		scanf("%d",&dizi[i]);
		toplam = toplam + dizi[i];
	}
	ort = toplam / n;
	for(i=0;i<n;i++)
	{
		dizi[i]=dizi[i]-ort;
		dizi[i]=dizi[i]*dizi[i]*dizi[i];
		carpiklik = carpiklik + dizi[i];
	}
	printf("Carpiklik : %f",carpiklik/(n-1));
}
