#include<iostream>
#include<cstring>
using namespace std;
struct node
{
	long long int sum;
	long long int l;
	long long int r;
	long long int m;
	node *left;
	node *right;
};

node* query(node *a,int low,int high,int l,int h)
{

	if(low>h || high<l)
		return NULL;
	if(low>=l && high<=h )
	{
		return a;
	}
	int mid=low+(high-low)/2;
	node *b=query(a->left,low,mid,l,h);
	node *c=query(a->right,mid+1,high,l,h);
	if(b==0)
	{
		return c;
	}
	if(c==0)
		return b;
	node *x=new node;
	x->sum=b->sum+c->sum;
	x->l=max(b->l,max(b->sum+c->l,b->sum+c->sum));
	x->r=max(c->r,max(c->sum+b->r,b->sum+c->sum));
	x->m=max(max(b->r+c->l,b->m),c->m);
	return x;
}

void add(node* a,int x[],int low,int high)
{
	if(low==high)
	{
		//cout<<"ok"<<endl;
		a->sum=x[low];
		a->r=x[low];
		a->l=x[low];
		a->m=x[low];
		return;
	}
	node *b=new node;
	node *c=new node;
	a->left=b;
	a->right=c;
	int mid=low+(high-low)/2;
	add(b,x,low,mid);
	add(c,x,mid+1,high);
	a->sum=b->sum+c->sum;
	a->l=max(b->l,max(b->sum+c->l,b->sum+c->sum));
	a->r=max(c->r,max(c->sum+b->r,b->sum+c->sum));
	a->m=max(max(b->r+c->l,b->m),c->m);

}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	node *x=new node;
	add(x,a,0,n-1);
	int q;
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		int l,h;
		scanf("%d%d",&l,&h);
	
		node *p=query(x,0,n-1,l-1,h-1);
		printf("%d\n",p->m);
	}
}
