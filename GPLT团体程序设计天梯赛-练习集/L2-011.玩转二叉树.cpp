#include<cstdio>
using namespace::std;
typedef struct node {
	int data;
	node* lchild,*rchild;
} BT;
int Search(int *a,int p,int n) {
	for(int i=0; i<n; i++) {
		if(a[i]==p)
			return i;
	}
	return 0;
}
BT* resume(int *inorder,int *preorder,int n) {
	if(n==0)
		return NULL;
	else {
		//printf("resume ");
		BT *root=new BT;
		root->data=*preorder;
		int rootindex=Search(inorder,*preorder,n);
		//printf("%d\n",rootindex);
		root->lchild=resume(inorder,preorder+1,rootindex);
		root->rchild=resume(inorder+rootindex+1,preorder+rootindex+1,n-rootindex-1);
		return root;
	}
}
void mirror(BT* root) {
	if(root==NULL)
		return;
	if(root->lchild==NULL&&root->rchild==NULL)
		return;
	BT* temp=root->lchild;
	root->lchild=root->rchild;
	root->rchild=temp;
	mirror(root->lchild);
	mirror(root->rchild);
	return;
}
void leveltraverse(BT* root,int n) {
	int a=0;
	BT* p;
	BT* q[30];
	int head=0,tail=0;
	//printf("leveltraverse ");
	if(root!=NULL) {
		tail++;
		q[tail]=root;
	}
	while(head!=tail) {
		head++;
		p=q[head];
		if(a!=n-1)
			printf("%d ",p->data);
		else
			printf("%d",p->data);
		a++;
		if(p->lchild!=NULL) {
			tail++;
			q[tail]=p->lchild;
		}
		if(p->rchild!=NULL) {
			tail++;
			q[tail]=p->rchild;
		}
	}
	return;
}
int main() {
	int inorder[30]= {0},preorder[30]= {0},n;
	//printf("请输入节点个数：\n");
	scanf("%d",&n);
	//printf("请输入中序遍历序列：\n");
	for(int i=0; i<n; i++)
		scanf("%d",&inorder[i]);
	//printf("请输入前序遍历序列：\n");
	for(int i=0; i<n; i++)
		scanf("%d",&preorder[i]);
	BT *root=resume(inorder,preorder,n);
	mirror(root);
	leveltraverse(root,n);
	return 0;
}
