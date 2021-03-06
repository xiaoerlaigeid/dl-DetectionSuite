//
// Created by frivas on 27/03/17.
//

#ifndef SAMPLERGENERATOR_DEPLOYER_H
#define SAMPLERGENERATOR_DEPLOYER_H

#include <QtWidgets/QListView>


namespace SampleGeneratorHandler {
    class Deployer {
    public:
        static void  process(QListView *deployImpList,QListView* weightsList, QListView* netConfigList, QListView* inferencerImpList, QListView* inferencerNamesList,
                             const std::string& weightsPath, const std::string& cfgPath,
                             const std::string& inferencerNamesPath,const std::string& inputInfo);
    };
}

#endif //SAMPLERGENERATOR_DEPLOYER_H
