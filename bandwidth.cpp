#include <iostream>
#include <cstdlib>  // buat rand()
#include <ctime>    // buat time()
using namespace std;

int main() {
    srand(time(0)); // Seed random pake waktu
    
    cout << "=== BANDWIDTH MONITOR TKJ ===" << endl;
    cout << "Jam | Download (MB) | Upload (MB) | Grafik" << endl;
    cout << "-------------------------------------------" << endl;
    
    int totalDownload = 0;
    int totalUpload = 0;
    
    // Loop 24 jam
    for(int jam = 0; jam < 24; jam++) {
        // Generate random bandwidth (10-500 MB)
        int download = 10 + (rand() % 490);
        int upload = 5 + (rand() % 100);
        
        totalDownload += download;
        totalUpload += upload;
        
        // Tampilkan grafik sederhana
        string grafikDownload = "";
        int barDownload = download / 20; // 1 karakter = 20 MB
        for(int i = 0; i < barDownload; i++) {
            grafikDownload += "#";
        }
        
        // Format output
        printf("%2d  | %11d | %10d | %s\n", 
               jam, download, upload, grafikDownload.c_str());
    }
    
    cout << "-------------------------------------------" << endl;
    cout << "TOTAL  | " << totalDownload << " MB | " 
         << totalUpload << " MB |" << endl;
    cout << "===========================================" << endl;
    
    // Analisis sederhana
    if(totalDownload > 10000) {
        cout << "WARNING! Bandwidth overload, perlu upgrade paket!" << endl;
    } else {
        cout << "Pemakaian normal, jaringan sehat :)" << endl;
    }
    
    return 0;
}