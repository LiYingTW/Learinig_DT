#include <iostream>
#include "testing.h"
using namespace std;

void testingMain()
/************************************************************************
	Entrance of the testing mode;
	will read two files:
			one to build the DT, tree.csv
			one to load the test data, testData.csv
	will output one file:
			to record the answer: output.csv
-------------------------------------------------------------------------
	input : none;
	return : none;
************************************************************************/
{
    FILE *fpTree, *fpData;
    //int attribute;

    fpTree = fopen("tree.csv", "r");
    if (fpTree == NULL)
    {
        cout << "[ERROR] cannot open tree.csv" <<endl;
        return;
    }

    fpData = fopen("testData.csv", "r");
    if (fpData == NULL)
    {
        cout << "[ERROR] cannot open testData.csv" <<endl;
        return;
    }

    while(1)
    {
        /** Build the tree and test the data, than output the answer **/

        cout << "Do you want to continued ? [y/n]" << endl;

        char cont;
        cin >> cont;

        if(cont != 'y' && cont != 'Y')
            break;
    }//end while
    return;
    /*while((attribute = fgetc(fp)) != EOF)
    {
        switch(attribute)
        {
        case 1:
        {
            attr_A();
        }//end A
        break;
        case 2:
        {
            attr_B();
        }//end B
        break;
        case 3:
        {
            attr_C();
        }//end C
        break;
        case 4:
        {
            attr_D();
        }//end D
        break;
        case 5:
        {
            attr_E();
        }//end E
        break;
        case 6:
        {
            attr_F();
        }//end F
        break;
        case 7:
        {
            attr_G();
        }//end G
        break;
        case 8:
        {
            attr_H();
        }//end H
        break;
        case 9:
        {
            attr_I();
        }//end I
        break;
        case 10:
        {
            attr_J();
        }//end J
        break;
        case 11:
        {
            attr_K();
        }//end K
        break;
        case 12:
        {
            attr_L();
        }//end L
        break;
        case 13:
        {
            attr_M();
        }//end M
        break;
        case 14:
        {
            attr_N();
        }//end N
        break;
        case 15:
        {
            attr_O();
        }//end O
        break;
        case 16:
        {
            attr_P();
        }//end P
        break;
        case 17:
        {
            attr_Q();
        }//end Q
        break;
        case 18:
        {
            attr_R();
        }//end R
        break;
        case 19:
        {
            attr_S();
        }//end S
        break;
        case 20:
        {
            attr_T();
        }//end T
        break;
        case 21:
        {
            attr_U();
        }//end U
        break;
        case 22:
        {
            attr_V();
        }//end V
        break;
        case 23:
        {
            attr_W();
        }//end W
        break;
        case 24:
        {
            attr_X();
        }//end X
        break;
        default:
            break;
        }//end switch
    }//end while*/
}//end testingMain()
