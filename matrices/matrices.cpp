#include<iostream>
using namespace std;
void change(double &a,double &b){//ordena un par de valores
  if(a<b){
    int tmp=a;
    a=b;
    b=tmp;
  }
}
void opera_m(double matriz[3][3],double rsp[4],int len){
  for(int k=0;k<len*len;k++){
    int i=0,j=0;
    while(i!=len){
      if(i!=0 or j!=0){//por si es el primer valor de la primera fila
        if(j==0)change(matriz[i][j],matriz[i-1][len-1]);//si es un comienzo de fila
        else change(matriz[i][j],matriz[i][j-1]);//si no esta en comienzo de fila
      }
      if(j==len-1){j=0;i++;}
      else j++;
    }
  }
  double promedio=0;
  for(int k=0;k<len;k++)for(int h=0;h<len;h++)promedio+=matriz[k][h];
  rsp[0]=matriz[len-1][len-1];
  rsp[1]=matriz[0][0];
  rsp[2]=promedio/(len*len);
  int u=len/2;
  rsp[3]=matriz[u][u];
}
int main(){
  double arr[3][3];
  for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>arr[i][j];//entrada de valores
  double rsp[4];
  opera_m(arr,rsp,3);
  cout<<"\nmaximo: "<<rsp[0];
  cout<<"\nminimo: "<<rsp[1];
  cout<<"\npromedio: "<<rsp[2];
  cout<<"\nmediana: "<<rsp[3]<<endl;
  return 0;
}
