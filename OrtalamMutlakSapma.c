#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,n,toplam = 0;
	float ort,muttop=0.0;
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
		dizi[i]=dizi[i] - ort;
	}
	for(i=0;i<n;i++)
	{
		muttop = muttop + fabs(dizi[i]);
	}
	printf("Mutlak Toplam : %f\n",muttop);
	printf("Ortalama Mutlak Sapma : %f",muttop/n);
}
