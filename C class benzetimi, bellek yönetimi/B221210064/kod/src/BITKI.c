#include"BITKI.h"

char* bitkiGorunum() {
    return "B";
}

void bitkiYokEt( bitki this2) {
    this2->super->canliSil(this2->super);
    if (this2 == NULL) 
       return; 
       
    free(this2);
}

bitki bitkiOlustur(int kapismadegeri, int x, int y) {
    bitki this2;
    this2 = (bitki)malloc(sizeof(struct BITKII));
    this2->super = canliOlustur(kapismadegeri, x, y);
    this2->super->gorunum = &bitkiGorunum;
    this2->BITKIyoket = &bitkiYokEt;
    return this2;
}