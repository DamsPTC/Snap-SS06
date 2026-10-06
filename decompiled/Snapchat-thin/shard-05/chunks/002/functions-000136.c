/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bb1dd4; end: 103bb21b3;  */

long FUN_103bb1dd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103bb21b4; end: 103bb21bf; -[SCOperaVideoProgressViewViewModel progressViewText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb21b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff34b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff34b0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb21c0; end: 103bb21cb; -[SCOperaVideoProgressViewViewModel progressViewTimeText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb21c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff34b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff34b8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb21cc; end: 103bb2223;  */

void FUN_103bb21cc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb2224; end: 103bb2233; -[SCOperaVideoProgressViewViewModel progressBarNonVideoViewedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bb2224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff34c0);
}



/* Entry: 103bb2234; end: 103bb2243; -[SCOperaVideoProgressViewViewModel progressBarDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bb2234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff34c8);
}



/* Entry: 103bb2244; end: 103bb2253; -[SCOperaVideoProgressViewViewModel disableProgressViewMinimizedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bb2244(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff34d0);
}



/* Entry: 103bb2254; end: 103bb2263; -[SCOperaVideoProgressViewViewModel completedProgressBarColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff34d8));
  return;
}



/* Entry: 103bb2264; end: 103bb2273; -[SCOperaVideoProgressViewViewModel completedProgressLabelTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff34e0));
  return;
}



/* Entry: 103bb2274; end: 103bb2283; -[SCOperaVideoProgressViewViewModel remainingProgressBarColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff34e8));
  return;
}



/* Entry: 103bb2284; end: 103bb2293; -[SCOperaVideoProgressViewViewModel remainingProgressBarTappedColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff34f0));
  return;
}



/* Entry: 103bb2294; end: 103bb22a3; -[SCOperaVideoProgressViewViewModel remainingProgressLabelTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff34f8));
  return;
}



/* Entry: 103bb22a4; end: 103bb22b3; -[SCOperaVideoProgressViewViewModel latchTappedColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bb22a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3500);
}



/* Entry: 103bb22b4; end: 103bb22c3; -[SCOperaVideoProgressViewViewModel usesEmphasisFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bb22b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff3508);
}



/* Entry: 103bb22c4; end: 103bb254b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb22c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff34b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff34b8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34c8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff34d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34d8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34e0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34e8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34f0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34f8) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3500) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3508) = param_13._1_1_;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb254c; end: 103bb265b; -[SCOperaVideoProgressViewViewModel initWithProgressViewText:progressViewTimeText:progressBarNonVideoViewedTime:progressBarDurationSec:disableProgressViewMinimizedState:completedProgressBarColor:completedProgressLabelTextColor:remainingProgressBarColor:remainingProgressBarTappedColor:remainingProgressLabelTextColor:latchTappedColor:usesEmphasisFont:] */

void FUN_103bb254c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined1 param_13)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  
  if (param_5 == 0) {
    uStack_88 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_4;
    uStack_88 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_4 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000103bb2408(param_1,param_2,uStack_88,uVar1,param_6,param_4,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  return;
}



/* Entry: 103bb265c; end: 103bb269b;  */

undefined8 FUN_103bb265c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103bb27e0(param_1);
  FUN_103bb2998(param_1);
  return uVar1;
}



/* Entry: 103bb269c; end: 103bb269f; -[SCOperaVideoProgressViewViewModel copyWithZone:] */

void FUN_103bb269c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bb26a0; end: 103bb26d3; -[SCOperaVideoProgressViewViewModel description] */

void FUN_103bb26a0(void)

{
  undefined1 auStack_78 [104];
  
  FUN_103bb29cc(auStack_78);
  FUN_103bb2998(auStack_78);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb26d4; end: 103bb274f; -[SCOperaVideoProgressViewViewModel init] */

void FUN_103bb26d4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaVideoProgressViewAPI/SCOperaVideoProgressViewViewModelWrapper.swift",
                      0x4a,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb271c);
  (*pcVar1)();
}



/* Entry: 103bb2750; end: 103bb27df; -[SCOperaVideoProgressViewViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb2794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb27b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb2798) */
/* WARNING: Removing unreachable block (ram,0x000103bb27b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb2750(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff34b0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff34b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff34d8));
  return;
}



/* Entry: 103bb27e0; end: 103bb2997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb27e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff34b0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff34b8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112ff34c0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff34c8) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff34d0) = *(undefined1 *)(param_1 + 6);
  uStack_58 = param_1[7];
  uStack_60 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_112ff34d8) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34e0) = uStack_60;
  uStack_68 = param_1[9];
  uStack_70 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_112ff34e8) = uStack_68;
  *(undefined8 *)(unaff_x20 + _DAT_112ff34f0) = uStack_70;
  uStack_78 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_112ff34f8) = uStack_78;
  *(undefined1 *)(unaff_x20 + _DAT_112ff3500) = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(unaff_x20 + _DAT_112ff3508) = *(undefined1 *)((long)param_1 + 0x61);
  FUN_103bb2b04(&uStack_40,auStack_88,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bb2b04(&uStack_50,auStack_88,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bb2b04(&uStack_58,auStack_88,0x112ff3538,&UNK_10dc5f260);
  FUN_103bb2b04(&uStack_60,auStack_88,0x112ff3538,&UNK_10dc5f260);
  FUN_103bb2b04(&uStack_68,auStack_88,0x112ff3538,&UNK_10dc5f260);
  FUN_103bb2b04(&uStack_70,auStack_88,0x112ff3538,&UNK_10dc5f260);
  FUN_103bb2b04(&uStack_78,auStack_88,0x112ff3538,&UNK_10dc5f260);
  func_0x000107c61154(&stack0xffffffffffffff68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb2998; end: 103bb29cb;  */

undefined8 FUN_103bb2998(undefined8 param_1)

{
  (*(code *)(undefined *)0x103bb1e00)();
  return param_1;
}



/* Entry: 103bb29cc; end: 103bb2ae3;  */

/* WARNING: Possible PIC construction at 0x000103bb2ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bb2ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb2ab4) */
/* WARNING: Removing unreachable block (ram,0x000103bb2ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb29cc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar13 = *(undefined8 *)(param_2 + _DAT_112ff34c0);
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff34b0);
  puVar2 = (undefined8 *)(param_2 + _DAT_112ff34b8);
  uVar14 = *(undefined8 *)(param_2 + _DAT_112ff34c8);
  uVar3 = *(undefined1 *)(param_2 + _DAT_112ff34d0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_112ff34d8);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112ff34e0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_112ff34e8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_112ff34f0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_112ff34f8);
  uVar4 = *(undefined1 *)(param_2 + _DAT_112ff3500);
  uVar5 = *(undefined1 *)(param_2 + _DAT_112ff3508);
  uVar6 = puVar1[1];
  uVar15 = *puVar1;
  uVar12 = puVar2[1];
  uVar17 = puVar2[1];
  uVar16 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  *(undefined1 *)(param_1 + 6) = uVar3;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  *(undefined1 *)(param_1 + 0xc) = uVar4;
  *(undefined1 *)((long)param_1 + 0x61) = uVar5;
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 103bb2ae4; end: 103bb2b03;  */

void FUN_103bb2ae4(void)

{
  func_0x000107c61168(&PTR_PTR_11293c3e8);
  return;
}



/* Entry: 103bb2b04; end: 103bb2b4b;  */

undefined8 FUN_103bb2b04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bb2b4c; end: 103bb3013;  */

/* WARNING: Possible PIC construction at 0x000103bb2b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb2b64) */

void FUN_103bb2b4c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 103bb3014; end: 103bb3033; -[SCOperaEventPublisher operaViewLifecycleEventPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3014(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff3540));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3034; end: 103bb3053; -[SCOperaEventPublisher operaMediaEventPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3034(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff3548));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3054; end: 103bb3057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3054(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3540) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff3548) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb3058; end: 103bb3133; -[SCOperaEventPublisher initWithOperaViewLifecycleEventPublisher:operaMediaEventPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff3540) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff3548) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103bb3134; end: 103bb3137; -[SCOperaEventPublisher copyWithZone:] */

void FUN_103bb3134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bb3138; end: 103bb3153; -[SCOperaEventPublisher description] */

void FUN_103bb3138(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3154; end: 103bb31cf; -[SCOperaEventPublisher init] */

void FUN_103bb3154(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "OperaInternalAPIDefines/OperaEventPublisherWrapper.swift",0x38,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb319c);
  (*pcVar1)();
}



/* Entry: 103bb31d0; end: 103bb3207; -[SCOperaEventPublisher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb31ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb31f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb31d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff3540));
  return;
}



/* Entry: 103bb3208; end: 103bb3227;  */

void FUN_103bb3208(void)

{
  func_0x000107c61168(&PTR_PTR_11293c508);
  return;
}



/* Entry: 103bb3228; end: 103bb322b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3228(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3540) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff3548) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb322c; end: 103bb32d7;  */

void FUN_103bb322c(void)

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



/* Entry: 103bb32d8; end: 103bb330f;  */

void FUN_103bb32d8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103bb3310; end: 103bb332f; -[SCOperaMediaEvent description] */

void FUN_103bb3310(void)

{
  FUN_103bb3674();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3330; end: 103bb3377; -[SCOperaMediaEvent init] */

void FUN_103bb3330(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "OperaInternalAPIDefines/OperaMediaEventWrapper.swift",0x34,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb3378);
  (*pcVar1)();
}



/* Entry: 103bb3378; end: 103bb337b; -[SCOperaMediaEvent copyWithZone:] */

void FUN_103bb3378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bb337c; end: 103bb33fb; +[SCOperaMediaEvent imageStartsToDisplayWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb337c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff3578) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff3580) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff3588) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff3590) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb33fc; end: 103bb347f; +[SCOperaMediaEvent mediaStartsToDisplayWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb33fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff3578) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff3580) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff3588) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff3590) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3480; end: 103bb3593; +[SCOperaMediaEvent playbackProgressDidUpdateWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff3578) = 2;
  *(undefined8 *)(lVar2 + _DAT_112ff3580) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff3588) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff3590) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3594; end: 103bb35f7; -[SCOperaMediaEvent matchImageStartsToDisplay:mediaStartsToDisplay:playbackProgressDidUpdate:] */

void FUN_103bb3594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103bb3504(FUN_103bb38a4,auStack_40,0x103bb38b4,auStack_60,0x103bb38b8,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bb35f8; end: 103bb362b;  */

void FUN_103bb35f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bb362c; end: 103bb3673; -[SCOperaMediaEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb3648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb364c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb362c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff3580));
  return;
}



/* Entry: 103bb3674; end: 103bb36db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103bb3674(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff3578) == '\0') {
    if (*(ulong *)(param_1 + _DAT_112ff3580) != 0) {
      return *(ulong *)(param_1 + _DAT_112ff3580);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb36d8);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_112ff3578) == '\x01') {
    if (*(ulong *)(param_1 + _DAT_112ff3588) != 0) {
      return *(ulong *)(param_1 + _DAT_112ff3588) | 0x4000000000000000;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb36d4);
    (*pcVar1)();
  }
  if (*(ulong *)(param_1 + _DAT_112ff3590) != 0) {
    return *(ulong *)(param_1 + _DAT_112ff3590) | 0x8000000000000000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb36dc);
  (*pcVar1)();
}



/* Entry: 103bb36dc; end: 103bb36fb;  */

void FUN_103bb36dc(void)

{
  func_0x000107c61168(&PTR_PTR_11293c5d8);
  return;
}



/* Entry: 103bb36fc; end: 103bb3863;  */

int FUN_103bb36fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bb3778;
        goto LAB_103bb375c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bb375c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103bb3778:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bb3864; end: 103bb38a3;  */

void FUN_103bb3864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff35c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5f338;
  func_0x000107c61520(&UNK_10dc5f338,&UNK_1106e02a0);
  puRam0000000112ff35c0 = puVar1;
  return;
}



/* Entry: 103bb38a4; end: 103bb38bb;  */

void FUN_103bb38a4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103bb38b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103bb38bc; end: 103bb3967;  */

void FUN_103bb38bc(void)

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



/* Entry: 103bb3968; end: 103bb39a7;  */

void FUN_103bb3968(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103bb39a8; end: 103bb39ff; -[SCOperaViewLifecycleEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb39a8(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff35c8) == '\x01') {
    if (*(long *)(param_1 + _DAT_112ff35d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb39d0);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff35d0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb3a00);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3a00; end: 103bb3a47; -[SCOperaViewLifecycleEvent init] */

void FUN_103bb3a00(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "OperaInternalAPIDefines/OperaViewLifecycleEventWrapper.swift",0x3c,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb3a48);
  (*pcVar1)();
}



/* Entry: 103bb3a48; end: 103bb3a4b; -[SCOperaViewLifecycleEvent copyWithZone:] */

void FUN_103bb3a48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bb3a4c; end: 103bb3abf; +[SCOperaViewLifecycleEvent openViewLoadedWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff35c8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff35d0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff35d8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3ac0; end: 103bb3ba3; +[SCOperaViewLifecycleEvent openViewWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff35c8) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff35d0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff35d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb3ba4; end: 103bb3bef; -[SCOperaViewLifecycleEvent matchOpenViewLoaded:openView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3ba4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff35c8) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_112ff35d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb3bd0);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff35d0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb3bf0);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103bb3be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103bb3bf0; end: 103bb3c23;  */

void FUN_103bb3bf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bb3c24; end: 103bb3c5b; -[SCOperaViewLifecycleEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb3c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb3c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff35d0));
  return;
}



/* Entry: 103bb3c5c; end: 103bb3c7b;  */

void FUN_103bb3c5c(void)

{
  func_0x000107c61168(&PTR_PTR_11293c6b0);
  return;
}



/* Entry: 103bb3c7c; end: 103bb3de3;  */

int FUN_103bb3c7c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bb3cf8;
        goto LAB_103bb3cdc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bb3cdc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bb3cf8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bb3de4; end: 103bb3e23;  */

void FUN_103bb3de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff3608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5f420;
  func_0x000107c61520(&UNK_10dc5f420,&UNK_1106e0388);
  puRam0000000112ff3608 = puVar1;
  return;
}



/* Entry: 103bb3e24; end: 103bb3e33; -[SCOperaShakeToReportSummaryInfo navigationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bb3e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff3610);
}



/* Entry: 103bb3e34; end: 103bb3e43; -[SCOperaShakeToReportSummaryInfo currentOperaPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff3618));
  return;
}



/* Entry: 103bb3e44; end: 103bb3e4f; -[SCOperaShakeToReportSummaryInfo responsiveLayoutInfoForCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3e44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3620))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3620);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb3e50; end: 103bb3e5b; -[SCOperaShakeToReportSummaryInfo layerViewControllersInfoForCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3e50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3628))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3628);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb3e5c; end: 103bb3e67; -[SCOperaShakeToReportSummaryInfo currentPlayerStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff3630))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff3630);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb3e68; end: 103bb3ebf;  */

void FUN_103bb3e68(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bb3ec0; end: 103bb3f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff3610) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff3618) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3620);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3628);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff3630);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb3f84; end: 103bb409b; -[SCOperaShakeToReportSummaryInfo initWithNavigationStyle:currentOperaPage:responsiveLayoutInfoForCurrentPage:layerViewControllersInfoForCurrentPage:currentPlayerStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb3f84(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_6 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_7 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112ff3610) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff3618) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112ff3620);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112ff3628);
  *plVar1 = param_6;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff3630);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bb409c; end: 103bb40fb; -[SCOperaShakeToReportSummaryInfo init] */

void FUN_103bb409c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaS2RApi.OperaShakeToReportSummaryInfo",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bb40c8);
  (*pcVar1)();
}



/* Entry: 103bb40fc; end: 103bb415f; -[SCOperaShakeToReportSummaryInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bb412c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bb4130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bb40fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff3618));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff3620 + 8))
  ;
  return;
}



/* Entry: 103bb4160; end: 103bb417f;  */

void FUN_103bb4160(void)

{
  func_0x000107c61168(&PTR_PTR_11293c780);
  return;
}



/* Entry: 103bb4180; end: 103bb41b3; +[SCOperaActionMenuEvents end] */

void FUN_103bb4180(void)

{
  func_0x000107c5fadc(0x6d5f6e6f69746361,0xef646e655f756e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb41b4; end: 103bb41df; +[SCOperaActionMenuEvents headerTap] */

void FUN_103bb41b4(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1a7fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb41e0; end: 103bb420f; +[SCOperaActionMenuEvents reportSnap] */

void FUN_103bb41e0(void)

{
  func_0x000107c5fadc(0x735f74726f706572,0xeb0000000070616e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4210; end: 103bb421b;  */

undefined * FUN_103bb4210(void)

{
  return &UNK_1106e0518;
}



/* Entry: 103bb421c; end: 103bb4247; +[SCOperaActionMenuEvents scwBlockAndReportSnap] */

void FUN_103bb421c(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1a7fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4248; end: 103bb4273; +[SCOperaActionMenuEvents getInfo] */

void FUN_103bb4248(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1a8000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4274; end: 103bb427f;  */

undefined * FUN_103bb4274(void)

{
  return &UNK_1106e0528;
}



/* Entry: 103bb4280; end: 103bb42ab; +[SCOperaActionMenuEvents edit] */

void FUN_103bb4280(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1a8020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb42ac; end: 103bb42b7;  */

undefined * FUN_103bb42ac(void)

{
  return &UNK_1106e0538;
}



/* Entry: 103bb42b8; end: 103bb42e3; +[SCOperaActionMenuEvents save] */

void FUN_103bb42b8(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1a8040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb42e4; end: 103bb42ef;  */

undefined * FUN_103bb42e4(void)

{
  return &UNK_1106e0548;
}



/* Entry: 103bb42f0; end: 103bb431b; +[SCOperaActionMenuEvents delete] */

void FUN_103bb42f0(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1a8060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb431c; end: 103bb4347; +[SCOperaActionMenuEvents toggleMEO] */

void FUN_103bb431c(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1a8080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4348; end: 103bb4373; +[SCOperaActionMenuEvents backupNow] */

void FUN_103bb4348(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1a80a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4374; end: 103bb439f; +[SCOperaActionMenuEvents retryBackup] */

void FUN_103bb4374(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1a80c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb43a0; end: 103bb43cb; +[SCOperaActionMenuEvents creatorAttributionTap] */

void FUN_103bb43a0(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a80e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb43cc; end: 103bb43f7; +[SCOperaActionMenuEvents showSettings] */

void FUN_103bb43cc(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1a8110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb43f8; end: 103bb4423; +[SCOperaActionMenuEvents notificationOptIn] */

void FUN_103bb43f8(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a8130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4424; end: 103bb444f; +[SCOperaActionMenuEvents subscribe] */

void FUN_103bb4424(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a8150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb4450; end: 103bb447b; +[SCOperaActionMenuEvents postToMyStory] */

void FUN_103bb4450(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a8170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb447c; end: 103bb4487;  */

undefined * FUN_103bb447c(void)

{
  return &UNK_1106e0558;
}



/* Entry: 103bb4488; end: 103bb44b3; +[SCOperaActionMenuEvents quickPostToStories] */

void FUN_103bb4488(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a8190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bb44b4; end: 103bb44df; +[SCOperaActionMenuEvents liveBouncePrototype] */

void FUN_103bb44b4(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a81c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


