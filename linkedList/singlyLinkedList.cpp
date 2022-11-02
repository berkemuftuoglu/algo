#include <listNode.h>
#include <imports.h>

class SinglyLinkedList{
private:
    SinglyListNode *head;
public:
    SinglyLinkedList() {
        head = NULL;
    }

    /** Helper function to return the index-th node in the linked list. */
    SinglyListNode* getNode(int index) {
        SinglyListNode *cur = head;
        for (int i = 0; i < index && cur; ++i) {
            cur = cur->next;
        }
        return cur;
    }
    /** Helper function to return the last node in the linked list. */
    SinglyListNode* getTail() {
        SinglyListNode *cur = head;
        while (cur && cur->next) {
            cur = cur->next;
        }
        return cur;
    }

    /** Get the value of the index-th node in the linked list. 
     * If the index is invalid, return -1. */
    int get(int index) {
        SinglyListNode *cur = getNode(index);
        return cur == NULL ? -1 : cur->val;
    }
    
        /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        SinglyListNode *cur = new SinglyListNode(val);
        cur->next = head;
        head = cur;
        return;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if (head == NULL) {
            addAtHead(val);
            return;
        }
        SinglyListNode *prev = getTail();
        SinglyListNode *cur = new SinglyListNode(val);
        prev->next = cur;
    }

    /** Add a node of value val before the index-th node in the linked list. 
     * If index equals to the length of linked list, 
     * the node will be appended to the end of linked list. 
     * If index is greater than the length, the node will not be inserted. 
     * */
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        SinglyListNode *prev = getNode(index - 1);
        if (prev == NULL) {
            return;
        }
        SinglyListNode *cur = new SinglyListNode(val);
        SinglyListNode *next = prev->next;
        cur->next = next;
        prev->next = cur;
    }

    void deleteAtIndex(int index) {
    SinglyListNode *cur = getNode(index);
        if (cur == NULL) {
            return;
        }
        SinglyListNode *next = cur->next;
        if (index == 0) {
            // modify head when deleting the first node.
            head = next;
        } else {
            SinglyListNode *prev = getNode(index - 1);
            prev->next = next;
        }
    }

    SinglyListNode* middleNode(SinglyListNode* head) {
        vector<SinglyListNode*> ans = {head};
        while (ans.back()->next != NULL)
            ans.push_back(ans.back()->next);
        return ans[ans.size() / 2];
    }

    SinglyListNode* middleNode2(SinglyListNode* head) {
        SinglyListNode *slow = head, *fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    /*
    Merge two sorted linked lists and return it as a new list. RECURSIVE
    */
    SinglyListNode* mergeTwoLists(SinglyListNode* l1, SinglyListNode* l2) {
        if(l1==NULL || l2==NULL)
            return l1>l2 ? l1 : l2;
        
        SinglyListNode* head=(l1->val<l2->val) ? l1 : l2;
        head->next = mergeTwoLists(head == l1 ? l1->next : l1, head==l2 ? l2->next :l2);
        return head;
    }

    /*
    Reverse a singly linked list.
    Simply change the next pointer of the current node to point to the previous node.
    */
       SinglyListNode* reverseList(SinglyListNode* head) {
            SinglyListNode* prev = NULL, *cur = head, *next = NULL;
            while (cur != NULL) {
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
            return prev;
        }

    /*
    Unique email addresses
    */
       int numUniqueEmails(vector<string>& emails) {
            unordered_set<string> set;
            for (auto email : emails) {
                string local, domain;
                int i = 0;
                while (email[i] != '@') {
                    if (email[i] == '+') {
                        while (email[i] != '@') {
                            i++;
                        }
                    } else if (email[i] == '.') {
                        i++;
                    } else {
                        local += email[i];
                        i++;
                    }
                }
                domain = email.substr(i);
                set.insert(local + domain);
            }
            return set.size();
        }    







};