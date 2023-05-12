// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}



void displayCList(Node *head)
{
    Node *itr = head;
    do
    {
        cout << itr->data <<" ";
        itr = itr->right;
    } while (head!=itr);
    cout <<endl;
    itr=itr->left;
    do{
        cout<<itr->data<<" ";
        itr=itr->left;
    }while(head!=itr);
    cout<<itr->data<<endl;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
  public:
  
    /*
    void preorder(Node *itr, vector<Node*>& nums) {
        if(itr!=NULL) {
            preorder(itr->left, nums);
            nums.push_back(itr);
            preorder(itr->right, nums);
        }
    }
    
    Node *convertToCDL(vector<Node*>& nums) {
        int n=nums.size();
        
        nums[0]->left=nums[n-1];
        nums[0]->right=nums[1];
        
        nums[n-1]->left=nums[n-2];
        nums[n-1]->right=nums[0];
        
        for(int i=1; i<n-1; i++) {
            nums[i]->left=nums[i-1];
            nums[i]->right=nums[i+1];
        }
        
        return nums[0];
    }

    //Function to convert binary tree into circular doubly linked list.
    Node *bTreeToCList(Node *root) {
        vector<Node*> nums;
        preorder(root, nums);
        
        if(nums.size()==1) {
            root->left=root;
            root->right=root;
            return root;
        }
        
        return convertToCDL(nums);
        
        ///////////////
        // root->left=root;
        // root->right=root;
        // return root;
    }
    */
    
    
    //*
    void BToCDLL(Node *root, Node **head)
    {
        static Node *prev=NULL;
        
        if(!root)
            return;
            
        BToCDLL(root->left,head);
            
        if(!(*head))
            *head=root;
        else{
            root->left=prev;
            prev->right=root;
        }
    
        cout<<prev<<endl;
        prev=root;
        BToCDLL(root->right,head);
    }

    Node *bTreeToCList(Node *root)
    {
        Node *head=NULL;
        BToCDLL(root,&head);
        Node *last,*p=head;
        
        while ( p!= NULL)
        {
            last=p;
            p=p->right;
        }
        
        last->right=head;
        head->left=last;
        return head;
    }
    //*/
    
    // Node BTtoDLL(Node *itr, Node *head) {
        
    // }
    
    // Node *bTreeToCList(Node *root) {
        
    //     Node *head=NULL;
    //     BTtoDLL(root, )
    // }

};

// { Driver Code Starts.
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution obj;
        Node *head = obj.bTreeToCList(root);
        displayCList(head);
    }
    return 0;
}







  // } Driver Code Ends