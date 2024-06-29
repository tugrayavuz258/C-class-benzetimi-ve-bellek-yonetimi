#ifndef BITKI_H
#define BITKI_H
#include "CANLI.h"

struct BITKII {
    canli super;
    void (*BITKIyoket)(struct BITKII*);
};

typedef struct BITKII* bitki;

bitki bitkiOlustur(int, int, int);
void bitkiYokEt( bitki);
char* bitkiGorunum();
#endif