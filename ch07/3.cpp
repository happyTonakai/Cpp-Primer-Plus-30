/*
 * @Author: Zerui Han  hanzr.nju@outlook.com
 * @Date: 2020-06-27 11:02:51
 * @LastEditTime: 2020-06-27 11:10:12
 */
#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box);
void set_volume(box *);

int main()
{
    box box1 = {"SF", 1, 2, 3};
    set_volume(&box1);
    show(box1);
    return 0;
}

void show(box box1)
{
    cout << "Box " << box1.maker << " length, width, height:\n";
    cout << box1.length << ", " << box1.width << ", " << box1.height << endl;
    cout << "volume: " << box1.volume << endl;
}

void set_volume(box *box1)
{
    box1->volume = box1->height * box1->width * box1->length;
}
