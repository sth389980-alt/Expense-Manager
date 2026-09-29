#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"1.Add expense"<<endl;
    cout<<"2.Show expense"<<endl;
    cout<<"3.Total expense"<<endl;
    cout<<"4.Delete expense"<<endl;
    cout<<"5.Exit";
    vector<int>expense;
    int num;
    cin>>num;
    while(num!=5)
    {
        if(num==1)
        {
            int x;
            cout<<"Add expense:";
        cin>>x;
        expense.push_back(x);
        }
        if(num==2)
        {
            cout<<"Show expense:";
            for(int i=0;i<expense.size();i++)
            cout<<(i+1)<<"."<<expense[i]<<" "<<endl;
        }
        if(num==3)
        {
            int sum=0;
            cout<<"Total expense:";
            for(int i=0;i<expense.size();i++)
            {
            sum+=expense[i];
            }
            cout<<sum<<endl;
          }
          if(num==4)
          {
            cout<<"Delete expense"<<endl;
            int index;
            cin>>index;
            if(index >= 1 && index <= expense.size())
            {
            expense.erase(expense.begin()+(index-1));
            cout<<"Expense deleted"<<endl;
          }
          else
          {
            cout<<"Invalid index"<<endl;
          }
        }
        cout<<"\nEnter next choise (1-5)or press5 to exit:";
        cin>>num;
    }
cout <<"Program exited successfully."<<endl;

return 0;
    }

