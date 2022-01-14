#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int j = rand() % 24+1;
	if(j==1){
		*a =1000;
		*b =500;
		*c =100;
		*d =50;
	}
	if(j==2){
		*a =1000;
		*b =500;
		*c =50;
		*d =100;
	}
	if(j==3){
		*a =1000;
		*b =50;
		*c =500;
		*d =100;
	}
	if(j==4){
		*a =1000;
		*b =50;
		*c =100;
		*d =500;
	}
	if(j==5){
		*a =1000;
		*b =100;
		*c =50;
		*d =500;
	}
	if(j==6){
		*a =1000;
		*b =100;
		*c =500;
		*d =50;
	}
	if(j==7){
		*a =500;
		*b =1000;
		*c =100;
		*d =50;
	}
	if(j==8){
		*a =500;
		*b =100;
		*c =1000;
		*d =50;
	}
	if(j==9){
		*a =500;
		*b =100;
		*c =50;
		*d =1000;
	}
	if(j==10){
		*a =500;
		*b =50;
		*c =100;
		*d =1000;
	}
	if(j==11){
		*a =500;
		*b =50;
		*c =1000;
		*d =100;
	}
	if(j==12){
		*a =500;
		*b =1000;
		*c =50;
		*d =100;
	}
	if(j==13){
		*a =100;
		*b =1000;
		*c =500;
		*d =50;
	}
	if(j==14){
		*a =100;
		*b =500;
		*c =1000;
		*d =50;
	}
	if(j==15){
		*a =100;
		*b =500;
		*c =50;
		*d =1000;
	}
	if(j==16){
		*a =100;
		*b =50;
		*c =500;
		*d =1000;
	}
	if(j==17){
		*a =100;
		*b =50;
		*c =1000;
		*d =500;
	}
	if(j==18){
		*a =100;
		*b =1000;
		*c =50;
		*d =500;
	}
	if(j==19){
		*a =50;
		*b =1000;
		*c =500;
		*d =100;
	}
	if(j==20){
		*a =50;
		*b =500;
		*c =1000;
		*d =100;
	}
	if(j==21){
		*a =100;
		*b =500;
		*c =100;
		*d =1000;
	}
	if(j==22){
		*a =50;
		*b =100;
		*c =500;
		*d =1000;
	}
	if(j==23){
		*a =50;
		*b =100;
		*c =1000;
		*d =500;
	}
	if(j==24){
		*a =50;
		*b =1000;
		*c =100;
		*d =500;
	}
}
