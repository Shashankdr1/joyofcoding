#include<iostream>
using namespace std;

class singleton{
	static singleton *instance;
	int dt;
	
	singleton(){
		dt=0;
	}
	public:
	static singleton *getinstance(){
		if(!instance)
		instance=new singleton;
		return instance;
	}

	int getdt(){
		return this->dt;
	}
	void setdt(int dt){
		this->dt=dt;
	}
};
singleton*singleton::instance=0;
int main()
{
	singleton *s=s->getinstance();
	cout<<s->getdt()<<endl;
	s->setdt(200);
	cout<<s->getdt()<<endl;
	return 0;
}

	

	
