/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10474134c; end: 1047413eb;  */

int FUN_10474134c(int *param_1,int param_2)

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



/* Entry: 1047413ec; end: 104741567;  */

void FUN_1047413ec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  double dVar1;
  
  __ss6HasherV8_combineyys5UInt8VF((uint)param_4 & 1);
  __ss6HasherV8_combineyys6UInt32VF((int)((ulong)param_4 >> 0x20));
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  if ((param_5 & 0xff00000000) == 0x100000000) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(param_5);
  }
  return;
}



/* Entry: 104741568; end: 1047415a7;  */

void FUN_104741568(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint5 uVar3;
  byte *unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [72];
  
  bVar2 = *unaff_x20;
  dVar5 = *(double *)(unaff_x20 + 8);
  dVar6 = *(double *)(unaff_x20 + 0x10);
  uVar3 = *(uint5 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined4 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar6 != 0.0) {
    dVar4 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  if (((ulong)uVar3 & 0xff00000000) == 0x100000000) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF((ulong)uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047415a8; end: 104741613;  */

void FUN_1047415a8(void)

{
  uint uVar1;
  byte bVar2;
  uint5 uVar3;
  byte *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  bVar2 = *unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(uint5 *)(unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_1047413ec(uVar4,uVar5,auStack_88,(ulong)bVar2 | (ulong)uVar1 << 0x20,(ulong)uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104741614; end: 1047416b3;  */

undefined8 FUN_104741614(byte *param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  if ((((((ulong)*param_1 | (ulong)*(uint *)(param_1 + 4) << 0x20) ^
        ((ulong)*param_2 | (ulong)*(uint *)(param_2 + 4) << 0x20)) & 0xffffffff00000001) == 0) &&
     (bVar2 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
    bVar2 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
  }
  bVar3 = false;
  if ((bVar2) &&
     (bVar3 = false, !NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_2 + 0x10)))) {
    bVar3 = *(double *)(param_1 + 0x10) == *(double *)(param_2 + 0x10);
  }
  if (bVar3) {
    cVar1 = (char)((uint5)*(undefined5 *)(param_2 + 0x18) >> 0x20);
    if (((ulong)*(uint5 *)(param_1 + 0x18) & 0xff00000000) == 0x100000000) {
      if (cVar1 == '\x01') {
        return 1;
      }
    }
    else if ((cVar1 != '\x01') &&
            ((int)*(uint5 *)(param_1 + 0x18) == (int)*(undefined5 *)(param_2 + 0x18))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047416b4; end: 1047416f3;  */

void FUN_1047416b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32440;
  _swift_getWitnessTable(&UNK_10dd32440,&UNK_11079e748);
  puRam000000011308e4a8 = puVar1;
  return;
}



/* Entry: 1047416f4; end: 10474171f;  */

long FUN_1047416f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104741720; end: 1047417cf;  */

int FUN_104741720(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x1d] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047417d0; end: 1047418bf;  */

void FUN_1047417d0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  lVar5 = unaff_x20[2];
  if (lVar5 != 1) {
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar5);
    }
    if (lVar2 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      lVar5 = unaff_x20[6];
      goto joined_r0x00010474188c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar5 = unaff_x20[6];
joined_r0x00010474188c:
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar4 = unaff_x20[5];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 1047418c0; end: 1047418fb;  */

void FUN_1047418c0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047417d0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047418fc; end: 1047418ff;  */

void FUN_1047418fc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  lVar5 = unaff_x20[2];
  if (lVar5 != 1) {
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar5);
    }
    if (lVar2 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      lVar5 = unaff_x20[6];
      goto joined_r0x00010474188c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar5 = unaff_x20[6];
joined_r0x00010474188c:
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar4 = unaff_x20[5];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 104741900; end: 104741937;  */

void FUN_104741900(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047417d0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104741938; end: 10474198f;  */

uint FUN_104741938(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104741990(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104741990; end: 104741b43;  */

undefined8 FUN_104741990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar10 = param_1[4];
  uVar2 = *param_2;
  uVar5 = param_2[1];
  lVar9 = param_2[2];
  uVar6 = param_2[3];
  uVar11 = param_2[4];
  if (lVar8 == 1) {
    if (lVar9 != 1) {
LAB_1047419e4:
      func_0x00010470dc90(uVar2,uVar5,lVar9,uVar6,uVar11);
      func_0x00010470dc90(uVar1,uVar3,lVar8,uVar4,uVar10);
      func_0x000101553c50(uVar1,uVar3,lVar8,uVar4,uVar10);
      func_0x000101553c50(uVar2,uVar5,lVar9,uVar6,uVar11);
      return 0;
    }
  }
  else {
    if (lVar9 == 1) goto LAB_1047419e4;
    uStack_b0 = uVar1;
    uStack_a8 = uVar3;
    lStack_a0 = lVar8;
    uStack_98 = uVar4;
    uStack_90 = uVar10;
    uStack_88 = uVar2;
    uStack_80 = uVar5;
    lStack_78 = lVar9;
    uStack_70 = uVar6;
    uStack_68 = uVar11;
    func_0x00010470dc90(uVar2,uVar5,lVar9,uVar6,uVar11);
    func_0x00010470dc90(uVar1,uVar3,lVar8,uVar4,uVar10);
    FUN_10474212c(&uStack_b0,&uStack_88);
    _swift_bridgeObjectRelease(lVar9);
    _swift_bridgeObjectRelease(uVar11);
    func_0x000101553c50(uVar1,uVar3,lVar8,uVar4,uVar10);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  lVar9 = param_1[6];
  lVar8 = param_2[6];
  if (lVar9 == 0) {
    if (lVar8 == 0) {
      return 1;
    }
  }
  else if (lVar8 != 0) {
    uVar7 = param_1[5];
    if ((uVar7 == param_2[5]) && (lVar9 == lVar8)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,lVar9,param_2[5],lVar8,0);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104741b44; end: 104741b47;  */

void FUN_104741b44(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd324c8;
  _swift_getWitnessTable(&UNK_10dd324c8,&UNK_11079e810);
  puRam000000011308e4b0 = puVar1;
  return;
}



/* Entry: 104741b48; end: 104741b87;  */

void FUN_104741b48(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd324c8;
  _swift_getWitnessTable(&UNK_10dd324c8,&UNK_11079e810);
  puRam000000011308e4b0 = puVar1;
  return;
}



/* Entry: 104741b88; end: 104741beb;  */

long FUN_104741b88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104741bec; end: 104741d7b;  */

undefined8 * FUN_104741bec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[2];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    param_1[2] = lVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104741d7c; end: 104741e03;  */

undefined8 * FUN_104741d7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1[2] != 1) {
    lVar2 = param_2[2];
    if (lVar2 != 1) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = lVar2;
      _swift_bridgeObjectRelease();
      uVar3 = param_2[4];
      uVar1 = param_1[4];
      param_1[3] = param_2[3];
      param_1[4] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_104741de4;
    }
    func_0x0001017b649c(param_1);
  }
  uVar3 = *param_2;
  uVar4 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
LAB_104741de4:
  uVar3 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104741e04; end: 104741ecf;  */

int FUN_104741e04(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
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



/* Entry: 104741ed0; end: 104741f8f;  */

void FUN_104741ed0(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar1 = unaff_x20[2];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[4];
  }
  else {
    uVar2 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[4];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104741f90; end: 104741f93;  */

void FUN_104741f90(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar1 = unaff_x20[2];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[4];
  }
  else {
    uVar2 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[4];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104741f94; end: 1047420e3;  */

void FUN_104741f94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  
  uVar2 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  lVar4 = unaff_x20[4];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  if (lVar4 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar3,lVar4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047420e4; end: 10474212b;  */

uint FUN_1047420e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_10474212c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10474212c; end: 1047421ef;  */

undefined8 FUN_10474212c(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 4);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 2);
    if ((uVar3 != *(ulong *)(param_2 + 2) || lVar2 != lVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 2),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 6);
    if ((uVar3 == *(ulong *)(param_2 + 6)) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,*(ulong *)(param_2 + 6),lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047421f0; end: 1047421f3;  */

void FUN_1047421f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32540;
  _swift_getWitnessTable(&UNK_10dd32540,&UNK_11079e8c8);
  puRam000000011308e4b8 = puVar1;
  return;
}



/* Entry: 1047421f4; end: 104742233;  */

void FUN_1047421f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32540;
  _swift_getWitnessTable(&UNK_10dd32540,&UNK_11079e8c8);
  puRam000000011308e4b8 = puVar1;
  return;
}



/* Entry: 104742234; end: 1047422cb;  */

long FUN_104742234(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047422cc; end: 10474233f;  */

undefined8 * FUN_1047422cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104742340; end: 10474238b;  */

undefined8 * FUN_104742340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474238c; end: 104742453;  */

int FUN_10474238c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104742454; end: 1047424bf;  */

void FUN_104742454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0x112e092e0;
  FUN_1047425ac(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047424c0; end: 104742517;  */

void FUN_1047424c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0x112e092e0;
  FUN_1047425ac(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_11034d7c0)(param_1,uVar1,uVar2);
  return;
}



/* Entry: 104742518; end: 10474257f;  */

void FUN_104742518(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  uVar2 = 0x112e092e0;
  FUN_1047425ac(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104742580; end: 1047425ab;  */

void FUN_104742580(void)

{
  FUN_1047425ac(0x11308e4c0,FUN_1047425ec,&UNK_10dd325b8);
  return;
}



/* Entry: 1047425ac; end: 1047425eb;  */

void FUN_1047425ac(long *param_1,code *param_2,long param_3)

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



/* Entry: 1047425ec; end: 104742623;  */

void FUN_1047425ec(undefined8 param_1)

{
  if (lRam000000011308e520 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a348);
  return;
}



/* Entry: 104742624; end: 104742627;  */

void FUN_104742624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation3URLV2eeoiySbAC_ACtFZ_110350938)();
  return;
}



/* Entry: 104742628; end: 1047427a7;  */

void FUN_104742628(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000104742660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1047427a8; end: 1047427bf;  */

void FUN_1047427a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1047427c0; end: 104742827;  */

void FUN_1047427c0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 104742828; end: 104742917;  */

void FUN_104742828(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  lVar5 = unaff_x20[2];
  if (lVar5 != 1) {
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar5);
    }
    if (lVar2 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      lVar5 = unaff_x20[6];
      goto joined_r0x0001047428e4;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar5 = unaff_x20[6];
joined_r0x0001047428e4:
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar4 = unaff_x20[5];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 104742918; end: 104742953;  */

void FUN_104742918(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104742828(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104742954; end: 104742957;  */

void FUN_104742954(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  lVar5 = unaff_x20[2];
  if (lVar5 != 1) {
    uVar4 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if (lVar5 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar5);
    }
    if (lVar2 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
      lVar5 = unaff_x20[6];
      goto joined_r0x0001047428e4;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar5 = unaff_x20[6];
joined_r0x0001047428e4:
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar4 = unaff_x20[5];
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 104742958; end: 10474298f;  */

void FUN_104742958(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104742828(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104742990; end: 1047429e7;  */

uint FUN_104742990(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1047429e8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047429e8; end: 104742b9b;  */

undefined8 FUN_1047429e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar10 = param_1[4];
  uVar2 = *param_2;
  uVar5 = param_2[1];
  lVar9 = param_2[2];
  uVar6 = param_2[3];
  uVar11 = param_2[4];
  if (lVar8 == 1) {
    if (lVar9 != 1) {
LAB_104742a3c:
      func_0x00010470dc90(uVar2,uVar5,lVar9,uVar6,uVar11);
      func_0x00010470dc90(uVar1,uVar3,lVar8,uVar4,uVar10);
      func_0x000101553c50(uVar1,uVar3,lVar8,uVar4,uVar10);
      func_0x000101553c50(uVar2,uVar5,lVar9,uVar6,uVar11);
      return 0;
    }
  }
  else {
    if (lVar9 == 1) goto LAB_104742a3c;
    uStack_b0 = uVar1;
    uStack_a8 = uVar3;
    lStack_a0 = lVar8;
    uStack_98 = uVar4;
    uStack_90 = uVar10;
    uStack_88 = uVar2;
    uStack_80 = uVar5;
    lStack_78 = lVar9;
    uStack_70 = uVar6;
    uStack_68 = uVar11;
    func_0x00010470dc90(uVar2,uVar5,lVar9,uVar6,uVar11);
    func_0x00010470dc90(uVar1,uVar3,lVar8,uVar4,uVar10);
    FUN_10474212c(&uStack_b0,&uStack_88);
    _swift_bridgeObjectRelease(lVar9);
    _swift_bridgeObjectRelease(uVar11);
    func_0x000101553c50(uVar1,uVar3,lVar8,uVar4,uVar10);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  lVar9 = param_1[6];
  lVar8 = param_2[6];
  if (lVar9 == 0) {
    if (lVar8 == 0) {
      return 1;
    }
  }
  else if (lVar8 != 0) {
    uVar7 = param_1[5];
    if ((uVar7 == param_2[5]) && (lVar9 == lVar8)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,lVar9,param_2[5],lVar8,0);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104742b9c; end: 104742b9f;  */

void FUN_104742b9c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32630;
  _swift_getWitnessTable(&UNK_10dd32630,&UNK_11079e9c0);
  puRam000000011308e558 = puVar1;
  return;
}



/* Entry: 104742ba0; end: 104742bdf;  */

void FUN_104742ba0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32630;
  _swift_getWitnessTable(&UNK_10dd32630,&UNK_11079e9c0);
  puRam000000011308e558 = puVar1;
  return;
}



/* Entry: 104742be0; end: 104742c43;  */

long FUN_104742be0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104742c44; end: 104742dd3;  */

undefined8 * FUN_104742c44(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[2];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    param_1[2] = lVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104742dd4; end: 104742e5b;  */

undefined8 * FUN_104742dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1[2] != 1) {
    lVar2 = param_2[2];
    if (lVar2 != 1) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = lVar2;
      _swift_bridgeObjectRelease();
      uVar3 = param_2[4];
      uVar1 = param_1[4];
      param_1[3] = param_2[3];
      param_1[4] = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_104742e3c;
    }
    func_0x0001017b649c(param_1);
  }
  uVar3 = *param_2;
  uVar4 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
LAB_104742e3c:
  uVar3 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104742e5c; end: 104742f27;  */

int FUN_104742e5c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
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



/* Entry: 104742f28; end: 104742f5f;  */

void FUN_104742f28(undefined8 param_1)

{
  if (lRam000000011308e5c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a38c);
  return;
}



/* Entry: 104742f60; end: 104743053;  */

void FUN_104742f60(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar4 = 0;
  __s10Foundation3URLVMa(0);
  uVar5 = 0x112e092e0;
  FUN_1047431e8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar4,uVar5);
  lVar6 = 0;
  FUN_104742f28();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x14));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x18)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x1c)));
  puVar2 = (ulong *)(unaff_x20 + *(int *)(lVar6 + 0x20));
  if ((char)puVar2[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x24)));
  return;
}



/* Entry: 104743054; end: 10474308f;  */

void FUN_104743054(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104742f60(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104743090; end: 104743093;  */

void FUN_104743090(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar4 = 0;
  __s10Foundation3URLVMa(0);
  uVar5 = 0x112e092e0;
  FUN_1047431e8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar4,uVar5);
  lVar6 = 0;
  FUN_104742f28();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x14));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x18)));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x1c)));
  puVar2 = (ulong *)(unaff_x20 + *(int *)(lVar6 + 0x20));
  if ((char)puVar2[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x24)));
  return;
}



/* Entry: 104743094; end: 1047430cb;  */

void FUN_104743094(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104742f60(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047430cc; end: 1047430cf;  */

byte FUN_1047430cc(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  double *pdVar3;
  double *pdVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ();
  if ((uVar7 & 1) != 0) {
    lVar8 = 0;
    FUN_104742f28();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar8 + 0x14));
    uVar7 = *puVar1;
    puVar2 = (ulong *)(param_2 + *(int *)(lVar8 + 0x14));
    if ((((uVar7 == *puVar2 && puVar1[1] == puVar2[1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) != 0)) &&
        (*(char *)(param_1 + (long)*(int *)(lVar8 + 0x18)) ==
         *(char *)(param_2 + *(int *)(lVar8 + 0x18)))) &&
       (*(char *)(param_1 + (long)*(int *)(lVar8 + 0x1c)) ==
        *(char *)(param_2 + *(int *)(lVar8 + 0x1c)))) {
      pdVar3 = (double *)(param_1 + (long)*(int *)(lVar8 + 0x20));
      pdVar4 = (double *)(param_2 + *(int *)(lVar8 + 0x20));
      cVar5 = *(char *)(pdVar4 + 1);
      if (*(char *)(pdVar3 + 1) == '\x01') {
        if (cVar5 == '\x01') {
LAB_1047431a4:
          bVar9 = *(byte *)(param_1 + (long)*(int *)(lVar8 + 0x24)) ^
                  *(byte *)(param_2 + *(int *)(lVar8 + 0x24)) ^ 1;
          goto LAB_104743154;
        }
      }
      else {
        dVar10 = *pdVar4;
        dVar11 = *pdVar3;
        bVar6 = false;
        if ((cVar5 != '\x01') && (bVar6 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar6 = dVar11 == dVar10;
        }
        if (bVar6) goto LAB_1047431a4;
      }
    }
  }
  bVar9 = 0;
LAB_104743154:
  return bVar9 & 1;
}



/* Entry: 1047430d0; end: 1047431bb;  */

byte FUN_1047430d0(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  double *pdVar3;
  double *pdVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ();
  if ((uVar7 & 1) != 0) {
    lVar8 = 0;
    FUN_104742f28();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar8 + 0x14));
    uVar7 = *puVar1;
    puVar2 = (ulong *)(param_2 + *(int *)(lVar8 + 0x14));
    if ((((uVar7 == *puVar2 && puVar1[1] == puVar2[1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) != 0)) &&
        (*(char *)(param_1 + (long)*(int *)(lVar8 + 0x18)) ==
         *(char *)(param_2 + *(int *)(lVar8 + 0x18)))) &&
       (*(char *)(param_1 + (long)*(int *)(lVar8 + 0x1c)) ==
        *(char *)(param_2 + *(int *)(lVar8 + 0x1c)))) {
      pdVar3 = (double *)(param_1 + (long)*(int *)(lVar8 + 0x20));
      pdVar4 = (double *)(param_2 + *(int *)(lVar8 + 0x20));
      cVar5 = *(char *)(pdVar4 + 1);
      if (*(char *)(pdVar3 + 1) == '\x01') {
        if (cVar5 == '\x01') {
LAB_1047431a4:
          bVar9 = *(byte *)(param_1 + (long)*(int *)(lVar8 + 0x24)) ^
                  *(byte *)(param_2 + *(int *)(lVar8 + 0x24)) ^ 1;
          goto LAB_104743154;
        }
      }
      else {
        dVar10 = *pdVar4;
        dVar11 = *pdVar3;
        bVar6 = false;
        if ((cVar5 != '\x01') && (bVar6 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar6 = dVar11 == dVar10;
        }
        if (bVar6) goto LAB_1047431a4;
      }
    }
  }
  bVar9 = 0;
LAB_104743154:
  return bVar9 & 1;
}



/* Entry: 1047431bc; end: 1047431e7;  */

void FUN_1047431bc(void)

{
  FUN_1047431e8(0x11308e560,FUN_104742f28,&UNK_10dd326a8);
  return;
}



/* Entry: 1047431e8; end: 104743227;  */

void FUN_1047431e8(long *param_1,code *param_2,long param_3)

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



/* Entry: 104743228; end: 1047432f3;  */

long * FUN_104743228(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
    iVar4 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1047432f4; end: 10474333b;  */

void FUN_1047432f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Entry: 10474333c; end: 1047435cf;  */

long FUN_10474333c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_1 + iVar4) = *(undefined1 *)(param_2 + iVar4);
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047435d0; end: 1047435e7;  */

void FUN_1047435d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1047435e8; end: 10474366f;  */

void FUN_1047435e8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dd326e0;
    puStack_40 = &UNK_10dd326f8;
    puStack_38 = &UNK_10dd326f8;
    puStack_30 = &UNK_10dd32710;
    puStack_28 = &UNK_10dd326f8;
    _swift_initStructMetadata(param_1,0x100,6,&lStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 104743670; end: 10474392f;  */

void FUN_104743670(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((char)unaff_x20[4] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    uVar4 = *unaff_x20;
    uVar1 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[9] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[7];
    uVar6 = unaff_x20[8];
    uVar4 = unaff_x20[5];
    uVar1 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xb] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xd] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xf] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0x11] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0x13] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if (*(char *)((long)unaff_x20 + 0xb9) != '\x01') {
    uVar6 = unaff_x20[0x14];
    uVar4 = unaff_x20[0x16];
    uVar2 = unaff_x20[0x17];
    uVar5 = unaff_x20[0x15];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((char)uVar5 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar5 = 0;
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        uVar5 = uVar6;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar5);
    }
    if ((char)uVar2 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar2 = 0;
      if ((uVar4 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar4;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar2);
      goto LAB_1047438a4;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1047438a4:
  if ((char)unaff_x20[0x19] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  bVar3 = *(byte *)((long)unaff_x20 + 0xc9);
  if (bVar3 == 2) {
    bVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar3 = bVar3 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3);
  bVar3 = *(byte *)((long)unaff_x20 + 0xca);
  if (bVar3 == 2) {
    bVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar3 = bVar3 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3);
  return;
}



/* Entry: 104743930; end: 10474396b;  */

void FUN_104743930(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104743670(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474396c; end: 10474396f;  */

void FUN_10474396c(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((char)unaff_x20[4] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    uVar4 = *unaff_x20;
    uVar1 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[9] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[7];
    uVar6 = unaff_x20[8];
    uVar4 = unaff_x20[5];
    uVar1 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xb] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xd] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0xf] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0x11] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)unaff_x20[0x13] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x12];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if (*(char *)((long)unaff_x20 + 0xb9) != '\x01') {
    uVar6 = unaff_x20[0x14];
    uVar4 = unaff_x20[0x16];
    uVar2 = unaff_x20[0x17];
    uVar5 = unaff_x20[0x15];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((char)uVar5 == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar5 = 0;
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        uVar5 = uVar6;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar5);
    }
    if ((char)uVar2 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar2 = 0;
      if ((uVar4 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar4;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar2);
      goto LAB_1047438a4;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1047438a4:
  if ((char)unaff_x20[0x19] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  bVar3 = *(byte *)((long)unaff_x20 + 0xc9);
  if (bVar3 == 2) {
    bVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar3 = bVar3 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3);
  bVar3 = *(byte *)((long)unaff_x20 + 0xca);
  if (bVar3 == 2) {
    bVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar3 = bVar3 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3);
  return;
}



/* Entry: 104743970; end: 1047439a7;  */

void FUN_104743970(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104743670(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047439a8; end: 104743a4b;  */

uint FUN_1047439a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined3 uStack_108;
  undefined5 uStack_105;
  undefined3 uStack_100;
  undefined8 uStack_fd;
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
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_110 = param_1[0x16];
  uStack_108 = (undefined3)param_1[0x17];
  uStack_fd = *(undefined8 *)((long)param_1 + 0xc3);
  uStack_105 = (undefined5)*(undefined8 *)((long)param_1 + 0xbb);
  uStack_100 = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xbb) >> 0x28);
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_40 = param_2[0x16];
  uStack_38 = (undefined3)param_2[0x17];
  uStack_2d = *(undefined8 *)((long)param_2 + 0xc3);
  uStack_35 = (undefined5)*(undefined8 *)((long)param_2 + 0xbb);
  uStack_30 = (undefined3)((ulong)*(undefined8 *)((long)param_2 + 0xbb) >> 0x28);
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_104743a4c(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 104743a4c; end: 104743d4b;  */

undefined8 FUN_104743a4c(double *param_1,double *param_2)

{
  byte bVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    if (*(char *)(param_2 + 4) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)(param_2 + 4) == '\x01' ||
           (((-(*param_1 == *param_2) & 1U) + (-(param_1[1] == param_2[1]) & 2U) +
             (-(param_1[2] == param_2[2]) & 4U) + (-(param_1[3] == param_2[3]) & 8U) ^ 0xff) & 0xf)
           != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    if (*(char *)(param_2 + 9) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 9) == '\x01') {
      return 0;
    }
    if ((((-(param_1[5] == param_2[5]) & 1U) + (-(param_1[6] == param_2[6]) & 2U) +
          (-(param_1[7] == param_2[7]) & 4U) + (-(param_1[8] == param_2[8]) & 8U) ^ 0xff) & 0xf) !=
        0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if (*(char *)(param_2 + 0xb) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      return 0;
    }
    if (param_1[10] != param_2[10]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(param_2 + 0xd) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xd) == '\x01') {
      return 0;
    }
    if (param_1[0xc] != param_2[0xc]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_2 + 0xf) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xf) == '\x01') {
      return 0;
    }
    if (param_1[0xe] != param_2[0xe]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (*(char *)(param_2 + 0x11) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x11) == '\x01') {
      return 0;
    }
    if (param_1[0x10] != param_2[0x10]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    if (*(char *)(param_2 + 0x13) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x13) == '\x01') {
      return 0;
    }
    if (param_1[0x12] != param_2[0x12]) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0xb9) == '\x01') {
    if (*(char *)((long)param_2 + 0xb9) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0xb9) == '\x01') {
      return 0;
    }
    dVar2 = param_1[0x14];
    func_0x0001047440d8(dVar2,param_1[0x15],param_1[0x16],*(undefined1 *)(param_1 + 0x17),
                        param_2[0x14],param_2[0x15],param_2[0x16],*(undefined1 *)(param_2 + 0x17));
    if (((ulong)dVar2 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if (*(char *)(param_2 + 0x19) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x19) == '\x01') {
      return 0;
    }
    if (param_1[0x18] != param_2[0x18]) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0xc9);
  if (*(byte *)((long)param_1 + 0xc9) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0xc9) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0xca);
  if (*(byte *)((long)param_1 + 0xca) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0xca) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 104743d4c; end: 104743d4f;  */

void FUN_104743d4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32768;
  _swift_getWitnessTable(&UNK_10dd32768,&UNK_11079eab0);
  puRam000000011308e608 = puVar1;
  return;
}



/* Entry: 104743d50; end: 104743d8f;  */

void FUN_104743d50(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32768;
  _swift_getWitnessTable(&UNK_10dd32768,&UNK_11079eab0);
  puRam000000011308e608 = puVar1;
  return;
}



/* Entry: 104743d90; end: 104743dbb;  */

long FUN_104743d90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104743dbc; end: 104743eeb;  */

void FUN_104743dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  uVar7 = *(undefined8 *)((long)param_2 + 0xbb);
  *(undefined8 *)((long)param_1 + 0xc3) = *(undefined8 *)((long)param_2 + 0xc3);
  *(undefined8 *)((long)param_1 + 0xbb) = uVar7;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 104743eec; end: 104744027;  */

void FUN_104743eec(undefined8 param_1,ulong param_2,char param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  
  if (param_3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (param_5 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_4 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 104744028; end: 10474404f;  */

void FUN_104744028(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if ((char)uVar2 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)uVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104744050; end: 1047440af;  */

void FUN_104744050(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar1 = *(undefined1 *)(unaff_x20 + 3);
  uVar2 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104743eec(auStack_78,uVar3,uVar2,uVar4,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047440b0; end: 10474415b;  */

undefined8 FUN_1047440b0(double *param_1,double *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 1) == '\x01') {
      return 0;
    }
    if (*param_1 != *param_2) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 3) != '\x01') && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}



/* Entry: 10474415c; end: 10474419b;  */

void FUN_10474415c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd327e0;
  _swift_getWitnessTable(&UNK_10dd327e0,&UNK_11079eb90);
  puRam000000011308e610 = puVar1;
  return;
}



/* Entry: 10474419c; end: 1047441c7;  */

long FUN_10474419c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047441c8; end: 104744227;  */

int FUN_1047441c8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104744228; end: 10474425b;  */

void FUN_104744228(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10474425c; end: 104744293;  */

void FUN_10474425c(undefined8 param_1)

{
  if (lRam000000011308e680 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a3ec);
  return;
}



/* Entry: 104744294; end: 1047442db;  */

undefined8 FUN_104744294(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047442dc; end: 10474461b;  */

void FUN_1047442dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 *param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined1 param_27,undefined4 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined2 param_41,undefined4 param_42,undefined8 param_43,undefined8 param_44,
                  undefined1 param_45)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar6 = param_7[5];
  uVar5 = param_7[4];
  uVar4 = param_7[6];
  param_1[0xc] = param_7[7];
  param_1[0xb] = uVar4;
  uVar4 = param_7[8];
  uVar8 = param_7[0xb];
  uVar7 = param_7[10];
  param_1[0xe] = param_7[9];
  param_1[0xd] = uVar4;
  param_1[0x10] = uVar8;
  param_1[0xf] = uVar7;
  uVar4 = param_7[0xc];
  param_1[0x12] = param_7[0xd];
  param_1[0x11] = uVar4;
  uVar4 = *param_7;
  uVar8 = param_7[3];
  uVar7 = param_7[2];
  param_1[6] = param_7[1];
  param_1[5] = uVar4;
  param_1[8] = uVar8;
  param_1[7] = uVar7;
  param_1[10] = uVar6;
  param_1[9] = uVar5;
  uVar4 = *param_8;
  uVar6 = param_8[3];
  uVar5 = param_8[2];
  param_1[0x14] = param_8[1];
  param_1[0x13] = uVar4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[0x16] = uVar6;
  param_1[0x15] = uVar5;
  uVar5 = param_8[5];
  uVar4 = param_8[4];
  param_1[0x19] = param_8[6];
  param_1[0x18] = uVar5;
  param_1[0x17] = uVar4;
  lVar3 = 0;
  FUN_10474425c();
  FUN_10474461c(param_9,(long)param_1 + (long)*(int *)(lVar3 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(param_10 + 10);
  uVar4 = param_10[4];
  uVar6 = param_10[7];
  uVar5 = param_10[6];
  uVar8 = param_10[9];
  uVar7 = param_10[8];
  uVar10 = param_10[1];
  uVar9 = *param_10;
  uVar12 = param_10[3];
  uVar11 = param_10[2];
  puVar1[5] = param_10[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  *puVar1 = param_11;
  puVar1[1] = param_12;
  uVar6 = param_13[4];
  uVar5 = param_13[7];
  uVar4 = param_13[6];
  uVar8 = param_13[1];
  uVar7 = *param_13;
  uVar10 = param_13[3];
  uVar9 = param_13[2];
  uVar14 = param_13[0xd];
  uVar13 = param_13[0xc];
  uVar12 = param_13[0xf];
  uVar11 = param_13[0xe];
  uVar16 = param_13[9];
  uVar15 = param_13[8];
  uVar18 = param_13[0xb];
  uVar17 = param_13[10];
  uVar20 = *(undefined8 *)((long)param_13 + 0xc3);
  uVar19 = *(undefined8 *)((long)param_13 + 0xbb);
  uVar24 = param_13[0x15];
  uVar23 = param_13[0x14];
  uVar22 = param_13[0x17];
  uVar21 = param_13[0x16];
  uVar26 = param_13[0x11];
  uVar25 = param_13[0x10];
  uVar28 = param_13[0x13];
  uVar27 = param_13[0x12];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  puVar1[5] = param_13[5];
  puVar1[4] = uVar6;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar1[0xd] = uVar14;
  puVar1[0xc] = uVar13;
  puVar1[0xf] = uVar12;
  puVar1[0xe] = uVar11;
  puVar1[9] = uVar16;
  puVar1[8] = uVar15;
  puVar1[0xb] = uVar18;
  puVar1[10] = uVar17;
  *(undefined8 *)((long)puVar1 + 0xc3) = uVar20;
  *(undefined8 *)((long)puVar1 + 0xbb) = uVar19;
  puVar1[0x15] = uVar24;
  puVar1[0x14] = uVar23;
  puVar1[0x17] = uVar22;
  puVar1[0x16] = uVar21;
  puVar1[0x11] = uVar26;
  puVar1[0x10] = uVar25;
  puVar1[0x13] = uVar28;
  puVar1[0x12] = uVar27;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34));
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38));
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c)) = param_18;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40));
  *puVar1 = param_20;
  *(undefined1 *)(puVar1 + 1) = (undefined1)param_21;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x44)) = param_21._1_1_;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x48)) = param_21._2_1_;
  uVar4 = param_23[0xc];
  uVar6 = param_23[0xf];
  uVar5 = param_23[0xe];
  uVar8 = param_23[0x11];
  uVar7 = param_23[0x10];
  uVar10 = param_23[5];
  uVar9 = param_23[4];
  uVar12 = param_23[7];
  uVar11 = param_23[6];
  uVar16 = param_23[9];
  uVar15 = param_23[8];
  uVar14 = param_23[0xb];
  uVar13 = param_23[10];
  uVar20 = param_23[1];
  uVar19 = *param_23;
  uVar18 = param_23[3];
  uVar17 = param_23[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x4c));
  puVar1[0xd] = param_23[0xd];
  puVar1[0xc] = uVar4;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[5] = uVar10;
  puVar1[4] = uVar9;
  puVar1[7] = uVar12;
  puVar1[6] = uVar11;
  puVar1[9] = uVar16;
  puVar1[8] = uVar15;
  puVar1[0xb] = uVar14;
  puVar1[10] = uVar13;
  puVar1[1] = uVar20;
  *puVar1 = uVar19;
  puVar1[3] = uVar18;
  puVar1[2] = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x50));
  puVar1[2] = param_26;
  *(undefined1 *)(puVar1 + 3) = param_27;
  puVar1[1] = param_25;
  *puVar1 = param_24;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x54));
  *puVar1 = param_29;
  puVar1[1] = param_30;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x58));
  *puVar1 = param_31;
  *(undefined1 *)(puVar1 + 1) = param_32;
  puVar2 = (undefined4 *)((long)param_1 + (long)*(int *)(lVar3 + 0x5c));
  *puVar2 = (int)param_34;
  *(char *)(puVar2 + 1) = (char)((ulong)param_34 >> 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x60));
  puVar1[2] = param_37;
  *(char *)((long)puVar1 + 0x1c) = (char)((ulong)param_38 >> 0x20);
  *(int *)(puVar1 + 3) = (int)param_38;
  puVar1[1] = param_36;
  *puVar1 = param_35;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 100));
  *puVar1 = param_39;
  puVar1[1] = param_40;
  *(char *)(puVar1 + 2) = (char)param_41;
  *(char *)((long)puVar1 + 0x11) = (char)((ushort)param_41 >> 8);
  _memcpy((long)param_1 + (long)*(int *)(lVar3 + 0x68),param_43,0x133);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x6c));
  *param_1 = param_44;
  *(undefined1 *)(param_1 + 1) = param_45;
  return;
}



/* Entry: 10474461c; end: 10474466b;  */

undefined8 FUN_10474461c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10474466c; end: 10474466f;  */

undefined8 FUN_10474466c(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar23;
  char cVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_f30;
  ulong uStack_f28;
  long lStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  int *piStack_ec0;
  int *piStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  long lStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined1 auStack_e28 [312];
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  long lStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined1 uStack_c58;
  undefined7 uStack_c57;
  undefined1 uStack_c50;
  undefined7 uStack_c4f;
  undefined1 uStack_c48;
  undefined7 uStack_c47;
  undefined8 uStack_c40;
  undefined3 uStack_c38;
  undefined5 uStack_c35;
  undefined3 uStack_c30;
  undefined5 uStack_c2d;
  undefined3 uStack_c28;
  undefined5 uStack_c25;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  ulong uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined3 uStack_b68;
  undefined5 uStack_b65;
  undefined3 uStack_b60;
  undefined8 uStack_b5d;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long lStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined1 uStack_910;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 uStack_8b0;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7b8 [312];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined8 uStack_5d0;
  undefined3 uStack_5c8;
  undefined5 uStack_5c5;
  undefined3 uStack_5c0;
  undefined5 uStack_5bd;
  undefined3 uStack_5b8;
  undefined5 uStack_5b5;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined2 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined2 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined3 uStack_368;
  undefined5 uStack_365;
  undefined3 uStack_360;
  undefined8 uStack_35d;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined3 uStack_298;
  undefined5 uStack_295;
  undefined3 uStack_290;
  undefined8 uStack_28d;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
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
  undefined1 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
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
  
  lVar15 = 0;
  FUN_1047425ec();
  lVar34 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar34 + 0x40));
  lVar27 = (long)&uStack_f30 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar30 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar32 = lVar27 - extraout_x8_00;
  lVar30 = 0x11308e718;
  func_0x0001000285a8(0x11308e718,&UNK_10dd32a28);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)(uVar32 - extraout_x8_01);
  if (*param_1 != *param_2) {
    return 0;
  }
  if (*(long *)(param_1 + 2) != *(long *)(param_2 + 2)) {
    return 0;
  }
  lVar28 = *(long *)(param_1 + 6);
  lVar33 = *(long *)(param_2 + 6);
  if (lVar28 == 1) {
    if (lVar33 != 1) {
      return 0;
    }
  }
  else {
    if (lVar33 == 1) {
      return 0;
    }
    uVar23 = *(undefined8 *)(param_1 + 4);
    uStack_ee0 = *(undefined8 *)(param_1 + 8);
    uVar26 = *(undefined8 *)(param_2 + 4);
    uVar29 = *(undefined8 *)(param_2 + 8);
    uVar20 = uVar23;
    uStack_ee8 = uVar23;
    lStack_ed0 = lVar27;
    lStack_ec8 = lVar30;
    piStack_ec0 = param_1;
    piStack_eb8 = param_2;
    FUN_10474d880(uVar23,lVar28,uStack_ee0,uVar26,lVar33,uVar29);
    lVar27 = lStack_ed0;
    uStack_ed8 = CONCAT44(uStack_ed8._4_4_,(int)uVar20);
    FUN_104744228(uVar26,lVar33,uVar29);
    uVar20 = uStack_ee0;
    FUN_104744228(uVar23,lVar28,uStack_ee0);
    _swift_bridgeObjectRelease(lVar33);
    param_2 = piStack_eb8;
    _swift_bridgeObjectRelease(uVar29);
    param_1 = piStack_ec0;
    func_0x000104748dc4(uStack_ee8,lVar28,uVar20);
    lVar30 = lStack_ec8;
    if ((uStack_ed8 & 1) == 0) {
      return 0;
    }
  }
  uStack_cb8 = *(undefined8 *)(param_1 + 0x18);
  lStack_cc0 = *(long *)(param_1 + 0x16);
  uStack_ca8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_cb0 = *(undefined8 *)(param_1 + 0x1a);
  uStack_c98 = *(undefined8 *)(param_1 + 0x20);
  uStack_ca0 = *(undefined8 *)(param_1 + 0x1e);
  uStack_c88 = *(undefined8 *)(param_1 + 0x24);
  uStack_c90 = *(undefined8 *)(param_1 + 0x22);
  uStack_ce8 = *(undefined8 *)(param_1 + 0xc);
  uStack_cf0 = *(undefined8 *)(param_1 + 10);
  uStack_cd8 = *(undefined8 *)(param_1 + 0x10);
  uStack_ce0 = *(undefined8 *)(param_1 + 0xe);
  uStack_cc8 = *(undefined8 *)(param_1 + 0x14);
  uStack_cd0 = *(undefined8 *)(param_1 + 0x12);
  uStack_808 = *(undefined8 *)(param_2 + 0x14);
  uStack_c60 = *(undefined8 *)(param_2 + 0x12);
  uStack_c68 = *(ulong *)(param_2 + 0x10);
  uStack_c70 = *(undefined8 *)(param_2 + 0xe);
  uStack_c78 = *(undefined8 *)(param_2 + 0xc);
  uStack_c80 = *(undefined8 *)(param_2 + 10);
  uStack_c18 = *(undefined8 *)(param_2 + 0x24);
  uStack_c20 = *(undefined8 *)(param_2 + 0x22);
  uStack_7d8 = *(undefined8 *)(param_2 + 0x20);
  uStack_7e0 = *(undefined8 *)(param_2 + 0x1e);
  uStack_7e8 = *(undefined8 *)(param_2 + 0x1c);
  uStack_c40 = *(undefined8 *)(param_2 + 0x1a);
  uStack_7f8 = *(undefined8 *)(param_2 + 0x18);
  lStack_800 = *(long *)(param_2 + 0x16);
  uStack_c58 = (undefined1)uStack_808;
  uStack_c57 = (undefined7)((ulong)uStack_808 >> 8);
  uStack_c48 = (undefined1)uStack_7f8;
  uStack_c47 = (undefined7)((ulong)uStack_7f8 >> 8);
  uStack_c50 = (undefined1)lStack_800;
  uStack_c4f = (undefined7)((ulong)lStack_800 >> 8);
  uStack_c38 = (undefined3)uStack_7e8;
  uStack_c35 = (undefined5)((ulong)uStack_7e8 >> 0x18);
  uStack_c28 = (undefined3)uStack_7d8;
  uStack_c25 = (undefined5)((ulong)uStack_7d8 >> 0x18);
  uStack_c30 = (undefined3)uStack_7e0;
  uStack_c2d = (undefined5)((ulong)uStack_7e0 >> 0x18);
  uStack_8a0 = uStack_cf0;
  uStack_898 = uStack_ce8;
  uStack_890 = uStack_ce0;
  uStack_888 = uStack_cd8;
  uStack_880 = uStack_cd0;
  uStack_878 = uStack_cc8;
  lStack_870 = lStack_cc0;
  uStack_868 = uStack_cb8;
  uStack_860 = uStack_cb0;
  uStack_858 = uStack_ca8;
  uStack_850 = uStack_ca0;
  uStack_848 = uStack_c98;
  uStack_840 = uStack_c90;
  uStack_838 = uStack_c88;
  uStack_830 = uStack_c80;
  uStack_828 = uStack_c78;
  uStack_820 = uStack_c70;
  uStack_818 = uStack_c68;
  uStack_810 = uStack_c60;
  uStack_7f0 = uStack_c40;
  uStack_7d0 = uStack_c20;
  uStack_7c8 = uStack_c18;
  if (lStack_cc0 == 2) {
    if (lStack_800 == 2) {
      uStack_648 = *(undefined8 *)(param_1 + 0x18);
      lStack_650 = *(long *)(param_1 + 0x16);
      uStack_638 = *(undefined8 *)(param_1 + 0x1c);
      uStack_640 = *(undefined8 *)(param_1 + 0x1a);
      uStack_628 = *(undefined8 *)(param_1 + 0x20);
      uStack_630 = *(undefined8 *)(param_1 + 0x1e);
      uStack_618 = *(undefined8 *)(param_1 + 0x24);
      uStack_620 = *(undefined8 *)(param_1 + 0x22);
      uStack_678 = *(undefined8 *)(param_1 + 0xc);
      uStack_680 = *(undefined8 *)(param_1 + 10);
      uStack_668 = *(undefined8 *)(param_1 + 0x10);
      uStack_670 = *(undefined8 *)(param_1 + 0xe);
      uStack_658 = *(undefined8 *)(param_1 + 0x14);
      uStack_660 = *(undefined8 *)(param_1 + 0x12);
      lStack_ed0 = lVar27;
      lStack_ec8 = lVar30;
      FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
      FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
      func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
      goto LAB_1047454e0;
    }
LAB_104745348:
    uStack_680 = uStack_cf0;
    uStack_678 = uStack_ce8;
    uStack_670 = uStack_ce0;
    uStack_668 = uStack_cd8;
    uStack_660 = uStack_cd0;
    uStack_658 = uStack_cc8;
    lStack_650 = lStack_cc0;
    uStack_648 = uStack_cb8;
    uStack_640 = uStack_cb0;
    uStack_638 = uStack_ca8;
    uStack_630 = uStack_ca0;
    uStack_628 = uStack_c98;
    uStack_620 = uStack_c90;
    uStack_618 = uStack_c88;
    uStack_610 = uStack_c80;
    uStack_608 = uStack_c78;
    uStack_600 = uStack_c70;
    uStack_5f8 = uStack_c68;
    uStack_5f0 = uStack_c60;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5d0 = uStack_c40;
    uStack_5c8 = uStack_c38;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5b5 = uStack_c25;
    uStack_5b0 = uStack_c20;
    uStack_5a8 = uStack_c18;
    FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
    FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
    uVar20 = 0x11308e720;
    puVar21 = &UNK_10dd32a30;
LAB_1047453e4:
    puVar31 = &uStack_680;
LAB_1047453e8:
    func_0x000104748d84(puVar31,uVar20,puVar21);
    return 0;
  }
  if (lStack_800 == 2) goto LAB_104745348;
  uStack_648 = *(undefined8 *)(param_2 + 0x18);
  lStack_650 = *(long *)(param_2 + 0x16);
  uStack_638 = *(undefined8 *)(param_2 + 0x1c);
  uStack_640 = *(undefined8 *)(param_2 + 0x1a);
  uStack_628 = *(undefined8 *)(param_2 + 0x20);
  uStack_630 = *(undefined8 *)(param_2 + 0x1e);
  uStack_618 = *(undefined8 *)(param_2 + 0x24);
  uStack_620 = *(undefined8 *)(param_2 + 0x22);
  uStack_678 = *(undefined8 *)(param_2 + 0xc);
  uStack_680 = *(undefined8 *)(param_2 + 10);
  uStack_668 = *(undefined8 *)(param_2 + 0x10);
  uStack_670 = *(undefined8 *)(param_2 + 0xe);
  uStack_658 = *(undefined8 *)(param_2 + 0x14);
  uStack_660 = *(undefined8 *)(param_2 + 0x12);
  uStack_118 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = *(undefined8 *)(param_1 + 0x16);
  uStack_108 = *(undefined8 *)(param_1 + 0x1c);
  uStack_110 = *(undefined8 *)(param_1 + 0x1a);
  uStack_f8 = *(undefined8 *)(param_1 + 0x20);
  uStack_100 = *(undefined8 *)(param_1 + 0x1e);
  uStack_e8 = *(undefined8 *)(param_1 + 0x24);
  uStack_f0 = *(undefined8 *)(param_1 + 0x22);
  uStack_148 = *(undefined8 *)(param_1 + 0xc);
  uStack_150 = *(undefined8 *)(param_1 + 10);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 0xe);
  uStack_128 = *(undefined8 *)(param_1 + 0x14);
  uStack_130 = *(undefined8 *)(param_1 + 0x12);
  lStack_ed0 = lVar27;
  lStack_ec8 = lVar30;
  uStack_e0 = uStack_680;
  uStack_d8 = uStack_678;
  uStack_d0 = uStack_670;
  uStack_c8 = uStack_668;
  uStack_c0 = uStack_660;
  uStack_b8 = uStack_658;
  lStack_b0 = lStack_650;
  uStack_a8 = uStack_648;
  uStack_a0 = uStack_640;
  uStack_98 = uStack_638;
  uStack_90 = uStack_630;
  uStack_88 = uStack_628;
  uStack_80 = uStack_620;
  uStack_78 = uStack_618;
  FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
  FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
  puVar16 = &uStack_150;
  FUN_1047490d0(puVar16,&uStack_e0);
  func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
  func_0x000104748d84(&uStack_cf0,0x11308e618,&UNK_10dd32828);
  if (((ulong)puVar16 & 1) == 0) {
    return 0;
  }
LAB_1047454e0:
  uStack_f10 = *(undefined8 *)(param_1 + 0x26);
  uStack_f08 = *(undefined8 *)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x2a);
  uVar26 = *(undefined8 *)(param_1 + 0x2c);
  uVar23 = *(undefined8 *)(param_1 + 0x2e);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  lStack_f20 = *(long *)(param_1 + 0x32);
  uStack_f00 = *(undefined8 *)(param_2 + 0x26);
  uVar17 = *(ulong *)(param_2 + 0x28);
  lVar30 = *(long *)(param_2 + 0x2a);
  uStack_f18 = *(undefined8 *)(param_2 + 0x2c);
  uVar22 = *(ulong *)(param_2 + 0x2e);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  lVar27 = *(long *)(param_2 + 0x32);
  uStack_ed8 = uVar22;
  piStack_eb8 = param_2;
  if (lStack_f20 == 1) {
    if (lVar27 != 1) {
LAB_10474559c:
      uStack_ef8 = uVar29;
      uStack_ef0 = uVar20;
      uStack_ee8 = uVar26;
      uStack_ee0 = uVar23;
      piStack_eb8 = (int *)lVar27;
      func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
      piVar12 = piStack_eb8;
      func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uVar9,piStack_eb8);
      func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,
                          lStack_f20);
      func_0x0001015543ac(uStack_f00,uVar17,lVar30,uStack_f18,uStack_ed8,uVar9,piVar12);
      return 0;
    }
    uStack_f28 = uVar17;
    lStack_f20 = lVar30;
    piStack_ec0 = param_1;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
    func_0x000104711a50(uStack_f00,uStack_f28,lStack_f20,uStack_f18,uStack_ed8,uVar9,1);
    func_0x0001015543ac(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
  }
  else {
    if (lVar27 == 1) goto LAB_10474559c;
    uStack_f30 = uVar9;
    uStack_ef8 = uVar29;
    uStack_ef0 = uVar20;
    uStack_ee8 = uVar26;
    uStack_ee0 = uVar23;
    piStack_ec0 = param_1;
    uStack_1c0 = uStack_f10;
    uStack_1b8 = uStack_f08;
    uStack_1b0 = uVar20;
    uStack_1a8 = uVar26;
    uStack_1a0 = uVar23;
    uStack_198 = uVar29;
    lStack_190 = lStack_f20;
    uStack_188 = uStack_f00;
    uStack_180 = uVar17;
    lStack_178 = lVar30;
    uStack_170 = uStack_f18;
    uStack_168 = uVar22;
    uStack_160 = uVar9;
    lStack_158 = lVar27;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
    uVar23 = uStack_f18;
    uVar20 = uStack_f30;
    func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uStack_f30,lVar27);
    puVar16 = &uStack_1c0;
    FUN_104741990(puVar16,&uStack_188);
    uStack_f28 = CONCAT44(uStack_f28._4_4_,(int)puVar16);
    func_0x0001015543ac(uStack_f00,uVar17,lVar30,uVar23,uStack_ed8,uVar20,lVar27);
    func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,lStack_f20
                       );
    if ((uStack_f28 & 1) == 0) {
      return 0;
    }
  }
  lVar27 = 0;
  FUN_10474425c();
  iVar14 = *(int *)(lVar27 + 0x24);
  lVar30 = (long)*(int *)(lStack_ec8 + 0x30);
  FUN_104744294((long)piStack_ec0 + (long)iVar14,puVar31,0x112db3fe8,&UNK_10d95e580);
  FUN_104744294((long)piStack_eb8 + (long)iVar14,(long)puVar31 + lVar30,0x112db3fe8,&UNK_10d95e580);
  pcVar25 = *(code **)(lVar34 + 0x30);
  puVar16 = puVar31;
  (*pcVar25)(puVar31,1,lVar15);
  if ((int)puVar16 == 1) {
    lVar30 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar30,1,lVar15);
    if ((int)lVar30 != 1) goto LAB_104745840;
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
  }
  else {
    FUN_104744294(puVar31,uVar32,0x112db3fe8,&UNK_10d95e580);
    lVar34 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar34,1,lVar15);
    lVar15 = lStack_ed0;
    if ((int)lVar34 == 1) {
      func_0x00010474660c(uVar32);
LAB_104745840:
      uVar20 = 0x11308e718;
      puVar21 = &UNK_10dd32a28;
      goto LAB_1047453e8;
    }
    func_0x0001047465c8((long)puVar31 + lVar30,lStack_ed0);
    uVar22 = uVar32;
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar32,lVar15);
    func_0x00010474660c(lVar15);
    func_0x00010474660c(uVar32);
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  piVar12 = piStack_ec0;
  puVar31 = (undefined8 *)((long)piStack_ec0 + (long)*(int *)(lVar27 + 0x28));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x28));
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_910 = *(undefined1 *)(puVar31 + 10);
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_ca0 = CONCAT71(uStack_ca0._1_7_,uStack_910);
  uStack_c48 = *(undefined1 *)(puVar16 + 10);
  uStack_c60 = puVar16[7];
  uStack_c68 = puVar16[6];
  uStack_8b8 = puVar16[9];
  uStack_8c0 = puVar16[8];
  uStack_c80 = puVar16[3];
  uStack_c88 = puVar16[2];
  uStack_c70 = puVar16[5];
  uStack_c78 = puVar16[4];
  uStack_c90 = puVar16[1];
  uStack_c98 = *puVar16;
  uStack_c50 = (undefined1)uStack_8b8;
  uStack_c4f = (undefined7)((ulong)uStack_8b8 >> 8);
  uStack_c58 = (undefined1)uStack_8c0;
  uStack_c57 = (undefined7)((ulong)uStack_8c0 >> 8);
  uStack_960 = uStack_cf0;
  uStack_958 = uStack_ce8;
  uStack_950 = uStack_ce0;
  uStack_948 = uStack_cd8;
  uStack_940 = uStack_cd0;
  uStack_938 = uStack_cc8;
  lStack_930 = lStack_cc0;
  uStack_928 = uStack_cb8;
  uStack_920 = uStack_cb0;
  uStack_918 = uStack_ca8;
  uStack_900 = uStack_c98;
  uStack_8f8 = uStack_c90;
  uStack_8f0 = uStack_c88;
  uStack_8e8 = uStack_c80;
  uStack_8e0 = uStack_c78;
  uStack_8d8 = uStack_c70;
  uStack_8d0 = uStack_c68;
  uStack_8c8 = uStack_c60;
  uStack_8b0 = uStack_c48;
  if (lStack_cc0 == 0) {
    if (uStack_c68 != 0) {
LAB_104745a20:
      uStack_5df = uStack_c4f;
      uStack_5e7 = uStack_c57;
      uStack_5e0 = uStack_c50;
      uStack_630 = uStack_ca0;
      uStack_680 = uStack_cf0;
      uStack_678 = uStack_ce8;
      uStack_670 = uStack_ce0;
      uStack_668 = uStack_cd8;
      uStack_660 = uStack_cd0;
      uStack_658 = uStack_cc8;
      lStack_650 = lStack_cc0;
      uStack_648 = uStack_cb8;
      uStack_640 = uStack_cb0;
      uStack_638 = uStack_ca8;
      uStack_628 = uStack_c98;
      uStack_620 = uStack_c90;
      uStack_618 = uStack_c88;
      uStack_610 = uStack_c80;
      uStack_608 = uStack_c78;
      uStack_600 = uStack_c70;
      uStack_5f8 = uStack_c68;
      uStack_5f0 = uStack_c60;
      uStack_5e8 = uStack_c58;
      uStack_5d8 = uStack_c48;
      FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      uVar20 = 0x11308e728;
      puVar21 = &UNK_10dd32a38;
      goto LAB_1047453e4;
    }
    uStack_658 = puVar31[5];
    uStack_660 = puVar31[4];
    uStack_648 = puVar31[7];
    lStack_650 = puVar31[6];
    uStack_638 = puVar31[9];
    uStack_640 = puVar31[8];
    uStack_630 = CONCAT71(uStack_630._1_7_,*(undefined1 *)(puVar31 + 10));
    uStack_678 = puVar31[1];
    uStack_680 = *puVar31;
    uStack_668 = puVar31[3];
    uStack_670 = puVar31[2];
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
  }
  else {
    if (uStack_c68 == 0) goto LAB_104745a20;
    uStack_658 = puVar16[5];
    uStack_660 = puVar16[4];
    uStack_648 = puVar16[7];
    lStack_650 = puVar16[6];
    uStack_638 = puVar16[9];
    uStack_640 = puVar16[8];
    uStack_1d0 = *(undefined1 *)(puVar16 + 10);
    uStack_630 = CONCAT71(uStack_630._1_7_,uStack_1d0);
    uStack_678 = puVar16[1];
    uStack_680 = *puVar16;
    uStack_668 = puVar16[3];
    uStack_670 = puVar16[2];
    uStack_258 = puVar31[5];
    uStack_260 = puVar31[4];
    uStack_248 = puVar31[7];
    uStack_250 = puVar31[6];
    uStack_238 = puVar31[9];
    uStack_240 = puVar31[8];
    uStack_230 = *(undefined1 *)(puVar31 + 10);
    uStack_278 = puVar31[1];
    uStack_280 = *puVar31;
    uStack_268 = puVar31[3];
    uStack_270 = puVar31[2];
    uStack_220 = uStack_680;
    uStack_218 = uStack_678;
    uStack_210 = uStack_670;
    uStack_208 = uStack_668;
    uStack_200 = uStack_660;
    uStack_1f8 = uStack_658;
    lStack_1f0 = lStack_650;
    uStack_1e8 = uStack_648;
    uStack_1e0 = uStack_640;
    uStack_1d8 = uStack_638;
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    puVar31 = &uStack_280;
    FUN_10474ab40(puVar31,&uStack_220);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_cf0,0x112db3ff8,&UNK_10d95e598);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  piVar7 = piStack_eb8;
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x2c));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x2c));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x30));
  puVar16 = (undefined8 *)((long)piVar7 + (long)*(int *)(lVar27 + 0x30));
  iVar14 = (int)&uStack_c20;
  uStack_c40 = puVar31[0x16];
  uStack_c48 = (undefined1)puVar31[0x15];
  uStack_c47 = (undefined7)((ulong)puVar31[0x15] >> 8);
  uStack_c50 = (undefined1)puVar31[0x14];
  uStack_c4f = (undefined7)((ulong)puVar31[0x14] >> 8);
  uStack_c38 = (undefined3)puVar31[0x17];
  uStack_c2d = (undefined5)*(undefined8 *)((long)puVar31 + 0xc3);
  uStack_c28 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xc3) >> 0x28);
  uStack_c35 = (undefined5)*(undefined8 *)((long)puVar31 + 0xbb);
  uStack_c30 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xbb) >> 0x28);
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c60 = puVar31[0x12];
  uStack_c58 = (undefined1)puVar31[0x13];
  uStack_c57 = (undefined7)((ulong)puVar31[0x13] >> 8);
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_b5d = *(undefined8 *)((long)puVar16 + 0xc3);
  uStack_b60 = (undefined3)((ulong)*(undefined8 *)((long)puVar16 + 0xbb) >> 0x28);
  uStack_b78 = puVar16[0x15];
  uStack_b80 = puVar16[0x14];
  uStack_b70 = puVar16[0x16];
  uStack_b68 = (undefined3)puVar16[0x17];
  uStack_b65 = (undefined5)((ulong)puVar16[0x17] >> 0x18);
  uStack_bb8 = puVar16[0xd];
  uStack_bc0 = puVar16[0xc];
  uStack_ba8 = puVar16[0xf];
  uStack_bb0 = puVar16[0xe];
  uStack_b98 = puVar16[0x11];
  uStack_ba0 = puVar16[0x10];
  uStack_b88 = puVar16[0x13];
  uStack_b90 = puVar16[0x12];
  uStack_bf8 = puVar16[5];
  uStack_c00 = puVar16[4];
  uStack_be8 = puVar16[7];
  uStack_bf0 = puVar16[6];
  uStack_bd8 = puVar16[9];
  uStack_be0 = puVar16[8];
  uStack_bc8 = puVar16[0xb];
  uStack_bd0 = puVar16[10];
  uStack_c18 = puVar16[1];
  uStack_c20 = *puVar16;
  uStack_c08 = puVar16[3];
  uStack_c10 = puVar16[2];
  iVar13 = (int)&uStack_cf0;
  FUN_104746648();
  if (iVar13 == 1) {
    FUN_104746648();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5c8 = uStack_c38;
    uStack_5d0 = uStack_c40;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_618 = uStack_c88;
    uStack_620 = uStack_c90;
    uStack_608 = uStack_c78;
    uStack_610 = uStack_c80;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5f0 = uStack_c60;
    uStack_5f8 = uStack_c68;
    uStack_600 = uStack_c70;
    uStack_658 = uStack_cc8;
    uStack_660 = uStack_cd0;
    uStack_648 = uStack_cb8;
    lStack_650 = lStack_cc0;
    uStack_628 = uStack_c98;
    uStack_630 = uStack_ca0;
    uStack_638 = uStack_ca8;
    uStack_640 = uStack_cb0;
    uStack_668 = uStack_cd8;
    uStack_670 = uStack_ce0;
    uStack_678 = uStack_ce8;
    uStack_680 = uStack_cf0;
    FUN_104746648();
    if (iVar14 == 1) {
      return 0;
    }
    uStack_2a8 = uStack_b78;
    uStack_2b0 = uStack_b80;
    uStack_298 = uStack_b68;
    uStack_2a0 = uStack_b70;
    uStack_28d = uStack_b5d;
    uStack_295 = uStack_b65;
    uStack_290 = uStack_b60;
    uStack_2e8 = uStack_bb8;
    uStack_2f0 = uStack_bc0;
    uStack_2d8 = uStack_ba8;
    uStack_2e0 = uStack_bb0;
    uStack_2b8 = uStack_b88;
    uStack_2c0 = uStack_b90;
    uStack_2c8 = uStack_b98;
    uStack_2d0 = uStack_ba0;
    uStack_328 = uStack_bf8;
    uStack_330 = uStack_c00;
    uStack_318 = uStack_be8;
    uStack_320 = uStack_bf0;
    uStack_2f8 = uStack_bc8;
    uStack_300 = uStack_bd0;
    uStack_308 = uStack_bd8;
    uStack_310 = uStack_be0;
    uStack_338 = uStack_c08;
    uStack_340 = uStack_c10;
    uStack_348 = uStack_c18;
    uStack_350 = uStack_c20;
    uStack_378 = CONCAT71(uStack_5d7,uStack_5d8);
    uStack_380 = CONCAT71(uStack_5df,uStack_5e0);
    uStack_368 = uStack_5c8;
    uStack_370 = uStack_5d0;
    uStack_35d = CONCAT35(uStack_5b8,uStack_5bd);
    uStack_365 = uStack_5c5;
    uStack_360 = uStack_5c0;
    uStack_3b8 = uStack_618;
    uStack_3c0 = uStack_620;
    uStack_3a8 = uStack_608;
    uStack_3b0 = uStack_610;
    uStack_388 = CONCAT71(uStack_5e7,uStack_5e8);
    uStack_390 = uStack_5f0;
    uStack_398 = uStack_5f8;
    uStack_3a0 = uStack_600;
    uStack_3f8 = uStack_658;
    uStack_400 = uStack_660;
    uStack_3e8 = uStack_648;
    lStack_3f0 = lStack_650;
    uStack_3c8 = uStack_628;
    uStack_3d0 = uStack_630;
    uStack_3d8 = uStack_638;
    uStack_3e0 = uStack_640;
    uStack_408 = uStack_668;
    uStack_410 = uStack_670;
    uStack_418 = uStack_678;
    uStack_420 = uStack_680;
    puVar31 = &uStack_420;
    FUN_104743a4c(puVar31,&uStack_350);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x34));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x34));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x38));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x38));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_104745e54:
      func_0x000100de78a0(uVar32,uVar22);
      func_0x000100de78a0(uVar20,uVar17);
      func_0x0001000b44c0(uVar32,uVar22);
      func_0x0001000b44c0(uVar20,uVar17);
      return 0;
    }
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x3c)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x3c))) {
    return 0;
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 0x40));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x40));
  cVar24 = *(char *)(pdVar4 + 1);
  if (*(char *)(pdVar3 + 1) == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x44)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x44))) {
    return 0;
  }
  bVar10 = *(byte *)((long)piVar12 + (long)*(int *)(lVar27 + 0x48));
  bVar11 = *(byte *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x48));
  if (bVar10 == 2) {
    if (bVar11 != 2) {
      return 0;
    }
  }
  else {
    if (bVar11 == 2) {
      return 0;
    }
    if (((bVar10 ^ bVar11) & 1) != 0) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x4c));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x4c));
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_a18 = puVar31[0xd];
  uStack_a20 = puVar31[0xc];
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_a08 = puVar31[0xf];
  uStack_a10 = puVar31[0xe];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_9f8 = puVar31[0x11];
  uStack_a00 = puVar31[0x10];
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_a58 = puVar31[5];
  uStack_a60 = puVar31[4];
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_a48 = puVar31[7];
  uStack_a50 = puVar31[6];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_a38 = puVar31[9];
  uStack_a40 = puVar31[8];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_a28 = puVar31[0xb];
  uStack_a30 = puVar31[10];
  uStack_a78 = puVar31[1];
  uStack_a80 = *puVar31;
  uStack_a68 = puVar31[3];
  uStack_a70 = puVar31[2];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_c08 = puVar16[0xb];
  uStack_c10 = puVar16[10];
  uStack_988 = puVar16[0xd];
  uStack_990 = puVar16[0xc];
  uStack_bf8 = puVar16[0xd];
  uStack_c00 = puVar16[0xc];
  uStack_978 = puVar16[0xf];
  uStack_980 = puVar16[0xe];
  uStack_be8 = puVar16[0xf];
  uStack_bf0 = puVar16[0xe];
  uStack_968 = puVar16[0x11];
  uStack_970 = puVar16[0x10];
  uStack_9c8 = puVar16[5];
  uStack_9d0 = puVar16[4];
  uStack_c40 = puVar16[4];
  uStack_9b8 = puVar16[7];
  uStack_9c0 = puVar16[6];
  uStack_9a8 = puVar16[9];
  uStack_9b0 = puVar16[8];
  uStack_c18 = puVar16[9];
  uStack_c20 = puVar16[8];
  uStack_998 = puVar16[0xb];
  uStack_9a0 = puVar16[10];
  uStack_9e8 = puVar16[1];
  uStack_9f0 = *puVar16;
  uStack_9d8 = puVar16[3];
  uStack_9e0 = puVar16[2];
  uStack_c60 = *puVar16;
  uStack_bd8 = puVar16[0x11];
  uStack_be0 = puVar16[0x10];
  uStack_c48 = (undefined1)puVar16[3];
  uStack_c47 = (undefined7)((ulong)puVar16[3] >> 8);
  uStack_c50 = (undefined1)puVar16[2];
  uStack_c4f = (undefined7)((ulong)puVar16[2] >> 8);
  uStack_c38 = (undefined3)puVar16[5];
  uStack_c35 = (undefined5)((ulong)puVar16[5] >> 0x18);
  uStack_c28 = (undefined3)puVar16[7];
  uStack_c25 = (undefined5)((ulong)puVar16[7] >> 0x18);
  uStack_c30 = (undefined3)puVar16[6];
  uStack_c2d = (undefined5)((ulong)puVar16[6] >> 0x18);
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c58 = (undefined1)puVar16[1];
  uStack_c57 = (undefined7)((ulong)puVar16[1] >> 8);
  iVar14 = (int)&uStack_cf0;
  func_0x000104746678();
  uVar32 = uStack_c68;
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    if (iVar14 != 1) goto LAB_104746124;
    FUN_104744294(&uStack_a80,&uStack_680,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,&uStack_680,0x112db3ff0,&UNK_10d95e590);
  }
  else {
    uStack_e30 = uStack_c70;
    uStack_e48 = uStack_c88;
    uStack_e50 = uStack_c90;
    uStack_e38 = uStack_c78;
    uStack_e40 = uStack_c80;
    uStack_e88 = uStack_cc8;
    uStack_e90 = uStack_cd0;
    uStack_e78 = uStack_cb8;
    lStack_e80 = lStack_cc0;
    uStack_e68 = uStack_ca8;
    uStack_e70 = uStack_cb0;
    uStack_e58 = uStack_c98;
    uStack_e60 = uStack_ca0;
    uStack_ea8 = uStack_ce8;
    uStack_eb0 = uStack_cf0;
    uStack_e98 = uStack_cd8;
    uStack_ea0 = uStack_ce0;
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    uVar22 = uStack_bd8;
    if (iVar14 == 1) {
LAB_104746124:
      _memcpy(&uStack_680,&uStack_cf0,0x120);
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      uVar20 = 0x11308e730;
      puVar21 = &UNK_10dd32a40;
      goto LAB_1047453e4;
    }
    uStack_5f8 = uStack_bd8;
    uStack_600 = uStack_be0;
    uStack_618 = uStack_bf8;
    uStack_620 = uStack_c00;
    uStack_608 = uStack_be8;
    uStack_610 = uStack_bf0;
    uStack_498 = CONCAT71(uStack_c47,uStack_c48);
    uStack_4a0 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_658 = CONCAT53(uStack_c35,uStack_c38);
    uStack_488 = CONCAT53(uStack_c35,uStack_c38);
    uStack_648 = CONCAT53(uStack_c25,uStack_c28);
    lStack_650 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_660 = uStack_c40;
    uStack_478 = CONCAT53(uStack_c25,uStack_c28);
    uStack_480 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_628 = uStack_c08;
    uStack_630 = uStack_c10;
    uStack_638 = uStack_c18;
    uStack_640 = uStack_c20;
    uStack_678 = CONCAT71(uStack_c57,uStack_c58);
    uStack_668 = CONCAT71(uStack_c47,uStack_c48);
    uStack_670 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_4a8 = CONCAT71(uStack_c57,uStack_c58);
    uStack_680 = uStack_c60;
    uStack_4d8 = uStack_e48;
    uStack_4e0 = uStack_e50;
    uStack_4c8 = uStack_e38;
    uStack_4d0 = uStack_e40;
    uStack_518 = uStack_e88;
    uStack_520 = uStack_e90;
    uStack_508 = uStack_e78;
    lStack_510 = lStack_e80;
    uStack_4e8 = uStack_e58;
    uStack_4f0 = uStack_e60;
    uStack_4f8 = uStack_e68;
    uStack_500 = uStack_e70;
    uStack_528 = uStack_e98;
    uStack_530 = uStack_ea0;
    uStack_538 = uStack_ea8;
    uStack_540 = uStack_eb0;
    uStack_448 = uStack_bf8;
    uStack_450 = uStack_c00;
    uStack_438 = uStack_be8;
    uStack_440 = uStack_bf0;
    uStack_490 = uStack_c40;
    uStack_458 = uStack_c08;
    uStack_460 = uStack_c10;
    uStack_468 = uStack_c18;
    uStack_470 = uStack_c20;
    uStack_4c0 = (undefined2)uStack_e30;
    uStack_430 = (undefined2)uStack_be0;
    uStack_4b0 = uStack_c60;
    puVar31 = &uStack_540;
    FUN_10470e040(puVar31,&uStack_4b0);
    if (((ulong)puVar31 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
    FUN_10470cfc0(uVar32,uVar22);
    FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
    if ((uVar32 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
  }
  func_0x000104748d84(&uStack_cf0,0x112db3ff0,&UNK_10d95e590);
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x50));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x50));
  if ((char)puVar1[3] == '\x01') {
    if (*(char *)(puVar31 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(puVar31 + 3) == '\x01') {
      return 0;
    }
    uVar32 = *puVar1;
    func_0x0001046c1c10(uVar32,puVar1[1],puVar1[2],*puVar31,puVar31[1],puVar31[2]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x54));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x54));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x58));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x58));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*plVar5 != *plVar6) {
      return 0;
    }
  }
  piVar7 = (int *)((long)piVar12 + (long)*(int *)(lVar27 + 0x5c));
  piVar8 = (int *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x5c));
  cVar24 = (char)piVar8[1];
  if ((char)piVar7[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*piVar7 != *piVar8) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x60));
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x60));
  uVar32 = *puVar2 & 0xff;
  if ((*puVar1 & 0xff) == 2) {
    if (uVar32 != 2) {
      return 0;
    }
  }
  else {
    if (uVar32 == 2) {
      return 0;
    }
    uVar32 = *puVar1 & 0xffffffff00000001;
    func_0x000104741654(puVar1[1],puVar1[2],puVar2[1],puVar2[2],uVar32,(ulong)(uint5)puVar1[3],
                        *puVar2 & 0xffffffff00000001,(ulong)(uint5)puVar2[3]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 100));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 100));
  cVar24 = *(char *)((long)pdVar4 + 0x11);
  if (*(char *)((long)pdVar3 + 0x11) != '\x01') {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
    cVar24 = *(char *)(pdVar4 + 2);
    if (*(char *)(pdVar3 + 2) != '\x01') {
      if (cVar24 == '\x01') {
        return 0;
      }
      if (pdVar3[1] != pdVar4[1]) {
        return 0;
      }
      goto LAB_104746498;
    }
  }
  if (cVar24 != '\x01') {
    return 0;
  }
LAB_104746498:
  iVar14 = *(int *)(lVar27 + 0x68);
  _memcpy(&uStack_cf0,(long)piVar12 + (long)iVar14,0x133);
  _memcpy(&uStack_bb8,(long)piStack_eb8 + (long)iVar14,0x133);
  iVar14 = (int)&uStack_cf0;
  func_0x000103bffd74();
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    _memcpy(auStack_e28,&uStack_cf0,0x133);
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 == 1) {
      return 0;
    }
    _memcpy(&uStack_680,&uStack_bb8,0x133);
    _memcpy(auStack_7b8,auStack_e28,0x133);
    puVar19 = auStack_7b8;
    FUN_10474a038(puVar19,&uStack_680);
    if (((ulong)puVar19 & 1) == 0) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x6c));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x6c));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 == '\x01') {
      return 1;
    }
    return 0;
  }
  if (cVar24 != '\x01') {
    if (*plVar5 == *plVar6) {
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 104744670; end: 104744fd7;  */

void FUN_104744670(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  long lStack_688;
  ulong uStack_680;
  undefined1 auStack_678 [312];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined3 uStack_3f8;
  undefined5 uStack_3f5;
  undefined3 uStack_3f0;
  undefined8 uStack_3ed;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined2 uStack_220;
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
  undefined3 uStack_158;
  undefined5 uStack_155;
  undefined3 uStack_150;
  undefined8 uStack_14d;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
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
  
  lVar10 = 0;
  FUN_1047425ec();
  uStack_680 = *(ulong *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_680 + 0x40));
  lVar19 = (long)&uStack_6a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar19 - extraout_x8_00;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[1]);
  lVar16 = unaff_x20[3];
  if (lVar16 == 1) {
LAB_104744798:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[2];
    lVar12 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar16 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
    }
    if (lVar12 == 0) goto LAB_104744798;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(param_1,lVar12);
  }
  if (unaff_x20[0xb] == 2) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_d8 = unaff_x20[6];
    uStack_e0 = unaff_x20[5];
    uStack_c8 = unaff_x20[8];
    uStack_d0 = unaff_x20[7];
    uStack_b8 = unaff_x20[10];
    uStack_c0 = unaff_x20[9];
    uStack_a0 = unaff_x20[0xd];
    uStack_a8 = unaff_x20[0xc];
    uStack_90 = unaff_x20[0xf];
    uStack_98 = unaff_x20[0xe];
    uStack_80 = unaff_x20[0x11];
    uStack_88 = unaff_x20[0x10];
    uStack_78 = unaff_x20[0x12];
    lStack_b0 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104748e40(param_1);
  }
  lVar16 = unaff_x20[0x19];
  if (lVar16 == 1) {
LAB_104744914:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[0x13];
    uStack_6a0 = unaff_x20[0x14];
    lVar12 = unaff_x20[0x15];
    uStack_698 = unaff_x20[0x16];
    lVar4 = unaff_x20[0x17];
    uStack_690 = unaff_x20[0x18];
    lStack_688 = lVar19;
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar12 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
      lVar19 = lStack_688;
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar13);
      if (lVar12 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uStack_6a0,lVar12);
      }
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        lVar19 = lStack_688;
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uStack_698,lVar4);
        lVar19 = lStack_688;
      }
    }
    lStack_688 = lVar19;
    if (lVar16 == 0) goto LAB_104744914;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uStack_690,lVar16);
  }
  lVar12 = 0;
  FUN_10474425c();
  FUN_104744294((long)unaff_x20 + (long)*(int *)(lVar12 + 0x24),lVar17,0x112db3fe8,&UNK_10d95e580);
  lVar16 = lVar17;
  (**(code **)(uStack_680 + 0x30))(lVar17,1,lVar10);
  if ((int)lVar16 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047465c8(lVar17,lVar19);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar11 = 0;
    __s10Foundation3URLVMa(0);
    uVar13 = 0x112e092e0;
    FUN_1047466bc(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar11,uVar13);
    func_0x00010474660c(lVar19);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x28));
  if (puVar1[6] == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_138 = puVar1[1];
    uStack_140 = *puVar1;
    uStack_128 = puVar1[3];
    uStack_130 = puVar1[2];
    uStack_118 = puVar1[5];
    uStack_120 = puVar1[4];
    uStack_108 = puVar1[7];
    uStack_100 = (undefined1)puVar1[8];
    uStack_f7 = *(undefined8 *)((long)puVar1 + 0x49);
    uStack_ff = (undefined7)*(undefined8 *)((long)puVar1 + 0x41);
    uStack_f8 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x41) >> 0x38);
    lStack_110 = puVar1[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10474a96c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x2c));
  lVar16 = puVar1[1];
  if (lVar16 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x30));
  uStack_408 = puVar1[0x15];
  uStack_410 = puVar1[0x14];
  uStack_400 = puVar1[0x16];
  uStack_428 = puVar1[0x11];
  uStack_430 = puVar1[0x10];
  uStack_418 = puVar1[0x13];
  uStack_420 = puVar1[0x12];
  uStack_3f8 = (undefined3)puVar1[0x17];
  uStack_3ed = *(undefined8 *)((long)puVar1 + 0xc3);
  uStack_3f5 = (undefined5)*(undefined8 *)((long)puVar1 + 0xbb);
  uStack_3f0 = (undefined3)((ulong)*(undefined8 *)((long)puVar1 + 0xbb) >> 0x28);
  uStack_448 = puVar1[0xd];
  uStack_450 = puVar1[0xc];
  uStack_438 = puVar1[0xf];
  uStack_440 = puVar1[0xe];
  uStack_488 = puVar1[5];
  uStack_490 = puVar1[4];
  uStack_478 = puVar1[7];
  uStack_480 = puVar1[6];
  uStack_468 = puVar1[9];
  uStack_470 = puVar1[8];
  uStack_458 = puVar1[0xb];
  uStack_460 = puVar1[10];
  uStack_4a8 = puVar1[1];
  uStack_4b0 = *puVar1;
  uStack_498 = puVar1[3];
  uStack_4a0 = puVar1[2];
  iVar9 = (int)&uStack_4b0;
  FUN_104746648();
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_178 = uStack_418;
    uStack_180 = uStack_420;
    uStack_168 = uStack_408;
    uStack_170 = uStack_410;
    uStack_158 = uStack_3f8;
    uStack_160 = uStack_400;
    uStack_14d = uStack_3ed;
    uStack_155 = uStack_3f5;
    uStack_150 = uStack_3f0;
    uStack_1a8 = uStack_448;
    uStack_1b0 = uStack_450;
    uStack_198 = uStack_438;
    uStack_1a0 = uStack_440;
    uStack_188 = uStack_428;
    uStack_190 = uStack_430;
    uStack_1e8 = uStack_488;
    uStack_1f0 = uStack_490;
    uStack_1d8 = uStack_478;
    uStack_1e0 = uStack_480;
    uStack_1c8 = uStack_468;
    uStack_1d0 = uStack_470;
    uStack_1b8 = uStack_458;
    uStack_1c0 = uStack_460;
    uStack_208 = uStack_4a8;
    uStack_210 = uStack_4b0;
    uStack_1f8 = uStack_498;
    uStack_200 = uStack_4a0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104743670(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x34));
  uVar14 = puVar1[1];
  if (uVar14 >> 0x3c < 0xf) {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar14);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x38));
  uVar14 = puVar1[1];
  if (uVar14 >> 0x3c < 0xf) {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar14);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x3c)))
  ;
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x40));
  if ((char)puVar2[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x44)))
  ;
  bVar8 = *(byte *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x48));
  if (bVar8 == 2) {
    bVar8 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar8 = bVar8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar8);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x4c));
  uStack_4d8 = puVar1[0xd];
  uStack_4e0 = puVar1[0xc];
  uStack_4c8 = puVar1[0xf];
  uStack_4d0 = puVar1[0xe];
  uStack_4b8 = puVar1[0x11];
  uStack_4c0 = puVar1[0x10];
  uStack_518 = puVar1[5];
  uStack_520 = puVar1[4];
  uStack_508 = puVar1[7];
  uStack_510 = puVar1[6];
  uStack_4f8 = puVar1[9];
  uStack_500 = puVar1[8];
  uStack_4e8 = puVar1[0xb];
  uStack_4f0 = puVar1[10];
  uStack_538 = puVar1[1];
  uStack_540 = *puVar1;
  uStack_528 = puVar1[3];
  uStack_530 = puVar1[2];
  iVar9 = (int)&uStack_540;
  func_0x000104746678();
  uVar13 = uStack_4b8;
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_360 = uStack_4c0;
    uStack_378 = uStack_4d8;
    uStack_380 = uStack_4e0;
    uStack_368 = uStack_4c8;
    uStack_370 = uStack_4d0;
    uStack_3b8 = uStack_518;
    uStack_3c0 = uStack_520;
    uStack_3a8 = uStack_508;
    uStack_3b0 = uStack_510;
    uStack_398 = uStack_4f8;
    uStack_3a0 = uStack_500;
    uStack_388 = uStack_4e8;
    uStack_390 = uStack_4f0;
    uStack_3d8 = uStack_538;
    uStack_3e0 = uStack_540;
    uStack_3c8 = uStack_528;
    uStack_3d0 = uStack_530;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uStack_238 = uStack_378;
    uStack_240 = uStack_380;
    uStack_228 = uStack_368;
    uStack_230 = uStack_370;
    uStack_220 = (undefined2)uStack_360;
    uStack_278 = uStack_3b8;
    uStack_280 = uStack_3c0;
    uStack_268 = uStack_3a8;
    uStack_270 = uStack_3b0;
    uStack_258 = uStack_398;
    uStack_260 = uStack_3a0;
    uStack_248 = uStack_388;
    uStack_250 = uStack_390;
    uStack_298 = uStack_3d8;
    uStack_2a0 = uStack_3e0;
    uStack_288 = uStack_3c8;
    uStack_290 = uStack_3d0;
    FUN_10470dd8c(param_1);
    FUN_1046dc4a8(param_1,uVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x50));
  if (*(char *)(puVar1 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = puVar1[1];
    uVar11 = puVar1[2];
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar18);
    __ss6HasherV8_combineyySuF(uVar13);
    __ss6HasherV8_combineyySuF(uVar11);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x54));
  lVar16 = puVar1[1];
  if (lVar16 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x58));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar13);
  }
  puVar3 = (undefined4 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x5c));
  if (*(char *)(puVar3 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *puVar3;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar6);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x60));
  uVar14 = *puVar2;
  if ((uVar14 & 0xff) == 2) {
LAB_104744e90:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    bVar8 = *(byte *)((long)puVar2 + 0x1c);
    uStack_680 = (ulong)(uint)puVar2[3];
    uVar15 = puVar2[1];
    uVar5 = puVar2[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF((uint)uVar14 & 1);
    __ss6HasherV8_combineyys6UInt32VF(uVar14 >> 0x20);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    uVar14 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    if ((ulong)bVar8 == 1) goto LAB_104744e90;
    uVar14 = uStack_680 & 0xffffff0000000000;
    uVar15 = uStack_680 & 0xffffffff;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar14 | uVar15 | (ulong)bVar8 << 0x20);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 100));
  if (*(char *)((long)puVar2 + 0x11) != '\x01') {
    uVar7 = puVar2[2];
    uVar15 = *puVar2;
    uVar5 = puVar2[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    if ((char)uVar7 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar14 = 0;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        uVar14 = uVar5;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar14);
      goto LAB_104744f20;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_104744f20:
  _memcpy(auStack_678,(long)unaff_x20 + (long)*(int *)(lVar12 + 0x68),0x133);
  iVar9 = (int)auStack_678;
  func_0x000103bffd74();
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(&uStack_3e0,auStack_678,0x133);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104749da4(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x6c));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar13);
  }
  return;
}



/* Entry: 104744fd8; end: 104745013;  */

void FUN_104744fd8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104744670(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104745014; end: 104745017;  */

void FUN_104745014(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  long lStack_688;
  ulong uStack_680;
  undefined1 auStack_678 [312];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined3 uStack_3f8;
  undefined5 uStack_3f5;
  undefined3 uStack_3f0;
  undefined8 uStack_3ed;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined2 uStack_220;
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
  undefined3 uStack_158;
  undefined5 uStack_155;
  undefined3 uStack_150;
  undefined8 uStack_14d;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
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
  
  lVar10 = 0;
  FUN_1047425ec();
  uStack_680 = *(ulong *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_680 + 0x40));
  lVar19 = (long)&uStack_6a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar19 - extraout_x8_00;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyys6UInt64VF(unaff_x20[1]);
  lVar16 = unaff_x20[3];
  if (lVar16 == 1) {
LAB_104744798:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[2];
    lVar12 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar16 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
    }
    if (lVar12 == 0) goto LAB_104744798;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046dbda4(param_1,lVar12);
  }
  if (unaff_x20[0xb] == 2) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_d8 = unaff_x20[6];
    uStack_e0 = unaff_x20[5];
    uStack_c8 = unaff_x20[8];
    uStack_d0 = unaff_x20[7];
    uStack_b8 = unaff_x20[10];
    uStack_c0 = unaff_x20[9];
    uStack_a0 = unaff_x20[0xd];
    uStack_a8 = unaff_x20[0xc];
    uStack_90 = unaff_x20[0xf];
    uStack_98 = unaff_x20[0xe];
    uStack_80 = unaff_x20[0x11];
    uStack_88 = unaff_x20[0x10];
    uStack_78 = unaff_x20[0x12];
    lStack_b0 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104748e40(param_1);
  }
  lVar16 = unaff_x20[0x19];
  if (lVar16 == 1) {
LAB_104744914:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[0x13];
    uStack_6a0 = unaff_x20[0x14];
    lVar12 = unaff_x20[0x15];
    uStack_698 = unaff_x20[0x16];
    lVar4 = unaff_x20[0x17];
    uStack_690 = unaff_x20[0x18];
    lStack_688 = lVar19;
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar12 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
      lVar19 = lStack_688;
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar13);
      if (lVar12 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uStack_6a0,lVar12);
      }
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        lVar19 = lStack_688;
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uStack_698,lVar4);
        lVar19 = lStack_688;
      }
    }
    lStack_688 = lVar19;
    if (lVar16 == 0) goto LAB_104744914;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uStack_690,lVar16);
  }
  lVar12 = 0;
  FUN_10474425c();
  FUN_104744294((long)unaff_x20 + (long)*(int *)(lVar12 + 0x24),lVar17,0x112db3fe8,&UNK_10d95e580);
  lVar16 = lVar17;
  (**(code **)(uStack_680 + 0x30))(lVar17,1,lVar10);
  if ((int)lVar16 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047465c8(lVar17,lVar19);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar11 = 0;
    __s10Foundation3URLVMa(0);
    uVar13 = 0x112e092e0;
    FUN_1047466bc(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar11,uVar13);
    func_0x00010474660c(lVar19);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x28));
  if (puVar1[6] == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_138 = puVar1[1];
    uStack_140 = *puVar1;
    uStack_128 = puVar1[3];
    uStack_130 = puVar1[2];
    uStack_118 = puVar1[5];
    uStack_120 = puVar1[4];
    uStack_108 = puVar1[7];
    uStack_100 = (undefined1)puVar1[8];
    uStack_f7 = *(undefined8 *)((long)puVar1 + 0x49);
    uStack_ff = (undefined7)*(undefined8 *)((long)puVar1 + 0x41);
    uStack_f8 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x41) >> 0x38);
    lStack_110 = puVar1[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10474a96c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x2c));
  lVar16 = puVar1[1];
  if (lVar16 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x30));
  uStack_408 = puVar1[0x15];
  uStack_410 = puVar1[0x14];
  uStack_400 = puVar1[0x16];
  uStack_428 = puVar1[0x11];
  uStack_430 = puVar1[0x10];
  uStack_418 = puVar1[0x13];
  uStack_420 = puVar1[0x12];
  uStack_3f8 = (undefined3)puVar1[0x17];
  uStack_3ed = *(undefined8 *)((long)puVar1 + 0xc3);
  uStack_3f5 = (undefined5)*(undefined8 *)((long)puVar1 + 0xbb);
  uStack_3f0 = (undefined3)((ulong)*(undefined8 *)((long)puVar1 + 0xbb) >> 0x28);
  uStack_448 = puVar1[0xd];
  uStack_450 = puVar1[0xc];
  uStack_438 = puVar1[0xf];
  uStack_440 = puVar1[0xe];
  uStack_488 = puVar1[5];
  uStack_490 = puVar1[4];
  uStack_478 = puVar1[7];
  uStack_480 = puVar1[6];
  uStack_468 = puVar1[9];
  uStack_470 = puVar1[8];
  uStack_458 = puVar1[0xb];
  uStack_460 = puVar1[10];
  uStack_4a8 = puVar1[1];
  uStack_4b0 = *puVar1;
  uStack_498 = puVar1[3];
  uStack_4a0 = puVar1[2];
  iVar9 = (int)&uStack_4b0;
  FUN_104746648();
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_178 = uStack_418;
    uStack_180 = uStack_420;
    uStack_168 = uStack_408;
    uStack_170 = uStack_410;
    uStack_158 = uStack_3f8;
    uStack_160 = uStack_400;
    uStack_14d = uStack_3ed;
    uStack_155 = uStack_3f5;
    uStack_150 = uStack_3f0;
    uStack_1a8 = uStack_448;
    uStack_1b0 = uStack_450;
    uStack_198 = uStack_438;
    uStack_1a0 = uStack_440;
    uStack_188 = uStack_428;
    uStack_190 = uStack_430;
    uStack_1e8 = uStack_488;
    uStack_1f0 = uStack_490;
    uStack_1d8 = uStack_478;
    uStack_1e0 = uStack_480;
    uStack_1c8 = uStack_468;
    uStack_1d0 = uStack_470;
    uStack_1b8 = uStack_458;
    uStack_1c0 = uStack_460;
    uStack_208 = uStack_4a8;
    uStack_210 = uStack_4b0;
    uStack_1f8 = uStack_498;
    uStack_200 = uStack_4a0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104743670(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x34));
  uVar14 = puVar1[1];
  if (uVar14 >> 0x3c < 0xf) {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar14);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x38));
  uVar14 = puVar1[1];
  if (uVar14 >> 0x3c < 0xf) {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar13,uVar14);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x3c)))
  ;
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x40));
  if ((char)puVar2[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar15 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x44)))
  ;
  bVar8 = *(byte *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x48));
  if (bVar8 == 2) {
    bVar8 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar8 = bVar8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar8);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x4c));
  uStack_4d8 = puVar1[0xd];
  uStack_4e0 = puVar1[0xc];
  uStack_4c8 = puVar1[0xf];
  uStack_4d0 = puVar1[0xe];
  uStack_4b8 = puVar1[0x11];
  uStack_4c0 = puVar1[0x10];
  uStack_518 = puVar1[5];
  uStack_520 = puVar1[4];
  uStack_508 = puVar1[7];
  uStack_510 = puVar1[6];
  uStack_4f8 = puVar1[9];
  uStack_500 = puVar1[8];
  uStack_4e8 = puVar1[0xb];
  uStack_4f0 = puVar1[10];
  uStack_538 = puVar1[1];
  uStack_540 = *puVar1;
  uStack_528 = puVar1[3];
  uStack_530 = puVar1[2];
  iVar9 = (int)&uStack_540;
  func_0x000104746678();
  uVar13 = uStack_4b8;
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_360 = uStack_4c0;
    uStack_378 = uStack_4d8;
    uStack_380 = uStack_4e0;
    uStack_368 = uStack_4c8;
    uStack_370 = uStack_4d0;
    uStack_3b8 = uStack_518;
    uStack_3c0 = uStack_520;
    uStack_3a8 = uStack_508;
    uStack_3b0 = uStack_510;
    uStack_398 = uStack_4f8;
    uStack_3a0 = uStack_500;
    uStack_388 = uStack_4e8;
    uStack_390 = uStack_4f0;
    uStack_3d8 = uStack_538;
    uStack_3e0 = uStack_540;
    uStack_3c8 = uStack_528;
    uStack_3d0 = uStack_530;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uStack_238 = uStack_378;
    uStack_240 = uStack_380;
    uStack_228 = uStack_368;
    uStack_230 = uStack_370;
    uStack_220 = (undefined2)uStack_360;
    uStack_278 = uStack_3b8;
    uStack_280 = uStack_3c0;
    uStack_268 = uStack_3a8;
    uStack_270 = uStack_3b0;
    uStack_258 = uStack_398;
    uStack_260 = uStack_3a0;
    uStack_248 = uStack_388;
    uStack_250 = uStack_390;
    uStack_298 = uStack_3d8;
    uStack_2a0 = uStack_3e0;
    uStack_288 = uStack_3c8;
    uStack_290 = uStack_3d0;
    FUN_10470dd8c(param_1);
    FUN_1046dc4a8(param_1,uVar13);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x50));
  if (*(char *)(puVar1 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = puVar1[1];
    uVar11 = puVar1[2];
    uVar18 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar18);
    __ss6HasherV8_combineyySuF(uVar13);
    __ss6HasherV8_combineyySuF(uVar11);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x54));
  lVar16 = puVar1[1];
  if (lVar16 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar16);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x58));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar13);
  }
  puVar3 = (undefined4 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x5c));
  if (*(char *)(puVar3 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *puVar3;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar6);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x60));
  uVar14 = *puVar2;
  if ((uVar14 & 0xff) == 2) {
LAB_104744e90:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    bVar8 = *(byte *)((long)puVar2 + 0x1c);
    uStack_680 = (ulong)(uint)puVar2[3];
    uVar15 = puVar2[1];
    uVar5 = puVar2[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF((uint)uVar14 & 1);
    __ss6HasherV8_combineyys6UInt32VF(uVar14 >> 0x20);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    uVar14 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    if ((ulong)bVar8 == 1) goto LAB_104744e90;
    uVar14 = uStack_680 & 0xffffff0000000000;
    uVar15 = uStack_680 & 0xffffffff;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt32VF(uVar14 | uVar15 | (ulong)bVar8 << 0x20);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar12 + 100));
  if (*(char *)((long)puVar2 + 0x11) != '\x01') {
    uVar7 = puVar2[2];
    uVar15 = *puVar2;
    uVar5 = puVar2[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar14 = 0;
    if ((uVar15 & 0x7fffffffffffffff) != 0) {
      uVar14 = uVar15;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar14);
    if ((char)uVar7 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar14 = 0;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        uVar14 = uVar5;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar14);
      goto LAB_104744f20;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_104744f20:
  _memcpy(auStack_678,(long)unaff_x20 + (long)*(int *)(lVar12 + 0x68),0x133);
  iVar9 = (int)auStack_678;
  func_0x000103bffd74();
  if (iVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(&uStack_3e0,auStack_678,0x133);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104749da4(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar12 + 0x6c));
  if (*(char *)(puVar1 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar13);
  }
  return;
}



/* Entry: 104745018; end: 10474504f;  */

void FUN_104745018(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104744670(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104745050; end: 104745053;  */

undefined8 FUN_104745050(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar23;
  char cVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_f30;
  ulong uStack_f28;
  long lStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  int *piStack_ec0;
  int *piStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  long lStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined1 auStack_e28 [312];
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  long lStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined1 uStack_c58;
  undefined7 uStack_c57;
  undefined1 uStack_c50;
  undefined7 uStack_c4f;
  undefined1 uStack_c48;
  undefined7 uStack_c47;
  undefined8 uStack_c40;
  undefined3 uStack_c38;
  undefined5 uStack_c35;
  undefined3 uStack_c30;
  undefined5 uStack_c2d;
  undefined3 uStack_c28;
  undefined5 uStack_c25;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  ulong uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined3 uStack_b68;
  undefined5 uStack_b65;
  undefined3 uStack_b60;
  undefined8 uStack_b5d;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long lStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined1 uStack_910;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 uStack_8b0;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7b8 [312];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined8 uStack_5d0;
  undefined3 uStack_5c8;
  undefined5 uStack_5c5;
  undefined3 uStack_5c0;
  undefined5 uStack_5bd;
  undefined3 uStack_5b8;
  undefined5 uStack_5b5;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined2 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined2 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined3 uStack_368;
  undefined5 uStack_365;
  undefined3 uStack_360;
  undefined8 uStack_35d;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined3 uStack_298;
  undefined5 uStack_295;
  undefined3 uStack_290;
  undefined8 uStack_28d;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
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
  undefined1 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
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
  
  lVar15 = 0;
  FUN_1047425ec();
  lVar34 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar34 + 0x40));
  lVar27 = (long)&uStack_f30 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar30 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar32 = lVar27 - extraout_x8_00;
  lVar30 = 0x11308e718;
  func_0x0001000285a8(0x11308e718,&UNK_10dd32a28);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)(uVar32 - extraout_x8_01);
  if (*param_1 != *param_2) {
    return 0;
  }
  if (*(long *)(param_1 + 2) != *(long *)(param_2 + 2)) {
    return 0;
  }
  lVar28 = *(long *)(param_1 + 6);
  lVar33 = *(long *)(param_2 + 6);
  if (lVar28 == 1) {
    if (lVar33 != 1) {
      return 0;
    }
  }
  else {
    if (lVar33 == 1) {
      return 0;
    }
    uVar23 = *(undefined8 *)(param_1 + 4);
    uStack_ee0 = *(undefined8 *)(param_1 + 8);
    uVar26 = *(undefined8 *)(param_2 + 4);
    uVar29 = *(undefined8 *)(param_2 + 8);
    uVar20 = uVar23;
    uStack_ee8 = uVar23;
    lStack_ed0 = lVar27;
    lStack_ec8 = lVar30;
    piStack_ec0 = param_1;
    piStack_eb8 = param_2;
    FUN_10474d880(uVar23,lVar28,uStack_ee0,uVar26,lVar33,uVar29);
    lVar27 = lStack_ed0;
    uStack_ed8 = CONCAT44(uStack_ed8._4_4_,(int)uVar20);
    FUN_104744228(uVar26,lVar33,uVar29);
    uVar20 = uStack_ee0;
    FUN_104744228(uVar23,lVar28,uStack_ee0);
    _swift_bridgeObjectRelease(lVar33);
    param_2 = piStack_eb8;
    _swift_bridgeObjectRelease(uVar29);
    param_1 = piStack_ec0;
    func_0x000104748dc4(uStack_ee8,lVar28,uVar20);
    lVar30 = lStack_ec8;
    if ((uStack_ed8 & 1) == 0) {
      return 0;
    }
  }
  uStack_cb8 = *(undefined8 *)(param_1 + 0x18);
  lStack_cc0 = *(long *)(param_1 + 0x16);
  uStack_ca8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_cb0 = *(undefined8 *)(param_1 + 0x1a);
  uStack_c98 = *(undefined8 *)(param_1 + 0x20);
  uStack_ca0 = *(undefined8 *)(param_1 + 0x1e);
  uStack_c88 = *(undefined8 *)(param_1 + 0x24);
  uStack_c90 = *(undefined8 *)(param_1 + 0x22);
  uStack_ce8 = *(undefined8 *)(param_1 + 0xc);
  uStack_cf0 = *(undefined8 *)(param_1 + 10);
  uStack_cd8 = *(undefined8 *)(param_1 + 0x10);
  uStack_ce0 = *(undefined8 *)(param_1 + 0xe);
  uStack_cc8 = *(undefined8 *)(param_1 + 0x14);
  uStack_cd0 = *(undefined8 *)(param_1 + 0x12);
  uStack_808 = *(undefined8 *)(param_2 + 0x14);
  uStack_c60 = *(undefined8 *)(param_2 + 0x12);
  uStack_c68 = *(ulong *)(param_2 + 0x10);
  uStack_c70 = *(undefined8 *)(param_2 + 0xe);
  uStack_c78 = *(undefined8 *)(param_2 + 0xc);
  uStack_c80 = *(undefined8 *)(param_2 + 10);
  uStack_c18 = *(undefined8 *)(param_2 + 0x24);
  uStack_c20 = *(undefined8 *)(param_2 + 0x22);
  uStack_7d8 = *(undefined8 *)(param_2 + 0x20);
  uStack_7e0 = *(undefined8 *)(param_2 + 0x1e);
  uStack_7e8 = *(undefined8 *)(param_2 + 0x1c);
  uStack_c40 = *(undefined8 *)(param_2 + 0x1a);
  uStack_7f8 = *(undefined8 *)(param_2 + 0x18);
  lStack_800 = *(long *)(param_2 + 0x16);
  uStack_c58 = (undefined1)uStack_808;
  uStack_c57 = (undefined7)((ulong)uStack_808 >> 8);
  uStack_c48 = (undefined1)uStack_7f8;
  uStack_c47 = (undefined7)((ulong)uStack_7f8 >> 8);
  uStack_c50 = (undefined1)lStack_800;
  uStack_c4f = (undefined7)((ulong)lStack_800 >> 8);
  uStack_c38 = (undefined3)uStack_7e8;
  uStack_c35 = (undefined5)((ulong)uStack_7e8 >> 0x18);
  uStack_c28 = (undefined3)uStack_7d8;
  uStack_c25 = (undefined5)((ulong)uStack_7d8 >> 0x18);
  uStack_c30 = (undefined3)uStack_7e0;
  uStack_c2d = (undefined5)((ulong)uStack_7e0 >> 0x18);
  uStack_8a0 = uStack_cf0;
  uStack_898 = uStack_ce8;
  uStack_890 = uStack_ce0;
  uStack_888 = uStack_cd8;
  uStack_880 = uStack_cd0;
  uStack_878 = uStack_cc8;
  lStack_870 = lStack_cc0;
  uStack_868 = uStack_cb8;
  uStack_860 = uStack_cb0;
  uStack_858 = uStack_ca8;
  uStack_850 = uStack_ca0;
  uStack_848 = uStack_c98;
  uStack_840 = uStack_c90;
  uStack_838 = uStack_c88;
  uStack_830 = uStack_c80;
  uStack_828 = uStack_c78;
  uStack_820 = uStack_c70;
  uStack_818 = uStack_c68;
  uStack_810 = uStack_c60;
  uStack_7f0 = uStack_c40;
  uStack_7d0 = uStack_c20;
  uStack_7c8 = uStack_c18;
  if (lStack_cc0 == 2) {
    if (lStack_800 == 2) {
      uStack_648 = *(undefined8 *)(param_1 + 0x18);
      lStack_650 = *(long *)(param_1 + 0x16);
      uStack_638 = *(undefined8 *)(param_1 + 0x1c);
      uStack_640 = *(undefined8 *)(param_1 + 0x1a);
      uStack_628 = *(undefined8 *)(param_1 + 0x20);
      uStack_630 = *(undefined8 *)(param_1 + 0x1e);
      uStack_618 = *(undefined8 *)(param_1 + 0x24);
      uStack_620 = *(undefined8 *)(param_1 + 0x22);
      uStack_678 = *(undefined8 *)(param_1 + 0xc);
      uStack_680 = *(undefined8 *)(param_1 + 10);
      uStack_668 = *(undefined8 *)(param_1 + 0x10);
      uStack_670 = *(undefined8 *)(param_1 + 0xe);
      uStack_658 = *(undefined8 *)(param_1 + 0x14);
      uStack_660 = *(undefined8 *)(param_1 + 0x12);
      lStack_ed0 = lVar27;
      lStack_ec8 = lVar30;
      FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
      FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
      func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
      goto LAB_1047454e0;
    }
LAB_104745348:
    uStack_680 = uStack_cf0;
    uStack_678 = uStack_ce8;
    uStack_670 = uStack_ce0;
    uStack_668 = uStack_cd8;
    uStack_660 = uStack_cd0;
    uStack_658 = uStack_cc8;
    lStack_650 = lStack_cc0;
    uStack_648 = uStack_cb8;
    uStack_640 = uStack_cb0;
    uStack_638 = uStack_ca8;
    uStack_630 = uStack_ca0;
    uStack_628 = uStack_c98;
    uStack_620 = uStack_c90;
    uStack_618 = uStack_c88;
    uStack_610 = uStack_c80;
    uStack_608 = uStack_c78;
    uStack_600 = uStack_c70;
    uStack_5f8 = uStack_c68;
    uStack_5f0 = uStack_c60;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5d0 = uStack_c40;
    uStack_5c8 = uStack_c38;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5b5 = uStack_c25;
    uStack_5b0 = uStack_c20;
    uStack_5a8 = uStack_c18;
    FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
    FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
    uVar20 = 0x11308e720;
    puVar21 = &UNK_10dd32a30;
LAB_1047453e4:
    puVar31 = &uStack_680;
LAB_1047453e8:
    func_0x000104748d84(puVar31,uVar20,puVar21);
    return 0;
  }
  if (lStack_800 == 2) goto LAB_104745348;
  uStack_648 = *(undefined8 *)(param_2 + 0x18);
  lStack_650 = *(long *)(param_2 + 0x16);
  uStack_638 = *(undefined8 *)(param_2 + 0x1c);
  uStack_640 = *(undefined8 *)(param_2 + 0x1a);
  uStack_628 = *(undefined8 *)(param_2 + 0x20);
  uStack_630 = *(undefined8 *)(param_2 + 0x1e);
  uStack_618 = *(undefined8 *)(param_2 + 0x24);
  uStack_620 = *(undefined8 *)(param_2 + 0x22);
  uStack_678 = *(undefined8 *)(param_2 + 0xc);
  uStack_680 = *(undefined8 *)(param_2 + 10);
  uStack_668 = *(undefined8 *)(param_2 + 0x10);
  uStack_670 = *(undefined8 *)(param_2 + 0xe);
  uStack_658 = *(undefined8 *)(param_2 + 0x14);
  uStack_660 = *(undefined8 *)(param_2 + 0x12);
  uStack_118 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = *(undefined8 *)(param_1 + 0x16);
  uStack_108 = *(undefined8 *)(param_1 + 0x1c);
  uStack_110 = *(undefined8 *)(param_1 + 0x1a);
  uStack_f8 = *(undefined8 *)(param_1 + 0x20);
  uStack_100 = *(undefined8 *)(param_1 + 0x1e);
  uStack_e8 = *(undefined8 *)(param_1 + 0x24);
  uStack_f0 = *(undefined8 *)(param_1 + 0x22);
  uStack_148 = *(undefined8 *)(param_1 + 0xc);
  uStack_150 = *(undefined8 *)(param_1 + 10);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 0xe);
  uStack_128 = *(undefined8 *)(param_1 + 0x14);
  uStack_130 = *(undefined8 *)(param_1 + 0x12);
  lStack_ed0 = lVar27;
  lStack_ec8 = lVar30;
  uStack_e0 = uStack_680;
  uStack_d8 = uStack_678;
  uStack_d0 = uStack_670;
  uStack_c8 = uStack_668;
  uStack_c0 = uStack_660;
  uStack_b8 = uStack_658;
  lStack_b0 = lStack_650;
  uStack_a8 = uStack_648;
  uStack_a0 = uStack_640;
  uStack_98 = uStack_638;
  uStack_90 = uStack_630;
  uStack_88 = uStack_628;
  uStack_80 = uStack_620;
  uStack_78 = uStack_618;
  FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
  FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
  puVar16 = &uStack_150;
  FUN_1047490d0(puVar16,&uStack_e0);
  func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
  func_0x000104748d84(&uStack_cf0,0x11308e618,&UNK_10dd32828);
  if (((ulong)puVar16 & 1) == 0) {
    return 0;
  }
LAB_1047454e0:
  uStack_f10 = *(undefined8 *)(param_1 + 0x26);
  uStack_f08 = *(undefined8 *)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x2a);
  uVar26 = *(undefined8 *)(param_1 + 0x2c);
  uVar23 = *(undefined8 *)(param_1 + 0x2e);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  lStack_f20 = *(long *)(param_1 + 0x32);
  uStack_f00 = *(undefined8 *)(param_2 + 0x26);
  uVar17 = *(ulong *)(param_2 + 0x28);
  lVar30 = *(long *)(param_2 + 0x2a);
  uStack_f18 = *(undefined8 *)(param_2 + 0x2c);
  uVar22 = *(ulong *)(param_2 + 0x2e);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  lVar27 = *(long *)(param_2 + 0x32);
  uStack_ed8 = uVar22;
  piStack_eb8 = param_2;
  if (lStack_f20 == 1) {
    if (lVar27 != 1) {
LAB_10474559c:
      uStack_ef8 = uVar29;
      uStack_ef0 = uVar20;
      uStack_ee8 = uVar26;
      uStack_ee0 = uVar23;
      piStack_eb8 = (int *)lVar27;
      func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
      piVar12 = piStack_eb8;
      func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uVar9,piStack_eb8);
      func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,
                          lStack_f20);
      func_0x0001015543ac(uStack_f00,uVar17,lVar30,uStack_f18,uStack_ed8,uVar9,piVar12);
      return 0;
    }
    uStack_f28 = uVar17;
    lStack_f20 = lVar30;
    piStack_ec0 = param_1;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
    func_0x000104711a50(uStack_f00,uStack_f28,lStack_f20,uStack_f18,uStack_ed8,uVar9,1);
    func_0x0001015543ac(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
  }
  else {
    if (lVar27 == 1) goto LAB_10474559c;
    uStack_f30 = uVar9;
    uStack_ef8 = uVar29;
    uStack_ef0 = uVar20;
    uStack_ee8 = uVar26;
    uStack_ee0 = uVar23;
    piStack_ec0 = param_1;
    uStack_1c0 = uStack_f10;
    uStack_1b8 = uStack_f08;
    uStack_1b0 = uVar20;
    uStack_1a8 = uVar26;
    uStack_1a0 = uVar23;
    uStack_198 = uVar29;
    lStack_190 = lStack_f20;
    uStack_188 = uStack_f00;
    uStack_180 = uVar17;
    lStack_178 = lVar30;
    uStack_170 = uStack_f18;
    uStack_168 = uVar22;
    uStack_160 = uVar9;
    lStack_158 = lVar27;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
    uVar23 = uStack_f18;
    uVar20 = uStack_f30;
    func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uStack_f30,lVar27);
    puVar16 = &uStack_1c0;
    FUN_104741990(puVar16,&uStack_188);
    uStack_f28 = CONCAT44(uStack_f28._4_4_,(int)puVar16);
    func_0x0001015543ac(uStack_f00,uVar17,lVar30,uVar23,uStack_ed8,uVar20,lVar27);
    func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,lStack_f20
                       );
    if ((uStack_f28 & 1) == 0) {
      return 0;
    }
  }
  lVar27 = 0;
  FUN_10474425c();
  iVar14 = *(int *)(lVar27 + 0x24);
  lVar30 = (long)*(int *)(lStack_ec8 + 0x30);
  FUN_104744294((long)piStack_ec0 + (long)iVar14,puVar31,0x112db3fe8,&UNK_10d95e580);
  FUN_104744294((long)piStack_eb8 + (long)iVar14,(long)puVar31 + lVar30,0x112db3fe8,&UNK_10d95e580);
  pcVar25 = *(code **)(lVar34 + 0x30);
  puVar16 = puVar31;
  (*pcVar25)(puVar31,1,lVar15);
  if ((int)puVar16 == 1) {
    lVar30 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar30,1,lVar15);
    if ((int)lVar30 != 1) goto LAB_104745840;
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
  }
  else {
    FUN_104744294(puVar31,uVar32,0x112db3fe8,&UNK_10d95e580);
    lVar34 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar34,1,lVar15);
    lVar15 = lStack_ed0;
    if ((int)lVar34 == 1) {
      func_0x00010474660c(uVar32);
LAB_104745840:
      uVar20 = 0x11308e718;
      puVar21 = &UNK_10dd32a28;
      goto LAB_1047453e8;
    }
    func_0x0001047465c8((long)puVar31 + lVar30,lStack_ed0);
    uVar22 = uVar32;
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar32,lVar15);
    func_0x00010474660c(lVar15);
    func_0x00010474660c(uVar32);
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  piVar12 = piStack_ec0;
  puVar31 = (undefined8 *)((long)piStack_ec0 + (long)*(int *)(lVar27 + 0x28));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x28));
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_910 = *(undefined1 *)(puVar31 + 10);
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_ca0 = CONCAT71(uStack_ca0._1_7_,uStack_910);
  uStack_c48 = *(undefined1 *)(puVar16 + 10);
  uStack_c60 = puVar16[7];
  uStack_c68 = puVar16[6];
  uStack_8b8 = puVar16[9];
  uStack_8c0 = puVar16[8];
  uStack_c80 = puVar16[3];
  uStack_c88 = puVar16[2];
  uStack_c70 = puVar16[5];
  uStack_c78 = puVar16[4];
  uStack_c90 = puVar16[1];
  uStack_c98 = *puVar16;
  uStack_c50 = (undefined1)uStack_8b8;
  uStack_c4f = (undefined7)((ulong)uStack_8b8 >> 8);
  uStack_c58 = (undefined1)uStack_8c0;
  uStack_c57 = (undefined7)((ulong)uStack_8c0 >> 8);
  uStack_960 = uStack_cf0;
  uStack_958 = uStack_ce8;
  uStack_950 = uStack_ce0;
  uStack_948 = uStack_cd8;
  uStack_940 = uStack_cd0;
  uStack_938 = uStack_cc8;
  lStack_930 = lStack_cc0;
  uStack_928 = uStack_cb8;
  uStack_920 = uStack_cb0;
  uStack_918 = uStack_ca8;
  uStack_900 = uStack_c98;
  uStack_8f8 = uStack_c90;
  uStack_8f0 = uStack_c88;
  uStack_8e8 = uStack_c80;
  uStack_8e0 = uStack_c78;
  uStack_8d8 = uStack_c70;
  uStack_8d0 = uStack_c68;
  uStack_8c8 = uStack_c60;
  uStack_8b0 = uStack_c48;
  if (lStack_cc0 == 0) {
    if (uStack_c68 != 0) {
LAB_104745a20:
      uStack_5df = uStack_c4f;
      uStack_5e7 = uStack_c57;
      uStack_5e0 = uStack_c50;
      uStack_630 = uStack_ca0;
      uStack_680 = uStack_cf0;
      uStack_678 = uStack_ce8;
      uStack_670 = uStack_ce0;
      uStack_668 = uStack_cd8;
      uStack_660 = uStack_cd0;
      uStack_658 = uStack_cc8;
      lStack_650 = lStack_cc0;
      uStack_648 = uStack_cb8;
      uStack_640 = uStack_cb0;
      uStack_638 = uStack_ca8;
      uStack_628 = uStack_c98;
      uStack_620 = uStack_c90;
      uStack_618 = uStack_c88;
      uStack_610 = uStack_c80;
      uStack_608 = uStack_c78;
      uStack_600 = uStack_c70;
      uStack_5f8 = uStack_c68;
      uStack_5f0 = uStack_c60;
      uStack_5e8 = uStack_c58;
      uStack_5d8 = uStack_c48;
      FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      uVar20 = 0x11308e728;
      puVar21 = &UNK_10dd32a38;
      goto LAB_1047453e4;
    }
    uStack_658 = puVar31[5];
    uStack_660 = puVar31[4];
    uStack_648 = puVar31[7];
    lStack_650 = puVar31[6];
    uStack_638 = puVar31[9];
    uStack_640 = puVar31[8];
    uStack_630 = CONCAT71(uStack_630._1_7_,*(undefined1 *)(puVar31 + 10));
    uStack_678 = puVar31[1];
    uStack_680 = *puVar31;
    uStack_668 = puVar31[3];
    uStack_670 = puVar31[2];
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
  }
  else {
    if (uStack_c68 == 0) goto LAB_104745a20;
    uStack_658 = puVar16[5];
    uStack_660 = puVar16[4];
    uStack_648 = puVar16[7];
    lStack_650 = puVar16[6];
    uStack_638 = puVar16[9];
    uStack_640 = puVar16[8];
    uStack_1d0 = *(undefined1 *)(puVar16 + 10);
    uStack_630 = CONCAT71(uStack_630._1_7_,uStack_1d0);
    uStack_678 = puVar16[1];
    uStack_680 = *puVar16;
    uStack_668 = puVar16[3];
    uStack_670 = puVar16[2];
    uStack_258 = puVar31[5];
    uStack_260 = puVar31[4];
    uStack_248 = puVar31[7];
    uStack_250 = puVar31[6];
    uStack_238 = puVar31[9];
    uStack_240 = puVar31[8];
    uStack_230 = *(undefined1 *)(puVar31 + 10);
    uStack_278 = puVar31[1];
    uStack_280 = *puVar31;
    uStack_268 = puVar31[3];
    uStack_270 = puVar31[2];
    uStack_220 = uStack_680;
    uStack_218 = uStack_678;
    uStack_210 = uStack_670;
    uStack_208 = uStack_668;
    uStack_200 = uStack_660;
    uStack_1f8 = uStack_658;
    lStack_1f0 = lStack_650;
    uStack_1e8 = uStack_648;
    uStack_1e0 = uStack_640;
    uStack_1d8 = uStack_638;
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    puVar31 = &uStack_280;
    FUN_10474ab40(puVar31,&uStack_220);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_cf0,0x112db3ff8,&UNK_10d95e598);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  piVar7 = piStack_eb8;
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x2c));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x2c));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x30));
  puVar16 = (undefined8 *)((long)piVar7 + (long)*(int *)(lVar27 + 0x30));
  iVar14 = (int)&uStack_c20;
  uStack_c40 = puVar31[0x16];
  uStack_c48 = (undefined1)puVar31[0x15];
  uStack_c47 = (undefined7)((ulong)puVar31[0x15] >> 8);
  uStack_c50 = (undefined1)puVar31[0x14];
  uStack_c4f = (undefined7)((ulong)puVar31[0x14] >> 8);
  uStack_c38 = (undefined3)puVar31[0x17];
  uStack_c2d = (undefined5)*(undefined8 *)((long)puVar31 + 0xc3);
  uStack_c28 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xc3) >> 0x28);
  uStack_c35 = (undefined5)*(undefined8 *)((long)puVar31 + 0xbb);
  uStack_c30 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xbb) >> 0x28);
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c60 = puVar31[0x12];
  uStack_c58 = (undefined1)puVar31[0x13];
  uStack_c57 = (undefined7)((ulong)puVar31[0x13] >> 8);
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_b5d = *(undefined8 *)((long)puVar16 + 0xc3);
  uStack_b60 = (undefined3)((ulong)*(undefined8 *)((long)puVar16 + 0xbb) >> 0x28);
  uStack_b78 = puVar16[0x15];
  uStack_b80 = puVar16[0x14];
  uStack_b70 = puVar16[0x16];
  uStack_b68 = (undefined3)puVar16[0x17];
  uStack_b65 = (undefined5)((ulong)puVar16[0x17] >> 0x18);
  uStack_bb8 = puVar16[0xd];
  uStack_bc0 = puVar16[0xc];
  uStack_ba8 = puVar16[0xf];
  uStack_bb0 = puVar16[0xe];
  uStack_b98 = puVar16[0x11];
  uStack_ba0 = puVar16[0x10];
  uStack_b88 = puVar16[0x13];
  uStack_b90 = puVar16[0x12];
  uStack_bf8 = puVar16[5];
  uStack_c00 = puVar16[4];
  uStack_be8 = puVar16[7];
  uStack_bf0 = puVar16[6];
  uStack_bd8 = puVar16[9];
  uStack_be0 = puVar16[8];
  uStack_bc8 = puVar16[0xb];
  uStack_bd0 = puVar16[10];
  uStack_c18 = puVar16[1];
  uStack_c20 = *puVar16;
  uStack_c08 = puVar16[3];
  uStack_c10 = puVar16[2];
  iVar13 = (int)&uStack_cf0;
  FUN_104746648();
  if (iVar13 == 1) {
    FUN_104746648();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5c8 = uStack_c38;
    uStack_5d0 = uStack_c40;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_618 = uStack_c88;
    uStack_620 = uStack_c90;
    uStack_608 = uStack_c78;
    uStack_610 = uStack_c80;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5f0 = uStack_c60;
    uStack_5f8 = uStack_c68;
    uStack_600 = uStack_c70;
    uStack_658 = uStack_cc8;
    uStack_660 = uStack_cd0;
    uStack_648 = uStack_cb8;
    lStack_650 = lStack_cc0;
    uStack_628 = uStack_c98;
    uStack_630 = uStack_ca0;
    uStack_638 = uStack_ca8;
    uStack_640 = uStack_cb0;
    uStack_668 = uStack_cd8;
    uStack_670 = uStack_ce0;
    uStack_678 = uStack_ce8;
    uStack_680 = uStack_cf0;
    FUN_104746648();
    if (iVar14 == 1) {
      return 0;
    }
    uStack_2a8 = uStack_b78;
    uStack_2b0 = uStack_b80;
    uStack_298 = uStack_b68;
    uStack_2a0 = uStack_b70;
    uStack_28d = uStack_b5d;
    uStack_295 = uStack_b65;
    uStack_290 = uStack_b60;
    uStack_2e8 = uStack_bb8;
    uStack_2f0 = uStack_bc0;
    uStack_2d8 = uStack_ba8;
    uStack_2e0 = uStack_bb0;
    uStack_2b8 = uStack_b88;
    uStack_2c0 = uStack_b90;
    uStack_2c8 = uStack_b98;
    uStack_2d0 = uStack_ba0;
    uStack_328 = uStack_bf8;
    uStack_330 = uStack_c00;
    uStack_318 = uStack_be8;
    uStack_320 = uStack_bf0;
    uStack_2f8 = uStack_bc8;
    uStack_300 = uStack_bd0;
    uStack_308 = uStack_bd8;
    uStack_310 = uStack_be0;
    uStack_338 = uStack_c08;
    uStack_340 = uStack_c10;
    uStack_348 = uStack_c18;
    uStack_350 = uStack_c20;
    uStack_378 = CONCAT71(uStack_5d7,uStack_5d8);
    uStack_380 = CONCAT71(uStack_5df,uStack_5e0);
    uStack_368 = uStack_5c8;
    uStack_370 = uStack_5d0;
    uStack_35d = CONCAT35(uStack_5b8,uStack_5bd);
    uStack_365 = uStack_5c5;
    uStack_360 = uStack_5c0;
    uStack_3b8 = uStack_618;
    uStack_3c0 = uStack_620;
    uStack_3a8 = uStack_608;
    uStack_3b0 = uStack_610;
    uStack_388 = CONCAT71(uStack_5e7,uStack_5e8);
    uStack_390 = uStack_5f0;
    uStack_398 = uStack_5f8;
    uStack_3a0 = uStack_600;
    uStack_3f8 = uStack_658;
    uStack_400 = uStack_660;
    uStack_3e8 = uStack_648;
    lStack_3f0 = lStack_650;
    uStack_3c8 = uStack_628;
    uStack_3d0 = uStack_630;
    uStack_3d8 = uStack_638;
    uStack_3e0 = uStack_640;
    uStack_408 = uStack_668;
    uStack_410 = uStack_670;
    uStack_418 = uStack_678;
    uStack_420 = uStack_680;
    puVar31 = &uStack_420;
    FUN_104743a4c(puVar31,&uStack_350);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x34));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x34));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x38));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x38));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_104745e54:
      func_0x000100de78a0(uVar32,uVar22);
      func_0x000100de78a0(uVar20,uVar17);
      func_0x0001000b44c0(uVar32,uVar22);
      func_0x0001000b44c0(uVar20,uVar17);
      return 0;
    }
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x3c)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x3c))) {
    return 0;
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 0x40));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x40));
  cVar24 = *(char *)(pdVar4 + 1);
  if (*(char *)(pdVar3 + 1) == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x44)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x44))) {
    return 0;
  }
  bVar10 = *(byte *)((long)piVar12 + (long)*(int *)(lVar27 + 0x48));
  bVar11 = *(byte *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x48));
  if (bVar10 == 2) {
    if (bVar11 != 2) {
      return 0;
    }
  }
  else {
    if (bVar11 == 2) {
      return 0;
    }
    if (((bVar10 ^ bVar11) & 1) != 0) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x4c));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x4c));
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_a18 = puVar31[0xd];
  uStack_a20 = puVar31[0xc];
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_a08 = puVar31[0xf];
  uStack_a10 = puVar31[0xe];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_9f8 = puVar31[0x11];
  uStack_a00 = puVar31[0x10];
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_a58 = puVar31[5];
  uStack_a60 = puVar31[4];
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_a48 = puVar31[7];
  uStack_a50 = puVar31[6];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_a38 = puVar31[9];
  uStack_a40 = puVar31[8];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_a28 = puVar31[0xb];
  uStack_a30 = puVar31[10];
  uStack_a78 = puVar31[1];
  uStack_a80 = *puVar31;
  uStack_a68 = puVar31[3];
  uStack_a70 = puVar31[2];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_c08 = puVar16[0xb];
  uStack_c10 = puVar16[10];
  uStack_988 = puVar16[0xd];
  uStack_990 = puVar16[0xc];
  uStack_bf8 = puVar16[0xd];
  uStack_c00 = puVar16[0xc];
  uStack_978 = puVar16[0xf];
  uStack_980 = puVar16[0xe];
  uStack_be8 = puVar16[0xf];
  uStack_bf0 = puVar16[0xe];
  uStack_968 = puVar16[0x11];
  uStack_970 = puVar16[0x10];
  uStack_9c8 = puVar16[5];
  uStack_9d0 = puVar16[4];
  uStack_c40 = puVar16[4];
  uStack_9b8 = puVar16[7];
  uStack_9c0 = puVar16[6];
  uStack_9a8 = puVar16[9];
  uStack_9b0 = puVar16[8];
  uStack_c18 = puVar16[9];
  uStack_c20 = puVar16[8];
  uStack_998 = puVar16[0xb];
  uStack_9a0 = puVar16[10];
  uStack_9e8 = puVar16[1];
  uStack_9f0 = *puVar16;
  uStack_9d8 = puVar16[3];
  uStack_9e0 = puVar16[2];
  uStack_c60 = *puVar16;
  uStack_bd8 = puVar16[0x11];
  uStack_be0 = puVar16[0x10];
  uStack_c48 = (undefined1)puVar16[3];
  uStack_c47 = (undefined7)((ulong)puVar16[3] >> 8);
  uStack_c50 = (undefined1)puVar16[2];
  uStack_c4f = (undefined7)((ulong)puVar16[2] >> 8);
  uStack_c38 = (undefined3)puVar16[5];
  uStack_c35 = (undefined5)((ulong)puVar16[5] >> 0x18);
  uStack_c28 = (undefined3)puVar16[7];
  uStack_c25 = (undefined5)((ulong)puVar16[7] >> 0x18);
  uStack_c30 = (undefined3)puVar16[6];
  uStack_c2d = (undefined5)((ulong)puVar16[6] >> 0x18);
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c58 = (undefined1)puVar16[1];
  uStack_c57 = (undefined7)((ulong)puVar16[1] >> 8);
  iVar14 = (int)&uStack_cf0;
  func_0x000104746678();
  uVar32 = uStack_c68;
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    if (iVar14 != 1) goto LAB_104746124;
    FUN_104744294(&uStack_a80,&uStack_680,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,&uStack_680,0x112db3ff0,&UNK_10d95e590);
  }
  else {
    uStack_e30 = uStack_c70;
    uStack_e48 = uStack_c88;
    uStack_e50 = uStack_c90;
    uStack_e38 = uStack_c78;
    uStack_e40 = uStack_c80;
    uStack_e88 = uStack_cc8;
    uStack_e90 = uStack_cd0;
    uStack_e78 = uStack_cb8;
    lStack_e80 = lStack_cc0;
    uStack_e68 = uStack_ca8;
    uStack_e70 = uStack_cb0;
    uStack_e58 = uStack_c98;
    uStack_e60 = uStack_ca0;
    uStack_ea8 = uStack_ce8;
    uStack_eb0 = uStack_cf0;
    uStack_e98 = uStack_cd8;
    uStack_ea0 = uStack_ce0;
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    uVar22 = uStack_bd8;
    if (iVar14 == 1) {
LAB_104746124:
      _memcpy(&uStack_680,&uStack_cf0,0x120);
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      uVar20 = 0x11308e730;
      puVar21 = &UNK_10dd32a40;
      goto LAB_1047453e4;
    }
    uStack_5f8 = uStack_bd8;
    uStack_600 = uStack_be0;
    uStack_618 = uStack_bf8;
    uStack_620 = uStack_c00;
    uStack_608 = uStack_be8;
    uStack_610 = uStack_bf0;
    uStack_498 = CONCAT71(uStack_c47,uStack_c48);
    uStack_4a0 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_658 = CONCAT53(uStack_c35,uStack_c38);
    uStack_488 = CONCAT53(uStack_c35,uStack_c38);
    uStack_648 = CONCAT53(uStack_c25,uStack_c28);
    lStack_650 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_660 = uStack_c40;
    uStack_478 = CONCAT53(uStack_c25,uStack_c28);
    uStack_480 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_628 = uStack_c08;
    uStack_630 = uStack_c10;
    uStack_638 = uStack_c18;
    uStack_640 = uStack_c20;
    uStack_678 = CONCAT71(uStack_c57,uStack_c58);
    uStack_668 = CONCAT71(uStack_c47,uStack_c48);
    uStack_670 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_4a8 = CONCAT71(uStack_c57,uStack_c58);
    uStack_680 = uStack_c60;
    uStack_4d8 = uStack_e48;
    uStack_4e0 = uStack_e50;
    uStack_4c8 = uStack_e38;
    uStack_4d0 = uStack_e40;
    uStack_518 = uStack_e88;
    uStack_520 = uStack_e90;
    uStack_508 = uStack_e78;
    lStack_510 = lStack_e80;
    uStack_4e8 = uStack_e58;
    uStack_4f0 = uStack_e60;
    uStack_4f8 = uStack_e68;
    uStack_500 = uStack_e70;
    uStack_528 = uStack_e98;
    uStack_530 = uStack_ea0;
    uStack_538 = uStack_ea8;
    uStack_540 = uStack_eb0;
    uStack_448 = uStack_bf8;
    uStack_450 = uStack_c00;
    uStack_438 = uStack_be8;
    uStack_440 = uStack_bf0;
    uStack_490 = uStack_c40;
    uStack_458 = uStack_c08;
    uStack_460 = uStack_c10;
    uStack_468 = uStack_c18;
    uStack_470 = uStack_c20;
    uStack_4c0 = (undefined2)uStack_e30;
    uStack_430 = (undefined2)uStack_be0;
    uStack_4b0 = uStack_c60;
    puVar31 = &uStack_540;
    FUN_10470e040(puVar31,&uStack_4b0);
    if (((ulong)puVar31 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
    FUN_10470cfc0(uVar32,uVar22);
    FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
    if ((uVar32 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
  }
  func_0x000104748d84(&uStack_cf0,0x112db3ff0,&UNK_10d95e590);
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x50));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x50));
  if ((char)puVar1[3] == '\x01') {
    if (*(char *)(puVar31 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(puVar31 + 3) == '\x01') {
      return 0;
    }
    uVar32 = *puVar1;
    func_0x0001046c1c10(uVar32,puVar1[1],puVar1[2],*puVar31,puVar31[1],puVar31[2]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x54));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x54));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x58));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x58));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*plVar5 != *plVar6) {
      return 0;
    }
  }
  piVar7 = (int *)((long)piVar12 + (long)*(int *)(lVar27 + 0x5c));
  piVar8 = (int *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x5c));
  cVar24 = (char)piVar8[1];
  if ((char)piVar7[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*piVar7 != *piVar8) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x60));
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x60));
  uVar32 = *puVar2 & 0xff;
  if ((*puVar1 & 0xff) == 2) {
    if (uVar32 != 2) {
      return 0;
    }
  }
  else {
    if (uVar32 == 2) {
      return 0;
    }
    uVar32 = *puVar1 & 0xffffffff00000001;
    func_0x000104741654(puVar1[1],puVar1[2],puVar2[1],puVar2[2],uVar32,(ulong)(uint5)puVar1[3],
                        *puVar2 & 0xffffffff00000001,(ulong)(uint5)puVar2[3]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 100));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 100));
  cVar24 = *(char *)((long)pdVar4 + 0x11);
  if (*(char *)((long)pdVar3 + 0x11) != '\x01') {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
    cVar24 = *(char *)(pdVar4 + 2);
    if (*(char *)(pdVar3 + 2) != '\x01') {
      if (cVar24 == '\x01') {
        return 0;
      }
      if (pdVar3[1] != pdVar4[1]) {
        return 0;
      }
      goto LAB_104746498;
    }
  }
  if (cVar24 != '\x01') {
    return 0;
  }
LAB_104746498:
  iVar14 = *(int *)(lVar27 + 0x68);
  _memcpy(&uStack_cf0,(long)piVar12 + (long)iVar14,0x133);
  _memcpy(&uStack_bb8,(long)piStack_eb8 + (long)iVar14,0x133);
  iVar14 = (int)&uStack_cf0;
  func_0x000103bffd74();
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    _memcpy(auStack_e28,&uStack_cf0,0x133);
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 == 1) {
      return 0;
    }
    _memcpy(&uStack_680,&uStack_bb8,0x133);
    _memcpy(auStack_7b8,auStack_e28,0x133);
    puVar19 = auStack_7b8;
    FUN_10474a038(puVar19,&uStack_680);
    if (((ulong)puVar19 & 1) == 0) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x6c));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x6c));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 == '\x01') {
      return 1;
    }
    return 0;
  }
  if (cVar24 != '\x01') {
    if (*plVar5 == *plVar6) {
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 104745054; end: 1047465c7;  */

undefined8 FUN_104745054(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar23;
  char cVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_f30;
  ulong uStack_f28;
  long lStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  ulong uStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  int *piStack_ec0;
  int *piStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  long lStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined1 auStack_e28 [312];
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  long lStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined1 uStack_c58;
  undefined7 uStack_c57;
  undefined1 uStack_c50;
  undefined7 uStack_c4f;
  undefined1 uStack_c48;
  undefined7 uStack_c47;
  undefined8 uStack_c40;
  undefined3 uStack_c38;
  undefined5 uStack_c35;
  undefined3 uStack_c30;
  undefined5 uStack_c2d;
  undefined3 uStack_c28;
  undefined5 uStack_c25;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  ulong uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined3 uStack_b68;
  undefined5 uStack_b65;
  undefined3 uStack_b60;
  undefined8 uStack_b5d;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long lStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined1 uStack_910;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 uStack_8b0;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7b8 [312];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined8 uStack_5d0;
  undefined3 uStack_5c8;
  undefined5 uStack_5c5;
  undefined3 uStack_5c0;
  undefined5 uStack_5bd;
  undefined3 uStack_5b8;
  undefined5 uStack_5b5;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined2 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined2 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined3 uStack_368;
  undefined5 uStack_365;
  undefined3 uStack_360;
  undefined8 uStack_35d;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined3 uStack_298;
  undefined5 uStack_295;
  undefined3 uStack_290;
  undefined8 uStack_28d;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
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
  undefined1 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
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
  
  lVar15 = 0;
  FUN_1047425ec();
  lVar34 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar34 + 0x40));
  lVar27 = (long)&uStack_f30 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar30 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar32 = lVar27 - extraout_x8_00;
  lVar30 = 0x11308e718;
  func_0x0001000285a8(0x11308e718,&UNK_10dd32a28);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)(uVar32 - extraout_x8_01);
  if (*param_1 != *param_2) {
    return 0;
  }
  if (*(long *)(param_1 + 2) != *(long *)(param_2 + 2)) {
    return 0;
  }
  lVar28 = *(long *)(param_1 + 6);
  lVar33 = *(long *)(param_2 + 6);
  if (lVar28 == 1) {
    if (lVar33 != 1) {
      return 0;
    }
  }
  else {
    if (lVar33 == 1) {
      return 0;
    }
    uVar23 = *(undefined8 *)(param_1 + 4);
    uStack_ee0 = *(undefined8 *)(param_1 + 8);
    uVar26 = *(undefined8 *)(param_2 + 4);
    uVar29 = *(undefined8 *)(param_2 + 8);
    uVar20 = uVar23;
    uStack_ee8 = uVar23;
    lStack_ed0 = lVar27;
    lStack_ec8 = lVar30;
    piStack_ec0 = param_1;
    piStack_eb8 = param_2;
    FUN_10474d880(uVar23,lVar28,uStack_ee0,uVar26,lVar33,uVar29);
    lVar27 = lStack_ed0;
    uStack_ed8 = CONCAT44(uStack_ed8._4_4_,(int)uVar20);
    FUN_104744228(uVar26,lVar33,uVar29);
    uVar20 = uStack_ee0;
    FUN_104744228(uVar23,lVar28,uStack_ee0);
    _swift_bridgeObjectRelease(lVar33);
    param_2 = piStack_eb8;
    _swift_bridgeObjectRelease(uVar29);
    param_1 = piStack_ec0;
    func_0x000104748dc4(uStack_ee8,lVar28,uVar20);
    lVar30 = lStack_ec8;
    if ((uStack_ed8 & 1) == 0) {
      return 0;
    }
  }
  uStack_cb8 = *(undefined8 *)(param_1 + 0x18);
  lStack_cc0 = *(long *)(param_1 + 0x16);
  uStack_ca8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_cb0 = *(undefined8 *)(param_1 + 0x1a);
  uStack_c98 = *(undefined8 *)(param_1 + 0x20);
  uStack_ca0 = *(undefined8 *)(param_1 + 0x1e);
  uStack_c88 = *(undefined8 *)(param_1 + 0x24);
  uStack_c90 = *(undefined8 *)(param_1 + 0x22);
  uStack_ce8 = *(undefined8 *)(param_1 + 0xc);
  uStack_cf0 = *(undefined8 *)(param_1 + 10);
  uStack_cd8 = *(undefined8 *)(param_1 + 0x10);
  uStack_ce0 = *(undefined8 *)(param_1 + 0xe);
  uStack_cc8 = *(undefined8 *)(param_1 + 0x14);
  uStack_cd0 = *(undefined8 *)(param_1 + 0x12);
  uStack_808 = *(undefined8 *)(param_2 + 0x14);
  uStack_c60 = *(undefined8 *)(param_2 + 0x12);
  uStack_c68 = *(ulong *)(param_2 + 0x10);
  uStack_c70 = *(undefined8 *)(param_2 + 0xe);
  uStack_c78 = *(undefined8 *)(param_2 + 0xc);
  uStack_c80 = *(undefined8 *)(param_2 + 10);
  uStack_c18 = *(undefined8 *)(param_2 + 0x24);
  uStack_c20 = *(undefined8 *)(param_2 + 0x22);
  uStack_7d8 = *(undefined8 *)(param_2 + 0x20);
  uStack_7e0 = *(undefined8 *)(param_2 + 0x1e);
  uStack_7e8 = *(undefined8 *)(param_2 + 0x1c);
  uStack_c40 = *(undefined8 *)(param_2 + 0x1a);
  uStack_7f8 = *(undefined8 *)(param_2 + 0x18);
  lStack_800 = *(long *)(param_2 + 0x16);
  uStack_c58 = (undefined1)uStack_808;
  uStack_c57 = (undefined7)((ulong)uStack_808 >> 8);
  uStack_c48 = (undefined1)uStack_7f8;
  uStack_c47 = (undefined7)((ulong)uStack_7f8 >> 8);
  uStack_c50 = (undefined1)lStack_800;
  uStack_c4f = (undefined7)((ulong)lStack_800 >> 8);
  uStack_c38 = (undefined3)uStack_7e8;
  uStack_c35 = (undefined5)((ulong)uStack_7e8 >> 0x18);
  uStack_c28 = (undefined3)uStack_7d8;
  uStack_c25 = (undefined5)((ulong)uStack_7d8 >> 0x18);
  uStack_c30 = (undefined3)uStack_7e0;
  uStack_c2d = (undefined5)((ulong)uStack_7e0 >> 0x18);
  uStack_8a0 = uStack_cf0;
  uStack_898 = uStack_ce8;
  uStack_890 = uStack_ce0;
  uStack_888 = uStack_cd8;
  uStack_880 = uStack_cd0;
  uStack_878 = uStack_cc8;
  lStack_870 = lStack_cc0;
  uStack_868 = uStack_cb8;
  uStack_860 = uStack_cb0;
  uStack_858 = uStack_ca8;
  uStack_850 = uStack_ca0;
  uStack_848 = uStack_c98;
  uStack_840 = uStack_c90;
  uStack_838 = uStack_c88;
  uStack_830 = uStack_c80;
  uStack_828 = uStack_c78;
  uStack_820 = uStack_c70;
  uStack_818 = uStack_c68;
  uStack_810 = uStack_c60;
  uStack_7f0 = uStack_c40;
  uStack_7d0 = uStack_c20;
  uStack_7c8 = uStack_c18;
  if (lStack_cc0 == 2) {
    if (lStack_800 == 2) {
      uStack_648 = *(undefined8 *)(param_1 + 0x18);
      lStack_650 = *(long *)(param_1 + 0x16);
      uStack_638 = *(undefined8 *)(param_1 + 0x1c);
      uStack_640 = *(undefined8 *)(param_1 + 0x1a);
      uStack_628 = *(undefined8 *)(param_1 + 0x20);
      uStack_630 = *(undefined8 *)(param_1 + 0x1e);
      uStack_618 = *(undefined8 *)(param_1 + 0x24);
      uStack_620 = *(undefined8 *)(param_1 + 0x22);
      uStack_678 = *(undefined8 *)(param_1 + 0xc);
      uStack_680 = *(undefined8 *)(param_1 + 10);
      uStack_668 = *(undefined8 *)(param_1 + 0x10);
      uStack_670 = *(undefined8 *)(param_1 + 0xe);
      uStack_658 = *(undefined8 *)(param_1 + 0x14);
      uStack_660 = *(undefined8 *)(param_1 + 0x12);
      lStack_ed0 = lVar27;
      lStack_ec8 = lVar30;
      FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
      FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
      func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
      goto LAB_1047454e0;
    }
LAB_104745348:
    uStack_680 = uStack_cf0;
    uStack_678 = uStack_ce8;
    uStack_670 = uStack_ce0;
    uStack_668 = uStack_cd8;
    uStack_660 = uStack_cd0;
    uStack_658 = uStack_cc8;
    lStack_650 = lStack_cc0;
    uStack_648 = uStack_cb8;
    uStack_640 = uStack_cb0;
    uStack_638 = uStack_ca8;
    uStack_630 = uStack_ca0;
    uStack_628 = uStack_c98;
    uStack_620 = uStack_c90;
    uStack_618 = uStack_c88;
    uStack_610 = uStack_c80;
    uStack_608 = uStack_c78;
    uStack_600 = uStack_c70;
    uStack_5f8 = uStack_c68;
    uStack_5f0 = uStack_c60;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5d0 = uStack_c40;
    uStack_5c8 = uStack_c38;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5b5 = uStack_c25;
    uStack_5b0 = uStack_c20;
    uStack_5a8 = uStack_c18;
    FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
    FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
    uVar20 = 0x11308e720;
    puVar21 = &UNK_10dd32a30;
LAB_1047453e4:
    puVar31 = &uStack_680;
LAB_1047453e8:
    func_0x000104748d84(puVar31,uVar20,puVar21);
    return 0;
  }
  if (lStack_800 == 2) goto LAB_104745348;
  uStack_648 = *(undefined8 *)(param_2 + 0x18);
  lStack_650 = *(long *)(param_2 + 0x16);
  uStack_638 = *(undefined8 *)(param_2 + 0x1c);
  uStack_640 = *(undefined8 *)(param_2 + 0x1a);
  uStack_628 = *(undefined8 *)(param_2 + 0x20);
  uStack_630 = *(undefined8 *)(param_2 + 0x1e);
  uStack_618 = *(undefined8 *)(param_2 + 0x24);
  uStack_620 = *(undefined8 *)(param_2 + 0x22);
  uStack_678 = *(undefined8 *)(param_2 + 0xc);
  uStack_680 = *(undefined8 *)(param_2 + 10);
  uStack_668 = *(undefined8 *)(param_2 + 0x10);
  uStack_670 = *(undefined8 *)(param_2 + 0xe);
  uStack_658 = *(undefined8 *)(param_2 + 0x14);
  uStack_660 = *(undefined8 *)(param_2 + 0x12);
  uStack_118 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = *(undefined8 *)(param_1 + 0x16);
  uStack_108 = *(undefined8 *)(param_1 + 0x1c);
  uStack_110 = *(undefined8 *)(param_1 + 0x1a);
  uStack_f8 = *(undefined8 *)(param_1 + 0x20);
  uStack_100 = *(undefined8 *)(param_1 + 0x1e);
  uStack_e8 = *(undefined8 *)(param_1 + 0x24);
  uStack_f0 = *(undefined8 *)(param_1 + 0x22);
  uStack_148 = *(undefined8 *)(param_1 + 0xc);
  uStack_150 = *(undefined8 *)(param_1 + 10);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 0xe);
  uStack_128 = *(undefined8 *)(param_1 + 0x14);
  uStack_130 = *(undefined8 *)(param_1 + 0x12);
  lStack_ed0 = lVar27;
  lStack_ec8 = lVar30;
  uStack_e0 = uStack_680;
  uStack_d8 = uStack_678;
  uStack_d0 = uStack_670;
  uStack_c8 = uStack_668;
  uStack_c0 = uStack_660;
  uStack_b8 = uStack_658;
  lStack_b0 = lStack_650;
  uStack_a8 = uStack_648;
  uStack_a0 = uStack_640;
  uStack_98 = uStack_638;
  uStack_90 = uStack_630;
  uStack_88 = uStack_628;
  uStack_80 = uStack_620;
  uStack_78 = uStack_618;
  FUN_104744294(&uStack_8a0,auStack_7b8,0x11308e618,&UNK_10dd32828);
  FUN_104744294(&uStack_830,auStack_7b8,0x11308e618,&UNK_10dd32828);
  puVar16 = &uStack_150;
  FUN_1047490d0(puVar16,&uStack_e0);
  func_0x000104748d84(&uStack_680,0x11308e618,&UNK_10dd32828);
  func_0x000104748d84(&uStack_cf0,0x11308e618,&UNK_10dd32828);
  if (((ulong)puVar16 & 1) == 0) {
    return 0;
  }
LAB_1047454e0:
  uStack_f10 = *(undefined8 *)(param_1 + 0x26);
  uStack_f08 = *(undefined8 *)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x2a);
  uVar26 = *(undefined8 *)(param_1 + 0x2c);
  uVar23 = *(undefined8 *)(param_1 + 0x2e);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  lStack_f20 = *(long *)(param_1 + 0x32);
  uStack_f00 = *(undefined8 *)(param_2 + 0x26);
  uVar17 = *(ulong *)(param_2 + 0x28);
  lVar30 = *(long *)(param_2 + 0x2a);
  uStack_f18 = *(undefined8 *)(param_2 + 0x2c);
  uVar22 = *(ulong *)(param_2 + 0x2e);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  lVar27 = *(long *)(param_2 + 0x32);
  uStack_ed8 = uVar22;
  piStack_eb8 = param_2;
  if (lStack_f20 == 1) {
    if (lVar27 != 1) {
LAB_10474559c:
      uStack_ef8 = uVar29;
      uStack_ef0 = uVar20;
      uStack_ee8 = uVar26;
      uStack_ee0 = uVar23;
      piStack_eb8 = (int *)lVar27;
      func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
      piVar12 = piStack_eb8;
      func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uVar9,piStack_eb8);
      func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,
                          lStack_f20);
      func_0x0001015543ac(uStack_f00,uVar17,lVar30,uStack_f18,uStack_ed8,uVar9,piVar12);
      return 0;
    }
    uStack_f28 = uVar17;
    lStack_f20 = lVar30;
    piStack_ec0 = param_1;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
    func_0x000104711a50(uStack_f00,uStack_f28,lStack_f20,uStack_f18,uStack_ed8,uVar9,1);
    func_0x0001015543ac(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29,1);
  }
  else {
    if (lVar27 == 1) goto LAB_10474559c;
    uStack_f30 = uVar9;
    uStack_ef8 = uVar29;
    uStack_ef0 = uVar20;
    uStack_ee8 = uVar26;
    uStack_ee0 = uVar23;
    piStack_ec0 = param_1;
    uStack_1c0 = uStack_f10;
    uStack_1b8 = uStack_f08;
    uStack_1b0 = uVar20;
    uStack_1a8 = uVar26;
    uStack_1a0 = uVar23;
    uStack_198 = uVar29;
    lStack_190 = lStack_f20;
    uStack_188 = uStack_f00;
    uStack_180 = uVar17;
    lStack_178 = lVar30;
    uStack_170 = uStack_f18;
    uStack_168 = uVar22;
    uStack_160 = uVar9;
    lStack_158 = lVar27;
    func_0x000104711a50(uStack_f10,uStack_f08,uVar20,uVar26,uVar23,uVar29);
    uVar23 = uStack_f18;
    uVar20 = uStack_f30;
    func_0x000104711a50(uStack_f00,uVar17,lVar30,uStack_f18,uVar22,uStack_f30,lVar27);
    puVar16 = &uStack_1c0;
    FUN_104741990(puVar16,&uStack_188);
    uStack_f28 = CONCAT44(uStack_f28._4_4_,(int)puVar16);
    func_0x0001015543ac(uStack_f00,uVar17,lVar30,uVar23,uStack_ed8,uVar20,lVar27);
    func_0x0001015543ac(uStack_f10,uStack_f08,uStack_ef0,uStack_ee8,uStack_ee0,uStack_ef8,lStack_f20
                       );
    if ((uStack_f28 & 1) == 0) {
      return 0;
    }
  }
  lVar27 = 0;
  FUN_10474425c();
  iVar14 = *(int *)(lVar27 + 0x24);
  lVar30 = (long)*(int *)(lStack_ec8 + 0x30);
  FUN_104744294((long)piStack_ec0 + (long)iVar14,puVar31,0x112db3fe8,&UNK_10d95e580);
  FUN_104744294((long)piStack_eb8 + (long)iVar14,(long)puVar31 + lVar30,0x112db3fe8,&UNK_10d95e580);
  pcVar25 = *(code **)(lVar34 + 0x30);
  puVar16 = puVar31;
  (*pcVar25)(puVar31,1,lVar15);
  if ((int)puVar16 == 1) {
    lVar30 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar30,1,lVar15);
    if ((int)lVar30 != 1) goto LAB_104745840;
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
  }
  else {
    FUN_104744294(puVar31,uVar32,0x112db3fe8,&UNK_10d95e580);
    lVar34 = (long)puVar31 + lVar30;
    (*pcVar25)(lVar34,1,lVar15);
    lVar15 = lStack_ed0;
    if ((int)lVar34 == 1) {
      func_0x00010474660c(uVar32);
LAB_104745840:
      uVar20 = 0x11308e718;
      puVar21 = &UNK_10dd32a28;
      goto LAB_1047453e8;
    }
    func_0x0001047465c8((long)puVar31 + lVar30,lStack_ed0);
    uVar22 = uVar32;
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar32,lVar15);
    func_0x00010474660c(lVar15);
    func_0x00010474660c(uVar32);
    func_0x000104748d84(puVar31,0x112db3fe8,&UNK_10d95e580);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  piVar12 = piStack_ec0;
  puVar31 = (undefined8 *)((long)piStack_ec0 + (long)*(int *)(lVar27 + 0x28));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x28));
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_910 = *(undefined1 *)(puVar31 + 10);
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_ca0 = CONCAT71(uStack_ca0._1_7_,uStack_910);
  uStack_c48 = *(undefined1 *)(puVar16 + 10);
  uStack_c60 = puVar16[7];
  uStack_c68 = puVar16[6];
  uStack_8b8 = puVar16[9];
  uStack_8c0 = puVar16[8];
  uStack_c80 = puVar16[3];
  uStack_c88 = puVar16[2];
  uStack_c70 = puVar16[5];
  uStack_c78 = puVar16[4];
  uStack_c90 = puVar16[1];
  uStack_c98 = *puVar16;
  uStack_c50 = (undefined1)uStack_8b8;
  uStack_c4f = (undefined7)((ulong)uStack_8b8 >> 8);
  uStack_c58 = (undefined1)uStack_8c0;
  uStack_c57 = (undefined7)((ulong)uStack_8c0 >> 8);
  uStack_960 = uStack_cf0;
  uStack_958 = uStack_ce8;
  uStack_950 = uStack_ce0;
  uStack_948 = uStack_cd8;
  uStack_940 = uStack_cd0;
  uStack_938 = uStack_cc8;
  lStack_930 = lStack_cc0;
  uStack_928 = uStack_cb8;
  uStack_920 = uStack_cb0;
  uStack_918 = uStack_ca8;
  uStack_900 = uStack_c98;
  uStack_8f8 = uStack_c90;
  uStack_8f0 = uStack_c88;
  uStack_8e8 = uStack_c80;
  uStack_8e0 = uStack_c78;
  uStack_8d8 = uStack_c70;
  uStack_8d0 = uStack_c68;
  uStack_8c8 = uStack_c60;
  uStack_8b0 = uStack_c48;
  if (lStack_cc0 == 0) {
    if (uStack_c68 != 0) {
LAB_104745a20:
      uStack_5df = uStack_c4f;
      uStack_5e7 = uStack_c57;
      uStack_5e0 = uStack_c50;
      uStack_630 = uStack_ca0;
      uStack_680 = uStack_cf0;
      uStack_678 = uStack_ce8;
      uStack_670 = uStack_ce0;
      uStack_668 = uStack_cd8;
      uStack_660 = uStack_cd0;
      uStack_658 = uStack_cc8;
      lStack_650 = lStack_cc0;
      uStack_648 = uStack_cb8;
      uStack_640 = uStack_cb0;
      uStack_638 = uStack_ca8;
      uStack_628 = uStack_c98;
      uStack_620 = uStack_c90;
      uStack_618 = uStack_c88;
      uStack_610 = uStack_c80;
      uStack_608 = uStack_c78;
      uStack_600 = uStack_c70;
      uStack_5f8 = uStack_c68;
      uStack_5f0 = uStack_c60;
      uStack_5e8 = uStack_c58;
      uStack_5d8 = uStack_c48;
      FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
      uVar20 = 0x11308e728;
      puVar21 = &UNK_10dd32a38;
      goto LAB_1047453e4;
    }
    uStack_658 = puVar31[5];
    uStack_660 = puVar31[4];
    uStack_648 = puVar31[7];
    lStack_650 = puVar31[6];
    uStack_638 = puVar31[9];
    uStack_640 = puVar31[8];
    uStack_630 = CONCAT71(uStack_630._1_7_,*(undefined1 *)(puVar31 + 10));
    uStack_678 = puVar31[1];
    uStack_680 = *puVar31;
    uStack_668 = puVar31[3];
    uStack_670 = puVar31[2];
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
  }
  else {
    if (uStack_c68 == 0) goto LAB_104745a20;
    uStack_658 = puVar16[5];
    uStack_660 = puVar16[4];
    uStack_648 = puVar16[7];
    lStack_650 = puVar16[6];
    uStack_638 = puVar16[9];
    uStack_640 = puVar16[8];
    uStack_1d0 = *(undefined1 *)(puVar16 + 10);
    uStack_630 = CONCAT71(uStack_630._1_7_,uStack_1d0);
    uStack_678 = puVar16[1];
    uStack_680 = *puVar16;
    uStack_668 = puVar16[3];
    uStack_670 = puVar16[2];
    uStack_258 = puVar31[5];
    uStack_260 = puVar31[4];
    uStack_248 = puVar31[7];
    uStack_250 = puVar31[6];
    uStack_238 = puVar31[9];
    uStack_240 = puVar31[8];
    uStack_230 = *(undefined1 *)(puVar31 + 10);
    uStack_278 = puVar31[1];
    uStack_280 = *puVar31;
    uStack_268 = puVar31[3];
    uStack_270 = puVar31[2];
    uStack_220 = uStack_680;
    uStack_218 = uStack_678;
    uStack_210 = uStack_670;
    uStack_208 = uStack_668;
    uStack_200 = uStack_660;
    uStack_1f8 = uStack_658;
    lStack_1f0 = lStack_650;
    uStack_1e8 = uStack_648;
    uStack_1e0 = uStack_640;
    uStack_1d8 = uStack_638;
    FUN_104744294(&uStack_960,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    FUN_104744294(&uStack_900,auStack_7b8,0x112db3ff8,&UNK_10d95e598);
    puVar31 = &uStack_280;
    FUN_10474ab40(puVar31,&uStack_220);
    func_0x000104748d84(&uStack_680,0x112db3ff8,&UNK_10d95e598);
    func_0x000104748d84(&uStack_cf0,0x112db3ff8,&UNK_10d95e598);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  piVar7 = piStack_eb8;
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x2c));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x2c));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x30));
  puVar16 = (undefined8 *)((long)piVar7 + (long)*(int *)(lVar27 + 0x30));
  iVar14 = (int)&uStack_c20;
  uStack_c40 = puVar31[0x16];
  uStack_c48 = (undefined1)puVar31[0x15];
  uStack_c47 = (undefined7)((ulong)puVar31[0x15] >> 8);
  uStack_c50 = (undefined1)puVar31[0x14];
  uStack_c4f = (undefined7)((ulong)puVar31[0x14] >> 8);
  uStack_c38 = (undefined3)puVar31[0x17];
  uStack_c2d = (undefined5)*(undefined8 *)((long)puVar31 + 0xc3);
  uStack_c28 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xc3) >> 0x28);
  uStack_c35 = (undefined5)*(undefined8 *)((long)puVar31 + 0xbb);
  uStack_c30 = (undefined3)((ulong)*(undefined8 *)((long)puVar31 + 0xbb) >> 0x28);
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c60 = puVar31[0x12];
  uStack_c58 = (undefined1)puVar31[0x13];
  uStack_c57 = (undefined7)((ulong)puVar31[0x13] >> 8);
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_b5d = *(undefined8 *)((long)puVar16 + 0xc3);
  uStack_b60 = (undefined3)((ulong)*(undefined8 *)((long)puVar16 + 0xbb) >> 0x28);
  uStack_b78 = puVar16[0x15];
  uStack_b80 = puVar16[0x14];
  uStack_b70 = puVar16[0x16];
  uStack_b68 = (undefined3)puVar16[0x17];
  uStack_b65 = (undefined5)((ulong)puVar16[0x17] >> 0x18);
  uStack_bb8 = puVar16[0xd];
  uStack_bc0 = puVar16[0xc];
  uStack_ba8 = puVar16[0xf];
  uStack_bb0 = puVar16[0xe];
  uStack_b98 = puVar16[0x11];
  uStack_ba0 = puVar16[0x10];
  uStack_b88 = puVar16[0x13];
  uStack_b90 = puVar16[0x12];
  uStack_bf8 = puVar16[5];
  uStack_c00 = puVar16[4];
  uStack_be8 = puVar16[7];
  uStack_bf0 = puVar16[6];
  uStack_bd8 = puVar16[9];
  uStack_be0 = puVar16[8];
  uStack_bc8 = puVar16[0xb];
  uStack_bd0 = puVar16[10];
  uStack_c18 = puVar16[1];
  uStack_c20 = *puVar16;
  uStack_c08 = puVar16[3];
  uStack_c10 = puVar16[2];
  iVar13 = (int)&uStack_cf0;
  FUN_104746648();
  if (iVar13 == 1) {
    FUN_104746648();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    uStack_5d8 = uStack_c48;
    uStack_5d7 = uStack_c47;
    uStack_5e0 = uStack_c50;
    uStack_5df = uStack_c4f;
    uStack_5c8 = uStack_c38;
    uStack_5d0 = uStack_c40;
    uStack_5bd = uStack_c2d;
    uStack_5b8 = uStack_c28;
    uStack_5c5 = uStack_c35;
    uStack_5c0 = uStack_c30;
    uStack_618 = uStack_c88;
    uStack_620 = uStack_c90;
    uStack_608 = uStack_c78;
    uStack_610 = uStack_c80;
    uStack_5e8 = uStack_c58;
    uStack_5e7 = uStack_c57;
    uStack_5f0 = uStack_c60;
    uStack_5f8 = uStack_c68;
    uStack_600 = uStack_c70;
    uStack_658 = uStack_cc8;
    uStack_660 = uStack_cd0;
    uStack_648 = uStack_cb8;
    lStack_650 = lStack_cc0;
    uStack_628 = uStack_c98;
    uStack_630 = uStack_ca0;
    uStack_638 = uStack_ca8;
    uStack_640 = uStack_cb0;
    uStack_668 = uStack_cd8;
    uStack_670 = uStack_ce0;
    uStack_678 = uStack_ce8;
    uStack_680 = uStack_cf0;
    FUN_104746648();
    if (iVar14 == 1) {
      return 0;
    }
    uStack_2a8 = uStack_b78;
    uStack_2b0 = uStack_b80;
    uStack_298 = uStack_b68;
    uStack_2a0 = uStack_b70;
    uStack_28d = uStack_b5d;
    uStack_295 = uStack_b65;
    uStack_290 = uStack_b60;
    uStack_2e8 = uStack_bb8;
    uStack_2f0 = uStack_bc0;
    uStack_2d8 = uStack_ba8;
    uStack_2e0 = uStack_bb0;
    uStack_2b8 = uStack_b88;
    uStack_2c0 = uStack_b90;
    uStack_2c8 = uStack_b98;
    uStack_2d0 = uStack_ba0;
    uStack_328 = uStack_bf8;
    uStack_330 = uStack_c00;
    uStack_318 = uStack_be8;
    uStack_320 = uStack_bf0;
    uStack_2f8 = uStack_bc8;
    uStack_300 = uStack_bd0;
    uStack_308 = uStack_bd8;
    uStack_310 = uStack_be0;
    uStack_338 = uStack_c08;
    uStack_340 = uStack_c10;
    uStack_348 = uStack_c18;
    uStack_350 = uStack_c20;
    uStack_378 = CONCAT71(uStack_5d7,uStack_5d8);
    uStack_380 = CONCAT71(uStack_5df,uStack_5e0);
    uStack_368 = uStack_5c8;
    uStack_370 = uStack_5d0;
    uStack_35d = CONCAT35(uStack_5b8,uStack_5bd);
    uStack_365 = uStack_5c5;
    uStack_360 = uStack_5c0;
    uStack_3b8 = uStack_618;
    uStack_3c0 = uStack_620;
    uStack_3a8 = uStack_608;
    uStack_3b0 = uStack_610;
    uStack_388 = CONCAT71(uStack_5e7,uStack_5e8);
    uStack_390 = uStack_5f0;
    uStack_398 = uStack_5f8;
    uStack_3a0 = uStack_600;
    uStack_3f8 = uStack_658;
    uStack_400 = uStack_660;
    uStack_3e8 = uStack_648;
    lStack_3f0 = lStack_650;
    uStack_3c8 = uStack_628;
    uStack_3d0 = uStack_630;
    uStack_3d8 = uStack_638;
    uStack_3e0 = uStack_640;
    uStack_408 = uStack_668;
    uStack_410 = uStack_670;
    uStack_418 = uStack_678;
    uStack_420 = uStack_680;
    puVar31 = &uStack_420;
    FUN_104743a4c(puVar31,&uStack_350);
    if (((ulong)puVar31 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x34));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x34));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x38));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x38));
  uVar32 = *puVar1;
  uVar22 = puVar1[1];
  uVar20 = *puVar31;
  uVar17 = puVar31[1];
  if (uVar22 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_104745e54;
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    uVar18 = uVar32;
    func_0x000100e25fcc(uVar32,uVar22,uVar20,uVar17);
    func_0x0001000b44c0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_104745e54:
      func_0x000100de78a0(uVar32,uVar22);
      func_0x000100de78a0(uVar20,uVar17);
      func_0x0001000b44c0(uVar32,uVar22);
      func_0x0001000b44c0(uVar20,uVar17);
      return 0;
    }
    func_0x000100de78a0(uVar32,uVar22);
    func_0x000100de78a0(uVar20,uVar17);
    func_0x0001000b44c0(uVar32,uVar22);
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x3c)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x3c))) {
    return 0;
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 0x40));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x40));
  cVar24 = *(char *)(pdVar4 + 1);
  if (*(char *)(pdVar3 + 1) == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
  }
  if (*(char *)((long)piVar12 + (long)*(int *)(lVar27 + 0x44)) !=
      *(char *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x44))) {
    return 0;
  }
  bVar10 = *(byte *)((long)piVar12 + (long)*(int *)(lVar27 + 0x48));
  bVar11 = *(byte *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x48));
  if (bVar10 == 2) {
    if (bVar11 != 2) {
      return 0;
    }
  }
  else {
    if (bVar11 == 2) {
      return 0;
    }
    if (((bVar10 ^ bVar11) & 1) != 0) {
      return 0;
    }
  }
  puVar31 = (undefined8 *)((long)piVar12 + (long)*(int *)(lVar27 + 0x4c));
  puVar16 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x4c));
  uStack_c98 = puVar31[0xb];
  uStack_ca0 = puVar31[10];
  uStack_a18 = puVar31[0xd];
  uStack_a20 = puVar31[0xc];
  uStack_c88 = puVar31[0xd];
  uStack_c90 = puVar31[0xc];
  uStack_a08 = puVar31[0xf];
  uStack_a10 = puVar31[0xe];
  uStack_c78 = puVar31[0xf];
  uStack_c80 = puVar31[0xe];
  uStack_9f8 = puVar31[0x11];
  uStack_a00 = puVar31[0x10];
  uStack_cd8 = puVar31[3];
  uStack_ce0 = puVar31[2];
  uStack_a58 = puVar31[5];
  uStack_a60 = puVar31[4];
  uStack_cc8 = puVar31[5];
  uStack_cd0 = puVar31[4];
  uStack_a48 = puVar31[7];
  uStack_a50 = puVar31[6];
  uStack_cb8 = puVar31[7];
  lStack_cc0 = puVar31[6];
  uStack_a38 = puVar31[9];
  uStack_a40 = puVar31[8];
  uStack_ca8 = puVar31[9];
  uStack_cb0 = puVar31[8];
  uStack_a28 = puVar31[0xb];
  uStack_a30 = puVar31[10];
  uStack_a78 = puVar31[1];
  uStack_a80 = *puVar31;
  uStack_a68 = puVar31[3];
  uStack_a70 = puVar31[2];
  uStack_ce8 = puVar31[1];
  uStack_cf0 = *puVar31;
  uStack_c08 = puVar16[0xb];
  uStack_c10 = puVar16[10];
  uStack_988 = puVar16[0xd];
  uStack_990 = puVar16[0xc];
  uStack_bf8 = puVar16[0xd];
  uStack_c00 = puVar16[0xc];
  uStack_978 = puVar16[0xf];
  uStack_980 = puVar16[0xe];
  uStack_be8 = puVar16[0xf];
  uStack_bf0 = puVar16[0xe];
  uStack_968 = puVar16[0x11];
  uStack_970 = puVar16[0x10];
  uStack_9c8 = puVar16[5];
  uStack_9d0 = puVar16[4];
  uStack_c40 = puVar16[4];
  uStack_9b8 = puVar16[7];
  uStack_9c0 = puVar16[6];
  uStack_9a8 = puVar16[9];
  uStack_9b0 = puVar16[8];
  uStack_c18 = puVar16[9];
  uStack_c20 = puVar16[8];
  uStack_998 = puVar16[0xb];
  uStack_9a0 = puVar16[10];
  uStack_9e8 = puVar16[1];
  uStack_9f0 = *puVar16;
  uStack_9d8 = puVar16[3];
  uStack_9e0 = puVar16[2];
  uStack_c60 = *puVar16;
  uStack_bd8 = puVar16[0x11];
  uStack_be0 = puVar16[0x10];
  uStack_c48 = (undefined1)puVar16[3];
  uStack_c47 = (undefined7)((ulong)puVar16[3] >> 8);
  uStack_c50 = (undefined1)puVar16[2];
  uStack_c4f = (undefined7)((ulong)puVar16[2] >> 8);
  uStack_c38 = (undefined3)puVar16[5];
  uStack_c35 = (undefined5)((ulong)puVar16[5] >> 0x18);
  uStack_c28 = (undefined3)puVar16[7];
  uStack_c25 = (undefined5)((ulong)puVar16[7] >> 0x18);
  uStack_c30 = (undefined3)puVar16[6];
  uStack_c2d = (undefined5)((ulong)puVar16[6] >> 0x18);
  uStack_c68 = puVar31[0x11];
  uStack_c70 = puVar31[0x10];
  uStack_c58 = (undefined1)puVar16[1];
  uStack_c57 = (undefined7)((ulong)puVar16[1] >> 8);
  iVar14 = (int)&uStack_cf0;
  func_0x000104746678();
  uVar32 = uStack_c68;
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    if (iVar14 != 1) goto LAB_104746124;
    FUN_104744294(&uStack_a80,&uStack_680,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,&uStack_680,0x112db3ff0,&UNK_10d95e590);
  }
  else {
    uStack_e30 = uStack_c70;
    uStack_e48 = uStack_c88;
    uStack_e50 = uStack_c90;
    uStack_e38 = uStack_c78;
    uStack_e40 = uStack_c80;
    uStack_e88 = uStack_cc8;
    uStack_e90 = uStack_cd0;
    uStack_e78 = uStack_cb8;
    lStack_e80 = lStack_cc0;
    uStack_e68 = uStack_ca8;
    uStack_e70 = uStack_cb0;
    uStack_e58 = uStack_c98;
    uStack_e60 = uStack_ca0;
    uStack_ea8 = uStack_ce8;
    uStack_eb0 = uStack_cf0;
    uStack_e98 = uStack_cd8;
    uStack_ea0 = uStack_ce0;
    iVar14 = (int)&uStack_c60;
    func_0x000104746678();
    uVar22 = uStack_bd8;
    if (iVar14 == 1) {
LAB_104746124:
      _memcpy(&uStack_680,&uStack_cf0,0x120);
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      uVar20 = 0x11308e730;
      puVar21 = &UNK_10dd32a40;
      goto LAB_1047453e4;
    }
    uStack_5f8 = uStack_bd8;
    uStack_600 = uStack_be0;
    uStack_618 = uStack_bf8;
    uStack_620 = uStack_c00;
    uStack_608 = uStack_be8;
    uStack_610 = uStack_bf0;
    uStack_498 = CONCAT71(uStack_c47,uStack_c48);
    uStack_4a0 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_658 = CONCAT53(uStack_c35,uStack_c38);
    uStack_488 = CONCAT53(uStack_c35,uStack_c38);
    uStack_648 = CONCAT53(uStack_c25,uStack_c28);
    lStack_650 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_660 = uStack_c40;
    uStack_478 = CONCAT53(uStack_c25,uStack_c28);
    uStack_480 = CONCAT53(uStack_c2d,uStack_c30);
    uStack_628 = uStack_c08;
    uStack_630 = uStack_c10;
    uStack_638 = uStack_c18;
    uStack_640 = uStack_c20;
    uStack_678 = CONCAT71(uStack_c57,uStack_c58);
    uStack_668 = CONCAT71(uStack_c47,uStack_c48);
    uStack_670 = CONCAT71(uStack_c4f,uStack_c50);
    uStack_4a8 = CONCAT71(uStack_c57,uStack_c58);
    uStack_680 = uStack_c60;
    uStack_4d8 = uStack_e48;
    uStack_4e0 = uStack_e50;
    uStack_4c8 = uStack_e38;
    uStack_4d0 = uStack_e40;
    uStack_518 = uStack_e88;
    uStack_520 = uStack_e90;
    uStack_508 = uStack_e78;
    lStack_510 = lStack_e80;
    uStack_4e8 = uStack_e58;
    uStack_4f0 = uStack_e60;
    uStack_4f8 = uStack_e68;
    uStack_500 = uStack_e70;
    uStack_528 = uStack_e98;
    uStack_530 = uStack_ea0;
    uStack_538 = uStack_ea8;
    uStack_540 = uStack_eb0;
    uStack_448 = uStack_bf8;
    uStack_450 = uStack_c00;
    uStack_438 = uStack_be8;
    uStack_440 = uStack_bf0;
    uStack_490 = uStack_c40;
    uStack_458 = uStack_c08;
    uStack_460 = uStack_c10;
    uStack_468 = uStack_c18;
    uStack_470 = uStack_c20;
    uStack_4c0 = (undefined2)uStack_e30;
    uStack_430 = (undefined2)uStack_be0;
    uStack_4b0 = uStack_c60;
    puVar31 = &uStack_540;
    FUN_10470e040(puVar31,&uStack_4b0);
    if (((ulong)puVar31 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
      func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
    FUN_10470cfc0(uVar32,uVar22);
    FUN_104744294(&uStack_a80,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    FUN_104744294(&uStack_9f0,auStack_7b8,0x112db3ff0,&UNK_10d95e590);
    func_0x000104748d84(&uStack_680,0x112db3ff0,&UNK_10d95e590);
    if ((uVar32 & 1) == 0) {
      uVar20 = 0x112db3ff0;
      puVar21 = &UNK_10d95e590;
      puVar31 = &uStack_cf0;
      goto LAB_1047453e8;
    }
  }
  func_0x000104748d84(&uStack_cf0,0x112db3ff0,&UNK_10d95e590);
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x50));
  puVar31 = (undefined8 *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x50));
  if ((char)puVar1[3] == '\x01') {
    if (*(char *)(puVar31 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(puVar31 + 3) == '\x01') {
      return 0;
    }
    uVar32 = *puVar1;
    func_0x0001046c1c10(uVar32,puVar1[1],puVar1[2],*puVar31,puVar31[1],puVar31[2]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x54));
  uVar32 = puVar1[1];
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x54));
  uVar22 = puVar2[1];
  if (uVar32 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar17 = *puVar1;
    if (((uVar17 != *puVar2) || (uVar32 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x58));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x58));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*plVar5 != *plVar6) {
      return 0;
    }
  }
  piVar7 = (int *)((long)piVar12 + (long)*(int *)(lVar27 + 0x5c));
  piVar8 = (int *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x5c));
  cVar24 = (char)piVar8[1];
  if ((char)piVar7[1] == '\x01') {
    if (cVar24 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*piVar7 != *piVar8) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)piVar12 + (long)*(int *)(lVar27 + 0x60));
  puVar2 = (ulong *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x60));
  uVar32 = *puVar2 & 0xff;
  if ((*puVar1 & 0xff) == 2) {
    if (uVar32 != 2) {
      return 0;
    }
  }
  else {
    if (uVar32 == 2) {
      return 0;
    }
    uVar32 = *puVar1 & 0xffffffff00000001;
    func_0x000104741654(puVar1[1],puVar1[2],puVar2[1],puVar2[2],uVar32,(ulong)(uint5)puVar1[3],
                        *puVar2 & 0xffffffff00000001,(ulong)(uint5)puVar2[3]);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
  }
  pdVar3 = (double *)((long)piVar12 + (long)*(int *)(lVar27 + 100));
  pdVar4 = (double *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 100));
  cVar24 = *(char *)((long)pdVar4 + 0x11);
  if (*(char *)((long)pdVar3 + 0x11) != '\x01') {
    if (cVar24 == '\x01') {
      return 0;
    }
    if (*pdVar3 != *pdVar4) {
      return 0;
    }
    cVar24 = *(char *)(pdVar4 + 2);
    if (*(char *)(pdVar3 + 2) != '\x01') {
      if (cVar24 == '\x01') {
        return 0;
      }
      if (pdVar3[1] != pdVar4[1]) {
        return 0;
      }
      goto LAB_104746498;
    }
  }
  if (cVar24 != '\x01') {
    return 0;
  }
LAB_104746498:
  iVar14 = *(int *)(lVar27 + 0x68);
  _memcpy(&uStack_cf0,(long)piVar12 + (long)iVar14,0x133);
  _memcpy(&uStack_bb8,(long)piStack_eb8 + (long)iVar14,0x133);
  iVar14 = (int)&uStack_cf0;
  func_0x000103bffd74();
  if (iVar14 == 1) {
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 != 1) {
      return 0;
    }
  }
  else {
    _memcpy(auStack_e28,&uStack_cf0,0x133);
    iVar14 = (int)&uStack_bb8;
    func_0x000103bffd74();
    if (iVar14 == 1) {
      return 0;
    }
    _memcpy(&uStack_680,&uStack_bb8,0x133);
    _memcpy(auStack_7b8,auStack_e28,0x133);
    puVar19 = auStack_7b8;
    FUN_10474a038(puVar19,&uStack_680);
    if (((ulong)puVar19 & 1) == 0) {
      return 0;
    }
  }
  plVar5 = (long *)((long)piVar12 + (long)*(int *)(lVar27 + 0x6c));
  plVar6 = (long *)((long)piStack_eb8 + (long)*(int *)(lVar27 + 0x6c));
  cVar24 = (char)plVar6[1];
  if ((char)plVar5[1] == '\x01') {
    if (cVar24 == '\x01') {
      return 1;
    }
    return 0;
  }
  if (cVar24 != '\x01') {
    if (*plVar5 == *plVar6) {
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 1047465c8; end: 104746647;  */

undefined8 FUN_1047465c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1047425ec();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104746648; end: 10474668f;  */

int FUN_104746648(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0xc9)) {
    uVar1 = (*(byte *)(param_1 + 0xc9) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104746690; end: 1047466bb;  */

void FUN_104746690(void)

{
  FUN_1047466bc(0x11308e620,FUN_10474425c,&UNK_10dd32870);
  return;
}



/* Entry: 1047466bc; end: 1047466fb;  */

void FUN_1047466bc(long *param_1,code *param_2,long param_3)

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


