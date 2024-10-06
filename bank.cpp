//bank database
#include<iostream>
using namespace std;
class bank
{
    public:
    string name,ac;
    int bal,wa,da;
    void info()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter accouunt number:";
        cin>>ac;
        cout<<"Enter initial Balance:";
        cin>>bal;
    }
    void deposite()
    {
        cout<<"Enter amount to deposite:";
        cin>>da;
        bal+=da;
        cout<<"Balance aftet deposite:"<<bal<<endl;
    }
    void withdrawl()
    {
        cout<<"Enter amount for withdrawl:";
        cin>>wa;
        if(wa<=bal)
        {
            bal-=wa;
            cout<<"Balance after withdrawl:"<<bal<<endl;
        }else{
            cout<<"Balance is NOT sufficient"<<endl;
            cout<<"Available Balance:"<<bal<<endl;
        }
    }
    void display()
    {
        cout<<name<<"\t\t"<<ac<<"\t\t\t\t"<<bal<<endl;
    }
};
int main()
{
    class bank b[10];
    int i,count=0,ch,n,flag=0;
    string tac;
    do{
        cout<<"1.Add user\t2.Deposite\t3.Withdrawl\t4.display\t5.Exit\nEnter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1://add user
                   cout<<"Enter no.of users:";
                   cin>>n;
                   n+=count;
                   for(i=count;i<n;i++)
                   {
                       cout<<i+1<<")";
                       b[i].info();
                       count++;
                   }
                   break;
            case 2://deposite
                   cout<<"Enter account number for deposite:";
                   cin>>tac;
                   for(i=0;i<count;i++)
                   {
                       if(b[i].ac==tac)
                    {
                        b[i].deposite();
                        flag=1;
                        break;
                    }       
                   }
                   if(flag==0)
                   {
                       cout<<"\nAccount does NOT exist"<<endl;
                   }
                   flag=0;
                   break;
                   
            case 3://withdrawl
                   cout<<"Enter account number for withdrawl:";
                   cin>>tac;
                   for(i=0;i<count;i++)
                   {
                       if(b[i].ac==tac)
                    {
                        b[i].withdrawl();
                        flag=1;
                        break;
                    }       
                   }
                   if(flag==0)
                   {
                       cout<<"\nAccount does NOT exist"<<endl;
                   }
                   flag=0;
                   break;
                   
            case 4://display
            if(count>0)
            {
                   cout<<"Sr.no\tName\tAccount number\tBalance"<<endl;
                   for(i=0;i<count;i++)
                   {
                       cout<<i+1<<")\t\t";
                       b[i].display();
                   }
            }else{
                cout<<"No user found"<<endl;
            }
            
                   break;
                   
           
        }
    }while(ch!=5);
    return 0;
}
