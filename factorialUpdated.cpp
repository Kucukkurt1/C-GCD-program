#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000 //#define MAX_LEN 1000 komutu, dizinin maksimum boyutunu 1000 olarak tanýmlar.//



                                                       /*void multiply(int *a, int &n, int num) fonksiyonu,
                                                        dizinin her elemanýný verilen sayý ile çarpmak için kullanýlýr. Bu 
													    fonksiyon içinde taþýma deðeri (carry) ve ürün (prod)deðiþkenleri tanýmlanýr. 
                                                        Dizi elemanlarý ile verilen sayý çarpýlýr ve sonuçta oluþan taþýma deðeri diziye eklenir.*/
void multiply(int *a, int &n, int num) { 
    int carry = 0;
    for (int i = 0; i < n; i++) {
        int prod = a[i] * num + carry;
        a[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        a[n] = carry % 10;
        carry /= 10;
        n++;
    }
}

                                                          /*void factorial(int num) fonksiyonu, verilen sayýnýn faktöriyelini hesaplamak için kullanýlýr.
                                                            Bu fonksiyon içinde, bellekte bir int dizisi oluþturulur ve ilk elemaný 1 olarak ayarlanýr.
                                                             Dizinin boyutu (n) de 1 olarak tanýmlanýr. Sonra, 2 ile num arasýndaki sayýlar 
															  dizi elemanlarý ile çarpýlýr ve sonuç diziye eklenir.*/
void factorial(int num) {  void factorial(int num) { 
    int *a = (int *)calloc(MAX_LEN, sizeof(int));

    a[0] = 1;
    int n = 1;

    for (int i = 2; i <= num; i++)
        multiply(a, n, i);

    for (int i = n - 1; i >= 0; i--)
        printf("%d", a[i]);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: ", num);
    factorial(num);
    return 0;
}
