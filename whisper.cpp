/**
 * Solving https://open.kattis.com/problems/kinahvisl
 * 
 * Kaiya Magnuson, 9/18/2024
 * 
 * Strategy: 
 */

#include <iostream>
using namespace std;

int main() {
    string word1, word2;
    int count = 1;
    cin >> word1;
    cin >> word2;
    
    if (word1.length() != word2.length()) {
        return -1;
    }

    for (int i = 0; i < word1.length(); i++) {
        if (word1[i] != word2[i]) {
            count++;
        }
    }

    cout << count;
    return 0;
}