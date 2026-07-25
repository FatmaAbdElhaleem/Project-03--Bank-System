#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

//----------------------------------------------------
//                 Login Screen
//----------------------------------------------------
// Enter Username? Admin
// Enter Password? 1234

// (Another case if the password was wrong)

// Invalid Username/Password!
// Enter Username? Admin
// Enter Password? 123

//===================================================
//                 Main Menu Screen
//===================================================
// [1] Show Client List.
// [2] Add New Client.
// [3] Delete Client.
// [4] Update Client Info.
// [5] Find Client.
// [6] Transactions
// [7] Manage Users.
// [8] Logout.
//====================================================
// Choose what do you want to do? [1 to 6]?

// 1
//----------------------------------------------------
//                 Show Client List Screen
//----------------------------------------------------
//
//                Client List (6) Client(s).
//_____________________________________________________________________________
// | Account Number	| Pin Code	| Client Name	       | Phone	    | Balance
//_____________________________________________________________________________

// | A150	        | 1234	    | Mohammed Abu-Hadhoud | 07333232	| 12500
// | A151	        | 1234	    | Ali Fadi             | 07555552   | 2000
// | A152	        | 1234	    | Maher Ahmed	       | 666666	    | 5000
// | A153	        | 1234	    | Omar Mohammed	       | 77777	    | 9500
// | A154	        | 1234	    | Ali Maher	           | 5555882	| 544
// | A300	        | 1234	    | Hilal Ahmed	       | 07929992	| 6500
//_____________________________________________________________________________

// Press any key to go back to Main Menu...

// 2
//----------------------------------------------------
//             Add New Clients Screen
//----------------------------------------------------
// Adding New Client:
// Enter Account Number? A150

// Client with [A150] already exists, Enter another Account Number? A400
// Enter PinCode? 1234
// Enter Name? Alia Ahmed
// Enter Phone? 89388383
// Enter AccountBalance? 3000

// Client Added Successfully, do you want to add more clients? Y/N? n
// Press any key to go back to Main Menu...

// 3
//----------------------------------------------------
//             Delete Client Screen
//----------------------------------------------------

// Please enter AccountNumber? 4
// Client with Account Number (4) is Not Found!
// Press any key to go back to Main Menu...

// Please enter AccountNumber? A400
// The following are the client details:
// Account Number: A400
// Pin Code : 1234
// Name : Alia Ahmed
// Phone : 89388383
// Account Balance: 3000
// Are you sure you want delete this client? y/n ? y
// Client Deleted Successfully.
// Press any key to go back to Main Menu...

// 4
//----------------------------------------------------
//             Update Client Info Screen
//----------------------------------------------------
// Please enter AccountNumber? A151
// The following are the client details:
// Account Number: A151
// Pin Code : 1234
// Name : Ali Fadi
// Phone : 07555552
// Account Balance: 2000

// Are you sure you want update this client? y/n ? y
// Enter PinCode? 7777
// Enter Name? Ali Ahmed Fadi Jamil
// Enter Phone? 999999
// Enter AccountBalance? 4000
// Client Updated Successfully.
// Press any key to go back to Main Menu...

// 5
//----------------------------------------------------
//             Find Client Screen
//----------------------------------------------------
// Please enter AccountNumber? A151
// The following are the client details:
// Account Number: A151
// Pin Code : 7777
// Name : Ali Ahmed Fadi Jamil
// Phone : 999999
// Account Balance: 4000

// Press any key to go back to Main Menu...

// 6
//----------------------------------------------------
//             Transactions Menu Screen
//----------------------------------------------------
// [1] Deposit.
// [2] Withdraw.
// [3] Total Balances.
// [4] Main Menu.

// Choose what do you want to do? [1 to 4] ?

// 6.1 --> [1]
//----------------------------------------------------
//             Deposit Screen
//----------------------------------------------------
// Please enter AccountNumber? a
// Client with [a] does not exist.

// Please enter AccountNumber? A150

// The following are the client details:
// Account Number: A150
// Pin Code : 1234
// Name : Mohammed Abu-Hadhoud
// Phone : 07333232
// Account Balance: 12500

// Please enter deposit amount? 500
// Do you want to perform this transaction? y/n ? y
// Done Successfully New Balance is 13000
// Press any key to go back to Transaction Menu...

// 6.2 -->  [2]
//----------------------------------------------------
//             Withdraw Screen
//----------------------------------------------------
// Please enter AccountNumber? A150

// The following are the client details:
// Account Number: A150
// Pin Code : 1234
// Name : Mohammed Abu-Hadhoud
// Phone : 07333232
// Account Balance: 13000

// Please enter withdraw amount? 15000
// Amount Exceeds the balance, you can withdraw up to : 13000
// Please enter another amount? 10000

// Are you sure you want to perform this transaction? y/n ? y
//  Done Successfully New Balance is 3000
//  Press any key to go back to Transaction Menu...

// 6.3 --> [3]
//            Balances List (6) Client(s).
//______________________________________________________
// | Account Number	| Client Name	       | Balance
//______________________________________________________

// | A150	        | Mohammed Abu-Hadhoud | 13000
// | A151	        | Ali Fadi             | 4000
// | A152	        | Maher Ahmed	       | 5000
// | A153	        | Omar Mohammed	       | 9500
// | A154	        | Ali Maher	           | 544
// | A300	        | Hilal Ahmed	       | 6500
//______________________________________________________
//           Total Balances = 38544
// Press any key to go back to Transactions Menu...
//
//
// 7
//----------------------------------------------------
//             Manage Users Menu Screen
//----------------------------------------------------
// [1] List Users.
// [2] Add New User.
// [3] Delete User.
// [4] Update User.
// [5] Find User.
// [6] Main Menu.

// Choose what do you want to do? [1 to 6]?

// 7.1 --> [1]
//                     Users List (1) User(s).
// ______________________________________________________
// | User Name	| Password	| Permissions
// ______________________________________________________
// | Admin       | 1234      | -1
// ______________________________________________________

//  Press any key to go back to Manage Users Menu...

// 7.2 --> [2]
//----------------------------------------------------
//                 Add New User Screen
//----------------------------------------------------
// Adding New User:

// Enter Username? User1
// Enter Password? 1111

// Do you want to give full access? y/n? y

// User Added Successfully, do you want to add more Users? Y/N? y
// Adding New User:
// Enter Username? User1

// User with [User1] already exists, Enter another Username? User2
// Enter Password? 2222

// Do you want to give full access? y/n? n

// Do you want to give access to:
// Show Client List? y/n? y
// Add New Client? y/n? n
// Delete Client? y/n? n
// Update Client? y/n? n
// Find Client? y/n? y
// Transactions? y/n? n
// Manage Users? y/n? n

// User Added Successfully, do you want to add more Users? Y/N? n
// Press any key to go back to Manage Users Menu...

// 7.3 --> [3]
//----------------------------------------------------
//               Delete Users Screen
//----------------------------------------------------
// Please enter Username? User1

// The following are the user details:
//----------------------------------------------------
// Username    : User1
// Password    : 1111
// Permissions : -1
//----------------------------------------------------
// Are you sure you want to delete this User? y/n ? y
// User deleted Successfully
// Press any key to go back to Main Menu...

// (Another case if the user tried to delete the admin)

// Please enter Username? Admin
// You cannot Delete This User.

// Press any key to go back to Manage Users Menu...

// 7.4 --> [4]
//----------------------------------------------------
//                Update Users Screen
//----------------------------------------------------
// Please enter Username? User2

// The following are the user details:
//----------------------------------------------------
// Username : User2
// Password : 2222
// Permissions : 17
//----------------------------------------------------
// Are you sure you want to update this User? y/n ? y
// Enter Password? 1111

// Do you want to give full access? y/n? n

// Do you want to give access to:
// Show Client List? y/n? y
// Add New Client? y/n? n
// Delete Client? y/n? n
// Update Client? y/n? y
// Find Client? y/n? n
// Transactions? y/n? n
// Manage Users? y/n? n

// User Updated Successfully!
// Press any key to go back to Manage Users Menu...

// 7.5 --> [5]
//----------------------------------------------------
//                  Find User Screen
//----------------------------------------------------
// Please enter Username? Admin

// The following are the user details:
//----------------------------------------------------
// Username : Admin
// Password : 1234
// Permissions : -1
//----------------------------------------------------

// Press any key to go back to Manage Users Menu...

// Note:
// - if any user does not have the permission to enter any screen this should appear:
// ----------------------------------------------------
// Access Denied,
// You don't Have Permission To Do this,
// Please Contact Your Admin.
// ----------------------------------------------------

// Press any key to go back to Main Menu...

// 8
// Logout return you to login screen

struct stClientData
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    float accountBalance;
};

struct stUserData
{
    string name;
    string password;
    short permissions;
};

enum enMainMenuOption
{
    listClients = 1,
    addClient = 2,
    deleteClient = 3,
    updateClient = 4,
    findClient = 5,
    showTransactions = 6,
    manageUsers = 7,
    logout = 8
};

enum enMainMenuPermissions
{
    eAll = -1,
    eListClients = 1,
    eAddNewClient = 2,
    eDeleteClient = 4,
    eUpdateClient = 8,
    eFindClient = 16,
    eTransactions = 32,
    eManageUsers = 64,
};

const string usersFile = "Users.txt";
const string clientsFile = "ClientList.txt";
stUserData currentUser;

void showMainMenuScreen();
void showAccessDeniedScreen();
void manageUsersScreen();
bool checkAccessPermission(enMainMenuPermissions permission);

vector<string> splitWords(string str, string delimiter)
{
    int pos = 0;
    vector<string> vWords;
    while ((pos = str.find(delimiter)) != std::string::npos)
    {
        if (str.substr(0, pos) != "")
            vWords.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    if (!str.empty())
        vWords.push_back(str);

    return vWords;
}

stClientData convertLineToClientRecord(string line, string delimiter = "#//#")
{
    stClientData clientData;
    vector<string> vClientData = splitWords(line, delimiter);
    clientData.accountNumber = vClientData[0];
    clientData.pinCode = vClientData[1];
    clientData.name = vClientData[2];
    clientData.phone = vClientData[3];
    clientData.accountBalance = stof(vClientData[4]);
    return clientData;
}
string convertClientRecordToLine(stClientData clientData, string delimiter = "#//#")
{
    string line = "";
    line += clientData.accountNumber + delimiter;
    line += clientData.pinCode + delimiter;
    line += clientData.name + delimiter;
    line += clientData.phone + delimiter;
    line += to_string(clientData.accountBalance);
    return line;
}

stUserData convertLineToUserRecord(string line, string delimiter = "#//#")
{
    stUserData userData;
    vector<string> vUserData = splitWords(line, delimiter);
    userData.name = vUserData[0];
    userData.password = vUserData[1];
    userData.permissions = stoi(vUserData[2]);
    return userData;
}
string convertUserRecordToLine(stUserData userData, string delimiter = "#//#")
{
    string line = "";
    line += userData.name + delimiter;
    line += userData.password + delimiter;
    line += to_string(userData.permissions);
    return line;
}

vector<stClientData> readClientsFile()
{
    string line;
    vector<stClientData> vClientsData;
    fstream file;
    file.open(clientsFile, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            vClientsData.push_back(convertLineToClientRecord(line));
        }

        file.close();
    }

    return vClientsData;
}

void showScreenHeader(string sName)
{
    cout << "-------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t" << sName << endl;
    cout << "-------------------------------------------------------------------------------------------------\n";
}

void printClientData(stClientData clientData)
{
    cout << "| " << left << setw(18) << clientData.accountNumber << "| " << setw(18) << clientData.pinCode << "| " << setw(28) << clientData.name << "| " << setw(18) << clientData.phone << "| " << setw(18) << clientData.accountBalance << endl;
}
void showClientListScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eListClients))
    {
        showAccessDeniedScreen();
        return;
    }

    vector<stClientData> vClientsData = readClientsFile();
    showScreenHeader("Show Client List Screen");
    cout << "\t\t\t\t\tClient List (" << vClientsData.size() << ") Client(s).\n";
    cout << "____________________________________________________________________________________________________\n";
    cout << left << setw(20) << "| Account Number " << setw(20) << "| Pin Code" << setw(30) << "| Client Name" << setw(20) << "| Phone" << setw(20) << "| Balance" << endl;
    cout << "____________________________________________________________________________________________________\n";
    for (int i = 0; i < vClientsData.size(); i++)
    {
        printClientData(vClientsData[i]);
    }
    cout << "____________________________________________________________________________________________________\n";
}

short readMenuOption(short from, short to)
{
    short nOfOperation;
    cout << "Choose what do you want to do? [" << from << " to " << to << "]?\n";
    cin >> nOfOperation;
    return nOfOperation;
}

// Adding New Client:

bool isAccountExist(vector<stClientData> &vClientsData, string accountNumber)
{
    for (int i = 0; i < vClientsData.size(); i++)
    {
        if (accountNumber == vClientsData[i].accountNumber)
            return true;
    }
    return false;
}

bool findClientByAccount(vector<stClientData> &vClientsData, string accountNumber, stClientData &client)
{
    for (int i = 0; i < vClientsData.size(); i++)
    {
        if (accountNumber == vClientsData[i].accountNumber)
        {
            client = vClientsData[i];
            return true;
        }
    }
    return false;
}

stClientData readingNewClient(vector<stClientData> &vClientsData)
{
    stClientData newClient;
    cout << "Adding New Client:\n";
    cout << "Enter Account Number?\n";
    cin >> newClient.accountNumber;
    while (isAccountExist(vClientsData, newClient.accountNumber))
    {
        cout << "Client with [" << newClient.accountNumber << "] already exists, Enter another Account Number?";
        cin >> newClient.accountNumber;
    }
    cout << "Enter PinCode?";
    cin >> newClient.pinCode;
    cin.ignore();
    cout << "Enter Name?";
    getline(cin, newClient.name);
    cout << "Enter Phone?";
    cin >> newClient.phone;
    cout << "Enter AccountBalance?";
    cin >> newClient.accountBalance;
    return newClient;
}

bool addDataLineToFile(string fileName, string line)
{
    fstream file;
    file.open(fileName, ios::out | ios::app);
    if (file.is_open())
    {
        file << line << endl;
        file.close();
        return true;
    }
    return false;
}
bool addNewClient(vector<stClientData> &vClientsData)
{
    bool addingResult;
    stClientData newClient;
    newClient = readingNewClient(vClientsData);
    addingResult = addDataLineToFile(clientsFile, convertClientRecordToLine(newClient));
    if (addingResult)
        vClientsData.push_back(newClient);
    return addingResult;
}

void addNewClientsScreen()
{
    vector<stClientData> vClientsData = readClientsFile();
    bool addingResult;
    char addMore = 'n';
    showScreenHeader("Add New Clients Screen");
    do
    {
        addingResult = addNewClient(vClientsData);
        if (addingResult)
        {
            cout << "Client Added Successfully, do you want to add more clients? Y/N?";
            cin >> addMore;
        }
    } while (addMore == 'y' || addMore == 'Y');
}

// delete client

void printClientDetails(stClientData clientData)
{
    cout << "\nThe following are the client details:\n";
    cout << "Account Number: " << clientData.accountNumber << endl;
    cout << "Pin Code : " << clientData.pinCode << endl;
    cout << "Name : " << clientData.name << endl;
    cout << "Phone : " << clientData.phone << endl;
    cout << "Account Balance: " << clientData.accountBalance << endl;
}

bool saveClientsToFile(vector<stClientData> &vClientsData)
{
    fstream file;
    file.open(clientsFile, ios::out);
    if (file.is_open())
    {
        for (int j = 0; j < vClientsData.size(); j++)
        {
            file << convertClientRecordToLine(vClientsData[j]) << endl;
        }
        file.close();
        return true;
    }
    return false;
}

void saveUsersToFile(vector<stUserData> &vUsers)
{
    fstream file;
    file.open(usersFile, ios::out);
    if (file.is_open())
    {
        for (stUserData U : vUsers)
        {
            file << convertUserRecordToLine(U) << endl;
        }
        file.close();
    }
}

bool deleteClientFromFile(vector<stClientData> &vClientsData, stClientData client)
{

    for (int i = 0; i < vClientsData.size(); i++)
    {
        if (client.accountNumber == vClientsData[i].accountNumber)
        {
            vClientsData.erase(vClientsData.begin() + i);
            return saveClientsToFile(vClientsData);
        }
    }
    return false;
}

bool confirmMessage(string message)
{
    char confirm;
    cout << message;
    cin >> confirm;
    return (confirm == 'y' || confirm == 'Y');
}

string readString(string message)
{
    string str;
    cout << message;
    getline(cin >> ws, str);
    return str;
}

void deleteClientScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eDeleteClient))
    {
        showAccessDeniedScreen();
        return;
    }

    stClientData clientData;
    vector<stClientData> vClientsData = readClientsFile();
    showScreenHeader("Delete Client Screen");
    string userAccountNumber = readString("Please enter AccountNumber?");
    if (!findClientByAccount(vClientsData, userAccountNumber, clientData))
        cout << "Client with Account Number (" << userAccountNumber << ") is Not Found!\n";
    else
    {
        printClientDetails(clientData);

        if (confirmMessage("Are you sure you want delete this client? y/n ? "))
        {
            if (deleteClientFromFile(vClientsData, clientData))
                cout << "Client Deleted Successfully.\n";
        }
    }
}

// update client

stClientData getUpdatedClient(string userAccountNumber)
{
    stClientData updatedClient;
    updatedClient.accountNumber = userAccountNumber;
    cout << "Enter PinCode? ";
    cin >> updatedClient.pinCode;
    cin.ignore();
    cout << "Enter Name? ";
    getline(cin, updatedClient.name);
    cout << "Enter Phone? ";
    cin >> updatedClient.phone;
    cout << "Enter AccountBalance? ";
    cin >> updatedClient.accountBalance;
    return updatedClient;
}

bool updateClientAndSave(stClientData updatedClient, vector<stClientData> &vClientsData)
{

    for (int i = 0; i < vClientsData.size(); i++)
    {
        if (updatedClient.accountNumber == vClientsData[i].accountNumber)
        {
            vClientsData[i] = updatedClient;
            return saveClientsToFile(vClientsData);
        }
    }
    return false;
}

void updateClientScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eUpdateClient))
    {
        showAccessDeniedScreen();
        return;
    }

    vector<stClientData> vClientsData = readClientsFile();
    stClientData client;
    string userAccountNumber;

    showScreenHeader("Update Client Info Screen");
    userAccountNumber = readString("Please enter AccountNumber?");
    if (findClientByAccount(vClientsData, userAccountNumber, client))
    {
        printClientDetails(client);
        if (confirmMessage("Are you sure you want update this client? y/n ? "))
        {
            if (updateClientAndSave(getUpdatedClient(userAccountNumber), vClientsData))
                cout << "Client Updated Successfully.\n";
        }
    }
    else
        cout << "Client with Account Number (" << userAccountNumber << ") is Not Found!\n";
}

// find client
void findClientScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eFindClient))
    {
        showAccessDeniedScreen();
        return;
    }

    vector<stClientData> vClientsData = readClientsFile();
    stClientData client;
    string userAccountNumber;

    showScreenHeader("Find Client Screen");
    userAccountNumber = readString("Please enter AccountNumber?");

    if (!findClientByAccount(vClientsData, userAccountNumber, client))
        cout << "Client with Account Number (" << userAccountNumber << ") is Not Found!\n";
    else
        printClientDetails(client);
}

// Transactions

enum enTransactionOptions
{
    deposit = 1,
    withdraw = 2,
    totalBalances = 3,
    mainMenu = 4
};

void showTransactionsScreen();

bool performDepositeByAccountNum(vector<stClientData> &vClients, stClientData &client, float depositAmount)
{
    for (stClientData &c : vClients)
    {
        if (c.accountNumber == client.accountNumber)
        {
            c.accountBalance += depositAmount;
            client = c;
            return saveClientsToFile(vClients);
        }
    }
    return false;
}

void goBackToTransactionsMenu()
{
    cout << "Press any key to go back to Transaction Menu...";
    system("pause>0");
    showTransactionsScreen();
}

void showDepositeScreen(vector<stClientData> &vClients)
{
    string userAccountNumber;
    stClientData client;
    float depositAmount;
    showScreenHeader("Deposit Screen");
    userAccountNumber = readString("Please enter AccountNumber?");
    while (!findClientByAccount(vClients, userAccountNumber, client))
    {
        cout << "Client with [" << userAccountNumber << "] does not exist.\n";
        userAccountNumber = readString("Please enter AccountNumber?");
    }

    printClientDetails(client);
    cout << "Please enter deposit amount? ";
    cin >> depositAmount;
    if (confirmMessage("Do you want to perform this transaction? y/n ?"))
    {
        if (performDepositeByAccountNum(vClients, client, depositAmount))
        {
            cout << "Done Successfully New Balance is " << client.accountBalance << endl;
        }
    }
}

void showWithdrawScreen(vector<stClientData> &vClients)
{
    string userAccountNumber;
    stClientData client;
    float withdrawAmount;
    showScreenHeader("Withdraw Screen");
    userAccountNumber = readString("Please enter AccountNumber?");
    if (!findClientByAccount(vClients, userAccountNumber, client))
    {
        cout << "Client with [" << userAccountNumber << "] does not exist.\n";
    }
    else
    {
        printClientDetails(client);
        cout << "Please enter Withdraw amount? ";
        cin >> withdrawAmount;
        while (withdrawAmount > client.accountBalance)
        {
            cout << "Amount Exceeds the balance, you can withdraw up to : " << client.accountBalance << endl;
            cout << "Please enter another amount? ";
            cin >> withdrawAmount;
        }
        if (confirmMessage("Do you want to perform this transaction? y/n ?"))
        {
            if (performDepositeByAccountNum(vClients, client, withdrawAmount * -1))
            {
                cout << "Done Successfully New Balance is " << client.accountBalance << endl;
            }
        }
    }
}

void showBalanceList(vector<stClientData> &vClients)
{
    float total = 0;
    cout << "\t     Balances List (" << vClients.size() << ") Client(s).\n";
    cout << "______________________________________________________\n";
    cout << "| " << left << setw(16) << "Account Number" << setw(23) << "| Client Name" << " | Balance \n";
    cout << "______________________________________________________\n";
    for (stClientData &c : vClients)
    {
        cout << "| " << setw(16) << c.accountNumber << "| " << setw(21) << c.name << " | " << c.accountBalance << " \n";
        total = total + c.accountBalance;
    }
    cout << "______________________________________________________\n";
    cout << "           Total Balances = " << total << endl;
}

void performTransactionsOption(enTransactionOptions transactionChoice)
{
    vector<stClientData> vClients = readClientsFile();
    switch (transactionChoice)
    {
    case enTransactionOptions::deposit:
        system("cls");
        showDepositeScreen(vClients);
        goBackToTransactionsMenu();
        break;

    case enTransactionOptions::withdraw:
        system("cls");
        showWithdrawScreen(vClients);
        goBackToTransactionsMenu();
        break;

    case enTransactionOptions::totalBalances:
        system("cls");
        showBalanceList(vClients);
        goBackToTransactionsMenu();
        break;

    case enTransactionOptions::mainMenu:
        system("cls");
        showMainMenuScreen();
        break;
    }
}

void showTransactionsScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eTransactions))
    {
        showAccessDeniedScreen();
        return;
    }

    system("cls");
    showScreenHeader("Transactions Menu Screen");
    cout << "[1] Deposit.\n";
    cout << "[2] Withdraw.\n";
    cout << "[3] Total Balances.\n";
    cout << "[4] Main Menu.\n";
    performTransactionsOption((enTransactionOptions)readMenuOption(1, 4));
}

void goBackToMainMenu()
{
    cout << "\n\nPress any key to go back to Main Menu...";
    system("pause>0");
    showMainMenuScreen();
}

// login

vector<stUserData> readUsersFile()
{
    fstream uFile;
    string line;
    vector<stUserData> vUsers;
    uFile.open(usersFile, ios::in);
    if (uFile.is_open())
    {
        while (getline(uFile, line))
        {
            vUsers.push_back(convertLineToUserRecord(line));
        }
        uFile.close();
    }
    return vUsers;
}

bool findUserByNameAndPassword(stUserData &userToFind, string name, string password)
{
    vector<stUserData> vUsers = readUsersFile();
    for (stUserData U : vUsers)
    {
        if (U.name == name && U.password == password)
        {
            userToFind = U;
            return true;
        }
    }
    return false;
}

void login()
{
    // solution 1:
    // showScreenHeader("Login Screen");
    // stUserData user = readUserLoginData();
    // while (!findUserByNameAndPassword(currentUser, user.name,user.password))
    // {
    //     system("cls");
    //     showScreenHeader("Login Screen");
    //     cout << "Invalid Username/Password!\n";
    //     user.name = readString("Enter Username? ");
    //     user.password=readString("Enter Password? ");
    // }
    // showMainMenuScreen();

    // solution 2:
    bool loginSucceeded = true;
    string userName, userPassword;
    do
    {
        system("cls");
        showScreenHeader("Login Screen");
        if (!loginSucceeded)
            cout << "Invalid Username/Password!\n";
        userName = readString("Enter Username? ");
        userPassword = readString("Enter Password? ");
        loginSucceeded = findUserByNameAndPassword(currentUser, userName, userPassword);
    } while (!loginSucceeded);
    showMainMenuScreen();
}

// manage user

//----------------------------------------------------
//             Manage Users Menu Screen
//----------------------------------------------------
// [1] List Users.
// [2] Add New User.
// [3] Delete User.
// [4] Update User.
// [5] Find User.
// [6] Main Menu.

// Choose what do you want to do? [1 to 6]?

enum enManageUsersOptions
{
    listUsersOp = 1,
    addNewUserOp = 2,
    deleteUserOp = 3,
    updateUserOp = 4,
    findUserOp = 5,
    mainMenuOp = 6
};

// list Users

void printUserData(stUserData user)
{
    cout << "| " << setw(20) << user.name << "| " << setw(14) << user.password << "| " << setw(3) << user.permissions << endl;
}

void listUsers(vector<stUserData> vUsers)
{
    cout << "\t\tUsers List (" << vUsers.size() << ") User(s)." << endl;
    cout << "______________________________________________________\n";
    cout << "| " << left << setw(20) << "User Name" << setw(15) << "| Password" << setw(4) << " | Permissions \n";
    cout << "______________________________________________________\n";
    if (vUsers.size() == 0)
        cout << "\t\t\t\tNo Users Available In the System!";
    else
    {
        for (stUserData U : vUsers)
        {
            printUserData(U);
            cout << "______________________________________________________\n";
        }
    }
}

void goBackToManageUsersMenu()
{
    cout << "\nPress any key to go back to Manage Users Menu...\n";
    system("pause>0");
    manageUsersScreen();
}

// find user
bool findUserByName(vector<stUserData> vUsers, stUserData &userToFind, string uNameToSearch)
{

    for (stUserData U : vUsers)
    {
        if (uNameToSearch == U.name)
        {
            userToFind = U;
            return true;
        }
    }
    return false;
}

void printUserDetails(stUserData user)
{
    cout << "\nThe following are the user details:\n";
    cout << "----------------------------------------------------\n";
    cout << "Username    : " << user.name << endl;
    cout << "Password    : " << user.password << endl;
    cout << "Permissions : " << user.permissions << endl;
    cout << "----------------------------------------------------\n";
}
void findUserScreen(vector<stUserData> vUsers)
{
    stUserData userToFind = {};
    showScreenHeader("Find User Screen");
    string nameToSearch = readString("Please enter Username? ");
    if (findUserByName(vUsers, userToFind, nameToSearch))
        printUserDetails(userToFind);
    else
        cout << "\nUser with user name (" << nameToSearch << ") is Not Found!\n";
}

// add new user
short readPermissionToSet()
{
    short permissions = 0;
    if (confirmMessage("\nDo you want to give full access? y/n? "))
        return -1;

    cout << "\nDo you want to give access to:\n";

    if (confirmMessage("Show Client List? y/n? "))
        permissions += enMainMenuPermissions::eListClients;

    if (confirmMessage("Add New Client? y/n? "))
        permissions += enMainMenuPermissions::eAddNewClient;

    if (confirmMessage("Delete Client? y/n? "))
        permissions += enMainMenuPermissions::eDeleteClient;

    if (confirmMessage("Update Client? y/n? "))
        permissions += enMainMenuPermissions::eUpdateClient;

    if (confirmMessage("Find Client? y/n? "))
        permissions += enMainMenuPermissions::eFindClient;

    if (confirmMessage("Transactions? y/n? "))
        permissions += enMainMenuPermissions::eTransactions;

    if (confirmMessage("Manage Users? y/n? "))
        permissions += enMainMenuPermissions::eManageUsers;

    return permissions;
}

// Note:
// - if any user does not have the permission to enter any screen this should appear:
// ----------------------------------------------------
// Access Denied,
// You don't Have Permission To Do this,
// Please Contact Your Admin.
// ----------------------------------------------------

// Press any key to go back to Main Menu...

void showAccessDeniedScreen()
{
    system("cls");
    cout << "\n----------------------------------------------------\n";
    cout << "Access Denied,\n";
    cout << "You don't Have Permission To Do this,\n";
    cout << "Please Contact Your Admin.\n";
    cout << "----------------------------------------------------\n";
}

// permissions
bool checkAccessPermission(enMainMenuPermissions permission)
{
    if (currentUser.permissions == enMainMenuPermissions::eAll)
        return true;

    if ((permission & currentUser.permissions) == permission)
        return true;
    else
        return false;
}

stUserData readNewUser(vector<stUserData> vUsers)
{
    stUserData user;
    user.name = readString("Enter Username? ");
    while (findUserByName(vUsers, user, user.name))
    {
        cout << "User with [" << user.name << "] user name already exists,";
        user.name = readString(" Enter another Username? ");
    }
    user.password = readString("Enter Password? ");
    user.permissions = readPermissionToSet();
    return user;
}

void addNewUser(vector<stUserData> &vUsers)
{
    stUserData user = readNewUser(vUsers);
    addDataLineToFile(usersFile, convertUserRecordToLine(user));
    vUsers.push_back(user);
}

void addNewUsers()
{
    vector<stUserData> vUsers = readUsersFile();
    do
    {
        cout << "\nAdding New User:\n";
        addNewUser(vUsers);
    } while (confirmMessage("\nUser Added Successfully, do you want to add more Users? Y/N? "));
}

void addNewUserScreen()
{
    showScreenHeader("Add New User Screen");
    addNewUsers();
}

// deleteUser
void deleteUserFromFile(vector<stUserData> vUsers, stUserData user)
{
    fstream file;
    file.open(usersFile, ios::out);
    if (file.is_open())
    {
        for (stUserData U : vUsers)
        {
            if (user.name != U.name)
                file << convertUserRecordToLine(U) << endl;
        }
        file.close();
    }
}

void deleteUserByUserName(vector<stUserData> vUsers, stUserData user)
{
    if (user.name == "Admin")
    {
        cout << "You cannot Delete This User.\n";
        return;
    }

    if (findUserByName(vUsers, user, user.name))
    {
        printUserDetails(user);
        if (confirmMessage("Are you sure you want to delete this User? y/n ? "))
        {
            deleteUserFromFile(vUsers, user);
            cout << "User Deleted Successfully\n";
        }
    }
    else
        cout << "User with [" << user.name << "] user name Not Found!\n";
}

void deleteUserScreen(vector<stUserData> vUsers)
{
    showScreenHeader(" Delete Users Screen");
    stUserData user;
    user.name = readString("Please enter Username? ");
    deleteUserByUserName(vUsers, user);
}

// update User

void changeUserRecord(stUserData &user)
{
    user.password = readString("Enter Password? ");
    user.permissions = readPermissionToSet();
}

void updateUserByUserName(vector<stUserData> &vUsers, string userName)
{
    stUserData user;
    if (findUserByName(vUsers, user, userName))
    {
        printUserDetails(user);
        if (confirmMessage("Are you sure you want to update this User? y/n ? "))
        {
            changeUserRecord(user);
            for (stUserData &U : vUsers)
            {
                if (U.name == userName)
                {
                    U = user;
                    break;
                }
            }
            saveUsersToFile(vUsers);
            cout << "User Updated Successfully\n";
        }
    }
    else
        cout << "User with [" << userName << "] user name Not Found!\n";
}

void updateUserScreen(vector<stUserData> &vUsers)
{
    showScreenHeader("Update Users Screen");
    string userName = readString("Please enter Username? ");
    updateUserByUserName(vUsers, userName);
}

void performManageUsersOption(enManageUsersOptions userOption)
{
    vector<stUserData> vUsers = readUsersFile();
    switch (userOption)
    {
    case enManageUsersOptions::listUsersOp:
        system("cls");
        listUsers(vUsers);
        goBackToManageUsersMenu();
        break;
    case enManageUsersOptions::addNewUserOp:
        system("cls");
        addNewUserScreen();
        goBackToManageUsersMenu();
        break;
    case enManageUsersOptions::deleteUserOp:
        system("cls");
        deleteUserScreen(vUsers);
        goBackToManageUsersMenu();
        break;
    case enManageUsersOptions::updateUserOp:
        system("cls");
        updateUserScreen(vUsers);
        goBackToManageUsersMenu();
        break;
    case enManageUsersOptions::findUserOp:
        system("cls");
        findUserScreen(vUsers);
        goBackToManageUsersMenu();
        break;
    case enManageUsersOptions::mainMenuOp:
        showMainMenuScreen();
        break;
    }
}

void manageUsersScreen()
{
    if (!checkAccessPermission(enMainMenuPermissions::eManageUsers))
    {
        showAccessDeniedScreen();
        return;
    }

    system("cls");
    showScreenHeader("Manage Users Menu Screen");
    cout << "[1] List Users.\n";
    cout << "[2] Add New User.\n";
    cout << "[3] Delete User.\n";
    cout << "[4] Update User.\n";
    cout << "[5] Find User.\n";
    cout << "[6] Main Menu.\n";
    performManageUsersOption((enManageUsersOptions)readMenuOption(1, 6));
}

void performMainMenuOption(enMainMenuOption mainOption)
{
    switch (mainOption)
    {
    case enMainMenuOption::listClients:
        system("cls");
        showClientListScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::addClient:
        system("cls");
        addNewClientsScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::deleteClient:
        system("cls");
        deleteClientScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::updateClient:
        system("cls");
        updateClientScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::findClient:
        system("cls");
        findClientScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::showTransactions:
        showTransactionsScreen();
        break;
    case enMainMenuOption::manageUsers:
        manageUsersScreen();
        break;
    case enMainMenuOption::logout:
        system("cls");
        login();
        break;
    default:
        cout << "Invalid Option";
    }
}

void showMainMenuScreen()
{
    system("cls");
    cout << "===================================================\n";
    cout << "\t\t Main Menu Screen\n";
    cout << "===================================================\n";
    cout << "[1] Show Client List.\n";
    cout << "[2] Add New Client.\n";
    cout << "[3] Delete Client.\n";
    cout << "[4] Update Client Info.\n";
    cout << "[5] Find Client.\n";
    cout << "[6] Transactions.\n";
    cout << "[7] Manage Users.\n";
    cout << "[8] Logout.\n";
    cout << "====================================================\n";
    performMainMenuOption((enMainMenuOption)readMenuOption(1, 8));
}

int main()
{
    login();
}