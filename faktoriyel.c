#include<stdio.h>

int main() {
  // Kullanıcıdan alınacak sayıyı tanımlıyoruz
  int say;
  // İşlem sonucumuzun tanımsız dönmesini engellemek için faktöryel değerimizi 1 olarak belirliyoruz.
  double faktoryel = 1;

  sayi1:
    printf("Lutfen Faktoriyelini hesaplamak istediğimiz sayıyı giriniz: ");
    scanf("%d", &say);
    printf("\n");
  

  // 25ten sonraki faktöryel hesaplamalarında sayı int için fazla büyük olucağından sayımızı 25 ile sınırlıyoruz.
  if (say >= 25) {
	  printf("Girilen sayi 25'den büyük olamaz\n");
	  goto sayi1;
  }

  // Hesaplamayı yapıcağımız ana döngümüzü 1'den itibaren başlatıyoruz. Çünkü 0! = 1.
  for (int i = 1; i <= say; i++) {
    faktoryel = faktoryel * i;
  }

  printf("%d'in faktoriyeli %d'dir.", say, faktoryel);

  return 0;
}
