/*#pragma once
#include<iostream>
using namespace std;
template<typename T1,typename T2>
struct AVLNode					//AVL树的结点类模板
{
	T1 key;       //关键字k
	T2 data;      //关键字对应的值d
	int ht;       //当前节点的子树高度
	AVLNode* left, * right;      //左右指针
	AVLNode(T1 k, T2 d);
};

template<typename T1,typename T2>		//AVL树类模板
class BalancedTree
{
public:
	AVLNode* r;					//AVL的根节点
	BalancedTree();
	int getht(AVLNode* p);
	
	AVLNode* LL_right_rotate(AVLNode* a);

	AVLNode* RR_left_rotate(AVLNode* a) {//以结点 a 为根做左旋转
		AVLNode* b = a->right;
		a->right = b->left;
		b->left = a;
		a->ht = max(getht(a->right), getht(a->left)) + 1; //更新 A 结点的高度
		b->ht = max(getht(b->right), getht(b->left)) + 1; //更新 B 结点的高度
		return b;
	}

	AVLNode* LR(AVLNode* a) {		// LR 型调整
		AVLNode* b = a->left;
		a->left = RR_left_rotate(b); //结点 b 左旋
		return LL_right_rotate(a);	 //结点 a 右旋
	}

	AVLNode* RL(AVLNode* a) {
		AVLNode* b = a->right;
		a->right = LL_right_rotate;	//b右旋
		return RR_left_rotate(a);	//a左旋
	}
};
*/