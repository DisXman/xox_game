#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(int argc, char *argv[]) {


/// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	void girdiler(char adizi[], int girdi)
	{
		switch (girdi)
		{
			case 0:
				if(adizi[0]=='0')
				{
					adizi[0] = 'x';
				}
				else if (adizi[0]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
					
				}
				else if (adizi[0] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
			case 1:
				if (adizi[1]=='1')
				{
					adizi[1] = 'x'; 	
				}
				else if (adizi[1]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[1] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
			case 2:
				if (adizi[2]=='2')
				{
					adizi[2] = 'x'; 
				}
				else if (adizi[2]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[2] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;

			case 3:
				if (adizi[3]=='3')
				{
					adizi[3] = 'x'; 
				}
				else if (adizi[3]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[3] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;

			case 4:
				if (adizi[4]=='4')
				{
					adizi[4] = 'x'; 
				}
				else if (adizi[4]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[4] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;

			case 5:
				if (adizi[5]=='5')
				{
					adizi[5] = 'x'; 
				}
				else if (adizi[5]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[5] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
			case 6:
				if (adizi[6]=='6')
				{
					adizi[6] = 'x'; 
				}
				else if (adizi[6]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[6] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
			case 7:
				if (adizi[7]=='7')
				{
					adizi[7] = 'x'; 
				}
				else if (adizi[7]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[7] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
			case 8:
				if (adizi[8]=='8')
				{
					adizi[8] = 'x'; 
				}
				else if (adizi[8]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
				}
				else if (adizi[8] == 'o')
				{
					printf("baska sayi gir");
				}
				break;
			case 9:
				if (adizi[9]=='9')
				{
					adizi[9] = 'x'; 
				}
				else if (adizi[9]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				else if (adizi[9] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayi=0;
					scanf("%d",&yeni_sayi);
					girdiler(adizi, yeni_sayi);
				}
				break;
				
			default:
				printf("gecersiz");
		}
	}
	
	//00000000000000000000000 
	void girdiler0(char adizi[], int girdi)
	{
		switch (girdi)
		{
			case 0:
				if(adizi[0]=='0')
				{
					adizi[0] = 'o';
				}
				else if (adizi[0]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[0] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 1:
				if (adizi[1]=='1')
				{
					adizi[1] = 'o'; 	
				}
				else if (adizi[1]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[1] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 2:
				if (adizi[2]=='2')
				{
					adizi[2] = 'o'; 
				}
				else if (adizi[2]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[2] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;

			case 3:
				if (adizi[3]=='3')
				{
					adizi[3] = 'o'; 
				}
				else if (adizi[3]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[3] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;

			case 4:
				if (adizi[4]=='4')
				{
					adizi[4] = 'o'; 
				}
				else if (adizi[4]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[4] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;

			case 5:
				if (adizi[5]=='5')
				{
					adizi[5] = 'o'; 
				}
				else if (adizi[5]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[5] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 6:
				if (adizi[6]=='6')
				{
					adizi[6] = 'o'; 
				}
				else if (adizi[6]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[6] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 7:
				if (adizi[7]=='7')
				{
					adizi[7] = 'o'; 
				}
				else if (adizi[7]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[7] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 8:
				if (adizi[8]=='8')
				{
					adizi[8] = 'o'; 
				}
				else if (adizi[8]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[8] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
			case 9:
				if (adizi[9]=='9')
				{
					adizi[9] = 'o'; 
				}
				else if (adizi[9]=='x')
				{
					printf("lutfen baska bir sayi giriniiz");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				else if (adizi[9] == 'o')
				{
					printf("baska sayi gir");
					int yeni_sayii=0;
					scanf("%d",&yeni_sayii);
					girdiler(adizi, yeni_sayii);
				}
				break;
				
			default:
				printf("gecersiz");
		}
	}
	
	// MATRÝS YAZDIRMA
	int matris(char adizi[])
	{
		int i = 0;
		int b =3;
		int wh=0;
		while (wh!=9)
		{
			for (i;i<b;i++)
			{
				printf("|%c|",adizi[i]);
			}	
			printf("\n");
			b = b+3;
			wh=wh+3;
		}
	}
		
	
	int kontrol(char adizii[])
	{
		if (adizii[0] == 'x' && adizii[1] == 'x' && adizii[2] == 'x')
		{

			return 1;
		}
		else if (adizii[0] == 'o' && adizii[1] == 'o' && adizii[2] == 'o')
		{

			return 0;
		}
		else if (adizii[2] == 'x' && adizii[5] == 'x' && adizii[8] == 'x')
		{

			return 1;
		}
		else if (adizii[2] == 'o' && adizii[5] == 'o' && adizii[8] == 'o')
		{

			return 0;
		}
		else if (adizii[1] == 'x' && adizii[4] == 'x' && adizii[7] == 'x')
		{
			return 1;
		}
		else if (adizii[1] == 'o' && adizii[4] == 'o' && adizii[7] == 'o')
		{

			return 0;
		}
		else if (adizii[0] == 'x' && adizii[3] == 'x' && adizii[6] == 'x')
		{

			return 1;
		}
		else if (adizii[0] == 'o' && adizii[3] == 'o' && adizii[6] == 'o')
		{

			return 0;
		}
		else if (adizii[3] == 'x' && adizii[4] == 'x' && adizii[5] == 'x')
		{

			return 1;
		}
		else if (adizii[3] == 'o' && adizii[4] == 'o' && adizii[5] == 'o')
		{

			return 0;
		}
		else if (adizii[6] == 'x' && adizii[7] == 'x' && adizii[8] == 'x')
		{

			return 1;
		}
		else if (adizii[6] == 'o' && adizii[7] == 'o' && adizii[8] == 'o')
		{

			return 0;
		}
		else if (adizii[0] == 'x' && adizii[4] == 'x' && adizii[8] == 'x')
		{

			return 1;		
		}
		else if (adizii[0] == 'o' && adizii[4] == 'o' && adizii[8] == 'o')
		{

			return 0;
		}
		else if (adizii[2] == 'x' && adizii[4] == 'x' && adizii[6] == 'x')
		{

			return 1;
		}
		else if (adizii[2] == 'o' && adizii[4] == 'o' && adizii[6] == 'o')
		{
	
			return 0;
		}
		else
		return 2;
	}	
		
	  //BAÞLANGIÇ
	char a[] ="0123456789";
	int i = 0;
	int b =3;
	int wh=0;
	while (wh!=9)
	{
		for (i;i<b;i++)
		{
			printf("|%c|",a[i]);
		}	
		printf("\n");
		b = b+3;
		wh=wh+3;
	}
		
	
	int bir, iki, ij=0;
	int f1=0;
	int birr = 1;
	
	for(ij ; ij<9; ij++)
	{	
		switch(birr)
		{
			case 1:
				printf("Birinci oyuncu gir");
				scanf("%d",&bir);
				girdiler(a,bir);
				matris(a);
				int ss1 = kontrol(a);
				if(ss1==1)
				{
					printf("Birince kazandi");
					return 0;
				}
				birr++;
				break;
			case 2:
				printf("ikinci oyuncu gir");
				scanf("%d",&iki);
				girdiler0(a,iki);
				matris(a);
				int ss = kontrol(a);
				if(ss==0)
				{
					printf("ikinci kazandi");
					return 0;
				}
				kontrol(a);
				birr--;
				break;
			default:
				break;
		}
	}
	printf("berabere");

	return 0;
}
