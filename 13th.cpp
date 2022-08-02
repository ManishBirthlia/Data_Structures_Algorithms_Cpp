#include <iostream>
using namespace std;

int main(){
	int t,N;
	cin>>t;
	while(t--){
	    cin>>N;
	    char S[N+1];
	    char a[N/2+1];
	    cin>>S;
	    for(int i=0;2*i<N;i++){
	        if(S[2*i]=='0'&&S[2*i+1]=='0'){
	            a[i]='A';
	        }else if(S[2*i]=='0'&&S[2*i+1]=='1'){
	            a[i]='T';
	        }else if(S[2*i]=='1'&&S[2*i+1]=='0'){
	            a[i]='C';
	        }else{
	            a[i]='G';
	        }
	    }
	    cout<<a<<endl;
	}
	return 0;
}
