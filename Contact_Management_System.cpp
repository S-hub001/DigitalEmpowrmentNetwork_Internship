#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Contact 
{
public:
    string name;
    string phoneNumber;

    Contact(string n, string p) 
    {
        name = n;
        phoneNumber = p;
    }
};

class ContactManagement 
{
private:
    vector<Contact> contacts;
    const string filename = "contacts.txt";

    void loadContacts() 
    {
        ifstream file(filename);
        if (file.is_open()) 
        {
            string name, phoneNumber;
            while (file >> name >> phoneNumber) 
            {
                contacts.push_back(Contact(name, phoneNumber));
            }
            file.close();
        }
    }

    void saveContacts() 
    {
        ofstream file(filename);
        if (file.is_open()) 
        {
            for (const auto& contact : contacts) 
            {
                file << contact.name << " " << contact.phoneNumber << endl;
            }
            file.close();
        }
    }

    void clearConsole() 
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif 
    }

    void wait() 
    {
        cout << "\n Press any key to continue..." << endl;
        cin.ignore();
        cin.get();
    }

public:
    ContactManagement() 
    {
        loadContacts();
    }
    ~ContactManagement() 
    {
        saveContacts();
    }

    void createContact() 
    {
        string name, phoneNumber;
        cout << "\n Enter Your Name: ";
        cin >> name;
        cout << "\n Enter Your Phone Number: ";
        cin >> phoneNumber;

        contacts.push_back(Contact(name, phoneNumber));
        cout << "\n \033[1;32mContact Created Successfully!\033[0m" << endl;
        wait();
    }

    void searchContact() 
    {
        string keyword;
        cout << "\n Enter Name or Phone Number to Search: ";
        cin >> keyword;
        bool found = false;
        for (const auto& contact : contacts) 
        {
            if (contact.name == keyword || contact.phoneNumber == keyword) 
            {
                cout << "\n Name : " << contact.name << ",  Phone Number : " << contact.phoneNumber << endl;
                found = true;
            }
        }
        
        if (!found) 
        {
            cout << "\n \033[1;31mContact Not Found!\033[0m" << endl;
        }
        wait();
    }

    void viewContacts() 
    {
        if (contacts.empty()) 
        {
            cout << "\n \033[1;31mNo Contacts Available.\033[0m" << endl;
        }
        else {
            for (const auto& contact : contacts) 
            {
                cout << "\n Name : " << contact.name << ",  Phone Number : " << contact.phoneNumber << endl;
            }
        }
        wait();
    }

    void deleteContact() 
    {
        string keyword;
        cout << "\n Enter Name or Phone Number to Delete the Contact: ";
        cin >> keyword;
        auto it = remove_if(contacts.begin(), contacts.end(), [&keyword](const Contact& contact) 
        {
            return contact.name == keyword || contact.phoneNumber == keyword;
        });
        if (it != contacts.end()) 
        {
            contacts.erase(it, contacts.end());
            cout << "\n \033[1;32mContact Successfully Deleted!\033[0m" << endl;
        }
        else 
        {
            cout << "\n \033[1;31mContact Not Found!\033[0m" << endl;
        }
        wait();
    }

    void displayMenu() 
    {
        int choice = 0;
        do 
        {
            clearConsole();

            cout << "\n\n\033[1;36m ****************************************\n"
                 << " *     Contact Management System        *\n"
                 << " ****************************************\033[0m\n\n";

            cout << "\n\033[1;33m 1. Create Contact\n"
                 << " 2. Search Contact\n"
                 << " 3. View Contacts\n"
                 << " 4. Delete Contact\n"
                 << " 5. Exit\033[0m\n"
                 << "\n Enter Your Choice: ";
            cin >> choice;

            switch (choice) 
            {
            case 1:
                createContact(); break;
            case 2:
                searchContact(); break;
            case 3:
                viewContacts(); break;
            case 4:
                deleteContact(); break;
            case 5:
                cout << "\n Exiting..." << endl; break;
            default:
                cout << "\n \033[1;31mInvalid Choice! Please try again.\033[0m" << endl;
            }
        } while (choice != 5);
    }
};

int main() 
{
    ContactManagement manager;
    manager.displayMenu();
    
    cout << endl;
    return 0;
}
