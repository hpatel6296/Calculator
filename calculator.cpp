#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define new_cal 1
#define old_cal 0

class std_cal{
         public:
        double addition(double,double);
        double subtrect(double,double);
        double multipic(double,double);
        double devision(double,double);
};

class sci_cal{
         public:
         double square(double);
         double cube(double);
         double power(double,double);
         double squ_root(double);
         double fact(double);
         double sin_fac(double);
         double cos_fac(double);
         double tan_fac(double);
};

double addition(double a,double b){
    return(a+b);
}
double subtrect(double a,double b){
    return(a-b);
}
double multipic(double a,double b){
    return(a*b);
}
double devision(double a,double *b){

           while(*b==0){
            cout<<"cannot devide by zero";
            cin>>*b;
           }
           return (a/(*b));
}
double square(double a){
    return(pow(a,2));
}
double  cube(double a){
    return(pow(a,3));
}
double power(double a,double b){
    return(pow(a,b));
}
double squ_root(double a){
    return(sqrt(a));
}
double fact(double n){
     int f=1;
     for(int i=1;i<n;i++){
        f = i*f; 
     }
     return f;
}
double sin_fac(double x){
    return (sin(x));
}
double cos_fac(double x){
    return(cos(x));
}
double tan_fac(double x){
    return(tan(x));
}

int main(){
    double num1,num2,num3,num4,temp;
    int choice1=0,choice2,flag;
    //loop of main menu from where the progrm starts.it will show the menu to choose the type of caculater
    do{
        cout<<"\n1\tStander Calculater\n2\tScintific Calculater\n3\tQute";
        cout<<"\nChocse the type of calculater";
        cin>>choice1;
        flag=new_cal;    //show one oprends is alredy asumed from previose result
         //To perform an  opration according to the entered option in the main menu
         switch (choice1)
         {
         case 1:
            //loop to display stander calculater menue
            do{
                cout<<"============================Stander Calculater===========================";
                cout<<"\n1\tAddition\n2\tSubtraction\n3\tMultiplication\n4\tDevision\n5\tReturn Previos Menu\n6\tQuit";
                if(flag==old_cal)
                    cout<<"Clear memory\n8";
                    cout<<"choise the opretion";
                    cin>>choice2;
                    switch (choice2)
                    {

                    case 1:
                        if(flag==new_cal){
                            cout<<"Enter First Number";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"First number is"<<num1<<endl;
                        }
                        cout<<"Enter Second number";
                        cin>>num2;

                        num3=addition(num1,num2);
                            cout<<"Addition of  num1"<<num1<<"and num2"<<num2<<"is"<<num3;
                            cout<<"Press any key to continue";
                            getch();
                            temp=num3;
                            flag=old_cal;
                        
                        break;
                         case 2:
                        if(flag==new_cal){
                            cout<<"Enter First Number";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"First number is"<<num1<<endl;
                        }
                        cout<<"Enter Second number";
                        cin>>num2;

                        num3=subtrect(num1,num2);
                            cout<<"subtraction of  num1"<<num1<<"and num2"<<num2<<"is"<<num3;
                            cout<<"Press any key to continue";
                            getch();
                            temp=num3;
                            flag=old_cal;
                        
                        break;
                         case 3:
                        if(flag==new_cal){
                            cout<<"Enter First Number";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"First number is"<<num1<<endl;
                        }
                        cout<<"Enter Second number";
                        cin>>num2;

                        num3=multipic(num1,num2);
                            cout<<"Addition of  num1"<<num1<<"and num2"<<num2<<"is"<<num3;
                            cout<<"Press any key to continue";
                            getch();
                            temp=num3;
                            flag=old_cal;
                        
                        break;
                         case 4:
                        if(flag==new_cal){
                            cout<<"Enter First Number";
                            cin>>num1;
                        }
                        else{
                            num1=temp;
                            cout<<"First number is"<<num1<<endl;
                        }
                        cout<<"Enter Second number";
                        cin>>num2;

                        num3=devision(num1,&num2);
                            cout<<"Addition of  num1"<<num1<<"and num2"<<num2<<"is"<<num3;
                            cout<<"Press any key to continue";
                            getch();
                            temp=num3;
                            flag=old_cal;
                        
                        break;
                        case 5:
                        cout<<"Returnig to preveose menu";
                        cout<<"Press any key to contnue........";
                        getch();
                        break;
                        case 6:
                        cout<<"Quting........";
                        cout<<"Press any key to cotinue....";
                        getch();
                        exit(0);                                     
                    }
                
            }
            while (choice2!=5);
            break;
           
        case 2:
        //To display Scintific calculter
          do
          {
            cout<<"======================Scitific calculter============================";
            cout<<"\n1\tSqure\n2\tCube\n3\tPower\n4\tsqure root\n5\tFact\n6\tsin\n7\tcos\n8\ttan\n9\tReturn to prveose menu\n10\tQute";
            if (flag=old_cal)
            cout<<"\nClear Memory";
            
                cout<<"Chose the oprend";
                cin>>choice2;
                switch (choice2)
                {
                case 1:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    num3=square(num1);
                    cout<<"Squre of"<<num1<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;
                    case 2:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    num3=cube(num1);
                    cout<<"cube of"<<num1<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;
                    case 3:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    cout<<"Power of the number";
                    cin>>num2;
                    num3=power(num1,num2);
                    cout<<num1<<"To the power of"<<num2<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;
                    case 4:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    num4=fact(num1);
                    cout<<"Factorial of "<<num1<<"is"<<num4;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num4;
                    flag=old_cal;
                    
                    break;
                    case 5:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    
                    num3=sin_fac(num1);
                    cout<<"sin of"<<num1<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;
                    case 6:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    num3=cos_fac(num1);
                    cout<<"cos of"<<num1<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;
                    case 7:
                    if (flag==new_cal)
                    {
                        cout<<"Enter Number";
                        cin>>num1;
                    }
                    else{
                        num1=temp;
                        cout<<"Number is"<<num1<<endl;
                    }
                    num3=tan_fac(num1);
                    cout<<"tan of"<<num1<<"is"<<num3;
                    cout<<"Press any key to continue";
                    getch();
                    temp=num3;
                    flag=old_cal;
                    
                    break;       
                      case 8:
                        cout<<"Returnig to preveose menu";
                        cout<<"Press any key to contnue........";
                        getch();
                        break;
                        case 9:
                        cout<<"Quting........";
                        cout<<"Press any key to cotinue....";
                        getch();
                        exit(0);         
                }
              }
           
            
          
    
    while (choice2!=8);
    break;
          case 3:
           cout<<"Quittinng.......";
                      cout<<"Press any key to continue........";
                      getch();
                      break;
                      default:
                      cout<<"\nInvalid Choice";
                      cout<<"\nPress any key to continue........";
                      getch();
                      break;
         }
    }
    
    while(choice2!=3);
    
}
    
