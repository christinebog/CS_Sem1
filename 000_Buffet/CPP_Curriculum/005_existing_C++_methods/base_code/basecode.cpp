// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;

char symbol;
int len = 0; 
char draw;

 cout<<"please enter the symbol:   ";
 cin>> symbol; 

 cout<<"please enter line length:   ";
 cin>> len;

 cout<<"horiozontal, vertical, or diagonal:  "; 
 cin>>draw; 

 for(int i=1; i <= len; i++)
 {	
  if (draw == 'v'){
  	cout<<symbol<<endl;
  if(draw == 'h')
  	cout<<symbol<<endl;
  }
  {
  	if(draw == 'd');
  	for(int I = 0; i < len+1; i++){
  		gotoxy(3+i,5+i);
  		cout<<symbol<<endl;
    }
   }
  }
 }
