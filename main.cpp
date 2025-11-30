#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    double average = (double)sum / numbers.size();

    cout << "Numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    sort(numbers.begin(), numbers.end(), greater<int>());

    cout << "Numbers in descending order: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
