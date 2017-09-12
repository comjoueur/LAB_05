#include<iostream>
using namespace std;
int reconocer(char a){
	if(a>='a' and a<='z') return 1;
	else if(a>='A' and a<='Z') return 2;
	else return 0;
}
int main(){
    string p;
    cin>>p;
    string h="";
    for(int i=0;i<p.size();i++){
    	if(h.size()==0 and reconocer(p[i])!=0) {h+=p[i];}
    	else{
    		if(reconocer(p[i])==2) {h+='_';h+= p[i];}
    		else if(reconocer(p[i])==1) {h+=p[i];}
    	}
    }
    cout<<h<<endl;
}
