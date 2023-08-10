#define FPS 60

//Interfaces
#include "C:\repow\The-Forge\Common_3\Utilities\Interfaces\IFileSystem.h"
#include "C:\repow\The-Forge\Common_3\Application\Interfaces\IApp.h"

//const char* pszBases[FSR_Count] = {};

class MyApp : public IApp
{
public:
    bool Init() override { return true; }
    void Exit() override {}

    bool Load(ReloadDesc* pReloadDesc) override { return true; }
    void Unload(ReloadDesc* pReloadDesc) override {}

    void Update(float deltaTime) override {}
    void Draw() override {}

    const char* GetName() override { return "MyAppName"; }
};

extern int WindowsMain(int argc, char** argv, IApp* app);

int main(int argc, char** argv)
{
    MyApp app;
    return WindowsMain(argc, argv, &app);
}

// DEFINE_APPLICATION_MAIN(MyApp);