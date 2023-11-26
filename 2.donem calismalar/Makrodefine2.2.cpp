#include <iostream>
#define PI 3.14
#define KkoniAlan(a,b,l) PI*(a+b)*l
#define KkoniHacim(a,b,h) PI*h*(a*a+a*b+b*b)/3


float Alan(float a,float b,float l)
{
	return PI*(a+b)*l;
}

float Hacim(float a,float b,float h)
{
	return PI*h*(a*a+a*b+b*b)/3;
}


int main()
{
	float alan,hacim;
	float a,b,h,l;
			
	
	alan=KkoniAlan(2,2,2);
	hacim=KkoniHacim(2,2,3);
	
	printf("Alan=%.2f\n",alan);
	printf("Hacim=%.2f\n",hacim);
	
	printf("\n");
	
	printf("Alan=%.2f\n",KkoniAlan(2,2,2));
	printf("Hacim=%.2f\n",KkoniHacim(2,2,3));
	
	printf("\n");
	
	alan=Alan(2,2,2);
	hacim=Hacim(2,2,3);
	
	printf("Alan=%.2f\n",alan);
	printf("Hacim=%.2f\n",hacim);
	
	printf("\n");
	
	printf("Alan=%.2f\n",Alan(2,2,2));
	printf("Hacim=%.2f\n",Hacim(2,2,3));
	
	printf("\n");
	
	printf("Taban a yaricap degerini gir:");
	scanf("%f",&a);
	printf("Taban b yaricap degerini gir:");
	scanf("%f",&b);
	printf("Yanal uzunluk degerini gir:");
	scanf("%f",&l);	
	printf("Yukseklik degerini gir:");
	scanf("%f",&h);

	
	printf("\n");
	
	printf("Alan=%.2f\n",KkoniAlan(a,b,l));
	printf("Hacim=%.2f\n",KkoniHacim(a,b,h));	
	
		
}
