// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << endl;
	cout<<"hello"<<endl;
	int x = 5;
	while(true){
		cout<<x<<endl;
		if(x==25){
			break;
		}
		x = x + 1;
	}
	
	cout << endl;
	
	x= 25;
	while(true){
		cout<<x<<endl;
		if(x==5){
			break;
		}
		x = x - 1;
	}
	
	cout << endl;
	
	x = 15;
	while(true){
		cout<<x<<endl;
		if(x==5){
			break;
		}
		x = x - 1;
	}
	
	
	cout << endl;
	for(int i = 5; i <= 25; i = i + 1){
		cout << i <<endl;
	}
	
	cout << endl;
	for(int c = 15; c>=5; c= c - 1){
		cout << c << endl; 
	}
	
	cout << endl;
	int x1= 123; 
	while(true){
		if( x1>= 200 ){
			break; 
		}	
		cout << x1 << endl; 
		x1 = x1 + 2; 
	
	}
	
	cout << endl;
	
	for(int i = 1253; i >= 55; i = i - 7){
		cout << i << endl; 
	}
	
	
}
