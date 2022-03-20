#include <iostream>

using namespace std;

void cetakSeluruhIsiArray(int arrayInput[], int arrayLength) {
  for (int i = 0; i < arrayLength; i++) {
    cout << arrayInput[i] << " ";
  }
}

void exchangeSort(int arrayInput[], int arrayLength) {
  int stepCounter = 0;
  int swapCounter = 0;
  int temp = 0;
  for (int i = 0; i < arrayLength; i++) {
    for (int j = i + 1; j < arrayLength; j++) {
      if (arrayInput[i] > arrayInput[j]) {
        temp = arrayInput[i];
        arrayInput[i] = arrayInput[j];
        arrayInput[j]=temp;
        swapCounter++;
      }

      stepCounter++;
    }
  }

  cout << "[Exchange Sort] Jumlah langkah yang dilakukan untuk mengurutkan " ;
  cout << arrayLength << " elemen array adalah: " << stepCounter << endl;
  cout << "Jumlah swap yang dilakukan: "<< swapCounter << endl;
  cout << " "<<endl;
}

int main(){
  int ukuranArr,cari,y;
  int hitung=0;
  int lokasi=0;
  int lokasiData[10000];
  int iterasiBinary=0;
  cout << "Masukkan Besar Array : ";
  cin >>ukuranArr;
  cout << " "<<endl;
  int arrayInput[ukuranArr];
  for (int i=0; i<ukuranArr;i++){
    cout<<" Data Array Indeks Ke : ["<<i<<"] : ";
    cin>> arrayInput[i];
  }
  cout << "Data Yang Ingin Dicari : ";
  cin >> cari;
  cout << " "<<endl;
  system("pause");
  system("cls");
  cout << "Mencari menggunakan metode pencarian sekuensial"<<endl;

  for(int i=0; i < ukuranArr; i++) {
        if(arrayInput[i] == cari) {
        hitung++;
        lokasi=i;
        lokasiData[y]=lokasi;
        y++;
        }
    }
  if(hitung>=1){
    cout << "Data yang bernilai "<<cari<<" ketemu, sebanyak " << hitung << endl;
    cout << "Data yang bernilai "<<cari<<" terdapat pada indeks ke " <<endl;
    for(int z=0; z < hitung; z++){
        cout<<lokasiData[z];
        if(z<hitung-1){
        cout << ", ";
        }
    }
    cout << " "<<endl;

  }
  else {
    cout << "tidak ketemu" << endl;
  }
  system("pause");
  cout << " "<<endl;
  cout << " "<<endl;
  cout << "Mencari menggunakan metode pencarian binary"<<endl;
  exchangeSort(arrayInput,ukuranArr);
  cout << "Array yang telah disorting "<<endl;
  cetakSeluruhIsiArray(arrayInput,ukuranArr);
  cout << " "<<endl;
  int kiri, kanan, median;
  kiri = 0;
  kanan = ukuranArr-1;
  int flag = 0;
  while(kiri <= kanan && flag == 0) {
    median = (kiri+kanan)/2;
    cout << "Indeks tengah : " << median << endl;
    if (arrayInput[median] == cari) {
        flag = 1;
    }
    else if (cari < arrayInput[median]) {
        cout << "cari di kiri" << endl;
        kanan = median-1; }
    else { cout << "cari di kanan" << endl;
    kiri = median+1; }
    }
    if(flag == 1){
        cout << "Elemen "<<cari<<" pertama kali ketemu di indeks ke "<< median << endl;
    }
    else cout << "Tidak ketemu" << endl;

return 0;
}
