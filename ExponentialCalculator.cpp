#include <stdio.h>

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}
/*double power(double base, int exponent) fonksiyonu, verilen taban sayýsýný verilen
 üssayýsý kadar çarpmak için kullanýlýr. Bu fonksiyon içinde, result deðiþkeni
 1 olarak tanýmlanýr ve for döngüsü içinde, result deðiþkeni base deðiþkeni ile exponent 
 kadar çarpýlýr.*/
