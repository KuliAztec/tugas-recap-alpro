#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}


/*

Bisakah kamu menjelaskan bagaimana program percobaan6b.c itu bekerja? Dan apakah kamu sudah memahami bagaimana masing-masing varian perulangan itu bekerja?

terdapat dua pengulangan do while

pertama di inisiasi iterator i = 2, dan j (tidak bernilai)

masuk do while pertama langsung output

Bilangan utama 2 
nilai j sekarang jadi 1

masuk do while ke dua (nested do while)
mengoutputkan
bilangan pengali 1
hasil perkalian 2

nilai j increment sekarang bernilai 2
masuk kembali ke do while yang kedua karena nilai j masih valid ( di bawah batasan )
output
bilangan pengali 2
hasil perkalian 4

keluar dari do while kedua
nilai i increment sekarang bernilai 3

output
bilangan utama 3

masuk ke do while kedua
output
bilangan pengali 1
hasil perkalian 3

nilai j increment

output
bilangan pengali 2
hasil perkalian 6


*/