/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102018904; end: 10201897b;  */

undefined ** FUN_102018904(void)

{
  return &PTR_DAT_112ff1b40;
}



/* Entry: 10201897c; end: 1020189c3; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201897c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50608;
  func_0x000107c61428(param_1 + _DAT_112e50608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020189c4; end: 102018a1b; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020189c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50608;
  func_0x000107c61428(param_1 + _DAT_112e50608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102018a1c; end: 102018a63; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint sCMyStoryCustomViewersPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018a1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50610;
  func_0x000107c61428(param_1 + _DAT_112e50610,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102018a64; end: 102018a6f; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint setSCMyStoryCustomViewersPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50610;
  func_0x000107c61428(param_1 + _DAT_112e50610,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102018a70; end: 102018ab7; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint storyPrivacySettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018a70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50618;
  func_0x000107c61428(param_1 + _DAT_112e50618,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102018ab8; end: 102018ac3; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint setStoryPrivacySettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50618;
  func_0x000107c61428(param_1 + _DAT_112e50618,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102018ac4; end: 102018b23;  */

void FUN_102018ac4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102018b24; end: 102018cdf;  */

/* WARNING: Possible PIC construction at 0x000102018c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102018c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102018c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102018cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102018c74) */
/* WARNING: Removing unreachable block (ram,0x000102018c64) */
/* WARNING: Removing unreachable block (ram,0x000102018c40) */
/* WARNING: Removing unreachable block (ram,0x000102018cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018b24(void)

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
  func_0x000107c510e8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5c02c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102018140();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1020183b8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102018ce0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e50530) = lVar5;
      *(long *)(lVar3 + _DAT_112e50538) = unaff_x20;
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



/* Entry: 102018ce0; end: 102018d07; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102018ce0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102018b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102018d08; end: 102018d4b; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_102018d08(undefined8 param_1)

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



/* Entry: 102018d4c; end: 102018f4f;  */

void FUN_102018d4c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0fa7f70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f058090,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000033;
        if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0fa7f40)) &&
           (func_0x000107c605b8(0xd000000000000033,0x800000010f0580c0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StoryPrivacySettingsScopeGraphBridge/SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x60,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102018f50);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5998c();
        goto LAB_102018dd8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58690();
  }
LAB_102018dd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102018f50; end: 102018ffb; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102018f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102018d4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102018ffc; end: 102019073; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102018ffc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50608,0);
  *(undefined8 *)(param_1 + _DAT_112e50610) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50618) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50620) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102019074; end: 1020190a7;  */

void FUN_102019074(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020190a8; end: 1020190ff; -[SCStoryPrivacySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020190d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020190d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020190a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50610));
  return;
}



/* Entry: 102019100; end: 10201911f;  */

void FUN_102019100(void)

{
  func_0x000107c61168(&PTR_PTR_112817cd8);
  return;
}



/* Entry: 102019120; end: 102019167; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50650;
  func_0x000107c61428(param_1 + _DAT_112e50650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102019168; end: 1020191bf; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019168(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50650;
  func_0x000107c61428(param_1 + _DAT_112e50650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020191c0; end: 102019297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020191c0(undefined8 param_1,long param_2)

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
    FUN_102018398();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50568) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102019298);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50570);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50658);
    *(long **)(unaff_x20 + _DAT_112e50658) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102019298; end: 1020192bf; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint begin] */

void FUN_102019298(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020191c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020192c0; end: 102019437;  */

/* WARNING: Possible PIC construction at 0x000102019328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020193c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201932c) */
/* WARNING: Removing unreachable block (ram,0x0001020193c4) */
/* WARNING: Removing unreachable block (ram,0x0001020193dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020192c0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50658);
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



/* Entry: 102019438; end: 10201943f;  */

void FUN_102019438(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102019440; end: 102019473; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint end] */

void FUN_102019440(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020192c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102019474; end: 102019593;  */

void FUN_102019474(long param_1,long param_2,long param_3)

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
                        "StoryPrivacySettingsScopeGraphBridge/SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102019594);
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



/* Entry: 102019594; end: 10201963f; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102019594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102019474(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102019640; end: 10201969f; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019640(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50650,0);
  *(undefined8 *)(param_1 + _DAT_112e50658) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020196a0; end: 1020196d3;  */

void FUN_1020196a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020196d4; end: 10201970b; -[SCSCStoryPrivacySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020196d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50658));
  return;
}



/* Entry: 10201970c; end: 10201972b;  */

void FUN_10201970c(void)

{
  func_0x000107c61168(&PTR_PTR_112817da8);
  return;
}



/* Entry: 10201972c; end: 102019797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201972c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102019b20();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e50690) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102019798; end: 102019803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019798(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50690) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102019804; end: 102019863; -[_TtC38StoryShareScopedFactoryServiceProvider26SCStoryShareScopedServices init] */

void FUN_102019804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryShareScopedFactoryServiceProvider.SCStoryShareScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102019830);
  (*pcVar1)();
}



/* Entry: 102019864; end: 102019873; -[_TtC38StoryShareScopedFactoryServiceProvider26SCStoryShareScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e50690));
  return;
}



/* Entry: 102019874; end: 1020198df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102019874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bd810;
  func_0x000107c613fc(&UNK_1104bd810,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102019bb8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1020198e0; end: 10201997b;  */

void FUN_1020198e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bd720;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bd720;
  return;
}



/* Entry: 10201997c; end: 1020199b3;  */

void FUN_10201997c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1020199b4; end: 1020199bb;  */

undefined8 FUN_1020199b4(void)

{
  return 0x1b;
}



/* Entry: 1020199bc; end: 102019aef;  */

void FUN_1020199bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bd838;
  func_0x000107c613fc(&UNK_1104bd838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102019b90;
  func_0x00010058fa64(FUN_102019b90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102019af0; end: 102019b1f;  */

undefined ** FUN_102019af0(void)

{
  return &PTR_DAT_112ff1be0;
}



/* Entry: 102019b20; end: 102019b3f;  */

void FUN_102019b20(void)

{
  func_0x000107c61168(&PTR_PTR_112817e68);
  return;
}



/* Entry: 102019b40; end: 102019b8f;  */

undefined1  [16] FUN_102019b40(void)

{
  return ZEXT816(0x1104bd770);
}



/* Entry: 102019b90; end: 102019bb7;  */

void FUN_102019b90(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102019bb8; end: 102019bbb;  */

void FUN_102019bb8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102019bbc; end: 102019ceb;  */

/* WARNING: Possible PIC construction at 0x000102019c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102019c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102019cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102019cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102019cb0) */
/* WARNING: Removing unreachable block (ram,0x000102019ca0) */
/* WARNING: Removing unreachable block (ram,0x000102019c90) */
/* WARNING: Removing unreachable block (ram,0x000102019cc0) */

void FUN_102019bbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104bd8c0;
  func_0x000107c613fc(&UNK_1104bd8c0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112e50700;
  func_0x0001000285a8(0x112e50700,&UNK_10da4eed0);
  func_0x000107c613fc();
  uVar3 = 0x10201a18c;
  func_0x0001000841fc(0x10201a18c,puVar1,uVar2);
  func_0x000100084214(&UNK_10da4eea0,0x28,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102019cec; end: 102019d1f;  */

void FUN_102019cec(void)

{
  long unaff_x20;
  
  FUN_102019bbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102019d20; end: 102019d2f;  */

undefined1  [16] FUN_102019d20(void)

{
  return ZEXT816(0x1104bd8a0);
}



/* Entry: 102019d30; end: 10201a127;  */

void FUN_102019d30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e50708,&UNK_10da4eed8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10201bb28();
  func_0x000100082720("SCLegacySendToScopeExposerSubjectServiceProvider",0x30,2);
  puVar3 = puVar2;
  FUN_10201bbb4();
  func_0x000100082720("SCLegacySendToScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10201997c;
  func_0x0001000823a8(FUN_10201997c,0);
  func_0x000100082720("SCStoryShareScopedServicesCleanupRelayServiceProvider",0x35,2);
  puVar5 = puVar2;
  FUN_10201b9dc();
  func_0x000100082720("StoryShareScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e50710,&UNK_10da4eef0);
  puVar6 = &UNK_1104bd8e8;
  func_0x000107c613fc(&UNK_1104bd8e8,0x68,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 **)(puVar6 + 0x60) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10201a1c0;
  func_0x0001000823a8(0x10201a1c0,puVar6);
  func_0x000100082720("SCStoryShareEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e50718,&UNK_10da4eee0);
  puVar6 = &UNK_1104bd910;
  func_0x000107c613fc(&UNK_1104bd910,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_10201a1fc;
  func_0x0001000823a8(FUN_10201a1fc,puVar6);
  func_0x000100082720("SCStoryShareScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e50698,&UNK_10da4eca0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10201a208;
  func_0x0001000823a8(0x10201a208,pcVar7);
  func_0x000100082720("SCStoryShareScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112e50688,&UNK_10da4ec90);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10201a210;
  func_0x0001000823a8(0x10201a210,uVar8);
  func_0x000100082720("SCStoryShareScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bd938;
  func_0x000107c613fc(&UNK_1104bd938,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10201a218;
  func_0x0001000823a8(0x10201a218,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCStoryShareScopeEntryPointProvider",0x23,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10201a128; end: 10201a1fb;  */

void FUN_10201a128(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10201a1fc; end: 10201a21f;  */

void FUN_10201a1fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10201b144(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCStoryShareScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201a220; end: 10201aefb;  */

void FUN_10201a220(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_10201b094();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  func_0x0001000285a8(0x112e50720,&UNK_10da4eef8);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar10;
  puVar10 = PTR_PTR_1126a9df8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0x61685379726f7473;
  func_0x000107c5fadc(0x61685379726f7473,0xef65706f63536572);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01aa40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32a40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uStack_c0);
  *param_1 = param_2;
  return;
}



/* Entry: 10201aefc; end: 10201af87;  */

void FUN_10201aefc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10201af88; end: 10201af8f;  */

undefined8 FUN_10201af88(void)

{
  return 0x1b;
}



/* Entry: 10201af90; end: 10201b013;  */

void FUN_10201af90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10201b0d4,param_2,FUN_10201b0d8,param_2,FUN_10201b100,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10201b014; end: 10201b063;  */

undefined8 FUN_10201b014(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10201b064; end: 10201b093;  */

void FUN_10201b064(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104bd950;
  return;
}



/* Entry: 10201b094; end: 10201b0b3;  */

void FUN_10201b094(void)

{
  func_0x000107c61168(&PTR_PTR_112e50790);
  return;
}



/* Entry: 10201b0b4; end: 10201b0d7;  */

undefined1  [16] FUN_10201b0b4(void)

{
  return ZEXT816(0x1104bd990);
}



/* Entry: 10201b0d8; end: 10201b0ff;  */

void FUN_10201b0d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10201b100; end: 10201b107;  */

undefined8 FUN_10201b100(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10201b108; end: 10201b143;  */

void FUN_10201b108(undefined8 *param_1,undefined8 param_2)

{
  FUN_10201b144();
  func_0x0001000a7f38("SCStoryShareScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10201b144; end: 10201b32f;  */

void FUN_10201b144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dc8d0;
  ppuVar4 = &PTR_DAT_112ff1be0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e50840;
  func_0x0001000285a8(0x112e50840,&UNK_10da4f060);
  func_0x0001000a6ee8(&UNK_1104bd990,"SCStoryShareEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_10201b3a4,param_1,uVar2,&UNK_1104bd990,&PTR_DAT_112e50728);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104bd9e0;
  func_0x000107c613fc(&UNK_1104bd9e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bd7b0,"SCStoryShareScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_10201b454,puVar3,uVar2,&UNK_1104bd7b0,&PTR_DAT_112e506a0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104bda08;
  func_0x000107c613fc(&UNK_1104bda08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bdc00,"StoryShareScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_10201b45c,puVar3,uVar2,&UNK_1104bdc00,&PTR_DAT_112e508d8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e50848;
  func_0x0001000285a8(0x112e50848,&UNK_10da4f068);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10201b330; end: 10201b3a3;  */

void FUN_10201b330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10201b4d0;
  func_0x0001000823a8(0x10201b4d0,param_3);
  func_0x000100082720("SCStoryShareEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201b3a4; end: 10201b3ab;  */

void FUN_10201b3a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10201b4d0;
  func_0x0001000823a8();
  func_0x000100082720("SCStoryShareEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201b3ac; end: 10201b453;  */

void FUN_10201b3ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bda30;
  func_0x000107c613fc(&UNK_1104bda30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10201b4c8;
  func_0x0001000823a8(FUN_10201b4c8,puVar1);
  func_0x000100082720("SCStoryShareScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10201b454; end: 10201b45b;  */

void FUN_10201b454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bda30;
  func_0x000107c613fc(&UNK_1104bda30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10201b4c8;
  func_0x0001000823a8(FUN_10201b4c8,puVar3);
  func_0x000100082720("SCStoryShareScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10201b45c; end: 10201b49b;  */

void FUN_10201b45c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10201bc5c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StoryShareScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201b49c; end: 10201b4c7;  */

void FUN_10201b49c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10201b4c8; end: 10201b4d7;  */

void FUN_10201b4c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bd838;
  func_0x000107c613fc(&UNK_1104bd838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102019b90;
  func_0x00010058fa64(FUN_102019b90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201b4d8; end: 10201b5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10201b4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10201b8ec();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e50850) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e50858) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201b5b4);
  (*pcVar1)();
}



/* Entry: 10201b5b4; end: 10201b613; -[_TtC26StoryShareScopeGraphBridge41StoryShareScopeGraphBridgeSaberEntryPoint init] */

void FUN_10201b5b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryShareScopeGraphBridge.StoryShareScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201b5e0);
  (*pcVar1)();
}



/* Entry: 10201b614; end: 10201b64b; -[_TtC26StoryShareScopeGraphBridge41StoryShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010201b630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201b634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201b614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50850));
  return;
}



/* Entry: 10201b64c; end: 10201b673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201b64c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50858),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50850));
  return;
}



/* Entry: 10201b674; end: 10201b693;  */

void FUN_10201b674(void)

{
  func_0x000107c61168(&PTR_PTR_112817f28);
  return;
}



/* Entry: 10201b694; end: 10201b71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10201b694(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50888) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50890);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10201b71c);
  (*pcVar2)();
}



/* Entry: 10201b71c; end: 10201b803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10201b71c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50888);
  *(undefined **)(unaff_x20 + _DAT_112e50888) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50890);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50890))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bdb20;
  func_0x000107c613fc(&UNK_1104bdb20,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10201b808,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10201b804; end: 10201b80f;  */

void FUN_10201b804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10201b810; end: 10201b86f; -[_TtC26StoryShareScopeGraphBridge41SCStoryShareScopedServicesSaberEntryPoint init] */

void FUN_10201b810(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryShareScopeGraphBridge.SCStoryShareScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201b83c);
  (*pcVar1)();
}



/* Entry: 10201b870; end: 10201b8a7; -[_TtC26StoryShareScopeGraphBridge41SCStoryShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201b870(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50890));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50888));
  return;
}



/* Entry: 10201b8a8; end: 10201b8ab;  */

void FUN_10201b8a8(void)

{
  return;
}



/* Entry: 10201b8ac; end: 10201b8cb;  */

void FUN_10201b8ac(void)

{
  FUN_10201b71c();
  return;
}



/* Entry: 10201b8cc; end: 10201b8eb;  */

void FUN_10201b8cc(void)

{
  func_0x000107c61168(&PTR_PTR_112817ff0);
  return;
}



/* Entry: 10201b8ec; end: 10201b9bb;  */

undefined8 FUN_10201b8ec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e508c0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10201b9bc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10201b9bc; end: 10201b9db;  */

void FUN_10201b9bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128180b8);
  return;
}



/* Entry: 10201b9dc; end: 10201b9f7;  */

void FUN_10201b9dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112e508c8,&UNK_10da4f118);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10201ba64,param_1);
  return;
}



/* Entry: 10201b9f8; end: 10201ba63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201b9f8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10201b9bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e508d0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10201ba64; end: 10201ba6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201ba64(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10201b9bc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e508d0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10201ba6c; end: 10201bab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201ba6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e508d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201bab8; end: 10201bb17; -[_TtC26StoryShareScopeGraphBridge34StoryShareScopeGraphBridgeServices init] */

void FUN_10201bab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryShareScopeGraphBridge.StoryShareScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201bae4);
  (*pcVar1)();
}



/* Entry: 10201bb18; end: 10201bb27; -[_TtC26StoryShareScopeGraphBridge34StoryShareScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e508d0));
  return;
}



/* Entry: 10201bb28; end: 10201bbb3;  */

void FUN_10201bb28(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10201bb68,0);
  return;
}



/* Entry: 10201bbb4; end: 10201bbcf;  */

void FUN_10201bbb4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10201bc20,param_1);
  return;
}



/* Entry: 10201bbd0; end: 10201bc1f;  */

void FUN_10201bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10201bc20; end: 10201bc53;  */

void FUN_10201bc20(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10201bc54; end: 10201bc5b;  */

undefined8 FUN_10201bc54(void)

{
  return 0x1b;
}



/* Entry: 10201bc5c; end: 10201bdd3;  */

void FUN_10201bc5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bdb68;
  func_0x000107c613fc(&UNK_1104bdb68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10201bdd4,puVar1);
  return;
}



/* Entry: 10201bdd4; end: 10201bddb;  */

void FUN_10201bdd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e508c0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e508c0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bdc40;
  func_0x000107c613fc(&UNK_1104bdc40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10201bea8;
  func_0x00010058fa64(0x10201bea8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201bddc; end: 10201be37;  */

void FUN_10201bddc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e508c0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e508c0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10201be38; end: 10201beaf;  */

undefined ** FUN_10201be38(void)

{
  return &PTR_DAT_112ff1be0;
}



/* Entry: 10201beb0; end: 10201bef7; -[SCStoryShareScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201beb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50928;
  func_0x000107c61428(param_1 + _DAT_112e50928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


