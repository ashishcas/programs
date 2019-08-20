#include <iostream>

using namespace std;

int main()
{
    char a[20],op;
    int i =1,j=1,k =1;
     float test ;
    cout<<"Enter the name of the student:";
    cin>>a;
    while(1)
    {

        float p[3],l[5],t[2],avg =0;
        float max = 0,total =0;
        cout<<"Select a menu choice from the following options.>"<<endl;
        cout<<"a. Project marks"<<endl;
        cout<<"b. Lab marks"<<endl;
        cout<<"c. Test marks"<<endl;
        cout<<"d. Calculate total marks"<<endl;
        cin>>op;
        if(op == 'a')
        {
            while(i<=3)
            {
            cout<<"Enter Project"<<i<<"marks>";
            cin>>p[i];

                if(p[i] >= 0 && p[i] <=100)
                {
                     if(p[i]>max)
                  {
                        max = p[i];
                   }
                    i++;
                }
                else
                {
                    cout<<"Invalid marks entered. Project marks should be between 0 and 100 "<<endl;
                }
            }

           if(i == 4)
           {
              cout<<"The Project marks considered for grading are "<<max<<endl;
           }
            if(i>4)
            {
                cout<<"Select other option"<<endl;
            }

        }
        else if(op == 'b')
        {
            while(j<= 5)
            {
                cout<<"Enter marks of lab"<<j<<"marks>";
                cin>>l[j];
                if(l[j] >= 0 && l[j] <= 100)
                {
                    avg += l[j];
                    j++;
                }
                else
                {
                    cout<<"The marks entered is invalid. Lab marks should be between 0 and 100"<<endl;
                }
            }
            if(j > 6)
            {
                cout<<"Select other option"<<endl;
            }
            if( j == 6)
            {
                avg = avg/5;
                cout<<"The lab marks considered for grade are:"<<avg;
            }
        }
        else if(op == 'c')
        {
            while(k<3)
            {
                cout<<"Enter test"<<k<<" marks>";
                cin>>t[k];
                if(t[k] >= 0 && t[k] <= 100)
                {
                    k++;
                }
                else
                {
                    cout<<"The marks entered is invalid. Test marks should be between 0 and 100";
                }

            }
            if(k == 3)
            {
                if(t[2] >= t[1])
                {
                   test = ((2*t[2])+t[1])/3 ;
                    cout<<"The test marks considered for grading are "<<test;
                }
                else
                {
                     test = ((2*t[1])+t[2])/3 ;
                     cout<<"The test marks considered for grading are "<<test;
                }
            }
            if(k>3)
            {
                  cout<<"Select other option"<<endl;
            }
        }
        else if(op == 'd')
        {

             if(i==1 || j == 1 || k == 1 )
             {
                 cout<<"You should select all other choices before selecting this choice."<<endl;
             }
             else
             {
                cout<<"Student name is "<<a<<endl;
                total = max*0.25+avg*0.25+test*0.5;
                cout<<"Total marks obtained = "<<total<<endl;
                if(total >= 90)
                {
                   cout<<"grade-A"<<endl;
                    cout<<"Comments- Outstanding"<<endl;
                }
                if(total >= 80 && total <90)
                {

                    cout<<"grade-B"<<endl;
                    cout<<"Comments- Good"<<endl;
                }
                if(total >= 70 && total <80)
                {
                     cout<<"grade-C"<<endl;
                    cout<<"Comments- Needs to improve"<<endl;
                }
                if(total >= 60 && total <70)
                {
                     cout<<"grade-D"<<endl;
                    cout<<"Comments- - Warning of probation "<<endl;
                }
                if(total < 60)
                {
                     cout<<"grade-F"<<endl;
                    cout<<"Comments- - Failed "<<endl;
                }
                break;
            }


        }

    }
    return 0;
}
