// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
   

//  USING FOR LOOP
//    string decrypted;
//    string encrypted;
//    char c{};    
//    size_t position{};
//    
//    cout << "\nEnter your secret message: ";
//    getline(cin, decrypted);
//    
//    cout << "\nEncrypting message ..." << endl;
//    
//    for (size_t i{0}; i < decrypted.length(); ++i)  {
//        c = decrypted.at(i);
//        position = alphabet.find(c);
//        if (position != string::npos) 
//            c = key.at(position);
//        encrypted.insert(i,1,c);
//    } 
//    
//    cout << "\nEncrypted message: ";
//    cout << encrypted << endl;
//    
//    cout << "\nDecrypting message ..." << endl;
//    
//    decrypted.clear();
//    
//    for (size_t i{0}; i < encrypted.length(); ++i)  {
////  FIND THE POSITION OF THE CHAR IN THE ALPHABET
//        c = encrypted.at(i);
//        position = key.find(c);
////  FIND THE CHAR THAT IS AT THAT SAME POSITION IN THE KEY STRING
//        if (position != string::npos) {
//            c = alphabet.at(position);
//        }
//        decrypted.insert(i,1,c);
//    }
//    
//    cout << "\nDecrypted message: ";
//    cout << decrypted << endl;
    
//  USING RANGE BASED FOR LOOP    
    
    string secret_message{};
    cout << "\nEnter your secret message: ";
    getline(cin, secret_message);
    
    cout << "\nEncrypting message ..." << endl;
    string encrypted_message{};
    
    for (char c : secret_message)   {
        size_t position = alphabet.find(c);
        if (position != string::npos)   {
            encrypted_message += key.at(position);
        }   else {
            encrypted_message += c;
        }
    }
    
    cout << "\nEncrypted message: ";
    cout << encrypted_message << endl;
    
    cout << "\nDecrypting message ..." << endl;
    
    string decrypted_message{};
    
    for (char c : encrypted_message)   {
        size_t position = key.find(c);
        if (position != string::npos)   {
            decrypted_message += alphabet.at(position);
        }   else {
            decrypted_message += c;
        }
    }
    cout << "\nDecrypted message: ";
    cout << decrypted_message << endl;
    
    
    cout << endl;
    return 0;
}

