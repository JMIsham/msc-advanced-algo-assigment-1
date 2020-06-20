#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>



using namespace std;
using namespace std::chrono;

void printTime(std::chrono::microseconds duration, size_t height,  string tree, string data) {
    cout << "\nTime taken " << data << " " << tree <<": "
         << duration.count() << " microseconds" << endl;
    cout << "Resulting tree height " << data << " " << tree << ": "
         << height << endl;
}

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


    //Question 1

    cout << "\n=============Question 1==============="<< endl;

    auto start = high_resolution_clock::now(); 
    auto bst_1 = BST();
    for (int num : data_1)
        {
            bst_1.put(num, num);
        }
    
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_1.height(), "BST", "data_1");


    start = high_resolution_clock::now(); 
    auto bst_2 = BST();
    for (int num : data_2)
        {
            bst_2.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_2.height(), "BST", "data_2");

    
    start = high_resolution_clock::now(); 
    auto splay_1 = SplayTree();
    for (int num : data_1)
        {
            splay_1.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_1.height(), "Spaly Tree", "data_1");

    start = high_resolution_clock::now(); 
    auto splay_2 = SplayTree();
    for (int num : data_2)
        {
            splay_2.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_2.height(), "Spaly Tree", "data_2");


    auto splay_new_1 = SplayTree(); //since search changes the tree, this will be used for deletion
    for (int num : data_1)
        {
            splay_new_1.put(num, num);
        }

    auto splay_new_2 = SplayTree(); //since search changes the tree, this will be used for deletion
    for (int num : data_2)
        {
            splay_new_2.put(num, num);
        }

    start = high_resolution_clock::now(); 
    auto RB_1 = RBTree();
    for (int num : data_1)
        {
            RB_1.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_1.height(), "RB-Tree", "data_1");

    start = high_resolution_clock::now(); 
    auto RB_2 = RBTree();
    for (int num : data_2)
        {
            RB_2.put(num, num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_2.height(), "RB-Tree", "data_2");


    //QUESTION 2

    cout << "\n=============Question 2==============="<< endl;
    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            bst_1.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_1.height(), "BST", "data_1");


    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            bst_2.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_2.height(), "BST", "data_2");

    
    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            splay_1.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_1.height(), "Spaly Tree", "data_1");

        
    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            splay_2.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_2.height(), "Spaly Tree", "data_2");

    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            RB_1.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_1.height(), "RB Tree", "data_1");


    start = high_resolution_clock::now(); 
    for (int num : search_data)
        {
            RB_2.contains(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_2.height(), "RB Tree", "data_2");
        
    

    //Question 3

    cout << "\n=============Question 3==============="<< endl;

    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            bst_1.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_1.height(), "BST", "data_1");


    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            bst_2.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, bst_2.height(), "BST", "data_2");


    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            splay_new_1.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_new_1.height(), "Spaly Tree", "data_1");

        
    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            splay_new_2.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, splay_new_2.height(), "Spaly Tree", "data_2");


    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            RB_1.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_1.height(), "RB Tree", "data_1");


    start = high_resolution_clock::now(); 
    for (int num : delete_data)
        {
            RB_2.del(num);
        }
    
    stop = high_resolution_clock::now(); 
    duration = duration_cast<microseconds>(stop - start); 
    printTime(duration, RB_2.height(), "RB Tree", "data_2");

    
    return 0;
}
