/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e3f5a0; end: 100e3f5df;  */

void FUN_100e3f5a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e3f5e0; end: 100e3f5e7; -[_TtC26SponsoredLensNorthstarImpl22BlockingViewController shouldPopToRootViewController] */

undefined8 FUN_100e3f5e0(void)

{
  return 0;
}



/* Entry: 100e3f5e8; end: 100e3f693; -[_TtC26SponsoredLensNorthstarImpl22BlockingViewController initWithNibName:bundle:] */

undefined1 * FUN_100e3f5e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  FUN_100e3f720();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100e3f694; end: 100e3f713; -[_TtC26SponsoredLensNorthstarImpl22BlockingViewController initWithCoder:] */

undefined1 * FUN_100e3f694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_100e3f720();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100e3f714; end: 100e3f71f;  */

void FUN_100e3f714(void)

{
  FUN_100e3f720();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e3f720; end: 100e3f73f;  */

void FUN_100e3f720(void)

{
  func_0x000107c61168(&PTR_PTR_11279b0f8);
  return;
}



/* Entry: 100e3f740; end: 100e3faf7;  */

/* WARNING: Possible PIC construction at 0x000100e3f798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3f9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3fa0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3fa4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3fa6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3fa50) */
/* WARNING: Removing unreachable block (ram,0x000100e3fa10) */
/* WARNING: Removing unreachable block (ram,0x000100e3faf4) */
/* WARNING: Removing unreachable block (ram,0x000100e3fa24) */
/* WARNING: Removing unreachable block (ram,0x000100e3f9d4) */
/* WARNING: Removing unreachable block (ram,0x000100e3faf0) */
/* WARNING: Removing unreachable block (ram,0x000100e3f9f4) */
/* WARNING: Removing unreachable block (ram,0x000100e3f9b4) */
/* WARNING: Removing unreachable block (ram,0x000100e3f984) */
/* WARNING: Removing unreachable block (ram,0x000100e3faec) */
/* WARNING: Removing unreachable block (ram,0x000100e3f998) */
/* WARNING: Removing unreachable block (ram,0x000100e3f948) */
/* WARNING: Removing unreachable block (ram,0x000100e3fae8) */
/* WARNING: Removing unreachable block (ram,0x000100e3f968) */
/* WARNING: Removing unreachable block (ram,0x000100e3f928) */
/* WARNING: Removing unreachable block (ram,0x000100e3f8f8) */
/* WARNING: Removing unreachable block (ram,0x000100e3fae4) */
/* WARNING: Removing unreachable block (ram,0x000100e3f90c) */
/* WARNING: Removing unreachable block (ram,0x000100e3f8bc) */
/* WARNING: Removing unreachable block (ram,0x000100e3fae0) */
/* WARNING: Removing unreachable block (ram,0x000100e3f8dc) */
/* WARNING: Removing unreachable block (ram,0x000100e3f89c) */
/* WARNING: Removing unreachable block (ram,0x000100e3f86c) */
/* WARNING: Removing unreachable block (ram,0x000100e3fadc) */
/* WARNING: Removing unreachable block (ram,0x000100e3f880) */
/* WARNING: Removing unreachable block (ram,0x000100e3f7e0) */
/* WARNING: Removing unreachable block (ram,0x000100e3fad8) */
/* WARNING: Removing unreachable block (ram,0x000100e3f850) */
/* WARNING: Removing unreachable block (ram,0x000100e3f79c) */
/* WARNING: Removing unreachable block (ram,0x000100e3fad0) */
/* WARNING: Removing unreachable block (ram,0x000100e3f7b0) */
/* WARNING: Removing unreachable block (ram,0x000100e3fad4) */
/* WARNING: Removing unreachable block (ram,0x000100e3f7c8) */
/* WARNING: Removing unreachable block (ram,0x000100e3fa70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3f740(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112d3b720;
  func_0x000107c61604(unaff_x20 + _DAT_112d3b720,param_1);
  func_0x000107c3d614();
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618(lVar1);
  func_0x000107c41c30(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e3faf8; end: 100e3fb07; -[_TtC26SponsoredLensNorthstarImpl24WrapperSIGTrayController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100e3faf8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d3b718);
}



/* Entry: 100e3fb08; end: 100e3fbfb; -[_TtC26SponsoredLensNorthstarImpl24WrapperSIGTrayController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100e3fb08(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar1 = &lStack_40;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_112d3b718) = 1;
    func_0x000107c61614(param_1 + _DAT_112d3b720,0);
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    *(undefined1 *)(param_1 + _DAT_112d3b718) = 1;
    func_0x000107c61614(param_1 + _DAT_112d3b720,0);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  FUN_100e3fcec();
  lStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar1;
}



/* Entry: 100e3fbfc; end: 100e3fc9f; -[_TtC26SponsoredLensNorthstarImpl24WrapperSIGTrayController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100e3fbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined1 *)(param_1 + _DAT_112d3b718) = 1;
  lVar2 = param_1 + _DAT_112d3b720;
  func_0x000107c61614(lVar2,0);
  FUN_100e3fcec();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 100e3fca0; end: 100e3fcab;  */

void FUN_100e3fca0(void)

{
  FUN_100e3fcec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e3fcac; end: 100e3fcdb;  */

void FUN_100e3fcac(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e3fcdc; end: 100e3fceb; -[_TtC26SponsoredLensNorthstarImpl24WrapperSIGTrayController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d3b720);
  return;
}



/* Entry: 100e3fcec; end: 100e3fd0b;  */

void FUN_100e3fcec(void)

{
  func_0x000107c61168(&PTR_PTR_11279b1a8);
  return;
}



/* Entry: 100e3fd0c; end: 100e3fd83;  */

void FUN_100e3fd0c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100e3fd84(0,param_1,param_2);
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



/* Entry: 100e3fd84; end: 100e3fdc3;  */

void FUN_100e3fd84(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e3fdc4; end: 100e3fe83;  */

undefined1  [16] FUN_100e3fdc4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6e6f797274;
  func_0x000107c5fadc(0x6e6f797274,0xe500000000000000);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef13030);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3fe84);
  (*pcVar1)();
}



/* Entry: 100e3fe84; end: 100e3fe8f; -[SCSponsoredLensNorthstarImplEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fe84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b750;
  func_0x000107c61428(param_1 + _DAT_112d3b750,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3fe90; end: 100e3fe9b; -[SCSponsoredLensNorthstarImplEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fe90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b750;
  func_0x000107c61428(param_1 + _DAT_112d3b750,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3fe9c; end: 100e3fea7; -[SCSponsoredLensNorthstarImplEntryPoint sponsoredAttachmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fe9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b758;
  func_0x000107c61428(param_1 + _DAT_112d3b758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3fea8; end: 100e3feb3; -[SCSponsoredLensNorthstarImplEntryPoint setSponsoredAttachmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b758;
  func_0x000107c61428(param_1 + _DAT_112d3b758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3feb4; end: 100e3febf; -[SCSponsoredLensNorthstarImplEntryPoint sponsoredLensLaunchScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3feb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b760;
  func_0x000107c61428(param_1 + _DAT_112d3b760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3fec0; end: 100e3fecb; -[SCSponsoredLensNorthstarImplEntryPoint setSponsoredLensLaunchScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b760;
  func_0x000107c61428(param_1 + _DAT_112d3b760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3fecc; end: 100e3fed7; -[SCSponsoredLensNorthstarImplEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fecc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b768;
  func_0x000107c61428(param_1 + _DAT_112d3b768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3fed8; end: 100e3fee3; -[SCSponsoredLensNorthstarImplEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b768;
  func_0x000107c61428(param_1 + _DAT_112d3b768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3fee4; end: 100e3feef; -[SCSponsoredLensNorthstarImplEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fee4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b770;
  func_0x000107c61428(param_1 + _DAT_112d3b770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3fef0; end: 100e3fefb; -[SCSponsoredLensNorthstarImplEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b770;
  func_0x000107c61428(param_1 + _DAT_112d3b770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3fefc; end: 100e3ff07; -[SCSponsoredLensNorthstarImplEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3fefc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b778;
  func_0x000107c61428(param_1 + _DAT_112d3b778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3ff08; end: 100e3ff13; -[SCSponsoredLensNorthstarImplEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ff08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b778;
  func_0x000107c61428(param_1 + _DAT_112d3b778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3ff14; end: 100e3ff1f; -[SCSponsoredLensNorthstarImplEntryPoint lensStudyConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ff14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b780;
  func_0x000107c61428(param_1 + _DAT_112d3b780,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3ff20; end: 100e3ff2b; -[SCSponsoredLensNorthstarImplEntryPoint setLensStudyConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ff20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b780;
  func_0x000107c61428(param_1 + _DAT_112d3b780,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3ff2c; end: 100e3ff37; -[SCSponsoredLensNorthstarImplEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ff2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b788;
  func_0x000107c61428(param_1 + _DAT_112d3b788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3ff38; end: 100e3ff7b;  */

void FUN_100e3ff38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e3ff7c; end: 100e3ff87; -[SCSponsoredLensNorthstarImplEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ff7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b788;
  func_0x000107c61428(param_1 + _DAT_112d3b788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3ff88; end: 100e3ffdb;  */

void FUN_100e3ff88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3ffdc; end: 100e406bf;  */

/* WARNING: Possible PIC construction at 0x000100e401b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4023c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4027c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e403a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e406a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e405d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e405e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e405f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e405a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e405b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e404f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e40528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e404b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e404c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e404d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e404e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4046c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4047c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4048c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4043c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4040c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4041c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e403ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e403fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e403dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e40400) */
/* WARNING: Removing unreachable block (ram,0x000100e403f0) */
/* WARNING: Removing unreachable block (ram,0x000100e40420) */
/* WARNING: Removing unreachable block (ram,0x000100e40410) */
/* WARNING: Removing unreachable block (ram,0x000100e40450) */
/* WARNING: Removing unreachable block (ram,0x000100e40440) */
/* WARNING: Removing unreachable block (ram,0x000100e40490) */
/* WARNING: Removing unreachable block (ram,0x000100e40480) */
/* WARNING: Removing unreachable block (ram,0x000100e40470) */
/* WARNING: Removing unreachable block (ram,0x000100e404ec) */
/* WARNING: Removing unreachable block (ram,0x000100e404dc) */
/* WARNING: Removing unreachable block (ram,0x000100e404cc) */
/* WARNING: Removing unreachable block (ram,0x000100e404bc) */
/* WARNING: Removing unreachable block (ram,0x000100e4052c) */
/* WARNING: Removing unreachable block (ram,0x000100e4051c) */
/* WARNING: Removing unreachable block (ram,0x000100e4050c) */
/* WARNING: Removing unreachable block (ram,0x000100e404fc) */
/* WARNING: Removing unreachable block (ram,0x000100e4058c) */
/* WARNING: Removing unreachable block (ram,0x000100e40574) */
/* WARNING: Removing unreachable block (ram,0x000100e40564) */
/* WARNING: Removing unreachable block (ram,0x000100e40554) */
/* WARNING: Removing unreachable block (ram,0x000100e40544) */
/* WARNING: Removing unreachable block (ram,0x000100e405b8) */
/* WARNING: Removing unreachable block (ram,0x000100e405a8) */
/* WARNING: Removing unreachable block (ram,0x000100e4060c) */
/* WARNING: Removing unreachable block (ram,0x000100e405fc) */
/* WARNING: Removing unreachable block (ram,0x000100e405e4) */
/* WARNING: Removing unreachable block (ram,0x000100e405f4) */
/* WARNING: Removing unreachable block (ram,0x000100e405d4) */
/* WARNING: Removing unreachable block (ram,0x000100e406ac) */
/* WARNING: Removing unreachable block (ram,0x000100e40614) */
/* WARNING: Removing unreachable block (ram,0x000100e40620) */
/* WARNING: Removing unreachable block (ram,0x000100e4069c) */
/* WARNING: Removing unreachable block (ram,0x000100e40684) */
/* WARNING: Removing unreachable block (ram,0x000100e40674) */
/* WARNING: Removing unreachable block (ram,0x000100e403ac) */
/* WARNING: Removing unreachable block (ram,0x000100e40624) */
/* WARNING: Removing unreachable block (ram,0x000100e4039c) */
/* WARNING: Removing unreachable block (ram,0x000100e40384) */
/* WARNING: Removing unreachable block (ram,0x000100e4036c) */
/* WARNING: Removing unreachable block (ram,0x000100e4035c) */
/* WARNING: Removing unreachable block (ram,0x000100e4034c) */
/* WARNING: Removing unreachable block (ram,0x000100e40280) */
/* WARNING: Removing unreachable block (ram,0x000100e4065c) */
/* WARNING: Removing unreachable block (ram,0x000100e40330) */
/* WARNING: Removing unreachable block (ram,0x000100e40240) */
/* WARNING: Removing unreachable block (ram,0x000100e401bc) */
/* WARNING: Removing unreachable block (ram,0x000100e40598) */
/* WARNING: Removing unreachable block (ram,0x000100e401c0) */
/* WARNING: Removing unreachable block (ram,0x000100e405c4) */
/* WARNING: Removing unreachable block (ram,0x000100e401e4) */
/* WARNING: Removing unreachable block (ram,0x000100e403e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ffdc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5b7a4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar7 = unaff_x20;
      func_0x000107c5b7e0();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61170(lVar5);
        lVar5 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c3f284();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar1;
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
              func_0x000107c4b470();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(lVar5);
                lVar5 = lVar1;
              }
              else {
                func_0x000107c3f0f8();
                func_0x000107c61180();
                if (unaff_x20 == 0) {
                  func_0x000107c61170(lVar5);
                  lVar5 = lVar1;
                }
                else {
                  lVar5 = 0;
                  FUN_100e3c608();
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar5 + 0x10) = 0;
                  lVar4 = _DAT_112f95ef0;
                  lVar6 = *(long *)(lVar7 + _DAT_112f95f38);
                  func_0x000107c61428(lVar6 + _DAT_112f95ef0,auStack_80,0,0);
                  lVar5 = lVar7;
                  if (*(long *)(lVar6 + lVar4) != 0) {
                    lVar7 = *(long *)(lVar2 + _DAT_1130385c0);
                    func_0x000107c61174();
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    if (lVar7 != 0) {
                      uVar8 = *(undefined8 *)(lVar1 + _DAT_112f962c0);
                      func_0x000107c6157c(uVar8);
                      func_0x0001000d224c(auStack_d0);
                      func_0x000107c61574(uVar8);
                      if (lStack_b8 != 0) {
                        FUN_100e3c4d0(auStack_d0,auStack_a8);
                        func_0x000107c4af30(lVar3);
                        func_0x000107c61180();
                        func_0x000107c5c734();
                        func_0x000107c61180();
                        lVar5 = lVar3;
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
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 100e406c0; end: 100e406e7; -[SCSponsoredLensNorthstarImplEntryPoint begin] */

void FUN_100e406c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e3ffdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e406e8; end: 100e407cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e406e8(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3b790);
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      func_0x000107c6157c(lVar1);
      func_0x000107c6157c(lVar2);
      FUN_100e3dc3c(auStack_90);
      FUN_100e40c24(auStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x10))(uStack_78,lStack_70);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(lVar1);
      FUN_100e40efc(auStack_90);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100e407cc; end: 100e407ff; -[SCSponsoredLensNorthstarImplEntryPoint end] */

void FUN_100e407cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e406e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e40800; end: 100e40c23;  */

void FUN_100e40800(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10ed0a0)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef12f60,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59640();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10ecfb0)) ||
           (func_0x000107c605b8(0xd000000000000018,0x800000010ef13050,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5965c();
        }
        else {
          uVar2 = 0x49556172656d6163;
          if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
             (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530ec();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
               (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53104();
            }
            else {
              if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ecf70)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000012,0x800000010ef13090,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10ecf50)) ||
                     (func_0x000107c605b8(0xd00000000000001e,0x800000010ef130b0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55e90();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ecf30)) &&
                       (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SponsoredLensNorthstarImpl/SCSponsoredLensNorthstarImplEntryPoint.swift"
                                          ,0x47,2,0x48,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e40c24);
                      (*pcVar1)();
                    }
                    FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53024();
                  }
                  goto LAB_100e40894;
                }
              }
              FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55db4();
            }
          }
        }
      }
      goto LAB_100e40894;
    }
  }
  FUN_100e40c24(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100e40894:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e40c24; end: 100e40c47;  */

long * FUN_100e40c24(long *param_1,long param_2)

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



/* Entry: 100e40c48; end: 100e40cf3; -[SCSponsoredLensNorthstarImplEntryPoint setValue:forIvarName:] */

void FUN_100e40c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e40800(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100e40efc(auStack_50);
  return;
}



/* Entry: 100e40cf4; end: 100e40ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e40cf4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3b750,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b758,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b760,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b768,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b770,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b778,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b780,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b788,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3b790) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e40de0; end: 100e40dff; -[SCSponsoredLensNorthstarImplEntryPoint init] */

void FUN_100e40de0(void)

{
  FUN_100e40cf4();
  return;
}



/* Entry: 100e40e00; end: 100e40e33;  */

void FUN_100e40e00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e40e34; end: 100e40edb; -[SCSponsoredLensNorthstarImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e40e34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3b750);
  func_0x000107c61610(param_1 + _DAT_112d3b758);
  func_0x000107c61610(param_1 + _DAT_112d3b760);
  func_0x000107c61610(param_1 + _DAT_112d3b768);
  func_0x000107c61610(param_1 + _DAT_112d3b770);
  func_0x000107c61610(param_1 + _DAT_112d3b778);
  func_0x000107c61610(param_1 + _DAT_112d3b780);
  func_0x000107c61610(param_1 + _DAT_112d3b788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3b790));
  return;
}



/* Entry: 100e40edc; end: 100e40efb;  */

void FUN_100e40edc(void)

{
  func_0x000107c61168(&PTR_PTR_11279b2a8);
  return;
}



/* Entry: 100e40efc; end: 100e40f1b;  */

void FUN_100e40efc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100e40f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100e40f1c; end: 100e41897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e40f1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,long param_10,long param_11,undefined8 param_12,long param_13)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined *puVar17;
  long *plVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar1 = param_7;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar23 = *(ulong *)(param_8 + _DAT_113092298);
  uVar19 = *(undefined8 *)(param_9 + _DAT_11304a478);
  uVar22 = *(undefined8 *)(param_10 + _DAT_1130115c0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  lVar2 = 0;
  func_0x000100b88c50();
  func_0x000107c61534();
  *(ulong *)(lVar2 + 0x10) = uVar23;
  if (cRam0000000112d3bae0 == '\0') {
    func_0x000107c615f4(uVar23,2);
    func_0x000107c6157c(uVar19);
    func_0x000107c6157c(uVar22);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_12);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar19);
    func_0x000107c61574(uVar22);
    func_0x000107c615e8(uVar23);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
  }
  else {
    if (cRam0000000112d3bae0 == '\x01') {
      func_0x000107c615f4(uVar23,2);
      func_0x000107c6157c(uVar19);
      func_0x000107c6157c(uVar22);
      func_0x000107c61174(param_5);
    }
    else {
      func_0x000107c615f4(uVar23,2);
      func_0x000107c6157c(uVar19);
      func_0x000107c6157c(uVar22);
      uVar3 = param_5;
      func_0x000107c61174(param_5);
      uVar4 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010ef13140);
      uVar5 = uVar23;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61574(lVar2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_13);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_12);
        func_0x000107c61170(uVar1);
        func_0x000107c61574(uVar19);
        func_0x000107c61574(uVar22);
        func_0x000107c615e8(uVar23);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        return unaff_x20;
      }
    }
    lVar6 = param_4;
    func_0x000107c4aeb0();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar6 == 0) {
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar23);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_13);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_12);
      func_0x000107c61170(uVar1);
      func_0x000107c61574(uVar19);
      func_0x000107c61574(uVar22);
    }
    else {
      lVar7 = *(long *)(param_3 + _DAT_1130385c0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(uVar23);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_13);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_12);
        func_0x000107c61170(uVar1);
        func_0x000107c61574(uVar19);
        func_0x000107c61574(uVar22);
      }
      else {
        func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
        uVar4 = uVar1;
        func_0x0001000bda74();
        func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
        func_0x000107c615f0(lVar7);
        uVar3 = param_6;
        func_0x000107c4b1cc();
        func_0x000107c61180();
        uVar8 = uVar3;
        func_0x0001000bda74();
        func_0x000107c61170(uVar3);
        lVar9 = 0;
        func_0x000100b88c90();
        func_0x000107c613fc();
        *(undefined1 *)(lVar9 + 0x28) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined8 *)(lVar9 + 0x10) = uVar4;
        *(long *)(lVar9 + 0x18) = lVar7;
        *(undefined8 *)(lVar9 + 0x20) = uVar8;
        uVar20 = *(undefined8 *)(param_13 + _DAT_113012e50);
        lVar10 = 0;
        func_0x000100b88cb0();
        lVar11 = lVar10;
        func_0x000107c613fc();
        puVar12 = PTR_PTR_1126a5e50;
        func_0x000107c610f8();
        func_0x000107c6157c(uVar4);
        func_0x000107c61174();
        func_0x000107c453e4();
        *(undefined **)(lVar11 + 0x10) = puVar12;
        func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
        lVar13 = lVar6;
        func_0x000107c3d14c(lVar6);
        func_0x000107c61180();
        lVar14 = lVar13;
        func_0x0001000b637c();
        func_0x000107c61170(lVar13);
        uVar3 = 0x112d3b7d8;
        func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
        puVar12 = &UNK_100b898ac;
        func_0x0001000bfde0(&UNK_100b898ac,0,uVar3);
        func_0x000107c61574(lVar14);
        uVar21 = *(undefined8 *)(param_11 + _DAT_11306c0d0);
        func_0x0001000285a8(0x112d3b7e0,&UNK_10d904cd0);
        func_0x000107c6157c(uVar19);
        func_0x000107c6157c(uVar22);
        func_0x000107c6157c(uVar4);
        func_0x000107c6157c(lVar9);
        func_0x000107c6157c(uVar21);
        uVar3 = param_12;
        func_0x000107c4ae28();
        func_0x000107c61180();
        uVar8 = uVar3;
        func_0x000107c4ae24();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar3 = uVar8;
        func_0x0001000bda74();
        func_0x000107c61170(uVar8);
        func_0x0001000285a8(0x112d3b7e8,&UNK_10d996f80);
        uVar8 = uVar20;
        func_0x0001000bda74();
        lVar15 = 0;
        func_0x000100b896a4();
        lVar14 = lVar15;
        func_0x000107c610f8();
        lVar13 = _DAT_112d3bb78;
        ppuStack_88 = &PTR_DAT_110358f08;
        alStack_a8[0] = lVar11;
        lStack_90 = lVar10;
        func_0x000107c6157c(lVar11);
        pcVar16 = "SponsoredLensPlayablesWorkflow";
        func_0x0001000c10c0();
        func_0x000107c61180();
        *(char **)(lVar14 + lVar13) = pcVar16;
        func_0x000107c61614(lVar14 + _DAT_112d3bb88,0);
        *(undefined8 *)(lVar14 + _DAT_112d3bb20) = 0;
        *(undefined8 *)(lVar14 + _DAT_112d3bb30) = 0;
        *(undefined8 *)(lVar14 + _DAT_112d3bb38) = 0;
        *(undefined1 *)(lVar14 + _DAT_112d3bb98) = 0;
        lVar13 = _DAT_112d3bb48;
        puVar17 = PTR_PTR_1126ae568;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar14 + lVar13) = puVar17;
        lVar13 = _DAT_112d3bba0;
        puVar17 = PTR_PTR_1126ae568;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar14 + lVar13) = puVar17;
        *(undefined **)(lVar14 + _DAT_112d3bb28) = puVar12;
        *(long *)(lVar14 + _DAT_112d3bb40) = lVar9;
        *(undefined8 *)(lVar14 + _DAT_112d3bb60) = uVar4;
        *(undefined8 *)(lVar14 + _DAT_112d3bb68) = uVar19;
        *(undefined8 *)(lVar14 + _DAT_112d3bb70) = uVar22;
        *(undefined8 *)(lVar14 + _DAT_112d3bb58) = uVar21;
        *(undefined8 *)(lVar14 + _DAT_112d3bb50) = uVar3;
        *(undefined8 *)(lVar14 + _DAT_112d3bb90) = uVar8;
        func_0x000100b89734(alStack_a8,lVar14 + _DAT_112d3bb80);
        plVar18 = &lStack_b8;
        lStack_b8 = lVar14;
        lStack_b0 = lVar15;
        func_0x000107c61154(plVar18,PTR_s_init_1125d9248);
        func_0x0001000834e4(alStack_a8);
        uVar3 = param_5;
        func_0x000107c5d198(param_5);
        func_0x000107c61180();
        func_0x000107c4fc08();
        func_0x000107c61170(uVar3);
        uVar3 = param_5;
        func_0x000107c3f198(param_5);
        func_0x000107c61180();
        func_0x000107c4fc08();
        func_0x000107c61170(uVar3);
        *(long **)(unaff_x20 + 0x18) = plVar18;
        func_0x000107c61174();
        func_0x000100b897a8();
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar6);
        func_0x000107c615e8(lVar7);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(lVar9);
        func_0x000107c61170(uVar20);
        func_0x000107c61574(lVar11);
        func_0x000107c61170(plVar18);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_13);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_12);
        func_0x000107c61170(uVar1);
        func_0x000107c61574(uVar19);
        func_0x000107c61574(uVar22);
        func_0x000107c615e8(uVar23);
      }
    }
  }
  return unaff_x20;
}



/* Entry: 100e41898; end: 100e4197f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100e41898(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d3bb20);
    *(undefined8 *)(lVar1 + _DAT_112d3bb20) = 0;
    func_0x000107c61174();
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d3bb30);
    *(undefined8 *)(lVar1 + _DAT_112d3bb30) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d3bb38);
    *(undefined8 *)(lVar1 + _DAT_112d3bb38) = 0;
    func_0x000107c61170(uVar2);
    FUN_100e42080();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = uVar3;
    func_0x000107c5d198(uVar3);
    func_0x000107c61180();
    func_0x000107c5d34c();
    func_0x000107c61170(uVar2);
    func_0x000107c3f198(uVar3);
    func_0x000107c61180();
    func_0x000107c5d34c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 100e41980; end: 100e419ab;  */

void FUN_100e41980(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e419ac; end: 100e419af;  */

void FUN_100e419ac(void)

{
  return;
}



/* Entry: 100e419b0; end: 100e419d3;  */

undefined8 FUN_100e419b0(void)

{
  FUN_100e41898();
  return 0;
}



/* Entry: 100e419d4; end: 100e419fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e419d4(uint param_1)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  long *plVar14;
  undefined8 *unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  param_1 = param_1 & 1;
  puVar11 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar12 = (undefined1 *)0x1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar14 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    pcVar1 = "true";
    if (param_1 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_1 = 0x10847948;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847948,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar12 = (undefined1 *)puVar11;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar12 = (undefined1 *)puVar11;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_1 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847998,&uStack_e0,puVar12);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126aef10;
  _objc_alloc();
  lVar5 = (long)ppuVar3 + (long)_DAT_112710440;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)ppuVar3 + (long)_DAT_112710444;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)ppuVar3 + (long)_DAT_11271044c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = (long)ppuVar3 + (long)_DAT_112710450;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bff1420();
  uVar13 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112710454);
  *(undefined **)((long)ppuVar3 + (long)_DAT_112710454) = puVar4;
  _objc_release(uVar13);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = (long)ppuVar3 + (long)_DAT_112710458;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 100e419fc; end: 100e41a1f;  */

void FUN_100e419fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e41a20; end: 100e41a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e41a20(uint param_1)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long *unaff_x20;
  long *plVar14;
  undefined8 *unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  param_1 = param_1 & 1;
  puVar11 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar12 = (undefined1 *)0x1;
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar14 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    pcVar1 = "true";
    if (param_1 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_1 = 0x10847948;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847948,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar12 = (undefined1 *)puVar11;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar12 = (undefined1 *)puVar11;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_1 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110847998,&uStack_e0,puVar12);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126aef10;
  _objc_alloc();
  lVar5 = (long)ppuVar3 + (long)_DAT_112710440;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)ppuVar3 + (long)_DAT_112710444;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)ppuVar3 + (long)_DAT_11271044c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = (long)ppuVar3 + (long)_DAT_112710450;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bff1420();
  uVar13 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112710454);
  *(undefined **)((long)ppuVar3 + (long)_DAT_112710454) = puVar4;
  _objc_release(uVar13);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = (long)ppuVar3 + (long)_DAT_112710458;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 100e41a50; end: 100e41ab3; -[_TtC36SponsoredLensPlayablesImplementation31SponsoredLensPlayablesLayerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e41a50(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d3b950) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SponsoredLensPlayablesImplementation/SponsoredLensPlayablesLayerView.swift",
                      0x4a,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e41ab4);
  (*pcVar1)();
}



/* Entry: 100e41ab4; end: 100e41b4f; -[_TtC36SponsoredLensPlayablesImplementation31SponsoredLensPlayablesLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e41ab4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c49eac();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_3 + _DAT_112d3b950);
    if (lVar2 != 0) {
      func_0x000107c44ec4(param_1,param_2,lVar2,param_4,param_5);
      func_0x000107c61180();
      goto LAB_100e41b28;
    }
  }
  lVar2 = 0;
LAB_100e41b28:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100e41b50; end: 100e41baf; -[_TtC36SponsoredLensPlayablesImplementation31SponsoredLensPlayablesLayerView initWithFrame:] */

void FUN_100e41b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensPlayablesImplementation.SponsoredLensPlayablesLayerView",0x44,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e41b7c);
  (*pcVar1)();
}



/* Entry: 100e41bb0; end: 100e41be7; -[_TtC36SponsoredLensPlayablesImplementation31SponsoredLensPlayablesLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e41bb0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d3b948));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d3b950));
  return;
}



/* Entry: 100e41be8; end: 100e41c07;  */

void FUN_100e41be8(void)

{
  func_0x000107c61168(&PTR_PTR_11279b3a0);
  return;
}



/* Entry: 100e41c08; end: 100e41c53;  */

void FUN_100e41c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 100e41c54; end: 100e4207f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e41c54(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar1 = lStack_68;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    if (lVar1 != 0) {
      puVar2 = *(undefined **)(unaff_x20 + 0x18);
      func_0x000107c403cc();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        puVar3 = puVar2;
        func_0x000107c44dd8();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c615e8(lVar1);
        }
        else {
          lVar4 = 0;
          FUN_100e41be8();
          lVar5 = lVar4;
          func_0x000107c610f8();
          *(undefined8 *)(lVar5 + _DAT_112d3b950) = 0;
          *(long *)(lVar5 + _DAT_112d3b948) = lVar1;
          puVar7 = PTR_s_initWithFrame__1125e2948;
          lStack_78 = lVar5;
          lStack_70 = lVar4;
          func_0x000107c615f4(lVar1,2);
          plVar6 = &lStack_78;
          func_0x000107c61154(0,0,0,0,plVar6,puVar7);
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c3ea80(puVar7);
          func_0x000107c61180();
          func_0x000107c52b50(plVar6);
          func_0x000107c61170(plVar6);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(puVar7);
          lVar5 = _DAT_112d3b950;
          if (*(long *)((long)plVar6 + _DAT_112d3b950) == 0) {
            puVar7 = PTR_PTR_1126a5e58;
            func_0x000107c610f8();
            func_0x000107c49520();
            func_0x000107c61180();
            func_0x000107c3ec60(plVar6);
            func_0x000107c54b80(puVar7);
            func_0x000107c52ab8(puVar7);
            func_0x000107c61170(puVar7);
            func_0x000107c3d89c(plVar6);
            uVar12 = *(undefined8 *)((long)plVar6 + lVar5);
            *(undefined **)((long)plVar6 + lVar5) = puVar7;
            func_0x000107c61170(uVar12);
          }
          else {
            func_0x000107c5a588();
          }
          uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
          *(long **)(unaff_x20 + 0x30) = plVar6;
          func_0x000107c61174();
          func_0x000107c61170(uVar12);
          func_0x000107c4977c(puVar2);
          func_0x000107c5a050(plVar6);
          puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168();
          puVar8 = puVar7;
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(puVar8 + 0x18) = 9;
          *(undefined8 *)(puVar8 + 0x10) = 4;
          plVar9 = plVar6;
          func_0x000107c4acb0();
          func_0x000107c61180();
          puVar10 = puVar3;
          func_0x000107c4acb0(puVar3);
          func_0x000107c61180();
          plVar11 = plVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(plVar9);
          func_0x000107c61170(puVar10);
          *(long **)(puVar8 + 0x20) = plVar11;
          plVar9 = plVar6;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          puVar10 = puVar3;
          func_0x000107c5ce8c(puVar3);
          func_0x000107c61180();
          plVar11 = plVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(plVar9);
          func_0x000107c61170(puVar10);
          *(long **)(puVar8 + 0x28) = plVar11;
          plVar9 = plVar6;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar10 = puVar3;
          func_0x000107c5cbe4(puVar3);
          func_0x000107c61180();
          plVar11 = plVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(plVar9);
          func_0x000107c61170(puVar10);
          *(long **)(puVar8 + 0x30) = plVar11;
          plVar9 = plVar6;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          func_0x000107c61170(plVar6);
          puVar10 = puVar3;
          func_0x000107c3ec1c(puVar3);
          func_0x000107c61180();
          plVar11 = plVar9;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(plVar9);
          func_0x000107c61170(puVar10);
          *(long **)(puVar8 + 0x38) = plVar11;
          uVar12 = 0;
          func_0x000100847984(0);
          puVar10 = puVar8;
          func_0x000107c5fc48(puVar8,uVar12);
          func_0x000107c61574(puVar8);
          func_0x000107c3d048(puVar7);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(plVar6);
          puVar2 = puVar10;
        }
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 100e42080; end: 100e420f7;  */

void FUN_100e42080(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x28) = 0;
    uVar1 = 0;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      func_0x000107c4ff34();
      uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    }
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100e420f8; end: 100e4219f;  */

undefined8
FUN_100e420f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  long lVar1;
  
  lVar1 = param_9;
  func_0x0001000c6518(param_9,*(undefined8 *)(param_9 + 0x18));
  func_0x000100e4380c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1);
  func_0x0001000834e4(param_9);
  return param_1;
}



/* Entry: 100e421a0; end: 100e42457;  */

/* WARNING: Removing unreachable block (ram,0x000100e422ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e421a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = 0x112d3bc20;
  puVar5 = &UNK_10d904ef0;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_60 + -extraout_x8;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    if (param_1 == 0) {
      func_0x000107c615e8(lStack_58);
    }
    else {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c44300();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = param_1;
        func_0x000107c5d2d8();
        func_0x000107c61180();
        if (lVar2 == 0) {
          uVar7 = 0xe000000000000000;
          puVar3 = (undefined1 *)0x0;
        }
        else {
          lVar9 = lVar2;
          func_0x000107c3d2dc();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar9 == 0) {
            lVar2 = 0;
            func_0x000107c5eec8();
            (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar8,1,1,lVar2);
            FUN_100e43e40(puVar8,0x112d3bc20,&UNK_10d904ef0);
            puVar3 = (undefined1 *)0x0;
            uVar7 = 0xe000000000000000;
          }
          else {
            lVar2 = lVar9;
            func_0x000107c5ee30(lVar9);
            func_0x000107c61170(lVar9);
            func_0x00010006c00c(lVar2,puVar5);
            func_0x0001048dacb4(puVar8,lVar2,puVar5);
            func_0x00010006c090(lVar2,puVar5);
            lVar2 = 0;
            func_0x000107c5eec8();
            lVar9 = *(long *)(lVar2 + -8);
            uVar7 = 0;
            puVar3 = puVar8;
            (**(code **)(lVar9 + 0x38))(puVar8,0,1,lVar2);
            func_0x000107c5eeac();
            (**(code **)(lVar9 + 8))(puVar8,lVar2);
          }
        }
        uVar6 = uVar7;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar7);
        lVar2 = param_1;
        func_0x000107c5d2d8(param_1);
        func_0x000107c61180();
        lVar9 = param_1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (lVar9 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar6);
        }
        lVar4 = lStack_58;
        func_0x000107c3d3a8(lStack_58);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(lStack_58);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        return lVar4;
      }
      func_0x000107c615e8(lStack_58);
      func_0x000107c61170(param_1);
    }
  }
  return 0;
}



/* Entry: 100e42458; end: 100e42a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e42458(ulong param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long unaff_x20;
  long lVar19;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  ppuVar11 = param_2;
  func_0x0001000d224c(&puStack_a8);
  puVar8 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
LAB_100e4257c:
    lVar19 = unaff_x20 + _DAT_112d3bb80;
    uVar7 = *(undefined8 *)(lVar19 + 0x18);
    lVar9 = *(long *)(lVar19 + 0x20);
    func_0x0001000a8868(lVar19,uVar7);
    (**(code **)(lVar9 + 8))(0,uVar7,lVar9);
    return;
  }
  puVar2 = puStack_a8;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar8);
  lVar19 = _DAT_112d3bb30;
  if (puVar2 == (undefined *)0x0) goto LAB_100e4257c;
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112d3bb30);
  uVar7 = 0;
  ppuVar16 = ppuVar11;
  if (uVar3 != 0) {
    func_0x000107c61174();
    uVar4 = uVar3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    ppuVar17 = ppuVar11;
    func_0x000107c61170(uVar4);
    uVar4 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    if (uVar5 == uVar6 && ppuVar11 == ppuVar17) {
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c(ppuVar11);
      func_0x000107c6142c(ppuVar17);
      func_0x000107c61170(uVar3);
      return;
    }
    ppuVar16 = ppuVar11;
    func_0x000107c605b8(uVar5,ppuVar11,uVar6,ppuVar17,0);
    func_0x000107c6142c(ppuVar11);
    func_0x000107c6142c(ppuVar17);
    func_0x000107c61170(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_100e42a5c;
    if (*(long *)(unaff_x20 + lVar19) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_100e42a84();
      uVar7 = *(undefined8 *)(unaff_x20 + lVar19);
    }
  }
  *(ulong *)(unaff_x20 + lVar19) = param_1;
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3bb38);
  *(undefined ***)(unaff_x20 + _DAT_112d3bb38) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar7);
  lVar19 = *(long *)(unaff_x20 + lVar19);
  if (lVar19 == 0) {
    ppuVar11 = param_2;
    func_0x000107c61174(param_2);
  }
  else {
    func_0x000107c61174(param_2);
    func_0x000107c61174();
    func_0x0001000d224c(&puStack_a8);
    ppuVar11 = ppuStack_88;
    puVar8 = puStack_90;
    func_0x0001000a8868(&puStack_a8,puStack_90);
    (*(code *)ppuVar11[1])(puVar8);
    lVar9 = lVar19;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c5faec();
    ppuVar16 = ppuVar11;
    func_0x000107c61170(lVar9);
    puStack_d8 = (undefined *)0x0;
    lStack_d0 = lVar10;
    func_0x0001007d6d78(&puStack_d8);
    func_0x000107c6142c(ppuVar11);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(lVar19);
    ppuVar11 = &puStack_a8;
    func_0x0001000834e4(ppuVar11);
  }
  func_0x000107c5ed70(_DAT_1138121e8);
  puVar8 = PTR_PTR_1126a5e60;
  func_0x000107c610f8();
  func_0x000107c5fadc(ppuVar11,ppuVar16);
  func_0x000107c6142c(ppuVar16);
  func_0x000107c47f30();
  func_0x000107c61170(ppuVar11);
  if (((undefined8 *)((long)param_2 + _DAT_1138121f8))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)((long)param_2 + _DAT_1138121f8);
    func_0x000107c5fadc(uVar7);
  }
  func_0x000107c52774(puVar8);
  func_0x000107c61170(uVar7);
  if (((undefined8 *)((long)param_2 + _DAT_113812200))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)((long)param_2 + _DAT_113812200);
    func_0x000107c5fadc(uVar7);
  }
  func_0x000107c527ec(puVar8);
  func_0x000107c61170(uVar7);
  func_0x0001000d224c(&puStack_a8);
  func_0x0001000a8868(&puStack_a8,puStack_90);
  puVar12 = puVar2;
  (*(code *)ppuStack_88[1])(puVar2,*(undefined8 *)(unaff_x20 + _DAT_112d3bb68));
  ppuVar11 = &puStack_a8;
  func_0x0001000834e4();
  func_0x000100e43df4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar13 = &UNK_110358f30;
  func_0x000107c613fc(&UNK_110358f30,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3bb48);
  func_0x000107c615f0(puVar12);
  func_0x000107c6157c(puVar13);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d3bba0);
  func_0x000107c5cb24();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126a5e68;
  func_0x000107c610f8(PTR_PTR_1126a5e68);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_88 = (undefined **)FUN_100e42b90;
  uStack_80 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110358f78;
  ppuVar16 = &puStack_a8;
  func_0x000107c60bc4(ppuVar16);
  uStack_b8 = 0x100e42b94;
  uStack_b0 = 0;
  puStack_d8 = puVar1;
  lStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_110358fa0;
  ppuVar17 = &puStack_d8;
  func_0x000107c60bc4(ppuVar17);
  pcStack_e8 = FUN_100e43e14;
  puStack_108 = puVar1;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_110358fc8;
  ppuVar18 = &puStack_108;
  puStack_e0 = puVar13;
  func_0x000107c60bc4(ppuVar18);
  func_0x000107c495b4(puVar15);
  func_0x000107c615e8(puVar12);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(uStack_b0);
  uVar7 = uStack_80;
  func_0x000107c61574(puVar13);
  func_0x000107c61574(uVar7);
  lVar19 = unaff_x20 + _DAT_112d3bb80;
  uVar7 = *(undefined8 *)(lVar19 + 0x18);
  lVar9 = *(long *)(lVar19 + 0x20);
  func_0x0001000a8868(lVar19,uVar7);
  (**(code **)(lVar9 + 8))(1,uVar7,lVar9);
  if (*(char *)(*(long *)(unaff_x20 + _DAT_112d3bb40) + 0x28) == '\x01') {
    func_0x000107c615e8(puVar12);
    func_0x000107c61170(ppuVar11);
  }
  else {
    *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112d3bb40) + 0x28) = 1;
    FUN_100e41c54(puVar8,puVar15);
    func_0x000107c615e8(puVar12);
    func_0x000107c61170(ppuVar11);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar15);
LAB_100e42a5c:
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 100e42a84; end: 100e42b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e42a84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = _DAT_112d3bb30;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    uVar5 = uStack_60;
    (**(code **)(lStack_58 + 8))(uStack_60);
    lVar3 = lVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    lVar6 = lStack_58;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uStack_90 = 2;
    lStack_88 = lVar4;
    func_0x0001007d6d78(&uStack_90);
    func_0x000107c6142c(lVar6);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(lVar2);
    func_0x0001000834e4(auStack_78);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar5);
    FUN_100e42080();
  }
  return;
}



/* Entry: 100e42b90; end: 100e42b97;  */

void FUN_100e42b90(void)

{
  return;
}



/* Entry: 100e42b98; end: 100e42cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e42b98(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112d3bb78);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_110358f30;
    func_0x000107c613fc(&UNK_110358f30,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    uStack_70 = 0x100e43e38;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110358ff0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 100e42cb8; end: 100e42d0b;  */

void FUN_100e42cb8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100e42d0c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100e42d0c; end: 100e42fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e42d0c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb08();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(unaff_x20 + _DAT_112d3bb38);
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d3bb48);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_b0 = lVar7;
    lStack_a8 = extraout_x12;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(lVar8);
    func_0x000107c46ed0(puVar3);
    func_0x000107c4d664(uVar10);
    func_0x000107c61170(puVar3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d3bba0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar10);
    func_0x000107c61170(puVar3);
    lVar7 = *(long *)(unaff_x20 + _DAT_112d3bb30);
    if (lVar7 != 0) {
      func_0x000107c61174();
      func_0x0001000d224c(auStack_88);
      lStack_b8 = lVar1;
      func_0x0001000a8868(auStack_88,uStack_70);
      uVar10 = uStack_70;
      (**(code **)(lStack_68 + 8))(uStack_70);
      lVar1 = lVar7;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar4 = lVar1;
      lVar6 = lStack_68;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      lVar1 = lStack_b8;
      uStack_a0 = 5;
      lStack_98 = lVar4;
      func_0x0001007d6d78(&uStack_a0);
      func_0x000107c6142c(lVar6);
      func_0x000107c61574(uVar10);
      func_0x000107c61170(lVar7);
      func_0x0001000834e4(auStack_88);
    }
    lVar7 = unaff_x20 + _DAT_112d3bb88;
    func_0x000107c61618();
    lVar4 = lVar8;
    if (lVar7 != 0) {
      (**(code **)(lStack_b0 + 0x10))(puVar5,lVar8 + _DAT_1138121e8,lVar1);
      func_0x000107c5eaec(lVar9,0x404e000000000000,puVar5,0);
      func_0x000107c5eae0();
      (**(code **)(lStack_a8 + 8))(lVar9,lVar2);
      lVar4 = lVar7;
      func_0x000107c4b768(lVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar8);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100e42fcc; end: 100e42ff7; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow init] */

void FUN_100e42fcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensPlayablesImplementation.SponsoredLensPlayablesWorkflow",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e42ff8);
  (*pcVar1)();
}



/* Entry: 100e42ff8; end: 100e4310f; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e430d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e430f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e430d8) */
/* WARNING: Removing unreachable block (ram,0x000100e430f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e42ff8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb58));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d3bb78));
  func_0x0001000834e4(param_1 + _DAT_112d3bb80);
  func_0x000107c61610(param_1 + _DAT_112d3bb88);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d3bb20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d3bb30));
  return;
}



/* Entry: 100e43110; end: 100e431cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e43110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(*(long *)(unaff_x20 + _DAT_112d3bb40) + 0x28) == '\x01') {
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d3bb40) + 0x30);
    lVar2 = lVar1;
    if (lVar1 != 0) {
      uVar3 = param_1;
      uVar4 = param_2;
      func_0x000107c61174();
      func_0x000107c3ec60();
      lVar2 = lVar1;
      func_0x000107c4071c(param_1,param_2,lVar1,param_6,0);
      func_0x000107c609a4(uVar3,uVar4,param_3,param_4,param_1,param_2);
      func_0x000107c61170(lVar1);
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 100e431cc; end: 100e43217; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow isPointInsideView:] */

uint FUN_100e431cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_100e43110(param_1,param_2);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 100e43218; end: 100e4321b; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow setUIHidden:] */

void FUN_100e43218(void)

{
  return;
}



/* Entry: 100e4321c; end: 100e43233; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow isCameraRecordingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100e4321c(long param_1)

{
  return *(long *)(param_1 + _DAT_112d3bb30) != 0;
}



/* Entry: 100e43234; end: 100e432a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43234(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lStack_28;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 != 0) {
      func_0x000107c445d0(lStack_28,param_2,lVar1);
      func_0x000107c615e8(lStack_28);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e432a4; end: 100e43383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e432a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar2 = uStack_50;
    (**(code **)(lStack_48 + 8))(uStack_50);
    lVar3 = lVar1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    lVar5 = lStack_48;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uStack_80 = 3;
    lStack_78 = lVar4;
    func_0x0001007d6d78(&uStack_80);
    func_0x000107c6142c(lVar5);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 100e43384; end: 100e433db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d3bb48);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c4d664(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100e433dc; end: 100e433eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e433dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lStack_28;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 != 0) {
      func_0x000107c445d0(lStack_28,param_2,lVar1);
      func_0x000107c615e8(lStack_28);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e433ec; end: 100e4344f; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x000100e43430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e43434) */

void FUN_100e433ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100e438e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e43450; end: 100e4358b; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x000100e434c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e434c8) */

void FUN_100e43450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100e439f4(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e4358c; end: 100e4360b;  */

void FUN_100e4358c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 100e4360c; end: 100e4360f;  */

void FUN_100e4360c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e43610; end: 100e43643;  */

void FUN_100e43610(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e43644; end: 100e438df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100e43644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined4 param_10,long param_11,long param_12,
                    undefined8 param_13)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_11;
  func_0x000107c614f0();
  lStack_70 = param_12;
  uStack_68 = param_13;
  func_0x0001000c5db4(auStack_88);
  (**(code **)(*(long *)(param_12 + -8) + 0x20))();
  lVar1 = _DAT_112d3bb78;
  puVar3 = &UNK_10d904e90;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_11 + lVar1) = puVar3;
  func_0x000107c61614(param_11 + _DAT_112d3bb88,0);
  *(undefined8 *)(param_11 + _DAT_112d3bb20) = 0;
  *(undefined8 *)(param_11 + _DAT_112d3bb30) = 0;
  *(undefined8 *)(param_11 + _DAT_112d3bb38) = 0;
  *(undefined1 *)(param_11 + _DAT_112d3bb98) = 0;
  lVar1 = _DAT_112d3bb48;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_11 + lVar1) = puVar3;
  lVar1 = _DAT_112d3bba0;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_11 + lVar1) = puVar3;
  *(undefined8 *)(param_11 + _DAT_112d3bb28) = param_1;
  *(undefined8 *)(param_11 + _DAT_112d3bb40) = param_2;
  *(undefined8 *)(param_11 + _DAT_112d3bb60) = param_3;
  *(undefined8 *)(param_11 + _DAT_112d3bb68) = param_4;
  *(undefined8 *)(param_11 + _DAT_112d3bb70) = param_5;
  *(undefined8 *)(param_11 + _DAT_112d3bb58) = param_6;
  *(undefined8 *)(param_11 + _DAT_112d3bb50) = param_7;
  *(undefined8 *)(param_11 + _DAT_112d3bb90) = param_8;
  func_0x000100b89734(auStack_88,param_11 + _DAT_112d3bb80);
  lStack_98 = param_11;
  plVar4 = &lStack_98;
  lStack_90 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_88);
  return plVar4;
}



/* Entry: 100e438e0; end: 100e439f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e438e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar2 = uStack_50;
    (**(code **)(lStack_48 + 8))(uStack_50);
    lVar3 = lVar1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    lVar5 = lStack_48;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uStack_80 = 1;
    lStack_78 = lVar4;
    func_0x0001007d6d78(&uStack_80);
    func_0x000107c6142c(lVar5);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(auStack_68);
  }
  lVar1 = unaff_x20 + _DAT_112d3bb80;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(1,uVar2,lVar3);
  return;
}



/* Entry: 100e439f4; end: 100e43c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e439f4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d36580;
  lStack_70 = param_2;
  lStack_68 = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_70 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar8 - extraout_x12_00;
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar11);
  func_0x000107c61170(param_1);
  func_0x000107c5eaf0(lVar9);
  (**(code **)(lVar4 + 8))(lVar11,lVar1);
  lVar1 = lVar9;
  (**(code **)(lVar6 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_100e43e40(lVar9,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar5 = *(code **)(lVar6 + 0x20);
    (*pcVar5)(uVar7,lVar9,lVar2);
    if (*(long *)(lStack_70 + _DAT_112d3bb38) == 0) {
      (**(code **)(lVar6 + 8))(uVar7,lVar2);
    }
    else {
      (**(code **)(lVar6 + 0x10))
                (lVar10,*(long *)(lStack_70 + _DAT_112d3bb38) + _DAT_1138121e8,lVar2);
      (*pcVar5)(lVar8,lVar10,lVar2);
      uVar3 = uVar7;
      func_0x000107c5edac(uVar7,lVar8);
      if ((uVar3 & 1) != 0) {
        (**(code **)(lStack_68 + 0x10))(lStack_68,1);
        pcVar5 = *(code **)(lVar6 + 8);
        (*pcVar5)(lVar8,lVar2);
        (*pcVar5)(uVar7,lVar2);
        return;
      }
      pcVar5 = *(code **)(lVar6 + 8);
      (*pcVar5)(lVar8,lVar2);
      (*pcVar5)(uVar7,lVar2);
    }
  }
  (**(code **)(lStack_68 + 0x10))(lStack_68,0);
  return;
}



/* Entry: 100e43c70; end: 100e43dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43c70(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d3bba0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61604(unaff_x20 + _DAT_112d3bb88,param_1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3bb30);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar6 = uStack_50;
    (**(code **)(lStack_48 + 8))(uStack_50);
    lVar3 = lVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    lVar5 = lStack_48;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uStack_80 = 4;
    lStack_78 = lVar4;
    func_0x0001007d6d78(&uStack_80);
    func_0x000107c6142c(lVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(lVar2);
    func_0x0001000834e4(auStack_68);
  }
  lVar2 = unaff_x20 + _DAT_112d3bb80;
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar6);
  (**(code **)(lVar3 + 8))(0,uVar6,lVar3);
  return;
}



/* Entry: 100e43dd4; end: 100e43e13;  */

void FUN_100e43dd4(void)

{
  func_0x000107c61168(&PTR_PTR_11279b5a8);
  return;
}



/* Entry: 100e43e14; end: 100e43e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43e14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112d3bb78);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_110358f30;
    func_0x000107c613fc(&UNK_110358f30,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    uStack_70 = 0x100e43e38;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110358ff0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 100e43e40; end: 100e43e7f;  */

undefined8 FUN_100e43e40(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100e43e80; end: 100e43e83; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow webView:didFailNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100c98580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c98584) */

void FUN_100e43e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_100e43c70(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e43e84; end: 100e43e9f; -[_TtC36SponsoredLensPlayablesImplementation30SponsoredLensPlayablesWorkflow webView:didFailProvisionalNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100c98580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c98584) */

void FUN_100e43e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_100e43c70(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e43ea0; end: 100e43ea3; -[_TtC36SponsoredLensPlayablesImplementation25PlayableComposerNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_100e43ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_makeContainerViewControllerWithP_11260b628;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100e43ea4; end: 100e43ea7; -[_TtC36SponsoredLensPlayablesImplementation29LensPlayableComposerNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_100e43ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_makeContainerViewControllerWithP_11260b628;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100e43ea8; end: 100e43eab; -[_TtC36SponsoredLensPlayablesImplementation25PlayableComposerNavigator init] */

void FUN_100e43ea8(undefined8 param_1)

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



/* Entry: 100e43eac; end: 100e43eaf; -[_TtC36SponsoredLensPlayablesImplementation29LensPlayableComposerNavigator init] */

void FUN_100e43eac(undefined8 param_1)

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


