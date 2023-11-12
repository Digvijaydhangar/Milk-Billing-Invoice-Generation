#include<iostream>
using namespace std;
class Milk
{
    public:
        float M[7][2];
        string name;
        float F[7][2],G[7][2],pay,rate;
        float Total_G;
        void getM()
        {
            cout<<"Enter The collected Milk and its Fat as per day shift "<<endl;

            for(int i =0 ; i < 7 ; i++ )
            {
                cout<<" Enter the Milk of "<<i+1<< "day Morning shift: ";
                cin>>M[i][0];
                cin>>F[i][0];
                cout<<" Enter the Milk of "<<i+1<< "day Evening shift: ";
                cin>>M[i][1];
                cin>>F[i][1];
            }
        }
        void getName()
        {
            cout<<"Enter THe Farmer Name: ";
            cin>>name;

        }
        void CalG()
        {
            Total_G = 0;
            for(int i = 0 ; i < 7 ; i++)
            {
                for(int j = 0 ; j < 2 ; j++)
                {
                    G[i][j] = (M[i][j] * F[i][j]);
                    Total_G = Total_G + G[i][j];
                }
            }
            
        }
        void CalP()
        {
            cout<<"\n Enter The Milk Rate as per Fat ";
            cin>>rate;
           // pay = int(rate*Total_G);
        }
        void Print()
        {
            cout<<"Farmer Name : "<<name;
            cout<<"\t\tRate of Milk per Fat : "<<rate<<endl<<endl;
            cout<<"\t   Shift 1\t\t\t\tShift 2\t\t"<<endl;
            cout<<"\tMilk\tFat\t G";
            cout<<"\t\tMilk\tFat\t G"<<endl;
            for(int i = 0 ; i < 7 ; i++)
            {
               
                cout<<" Day "<<i+1<<"   "<<M[i][0]<<"\t"<<F[i][0]<<"\t"<<G[i][0];
                cout<<"\t\t"<<M[i][1]<<"\t"<<F[i][1]<<"\t"<<G[i][1]<<endl;
                
            }
            cout<<"\nTotal General Fat : "<<Total_G<<endl;
            cout<<"Total Payout to Farmer : "<<(Total_G * rate);
        }
};
int main()
{   
    Milk m1;
    m1.getName();
    m1.getM();
    m1.CalP();
    m1.CalG();
    m1.Print();
    return 3;
}