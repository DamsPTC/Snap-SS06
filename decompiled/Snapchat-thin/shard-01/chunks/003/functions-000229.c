/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ef3688; end: 100ef36af; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController viewDidLoad] */

void FUN_100ef3688(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ef2764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef36b0; end: 100ef374f; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController viewWillAppear:] */

void FUN_100ef36b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c51d98();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef3750; end: 100ef38ef; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController viewDidAppear:] */

void FUN_100ef3750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  uVar1 = *(undefined4 *)PTR__UIAccessibilityScreenChangedNotification_110345908;
  uVar3 = param_1;
  func_0x000107c5de64(param_1);
  func_0x000107c61180();
  func_0x000107c60b98(uVar1,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef38f0; end: 100ef3a5f;  */

void FUN_100ef38f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000100ef22c4(param_3,param_4);
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c59e1c(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100ef3a60; end: 100ef3ad3;  */

void FUN_100ef3a60(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *param_1;
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_100ef3ad4(uVar2,lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 100ef3ad4; end: 100ef3cdf;  */

void FUN_100ef3ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar3 = 0x112d360a8;
  FUN_100ef41f0(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  lVar4 = lVar3;
  func_0x000108b9a8c4();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar5 = &UNK_110366860;
    func_0x000107c613fc(&UNK_110366860,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_70 = FUN_100ef4268;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de205c;
    puStack_78 = &UNK_1103668a0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c6157c(puVar5);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    puVar1 = puStack_68;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar1);
    *(undefined **)(lVar3 + 0x20) = puVar7;
    puVar5 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c5fadc(param_1,param_2);
    uVar8 = 0;
    FUN_100ef4278(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c4656c(puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    func_0x000107c59bc8(puVar5);
    func_0x000107c4f018();
    func_0x000107c61170(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ef3ce0);
  (*pcVar2)();
}



/* Entry: 100ef3ce0; end: 100ef3e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef3ce0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61174(lVar2);
      lVar1 = param_2;
      func_0x00010430dc6c(param_2,lVar2,0);
      func_0x000107c42c1c(*(undefined8 *)(param_2 + _DAT_112d49e20));
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100ef3e70; end: 100ef3ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef3e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d49e30);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_48 = 0;
    uStack_50 = 2;
    uStack_40 = 0x80;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100ef3ef8; end: 100ef3f47; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController handleVerifyButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef3ef8(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x80;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef3f48; end: 100ef3f9f; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController handleLogOutButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef3f48(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 0x80;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef3fa0; end: 100ef3feb; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController initWithNibName:bundle:] */

void FUN_100ef3fa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeVerificationFeature.DeclaredAgeIneligibleViewController",0x42,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef3fcc);
  (*pcVar1)();
}



/* Entry: 100ef3fec; end: 100ef406b; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController didFinishRequestWithLogout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef3fec(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d49e20);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_48 = 0;
  uStack_50 = 1;
  uStack_40 = 0x40;
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef406c; end: 100ef40e3; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController didFailRequestWithLogout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef406c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d49e20);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x40;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef40e4; end: 100ef410b; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController backgroundExitBehavior] */

void FUN_100ef40e4(void)

{
  func_0x000107c61168(PTR_PTR_1126aecb0);
  func_0x000107c4d60c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef410c; end: 100ef413f;  */

void FUN_100ef410c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef35e4);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c61170();
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
        func_0x000107c5a9c4();
        func_0x000107c61180();
        func_0x000107c51d98();
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 100ef4140; end: 100ef41df;  */

void FUN_100ef4140(void)

{
  FUN_100ef38f0();
  return;
}



/* Entry: 100ef41e0; end: 100ef41ef;  */

void FUN_100ef41e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    uVar3 = *param_1;
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_100ef3ad4(uVar3,lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100ef41f0; end: 100ef4267;  */

void FUN_100ef41f0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100ef4278(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100ef4268; end: 100ef4277;  */

void FUN_100ef4268(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_110366860;
  func_0x000107c613fc(&UNK_110366860,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  uStack_58 = 0x100ef4270;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103668c8;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_50);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 100ef4278; end: 100ef42b7;  */

void FUN_100ef4278(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ef42b8; end: 100ef43e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef42b8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d49e30;
  uVar3 = 0x112d49eb0;
  func_0x0001000285a8(0x112d49eb0,&UNK_10d910778);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d49e38;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49e80) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DeclaredAgeVerificationFeature/DeclaredAgeIneligibleViewController.swift",
                      0x48,2,0x79,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ef43e4);
  (*pcVar2)();
}



/* Entry: 100ef43e4; end: 100ef43f3;  */

void FUN_100ef43e4(long param_1,long param_2)

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



/* Entry: 100ef43f4; end: 100ef44cf;  */

/* WARNING: Possible PIC construction at 0x000100ef4438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef443c) */

void FUN_100ef43f4(void)

{
  char *pcVar1;
  
  pcVar1 = "run(state:)";
  func_0x0001000c10c0("run(state:)");
  func_0x000107c61180();
  func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
  return;
}



/* Entry: 100ef44d0; end: 100ef453f;  */

void FUN_100ef44d0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100ef4540(uVar2,uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100ef4540; end: 100ef473b;  */

/* WARNING: Possible PIC construction at 0x000100ef4b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef4ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef4674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef4970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef4cac) */
/* WARNING: Removing unreachable block (ram,0x000100ef4b74) */
/* WARNING: Removing unreachable block (ram,0x000100ef4974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4540(undefined8 ***param_1,byte param_2)

{
  undefined8 ***pppuVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  char *pcVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ***pppuVar17;
  code *pcVar18;
  undefined8 ***pppuVar19;
  undefined8 *puVar20;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d49f00) + _DAT_113083868);
      func_0x00010372e4b4(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar12);
      func_0x00010372e2d8();
      func_0x00010372e17c(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      lVar13 = unaff_x20;
      func_0x00010372dec8();
      lVar4 = _DAT_112f8e428;
      func_0x000107c61428(lVar13 + _DAT_112f8e428,&stack0xffffffffffffffa8,1,0);
      func_0x000107c61604(lVar13 + lVar4,param_1);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d49ed0));
    }
    else {
      if (param_2 != 1) {
        return;
      }
      puVar20 = (undefined8 *)(unaff_x20 + _DAT_112d49ec8);
      pppuVar1 = (undefined8 ***)*puVar20;
      uVar12 = puVar20[1];
      uStack_94 = (uint)*(byte *)(puVar20 + 2);
      pppuVar14 = *(undefined8 ****)(unaff_x20 + _DAT_112d49ef0);
      lVar13 = unaff_x20 + _DAT_112d49ef8;
      func_0x000107c61618(lVar13);
      pppuVar19 = *(undefined8 ****)(unaff_x20 + _DAT_112d49f08);
      pppuVar17 = *(undefined8 ****)(unaff_x20 + _DAT_112d49f10);
      ppppuVar11 = (undefined8 ****)0x0;
      FUN_100ef0d30();
      ppppuVar5 = ppppuVar11;
      func_0x000107c613fc();
      func_0x000107c61614(ppppuVar5 + 0xc,0);
      ppppuVar5[10] = param_1;
      ppppuVar5[0xb] = pppuVar14;
      func_0x000107c61604(ppppuVar5 + 0xc,lVar13);
      ppppuVar5[0xd] = pppuVar19;
      ppppuVar5[0xe] = pppuVar17;
      auStack_80[0] = (undefined1)uStack_94;
      pppuStack_78 = (undefined8 ***)0x0;
      ppuStack_70 = (undefined **)0x0;
      uStack_68 = 3;
      pppuStack_90 = pppuVar1;
      uStack_88 = uVar12;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(pppuVar14);
      func_0x000107c61174(pppuVar19);
      func_0x000107c6157c(pppuVar17);
      ppppuVar5 = &pppuStack_90;
      func_0x000103dbf4dc();
      func_0x000107c6157c();
      FUN_100eee2f0(0);
      func_0x000107c61574(ppppuVar5);
      func_0x000107c615e8(lVar13);
      lVar13 = *(long *)(unaff_x20 + _DAT_112d49ee0);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d49ee8);
      ppuStack_70 = &PTR_DAT_110366808;
      uVar12 = 0;
      pppuStack_90 = ppppuVar5;
      pppuStack_78 = ppppuVar11;
      func_0x000100ef3fcc(0);
      func_0x000107c610f8();
      func_0x0001000c6518(&pppuStack_90,ppppuVar11);
      (*(code *)PTR____chkstk_darwin_11034bd40)(ppppuVar11[-1][8]);
      puVar20 = (undefined8 *)((long)&uStack_a0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar20);
      uVar15 = *puVar20;
      func_0x000107c6157c(ppppuVar5);
      func_0x000107c61174(lVar13);
      func_0x000107c61174(uVar16);
      FUN_100ef52c4(uVar15,lVar13,uVar16,uVar12);
    }
  }
  else if (param_2 == 2) {
    lVar13 = *(long *)(unaff_x20 + _DAT_112d49eb8);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d49f08);
    func_0x0001040640a4(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0(lVar13);
    func_0x000107c61174(uVar12);
    func_0x000100eedebc(param_1,2);
    func_0x000104063d68(lVar13);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d49ed8));
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if (param_1 != (undefined8 ***)0x1) {
      return;
    }
    puVar20 = (undefined8 *)(unaff_x20 + _DAT_112d49ec8);
    pppuVar1 = (undefined8 ***)*puVar20;
    ppuVar2 = (undefined **)puVar20[1];
    uVar3 = *(undefined1 *)(puVar20 + 2);
    lVar13 = 0;
    func_0x000100eee604();
    func_0x000107c613fc();
    uStack_67 = 0;
    ppppuVar5 = &pppuStack_78;
    pppuStack_78 = pppuVar1;
    ppuStack_70 = ppuVar2;
    uStack_68 = uVar3;
    func_0x000103dbf4dc();
    uVar12 = 0;
    pppuStack_78 = ppppuVar5;
    FUN_100ef06c4(0);
    func_0x000107c610f8();
    func_0x0001000c6518(&pppuStack_78,lVar13);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    (**(code **)(extraout_x12 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar13 = *(long *)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c6157c(ppppuVar5);
    func_0x000100ef5164(lVar13,uVar12);
    func_0x0001000834e4(&pppuStack_78);
    uVar12 = *(undefined8 *)(lVar13 + _DAT_112d49bf0);
    func_0x000107c6157c(ppppuVar5);
    func_0x000107c6157c(uVar12);
    func_0x000103dbf524();
    func_0x000107c61574(uVar12);
    func_0x000103dbf46c();
    func_0x000107c61574(ppppuVar5);
    pcVar6 = "showConsentScreen()";
    func_0x0001000c10c0();
    func_0x000107c61180();
    plVar7 = (long *)pcVar6;
    func_0x000100471e0c();
    func_0x000107c61574(uVar12);
    func_0x000107c615e8(pcVar6);
    puVar8 = &UNK_110366910;
    func_0x000107c613fc(&UNK_110366910,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    puVar9 = &UNK_110366938;
    func_0x000107c613fc(&UNK_110366938,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(long *)(puVar9 + 0x18) = lVar13;
    pcVar18 = *(code **)(*plVar7 + 0x60);
    func_0x000107c61174(lVar13);
    pcVar10 = FUN_100ef52bc;
    puVar8 = puVar9;
    (*pcVar18)(FUN_100ef52bc);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar9);
    pcVar18 = pcVar10;
    func_0x000107c614f0(pcVar10);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d49f18),pcVar18,puVar8);
    func_0x000107c615e8(pcVar10);
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d49eb8));
    func_0x000107c61574(ppppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 100ef473c; end: 100ef498f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef473c(void)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar12;
  long lStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  long lStack_60;
  undefined **ppuStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d49ec8);
  pppuVar2 = (undefined8 ***)*puVar1;
  uVar6 = puVar1[1];
  uVar3 = *(undefined1 *)(puVar1 + 2);
  lVar4 = 0;
  func_0x000100eee604();
  func_0x000107c613fc();
  uStack_67 = 0;
  ppppuVar5 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  uStack_70 = uVar6;
  uStack_68 = uVar3;
  func_0x000103dbf4dc();
  ppuStack_58 = &PTR_DAT_110366590;
  uVar6 = 0;
  pppuStack_78 = ppppuVar5;
  lStack_60 = lVar4;
  FUN_100ef06c4(0);
  func_0x000107c610f8();
  func_0x0001000c6518(&pppuStack_78,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar8 = (long *)((long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar8);
  lVar4 = *plVar8;
  func_0x000107c6157c(ppppuVar5);
  func_0x000100ef5164(lVar4,uVar6);
  func_0x0001000834e4(&pppuStack_78);
  uVar6 = *(undefined8 *)(lVar4 + _DAT_112d49bf0);
  func_0x000107c6157c(ppppuVar5);
  func_0x000107c6157c(uVar6);
  func_0x000103dbf524();
  func_0x000107c61574(uVar6);
  func_0x000103dbf46c();
  func_0x000107c61574(ppppuVar5);
  pcVar7 = "showConsentScreen()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar8 = (long *)pcVar7;
  func_0x000100471e0c();
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(pcVar7);
  puVar9 = &UNK_110366910;
  func_0x000107c613fc(&UNK_110366910,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = &UNK_110366938;
  func_0x000107c613fc(&UNK_110366938,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar9;
  *(long *)(puVar10 + 0x18) = lVar4;
  pcVar12 = *(code **)(*plVar8 + 0x60);
  func_0x000107c61174(lVar4);
  pcVar11 = FUN_100ef52bc;
  puVar9 = puVar10;
  (*pcVar12)(FUN_100ef52bc);
  func_0x000107c61574(plVar8);
  func_0x000107c61574(puVar10);
  pcVar12 = pcVar11;
  func_0x000107c614f0(pcVar11);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d49f18),pcVar12,puVar9);
  func_0x000107c615e8(pcVar11);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d49eb8));
  func_0x000107c61574(ppppuVar5);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 100ef4990; end: 100ef4ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4990(undefined8 param_1)

{
  undefined8 *puVar1;
  long ***ppplVar2;
  long lVar3;
  long lVar4;
  long ****pppplVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long **pplVar16;
  undefined8 uVar17;
  long lStack_a0;
  uint uStack_94;
  long ***ppplStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d49ec8);
  ppplVar2 = (long ***)*puVar1;
  uVar6 = puVar1[1];
  uStack_94 = (uint)*(byte *)(puVar1 + 2);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d49ef0);
  lVar14 = unaff_x20 + _DAT_112d49ef8;
  func_0x000107c61618(lVar14);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d49f08);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d49f10);
  lVar3 = 0;
  FUN_100ef0d30();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61614(lVar4 + 0x60,0);
  *(undefined8 *)(lVar4 + 0x50) = param_1;
  *(undefined8 *)(lVar4 + 0x58) = uVar13;
  func_0x000107c61604(lVar4 + 0x60,lVar14);
  *(undefined8 *)(lVar4 + 0x68) = uVar17;
  *(undefined8 *)(lVar4 + 0x70) = uVar15;
  uStack_80 = (undefined1)uStack_94;
  lStack_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 3;
  ppplStack_90 = ppplVar2;
  uStack_88 = uVar6;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar13);
  func_0x000107c61174(uVar17);
  func_0x000107c6157c(uVar15);
  pppplVar5 = &ppplStack_90;
  func_0x000103dbf4dc();
  func_0x000107c6157c();
  FUN_100eee2f0(0);
  func_0x000107c61574(pppplVar5);
  func_0x000107c615e8(lVar14);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d49ee0);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d49ee8);
  ppuStack_70 = &PTR_DAT_110366808;
  uVar6 = 0;
  ppplStack_90 = (long ***)pppplVar5;
  lStack_78 = lVar3;
  func_0x000100ef3fcc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(&ppplStack_90,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar8 = (long *)((long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar8);
  lVar14 = *plVar8;
  func_0x000107c6157c(pppplVar5);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar15);
  FUN_100ef52c4(lVar14,uVar13,uVar15,uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x0001000834e4(&ppplStack_90);
  uVar6 = *(undefined8 *)(lVar14 + _DAT_112d49e30);
  pplVar16 = (*pppplVar5)[0x15];
  func_0x000107c6157c(pppplVar5);
  func_0x000107c6157c(uVar6);
  (*(code *)pplVar16)();
  func_0x000107c61574(uVar6);
  (*(code *)(*pppplVar5)[0x13])();
  func_0x000107c61574(pppplVar5);
  pcVar7 = "showIneligibleScreen(challenge:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar8 = (long *)pcVar7;
  func_0x000100471e0c();
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(pcVar7);
  puVar9 = &UNK_110366910;
  func_0x000107c613fc(&UNK_110366910,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  pcVar10 = FUN_100ef5464;
  puVar12 = puVar9;
  (**(code **)(*plVar8 + 0x60))(FUN_100ef5464);
  func_0x000107c61574(plVar8);
  func_0x000107c61574(puVar9);
  pcVar11 = pcVar10;
  func_0x000107c614f0(pcVar10);
  (**(code **)(puVar12 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d49f18),pcVar11,puVar12);
  func_0x000107c615e8(pcVar10);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d49eb8));
  func_0x000107c61574(pppplVar5);
  func_0x000107c61170(lVar14);
  return;
}



/* Entry: 100ef4ccc; end: 100ef4d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4ccc(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(param_1 + 0x11);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar1 == '\x01') {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      pcVar2 = *(code **)(**(long **)(param_2 + _DAT_112d49ec0) + 0xb0);
      uStack_68 = param_3;
      func_0x000107c61174(param_3);
      (*pcVar2)(&uStack_68);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ef4d6c; end: 100ef4e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4d6c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  ulong auStack_78 [4];
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  cVar3 = *(char *)(param_1 + 0x28);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar3 == '\x01') {
      auStack_78[0] = 5;
      if ((uVar1 & 1) == 0) {
        auStack_78[0] = 0;
      }
      plVar4 = *(long **)(param_2 + _DAT_112d49ec0);
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      auStack_78[3] = 0x8000000000000000;
      pcVar5 = *(code **)(*plVar4 + 0xb0);
      func_0x000107c6157c(plVar4);
      (*pcVar5)(auStack_78);
      func_0x000107c61574(plVar4);
    }
    else if (cVar3 == '\0') {
      func_0x000107c41864(*(undefined8 *)(param_2 + _DAT_112d49eb8));
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      auStack_78[3] = 0x6000000000000000;
      pcVar5 = *(code **)(**(long **)(param_2 + _DAT_112d49ec0) + 0xb0);
      auStack_78[0] = uVar1;
      func_0x000107c61174(uVar1);
      (*pcVar5)(auStack_78);
      func_0x000107c61170(param_2);
      func_0x000100ef1058(uVar1,uVar2,0);
      return;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ef4e8c; end: 100ef4eeb; -[_TtC30DeclaredAgeVerificationFeature29DeclaredAgeVerificationRouter init] */

void FUN_100ef4e8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeVerificationFeature.DeclaredAgeVerificationRouter",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef4eb8);
  (*pcVar1)();
}



/* Entry: 100ef4eec; end: 100ef4fc3; -[_TtC30DeclaredAgeVerificationFeature29DeclaredAgeVerificationRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ef4f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef4f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef4fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef4f6c) */
/* WARNING: Removing unreachable block (ram,0x000100ef4f1c) */
/* WARNING: Removing unreachable block (ram,0x000100ef4fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4eec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d49eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d49ec0));
  return;
}



/* Entry: 100ef4fc4; end: 100ef4fe3;  */

void FUN_100ef4fc4(void)

{
  func_0x000107c61168(&PTR_PTR_11279ef70);
  return;
}



/* Entry: 100ef4fe4; end: 100ef502f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef4fe4(undefined8 param_1)

{
  long *unaff_x20;
  
  (**(code **)(**(long **)(*unaff_x20 + _DAT_112d49ec0) + 0x98))();
  FUN_100ef43f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100ef5030; end: 100ef50df; -[_TtC30DeclaredAgeVerificationFeature29DeclaredAgeVerificationRouter declaredAgeCompletedWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef5030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d49ed0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x2000000000000000;
  pcVar2 = *(code **)(**(long **)(param_1 + _DAT_112d49ec0) + 0xb0);
  uStack_50 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar2)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100ef50e0; end: 100ef52bb; -[_TtC30DeclaredAgeVerificationFeature29DeclaredAgeVerificationRouter ageVerificationScopeDidCompleteWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef50e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d49ed8);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  uStack_50 = param_3;
  (**(code **)(**(long **)(param_1 + _DAT_112d49ec0) + 0xb0))(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef52bc; end: 100ef52c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef52bc(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  cVar2 = *(char *)(param_1 + 0x11);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (cVar2 == '\x01') {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      pcVar4 = *(code **)(**(long **)(lVar3 + _DAT_112d49ec0) + 0xb0);
      uStack_68 = uVar1;
      func_0x000107c61174(uVar1);
      (*pcVar4)(&uStack_68);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ef52c4; end: 100ef5463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ef52c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  uVar4 = 0;
  FUN_100ef0d30();
  lVar2 = _DAT_112d49e30;
  ppuStack_48 = &PTR_DAT_110366808;
  uVar5 = 0x112d49eb0;
  auStack_68[0] = param_1;
  uStack_50 = uVar4;
  func_0x0001000285a8(0x112d49eb0,&UNK_10d910778);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar2) = uVar5;
  lVar2 = _DAT_112d49e38;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + lVar2) = uVar5;
  *(undefined8 *)(param_4 + _DAT_112d49e40) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e48) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e50) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e58) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e60) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e68) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e70) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e78) = 0;
  *(undefined8 *)(param_4 + _DAT_112d49e80) = 0;
  FUN_100ef546c(auStack_68,param_4 + _DAT_112d49e18);
  *(undefined8 *)(param_4 + _DAT_112d49e20) = param_2;
  *(undefined8 *)(param_4 + _DAT_112d49e28) = param_3;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_78 = param_4;
  lStack_70 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar1,0,0);
  func_0x000107c5676c();
  func_0x0001000834e4(auStack_68);
  return plVar6;
}



/* Entry: 100ef5464; end: 100ef546b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef5464(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  code *pcVar6;
  ulong auStack_78 [4];
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  cVar3 = *(char *)(param_1 + 0x28);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (cVar3 == '\x01') {
      auStack_78[0] = 5;
      if ((uVar1 & 1) == 0) {
        auStack_78[0] = 0;
      }
      plVar5 = *(long **)(lVar4 + _DAT_112d49ec0);
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      auStack_78[3] = 0x8000000000000000;
      pcVar6 = *(code **)(*plVar5 + 0xb0);
      func_0x000107c6157c(plVar5);
      (*pcVar6)(auStack_78);
      func_0x000107c61574(plVar5);
    }
    else if (cVar3 == '\0') {
      func_0x000107c41864(*(undefined8 *)(lVar4 + _DAT_112d49eb8));
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      auStack_78[3] = 0x6000000000000000;
      pcVar6 = *(code **)(**(long **)(lVar4 + _DAT_112d49ec0) + 0xb0);
      auStack_78[0] = uVar1;
      func_0x000107c61174(uVar1);
      (*pcVar6)(auStack_78);
      func_0x000107c61170(lVar4);
      func_0x000100ef1058(uVar1,uVar2,0);
      return;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ef546c; end: 100ef54af;  */

long FUN_100ef546c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ef54b0; end: 100ef555f;  */

void FUN_100ef54b0(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_100ef4540(uVar3,uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100ef5560; end: 100ef57d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_100ef5560(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cStack_88;
  undefined7 uStack_87;
  long lStack_68;
  
  func_0x000100083b20(&cStack_88);
  if (cStack_88 == '\x01') {
    func_0x0001000285a8(0x112d4a0b8,&UNK_10d9108b8);
    func_0x000107c613fc();
    uVar4 = 1;
    func_0x00010008747c();
    func_0x000100083b20(&cStack_88);
    func_0x0001000a8868();
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_1130525a8);
    func_0x000103ff5678();
    if (*(ulong *)(param_1 + _DAT_112f8e4c0) < 0xd) {
      uVar9 = (&UNK_10d9108f2)[*(ulong *)(param_1 + _DAT_112f8e4c0)];
    }
    else {
      uVar9 = 3;
    }
    uVar11 = *(undefined8 *)(param_1 + _DAT_112f8e4c8);
    uVar12 = *(undefined8 *)(param_1 + _DAT_112f8e4d0);
    uVar3 = *(undefined1 *)(param_1 + _DAT_112f8e4d8);
    pcVar10 = *(code **)(lStack_68 + 0x10);
    uVar1 = *(undefined1 *)((undefined8 *)(param_1 + _DAT_112f8e4d0) + 1);
    uVar2 = *(undefined1 *)((undefined8 *)(param_1 + _DAT_112f8e4c8) + 1);
    func_0x000107c6157c(uVar4);
    (*pcVar10)(0,0,uVar5,uVar9,uVar11,uVar2,uVar12,uVar1,uVar3);
    func_0x000107c6142c(uVar5);
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(&cStack_88);
    uVar5 = 1;
    func_0x00010061b458(1);
    func_0x000100083b20(&cStack_88);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000104883b8c(CONCAT71(uStack_87,cStack_88),uVar11);
    func_0x000107c61574(uVar5);
    puVar7 = &UNK_110366a78;
    func_0x000107c613fc(&UNK_110366a78,0x18,7);
    *(long *)(puVar7 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    pcVar10 = FUN_100ef5fa0;
    func_0x0001000bfde0(FUN_100ef5fa0,puVar7,&UNK_1103669d8);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(puVar7);
    pcVar8 = "reactToDeclaredAgeComplete(_:)";
    func_0x0001000c10c0("reactToDeclaredAgeComplete(_:)");
    func_0x000107c61180();
    pcVar6 = pcVar8;
    func_0x000100471e0c();
    func_0x000107c61574(uVar4);
    func_0x000107c61574(pcVar10);
    func_0x000107c615e8(pcVar8);
  }
  else {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}



/* Entry: 100ef57d8; end: 100ef584b;  */

void FUN_100ef57d8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(char *)((long)param_2 + 0x11) == '\x01') {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 3;
  }
  else {
    uVar2 = *param_2;
    uVar1 = param_2[1];
    uVar3 = (ulong)*(byte *)(param_2 + 2);
    FUN_100ef5abc(uVar2,uVar1);
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = param_3 | 0x4000000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100ef584c; end: 100ef5897;  */

/* WARNING: Possible PIC construction at 0x000100ef5878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef587c) */

void FUN_100ef584c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100ef5898; end: 100ef58fb;  */

long FUN_100ef5898(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 100ef58fc; end: 100ef59e7;  */

void FUN_100ef58fc(undefined8 param_1)

{
  FUN_100ef5898();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x78,7);
  return;
}



/* Entry: 100ef59e8; end: 100ef5a1b;  */

void FUN_100ef59e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100ef5dc4(uVar1,uVar2,param_2[2],param_2[3]);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)uVar2;
  return;
}



/* Entry: 100ef5a1c; end: 100ef5a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_100ef5a1c(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cStack_88;
  undefined7 uStack_87;
  long lStack_68;
  
  if ((ulong)param_1[3] >> 0x3d == 1) {
    lVar9 = *param_1;
    func_0x000100083b20(&cStack_88);
    if (cStack_88 == '\x01') {
      func_0x0001000285a8(0x112d4a0b8,&UNK_10d9108b8);
      func_0x000107c613fc();
      uVar4 = 1;
      func_0x00010008747c();
      func_0x000100083b20(&cStack_88);
      func_0x0001000a8868();
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_1130525a8);
      func_0x000103ff5678();
      if (*(ulong *)(lVar9 + _DAT_112f8e4c0) < 0xd) {
        uVar10 = (&UNK_10d9108f2)[*(ulong *)(lVar9 + _DAT_112f8e4c0)];
      }
      else {
        uVar10 = 3;
      }
      uVar12 = *(undefined8 *)(lVar9 + _DAT_112f8e4c8);
      uVar13 = *(undefined8 *)(lVar9 + _DAT_112f8e4d0);
      uVar3 = *(undefined1 *)(lVar9 + _DAT_112f8e4d8);
      pcVar11 = *(code **)(lStack_68 + 0x10);
      uVar1 = *(undefined1 *)((undefined8 *)(lVar9 + _DAT_112f8e4d0) + 1);
      uVar2 = *(undefined1 *)((undefined8 *)(lVar9 + _DAT_112f8e4c8) + 1);
      func_0x000107c6157c(uVar4);
      (*pcVar11)(0,0,uVar5,uVar10,uVar12,uVar2,uVar13,uVar1,uVar3);
      func_0x000107c6142c(uVar5);
      func_0x000107c61574(uVar4);
      func_0x0001000834e4(&cStack_88);
      uVar5 = 1;
      func_0x00010061b458(1);
      func_0x000100083b20(&cStack_88);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
      func_0x000104883b8c(CONCAT71(uStack_87,cStack_88),uVar12);
      func_0x000107c61574(uVar5);
      puVar7 = &UNK_110366a78;
      func_0x000107c613fc(&UNK_110366a78,0x18,7);
      *(long *)(puVar7 + 0x10) = lVar9;
      func_0x000107c61174(lVar9);
      pcVar11 = FUN_100ef5fa0;
      func_0x0001000bfde0(FUN_100ef5fa0,puVar7,&UNK_1103669d8);
      func_0x000107c61574(uVar12);
      func_0x000107c61574(puVar7);
      pcVar8 = "reactToDeclaredAgeComplete(_:)";
      func_0x0001000c10c0("reactToDeclaredAgeComplete(_:)");
      func_0x000107c61180();
      pcVar6 = pcVar8;
      func_0x000100471e0c();
      func_0x000107c61574(uVar4);
      func_0x000107c61574(pcVar11);
      func_0x000107c615e8(pcVar8);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    return pcVar6;
  }
  return (char *)0x0;
}



/* Entry: 100ef5a4c; end: 100ef5abb;  */

long FUN_100ef5a4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100ef5abc; end: 100ef5af7;  */

void FUN_100ef5abc(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x03') && (param_3 != '\x02')) {
    if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100ef5af8; end: 100ef5b3b;  */

void FUN_100ef5af8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (1 < uVar2 && uVar2 != 3) {
    if (uVar1 >> 0x1d != 2) {
      return;
    }
    param_1 = param_4 & 0x1fffffffffffffff;
    FUN_100de5fcc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef5b3c; end: 100ef5bef;  */

undefined8 * FUN_100ef5b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x000100ef5a78(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 100ef5bf0; end: 100ef5c2b;  */

undefined8 * FUN_100ef5bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_100ef5af8(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 100ef5c2c; end: 100ef5d3f;  */

int FUN_100ef5c2c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 3);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 100ef5d40; end: 100ef5dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100ef5d40(undefined8 param_1,undefined8 param_2,byte param_3,long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      auVar5._8_8_ = 3;
      auVar5._0_8_ = 3;
      return auVar5;
    }
    func_0x000107c61174();
    auVar6._8_8_ = 1;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  if ((param_3 != 2) && (param_3 == 3)) {
    bVar2 = *(int *)(param_4 + _DAT_112f8e4c0) != 1;
    uVar1 = 0;
    if (bVar2) {
      uVar1 = 3;
    }
    uVar3 = 3;
    if (!bVar2) {
      uVar3 = 1;
    }
    auVar4._8_4_ = uVar3;
    auVar4._0_8_ = uVar1;
    auVar4._12_4_ = 0;
    return auVar4;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 100ef5dc4; end: 100ef5f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte bStack_42;
  byte bStack_41;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 3) {
    if (uVar2 == 0) {
      func_0x000107c61174();
    }
    else if (uVar2 == 1) {
      func_0x000100083b20(&bStack_42);
    }
    else {
      func_0x000100083b20(&bStack_41);
      if ((bStack_41 & 1) != 0) {
        FUN_100ef5d40(param_1,param_2,param_3,param_4 & 0x1fffffffffffffff);
      }
    }
  }
  else if (uVar2 == 3) {
    func_0x000107c61174();
  }
  return;
}



/* Entry: 100ef5f04; end: 100ef5f77;  */

void FUN_100ef5f04(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)((ulong)param_4 >> 0x3d);
  if (uVar2 == 4) {
    if ((param_1 == 5) || (param_1 == 0)) {
      lVar1 = *(long *)(unaff_x20 + 0x58);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c53eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
    }
  }
  else if ((uVar2 == 0) && (*(long *)(unaff_x20 + 0x68) != 0)) {
    func_0x000100eeb884();
  }
  return;
}



/* Entry: 100ef5f78; end: 100ef5f9f;  */

void FUN_100ef5f78(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000100087c34(&uStack_28);
  return;
}



/* Entry: 100ef5fa0; end: 100ef5fa7;  */

void FUN_100ef5fa0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  if (*(char *)((long)param_2 + 0x11) == '\x01') {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 3;
  }
  else {
    uVar3 = *param_2;
    uVar2 = param_2[1];
    uVar4 = (ulong)*(byte *)(param_2 + 2);
    FUN_100ef5abc(uVar3,uVar2);
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar1 | 0x4000000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 100ef5fa8; end: 100ef5ff7;  */

undefined8 * FUN_100ef5fa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100eedebc(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100eeded0(uVar3,uVar2);
  return param_1;
}



/* Entry: 100ef5ff8; end: 100ef614f;  */

int FUN_100ef5ff8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ef6150; end: 100ef6617;  */

undefined1  [16] FUN_100ef6150(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef18d90);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18d50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef621c);
  (*pcVar1)();
}



/* Entry: 100ef6618; end: 100ef663b;  */

undefined1  [16] FUN_100ef6618(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6d5f796669726576;
  func_0x000107c5fadc(0x6d5f796669726576,0xed00006567615f79);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18d50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef689c);
  (*pcVar1)();
}



/* Entry: 100ef663c; end: 100ef67d3;  */

undefined1  [16] FUN_100ef663c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef18dd0);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18d50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef6708);
  (*pcVar1)();
}



/* Entry: 100ef67d4; end: 100ef67eb;  */

undefined1  [16] FUN_100ef67d4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x74756f5f676f6c;
  func_0x000107c5fadc(0x74756f5f676f6c,0xe700000000000000);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18d50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef689c);
  (*pcVar1)();
}



/* Entry: 100ef67ec; end: 100ef689b;  */

undefined1  [16] FUN_100ef67ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef18d50);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef689c);
  (*pcVar1)();
}



/* Entry: 100ef689c; end: 100ef68a7; -[SCDeclaredAgeVerificationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef689c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0c0;
  func_0x000107c61428(param_1 + _DAT_112d4a0c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef68a8; end: 100ef68b3; -[SCDeclaredAgeVerificationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0c0;
  func_0x000107c61428(param_1 + _DAT_112d4a0c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef68b4; end: 100ef68bf; -[SCDeclaredAgeVerificationEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0c8;
  func_0x000107c61428(param_1 + _DAT_112d4a0c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef68c0; end: 100ef68cb; -[SCDeclaredAgeVerificationEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0c8;
  func_0x000107c61428(param_1 + _DAT_112d4a0c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef68cc; end: 100ef68d7; -[SCDeclaredAgeVerificationEntryPoint logoutScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0d0;
  func_0x000107c61428(param_1 + _DAT_112d4a0d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef68d8; end: 100ef68e3; -[SCDeclaredAgeVerificationEntryPoint setLogoutScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0d0;
  func_0x000107c61428(param_1 + _DAT_112d4a0d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef68e4; end: 100ef68ef; -[SCDeclaredAgeVerificationEntryPoint challengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0d8;
  func_0x000107c61428(param_1 + _DAT_112d4a0d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef68f0; end: 100ef68fb; -[SCDeclaredAgeVerificationEntryPoint setChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0d8;
  func_0x000107c61428(param_1 + _DAT_112d4a0d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef68fc; end: 100ef6907; -[SCDeclaredAgeVerificationEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef68fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0e0;
  func_0x000107c61428(param_1 + _DAT_112d4a0e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6908; end: 100ef6913; -[SCDeclaredAgeVerificationEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0e0;
  func_0x000107c61428(param_1 + _DAT_112d4a0e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef6914; end: 100ef691f; -[SCDeclaredAgeVerificationEntryPoint ageVerificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0e8;
  func_0x000107c61428(param_1 + _DAT_112d4a0e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6920; end: 100ef692b; -[SCDeclaredAgeVerificationEntryPoint setAgeVerificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0e8;
  func_0x000107c61428(param_1 + _DAT_112d4a0e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef692c; end: 100ef6937; -[SCDeclaredAgeVerificationEntryPoint experimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef692c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0f0;
  func_0x000107c61428(param_1 + _DAT_112d4a0f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6938; end: 100ef6943; -[SCDeclaredAgeVerificationEntryPoint setExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0f0;
  func_0x000107c61428(param_1 + _DAT_112d4a0f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef6944; end: 100ef694f; -[SCDeclaredAgeVerificationEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6944(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a0f8;
  func_0x000107c61428(param_1 + _DAT_112d4a0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6950; end: 100ef695b; -[SCDeclaredAgeVerificationEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a0f8;
  func_0x000107c61428(param_1 + _DAT_112d4a0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef695c; end: 100ef6967; -[SCDeclaredAgeVerificationEntryPoint complianceEngineChallengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef695c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a100;
  func_0x000107c61428(param_1 + _DAT_112d4a100,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6968; end: 100ef6973; -[SCDeclaredAgeVerificationEntryPoint setComplianceEngineChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a100;
  func_0x000107c61428(param_1 + _DAT_112d4a100,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef6974; end: 100ef697f; -[SCDeclaredAgeVerificationEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a108;
  func_0x000107c61428(param_1 + _DAT_112d4a108,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6980; end: 100ef698b; -[SCDeclaredAgeVerificationEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a108;
  func_0x000107c61428(param_1 + _DAT_112d4a108,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef698c; end: 100ef6997; -[SCDeclaredAgeVerificationEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef698c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a110;
  func_0x000107c61428(param_1 + _DAT_112d4a110,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef6998; end: 100ef69a3; -[SCDeclaredAgeVerificationEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a110;
  func_0x000107c61428(param_1 + _DAT_112d4a110,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef69a4; end: 100ef69af; -[SCDeclaredAgeVerificationEntryPoint applicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef69a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a118;
  func_0x000107c61428(param_1 + _DAT_112d4a118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef69b0; end: 100ef69f3;  */

void FUN_100ef69b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ef69f4; end: 100ef69ff; -[SCDeclaredAgeVerificationEntryPoint setApplicationStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef69f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a118;
  func_0x000107c61428(param_1 + _DAT_112d4a118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef6a00; end: 100ef6a53;  */

void FUN_100ef6a00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ef6a54; end: 100ef6a9b; -[SCDeclaredAgeVerificationEntryPoint declaredAgeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a120;
  func_0x000107c61428(param_1 + _DAT_112d4a120,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ef6a9c; end: 100ef6aa7; -[SCDeclaredAgeVerificationEntryPoint setDeclaredAgeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a120;
  func_0x000107c61428(param_1 + _DAT_112d4a120,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ef6aa8; end: 100ef6aef; -[SCDeclaredAgeVerificationEntryPoint ageVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6aa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a128;
  func_0x000107c61428(param_1 + _DAT_112d4a128,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ef6af0; end: 100ef6afb; -[SCDeclaredAgeVerificationEntryPoint setAgeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a128;
  func_0x000107c61428(param_1 + _DAT_112d4a128,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ef6afc; end: 100ef6b43; -[SCDeclaredAgeVerificationEntryPoint logoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a130;
  func_0x000107c61428(param_1 + _DAT_112d4a130,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ef6b44; end: 100ef6b4f; -[SCDeclaredAgeVerificationEntryPoint setLogoutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef6b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a130;
  func_0x000107c61428(param_1 + _DAT_112d4a130,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ef6b50; end: 100ef6baf;  */

void FUN_100ef6b50(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100ef6bb0; end: 100ef72a3;  */

/* WARNING: Possible PIC construction at 0x000100ef6e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef71a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef70b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef70c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef70d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef70e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef7014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef6f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef6f88) */
/* WARNING: Removing unreachable block (ram,0x000100ef6f78) */
/* WARNING: Removing unreachable block (ram,0x000100ef6fa8) */
/* WARNING: Removing unreachable block (ram,0x000100ef6f98) */
/* WARNING: Removing unreachable block (ram,0x000100ef6fd8) */
/* WARNING: Removing unreachable block (ram,0x000100ef6fc8) */
/* WARNING: Removing unreachable block (ram,0x000100ef7018) */
/* WARNING: Removing unreachable block (ram,0x000100ef7008) */
/* WARNING: Removing unreachable block (ram,0x000100ef6ff8) */
/* WARNING: Removing unreachable block (ram,0x000100ef7058) */
/* WARNING: Removing unreachable block (ram,0x000100ef7048) */
/* WARNING: Removing unreachable block (ram,0x000100ef7038) */
/* WARNING: Removing unreachable block (ram,0x000100ef7028) */
/* WARNING: Removing unreachable block (ram,0x000100ef7098) */
/* WARNING: Removing unreachable block (ram,0x000100ef7088) */
/* WARNING: Removing unreachable block (ram,0x000100ef7078) */
/* WARNING: Removing unreachable block (ram,0x000100ef7068) */
/* WARNING: Removing unreachable block (ram,0x000100ef70e8) */
/* WARNING: Removing unreachable block (ram,0x000100ef70d8) */
/* WARNING: Removing unreachable block (ram,0x000100ef70c8) */
/* WARNING: Removing unreachable block (ram,0x000100ef70b8) */
/* WARNING: Removing unreachable block (ram,0x000100ef7148) */
/* WARNING: Removing unreachable block (ram,0x000100ef7138) */
/* WARNING: Removing unreachable block (ram,0x000100ef7128) */
/* WARNING: Removing unreachable block (ram,0x000100ef7118) */
/* WARNING: Removing unreachable block (ram,0x000100ef7108) */
/* WARNING: Removing unreachable block (ram,0x000100ef71a8) */
/* WARNING: Removing unreachable block (ram,0x000100ef7198) */
/* WARNING: Removing unreachable block (ram,0x000100ef7188) */
/* WARNING: Removing unreachable block (ram,0x000100ef7178) */
/* WARNING: Removing unreachable block (ram,0x000100ef7168) */
/* WARNING: Removing unreachable block (ram,0x000100ef7158) */
/* WARNING: Removing unreachable block (ram,0x000100ef7208) */
/* WARNING: Removing unreachable block (ram,0x000100ef71f8) */
/* WARNING: Removing unreachable block (ram,0x000100ef71e8) */
/* WARNING: Removing unreachable block (ram,0x000100ef71d8) */
/* WARNING: Removing unreachable block (ram,0x000100ef71c8) */
/* WARNING: Removing unreachable block (ram,0x000100ef71b8) */
/* WARNING: Removing unreachable block (ram,0x000100ef7278) */
/* WARNING: Removing unreachable block (ram,0x000100ef7268) */
/* WARNING: Removing unreachable block (ram,0x000100ef7258) */
/* WARNING: Removing unreachable block (ram,0x000100ef7248) */
/* WARNING: Removing unreachable block (ram,0x000100ef7238) */
/* WARNING: Removing unreachable block (ram,0x000100ef7228) */
/* WARNING: Removing unreachable block (ram,0x000100ef6eec) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100ef6edc) */
/* WARNING: Removing unreachable block (ram,0x000100ef6ecc) */
/* WARNING: Removing unreachable block (ram,0x000100ef6ebc) */
/* WARNING: Removing unreachable block (ram,0x000100ef6eac) */
/* WARNING: Removing unreachable block (ram,0x000100ef6e9c) */
/* WARNING: Removing unreachable block (ram,0x000100ef6e8c) */
/* WARNING: Removing unreachable block (ram,0x000100ef6e7c) */
/* WARNING: Removing unreachable block (ram,0x000100ef6f68) */

void FUN_100ef6bb0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4143c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3da38();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4c084();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4c08c();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c3f788();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c42eb0();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c3da3c();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c42bbc();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c3e274();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar2;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c3ff28();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c3fa0c();
                          func_0x000107c61180();
                          if (lVar13 != 0) {
                            lVar14 = unaff_x20;
                            func_0x000107c5d900();
                            func_0x000107c61180();
                            if (lVar14 != 0) {
                              func_0x000107c3dfc8();
                              func_0x000107c61180();
                              if (unaff_x20 == 0) {
                                func_0x000107c61170(lVar1);
                                lVar1 = lVar2;
                              }
                              else {
                                lVar15 = 0;
                                FUN_100eedef4();
                                func_0x000107c613fc();
                                func_0x0001000c6560();
                                func_0x000107c613fc();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                lVar16 = unaff_x20;
                                func_0x0001000c6580();
                                *(undefined8 *)(lVar15 + 0x90) = 0;
                                *(long *)(lVar15 + 0x10) = lVar1;
                                *(long *)(lVar15 + 0x18) = lVar3;
                                *(long *)(lVar15 + 0x20) = lVar4;
                                *(long *)(lVar15 + 0x28) = lVar5;
                                *(long *)(lVar15 + 0x30) = lVar6;
                                *(long *)(lVar15 + 0x38) = lVar7;
                                *(long *)(lVar15 + 0x40) = lVar2;
                                *(long *)(lVar15 + 0x48) = lVar8;
                                *(long *)(lVar15 + 0x50) = lVar9;
                                *(long *)(lVar15 + 0x58) = lVar10;
                                *(long *)(lVar15 + 0x60) = lVar11;
                                *(long *)(lVar15 + 0x68) = lVar12;
                                *(long *)(lVar15 + 0x70) = lVar13;
                                *(long *)(lVar15 + 0x78) = lVar14;
                                *(long *)(lVar15 + 0x80) = unaff_x20;
                                *(long *)(lVar15 + 0x88) = lVar16;
                                func_0x000100eecf48();
                                lVar1 = unaff_x20;
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
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100ef72a4; end: 100ef733b; -[SCDeclaredAgeVerificationEntryPoint begin] */

void FUN_100ef72a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ef6bb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


