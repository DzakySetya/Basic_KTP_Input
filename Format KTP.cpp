/* Dzaky Setya Nugraha 
2407421047
TMJ 1B */

#include <iostream>
#include <string>
#include <cctype> //buat toupper()
#include <algorithm> //buat transform

using namespace std;
int main(){

    //Deklarasi
    string provinsi,kota, nik, nama, tempat_tanggal, jenis_kelamin, gol_darah, alamat, rt_rw, kelurahan, kecamatan, agama, status, pekerjaan, kewarganegaraan;

    //input
    cout << "Masukkan Provinsi\t\t : ";
    getline(cin, provinsi);
    cout << "" << endl;

    cout << "Masukkan Kota\t\t\t : ";
    getline(cin, kota);
    cout << "" << endl;

    cout << "Masukkan NIK\t\t\t : ";
    getline(cin, nik);
    cout << "" << endl;

    cout << "Masukkan Nama\t\t\t : ";
    getline(cin, nama);
    cout << "" << endl;

    cout << "Masukkan Tempat Tanggal Lahir\t : ";
    getline(cin, tempat_tanggal);
    cout << "" << endl;

    cout << "Masukkan Jenis Kelamin\t\t : ";
    getline(cin, jenis_kelamin);
    cout << "" << endl;

    cout << "Masukkan Golongan Darah\t\t : ";
    getline(cin, gol_darah);
    cout << "" << endl;

    cout << "Masukkan Alamat\t\t\t : ";
    getline(cin, alamat);
    cout << "" << endl;

    cout << "Masukkan RT/RW\t\t\t : ";
    getline(cin, rt_rw);
    cout << "" << endl;

    cout << "Masukkan Kelurahan/Desa\t\t : ";
    getline(cin, kelurahan);
    cout << "" << endl;

    cout << "Masukkan Kecamatan\t\t : ";
    getline(cin, kecamatan);
    cout << "" << endl;

    cout << "Masukkan Agama\t\t\t : ";
    getline(cin, agama);
    cout << "" << endl;

    cout << "Masukkan Status Perkawinan\t : ";
    getline(cin, status);
    cout << "" << endl;

    cout << "Masukkan Pekerjaan\t\t : ";
    getline(cin, pekerjaan);
    cout << "" << endl;

    cout << "Masukkan Kewarganegaraan\t : ";
    getline(cin, kewarganegaraan);
    cout << "" << endl;

    //Proses & Output
    
    //Memperbesar String
    transform(provinsi.begin(), provinsi.end(), provinsi.begin(), ::toupper); 
    transform(kota.begin(), kota.end(), kota.begin(), ::toupper); 
    transform(nama.begin(), nama.end(), nama.begin(), ::toupper);
    transform(tempat_tanggal.begin(), tempat_tanggal.end(), tempat_tanggal.begin(), ::toupper);
    transform(jenis_kelamin.begin(), jenis_kelamin.end(), jenis_kelamin.begin(), ::toupper);
    transform(gol_darah.begin(), gol_darah.end(), gol_darah.begin(), ::toupper);
    transform(alamat.begin(), alamat.end(), alamat.begin(), ::toupper);
    transform(kelurahan.begin(), kelurahan.end(), kelurahan.begin(), ::toupper);
    transform(kecamatan.begin(), kecamatan.end(), kecamatan.begin(), ::toupper);
    transform(agama.begin(), agama.end(), agama.begin(), ::toupper);
    transform(status.begin(), status.end(), status.begin(), ::toupper);
    transform(pekerjaan.begin(), pekerjaan.end(), pekerjaan.begin(), ::toupper);
    transform(kewarganegaraan.begin(), kewarganegaraan.end(), kewarganegaraan.begin(), ::toupper);
    
    cout << "\t\t PROVINSI ";
    cout << provinsi << endl;
    cout << "\t\t    KOTA ";
    cout << kota;
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
    return 0;
}

