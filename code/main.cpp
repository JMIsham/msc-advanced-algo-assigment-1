#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>



using namespace std;
using namespace std::chrono;

int main() {
    //loading all data in memory to avoud IO time included in the tree opetations
    vector<int> data_1;
    vector<int> data_2;
    vector<int> search_data;
    vector<int> delete_data;

	ifstream in_data_1("../data/data_1.txt", ifstream::in);
	while((!in_data_1.eof()) && in_data_1)
		{
            int iNumber = 0;
            in_data_1 >> iNumber;
            data_1.push_back(iNumber);
		}
	in_data_1.close();

    ifstream in_data_2("../data/data_2.txt", ifstream::in);
	while((!in_data_2.eof()) && in_data_2)
		{
            int iNumber = 0;
            in_data_2 >> iNumber;
            data_2.push_back(iNumber);
		}
	in_data_2.close();

    ifstream in_delete_data("../data/delete_data.txt", ifstream::in);
	while((!in_delete_data.eof()) && in_delete_data)
		{
            int iNumber = 0;
            in_delete_data >> iNumber;
            delete_data.push_back(iNumber);
		}
	in_delete_data.close();

    ifstream in_search_data("../data/search_data.txt", ifstream::in);
	while((!in_search_data.eof()) && in_search_data)
		{
            int iNumber = 0;
            in_search_data >> iNumber;
            search_data.push_back(iNumber);
		}
	in_search_data.close();



    auto start = high_resolution_clock::now(); 
    auto bst_1 = BST();
    for (int num : data_1)
        {
            bst_1.put(num, num);
        }
    
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken data_1 BST: "
         << duration.count() << " microseconds" << endl;


    start = high_resolution_clock::now(); 
    auto bst_2 = BST();
    for (int num : data_2)
        {
            bst_2.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken data_2 BST: "
         << duration.count() << " microseconds" << endl;

    
    return 0;
}