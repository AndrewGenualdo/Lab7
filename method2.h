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

#ifndef LAB7_METHOD2_H
#define LAB7_METHOD2_H

#include "encryption.h"
using namespace std;

class Method2 : public Encryption
{
public:
    Method2();
    Method2(string inputFileName, string outputFileName, int key);
    Method2(Method2& obj);
    ~Method2();

    virtual char transform(char ch);
};


#endif //LAB7_METHOD2_H
