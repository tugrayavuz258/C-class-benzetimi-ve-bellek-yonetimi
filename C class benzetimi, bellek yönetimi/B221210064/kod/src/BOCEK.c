#include"BOCEK.h"
char* bocekGorunum() {
    return "C";
}

void bocekYoket( bocek this3) {
    this3->super->canliSil(this3->super);
    if (this3 == NULL) return;
    free(this3); 
}

bocek bocekOlustur(int kapismadegeri, int x, int y) {
    bocek this3;
    this3 = (bocek)malloc(sizeof(struct BOCEKK));
    this3->super = canliOlustur(kapismadegeri, x, y);
    this3->super->gorunum = &bocekGorunum;
    this3->BOCEKyoket = &bocekYoket;
    return this3;
}
