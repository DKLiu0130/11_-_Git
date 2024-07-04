/*#pragma once
#include<iostream>
using namespace std;
template<typename T1,typename T2>
struct AVLNode					//AVL���Ľ����ģ��
{
	T1 key;       //�ؼ���k
	T2 data;      //�ؼ��ֶ�Ӧ��ֵd
	int ht;       //��ǰ�ڵ�������߶�
	AVLNode* left, * right;      //����ָ��
	AVLNode(T1 k, T2 d);
};

template<typename T1,typename T2>		//AVL����ģ��
class BalancedTree
{
public:
	AVLNode* r;					//AVL�ĸ��ڵ�
	BalancedTree();
	int getht(AVLNode* p);
	
	AVLNode* LL_right_rotate(AVLNode* a);

	AVLNode* RR_left_rotate(AVLNode* a) {//�Խ�� a Ϊ��������ת
		AVLNode* b = a->right;
		a->right = b->left;
		b->left = a;
		a->ht = max(getht(a->right), getht(a->left)) + 1; //���� A ���ĸ߶�
		b->ht = max(getht(b->right), getht(b->left)) + 1; //���� B ���ĸ߶�
		return b;
	}

	AVLNode* LR(AVLNode* a) {		// LR �͵���
		AVLNode* b = a->left;
		a->left = RR_left_rotate(b); //��� b ����
		return LL_right_rotate(a);	 //��� a ����
	}

	AVLNode* RL(AVLNode* a) {
		AVLNode* b = a->right;
		a->right = LL_right_rotate;	//b����
		return RR_left_rotate(a);	//a����
	}
};
*/