#ifndef BAGLILISTE_H
#define BAGLILISTE_H

#include <stdlib.h>
struct Dugum {
    void* veri; // Veri alanı
    struct Dugum* sonraki; // Sonraki düğümün adresi
};

typedef struct Dugum* BagliListe;


// Bağlı listeye yeni bir düğüm ekler
void ekle(BagliListe* , void*);

// Bağlı listeyi ekrana yazdırır
void yazdir(BagliListe );

// Belirli bir veriyi içeren düğümü bağlı listeden siler
void sil(BagliListe*);
BagliListe mainYedekListe;
 BagliListe mainYedekListe2;
 BagliListe liste1 ;
BagliListe liste2;
BagliListe liste3;
BagliListe liste4;
BagliListe liste5;
#endif
