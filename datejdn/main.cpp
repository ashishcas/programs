#include <iostream>

using namespace std;


int JulianDate(int mm, int dd, int yyyy)
{
     int MP, YP, T;
    if(mm <= 2)
    {
        MP = 0;
        YP = yyyy - 1;
    }
    else
    {
        MP = int(0.4 * mm + 2.3);
        YP = yyyy;
    }

    T = int(YP / 4) - int(YP / 100) + int(YP / 400);
    int juliandate = 365 * yyyy + 31 * (mm - 1) + dd + T - MP;

    return juliandate;

}

int main()
{
    int M,Y,D,JDN,JDN2,m,d,y;
    while(1)
    {
    cout << "Enter The first date" << endl;
    cin>>D>>M>>Y;
    cout<<"Enter Second date"<<endl;
    cin>>d>>m>>y;
    if((D>0 && D<= 31)&&(M >0 && M<=12) && (Y>=1600 && Y<2100) &&(d>0 && d<= 31)&&( m>0 && m<=12) && (y>=1600 && y<=2100))
    {

   // JDN = (((1461 *(Y + 4800 + (M − 14)/ 12))/ 4) + ((367  *(M − 2 − 12 * ((M − 14) / 12)))/ 12) − ((3 *((Y + 4900 + (M -14)/ 12)/ 100))/ 4) + (D – 32075));


     JDN = JulianDate(D,M,Y);
     JDN2 = JulianDate(d,m,y);
    //cout<<"Days between dates "<<D<<"/"<<M<<"/"<<Y<<" and "<<d<<"/"<<m<<"/"<y<<" is:"<<JDN2-JDN;
       cout<<"Days between dates "<<D<<"/"<<M<<"/"<<Y<<" and " ;
    cout<<d<<"/"<<m<<"/"<<y<<" is :"<<JDN2-JDN<<endl;
    }
    else
    {
        cout<<"wrong date try again"<<endl;
        continue;
    }
    char a;
    cout<<"Run Again (Y/N)?"<<endl;
    cin>>a;
    if(a == 'n' || a == 'N')
    {
        break;
    }
    }
    return 0;
}
