/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fe39e0; end: 102fe3a63;  */

undefined8
FUN_102fe39e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102fe3bfc();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 102fe3a64; end: 102fe3b4f; -[SCCaaSCameraPageLaunchPayload initWithReplyConfiguration:uiContainer:cameraUsageTier:featureCategoryCollection:scopedCameraType:optionalConfiguration:delegate:owner:] */

undefined8
FUN_102fe3a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  uVar1 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  uVar2 = param_3;
  FUN_102fe3bfc(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  return uVar2;
}



/* Entry: 102fe3b50; end: 102fe3b83;  */

void FUN_102fe3b50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102fe3b84; end: 102fe3bfb; -[SCCaaSCameraPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fe3be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe3be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102fe3b84(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f307d8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f307e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f307f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30800));
  param_1 = param_1 + _DAT_112f30808;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102fe3bfc; end: 102fe3d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f30808;
  func_0x000107c61614(unaff_x20 + _DAT_112f30808,0);
  lVar3 = _DAT_112f30810;
  func_0x000107c61614(unaff_x20 + _DAT_112f30810,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f307d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f307e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f307e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f307f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f307f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f30800) = param_6;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_7);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar1);
  return;
}



/* Entry: 102fe3d58; end: 102fe3d77;  */

void FUN_102fe3d58(void)

{
  func_0x000107c61168(&PTR_PTR_1128ae988);
  return;
}



/* Entry: 102fe3d78; end: 102fe3d97; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope eventListenerOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3d78(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f30840));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe3d98; end: 102fe3da7; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope presentationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f30848));
  return;
}



/* Entry: 102fe3da8; end: 102fe3db7; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102fe3da8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f30850);
}



/* Entry: 102fe3db8; end: 102fe3dff; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3db8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f30858;
  func_0x000107c61428(param_1 + _DAT_112f30858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe3e00; end: 102fe3e57; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f30858;
  func_0x000107c61428(param_1 + _DAT_112f30858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fe3e58; end: 102fe3eb7; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope init] */

void FUN_102fe3e58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedManagementScope.SCDiscoverFeedManagementScope",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe3e84);
  (*pcVar1)();
}



/* Entry: 102fe3eb8; end: 102fe3eff; -[_TtC29SCDiscoverFeedManagementScope29SCDiscoverFeedManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102fe3eb8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f30840));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30848));
  param_1 = param_1 + _DAT_112f30858;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102fe3f00; end: 102fe3f1f;  */

void FUN_102fe3f00(void)

{
  func_0x000107c61168(&PTR_PTR_1128aea80);
  return;
}



/* Entry: 102fe3f20; end: 102fe3f6b;  */

void FUN_102fe3f20(undefined8 param_1)

{
  func_0x0001000285a8(0x112f30888,&UNK_10db75a40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102fe3fd8,param_1);
  return;
}



/* Entry: 102fe3f6c; end: 102fe3fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3f6c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102fe4290();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f30890) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102fe3fd8; end: 102fe3fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3fd8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102fe4290();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f30890) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102fe3fe0; end: 102fe402b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe3fe0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f30890) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fe402c; end: 102fe4157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102fe402c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar3 = 0;
  FUN_102fe3f00();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f30858;
  func_0x000107c61614(lVar4 + _DAT_112f30858,0);
  *(undefined8 *)(lVar4 + _DAT_112f30840) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112f30848) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f30850) = param_3;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_1);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar5;
}



/* Entry: 102fe4158; end: 102fe41ff; -[_TtC29SCDiscoverFeedManagementScope37SCDiscoverFeedManagementScopeServices buildWithParentController:presentationObservable:source:eventListenerOverride:] */

void FUN_102fe4158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  FUN_102fe402c(param_3,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102fe4200; end: 102fe425f; -[_TtC29SCDiscoverFeedManagementScope37SCDiscoverFeedManagementScopeServices init] */

void FUN_102fe4200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedManagementScope.SCDiscoverFeedManagementScopeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe422c);
  (*pcVar1)();
}



/* Entry: 102fe4260; end: 102fe428f; -[_TtC29SCDiscoverFeedManagementScope37SCDiscoverFeedManagementScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f30890));
  return;
}



/* Entry: 102fe4290; end: 102fe42af;  */

void FUN_102fe4290(void)

{
  func_0x000107c61168(&PTR_PTR_1128aeb58);
  return;
}



/* Entry: 102fe42b0; end: 102fe42c7;  */

bool FUN_102fe42b0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102fe42c8; end: 102fe4307;  */

void FUN_102fe42c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f308d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db75b10;
  func_0x000107c61520(&UNK_10db75b10,&UNK_1105f9920);
  puRam0000000112f308d8 = puVar1;
  return;
}



/* Entry: 102fe4308; end: 102fe43b3;  */

void FUN_102fe4308(void)

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



/* Entry: 102fe43b4; end: 102fe43eb;  */

void FUN_102fe43b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102fe43ec; end: 102fe4647;  */

long FUN_102fe43ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102fe4648; end: 102fe465b;  */

bool FUN_102fe4648(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102fe465c; end: 102fe4733;  */

void FUN_102fe465c(void)

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



/* Entry: 102fe4734; end: 102fe4753;  */

void FUN_102fe4734(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102fe4754; end: 102fe4793;  */

void FUN_102fe4754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f308e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db75c10;
  func_0x000107c61520(&UNK_10db75c10,&UNK_1105f9aa8);
  puRam0000000112f308e0 = puVar1;
  return;
}



/* Entry: 102fe4794; end: 102fe47a3;  */

undefined1  [16] FUN_102fe4794(void)

{
  return ZEXT816(0x1105f9aa8);
}



/* Entry: 102fe47a4; end: 102fe47b3; -[_TtC24SpotlightSubFeedServices24SpotlightSubFeedServices infoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe47a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f308e8));
  return;
}



/* Entry: 102fe47b4; end: 102fe47c3; -[_TtC24SpotlightSubFeedServices24SpotlightSubFeedServices subFeedDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe47b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f308f0));
  return;
}



/* Entry: 102fe47c4; end: 102fe4827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe47c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f308e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f308f0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fe4828; end: 102fe489f; -[_TtC24SpotlightSubFeedServices24SpotlightSubFeedServices initWithInfoProvider:subFeedDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4828(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f308e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f308f0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102fe48a0; end: 102fe48ff; -[_TtC24SpotlightSubFeedServices24SpotlightSubFeedServices init] */

void FUN_102fe48a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightSubFeedServices.SpotlightSubFeedServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe48cc);
  (*pcVar1)();
}



/* Entry: 102fe4900; end: 102fe4937; -[_TtC24SpotlightSubFeedServices24SpotlightSubFeedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fe491c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe4920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f308e8));
  return;
}



/* Entry: 102fe4938; end: 102fe4957;  */

void FUN_102fe4938(void)

{
  func_0x000107c61168(&PTR_PTR_1128aec18);
  return;
}



/* Entry: 102fe4958; end: 102fe4a2b;  */

void FUN_102fe4958(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fe4a2c; end: 102fe4a4b;  */

void FUN_102fe4a2c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 102fe4a4c; end: 102fe4a87; -[SCSpotlightFeedEvent description] */

void FUN_102fe4a4c(void)

{
  undefined8 uVar1;
  
  FUN_102fe4a88();
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fe4a88; end: 102fe4b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102fe4a88(void)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112f30920);
  if (bVar1 < 3) {
    if ((1 < bVar1) && (*(char *)(unaff_x20 + _DAT_112f30928 + 8) == '\x01')) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe4abc);
      (*pcVar2)();
    }
  }
  else if (bVar1 == 3) {
    if (*(long *)(unaff_x20 + _DAT_112f30930 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe4b1c);
      (*pcVar2)();
    }
    if (*(char *)(unaff_x20 + _DAT_112f30938 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe4af4);
      (*pcVar2)();
    }
  }
  else if (*(char *)(unaff_x20 + _DAT_112f30940 + 8) == '\x01') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe4b20);
    (*pcVar2)();
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 102fe4b20; end: 102fe4b67; -[SCSpotlightFeedEvent init] */

void FUN_102fe4b20(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SpotlightSubFeedServices/SpotlightFeedEventWrapper.swift",0x38,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe4b68);
  (*pcVar1)();
}



/* Entry: 102fe4b68; end: 102fe4b6b; -[SCSpotlightFeedEvent copyWithZone:] */

void FUN_102fe4b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102fe4b6c; end: 102fe4b73; +[SCSpotlightFeedEvent willAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4b6c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4b74; end: 102fe4b7b; +[SCSpotlightFeedEvent didDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4b74(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4b7c; end: 102fe4c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4b7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4c1c; end: 102fe4cbf; +[SCSpotlightFeedEvent willSwitchToFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4cc0; end: 102fe4d83; +[SCSpotlightFeedEvent didStartPlayingStoryWithId:feedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4d84; end: 102fe4f1b; +[SCSpotlightFeedEvent didRequestPaginationForFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f30920) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30928);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30938);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f30940);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe4f1c; end: 102fe4fa3; -[SCSpotlightFeedEvent matchWillAppear:didDisappear:willSwitch:didStartPlayingStory:didRequestPagination:] */

void FUN_102fe4f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000102fe4e28(0x102fe51c4,auStack_40,0x102fe522c,auStack_60,0x102fe51d0,auStack_80,
                      FUN_102fe51e0,auStack_a0,FUN_102fe5228,auStack_c0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102fe4fa4; end: 102fe4fd7;  */

void FUN_102fe4fa4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102fe4fd8; end: 102fe4feb; -[SCSpotlightFeedEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe4fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f30930 + 8))
  ;
  return;
}



/* Entry: 102fe4fec; end: 102fe500b;  */

void FUN_102fe4fec(void)

{
  func_0x000107c61168(&PTR_PTR_1128aece0);
  return;
}



/* Entry: 102fe500c; end: 102fe5173;  */

int FUN_102fe500c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102fe5088;
        goto LAB_102fe506c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102fe506c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102fe5088:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102fe5174; end: 102fe51b3;  */

void FUN_102fe5174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db75d2c;
  func_0x000107c61520(&UNK_10db75d2c,&UNK_1105f9b90);
  puRam0000000112f30970 = puVar1;
  return;
}



/* Entry: 102fe51b4; end: 102fe51df;  */

ulong FUN_102fe51b4(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 102fe51e0; end: 102fe5227;  */

void FUN_102fe51e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fe5228; end: 102fe522f;  */

void FUN_102fe5228(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102fe51dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102fe5230; end: 102fe526f;  */

void FUN_102fe5230(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3fddc();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puRam0000000112f30ab0 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe5270);
  (*pcVar1)();
}



/* Entry: 102fe5270; end: 102fe531f; -[SCSpotlightBackgroundView reportFirstPaintBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe5270(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112f30978);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105f9d48;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102fe5320; end: 102fe53db; -[SCSpotlightBackgroundView setReportFirstPaintBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe5320(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105f9d30;
    func_0x000107c613fc(&UNK_1105f9d30,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102fe7574;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f30978);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102fe53dc; end: 102fe541f; -[SCSpotlightBackgroundView backgroundColor] */

void FUN_102fe53dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_backgroundColor_1125a28f8);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fe5420; end: 102fe54f7; -[SCSpotlightBackgroundView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe5420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_50;
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_setBackgroundColor__112639330;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  puVar1 = PTR_s_backgroundColor_1125a28f8;
  lVar4 = *(long *)(param_1 + _DAT_112f30980);
  if (lVar4 != 0) {
    lStack_50 = param_1;
    lStack_48 = lVar3;
    func_0x000107c61174();
    func_0x000107c61154(&lStack_50,puVar1);
    func_0x000107c61180();
    func_0x000107c52b50(lVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe54f8);
  (*pcVar2)();
}



/* Entry: 102fe54f8; end: 102fe55d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe54f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f30980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f30988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f30990) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f30998) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309a0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f309a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f30978);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffc0,
                      PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102fe55d8; end: 102fe56db; -[SCSpotlightBackgroundView initWithFrame:] */

void FUN_102fe55d8(void)

{
  FUN_102fe54f8();
  return;
}



/* Entry: 102fe56dc; end: 102fe5733; -[SCSpotlightBackgroundView initWithCoder:] */

void FUN_102fe56dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102fe55f8();
  return;
}



/* Entry: 102fe5734; end: 102fe5a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102fe5734(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  
  plVar8 = (long *)&stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar2 = _DAT_112f30980;
  *(undefined8 *)(unaff_x20 + _DAT_112f30980) = 0;
  lVar11 = _DAT_112f30988;
  *(undefined8 *)(unaff_x20 + _DAT_112f30988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f30990) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f30998) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309a0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f309a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309b0) = 0;
  lVar3 = _DAT_112f309b8;
  *(undefined8 *)(unaff_x20 + _DAT_112f309b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f309c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f30978);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  func_0x000107c61170(uVar10);
  puVar5 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  func_0x000107c610f8();
  func_0x000107c45558();
  uVar10 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined **)(unaff_x20 + lVar11) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102fe5a30);
    (*pcVar4)();
  }
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar7 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c53598(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_1;
  func_0x000107c615f4(param_1,2);
  func_0x000107c615e8(uVar10);
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff80,PTR_s_initWithFrame__1125e2948);
  lVar2 = _DAT_112f30980;
  lVar11 = *(long *)((long)plVar8 + _DAT_112f30980);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102fe5a34);
    (*pcVar4)();
  }
  plVar9 = plVar8;
  func_0x000107c61174();
  func_0x000107c4aba4(lVar11);
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000108f4a4d4();
  func_0x000107c615e8(param_1);
  uVar12 = 0;
  if ((int)uVar10 == 0) {
    uVar12 = 0x4034000000000000;
  }
  func_0x000107c539d4(uVar12,lVar11);
  func_0x000107c61170(lVar11);
  lVar11 = *(long *)((long)plVar8 + lVar2);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102fe5a38);
    (*pcVar4)();
  }
  func_0x000107c61174();
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c52b50(lVar11);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar6);
  if (*(long *)((long)plVar8 + lVar2) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102fe5a3c);
    (*pcVar4)();
  }
  plVar8 = plVar9;
  func_0x000107c3d89c();
  func_0x000103f1ee70();
  uVar10 = *(undefined8 *)(*plVar8 + _DAT_11302e940);
  uVar12 = ((undefined8 *)(*plVar8 + _DAT_11302e940))[1];
  func_0x000107c61434(uVar12);
  func_0x000107c5fadc(uVar10,uVar12);
  func_0x000107c6142c(uVar12);
  uVar12 = param_1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar10);
  if ((int)uVar12 != 0) {
    FUN_102fe5a40();
    FUN_102fe5e08();
  }
  if (*(long *)((long)plVar9 + _DAT_112f30988) != 0) {
    func_0x000107c3d89c(plVar9);
    func_0x000107c61170(plVar9);
    func_0x000107c615e8(param_1);
    return plVar9;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102fe5a40);
  (*pcVar4)();
}



/* Entry: 102fe5a40; end: 102fe5e07;  */

/* WARNING: Possible PIC construction at 0x000102fe5acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe5db4) */
/* WARNING: Removing unreachable block (ram,0x000102fe5d74) */
/* WARNING: Removing unreachable block (ram,0x000102fe5cbc) */
/* WARNING: Removing unreachable block (ram,0x000102fe5bbc) */
/* WARNING: Removing unreachable block (ram,0x000102fe5b58) */
/* WARNING: Removing unreachable block (ram,0x000102fe5ad0) */
/* WARNING: Removing unreachable block (ram,0x000102fe5ddc) */

void FUN_102fe5a40(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c55528();
  uVar2 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f118ed0);
  func_0x000107c520f4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102fe5e08; end: 102fe6033;  */

/* WARNING: Possible PIC construction at 0x000102fe5f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe5fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe5f68) */
/* WARNING: Removing unreachable block (ram,0x000102fe5f28) */
/* WARNING: Removing unreachable block (ram,0x000102fe5fb8) */

void FUN_102fe5e08(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = 0x112f30a38;
  func_0x0001000285a8(0x112f30a38,&UNK_10db75e08);
  func_0x000107c61538();
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  FUN_102fe6a0c(uVar1,lVar2);
  func_0x000107c61408(lVar2 + 0x20,4,PTR___sSSN_11034da80);
  if (uVar1 >> 0x3e == 0) {
    func_0x000107c61434(uVar1);
    func_0x000107c605f8();
    uVar3 = 0;
    FUN_102fe757c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = uVar1;
  }
  else {
    uVar5 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar5 = uVar1;
    }
    uVar3 = 0;
    FUN_102fe757c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61434(uVar1);
    func_0x000107c60458(uVar5,uVar3);
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c6142c(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  FUN_102fe757c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar1 = uVar5;
  func_0x000107c5fc48(uVar5,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c45784(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102fe6034; end: 102fe6063; -[SCSpotlightBackgroundView initWithCircumstanceEngine:] */

void FUN_102fe6034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_102fe5734(param_3);
  return;
}



/* Entry: 102fe6064; end: 102fe60c3; -[SCSpotlightBackgroundView startWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe6064(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (*(long *)(param_1 + _DAT_112f30988) != 0) {
    func_0x000107c5ba54();
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe60c4);
  (*pcVar1)();
}



/* Entry: 102fe60c4; end: 102fe6123; -[SCSpotlightBackgroundView stopWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe60c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (*(long *)(param_1 + _DAT_112f30988) != 0) {
    func_0x000107c5be00();
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fe6124);
  (*pcVar1)();
}



/* Entry: 102fe6124; end: 102fe61db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe6124(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_didMoveToWindow_112527020);
  lVar3 = unaff_x20;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f30978);
    func_0x000107c61428(puVar1,auStack_58,1,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x00010058d43c(pcVar5,uVar4);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x00010058d43c(uVar4,uVar2);
    }
  }
  FUN_102fe61dc();
  return;
}



/* Entry: 102fe61dc; end: 102fe651b;  */

/* WARNING: Possible PIC construction at 0x000102fe625c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe6288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe62bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe62e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe6364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe63a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe63f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe641c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe643c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe646c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe64c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe64e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe650c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe64e4) */
/* WARNING: Removing unreachable block (ram,0x000102fe64cc) */
/* WARNING: Removing unreachable block (ram,0x000102fe6470) */
/* WARNING: Removing unreachable block (ram,0x000102fe6440) */
/* WARNING: Removing unreachable block (ram,0x000102fe6420) */
/* WARNING: Removing unreachable block (ram,0x000102fe63f4) */
/* WARNING: Removing unreachable block (ram,0x000102fe63a8) */
/* WARNING: Removing unreachable block (ram,0x000102fe6368) */
/* WARNING: Removing unreachable block (ram,0x000102fe637c) */
/* WARNING: Removing unreachable block (ram,0x000102fe636c) */
/* WARNING: Removing unreachable block (ram,0x000102fe62e4) */
/* WARNING: Removing unreachable block (ram,0x000102fe62c0) */
/* WARNING: Removing unreachable block (ram,0x000102fe6260) */
/* WARNING: Removing unreachable block (ram,0x000102fe6274) */
/* WARNING: Removing unreachable block (ram,0x000102fe6278) */
/* WARNING: Removing unreachable block (ram,0x000102fe627c) */
/* WARNING: Removing unreachable block (ram,0x000102fe6328) */
/* WARNING: Removing unreachable block (ram,0x000102fe6284) */
/* WARNING: Removing unreachable block (ram,0x000102fe6510) */
/* WARNING: Removing unreachable block (ram,0x000102fe62dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe61dc(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f30998);
  if ((lVar3 == 0) || (lVar2 = *(long *)(unaff_x20 + _DAT_112f309a0), lVar2 == 0)) {
    return;
  }
  cVar1 = *(char *)(unaff_x20 + _DAT_112f309a8);
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  if (cVar1 == '\x01') {
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (unaff_x20 != 0) goto code_r0x000107c61170;
  }
  func_0x000107c5fadc(0xd000000000000019,0x800000010f118df0);
  func_0x000107c4fe90(lVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102fe651c; end: 102fe6543; -[SCSpotlightBackgroundView didMoveToWindow] */

void FUN_102fe651c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102fe6124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fe6544; end: 102fe663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe6544(double param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  lVar1 = _DAT_112f30980;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f30980);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe6630);
    (*pcVar2)();
  }
  func_0x000107c61174();
  func_0x000107c3ec60();
  func_0x000107c54b80(lVar3);
  func_0x000107c61170(lVar3);
  FUN_102fe663c();
  FUN_102fe6818();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f30988);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe6634);
    (*pcVar2)();
  }
  lVar4 = *(long *)(unaff_x20 + lVar1);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe6638);
    (*pcVar2)();
  }
  func_0x000107c61174();
  func_0x000107c438d4(lVar4);
  func_0x000107c609bc();
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    dVar5 = param_1 + -15.0;
    func_0x000107c438d4();
    func_0x000107c609c0();
    func_0x000107c54b80(dVar5,param_1 + -15.0,0x403e000000000000,0x403e000000000000,lVar3);
    func_0x000107c61170(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102fe663c);
  (*pcVar2)();
}



/* Entry: 102fe663c; end: 102fe6817;  */

/* WARNING: Possible PIC construction at 0x000102fe6764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe67cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe67d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe6768) */
/* WARNING: Removing unreachable block (ram,0x000102fe67d0) */
/* WARNING: Removing unreachable block (ram,0x000102fe6778) */
/* WARNING: Removing unreachable block (ram,0x000102fe67dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe663c(double param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f30990);
  if ((lVar1 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112f30998), lVar2 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    func_0x000107c3ec60();
    dVar3 = param_1;
    dVar4 = param_2;
    dVar5 = param_3;
    dVar6 = param_4;
    func_0x000107c515a0();
    param_1 = param_1 + dVar4;
    param_2 = param_2 + dVar3;
    param_3 = param_3 - (dVar4 + dVar6);
    param_4 = param_4 - (dVar3 + dVar5);
    dVar3 = param_1;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    dVar4 = param_1;
    func_0x000107c609b8(param_1,param_2,param_3,param_4);
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    dVar4 = dVar4 + -12.0 + -76.0;
    if (dVar4 < param_1) {
      dVar4 = param_1;
    }
    func_0x000107c54b80(dVar3 + 20.0,dVar4,0x4075200000000000,0x4053000000000000,lVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c3ec60(lVar1);
    func_0x000107c54b80(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102fe6818; end: 102fe69e3;  */

/* WARNING: Possible PIC construction at 0x000102fe68c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fe6984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe68cc) */
/* WARNING: Removing unreachable block (ram,0x000102fe69cc) */
/* WARNING: Removing unreachable block (ram,0x000102fe69d4) */
/* WARNING: Removing unreachable block (ram,0x000102fe68d4) */
/* WARNING: Removing unreachable block (ram,0x000102fe68dc) */
/* WARNING: Removing unreachable block (ram,0x000102fe68f0) */
/* WARNING: Removing unreachable block (ram,0x000102fe68f4) */
/* WARNING: Removing unreachable block (ram,0x000102fe68f8) */
/* WARNING: Removing unreachable block (ram,0x000102fe68fc) */
/* WARNING: Removing unreachable block (ram,0x000102fe6988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe6818(double param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f309b0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c515a0();
    func_0x000107c3e158(param_1 + param_3,param_2 + param_4,lVar1);
    func_0x000107c61180();
    uVar2 = 0;
    FUN_102fe757c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c5fc54(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102fe69e4; end: 102fe6a0b; -[SCSpotlightBackgroundView layoutSubviews] */

void FUN_102fe69e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102fe6544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102fe6a0c; end: 102fe6df7;  */

undefined * FUN_102fe6a0c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar14 = *(ulong *)(param_1 + 0x10);
  uVar16 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar16;
  if (uVar14 <= uVar16) {
    uVar1 = uVar14;
  }
  func_0x0001020b1254(0,uVar1,0);
  if (uVar1 != 0) {
    puVar7 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar12 = (undefined8 *)(param_2 + 0x28);
    uVar13 = uVar16;
    uVar15 = uVar14;
    uVar17 = uVar1;
    do {
      lVar11 = lRam0000000112f30aa8;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fe6dec);
        (*pcVar6)();
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fe6df0);
        (*pcVar6)();
      }
      uVar10 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      if (lVar11 != -1) {
        func_0x000107c61568(0x112f30aa8,FUN_102fe5230);
      }
      puVar8 = puVar7;
      func_0x000107c45098(0x4041000000000000,0x4041000000000000,puVar7);
      func_0x000107c61180();
      puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c46db4();
      func_0x000107c61170(puVar8);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar10,uVar3);
      func_0x000107c520f4(puVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c55528(puVar9);
      func_0x000107c53840(puVar9);
      func_0x000107c438d4(puVar9);
      func_0x000107c54b80(puVar9);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(puVar9);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x0001020b1254(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      uVar13 = uVar13 - 1;
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar4 + uVar2 * 8 + 0x20) = puVar9;
      uVar15 = uVar15 - 1;
      puVar12 = puVar12 + 2;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (uVar16 < uVar14) {
    lVar11 = 0;
    uVar17 = uVar1;
    if ((long)uVar1 <= (long)uVar16) {
      uVar17 = uVar16;
    }
    puVar12 = (undefined8 *)(param_2 + uVar1 * 0x10 + 0x28);
    do {
      if (uVar14 - uVar1 == lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fe6df4);
        (*pcVar6)();
      }
      if (uVar16 - uVar1 == lVar11) {
        return puVar4;
      }
      if (uVar17 - uVar1 == lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102fe6df8);
        (*pcVar6)();
      }
      uVar10 = puVar12[-1];
      uVar3 = *puVar12;
      puVar7 = PTR_PTR_1126b0c40;
      func_0x000107c61168(PTR_PTR_1126b0c40);
      lVar5 = lRam0000000112f30aa8;
      func_0x000107c61434(uVar3);
      if (lVar5 != -1) {
        func_0x000107c61568(0x112f30aa8,FUN_102fe5230);
      }
      func_0x000107c45098(0x4041000000000000,0x4041000000000000,puVar7);
      func_0x000107c61180();
      puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c46db4();
      func_0x000107c61170(puVar7);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar10,uVar3);
      func_0x000107c520f4(puVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c55528(puVar8);
      func_0x000107c53840(puVar8);
      func_0x000107c438d4(puVar8);
      func_0x000107c54b80(puVar8);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(puVar8);
      uVar13 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
        func_0x0001020b1254(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
      *(undefined **)(puVar4 + uVar13 * 8 + 0x20) = puVar8;
      lVar11 = lVar11 + 1;
      puVar12 = puVar12 + 2;
    } while (uVar14 - uVar1 != lVar11);
  }
  return puVar4;
}



/* Entry: 102fe6df8; end: 102fe711f;  */

/* WARNING: Possible PIC construction at 0x000102fe70b0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe6df8(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = _DAT_112f309c0;
  lVar1 = _DAT_112f309a8;
  lVar11 = _DAT_112f30990;
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((((*(long *)(unaff_x20 + _DAT_112f30990) != 0) || (*(long *)(unaff_x20 + _DAT_112f309b0) != 0)
       ) && ((*(byte *)(unaff_x20 + _DAT_112f309a8) & 1) == 0)) &&
     (*(long *)(unaff_x20 + _DAT_112f309c0) == 0)) {
    FUN_102fe7120();
    if (param_1 <= 0.0) {
      lVar11 = *(long *)(unaff_x20 + lVar11);
      if (lVar11 == 0) {
        *(undefined1 *)(unaff_x20 + lVar1) = 1;
        FUN_102fe61dc();
        lVar11 = *(long *)(unaff_x20 + _DAT_112f309b0);
        if (lVar11 == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar11,PTR_s_setHidden__1126479f8,0);
      return;
    }
    puVar5 = &UNK_1105f9c90;
    func_0x000107c613fc(&UNK_1105f9c90,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_1105f9cb8;
    func_0x000107c613fc(&UNK_1105f9cb8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(undefined8 *)(puVar6 + 0x20) = param_3;
    pcStack_80 = FUN_102fe72c0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105f9cd0;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar8 = ppuVar7;
    func_0x0001001c7eec();
    func_0x000107c6157c(puVar5);
    func_0x000107c61434(param_3);
    uVar12 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = uVar12;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar10,&puStack_a8,uVar12,uVar9,lVar4,ppuVar8);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(puVar10,ppuVar7);
    puVar6 = puStack_78;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined1 **)(unaff_x20 + lVar2) = puVar10;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(uVar12);
    uVar12 = 0;
    func_0x000107c60714(lVar3,0);
    pcStack_80 = FUN_102fe72e8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105f9cf8;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar10;
    func_0x000107c60bc4(ppuVar8);
    puVar5 = puStack_78;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c5fb28(lVar3,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000100c749e0((float)param_1,lVar3 + 0x20,ppuVar8);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 102fe7120; end: 102fe7213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102fe7120(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  double dVar6;
  
  func_0x000103f1ef1c();
  lVar2 = *param_1;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f309b8);
  if (lVar4 == 0) {
    lVar5 = *(long *)(lVar2 + _DAT_11302e958);
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11302e940);
    uVar1 = ((undefined8 *)(lVar2 + _DAT_11302e940))[1];
    func_0x000107c61174();
    func_0x000107c615f0(lVar4);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    lVar5 = lVar4;
    func_0x000107c4c0d0();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar3);
  }
  dVar6 = (double)lVar5 / 1000.0;
  if (dVar6 < 0.0) {
    dVar6 = 0.0;
  }
  return dVar6;
}



/* Entry: 102fe7214; end: 102fe72bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe7214(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112f309c0) != 0) {
      *(undefined8 *)(param_1 + _DAT_112f309c0) = 0;
      func_0x000107c61574();
      if (*(long *)(param_1 + _DAT_112f30990) != 0) {
        func_0x000107c550d8();
      }
      *(undefined1 *)(param_1 + _DAT_112f309a8) = 1;
      FUN_102fe61dc();
      if (*(long *)(param_1 + _DAT_112f309b0) != 0) {
        func_0x000107c550d8();
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102fe72c0; end: 102fe72e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe72c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112f309c0) != 0) {
      *(undefined8 *)(lVar1 + _DAT_112f309c0) = 0;
      func_0x000107c61574();
      if (*(long *)(lVar1 + _DAT_112f30990) != 0) {
        func_0x000107c550d8();
      }
      *(undefined1 *)(lVar1 + _DAT_112f309a8) = 1;
      FUN_102fe61dc();
      if (*(long *)(lVar1 + _DAT_112f309b0) != 0) {
        func_0x000107c550d8();
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102fe72e8; end: 102fe7307;  */

void FUN_102fe72e8(uint param_1)

{
  func_0x000107c5f840();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb6f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8Dispatch0A8WorkItemC7performyyFTj_11034f8a8)();
  return;
}



/* Entry: 102fe7308; end: 102fe7373; -[SCSpotlightBackgroundView showNoMetadataLoadingViewWithReason:] */

void FUN_102fe7308(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102fe6df8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fe7374; end: 102fe73c3; -[SCSpotlightBackgroundView hideNoMetadataLoadingViewWithReason:] */

void FUN_102fe7374(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102fe74a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fe73c4; end: 102fe73f7;  */

void FUN_102fe73c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102fe73f8; end: 102fe74a3; -[SCSpotlightBackgroundView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102fe7484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fe7488) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe73f8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30988));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30990));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f30998));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f309a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f309b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f309b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f309c0));
  return;
}



/* Entry: 102fe74a4; end: 102fe7553;  */

/* WARNING: Possible PIC construction at 0x000102fe7510: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe74a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = _DAT_112f309c0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f309c0);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000107c5f848();
    func_0x000107c61574(lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61574(uVar1);
  }
  if (*(char *)(unaff_x20 + _DAT_112f309a8) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f30990);
    if (lVar2 == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f309a8) = 0;
      FUN_102fe61dc();
      lVar2 = *(long *)(unaff_x20 + _DAT_112f309b0);
      if (lVar2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 102fe7554; end: 102fe7573;  */

void FUN_102fe7554(void)

{
  func_0x000107c61168(&PTR_PTR_1128aedc0);
  return;
}



/* Entry: 102fe7574; end: 102fe757b;  */

void FUN_102fe7574(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102fe757c; end: 102fe75bb;  */

void FUN_102fe757c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102fe75bc; end: 102fe75cb;  */

void FUN_102fe75bc(long param_1,long param_2)

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



/* Entry: 102fe75cc; end: 102fe75d7; +[_TtC16SCSpotlightViews26SpotlightPullToRefreshView refreshThreshold] */

undefined8 FUN_102fe75cc(void)

{
  return 0x4058000000000000;
}



/* Entry: 102fe75d8; end: 102fe7687; -[_TtC16SCSpotlightViews26SpotlightPullToRefreshView onRefreshTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe75d8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112f30ab8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105f9d98;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102fe7688; end: 102fe7743; -[_TtC16SCSpotlightViews26SpotlightPullToRefreshView setOnRefreshTriggered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fe7688(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105f9d80;
    func_0x000107c613fc(&UNK_1105f9d80,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102fe81e0;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f30ab8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}


