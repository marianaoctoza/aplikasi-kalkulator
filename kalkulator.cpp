#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int CC, SP, L, M, TK;
 float Minuman, Stat, Disc, FixMinuman, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar minuman beserta harganya ==="<<endl;
 cout<<"\t\t| Programing book    : Rp 170.000,00   |"<<endl;
 cout<<"\t\t| Handbook           : Rp 190.000,00   |"<<endl;
 cout<<"\t\t| Dictionary         : Rp  86.000,00   |"<<endl;
 cout<<"\t\t| Novel              : Rp  75.000,00  |"<<endl;
 cout<<"\t\t| Puisi              : Rp  50.000,00   |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Programing Book yang dibeli : "; cin>>CC;
 cout<<"Masukkan jumlah Handbook yang dibeli        : "; cin>>SP;
 cout<<"Masukkan jumlah Dictionary yang dibeli      : "; cin>>L;
 cout<<"Masukkan jumlah Novel yang dibeli           : "; cin>>M;
 cout<<"Masukkan jumlah Puisi yang dibeli           : "; cin>>TK;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<CC<<"\t\tPrograming Book         \t17000 \t\t"<<CC*170000<<"\t    |"<<endl;
 cout<<"\t|   "<<SP<<"\t\tHandbook   \t\t19000 \t\t"<<SP*190000<<"\t    |"<<endl;
 cout<<"\t|   "<<L<<"\t\tDictionary \t\t86000 \t\t"<<L*860000<<"\t    |"<<endl;
 cout<<"\t|   "<<M<<"\t\tNovel            \t750000 \t\t"<<M*7500000<<"\t    |"<<endl;
 cout<<"\t|   "<<TK<<"\t\tPuisi \t\t5000 \t\t"<<TK*50000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Minuman = CC*70000+SP*90000;
 Disc = 0.1*Minuman;
 Stat = L*80000+M*100000+TK*50000; 
 cout<<"\t|\t\t\tHarga Total Belanja \t: "<<Minuman<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Minuman-Disc<<"\t    |"<<endl;
 FixMinuman = Minuman-Disc;
 Disc = 0.1*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"            |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixMinuman+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
