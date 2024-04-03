//-------------------------------------------------//
//          Copyright Batuhan Y. Yilmaz            //
//-------------------------------------------------//

#include<stdio.h>

// Burada int kullanarak ana fonksiyonumzu oluşturuyoruz. Ben bunu derleyicim bana hata verdiği için yazdım normal şartlar altında yazmanıza gerek yoktur. 
int main() {
 double viz,fin,donem_notu;
 double dev,ogr_say;
 char* harf_not;
 
 //
 printf("Ogrenci Sayisini giriniz: ");
 scanf("%lf", &ogr_say);
 printf("\n");
 
 for (int i = 0; i < ogr_say; i++) {
   
   vize:
   printf("%d. Ogrencinin vize notunu giriniz: ", i + 1);
   scanf("%lf", &viz);
   printf("\n");
   
   if (viz < 0 || viz > 100) {
     printf("Vize notunu yanlis girdiniz lutfen tekrar deneyin. \n");
     printf("Vize notu 0 ile 100 arasında olmak zorundadir. \n");
     goto vize;
   }
   
   final:
   printf("%d. Ogrencinin final notunu giriniz: ", i + 1);
   scanf("%lf", &fin);
   printf("\n");
   
   if (fin < 0 || fin > 100) {
     printf("Final notunu yanlis girdiniz lutfen tekrar deneyin. \n");
     printf("Final notu 0 ile 100 arasında olmak zorundadir. \n");
     goto final;
   }
   
   devamsizlik:
   printf("%d. Ogrencinin devamsizlik sayisini giriniz: ", i + 1);
   scanf("%lf", &dev);
   printf("\n");
   
   if (dev < 0 || dev > 14) {
     printf("Devamsizlik sayisini yanlis girdiniz lutfen tekrar deneyin. \n");
     printf("Devamsizlik notu 0 ile 14 arasında olmalıdır. \n");
     goto devamsizlik;
   }
   
   if (dev <= 4) {
     if (fin >= 45) {
       donem_notu = (viz * 0.4) + (fin * 0.6);
       
       // Harf notlarını kafama göre salladım ama eğer siz daha doğru bir sistem oluşurmak istiyorsanız aşşağıdaki kaynağa göz atabilirsiniz.
       // https://github.com/maidis/algoritmalar-cpp/blob/master/not-sistemi-donusturucu/README.md

       // Her seferinde farklı bir printf fonksiyonu çağırmaktansa harf_not adlı bir değişken oluşturup duruma göre değişkeni değiştiriyoruz.
       if (donem_notu <= 50 && donem_notu <= 60) {
         harf_not = "CC";
       } else if (donem_notu > 60 && donem_notu <= 70) {
         harf_not = "CB";
       } else if (donem_notu > 70 && donem_notu <= 80) {
         harf_not = "BB";
       } else if (donem_notu > 80 && donem_notu <= 90) {
         harf_not = "BA";
       } else if (donem_notu > 90 && donem_notu <= 100) {
         harf_not = "AA";
       }
       // Değişkenimizi yukarıda ayarladıktan sonra yazdırıyoruz.
       printf("%d. ogrenci %s harf notuyla gecmistir. \n", i + 1, harf_not);
     }
   } else {
     printf("Ogrenci devamsizliktan kalmistir. \n");
   }
 }
  // Programın sorunsuz çalıştığını ve bittiğini belirtmek için 0 döndürüyoruz.
  return 0;
}
