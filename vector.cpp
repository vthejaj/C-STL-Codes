#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int>& vec) {
    cout << "Printing Vector: ";
    int no_elements = vec.size();
    for (int i = 0; i<no_elements; i++)
        cout << vec[i] << " ";
    //for(auto e: vec)
    //    cout << e << " ";
    
    cout << "\n";
}

void print_2d_vector(vector< vector<int> >& vec_2d) {
    cout << "Print 2D Vector: \n";
    int totalRows = vec_2d.size();
    for(int i = 0; i<totalRows; i++){
        int totalColumns = vec_2d[i].size();
        for(int j = 0; j<totalColumns; j++){
            cout << vec_2d[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";    
}

void marks_vector() {
    // creation
    vector<int> marks;
    cout << "Vector max_size: " << marks.max_size() << endl;//1

    marks.reserve(10);

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    
    print_vector(marks);//2

    marks.clear();
    
    marks.insert(marks.begin(), 50);

    print_vector(marks);
    
    cout << "Vector size: " << marks.size() << endl;//3

    marks.erase(marks.begin(), marks.end());
    cout << "Vector size: " << marks.size() << endl;//4

    cout << "Vector [0]: " << marks[0] << endl;//5
    cout << "Vector Capacity: " << marks.capacity() << endl;//6
    
    print_vector(marks);
    //cout << marks[0] << endl;//7
    //cout << marks.at(0) << endl;//8

    //print_vector(marks);//9
    //marks[0] = 100;
    //cout << marks[0] << endl;//10

    //cout << marks[0] << endl;//11

    //print_vector(marks);//12
    cout << "Size: " << marks.size() << endl;//13

    if(marks.empty() == true) {
        cout << "Vector is empty" << endl;//14
    }
    else {
        cout << "vector is not empty " << endl;//15
    }

    // 40 will be removed
    marks.pop_back();
    print_vector(marks);
    cout << "Size: " << marks.size() << endl;//16
    cout << "Vector Front: " << marks.front() << endl;//17
    cout << "Vector Back: " << marks.back() << endl;//18

    cout << "Vector Begin: " << *(marks.begin()) << endl;//19
}

int main()
{

    //2D array/vector
    vector<vector<int> > arr(5, vector<int>(4,0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();
    //2d array created
    //with 5 rows
    //with 4 columns
    //with intial value of each cell as "0"
    cout << "arr size: (" << totalRows << ", " << totalColumns << ")\n";
    print_2d_vector(arr);
    
    vector<vector<int> > brr(4);

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int totalRowCount = brr.size();
    int totalColumnCount = brr[0].size();

    cout << "brr size: (" << totalRowCount << ", " << totalColumnCount << ")\n";
    print_2d_vector(brr);

    marks_vector();

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    //traversing the vector using iterator 

    //craete an iterator 
    vector<int>::iterator it = first.begin();
    cout << "Iterate using Iterator: \n";
    cout << "first: ";
    while(it != first.end()) {
        cout << *it << " ";
        it++;
    }
    cout << "\n";

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    cout << "Index based Access []: \n";
    cout << "first: ";
    cout << first[0] << " " << first[1] << " "<< first[2] << " " << first[3] << endl;

    cout << "Swap first and second vectors: \n";
    first.swap(second);
    cout << "first: ";
    for(int i:first) {
        cout << i << " ";
    }
    cout << "\nSecond: ";
    for(int i: second) {
        cout << i << " ";
    }

    // creation
    // vector<int> marks;
    // //cout << marks.max_size() << endl;

    // // marks.reserve(10);

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // //marks.clear();
    // marks.insert(marks.begin(), 50);
    
    // cout << marks.size() << endl;

    // marks.erase(marks.begin(), marks.end());
    // cout << marks.size() << endl;

    //cout << marks[0] << endl;
    // cout << marks.capacity() << endl;

    // cout << marks[0] << endl;
    // cout << marks.at(0) << endl;

    // marks[0] = 100;
    // cout << marks[0] << endl;

    // cout << marks[0] << endl;

    // cout << "Size: " << marks.size() << endl;

    // if(marks.empty() == true) {
    //     cout << "Vector is empty" << endl;
    // }
    // else {
    //     cout << "vector is not empty " << endl;
    // }

    // 40 will be removed
    // marks.pop_back();
    //  cout << "Size: " << marks.size() << endl;
    //  cout << marks.front() << endl;
    //  cout << marks.back() << endl;

    // cout << *(marks.begin()) << endl;

    // vector<int> miles(10);

    // vector<int> distances(15, 0);

    // vector<int> age(100);
    // age[0] = 10;

    return 0;
}