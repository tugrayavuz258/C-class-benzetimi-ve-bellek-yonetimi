#include "CANLI.h"

void canliSilKaynakKod(const canli this) {
    if (this == NULL) return;
    free(this);
}

canli canliOlustur(int kapismadegeri, int x, int y) {
    canli this;
    this = (canli)malloc(sizeof(struct CANLI));
    this->KapismaDegeri = kapismadegeri;
    this->xEkseni = x;
    this->yEkseni = y;
    this->canliSil = &canliSilKaynakKod;
    return this;
}



