// #include <iostream>

// using namespace std;

// int main() {
//     long long n1, n2;
//     cin >> n1 >> n2;

//     if (n2 == 0) {
//         cout << n1; 
    
//     }

//     else if (n2 >= n1) {
//         cout << 0; 
        
//     }
//     else{

//     long long zeros = n1 - n2;
//     long long gaps = n2 + 1;
//     long long maxBlockLength = zeros / gaps;

//     if (zeros % gaps != 0) {
//         maxBlockLength += 1;
//     }

//     cout << maxBlockLength; 
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1, s2;
    
//     cin>>s1>>s2;
    
//     int totalDistance = 0;
//     char prevGoodCharacter = s1[0];

//     for (char name : s2) {
//         bool found = false;

//         for (char goodCharacter : s1) {
//             if (name == goodCharacter) {
//                 found = true;
//                  prevGoodCharacter = name; 
//                 break;
//             }
//         }

//         if (!found) {
//             int minimumDistance = INT_MAX;
//             char closestGoodChar = prevGoodCharacter;

//             for (char goodCharacter : s1) {
//                 int distance = abs(name - goodCharacter);
//                 if (distance < minimumDistance) {
//                     minimumDistance = distance;
//                     closestGoodChar = goodCharacter;
//                 } else if (distance == minimumDistance) {
//                     if (abs(prevGoodCharacter - goodCharacter) < abs(prevGoodCharacter - closestGoodChar)) {
//                         closestGoodChar = goodCharacter;
//                     }
//                 }
//             }

//             totalDistance += minimumDistance; 
//             prevGoodCharacter = closestGoodChar; 
//         }
//     }
    
//     cout << totalDistance << endl;
    
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// int solve() {
//     int n;
//     cin >> n;

//     if (n <= 0) {
//         return -1; // Invalid input
//     }

//     vector<int> arr(n);  // Vector to store the input numbers
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;
    
//     if (k < 1 || k > n) {
//         return -1;  // Out-of-bound index for 'k'
//     }

//     int operations = 0;  // Count the number of operations

//     while (true) {
//         operations++;
//         int maxValue = 0;
//         int maxIndex = -1;

//         // Find the index of the maximum element
//         for (int i = 0; i < n; i++) {
            
//             if (arr[i] > maxValue) {
//                 maxValue = arr[i];
//                 maxIndex = i;
//             }
//         }

//         // If the maximum element is at the (k-1) position, return the result
//         if (maxIndex == k - 1) {
//             return operations ;
//         }

//         // Reset the maximum element to 0
//         arr[maxIndex] = -1;

//         // Increment all elements before the maximum index
//         for (int i = 0; i < maxIndex; i++) {
//             if(arr[i]==-1){
//                 continue;
//             }
//             arr[i]++;
//         }

//     }
// }

// int main() {
//     cout << solve();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// bool isValidInput(string& s1) {
//     for (char alphabet : s1) {
//         if (alphabet != 'M' && alphabet != 'L') {
//             return false;
//         }
//     }
//     return true;
// }

// int countPossibilities(string& s1) {
//     int countofM = 0, countofL = 0;
//     for (char c : s1) {
//         if (c == 'M') countofM++;
//         else countofL++;
//     }
//     int totalnoOfWays = 0;

//     // Two 'M's and one 'L'
//     if (countofM >= 2 && countofL >= 1) {
//         totalnoOfWays += (countofM * (countofM - 1) / 2) * countofL;
//     }
    
//     // Two 'L's and one 'M'
//     if (countofL >= 2 && countofM >= 1) {
//         totalnoOfWays += (countofL * (countofL - 1) / 2) * countofM;
//     }

//     return totalnoOfWays;
// }

// int main() {
//     string s1, s2;
//     cin>>s1>>s2;
    
//     if (!isValidInput(s1) || !isValidInput(s2)) {
//         cout << "Invalid input" << endl;
//         return 0;
//     }

//     int countAshokvalue = countPossibilities(s1);
//     int countAnandvalue = countPossibilities(s2);

//     if (countAshokvalue > countAnandvalue) {
//         cout << "Ashok" << endl;
//     } else if (countAnandvalue > countAshokvalue) {
//         cout << "Anand" << endl;
//     } else {
//         cout << "Draw" << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

int main() {
    string ashokRow, anandRow;
    cin>>ashokRow;  // Input for Ashok
    cin>>anandRow;  // Input for Anand

    if (ashokRow.length() < 3 || anandRow.length() < 3) {
        cout << "Invalid Input" << endl;
    } else {
        int ashokCount = 0, anandCount = 0;
        int l = 0, m = 0, lm = 0, ml = 0;

        // Count Ashok's possibilities
        for (int i = ashokRow.length() - 1; i >= 0; i--) {
            if (ashokRow[i] == 'M') {
                ashokCount += lm;
                ml += l;
                m += 1;
            } else {
                ashokCount += ml;
                lm += m;
                l += 1;
            }
        }

        // Reset variables
        l = 0;
        m = 0;
        lm = 0;
        ml = 0;

        // Count Anand's possibilities
        for (int i = anandRow.length() - 1; i >= 0; i--) {
            if (anandRow[i] == 'M') {
                anandCount += lm;
                ml += l;
                m += 1;
            } else {
                anandCount += ml;
                lm += m;
                l += 1;
            }
        }

        // Output the result
        if (ashokCount > anandCount) {
            cout << "Ashok" << endl;
        } else if (ashokCount == anandCount) {
            cout << "Draw" << endl;
        } else {
            cout << "Anand" << endl;
        }
    }

    return 0;
}
