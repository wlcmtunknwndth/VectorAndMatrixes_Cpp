#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class vect
{
	int dim;
	double *V;
	
	public:
		int num;
		static int count;
		
		vect(int d, double *x);
		vect(int d);
		vect(vect &b);
		vect()
		{
			
		}
		~vect()
		{
			
		}
		
		void set(int d, double *x);
		
		void print();
		
		vect& operator=(const vect &r)
		{
			for(int i=0; i < r.dim; i++)
			{
				this->V[i]=r.V[i];
			}
			return *this; 
		}
		vect operator+(vect &r);
		friend vect operator-(vect l, vect r);
		vect& operator-();
		double operator*(vect &r);
		friend vect& operator*(double k, vect r);
		double operator[](int i);
		
};	

vect vect::operator+(vect &r)
{
	vect tmp;
	for(int i=0; i<(sizeof(r)/sizeof(int)); i++)
	{
		tmp.V[i]=tmp.V[i]+r.V[i];
	}
	return tmp;	
}

vect& vect::operator=(const vect &r)
{
	for(int i=0; i < r.dim; i++)
	{
		this->V[i]=r.V[i];
	}
	return *this; 
} 




int main()
{
	vect first;
	vect second;
	first+second;
	first=second; 
//	first=vect(3, {1, 2, 3});
//	second=vect(3, {1, 2, 3});
	return 0;
}
