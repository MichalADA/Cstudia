#include <iostream>
#include <cmath>

const double PI = 3.14159265;

// Klasa bazowa Punkt
class Punkt {
public:
    Punkt(double x = 0.0, double y = 0.0) : x_(x), y_(y) {}

    void ustalXY(double x, double y) {
        x_ = x;
        y_ = y;
    }

    void czytajXY() const {
        std::cout << "X: " << x_ << ", Y: " << y_ << std::endl;
    }

private:
    double x_, y_;
};

// Klasa bazowa Figura
class Figura {
public:
    virtual double obliczPole() const = 0; // czysta funkcja wirtualna
};

// Klasa potomna - Kolo
class Kolo : public Figura, public Punkt {
public:
    Kolo(double promien, double x = 0.0, double y = 0.0)
        : Punkt(x, y), promien_(promien) {}

    double obliczPole() const override {
        return PI * promien_ * promien_;
    }

private:
    double promien_;
};

// Klasa potomna - Kwadrat
class Kwadrat : public Figura, public Punkt {
public:
    Kwadrat(double bok, double x = 0.0, double y = 0.0)
        : Punkt(x, y), bok_(bok) {}

    double obliczPole() const override {
        return bok_ * bok_;
    }

private:
    double bok_;
};

// Klasa potomna - Prostokat
class Prostokat : public Figura, public Punkt {
public:
    Prostokat(double dlugosc, double szerokosc, double x = 0.0, double y = 0.0)
        : Punkt(x, y), dlugosc_(dlugosc), szerokosc_(szerokosc) {}

    double obliczPole() const override {
        return dlugosc_ * szerokosc_;
    }

private:
    double dlugosc_, szerokosc_;
};

// Funkcja policz
void policz(const Figura& figura) {
    std::cout << "Pole figury: " << figura.obliczPole() << std::endl;
}

int main() {
    Kolo k(5.0, 1.0, 2.0);
    Kwadrat kw(4.0, 3.0, 4.0);
    Prostokat pr(3.0, 6.0, 5.0, 6.0);

    k.czytajXY();
    policz(k);
    kw.czytajXY();
    policz(kw);
    pr.czytajXY();
    policz(pr);

    return 0;
}
