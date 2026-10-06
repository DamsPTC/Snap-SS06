/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026f8f4c; end: 1026f8f87;  */

void FUN_1026f8f4c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026f8f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026f8f88; end: 1026f9097;  */

void FUN_1026f8f88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb91f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb91f0;
  func_0x00010002969c(0x112eb91f0,&UNK_10dad0720);
  uVar2 = uVar1;
  func_0x0001026f9020();
  uVar3 = 0x112eb9210;
  FUN_1026fa158(0x112eb9210,0x112eb9218,&UNK_10dad0738,
                PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1103487e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb91f8 = puVar4;
  return;
}



/* Entry: 1026f9098; end: 1026f90d7;  */

void FUN_1026f9098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad07d8;
  func_0x000107c61520(&UNK_10dad07d8,&UNK_11053d4b8);
  puRam0000000112eb9228 = puVar1;
  return;
}



/* Entry: 1026f90d8; end: 1026f90e7;  */

void FUN_1026f90d8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  code *pcVar2;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),pcVar2,*(undefined8 *)(unaff_x20 + 0x38),lVar1,
             *(undefined8 *)(unaff_x20 + 0x18));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  (*pcVar2)(puVar3);
  pcVar2 = *(code **)(lVar5 + 0x10);
  (*pcVar2)(lVar4,puVar3,lVar1);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar3,lVar1);
  (*pcVar2)(param_1,lVar4,lVar1);
  (*pcVar6)(lVar4,lVar1);
  return;
}



/* Entry: 1026f90e8; end: 1026f9127;  */

void FUN_1026f90e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9230 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI9RectangleVAA5ShapeAAMc_110349a60;
  func_0x000107c61520(PTR___s7SwiftUI9RectangleVAA5ShapeAAMc_110349a60,
                      PTR___s7SwiftUI9RectangleVN_110349a70);
  puRam0000000112eb9230 = puVar1;
  return;
}



/* Entry: 1026f9128; end: 1026f91af;  */

undefined8 FUN_1026f9128(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001026f77a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1026f91b0; end: 1026f91db;  */

void FUN_1026f91b0(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  
  lVar4 = 0;
  func_0x0001026f77a8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  bVar1 = *(char *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + 8) != '\x01';
  if (bVar1) {
    func_0x000107c5eea0(lVar4);
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,!bVar1,1);
  func_0x0001026f77a8();
  func_0x0001026f9b24(lVar4,puVar6,0x112d373d8,&UNK_10d9014c0);
  uVar3 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  func_0x000107c5f730(puVar6,uVar3);
  func_0x0001026f9b6c(lVar4,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1026f91dc; end: 1026f92cf;  */

void FUN_1026f91dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar3 = 0;
  func_0x0001026f77a8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  func_0x000107c61574(*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c61574(*(undefined8 *)(lVar1 + 0x28));
  lVar2 = lVar1 + *(int *)(lVar3 + 0x20);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = lVar2;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 8))(lVar2,lVar4);
  }
  lVar5 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  func_0x000107c61574(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x1c)));
  func_0x000107c61574(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  func_0x000107c61574(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x28)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026f92d0; end: 1026f937f;  */

void FUN_1026f92d0(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  undefined1 *puVar6;
  
  lVar4 = 0;
  func_0x0001026f77a8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff),0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    func_0x000107c5eea0(lVar4);
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,cVar1 == '\x01',1);
  func_0x0001026f77a8();
  func_0x0001026f9b24(lVar4,puVar6,0x112d373d8,&UNK_10d9014c0);
  uVar3 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  func_0x000107c5f730(puVar6,uVar3);
  func_0x0001026f9b6c(lVar4,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1026f9380; end: 1026f94c7;  */

undefined8 * FUN_1026f9380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar1;
  param_1[2] = uVar3;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  uVar3 = param_2[10];
  uVar1 = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xc] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1026f94c8; end: 1026f9563;  */

undefined8 * FUN_1026f94c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f9564; end: 1026f9643;  */

int FUN_1026f9564(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026f9644; end: 1026f968f;  */

undefined8 * FUN_1026f9644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1026f9690; end: 1026f96cb;  */

undefined8 * FUN_1026f9690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1026f96cc; end: 1026f9797;  */

int FUN_1026f96cc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026f9798; end: 1026f98e7;  */

void FUN_1026f9798(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112eb9270 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb91b0;
  func_0x00010002969c(0x112eb91b0,&UNK_10dad0690);
  uVar2 = 0x112eb9278;
  FUN_1026fa158(0x112eb9278,0x112eb9280,&UNK_10dad07c0,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910);
  puStack_28 = PTR___s7SwiftUI25_AllowsHitTestingModifierVAA04ViewF0AAWP_110349148;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb9270 = puVar3;
  return;
}



/* Entry: 1026f98e8; end: 1026f991f;  */

void FUN_1026f98e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6ef130,1);
  return;
}



/* Entry: 1026f9920; end: 1026f9953;  */

undefined8 FUN_1026f9920(undefined8 param_1,undefined8 param_2)

{
  FUN_1026f9380(param_2,param_1,&UNK_11053d400);
  return param_2;
}



/* Entry: 1026f9954; end: 1026f998f;  */

void FUN_1026f9954(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026f9990; end: 1026f99e3;  */

void FUN_1026f9990(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1026fa528;
  plVar4[7] = unaff_x20 + 0x10;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0xb] = lVar3;
  lVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0xf] = lVar2;
  plVar4[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f5c80,lVar2,lVar3);
  return;
}



/* Entry: 1026f99e4; end: 1026f9a2f;  */

void FUN_1026f99e4(void)

{
  long unaff_x20;
  
  FUN_1026f61b0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1026f9a30; end: 1026f9bab;  */

void FUN_1026f9a30(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x60);
  uStack_30 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58);
  uVar1 = 0x112d50200;
  uStack_38 = param_1;
  func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 1026f9bac; end: 1026f9bbb;  */

undefined1  [16] FUN_1026f9bac(void)

{
  return ZEXT816(0x11053d528);
}



/* Entry: 1026f9bbc; end: 1026fa123;  */

void FUN_1026f9bbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112eb9348 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb92e8;
  func_0x00010002969c(0x112eb92e8,&UNK_10dad08d8);
  uVar2 = uVar1;
  func_0x0001026f9c34();
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb9348 = puVar3;
  return;
}



/* Entry: 1026fa124; end: 1026fa157;  */

void FUN_1026fa124(void)

{
  FUN_1026fa158(0x112eb93b0,0x112eb93b8,&UNK_10dad0950,
                PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718);
  return;
}



/* Entry: 1026fa158; end: 1026fa19b;  */

void FUN_1026fa158(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1026fa19c; end: 1026fa19f;  */

void FUN_1026fa19c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0;
  func_0x000107c61520(PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0,
                      PTR___s7SwiftUI19EmptyAnimatableDataVN_110348e00);
  puRam0000000112eb93c0 = puVar1;
  return;
}



/* Entry: 1026fa1a0; end: 1026fa1df;  */

void FUN_1026fa1a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0;
  func_0x000107c61520(PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0,
                      PTR___s7SwiftUI19EmptyAnimatableDataVN_110348e00);
  puRam0000000112eb93c0 = puVar1;
  return;
}



/* Entry: 1026fa1e0; end: 1026fa1e3;  */

void FUN_1026fa1e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad09a8;
  func_0x000107c61520(&UNK_10dad09a8,&UNK_11053d528);
  puRam0000000112eb93c8 = puVar1;
  return;
}



/* Entry: 1026fa1e4; end: 1026fa223;  */

void FUN_1026fa1e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad09a8;
  func_0x000107c61520(&UNK_10dad09a8,&UNK_11053d528);
  puRam0000000112eb93c8 = puVar1;
  return;
}



/* Entry: 1026fa224; end: 1026fa227;  */

void FUN_1026fa224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad0958;
  func_0x000107c61520(&UNK_10dad0958,&UNK_11053d528);
  puRam0000000112eb93d0 = puVar1;
  return;
}



/* Entry: 1026fa228; end: 1026fa267;  */

void FUN_1026fa228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad0958;
  func_0x000107c61520(&UNK_10dad0958,&UNK_11053d528);
  puRam0000000112eb93d0 = puVar1;
  return;
}



/* Entry: 1026fa268; end: 1026fa41f;  */

void FUN_1026fa268(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  dVar1 = param_2;
  func_0x000107c609bc();
  dVar2 = param_2;
  func_0x000107c609c0(param_2,param_3,param_4,param_5);
  dVar3 = param_2;
  func_0x000107c609cc(param_2,param_3,param_4,param_5);
  func_0x000107c609b0(param_2,param_3,param_4,param_5);
  if (dVar3 <= param_2) {
    param_2 = dVar3;
  }
  param_2 = param_2 * 0.5;
  dVar5 = param_2 * 0.42;
  func_0x000107c5f5c0(&uStack_90);
  dVar3 = dVar1 + param_2 * 6.123233995736766e-17;
  func_0x000107c5f5b8(dVar3,dVar2 - param_2);
  dVar4 = dVar1 + dVar5 * 0.7071067811865476;
  func_0x000107c5f5bc(dVar4);
  func_0x000107c5f5bc(dVar1 + param_2,dVar2 + param_2 * 0.0);
  func_0x000107c5f5bc(dVar4,dVar2 + dVar5 * 0.7071067811865475);
  func_0x000107c5f5bc(dVar3,dVar2 + param_2);
  func_0x000107c5f5bc(dVar1 + dVar5 * -0.7071067811865475,dVar2 + dVar5 * 0.7071067811865476);
  func_0x000107c5f5bc(dVar1 - param_2,dVar2 + param_2 * 1.2246467991473532e-16);
  func_0x000107c5f5bc(dVar1 + dVar5 * -0.7071067811865477,dVar2 + dVar5 * -0.7071067811865475);
  func_0x000107c5f5b4();
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  *(undefined1 *)(param_1 + 4) = uStack_70;
  return;
}



/* Entry: 1026fa420; end: 1026fa45f;  */

void FUN_1026fa420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad09f8;
  func_0x000107c61520(&UNK_10dad09f8,&UNK_11053d528);
  puRam0000000112eb93d8 = puVar1;
  return;
}



/* Entry: 1026fa460; end: 1026fa52f;  */

void FUN_1026fa460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1026fa530; end: 1026fa7a7;  */

void FUN_1026fa530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053d6a8;
  func_0x000107c613fc(&UNK_11053d6a8,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001002acf1c(FUN_1026fa7a8,puVar1);
  return;
}



/* Entry: 1026fa7a8; end: 1026fa7db;  */

void FUN_1026fa7a8(void)

{
  long unaff_x20;
  
  func_0x0001026fa64c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1026fa7dc; end: 1026fa873;  */

void FUN_1026fa7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_7;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_8;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_10;
  return;
}



/* Entry: 1026fa874; end: 1026faa6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fa874(int param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x000109021f80();
  if ((param_1 != 0) && (*(long *)(unaff_x20 + 0x60) == 0)) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar8 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c614f0(lVar2);
      lVar1 = lVar2;
      func_0x000107c503e4();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
      *(long *)(unaff_x20 + 0x68) = lVar1;
      func_0x000107c615e8(uVar3);
      lVar1 = lVar2;
      func_0x000107c4b93c();
      func_0x000107c61180();
      puVar4 = &UNK_11053d6d0;
      func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_11053d6f8;
      func_0x000107c613fc(&UNK_11053d6f8,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar2;
      *(undefined8 *)(puVar5 + 0x20) = uVar8;
      *(undefined8 *)(puVar5 + 0x28) = param_2;
      pcStack_60 = FUN_1026fd2f8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101114e8c;
      puStack_68 = &UNK_11053d710;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c615f0(lVar2);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar4);
      lVar7 = lVar1;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar1);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
      *(long *)(unaff_x20 + 0x60) = lVar7;
      func_0x000107c61170(uVar8);
      func_0x000107c615f0(lVar2);
      FUN_1026fdfb8();
      func_0x000107c6142c(param_2);
      func_0x000107c615ec(lVar2,2);
    }
  }
  return;
}



/* Entry: 1026faa6c; end: 1026fab97;  */

void FUN_1026faa6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_11053d6d0;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar2 = &UNK_11053da98;
  func_0x000107c613fc(&UNK_11053da98,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  puVar1 = &UNK_11053dac0;
  func_0x000107c613fc(&UNK_11053dac0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad0c20;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_5);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad0c30,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1026fab98; end: 1026fac2b;  */

void FUN_1026fab98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001026feb74(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026fac2c,uVar2,uVar3);
  return;
}



/* Entry: 1026fac2c; end: 1026facc3;  */

void FUN_1026fac2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x60) != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar3 = uVar5;
      func_0x000107c614f0(uVar5);
      FUN_1026fdfb8(uVar5,uVar1,uVar2,lVar4,uVar3);
    }
    func_0x000107c61574(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026facc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026facc4; end: 1026fad3b;  */

void FUN_1026facc4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026facfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026fad3c; end: 1026faddb;  */

void FUN_1026fad3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001026feb74(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026faddc,uVar2,uVar3);
  return;
}



/* Entry: 1026faddc; end: 1026faf63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026faddc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x80,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xf0) = lVar7;
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x22 + 0xd0);
  }
  else {
    lVar4 = *(long *)(lVar7 + 0x38);
    func_0x000107c4e7e4();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xf8) = lVar5;
    func_0x000107c61170();
    if (lVar5 != 0) {
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 0x100) = lVar4;
      if (lVar4 == 0) {
        lVar4 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
        func_0x000107c614f0();
        func_0x000107c5fca8();
      }
      *(long *)(unaff_x22 + 0x108) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x110) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1026faf64,lVar4);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
    lVar5 = *(long *)(*(long *)(lVar7 + 0x20) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c61174();
      FUN_1026fb2ac(uVar1,uVar3,uVar6,uVar2,uVar6,uVar2,0,0,lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar5);
    }
  }
  func_0x000107c61574(lVar7);
                    /* WARNING: Could not recover jumptable at 0x0001026faf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026faf64; end: 1026fb063;  */

void FUN_1026faf64(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1026fb064;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  func_0x000107c5fadc(uVar3,uVar1);
  puVar4 = &UNK_11053d7c8;
  func_0x000107c613fc(&UNK_11053d7c8,0x18,7);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar4 + 0x10) = lVar2;
  *(code **)(unaff_x22 + 0x70) = FUN_1026fe5d8;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x10266d444;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11053d7e0;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43130(uVar5);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1026fb064; end: 1026fb0d7;  */

void FUN_1026fb064(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1026fb0a0,*(undefined8 *)(*unaff_x22 + 0x108),*(undefined8 *)(*unaff_x22 + 0x110));
  return;
}



/* Entry: 1026fb0d8; end: 1026fb2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fb0d8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar8 = *(long *)(unaff_x22 + 0xf0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  uStack_70 = *(ulong *)(unaff_x22 + 0x98);
  lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c61574(uVar9);
    func_0x000107c61170(uStack_70);
  }
  else {
    if (uStack_70 == 0) {
      param_2 = *(ulong *)(unaff_x22 + 0xc0);
      func_0x000107c61434(param_2);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uVar7 = *(ulong *)(unaff_x22 + 0xb8);
    }
    else {
      uVar6 = uStack_70;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      uStack_60 = param_2;
      func_0x000107c61170(uVar6);
      uVar6 = uVar7 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar6 = param_2 >> 0x38 & 0xf;
      }
      if (uVar6 == 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
        func_0x000107c6142c(param_2);
        func_0x000107c61434(uVar9);
        uVar7 = *(ulong *)(unaff_x22 + 0xb8);
        param_2 = *(ulong *)(unaff_x22 + 0xc0);
      }
      uVar6 = uStack_70;
      func_0x000107c4f3ac();
      if ((uVar6 & 1) == 0) {
        uVar6 = uStack_70;
        func_0x000107c4f3a8();
        func_0x000107c61180();
        uStack_68 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
      }
      else {
        uStack_68 = 0;
        uStack_60 = 0;
      }
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c61174();
    FUN_1026fb2ac(uVar2,uVar5,uVar1,uVar4,uVar7,param_2,uStack_68,uStack_60,lVar8);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61574(uVar9);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026fb2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026fb2ac; end: 1026fc38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fb2ac(undefined8 ****param_1,undefined8 ****param_2,undefined8 param_3,
                  undefined8 param_4,undefined8 ****param_5,undefined8 param_6,undefined8 param_7,
                  undefined8 param_8,long param_9)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *****pppppuVar31;
  undefined8 *****pppppuVar32;
  undefined8 *****pppppuVar33;
  undefined8 *****pppppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 uVar36;
  undefined8 ****ppppuVar37;
  long unaff_x20;
  undefined8 ****ppppuVar38;
  undefined8 uVar39;
  undefined8 ****ppppuVar40;
  undefined8 ****ppppuVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  double dVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  double dVar48;
  undefined8 uVar49;
  undefined *puStack_318;
  ulong uStack_310;
  undefined8 ****ppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  ppppuVar17 = param_2;
  FUN_1026fc390(0);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  ppppuVar10 = *(undefined8 *****)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  ppppuVar41 = ppppuVar10;
  func_0x000107c5faec();
  func_0x000107c61170(ppppuVar10);
  func_0x000107c4e684();
  func_0x000107c61180();
  ppppuVar10 = (undefined8 ****)0x0;
  func_0x0001026fec64(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  ppppuVar11 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if ((ulong)ppppuVar11 >> 0x3e == 0) {
    ppppuVar40 = *(undefined8 *****)(((ulong)ppppuVar11 & 0xffffffffffffff8) + 0x10);
    ppppuVar38 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppppuVar40 = (undefined8 ****)((ulong)ppppuVar11 & 0xffffffffffffff8);
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar11) {
      ppppuVar40 = ppppuVar11;
    }
    func_0x000107c60480();
    ppppuVar38 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppppuVar38;
  if (ppppuVar40 != (undefined8 ****)0x0) {
    uStack_310 = (ulong)ppppuVar11 & 0xffffffffffffff8;
    ppppuVar15 = (undefined8 ****)0x0;
    do {
      while( true ) {
        if (((ulong)ppppuVar11 & 0xc000000000000001) == 0) {
          if (*(undefined8 *****)(uStack_310 + 0x10) <= ppppuVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fb528);
            (*pcVar8)();
          }
          ppppuVar12 = (undefined8 ****)ppppuVar11[(long)((long)ppppuVar15 + 4)];
          func_0x000107c61174();
          ppppuVar37 = ppppuVar10;
        }
        else {
          ppppuVar12 = ppppuVar15;
          ppppuVar37 = ppppuVar11;
          func_0x0001026fdbc0(ppppuVar15,ppppuVar11,&PTR_PTR_1126bf130,0x112d5ecd8);
        }
        ppppuVar1 = (undefined8 ****)((long)ppppuVar15 + 1);
        if (SCARRY8((long)ppppuVar15,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fb524);
          (*pcVar8)();
        }
        ppppuVar13 = ppppuVar12;
        func_0x000107c5d984();
        func_0x000107c61180();
        ppppuVar14 = ppppuVar13;
        func_0x000107c5faec();
        ppppuVar10 = ppppuVar37;
        func_0x000107c61170(ppppuVar13);
        if (ppppuVar14 != ppppuVar41 || ppppuVar37 != ppppuVar17) break;
        func_0x000107c61170(ppppuVar12);
        func_0x000107c6142c(ppppuVar37);
LAB_1026fb3d4:
        ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
        if (ppppuVar1 == ppppuVar40) goto LAB_1026fb54c;
      }
      ppppuVar10 = ppppuVar37;
      func_0x000107c605b8(ppppuVar14,ppppuVar37,ppppuVar41,ppppuVar17,0);
      func_0x000107c6142c(ppppuVar37);
      if (((ulong)ppppuVar14 & 1) != 0) {
        func_0x000107c61170(ppppuVar12);
        goto LAB_1026fb3d4;
      }
      ppppuVar15 = ppppuVar38;
      func_0x000107c61558();
      ppppuStack_2f0 = ppppuVar38;
      if (((ulong)ppppuVar15 & 1) == 0) {
        ppppuVar10 = (undefined8 ****)((long)ppppuVar38[2] + 1);
        func_0x000101162338(0,ppppuVar10,1);
      }
      pppuVar4 = ppppuStack_2f0[2];
      ppppuVar38 = (undefined8 ****)((long)pppuVar4 + 1);
      if ((undefined8 ***)((ulong)ppppuStack_2f0[3] >> 1) <= pppuVar4) {
        ppppuVar10 = ppppuVar38;
        func_0x000101162338((undefined8 ***)0x1 < ppppuStack_2f0[3],ppppuVar38,1);
      }
      ppppuStack_2f0[2] = ppppuVar38;
      ppppuStack_2f0[(long)pppuVar4 + 4] = ppppuVar12;
      ppppuVar38 = ppppuStack_2f0;
      ppppuVar15 = ppppuVar1;
    } while (ppppuVar1 != ppppuVar40);
  }
LAB_1026fb54c:
  func_0x000107c6142c(ppppuVar17);
  func_0x000107c6142c(ppppuVar11);
  if (((long)ppppuVar38 < 0) || (((ulong)ppppuVar38 >> 0x3e & 1) != 0)) {
    ppppuVar41 = ppppuVar38;
    func_0x000107c60480();
  }
  else {
    ppppuVar41 = (undefined8 ****)ppppuVar38[2];
  }
  puStack_318 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar41 != (undefined8 ****)0x0) {
    ppppuVar11 = (undefined8 ****)0x0;
LAB_1026fb5d4:
    do {
      if (((ulong)ppppuVar38 & 0xc000000000000001) == 0) {
        if (ppppuVar38[2] <= ppppuVar11) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fb7b4);
          (*pcVar8)();
        }
        ppppuVar17 = (undefined8 ****)ppppuVar38[(long)((long)ppppuVar11 + 4)];
        func_0x000107c61174();
      }
      else {
        ppppuVar17 = ppppuVar11;
        ppppuVar10 = ppppuVar38;
        func_0x0001026fdbc0(ppppuVar11,ppppuVar38,&PTR_PTR_1126bf130,0x112d5ecd8);
      }
      if (SCARRY8((long)ppppuVar11,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fb7b0);
        (*pcVar8)();
      }
      ppppuVar40 = (undefined8 ****)((long)ppppuVar11 + 1);
      if (lVar9 != 0) {
        ppppuVar15 = ppppuVar17;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (ppppuVar15 == (undefined8 ****)0x0) {
          func_0x000107c5faec();
          ppppuVar12 = ppppuVar10;
          func_0x000107c5fadc();
          func_0x000107c6142c(ppppuVar10);
          ppppuVar10 = ppppuVar12;
        }
        lVar16 = lVar9;
        func_0x000107c4c39c();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar15);
        if (lVar16 != 0) {
          uVar36 = *(undefined8 *)(lVar16 + _DAT_112fcd610);
          uVar29 = ((undefined8 *)(lVar16 + _DAT_112fcd610))[1];
          puVar2 = (undefined8 *)(lVar16 + _DAT_112fcd628);
          puVar3 = (undefined8 *)(lVar16 + _DAT_112fcd630);
          uVar49 = puVar2[1];
          uVar47 = *puVar2;
          uVar42 = puVar2[1];
          uVar46 = puVar3[1];
          uVar44 = *puVar3;
          func_0x000107c61434(puVar3[1]);
          func_0x000107c61434(uVar29);
          func_0x000107c61434(uVar42);
          ppppuVar11 = ppppuVar17;
          func_0x000107c5bd58();
          func_0x000107c61180();
          func_0x000107c61170(lVar16);
          func_0x000107c61170(ppppuVar17);
          if (ppppuVar11 == (undefined8 ****)0x0) {
            uVar42 = 0;
            uVar39 = 0;
          }
          else {
            uVar42 = *(undefined8 *)((long)ppppuVar11 + _DAT_113072870);
            uVar39 = ((undefined8 *)((long)ppppuVar11 + _DAT_113072870))[1];
            func_0x000107c61434(uVar39);
            func_0x000107c61170(ppppuVar11);
          }
          puVar18 = puStack_318;
          func_0x000107c61558();
          if (((ulong)puVar18 & 1) == 0) {
            ppppuVar10 = (undefined8 ****)(*(long *)(puStack_318 + 0x10) + 1);
            puStack_318 = (undefined *)0x0;
            func_0x0001026fdeb0(0,ppppuVar10,1);
          }
          uVar5 = *(ulong *)(puStack_318 + 0x10);
          ppppuVar11 = (undefined8 ****)(uVar5 + 1);
          if (*(ulong *)(puStack_318 + 0x18) >> 1 <= uVar5) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puStack_318 + 0x18));
            ppppuVar10 = ppppuVar11;
            func_0x0001026fdeb0(puVar18,ppppuVar11,1,puStack_318);
            puStack_318 = puVar18;
          }
          *(undefined8 *****)(puStack_318 + 0x10) = ppppuVar11;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x20) = uVar36;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x28) = uVar29;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x38) = uVar49;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x30) = uVar47;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x48) = uVar46;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x40) = uVar44;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x50) = uVar42;
          *(undefined8 *)(puStack_318 + uVar5 * 0x40 + 0x58) = uVar39;
          ppppuVar11 = ppppuVar40;
          if (ppppuVar40 == ppppuVar41) break;
          goto LAB_1026fb5d4;
        }
      }
      func_0x000107c61170();
      ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + 1);
    } while (ppppuVar40 != ppppuVar41);
  }
  func_0x000107c61574(ppppuVar38);
  func_0x000107c40534();
  if ((undefined *)((long)param_2 + -1) < (undefined *)0x3) {
    uStack_c0 = *(undefined8 *)(&UNK_10dad0c48 + ((long)param_2 + -1) * 8);
  }
  else {
    uStack_c0 = 0x8d939ff0;
  }
  uStack_b8 = 0xa400000000000000;
  puStack_a0 = puStack_318;
  uStack_98 = 0x40b3880000000000;
  pppuStack_d0 = param_5;
  uStack_c8 = param_6;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  uStack_90 = param_7;
  uStack_88 = param_8;
  func_0x000107c61434();
  func_0x000107c61434(param_4);
  func_0x000107c61434(puStack_318);
  func_0x000107c61434(param_6);
  lVar16 = param_9;
  func_0x000107c4d68c();
  func_0x000107c61180();
  puVar18 = PTR__OBJC_CLASS___UIViewController_1126af898;
  while (PTR__OBJC_CLASS___UIViewController_1126af898 = puVar18, lVar16 != 0) {
    func_0x000107c61168(puVar18);
    lVar43 = lVar16;
    func_0x000107c6148c(lVar16,puVar18);
    if ((lVar43 != 0) && (lVar19 = lVar43, func_0x000107c61494(), lVar19 != 0)) goto LAB_1026fb8e8;
    lVar43 = lVar16;
    func_0x000107c4d68c();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    lVar16 = lVar43;
    puVar18 = PTR__OBJC_CLASS___UIViewController_1126af898;
  }
  lVar43 = 0;
LAB_1026fb8e8:
  lVar20 = 0;
  func_0x0001026ecda8();
  lVar21 = lVar20;
  func_0x000107c613fc();
  lVar19 = _DAT_112eb8bf0;
  ppppuVar10 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100ff358c();
  uVar36 = 0x112eb8c38;
  ppppuStack_2f0 = ppppuVar10;
  func_0x0001000285a8(0x112eb8c38,&UNK_10dacfe08);
  func_0x000107c5f1fc(lVar21 + lVar19,&ppppuStack_2f0,uVar36);
  lVar22 = 0;
  func_0x0001026ecf28();
  lVar19 = lVar22;
  func_0x000107c613fc();
  ppppuStack_2f0 = (undefined8 ****)((ulong)ppppuStack_2f0 & 0xffffffffffffff00);
  func_0x000107c5f1fc(lVar19 + _DAT_112eb8cb8,&ppppuStack_2f0,PTR___sSbN_11034dd40);
  puVar18 = &UNK_11053d6d0;
  puVar23 = puVar18;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61644(puVar23 + 0x10,unaff_x20);
  puVar24 = puVar18;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61644(puVar24 + 0x10,unaff_x20);
  puVar25 = puVar18;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61644(puVar25 + 0x10,unaff_x20);
  puVar26 = &UNK_11053d818;
  func_0x000107c613fc(&UNK_11053d818,0x70,7);
  *(undefined **)(puVar26 + 0x10) = puVar25;
  *(long *)(puVar26 + 0x18) = lVar43;
  *(undefined8 *)(puVar26 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar26 + 0x40) = uStack_b0;
  *(undefined8 *)(puVar26 + 0x58) = uStack_98;
  *(undefined **)(puVar26 + 0x50) = puStack_a0;
  *(undefined8 *)(puVar26 + 0x68) = uStack_88;
  *(undefined8 *)(puVar26 + 0x60) = uStack_90;
  *(undefined8 *)(puVar26 + 0x28) = uStack_c8;
  *(undefined8 ****)(puVar26 + 0x20) = pppuStack_d0;
  *(undefined8 *)(puVar26 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar26 + 0x30) = uStack_c0;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61644(puVar18 + 0x10,unaff_x20);
  puVar27 = &UNK_11053d840;
  func_0x000107c613fc(&UNK_11053d840,0x70,7);
  *(undefined **)(puVar27 + 0x10) = puVar18;
  *(long *)(puVar27 + 0x18) = lVar43;
  *(undefined8 *)(puVar27 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar27 + 0x40) = uStack_b0;
  *(undefined8 *)(puVar27 + 0x58) = uStack_98;
  *(undefined **)(puVar27 + 0x50) = puStack_a0;
  *(undefined8 *)(puVar27 + 0x68) = uStack_88;
  *(undefined8 *)(puVar27 + 0x60) = uStack_90;
  *(undefined8 *)(puVar27 + 0x28) = uStack_c8;
  *(undefined8 ****)(puVar27 + 0x20) = pppuStack_d0;
  *(undefined8 *)(puVar27 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar27 + 0x30) = uStack_c0;
  func_0x000107c61174();
  FUN_1026feb38(&pppuStack_d0,&ppppuStack_2f0);
  func_0x000107c61174();
  FUN_1026feb38(&pppuStack_d0,&ppppuStack_2f0);
  uVar36 = 0x112eb8d80;
  func_0x0001026feb74(0x112eb8d80,0x1026ecda8,&UNK_10dacfe60);
  func_0x000107c6157c(puVar23);
  func_0x000107c6157c(puVar24);
  func_0x000107c6157c(puVar25);
  func_0x000107c6157c(puVar18);
  lVar28 = lVar20;
  uVar46 = uVar36;
  func_0x000107c5f398();
  uVar29 = 0x112eb8d90;
  func_0x0001026feb74(0x112eb8d90,0x1026ecf28,&UNK_10dacfe28);
  lVar30 = lVar22;
  uVar47 = uVar29;
  func_0x000107c5f398();
  pppuStack_1d0 = (undefined8 ***)((ulong)pppuStack_1d0 & 0xffffffffffffff00);
  func_0x000107c5f728(&ppppuStack_2f0,&pppuStack_1d0,&UNK_11053dc38);
  uVar42 = uStack_2e8;
  uVar6 = ppppuStack_2f0._0_1_;
  pppuStack_1d0 = (undefined8 ***)((ulong)pppuStack_1d0 & 0xffffffffffffff00);
  func_0x000107c5f728(&ppppuStack_2f0,&pppuStack_1d0,&UNK_11053cf78);
  uVar44 = uStack_2e8;
  uVar7 = ppppuStack_2f0._0_1_;
  pppuStack_1d0 = (undefined8 ***)((ulong)pppuStack_1d0 & 0xffffffffffffff00);
  func_0x000107c5f728(&ppppuStack_2f0,&pppuStack_1d0,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar23);
  func_0x000107c61574(puVar24);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar18);
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_198 = uStack_98;
  puStack_1a0 = puStack_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  uStack_1c8 = uStack_c8;
  pppuStack_1d0 = pppuStack_d0;
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  pcStack_180 = FUN_1026fc604;
  uStack_178 = 0;
  pcStack_170 = FUN_1026feab4;
  uStack_160 = 0x1026feed4;
  pcStack_150 = FUN_1026feacc;
  pcStack_140 = FUN_1026feb2c;
  uStack_110 = uVar6;
  uStack_108 = uVar42;
  uStack_100 = uVar7;
  uStack_f8 = uVar44;
  uStack_f0 = ppppuStack_2f0._0_1_;
  uStack_e8 = uStack_2e8;
  uStack_d8 = 0x404e000000000000;
  uStack_e0 = 0x404e000000000000;
  puStack_168 = puVar23;
  puStack_158 = puVar24;
  puStack_148 = puVar26;
  puStack_138 = puVar27;
  lStack_130 = lVar28;
  uStack_128 = uVar46;
  lStack_120 = lVar30;
  uStack_118 = uVar47;
  func_0x000107c6157c(lVar21);
  func_0x000107c6157c(lVar19);
  FUN_1026f737c(&pppuStack_1d0,&ppppuStack_2f0);
  lVar30 = lVar21;
  func_0x000107c5f31c(lVar21,lVar20,uVar36);
  lVar28 = lVar19;
  func_0x000107c5f31c(lVar19,lVar22,uVar29);
  uStack_230 = CONCAT71(uStack_10f,uStack_110);
  uStack_220 = CONCAT71(uStack_ff,uStack_100);
  uStack_228 = uStack_108;
  uStack_218 = uStack_f8;
  uStack_210 = CONCAT71(uStack_ef,uStack_f0);
  uStack_208 = uStack_e8;
  uStack_1f8 = uStack_d8;
  uStack_200 = uStack_e0;
  puStack_268 = puStack_148;
  pcStack_270 = pcStack_150;
  puStack_258 = puStack_138;
  pcStack_260 = pcStack_140;
  uStack_248 = uStack_128;
  lStack_250 = lStack_130;
  uStack_238 = uStack_118;
  lStack_240 = lStack_120;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  pcStack_2a0 = pcStack_180;
  puStack_288 = puStack_168;
  pcStack_290 = pcStack_170;
  puStack_278 = puStack_158;
  uStack_280 = uStack_160;
  uStack_2e8 = uStack_1c8;
  ppppuStack_2f0 = (undefined8 ****)pppuStack_1d0;
  uStack_2d8 = uStack_1b8;
  uStack_2e0 = uStack_1c0;
  uStack_2c8 = uStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  puStack_2c0 = puStack_1a0;
  lStack_1f0 = lVar30;
  lStack_1e8 = lVar20;
  lStack_1e0 = lVar28;
  lStack_1d8 = lVar22;
  FUN_1026febb4();
  pppppuVar31 = &ppppuStack_2f0;
  func_0x000107c5f76c(pppppuVar31,&UNK_11053ce28,lVar28);
  ppppuStack_2f0 = pppppuVar31;
  func_0x0001000285a8(0x112e03420,&UNK_10dad0b60);
  func_0x000107c610f8();
  pppppuVar31 = &ppppuStack_2f0;
  func_0x000107c5f458();
  func_0x000107c61174();
  pppppuVar32 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar32 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc378);
    (*pcVar8)();
  }
  puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar26 = puVar18;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(pppppuVar32);
  func_0x000107c61170(pppppuVar32);
  func_0x000107c61170(puVar26);
  pppppuVar32 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar32 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc37c);
    (*pcVar8)();
  }
  func_0x000107c5a050();
  func_0x000107c61170();
  func_0x0001026fe4fc();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c3fa94(puVar18);
  func_0x000107c61180();
  func_0x000107c52b50(pppppuVar32);
  func_0x000107c61170(puVar18);
  func_0x000107c5a050(pppppuVar32);
  pppppuVar33 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar33 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc380);
    (*pcVar8)();
  }
  func_0x000107c3d89c(pppppuVar32);
  func_0x000107c61170(pppppuVar33);
  lVar28 = 0x112d360b8;
  func_0x0001026fdb48(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                      &UNK_10d9011a0);
  lVar30 = lVar28;
  func_0x000107c613fc();
  dVar45 = 1.97626258336499e-323;
  *(undefined8 *)(lVar30 + 0x18) = 9;
  *(undefined8 *)(lVar30 + 0x10) = 4;
  pppppuVar33 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar33 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc384);
    (*pcVar8)();
  }
  pppppuVar34 = pppppuVar33;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  pppppuVar33 = pppppuVar32;
  func_0x000107c5cbe4(pppppuVar32);
  func_0x000107c61180();
  pppppuVar35 = pppppuVar34;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar34);
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar30 + 0x20) = pppppuVar35;
  pppppuVar33 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar33 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc388);
    (*pcVar8)();
  }
  pppppuVar34 = pppppuVar33;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  pppppuVar33 = pppppuVar32;
  func_0x000107c4acb0(pppppuVar32);
  func_0x000107c61180();
  pppppuVar35 = pppppuVar34;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar34);
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar30 + 0x28) = pppppuVar35;
  pppppuVar33 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (pppppuVar33 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc38c);
    (*pcVar8)();
  }
  pppppuVar34 = pppppuVar33;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  pppppuVar33 = pppppuVar32;
  func_0x000107c5ce8c(pppppuVar32);
  func_0x000107c61180();
  pppppuVar35 = pppppuVar34;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar34);
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar30 + 0x30) = pppppuVar35;
  pppppuVar33 = pppppuVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar31);
  if (pppppuVar33 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1026fc390);
    (*pcVar8)();
  }
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  pppppuVar34 = pppppuVar33;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  pppppuVar33 = pppppuVar32;
  func_0x000107c3ec1c(pppppuVar32);
  func_0x000107c61180();
  pppppuVar35 = pppppuVar34;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar34);
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar30 + 0x38) = pppppuVar35;
  uVar36 = 0;
  func_0x0001026fec64(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar20 = lVar30;
  func_0x000107c5fc48(lVar30,uVar36);
  func_0x000107c61574(lVar30);
  func_0x000107c3d048(puVar18);
  func_0x000107c61170(lVar20);
  func_0x000107c3d614(lVar43);
  func_0x000107c3d89c(param_9);
  if (lVar43 != 0) {
    func_0x000107c41c30(pppppuVar31);
  }
  func_0x000107c3ec60(param_9);
  func_0x000107c609cc();
  dVar48 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x000107c5f444(dVar45 + -24.0,dVar48);
  func_0x000107c613fc(lVar28,((ulong)*(uint *)(lVar28 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                      *(ushort *)(lVar28 + 0x34) | 7);
  *(undefined8 *)(lVar28 + 0x18) = 9;
  *(undefined8 *)(lVar28 + 0x10) = 4;
  pppppuVar33 = pppppuVar32;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar43 = param_9;
  func_0x000107c5cbe4(param_9);
  func_0x000107c61180();
  pppppuVar34 = pppppuVar33;
  func_0x000107c40284(0x405b800000000000);
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  func_0x000107c61170(lVar43);
  *(undefined8 ******)(lVar28 + 0x20) = pppppuVar34;
  pppppuVar33 = pppppuVar32;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c4acb0(param_9);
  func_0x000107c61180();
  pppppuVar34 = pppppuVar33;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  func_0x000107c61170(param_9);
  *(undefined8 ******)(lVar28 + 0x28) = pppppuVar34;
  pppppuVar33 = pppppuVar32;
  func_0x000107c5e308();
  func_0x000107c61180();
  pppppuVar34 = pppppuVar33;
  func_0x000107c40290(dVar45 + -24.0);
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar28 + 0x30) = pppppuVar34;
  pppppuVar33 = pppppuVar32;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar32);
  pppppuVar34 = pppppuVar33;
  func_0x000107c40290(dVar48 + 16.0);
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar33);
  *(undefined8 ******)(lVar28 + 0x38) = pppppuVar34;
  lVar43 = lVar28;
  func_0x000107c5fc48(lVar28,uVar36);
  func_0x000107c61574(lVar28);
  func_0x000107c3d048(puVar18);
  func_0x000107c61170(lVar43);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 ******)(unaff_x20 + 0x70) = pppppuVar31;
  func_0x000107c61174(pppppuVar31);
  func_0x000107c61170(uVar36);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 ******)(unaff_x20 + 0x78) = pppppuVar32;
  func_0x000107c61174(pppppuVar32);
  func_0x000107c61170(uVar36);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x80);
  *(long *)(unaff_x20 + 0x80) = lVar19;
  func_0x000107c6157c(lVar19);
  func_0x000107c61574(uVar36);
  FUN_1026fcc7c(puStack_318,lVar21);
  func_0x000107c61170(pppppuVar31);
  func_0x000107c61170(pppppuVar32);
  func_0x000107c6142c(puStack_318);
  func_0x0001026febf4(&pppuStack_1d0);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(lVar16);
  func_0x000107c61574(lVar21);
  func_0x000107c61574(lVar19);
  return;
}



/* Entry: 1026fc390; end: 1026fc603;  */

/* WARNING: Possible PIC construction at 0x0001026fc524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fc5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fc5c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026fc5a4) */
/* WARNING: Removing unreachable block (ram,0x0001026fc528) */
/* WARNING: Removing unreachable block (ram,0x0001026fc5c8) */

void FUN_1026fc390(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x70);
  lVar5 = *(long *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  func_0x000107c61574(uVar3);
  puVar4 = &UNK_11053d9d0;
  func_0x000107c613fc(&UNK_11053d9d0,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar8;
  *(long *)(puVar4 + 0x18) = lVar5;
  if (((param_1 & 1) == 0) || (lVar5 == 0)) {
    if (lVar8 == 0) {
      func_0x000107c61174(lVar5);
      if (lVar5 == 0) {
        func_0x000107c61574(puVar4);
      }
      else {
        func_0x000107c4ff34(lVar5);
        func_0x000107c61574(puVar4);
        lVar8 = lVar5;
      }
    }
    else {
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c5e37c();
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026fc604);
        (*pcVar2)();
      }
      func_0x000107c4ff34();
    }
  }
  else {
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    func_0x000107c5a378();
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11053d9f8;
    func_0x000107c613fc(&UNK_11053d9f8,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar5;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x1026fed60;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11053da10;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_11053da48;
    func_0x000107c613fc(&UNK_11053da48,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x1026fed58;
    *(undefined **)(puVar7 + 0x18) = puVar4;
    pcStack_70 = FUN_1026fed6c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11053da60;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd4(0x3fd0000000000000,0,puVar6);
    func_0x000107c61574(puVar4);
    lVar8 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1026fc604; end: 1026fc607;  */

void FUN_1026fc604(void)

{
  return;
}



/* Entry: 1026fc608; end: 1026fc65f;  */

void FUN_1026fc608(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1026fc390(0);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026fc660; end: 1026fc9ab;  */

void FUN_1026fc660(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x80);
      if (lVar14 == 0) {
        func_0x000107c61174(param_2);
      }
      else {
        puVar2 = &UNK_10dad0bb8;
        func_0x000107c614e0(&UNK_10dad0bb8);
        puVar3 = &UNK_10dad0be0;
        func_0x000107c614e0(&UNK_10dad0be0);
        uStack_79 = 1;
        func_0x000107c61174(param_2);
        func_0x000107c6157c(lVar14);
        func_0x000107c5f210(&uStack_79,lVar14,puVar2,puVar3);
      }
      lVar4 = param_2;
      FUN_1026fc9ac();
      uVar12 = *param_3;
      uVar13 = param_3[1];
      lVar14 = *(long *)(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      uVar15 = *(undefined8 *)(param_1 + 0x40);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c615f0(uVar15);
      lVar6 = lVar14;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar14);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      uVar7 = param_3[4];
      uVar1 = param_3[5];
      puVar2 = PTR_PTR_1126ae6d0;
      func_0x000107c610f8();
      func_0x000107c4831c();
      puVar3 = PTR_PTR_1126b1bb0;
      func_0x000107c61168(PTR_PTR_1126b1bb0);
      func_0x000107c3e6c4();
      func_0x000107c61180();
      FUN_1026eca60(uVar7,uVar1,uVar12,uVar13);
      puVar8 = PTR_PTR_1126b5b40;
      func_0x000107c61168(PTR_PTR_1126b5b40);
      func_0x000107c5bd90();
      func_0x000107c61180();
      puVar9 = PTR_PTR_1126b20d0;
      func_0x000107c610f8();
      func_0x000107c48224();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar8);
      puVar8 = PTR_PTR_1126b20d8;
      func_0x000107c610f8(PTR_PTR_1126b20d8);
      func_0x000107c453e4();
      puVar10 = puVar8;
      func_0x000107c5e518();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar9;
        func_0x000107c61174(puVar9);
        func_0x000107c61174();
        puVar11 = puVar10;
        func_0x000107c5e47c(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar11);
      }
      puVar8 = puVar10;
      func_0x000107c3ecc8(puVar10);
      func_0x000107c61180();
      uVar12 = uVar15;
      func_0x000107c501bc(uVar15);
      func_0x000107c61180();
      uVar13 = uVar5;
      func_0x000107c3ed80(uVar5);
      func_0x000107c61180();
      func_0x000107c615e8(uVar12);
      func_0x000107c42c1c(lVar14);
      func_0x000107c61574(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar15);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
    }
  }
  return;
}



/* Entry: 1026fc9ac; end: 1026fcb3f;  */

undefined * FUN_1026fc9ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar3 = &UNK_11053d8e0;
  func_0x000107c613fc(&UNK_11053d8e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar4 = &UNK_11053d6d0;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_11053d908;
  func_0x000107c613fc(&UNK_11053d908,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1026fed38;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_11053d920;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x1026fed44;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_11053d948;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar3 = puStack_58;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return puVar6;
}



/* Entry: 1026fcb40; end: 1026fcc7b;  */

void FUN_1026fcb40(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar8 = *(long *)(param_1 + 0x80);
      if (lVar8 == 0) {
        func_0x000107c61174(param_2);
      }
      else {
        puVar5 = &UNK_10dad0bb8;
        func_0x000107c614e0(&UNK_10dad0bb8);
        puVar6 = &UNK_10dad0be0;
        func_0x000107c614e0(&UNK_10dad0be0);
        uStack_69 = 1;
        func_0x000107c61174(param_2);
        func_0x000107c6157c(lVar8);
        func_0x000107c5f210(&uStack_69,lVar8,puVar5,puVar6);
      }
      lVar8 = param_2;
      FUN_1026fc9ac(param_2);
      uVar1 = param_3[4];
      uVar3 = param_3[5];
      uVar2 = *param_3;
      uVar4 = param_3[1];
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c61174(uVar7);
      func_0x000107c6157c(param_1);
      FUN_1026fe608(uVar1,uVar3,uVar2,uVar4,lVar8,uVar7,param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(param_1);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026fcc7c; end: 1026fcee7;  */

/* WARNING: Possible PIC construction at 0x0001026fce98: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fcc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_113072c10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x30);
    do {
      uStack_c8 = puVar8[-1];
      uStack_d0 = puVar8[-2];
      lVar10 = puVar8[1];
      uVar9 = *puVar8;
      uStack_a8 = puVar8[3];
      uStack_b0 = puVar8[2];
      lStack_98 = puVar8[5];
      uStack_a0 = puVar8[4];
      uStack_c0 = uVar9;
      lStack_b8 = lVar10;
      uStack_90 = uVar9;
      lStack_88 = lVar10;
      if (lVar10 != 0) {
        func_0x0001026fec28(&uStack_d0,&puStack_110);
        FUN_1026fecb0(&uStack_90,&puStack_110,0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c5fadc(uVar9,lVar10);
        func_0x0001026fecf8(&uStack_90,0x112d35ff8,&UNK_10d900cd0);
        lVar10 = lStack_98;
        uVar6 = uStack_a0;
        if (lStack_98 == 0) {
          uVar6 = 0;
        }
        else {
          func_0x000107c61434(lStack_98);
          func_0x000107c5fadc(uVar6,lVar10);
          func_0x000107c6142c(lVar10);
        }
        uVar2 = 0;
        func_0x0001026fec64(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar3 = &UNK_11053d868;
        func_0x000107c613fc(&UNK_11053d868,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,param_2);
        puVar4 = &UNK_11053d890;
        func_0x000107c613fc(&UNK_11053d890,0x58,7);
        *(undefined8 *)(puVar4 + 0x20) = uStack_c8;
        *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
        *(long *)(puVar4 + 0x30) = lStack_b8;
        *(undefined8 *)(puVar4 + 0x28) = uStack_c0;
        *(undefined8 *)(puVar4 + 0x40) = uStack_a8;
        *(undefined8 *)(puVar4 + 0x38) = uStack_b0;
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(long *)(puVar4 + 0x50) = lStack_98;
        *(undefined8 *)(puVar4 + 0x48) = uStack_a0;
        pcStack_f0 = FUN_1026feca4;
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0x42000000;
        puStack_100 = &UNK_10134a1dc;
        puStack_f8 = &UNK_11053d8a8;
        ppuVar5 = &puStack_110;
        puStack_e8 = puVar4;
        func_0x000107c60bc4(&puStack_110);
        func_0x000107c61574(puStack_e8);
        func_0x000107c42ff4(lVar1);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar2);
      }
      puVar8 = puVar8 + 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1026fcee8; end: 1026fd13f;  */

void FUN_1026fcee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11053d980;
  func_0x000107c613fc(&UNK_11053d980,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  uStack_50 = 0x1026fed4c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11053d998;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1026fd140; end: 1026fd27b;  */

void FUN_1026fd140(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  puVar3 = (undefined8 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar3 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      puVar4 = &UNK_10dad0b70;
      func_0x000107c614e0(&UNK_10dad0b70);
      puVar5 = &UNK_10dad0b98;
      func_0x000107c614e0(&UNK_10dad0b98);
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61434(uVar2);
      pcVar6 = (code *)auStack_98;
      puVar8 = puVar3;
      func_0x000107c5f208(pcVar6,puVar3,puVar4,puVar5);
      uVar7 = *puVar8;
      func_0x000107c61558(uVar7);
      uVar9 = *puVar8;
      *puVar8 = 0x8000000000000000;
      func_0x000100fdaeac(param_1,uVar1,uVar2,uVar7);
      func_0x000107c6142c(uVar2);
      *puVar8 = uVar9;
      (*pcVar6)(auStack_98,0);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1026fd27c; end: 1026fd2f7;  */

/* WARNING: Possible PIC construction at 0x0001026fd2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026fd2bc) */

void FUN_1026fd27c(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    func_0x000107c5e37c(param_1,param_2,0);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026fd2f8);
      (*pcVar1)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1026fd2f8; end: 1026fd31f;  */

void FUN_1026fd2f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = &UNK_11053d6d0;
  func_0x000107c613fc(&UNK_11053d6d0,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648(lVar4);
  func_0x000107c61644(puVar3 + 0x10,lVar4);
  func_0x000107c61574(lVar4);
  puVar5 = &UNK_11053da98;
  func_0x000107c613fc(&UNK_11053da98,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  puVar3 = &UNK_11053dac0;
  func_0x000107c613fc(&UNK_11053dac0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dad0c20;
  *(undefined **)(puVar3 + 0x18) = puVar5;
  func_0x000107c615f0(uVar1);
  func_0x000107c61434(uVar2);
  uVar6 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad0c30,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1026fd320; end: 1026fd3cb;  */

void FUN_1026fd320(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1026fd3cc; end: 1026fd3d7;  */

void FUN_1026fd3cc(void)

{
  return;
}



/* Entry: 1026fd3d8; end: 1026fd3f7;  */

void FUN_1026fd3d8(void)

{
  FUN_1026fa874();
  return;
}



/* Entry: 1026fd3f8; end: 1026fd3fb;  */

void FUN_1026fd3f8(void)

{
  return;
}



/* Entry: 1026fd3fc; end: 1026fd41b;  */

void FUN_1026fd3fc(void)

{
  func_0x0001026fad00();
  return;
}



/* Entry: 1026fd41c; end: 1026fd67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026fd41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c614f0();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56704(0);
  lVar6 = 0x112daba28;
  func_0x0001026fdb48(0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0,0x112eb9520,
                      &UNK_10dbacfd0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 7;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  *(undefined **)(lVar6 + 0x20) = puVar3;
  *(undefined **)(lVar6 + 0x28) = puVar4;
  *(undefined **)(lVar6 + 0x30) = puVar5;
  *(long *)(unaff_x20 + _DAT_112eb94f0) = lVar6;
  puVar1 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  puVar7 = &stack0xffffffffffffff70;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar7,puVar1);
  uVar9 = *(ulong *)(puVar7 + _DAT_112eb94f0);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar10 == 0) {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  else {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026fd680);
      (*pcVar2)();
    }
    func_0x000107c61434(uVar9);
    uVar11 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
        func_0x000107c61174(uVar8);
      }
      else {
        uVar8 = uVar11;
        func_0x0001026fdbc0(uVar11,uVar9,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0,
                            0x112daba28);
      }
      uVar11 = uVar11 + 1;
      func_0x000107c5317c();
      func_0x000107c53fcc(uVar8);
      func_0x000107c3d6fc(puVar7);
      func_0x000107c61170(uVar8);
    } while (uVar10 != uVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c61170(puVar3);
  return puVar7;
}



/* Entry: 1026fd680; end: 1026fd69f; -[_TtC31InferredPlaceConfirmationPlugin22PillTouchAbsorbingView initWithFrame:] */

void FUN_1026fd680(void)

{
  FUN_1026fd41c();
  return;
}



/* Entry: 1026fd6a0; end: 1026fd6f7; -[_TtC31InferredPlaceConfirmationPlugin22PillTouchAbsorbingView initWithCoder:] */

void FUN_1026fd6a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "InferredPlaceConfirmationPlugin/InferredPlaceConfirmationPlugin.swift",0x45,2
                      ,0x16d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026fd6f8);
  (*pcVar1)();
}



/* Entry: 1026fd6f8; end: 1026fd6ff; -[_TtC31InferredPlaceConfirmationPlugin22PillTouchAbsorbingView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1026fd6f8(void)

{
  return 1;
}



/* Entry: 1026fd700; end: 1026fd867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fd700(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112eb94f0);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1026fd810);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1026fd814);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar3 + 0x20 + uVar5 * 8);
      }
      else {
        uVar2 = uVar5;
        func_0x0001026fdbc0(uVar5,uVar3,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0,0x112daba28
                           );
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1026fd868);
          (*pcVar1)();
        }
        func_0x000107c615e8();
      }
      if (uVar2 == param_1) {
        func_0x000107c5de64();
        func_0x000107c61180();
        if (param_2 == 0) {
          return;
        }
        if (param_2 != unaff_x20) {
          func_0x000107c49c50();
        }
        func_0x000107c61170(param_2);
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



/* Entry: 1026fd868; end: 1026fd8df; -[_TtC31InferredPlaceConfirmationPlugin22PillTouchAbsorbingView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_1026fd868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1026fd700(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1026fd8e0; end: 1026fd913;  */

void FUN_1026fd8e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026fd914; end: 1026fd923; -[_TtC31InferredPlaceConfirmationPlugin22PillTouchAbsorbingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026fd914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb94f0));
  return;
}



/* Entry: 1026fd924; end: 1026fd98f; -[_TtC31InferredPlaceConfirmationPlugin31InferredPlaceConfirmationPlugin mapPlaceShareEnded] */

/* WARNING: Possible PIC construction at 0x0001026fd96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026fd970) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1026fd924(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x58));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026fd990; end: 1026fdd7b;  */

/* WARNING: Possible PIC construction at 0x0001026fd9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026fd9e4) */

void FUN_1026fd990(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10dad0bb8;
  func_0x000107c614e0(&UNK_10dad0bb8);
  puVar2 = &UNK_10dad0be0;
  func_0x000107c614e0(&UNK_10dad0be0);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026fdd7c; end: 1026fdd97;  */

void FUN_1026fdd7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1026fdd98();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1026fdd98; end: 1026fdfb7;  */

undefined * FUN_1026fdd98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026fdeb0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112eb9538;
    func_0x0001000285a8(0x112eb9538,&UNK_10dad0c38);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x28);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026fdfb8; end: 1026fe4cb;  */

/* WARNING: Possible PIC construction at 0x0001026fe014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe4a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026fe174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026fe2ac) */
/* WARNING: Removing unreachable block (ram,0x0001026fe458) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001026fe448) */
/* WARNING: Removing unreachable block (ram,0x0001026fe39c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe38c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe340) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2ec) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2d4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe320) */
/* WARNING: Removing unreachable block (ram,0x0001026fe330) */
/* WARNING: Removing unreachable block (ram,0x0001026fe338) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2e4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe288) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2f4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe278) */
/* WARNING: Removing unreachable block (ram,0x0001026fe258) */
/* WARNING: Removing unreachable block (ram,0x0001026fe260) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2b0) */
/* WARNING: Removing unreachable block (ram,0x0001026fe268) */
/* WARNING: Removing unreachable block (ram,0x0001026fe234) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2a4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe240) */
/* WARNING: Removing unreachable block (ram,0x0001026fe4a8) */
/* WARNING: Removing unreachable block (ram,0x0001026fe10c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe17c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe110) */
/* WARNING: Removing unreachable block (ram,0x0001026fe124) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0dc) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0e0) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0e4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe170) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0e8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001026fe060) */
/* WARNING: Removing unreachable block (ram,0x0001026fe488) */
/* WARNING: Removing unreachable block (ram,0x0001026fe490) */
/* WARNING: Removing unreachable block (ram,0x0001026fe06c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe4a0) */
/* WARNING: Removing unreachable block (ram,0x0001026fe078) */
/* WARNING: Removing unreachable block (ram,0x0001026fe088) */
/* WARNING: Removing unreachable block (ram,0x0001026fe128) */
/* WARNING: Removing unreachable block (ram,0x0001026fe090) */
/* WARNING: Removing unreachable block (ram,0x0001026fe484) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0a0) */
/* WARNING: Removing unreachable block (ram,0x0001026fe14c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe0b4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe018) */
/* WARNING: Removing unreachable block (ram,0x0001026fe150) */
/* WARNING: Removing unreachable block (ram,0x0001026fe01c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe178) */
/* WARNING: Removing unreachable block (ram,0x0001026fe180) */
/* WARNING: Removing unreachable block (ram,0x0001026fe28c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe300) */
/* WARNING: Removing unreachable block (ram,0x0001026fe1a4) */
/* WARNING: Removing unreachable block (ram,0x0001026fe1bc) */
/* WARNING: Removing unreachable block (ram,0x0001026fe29c) */
/* WARNING: Removing unreachable block (ram,0x0001026fe2e8) */
/* WARNING: Removing unreachable block (ram,0x0001026fe1c4) */

void FUN_1026fdfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4e67c(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1026fe4cc; end: 1026fe4db;  */

undefined1  [16] FUN_1026fe4cc(void)

{
  return ZEXT816(0x11053d780);
}



/* Entry: 1026fe4dc; end: 1026fe51b;  */

void FUN_1026fe4dc(void)

{
  func_0x000107c61168(&PTR_PTR_112eb9420);
  return;
}



/* Entry: 1026fe51c; end: 1026fe59b;  */

void FUN_1026fe51c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1026fe59c;
  plVar6[0x17] = lVar2;
  plVar6[0x18] = lVar7;
  plVar6[0x15] = lVar1;
  plVar6[0x16] = lVar4;
  plVar6[0x14] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  plVar6[0x19] = lVar4;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x1a] = lVar5;
  lVar5 = 0x112d45220;
  func_0x0001026feb74(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  plVar6[0x1b] = lVar5;
  func_0x000107c5fca8();
  plVar6[0x1c] = lVar4;
  plVar6[0x1d] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026faddc,lVar4,lVar5);
  return;
}



/* Entry: 1026fe59c; end: 1026fe5d7;  */

void FUN_1026fe59c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026fe5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026fe5d8; end: 1026fe607;  */

void FUN_1026fe5d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1026fe608; end: 1026feab3;  */

void FUN_1026fe608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  uStack_b0 = param_5;
  uStack_a0 = param_7;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lStack_78 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puStack_a8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar6 = 0x112d36580;
  lStack_80 = lVar11;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_00;
  lStack_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lStack_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12_04;
  lVar6 = param_6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(param_6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar7 = PTR_PTR_1126b1e58;
  func_0x000107c61168();
  uVar8 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  puVar9 = puVar7;
  func_0x000107c4c438(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  lStack_98 = param_6;
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar16,puVar9);
    func_0x000107c61170(puVar9);
  }
  pcVar13 = *(code **)(lStack_78 + 0x38);
  (*pcVar13)(lVar16,puVar9 == (undefined *)0x0,1,lVar5);
  uVar8 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4c464();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(param_3);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar15,puVar7);
    func_0x000107c61170(puVar7);
  }
  (*pcVar13)(lVar15,puVar7 == (undefined *)0x0,1,lVar5);
  FUN_1026fecb0(lVar16,lVar11,0x112d36580,&UNK_10d9016d0);
  lVar3 = lStack_78;
  pcVar12 = *(code **)(lStack_78 + 0x30);
  lVar10 = lVar11;
  (*pcVar12)(lVar11,1,lVar5);
  lVar6 = lStack_80;
  if ((int)lVar10 != 1) {
    pcVar14 = *(code **)(lVar3 + 0x20);
    (*pcVar14)(lStack_80,lVar11,lVar5);
    lVar11 = lStack_90;
    FUN_1026fecb0(lVar15,lStack_90,0x112d36580,&UNK_10d9016d0);
    lVar10 = lVar11;
    (*pcVar12)(lVar11,1,lVar5);
    puVar1 = puStack_a8;
    if ((int)lVar10 != 1) {
      (*pcVar14)(puStack_a8,lVar11,lVar5);
      lVar11 = lStack_88;
      pcVar12 = *(code **)(lVar3 + 0x10);
      (*pcVar12)(lStack_88,lVar6,lVar5);
      (*pcVar13)(lVar11,0,1,lVar5);
      lVar6 = lStack_b8;
      (*pcVar12)(lStack_b8,puVar1,lVar5);
      (*pcVar13)(lVar6,0,1,lVar5);
      func_0x0001005137e0(0);
      func_0x000107c610f8();
      uVar4 = uStack_68;
      func_0x000107c61434(uStack_68);
      uVar8 = uStack_b0;
      func_0x000107c615f0(uStack_b0);
      uVar2 = uStack_a0;
      func_0x000107c6157c(uStack_a0);
      FUN_102e54d28(uVar8,lStack_88,lVar6,uVar2,uStack_70,uVar4,0x27);
      func_0x000107c42c1c(lStack_98);
      func_0x000107c61170(uVar8);
      pcVar13 = *(code **)(lVar3 + 8);
      (*pcVar13)(puVar1,lVar5);
      (*pcVar13)(lStack_80,lVar5);
      lVar11 = lVar16;
      goto LAB_1026fea64;
    }
    (**(code **)(lVar3 + 8))(lVar6,lVar5);
  }
  func_0x0001026fecf8(lVar15,0x112d36580,&UNK_10d9016d0);
  lVar15 = lVar16;
LAB_1026fea64:
  func_0x0001026fecf8(lVar15,0x112d36580,&UNK_10d9016d0);
  func_0x0001026fecf8(lVar11,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1026feab4; end: 1026feacb;  */

void FUN_1026feab4(void)

{
  FUN_1026fc608();
  return;
}



/* Entry: 1026feacc; end: 1026fead7;  */

void FUN_1026feacc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar2 == 0) {
      func_0x000107c61574(lVar3);
    }
    else {
      lVar16 = *(long *)(lVar3 + 0x80);
      if (lVar16 == 0) {
        func_0x000107c61174(lVar2);
      }
      else {
        puVar4 = &UNK_10dad0bb8;
        func_0x000107c614e0(&UNK_10dad0bb8);
        puVar5 = &UNK_10dad0be0;
        func_0x000107c614e0(&UNK_10dad0be0);
        uStack_79 = 1;
        func_0x000107c61174(lVar2);
        func_0x000107c6157c(lVar16);
        func_0x000107c5f210(&uStack_79,lVar16,puVar4,puVar5);
      }
      lVar6 = lVar2;
      FUN_1026fc9ac();
      uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar16 = *(long *)(lVar3 + 0x48);
      uVar7 = *(undefined8 *)(lVar3 + 0x50);
      uVar17 = *(undefined8 *)(lVar3 + 0x40);
      func_0x000107c61174();
      func_0x000107c61174(uVar7);
      func_0x000107c615f0(uVar17);
      lVar8 = lVar16;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar16);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      puVar4 = PTR_PTR_1126ae6d0;
      func_0x000107c610f8();
      func_0x000107c4831c();
      puVar5 = PTR_PTR_1126b1bb0;
      func_0x000107c61168(PTR_PTR_1126b1bb0);
      func_0x000107c3e6c4();
      func_0x000107c61180();
      FUN_1026eca60(uVar9,uVar1,uVar14,uVar15);
      puVar10 = PTR_PTR_1126b5b40;
      func_0x000107c61168(PTR_PTR_1126b5b40);
      func_0x000107c5bd90();
      func_0x000107c61180();
      puVar11 = PTR_PTR_1126b20d0;
      func_0x000107c610f8();
      func_0x000107c48224();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar10);
      puVar10 = PTR_PTR_1126b20d8;
      func_0x000107c610f8(PTR_PTR_1126b20d8);
      func_0x000107c453e4();
      puVar12 = puVar10;
      func_0x000107c5e518();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar11;
        func_0x000107c61174(puVar11);
        func_0x000107c61174();
        puVar13 = puVar12;
        func_0x000107c5e47c(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar13);
      }
      puVar10 = puVar12;
      func_0x000107c3ecc8(puVar12);
      func_0x000107c61180();
      uVar14 = uVar17;
      func_0x000107c501bc(uVar17);
      func_0x000107c61180();
      uVar15 = uVar7;
      func_0x000107c3ed80(uVar7);
      func_0x000107c61180();
      func_0x000107c615e8(uVar14);
      func_0x000107c42c1c(lVar16);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(uVar17);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar11);
    }
  }
  return;
}



/* Entry: 1026fead8; end: 1026feb2b;  */

void FUN_1026fead8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026feb2c; end: 1026feb37;  */

void FUN_1026feb2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar6 + 0x80);
      if (lVar10 == 0) {
        func_0x000107c61174(lVar5);
      }
      else {
        puVar7 = &UNK_10dad0bb8;
        func_0x000107c614e0(&UNK_10dad0bb8);
        puVar8 = &UNK_10dad0be0;
        func_0x000107c614e0(&UNK_10dad0be0);
        uStack_69 = 1;
        func_0x000107c61174(lVar5);
        func_0x000107c6157c(lVar10);
        func_0x000107c5f210(&uStack_69,lVar10,puVar7,puVar8);
      }
      lVar10 = lVar5;
      FUN_1026fc9ac(lVar5);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar9 = *(undefined8 *)(lVar6 + 0x58);
      func_0x000107c61174(uVar9);
      func_0x000107c6157c(lVar6);
      FUN_1026fe608(uVar1,uVar3,uVar2,uVar4,lVar10,uVar9,lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61574(lVar6);
    }
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 1026feb38; end: 1026febb3;  */

undefined8 FUN_1026feb38(undefined8 param_1,undefined8 param_2)

{
  FUN_1026ff44c(param_2,param_1);
  return param_2;
}



/* Entry: 1026febb4; end: 1026febf3;  */

void FUN_1026febb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad003c;
  func_0x000107c61520(&UNK_10dad003c,&UNK_11053ce28);
  puRam0000000112eb9528 = puVar1;
  return;
}



/* Entry: 1026febf4; end: 1026feca3;  */

undefined8 FUN_1026febf4(undefined8 param_1)

{
  FUN_1026f6b7c();
  return param_1;
}



/* Entry: 1026feca4; end: 1026fecaf;  */

void FUN_1026feca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar9 + 0x10,auStack_78,0,0);
  puVar3 = (undefined8 *)(lVar9 + 0x10);
  func_0x000107c61648();
  if (puVar3 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      puVar4 = &UNK_10dad0b70;
      func_0x000107c614e0(&UNK_10dad0b70);
      puVar5 = &UNK_10dad0b98;
      func_0x000107c614e0(&UNK_10dad0b98);
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61434(uVar2);
      pcVar6 = (code *)auStack_98;
      puVar8 = puVar3;
      func_0x000107c5f208(pcVar6,puVar3,puVar4,puVar5);
      uVar7 = *puVar8;
      func_0x000107c61558(uVar7);
      uVar10 = *puVar8;
      *puVar8 = 0x8000000000000000;
      func_0x000100fdaeac(param_1,uVar1,uVar2,uVar7);
      func_0x000107c6142c(uVar2);
      *puVar8 = uVar10;
      (*pcVar6)(auStack_98,0);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1026fecb0; end: 1026fed37;  */

undefined8 FUN_1026fecb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1026fed38; end: 1026fed6b;  */

void FUN_1026fed38(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 1026fed6c; end: 1026fed8b;  */

void FUN_1026fed6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026fed8c; end: 1026fedbf;  */

void FUN_1026fed8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026fedc0; end: 1026fee23;  */

void FUN_1026fedc0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1026feecc;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  plVar7[5] = lVar5;
  plVar7[6] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[9] = lVar5;
  uVar6 = 0x112d45220;
  func_0x0001026feb74(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026fac2c,lVar4,uVar6);
  return;
}



/* Entry: 1026fee24; end: 1026fee93;  */

void FUN_1026fee24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026feed0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026fee94; end: 1026feee3;  */

void FUN_1026fee94(long param_1,long param_2)

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



/* Entry: 1026feee4; end: 1026fef0b;  */

void FUN_1026feee4(void)

{
  FUN_1026fef70();
  return;
}


