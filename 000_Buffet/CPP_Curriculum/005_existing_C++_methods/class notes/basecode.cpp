// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	srand(time(NULL));
	gotoxy(9,4);
	cout<< 'a'<< endl;
	gotoxy(9,5); 
	cout<< 'n'<<endl; 
	gotoxy(9,6); 
	cout<< 'd'<<endl; 
	gotoxy(9,7); 
	cout<< 'r'<<endl; 
	gotoxy(9,8); 
	cout<< 'e'<<endl; 
	gotoxy(9,9); 
	cout<< 'w'<<endl; 
	
	
	
	for(int i = 0; i < 5; i++){
		gotoxy(9+i,5+i);
		cout<<'n';	
	}
}
