int main()
{

     person p1("Amanullah Rafat",23303433,100000);



    int option;
    double amount;
    do
    {
        cout<<"1.Deposit " <<endl;
        cout<<"2.Withdraw " <<endl;
        cout<<"3.Balance Check " <<endl;
        cout<<"4.Show Information " <<endl;
        cout<<"5.Exit " <<endl;

        cout<<"Enter your choice : ";
        cin>>option;

      switch(option)
      {
          case 1:
        cout<<"Enter Deposit Amount : ";
        cin>>amount;
        p1. Deposit( amount);
        break;

          case 2:
              cout<<"Enter Withrawn Amount : ";
              cin>>amount;
             p1. Withdraw(amount);
              break;

          case 3:
            p1.CheckBalance();
            break;

          case 4:
              showInfo(p1);
              break;

          case 5:
            cout<<"Invalid Choice..."<<endl;

          default:
            cout<<"Thanks for Using our system ...."<<endl;



      }

    }
    while (option!=5);
    return 0;
}