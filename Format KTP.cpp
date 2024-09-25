#include <iostream>
#include <string>

using namespace std;
// \t = buat ngetab
// \\ = \
// \" paok \" = buat kutipan " paok "

int main()
{
    //Deklarasi
    string nik, nama, tempat_tanggal, jenis_kelamin, gol_darah, alamat, rt_rw, kelurahan, kecamatan, agama, status, pekerjaan, kewarganegaraan;

    //input
    cout << "Masukkan NIK\t\t\t : ";
    getline(cin, nik);
    cout << "" << endl;

	cout << "Masukkan Nama\t\t\t : ";
    getline(cin, nama);
    cout << "" << endl;

    cout << "Masukkan Tempat Tanggal Lahir\t : ";
    getline (cin, tempat_tanggal);
    cout << "" << endl;

    cout << "Masukkan Jenis Kelamin\t\t : ";
    getline (cin, jenis_kelamin);
    cout << "" << endl;

    cout << "Masukkan Golongan Darah\t\t : ";
    getline (cin, gol_darah);
    cout << "" << endl;

    cout << "Masukkan Alamat\t\t\t : ";
    getline (cin, alamat);
    cout << "" << endl;

    cout << "Masukkan RT/RW\t\t\t : ";
    getline (cin, rt_rw);
    cout << "" << endl;

    cout << "Masukkan Kelurahan/Desa\t\t : ";
    getline (cin, kelurahan);
    cout << "" << endl;

    cout << "Masukkan Kecamatan\t\t : ";
    getline (cin, kecamatan);
    cout << "" << endl;

    cout << "Masukkan Agama\t\t\t : ";
    getline (cin, agama);
    cout << "" << endl;

    cout << "Masukkan Status Perkawinan\t : ";
    getline (cin, status);
    cout << "" << endl;
    
    cout << "Masukkan Pekerjaan\t\t : ";
    getline (cin, pekerjaan);
    cout << "" << endl;

    cout << "Masukkan Kewarganegaraan\t : ";
    getline (cin, kewarganegaraan);
    cout << "" << endl;

    //Proses & Output
    cout << "\t\t PROVINSI DKI JAKARTA" << endl;
    cout << "\t\t    JAKARTA BARAT" << endl; 
    cout << "" << endl;

    cout << "NIK \t\t\t: ";
    cout << nik;
    cout << "" << endl;

    cout << "Nama \t\t\t: ";
    cout << nama;
    cout << "" << endl;

    cout << "Tempat/Tgl Lahir \t: ";
    cout << tempat_tanggal;
    cout << "" << endl;

    cout << "Jenis Kelamin \t\t: ";
    cout << jenis_kelamin;
    cout << "\t\tGol.Darah : ";
    cout << gol_darah;
    cout << "" << endl;

    cout << "Alamat\t\t\t: ";
    cout << alamat;
    cout << "" << endl;

    cout << "\t RT/RW \t\t: ";
    cout << rt_rw;
    cout << "" << endl;

    cout << "\t Kel/Desa \t: ";
    cout << kelurahan;
    cout << "" << endl;

    cout << "\t Kecamatan \t: ";
    cout << kecamatan;
    cout << "" << endl;

    cout << "Agama \t\t\t: ";
    cout << agama;
    cout << "" << endl;

    cout << "Status Perkawinan\t: ";
    cout << status;
    cout << "" << endl;

    cout << "Pekerjaan \t\t: ";
    cout << pekerjaan;
    cout << "" << endl;

    cout << "Kewarganegaraan \t: ";
    cout << kewarganegaraan;
    cout << "" << endl;

    cout << "Berlaku Hingga \t\t: SEUMUR HIDUP ";

    ////Deklarasi
    //cout << "Menghitung Volume Tabung"<< endl;
    //float tinggi, jarijari, tot_volume;
    //float phi = 3.14;

    ////Input 
    //cout << "Masukkan tinggi : ";
    // >> tinggi;
    //cout << "" << endl;

    //cout << "Masukkan jari-jari : ";
    //cin >> jarijari;
    //cout << "" << endl;

    ////Proses
    //tot_volume = tinggi * jarijari * jarijari * phi;

    ////Output
    //cout << "Hasilnya adalah = ";
    //cout << tot_volume;
    //cout << " CM";
    return 0;
}

