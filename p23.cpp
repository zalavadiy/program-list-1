//220130318058
//krisha zalavadiya
#include<iostream>
using namespace std;
class Convert
{
	private:
		double f;
		
	public:
		void getdata()
		{
			cout<<"enter thefahrenheit::";
			cin>>f;
		}
	     void putdata()
		{      double c;
			 c= (f - 32)*5/9;
			 cout<<"celcius=="<<c;
		}
};
int main()
{
	Convert fc;
	fc.getdata();
	fc.putdata();
	 return 0;	
}

