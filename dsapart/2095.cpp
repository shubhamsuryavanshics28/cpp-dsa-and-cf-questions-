#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(6);

    ListNode* temp = head;
    // while(temp){
    //     cout<<temp->val<<"->";
    //     temp = temp->next;
    // }  
    ListNode* dummy = new ListNode();
    ListNode* temp2 = dummy;
    while(temp){
        temp2->next = new ListNode(temp->val);
        temp2 = temp2->next;
        temp = temp->next;
    }
    dummy = dummy->next;
    ListNode* temp3 = dummy;
    while(temp3){
        cout<<temp3->val<<"->";
        temp3 = temp3->next;
    }
    return 0;
}
