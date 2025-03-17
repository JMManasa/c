struct snode	//single linked list node
{
	int data;
	struct snode *p;	//self referential  pointer
};

struct dnode	//double linked list node
{
	struct dnode *pre;	//self referential  pointer
	int data;
	struct dnode *next;	//self referential  pointer
};
