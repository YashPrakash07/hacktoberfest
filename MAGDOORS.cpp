#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int t;
	cin >> t;
	while (t--) { string s;
	    cin>>s;
	    int n = s.size();
	    int i;
	    i = 1;
	    int ans = 1;
	    char curr = s[0];
	    
	    while(i < n){
	        while(i < n && s[i] == curr)
	            i++;
	        if(i < n && s[i] != curr){
    	        ans++;
    	        curr=s[i];
    	        i++;
	        }
	    }
	    if(s[0] == '1'){
	        ans--;
	    }
	    cout<<ans<<endl;
		
	}
return 0;}