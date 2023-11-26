#include <stdio.h>
#include <math.h>

main()
{
	int k,x,i=1;
	float K;
	
	
	scanf("%d %d",&x,&k);
	for(i;i<=k;i++)
	{
		K+=(float)pow(-1,k)*x/sqrt(k);
	}
	printf("%f",K);
}
