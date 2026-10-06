/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039cea48; end: 1039cea8b; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider end] */

void FUN_1039cea48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cea8c; end: 1039cec23;  */

void FUN_1039cea8c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e7a090)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f185f70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreatorsActiveUserSessionScopeGraphBridge/SCSCImpalaCreatorNotificationsServicesSaberServiceProvider.swift"
                            ,0x6a,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cec24);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53b20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039cec24; end: 1039ceccf; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039cec24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039cea8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039cecd0; end: 1039ced43; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cecd0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc5c88,0);
  func_0x000107c61614(param_1 + _DAT_112fc5c90,0);
  *(undefined8 *)(param_1 + _DAT_112fc5c98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ced44; end: 1039ced77;  */

void FUN_1039ced44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ced78; end: 1039cedbf; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ced78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5c88);
  func_0x000107c61610(param_1 + _DAT_112fc5c90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5c98));
  return;
}



/* Entry: 1039cedc0; end: 1039ceddf;  */

void FUN_1039cedc0(void)

{
  func_0x000107c61168(&PTR_PTR_112fc5ce0);
  return;
}



/* Entry: 1039cede0; end: 1039cedeb; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cede0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5d48;
  func_0x000107c61428(param_1 + _DAT_112fc5d48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cedec; end: 1039cedf7; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cedec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5d48;
  func_0x000107c61428(param_1 + _DAT_112fc5d48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cedf8; end: 1039cee03; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider creatorsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cedf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5d50;
  func_0x000107c61428(param_1 + _DAT_112fc5d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cee04; end: 1039cee47;  */

void FUN_1039cee04(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cee48; end: 1039cee53; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider setCreatorsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cee48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5d50;
  func_0x000107c61428(param_1 + _DAT_112fc5d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cee54; end: 1039ceea7;  */

void FUN_1039cee54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ceea8; end: 1039cf0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ceea8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40d20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cd4e8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc5a28);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc5d58);
      *(long *)(unaff_x20 + _DAT_112fc5d58) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CreatorsActiveUserSessionScopeGraphBridge/SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider.swift"
                      ,0x6b,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cefd4);
  (*pcVar1)();
}



/* Entry: 1039cf0bc; end: 1039cf0ef; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider provide] */

void FUN_1039cf0bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039ceea8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cf0f0; end: 1039cf123; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider __safeProvide] */

void FUN_1039cf0f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039cefd4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cf124; end: 1039cf167; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider end] */

void FUN_1039cf124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cf168; end: 1039cf2ff;  */

void FUN_1039cf168(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e7a090)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f185f70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreatorsActiveUserSessionScopeGraphBridge/SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider.swift"
                            ,0x6b,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cf300);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53b20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039cf300; end: 1039cf3ab; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_1039cf300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039cf168(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039cf3ac; end: 1039cf41f; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf3ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc5d48,0);
  func_0x000107c61614(param_1 + _DAT_112fc5d50,0);
  *(undefined8 *)(param_1 + _DAT_112fc5d58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cf420; end: 1039cf453;  */

void FUN_1039cf420(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cf454; end: 1039cf49b; -[SCSCSwipeToProfileParamsProviderServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf454(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5d48);
  func_0x000107c61610(param_1 + _DAT_112fc5d50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5d58));
  return;
}



/* Entry: 1039cf49c; end: 1039cf4bb;  */

void FUN_1039cf49c(void)

{
  func_0x000107c61168(&PTR_PTR_112fc5da0);
  return;
}



/* Entry: 1039cf4bc; end: 1039cf517; -[SCCreatorsSendToSelection recipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf4bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fc5e08);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000104522c9c(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1039cf518; end: 1039cf57f; -[SCCreatorsSendToSelection groups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf518(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112fc5e10);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    uVar1 = 0x112d6dfd0;
    func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1039cf580; end: 1039cf5db; -[SCCreatorsSendToSelection additionalText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf580(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fc5e18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fc5e18);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039cf5dc; end: 1039cf65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc5e08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5e10) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc5e18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cf660; end: 1039cf73f; -[SCCreatorsSendToSelection initWithRecipients:groups:additionalText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf660(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 != 0) {
    param_2 = 0;
    func_0x000104522c9c();
    func_0x000107c5fc54();
  }
  if (param_4 != 0) {
    param_2 = 0x112d6dfd0;
    func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
    func_0x000107c5fc54();
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(long *)(param_1 + _DAT_112fc5e08) = param_3;
  *(long *)(param_1 + _DAT_112fc5e10) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112fc5e18);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cf740; end: 1039cf79f; -[SCCreatorsSendToSelection init] */

void FUN_1039cf740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatorsMessagingServicesScope.CreatorsSendToSelection",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cf76c);
  (*pcVar1)();
}



/* Entry: 1039cf7a0; end: 1039cf7eb; -[SCCreatorsSendToSelection .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039cf7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cf7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fc5e08));
  return;
}



/* Entry: 1039cf7ec; end: 1039cf80b;  */

void FUN_1039cf7ec(void)

{
  func_0x000107c61168(&PTR_PTR_1129118a8);
  return;
}



/* Entry: 1039cf80c; end: 1039cf81b; -[_TtC32SCCreatorsMessagingServicesScope32SCCreatorsMessagingServicesScope messageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc5e48));
  return;
}



/* Entry: 1039cf81c; end: 1039cf867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf81c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc5e48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cf868; end: 1039cf8bf; -[_TtC32SCCreatorsMessagingServicesScope32SCCreatorsMessagingServicesScope initWithMessageSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fc5e48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1039cf8c0; end: 1039cf91f; -[_TtC32SCCreatorsMessagingServicesScope32SCCreatorsMessagingServicesScope init] */

void FUN_1039cf8c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatorsMessagingServicesScope.SCCreatorsMessagingServicesScope",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cf8ec);
  (*pcVar1)();
}



/* Entry: 1039cf920; end: 1039cf92f; -[_TtC32SCCreatorsMessagingServicesScope32SCCreatorsMessagingServicesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5e48));
  return;
}



/* Entry: 1039cf930; end: 1039cf93f; -[_TtC35SCCreatorsSubscriptionStoreServices35SCCreatorsSubscriptionStoreServices subscriptionStoreDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc5e78));
  return;
}



/* Entry: 1039cf940; end: 1039cf98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf940(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc5e78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cf98c; end: 1039cf9e3; -[_TtC35SCCreatorsSubscriptionStoreServices35SCCreatorsSubscriptionStoreServices initWithSubscriptionStoreDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cf98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fc5e78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1039cf9e4; end: 1039cfa17;  */

void FUN_1039cf9e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cfa18; end: 1039cfa27; -[_TtC35SCCreatorsSubscriptionStoreServices35SCCreatorsSubscriptionStoreServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5e78));
  return;
}



/* Entry: 1039cfa28; end: 1039cfa37; -[_TtC36SCImpalaCreatorNotificationsServices36SCImpalaCreatorNotificationsServices settingsNotificationViewControllerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfa28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc5ea8));
  return;
}



/* Entry: 1039cfa38; end: 1039cfa83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfa38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc5ea8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cfa84; end: 1039cfae3; -[_TtC36SCImpalaCreatorNotificationsServices36SCImpalaCreatorNotificationsServices init] */

void FUN_1039cfa84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaCreatorNotificationsServices.SCImpalaCreatorNotificationsServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cfab0);
  (*pcVar1)();
}



/* Entry: 1039cfae4; end: 1039cfaf3; -[_TtC36SCImpalaCreatorNotificationsServices36SCImpalaCreatorNotificationsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5ea8));
  return;
}



/* Entry: 1039cfaf4; end: 1039cfb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039cfaf4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa19c0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc5ed8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc5ee0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cfb7c);
  (*pcVar1)();
}



/* Entry: 1039cfb7c; end: 1039cfbdb; -[_TtC36FdsActiveUserSessionScopeGraphBridge51FdsActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039cfb7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FdsActiveUserSessionScopeGraphBridge.FdsActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cfba8);
  (*pcVar1)();
}



/* Entry: 1039cfbdc; end: 1039cfc13; -[_TtC36FdsActiveUserSessionScopeGraphBridge51FdsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039cfbf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cfbfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5ed8));
  return;
}



/* Entry: 1039cfc14; end: 1039cfc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cfc14(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc5ee0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc5ed8));
  return;
}



/* Entry: 1039cfc3c; end: 1039cfc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cfc3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc6190);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cfca0; end: 1039cfca7;  */

void FUN_1039cfca0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cfca8; end: 1039cfd47;  */

void FUN_1039cfca8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cfd48; end: 1039cfd67;  */

void FUN_1039cfd48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cfd68; end: 1039cfdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cfd68(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc6198);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cfdcc; end: 1039cfdd3;  */

void FUN_1039cfdcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cfdd4; end: 1039cfe73;  */

void FUN_1039cfdd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cfe74; end: 1039cfe93;  */

void FUN_1039cfe74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cfe94; end: 1039cfef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cfe94(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc61a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cfef8; end: 1039cfeff;  */

void FUN_1039cfef8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cff00; end: 1039cff9f;  */

void FUN_1039cff00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cffa0; end: 1039cffbf;  */

void FUN_1039cffa0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cffc0; end: 1039d0033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc6190) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc6198) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc61a0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039d0034; end: 1039d0093; -[_TtC36FdsActiveUserSessionScopeGraphBridge44FdsActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039d0034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FdsActiveUserSessionScopeGraphBridge.FdsActiveUserSessionScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d0060);
  (*pcVar1)();
}



/* Entry: 1039d0094; end: 1039d0137; -[_TtC36FdsActiveUserSessionScopeGraphBridge44FdsActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d00b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d00b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc6190));
  return;
}



/* Entry: 1039d0138; end: 1039d016f;  */

undefined1  [16] FUN_1039d0138(void)

{
  return ZEXT816(0x1106b9978);
}



/* Entry: 1039d0170; end: 1039d01b3; -[SCFdsActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039d0170(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d01b4; end: 1039d01e7;  */

void FUN_1039d01b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d01e8; end: 1039d022f; -[SCFdsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d0214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d0218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d01e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc61f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc6200));
  return;
}



/* Entry: 1039d0230; end: 1039d024f;  */

void FUN_1039d0230(void)

{
  func_0x000107c61168(&PTR_PTR_112911d50);
  return;
}



/* Entry: 1039d0250; end: 1039d025b; -[SCSCAtlasRegistryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0250(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc6238;
  func_0x000107c61428(param_1 + _DAT_112fc6238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d025c; end: 1039d0267; -[SCSCAtlasRegistryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d025c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc6238;
  func_0x000107c61428(param_1 + _DAT_112fc6238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d0268; end: 1039d0273; -[SCSCAtlasRegistryServicesSaberServiceProvider fdsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0268(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc6240;
  func_0x000107c61428(param_1 + _DAT_112fc6240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d0274; end: 1039d02b7;  */

void FUN_1039d0274(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d02b8; end: 1039d02c3; -[SCSCAtlasRegistryServicesSaberServiceProvider setFdsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d02b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc6240;
  func_0x000107c61428(param_1 + _DAT_112fc6240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d02c4; end: 1039d0317;  */

void FUN_1039d02c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d0318; end: 1039d052b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039d0318(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c42e30();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cfccc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc6190);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc6248);
      *(long *)(unaff_x20 + _DAT_112fc6248) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "FdsActiveUserSessionScopeGraphBridge/SCSCAtlasRegistryServicesSaberServiceProvider.swift"
                      ,0x58,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d0444);
  (*pcVar1)();
}



/* Entry: 1039d052c; end: 1039d055f; -[SCSCAtlasRegistryServicesSaberServiceProvider provide] */

void FUN_1039d052c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039d0318();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d0560; end: 1039d0593; -[SCSCAtlasRegistryServicesSaberServiceProvider __safeProvide] */

void FUN_1039d0560(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039d0444();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d0594; end: 1039d05d7; -[SCSCAtlasRegistryServicesSaberServiceProvider end] */

void FUN_1039d0594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d05d8; end: 1039d076f;  */

void FUN_1039d05d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e79a00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f186600,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FdsActiveUserSessionScopeGraphBridge/SCSCAtlasRegistryServicesSaberServiceProvider.swift"
                            ,0x58,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d0770);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c548dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039d0770; end: 1039d081b; -[SCSCAtlasRegistryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039d0770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039d05d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039d081c; end: 1039d088f; -[SCSCAtlasRegistryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d081c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc6238,0);
  func_0x000107c61614(param_1 + _DAT_112fc6240,0);
  *(undefined8 *)(param_1 + _DAT_112fc6248) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039d0890; end: 1039d08c3;  */

void FUN_1039d0890(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d08c4; end: 1039d090b; -[SCSCAtlasRegistryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d08c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc6238);
  func_0x000107c61610(param_1 + _DAT_112fc6240);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc6248));
  return;
}



/* Entry: 1039d090c; end: 1039d092b;  */

void FUN_1039d090c(void)

{
  func_0x000107c61168(&PTR_PTR_112fc6290);
  return;
}



/* Entry: 1039d092c; end: 1039d0937; -[SCSCAtlasServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d092c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc62f8;
  func_0x000107c61428(param_1 + _DAT_112fc62f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d0938; end: 1039d0943; -[SCSCAtlasServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc62f8;
  func_0x000107c61428(param_1 + _DAT_112fc62f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d0944; end: 1039d094f; -[SCSCAtlasServicesSaberServiceProvider fdsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0944(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc6300;
  func_0x000107c61428(param_1 + _DAT_112fc6300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d0950; end: 1039d0993;  */

void FUN_1039d0950(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d0994; end: 1039d099f; -[SCSCAtlasServicesSaberServiceProvider setFdsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc6300;
  func_0x000107c61428(param_1 + _DAT_112fc6300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d09a0; end: 1039d09f3;  */

void FUN_1039d09a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d09f4; end: 1039d0c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039d09f4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c42e30();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cfdf8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc6198);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc6308);
      *(long *)(unaff_x20 + _DAT_112fc6308) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "FdsActiveUserSessionScopeGraphBridge/SCSCAtlasServicesSaberServiceProvider.swift"
                      ,0x50,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d0b20);
  (*pcVar1)();
}



/* Entry: 1039d0c08; end: 1039d0c3b; -[SCSCAtlasServicesSaberServiceProvider provide] */

void FUN_1039d0c08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039d09f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d0c3c; end: 1039d0c6f; -[SCSCAtlasServicesSaberServiceProvider __safeProvide] */

void FUN_1039d0c3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039d0b20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d0c70; end: 1039d0cb3; -[SCSCAtlasServicesSaberServiceProvider end] */

void FUN_1039d0c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d0cb4; end: 1039d0e4b;  */

void FUN_1039d0cb4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e79a00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f186600,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FdsActiveUserSessionScopeGraphBridge/SCSCAtlasServicesSaberServiceProvider.swift"
                            ,0x50,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d0e4c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c548dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039d0e4c; end: 1039d0ef7; -[SCSCAtlasServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039d0e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1039d0cb4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039d0ef8; end: 1039d0f6b; -[SCSCAtlasServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0ef8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc62f8,0);
  func_0x000107c61614(param_1 + _DAT_112fc6300,0);
  *(undefined8 *)(param_1 + _DAT_112fc6308) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039d0f6c; end: 1039d0f9f;  */

void FUN_1039d0f6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d0fa0; end: 1039d0fe7; -[SCSCAtlasServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d0fa0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc62f8);
  func_0x000107c61610(param_1 + _DAT_112fc6300);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc6308));
  return;
}


