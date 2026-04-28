#include <iostream>
#include <string>
using namespace std;

class belahKetupat;
class layanglayang {

private:
    double d1, d2;
    double sisi1, sisi2;

public:
    void inputData() {
        cout << "Input layang-layang\n";
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1: "; cin >> sisi1;
        cout << "Sisi 2: "; cin >> sisi2;
}

double hitungLuas() {  
    return 0.5 * d1 * d2;  
}  

 
friend void tampilkanKeliling(layanglayang, belahKetupat);

};

class belahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void inputData() {

    cout << "\nInput Belah Ketupat\n";
    cout << "Diagonal 1: "; cin >> d1;
    cout << "Diagonal 2: "; cin >> d2;
    cout << "Sisi: "; cin >> sisi;
}

double hitungLuas() {  
    return 0.5 * d1 * d2;  
}  

 
friend void tampilkanKeliling(layanglayang, belahKetupat);

};
    void tampilkanKeliling(layanglayang l, belahKetupat b)
{

    double kelilingLayang = 2 * (l.sisi1 + l.sisi2);
    double kelilingBelah = 4 * b.sisi;

        cout << "\n------------------ Keliling ------------------" << endl;  
        cout << "Keliling Layang-Layang : " << kelilingLayang << endl;  
        cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;

}

int main() {

layanglayang ObjectLayang;
belahKetupat ObjectBelah;

ObjectLayang.inputData();  
ObjectBelah.inputData();  

    cout << "\n--- Hasil luas ---" << endl;  
    cout << "Luas Layang-Layang     : " << ObjectLayang.hitungLuas() << endl;  
    cout << "Luas Belah Ketupat     : " << ObjectBelah.hitungLuas() << endl;  

 
    tampilkanKeliling(ObjectLayang, ObjectBelah);  

return 0;

}
