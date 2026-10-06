/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b8bce8; end: 100b8bd93; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b8bce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b8bd94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b8bd94; end: 100b8bf2b;  */

void FUN_100b8bd94(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e432a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1bcd60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsUserSessionScopeGraphBridge/SCSponsoredLensStudyConfigurationServicesSaberServiceProvider.swift"
                            ,100,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8bf2c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b8bf2c; end: 100b8bf37; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8bf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130128a0;
  func_0x000107c61428(param_1 + _DAT_1130128a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8bf38; end: 100b8bf8b;  */

void FUN_100b8bf38(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8bf8c; end: 100b8bf97; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider setAradsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8bf8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130128a8;
  func_0x000107c61428(param_1 + _DAT_1130128a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8bf98; end: 100b8bfcb; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider __safeProvide] */

void FUN_100b8bf98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b8bfcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8bfcc; end: 100b8c0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8bfcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e0ec();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b8c110();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113012208);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130128b0);
      *(long *)(unaff_x20 + _DAT_1130128b0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b8c0b4; end: 100b8c0bf; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c0b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130128a0;
  func_0x000107c61428(param_1 + _DAT_1130128a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8c0c0; end: 100b8c103;  */

void FUN_100b8c0c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b8c104; end: 100b8c10f; -[SCSponsoredLensStudyConfigurationServicesSaberServiceProvider aradsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c104(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130128a8;
  func_0x000107c61428(param_1 + _DAT_1130128a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8c110; end: 100b8c18b;  */

void FUN_100b8c110(undefined8 param_1)

{
  if (lRam0000000113012110 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c690c);
  return;
}



/* Entry: 100b8c18c; end: 100b8c197; -[SCSponsoredLensCTAPluginImplEntryPoint setLensStudyConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72000;
  func_0x000107c61428(param_1 + _DAT_112f72000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8c198; end: 100b8c20b; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c198(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e6fa80,0);
  func_0x000107c61614(param_1 + _DAT_112e6fa88,0);
  *(undefined8 *)(param_1 + _DAT_112e6fa90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b8c20c; end: 100b8c2b7; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b8c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b8c2b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b8c2b8; end: 100b8c44f;  */

void FUN_100b8c2b8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f886c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000026,0x800000010f077940,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UserNavigationScopeGraphBridge/SCAdAttachmentHandlerScopeServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x3ea,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8c450);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b8c450; end: 100b8c45b; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6fa80;
  func_0x000107c61428(param_1 + _DAT_112e6fa80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8c45c; end: 100b8c4af;  */

void FUN_100b8c45c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8c4b0; end: 100b8c4bb; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider setUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6fa88;
  func_0x000107c61428(param_1 + _DAT_112e6fa88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8c4bc; end: 100b8c4ef; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider __safeProvide] */

void FUN_100b8c4bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b8c4f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8c4f0; end: 100b8c5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c4f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d9f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b8c634();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112e6e1c8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e6fa90);
      *(long *)(unaff_x20 + _DAT_112e6fa90) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b8c5d8; end: 100b8c5e3; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c5d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6fa80;
  func_0x000107c61428(param_1 + _DAT_112e6fa80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8c5e4; end: 100b8c627;  */

void FUN_100b8c5e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b8c628; end: 100b8c633; -[SCAdAttachmentHandlerScopeServicesSaberServiceProvider userNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6fa88;
  func_0x000107c61428(param_1 + _DAT_112e6fa88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8c634; end: 100b8c6af;  */

void FUN_100b8c634(undefined8 param_1)

{
  if (lRam0000000112e65c40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6bab70);
  return;
}



/* Entry: 100b8c6b0; end: 100b8c6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c6b0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003691f8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130674d0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100b8c6b8; end: 100b8c723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c6b8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003691f8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130674d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100b8c724; end: 100b8c737;  */

/* WARNING: Possible PIC construction at 0x000100b8c7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8c804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8c814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b8c808) */
/* WARNING: Removing unreachable block (ram,0x000100b8c7f8) */
/* WARNING: Removing unreachable block (ram,0x000100b8c818) */

void FUN_100b8c724(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_1106057b0;
  func_0x000107c613fc(&UNK_1106057b0,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112f382d8;
  FUN_1000285a8(0x112f382d8,&UNK_10db832e0);
  func_0x000107c613fc();
  puVar8 = &UNK_10308348c;
  FUN_1000841f8(&UNK_10308348c,puVar6,uVar7);
  FUN_100084214(&UNK_10db832b0,0x2f,2);
  *param_1 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b8c738; end: 100b8c83f;  */

/* WARNING: Possible PIC construction at 0x000100b8c7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8c804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8c814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b8c808) */
/* WARNING: Removing unreachable block (ram,0x000100b8c7f8) */
/* WARNING: Removing unreachable block (ram,0x000100b8c818) */

void FUN_100b8c738(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1106057b0;
  func_0x000107c613fc(&UNK_1106057b0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112f382d8;
  FUN_1000285a8(0x112f382d8,&UNK_10db832e0);
  func_0x000107c613fc();
  puVar3 = &UNK_10308348c;
  FUN_1000841f8(&UNK_10308348c,puVar1,uVar2);
  FUN_100084214(&UNK_10db832b0,0x2f,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100b8c840; end: 100b8c847;  */

void FUN_100b8c840(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8c848; end: 100b8c89b;  */

void FUN_100b8c848(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8c89c; end: 100b8c8a7; -[SCSponsoredLensCTAPluginImplEntryPoint setAdAttachmentHandlerScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72008;
  func_0x000107c61428(param_1 + _DAT_112f72008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8c8a8; end: 100b8c90b; -[SCSponsoredLensCTAPluginImplEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72010;
  func_0x000107c61428(param_1 + _DAT_112f72010,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b8c90c; end: 100b8c933; -[SCSponsoredLensCTAPluginImplEntryPoint begin] */

void FUN_100b8c90c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b8c934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b8c934; end: 100b8d753;  */

/* WARNING: Possible PIC construction at 0x000100b8caf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8cb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8cb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8d1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b8d1ec) */
/* WARNING: Removing unreachable block (ram,0x000100b8d1dc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d20c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d1fc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d23c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d22c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d27c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d26c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d25c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2bc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2ac) */
/* WARNING: Removing unreachable block (ram,0x000100b8d29c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d28c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2fc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2ec) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2dc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d2cc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d34c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d33c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d32c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d31c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3ac) */
/* WARNING: Removing unreachable block (ram,0x000100b8d39c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d38c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d37c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d36c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d40c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3fc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3ec) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3dc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3cc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d3bc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d490) */
/* WARNING: Removing unreachable block (ram,0x000100b8d480) */
/* WARNING: Removing unreachable block (ram,0x000100b8d470) */
/* WARNING: Removing unreachable block (ram,0x000100b8d460) */
/* WARNING: Removing unreachable block (ram,0x000100b8d450) */
/* WARNING: Removing unreachable block (ram,0x000100b8d440) */
/* WARNING: Removing unreachable block (ram,0x000100b8d504) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4f4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4e4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4d4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4c4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4b4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d4a4) */
/* WARNING: Removing unreachable block (ram,0x000100b8d568) */
/* WARNING: Removing unreachable block (ram,0x000100b8d558) */
/* WARNING: Removing unreachable block (ram,0x000100b8d548) */
/* WARNING: Removing unreachable block (ram,0x000100b8d538) */
/* WARNING: Removing unreachable block (ram,0x000100b8d528) */
/* WARNING: Removing unreachable block (ram,0x000100b8d518) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5dc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5cc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5bc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5ac) */
/* WARNING: Removing unreachable block (ram,0x000100b8d59c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d58c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d57c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d648) */
/* WARNING: Removing unreachable block (ram,0x000100b8d650) */
/* WARNING: Removing unreachable block (ram,0x000100b8d658) */
/* WARNING: Removing unreachable block (ram,0x000100b8d660) */
/* WARNING: Removing unreachable block (ram,0x000100b8d638) */
/* WARNING: Removing unreachable block (ram,0x000100b8d628) */
/* WARNING: Removing unreachable block (ram,0x000100b8d618) */
/* WARNING: Removing unreachable block (ram,0x000100b8d608) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5f8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5e8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d718) */
/* WARNING: Removing unreachable block (ram,0x000100b8d708) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6f8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6e8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6d8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6c8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6b8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6a8) */
/* WARNING: Removing unreachable block (ram,0x000100b8d190) */
/* WARNING: Removing unreachable block (ram,0x000100b8d668) */
/* WARNING: Removing unreachable block (ram,0x000100b8d180) */
/* WARNING: Removing unreachable block (ram,0x000100b8d170) */
/* WARNING: Removing unreachable block (ram,0x000100b8d160) */
/* WARNING: Removing unreachable block (ram,0x000100b8d150) */
/* WARNING: Removing unreachable block (ram,0x000100b8d140) */
/* WARNING: Removing unreachable block (ram,0x000100b8d130) */
/* WARNING: Removing unreachable block (ram,0x000100b8d120) */
/* WARNING: Removing unreachable block (ram,0x000100b8d100) */
/* WARNING: Removing unreachable block (ram,0x000100b8d06c) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb64) */
/* WARNING: Removing unreachable block (ram,0x000100b8d574) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb70) */
/* WARNING: Removing unreachable block (ram,0x000100b8d5e0) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb90) */
/* WARNING: Removing unreachable block (ram,0x000100b8d6a0) */
/* WARNING: Removing unreachable block (ram,0x000100b8cbe8) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb30) */
/* WARNING: Removing unreachable block (ram,0x000100b8d508) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb34) */
/* WARNING: Removing unreachable block (ram,0x000100b8cafc) */
/* WARNING: Removing unreachable block (ram,0x000100b8d49c) */
/* WARNING: Removing unreachable block (ram,0x000100b8cb04) */
/* WARNING: Removing unreachable block (ram,0x000100b8d1cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c934(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f284();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar6);
        lVar6 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c3d408();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c3f2a4();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c4b258();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar4 = unaff_x20;
              func_0x000107c5d2dc();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(lVar6);
                lVar6 = lVar1;
              }
              else {
                lVar4 = unaff_x20;
                func_0x000107c5d900();
                func_0x000107c61180();
                if (lVar4 == 0) {
                  func_0x000107c61170(lVar6);
                  lVar6 = lVar1;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c3e3f8();
                  func_0x000107c61180();
                  if (lVar5 != 0) {
                    lVar5 = unaff_x20;
                    func_0x000107c3d404();
                    func_0x000107c61180();
                    if (lVar5 != 0) {
                      lVar5 = unaff_x20;
                      func_0x000107c4b470();
                      func_0x000107c61180();
                      if (lVar5 == 0) {
                        func_0x000107c61170(lVar6);
                        lVar6 = lVar1;
                      }
                      else {
                        lVar5 = unaff_x20;
                        func_0x000107c3d230();
                        func_0x000107c61180();
                        if (lVar5 == 0) {
                          func_0x000107c61170(lVar6);
                          lVar6 = lVar1;
                        }
                        else {
                          func_0x000107c3d228();
                          func_0x000107c61180();
                          if (unaff_x20 != 0) {
                            FUN_100b8d870();
                            func_0x000107c613fc();
                            lVar6 = *(long *)(lVar2 + _DAT_1130385c0);
                            func_0x000107c5c734();
                            func_0x000107c61180();
                            if (lVar6 == 0) {
                              func_0x000107c61170(lVar2);
                              lVar6 = lVar4;
                            }
                            else {
                              func_0x000107c4b254(lVar3);
                              func_0x000107c61180();
                              func_0x000107c5c734();
                              func_0x000107c61180();
                              lVar6 = lVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 100b8d754; end: 100b8d75f; -[SCSponsoredLensCTAPluginImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fb0;
  func_0x000107c61428(param_1 + _DAT_112f71fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d760; end: 100b8d7a3;  */

void FUN_100b8d760(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b8d7a4; end: 100b8d7af; -[SCSponsoredLensCTAPluginImplEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fb8;
  func_0x000107c61428(param_1 + _DAT_112f71fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7b0; end: 100b8d7bb; -[SCSponsoredLensCTAPluginImplEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fc0;
  func_0x000107c61428(param_1 + _DAT_112f71fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7bc; end: 100b8d7c7; -[SCSponsoredLensCTAPluginImplEntryPoint adRenderDataMapperFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fc8;
  func_0x000107c61428(param_1 + _DAT_112f71fc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7c8; end: 100b8d7d3; -[SCSponsoredLensCTAPluginImplEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fd0;
  func_0x000107c61428(param_1 + _DAT_112f71fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7d4; end: 100b8d7df; -[SCSponsoredLensCTAPluginImplEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fd8;
  func_0x000107c61428(param_1 + _DAT_112f71fd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7e0; end: 100b8d7eb; -[SCSponsoredLensCTAPluginImplEntryPoint unlockableTrackingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fe0;
  func_0x000107c61428(param_1 + _DAT_112f71fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7ec; end: 100b8d7f7; -[SCSponsoredLensCTAPluginImplEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71fe8;
  func_0x000107c61428(param_1 + _DAT_112f71fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d7f8; end: 100b8d803; -[SCSponsoredLensCTAPluginImplEntryPoint audioSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d7f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ff0;
  func_0x000107c61428(param_1 + _DAT_112f71ff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d804; end: 100b8d80f; -[SCSponsoredLensCTAPluginImplEntryPoint adRenderDataGrapheneLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d804(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ff8;
  func_0x000107c61428(param_1 + _DAT_112f71ff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d810; end: 100b8d81b; -[SCSponsoredLensCTAPluginImplEntryPoint lensStudyConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72000;
  func_0x000107c61428(param_1 + _DAT_112f72000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d81c; end: 100b8d827; -[SCSponsoredLensCTAPluginImplEntryPoint adAttachmentHandlerScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d81c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72008;
  func_0x000107c61428(param_1 + _DAT_112f72008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8d828; end: 100b8d86f; -[SCSponsoredLensCTAPluginImplEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d828(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72010;
  func_0x000107c61428(param_1 + _DAT_112f72010,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b8d870; end: 100b8d88f;  */

void FUN_100b8d870(void)

{
  func_0x000107c61168(&PTR_PTR_112f71328);
  return;
}



/* Entry: 100b8d890; end: 100b8d897; -[SCAdUnlockableTrackingServices unlockableLensTracker] */

undefined8 FUN_100b8d890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b8d898; end: 100b8d8e3;  */

void FUN_100b8d898(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cb3c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b8d8e4; end: 100b8dd37; -[SCAdUnlockableTrackingServiceProvider _unlockableLensTrackerWithSnapAdsUnlockableTracker:adLensCarouselInteractionHistoryTracker:inventoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8d8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  lVar30 = (long)_DAT_112723890;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  lVar1 = param_1 + lVar30;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5d8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b9188;
  func_0x000107c610f4();
  lVar29 = (long)_DAT_112723894;
  lVar1 = param_1 + lVar29;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c45740(puVar3,param_2,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723898;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c3d28c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11272389c;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4b08c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar7 = PTR_PTR_1126b9190;
  func_0x000107c610f4();
  uVar8 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar9 = PTR_PTR_1126b7d78;
  func_0x000107c610f4();
  lVar27 = (long)_DAT_1127238a0;
  lVar1 = param_1 + lVar27;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar28 = (long)_DAT_1127238a4;
  lVar4 = param_1 + lVar28;
  func_0x000107c61148();
  lVar11 = lVar4;
  func_0x000107c4d594();
  func_0x000107c61180();
  func_0x000107c45584(puVar9,param_2,lVar10,lVar11,0);
  lVar12 = param_1 + _DAT_1127238a8;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c5d2fc();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar27 = param_1 + lVar27;
  func_0x000107c61148();
  lVar15 = lVar27;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_1127238ac;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar18 = param_1 + lVar30;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c3d9f8();
  func_0x000107c61180();
  lVar29 = param_1 + lVar29;
  func_0x000107c61148();
  lVar20 = lVar29;
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar26 = *(undefined8 *)(param_1 + _DAT_11272388c);
  lVar21 = param_1 + _DAT_1127238b0;
  func_0x000107c61148();
  lVar22 = lVar21;
  func_0x000107c5b76c();
  func_0x000107c61180();
  lVar23 = param_1 + _DAT_1127238b4;
  func_0x000107c61148();
  lVar24 = lVar23;
  func_0x000107c5b7f8();
  func_0x000107c61180();
  lVar30 = param_1 + lVar30;
  func_0x000107c61148();
  lVar25 = lVar30;
  func_0x000107c3d9e8();
  func_0x000107c61180();
  param_1 = param_1 + lVar28;
  func_0x000107c61148();
  lVar28 = param_1;
  func_0x000107c4d594();
  func_0x000107c61180();
  func_0x000107c48624(puVar7,param_2,0,uVar8,puVar9,lVar14,lVar2,puVar3,param_4,0xffffffffffffffff,
                      lVar15,lVar17,lVar19,lVar5,lVar20,uVar26,param_5,lVar22,lVar6,lVar24,lVar25,
                      lVar28);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100b8dd38; end: 100b8dd57; -[DpaLensSnapAdConfigServices adConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8dd38(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113013008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8dd58; end: 100b8dd77; -[SponsoredLensEngagementServices lensEngagementProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8dd58(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11306bf28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8dd78; end: 100b8ddb7;  */

void FUN_100b8dd78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cb28();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b8ddb8; end: 100b8e543; -[SCAdUnlockableTrackingServiceProvider _unlockableAdTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8ddb8(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uStack_f8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b91a0;
  func_0x000107c610f4();
  lVar2 = param_1 + (long)_DAT_1127238a4;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c4d594();
  func_0x000107c61180();
  lVar22 = param_1 + (long)_DAT_112723894;
  func_0x000107c61148(lVar22);
  lVar4 = lVar22;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c47a40();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126b91a8;
  func_0x000107c610f4();
  lVar22 = (long)_DAT_1127238a0;
  lVar2 = param_1 + lVar22;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3d28c();
  func_0x000107c61180();
  func_0x000107c45568();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61144(auStack_80,param_1);
  puVar6 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10544c268;
  puStack_90 = &UNK_110886f98;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126b91b0;
  func_0x000107c610f4();
  lVar22 = param_1 + lVar22;
  func_0x000107c61148(lVar22);
  lVar3 = lVar22;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar2 = param_1 + (long)_DAT_1127238b8;
  func_0x000107c61148(lVar2);
  func_0x000107c45588();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar22);
  lVar2 = param_1 + (long)_DAT_112723890;
  func_0x000107c61148();
  lVar22 = lVar2;
  func_0x000107c3d9f8();
  func_0x000107c61180();
  lVar3 = lVar22;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar2);
  puVar8 = PTR_PTR_1126b91b8;
  func_0x000107c610f4();
  func_0x000107c45724();
  puVar9 = PTR_PTR_1126b91c0;
  func_0x000107c610f4();
  lVar22 = (long)_DAT_1127238ac;
  lVar2 = param_1 + lVar22;
  func_0x000107c61148(lVar2);
  lVar4 = lVar2;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c47a2c();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  puVar10 = PTR_PTR_1126b91c8;
  func_0x000107c610f4();
  func_0x000107c45478();
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar12 = param_1;
  FUN_100b8f89c();
  func_0x000107c61180();
  puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar14 = uVar12;
  func_0x000107c6115c(uVar12,puVar13);
  if ((uVar14 & 1) == 0) {
    uVar14 = param_1;
    FUN_100b8f89c();
    func_0x000107c61180();
    uStack_f8 = uVar14;
    func_0x000107c436d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
  }
  else {
    uStack_f8 = 0;
  }
  func_0x000107c61170(uVar12);
  uVar12 = param_1;
  func_0x000100b8f8c0();
  func_0x000107c61180();
  uVar14 = uVar12;
  func_0x000107c3d28c();
  func_0x000107c61180();
  uVar15 = uVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3ebdc();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  puVar13 = PTR_PTR_1126b8d58;
  func_0x000107c610f4();
  lVar2 = param_1 + lVar22;
  func_0x000107c61148(lVar2);
  lVar4 = lVar2;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000100b8f8e4(param_1);
  func_0x000107c61180();
  uVar14 = uVar12;
  func_0x000107c5dac4();
  func_0x000107c61180();
  uVar15 = param_1;
  func_0x000100b8f908(param_1);
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c3d28c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + (long)_DAT_1127238c8;
    func_0x000107c61148(lVar23);
  }
  lVar17 = lVar23;
  func_0x000107c40580(lVar23);
  func_0x000107c61180();
  func_0x000107c46bbc();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  puVar18 = PTR_PTR_1126b91d0;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + lVar22;
    func_0x000107c61148();
  }
  lVar17 = lVar22;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000100b8f908();
  func_0x000107c61180();
  uVar14 = uVar12;
  func_0x000107c3d28c();
  func_0x000107c61180();
  uVar15 = param_1;
  func_0x000100b8f8c0();
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar2 = param_1 + (long)_DAT_1127238b0;
  func_0x000107c61148();
  lVar19 = lVar2;
  func_0x000107c5b76c();
  func_0x000107c61180();
  lVar4 = param_1 + (long)_DAT_1127238bc;
  func_0x000107c61148();
  lVar20 = lVar4;
  func_0x000107c4b618();
  func_0x000107c61180();
  lVar23 = param_1 + (long)_DAT_1127238c4;
  func_0x000107c61148();
  lVar21 = lVar23;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c49190(puVar18);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 100b8e544; end: 100b8e5cf; -[SCSnapchatAdsDeviceAdapter initWithNetworkConnectivityAnnouncer:appPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100b8e544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f57a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithAppPreferences__1125da730,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112759c4c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8e5d0; end: 100b8e693; -[SCAdDeviceInfoProvider initWithAppPreferences:] */

undefined1 *
FUN_100b8e5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_7);
  puStack_38 = PTR_PTR_1126fc9e0;
  uStack_40 = param_5;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c3ec60();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8e694; end: 100b8e69b; -[SCAdApplicationInfo initWithAdConfigProvider:] */

void FUN_100b8e694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff11d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAdConfigProvider_applica_1125d9e38,param_3,0);
  return;
}



/* Entry: 100b8e69c; end: 100b8e843; -[SCAdApplicationInfo initWithAdConfigProvider:applicationLifecycleEvents:] */

undefined8 * FUN_100b8e69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fc9d8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170();
    if (param_4 != 0) {
      FUN_10011df08();
      func_0x000107c61180();
      uVar4 = puVar1[4];
      puVar1[4] = uVar2;
      func_0x000107c61170(uVar4);
      func_0x000107c61174(param_4);
      uVar2 = puVar1[2];
      puVar1[2] = param_4;
      func_0x000107c61170(uVar2);
      puVar3 = PTR_PTR_1126ae810;
      func_0x000107c61160();
      uVar2 = puVar1[3];
      puVar1[3] = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c61144(auStack_58,puVar1);
      uVar4 = puVar1[2];
      func_0x000107c5e370(uVar4);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_60,auStack_58);
      uVar2 = uVar4;
      func_0x000107c5c320(uVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61120(auStack_60);
      func_0x000107c61120(auStack_58);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b8e844; end: 100b8ea53; -[SCAdNetworkManager initWithAdConfigProvider:retroNetworkServices:lifecycleTracker:performer:httpMetadataService:httpRequestModifier:adConfigProviderV2:] */

undefined8 *
FUN_100b8e844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126ed828;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar2);
    if ((int)uVar3 != 0) {
      puVar4 = PTR_PTR_1126c5450;
      func_0x000107c610f4();
      puVar5 = PTR_PTR_1126c5458;
      func_0x000107c610fc();
      func_0x000107c4558c();
      uVar2 = puVar1[9];
      puVar1[9] = puVar4;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b8ea54; end: 100b8ea87; -[_TtC16AdUserIdServices16AdUserIdServices adsUserInfoProvider] */

void FUN_100b8ea54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10040df00();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8ea88; end: 100b8ebb7;  */

void FUN_100b8ea88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  char cStack_51;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = PTR_PTR_1126b9188;
  func_0x000107c610f8();
  func_0x000107c45740();
  FUN_1000d224c(&uStack_50);
  uVar5 = uStack_50;
  func_0x000107c614f0(uStack_50);
  uStack_68 = 0xd00000000000001f;
  uStack_60 = 0x800000010efb44e0;
  uStack_58 = 0;
  (**(code **)(lStack_48 + 8))
            (&cStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lStack_48);
  func_0x000107c615e8(uStack_50);
  if (cStack_51 == '\x01') {
    func_0x0001018c204c(0);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar1);
    func_0x0001018c0ce8(puVar4,uVar1,uVar2);
    puVar6 = puVar4;
  }
  else {
    puVar6 = PTR_PTR_1126a7ca8;
    func_0x000107c610f8();
    func_0x000107c47e5c();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8ebb8);
      (*pcVar3)();
    }
    func_0x000107c61170(puVar4);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 100b8ebb8; end: 100b8ebbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8ebb8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0xff;
  uStack_a8 = param_1;
  func_0x000107c614b8(0xff,param_4,param_3,&UNK_10e7e5394,&UNK_10e7e53a4);
  lVar2 = 0;
  func_0x000107c60188(0,lVar1);
  lStack_d0 = *(long *)(lVar2 + -8);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = auStack_e0 + -extraout_x8;
  lStack_b8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112dbe718);
  FUN_10006c804();
  pcStack_d8 = *(code **)(param_4 + 0x18);
  lVar3 = param_3;
  uVar7 = param_4;
  uStack_c0 = param_2;
  (*pcStack_d8)(param_3);
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,auStack_78,0x20,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (*(long *)(uVar10 + 0x10) != 0) {
    func_0x000107c61434(uVar10);
    uVar8 = uVar7;
    func_0x000100029284(lVar3);
    if ((uVar8 & 1) != 0) {
      FUN_10048eeb8(*(long *)(uVar10 + 0x38) + lVar3 * 0x28,&uStack_a0);
      func_0x000107c6142c(uVar7);
      uVar7 = uVar10;
      goto LAB_100b8ed28;
    }
    func_0x000107c6142c(uVar10);
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
LAB_100b8ed28:
  func_0x000107c6142c(uVar7);
  func_0x000107c614a8(auStack_78);
  uVar4 = 0x112dbe728;
  FUN_1000285a8(0x112dbe728,&UNK_10d979918);
  puVar5 = puVar11;
  func_0x000107c6147c(puVar11,&uStack_a0,uVar4,lVar1,6);
  lVar3 = lStack_b8;
  if (((ulong)puVar5 & 1) == 0) {
    (**(code **)(lStack_b8 + 0x38))(puVar11,1,1,lVar1);
    (**(code **)(lStack_d0 + 8))(puVar11,lStack_c8);
    (**(code **)(param_4 + 0x28))
              (uStack_a8,*(undefined8 *)(unaff_x20 + _DAT_112dbe730),param_3,param_4);
    lVar6 = param_3;
    uVar7 = param_4;
    (*pcStack_d8)(param_3,param_4);
    lStack_88 = lVar1;
    func_0x000107c614b4(param_4,param_3,lVar1,&UNK_10e7e5394,&UNK_10e7e539c);
    uStack_80 = param_4;
    FUN_1000c5db4(&uStack_a0);
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c61428(unaff_x20 + lVar2,auStack_78,0x21,0);
    FUN_1003ff25c(&uStack_a0,lVar6,uVar7);
    func_0x000107c614a8(auStack_78);
  }
  else {
    (**(code **)(lStack_b8 + 0x38))(puVar11,0,1,lVar1);
    pcVar9 = *(code **)(lVar3 + 0x20);
    (*pcVar9)((long)puVar11 - extraout_x8_00,puVar11,lVar1);
    (*pcVar9)(uStack_a8,(long)puVar11 - extraout_x8_00,lVar1);
  }
  FUN_100070bfc();
  return;
}



/* Entry: 100b8ebbc; end: 100b8eeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8ebbc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0xff;
  uStack_a8 = param_1;
  func_0x000107c614b8(0xff,param_4,param_3,&UNK_10e7e5394,&UNK_10e7e53a4);
  lVar2 = 0;
  func_0x000107c60188(0,lVar1);
  lStack_d0 = *(long *)(lVar2 + -8);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = auStack_e0 + -extraout_x8;
  lStack_b8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112dbe718);
  FUN_10006c804();
  pcStack_d8 = *(code **)(param_4 + 0x18);
  lVar3 = param_3;
  uVar7 = param_4;
  uStack_c0 = param_2;
  (*pcStack_d8)(param_3);
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,auStack_78,0x20,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (*(long *)(uVar10 + 0x10) != 0) {
    func_0x000107c61434(uVar10);
    uVar8 = uVar7;
    func_0x000100029284(lVar3);
    if ((uVar8 & 1) != 0) {
      FUN_10048eeb8(*(long *)(uVar10 + 0x38) + lVar3 * 0x28,&uStack_a0);
      func_0x000107c6142c(uVar7);
      uVar7 = uVar10;
      goto LAB_100b8ed28;
    }
    func_0x000107c6142c(uVar10);
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
LAB_100b8ed28:
  func_0x000107c6142c(uVar7);
  func_0x000107c614a8(auStack_78);
  uVar4 = 0x112dbe728;
  FUN_1000285a8(0x112dbe728,&UNK_10d979918);
  puVar5 = puVar11;
  func_0x000107c6147c(puVar11,&uStack_a0,uVar4,lVar1,6);
  lVar3 = lStack_b8;
  if (((ulong)puVar5 & 1) == 0) {
    (**(code **)(lStack_b8 + 0x38))(puVar11,1,1,lVar1);
    (**(code **)(lStack_d0 + 8))(puVar11,lStack_c8);
    (**(code **)(param_4 + 0x28))
              (uStack_a8,*(undefined8 *)(unaff_x20 + _DAT_112dbe730),param_3,param_4);
    lVar6 = param_3;
    uVar7 = param_4;
    (*pcStack_d8)(param_3,param_4);
    lStack_88 = lVar1;
    func_0x000107c614b4(param_4,param_3,lVar1,&UNK_10e7e5394,&UNK_10e7e539c);
    uStack_80 = param_4;
    FUN_1000c5db4(&uStack_a0);
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c61428(unaff_x20 + lVar2,auStack_78,0x21,0);
    FUN_1003ff25c(&uStack_a0,lVar6,uVar7);
    func_0x000107c614a8(auStack_78);
  }
  else {
    (**(code **)(lStack_b8 + 0x38))(puVar11,0,1,lVar1);
    pcVar9 = *(code **)(lVar3 + 0x20);
    (*pcVar9)((long)puVar11 - extraout_x8_00,puVar11,lVar1);
    (*pcVar9)(uStack_a8,(long)puVar11 - extraout_x8_00,lVar1);
  }
  FUN_100070bfc();
  return;
}



/* Entry: 100b8eeac; end: 100b8eed7;  */

undefined1  [16] FUN_100b8eeac(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 100b8eed8; end: 100b8eedf; -[SCAdUser initWithPersistedDataAdapter:grapheneRegistry:adConfigProvider:] */

void FUN_100b8eed8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c035630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4014000000000000,param_1,PTR_s_initWithPersistedDataAdapter_gra_1125eaf88);
  return;
}



/* Entry: 100b8eee0; end: 100b8f04f; -[SCAdUser initWithPersistedDataAdapter:grapheneRegistry:adConfigProvider:cachedUserAdIdTTL:] */

undefined1 *
FUN_100b8eee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e8408;
  uStack_60 = param_2;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    func_0x000107c43eb8();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c5d3cc(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8f050; end: 100b8f10f; -[SCAdPersistedDataProvider getAdvertiserId] */

void FUN_100b8f050(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3da0c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4a988();
  dVar3 = param_1;
  func_0x000107c61170(uVar1);
  func_0x000107c4101c(PTR_PTR_1126afec0);
  uVar1 = 0;
  if ((param_1 != 0.0) && (dVar3 - param_1 <= 2592000.0)) {
    func_0x000107c61174(uVar2);
    uVar1 = uVar2;
  }
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8f110; end: 100b8f173; -[SCPreferences advertiserId] */

void FUN_100b8f110(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110ee8978);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8f174; end: 100b8f1ff; -[SCPreferences lastAdvertiserIdPersistedTimestamp] */

undefined8 FUN_100b8f174(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_2,param_3,&PTR____CFConstantStringClassReference_110ee8998);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  func_0x000107c6115c(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_2);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4223c(param_2);
  }
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100b8f200; end: 100b8f24b; +[SCTimeUtils currentTimeInSeconds] */

undefined8 FUN_100b8f200(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100b8f24c; end: 100b8f2f3; -[SCAdUser updateAdTrackingAdId] */

void FUN_100b8f24c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100b8f2f4; end: 100b8f2f7;  */

void FUN_100b8f2f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8f2f8; end: 100b8f333;  */

void FUN_100b8f2f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8f334; end: 100b8f44b; -[SCAdNetworkUserAgent initWithApplicationInfo:deviceAdapter:] */

undefined8 *
FUN_100b8f334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_1126f5ad0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c44198();
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c43ee0();
    func_0x000107c61180();
    uVar4 = param_3;
    func_0x000107c43ee4();
    func_0x000107c61180();
    func_0x000107c51804();
    func_0x000107c61180();
    uVar6 = puVar1[1];
    puVar1[1] = puVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b8f44c; end: 100b8f517; -[SCAdDeviceInfoProvider getOSVersion] */

void FUN_100b8f44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126d9838;
  func_0x000107c4e0d4(PTR_PTR_1126d9838);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d9838;
  func_0x000107c4e0d8();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c51804(puVar5,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100b8f518; end: 100b8f53b; +[SCAdDeviceInfoConstants osVersionFormat] */

void FUN_100b8f518(void)

{
  func_0x000107c5fadc(0x40252f4025,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8f53c; end: 100b8f567; +[SCAdDeviceInfoConstants osVersionPrefix] */

void FUN_100b8f53c(void)

{
  func_0x000107c5fadc(0x4f20656e6f685069,0xe900000000000053);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8f568; end: 100b8f61f; -[SCAdApplicationInfo getApplicationName] */

void FUN_100b8f568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c4d9e8(puVar2,param_2,*(undefined8 *)PTR__kCFBundleExecutableKey_11034ab98);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c4d9e8(puVar2,param_2,*(undefined8 *)PTR__kCFBundleIdentifierKey_11034aba0);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(puVar1);
    puVar3 = puVar1;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b8f620; end: 100b8f6b7; -[SCAdApplicationInfo getApplicationVersion] */

void FUN_100b8f620(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60760();
  func_0x000107c60764();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4539c();
    func_0x000107c61180();
    param_1 = puVar2;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b8f6b8; end: 100b8f787; -[SCAdSerializingNetworkManager initWithNetworkAdapter:grapheneRegistryLazy:] */

undefined1 *
FUN_100b8f6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fca08;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8f788; end: 100b8f78f;  */

void FUN_100b8f788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100b8f78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 100b8f790; end: 100b8f89b; -[SCAdRequestInfoProvider initUserInfoAdapter:userAgentAdapter:applicationInfo:deviceAdapter:birthdayProvider:] */

undefined1 *
FUN_100b8f790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126fca00;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_6);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8f89c; end: 100b8f92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8f89c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127238d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8f92c; end: 100b8f93b; -[SponsoredLensSpectrumLoggerServices spectrumLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8f92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130130a8));
  return;
}



/* Entry: 100b8f93c; end: 100b8f94b; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices lifecycleWatermarkMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8f93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c10));
  return;
}



/* Entry: 100b8f94c; end: 100b8fc9f; -[SCUnlockableAdTracker initWithUserAgent:networkManager:commonMetricsManager:requestInfoProvider:grapheneRegistry:adConfigProvider:adConfigProviderV2:trackerConfig:spectrumLogger:lifecycleTracker:userBlizzard:shadowDiffPerformer:] */

undefined8 *
FUN_100b8f94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_70 = PTR_PTR_1126e8578;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    if (param_9 != 0) {
      func_0x000107c61174(param_13);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      uVar2 = puVar1[0xd];
      puVar1[0xd] = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(param_13);
    }
    puVar3 = PTR_PTR_1126b93c0;
    func_0x000107c610f4();
    func_0x000107c4918c();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b8fca0; end: 100b8fef3; -[AdUnlockableTrackerSwift initWithUserAgent:networkManager:commonMetricsManager:grapheneRegistry:trackerConfig:spectrumLogger:lifecycleTracker:objcSupport:] */

undefined8
FUN_100b8fca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_6;
  func_0x000107c61174();
  func_0x000107c615f0(param_7);
  uVar2 = param_8;
  func_0x000107c61174(param_8);
  uVar3 = param_9;
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  uVar4 = param_3;
  func_0x000100b8fdc0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(param_10);
  return uVar4;
}



/* Entry: 100b8fef4; end: 100b8ff07; -[SCSnapchatAdsDeviceAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8fef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759c4c,0);
  return;
}



/* Entry: 100b8ff08; end: 100b8ff37; -[SCAdDeviceInfoProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100b8ff20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b8ff24) */

void FUN_100b8ff08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100b8ff38; end: 100b9003b; -[SCGtqAdData initWithAdConfigProvider:networkConnectivityAnnouncer:birthdayProvider:] */

undefined1 *
FUN_100b8ff38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eae80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b91a0;
    func_0x000107c610f4();
    func_0x000107c47a40();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b91a8;
    func_0x000107c610f4();
    func_0x000107c45568();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b9003c; end: 100b90043; -[SCGtqNetworkServices unlockablesRequestManager] */

undefined8 FUN_100b9003c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100b90044; end: 100b90427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b90044(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126c0280;
  func_0x000107c610f4();
  lVar2 = param_1 + 0x20;
  func_0x000107c61148();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_11272c310;
    func_0x000107c61148();
  }
  lVar4 = lVar3;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar5 = param_1 + 0x20;
  func_0x000107c61148();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_11272c318;
    func_0x000107c61148();
  }
  lVar7 = lVar6;
  func_0x000107c4b618();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,param_1 + 0x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar9 = param_1 + 0x20;
  func_0x000107c61148();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_11272c320;
    func_0x000107c61148();
  }
  lVar11 = lVar10;
  func_0x000107c3e464();
  func_0x000107c61180();
  lVar12 = param_1 + 0x20;
  func_0x000107c61148();
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + _DAT_11272c324;
    func_0x000107c61148();
  }
  lVar14 = lVar13;
  func_0x000107c5cb84();
  func_0x000107c61180();
  lVar15 = param_1 + 0x20;
  func_0x000107c61148();
  lVar16 = lVar15;
  FUN_100b90428();
  func_0x000107c61180();
  lVar17 = lVar16;
  func_0x000107c44594();
  func_0x000107c61180();
  lVar18 = param_1 + 0x20;
  func_0x000107c61148();
  lVar19 = lVar18;
  FUN_100b90428();
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c44598();
  func_0x000107c61180();
  lVar21 = param_1 + 0x20;
  func_0x000107c61148();
  lVar22 = lVar21;
  FUN_100b90428();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c44590();
  func_0x000107c61180();
  lVar24 = param_1 + 0x20;
  func_0x000107c61148();
  lVar25 = lVar24;
  FUN_100b9047c();
  func_0x000107c61180();
  lVar26 = lVar25;
  func_0x000107c5d8d8();
  func_0x000107c61180();
  lVar27 = param_1 + 0x20;
  func_0x000107c61148();
  lVar28 = lVar27;
  FUN_100b9047c();
  func_0x000107c61180();
  lVar29 = lVar28;
  func_0x000107c3d9e8();
  func_0x000107c61180();
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272c32c;
    func_0x000107c61148();
  }
  lVar30 = lVar31;
  func_0x000107c4d594();
  func_0x000107c61180();
  func_0x000107c4557c();
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b90428; end: 100b9044b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b90428(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272c31c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9044c; end: 100b9045b; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices gtqRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9044c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043cd8));
  return;
}



/* Entry: 100b9045c; end: 100b9046b; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices gtqViewTrackRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9045c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043ce0));
  return;
}



/* Entry: 100b9046c; end: 100b9047b; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices gtqCreationTrackRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9046c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043ce8));
  return;
}



/* Entry: 100b9047c; end: 100b9049f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9047c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272c328);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b904a0; end: 100b904d3; -[_TtC16AdUserIdServices16AdUserIdServices adsPreferencesProvider] */

void FUN_100b904a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10040bf78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


