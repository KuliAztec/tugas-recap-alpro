#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

/*

Bisakah kamu menjelaskan bagaimana program percobaan4b.c itu bekerja?

Terdapat dua perulangan for

for dengan iterator i, di inisiasi i bernilai 2, dengan batasan  <= 3 , dimana setiap iterasi nilai i increment  ++i
akan mengoutputkan " Bilangan utama : %d ;  %d disini akan menampilkan sebuah tipe data int dengan referensi nilai i saat ini.
"Bilangan utama: 2" 
"Bilangan utama: 3"

di dalamnya ada for iterator j, di inisiasi j bernilai 1, dengan batasan <= 2, dimana setiap iterasi nilai j incremen ++j
akan menoutputkan 	Bilangan pengali: %d         %d disini akan menampilkan sebuah tipe data int dengan referensi nilai j saat ini
					Hasil perkalian: %d			%d disini akan menampilkan sebuah tipe data int dengan referensi nilai j dikali i

Bilangan pengali: 1
Hasil perkalian: 2

Bilangan pengali: 2
Hasil perkalian: 6

urutan iterasi nya antara lain

i	j	iterasi
2		1
2	1	2
2	2	3
3		4
3	1	5
3	2	



*/