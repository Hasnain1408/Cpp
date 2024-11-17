#include<bits/stdc++.h>
using namespace std;

int arr[8] = {1,2,3,4,5,6,7,8};
int tree[4*8];

void build(int L, int R, int at)
{
    if(L == R)
    {
        tree[at] = arr[L];
        return;
    }

    int mid = (L+R)/2;
    int leftNode = at*2;
    int rightNode = at*2+1;
    build(L,mid,leftNode);
    build(mid+1,R,rightNode);
    tree[at] = tree[leftNode] + tree[rightNode]; // segment tree for summing an array
}

void update(int value, int index, int L, int R, int at)   
{
    if(L == R)
    {   
        arr[L] = value;
        tree[at] = arr[L];
        return;
    }

    int mid = (L+R)/2;
    int leftNode = at*2;
    int rightNode = at*2+1;
    if(index <= mid)
        update(value,index,L,mid,leftNode);
    else
        update(value,index,mid+1,R,rightNode);
    tree[at] = tree[leftNode] + tree[rightNode];
}
int query(int l, int r, int L, int R, int at)
{
    if(r<L || l>R) return 0;
    if(L>=l && R<=r) // checks if the current segment [L, R] is completely within the queried range [l, r].
    {                   // why not (l>=L && r<=R)
        return tree[at];
    }

    int mid = (L+R)/2;
    int leftNode = at*2;
    int rightNode = at*2+1;
    int s1 = query(l,r,L,mid,leftNode);
    int s2 = query(l,r,mid+1,R,rightNode);
    return s1+s2;
}

int main()
{
    build(0,7,1); // tree start at index 1
    cout<<tree[1]<<endl; // total sum
    update(5,4,0,7,1);
    cout<<query(-5,4,0,7,1)<<endl;

    return 0;
}