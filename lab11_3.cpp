#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
	ifstream source;
	source.open("score.txt");
    float i = 0 ;
    float sum = 0 ;
    float sum2 = 0;
    float M,N;
    string n;
    while (getline(source,n)){
        sum += atof(n.c_str()); ;
        sum2 += pow(atof(n.c_str()),2);
        i++;
    }
    cout << "Number of data = "<< i <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< (1/i)*(sum)<<"\n" ;
    M = (1/i)*(sum) ;
    N = sum2/i;
    cout << "Standard deviation = " << sqrt(N-(M*M)) ;
}    
