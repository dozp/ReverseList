#include "ReverseList.h"
#include "gtest/gtest.h"
#include <vector>
#include <algorithm>

using namespace std;

ListNode* MakeList(vector<int> vi)
{
	ListNode *head=NULL;
	ListNode *p;
	for(int i=0; i<vi.size(); ++i)
	{
		ListNode *temp= new ListNode(vi[i]);
		if(head==NULL)
		{
			head=temp;
			p=head;
		}
		else
		{
			p->next=temp;
			p=p->next;
		}
	}
	return head;
}
TEST(ReverseListTest, Case1)
{
	vector<int> i={1,2};
	ListNode* head=MakeList(i);
	Solution s;
	head=s.reverseList(head);
	ListNode* p=head;
	reverse(i.begin(), i.end());
	for(int j=0; j<i.size(); ++j)
	{
		EXPECT_EQ(i[j], p->val);
		p=p->next;
	}
	while(head!=NULL)
	{
		ListNode *temp=head;
		head=head->next;
		delete temp;
	}
}
