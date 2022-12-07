#include <iostream>

using namespace std;
int x,NumberArray[10];
void my_menu()
{
  cout<< "---------------------------------------------------------------------------------"<<endl;
  cout<< "[1] Add values to array                                                          "<<endl;
  cout<< "[2] Print array                                                                  "<<endl;
  cout<< "[3] Display the number of Positive and Negative numbers                          "<<endl;
  cout<< "[4] Display the number of even and odd numbers                                   "<<endl;
  cout<< "[5] Exit                                                                         "<<endl;
  cout<< "---------------------------------------------------------------------------------"<<endl;
}
void print_1()
{
    for(int i=0;i<10;i++)
    {
        cout<< "Enter integer:"<<endl;
        cin>>NumberArray[i];
    }
}
void print_2()
{
    for(int i=0;i<10;i++)
    {
        cout<<NumberArray[i]<<" ";
    }
}
void print_3()
{
    int positive=0,negative=0;
    for(int i=0;i<10;i++)
    {

        if(NumberArray[i]>=0)
        {
         positive=positive+1;
        }
        else
        {
        negative=negative+1;
        }
    }
    cout<<"Number of positive :"<<positive<<endl;
    cout<<"Number of negative :"<<negative<<endl;

}
void print_4()
{
    int odd=0,even=0;
    for(int i=0;i<10;i++)
    {

        if(NumberArray[i]%2==1)
        {
         odd=odd+1;
        }
        else
        {
        even=even+1;
        }
    }
    cout<<"Number of Odd :"<<odd<<endl;
    cout<<"Number of eeven :"<<even<<endl;

}

int main()
{
    char t;
    my_menu();
    do{

    int NumberArray[10];
    for(int i=0;i<10;i++)
    {
        NumberArray[i]=0;
    }

    cout<< "Enter a option(1-5) :"<<endl;
    cin>>x;
    switch (x)
    {
  case 1:
     print_1();
    break;
  case 2:
    print_2();
    break;
  case 3:
    print_3();
    break;
  case 4:
     print_4();
     break;
  case 5:
     cout<<"Exit"<<endl;
     break;
  default :
    cout<< "Erorr"<<endl;
    break;
    }
    cout<<endl;
    cout<< "Do you want to continue the operation:"<<endl;
    cin>>t;
    if(t=='y'||t=='Y')
    {
        x=6;
    }
    else
    cout<<endl;
}while(x==6);
    return 0;
}
