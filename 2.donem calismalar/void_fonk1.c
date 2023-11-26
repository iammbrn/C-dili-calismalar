#include <stdio.h>
#include <stdlib.h>

void kutu_ciz(int satir,int sutun)
{
	int sut;
	
	for(;satir>0;satir--)
	{
		for(sut=sutun;sut>0;sut--)
		{
			printf("X");
		}
		printf("\n");
	}
}

int main()
{
	kutu_ciz(10,10);
	
}
