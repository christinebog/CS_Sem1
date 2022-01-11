// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
 
	int x1; 
	int y1;
	bool con = true ;
	while (con) {
		cout << x1 << endl;
		cout <<"enter two numbers: "<<endl;
		cin >> y1;
		cin >>x1;
		cout << "please enter an operation: "<<endl;
		char bread;
		cin >> bread;
		// int x2 = 8;
		// int y2 = 6; 
		// cin >> x2; 
		// cin >> y2;
		
		if(bread== '+'){
			cout << "your number is:     ";
			cout << x1 + y1 <<endl;
		}
		
		if(bread== '*'){
			cout<< "your number is: ";
			cout<< x1 * y1 <<endl; 
		}
		
		if(bread== '-'){
			cout<< "your number is: ";
			cout<< x1 - y1 << endl; 
	
		}
		
		if(bread== '/'){
			cout<< "your number is: ";
			cout<< x1 / y1 << endl; 
		
		}
		
		cout<< "would you like to continue?:  "<<endl; 
		cin >> bread;
		if(bread == 'q') {
			con = false;
		}
	}
	
	
	

}
