#include<cstdio>
using namespace::std;
const int MAX=30;
typedef struct node {
	int data;
	struct node* lchild;
	struct node* rchild;
} BT;
int Search(int* array,int number,int n) {
	for(int i=0; i<n; i++) {
		if(array[i]==number)
			return i;
	}
}
BT* resume(int* inorder,int* postorder,int n) {
	if(n==0)
		return NULL;
	else {
		BT* node=new BT;
		node->data=*(postorder+n-1);
		int rootindex=Search(inorder,node->data,n);
		node->lchild=resume(inorder,postorder,rootindex);
		node->rchild=resume(inorder+rootindex+1,postorder+rootindex,n-rootindex-1);
		return node;
	}
}
void leveltraverse(BT* root,int n) {
	int a=0;
	BT* p;
	BT* q[MAX];
	int head=0,tail=0;
	if(root!=NULL) {
		tail++;
		q[tail]=root;
	}
	while(head!=tail) {
		head++;
		p=q[head];
		//printf("A:%d\n",a);
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
	int n,postorder[MAX],inorder[MAX];
	//printf("���������Ľڵ������\n");
	scanf("%d",&n);
	//printf("������������ĺ���������У�\n");
	for(int i=0; i<n; i++) {
		scanf("%d",&postorder[i]);
	}
	//printf("�����������������������У�\n");
	for(int i=0; i<n; i++) {
		scanf("%d",&inorder[i]);
	}
	BT* root;
	root=resume(inorder,postorder,n);
	//printf("�������ǰ���������Ϊ��\n");
	leveltraverse(root,n);
	return 0;
}
