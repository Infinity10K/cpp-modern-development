#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a, b, c;

    cin >> a >> b >> c;

    if (a != 0)
    {
        float D = b * b - 4 * a * c;
        float aa = 2 * a;
        
        if (D == 0)
            cout << - b / aa;
            
        else if (D > 0)
        {
            float sD = sqrt(D);
            float x1 = (-b + sD) / aa;
            float x2 = (-b - sD) / aa;
            
            cout << x1 << " " << x2;
        }
    }

    else if (b)
    {
        cout << - c / b;
    }
    

    return 0;
}