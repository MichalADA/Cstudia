#include <iostream>
#include <string>


using namespace std;


class LegoNinjagoCharacter {
private:
    std::string kategoria;
    std::string nazwa;
    int obrona;
    int atak;
    int szybkosc;

public:
    LegoNinjagoCharacter(std::string charkategoria, std::string charnazwa, int charobrona, int charatak, int charszybkosc) {
        kategoria = charkategoria;
        nazwa = charnazwa;
        obrona = charobrona;
        atak = charatak;
        szybkosc = charszybkosc;
    };

    void printCharacter() {
        std::cout << "Kategoria: " << kategoria << std::endl;
        std::cout << "Nazwa: " << nazwa << std::endl;
        std::cout << "Obrona: " << obrona << std::endl;
        std::cout << "Atak: " << atak << std::endl;
        std::cout << "Szybkosc: " << szybkosc << std::endl;
    };
};

int main() {
    LegoNinjagoCharacter kategoria1("Ninja", "Kai", 80, 90, 70);
    LegoNinjagoCharacter kategoria2("Ninja", "Jay", 70, 80, 80);
    LegoNinjagoCharacter kategoria3("Armia-Szkieletow", "Samukai", 95, 85, 40);

    kategoria1.printCharacter();
    std::cout << std::endl;
    kategoria2.printCharacter();
    std::cout << std::endl;
    kategoria3.printCharacter();

    return 0;
};
