#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <sstream>
using namespace std;

int main(){

    int length;
    string moon = "moveonto";
	string moov = "moveover";
	string pion = "pileonto";
	string piov = "pileover";
	string end = "quit";
	
	while(cin >> length){
		cin.ignore();
		vector< int > myvec[length];
	    vector< int >::iterator it;
	    for( int i=0 ; i < length ; i++ ){
	    	myvec[i].push_back(i);
	    }
	    /*
	    int n1=2,n2=7,n3=9,n4=8;
	    myvec[0].push_back(n1);
	    myvec[0].push_back(n2);
	    myvec[0].push_back(n3);
	    myvec[0].push_back(n4);
	    */
	    char len[15];
	    
	    while( gets(len) ){
	    	if( len[0] == 'q' )
			  break;
	    	char act1[4];
	        char act2[4];
	        int a1,a2;   
	    	sscanf( len ,"%s %d %s %d",&act1,&a1,&act2,&a2 );
			string A;
			string A1;
			string A2;
			A1=act1;
			A2=act2;
			A=A1+A2;
			if(A == moon){
				while(myvec[a1].size()!=1){
					if(myvec[a1].size()==0){
						for(int iy=0;iy<length;iy++){
							it=myvec[iy].begin();
							for(int ix=0;*it!=a1;it++,ix++);
							while(myvec[a1].size()!=1){
							}
						}
				    }
				    else{
				    	int temp = myvec[a1].back();
					    myvec[a1].pop_back();
					    myvec[temp].push_back(temp);
				    }
				}
				while(myvec[a2].size()!=1){
					int temp = myvec[a2].back();
					myvec[a2].pop_back();
					myvec[temp].push_back(temp);
				}
				int temp = myvec[a1].front();
				myvec[a1].pop_back();
				myvec[a2].push_back(temp);
			}
			else if(A == moov){
			}
			else if(A == pion){
			}
			else if(A == piov){
			}
			for(int iy=0;iy<10;iy++){
        	it=myvec[iy].begin();
        	for(int ix=0;it!=myvec[iy].end();it++,ix++){
        		cout << *it << " ";
        	}
        	cout << endl;
	    	}
        
        }
	} 	
	
	return 0;
}
