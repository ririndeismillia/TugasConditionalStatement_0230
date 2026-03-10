#include <iostream>
using namespace std;

int main(){
    float dataBB,dataTB;
    string status;

    cout <<"Masukkan berat badan : ";
    cin >> dataBB;
    cout <<"Masukkan tinggi badan : ";
    cin >> dataTB;

    float bmi = dataBB/(dataTB*dataTB);
        if (bmi < 18.5)
            status ="Berat Badan Kurang";
        else if(bmi < 25)
            status ="Berat Badan Normal";
        else if(bmi < 30)
            status ="Berat Badan Kelebihan";
        else
            status ="Obesitas";
    
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" <<endl;


    cout << "\n---Hasil---"<<endl;
    cout << "BMI Anda = " <<bmi<<endl;

    cout << "Status = "<<status<<endl;

    return 0;

}
