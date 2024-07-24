/**
 * Solving https://open.kattis.com/problems/undeadoralive
 * 
 * Kaiya Magnuson, 7/24/2024
 * 
 * Strategy: O9n) string parsing loop
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int alive_ct = 0;
    int undead_ct = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ':') {
            if (str[i + 1] == ')') {
                alive_ct++;
            } else if (str[i + 1] == '(') {
                undead_ct++;
            }
        }
    }
    // Ignore the awfulness, I'm just testing the ternary operator order of operations :)
    alive_ct > 0 && undead_ct > 0 ? cout << "double agent" : alive_ct == 0 && undead_ct == 0 ? cout << "machine" : alive_ct > 0 ? cout << "alive" : cout << "undead";

    return 0;
}