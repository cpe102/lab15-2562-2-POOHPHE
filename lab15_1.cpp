#include<bits/stdc++.h>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	system("COLOR 0A");
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
void randData(double *d,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		
			 *((d+i)+j)=rand()%100/100.0;
			
		}
	}
}
void showData(double *d,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			 cout<<setw(4)<<*((d+i)+j)<<" ";
			
		}cout<<endl;
	}
}
void findRowSum(const double *d,double *sum,int n,int m){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		*(sum+i)+=*((d+i)+j);
			 
			
		}
	}
}


