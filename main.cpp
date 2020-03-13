#include<iostream>
#include "item.cpp"

using namespace std;

int main(){

    // Trying out the class
    Item i1("Resistor 10k", 0, 1);
    Item i2("Capacitor 10u",1);
    Item i3;
    
    cout << "\n" + i1.get_name() + "\t" + to_string(i1.get_id()) + "\t" + to_string(i1.get_step_size());
    cout << "\n" + i2.get_name() + "\t" + to_string(i2.get_id()) + "\t" + to_string(i2.get_step_size());
    cout << "\n" + i3.get_name() + "\t" + to_string(i3.get_id()) + "\t" + to_string(i3.get_step_size());
    
    i2.set_step_size(2);
    i3.set_name_id("Transistor", 3);
    i3.set_step_size(2);
    cout << "\n" + i2.get_name() + "\t" + to_string(i2.get_id()) + "\t" + to_string(i2.get_step_size());
    cout << "\n" + i3.get_name() + "\t" + to_string(i3.get_id()) + "\t" + to_string(i3.get_step_size());

    return 0;
}