#include<iostream>
using namespace std;

int main()
{
	int BYGJ_i=0,BYGJ_l;
	float BYGJ_x,BYGJ_s=0;
	cout<<"ingrese el limite BYGJ_l="; cin>>BYGJ_l;
	do{
		
	cout<<"ingrese el numero BYGJ_x="; cin>>BYGJ_x;
	BYGJ_i=BYGJ_i+1;
	BYGJ_s=BYGJ_s+BYGJ_x;



	}while(BYGJ_i<BYGJ_l);
	cout<<"Se ingresaron "<<BYGJ_l<<" numeros "<< "que sumaron "<<BYGJ_s<<endl;
	return 0;



}
