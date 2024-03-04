#include <stdio.h>

int main() {
	int s, t, v;
	
	scanf("%d %d", &s, &t);
	float kecepatan = (float) s / t;
	printf("Kecepatannya ialah : %f m/s \n", kecepatan);
	
	scanf("%d %d", &v, &t);
	float jarak = (float) v * t;
	printf("Jaraknya ialah : %f meter \n", jarak);
	
	scanf("%d %d", &s, &v);
	float waktu = (float) s / v;
	printf("Waktunya ialah : %f sekon \n", waktu);
	
}
