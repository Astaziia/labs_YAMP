#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
using namespace std;

// Abstract base class
class Cylinder {
protected:
    double height;
public:
    Cylinder(double h) : height(h) {}
    virtual ~Cylinder() {}
    virtual double square() const = 0; // Area of the base
    double volume() const { return square() * height; }
};

// Circular cylinder
class RoundCylinder : public Cylinder {
    double radius;
public:
    RoundCylinder(double h, double r) : Cylinder(h), radius(r) {}
    double square() const override { return 3.14 * radius * radius; }
    double getRadius() const { return radius; }
};

// Triangular prism
class TrianglePrizm : public Cylinder {
    double a, b, c;
public:
    TrianglePrizm(double h, double a, double b, double c)
        : Cylinder(h), a(a), b(b), c(c) {}
    double square() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }
};

// Print object info
void printInfo(const Cylinder& c) {
    cout << "Base area: " << c.square() << "\n";
    cout << "Volume: " << c.volume() << "\n";
    cout << "------------------------\n";
}

// Using raw pointers
void arrays_of_pointers(int N) {
    vector<Cylinder*> arr;
    for (int i = 0; i < N; ++i) {
        if (rand() % 2)
            arr.push_back(new RoundCylinder(i + 5, rand() % 5 + 2));
        else
            arr.push_back(new TrianglePrizm(i + 5, rand() % 5 + 2, rand() % 5 + 2, rand() % 5 + 2));
    }

    for (auto p : arr) {
        printInfo(*p);
        delete p;
    }
}

// Using unique_ptr
void arrays_of_unique_ptrs(int N) {
    vector<unique_ptr<Cylinder>> arr;
    for (int i = 0; i < N; ++i) {
        if (rand() % 2)
            arr.push_back(make_unique<RoundCylinder>(i + 5, rand() % 5 + 2));
        else
            arr.push_back(make_unique<TrianglePrizm>(i + 5, rand() % 5 + 2, rand() % 5 + 2, rand() % 5 + 2));
    }

    for (auto& p : arr)
        printInfo(*p);
}

// Main function
int main() {
    srand(time(0));
    RoundCylinder c1(3, 4);
    TrianglePrizm c2(4, 3, 4, 5);

    printInfo(c1);
    printInfo(c2);

    cout << "Using raw pointers:\n";
    arrays_of_pointers(5);

    cout << "Using unique_ptr:\n";
    arrays_of_unique_ptrs(5);

    return 0;
}
