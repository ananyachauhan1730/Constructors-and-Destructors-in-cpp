#include <iostream>

int main() {
    using namespace std; 

    class construct {
    public:
        int a, b;

        construct() {
            a = 10;
            b = 20;
        }
    };

 
    construct obj;
    cout << "a = " << obj.a << ", b = " << obj.b << endl;

    return 0;
}
