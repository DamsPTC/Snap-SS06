/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10466ae3c; end: 10466aed7;  */

uint FUN_10466ae3c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466aed8; end: 10466af43;  */

long FUN_10466aed8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466af44; end: 10466afef;  */

undefined8 * FUN_10466af44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466aff0; end: 10466b113;  */

undefined8 * FUN_10466aff0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466b114; end: 10466b1b7;  */

undefined8 * FUN_10466b114(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466b1b8; end: 10466b2a3;  */

int FUN_10466b1b8(int *param_1,uint param_2)

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



/* Entry: 10466b2a4; end: 10466b307;  */

uint FUN_10466b2a4(ulong *param_1,undefined8 *param_2)

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



/* Entry: 10466b308; end: 10466b32f;  */

void FUN_10466b308(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466b330; end: 10466b38b;  */

undefined8 * FUN_10466b330(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466b38c; end: 10466b3c7;  */

undefined8 * FUN_10466b38c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466b3c8; end: 10466b463;  */

int FUN_10466b3c8(ulong *param_1,int param_2)

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



/* Entry: 10466b464; end: 10466b50f;  */

void FUN_10466b464(void)

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



/* Entry: 10466b510; end: 10466b513;  */

void FUN_10466b510(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24ac0;
  _swift_getWitnessTable(&UNK_10dd24ac0,&UNK_110794e20);
  puRam000000011308b930 = puVar1;
  return;
}



/* Entry: 10466b514; end: 10466b553;  */

void FUN_10466b514(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd24ac0;
  _swift_getWitnessTable(&UNK_10dd24ac0,&UNK_110794e20);
  puRam000000011308b930 = puVar1;
  return;
}



/* Entry: 10466b554; end: 10466b6cb;  */

bool FUN_10466b554(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10466b6cc; end: 10466b733;  */

uint FUN_10466b6cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_88 = (undefined1)param_1[9];
  uStack_7f = *(undefined8 *)((long)param_1 + 0x51);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x49);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x49) >> 0x38);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_30 = param_2[8];
  uStack_28 = (undefined1)param_2[9];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x51);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x49);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x49) >> 0x38);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10466b734(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10466b734; end: 10466b82b;  */

ushort FUN_10466b734(double *param_1,double *param_2)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  byte bVar6;
  
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      uVar5 = 0;
      bVar6 = NEON_uminv(CONCAT17(-(param_2[7] == param_1[7]),
                                  CONCAT16(-(param_2[6] == param_1[6]),
                                           CONCAT15(-(param_2[5] == param_1[5]),
                                                    CONCAT14(-(param_2[4] == param_1[4]),
                                                             CONCAT13(-(param_2[3] == param_1[3]),
                                                                      CONCAT12(-(param_2[2] ==
                                                                                param_1[2]),
                                                                               CONCAT11(-(param_2[1]
                                                                                         == param_1[
                                                  1]),-(*param_2 == *param_1)))))))),1);
      if ((((bVar6 & 1) != 0) && (param_1[8] == param_2[8])) && (param_1[9] == param_2[9])) {
        uVar5 = (ushort)(SUB84(param_1[10],0) == SUB84(param_2[10],0));
      }
      return uVar5;
    }
  }
  else if (*(char *)(param_2 + 0xb) != '\x01') {
    sVar1 = -(ushort)(param_1[2] == param_2[2]);
    lVar4 = -(ulong)(param_1[3] == param_2[3]);
    lVar3 = -(ulong)(param_1[1] == param_2[1]);
    uVar2 = NEON_uminv(CONCAT17((char)((ulong)lVar4 >> 8),
                                CONCAT16((char)lVar4,
                                         CONCAT15((char)((ushort)sVar1 >> 8),
                                                  CONCAT14((char)sVar1,
                                                           CONCAT13((char)((ulong)lVar3 >> 8),
                                                                    CONCAT12((char)lVar3,
                                                                             -(ushort)(*param_1 ==
                                                                                      *param_2))))))
                               ),2);
    uVar5 = 0;
    if (SUB84(param_1[4],0) == SUB84(param_2[4],0)) {
      uVar5 = uVar2 & param_1[5] == param_2[5];
    }
    return uVar5;
  }
  return 0;
}



/* Entry: 10466b82c; end: 10466b857;  */

long FUN_10466b82c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466b858; end: 10466b923;  */

int FUN_10466b858(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0x16) ^ 0xff;
  if (*(byte *)(param_1 + 0x16) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10466b924; end: 10466d04f;  */

void FUN_10466b924(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  ulong uVar4;
  undefined1 auStack_540 [8];
  long lStack_538;
  undefined1 *puStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  ulong uStack_4f8;
  
  lVar1 = 0;
  lStack_500 = param_1;
  uStack_4f8 = param_2;
  FUN_104677908();
  lStack_538 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puStack_530 = auStack_540 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_540 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = 0;
  lStack_528 = lVar1;
  FUN_10466df5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  lStack_508 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_01;
  lStack_510 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_02;
  lStack_518 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_03;
  lStack_520 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x11308b9e8;
  func_0x0001000285a8(0x11308b9e8,&UNK_10dd24c70);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (((((lVar3 - extraout_x12_04) - extraout_x12_05) - extraout_x12_06) - extraout_x12_07) -
          extraout_x12_08) - extraout_x8_01;
  lVar1 = uVar4 + (long)*(int *)(lVar1 + 0x30);
  func_0x00010466e3c8(lStack_500,uVar4);
  lStack_500 = lVar1;
  func_0x00010466e3c8(uStack_4f8,lVar1);
  uStack_4f8 = uVar4;
  _swift_getEnumCaseMultiPayload(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010466bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd24b50 + (uVar4 & 0xffffffff) * 2) * 4 + 0x10466bb7c))();
  return;
}



/* Entry: 10466d050; end: 10466d28b;  */

ulong FUN_10466d050(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch(uVar2 & 0xffffffff) {
  case 0:
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    uVar2 = *(ulong *)(param_1 + 0xa0);
    FUN_104666570(uVar2,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                  *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                  *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                  *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                  *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                  *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                  *(undefined8 *)(param_1 + 0x108),*(undefined2 *)(param_1 + 0x110));
    return uVar2;
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
    uVar2 = *(ulong *)(param_1 + 0x98);
    break;
  case 2:
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    lVar3 = 0;
    FUN_104677908();
    param_1 = param_1 + (long)*(int *)(lVar3 + 0x14);
    uVar4 = 0;
    FUN_10467a0d4(0);
    uVar2 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar4);
    iVar1 = (int)uVar2;
    if (iVar1 < 4) {
      if (iVar1 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 200));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x108));
        uVar2 = *(ulong *)(param_1 + 0x118);
      }
      else {
        if (iVar1 == 1) {
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
          _objc_release(*(undefined8 *)(param_1 + 0x10));
          uVar2 = *(ulong *)(param_1 + 0x18);
          goto code_r0x00010466d27c;
        }
        if (iVar1 != 2) {
          return uVar2;
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
        uVar2 = *(ulong *)(param_1 + 0x18);
      }
    }
    else {
      if ((iVar1 == 4) || (iVar1 == 5)) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
        lVar3 = 0x11308b938;
        func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
        uVar2 = *(ulong *)(param_1 + (long)*(int *)(lVar3 + 0x30));
code_r0x00010466d27c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return uVar2;
      }
      if (iVar1 != 6) {
        return uVar2;
      }
      uVar2 = *(ulong *)(param_1 + 8);
    }
    break;
  case 3:
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    uVar2 = *(ulong *)(param_1 + 0xa8);
    if (1 < *(byte *)(param_1 + 0xb0)) {
      return *(ulong *)(param_1 + 0xa0);
    }
    break;
  default:
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return uVar2;
}



/* Entry: 10466d28c; end: 10466df5b;  */

void FUN_10466d28c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
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
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[9] = param_2[9];
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010466d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dd24b78)[(ulong)puVar1 & 0xffffffff] * 4 + 0x10466d334))();
  return;
}



/* Entry: 10466df5c; end: 10466df93;  */

void FUN_10466df5c(undefined8 param_1)

{
  if (lRam000000011308b9b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e817190);
  return;
}



/* Entry: 10466df94; end: 10466e2eb;  */

undefined8 * FUN_10466df94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 2) {
    uVar6 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar8;
    param_1[0xe] = uVar7;
    uVar6 = param_2[0x10];
    uVar8 = param_2[0x13];
    uVar7 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar7;
    uVar6 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    uVar6 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
    uVar6 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    lVar3 = 0;
    FUN_104677908();
    lVar1 = (long)param_1 + (long)*(int *)(lVar3 + 0x14);
    lVar3 = (long)param_2 + (long)*(int *)(lVar3 + 0x14);
    lVar4 = 0;
    FUN_10467a0d4();
    lVar5 = lVar3;
    _swift_getEnumCaseMultiPayload(lVar3,lVar4);
    if ((int)lVar5 == 5) {
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))(lVar1,lVar3,lVar5);
      lVar5 = 0x11308b938;
      func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
      *(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x30)) =
           *(undefined8 *)(lVar3 + *(int *)(lVar5 + 0x30));
      _swift_storeEnumTagMultiPayload(lVar1,lVar4,5);
    }
    else if ((int)lVar5 == 4) {
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))(lVar1,lVar3,lVar5);
      lVar5 = 0x11308b938;
      func_0x0001000285a8(0x11308b938,&UNK_10dd25320);
      *(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x30)) =
           *(undefined8 *)(lVar3 + *(int *)(lVar5 + 0x30));
      _swift_storeEnumTagMultiPayload(lVar1,lVar4,4);
    }
    else {
      _memcpy(lVar1,lVar3,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,2);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 10466e2ec; end: 10466e31b;  */

void FUN_10466e2ec(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010466e2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10466e31c; end: 10466e6a7;  */

void FUN_10466e31c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10dd24bc8;
  puStack_68 = &UNK_10dd24be0;
  lVar1 = 0x13f;
  FUN_104677908();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dd24bf8;
    puStack_50 = &UNK_10dd24c10;
    puStack_48 = &UNK_10dd24c28;
    puStack_40 = &UNK_10dd24c40;
    puStack_38 = &UNK_10dd24c40;
    puStack_30 = &UNK_10dd24c40;
    puStack_28 = &UNK_10dd24c58;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,10,&puStack_70);
  }
  return;
}



/* Entry: 10466e6a8; end: 10466e75f;  */

uint FUN_10466e6a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_1b8 = param_1[0x15];
  uStack_1c0 = param_1[0x14];
  uStack_1b0 = param_1[0x16];
  uStack_1a8 = (undefined1)param_1[0x17];
  uStack_19f = *(undefined8 *)((long)param_1 + 0xc1);
  uStack_1a7 = (undefined7)*(undefined8 *)((long)param_1 + 0xb9);
  uStack_1a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb9) >> 0x38);
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_188 = param_2[0x15];
  uStack_190 = param_2[0x14];
  uStack_180 = param_2[0x16];
  uStack_178 = (undefined1)param_2[0x17];
  uStack_16f = *(undefined8 *)((long)param_2 + 0xc1);
  uStack_177 = (undefined7)*(undefined8 *)((long)param_2 + 0xb9);
  uStack_170 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb9) >> 0x38);
  puVar2 = &uStack_160;
  FUN_104673224(puVar2,&uStack_c0);
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10466ec94(&uStack_1c0,&uStack_190);
  }
  return uVar1 & 1;
}



/* Entry: 10466e760; end: 10466e78b;  */

long FUN_10466e760(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466e78c; end: 10466e7bf;  */

void FUN_10466e78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  param_6 = param_6 & 0xff;
  if (((1 < param_6 - 3) && (param_5 = param_3, param_6 != 6)) && (param_5 = param_4, param_6 != 5))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 10466e7c0; end: 10466e813;  */

undefined8 FUN_10466e7c0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
  bVar1 = *(byte *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  if (((1 < bVar1 - 3) && (uVar2 = *(undefined8 *)(param_1 + 0xb0), bVar1 != 6)) &&
     (uVar2 = *(undefined8 *)(param_1 + 0xb8), bVar1 != 5)) {
    return *(undefined8 *)(param_1 + 0xa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,*(undefined8 *)(param_1 + 0xa8));
  return uVar2;
}



/* Entry: 10466e814; end: 10466e913;  */

undefined8 * FUN_10466e814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  uVar5 = param_2[9];
  param_1[9] = uVar5;
  uVar8 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar8;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  uVar10 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar10;
  uVar8 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar8 = param_2[0x14];
  uVar2 = param_2[0x15];
  uVar9 = param_2[0x16];
  uVar3 = param_2[0x17];
  uVar6 = param_2[0x18];
  uVar4 = *(undefined1 *)(param_2 + 0x19);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10466e78c(uVar8,uVar2,uVar9,uVar3,uVar6,uVar4);
  param_1[0x14] = uVar8;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar9;
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar6;
  *(undefined1 *)(param_1 + 0x19) = uVar4;
  return param_1;
}



/* Entry: 10466e914; end: 10466ea8f;  */

undefined8 * FUN_10466e914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  uVar11 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[2] = param_2[2];
  uVar11 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar11;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar11 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[8] = param_2[8];
  uVar11 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar11 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  uVar11 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = param_2[0x14];
  uVar4 = param_2[0x15];
  uVar1 = param_2[0x16];
  uVar5 = param_2[0x17];
  uVar12 = param_2[0x18];
  uVar8 = *(undefined1 *)(param_2 + 0x19);
  FUN_10466e78c(uVar11,uVar4,uVar1,uVar5,uVar12,uVar8);
  uVar2 = param_1[0x14];
  uVar6 = param_1[0x15];
  uVar3 = param_1[0x16];
  uVar7 = param_1[0x17];
  uVar10 = param_1[0x18];
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar4;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar12;
  uVar9 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = uVar8;
  func_0x000102cfd04c(uVar2,uVar6,uVar3,uVar7,uVar10,uVar9);
  return param_1;
}



/* Entry: 10466ea90; end: 10466eb57;  */

undefined8 * FUN_10466ea90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar4);
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar7 = param_2[7];
  uVar4 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  _swift_bridgeObjectRelease(uVar4);
  uVar7 = param_2[9];
  uVar4 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  _swift_bridgeObjectRelease(uVar4);
  uVar7 = param_2[10];
  uVar10 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar7;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar4;
  uVar7 = param_2[0xf];
  uVar4 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  _swift_bridgeObjectRelease(uVar4);
  uVar7 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar7;
  uVar7 = param_2[0x13];
  uVar4 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar7;
  _swift_bridgeObjectRelease(uVar4);
  uVar6 = param_2[0x18];
  uVar2 = *(undefined1 *)(param_2 + 0x19);
  uVar7 = param_1[0x14];
  uVar10 = param_1[0x15];
  uVar4 = param_1[0x16];
  uVar1 = param_1[0x17];
  uVar5 = param_1[0x18];
  uVar8 = param_2[0x14];
  uVar11 = param_2[0x17];
  uVar9 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar8;
  param_1[0x17] = uVar11;
  param_1[0x16] = uVar9;
  param_1[0x18] = uVar6;
  uVar3 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = uVar2;
  func_0x000102cfd04c(uVar7,uVar10,uVar4,uVar1,uVar5,uVar3);
  return param_1;
}



/* Entry: 10466eb58; end: 10466ec4b;  */

int FUN_10466eb58(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0xc9) != '\0')) {
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



/* Entry: 10466ec4c; end: 10466ec93;  */

uint FUN_10466ec4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_10466ec94(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10466ec94; end: 10466ef1b;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_10466ec94(double *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  byte bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  
  dVar10 = *param_1;
  dVar1 = param_1[3];
  dVar5 = param_1[4];
  bVar11 = *(byte *)(param_1 + 5);
  dVar8 = (double)((ulong)*(uint *)((long)param_1 + 9) << 8 |
                   (ulong)*(uint3 *)((long)param_1 + 0xd) << 0x28 | (ulong)*(byte *)(param_1 + 1));
  if (bVar11 < 4) {
    if (bVar11 < 2) {
      if (bVar11 == 0) {
        if (*(char *)(param_2 + 5) == '\0') {
LAB_10466eddc:
          return (double)(ulong)(SUB84(dVar10,0) == *(int *)param_2);
        }
      }
      else if (*(char *)(param_2 + 5) == '\x01') goto LAB_10466eddc;
      return 0.0;
    }
    if (bVar11 == 2) {
      if (*(char *)(param_2 + 5) != '\x02') {
        return 0.0;
      }
      uVar7 = 0;
      if (*param_2 == dVar10) {
        uVar7 = (uint)(SUB84(dVar8,0) == SUB84(param_2[1],0));
      }
      return (double)(ulong)uVar7;
    }
    if (*(char *)(param_2 + 5) != '\x03') {
      return 0.0;
    }
    if (dVar10 != *param_2) {
      return 0.0;
    }
    if (param_2[1] != dVar8) {
      return 0.0;
    }
    if (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0) {
      return 0.0;
    }
    dVar10 = param_2[3];
    dVar6 = param_2[4];
  }
  else {
    dVar9 = (double)((ulong)*(uint *)((long)param_1 + 0x11) << 8 |
                     (ulong)*(uint3 *)((long)param_1 + 0x15) << 0x28 | (ulong)*(byte *)(param_1 + 2)
                    );
    if (5 < bVar11) {
      if (bVar11 != 6) {
        if (((dVar1 == 0.0 && dVar8 == 0.0) && (dVar10 == 0.0 && dVar9 == 0.0)) && dVar5 == 0.0) {
          if (*(char *)(param_2 + 5) != '\a') {
            return 0.0;
          }
          dVar5 = param_2[4];
          dVar1 = param_2[3];
          bVar11 = *(byte *)(param_2 + 1) | SUB81(dVar1,0);
          bVar12 = *(byte *)((long)param_2 + 9) | (byte)((ulong)dVar1 >> 8);
          bVar13 = *(byte *)((long)param_2 + 10) | (byte)((ulong)dVar1 >> 0x10);
          bVar14 = *(byte *)((long)param_2 + 0xb) | (byte)((ulong)dVar1 >> 0x18);
          bVar15 = *(byte *)((long)param_2 + 0xc) | (byte)((ulong)dVar1 >> 0x20);
          bVar16 = *(byte *)((long)param_2 + 0xd) | (byte)((ulong)dVar1 >> 0x28);
          bVar17 = *(byte *)((long)param_2 + 0xe) | (byte)((ulong)dVar1 >> 0x30);
          bVar18 = *(byte *)((long)param_2 + 0xf) | (byte)((ulong)dVar1 >> 0x38);
          bVar19 = *(byte *)(param_2 + 2) | SUB81(dVar5,0);
          bVar20 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)dVar5 >> 8);
          bVar21 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)dVar5 >> 0x10);
          bVar22 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)dVar5 >> 0x18);
          bVar23 = *(byte *)((long)param_2 + 0x14) | (byte)((ulong)dVar5 >> 0x20);
          bVar24 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)dVar5 >> 0x28);
          bVar25 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)dVar5 >> 0x30);
          bVar26 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)dVar5 >> 0x38);
          auVar27[1] = bVar12;
          auVar27[0] = bVar11;
          auVar27[2] = bVar13;
          auVar27[3] = bVar14;
          auVar27[4] = bVar15;
          auVar27[5] = bVar16;
          auVar27[6] = bVar17;
          auVar27[7] = bVar18;
          auVar27[8] = bVar19;
          auVar27[9] = bVar20;
          auVar27[10] = bVar21;
          auVar27[0xb] = bVar22;
          auVar27[0xc] = bVar23;
          auVar27[0xd] = bVar24;
          auVar27[0xe] = bVar25;
          auVar27[0xf] = bVar26;
          auVar4[1] = bVar12;
          auVar4[0] = bVar11;
          auVar4[2] = bVar13;
          auVar4[3] = bVar14;
          auVar4[4] = bVar15;
          auVar4[5] = bVar16;
          auVar4[6] = bVar17;
          auVar4[7] = bVar18;
          auVar4[8] = bVar19;
          auVar4[9] = bVar20;
          auVar4[10] = bVar21;
          auVar4[0xb] = bVar22;
          auVar4[0xc] = bVar23;
          auVar4[0xd] = bVar24;
          auVar4[0xe] = bVar25;
          auVar4[0xf] = bVar26;
          auVar27 = NEON_ext(auVar27,auVar4,8,1);
          if (CONCAT17(bVar18 | auVar27[7],
                       CONCAT16(bVar17 | auVar27[6],
                                CONCAT15(bVar16 | auVar27[5],
                                         CONCAT14(bVar15 | auVar27[4],
                                                  CONCAT13(bVar14 | auVar27[3],
                                                           CONCAT12(bVar13 | auVar27[2],
                                                                    CONCAT11(bVar12 | auVar27[1],
                                                                             bVar11 | auVar27[0]))))
                                        ))) != 0 || *param_2 != 0.0) {
            return 0.0;
          }
          return 4.94065645841247e-324;
        }
        if (*(char *)(param_2 + 5) != '\a') {
          return 0.0;
        }
        if (*param_2 != 4.94065645841247e-324) {
          return 0.0;
        }
        dVar5 = param_2[4];
        dVar1 = param_2[3];
        bVar11 = *(byte *)(param_2 + 1) | SUB81(dVar1,0);
        bVar12 = *(byte *)((long)param_2 + 9) | (byte)((ulong)dVar1 >> 8);
        bVar13 = *(byte *)((long)param_2 + 10) | (byte)((ulong)dVar1 >> 0x10);
        bVar14 = *(byte *)((long)param_2 + 0xb) | (byte)((ulong)dVar1 >> 0x18);
        bVar15 = *(byte *)((long)param_2 + 0xc) | (byte)((ulong)dVar1 >> 0x20);
        bVar16 = *(byte *)((long)param_2 + 0xd) | (byte)((ulong)dVar1 >> 0x28);
        bVar17 = *(byte *)((long)param_2 + 0xe) | (byte)((ulong)dVar1 >> 0x30);
        bVar18 = *(byte *)((long)param_2 + 0xf) | (byte)((ulong)dVar1 >> 0x38);
        bVar19 = *(byte *)(param_2 + 2) | SUB81(dVar5,0);
        bVar20 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)dVar5 >> 8);
        bVar21 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)dVar5 >> 0x10);
        bVar22 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)dVar5 >> 0x18);
        bVar23 = *(byte *)((long)param_2 + 0x14) | (byte)((ulong)dVar5 >> 0x20);
        bVar24 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)dVar5 >> 0x28);
        bVar25 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)dVar5 >> 0x30);
        bVar26 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)dVar5 >> 0x38);
        auVar2[1] = bVar12;
        auVar2[0] = bVar11;
        auVar2[2] = bVar13;
        auVar2[3] = bVar14;
        auVar2[4] = bVar15;
        auVar2[5] = bVar16;
        auVar2[6] = bVar17;
        auVar2[7] = bVar18;
        auVar2[8] = bVar19;
        auVar2[9] = bVar20;
        auVar2[10] = bVar21;
        auVar2[0xb] = bVar22;
        auVar2[0xc] = bVar23;
        auVar2[0xd] = bVar24;
        auVar2[0xe] = bVar25;
        auVar2[0xf] = bVar26;
        auVar3[1] = bVar12;
        auVar3[0] = bVar11;
        auVar3[2] = bVar13;
        auVar3[3] = bVar14;
        auVar3[4] = bVar15;
        auVar3[5] = bVar16;
        auVar3[6] = bVar17;
        auVar3[7] = bVar18;
        auVar3[8] = bVar19;
        auVar3[9] = bVar20;
        auVar3[10] = bVar21;
        auVar3[0xb] = bVar22;
        auVar3[0xc] = bVar23;
        auVar3[0xd] = bVar24;
        auVar3[0xe] = bVar25;
        auVar3[0xf] = bVar26;
        auVar27 = NEON_ext(auVar2,auVar3,8,1);
        if (CONCAT17(bVar18 | auVar27[7],
                     CONCAT16(bVar17 | auVar27[6],
                              CONCAT15(bVar16 | auVar27[5],
                                       CONCAT14(bVar15 | auVar27[4],
                                                CONCAT13(bVar14 | auVar27[3],
                                                         CONCAT12(bVar13 | auVar27[2],
                                                                  CONCAT11(bVar12 | auVar27[1],
                                                                           bVar11 | auVar27[0]))))))
                    ) != 0) {
          return 0.0;
        }
        return 4.94065645841247e-324;
      }
      if (*(char *)(param_2 + 5) != '\x06') {
        return 0.0;
      }
      if (dVar10 != *param_2) {
        return 0.0;
      }
      dVar10 = param_2[1];
      dVar6 = param_2[2];
      dVar5 = dVar9;
      if (dVar8 == dVar10 && dVar9 == dVar6) {
        return 4.94065645841247e-324;
      }
      goto 
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
    }
    if (bVar11 != 4) {
      if (*(char *)(param_2 + 5) != '\x05') {
        return 0.0;
      }
      if (dVar10 != *param_2) {
        return 0.0;
      }
      if (SUB84(dVar8,0) != *(int *)(param_2 + 1)) {
        return 0.0;
      }
      dVar10 = param_2[2];
      dVar6 = param_2[3];
      dVar8 = dVar9;
      dVar5 = dVar1;
      if (dVar9 == dVar10 && dVar1 == dVar6) {
        return 4.94065645841247e-324;
      }
      goto 
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
    }
    if (*(char *)(param_2 + 5) != '\x04') {
      return 0.0;
    }
    if (dVar10 != *param_2) {
      return 0.0;
    }
    if (((*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1) != 0) {
      return 0.0;
    }
    if (dVar9 != param_2[2]) {
      return 0.0;
    }
    dVar10 = param_2[3];
    dVar6 = param_2[4];
  }
  dVar8 = dVar1;
  if ((dVar1 == dVar10) && (dVar5 == dVar6)) {
    return 4.94065645841247e-324;
  }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(dVar8,dVar5,dVar10,dVar6,0);
  return dVar8;
}



/* Entry: 10466ef1c; end: 10466ef47;  */

long FUN_10466ef1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10466ef48; end: 10466ef5f;  */

undefined8 FUN_10466ef48(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = param_1[4];
  if (((1 < bVar1 - 3) && (uVar2 = param_1[2], bVar1 != 6)) && (uVar2 = param_1[3], bVar1 != 5)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,param_1[1]);
  return uVar2;
}



/* Entry: 10466ef60; end: 10466f05b;  */

undefined8 * FUN_10466ef60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_10466e78c(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 10466f05c; end: 10466f0ab;  */

undefined8 * FUN_10466f05c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x000102cfd04c(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10466f0ac; end: 10466f193;  */

int FUN_10466f0ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10466f194; end: 10466f1f7;  */

uint FUN_10466f194(ulong *param_1,undefined8 *param_2)

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



/* Entry: 10466f1f8; end: 10466f21f;  */

void FUN_10466f1f8(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10466f220; end: 10466f27b;  */

undefined8 * FUN_10466f220(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466f27c; end: 10466f2b7;  */

undefined8 * FUN_10466f27c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10466f2b8; end: 10466f353;  */

int FUN_10466f2b8(ulong *param_1,int param_2)

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



/* Entry: 10466f354; end: 10466f44f;  */

undefined8 FUN_10466f354(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10466f450; end: 10466f577;  */

void FUN_10466f450(void)

{
  undefined1 *puVar1;
  undefined1 auStack_990 [512];
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 uStack_748;
  undefined8 uStack_740;
  undefined1 uStack_738;
  undefined1 auStack_730 [352];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_590 [512];
  undefined1 auStack_390 [352];
  undefined1 auStack_230 [512];
  
  FUN_10465ec9c(auStack_390);
  _memcpy(auStack_730,auStack_390,0x160);
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_750 = 0;
  uStack_5a0 = 0;
  uStack_5b0 = 1;
  uStack_5a8 = 0;
  uStack_748 = 1;
  uStack_740 = 0;
  uStack_738 = 0;
  FUN_104671f8c(auStack_730,0x11308b8c8,&UNK_10dd24d70);
  _memcpy(auStack_730,auStack_390,0x160);
  func_0x0001046632d4(uStack_5d0,uStack_5c8,uStack_5c0,uStack_5b8,uStack_5b0,uStack_5a8,uStack_5a0);
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5b0 = 1;
  uStack_5a8 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  _memcpy(auStack_590,&uStack_790,0x200);
  _memcpy(auStack_230,&uStack_790,0x200);
  func_0x00010466f39c(auStack_590,auStack_990);
  func_0x00010466f3d0(auStack_230);
  FUN_10469ba2c(0);
  _objc_allocWithZone();
  puVar1 = auStack_590;
  FUN_10469a5e8();
  puRam00000001138151a0 = puVar1;
  return;
}



/* Entry: 10466f578; end: 10466f5b7; +[SCAdTrackParseResult identity] */

void FUN_10466f578(void)

{
  if (lRam000000011308b9f0 != -1) {
    _swift_once(0x11308b9f0,FUN_10466f450);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151a0);
  return;
}



/* Entry: 10466f5b8; end: 10466f65b; -[SCAdTrackParseResult withSwipeCount:] */

void FUN_10466f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined8 auStack_440 [64];
  undefined1 auStack_240 [512];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469b178(auStack_440);
  auStack_440[0] = param_3;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_1);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466f65c; end: 10466f6ff; -[SCAdTrackParseResult withBotViewTime:] */

void FUN_10466f65c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [8];
  undefined8 uStack_438;
  undefined1 auStack_240 [512];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10469b178(auStack_440);
  uStack_438 = param_1;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_2);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466f700; end: 10466f7a3; -[SCAdTrackParseResult withTopsnapViewTimeMs:] */

void FUN_10466f700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined1 auStack_240 [512];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10469b178(auStack_440);
  uStack_430 = param_1;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_2);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466f7a4; end: 10466f847; -[SCAdTrackParseResult withReturnToAppTimeMs:] */

void FUN_10466f7a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [24];
  undefined8 uStack_428;
  undefined1 auStack_240 [512];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10469b178(auStack_440);
  uStack_428 = param_1;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_2);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466f848; end: 10466f95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10466f848(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_630 [512];
  undefined1 auStack_430 [32];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 auStack_230 [512];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_10469b178(auStack_430);
  uStack_3e8 = param_1 == 0;
  if ((bool)uStack_3e8) {
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
  }
  else {
    uStack_410 = *(undefined8 *)(param_1 + _DAT_11308c100);
    uStack_408 = *(undefined8 *)(param_1 + _DAT_11308c108);
    uStack_400 = *(undefined8 *)(param_1 + _DAT_11308c110);
    uStack_3f8 = *(undefined8 *)(param_1 + _DAT_11308c118);
    uStack_3f0 = *(undefined8 *)(param_1 + _DAT_11308c120);
  }
  _memcpy(auStack_230,auStack_430,0x200);
  _objc_allocWithZone(unaff_x20);
  func_0x00010466f39c(auStack_230,auStack_630);
  puVar1 = auStack_230;
  FUN_10469a5e8(puVar1);
  func_0x00010466f3d0(auStack_430);
  return puVar1;
}



/* Entry: 10466f960; end: 10466f9bf; -[SCAdTrackParseResult withLifecycleTsParseResult:] */

void FUN_10466f960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10466f848(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10466f9c0; end: 10466fa63; -[SCAdTrackParseResult withAttachmentTriggerType:] */

void FUN_10466f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [80];
  undefined8 uStack_3f0;
  undefined1 auStack_240 [512];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469b178(auStack_440);
  uStack_3f0 = param_3;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_1);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466fa64; end: 10466fb07; -[SCAdTrackParseResult withIsBackgroundExit:] */

void FUN_10466fa64(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [88];
  undefined1 uStack_3e8;
  undefined1 auStack_240 [512];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469b178(auStack_440);
  uStack_3e8 = param_3;
  _memcpy(auStack_240,auStack_440,0x200);
  _objc_allocWithZone(uVar1);
  func_0x00010466f39c(auStack_240,auStack_640);
  puVar2 = auStack_240;
  FUN_10469a5e8(puVar2);
  _objc_release(param_1);
  func_0x00010466f3d0(auStack_440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10466fb08; end: 10466fbff;  */

undefined1 * FUN_10466fb08(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_790 [512];
  undefined1 auStack_590 [96];
  undefined1 auStack_530 [416];
  undefined1 auStack_390 [512];
  undefined1 auStack_190 [352];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_10469b178(auStack_590);
  if (param_1 == 0) {
    FUN_10465ec9c(auStack_190);
  }
  else {
    _objc_retain(param_1);
    FUN_1046a355c(auStack_390);
    _objc_release(param_1);
    FUN_10467108c(auStack_390);
    _memcpy(auStack_190,auStack_390,0x160);
  }
  FUN_104671f8c(auStack_530,0x11308b8c8,&UNK_10dd24d70);
  _memcpy(auStack_530,auStack_190,0x160);
  _memcpy(auStack_390,auStack_590,0x200);
  _objc_allocWithZone(unaff_x20);
  func_0x00010466f39c(auStack_390,auStack_790);
  puVar1 = auStack_390;
  FUN_10469a5e8(puVar1);
  func_0x00010466f3d0(auStack_590);
  return puVar1;
}



/* Entry: 10466fc00; end: 10466fdaf; -[SCAdTrackParseResult withWebViewParseResult:] */

void FUN_10466fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10466fb08(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10466fdb0; end: 10466fe0f; -[SCAdTrackParseResult withDeeplinkParseResult:] */

void FUN_10466fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010466fc60(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10466fe10; end: 104670477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10466fe10(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined1 auStack_a10 [56];
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 uStack_9c8;
  undefined1 uStack_9c7;
  undefined6 uStack_9c6;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined1 uStack_9b0;
  undefined7 uStack_9af;
  undefined8 uStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 uStack_988;
  undefined1 uStack_987;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined1 uStack_970;
  undefined8 uStack_968;
  undefined1 auStack_798 [504];
  undefined *puStack_5a0;
  undefined1 auStack_598 [504];
  undefined8 uStack_3a0;
  undefined1 auStack_398 [296];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [296];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  
  _swift_getObjectType();
  _objc_retain();
  FUN_10469b178(auStack_598);
  uStack_270 = uStack_3a0;
  _memcpy(auStack_798,auStack_598,0x200);
  if (param_1 == 0) {
    FUN_104671f8c(&uStack_270,0x11308b9f8,&UNK_10dd24d80);
    puStack_5a0 = (undefined *)0x0;
  }
  else {
    uVar20 = *(ulong *)(param_1 + _DAT_11308bde0);
    if (uVar20 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar20 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar20) {
        uVar15 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar15 != 0) {
      puStack_9a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x00010467073c(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104670478);
        (*pcVar9)();
      }
      lVar18 = 0;
      puVar21 = puStack_9a0;
      if ((uVar20 & 0xc000000000000001) == 0) goto LAB_10466fef0;
LAB_10466fee0:
      lVar10 = lVar18;
      func_0x000104670500(lVar18,uVar20);
      do {
        uStack_268 = *(undefined8 *)(lVar10 + _DAT_11308bd88);
        uStack_260 = *(undefined8 *)(lVar10 + _DAT_11308bd90);
        uStack_258 = *(undefined8 *)(lVar10 + _DAT_11308bd98);
        lVar13 = *(long *)(lVar10 + _DAT_11308bda0);
        if (lVar13 == 0) {
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_230 = 1;
          uStack_228 = 0;
          uStack_220 = 0;
        }
        else {
          uStack_9d8 = *(undefined8 *)(lVar13 + _DAT_11308bed8);
          uStack_9d0 = *(undefined8 *)(lVar13 + _DAT_11308bee0);
          uStack_9c8 = *(undefined1 *)(lVar13 + _DAT_11308bee8);
          uStack_9c7 = *(undefined1 *)(lVar13 + _DAT_11308bef0);
          uStack_9c0 = *(undefined8 *)(lVar13 + _DAT_11308bef8);
          uStack_9b8 = ((undefined8 *)(lVar13 + _DAT_11308bef8))[1];
          uStack_9b0 = *(undefined1 *)(lVar13 + _DAT_11308bf00);
          uStack_9a8 = *(undefined8 *)(lVar13 + _DAT_11308bf08);
          uStack_998 = uStack_9d8;
          uStack_990 = uStack_9d0;
          uStack_988 = uStack_9c8;
          uStack_987 = uStack_9c7;
          uStack_980 = uStack_9c0;
          uStack_978 = uStack_9b8;
          uStack_970 = uStack_9b0;
          uStack_968 = uStack_9a8;
          _swift_bridgeObjectRetain();
          FUN_104663fa0(&uStack_9d8,auStack_a10);
          FUN_104662df8(&uStack_998);
          uStack_240 = CONCAT62(uStack_9c6,CONCAT11(uStack_9c7,uStack_9c8));
          uStack_248 = uStack_9d0;
          uStack_250 = uStack_9d8;
          uStack_238 = uStack_9c0;
          uStack_228 = CONCAT71(uStack_9af,uStack_9b0);
          uStack_230 = uStack_9b8;
          uStack_220 = uStack_9a8;
        }
        lVar13 = *(long *)(lVar10 + _DAT_11308bda8);
        if (lVar13 == 0) {
          FUN_10465ec9c(&uStack_998);
          _memcpy(auStack_218,&uStack_998,0x160);
        }
        else {
          lVar16 = *(long *)(lVar13 + _DAT_11308cce0);
          if (lVar16 == 0) {
            func_0x000104671090(&uStack_998);
            _memcpy(auStack_218,&uStack_998,0x121);
            _objc_retain(lVar13);
          }
          else {
            _objc_retain(lVar13);
            _objc_retain(lVar16);
            FUN_1046a2878(auStack_398);
            _memcpy(auStack_218,auStack_398,0x121);
            func_0x0001046710c8(auStack_218);
          }
          lVar16 = *(long *)(lVar13 + _DAT_11308cce8);
          if (lVar16 == 0) {
            uStack_c8 = 0;
            uStack_f0 = 1;
            lStack_e0 = 0;
            uStack_d8 = 0;
            uStack_e8 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(lVar16 + _DAT_11308cf70);
            uVar3 = *(undefined1 *)(lVar16 + _DAT_11308cf78);
            uVar4 = *(undefined1 *)(lVar16 + _DAT_11308cf80);
            lVar19 = *(long *)(lVar16 + _DAT_11308cf88);
            bVar1 = lVar19 == 0;
            if (bVar1) {
              _swift_bridgeObjectRetain(uVar17);
              _objc_retain(lVar16);
            }
            else {
              _swift_bridgeObjectRetain(uVar17);
              _objc_retain(lVar16);
              func_0x00010c0b4ca0();
            }
            lVar11 = *(long *)(lVar16 + _DAT_11308cf90);
            if (lVar11 != 0) {
              func_0x00010c0b4ca0();
              _objc_release(lVar16);
              uStack_e8._0_2_ = CONCAT11(uVar4,uVar3);
              uStack_d8 = CONCAT71(uStack_d8._1_7_,bVar1);
              uStack_c8 = 0;
              uVar14 = *(undefined8 *)(lVar13 + _DAT_11308ccf0);
              uStack_f0 = uVar17;
              lStack_e0 = lVar19;
              lStack_d0 = lVar11;
              _objc_release(lVar13);
              uStack_c0 = uVar14;
              func_0x00010467108c(auStack_218);
              goto LAB_104670254;
            }
            _objc_release(lVar16);
            uStack_e8._0_2_ = CONCAT11(uVar4,uVar3);
            uStack_c8 = 1;
            uStack_d8 = CONCAT71(uStack_d8._1_7_,bVar1);
            uStack_f0 = uVar17;
            lStack_e0 = lVar19;
          }
          lStack_d0 = 0;
          uVar17 = *(undefined8 *)(lVar13 + _DAT_11308ccf0);
          _objc_release(lVar13);
          uStack_c0 = uVar17;
          func_0x00010467108c(auStack_218);
        }
LAB_104670254:
        lVar13 = *(long *)(lVar10 + _DAT_11308bdb0);
        if (lVar13 == 0) {
          _objc_release(lVar10);
          uVar17 = 0;
          uStack_a8 = 0;
          uVar14 = 0;
          uStack_b8 = 2;
        }
        else {
          bVar5 = *(byte *)(lVar13 + _DAT_11308bce8);
          cVar6 = *(char *)(lVar13 + _DAT_11308bcf0);
          uVar17 = *(undefined8 *)(lVar13 + _DAT_11308bcf8);
          bVar7 = *(byte *)(lVar13 + _DAT_11308bd00);
          cVar8 = *(char *)(lVar13 + _DAT_11308bd08);
          uVar14 = *(undefined8 *)(lVar13 + _DAT_11308bd10);
          _objc_release(lVar10);
          uStack_b8 = 0x100;
          if (cVar6 == '\0') {
            uStack_b8 = 0;
          }
          uStack_b8 = uStack_b8 | bVar5;
          uStack_a8 = 0x100;
          if (cVar8 == '\0') {
            uStack_a8 = 0;
          }
          uStack_a8 = uStack_a8 | bVar7;
        }
        uStack_b0 = uVar17;
        uStack_a0 = uVar14;
        _memcpy(&uStack_998,&uStack_268,0x1d0);
        uVar2 = *(ulong *)(puVar21 + 0x10);
        puStack_9a0 = puVar21;
        if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar2) {
          func_0x00010467073c(1 < *(ulong *)(puVar21 + 0x18),uVar2 + 1,1);
        }
        puVar21 = puStack_9a0;
        *(ulong *)(puStack_9a0 + 0x10) = uVar2 + 1;
        _memcpy(puStack_9a0 + uVar2 * 0x1d0 + 0x20,&uStack_998,0x1d0);
        if (uVar15 - 1 == lVar18) {
          FUN_104671f8c(&uStack_270,0x11308b9f8,&UNK_10dd24d80);
          puStack_5a0 = puVar21;
          goto LAB_104670410;
        }
        lVar18 = lVar18 + 1;
        if ((uVar20 & 0xc000000000000001) != 0) goto LAB_10466fee0;
LAB_10466fef0:
        lVar10 = *(long *)(uVar20 + lVar18 * 8 + 0x20);
        _objc_retain();
      } while( true );
    }
    FUN_104671f8c(&uStack_270,0x11308b9f8,&UNK_10dd24d80);
    puStack_5a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_104670410:
  _memcpy(&uStack_268,auStack_798,0x200);
  _objc_allocWithZone(unaff_x20);
  func_0x00010466f39c(&uStack_268,&uStack_998);
  puVar12 = &uStack_268;
  FUN_10469a5e8(puVar12);
  func_0x00010466f3d0(auStack_798);
  return puVar12;
}



/* Entry: 104670478; end: 1046704d7; -[SCAdTrackParseResult withCollectionParseResult:] */

void FUN_104670478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10466fe10(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046704d8; end: 10467069b;  */

void FUN_1046704d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010c0b4ca0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10467069c; end: 104670707;  */

void FUN_10467069c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 104670708; end: 1046707a7;  */

void FUN_104670708(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1046708cc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1046707a8; end: 1046708cb;  */

undefined * FUN_1046707a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1046708cc);
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
    puVar3 = (undefined *)0x11308ba08;
    func_0x0001000285a8(0x11308ba08,&UNK_10dd24dd8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x1d0) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110793a38);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x1d0 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x1d0);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1046708cc; end: 104670a07;  */

code * FUN_1046708cc(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104670a08);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_10467069c(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Entry: 104670a08; end: 104670b1f;  */

undefined * FUN_104670a08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104670b20);
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
    puVar3 = (undefined *)0x112dbe5f8;
    func_0x0001000285a8(0x112dbe5f8,&UNK_10d9797e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104670b20; end: 10467108b;  */

undefined8 FUN_104670b20(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_e60;
  long lStack_e58;
  long lStack_e50;
  long lStack_e48;
  long lStack_e40;
  long lStack_e38;
  long lStack_e30;
  long lStack_d00;
  long lStack_cf8;
  long lStack_cf0;
  long lStack_ce8;
  long lStack_ce0;
  long lStack_cd8;
  long lStack_cd0;
  long lStack_ba0;
  long lStack_b98;
  long lStack_b90;
  long lStack_b88;
  long lStack_b80;
  long lStack_b78;
  long lStack_b70;
  undefined1 auStack_a40 [56];
  undefined1 auStack_a08 [704];
  long lStack_748;
  long lStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  undefined1 auStack_5e8 [352];
  undefined1 auStack_488 [352];
  undefined1 auStack_328 [352];
  undefined1 auStack_1c8 [360];
  
  if ((((*param_1 != *param_2) || ((double)param_1[1] != (double)param_2[1])) ||
      ((double)param_1[2] != (double)param_2[2])) || ((double)param_1[3] != (double)param_2[3])) {
    return 0;
  }
  if ((char)param_1[9] == '\x01') {
    if ((char)param_2[9] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[9] == '\x01') {
      return 0;
    }
    auVar1._4_4_ = -(uint)((double)param_1[5] == (double)param_2[5]);
    auVar1._0_4_ = -(uint)((double)param_1[4] == (double)param_2[4]);
    auVar1._8_4_ = -(uint)((double)param_1[6] == (double)param_2[6]);
    auVar1._12_4_ = -(uint)((double)param_1[7] == (double)param_2[7]);
    uVar17 = NEON_uminv(auVar1,4);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    if ((double)param_1[8] != (double)param_2[8]) {
      return 0;
    }
  }
  if ((int)param_1[10] != (int)param_2[10]) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0xb) ^ *(byte *)(param_2 + 0xb)) & 1) != 0) {
    return 0;
  }
  _memcpy(auStack_328,param_1 + 0xc,0x160);
  _memcpy(auStack_488,param_2 + 0xc,0x160);
  _memcpy(&lStack_748,param_1 + 0xc,0x160);
  _memcpy(auStack_5e8,param_2 + 0xc,0x160);
  iVar9 = (int)&lStack_748;
  func_0x0001046632e8();
  if (iVar9 == 1) {
    iVar9 = (int)auStack_5e8;
    func_0x0001046632e8();
    if (iVar9 != 1) {
LAB_104670cf4:
      _memcpy(auStack_a08,&lStack_748,0x2c0);
      FUN_10466f354(auStack_328,auStack_1c8,0x11308b8c8,&UNK_10dd24d70);
      FUN_10466f354(auStack_488,auStack_1c8,0x11308b8c8,&UNK_10dd24d70);
      FUN_104671f8c(auStack_a08,0x11308b8d0,&UNK_10dd23ef0);
      return 0;
    }
    _memcpy(auStack_a08,&lStack_748,0x160);
    FUN_10466f354(auStack_328,auStack_1c8,0x11308b8c8,&UNK_10dd24d70);
    FUN_10466f354(auStack_488,auStack_1c8,0x11308b8c8,&UNK_10dd24d70);
    FUN_104671f8c(auStack_a08,0x11308b8c8,&UNK_10dd24d70);
  }
  else {
    _memcpy(&lStack_ba0,&lStack_748,0x160);
    iVar9 = (int)auStack_5e8;
    func_0x0001046632e8();
    if (iVar9 == 1) goto LAB_104670cf4;
    _memcpy(&lStack_d00,auStack_5e8,0x160);
    _memcpy(auStack_a08,auStack_5e8,0x160);
    _memcpy(auStack_1c8,&lStack_ba0,0x160);
    FUN_10466f354(auStack_328,&lStack_e60,0x11308b8c8,&UNK_10dd24d70);
    FUN_10466f354(auStack_488,&lStack_e60,0x11308b8c8,&UNK_10dd24d70);
    puVar10 = auStack_1c8;
    FUN_104676804(puVar10,auStack_a08);
    FUN_104671f8c(&lStack_d00,0x11308b8c8,&UNK_10dd24d70);
    FUN_104671f8c(&lStack_748,0x11308b8c8,&UNK_10dd24d70);
    if (((ulong)puVar10 & 1) == 0) {
      return 0;
    }
  }
  lVar5 = param_1[0x39];
  lVar14 = param_1[0x38];
  lVar20 = param_1[0x3b];
  lVar18 = param_1[0x3a];
  lVar6 = param_1[0x3d];
  lVar2 = param_1[0x3c];
  lVar13 = param_1[0x3e];
  lVar7 = param_2[0x39];
  lVar3 = param_2[0x38];
  lVar21 = param_2[0x3b];
  lVar19 = param_2[0x3a];
  lVar8 = param_2[0x3d];
  lVar4 = param_2[0x3c];
  lVar16 = param_2[0x3e];
  lStack_e60 = lVar3;
  lStack_e58 = lVar7;
  lStack_e50 = lVar19;
  lStack_e48 = lVar21;
  lStack_e40 = lVar4;
  lStack_e38 = lVar8;
  lStack_e30 = lVar16;
  lStack_d00 = lVar14;
  lStack_cf8 = lVar5;
  lStack_cf0 = lVar18;
  lStack_ce8 = lVar20;
  lStack_ce0 = lVar2;
  lStack_cd8 = lVar6;
  lStack_cd0 = lVar13;
  if (lVar2 == 1) {
    if (lVar4 != 1) {
LAB_104670ec8:
      FUN_10466f354(&lStack_d00,&lStack_748,0x11308b8c0,&UNK_10dd23e90);
      FUN_10466f354(&lStack_e60,&lStack_748,0x11308b8c0,&UNK_10dd23e90);
      func_0x0001046632d4(lVar14,lVar5,lVar18,lVar20,lVar2,lVar6,lVar13);
      func_0x0001046632d4(lVar3,lVar7,lVar19,lVar21,lVar4,lVar8,lVar16);
      return 0;
    }
    FUN_10466f354(&lStack_d00,&lStack_748,0x11308b8c0,&UNK_10dd23e90);
    FUN_10466f354(&lStack_e60,&lStack_748,0x11308b8c0,&UNK_10dd23e90);
    func_0x0001046632d4(lVar14,lVar5,lVar18,lVar20,1,lVar6,lVar13);
  }
  else {
    if (lVar4 == 1) goto LAB_104670ec8;
    lStack_ba0 = lVar14;
    lStack_b98 = lVar5;
    lStack_b90 = lVar18;
    lStack_b88 = lVar20;
    lStack_b80 = lVar2;
    lStack_b78 = lVar6;
    lStack_b70 = lVar13;
    lStack_748 = lVar3;
    lStack_740 = lVar7;
    lStack_738 = lVar19;
    lStack_730 = lVar21;
    lStack_728 = lVar4;
    lStack_720 = lVar8;
    lStack_718 = lVar16;
    FUN_10466f354(&lStack_d00,auStack_a40,0x11308b8c0,&UNK_10dd23e90);
    FUN_10466f354(&lStack_e60,auStack_a40,0x11308b8c0,&UNK_10dd23e90);
    plVar11 = &lStack_ba0;
    func_0x000104664a98(plVar11,&lStack_748);
    func_0x0001046632d4(lVar3,lVar7,lVar19,lVar21,lVar4,lVar8,lVar16);
    func_0x0001046632d4(lVar14,lVar5,lVar18,lVar20,lVar2,lVar6,lVar13);
    if (((ulong)plVar11 & 1) == 0) {
      return 0;
    }
  }
  uVar15 = param_1[0x3f];
  lVar14 = param_2[0x3f];
  if (uVar15 == 0) {
    if (lVar14 == 0) {
      return 1;
    }
  }
  else if (lVar14 != 0) {
    _swift_bridgeObjectRetain(lVar14);
    uVar12 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_1046650b4();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar12 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10467108c; end: 1046710cb;  */

void FUN_10467108c(void)

{
  return;
}



/* Entry: 1046710cc; end: 104671177;  */

long FUN_1046710cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104671178; end: 104671b63;  */

undefined8 * FUN_104671178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar5;
  param_1[2] = uVar6;
  uVar4 = param_2[4];
  uVar5 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar5;
  param_1[6] = uVar6;
  uVar4 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar4;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  lVar3 = param_2[0x17];
  if (lVar3 == 1) {
    _memcpy(param_1 + 0xc,param_2 + 0xc,0x121);
  }
  else {
    if (lVar3 == 2) {
      _memcpy(param_1 + 0xc,param_2 + 0xc,0x160);
      goto LAB_104671388;
    }
    param_1[0xc] = param_2[0xc];
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x12] = param_2[0x12];
    uVar4 = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    param_1[0x14] = uVar4;
    *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = lVar3;
    uVar4 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar4;
    param_1[0x1a] = param_2[0x1a];
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
    param_1[0x1c] = param_2[0x1c];
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
    param_1[0x1e] = param_2[0x1e];
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    param_1[0x20] = param_2[0x20];
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
    param_1[0x22] = param_2[0x22];
    uVar6 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = uVar6;
    uVar5 = param_2[0x26];
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
    param_1[0x26] = uVar5;
    uVar5 = param_2[0x28];
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
    param_1[0x28] = uVar5;
    uVar5 = param_2[0x2b];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x2b] = uVar5;
    uVar1 = param_2[0x2d];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = uVar1;
    uVar2 = param_2[0x2f];
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2f] = uVar2;
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  if (param_2[0x31] == 1) {
    uVar4 = param_2[0x31];
    uVar5 = param_2[0x34];
    uVar6 = param_2[0x33];
    param_1[0x32] = param_2[0x32];
    param_1[0x31] = uVar4;
    param_1[0x34] = uVar5;
    param_1[0x33] = uVar6;
    uVar4 = *(undefined8 *)((long)param_2 + 0x1a1);
    *(undefined8 *)((long)param_1 + 0x1a9) = *(undefined8 *)((long)param_2 + 0x1a9);
    *(undefined8 *)((long)param_1 + 0x1a1) = uVar4;
  }
  else {
    param_1[0x31] = param_2[0x31];
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x32);
    param_1[0x33] = param_2[0x33];
    *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    param_1[0x35] = param_2[0x35];
    *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
    _swift_bridgeObjectRetain();
  }
  param_1[0x37] = param_2[0x37];
LAB_104671388:
  lVar3 = param_2[0x3c];
  if (lVar3 == 1) {
    uVar4 = param_2[0x38];
    uVar5 = param_2[0x3b];
    uVar6 = param_2[0x3a];
    param_1[0x39] = param_2[0x39];
    param_1[0x38] = uVar4;
    param_1[0x3b] = uVar5;
    param_1[0x3a] = uVar6;
    uVar4 = param_2[0x3c];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3c] = uVar4;
    param_1[0x3e] = param_2[0x3e];
  }
  else {
    uVar4 = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    param_1[0x38] = uVar4;
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3c] = lVar3;
    *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
    param_1[0x3e] = param_2[0x3e];
    _swift_bridgeObjectRetain();
  }
  param_1[0x3f] = param_2[0x3f];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104671b64; end: 104671b6b;  */

void FUN_104671b64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x200);
  return;
}



/* Entry: 104671b6c; end: 104671e47;  */

undefined8 * FUN_104671b6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  param_1[3] = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  uVar3 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar3;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  if (param_1[0x17] == 2) {
LAB_104671bdc:
    _memcpy(param_1 + 0xc,param_2 + 0xc,0x160);
  }
  else {
    lVar2 = param_2[0x17];
    if (lVar2 == 2) {
      func_0x000104662e94(param_1 + 0xc);
      goto LAB_104671bdc;
    }
    if (param_1[0x17] == 1) {
LAB_104671c08:
      _memcpy(param_1 + 0xc,param_2 + 0xc,0x121);
    }
    else {
      if (lVar2 == 1) {
        func_0x000104662e2c(param_1 + 0xc);
        goto LAB_104671c08;
      }
      param_1[0xc] = param_2[0xc];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0x10] = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      param_1[0x12] = param_2[0x12];
      uVar3 = param_2[0x14];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      param_1[0x14] = uVar3;
      *(undefined1 *)((long)param_1 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = lVar2;
      _swift_bridgeObjectRelease();
      uVar3 = param_2[0x19];
      uVar1 = param_1[0x19];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0x1a] = param_2[0x1a];
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      param_1[0x1c] = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      param_1[0x1e] = param_2[0x1e];
      *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
      *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
      param_1[0x20] = param_2[0x20];
      uVar3 = param_2[0x22];
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
      param_1[0x22] = uVar3;
      uVar3 = param_2[0x25];
      uVar1 = param_1[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x25] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0x26] = param_2[0x26];
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
      param_1[0x28] = param_2[0x28];
      *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
      uVar3 = param_2[0x2b];
      uVar1 = param_1[0x2b];
      param_1[0x2a] = param_2[0x2a];
      param_1[0x2b] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = param_2[0x2d];
      uVar1 = param_1[0x2d];
      param_1[0x2c] = param_2[0x2c];
      param_1[0x2d] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = param_2[0x2f];
      uVar1 = param_1[0x2f];
      param_1[0x2e] = param_2[0x2e];
      param_1[0x2f] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if (param_1[0x31] == 1) {
LAB_104671d70:
      lVar2 = param_2[0x31];
      uVar1 = param_2[0x34];
      uVar3 = param_2[0x33];
      param_1[0x32] = param_2[0x32];
      param_1[0x31] = lVar2;
      param_1[0x34] = uVar1;
      param_1[0x33] = uVar3;
      uVar3 = *(undefined8 *)((long)param_2 + 0x1a1);
      *(undefined8 *)((long)param_1 + 0x1a9) = *(undefined8 *)((long)param_2 + 0x1a9);
      *(undefined8 *)((long)param_1 + 0x1a1) = uVar3;
    }
    else {
      lVar2 = param_2[0x31];
      if (lVar2 == 1) {
        func_0x000104662e60(param_1 + 0x31);
        goto LAB_104671d70;
      }
      param_1[0x31] = lVar2;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
      *(undefined1 *)((long)param_1 + 0x191) = *(undefined1 *)((long)param_2 + 0x191);
      param_1[0x33] = param_2[0x33];
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
      param_1[0x35] = param_2[0x35];
      *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
    }
    param_1[0x37] = param_2[0x37];
  }
  if (param_1[0x3c] != 1) {
    lVar2 = param_2[0x3c];
    if (lVar2 != 1) {
      uVar3 = param_2[0x38];
      param_1[0x39] = param_2[0x39];
      param_1[0x38] = uVar3;
      *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x1d1) = *(undefined1 *)((long)param_2 + 0x1d1);
      param_1[0x3b] = param_2[0x3b];
      param_1[0x3c] = lVar2;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
      goto LAB_104671e24;
    }
    func_0x000104662df8(param_1 + 0x38);
  }
  uVar3 = param_2[0x38];
  uVar4 = param_2[0x3b];
  uVar1 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar4;
  param_1[0x3a] = uVar1;
  uVar3 = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar3;
LAB_104671e24:
  uVar3 = param_2[0x3f];
  uVar1 = param_1[0x3f];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104671e48; end: 104671f8b;  */

int FUN_104671e48(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x80] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x7e);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104671f8c; end: 104671fcb;  */

undefined8 FUN_104671f8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104671fcc; end: 104672023;  */

uint FUN_104671fcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_104672024(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104672024; end: 10467215f;  */

bool FUN_104672024(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)) &&
      ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)))) &&
     (((int)param_1[4] == (int)param_2[4] && ((int)param_1[5] == (int)param_2[5])))) {
    bVar1 = param_1[6] == param_2[6];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104672160; end: 1046721e3;  */

undefined8 * FUN_104672160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1046721e4; end: 104672237;  */

undefined8 * FUN_1046721e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 104672238; end: 1046722db;  */

int FUN_104672238(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046722dc; end: 104672333;  */

bool FUN_1046722dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_2[2];
  if ((uVar2 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) == 0)) {
    return false;
  }
  return uVar1 == uVar3;
}



/* Entry: 104672334; end: 10467233b;  */

void FUN_104672334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10467233c; end: 10467236f;  */

undefined8 * FUN_10467233c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104672370; end: 1046723c3;  */

undefined8 * FUN_104672370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1046723c4; end: 1046723ff;  */

undefined8 * FUN_1046723c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 104672400; end: 10467249f;  */

int FUN_104672400(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046724a0; end: 10467251f;  */

uint FUN_1046724a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_104673224(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 104672520; end: 1046725c7;  */

void FUN_104672520(void)

{
  undefined8 *puVar1;
  undefined1 auStack_200 [160];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
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
  undefined1 uStack_a0;
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
  
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 1;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 10;
  uStack_100 = 0x17;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 1;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 10;
  uStack_60 = 0x17;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x000102c62cd4(&uStack_160,auStack_200);
  func_0x000102c62d10(&uStack_c0);
  FUN_10469d938(0);
  _objc_allocWithZone();
  puVar1 = &uStack_160;
  FUN_10469d28c();
  puRam00000001138151a8 = puVar1;
  return;
}



/* Entry: 1046725c8; end: 104672607; +[SCAdTrackCommon identity] */

void FUN_1046725c8(void)

{
  if (lRam000000011308ba10 != -1) {
    _swift_once(0x11308ba10,FUN_104672520);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138151a8);
  return;
}



/* Entry: 104672608; end: 104672717; -[SCAdTrackCommon withAdIdentifier:] */

void FUN_104672608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_2d0 [160];
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_e0;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_190);
  uStack_e8 = uStack_188;
  uStack_f0 = uStack_190;
  func_0x000101994d34(&uStack_f0);
  uStack_1c8 = uStack_128;
  uStack_1d0 = uStack_130;
  uStack_1b8 = uStack_118;
  uStack_1c0 = uStack_120;
  uStack_1a8 = uStack_108;
  uStack_1b0 = uStack_110;
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_208 = uStack_168;
  uStack_210 = uStack_170;
  uStack_1f8 = uStack_158;
  uStack_200 = uStack_160;
  uStack_1e8 = uStack_148;
  uStack_1f0 = uStack_150;
  uStack_1d8 = uStack_138;
  uStack_1e0 = uStack_140;
  uStack_218 = uStack_178;
  uStack_220 = uStack_180;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_58 = uStack_108;
  uStack_60 = uStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  lStack_230 = param_3;
  uStack_228 = param_2;
  lStack_e0 = param_3;
  uStack_d8 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&lStack_e0,auStack_2d0);
  plVar2 = &lStack_e0;
  FUN_10469d28c(plVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&lStack_230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 104672718; end: 1046727d3; -[SCAdTrackCommon withSnapIndex:] */

void FUN_104672718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_170 = param_3;
  uStack_d0 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1046727d4; end: 1046728bf; -[SCAdTrackCommon withCollectionItemIndex:] */

void FUN_1046727d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_210 [160];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
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
  long lStack_b8;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  _objc_retain();
  FUN_10469d68c(&uStack_170,param_1);
  uStack_150 = param_3 == 0;
  if ((bool)uStack_150) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c067fc0();
  }
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_38 = uStack_d8;
  uStack_40 = uStack_e0;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_b0 = CONCAT71(uStack_14f,uStack_150);
  uStack_a8 = uStack_148;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_c0 = uStack_160;
  lStack_158 = lVar2;
  lStack_b8 = lVar2;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_d0,auStack_210);
  puVar3 = &uStack_d0;
  FUN_10469d28c(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046728c0; end: 10467297b; -[SCAdTrackCommon withTimestamp:] */

void FUN_1046728c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_158 = param_1;
  uStack_b8 = param_1;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_2);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10467297c; end: 104672a8b; -[SCAdTrackCommon withAdServeItemId:] */

void FUN_10467297c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_2d0 [160];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_b0;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_190);
  uStack_e8 = uStack_158;
  uStack_f0 = uStack_160;
  func_0x000101994d34(&uStack_f0);
  uStack_1c8 = uStack_128;
  uStack_1d0 = uStack_130;
  uStack_1b8 = uStack_118;
  uStack_1c0 = uStack_120;
  uStack_1a8 = uStack_108;
  uStack_1b0 = uStack_110;
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_208 = uStack_168;
  uStack_210 = uStack_170;
  uStack_1e8 = uStack_148;
  uStack_1f0 = uStack_150;
  uStack_1d8 = uStack_138;
  uStack_1e0 = uStack_140;
  uStack_228 = uStack_188;
  uStack_230 = uStack_190;
  uStack_218 = uStack_178;
  uStack_220 = uStack_180;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_58 = uStack_108;
  uStack_60 = uStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  lStack_200 = param_3;
  uStack_1f8 = param_2;
  lStack_b0 = param_3;
  uStack_a8 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_2d0);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104672a8c; end: 104672b9b; -[SCAdTrackCommon withAdId:] */

void FUN_104672a8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_2d0 [160];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_a0;
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_190);
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  func_0x000101994d34(&uStack_f0);
  uStack_1c8 = uStack_128;
  uStack_1d0 = uStack_130;
  uStack_1b8 = uStack_118;
  uStack_1c0 = uStack_120;
  uStack_1a8 = uStack_108;
  uStack_1b0 = uStack_110;
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_208 = uStack_168;
  uStack_210 = uStack_170;
  uStack_1f8 = uStack_158;
  uStack_200 = uStack_160;
  uStack_1d8 = uStack_138;
  uStack_1e0 = uStack_140;
  uStack_228 = uStack_188;
  uStack_230 = uStack_190;
  uStack_218 = uStack_178;
  uStack_220 = uStack_180;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_58 = uStack_108;
  uStack_60 = uStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  lStack_1f0 = param_3;
  uStack_1e8 = param_2;
  lStack_a0 = param_3;
  uStack_98 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_2d0);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104672b9c; end: 104672c57; -[SCAdTrackCommon withTrackSeqNum:] */

void FUN_104672b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_130 = param_3;
  uStack_90 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104672c58; end: 104672d13; -[SCAdTrackCommon withViewSeqNum:] */

void FUN_104672c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_90 = uStack_130;
  uStack_128 = param_3;
  uStack_88 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104672d14; end: 104672dcf; -[SCAdTrackCommon withAdType:] */

void FUN_104672d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_78 = uStack_118;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_120 = param_3;
  uStack_80 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104672dd0; end: 104672e8b; -[SCAdTrackCommon withAdProductType:] */

void FUN_104672dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_220 [160];
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
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10469d68c(&uStack_180);
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_118 = param_3;
  uStack_78 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x000102c62cd4(&uStack_e0,auStack_220);
  puVar2 = &uStack_e0;
  FUN_10469d28c(puVar2);
  _objc_release(param_1);
  func_0x000102c62d10(&uStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


