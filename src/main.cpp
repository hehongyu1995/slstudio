#include "SLStudio.h"
#include <pcl/console/parse.h>
#include <QApplication>
#include <QSettings>
#include <iostream>
using namespace std;
//console params
bool show_gui (false);

//functions declare
void showHelp (char *filename);
void parseCommandLine (int argc, char *argv[]);

int main(int argc, char *argv[])
{
    parseCommandLine(argc,argv);
    //Run GUI
    if(show_gui){
        QApplication a(argc, argv);
        SLStudio w;
        w.show();
        return a.exec();
    }

}

void
parseCommandLine (int argc, char *argv[])
{
    //Show help
    if (pcl::console::find_switch (argc, argv, "-h"))
    {
        showHelp (argv[0]);
        exit (0);
    }
    try{
        if(argc==1){
            throw "Error: None Params";
            return;
        }

        if(strcmp (argv[1], "rungui")==0) {
            show_gui=true;
            return;
        }else if(strcmp (argv[1], "set")==0){
            //todo: Set preference
            string parameter=argv[2];
            string valueToSet=argv[3];
            cout<<"Success: set "<<parameter<<" to"<<valueToSet<<endl;
        } else if(strcmp (argv[1], "get")==0){
            //todo: Get preference value
        } else if(strcmp (argv[1], "list")==0){
            //todo: List optional parameters of a preference param.

        } else if(strcmp (argv[1], "start")==0){

            if(strcmp (argv[2], "scan")==0){
                //todo: Start scan
            }
            if(strcmp (argv[2], "calibration")==0){
                //todo: Perform calibration
            }
        } else if(strcmp (argv[1], "load")==0) {
            if(strcmp (argv[2], "calibration")==0) {
                //todo: load calibration.xml
            }
        } else if(strcmp (argv[1], "export")==0){
            if(strcmp (argv[2], "calibration")==0) {
                //todo: export calibration.xml
            }
        } else{
            throw "Unknown Command.";
        }

    }catch (const char* msg){
        cerr<<msg<<endl;
        showHelp(argv[0]);
    }
    catch (exception& e){
        cerr<<"Exception: "<<e.what()<<endl;
        showHelp(argv[0]);
    }



}

void
showHelp (char *filename)
{
    std::cout << std::endl;
    std::cout << "***************************************************************************" << std::endl;
    std::cout << "*                                                                         *" << std::endl;
    std::cout << "*             Correspondence Grouping Tutorial - Usage Guide              *" << std::endl;
    std::cout << "*                                                                         *" << std::endl;
    std::cout << "***************************************************************************" << std::endl << std::endl;
    std::cout << "Usage: " << filename << " model_filename.pcd scene_filename.pcd [Options]" << std::endl << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "     -h:                     Show this help." << std::endl;
    std::cout << "     -k:                     Show used keypoints." << std::endl;
    std::cout << "     -c:                     Show used correspondences." << std::endl;
    std::cout << "     -r:                     Compute the model cloud resolution and multiply" << std::endl;
    std::cout << "                             each radius given by that value." << std::endl;
    std::cout << "     --algorithm (Hough|GC): Clustering algorithm used (default Hough)." << std::endl;
    std::cout << "     --model_ss val:         Model uniform sampling radius (default 0.01)" << std::endl;
    std::cout << "     --scene_ss val:         Scene uniform sampling radius (default 0.03)" << std::endl;
    std::cout << "     --rf_rad val:           Reference frame radius (default 0.015)" << std::endl;
    std::cout << "     --descr_rad val:        Descriptor radius (default 0.02)" << std::endl;
    std::cout << "     --cg_size val:          Cluster size (default 0.01)" << std::endl;
    std::cout << "     --cg_thresh val:        Clustering threshold (default 5)" << std::endl << std::endl;
}

