#include<bits/stdc++.h>
using namespace std;
class Lanrange{

public:

    void evulate(){

        int n;
        double p,x[1005],y[1005],sum=0,xp;
        cin >> n;
        for(int i=0;i<n;i++){

            cin >> x[i] >> y[i];


        }
        cin >> xp;
        for(int i=0;i<n;i++){
            p=1;
            for(int j=0;j<n;j++){

                if(i!=j){

                      p=p*(xp-x[j])/(x[i]-x[j]);

                }

            }
            sum=sum+p*y[i];


        }

        cout << sum;



    }




};
int main()
{

    Lanrange sample;
    sample.evulate();

}
