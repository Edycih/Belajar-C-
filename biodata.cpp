#include <iostream>
#include <string>
#include <chrono>
using namespace std;
void log(int result){
    cout<<"umur anda adalah "<<result<<endl;
}
int main(){
    int tahun_lahir;
    auto date = chrono::system_clock::now();
    string tahun_sekarang = format("{:%Y}",date);
    int now = stoi(tahun_sekarang);
    cout<<now;
}