#include<iostream>
#include<cstdio>
#include<Windows.h>
#include<graphics.h>
#include<fstream> 
using namespace std;
bool serverfile() { //����Ƿ�������
    ifstream fin("Server/bedrock_server_mods.exe");
    if (!fin) {
        return false;
    }
    else {
        return true;
    }
}
int main() {
    cout << "��ӭʹ��TUDerManager��" << "\n" << "Copyright 2022-2023 DreamBayStudio.\n";
    if (serverfile) {
        //�½�����
        initgraph(700, 265, NOMINIMIZE);
        //���ñ�����ɫ
        setbkcolor(WHITE);
        //���������ɫ
        cleardevice();
        //�������
        settextstyle(25, 0, L"΢���ź�");
        settextcolor(BLUE);
        outtextxy(10, 10, L"��ʹ�ñ����ǰ������������Ķ�ʹ�����");
        settextcolor(BLACK);
        settextstyle(20, 0, L"΢���ź�");
        outtextxy(10, 50, L"********************************** ʹ������ **********************************");
        outtextxy(10, 70, L"1.��������Mojang����涨��MojangEULA��LGPLЭ��ǰ����ʹ�ñ����");
        outtextxy(10, 90, L"2.����֤������Ƿ��Է��������Ӱ��");
        outtextxy(10, 110, L" I. ������Է���������κ�Ӱ����DreamBayStudio�޹�");
        outtextxy(10, 130, L"3.������������������Ϊ��ΪΥ����Լ");
        outtextxy(10, 150, L" I.  δ����Ȩ�����ǵ��κ�����������ҵ��;");
        outtextxy(10, 170, L" II. δ���������ǵ�����׬Ǯ");
        outtextxy(10, 190, L" III.�Կ������Ŷ���ɲ���Ӱ�����Ϊ");
        outtextxy(10, 210, L"******************************************************************************");
        settextcolor(RED);
        settextstyle(25, 0, L"΢���ź�");
        outtextxy(10, 230, L"����ʹ�ô�����ͬ��ʹ�����������������������Թر�DOS����ֹ���У�");
        cout << "���������������\n";
        system("powershell curl -o install.exe <���ص�ַ>");
        system("install.exe");
        cout << "����ɲ���";
    }
    getchar();
    closegraph();
    return 0;
}
