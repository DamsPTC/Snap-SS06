/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101067584; end: 1010675c3;  */

void FUN_101067584(void)

{
  FUN_101066fd8();
  return;
}



/* Entry: 1010675c4; end: 1010675d7;  */

void FUN_1010675c4(long param_1,long param_2)

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



/* Entry: 1010675d8; end: 10106788b;  */

void FUN_1010675d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 10106788c; end: 101067893;  */

void FUN_10106788c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101067894; end: 1010678cb;  */

void FUN_101067894(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1010678cc; end: 1010678e7;  */

void FUN_1010678cc(long param_1,long param_2)

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



/* Entry: 1010678e8; end: 101067a2f;  */

/* WARNING: Possible PIC construction at 0x0001010678f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101067904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101067914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101067924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101067918) */
/* WARNING: Removing unreachable block (ram,0x000101067908) */
/* WARNING: Removing unreachable block (ram,0x0001010678f8) */
/* WARNING: Removing unreachable block (ram,0x000101067928) */

void FUN_1010678e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101067a30; end: 101067a53;  */

void FUN_101067a30(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101067650();
  *param_1 = param_2;
  return;
}



/* Entry: 101067a54; end: 101067a5f; -[SCAllContactsSyncingImplServiceProvider allContactsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57748;
  func_0x000107c61428(param_1 + _DAT_112d57748,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067a60; end: 101067a6b; -[SCAllContactsSyncingImplServiceProvider setAllContactsScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57748;
  func_0x000107c61428(param_1 + _DAT_112d57748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067a6c; end: 101067a77; -[SCAllContactsSyncingImplServiceProvider snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57750;
  func_0x000107c61428(param_1 + _DAT_112d57750,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067a78; end: 101067a83; -[SCAllContactsSyncingImplServiceProvider setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57750;
  func_0x000107c61428(param_1 + _DAT_112d57750,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067a84; end: 101067a8f; -[SCAllContactsSyncingImplServiceProvider contactPermissionInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57758;
  func_0x000107c61428(param_1 + _DAT_112d57758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067a90; end: 101067a9b; -[SCAllContactsSyncingImplServiceProvider setContactPermissionInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57758;
  func_0x000107c61428(param_1 + _DAT_112d57758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067a9c; end: 101067aa7; -[SCAllContactsSyncingImplServiceProvider featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067a9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57760;
  func_0x000107c61428(param_1 + _DAT_112d57760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067aa8; end: 101067ab3; -[SCAllContactsSyncingImplServiceProvider setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57760;
  func_0x000107c61428(param_1 + _DAT_112d57760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067ab4; end: 101067abf; -[SCAllContactsSyncingImplServiceProvider deviceContactSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57768;
  func_0x000107c61428(param_1 + _DAT_112d57768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067ac0; end: 101067acb; -[SCAllContactsSyncingImplServiceProvider setDeviceContactSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57768;
  func_0x000107c61428(param_1 + _DAT_112d57768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067acc; end: 101067ad7; -[SCAllContactsSyncingImplServiceProvider googleContactSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067acc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57770;
  func_0x000107c61428(param_1 + _DAT_112d57770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067ad8; end: 101067ae3; -[SCAllContactsSyncingImplServiceProvider setGoogleContactSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57770;
  func_0x000107c61428(param_1 + _DAT_112d57770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067ae4; end: 101067aef; -[SCAllContactsSyncingImplServiceProvider facebookContactSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067ae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57778;
  func_0x000107c61428(param_1 + _DAT_112d57778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067af0; end: 101067afb; -[SCAllContactsSyncingImplServiceProvider setFacebookContactSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57778;
  func_0x000107c61428(param_1 + _DAT_112d57778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067afc; end: 101067b07; -[SCAllContactsSyncingImplServiceProvider facebookLinkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57780;
  func_0x000107c61428(param_1 + _DAT_112d57780,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101067b08; end: 101067b4b;  */

void FUN_101067b08(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101067b4c; end: 101067b57; -[SCAllContactsSyncingImplServiceProvider setFacebookLinkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57780;
  func_0x000107c61428(param_1 + _DAT_112d57780,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067b58; end: 101067bab;  */

void FUN_101067b58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101067bac; end: 101067e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101067bac(void)

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
  undefined8 uVar10;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3db20();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b490();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40310();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c42eb0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c418cc();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c44450();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c42d38();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c42d40();
                func_0x000107c61180();
                if (lVar8 != 0) {
                  lVar9 = 0;
                  func_0x0001010679a8();
                  func_0x000107c613fc();
                  *(long *)(lVar9 + 0x10) = lVar1;
                  *(long *)(lVar9 + 0x18) = lVar2;
                  *(long *)(lVar9 + 0x20) = lVar3;
                  *(long *)(lVar9 + 0x28) = lVar4;
                  *(long *)(lVar9 + 0x30) = lVar5;
                  *(long *)(lVar9 + 0x38) = lVar6;
                  *(long *)(lVar9 + 0x40) = lVar7;
                  *(long *)(lVar9 + 0x48) = lVar8;
                  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d57788);
                  *(long *)(unaff_x20 + _DAT_112d57788) = lVar9;
                  func_0x000107c61174(lVar1);
                  func_0x000107c61174(lVar2);
                  func_0x000107c61174(lVar3);
                  func_0x000107c61174(lVar4);
                  func_0x000107c61174(lVar5);
                  func_0x000107c61174(lVar6);
                  func_0x000107c61174(lVar7);
                  func_0x000107c61174(lVar8);
                  func_0x000107c6157c(lVar9);
                  func_0x000107c61574(uVar10);
                  func_0x000101067650();
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(lVar8);
                  func_0x000107c61574(lVar9);
                  return;
                }
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                lVar1 = lVar7;
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101067e9c; end: 101067f27; -[SCAllContactsSyncingImplServiceProvider provide] */

void FUN_101067e9c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101067bac();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AllContactsSyncingServiceImpl/SCAllContactsSyncingImplServiceProvider.swift",
                      0x4b,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101067f28);
  (*pcVar1)();
}



/* Entry: 101067f28; end: 101067f5b; -[SCAllContactsSyncingImplServiceProvider __safeProvide] */

void FUN_101067f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101067bac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101067f5c; end: 101067f9f; -[SCAllContactsSyncingImplServiceProvider end] */

void FUN_101067f5c(undefined8 param_1)

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



/* Entry: 101067fa0; end: 1010683b3;  */

void FUN_101067fa0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2ffffffffffffff0 && param_3 == -0x7ffffffef10ddf70) ||
     (func_0x000107c605b8(0xd000000000000010,0x800000010ef22090,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5261c();
    goto LAB_101068034;
  }
  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
    uVar2 = 0xd000000000000013;
    func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd00000000000001d;
      if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10ddf50)) ||
         (func_0x000107c605b8(0xd00000000000001d,0x800000010ef220b0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c537a8();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef230)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5491c();
        }
        else {
          uVar2 = 0xd000000000000019;
          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10ddf30)) ||
             (func_0x000107c605b8(0xd000000000000019,0x800000010ef220d0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54078();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10ddf10)) {
              uVar2 = 0xd000000000000019;
              func_0x000107c605b8(0xd000000000000019,0x800000010ef220f0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000001b;
                if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10ddef0)) ||
                   (func_0x000107c605b8(0xd00000000000001b,0x800000010ef22110,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54850();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10dded0)) {
                    uVar2 = 0xd000000000000017;
                    func_0x000107c605b8(0xd000000000000017,0x800000010ef22130,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "AllContactsSyncingServiceImpl/SCAllContactsSyncingImplServiceProvider.swift"
                                          ,0x4b,2,0x4e,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010683b4);
                      (*pcVar1)();
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c54858();
                }
                goto LAB_101068034;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54f00();
          }
        }
      }
      goto LAB_101068034;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c594bc();
LAB_101068034:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010683b4; end: 10106845f; -[SCAllContactsSyncingImplServiceProvider setValue:forIvarName:] */

void FUN_1010683b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101067fa0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101068460; end: 10106854b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101068460(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d57748,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57750,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57758,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57760,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57768,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57770,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57778,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d57780,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d57788) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10106854c; end: 10106856b; -[SCAllContactsSyncingImplServiceProvider init] */

void FUN_10106854c(void)

{
  FUN_101068460();
  return;
}



/* Entry: 10106856c; end: 10106859f;  */

void FUN_10106856c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010685a0; end: 101068647; -[SCAllContactsSyncingImplServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010685a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d57748);
  func_0x000107c61610(param_1 + _DAT_112d57750);
  func_0x000107c61610(param_1 + _DAT_112d57758);
  func_0x000107c61610(param_1 + _DAT_112d57760);
  func_0x000107c61610(param_1 + _DAT_112d57768);
  func_0x000107c61610(param_1 + _DAT_112d57770);
  func_0x000107c61610(param_1 + _DAT_112d57778);
  func_0x000107c61610(param_1 + _DAT_112d57780);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d57788));
  return;
}



/* Entry: 101068648; end: 101068667;  */

void FUN_101068648(void)

{
  func_0x000107c61168(&PTR_PTR_112d577d0);
  return;
}



/* Entry: 101068668; end: 10106866f;  */

undefined8 FUN_101068668(void)

{
  return 1;
}



/* Entry: 101068670; end: 10106870f;  */

void FUN_101068670(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101068710; end: 10106871f;  */

void FUN_101068710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101068720; end: 10106877f; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin init] */

void FUN_101068720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AllContactsDeepLinkPlugin.AllContactsDeepLinkPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10106874c);
  (*pcVar1)();
}



/* Entry: 101068780; end: 1010687b7; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101068780(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d57868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d57870));
  return;
}



/* Entry: 1010687b8; end: 101068867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010687b8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4bb60();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42808();
    func_0x000107c615e8(param_1);
  }
  if (*(long *)(param_2 + _DAT_112d57870) != 0) {
    func_0x000104e5b5a8(*(long *)(param_2 + _DAT_112d57870),1);
  }
  return;
}



/* Entry: 101068868; end: 1010688cf; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_101068868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101068b08(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010688d0; end: 1010688d7; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_1010688d0(void)

{
  return 0;
}



/* Entry: 1010688d8; end: 10106893b; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

/* WARNING: Possible PIC construction at 0x00010106891c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101068920) */

void FUN_1010688d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101068d84(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10106893c; end: 10106898b; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin identifier] */

void FUN_10106893c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10106898c; end: 101068993; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin priority] */

undefined8 FUN_10106898c(void)

{
  return 1000;
}



/* Entry: 101068994; end: 101068a1b; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin canProvideProcessorForFeature:] */

uint FUN_101068994(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f836f8;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 101068a1c; end: 101068ae3; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin isValidDeepLink:] */

uint FUN_101068a1c(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  
  func_0x000107c615f0(param_3);
  ppuVar2 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c615e8(param_3);
    uVar4 = 0;
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f836f8;
    func_0x000107c5faec();
    if (ppuVar1 == ppuVar2 && param_2 == lVar3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar3,0);
      uVar4 = (uint)ppuVar1;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(param_2);
  }
  return uVar4 & 1;
}



/* Entry: 101068ae4; end: 101068ae7; -[_TtC25AllContactsDeepLinkPlugin25AllContactsDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_101068ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101068ae8; end: 101068b07;  */

void FUN_101068ae8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab658);
  return;
}



/* Entry: 101068b08; end: 101068d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101068b08(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  lVar6 = param_2;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + _DAT_112d57870) != 0) {
    lVar6 = 1;
    func_0x000104e5b4b8();
  }
  lVar8 = param_1;
  func_0x000107c3abfc(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c5b638();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5ed90();
  }
  else {
    lVar8 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5ed90();
    if (lVar6 != 0) {
      func_0x000107c5fadc(lVar8,lVar6);
      func_0x000107c6142c(lVar6);
      goto LAB_101068c10;
    }
  }
  lVar8 = 0;
LAB_101068c10:
  puVar2 = PTR_PTR_1126b1068;
  func_0x000107c610f8(PTR_PTR_1126b1068);
  func_0x000107c48fe4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar8);
  (**(code **)(lVar9 + 8))(lVar7,lVar1);
  func_0x000107c4bb48(param_2);
  lVar6 = unaff_x20 + _DAT_112d57868;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar1 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      puVar3 = &UNK_11037b770;
      func_0x000107c613fc(&UNK_11037b770,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar4 = &UNK_11037b798;
      func_0x000107c613fc(&UNK_11037b798,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = unaff_x20;
      pcStack_70 = FUN_101068e64;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11037b7b0;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_68;
      puVar4 = puVar2;
      func_0x000107c61174(puVar2);
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x000107c4ef74(lVar1);
      func_0x000107c61170(puVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar1);
    }
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101068d84; end: 101068e23;  */

/* WARNING: Possible PIC construction at 0x000101068de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101068df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101068de4) */
/* WARNING: Removing unreachable block (ram,0x000101068df8) */
/* WARNING: Removing unreachable block (ram,0x000101068e08) */
/* WARNING: Removing unreachable block (ram,0x000101068e10) */

void FUN_101068d84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_101068e24();
  puVar1 = &UNK_11037b858;
  func_0x000107c613f8(&UNK_11037b858,param_1,0,0);
  puVar2 = puVar1;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101068e24; end: 101068e63;  */

void FUN_101068e24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d578a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91e284;
  func_0x000107c61520(&UNK_10d91e284,&UNK_11037b858);
  puRam0000000112d578a0 = puVar1;
  return;
}



/* Entry: 101068e64; end: 101068f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101068e64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar3 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4bb60();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_60,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c42808();
    func_0x000107c615e8(lVar2);
  }
  lVar3 = *(long *)(lVar1 + _DAT_112d57870);
  if (lVar3 != 0) {
    func_0x000104e5b5a8(lVar3,1);
  }
  return;
}



/* Entry: 101068f78; end: 101068fb7;  */

void FUN_101068f78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d578a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91e25c;
  func_0x000107c61520(&UNK_10d91e25c,&UNK_11037b858);
  puRam0000000112d578a8 = puVar1;
  return;
}



/* Entry: 101068fb8; end: 101068ffb;  */

void FUN_101068fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101068ffc; end: 1010690db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101068ffc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x00010451338c();
  puVar4 = PTR_PTR_1126a62e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = 0;
  FUN_101068ae8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112d57868;
  func_0x000107c61614(lVar6 + _DAT_112d57868,0);
  func_0x000107c61604(lVar6 + lVar1,uVar3);
  *(undefined **)(lVar6 + _DAT_112d57870) = puVar4;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar3);
  func_0x000107c4fba8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(plVar7);
  return;
}



/* Entry: 1010690dc; end: 10106910f;  */

void FUN_1010690dc(void)

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



/* Entry: 101069110; end: 10106912f;  */

void FUN_101069110(void)

{
  FUN_101068ffc();
  return;
}



/* Entry: 101069130; end: 101069137;  */

undefined8 FUN_101069130(void)

{
  return 0;
}



/* Entry: 101069138; end: 101069157;  */

void FUN_101069138(void)

{
  func_0x000107c61168(&PTR_PTR_112d578f0);
  return;
}



/* Entry: 101069158; end: 101069163; -[SCAllContactsDeepLinkPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069158(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57960;
  func_0x000107c61428(param_1 + _DAT_112d57960,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101069164; end: 10106916f; -[SCAllContactsDeepLinkPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57960;
  func_0x000107c61428(param_1 + _DAT_112d57960,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101069170; end: 10106917b; -[SCAllContactsDeepLinkPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57968;
  func_0x000107c61428(param_1 + _DAT_112d57968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10106917c; end: 101069187; -[SCAllContactsDeepLinkPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106917c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57968;
  func_0x000107c61428(param_1 + _DAT_112d57968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101069188; end: 101069193; -[SCAllContactsDeepLinkPluginEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069188(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57970;
  func_0x000107c61428(param_1 + _DAT_112d57970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101069194; end: 1010691d7;  */

void FUN_101069194(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010691d8; end: 1010691e3; -[SCAllContactsDeepLinkPluginEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010691d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57970;
  func_0x000107c61428(param_1 + _DAT_112d57970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010691e4; end: 101069237;  */

void FUN_1010691e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101069238; end: 101069413;  */

/* WARNING: Possible PIC construction at 0x000101069374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101069388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101069398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010693a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010693ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010693ac) */
/* WARNING: Removing unreachable block (ram,0x00010106939c) */
/* WARNING: Removing unreachable block (ram,0x00010106938c) */
/* WARNING: Removing unreachable block (ram,0x000101069378) */
/* WARNING: Removing unreachable block (ram,0x0001010693f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069238(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar3 = 0;
      FUN_101069138();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x18) = unaff_x20;
      *(long *)(lVar3 + 0x20) = lVar2;
      *(long *)(lVar3 + 0x10) = lVar1;
      func_0x000107c61174(lVar1);
      func_0x000107c61174();
      func_0x000107c61174(unaff_x20);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x00010451338c();
      puVar4 = PTR_PTR_1126a62e0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar5 = 0;
      FUN_101068ae8();
      lVar3 = lVar5;
      func_0x000107c610f8();
      lVar2 = _DAT_112d57868;
      func_0x000107c61614(lVar3 + _DAT_112d57868,0);
      func_0x000107c61604(lVar3 + lVar2,lVar1);
      *(undefined **)(lVar3 + _DAT_112d57870) = puVar4;
      lStack_70 = lVar3;
      lStack_68 = lVar5;
      func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101069414; end: 10106943b; -[SCAllContactsDeepLinkPluginEntryPoint begin] */

void FUN_101069414(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101069238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10106943c; end: 10106947f; -[SCAllContactsDeepLinkPluginEntryPoint end] */

void FUN_10106943c(undefined8 param_1)

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



/* Entry: 101069480; end: 101069683;  */

void FUN_101069480(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AllContactsDeepLinkPlugin/SCAllContactsDeepLinkPluginEntryPoint.swift"
                                ,0x45,2,0x2d,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101069684);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
        goto LAB_10106950c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53414();
  }
LAB_10106950c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101069684; end: 10106972f; -[SCAllContactsDeepLinkPluginEntryPoint setValue:forIvarName:] */

void FUN_101069684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101069480(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101069730; end: 1010697b7; -[SCAllContactsDeepLinkPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069730(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d57960,0);
  func_0x000107c61614(param_1 + _DAT_112d57968,0);
  func_0x000107c61614(param_1 + _DAT_112d57970,0);
  *(undefined8 *)(param_1 + _DAT_112d57978) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010697b8; end: 1010697eb;  */

void FUN_1010697b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010697ec; end: 101069843; -[SCAllContactsDeepLinkPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010697ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d57960);
  func_0x000107c61610(param_1 + _DAT_112d57968);
  func_0x000107c61610(param_1 + _DAT_112d57970);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d57978));
  return;
}



/* Entry: 101069844; end: 101069863;  */

void FUN_101069844(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab720);
  return;
}



/* Entry: 101069864; end: 1010699ff;  */

void FUN_101069864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101069a00; end: 101069a43;  */

void FUN_101069a00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101069a44; end: 101069a63;  */

void FUN_101069a44(void)

{
  func_0x0001010698bc();
  return;
}



/* Entry: 101069a64; end: 101069a6b;  */

undefined8 FUN_101069a64(void)

{
  return 0;
}



/* Entry: 101069a6c; end: 101069a8b;  */

void FUN_101069a6c(void)

{
  func_0x000107c61168(&PTR_PTR_112d579e8);
  return;
}



/* Entry: 101069a8c; end: 101069aff; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider canShowCampaign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101069a8c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if (param_3 == *(long *)(param_1 + _DAT_112d57aa0) &&
        param_2 == ((long *)(param_1 + _DAT_112d57aa0))[1]) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 101069b00; end: 101069ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069b00(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
  }
  else if (param_3 != (code *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d57a88);
    *(long *)(unaff_x20 + _DAT_112d57a88) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d57a90);
    uVar4 = *puVar2;
    uVar1 = puVar2[1];
    *puVar2 = param_3;
    puVar2[1] = param_4;
    func_0x000107c6157c(param_4);
    func_0x00010058d43c(uVar4,uVar1);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d57a68);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d57a78);
    puVar7 = *(undefined8 **)(*(long *)(unaff_x20 + _DAT_112d57a80) + _DAT_1130218f0);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar5);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar2 = puVar7;
    func_0x0001010951f0();
    uVar4 = *puVar2;
    uVar1 = puVar2[1];
    FUN_101096944(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    func_0x000107c61174();
    lVar3 = param_2;
    func_0x00010109567c(param_2,uVar6,unaff_x20,uVar5,0,uVar4,uVar1,0,0,puVar7);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d57a98);
    *(long *)(unaff_x20 + _DAT_112d57a98) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    FUN_1010951fc();
    func_0x000107c61170(lVar3);
    func_0x00010058d43c(param_3,param_4);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  return;
}



/* Entry: 101069cec; end: 101069db3; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000101069d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101069d94) */

void FUN_101069cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11037b998;
    func_0x000107c613fc(&UNK_11037b998,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_10106a258;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101069b00(param_3,param_4,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101069db4; end: 101069e13; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider init] */

void FUN_101069db4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsBillboardFST.EnableFindFriendsBillboardFSTProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101069de0);
  (*pcVar1)();
}



/* Entry: 101069e14; end: 101069eb3; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069e14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a88));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d57a90),
                      ((undefined8 *)(param_1 + _DAT_112d57a90))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57a98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d57aa0 + 8))
  ;
  return;
}



/* Entry: 101069eb4; end: 101069ed3;  */

void FUN_101069eb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab7f0);
  return;
}



/* Entry: 101069ed4; end: 101069f9f;  */

/* WARNING: Possible PIC construction at 0x000101069f78: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069ed4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57a88);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57a70);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101069fa0; end: 101069fc7; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider handleTakeoverDisplayed] */

void FUN_101069fa0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101069ed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101069fc8; end: 10106a0e7;  */

/* WARNING: Possible PIC construction at 0x00010106a070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106a09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010106a0a0) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101069fc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57a88);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57a70);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d57a90);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112d57a90))[1]);
      (*pcVar4)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4c0(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10106a0e8; end: 10106a10f; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider handleAccepted] */

void FUN_10106a0e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101069fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10106a110; end: 10106a22f;  */

/* WARNING: Possible PIC construction at 0x00010106a1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106a1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010106a1e8) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106a110(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d57a88);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d57a70);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d57a90);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112d57a90))[1]);
      (*pcVar4)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4b8(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10106a230; end: 10106a257; -[_TtC29EnableFindFriendsBillboardFST37EnableFindFriendsBillboardFSTProvider handleDismissed] */

void FUN_10106a230(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10106a110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10106a258; end: 10106a263;  */

void FUN_10106a258(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010106a260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10106a264; end: 10106a26f; -[SCEnableFindFriendsBillboardFSTEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106a264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57ad0;
  func_0x000107c61428(param_1 + _DAT_112d57ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10106a270; end: 10106a27b; -[SCEnableFindFriendsBillboardFSTEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106a270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57ad0;
  func_0x000107c61428(param_1 + _DAT_112d57ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


