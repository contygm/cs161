#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
    int num = 8;
    int bob = num++;
    num /= 2;
    bob += num;

    cout << bob << endl;

    string str = "SPUNKY SAVVY SYZYGY";
    string output = "";
    int counter = 1;
    while (str.at(counter) != 'Y')
    {
        output += str.at(counter);
        counter += 3;
    }

    cout << output << endl;
    
    return 0;
}