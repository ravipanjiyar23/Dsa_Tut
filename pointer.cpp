#include <iostream>
using namespace std;

int main() {
    int var = 10;          // A normal integer variable
    int *ptr = &var;       // Pointer 'ptr' holds the address of 'var'

    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Pointer ptr holds: " << ptr << endl;
    cout << "Value at the address ptr is pointing to (*ptr): " << *ptr << endl;

    // Modifying value using the pointer
    *ptr = 20;             // Changing the value at the address ptr is pointing to

    cout << "Updated value of var: " << var << endl;
    return 0;
}
