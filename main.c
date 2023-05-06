#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	printf("Bahar Urundiker,1220505018,KLU\n");
	printf("Kullanicidan alinan elemani verilen dizide ikili arama algoritmasini kullanarak arayan kod\n");
	printf("************************************************\n");
	
	int arananEleman;
	int verilenDizi[9]={4,8,3,84,47,76,9,24,68};
	int cikanSonuc = 0;
	int enBuyukIndis = 9;
	int enKucukIndis = -1;
	
	printf("Aranacak elemani giriniz\n");
	scanf("%d",&arananEleman);
	
	 while(enBuyukIndis - enKucukIndis > 1) {
        int suankiEleman = (enBuyukIndis + enKucukIndis) / 2;  //Dizinin orta elemanýnýn indisini hesaplar.

        if(verilenDizi[suankiEleman] == arananEleman) {
            cikanSonuc = 1;  
            printf("Eleman %d. indekste bulundu !!\n",suankiEleman);  //Bulunan indeksi ekrana yazdýrýr.
            break;  
        }
        else if (verilenDizi[suankiEleman] < arananEleman) {
            enKucukIndis = suankiEleman;  //Aranan sayý orta elemandan büyükse arama iþlemi sað yarýda devam eder.
        }
        else {
            enBuyukIndis = suankiEleman;  //Aranan sayý orta elemandan küçükse arama iþlemi sol yarýda devam eder.
        }
    }

	if (cikanSonuc == 0) {
        printf("Eleman dizide bulunamadi !!");  
    }

    
    return 0;
}
	
	
