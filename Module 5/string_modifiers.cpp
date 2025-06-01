#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello";
    string s2 = " hi";
    //s +=  s2; // string concation
    //s.append(s2); //  this will also do concatation

    //push back means add in back or last
    // s.push_back('A');
    //s.pop_back(); this remove the last element of the string

    //s += 'A';

    //or we can update any index element
    s[0] = 'G'; //but you can't expand the array size like that so you should not try to update the index more than the size
    cout << s << endl;
    return 0;
}