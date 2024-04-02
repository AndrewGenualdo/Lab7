/*
     Author:  Drew Genualdo
      Class:  CSI-240-04
 Assignment: Lab 7
 Due Date: Mar 5, 2024 @ 1pm

Description:
   Basic encryption with input/output files and a key

Certification of Authenticity:
   I certify that this is entirely my own work, except where I have given
   fully-documented references to the work of others.I understand the
   definition and consequences of plagiarism and acknowledge that the
   assessor of this assignment may, for the purpose of assessing this
   assignment:
   - Reproduce this assignment and provide a copy to another member of
     academic staff; and/or
   - Communicate a copy of this assignment to a plagiarism checking
     service(which may then retain a copy of this assignment on its
	 database for the purpose of future plagiarism checking)
*/

#ifndef LAB7_ENCRYPTION_H
#define LAB7_ENCRYPTION_H

#include <string>

using namespace std;


class Encryption
{
protected:
    string mInputFileName, mOutputFileName;
    int mKey;

public:
    Encryption();
    Encryption(string inputFileName, string outputFileName, int key);
    Encryption(Encryption &obj);
    ~Encryption();

    int getKey();

    void setKey(int key);

    void encrypt();

    virtual char transform(char ch) = 0;
};


#endif //LAB7_ENCRYPTION_H
