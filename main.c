#include <stdio.h>
#include <stdlib.h>


void biggestDivider(int *a,int *b,int *ebob)
{
	  if (b!=0)
	  {
	  	int temp=*a;
	  	*a=*b;
	  	*b=temp%(*b);
	  }
	  *ebob=*a;
}

void degerAl(int *sayi1, int *sayi2)
{
	printf("1. say� :\n");
	scanf("%d",sayi1);
	printf("2. say�\n");
	scanf("%d",sayi2);
}

void donguyeGir(int a,int b,int *ebob)
{
	while(b>0)
	{
		biggestDivider(&a,&b,ebob);
	}
}

void basla()
{
	int sayi1,sayi2,ebob;
	degerAl(&sayi1,&sayi2);
	ebob=sayi1;
	donguyeGir(sayi1,sayi2,&ebob);
	printf("%d ile %d say�s�n�n ebobu : %d",sayi1,sayi2,ebob);
}

int main(int argc, char** argv) {
	basla();
    return 0;
}
