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

#include "method2.h"

/*     Pre: None
 *    Post: Default values will be initialized
 * Purpose: Default constructor
 *************************************************************************************************/
Method2::Method2()
{
    mInputFileName = "";
    mOutputFileName = "";
    mKey = 0;
}

/*     Pre: None
 *    Post: Custom values will be initialized
 * Purpose: Custom constructor
 *************************************************************************************************/
Method2::Method2(string inputFileName, string outputFileName, int key) : Encryption(inputFileName, outputFileName, key)
{
    mInputFileName = inputFileName;
    mOutputFileName = outputFileName;
    mKey = key;
}

/*     Pre: Initialized
 *    Post: The object will be copied
 * Purpose: Default copy constructor
 *************************************************************************************************/
Method2::Method2(Method2 &obj)
{
    mInputFileName = obj.mInputFileName;
    mOutputFileName = obj.mOutputFileName;
    mKey = obj.mKey;
}

/*     Pre: Initialized
 *    Post: This object will be destroyed
 * Purpose: Default destructor
 *************************************************************************************************/
Method2::~Method2()
{

}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Return the input character XORd with the key
 *************************************************************************************************/
char Method2::transform(char ch)
{
    return ch ^ mKey;
}
