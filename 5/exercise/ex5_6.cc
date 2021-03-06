#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    const vector<string> scores = {"F", "E", "D", "C", "B", "A"};
    int grade = 0;
    string lettergrade = "";

    while (cin >> grade) {
        grade < 60 ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];
        cout << lettergrade << endl;
    }

    return 0;
}
