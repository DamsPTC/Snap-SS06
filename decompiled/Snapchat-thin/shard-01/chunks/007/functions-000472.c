/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013c03ec; end: 1013c03f7; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c03ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3e0;
  func_0x000107c61428(param_1 + _DAT_112d7a3e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c03f8; end: 1013c043b;  */

void FUN_1013c03f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013c043c; end: 1013c0447; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c043c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3e0;
  func_0x000107c61428(param_1 + _DAT_112d7a3e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013c0448; end: 1013c049b;  */

void FUN_1013c0448(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013c049c; end: 1013c04e3; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c049c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a3e8;
  func_0x000107c61428(param_1 + _DAT_112d7a3e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013c04e4; end: 1013c0547; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c04e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a3e8;
  func_0x000107c61428(param_1 + _DAT_112d7a3e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013c0548; end: 1013c07b3;  */

/* WARNING: Possible PIC construction at 0x0001013c06c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c06d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c06e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c06fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c077c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c078c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c075c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c073c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c072c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c0740) */
/* WARNING: Removing unreachable block (ram,0x0001013c0760) */
/* WARNING: Removing unreachable block (ram,0x0001013c0790) */
/* WARNING: Removing unreachable block (ram,0x0001013c0780) */
/* WARNING: Removing unreachable block (ram,0x0001013c06e4) */
/* WARNING: Removing unreachable block (ram,0x0001013c06d4) */
/* WARNING: Removing unreachable block (ram,0x0001013c06c4) */
/* WARNING: Removing unreachable block (ram,0x0001013c0730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0548(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c5dbb4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c42eb0();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            lVar7 = 0;
            FUN_1013bf7a4();
            lVar8 = lVar7;
            func_0x000107c610f8();
            *(long *)(lVar8 + _DAT_112d7a278) = lVar2;
            *(long *)(lVar8 + _DAT_112d7a280) = lVar3;
            *(long *)(lVar8 + _DAT_112d7a288) = lVar4;
            *(long *)(lVar8 + _DAT_112d7a290) = lVar5;
            *(long *)(lVar8 + _DAT_112d7a298) = lVar6;
            *(long *)(lVar8 + _DAT_112d7a2a0) = unaff_x20;
            puVar1 = PTR_s_init_1125d9248;
            lStack_70 = lVar8;
            lStack_68 = lVar7;
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(lVar6);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_70,puVar1);
            func_0x0001013bf040();
            lVar2 = unaff_x20;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1013c07b4; end: 1013c0853; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint begin] */

void FUN_1013c07b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013c0548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c0854; end: 1013c0887; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint end] */

void FUN_1013c0854(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001013c07dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013c0888; end: 1013c0bcf;  */

void FUN_1013c0888(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d1d30)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef2e2d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a474();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
            uVar2 = 0xd000000000000017;
            func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
                uVar2 = 0xd000000000000017;
                func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SelfieOnboardingImpl/SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint.swift"
                                      ,0x4b,2,0x3f,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c0bd0);
                  (*pcVar1)();
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
              goto LAB_1013c0914;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5491c();
        }
      }
    }
  }
LAB_1013c0914:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013c0bd0; end: 1013c0c7b; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint setValue:forIvarName:] */

void FUN_1013c0bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013c0888(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013c0c7c; end: 1013c0d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0c7c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d7a3c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a3c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a3d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a3d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a3e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a3e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a3f0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c0d38; end: 1013c0d57; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint init] */

void FUN_1013c0d38(void)

{
  FUN_1013c0c7c();
  return;
}



/* Entry: 1013c0d58; end: 1013c0d8b;  */

void FUN_1013c0d58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013c0d8c; end: 1013c0e13; -[SCSelfieOnboardingUnifiedPrivacyPolicyEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c0df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c0dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0d8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7a3c0);
  func_0x000107c61610(param_1 + _DAT_112d7a3c8);
  func_0x000107c61610(param_1 + _DAT_112d7a3d0);
  func_0x000107c61610(param_1 + _DAT_112d7a3d8);
  func_0x000107c61610(param_1 + _DAT_112d7a3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a3e8));
  return;
}



/* Entry: 1013c0e14; end: 1013c0e33;  */

void FUN_1013c0e14(void)

{
  func_0x000107c61168(&PTR_PTR_1127cec78);
  return;
}



/* Entry: 1013c0e34; end: 1013c0e43; -[SCSelfieOnboardingLensLaunchServices launchEventsSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7a420));
  return;
}



/* Entry: 1013c0e44; end: 1013c0edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0e44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a420) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c0edc; end: 1013c0f3b; -[SCSelfieOnboardingLensLaunchServices init] */

void FUN_1013c0edc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingLensLaunchServices.SelfieOnboardingLensLaunchServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c0f08);
  (*pcVar1)();
}



/* Entry: 1013c0f3c; end: 1013c0f4b; -[SCSelfieOnboardingLensLaunchServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a420));
  return;
}



/* Entry: 1013c0f4c; end: 1013c0f6b;  */

void FUN_1013c0f4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ced60);
  return;
}



/* Entry: 1013c0f6c; end: 1013c0fb7; -[SCSelfieOnboardingLensLaunchEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0f6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7a450);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7a450))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013c0fb8; end: 1013c1043; -[SCSelfieOnboardingLensLaunchEvent launchData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c0fb8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a458);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = 0;
  uVar3 = puVar1[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = *puVar1;
    func_0x00010006c00c(uVar4,uVar3);
    uVar2 = uVar4;
    func_0x000107c5ee20(uVar4,uVar3);
    func_0x0001000b44c0(uVar4,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013c1044; end: 1013c109b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013c1044(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112d7a458);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_100de78a0(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1013c109c; end: 1013c1193; -[SCSelfieOnboardingLensLaunchEvent setLaunchData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c109c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = -0x1000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_112d7a458);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001000b44c0(lVar3,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013c1194; end: 1013c11d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013c1194(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112d7a458;
  func_0x000107c61428(unaff_x20 + _DAT_112d7a458,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1013c11d4;
  return auVar2;
}



/* Entry: 1013c11d4; end: 1013c11d7;  */

void FUN_1013c11d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1013c11d8; end: 1013c12af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013c11d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a458);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7a450);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  func_0x000107c61428(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  FUN_100de78a0(param_3,param_4);
  func_0x0001000b44c0(uVar3,uVar4);
  puVar5 = auStack_78;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x0001000b44c0(param_3,param_4);
  return puVar5;
}



/* Entry: 1013c12b0; end: 1013c12cf;  */

void FUN_1013c12b0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cee20);
  return;
}



/* Entry: 1013c12d0; end: 1013c132b; -[SCSelfieOnboardingLensLaunchEvent init] */

void FUN_1013c12d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingLensLaunchServices.SelfieOnboardingLensLaunchEvent",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c12fc);
  (*pcVar1)();
}



/* Entry: 1013c132c; end: 1013c136b; -[SCSelfieOnboardingLensLaunchEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c132c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7a450 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112d7a458);
  uVar1 = ((ulong *)(param_1 + _DAT_112d7a458))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1013c136c; end: 1013c137b; -[SponsoredLensContextCardServices ctaProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c136c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7a488));
  return;
}



/* Entry: 1013c137c; end: 1013c145b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013c137c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000bf56c();
  *(long *)(unaff_x20 + _DAT_112d7a488) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1013c145c; end: 1013c14bb; -[SponsoredLensContextCardServices init] */

void FUN_1013c145c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensContextCardServices.SponsoredLensContextCardServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c1488);
  (*pcVar1)();
}



/* Entry: 1013c14bc; end: 1013c14cb; -[SponsoredLensContextCardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c14bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a488));
  return;
}



/* Entry: 1013c14cc; end: 1013c14eb;  */

void FUN_1013c14cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127cef00);
  return;
}



/* Entry: 1013c14ec; end: 1013c1653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c14ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112d7a4b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a4c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a4c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a4d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a4d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a4e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a4e8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c1654; end: 1013c16b3; -[SCContextBitmojiFashionActionPerformer initWithFashionTrayPresentingServices:bitmojiFetchServices:bitmojiAvatarBuilderScopeExposer:] */

void FUN_1013c1654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x0001013c15a0(param_3,param_4,param_5);
  return;
}



/* Entry: 1013c16b4; end: 1013c17e3; -[SCContextBitmojiFashionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1013c16b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103ae018;
    func_0x000107c613fc(&UNK_1103ae018,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    pcVar3 = FUN_1013c29e8;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1013c2380(param_3,param_4,param_5,param_6,pcVar3,puVar2);
  FUN_1013c2974(pcVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013c17e4; end: 1013c1843; -[SCContextBitmojiFashionActionPerformer init] */

void FUN_1013c17e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiFashionActionPerformer.BitmojiFashionActionPerformer",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c1810);
  (*pcVar1)();
}



/* Entry: 1013c1844; end: 1013c18d3; -[SCContextBitmojiFashionActionPerformer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c1890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c1894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c1844(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a4d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a4e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a4e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7a4b8));
  return;
}



/* Entry: 1013c18d4; end: 1013c1f33;  */

/* WARNING: Possible PIC construction at 0x0001013c19b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c1b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c1cc8) */
/* WARNING: Removing unreachable block (ram,0x0001013c1be4) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b00) */
/* WARNING: Removing unreachable block (ram,0x0001013c1cf4) */
/* WARNING: Removing unreachable block (ram,0x0001013c1ae8) */
/* WARNING: Removing unreachable block (ram,0x0001013c1ab4) */
/* WARNING: Removing unreachable block (ram,0x0001013c1adc) */
/* WARNING: Removing unreachable block (ram,0x0001013c19bc) */
/* WARNING: Removing unreachable block (ram,0x0001013c19cc) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b04) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b84) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b18) */
/* WARNING: Removing unreachable block (ram,0x0001013c19d0) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b68) */
/* WARNING: Removing unreachable block (ram,0x0001013c1ba8) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b7c) */
/* WARNING: Removing unreachable block (ram,0x0001013c1bac) */
/* WARNING: Removing unreachable block (ram,0x0001013c19ec) */
/* WARNING: Removing unreachable block (ram,0x0001013c1b34) */
/* WARNING: Removing unreachable block (ram,0x0001013c2974) */
/* WARNING: Removing unreachable block (ram,0x0001013c2980) */
/* WARNING: Removing unreachable block (ram,0x0001013c2978) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c18d4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [48];
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puStack_b0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d7a4e8));
  func_0x000107c61180();
  func_0x000107c615e8();
  lVar3 = _DAT_112d7a4c8;
  lVar4 = _DAT_112d7a4b8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a4c0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7a4c8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7a4d0 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(unaff_x20 + lVar4) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61174();
  uStack_98 = uVar6;
  func_0x000107c61434(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1013c1f34; end: 1013c1f7b;  */

void FUN_1013c1f34(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1013c1f7c; end: 1013c1fcf; -[SCContextBitmojiFashionActionPerformer bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_1013c1f7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1013c18d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013c1fd0; end: 1013c2197;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1013c1fd0(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong auStack_58 [5];
  
  func_0x000107c4dee8();
  func_0x000107c61180();
  if (param_1 == 0) {
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[4] = 0;
    auStack_58[3] = 0;
LAB_1013c215c:
    func_0x00010006e7f4(auStack_58 + 1);
  }
  else {
    lVar8 = *(long *)(param_1 + _DAT_11307abc8);
    func_0x000107c61434(lVar8);
    func_0x000107c61170(param_1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcab38;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1013c2144:
      auStack_58[2] = 0;
      auStack_58[1] = 0;
      auStack_58[4] = 0;
      auStack_58[3] = 0;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar8);
      goto LAB_1013c215c;
    }
    func_0x000107c61434(lVar8);
    uVar4 = param_2;
    func_0x000100029284(ppuVar1);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      goto LAB_1013c2144;
    }
    func_0x0001000bb420(*(long *)(lVar8 + 0x38) + (long)ppuVar1 * 0x20,auStack_58 + 1);
    func_0x000107c6142c(param_2);
    func_0x000107c61430(lVar8,2);
    if (auStack_58[4] == 0) goto LAB_1013c215c;
    uVar2 = 0;
    func_0x0001013c2a48(0,0x112d7a520,&PTR_PTR_1126b2390);
    puVar3 = auStack_58;
    puVar7 = auStack_58 + 1;
    func_0x000107c6147c(puVar3,puVar7,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = auStack_58[0];
      func_0x000107c40414();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c5faec();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(auStack_58[0]);
          uVar4 = uVar6 & 0xffffffffffff;
          if (((ulong)puVar7 & 0x2000000000000000) != 0) {
            uVar4 = (ulong)puVar7 >> 0x38 & 0xf;
          }
          if (uVar4 != 0) goto LAB_1013c216c;
          func_0x000107c6142c(puVar7);
          goto LAB_1013c2164;
        }
      }
      func_0x000107c61170(auStack_58[0]);
    }
  }
LAB_1013c2164:
  uVar6 = 0;
  puVar7 = (ulong *)0x0;
LAB_1013c216c:
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = uVar6;
  return auVar9;
}



/* Entry: 1013c2198; end: 1013c237f;  */

undefined1  [16] FUN_1013c2198(int param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if (param_1 == 2) {
    uVar8 = 0xef454c49464f5250;
LAB_1013c21f4:
    puVar2 = (undefined *)0x0;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar6 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x3a545845544e4f43;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = uVar8;
  }
  else {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 == 1) {
      uVar8 = 0xec000000534e454c;
      goto LAB_1013c21f4;
    }
  }
  if (param_3 == 0) {
    if (*(long *)(puVar6 + 0x10) == 0) {
      func_0x000107c6142c(puVar6);
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_1013c22ec;
    }
  }
  else {
    func_0x000107c5fb78(param_2,param_3);
    puVar2 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar2 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x3a6449736e656c;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = 0xe700000000000000;
  }
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar8 = 0x2e;
  uVar7 = 0xe100000000000000;
  func_0x000107c5fa80(0x2e,0xe100000000000000,uVar3,uVar4);
  func_0x000107c6142c(puVar6);
LAB_1013c22ec:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 1013c2380; end: 1013c2973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1013c2380(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,code *param_5,
             undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long unaff_x20;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long alStack_130 [10];
  ulong uStack_e0;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_1;
  func_0x000107c3cfdc();
  if ((int)lVar5 != 0x66) {
    if (param_5 == (code *)0x0) {
      return 0;
    }
    (*param_5)(0);
    return 0;
  }
  lVar5 = param_1;
  func_0x000107c3e9a8();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x1013c2968);
    (*pcVar21)();
  }
  lVar6 = lVar5;
  func_0x000107c3e9ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x1013c296c);
    (*pcVar21)();
  }
  func_0x000107c600f4(lVar19);
  func_0x000107c61170(lVar6);
  func_0x000107c5ed4c(&uStack_80);
  if (lStack_68 == 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = 0;
    func_0x0001013c2a48(0,0x112d7a518,&PTR_PTR_1126c20d0);
    puVar13 = PTR___sypN_11034f1a8;
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar8 = &uStack_88;
      puVar14 = &uStack_80;
      func_0x000107c6147c(puVar8,puVar14,puVar13 + 8,uVar7,6);
      uVar2 = uStack_88;
      if (((ulong)puVar8 & 1) != 0) {
        uVar9 = uStack_88;
        func_0x000107c3e544();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1013c2964);
          (*pcVar21)();
        }
        uVar10 = uVar9;
        func_0x000107c5faec();
        puVar15 = puVar14;
        func_0x000107c61170(uVar9);
        func_0x000107c6142c(puVar14);
        uVar9 = uVar10 & 0xffffffffffff;
        if (((ulong)puVar14 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)puVar14 >> 0x38 & 0xf;
        }
        if (uVar9 != 0) {
          uVar9 = uVar2;
          func_0x000107c3e544();
          func_0x000107c61180();
          if (uVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1013c2974);
            (*pcVar21)();
          }
          uVar10 = uVar9;
          func_0x000107c5faec();
          uStack_e0 = uVar10;
          func_0x000107c61170(uVar9);
          puVar11 = puStack_90;
          func_0x000107c61558();
          if (((ulong)puVar11 & 1) == 0) {
            plVar1 = (long *)(puStack_90 + 0x10);
            puStack_90 = (undefined *)0x0;
            func_0x0001000d182c(0,*plVar1 + 1,1);
          }
          uVar9 = *(ulong *)(puStack_90 + 0x10);
          if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar9) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_90 + 0x18));
            func_0x0001000d182c(puVar11,uVar9 + 1,1,puStack_90);
            puStack_90 = puVar11;
          }
          *(ulong *)(puStack_90 + 0x10) = uVar9 + 1;
          *(ulong *)(puStack_90 + uVar9 * 0x10 + 0x20) = uStack_e0;
          *(undefined8 **)(puStack_90 + uVar9 * 0x10 + 0x28) = puVar15;
        }
        func_0x000107c61170(uVar2);
      }
      func_0x000107c5ed4c(&uStack_80);
    } while (lStack_68 != 0);
  }
  (**(code **)(lVar20 + 8))(lVar19,lVar4);
  if (*(long *)(puStack_90 + 0x10) == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(0);
    }
LAB_1013c2938:
    func_0x000107c6142c(puStack_90);
  }
  else {
    FUN_1013c1fd0();
    func_0x000107c3e9a8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1013c2970);
      (*pcVar21)();
    }
    lVar5 = param_1;
    func_0x000107c5b634();
    func_0x000107c61170(param_1);
    FUN_1013c2198(lVar5,param_4,lVar4);
    puVar13 = param_4;
    func_0x000107c6142c(lVar4);
    lVar20 = *(long *)(unaff_x20 + _DAT_112d7a4e0);
    func_0x000107c3e550();
    func_0x000107c61180();
    lVar4 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar4 != 0) {
      lVar20 = lVar4;
      func_0x000107c4474c();
      func_0x000107c615e8();
      if ((int)lVar20 != 0) {
        if (*(long *)(puStack_90 + 0x10) == 1) {
          FUN_1013c2a90();
        }
        else {
          func_0x0001013c2b5c();
        }
        uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7a4d8) + _DAT_1130147f0);
        puVar16 = puVar13;
        func_0x000107c6157c(uVar7);
        func_0x000100083b20(&uStack_80);
        func_0x000107c61574(uVar7);
        uVar7 = uStack_80;
        func_0x000107c614f0();
        uVar12 = uVar7;
        func_0x000107c5eec4(lVar18);
        func_0x000107c5eeac();
        (**(code **)(lVar17 + 8))(lVar18,lVar3);
        puVar11 = &UNK_1103ae068;
        func_0x000107c613fc(&UNK_1103ae068,0x20,7);
        *(code **)(puVar11 + 0x10) = param_5;
        *(undefined8 *)(puVar11 + 0x18) = param_6;
        pcVar21 = *(code **)(lStack_78 + 8);
        func_0x0001013c2988();
        *(undefined8 *)(lVar19 + -0x10) = uVar7;
        *(long *)(lVar19 + -8) = lStack_78;
        *(undefined8 *)(lVar19 + -0x20) = 0x1013c2a8c;
        *(undefined **)(lVar19 + -0x18) = puVar11;
        *(undefined8 *)(lVar19 + -0x30) = 0;
        *(undefined8 *)(lVar19 + -0x28) = param_2;
        *(undefined8 *)(lVar19 + -0x40) = 0;
        *(undefined **)(lVar19 + -0x38) = puStack_90;
        *(undefined **)(lVar19 + -0x50) = param_4;
        *(undefined8 *)(lVar19 + -0x48) = 0;
        (*pcVar21)(0,lVar4,puVar13,uVar12,puVar16,0xd000000000000011,0x800000010ef3bc10,lVar5);
        func_0x000107c6142c(puStack_90);
        func_0x000107c615e8(uStack_80);
        func_0x000107c6142c(puVar13);
        func_0x000107c6142c(puVar16);
        func_0x000107c61574(puVar11);
        puStack_90 = param_4;
        goto LAB_1013c2938;
      }
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7a4b8);
    *(undefined **)(unaff_x20 + _DAT_112d7a4b8) = puStack_90;
    func_0x000107c61434(puStack_90);
    func_0x000107c6142c(uVar7);
    puVar14 = (undefined8 *)(unaff_x20 + _DAT_112d7a4c0);
    uVar7 = *puVar14;
    uVar12 = puVar14[1];
    *puVar14 = param_5;
    puVar14[1] = param_6;
    func_0x0001013c2988(param_5);
    func_0x0001013c2974(uVar7,uVar12);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7a4c8);
    *(undefined8 *)(unaff_x20 + _DAT_112d7a4c8) = param_2;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    plVar1 = (long *)(unaff_x20 + _DAT_112d7a4d0);
    lVar3 = plVar1[1];
    *plVar1 = lVar5;
    plVar1[1] = (long)param_4;
    func_0x000107c6142c(lVar3);
    func_0x000100513914(0);
    func_0x000107c610f8();
    lVar5 = unaff_x20;
    func_0x000107c61174();
    func_0x000107c615f0(param_3);
    uVar7 = 8;
    func_0x000103c082bc(8,param_3,unaff_x20);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112d7a4e8));
    func_0x000107c6142c(puStack_90);
    func_0x000107c61170(uVar7);
  }
  return 0;
}



/* Entry: 1013c2974; end: 1013c29c7;  */

void FUN_1013c2974(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1013c29c8; end: 1013c29e7;  */

void FUN_1013c29c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127cefc0);
  return;
}



/* Entry: 1013c29e8; end: 1013c29ef;  */

void FUN_1013c29e8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c29f0; end: 1013c2a1b;  */

void FUN_1013c29f0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013c2a1c; end: 1013c2a87;  */

void FUN_1013c2a1c(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 1013c2a88; end: 1013c2a8f;  */

void FUN_1013c2a88(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 1013c2a90; end: 1013c2c27;  */

undefined1  [16] FUN_1013c2a90(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdd;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef3bc70);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bc50);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c2b5c);
  (*pcVar1)();
}



/* Entry: 1013c2c28; end: 1013c2c37;  */

undefined1  [16] FUN_1013c2c28(void)

{
  return ZEXT816(0x1103ae090);
}



/* Entry: 1013c2c38; end: 1013c2c57; -[StoryInviteReceiverServices recipientsBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2c38(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d7a528));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013c2c58; end: 1013c2cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2c58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a528) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c2cf0; end: 1013c2d47; -[StoryInviteReceiverServices initWithRecipientsBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d7a528) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1013c2d48; end: 1013c2da7; -[StoryInviteReceiverServices init] */

void FUN_1013c2d48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryInviteReceiverServices.StoryInviteReceiverServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c2d74);
  (*pcVar1)();
}



/* Entry: 1013c2da8; end: 1013c2db7; -[StoryInviteReceiverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7a528));
  return;
}



/* Entry: 1013c2db8; end: 1013c2dd7;  */

void FUN_1013c2db8(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf0b0);
  return;
}



/* Entry: 1013c2dd8; end: 1013c2e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2dd8(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a558);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d7a560,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a568) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c2e54; end: 1013c2edb; -[SCAIRemixActionPerformer initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a558);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(param_1 + _DAT_112d7a560,0);
  *(undefined8 *)(param_1 + _DAT_112d7a568) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 1013c2edc; end: 1013c2fff;  */

/* WARNING: Possible PIC construction at 0x0001013c2f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c2f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c2edc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112d7a558);
  pcVar1 = (code *)*puVar6;
  uVar3 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  if (pcVar1 != (code *)0x0) {
    func_0x000107c6157c(uVar3);
    (*pcVar1)(0);
    FUN_100caf9a8(pcVar1,uVar3);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7a568);
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar5 = _DAT_112d7a560;
  if (lVar7 == 0) {
    lVar7 = unaff_x20 + _DAT_112d7a560;
    func_0x000107c61618();
    if (lVar7 == 0) {
      if (pcVar1 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    puVar6 = (undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c61604(puVar6,0);
    func_0x000103bb5f38();
    uVar2 = *puVar6;
    uVar4 = puVar6[1];
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar2,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c4df78(lVar7);
    FUN_100caf9a8(pcVar1,uVar3);
    func_0x000107c615e8(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1013c3000; end: 1013c304f;  */

void FUN_1013c3000(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1013c3050; end: 1013c3177; -[SCAIRemixActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1013c3050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103ae1d8;
    func_0x000107c613fc(&UNK_1103ae1d8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    pcVar3 = FUN_1013c3884;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_1013c3220(param_4,param_6,pcVar3,puVar2);
  FUN_100caf9a8(pcVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013c3178; end: 1013c31ab;  */

void FUN_1013c3178(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013c31ac; end: 1013c31f7; -[SCAIRemixActionPerformer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013c31ac(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a568));
  FUN_100caf9a8(*(undefined8 *)(param_1 + _DAT_112d7a558),
                ((undefined8 *)(param_1 + _DAT_112d7a558))[1]);
  param_1 = param_1 + _DAT_112d7a560;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013c31f8; end: 1013c321f; -[SCAIRemixActionPerformer aiRemixScopeDidComplete] */

void FUN_1013c31f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013c2edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c3220; end: 1013c383f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013c3220(undefined8 *param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long unaff_x20;
  ulong uVar18;
  undefined **ppuVar19;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_DAT_11269e618;
  uVar15 = 1;
  puVar4 = param_1;
  func_0x000107c61494(param_1,1,&puStack_68);
  if (puVar4 == (undefined8 *)0x0) {
LAB_1013c3280:
    puVar4 = param_2;
    func_0x000107c4dee8();
    func_0x000107c61180();
    if (puVar4 != (undefined8 *)0x0) goto LAB_1013c3294;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c4e230();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) goto LAB_1013c3280;
LAB_1013c3294:
    func_0x000107c61174();
    lVar2 = _DAT_11307abc8;
    uVar18 = *(ulong *)((long)puVar4 + _DAT_11307abc8);
    ppuVar5 = &PTR____CFConstantStringClassReference_110f0c038;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c038);
    if (*(long *)(uVar18 + 0x10) == 0) {
LAB_1013c330c:
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      puStack_98 = (undefined *)0x0;
      pcStack_a0 = (code *)0x0;
    }
    else {
      func_0x000107c61434(uVar18);
      uVar16 = uVar15;
      func_0x000100029284(ppuVar5);
      if ((uVar16 & 1) == 0) {
        func_0x000107c6142c(uVar18);
        goto LAB_1013c330c;
      }
      func_0x0001000bb420(*(long *)(uVar18 + 0x38) + (long)ppuVar5 * 0x20,&puStack_b0);
      func_0x000107c6142c(uVar15);
      uVar15 = uVar18;
    }
    func_0x000107c6142c(uVar15);
    if (puStack_98 == (undefined *)0x0) {
      func_0x000107c61170(puVar4);
    }
    else {
      uVar8 = 0x112d7a598;
      func_0x0001000285a8(0x112d7a598,&UNK_10d939e10);
      puVar12 = PTR___sypN_11034f1a8;
      ppuVar6 = &puStack_78;
      ppuVar5 = &puStack_b0;
      func_0x000107c6147c(ppuVar6,ppuVar5,PTR___sypN_11034f1a8 + 8,uVar8,6);
      puVar3 = puStack_78;
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x000107c61170(puVar4);
        puVar11 = puVar4;
        goto joined_r0x0001013c34b0;
      }
      ppuVar19 = *(undefined ***)((long)puVar4 + lVar2);
      ppuVar7 = &PTR____CFConstantStringClassReference_110f0c078;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
      if (ppuVar19[2] == (undefined *)0x0) {
LAB_1013c33f0:
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        pcStack_a0 = (code *)0x0;
      }
      else {
        func_0x000107c61434(ppuVar19);
        ppuVar17 = ppuVar5;
        func_0x000100029284(ppuVar7);
        if (((ulong)ppuVar17 & 1) == 0) {
          func_0x000107c6142c(ppuVar19);
          goto LAB_1013c33f0;
        }
        func_0x0001000bb420(ppuVar19[7] + (long)ppuVar7 * 0x20,&puStack_b0);
        func_0x000107c6142c(ppuVar5);
        ppuVar5 = ppuVar19;
      }
      func_0x000107c6142c(ppuVar5);
      if (puStack_98 == (undefined *)0x0) {
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(puVar3);
        goto LAB_1013c37d4;
      }
      ppuVar6 = &puStack_78;
      ppuVar5 = &puStack_b0;
      func_0x000107c6147c(ppuVar6,ppuVar5,puVar12 + 8,PTR___sSSN_11034da80,6);
      puVar11 = puStack_78;
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(puVar3);
        puVar11 = puVar4;
        goto joined_r0x0001013c34b0;
      }
      ppuVar19 = *(undefined ***)((long)puVar4 + lVar2);
      ppuVar7 = &PTR____CFConstantStringClassReference_110dcab38;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
      if (ppuVar19[2] == (undefined *)0x0) {
LAB_1013c34c0:
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        pcStack_a0 = (code *)0x0;
      }
      else {
        func_0x000107c61434(ppuVar19);
        ppuVar17 = ppuVar5;
        func_0x000100029284(ppuVar7);
        if (((ulong)ppuVar17 & 1) == 0) {
          func_0x000107c6142c(ppuVar19);
          goto LAB_1013c34c0;
        }
        func_0x0001000bb420(ppuVar19[7] + (long)ppuVar7 * 0x20,&puStack_b0);
        func_0x000107c6142c(ppuVar5);
        ppuVar5 = ppuVar19;
      }
      func_0x000107c6142c(ppuVar5);
      if (puStack_98 != (undefined *)0x0) {
        uVar8 = 0;
        FUN_1013c388c(0,0x112d7a520,&PTR_PTR_1126b2390);
        ppuVar6 = &puStack_78;
        ppuVar5 = &puStack_b0;
        func_0x000107c6147c(ppuVar6,ppuVar5,puVar12 + 8,uVar8,6);
        puVar14 = puStack_78;
        if (((ulong)ppuVar6 & 1) != 0) {
          ppuVar19 = *(undefined ***)((long)puVar4 + lVar2);
          ppuVar7 = &PTR____CFConstantStringClassReference_110e56bf8;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e56bf8);
          if (ppuVar19[2] == (undefined *)0x0) {
LAB_1013c3578:
            uStack_a8 = 0;
            puStack_b0 = (undefined *)0x0;
            puStack_98 = (undefined *)0x0;
            pcStack_a0 = (code *)0x0;
          }
          else {
            func_0x000107c61434(ppuVar19);
            ppuVar17 = ppuVar5;
            func_0x000100029284(ppuVar7);
            if (((ulong)ppuVar17 & 1) == 0) {
              func_0x000107c6142c(ppuVar19);
              goto LAB_1013c3578;
            }
            func_0x0001000bb420(ppuVar19[7] + (long)ppuVar7 * 0x20,&puStack_b0);
            func_0x000107c6142c(ppuVar5);
            ppuVar5 = ppuVar19;
          }
          func_0x000107c6142c(ppuVar5);
          if (puStack_98 == (undefined *)0x0) {
            func_0x000107c61170(puVar14);
            goto LAB_1013c37bc;
          }
          uVar8 = 0;
          FUN_1013c388c(0,0x112d7a5a0,&PTR_PTR_1126b23b0);
          ppuVar6 = &puStack_78;
          func_0x000107c6147c(ppuVar6,&puStack_b0,puVar12 + 8,uVar8,6);
          if (((ulong)ppuVar6 & 1) != 0) {
            FUN_1013c2edc();
            puVar9 = (undefined8 *)(unaff_x20 + _DAT_112d7a558);
            uVar8 = *puVar9;
            uVar1 = puVar9[1];
            *puVar9 = param_3;
            puVar9[1] = param_4;
            func_0x000100caf9b8(param_3,param_4);
            func_0x000100caf9a8(uVar8,uVar1);
            func_0x000107c4dec4();
            func_0x000107c61180();
            if (param_2 != (undefined8 *)0x0) {
              puVar9 = param_2;
              func_0x000103bb5f00();
              uVar8 = *puVar9;
              uVar1 = puVar9[1];
              func_0x000107c61434(uVar1);
              func_0x000107c5fadc(uVar8,uVar1);
              func_0x000107c6142c(uVar1);
              func_0x000107c4df78(param_2);
              func_0x000107c61170(uVar8);
              func_0x000107c61604(unaff_x20 + _DAT_112d7a560,param_2);
              func_0x000107c615e8(param_2);
            }
            pcVar10 = "performAction(_:onViewController:uiContainer:params:source:completion:)";
            func_0x0001000c10c0();
            func_0x000107c61180();
            func_0x000107c5fadc(puVar11,uStack_70);
            func_0x000107c6142c(uStack_70);
            puVar12 = &UNK_1103ae200;
            func_0x000107c613fc(&UNK_1103ae200,0x18,7);
            func_0x000107c61614(puVar12 + 0x10,unaff_x20);
            puVar13 = &UNK_1103ae228;
            func_0x000107c613fc(&UNK_1103ae228,0x38,7);
            *(char **)(puVar13 + 0x10) = pcVar10;
            *(undefined **)(puVar13 + 0x18) = puVar12;
            *(undefined8 **)(puVar13 + 0x20) = puVar14;
            *(undefined8 **)(puVar13 + 0x28) = puStack_78;
            *(undefined8 **)(puVar13 + 0x30) = param_1;
            pcStack_90 = FUN_1013c38cc;
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0x42000000;
            pcStack_a0 = FUN_1013c3000;
            puStack_98 = &UNK_1103ae240;
            ppuVar5 = &puStack_b0;
            puStack_88 = puVar13;
            func_0x000107c60bc4(ppuVar5);
            puVar12 = puStack_88;
            func_0x000107c615f0(pcVar10);
            func_0x000107c61174(puVar14);
            puVar9 = puStack_78;
            func_0x000107c61174(puStack_78);
            func_0x000107c61174(param_1);
            func_0x000107c61574(puVar12);
            func_0x000107c45084(puVar3);
            func_0x000107c60bd0(ppuVar5);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar4);
            func_0x000107c615e8(puVar3);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar9);
            func_0x000107c615e8(pcVar10);
            goto LAB_1013c37ec;
          }
          func_0x000107c61170(puVar14);
        }
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(puVar3);
        func_0x000107c6142c(uStack_70);
        puVar11 = puVar4;
        goto joined_r0x0001013c34b0;
      }
LAB_1013c37bc:
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar3);
      func_0x000107c6142c(uStack_70);
    }
LAB_1013c37d4:
    func_0x00010006e7f4(&puStack_b0);
    puVar11 = puVar4;
  }
joined_r0x0001013c34b0:
  if (param_3 != (code *)0x0) {
    (*param_3)(0);
  }
LAB_1013c37ec:
  func_0x000107c61170(puVar11);
  return 0;
}



/* Entry: 1013c3840; end: 1013c3863;  */

undefined8 FUN_1013c3840(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013c3864; end: 1013c3883;  */

void FUN_1013c3864(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf170);
  return;
}



/* Entry: 1013c3884; end: 1013c388b;  */

void FUN_1013c3884(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c388c; end: 1013c38cb;  */

void FUN_1013c388c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013c38cc; end: 1013c39bf;  */

void FUN_1013c38cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_1103ae278;
  func_0x000107c613fc(&UNK_1103ae278,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  pcStack_60 = FUN_1013c39dc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103ae290;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1013c39c0; end: 1013c39db;  */

void FUN_1013c39c0(long param_1,long param_2)

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



/* Entry: 1013c39dc; end: 1013c3d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c39dc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_100;
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar14 = auStack_f0;
  func_0x000107c61428(lVar2 + 0x10,puVar14,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      FUN_1013c2edc();
    }
    else {
      func_0x000107c61174();
      lVar4 = lVar7;
      func_0x000107c4ab80();
      if (lVar4 - 0xfU < 6) {
        lStack_100 = *(long *)(&UNK_10d939e20 + (lVar4 - 0xfU) * 8);
      }
      else {
        lStack_100 = 0;
      }
      lVar4 = lVar8;
      func_0x000107c4fde4();
      lVar5 = lVar8;
      func_0x000107c5b678(lVar8);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5faec();
      puVar15 = puVar14;
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
      func_0x000107c5b694();
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar19 = 0;
        puVar17 = (undefined1 *)0x0;
        puVar16 = puVar15;
      }
      else {
        lVar19 = lVar5;
        func_0x000107c5faec();
        puVar16 = puVar15;
        func_0x000107c61170(lVar5);
        puVar17 = puVar15;
      }
      func_0x000107c52060(lVar7);
      func_0x000107c61180();
      lVar5 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      func_0x000107c501f4();
      func_0x000107c61180();
      uVar9 = 0;
      func_0x0001038eac78(0);
      func_0x000107c610f8();
      func_0x0001038ea984(uVar9,lStack_100,0xf,lVar4,lVar6,puVar14,lVar19,puVar17,lVar5,puVar16,
                          lVar8);
      puVar10 = &UNK_1103ae2c8;
      func_0x000107c613fc(&UNK_1103ae2c8,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,uVar18);
      puVar11 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_1013c3d0c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      uStack_98 = 0x100e1779c;
      puStack_90 = &UNK_1103ae2e0;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar10;
      func_0x000107c60bc4(ppuVar12);
      pcStack_b8 = FUN_1013c3d80;
      puStack_d8 = puVar1;
      uStack_d0 = 0x42000000;
      uStack_c8 = 0x100e17304;
      puStack_c0 = &UNK_1103ae308;
      ppuVar13 = &puStack_d8;
      puStack_b0 = puVar10;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61580(puVar10,2);
      func_0x000107c47be0(puVar11);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61574(puStack_b0);
      func_0x000107c61574(puStack_80);
      func_0x000100926e50(0);
      func_0x000107c610f8();
      func_0x000107c61174(lStack_100);
      func_0x000107c61174(puVar11);
      func_0x000107c61174();
      func_0x000107c61174(lVar3);
      lVar7 = lVar3;
      func_0x0001038ea4b0();
      func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d7a568));
      func_0x000107c61574(puVar10);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      lVar2 = lStack_100;
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013c3d0c; end: 1013c3d7f;  */

void FUN_1013c3d0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  func_0x000107c5677c(param_1,param_2,0);
  func_0x000107c56784(param_1,param_2,2);
  if (lVar1 != 0) {
    func_0x000107c4f018(lVar1,param_2,param_1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1013c3d80; end: 1013c3eb7;  */

/* WARNING: Possible PIC construction at 0x0001013c3dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c3e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c3e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c3e88) */
/* WARNING: Removing unreachable block (ram,0x0001013c3ea0) */

void FUN_1013c3d80(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c49aa0();
      if ((uVar4 & 1) == 0) {
        if (param_1 == (code *)0x0) {
          func_0x000107c61174(uVar2);
        }
        else {
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          puStack_60 = &UNK_1000f6b44;
          puStack_58 = &UNK_1103ae330;
          pcStack_50 = param_1;
          uStack_48 = param_2;
          func_0x000107c60bc4(&puStack_70);
          uVar1 = uStack_48;
          func_0x000107c61174(uVar2);
          func_0x000100caf9b8(param_1,param_2);
          func_0x000107c61574(uVar1);
        }
        func_0x000107c420a8(uVar2);
        uVar3 = uVar2;
      }
      goto code_r0x000107c61170;
    }
  }
  uVar3 = uVar2;
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1013c3eb8; end: 1013c3ed7;  */

void FUN_1013c3eb8(long param_1,long param_2)

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



/* Entry: 1013c3ed8; end: 1013c3f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c3ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a5a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5d0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a5d8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c3f9c; end: 1013c4093; -[SCSoundProfileActionPerformer initWithTopicViewerScopeExposer:musicCameraScopeExposer:musicCameraScopeBuilderServices:topicViewerMusicScopeBuilderServices:musicExperiments:userDataWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c3f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a5a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a5b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d7a5b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d7a5c0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112d7a5c8) = param_6;
  *(undefined8 *)(param_1 + _DAT_112d7a5d0) = param_7;
  *(undefined8 *)(param_1 + _DAT_112d7a5d8) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 1013c4094; end: 1013c40c7;  */

void FUN_1013c4094(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013c40c8; end: 1013c4153; -[SCSoundProfileActionPerformer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c40c8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a5d8));
  if (*(long *)(param_1 + _DAT_112d7a5a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d7a5a8))[1]);
    return;
  }
  return;
}



/* Entry: 1013c4154; end: 1013c4c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1013c4154(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             code *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  
  lVar3 = param_1;
  func_0x000107c3cfdc();
  if ((int)lVar3 != 0x1c) {
LAB_1013c42e0:
    if (param_6 != (code *)0x0) {
      (*param_6)(0);
    }
    return 0;
  }
  func_0x000107c5b608();
  func_0x000107c61180();
  if (param_1 == 0) goto LAB_1013c42e0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a5a8);
  uVar6 = *puVar1;
  uVar10 = puVar1[1];
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x0001013c2988(param_6,param_7);
  func_0x0001013c2974(uVar6,uVar10);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7a5d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
LAB_1013c4214:
    lVar3 = *(long *)(unaff_x20 + _DAT_112d7a5d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5b5f4(param_1);
      func_0x000107c3d920(lVar3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    lVar13 = lVar3;
    func_0x000107c3d77c();
    func_0x000107c615e8(lVar3);
    if ((int)lVar13 != 0) goto LAB_1013c4214;
  }
  lVar3 = param_1;
  func_0x000107c5b5e8();
  if ((int)lVar3 != 0) {
    lVar8 = param_4;
    FUN_1013c50f4(param_5,param_4);
    lVar3 = param_4;
    func_0x000107c5b368();
    func_0x000107c61180();
    lVar13 = lVar3;
    func_0x000107c5b2d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar13;
    func_0x000107c5c060();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    if (lVar3 == 0) {
      lVar13 = 0;
      lVar3 = 0;
      lVar11 = lVar8;
    }
    else {
      lVar13 = lVar3;
      func_0x000107c5faec(lVar3);
      lVar11 = lVar8;
      func_0x000107c61170(lVar3);
      lVar3 = lVar8;
    }
    func_0x000107c4bfcc(param_4);
    func_0x000107c61180();
    lVar8 = param_4;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c615e8(param_4);
    lVar9 = lVar8;
    func_0x000107c5faec(lVar8);
    func_0x000107c61170(lVar8);
    func_0x0001013c4744(param_1,param_3,lVar13,lVar3,lVar9,lVar11,param_5);
    func_0x000107c6142c(lVar11);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar3);
    return 0;
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d7a5b8);
  uVar6 = uVar12;
  func_0x000107c49cd8();
  if ((int)uVar6 != 0) {
    lVar3 = param_4;
    func_0x000107c4bfcc();
    func_0x000107c61180();
    lVar13 = lVar3;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar3 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
    func_0x000107c49f78();
    puVar4 = PTR_PTR_1126b5b50;
    func_0x000107c610f8();
    func_0x000107c5fadc(lVar3,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c46f4c();
    func_0x000107c61170(lVar3);
    if (puVar4 != (undefined *)0x0) {
      lVar3 = param_4;
      func_0x000107c5b368();
      func_0x000107c61180();
      lVar13 = lVar3;
      func_0x000107c5b2d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar13;
      func_0x000107c4ab80();
      func_0x000107c61170(lVar13);
      func_0x000108435ff0();
      func_0x000108436034();
      puVar5 = PTR_PTR_1126ae6c0;
      func_0x000107c61168(PTR_PTR_1126ae6c0);
      uVar6 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5daf4(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x0001091ef76c(lVar3);
      puVar7 = PTR_PTR_1126ae6d0;
      func_0x000107c610f8();
      func_0x000107c4831c();
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126b1bb0;
      func_0x000107c61168(PTR_PTR_1126b1bb0);
      func_0x000107c405dc();
      func_0x000107c61180();
      lVar3 = param_4;
      func_0x000107c5b368();
      func_0x000107c61180();
      lVar13 = lVar3;
      func_0x000107c5b2d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar13;
      func_0x000107c4ab80();
      func_0x000107c61170(lVar13);
      if (lVar3 == 0x19) {
        lVar3 = param_2;
        func_0x000107c4d508();
        func_0x000107c61180();
        lVar13 = lVar3;
        func_0x000107c5cc14();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar13 == 0) {
          func_0x000107c61174();
          lVar13 = param_2;
        }
        lVar3 = lVar13;
        func_0x000107c4f078();
        func_0x000107c61180();
        param_2 = lVar13;
        while (lVar13 = lVar3, lVar13 != 0) {
          func_0x000107c61170(param_2);
          lVar3 = lVar13;
          func_0x000107c4f078();
          func_0x000107c61180();
          param_2 = lVar13;
        }
      }
      else {
        func_0x000107c61174(param_2);
      }
      FUN_1013c50f4(param_5,param_4);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7a5c0);
      func_0x000107c5b5f4(param_1);
      lVar3 = param_1;
      func_0x000107c4d2a4();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c4744);
        (*pcVar2)();
      }
      func_0x000107c5bb48();
      func_0x000107c61170(lVar3);
      func_0x000107c3ed78(uVar6);
      func_0x000107c61180();
      func_0x000107c42c1c(uVar12);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar4);
      goto LAB_1013c4714;
    }
  }
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d7a5a8);
  if (pcVar2 != (code *)0x0) {
    uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d7a5a8))[1];
    func_0x000107c6157c(uVar6);
    (*pcVar2)(0);
    func_0x0001013c2974(pcVar2,uVar6);
  }
LAB_1013c4714:
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 1013c4c64; end: 1013c4d8b; -[SCSoundProfileActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1013c4c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1103ae410;
    func_0x000107c613fc(&UNK_1103ae410,0x18,7);
    *(long *)(puVar1 + 0x10) = param_8;
    pcVar2 = FUN_1013c526c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_1013c4154(param_3,param_4,param_5,param_6,param_7,pcVar2,puVar1);
  FUN_1013c2974(pcVar2,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1013c4d8c; end: 1013c4e47; -[SCSoundProfileActionPerformer didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x0001013c4e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c4e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c4e0c) */
/* WARNING: Removing unreachable block (ram,0x0001013c2974) */
/* WARNING: Removing unreachable block (ram,0x0001013c2980) */
/* WARNING: Removing unreachable block (ram,0x0001013c2978) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001013c4e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c4d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7a5b0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c4ffec(uVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c615e8();
  pcVar2 = *(code **)(param_1 + _DAT_112d7a5a8);
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(((undefined8 *)(param_1 + _DAT_112d7a5a8))[1]);
    (*pcVar2)(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013c4e48; end: 1013c4ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c4e48(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126a6cb8;
  func_0x000107c61168(PTR_PTR_1126a6cb8);
  func_0x000107c6148c(param_1,puVar1);
  if (param_1 != 0) {
    func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d7a5b8));
    func_0x000107c61180();
    func_0x000107c615e8();
    pcVar2 = *(code **)(unaff_x20 + _DAT_112d7a5a8);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7a5a8))[1];
      func_0x000107c6157c(uVar3);
      (*pcVar2)(0);
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1013c4ed8; end: 1013c4f27; -[SCSoundProfileActionPerformer dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x0001013c4f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c4f14) */

void FUN_1013c4ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013c4e48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013c4f28; end: 1013c50f3;  */

void FUN_1013c4f28(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 auStack_70 [2];
  undefined4 auStack_60 [4];
  
  lVar2 = 0x112d36580;
  puVar8 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar3 = param_1;
  func_0x000107c44a84();
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x000107c4fd3c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c50e4);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5cda4();
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c4fd3c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c50e8);
      (*pcVar1)();
    }
    lVar6 = lVar3;
    func_0x000107c5cab0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c50ec);
      (*pcVar1)();
    }
    lVar3 = lVar6;
    func_0x000107c5faec(lVar6);
    puVar9 = puVar8;
    func_0x000107c61170(lVar6);
    func_0x000107c4fd3c();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c50f0);
      (*pcVar1)();
    }
    lVar6 = param_1;
    func_0x000107c3e19c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c50f4);
      (*pcVar1)();
    }
    lVar5 = lVar6;
    func_0x000107c5faec(lVar6);
    func_0x000107c61170(lVar6);
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(&stack0xffffffffffffffb0 + lVar2,1,1,lVar6);
    uVar7 = 0;
    func_0x0001043b1a4c(0);
    func_0x000107c610f8();
    *(undefined4 *)((long)auStack_60 + lVar2) = 0;
    *(undefined8 *)((long)auStack_70 + lVar2) = 0;
    *(undefined8 *)((long)auStack_70 + lVar2 + 8) = 0xf000000000000000;
    func_0x0001043b1198(uVar7,lVar4,lVar3,puVar8,lVar5,puVar9,&stack0xffffffffffffffb0 + lVar2,0,
                        0xf000000000000000);
  }
  return;
}



/* Entry: 1013c50f4; end: 1013c524b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013c50f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_113078338) == 8) {
    lVar4 = 0x85;
  }
  else if (*(long *)(param_1 + _DAT_113078338) == 5) {
    lVar4 = 0x84;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5b368(param_2);
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000107c5b2d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar1;
    func_0x000107c4ab80(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000108435ff0(lVar4);
    func_0x000108436058();
  }
  func_0x000107c5b368();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5b2d4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar2 = lVar1;
  func_0x000107c4ab80();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0x19) {
    lVar4 = 0x5c;
  }
  else if (lVar2 == 0xf) {
    lVar4 = 0x17;
  }
  else if (lVar2 == 10) {
    uVar3 = *(ulong *)(param_1 + _DAT_113078350);
    if (uVar3 < 0xf && (1L << (uVar3 & 0x3f) & 0x4030U) != 0) {
      lVar4 = 0xc6;
    }
    else {
      lVar4 = 0xc5;
      if (uVar3 != 3) {
        lVar4 = 0x12;
      }
    }
  }
  return lVar4;
}



/* Entry: 1013c524c; end: 1013c526b;  */

void FUN_1013c524c(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf240);
  return;
}



/* Entry: 1013c526c; end: 1013c5273;  */

void FUN_1013c526c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c5274; end: 1013c52cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c5274(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a608);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a610) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013c52d0; end: 1013c5337; -[SCStickerCutoutActionPerformer initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c52d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a608);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a610) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1013c5338; end: 1013c536b;  */

void FUN_1013c5338(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013c536c; end: 1013c53a7; -[SCStickerCutoutActionPerformer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c536c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a610));
  if (*(long *)(param_1 + _DAT_112d7a608) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d7a608))[1]);
    return;
  }
  return;
}



/* Entry: 1013c53a8; end: 1013c53f3; -[SCStickerCutoutActionPerformer modularStickerCutoutScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001013c53dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c53e0) */

void FUN_1013c53a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013c56cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013c53f4; end: 1013c559f;  */

/* WARNING: Possible PIC construction at 0x0001013c5558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c5568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c5578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c556c) */
/* WARNING: Removing unreachable block (ram,0x0001013c555c) */
/* WARNING: Removing unreachable block (ram,0x0001013c557c) */

void FUN_1013c53f4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined1 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_stack_00000010;
  undefined8 uStack_98;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    uStack_98 = 0;
    lVar6 = 0;
    lVar5 = param_2;
  }
  else {
    lVar6 = param_2;
    func_0x000107c5faec();
    lVar5 = lVar6;
    uStack_98 = param_2;
  }
  if (param_3 == 0) {
    param_3 = 0;
    lVar7 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar7 = lVar5;
  }
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    lVar4 = lVar5;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    lVar3 = lVar5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = lVar5;
  }
  if (in_stack_00000010 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  (*pcVar1)(uStack_98,lVar6,param_3,lVar7,param_4,lVar4,param_5,lVar3,param_6,lVar2,param_7,param_8)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 1013c55a0; end: 1013c56cb; -[SCStickerCutoutActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1013c55a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103ae4e0;
    func_0x000107c613fc(&UNK_1103ae4e0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    pcVar3 = FUN_1013c5ec0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1013c5768(param_3,param_4,param_6,pcVar3,puVar2);
  FUN_1013c2974(pcVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


