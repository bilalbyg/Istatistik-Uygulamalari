#include<stdio.h>
int main()
{
	int i,n,sayi,top=0;
	printf("Kac adet sayi gireceksiniz?\n");
	scanf("%d",&n);
	printf("Sayilari girdikten sonra Enter tusuna basiniz\n");
	for(i=0;i<n;i++)
	{
		printf("Sayi giriniz\n");
		scanf("%d",&sayi);
		top=top+sayi;
	}
	printf("Aritmetik ortalama : %d",top/n);
}
