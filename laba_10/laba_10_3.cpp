#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

class Plant {
protected:
    std::string Name;
    int day, month, year;
    int year_n;
public:
    Plant() : Name(" "), day(0), month(0), year(0), year_n(0) {}

    Plant(std::string Name, int day, int month, int year, int year_n) {
        if (day <= 0 || day > 31 || month <= 0 || month > 12 || year > year_n) {
            throw std::invalid_argument("Invalid date or year parameters.");
        }
        this->Name = Name;
        this->day = day;
        this->month = month;
        this->year = year;
        this->year_n = year_n;
    }

    virtual ~Plant() {
        std::cout << "Plant: " << Name << " (" << day << "." << month << "." << year << ") is deleted." << std::endl;
    }

    // Set methods with validation
    void set_Name(std::string new_Name) {
        if (new_Name.empty()) throw std::invalid_argument("Name cannot be empty.");
        Name = new_Name;
    }

    void set_day(int new_day) {
        if (new_day <= 0 || new_day > 31) throw std::invalid_argument("Invalid day.");
        day = new_day;
    }

    void set_month(int new_month) {
        if (new_month <= 0 || new_month > 12) throw std::invalid_argument("Invalid month.");
        month = new_month;
    }

    void set_year(int new_year) {
        if (new_year > year_n) throw std::invalid_argument("Year cannot be greater than current year.");
        year = new_year;
    }

    // Get methods
    std::string get_Name() const { return Name; }
    int get_day() const { return day; }
    int get_month() const { return month; }
    int get_year() const { return year; }

    int age() const {
        return year_n - year;
    }

    virtual void print() const {
        std::cout << "Plant: " << Name << " (" << day << "." << month << "." << year << ") is " << age() << " years old.\n";
    }

    virtual void save_to_file(const std::string& filename) const {
        std::ofstream fout(filename, std::ios::app);
        if (!fout.is_open()) {
            throw std::ios_base::failure("Failed to open file: " + filename);
        }
        fout << "Plant: " << Name << " (" << day << "." << month << "." << year << "), Age: " << age() << " years\n";
        fout.close();
    }
};

class Tree : public Plant {
private:
    int height;
public:
    Tree(std::string Name, int day, int month, int year, int year_n, int height)
        : Plant(Name, day, month, year, year_n) {
        if (height <= 0) throw std::invalid_argument("Height must be a positive value.");
        this->height = height;
    }

    void set_height(int new_h) {
        if (new_h <= 0) throw std::invalid_argument("Height must be a positive value.");
        height = new_h;
    }

    int get_height() const {
        return height;
    }

    void print() const override {
        Plant::print();
        std::cout << "Height: " << height << " meters.\n";
    }

    void save_to_file(const std::string& filename) const override {
        std::ofstream fout(filename, std::ios::app);
        if (!fout.is_open()) {
            throw std::ios_base::failure("Failed to open file: " + filename);
        }
        fout << "Tree: " << Name << " (" << day << "." << month << "." << year << "), Age: "
            << age() << " years, Height: " << height << " meters\n";
        fout.close();
    }
};

// Demonstration
int main() {
    try {
        Plant p1("Lavender", 25, 2, 2023, 2025);
        p1.print();
        p1.save_to_file("plants.txt");

        Tree t1("Oak", 30, 10, 2000, 2025, 25);
        t1.print();
        t1.save_to_file("plants.txt");

        // Uncomment to test exception:
        //Tree t2("Maple", 1, 1, 2026, 2025, 5); // Invalid year

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Input error: " << e.what() << std::endl;
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "File error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unknown error occurred.\n";
    }

    return 0;
}
