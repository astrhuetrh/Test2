#include <iostream>
#include <fstream>
#include <string>

void byteYazdirma(const std::string& dosyaYolu) {
    std::ifstream file(dosyaYolu, std::ios::binary);
    if (!file.is_open()) {
        std::cout << "Dosya acilamadi: " << dosyaYolu << std::endl;
        return;
    }

    char bytes[2];
    file.read(bytes, 2);
    file.close();

    std::cout << "Dosya adi: " << dosyaYolu;
    std::cout << "\nIlk 2 byte: ";
        for(int n=0;n<2;n++){
            std::cout << bytes[n];
    };
}

int main() {
    std::string dosya;
    std::cout << "Dosya yolu giriniz:";
    std::getline(std::cin,dosya);
    byteYazdirma(dosya);
    return 0;
}
