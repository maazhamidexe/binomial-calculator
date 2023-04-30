#include <iostream>
using namespace std;


double fact(double n)
{   
    for (double i = n-1; i>0; i--)
    {
        n = n * i;
    }
    return n;
}
double powe(double x, double y)
{   double ans = 1;
    if (y==0)
    {
        return 1;
    }
    else
    
    for (double i = 0; i<y;i++)
    {
        ans = ans*x;
    }

    return ans;
}

double comb(double n, double r)
{   
    
    if (n==r||r==0)
    return 1;

    
    double x = (fact(n)/(fact(n-r)*fact(r)));
    return x;

}
int main()
{
    double  p, q, n, upper, lower, prob=0;
    
    
    cout <<"Enter p : ";
    cin >>p;
    cout <<"\nEnter n : ";
    cin >>n;

    cout <<"\nEnter lower limit: ";
    cin >>lower;

    cout <<"\nEnter upper limit: ";
    cin >>upper;

    

    q = 1-p;
    double f = 0;
    if (lower != upper){
    for (double i = lower; i<=upper ; i++)
    {
        f = n - i;
        prob = prob + comb (n,i) * powe(p,i) * powe(q,f);
    }
    cout <<"\n\nThe probabity between "<<upper<<" & "<<lower<<" is "<<prob;
    }
    else
    prob = comb(n,lower)*powe(p,lower) * powe(q,(n-lower));

    cout <<"\n\nThe probabity at x = "<<lower<<" is "<<prob;

    return 0;
}