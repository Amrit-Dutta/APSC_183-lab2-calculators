#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double ans;
    int n;
    for (n=1; n<5; n++){
    cout << "enter the time to reach the seccond arc" << endl;
    
    cin >> a;
    
    ans = (4/a);
    
    cout << "the diffusion is:" << endl << ans << endl;
    }

    return 0;
}