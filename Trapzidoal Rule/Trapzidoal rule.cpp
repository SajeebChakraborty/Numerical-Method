#include<bits/stdc++.h>
using namespace std;
class Trapezoidal{

    public:

    double a,b,h,x[15],y[15];
    int n;

    double func(double x){

       return 1/(1+x*x);

    }
    void evulate(){

        cin >> a >> b >> n;
        h=(b-a)/n;
        double sum=0;
        for(int i=0;i<=n;i++){

            x[i]=a+h*i;
            y[i]=func(x[i]);
            if(i!=0 && i!=n){

                sum=sum+h*y[i];


            }


        }
        sum=sum+(h/2.0*(y[0]+y[n]));
        cout << sum << endl;



    }


};

int main(){


    Trapezoidal sample;
    sample.evulate();


}
