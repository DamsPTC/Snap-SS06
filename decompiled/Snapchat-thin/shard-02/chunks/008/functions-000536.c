/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021dc31c; end: 1021dc493;  */

/* WARNING: Possible PIC construction at 0x0001021dc384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dc41c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021dc388) */
/* WARNING: Removing unreachable block (ram,0x0001021dc420) */
/* WARNING: Removing unreachable block (ram,0x0001021dc438) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc31c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e62758);
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



/* Entry: 1021dc494; end: 1021dc49b;  */

void FUN_1021dc494(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021dc49c; end: 1021dc4cf; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint end] */

void FUN_1021dc49c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021dc31c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021dc4d0; end: 1021dc5ef;  */

void FUN_1021dc4d0(long param_1,long param_2,long param_3)

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
                        "AdLifestyleAndInterestsScopeGraphBridge/SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dc5f0);
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



/* Entry: 1021dc5f0; end: 1021dc69b; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021dc5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021dc4d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021dc69c; end: 1021dc6fb; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc69c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62750,0);
  *(undefined8 *)(param_1 + _DAT_112e62758) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021dc6fc; end: 1021dc72f;  */

void FUN_1021dc6fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dc730; end: 1021dc767; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc730(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62758));
  return;
}



/* Entry: 1021dc768; end: 1021dc787;  */

void FUN_1021dc768(void)

{
  func_0x000107c61168(&PTR_PTR_112827278);
  return;
}



/* Entry: 1021dc788; end: 1021dc7a7; -[AdLifestyleAndInterestsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc788(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e62788));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021dc7a8; end: 1021dc7ef; -[AdLifestyleAndInterestsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc7a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62790;
  func_0x000107c61428(param_1 + _DAT_112e62790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021dc7f0; end: 1021dc847; -[AdLifestyleAndInterestsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62790;
  func_0x000107c61428(param_1 + _DAT_112e62790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021dc848; end: 1021dc8ef; -[AdLifestyleAndInterestsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021dc848(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e62788));
  param_1 = param_1 + _DAT_112e62790;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021dc8f0; end: 1021dc957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc8f0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021dcb78();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e627a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021dc958; end: 1021dc9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc958(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e627a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021dc9a4; end: 1021dca8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1021dc9a4(long param_1,undefined8 param_2)

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
  FUN_1021dcb00();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e62790;
  func_0x000107c61614(lVar4 + _DAT_112e62790,0);
  *(long *)(lVar4 + _DAT_112e62788) = param_1;
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



/* Entry: 1021dca8c; end: 1021dcaff; -[_TtC28AdLifestyleAndInterestsScope36AdLifestyleAndInterestsScopeServices buildWithUiContainer:delegate:] */

void FUN_1021dca8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1021dc9a4(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021dcb00; end: 1021dcb1f;  */

void FUN_1021dcb00(void)

{
  func_0x000107c61168(&PTR_PTR_112827338);
  return;
}



/* Entry: 1021dcb20; end: 1021dcb23;  */

void FUN_1021dcb20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dcb24; end: 1021dcb57;  */

void FUN_1021dcb24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dcb58; end: 1021dcb77; -[_TtC28AdLifestyleAndInterestsScope36AdLifestyleAndInterestsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dcb58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e627a0));
  return;
}



/* Entry: 1021dcb78; end: 1021dcb97;  */

void FUN_1021dcb78(void)

{
  func_0x000107c61168(&PTR_PTR_112827400);
  return;
}



/* Entry: 1021dcb98; end: 1021dcbab;  */

undefined1  [16] FUN_1021dcb98(void)

{
  return ZEXT816(0x1104de8a8);
}



/* Entry: 1021dcbac; end: 1021dcc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dcbac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021dcfa0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e62818) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021dcc18; end: 1021dcc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dcc18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62818) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021dcc84; end: 1021dcce3; -[_TtC38AdSettingsScopedFactoryServiceProvider24AdSettingsScopedServices init] */

void FUN_1021dcc84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSettingsScopedFactoryServiceProvider.AdSettingsScopedServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dccb0);
  (*pcVar1)();
}



/* Entry: 1021dcce4; end: 1021dccf3; -[_TtC38AdSettingsScopedFactoryServiceProvider24AdSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dcce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e62818));
  return;
}



/* Entry: 1021dccf4; end: 1021dcd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dccf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104dea90;
  func_0x000107c613fc(&UNK_1104dea90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1021dd038,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021dcd60; end: 1021dcdfb;  */

void FUN_1021dcd60(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104de9a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104de9a0;
  return;
}



/* Entry: 1021dcdfc; end: 1021dce33;  */

void FUN_1021dcdfc(long *param_1)

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



/* Entry: 1021dce34; end: 1021dce3b;  */

undefined8 FUN_1021dce34(void)

{
  return 0x1b;
}



/* Entry: 1021dce3c; end: 1021dcf6f;  */

void FUN_1021dce3c(undefined8 *param_1)

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
  puVar1 = &UNK_1104deab8;
  func_0x000107c613fc(&UNK_1104deab8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021dd010;
  func_0x00010058fa64(FUN_1021dd010,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021dcf70; end: 1021dcf9f;  */

undefined ** FUN_1021dcf70(void)

{
  return &PTR_DAT_112e62b18;
}



/* Entry: 1021dcfa0; end: 1021dcfbf;  */

void FUN_1021dcfa0(void)

{
  func_0x000107c61168(&PTR_PTR_1128274c0);
  return;
}



/* Entry: 1021dcfc0; end: 1021dd00f;  */

undefined1  [16] FUN_1021dcfc0(void)

{
  return ZEXT816(0x1104de9f0);
}



/* Entry: 1021dd010; end: 1021dd037;  */

void FUN_1021dd010(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1021dd038; end: 1021dd03b;  */

void FUN_1021dd038(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021dd03c; end: 1021dd1f3;  */

void FUN_1021dd03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e62880,&UNK_10da6b1c0);
  puVar1 = &UNK_1104deaf8;
  func_0x000107c613fc(&UNK_1104deaf8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1021dd1f4,puVar1);
  return;
}



/* Entry: 1021dd1f4; end: 1021dd213;  */

/* WARNING: Possible PIC construction at 0x0001021dd1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dd1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dd1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021dd1c8) */
/* WARNING: Removing unreachable block (ram,0x0001021dd1b8) */
/* WARNING: Removing unreachable block (ram,0x0001021dd1d8) */

void FUN_1021dd1f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1104deb40;
  func_0x000107c613fc(&UNK_1104deb40,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e62888;
  func_0x0001000285a8(0x112e62888,&UNK_10da6b1f8);
  func_0x000107c613fc();
  pcVar8 = FUN_1021dd5a8;
  func_0x0001000841fc(FUN_1021dd5a8,puVar6,uVar7);
  func_0x000100084214(&UNK_10da6b1d0,0x26,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021dd214; end: 1021dd55b;  */

void FUN_1021dd214(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e62890,&UNK_10da6b200);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021de888();
  func_0x000100082720("AdSettingsScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e62898,&UNK_10da6b210);
  puVar3 = &UNK_1104deb68;
  func_0x000107c613fc(&UNK_1104deb68,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x1021dd5b8;
  func_0x0001000823a8(0x1021dd5b8,puVar3);
  func_0x000100082720("SCAdSettingsEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021dcdfc;
  func_0x0001000823a8(FUN_1021dcdfc,0);
  func_0x000100082720("AdSettingsScopedServicesCleanupRelayServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e628a0,&UNK_10da6b208);
  puVar3 = &UNK_1104deb90;
  func_0x000107c613fc(&UNK_1104deb90,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x1021dd5cc;
  func_0x0001000823a8(0x1021dd5cc,puVar3);
  func_0x000100082720("AdSettingsScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e62820,&UNK_10da6afd0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1021dd5d8;
  func_0x0001000823a8(0x1021dd5d8,uVar5);
  func_0x000100082720("AdSettingsScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e62810,&UNK_10da6afc0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1021dd5e0;
  func_0x0001000823a8(0x1021dd5e0,uVar6);
  func_0x000100082720("AdSettingsScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104debb8;
  func_0x000107c613fc(&UNK_1104debb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1021dd5e8;
  func_0x0001000823a8(0x1021dd5e8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("AdSettingsScopeEntryPointProvider",0x21,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1021dd55c; end: 1021dd5a7;  */

void FUN_1021dd55c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021dd5a8; end: 1021dd5ef;  */

void FUN_1021dd5a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e62890,&UNK_10da6b200);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1021de888();
  func_0x000100082720("AdSettingsScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e62898,&UNK_10da6b210);
  puVar5 = &UNK_1104deb68;
  func_0x000107c613fc(&UNK_1104deb68,0x48,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x1021dd5b8;
  func_0x0001000823a8(0x1021dd5b8,puVar5);
  func_0x000100082720("SCAdSettingsEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_1021dcdfc;
  func_0x0001000823a8(FUN_1021dcdfc,0);
  func_0x000100082720("AdSettingsScopedServicesCleanupRelayServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e628a0,&UNK_10da6b208);
  puVar5 = &UNK_1104deb90;
  func_0x000107c613fc(&UNK_1104deb90,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = pcVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar6);
  uVar8 = 0x1021dd5cc;
  func_0x0001000823a8(0x1021dd5cc,puVar5);
  func_0x000100082720("AdSettingsScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e62820,&UNK_10da6afd0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1021dd5d8;
  func_0x0001000823a8(0x1021dd5d8,uVar8);
  func_0x000100082720("AdSettingsScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e62810,&UNK_10da6afc0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1021dd5e0;
  func_0x0001000823a8(0x1021dd5e0,uVar9);
  func_0x000100082720("AdSettingsScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104debb8;
  func_0x000107c613fc(&UNK_1104debb8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x1021dd5e8;
  func_0x0001000823a8(0x1021dd5e8,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("AdSettingsScopeEntryPointProvider",0x21,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1021dd5f0; end: 1021dde1b;  */

void FUN_1021dd5f0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1021ddf94();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126c3620;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x6e69747465536461;
  func_0x000107c5fadc(0x6e69747465536461,0xef65706f63537367);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f06e440);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 1021dde1c; end: 1021dde87;  */

void FUN_1021dde1c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1021dde88; end: 1021dde8f;  */

undefined8 FUN_1021dde88(void)

{
  return 0x1b;
}



/* Entry: 1021dde90; end: 1021ddf13;  */

void FUN_1021dde90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1021ddfd4,param_2,FUN_1021ddfd8,param_2,FUN_1021de000,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021ddf14; end: 1021ddf63;  */

undefined8 FUN_1021ddf14(void)

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



/* Entry: 1021ddf64; end: 1021ddf93;  */

void FUN_1021ddf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104debd0;
  return;
}



/* Entry: 1021ddf94; end: 1021ddfb3;  */

void FUN_1021ddf94(void)

{
  func_0x000107c61168(&PTR_PTR_112e62910);
  return;
}



/* Entry: 1021ddfb4; end: 1021ddfd7;  */

undefined1  [16] FUN_1021ddfb4(void)

{
  return ZEXT816(0x1104dec10);
}



/* Entry: 1021ddfd8; end: 1021ddfff;  */

void FUN_1021ddfd8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021de000; end: 1021de007;  */

undefined8 FUN_1021de000(void)

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



/* Entry: 1021de008; end: 1021de043;  */

void FUN_1021de008(undefined8 *param_1,undefined8 param_2)

{
  FUN_1021de044();
  func_0x0001000a7f38("AdSettingsScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1021de044; end: 1021de22f;  */

void FUN_1021de044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104def60;
  ppuVar4 = &PTR_DAT_112e62b18;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104dec60;
  func_0x000107c613fc(&UNK_1104dec60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e629a0;
  func_0x0001000285a8(0x112e629a0,&UNK_10da6b350);
  func_0x0001000a6ee8(&UNK_1104dee18,"AdSettingsScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_1021de230,puVar2,uVar3,&UNK_1104dee18,&PTR_DAT_112e62a30);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104dec88;
  func_0x000107c613fc(&UNK_1104dec88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104dea30,"AdSettingsScopedServicesScopeInitializationPluginKey",0x34,2,
                      FUN_1021de318,puVar2,uVar3,&UNK_1104dea30,&PTR_DAT_112e62828);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104dec10,"SCAdSettingsEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_1021de394,param_4,uVar3,&UNK_1104dec10,&PTR_DAT_112e628a8);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e629a8;
  func_0x0001000285a8(0x112e629a8,&UNK_10da6b358);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1021de230; end: 1021de26f;  */

void FUN_1021de230(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021de96c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdSettingsScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021de270; end: 1021de317;  */

void FUN_1021de270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104decb0;
  func_0x000107c613fc(&UNK_1104decb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021de3d0;
  func_0x0001000823a8(FUN_1021de3d0,puVar1);
  func_0x000100082720("AdSettingsScopedServicesScopeInitializationPluginProvider",0x39,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021de318; end: 1021de31f;  */

void FUN_1021de318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104decb0;
  func_0x000107c613fc(&UNK_1104decb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021de3d0;
  func_0x0001000823a8(FUN_1021de3d0,puVar3);
  func_0x000100082720("AdSettingsScopedServicesScopeInitializationPluginProvider",0x39,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021de320; end: 1021de393;  */

void FUN_1021de320(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1021de39c;
  func_0x0001000823a8(0x1021de39c,param_3);
  func_0x000100082720("SCAdSettingsEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021de394; end: 1021de3a3;  */

void FUN_1021de394(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1021de39c;
  func_0x0001000823a8();
  func_0x000100082720("SCAdSettingsEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021de3a4; end: 1021de3cf;  */

void FUN_1021de3a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021de3d0; end: 1021de3d7;  */

void FUN_1021de3d0(undefined8 *param_1)

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
  puVar1 = &UNK_1104deab8;
  func_0x000107c613fc(&UNK_1104deab8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021dd010;
  func_0x00010058fa64(FUN_1021dd010,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021de3d8; end: 1021de45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021de3d8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021de798();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e629b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e629b8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021de460);
  (*pcVar1)();
}



/* Entry: 1021de460; end: 1021de4bf; -[_TtC26AdSettingsScopeGraphBridge41AdSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021de460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSettingsScopeGraphBridge.AdSettingsScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021de48c);
  (*pcVar1)();
}



/* Entry: 1021de4c0; end: 1021de4f7; -[_TtC26AdSettingsScopeGraphBridge41AdSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021de4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021de4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021de4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e629b0));
  return;
}



/* Entry: 1021de4f8; end: 1021de51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021de4f8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e629b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e629b0));
  return;
}



/* Entry: 1021de520; end: 1021de53f;  */

void FUN_1021de520(void)

{
  func_0x000107c61168(&PTR_PTR_112827580);
  return;
}



/* Entry: 1021de540; end: 1021de5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021de540(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e629e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e629f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021de5c8);
  (*pcVar2)();
}



/* Entry: 1021de5c8; end: 1021de6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021de5c8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e629e8);
  *(undefined **)(unaff_x20 + _DAT_112e629e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e629f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e629f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ded78;
  func_0x000107c613fc(&UNK_1104ded78,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021de6b4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021de6b0; end: 1021de6bb;  */

void FUN_1021de6b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021de6bc; end: 1021de71b; -[_TtC26AdSettingsScopeGraphBridge39AdSettingsScopedServicesSaberEntryPoint init] */

void FUN_1021de6bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdSettingsScopeGraphBridge.AdSettingsScopedServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021de6e8);
  (*pcVar1)();
}



/* Entry: 1021de71c; end: 1021de753; -[_TtC26AdSettingsScopeGraphBridge39AdSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021de71c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e629f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e629e8));
  return;
}



/* Entry: 1021de754; end: 1021de757;  */

void FUN_1021de754(void)

{
  return;
}



/* Entry: 1021de758; end: 1021de777;  */

void FUN_1021de758(void)

{
  FUN_1021de5c8();
  return;
}



/* Entry: 1021de778; end: 1021de797;  */

void FUN_1021de778(void)

{
  func_0x000107c61168(&PTR_PTR_112827648);
  return;
}



/* Entry: 1021de798; end: 1021de867;  */

undefined8 FUN_1021de798(void)

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
  
  func_0x000107c61428(0x112e62a20,&uStack_40,0x20,0);
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
    FUN_1021de868();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021de868; end: 1021de887;  */

void FUN_1021de868(void)

{
  func_0x000107c61168(&PTR_PTR_112827710);
  return;
}



/* Entry: 1021de888; end: 1021de8f3;  */

void FUN_1021de888(void)

{
  func_0x0001000285a8(0x112e62a28,&UNK_10da6b3f8);
  func_0x0001000823a8(0x1021de8c8,0);
  return;
}



/* Entry: 1021de8f4; end: 1021de92f; -[_TtC26AdSettingsScopeGraphBridge34AdSettingsScopeGraphBridgeServices init] */

void FUN_1021de8f4(undefined8 param_1)

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



/* Entry: 1021de930; end: 1021de963;  */

void FUN_1021de930(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021de964; end: 1021de96b;  */

undefined8 FUN_1021de964(void)

{
  return 0x1b;
}



/* Entry: 1021de96c; end: 1021deae3;  */

void FUN_1021de96c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104dedc0;
  func_0x000107c613fc(&UNK_1104dedc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021deae4,puVar1);
  return;
}



/* Entry: 1021deae4; end: 1021deaeb;  */

void FUN_1021deae4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e62a20,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e62a20,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104dee58;
  func_0x000107c613fc(&UNK_1104dee58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021deb98;
  func_0x00010058fa64(0x1021deb98,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021deaec; end: 1021deb47;  */

void FUN_1021deaec(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e62a20,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e62a20,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021deb48; end: 1021deb9f;  */

undefined ** FUN_1021deb48(void)

{
  return &PTR_DAT_112e62b18;
}



/* Entry: 1021deba0; end: 1021debe7; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021deba0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62a80;
  func_0x000107c61428(param_1 + _DAT_112e62a80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021debe8; end: 1021dec3f; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021debe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62a80;
  func_0x000107c61428(param_1 + _DAT_112e62a80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021dec40; end: 1021dec87; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint adSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dec40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62a88;
  func_0x000107c61428(param_1 + _DAT_112e62a88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021dec88; end: 1021deceb; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint setAdSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dec88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62a88;
  func_0x000107c61428(param_1 + _DAT_112e62a88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021decec; end: 1021dee1f;  */

/* WARNING: Possible PIC construction at 0x0001021deda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dedc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021deddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021deda8) */
/* WARNING: Removing unreachable block (ram,0x0001021dedc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021decec(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3d488();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1021de520();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021de798();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dee20);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e629b0) = lVar5;
    *(long *)(lVar4 + _DAT_112e629b8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1021dee20; end: 1021dee47; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1021dee20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021decec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021dee48; end: 1021dee8b; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1021dee48(undefined8 param_1)

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



/* Entry: 1021dee8c; end: 1021df023;  */

void FUN_1021dee8c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f91980)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f06e680,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdSettingsScopeGraphBridge/SCAdSettingsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021df024);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c523e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021df024; end: 1021df0cf; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1021df024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021dee8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021df0d0; end: 1021df13b; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df0d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62a80,0);
  *(undefined8 *)(param_1 + _DAT_112e62a88) = 0;
  *(undefined8 *)(param_1 + _DAT_112e62a90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021df13c; end: 1021df16f;  */

void FUN_1021df13c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021df170; end: 1021df1b7; -[SCAdSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021df19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021df1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df170(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62a88));
  return;
}



/* Entry: 1021df1b8; end: 1021df1d7;  */

void FUN_1021df1b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128277c0);
  return;
}



/* Entry: 1021df1d8; end: 1021df21f; -[SCAdSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df1d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62ac0;
  func_0x000107c61428(param_1 + _DAT_112e62ac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021df220; end: 1021df277; -[SCAdSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62ac0;
  func_0x000107c61428(param_1 + _DAT_112e62ac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021df278; end: 1021df34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021df278(undefined8 param_1,long param_2)

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
    FUN_1021de778();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e629e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021df350);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e629f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e62ac8);
    *(long **)(unaff_x20 + _DAT_112e62ac8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}


