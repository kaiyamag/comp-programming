/**
 * Solving https://open.kattis.com/problems/kannafriendship
 * 
 * Kaiya Magnuson, 9/18/2024
 * 
 * Strategy: Kanna can either lay a LEGO piece of width 1 and specified length
 * at a specified position on the track, or query how many studs are covered by
 * pieces.
 * 
 * Lets make an N-length array of booleans: true = stud covered, false = stud uncovered
 * For each query of type 1, switch A[s] - A[e] to true. Count the number of switches made, and add
 * to covered studs count
 * For each query of type 2, return covered studs count
 * 
 * NOTE: This solution solves Group 1 and 2 test cases, but exceeds the time limit
 * for the remaining groups (vector size > 200,000)
 */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;

    // DEBUG
    //cout << "n: " << n << ", q: " << q << endl;

    int covered_ct = 0;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        vec.push_back(false);
    }

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        switch (type) {
            case 1:
                //cout << "type 1" << endl;
                int s, e;
                cin >> s;
                cin >> e;
                //cout << "s: " << s << ", e: " << e << endl;

                for (int j = s; j <= e; j++) {
                    if (vec[j] == false) {
                        covered_ct++;
                    }
                    vec[j] = true;
                }
                break;

            case 2:
                //cout << "type 2" << endl;
                cout << covered_ct << endl;
                break;

            default:
                break;
        }
    }

    return 0;
}