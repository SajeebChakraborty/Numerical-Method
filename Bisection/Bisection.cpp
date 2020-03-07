#include<bits/stdc++.h>
using namespace std;
class Bisection_Method{

public:
    double a=0,b=0,c;
    double bisection(double x){

        return x*x*x-x-1;


    }
   void find_a(){

        while(bisection(a)>=0){

            a--;

        }

    }
     void find_b(){

        while(bisection(b)<=0){

            b++;

        }

    }
    void evulate(){

        while((b-a)>=0.01){

            c=(a+b)/2;
            if(bisection(c)==0.00){

                break;

            }
            else if((bisection(a)*bisection(c))>0){

                a=c;


            }
            else {

                b=c;

            }
        }
    cout << c << endl;

    }





};
int main()
{

   Bisection_Method sample;
   sample.find_a();
   sample.find_b();
   sample.evulate();








}
