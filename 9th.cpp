#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    int c=0;
	    cin>>x;
	    char s[x-1];
	    cin>>s;
	    if(x!=2){
	        for(int i=0;i<=x-3;i++){
	            if(s[i]!=s[i+1]){
	                c++;
	            }
	        }
	    }
	    if(s[-1]==0){
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
