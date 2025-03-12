#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string word;
    vector<string> text;
    while(cin >> word) {
        text.push_back(word);
    }
    cout << text.size() << " : ";
    for (const auto& w : text) {
        cout << w ;
    }
    return 0;
}