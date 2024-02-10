#Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.
#Find the second largest and second smallest element from the array.
#Return the two elements (second largest and second smallest) as another array of size 2.

#Example :
#Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
#Output: [4, 2]


int findslargest(vector<int> a,int n)
    {
        int largest = a[0];
        int slargest = -1;
        for(int i=1;i<n;i++)
        {
          if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
          } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
          }
        }

        return slargest;
    }

    int findssmallest(vector<int> a,int n)
    {
        int smallest = a[0];
        int ssmallest = INT_MAX;
        for(int i=1;i<n;i++)
        {
          if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
          } else if (a[i] < ssmallest && a[i] != smallest) {
            ssmallest = a[i];
          }
        }
        return ssmallest;
    }

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int slargest = findslargest(a,n); 
    int ssmallest = findssmallest(a,n);

    return {slargest,ssmallest};

};

