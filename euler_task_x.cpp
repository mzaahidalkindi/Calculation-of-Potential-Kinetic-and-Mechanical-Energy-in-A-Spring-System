#include<iostream>
using namespace std;

double  vexact(double x, double t)
{
    double result;
    result = -x*t;
    return (result);
}
double xexact(double x, double t)
{
    double result;
    result = -x*t*t/2;
    return (result);
}
int main(){

    double m     = 1.0;
    double k     = 1.0;
    double dt    = 0.2;
    double x     = 1.0;
    double v, t  = 0.0;
    double Ep, Ek, Em;
    double xcalc, vcalc;

    cout <<"t"<<"\t"<<"v"<<"\t"<<"x"<<"\t"<<"xcalc"<<"\t"<<"vcalc"<<"\t"<<"Ek"<<"\t"<<"Ep"<<"\t"<<"Em"<<"\n";
    cout << endl;
    while(t < 20)
    {

        v = v - x*dt - (v*dt*dt)/2;
        x = x + v*dt;
        xcalc = xexact(x,t);
        vcalc = vexact(x,t);
        Ek = m*v*v/2;
        Ep = (k*x*x)/2;
        Em = Ek + Ep;
        cout << fixed; cout.precision(2);
        cout <<t<<"\t"<<v<<"\t"<<x<<"\t"<<xcalc<<"\t"<<vcalc<<"\t"<<Ek<<"\t"<<Ep<<"\t"<<Em<<"\n";
        t  = t + dt;
    }

return 0;
}
