#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std; 

// Functions
int HCF(vector<int> numbers);
int LCM(int num1, int num2);

int main() {
    int Numbers;
    vector<int> myVector;
    string line;

    cout << "Enter Numbers: ";

    getline(cin, line);
    istringstream os(line);

    while (os >> Numbers)
        myVector.push_back(Numbers);

    cout << "The HCF is: " << HCF(myVector) << endl;
    cout << "The LCM is: " << accumulate(myVector.begin(),myVector.end(),1,LCM) << endl;

  return 0;
}

int HCF(vector<int> numbers) {
    int Factor {1}, max {*max_element(numbers.begin(), numbers.end())}, count {0};
    for (int i = 1; i <= max/2; ++i) {
        for (int j:numbers) {
            if (j%i==0) {
                count++;
            }
        }
        if (count==numbers.size() ){
            Factor = i;
        }
        count = 0;
    }
    return Factor;
}

//This Function uses the function HCF
int LCM(int num1, int num2) {
    vector<int> number {num1,num2};
    int lcm = (num1 * num2 ) / HCF(number);
    return lcm;
}
