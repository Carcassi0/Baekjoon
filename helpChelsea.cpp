#include <iostream>
#include <cstring>

using namespace std;

struct player
{
    int price;
    char name[100];
};

struct selectedPlayer
{
    char name[100];
};

int main()
{
    int testCase;
    
    struct player playerList[100];
    struct selectedPlayer selectedPlayerList[100];

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int maxPrice = 0;
        int maxPricePlayer = 0;
        int playerNum = 0;
        cin >> playerNum;
        for (int j = 0; j < playerNum; j++)
        {
            cin >> playerList[j].price;
            cin >> playerList[j].name;
        }
        maxPrice = playerList[0].price;
        for (int j = 1; j < playerNum; j++)
        {
            if (playerList[j].price > maxPrice)
            {
                maxPricePlayer = j;
                maxPrice = playerList[j].price;
            }
            
        }
        strcpy(selectedPlayerList[i].name, playerList[maxPricePlayer].name);
        
    }

    for (int i = 0; i < testCase; i++)
    {
        cout << selectedPlayerList[i].name << endl;
    }

    return 0;
}