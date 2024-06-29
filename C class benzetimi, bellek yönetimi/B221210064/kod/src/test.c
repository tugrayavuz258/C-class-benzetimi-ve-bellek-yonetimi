#include "HABITAT.h"



int main()
{
   system("cls");
 maxX=0;
 maxY=0;
 nSayici=0;

printf("veriler okunuyor...");

BagliListe dosya = DosyaOKU();      //dosyayı oku
 system("cls");
    YazdirDUZBAGLILISTE(&dosya,maxY, xYedekle);

    printf("Herhangi bir tuşa basin...\n");
    getchar(); 
    system("cls");
    printf("Tusa basildi, islemler yapiliyor...\n");


   

habitat habitatNesnesi = HabitatOlustur(satirSatirKapistir(&mainYedekListe), dosya);



    
     printf("\n");
    printf("Son durum:");
      printf("\n");
     KarsilastirVeYazdir(habitatNesnesi->GeziDugum, habitatNesnesi->kazanan,maxY, xYedekle);
      x1 = xEksenidondur(liste1);
     y11                //kazananı bul kıyas işlemlerini yap
     = yEksenidondur(liste1);
     tur1 = tipDondur(liste1);
      
     printf("kazanan:");
     yazdir(liste1);
        printf("(%d,%d)",y11,x1);
    habitatNesnesi->habitatSil(habitatNesnesi);
   
     int kazananTip = tipDondur(liste1);
     if(kazananTip==1)
     {
((bitki)(liste1->veri))->BITKIyoket((bitki)(liste1->veri));
     }
     else if(kazananTip==2)
     {                //finalde kalan veriyi yok et
         ((bocek)(liste1->veri))->BOCEKyoket((bocek)(liste1->veri));
     }
     else if(kazananTip==3)
     {
         
          ((sinek)(liste1->veri))->sinekyoket((sinek)(liste1->veri));
     }
     else if(kazananTip==4)
     {
       ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
     }
     //free(liste1->veri);
     sil(&liste4);//bağlı listeyi temizle
    return 0;
}


