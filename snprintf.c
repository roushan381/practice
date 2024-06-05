
#include <stdio.h>
#include <string.h>
#include <wchar.h>

typedef struct _OSInformat
{
    unsigned char Name[128]; // Os name
    // unsigned char OtherTypeDescription[128]; //Additional description for the current operating system version.
    // unsigned char Version[128]; //OS version
    // unsigned char Hostname[256];
	// unsigned char DomainName[128];
    // unsigned short OSType;
    // unsigned short Dummy;
	// unsigned char AMSVersion[32];
}OSInformat_t;

int main()
{
    wchar_t osName[128];
    struct _OSInformat osInfoMFD;
    memset(&osInfoMFD,0,sizeof(osInfoMFD));
    strncpy(osInfoMFD.Name,"nitin_faraz_nitin_faraz_nitin_faraz_nitin_faraz_nitin_faraz_nitin_faraz_nitin_nitin_faraz_nitinin_faraz_nitin_faraz_",128);
	snprintf(osName, 128, "%s", osInfoMFD.Name);
    printf("dsdfffdfdf :%s \n",osName);
    return 0;
}