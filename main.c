#include <stdio.h>
#include <stdlib.h>

struct ogrencibilgi
{
	char ad[30];
	char soyad[30];
	char adres[30];
	int no;
	char bolumu[30];
}ogr[5]=
{
	{"asli","calik","tekirdag",12367567,"yazilim muhendisi"},
	{"mehmet","kars","batman",123909,"insaat muhendisi"},
	{"ali","can","siirt",12345,"edebiyat"},
	{"selim","cinar","artvin",123888454,"fizik"},
	{"goksel","gumus","trabzon",123132213,"hukuk"},
	
	
};

int main(int argc, char *argv[]) {
	
	int i;
	for(i=0;i<=4;i++){
		 printf("%d. ogrenci:\n", i+1);
	
		printf("ad= %s \n",ogr[i].ad);
		printf("soyad= %s \n",ogr[i].soyad);
		printf("adres= %s \n",ogr[i].adres);
		printf("ogrencino= %d \n",ogr[i].no);
			printf("ogrenci bolumu= %s\n ",ogr[i].bolumu);
	}
	return 0;
}
