#include <iostream>
using namespace std;

void encrypt(){
    string Plain_Text, Cipher_Text;
    int key;
    cout << "ENTER YOUR MESSAGE HERE (WITHOUT SPACES): " << endl;
    cin >> Plain_Text;
    cout << "ENTER KEY (1-25): " << endl;
    cin >> key;
    for(int i = 0; i < Plain_Text.size(); i++){
        if(Plain_Text[i] >= 'a' && Plain_Text[i] <= 'z'){
            // Convert lowercase to uppercase first, then shift with wrap-around
            Cipher_Text += (Plain_Text[i] - 'a' + key) % 26 + 'A';
        } else if(Plain_Text[i] >= 'A' && Plain_Text[i] <= 'Z'){
            // Shift uppercase letter with wrap-around
            Cipher_Text += (Plain_Text[i] - 'A' + key) % 26 + 'A';
        } else {
            // Non-alpha characters pass through unchanged
            Cipher_Text += Plain_Text[i];
        }
    }
    cout << "ENCRYPTED TEXT IS: " << Cipher_Text << endl;
}

void decrypt(){
    string Cipher_Text, Plain_Text;
    int key;
    cout << "ENTER YOUR ENCRYPTED MESSAGE HERE (WITHOUT SPACES): " << endl;
    cin >> Cipher_Text;
    cout << "ENTER KEY (1-25): " << endl;
    cin >> key;
    for(int i = 0; i < Cipher_Text.size(); i++){
        if(Cipher_Text[i] >= 'a' && Cipher_Text[i] <= 'z'){
            // Convert lowercase to uppercase first, then reverse-shift with wrap-around
            Plain_Text += (Cipher_Text[i] - 'a' - key + 26) % 26 + 'A';
        } else if(Cipher_Text[i] >= 'A' && Cipher_Text[i] <= 'Z'){
            // Reverse-shift uppercase letter with wrap-around
            Plain_Text += (Cipher_Text[i] - 'A' - key + 26) % 26 + 'A';
        } else {
            // Non-alpha characters pass through unchanged
            Plain_Text += Cipher_Text[i];
        }
    }
    cout << "YOUR MESSAGE TEXT IS: " << Plain_Text << endl;
}

int main(){
    string Plain_Text, Cipher_Text;
    int key, menu;
    cout << "===============================================" << endl;
    cout << "W E L C O M E   T O   C A E S A R   C I P H E R" << endl;
    cout << "===============================================" << endl;
    do {
        cout << "PRESS 1 TO ENCRYPT YOUR MESSAGE: " << endl;
        cout << "PRESS 2 TO DECRYPT YOUR MESSAGE: " << endl;
        cout << "PRESS 3 TO EXIT: " << endl;
        cin >> menu;
        switch(menu){
        case 1: encrypt();
            break;
        case 2: decrypt();
            break;   // FIX: missing break caused fall-through into default every time
        case 3:
            cout << "GOODBYE..." << endl;
            break;
        default:
            cout << "WRONG CHOICE...." << endl;
            break;
        }
    }
    while(menu != 3);   // FIX: was != 2, which exited after decrypt and trapped encrypt forever
}

