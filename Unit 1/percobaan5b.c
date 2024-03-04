#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

/*

Dapatkah kamu menemukan perbedaan output dari kedua program tersebut? Jika iya, coba jelaskan apa perbedaannya

Jika scanf() hanya mengambil value hingga dipisahkan spasi " ";
Untuk fgets() akan mengambil value hingga selesai (spasi juga akan dituliskan)

Ex :
"Carlos Sainz Vázquez de Castro Cenamor Rincón Rebollo Birto Moreno de Aranda de Anteruriaga Tiapera Deltún"
//scanf() --> 	Carlos
//fgets() --> 	Carlos Sainz Vázquez de Castro 


*/