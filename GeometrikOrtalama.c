#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i,n,carp=1;
	double geoort;
	printf("Dizinin eleman sayisini giriniz.\n");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("Eleman giriniz.\n");
		scanf("%d",&dizi[i]);
		carp=carp*dizi[i];	
	}
	printf("Dizinin elemanlari :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",dizi[i]);
	}
	geoort=pow((double)carp,(double)1/n);
	printf("Carpimlari : %d\n",carp);
	printf("Dizinin geometrik ortalamasi : %.2f",geoort);
}
