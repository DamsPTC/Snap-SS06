/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100032884; end: 10003290b;  */

void FUN_100032884(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000100038970();
  puVar1 = &UNK_10003d7c0;
  _swift_getKeyPath();
  puVar2 = puVar1;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar3 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  *(char *)(param_1 + 7) = (char)puVar2;
  param_1[8] = uVar3;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = 0x402c000000000000;
  param_1[3] = 0x48;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 10003290c; end: 10003296f;  */

void FUN_10003290c(void)

{
  undefined8 uVar1;
  undefined1 in_w3;
  undefined1 uStack_31;
  
  FUN_100030578();
  uVar1 = 0x1000513d8;
  uStack_31 = in_w3;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_31,uVar1);
  return;
}



/* Entry: 100032970; end: 10003299f;  */

void FUN_100032970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 1000329a0; end: 1000329ff;  */

void FUN_1000329a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_10004cf40)(param_5);
    return;
  }
  return;
}



/* Entry: 100032a00; end: 100032aab;  */

void FUN_100032a00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100030578(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10003290c(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2,param_1);
  return;
}



/* Entry: 100032aac; end: 100032ccb;  */

void FUN_100032aac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100052940 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052938;
  func_0x0001000118b8(0x100052938,&UNK_10003d840);
  uVar2 = uVar1;
  func_0x000100032b44();
  uVar3 = 0x100052978;
  func_0x000100033048(0x100052978,0x100052980,&UNK_10003d868,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_10004c1f8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052940 = puVar4;
  return;
}



/* Entry: 100032ccc; end: 100032dff;  */

void FUN_100032ccc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar2 = 0;
  FUN_100030578(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff)));
  uVar3 = 0x1000524b8;
  FUN_100010860(0x1000524b8,&UNK_10003d6a0);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar3);
  if ((int)puVar4 == 1) {
    lVar5 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
  }
  else {
    _swift_release(*puVar1);
  }
  lVar7 = (long)*(int *)(lVar2 + 0x24);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar5 = (long)puVar1 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar5,uVar3);
  if ((int)lVar5 == 1) {
    lVar5 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + lVar7,lVar5);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar7));
  }
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x28) + 8));
  _swift_unknownObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x2c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100032e00; end: 100032e07;  */

void FUN_100032e00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100030578(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10003290c(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2,1);
  return;
}



/* Entry: 100032e08; end: 100033113;  */

void FUN_100032e08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100052990 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052988;
  func_0x0001000118b8(0x100052988,&UNK_10003d870);
  uVar2 = uVar1;
  func_0x000100032ea0();
  uVar3 = 0x100052978;
  func_0x000100033048(0x100052978,0x100052980,&UNK_10003d868,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_10004c1f8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052990 = puVar4;
  return;
}



/* Entry: 100033114; end: 100033237;  */

void FUN_100033114(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = 0x1000528d8;
  func_0x0001000118b8(0x1000528d8,&UNK_10003d790);
  uVar5 = 0x100052760;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  uVar3 = 0xff;
  FUN_1000271d4(0xff,uVar4,uVar1);
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar5,uVar3,0,0);
  uVar5 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar4);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar5);
  uVar4 = 0xff;
  __s7SwiftUI6VStackVMa(0xff,uVar5,puVar6);
  uVar5 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar4);
  puVar6 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  uVar2 = 0x1000528e8;
  func_0x000100033048(0x1000528e8,0x1000528d8,&UNK_10003d790,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760);
  _swift_getWitnessTable(puVar6,uVar4);
  uStack_50 = uVar2;
  puStack_48 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar5,
             &uStack_50);
  return;
}



/* Entry: 100033238; end: 100033247;  */

void FUN_100033238(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar2 = 0;
  FUN_100030578(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff)));
  uVar3 = 0x1000524b8;
  FUN_100010860(0x1000524b8,&UNK_10003d6a0);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar3);
  if ((int)puVar4 == 1) {
    lVar5 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
  }
  else {
    _swift_release(*puVar1);
  }
  lVar7 = (long)*(int *)(lVar2 + 0x24);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar5 = (long)puVar1 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar5,uVar3);
  if ((int)lVar5 == 1) {
    lVar5 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + lVar7,lVar5);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar7));
  }
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x28) + 8));
  _swift_unknownObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x2c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100033248; end: 1000332af;  */

uint FUN_100033248(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2),uVar3,
             *(undefined8 *)(*(long *)(lVar1 + 8) + 8));
  (**(code **)(lVar1 + 0x30))(uVar3,lVar1);
  _swift_unknownObjectRelease(uVar2);
  return ((uint)uVar3 ^ 0xffffffff) & 1;
}



/* Entry: 1000332b0; end: 100033487;  */

void FUN_1000332b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_d8 [13];
  undefined8 *puVar5;
  
  lVar4 = param_6;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = lVar4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar4 = 0x1000529f8;
  FUN_100010860(0x1000529f8,&UNK_10003d8c8);
  uVar10 = *(undefined8 *)(param_6 + 0x10);
  uVar11 = *(undefined8 *)(param_6 + 0x18);
  puVar5 = unaff_x20;
  FUN_100033488((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  uVar3 = SUB81(puVar5,0);
  __s7SwiftUI4EdgeO3SetV3topAEvgZ();
  uVar9 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0x100052a00;
  FUN_100010860(0x100052a00,&UNK_10003d8d0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI15SafeAreaRegionsV8keyboardACvgZ();
  lVar6 = lVar4;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar7 = 0x100052a08;
  puVar8 = &UNK_10003d8d8;
  FUN_100010860();
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *plVar2 = lVar4;
  *(char *)(plVar2 + 1) = (char)lVar6;
  __s7SwiftUI9AlignmentV3topACvgZ();
  FUN_1000353b4(auStack_d8);
  lVar4 = 0x100052a10;
  FUN_100010860(0x100052a10,&UNK_10003d8e0);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar5 = auStack_d8[0];
  puVar5[1] = lVar7;
  puVar5[2] = puVar8;
  puVar8 = &UNK_10004eab8;
  _swift_allocObject(&UNK_10004eab8,0x88,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar10;
  *(undefined8 *)(puVar8 + 0x18) = uVar11;
  uVar10 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar11 = unaff_x20[10];
  *(undefined8 *)(puVar8 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar8 + 0x60) = uVar10;
  *(undefined8 *)(puVar8 + 0x78) = uVar9;
  *(undefined8 *)(puVar8 + 0x70) = uVar11;
  *(undefined8 *)(puVar8 + 0x80) = unaff_x20[0xc];
  uVar10 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar8 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar8 + 0x20) = uVar10;
  *(undefined8 *)(puVar8 + 0x38) = uVar9;
  *(undefined8 *)(puVar8 + 0x30) = uVar11;
  uVar9 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  *(undefined8 *)(puVar8 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar8 + 0x40) = uVar9;
  *(undefined8 *)(puVar8 + 0x58) = uVar11;
  *(undefined8 *)(puVar8 + 0x50) = uVar10;
  lVar4 = 0x100052a18;
  FUN_100010860(0x100052a18,&UNK_10003d8e8);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0x100035544;
  puVar5[3] = puVar8;
  (**(code **)(*(long *)(param_6 + -8) + 0x10))(auStack_d8);
  return;
}



/* Entry: 100033488; end: 100033ae7;  */

void FUN_100033488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,ulong param_7,long param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong auStack_e0 [4];
  long *plStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  byte bStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puVar9;
  
  lVar11 = 0x100052af0;
  auStack_e0[3] = param_1;
  FUN_100010860(0x100052af0,&UNK_10003d9c0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar18 = (long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_e0[1] = lVar18;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar18 = lVar18 - extraout_x12;
  lVar11 = 0x100052af8;
  FUN_100010860(0x100052af8,&UNK_10003d9c8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar17 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar11 = 0x100052b00;
  lStack_b0 = lVar17 - extraout_x12_00;
  FUN_100010860(0x100052b00,&UNK_10003d9d0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar14 = (lVar17 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar11 = 0x100052b08;
  puStack_b8 = (ulong *)(uVar14 - extraout_x12_01);
  FUN_100010860(0x100052b08,&UNK_10003d9d8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar15 = (long)(uVar14 - extraout_x12_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  auStack_e0[2] = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  plVar16 = (long *)(lVar15 - extraout_x12_02);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar16 = lVar11;
  plVar16[1] = 0;
  *(undefined1 *)(plVar16 + 2) = 0;
  lVar11 = 0x100052b10;
  FUN_100010860(0x100052b10,&UNK_10003d9e0);
  plStack_c0 = plVar16;
  FUN_100033ae8((long)plVar16 + (long)*(int *)(lVar11 + 0x2c),param_6,param_7,param_8);
  uStack_88 = param_6[4];
  uVar12 = param_6[3];
  uStack_98 = param_6[4];
  uStack_a0 = param_6[3];
  uVar7 = 0x1000513d8;
  uStack_90 = uVar12;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(&bStack_a1);
  if ((bStack_a1 & 1) == 0) {
    uVar8 = 0;
    func_0x0001000359b8(0,param_7,param_8);
    FUN_100033248();
    if ((uVar8 & 1) != 0) {
      __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
      puVar10 = puStack_b8;
      *puStack_b8 = uVar8;
      puVar10[1] = 0;
      *(undefined1 *)(puVar10 + 2) = 0;
      lVar11 = 0x100052b38;
      FUN_100010860(0x100052b38,&UNK_10003da08);
      puVar9 = param_6;
      func_0x000100034aa8((long)puVar10 + (long)*(int *)(lVar11 + 0x2c),param_6,param_7,param_8);
      uVar6 = SUB81(puVar9,0);
      __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
      uVar19 = 0x4018000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      lVar11 = 0x100052b18;
      FUN_100010860(0x100052b18,&UNK_10003d9e8);
      puVar1 = (undefined1 *)((long)puVar10 + (long)*(int *)(lVar11 + 0x24));
      *puVar1 = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar19;
      *(undefined8 *)(puVar1 + 0x10) = uVar12;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      *(undefined8 *)(puVar1 + 0x20) = param_5;
      puVar1[0x28] = 0;
      pcVar13 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
      uVar12 = 0;
      goto LAB_10003379c;
    }
  }
  lVar11 = 0x100052b18;
  FUN_100010860(0x100052b18,&UNK_10003d9e8);
  pcVar13 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
  uVar12 = 1;
  puVar10 = puStack_b8;
LAB_10003379c:
  (*pcVar13)(puVar10,uVar12,1,lVar11);
  uStack_98 = uStack_88;
  uStack_a0 = uStack_90;
  __s7SwiftUI5StateV12wrappedValuexvg(&bStack_a1,uVar7);
  if (bStack_a1 == 1) {
    lVar11 = 0;
    func_0x0001000359b8(0,param_7,param_8);
    lVar5 = lStack_b0;
    FUN_100035144(lStack_b0);
    lVar15 = 0x100052b20;
    FUN_100010860(0x100052b20,&UNK_10003d9f0);
    (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar5,0,1,lVar15);
  }
  else {
    lVar11 = 0x100052b20;
    FUN_100010860(0x100052b20,&UNK_10003d9f0);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lStack_b0,1,1,lVar11);
    lVar11 = 0;
    func_0x0001000359b8(0,param_7,param_8);
  }
  uVar7 = *param_6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar7,param_6[1],*(undefined1 *)(param_6 + 2),*(undefined8 *)(lVar11 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x18) + 8) + 8));
  (**(code **)(param_8 + 0x30))(param_7,param_8);
  _swift_unknownObjectRelease(uVar7);
  bVar2 = (param_7 & 1) == 0;
  if (!bVar2) {
    FUN_1000351a4(lVar18,lVar11);
  }
  lVar11 = 0x100052b28;
  FUN_100010860(0x100052b28,&UNK_10003d9f8);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar18,bVar2,1,lVar11);
  uVar3 = auStack_e0[2];
  FUN_100037e34(plStack_c0,auStack_e0[2],0x100052b08,&UNK_10003d9d8);
  puVar10 = puStack_b8;
  FUN_100037e34(puStack_b8,uVar14,0x100052b00,&UNK_10003d9d0);
  lVar15 = lStack_b0;
  FUN_100037e34(lStack_b0,lVar17,0x100052af8,&UNK_10003d9c8);
  uVar8 = auStack_e0[1];
  auStack_e0[0] = uVar14;
  FUN_100037e34(lVar18,auStack_e0[1],0x100052af0,&UNK_10003d9c0);
  uVar4 = auStack_e0[3];
  FUN_100037e34(uVar3,auStack_e0[3],0x100052b08,&UNK_10003d9d8);
  lVar11 = 0x100052b30;
  FUN_100010860(0x100052b30,&UNK_10003da00);
  FUN_100037e34(uVar14,uVar4 + (long)*(int *)(lVar11 + 0x30),0x100052b00,&UNK_10003d9d0);
  FUN_100037e34(lVar17,uVar4 + (long)*(int *)(lVar11 + 0x40),0x100052af8,&UNK_10003d9c8);
  FUN_100037e34(uVar8,uVar4 + (long)*(int *)(lVar11 + 0x50),0x100052af0,&UNK_10003d9c0);
  func_0x000100037efc(lVar18,0x100052af0,&UNK_10003d9c0);
  func_0x000100037efc(lVar15,0x100052af8,&UNK_10003d9c8);
  func_0x000100037efc(puVar10,0x100052b00,&UNK_10003d9d0);
  func_0x000100037efc(plStack_c0,0x100052b08,&UNK_10003d9d8);
  func_0x000100037efc(uVar8,0x100052af0,&UNK_10003d9c0);
  func_0x000100037efc(lVar17,0x100052af8,&UNK_10003d9c8);
  func_0x000100037efc(auStack_e0[0],0x100052b00,&UNK_10003d9d0);
  func_0x000100037efc(uVar3,0x100052b08,&UNK_10003d9d8);
  return;
}



/* Entry: 100033ae8; end: 10003446b;  */

void FUN_100033ae8(long param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x12;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 in_b2;
  undefined1 in_register_00005041;
  undefined1 in_register_00005042;
  undefined1 in_register_00005043;
  undefined1 in_register_00005044;
  undefined1 in_register_00005045;
  undefined1 in_register_00005046;
  undefined1 in_register_00005047;
  undefined8 in_d3;
  undefined8 auStack_3a0 [2];
  undefined1 auStack_390 [8];
  long alStack_388 [11];
  undefined1 auStack_330 [12];
  uint uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  byte bStack_280;
  undefined7 uStack_27f;
  ulong uStack_278;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar7 = 0;
  lStack_2d0 = param_1;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puStack_2c8 = auStack_330 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar20 = (long)(auStack_330 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar7 = 0;
  lStack_2d8 = lVar20;
  func_0x0001000359b8(0,param_3,param_4);
  uVar22 = *param_2;
  uVar24 = param_2[1];
  uVar6 = *(undefined1 *)(param_2 + 2);
  uStack_2a8 = *(undefined8 *)(lVar7 + 0x10);
  uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x18) + 8) + 8);
  uVar8 = uVar22;
  lStack_2a0 = lVar7;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar22,uVar24,uVar6);
  lStack_298 = *(long *)(param_4 + 8);
  pcStack_2e0 = *(code **)(lStack_298 + 0x10);
  uVar9 = param_3;
  lStack_2b0 = param_4;
  (*pcStack_2e0)();
  _swift_unknownObjectRelease(uVar8);
  uStack_2c0 = uVar19;
  uStack_2b8 = param_3;
  if ((uVar9 & 1) == 0) {
    in_b2 = 0;
    in_register_00005041 = 0;
    in_register_00005042 = 0;
    in_register_00005043 = 0;
    in_register_00005044 = 0;
    in_register_00005045 = 0;
    in_register_00005046 = 0;
    in_register_00005047 = 0;
    in_d3 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    puStack_f8 = (undefined *)0x0;
    pcStack_100 = (code *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    puStack_118 = (undefined *)0x0;
    pcStack_120 = (code *)0x0;
    puStack_108 = (undefined *)0x0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    lVar7 = lStack_2b0;
    uVar8 = uStack_2a8;
  }
  else {
    __s7SwiftUI11StateObjectV14projectedValueAA08ObservedD0V7WrapperVyx_Gvg
              (uVar22,uVar24,uVar6,uStack_2a8,uVar19);
    lVar7 = lStack_2b0;
    lStack_168 = lStack_2b0;
    puVar10 = &UNK_10003db10;
    uStack_170 = param_3;
    _swift_getKeyPath(&UNK_10003db10,&uStack_170);
    __s7SwiftUI14ObservedObjectV7WrapperV13dynamicMemberAA7BindingVyqd__Gs24ReferenceWritableKeyPathCyxqd__G_tcluig
              (&uStack_290);
    _swift_unknownObjectRelease(uVar22);
    _swift_release(puVar10);
    uStack_2e8 = uStack_288;
    uStack_2f0 = uStack_290;
    pcStack_2f8 = (code *)CONCAT71(uStack_27f,bStack_280);
    uStack_300 = uStack_278;
    uStack_178 = param_2[4];
    uStack_180 = param_2[3];
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV14projectedValueAA7BindingVyxGvg(&uStack_170);
    lStack_310 = lStack_168;
    uStack_308 = uStack_170;
    uStack_318 = CONCAT44(uStack_318._4_4_,(uint)(byte)uStack_160);
    puVar10 = &UNK_10004ed68;
    _swift_allocObject(&UNK_10004ed68,0x88,7);
    *(ulong *)(puVar10 + 0x10) = param_3;
    *(long *)(puVar10 + 0x18) = lVar7;
    uVar22 = param_2[8];
    uVar19 = param_2[0xb];
    uVar24 = param_2[10];
    *(undefined8 *)(puVar10 + 0x68) = param_2[9];
    *(undefined8 *)(puVar10 + 0x60) = uVar22;
    *(undefined8 *)(puVar10 + 0x78) = uVar19;
    *(undefined8 *)(puVar10 + 0x70) = uVar24;
    *(undefined8 *)(puVar10 + 0x80) = param_2[0xc];
    uVar22 = *param_2;
    uVar19 = param_2[3];
    uVar24 = param_2[2];
    *(undefined8 *)(puVar10 + 0x28) = param_2[1];
    *(undefined8 *)(puVar10 + 0x20) = uVar22;
    *(undefined8 *)(puVar10 + 0x38) = uVar19;
    *(undefined8 *)(puVar10 + 0x30) = uVar24;
    uVar19 = param_2[4];
    uVar24 = param_2[7];
    uVar22 = param_2[6];
    *(undefined8 *)(puVar10 + 0x48) = param_2[5];
    *(undefined8 *)(puVar10 + 0x40) = uVar19;
    *(undefined8 *)(puVar10 + 0x58) = uVar24;
    *(undefined8 *)(puVar10 + 0x50) = uVar22;
    puVar11 = &UNK_10004ed90;
    _swift_allocObject(&UNK_10004ed90,0x88,7);
    *(ulong *)(puVar11 + 0x10) = param_3;
    *(long *)(puVar11 + 0x18) = lVar7;
    uVar22 = param_2[8];
    uVar19 = param_2[0xb];
    uVar24 = param_2[10];
    *(undefined8 *)(puVar11 + 0x68) = param_2[9];
    *(undefined8 *)(puVar11 + 0x60) = uVar22;
    *(undefined8 *)(puVar11 + 0x78) = uVar19;
    *(undefined8 *)(puVar11 + 0x70) = uVar24;
    *(undefined8 *)(puVar11 + 0x80) = param_2[0xc];
    uVar22 = *param_2;
    uVar19 = param_2[3];
    uVar24 = param_2[2];
    *(undefined8 *)(puVar11 + 0x28) = param_2[1];
    *(undefined8 *)(puVar11 + 0x20) = uVar22;
    *(undefined8 *)(puVar11 + 0x38) = uVar19;
    *(undefined8 *)(puVar11 + 0x30) = uVar24;
    uVar19 = param_2[4];
    uVar24 = param_2[7];
    uVar22 = param_2[6];
    *(undefined8 *)(puVar11 + 0x48) = param_2[5];
    *(undefined8 *)(puVar11 + 0x40) = uVar19;
    *(undefined8 *)(puVar11 + 0x58) = uVar24;
    *(undefined8 *)(puVar11 + 0x50) = uVar22;
    puVar12 = &UNK_10004edb8;
    _swift_allocObject(&UNK_10004edb8,0x88,7);
    lVar14 = lStack_2a0;
    *(ulong *)(puVar12 + 0x10) = param_3;
    *(long *)(puVar12 + 0x18) = lVar7;
    uVar22 = param_2[8];
    uVar19 = param_2[0xb];
    uVar24 = param_2[10];
    *(undefined8 *)(puVar12 + 0x68) = param_2[9];
    *(undefined8 *)(puVar12 + 0x60) = uVar22;
    *(undefined8 *)(puVar12 + 0x78) = uVar19;
    *(undefined8 *)(puVar12 + 0x70) = uVar24;
    *(undefined8 *)(puVar12 + 0x80) = param_2[0xc];
    uVar22 = *param_2;
    uVar19 = param_2[3];
    uVar24 = param_2[2];
    *(undefined8 *)(puVar12 + 0x28) = param_2[1];
    *(undefined8 *)(puVar12 + 0x20) = uVar22;
    *(undefined8 *)(puVar12 + 0x38) = uVar19;
    *(undefined8 *)(puVar12 + 0x30) = uVar24;
    uVar25 = param_2[4];
    uVar24 = param_2[7];
    uVar22 = param_2[6];
    *(undefined8 *)(puVar12 + 0x48) = param_2[5];
    *(undefined8 *)(puVar12 + 0x40) = uVar25;
    *(undefined8 *)(puVar12 + 0x58) = uVar24;
    *(undefined8 *)(puVar12 + 0x50) = uVar22;
    pcVar21 = *(code **)(*(long *)(lStack_2a0 + -8) + 0x10);
    (*pcVar21)(&uStack_170,param_2,lStack_2a0);
    (*pcVar21)(&uStack_170,param_2,lVar14);
    (*pcVar21)(&uStack_170,param_2,lVar14);
    uVar8 = uStack_2a8;
    uVar19 = uStack_2c0;
    uVar22 = *param_2;
    __s7SwiftUI11StateObjectV12wrappedValuexvg
              (uVar22,param_2[1],*(undefined1 *)(param_2 + 2),uStack_2a8,uStack_2c0);
    param_3 = uStack_2b8;
    uVar5 = (undefined1)uVar22;
    (**(code **)(lStack_298 + 0x60))(&uStack_f0,uStack_2b8);
    _swift_unknownObjectRelease();
    uStack_170 = CONCAT71(uStack_170._1_7_,1);
    uStack_160 = uStack_2e8;
    lStack_168 = uStack_2f0;
    uStack_158 = pcStack_2f8;
    uStack_150 = uStack_300;
    uStack_148 = uStack_308;
    lStack_140 = lStack_310;
    uStack_138 = CONCAT71(uStack_138._1_7_,(char)uStack_318);
    uStack_128 = 0;
    uStack_130 = 0;
    pcStack_120 = FUN_100037f3c;
    uStack_110 = 0x100037f48;
    pcStack_100 = FUN_100037fb4;
    puStack_118 = puVar10;
    puStack_108 = puVar11;
    puStack_f8 = puVar12;
    __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
    uVar22 = 0x4018000000000000;
    uVar6 = uVar5;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    uStack_c8 = CONCAT71(uStack_c8._1_7_,uVar5);
    uStack_b0 = CONCAT17(in_register_00005047,
                         CONCAT16(in_register_00005046,
                                  CONCAT15(in_register_00005045,
                                           CONCAT14(in_register_00005044,
                                                    CONCAT13(in_register_00005043,
                                                             CONCAT12(in_register_00005042,
                                                                      CONCAT11(in_register_00005041,
                                                                               in_b2)))))));
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    uStack_c0 = uVar22;
    uStack_b8 = uVar25;
    uStack_a8 = in_d3;
    __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
    uVar23 = 0x4020000000000000;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    uStack_98 = CONCAT71(uStack_98._1_7_,uVar6);
    uVar22 = *param_2;
    uVar24 = param_2[1];
    uVar6 = *(undefined1 *)(param_2 + 2);
    uStack_90 = uVar23;
    uStack_88 = uVar25;
  }
  uStack_80 = CONCAT17(in_register_00005047,
                       CONCAT16(in_register_00005046,
                                CONCAT15(in_register_00005045,
                                         CONCAT14(in_register_00005044,
                                                  CONCAT13(in_register_00005043,
                                                           CONCAT12(in_register_00005042,
                                                                    CONCAT11(in_register_00005041,
                                                                             in_b2)))))));
  uStack_70 = 0;
  uStack_78 = in_d3;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar22,uVar24,uVar6,uVar8,uVar19);
  uVar9 = param_3;
  (*pcStack_2e0)(param_3,lStack_298);
  pcStack_2e0 = (code *)CONCAT44(pcStack_2e0._4_4_,(int)uVar9);
  _swift_unknownObjectRelease(uVar22);
  lVar14 = lStack_2a0;
  lVar13 = lStack_2a0;
  FUN_100033248();
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)lVar13);
  puVar10 = &UNK_10004eca0;
  _swift_allocObject(&UNK_10004eca0,0x88,7);
  *(ulong *)(puVar10 + 0x10) = param_3;
  *(long *)(puVar10 + 0x18) = lVar7;
  uVar22 = param_2[8];
  uVar23 = param_2[0xb];
  uVar24 = param_2[10];
  *(undefined8 *)(puVar10 + 0x68) = param_2[9];
  *(undefined8 *)(puVar10 + 0x60) = uVar22;
  *(undefined8 *)(puVar10 + 0x78) = uVar23;
  *(undefined8 *)(puVar10 + 0x70) = uVar24;
  *(undefined8 *)(puVar10 + 0x80) = param_2[0xc];
  uVar22 = *param_2;
  uVar23 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar10 + 0x28) = param_2[1];
  *(undefined8 *)(puVar10 + 0x20) = uVar22;
  *(undefined8 *)(puVar10 + 0x38) = uVar23;
  *(undefined8 *)(puVar10 + 0x30) = uVar24;
  uVar23 = param_2[4];
  uVar24 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar10 + 0x48) = param_2[5];
  *(undefined8 *)(puVar10 + 0x40) = uVar23;
  *(undefined8 *)(puVar10 + 0x58) = uVar24;
  *(undefined8 *)(puVar10 + 0x50) = uVar22;
  pcStack_2f8 = *(code **)(*(long *)(lVar14 + -8) + 0x10);
  (*pcStack_2f8)(&uStack_290,param_2,lVar14);
  uVar22 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar22,param_2[1],*(undefined1 *)(param_2 + 2),uVar8,uVar19);
  (**(code **)(lVar7 + 0x10))(param_3,lVar7);
  _swift_unknownObjectRelease(uVar22);
  if ((param_3 & 1) != 0) {
    uStack_288 = param_2[4];
    uStack_290 = param_2[3];
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvg(&uStack_180);
    if ((uStack_180 & 1) == 0) {
      FUN_100033248();
      uStack_300 = CONCAT44(uStack_300._4_4_,(int)lVar14);
      goto LAB_100033fe4;
    }
  }
  uStack_300 = uStack_300 & 0xffffffff00000000;
LAB_100033fe4:
  lVar7 = lStack_2b0;
  uVar22 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar22,param_2[1],*(undefined1 *)(param_2 + 2),uVar8,uVar19);
  uVar9 = uStack_2b8;
  uVar15 = uStack_2b8;
  lVar14 = lVar7;
  (**(code **)(lVar7 + 0x18))();
  lStack_310 = lVar14;
  uStack_308 = uVar15;
  _swift_unknownObjectRelease(uVar22);
  uStack_178 = param_2[4];
  uStack_180 = param_2[3];
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV14projectedValueAA7BindingVyxGvg(&uStack_290);
  uStack_320 = uStack_288;
  uStack_318 = uStack_290;
  uStack_324 = (uint)bStack_280;
  puVar11 = &UNK_10004ecc8;
  _swift_allocObject(&UNK_10004ecc8,0x88,7);
  *(ulong *)(puVar11 + 0x10) = uVar9;
  *(long *)(puVar11 + 0x18) = lVar7;
  uVar22 = param_2[8];
  uVar19 = param_2[0xb];
  uVar24 = param_2[10];
  *(undefined8 *)(puVar11 + 0x68) = param_2[9];
  *(undefined8 *)(puVar11 + 0x60) = uVar22;
  *(undefined8 *)(puVar11 + 0x78) = uVar19;
  *(undefined8 *)(puVar11 + 0x70) = uVar24;
  *(undefined8 *)(puVar11 + 0x80) = param_2[0xc];
  uVar22 = *param_2;
  uVar19 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar11 + 0x28) = param_2[1];
  *(undefined8 *)(puVar11 + 0x20) = uVar22;
  *(undefined8 *)(puVar11 + 0x38) = uVar19;
  *(undefined8 *)(puVar11 + 0x30) = uVar24;
  uVar19 = param_2[4];
  uVar24 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar11 + 0x48) = param_2[5];
  *(undefined8 *)(puVar11 + 0x40) = uVar19;
  *(undefined8 *)(puVar11 + 0x58) = uVar24;
  *(undefined8 *)(puVar11 + 0x50) = uVar22;
  puVar12 = &UNK_10004ecf0;
  _swift_allocObject(&UNK_10004ecf0,0x88,7);
  *(ulong *)(puVar12 + 0x10) = uVar9;
  *(long *)(puVar12 + 0x18) = lVar7;
  uVar22 = param_2[8];
  uVar19 = param_2[0xb];
  uVar24 = param_2[10];
  *(undefined8 *)(puVar12 + 0x68) = param_2[9];
  *(undefined8 *)(puVar12 + 0x60) = uVar22;
  *(undefined8 *)(puVar12 + 0x78) = uVar19;
  *(undefined8 *)(puVar12 + 0x70) = uVar24;
  *(undefined8 *)(puVar12 + 0x80) = param_2[0xc];
  uVar22 = *param_2;
  uVar19 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar12 + 0x28) = param_2[1];
  *(undefined8 *)(puVar12 + 0x20) = uVar22;
  *(undefined8 *)(puVar12 + 0x38) = uVar19;
  *(undefined8 *)(puVar12 + 0x30) = uVar24;
  uVar19 = param_2[4];
  uVar24 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar12 + 0x48) = param_2[5];
  *(undefined8 *)(puVar12 + 0x40) = uVar19;
  *(undefined8 *)(puVar12 + 0x58) = uVar24;
  *(undefined8 *)(puVar12 + 0x50) = uVar22;
  puVar16 = &UNK_10004ed18;
  _swift_allocObject(&UNK_10004ed18,0x88,7);
  *(ulong *)(puVar16 + 0x10) = uVar9;
  *(long *)(puVar16 + 0x18) = lVar7;
  uVar22 = param_2[8];
  uVar19 = param_2[0xb];
  uVar24 = param_2[10];
  *(undefined8 *)(puVar16 + 0x68) = param_2[9];
  *(undefined8 *)(puVar16 + 0x60) = uVar22;
  *(undefined8 *)(puVar16 + 0x78) = uVar19;
  *(undefined8 *)(puVar16 + 0x70) = uVar24;
  *(undefined8 *)(puVar16 + 0x80) = param_2[0xc];
  uVar22 = *param_2;
  uVar19 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar16 + 0x28) = param_2[1];
  *(undefined8 *)(puVar16 + 0x20) = uVar22;
  *(undefined8 *)(puVar16 + 0x38) = uVar19;
  *(undefined8 *)(puVar16 + 0x30) = uVar24;
  uVar19 = param_2[4];
  uVar24 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar16 + 0x48) = param_2[5];
  *(undefined8 *)(puVar16 + 0x40) = uVar19;
  *(undefined8 *)(puVar16 + 0x58) = uVar24;
  *(undefined8 *)(puVar16 + 0x50) = uVar22;
  puVar17 = &UNK_10004ed40;
  _swift_allocObject(&UNK_10004ed40,0x88,7);
  lVar14 = lStack_2a0;
  pcVar21 = pcStack_2f8;
  *(ulong *)(puVar17 + 0x10) = uVar9;
  *(long *)(puVar17 + 0x18) = lVar7;
  uVar22 = param_2[8];
  uVar19 = param_2[0xb];
  uVar24 = param_2[10];
  *(undefined8 *)(puVar17 + 0x68) = param_2[9];
  *(undefined8 *)(puVar17 + 0x60) = uVar22;
  *(undefined8 *)(puVar17 + 0x78) = uVar19;
  *(undefined8 *)(puVar17 + 0x70) = uVar24;
  *(undefined8 *)(puVar17 + 0x80) = param_2[0xc];
  uVar22 = *param_2;
  uVar19 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar17 + 0x28) = param_2[1];
  *(undefined8 *)(puVar17 + 0x20) = uVar22;
  *(undefined8 *)(puVar17 + 0x38) = uVar19;
  *(undefined8 *)(puVar17 + 0x30) = uVar24;
  uVar19 = param_2[4];
  uVar24 = param_2[7];
  uVar22 = param_2[6];
  *(undefined8 *)(puVar17 + 0x48) = param_2[5];
  *(undefined8 *)(puVar17 + 0x40) = uVar19;
  *(undefined8 *)(puVar17 + 0x58) = uVar24;
  *(undefined8 *)(puVar17 + 0x50) = uVar22;
  (*pcStack_2f8)(&uStack_290,param_2,lStack_2a0);
  (*pcVar21)(&uStack_290,param_2,lVar14);
  (*pcVar21)(&uStack_290,param_2,lVar14);
  (*pcVar21)(&uStack_290,param_2,lVar14);
  puVar18 = (undefined8 *)*param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (puVar18,param_2[1],*(undefined1 *)(param_2 + 2),uStack_2a8,uStack_2c0);
  (**(code **)(lStack_298 + 0x60))(&uStack_290,uVar9);
  _swift_unknownObjectRelease();
  __s23ExtensionsStickerPicker7PillTagO09suggestedD4TagsSayACGvau();
  uVar22 = *puVar18;
  *(undefined **)(lVar20 + -0x18) = puVar17;
  *(undefined8 **)(lVar20 + -0x10) = &uStack_290;
  *(undefined **)(lVar20 + -0x28) = puVar16;
  *(undefined8 *)(lVar20 + -0x20) = 0x100037e28;
  *(undefined **)(lVar20 + -0x38) = puVar12;
  *(undefined8 *)(lVar20 + -0x30) = 0x100037e1c;
  *(undefined **)(lVar20 + -0x48) = puVar11;
  *(undefined8 *)(lVar20 + -0x40) = 0x100037e10;
  uVar3 = (uint)pcStack_2e0 ^ 0xffffffff;
  uVar1 = (uint)uStack_2f0 & 1;
  uVar2 = (uint)uStack_300 & 1;
  *(undefined8 *)(lVar20 + -0x58) = uVar22;
  *(undefined8 *)(lVar20 + -0x50) = 0x100037e04;
  *(char *)(lVar20 + -0x60) = (char)uStack_324;
  *(undefined8 *)(lVar20 + -0x68) = uStack_320;
  *(undefined8 *)(lVar20 + -0x70) = uStack_318;
  lVar20 = lStack_2d8;
  __s23ExtensionsStickerPicker12PillTagsViewV13extensionType16showSearchButton0i12HostKeyboardK005onTaplM00im6SwitchK00N22AdvanceToNextInputMode18isTextFieldFocused4tags0V8Selected0noJ00nO7Recents0nO3Tag15stringsProviderAcA09ExtensionH0O_S2byycSgSbAS7SwiftUI7BindingVySbGSayAA0D3TagOGSbAYSgcyycyycyAYcAA0bC16StringsProviding_ptcfC
            (lStack_2d8,1,uVar3 & 1,uVar1,0x100037df8,puVar10,uVar2,uStack_308,lStack_310);
  FUN_100037e34(&uStack_170,&uStack_290,0x100052c60,&UNK_10003db88);
  puVar4 = puStack_2c8;
  puVar10 = PTR___s23ExtensionsStickerPicker12PillTagsViewVMa_10004ca90;
  func_0x000100037e7c(lVar20,puStack_2c8,PTR___s23ExtensionsStickerPicker12PillTagsViewVMa_10004ca90
                     );
  lVar14 = lStack_2d0;
  FUN_100037e34(&uStack_290,lStack_2d0,0x100052c60,&UNK_10003db88);
  lVar7 = 0x100052c68;
  FUN_100010860(0x100052c68,&UNK_10003db90);
  func_0x000100037e7c(puVar4,lVar14 + *(int *)(lVar7 + 0x30),puVar10);
  _swift_bridgeObjectRetain(uVar22);
  func_0x000100037ec0(lVar20);
  func_0x000100037efc(&uStack_170,0x100052c60,&UNK_10003db88);
  func_0x000100037ec0(puVar4);
  func_0x000100037efc(&uStack_290,0x100052c60,&UNK_10003db88);
  return;
}



/* Entry: 10003446c; end: 10003457b;  */

void FUN_10003446c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001000359b8();
  uVar2 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_3 + 8) + 0x70))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(uVar2);
  return;
}



/* Entry: 10003457c; end: 100034683;  */

void FUN_10003457c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x0001000359b8();
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8);
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar5 = uVar6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(*(long *)(param_3 + 8) + 0x78))(0,param_2);
  _swift_unknownObjectRelease(uVar5);
  uStack_68 = param_1[4];
  uStack_70 = param_1[3];
  uStack_71 = 0;
  uVar5 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_71,uVar5);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(param_3 + 0x38))(1,param_2,param_3);
  _swift_unknownObjectRelease(uVar6);
  return;
}



/* Entry: 100034684; end: 100034707;  */

uint FUN_100034684(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001000359b8(0,param_3,param_4);
  uVar2 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_4 + 8) + 0x88))(param_1,param_3);
  _swift_unknownObjectRelease(uVar2);
  return (uint)param_1 & 1;
}



/* Entry: 100034708; end: 100035143;  */

void FUN_100034708(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x0001000359b8();
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8);
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar5 = uVar6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(param_3 + 0x38))(0,param_2,param_3);
  _swift_unknownObjectRelease(uVar5);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(*(long *)(param_3 + 8) + 0x18))(1,param_2);
  _swift_unknownObjectRelease(uVar6);
  uStack_68 = param_1[4];
  uStack_70 = param_1[3];
  uStack_71 = 1;
  uVar6 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_71,uVar6);
  return;
}



/* Entry: 100035144; end: 1000351a3;  */

void FUN_100035144(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar1 = 0x100052c50;
  FUN_100010860(0x100052c50,&UNK_10003db08);
  FUN_1000371e8((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 1000351a4; end: 1000353b3;  */

void FUN_1000351a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_d8 [104];
  
  uVar10 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 8) + 8);
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  uVar12 = uVar10;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar10,uVar5,uVar1,uVar11,uVar9);
  uVar3 = uVar11;
  (**(code **)(lVar7 + 0x28))(uVar11,lVar7);
  _swift_unknownObjectRelease(uVar12);
  uVar12 = uVar10;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar10,uVar5,uVar1,uVar11,uVar9);
  (**(code **)(lVar7 + 0x20))(uVar11,lVar7);
  _swift_unknownObjectRelease(uVar12);
  uVar12 = uVar10;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar10,uVar5,uVar1,uVar11,uVar9);
  uVar4 = uVar11;
  (**(code **)(lVar7 + 0x10))(uVar11,lVar7);
  _swift_unknownObjectRelease(uVar12);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar10,uVar5,uVar1,uVar11,uVar9);
  uVar5 = uVar11;
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x18))();
  _swift_unknownObjectRelease(uVar10);
  puVar6 = &UNK_10004ec78;
  _swift_allocObject(&UNK_10004ec78,0x88,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(long *)(puVar6 + 0x18) = lVar7;
  uVar10 = unaff_x20[8];
  uVar12 = unaff_x20[0xb];
  uVar11 = unaff_x20[10];
  *(undefined8 *)(puVar6 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar6 + 0x60) = uVar10;
  *(undefined8 *)(puVar6 + 0x78) = uVar12;
  *(undefined8 *)(puVar6 + 0x70) = uVar11;
  *(undefined8 *)(puVar6 + 0x80) = unaff_x20[0xc];
  uVar10 = *unaff_x20;
  uVar12 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(undefined8 *)(puVar6 + 0x38) = uVar12;
  *(undefined8 *)(puVar6 + 0x30) = uVar11;
  uVar12 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar12;
  *(undefined8 *)(puVar6 + 0x58) = uVar11;
  *(undefined8 *)(puVar6 + 0x50) = uVar10;
  *param_1 = uVar3;
  param_1[1] = param_2;
  *(byte *)(param_1 + 2) = (byte)uVar4 & 1;
  param_1[3] = uVar5;
  param_1[4] = lVar8;
  param_1[5] = 0x100037dec;
  param_1[6] = puVar6;
  lVar7 = 0x100052b28;
  FUN_100010860(0x100052b28,&UNK_10003d9f8);
  iVar2 = *(int *)(lVar7 + 0x34);
  puVar6 = &UNK_10003db50;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar2) = puVar6;
  uVar10 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar2,uVar10,0);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(auStack_d8);
  return;
}



/* Entry: 1000353b4; end: 10003541f;  */

void FUN_1000353b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char cStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x48);
  uStack_30 = *(undefined8 *)(param_2 + 0x40);
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(&cStack_31);
  if (cStack_31 == '\x01') {
    uVar1 = 0;
    __s7SwiftUI13AnyTransitionV4move4edgeAcA4EdgeO_tFZ();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 100035420; end: 10003552b;  */

void FUN_100035420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  FUN_100037e34(&uStack_38,&lStack_58,0x1000525d8,&UNK_10003d310);
  FUN_100037e34(&uStack_40,&lStack_58,0x100052ae0,&UNK_10003d9a8);
  uVar3 = 0x100052ae8;
  FUN_100010860(0x100052ae8,&UNK_10003d9b0);
  __s7SwiftUI5StateV12wrappedValuexvg(&lStack_58);
  if (lStack_58 != 0) {
    __sScT6cancelyyF(lStack_58,PTR___sytN_10004cdf0 + 8,PTR___ss5NeverON_10004cdb0,
                     PTR___ss5NeverOs5ErrorsWP_10004cdb8);
    _swift_release(lStack_58);
  }
  lStack_58 = 0;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  __s7SwiftUI5StateV12wrappedValuexvs(&lStack_58,uVar3);
  func_0x000100037efc(&uStack_38,0x1000525d8,&UNK_10003d310);
  func_0x000100037efc(&uStack_40,0x100052ae0,&UNK_10003d9a8);
  return;
}



/* Entry: 10003552c; end: 10003554f;  */

void FUN_10003552c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_10004cf78)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_2);
  return;
}



/* Entry: 100035550; end: 100035583;  */

void FUN_100035550(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e648,1);
  return;
}



/* Entry: 100035584; end: 10003558f;  */

void FUN_100035584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100035590; end: 1000355d7;  */

void FUN_100035590(void)

{
  FUN_1000332b0();
  return;
}



/* Entry: 1000355d8; end: 1000355df;  */

void FUN_1000355d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003aca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_10004ce20)();
  return;
}



/* Entry: 1000355e0; end: 10003560b;  */

long FUN_1000355e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10003560c; end: 100035623;  */

void FUN_10003560c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010003aed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_10004cf80)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(param_2);
  return;
}



/* Entry: 100035624; end: 100035683;  */

void FUN_100035624(undefined8 *param_1)

{
  FUN_10003552c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_release(param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_release(param_1[7]);
  _swift_release(param_1[9]);
  _swift_release(param_1[10]);
  _swift_release(param_1[0xb]);
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(param_1[0xc]);
  return;
}



/* Entry: 100035684; end: 100035743;  */

undefined8 * FUN_100035684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar7 = *(undefined1 *)(param_2 + 2);
  FUN_10003560c(uVar1,uVar3,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = param_2[9];
  uVar5 = param_2[10];
  param_1[9] = uVar3;
  param_1[10] = uVar5;
  uVar2 = param_2[0xb];
  uVar6 = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar6;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Entry: 100035744; end: 100035863;  */

undefined8 * FUN_100035744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_10003560c(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_10003552c(uVar1,uVar3,uVar5);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar6);
  param_1[5] = param_2[5];
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar6 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[10];
  param_1[10] = param_2[10];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 100035864; end: 100035917;  */

undefined8 * FUN_100035864(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10003552c(uVar3,uVar4,uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_release(uVar3);
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(param_1[6]);
  uVar3 = param_1[7];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  _swift_release(uVar3);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  _swift_release(param_1[9]);
  uVar3 = param_1[10];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  _swift_release(uVar3);
  _swift_release(param_1[0xb]);
  uVar3 = param_1[0xc];
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 100035918; end: 1000359c7;  */

int FUN_100035918(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000359c8; end: 100035c9f;  */

void FUN_1000359c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100052aa0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052a18;
  func_0x0001000118b8(0x100052a18,&UNK_10003d8e8);
  uVar2 = uVar1;
  func_0x000100035a40();
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_10004c560;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052aa0 = puVar3;
  return;
}



/* Entry: 100035ca0; end: 100035e6b;  */

void FUN_100035ca0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  lVar3 = 0;
  lStack_a8 = param_1;
  uStack_98 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar8 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uStack_80 = param_4;
  lStack_78 = param_5;
  puStack_70 = param_3;
  __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar4 = 0x100052b98;
  FUN_100010860(0x100052b98,&UNK_10003da50);
  uVar5 = 0x100052ba0;
  FUN_100037970(0x100052ba0,0x100052b98,&UNK_10003da50,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868);
  lVar2 = lStack_a8;
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (lStack_a8,lVar3,0,FUN_10003618c,auStack_90,uVar4,uVar5);
  lVar3 = 0;
  func_0x0001000359b8(0,param_4,param_5);
  uVar4 = *param_3;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,param_3[1],*(undefined1 *)(param_3 + 2),*(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_5 + 8) + 0x68))();
  _swift_unknownObjectRelease(uVar4);
  lVar3 = lStack_a0;
  (**(code **)(lVar8 + 0x10))(auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),uStack_98,lStack_a0)
  ;
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &UNK_10004eb60;
  _swift_allocObject(&UNK_10004eb60,uVar10 + lVar9,uVar7 | 7);
  (**(code **)(lVar8 + 0x20))
            (puVar6 + uVar10,auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar3);
  lVar3 = 0x100052ba8;
  FUN_100010860(0x100052ba8,&UNK_10003da58);
  pbVar1 = (byte *)(lVar2 + *(int *)(lVar3 + 0x24));
  *pbVar1 = (byte)param_4 & 1;
  *(code **)(pbVar1 + 8) = FUN_100036b5c;
  *(undefined **)(pbVar1 + 0x10) = puVar6;
  return;
}



/* Entry: 100035e6c; end: 100035e77;  */

void FUN_100035e6c(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  lStack_a8 = param_1;
  uStack_98 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uStack_80 = uVar6;
  lStack_78 = lVar8;
  puStack_70 = (undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar4 = 0x100052b98;
  FUN_100010860(0x100052b98,&UNK_10003da50);
  uVar5 = 0x100052ba0;
  FUN_100037970(0x100052ba0,0x100052b98,&UNK_10003da50,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868);
  lVar2 = lStack_a8;
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (lStack_a8,lVar3,0,FUN_10003618c,auStack_90,uVar4,uVar5);
  lVar3 = 0;
  func_0x0001000359b8(0,uVar6,lVar8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(lVar8 + 8) + 0x68))();
  _swift_unknownObjectRelease(uVar4);
  lVar8 = lStack_a0;
  (**(code **)(lVar10 + 0x10))
            (auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),uStack_98,lStack_a0);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &UNK_10004eb60;
  _swift_allocObject(&UNK_10004eb60,uVar12 + lVar11,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))
            (puVar7 + uVar12,auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar8);
  lVar8 = 0x100052ba8;
  FUN_100010860(0x100052ba8,&UNK_10003da58);
  pbVar1 = (byte *)(lVar2 + *(int *)(lVar8 + 0x24));
  *pbVar1 = (byte)uVar6 & 1;
  *(code **)(pbVar1 + 8) = FUN_100036b5c;
  *(undefined **)(pbVar1 + 0x10) = puVar7;
  return;
}



/* Entry: 100035e78; end: 10003618b;  */

void FUN_100035e78(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 auStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = 0;
  uStack_230 = param_3;
  uStack_228 = param_4;
  __s7SwiftUI21PinnedScrollableViewsVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = (long)&uStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100052bb0;
  puVar8 = &UNK_10003da60;
  FUN_100010860(0x100052bb0,&UNK_10003da60);
  lStack_220 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_220 + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar11 = lVar10 - extraout_x12;
  __s7SwiftUI5ColorV5clearACvgZ();
  lVar4 = lVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_180,0,1,0x3ff0000000000000,0,lVar4,puVar8);
  lStack_148 = lStack_180;
  uStack_140 = uStack_178;
  lStack_138 = lStack_170;
  uStack_130 = uStack_168;
  lStack_128 = lStack_160;
  lStack_120 = lStack_158;
  lStack_118 = 0x706f74;
  lStack_110 = -0x1d00000000000000;
  lStack_100 = lStack_180;
  uStack_f8 = uStack_178;
  lStack_f0 = lStack_170;
  uStack_e8 = uStack_168;
  lStack_e0 = lStack_160;
  lStack_d8 = lStack_158;
  uStack_d0 = 0x706f74;
  uStack_c8 = 0xe300000000000000;
  lStack_150 = lVar3;
  lStack_108 = lVar3;
  FUN_100037e34(&lStack_150,&lStack_c0,0x100052bb8,&UNK_10003da68);
  func_0x000100037efc(&lStack_108,0x100052bb8,&UNK_10003da68);
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  lStack_b0 = uStack_230;
  lStack_a8 = uStack_228;
  uVar5 = uVar13;
  lStack_a0 = param_2;
  _swift_bridgeObjectRetain(uVar13);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uStack_1d0 = (ulong)uStack_1d0._4_4_ << 0x20;
  uVar6 = 0x100052bc0;
  FUN_100037da4(0x100052bc0,PTR___s7SwiftUI21PinnedScrollableViewsVMa_10004c4e8,
                PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_10004c4f0);
  __ss9OptionSetP8rawValuex03RawD0Qz_tcfCTj(lVar12,&uStack_1d0,lVar1,uVar6);
  uVar6 = 0x100052bc8;
  FUN_100010860(0x100052bc8,&UNK_10003da70);
  uVar7 = uVar6;
  FUN_100036c08();
  *(undefined8 *)(lVar11 + -0x10) = uVar7;
  __s7SwiftUI9LazyVGridV7columns9alignment7spacing11pinnedViews7contentACyxGSayAA8GridItemVG_AA19HorizontalAlignmentV12CoreGraphics7CGFloatVSgAA016PinnedScrollableI0VxyXEtcfC
            (lVar11,uVar13,uVar5,0x4020000000000000,0,lVar12,FUN_100036bfc,&lStack_c0,uVar6);
  lVar4 = lStack_220;
  lStack_1b0 = CONCAT71(uStack_12f,uStack_130);
  lStack_1a8 = lStack_128;
  lStack_198 = lStack_118;
  lStack_1a0 = lStack_120;
  lStack_190 = lStack_110;
  lStack_1c0 = CONCAT71(uStack_13f,uStack_140);
  lStack_1c8 = lStack_148;
  uStack_1d0 = lStack_150;
  lStack_1b8 = lStack_138;
  pcVar9 = *(code **)(lStack_220 + 0x10);
  (*pcVar9)(lVar10,lVar11,lVar2);
  lStack_98 = lStack_1a8;
  lStack_a0 = lStack_1b0;
  lStack_88 = lStack_198;
  lStack_90 = lStack_1a0;
  lStack_80 = lStack_190;
  lStack_b8 = lStack_1c8;
  lStack_c0 = uStack_1d0;
  lStack_a8 = lStack_1b8;
  lStack_b0 = lStack_1c0;
  param_1[5] = lStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = lStack_1a0;
  param_1[8] = lStack_190;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = lStack_1b8;
  param_1[2] = lStack_1c0;
  lVar3 = 0x100052c20;
  FUN_100010860(0x100052c20,&UNK_10003da98);
  (*pcVar9)((long)param_1 + (long)*(int *)(lVar3 + 0x30),lVar10,lVar2);
  FUN_100037e34(&lStack_c0,auStack_218,0x100052bb8,&UNK_10003da68);
  pcVar9 = *(code **)(lVar4 + 8);
  (*pcVar9)(lVar11,lVar2);
  (*pcVar9)(lVar10,lVar2);
  func_0x000100037efc(&uStack_1d0,0x100052bb8,&UNK_10003da68);
  return;
}



/* Entry: 10003618c; end: 100036197;  */

void FUN_10003618c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 auStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __s7SwiftUI21PinnedScrollableViewsVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = (long)&uStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100052bb0;
  puVar9 = &UNK_10003da60;
  FUN_100010860(0x100052bb0,&UNK_10003da60);
  lStack_220 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_220 + 0x40));
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar12 = lVar11 - extraout_x12;
  __s7SwiftUI5ColorV5clearACvgZ();
  lVar4 = lVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_180,0,1,0x3ff0000000000000,0,lVar4,puVar9);
  lStack_148 = lStack_180;
  uStack_140 = uStack_178;
  lStack_138 = lStack_170;
  uStack_130 = uStack_168;
  lStack_128 = lStack_160;
  lStack_120 = lStack_158;
  lStack_118 = 0x706f74;
  lStack_110 = -0x1d00000000000000;
  lStack_100 = lStack_180;
  uStack_f8 = uStack_178;
  lStack_f0 = lStack_170;
  uStack_e8 = uStack_168;
  lStack_e0 = lStack_160;
  lStack_d8 = lStack_158;
  uStack_d0 = 0x706f74;
  uStack_c8 = 0xe300000000000000;
  lStack_150 = lVar3;
  lStack_108 = lVar3;
  FUN_100037e34(&lStack_150,&lStack_c0,0x100052bb8,&UNK_10003da68);
  func_0x000100037efc(&lStack_108,0x100052bb8,&UNK_10003da68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  lStack_b0 = uStack_230;
  lStack_a8 = uStack_228;
  uVar5 = uVar14;
  lStack_a0 = lVar8;
  _swift_bridgeObjectRetain(uVar14);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uStack_1d0 = (ulong)uStack_1d0._4_4_ << 0x20;
  uVar6 = 0x100052bc0;
  FUN_100037da4(0x100052bc0,PTR___s7SwiftUI21PinnedScrollableViewsVMa_10004c4e8,
                PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_10004c4f0);
  __ss9OptionSetP8rawValuex03RawD0Qz_tcfCTj(lVar13,&uStack_1d0,lVar1,uVar6);
  uVar6 = 0x100052bc8;
  FUN_100010860(0x100052bc8,&UNK_10003da70);
  uVar7 = uVar6;
  FUN_100036c08();
  *(undefined8 *)(lVar12 + -0x10) = uVar7;
  __s7SwiftUI9LazyVGridV7columns9alignment7spacing11pinnedViews7contentACyxGSayAA8GridItemVG_AA19HorizontalAlignmentV12CoreGraphics7CGFloatVSgAA016PinnedScrollableI0VxyXEtcfC
            (lVar12,uVar14,uVar5,0x4020000000000000,0,lVar13,FUN_100036bfc,&lStack_c0,uVar6);
  lVar4 = lStack_220;
  lStack_1b0 = CONCAT71(uStack_12f,uStack_130);
  lStack_1a8 = lStack_128;
  lStack_198 = lStack_118;
  lStack_1a0 = lStack_120;
  lStack_190 = lStack_110;
  lStack_1c0 = CONCAT71(uStack_13f,uStack_140);
  lStack_1c8 = lStack_148;
  uStack_1d0 = lStack_150;
  lStack_1b8 = lStack_138;
  pcVar10 = *(code **)(lStack_220 + 0x10);
  (*pcVar10)(lVar11,lVar12,lVar2);
  lStack_98 = lStack_1a8;
  lStack_a0 = lStack_1b0;
  lStack_88 = lStack_198;
  lStack_90 = lStack_1a0;
  lStack_80 = lStack_190;
  lStack_b8 = lStack_1c8;
  lStack_c0 = uStack_1d0;
  lStack_a8 = lStack_1b8;
  lStack_b0 = lStack_1c0;
  param_1[5] = lStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = lStack_1a0;
  param_1[8] = lStack_190;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = lStack_1b8;
  param_1[2] = lStack_1c0;
  lVar3 = 0x100052c20;
  FUN_100010860(0x100052c20,&UNK_10003da98);
  (*pcVar10)((long)param_1 + (long)*(int *)(lVar3 + 0x30),lVar11,lVar2);
  FUN_100037e34(&lStack_c0,auStack_218,0x100052bb8,&UNK_10003da68);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(lVar12,lVar2);
  (*pcVar10)(lVar11,lVar2);
  func_0x000100037efc(&uStack_1d0,0x100052bb8,&UNK_10003da68);
  return;
}



/* Entry: 100036198; end: 1000363d3;  */

void FUN_100036198(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x0001000359b8();
  uVar7 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar7,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined8 *)(lVar2 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x18) + 8) + 8));
  uVar8 = param_3;
  (**(code **)(*(long *)(param_4 + 8) + 0x48))();
  _swift_unknownObjectRelease(uVar7);
  uVar7 = uVar8;
  FUN_100037638();
  _swift_bridgeObjectRelease(uVar8);
  puVar3 = &UNK_10003daa0;
  uStack_c8 = uVar7;
  _swift_getKeyPath();
  puVar4 = &UNK_10004eb88;
  _swift_allocObject(&UNK_10004eb88,0x88,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(long *)(puVar4 + 0x18) = param_4;
  uVar7 = param_2[8];
  uVar9 = param_2[0xb];
  uVar8 = param_2[10];
  *(undefined8 *)(puVar4 + 0x68) = param_2[9];
  *(undefined8 *)(puVar4 + 0x60) = uVar7;
  *(undefined8 *)(puVar4 + 0x78) = uVar9;
  *(undefined8 *)(puVar4 + 0x70) = uVar8;
  *(undefined8 *)(puVar4 + 0x80) = param_2[0xc];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar4 + 0x28) = param_2[1];
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x30) = uVar8;
  uVar9 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  *(undefined8 *)(puVar4 + 0x48) = param_2[5];
  *(undefined8 *)(puVar4 + 0x40) = uVar9;
  *(undefined8 *)(puVar4 + 0x58) = uVar8;
  *(undefined8 *)(puVar4 + 0x50) = uVar7;
  puVar5 = &UNK_10004ebb0;
  _swift_allocObject(&UNK_10004ebb0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1000378e0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(&uStack_c0,param_2,lVar2);
  uVar7 = 0x100052c28;
  FUN_100010860(0x100052c28,&UNK_10003dad8);
  uVar8 = 0x100052bf0;
  FUN_100010860(0x100052bf0,&UNK_10003da80);
  uVar9 = 0x100052c30;
  FUN_100037970(0x100052c30,0x100052c28,&UNK_10003dad8,PTR___sSayxGSksMc_10004cce8);
  uVar6 = uVar9;
  func_0x000100036cf0();
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (param_1,&uStack_c8,puVar3,FUN_100037910,puVar5,uVar7,uVar8,uVar9,
             PTR___sSSSHsWP_10004ccd8,uVar6);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_c0,0,1,0,1,0x4079000000000000,0,0,1,0,1);
  lVar2 = 0x100052bc8;
  FUN_100010860(0x100052bc8,&UNK_10003da70);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  puVar1[9] = uStack_78;
  puVar1[8] = uStack_80;
  puVar1[0xb] = uStack_68;
  puVar1[10] = uStack_70;
  puVar1[0xd] = uStack_58;
  puVar1[0xc] = uStack_60;
  puVar1[1] = uStack_b8;
  *puVar1 = uStack_c0;
  puVar1[3] = uStack_a8;
  puVar1[2] = uStack_b0;
  puVar1[5] = uStack_98;
  puVar1[4] = uStack_a0;
  puVar1[7] = uStack_88;
  puVar1[6] = uStack_90;
  return;
}



/* Entry: 1000363d4; end: 100036807;  */

void FUN_1000363d4(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x12;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [88];
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  code *pcStack_128;
  ulong uStack_120;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  code *pcStack_a0;
  long lStack_98;
  ulong uStack_90;
  
  lVar1 = 0;
  uStack_1e8 = param_2;
  puStack_1e0 = param_1;
  __s10Foundation3URLVMa();
  lStack_200 = *(long *)(lVar1 + -8);
  lStack_1f0 = *(long *)(lStack_200 + 0x40);
  lStack_1f8 = lVar1;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar1 = 0;
  puStack_1d0 = auStack_220 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar12 = (long)(auStack_220 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
           (lVar11 + 0xfU & 0xfffffffffffffff0);
  lStack_210 = (long)*(int *)(lVar1 + 0x1c);
  pcStack_1d8 = (code *)*param_3;
  uVar4 = param_3[1];
  lVar1 = 0;
  func_0x0001000359b8(0,param_5,param_6);
  _swift_bridgeObjectRetain(uVar4);
  uVar13 = *param_4;
  lStack_208 = lVar1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar13,param_4[1],*(undefined1 *)(param_4 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  uVar15 = param_5;
  (**(code **)(*(long *)(param_6 + 8) + 0x58))();
  uStack_218 = uVar15;
  _swift_unknownObjectRelease(uVar13);
  func_0x000100037e7c(param_3,lVar12,PTR___s23ExtensionsStickerPicker09ExtensionB0VMa_10004c998);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar7 + 0x88 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = lVar11 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_10004ebd8;
  _swift_allocObject(&UNK_10004ebd8,uVar10 + 8,uVar7 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(long *)(puVar2 + 0x18) = param_6;
  uVar13 = param_4[8];
  uVar14 = param_4[0xb];
  uVar15 = param_4[10];
  *(undefined8 *)(puVar2 + 0x68) = param_4[9];
  *(undefined8 *)(puVar2 + 0x60) = uVar13;
  *(undefined8 *)(puVar2 + 0x78) = uVar14;
  *(undefined8 *)(puVar2 + 0x70) = uVar15;
  *(undefined8 *)(puVar2 + 0x80) = param_4[0xc];
  uVar13 = *param_4;
  uVar14 = param_4[3];
  uVar15 = param_4[2];
  *(undefined8 *)(puVar2 + 0x28) = param_4[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x38) = uVar14;
  *(undefined8 *)(puVar2 + 0x30) = uVar15;
  uVar14 = param_4[4];
  uVar15 = param_4[7];
  uVar13 = param_4[6];
  *(undefined8 *)(puVar2 + 0x48) = param_4[5];
  *(undefined8 *)(puVar2 + 0x40) = uVar14;
  *(undefined8 *)(puVar2 + 0x58) = uVar15;
  *(undefined8 *)(puVar2 + 0x50) = uVar13;
  FUN_1000264c4(lVar12,puVar2 + uVar8);
  lVar9 = lStack_1f8;
  lVar1 = lStack_200;
  *(undefined8 *)(puVar2 + uVar10) = uStack_1e8;
  (**(code **)(lStack_200 + 0x10))(puStack_1d0,(long)param_3 + lStack_210,lStack_1f8);
  uVar7 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = lStack_1f0 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_10004ec00;
  _swift_allocObject(&UNK_10004ec00,uVar10 + 0x18,uVar7 | 7);
  (**(code **)(lVar1 + 0x20))(puVar3 + uVar8,puStack_1d0,lVar9);
  *(code **)(puVar3 + uVar10) = pcStack_1d8;
  *(ulong *)((long)(puVar3 + uVar10) + 8) = uVar4;
  *(undefined8 *)(puVar3 + uVar10 + 0x10) = uStack_218;
  lStack_98 = param_4[6];
  pcStack_a0 = (code *)param_4[5];
  uStack_90 = param_4[7];
  puStack_168 = (undefined *)param_4[6];
  pcStack_170 = (code *)param_4[5];
  uStack_160 = param_4[7];
  (**(code **)(*(long *)(lStack_208 + -8) + 0x10))(&pcStack_110,param_4);
  uVar13 = 0x100052c40;
  FUN_100010860(0x100052c40,&UNK_10003dae8);
  __s7SwiftUI5StateV12wrappedValuexvg(&pcStack_110);
  puVar6 = (undefined *)0x0;
  if (puStack_108 != (undefined *)0x0) {
    _swift_bridgeObjectRelease();
    puStack_108 = (undefined *)lStack_98;
    pcStack_110 = pcStack_a0;
    uStack_100 = uStack_90;
    _swift_bridgeObjectRetain(uVar4);
    __s7SwiftUI5StateV12wrappedValuexvg(&pcStack_170,uVar13);
    puVar6 = puStack_168;
    if (puStack_168 == (undefined *)0x0) {
      _swift_bridgeObjectRelease();
      uVar15 = 0x3fe0000000000000;
      goto LAB_100036700;
    }
    if ((pcStack_1d8 == pcStack_170) && (puStack_168 == (undefined *)uVar4)) {
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease();
    }
    else {
      pcVar5 = pcStack_1d8;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (pcStack_1d8,uVar4,pcStack_170,puStack_168,0);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease();
      uVar15 = 0x3fe0000000000000;
      uVar4 = (ulong)puVar6;
      if (((ulong)pcVar5 & 1) == 0) goto LAB_100036700;
    }
  }
  uVar15 = 0x3ff0000000000000;
  uVar4 = (ulong)puVar6;
LAB_100036700:
  __s7SwiftUI9AnimationV9easeInOut8durationACSd_tFZ(0x3fc999999999999a);
  puStack_108 = (undefined *)lStack_98;
  pcStack_110 = pcStack_a0;
  uStack_100 = uStack_90;
  __s7SwiftUI5StateV12wrappedValuexvg(&pcStack_170,uVar13);
  pcStack_128 = pcStack_170;
  pcStack_170 = FUN_100037b6c;
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  pcStack_158 = FUN_100037a84;
  uStack_140 = 0x4055800000000000;
  uStack_148 = 0x4055800000000000;
  uStack_120 = (ulong)puStack_168;
  pcStack_110 = FUN_100037b6c;
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  pcStack_f8 = FUN_100037a84;
  uStack_e0 = 0x4055800000000000;
  uStack_e8 = 0x4055800000000000;
  pcStack_c8 = pcStack_128;
  uStack_c0 = (ulong)puStack_168;
  puStack_168 = puVar3;
  puStack_150 = puVar2;
  uStack_138 = uVar15;
  uStack_130 = uVar4;
  puStack_108 = puVar3;
  puStack_f0 = puVar2;
  uStack_d8 = uVar15;
  uStack_d0 = uVar4;
  func_0x000100037e34(&pcStack_170,auStack_1c8,0x100052bf0,&UNK_10003da80);
  func_0x000100037efc(&pcStack_110,0x100052bf0,&UNK_10003da80);
  puStack_1e0[5] = uStack_148;
  puStack_1e0[4] = puStack_150;
  puStack_1e0[7] = uStack_138;
  puStack_1e0[6] = uStack_140;
  puStack_1e0[9] = pcStack_128;
  puStack_1e0[8] = uStack_130;
  puStack_1e0[10] = uStack_120;
  puStack_1e0[1] = puStack_168;
  *puStack_1e0 = pcStack_170;
  puStack_1e0[3] = pcStack_158;
  puStack_1e0[2] = uStack_160;
  return;
}



/* Entry: 100036808; end: 1000368ab;  */

void FUN_100036808(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001000359b8(0,param_5,param_6);
  FUN_1000368ac(param_3,lVar1);
  uVar2 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(param_6 + 0x48))(param_3,param_4,param_1,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(uVar2);
  return;
}



/* Entry: 1000368ac; end: 100036aa7;  */

void FUN_1000368ac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  __s7SwiftUI9AnimationV9easeInOut8durationACSd_tFZ(0x3fc999999999999a);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR___sytN_10004cdf0 + 8;
  uStack_e0 = uVar7;
  uStack_d8 = uVar8;
  __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
  _swift_release(param_1);
  uVar2 = unaff_x20[10];
  uVar3 = unaff_x20[0xb];
  uStack_f0 = uVar2;
  uStack_e8 = uVar3;
  uStack_70 = uVar3;
  uStack_68 = uVar2;
  FUN_100037e34(&uStack_68,alStack_80,0x1000525d8,&UNK_10003d310);
  FUN_100037e34(&uStack_70,alStack_80,0x100052ae0,&UNK_10003d9a8);
  uVar4 = 0x100052ae8;
  FUN_100010860(0x100052ae8,&UNK_10003d9b0);
  __s7SwiftUI5StateV12wrappedValuexvg(alStack_80);
  if (alStack_80[0] != 0) {
    __sScT6cancelyyF(alStack_80[0],puVar1,PTR___ss5NeverON_10004cdb0,
                     PTR___ss5NeverOs5ErrorsWP_10004cdb8);
    _swift_release(alStack_80[0]);
  }
  puVar5 = &UNK_10004ec28;
  _swift_allocObject(&UNK_10004ec28,0x88,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  uVar7 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar8 = unaff_x20[10];
  *(undefined8 *)(puVar5 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x60) = uVar7;
  *(undefined8 *)(puVar5 + 0x78) = uVar9;
  *(undefined8 *)(puVar5 + 0x70) = uVar8;
  *(undefined8 *)(puVar5 + 0x80) = unaff_x20[0xc];
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar9 = unaff_x20[4];
  uVar8 = unaff_x20[7];
  uVar7 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  *(undefined8 *)(puVar5 + 0x58) = uVar8;
  *(undefined8 *)(puVar5 + 0x50) = uVar7;
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(&uStack_f0);
  lVar6 = 2;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (2,0,0x10,4,0,0,&UNK_10003daf8,puVar5,puVar1);
  _swift_release(puVar5);
  uStack_f0 = uVar2;
  uStack_e8 = uVar3;
  alStack_80[0] = lVar6;
  __s7SwiftUI5StateV12wrappedValuexvs(alStack_80,uVar4);
  func_0x000100037efc(&uStack_68,0x1000525d8,&UNK_10003d310);
  func_0x000100037efc(&uStack_70,0x100052ae0,&UNK_10003d9a8);
  return;
}



/* Entry: 100036aa8; end: 100036b5b;  */

void FUN_100036aa8(undefined8 param_1)

{
  __s7SwiftUI9AnimationV7defaultACvgZ();
  __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
  _swift_release(param_1);
  return;
}



/* Entry: 100036b5c; end: 100036bfb;  */

void FUN_100036b5c(undefined8 param_1)

{
  __s7SwiftUI15ScrollViewProxyVMa();
  __s7SwiftUI9AnimationV7defaultACvgZ(param_1);
  __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
  _swift_release(param_1);
  return;
}



/* Entry: 100036bfc; end: 100036c07;  */

void FUN_100036bfc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  puVar7 = *(undefined8 **)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x0001000359b8();
  uVar8 = *puVar7;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar8,puVar7[1],*(undefined1 *)(puVar7 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  uVar10 = uVar9;
  (**(code **)(*(long *)(lVar6 + 8) + 0x48))();
  _swift_unknownObjectRelease(uVar8);
  uVar8 = uVar10;
  FUN_100037638();
  _swift_bridgeObjectRelease(uVar10);
  puVar2 = &UNK_10003daa0;
  uStack_c8 = uVar8;
  _swift_getKeyPath();
  puVar3 = &UNK_10004eb88;
  _swift_allocObject(&UNK_10004eb88,0x88,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(long *)(puVar3 + 0x18) = lVar6;
  uVar8 = puVar7[8];
  uVar10 = puVar7[0xb];
  uVar9 = puVar7[10];
  *(undefined8 *)(puVar3 + 0x68) = puVar7[9];
  *(undefined8 *)(puVar3 + 0x60) = uVar8;
  *(undefined8 *)(puVar3 + 0x78) = uVar10;
  *(undefined8 *)(puVar3 + 0x70) = uVar9;
  *(undefined8 *)(puVar3 + 0x80) = puVar7[0xc];
  uVar8 = *puVar7;
  uVar10 = puVar7[3];
  uVar9 = puVar7[2];
  *(undefined8 *)(puVar3 + 0x28) = puVar7[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar10;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  uVar10 = puVar7[4];
  uVar9 = puVar7[7];
  uVar8 = puVar7[6];
  *(undefined8 *)(puVar3 + 0x48) = puVar7[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  *(undefined8 *)(puVar3 + 0x58) = uVar9;
  *(undefined8 *)(puVar3 + 0x50) = uVar8;
  puVar4 = &UNK_10004ebb0;
  _swift_allocObject(&UNK_10004ebb0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1000378e0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(&uStack_c0,puVar7,lVar1);
  uVar8 = 0x100052c28;
  FUN_100010860(0x100052c28,&UNK_10003dad8);
  uVar9 = 0x100052bf0;
  FUN_100010860(0x100052bf0,&UNK_10003da80);
  uVar10 = 0x100052c30;
  FUN_100037970(0x100052c30,0x100052c28,&UNK_10003dad8,PTR___sSayxGSksMc_10004cce8);
  uVar5 = uVar10;
  func_0x000100036cf0();
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (param_1,&uStack_c8,puVar2,FUN_100037910,puVar4,uVar8,uVar9,uVar10,
             PTR___sSSSHsWP_10004ccd8,uVar5);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_c0,0,1,0,1,0x4079000000000000,0,0,1,0,1);
  lVar6 = 0x100052bc8;
  FUN_100010860(0x100052bc8,&UNK_10003da70);
  puVar7 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
  puVar7[9] = uStack_78;
  puVar7[8] = uStack_80;
  puVar7[0xb] = uStack_68;
  puVar7[10] = uStack_70;
  puVar7[0xd] = uStack_58;
  puVar7[0xc] = uStack_60;
  puVar7[1] = uStack_b8;
  *puVar7 = uStack_c0;
  puVar7[3] = uStack_a8;
  puVar7[2] = uStack_b0;
  puVar7[5] = uStack_98;
  puVar7[4] = uStack_a0;
  puVar7[7] = uStack_88;
  puVar7[6] = uStack_90;
  return;
}



/* Entry: 100036c08; end: 100036dff;  */

void FUN_100036c08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100052bd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052bc8;
  func_0x0001000118b8(0x100052bc8,&UNK_10003da70);
  uVar2 = uVar1;
  func_0x000100036c80();
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_10004c3b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052bd0 = puVar3;
  return;
}



/* Entry: 100036e00; end: 100036e3f;  */

void FUN_100036e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000100052c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003d3a0;
  _swift_getWitnessTable(&UNK_10003d3a0,&UNK_10004e628);
  puRam0000000100052c08 = puVar1;
  return;
}



/* Entry: 100036e40; end: 100036ee7;  */

void FUN_100036e40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_60 = *param_2;
  uStack_58 = param_2[1];
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  _swift_bridgeObjectRetain();
  uVar1 = 0x100052c40;
  FUN_100010860(0x100052c40,&UNK_10003dae8);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_60,uVar1);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_60,uVar1);
  return;
}



/* Entry: 100036ee8; end: 100036f57;  */

void FUN_100036ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  uVar1 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_10004d060
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100036f58;
                    /* WARNING: Could not recover jumptable at 0x00010003a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_10004d058)
            (1900000000);
  return;
}



/* Entry: 100036f58; end: 10003702b;  */

void FUN_100036f58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x60));
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  if (unaff_x20 == 0) {
    uVar1 = 0x100051400;
    FUN_100037da4(0x100051400,PTR___sScMMa_10004d028,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj(uVar2,uVar1);
    pcVar3 = FUN_10003702c;
  }
  else {
    _swift_errorRelease();
    uVar1 = 0x100051400;
    FUN_100037da4(0x100051400,PTR___sScMMa_10004d028,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj(uVar2,uVar1);
    pcVar3 = FUN_1000370bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 10003702c; end: 1000370bb;  */

void FUN_10003702c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x58);
  _swift_release();
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    __s7SwiftUI9AnimationV9easeInOut8durationACSd_tFZ(0x3fc999999999999a);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
    _swift_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000370b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000370bc; end: 10003714b;  */

void FUN_1000370bc(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x58);
  _swift_release();
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    __s7SwiftUI9AnimationV9easeInOut8durationACSd_tFZ(0x3fc999999999999a);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
    _swift_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100037148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10003714c; end: 1000371e7;  */

void FUN_10003714c(long param_1)

{
  undefined8 uVar1;
  ulong auStack_60 [3];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  auStack_60[2] = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  auStack_60[0] = 0;
  auStack_60[1] = 0;
  uVar1 = 0x100052c40;
  FUN_100010860(0x100052c40,&UNK_10003dae8);
  __s7SwiftUI5StateV12wrappedValuexvs(auStack_60,uVar1);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  auStack_60[2] = *(undefined8 *)(param_1 + 0x40);
  auStack_60[0] = auStack_60[0] & 0xffffffffffffff00;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(auStack_60,uVar1);
  return;
}



/* Entry: 1000371e8; end: 10003749f;  */

void FUN_1000371e8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar4 = 0;
  func_0x0001000359b8();
  uVar11 = *param_2;
  uVar12 = param_2[1];
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8);
  uVar2 = *(undefined1 *)(param_2 + 2);
  uVar13 = uVar11;
  __s7SwiftUI11StateObjectV14projectedValueAA08ObservedD0V7WrapperVyx_Gvg(uVar11,uVar12,uVar2);
  puVar5 = &UNK_10003db10;
  lStack_e0 = param_3;
  lStack_d8 = param_4;
  _swift_getKeyPath(&UNK_10003db10,&lStack_e0);
  __s7SwiftUI14ObservedObjectV7WrapperV13dynamicMemberAA7BindingVyqd__Gs24ReferenceWritableKeyPathCyxqd__G_tcluig
            (&lStack_e0);
  _swift_unknownObjectRelease(uVar13);
  _swift_release(puVar5);
  lVar8 = lStack_d8;
  lVar9 = lStack_e0;
  lVar6 = 0;
  FUN_100013358();
  lVar7 = lVar6;
  _swift_allocObject();
  *(long *)(lVar7 + 0x18) = lVar8;
  *(long *)(lVar7 + 0x10) = lVar9;
  *(undefined8 *)(lVar7 + 0x20) = uStack_d0;
  *(undefined8 *)(lVar7 + 0x28) = uStack_c8;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar11,uVar12,uVar2,uVar1,uVar10);
  (**(code **)(param_4 + 0x20))(param_3,param_4);
  _swift_unknownObjectRelease(uVar11);
  puVar5 = &UNK_10004ec50;
  _swift_allocObject(&UNK_10004ec50,0x88,7);
  *(long *)(puVar5 + 0x10) = param_3;
  *(long *)(puVar5 + 0x18) = param_4;
  uVar11 = param_2[8];
  uVar13 = param_2[0xb];
  uVar12 = param_2[10];
  *(undefined8 *)(puVar5 + 0x68) = param_2[9];
  *(undefined8 *)(puVar5 + 0x60) = uVar11;
  *(undefined8 *)(puVar5 + 0x78) = uVar13;
  *(undefined8 *)(puVar5 + 0x70) = uVar12;
  *(undefined8 *)(puVar5 + 0x80) = param_2[0xc];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar5 + 0x28) = param_2[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x38) = uVar13;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  uVar13 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  *(undefined8 *)(puVar5 + 0x48) = param_2[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar13;
  *(undefined8 *)(puVar5 + 0x58) = uVar12;
  *(undefined8 *)(puVar5 + 0x50) = uVar11;
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&lStack_e0,param_2,lVar4);
  uVar11 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar11,param_2[1],*(undefined1 *)(param_2 + 2),uVar1,uVar10);
  lVar8 = param_3;
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  _swift_unknownObjectRelease(uVar11);
  uVar11 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar11,param_2[1],*(undefined1 *)(param_2 + 2),uVar1,uVar10);
  (**(code **)(param_4 + 0x18))();
  _swift_unknownObjectRelease(uVar11);
  uVar11 = 0x100051520;
  FUN_100037da4(0x100051520,FUN_100013358,&UNK_10003bfec);
  __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC(lVar7,lVar6,uVar11);
  *param_1 = lVar7;
  param_1[1] = lVar6;
  param_1[2] = (long)FUN_100016d80;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = lVar9;
  param_1[6] = 0x100037d98;
  param_1[7] = (long)puVar5;
  lVar9 = 0x100052c58;
  FUN_100010860(0x100052c58,&UNK_10003db48);
  iVar3 = *(int *)(lVar9 + 0x30);
  puVar5 = &UNK_10003db50;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar3) = puVar5;
  uVar11 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar3,uVar11,0);
  *(byte *)((long)param_1 + (long)*(int *)(lVar9 + 0x34)) = (byte)lVar8 & 1;
  param_1 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



/* Entry: 1000374a0; end: 1000375cb;  */

void FUN_1000374a0(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x0001000359b8();
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8);
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar5 = uVar6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar9);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar9);
  lVar8 = *(long *)(param_3 + 8);
  uVar7 = param_2;
  lVar4 = lVar8;
  (**(code **)(lVar8 + 0x28))(param_2,lVar8);
  _swift_unknownObjectRelease(uVar6);
  (**(code **)(lVar8 + 0x90))(uVar7,lVar4,param_2,lVar8);
  _swift_unknownObjectRelease(uVar5);
  _swift_bridgeObjectRelease(lVar4);
  if ((uVar7 & 1) != 0) {
    uStack_68 = param_1[4];
    uStack_70 = param_1[3];
    uStack_71 = 0;
    uVar6 = 0x1000513d8;
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvs(&uStack_71,uVar6);
  }
  return;
}



/* Entry: 1000375cc; end: 100037637;  */

void FUN_1000375cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001000359b8();
  uVar2 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(param_3 + 0x38))(0,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(uVar2);
  return;
}



/* Entry: 100037638; end: 1000378cf;  */

undefined * FUN_100037638(long param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long alStack_90 [4];
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0x100052c38;
  FUN_100010860(0x100052c38,&UNK_10003dae0);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar12 + 0x40));
  plVar11 = (long *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  puVar14 = PTR___swiftEmptyArrayStorage_10004ce00;
  lVar13 = (long)plVar11 - extraout_x12;
  lStack_68 = *(long *)(param_1 + 0x10);
  if (lStack_68 == 0) {
    lVar15 = 0;
  }
  else {
    alStack_90[2] = (long)*(byte *)(lVar12 + 0x50);
    alStack_90[3] = alStack_90[2] + 0x20U & (alStack_90[2] ^ 0xffffffffffffffffU);
    puVar7 = PTR___swiftEmptyArrayStorage_10004ce00 + alStack_90[3];
    lVar5 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar10 = 0;
    lVar15 = 0;
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    param_1 = param_1 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lStack_70 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    alStack_90[0] = lVar13;
    alStack_90[1] = lVar12;
    do {
      iVar2 = *(int *)(lVar4 + 0x30);
      *plVar11 = lVar10;
      func_0x000100037e7c(param_1,(long)plVar11 + (long)iVar2,
                          PTR___s23ExtensionsStickerPicker09ExtensionB0VMa_10004c998);
      FUN_100037c98(plVar11,lVar13);
      if (lVar15 == 0) {
        uVar8 = *(ulong *)(puVar14 + 0x18);
        if ((long)((uVar8 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000378c4);
          (*pcVar3)();
        }
        uVar9 = uVar8 & 0xfffffffffffffffe;
        if ((long)uVar8 < 2) {
          uVar9 = 1;
        }
        puVar6 = (undefined *)0x100052c48;
        FUN_100010860(0x100052c48,&UNK_10003db00);
        lVar13 = alStack_90[3];
        lVar12 = *(long *)(lVar12 + 0x48);
        _swift_allocObject();
        puVar7 = puVar6;
        _malloc_size();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000378c8);
          (*pcVar3)();
        }
        lVar15 = (long)puVar7 - lVar13;
        if (lVar15 == -0x8000000000000000 && lVar12 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000378cc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (lVar12 != 0) {
          uVar8 = lVar15 / lVar12;
        }
        *(ulong *)(puVar6 + 0x10) = uVar9;
        *(ulong *)(puVar6 + 0x18) = uVar8 << 1;
        puVar7 = puVar6 + lVar13;
        uVar9 = *(ulong *)(puVar14 + 0x18) >> 1;
        if (*(long *)(puVar14 + 0x10) != 0) {
          puVar1 = puVar14 + alStack_90[3];
          if (puVar6 < puVar14 || puVar1 + uVar9 * lVar12 <= puVar7) {
            _swift_arrayInitWithTakeFrontToBack(puVar7,puVar1,uVar9,lVar4);
          }
          else if (puVar6 != puVar14) {
            _swift_arrayInitWithTakeBackToFront(puVar7,puVar1,uVar9,lVar4);
          }
          *(undefined8 *)(puVar14 + 0x10) = 0;
        }
        puVar7 = puVar7 + uVar9 * lVar12;
        lVar15 = (uVar8 & 0x7fffffffffffffff) - uVar9;
        _swift_release(puVar14);
        puVar14 = puVar6;
        lVar13 = alStack_90[0];
        lVar12 = alStack_90[1];
      }
      if (SBORROW8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000378c0);
        (*pcVar3)();
      }
      lVar15 = lVar15 + -1;
      lVar10 = lVar10 + 1;
      FUN_100037c98(lVar13,puVar7);
      puVar7 = puVar7 + *(long *)(lVar12 + 0x48);
      param_1 = param_1 + lStack_70;
    } while (lStack_68 != lVar10);
  }
  if (1 < *(ulong *)(puVar14 + 0x18)) {
    uVar8 = *(ulong *)(puVar14 + 0x18) >> 1;
    if (SBORROW8(uVar8,lVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000378d0);
      (*pcVar3)();
    }
    *(ulong *)(puVar14 + 0x10) = uVar8 - lVar15;
  }
  return puVar14;
}



/* Entry: 1000378d0; end: 1000378eb;  */

void FUN_1000378d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)();
  return;
}



/* Entry: 1000378ec; end: 10003790f;  */

void FUN_1000378ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100037910; end: 10003796f;  */

void FUN_100037910(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *param_2;
  lVar2 = 0x100052c38;
  FUN_100010860(0x100052c38,&UNK_10003dae0);
  (*pcVar1)(param_1,uVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x30));
  return;
}



/* Entry: 100037970; end: 1000379b3;  */

void FUN_100037970(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1000379b4; end: 100037a83;  */

void FUN_1000379b4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10003552c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  lVar1 = unaff_x20 + (uVar4 + 0x88 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100037a84; end: 100037b6b;  */

void FUN_100037a84(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x88 & (uVar7 ^ 0xffffffffffffffff);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  lVar5 = unaff_x20 + uVar7;
  lVar3 = 0;
  func_0x0001000359b8(0,uVar1,lVar2);
  FUN_1000368ac(lVar5,lVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(lVar2 + 0x48))(lVar5,uVar6,param_1,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(uVar4);
  return;
}



/* Entry: 100037b6c; end: 100037bd7;  */

void FUN_100037b6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar6);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = *(undefined8 *)(unaff_x20 + (uVar6 + 0x17 & 0xffffffffffffff8));
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),unaff_x20 + uVar7
            );
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa();
  _swift_allocObject();
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  __s23ExtensionsStickerPicker0B14FetchViewModelC9remoteURL9stickerId0I12ImageFetcher13extensionTypeAC10Foundation0H0V_SSAA0bkL0CSgAA09ExtensionN0Otcfc
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,uVar3,uVar5
             ,1);
  return;
}



/* Entry: 100037bd8; end: 100037c3f;  */

void FUN_100037bd8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100037c40;
  plVar4[8] = lVar2;
  plVar4[9] = lVar1;
  plVar4[7] = unaff_x20 + 0x20;
  lVar2 = 0;
  __sScMMa();
  plVar4[10] = lVar2;
  __sScM6sharedScMvgZ();
  plVar4[0xb] = lVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_10004d060
                                   + 4);
  _swift_task_alloc();
  plVar4[0xc] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100036f58;
                    /* WARNING: Could not recover jumptable at 0x00010003a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_10004d058)
            (1900000000);
  return;
}



/* Entry: 100037c40; end: 100037c97;  */

void FUN_100037c40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100037c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100037c98; end: 100037d23;  */

undefined8 FUN_100037c98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100052c38;
  FUN_100010860(0x100052c38,&UNK_10003dae0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100037d24; end: 100037d7f;  */

void FUN_100037d24(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar1 = *(undefined8 *)(param_3 + param_4 + -0x10);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  lVar4 = *(long *)(*(long *)(param_3 + param_4 + -8) + 8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar5)(uVar2,uVar3,uVar1,lVar4);
  return;
}



/* Entry: 100037d80; end: 100037da3;  */

undefined1  [16] FUN_100037d80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Entry: 100037da4; end: 100037de3;  */

void FUN_100037da4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100037de4; end: 100037e33;  */

void FUN_100037de4(void)

{
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovg();
  return;
}



/* Entry: 100037e34; end: 100037f3b;  */

undefined8 FUN_100037e34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100037f3c; end: 100037f53;  */

void FUN_100037f3c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x0001000359b8(0,uVar2,lVar9);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x18) + 8) + 8);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x30);
  uVar6 = uVar7;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar7,uVar3,uVar4,uVar1,uVar10);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar7,uVar3,uVar4,uVar1,uVar10);
  lVar5 = *(long *)(lVar9 + 8);
  uVar8 = uVar2;
  lVar9 = lVar5;
  (**(code **)(lVar5 + 0x28))(uVar2,lVar5);
  _swift_unknownObjectRelease(uVar7);
  (**(code **)(lVar5 + 0x90))(uVar8,lVar9,uVar2,lVar5);
  _swift_unknownObjectRelease(uVar6);
  _swift_bridgeObjectRelease(lVar9);
  if ((uVar8 & 1) != 0) {
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_71 = 0;
    uVar7 = 0x1000513d8;
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvs(&uStack_71,uVar7);
  }
  return;
}



/* Entry: 100037f54; end: 100037fb3;  */

void FUN_100037f54(void)

{
  long unaff_x20;
  
  FUN_10003552c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100037fb4; end: 100038007;  */

void FUN_100037fb4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001000359b8();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(lVar2 + 8) + 0x78))(0,uVar1);
  _swift_unknownObjectRelease(uVar4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_41 = 0;
  uVar4 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_41,uVar4);
  return;
}



/* Entry: 100038008; end: 1000383ff;  */

undefined1  [16] FUN_100038008(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x8000000100045e80);
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100045e60);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000380d4);
  (*pcVar1)();
}



/* Entry: 100038400; end: 1000384bf;  */

undefined1  [16] FUN_100038400(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6761745f6968;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6761745f6968,0xe600000000000000);
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100045e60);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100038570);
  (*pcVar1)();
}



/* Entry: 1000384c0; end: 100038d67;  */

undefined1  [16] FUN_1000384c0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100045e60);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  _SCLocalizedStringFromTable(param_1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar4);
    _objc_release(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100038570);
  (*pcVar1)();
}



/* Entry: 100038d68; end: 100038d7f;  */

undefined1  [16] FUN_100038d68(void)

{
  return ZEXT816(0x10004eeb0);
}



/* Entry: 100038d80; end: 100038f07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100038d80(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_10004c8b8;
  iVar4 = (int)param_2;
  if (lRam0000000100054298 != -1) {
    func_0x000100039fa8();
  }
  if (lRam00000001000542a0 == 0) {
    if (lRam0000000100054290 != -1) goto LAB_100038ed8;
    bVar2 = SBORROW4(iVar4,iRam0000000100054280);
    iVar1 = iVar4 - iRam0000000100054280;
    bVar3 = iVar4 == iRam0000000100054280;
    if (iVar4 < iRam0000000100054280) goto LAB_100038e78;
    goto LAB_100038e44;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_10004c8b8 == lStack_38) {
    return;
  }
LAB_100038ed4:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_100038ed8:
      func_0x000100039fc0();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam0000000100054280);
      iVar1 = iVar4 - iRam0000000100054280;
      bVar3 = iVar4 == iRam0000000100054280;
      if (iRam0000000100054280 <= iVar4) break;
LAB_100038e78:
      if (*(long *)PTR____stack_chk_guard_10004c8b8 == lStack_38) {
        return;
      }
    }
LAB_100038e44:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam0000000100054284) goto LAB_100038e78;
      if ((int)param_3 <= iRam0000000100054284) {
        if (*(long *)PTR____stack_chk_guard_10004c8b8 == lStack_38) {
          return;
        }
        goto LAB_100038ed4;
      }
    }
    if (*(long *)PTR____stack_chk_guard_10004c8b8 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 100038f08; end: 100038f0f;  */

void FUN_100038f08(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_10004c8b8;
  if (puRam00000001000542a0 == (undefined *)0x0) {
    if (PTR___availability_version_check_10004c8c0 != (undefined *)0x0) {
      puRam00000001000542a0 = PTR___availability_version_check_10004c8c0;
    }
    if (puRam00000001000542a0 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
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
    }
  }
  if (*(long *)PTR____stack_chk_guard_10004c8b8 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x100054290,0,0x100038d78);
  return;
}



/* Entry: 100038f10; end: 100039227;  */

void FUN_100038f10(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_10004c8b8;
  if (((param_1 & 1) != 0) || (puRam00000001000542a0 == (undefined *)0x0)) {
    if (PTR___availability_version_check_10004c8c0 != (undefined *)0x0) {
      puRam00000001000542a0 = PTR___availability_version_check_10004c8c0;
    }
    if (((param_1 & 1) != 0) || (puRam00000001000542a0 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
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
    }
  }
  if (*(long *)PTR____stack_chk_guard_10004c8b8 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_10004c8e0)(0x100054290,0,0x100038d78);
    return;
  }
  return;
}



/* Entry: 100039228; end: 10003923f;  */

void FUN_100039228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x100054290,0,0x100038d78);
  return;
}



/* Entry: 100039240; end: 100039483;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100039240(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_1000392c4:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x000100039d7c(param_2);
  }
  else if (uVar12 != 3) {
    FUN_100039d34(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_100039420;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_100039420:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_100039444;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x0001000396a4(param_2);
LAB_100039444:
    func_0x000100039b0c(param_2);
    func_0x000100039e88(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_100039348;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_100039348:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10003936c;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x000100039804(param_2);
LAB_10003936c:
    func_0x000100039ed0(param_2 + 0x80);
    func_0x000100039b38(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_100039964(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x000100039ad8();
    return 0;
  }
  goto LAB_1000392c4;
}



/* Entry: 100039484; end: 10003956b;  */

void FUN_100039484(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x000100039ad0();
  *(code **)(lVar1 + 0x38) = FUN_10003956c;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100039240(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x000100039558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_100039fc4(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x000100039570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10003956c; end: 100039573;  */

void FUN_10003956c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100039570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100039574; end: 100039683;  */

void FUN_100039574(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x000100039ad0();
  *(code **)(lVar1 + 0x38) = FUN_100039684;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100039240(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100039684; end: 1000396a3;  */

void FUN_100039684(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100039690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 1000396a4; end: 100039963;  */

/* WARNING: Possible PIC construction at 0x0001000397b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000397bc) */
/* WARNING: Removing unreachable block (ram,0x0001000397dc) */
/* WARNING: Removing unreachable block (ram,0x0001000397c8) */
/* WARNING: Removing unreachable block (ram,0x0001000397e0) */

void FUN_1000396a4(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_1000399e4(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x000100039e54(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_100039e60(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_100039768;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_100039768:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_100039e60(0x1000542b8);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 100039964; end: 1000399e3;  */

void FUN_100039964(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam00000001000542b0 != -1) {
    FUN_100039ab8();
  }
  if (pcRam00000001000542a8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100039994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000542a8)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 1000399e4; end: 100039ab7;  */

/* WARNING: Possible PIC construction at 0x000100039a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100039a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100039a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100039a7c) */
/* WARNING: Removing unreachable block (ram,0x000100039a80) */
/* WARNING: Removing unreachable block (ram,0x000100039a88) */
/* WARNING: Removing unreachable block (ram,0x000100039a90) */
/* WARNING: Removing unreachable block (ram,0x000100039a38) */
/* WARNING: Removing unreachable block (ram,0x000100039a48) */
/* WARNING: Removing unreachable block (ram,0x000100039a70) */
/* WARNING: Removing unreachable block (ram,0x000100039a5c) */
/* WARNING: Removing unreachable block (ram,0x000100039a74) */

void FUN_1000399e4(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_100039e60(0x1000542b8);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x100039a38;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x1000542b8);
  return;
}



/* Entry: 100039ab8; end: 100039ad7;  */

void FUN_100039ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x1000542b0,0x1000542a8,0x1000399b4);
  return;
}



/* Entry: 100039ad8; end: 100039be7;  */

undefined8 FUN_100039ad8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 100039be8; end: 100039c1f;  */

void FUN_100039be8(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam00000001000542c8 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 100039c20; end: 100039d13;  */

void FUN_100039c20(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x1000542c0,FUN_100039be8,0);
  if ((bRam00000001000542c8 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam00000001000542d8 != -1) {
      func_0x000100039d30();
    }
    iVar1 = (int)uVar2;
    if ((pcRam00000001000542d0 == (code *)0x0) || ((*pcRam00000001000542d0)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 100039d14; end: 100039d33;  */

void FUN_100039d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x1000542d8,0x1000542d0,0x100039ce4);
  return;
}



/* Entry: 100039d34; end: 100039e23;  */

void FUN_100039d34(undefined8 param_1)

{
  if (lRam00000001000542e8 != -1) {
    FUN_100039e24();
  }
  if (pcRam00000001000542e0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100039d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000542e0)(param_1);
    return;
  }
  return;
}



/* Entry: 100039e24; end: 100039e5f;  */

void FUN_100039e24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x1000542e8,0x1000542e0,0x100039dc4);
  return;
}


