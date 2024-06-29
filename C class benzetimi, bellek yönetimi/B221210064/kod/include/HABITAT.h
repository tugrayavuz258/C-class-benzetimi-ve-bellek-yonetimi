#ifndef HABITAT_H
#define HABITAT_H

#include "BITKI.h"
#include "SINEK.h"
#include "PIRE.h"
#include "BAGLILISTE.h"

struct HABITAT{
    BagliListe kazanan;
    BagliListe GeziDugum;
    void (*satirSatirKapistir)(BagliListe*);
    int (*kapismadegeridondur)(BagliListe);
    int (*xEksenidondur)(BagliListe);
    int (*yEksenidondur)(BagliListe);
    int (*tipDondur)(BagliListe);
    double (*uzaklikHesapla)(int, int, int, int);
    int (*kiyas)(int, int, int, int, int, int, int, int);
    BagliListe (*DosyaOKU)();
    void (*KarsilastirVeYazdir)(BagliListe, BagliListe, int, int);
   void(*habitatSil)(struct HABITAT*);
};

typedef struct HABITAT* habitat;

int kapismadegeridondur(BagliListe);
int xEksenidondur(BagliListe);
int yEksenidondur(BagliListe);
int tipDondur(BagliListe);
double uzaklikHesapla(int, int, int, int);
int kiyas(int, int, int, int, int, int, int, int);
void YazdirDUZBAGLILISTE(BagliListe*, int, int);
BagliListe DosyaOKU();
void KarsilastirVeYazdir(BagliListe kiyasListe1, BagliListe kazanan, int satirSayisi, int sutunSayisi);
BagliListe satirSatirKapistir(BagliListe*);
habitat HabitatOlustur();
void habitatSil(habitat);
int x1;
int y11;
int x2;
int y2;
int tur1;
int tur2;

int kiyasDongu1;
 int kiyasDongu2;

 double uzaklik1;
     double uzaklik2;
     double uzaklik3;
     int xeksenmain;
int yeksenmain;
int sayi;
int flag1;
int xYedekle;
int maxX;
int maxY;
int nSayici;

#endif