#include <bits/stdc++.h>
using namespace std;
vector<string>substrings;

void Substrings(string str) {
    int n = str.length();
    
    // Loop for different starting points in the string
    for (int i = 0; i < n; i++) {
        // Loop for different ending points
        for (int j = i; j < n; j++) {
            substrings.push_back(str.substr(i, j - i + 1));
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All substrings of the string are:\n";
    Substrings(str);
    for(auto strs:substrings){
        cout << strs << '\n';
    }
    return 0;
}
