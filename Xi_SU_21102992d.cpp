#include<iostream>
using namespace std;

int main(){
    char c = 'A';
    int branch;
    cout << "Please input the branch size: ";
    cin >> branch;

    //Draw Branch
    for (int i = 1; i <= branch; i++)
    {
        //Print Space every line before;
        for (int j = 0; j < branch-i; j++)
        {
            cout << " ";
        }
        
        //Print sequential capital letters
        for (int j = 0; j < (i* 2 -1); j++)
        {
            cout << c;
            if (c == 'Z')
            {
                c = 'A';
            }
            else{
                c++;
            }
        }
        cout << endl;
    }
    
    //Draw Trunk
    for (int i = 0; i < branch/2; i++)
    {
        // Print space before line
        int dis = (branch*2-2)/2;
        for (int j = 1; j < dis; j++)
        {
            cout << " ";
        }
        // Print letters
        cout << c << " " << c << endl;
        if (c == 'Z')
        {
            c = 'A';
        }
        else
        {
            c++;
        }
    }
    
    system("Pause");
    return 0;
}