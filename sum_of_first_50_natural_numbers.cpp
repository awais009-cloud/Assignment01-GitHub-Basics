 L1F25BSCS0687 Syed Muhammad Awais Ali       
#include <iostream>
using namespace std;

int main() {
    int n = 50;
    int sum_formula = n * (n + 1) / 2;
    
    cout << "Sum by Loop: " << sum_loop << endl;
    cout << "Sum by Formula n(n+1)/2: " << sum_formula << endl;
    if(sum_loop == sum_formula) {
        cout << "Verified! Both methods give same result." << endl;
    } else {
        cout << "Error! Results do not match." << endl;
    }
    
    return 0;

}