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
	z =(x*y)*((1-(x*y))/(x+y));
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

string ran_input() {     //returns the binary value as a string after input
	float s;
	string s2 = "";
	for(int i=0;i<8;i++) {
		cin >> s;     //cin in c++ is like scanf in c
		string s1 = tobin(s);
		s2 = s2.append(s1);
	}
	cout << s2 << endl;   // cout is like printf
	return s2;
}


int binaryToDecimal(int n) //converts the binary string to decimal int
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

float pop_dec(string s3) { //converts binary int to binary float and ecimal float but only returns decimal float
	string ran_i =s3;
	int r_d = stoi(ran_i);
	float ran_binf = static_cast<float>(r_d); //binary value of number
	int ran_dec = binaryToDecimal(r_d);
	float ran_decf = static_cast<float>(ran_dec); //decimal value
	cout << ran_decf << endl;
	return ran_decf;

}

string x1s = ran_input();//binary strings
string x2s = ran_input();
string x3s = ran_input();
string x4s = ran_input();

float x1b = stof(x1s);//binary floats
float x2b = stof(x2s);
float x3b = stof(x3s);
float x4b = stof(x4s);

float x1d = (pop_dec(x1s)/100);//decimal floats
float x2d = (pop_dec(x2s)/100);
float x3d = (pop_dec(x3s)/100);
float x4d = (pop_dec(x4s)/100);


string yy1s = ran_input();
string y2s = ran_input();
string y3s = ran_input();
string y4s = ran_input();

float yy1b = stof(yy1s);
float y2b = stof(y2s);
float y3b = stof(y3s);
float y4b = stof(y4s);


float yy1d= (pop_dec(yy1s)/100);
float y2d = (pop_dec(y2s)/100);
float y3d = (pop_dec(y3s)/100);
float y4d = (pop_dec(y4s)/100);

float v1 = obj_function(x1d,yy1d);//decimal value of v using x and y
float v2 = obj_function(x2d,y2d);
float v3 = obj_function(x3d,y3d);
float v4 = obj_function(x4d,y4d);

float v_avg = (v1 +v2 + v3 + v4);//some calculations, not needed for now


float v1_avg = v1/v_avg;
float v2_avg = v2/v_avg;
float v3_avg = v3/v_avg;
float v4_avg = v4/v_avg;

void swap(float *xp,float *yp) 
{ 
    float temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(float arr[], float n) //sorting v values
{ 
    int i,j, max_idx;
  
    for (i = 0; i < n-1; i++) 
    { 
        
        max_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] > arr[max_idx]) 
            max_idx = j; 
  
        swap(&arr[max_idx], &arr[i]); 
    } 
} 
float test[] = {1,2,3,4};
float sort[] = {v1, v2, v3 ,v4};//sorting array
float n = sizeof(sort)/sizeof(sort[0]);




int main() {

//pop_dec();
selectionSort(sort,n);//arrays of v are sorted now, need to print associated binary values of x and y of the v in this array after it has been sorted
int m;
for(m=0;m<4;m++)
	cout<< sort[m];





}



