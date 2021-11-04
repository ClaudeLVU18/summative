int main()
{   
    bool endProg = false;
    while (endProg != true)
    {
        system("CLS");
        cout <<"Welcome to Ras Al Khaimah Bus Terminal.\nHere are the fares for each trip to an emirate.\n\n";
        cout<<"1. Abu Dhabi, transportation charges are AED 1000.\n2. Sharjah, transportation charges are AED 500.\n3. Ajman, transportation charges are AED 390.\n4. Dubai, transportation charges are AED 650.\n\n";
        cout<<"Please select the number of your destination:  ";
        int userInput;
        cin >> userInput;

        if(cin.fail()) // Cin fail used to prevent users from inputting inappropriate responses.
        {
        cin.clear();
        cout << "\n\nERROR: Invalid Input, please select the number of your destination:  ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin>>userInput;
        }

        

        if (userInput == 1)
        {
        cout<<"\nYou have selected 'Abu Dhabi'. Transportation charges are AED 1000.\n\nDo you want to avail the transportation? (Y/N): ";
        char confirm;
        cin >> confirm;
        switch (confirm)
        {
        case 'Y':
        case 'y':
            cout << "Thank you, please redeem your ticket from the counter.";
            cout<<"\n\nWould you like to return to the main menu?";
            char returnmenu;
            cin >> returnmenu;
            switch (returnmenu)
            {
            case 'Y':
            case 'y':
            cout <<"\n\nThank you for using Ras Al Khaimah Bus Terminal services.";
                
                break;
            case 'N':
            case 'n':
                    endProg = true;
                    break;
            default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>returnmenu;
                break;
            }
            
            break;
        
        default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>confirm;
            break;
        }
       
    }
    else if (userInput == 2)
        {
        cout<<"\nYou have selected 'Sharjah'. Transportation charges are AED 500.\n\nDo you want to avail the transportation? (Y/N): ";
        char confirm;
        cin >> confirm;
        switch (confirm)
        {
        case 'Y':
        case 'y':
            cout << "Thank you, please redeem your ticket from the counter.";
            cout<<"\n\nWould you like to return to the main menu?";
            char returnmenu;
            cin >> returnmenu;
            switch (returnmenu)
            {
            case 'Y':
            case 'y':
            cout <<"\n\nThank you for using Ras Al Khaimah Bus Terminal services.";
                
                break;
            case 'N':
            case 'n':
                    endProg = true;
                    break;
            default:
            cout <<"ERROR: Y/N only please.";
            cin >>returnmenu;
                break;
            }
            
            break;
        
        default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>confirm;
            break;
        }
       
    }
    else if (userInput == 3)
        {
        cout<<"\nYou have selected 'Ajman'. Transportation charges are AED 390.\n\nDo you want to avail the transportation? (Y/N): ";
        char confirm;
        cin >> confirm;
        switch (confirm)
        {
        case 'Y':
        case 'y':
            cout << "Thank you, please redeem your ticket from the counter.";
            cout<<"\n\nWould you like to return to the main menu?";
            char returnmenu;
            cin >> returnmenu;
            switch (returnmenu)
            {
            case 'Y':
            case 'y':
            cout <<"\n\nThank you for using Ras Al Khaimah Bus Terminal services.";
                
                break;
            case 'N':
            case 'n':
                    endProg = true;
                    break;
            default:
            cout <<"ERROR: Y/N only please.";
            cin >>returnmenu;
                break;
            }
            
            break;
        
        default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>confirm;
            break;
        }
       
    }
    else if (userInput == 4)
        {
        cout<<"\nYou have selected 'Dubai'. Transportation charges are AED 650.\n\nDo you want to avail the transportation? (Y/N): ";
        char confirm;
        cin >> confirm;
        switch (confirm)
        {
        case 'Y':
        case 'y':
            cout << "Thank you, please redeem your ticket from the counter.";
            cout<<"\n\nWould you like to return to the main menu?";
            char returnmenu;
            cin >> returnmenu;
            switch (returnmenu)
            {
            case 'Y':
            case 'y':
            cout <<"\n\nThank you for using Ras Al Khaimah Bus Terminal services.";
                
                break;
            case 'N':
            case 'n':
                    endProg = true;
                    break;

            default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>returnmenu;
                break;
            }
            
            break;
        
        default:
            cout<<"\n\nWould you like to return to the main menu?";
            cin >>confirm;
            break;
        }
       
    }
    else{
        cout<<"ERROR: Invalid Input. Please select the number of your destination.";
    }
      
