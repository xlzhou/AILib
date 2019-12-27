
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <climits>

int main() {
    using namespace std; 
    int carrots;
    cout << "How many carrots do you have?" << endl; 
    cin >> carrots; // C++ input cout << "Here are two more. ";
    carrots = carrots + 2;
    // the next line concatenates output
    int n_int = INT_MAX;
    short n_short = SHRT_MAX; long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    // initialize n_int to max int value // symbols defined in climits file
    // sizeof operator yields size
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl; 
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl; 
    cout << endl;
    cout << "Maximum values:" << endl; 
    cout << "int: " << n_int << endl; cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "Minimum int value = " << INT_MIN << endl; 
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}