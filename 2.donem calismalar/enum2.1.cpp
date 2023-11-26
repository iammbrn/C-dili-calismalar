#include <iostream>
#include <stdlib.h>
 
 
 
    enum aylar
    {
    	Ocak,Subat,Mart,Nisan,Mayis,Haziran,Temmuz,Agustos,Eylul,Ekim,Kasim,Aralik
	};
	
int main()
{
	enum aylar no;
	
	no=Haziran;
	printf("%d.Aydir.\n",no+1);
	
							
}
