/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10470e438; end: 10470e477;  */

void FUN_10470e438(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10470e308(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470e478; end: 10470e487;  */

undefined8 FUN_10470e478(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  lVar9 = *(long *)(lVar5 + 0x10);
  if (lVar9 == *(long *)(lVar6 + 0x10)) {
    if ((lVar9 != 0) && (lVar5 != lVar6)) {
      plVar10 = (long *)(lVar5 + 0x38);
      plVar11 = (long *)(lVar6 + 0x38);
      do {
        lVar5 = plVar10[-2];
        uVar3 = plVar10[-1];
        lVar7 = *plVar10;
        lVar6 = plVar11[-2];
        uVar1 = plVar11[-1];
        lVar8 = *plVar11;
        if (lVar5 == 0) {
          if (lVar6 != 0) goto LAB_10470c200;
        }
        else {
          if (lVar6 == 0) goto LAB_10470c200;
          uVar2 = plVar10[-3];
          if ((uVar2 != plVar11[-3] || lVar5 != lVar6) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar2,lVar5,plVar11[-3],lVar6,0), (uVar2 & 1) == 0)) goto LAB_10470c200;
          _swift_bridgeObjectRetain(lVar6);
          _swift_bridgeObjectRetain(lVar5);
        }
        if (lVar7 == 0) {
          _swift_bridgeObjectRetain_n(lVar8,2);
          _swift_bridgeObjectRelease(lVar5);
          if (lVar8 != 0) {
            _swift_bridgeObjectRelease(lVar8);
            lVar5 = lVar8;
            goto LAB_10470c1f0;
          }
LAB_10470c0f4:
          _swift_bridgeObjectRelease(lVar6);
        }
        else {
          if (lVar8 == 0) {
LAB_10470c1f0:
            _swift_bridgeObjectRelease(lVar5);
            _swift_bridgeObjectRelease(lVar6);
            goto LAB_10470c200;
          }
          if ((uVar3 == uVar1) && (lVar7 == lVar8)) {
            _swift_bridgeObjectRetain(lVar7);
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRelease(lVar6);
            lVar6 = lVar5;
            goto LAB_10470c0f4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,lVar7,uVar1,lVar8,0);
          _swift_bridgeObjectRetain(lVar7);
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(lVar5);
          if ((uVar3 & 1) == 0) goto LAB_10470c200;
        }
        plVar10 = plVar10 + 4;
        plVar11 = plVar11 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar4 = 1;
  }
  else {
LAB_10470c200:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10470e488; end: 10470e4c7;  */

void FUN_10470e488(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3043c;
  _swift_getWitnessTable(&UNK_10dd3043c,&UNK_11079c9b8);
  puRam000000011308dd90 = puVar1;
  return;
}



/* Entry: 10470e4c8; end: 10470e4d7;  */

undefined1  [16] FUN_10470e4c8(void)

{
  return ZEXT816(0x11079c9b8);
}



/* Entry: 10470e4d8; end: 10470e587;  */

void FUN_10470e4d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  }
  if (param_4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_3,param_4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470e588; end: 10470e593;  */

void FUN_10470e588(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,lVar3);
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470e594; end: 10470e6db;  */

void FUN_10470e594(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar1);
  }
  if (lVar3 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10470e6dc; end: 10470e6f7;  */

undefined8 FUN_10470e6dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10470e6f8; end: 10470e7af;  */

undefined8
FUN_10470e6f8(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10470e7b0; end: 10470e7b3;  */

void FUN_10470e7b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd304c0;
  _swift_getWitnessTable(&UNK_10dd304c0,&UNK_11079ca70);
  puRam000000011308dd98 = puVar1;
  return;
}



/* Entry: 10470e7b4; end: 10470e7f3;  */

void FUN_10470e7b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd304c0;
  _swift_getWitnessTable(&UNK_10dd304c0,&UNK_11079ca70);
  puRam000000011308dd98 = puVar1;
  return;
}



/* Entry: 10470e7f4; end: 10470e883;  */

long FUN_10470e7f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10470e884; end: 10470e8ef;  */

undefined8 * FUN_10470e884(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 10470e8f0; end: 10470e933;  */

undefined8 * FUN_10470e8f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10470e934; end: 10470e9f3;  */

int FUN_10470e934(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
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



/* Entry: 10470e9f4; end: 10470ea3b;  */

void FUN_10470e9f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470ea3c; end: 10470ea43;  */

void FUN_10470ea3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10470ea44; end: 10470ea87;  */

void FUN_10470ea44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470ea88; end: 10470ea8b;  */

void FUN_10470ea88(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30550;
  _swift_getWitnessTable(&UNK_10dd30550,&UNK_11079cb28);
  puRam000000011308dda0 = puVar1;
  return;
}



/* Entry: 10470ea8c; end: 10470eacb;  */

void FUN_10470ea8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30550;
  _swift_getWitnessTable(&UNK_10dd30550,&UNK_11079cb28);
  puRam000000011308dda0 = puVar1;
  return;
}



/* Entry: 10470eacc; end: 10470eb03;  */

long FUN_10470eacc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 10470eb04; end: 10470eb73;  */

undefined8 * FUN_10470eb04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10470eb74; end: 10470ec0f;  */

int FUN_10470eb74(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10470ec10; end: 10470ec8b;  */

void FUN_10470ec10(void)

{
  double dVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  dVar4 = *unaff_x20;
  dVar1 = unaff_x20[1];
  dVar2 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(dVar1);
  __ss6HasherV8_combineyySuF(dVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470ec8c; end: 10470ecdf;  */

void FUN_10470ec8c(void)

{
  double dVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  
  dVar1 = unaff_x20[1];
  dVar2 = unaff_x20[2];
  dVar3 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar3 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(dVar1);
  __ss6HasherV8_combineyySuF(dVar2);
  return;
}



/* Entry: 10470ece0; end: 10470ed57;  */

void FUN_10470ece0(void)

{
  double dVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  dVar4 = *unaff_x20;
  dVar1 = unaff_x20[1];
  dVar2 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(dVar1);
  __ss6HasherV8_combineyySuF(dVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470ed58; end: 10470ed5b;  */

void FUN_10470ed58(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd305e0;
  _swift_getWitnessTable(&UNK_10dd305e0,&UNK_11079cbe0);
  puRam000000011308dda8 = puVar1;
  return;
}



/* Entry: 10470ed5c; end: 10470ed9b;  */

void FUN_10470ed5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308dda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd305e0;
  _swift_getWitnessTable(&UNK_10dd305e0,&UNK_11079cbe0);
  puRam000000011308dda8 = puVar1;
  return;
}



/* Entry: 10470ed9c; end: 10470ee2f;  */

bool FUN_10470ed9c(double *param_1,double *param_2)

{
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Entry: 10470ee30; end: 10470ee67;  */

void FUN_10470ee30(undefined8 param_1)

{
  if (lRam000000011308de10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e819e44);
  return;
}



/* Entry: 10470ee68; end: 10470ee6b;  */

uint FUN_10470ee68(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar13 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = (long)puVar13 - extraout_x8_00;
  lVar15 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar14 - extraout_x8_01;
  uVar8 = *param_1;
  if (((uVar8 == *param_2) && (param_1[1] == param_2[1])) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar8 & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') goto LAB_10470f2a8;
    }
    else {
      uVar6 = 0;
      if (((char)param_2[3] == '\x01') || ((double)param_1[2] != (double)param_2[2]))
      goto LAB_10470f2ac;
    }
    lVar9 = 0;
    FUN_10470ee30();
    iVar5 = *(int *)(lVar9 + 0x18);
    lVar15 = (long)*(int *)(lVar15 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar5,lVar12);
    func_0x0001009f0578((long)param_2 + (long)iVar5,lVar12 + lVar15);
    pcVar17 = *(code **)(lVar16 + 0x30);
    lVar10 = lVar12;
    (*pcVar17)(lVar12,1,lVar7);
    if ((int)lVar10 == 1) {
      lVar15 = lVar12 + lVar15;
      (*pcVar17)(lVar15,1,lVar7);
      if ((int)lVar15 == 1) {
        func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
LAB_10470f350:
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
        uVar8 = *puVar1;
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
        if (((uVar8 == *puVar2) && (puVar1[1] == puVar2[1])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar8 & 1) != 0)) {
          plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
          lVar15 = *plVar3;
          plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
          if ((lVar15 == *plVar4) && (plVar3[1] == plVar4[1])) {
            uVar6 = 1;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            uVar6 = (uint)lVar15;
          }
          goto LAB_10470f2ac;
        }
      }
      else {
LAB_10470f290:
        func_0x00010470fb38(lVar12,0x112d373d0,&UNK_10d90f8f0);
      }
    }
    else {
      func_0x0001009f0578(lVar12,uVar14);
      lVar10 = lVar12 + lVar15;
      (*pcVar17)(lVar10,1,lVar7);
      if ((int)lVar10 == 1) {
        (**(code **)(lVar16 + 8))(uVar14,lVar7);
        goto LAB_10470f290;
      }
      (**(code **)(lVar16 + 0x20))(puVar13,lVar12 + lVar15,lVar7);
      uVar11 = 0x112d373e0;
      func_0x00010470fb78(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                          PTR___s10Foundation4DateVSQAAMc_110350be0);
      uVar8 = uVar14;
      __sSQ2eeoiySbx_xtFZTj(uVar14,puVar13,lVar7,uVar11);
      pcVar17 = *(code **)(lVar16 + 8);
      (*pcVar17)(puVar13,lVar7);
      (*pcVar17)(uVar14,lVar7);
      func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
      if ((uVar8 & 1) != 0) goto LAB_10470f350;
    }
  }
LAB_10470f2a8:
  uVar6 = 0;
LAB_10470f2ac:
  return uVar6 & 1;
}



/* Entry: 10470ee6c; end: 10470f02f;  */

void FUN_10470ee6c(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar7 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  lVar4 = 0;
  FUN_10470ee30();
  func_0x0001009f0578((long)unaff_x20 + (long)*(int *)(lVar4 + 0x18),lVar9);
  lVar5 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar3);
  if ((int)lVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar10 + 0x20))(puVar7,lVar9,lVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0x11308dca8;
    func_0x00010470fb78(0x11308dca8,PTR___s10Foundation4DateVMa_110350bb8,
                        PTR___s10Foundation4DateVSHAAMc_110350bd0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3,uVar6);
    (**(code **)(lVar10 + 8))(puVar7,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  return;
}



/* Entry: 10470f030; end: 10470f06b;  */

void FUN_10470f030(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10470ee6c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470f06c; end: 10470f06f;  */

void FUN_10470f06c(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar7 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  lVar4 = 0;
  FUN_10470ee30();
  func_0x0001009f0578((long)unaff_x20 + (long)*(int *)(lVar4 + 0x18),lVar9);
  lVar5 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar3);
  if ((int)lVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar10 + 0x20))(puVar7,lVar9,lVar3);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar6 = 0x11308dca8;
    func_0x00010470fb78(0x11308dca8,PTR___s10Foundation4DateVMa_110350bb8,
                        PTR___s10Foundation4DateVSHAAMc_110350bd0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar3,uVar6);
    (**(code **)(lVar10 + 8))(puVar7,lVar3);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
  __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
  return;
}



/* Entry: 10470f070; end: 10470f0a7;  */

void FUN_10470f070(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10470ee6c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10470f0a8; end: 10470f0ab;  */

uint FUN_10470f0a8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar13 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = (long)puVar13 - extraout_x8_00;
  lVar15 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar14 - extraout_x8_01;
  uVar8 = *param_1;
  if (((uVar8 == *param_2) && (param_1[1] == param_2[1])) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar8 & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') goto LAB_10470f2a8;
    }
    else {
      uVar6 = 0;
      if (((char)param_2[3] == '\x01') || ((double)param_1[2] != (double)param_2[2]))
      goto LAB_10470f2ac;
    }
    lVar9 = 0;
    FUN_10470ee30();
    iVar5 = *(int *)(lVar9 + 0x18);
    lVar15 = (long)*(int *)(lVar15 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar5,lVar12);
    func_0x0001009f0578((long)param_2 + (long)iVar5,lVar12 + lVar15);
    pcVar17 = *(code **)(lVar16 + 0x30);
    lVar10 = lVar12;
    (*pcVar17)(lVar12,1,lVar7);
    if ((int)lVar10 == 1) {
      lVar15 = lVar12 + lVar15;
      (*pcVar17)(lVar15,1,lVar7);
      if ((int)lVar15 == 1) {
        func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
LAB_10470f350:
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
        uVar8 = *puVar1;
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
        if (((uVar8 == *puVar2) && (puVar1[1] == puVar2[1])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar8 & 1) != 0)) {
          plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
          lVar15 = *plVar3;
          plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
          if ((lVar15 == *plVar4) && (plVar3[1] == plVar4[1])) {
            uVar6 = 1;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            uVar6 = (uint)lVar15;
          }
          goto LAB_10470f2ac;
        }
      }
      else {
LAB_10470f290:
        func_0x00010470fb38(lVar12,0x112d373d0,&UNK_10d90f8f0);
      }
    }
    else {
      func_0x0001009f0578(lVar12,uVar14);
      lVar10 = lVar12 + lVar15;
      (*pcVar17)(lVar10,1,lVar7);
      if ((int)lVar10 == 1) {
        (**(code **)(lVar16 + 8))(uVar14,lVar7);
        goto LAB_10470f290;
      }
      (**(code **)(lVar16 + 0x20))(puVar13,lVar12 + lVar15,lVar7);
      uVar11 = 0x112d373e0;
      func_0x00010470fb78(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                          PTR___s10Foundation4DateVSQAAMc_110350be0);
      uVar8 = uVar14;
      __sSQ2eeoiySbx_xtFZTj(uVar14,puVar13,lVar7,uVar11);
      pcVar17 = *(code **)(lVar16 + 8);
      (*pcVar17)(puVar13,lVar7);
      (*pcVar17)(uVar14,lVar7);
      func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
      if ((uVar8 & 1) != 0) goto LAB_10470f350;
    }
  }
LAB_10470f2a8:
  uVar6 = 0;
LAB_10470f2ac:
  return uVar6 & 1;
}



/* Entry: 10470f0ac; end: 10470f3b7;  */

uint FUN_10470f0ac(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar13 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = (long)puVar13 - extraout_x8_00;
  lVar15 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar14 - extraout_x8_01;
  uVar8 = *param_1;
  if (((uVar8 == *param_2) && (param_1[1] == param_2[1])) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar8 & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') goto LAB_10470f2a8;
    }
    else {
      uVar6 = 0;
      if (((char)param_2[3] == '\x01') || ((double)param_1[2] != (double)param_2[2]))
      goto LAB_10470f2ac;
    }
    lVar9 = 0;
    FUN_10470ee30();
    iVar5 = *(int *)(lVar9 + 0x18);
    lVar15 = (long)*(int *)(lVar15 + 0x30);
    func_0x0001009f0578((long)param_1 + (long)iVar5,lVar12);
    func_0x0001009f0578((long)param_2 + (long)iVar5,lVar12 + lVar15);
    pcVar17 = *(code **)(lVar16 + 0x30);
    lVar10 = lVar12;
    (*pcVar17)(lVar12,1,lVar7);
    if ((int)lVar10 == 1) {
      lVar15 = lVar12 + lVar15;
      (*pcVar17)(lVar15,1,lVar7);
      if ((int)lVar15 == 1) {
        func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
LAB_10470f350:
        puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
        uVar8 = *puVar1;
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
        if (((uVar8 == *puVar2) && (puVar1[1] == puVar2[1])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar8 & 1) != 0)) {
          plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
          lVar15 = *plVar3;
          plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
          if ((lVar15 == *plVar4) && (plVar3[1] == plVar4[1])) {
            uVar6 = 1;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            uVar6 = (uint)lVar15;
          }
          goto LAB_10470f2ac;
        }
      }
      else {
LAB_10470f290:
        func_0x00010470fb38(lVar12,0x112d373d0,&UNK_10d90f8f0);
      }
    }
    else {
      func_0x0001009f0578(lVar12,uVar14);
      lVar10 = lVar12 + lVar15;
      (*pcVar17)(lVar10,1,lVar7);
      if ((int)lVar10 == 1) {
        (**(code **)(lVar16 + 8))(uVar14,lVar7);
        goto LAB_10470f290;
      }
      (**(code **)(lVar16 + 0x20))(puVar13,lVar12 + lVar15,lVar7);
      uVar11 = 0x112d373e0;
      func_0x00010470fb78(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                          PTR___s10Foundation4DateVSQAAMc_110350be0);
      uVar8 = uVar14;
      __sSQ2eeoiySbx_xtFZTj(uVar14,puVar13,lVar7,uVar11);
      pcVar17 = *(code **)(lVar16 + 8);
      (*pcVar17)(puVar13,lVar7);
      (*pcVar17)(uVar14,lVar7);
      func_0x00010470fb38(lVar12,0x112d373d8,&UNK_10d9014c0);
      if ((uVar8 & 1) != 0) goto LAB_10470f350;
    }
  }
LAB_10470f2a8:
  uVar6 = 0;
LAB_10470f2ac:
  return uVar6 & 1;
}



/* Entry: 10470f3b8; end: 10470f3e3;  */

void FUN_10470f3b8(void)

{
  func_0x00010470fb78(0x11308ddb0,FUN_10470ee30,&UNK_10dd30678);
  return;
}



/* Entry: 10470f3e4; end: 10470f523;  */

long * FUN_10470f3e4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar9 = (long)*(int *)(param_3 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    lVar7 = (long)param_2 + lVar9;
    (*pcVar11)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10470f524; end: 10470f5b3;  */

void FUN_10470f524(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  return;
}



/* Entry: 10470f5b4; end: 10470f857;  */

undefined8 * FUN_10470f5b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10470f858; end: 10470f93f;  */

undefined8 * FUN_10470f858(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 10470f940; end: 10470fa9f;  */

undefined8 * FUN_10470f940(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar8 = (long)*(int *)(param_3 + 0x18);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_10470fa34;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_10470fa34;
  }
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
  ;
LAB_10470fa34:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = param_2[1];
  uVar4 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 10470faa0; end: 10470fab7;  */

void FUN_10470faa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10470fab8; end: 10470fbb7;  */

void FUN_10470fab8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dd306b8;
  puStack_40 = &UNK_10dd306d0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd306b8;
    puStack_28 = &UNK_10dd306b8;
    _swift_initStructMetadata(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 10470fbb8; end: 10470fbcb;  */

void FUN_10470fbb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10470fbcc; end: 10470fc03;  */

void FUN_10470fbcc(undefined8 param_1)

{
  if (lRam000000011308deb8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e819e6c);
  return;
}



/* Entry: 10470fc04; end: 10470fc4b;  */

undefined8 FUN_10470fc04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10470fc4c; end: 10470fc4f;  */

undefined8 FUN_10470fc4c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar9 = 0;
  FUN_104742f28();
  lVar21 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar15 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = (long)puVar15 - extraout_x8_00;
  lVar19 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = uVar20 - extraout_x8_01;
  uVar13 = *param_1;
  if (((uVar13 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return 0;
  }
  uVar13 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar13 != 0) {
      return 0;
    }
  }
  else {
    if (uVar13 == 0) {
      return 0;
    }
    uVar10 = param_1[2];
    if (((uVar10 != param_2[2]) || (param_1[3] != uVar13)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  uVar13 = param_1[4];
  uVar3 = param_1[5];
  uVar10 = param_1[6];
  uVar4 = param_1[7];
  uVar12 = param_1[8];
  uVar5 = param_1[9];
  uVar14 = param_1[10];
  uStack_130 = param_2[4];
  uStack_138 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[7];
  uVar2 = param_2[8];
  uVar7 = param_2[9];
  uVar18 = param_2[10];
  puStack_128 = puVar15;
  uStack_120 = uVar20;
  lStack_118 = lVar9;
  lStack_110 = lVar17;
  lStack_108 = lVar19;
  uStack_100 = lVar21;
  if (uVar14 == 1) {
    if (uVar18 != 1) {
LAB_1047103c4:
      uStack_100 = uVar18;
      uStack_f8 = uVar6;
      uStack_f0 = uVar5;
      uStack_e8 = uVar10;
      uStack_e0 = uVar12;
      func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
      uVar20 = uStack_100;
      func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uStack_100);
      func_0x0001015543ac(uVar13,uVar3,uStack_e8,uVar4,uStack_e0,uStack_f0,uVar14);
      func_0x0001015543ac(uStack_130,uStack_138,uVar1,uStack_f8,uVar2,uVar7,uVar20);
      return 0;
    }
    uStack_158 = uVar1;
    uStack_f8 = uVar6;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
    func_0x000104711a50(uStack_130,uStack_138,uStack_158,uStack_f8,uVar2,uVar7,1);
    func_0x0001015543ac(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
  }
  else {
    if (uVar18 == 1) goto LAB_1047103c4;
    uStack_150 = uVar13;
    uStack_148 = uVar3;
    uStack_140 = uVar4;
    uStack_f0 = uVar5;
    uStack_e8 = uVar10;
    uStack_e0 = uVar12;
    uStack_d8 = uVar13;
    uStack_d0 = uVar3;
    uStack_c8 = uVar10;
    uStack_c0 = uVar4;
    uStack_b8 = uVar12;
    uStack_b0 = uVar5;
    uStack_a8 = uVar14;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_138;
    uStack_90 = uVar1;
    uStack_88 = uVar6;
    uStack_80 = uVar2;
    uStack_78 = uVar7;
    uStack_70 = uVar18;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
    uVar20 = uStack_130;
    uVar13 = uStack_138;
    func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uVar18);
    puVar11 = &uStack_d8;
    FUN_104741990(puVar11,&uStack_a0);
    uStack_158 = CONCAT44(uStack_158._4_4_,(int)puVar11);
    func_0x0001015543ac(uVar20,uVar13,uVar1,uVar6,uVar2,uVar7,uVar18);
    func_0x0001015543ac(uStack_150,uStack_148,uStack_e8,uStack_140,uStack_e0,uStack_f0,uVar14);
    if ((uStack_158 & 1) == 0) {
      return 0;
    }
  }
  uVar13 = uStack_100;
  lVar19 = lStack_108;
  if ((char)param_1[0xe] == '\x01') {
    if ((char)param_2[0xe] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xe] == '\x01') {
      return 0;
    }
    if ((double)param_1[0xb] != (double)param_2[0xb]) {
      return 0;
    }
    if (param_1[0xc] != param_2[0xc]) {
      return 0;
    }
    if (param_1[0xd] != param_2[0xd]) {
      return 0;
    }
  }
  uVar20 = param_2[0x10];
  if (param_1[0x10] == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    uVar10 = param_1[0xf];
    if (((uVar10 != param_2[0xf]) || (param_1[0x10] != uVar20)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[0x11] != (char)param_2[0x11]) {
    return 0;
  }
  if (param_1[0x14] == 1) {
    if (param_2[0x14] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x14] == 1) {
      return 0;
    }
    uVar20 = param_1[0x12] & 0xffffffffff;
    FUN_104711cb8(uVar20,param_1[0x13],param_1[0x14],param_2[0x12] & 0xffffffffff,param_2[0x13]);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x15];
  uVar20 = param_2[0x15];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470c484();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x16];
  uVar20 = param_2[0x16];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x17];
  uVar20 = param_2[0x17];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lVar9 = 0;
  FUN_10470fbcc();
  lVar17 = lStack_110;
  iVar8 = *(int *)(lVar9 + 0x38);
  lVar19 = (long)*(int *)(lVar19 + 0x30);
  FUN_10470fc04((long)param_1 + (long)iVar8,lStack_110,0x112dcbf00,&UNK_10dd317c0);
  FUN_10470fc04((long)param_2 + (long)iVar8,lVar17 + lVar19,0x112dcbf00,&UNK_10dd317c0);
  lVar9 = lStack_118;
  pcVar16 = *(code **)(uVar13 + 0x30);
  lVar21 = lVar17;
  (*pcVar16)(lVar17,1,lStack_118);
  uVar13 = uStack_120;
  if ((int)lVar21 == 1) {
    lVar19 = lVar17 + lVar19;
    (*pcVar16)(lVar19,1,lVar9);
    if ((int)lVar19 == 1) {
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      return 1;
    }
  }
  else {
    FUN_10470fc04(lVar17,uStack_120,0x112dcbf00,&UNK_10dd317c0);
    lVar21 = lVar17 + lVar19;
    (*pcVar16)(lVar21,1,lVar9);
    puVar15 = puStack_128;
    if ((int)lVar21 != 1) {
      func_0x0001047108c0(lVar17 + lVar19,puStack_128);
      uVar20 = uVar13;
      FUN_1047430d0(uVar13,puVar15);
      func_0x000104710904(puVar15);
      func_0x000104710904(uVar13);
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000104710904(uVar13);
  }
  func_0x000104711a80(lVar17,0x11308df20,&UNK_10dd30820);
  return 0;
}



/* Entry: 10470fc50; end: 10471011f;  */

void FUN_10470fc50(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_80 [4];
  
  lVar6 = 0;
  FUN_104742f28();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = lVar10 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar8 = unaff_x20[3];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar12 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
  }
  lVar8 = unaff_x20[10];
  if (lVar8 == 1) {
LAB_10470fdc4:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar12 = unaff_x20[4];
    auStack_80[0] = unaff_x20[5];
    lVar4 = unaff_x20[6];
    auStack_80[1] = unaff_x20[7];
    lVar5 = unaff_x20[8];
    auStack_80[2] = unaff_x20[9];
    auStack_80[3] = uVar14;
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar4 == 1) {
LAB_10470fde4:
      __ss6HasherV8_combineyys5UInt8VF(0);
      uVar14 = auStack_80[3];
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar12);
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[0],lVar4);
      }
      if (lVar5 == 0) goto LAB_10470fde4;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[1],lVar5);
      uVar14 = auStack_80[3];
    }
    auStack_80[3] = uVar14;
    if (lVar8 == 0) goto LAB_10470fdc4;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[2],lVar8);
  }
  if (*(char *)(unaff_x20 + 0xe) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x10];
    if (lVar8 == 0) goto LAB_10470fe90;
LAB_10470fe34:
    uVar12 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
  }
  else {
    uVar12 = unaff_x20[0xc];
    uVar7 = unaff_x20[0xd];
    uVar13 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar9 = 0;
    if ((uVar13 & 0x7fffffffffffffff) != 0) {
      uVar9 = uVar13;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar9);
    __ss6HasherV8_combineyySuF(uVar12);
    __ss6HasherV8_combineyySuF(uVar7);
    lVar8 = unaff_x20[0x10];
    if (lVar8 != 0) goto LAB_10470fe34;
LAB_10470fe90:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + 0x11));
  lVar8 = unaff_x20[0x14];
  if (lVar8 != 1) {
    uVar9 = unaff_x20[0x12];
    uVar12 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((uVar9 & 0xff00000000) == 0x100000000) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar3 = 0;
      if ((uVar9 & 0x7fffff) != 0 || (uVar9 & 0x7f800000) != 0) {
        uVar3 = (int)uVar9;
      }
      __ss6HasherV8_combineyys6UInt32VF(uVar3);
    }
    if (lVar8 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
      lVar8 = unaff_x20[0x15];
      goto joined_r0x00010470ff74;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar8 = unaff_x20[0x15];
joined_r0x00010470ff74:
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x16];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046daeb0(param_1,lVar8);
    lVar8 = unaff_x20[0x16];
  }
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x17];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046db5c4(param_1,lVar8);
    lVar8 = unaff_x20[0x17];
  }
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046db5c4(param_1,lVar8);
  }
  lVar8 = 0;
  FUN_10470fbcc();
  FUN_10470fc04((long)unaff_x20 + (long)*(int *)(lVar8 + 0x38),uVar14,0x112dcbf00,&UNK_10dd317c0);
  lVar8 = uVar14;
  (**(code **)(lVar11 + 0x30))(uVar14,1,lVar6);
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047108c0(uVar14,lVar10);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar7 = 0;
    __s10Foundation3URLVMa(0);
    uVar12 = 0x112e092e0;
    FUN_10471096c(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar7,uVar12);
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x14));
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x18)));
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x1c)));
    puVar2 = (ulong *)(lVar10 + *(int *)(lVar6 + 0x20));
    if ((char)puVar2[1] == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar9 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar14 = 0;
      if ((uVar9 & 0x7fffffffffffffff) != 0) {
        uVar14 = uVar9;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar14);
    }
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x24)));
    func_0x000104710904(lVar10);
  }
  return;
}



/* Entry: 104710120; end: 10471015b;  */

void FUN_104710120(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10470fc50(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10471015c; end: 10471015f;  */

void FUN_10471015c(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_80 [4];
  
  lVar6 = 0;
  FUN_104742f28();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = lVar10 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar8 = unaff_x20[3];
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar12 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
  }
  lVar8 = unaff_x20[10];
  if (lVar8 == 1) {
LAB_10470fdc4:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar12 = unaff_x20[4];
    auStack_80[0] = unaff_x20[5];
    lVar4 = unaff_x20[6];
    auStack_80[1] = unaff_x20[7];
    lVar5 = unaff_x20[8];
    auStack_80[2] = unaff_x20[9];
    auStack_80[3] = uVar14;
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar4 == 1) {
LAB_10470fde4:
      __ss6HasherV8_combineyys5UInt8VF(0);
      uVar14 = auStack_80[3];
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar12);
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[0],lVar4);
      }
      if (lVar5 == 0) goto LAB_10470fde4;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[1],lVar5);
      uVar14 = auStack_80[3];
    }
    auStack_80[3] = uVar14;
    if (lVar8 == 0) goto LAB_10470fdc4;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[2],lVar8);
  }
  if (*(char *)(unaff_x20 + 0xe) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x10];
    if (lVar8 == 0) goto LAB_10470fe90;
LAB_10470fe34:
    uVar12 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
  }
  else {
    uVar12 = unaff_x20[0xc];
    uVar7 = unaff_x20[0xd];
    uVar13 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar9 = 0;
    if ((uVar13 & 0x7fffffffffffffff) != 0) {
      uVar9 = uVar13;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar9);
    __ss6HasherV8_combineyySuF(uVar12);
    __ss6HasherV8_combineyySuF(uVar7);
    lVar8 = unaff_x20[0x10];
    if (lVar8 != 0) goto LAB_10470fe34;
LAB_10470fe90:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + 0x11));
  lVar8 = unaff_x20[0x14];
  if (lVar8 != 1) {
    uVar9 = unaff_x20[0x12];
    uVar12 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((uVar9 & 0xff00000000) == 0x100000000) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar3 = 0;
      if ((uVar9 & 0x7fffff) != 0 || (uVar9 & 0x7f800000) != 0) {
        uVar3 = (int)uVar9;
      }
      __ss6HasherV8_combineyys6UInt32VF(uVar3);
    }
    if (lVar8 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,lVar8);
      lVar8 = unaff_x20[0x15];
      goto joined_r0x00010470ff74;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar8 = unaff_x20[0x15];
joined_r0x00010470ff74:
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x16];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046daeb0(param_1,lVar8);
    lVar8 = unaff_x20[0x16];
  }
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar8 = unaff_x20[0x17];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046db5c4(param_1,lVar8);
    lVar8 = unaff_x20[0x17];
  }
  if (lVar8 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046db5c4(param_1,lVar8);
  }
  lVar8 = 0;
  FUN_10470fbcc();
  FUN_10470fc04((long)unaff_x20 + (long)*(int *)(lVar8 + 0x38),uVar14,0x112dcbf00,&UNK_10dd317c0);
  lVar8 = uVar14;
  (**(code **)(lVar11 + 0x30))(uVar14,1,lVar6);
  if ((int)lVar8 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047108c0(uVar14,lVar10);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar7 = 0;
    __s10Foundation3URLVMa(0);
    uVar12 = 0x112e092e0;
    FUN_10471096c(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar7,uVar12);
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x14));
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x18)));
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x1c)));
    puVar2 = (ulong *)(lVar10 + *(int *)(lVar6 + 0x20));
    if ((char)puVar2[1] == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar9 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar14 = 0;
      if ((uVar9 & 0x7fffffffffffffff) != 0) {
        uVar14 = uVar9;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar14);
    }
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x24)));
    func_0x000104710904(lVar10);
  }
  return;
}



/* Entry: 104710160; end: 104710197;  */

void FUN_104710160(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10470fc50(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104710198; end: 10471019b;  */

undefined8 FUN_104710198(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar9 = 0;
  FUN_104742f28();
  lVar21 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar15 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = (long)puVar15 - extraout_x8_00;
  lVar19 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = uVar20 - extraout_x8_01;
  uVar13 = *param_1;
  if (((uVar13 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return 0;
  }
  uVar13 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar13 != 0) {
      return 0;
    }
  }
  else {
    if (uVar13 == 0) {
      return 0;
    }
    uVar10 = param_1[2];
    if (((uVar10 != param_2[2]) || (param_1[3] != uVar13)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  uVar13 = param_1[4];
  uVar3 = param_1[5];
  uVar10 = param_1[6];
  uVar4 = param_1[7];
  uVar12 = param_1[8];
  uVar5 = param_1[9];
  uVar14 = param_1[10];
  uStack_130 = param_2[4];
  uStack_138 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[7];
  uVar2 = param_2[8];
  uVar7 = param_2[9];
  uVar18 = param_2[10];
  puStack_128 = puVar15;
  uStack_120 = uVar20;
  lStack_118 = lVar9;
  lStack_110 = lVar17;
  lStack_108 = lVar19;
  uStack_100 = lVar21;
  if (uVar14 == 1) {
    if (uVar18 != 1) {
LAB_1047103c4:
      uStack_100 = uVar18;
      uStack_f8 = uVar6;
      uStack_f0 = uVar5;
      uStack_e8 = uVar10;
      uStack_e0 = uVar12;
      func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
      uVar20 = uStack_100;
      func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uStack_100);
      func_0x0001015543ac(uVar13,uVar3,uStack_e8,uVar4,uStack_e0,uStack_f0,uVar14);
      func_0x0001015543ac(uStack_130,uStack_138,uVar1,uStack_f8,uVar2,uVar7,uVar20);
      return 0;
    }
    uStack_158 = uVar1;
    uStack_f8 = uVar6;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
    func_0x000104711a50(uStack_130,uStack_138,uStack_158,uStack_f8,uVar2,uVar7,1);
    func_0x0001015543ac(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
  }
  else {
    if (uVar18 == 1) goto LAB_1047103c4;
    uStack_150 = uVar13;
    uStack_148 = uVar3;
    uStack_140 = uVar4;
    uStack_f0 = uVar5;
    uStack_e8 = uVar10;
    uStack_e0 = uVar12;
    uStack_d8 = uVar13;
    uStack_d0 = uVar3;
    uStack_c8 = uVar10;
    uStack_c0 = uVar4;
    uStack_b8 = uVar12;
    uStack_b0 = uVar5;
    uStack_a8 = uVar14;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_138;
    uStack_90 = uVar1;
    uStack_88 = uVar6;
    uStack_80 = uVar2;
    uStack_78 = uVar7;
    uStack_70 = uVar18;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
    uVar20 = uStack_130;
    uVar13 = uStack_138;
    func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uVar18);
    puVar11 = &uStack_d8;
    FUN_104741990(puVar11,&uStack_a0);
    uStack_158 = CONCAT44(uStack_158._4_4_,(int)puVar11);
    func_0x0001015543ac(uVar20,uVar13,uVar1,uVar6,uVar2,uVar7,uVar18);
    func_0x0001015543ac(uStack_150,uStack_148,uStack_e8,uStack_140,uStack_e0,uStack_f0,uVar14);
    if ((uStack_158 & 1) == 0) {
      return 0;
    }
  }
  uVar13 = uStack_100;
  lVar19 = lStack_108;
  if ((char)param_1[0xe] == '\x01') {
    if ((char)param_2[0xe] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xe] == '\x01') {
      return 0;
    }
    if ((double)param_1[0xb] != (double)param_2[0xb]) {
      return 0;
    }
    if (param_1[0xc] != param_2[0xc]) {
      return 0;
    }
    if (param_1[0xd] != param_2[0xd]) {
      return 0;
    }
  }
  uVar20 = param_2[0x10];
  if (param_1[0x10] == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    uVar10 = param_1[0xf];
    if (((uVar10 != param_2[0xf]) || (param_1[0x10] != uVar20)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[0x11] != (char)param_2[0x11]) {
    return 0;
  }
  if (param_1[0x14] == 1) {
    if (param_2[0x14] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x14] == 1) {
      return 0;
    }
    uVar20 = param_1[0x12] & 0xffffffffff;
    FUN_104711cb8(uVar20,param_1[0x13],param_1[0x14],param_2[0x12] & 0xffffffffff,param_2[0x13]);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x15];
  uVar20 = param_2[0x15];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470c484();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x16];
  uVar20 = param_2[0x16];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x17];
  uVar20 = param_2[0x17];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lVar9 = 0;
  FUN_10470fbcc();
  lVar17 = lStack_110;
  iVar8 = *(int *)(lVar9 + 0x38);
  lVar19 = (long)*(int *)(lVar19 + 0x30);
  FUN_10470fc04((long)param_1 + (long)iVar8,lStack_110,0x112dcbf00,&UNK_10dd317c0);
  FUN_10470fc04((long)param_2 + (long)iVar8,lVar17 + lVar19,0x112dcbf00,&UNK_10dd317c0);
  lVar9 = lStack_118;
  pcVar16 = *(code **)(uVar13 + 0x30);
  lVar21 = lVar17;
  (*pcVar16)(lVar17,1,lStack_118);
  uVar13 = uStack_120;
  if ((int)lVar21 == 1) {
    lVar19 = lVar17 + lVar19;
    (*pcVar16)(lVar19,1,lVar9);
    if ((int)lVar19 == 1) {
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      return 1;
    }
  }
  else {
    FUN_10470fc04(lVar17,uStack_120,0x112dcbf00,&UNK_10dd317c0);
    lVar21 = lVar17 + lVar19;
    (*pcVar16)(lVar21,1,lVar9);
    puVar15 = puStack_128;
    if ((int)lVar21 != 1) {
      func_0x0001047108c0(lVar17 + lVar19,puStack_128);
      uVar20 = uVar13;
      FUN_1047430d0(uVar13,puVar15);
      func_0x000104710904(puVar15);
      func_0x000104710904(uVar13);
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000104710904(uVar13);
  }
  func_0x000104711a80(lVar17,0x11308df20,&UNK_10dd30820);
  return 0;
}



/* Entry: 10471019c; end: 1047108bf;  */

undefined8 FUN_10471019c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar9 = 0;
  FUN_104742f28();
  lVar21 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar15 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = (long)puVar15 - extraout_x8_00;
  lVar19 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = uVar20 - extraout_x8_01;
  uVar13 = *param_1;
  if (((uVar13 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return 0;
  }
  uVar13 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar13 != 0) {
      return 0;
    }
  }
  else {
    if (uVar13 == 0) {
      return 0;
    }
    uVar10 = param_1[2];
    if (((uVar10 != param_2[2]) || (param_1[3] != uVar13)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  uVar13 = param_1[4];
  uVar3 = param_1[5];
  uVar10 = param_1[6];
  uVar4 = param_1[7];
  uVar12 = param_1[8];
  uVar5 = param_1[9];
  uVar14 = param_1[10];
  uStack_130 = param_2[4];
  uStack_138 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[7];
  uVar2 = param_2[8];
  uVar7 = param_2[9];
  uVar18 = param_2[10];
  puStack_128 = puVar15;
  uStack_120 = uVar20;
  lStack_118 = lVar9;
  lStack_110 = lVar17;
  lStack_108 = lVar19;
  uStack_100 = lVar21;
  if (uVar14 == 1) {
    if (uVar18 != 1) {
LAB_1047103c4:
      uStack_100 = uVar18;
      uStack_f8 = uVar6;
      uStack_f0 = uVar5;
      uStack_e8 = uVar10;
      uStack_e0 = uVar12;
      func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
      uVar20 = uStack_100;
      func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uStack_100);
      func_0x0001015543ac(uVar13,uVar3,uStack_e8,uVar4,uStack_e0,uStack_f0,uVar14);
      func_0x0001015543ac(uStack_130,uStack_138,uVar1,uStack_f8,uVar2,uVar7,uVar20);
      return 0;
    }
    uStack_158 = uVar1;
    uStack_f8 = uVar6;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
    func_0x000104711a50(uStack_130,uStack_138,uStack_158,uStack_f8,uVar2,uVar7,1);
    func_0x0001015543ac(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,1);
  }
  else {
    if (uVar18 == 1) goto LAB_1047103c4;
    uStack_150 = uVar13;
    uStack_148 = uVar3;
    uStack_140 = uVar4;
    uStack_f0 = uVar5;
    uStack_e8 = uVar10;
    uStack_e0 = uVar12;
    uStack_d8 = uVar13;
    uStack_d0 = uVar3;
    uStack_c8 = uVar10;
    uStack_c0 = uVar4;
    uStack_b8 = uVar12;
    uStack_b0 = uVar5;
    uStack_a8 = uVar14;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_138;
    uStack_90 = uVar1;
    uStack_88 = uVar6;
    uStack_80 = uVar2;
    uStack_78 = uVar7;
    uStack_70 = uVar18;
    func_0x000104711a50(uVar13,uVar3,uVar10,uVar4,uVar12,uVar5,uVar14);
    uVar20 = uStack_130;
    uVar13 = uStack_138;
    func_0x000104711a50(uStack_130,uStack_138,uVar1,uVar6,uVar2,uVar7,uVar18);
    puVar11 = &uStack_d8;
    FUN_104741990(puVar11,&uStack_a0);
    uStack_158 = CONCAT44(uStack_158._4_4_,(int)puVar11);
    func_0x0001015543ac(uVar20,uVar13,uVar1,uVar6,uVar2,uVar7,uVar18);
    func_0x0001015543ac(uStack_150,uStack_148,uStack_e8,uStack_140,uStack_e0,uStack_f0,uVar14);
    if ((uStack_158 & 1) == 0) {
      return 0;
    }
  }
  uVar13 = uStack_100;
  lVar19 = lStack_108;
  if ((char)param_1[0xe] == '\x01') {
    if ((char)param_2[0xe] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xe] == '\x01') {
      return 0;
    }
    if ((double)param_1[0xb] != (double)param_2[0xb]) {
      return 0;
    }
    if (param_1[0xc] != param_2[0xc]) {
      return 0;
    }
    if (param_1[0xd] != param_2[0xd]) {
      return 0;
    }
  }
  uVar20 = param_2[0x10];
  if (param_1[0x10] == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    uVar10 = param_1[0xf];
    if (((uVar10 != param_2[0xf]) || (param_1[0x10] != uVar20)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[0x11] != (char)param_2[0x11]) {
    return 0;
  }
  if (param_1[0x14] == 1) {
    if (param_2[0x14] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x14] == 1) {
      return 0;
    }
    uVar20 = param_1[0x12] & 0xffffffffff;
    FUN_104711cb8(uVar20,param_1[0x13],param_1[0x14],param_2[0x12] & 0xffffffffff,param_2[0x13]);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x15];
  uVar20 = param_2[0x15];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470c484();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x16];
  uVar20 = param_2[0x16];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = param_1[0x17];
  uVar20 = param_2[0x17];
  if (uVar10 == 0) {
    if (uVar20 != 0) {
      return 0;
    }
  }
  else {
    if (uVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar20);
    uVar12 = uVar10;
    _swift_bridgeObjectRetain();
    func_0x00010470cba0();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lVar9 = 0;
  FUN_10470fbcc();
  lVar17 = lStack_110;
  iVar8 = *(int *)(lVar9 + 0x38);
  lVar19 = (long)*(int *)(lVar19 + 0x30);
  FUN_10470fc04((long)param_1 + (long)iVar8,lStack_110,0x112dcbf00,&UNK_10dd317c0);
  FUN_10470fc04((long)param_2 + (long)iVar8,lVar17 + lVar19,0x112dcbf00,&UNK_10dd317c0);
  lVar9 = lStack_118;
  pcVar16 = *(code **)(uVar13 + 0x30);
  lVar21 = lVar17;
  (*pcVar16)(lVar17,1,lStack_118);
  uVar13 = uStack_120;
  if ((int)lVar21 == 1) {
    lVar19 = lVar17 + lVar19;
    (*pcVar16)(lVar19,1,lVar9);
    if ((int)lVar19 == 1) {
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      return 1;
    }
  }
  else {
    FUN_10470fc04(lVar17,uStack_120,0x112dcbf00,&UNK_10dd317c0);
    lVar21 = lVar17 + lVar19;
    (*pcVar16)(lVar21,1,lVar9);
    puVar15 = puStack_128;
    if ((int)lVar21 != 1) {
      func_0x0001047108c0(lVar17 + lVar19,puStack_128);
      uVar20 = uVar13;
      FUN_1047430d0(uVar13,puVar15);
      func_0x000104710904(puVar15);
      func_0x000104710904(uVar13);
      func_0x000104711a80(lVar17,0x112dcbf00,&UNK_10dd317c0);
      if ((uVar20 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000104710904(uVar13);
  }
  func_0x000104711a80(lVar17,0x11308df20,&UNK_10dd30820);
  return 0;
}



/* Entry: 1047108c0; end: 10471093f;  */

undefined8 FUN_1047108c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104742f28();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104710940; end: 10471096b;  */

void FUN_104710940(void)

{
  FUN_10471096c(0x11308de58,FUN_10470fbcc,&UNK_10dd30730);
  return;
}



/* Entry: 10471096c; end: 1047109ab;  */

void FUN_10471096c(long *param_1,code *param_2,long param_3)

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



/* Entry: 1047109ac; end: 104710c2f;  */

long * FUN_1047109ac(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar8 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar8;
    lVar7 = param_2[10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar8);
    if (lVar7 == 1) {
      lVar8 = param_2[4];
      lVar5 = param_2[7];
      lVar7 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = lVar8;
      param_1[7] = lVar5;
      param_1[6] = lVar7;
      lVar8 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = lVar8;
      param_1[10] = param_2[10];
    }
    else {
      lVar8 = param_2[6];
      if (lVar8 == 1) {
        lVar8 = param_2[4];
        lVar13 = param_2[7];
        lVar5 = param_2[6];
        param_1[5] = param_2[5];
        param_1[4] = lVar8;
        param_1[7] = lVar13;
        param_1[6] = lVar5;
        param_1[8] = param_2[8];
      }
      else {
        lVar5 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = lVar5;
        lVar5 = param_2[7];
        lVar13 = param_2[8];
        param_1[6] = lVar8;
        param_1[7] = lVar5;
        param_1[8] = lVar13;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar13);
      }
      param_1[9] = param_2[9];
      param_1[10] = lVar7;
      _swift_bridgeObjectRetain(lVar7);
    }
    lVar8 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = lVar8;
    uVar12 = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x61) = uVar12;
    lVar8 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar8;
    *(char *)(param_1 + 0x11) = (char)param_2[0x11];
    lVar8 = param_2[0x14];
    _swift_bridgeObjectRetain();
    if (lVar8 == 1) {
      lVar8 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = lVar8;
      param_1[0x14] = param_2[0x14];
    }
    else {
      *(int *)(param_1 + 0x12) = (int)param_2[0x12];
      *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = lVar8;
      _swift_bridgeObjectRetain(lVar8);
    }
    lVar5 = param_2[0x15];
    lVar13 = param_2[0x16];
    param_1[0x15] = lVar5;
    param_1[0x16] = lVar13;
    lVar9 = param_2[0x17];
    param_1[0x17] = lVar9;
    lVar8 = (long)param_1 + (long)*(int *)(param_3 + 0x38);
    lVar7 = (long)param_2 + (long)*(int *)(param_3 + 0x38);
    lVar4 = 0;
    FUN_104742f28();
    lVar10 = *(long *)(lVar4 + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar9);
    lVar5 = lVar7;
    (*pcVar11)(lVar7,1,lVar4);
    if ((int)lVar5 == 0) {
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar8,lVar7,lVar5);
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar4 + 0x14));
      puVar2 = (undefined8 *)(lVar7 + *(int *)(lVar4 + 0x14));
      uVar12 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar12;
      *(undefined1 *)(lVar8 + *(int *)(lVar4 + 0x18)) =
           *(undefined1 *)(lVar7 + *(int *)(lVar4 + 0x18));
      *(undefined1 *)(lVar8 + *(int *)(lVar4 + 0x1c)) =
           *(undefined1 *)(lVar7 + *(int *)(lVar4 + 0x1c));
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar4 + 0x20));
      puVar2 = (undefined8 *)(lVar7 + *(int *)(lVar4 + 0x20));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(lVar8 + *(int *)(lVar4 + 0x24)) =
           *(undefined1 *)(lVar7 + *(int *)(lVar4 + 0x24));
      pcVar11 = *(code **)(lVar10 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar11)(lVar8,0,1,lVar4);
    }
    else {
      lVar5 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar8,lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar6 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104710c30; end: 104710d2b;  */

void FUN_104710c30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 1) {
    if (*(long *)(param_1 + 0x30) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0xa0) != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb8));
  param_1 = param_1 + *(int *)(param_2 + 0x38);
  lVar1 = 0;
  FUN_104742f28();
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 != 0) {
    return;
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14) + 8));
  return;
}



/* Entry: 104710d2c; end: 104710f83;  */

undefined8 * FUN_104710d2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  lVar6 = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar10);
  if (lVar6 == 1) {
    uVar10 = param_2[4];
    uVar7 = param_2[7];
    uVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar10;
    param_1[7] = uVar7;
    param_1[6] = uVar11;
    uVar10 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar10;
    param_1[10] = param_2[10];
  }
  else {
    lVar3 = param_2[6];
    if (lVar3 == 1) {
      uVar10 = param_2[4];
      uVar7 = param_2[7];
      uVar11 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar7;
      param_1[6] = uVar11;
      param_1[8] = param_2[8];
    }
    else {
      uVar10 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      uVar10 = param_2[7];
      uVar11 = param_2[8];
      param_1[6] = lVar3;
      param_1[7] = uVar10;
      param_1[8] = uVar11;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar11);
    }
    param_1[9] = param_2[9];
    param_1[10] = lVar6;
    _swift_bridgeObjectRetain(lVar6);
  }
  uVar10 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar10;
  uVar10 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x61) = uVar10;
  uVar10 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar10;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  lVar6 = param_2[0x14];
  _swift_bridgeObjectRetain();
  if (lVar6 == 1) {
    uVar10 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar10;
    param_1[0x14] = param_2[0x14];
  }
  else {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = lVar6;
    _swift_bridgeObjectRetain(lVar6);
  }
  uVar10 = param_2[0x15];
  uVar11 = param_2[0x16];
  param_1[0x15] = uVar10;
  param_1[0x16] = uVar11;
  uVar7 = param_2[0x17];
  param_1[0x17] = uVar7;
  lVar6 = (long)param_1 + (long)*(int *)(param_3 + 0x38);
  lVar3 = (long)param_2 + (long)*(int *)(param_3 + 0x38);
  lVar4 = 0;
  FUN_104742f28();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar7);
  lVar5 = lVar3;
  (*pcVar9)(lVar3,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar6,lVar3,lVar5);
    puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar4 + 0x14));
    puVar2 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    *(undefined1 *)(lVar6 + *(int *)(lVar4 + 0x18)) =
         *(undefined1 *)(lVar3 + *(int *)(lVar4 + 0x18));
    *(undefined1 *)(lVar6 + *(int *)(lVar4 + 0x1c)) =
         *(undefined1 *)(lVar3 + *(int *)(lVar4 + 0x1c));
    puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar4 + 0x20));
    puVar2 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)(lVar6 + *(int *)(lVar4 + 0x24)) =
         *(undefined1 *)(lVar3 + *(int *)(lVar4 + 0x24));
    pcVar9 = *(code **)(lVar8 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar9)(lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112dcbf00;
    func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
    _memcpy(lVar6,lVar3,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 104710f84; end: 10471148b;  */

undefined8 * FUN_104710f84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[2] = param_2[2];
  uVar9 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  if (param_1[10] == 1) {
    if (param_2[10] == 1) {
      uVar13 = param_2[5];
      uVar9 = param_2[4];
      uVar15 = param_2[7];
      uVar14 = param_2[6];
      uVar17 = param_2[9];
      uVar16 = param_2[8];
      param_1[10] = param_2[10];
      param_1[7] = uVar15;
      param_1[6] = uVar14;
      param_1[9] = uVar17;
      param_1[8] = uVar16;
      param_1[5] = uVar13;
      param_1[4] = uVar9;
    }
    else {
      if (param_2[6] == 1) {
        uVar13 = param_2[5];
        uVar9 = param_2[4];
        uVar15 = param_2[7];
        uVar14 = param_2[6];
        param_1[8] = param_2[8];
        param_1[5] = uVar13;
        param_1[4] = uVar9;
        param_1[7] = uVar15;
        param_1[6] = uVar14;
      }
      else {
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        param_1[7] = param_2[7];
        uVar9 = param_2[8];
        param_1[8] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar9);
      }
      param_1[9] = param_2[9];
      param_1[10] = param_2[10];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[10] == 1) {
    func_0x0001017b64d0(param_1 + 4);
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    uVar13 = param_2[9];
    uVar9 = param_2[8];
    uVar17 = param_2[5];
    uVar16 = param_2[4];
    param_1[10] = param_2[10];
    param_1[7] = uVar15;
    param_1[6] = uVar14;
    param_1[9] = uVar13;
    param_1[8] = uVar9;
    param_1[5] = uVar17;
    param_1[4] = uVar16;
  }
  else {
    lVar10 = param_1[6];
    if (lVar10 == 1) {
      if (param_2[6] == 1) {
        uVar13 = param_2[5];
        uVar9 = param_2[4];
        uVar15 = param_2[7];
        uVar14 = param_2[6];
        param_1[8] = param_2[8];
        param_1[5] = uVar13;
        param_1[4] = uVar9;
        param_1[7] = uVar15;
        param_1[6] = uVar14;
      }
      else {
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        param_1[7] = param_2[7];
        uVar9 = param_2[8];
        param_1[8] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar9);
      }
    }
    else if (param_2[6] == 1) {
      func_0x0001017b649c(param_1 + 4);
      uVar9 = param_2[8];
      uVar15 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar15;
      param_1[7] = uVar14;
      param_1[6] = uVar13;
      param_1[8] = uVar9;
    }
    else {
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar10);
      param_1[7] = param_2[7];
      uVar9 = param_1[8];
      param_1[8] = param_2[8];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar9);
    }
    param_1[9] = param_2[9];
    uVar9 = param_1[10];
    param_1[10] = param_2[10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar9);
  }
  uVar13 = param_2[0xc];
  uVar9 = param_2[0xb];
  uVar14 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x61) = uVar14;
  param_1[0xc] = uVar13;
  param_1[0xb] = uVar9;
  param_1[0xf] = param_2[0xf];
  uVar9 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  lVar10 = param_1[0x14];
  if (lVar10 == 1) {
    if (param_2[0x14] == 1) {
      uVar13 = param_2[0x13];
      uVar9 = param_2[0x12];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar13;
      param_1[0x12] = uVar9;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x12);
      *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
      *(undefined4 *)(param_1 + 0x12) = uVar4;
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x14] == 1) {
    func_0x0001017b65a0(param_1 + 0x12);
    uVar9 = param_2[0x14];
    uVar13 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar13;
    param_1[0x14] = uVar9;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x12);
    *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x12) = uVar4;
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar10);
  }
  uVar9 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar10 = (long)param_1 + (long)*(int *)(param_3 + 0x38);
  lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x38);
  lVar6 = 0;
  FUN_104742f28();
  lVar11 = *(long *)(lVar6 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar8 = lVar10;
  (*pcVar12)(lVar10,1,lVar6);
  lVar7 = lVar1;
  (*pcVar12)(lVar1,1,lVar6);
  if ((int)lVar8 == 0) {
    if ((int)lVar7 == 0) {
      lVar8 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x18))(lVar10,lVar1,lVar8);
      puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x14));
      puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14));
      *puVar2 = *puVar3;
      uVar9 = puVar2[1];
      puVar2[1] = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar9);
      *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x18)) =
           *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x18));
      *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x1c)) =
           *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x1c));
      puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x20));
      puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20));
      uVar9 = *puVar3;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
      *puVar2 = uVar9;
      *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x24)) =
           *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x24));
      return param_1;
    }
    func_0x000104710904(lVar10);
  }
  else if ((int)lVar7 == 0) {
    lVar8 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))(lVar10,lVar1,lVar8);
    puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x14));
    puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14));
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x18)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x18));
    *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x1c));
    puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20));
    uVar5 = *(undefined1 *)(puVar3 + 1);
    *puVar2 = *puVar3;
    *(undefined1 *)(puVar2 + 1) = uVar5;
    *(undefined1 *)(lVar10 + *(int *)(lVar6 + 0x24)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar6 + 0x24));
    pcVar12 = *(code **)(lVar11 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar12)(lVar10,0,1,lVar6);
    return param_1;
  }
  lVar8 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  _memcpy(lVar10,lVar1,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  return param_1;
}



/* Entry: 10471148c; end: 1047115ff;  */

undefined8 * FUN_10471148c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  uVar8 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar8;
  param_1[10] = param_2[10];
  uVar8 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x61) = uVar8;
  uVar8 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar8;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar8 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar8;
  param_1[0x14] = param_2[0x14];
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x38);
  lVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x38);
  param_1[0x17] = param_2[0x17];
  lVar5 = 0;
  FUN_104742f28();
  lVar7 = *(long *)(lVar5 + -8);
  lVar6 = lVar1;
  (**(code **)(lVar7 + 0x30))(lVar1,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(lVar2,lVar1,lVar6);
    puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14));
    uVar8 = *puVar3;
    puVar4 = (undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar8;
    *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x18)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x18));
    *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x1c));
    puVar3 = (undefined8 *)(lVar2 + *(int *)(lVar5 + 0x20));
    puVar4 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x24)) =
         *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x24));
    (**(code **)(lVar7 + 0x38))(lVar2,0,1,lVar5);
  }
  else {
    lVar6 = 0x112dcbf00;
    func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
    _memcpy(lVar2,lVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 104711600; end: 10471192f;  */

undefined8 * FUN_104711600(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[10] == 1) {
LAB_104711664:
    uVar4 = param_2[4];
    uVar12 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar12;
    param_1[6] = uVar3;
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  else {
    lVar9 = param_2[10];
    if (lVar9 == 1) {
      func_0x0001017b64d0(param_1 + 4);
      goto LAB_104711664;
    }
    if (param_1[6] == 1) {
LAB_1047116a0:
      uVar4 = param_2[4];
      uVar12 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar12;
      param_1[6] = uVar3;
      param_1[8] = param_2[8];
    }
    else {
      lVar8 = param_2[6];
      if (lVar8 == 1) {
        func_0x0001017b649c(param_1 + 4);
        goto LAB_1047116a0;
      }
      uVar4 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[6] = lVar8;
      _swift_bridgeObjectRelease();
      uVar4 = param_2[8];
      uVar3 = param_1[8];
      param_1[7] = param_2[7];
      param_1[8] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar4 = param_1[10];
    param_1[9] = param_2[9];
    param_1[10] = lVar9;
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x61) = uVar4;
  uVar4 = param_2[0x10];
  uVar3 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  if (param_1[0x14] != 1) {
    lVar9 = param_2[0x14];
    if (lVar9 != 1) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = lVar9;
      _swift_bridgeObjectRelease();
      goto LAB_10471175c;
    }
    func_0x0001017b65a0(param_1 + 0x12);
  }
  uVar4 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar4;
  param_1[0x14] = param_2[0x14];
LAB_10471175c:
  uVar4 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRelease(uVar4);
  lVar9 = (long)param_1 + (long)*(int *)(param_3 + 0x38);
  lVar8 = (long)param_2 + (long)*(int *)(param_3 + 0x38);
  lVar5 = 0;
  FUN_104742f28();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = lVar9;
  (*pcVar11)(lVar9,1,lVar5);
  lVar6 = lVar8;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 == 0) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x28))(lVar9,lVar8,lVar7);
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x14));
      puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
      uVar4 = puVar2[1];
      uVar3 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x18)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18));
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x1c)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c));
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x20));
      puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x20));
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *puVar1 = *puVar2;
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x24)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24));
      return param_1;
    }
    func_0x000104710904(lVar9);
  }
  else if ((int)lVar6 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar9,lVar8,lVar7);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
    uVar4 = *puVar1;
    puVar2 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x14));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar4;
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x18)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18));
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c));
    puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x20));
    puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x24)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24));
    (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
    return param_1;
  }
  lVar7 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  _memcpy(lVar9,lVar8,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  return param_1;
}



/* Entry: 104711930; end: 104711947;  */

void FUN_104711930(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104711948; end: 104711abf;  */

void FUN_104711948(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_78 = &UNK_10dd30778;
  puStack_70 = &UNK_10dd30790;
  puStack_68 = &UNK_10dd307a8;
  puStack_60 = &UNK_10dd307c0;
  puStack_58 = &UNK_10dd30790;
  puStack_50 = &UNK_10dd307d8;
  puStack_48 = &UNK_10dd307f0;
  puStack_40 = &UNK_10dd30808;
  puStack_38 = &UNK_10dd30808;
  puStack_30 = &UNK_10dd30808;
  lVar1 = 0x13f;
  func_0x0001047119fc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,0xb,&puStack_78,param_1 + 0x10);
  }
  return;
}



/* Entry: 104711ac0; end: 104711c0f;  */

void FUN_104711ac0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xff00000000) == 0x100000000) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_2 & 0x7fffff) != 0 || (param_2 & 0x7f800000) != 0) {
      uVar1 = (int)param_2;
    }
    __ss6HasherV8_combineyys6UInt32VF(uVar1);
  }
  if (param_4 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,param_3,param_4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 104711c10; end: 104711c37;  */

void FUN_104711c10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint5 uVar4;
  uint5 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x20 + 1);
  lVar3 = *(long *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (((ulong)uVar4 & 0xff00000000) == 0x100000000) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar4 & 0x7fffff) != 0 || (uVar4 & 0x7f800000) != 0) {
      uVar1 = (int)uVar4;
    }
    __ss6HasherV8_combineyys6UInt32VF(uVar1);
  }
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104711c38; end: 104711c8f;  */

void FUN_104711c38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 1);
  uVar2 = *(undefined8 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104711ac0(auStack_78,(ulong)uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104711c90; end: 104711cb7;  */

undefined8 FUN_104711c90(uint5 *param_1,uint5 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 1);
  lVar1 = *(long *)(param_1 + 2);
  lVar2 = *(long *)(param_2 + 2);
  uVar4 = (ulong)*param_2 & 0xff00000000;
  if (((ulong)*param_1 & 0xff00000000) == 0x100000000) {
    if (uVar4 != 0x100000000) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0x100000000) {
      return 0;
    }
    if ((float)*param_1 != (float)*param_2) {
      return 0;
    }
  }
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      return 1;
    }
  }
  else if ((lVar2 != 0) &&
          (((uVar3 == *(ulong *)(param_2 + 1) && (lVar1 == lVar2)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar3,lVar1,*(ulong *)(param_2 + 1),lVar2,0), (uVar3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 104711cb8; end: 104711d43;  */

undefined8
FUN_104711cb8(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong param_5,long param_6)

{
  if ((param_1 & 0xff00000000) == 0x100000000) {
    if ((param_4 & 0xff00000000) != 0x100000000) {
      return 0;
    }
  }
  else {
    if ((param_4 & 0xff00000000) == 0x100000000) {
      return 0;
    }
    if ((float)param_1 != (float)param_4) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if ((param_6 != 0) &&
          (((param_2 == param_5 && (param_3 == param_6)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_2,param_3,param_5,param_6,0), (param_2 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 104711d44; end: 104711d47;  */

void FUN_104711d44(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30868;
  _swift_getWitnessTable(&UNK_10dd30868,&UNK_11079cd10);
  puRam000000011308df28 = puVar1;
  return;
}



/* Entry: 104711d48; end: 104711d87;  */

void FUN_104711d48(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30868;
  _swift_getWitnessTable(&UNK_10dd30868,&UNK_11079cd10);
  puRam000000011308df28 = puVar1;
  return;
}



/* Entry: 104711d88; end: 104711d8f;  */

void FUN_104711d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104711d90; end: 104711e5b;  */

undefined4 * FUN_104711d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104711e5c; end: 104711f37;  */

int FUN_104711e5c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
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



/* Entry: 104711f38; end: 104711fe3;  */

void FUN_104711f38(void)

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



/* Entry: 104711fe4; end: 10471201f;  */

undefined1  [16] FUN_104711fe4(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd000000000000016;
  pcVar1 = "captionCtaPosition";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000012;
    pcVar1 = "AdAppInstallAppReviewObjc";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 104712020; end: 1047120ff;  */

void FUN_104712020(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0df30d0)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f20cf30,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef0df30b0)) {
        _swift_bridgeObjectRelease(0x800000010f20cf50);
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000016,0x800000010f20cf50,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_10471208c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10471208c:
  *param_1 = uVar2;
  return;
}



/* Entry: 104712100; end: 104712117;  */

undefined1  [16] FUN_104712100(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104712118; end: 104712167;  */

void FUN_104712118(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104712668();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104712168; end: 10471216b;  */

undefined8 FUN_104712168(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*param_1 == *param_2) {
    bVar1 = false;
    if ((param_1[1] == param_2[1]) && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar1 = param_1[2] == param_2[2];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(param_1[3]) && !NAN(param_2[3]))) {
      bVar2 = param_1[3] == param_2[3];
    }
    if (bVar2) {
      if (*(char *)(param_1 + 8) == '\x01') {
        if (*(char *)(param_2 + 8) == '\x01') {
          return 1;
        }
      }
      else if ((*(char *)(param_2 + 8) != '\x01') &&
              ((((-(param_1[4] == param_2[4]) & 1U) + (-(param_1[5] == param_2[5]) & 2U) +
                 (-(param_1[6] == param_2[6]) & 4U) + (-(param_1[7] == param_2[7]) & 8U) ^ 0xff) &
               0xf) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10471216c; end: 1047122bb;  */

void FUN_10471216c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_51;
  
  lVar3 = 0x11308df30;
  func_0x0001000285a8(0x11308df30,&UNK_10dd308a0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104712668();
  puVar4 = &UNK_11079ce60;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&uStack_80 - extraout_x8,&UNK_11079ce60,&UNK_11079ce60,param_1,uVar1,uVar2);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_51 = 0;
  func_0x0001047126a8();
  puVar5 = &uStack_80;
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (puVar5,&uStack_51,lVar3,&UNK_11079d440,puVar4);
  if (unaff_x21 == 0) {
    uStack_78 = unaff_x20[5];
    uStack_80 = unaff_x20[4];
    uStack_68 = unaff_x20[7];
    uStack_70 = unaff_x20[6];
    uStack_60 = *(undefined1 *)(unaff_x20 + 8);
    uStack_51 = 1;
    func_0x0001047126e8();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_80,&uStack_51,lVar3,&UNK_11079fe08,puVar5);
  }
  (**(code **)(lVar6 + 8))((long)&uStack_80 - extraout_x8,lVar3);
  return;
}



/* Entry: 1047122bc; end: 1047124c3;  */

void FUN_1047122bc(void)

{
  double dVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  dVar2 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar2 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar5 != 0.0) {
    dVar2 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    dVar3 = unaff_x20[6];
    dVar5 = unaff_x20[7];
    dVar4 = unaff_x20[4];
    dVar1 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    dVar2 = 0.0;
    if (ABS(dVar4) != 0.0) {
      dVar2 = dVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar1) != 0.0) {
      dVar2 = dVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar3) != 0.0) {
      dVar2 = dVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar5) != 0.0) {
      dVar2 = dVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
  }
  return;
}



/* Entry: 1047124c4; end: 1047124cb;  */

void FUN_1047124c4(void)

{
  double dVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  dVar2 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar2 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar5 != 0.0) {
    dVar2 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    dVar3 = unaff_x20[6];
    dVar5 = unaff_x20[7];
    dVar4 = unaff_x20[4];
    dVar1 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    dVar2 = 0.0;
    if (ABS(dVar4) != 0.0) {
      dVar2 = dVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar1) != 0.0) {
      dVar2 = dVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar3) != 0.0) {
      dVar2 = dVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
    dVar2 = 0.0;
    if (ABS(dVar5) != 0.0) {
      dVar2 = dVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047124cc; end: 104712503;  */

void FUN_1047124cc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047122bc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104712504; end: 104712553;  */

void FUN_104712504(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_104712728(&uStack_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = uStack_48;
    param_1[7] = uStack_30;
    param_1[6] = uStack_38;
    *(undefined1 *)(param_1 + 8) = uStack_28;
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[3] = uStack_50;
    param_1[2] = uStack_58;
  }
  return;
}



/* Entry: 104712554; end: 1047125bf;  */

void FUN_104712554(void)

{
  FUN_10471216c();
  return;
}



/* Entry: 1047125c0; end: 104712667;  */

undefined8 FUN_1047125c0(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*param_1 == *param_2) {
    bVar1 = false;
    if ((param_1[1] == param_2[1]) && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar1 = param_1[2] == param_2[2];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(param_1[3]) && !NAN(param_2[3]))) {
      bVar2 = param_1[3] == param_2[3];
    }
    if (bVar2) {
      if (*(char *)(param_1 + 8) == '\x01') {
        if (*(char *)(param_2 + 8) == '\x01') {
          return 1;
        }
      }
      else if ((*(char *)(param_2 + 8) != '\x01') &&
              ((((-(param_1[4] == param_2[4]) & 1U) + (-(param_1[5] == param_2[5]) & 2U) +
                 (-(param_1[6] == param_2[6]) & 4U) + (-(param_1[7] == param_2[7]) & 8U) ^ 0xff) &
               0xf) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104712668; end: 104712727;  */

void FUN_104712668(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30a3c;
  _swift_getWitnessTable(&UNK_10dd30a3c,&UNK_11079ce60);
  puRam000000011308df38 = puVar1;
  return;
}



/* Entry: 104712728; end: 1047128d7;  */

/* WARNING: Removing unreachable block (ram,0x000104712810) */

void FUN_104712728(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x11308df70;
  func_0x0001000285a8(0x11308df70,&UNK_10dd30a90);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104712668();
  puVar5 = &UNK_11079ce60;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_d0 - extraout_x8,&UNK_11079ce60,&UNK_11079ce60,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x000104712be8();
    puVar6 = &UNK_11079d440;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_88,&UNK_11079d440,&uStack_51,lVar3,&UNK_11079d440,puVar5);
    uStack_a8 = uStack_70;
    uStack_b0 = uStack_78;
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_51 = 1;
    func_0x000104712c28();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_88,&UNK_11079fe08,&uStack_51,lVar3,&UNK_11079fe08,puVar6);
    (**(code **)(lVar7 + 8))((long)&uStack_d0 - extraout_x8,lVar3);
    uStack_c8 = uStack_70;
    uStack_d0 = uStack_78;
    uStack_b8 = uStack_80;
    uStack_c0 = uStack_88;
    func_0x0001000834e4(param_2);
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[5] = uStack_b8;
    param_1[4] = uStack_c0;
    param_1[7] = uStack_c8;
    param_1[6] = uStack_d0;
    *(undefined1 *)(param_1 + 8) = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1047128d8; end: 1047128db;  */

void FUN_1047128d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30938;
  _swift_getWitnessTable(&UNK_10dd30938,&UNK_11079cdc8);
  puRam000000011308df50 = puVar1;
  return;
}



/* Entry: 1047128dc; end: 10471291b;  */

void FUN_1047128dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30938;
  _swift_getWitnessTable(&UNK_10dd30938,&UNK_11079cdc8);
  puRam000000011308df50 = puVar1;
  return;
}



/* Entry: 10471291c; end: 104712947;  */

long FUN_10471291c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104712948; end: 104712b1f;  */

int FUN_104712948(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104712b20; end: 104712b5f;  */

void FUN_104712b20(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30a14;
  _swift_getWitnessTable(&UNK_10dd30a14,&UNK_11079ce60);
  puRam000000011308df58 = puVar1;
  return;
}



/* Entry: 104712b60; end: 104712b63;  */

void FUN_104712b60(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd309ac;
  _swift_getWitnessTable(&UNK_10dd309ac,&UNK_11079ce60);
  puRam000000011308df60 = puVar1;
  return;
}



/* Entry: 104712b64; end: 104712ba3;  */

void FUN_104712b64(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd309ac;
  _swift_getWitnessTable(&UNK_10dd309ac,&UNK_11079ce60);
  puRam000000011308df60 = puVar1;
  return;
}



/* Entry: 104712ba4; end: 104712ba7;  */

void FUN_104712ba4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30984;
  _swift_getWitnessTable(&UNK_10dd30984,&UNK_11079ce60);
  puRam000000011308df68 = puVar1;
  return;
}



/* Entry: 104712ba8; end: 104712c67;  */

void FUN_104712ba8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308df68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd30984;
  _swift_getWitnessTable(&UNK_10dd30984,&UNK_11079ce60);
  puRam000000011308df68 = puVar1;
  return;
}


