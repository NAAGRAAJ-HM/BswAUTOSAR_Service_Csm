/******************************************************************************/
/* File   : Csm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgCsm.hpp"
#include "Csm_core.hpp"
#include "infCsm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CSM_AR_RELEASE_VERSION_MAJOR                                           4
#define CSM_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CSM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CSM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CSM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CSM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Csm:
      public abstract_module
   ,  public class_Csm_Functionality
{
   public:
      module_Csm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, CSM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, CSM_CONFIG_DATA, CSM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CSM_CODE) DeInitFunction (void);
      FUNC(void, CSM_CODE) MainFunction   (void);
      CSM_CORE_FUNCTIONALITIES
};

extern VAR(module_Csm, CSM_VAR) Csm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, CSM_VAR, CSM_CONST) gptrinfEcuMClient_Csm = &Csm;
CONSTP2VAR(infDcmClient,  CSM_VAR, CSM_CONST) gptrinfDcmClient_Csm  = &Csm;
CONSTP2VAR(infSchMClient, CSM_VAR, CSM_CONST) gptrinfSchMClient_Csm = &Csm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Csm, CSM_VAR) Csm(
   {
         CSM_AR_RELEASE_VERSION_MAJOR
      ,  CSM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, CSM_CODE) module_Csm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, CSM_CONFIG_DATA, CSM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Csm_InitCheck)
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgCsm;
         }
      }
      else{
#if(STD_ON == Csm_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Csm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Csm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, CSM_CODE) module_Csm::DeInitFunction(void){
#if(STD_ON == Csm_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == Csm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Csm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, CSM_CODE) module_Csm::MainFunction(void){
#if(STD_ON == Csm_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == Csm_InitCheck)
   }
   else{
#if(STD_ON == Csm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, CSM_CODE) module_Csm::Hash(void){
}

FUNC(void, CSM_CODE) module_Csm::MacGenerate(void){
}

FUNC(void, CSM_CODE) module_Csm::MacVerify(void){
}

FUNC(void, CSM_CODE) module_Csm::Encrypt(void){
}

FUNC(void, CSM_CODE) module_Csm::Decrypt(void){
}

FUNC(void, CSM_CODE) module_Csm::AEADEncrypt(void){
}

FUNC(void, CSM_CODE) module_Csm::AEADDecrypt(void){
}

FUNC(void, CSM_CODE) module_Csm::SignatureGenerate(void){
}

FUNC(void, CSM_CODE) module_Csm::SignatureVerify(void){
}

FUNC(void, CSM_CODE) module_Csm::RandomGenerate(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyElementSet(void){
}

FUNC(void, CSM_CODE) module_Csm::KeySetValid(void){
}

FUNC(void, CSM_CODE) module_Csm::KeySetInvalid(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyGetStatus(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyElementGet(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyElementCopy(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyCopy(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyElementCopyPartial(void){
}

FUNC(void, CSM_CODE) module_Csm::RandomSeed(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyGenerate(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyDerive(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyExchangeCalcPubValue(void){
}

FUNC(void, CSM_CODE) module_Csm::KeyExchangeCalcSecret(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeySetValid(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeySetInvalid(void){
}

FUNC(void, CSM_CODE) module_Csm::JobRandomSeed(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeyGenerate(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeyDerive(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeyExchangeCalcPubValue(void){
}

FUNC(void, CSM_CODE) module_Csm::JobKeyExchangeCalcSecret(void){
}

FUNC(void, CSM_CODE) module_Csm::SaveContextJob(void){
}

FUNC(void, CSM_CODE) module_Csm::RestoreContextJob(void){
}

FUNC(void, CSM_CODE) module_Csm::CancelJob(void){
}

FUNC(void, CSM_CODE) module_Csm::CbNotification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

