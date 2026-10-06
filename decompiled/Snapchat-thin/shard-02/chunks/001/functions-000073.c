/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018d36e4; end: 1018d3713;  */

bool FUN_1018d36e4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1018d3714; end: 1018d38cf;  */

ulong FUN_1018d3714(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d37f8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d37fc);
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
  FUN_1018d3abc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d38d0);
  (*pcVar2)();
}



/* Entry: 1018d38d0; end: 1018d3963;  */

void FUN_1018d38d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x0001018d2ec0(param_1,param_2,param_3,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1018d3964; end: 1018d398f;  */

void FUN_1018d3964(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018d3990; end: 1018d3a0b;  */

void FUN_1018d3990(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x0001018d2ec0(param_1,0,0xf000000000000000,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1018d3a0c; end: 1018d3a27;  */

void FUN_1018d3a0c(long param_1,long param_2)

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



/* Entry: 1018d3a28; end: 1018d3a4b;  */

undefined8 FUN_1018d3a28(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1018d3a4c; end: 1018d3abb;  */

void FUN_1018d3a4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127eabc8);
  return;
}



/* Entry: 1018d3abc; end: 1018d3b43;  */

void FUN_1018d3abc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1018d3b44; end: 1018d3b4b;  */

void FUN_1018d3b44(long param_1,long param_2)

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



/* Entry: 1018d3b4c; end: 1018d3b77; +[SCAdEndpoints defaultProtoInit] */

void FUN_1018d3b4c(void)

{
  func_0x000107c5fadc(0xd000000000000038,0x800000010efbdc80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3b78; end: 1018d3ba3; +[SCAdEndpoints defaultProtoTrack] */

void FUN_1018d3b78(void)

{
  func_0x000107c5fadc(0xd00000000000003b,0x800000010efbdcc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3ba4; end: 1018d3bcf; +[SCAdEndpoints defaultProtoServe] */

void FUN_1018d3ba4(void)

{
  func_0x000107c5fadc(0xd000000000000038,0x800000010efbdd00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3bd0; end: 1018d3bfb; +[SCAdEndpoints defaultProtoSLC] */

void FUN_1018d3bd0(void)

{
  func_0x000107c5fadc(0xd000000000000030,0x800000010efbdd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3bfc; end: 1018d3c27; +[SCAdEndpoints stagingProtoServe] */

void FUN_1018d3bfc(void)

{
  func_0x000107c5fadc(0xd000000000000034,0x800000010efbdd80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3c28; end: 1018d3c33;  */

undefined * FUN_1018d3c28(void)

{
  return &UNK_11040d4b0;
}



/* Entry: 1018d3c34; end: 1018d3c5f; +[SCAdEndpoints stagingProtoTrack] */

void FUN_1018d3c34(void)

{
  func_0x000107c5fadc(0xd00000000000002d,0x800000010efbddc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3c60; end: 1018d3c8b; +[SCAdEndpoints mockAdServer] */

void FUN_1018d3c60(void)

{
  func_0x000107c5fadc(0xd000000000000029,0x800000010efbddf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018d3c8c; end: 1018d3cc7; -[SCAdEndpoints init] */

void FUN_1018d3c8c(undefined8 param_1)

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



/* Entry: 1018d3cc8; end: 1018d3cfb;  */

void FUN_1018d3cc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d3cfc; end: 1018d3cff; -[SCAdEndpoints .cxx_destruct] */

void FUN_1018d3cfc(void)

{
  return;
}



/* Entry: 1018d3d00; end: 1018d3d1f;  */

void FUN_1018d3d00(void)

{
  func_0x000107c61168(&PTR_PTR_1127eacc0);
  return;
}



/* Entry: 1018d3d20; end: 1018d3d5b;  */

void FUN_1018d3d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1018d3d5c; end: 1018d3dfb;  */

void FUN_1018d3d5c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7d40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018d3dfc; end: 1018d3eb7;  */

void FUN_1018d3dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  char cStack_31;
  
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  uStack_48 = 0xd000000000000032;
  uStack_40 = 0x800000010efbde60;
  uStack_38 = 0;
  (**(code **)(lStack_50 + 8))
            (&cStack_31,&uStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_50);
  func_0x000107c615e8(uStack_58);
  if (cStack_31 == '\x01') {
    puVar2 = PTR_PTR_1126a7d38;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1018d3eb8; end: 1018d3ebf;  */

void FUN_1018d3eb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  char cStack_31;
  
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  uStack_48 = 0xd000000000000032;
  uStack_40 = 0x800000010efbde60;
  uStack_38 = 0;
  (**(code **)(lStack_50 + 8))
            (&cStack_31,&uStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_50);
  func_0x000107c615e8(uStack_58);
  if (cStack_31 == '\x01') {
    puVar2 = PTR_PTR_1126a7d38;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1018d3ec0; end: 1018d3edb;  */

/* WARNING: Possible PIC construction at 0x0001018d3ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d3ed0) */

void FUN_1018d3ec0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018d3edc; end: 1018d3f4b;  */

void FUN_1018d3edc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018d3f4c; end: 1018d3fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018d3f4c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcf970;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112dcf970);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x1) {
    puVar2 = PTR_PTR_1126ca510;
    func_0x000107c610f8();
    func_0x000107c47658(0x7fefffffffffffff,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c61174();
    func_0x0001018d405c(uVar4);
  }
  FUN_1018d4224(puVar3);
  return puVar2;
}



/* Entry: 1018d3fcc; end: 1018d4017; -[SCAdMultiAdPodsInsertionRuleTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d3fcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dcf970) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018d4018; end: 1018d404b;  */

void FUN_1018d4018(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018d404c; end: 1018d406b; -[SCAdMultiAdPodsInsertionRuleTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d404c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dcf970) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1018d406c; end: 1018d4137; -[SCAdMultiAdPodsInsertionRuleTracker didRegisterAdPod:] */

/* WARNING: Possible PIC construction at 0x0001018d40d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d40dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d406c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_3 + _DAT_11308f098);
  if (uVar1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar2 = uVar1;
    }
    func_0x000107c60480();
  }
  if (1 < (long)uVar2) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    FUN_1018d3f4c();
    func_0x000107c504e8();
    func_0x000107c5ba38(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1018d4138; end: 1018d4157;  */

void FUN_1018d4138(void)

{
  func_0x000107c61168(&PTR_PTR_1127ead70);
  return;
}



/* Entry: 1018d4158; end: 1018d4223; -[SCAdMultiAdPodsInsertionRuleTracker didStartPlayingAd:adPod:] */

/* WARNING: Possible PIC construction at 0x0001018d41c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d41c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4158(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_4 + _DAT_11308f098);
  if (uVar1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar2 = uVar1;
    }
    func_0x000107c60480();
  }
  if (1 < (long)uVar2) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    FUN_1018d3f4c();
    func_0x000107c504e8();
    func_0x000107c5ba38(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1018d4224; end: 1018d4233;  */

void FUN_1018d4224(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1018d4234; end: 1018d4293; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider init] */

void FUN_1018d4234(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DpaConfigProviderServiceImpl.DpaConfigProvider",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d4260);
  (*pcVar1)();
}



/* Entry: 1018d4294; end: 1018d42a3; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dcf9a0));
  return;
}



/* Entry: 1018d42a4; end: 1018d42af; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider encodedGridConfigOverrideFor:] */

void FUN_1018d42a4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1018d469c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,param_2);
    func_0x0001000b44c0(param_3,param_2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018d42b0; end: 1018d430f; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider isGridEnabledFor:] */

uint FUN_1018d42b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001018d4788(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1018d4310; end: 1018d43c3; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider gridCollectionItemsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018d4310(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dcf9a0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dcf9a0))[1];
  func_0x000107c614f0(uVar2);
  uStack_60 = 0xd00000000000002b;
  uStack_58 = 0x800000010efbdea0;
  uStack_50 = 4;
  pcVar3 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(&uStack_48,&uStack_60,&UNK_110738448,&PTR_DAT_11304a4e0,uVar2,lVar1);
  func_0x000107c61170(param_1);
  return uStack_48;
}



/* Entry: 1018d43c4; end: 1018d4423; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider isBottomCTACardEnabledForGridFor:] */

uint FUN_1018d43c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001018d4848(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1018d4424; end: 1018d442f; -[_TtC28DpaConfigProviderServiceImpl17DpaConfigProvider encodedOneTapOpenConfigFor:] */

void FUN_1018d4424(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  (*(code *)0x1018d4974)(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,param_2);
    func_0x0001000b44c0(param_3,param_2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018d4430; end: 1018d44bf;  */

void FUN_1018d4430(undefined8 param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  (*param_4)(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,param_2);
    func_0x0001000b44c0(param_3,param_2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018d44c0; end: 1018d469b;  */

undefined * FUN_1018d44c0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  ulong uStack_78;
  byte bStack_61;
  long alStack_60 [2];
  undefined4 *puStack_50;
  undefined4 uStack_44;
  
  func_0x00010403f884();
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  if (param_1 == 2) {
    return (undefined *)0x0;
  }
  if (param_1 != 1) {
    alStack_60[0] = param_1;
    func_0x000107c60614(&UNK_110739d60,alStack_60,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d469c);
    (*pcVar3)();
  }
  puVar4 = PTR_PTR_1126a7d48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x00010403f8c4();
  puVar5 = puVar4;
  func_0x000107c56f78();
  func_0x00010403f904();
  uStack_44 = 0;
  puStack_50 = &uStack_44;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)puVar5 >> 0x3c & 1) == 0) goto LAB_1018d4638;
      ppuVar7 = (undefined **)(param_2 + 0x20);
      if ((*(byte *)ppuVar7 < 0x21) &&
         ((1L << ((ulong)*(byte *)ppuVar7 & 0x3f) & 0x100003e01U) != 0)) goto LAB_1018d45a0;
    }
    else {
      uStack_78 = param_2 & 0xffffffffffffff;
      puStack_80 = puVar5;
      if ((((uint)puVar5 & 0xff) < 0x21) && ((1L << ((ulong)puVar5 & 0x3f) & 0x100003e01U) != 0))
      goto LAB_1018d45a0;
      ppuVar7 = &puStack_80;
    }
    func_0x000107c60eb8(ppuVar7,&uStack_44);
    if ((ppuVar7 != (undefined **)0x0) && (*(byte *)ppuVar7 == 0)) {
LAB_1018d45e4:
      uVar2 = uStack_44;
      func_0x000107c6142c(param_2);
      uVar1 = (ulong)puVar5 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        return puVar4;
      }
      uVar6 = 0;
      FUN_1018d4ae8(0);
      func_0x000103c025d8(uVar2);
      func_0x000107c56f7c(puVar4);
      func_0x000107c61170(uVar6);
      return puVar4;
    }
  }
  else {
LAB_1018d4638:
    func_0x000107c602f0(&bStack_61,FUN_1018d4a70,alStack_60,puVar5,param_2,PTR___sSbN_11034dd40);
    if ((bStack_61 & 1) != 0) goto LAB_1018d45e4;
  }
LAB_1018d45a0:
  func_0x000107c6142c(param_2);
  return puVar4;
}



/* Entry: 1018d469c; end: 1018d4a6f;  */

undefined1  [16] FUN_1018d469c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    return ZEXT816(0xf000000000000000) << 0x40;
  }
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c5c7e4();
  if ((int)uVar1 == 0x11) {
    uVar1 = param_1;
    func_0x000107c444c0();
    func_0x000107c61180();
    if (uVar1 == 0) goto LAB_1018d4754;
    uVar2 = uVar1;
    func_0x000107c447b8();
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(param_1);
      param_1 = uVar1;
      goto LAB_1018d4754;
    }
    uVar2 = uVar1;
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c41214();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c5ee30(uVar1);
        func_0x000107c61170(uVar1);
        goto LAB_1018d4760;
      }
    }
  }
  else {
LAB_1018d4754:
    func_0x000107c61170(param_1);
  }
  uVar2 = 0;
  param_2 = 0xf000000000000000;
LAB_1018d4760:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1018d4a70; end: 1018d4ae7;  */

void FUN_1018d4a70(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb8(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1018d4ae8; end: 1018d4b2b;  */

void FUN_1018d4ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcf9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c0300;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dcf9d0 = puVar1;
  return;
}



/* Entry: 1018d4b2c; end: 1018d4bcf;  */

void FUN_1018d4b2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1018d4bd0; end: 1018d4beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4bd0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_30);
  lVar2 = 0;
  func_0x0001003fddb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112dcf9a0);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  plVar4 = &lStack_40;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1018d4bec; end: 1018d4c0f;  */

void FUN_1018d4bec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018d4c10; end: 1018d4cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4c10(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  func_0x0001000285a8(0x112dcf9d8,&UNK_10d991420);
  func_0x000107c613fc();
  func_0x000107c61580(uVar4,2);
  pcVar1 = FUN_1018d4cf0;
  func_0x0001000bdd8c(FUN_1018d4cf0,uVar4);
  uVar3 = 0x112dcf9e0;
  func_0x0001000285a8(0x112dcf9e0,&UNK_10d991428);
  uVar2 = 0x1018d4bd8;
  func_0x0001000cb480(0x1018d4bd8,0,uVar3);
  uVar3 = 0;
  func_0x0001001d7e4c(0);
  func_0x000107c610f8();
  func_0x0001003fddd4(uVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1018d4cf0; end: 1018d4cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4cf0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_30);
  lVar2 = 0;
  func_0x0001003fddb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112dcf9a0);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  plVar4 = &lStack_40;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1018d4cf4; end: 1018d4d47;  */

void FUN_1018d4cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1018d4d48; end: 1018d504f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d4d48(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &UNK_11040d748;
  func_0x000107c613fc(&UNK_11040d748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112dcfba8,&UNK_10d991500);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  pcVar2 = FUN_1018d5160;
  func_0x0001000bdd8c(FUN_1018d5160,puVar1);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar3 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar3);
    uVar10 = uVar9;
    func_0x000107c444a4();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar9;
    func_0x000107c3d20c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
  }
  lVar4 = 0;
  FUN_1018d83e0();
  lVar3 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    func_0x000107c61174(uVar10);
    lVar5 = 0;
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x18);
    func_0x000107c61174(uVar10);
    func_0x000107c61174();
    func_0x000107c61574(param_3);
    lVar5 = *(long *)(lVar11 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar11);
    lVar11 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar11 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c615f0(lVar11);
      uVar9 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010efbdfb0);
      lVar5 = lVar11;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(uVar9);
    }
  }
  lVar6 = 0;
  FUN_1018d8050();
  lVar7 = lVar6;
  func_0x000107c610f8();
  ppuStack_98 = &PTR_DAT_11040d930;
  *(code **)(lVar7 + _DAT_112dcfbb0) = pcVar2;
  alStack_b8[0] = lVar3;
  lStack_a0 = lVar4;
  FUN_1018d5168(alStack_b8,lVar7 + _DAT_112dcfbb8);
  *(undefined8 *)(lVar7 + _DAT_112dcfbc0) = param_4;
  *(long *)(lVar7 + _DAT_112dcfbc8) = lVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_c8 = lVar7;
  lStack_c0 = lVar6;
  func_0x000107c6157c(param_4);
  plVar8 = &lStack_c8;
  func_0x000107c61154(plVar8,puVar1);
  func_0x0001000834e4(alStack_b8);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(lVar11);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1018d5050; end: 1018d505b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d5050(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_11040d748;
  func_0x000107c613fc(&UNK_11040d748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar10;
  func_0x0001000285a8(0x112dcfba8,&UNK_10d991500);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar10);
  pcVar2 = FUN_1018d5160;
  func_0x0001000bdd8c(FUN_1018d5160,puVar1);
  func_0x000107c61428(lVar11 + 0x10,auStack_78,0,0);
  lVar3 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar3);
    uVar10 = uVar9;
    func_0x000107c444a4();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar9;
    func_0x000107c3d20c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
  }
  lVar4 = 0;
  FUN_1018d83e0();
  lVar3 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  func_0x000107c61428(lVar11 + 0x10,auStack_90,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar11 == 0) {
    func_0x000107c61174(uVar10);
    lVar12 = 0;
    lVar11 = 0;
  }
  else {
    lVar12 = *(long *)(lVar11 + 0x18);
    func_0x000107c61174(uVar10);
    func_0x000107c61174();
    func_0x000107c61574(lVar11);
    lVar5 = *(long *)(lVar12 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    lVar11 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar11 == 0) {
      lVar12 = 0;
    }
    else {
      func_0x000107c615f0(lVar11);
      uVar9 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010efbdfb0);
      lVar12 = lVar11;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(uVar9);
    }
  }
  lVar6 = 0;
  FUN_1018d8050();
  lVar5 = lVar6;
  func_0x000107c610f8();
  ppuStack_98 = &PTR_DAT_11040d930;
  *(code **)(lVar5 + _DAT_112dcfbb0) = pcVar2;
  alStack_b8[0] = lVar3;
  lStack_a0 = lVar4;
  FUN_1018d5168(alStack_b8,lVar5 + _DAT_112dcfbb8);
  *(undefined8 *)(lVar5 + _DAT_112dcfbc0) = uVar8;
  *(long *)(lVar5 + _DAT_112dcfbc8) = lVar12;
  puVar1 = PTR_s_init_1125d9248;
  lStack_c8 = lVar5;
  lStack_c0 = lVar6;
  func_0x000107c6157c(uVar8);
  plVar7 = &lStack_c8;
  func_0x000107c61154(plVar7,puVar1);
  func_0x0001000834e4(alStack_b8);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(lVar11);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1018d505c; end: 1018d50b3;  */

void FUN_1018d505c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_1018d84fc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11040d940;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
  return;
}



/* Entry: 1018d50b4; end: 1018d50df;  */

/* WARNING: Possible PIC construction at 0x0001018d50c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d50d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d50c4) */
/* WARNING: Removing unreachable block (ram,0x0001018d50d4) */

void FUN_1018d50b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018d50e0; end: 1018d515f;  */

void FUN_1018d50e0(void)

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



/* Entry: 1018d5160; end: 1018d5167;  */

void FUN_1018d5160(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_1018d84fc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11040d940;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar3);
  return;
}



/* Entry: 1018d5168; end: 1018d51ab;  */

long FUN_1018d5168(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018d51ac; end: 1018d522b;  */

undefined8 FUN_1018d51ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001000c6518(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1018d7f90(param_1,lVar1,param_3,param_4);
  func_0x0001000834e4(param_2);
  return param_1;
}



/* Entry: 1018d522c; end: 1018d53d3;  */

void FUN_1018d522c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1018d53d4; end: 1018d547b;  */

void FUN_1018d53d4(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1018d5468;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1018d5468:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 1018d547c; end: 1018d55e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d547c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  func_0x000107c614f0();
  func_0x0001018d851c();
  func_0x000107c615e8(puStack_80);
  if (((ulong)puVar1 & 1) != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112dcfbc8);
    if (lVar4 != 0) {
      puVar1 = &UNK_11040d788;
      func_0x000107c613fc(&UNK_11040d788,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      puVar2 = &UNK_11040d7b0;
      func_0x000107c613fc(&UNK_11040d7b0,0x40,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(undefined8 *)(puVar2 + 0x28) = param_3;
      *(undefined8 *)(puVar2 + 0x30) = param_4;
      *(undefined8 *)(puVar2 + 0x38) = param_5;
      uStack_60 = 0x1018d8070;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11040d7c8;
      puStack_58 = puVar2;
      func_0x000107c60bc4(&puStack_80);
      puVar1 = puStack_58;
      func_0x000107c615f0(lVar4);
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_3);
      func_0x0001018d809c(param_4,param_5);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(lVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1018d55e8; end: 1018d5663; -[_TtC51AdAppInstallMetricsValidationServicesImplementation28AdAppInstallMetricsValidator validateAppInstallMetricsWithTrackRequest:adIdentifier:] */

void FUN_1018d55e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018d547c(param_3,param_4,param_2,0,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018d5664; end: 1018d56f3;  */

void FUN_1018d5664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1018d56f4(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1018d56f4; end: 1018d66cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d56f4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lStack_80 = param_1;
  pcStack_78 = param_4;
  lStack_70 = param_5;
  func_0x000107c49928();
  func_0x000107c61180();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar3 = 0;
    FUN_1018d80ac(0,0x112dcfbf8,&PTR_PTR_1126c0340);
    func_0x000107c5fc50(param_1,&puStack_68,uVar3);
    func_0x000107c61170(param_1);
    if (puStack_68 != (undefined *)0x0) {
      puVar8 = puStack_68;
    }
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar13 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar13 != (undefined *)0x0) {
    uVar14 = 0;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d581c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar8 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar14;
        FUN_1018d7dd4(uVar14,puVar8,&PTR_PTR_1126c0340,0x112dcfbf8);
      }
      puVar1 = (undefined *)(uVar14 + 1);
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d5818);
        (*pcVar2)();
      }
      func_0x0001018d586c(uVar4,param_2,param_3,pcStack_78,lStack_70);
      func_0x000107c61170(uVar4);
      uVar14 = uVar14 + 1;
    } while (puVar1 != puVar13);
  }
  func_0x000107c6142c(puVar8);
  pcVar2 = pcStack_78;
  lVar5 = lStack_80;
  func_0x000107c418a4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d66c0);
    (*pcVar2)();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = lVar5;
  func_0x000107c44828();
  if ((int)lVar6 == 0) {
LAB_1018d62a4:
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    uVar14 = 8;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c41ff0();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d66cc);
      (*pcVar2)();
    }
    lVar7 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar6);
    if (lVar7 < 1) goto LAB_1018d62a4;
    uVar14 = 0;
  }
  lVar6 = _DAT_112dcfbb8;
  FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,&uStack_90);
  lVar7 = lStack_70;
  func_0x0001000a8868(&uStack_90,pcStack_78);
  puVar8 = PTR_PTR_1126b9420;
  func_0x000107c61168();
  puVar13 = puVar8;
  func_0x000107c43928();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d66c4);
    (*pcVar2)();
  }
  (**(code **)(lVar7 + 8))();
  func_0x000107c61170(puVar13);
  func_0x0001000834e4(&uStack_90);
  lVar7 = lVar5;
  func_0x000107c4482c();
  if ((int)lVar7 != 0) {
    lVar7 = lVar5;
    func_0x000107c42000();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d66d0);
      (*pcVar2)();
    }
    lVar9 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar7);
    if (0 < lVar9) goto LAB_1018d63c4;
  }
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x00010109a32c();
  uVar14 = uVar14 | 0x10;
LAB_1018d63c4:
  FUN_1018d5168(unaff_x20 + lVar6,&uStack_90);
  lVar6 = lStack_70;
  func_0x0001000a8868(&uStack_90,pcStack_78);
  func_0x000107c5ccd0();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d66c8);
    (*pcVar2)();
  }
  (**(code **)(lVar6 + 8))();
  func_0x000107c61170(puVar8);
  func_0x0001000834e4(&uStack_90);
  if (uVar14 == 0) {
    func_0x000107c61170(lVar5);
  }
  else {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar14);
    }
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar11 = uVar3;
    func_0x00010011d734();
    uVar10 = 10;
    uVar12 = 0xe100000000000000;
    func_0x000107c5fa80(10,0xe100000000000000,uVar3,uVar11);
    func_0x000107c417f0(lVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001000d224c(&uStack_90);
    uVar14 = uStack_90;
    func_0x000107c614f0();
    func_0x0001018d8580();
    func_0x000107c615e8(uStack_90);
    if ((uVar14 & 0xff) != 0) {
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x48);
      func_0x000107c5fb78(0xd000000000000029,0x800000010efbe090);
      func_0x000107c5fb78(uVar10,uVar12);
      func_0x000107c5fb78(0x6e6564492064410a,0xef3a726569666974);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c5fb78(0x707974206441202c,0xea00000000003a65);
      func_0x000107c5fb78(0x412f4e,0xe300000000000000);
      uVar3 = uStack_88;
      uVar4 = uStack_90;
      func_0x0001000d224c(&uStack_90);
      lVar6 = lStack_70;
      pcVar2 = pcStack_78;
      func_0x0001000a8868(&uStack_90,pcStack_78);
      FUN_1018d80ac(0,0x112dcf430,&PTR_PTR_1126b3e90);
      uVar11 = 0;
      func_0x000103dec218(0);
      (**(code **)(lVar6 + 8))
                (param_2,param_3,uVar11,uVar4,uVar3,0xd000000000000024,0x800000010efbe0c0,
                 ((uint)uVar14 & 0xff) != 1,pcVar2,lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(uVar11);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(puStack_68);
      func_0x0001000834e4(&uStack_90);
      return;
    }
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(uVar12);
  }
  func_0x000107c6142c(puStack_68);
  return;
}



/* Entry: 1018d66d0; end: 1018d6db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1018d66d0(float param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,code *param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 uStack_114;
  undefined *puStack_100;
  long alStack_f8 [4];
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  lVar2 = param_2;
  func_0x000107c3fe74();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d94);
    (*pcVar1)();
  }
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = lVar2;
  func_0x000107c44bc0();
  if ((int)lVar9 == 0) {
LAB_1018d6788:
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    uStack_114 = 0;
    uVar10 = 1;
  }
  else {
    lVar9 = lVar2;
    func_0x000107c5cc80();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6da4);
      (*pcVar1)();
    }
    lVar13 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    if (lVar13 < 1) goto LAB_1018d6788;
    uVar10 = 0;
    uStack_114 = 1;
  }
  puStack_100 = (undefined *)_DAT_112dcfbb8;
  FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_a8);
  lVar9 = lStack_88;
  func_0x0001000a8868(auStack_a8,uStack_90);
  puVar4 = PTR_PTR_1126b9420;
  func_0x000107c61168();
  puVar3 = puVar4;
  func_0x000107c5cc7c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d98);
    (*pcVar1)();
  }
  (**(code **)(lVar9 + 8))();
  func_0x000107c61170(puVar3);
  func_0x0001000834e4(auStack_a8);
  lVar9 = lVar2;
  func_0x000107c44bbc();
  if ((int)lVar9 == 0) {
LAB_1018d68d8:
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    uStack_114 = 0;
    uVar10 = uVar10 | 2;
  }
  else {
    lVar9 = lVar2;
    func_0x000107c5cc74();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6da8);
      (*pcVar1)();
    }
    lVar13 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    if (lVar13 < 1) goto LAB_1018d68d8;
    lVar9 = lVar2;
    func_0x000107c5cc74();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6db0);
      (*pcVar1)();
    }
    lVar13 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    lVar9 = lVar2;
    func_0x000107c5cc80();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6db4);
      (*pcVar1)();
    }
    lVar8 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    if (lVar13 <= lVar8) goto LAB_1018d68d8;
  }
  FUN_1018d5168(unaff_x20 + (long)puStack_100,auStack_a8);
  lVar9 = lStack_88;
  func_0x0001000a8868(auStack_a8,uStack_90);
  puVar3 = puVar4;
  func_0x000107c5cc78();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d9c);
    (*pcVar1)();
  }
  (**(code **)(lVar9 + 8))();
  func_0x000107c61170(puVar3);
  func_0x0001000834e4(auStack_a8);
  lVar9 = lVar2;
  func_0x000107c44bc4();
  if ((int)lVar9 != 0) {
    lVar9 = lVar2;
    func_0x000107c5cc84();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6dac);
      (*pcVar1)();
    }
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    if (0.0 < param_1) goto LAB_1018d69ec;
  }
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x00010109a32c();
  uStack_114 = 0;
  uVar10 = uVar10 | 4;
LAB_1018d69ec:
  FUN_1018d5168(unaff_x20 + (long)puStack_100,auStack_a8);
  func_0x0001000a8868(auStack_a8,uStack_90);
  func_0x000107c5cc88();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6da0);
    (*pcVar1)();
  }
  (**(code **)(lStack_88 + 8))();
  func_0x000107c61170(puVar4);
  func_0x0001000834e4(auStack_a8);
  lVar9 = lVar2;
  uVar14 = param_3;
  FUN_1018d6db4(lVar2,param_3,param_5,param_6);
  lVar13 = param_2;
  lStack_d8 = lVar9;
  uStack_d0 = uVar14;
  FUN_1018d7318(param_2,param_3,param_5,param_6);
  uVar6 = (ulong)(param_4 & 1);
  lStack_c8 = lVar13;
  uStack_c0 = param_3;
  FUN_1018d77fc(param_2,uVar6,param_5,param_6);
  uVar11 = 0;
  lStack_b8 = param_2;
  uStack_b0 = uVar6;
  puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar6 = uVar11;
    if (uVar11 < 4) {
      uVar6 = 3;
    }
    lVar9 = uVar11 * 0x10 + 0x28;
    do {
      lVar13 = lVar9;
      if (uVar11 == 3) {
        uVar14 = 0x112dcfd28;
        func_0x0001000285a8(0x112dcfd28,&UNK_10d991530);
        func_0x000107c61408(&lStack_d8,3,uVar14);
        uVar11 = *(ulong *)(puStack_100 + 0x10);
        if (uVar11 == 0) goto LAB_1018d6cc4;
        uVar6 = 0;
        plVar15 = (long *)(puStack_100 + 0x28);
        goto LAB_1018d6be8;
      }
      uVar11 = uVar11 + 1;
      if (uVar6 + 1 == uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d7c);
        (*pcVar1)();
      }
      lVar8 = *(long *)((long)alStack_f8 + lVar13);
      lVar9 = lVar13 + 0x10;
    } while (lVar8 == 0);
    uVar14 = *(undefined8 *)((long)alStack_f8 + lVar13 + -8);
    func_0x000107c61434(lVar8);
    puVar4 = puStack_100;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_1018d7bc8(0,*(long *)(puStack_100 + 0x10) + 1,1);
      puStack_100 = puVar4;
    }
    uVar6 = *(ulong *)(puStack_100 + 0x10);
    if (*(ulong *)(puStack_100 + 0x18) >> 1 <= uVar6) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puStack_100 + 0x18));
      FUN_1018d7bc8(puVar4,uVar6 + 1,1,puStack_100);
      puStack_100 = puVar4;
    }
    *(ulong *)(puStack_100 + 0x10) = uVar6 + 1;
    *(undefined8 *)(puStack_100 + uVar6 * 0x10 + 0x20) = uVar14;
    *(long *)(puStack_100 + uVar6 * 0x10 + 0x28) = lVar8;
  } while( true );
LAB_1018d6be8:
  puVar4 = puStack_80;
  if (*(ulong *)(puStack_100 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d80);
    (*pcVar1)();
  }
  lVar13 = *plVar15;
  uVar12 = *(ulong *)(lVar13 + 0x10);
  lVar9 = *(long *)(puStack_80 + 0x10);
  if (SCARRY8(lVar9,uVar12)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d84);
    (*pcVar1)();
  }
  uVar16 = plVar15[-1];
  func_0x000107c61434(lVar13);
  puVar3 = puVar4;
  func_0x000107c61558();
  if (((int)puVar3 == 0) ||
     (uVar7 = *(ulong *)(puVar4 + 0x18) >> 1, (long)uVar7 < (long)(lVar9 + uVar12))) {
    func_0x0001000d182c();
    uVar7 = *(ulong *)(puVar3 + 0x18) >> 1;
    puVar4 = puVar3;
    if (*(long *)(lVar13 + 0x10) != 0) goto LAB_1018d6c6c;
LAB_1018d6bc4:
    func_0x000107c6142c(lVar13);
    puVar3 = puVar4;
    if (uVar12 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d88);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar4;
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_1018d6bc4;
LAB_1018d6c6c:
    if (uVar7 - *(long *)(puVar3 + 0x10) < uVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d8c);
      (*pcVar1)();
    }
    func_0x000107c6140c(puVar3 + *(long *)(puVar3 + 0x10) * 0x10 + 0x20,lVar13 + 0x20,uVar12,
                        PTR___sSSN_11034da80);
    func_0x000107c6142c(lVar13);
    if (uVar12 != 0) {
      if (SCARRY8(*(long *)(puVar3 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d6d90);
        (*pcVar1)();
      }
      *(ulong *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + uVar12;
    }
  }
  uVar6 = uVar6 + 1;
  uVar10 = uVar16 | uVar10;
  plVar15 = plVar15 + 2;
  puStack_80 = puVar3;
  if (uVar11 == uVar6) {
    uStack_114 = 0;
LAB_1018d6cc4:
    func_0x000107c6142c(puStack_100);
    if ((param_7 != (code *)0x0) && (uVar10 != 0)) {
      func_0x000107c6157c(param_8);
      (*param_7)(uVar10);
      FUN_1018d80ec(param_7,param_8);
    }
    uVar14 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar14;
    func_0x00010011d734();
    func_0x000107c5fa80(10,0xe100000000000000,uVar14,uVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(puStack_80);
    return uStack_114;
  }
  goto LAB_1018d6be8;
}



/* Entry: 1018d6db4; end: 1018d7317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018d6db4(ulong param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 auVar11 [16];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = param_1;
  func_0x000107c44b84();
  iVar4 = (int)uVar10;
  if ((uVar10 & 1) == 0) {
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    uVar10 = 0x20;
  }
  else {
    uVar10 = 0;
  }
  lVar1 = _DAT_112dcfbb8;
  FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_90);
  lVar2 = lStack_70;
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar6 = PTR_PTR_1126b9420;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c5c50c();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d72f8);
    (*pcVar3)();
  }
  (**(code **)(lVar2 + 8))();
  func_0x000107c61170(puVar7);
  func_0x0001000834e4(auStack_90);
  uVar8 = param_1;
  func_0x000107c5c508();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d72fc);
    (*pcVar3)();
  }
  uVar9 = uVar8;
  func_0x000107c5dc0c();
  func_0x000107c61170(uVar8);
  if ((int)uVar9 == 0) goto LAB_1018d72b8;
  uVar8 = param_1;
  func_0x000107c44b7c();
  if ((int)uVar8 == 0) {
LAB_1018d6f18:
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    iVar4 = 0;
    uVar10 = uVar10 | 0x40;
  }
  else {
    uVar8 = param_1;
    func_0x000107c5c48c();
    func_0x000107c61180();
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7314);
      (*pcVar3)();
    }
    uVar9 = uVar8;
    func_0x000107c5dc0c();
    func_0x000107c61170(uVar8);
    if ((int)uVar9 < 1) goto LAB_1018d6f18;
  }
  FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
  lVar2 = lStack_70;
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar7 = puVar6;
  func_0x000107c5c48c();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7300);
    (*pcVar3)();
  }
  (**(code **)(lVar2 + 8))();
  func_0x000107c61170(puVar7);
  func_0x0001000834e4(auStack_90);
  uVar8 = param_1;
  func_0x000107c44734();
  if ((int)uVar8 == 0) {
LAB_1018d6ff8:
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    iVar4 = 0;
    uVar10 = uVar10 | 0x80;
  }
  else {
    uVar8 = param_1;
    func_0x000107c3e314();
    func_0x000107c61180();
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7318);
      (*pcVar3)();
    }
    uVar9 = uVar8;
    func_0x000107c5dc0c();
    func_0x000107c61170(uVar8);
    if ((long)uVar9 < 1) goto LAB_1018d6ff8;
  }
  FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
  lVar2 = lStack_70;
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar7 = puVar6;
  func_0x000107c3e310();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7304);
    (*pcVar3)();
  }
  (**(code **)(lVar2 + 8))();
  func_0x000107c61170(puVar7);
  func_0x0001000834e4(auStack_90);
  iVar5 = param_2;
  func_0x000107c3e30c();
  if ((iVar5 == -0x4524111) || (func_0x000107c3e30c(), param_2 == 0)) {
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    iVar4 = 0;
    uVar10 = uVar10 | 0x100;
  }
  FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
  lVar2 = lStack_70;
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar7 = puVar6;
  func_0x000107c3e30c();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7308);
    (*pcVar3)();
  }
  (**(code **)(lVar2 + 8))();
  func_0x000107c61170(puVar7);
  func_0x0001000834e4(auStack_90);
  uVar8 = param_1;
  func_0x000107c3d1f0();
  if ((int)uVar8 != 4) {
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    iVar4 = 0;
    uVar10 = uVar10 | 0x400;
  }
  FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
  lVar2 = lStack_70;
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar7 = puVar6;
  func_0x000107c3d1f0();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d730c);
    (*pcVar3)();
  }
  (**(code **)(lVar2 + 8))();
  func_0x000107c61170(puVar7);
  func_0x0001000834e4(auStack_90);
  func_0x000107c4ec9c();
  if ((int)param_1 != 4) {
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x00010109a32c();
    iVar4 = 0;
    uVar10 = uVar10 | 0x200;
  }
  FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  func_0x000107c4ec9c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7310);
    (*pcVar3)();
  }
  (**(code **)(lStack_70 + 8))();
  func_0x000107c61170(puVar6);
  func_0x0001000834e4(auStack_90);
LAB_1018d72b8:
  if (iVar4 != 0) {
    func_0x000107c6142c(puStack_68);
    uVar10 = 0;
    puStack_68 = (undefined *)0x0;
  }
  auVar11._8_8_ = puStack_68;
  auVar11._0_8_ = uVar10;
  return auVar11;
}



/* Entry: 1018d7318; end: 1018d77fb;  */

/* WARNING: Removing unreachable block (ram,0x0001018d77cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018d7318(float param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  lVar2 = param_2;
  func_0x000107c3fe74();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar2;
    func_0x000107c3d2a0();
    if ((int)lVar3 == 4) {
      uVar7 = 0;
      uVar8 = 1;
    }
    else {
      lVar3 = param_2;
      func_0x000107c44b00();
      uVar8 = (uint)lVar3 ^ 1;
      if ((uVar8 & 1) == 0) {
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x00010109a32c();
        uVar7 = 0x800;
      }
      else {
        uVar7 = 0;
      }
      FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_a0);
      lVar3 = lStack_80;
      func_0x0001000a8868(auStack_a0,uStack_88);
      puVar6 = PTR_PTR_1126b9420;
      func_0x000107c61168();
      func_0x000107c5b0c8();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77d8);
        (*pcVar1)();
      }
      (**(code **)(lVar3 + 8))();
      func_0x000107c61170(puVar6);
      func_0x0001000834e4(auStack_a0);
    }
    lVar3 = lVar2;
    func_0x000107c3d2a0();
    if ((int)lVar3 == 4) {
      func_0x000107c5b0c4();
      func_0x000107c61180();
      puVar6 = puStack_78;
      if (param_2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5cc84();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77dc);
          (*pcVar1)();
        }
        func_0x000107c5dc0c();
        func_0x000107c61170(lVar3);
        lVar3 = param_3;
        func_0x000107c3f638();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77e0);
          (*pcVar1)();
        }
        lVar4 = lVar3;
        func_0x000107c5dc0c();
        func_0x000107c61170(lVar3);
        if ((float)((long)(int)lVar4 / 1000) < param_1) {
          lVar3 = param_2;
          func_0x000107c44bdc();
          if ((int)lVar3 == 0) {
LAB_1018d7568:
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            func_0x000107c61538();
            func_0x00010109a32c();
            uVar8 = 0;
            uVar7 = uVar7 | 0x1000;
          }
          else {
            lVar3 = param_2;
            func_0x000107c5d034();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77ec);
              (*pcVar1)();
            }
            lVar4 = lVar3;
            func_0x000107c5dc0c();
            func_0x000107c61170(lVar3);
            lVar3 = lVar2;
            func_0x000107c5cc80();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77f0);
              (*pcVar1)();
            }
            lVar5 = lVar3;
            func_0x000107c5dc0c();
            func_0x000107c61170(lVar3);
            func_0x000107c3f638();
            func_0x000107c61180();
            if (param_3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77f4);
              (*pcVar1)();
            }
            lVar3 = param_3;
            func_0x000107c5dc0c();
            func_0x000107c61170(param_3);
            if (SCARRY8(lVar5,(long)(int)lVar3)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77d4);
              (*pcVar1)();
            }
            if (lVar4 < lVar5 + (int)lVar3) goto LAB_1018d7568;
          }
          FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_a0);
          lVar3 = lStack_80;
          func_0x0001000a8868(auStack_a0,uStack_88);
          puVar6 = PTR_PTR_1126b9420;
          func_0x000107c61168();
          func_0x000107c5b0d8();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77e8);
            (*pcVar1)();
          }
          (**(code **)(lVar3 + 8))();
          func_0x000107c61170(puVar6);
          func_0x0001000834e4(auStack_a0);
        }
        lVar3 = param_2;
        func_0x000107c44a44();
        if ((int)lVar3 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(param_2);
          uVar8 = uVar8 & 1;
          puVar6 = puStack_78;
          goto joined_r0x0001018d75ac;
        }
        lVar3 = param_2;
        func_0x000107c44bdc();
        if ((int)lVar3 == 0) {
LAB_1018d76b4:
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61538();
          func_0x00010109a32c();
          uVar8 = 0;
          uVar7 = uVar7 | 0x2000;
        }
        else {
          lVar3 = param_2;
          func_0x000107c4f070();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77f8);
            (*pcVar1)();
          }
          lVar4 = lVar3;
          func_0x000107c5dc0c();
          func_0x000107c61170(lVar3);
          lVar3 = param_2;
          func_0x000107c5d034();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77fc);
            (*pcVar1)();
          }
          lVar5 = lVar3;
          func_0x000107c5dc0c();
          func_0x000107c61170(lVar3);
          if (lVar4 < lVar5) goto LAB_1018d76b4;
        }
        FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_a0);
        func_0x0001000a8868(auStack_a0,uStack_88);
        puVar6 = PTR_PTR_1126b9420;
        func_0x000107c61168();
        func_0x000107c5b0d4();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d77e4);
          (*pcVar1)();
        }
        (**(code **)(lStack_80 + 8))();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(param_2);
        func_0x0001000834e4(auStack_a0);
        puVar6 = puStack_78;
        goto joined_r0x0001018d75ac;
      }
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170(lVar2);
      puVar6 = puStack_78;
joined_r0x0001018d75ac:
      puStack_78 = puVar6;
      if (uVar8 == 0) goto LAB_1018d7710;
    }
    func_0x000107c6142c(puVar6);
  }
  uVar7 = 0;
  puVar6 = (undefined *)0x0;
LAB_1018d7710:
  auVar9._8_8_ = puVar6;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 1018d77fc; end: 1018d7b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d77fc(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  int iStack_ac;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar4 = param_1;
  func_0x000107c3fe74();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5c508();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7b04);
      (*pcVar3)();
    }
    uVar6 = uVar5;
    func_0x000107c5dc0c();
    func_0x000107c61170(uVar5);
    if (((int)uVar6 == 0) || ((param_2 & 1) != 0)) {
      func_0x000107c61170(uVar4);
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar5 = uVar4;
      func_0x000107c44968();
      if ((uVar5 & 1) == 0) {
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x00010109a32c();
      }
      lVar1 = _DAT_112dcfbb8;
      FUN_1018d5168(unaff_x20 + _DAT_112dcfbb8,auStack_90);
      lVar2 = lStack_70;
      func_0x0001000a8868(auStack_90,uStack_78);
      puVar7 = PTR_PTR_1126b9420;
      func_0x000107c61168();
      puVar8 = puVar7;
      func_0x000107c4c0e0();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7b08);
        (*pcVar3)();
      }
      (**(code **)(lVar2 + 8))();
      func_0x000107c61170(puVar8);
      func_0x0001000834e4(auStack_90);
      uVar6 = param_1;
      func_0x000107c44940();
      if ((uVar6 & 1) == 0) {
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x00010109a32c();
        iStack_ac = 0;
      }
      else {
        iStack_ac = (int)uVar5;
      }
      FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
      lVar2 = lStack_70;
      func_0x0001000a8868(auStack_90,uStack_78);
      puVar8 = puVar7;
      func_0x000107c4b7b4();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7b0c);
        (*pcVar3)();
      }
      (**(code **)(lVar2 + 8))();
      func_0x000107c61170(puVar8);
      func_0x0001000834e4(auStack_90);
      func_0x000107c44944();
      if ((param_1 & 1) == 0) {
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x00010109a32c();
        iStack_ac = 0;
      }
      FUN_1018d5168(unaff_x20 + lVar1,auStack_90);
      func_0x0001000a8868(auStack_90,uStack_78);
      func_0x000107c4b7b8();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018d7b10);
        (*pcVar3)();
      }
      (**(code **)(lStack_70 + 8))();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar4);
      func_0x0001000834e4(auStack_90);
      if (iStack_ac != 0) {
        func_0x000107c6142c(puStack_68);
      }
    }
  }
  return;
}



/* Entry: 1018d7b10; end: 1018d7b6f; -[_TtC51AdAppInstallMetricsValidationServicesImplementation28AdAppInstallMetricsValidator init] */

void FUN_1018d7b10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAppInstallMetricsValidationServicesImplementation.AdAppInstallMetricsValidator"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018d7b3c);
  (*pcVar1)();
}



/* Entry: 1018d7b70; end: 1018d7bc7; -[_TtC51AdAppInstallMetricsValidationServicesImplementation28AdAppInstallMetricsValidator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d7b70(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcfbb0));
  func_0x0001000834e4(param_1 + _DAT_112dcfbb8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcfbc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dcfbc8));
  return;
}



/* Entry: 1018d7bc8; end: 1018d7cf7;  */

undefined * FUN_1018d7bc8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d7cf8);
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
    puVar3 = (undefined *)0x112dcfd30;
    func_0x0001000285a8(0x112dcfd30,&UNK_10d991538);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dcfd38;
    func_0x0001000285a8(0x112dcfd38,&UNK_10d991540);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018d7cf8; end: 1018d7dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1018d7cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  lStack_60 = param_6;
  uStack_58 = param_7;
  func_0x0001000c5db4(auStack_78);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))();
  *(undefined8 *)(param_5 + _DAT_112dcfbb0) = param_1;
  FUN_1018d5168(auStack_78,param_5 + _DAT_112dcfbb8);
  *(undefined8 *)(param_5 + _DAT_112dcfbc0) = param_3;
  *(undefined8 *)(param_5 + _DAT_112dcfbc8) = param_4;
  plVar2 = &lStack_88;
  lStack_88 = param_5;
  lStack_80 = lVar1;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_78);
  return plVar2;
}



/* Entry: 1018d7dd4; end: 1018d7f8f;  */

ulong FUN_1018d7dd4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d7eb8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d7ebc);
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
  FUN_1018d80ac(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018d7f90);
  (*pcVar2)();
}



/* Entry: 1018d7f90; end: 1018d804f;  */

void FUN_1018d7f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c610f8(param_5);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_6);
  FUN_1018d7cf8(param_1,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1018d8050; end: 1018d806f;  */

void FUN_1018d8050(void)

{
  func_0x000107c61168(&PTR_PTR_1127eaee8);
  return;
}



/* Entry: 1018d8070; end: 1018d80ab;  */

void FUN_1018d8070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_1018d56f4(uVar3,uVar1,uVar4,uVar2,uVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1018d80ac; end: 1018d80eb;  */

void FUN_1018d80ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1018d80ec; end: 1018d810f;  */

void FUN_1018d80ec(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1018d8110; end: 1018d814f;  */

void FUN_1018d8110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcffe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991594;
  func_0x000107c61520(&UNK_10d991594,&UNK_11040d800);
  puRam0000000112dcffe0 = puVar1;
  return;
}



/* Entry: 1018d8150; end: 1018d8153;  */

void FUN_1018d8150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcffe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991564;
  func_0x000107c61520(&UNK_10d991564,&UNK_11040d800);
  puRam0000000112dcffe8 = puVar1;
  return;
}



/* Entry: 1018d8154; end: 1018d8193;  */

void FUN_1018d8154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcffe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991564;
  func_0x000107c61520(&UNK_10d991564,&UNK_11040d800);
  puRam0000000112dcffe8 = puVar1;
  return;
}



/* Entry: 1018d8194; end: 1018d8197;  */

void FUN_1018d8194(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcfff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991684;
  func_0x000107c61520(&UNK_10d991684,&UNK_11040d800);
  puRam0000000112dcfff0 = puVar1;
  return;
}



/* Entry: 1018d8198; end: 1018d81d7;  */

void FUN_1018d8198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcfff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d991684;
  func_0x000107c61520(&UNK_10d991684,&UNK_11040d800);
  puRam0000000112dcfff0 = puVar1;
  return;
}



/* Entry: 1018d81d8; end: 1018d81db;  */

void FUN_1018d81d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcfff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9915bc;
  func_0x000107c61520(&UNK_10d9915bc,&UNK_11040d800);
  puRam0000000112dcfff8 = puVar1;
  return;
}



/* Entry: 1018d81dc; end: 1018d821b;  */

void FUN_1018d81dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcfff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9915bc;
  func_0x000107c61520(&UNK_10d9915bc,&UNK_11040d800);
  puRam0000000112dcfff8 = puVar1;
  return;
}



/* Entry: 1018d821c; end: 1018d8223;  */

bool FUN_1018d821c(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 1018d8224; end: 1018d8253;  */

void FUN_1018d8224(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1018d8254; end: 1018d839b;  */

/* WARNING: Possible PIC construction at 0x0001018d82f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d8354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018d8364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d8358) */
/* WARNING: Removing unreachable block (ram,0x0001018d82f4) */
/* WARNING: Removing unreachable block (ram,0x0001018d8368) */
/* WARNING: Removing unreachable block (ram,0x0001018d8378) */
/* WARNING: Removing unreachable block (ram,0x0001018d8380) */

void FUN_1018d8254(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0x65756c6176;
  func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
  bVar3 = (param_2 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5e508(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1018d839c; end: 1018d83bf;  */

void FUN_1018d839c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018d83c0; end: 1018d83df;  */

void FUN_1018d83c0(void)

{
  FUN_1018d8254();
  return;
}



/* Entry: 1018d83e0; end: 1018d83ff;  */

void FUN_1018d83e0(void)

{
  func_0x000107c61168(&PTR_PTR_112dd0040);
  return;
}



/* Entry: 1018d8400; end: 1018d842f;  */

void FUN_1018d8400(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1018d8430; end: 1018d8453;  */

void FUN_1018d8430(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018d8454; end: 1018d84fb;  */

/* WARNING: Possible PIC construction at 0x0001018d84d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018d84d8) */

void FUN_1018d8454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c3e200(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018d84fc; end: 1018d85f7;  */

void FUN_1018d84fc(void)

{
  func_0x000107c61168(&PTR_PTR_112dd00e0);
  return;
}



/* Entry: 1018d85f8; end: 1018d8643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018d85f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dd0140) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


