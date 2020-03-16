#include<iostream>
#include<string>
#include<map>
#include "h_item.cpp"

using namespace std;

void start(int order_id, int pin){
    Server_check server;
    Order_info order = server.fetch_info(order_id, pin);
    if(order.order_check && order.payment_check){
        cout<< "\n***********\nOrder " + to_string(order_id) + " found and payment processed! Here is the order info:\n";
        map<int, string>::iterator it;
        for (it = order.map_productID_name.begin(); it != order.map_productID_name.end(); it++)
        {
            int temp_id = it->first;
            string temp_name = it->second;
            int temp_quantity = order.map_productID_quantity[temp_id];
            cout<<"\n"+to_string(temp_id)+"\t"+temp_name+"\t"+to_string(temp_quantity);
            // it++;
        }
    }
    else if(order.order_check){cout<< "\n***********\nOrder " + to_string(order_id) + " found but payment not processed! Please try again later.\n";}
    else{cout<< "\n***********\nOrder " + to_string(order_id) + " not found! Please recheck order number/pin and try again\n";}
}

int main(){
    // pin=0 to simulate order and payment ok condition
    // pin=1 to simulate order ok, payment not ok condition
    // any other value for pin simulates order not found/failed
    start(1190, 1);
    start(1191, 10);
    start(1192, 0);
        
    return 0;
}
