// #include <iostream>
// #include <fstream>
// using namespace std;

// string simple_encrypt(const string& text) {
//     string encrypted = text;
//     for (char& c : encrypted) {
//         c += 3; 
//     }
//     return encrypted;
// }

// string simple_decrypt(const string& text) {
//     string decrypted = text;
//     for (char& c : decrypted) {
//         c -= 3; 
//     }
//     return decrypted;
// }

// int main() {
//     string original_text = "Hello, this is a secret message!";
    
//     ofstream original_file("original.txt");
//     original_file << original_text;
//     original_file.close();
    
//     ifstream read_original("original.txt");
//     string content((istreambuf_iterator<char>(read_original)), istreambuf_iterator<char>());
//     read_original.close();
    
//     string encrypted_text = simple_encrypt(content);
    
//     ofstream encrypted_file("encrypted.txt");
//     encrypted_file << encrypted_text;
//     encrypted_file.close();
    
//     ifstream read_encrypted("encrypted.txt");
//     string encrypted_content((istreambuf_iterator<char>(read_encrypted)), istreambuf_iterator<char>());
//     read_encrypted.close();
    
//     string decrypted_text = simple_decrypt(encrypted_content);
    
//     cout << "Original Text: " << original_text << endl;
//     cout << "Encrypted Text: " << encrypted_text << endl;
//     cout << "Decrypted Text: " << decrypted_text << endl;
    
//     return 0;
// }