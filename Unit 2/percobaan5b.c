#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

/*
Bisakah kamu menjelaskan bagaimana program percobaan5b.c itu bekerja?

Terdapat dua perulangan while

di deklarasikan int i = 2 , j = 1 sebagai iterator dalam while

while pertama memiliki iterator i, dimana i bernilai 2, batasannya <= 3 dibawah terlihat setiap habis operasi maka nilai i bertambah satu ( i++ ), lalu nilai j akan di set menjadi 1 kembali

while kedua memiliki iterator j, dimana j bernilai 1, batasannya <= 2, setiap operasi nilai j increment (j++)

terdapat 6 iterasi ( 2 iterasi i, 4 iterasi j)
urutan iterasi nya antara lain

i	j	iterasi
2		1
2	1	2
2	2	3
3		4
3	1	5
3	2	6

*/