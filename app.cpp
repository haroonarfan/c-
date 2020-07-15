// Creating LCM and HCF Calculator
#include <iostream>

using namespace std;

// Functions
int HCF(int num1,int  num2);
int LCM(int num1, int num2);

int main() {
    int num1, num2;
    cout << "Ener 2 numbers: ";
    cin >> num1 >> num2;
    cout << "The HCF is: " << HCF(num1, num2) << endl;
    cout << "The LCM is: " << LCM(num1, num2) << endl;
    return 0;
}

int HCF(int num1,int  num2) {
    int Factor {1};
    for (int i = 1; i <= (num1*(num1>num2)+num2*(num1<num2))/2; ++i) {
        if ((num1 % i == 0) == true && (num2 % i == 0) == true) {
            Factor = i;    
        }
    }
    return Factor;
}

int LCM(int num1, int num2) {
    return (num1 * num2) / HCF(num1, num2);
}


/*          "`Finding LCM the long way`"
void LCM_THELONGWAY(int num1, int num2) {
    int Multiple {1}, Number1 {num1}, Number2 {num2};
    for (int i {1}; true; ++i) {
        if (Number1 == Number2) {
            cout << "The LCM is: " << Number1 << endl;
            break;
        } else if (Number1 > Number2) {
            Number2 = num2 * i;
        } else if (Number1 < Number2) {
            Number1 = num1 * i;
        }
    }
}
*/

