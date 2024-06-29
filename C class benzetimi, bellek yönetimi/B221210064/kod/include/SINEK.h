#ifndef SINEK_H
#define SINEK_H

#include "BOCEK.h"

struct SINEKK {
    bocek super;
    void (*sinekyoket)(struct SINEKK*);
};

typedef struct SINEKK* sinek;

sinek sinekOlustur(int, int, int);
void sinekYoket( sinek);
char* sinekGorunum();
#endif