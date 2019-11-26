#include<iostream.h>
#include<math.h>
using namespace std;

double func(double x){
	return exp(x) - 4 * x;
	// change the equation according to the question
}

void root(int n, float a, float b){
	int i;
	double c;
	for (i = 0; i <= n; i++){
		if (func(a) * func(b) > 0){
			cout << "Check values of 'a' and 'b'";
			break;
		}

		c = b - ((func(b) * (b - a)) / (func(b) - func(a)));
		if (func(c) == 0.0){
			break;
		}else if (func(a) * func(c) < 0){
			b = c;
		}else{
			a = c;
		}


		if (i < n){
			cout << "Root at " << i + 1 << " iteration: " << c << endl;
		}else{
			cout << "Value of root is: " << c << endl;
		}
	}
}

int main(){
	//clrscr();
	double a, b;
	int n;
	cout << "Enter values for interval (a,b)" << endl;
	do{
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
	} while (func(a) * func(b) > 0);
	cout << "Enter no. of Iteration: ";
	cin >> n;
	root(n, a, b);
	//getch();
	return 0;
}
