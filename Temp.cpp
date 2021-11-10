#include <iostream>
#include <thread>
//#include <mutex>
//#include <shared_mutex>
#include <vector>
//#include <ctime>
#include <chrono>
//#include <memory>

using namespace std;
using namespace chrono;



/*
class Klasa
{

shared_mutex share;
vector<int> wektor;


public:
	Klasa()
	{
		wektor=vector<int>();
	}
	Klasa(int x)
	{
		Klasa();
		wektor.push_back(x);
		
	}
	
	void wsad(int x)
	{
		
		
		lock_guard<shared_mutex> blokada(share);
		wektor.push_back(x);	
	}
	void zobacz()
	{
		lock_guard<shared_mutex> blokada(share);
		for(auto y: wektor)
		{
			cout<<y<<endl;
		}
		cout<<"The End!"<<endl;
	}
	
}; 




void ogladaj(Klasa &x)
{
	x.zobacz();
}
*/


class MyClass
{
int value;



public:
MyClass(int x): value(x){}
int Get() const
{
	return value;
	}	
	

};

constexpr int rows{10000};
constexpr int columns{1000};
 int elements[rows][columns];
 int *pElements[rows][columns];



template <typename... pakiet>
void fff(pakiet ... pack)
{
	cout<<"Oto fukncja szablonowa z wieloma parametrami!"<<endl;
	(cout << ... <<pack);
}





class Kwat
{
static thread_local int common;
public:
	void set(int x)
	{
		this->common=x;
	}
int get()
{
	return this->common;
	}	
};
int thread_local yKwat::common=1;

void funkcja()
{
	Kwat temp;
	cout<<temp.get()<<endl;
}


int main()
{

	/*
 	for(int i=0;i<rows;i++)
 	{
 		for(int j=0;j<columns;j++)
 		{
 			elements[i][j]=i*j;
 			pElements[i][j]=new int{elements[i][j]};
		 }
	 }
	 
	 auto start=high_resolution_clock::now();
	 
	 for(int i=0;i<rows;i++)
	 {
	 	for(int j=0;j<columns;j++)
	 	{
	 		const int result{elements[i][j]};
		 }
	 }
	 auto end=high_resolution_clock::now();
	 
	 auto dur=end-start;
	 cout<<"Pierwszy wariant: "<<duration_cast<microseconds>(dur).count()<<endl;
	 
	 start=high_resolution_clock::now();
	 	 for(int i=0;i<rows;i++)
	 {
	 	for(int j=0;j<columns;j++)
	 	{
	 		const int result{elements[j][i]};
		 }
	 }
 	end=high_resolution_clock::now();
 	dur=end-start;
 	cout<<"Drugi wariant: "<<duration_cast<microseconds>(dur).count()<<endl;
 	
 	start=high_resolution_clock::now();
 	for(int i=0;i<rows;i++)
 	{
 		for(int j=0;j<columns;j++)
 		{
 			const int result{*(pElements[j][i])};
		 }
	 }
	 end=high_resolution_clock::now();
	 dur=end-start;
	 cout<<"Trzeci wariant: "<<duration_cast<microseconds>(dur).count()<<endl;
	 
	 int rdzenie=thread::hardware_concurrency();
	 cout<<rdzenie<<" rdzeni posiadamy"<<endl;
 */
 
 	Kwat ob;
 	thread wt{funkcja};
 	ob.set(9);
 	cout<<ob.get()<<endl;
 	
 	wt.join();
 
 
   
   
   return 0;
   
}
