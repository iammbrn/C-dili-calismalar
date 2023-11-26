#include <iostream>

int toplam(int sayi) 
{
  if (sayi != 0)
    return sayi + toplam(sayi - 1);
  else
    return sayi;
}


int main() {

  int sayi;
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);
  printf("Toplam = %d",toplam(sayi));
  return 0;
}


