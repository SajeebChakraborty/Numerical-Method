#include<bits/stdc++.h>
using namespace std;
int n;
double x[1005],y[1005][1005],temp,xp;
class Newton_Forward{

public:
    double cal_u(double u, double p){

            temp=u;
            for(int i=1;i<p;i++){

                temp = temp*(u-i);


            }

            return temp;


    }
    double fact(double p){

        double fact=1;
        for(int i=2;i<=p;i++){

            fact=fact*i;


        }
    return fact;

    }
    void evulate(){

        for(int i=1;i<n;i++){

            for(int j=0;j<n-i;j++){

                y[j][i]=y[j+1][i-1]-y[j][i-1];


            }

        }
        cin >> xp;
        double u= (xp-x[0])/(x[1]-x[0]);
        double sum=y[0][0];
        for(int i=1;i<n;i++){

            sum=sum+(cal_u(u,i)*y[0][i])/fact(i);



        }
        cout << sum << endl;

    }





};
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){

      cin >> x[i] >> y[i][0];

    }
    Newton_Forward sample;
    sample.evulate();






}
