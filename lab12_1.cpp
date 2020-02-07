#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    
    int N = sizeof(A)/sizeof(A[0]);
    
    double B[4];
    
    double sum =0,sumpow = 0;
    
    stat(A,N,B);
    
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    
   
    
    return 0;
}

//Write definition of stat() here 
void stat(const double  in[],int num  ,double out[]){
	
	double sum =0,sumpow=0,min=0,max=0;
	int i=0;
	
	
	while (i<num){
		sum+=in[i];
		sumpow+=pow(in[i],2);
		
		
		
		if (max<in[i]){
			
			max=in[i];
			
		}
		
		if (min > in[i]){
			
			min=in[i];
			
		}
		
		
		i++;
	}
	
	
	
	
	
	
	out[0]=sum/num;
	out[1]=pow((sumpow/num)-pow(sum/num,2),0.5);
	out[2]=max;
	out[3]=min;
	
}

