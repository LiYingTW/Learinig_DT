#include <iostream>
#include "training.h"
using namespace std;

node::node()
{
	this->used = false;

}
void node::addChildrenEntropy(int entropy)
{
	this->childrenEntropy += entropy;
}


void trainingMain()
/**************************************************
	Entrance of the training mode;
	will read one file:
			to load the training data, traData.csv
	will output one file:
			to record the decision tree : tree.csv
---------------------------------------------------
	input : none;
	return : none;
**************************************************/
{
	FILE *fpTree, *fpData;
    int attribute;

    fpTree = fopen("tree.csv", "w");
    if (fpTree == NULL)
    {
        cout << "[ERROR] cannot create tree.csv" <<endl;
        return;
    }

    fpData = fopen("traData.csv", "r");
    if (fpData == NULL)
    {
        cout << "[ERROR] cannot open traData.csv" <<endl;
        return;
    }

    while(1)
    {
        /** Build the tree, than output the tree.csv **/

        cout << "Do you want to continued ? [y/n]" << endl;

        char cont;
        cin >> cont;

        if(cont != 'y' && cont != 'Y')
            break;
    }//end while
    return;
}//end trainingMain()
