// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl<<endl;
	
	int x1= 5;
	cout << x1 << endl;
	cout <<"enter two numbers: "<<endl;
	int y1= 3;
	cin >> y1;
	cin >>x1;
	cout << "please enter an operation: "<<endl;
	char bird;
	cin >> bird;
	// int x2 = 8;
	// int y2 = 6; 
	// cin >> x2; 
	// cin >> y2;
	
	if(bird== '+'){
		cout << "your number is: ";
		cout << x1 + y1 <<endl;
	}
	
	if(bird== '*'){
		cout<< "your number is: ";
		cout<< x1 * y1 <<endl; 
	}
	
	if(bird== '-'){
		cout<< "your number is: ";
		cout<< x1 - y1 << endl; 

	}
	
	if(bird== '/'){
		cout<< "your number is: ";
		cout<< x1 / y1 << endl; 
	
	}
	
	
}
