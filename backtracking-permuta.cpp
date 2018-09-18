#include<bits/stdc++.h>
using namespace std;

void permuta(vector<int> &v, int inf, int sup){
	if(inf == sup){
		for(int i=0;i<=sup;i++){
			cout<< v[i] << " ";
		}
		cout<< endl;
	}
	else{
		for(int i = inf; i <= sup; i++){
			swap(v[inf], v[i]);
			permuta(v, (inf + 1), sup);
			swap(v[inf], v[i]); //backtracking
		}
	}
}

int main(){
	//int v[] = {1,2,3};
	vector <int> v;
	v = {1,2,3};
	//v.push_back(1);v.push_back(2);v.push_back(3);
	permuta(v,0,v.size()-1);
	return 0;
}
