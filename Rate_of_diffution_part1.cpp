#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double ans;
    int n;
    for (n=1; n<5; n++){
    cout << "enter the 3 time values for 60, 40, 20 cm to calculate the avrage diffusion:" << endl;
    
    cin >> a >> b >> c;
    
    ans = (4/a + 6/b + 8/c) / 3;
    
    cout << "the avrage diffusion is:" << endl << ans << endl;
    }

    return 0;
}
