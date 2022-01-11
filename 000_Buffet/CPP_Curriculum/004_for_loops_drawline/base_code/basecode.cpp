// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	char sym;
	char hv; 
	int length;
	
	cout<<"please enter an symbol:         "<<endl;
	
	cin>>sym;
	
	cout<<"please enter line length:  "<<endl; 
	
	cin>>length; 
	
	cout<<"horizontal or verticle"<<endl;
	cin>>hv;
	
	if(hv=='h'){
		for(int y=0; y < length; y++){
			cout<<sym;
		}
		
	}
	if(hv=='v'){
		for(int y=0; y < hv; y++){
			cout<<sym<<endl;
		}
		
	}
	
		
	
}
