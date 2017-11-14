/*
* Brute Force (4 chars or less)
* Author: Tim Lee
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string encryptString(string);

int main(int argc, char *argv[]){
    
    int numLetters = 0;
    
    /* Change 'test' manually. */
    string test = "lulz";
    
    string combo = "";
    
    for(int i = 0; i<test.length(); i++){
        combo += '-';
        numLetters++;
    }
    
    cout << "NUMBER OF CHARACTERS: " << numLetters << endl;
    cout << combo << endl;
    
    for(int k = 32; k < 126; ++k){   
        combo[0] = k;
        
        for(int j = 32; j < 126; ++j){          
            combo[1] = j;
            
            for(int l = 32; l < 126; ++l){           
                combo[2] = l;
                
                for(int m = 32; m < 126; ++m){             
                    combo[3] = m;
                    
                    if(combo==test){
                        cout << "MATCH FOUND:" << endl;
                        string encrypt = encryptString(combo);
                        cout << "ENCRYPTED: " << encrypt << endl;
                        cout << "DECRYTPED: " << combo << endl;
                        return 1;
                    }
                }
            }
        }
    }
    /* If all the possible combinations have been run through and no match
     * has been found. */
    cout << "MATCH NOT FOUND" << endl;

    return 0;
}

/*
 * The encryption function uses a simple XOR method to encrypt the matching 
 * string.
 */
string encryptString(string toEncrypt){
    
    // Seeds a random number so it's different each time.
    srand(time(NULL));
    
    // Chooses random ASCII values
    char random[4];
    for(int i = 0; i < 4; i++){
        char randomValue = rand()%(90 + 1 - 65) + 65;
        random[i] = randomValue;
    }
    
    string encryption = toEncrypt;
    
    for(int i = 0; i < toEncrypt.size(); i++){
        encryption[i] = toEncrypt[i] ^ random[i % (sizeof(random))];
    }
    return encryption;
}



