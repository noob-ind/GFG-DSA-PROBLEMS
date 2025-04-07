//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        int c = 0;
        int n2 = n;
        while(n>=0)
        {
            if((n&1) == 1)
            {
                n = n>>1;
                c++;
            }
            else
            {
              n2 = n2 | (1<<c); 
               
            return n2;
            }
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends