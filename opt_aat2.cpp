#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>
using namespace std;
#define LOWERLIM 0.5
#define BITS 8


//Objective function
float obj_function(float x, float y) {
	float z;
	z = ((1-(x*y))/(x+y));
	return z;
}

//Population generation
string tobin(float random_num) {
	string bin ="" ;

	if( random_num  > LOWERLIM)
		bin.append("1");
	else
		bin.append("0");

	return bin;


}

string ran_input() {
	float s;
	string s2 = "";
	for(int i=0;i<8;i++) {
		cin >> s;
		string s1 = tobin(s);
		s2 = s2.append(s1);
	}
	cout << s2 << endl;
	return s2;
}


int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

float pop_dec() {
	string ran_i = ran_input();
	int r_d = stoi(ran_i);
	int ran_dec = binaryToDecimal(r_d);
	float ran_decf = static_cast<float>(ran_dec);
	cout << ran_decf << endl;
	return ran_decf;

}


float x1 = (pop_dec()/100);
float x2 = (pop_dec()/100);
float x3 = (pop_dec()/100);
float x4 = (pop_dec()/100);

float yy1= (pop_dec()/100);
float y2 = (pop_dec()/100);
float y3 = (pop_dec()/100);
float y4 = (pop_dec()/100);

float v1 = obj_function(x1,yy1);
float v2 = obj_function(x2,y2);
float v3 = obj_function(x3,y3);
float v4 = obj_function(x4,y4);

float v_avg = (v1 +v2 + v3 + v4)/4;


float v1_avg = v1/v_avg;
float v2_avg = v2/v_avg;
float v3_avg = v3/v_avg;
float v4_avg = v4/v_avg;

void init_table() {
	cout << setw(5) << "Str No." << setw(10) << " Population, x" << setw(10) << "Population, y" << setw(10) << "Binary, x" << setw(10) << "Binary, y" << endl;
	     << setw(5) << "1"        << setw(10) << x1		      << setw(10)     << y1 <<   setw(10) <<
	     << setw(5) << "2" 	      << setw(10) << x2           << setw(10)   <<  y2 << setw(10) <<   
	     << setw(5) << "3"	      << setw(10) << x3           << setw(10) << y3 << setw(10) << 
	     << setw(5) << "4"        << setw(10)


}

int main() {

//pop_dec();
init_table();


}



