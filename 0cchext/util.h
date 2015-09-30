#ifndef __0CCHEXT_UTIL_H__
#define __0CCHEXT_UTIL_H__

#include <Windows.h>
#include <string>
#include <vector>

BOOL IsPrintAble(CHAR *str, ULONG len);
BOOL IsPrintAbleW(WCHAR *str, ULONG len);
PCHAR* WdbgCommandLineToArgv(PCHAR cmd_line, int* arg_num);
std::string ReadLines(PCSTR start_pos, PCSTR str, int lines);
void ReadLines(PCSTR str, std::vector<std::string> &str_vec);
BOOL GetTxtFileDataA(LPCSTR file, std::string &data);
BOOL WmiQueryInfoImpl(LPCWSTR query_str, CString &query_result);
BOOL FindMessage(PVOID dll, ULONG id, CStringW &message);
#endif
