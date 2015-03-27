#include 'list.h'
#include <stdio.h>

struct Node
{
    ElementType Element;
    Position Next;
};

List MakeEmpty( List L)
{
}

int isEmpty(List L)
{
    return L->Next == NULL;
}

int isLast(Position P, List L)
{
    return P->Next == NULL;
}

Position Find( ElementType X, List L)
{
    PtrToNode ptr;
    ptr = L->Next;
    while (ptr->Element != X){
        ptr = ptr->Next;
        if (ptr->Element == X)
            return ptr;
        else
            return "Not Found Error";
    }
}

void Delete(ElementType X, List L)
{
    PtrToNode ptr;
    ptr = L->Next;

    while (ptr->Element != X){
        ptr = ptr>Next;

        if ()
    }
    
    
}

Position FindPrevious

void Insert(ElementType X, List L, Position P)
{
    PtrToNode ptr;
    Node Temp;
    
    ptr = L->Next;

    while (ptr->Next != P){
        ptr = ptr->Next;

        if (ptr->Next == P){
            Temp->Next = ptr->Next;
            ptr->Next = 
        }
    }       
    
}


