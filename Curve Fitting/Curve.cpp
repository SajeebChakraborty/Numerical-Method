#include<bits/stdc++.h>
using namespace std;
class Curve_fitting{
public:

    void evulate(){

        double ar[1005],br[1005],x=0,xx=0,xy=0,y=0,c,m;
        int n,X;
        cin >> n;
        for(int i=0;i<n;i++){

            cin >> ar[i] >> br[i];

        }
        for(int i=0;i<n;i++){

            x+=ar[i];
            y+=br[i];
            xx+=ar[i]*ar[i];
            xy+=ar[i]*br[i];


        }
        c=(x*xy-y*xx)/(x*x-n*xx);
        m=(y-c*n)/x;
        cin >> X;
        double result= m*X+c;
        cout << result << endl;



    }





};
int main(){

    Curve_fitting sample;
    sample.evulate();


}
