#include <iostream>
using namespace std;

class angka{
private:
    int *arr;
    int panjang;
public:
    angka(int);
    ~angka();
    void cetakData();
    void isiData();
};
//Definisi member Function
angka::angka(int i){ //Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka(){ //Destruktor
    cout<<endl;
    cetakData();
    delete[]arr;
    cout<<"Alamat Array Sudah Dilepaskan"<<endl;
}

void angka::isiData(){
    for(int i=1;i<=panjang;i++){
        cout<<i<<" = ";cin>>arr[i];
    }
    cout<<endl;
}

int main(){
    angka belajarcpp(3); //Constructor Dipanggil
    angka *ptrBelajarcpp = new angka(5); //constructor Dipanggil
    delete ptrBelajarcpp; //Destructor dipanggil

    return 0;
}//Destructor Dpanggil

