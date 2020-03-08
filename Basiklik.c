#include<conio.h>
#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	float ort,basiklik = 0.0;
	printf("Dizinin eleman sayisini giriniz : \n");
	scanf("%d",&n);
	printf("Sayilari girdikten sonra Enter tusuna basiniz\n");
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
		dizi[i]=dizi[i]*dizi[i]*dizi[i]*dizi[i];
		basiklik = basiklik + dizi[i];
	}
	printf("Basiklik : %f",basiklik/(n-1));
}
