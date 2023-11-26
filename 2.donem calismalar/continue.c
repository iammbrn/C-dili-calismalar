#include <stdio.h>
#include <stdlib.h>

// continue deyimi kendinden sonra gelen adýmý atlar o iþlemi yapmaz!!


main()
{
	int x,y,k=1;
	
	for(x=-3;x<=3;x++)
	{
		for(y=-3;y<=3;y++)
		{
			if(x==y)
			{
				continue;
			}
			
			if(abs(x)+abs(y)<=3)
			{
				printf("%2d.(%2d,%2d)\n",k++,x,y);
			}
		}
	}
	
}
