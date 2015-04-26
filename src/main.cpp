///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <DGtal/base/Common.h>
#include <DGtal/io/boards/Board2D.h>
#include <DGtal/helpers/StdDefs.h>
//#include <DGtal/io/readers/PGMReader.h>
//#include "DGtal/images/imagesSetsUtils/SetFromImage.h"
#include "DGtal/images/ImageContainerBySTLVector.h"
////////////////////////////////////////////////////////////////////////////////
////////////////////// MODIFIEURS //////////////////////////////////////////////
#include "Modifieurs/Traitement_AntiBruit.h"
#include "Modifieurs/Traitement_AntiInversion.h"
#include "Tests/AntiInversion/Test_AntiInversion.h"
#include "Tests/Remplissage/Test_Remplissage.h"
///////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace DGtal;
using namespace DGtal::Z2i; //We'll only consider Z² digital space on
			    //32bit integers
int main(int argc,char** argv)
{
  Test_AntiInversion();
  Test_Remplissage();
  return 0;
}
