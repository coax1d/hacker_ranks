#include <bits/stdc++.h>

using namespace std;

static constexpr int errorCode = -100;

struct Node {
  Node() = default;
  Node(int x, Node* left, Node* right) : val(x), leftChild(left), rightChild(right) {}
  ~Node() = default;
  int val{-1};
  Node* leftChild{nullptr};
  Node* rightChild{nullptr};
};


void doDfs(Node* root, vector<int>& result) {  
  if (root) {
    result.push_back(root->val);
    doDfs(root->leftChild, result);
    doDfs(root->rightChild, result);
  }
}

vector<int> traverseTree(Node* root) {
  vector<int> result;

  if (!root) {
    cout << "Initial root node of tree is invalid" << endl;
    result.push_back(errorCode);
  }
  else {
    doDfs(root, result);  
  }
  
  return result;
}


int main(void) {
  
  Node node8(8, nullptr, nullptr);
  Node node7(7, nullptr, nullptr);
  Node node6(6, nullptr, nullptr);
  Node node5(5, &node6, nullptr);
  Node node4(4, &node7, &node8);
  Node node3(3, &node4, &node5);
  auto answer = traverseTree(&node3);
  
  std::for_each(answer.begin(), answer.end(), [](int x){ cout << x << ' '; });
 
}
