/**
 * Solving https://open.kattis.com/problems/knotknowledge
 * 
 * Kaiya Magnuson, 7/23/2024
 * 
 * Strategy: 
 */

// ABANDONED

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num_knots;
    cin >> num_knots;
    vector<int> all_knots, known_knots;

    int temp;
    for (int i = 0; i < num_knots; i++) {
        cin >> temp;
        all_knots.push_back(temp);
        cout << "add " << temp << endl;
    }

    for (int i = 0; i < num_knots - 1; i++) {
        cin >> temp;
        known_knots.push_back(temp);
        cout << "known " << temp << endl;
    }

    return 0;
}