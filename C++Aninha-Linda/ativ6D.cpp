#include <iostream>
using namespace std;
int main(){
	
    int senha, tentativa;
      cout<<"insira uma senha:\n";
      cin>> senha;
      cout << "digite a senha estabelecida: \n";
      cin >> tentativa;
      if (tentativa != senha){
	  
    	while (tentativa!=senha){
		cout<<"senha incorreta\ndigite a senha novamente: \n";
    	cin>>tentativa;
    	}
	} 
	cout<< "acesso garantido";
	


    return 0;
}
