#include<stdio.h>
#include<math.h>

int main(){
	
	int a = 4, b = 3;

	int sum = a+b; // summation
	int sub = a-b; // substraction
	int mul = a*b; // multiplication
	int div = a/b; // divition
	int rem = a%b; // reminder when a/b

	
	double sq = sqrt(a); // square root
	double po = pow(a,b); // a^b
	int fl = floor((double)a/b); // floor
	int cl = ceil((double)a/b); // ceil 
	int rnd = round((double)a/b); // round
	int ab = abs(b-a); // absulate value

	double pi = acos(-1.0);  // pi = 3.1416
	double theta_deg = 45.0; // theta in degree
	double theta_red = (pi*theta_deg)/180.0; // theta in radian
	
	double cos_theta = cos(theta_red); // cos(theta)
	double sin_theta = sin(theta_red); // sin(theta)
	double tan_theta = tan(theta_red); // tan(theta)

	double value = 0.707;
	double acos_theta_red = acos(value); // acos(theta)   '''inverse 
	double asin_theta_red = asin(value); // asin(theta)   returns theta
	double atan_theta_red = atan(value); // atan(theta)   in radian'''

	double acos_theta_deg = (180.0/pi)*acos_theta_red; // now you  
	double asin_theta_deg = (180.0/pi)*asin_theta_red; // get values
	double atan_theta_deg = (180.0/pi)*atan_theta_red; // in degrees

	return 0;

}