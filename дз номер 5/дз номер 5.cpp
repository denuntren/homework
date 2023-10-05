#include <iostream>
#include<clocale>
#include<string>

using namespace std;

class User {
private:
    int hp;
    string name;
    int age;
public:
    User(int hp, string name,int age) {
        this->hp = hp;
        this->name = name;
        this->age = age;
    }
    void get_info() {
        cout << "age: " << age << endl << "name: " << name << endl << "hp: " << hp << endl;
    }
};

int main(){
    setlocale(LC_ALL, "ru");

    User alex(100, "alex", 15);
    alex.get_info();

    return 0;
}