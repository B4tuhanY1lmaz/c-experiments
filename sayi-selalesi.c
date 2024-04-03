//-------------------------------------------------//
//          Copyright Batuhan Y. Yilmaz            //
//-------------------------------------------------//

// Mantık:
// Bu program 1 ana değişkenden ve 2 ana döngüden oluşmaktadır.
// Yüksekliğimizi bir "yuk" değişkenine kaydettikten sonra 1. ana döngümüzü oluşturuyruz. Bu döngü i değişkeni yükseklik değerimize ulaşana kadar sürekli kendisini tekrarlıyacak ve her tekrarladığında 2. döngüyü çalıştırıcak.
// 2. döngümüz ise asıl sihirin gerçekleştiği döngü. Bu döngü içerisinde yaptığımız şey, j değişkenini i değişkenine denk olana kadar arttırıp ekrana yazdırıyoruz ve her seferinde i değerimizle birlikte bu döngünün bitiş rakamıda artıyor ve bu şekilde 1'den 10 kadar giden bir şelale veya başka bir tabirle sayı merdiveni oluşturuyoruz. 

#include<stdio.h>

// Burada int kullanarak ana fonksiyonumzu oluşturuyoruz. Ben bunu derleyicim bana hata verdiği için yazdım normal şartlar altında yazmanıza gerek yoktur.
int main() {
  // Yüksekliğimizi yuk değişkenine yazdırıyoruz. 
  // Burada isteğe balı bu değeri kullanıcıdanda alabiliriz. Bunun örneği için "piramit.c" adlı dosyaya göz atabilirsiniz.
  int yuk = 10;
  
  // 1. ana döngümüzü oluşturuyoruz. 
  for (int i = 1; i <= yuk; i++) {
    
    // Ana döngü içerisinde 2. döngümüzü oluşturuyoruz.
    for (int j = 1; j < i; j++) {
      // Her j değeri arttığında ekrana yazdırıyoruz.
      printf("%d", j);
    }
    // Döngümüz tekrarlamadan önce yeni satıra geçiyoruz.
    printf("\n");
  }
  
  // Diğer şelalemizi yazdırmadan önce bir satır boşluk bırakıyoruz.
  printf("\n");
  
  // Aynısının yıldızlı hali.
  for (int i = 1; i <= yuk; i++) {
    printf(" %d: ", i);
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  // Programın sorunsuz çalıştığını ve bittiğini belirtmek için 0 döndürüyoruz.
  return 0;
}

// Beklenen çıktımız:
//~/newC/EEM-de Programlama $ ./selale

// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789

// 1: *
// 2: **
// 3: ***
// 4: ****
// 5: *****
// 6: ******
// 7: *******
// 8: ********
// 9: *********
// 10: **********
