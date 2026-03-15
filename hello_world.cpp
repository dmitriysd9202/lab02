#include <iostream>
#include <string>


int main() {
    string name;
// Запрашиваем имя пользователя
    cout << "Enter your name: ";
    cin >> name;
// Выводим приветствие
    cout << "Hello world from " << name << endl;
    return 0;
}
