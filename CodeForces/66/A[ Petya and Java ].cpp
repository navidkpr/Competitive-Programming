#include <iostream>

using namespace std;

int main()
{
	unsigned long long int n;
	cin >> n;
	if (n > 0)
	{
   		if (n <= 127)
   		{
  		  	cout << "byte";
  	     	return 0;
 	 	}	
   		if (n <= 32767)
   		{
        	cout << "short";
   	    	return 0;
   		}
    	if (n <= 2147483647)
    	{
       	 	cout << "int" << endl;
        	return 0;
    	}
    	if (n <= 9223372036854775807)
    	{
        	cout << "long" << endl;
        	return 0;
    	}
    	cout << "BigInteger" << endl;
    }
    return 0;
}
