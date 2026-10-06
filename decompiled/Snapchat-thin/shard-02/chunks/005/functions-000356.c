/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e66574; end: 101e665df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66574(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 0x18) + 0x48))(param_1);
  }
  return;
}



/* Entry: 101e665e0; end: 101e6665f; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController playbackSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e665e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    lVar3 = *(long *)(lVar3 + 0x20);
    (**(code **)(lVar3 + 0x20))();
    if (lVar3 != 0) {
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
      goto LAB_101e66650;
    }
  }
  lVar2 = 0;
LAB_101e66650:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101e66660; end: 101e666c3; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController accumulatedWatchTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66660(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 0x20) + 0x18))();
  }
  return;
}



/* Entry: 101e666c4; end: 101e66763; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController mediaVariantSwitchHistory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e666c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  puVar3 = (undefined *)*puVar1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined *)0x0) {
    lVar5 = puVar1[1];
    func_0x000107c614f0(puVar3);
    (**(code **)(*(long *)(lVar5 + 0x20) + 8))();
    puVar4 = puVar3;
  }
  uVar2 = 0;
  FUN_101e67f74(0,0x112e32da8,&PTR_PTR_1126a9668);
  puVar3 = puVar4;
  func_0x000107c5fc48(puVar4,uVar2);
  func_0x000107c6142c(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101e66764; end: 101e667f3; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66764(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(*(long *)(param_2 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    lVar4 = *(long *)PTR__kCMTimeZero_110348670;
    uVar2 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar3 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    param_4 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar5 = plVar1[1];
    func_0x000107c614f0();
    uVar2 = *(ulong *)(lVar5 + 0x20);
    (**(code **)(uVar2 + 0x10))();
    uVar3 = (undefined4)(uVar2 >> 0x20);
  }
  *param_1 = lVar4;
  *(int *)(param_1 + 1) = (int)uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  param_1[2] = param_4;
  return;
}



/* Entry: 101e667f4; end: 101e66857; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e667f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 8) + 8))();
  }
  return;
}



/* Entry: 101e66858; end: 101e668bb; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController vsrAnalyticsData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66858(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 8) + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e668bc; end: 101e6696f; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController playbackSummary] */

void FUN_101e668bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x000101e668f0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e66970; end: 101e66a03; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerVideoContentController resetAnalytics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66970(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 8) + 0x28))();
  }
  return;
}



/* Entry: 101e66a04; end: 101e66abf;  */

undefined8 * FUN_101e66a04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar3 = param_2[10];
  uVar2 = param_2[0xb];
  param_1[10] = uVar3;
  func_0x000107c6157c();
  func_0x000107c61434(uVar1);
  func_0x000107c615f0(uVar3);
  func_0x000107c614b0(uVar2);
  param_1[0xb] = uVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  return param_1;
}



/* Entry: 101e66ac0; end: 101e66bdf;  */

undefined8 * FUN_101e66ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[0xb];
  uVar2 = param_2[0xb];
  func_0x000107c614b0(uVar2);
  param_1[0xb] = uVar2;
  func_0x000107c614ac(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  *(undefined1 *)((long)param_1 + 99) = *(undefined1 *)((long)param_2 + 99);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 101e66be0; end: 101e66cbb;  */

undefined8 * FUN_101e66be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  func_0x000107c615e8(param_1[10]);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c614ac(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
  *(undefined1 *)((long)param_1 + 99) = *(undefined1 *)((long)param_2 + 99);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  return param_1;
}



/* Entry: 101e66cbc; end: 101e66d73;  */

int FUN_101e66cbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e66d74; end: 101e6764b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e66d74(double param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long extraout_x8;
  long extraout_x12;
  undefined8 ******ppppppuVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *******pppppppuVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 *****apppppuStack_1e0 [4];
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined8 ******ppppppuStack_160;
  double dStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 uStack_110;
  undefined8 *****pppppuStack_108;
  ulong uStack_100;
  undefined8 ******ppppppuStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 *****pppppuStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  dVar29 = param_1;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar26 = (undefined8 *)((long)apppppuStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar5 + -8);
  lVar25 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (long)puVar26 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar23 - extraout_x12;
  uVar13 = 1;
  func_0x000107c61428(unaff_x20 + 200,auStack_90,1,0);
  if ((*(byte *)(unaff_x20 + 0xe8) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  ppppppuVar15 = (undefined8 ******)*plVar1;
  if (ppppppuVar15 == (undefined8 ******)0x0) {
    ppppppuVar20 = *(undefined8 *******)PTR__kCMTimeZero_110348670;
    uVar11 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar14 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar18 = plVar1[1];
    ppppppuVar20 = ppppppuVar15;
    func_0x000107c614f0();
    uVar11 = *(ulong *)(lVar18 + 0x20);
    ppppppuStack_f8 = ppppppuVar15;
    (**(code **)(uVar11 + 0x10))();
    uVar14 = (undefined4)(uVar11 >> 0x20);
  }
  dStack_f0 = (double)CONCAT44(uVar14,(int)uVar11);
  ppppppuStack_f8 = ppppppuVar20;
  uStack_e8 = uVar13;
  func_0x000107c60a3c(&ppppppuStack_f8);
  *(undefined1 *)(unaff_x20 + 0xe8) = 1;
  func_0x000107c5eea0(lVar21);
  uVar6 = 600;
  func_0x000107c600d0(param_1);
  if (param_3 - 1U < 4) {
    uVar16 = *(undefined8 *)(&UNK_10da1c558 + (param_3 - 1U) * 8);
  }
  else {
    uVar16 = 0;
  }
  ppppppuVar15 = (undefined8 ******)*plVar1;
  if (ppppppuVar15 != (undefined8 ******)0x0) {
    pppppuStack_1b0 = (undefined8 *****)(uVar11 >> 0x20);
    lStack_1b8 = plVar1[1];
    apppppuStack_1e0[2] = (undefined8 *****)uVar6;
    apppppuStack_1e0[3] = (undefined8 *****)uVar13;
    uStack_1c0 = uVar11;
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    *puVar26 = param_2;
    func_0x000107c6159c(puVar26,lVar4,1);
    uVar13 = 0;
    FUN_101e4c630(0);
    func_0x000107c615f0(ppppppuVar15);
    (*(code *)(undefined *)0x101e4c60c)(puVar26,uVar13,&PTR_DAT_11048e450);
    FUN_101e67e1c(puVar26,&SUB_103b31818);
    ppppppuVar20 = ppppppuVar15;
    func_0x000107c614f0();
    puVar7 = &UNK_11048f198;
    apppppuStack_1e0[1] = ppppppuVar20;
    ppppppuStack_f8 = ppppppuVar15;
    func_0x000107c613fc(&UNK_11048f198,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    (**(code **)(lVar17 + 0x10))(lVar23,lVar21,lVar5);
    uVar11 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar19 = uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff);
    uVar22 = lVar25 + uVar19 + 3 & 0xfffffffffffffffc;
    uVar28 = uVar22 + 0x1f & 0xfffffffffffffff8;
    puVar8 = &UNK_11048f238;
    func_0x000107c613fc(&UNK_11048f238,uVar28 + 8,uVar11 | 7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = param_3;
    *(double *)(puVar8 + 0x20) = param_1;
    *(undefined8 *)(puVar8 + 0x28) = param_2;
    (**(code **)(lVar17 + 0x20))(puVar8 + uVar19,lVar23,lVar5);
    uVar11 = uStack_1c0;
    pppppuVar3 = apppppuStack_1e0[3];
    pppppuVar2 = apppppuStack_1e0[2];
    puVar26 = (undefined8 *)(puVar8 + uVar22);
    *puVar26 = apppppuStack_1e0[2];
    *(int *)(puVar26 + 1) = (int)uStack_1c0;
    *(int *)((long)puVar26 + 0xc) = (int)pppppuStack_1b0;
    puVar26[2] = apppppuStack_1e0[3];
    *(undefined8 *)(puVar8 + uVar28) = uVar16;
    lVar4 = *(long *)(lStack_1b8 + 0x18);
    pcVar24 = *(code **)(lVar4 + 0x38);
    pppppuStack_1b0 = ppppppuVar15;
    func_0x000107c6157c(puVar7);
    (*pcVar24)(pppppuVar2,uVar11,pppppuVar3,0x101e67fd8,puVar8,apppppuStack_1e0[1],lVar4);
    func_0x000107c615e8(pppppuStack_1b0);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
  }
  pppppppuVar12 = &ppppppuStack_f8;
  uVar13 = 0x20;
  func_0x000107c61428(unaff_x20 + 200,pppppppuVar12,0x20,0);
  if (*(long *)(unaff_x20 + 0xf8) == 0) {
    (**(code **)(lVar17 + 8))(lVar21,lVar5);
    func_0x000107c614a8(&ppppppuStack_f8);
    return;
  }
  pppppppuVar9 = &ppppppuStack_f8;
  func_0x000107c614a8();
  func_0x000101e609e0(dVar29,param_1);
  if (((uint)uVar13 & 0xff) == 1) {
    (**(code **)(lVar17 + 8))(lVar21,lVar5);
    return;
  }
  dVar30 = *(double *)(unaff_x20 + 0x130);
  ppppppuVar15 = (undefined8 ******)*plVar1;
  dVar29 = dVar30;
  if (ppppppuVar15 == (undefined8 ******)0x0) {
    ppppppuVar20 = *(undefined8 *******)PTR__kCMTimeZero_110348670;
    uVar11 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar14 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar4 = plVar1[1];
    ppppppuVar20 = ppppppuVar15;
    func_0x000107c614f0();
    uVar11 = *(ulong *)(lVar4 + 0x20);
    ppppppuStack_f8 = ppppppuVar15;
    (**(code **)(uVar11 + 0x10))();
    uVar14 = (undefined4)(uVar11 >> 0x20);
  }
  dStack_f0 = (double)CONCAT44(uVar14,(int)uVar11);
  ppppppuStack_f8 = ppppppuVar20;
  uStack_e8 = uVar13;
  func_0x000107c60a3c(&ppppppuStack_f8);
  ppppppuVar15 = (undefined8 ******)*plVar1;
  if (ppppppuVar15 == (undefined8 ******)0x0) {
    dVar32 = 0.0;
    dVar31 = 0.0;
    lVar4 = *(long *)(unaff_x20 + 0xf8);
    if (lVar4 == 0) goto LAB_101e672ac;
LAB_101e67290:
    pppppppuVar27 = *(undefined8 ********)(*(long *)(lVar4 + 0x10) + 0x10);
    dVar31 = dVar32;
  }
  else {
    lVar4 = plVar1[1];
    dVar31 = dVar29;
    func_0x000107c614f0(ppppppuVar15);
    uVar11 = *(ulong *)(lVar4 + 0x20);
    ppppppuStack_f8 = ppppppuVar15;
    (**(code **)(uVar11 + 0x18))();
    dVar31 = dVar31 * 1000.0;
    lVar4 = *(long *)(unaff_x20 + 0xf8);
    dVar32 = dVar31;
    if (lVar4 != 0) goto LAB_101e67290;
LAB_101e672ac:
    pppppppuVar27 = (undefined8 *******)0x0;
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x100);
  ppppppuVar15 = *(undefined8 *******)(unaff_x20 + 0x108);
  ppppppuVar20 = (undefined8 ******)*plVar1;
  if (ppppppuVar20 == (undefined8 ******)0x0) {
    ppppppuVar10 = ppppppuVar15;
    func_0x000107c61434();
  }
  else {
    lVar4 = plVar1[1];
    ppppppuVar10 = ppppppuVar20;
    func_0x000107c614f0();
    uVar11 = *(ulong *)(lVar4 + 0x20);
    pcVar24 = *(code **)(uVar11 + 0x20);
    ppppppuStack_f8 = ppppppuVar20;
    func_0x000107c61434(ppppppuVar15);
    (*pcVar24)();
    if (uVar11 != 0) goto LAB_101e67330;
  }
  func_0x00010011df08();
  func_0x000107c61180();
  ppppppuVar20 = ppppppuVar10;
  func_0x000107c5faec();
  func_0x000107c61170(ppppppuVar10);
  ppppppuVar10 = ppppppuVar20;
LAB_101e67330:
  dStack_158 = dVar29 * 1000.0;
  dStack_148 = dVar30 * 1000.0;
  dStack_140 = param_1 * 1000.0;
  uStack_a8 = pppppppuVar9 == pppppppuVar27;
  uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
  uStack_110 = CONCAT71(uStack_a7,uStack_a8);
  uStack_150 = uStack_e8;
  ppppppuStack_160 = pppppppuVar12;
  dStack_138 = dVar31;
  uStack_130 = uVar16;
  uStack_128 = uVar13;
  pppppuStack_120 = ppppppuVar15;
  ppppppuStack_118 = pppppppuVar9;
  pppppuStack_108 = ppppppuVar10;
  uStack_100 = uVar11;
  ppppppuStack_f8 = pppppppuVar12;
  dStack_f0 = dStack_158;
  dStack_e0 = dStack_148;
  dStack_d8 = dStack_140;
  dStack_d0 = dVar31;
  uStack_c8 = uVar16;
  uStack_c0 = uVar13;
  pppppuStack_b8 = ppppppuVar15;
  ppppppuStack_b0 = pppppppuVar9;
  pppppuStack_a0 = ppppppuVar10;
  uStack_98 = uVar11;
  func_0x0001002a64a8(&ppppppuStack_160);
  (**(code **)(lVar17 + 8))(lVar21,lVar5);
  func_0x000101e67e58(&ppppppuStack_f8);
  return;
}



/* Entry: 101e6764c; end: 101e6770f;  */

void FUN_101e6764c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  lVar3 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000a8868(param_2 + 0x10,*(undefined8 *)(param_2 + 0x28));
    uVar1 = 0;
    FUN_101e4c630(0);
    if (lVar3 == 0) {
      uVar2 = 6;
      lVar3 = 0;
      uVar4 = 10;
    }
    else {
      uVar4 = 9;
    }
    FUN_101e4c5d0(uVar2,lVar3,0,uVar4,uVar1,&PTR_DAT_11048e450);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e67710; end: 101e6771b;  */

undefined1 FUN_101e67710(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + 0x1a0);
}



/* Entry: 101e6771c; end: 101e6773b;  */

void FUN_101e6771c(void)

{
  func_0x000101e61b08();
  return;
}



/* Entry: 101e6773c; end: 101e6785b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6773c(undefined8 param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(*unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x20))(param_1,lVar2);
  }
  return;
}



/* Entry: 101e6785c; end: 101e6796f;  */

void FUN_101e6785c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_2 + 400);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_2 + 0x198);
    lVar1 = lVar6;
    func_0x000107c614f0(lVar6);
    pcVar8 = *(code **)(lVar7 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar8)(lVar1,lVar7);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_4 + 0x28) + 0x18))();
  plVar2 = param_1;
  FUN_101e67970();
  func_0x000104884898();
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11048f198;
  func_0x000107c613fc(&UNK_11048f198,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  pcVar8 = FUN_101e679b0;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 400);
  *(code **)(param_2 + 400) = pcVar8;
  *(undefined **)(param_2 + 0x198) = puVar5;
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 101e67970; end: 101e679af;  */

void FUN_101e67970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65828;
  func_0x000107c61520(&UNK_10dc65828,&UNK_1106e8df8);
  puRam0000000112e33550 = puVar1;
  return;
}



/* Entry: 101e679b0; end: 101e679b7;  */

void FUN_101e679b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  lVar4 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000a8868(lVar1 + 0x10,*(undefined8 *)(lVar1 + 0x28));
    uVar2 = 0;
    FUN_101e4c630(0);
    if (lVar4 == 0) {
      uVar3 = 6;
      lVar4 = 0;
      uVar5 = 10;
    }
    else {
      uVar5 = 9;
    }
    FUN_101e4c5d0(uVar3,lVar4,0,uVar5,uVar2,&PTR_DAT_11048e450);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101e679b8; end: 101e67a0b;  */

void FUN_101e679b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e33558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101e67f74(0xff,0x112e33560,&PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e33558 = puVar2;
  return;
}



/* Entry: 101e67a0c; end: 101e67a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67a0c(void)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    plVar1 = (long *)(*(long *)(lVar3 + 0xb8) + _DAT_112e33588);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      bVar2 = 0;
    }
    else {
      lVar6 = plVar1[1];
      lVar4 = lVar5;
      func_0x000107c614f0();
      pcVar7 = *(code **)(lVar6 + 0x40);
      func_0x000107c615f0(lVar5);
      (*pcVar7)(lVar4,lVar6);
      bVar2 = (byte)lVar4;
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61428(lVar3 + 200,auStack_70,1,0);
    *(byte *)(lVar3 + 0x129) = bVar2 & 1;
    FUN_101e629f0(0xd000000000000012,0x800000010f0155c0);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 101e67a2c; end: 101e67ad7;  */

void FUN_101e67a2c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c6071c();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  return;
}



/* Entry: 101e67ad8; end: 101e67c83;  */

/* WARNING: Removing unreachable block (ram,0x000101e67c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67ad8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar8 = *plVar1;
  if (lVar8 == 0) goto LAB_101e67c14;
  lVar7 = plVar1[1];
  func_0x000107c615f0(lVar8);
  FUN_101e629f0(0xd000000000000012,0x800000010f015600);
  lVar3 = unaff_x20 + 0x180;
  func_0x000107c61648();
  lVar2 = _DAT_112e33150;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x30);
    lVar4 = lVar6 + _DAT_112e33150;
    func_0x000107c61648();
    if (lVar4 == 0) {
LAB_101e67b8c:
      FUN_101e5e450();
      func_0x000107c61634(lVar6 + lVar2,0);
      if (*(long *)(lVar6 + _DAT_112e33110) != 0) {
        FUN_101e4dc3c();
      }
    }
    else {
      func_0x000107c61574();
      lVar4 = lVar6 + lVar2;
      func_0x000107c61648();
      if ((lVar4 != 0) && (func_0x000107c61574(), lVar4 == lVar3)) goto LAB_101e67b8c;
    }
    func_0x000107c61574(lVar3);
  }
  func_0x000107c614f0(lVar8);
  (**(code **)(lVar7 + 0x98))();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar3 = *(long *)(unaff_x20 + 0x68);
  func_0x0001000a8868(unaff_x20 + 0x48,uVar5);
  (**(code **)(lVar3 + 0x10))(lVar8,lVar7,uVar5,lVar3);
  func_0x000107c615e8(lVar8);
LAB_101e67c14:
  func_0x000107c61428(unaff_x20 + 200,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  *(undefined1 *)(unaff_x20 + 0x12a) = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  func_0x000107c615e8(uVar5);
  FUN_101e622f8();
  lVar8 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar8);
  FUN_101e68510();
  return;
}



/* Entry: 101e67c84; end: 101e67caf;  */

undefined8 FUN_101e67c84(undefined8 param_1)

{
  func_0x000101e669cc(param_1,&UNK_11048efc8);
  return param_1;
}



/* Entry: 101e67cb0; end: 101e67cef;  */

void FUN_101e67cb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65620;
  func_0x000107c61520(&UNK_10dc65620,&UNK_1106e8b38);
  puRam0000000112e33568 = puVar1;
  return;
}



/* Entry: 101e67cf0; end: 101e67cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67cf0(ulong *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined2 uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong *puVar17;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  bVar7 = (byte)param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b8,0,0);
  lVar10 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    if (bVar7 < 2) {
      if (bVar7 == 0) {
        FUN_101e64344(uVar2,uVar3);
      }
      else {
        func_0x0001000a8868(lVar10 + 0x10,*(undefined8 *)(lVar10 + 0x28));
        uVar15 = 0;
        FUN_101e4c630(0);
        FUN_101e4c5d0(uVar2,0,0,3,uVar15,&PTR_DAT_11048e450);
      }
    }
    else {
      if (bVar7 == 2) {
        puVar11 = (ulong *)(lVar10 + 0x170);
        func_0x000107c61618();
        if (puVar11 != (ulong *)0x0) {
          puVar12 = puVar11;
          FUN_101e67d60();
          puVar14 = &UNK_1106e89a8;
          puVar13 = puVar14;
          puVar17 = puVar12;
          func_0x000107c613f8(&UNK_1106e89a8,puVar12,0,0);
          *puVar17 = uVar2;
          func_0x000107c613f8(&UNK_1106e89a8,puVar12,0,0);
          *puVar12 = (ulong)puVar13;
          FUN_101e67da0(uVar2,uVar3,2);
          func_0x000107c614b0(puVar13);
          FUN_101e515e8(puVar14);
          func_0x000107c614ac(puVar13);
          func_0x000107c614ac(puVar14);
          *(undefined1 *)((long)puVar11 + _DAT_112e32d10) = 0;
          func_0x000107c615e8(puVar11);
        }
        uVar15 = *(undefined8 *)(lVar10 + 0x150);
        uVar4 = *(undefined8 *)(lVar10 + 0x158);
        lVar16 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        *(undefined8 *)(lVar16 + 0x18) = 2;
        *(undefined8 *)(lVar16 + 0x10) = 1;
        *(undefined8 *)(lVar16 + 0x20) = 0x6567617373656d;
        *(undefined8 *)(lVar16 + 0x28) = 0xe700000000000000;
        lVar18 = lVar16;
        uStack_a0 = uVar2;
        FUN_101e67d60();
        func_0x000107c61434(uVar4);
        puVar14 = &UNK_1106e89a8;
        func_0x000107c60640();
        *(undefined **)(lVar16 + 0x48) = PTR___sSSN_11034da80;
        *(undefined **)(lVar16 + 0x30) = puVar14;
        *(long *)(lVar16 + 0x38) = lVar18;
        lVar18 = lVar16;
        func_0x000100214a84(lVar16);
        func_0x000107c61588(lVar16);
        func_0x000101e67a98((undefined8 *)(lVar16 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        FUN_101e61b84(uVar15,uVar4,0x726f727265,0xe500000000000000,lVar18);
        func_0x000107c6142c();
        func_0x000107c61574(lVar10);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(lVar18);
        return;
      }
      uVar9 = uVar3 + (uVar2 >= 2);
      if ((long)-uVar9 < 0 == SCARRY8(~uVar9,(ulong)(uVar2 < 2))) {
        if (uVar2 == 0 && uVar3 == 0) {
          FUN_101e630dc();
        }
        else {
          FUN_101e631dc();
        }
      }
      else if (uVar2 == 2 && uVar3 == 0) {
        FUN_101e63358();
      }
      else if (uVar2 == 3 && uVar3 == 0) {
        lVar16 = lVar10 + 0x170;
        func_0x000107c61618();
        if (lVar16 != 0) {
          puVar1 = (undefined8 *)(lVar16 + _DAT_112e32cd0);
          lVar18 = puVar1[1];
          if (lVar18 != 0) {
            uVar15 = puVar1[4];
            uVar5 = puVar1[5];
            uVar4 = puVar1[2];
            uVar6 = puVar1[3];
            uVar19 = *puVar1;
            uVar8 = *(undefined2 *)(puVar1 + 6);
            bStack_70 = (byte)uVar8 & 1;
            bStack_6f = (byte)((ushort)uVar8 >> 8) & 1;
            uStack_140 = uVar19;
            lStack_138 = lVar18;
            uStack_130 = uVar4;
            uStack_128 = uVar6;
            uStack_120 = uVar15;
            uStack_118 = uVar5;
            uStack_110 = uVar8;
            uStack_a0 = uVar19;
            lStack_98 = lVar18;
            uStack_90 = uVar4;
            uStack_88 = uVar6;
            uStack_80 = uVar15;
            uStack_78 = uVar5;
            FUN_101e3a290(&uStack_140,auStack_178);
            func_0x000103b24fe4();
            FUN_101ad91a0(uVar19,lVar18,uVar4,uVar6,uVar15,uVar5,uVar8);
            lVar18 = lVar16 + _DAT_112e32cf8;
            func_0x000107c61428(lVar18,auStack_190,0,0);
            if (*(long *)(lVar18 + 0x18) != 0) {
              FUN_101e67dd0(lVar18,auStack_178);
              func_0x0001000a8868(auStack_178,uStack_160);
              (**(code **)(lStack_158 + 0x30))(uStack_160,lStack_158);
              func_0x000107c61574(lVar10);
              func_0x000107c615e8(lVar16);
              func_0x000101e67d40(auStack_178);
              return;
            }
          }
          func_0x000107c61574(lVar10);
          func_0x000107c615e8(lVar16);
          return;
        }
      }
      else {
        FUN_101e634ac();
      }
    }
    func_0x000107c61574(lVar10);
  }
  return;
}



/* Entry: 101e67cf8; end: 101e67d37;  */

void FUN_101e67cf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55f50;
  func_0x000107c61520(&UNK_10dc55f50,&UNK_1106d4d90);
  puRam0000000112e33570 = puVar1;
  return;
}



/* Entry: 101e67d38; end: 101e67d5f;  */

void FUN_101e67d38(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [6];
  
  lVar4 = 0;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)&uStack_70 + lVar4);
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  *puVar6 = *(undefined8 *)(param_1 + 8);
  auStack_68[lVar4] = uVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((long)auStack_60 + lVar4 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)auStack_60 + lVar4) = uVar7;
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x10) = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x20) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x18) = uVar7;
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x28) = uVar5;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = uVar1;
  (&stack0xffffffffffffffd8)[lVar4] = uVar3;
  func_0x000107c6159c(puVar6);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60 + 3,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    func_0x000107c61434(uVar5);
    FUN_101e67e1c(puVar6,&SUB_103b31818);
  }
  else {
    FUN_101e67dd0(lVar4 + 0x10,&uStack_70);
    func_0x000107c61434(uVar5);
    func_0x000107c61574(lVar4);
    func_0x0001000a8868(&uStack_70,auStack_60[1]);
    uVar5 = 0;
    FUN_101e4c630(0);
    (*(code *)(undefined *)0x101e4c60c)(puVar6,uVar5,&PTR_DAT_11048e450);
    FUN_101e67e1c(puVar6,&SUB_103b31818);
    func_0x000101e67d40(&uStack_70);
  }
  return;
}



/* Entry: 101e67d60; end: 101e67d9f;  */

void FUN_101e67d60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65488;
  func_0x000107c61520(&UNK_10dc65488,&UNK_1106e89a8);
  puRam0000000112e33578 = puVar1;
  return;
}



/* Entry: 101e67da0; end: 101e67dcf;  */

void FUN_101e67da0(ulong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 != '\x02') {
    return;
  }
  uVar1 = (uint)(param_1 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)(param_1);
  return;
}



/* Entry: 101e67dd0; end: 101e67e13;  */

long FUN_101e67dd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101e67e14; end: 101e67e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67e14(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 200,auStack_70,1,0);
    if ((*(byte *)(lVar3 + 0x138) & 1) == 0) {
      if (param_1 != '\0') {
        if (param_1 == '\x01') {
          uVar1 = *(undefined8 *)(lVar3 + 0x150);
          uVar2 = *(undefined8 *)(lVar3 + 0x158);
          lVar4 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          *(undefined8 *)(lVar4 + 0x18) = 2;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          *(undefined8 *)(lVar4 + 0x20) = 0x6567617373656d;
          *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
          *(undefined8 *)(lVar4 + 0x28) = 0xe700000000000000;
          *(undefined8 *)(lVar4 + 0x30) = 0x6961665f6b656573;
          *(undefined8 *)(lVar4 + 0x38) = 0xec0000006572756c;
          func_0x000107c61434(uVar2);
          lVar5 = lVar4;
          func_0x000100214a84(lVar4);
          func_0x000107c61588(lVar4);
          func_0x000101e67a98((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
          FUN_101e61b84(uVar1,uVar2,0x726f727265,0xe500000000000000,lVar5);
          func_0x000107c6142c();
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(lVar5);
          puVar6 = (undefined8 *)(lVar3 + 0x170);
          func_0x000107c61618();
          if (puVar6 != (undefined8 *)0x0) {
            puVar7 = puVar6;
            FUN_101e67d60();
            puVar8 = &UNK_1106e89a8;
            func_0x000107c613f8(&UNK_1106e89a8,puVar7,0,0);
            *puVar7 = 0x8000000000000000;
            FUN_101e515e8();
            func_0x000107c614ac(puVar8);
            *(undefined1 *)((long)puVar6 + _DAT_112e32d10) = 0;
            func_0x000107c615e8(puVar6);
          }
        }
        else if ((*(long *)(lVar3 + 0xa0) == 0) || ((*(byte *)(lVar3 + 0xa8) & 1) == 0)) {
          FUN_101e638e8(0xd000000000000016,0x800000010f015640);
        }
      }
      *(undefined1 *)(lVar3 + 299) = 0;
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 101e67e1c; end: 101e67e8b;  */

undefined8 FUN_101e67e1c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101e67e8c; end: 101e67f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67e8c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_58,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = 0;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 0x90);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
  }
  FUN_101e638e8(0xd000000000000023,0x800000010f0156d0);
  return;
}



/* Entry: 101e67f48; end: 101e67f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e67f48(uint param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = uVar13;
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if ((param_1 & 1) != 0) {
      uVar3 = 1;
      func_0x000107c61428(lVar4 + 200,auStack_90,1,0);
      *(undefined8 *)(lVar4 + 0x130) = uVar13;
      lVar7 = *(long *)(lVar4 + 0x168);
      if (lVar7 != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0xb8) + _DAT_112e33588);
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          lVar6 = *(long *)PTR__kCMTimeZero_110348670;
          uVar9 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
          uVar10 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
          uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          func_0x000107c6157c(lVar7);
        }
        else {
          lVar8 = plVar1[1];
          lVar6 = lVar5;
          func_0x000107c614f0();
          uVar9 = *(ulong *)(lVar8 + 0x20);
          pcVar11 = *(code **)(uVar9 + 0x10);
          lStack_a8 = lVar5;
          func_0x000107c6157c(lVar7);
          (*pcVar11)();
          uVar10 = (undefined4)(uVar9 >> 0x20);
        }
        uStack_a0 = (undefined4)uVar9;
        lStack_a8 = lVar6;
        uStack_9c = uVar10;
        uStack_98 = uVar3;
        func_0x000107c60a3c(&lStack_a8);
        FUN_101e5b1b8(uVar14,uVar13,uVar12,0xf);
        func_0x000107c61574(lVar4);
        lVar4 = lVar7;
      }
      func_0x000107c61574(lVar4);
      if (pcVar2 == (code *)0x0) {
        return;
      }
      param_1 = 1;
      goto LAB_101e65a34;
    }
    func_0x000107c61574();
  }
  if (pcVar2 == (code *)0x0) {
    return;
  }
LAB_101e65a34:
  (*pcVar2)(param_1 & 1);
  return;
}



/* Entry: 101e67f74; end: 101e68043;  */

void FUN_101e67f74(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e68044; end: 101e68233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68044(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  char *pcVar10;
  undefined1 auStack_70 [7];
  char cStack_69;
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long *plVar5;
  
  lVar1 = 0;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar5 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lStack_68 = *plVar5;
  if (lStack_68 == 0) {
    lVar6 = *(long *)PTR__kCMTimeZero_110348670;
    uVar4 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_5c = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    param_4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar9 = plVar5[1];
    lVar6 = lStack_68;
    func_0x000107c614f0();
    uVar4 = *(ulong *)(lVar9 + 0x20);
    (**(code **)(uVar4 + 0x10))();
    uStack_5c = (undefined4)(uVar4 >> 0x20);
  }
  uStack_60 = (undefined4)uVar4;
  lStack_68 = lVar6;
  uStack_58 = param_4;
  func_0x000107c60a3c(&lStack_68);
  cStack_69 = '\0';
  plVar5 = &lStack_68;
  if ((param_2 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 200,plVar5,0,0);
    uVar3 = (uint)plVar5;
    if (*(long *)(unaff_x20 + 0xf8) == 0) {
      return;
    }
    pcVar10 = &cStack_69;
    func_0x000101e60978(param_1,pcVar10);
    if (cStack_69 == '\x01') {
      func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
      uVar2 = 8;
LAB_101e681bc:
      func_0x000107c6159c(puVar8,lVar1,uVar2);
      uVar2 = 0;
      FUN_101e4c630(0);
      (*(code *)(undefined *)0x101e4c60c)(puVar8,uVar2,&PTR_DAT_11048e450);
      FUN_101e67e1c(puVar8,&SUB_103b31818);
      return;
    }
    if ((uVar3 & 0xff) == 1) {
      return;
    }
    uVar2 = 2;
  }
  else {
    func_0x000107c61428(unaff_x20 + 200,plVar5,0,0);
    if (*(long *)(unaff_x20 + 0xf8) == 0) {
      return;
    }
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0xf8) + 0x10);
    lVar6 = *(long *)(lVar9 + 0x10);
    uVar2 = 1;
    puVar7 = (undefined8 *)(lVar9 + 0x20);
    do {
      if (lVar6 == 0) {
        func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
        uVar2 = 7;
        goto LAB_101e681bc;
      }
      pcVar10 = (char *)*puVar7;
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while ((double)pcVar10 <= param_1);
  }
  FUN_101e66d74(pcVar10,param_1,uVar2);
  return;
}



/* Entry: 101e68234; end: 101e6829f;  */

void FUN_101e68234(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 101e682a0; end: 101e68313;  */

undefined1 * FUN_101e682a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101e68314; end: 101e68367;  */

undefined1 * FUN_101e68314(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101e68368; end: 101e6850f;  */

int FUN_101e68368(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e68510; end: 101e685c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68510(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e33590;
  if (*(long *)(unaff_x20 + _DAT_112e33590) != 0) {
    func_0x000107c4ff34();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112e33588);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112e33588))[1];
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 0x30) + 8))();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar1 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c61170(uVar4);
  if (lVar2 != 0) {
    func_0x000107c3d89c();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c56a14();
  return;
}



/* Entry: 101e685c4; end: 101e6862b; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e685c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e33588);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112e33590) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(0,0,0,0,&lStack_30,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 101e6862c; end: 101e6869f; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6862c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e33588);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112e33590) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SingleSnapPlayerImplementation/SingleSnapPlayerVideoContentView.swift",0x45,2
                      ,0x1c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e686a0);
  (*pcVar2)();
}



/* Entry: 101e686a0; end: 101e68723; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e686a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112e33590);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e68724; end: 101e68897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68724(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar2 = _DAT_112e33590;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e33590);
  lVar3 = lVar5;
  if (lVar5 == 0) {
    lVar3 = unaff_x20;
    func_0x000107c61174();
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112e33588);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    func_0x000107c61174(lVar5);
    lStack_78 = *plVar1;
  }
  else {
    lVar7 = plVar1[1];
    lVar8 = lVar6;
    func_0x000107c614f0();
    pcVar9 = *(code **)(lVar7 + 0x60);
    func_0x000107c61174(lVar5);
    func_0x000107c615f0(lVar6);
    (*pcVar9)(lVar8,lVar7);
    func_0x000107c615e8(lVar6);
    if (lVar8 == 0) {
      lVar6 = 0;
      lStack_78 = *plVar1;
    }
    else {
      lVar6 = lVar8;
      func_0x000107c4d444(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      lStack_78 = *plVar1;
    }
  }
  if (lStack_78 == 0) {
    lVar5 = *(long *)PTR__kCMTimeZero_110348670;
    uVar4 = (ulong)*(uint *)((long)PTR__kCMTimeZero_110348670 + 8);
    uStack_6c = *(undefined4 *)((long)PTR__kCMTimeZero_110348670 + 0xc);
    param_3 = *(long *)((long)PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar8 = plVar1[1];
    lVar5 = lStack_78;
    func_0x000107c614f0();
    uVar4 = *(ulong *)(lVar8 + 0x20);
    (**(code **)(uVar4 + 0x10))();
    uStack_6c = (undefined4)(uVar4 >> 0x20);
  }
  uStack_70 = (undefined4)uVar4;
  lStack_78 = lVar5;
  lStack_68 = param_3;
  func_0x000109111384(lVar6,&lStack_78,*(undefined8 *)(unaff_x20 + lVar2),lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 101e68898; end: 101e688bf; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView prepareForScreenshotCapture] */

void FUN_101e68898(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e68724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e688c0; end: 101e6892f; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView restoreAfterScreenshotCapture] */

/* WARNING: Possible PIC construction at 0x000101e68918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6891c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e688c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e33590);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c61174();
    lVar2 = 0;
  }
  func_0x000107c61174(param_1);
  func_0x000107c61174(lVar2);
  func_0x00010911150c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e68930; end: 101e68963;  */

void FUN_101e68930(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e68964; end: 101e6899b; -[_TtC30SingleSnapPlayerImplementation32SingleSnapPlayerVideoContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68964(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e33588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e33590));
  return;
}



/* Entry: 101e6899c; end: 101e689bb;  */

void FUN_101e6899c(void)

{
  func_0x000107c61168(&PTR_PTR_112806670);
  return;
}



/* Entry: 101e689bc; end: 101e68c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e689bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112e335d0;
  if (*(long *)(unaff_x20 + _DAT_112e335d0) != 0) {
    func_0x000107c4ff34();
  }
  lVar1 = _DAT_112e335e0;
  if (*(long *)(unaff_x20 + _DAT_112e335e0) != 0) {
    func_0x000107c4ff34();
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      lVar1 = *(long *)(unaff_x20 + lVar1) + _DAT_112e32be0;
      func_0x000107c61428(lVar1,auStack_48,1,0);
      *(undefined8 *)(lVar1 + 8) = 0;
      func_0x000107c61604(lVar1,0);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_1);
  func_0x000107c3d89c();
  if (*(long *)(unaff_x20 + _DAT_112e335d8) != 0) {
    func_0x000107c51e70();
  }
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c51e70();
  }
  if (*(long *)(unaff_x20 + _DAT_112e335c8) != 0) {
    func_0x000107c51e70();
  }
  func_0x000107c56a14();
  return;
}



/* Entry: 101e68c58; end: 101e68d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68c58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*(long *)(unaff_x20 + _DAT_112e335d8) != 0) {
    func_0x000107c4ff34();
  }
  if (*(long *)(unaff_x20 + _DAT_112e335d0) != 0) {
    func_0x000107c4ff34();
  }
  if (*(long *)(unaff_x20 + _DAT_112e335c8) != 0) {
    func_0x000107c4ff34();
  }
  lVar1 = _DAT_112e335e0;
  if (*(long *)(unaff_x20 + _DAT_112e335e0) != 0) {
    func_0x000107c4ff34();
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      lVar1 = *(long *)(unaff_x20 + lVar1) + _DAT_112e32be0;
      func_0x000107c61428(lVar1,auStack_38,1,0);
      *(undefined8 *)(lVar1 + 8) = 0;
      func_0x000107c61604(lVar1,0);
    }
  }
  return;
}



/* Entry: 101e68d04; end: 101e68d37; -[_TtC30SingleSnapPlayerImplementation20SingleSnapPlayerView initWithCoder:] */

undefined8 FUN_101e68d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000101e69484();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 101e68d38; end: 101e68dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e68d38(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e335c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000017,0x800000010f0157b0,
                      "SingleSnapPlayerImplementation/SingleSnapPlayerView.swift",0x39,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e68dd8);
  (*pcVar1)();
}



/* Entry: 101e68dd8; end: 101e68deb; -[_TtC30SingleSnapPlayerImplementation20SingleSnapPlayerView init] */

void FUN_101e68dd8(void)

{
  FUN_101e68d38();
  func_0x000101e69524();
  return;
}



/* Entry: 101e68dec; end: 101e68e0b; -[_TtC30SingleSnapPlayerImplementation20SingleSnapPlayerView initWithFrame:] */

void FUN_101e68dec(void)

{
  func_0x000101e69524();
  return;
}



/* Entry: 101e68e0c; end: 101e690d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101e68e0c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  code *pcVar11;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  FUN_101ad90b8(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112e335c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e335f0) = 0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5e2ac();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000103b7c01c(0);
  func_0x000107c610f8();
  func_0x000103b7c018(puVar2,0x65,uVar3);
  *(undefined **)(unaff_x20 + _DAT_112e335c0) = puVar2;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112e335c0;
  uVar3 = *(undefined8 *)(puVar4 + _DAT_112e335c0);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c5a050(uVar3);
  puVar6 = *(ulong **)(puVar4 + lVar1);
  pcVar11 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xa0);
  func_0x000107c61174();
  (*pcVar11)(1);
  func_0x000107c61170(puVar6);
  func_0x000107c3d89c(puVar5);
  func_0x000107c3ec8c(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 5;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar9 = puVar5;
  func_0x000107c3f75c(puVar5);
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *(undefined8 *)(puVar7 + 0x20) = uVar3;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar9 = puVar5;
  func_0x000107c3f764(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar3 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  uVar3 = 0;
  func_0x000100847984(0);
  puVar10 = puVar7;
  func_0x000107c5fc48(puVar7,uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170();
  func_0x000109128f44();
  if ((int)puVar10 != 0) {
    FUN_101e690d4();
    uVar3 = *(undefined8 *)(puVar5 + _DAT_112e335e8);
    *(undefined **)(puVar5 + _DAT_112e335e8) = puVar10;
    func_0x000107c61170(uVar3);
  }
  return puVar5;
}



/* Entry: 101e690d4; end: 101e69283;  */

undefined * FUN_101e690d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126c51b8;
  func_0x000107c61168();
  func_0x000107c4d614();
  func_0x000107c59c6c();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c5b09c(puVar1);
  func_0x000107c3d89c();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar6 = unaff_x20;
  func_0x000107c50890();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40284(0xc059000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(unaff_x20);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  uVar6 = 0;
  func_0x000100847984(0);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101e69284; end: 101e6937f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e69284(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(unaff_x20 + _DAT_112e335d0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c54b80(lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e335d8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c54b80(lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e335c8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c54b80(lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e335e0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c54b80(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101e69380; end: 101e693a7; -[_TtC30SingleSnapPlayerImplementation20SingleSnapPlayerView layoutSubviews] */

void FUN_101e69380(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e69284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e693a8; end: 101e693db;  */

void FUN_101e693a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e693dc; end: 101e69463; -[_TtC30SingleSnapPlayerImplementation20SingleSnapPlayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e693f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e69418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e69438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6941c) */
/* WARNING: Removing unreachable block (ram,0x000101e693fc) */
/* WARNING: Removing unreachable block (ram,0x000101e6943c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e693dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e335c0));
  return;
}



/* Entry: 101e69464; end: 101e695c3;  */

void FUN_101e69464(void)

{
  func_0x000107c61168(&PTR_PTR_112806730);
  return;
}



/* Entry: 101e695c4; end: 101e6964f;  */

long FUN_101e695c4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009966d4(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001009966f4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000100996700();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101e69650; end: 101e69673;  */

void FUN_101e69650(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e69674; end: 101e696a7;  */

undefined1  [16] FUN_101e69674(void)

{
  return ZEXT816(0x11048f4a8);
}



/* Entry: 101e696a8; end: 101e696d3;  */

undefined8 FUN_101e696a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101e696d4; end: 101e6981f;  */

long FUN_101e696d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000100bf2300(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100bf23b4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100bf2464();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101e69820; end: 101e6986b;  */

void FUN_101e69820(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e6986c; end: 101e698af;  */

undefined1  [16] FUN_101e6986c(void)

{
  return ZEXT816(0x11048f600);
}



/* Entry: 101e698b0; end: 101e69903;  */

void FUN_101e698b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e69904; end: 101e69a27;  */

long FUN_101e69904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x00010043583c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100435cd4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100435d38();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101e69a28; end: 101e69a6b;  */

void FUN_101e69a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e69a6c; end: 101e69aaf;  */

undefined1  [16] FUN_101e69a6c(void)

{
  return ZEXT816(0x11048f6c8);
}



/* Entry: 101e69ab0; end: 101e69b03;  */

void FUN_101e69ab0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e69b04; end: 101e69f6f;  */

long FUN_101e69b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a9678;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0157f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_7);
    *(undefined **)(unaff_x20 + 0x50) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e69f70);
  (*pcVar1)();
}



/* Entry: 101e69f70; end: 101e69feb;  */

void FUN_101e69f70(void)

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



/* Entry: 101e69fec; end: 101e6a03b;  */

undefined8 FUN_101e69fec(void)

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



/* Entry: 101e6a03c; end: 101e6a07f;  */

undefined1  [16] FUN_101e6a03c(void)

{
  return ZEXT816(0x11048f790);
}



/* Entry: 101e6a080; end: 101e6a0a7;  */

void FUN_101e6a080(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e6a0a8; end: 101e6a0af;  */

undefined8 FUN_101e6a0a8(void)

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



/* Entry: 101e6a0b0; end: 101e6a40f;  */

long FUN_101e6a0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a9680;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015810);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f015830);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6a410);
  (*pcVar1)();
}



/* Entry: 101e6a410; end: 101e6a47b;  */

void FUN_101e6a410(void)

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



/* Entry: 101e6a47c; end: 101e6a4cb;  */

undefined8 FUN_101e6a47c(void)

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



/* Entry: 101e6a4cc; end: 101e6a50f;  */

undefined1  [16] FUN_101e6a4cc(void)

{
  return ZEXT816(0x11048f858);
}



/* Entry: 101e6a510; end: 101e6a537;  */

void FUN_101e6a510(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e6a538; end: 101e6a53f;  */

undefined8 FUN_101e6a538(void)

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



/* Entry: 101e6a540; end: 101e6ab6f;  */

void FUN_101e6a540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  func_0x0001000285a8(0x112e33b10,&UNK_10da1ceb8);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010025a71c();
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a9688;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015860);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015880);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0158a0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0158d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(puVar4);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61574(param_10);
    *(undefined **)(unaff_x20 + 0x68) = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6ab70);
  (*pcVar1)();
}



/* Entry: 101e6ab70; end: 101e6ac03;  */

void FUN_101e6ab70(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101e6ac04; end: 101e6ac53;  */

undefined8 FUN_101e6ac04(void)

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



/* Entry: 101e6ac54; end: 101e6ac97;  */

undefined1  [16] FUN_101e6ac54(void)

{
  return ZEXT816(0x11048f920);
}



/* Entry: 101e6ac98; end: 101e6acbf;  */

void FUN_101e6ac98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e6acc0; end: 101e6acc7;  */

undefined8 FUN_101e6acc0(void)

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



/* Entry: 101e6acc8; end: 101e6ae1f;  */

long FUN_101e6acc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000100996b98(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x000100996bb8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    *(undefined **)(unaff_x20 + 0x38) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e6ae20);
  (*pcVar1)();
}



/* Entry: 101e6ae20; end: 101e6ae6b;  */

void FUN_101e6ae20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e6ae6c; end: 101e6aeaf;  */

undefined1  [16] FUN_101e6ae6c(void)

{
  return ZEXT816(0x11048f9e8);
}



/* Entry: 101e6aeb0; end: 101e6aedb;  */

undefined8 FUN_101e6aeb0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}


