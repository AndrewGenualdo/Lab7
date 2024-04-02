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

#include "encryption.h"
#include "fstream"
using namespace std;

/*     Pre: None
 *    Post: Default values will be initialized
 * Purpose: Default constructor
 *************************************************************************************************/
Encryption::Encryption()
{
    mInputFileName = "";
    mOutputFileName = "";
    mKey = 0;
}

/*     Pre: None
 *    Post: Custom values will be initialized
 * Purpose: Custom constructor
 *************************************************************************************************/
Encryption::Encryption(string inputFileName, string outputFileName, int key)
{
    mInputFileName = inputFileName;
    mOutputFileName = outputFileName;
    mKey = key;
}

/*     Pre: Initialized
 *    Post: The object will be copied
 * Purpose: Default copy constructor
 *************************************************************************************************/
Encryption::Encryption(Encryption &obj)
{
    mInputFileName = obj.mInputFileName;
    mOutputFileName = obj.mOutputFileName;
    mKey = obj.mKey;
}

/*     Pre: Initialized
 *    Post: This object will be destroyed
 * Purpose: Default destructor
 *************************************************************************************************/
Encryption::~Encryption()
{

}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get key
 *************************************************************************************************/
int Encryption::getKey()
{
    return mKey;
}

/*     Pre: Initialized
 *    Post: Key will be set to input
 * Purpose: Set key
 *************************************************************************************************/
void Encryption::setKey(int key)
{
    mKey = key;
}

/*     Pre: Initialized
 *    Post: Output file will contain encrypted version of input file with key
 * Purpose: Encrypt input file with key to output file
 *************************************************************************************************/
void Encryption::encrypt()
{
    ifstream input(mInputFileName);
    ofstream output(mOutputFileName);
    if(input.is_open() && input.good() && output.is_open() && output.good()) {
        while(!input.eof()) {
            string line;
            getline(input, line);
            for (char i : line){
                output << transform(i);
            }
            output << endl;
        }
    }
    input.close();
    output.close();
}
