#include<bits/stdc++.h>
using namespace std;
class False_position_method{
public:

    double a=0,b=0,c;

    double False_position(double x){

        return x*x*x-x-1;

    }
    void find_a(){

        while(False_position(a)>=0){

            a--;

        }

    }
    void find_b(){

        while(False_position(b)<=0){

            b++;

        }

    }
    void evulate(){

        while(1){

            c=(False_position(b)*a-False_position(a)*b)/(False_position(b)-False_position(a));
            if(False_position(c)==0.00){

                break;

            }
            else if(fabs(False_position(a)-False_position(c))<=0.001){

                break;

            }
            else if((False_position(a)*False_position(c))>0){

                a=c;

            }
            else{

                b=c;

            }




        }
    cout << c << endl;

    }





};
int main(){

    False_position_method sample;
    sample.find_a();
    sample.find_b();
    sample.evulate();




}
