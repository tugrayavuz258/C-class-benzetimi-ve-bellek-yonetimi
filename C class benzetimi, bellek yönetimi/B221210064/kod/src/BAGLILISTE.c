#include "BITKI.h"
#include "BOCEK.h"
#include "PIRE.h"
#include "SINEK.h"
#include "BAGLILISTE.h"


// Bağlı listeye yeni bir düğüm ekler
void ekle(BagliListe* bas, void* yeniVeri) {
    struct Dugum* yeniDugum = (struct Dugum*)malloc(sizeof(struct Dugum));
    yeniDugum->veri = yeniVeri;
    yeniDugum->sonraki = NULL;

    if (*bas == NULL) {
        *bas = yeniDugum;
        return;
    }

    struct Dugum* temp = *bas;
    while (temp->sonraki != NULL) {
        temp = temp->sonraki;
    }

    temp->sonraki = yeniDugum;
    return;
}

// Bağlı listeyi ekrana yazdırır
void yazdir(BagliListe bas) {
    char* a;
    if (bas->veri != NULL) {
        if (((bitki)(bas->veri))->super->KapismaDegeri >= 1 && ((bitki)(bas->veri))->super->KapismaDegeri <= 9) {
           
            printf("%s", ((bitki)(bas->veri))->super->gorunum());
             return;
          
        } else if (((bocek)(bas->veri))->super->KapismaDegeri >= 10 && ((bocek)(bas->veri))->super->KapismaDegeri <= 20) {
          
            printf("%s", ((bocek)(bas->veri))->super->gorunum());
            return;
           
        } else if (((sinek)(bas->veri))->super->super->KapismaDegeri >= 21 && ((sinek)(bas->veri))->super->super->KapismaDegeri <= 50) {
           
            printf("%s", ((sinek)(bas->veri))->super->super->gorunum());
              return;
           
        } else if (((pire)(bas->veri))->super->super->KapismaDegeri >= 51 && ((pire)(bas->veri))->super->super->KapismaDegeri <= 99) {
        
            printf("%s", ((pire)(bas->veri))->super->super->gorunum());
           
           return;
        } 
        
    }
    else if (bas->veri==NULL)
    {
        printf("X");
        return;
    }
    return;
}

char* a;


// Tüm düğümleri temizler
void sil(BagliListe* bas) {
    struct Dugum* simdiki = *bas;
    struct Dugum* sonraki;
    while (simdiki != NULL) {
        sonraki = simdiki->sonraki;
        free(simdiki);
        simdiki = sonraki;
    }

    *bas = NULL; // Baş göstericisini sıfırla, liste boşaltıldı
}
