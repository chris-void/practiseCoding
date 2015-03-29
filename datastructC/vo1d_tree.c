#include <stdlib.h>
#include "fatal.h"
#inlcude "tree.h"

struct TreeNode
{
    ElementType Element;
    SearchTree  Left;
    SearchTree  Right;
};

SearchTree MakeEmpty(SearchTree T)
{
    if (T != NULL ){
        MakeEmpty(T->Left);
        MakeEmpty(T->Right);
        free(T);
    }
    return NULL;
}

Position Find()
{
    type 
}
    
Position FindMin()
{}

Position FindMax()
{}

SearchTree Insert()
{}

SearchTree Delete()
{}

int main()
{
    return 0;
}
