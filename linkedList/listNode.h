 struct SinglyListNode {
      int val;
      SinglyListNode *next;
      SinglyListNode() : val(0), next(nullptr) {}
      SinglyListNode(int x) : val(x), next(nullptr) {}
      SinglyListNode(int x, SinglyListNode *next) : val(x), next(next) {}
  };