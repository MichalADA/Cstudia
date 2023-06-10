#include <iostream>
#include <string>
#include <cmath>

const double PI = 3.14159265;

class Punkt {
public:
    Punkt(const std::string& nazwa = "", int x = 0, int y = 0)
        : nazwa_(nazwa), x_(x), y_(y) {}

    void Pokaz() const {
        std::cout << "Punkt: " << nazwa_ << " (" << x_ << ", " << y_ << ")\n";
    }

    std::string nazwa() const { return nazwa_; }

private:
    std::string nazwa_;
    int x_, y_;
};

class Prostokat : public Punkt {
public:
    Prostokat(const std::string& nazwa = "", int x = 0, int y = 0, int szer = 0, int wys = 0)
        : Punkt(nazwa, x, y), szer_(szer), wys_(wys) {}

    int szer() const { return szer_; }
    int wys() const { return wys_; }

private:
    int szer_, wys_;
};

class Kolo : public Punkt {
public:
    Kolo(const std::string& nazwa = "", int x = 0, int y = 0, int promien = 0)
        : Punkt(nazwa, x, y), promien_(promien) {}

    double pole() const { return PI * promien_ * promien_; }
    double obwod() const { return 2 * PI * promien_; }

    void Pokaz() const {
        Punkt::Pokaz();
        std::cout << "Kolo: " << nazwa() << ", promien: " << promien_ << "\n";
    }

private:
    int promien_;
};

int main() {
    Punkt p("punkt1", 1, 2);
    p.Pokaz();

    Prostokat prost("prostokat1", 3, 4, 5, 6);

    Kolo k("kolo1", 7, 8, 9);
    k.Pokaz();
    std::cout << "Pole kola: " << k.pole() << ", obwod kola: " << k.obwod() << "\n";

    return 0;
}
