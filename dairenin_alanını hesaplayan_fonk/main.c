#include <stdio.h>
#include <stdlib.h>
// dairenin yaricapi kullaniciya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyonu icerisinden cagrilmalidir.
// dairenin alanini bulunuz

float pi=3.14;
float square(const int r);

int main()
{
    printf("r degeri giriniz = ");

    int r_degeri;
    float alan ;
    scanf("%d",&r_degeri);
    alan = pi*square(r_degeri);

    printf("dairenin alani : %0.1f",alan);  //virgulden sonraki 1.basamagi yazdi

    return 0;
}

float square(const int r)
{
    // Bir degiskenin program boyunca sabit tutulmasi istendigi durumda const (sabit) ifadesi kullaniyor.

    float squarex= r*r;
    return squarex;
}
