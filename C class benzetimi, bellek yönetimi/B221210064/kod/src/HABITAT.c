#include "HABITAT.h"

habitat HabitatOlustur(BagliListe kazananOlustur, BagliListe YOL) {
    habitat this5;
    this5 = (habitat)malloc(sizeof(struct HABITAT));
    this5->GeziDugum = YOL;
    this5->kazanan = kazananOlustur;
    this5->DosyaOKU = &DosyaOKU;
    this5->kapismadegeridondur = &kapismadegeridondur;
    this5->xEksenidondur = &xEksenidondur;
    this5->yEksenidondur = &yEksenidondur;
    this5->tipDondur = &tipDondur;
    this5->uzaklikHesapla = &uzaklikHesapla;
    this5->kiyas = &kiyas;
    this5->KarsilastirVeYazdir = &KarsilastirVeYazdir;          //habitat nesnesi
    this5->habitatSil = &habitatSil;
    return this5;
}

void habitatSil(habitat this5) {
    if (this5 == NULL) return;
    free(this5);
}




   int kapismadegeridondur(BagliListe bas)
{
    if (bas->veri!=NULL) {
    if (((bitki)((bas)->veri))->super->KapismaDegeri >= 1 && ((bitki)(bas->veri))->super->KapismaDegeri <= 9) {     //dugum alıp kapisma degeri donduren fonk
      
        return ((bitki)(bas->veri))->super->KapismaDegeri;
    } 
    else if (((bocek)(bas->veri))->super->KapismaDegeri >= 10 && ((bocek)(bas->veri))->super->KapismaDegeri <= 20) {
      
        return ((bocek)(bas->veri))->super->KapismaDegeri;
    } 
    else if (((sinek)(bas->veri))->super->super->KapismaDegeri  >= 21 && ((sinek)(bas->veri))->super->super->KapismaDegeri <= 50) {
       
        return ((sinek)(bas->veri))->super->super->KapismaDegeri;
    } 
    else if (((pire)(bas->veri))->super->super->KapismaDegeri  >= 51 && ((pire)(bas->veri))->super->super->KapismaDegeri  <= 99) {
       
        return ((pire)(bas->veri))->super->super->KapismaDegeri;
    } 


    }
}

int xEksenidondur(BagliListe bas) {
    if (bas->veri!=NULL) {
    if (((bitki)(bas->veri))->super->KapismaDegeri >= 1 && ((bitki)(bas->veri))->super->KapismaDegeri <= 9) {
       
        return ((bitki)(bas->veri))->super->xEkseni;
    } 
    else if (((bocek)(bas->veri))->super->KapismaDegeri >= 10 && ((bocek)(bas->veri))->super->KapismaDegeri <= 20) {//dugum alıp x degeri donduren fonk
        
        return ((bocek)(bas->veri))->super->xEkseni;
    } 
    else if (((sinek)(bas->veri))->super->super->KapismaDegeri  >= 21 && ((sinek)(bas->veri))->super->super->KapismaDegeri <= 50) {
        
        return ((sinek)(bas->veri))->super->super->xEkseni;
    } 
    else if (((pire)(bas->veri))->super->super->KapismaDegeri  >= 51 && ((pire)(bas->veri))->super->super->KapismaDegeri  <= 99) {
       
        return ((pire)(bas->veri))->super->super->xEkseni;
    } 
 
    }
}

int yEksenidondur(BagliListe bas) {
    if (bas->veri!=NULL) {
    if (((bitki)(bas->veri))->super->KapismaDegeri >= 1 && ((bitki)(bas->veri))->super->KapismaDegeri <= 9) {
       
        return ((bitki)(bas->veri))->super->yEkseni;
    } //dugum alıp y degeri donduren fonk
    else if (((bocek)(bas->veri))->super->KapismaDegeri >= 10 && ((bocek)(bas->veri))->super->KapismaDegeri <= 20) {
       
        return ((bocek)(bas->veri))->super->yEkseni;
    } 
    else if (((sinek)(bas->veri))->super->super->KapismaDegeri  >= 21 && ((sinek)(bas->veri))->super->super->KapismaDegeri <= 50) {
      
        return ((sinek)(bas->veri))->super->super->yEkseni;
    } 
    else if (((pire)(bas->veri))->super->super->KapismaDegeri  >= 51 && ((pire)(bas->veri))->super->super->KapismaDegeri  <= 99) {
       
        return ((pire)(bas->veri))->super->super->yEkseni;
    } 
    }
}

int tipDondur(BagliListe bas)
{
    if (bas->veri!=NULL) {
    if (((bitki)(bas->veri))->super->KapismaDegeri >= 1 && ((bitki)(bas->veri))->super->KapismaDegeri <= 9) {
      
        return 1;
    } 
   else if (((bocek)(bas->veri))->super->KapismaDegeri >= 10 && ((bocek)(bas->veri))->super->KapismaDegeri <= 20) {
     
        return 2;
    } 
else if ( ((sinek)(bas->veri))->super->super->KapismaDegeri  >= 21 && ((sinek)(bas->veri))->super->super->KapismaDegeri <= 50) {
    
        return 3;
    } 
        else if ( ((pire)(bas->veri))->super->super->KapismaDegeri  >= 51 && ((pire)(bas->veri))->super->super->KapismaDegeri  <= 99) {
     
        return 4;
    } 
    }//dugum alıp tip donduren fonk
}



double uzaklikHesapla(int xmax, int ymax, int x, int y) {
    double uzaklik = (xmax+(ymax*xmax)+ymax)-(x+(y*xmax)+y);
   
    return uzaklik; //uzaklık hesapla
}

int kiyas(int kapismaDegeri1, int x1, int y1, int kapismaDegeri2, int x2, int y2, int xmax, int ymax) {
    // İki noktanın xmax ve ymax noktasına olan uzaklıklarını hesapla
    double uzaklik1 = uzaklikHesapla(xmax, ymax, x1, y1
);
    double uzaklik2 = uzaklikHesapla(xmax, ymax, x2, y2);

    // Eğer iki noktanın kapsama değerleri aynıysa ve uzaklıkları da aynıysa, 1 döndür
    if (kapismaDegeri1 == kapismaDegeri2 && uzaklik1 == uzaklik2) {
        
        return 1;
    } else {
      
        return 0; // Aksi halde 0 döndür
    }
}



















void YazdirDUZBAGLILISTE(BagliListe *anaListe, int satirSayisi, int sutunSayisi) {
    BagliListe temp = *anaListe; // Ana liste işaretçisinin kopyası
    int satir = 0, sutun = 0;

    while (temp != NULL) {
        // Veriyi geçici bir değişkene atama            //baglilisteyazdir
        yazdir(temp); // Geçici değişkendeki veriyi yazdırma
        temp = temp->sonraki; // Bir sonraki düğüme geç

        sutun++; // Sütun sayısını bir arttır
        if (sutun == sutunSayisi) { // Sütun sayısı belirtilen sütun sayısına ulaştığında
            printf("\n"); // Bir alt satıra geç
            satir++; // Satır sayısını bir arttır
            sutun = 0; // Sütun sayısını sıfırla

            if (satir == satirSayisi) // Belirtilen satır sayısına ulaşıldığında döngüyü sonlandır
                break;
        }
    }
}














BagliListe DosyaOKU()
{
    
    BagliListe listeMainAna = NULL; // Geçici bağlı liste
  

    
    FILE *dosya;
    dosya = fopen("Veri.txt", "r"); // Dosyayı okuma modunda aç

    if (dosya == NULL) {
        printf("Dosya açma hatasi!");
        return 0; // Programı sonlandır
    }
   xeksenmain=0;
     yeksenmain=0;
     sayi;
    flag1=0;
    xYedekle;
    while (fscanf(dosya, "%d", &sayi) != EOF) { // Dosyanın sonuna kadar oku
        if (sayi >= 1 && sayi <= 9) {
            bitki b = bitkiOlustur(sayi,xeksenmain,yeksenmain);
            bitki b2 = bitkiOlustur(sayi,xeksenmain,yeksenmain);
            ekle(&listeMainAna, b);
            
            xeksenmain++;
             maxX++;
         
        } 
        else if (sayi >= 10 && sayi <= 20) {
            bocek c = bocekOlustur(sayi,xeksenmain,yeksenmain);
             bocek c2 = bocekOlustur(sayi,xeksenmain,yeksenmain);
            ekle(&listeMainAna, c);
            
             xeksenmain++;
             maxX++;
          
        } 
        else if (sayi >= 21 && sayi <= 50) {
            sinek s = sinekOlustur(sayi,xeksenmain,yeksenmain);
            sinek s2 = sinekOlustur(sayi,xeksenmain,yeksenmain);
            ekle(&listeMainAna, s);
     
             xeksenmain++;          //dosyayı oku sayılara göre nesne oluşturup bağlı listeye ekle
              maxX++;
       
        } 
        else if (sayi >= 51 && sayi <= 99) {
            pire p = pireOlustur(sayi,xeksenmain,yeksenmain);
            pire p2 = pireOlustur(sayi,xeksenmain,yeksenmain);
            ekle(&listeMainAna, p);
            
             xeksenmain++;
              maxX++;
          
        } 
        else {
           // printf("Belirtilen aralıklarda bir sayi girilmedi.\n");
        }
        
        if (fgetc(dosya) == '\n') { // Yeni satıra geçildiğinde
        if(flag1==0)
        {
            flag1 =1;
            xYedekle=xeksenmain;
        }
            xeksenmain=0;
            yeksenmain++;
             maxY++;  
             nSayici++;
        }
    }   
    fclose(dosya); // Dosyayı kapat
    mainYedekListe = listeMainAna;
    mainYedekListe2 = listeMainAna;
    return  mainYedekListe2;
}


void KarsilastirVeYazdir(BagliListe kiyasListe1, BagliListe kazanan, int satirSayisi, int sutunSayisi) {
    BagliListe temp1 = kiyasListe1; // İlk bağlı listenin geçici işaretçisi
    int satir = 0, sutun = 0;

    while (temp1 != NULL ) { // Her iki listede de eleman varken
       
         int sonuc = kiyas(
            kapismadegeridondur(temp1), xEksenidondur(temp1), yEksenidondur(temp1),
            kapismadegeridondur(kazanan), xEksenidondur(kazanan), yEksenidondur(kazanan),
            xeksenmain, yeksenmain
        );
        if(sonuc ==1)
        {
            yazdir(kazanan);
        }
        else
        {
            printf("X");
        }
      
        temp1 = temp1->sonraki;
        

         sutun++; // Sütun sayısını bir arttır
        if (sutun == sutunSayisi) { // Sütun sayısı belirtilen sütun sayısına ulaştığında
            printf("\n"); // Bir alt satıra geç
            satir++; // Satır sayısını bir arttır
            sutun = 0; // Sütun sayısını sıfırla

            if (satir == satirSayisi) // Belirtilen satır sayısına ulaşıldığında döngüyü sonlandır
                break;
        }
    }
}









    BagliListe satirSatirKapistir(BagliListe *analiste)
    {
    
    BagliListe tempAna= *analiste;
 
    liste3=tempAna;
    liste4=liste3;
   

 

    liste1 =liste3;
     liste2=liste3;
    
    while (liste2!=NULL)
        {
        
    
        x1 = xEksenidondur(liste1);
        y11
     = yEksenidondur(liste1);
        x2 = xEksenidondur(liste2);
        y2 = yEksenidondur(liste2); 
        tur1 = tipDondur(liste1);
       
        tur2 = tipDondur(liste2);
        
        kiyasDongu2 = kiyas(kapismadegeridondur(liste1),xEksenidondur(liste1),yEksenidondur(liste1),kapismadegeridondur(liste2),xEksenidondur(liste2),yEksenidondur(liste2),maxX,maxY);

     

        if(kiyasDongu2==1)
        {
                liste2=liste2->sonraki;
                continue;
        }
        else if(liste2->veri ==NULL)
        {
                liste2=liste2->sonraki;      
                continue;
        }
      else if (tur1 == 1 && tur2 == 4) {
    ((pire)(liste2->veri))->pireYoket((pire)(liste2->veri));
  //******  array{i}j = x
   // liste2->veri=NULL;
   
    liste2->veri==NULL;             
     liste2=liste2->sonraki;
     continue;
} 
else if (tur1 == 4 && tur2 == 1) {
    ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
   
    liste1->veri==NULL;
    liste1=liste2;              //tipe göre eleme işlemlri
     liste2=liste2->sonraki;
    continue;
} 
else if (tur1 == 2 && tur2 == 1) {
    ((bitki)(liste2->veri))->BITKIyoket((bitki)(liste2->veri));
    
  
     liste2->veri==NULL;
     liste2=liste2->sonraki;
     continue;
}
else if (tur1 == 1 && tur2 == 2) {
     ((bitki)(liste1->veri))->BITKIyoket((bitki)(liste1->veri));
  
     liste1->veri==NULL;
       liste1=liste2;
       liste2=liste2->sonraki;
    continue;
}
 else if (tur1 == 3 && tur2 == 4) {
     ((pire)(liste2->veri))->pireYoket((pire)(liste2->veri));
 
     liste2->veri==NULL;
      liste2=liste2->sonraki;
     continue;
}
else if (tur1 == 4 && tur2 == 3) {
    ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
  
      liste1->veri==NULL;
      liste1=liste2;
       liste2=liste2->sonraki;
    continue;
}
 else if (tur1 == 1 && tur2 == 3) {
     ((sinek)(liste2->veri))->sinekyoket((sinek)(liste2->veri));
  
      liste2->veri==NULL;
      liste2=liste2->sonraki;
     continue;
}
 else if (tur1 == 3 && tur2 == 1) {
     ((sinek)(liste1->veri))->sinekyoket((sinek)(liste1->veri));
   
      liste1->veri==NULL;
      liste1=liste2;
       liste2=liste2->sonraki;
    continue;
}
 else if (tur1 == 2 && tur2 == 4) {
       ((pire)(liste2->veri))->pireYoket((pire)(liste2->veri));

      liste2->veri==NULL;
      liste2=liste2->sonraki;
     continue;
}
 else if (tur1 == 4 && tur2 == 2) {
      ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
   
      liste1->veri==NULL;
      liste1=liste2;
       liste2=liste2->sonraki;
    continue;
}
 else if (tur1 == 3 && tur2 == 2) {
    ((bocek)(liste2->veri))->BOCEKyoket((bocek)(liste2->veri));
  
      liste2->veri==NULL;
      liste2=liste2->sonraki;
     continue;
}
 else if (tur1 == 2 && tur2 == 3) {
    ((bocek)(liste1->veri))->BOCEKyoket((bocek)(liste1->veri));
    
      liste1->veri==NULL;
      liste1=liste2;
       liste2=liste2->sonraki;
    continue;
}


else if (tur1==tur2)
{               //tipler aynıysa kapışma değeri ve uzaklığa göre eleme işlemleri
   if (tur1==1 && tur2==1)
   {
    if( ((bitki)(liste2->veri))->super->KapismaDegeri<((bitki)(liste1->veri))->super->KapismaDegeri)
    {
         ((bitki)(liste2->veri))->BITKIyoket((bitki)(liste2->veri));
   
         liste2->veri==NULL;
          liste2=liste2->sonraki;
     continue;
    }
    else if( ((bitki)(liste2->veri))->super->KapismaDegeri>((bitki)(liste1->veri))->super->KapismaDegeri)
    {
         ((bitki)(liste1->veri))->BITKIyoket((bitki)(liste1->veri));
      
         liste1->veri==NULL;
          liste1=liste2;
           liste2=liste2->sonraki;
    continue;
    }
    else if( ((bitki)(liste2->veri))->super->KapismaDegeri==((bitki)(liste1->veri))->super->KapismaDegeri)
    {
        uzaklik1 = uzaklikHesapla(maxX,maxY,x1,y11
    );
        uzaklik2 = uzaklikHesapla(maxX,maxY,x2,y2);
        if(uzaklik1 > uzaklik2)
        {
             ((bitki)(liste2->veri))->BITKIyoket((bitki)(liste2->veri));
    
            liste2->veri==NULL;
             liste2=liste2->sonraki;
     continue;
        }
        else if(uzaklik1 < uzaklik2)
        {
             ((bitki)(liste1->veri))->BITKIyoket((bitki)(liste1->veri));
            
             liste1->veri==NULL;
             liste1=liste2;
              liste2=liste2->sonraki;
    continue;
        }
    }
   }
   else if (tur1==2 && tur2==2)
   {
     if( ((bocek)(liste2->veri))->super->KapismaDegeri<((bocek)(liste1->veri))->super->KapismaDegeri)
    {
        ((bocek)(liste2->veri))->BOCEKyoket((bocek)(liste2->veri));
     
         liste2->veri==NULL;
          liste2=liste2->sonraki;
     continue;
    }
    else if (((bocek)(liste2->veri))->super->KapismaDegeri>((bocek)(liste1->veri))->super->KapismaDegeri)
    {
       ((bocek)(liste1->veri))->BOCEKyoket((bocek)(liste1->veri));
    
          liste1->veri==NULL;
          liste1=liste2;
           liste2=liste2->sonraki;
    continue;
    }
    
    else if( ((bocek)(liste2->veri))->super->KapismaDegeri==((bocek)(liste1->veri))->super->KapismaDegeri)
    {
        uzaklik1 = uzaklikHesapla(maxX,maxY,x1,y11
    );
        uzaklik2 = uzaklikHesapla(maxX,maxY,x2,y2);
        if(uzaklik1 > uzaklik2)
        {
           ((bocek)(liste2->veri))->BOCEKyoket((bocek)(liste2->veri));
      
               liste2->veri==NULL;
              liste2=liste2->sonraki;
     continue;
        }
        else if(uzaklik1 < uzaklik2)
        {
            
             ((bocek)(liste1->veri))->BOCEKyoket((bocek)(liste1->veri));
         
             liste1->veri==NULL;
              liste1=liste2;
               liste2=liste2->sonraki;
    continue;
        }
    }
   }
   else if (tur1 == 3 && tur2==3)
   {
     if( ((sinek)(liste2->veri))->super->super->KapismaDegeri<((sinek)(liste1->veri))->super->super->KapismaDegeri)
    {
         ((sinek)(liste2->veri))->sinekyoket((sinek)(liste2->veri));
     
            liste2->veri==NULL;
          liste2=liste2->sonraki;
     continue;
    }
    else if ( ((sinek)(liste2->veri))->super->super->KapismaDegeri>((sinek)(liste1->veri))->super->super->KapismaDegeri)
    {
          ((sinek)(liste1->veri))->sinekyoket((sinek)(liste1->veri));
         
          liste1->veri==NULL;
          liste1=liste2;
           liste2=liste2->sonraki;
    continue;
    }
    else if( ((sinek)(liste2->veri))->super->super->KapismaDegeri==((sinek)(liste1->veri))->super->super->KapismaDegeri)
    {
        uzaklik1 = uzaklikHesapla(maxX,maxY,x1,y11
    );
        uzaklik2 = uzaklikHesapla(maxX,maxY,x2,y2);
        if(uzaklik1 > uzaklik2)
        {
            ((sinek)(liste2->veri))->sinekyoket((sinek)(liste2->veri));
           
              liste2->veri==NULL;
              liste2=liste2->sonraki;
     continue;
        }
        else if(uzaklik1 < uzaklik2)
        {
            ((sinek)(liste1->veri))->sinekyoket((sinek)(liste1->veri));
           
              liste1->veri==NULL;
              liste1=liste2;
               liste2=liste2->sonraki;
    continue;
        }
    }
   }

   else if (tur1==4 && tur2==4)
   {
     if( ((pire)(liste2->veri))->super->super->KapismaDegeri<((pire)(liste1->veri))->super->super->KapismaDegeri)
    {
         ((pire)(liste2->veri))->pireYoket((pire)(liste2->veri));
       
          liste2->veri==NULL;
          liste2=liste2->sonraki;
     continue;
    }
    else if( ((pire)(liste2->veri))->super->super->KapismaDegeri>((pire)(liste1->veri))->super->super->KapismaDegeri)
    {
         ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
       
         liste1->veri==NULL;
          liste1=liste2;
           liste2=liste2->sonraki;
    continue;
    }
    else if( ((pire)(liste2->veri))->super->super->KapismaDegeri==((pire)(liste1->veri))->super->super->KapismaDegeri)
    {
         uzaklik1 = uzaklikHesapla(maxX,maxY,x1,y11
        );
        uzaklik2 = uzaklikHesapla(maxX,maxY,x2,y2);
        if(uzaklik1 > uzaklik2)
        {
           ((pire)(liste2->veri))->pireYoket((pire)(liste2->veri));
         
              liste2->veri==NULL;
             liste2=liste2->sonraki;
     continue;
        }
         if(uzaklik2 > uzaklik1)
        {
            ((pire)(liste1->veri))->pireYoket((pire)(liste1->veri));
        
            liste1->veri==NULL;
             liste1=liste2;
              liste2=liste2->sonraki;
    continue;
        }
    }
   }
}
    //liste2=liste2->sonraki;
        liste2=liste2->sonraki;
     
     }
  
    

   
    return liste1;
    
    }








//////////////////////////////////
/////////////////////////
///////////////////////////

//////////////////////////////////
/////////////////////////
///////////////////////////



