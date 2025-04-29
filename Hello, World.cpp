#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello, World!"s << endl;
    string name;
    cout << "How is your name?"s << endl;
    cin >> name;
    cout << "You are welcome, "s << name << "!"s << endl;
}