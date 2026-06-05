#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		char brand[20];
		char color[14];
		int year;
	public:
		void setBrand(char *b){
			strcpy(brand,b);
		}
		void setColor(char *c){
			strcpy(color,c);
		}
		void setYear(int y){
			year=y;
		}
		char *getBrand(){
			return brand;
		}
		char *getColor(){
			return color;
		}
		int getYear(){
			return year;
		}
		void Show_data(){
			cout<<getBrand()<<'\t'<<getColor()<<'\t'<<getYear()<<endl;
		}
			

};
		
int main(){
	Car mycar;

	mycar.setBrand("Toyota");
	mycar.setColor("Red");
	mycar.setYear(2025);
	mycar.Show_data();
	
	mycar.setBrand("Blue");
	mycar.setColor("Ford");
	mycar.setYear(2025);

	cout<<" \n Output Data for Updated\n";
		mycar.Show_data();
}
