#include <stdlib.h>
#include "SINEK.h"

char* sinekGorunum() {
    return "S";
}

void sinekYoket(sinek this_sinek) {
    if (this_sinek == NULL) return;
    this_sinek->super->BOCEKyoket(this_sinek->super);
    free(this_sinek); 
}

sinek sinekOlustur(int kapismadegeri, int x, int y) {
    sinek this_sinek;
    this_sinek = (sinek)malloc(sizeof(struct SINEKK));
    this_sinek->super = bocekOlustur(kapismadegeri, x, y);
    this_sinek->super->super->gorunum = &sinekGorunum;
    this_sinek->sinekyoket = &sinekYoket;
    return this_sinek;
}