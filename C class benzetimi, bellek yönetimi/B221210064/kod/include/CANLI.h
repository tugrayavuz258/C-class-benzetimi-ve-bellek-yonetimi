#ifndef CANLI_H
#define CANLI_H
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

   
// CANLI struct'ı ve ilgili fonksiyonlar
struct CANLI {
    int KapismaDegeri;
    int xEkseni;
    int yEkseni;
    char* (*gorunum)();
    //char gorunum;
    void (*canliSil)(struct CANLI*);
};

typedef struct CANLI* canli;

canli canliOlustur(int, int, int);
void canliSilKaynakKod(const canli);

#endif