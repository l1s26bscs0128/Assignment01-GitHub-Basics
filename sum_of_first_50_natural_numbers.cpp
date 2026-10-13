//Sum of 50 natural numbers  hamad farid  l1s26bscs0128
#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    // previous loop was running till 49, result was containign error.
    for(int i=1;i<=50;i++)
        {
            sum = sum +i;
            
        }
    cout<<"sum of first 50 natural number "<< sum<<endl;
    // varification added
    int sum2 = 50*(50+1)/2;
    cout<<"sum of first 50 natural number "<< sum2<<endl;
    return 0;
}
