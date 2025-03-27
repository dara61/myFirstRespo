#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(){
	cout<<"/e[31m"<<"RED";
}
// /*
class String{ 
	protected:
		char *buffer;
		int len;
	public:
		// Construction and destructor
		String()
    	String(const char *p) //String a("dddd"); need to be able to implement such initialization
		String(const String &s) // copy constructor, first release the old memory
		
		~String ();
		String &append(const String &s);
		String &append(const char *s);
   		// operator overloading
		char &operator [](int i);
		String &operator =(String &s);
	 	// Reload = operator and then overload this function is feasible? Proof of feasibility
		String &operator =(const char *p); //s1 = "ddddd"; needs to be able to implement such an assignment
		
		bool operator ==(String &s);
		bool operator !=(String &s);
    	bool operator >(String &s); //Implement chain programming, return value is reference? Or bool?
		bool operator <(String &s);
		
		String &operator +=(const string& str);
    	String &operator +=(const char* s);

		friend ostream& operator<<(ostream& out, String& s);
		friend istream& operator>>(istream& in,  String& s);
};
//*/