#include<bits/stdc++.h>
using namespace std;
class Newton_raphson{

public:
    double x=2000,h;
    double func(double x){

        return x*x*x - x*x + 2;


    }
    double deriv_func(double x){

        return 3*x*x - 2*x;


    }
    void evulate(){
        h= func(x)/deriv_func(x);
        while(abs(h)>=0.001){

            h = func(x)/deriv_func(x);
            x=x-h;



        }
    cout << x;
    }

};


int main()
{
    Newton_raphson sample;
    sample.evulate();


}
