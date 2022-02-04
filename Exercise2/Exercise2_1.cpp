#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 2) {
        cout << "Hello world " << argv[1] << "\n";
    }
    else {
        cout << "One argument expected. \n";
    }
    return 0;
}