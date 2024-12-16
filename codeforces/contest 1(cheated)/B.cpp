#include <iostream>
#include <algorithm>

using namespace std;

string canMakeEqualLengthThreadlets(int a, int b, int c) {
    // Sort the threadlet lengths in ascending order
    int threadlets[3] = {a, b, c};
    sort(threadlets, threadlets + 3);

    // Check if it's possible to make all threadlets of equal length
    if (threadlets[0] == threadlets[1] && threadlets[1] == threadlets[2]) {
        return "YES"; // All threadlets are already of equal length
    } else if (threadlets[0] == threadlets[1] && threadlets[0] + threadlets[1] == threadlets[2]) {
        return "YES"; // Two threadlets are of equal length, and one can be split into two equal lengths
    } else if (threadlets[0] + threadlets[1] == threadlets[2]) {
        return "YES"; // Two threadlets can be combined to form the length of the third one
    }
    else if(2*threadlets[0] + threadlets[1] == threadlets[2]) {
        return "YES";
    }
    else if(2*threadlets[0] + 2*threadlets[1] == threadlets[2]){
        return "YES";
    }
    else if(threadlets[1]==threadlets[2] && 2*threadlets[0] == threadlets[2]){
        return "YES";
    }
        else {
        return "NO"; // It's not possible to make all threadlets of equal length
    }
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        string result = canMakeEqualLengthThreadlets(a, b, c);
        cout << result << endl;
    }

    return 0;
}
