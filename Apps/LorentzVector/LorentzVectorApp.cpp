//
// Created by roy on 17.12.2020.
//

#include "LorentzVectorApp.h"

#include "iostream"
#include "list"
#include "../../Commands/ExitCommand.h"
#include "Classes/Vector3.h"
#include "Classes/Vector4.h"
using namespace std;

int LorentzVectorApp::run() {
    App::run();
    cout << "LorentzVector App started " << endl;
    continue_reading = true;
    char commandText;

    Vector3 v1;
    cout<<v1<<endl;

    Vector3 v2(1,2,3);
    cout<<v2<<endl;

    Vector3 v3(10,11,12);
    cout<<v3<<endl;

    cout<<"Scalar product of Vector 2 and 3:"<<endl;
    cout<<v2.scalar(v3)<<endl;


    Vector4 v4(2,3,4,5);
    cout<<v4<<endl;

    Vector4 v5(6,7,8,9);
    cout<<v5<<endl;

    cout<<"Scalar product of Vector 4 and 5:"<<endl;
    //cout<<v4.scalar(v5)<<endl;

    Vector4 vprime;
    double v= 2.996e8;
    vprime= v5.LorentzTransformation(v);
    cout<<vprime<<endl;

    cout << "LorentzVector App Ended For Exit press Enter " << endl;
    char wait;
    cin >> wait;
    return 0;
}
