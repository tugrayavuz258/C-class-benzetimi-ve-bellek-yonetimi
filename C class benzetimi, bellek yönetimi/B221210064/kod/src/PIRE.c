#include <stdlib.h>
#include "PIRE.h"

char* pireGorunum() {
    return "P";
}

void pireYoket( pire this_pire) {
    if (this_pire == NULL) return;
    this_pire->super->BOCEKyoket(this_pire->super);
    free(this_pire); 
}

pire pireOlustur(int kapismadegeri, int x, int y) {
    pire this_pire;
    this_pire = (pire)malloc(sizeof(struct PIREK));
    this_pire->super = bocekOlustur(kapismadegeri, x, y);
    this_pire->super->super->gorunum = &pireGorunum;
    this_pire->pireYoket = &pireYoket;
    return this_pire;
}