/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012d5d04; end: 1012d5d23;  */

void FUN_1012d5d04(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4b20);
  return;
}



/* Entry: 1012d5d24; end: 1012d5d33;  */

void FUN_1012d5d24(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_60;
  pcVar2 = "onBackButtonTapped()";
  func_0x0001000c10c0("onBackButtonTapped()",*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  puVar3 = &UNK_11039e5f0;
  func_0x000107c613fc(&UNK_11039e5f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_40 = FUN_1012d5f70;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039e608;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1012d5d34; end: 1012d5e03;  */

void FUN_1012d5d34(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "onBackButtonTapped()";
  func_0x0001000c10c0("onBackButtonTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11039e5f0;
  func_0x000107c613fc(&UNK_11039e5f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_40 = FUN_1012d5f70;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039e608;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1012d5e04; end: 1012d5e53; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5e04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_112d70380) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setView__112666308);
    return;
  }
  lVar1 = param_1;
  FUN_1012d5f50();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_loadView_112604be0);
  return;
}



/* Entry: 1012d5e54; end: 1012d5eb7; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5e54(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d70380) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "SCSaturnSettingsEntryPoint/SaturnSettingsViewController.swift",0x3d,2,0x33,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d5eb8);
  (*pcVar1)();
}



/* Entry: 1012d5eb8; end: 1012d5ee3; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController initWithNibName:bundle:] */

void FUN_1012d5eb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSaturnSettingsEntryPoint.SaturnSettingsViewController",0x37,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d5ee4);
  (*pcVar1)();
}



/* Entry: 1012d5ee4; end: 1012d5f3f; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_1012d5ee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSaturnSettingsEntryPoint.SaturnSettingsViewController",0x37,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d5f10);
  (*pcVar1)();
}



/* Entry: 1012d5f40; end: 1012d5f4f; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70380));
  return;
}



/* Entry: 1012d5f50; end: 1012d5f6f;  */

void FUN_1012d5f50(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4c08);
  return;
}



/* Entry: 1012d5f70; end: 1012d5f93;  */

/* WARNING: Possible PIC construction at 0x0001012d5cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d5cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5f70(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d70328);
  if (lVar1 != 0) {
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4eb48();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 1012d5f94; end: 1012d5f97; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController defaultProjectNameV3] */

void FUN_1012d5f94(void)

{
  func_0x000107c5fadc(0x6e7275746153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d5f98; end: 1012d5f9b; -[_TtC26SCSaturnSettingsEntryPoint28SaturnSettingsViewController defaultProjectNameV2] */

void FUN_1012d5f98(void)

{
  func_0x000107c5fadc(0x6e7275746153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d5f9c; end: 1012d606b;  */

undefined1  [16] FUN_1012d5f9c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef348a0);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef348c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d606c);
  (*pcVar1)();
}



/* Entry: 1012d606c; end: 1012d6077; -[SCSaturnSettingsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d606c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d703b0;
  func_0x000107c61428(param_1 + _DAT_112d703b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d6078; end: 1012d6083; -[SCSaturnSettingsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d703b0;
  func_0x000107c61428(param_1 + _DAT_112d703b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d6084; end: 1012d608f; -[SCSaturnSettingsEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d703b8;
  func_0x000107c61428(param_1 + _DAT_112d703b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d6090; end: 1012d609b; -[SCSaturnSettingsEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d703b8;
  func_0x000107c61428(param_1 + _DAT_112d703b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d609c; end: 1012d60a7; -[SCSaturnSettingsEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d609c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d703c0;
  func_0x000107c61428(param_1 + _DAT_112d703c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d60a8; end: 1012d60b3; -[SCSaturnSettingsEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d60a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d703c0;
  func_0x000107c61428(param_1 + _DAT_112d703c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d60b4; end: 1012d60bf; -[SCSaturnSettingsEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d60b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d703c8;
  func_0x000107c61428(param_1 + _DAT_112d703c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d60c0; end: 1012d60cb; -[SCSaturnSettingsEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d60c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d703c8;
  func_0x000107c61428(param_1 + _DAT_112d703c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d60cc; end: 1012d60d7; -[SCSaturnSettingsEntryPoint saturnExperimentProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d60cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d703d0;
  func_0x000107c61428(param_1 + _DAT_112d703d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d60d8; end: 1012d611b;  */

void FUN_1012d60d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012d611c; end: 1012d6127; -[SCSaturnSettingsEntryPoint setSaturnExperimentProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d703d0;
  func_0x000107c61428(param_1 + _DAT_112d703d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d6128; end: 1012d617b;  */

void FUN_1012d6128(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d617c; end: 1012d6387;  */

/* WARNING: Possible PIC construction at 0x0001012d62cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d62dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d62ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d6354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d6364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d6344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d6368) */
/* WARNING: Removing unreachable block (ram,0x0001012d6358) */
/* WARNING: Removing unreachable block (ram,0x0001012d62f0) */
/* WARNING: Removing unreachable block (ram,0x0001012d62e0) */
/* WARNING: Removing unreachable block (ram,0x0001012d62d0) */
/* WARNING: Removing unreachable block (ram,0x0001012d6348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d617c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5d9b4();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c3ff88();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          func_0x000107c5161c();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar6 = 0;
            FUN_1012d5d04();
            lVar7 = lVar6;
            func_0x000107c610f8();
            *(undefined8 *)(lVar7 + _DAT_112d70328) = 0;
            *(long *)(lVar7 + _DAT_112d70330) = lVar2;
            *(long *)(lVar7 + _DAT_112d70338) = lVar3;
            *(long *)(lVar7 + _DAT_112d70340) = lVar4;
            *(long *)(lVar7 + _DAT_112d70348) = lVar5;
            *(long *)(lVar7 + _DAT_112d70350) = unaff_x20;
            puVar1 = PTR_s_init_1125d9248;
            lStack_60 = lVar7;
            lStack_58 = lVar6;
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_60,puVar1);
            FUN_1012d54ac();
            lVar2 = unaff_x20;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1012d6388; end: 1012d63af; -[SCSaturnSettingsEntryPoint begin] */

void FUN_1012d6388(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012d617c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012d63b0; end: 1012d63f3; -[SCSaturnSettingsEntryPoint end] */

void FUN_1012d63b0(undefined8 param_1)

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



/* Entry: 1012d63f4; end: 1012d66cf;  */

void FUN_1012d63f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53680();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10ced70)) &&
                 (func_0x000107c605b8(0xd000000000000020,0x800000010ef31290,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCSaturnSettingsEntryPoint/SCSaturnSettingsEntryPoint.swift",
                                    0x3b,2,0x3a,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d66d0);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58b94();
            }
            goto LAB_1012d6480;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a368();
        goto LAB_1012d6480;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1012d6480:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012d66d0; end: 1012d677b; -[SCSaturnSettingsEntryPoint setValue:forIvarName:] */

void FUN_1012d66d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012d63f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012d677c; end: 1012d682b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d677c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d703b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d703b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d703c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d703c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d703d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d703d8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012d682c; end: 1012d684b; -[SCSaturnSettingsEntryPoint init] */

void FUN_1012d682c(void)

{
  FUN_1012d677c();
  return;
}



/* Entry: 1012d684c; end: 1012d687f;  */

void FUN_1012d684c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012d6880; end: 1012d68f7; -[SCSaturnSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6880(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d703b0);
  func_0x000107c61610(param_1 + _DAT_112d703b8);
  func_0x000107c61610(param_1 + _DAT_112d703c0);
  func_0x000107c61610(param_1 + _DAT_112d703c8);
  func_0x000107c61610(param_1 + _DAT_112d703d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d703d8));
  return;
}



/* Entry: 1012d68f8; end: 1012d6917;  */

void FUN_1012d68f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4ce0);
  return;
}



/* Entry: 1012d6918; end: 1012d6c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1012d6918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

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
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar12 = param_5;
  if (param_5 == 0) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112d70420);
    func_0x000107c4b8d8();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar13 == 0) {
      return (undefined *)0x0;
    }
    lVar12 = lVar13;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar13);
    if (lVar12 == 0) {
      return (undefined *)0x0;
    }
  }
  lVar13 = *(long *)(unaff_x20 + _DAT_112d70408);
  func_0x000107c61174(param_5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 == 0) {
    func_0x000107c61170(lVar12);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d70410);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4077c(lVar12);
      func_0x000107c4077c(lVar12);
      lVar3 = lVar12;
      FUN_1012d6f90(lVar12,lVar13);
      lVar4 = lVar2;
      FUN_1012d7a58();
      puVar7 = &UNK_11039e6c8;
      puVar5 = puVar7;
      func_0x000107c613fc(&UNK_11039e6c8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_11039e790;
      func_0x000107c613fc(&UNK_11039e790,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = param_3;
      *(undefined8 *)(puVar6 + 0x20) = param_4;
      func_0x000107c613fc(&UNK_11039e6c8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = &UNK_11039e7b8;
      func_0x000107c613fc(&UNK_11039e7b8,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = param_3;
      *(undefined8 *)(puVar8 + 0x20) = param_4;
      *(long *)(puVar8 + 0x28) = lVar12;
      puVar9 = PTR_PTR_1126a6968;
      func_0x000107c610f8(PTR_PTR_1126a6968);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_1012d7c70;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      pcStack_a0 = FUN_100c75f50;
      puStack_98 = &UNK_11039e7d0;
      ppuVar10 = &puStack_b0;
      puStack_88 = puVar6;
      func_0x000107c60bc4(ppuVar10);
      uStack_c0 = 0x1012d7c7c;
      puStack_e0 = puVar1;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_1000f6b44;
      puStack_c8 = &UNK_11039e7f8;
      ppuVar11 = &puStack_e0;
      puStack_b8 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61580(param_4,2);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(lVar12);
      func_0x000107c47100(param_1,param_2,puVar9);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar12);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar13);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(puStack_b8);
      puVar6 = puStack_88;
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      return puVar9;
    }
    func_0x000107c61170(lVar12);
    func_0x000107c615e8(lVar13);
  }
  return (undefined *)0x0;
}



/* Entry: 1012d6c40; end: 1012d6d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6c40(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = param_3;
    (*param_4)();
    lVar1 = _DAT_112d70418;
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_3 + _DAT_112d70418);
      func_0x000107c5194c();
      func_0x000107c61180();
      lVar6 = param_3;
      if (lVar3 == 0) {
        func_0x000103ed7eb8();
        func_0x000107c610f8();
        func_0x000107c61174(lVar2);
        func_0x000107c61434(param_2);
        uVar4 = 0;
        func_0x000103ed7cec(0,0);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x0001005138f4(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_3);
        lVar3 = lVar2;
        func_0x000103ed7578(lVar2,param_1,param_2,uVar4,puVar5,lVar6);
        func_0x000107c42c1c(*(undefined8 *)(param_3 + lVar1));
        lVar6 = lVar2;
        lVar2 = lVar3;
      }
      param_3 = lVar2;
      func_0x000107c61170();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1012d6d98; end: 1012d6ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d6d98(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = param_3;
    (*param_4)();
    lVar1 = _DAT_112d70418;
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_3 + _DAT_112d70418);
      func_0x000107c5194c();
      func_0x000107c61180();
      lVar6 = param_3;
      if (lVar3 == 0) {
        func_0x000107c61174(lVar2);
        func_0x000107c4077c(param_6);
        func_0x000103ed7eb8(0);
        func_0x000107c610f8();
        uVar4 = 0;
        func_0x000103ed7cec(0,0);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x0001005138f4(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_3);
        lVar3 = lVar2;
        func_0x000103ed7824(param_1,param_2,lVar2,uVar4,puVar5,lVar6);
        func_0x000107c42c1c(*(undefined8 *)(param_3 + lVar1));
        lVar6 = lVar2;
        lVar2 = lVar3;
      }
      param_3 = lVar2;
      func_0x000107c61170();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1012d6ef4; end: 1012d6f8f; -[_TtC37CreatePostLocationDataServiceProvider33CreatePostLocationDataServiceImpl locationDependenciesWith:snapCaptureLocation:] */

void FUN_1012d6ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11039e830;
  func_0x000107c613fc(&UNK_11039e830,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  pcVar3 = FUN_1012d7c88;
  FUN_1012d6918(FUN_1012d7c88,puVar1,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 1012d6f90; end: 1012d71ab;  */

undefined * FUN_1012d6f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11039e6c8;
  func_0x000107c613fc(&UNK_11039e6c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11039e6f0;
  func_0x000107c613fc(&UNK_11039e6f0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  pcStack_50 = FUN_1012d79b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_11039e708;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1012d71ac; end: 1012d7463;  */

/* WARNING: Possible PIC construction at 0x0001012d7440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d7444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d71ac(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [16];
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if ((param_1 != 0) && (param_2 == 0)) {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar11 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar10 = param_1;
      if (-1 < (long)param_1) {
        uVar10 = uVar11;
      }
      func_0x000107c60480();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d73b0);
              (*pcVar2)();
            }
            uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar3 = uVar9;
            FUN_10103198c(uVar9,param_1);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d73ac);
            (*pcVar2)();
          }
          func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
          lVar4 = param_4 + 0x10;
          func_0x000107c61618();
          if (lVar4 != 0) break;
          func_0x000107c61170(uVar3);
          uVar9 = uVar9 + 1;
          if (uVar1 == uVar10) goto LAB_1012d73cc;
        }
        func_0x000107c61170();
        puVar5 = PTR_PTR_1126c5040;
        func_0x000107c610f8();
        func_0x000107c453e4();
        ppuStack_90 = &puStack_80;
        uStack_88 = uVar3;
        puStack_80 = puVar5;
        func_0x0001044052b4(FUN_1012d79e8,auStack_a0,FUN_1012d7858,0,0x1012d785c,0);
        func_0x000107c61170(uVar3);
        puVar5 = puStack_80;
        puVar7 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_101039d5c(0,puVar6 + 1,1,puVar8);
        }
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar3 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar9) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_101039d5c(puVar8,uVar9 + 1,1,puVar7);
          uVar3 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar3 + 0x10) = uVar9 + 1;
        *(undefined **)(uVar3 + uVar9 * 8 + 0x20) = puVar5;
        uVar9 = uVar1;
      } while (uVar1 != uVar10);
    }
LAB_1012d73cc:
    puVar5 = puVar8;
    FUN_1012d7464(puVar8);
    func_0x000107c6142c(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar7 = puVar5;
    func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar5);
    func_0x000107c45788(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c4d664(param_3);
    func_0x000107c61170(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1012d7464; end: 1012d7627;  */

undefined * FUN_1012d7464(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d7628);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001012d7a14(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_101031b28(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x0001012d7a14(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1012d7628; end: 1012d76ab;  */

void FUN_1012d7628(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x000104403dd0(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012d76ac; end: 1012d7857;  */

/* WARNING: Possible PIC construction at 0x0001012d7794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d77a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d7810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d77a8) */
/* WARNING: Removing unreachable block (ram,0x0001012d77cc) */
/* WARNING: Removing unreachable block (ram,0x0001012d77dc) */
/* WARNING: Removing unreachable block (ram,0x0001012d7838) */
/* WARNING: Removing unreachable block (ram,0x0001012d77e4) */
/* WARNING: Removing unreachable block (ram,0x0001012d7798) */
/* WARNING: Removing unreachable block (ram,0x0001012d7814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d76ac(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  long in_x5;
  long lVar8;
  long in_stack_00000010;
  
  uVar7 = *(undefined8 *)(in_stack_00000010 + _DAT_113077318);
  uVar4 = ((undefined8 *)(in_stack_00000010 + _DAT_113077318))[1];
  uVar3 = *(undefined8 *)(in_stack_00000010 + _DAT_113077320);
  uVar5 = ((undefined8 *)(in_stack_00000010 + _DAT_113077320))[1];
  uVar1 = 0;
  if (in_x5 != 0) {
    uVar1 = in_x4;
  }
  lVar2 = -0x2000000000000000;
  if (in_x5 != 0) {
    lVar2 = in_x5;
  }
  lVar8 = *(long *)(in_stack_00000010 + _DAT_113077328);
  puVar6 = PTR_PTR_1126c5040;
  func_0x000107c610f8(PTR_PTR_1126c5040);
  func_0x000107c61434(in_x5);
  func_0x000107c5fadc(uVar7,uVar4);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c5fadc(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c494a4((double)lVar8,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1012d7858; end: 1012d785f;  */

void FUN_1012d7858(void)

{
  return;
}



/* Entry: 1012d7860; end: 1012d78bb; -[_TtC37CreatePostLocationDataServiceProvider33CreatePostLocationDataServiceImpl init] */

void FUN_1012d7860(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatePostLocationDataServiceProvider.CreatePostLocationDataServiceImpl",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d788c);
  (*pcVar1)();
}



/* Entry: 1012d78bc; end: 1012d7913; -[_TtC37CreatePostLocationDataServiceProvider33CreatePostLocationDataServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012d78d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d78f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d78dc) */
/* WARNING: Removing unreachable block (ram,0x0001012d78fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d78bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70408));
  return;
}



/* Entry: 1012d7914; end: 1012d7997; -[_TtC37CreatePostLocationDataServiceProvider33CreatePostLocationDataServiceImpl venueEditorScreenDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001012d7950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d796c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d7954) */
/* WARNING: Removing unreachable block (ram,0x0001012d7970) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7914(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012d7998; end: 1012d79b7;  */

void FUN_1012d7998(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4dc0);
  return;
}



/* Entry: 1012d79b8; end: 1012d79e7;  */

void FUN_1012d79b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11039e740;
  func_0x000107c613fc(&UNK_11039e740,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  uStack_50 = 0x1012d79e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1012d7628;
  puStack_58 = &UNK_11039e758;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c43024(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1012d79e8; end: 1012d7a57;  */

void FUN_1012d79e8(void)

{
  FUN_1012d76ac();
  return;
}



/* Entry: 1012d7a58; end: 1012d7c6f;  */

undefined8 FUN_1012d7a58(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
  puVar4 = puVar2;
  func_0x000107c545b8(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c57f3c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef34940);
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010ef34960);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar4);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c4c1b4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return param_1;
}



/* Entry: 1012d7c70; end: 1012d7c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7c70(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    (*pcVar1)();
    lVar2 = _DAT_112d70418;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar3 + _DAT_112d70418);
      func_0x000107c5194c();
      func_0x000107c61180();
      lVar8 = lVar3;
      if (lVar5 == 0) {
        func_0x000103ed7eb8();
        func_0x000107c610f8();
        func_0x000107c61174(lVar4);
        func_0x000107c61434(param_2);
        uVar6 = 0;
        func_0x000103ed7cec(0,0);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x0001005138f4(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar3);
        lVar5 = lVar4;
        func_0x000103ed7578(lVar4,param_1,param_2,uVar6,puVar7,lVar8);
        func_0x000107c42c1c(*(undefined8 *)(lVar3 + lVar2));
        lVar8 = lVar4;
        lVar4 = lVar5;
      }
      lVar3 = lVar4;
      func_0x000107c61170();
      func_0x000107c61170(lVar8);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1012d7c88; end: 1012d7ca7;  */

void FUN_1012d7c88(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1012d7ca8; end: 1012d7cbf;  */

void FUN_1012d7ca8(long param_1,long param_2)

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



/* Entry: 1012d7cc0; end: 1012d7dd3;  */

void FUN_1012d7cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1012d7dd4; end: 1012d7dff;  */

/* WARNING: Possible PIC construction at 0x0001012d7de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d7df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d7de4) */
/* WARNING: Removing unreachable block (ram,0x0001012d7df4) */

void FUN_1012d7dd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1012d7e00; end: 1012d7e5b;  */

void FUN_1012d7e00(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012d7e5c; end: 1012d7edb;  */

void FUN_1012d7e5c(undefined8 param_1)

{
  if (lRam0000000112d70478 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62cf20);
  return;
}



/* Entry: 1012d7edc; end: 1012d7eff;  */

void FUN_1012d7edc(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001012d7d10();
  *param_1 = param_2;
  return;
}



/* Entry: 1012d7f00; end: 1012d7f0b; -[SCCreatePostLocationDataServiceProvider userLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70540;
  func_0x000107c61428(param_1 + _DAT_112d70540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d7f0c; end: 1012d7f17; -[SCCreatePostLocationDataServiceProvider setUserLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70540;
  func_0x000107c61428(param_1 + _DAT_112d70540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d7f18; end: 1012d7f23; -[SCCreatePostLocationDataServiceProvider mapPlacesContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70548;
  func_0x000107c61428(param_1 + _DAT_112d70548,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d7f24; end: 1012d7f2f; -[SCCreatePostLocationDataServiceProvider setMapPlacesContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70548;
  func_0x000107c61428(param_1 + _DAT_112d70548,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d7f30; end: 1012d7f3b; -[SCCreatePostLocationDataServiceProvider composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70550;
  func_0x000107c61428(param_1 + _DAT_112d70550,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d7f3c; end: 1012d7f7f;  */

void FUN_1012d7f3c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012d7f80; end: 1012d7f8b; -[SCCreatePostLocationDataServiceProvider setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70550;
  func_0x000107c61428(param_1 + _DAT_112d70550,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d7f8c; end: 1012d7fdf;  */

void FUN_1012d7f8c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d7fe0; end: 1012d8027; -[SCCreatePostLocationDataServiceProvider venueEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d7fe0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70558;
  func_0x000107c61428(param_1 + _DAT_112d70558,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012d8028; end: 1012d808b; -[SCCreatePostLocationDataServiceProvider setVenueEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d8028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70558;
  func_0x000107c61428(param_1 + _DAT_112d70558,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012d808c; end: 1012d81fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d808c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c5d9e0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5dcb0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4c3b8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3ffd0();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          FUN_1012d7e5c();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d70560);
          *(long *)(unaff_x20 + _DAT_112d70560) = lVar5;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar6);
          func_0x0001012d7d10();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012d81fc; end: 1012d8287; -[SCCreatePostLocationDataServiceProvider provide] */

void FUN_1012d81fc(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1012d808c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CreatePostLocationDataServiceProvider/SCCreatePostLocationDataServiceProvider.swift"
                      ,0x53,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d8288);
  (*pcVar1)();
}



/* Entry: 1012d8288; end: 1012d82bb; -[SCCreatePostLocationDataServiceProvider __safeProvide] */

void FUN_1012d8288(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012d808c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012d82bc; end: 1012d82ff; -[SCCreatePostLocationDataServiceProvider end] */

void FUN_1012d82bc(undefined8 param_1)

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



/* Entry: 1012d8300; end: 1012d856f;  */

void FUN_1012d8300(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10dedc0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010ef21240,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10cb570)) ||
         (func_0x000107c605b8(0xd000000000000018,0x800000010ef34a90,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56270();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c536a8();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10dacd0)) &&
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef25330,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CreatePostLocationDataServiceProvider/SCCreatePostLocationDataServiceProvider.swift"
                                ,0x53,2,0x38,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d8570);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a4c4();
        }
      }
      goto LAB_1012d8394;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a38c();
LAB_1012d8394:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012d8570; end: 1012d861b; -[SCCreatePostLocationDataServiceProvider setValue:forIvarName:] */

void FUN_1012d8570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012d8300(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012d861c; end: 1012d86af; -[SCCreatePostLocationDataServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d861c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d70540,0);
  func_0x000107c61614(param_1 + _DAT_112d70548,0);
  func_0x000107c61614(param_1 + _DAT_112d70550,0);
  *(undefined8 *)(param_1 + _DAT_112d70558) = 0;
  *(undefined8 *)(param_1 + _DAT_112d70560) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012d86b0; end: 1012d86e3;  */

void FUN_1012d86b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012d86e4; end: 1012d874b; -[SCCreatePostLocationDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d86e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d70540);
  func_0x000107c61610(param_1 + _DAT_112d70548);
  func_0x000107c61610(param_1 + _DAT_112d70550);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70558));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d70560));
  return;
}



/* Entry: 1012d874c; end: 1012d876b;  */

void FUN_1012d874c(void)

{
  func_0x000107c61168(&PTR_PTR_112d705a8);
  return;
}



/* Entry: 1012d876c; end: 1012d896f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1012d876c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d70620);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    pcVar3 = (code *)PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    pcVar4 = pcVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    puVar2 = &UNK_11039e918;
    func_0x000107c613fc(&UNK_11039e918,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x0001000285a8(0x112d6c540,&UNK_10d92f3c0);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar1);
    pcVar4 = FUN_1012d8f60;
    func_0x0001000b64ac(FUN_1012d8f60,puVar2);
    pcVar3 = pcVar4;
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    pcVar4 = pcVar3;
    func_0x000107c5cb24(pcVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(pcVar3);
  return pcVar4;
}



/* Entry: 1012d8970; end: 1012d8d87;  */

void FUN_1012d8970(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1012d8f94(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d8b8c);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar11 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar7 = puStack_68;
        uVar4 = *puVar11;
        func_0x000107c61174();
        uVar5 = uVar4;
        FUN_1012d9e60();
        func_0x000107c61170(uVar4);
        uVar10 = *(ulong *)(puVar7 + 0x10);
        puStack_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
          FUN_1012d8f94(1 < *(ulong *)(puVar7 + 0x18),uVar10 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
        *(undefined8 *)(puStack_68 + uVar10 * 8 + 0x20) = uVar5;
        uVar9 = uVar9 - 1;
        puVar7 = puStack_68;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar10 = 0;
      do {
        puVar7 = puStack_68;
        uVar2 = uVar10;
        FUN_1012d9150(uVar10,param_1,&PTR_PTR_1126d4dd8,0x112d4c900);
        uVar3 = uVar2;
        FUN_1012d9e60();
        func_0x000107c615e8(uVar2);
        uVar2 = *(ulong *)(puVar7 + 0x10);
        puStack_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          FUN_1012d8f94(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
        *(ulong *)(puStack_68 + uVar2 * 8 + 0x20) = uVar3;
        puVar7 = puStack_68;
      } while (uVar9 != uVar10);
    }
  }
  puVar6 = puVar7;
  func_0x0001012d8b8c(puVar7);
  func_0x000107c6142c(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar8 = puVar6;
  func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar6);
  func_0x000107c45788();
  func_0x000107c61170(puVar8);
  puStack_68 = puVar7;
  func_0x000100087f6c(&puStack_68);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1012d8d88; end: 1012d8e73; -[_TtC34ComposerMemberRolesServiceProvider42ComposerMemberRolesManagedProfilesProvider getManagedProfiles] */

void FUN_1012d8d88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012d876c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012d8e74; end: 1012d8ea7; -[_TtC34ComposerMemberRolesServiceProvider42ComposerMemberRolesManagedProfilesProvider isFriendsOnlyProfile] */

void FUN_1012d8e74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001012d8dbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012d8ea8; end: 1012d8f07; -[_TtC34ComposerMemberRolesServiceProvider42ComposerMemberRolesManagedProfilesProvider init] */

void FUN_1012d8ea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerMemberRolesServiceProvider.ComposerMemberRolesManagedProfilesProvider"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d8ed4);
  (*pcVar1)();
}



/* Entry: 1012d8f08; end: 1012d8f3f; -[_TtC34ComposerMemberRolesServiceProvider42ComposerMemberRolesManagedProfilesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012d8f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d8f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d8f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70620));
  return;
}



/* Entry: 1012d8f40; end: 1012d8f5f;  */

void FUN_1012d8f40(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4f00);
  return;
}



/* Entry: 1012d8f60; end: 1012d8f93;  */

void FUN_1012d8f60(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar1 = &puStack_60;
  uStack_40 = 0x1012d8f68;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101099890;
  puStack_48 = &UNK_11039e930;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar3 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar3);
  func_0x000107c4c24c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  puVar2 = &UNK_11039e968;
  func_0x000107c613fc(&UNK_11039e968,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uVar3 = 0;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0x1012d8f8c,puVar2,uVar3);
  return;
}



/* Entry: 1012d8f94; end: 1012d8faf;  */

void FUN_1012d8f94(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1012d8fb0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1012d8fb0; end: 1012d90e3;  */

undefined * FUN_1012d8fb0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d90e4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1012d90e4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1012d930c(0,0x112d70658,&PTR_PTR_1126c5088);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1012d90e4; end: 1012d914f;  */

void FUN_1012d90e4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1012d930c(0,0x112d70658,&PTR_PTR_1126c5088);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d70660;
  plVar5 = (long *)&UNK_10d931a40;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1012d9150; end: 1012d930b;  */

ulong FUN_1012d9150(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d9234);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d9238);
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
  FUN_1012d930c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d930c);
  (*pcVar2)();
}



/* Entry: 1012d930c; end: 1012d934b;  */

void FUN_1012d930c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012d934c; end: 1012d9593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012d934c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112d70668);
  puVar2 = puVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010451338c();
    puVar4 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar2 = puVar4;
      func_0x000107c61150(puVar4,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = puVar4;
        func_0x000107c5cc6c(puVar4);
        func_0x000107c61180();
        func_0x000107c615e8(puVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d70690);
        *(undefined **)(unaff_x20 + _DAT_112d70690) = puVar1;
        func_0x000107c61174(puVar1);
        func_0x000107c61170(uVar6);
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d70670);
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        uVar6 = 0;
        if (param_3 != 0) {
          func_0x000107c5fadc(param_2,param_3);
          uVar6 = param_2;
        }
        func_0x000107c3edbc(uVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c42c1c(puVar5);
        func_0x000107c61170(uVar3);
        goto LAB_1012d9448;
      }
      func_0x000107c615e8(puVar4);
    }
  }
  else {
    func_0x000107c61170();
  }
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010d931a30);
  uVar6 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef34b70);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  puVar2 = puVar5;
  func_0x000107c5ed2c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c43b70(puVar1);
LAB_1012d9448:
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1012d9594; end: 1012d9613; -[_TtC34ComposerMemberRolesServiceProvider28ComposerMemberRolesPresenter launchMemberRolesTrayWithUseSelector:selectedBusinessId:] */

void FUN_1012d9594(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1012d934c(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1012d9614; end: 1012d9673; -[_TtC34ComposerMemberRolesServiceProvider28ComposerMemberRolesPresenter init] */

void FUN_1012d9614(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerMemberRolesServiceProvider.ComposerMemberRolesPresenter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d9640);
  (*pcVar1)();
}



/* Entry: 1012d9674; end: 1012d96db; -[_TtC34ComposerMemberRolesServiceProvider28ComposerMemberRolesPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012d9690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d96b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d9694) */
/* WARNING: Removing unreachable block (ram,0x0001012d96b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d9674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70668));
  return;
}



/* Entry: 1012d96dc; end: 1012d96fb;  */

void FUN_1012d96dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4fc8);
  return;
}



/* Entry: 1012d96fc; end: 1012d986f;  */

/* WARNING: Possible PIC construction at 0x0001012d9734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d9784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d9824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d9840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d9854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d9844) */
/* WARNING: Removing unreachable block (ram,0x0001012d9828) */
/* WARNING: Removing unreachable block (ram,0x0001012d9738) */
/* WARNING: Removing unreachable block (ram,0x0001012d9858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d96fc(long param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_50 [16];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d70668);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112d70690) == 0) {
        return;
      }
      func_0x000107c61174();
      func_0x000107c5fadc(0xd00000000000001c,0x800000010d931a30);
      func_0x000107c5fadc(0xd000000000000028,0x800000010ef34b00);
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000102409660(FUN_1012d9b48,auStack_50,FUN_1012d9b7c,auStack_70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012d9870; end: 1012d99c7;  */

/* WARNING: Possible PIC construction at 0x0001012d9918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d994c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d996c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d99a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d9950) */
/* WARNING: Removing unreachable block (ram,0x0001012d991c) */
/* WARNING: Removing unreachable block (ram,0x0001012d9970) */
/* WARNING: Removing unreachable block (ram,0x0001012d99a4) */
/* WARNING: Removing unreachable block (ram,0x0001012d998c) */

void FUN_1012d9870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 in_stack_00000000;
  
  func_0x000108f472d8(in_stack_00000000);
  puVar1 = PTR_PTR_1126c5088;
  func_0x000107c610f8(PTR_PTR_1126c5088);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c465f8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


