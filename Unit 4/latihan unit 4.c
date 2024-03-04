#include <stdio.h>

void keliling(int sisi){
        
    int kel = 4 * sisi;
    printf("Keliling perseginya adalah\t: %d \n", kel);
}

void luas(int sisi){
    
    int wide = sisi * sisi;
    printf("Luas perseginya adalah\t\t: %d \n", wide);
}
void volume(int sisi){
    int vol = sisi * sisi * sisi ;
    printf("Luas kubusnya adalah\t\t: %d \n",vol);
}


int main() {
  
  int sisi;
  printf("Berapa panjang sisinya : ");
  scanf("%d", &sisi);
  
  keliling(sisi);
  luas(sisi);
  volume(sisi);
  
  return 0;
}