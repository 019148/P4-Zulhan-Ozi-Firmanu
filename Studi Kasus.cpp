#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

void jualan()
{
	
	cout<<"+---------------------------------------+"<<endl;
	cout<<"| Kode | Nama Barang      | Harga       |"<<endl;
	cout<<"+---------------------------------------+"<<endl;
	cout<<"|  1   | Kabel data       | Rp. 25.000  |"<<endl;
	cout<<"|  2   | Power bank       | Rp. 200.00  |"<<endl;
	cout<<"|  3   | Power Suply      | Rp. 300.000 |"<<endl;
	cout<<"|  4   | Notebook cooler  | Rp. 90.000  |"<<endl;
	cout<<"|  5   | Kabel HDMI       | Rp. 70.000  |"<<endl;
	cout<<"|  6   | Kabel OTG        | Rp. 45.00   |"<<endl;
	cout<<"|  7   | Monitor          | Rp. 250.000 |"<<endl;
	cout<<"|  8   | Printer          | Rp. 500.000 |"<<endl;
	cout<<"|  9   | Kabel LAN        | Rp. 14.000  |"<<endl;
	cout<<"|  10  | Case Hardisk     | Rp. 70.000  |"<<endl;
	cout<<"|  11  | Memory Card      | Rp. 25.000  |"<<endl;
	cout<<"|  12  | Hardisk          | Rp. 700.000 |"<<endl;
	cout<<"|  13  | Mouse            | Rp. 100.000 |"<<endl;
	cout<<"|  14  | Keyboard         | Rp. 135.000 |"<<endl;
	cout<<"|  15  | LAN card         | Rp. 90.000  |"<<endl;
	cout<<"+---------------------------------------+"<<endl;
}
main ()
{
	back:
	jualan();
	int harga1, harga2; 
	int total_pembelian;
	int kode1, kode2;
	char kar;
	
	cout<<"Masukkan kode barang : ";
	cin>>kode1;


		if (kode1==1)
	{
		harga1=25000;
		cout<<"Harga Kabel Data : Rp."<<harga1<<endl;
	}
	if (kode1==2)
	{
		harga1=200000;
		cout<<"Harga Power Bank : Rp."<<harga1<<endl;
	}
	if (kode1==3)
	{
		harga1=300000;
		cout<<"Harga Power Suply : Rp."<<harga1<<endl;
	}
	if (kode1==4)
	{
		harga1=90000;
		cout<<"Harga Notebook Cooler : Rp."<<harga1<<endl;
	}
	if (kode1==5)
	{
		harga1=70000;
		cout<<"Harga Kabel HDMI : Rp."<<harga1<<endl;
	}
	if (kode1==6)
	{
		harga1=45000;
		cout<<"Harga Kabel OTG : Rp."<<harga1<<endl;
	}
	if (kode1==7)
	{
		harga1=250000;
		cout<<"Harga Monitor : Rp."<<harga1<<endl;
	}
	if (kode1==8)
	{
		harga1=500000;
		cout<<"Harga Printer : Rp."<<harga1<<endl;
	}
	if (kode1==9)
	{
		harga1=14000;
		cout<<"Harga Kabel LAN : Rp."<<harga1<<endl;
	}
	if (kode1==10)
	{
		harga1=70000;
		cout<<"Harga Case Hardisk : Rp."<<harga1<<endl;
	}
	if (kode1==11)
	{
		harga1=25000;
		cout<<"Harga Memory Card : Rp."<<harga1<<endl;
	}
	if (kode1==12)
	{
		harga1=700000;
		cout<<"Harga Hardisk : Rp."<<harga1<<endl;
	}
	if (kode1==13)
	{
		harga1=100000;
		cout<<"Harga Mouse : Rp."<<harga1<<endl;
	}
	if (kode1==14)
	{
		harga1=135000;
		cout<<"Harga Keyboard : Rp."<<harga1<<endl;
	}
	if (kode1==15)
	{
		harga1=90000;
		cout<<"Harga LAN card : Rp."<<harga1<<endl;
	}
	cout<<"Lanjutkan belanja [y/t] :";
	cin>>kar;
	if (kar=='y'){
		goto lagi;
	} 
	else 
	
	if(kar=='t'){
	} 
	lagi:
	cout<<"Masukkan kode barang :";
		cin>>kode2;
			if (kode2==1)
	{
		harga2=25000;
		cout<<"Harga Kabel Data : Rp."<<harga1<<endl;
	}
	if (kode2==2)
	{
		harga2=200000;
		cout<<"Harga Power Bank : Rp."<<harga1<<endl;
	}
	if (kode2==3)
	{
		harga2=300000;
		cout<<"Harga Power Suply : Rp."<<harga1<<endl;
	}
	if (kode2==4)
	{
		harga2=90000;
		cout<<"Harga Notebook Cooler : Rp."<<harga1<<endl;
	}
	if (kode2==5)
	{
		harga2=70000;
		cout<<"Harga Kabel HDMI : Rp."<<harga1<<endl;
	}
	if (kode2==6)
	{
		harga2=45000;
		cout<<"Harga Kabel OTG : Rp."<<harga1<<endl;
	}
	if (kode2==7)
	{
		harga2=250000;
		cout<<"Harga Monitor : Rp."<<harga1<<endl;
	}
	if (kode2==8)
	{
		harga2=500000;
		cout<<"Harga Printer : Rp."<<harga1<<endl;
	}
	if (kode2==9)
	{
		harga2=14000;
		cout<<"Harga Kabel LAN : Rp."<<harga1<<endl;
	}
	if (kode2==10)
	{
		harga2=70000;
		cout<<"Harga Case Hardisk : Rp."<<harga1<<endl;
	}
	if (kode2==11)
	{
		harga2=25000;
		cout<<"Harga Memory Card : Rp."<<harga1<<endl;
	}
	if (kode2==12)
	{
		harga2=700000;
		cout<<"Harga Hardisk : Rp."<<harga1<<endl;
	}
	if (kode2==13)
	{
		harga2=100000;
		cout<<"Harga Mouse : Rp."<<harga1<<endl;
	}
	if (kode2==14)
	{
		harga2=135000;
		cout<<"Harga Keyboard : Rp."<<harga1<<endl;
	}
	if (kode2==15)
	{
		harga2=90000;
		cout<<"Harga LAN card : Rp."<<harga1<<endl;
	}

	total_pembelian=harga1+harga2;
	cout<<"Total pembelian :"<<total_pembelian;
	cin>>total_pembelian;
	
	cout<<"===Terima Kasih==="<<endl;
	
	return 0;
}
