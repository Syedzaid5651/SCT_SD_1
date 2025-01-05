#include<iostream>
#include<iomanip>

using namespace std;

double ctof(double c)
{
    return (c * 9/5) + 32;
}
double ctoK(double c)
{
    return c + 273.15;
}
double ftoc(double f)
{
    return (f - 32) * 5/9;
}
double ftok(double f)
{
    return (f - 32) * 5/9 + 273.15;
}
double ktoc(double k)
{
    return k - 273.15;
}
double ktof(double k)
{
    return (k - 273.15) * 9/5 + 32;
}
double contTemp(double tempV ,char form ,char to)
{
    if( form =='c' && to =='f')
    {
        return ctof(tempV);
    }
    else if( form =='c' && to =='k')
    {
        return ctoK(tempV);
    }else if( form =='f' && to =='c')
    {
        return ftoc(tempV);
    }else if( form =='f' && to =='k')
    {
        return ftok(tempV);
    }else if( form =='k' && to =='c')
    {
        return ktoc(tempV);
    }else if( form =='k' && to =='f')
    {
        return ktof(tempV);
    }
    else
    {
        cout<<"invalid choice\n";
        return -1;
    }
}

int main()
{
    double tempV;
    char form,to;

    cout<<"enter the temp valve:";
    cin>>tempV;

    cout<<"enter the  currnt scale (c for celsius ,f for fahrenheit, k for kelvin)";
    cin>>form;
    cout<<"enter the scale to convert (c for celsius ,f for fahrenheit, k for kelvin)";
    cin>>to;

    double outputV= contTemp(tempV,form,to);
    if (outputV!= -1)
    {
        cout<< fixed <<setprecision(2);
        cout<< "converted value :"<< outputV<<endl;
    }
    return 0;
}
