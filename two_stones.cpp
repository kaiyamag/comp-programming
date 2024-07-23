/**
 * Solving https://open.kattis.com/problems/twostones
 * 
 * Kaiya Magnuson, 7/22/2024
 * 
 * Strategy: 
 * 1 2 -- A takes all, B wins
 * 1 2 3 -- A takes 2, B can take none, A wins
 * 1 2 3 4 -- A takes 2, 3, B can take none, B wins OR A takes 1,2, B takes 3,4, B wins
 * 1 2 3 4 5 -- A takes 2,3, B takes 4,5, one left, A wins
 */

#include<iostream>
using namespace std;

int main()
{
    int num_stones;
    cin >> num_stones;

    if (num_stones % 2) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }

    return 0;
}