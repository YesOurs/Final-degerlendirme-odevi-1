#include <stdio.h>

int main() {
    float tutar, odenen;
    int toplam_kurus, toplam_kupur;
    int tl200, tl100, tl50, tl20, tl10, tl5, tl1;
    int kr50, kr25, kr10, kr5, kr1;

    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &tutar);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen);

    toplam_kurus = (int)((odenen - tutar) * 100.0 + 0.5);

    tl200 = toplam_kurus / 20000;
    toplam_kurus = toplam_kurus % 20000;

    tl100 = toplam_kurus / 10000;
    toplam_kurus = toplam_kurus % 10000;

    tl50 = toplam_kurus / 5000;
    toplam_kurus = toplam_kurus % 5000;

    tl20 = toplam_kurus / 2000;
    toplam_kurus = toplam_kurus % 2000;

    tl10 = toplam_kurus / 1000;
    toplam_kurus = toplam_kurus % 1000;

    tl5 = toplam_kurus / 500;
    toplam_kurus = toplam_kurus % 500;

    tl1 = toplam_kurus / 100;
    toplam_kurus = toplam_kurus % 100;

    kr50 = toplam_kurus / 50;
    toplam_kurus = toplam_kurus % 50;

    kr25 = toplam_kurus / 25;
    toplam_kurus = toplam_kurus % 25;

    kr10 = toplam_kurus / 10;
    toplam_kurus = toplam_kurus % 10;

    kr5 = toplam_kurus / 5;
    toplam_kurus = toplam_kurus % 5;

    kr1 = toplam_kurus / 1;

    toplam_kupur = tl200 + tl100 + tl50 + tl20 + tl10 + tl5 + tl1 + kr50 + kr25 + kr10 + kr5 + kr1;

    printf("%d adet 200 TL\n", tl200);
    printf("%d adet 100 TL\n", tl100);
    printf("%d adet 50 TL\n", tl50);
    printf("%d adet 20 TL\n", tl20);
    printf("%d adet 10 TL\n", tl10);
    printf("%d adet 5 TL\n", tl5);
    printf("%d adet 1 TL\n", tl1);
    printf("%d adet 50 Kurus\n", kr50);
    printf("%d adet 25 Kurus\n", kr25);
    printf("%d adet 10 Kurus\n", kr10);
    printf("%d adet 5 Kurus\n", kr5);
    printf("%d adet 1 Kurus\n", kr1);

    printf("Musteriye verilecek toplam kupur (banknot/madeni para) sayisi: %d\n", toplam_kupur);

    return 0;
}
