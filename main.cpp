//
//  main.cpp
//  homework14
//
//  Created by 劉世翔 on 2019/3/29.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>
using namespace std;
int a,b,c;
int main(int argc,char** argv)
{
    cout<<"判斷是否能圍成三角形請輸入三個邊長"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
             cout<<"可形成三角形";
        }
    }
}
else
{
    cout<<"不可形成三角形"<<endl;
}
    return 0;
}
