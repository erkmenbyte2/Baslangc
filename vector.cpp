#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class vector {

public:
void uzunlugu_hesapla();
	vector(int x,int y,int z) {
		
		this->x=x;
		this->y=y;
		this->z=z;
		
	}
	friend ostream& operator<<(ostream& os,const vector& v1);	
	private:
		int x,y,z;
	
};
ostream& operator<<(ostream& os,const vector& v1) {
	
	os<<"merhaba"<<v1.x<<""<<v1.y<<v1.z<<endl;
	
	return os;
}
vector::ostream& operator<<(ostream& os,vector v1) {

os<<v1.x*v1.x+v1.y*x+v1.z*v1.z<<endl;

}
int main(int argc, char** argv) {
	
	vector v1(2,3,4);
	

	
	
	
	
	return 0;
}
