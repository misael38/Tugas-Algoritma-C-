#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b, c, d, d1, d2, l, p, r, s, t, ta;
   	float pilih, pilihalas, pilihk, pilihluas, pilihv;
 	float hasil;
   
   	cout << "Kelompok 1 Algoritma dan Pemrograman (Math)\n";
    cout << "           Anggota Kelompok :\n";
    cout << "          1. Eufrasia Mokili\n";
    cout << "          2. Marvil Lawa\n";
    cout << "          3. Militya Sambali\n";
    cout << "          4. Misael Telleng\n";
    cout << "          5. Rachel Manopo\n";
    cout << "\n";
    cout << "     Ingin Menghitung Apa Hari Ini?\n";
   	cout << "          1. Luas Bangun Datar\n";
	cout << "        2. Keliling Bangun Datar\n";
	cout << "         3. Volume Bangun Ruang\n";
	cout << "\nMasukkan Nomor Pilihan (1-3): ";
	cin >> pilih;
	
		if (pilih == 1){
            cout << "\nSilahkan Pilih Nomor Bangun Datar Yang Ingin Dihitung Luasnya\n";
   	        cout << "1. Persegi\n";
	        cout << "2. Persegi Panjang\n";
	        cout << "3. Segitiga\n";
            cout << "4. Lingkaran\n";
            cout << "5. Jajar Genjang\n";
            cout << "6. Trapesium\n";
            cout << "7. Belah Ketupat\n";
            cout << "8. Layang - Layang\n";
	        cout << "Masukkan Nomor Pilihan (1-8): ";
	        cin >> pilihluas;

            if (pilihluas == 1){
                cout << "\nRumus Luas Persegi\n";
		        cout << "L = s * s\n";
		        cout << "Masukan Panjang Sisi (cm) : ";
		        cin >> s;
		        hasil = s*s;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 2){
                cout << "\nRumus Luas Persegi Panjang\n";
		        cout << "L = p * l\n";
		        cout << "Masukan Panjang (cm) : ";
		        cin >> p;
		        cout << "Masukan Lebar (cm) : ";
		        cin >> l;
		        hasil = p*l;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 3){
                cout << "\nRumus Luas Segitiga\n";
		        cout << "L = 1/2 * a * t\n";
		        cout << "Masukan Alas (cm) : ";
		        cin >> a;
		        cout << "Masukan Tinggi (cm) : ";
		        cin >> t;
		        hasil = a*t/2;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 4){
                cout << "\nRumus Luas Lingkaran\n";
		        cout << "L = pi * r * r\n";
		        cout << "Masukan jari-jari (cm) : ";
		        cin >> r;
		        hasil = 3.14*r*r;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 5){
                cout << "\nRumus Luas Jajar Genjang\n";
		        cout << "L = 1/2 * a * t\n";
		        cout << "Masukan Alas (cm) : ";
		        cin >> a;
		        cout << "Masukan Tinggi (cm) : ";
		        cin >> t;
		        hasil = a*t/2;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 6){
                cout << "\nRumus Luas Trapesium\n";
		        cout << "L = 1/2 * (a + b) * t\n";
		        cout << "Masukan Panjang Sisi a (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> b;
		        cout << "Masukan Tinggi (cm) : ";
		        cin >> t;
		        hasil = (a+b)*t/2;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 7){
                cout << "\nRumus Luas Belah Ketupat\n";
		        cout << "L = 1/2 * d1 * d2\n";
		        cout << "Masukan Panjang Sisi d1 (cm) : ";
		        cin >> d1;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> d2;
		        hasil = d1*d2/2;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
            if (pilihluas == 8){
                cout << "\nRumus Luas Layang - Layang\n";
		        cout << "L = 1/2 * d1 * d2\n";
		        cout << "Masukan Panjang Sisi d1 (cm) : ";
		        cin >> d1;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> d2;
		        hasil = d1*d2/2;
		        cout << "Luas = "; cout << hasil; cout << " cm^2\n";
            }
        }
        if (pilih == 2){
            cout << "\nSilahkan Pilih Nomor Bangun Datar Yang Ingin Dihitung Kelilingnya\n";
   	        cout << "1. Persegi\n";
	        cout << "2. Persegi Panjang\n";
	        cout << "3. Segitiga\n";
            cout << "4. Lingkaran\n";
            cout << "5. Jajar Genjang\n";
            cout << "6. Trapesium\n";
            cout << "7. Belah Ketupat\n";
            cout << "8. Layang - Layang\n";
	        cout << "Masukkan Nomor Pilihan (1-8): ";
	        cin >> pilihk;

            if (pilihk == 1){
                cout << "Rumus Keliling Persegi\n";
		        cout << "K = 4 * s\n";
		        cout << "Masukan Panjang Sisi (cm) : ";
		        cin >> s;
		        hasil = 4*s;
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 2){
                cout << "Rumus Keliling Persegi Panjang\n";
		        cout << "K = 2 * (p + l)\n";
		        cout << "Masukan Panjang (cm) : ";
		        cin >> p;
		        cout << "Masukan Lebar (cm) : ";
		        cin >> l;
		        hasil = 2*(p+l);
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 3){
                cout << "Rumus Keliling Segitiga\n";
		        cout << "K = a + b + c\n";
		        cout << "Masukan Sisi a (cm) : ";
		        cin >> a;
		        cout << "Masukan Sisi b (cm) : ";
		        cin >> b;
		        cout << "Masukan Sisi c (cm) : ";
		        cin >> c;
		        hasil = (a+b+c);
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 4){
                cout << "Rumus Keliling Lingkaran\n";
		        cout << "K = pi * 2 * r\n";
		        cout << "Masukan jari-jari (cm) : ";
		        cin >> r;
		        hasil = 3.14*2*r;
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 5){
                cout<<"Rumus Keliling Jajar Genjang\n";
		        cout << "K = 2 * (a + b)\n";
		        cout << "Masukan Panjang Sisi a (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang Sisi b : ";
		        cin >> b;
		        hasil = 2*(a+b);
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 6){
                cout<<"Rumus Keliling Trapesium\n";
		        cout << "K = a + b + c + d\n";
		        cout << "Masukan Panjang Sisi a (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> b;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> c;
		        cout << "Masukan Panjang Sisi b (cm) : ";
		        cin >> d;
		        hasil = (a+b+c+d);
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 7){
                cout<<"Rumus Keliling Belah Ketupat\n";
		        cout << "K = 4 * s\n";
		        cout << "Masukan Panjang Sisi (cm) : ";
		        cin >> s;
		        hasil = 4*s;
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
            if (pilihk == 8){
                cout<<"Rumus Keliling Layang - Layang\n";
		        cout << "K = 2 * (a + b)\n";
		        cout << "Masukan Panjang Sisi a (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang Sisi b : ";
		        cin >> b;
		        hasil = 2*(a+b);
		        cout << "Keliling = "; cout << hasil; cout << " cm\n";
            }
        }
        if (pilih == 3){
            cout << "Silahkan Pilih Nomor Bangun Ruang Yang Ingin Dihitung Volumenya\n";
   	        cout << "1. Kubus\n";
	        cout << "2. Balok\n";
	        cout << "3. Prisma Segitiga\n";
            cout << "4. Limas Segitiga\n";
            cout << "5. Limas Segiempat\n";
            cout << "6. Tabung\n";
            cout << "7. Kerucut\n";
            cout << "8. Bola\n";
	        cout << "Masukkan Nomor Pilihan (1-8): ";
	        cin >> pilihv;

            if (pilihv == 1){
                cout << "Rumus Volume Kubus\n";
		        cout << "V = s * s * s\n";
		        cout << "Masukan Panjang Sisi (cm) : ";
		        cin >> s;
		        hasil = s*s*s;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 2){
                cout << "Rumus Volume Balok\n";
		        cout << "V = p * l * t\n";
		        cout << "Masukan Panjang (cm) : ";
		        cin >> p;
		        cout << "Masukan Lebar (cm) : ";
		        cin >> l;
		        cout << "Masukan Tinggi (cm) : ";
		        cin >> t;
		        hasil = p*l*t;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 3){
                cout << "Rumus Volume Prisma Segitiga\n";
		        cout << "V = 1/2 * a * ta * t\n";
		        cout << "Masukan Panjang alas Segitiga (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang tinggi Segitiga (cm) : ";
		        cin >> ta;
		        cout << "Masukan Tinggi Prisma (cm) : ";
		        cin >> t;
		        hasil = a*ta*t/2;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 4){
                cout << "Rumus Volume Limas Segitiga\n";
		        cout << "K = 1/3 * 1/2 * a * ta * t\n";
		        cout << "Masukan Panjang alas Segitiga (cm) : ";
		        cin >> a;
		        cout << "Masukan Panjang tinggi Segitiga (cm) : ";
		        cin >> ta;
		        cout << "Masukan Tinggi Limas (cm) : ";
		        cin >> t;
		        hasil = a*(ta/2)*t/3;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 5){
                cout << "Silahkan Pilih Nomor Alas Limas Segi Empat Yang Ingin Dihitung Volumenya\n";
   	            cout << "1. Alas Persegi\n";
	            cout << "2. Alas Persegi Panjang\n";
                cout << "Pilihan Nomor : ";
	            cin >> pilihalas;
                if(pilihalas == 1){
                    cout << "Rumus Volume Limas Segi Empat dengan Alas Persegi\n";
		            cout << "V = 1/3 * s * s * t\n";
		            cout << "Masukan Panjang Sisi Persegi (cm) : ";
		            cin >> s;
		            cout << "Masukan Tinggi Limas Segi Empat (cm) : ";
		            cin >> t;
		            hasil = s*s*t/3;
		            cout << "Volume = "; cout << hasil; cout << " cm^3\n";
                }
                if(pilihalas == 2){
                    cout << "Rumus Volume Limas Segi Empat dengan Alas Persegi Panjang\n";
		            cout << "V = 1/3 * p * l * t\n";
		            cout << "Masukan Panjang Sisi Persegi Penjang (cm) : ";
		            cin >> p;
		            cout << "Masukan Lebar Sisi Persegi Panjang (cm) : ";
		            cin >> l;
		            cout << "Masukan Tinggi Limas Segi Empat (cm) : ";
		            cin >> t;
		            hasil = p*l*t/3;
		            cout << "Volume = "; cout << hasil; cout << " cm^3\n";
                }
            }
            if (pilihv == 6){
                cout<<"Rumus Volume Tabung\n";
		        cout << "V = pi * r * r * t\n";
		        cout << "Masukan jari-jari alas (cm) : ";
		        cin >> r;
		        cout << "Masukan Tinggi Tabung (cm) : ";
		        cin >> t;
		        hasil = 3.14*r*r*t;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 7){
                cout<<"Rumus Volume Kerucut\n";
		        cout << "V = 1/3 * pi * r * r * t\n";
		        cout << "Masukan jari-jari alas (cm) : ";
		        cin >> r;
		        cout << "Masukan Tinggi Kerucut (cm) : ";
		        cin >> t;
		        hasil = 3.14*r*r*t/3;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
            if (pilihv == 8){
                cout<<"Rumus Volume Bola\n";
		        cout << "V = 4/3 * pi * r * r * r\n";
		        cout << "Masukan jari-jari bola (cm) : ";
		        cin >> r;
		        hasil = 3.14*4*r*r*r/3;
		        cout << "Volume = "; cout << hasil; cout << " cm^3\n";
            }
        }
		
		return 0;
}
