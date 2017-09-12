#include<iostream>
using namespace std;
int reconocer(char a){
	if(a>='a' and a<='z') return 1;//si es minuscula
	else if(a>='A' and a<='Z') return 2;//si es mayuscula
	else return 0;//si no es una letra
}
int main(){
    string p;
    cin>>p;
    string h="";
    for(int i=0;i<p.size();i++){
    	if(h.size()==0 and reconocer(p[i])!=0) {h+=p[i];}//si es una letra
    	else{
    		if(reconocer(p[i])==2) {h+='_';h+= p[i];}//si es mayuscula 
    		else if(reconocer(p[i])==1) {h+=p[i];}//si es minuscula
    	}
    }
    cout<<h<<endl;
}
