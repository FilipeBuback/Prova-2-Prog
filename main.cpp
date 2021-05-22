#include <iostream>
using namespace std;
void pont(int *v,int n,int*min,int*max){
int i;
*min=v[0];
*max=v[0];
for(i=1;i<n;i++) {
  if(v[i]>*max)
{*max=v[i];
}else if(v[i]<*min){
  *min=v[i];
}}
}
int main() {
  int x;
  int n;
  int vetor[n];
  int *ponteiro;
  ponteiro=vetor;
  cout << "Digite a quantidade de numeros que quer inserir"<< endl;
  cin >> n;
  n=n-1;
  cout<< "Agora digite os numeros que quer inserir"<<endl;
 for(int i=0; i<=n;i++){
   cin >> x;
   vetor[n]=x;
 }




  
 
}