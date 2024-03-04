
#include <stdio.h>

int main()
{
    int jml_elm;
    printf("berapa jumlah elemennya : ");
    scanf("%d", &jml_elm);
    
    int elm[jml_elm];
    int total=0;
    
    for(int i=0;i<jml_elm;i++){
        
        printf("masukan elemen : ");
        scanf("%d", &elm[i]);
        total += elm[i];
    
    }

    printf("Sum dari semua elemen adalah : %d", total);

    return 0;
}
