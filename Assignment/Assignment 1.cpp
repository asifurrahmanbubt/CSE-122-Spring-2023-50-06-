#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    int age;
    long uniqueID;
    bool alive;
    pair<double, double> location;

public:
    Animal() : age(0), uniqueID(rand()), alive(true), location(make_pair(0.0, 0.0)) {}

    Animal(int age, double x, double y) : age(age), uniqueID(rand()), alive(true), location(make_pair(x, y)) {}

    virtual void move(double x, double y) {
        location.first = x;
        location.second = y;
        cout << "Animal has moved to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    Animal(const Animal& other) {
        age = other.age;
        uniqueID = other.uniqueID;
        alive = other.alive;
        location = other.location;
    }

    virtual ~Animal() {}

    virtual void sleep() {
        cout << "Animal is sleeping" << endl;
    }

    virtual void eat() {
        cout << "Animal is eating" << endl;
    }

    void setAlive(bool isAlive) {
        alive = isAlive;
    }

    friend ostream& operator<<(ostream& os, const Animal& animal) {
        os << "Animal ID: " << animal.uniqueID << endl;
        os << "Age: " << animal.age << endl;
        os << "Alive: " << (animal.alive ? "Yes" : "No") << endl;
        os << "Location: (" << animal.location.first << ", " << animal.location.second << ")" << endl;
        return os;
    }
};

class Bird : public Animal {
public:
    Bird() : Animal() {}

    Bird(int age, double x, double y) : Animal(age, x, y) {}

    virtual void move(double x, double y) override {
        location.first = x;
        location.second = y;
        cout << "Bird has flown to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    virtual void sleep() override {
        cout << "Bird is sleeping" << endl;
    }

    virtual void eat() override {
        cout << "Bird is eating seeds" << endl;
    }
};

class Canine : public Animal {
public:
    Canine() : Animal() {}

    Canine(int age, double x, double y) : Animal(age, x, y) {}

    virtual void move(double x, double y) override {
        location.first = x;
        location.second = y;
        cout << "Canine has walked to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    virtual void sleep() override {
        cout << "Canine is sleeping" << endl;
    }

    virtual void eat() override {
        cout << "Canine is eating meat" << endl;
    }
};

int main() {
    Animal animal1(6, 8.0, 1.0);
    Bird bird1(3, 7.0, 3.0);
    Canine canine1(1, 4.0, 1.0);

    Animal *animals[] = {&animal1, &bird1, &canine1};
    int num_animals = sizeof(animals) / sizeof(animals[0]);

    for (int i = 0; i < num_animals; i++) {
        cout << "Animal Details:" << endl << *animals[i] << endl;
    }

    cout << "Moving the animals..." << endl;

    for (int i = 0; i < num_animals; i++) {
    double x = i + 1.0;
    double y = i + 2.0;
    animals[i]->move(x, y);
    animals[i]->eat();
    animals[i]->sleep();
    cout << endl;
    }
return 0;
}

