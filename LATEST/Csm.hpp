#pragma once
/******************************************************************************/
/* File   : Csm.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgCsm.hpp"
#include "Csm_core.hpp"
#include "infCsm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Csm:
      INTERFACES_EXPORTED_CSM
      public abstract_module
   ,  public class_Csm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, CSM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, CSM_CONFIG_DATA, CSM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CSM_CODE) DeInitFunction (void);
      FUNC(void, CSM_CODE) MainFunction   (void);
      CSM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Csm, CSM_VAR) Csm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
