#include <iostream>
#include <conio.h>
int main(){
int mDiziBir[2][2], mDiziIki[2][2], mDiziSonuc[2][2];

printf("Birinci Matrisi Giriniz\n");


for(int i=0; i<2; i++)
for(int j=0; j<2; j++)
{
printf("[%d][%d]= ", i+1, j+1);
scanf("%d", &mDiziBir[i][j]);
}
printf("ikinci Matrisi Giriniz\n");
for(int i=0; i<2; i++)
for(int j=0; j<2; j++)
{
printf("[%d][%d]= ", i+1, j+1);
scanf("%d", &mDiziIki[i][j]);
}
printf("Sonuc\n");
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
mDiziSonuc[i][j] = mDiziBir[i][j] + mDiziIki[i][j];
printf("%d ", mDiziSonuc[i][j]);
}
printf("\n");
}
getch();
return 0;
}
