#include <iostream>
#include <cmath>
using namespace std;

const int N = 32;
const int M = 72;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}


void updateImage(bool img[][M],int bs,int xi,int yi){
	int row=0,col=0;
	
	while(row<N){
		while(col<M){
			double a = pow(row-xi,2);
			double b = pow(col-yi,2);
			double c = pow(a+b,0.5);
			if(c+1 <= bs) {
				img[row+1][col+1]= true;
			
			}
			col++;
		}
		col=0;
		row++;
		
	}
	
	
	
}

void showImage(const bool img[][M]){
	
	int row =0 ,col = 0;
	 
	while(row <N){
		while(col <M){
			if(row ==0 or row==N-1){
				cout <<"-";
			}
			else if (col==0 or col ==M-1 ){
				cout << "|";
			}
			else if (img[row][col] == 1){
				cout <<"*";
			}
			else{
				cout<<" ";
			}
			
			col++;
		}
		
		col=0;
		row++;
		cout<<endl;
		
	}
	
	
}
