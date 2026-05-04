#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

//===================================================
//                 Main Menu Screen
//===================================================
// [1] Show Client List.
// [2] Add New Client.
// [3] Delete Client.
// [4] Update Client Info.
// [5] Find Client.
// [6] Transactions
// [7] Exit.
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

//[1]
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

// [2]
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

// [3]
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
//
// 7
//----------------------------------------------------
//             Program Ends :-)
//----------------------------------------------------

void showMainMenuScreen();

struct stClientData
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    float accountBalance;
};

enum enMainMenuOption
{
    listClients = 1,
    addClient = 2,
    deleteClient = 3,
    updateClient = 4,
    findClient = 5,
    showTransactions = 6,
    exitOption = 7
};

vector<string>
splitWords(string str, string delimiter)
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

stClientData convertLineToRecord(string line, string delimiter = "#//#")
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
string convertRecordToLine(stClientData clientData, string delimiter = "#//#")
{
    string line = "";
    line += clientData.accountNumber + delimiter;
    line += clientData.pinCode + delimiter;
    line += clientData.name + delimiter;
    line += clientData.phone + delimiter;
    line += to_string(clientData.accountBalance);
    return line;
}

vector<stClientData> readClientsFile()
{
    string line;
    vector<stClientData> vClientsData;
    fstream clientsFile;
    clientsFile.open("ClientList.txt", ios::in);
    if (clientsFile.is_open())
    {
        while (getline(clientsFile, line))
        {
            vClientsData.push_back(convertLineToRecord(line));
        }

        clientsFile.close();
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

bool addClientToFile(string line)
{
    fstream clientsFile;
    clientsFile.open("ClientList.txt", ios::out | ios::app);
    if (clientsFile.is_open())
    {
        clientsFile << line << endl;
        clientsFile.close();
        return true;
    }
    return false;
}
bool addNewClient(vector<stClientData> &vClientsData)
{
    bool addingResult;
    stClientData newClient;
    newClient = readingNewClient(vClientsData);
    addingResult = addClientToFile(convertRecordToLine(newClient));
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
    file.open("ClientList.txt", ios::out);
    if (file.is_open())
    {
        for (int j = 0; j < vClientsData.size(); j++)
        {
            file << convertRecordToLine(vClientsData[j]) << endl;
        }
        file.close();
        return true;
    }
    return false;
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

string readAccountNumber()
{
    string userAccountNumber;
    cout << "Please enter AccountNumber?";
    cin >> userAccountNumber;
    return userAccountNumber;
}

void deleteClientScreen()
{
    stClientData clientData;
    vector<stClientData> vClientsData = readClientsFile();
    showScreenHeader("Delete Client Screen");
    string userAccountNumber = readAccountNumber();
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

bool updateClientFile(stClientData updatedClient, vector<stClientData> &vClientsData)
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
    vector<stClientData> vClientsData = readClientsFile();
    stClientData client;
    string userAccountNumber;

    showScreenHeader("Update Client Info Screen");
    userAccountNumber = readAccountNumber();
    if (findClientByAccount(vClientsData, userAccountNumber, client))
    {
        printClientDetails(client);
        if (confirmMessage("Are you sure you want update this client? y/n ? "))
        {
            if (updateClientFile(getUpdatedClient(userAccountNumber), vClientsData))
                cout << "Client Updated Successfully.\n";
        }
    }
    else
        cout << "Client with Account Number (" << userAccountNumber << ") is Not Found!\n";
}

// find client
void findClientScreen()
{
    vector<stClientData> vClientsData = readClientsFile();
    stClientData client;
    string userAccountNumber;

    showScreenHeader("Find Client Screen");
    userAccountNumber = readAccountNumber();

    if (!findClientByAccount(vClientsData, userAccountNumber, client))
        cout << "Client with Account Number (" << userAccountNumber << ") is Not Found!\n";
    else
        printClientDetails(client);
}

// Transactions

enum eTransactions
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
    userAccountNumber = readAccountNumber();
    while (!findClientByAccount(vClients, userAccountNumber, client))
    {
        cout << "Client with [" << userAccountNumber << "] does not exist.\n";
        userAccountNumber = readAccountNumber();
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
    userAccountNumber = readAccountNumber();
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

void performTransactionsOption(eTransactions transactionChoice)
{
    vector<stClientData> vClients = readClientsFile();
    switch (transactionChoice)
    {
    case eTransactions::deposit:
        system("cls");
        showDepositeScreen(vClients);
        goBackToTransactionsMenu();
        break;

    case eTransactions::withdraw:
        system("cls");
        showWithdrawScreen(vClients);
        goBackToTransactionsMenu();
        break;

    case eTransactions::totalBalances:
        system("cls");
        showBalanceList(vClients);
        goBackToTransactionsMenu();
        break;

    case eTransactions::mainMenu:
        system("cls");
        showMainMenuScreen();
        break;
    }
}

void showTransactionsScreen()
{
    system("cls");
    showScreenHeader("Transactions Menu Screen");
    cout << "[1] Deposit.\n";
    cout << "[2] Withdraw.\n";
    cout << "[3] Total Balances.\n";
    cout << "[4] Main Menu.\n";
    performTransactionsOption((eTransactions)readMenuOption(1, 4));
}

void goBackToMainMenu()
{
    cout << "\n\nPress any key to go back to Main Menu...";
    system("pause>0");
    showMainMenuScreen();
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
        system("cls");
        showTransactionsScreen();
        goBackToMainMenu();
        break;
    case enMainMenuOption::exitOption:
        system("cls");
        showScreenHeader("Program Ends :-)");

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
    cout << "[7] Exit.\n";
    cout << "====================================================\n";
    performMainMenuOption((enMainMenuOption)readMenuOption(1, 7));
}

int main()
{
    showMainMenuScreen();
}