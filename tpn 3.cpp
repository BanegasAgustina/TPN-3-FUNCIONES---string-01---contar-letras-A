#include <bits/stdc++.h>
using namespace  std ;

int ContarLetraA(string f);

int main(){
string frase;
cout<<"ingrrese una frase: ";
getline(cin,frase);

cout<<ContarLetraA(frase);
return 0;
}
int ContarLetraA(string f){
	int cont;
	
	for(int i=0 ; i <f.size();i++){
		if(f[i]=='A'||f[i] == 'a'){
			cont ++;
		}
	}
	return cont;
}
