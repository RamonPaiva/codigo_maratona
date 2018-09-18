#include<bits/stdc++.h>
#define INFINITO 1000000
using namespace std;


int obter_min_moedas(vector <int> &moedas, int troco, int tam_moedas){
	int min_moedas = INFINITO;
	
	if(troco == 0){
		return 0;
	}
	
	for(int i=0; i < tam_moedas; i++){
		if(troco >= moedas[i]){
			int cont = 1 + obter_min_moedas(moedas, troco - moedas[i], tam_moedas);
			if(min_moedas > cont){
				min_moedas = cont;
			}
		}
	}
	return min_moedas;
}

int main(){
	vector <int> moedas;
	moedas = {1,2,3,4,5};
	int troco = 27;
	int tam_moedas = moedas.size();
	
	cout<<obter_min_moedas(moedas, troco, tam_moedas)<<endl;
	
	return 0;
}
