#include<bits/stdc++.h>
using namespace std;
class Secant_method{
    public:
    double a=0,b=0,x;
    double func(double x){

        return x*x*x-x-1;


    }
    void find_a(){

        while(func(a)>=0){

            a--;

        }


    }
    void find_b(){

        while(func(b)<=0){

            b++;

        }


    }
    void evulate(){
        while(1){

            x=b-((b-a)*func(b))/(func(b)-func(a));
            if(fabs(func(a)-func(x))<=0.001){

                break;


            }
            else{

                a=b;
                b=x;

            }

        }

    cout << x << endl;


    }

};

int main(){


    Secant_method sample;
    sample.find_a();
    sample.find_b();
    sample.evulate();


}
