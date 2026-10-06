/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033a7cd0; end: 1033a7d2b;  */

void FUN_1033a7cd0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f60c40,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f60c40,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1033a7d2c; end: 1033a7da3;  */

undefined ** FUN_1033a7d2c(void)

{
  return &PTR_DAT_113066e08;
}



/* Entry: 1033a7da4; end: 1033a7deb; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f60ca8;
  func_0x000107c61428(param_1 + _DAT_112f60ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a7dec; end: 1033a7e43; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f60ca8;
  func_0x000107c61428(param_1 + _DAT_112f60ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033a7e44; end: 1033a7e8b; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint sCUserPhoneVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7e44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f60cb0;
  func_0x000107c61428(param_1 + _DAT_112f60cb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033a7e8c; end: 1033a7e97; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint setSCUserPhoneVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f60cb0;
  func_0x000107c61428(param_1 + _DAT_112f60cb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033a7e98; end: 1033a7edf; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint passwordSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7e98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f60cb8;
  func_0x000107c61428(param_1 + _DAT_112f60cb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033a7ee0; end: 1033a7eeb; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint setPasswordSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f60cb8;
  func_0x000107c61428(param_1 + _DAT_112f60cb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033a7eec; end: 1033a7f4b;  */

void FUN_1033a7eec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033a7f4c; end: 1033a8107;  */

/* WARNING: Possible PIC construction at 0x0001033a8064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a8088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a8098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a80dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a809c) */
/* WARNING: Removing unreachable block (ram,0x0001033a808c) */
/* WARNING: Removing unreachable block (ram,0x0001033a8068) */
/* WARNING: Removing unreachable block (ram,0x0001033a80e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7f4c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51550();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4e420();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1033a7568();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1033a77e0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a8108);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f60bd0) = lVar5;
      *(long *)(lVar3 + _DAT_112f60bd8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1033a8108; end: 1033a812f; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1033a8108(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033a7f4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033a8130; end: 1033a8173; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1033a8130(undefined8 param_1)

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



/* Entry: 1033a8174; end: 1033a8377;  */

void FUN_1033a8174(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa67c0)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f059840,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0eb97b0)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f146850,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PasswordSettingsScopeGraphBridge/SCPasswordSettingsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x3d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a8378);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57270();
        goto LAB_1033a8200;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58af8();
  }
LAB_1033a8200:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033a8378; end: 1033a8423; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1033a8378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033a8174(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033a8424; end: 1033a849b; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8424(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f60ca8,0);
  *(undefined8 *)(param_1 + _DAT_112f60cb0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f60cb8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f60cc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a849c; end: 1033a84cf;  */

void FUN_1033a849c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a84d0; end: 1033a8527; -[SCPasswordSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033a84fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a8500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a84d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f60ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60cb0));
  return;
}



/* Entry: 1033a8528; end: 1033a8547;  */

void FUN_1033a8528(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5678);
  return;
}



/* Entry: 1033a8548; end: 1033a858f; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8548(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f60cf0;
  func_0x000107c61428(param_1 + _DAT_112f60cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a8590; end: 1033a85e7; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f60cf0;
  func_0x000107c61428(param_1 + _DAT_112f60cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033a85e8; end: 1033a86bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a85e8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1033a77c0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f60c08) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a86c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f60c10);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f60cf8);
    *(long **)(unaff_x20 + _DAT_112f60cf8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1033a86c0; end: 1033a86e7; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint begin] */

void FUN_1033a86c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033a85e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033a86e8; end: 1033a885f;  */

/* WARNING: Possible PIC construction at 0x0001033a8750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a87e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a8754) */
/* WARNING: Removing unreachable block (ram,0x0001033a87ec) */
/* WARNING: Removing unreachable block (ram,0x0001033a8804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a86e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f60cf8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1033a8860; end: 1033a8867;  */

void FUN_1033a8860(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033a8868; end: 1033a889b; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint end] */

void FUN_1033a8868(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033a86e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033a889c; end: 1033a89bb;  */

void FUN_1033a889c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "PasswordSettingsScopeGraphBridge/SCSCPasswordSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x35,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a89bc);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033a89bc; end: 1033a8a67; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1033a89bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033a889c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033a8a68; end: 1033a8ac7; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8a68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f60cf0,0);
  *(undefined8 *)(param_1 + _DAT_112f60cf8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a8ac8; end: 1033a8afb;  */

void FUN_1033a8ac8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a8afc; end: 1033a8b33; -[SCSCPasswordSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8afc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f60cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60cf8));
  return;
}



/* Entry: 1033a8b34; end: 1033a8b53;  */

void FUN_1033a8b34(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5748);
  return;
}



/* Entry: 1033a8b54; end: 1033a8c8b; -[ConnectedAccountData displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8b54(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + _DAT_112f60d28);
  if (lStack_28 == 1) {
    uVar3 = 0xe600000000000000;
    uVar2 = 0x656c676f6f47;
  }
  else {
    if (lStack_28 != 2) {
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11064aef0,&lStack_28,&UNK_11064aef0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a8bf4);
      (*pcVar1)();
    }
    uVar3 = 0xe500000000000000;
    uVar2 = 0x656c707041;
  }
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1033a8c8c; end: 1033a8cd7; -[ConnectedAccountData initWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f60d28) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a8cd8; end: 1033a8d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1033a8cd8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_112f60d28);
      iVar2 = *(int *)(lStack_58 + _DAT_112f60d28);
      func_0x000107c61170();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1033a8d78; end: 1033a8df7; -[ConnectedAccountData isEqual:] */

uint FUN_1033a8d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1033a8cd8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1033a8df8; end: 1033a8e77; -[ConnectedAccountData init] */

void FUN_1033a8df8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsServices.ConnectedAccountData",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a8e24);
  (*pcVar1)();
}



/* Entry: 1033a8e78; end: 1033a8e7b; -[ConnectedAccountData source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a8e78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f60d28);
}



/* Entry: 1033a8e7c; end: 1033a8e93; -[ConnectedAccountData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a8e7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f60d28);
}



/* Entry: 1033a8e94; end: 1033a8f6b;  */

void FUN_1033a8e94(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033a8f6c; end: 1033a8f77;  */

void FUN_1033a8f6c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1033a8f78; end: 1033a8f87; -[ConnectedAccountLinkResult status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a8f78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f60d58);
}



/* Entry: 1033a8f88; end: 1033a8f97; -[ConnectedAccountLinkResult data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f60d60));
  return;
}



/* Entry: 1033a8f98; end: 1033a8ff3; -[ConnectedAccountLinkResult errorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8f98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f60d68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f60d68);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1033a8ff4; end: 1033a90fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a8ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60d58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f60d60) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60d68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a90fc; end: 1033a91a3; -[ConnectedAccountLinkResult initWithStatus:data:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a90fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112f60d58) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f60d60) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112f60d68);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 1033a91a4; end: 1033a9217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a91a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f60d60) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60d68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar2);
  return;
}



/* Entry: 1033a9218; end: 1033a928f; +[ConnectedAccountLinkResult success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f60d58) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f60d60) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f60d68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a9290; end: 1033a9313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9290(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60d58) = 6;
  *(undefined8 *)(unaff_x20 + _DAT_112f60d60) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60d68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(param_2);
  func_0x000107c61154(auStack_40,puVar2);
  return;
}



/* Entry: 1033a9314; end: 1033a939f; +[ConnectedAccountLinkResult failedWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f60d58) = 6;
  *(undefined8 *)(lVar2 + _DAT_112f60d60) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f60d68);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a93a0; end: 1033a93ff; -[ConnectedAccountLinkResult init] */

void FUN_1033a93a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsServices.ConnectedAccountLinkResult",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a93cc);
  (*pcVar1)();
}



/* Entry: 1033a9400; end: 1033a943b; -[ConnectedAccountLinkResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9400(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f60d60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f60d68 + 8))
  ;
  return;
}



/* Entry: 1033a943c; end: 1033a944f;  */

undefined1  [16] FUN_1033a943c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1033a9450; end: 1033a948f;  */

void FUN_1033a9450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f60d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbcee0;
  func_0x000107c61520(&UNK_10dbbcee0,&UNK_11064ae00);
  puRam0000000112f60d70 = puVar1;
  return;
}



/* Entry: 1033a9490; end: 1033a949f;  */

undefined1  [16] FUN_1033a9490(void)

{
  return ZEXT816(0x11064ae00);
}



/* Entry: 1033a94a0; end: 1033a94bf;  */

void FUN_1033a94a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d58c8);
  return;
}



/* Entry: 1033a94c0; end: 1033a94d3;  */

bool FUN_1033a94c0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1033a94d4; end: 1033a95ab;  */

void FUN_1033a94d4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033a95ac; end: 1033a95b7;  */

void FUN_1033a95ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1033a95b8; end: 1033a95c7; -[ConnectedAccountUnlinkResult status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a95b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f60da0);
}



/* Entry: 1033a95c8; end: 1033a9623; -[ConnectedAccountUnlinkResult errorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a95c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f60da8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f60da8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1033a9624; end: 1033a96fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60da0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60da8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a96fc; end: 1033a977f; -[ConnectedAccountUnlinkResult initWithStatus:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a96fc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112f60da0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112f60da8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a9780; end: 1033a97cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9780(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60da0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60da8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a97d0; end: 1033a982b; +[ConnectedAccountUnlinkResult success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a97d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f60da0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f60da8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a982c; end: 1033a98a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a982c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60da0) = 5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f60da8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(param_2);
  func_0x000107c61154(auStack_40,puVar2);
  return;
}



/* Entry: 1033a98a4; end: 1033a9923; +[ConnectedAccountUnlinkResult failedWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a98a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f60da0) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f60da8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033a9924; end: 1033a9983; -[ConnectedAccountUnlinkResult init] */

void FUN_1033a9924(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsServices.ConnectedAccountUnlinkResult",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a9950);
  (*pcVar1)();
}



/* Entry: 1033a9984; end: 1033a99ab; -[ConnectedAccountUnlinkResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f60da8 + 8))
  ;
  return;
}



/* Entry: 1033a99ac; end: 1033a99eb;  */

void FUN_1033a99ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f60db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbcfc0;
  func_0x000107c61520(&UNK_10dbbcfc0,&UNK_11064ae78);
  puRam0000000112f60db0 = puVar1;
  return;
}



/* Entry: 1033a99ec; end: 1033a99fb;  */

undefined1  [16] FUN_1033a99ec(void)

{
  return ZEXT816(0x11064ae78);
}



/* Entry: 1033a99fc; end: 1033a9a1b;  */

void FUN_1033a99fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5998);
  return;
}



/* Entry: 1033a9a1c; end: 1033a9a2b; -[ConnectedAccountsServices connectedAccountsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f60de0));
  return;
}



/* Entry: 1033a9a2c; end: 1033a9ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9a2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60de0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a9ac4; end: 1033a9b23; -[ConnectedAccountsServices init] */

void FUN_1033a9ac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsServices.ConnectedAccountsServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a9af0);
  (*pcVar1)();
}



/* Entry: 1033a9b24; end: 1033a9b33; -[ConnectedAccountsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a9b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60de0));
  return;
}



/* Entry: 1033a9b34; end: 1033a9b7f;  */

void FUN_1033a9b34(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5a60);
  return;
}



/* Entry: 1033a9b80; end: 1033a9b97;  */

bool FUN_1033a9b80(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1033a9b98; end: 1033a9bd7;  */

void FUN_1033a9b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f60e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbd0c8;
  func_0x000107c61520(&UNK_10dbbd0c8,&UNK_11064aef0);
  puRam0000000112f60e48 = puVar1;
  return;
}



/* Entry: 1033a9bd8; end: 1033a9c83;  */

void FUN_1033a9bd8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033a9c84; end: 1033a9cb3;  */

void FUN_1033a9c84(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 3U < 0xfffffffffffffffe;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 1033a9cb4; end: 1033a9d03;  */

void FUN_1033a9cb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f60e50 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f60e58;
  func_0x00010002969c(0x112f60e58,&UNK_10dbbd168);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f60e50 = puVar2;
  return;
}



/* Entry: 1033a9d04; end: 1033a9d43;  */

void FUN_1033a9d04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d44dd8;
  func_0x0001000285a8(0x112d44dd8,&UNK_10dbbd0c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033a9d44; end: 1033a9d53;  */

undefined1  [16] FUN_1033a9d44(void)

{
  return ZEXT816(0x11064aef0);
}



/* Entry: 1033a9d54; end: 1033a9d97;  */

void FUN_1033a9d54(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x00010099c714();
  if (param_1 - 1U < 3) {
    uVar2 = *(undefined8 *)(&UNK_10dbbd220 + (param_1 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  (*pcVar1)(uVar2);
  return;
}



/* Entry: 1033a9d98; end: 1033a9db3;  */

void FUN_1033a9d98(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1033a9db4; end: 1033a9eb7; +[_TtC19AuthenticationUtils19AuthenticationUtils appearanceSettingFromSystemSettingWithCompletion:] */

void FUN_1033a9db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c60bc4();
  puVar1 = &UNK_11064b028;
  func_0x000107c613fc(&UNK_11064b028,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  pcVar2 = "appearanceSettingFromSystemSetting(completion:)";
  func_0x0001000c10c0("appearanceSettingFromSystemSetting(completion:)");
  func_0x000107c61180();
  puVar3 = &UNK_11064b050;
  func_0x000107c613fc(&UNK_11064b050,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1033aab98;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uStack_40 = 0x1033aabf0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11064b068;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1033a9eb8; end: 1033a9f0b; +[_TtC19AuthenticationUtils19AuthenticationUtils appearanceSettingFromAppPreference] */

undefined8 FUN_1033a9eb8(ulong param_1)

{
  func_0x00010099be78();
  if (param_1 < 3) {
    return *(undefined8 *)(&UNK_10dbbd208 + param_1 * 8);
  }
  return 0;
}



/* Entry: 1033a9f0c; end: 1033a9f47; -[_TtC19AuthenticationUtils19AuthenticationUtils init] */

void FUN_1033a9f0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001033a9eec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a9f48; end: 1033a9f77;  */

void FUN_1033a9f48(void)

{
  func_0x0001033a9eec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a9f78; end: 1033a9f8f; +[_TtC19AuthenticationUtils19AuthenticationUtils isWhatsAppInstalled] */

uint FUN_1033a9f78(uint param_1)

{
  FUN_1033aa660();
  return param_1 & 1;
}



/* Entry: 1033a9f90; end: 1033aa15f;  */

long FUN_1033a9f90(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1033aa7bc();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c61174();
      func_0x0001033aa014(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      param_1 = lVar1;
    }
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 1033aa160; end: 1033aa1df; +[_TtC19AuthenticationUtils19AuthenticationUtils topMostViewController] */

void FUN_1033aa160(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1033aa7bc();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c61174();
      func_0x0001033aa014(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033aa1e0; end: 1033aa4a3;  */

undefined * FUN_1033aa1e0(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_1033aaba8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1033aa460:
        puStack_58 = (undefined *)0x0;
LAB_1033aa464:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_1033aaba8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1033aa4a4);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1033aa460;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1033aa464;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 1033aa4a4; end: 1033aa65f;  */

ulong FUN_1033aa4a4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033aa588);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033aa58c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1033aaba8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033aa660);
  (*pcVar2)();
}



/* Entry: 1033aa660; end: 1033aa7bb;  */

undefined * FUN_1033aa660(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar7,0x7070617374616877,0xeb000000002f2f3a);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar7);
    puVar3 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    puVar3 = puVar4;
    func_0x000107c3f3f4(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return puVar3;
}



/* Entry: 1033aa7bc; end: 1033aab47;  */

ulong FUN_1033aa7bc(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  
  puVar17 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar5 = puVar17;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  uVar6 = 0;
  FUN_1033aaba8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar11 = uVar6;
  func_0x000100deaee4();
  puVar17 = puVar5;
  func_0x000107c5fe10(puVar5,uVar6,uVar11);
  func_0x000107c61170(puVar5);
  puVar5 = puVar17;
  FUN_1033aa1e0();
  func_0x000107c6142c(puVar17);
  puVar17 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar17 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar15 = puVar5;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar15 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1033aa978);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puVar5 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar9;
          FUN_1033aa4a4(puVar9,puVar5,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1033aa974);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c3d0e4();
        if (puVar8 == (undefined *)0x0) break;
        func_0x000107c61170(puVar7);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar15) goto LAB_1033aa994;
      }
      puVar9 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x0001014aa0c0(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x0001014aa0c0(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined **)(puVar3 + uVar10 * 8 + 0x20) = puVar7;
      puVar9 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_1033aa994:
  func_0x000107c6142c(puVar5);
  if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
    puVar17 = puVar3;
    func_0x000107c60480();
  }
  else {
    puVar17 = *(undefined **)(puVar3 + 0x10);
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61574(puVar3);
  }
  else {
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033aab48);
        (*pcVar4)();
      }
      uVar10 = *(ulong *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar10 = 0;
      FUN_1033aa4a4(0,puVar3,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
    }
    func_0x000107c61574(puVar3);
    uVar14 = uVar10;
    func_0x000107c5e408();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar11 = 0;
    FUN_1033aaba8(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
    uVar10 = uVar14;
    func_0x000107c5fc54(uVar14,uVar11);
    func_0x000107c61170(uVar14);
    if (uVar10 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar14 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1033aaac4);
            (*pcVar4)();
          }
          uVar12 = *(ulong *)(uVar10 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar16;
          FUN_1033aa4a4(uVar16,uVar10,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
        }
        uVar2 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1033aaac0);
          (*pcVar4)();
        }
        uVar13 = uVar12;
        func_0x000107c49f64();
        if ((uVar13 & 1) != 0) {
          func_0x000107c6142c(uVar10);
          return uVar12;
        }
        func_0x000107c61170(uVar12);
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar14);
    }
    func_0x000107c6142c(uVar10);
  }
  return 0;
}



/* Entry: 1033aab48; end: 1033aab97;  */

void FUN_1033aab48(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f60ec0 != 0) {
    return;
  }
  puVar1 = &UNK_11064b008;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f60ec0 = param_1;
  return;
}



/* Entry: 1033aab98; end: 1033aaba7;  */

void FUN_1033aab98(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001033aaba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1033aaba8; end: 1033aabe7;  */

void FUN_1033aaba8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1033aabe8; end: 1033aabff;  */

void FUN_1033aabe8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


