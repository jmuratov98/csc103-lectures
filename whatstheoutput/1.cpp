#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
    int x = 10, y = 3;
    double d = 4, e = 2;
    cout << --x << endl;		//9
    cout << x-- << endl;		//9
    cout << y/x << endl;		//0
    y = e;
    cout << y/x << endl;		//0
    cout << x%y << endl;		//0
    cout << (x-d)/y << endl;	//2
    return 0;
}
