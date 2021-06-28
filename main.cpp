//
//  main.cpp
//  bst
//
//  Created by Himansu Shekhar Sahu on 19/05/21.
//

#include <iostream>

class bst {
    char*        name;
    static int   treeCount;
    
    class tNode {
        int    key;
        class tNode *left, *right;
        
    public:
        tNode* insert(int key, tNode* root);
        tNode* remove(int key, tNode* root);
        
    };
    
    tNode*       root;
};

int main(int argc, const char * argv[]) {
    class bst symTab;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
