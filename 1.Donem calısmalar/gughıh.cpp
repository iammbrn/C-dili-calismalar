#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
{
	int dizi[9]={1,2,3,4,5,6,7,8,9};
	int i;
	
    printf("%d\n",dizi[0]);
	for(i=2;i>=0;i--)
	{
		printf("%d ",dizi[i]);	
	}
	printf("\n");	
	for(i=4;i>=0;i--)
	{
		printf("%d ",dizi[i]);	
	}
	printf("\n");
	for(i=6;i>=0;i--)
	{
		printf("%d ",dizi[i]);	
	}
	printf("\n");
	for(i=8;i>=0;i--)
	{
		printf("%d ",dizi[i]);	
	}
	printf("\n");		
}

	return 0;
}
