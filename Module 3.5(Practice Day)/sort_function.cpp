#include <bits/stdc++.h>
using namespace std;

//declare and defining the sort function that will return the heap memory location
int* sort_fun(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //ascending sort if the number is under 10^5
    sort(arr, arr + n);
    return arr;
    
}
int main(){

    int n;
    cin >> n;
    int* return_arr = sort_fun(n);

    for (int i = 0; i < n; i++)
    {
        cout << return_arr[i] << " ";
    }
    
    
    return 0;
}