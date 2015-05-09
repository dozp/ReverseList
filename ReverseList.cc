#include "ReverseList.h"

ListNode* Solution::reverseList(ListNode* head) {
	ListNode *p1, *p2, *p3;
	p1=head;
	if(p1==NULL)
		return head;
	p2=p1->next;
	while(p2!=NULL)
	{
		p3=p2->next;
		if(p1==head)
		{
			p1->next=NULL;
		}
		p2->next=p1;
		p1=p2;
		p2=p3;
	}
	return p1;
}
