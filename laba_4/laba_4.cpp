#include <iostream>
#include <string>

class Plant {
private:
    std::string Name;
    int day, month, year;
    int year_n;
public:
    Plant() : Name(" "), day(0), month(0), year(0), year_n(0) {}
    Plant (std::string Name, int day, int month, int year, int year_n) : 
        Name(Name), day(day), month(month), year(year), year_n(year_n) {}
    ~Plant() {
        std::cout << "Plant: " << Name << " (" << day << "." << month << "." << year << ")" << " is deleted." << std::endl;
    }

    // set method
    void set_Name(std::string new_Name) {
        Name = new_Name;
    }
    void set_day(int new_day) {
        day = new_day;
    }
    void set_month(int new_month) {
        month = new_month;
    }
    void set_year(int new_year) {
        year = new_year;
    }

    //get method
    std::string get_Name() const {
        return Name;
    }
    int get_day() const {
        return day;
    }
    int get_month() const {
        return month;
    }
    int get_year() const {
        return year;
    }
    
    int age() const{
        int age = year_n - year;
        return age;
    }

    virtual void print() const {
        std::cout << "Plant: " << Name << " (" << day << "." << month << "." << year << ")" << " is " << age() << " years " << std::endl;
    }

};

class Tree: public Plant {
private:
    int height;
public:
    Tree(std::string Name, int day, int month, int year, int year_n, int height): Plant(Name, day, month, year, year_n), height(height) {}
    ~Tree() {}

    void set_height(int new_h) {
        height = new_h;
    }
    int get_height() const {
        return height;
    }
    void print() const override {
        Plant::print();
        std::cout << "The height " << "is" << " " << height << " " << "meter." << std::endl;
    }
};

int main(){

    Plant p1("Lavender", 25, 2, 2023, 2025);
    p1.print();
    Tree t1("Oak", 30, 10, 2000, 2025, 25);
    t1.print();

    return 0;

}