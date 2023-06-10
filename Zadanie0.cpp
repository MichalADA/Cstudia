#include <iostream>
#include <string>

using namespace std;


class Point {
private:
    std::string name;
    float x;
    float y;

public:
    Point(std::string pointName, float xVal, float yVal) {
        name = pointName;
        x = xVal;
        y = yVal;
    }

    void printPoint() {
        std::cout << "Name: " << name << ", x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point point1("Point1", 2.5, 3.7);
    point1.printPoint();

    return 0;
}
