#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000 //#define MAX_LEN 1000 komutu, dizinin maksimum boyutunu 1000 olarak tan�mlar.//



                                                       /*void multiply(int *a, int &n, int num) fonksiyonu,
                                                        dizinin her eleman�n� verilen say� ile �arpmak i�in kullan�l�r. Bu 
													    fonksiyon i�inde ta��ma de�eri (carry) ve �r�n (prod)de�i�kenleri tan�mlan�r. 
                                                        Dizi elemanlar� ile verilen say� �arp�l�r ve sonu�ta olu�an ta��ma de�eri diziye eklenir.*/
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

                                                          /*void factorial(int num) fonksiyonu, verilen say�n�n fakt�riyelini hesaplamak i�in kullan�l�r.
                                                            Bu fonksiyon i�inde, bellekte bir int dizisi olu�turulur ve ilk eleman� 1 olarak ayarlan�r.
                                                             Dizinin boyutu (n) de 1 olarak tan�mlan�r. Sonra, 2 ile num aras�ndaki say�lar 
															  dizi elemanlar� ile �arp�l�r ve sonu� diziye eklenir.*/
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
