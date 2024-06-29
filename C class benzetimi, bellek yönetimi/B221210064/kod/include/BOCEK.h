#ifndef BOCEK_H
#define BOCEK_H
#include "CANLI.h"
struct BOCEKK {
    canli super;
    void(*BOCEKyoket)(struct BOCEKK*);
};

typedef struct BOCEKK* bocek;

bocek bocekOlustur(int, int, int);
void bocekYoket( bocek);
char* bocekGorunum();
#endif