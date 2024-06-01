
#include <bits/stdc++.h>

using namespace std;

class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode * head) // Function to print the LinkedList
{
  ListNode * curr = head;
  for (; curr != NULL; curr = curr -> next)
    cout << curr -> val << "->";
  cout << "null" << endl;
}


ListNode* BuildLinkedList(vector<int>& arr) {
    ListNode* head = nullptr;

    for (int i = arr.size() - 1; i >= 0; --i) {
        ListNode* newNode = new ListNode(arr[i]);
        newNode->next = head;
        head = newNode; 
    }

    return head;
}

int lengthList(ListNode* head){
    int ans = 0;
    while(head != NULL){
        ans++;
        head = head->next;
    }
    return ans;
}

ListNode* middleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

ListNode* reverseList(ListNode* head){
  // 1 2 3 4 5 -> 5 4 3 2 1

  if(head == NULL || head -> next == NULL){
    return head;
  }
  ListNode* prev = NULL;
  ListNode* curr = head;

  while(curr != NULL){
    ListNode* temp = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = temp;
  }
  return prev;
}

ListNode* reverseLLrec(ListNode* head){
  if(head == NULL || head -> next == NULL){
    return head;
  }

  ListNode* newNode = reverseLLrec(head -> next);
  head -> next -> next = head;
  head -> next = NULL;

  return newNode;
}

bool detectCycle(ListNode* head){
  if(head == NULL || head -> next == NULL){
    return false;
  }

  ListNode* slow = head;
  ListNode* fast = head;

  while(fast != NULL && fast -> next != NULL){
    slow = slow -> next;
    fast = fast -> next -> next;

    if(slow = fast){
      return true;
    }
  }
  return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0 ; i< n ; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    ListNode* head = BuildLinkedList(arr);
    ListNode* middle = middleNode(head);
    PrintList(middle);

}