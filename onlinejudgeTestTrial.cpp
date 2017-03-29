#include<iostream>
#include<string>
using namespace std;
class student{
public:
	student(string num,string name,int score);
	void display();
private:
	string Num;
	string Name;
	int Score;
};
student::student(string num,string name,int score){
	Num=num;Name=name;Score=score;
}
void student::display(){
	cout<<Num<<' '<<Name<<' '<<Score<<endl;
}
int main(){
	int N;
	cin>>N;
	student* a[10];
	for(int i=0;i<N;i++){
		string m,n;
		int s;
		cin>>m>>n>>s;
		a[i]=new student(m,n,s);
	}
	for(int i=0;i<N;i++){
		a[i]->display();
				
return 0;
}
