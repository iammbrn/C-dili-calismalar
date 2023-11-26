#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main()
{
	
	int sayi;
	
	printf("Lutfen Ay Numarasi Giriniz:");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
	case 1:printf("%d. Ay Ocak'dir.",sayi);
	break;
	case 2:printf("%d. Ay Subat'dir.",sayi);
	break;	
	case 3:printf("%d. Ay Mart'dir.",sayi);
	break;	
	case 4:printf("%d. Ay Nisan'dir.",sayi);
	break;	
	case 5:printf("%d. Ay Mayis'dir.",sayi);
	break;	
	case 6:printf("%d. Ay Haziran'dir.",sayi);
	break;	
	case 7:printf("%d. Ay Temmuz'dur.",sayi);
	break;	
	case 8:printf("%d. Ay Agustos'dur.",sayi);
	break;	
	case 9:printf("%d. Ay Eylul'dur.",sayi);
	break;	
	case 10:printf("%d. Ay Ekim'dir Ve Bu Ay Senin Dogum Gunun'dur.",sayi);
	break;	
	case 11:printf("%d. Ay Kasim'dir.",sayi);
	break;	
	case 12:printf("%d. Ay Aralik'dir.",sayi);
	break;
	default: printf("Hatali Sayi Girisi Yaptiniz!!!");
	break;
	
	}
	return 0;
}
