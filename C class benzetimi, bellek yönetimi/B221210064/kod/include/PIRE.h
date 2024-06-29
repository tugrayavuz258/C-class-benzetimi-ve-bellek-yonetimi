#ifndef PIRE_H
#define PIRE_H

#include "BOCEK.h"
struct PIREK {
    bocek super;
    void (*pireYoket)(struct PIREK*);
};

typedef struct PIREK* pire;

pire pireOlustur(int, int, int);
void pireYoket( pire);
char* pireGorunum();

#endif
