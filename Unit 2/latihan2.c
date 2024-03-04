#include <stdio.h>

int main(void) {
	
	int jml_trk;
	int jumlah = 0;
	
	printf("Berapa kali transaksi hari ini : ");
	scanf("%d", &jml_trk );
	
	if(jml_trk <= 0){
		printf("Tidak ada transaksi hari ini");
	}
	else{
		for(int i=0;i<jml_trk;++i){
			int nomina;
			
			printf("Nominal transaksi : ");
			scanf("%d", &nomina);
			jumlah += nomina;
			
		}
		
		printf("Jumlah pengeluaran hari ini : %d", jumlah);
		
	}
	
	
	return 0;
}
