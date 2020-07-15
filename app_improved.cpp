#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int HCF(vector<int> numbers);

int main() {
    int Numbers;
    vector<int> myVector;
    string line;

    cout << "Enter Numbers: ";

    getline(cin, line);
    istringstream os(line);

    while (os >> Numbers)
        myVector.push_back(Numbers);

    cout << HCF(myVector);

  return 0;
}

int HCF(vector<int> numbers) {
    int Factor {1}, max {*max_element(numbers.begin(), numbers.end())};
    for (int i = 1; i <= max/2; ++i) {
        
    }
    return max;
}
