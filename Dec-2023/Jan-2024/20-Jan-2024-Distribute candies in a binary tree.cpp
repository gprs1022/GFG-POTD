//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *left, *right;
};

/* utility that allocates a new Node
   with the given key  */
Node* newNode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = node->right = NULL;
	return (node);
}

Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node* root = newNode(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current node
			currNode->left = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

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
//User function Template for C++

/*
struct Node {
	int key;
	Node *left, *right;
};
*/
class Solution
{
    public:
    int ans=0;
    pair<int,int> find(Node *root)
    {
        if(!root)
        return {0,0};
        pair<int,int> x=find(root->left);
        pair<int,int> y=find(root->right);
        int a=x.first+y.first+1;
        int b=x.second+y.second+root->key;
        ans+=abs(a-b);
        return {a,b};
    }
    int distributeCandy(Node* root)
    {
        ans=0;
        pair<int,int> x=find(root);
        ans-=abs(x.first-x.second);
        return ans;
        //code here
    }
};



//{ Driver Code Starts.
int main() {

	int t;
	cin >> t;
	getchar();

	while (t--)
	{

		string str;
		getline(cin, str);

		Node *root = buildTree(str);
		Solution ob;
		cout << ob.distributeCandy(root) << "\n";

	}

	return 0;
}

// } Driver Code Ends