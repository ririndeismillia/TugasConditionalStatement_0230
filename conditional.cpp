#include <iostream>
using namespace std;

int main(){
    float dataBB,dataTB;
    string status;

    cout <<"Masukkan berat badan : ";
    cin >> dataBB;
    cout <<"Masukkan tinggi badan ;";
    cin >> dataTB;

    float bmi = dataBB/(dataTB*dataTB);
    if (bmi < 18.5)
            status ="Berat Badan Kurang";
    else if(bmi < 25)
            status ="Berat Badan Normal";       


