// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    
    bool isVowel (char c) {
		return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
		        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	}
	
        string modify (string s)
        {
            //code here.
		if (s.size() <= 1) return s;
		int i = 0, j = s.size() - 1;
		while (i < j) {
			if (isVowel(s[i]) && isVowel(s[j]))
				swap(s[i++], s[j--]);
			else {
				if (!isVowel(s[i]))
				i++;
				if (!isVowel(s[j])) 
				j--;
			}
		}
		return s;
            
        }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}

  // } Driver Code Ends