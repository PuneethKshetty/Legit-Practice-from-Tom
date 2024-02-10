#Problem statement
Given an array ‘arr’ of size ‘n’ find the largest element in the array.

#Example:
#Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]
#Output: 5

#code:
//Brute force
//Sort the arary in ascending order and largest element will be at atlast
//TC: nlogn

//Optimal approach
//TC: N
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int large = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}



  
