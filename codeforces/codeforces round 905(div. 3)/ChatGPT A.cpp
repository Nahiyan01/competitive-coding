#include <iostream>
#include <vector>
using namespace std;

int min_seconds_to_enter_pin(string pin) {
    // Define the circular arrangement of digits
    string circular_digits = "1234567890";

    // Initialize a 2D table to store the minimum seconds
    vector<vector<int>> dp(10, vector<int>(10, 0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            dp[i][j] = min(abs(i - j), 10 - abs(i - j));
        }
    }

    int min_seconds = 0;
    int current_digit = 1;  // Start at digit 1

    for (char digit : pin) {
        int target_digit = digit - '0';
        // Calculate the minimum seconds to reach the target digit
        int seconds = min(abs(current_digit - target_digit), 10 - abs(current_digit - target_digit));
        min_seconds += seconds;
        current_digit = target_digit;
    }

    return min_seconds;
}

int main() {
    int n;
    cin>>n;
    while(n--){
    string pin;
    cin>>pin;// Replace with your pin code
    int result = min_seconds_to_enter_pin(pin);
    cout << "Minimum seconds to enter the pin: " << result << endl;
    }
    return 0;
}
