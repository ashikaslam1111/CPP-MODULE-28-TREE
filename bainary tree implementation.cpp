#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    node* left;
    node* right;
    node* parent;
};
class bainaryTree
{
public:
    node* ar[6]; //  whey it is node* ar[6] whey not node ar[6]
    node* root;
    bainaryTree()
    {
        root=NULL;
    }
    node* creat_new_nosde(int id)
    {
        node* newnode=new node;
        newnode->id=id;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        return newnode;
    }
    void build_bainary_tree()
    {

        for(int i=0; i<6; i++)
        {
            ar[i]=  creat_new_nosde(i);
        }
        ar[0]->left=ar[1];
        ar[0]->right=ar[2];

        ar[1]->left=ar[5];
        ar[1]->parent=ar[0];

        ar[2]->left=ar[3];
        ar[2]->right=ar[4];
        ar[2]->parent=ar[0];

        ar[5]->parent=ar[1];

        ar[3]->parent=ar[2];

        ar[4]->parent=ar[2];
        root=ar[0];
    }
    void print_info()
    {
        for(int i=0; i<6; i++)
        {
            int p=-1,r=-1,l=-1;
            if(ar[i]->parent!=NULL)
            {
                p=ar[i]->parent->id;
            }
            if(ar[i]->right!=NULL)
            {
                r=ar[i]->right->id;
            }
            if(ar[i]->left!=NULL)
            {
                l=ar[i]->left->id;
            }
            cout<<"node "<<i<<" p = "<<p<<" r = "<<r<<" l = "<<l<<"\n";
        }
    }
};

int main()
{
    bainaryTree n;
    n.build_bainary_tree();
    n.print_info();
    return 0;
}
