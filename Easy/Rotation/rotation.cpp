//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low=0;
	    int high=n-1;
	    int mid=(low+high)/2;
	    while(low<high){
	        if(arr[mid]>arr[high])
	        {
	            low=mid+1;
	        }
	        else
	        high=mid;
	        mid=(low+high)/2;
	    }
	    return mid;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends