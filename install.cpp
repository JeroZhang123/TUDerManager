#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	cout << "正在下载服务端主程序。。。\n";
	system("powershell curl -o Server.exe <下载地址> ";		//下载服务端
	cout << "请点击”Extract“\n";
	system("Server.exe");	//启动自解压程序
	system("DEL Server.exe");	//删除自解压程序
	return 0;
}
