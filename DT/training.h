#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class node{
private:
	bool used;				//determined used or not
	int childrenEntropy;	//sum of the entropy of its child-nodes
public:
	node();
	void addChildrenEntropy(int entropy);
};

void trainingMain();	//Entrance of the training mode


