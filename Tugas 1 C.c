#include <stdio.h>
 main ()
{
	printf("NAMA : Zulhan Ozi Firmannu \n");
	printf("NIM : F1B019148 \n");
	printf("KELOMPOK : 28\n\n");
	int kode , harga , i=1 , total_pembelian=0, diskon, total_bayar;
	char kar= 'y' ;
	printf("+=======================================+\n");
	printf("| Kode | Nama Barang      | Harga       |\n");
	printf("|  1   | Kabel data       | Rp. 25.000  |\n");
	printf("|  2   | Power bank       | Rp. 200.00  |\n");
	printf("|  3   | Power Suply      | Rp. 300.000 |\n");
	printf("|  4   | Notebook cooler  | Rp. 90.000  |\n");
	printf("|  5   | Kabel HDMI       | Rp. 70.000  |\n");
	printf("|  6   | Kabel OTG        | Rp. 45.000  |\n");
	printf("|  7   | Monitor          | Rp. 250.000 |\n");
	printf("|  8   | Printer          | Rp. 500.000 |\n");
	printf("|  9   | Kabel LAN        | Rp. 14.000  |\n");
	printf("|  10  | Case Hardisk     | Rp. 70.000  |\n");
	printf("|  11  | Memory Card      | Rp. 25.000  |\n");
	printf("|  12  | Hardisk          | Rp. 700.000 |\n");
	printf("|  13  | Mouse            | Rp. 100.000 |\n");
	printf("|  14  | Keyboard         | Rp. 135.000 |\n");
	printf("|  15  | LAN card         | Rp. 90.000  |\n");
	printf("+=======================================+\n");
	printf("masukkan kode barang :");


while (kar=='y'){

	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
		printf("barang yang anda pilih adalah : Kabel data\n");
	harga= 25000;
	printf("Harga Kabel data = %d\n ", harga);
}else if (kode==2){
	printf("barang yang anda pilih adalah : Power Bank\n");
		harga= 200000;
	printf("Harga Power Bank = %d\n ", harga);
}else if ( kode == 3){
	printf("barang yang anda pilih adalah : Power Suply\n");
		harga= 300000;
	printf("Harga Power Suply = %d ", harga);
}else if ( kode == 4){
	printf("barang yang anda pilih adalah : Notebook cooler\n");
	harga= 90000;
	printf("Harga Notebook cooler  = %d ", harga);
}else if ( kode == 5){
	printf("barang yang anda pilih adalah : Kabel HDMI \n");
	harga= 70000;
	printf("Harga Kabel HDMI = %d ", harga);
}else if ( kode == 6){
	printf("barang yang anda pilih adalah : Kabel OTG\n");
	harga= 45000;
	printf("Harga Kabel OTG = %d ", harga);
}else if ( kode == 7){
	printf("barang yang anda pilih adalah : Monitor\n");
	harga= 250000;
	printf("Harga Monitor = %d ", harga);
}else if ( kode == 8){
	printf("barang yang anda pilih adalah : Printer\n");
	harga= 500000;
	printf("Harga Printer = %d ", harga);
}else if ( kode == 9){
	printf("barang yang anda pilih adalah : Kabel LAN\n");
	harga= 14000;
	printf("Harga Kabel LAN = %d ", harga);
}else if ( kode == 10){
	printf("barang yang anda pilih adalah : Case Hardisk\n");
	harga= 70000;
	printf("Harga Case Hardisk = %d ", harga);
}else if ( kode == 11){
	printf("barang yang anda pilih adalah : Memory Card\n");
	harga= 25000;
	printf("Harga Memory Card = %d ", harga);
}else if ( kode == 12){
	printf("barang yang anda pilih adalah : Hardisk\n");
	harga= 700000;
	printf("Harga Hardisk = %d ", harga);
}else if ( kode == 13){
	printf("barang yang anda pilih adalah : Mouse\n");
	harga= 100000;
	printf("Harga Mouse = %d ", harga);
}else if ( kode == 14){
	printf("barang yang anda pilih adalah : Keyboard\n");
	harga= 135000;
	printf("Harga Keyboard = %d ", harga);
}else if ( kode == 15){
	printf("barang yang anda pilih adalah : LAN card\n");
	harga= 90000;
	printf("Harga LAN card = %d ", harga);
}else{
	printf("input salah!!!! ");
}
total_pembelian=total_pembelian+harga;
printf("\nMAU BELI BARANG LAGI?? [y/t]:");
scanf("%c", &kar);
i++;
}
printf("--------------------------------------------\n");
printf("total pembelian = %d\n ", total_pembelian);

}


