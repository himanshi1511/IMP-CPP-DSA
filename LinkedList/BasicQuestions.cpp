
#include <bits/stdc++.h>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x)
  {
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode *head) // Function to print the LinkedList
{
  ListNode *curr = head;
  for (; curr != NULL; curr = curr->next)
    cout << curr->val << "->";
  cout << "null" << endl;
}

ListNode *InsertatFirst(int value, ListNode *head)
{

  ListNode *newnode = new ListNode(value);

  newnode->next = head;

  head = newnode;
  return head;
}

ListNode *BuildLinkedList(vector<int> &arr)
{
  ListNode *head = nullptr;

  for (int i = arr.size() - 1; i >= 0; --i)
  {
    ListNode *newNode = new ListNode(arr[i]);
    newNode->next = head;
    head = newNode;
  }

  return head;
}

ListNode *insertAtEnd(ListNode *head, int x)
{
  // Your code here
  ListNode *newNode = new ListNode(x);

  if (head == NULL)
  {
    return newNode;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = newNode;
  return head;
}
int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  vector<int> arr;
  cout << "Enter list of elements: ";
  for (int i = 0; i < n; i++)
  {
    int element;
    cin >> element;
    arr.push_back(element);
  }

  ListNode *head = BuildLinkedList(arr);
  cout << "LinkedList before inserting 0 at beginning : " << endl;
  PrintList(head);

  return 0;
}
