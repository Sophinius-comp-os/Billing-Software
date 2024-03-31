#include <iostream>
#include <ctime> //for displaying the time 
using namespace std;
float shop();

int main()
{


 char start;
 float shop (void);
 char  choice;
 startL:
 cout <<"Please press H to c start shopping: ";
 start:
 cin>>start;
 if((start=='H') ||(start='h'))
 {
    float total= shop();
    time_t t = time(NULL); //Note how the program displays the real time and date using these functions
    tm* tptr=localtime(&t);

    cout <<" \t Bill Date: ";
    cout << tptr->tm_mday<< "/";
    cout <<1+tptr->tm_mon<< "/";
    cout <<1900+ tptr->tm_year<<endl;
    cout <<"\n";

    cout <<" \t Bill Time: ";
    cout << tptr->tm_hour<<":"<<tptr->tm_min<<":"<<tptr-> tm_sec<<endl;
        cout <<"\n";

    cout <<" Total Bill Amount: "<<total<<endl;
    if(total>50000 &&total<100000)
    {
        total=total-(0.05*total);
        cout<<"Total Discount: 5% "<<endl;
    }
    else if(total>100000&&total < 125000)

    {
       total=total-(0.1*total);
        cout<<"Total Discount: 10% "<<endl;     
    }
    else if (total> 125000&&150000)
    {
        /* code */
        total=total-(0.25*total);
        cout<<"Total Discount: 25% "<<endl;
    }
    else if (total> 150000)
    {
        /* code */
        total=total-(0.5*total);
        cout<<"Total Discount: 50% "<<endl;
    }
    cout<<"Total bill is: "<<total<<endl;
    Again:
        cout <<"Do you want to continue shopping?(y/n) "<<endl;
        cin >>choice;
        if(choice =='y'||choice =='Y')
        {
            goto startL;
        }    
        else if(choice =='n'||choice =='N')
        {
            cout <<"Thank YOu for shopping." << endl;
        } 
        else{
            cout<< "You have entered the wrong choice please press H"<<endl;
            goto Again;
        }   
    
    
     }
     else{
        cout <<"You have enterd the wrong choice, please press H to try again"<<endl;
        goto start;
     }

     return 0;

}

     float shop()
     {
       
      
        
        shop:
            char choice;
            char product;
            int quantity;
            float bill=0;
            int option =1;
             do
        {
        itemLevel:
            cout <<"****************************WElCOMe**********************************"<<endl;
            cout <<"Please Follow Instructions "<<endl;
            cout <<"Enter r to order the Refrigerator: "<<endl;
            cout <<"Enter w to order the Washing Machine: "<<endl;
            cout <<"Enter t to order the Television: "<<endl;
            cout <<"Enter m to order the Microwave: "<<endl;
            cout <<"Enter a to order the Air conditioner:"<<endl;
            cin>>choice;
            if(choice =='r'||choice =='R'||choice =='w'||choice =='W'||choice =='t'||choice =='T'||choice =='M'||choice =='m'||choice =='a'||choice =='A')
            {
                if(choice=='r'||choice=='R')
                {
                    Refrigerator:
                cout <<"_________________Refrigerator Details_______________"<<endl;
                cout <<" | 1) Whirlpool  => Price: 40000    | "<<endl;
                cout <<" | 2) Coca Cola    => Price: 25000    | "<<endl;
                cout <<" | 3) Haier      => Price: 20000    | "<<endl;
                cout <<" | 4) Voltas     => Price: 18000    | "<<endl;
                cout <<" | 5) Godrej     => Price: 30000    | "<<endl;
                cout <<" | 6) Panasonic  => Price: 35000    | "<<endl;

                cout <<"Please Enter your Choice: "<<endl;
                cin>>product;
                if(product =='1')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;

                }
                else if(product =='2')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;  
                }
                else if (product =='3')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product =='4')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*18000;
                }
                else if(product =='5')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product =='6')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"You have Entered the wrong option, Please try Again:"<<endl;
                    goto Refrigerator;
                }
                }
                if(choice=='w'||choice=='W')
                {
                    Washing_Machine:
                        cout <<"_________________Washing Machine Details_______________"<<endl;
                cout <<" | 1) Bosch    => Price: 40000    | "<<endl;
                cout <<" | 2) LG       => Price: 25000    | "<<endl;
                cout <<" | 3) IFB      => Price: 20000    | "<<endl;
                cout <<" | 4) Haier    => Price: 50000    | "<<endl;
                cout <<" | 5) Haytag   => Price: 33000    | "<<endl;
                cout <<" | 6) Samsung  => Price: 36000    | "<<endl; 

                    cout <<"Please Enter your Choice: "<<endl;
                cin>>product;
                if(product =='1')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;

                }
                else if(product =='2')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;  
                }
                else if (product =='3')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product =='4')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*18000;
                }
                else if(product =='5')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product =='6')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"You have Entered the wrong option, Please try Again:"<<endl;
                    goto Washing_Machine;
                }

                }
                if(choice=='t'||choice=='T')
                {
                    Television:
                        cout <<"_________________Television Details_______________"<<endl;
                cout <<" | 1) Bosch    => Price: 40000    | "<<endl;
                cout <<" | 2) LG       => Price: 25000    | "<<endl;
                cout <<" | 3) IFB      => Price: 20000    | "<<endl;
                cout <<" | 4) Haier    => Price: 50000    | "<<endl;
                cout <<" | 5) Haytag   => Price: 33000    | "<<endl;
                cout <<" | 6) Samsung  => Price: 36000    | "<<endl; 

                    cout <<"Please Enter your Choice: "<<endl;
                cin>>product;
                if(product =='1')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;

                }
                else if(product =='2')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;  
                }
                else if (product =='3')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product =='4')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*18000;
                }
                else if(product =='5')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else if(product =='6')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"You have Entered the wrong option, Please try Again:"<<endl;
                    goto Television;
                }

                }

                 if(choice=='m'||choice=='M')
                {
                    Microwave:
                        cout <<"_________________Microwave Details_______________"<<endl;
                cout <<" | 1) Vegan        => Price: 37000    | "<<endl;
                cout <<" | 2) LG           => Price: 15000    | "<<endl;
                cout <<" | 3) Coca Cola    => Price: 20000    | "<<endl;
                cout <<" | 4) Fiji         => Price: 19000    | "<<endl;
                cout <<" | 5) Numeral      => Price: 33000    | "<<endl;
                cout <<" | 6) Samsung      => Price: 35000    | "<<endl; 

                    cout <<"Please Enter your Choice: "<<endl;
                cin>>product;
                if(product =='1')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*37000;

                }
                else if(product =='2')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;  
                }
                else if (product =='3')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product =='4')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*19000;
                }
                else if(product =='5')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*33000;
                }
                else if(product =='6')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*35000;
                }
                else{
                    cout<<"You have Entered the wrong option, Please try Again:"<<endl;
                    goto Microwave;
                }

                }

                 if(choice=='a'||choice=='A')
                {
                    Air_Conditioner:
                        cout <<"_________________Air Conditioner Details_______________"<<endl;
                cout <<" | 1) Equity      => Price: 40000    | "<<endl;
                cout <<" | 2) Manda       => Price: 25000    | "<<endl;
                cout <<" | 3) IFB         => Price: 20000    | "<<endl;
                cout <<" | 4) Haier       => Price: 50000    | "<<endl;
                cout <<" | 5) Lazio       => Price: 33000    | "<<endl;
                cout <<" | 6) Samsung     => Price: 36000    | "<<endl; 

                    cout <<"Please Enter your Choice: "<<endl;
                cin>>product;
                if(product =='1')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;

                }
                else if(product =='2')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*25000;  
                }
                else if (product =='3')
                {
                    cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product =='4')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*50000;
                }
                else if(product =='5')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*33000;
                }
                else if(product =='6')
                {
                                        cout <<" Please Enter the quantity of the Product: "<<endl;
                    cin>>quantity;
                    bill=bill+quantity*36000;
                }
                else{
                    cout<<"You have Entered the wrong option, Please try Again:"<<endl;
                    goto Air_Conditioner;
                }

                }

            }
            else{
                cout<<"You have entered the wrong option, Please try Again:"<<endl;
                goto shop;
            }
            cout<<"Do You Want to buy more Products? Enter 1 To add more item to the Cart:";
            cin>>option;
            
        }while(option==1);
     

    return bill;
    
    
    //}while(option==1);
    
 }