//-------------------------------------------------//
//          Copyright Batuhan Y. Yilmaz            //
//-------------------------------------------------//

// Mantığı:
// 3 adet ana değişkenimiz ve 1 ana döngümüz var. 
// İlk olarak kullanıcıya yüksekliği soruyoruz ve bu değeri "yuk" değişkenine atıyoruz.
// Ardından ana döngümüzü oluşturup verdiğimiz yükseklikten yola çıkarak yıldız ve yıldızdan önce yazdırılıcak boşluk değerimizi hesaplıyoruz. Bu değerler i değişkenine bağlı olucak şekilde boşluk sayımız sürekli azalıcak ve yıldız sayımız sürekli artıcak.
// Yıldız sayısı satır sayısının 2 katından 1 eksik olucak.
// Boşluk sayımız için ise yükseklik değerinden satır sayımızı çıkartıyoruz ve +1 ekliyoruz.
// Ardından ana döngümüzün içinde 2 yeni döngü oluşturuyoruz ve bu döngüler içerisinde önce boşluk sayımız kadar boşluklarımız, ardından ise yıldız sayımız kadar yıldızlarımızı yazdırıyoruz ve yıldızların ardından yeni satıra geçip i değerimiz yükseklik değerimize eşit olana kadar bunu tekrarlıyoruz.

#include<stdio.h>

// Burada void kullanarak ana fonksiyonumzu oluşturuyoruz. Ben bunu derleyicim bana hata verdiği için yazdım normal şartlar altında yazmanıza gerek yoktur. 
void main() {
  // Ağaç Yüksekliğini kullanıcıdan al.
  height:
    int yuk = 0;
    printf("Lutfen Yuksekligi giriniz: ");
    scanf("%d", &yuk);
    printf("\n");
  
  // Eğer girilen değer 20'den fazlaysa tekrardan yüksekliği sor.
  if ( yuk > 20) {
    printf("Girilen deger 20den buyuk olamaz. \n");
    goto height;
  }
  
  // Ana döngümüzü oluşturuyoruz
  for (int i = 1; i<=yuk; i++) {
    
    // i'ye bağlı yıldız sayımızı hesaplıyoruz. 
    // Yıldız sayısı tek sayı olacak şekilde i değerimizin 2 katından 1 çıkartartıyoruz
    int yildiz = (i * 2) - 1;
    
    // Boşluk sayısını hesaplamak için kullanıcının girdiği yükseklik değerinden "i" değerini çıkartıp 1 ekliyoruz.
    // Bu sayede piramitimiz her zaman ekranın 1 boşluk sağında başlıyacak. Ama olmasada olur.
    int bosluk = yuk - i + 1;
    
    // Döngümüz içinde yeni bir döngü oluşturup hesapladığımız boşluk sayısı kadar boşluk yazdırıyoruz
    for (int j = 0; j < bosluk; j++)
      printf(" ");
    
    // Ardıdan yeni bir döngü oluşturup hesapladığımzı yıldız sayısı kadar yıldız yazdırıyoruz ve yeni satıra geçiyoruz.
    for (int j = 0; j < yildiz; j++)
      printf("*");
      
    // Yıldızları yazdırınca yeni satıra geç.
    printf("\n");
  }
  printf("\n");
}

// Beklenen çıktımız:
// ~/newC/EEM-de Programlama $ ./piramit
// Lutfen Yuksekligi giriniz: 15
//
//               *
//              ***
//             *****
//            *******
//           *********
//          ***********
//         *************
//        ***************
//       *****************
//      *******************
//     *********************
//    ***********************
//   *************************
//  ***************************
// *****************************