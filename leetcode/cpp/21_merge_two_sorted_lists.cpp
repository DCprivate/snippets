#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*
    Time complexity: O(n+m)
    Space complexity: O(1)
*/
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
    if (!list1) return list2;
    if (!list2) return list1;

    // make sure we start with the lowest val
    ListNode* head = nullptr;
    if (list1->val <= list2->val) {
        head = list1;
        list1 = list1->next;
    }
    else {
        head = list2;
        list2 = list2->next;
    }

    ListNode* current = head;
    while (list1 && list2) {
        
        if (list1->val < list2->val) {
            cout << "here " << list1->val << endl;
            current->next = list1;
            list1 = list1->next;
        }
        else {
            cout << "here1 " << list2->val << endl;
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if(!list1)
        current->next = list2;
    else
        current->next = list1;

    return head;
}

int main() {
    ListNode* head1 = new ListNode;
    ListNode* head2 = new ListNode;
    ListNode* head3 = new ListNode;

    ListNode* current = head1;

    for(int i = 0; i < 10; ++i) {
        current->next = new ListNode(i*2);
        current = current->next;
    }

    current = head2;
    for(int i = 10; i < 20; ++i) {
        current->next = new ListNode(i);
        current = current->next;
    }

    current = head1;
    for(int i = 0; i < 10; ++i) {
        cout << current->val << endl;
        current = current->next;
    }

    cout << endl;

    current = head2;
    for(int i = 0; i < 10; ++i) {
        cout << current->val << endl;
        current = current->next;
    }

    cout << endl;

    current = mergeTwoLists(head1, head2);

    cout << endl;

    while(current->next != nullptr) {
        cout << current->val << endl;
        current = current->next;
    }
    
    cout << "success" << endl;
    return 0;
}

/*
        // slightly faster version
        ListNode list=new ListNode(-1);
        ListNode cur=list;
        while(list1!=null&& list2!=null){
            if(list1.val<=list2.val){
                list.next=list1;
                list=list.next;
                list1=list1.next;
            }
            else{
                 list.next=list2;
                list=list.next;
                list2=list2.next;
            }
        }
        while(list1!=null){
            list.next=list1;
            list=list.next;
            list1=list1.next;
        }
        while(list2!=null){
            list.next=list2;
            list=list.next;
            list2=list2.next;
        }
        return cur.next;
*/

/*
        // recursion version
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val<=list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
*/