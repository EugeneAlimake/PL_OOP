////////���� geterror & geterrorin
//////#include "Stdafx.h"
//////#include <iostream>
//////#include <locale>
//////#include <cwchar>
//////
//////#include "Error.h"
//////#include "Parm.h"
//////#include "Log.h"
//////#include "In.h"
//////
//////int wmain(int argc, wchar_t* argv[])
//////{
//////	setlocale(LC_ALL, "rus");
//////	cout << "----���� Error::geterror    ---" << endl << endl;
//////	try { throw ERROR_THROW(100); }
//////	catch (Error::ERROR e)
//////	{
//////		cout << "������" << e.id << ": " << e.message << endl << endl;
//////	};
//////
//////	cout << "---- ���� Error::geterrorin    ---" << endl << endl;
//////	try { throw ERROR_THROW_IN(111, 7, 7); }
//////	catch (Error::ERROR e)
//////	{
//////		cout << "������" << e.id << ": " << e.message
//////			<< ", ������ " << e.errorPosition.line
//////			<< ", ������� " << e.errorPosition.col << endl << endl;
//////	};
//////
//////	system("pause");
//////	return 0;
//////};
////
////////���� getparm
////#include "stdafx.h"
////#include <cwchar>
////
////#include "Error.h"
////#include "Parm.h"
////#include "Log.h"
////#include "In.h"
////
////int wmain(int argc, wchar_t* argv[])
////{
////	setlocale(LC_ALL, "rus");
////	cout << "----���� Parm::getparm    ---" << endl << endl;
////	try 
////	{
////		Parm::PARM parm = Parm::getparm(argc, argv);
////		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
////	}
////	catch (Error::ERROR e)
////	{
////		cout << "������" << e.id << ": " << e.message << endl << endl;
////	};
////
////	system("pause");
////	return 0;
////};
////
//////���� getin
//#include "stdafx.h"
//#include <iostream>
//#include <locale>
//#include <cwchar>
//
//#include "Error.h"
//#include "Parm.h"
//#include "Log.h"
//#include "In.h"
//
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	cout << "----���� In::getin    ---" << endl << endl;
//	try 
//	{
//		Parm::PARM parm = Parm::getparm(argc, argv);
//		In::IN in = In::getin(parm.in);
//		cout << in.text << endl;
//		cout << "����� ��������: " << in.size << endl;
//		cout << "����� �����: " << in.lines << endl;
//		cout << "���������: " << in.ignor << endl;
//	}
//	catch (Error::ERROR e)
//	{
//		cout << "������" << e.id << ": " << e.message << endl << endl;
//		cout << "������: " << e.errorPosition.line << " ������� " << e.errorPosition.col << endl << endl;
//	};
//
//	system("pause");
//	return 0;
//};