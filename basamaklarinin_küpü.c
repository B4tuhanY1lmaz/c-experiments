//-------------------------------------------------//
//          Copyright Batuhan Y. Yilmaz            //
//-------------------------------------------------//


#include<stdio.h>

int main() {
  int x = 100;
  printf("Basamaklarinin kuplerinin toplamina esit 3 basamakli sayilar: \n");
  
  for (x >= 100; x < 999; x++) {
    int a,b,c;
    a = (x/100);
    b = ((x - (a*100)) / 10);
    c = (x - ((a * 100) + (b * 10)));

    if (x == ((a*a*a) + (b*b*b) + (c*c*c))) {
      printf("%d \n", x);
    }

  }

  return 0;
}
