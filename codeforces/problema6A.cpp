#include <bits/stdc++.h>
using namespace std;
 
bool validarTriangulo(int a,int b,int c)
{
  return ((a+b>c)&&(a+c>b)&&(b+c>a));
}
 
bool validarTrianguloNodeg(int a,int b,int c)
{
  return ((a==b+c)||(b==a+c)||(c==a+b));
}
 
void solve(){

  bool ok=false;
  bool nok=false;
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  ok=ok||(validarTriangulo(a,b,c));
  ok=ok||(validarTriangulo(a,b,d));
  ok=ok||(validarTriangulo(a,c,d));
  ok=ok||(validarTriangulo(b,c,d));
 
 
  nok=nok||(validarTrianguloNodeg(a,b,c));
  nok=nok||(validarTrianguloNodeg(a,b,d));
  nok=nok||(validarTrianguloNodeg(a,c,d));
  nok=nok||(validarTrianguloNodeg(b,c,d));
  
  if(ok)
    cout << "TRIANGLE" << "\n";
  else if(nok)
    cout<< "SEGMENT" << "\n";
  else
    cout<< "IMPOSSIBLE" <<"\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}