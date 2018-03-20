//
//  PCerts.h
//  Prototype_Trusted_IOS
//
//  Created by admin on 05/03/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//

#ifndef PCerts_h
#define PCerts_h

#import <Foundation/Foundation.h>
#import "React/RCTBridgeModule.h"
#import <CPROCSP/CPROCSP.h>
#import <CPROCSP/CPCrypt.h>
#import "stdlib.h"
#import "stdio.h"

#include <string>
#include <sstream>
#include <iostream>
#include "vector"
#include "map"

@interface PCerts : NSObject <RCTBridgeModule>{
  std::map<std::string, std::vector<PCCERT_CONTEXT>> allCerts;
}

//TrustedHandle<Certificate> certs;//список сертификатов из хранилища криптоПро
//1) первоначальное добавление в certs
//2) функция заполнения certs из всех контейнеров криптоПро и при добавлении(удалении) изменялось содержимое certs

@end

#endif /* PCerts_h */