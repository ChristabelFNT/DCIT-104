#include <iostream>

using namespace std;

int main() {
    int A,num,c, sum = 0;
    cout << "find sum of prime numbers upto: ";
    cin >> A;

    for(num = 2; num<= A; num++){
        for(c = 2; c <= (num / 2); c++){

            if(num % c == 0){
                c=num;
                break;
            }
        }
        if(c != num) {
            sum += num;
        }
    }
    cout << endl << "The sum of all prime numbers upto " << A << " is " << sum;

    return 0;

    // Written by Christabel Tetteh , ID number:10979295
}
