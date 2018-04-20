//
//  PCert.h
//  Prototype_Trusted_IOS
//
//  Created by admin on 01/03/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//

#ifndef CSP_Cert_h
#define CSP_Cert_h

#include "provider_system.h"

#import <Foundation/Foundation.h>
#import <CPROCSP/CPROCSP.h>
#import <CPROCSP/CPCrypt.h>
#import "stdlib.h"
#import "stdio.h"
#import "map"
#import "vector"

#include "CSP_Helper.h"

#define MY_ENCODING_TYPE  (PKCS_7_ASN_ENCODING | X509_ASN_ENCODING)
#define TYPE_DER  (PKCS_7_ASN_ENCODING | X509_ASN_ENCODING)

@interface CSP_Cert : NSObject{
@public
    TrustedHandle<Certificate> cert;
}

-(bool) load :(char *)serialNumber;                                                 //загрузка из хранилища
-(bool) loadFromFile :(char *)pathCert: (char *)format;                             //загрузка из файла
-(bool) saveCertToStore :(char *)pathToFie :(char *)format :(char *)category;       //сохраниние сертификата в хранилище из файла
-(bool) deleteCertInStore :(char *)serialNumber :(char *)category;                  //удаление сертификата из хранилища
-(bool) save :(char *)pathToSaveCert: (char *)format: (char *)category;             //экспорт сертификата в файл из памяти
-(long) getVersion;
-(TrustedHandle<std::string>) getSerialNumber;
-(TrustedHandle<std::string>) getNotBefore;
-(TrustedHandle<std::string>) getNotAfter;
-(TrustedHandle<std::string>) getIssuerFriendlyName;
-(TrustedHandle<std::string>) getIssuerName;
-(TrustedHandle<std::string>) getSubjectFriendlyName;
-(TrustedHandle<std::string>) getSubjectName;
-(TrustedHandle<std::string>) getThumbprint;
-(TrustedHandle<std::string>) getPublicKeyAlgorithm;
-(TrustedHandle<std::string>) getSignatureAlgorithm;
-(TrustedHandle<std::string>) getSignatureDigestAlgorithm;
-(TrustedHandle<std::string>) getOrganizationName;
-(int) getType;
-(int) getKeyUsage;
-(int) getSelfSigned;
-(int) isCA;

@end

#endif /* CSP_Cert_h */