#include <bits/stdc++.h>

using namespace std;

// O(n) time (must visit every node once)
// O(n) space (every node must be placed into the queue gets worse if the tree is balanced)

struct Node {
  Node() = default;
  Node(int x, Node* left, Node* right) : val(x), leftChild(left), rightChild(right) {}
  ~Node() = default;
  int val{-1};
  Node* leftChild{nullptr};
  Node* rightChild{nullptr};
};

vector<int> bfs(Node* root) {
  list<Node*> queue;
  vector<int> result;
  
  queue.push_back(root);
  result.push_back(root->val);
  
  while (!queue.empty()) {
    auto currRoot = queue.front();
    auto currLeft = currRoot->leftChild;
    auto currRight = currRoot->rightChild;
    queue.pop_front();
    
    if (currLeft) {
      result.push_back(currLeft->val);
      queue.push_back(currLeft);
    }
    
    if (currRight) {
      result.push_back(currRight->val);
      queue.push_back(currRight);
    }
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
  auto answer = bfs(&node3);
  
  std::for_each(answer.begin(), answer.end(), [](int x){ cout << x << ' '; });
 
}
