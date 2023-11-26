#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	printf("char=%d byte \n",sizeof(char));
	printf("int=%d byte \n",sizeof(int));
	printf("float=%d byte \n",sizeof(float));
	printf("double=%d byte \n",sizeof(double));
	printf("short=%d byte \n",sizeof(short));
	printf("long=%d byte \n",sizeof(long));
	printf("void=%d byte \n",sizeof(void));
}
