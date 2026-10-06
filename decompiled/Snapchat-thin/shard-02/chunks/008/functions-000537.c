/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021df350; end: 1021df377; -[SCAdSettingsScopedServicesSaberEntryPoint begin] */

void FUN_1021df350(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021df278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021df378; end: 1021df4ef;  */

/* WARNING: Possible PIC construction at 0x0001021df3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021df478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021df3e4) */
/* WARNING: Removing unreachable block (ram,0x0001021df47c) */
/* WARNING: Removing unreachable block (ram,0x0001021df494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df378(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e62ac8);
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



/* Entry: 1021df4f0; end: 1021df4f7;  */

void FUN_1021df4f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021df4f8; end: 1021df52b; -[SCAdSettingsScopedServicesSaberEntryPoint end] */

void FUN_1021df4f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021df378();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021df52c; end: 1021df64b;  */

void FUN_1021df52c(long param_1,long param_2,long param_3)

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
                        "AdSettingsScopeGraphBridge/SCAdSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x4a,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021df64c);
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



/* Entry: 1021df64c; end: 1021df6f7; -[SCAdSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021df64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021df52c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021df6f8; end: 1021df757; -[SCAdSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df6f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62ac0,0);
  *(undefined8 *)(param_1 + _DAT_112e62ac8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021df758; end: 1021df78b;  */

void FUN_1021df758(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021df78c; end: 1021df7c3; -[SCAdSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df78c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62ac8));
  return;
}



/* Entry: 1021df7c4; end: 1021df7e3;  */

void FUN_1021df7c4(void)

{
  func_0x000107c61168(&PTR_PTR_112827888);
  return;
}



/* Entry: 1021df7e4; end: 1021df803; -[AdSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df7e4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e62af8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021df804; end: 1021df84b; -[AdSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df804(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62b00;
  func_0x000107c61428(param_1 + _DAT_112e62b00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021df84c; end: 1021df8a3; -[AdSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62b00;
  func_0x000107c61428(param_1 + _DAT_112e62b00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021df8a4; end: 1021df8cf; -[AdSettingsScope init] */

void FUN_1021df8a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSettingsScope.AdSettingsScope",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021df8d0);
  (*pcVar1)();
}



/* Entry: 1021df8d0; end: 1021df977; -[AdSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021df8d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e62af8));
  param_1 = param_1 + _DAT_112e62b00;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021df978; end: 1021df9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df978(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021dfc38();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e62b10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021df9e4; end: 1021df9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df9e4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021dfc38();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62b10) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1021df9ec; end: 1021dfa37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df9ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62b10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021dfa38; end: 1021dfb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1021dfa38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  FUN_1021dfb94();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e62b00;
  func_0x000107c61614(lVar4 + _DAT_112e62b00,0);
  *(long *)(lVar4 + _DAT_112e62af8) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 1021dfb20; end: 1021dfb93; -[_TtC15AdSettingsScope23AdSettingsScopeServices buildWithUiContainer:delegate:] */

void FUN_1021dfb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1021dfa38(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021dfb94; end: 1021dfbb3;  */

void FUN_1021dfb94(void)

{
  func_0x000107c61168(&PTR_PTR_112827948);
  return;
}



/* Entry: 1021dfbb4; end: 1021dfbdf; -[_TtC15AdSettingsScope23AdSettingsScopeServices init] */

void FUN_1021dfbb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSettingsScope.AdSettingsScopeServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dfbe0);
  (*pcVar1)();
}



/* Entry: 1021dfbe0; end: 1021dfbe3;  */

void FUN_1021dfbe0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dfbe4; end: 1021dfc17;  */

void FUN_1021dfbe4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dfc18; end: 1021dfc37; -[_TtC15AdSettingsScope23AdSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dfc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e62b10));
  return;
}



/* Entry: 1021dfc38; end: 1021dfc57;  */

void FUN_1021dfc38(void)

{
  func_0x000107c61168(&PTR_PTR_112827a10);
  return;
}



/* Entry: 1021dfc58; end: 1021dfc6b;  */

undefined1  [16] FUN_1021dfc58(void)

{
  return ZEXT816(0x1104def60);
}



/* Entry: 1021dfc6c; end: 1021dfd63; +[AdTopicsRequestHelpers fetchRequestURL] */

void FUN_1021dfc6c(void)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  uVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(uVar2 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x00010403f4e4();
  uVar5 = 0xd000000000000042;
  pcVar1 = "cs_preference/v1";
  if ((uVar2 & 1) == 0) {
    uVar5 = 0xd000000000000040;
    pcVar1 = "AdSettingsScopeServices";
  }
  func_0x000107c5edd0(puVar6,uVar5,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  uVar5 = 0;
  if ((int)puVar4 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1021dfd64; end: 1021dfe5b; +[AdTopicsRequestHelpers updateRequestURL] */

void FUN_1021dfd64(void)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  uVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(uVar2 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x00010403f4e4();
  uVar5 = 0xd000000000000045;
  pcVar1 = "https://gcp.api.snapchat.com/prod/ad/update_ad_topics_preference/v1";
  if ((uVar2 & 1) == 0) {
    uVar5 = 0xd000000000000043;
    pcVar1 = "https://gcp.api.snapchat.com/shadow/ad/get_ad_topics_preference/v1";
  }
  func_0x000107c5edd0(puVar6,uVar5,(ulong)(pcVar1 + 0x30) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar1 + 0x30) | 0x8000000000000000);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  uVar5 = 0;
  if ((int)puVar4 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1021dfe5c; end: 1021dfee3; +[AdTopicsRequestHelpers fetchUploadDataWithSaid:] */

void FUN_1021dfe5c(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  uVar2 = param_2;
  FUN_1021e00d8();
  func_0x000107c6142c(param_2);
  if (uVar2 >> 0x3c < 0xf) {
    lVar1 = param_3;
    func_0x000107c5ee20(param_3,uVar2);
    func_0x0001000b44c0(param_3,uVar2);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1021dfee4; end: 1021dff8f; +[AdTopicsRequestHelpers updateUploadDataWithPreference:said:] */

void FUN_1021dfee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1021e0260(param_3,param_4,param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_2);
  if (param_4 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,param_4);
    func_0x0001000b44c0(param_3,param_4);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021dff90; end: 1021dffcf; +[AdTopicsRequestHelpers adTopicsPreferenceFromLifestyleTopicsPreference:] */

void FUN_1021dff90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1021e01c0(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1021dffd0; end: 1021e0067; +[AdTopicsRequestHelpers adLifestyleTopicsPreferenceFromAdTopicsPreference:] */

void FUN_1021dffd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    lVar4 = 0;
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x000107c61174(param_3);
    lVar2 = lVar4;
    func_0x000107c4eb04();
    lVar3 = lVar4;
    func_0x000107c3dab8(lVar4);
    func_0x000107c43ca0(lVar4);
  }
  uVar1 = 0;
  func_0x0001021e0584(0);
  func_0x000107c610f8();
  func_0x0001021e0438(lVar2,lVar3,lVar4,uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1021e0068; end: 1021e00a3; -[AdTopicsRequestHelpers init] */

void FUN_1021e0068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e00a4; end: 1021e00d7;  */

void FUN_1021e00a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e00d8; end: 1021e01bf;  */

undefined1  [16] FUN_1021e00d8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_PTR_1126c3640;
  uVar5 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0;
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
    func_0x0001008fc608(param_1);
    if (param_2 >> 0x3c < 0xf) {
      uVar3 = param_1;
      func_0x000107c5ee20();
      func_0x0001000b44c0(param_1,param_2);
      uVar5 = param_2;
    }
    else {
      uVar3 = 0;
      uVar5 = param_2;
    }
  }
  func_0x000107c58b58(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    puVar4 = (undefined *)0x0;
    uVar5 = 0xf000000000000000;
  }
  else {
    puVar4 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 1021e01c0; end: 1021e025f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021e01c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  
  puVar1 = PTR_PTR_1126c3650;
  func_0x000107c610f8(PTR_PTR_1126c3650);
  func_0x000107c453e4();
  if (param_1 == 0) {
    func_0x000107c575c0(puVar1,param_2,0);
    func_0x000107c525ec(puVar1,param_2,0);
    uVar2 = 0;
  }
  else {
    func_0x000107c575c0(puVar1,param_2,*(undefined1 *)(param_1 + _DAT_112e62ba8));
    func_0x000107c525ec(puVar1,param_2,*(undefined1 *)(param_1 + _DAT_112e62bb0));
    uVar2 = *(undefined1 *)(param_1 + _DAT_112e62bb8);
  }
  func_0x000107c54d64(puVar1,param_2,uVar2);
  return puVar1;
}



/* Entry: 1021e0260; end: 1021e0373;  */

undefined1  [16] FUN_1021e0260(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_PTR_1126c3648;
  uVar5 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0;
  if (param_3 != 0) {
    func_0x000107c61434(param_3);
    func_0x0001008fc608(param_2);
    if (param_3 >> 0x3c < 0xf) {
      uVar4 = param_2;
      func_0x000107c5ee20();
      func_0x0001000b44c0(param_2,param_3);
      uVar5 = param_3;
    }
    else {
      uVar4 = 0;
      uVar5 = param_3;
    }
  }
  func_0x000107c58b58(puVar1);
  func_0x000107c61170(uVar4);
  FUN_1021e01c0(param_1);
  func_0x000107c52414(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    puVar3 = (undefined *)0x0;
    uVar5 = 0xf000000000000000;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 1021e0374; end: 1021e0393;  */

void FUN_1021e0374(void)

{
  func_0x000107c61168(&PTR_PTR_112827ad0);
  return;
}



/* Entry: 1021e0394; end: 1021e03a3; -[SCAdLifestyleTopicsPreference politicalAdsOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1021e0394(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e62ba8);
}



/* Entry: 1021e03a4; end: 1021e03b3; -[SCAdLifestyleTopicsPreference alcoholAdsOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1021e03a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e62bb0);
}



/* Entry: 1021e03b4; end: 1021e03c3; -[SCAdLifestyleTopicsPreference gamblingAdsOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1021e03b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e62bb8);
}



/* Entry: 1021e03c4; end: 1021e04ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e03c4(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e62ba8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e62bb0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112e62bb8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e04ac; end: 1021e051f; -[SCAdLifestyleTopicsPreference initWithPoliticalAdsOptOut:alcoholAdsOptOut:gamblingAdsOptOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e04ac(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112e62ba8) = param_3;
  *(undefined1 *)(param_1 + _DAT_112e62bb0) = param_4;
  *(undefined1 *)(param_1 + _DAT_112e62bb8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e0520; end: 1021e0523; -[SCAdLifestyleTopicsPreference copyWithZone:] */

void FUN_1021e0520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1021e0524; end: 1021e05a3; -[SCAdLifestyleTopicsPreference init] */

void FUN_1021e0524(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdSettingsServices.AdLifestyleTopicsPreference",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e0550);
  (*pcVar1)();
}



/* Entry: 1021e05a4; end: 1021e05b3; -[AdSettingsServices adTopicsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e05a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e62be8));
  return;
}



/* Entry: 1021e05b4; end: 1021e05ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e05b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62be8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e0600; end: 1021e0657; -[AdSettingsServices initWithAdTopicsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e0600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e62be8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1021e0658; end: 1021e06b7; -[AdSettingsServices init] */

void FUN_1021e0658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdSettingsServices.AdSettingsServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e0684);
  (*pcVar1)();
}



/* Entry: 1021e06b8; end: 1021e06c7; -[AdSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e06b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62be8));
  return;
}



/* Entry: 1021e06c8; end: 1021e06e7;  */

void FUN_1021e06c8(void)

{
  func_0x000107c61168(&PTR_PTR_112827c50);
  return;
}



/* Entry: 1021e06e8; end: 1021e0753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e06e8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021e0adc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e62c20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021e0754; end: 1021e07bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e0754(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62c20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e07c0; end: 1021e081f; -[_TtC46LensStudioSettingsScopedFactoryServiceProvider34SCLensStudioSettingsScopedServices init] */

void FUN_1021e07c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensStudioSettingsScopedFactoryServiceProvider.SCLensStudioSettingsScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e07ec);
  (*pcVar1)();
}



/* Entry: 1021e0820; end: 1021e082f; -[_TtC46LensStudioSettingsScopedFactoryServiceProvider34SCLensStudioSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e0820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e62c20));
  return;
}



/* Entry: 1021e0830; end: 1021e089b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e0830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104df270;
  func_0x000107c613fc(&UNK_1104df270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1021e0bb8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021e089c; end: 1021e0937;  */

void FUN_1021e089c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104df180;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104df180;
  return;
}



/* Entry: 1021e0938; end: 1021e096f;  */

void FUN_1021e0938(long *param_1)

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



/* Entry: 1021e0970; end: 1021e0977;  */

undefined8 FUN_1021e0970(void)

{
  return 0x1b;
}



/* Entry: 1021e0978; end: 1021e0aab;  */

void FUN_1021e0978(undefined8 *param_1)

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
  puVar1 = &UNK_1104df298;
  func_0x000107c613fc(&UNK_1104df298,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021e0b90;
  func_0x00010058fa64(FUN_1021e0b90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021e0aac; end: 1021e0adb;  */

undefined ** FUN_1021e0aac(void)

{
  return &PTR_DAT_112e62ef8;
}



/* Entry: 1021e0adc; end: 1021e0afb;  */

void FUN_1021e0adc(void)

{
  func_0x000107c61168(&PTR_PTR_112827d10);
  return;
}



/* Entry: 1021e0afc; end: 1021e0b4b;  */

undefined1  [16] FUN_1021e0afc(void)

{
  return ZEXT816(0x1104df1d0);
}



/* Entry: 1021e0b4c; end: 1021e0b8f;  */

void FUN_1021e0b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e62c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa148;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e62c88 = puVar1;
  return;
}



/* Entry: 1021e0b90; end: 1021e0bb7;  */

void FUN_1021e0b90(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1021e0bb8; end: 1021e0bbb;  */

void FUN_1021e0bb8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021e0bbc; end: 1021e0ce3;  */

void FUN_1021e0bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e62c90,&UNK_10da6b920);
  puVar1 = &UNK_1104df2d8;
  func_0x000107c613fc(&UNK_1104df2d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021e0ce4,puVar1);
  return;
}



/* Entry: 1021e0ce4; end: 1021e0cfb;  */

/* WARNING: Possible PIC construction at 0x0001021e0ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e0cd0) */

void FUN_1021e0ce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104df320;
  func_0x000107c613fc(&UNK_1104df320,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e62c98;
  func_0x0001000285a8(0x112e62c98,&UNK_10da6b968);
  func_0x000107c613fc();
  pcVar4 = FUN_1021e1008;
  func_0x0001000841fc(FUN_1021e1008,puVar2,uVar3);
  func_0x000100084214(&UNK_10da6b930,0x30,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021e0cfc; end: 1021e1007;  */

void FUN_1021e0cfc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e62ca0,&UNK_10da6b970);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021e1d64();
  func_0x000100082720("LensStudioSettingsScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e62ca8,&UNK_10da6b980);
  puVar3 = &UNK_1104df348;
  func_0x000107c613fc(&UNK_1104df348,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1021e1010;
  func_0x0001000823a8(0x1021e1010,puVar3);
  func_0x000100082720("SCLensStudioSettingsEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021e0938;
  func_0x0001000823a8(FUN_1021e0938,0);
  func_0x000100082720("SCLensStudioSettingsScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e62cb0,&UNK_10da6b978);
  puVar3 = &UNK_1104df370;
  func_0x000107c613fc(&UNK_1104df370,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1021e101c;
  func_0x0001000823a8(0x1021e101c,puVar3);
  func_0x000100082720("SCLensStudioSettingsScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e62c28,&UNK_10da6b700);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1021e1028;
  func_0x0001000823a8(0x1021e1028,uVar5);
  func_0x000100082720("SCLensStudioSettingsScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e62c18,&UNK_10da6b6f0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1021e1030;
  func_0x0001000823a8(0x1021e1030,uVar6);
  func_0x000100082720("SCLensStudioSettingsScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104df398;
  func_0x000107c613fc(&UNK_1104df398,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1021e1064;
  func_0x0001000823a8(FUN_1021e1064,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensStudioSettingsScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1021e1008; end: 1021e1037;  */

void FUN_1021e1008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e62ca0,&UNK_10da6b970);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021e1d64();
  func_0x000100082720("LensStudioSettingsScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e62ca8,&UNK_10da6b980);
  puVar3 = &UNK_1104df348;
  func_0x000107c613fc(&UNK_1104df348,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x1021e1010;
  func_0x0001000823a8(0x1021e1010,puVar3);
  func_0x000100082720("SCLensStudioSettingsEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1021e0938;
  func_0x0001000823a8(FUN_1021e0938,0);
  func_0x000100082720("SCLensStudioSettingsScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e62cb0,&UNK_10da6b978);
  puVar3 = &UNK_1104df370;
  func_0x000107c613fc(&UNK_1104df370,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1021e101c;
  func_0x0001000823a8(0x1021e101c,puVar3);
  func_0x000100082720("SCLensStudioSettingsScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e62c28,&UNK_10da6b700);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1021e1028;
  func_0x0001000823a8(0x1021e1028,uVar6);
  func_0x000100082720("SCLensStudioSettingsScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e62c18,&UNK_10da6b6f0);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1021e1030;
  func_0x0001000823a8(0x1021e1030,uVar9);
  func_0x000100082720("SCLensStudioSettingsScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104df398;
  func_0x000107c613fc(&UNK_1104df398,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1021e1064;
  func_0x0001000823a8(FUN_1021e1064,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCLensStudioSettingsScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1021e1038; end: 1021e1063;  */

void FUN_1021e1038(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021e1064; end: 1021e106b;  */

void FUN_1021e1064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104df180;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104df180;
  return;
}



/* Entry: 1021e106c; end: 1021e111b;  */

void FUN_1021e106c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1021e1470();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1021e12b0(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021e111c; end: 1021e118b;  */

undefined8 FUN_1021e111c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1021e12b0(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1021e118c; end: 1021e11bf;  */

void FUN_1021e118c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021e11c0; end: 1021e11c7;  */

undefined8 FUN_1021e11c0(void)

{
  return 0x1b;
}



/* Entry: 1021e11c8; end: 1021e124b;  */

void FUN_1021e11c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1021e14b0,param_2,FUN_1021e14b4,param_2,FUN_1021e14dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021e124c; end: 1021e129b;  */

undefined8 FUN_1021e124c(void)

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



/* Entry: 1021e129c; end: 1021e12af;  */

void FUN_1021e129c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104df3b0;
  return;
}



/* Entry: 1021e12b0; end: 1021e1453;  */

void FUN_1021e12b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126aa150;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f06eb70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f06eb90);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021e1454; end: 1021e146f;  */

undefined ** FUN_1021e1454(void)

{
  return &PTR_DAT_112e62ef8;
}



/* Entry: 1021e1470; end: 1021e148f;  */

void FUN_1021e1470(void)

{
  func_0x000107c61168(&PTR_PTR_112e62d20);
  return;
}



/* Entry: 1021e1490; end: 1021e14b3;  */

undefined1  [16] FUN_1021e1490(void)

{
  return ZEXT816(0x1104df3f0);
}



/* Entry: 1021e14b4; end: 1021e14db;  */

void FUN_1021e14b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021e14dc; end: 1021e14e3;  */

undefined8 FUN_1021e14dc(void)

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



/* Entry: 1021e14e4; end: 1021e151f;  */

void FUN_1021e14e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1021e1520();
  func_0x0001000a7f38("SCLensStudioSettingsScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 1021e1520; end: 1021e170b;  */

void FUN_1021e1520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104df720;
  ppuVar4 = &PTR_DAT_112e62ef8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104df440;
  func_0x000107c613fc(&UNK_1104df440,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e62d90;
  func_0x0001000285a8(0x112e62d90,&UNK_10da6bac8);
  func_0x0001000a6ee8(&UNK_1104df5f8,
                      "LensStudioSettingsScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_1021e170c,puVar2,uVar3,&UNK_1104df5f8,&PTR_DAT_112e62e20);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104df3f0,
                      "SCLensStudioSettingsEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1021e17c0,param_3,uVar3,&UNK_1104df3f0,&PTR_DAT_112e62cb8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104df468;
  func_0x000107c613fc(&UNK_1104df468,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104df210,
                      "SCLensStudioSettingsScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1021e1870,puVar2,uVar3,&UNK_1104df210,&PTR_DAT_112e62c30);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e62d98;
  func_0x0001000285a8(0x112e62d98,&UNK_10da6bad0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1021e170c; end: 1021e174b;  */

void FUN_1021e170c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021e1e48(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensStudioSettingsScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021e174c; end: 1021e17bf;  */

void FUN_1021e174c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1021e18ac;
  func_0x0001000823a8(0x1021e18ac,param_3);
  func_0x000100082720("SCLensStudioSettingsEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021e17c0; end: 1021e17c7;  */

void FUN_1021e17c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1021e18ac;
  func_0x0001000823a8();
  func_0x000100082720("SCLensStudioSettingsEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021e17c8; end: 1021e186f;  */

void FUN_1021e17c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104df490;
  func_0x000107c613fc(&UNK_1104df490,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021e18a4;
  func_0x0001000823a8(FUN_1021e18a4,puVar1);
  func_0x000100082720("SCLensStudioSettingsScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021e1870; end: 1021e1877;  */

void FUN_1021e1870(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104df490;
  func_0x000107c613fc(&UNK_1104df490,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021e18a4;
  func_0x0001000823a8(FUN_1021e18a4,puVar3);
  func_0x000100082720("SCLensStudioSettingsScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021e1878; end: 1021e18a3;  */

void FUN_1021e1878(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021e18a4; end: 1021e18b3;  */

void FUN_1021e18a4(undefined8 *param_1)

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
  puVar1 = &UNK_1104df298;
  func_0x000107c613fc(&UNK_1104df298,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021e0b90;
  func_0x00010058fa64(FUN_1021e0b90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021e18b4; end: 1021e193b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021e18b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021e1c74();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e62da0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e62da8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e193c);
  (*pcVar1)();
}



/* Entry: 1021e193c; end: 1021e199b; -[_TtC34LensStudioSettingsScopeGraphBridge49LensStudioSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021e193c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensStudioSettingsScopeGraphBridge.LensStudioSettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e1968);
  (*pcVar1)();
}



/* Entry: 1021e199c; end: 1021e19d3; -[_TtC34LensStudioSettingsScopeGraphBridge49LensStudioSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021e19b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e19bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e199c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62da0));
  return;
}



/* Entry: 1021e19d4; end: 1021e19fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e19d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e62da8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e62da0));
  return;
}



/* Entry: 1021e19fc; end: 1021e1a1b;  */

void FUN_1021e19fc(void)

{
  func_0x000107c61168(&PTR_PTR_112827dd0);
  return;
}


