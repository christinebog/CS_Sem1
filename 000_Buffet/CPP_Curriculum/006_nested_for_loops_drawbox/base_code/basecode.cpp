// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	//*****
	//*****
	//*****
	
	char symbol;
	int len = 0; 
	char height; 
	
	cout<<"please enter box width:   "<<endl;
	cin>> len;
	
	cout<<"please enter border char:  "<<endl;
	cin>> symbol;
	
	cout<<"please enter box height:   "<<endl;
	cin>> height;
	

	for(int i = ; i < len+; i++){
  		gotoxy(3+i,5+i);
  		cout<<symbol<<endl;}

}
