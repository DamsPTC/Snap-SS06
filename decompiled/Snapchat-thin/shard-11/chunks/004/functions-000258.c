/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084cd068; end: 1084cd07b; +[SCCPhoneVerificationSendCodeRequest valdiMarshallableObjectDescriptor] */

void FUN_1084cd068(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a4f7d0;
  param_1[1] = &PTR_DAT_110a4f848;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cd07c; end: 1084cd09b; -[SCCPhoneVerificationSendCodeResult initWithKind:] */

void FUN_1084cd07c(void)

{
  func_0x0001084cd12c(PTR_PTR_1126fcaa8);
  return;
}



/* Entry: 1084cd09c; end: 1084cd0af; +[SCCPhoneVerificationSendCodeResult valdiMarshallableObjectDescriptor] */

void FUN_1084cd09c(undefined8 *param_1)

{
  *param_1 = &PTR_s_kind_110a4f860;
  param_1[1] = &PTR_DAT_110a4f8c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cd0b0; end: 1084cd0d3; -[SCCPhoneVerificationVerifyCodeRequest initWithOtpCode:useCase:] */

void FUN_1084cd0b0(void)

{
  func_0x0001084cd14c(PTR_PTR_1126fcab0);
  return;
}



/* Entry: 1084cd0d4; end: 1084cd0e7; +[SCCPhoneVerificationVerifyCodeRequest valdiMarshallableObjectDescriptor] */

void FUN_1084cd0d4(undefined8 *param_1)

{
  *param_1 = &PTR_s_otpCode_110a4f8d0;
  param_1[1] = &PTR_DAT_110a4f918;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cd0e8; end: 1084cd107; -[SCCPhoneVerificationVerifyCodeResult initWithKind:] */

void FUN_1084cd0e8(void)

{
  func_0x0001084cd12c(PTR_PTR_1126fcab8);
  return;
}



/* Entry: 1084cd108; end: 1084cd16f; +[SCCPhoneVerificationVerifyCodeResult valdiMarshallableObjectDescriptor] */

void FUN_1084cd108(undefined8 *param_1)

{
  *param_1 = &PTR_s_kind_110a4f928;
  param_1[1] = &PTR_DAT_110a4f988;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1084cd170; end: 1084cd20b; +[SCAdsAdRenderData descriptor] */

undefined * FUN_1084cd170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0990,
                        &PTR____CFConstantStringClassReference_110edf098,&PTR_DAT_11325da88,
                        &PTR_DAT_11325dba0,0x18,0xa0,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10df3109b);
    puRam000000011372bb68 = puVar1;
  }
  return puRam000000011372bb68;
}



/* Entry: 1084cd20c; end: 1084cd287; +[SCAdsMapPromotedPlacesProperties descriptor] */

undefined * FUN_1084cd20c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba09e0,
                        &PTR____CFConstantStringClassReference_110edf0b8,&PTR_DAT_11325da88,
                        &PTR_DAT_11325dae0,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bb70 = puVar1;
  }
  return puRam000000011372bb70;
}



/* Entry: 1084cd288; end: 1084cd36b; +[SCAdsScoredPlace descriptor] */

void FUN_1084cd288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0a30,
                        &PTR____CFConstantStringClassReference_110edf0d8,&PTR_DAT_11325da88,
                        &PTR_s_placeId_11325daa0,2,0x10,0x1c);
    puRam000000011372bb78 = puVar1;
  }
  return;
}



/* Entry: 1084cd36c; end: 1084cd377;  */

bool FUN_1084cd36c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd378; end: 1084cd3f3;  */

undefined * FUN_1084cd378(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bb88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf118,
                        &UNK_10df31118,&UNK_10df31154,3,FUN_1084cd3f4,0);
    do {
      if (puRam000000011372bb88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bb88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bb88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bb88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bb88;
}



/* Entry: 1084cd3f4; end: 1084cd3ff;  */

bool FUN_1084cd3f4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd400; end: 1084cd47b; +[SCAdsStoryAd descriptor] */

undefined * FUN_1084cd400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0ad0,
                        &PTR____CFConstantStringClassReference_110edf138,&PTR_DAT_11325dea0,
                        &PTR_DAT_11325df58,9,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bb90 = puVar1;
  }
  return puRam000000011372bb90;
}



/* Entry: 1084cd47c; end: 1084cd573; +[SCAdsTileCtaOverrides descriptor] */

undefined * FUN_1084cd47c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0b20,
                        &PTR____CFConstantStringClassReference_110edf158,&PTR_DAT_11325dea0,
                        &PTR_DAT_11325deb8,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam000000011372bb98 = puVar1;
  }
  return puRam000000011372bb98;
}



/* Entry: 1084cd574; end: 1084cd57f;  */

bool FUN_1084cd574(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd580; end: 1084cd5e7; +[SCAdsAdSnap descriptor] */

void FUN_1084cd580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0bc0,
                        &PTR____CFConstantStringClassReference_110edf198,&PTR_DAT_11325e078,
                        &PTR_DAT_11325e090,0x1e,200,0x1c);
    puRam000000011372bba8 = puVar1;
  }
  return;
}



/* Entry: 1084cd5e8; end: 1084cd6cb; +[AdSpecification descriptor] */

void FUN_1084cd5e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bbb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0c60,
                        &PTR____CFConstantStringClassReference_110edf1b8,&PTR_DAT_11325e450,
                        &PTR_DAT_11325e468,3,0x20,0x1c);
    puRam000000011372bbb0 = puVar1;
  }
  return;
}



/* Entry: 1084cd6cc; end: 1084cd6d7;  */

bool FUN_1084cd6cc(uint param_1)

{
  return param_1 < 0x11;
}



/* Entry: 1084cd6d8; end: 1084cd753;  */

undefined * FUN_1084cd6d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf1f8,
                        &UNK_10df312f4,&UNK_10df31338,3,FUN_1084cd754,0);
    do {
      if (puRam000000011372bbc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbc0;
}



/* Entry: 1084cd754; end: 1084cd75f;  */

bool FUN_1084cd754(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd760; end: 1084cd7db;  */

undefined * FUN_1084cd760(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf218,
                        &UNK_10df31344,&UNK_10df3142c,0xd,FUN_1084cd7dc,0);
    do {
      if (puRam000000011372bbc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbc8;
}



/* Entry: 1084cd7dc; end: 1084cd7e7;  */

bool FUN_1084cd7dc(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 1084cd7e8; end: 1084cd863;  */

undefined * FUN_1084cd7e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf238,
                        &UNK_10df31460,&UNK_10df31478,2,FUN_1084cd864,0);
    do {
      if (puRam000000011372bbd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbd0;
}



/* Entry: 1084cd864; end: 1084cd86f;  */

bool FUN_1084cd864(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084cd870; end: 1084cd8eb;  */

undefined * FUN_1084cd870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf258,
                        &UNK_10df31480,&UNK_10df314a8,3,FUN_1084cd8ec,0);
    do {
      if (puRam000000011372bbd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbd8;
}



/* Entry: 1084cd8ec; end: 1084cd8f7;  */

bool FUN_1084cd8ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd8f8; end: 1084cd973;  */

undefined * FUN_1084cd8f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf278,
                        &UNK_10df314b4,&UNK_10df314d8,3,FUN_1084cd974,0);
    do {
      if (puRam000000011372bbe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbe0;
}



/* Entry: 1084cd974; end: 1084cd97f;  */

bool FUN_1084cd974(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084cd980; end: 1084cd9fb;  */

undefined * FUN_1084cd980(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbe8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf298,
                        &UNK_10df314e4,&UNK_10df31550,8,FUN_1084cd9fc,0);
    do {
      if (puRam000000011372bbe8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbe8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbe8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbe8;
}



/* Entry: 1084cd9fc; end: 1084cda17;  */

uint FUN_1084cd9fc(uint param_1)

{
  return (uint)(param_1 < 0x14) & 0xc7805U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1084cda18; end: 1084cda93;  */

undefined * FUN_1084cda18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf2b8,
                        &UNK_10df31570,&UNK_10df31584,2,FUN_1084cda94,0);
    do {
      if (puRam000000011372bbf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbf0;
}



/* Entry: 1084cda94; end: 1084cda9f;  */

bool FUN_1084cda94(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084cdaa0; end: 1084cdb1b;  */

undefined * FUN_1084cdaa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bbf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf2d8,
                        &UNK_10df3158c,&UNK_10df315a4,2,FUN_1084cdb1c,0);
    do {
      if (puRam000000011372bbf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bbf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bbf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bbf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bbf8;
}



/* Entry: 1084cdb1c; end: 1084cdb27;  */

bool FUN_1084cdb1c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084cdb28; end: 1084cdba3;  */

undefined * FUN_1084cdb28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf2f8,
                        &UNK_10df315ac,&UNK_10df315e8,4,FUN_1084cdba4,0);
    do {
      if (puRam000000011372bc00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc00;
}



/* Entry: 1084cdba4; end: 1084cdbaf;  */

bool FUN_1084cdba4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1084cdbb0; end: 1084cdc17; +[SCAdSpecMachinePrototype descriptor] */

void FUN_1084cdbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0d00,
                        &PTR____CFConstantStringClassReference_110edf318,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e700,4,0x20,0x1c);
    puRam000000011372bc08 = puVar1;
  }
  return;
}



/* Entry: 1084cdc18; end: 1084cdc93; +[SCAdSpecMachinePrototype_State descriptor] */

undefined * FUN_1084cdc18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0d50,
                        &PTR____CFConstantStringClassReference_110ea5c98,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e780,5,0x30,0x1c);
    func_0x00010c228780();
    puRam000000011372bc10 = puVar1;
  }
  return puRam000000011372bc10;
}



/* Entry: 1084cdc94; end: 1084cdd0f; +[SCAdSpecMachinePrototype_ProgressSpec descriptor] */

undefined * FUN_1084cdc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0da0,
                        &PTR____CFConstantStringClassReference_110edf338,&PTR_DAT_11325e4c8,
                        &PTR_s_source_11325e540,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bc18 = puVar1;
  }
  return puRam000000011372bc18;
}



/* Entry: 1084cdd10; end: 1084cdd8b; +[SCAdSpecMachinePrototype_Transition descriptor] */

undefined * FUN_1084cdd10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0df0,
                        &PTR____CFConstantStringClassReference_110edf358,&PTR_DAT_11325e4c8,
                        &PTR_s_trigger_11325e820,7,0x40,0x1c);
    func_0x00010c228780();
    puRam000000011372bc20 = puVar1;
  }
  return puRam000000011372bc20;
}



/* Entry: 1084cdd8c; end: 1084cde07; +[SCAdSpecMachinePrototype_Trigger descriptor] */

undefined * FUN_1084cdd8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0e40,
                        &PTR____CFConstantStringClassReference_110edf378,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e640,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bc28 = puVar1;
  }
  return puRam000000011372bc28;
}



/* Entry: 1084cde08; end: 1084cde83; +[SCAdSpecMachinePrototype_Effect descriptor] */

undefined * FUN_1084cde08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0e90,
                        &PTR____CFConstantStringClassReference_110edf398,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e900,7,0x38,0x1c);
    func_0x00010c228780();
    puRam000000011372bc30 = puVar1;
  }
  return puRam000000011372bc30;
}



/* Entry: 1084cde84; end: 1084cdeff; +[SCAdSpecMachinePrototype_VideoLoopingParams descriptor] */

undefined * FUN_1084cde84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0ee0,
                        &PTR____CFConstantStringClassReference_110edf3b8,&PTR_DAT_11325e4c8,
                        &PTR_s_mode_11325e4e0,1,8,0x1c);
    func_0x00010c228780();
    puRam000000011372bc38 = puVar1;
  }
  return puRam000000011372bc38;
}



/* Entry: 1084cdf00; end: 1084cdf7b; +[SCAdSpecMachinePrototype_PlaybackAutoAdvanceParams descriptor] */

undefined * FUN_1084cdf00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0f30,
                        &PTR____CFConstantStringClassReference_110edf3d8,&PTR_DAT_11325e4c8,
                        &PTR_s_mode_11325e500,1,8,0x1c);
    func_0x00010c228780();
    puRam000000011372bc40 = puVar1;
  }
  return puRam000000011372bc40;
}



/* Entry: 1084cdf7c; end: 1084cdff7; +[SCAdSpecMachinePrototype_VisibilityParams descriptor] */

undefined * FUN_1084cdf7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0f80,
                        &PTR____CFConstantStringClassReference_110edf3f8,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e520,1,8,0x1c);
    func_0x00010c228780();
    puRam000000011372bc48 = puVar1;
  }
  return puRam000000011372bc48;
}



/* Entry: 1084cdff8; end: 1084ce073; +[SCAdSpecMachinePrototype_PagingGestureParams descriptor] */

undefined * FUN_1084cdff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0fd0,
                        &PTR____CFConstantStringClassReference_110edf418,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e580,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372bc50 = puVar1;
  }
  return puRam000000011372bc50;
}



/* Entry: 1084ce074; end: 1084ce0ef; +[SCAdSpecMachinePrototype_AttachmentParams descriptor] */

undefined * FUN_1084ce074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1020,
                        &PTR____CFConstantStringClassReference_110edf438,&PTR_DAT_11325e4c8,
                        &PTR_s_mode_11325e5c0,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372bc58 = puVar1;
  }
  return puRam000000011372bc58;
}



/* Entry: 1084ce0f0; end: 1084ce16b; +[SCAdSpecMachinePrototype_SegmentChangeParams descriptor] */

undefined * FUN_1084ce0f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1070,
                        &PTR____CFConstantStringClassReference_110edf458,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e600,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372bc60 = puVar1;
  }
  return puRam000000011372bc60;
}



/* Entry: 1084ce16c; end: 1084ce263; +[SCAdSpecMachinePrototype_AnimationSpec descriptor] */

undefined * FUN_1084ce16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bc68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba10c0,
                        &PTR____CFConstantStringClassReference_110edf478,&PTR_DAT_11325e4c8,
                        &PTR_DAT_11325e6a0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bc68 = puVar1;
  }
  return puRam000000011372bc68;
}



/* Entry: 1084ce264; end: 1084ce26f;  */

bool FUN_1084ce264(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1084ce270; end: 1084ce2eb;  */

undefined * FUN_1084ce270(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf4b8,
                        &UNK_10df3164c,&UNK_10df31674,4,FUN_1084ce2ec,0);
    do {
      if (puRam000000011372bc78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc78;
}



/* Entry: 1084ce2ec; end: 1084ce2f7;  */

bool FUN_1084ce2ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1084ce2f8; end: 1084ce373;  */

undefined * FUN_1084ce2f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf4d8,
                        &UNK_10df31684,&UNK_10df316a8,3,FUN_1084ce374,0);
    do {
      if (puRam000000011372bc80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc80;
}



/* Entry: 1084ce374; end: 1084ce37f;  */

bool FUN_1084ce374(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084ce380; end: 1084ce3fb;  */

undefined * FUN_1084ce380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf4f8,
                        &UNK_10df316b4,&UNK_10df316fc,3,FUN_1084ce3fc,0);
    do {
      if (puRam000000011372bc88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc88;
}



/* Entry: 1084ce3fc; end: 1084ce407;  */

bool FUN_1084ce3fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084ce408; end: 1084ce483;  */

undefined * FUN_1084ce408(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf518,
                        &UNK_10df31708,&UNK_10df31730,2,FUN_1084ce484,0);
    do {
      if (puRam000000011372bc90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc90;
}



/* Entry: 1084ce484; end: 1084ce48f;  */

bool FUN_1084ce484(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084ce490; end: 1084ce50b;  */

undefined * FUN_1084ce490(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bc98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf538,
                        &UNK_10df31738,&UNK_10df31790,6,FUN_1084ce50c,0);
    do {
      if (puRam000000011372bc98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bc98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bc98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bc98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bc98;
}



/* Entry: 1084ce50c; end: 1084ce517;  */

bool FUN_1084ce50c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1084ce518; end: 1084ce593;  */

undefined * FUN_1084ce518(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bca0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf558,
                        &UNK_10df317a8,&UNK_10df317e4,4,FUN_1084ce594,0);
    do {
      if (puRam000000011372bca0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bca0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bca0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bca0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bca0;
}



/* Entry: 1084ce594; end: 1084ce59f;  */

bool FUN_1084ce594(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1084ce5a0; end: 1084ce61b;  */

undefined * FUN_1084ce5a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bca8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf578,
                        &UNK_10df317f4,&UNK_10df3182c,3,FUN_1084ce61c,0);
    do {
      if (puRam000000011372bca8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bca8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bca8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bca8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bca8;
}



/* Entry: 1084ce61c; end: 1084ce627;  */

bool FUN_1084ce61c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084ce628; end: 1084ce6a3;  */

undefined * FUN_1084ce628(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bcb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf598,
                        &UNK_10df31838,&UNK_10df31848,2,FUN_1084ce6a4,0);
    do {
      if (puRam000000011372bcb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bcb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bcb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bcb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bcb0;
}



/* Entry: 1084ce6a4; end: 1084ce6af;  */

bool FUN_1084ce6a4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084ce6b0; end: 1084ce72b;  */

undefined * FUN_1084ce6b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bcb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf5b8,
                        &UNK_10df31850,&UNK_10df31874,2,FUN_1084ce72c,0);
    do {
      if (puRam000000011372bcb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bcb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bcb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bcb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bcb8;
}



/* Entry: 1084ce72c; end: 1084ce737;  */

bool FUN_1084ce72c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084ce738; end: 1084ce7b3;  */

undefined * FUN_1084ce738(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bcc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110edf5d8,
                        &UNK_10df3187c,&UNK_10df318a0,2,FUN_1084ce7b4,0);
    do {
      if (puRam000000011372bcc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bcc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bcc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bcc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bcc0;
}



/* Entry: 1084ce7b4; end: 1084ce7bf;  */

bool FUN_1084ce7b4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084ce7c0; end: 1084ce84b; +[SCAdSpecNodePrototype descriptor] */

undefined * FUN_1084ce7c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bcc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1160,
                        &PTR____CFConstantStringClassReference_110edf5f8,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325f108,0x10,0x88,0x1c);
    func_0x00010c229040();
    puRam000000011372bcc8 = puVar1;
  }
  return puRam000000011372bcc8;
}



/* Entry: 1084ce84c; end: 1084ce8c7; +[SCAdSpecNodePrototype_Layout descriptor] */

undefined * FUN_1084ce84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bcd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba11b0,
                        &PTR____CFConstantStringClassReference_110e5aa58,&PTR_DAT_11325e9f0,
                        &PTR_s_width_11325eee8,5,0x28,0x1c);
    func_0x00010c228780();
    puRam000000011372bcd0 = puVar1;
  }
  return puRam000000011372bcd0;
}



/* Entry: 1084ce8c8; end: 1084ce943; +[SCAdSpecNodePrototype_Dimension descriptor] */

undefined * FUN_1084ce8c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bcd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1200,
                        &PTR____CFConstantStringClassReference_110edf618,&PTR_DAT_11325e9f0,
                        &PTR_s_mode_11325ea88,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372bcd8 = puVar1;
  }
  return puRam000000011372bcd8;
}



/* Entry: 1084ce944; end: 1084ce9bf; +[SCAdSpecNodePrototype_EdgeInsets descriptor] */

undefined * FUN_1084ce944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1250,
                        &PTR____CFConstantStringClassReference_110ea5698,&PTR_DAT_11325e9f0,
                        &PTR_s_top_11325ede8,4,0x14,0x1c);
    func_0x00010c228780();
    puRam000000011372bce0 = puVar1;
  }
  return puRam000000011372bce0;
}



/* Entry: 1084ce9c0; end: 1084cea3b; +[SCAdSpecNodePrototype_ZPlacement descriptor] */

undefined * FUN_1084ce9c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba12a0,
                        &PTR____CFConstantStringClassReference_110edf638,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325eac8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bce8 = puVar1;
  }
  return puRam000000011372bce8;
}



/* Entry: 1084cea3c; end: 1084ceab7; +[SCAdSpecNodePrototype_PlacementAnchor descriptor] */

undefined * FUN_1084cea3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bcf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba12f0,
                        &PTR____CFConstantStringClassReference_110edf658,&PTR_DAT_11325e9f0,
                        &PTR_s_source_11325eb08,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bcf0 = puVar1;
  }
  return puRam000000011372bcf0;
}



/* Entry: 1084ceab8; end: 1084ceb33; +[SCAdSpecNodePrototype_VStack descriptor] */

undefined * FUN_1084ceab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bcf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1340,
                        &PTR____CFConstantStringClassReference_110edf678,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ecc8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bcf8 = puVar1;
  }
  return puRam000000011372bcf8;
}



/* Entry: 1084ceb34; end: 1084cebaf; +[SCAdSpecNodePrototype_HStack descriptor] */

undefined * FUN_1084ceb34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1390,
                        &PTR____CFConstantStringClassReference_110edf698,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ed28,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bd00 = puVar1;
  }
  return puRam000000011372bd00;
}



/* Entry: 1084cebb0; end: 1084cec2b; +[SCAdSpecNodePrototype_ZStack descriptor] */

undefined * FUN_1084cebb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba13e0,
                        &PTR____CFConstantStringClassReference_110edf6b8,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ea08,1,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd08 = puVar1;
  }
  return puRam000000011372bd08;
}



/* Entry: 1084cec2c; end: 1084ceca7; +[SCAdSpecNodePrototype_Spacer descriptor] */

undefined * FUN_1084cec2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1430,
                        &PTR____CFConstantStringClassReference_110edf6d8,&PTR_DAT_11325e9f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372bd10 = puVar1;
  }
  return puRam000000011372bd10;
}



/* Entry: 1084ceca8; end: 1084ced23; +[SCAdSpecNodePrototype_Text descriptor] */

undefined * FUN_1084ceca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1818,
                        &PTR____CFConstantStringClassReference_110dac6b8,&PTR_DAT_11325e9f0,
                        &PTR_s_content_11325f028,7,0x30,0x1c);
    func_0x00010c228780();
    puRam000000011372bd18 = puVar1;
  }
  return puRam000000011372bd18;
}



/* Entry: 1084ced24; end: 1084ceda7; +[SCAdSpecNodePrototype_Text_FontSpec descriptor] */

undefined * FUN_1084ced24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1840,
                        &PTR____CFConstantStringClassReference_110edf6f8,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ee68,4,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bd20 = puVar1;
  }
  return puRam000000011372bd20;
}



/* Entry: 1084ceda8; end: 1084cee23; +[SCAdSpecNodePrototype_Image descriptor] */

undefined * FUN_1084ceda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba14d0,
                        &PTR____CFConstantStringClassReference_110dac698,&PTR_DAT_11325e9f0,
                        &PTR_s_source_11325eb48,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd28 = puVar1;
  }
  return puRam000000011372bd28;
}



/* Entry: 1084cee24; end: 1084cee9f; +[SCAdSpecNodePrototype_Button descriptor] */

undefined * FUN_1084cee24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1520,
                        &PTR____CFConstantStringClassReference_110e80918,&PTR_DAT_11325e9f0,
                        &PTR_s_content_11325ea28,1,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd30 = puVar1;
  }
  return puRam000000011372bd30;
}



/* Entry: 1084ceea0; end: 1084cef1b; +[SCAdSpecNodePrototype_PathRef descriptor] */

undefined * FUN_1084ceea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1570,
                        &PTR____CFConstantStringClassReference_110edf718,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325eb88,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd38 = puVar1;
  }
  return puRam000000011372bd38;
}



/* Entry: 1084cef1c; end: 1084cefc7; +[SCAdSpecNodePrototype_MediaRef descriptor] */

undefined * FUN_1084cef1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1868,
                        &PTR____CFConstantStringClassReference_110edf738,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ed88,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10df318a8);
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ba1160);
    puRam000000011372bd40 = puVar1;
  }
  return puRam000000011372bd40;
}



/* Entry: 1084cefc8; end: 1084cf04b; +[SCAdSpecNodePrototype_MediaRef_AdAssetRef descriptor] */

undefined * FUN_1084cefc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1890,
                        &PTR____CFConstantStringClassReference_110edf758,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ea48,1,8,0x1c);
    func_0x00010c228780();
    puRam000000011372bd48 = puVar1;
  }
  return puRam000000011372bd48;
}



/* Entry: 1084cf04c; end: 1084cf0c7; +[SCAdSpecNodePrototype_Style descriptor] */

undefined * FUN_1084cf04c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba18b8,
                        &PTR____CFConstantStringClassReference_110edf778,&PTR_DAT_11325e9f0,
                        &PTR_s_backgroundColor_11325ef88,5,0x28,0x1c);
    func_0x00010c228780();
    puRam000000011372bd50 = puVar1;
  }
  return puRam000000011372bd50;
}



/* Entry: 1084cf0c8; end: 1084cf14b; +[SCAdSpecNodePrototype_Style_Border descriptor] */

undefined * FUN_1084cf0c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba18e0,
                        &PTR____CFConstantStringClassReference_110edf798,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ebc8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd58 = puVar1;
  }
  return puRam000000011372bd58;
}



/* Entry: 1084cf14c; end: 1084cf1c7; +[SCAdSpecNodePrototype_ProgressBar descriptor] */

undefined * FUN_1084cf14c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1660,
                        &PTR____CFConstantStringClassReference_110edf7b8,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ea68,1,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372bd60 = puVar1;
  }
  return puRam000000011372bd60;
}



/* Entry: 1084cf1c8; end: 1084cf243; +[SCAdSpecNodePrototype_StarRating descriptor] */

undefined * FUN_1084cf1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba16b0,
                        &PTR____CFConstantStringClassReference_110edf7d8,&PTR_DAT_11325e9f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372bd68 = puVar1;
  }
  return puRam000000011372bd68;
}



/* Entry: 1084cf244; end: 1084cf2bf; +[SCAdSpecNodePrototype_AppIcon descriptor] */

undefined * FUN_1084cf244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1700,
                        &PTR____CFConstantStringClassReference_110edf7f8,&PTR_DAT_11325e9f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam000000011372bd70 = puVar1;
  }
  return puRam000000011372bd70;
}



/* Entry: 1084cf2c0; end: 1084cf33b; +[SCAdSpecNodePrototype_CardCta descriptor] */

undefined * FUN_1084cf2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1750,
                        &PTR____CFConstantStringClassReference_110edf818,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ec08,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bd78 = puVar1;
  }
  return puRam000000011372bd78;
}



/* Entry: 1084cf33c; end: 1084cf3b7; +[SCAdSpecNodePrototype_StickerCta descriptor] */

undefined * FUN_1084cf33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba17a0,
                        &PTR____CFConstantStringClassReference_110edf838,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ec48,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bd80 = puVar1;
  }
  return puRam000000011372bd80;
}



/* Entry: 1084cf3b8; end: 1084cf433; +[SCAdSpecNodePrototype_CaptionCta descriptor] */

undefined * FUN_1084cf3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba17f0,
                        &PTR____CFConstantStringClassReference_110edf858,&PTR_DAT_11325e9f0,
                        &PTR_DAT_11325ec88,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372bd88 = puVar1;
  }
  return puRam000000011372bd88;
}



/* Entry: 1084cf434; end: 1084cf49b; +[Configurations descriptor] */

void FUN_1084cf434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1980,
                        &PTR____CFConstantStringClassReference_110edf878,&PTR_DAT_11325f308,
                        &PTR_DAT_11325fc80,0xb,0x60,0x1c);
    puRam000000011372bd90 = puVar1;
  }
  return;
}



/* Entry: 1084cf49c; end: 1084cf527; +[Configurations_CardCta descriptor] */

undefined * FUN_1084cf49c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba19d0,
                        &PTR____CFConstantStringClassReference_110edf818,&PTR_DAT_11325f308,
                        &PTR_DAT_11325f9a0,7,0x40,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ba1980);
    puRam000000011372bd98 = puVar1;
  }
  return puRam000000011372bd98;
}



/* Entry: 1084cf528; end: 1084cf5b3; +[Configurations_StickerCta descriptor] */

undefined * FUN_1084cf528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1a20,
                        &PTR____CFConstantStringClassReference_110edf838,&PTR_DAT_11325f308,
                        &PTR_DAT_11325fb60,9,0x50,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ba1980);
    puRam000000011372bda0 = puVar1;
  }
  return puRam000000011372bda0;
}



/* Entry: 1084cf5b4; end: 1084cf62f; +[Configurations_StickerCta_StickerCtaStyle descriptor] */

undefined * FUN_1084cf5b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bda8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba1a70,
                        &PTR____CFConstantStringClassReference_110edf898,&PTR_DAT_11325f308,
                        &PTR_DAT_11325f680,5,0x30,0x1c);
    func_0x00010c228780();
    puRam000000011372bda8 = puVar1;
  }
  return puRam000000011372bda8;
}


