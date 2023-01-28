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
/*double power(double base, int exponent) fonksiyonu, verilen taban say�s�n� verilen
 �ssay�s� kadar �arpmak i�in kullan�l�r. Bu fonksiyon i�inde, result de�i�keni
 1 olarak tan�mlan�r ve for d�ng�s� i�inde, result de�i�keni base de�i�keni ile exponent 
 kadar �arp�l�r.*/
