/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bb2b10; end: 102bb2b6f; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController interactiveDismissalDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2b10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112efc690;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_102bb0630(0);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102bb2b70; end: 102bb2b73; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController interactionControllerPercentageDidChange:] */

void FUN_102bb2b70(void)

{
  return;
}



/* Entry: 102bb2b74; end: 102bb2c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2b74(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112efc6b8);
  lVar6 = lVar10;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61170();
    lVar6 = lVar10;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb2c6c);
      (*pcVar1)();
    }
    lVar11 = *(long *)(lVar6 + _DAT_11306dcf0);
    func_0x000107c615f0(lVar11);
    func_0x000107c61170(lVar6);
    if (lVar11 != 0) {
      func_0x000107c41864(lVar11);
      func_0x000107c615e8(lVar11);
    }
    func_0x000107c4ffe8(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efc6b0);
  *(undefined8 *)(unaff_x20 + _DAT_112efc6b0) = 0;
  func_0x000107c61170(uVar7);
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112efc670);
  func_0x000107c5adb4();
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efc658);
  func_0x000107c58dd8(uVar7);
  ppuVar5 = &puStack_60;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efc658);
  func_0x000102bb32a4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(uVar9);
  func_0x000107c61170(uVar7);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c45098(0x402e000000000000,0x402e000000000000,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c55260(uVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c52b54(uVar9);
  pcVar4 = "didSubscribe()";
  func_0x0001000c10c0("didSubscribe()");
  func_0x000107c61180();
  puVar2 = &UNK_1105aa468;
  func_0x000107c613fc(&UNK_1105aa468,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,unaff_x20);
  pcStack_40 = FUN_102bb3180;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105aa4a8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e528(0x3fd999999999999a,pcVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 102bb2c6c; end: 102bb2c93; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_102bb2c6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bb2b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bb2c94; end: 102bb2d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2c94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112efc6c0);
    func_0x000107c61174();
    lVar5 = lVar9;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170();
      lVar5 = param_1;
      func_0x000107c5d17c(param_1);
      func_0x000107c61180();
      func_0x000107c41864();
      func_0x000107c615e8(lVar5);
      func_0x000107c4ffe8(lVar9);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar9);
    }
  }
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112efc670);
  func_0x000107c5adb4();
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efc658);
  func_0x000107c58dd8(uVar7);
  ppuVar4 = &puStack_60;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efc658);
  func_0x000102bb32a4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(uVar8);
  func_0x000107c61170(uVar7);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c45098(0x402e000000000000,0x402e000000000000,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c55260(uVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c52b54(uVar8);
  pcVar3 = "didSubscribe()";
  func_0x0001000c10c0("didSubscribe()");
  func_0x000107c61180();
  puVar1 = &UNK_1105aa468;
  func_0x000107c613fc(&UNK_1105aa468,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,unaff_x20);
  pcStack_40 = FUN_102bb3180;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105aa4a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e528(0x3fd999999999999a,pcVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102bb2d70; end: 102bb2dc3; -[_TtC41SCContextRepliesSubscribeUpsellEntryPoint43ContextRepliesSubscribeUpsellViewController friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102bb2dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb2db0) */

void FUN_102bb2d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bb2c94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bb2dc4; end: 102bb2e17;  */

uint FUN_102bb2dc4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 102bb2e18; end: 102bb2e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2e18(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c308c4(0x4053000000000000,0x4053000000000000,0x4043000000000000,param_1,2,1);
    func_0x000107c55258(*(undefined8 *)(lVar1 + _DAT_112efc630));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102bb2e3c; end: 102bb317f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb2e3c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112efc620;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c5a050(puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c54280(puVar3);
  puVar4 = puVar3;
  func_0x000107c59594(0x4034000000000000);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc628;
  FUN_102bb06b8();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112efc630;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc638;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4179c(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar5 = puVar4;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c56ba8(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc640;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar3);
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc648;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c3ea80(puVar4);
  func_0x000107c61180();
  func_0x000107c45098(0x402e000000000000,0x402e000000000000,puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c55258(puVar3);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc650;
  puVar3 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc658;
  FUN_102bb0974();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc660;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = puVar3;
  func_0x000107c5a378();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112efc668;
  func_0x000102bb0a2c();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = unaff_x20 + _DAT_112efc690;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112efc6a8;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112efc6b0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextRepliesSubscribeUpsellEntryPoint/ContextRepliesSubscribeUpsellViewController.swift"
                      ,0x5b,2,0xa5,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb3180);
  (*pcVar2)();
}



/* Entry: 102bb3180; end: 102bb318f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb3180(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112efc690;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_102bb0630(1);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102bb3190; end: 102bb31bb;  */

void FUN_102bb3190(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    func_0x000102bb1edc();
  }
  return;
}



/* Entry: 102bb31bc; end: 102bb31c3;  */

void FUN_102bb31bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb1b28);
  (*pcVar1)();
}



/* Entry: 102bb31c4; end: 102bb3227;  */

void FUN_102bb31c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102bb3228; end: 102bb32b7;  */

void FUN_102bb3228(long param_1,long param_2)

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



/* Entry: 102bb32b8; end: 102bb33d3;  */

undefined1  [16] FUN_102bb32b8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0fb230);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb3368);
  (*pcVar1)();
}



/* Entry: 102bb33d4; end: 102bb343f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb33d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc708) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bb3440; end: 102bb349f; -[_TtC57ContextOperaEmbeddedComponentScopedFactoryServiceProvider45SCContextOperaEmbeddedComponentScopedServices init] */

void FUN_102bb3440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextOperaEmbeddedComponentScopedFactoryServiceProvider.SCContextOperaEmbeddedComponentScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb346c);
  (*pcVar1)();
}



/* Entry: 102bb34a0; end: 102bb34af; -[_TtC57ContextOperaEmbeddedComponentScopedFactoryServiceProvider45SCContextOperaEmbeddedComponentScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb34a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efc708));
  return;
}



/* Entry: 102bb34b0; end: 102bb351b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb34b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105aa760;
  func_0x000107c613fc(&UNK_1105aa760,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102bb37f4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102bb351c; end: 102bb35b7;  */

void FUN_102bb351c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105aa670;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105aa670;
  return;
}



/* Entry: 102bb35b8; end: 102bb35ef;  */

void FUN_102bb35b8(long *param_1)

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



/* Entry: 102bb35f0; end: 102bb35f7;  */

undefined8 FUN_102bb35f0(void)

{
  return 0x1b;
}



/* Entry: 102bb35f8; end: 102bb372b;  */

void FUN_102bb35f8(undefined8 *param_1)

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
  puVar1 = &UNK_1105aa788;
  func_0x000107c613fc(&UNK_1105aa788,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bb37cc;
  func_0x00010058fa64(FUN_102bb37cc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bb372c; end: 102bb375b;  */

undefined ** FUN_102bb372c(void)

{
  return &PTR_DAT_1130669a0;
}



/* Entry: 102bb375c; end: 102bb377b;  */

void FUN_102bb375c(void)

{
  func_0x000107c61168(&PTR_PTR_112893c20);
  return;
}



/* Entry: 102bb377c; end: 102bb37cb;  */

undefined1  [16] FUN_102bb377c(void)

{
  return ZEXT816(0x1105aa6c0);
}



/* Entry: 102bb37cc; end: 102bb37f3;  */

void FUN_102bb37cc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102bb37f4; end: 102bb37f7;  */

void FUN_102bb37f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bb37f8; end: 102bb393f;  */

/* WARNING: Possible PIC construction at 0x000102bb38d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb38e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb38f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb3900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bb3910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb3904) */
/* WARNING: Removing unreachable block (ram,0x000102bb38f4) */
/* WARNING: Removing unreachable block (ram,0x000102bb38e4) */
/* WARNING: Removing unreachable block (ram,0x000102bb38d4) */
/* WARNING: Removing unreachable block (ram,0x000102bb3914) */

void FUN_102bb37f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105aa810;
  func_0x000107c613fc(&UNK_1105aa810,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112efc778;
  func_0x0001000285a8(0x112efc778,&UNK_10db2e030);
  func_0x000107c613fc();
  uVar3 = 0x102bb3eac;
  func_0x0001000841fc(0x102bb3eac,puVar1,uVar2);
  func_0x000100084214(&UNK_10db2dff0,0x3b,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102bb3940; end: 102bb397b;  */

void FUN_102bb3940(void)

{
  long unaff_x20;
  
  FUN_102bb37f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102bb397c; end: 102bb398b;  */

undefined1  [16] FUN_102bb397c(void)

{
  return ZEXT816(0x1105aa7f0);
}



/* Entry: 102bb398c; end: 102bb3e37;  */

void FUN_102bb398c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112efc780,&UNK_10db2e038);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efc788,&UNK_10db2e040);
  puVar2 = &UNK_1105aa838;
  func_0x000107c613fc(&UNK_1105aa838,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar11 = 0x102bb3ee8;
  func_0x0001000823a8(0x102bb3ee8,puVar2);
  pcVar3 = "AdContextEmbeddedContentEntryPointWrapperServiceProvider";
  func_0x000100082720("AdContextEmbeddedContentEntryPointWrapperServiceProvider",0x38,2);
  FUN_102bb5b1c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  pcVar4 = pcVar3;
  FUN_102bb5ba8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102bb35b8;
  func_0x0001000823a8(FUN_102bb35b8,0);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  pcVar6 = pcVar3;
  FUN_102bb59d0();
  func_0x000100082720("ContextOperaEmbeddedComponentScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112efc790,&UNK_10db2e050);
  puVar2 = &UNK_1105aa860;
  func_0x000107c613fc(&UNK_1105aa860,0x48,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_11;
  *(undefined8 *)(puVar2 + 0x28) = param_12;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(char **)(puVar2 + 0x40) = pcVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_102bb3f1c;
  func_0x0001000823a8(FUN_102bb3f1c,puVar2);
  func_0x000100082720("SCContentModerationEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112efc798,&UNK_10db2e058);
  puVar2 = &UNK_1105aa888;
  func_0x000107c613fc(&UNK_1105aa888,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar6;
  *(code **)(puVar2 + 0x28) = pcVar7;
  *(code **)(puVar2 + 0x30) = pcVar5;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102bb3f30;
  func_0x0001000823a8(0x102bb3f30,puVar2);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112efc710,&UNK_10db2dd70);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102bb3f40;
  func_0x0001000823a8(0x102bb3f40,uVar8);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efc700,&UNK_10db2dd60);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102bb3f48;
  func_0x0001000823a8(0x102bb3f48,uVar9);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105aa8b0;
  func_0x000107c613fc(&UNK_1105aa8b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar10 = 0x102bb3f50;
  func_0x0001000823a8(0x102bb3f50,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeEntryPointProvider",0x36,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 102bb3e38; end: 102bb3f1b;  */

void FUN_102bb3e38(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bb3f1c; end: 102bb3f57;  */

void FUN_102bb3f1c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_102bb4fe0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  *(undefined8 *)(lVar1 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar10 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  puVar8 = PTR_PTR_1126ac070;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0fb500);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar7);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_98);
  *param_1 = lVar1;
  return;
}



/* Entry: 102bb3f58; end: 102bb43df;  */

void FUN_102bb3f58(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_102bb4560();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  FUN_102bb8e4c();
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  func_0x000102bb7ce4();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c61174();
  FUN_102bb7dec();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 102bb43e0; end: 102bb445b;  */

void FUN_102bb43e0(void)

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
  return;
}



/* Entry: 102bb445c; end: 102bb4463;  */

undefined8 FUN_102bb445c(void)

{
  return 0x1b;
}



/* Entry: 102bb4464; end: 102bb44e7;  */

void FUN_102bb4464(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102bb45a0,param_2,FUN_102bb45a4,param_2,FUN_102bb45cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102bb44e8; end: 102bb452f;  */

undefined8 FUN_102bb44e8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102bb8c90();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102bb4530; end: 102bb455f;  */

undefined ** FUN_102bb4530(void)

{
  return &PTR_DAT_1130669a0;
}



/* Entry: 102bb4560; end: 102bb457f;  */

void FUN_102bb4560(void)

{
  func_0x000107c61168(&PTR_PTR_112efc808);
  return;
}



/* Entry: 102bb4580; end: 102bb45a3;  */

undefined1  [16] FUN_102bb4580(void)

{
  return ZEXT816(0x1105aa908);
}



/* Entry: 102bb45a4; end: 102bb45cb;  */

void FUN_102bb45a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102bb45cc; end: 102bb45d3;  */

undefined8 FUN_102bb45cc(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102bb8c90();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102bb45d4; end: 102bb4e67;  */

void FUN_102bb45d4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_102bb4fe0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar9 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar6;
  puVar7 = PTR_PTR_1126ac070;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0fb500);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar6);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  *param_1 = param_2;
  return;
}



/* Entry: 102bb4e68; end: 102bb4ed3;  */

void FUN_102bb4e68(void)

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



/* Entry: 102bb4ed4; end: 102bb4edb;  */

undefined8 FUN_102bb4ed4(void)

{
  return 0x1b;
}



/* Entry: 102bb4edc; end: 102bb4f5f;  */

void FUN_102bb4edc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102bb5020,param_2,FUN_102bb5024,param_2,FUN_102bb504c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102bb4f60; end: 102bb4faf;  */

undefined8 FUN_102bb4f60(void)

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



/* Entry: 102bb4fb0; end: 102bb4fdf;  */

undefined ** FUN_102bb4fb0(void)

{
  return &PTR_DAT_1130669a0;
}



/* Entry: 102bb4fe0; end: 102bb4fff;  */

void FUN_102bb4fe0(void)

{
  func_0x000107c61168(&PTR_PTR_112efc910);
  return;
}



/* Entry: 102bb5000; end: 102bb5023;  */

undefined1  [16] FUN_102bb5000(void)

{
  return ZEXT816(0x1105aa988);
}



/* Entry: 102bb5024; end: 102bb504b;  */

void FUN_102bb5024(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102bb504c; end: 102bb5053;  */

undefined8 FUN_102bb504c(void)

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



/* Entry: 102bb5054; end: 102bb52bb;  */

void FUN_102bb5054(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d280;
  ppuVar4 = &PTR_DAT_1130669a0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112efc9a0;
  func_0x0001000285a8(0x112efc9a0,&UNK_10db2e348);
  func_0x0001000a6ee8(&UNK_1105aa908,
                      "AdContextEmbeddedContentEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_102bb52bc,param_2,uVar2,&UNK_1105aa908,&PTR_DAT_112efc7a0);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1105aa9d8;
  func_0x000107c613fc(&UNK_1105aa9d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105aac28,
                      "ContextOperaEmbeddedComponentScopeGraphBridgeScopeInitializationPluginKey",
                      0x49,2,FUN_102bb52e8,puVar3,uVar2,&UNK_1105aac28,&PTR_DAT_112efca38);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105aa988,
                      "SCContentModerationEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_102bb53ac,param_5,uVar2,&UNK_1105aa988,&PTR_DAT_112efc8a8);
  func_0x000107c61574(param_5);
  puVar3 = &UNK_1105aaa00;
  func_0x000107c613fc(&UNK_1105aaa00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105aa700,
                      "SCContextOperaEmbeddedComponentScopedServicesScopeInitializationPluginKey",
                      0x49,2,FUN_102bb5480,puVar3,uVar2,&UNK_1105aa700,&PTR_DAT_112efc718);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112efc9a8;
  func_0x0001000285a8(0x112efc9a8,&UNK_10db2e350);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCContextOperaEmbeddedComponentScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102bb52bc; end: 102bb52e7;  */

void FUN_102bb52bc(void)

{
  FUN_102bb5328();
  return;
}



/* Entry: 102bb52e8; end: 102bb5327;  */

void FUN_102bb52e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102bb5c50(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextOperaEmbeddedComponentScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bb5328; end: 102bb53ab;  */

void FUN_102bb5328(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102bb53ac; end: 102bb53d7;  */

void FUN_102bb53ac(void)

{
  FUN_102bb5328();
  return;
}



/* Entry: 102bb53d8; end: 102bb547f;  */

void FUN_102bb53d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105aaa28;
  func_0x000107c613fc(&UNK_1105aaa28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102bb54b4;
  func_0x0001000823a8(FUN_102bb54b4,puVar1);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102bb5480; end: 102bb5487;  */

void FUN_102bb5480(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105aaa28;
  func_0x000107c613fc(&UNK_1105aaa28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102bb54b4;
  func_0x0001000823a8(FUN_102bb54b4,puVar3);
  func_0x000100082720("SCContextOperaEmbeddedComponentScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102bb5488; end: 102bb54b3;  */

void FUN_102bb5488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bb54b4; end: 102bb54cb;  */

void FUN_102bb54b4(undefined8 *param_1)

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
  puVar1 = &UNK_1105aa788;
  func_0x000107c613fc(&UNK_1105aa788,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bb37cc;
  func_0x00010058fa64(FUN_102bb37cc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bb54cc; end: 102bb55a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bb54cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102bb58e0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112efc9b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efc9b8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb55a8);
  (*pcVar1)();
}



/* Entry: 102bb55a8; end: 102bb5607; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge60ContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint init] */

void FUN_102bb55a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextOperaEmbeddedComponentScopeGraphBridge.ContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb55d4);
  (*pcVar1)();
}



/* Entry: 102bb5608; end: 102bb563f; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge60ContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bb5624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bb5628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc9b0));
  return;
}



/* Entry: 102bb5640; end: 102bb5667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5640(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efc9b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efc9b0));
  return;
}



/* Entry: 102bb5668; end: 102bb5687;  */

void FUN_102bb5668(void)

{
  func_0x000107c61168(&PTR_PTR_112893ce0);
  return;
}



/* Entry: 102bb5688; end: 102bb570f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bb5688(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc9e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efc9f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bb5710);
  (*pcVar2)();
}



/* Entry: 102bb5710; end: 102bb57f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bb5710(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc9e8);
  *(undefined **)(unaff_x20 + _DAT_112efc9e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc9f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efc9f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105aab48;
  func_0x000107c613fc(&UNK_1105aab48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102bb57fc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102bb57f8; end: 102bb5803;  */

void FUN_102bb57f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bb5804; end: 102bb5863; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge60SCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint init] */

void FUN_102bb5804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextOperaEmbeddedComponentScopeGraphBridge.SCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb5830);
  (*pcVar1)();
}



/* Entry: 102bb5864; end: 102bb589b; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge60SCContextOperaEmbeddedComponentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5864(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efc9f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc9e8));
  return;
}



/* Entry: 102bb589c; end: 102bb589f;  */

void FUN_102bb589c(void)

{
  return;
}



/* Entry: 102bb58a0; end: 102bb58bf;  */

void FUN_102bb58a0(void)

{
  FUN_102bb5710();
  return;
}



/* Entry: 102bb58c0; end: 102bb58df;  */

void FUN_102bb58c0(void)

{
  func_0x000107c61168(&PTR_PTR_112893da8);
  return;
}



/* Entry: 102bb58e0; end: 102bb59af;  */

undefined8 FUN_102bb58e0(void)

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
  
  func_0x000107c61428(0x112efca20,&uStack_40,0x20,0);
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
    FUN_102bb59b0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102bb59b0; end: 102bb59cf;  */

void FUN_102bb59b0(void)

{
  func_0x000107c61168(&PTR_PTR_112893e70);
  return;
}



/* Entry: 102bb59d0; end: 102bb59eb;  */

void FUN_102bb59d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112efca28,&UNK_10db2e438);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102bb5a58,param_1);
  return;
}



/* Entry: 102bb59ec; end: 102bb5a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb59ec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102bb59b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112efca30) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102bb5a58; end: 102bb5a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5a58(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102bb59b0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112efca30) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102bb5a60; end: 102bb5aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5a60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efca30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bb5aac; end: 102bb5b0b; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge53ContextOperaEmbeddedComponentScopeGraphBridgeServices init] */

void FUN_102bb5aac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextOperaEmbeddedComponentScopeGraphBridge.ContextOperaEmbeddedComponentScopeGraphBridgeServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bb5ad8);
  (*pcVar1)();
}



/* Entry: 102bb5b0c; end: 102bb5b1b; -[_TtC45ContextOperaEmbeddedComponentScopeGraphBridge53ContextOperaEmbeddedComponentScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efca30));
  return;
}



/* Entry: 102bb5b1c; end: 102bb5ba7;  */

void FUN_102bb5b1c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102bb5b5c,0);
  return;
}



/* Entry: 102bb5ba8; end: 102bb5bc3;  */

void FUN_102bb5ba8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102bb5c14,param_1);
  return;
}



/* Entry: 102bb5bc4; end: 102bb5c13;  */

void FUN_102bb5bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102bb5c14; end: 102bb5c47;  */

void FUN_102bb5c14(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102bb5c48; end: 102bb5c4f;  */

undefined8 FUN_102bb5c48(void)

{
  return 0x1b;
}



/* Entry: 102bb5c50; end: 102bb5dc7;  */

void FUN_102bb5c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105aab90;
  func_0x000107c613fc(&UNK_1105aab90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102bb5dc8,puVar1);
  return;
}



/* Entry: 102bb5dc8; end: 102bb5dcf;  */

void FUN_102bb5dc8(undefined8 *param_1)

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
  func_0x000107c61428(0x112efca20,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efca20,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105aac68;
  func_0x000107c613fc(&UNK_1105aac68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102bb5e9c;
  func_0x00010058fa64(0x102bb5e9c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bb5dd0; end: 102bb5e2b;  */

void FUN_102bb5dd0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efca20,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efca20,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102bb5e2c; end: 102bb5ea3;  */

undefined ** FUN_102bb5e2c(void)

{
  return &PTR_DAT_1130669a0;
}



/* Entry: 102bb5ea4; end: 102bb5eeb; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5ea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efca88;
  func_0x000107c61428(param_1 + _DAT_112efca88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bb5eec; end: 102bb5f43; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efca88;
  func_0x000107c61428(param_1 + _DAT_112efca88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bb5f44; end: 102bb5f8b; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5f44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efca90;
  func_0x000107c61428(param_1 + _DAT_112efca90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bb5f8c; end: 102bb5f97; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efca90;
  func_0x000107c61428(param_1 + _DAT_112efca90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bb5f98; end: 102bb5fdf; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint contextOperaEmbeddedComponentScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5f98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efca98;
  func_0x000107c61428(param_1 + _DAT_112efca98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bb5fe0; end: 102bb5feb; -[SCContextOperaEmbeddedComponentScopeGraphBridgeSaberEntryPoint setContextOperaEmbeddedComponentScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bb5fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efca98;
  func_0x000107c61428(param_1 + _DAT_112efca98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bb5fec; end: 102bb604b;  */

void FUN_102bb5fec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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


