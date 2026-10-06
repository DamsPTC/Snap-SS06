/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10058cc5c; end: 10058cccf; -[SCGrapheneLocationPrimacyMetric2 init] */

undefined1 * FUN_10058cc5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee298;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10058ccd0; end: 10058ce43;  */

char * FUN_10058ccd0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108fab68,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lVar3 = *(long *)(pcVar2 + 0x18);
  *(long *)(pcVar1 + 0x18) = lVar3;
  uVar5 = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(pcVar1 + 0x28) = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(pcVar1 + 0x20) = uVar5;
  (*(code *)**(undefined8 **)(lVar3 + -8))(pcVar1,pcVar2);
  return pcVar1;
}



/* Entry: 10058ce44; end: 10058ced7;  */

long FUN_10058ce44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10058ced8; end: 10058cf1b;  */

long * FUN_10058ced8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10058cf1c; end: 10058cf5f;  */

void FUN_10058cf1c(void)

{
  long unaff_x20;
  
  func_0x000107c61624(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058cf60; end: 10058d0b3;  */

void FUN_10058cf60(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10058d0b4; end: 10058d13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058d0b4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar1 = *param_1;
  param_2 = param_2 + 0x10;
  func_0x000107c61600(param_2);
  lVar2 = 0;
  FUN_10058d13c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112e1eff0) = uVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c4d664(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10058d13c; end: 10058d15b;  */

void FUN_10058d13c(void)

{
  func_0x000107c61168(&PTR_PTR_112802320);
  return;
}



/* Entry: 10058d15c; end: 10058d167;  */

void FUN_10058d15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10058d168; end: 10058d16f; -[_TtC36PrimaryLocationDeviceServiceProvider31SCDeviceLocationPrimacyProvider devicePrimacy] */

void FUN_10058d168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10058d170; end: 10058d1b7;  */

/* WARNING: Possible PIC construction at 0x00010058d1a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058d1a8) */

void FUN_10058d170(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10058d1b8; end: 10058d27f; -[SCMapGRPCValisService _onPrimacyChange:] */

void FUN_10058d1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000107c4c67c(param_3);
  func_0x000107c55808(param_1);
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10058d280; end: 10058d437; -[_TtC36PrimaryLocationDeviceServiceProviderP33_AB616341BDD9AD1D71E42780AEFE845829SCDeviceLocationPrimacyObject matchIsPrimary:isSecondary:isUnknown:] */

/* WARNING: Possible PIC construction at 0x00010058d3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058d428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058d3f0) */
/* WARNING: Removing unreachable block (ram,0x00010058d42c) */
/* WARNING: Removing unreachable block (ram,0x00010058d3f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058d280(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar3 = (code *)0x0;
    if (param_4 != 0) goto LAB_10058d2f8;
LAB_10058d354:
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
    if (param_5 != 0) goto LAB_10058d320;
LAB_10058d360:
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110472b90;
    func_0x000107c613fc(&UNK_110472b90,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar3 = (code *)&UNK_101d08078;
    if (param_4 == 0) goto LAB_10058d354;
LAB_10058d2f8:
    puVar4 = &UNK_110472b68;
    func_0x000107c613fc(&UNK_110472b68,0x18,7);
    *(long *)(puVar4 + 0x10) = param_4;
    pcVar5 = (code *)&UNK_101d08074;
    if (param_5 == 0) goto LAB_10058d360;
LAB_10058d320:
    puVar6 = &UNK_110472b40;
    func_0x000107c613fc(&UNK_110472b40,0x18,7);
    *(long *)(puVar6 + 0x10) = param_5;
    pcVar7 = (code *)&UNK_101d08068;
  }
  pcVar1 = pcVar7;
  puVar2 = puVar6;
  if (*(char *)(param_1 + _DAT_112e1eff0) == '\0') {
    if (param_3 == 0) goto SUB_10058d43c;
    func_0x000107c61174(param_1);
    (*pcVar3)();
  }
  else if (*(char *)(param_1 + _DAT_112e1eff0) == '\x01') {
    if (param_4 == 0) goto SUB_10058d43c;
    func_0x000107c61174(param_1);
    (*pcVar5)();
  }
  else {
    pcVar1 = pcVar5;
    puVar2 = puVar4;
    if (param_5 == 0) goto SUB_10058d43c;
    func_0x000107c61174(param_1);
    (*pcVar7)();
  }
  func_0x000107c61170(param_1);
  FUN_10058d438(pcVar7,puVar6);
  pcVar1 = pcVar5;
  puVar2 = puVar4;
SUB_10058d43c:
  if (pcVar1 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10058d438; end: 10058d44f;  */

void FUN_10058d438(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058d450; end: 10058d473;  */

void FUN_10058d450(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058d474; end: 10058d47b; -[SCMapGRPCValisService setIsSecondaryDevice:] */

void FUN_10058d474(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf3) = param_3;
  return;
}



/* Entry: 10058d47c; end: 10058d4a3; -[SCMapGRPCValisService streamActiveObservable] */

void FUN_10058d47c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058d4a4; end: 10058d4ab; -[SCDeviceLocationPermissionsManager lastAuthorized] */

void FUN_10058d4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0883b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_lastAuthorized_1125ffaf8);
  return;
}



/* Entry: 10058d4ac; end: 10058d56b;  */

undefined * FUN_10058d4ac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x000107c5aa04();
  func_0x000107c61180();
  puVar2 = puVar3;
  func_0x000107c3da10();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c4435c(puVar2,param_2,auStack_38);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_38,0x10);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar2);
  iVar1 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c4a994();
  return (undefined *)(ulong)(iVar1 - 3U < 2);
}



/* Entry: 10058d56c; end: 10058d58b; -[SCLocationManager lastAuthorized] */

bool FUN_10058d56c(int param_1)

{
  func_0x000107c4a994();
  return param_1 - 3U < 2;
}



/* Entry: 10058d58c; end: 10058d593; -[SCLocationManager lastAuthorizationStatus] */

undefined4 FUN_10058d58c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



/* Entry: 10058d594; end: 10058d65f; -[SCLocationSharingServiceV2 _isExplicitlyInGhostModeOrSimilar] */

bool FUN_10058d594(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c443c8();
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5aa6c();
    func_0x000107c61170(lVar4);
    if (lVar5 == 2) {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x000107c4ec80(lVar6);
      func_0x000107c61180();
      lVar5 = lVar6;
      func_0x000107c5e2b0();
      func_0x000107c61180();
      lVar4 = lVar5;
      func_0x000107c40808();
      bVar1 = lVar4 == 0;
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar6);
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10058d660; end: 10058d667; -[SCLocationSharingPreferences ghostMode] */

undefined1 FUN_10058d660(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10058d668; end: 10058daa7;  */

ulong FUN_10058d668(ulong param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x000107c37ca8();
      return param_1;
    }
  }
  else if (param_2 == 0) {
    lVar1 = param_1 + 0x30;
    func_0x00010058d6ac(lVar1);
    return (ulong)((uint)lVar1 ^ 1);
  }
  return 0;
}



/* Entry: 10058daa8; end: 10058dab7; -[SIGSubscreenView header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10058daa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951d0);
}



/* Entry: 10058dab8; end: 10058daef; -[SIGHeader setHeaderItemViewCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127949c4);
  *(undefined8 *)(param_1 + _DAT_1127949c4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10058daf0; end: 10058dbab; -[SIGContainerPresentationView setContainerBackgroundColor:] */

/* WARNING: Possible PIC construction at 0x00010058db6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058db90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058db70) */
/* WARNING: Removing unreachable block (ram,0x00010058db94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058daf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  lVar3 = (long)_DAT_11278c77c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c61174(param_3);
  func_0x000107c59a2c(uVar2,param_2,uVar1);
  func_0x000107c59a2c(*(undefined8 *)(param_1 + _DAT_11278c780),param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3e5e8(uVar1);
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10058dbac; end: 10058dbbb; -[SIGSubscreenView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dbac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127951e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10058dbbc; end: 10058dbcb; -[SIGSubscreenView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10058dbbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951c4);
}



/* Entry: 10058dbcc; end: 10058dc2b; -[SIGContainerView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dbcc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705620;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x000107c3c7b4(param_1);
  func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_11278c79c));
  return;
}



/* Entry: 10058dc2c; end: 10058dd6b; -[SIGContainerView _shouldShowBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10058dc2c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + _DAT_11278c7b8;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x00010058dcdc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c4a76c();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5ae48();
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c5ce94(param_1);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5d9c8();
    bVar1 = lVar4 == 2;
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return bVar1;
}



/* Entry: 10058dd6c; end: 10058dd7b; -[SCContainerViewLayoutConfig overlayIsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10058dd6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083ad8);
}



/* Entry: 10058dd7c; end: 10058dd8b; -[SCContainerViewLayoutConfig footerConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dd7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083ac8));
  return;
}



/* Entry: 10058dd8c; end: 10058dd9b; -[SCContainerFooterConfig defaultBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dd8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083a58));
  return;
}



/* Entry: 10058dd9c; end: 10058ddab; -[SCContainerFooterConfig backgroundObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058dd9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083a60));
  return;
}



/* Entry: 10058ddac; end: 10058df7f; -[SIGFooter initWithDefaultBackgroundColor:backgroundObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10058ddac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_11270b4b8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127948e0) = 0;
    lVar5 = (long)_DAT_1127948e4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    if (param_4 != 0) {
      puVar3 = PTR_PTR_1126ae810;
      func_0x000107c61160();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127948e8);
      *(undefined **)((long)puVar1 + (long)_DAT_1127948e8) = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c61144(auStack_68,puVar1);
      puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      func_0x000107c61180();
      lVar5 = param_4;
      func_0x000107c4da84(param_4);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_70,auStack_68);
      lVar4 = lVar5;
      func_0x000107c5c320(lVar5);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10058df80; end: 10058e0bf;  */

void FUN_10058df80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_105fee3f0;
  puStack_40 = &UNK_105fee400;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x000107c3e594(param_2);
  func_0x000107c61180();
  func_0x000107c4c6b8();
  func_0x000107c61170(uVar1);
  uVar1 = puStack_58[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058e0c0; end: 10058e0c7; -[SCPlusNavigationBarTheme background] */

undefined8 FUN_10058e0c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10058e0c8; end: 10058e10f;  */

/* WARNING: Possible PIC construction at 0x00010058e0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058e100) */

void FUN_10058e0c8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3cce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10058e110; end: 10058e1e7; -[SIGFooter _updateThemeBackground:] */

/* WARNING: Possible PIC construction at 0x00010058e150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058e1b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058e154) */
/* WARNING: Removing unreachable block (ram,0x00010058e19c) */
/* WARNING: Removing unreachable block (ram,0x00010058e174) */
/* WARNING: Removing unreachable block (ram,0x00010058e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010058e184) */
/* WARNING: Removing unreachable block (ram,0x00010058e194) */
/* WARNING: Removing unreachable block (ram,0x00010058e198) */
/* WARNING: Removing unreachable block (ram,0x00010058e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010058e1b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = (long)_DAT_112794924;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10058e1e8; end: 10058e533; -[SIGFooter _updateBackgroundWithFooterItemConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e1e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_10b84f1a4;
  puStack_60 = &UNK_10b84f1b4;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  puStack_98 = &UNK_10b84f1a4;
  puStack_90 = &UNK_10b84f1b4;
  uStack_88 = 0;
  if (*(long *)(param_1 + _DAT_112794918) == 0) {
    lVar8 = (long)_DAT_112794924;
    if ((*(long *)(param_1 + lVar8) == 0) ||
       ((uVar4 = param_3, func_0x000107c425ac(), (int)uVar4 != 0 &&
        (FUN_10052bb84(), (uVar4 & 1) != 0)))) {
      if (param_3 != 0) {
        uVar4 = param_3;
        func_0x000107c3e5a0();
        func_0x000107c61180();
        func_0x000107c61170();
        if (uVar4 != 0) {
          uVar4 = param_3;
          func_0x000107c3e5a0(param_3);
          func_0x000107c61180();
          func_0x000107c52b50(param_1);
          func_0x000107c61170(uVar4);
          goto LAB_10058e26c;
        }
      }
      goto LAB_10058e264;
    }
    func_0x000107c4c5b0(*(undefined8 *)(param_1 + lVar8));
  }
  else {
LAB_10058e264:
    func_0x000107c52b50(param_1);
  }
LAB_10058e26c:
  lVar8 = (long)_DAT_11279492c;
  uVar4 = *(ulong *)(param_1 + lVar8);
  uVar6 = puStack_78[5];
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  if (uVar4 == uVar6) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
  }
  else {
    if (uVar6 == 0) {
      func_0x000107c61170(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x000107c49cec();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_10058e374;
    }
    uVar5 = puStack_78[5];
    func_0x000107c61174(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c3cce4(param_1);
  }
LAB_10058e374:
  lVar7 = (long)_DAT_1127948f4;
  lVar8 = *(long *)(param_1 + lVar7);
  if (puStack_a8[5] == 0) {
    if (lVar8 == 0) goto LAB_10058e424;
    func_0x000107c4ff34();
    lVar8 = *(long *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
  }
  else {
    if (lVar8 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f4();
      func_0x000107c3ec60(param_1);
      func_0x000107c469a4();
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar2;
      func_0x000107c61170(uVar3);
      func_0x000107c53840(*(undefined8 *)(param_1 + lVar7));
      func_0x000107c49778(param_1);
      lVar8 = *(long *)(param_1 + lVar7);
    }
    func_0x000107c55258(lVar8);
    func_0x000107c4aba4(param_1);
    func_0x000107c61180();
    func_0x000107c562fc();
    lVar8 = param_1;
  }
  func_0x000107c61170(lVar8);
LAB_10058e424:
  func_0x000107c60bcc(&uStack_b0,8);
  func_0x000107c61170(uStack_88);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10058e534; end: 10058e69f; -[SIGFooter _updateTopBorderColorWithItemConfig:] */

/* WARNING: Possible PIC construction at 0x00010058e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058e5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058e5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058e634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058e684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058e5d8) */
/* WARNING: Removing unreachable block (ram,0x00010058e614) */
/* WARNING: Removing unreachable block (ram,0x00010058e5e8) */
/* WARNING: Removing unreachable block (ram,0x00010058e5c8) */
/* WARNING: Removing unreachable block (ram,0x00010058e570) */
/* WARNING: Removing unreachable block (ram,0x00010058e5f4) */
/* WARNING: Removing unreachable block (ram,0x00010058e688) */
/* WARNING: Removing unreachable block (ram,0x00010058e604) */
/* WARNING: Removing unreachable block (ram,0x00010058e574) */
/* WARNING: Removing unreachable block (ram,0x00010058e638) */
/* WARNING: Removing unreachable block (ram,0x00010058e684) */

void FUN_10058e534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5cbe8(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10058e6a0; end: 10058e71b; -[SIGFooter setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x00010058e704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794914;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c4a7c4(*(undefined8 *)(param_1 + _DAT_1127948f8));
  func_0x000107c61180();
  func_0x000107c3c5bc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10058e71c; end: 10058e797; -[SIGFooter _setTooltipPresenter:forItemView:] */

/* WARNING: Possible PIC construction at 0x00010058e778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058e77c) */

void FUN_10058e71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_DAT_1126a5cc0;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  FUN_10010fab4(param_4,puVar1);
  if ((int)uVar2 == 0) {
    param_4 = 0;
  }
  func_0x000107c61174(param_4);
  func_0x000107c59ebc(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10058e798; end: 10058e7ab; -[SIGFooter setFooterHeightObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e798(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794910,param_3);
  return;
}



/* Entry: 10058e7ac; end: 10058e7bf; -[SCContainerViewControllerView setHierarchyObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c7dc,param_3);
  return;
}



/* Entry: 10058e7c0; end: 10058e813; -[SIGLegacyContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e7c0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c5deb8(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 10058e814; end: 10058e817; -[SCViewControllerLifecycleChecker viewDidLoad:] */

void FUN_10058e814(void)

{
  return;
}



/* Entry: 10058e818; end: 10058e86b; -[SCContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e818(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c5deb8(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1);
  puStack_28 = PTR_PTR_112705608;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 10058e86c; end: 10058e87b; -[SCContainerViewControllerView setContainerBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c7d8),PTR_s_setContainerBackgroundColor__11263e060)
  ;
  return;
}



/* Entry: 10058e87c; end: 10058e8bf;  */

void FUN_10058e87c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058e8c0; end: 10058e927; -[_TtC50LegacyContainerViewControllerServiceImplementation50LegacyContainerViewControllerServiceImplementation containerHeader] */

void FUN_10058e8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40378(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058e928; end: 10058e937; -[SCContainerViewController containerHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c72c),PTR_s_containerHeader_1125b0518);
  return;
}



/* Entry: 10058e938; end: 10058e947; -[SCContainerViewControllerView containerHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10058e938(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7e0);
}



/* Entry: 10058e948; end: 10058e957; -[_TtC27SCNavigationLoggingServices27SCNavigationLoggingServices navigationLoggingObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305c950));
  return;
}



/* Entry: 10058e958; end: 10058e95f; -[SCSpectaclesAppRoutingService router] */

undefined8 FUN_10058e958(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10058e960; end: 10058e96f; -[_TtC27FriendingExperimentServices27FriendingExperimentServices friendingExperimentReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021f38));
  return;
}



/* Entry: 10058e970; end: 10058e98b; -[_TtC37SCCustomStatusBarStyleContextServices37SCCustomStatusBarStyleContextServices styleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058e970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083e60));
  return;
}



/* Entry: 10058e98c; end: 10058eba7;  */

void FUN_10058e98c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_100083b20(&uStack_78);
  uVar3 = uStack_78;
  uVar2 = uStack_78;
  func_0x000107c4d508(uStack_78);
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  puVar1 = PTR_PTR_1126ab808;
  func_0x000107c610f8();
  func_0x000107c483f8();
  func_0x000107c61170(uVar2);
  FUN_100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c53d28(uStack_78);
  func_0x000107c61170(uVar3);
  uVar2 = 0;
  func_0x00010058ec44(0);
  uStack_80 = 0x3ff0000000000000;
  uVar3 = 0x112e5e398;
  func_0x00010058ec9c(0x112e5e398,
                      PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
  func_0x000107c5f170(&uStack_78,PTR__UIWindowLevelStatusBar_110345e90,&uStack_80,uVar2,uVar3);
  uVar3 = uStack_78;
  puVar4 = PTR_PTR_1126b1c10;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar3);
  FUN_100083b20(&uStack_78);
  uVar2 = uStack_78;
  func_0x000107c61174(puVar4);
  puVar5 = puVar1;
  func_0x000107c5c230(puVar1);
  func_0x000107c61180();
  FUN_100083b20(&uStack_80);
  uVar3 = uStack_80;
  uVar6 = uStack_80;
  func_0x000107c44da4(uStack_80);
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  puVar7 = puVar4;
  FUN_10058ef04(puVar4,puVar5,uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uVar6);
  FUN_100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c42c1c(uStack_78);
  func_0x000107c61170(uVar3);
  FUN_100083b20(&uStack_78);
  func_0x000107c53d20(puVar1);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 10058eba8; end: 10058ec2f; -[SCCustomStatusBarStyleContextController initWithRootViewController:] */

undefined1 * FUN_10058eba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3998;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10058ec30; end: 10058ec57; -[SCContainerViewController setCustomStatusBarStyleContextController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058ec30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c744,param_3);
  return;
}



/* Entry: 10058ec58; end: 10058ecdb;  */

void FUN_10058ec58(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10058ecdc; end: 10058ece3; -[SCOverlayWindowUIContainer initWithWindowLevel:] */

void FUN_10058ecdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c063290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithWindowLevel_accessibilit_1125f66b0,0)
  ;
  return;
}



/* Entry: 10058ece4; end: 10058ed67; -[SCOverlayWindowUIContainer initWithWindowLevel:accessibilityModality:] */

undefined1 *
FUN_10058ece4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e268;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10058ed68; end: 10058ed6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058ed68(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033ff44();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113083eb0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10058ed70; end: 10058eddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058ed70(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033ff44();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113083eb0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10058eddc; end: 10058ee47;  */

void FUN_10058eddc(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_1000285a8(0x112f4f870,&UNK_10dba3490);
  func_0x000107c613fc();
  pcVar1 = FUN_10058f00c;
  FUN_1000841f8(FUN_10058f00c,0);
  FUN_100084214(&UNK_10dba3460,0x2d,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10058ee48; end: 10058eeff; -[SCCustomStatusBarStyleContextController styleContextObservable] */

void FUN_10058ee48(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10058ef00; end: 10058ef03; -[_TtC47LegacyNavigationControllerServiceImplementation47LegacyNavigationControllerServiceImplementation heightChangeDelegate] */

void FUN_10058ef00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10058ef04; end: 10058f00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10058ef04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_100335334();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_113083ea0;
  func_0x000107c61614(lVar4 + _DAT_113083ea0,0);
  *(long *)(lVar4 + _DAT_113083e90) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113083e98) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  FUN_10008a7c8(&uStack_80,aplStack_90);
  FUN_100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10058f00c; end: 10058f283;  */

void FUN_10058f00c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  FUN_1000285a8(0x112f4f878,&UNK_10dba3498);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  FUN_1000838ec();
  puVar2 = puVar1;
  FUN_10058f284();
  FUN_100082720("CustomStatusBarScopeGraphBridgeServicesServiceProvider",0x36,2);
  FUN_1000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_10058fc48;
  FUN_1000823a8(FUN_10058fc48,0);
  FUN_100082720("SCCustomStatusBarScopedServicesCleanupRelayServiceProvider",0x3a,2);
  FUN_1000285a8(0x112f4f880,&UNK_10dba34a8);
  puVar4 = &UNK_11062e4c0;
  func_0x000107c613fc(&UNK_11062e4c0,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 **)(puVar4 + 0x18) = puVar2;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_10058f4a4;
  FUN_1000823a8(FUN_10058f4a4,puVar4);
  FUN_100082720("SCCustomStatusBarScopeInitializationPluginRegistryServiceProvider",0x41,2);
  FUN_1000285a8(0x112f4f808,&UNK_10dba3250);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_10058f42c;
  FUN_1000823a8(FUN_10058f42c,pcVar5);
  FUN_100082720("SCCustomStatusBarScopeInitializationServiceProvider",0x33,2);
  FUN_1000285a8(0x112f4f7f8,&UNK_10dba3240);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_10058f3b8;
  FUN_1000823a8(FUN_10058f3b8,pcVar6);
  FUN_100082720("SCCustomStatusBarScopedServicesServiceProvider",0x2e,2);
  FUN_1000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_11062e4e8;
  func_0x000107c613fc(&UNK_11062e4e8,0x20,7);
  *(code **)(puVar4 + 0x10) = pcVar7;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar7 = FUN_10058f314;
  FUN_1000823a8(FUN_10058f314,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  FUN_100082720("SCCustomStatusBarScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar7;
  return;
}



/* Entry: 10058f284; end: 10058f2c3;  */

void FUN_10058f284(void)

{
  FUN_1000285a8(0x112f4f910,&UNK_10dba3568);
  FUN_1000823a8(FUN_10058f9dc,0);
  return;
}



/* Entry: 10058f2c4; end: 10058f2e3;  */

void FUN_10058f2c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c42b0);
  return;
}



/* Entry: 10058f2e4; end: 10058f2f3;  */

undefined1  [16] FUN_10058f2e4(void)

{
  return ZEXT816(0x11074d3e8);
}



/* Entry: 10058f2f4; end: 10058f313;  */

void FUN_10058f2f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4060);
  return;
}



/* Entry: 10058f314; end: 10058f31b;  */

void FUN_10058f314(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11062e348;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11062e348;
  return;
}



/* Entry: 10058f31c; end: 10058f3b7;  */

void FUN_10058f31c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60);
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11062e348;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11062e348;
  return;
}



/* Entry: 10058f3b8; end: 10058f3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058f3b8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10058f2f4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f800) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10058f3c0; end: 10058f42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058f3c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10058f2f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4f800) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10058f42c; end: 10058f433;  */

void FUN_10058f42c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112f4f860,&UNK_10dba3448);
  uVar1 = 0;
  FUN_100335334();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10058f434; end: 10058f4a3;  */

void FUN_10058f434(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112f4f860,&UNK_10dba3448);
  uVar1 = 0;
  FUN_100335334();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10058f4a4; end: 10058f4af;  */

void FUN_10058f4a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10058f4b0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1000a7f38("SCCustomStatusBarScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10058f4b0; end: 10058f647;  */

void FUN_10058f4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d3e8;
  ppuVar4 = &PTR_DAT_113066a78;
  uVar5 = param_3;
  FUN_1000a3aa4();
  puVar2 = &UNK_11062e510;
  func_0x000107c613fc(&UNK_11062e510,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f4f888;
  FUN_1000285a8(0x112f4f888,&UNK_10dba34b0);
  FUN_1000a6ee8(&UNK_11062e720,"CustomStatusBarScopeGraphBridgeScopeInitializationPluginKey",0x3b,2,
                FUN_10058f878,puVar2,uVar3,&UNK_11062e720,&PTR_DAT_112f4f918);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11062e538;
  func_0x000107c613fc(&UNK_11062e538,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  FUN_1000a6ee8(&UNK_11062e3d8,"SCCustomStatusBarScopedServicesScopeInitializationPluginKey",0x3b,2,
                0x10058faa8,puVar2,uVar3,&UNK_11062e3d8,&PTR_DAT_112f4f810);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f4f890;
  FUN_1000285a8(0x112f4f890,&UNK_10dba34b8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10058f648; end: 10058f683;  */

void FUN_10058f648(undefined8 *param_1,undefined8 param_2)

{
  FUN_10058f4b0();
  FUN_1000a7f38("SCCustomStatusBarScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10058f684; end: 10058f6ab;  */

void FUN_10058f684(void)

{
  return;
}



/* Entry: 10058f6ac; end: 10058f6df;  */

void FUN_10058f6ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058f6e0; end: 10058f6ef;  */

undefined8 FUN_10058f6e0(void)

{
  return 0x1b;
}



/* Entry: 10058f6f0; end: 10058f7eb;  */

void FUN_10058f6f0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_3 != param_2) {
    lVar4 = *param_4;
    plVar5 = (long *)(lVar4 + param_3 * 0x40 + -0x40);
    param_1 = param_1 - param_3;
    lVar7 = param_1;
    plVar6 = plVar5;
LAB_10058f778:
    do {
      plVar8 = plVar5 + 8;
      if (*plVar8 == *plVar5) {
        uVar3 = plVar5[9];
        if ((uVar3 != plVar5[1] || plVar5[10] != plVar5[2]) &&
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
LAB_10058f7b4:
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10058f7ec);
            (*pcVar1)();
          }
          lVar14 = plVar5[1];
          lVar13 = *plVar5;
          lVar16 = plVar5[3];
          lVar15 = plVar5[2];
          plVar5[1] = plVar5[9];
          *plVar5 = *plVar8;
          plVar5[3] = plVar5[0xb];
          plVar5[2] = plVar5[10];
          lVar10 = plVar5[5];
          lVar9 = plVar5[4];
          lVar12 = plVar5[7];
          lVar11 = plVar5[6];
          plVar5[5] = plVar5[0xd];
          plVar5[4] = plVar5[0xc];
          plVar5[7] = plVar5[0xf];
          plVar5[6] = plVar5[0xe];
          plVar5[9] = lVar14;
          *plVar8 = lVar13;
          plVar5[0xb] = lVar16;
          plVar5[10] = lVar15;
          plVar5[0xd] = lVar10;
          plVar5[0xc] = lVar9;
          plVar5[0xf] = lVar12;
          plVar5[0xe] = lVar11;
          bVar2 = param_1 != -1;
          param_1 = param_1 + 1;
          plVar5 = plVar5 + -8;
          if (bVar2) goto LAB_10058f778;
        }
      }
      else if (*plVar8 < *plVar5) goto LAB_10058f7b4;
      param_3 = param_3 + 1;
      plVar5 = plVar6 + 8;
      param_1 = lVar7 + -1;
      lVar7 = param_1;
      plVar6 = plVar5;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10058f7ec; end: 10058f7f7;  */

undefined ** FUN_10058f7ec(void)

{
  return &PTR_DAT_113066a78;
}



/* Entry: 10058f7f8; end: 10058f877;  */

void FUN_10058f7f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11062e6c8;
  func_0x000107c613fc(&UNK_11062e6c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10058f8b8,puVar1);
  return;
}



/* Entry: 10058f878; end: 10058f8b7;  */

void FUN_10058f878(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10058f7f8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100082720("CustomStatusBarScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10058f8b8; end: 10058f8bf;  */

void FUN_10058f8b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f4f908,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4f908,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11062e760;
  func_0x000107c613fc(&UNK_11062e760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1032726b0;
  FUN_10058fa64(&UNK_1032726b0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10058f8c0; end: 10058f9b7;  */

void FUN_10058f8c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f4f908,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4f908,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11062e760;
  func_0x000107c613fc(&UNK_11062e760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1032726b0;
  FUN_10058fa64(&UNK_1032726b0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10058f9b8; end: 10058f9db;  */

void FUN_10058f9b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058f9dc; end: 10058fa07;  */

void FUN_10058f9dc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10058f2c4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 10058fa08; end: 10058fa43; -[_TtC31CustomStatusBarScopeGraphBridge39CustomStatusBarScopeGraphBridgeServices init] */

void FUN_10058fa08(undefined8 param_1)

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



/* Entry: 10058fa44; end: 10058fa63;  */

void FUN_10058fa44(void)

{
  func_0x000107c61168(&PTR_PTR_113082bb0);
  return;
}



/* Entry: 10058fa64; end: 10058fa6f;  */

void FUN_10058fa64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10058fa70; end: 10058fa9b;  */

void FUN_10058fa70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fa9c; end: 10058faaf;  */

undefined ** FUN_10058fa9c(void)

{
  return &PTR_DAT_113066a78;
}


