#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box
{
   int height;
   int width;
   int length;
   
};

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    Box box1;
    // 3. Create a variable called box2 of the Box structure type
    Box box2;
    // int box2Height, box2Width, box2Length;
    int b1Height, b1Width, b1Length;
    int b2Height, b2Width, b2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> b1Height;
    cout << "Enter Box 1 Width : ";
    cin >> b1Width;
    cout << "Enter Box 1 Length : ";
    cin >> b1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> b2Height;
    cout << "Enter Box 2 Width : ";
    cin >> b2Width;
    cout << "Enter Box 2 Length : ";
    cin >> b2Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1.height,box1.width ,box1.length)
             + volume(box2.height,box2.width ,box2.length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
    return height * width * length ;
}
