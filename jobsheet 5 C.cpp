#include <stdio.h>
#include <stdlib.h>
main ()
{
	printf("NAMA : Zulhan Ozi Firmannu \n");
	printf("NIM : F1B019148 \n");
	printf("KELOMPOK : 28\n");
	int i, j;
	int matrik1 [2][2], matrik2 [2][2], jumlah [2][2];
	for (i = 0; i < 2; i++){
	for (j = 0; j < 2; j++){
	printf ("Masukkan nilai matrik 1 %i, %i = ", i, j);
	scanf ("%i", &matrik1[i][j]);
	}
	}
	printf ("\n");
	for (i = 0; i < 2; i++){
	for (j = 0; j < 2; j++){
	printf ("Masukkan nilai matrik 2 %i, %i = ", i, j);
	scanf ("%i", &matrik2[i][j]);
	}
	}
	printf("\n");
	for (i = 0; i < 2; i++){
	for (j = 0; j < 2; j++){
	jumlah [i][j]=matrik1[i][j]*matrik2[i][j];
	printf ("%i ", jumlah[i][j]);
	}
	printf ("\n");
	}
}
