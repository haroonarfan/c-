// Creating LCM and HCF Calculator
#include <iostream>

using namespace std;

// Functions
void HCF(int num1,int  num2);
void LCM(int num1, int num2);

int main() {
    int num1, num2;
    cout << "Ener 2 numbers: ";
    cin >> num1 >> num2;
    HCF(num1,num2);
    LCM(num1, num2);
    return 0;
}

void HCF(int num1,int  num2) {
    int Factor {1};
    for (int i = 1; i <= (num1*(num1>num2)+num2*(num1<num2))/2; ++i) {
        if ((num1 % i == 0) == true && (num2 % i == 0) == true) {
            Factor = i;    
        }
    }
    cout << "The HCF is: " << Factor << endl;
    return;
}

void LCM(int num1, int num2) {
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