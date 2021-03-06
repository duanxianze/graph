#include "Graphmtx.h"
#include <fstream>
#include <cassert>
#include "Tree.h"
using namespace std;

int main()
{
	cout<<"+------------------------------------------------------+"<<endl;
	cout<<"#1 Input and Output the graph "<<endl;
	ifstream fin("data.txt");
	assert(fin);
	Graphmtx<char,int> g;
    fin >> g;
	//cin>>g;
	cout << g;
	cout<<"output DFS:"<<endl;
     g.DFS();
     cout<<endl;
     g.Components();
	/*Tree<char> tree3;
	g.DFSTree(tree3);
	tree3.IntendedText();
	tree3.ShowTree();
	cout<<endl;
	*/
     cout<<"output BFS:"<<endl;
	g.BFS();
	/*MinSpanTree<char,int> tree1, tree2;
	g.Kruskal(tree1);
	cout<<"The Kruskal minspantree is:"<<endl;
	tree1.output();
	g.Prim(tree2);
	cout<<"The Prim minspantree is:"<<endl;
	tree2.output();
	cout<<"+-----------------------------------------------------+"<<endl;
	cout<<"#2 Test bool insertVertex(const T vertex);"<<endl;
	cout<<"Please input a value to insert : "<<endl;
	char t;
	cin>>t;
	g.insertVertex(t);
	cout<<"\nThe new graph is :"<<endl;
	cout << g;
	cout<<"output DFS:"<<endl;
	g.DFS();
	cout<<"output BFS:"<<endl;
	g.BFS();
	g.Components();
	cout<<"+-----------------------------------------------------+"<<endl;
	cout<<"#3 Test bool insertEdge(int v1, int v2, E weight);"<<endl;
	cout<<"Please input an edge to add :"<<endl;
	int v1,v2, weight;
	cin>>v1>>v2>>weight;
	g.insertEdge(v1,v2, weight);
	cout<<"\nThe new graph is :"<<endl;
	cout << g;
	cout<<"output DFS:"<<endl;
	g.DFS();
	cout<<"output BFS:"<<endl;
	g.BFS();
	cout<<"+-----------------------------------------------------+"<<endl;
	cout<<"#4 Test bool removeEdge(int v1, int v2);"<<endl;
	cout<<"Please input an edge to del :"<<endl;
	cin>>v1>>v2;
	g.removeEdge(v1,v2);
	cout<<"\nThe new graph is :"<<endl;
	cout << g;
	cout<<"output DFS:"<<endl;
	Tree<char> tree4;
	g.DFS();
	g.DFSTree(tree4);
	tree4.IntendedText();
	tree4.ShowTree();
	cout<<endl;
	cout<<"output BFS:"<<endl;
	g.BFS();
*/
	return 0;
}
