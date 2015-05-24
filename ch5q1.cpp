#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()

{
    
    int num,total;
    total = 0;
    cin >> num;
    while (num >=1)
    {
        cout << num % 10 << " ";
        total = total + (num % 10);
        num = num/10;
        
        
    }
    cout << endl;
    cout << "total is " << total;
        
            
        
    
    return 0;
    
}
