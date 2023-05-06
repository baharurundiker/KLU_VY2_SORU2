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
        int suankiEleman = (enBuyukIndis + enKucukIndis) / 2;  //Dizinin orta eleman�n�n indisini hesaplar.

        if(verilenDizi[suankiEleman] == arananEleman) {
            cikanSonuc = 1;  
            printf("Eleman %d. indekste bulundu !!\n",suankiEleman);  //Bulunan indeksi ekrana yazd�r�r.
            break;  
        }
        else if (verilenDizi[suankiEleman] < arananEleman) {
            enKucukIndis = suankiEleman;  //Aranan say� orta elemandan b�y�kse arama i�lemi sa� yar�da devam eder.
        }
        else {
            enBuyukIndis = suankiEleman;  //Aranan say� orta elemandan k���kse arama i�lemi sol yar�da devam eder.
        }
    }

	if (cikanSonuc == 0) {
        printf("Eleman dizide bulunamadi !!");  
    }

    
    return 0;
}
	
	
