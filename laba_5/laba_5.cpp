#include <iostream>

//№1
double s(int a, int b, int c) {
    return (a + b + c) / 3;
}
double s(double a, double b, double c) {
    return (a + b + c) / 3;
}

/*int main()
{
    std::cout << s(2, 3, 10) << std::endl;

    std::cout << s(0.2, 0.53, 1.65) << std::endl << std::endl;

    return 0;
}*/


//2
template <typename T> 
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

/*int main()
{
    int a = 10, b = 20;
    std::cout << "Before: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After: a = " << a << ", b = " << b << std::endl << std::endl;

    return 0;
}*/


//3
template <typename T>
double s(T a, T b, T c) {
    return (a + b + c) / 3.0;
}

int main() {
    int a1 = 10, b1 = 20, c1 = 5;
    std::cout << "a = " << a1 << ", b = " << b1 << ", c = " << c1
              << " : s = " << s(a1, b1, c1) << std::endl;

    double a2 = 1.8796, b2 = 2.869775, c2 = 9.5647;
    std::cout << "a = " << a2 << ", b = " << b2 << ", c = " << c2
              << " : s = " << s(a2, b2, c2) << std::endl;

    return 0;
}


//5
void matrix(int n = 1, int m = 1, int a = 0) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "matrix():\n";
    matrix();

    std::cout << "\n matrix(5):\n";
    matrix(5);

    std::cout << "\n matrix(10, 10, 10):\n";
    matrix(10, 10, 10);

    return 0;
}


//4
void increase_array(int arr[], int size, int increment = 1) {
    for (int i = 0; i < size; ++i) {
        arr[i] += increment;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "original array: ";
    print(numbers, size);

    increase_array(numbers, size);
    std::cout << "Increased by 1: ";
    print(numbers, size);

    increase_array(numbers, size, 5);
    std::cout << "Increased by 5: "; 
    print(numbers, size);

    return 0;
}