#include <iostream>
using namespace std;

void penjumlahan(){ // fungsi penjumlahan
    int jumlah_angka,i;
    float n;
    float penjumlahan = 0;
    // operasi sum
    cout<<"Masukkan jumlah angka yang ingin ditambahkan: \n ";
    cin>>jumlah_angka;

    for (i=0; i<jumlah_angka; i++){
        cout<<"Masukkan angka ke-"<<(i+1)<<": \n";
        cin>>n;
        penjumlahan+=n;
    }
    cout<<"Hasil penjumlahan = "<< penjumlahan << "\n";
}

void pengurangan(){ // fungsi pengurangan
    float pengurangan,a,b;
    cout<<"Masukkan angka pertama = ";
    cin>>a;
    cout<<"Masukkan angka kedua = ";
    cin>>b;
    pengurangan = a - b;
    cout<< a << " - " << b << " = " << pengurangan << endl;
}

void perkalian(){ // fungsi perkalians 
    float perkalian,a,b;
    cout<<"Masukkan angka pertama = ";
    cin>>a;
    cout<<"Masukkan angka kedua = ";
    cin>>b;
    perkalian = a * b;
    cout<<a << " x " << b << " = " << perkalian << endl;
}

void pembagian(){ // fungsi pembagian
    float pembagian,a,b;
    cout<<"Masukkan angka pertama = ";
    cin>>a;
    cout<<"Masukkan angka kedua = ";
    cin>>b;
    pembagian = a / b;
    cout<<a << " : " << b << " = " << pembagian << endl;
}

void perpangkatan(){ // fungsi pangkat
    int i,a,b;
    int perpangkatan = 1;

    cout<<"Menghitung hasil a pangkat b " << endl;
    cout<<"Masukkan nilai a = \n";
    cin>>a;
    cout<<"Masukkan nilai b = \n";
    cin>>b;
    
    for (i=0; i<b; i++){
        perpangkatan = perpangkatan * a;
    }
    cout<<"Hasil "<< a << " pangkat " << b << " = " << perpangkatan << endl;
}

void integral(){ // fungsi integral tentu dari x^2 + x
    float bawah,atas,interval;
    cout<<"Masukkan batas bawah : " << endl;
    cin>> bawah;
    cout<<"Masukkan batas atas : " << endl;
    cin >> atas;
    cout<<"Masukkan interval : " << endl;
    cin >> interval;

    float total = 0;
    while (bawah < atas){ // Menghitung luas total bawah grafik
        total += ((((bawah*bawah) + bawah) + (((bawah + interval)*(bawah + interval)) + (bawah + interval))) / 2) * interval;
        bawah += interval;
        // x^2 + x
    }
    cout<<"integral dari x^2 + x dari adalah " << total << endl;
}
    void kalkulator(){ // fungsi kalkulator
    	int n;
	    cout<<" Operasi hitung : \n";
	    cout<<" 1 Pertambahan \n";
	    cout<<" 2 Pengurangan \n";
	    cout<<" 3 Perkalian \n";
	    cout<<" 4 Pembagian \n";
	    cout<<" 5 Pangkat \n";
	    cout<<" 6 Integral tentu (fungsi x^2 + x) \n";
	    cout<<" silahkan pilih operasi hitung: \n";
	    cin>> n;
	
	    if (n == 1) {
	        penjumlahan();
	    } else if (n==2){
	        pengurangan();
	    } else if (n==3){
	        perkalian();
	    } else if (n==4){
	        pembagian();
	    } else if (n==5){
	        perpangkatan();
	    } else if (n==6){
	        integral();
	    } else {
	        cout << "Masukkan tidak valid \n";
	    }
	}
int main(){
    int a;
    cout<<" ============================== \n\n";
    cout<<" ==   K A L K U L A T O R    == \n\n";
    cout<<" ============================== \n";
	kalkulator();
	cout<<" ====================================================== \n";
	cout<<" Apakah Anda ingin melakukan operasi  perhitungan lagi? \n";
	cout<<" 1. Ya \n";
	cout<<" 2. Tidak/Exit \n";
	cout<<" ====================================================== \n";	
	cout<<" pilih: ";
	cin >> a;
	if (a==1){
		kalkulator();
	} else if (a==2){
	cout<<" ================================================= \n";
	cout<<" ================ Anda Telah Keluar ============== \n";
	cout<<" ================================================= \n";
	}
    
    return 0;
}



