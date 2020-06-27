#include<iostream>
using namespace std;

struct Node
{
	float  A, B;
	Node* Pnext;
};
struct list
{
	Node* Phead;
	Node* Ptail;
};

void khoitaolist(list& SV)
{
	SV.Phead = NULL;
	SV.Ptail = NULL;
}
Node* taoNode(float  A, float B)
{
	Node* P = new Node;
	if (P == NULL) return NULL;
	P->A = A;
	P->B = B;
	P->Pnext = NULL;
	return P;
}
void themNode_addtail(list& SV, Node* P)
{
	if (SV.Phead == NULL)
	{
		SV.Phead = P;
		SV.Ptail = SV.Phead;
	}
	else
	{
		SV.Ptail->Pnext = P;
		SV.Ptail = P;
	}
}
void themNode_addhead(list& SV, Node* P)
{
	if (SV.Phead == NULL)
	{
		SV.Phead = P;
		SV.Ptail = SV.Phead;
	}
	else
	{
		P->Pnext = SV.Phead;
		SV.Phead = P;
	}
}
void taolist_addtail(list& SV, int& count)
{
	khoitaolist(SV);
	while (1)
	{
		float  A;
		float B;
		cin >> A;
		if (A == 0) break;
		cin >> B;
		Node* P = taoNode(A, B);
		if (P != NULL)
		{
			themNode_addtail(SV, P);
			count++;
		}
	}
}
void xuatlist(list A)
{
	Node* P = A.Phead;
	cout << 1 << endl;
	float x;
	if (A.Phead != NULL) x = P->A;
	while (P != NULL)
	{
		if (P->A - x <= 500)
		{
			cout << P->A << " " << P->B << endl;
			x = P->A;
			P = P->Pnext;
		}
		else break;
	}
	//if(P!=NULL) 
	cout << 2 << endl;
	while (P != NULL)
	{
		cout << P->A << " " << P->B << endl;
		P = P->Pnext;
	}

}

//void xapxep_quicksort(list& SV)
//{
//	Node* p, * adress;
//	list SV1, SV2;
//	khoitaolist(SV1);
//	khoitaolist(SV2);
//	if (SV.Phead == SV.Ptail) return;
//	adress = SV.Phead;
//	SV.Phead = SV.Phead->Pnext;
//	while (SV.Phead != NULL)
//	{
//		p = SV.Phead;
//		SV.Phead = SV.Phead->Pnext;
//		p->Pnext = NULL;
//		if (sosanh((p->A+p->B)/2,(adress->A+adress->B)/2)==0)
//			themNode_addhead(SV1, p);
//		else themNode_addhead(SV2, p);
//	}
//	xapxep_quicksort(SV1);
//	xapxep_quicksort(SV2);
//	if (SV1.Phead != NULL)
//	{
//		SV.Phead = SV1.Phead;
//
//		SV1.Ptail->Pnext = adress;
//	}
//	else SV.Phead = adress;
//	adress->Pnext = SV2.Phead;
//	if (SV2.Phead != NULL)
//		SV.Ptail = SV2.Ptail;
//	else
//		SV.Ptail = adress;
//}
void sapxep(list& l)
{
	Node* temp = l.Ptail;
	while (l.Phead != temp) {
		Node* i = l.Phead;
		if (i->Pnext != temp)
			for (; i->Pnext != temp; i = i->Pnext) {
				if ((i->A) > (i->Pnext->A)) {
					swap(i->A, i->Pnext->A);
					swap(i->B, i->Pnext->B);
				}
			}
		temp = i;
		if ((i->A) > (i->Pnext->A)) {
			swap(i->A, i->Pnext->A);
			swap(i->B, i->Pnext->B);
		}
	}

}
int main()
{
	list X;
	int count = 0;
	taolist_addtail(X, count);
	//xapxep_quicksort(X);
	sapxep(X);
	xuatlist(X);
	return 0;
}