#include <iostream>
#define PI 3.14

// Rekursif fonksiyon ve pointer kulanimi ile dairenin alani ve cevresi

float alan(float r)
{
	return PI*r*r;
}
float cevre(float r)
{
	return 2*PI*r;
}

int main()
{
	printf("Alan=%.2f\n",alan(2));
	printf("Cevre=%.2f\n",cevre(2));
	
	float (*p)(float);
	
	p=alan;
	printf("Alan=%.2f\n",p(2));
	
	p=cevre;
	printf("Cevre=%.2f\n",p(2));
}
