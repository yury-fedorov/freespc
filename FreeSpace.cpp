#include <windows.h>
#include <iostream>

using namespace std;

// @author Yury Fedorov
// @version 15 gennaio 2005
// @created  7 gennaio 2005

int main ( int count, char * args [] ) {


	LPCTSTR lpDirectoryName = count > 1 ? args[1] : "C:\\";

	ULARGE_INTEGER	FreeBytesAvailable;
	ULARGE_INTEGER	TotalNumberOfBytes;
	ULARGE_INTEGER	TotalNumberOfFreeBytes;

  	PULARGE_INTEGER lpFreeBytesAvailable	= &FreeBytesAvailable;
  	PULARGE_INTEGER lpTotalNumberOfBytes	= &TotalNumberOfBytes;
  	PULARGE_INTEGER lpTotalNumberOfFreeBytes= &TotalNumberOfFreeBytes;

        BOOL result = GetDiskFreeSpaceEx(
		lpDirectoryName,
		lpFreeBytesAvailable,
		lpTotalNumberOfBytes,
		lpTotalNumberOfFreeBytes
	);

	cout	<< FreeBytesAvailable.QuadPart	<< "\n\r"; 
	cerr 	<< TotalNumberOfBytes.QuadPart	<< "\n\r";

	return result;
	
}