#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,n,j,sayi,sayi1,sayi2,medyan;
	printf("Dizinin eleman sayisini giriniz :");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("Eleman giriniz : ");
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(dizi[i]>dizi[j])
			{
				sayi=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=sayi;
			}
		}
	}
	if(n%2==0)
	{
		sayi1 = dizi[(n-1)/2];
		sayi2 = dizi[((n-1)/2)+1];
		medyan = (sayi1+sayi2)/2;
	}
	else
	{
		medyan = dizi[n/2];
	}
	printf("Verilen sayilarin medyani : %d",medyan);
}

