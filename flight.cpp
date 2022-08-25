#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
using namespace std;
void Mainmenu();
class Management
{
public:
//    system("cls");
    Management()
    {
        system("cls");
        Mainmenu();
    }
};
class Details
{
public:

    static string name,gender;
    float Phonenu;
    int age;
    string add;
    static int cid;
    char arr[100];
    void Information()
    {
        cout<<"\n\t Enter The Customer ID:    ";
        cin>>cid;
        cout<<"\n\t Enter The Customer Name:  ";
        cin>>name;
        cout<<"\n\t Enter The Customer Age:   ";
        cin>>age;
        cout<<"\n\t Enter The Customer Gender:";
        cin>>gender;
        cout<<"\n\t Enter The Customer Add.:  ";
        cin>>add;
        cout<<"\n\t Enter The Customer P.H.Nu:";
        cin>>Phonenu;
        cout<<"\n\n Your Details are Saved With Us! ";
        //getch();
    }
};
int Details::cid;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1,back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++)
        {
            cout<<"\n   "<<(a+1)<<".Flight to"<<" "<<flightN[a]<<endl;
        }
        cout<<"\n\t\t-----\"Welcome to the Airlines\"----- \n";
        cout<<"\n  Press the Number Of That Country of Which You Want to book the Ticket : ";
        cin>>choice;
        getch();
        system("cls");

        switch(choice)
        {
        case 1:{
            cout<<"\n"<<endl<<"______________________\"Welcome To DUBAI Emirates\"___________________________\n";
            cout<<endl<<"------------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"----------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.DUB-498"<<endl;
            cout<<"\t Date 20-08-2022 Time 8:00AM 10hrs. Rs.14000 "<<endl;
            cout<<"\n 2.DUB-658"<<endl;
            cout<<"\t Date 21-08-2022 Time 6:30AM 9hrs.  Rs.10000 "<<endl;
            cout<<"\n 3.DUB-508"<<endl;
            cout<<"\t Date 23-08-2022 Time 5:00PM 12hrs. Rs.18000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){
                charges=14000;
                cout<<"\n You have Successfully booked the Ticket DUB-498 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=10000;
                cout<<"\n You have Successfully booked the Ticket DUB-658 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=18000;
                cout<<"\n You have Successfully booked the Ticket DUB-508 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }
        }
        case 2:
        {
            cout<<endl<<"______________________\"Welcome To CANADA Emirates\"_________________________\n";
            cout<<endl<<"---------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"----------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.CND-408"<<endl;
            cout<<"\t Date 20-08-2022 Time 6:00AM 10hrs. Rs.20000 "<<endl;
            cout<<"\n 2.CND-618"<<endl;
            cout<<"\t Date 21-08-2022 Time 6:30AM 9hrs.  Rs.17500 "<<endl;
            cout<<"\n 3.CND-538"<<endl;
            cout<<"\t Date 23-08-2022 Time 4:00PM 12hrs. Rs.22000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){                                           //if error change choice1 to all//
                charges=20000;
                cout<<"\n You have Successfully booked the Ticket CND-408 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=17500;
                cout<<"\n You have Successfully booked the Ticket CND-618 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=22000;
                cout<<"\n You have Successfully booked the Ticket CND-538 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }
        }
        case 3:
        {
            cout<<endl<<"________________________Welcome To UK Emirates ______________________________\n";
            cout<<endl<<"---------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"----------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.UK-208"<<endl;
            cout<<"\t Date 20-08-2022 Time 7:00AM 6hrs. Rs.20000 "<<endl;
            cout<<"\n 2.UK-118"<<endl;
            cout<<"\t Date 21-08-2022 Time 11:30AM 6.30hrs.  Rs.21500 "<<endl;
            cout<<"\n 3.UK-558"<<endl;
            cout<<"\t Date 23-08-2022 Time 4:00PM 7hrs. Rs.22000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){                                           //if error change choice1 to all//
                charges=20000;
                cout<<"\n You have Successfully booked the Ticket UK-208 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=21500;
                cout<<"\n You have Successfully booked the Ticket UK-118 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=22000;
                cout<<"\n You have Successfully booked the Ticket UK-558 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }
        }
         case 4:
         {
            cout<<endl<<"______________________\"Welcome To USA Emirates\"_______________________\n";
            cout<<endl<<"---------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"----------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.USA-208"<<endl;
            cout<<"\t Date 20-08-2022 Time 3:00AM 4hrs. Rs.40000 "<<endl;
            cout<<"\n 2.USA-118"<<endl;
            cout<<"\t Date 21-08-2022 Time 11:30AM 6hrs.  Rs.42500 "<<endl;
            cout<<"\n 3.USA-558"<<endl;
            cout<<"\t Date 23-08-2022 Time 9:00PM 7hrs. Rs.44000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){
                charges=40000;
                cout<<"\n You have Successfully booked the Ticket USA-208 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=42500;
                cout<<"\n You have Successfully booked the Ticket USA-118 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=44000;
                cout<<"\n You have Successfully booked the Ticket USA-558 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }
        }
         case 5:
          {
            cout<<endl<<"______________________\"Welcome To AUSTRLIA Emirates\"_______________________\n";
            cout<<endl<<"---------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"----------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.ALS-208"<<endl;
            cout<<"\t Date 20-08-2022 Time 3:00AM 4hrs. Rs.13000 "<<endl;
            cout<<"\n 2.ALS-102"<<endl;
            cout<<"\t Date 20-08-2022 Time 11:30AM 6hrs.  Rs.26500 "<<endl;
            cout<<"\n 3.ALS-110"<<endl;
            cout<<"\t Date 26-08-2022 Time 9:00PM 7hrs. Rs.15000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){                                           //if error change choice1 to all//
                charges=13000;
                cout<<"\n You have Successfully booked the Ticket ALS-208 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=26500;
                cout<<"\n You have Successfully booked the Ticket ALS-118 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=15000;
                cout<<"\n You have Successfully booked the Ticket ALS-558 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }
        }
        case 6:
         {
            cout<<endl<<"______________________\"Welcome To EUROPE Emirates\"_______________________\n";
            cout<<endl<<"--------------\"Your Comfort Is Our Priority, Enjoy The Journey!\"---------\n";
            cout<<endl<<"Followings are The Tickets \n\n";

            cout<<"\n 1.EUE-08"<<endl;
            cout<<"\t Date 20-08-2022 Time 3:00AM 4hrs. Rs.13000 "<<endl;
            cout<<"\n 2.EUE-02"<<endl;
            cout<<"\t Date 23-08-2022 Time 11:30AM 6hrs.  Rs.12500 "<<endl;
            cout<<"\n 3.EUE-01"<<endl;
            cout<<"\t Date 24-08-2022 Time 9:00PM 7hrs. Rs.10000 "<<endl;

            cout<<"\n Select the Flight You Want to Book: ";
            cin>>choice1;
            if(choice1==1){                                           //if error change choice1 to all//
                charges=13000;
                cout<<"\n You have Successfully booked the Ticket EUE-08 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==2){
                charges=12500;
                cout<<"\n You have Successfully booked the Ticket EUE-02 ";
                cout<<"\n Now Please GoBack to main menu and Collect your Ticket ";
            }
            else if(choice1==3){
                charges=10000;
                cout<<"\n You have Successfully booked the Ticket EUE-01 ";
                cout<<"\n Now Please Go Back to main menu and Collect your Ticket ";
            }
            else{
                cout<<"\n Invalid Choice! Shifting to previous menu ";
                flights();
            }
            cout<<endl<<" Press Any Key to Go Back to main menu: ";
            cin>>back;
            Mainmenu();
            system("cls");
            /*if(back==1){
                Mainmenu();
            }
            else{
                Mainmenu();
            }*/
        }
        default:
            {
                cout<<"\n Invalid Input! Shifting to main menu..";
                Mainmenu();
                break;
            }
        }//switch body end
    }//function body
};//class body
float registration::charges;
int registration::choice;

class ticket: public registration,Details
{
public:
    void Bill()
     {
        string destination="";
        ofstream outf("record.txt");
        {
            system("cls");
            cout<<endl;
            outf<<"|____________________`INDIAN AIRLINE`___________________|\n"<<endl;
            outf<<"|                                                       |\n";
            outf<<"|-------------------------TICKET------------------------|\n"<<endl;
            outf<<"|_______________________________________________________|\n";

            outf<<"\t Customer ID.     "<<Details::cid<<endl;
            outf<<"\t Customer Name    "<<Details::name<<endl;
            outf<<"\t        Gender    "<<Details::gender<<endl;

            outf<<"\t\t ~DESCRIPITION~ \n\n";
            if(registration::choice==1){
                destination="Dubai";
            }
            else if(registration::choice==2){
                destination="Canada";
            }
            else if(registration::choice==3){
                destination="UK";
            }
            else if(registration::choice==4){
                destination="USA";
            }
            else if(registration::choice==5){
                destination="Australia";
            }
            else if(registration::choice==6){
                destination="Europe";
            }
            outf<<endl<<" Destination\t\t"<<destination;
            outf<<endl<<" Flight Coast\t\t"<<registration::charges;
        }
        outf.close();
        system("cls");
    }
    void dispBill()
    {
        ifstream ifs("record.txt");
        {
            if(!ifs)
                cout<<"\n File Error";
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};
void Mainmenu()
{
    system("cls");
    int lchoice;
    int schoice;
    int back;
    cout<<"\t\t|----------------------------------------------------|\n";
    cout<<"\t\t|                                                    |\n";
    cout<<"\t\t|               ~~INDIAN AIRLINE~~                   |\n";
    cout<<"\t\t|_______________                   __________________|\n";
    cout<<"\t\t|                                                    |\n";
    cout<<"\t\t|----------------------------------------------------|\n";
    cout<<"\n\t\t\t"<<endl;
    cout<<"\t\t Press 1. To Add The Customer Details:  "<<endl;
    cout<<"\t\t Press 2. For Flight Registration:      "<<endl;
    cout<<"\t\t Press 3. For Ticket and Charges:       "<<endl;
    cout<<"\t\t Press 4. For Exit:                     "<<endl;
    cout<<"\n\t\t---------\n";
    cout<<endl<<"\t Enter Your Choice: ";
    cin>>lchoice;
    system("cls");

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
    case 1:
        {
        cout<<"________________________CUSTOMER_______________________\n";
        d.Information();
        cout<<"\n\t Press any key to Go Back:   ";
        cin>>back;
        if(back==1)
            Mainmenu();
        else{
            Mainmenu();
            break;
            }
        }
    case 2:
        {
            cout<<"\n\t\t ----Book A Flight Using This System-----\n";
            r.flights();
            break;
        }
    case 3:
        {
            cout<<" ---------------Get Your Ticket----------------\n";
            t.Bill();
            cout<<"\n Your Ticket Is Printed, You Can Collect It! ";
            cout<<"\n Press 1. to Display Your Ticket  ";
            cin>>back;
            system("cls");
            if(back==1)
            {
                t.dispBill();
                getch();
                system("cls");
                //cout<<"\n\t Press any Key to Go Back:  \n\n";
                if(back==1)
                    Mainmenu();
                else
                    Mainmenu();
            }
            else{
                Mainmenu();
                break;
            }
        }
    case 4:
        {
            cout<<" ________Thank You For Visiting Us________\n";
            break;
        }
    default:
        {
            cout<<"\n\t Invalid Input, Please Select the Valid Choice:\n\n";
            Mainmenu();
            break;
        }
    }     //switch body
}          //function body
int main()
{
     Management obj;
     return 0;
}
