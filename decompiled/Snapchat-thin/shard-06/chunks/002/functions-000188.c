/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104667010; end: 104667053; -[SCAdLifecycleTimestampParseResult withTopsnapPresentTsMs:] */

void FUN_104667010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_104666f30(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104667054; end: 104667133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104667054(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308c100);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c110);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c118);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c120);
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308c100) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_11308c108) = param_1;
  *(undefined8 *)(lVar1 + _DAT_11308c110) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_11308c118) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_11308c120) = uVar5;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104667134; end: 104667177; -[SCAdLifecycleTimestampParseResult withAttachmentTriggeredTsMs:] */

void FUN_104667134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_104667054(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104667178; end: 104667257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104667178(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308c100);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c108);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c118);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c120);
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308c100) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_11308c108) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_11308c110) = param_1;
  *(undefined8 *)(lVar1 + _DAT_11308c118) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_11308c120) = uVar5;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104667258; end: 10466729b; -[SCAdLifecycleTimestampParseResult withAttachmentPresentedTsMs:] */

void FUN_104667258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_104667178(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10466729c; end: 10466737b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10466729c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308c100);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c108);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c110);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c120);
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308c100) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_11308c108) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_11308c110) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_11308c118) = param_1;
  *(undefined8 *)(lVar1 + _DAT_11308c120) = uVar5;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10466737c; end: 1046673bf; -[SCAdLifecycleTimestampParseResult withAttachmentDismissTsMs:] */

void FUN_10466737c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_10466729c(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046673c0; end: 10466749f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046673c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308c100);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c108);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c110);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c118);
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308c100) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_11308c108) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_11308c110) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_11308c118) = uVar5;
  *(undefined8 *)(lVar1 + _DAT_11308c120) = param_1;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046674a0; end: 1046674e3; -[SCAdLifecycleTimestampParseResult withTopsnapDisappearTsMs:] */

void FUN_1046674a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_1046673c0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046674e4; end: 10466750f;  */

long FUN_1046674e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104667510; end: 104667573;  */

int FUN_104667510(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104667574; end: 1046675f3;  */

uint FUN_104667574(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = *(undefined2 *)(param_1 + 0xe);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = *(undefined2 *)(param_2 + 0xe);
  FUN_1046675f4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1046675f4; end: 104667d9f;  */

void FUN_1046675f4(undefined8 *param_1,long param_2)

{
  undefined1 auStack_c8 [104];
  
                    /* WARNING: Could not recover jumptable at 0x0001046676b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dd24370)[*(ushort *)(param_1 + 0xe) >> 0xc] * 4 + 0x1046676bc))
            (*(undefined8 *)(param_2 + 8),*param_1,param_2,param_1[9],auStack_c8,param_1[8],
             param_1[7]);
  return;
}



/* Entry: 104667da0; end: 104667dcb;  */

long FUN_104667da0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104667dcc; end: 104667e13;  */

void FUN_104667dcc(undefined8 *param_1)

{
  FUN_104666570(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                *(undefined2 *)(param_1 + 0xe));
  return;
}



/* Entry: 104667e14; end: 104668007;  */

undefined8 * FUN_104667e14(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar15 = *(undefined2 *)(param_2 + 0xe);
  FUN_1046664d0(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,uVar15);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  *(undefined2 *)(param_1 + 0xe) = uVar15;
  return param_1;
}



/* Entry: 104668008; end: 10466808b;  */

undefined8 * FUN_104668008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *(undefined2 *)(param_2 + 0xe);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar10 = *(undefined2 *)(param_1 + 0xe);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  *(undefined2 *)(param_1 + 0xe) = uVar9;
  FUN_104666570(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar4,
                uVar8,uVar10);
  return param_1;
}



/* Entry: 10466808c; end: 1046681eb;  */

int FUN_10466808c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x74 < param_2) && (*(char *)((long)param_1 + 0x72) != '\0')) {
    return *param_1 + 0x75;
  }
  uVar1 = (*(ushort *)(param_1 + 0x1c) >> 5 & 0x70 | (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc)) ^
          0x7f;
  if (0x73 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046681ec; end: 1046682d3;  */

void FUN_1046681ec(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046682d4; end: 1046682d7;  */

void FUN_1046682d4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24410;
  _swift_getWitnessTable(&UNK_10dd24410,&UNK_110794318);
  puRam000000011308b900 = puVar1;
  return;
}



/* Entry: 1046682d8; end: 104668317;  */

void FUN_1046682d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24410;
  _swift_getWitnessTable(&UNK_10dd24410,&UNK_110794318);
  puRam000000011308b900 = puVar1;
  return;
}



/* Entry: 104668318; end: 10466837b;  */

uint FUN_104668318(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10466837c; end: 1046683a3;  */

void FUN_10466837c(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 1046683a4; end: 1046683ff;  */

undefined8 * FUN_1046683a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104668400; end: 10466843b;  */

undefined8 * FUN_104668400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466843c; end: 1046684d7;  */

int FUN_10466843c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046684d8; end: 1046685bf;  */

void FUN_1046684d8(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046685c0; end: 1046685c3;  */

void FUN_1046685c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd244a0;
  _swift_getWitnessTable(&UNK_10dd244a0,&UNK_1107943d0);
  puRam000000011308b908 = puVar1;
  return;
}



/* Entry: 1046685c4; end: 104668603;  */

void FUN_1046685c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd244a0;
  _swift_getWitnessTable(&UNK_10dd244a0,&UNK_1107943d0);
  puRam000000011308b908 = puVar1;
  return;
}



/* Entry: 104668604; end: 104668667;  */

uint FUN_104668604(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104668668; end: 10466868f;  */

void FUN_104668668(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104668690; end: 1046686eb;  */

undefined8 * FUN_104668690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046686ec; end: 104668727;  */

undefined8 * FUN_1046686ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104668728; end: 1046687c3;  */

int FUN_104668728(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046687c4; end: 1046688ab;  */

void FUN_1046687c4(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046688ac; end: 1046688af;  */

void FUN_1046688ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24530;
  _swift_getWitnessTable(&UNK_10dd24530,&UNK_110794488);
  puRam000000011308b910 = puVar1;
  return;
}



/* Entry: 1046688b0; end: 1046688ef;  */

void FUN_1046688b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24530;
  _swift_getWitnessTable(&UNK_10dd24530,&UNK_110794488);
  puRam000000011308b910 = puVar1;
  return;
}



/* Entry: 1046688f0; end: 104668953;  */

uint FUN_1046688f0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104668954; end: 10466897b;  */

void FUN_104668954(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466897c; end: 1046689d7;  */

undefined8 * FUN_10466897c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046689d8; end: 104668a13;  */

undefined8 * FUN_1046689d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104668a14; end: 104668aaf;  */

int FUN_104668a14(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104668ab0; end: 104668b5b;  */

void FUN_104668ab0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104668b5c; end: 104668b5f;  */

void FUN_104668b5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd245b0;
  _swift_getWitnessTable(&UNK_10dd245b0,&UNK_110794558);
  puRam000000011308b918 = puVar1;
  return;
}



/* Entry: 104668b60; end: 104668b9f;  */

void FUN_104668b60(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd245b0;
  _swift_getWitnessTable(&UNK_10dd245b0,&UNK_110794558);
  puRam000000011308b918 = puVar1;
  return;
}



/* Entry: 104668ba0; end: 104668d17;  */

bool FUN_104668ba0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104668d18; end: 104668db3;  */

uint FUN_104668d18(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = (uint)&uStack_170;
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_e8 = param_1[0x11];
  uStack_f0 = param_1[0x10];
  uStack_d8 = param_1[0x13];
  uStack_e0 = param_1[0x12];
  uStack_148 = param_1[5];
  uStack_150 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_128 = param_1[9];
  uStack_130 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  cVar1 = *(char *)(param_1 + 0x14);
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  cVar2 = *(char *)(param_2 + 0x14);
  FUN_104673224(&uStack_170,&uStack_d0);
  return uVar3 & cVar1 == cVar2;
}



/* Entry: 104668db4; end: 104668e1f;  */

long FUN_104668db4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104668e20; end: 104668ecb;  */

undefined8 * FUN_104668e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 104668ecc; end: 104668fef;  */

undefined8 * FUN_104668ecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 104668ff0; end: 104669093;  */

undefined8 * FUN_104668ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 104669094; end: 104669183;  */

int FUN_104669094(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xa1) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104669184; end: 1046691c3;  */

void FUN_104669184(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd246b8;
  _swift_getWitnessTable(&UNK_10dd246b8,&UNK_1107946b0);
  puRam000000011308b920 = puVar1;
  return;
}



/* Entry: 1046691c4; end: 10466926f;  */

void FUN_1046691c4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104669270; end: 10466942f;  */

void FUN_104669270(undefined1 *param_1,long *param_2)

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



/* Entry: 104669430; end: 10466951f;  */

undefined8
FUN_104669430(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  ulong uVar1;
  
  FUN_1046696a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_4);
  if (((param_1 & 1) != 0) &&
     (__sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_2,param_5), (param_2 & 1) != 0)) {
    if (param_3 == 0) {
      if (param_6 == 0) {
        return 1;
      }
    }
    else if (param_6 != 0) {
      FUN_1046696a8(0,0x11308b8f0,&PTR_PTR_1126b8fb0);
      _objc_retain(param_6);
      _objc_retain();
      uVar1 = param_3;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(param_3);
      _objc_release(param_6);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104669520; end: 10466954f;  */

void FUN_104669520(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 104669550; end: 1046695c3;  */

undefined8 * FUN_104669550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1046695c4; end: 10466960f;  */

undefined8 * FUN_1046695c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104669610; end: 1046696a7;  */

int FUN_104669610(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046696a8; end: 1046696e7;  */

void FUN_1046696a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1046696e8; end: 1046696ef;  */

undefined8 * FUN_1046696e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1046696f0; end: 10466985b;  */

undefined8 FUN_1046696f0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0;
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_e8 = param_1[0x11];
  uStack_f0 = param_1[0x10];
  uStack_d8 = param_1[0x13];
  uStack_e0 = param_1[0x12];
  uStack_148 = param_1[5];
  uStack_150 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_128 = param_1[9];
  uStack_130 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  bVar1 = *(byte *)(param_1 + 0x14);
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  bVar2 = *(byte *)(param_2 + 0x14);
  FUN_104673224(&uStack_170,&uStack_d0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (bVar1 < 6) {
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        if (bVar2 == 2) {
          return 1;
        }
        return 0;
      }
      if (bVar1 == 3) {
        if (bVar2 != 3) {
          return 0;
        }
        return 1;
      }
    }
    else {
      if (bVar1 == 4) {
        if (bVar2 != 4) {
          return 0;
        }
        return 1;
      }
      if (bVar1 == 5) {
        if (bVar2 != 5) {
          return 0;
        }
        return 1;
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 == 6) {
      if (bVar2 != 6) {
        return 0;
      }
      return 1;
    }
    if (bVar1 == 7) {
      if (bVar2 != 7) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (bVar1 == 8) {
      if (bVar2 != 8) {
        return 0;
      }
      return 1;
    }
    if (bVar1 == 9) {
      if (bVar2 != 9) {
        return 0;
      }
      return 1;
    }
  }
  if ((7 < (byte)(bVar2 - 2)) && (((bVar2 ^ bVar1) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10466985c; end: 1046698c7;  */

long FUN_10466985c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046698c8; end: 104669973;  */

undefined8 * FUN_1046698c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 104669974; end: 104669a97;  */

undefined8 * FUN_104669974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 104669a98; end: 104669b3b;  */

undefined8 * FUN_104669a98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 104669b3c; end: 104669ee3;  */

int FUN_104669b3c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xa1) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104669ee4; end: 104669f47;  */

uint FUN_104669ee4(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 104669f48; end: 104669f6f;  */

void FUN_104669f48(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104669f70; end: 104669fcb;  */

undefined8 * FUN_104669f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104669fcc; end: 10466a007;  */

undefined8 * FUN_104669fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466a008; end: 10466a0a3;  */

int FUN_10466a008(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10466a0a4; end: 10466a18b;  */

void FUN_10466a0a4(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10466a18c; end: 10466a18f;  */

void FUN_10466a18c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24860;
  _swift_getWitnessTable(&UNK_10dd24860,&UNK_1107949d8);
  puRam000000011308b928 = puVar1;
  return;
}



/* Entry: 10466a190; end: 10466a1cf;  */

void FUN_10466a190(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24860;
  _swift_getWitnessTable(&UNK_10dd24860,&UNK_1107949d8);
  puRam000000011308b928 = puVar1;
  return;
}



/* Entry: 10466a1d0; end: 10466a233;  */

uint FUN_10466a1d0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10466a234; end: 10466a25b;  */

void FUN_10466a234(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466a25c; end: 10466a2b7;  */

undefined8 * FUN_10466a25c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466a2b8; end: 10466a2f3;  */

undefined8 * FUN_10466a2b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466a2f4; end: 10466a38f;  */

int FUN_10466a2f4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10466a390; end: 10466a3d7;  */

uint FUN_10466a390(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10466a3d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10466a3d8; end: 10466a467;  */

undefined8 FUN_10466a3d8(double *param_1,double *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return 1;
  }
  return 0;
}



/* Entry: 10466a468; end: 10466a493;  */

long FUN_10466a468(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466a494; end: 10466a4ff;  */

int FUN_10466a494(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10466a500; end: 10466a53b;  */

undefined8 FUN_10466a500(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_100e0dfc4)(param_2,param_1);
  return param_2;
}



/* Entry: 10466a53c; end: 10466a5db;  */

uint FUN_10466a53c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_10466a5dc(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 10466a5dc; end: 10466a6af;  */

byte FUN_10466a5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_d8 = param_2[0x13];
  uStack_e0 = param_2[0x12];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  puVar1 = &uStack_d0;
  FUN_104673224(puVar1,&uStack_170);
  if (((ulong)puVar1 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = NEON_uminv(CONCAT17(-((double)param_1[0x1b] == (double)param_2[0x1b]),
                                CONCAT16(-((double)param_1[0x1a] == (double)param_2[0x1a]),
                                         CONCAT15(-((double)param_1[0x19] == (double)param_2[0x19]),
                                                  CONCAT14(-((double)param_1[0x18] ==
                                                            (double)param_2[0x18]),
                                                           CONCAT13(-((double)param_1[0x17] ==
                                                                     (double)param_2[0x17]),
                                                                    CONCAT12(-((double)param_1[0x16]
                                                                              == (double)param_2[
                                                  0x16]),CONCAT11(-((double)param_1[0x15] ==
                                                                   (double)param_2[0x15]),
                                                                  -((double)param_1[0x14] ==
                                                                   (double)param_2[0x14])))))))),1);
  }
  return bVar2 & 1;
}



/* Entry: 10466a6b0; end: 10466a71b;  */

long FUN_10466a6b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466a71c; end: 10466a7cf;  */

undefined8 * FUN_10466a71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  uVar7 = param_2[0x18];
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar7;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  uVar7 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 10466a7d0; end: 10466a92b;  */

undefined8 * FUN_10466a7d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}



/* Entry: 10466a92c; end: 10466a9d7;  */

undefined8 * FUN_10466a92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x17];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar1;
  uVar2 = param_2[0x18];
  uVar3 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar2;
  param_1[0x1b] = uVar3;
  param_1[0x1a] = uVar1;
  return param_1;
}



/* Entry: 10466a9d8; end: 10466aacf;  */

int FUN_10466a9d8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x38] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10466aad0; end: 10466abff;  */

uint FUN_10466aad0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  uVar1 = 0;
  FUN_10466a500(param_1,auStack_a0);
  FUN_10466a500(param_2,auStack_60);
  func_0x00010466ab18(auStack_a0,auStack_60);
  return uVar1 & 1;
}



/* Entry: 10466ac00; end: 10466ac7b;  */

int FUN_10466ac00(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10466ac7c; end: 10466acdf;  */

uint FUN_10466ac7c(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 10466ace0; end: 10466ad07;  */

void FUN_10466ace0(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466ad08; end: 10466ad63;  */

undefined8 * FUN_10466ad08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466ad64; end: 10466ad9f;  */

undefined8 * FUN_10466ad64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10466ada0; end: 10466ae3b;  */

int FUN_10466ada0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


