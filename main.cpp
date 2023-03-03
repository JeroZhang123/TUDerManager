#include<iostream>
#include<cstdio>
#include<Windows.h>
#include<graphics.h>
#include<fstream> 
using namespace std;
bool serverfile() { //检测是否部署服务端
    ifstream fin("Server/bedrock_server_mods.exe");
    if (!fin) {
        return false;
    }
    else {
        return true;
    }
}
int main() {
    cout << "欢迎使用TUDerManager！" << "\n" << "Copyright 2022-2023 DreamBayStudio.\n";
    if (serverfile) {
        //新建窗口
        initgraph(700, 265, NOMINIMIZE);
        //设置背景颜色
        setbkcolor(WHITE);
        //清除背景颜色
        cleardevice();
        //输出文字
        settextstyle(25, 0, L"微软雅黑");
        settextcolor(BLUE);
        outtextxy(10, 10, L"在使用本软件前，请务必认真阅读使用条款！");
        settextcolor(BLACK);
        settextstyle(20, 0, L"微软雅黑");
        outtextxy(10, 50, L"********************************** 使用条款 **********************************");
        outtextxy(10, 70, L"1.请在遵守Mojang各项规定、MojangEULA及LGPL协议前提下使用本软件");
        outtextxy(10, 90, L"2.不保证本软件是否会对服务器造成影响");
        outtextxy(10, 110, L" I. 本软件对服务器造成任何影响与DreamBayStudio无关");
        outtextxy(10, 130, L"3.包含但不限于以下行为视为违反条约");
        outtextxy(10, 150, L" I.  未经授权将我们的任何内容用于商业用途");
        outtextxy(10, 170, L" II. 未经允许将我们的内容赚钱");
        outtextxy(10, 190, L" III.对开发者团队造成不利影响的行为");
        outtextxy(10, 210, L"******************************************************************************");
        settextcolor(RED);
        settextstyle(25, 0, L"微软雅黑");
        outtextxy(10, 230, L"继续使用代表您同意使用条款，已启动部署程序，您可以关闭DOS以终止运行！");
        cout << "正在启动部署程序\n";
        system("powershell curl -o install.exe <下载地址>");
        system("install.exe");
        cout << "已完成部署！";
    }
    getchar();
    closegraph();
    return 0;
}
