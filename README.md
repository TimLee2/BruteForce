# BruteForce
A simple brute force program matching up to four characters.

## Description
A user-defined string named 'test' will be compared against all possible n-number of character combinations until a match is found equal to 'test'. The matching string will then be encrypted.

The 'test' string needs to be changed manually.

# Getting Started

## Prerequisites

The g++ compiler will need to be installed on the system and used for compilation and execution of this program.
More information about the g++ compiler along with the installation instructions can be found [here](https://gcc.gnu.org/).

## Compilation and Execution

Compilation of the program is as follows:
> g++ bruteforce.cpp -o [ExecutableName]

To run the program:
> ./[ExecutableName]

# Usage

The encryptionString() class will produce varying results each time the program is run.
The code
```
char randomValue = rand()%(90+1-65) + 65;
```
will produce random values between certain characters in the [ASCII table](http://www.asciitable.com/).

The following will then place each randomly selected ASCII value into a random element in the array:
```
for(int i = 0; i < toEncrypt.size(); i++){
    encryption[i] = toEncrypt[i] ^ random[i % (sizeof(random))];
}
```

# Examples

If string 'test' is set to "temp", the resulting output will follow:
```
NUMBER OF CHARACTERS: 4
----
MATH FOUND:
ENCRYPTED: 4ejn
DECRYPTED: temp
```

If no match is found with 'test' and 'test' is set to "zzzz", then the following will appear:
```
NUMBER OF CHARACTERS: 4
----
MATCH NOT FOUND
```
