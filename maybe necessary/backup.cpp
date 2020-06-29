
#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256

//int max_distinct_char(string str, int n){
//
//    // Initialize all character's count with 0
//    int count[NO_OF_CHARS] = {0};
//
//    // Increase the count in array if a character
//    // is found
//    for (int i = 0; i < n;  i++)
//        count[str[i]]++;
//
//    int max_distinct = 0;
//    for (int i = 0; i < NO_OF_CHARS;  i++)
//        if (count[i] != 0)
//            max_distinct++;
//
//    return max_distinct;
//}

int smallesteSubstr_maxDistictChar(string str){

    int n = str.size();     // size of given string

    // Find maximum distinct characters in any string
    int max_distinct = 3;
    int minl = n;   // result

    // Brute force approach to find all substrings
    for (int i=0 ;i<n ;i++){
        for (int j=0; j<n; j++){
            string subs =  str.substr(i,j);
            int subs_lenght = subs.size();
            int sub_distinct_char = 3;


            if (subs_lenght < minl && max_distinct == sub_distinct_char){
                minl = subs_lenght;
            }
        }
    }
    return minl;
}

/* Driver program to test above function */
int main()
{
    // Input String
    string str = "12222133333332";

    int len =  smallesteSubstr_maxDistictChar(str);
    cout << len;
    return 0;
}
