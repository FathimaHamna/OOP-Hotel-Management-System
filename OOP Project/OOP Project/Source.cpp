#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h> 
#include<Windows.h>


using namespace std;

class userAcc
{

public:
    userAcc();
    ~userAcc();
    char name[30];
    char address[50];
    char phone[10];
    char NIC[20];
    void userDetails();
};


class hotel
{
public:
    int room_no;
    char name[30];
    char address[50];
    char phone[10];
    int days;
    char NIC[20];
    int n;
    void main_menu();		//to dispay the main menu
    void add();			    //to book a room
    void display(); 		//to display the room details
    void bookedrooms();      //to display the booked rooms
    void edit();			//to edit the customer details
    void modify(int);		//to modify the record
    void delete_rec(int);   //to delete the record

};

class Bill
{

public:
    int room_no;
    char name[30];
    char address[50];
    char phone[10];
    int days;
    char NIC[20];
    int n;
    void bill();         //to get the bill of a record
    Bill();
    ~Bill();
};

class checkAvailability
{
public:
    int room_no;
    char name[30];
    char address[50];
    char phone[10];
    int days;
    char NIC[20];
    int n;
    checkAvailability();
    ~checkAvailability();
    int check(int);			//to check room status
};


class room
{
public:
    int room_no;
    void room_details();

};

//END OF CLASSES


userAcc::userAcc() {}
userAcc::~userAcc() {}

checkAvailability::checkAvailability() {}
checkAvailability::~checkAvailability() {}

Bill::Bill() {}
Bill::~Bill() {}


//FOR DISPLAYING MAIN MENU

void userAcc::userDetails()
{
    cout << "\n\t\tUSER DETAILS";
    cout << "\n\t\t------------";
    cout << "\n Name: ";
    cin >> name;
    cout << " Address: ";
    cin >> address;
    cout << " Phone Number: ";
    cin >> phone;
    cout << " National Identity Card Number: ";
    cin >> NIC;

}

void room::room_details()
{

    cout << "\n\t\tROOM DETAILS";
    cout << "\n\t\t------------";
    cout << "\n Total number of rooms: 50";
    cout << "\n Room Numbers : 1 to 50";
    cout << "\n\n\t\tRoom Types " << endl;
    cout << "\t\t---------- " << endl;
    cout << "Room numbers from 1 to 30: Ordinary rooms" << endl;
    cout << "Room numbers from 31 to 45: Luxuary rooms" << endl;
    cout << "Room numbers from 45 to 50: Royal rooms" << endl << endl;
    system("pause");
}



void hotel::main_menu()
{

    Bill b1;

    int choice;
    char x;
    system("cls");

    int t;

    cout << "\n\n                            ****************************************" << endl;
    cout << "                            ------------  MODE SELECTOR  -----------" << endl;
    cout << "                            ----------------------------------------" << endl;
    cout << "                                        1.Education Mode            " << endl;
    cout << "                                        2.Regular Mode              " << endl;
    cout << "                            ----------------------------------------" << endl;
    cout << "\n\t\t\t\tEnter the mode: ";
    cin >> t;


    if (t == 1)   //Education mode
    {
        system("cls");
        cout << "\n                                Class: hotel constructor\n";
        cout << "\n\t\t\t\t*************************";
        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM ";
        cout << "\n\n\t\t\t\t ^^^^^^^^HOTEL ABC^^^^^^^^  \n";
        cout << "\n\t\t\t\t      * MAIN MENU *";
        cout << "\n\t\t\t\t---------------------------";


        int v;
        cout << "\n\nLogIn as a User or Admin? (Enter 1 for User and 2 for Admin): ";
        cin >> v;

        if (v == 1)
        {

            system("cls");
            cout << "\n\n\n\t\t\t1.Book A Room";
            cout << "\n\t\t\t2.Display the booked rooms";
            cout << "\n\t\t\t3.Bill";
            cout << "\n\t\t\t4.Exit";

            cout << "\n\n\t\t\tChoose option:[1,2,3,4]";
            cout << "\n\n\t\t\tEnter your choice: ";
            cin >> choice;


            switch (choice)
            {
            case 1:
                do
                {
                    cout << "\n\n                      Class: check constructor\n\n";
                    system("pause");
                    add();

                    cout << "\nBook another room(Y/N): ";
                    cin >> x;
                } while (x == 'y' || x == 'Y');
                main_menu();
                break;

            case 2: bookedrooms();
                break;

            case 3: {

                cout << "\n                Class: bill constructor\n\n";
                system("pause");
                b1.bill();
                break;}

            case 4: break;

            default:
                cout << "\n\n\t\t\tInvalid choice.....!!!";
                break;
            }

        }

        else if (v == 2)

        {
            system("cls");

            cout << "\n\t\t\t1.Display Room Details";
            cout << "\n\t\t\t2.Edit Records";
            cout << "\n\t\t\t3.Exit";

            cout << "\n\n\t\t\tChoose option:[1,2,3]";
            cout << "\n\n\t\t\tEnter your choice: ";
            cin >> choice;


            switch (choice)
            {

            case 1: {

                display();
                break;}

            case 2:	edit();
                break;

            case 3: break;

            default:
            {  cout << "\n\n\t\t\tInvalid choice.....!!!";
            break;
            }
            break;
            }

        }

        else
        {
            cout << "Invalid input!!!!" << endl;
            main_menu();
        }
    }

    else if (t == 2)    //Regular mode
    {
        system("cls");
        cout << "\n\t\t\t\t*************************";
        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM ";
        cout << "\n\n\t\t\t\t ^^^^^^^^HOTEL ABC^^^^^^^^  \n";
        cout << "\n\t\t\t\t      * MAIN MENU *";
        cout << "\n\t\t\t\t---------------------------";


        int v;
        cout << "\n\nLogIn as a User or Admin? (Enter 1 for User and 2 for Admin): ";
        cin >> v;

        if (v == 1)
        {

            system("cls");
            cout << "\n\n\n\t\t\t1.Book A Room";
            cout << "\n\t\t\t2.Display the booked rooms";
            cout << "\n\t\t\t3.Bill";
            cout << "\n\t\t\t4.Exit";

            cout << "\n\n\t\t\tChoose option:[1,2,3,4]";
            cout << "\n\n\t\t\tEnter your choice: ";
            cin >> choice;


            switch (choice)
            {
            case 1:
                do
                {

                    add();
                    cout << "\nBook another room(Y/N): ";
                    cin >> x;
                } while (x == 'y' || x == 'Y');
                main_menu();
                break;

            case 2: bookedrooms();
                break;

            case 3: {

                b1.bill();
                break;}

            case 4: break;

            default:
                cout << "\n\n\t\t\tInvalid choice.....!!!";
                break;
            }

        }

        else if (v == 2)

        {
            system("cls");

            cout << "\n\t\t\t1.Display Room Details";
            cout << "\n\t\t\t2.Edit Records";
            cout << "\n\t\t\t3.Exit";

            cout << "\n\n\t\t\tChoose option:[1,2,3]";
            cout << "\n\n\t\t\tEnter your choice: ";
            cin >> choice;


            switch (choice)
            {

            case 1: {

                display();
                break;}

            case 2:	edit();
                break;

            case 3: break;

            default:
            {  cout << "\n\n\t\t\tInvalid choice.....!!!";
            break;
            }
            break;
            }

        }

        else
        {
            cout << "Invalid input!!!!" << endl;
            main_menu();
        }

    }
    else
    {

        cout << "\n\n  Invalid input!!!";
        system("pause");
        main_menu();
    }



}

//END OF THE MENU FUNCTION



//FUNCTION FOR BOOKING ROOMS

void hotel::add()
{
    checkAvailability chk;
    system("cls");
    int r;
    fstream file;

    cout << "\n Enter Customer Detalis";
    cout << "\n ----------------------";
    cout << "\n Total number of Rooms : 50";
    cout << "\n Ordinary Rooms from 1 : 30";
    cout << "\n Luxuary Rooms from 31 : 45";
    cout << "\n Royal Rooms from 46 : 50";
    cout << "\n Enter The Room number you want to stay in :- " << endl;
    cin >> r;
    if (r < 0 || r>50)
    {
        cout << "\n\tInvalid Input for room number!!!" << endl;
        system("pause");
        main_menu();
    }

    room_no = r;
    cout << " Name: ";
    cin >> name;
    cout << " Address: ";
    cin >> address;
    cout << " Phone Number: ";
    cin >> phone;
    cout << " Number of days you want to stay: ";
    cin >> days;
    if (days < 0 || days > 90)
    {
        cout << "\t\nNumber of days should be between 0-90\n\n";
        system("pause");
        main_menu();
    }
    cout << " National Identity Card Number: ";
    cin >> NIC;
    cout << " Local or Foriegn? Local(1)/Foreign(0): ";
    cin >> n;
    if (n != 1)
    {
        if (n != 0)
        {
            cout << "\n\tWrong input!!!\nEnter 1 for Local and 0 for Foreign!!!\n\n";
            system("pause");
            add();
        }
    }
    file.open("Record.txt", ios::app);

    file << " " << room_no << " " << name << " " << address << " " << phone << " " << days << " " << NIC << " " << n << endl;
    cout << "\n Room is booked successfully...!!!\n Thank you!!!";
    Sleep(4000);

    file.close();
}


//END OF BOOKING FUNCTION



//FUNCTION FOR DISPLAYING CUSTOMER`S RECORDS

void hotel::display()
{
    system("cls");

    fstream file;



    cout << "\n Room Details" << endl;
    cout << " ------------" << endl;

    file.open("Record.txt", ios::in);

    file >> room_no >> name >> address >> phone >> days >> NIC >> n;

    while (!file.eof())
    {
        cout << "\n Room number: " << room_no << endl << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phone << endl;
        cout << "Number of days you want to stay: " << days << endl;
        cout << "National Identity Card Number: " << NIC << endl;
        cout << "Local or Foreign? ";
        if (n == 1)
            cout << "Local" << endl << endl;
        else if (n == 0)
            cout << "Foreign" << endl << endl;
        else
            cout << "Invalid input" << endl << endl;


        file >> room_no >> name >> address >> phone >> days >> NIC >> n;

    }

    system("pause");

    file.close();

    main_menu();
}

//END OF DISPLAY FUNCTION


//FUNCTION FOR DISPLAY THE BOOKED ROOMS

void hotel::bookedrooms()
{
    system("cls");

    fstream file;

    cout << "\n Booked Rooms" << endl;
    cout << " ------------" << endl;

    file.open("Record.txt", ios::in);

    file >> room_no >> name >> address >> phone >> days >> NIC >> n;

    while (!file.eof())
    {
        cout << "\n Room number: " << room_no << endl;

        file >> room_no >> name >> address >> phone >> days >> NIC >> n;

    }

    cout << endl;
    system("pause");

    file.close();

    main_menu();
}

//END OF DISPLAY BOOKDEDROOMS FUNCTION


//FUNCTION FOR EDITING RECORDS 

void hotel::edit()
{
    system("cls");

    int choice, r;
    cout << "\n EDIT MENU";
    cout << "\n ---------";
    cout << "\n\n 1.Modify Customer Record";
    cout << "\n 2.Delete Customer Record";
    cout << "\n Enter your choice: ";

    cin >> choice;
    system("cls");


    switch (choice)
    {

    case 1: {
        cout << "\n Enter room number: ";
        cin >> r;
        modify(r);
        break;}

    case 2: {
        cout << "\n Enter room number: ";
        cin >> r;
        delete_rec(r);

        break;}


    default: cout << "\n Wrong Choice.....!!";

    }

}

// FUNCTION FOR CHECKING THE ROOM STATUS

int checkAvailability::check(int r)
{

    int flag = 0;
    fstream file;
    file.open("Record.txt", ios::in);

    while (!file.eof())
    {
        file >> room_no >> name >> address >> phone >> days >> NIC >> n;
        if (room_no == r)
        {
            flag = 1;
            break;

        }

    }

    file.close();
    return(flag);

}

// END OF CHECK FUNCTION


//FUNCTION FOR CUSTOMER`S BILL

void Bill::bill()
{
    hotel h1;
    system("cls");
    fstream file;

    int r, flag = 0;
    int amount, m;

    cout << "\n Enter room number: ";
    cin >> r;

    if (r <= 50 && r > 0)
    {
        file.open("Record.txt", ios::in);
        if (!file)
        {
            cout << "No Data is present!!!";
            file.close();
        }
        else
        {

            while (!file.eof())
            {
                file >> room_no >> name >> address >> phone >> days >> NIC >> n;


                if (room_no == r)
                {
                    if (r >= 1 && r <= 30)
                    {
                        if (n == 1)
                            m = 5000;
                        else if (n == 0)
                            m = 7000;

                    }

                    else if (r >= 31 && r <= 45)
                    {
                        if (n == 1)
                            m = 8000;
                        else if (n == 0)
                            m = 12000;
                    }
                    else
                    {
                        if (n == 1)
                            m = 12000;
                        else if (n == 0)
                            m = 16000;
                    }
                    amount = m * days;
                    system("cls");
                    cout << "\n    ******* HOTEL ABC *******" << endl << endl;
                    cout << "\tCustomer's name: " << name << endl;
                    cout << "\tRoom number: " << room_no << endl;

                    if (r >= 1 && r <= 30)
                        cout << "\tOrdinary room" << endl;

                    else if (r >= 31 && r <= 45)
                        cout << "\tLuxuary room" << endl;
                    else
                        cout << "\tRoyal room" << endl;


                    cout << "\tAmount = Rs." << amount << endl << endl;
                    break;
                }
            }
        }

        file.close();
    }
    else
        cout << "Ivalid input" << endl;
    system("pause");
    h1.main_menu();

}
//END OF THE BILL FUNCTION


//FUNCTION TO MODIFY CUSTOMERS RECORD


void hotel::modify(int r)
{

    system("cls");
    fstream file, file1;

    int flag = 0;
    file.open("Record.txt", ios::in);
    if (!file)
    {
        cout << "No Data is present!!!";
        file.close();
    }
    else
    {


        file1.open("Record1.txt", ios::app | ios::out);
        file >> room_no >> name >> address >> phone >> days >> NIC >> n;


        while (!file.eof())
        {

            if (room_no != r)
            {
                file1 << " " << room_no << " " << name << " " << address << " " << phone << " " << days << " " << NIC << " " << n << endl;
            }

            else

            {
                cout << "\n Enter New Details";
                cout << "\n -----------------";

                cout << "\n Name: ";
                cin >> name;
                cout << " Address: ";
                cin >> address;
                cout << " Phone number: ";
                cin >> phone;
                cout << " Number of days you want to stay: ";
                cin >> days;
                cout << " National Identity Card Number: ";
                cin >> NIC;
                cout << " Local or Foriegn? Local(1)/Foreign(0): ";
                cin >> n;
                if (n != 1)
                {
                    if (n != 0)
                    {
                        cout << "Wrong input!!!\nEnter 1 for Local and 0 for Foreign!!!";
                        Sleep(8000);
                        add();
                    }
                }
                file1 << " " << room_no << " " << name << " " << address << " " << phone << " " << days << " " << NIC << " " << n << endl;

                cout << "\n Record is modified successfully....!!\n\n";
                flag++;
            }


            file >> room_no >> name >> address >> phone >> days >> NIC >> n;
        }

        if (flag == 0)
        {
            cout << "\n Sorry room number not found or vacant...!!\n\n";
        }


        file1.close();
        file.close();
        remove("Record.txt");
        rename("Record1.txt", "Record.txt");
    }
    system("pause");
    main_menu();
}

//END OF MODIFY FUNCTION


//FUNCTION FOR DELETING RECORD

void hotel::delete_rec(int r)
{
    system("cls");
    fstream file, file1;
    int flag = 0;

    file.open("Record.txt", ios::in);
    if (!file)
    {
        cout << "No Data is present!!!";
        file.close();
    }

    else {

        file1.open("Record1.txt", ios::app | ios::out);
        file >> room_no >> name >> address >> phone >> days >> NIC >> n;

        while (!file.eof())
        {

            if (room_no != r)

            {
                file1 << " " << room_no << " " << name << " " << address << " " << phone << " " << days << " " << NIC << " " << n << endl;
            }
            else
            {
                flag++;
                cout << "\n\t\t\t Details of Room " << room_no << " Successfully deleted!!!\n\n";
            }
            file >> room_no >> name >> address >> phone >> days >> NIC >> n;
        }
        if (flag == 0)
        {
            cout << "\n\t\t\t Room number not found!!!\n\n";
        }


        file1.close();
        file.close();
        remove("Record.txt");
        rename("Record1.txt", "Record.txt");
    }
    system("pause");
    main_menu();
}

//END OF DELETE FUNCTION



//START OF MAIN PROGARM

int main()
{
    hotel h;
    userAcc user1;
    room room1;


    system("cls");

    cout << "\n\t\t\t***************************";
    cout << "\n\t\t\t* HOTEL MANAGEMENT SYSTEM *";
    cout << "\n\t\t\t***************************";
    cout << "\n\n\t\tDeveloped By:";
    cout << "\tHotel ABC ";
    cout << "\n\n\n\n\n\n\n\t\t\t\t\tPress any key to continue....!!";
    cin.get();
    system("cls");

    user1.userDetails();
    room1.room_details();
    h.main_menu();

    return 0;
}

//END OF MAIN PROGRAM
