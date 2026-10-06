/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10473d534; end: 10473d57b;  */

void FUN_10473d534(void)

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



/* Entry: 10473d57c; end: 10473d583;  */

void FUN_10473d57c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10473d584; end: 10473d5c7;  */

void FUN_10473d584(void)

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



/* Entry: 10473d5c8; end: 10473d5cb;  */

void FUN_10473d5c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31f00;
  _swift_getWitnessTable(&UNK_10dd31f00,&UNK_11079e068);
  puRam000000011308e460 = puVar1;
  return;
}



/* Entry: 10473d5cc; end: 10473d60b;  */

void FUN_10473d5cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31f00;
  _swift_getWitnessTable(&UNK_10dd31f00,&UNK_11079e068);
  puRam000000011308e460 = puVar1;
  return;
}



/* Entry: 10473d60c; end: 10473d643;  */

long FUN_10473d60c(long *param_1,long *param_2)

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



/* Entry: 10473d644; end: 10473d6b3;  */

undefined8 * FUN_10473d644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473d6b4; end: 10473d74f;  */

int FUN_10473d6b4(int *param_1,int param_2)

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



/* Entry: 10473d750; end: 10473d8cf;  */

void FUN_10473d750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[1],unaff_x20[2]);
  lVar4 = unaff_x20[3];
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar3 = puVar5[-1];
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      puVar5 = puVar5 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[6],unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[8],unaff_x20[9]);
  FUN_10473c63c(param_1);
  FUN_1046dbf5c(param_1,unaff_x20[0x11]);
  lVar4 = unaff_x20[0x12];
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar3 = puVar5[-1];
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      puVar5 = puVar5 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  dVar7 = (double)unaff_x20[0x14];
  uVar3 = unaff_x20[0x15];
  dVar6 = 0.0;
  if ((double)unaff_x20[0x13] != 0.0) {
    dVar6 = (double)unaff_x20[0x13];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  __ss6HasherV8_combineyySuF(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,unaff_x20[0x16],unaff_x20[0x17]);
  return;
}



/* Entry: 10473d8d0; end: 10473d90b;  */

void FUN_10473d8d0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10473d750(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d90c; end: 10473d90f;  */

void FUN_10473d90c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[1],unaff_x20[2]);
  lVar4 = unaff_x20[3];
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar3 = puVar5[-1];
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      puVar5 = puVar5 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[4],unaff_x20[5]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[6],unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[8],unaff_x20[9]);
  FUN_10473c63c(param_1);
  FUN_1046dbf5c(param_1,unaff_x20[0x11]);
  lVar4 = unaff_x20[0x12];
  lVar2 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar3 = puVar5[-1];
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      puVar5 = puVar5 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  dVar7 = (double)unaff_x20[0x14];
  uVar3 = unaff_x20[0x15];
  dVar6 = 0.0;
  if ((double)unaff_x20[0x13] != 0.0) {
    dVar6 = (double)unaff_x20[0x13];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  __ss6HasherV8_combineyySuF(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,unaff_x20[0x16],unaff_x20[0x17]);
  return;
}



/* Entry: 10473d910; end: 10473d947;  */

void FUN_10473d910(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10473d750(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d948; end: 10473d9d7;  */

uint FUN_10473d948(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_10473d9d8(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10473d9d8; end: 10473dc37;  */

long FUN_10473d9d8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((*param_1 == *param_2) &&
     ((uVar1 = param_1[1], uVar1 == param_2[1] && param_1[2] == param_2[2] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    lVar2 = param_1[3];
    lVar3 = param_2[3];
    lVar4 = *(long *)(lVar2 + 0x10);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      if (lVar4 != 0 && lVar2 != lVar3) {
        plVar5 = (long *)(lVar3 + 0x28);
        plVar6 = (long *)(lVar2 + 0x28);
        do {
          uVar1 = plVar6[-1];
          if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar1 & 1) == 0)) {
            return 0;
          }
          plVar5 = plVar5 + 2;
          plVar6 = plVar6 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uVar1 = param_1[4];
      if ((uVar1 == param_2[4] && param_1[5] == param_2[5]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) != 0)) {
        uVar1 = param_1[6];
        if (((uVar1 == param_2[6]) && (param_1[7] == param_2[7])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) != 0)) {
          uVar1 = param_1[8];
          if ((((uVar1 == param_2[8]) && (param_1[9] == param_2[9])) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar1 & 1) != 0)) && (param_1[10] == param_2[10])) {
            uVar1 = param_1[0xb];
            lVar4 = param_1[0xd];
            dVar10 = (double)param_1[0xe];
            dVar8 = (double)param_1[0xf];
            dVar7 = (double)param_1[0x10];
            lVar2 = param_2[0xd];
            dVar12 = (double)param_2[0xe];
            dVar11 = (double)param_2[0xf];
            dVar9 = (double)param_2[0x10];
            if (((uVar1 != param_2[0xb]) || (param_1[0xc] != param_2[0xc])) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar1 & 1) == 0)) {
              return 0;
            }
            if (lVar4 != lVar2) {
              return 0;
            }
            if (dVar10 != dVar12) {
              return 0;
            }
            if (dVar8 != dVar11) {
              return 0;
            }
            if (dVar7 != dVar9) {
              return 0;
            }
            uVar1 = param_1[0x11];
            FUN_10470b580(uVar1,param_2[0x11]);
            if ((uVar1 & 1) != 0) {
              uVar1 = param_1[0x12];
              FUN_10470b7ac(uVar1,param_2[0x12]);
              if ((uVar1 & 1) != 0) {
                if ((double)param_1[0x13] != (double)param_2[0x13]) {
                  return 0;
                }
                if ((double)param_1[0x14] != (double)param_2[0x14]) {
                  return 0;
                }
                if (param_1[0x15] != param_2[0x15]) {
                  return 0;
                }
                lVar4 = param_1[0x16];
                if ((lVar4 == param_2[0x16]) && (param_1[0x17] == param_2[0x17])) {
                  return 1;
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                )();
                return lVar4;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 10473dc38; end: 10473dc3b;  */

void FUN_10473dc38(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31f90;
  _swift_getWitnessTable(&UNK_10dd31f90,&UNK_11079e120);
  puRam000000011308e468 = puVar1;
  return;
}



/* Entry: 10473dc3c; end: 10473dc7b;  */

void FUN_10473dc3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31f90;
  _swift_getWitnessTable(&UNK_10dd31f90,&UNK_11079e120);
  puRam000000011308e468 = puVar1;
  return;
}



/* Entry: 10473dc7c; end: 10473dd07;  */

long FUN_10473dc7c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473dd08; end: 10473ddf3;  */

undefined8 * FUN_10473dd08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar8 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar8;
  uVar6 = param_2[0xc];
  param_1[0xc] = uVar6;
  uVar8 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar8;
  uVar8 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar8;
  uVar8 = param_2[0x11];
  uVar5 = param_2[0x12];
  param_1[0x11] = uVar8;
  param_1[0x12] = uVar5;
  uVar7 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar7;
  uVar7 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar7;
  uVar7 = param_2[0x17];
  param_1[0x17] = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Entry: 10473ddf4; end: 10473df6f;  */

undefined8 * FUN_10473ddf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
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
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  uVar1 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473df70; end: 10473e04b;  */

undefined8 * FUN_10473df70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRelease(param_1[0x11]);
  uVar1 = param_1[0x12];
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
  uVar1 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473e04c; end: 10473e117;  */

int FUN_10473e04c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10473e118; end: 10473e1a7;  */

void FUN_10473e118(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
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



/* Entry: 10473e1a8; end: 10473e213;  */

void FUN_10473e1a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  uVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar2);
  if (lVar3 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar1,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 10473e214; end: 10473e29f;  */

void FUN_10473e214(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
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



/* Entry: 10473e2a0; end: 10473e2bb;  */

undefined8 FUN_10473e2a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  lVar1 = param_1[3];
  lVar2 = param_2[3];
  if (((int)*param_1 == (int)*param_2) && ((int)param_1[1] == (int)param_2[1])) {
    if (lVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      if ((uVar3 == param_2[2]) && (lVar1 == lVar2)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,lVar1,param_2[2],lVar2,0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10473e2bc; end: 10473e337;  */

undefined8
FUN_10473e2bc(int param_1,int param_2,ulong param_3,long param_4,int param_5,int param_6,
             ulong param_7,long param_8)

{
  if ((param_1 == param_5) && (param_2 == param_6)) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      if ((param_3 == param_7) && (param_4 == param_8)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_3,param_4,param_7,param_8,0);
      if ((param_3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10473e338; end: 10473e33b;  */

void FUN_10473e338(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32020;
  _swift_getWitnessTable(&UNK_10dd32020,&UNK_11079e200);
  puRam000000011308e470 = puVar1;
  return;
}



/* Entry: 10473e33c; end: 10473e37b;  */

void FUN_10473e33c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32020;
  _swift_getWitnessTable(&UNK_10dd32020,&UNK_11079e200);
  puRam000000011308e470 = puVar1;
  return;
}



/* Entry: 10473e37c; end: 10473e3a7;  */

long FUN_10473e37c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473e3a8; end: 10473e3af;  */

void FUN_10473e3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10473e3b0; end: 10473e46b;  */

undefined8 * FUN_10473e3b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10473e46c; end: 10473e52b;  */

int FUN_10473e46c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10473e52c; end: 10473e6a3;  */

void FUN_10473e52c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar1 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar1);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 4) & 1);
  lVar2 = unaff_x20[6];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[7];
  }
  else {
    uVar4 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[7];
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar2 = unaff_x20[8];
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x30);
      do {
        uVar4 = puVar6[-2];
        uVar1 = puVar6[-1];
        uVar5 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar1);
        __ss6HasherV8_combineyySuF(uVar5);
        _swift_bridgeObjectRelease(uVar1);
        lVar3 = lVar3 + -1;
        puVar6 = puVar6 + 3;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 10473e6a4; end: 10473e6df;  */

void FUN_10473e6a4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10473e52c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473e6e0; end: 10473e6e3;  */

void FUN_10473e6e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar1 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __ss6HasherV8_combineyySuF(uVar1);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 4) & 1);
  lVar2 = unaff_x20[6];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[7];
  }
  else {
    uVar4 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[7];
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar2 = unaff_x20[8];
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x30);
      do {
        uVar4 = puVar6[-2];
        uVar1 = puVar6[-1];
        uVar5 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar1);
        __ss6HasherV8_combineyySuF(uVar5);
        _swift_bridgeObjectRelease(uVar1);
        lVar3 = lVar3 + -1;
        puVar6 = puVar6 + 3;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 10473e6e4; end: 10473e71b;  */

void FUN_10473e6e4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10473e52c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473e71c; end: 10473e773;  */

uint FUN_10473e71c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10473e774(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10473e774; end: 10473e903;  */

undefined8 FUN_10473e774(int *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 6);
  lVar2 = *(long *)(param_2 + 6);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = *(ulong *)(param_1 + 4);
    if (((uVar4 != *(ulong *)(param_2 + 4)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 4),lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 8) ^ *(byte *)(param_2 + 8)) & 1) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0xc);
  lVar2 = *(long *)(param_2 + 0xc);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    uVar4 = *(ulong *)(param_1 + 10);
    if (((uVar4 != *(ulong *)(param_2 + 10)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 10),lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0xe);
  lVar2 = *(long *)(param_2 + 0xe);
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    func_0x00010142cfc4(uVar4,lVar2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = *(long *)(param_2 + 0x10);
  if (uVar4 == 0) {
    if (lVar2 == 0) {
      return 1;
    }
  }
  else if (lVar2 != 0) {
    _swift_bridgeObjectRetain(lVar2);
    uVar1 = uVar4;
    _swift_bridgeObjectRetain();
    FUN_10470b1bc();
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10473e904; end: 10473e907;  */

void FUN_10473e904(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd320b0;
  _swift_getWitnessTable(&UNK_10dd320b0,&UNK_11079e2c0);
  puRam000000011308e478 = puVar1;
  return;
}



/* Entry: 10473e908; end: 10473e947;  */

void FUN_10473e908(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd320b0;
  _swift_getWitnessTable(&UNK_10dd320b0,&UNK_11079e2c0);
  puRam000000011308e478 = puVar1;
  return;
}



/* Entry: 10473e948; end: 10473e9ab;  */

long FUN_10473e948(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473e9ac; end: 10473eacb;  */

undefined8 * FUN_10473e9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar3 = param_2[7];
  uVar2 = param_2[8];
  param_1[7] = uVar3;
  param_1[8] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10473eacc; end: 10473eb3f;  */

undefined8 * FUN_10473eacc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10473eb40; end: 10473ec0f;  */

int FUN_10473eb40(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10473ec10; end: 10473ed0b;  */

void FUN_10473ec10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473ed0c; end: 10473ed0f;  */

void FUN_10473ed0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32140;
  _swift_getWitnessTable(&UNK_10dd32140,&UNK_11079e388);
  puRam000000011308e480 = puVar1;
  return;
}



/* Entry: 10473ed10; end: 10473ed4f;  */

void FUN_10473ed10(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32140;
  _swift_getWitnessTable(&UNK_10dd32140,&UNK_11079e388);
  puRam000000011308e480 = puVar1;
  return;
}



/* Entry: 10473ed50; end: 10473ed9f;  */

long FUN_10473ed50(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != param_2[1] || param_1[2] != param_2[2]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 10473eda0; end: 10473ee1f;  */

undefined8 * FUN_10473eda0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473ee20; end: 10473eebf;  */

int FUN_10473ee20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10473eec0; end: 10473ef07;  */

undefined8 FUN_10473eec0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10473ef08; end: 10473ef0b;  */

undefined8 FUN_10473ef08(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_2e8 [56];
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  
  uVar7 = *param_1;
  if ((uVar7 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[2];
  uVar11 = param_2[2];
  lVar12 = *(long *)(uVar7 + 0x10);
  if (lVar12 != *(long *)(uVar11 + 0x10)) {
    return 0;
  }
  if (lVar12 != 0 && uVar7 != uVar11) {
    lVar17 = 0;
    do {
      puVar8 = (ulong *)(uVar7 + 0x20 + lVar17 * 0x48);
      uStack_1e8 = puVar8[1];
      uStack_1f0 = *puVar8;
      uVar24 = puVar8[3];
      uVar21 = puVar8[2];
      uStack_1c8 = puVar8[5];
      uStack_1d0 = puVar8[4];
      uStack_1b8 = puVar8[7];
      uStack_1c0 = puVar8[6];
      uStack_1b0 = puVar8[8];
      puVar8 = (ulong *)(uVar11 + 0x20 + lVar17 * 0x48);
      uStack_288 = puVar8[5];
      uStack_290 = puVar8[4];
      uStack_278 = puVar8[7];
      uStack_280 = puVar8[6];
      uStack_270 = puVar8[8];
      uVar23 = puVar8[3];
      uVar22 = puVar8[2];
      uStack_2a8 = puVar8[1];
      uStack_2b0 = *puVar8;
      iVar5 = (int)uStack_1f0;
      iVar6 = (int)uStack_1e8;
      iVar3 = (int)uStack_2b0;
      iVar4 = (int)uStack_2a8;
      uStack_2a0 = uVar22;
      uStack_298 = uVar23;
      uStack_1e0 = uVar21;
      uStack_1d8 = uVar24;
      FUN_10473fd48(&uStack_1f0,&uStack_238);
      FUN_10473fd48(&uStack_2b0,&uStack_238);
      if ((iVar5 != iVar3) || (iVar6 != iVar4)) {
LAB_10473f960:
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
        return 0;
      }
      if (uVar24 == 0) {
        if (uVar23 != 0) goto LAB_10473f960;
      }
      else if ((uVar23 == 0) ||
              (((uVar21 != uVar22 || (uVar24 != uVar23)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar21,uVar24,uVar22,uVar23,0), (uVar21 & 1) == 0)))) goto LAB_10473f960;
      if ((char)uStack_1d0 != (char)uStack_290) goto LAB_10473f960;
      if (uStack_1c0 == 0) {
        if (uStack_280 != 0) goto LAB_10473f960;
      }
      else if ((uStack_280 == 0) ||
              (((uStack_1c8 != uStack_288 || (uStack_1c0 != uStack_280)) &&
               (uVar21 = uStack_1c8,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar21 & 1) == 0)))) goto LAB_10473f960;
      if (uStack_1b8 == 0) {
        if (uStack_278 != 0) goto LAB_10473f960;
      }
      else {
        if ((uStack_278 == 0) ||
           (lVar13 = *(long *)(uStack_1b8 + 0x10), lVar13 != *(long *)(uStack_278 + 0x10)))
        goto LAB_10473f960;
        if ((lVar13 != 0) && (uStack_1b8 != uStack_278)) {
          plVar14 = (long *)(uStack_278 + 0x28);
          plVar15 = (long *)(uStack_1b8 + 0x28);
          do {
            uVar21 = plVar15[-1];
            if ((uVar21 != plVar14[-1] || *plVar15 != *plVar14) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar21 & 1) == 0)) goto LAB_10473f960;
            plVar14 = plVar14 + 2;
            plVar15 = plVar15 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      uVar24 = uStack_1b0;
      uVar21 = uStack_270;
      if (uStack_1b0 == 0) {
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
        if (uVar21 != 0) {
          return 0;
        }
      }
      else {
        if ((uStack_270 == 0) ||
           (lVar13 = *(long *)(uStack_1b0 + 0x10), lVar13 != *(long *)(uStack_270 + 0x10)))
        goto LAB_10473f960;
        if (lVar13 != 0 && uStack_1b0 != uStack_270) {
          _swift_bridgeObjectRetain(uStack_270);
          _swift_bridgeObjectRetain(uVar24);
          lVar16 = 0;
          do {
            lVar1 = uVar24 + lVar16;
            uVar22 = *(ulong *)(lVar1 + 0x20);
            uVar18 = *(undefined8 *)(lVar1 + 0x30);
            lVar2 = uVar21 + lVar16;
            uVar20 = *(undefined8 *)(lVar2 + 0x30);
            if (((uVar22 != *(ulong *)(lVar2 + 0x20) ||
                  *(long *)(lVar1 + 0x28) != *(long *)(lVar2 + 0x28)) &&
                (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar22 & 1) == 0)) || ((int)uVar18 != (int)uVar20)) {
              _swift_bridgeObjectRelease(uVar24);
              _swift_bridgeObjectRelease(uVar21);
              goto LAB_10473f960;
            }
            lVar16 = lVar16 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_bridgeObjectRelease(uVar24);
          _swift_bridgeObjectRelease(uVar21);
        }
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar12);
  }
  uVar7 = param_1[3];
  if (((uVar7 != param_2[3]) || (param_1[4] != param_2[4])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[5];
  uVar22 = param_1[6];
  uVar11 = param_1[7];
  uVar23 = param_1[8];
  uVar10 = param_1[9];
  uVar21 = param_2[5];
  uVar25 = param_2[6];
  uVar24 = param_2[7];
  uVar26 = param_2[8];
  uVar19 = param_2[9];
  if (uVar22 == 0) {
    if (uVar25 != 0) {
LAB_10473f7a0:
      FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
      FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
      func_0x000104740964(uVar7,uVar22,uVar11,uVar23,uVar10);
LAB_10473f948:
      func_0x000104740964(uVar21,uVar25,uVar24,uVar26,uVar19);
      return 0;
    }
  }
  else {
    if (uVar25 == 0) goto LAB_10473f7a0;
    if ((((uVar7 != uVar21) || (uVar22 != uVar25)) &&
        (uVar27 = uVar7,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,uVar22,uVar21,uVar25,0), (uVar27 & 1) == 0)) ||
       (((uVar11 != uVar24 || (uVar23 != uVar26)) &&
        (uVar27 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar23,uVar24,uVar26,0), (uVar27 & 1) == 0)))) {
      FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
      FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(uVar26);
      _swift_bridgeObjectRelease(uVar25);
      uVar21 = uVar7;
      uVar25 = uVar22;
      uVar24 = uVar11;
      uVar26 = uVar23;
      uVar19 = uVar10;
      goto LAB_10473f948;
    }
    uVar27 = uVar10;
    FUN_10470bfec(uVar10,uVar19);
    FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
    FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar25);
    func_0x000104740964(uVar7,uVar22,uVar11,uVar23,uVar10);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
  }
  uVar25 = param_1[0xb];
  uVar21 = param_1[10];
  uVar29 = param_1[0xd];
  uVar27 = param_1[0xc];
  uVar26 = param_1[0xf];
  uVar24 = param_1[0xe];
  uVar7 = param_1[0x10];
  uVar19 = param_2[0xb];
  uVar22 = param_2[10];
  uVar30 = param_2[0xd];
  uVar28 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar23 = param_2[0xe];
  uVar11 = param_2[0x10];
  uStack_120 = uVar22;
  uStack_118 = uVar19;
  uStack_110 = uVar28;
  uStack_108 = uVar30;
  uStack_100 = uVar23;
  uStack_f8 = uVar10;
  uStack_f0 = uVar11;
  uStack_e0 = uVar21;
  uStack_d8 = uVar25;
  uStack_d0 = uVar27;
  uStack_c8 = uVar29;
  uStack_c0 = uVar24;
  uStack_b8 = uVar26;
  uStack_b0 = uVar7;
  if (uVar7 == 1) {
    if (uVar11 == 1) {
      FUN_10473eec0(&uStack_e0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
      FUN_10473eec0(&uStack_120,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
      func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,1);
LAB_10473faa0:
      uVar25 = param_1[0x12];
      uVar21 = param_1[0x11];
      uVar29 = param_1[0x14];
      uVar27 = param_1[0x13];
      uVar26 = param_1[0x16];
      uVar24 = param_1[0x15];
      uVar7 = param_1[0x17];
      uVar19 = param_2[0x12];
      uVar22 = param_2[0x11];
      uVar30 = param_2[0x14];
      uVar28 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar23 = param_2[0x15];
      uVar11 = param_2[0x17];
      uStack_1a0 = uVar22;
      uStack_198 = uVar19;
      uStack_190 = uVar28;
      uStack_188 = uVar30;
      uStack_180 = uVar23;
      uStack_178 = uVar10;
      uStack_170 = uVar11;
      uStack_160 = uVar21;
      uStack_158 = uVar25;
      uStack_150 = uVar27;
      uStack_148 = uVar29;
      uStack_140 = uVar24;
      uStack_138 = uVar26;
      uStack_130 = uVar7;
      if (uVar7 == 1) {
        if (uVar11 == 1) {
          FUN_10473eec0(&uStack_160,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
          FUN_10473eec0(&uStack_1a0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
          func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,1);
LAB_10473fc98:
          uVar7 = param_2[0x1a];
          if (param_1[0x1a] == 0) {
            if (uVar7 != 0) {
              return 0;
            }
          }
          else {
            if (uVar7 == 0) {
              return 0;
            }
            if (param_1[0x18] != param_2[0x18]) {
              return 0;
            }
            uVar11 = param_1[0x19];
            if (((uVar11 != param_2[0x19]) || (param_1[0x1a] != uVar7)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar11 & 1) == 0)) {
              return 0;
            }
          }
          if ((int)param_1[0x1b] != (int)param_2[0x1b]) {
            return 0;
          }
          if ((int)param_1[0x1c] != (int)param_2[0x1c]) {
            return 0;
          }
          uVar7 = param_2[0x1e];
          if (param_1[0x1e] == 0) {
            if (uVar7 != 0) {
              return 0;
            }
            return 1;
          }
          if (uVar7 == 0) {
            return 0;
          }
          uVar11 = param_1[0x1d];
          if (((uVar11 != param_2[0x1d]) || (param_1[0x1e] != uVar7)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) == 0)) {
            return 0;
          }
          return 1;
        }
      }
      else if (uVar11 != 1) {
        uStack_2b0 = uVar22;
        uStack_2a8 = uVar19;
        uStack_2a0 = uVar28;
        uStack_298 = uVar30;
        uStack_290 = uVar23;
        uStack_288 = uVar10;
        uStack_280 = uVar11;
        uStack_a8 = uVar21;
        uStack_a0 = uVar25;
        uStack_98 = uVar27;
        uStack_90 = uVar29;
        uStack_88 = uVar24;
        uStack_80 = uVar26;
        uStack_78 = uVar7;
        FUN_10473eec0(&uStack_160,auStack_2e8,0x112db3e98,&UNK_10dd2ed10);
        FUN_10473eec0(&uStack_1a0,auStack_2e8,0x112db3e98,&UNK_10dd2ed10);
        puVar8 = &uStack_a8;
        FUN_104741990(puVar8,&uStack_2b0);
        func_0x0001015543ac(uVar22,uVar19,uVar28,uVar30,uVar23,uVar10,uVar11);
        func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,uVar7);
        if (((ulong)puVar8 & 1) == 0) {
          return 0;
        }
        goto LAB_10473fc98;
      }
      uStack_2b0 = uVar21;
      uStack_2a8 = uVar25;
      uStack_2a0 = uVar27;
      uStack_298 = uVar29;
      uStack_290 = uVar24;
      uStack_288 = uVar26;
      uStack_280 = uVar7;
      uStack_278 = uVar22;
      uStack_270 = uVar19;
      uStack_268 = uVar28;
      uStack_260 = uVar30;
      uStack_258 = uVar23;
      uStack_250 = uVar10;
      uStack_248 = uVar11;
      FUN_10473eec0(&uStack_160,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
      puVar9 = &uStack_1a0;
      puVar8 = &uStack_a8;
      goto LAB_10473fbc8;
    }
  }
  else if (uVar11 != 1) {
    uStack_238 = uVar21;
    uStack_230 = uVar25;
    uStack_228 = uVar27;
    uStack_220 = uVar29;
    uStack_218 = uVar24;
    uStack_210 = uVar26;
    uStack_208 = uVar7;
    uStack_1f0 = uVar22;
    uStack_1e8 = uVar19;
    uStack_1e0 = uVar28;
    uStack_1d8 = uVar30;
    uStack_1d0 = uVar23;
    uStack_1c8 = uVar10;
    uStack_1c0 = uVar11;
    FUN_10473eec0(&uStack_e0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
    FUN_10473eec0(&uStack_120,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
    puVar8 = &uStack_238;
    FUN_104741990(puVar8,&uStack_1f0);
    func_0x0001015543ac(uVar22,uVar19,uVar28,uVar30,uVar23,uVar10,uVar11);
    func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,uVar7);
    if (((ulong)puVar8 & 1) == 0) {
      return 0;
    }
    goto LAB_10473faa0;
  }
  uStack_2b0 = uVar21;
  uStack_2a8 = uVar25;
  uStack_2a0 = uVar27;
  uStack_298 = uVar29;
  uStack_290 = uVar24;
  uStack_288 = uVar26;
  uStack_280 = uVar7;
  uStack_278 = uVar22;
  uStack_270 = uVar19;
  uStack_268 = uVar28;
  uStack_260 = uVar30;
  uStack_258 = uVar23;
  uStack_250 = uVar10;
  uStack_248 = uVar11;
  FUN_10473eec0(&uStack_e0,&uStack_1f0,0x112db3e98,&UNK_10dd2ed10);
  puVar9 = &uStack_120;
  puVar8 = &uStack_1f0;
LAB_10473fbc8:
  FUN_10473eec0(puVar9,puVar8,0x112db3e98,&UNK_10dd2ed10);
  FUN_1046c2d24(&uStack_2b0);
  return 0;
}



/* Entry: 10473ef0c; end: 10473f247;  */

void FUN_10473ef0c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar7 = unaff_x20[2];
  lVar6 = *(long *)(lVar7 + 0x10);
  __ss6HasherV8_combineyySuF(lVar6);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x20);
    do {
      uStack_a8 = puVar8[1];
      uStack_b0 = *puVar8;
      uStack_98 = puVar8[3];
      uStack_a0 = puVar8[2];
      uStack_88 = puVar8[5];
      uStack_90 = puVar8[4];
      uStack_78 = puVar8[7];
      uStack_80 = puVar8[6];
      uStack_70 = puVar8[8];
      FUN_10473fd48(&uStack_b0,&uStack_f8);
      FUN_10473e52c(param_1);
      func_0x00010473fd84(&uStack_b0);
      puVar8 = puVar8 + 9;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[3],unaff_x20[4]);
  if (unaff_x20[6] == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_e8 = unaff_x20[7];
    uStack_f8 = unaff_x20[5];
    uStack_d8 = unaff_x20[9];
    uStack_e0 = unaff_x20[8];
    lStack_f0 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104740c9c(param_1);
  }
  lVar6 = unaff_x20[0x10];
  if (lVar6 == 1) {
LAB_10473f07c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[10];
    uVar2 = unaff_x20[0xb];
    lVar7 = unaff_x20[0xc];
    uVar3 = unaff_x20[0xd];
    lVar1 = unaff_x20[0xe];
    uVar4 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_10473f09c:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar5);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar7);
      }
      if (lVar1 == 0) goto LAB_10473f09c;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
    }
    if (lVar6 == 0) goto LAB_10473f07c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar6);
  }
  lVar6 = unaff_x20[0x17];
  if (lVar6 != 1) {
    uVar5 = unaff_x20[0x11];
    uVar2 = unaff_x20[0x12];
    lVar7 = unaff_x20[0x13];
    uVar3 = unaff_x20[0x14];
    lVar1 = unaff_x20[0x15];
    uVar4 = unaff_x20[0x16];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_10473f19c:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar5);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar7);
      }
      if (lVar1 == 0) goto LAB_10473f19c;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar6);
      lVar6 = unaff_x20[0x1a];
      goto joined_r0x00010473f15c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar6 = unaff_x20[0x1a];
joined_r0x00010473f15c:
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    uVar2 = unaff_x20[0x19];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x1b]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x1c]);
  lVar6 = unaff_x20[0x1e];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
  }
  return;
}



/* Entry: 10473f248; end: 10473f283;  */

void FUN_10473f248(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10473ef0c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473f284; end: 10473f287;  */

void FUN_10473f284(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar7 = unaff_x20[2];
  lVar6 = *(long *)(lVar7 + 0x10);
  __ss6HasherV8_combineyySuF(lVar6);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x20);
    do {
      uStack_a8 = puVar8[1];
      uStack_b0 = *puVar8;
      uStack_98 = puVar8[3];
      uStack_a0 = puVar8[2];
      uStack_88 = puVar8[5];
      uStack_90 = puVar8[4];
      uStack_78 = puVar8[7];
      uStack_80 = puVar8[6];
      uStack_70 = puVar8[8];
      FUN_10473fd48(&uStack_b0,&uStack_f8);
      FUN_10473e52c(param_1);
      func_0x00010473fd84(&uStack_b0);
      puVar8 = puVar8 + 9;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[3],unaff_x20[4]);
  if (unaff_x20[6] == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_e8 = unaff_x20[7];
    uStack_f8 = unaff_x20[5];
    uStack_d8 = unaff_x20[9];
    uStack_e0 = unaff_x20[8];
    lStack_f0 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104740c9c(param_1);
  }
  lVar6 = unaff_x20[0x10];
  if (lVar6 == 1) {
LAB_10473f07c:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[10];
    uVar2 = unaff_x20[0xb];
    lVar7 = unaff_x20[0xc];
    uVar3 = unaff_x20[0xd];
    lVar1 = unaff_x20[0xe];
    uVar4 = unaff_x20[0xf];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_10473f09c:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar5);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar7);
      }
      if (lVar1 == 0) goto LAB_10473f09c;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
    }
    if (lVar6 == 0) goto LAB_10473f07c;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar6);
  }
  lVar6 = unaff_x20[0x17];
  if (lVar6 != 1) {
    uVar5 = unaff_x20[0x11];
    uVar2 = unaff_x20[0x12];
    lVar7 = unaff_x20[0x13];
    uVar3 = unaff_x20[0x14];
    lVar1 = unaff_x20[0x15];
    uVar4 = unaff_x20[0x16];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar7 == 1) {
LAB_10473f19c:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar5);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar7);
      }
      if (lVar1 == 0) goto LAB_10473f19c;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,lVar1);
    }
    if (lVar6 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar6);
      lVar6 = unaff_x20[0x1a];
      goto joined_r0x00010473f15c;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar6 = unaff_x20[0x1a];
joined_r0x00010473f15c:
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x18];
    uVar2 = unaff_x20[0x19];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x1b]);
  __ss6HasherV8_combineyySuF(unaff_x20[0x1c]);
  lVar6 = unaff_x20[0x1e];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[0x1d];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar6);
  }
  return;
}



/* Entry: 10473f288; end: 10473f2bf;  */

void FUN_10473f288(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10473ef0c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473f2c0; end: 10473f37f;  */

uint FUN_10473f2c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_10473f380(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10473f380; end: 10473fd47;  */

undefined8 FUN_10473f380(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_2e8 [56];
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  
  uVar7 = *param_1;
  if ((uVar7 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[2];
  uVar11 = param_2[2];
  lVar12 = *(long *)(uVar7 + 0x10);
  if (lVar12 != *(long *)(uVar11 + 0x10)) {
    return 0;
  }
  if (lVar12 != 0 && uVar7 != uVar11) {
    lVar17 = 0;
    do {
      puVar8 = (ulong *)(uVar7 + 0x20 + lVar17 * 0x48);
      uStack_1e8 = puVar8[1];
      uStack_1f0 = *puVar8;
      uVar24 = puVar8[3];
      uVar21 = puVar8[2];
      uStack_1c8 = puVar8[5];
      uStack_1d0 = puVar8[4];
      uStack_1b8 = puVar8[7];
      uStack_1c0 = puVar8[6];
      uStack_1b0 = puVar8[8];
      puVar8 = (ulong *)(uVar11 + 0x20 + lVar17 * 0x48);
      uStack_288 = puVar8[5];
      uStack_290 = puVar8[4];
      uStack_278 = puVar8[7];
      uStack_280 = puVar8[6];
      uStack_270 = puVar8[8];
      uVar23 = puVar8[3];
      uVar22 = puVar8[2];
      uStack_2a8 = puVar8[1];
      uStack_2b0 = *puVar8;
      iVar5 = (int)uStack_1f0;
      iVar6 = (int)uStack_1e8;
      iVar3 = (int)uStack_2b0;
      iVar4 = (int)uStack_2a8;
      uStack_2a0 = uVar22;
      uStack_298 = uVar23;
      uStack_1e0 = uVar21;
      uStack_1d8 = uVar24;
      FUN_10473fd48(&uStack_1f0,&uStack_238);
      FUN_10473fd48(&uStack_2b0,&uStack_238);
      if ((iVar5 != iVar3) || (iVar6 != iVar4)) {
LAB_10473f960:
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
        return 0;
      }
      if (uVar24 == 0) {
        if (uVar23 != 0) goto LAB_10473f960;
      }
      else if ((uVar23 == 0) ||
              (((uVar21 != uVar22 || (uVar24 != uVar23)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar21,uVar24,uVar22,uVar23,0), (uVar21 & 1) == 0)))) goto LAB_10473f960;
      if ((char)uStack_1d0 != (char)uStack_290) goto LAB_10473f960;
      if (uStack_1c0 == 0) {
        if (uStack_280 != 0) goto LAB_10473f960;
      }
      else if ((uStack_280 == 0) ||
              (((uStack_1c8 != uStack_288 || (uStack_1c0 != uStack_280)) &&
               (uVar21 = uStack_1c8,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar21 & 1) == 0)))) goto LAB_10473f960;
      if (uStack_1b8 == 0) {
        if (uStack_278 != 0) goto LAB_10473f960;
      }
      else {
        if ((uStack_278 == 0) ||
           (lVar13 = *(long *)(uStack_1b8 + 0x10), lVar13 != *(long *)(uStack_278 + 0x10)))
        goto LAB_10473f960;
        if ((lVar13 != 0) && (uStack_1b8 != uStack_278)) {
          plVar14 = (long *)(uStack_278 + 0x28);
          plVar15 = (long *)(uStack_1b8 + 0x28);
          do {
            uVar21 = plVar15[-1];
            if ((uVar21 != plVar14[-1] || *plVar15 != *plVar14) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar21 & 1) == 0)) goto LAB_10473f960;
            plVar14 = plVar14 + 2;
            plVar15 = plVar15 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      uVar24 = uStack_1b0;
      uVar21 = uStack_270;
      if (uStack_1b0 == 0) {
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
        if (uVar21 != 0) {
          return 0;
        }
      }
      else {
        if ((uStack_270 == 0) ||
           (lVar13 = *(long *)(uStack_1b0 + 0x10), lVar13 != *(long *)(uStack_270 + 0x10)))
        goto LAB_10473f960;
        if (lVar13 != 0 && uStack_1b0 != uStack_270) {
          _swift_bridgeObjectRetain(uStack_270);
          _swift_bridgeObjectRetain(uVar24);
          lVar16 = 0;
          do {
            lVar1 = uVar24 + lVar16;
            uVar22 = *(ulong *)(lVar1 + 0x20);
            uVar18 = *(undefined8 *)(lVar1 + 0x30);
            lVar2 = uVar21 + lVar16;
            uVar20 = *(undefined8 *)(lVar2 + 0x30);
            if (((uVar22 != *(ulong *)(lVar2 + 0x20) ||
                  *(long *)(lVar1 + 0x28) != *(long *)(lVar2 + 0x28)) &&
                (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar22 & 1) == 0)) || ((int)uVar18 != (int)uVar20)) {
              _swift_bridgeObjectRelease(uVar24);
              _swift_bridgeObjectRelease(uVar21);
              goto LAB_10473f960;
            }
            lVar16 = lVar16 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_bridgeObjectRelease(uVar24);
          _swift_bridgeObjectRelease(uVar21);
        }
        func_0x00010473fd84(&uStack_2b0);
        func_0x00010473fd84(&uStack_1f0);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar12);
  }
  uVar7 = param_1[3];
  if (((uVar7 != param_2[3]) || (param_1[4] != param_2[4])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) == 0)) {
    return 0;
  }
  uVar7 = param_1[5];
  uVar22 = param_1[6];
  uVar11 = param_1[7];
  uVar23 = param_1[8];
  uVar10 = param_1[9];
  uVar21 = param_2[5];
  uVar25 = param_2[6];
  uVar24 = param_2[7];
  uVar26 = param_2[8];
  uVar19 = param_2[9];
  if (uVar22 == 0) {
    if (uVar25 != 0) {
LAB_10473f7a0:
      FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
      FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
      func_0x000104740964(uVar7,uVar22,uVar11,uVar23,uVar10);
LAB_10473f948:
      func_0x000104740964(uVar21,uVar25,uVar24,uVar26,uVar19);
      return 0;
    }
  }
  else {
    if (uVar25 == 0) goto LAB_10473f7a0;
    if ((((uVar7 != uVar21) || (uVar22 != uVar25)) &&
        (uVar27 = uVar7,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,uVar22,uVar21,uVar25,0), (uVar27 & 1) == 0)) ||
       (((uVar11 != uVar24 || (uVar23 != uVar26)) &&
        (uVar27 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar23,uVar24,uVar26,0), (uVar27 & 1) == 0)))) {
      FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
      FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(uVar26);
      _swift_bridgeObjectRelease(uVar25);
      uVar21 = uVar7;
      uVar25 = uVar22;
      uVar24 = uVar11;
      uVar26 = uVar23;
      uVar19 = uVar10;
      goto LAB_10473f948;
    }
    uVar27 = uVar10;
    FUN_10470bfec(uVar10,uVar19);
    FUN_104740928(uVar21,uVar25,uVar24,uVar26,uVar19);
    FUN_104740928(uVar7,uVar22,uVar11,uVar23,uVar10);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar25);
    func_0x000104740964(uVar7,uVar22,uVar11,uVar23,uVar10);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
  }
  uVar25 = param_1[0xb];
  uVar21 = param_1[10];
  uVar29 = param_1[0xd];
  uVar27 = param_1[0xc];
  uVar26 = param_1[0xf];
  uVar24 = param_1[0xe];
  uVar7 = param_1[0x10];
  uVar19 = param_2[0xb];
  uVar22 = param_2[10];
  uVar30 = param_2[0xd];
  uVar28 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar23 = param_2[0xe];
  uVar11 = param_2[0x10];
  uStack_120 = uVar22;
  uStack_118 = uVar19;
  uStack_110 = uVar28;
  uStack_108 = uVar30;
  uStack_100 = uVar23;
  uStack_f8 = uVar10;
  uStack_f0 = uVar11;
  uStack_e0 = uVar21;
  uStack_d8 = uVar25;
  uStack_d0 = uVar27;
  uStack_c8 = uVar29;
  uStack_c0 = uVar24;
  uStack_b8 = uVar26;
  uStack_b0 = uVar7;
  if (uVar7 == 1) {
    if (uVar11 == 1) {
      FUN_10473eec0(&uStack_e0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
      FUN_10473eec0(&uStack_120,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
      func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,1);
LAB_10473faa0:
      uVar25 = param_1[0x12];
      uVar21 = param_1[0x11];
      uVar29 = param_1[0x14];
      uVar27 = param_1[0x13];
      uVar26 = param_1[0x16];
      uVar24 = param_1[0x15];
      uVar7 = param_1[0x17];
      uVar19 = param_2[0x12];
      uVar22 = param_2[0x11];
      uVar30 = param_2[0x14];
      uVar28 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar23 = param_2[0x15];
      uVar11 = param_2[0x17];
      uStack_1a0 = uVar22;
      uStack_198 = uVar19;
      uStack_190 = uVar28;
      uStack_188 = uVar30;
      uStack_180 = uVar23;
      uStack_178 = uVar10;
      uStack_170 = uVar11;
      uStack_160 = uVar21;
      uStack_158 = uVar25;
      uStack_150 = uVar27;
      uStack_148 = uVar29;
      uStack_140 = uVar24;
      uStack_138 = uVar26;
      uStack_130 = uVar7;
      if (uVar7 == 1) {
        if (uVar11 == 1) {
          FUN_10473eec0(&uStack_160,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
          FUN_10473eec0(&uStack_1a0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
          func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,1);
LAB_10473fc98:
          uVar7 = param_2[0x1a];
          if (param_1[0x1a] == 0) {
            if (uVar7 != 0) {
              return 0;
            }
          }
          else {
            if (uVar7 == 0) {
              return 0;
            }
            if (param_1[0x18] != param_2[0x18]) {
              return 0;
            }
            uVar11 = param_1[0x19];
            if (((uVar11 != param_2[0x19]) || (param_1[0x1a] != uVar7)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar11 & 1) == 0)) {
              return 0;
            }
          }
          if ((int)param_1[0x1b] != (int)param_2[0x1b]) {
            return 0;
          }
          if ((int)param_1[0x1c] != (int)param_2[0x1c]) {
            return 0;
          }
          uVar7 = param_2[0x1e];
          if (param_1[0x1e] == 0) {
            if (uVar7 != 0) {
              return 0;
            }
            return 1;
          }
          if (uVar7 == 0) {
            return 0;
          }
          uVar11 = param_1[0x1d];
          if (((uVar11 != param_2[0x1d]) || (param_1[0x1e] != uVar7)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) == 0)) {
            return 0;
          }
          return 1;
        }
      }
      else if (uVar11 != 1) {
        uStack_2b0 = uVar22;
        uStack_2a8 = uVar19;
        uStack_2a0 = uVar28;
        uStack_298 = uVar30;
        uStack_290 = uVar23;
        uStack_288 = uVar10;
        uStack_280 = uVar11;
        uStack_a8 = uVar21;
        uStack_a0 = uVar25;
        uStack_98 = uVar27;
        uStack_90 = uVar29;
        uStack_88 = uVar24;
        uStack_80 = uVar26;
        uStack_78 = uVar7;
        FUN_10473eec0(&uStack_160,auStack_2e8,0x112db3e98,&UNK_10dd2ed10);
        FUN_10473eec0(&uStack_1a0,auStack_2e8,0x112db3e98,&UNK_10dd2ed10);
        puVar8 = &uStack_a8;
        FUN_104741990(puVar8,&uStack_2b0);
        func_0x0001015543ac(uVar22,uVar19,uVar28,uVar30,uVar23,uVar10,uVar11);
        func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,uVar7);
        if (((ulong)puVar8 & 1) == 0) {
          return 0;
        }
        goto LAB_10473fc98;
      }
      uStack_2b0 = uVar21;
      uStack_2a8 = uVar25;
      uStack_2a0 = uVar27;
      uStack_298 = uVar29;
      uStack_290 = uVar24;
      uStack_288 = uVar26;
      uStack_280 = uVar7;
      uStack_278 = uVar22;
      uStack_270 = uVar19;
      uStack_268 = uVar28;
      uStack_260 = uVar30;
      uStack_258 = uVar23;
      uStack_250 = uVar10;
      uStack_248 = uVar11;
      FUN_10473eec0(&uStack_160,&uStack_a8,0x112db3e98,&UNK_10dd2ed10);
      puVar9 = &uStack_1a0;
      puVar8 = &uStack_a8;
      goto LAB_10473fbc8;
    }
  }
  else if (uVar11 != 1) {
    uStack_238 = uVar21;
    uStack_230 = uVar25;
    uStack_228 = uVar27;
    uStack_220 = uVar29;
    uStack_218 = uVar24;
    uStack_210 = uVar26;
    uStack_208 = uVar7;
    uStack_1f0 = uVar22;
    uStack_1e8 = uVar19;
    uStack_1e0 = uVar28;
    uStack_1d8 = uVar30;
    uStack_1d0 = uVar23;
    uStack_1c8 = uVar10;
    uStack_1c0 = uVar11;
    FUN_10473eec0(&uStack_e0,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
    FUN_10473eec0(&uStack_120,&uStack_2b0,0x112db3e98,&UNK_10dd2ed10);
    puVar8 = &uStack_238;
    FUN_104741990(puVar8,&uStack_1f0);
    func_0x0001015543ac(uVar22,uVar19,uVar28,uVar30,uVar23,uVar10,uVar11);
    func_0x0001015543ac(uVar21,uVar25,uVar27,uVar29,uVar24,uVar26,uVar7);
    if (((ulong)puVar8 & 1) == 0) {
      return 0;
    }
    goto LAB_10473faa0;
  }
  uStack_2b0 = uVar21;
  uStack_2a8 = uVar25;
  uStack_2a0 = uVar27;
  uStack_298 = uVar29;
  uStack_290 = uVar24;
  uStack_288 = uVar26;
  uStack_280 = uVar7;
  uStack_278 = uVar22;
  uStack_270 = uVar19;
  uStack_268 = uVar28;
  uStack_260 = uVar30;
  uStack_258 = uVar23;
  uStack_250 = uVar10;
  uStack_248 = uVar11;
  FUN_10473eec0(&uStack_e0,&uStack_1f0,0x112db3e98,&UNK_10dd2ed10);
  puVar9 = &uStack_120;
  puVar8 = &uStack_1f0;
LAB_10473fbc8:
  FUN_10473eec0(puVar9,puVar8,0x112db3e98,&UNK_10dd2ed10);
  FUN_1046c2d24(&uStack_2b0);
  return 0;
}



/* Entry: 10473fd48; end: 10473fdb7;  */

undefined8 FUN_10473fd48(undefined8 param_1,undefined8 param_2)

{
  FUN_10473e9ac(param_2,param_1);
  return param_2;
}



/* Entry: 10473fdb8; end: 10473fdbb;  */

void FUN_10473fdb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd321d0;
  _swift_getWitnessTable(&UNK_10dd321d0,&UNK_11079e440);
  puRam000000011308e488 = puVar1;
  return;
}



/* Entry: 10473fdbc; end: 10473fdfb;  */

void FUN_10473fdbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd321d0;
  _swift_getWitnessTable(&UNK_10dd321d0,&UNK_11079e440);
  puRam000000011308e488 = puVar1;
  return;
}



/* Entry: 10473fdfc; end: 10473fedb;  */

long FUN_10473fdfc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473fedc; end: 1047400bb;  */

undefined8 * FUN_10473fedc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  lVar2 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar2 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[9] = param_2[9];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[8] = uVar4;
    uVar3 = param_2[9];
    param_1[9] = uVar3;
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar3);
  }
  lVar2 = param_2[0x10];
  if (lVar2 == 1) {
    uVar4 = param_2[10];
    uVar5 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar3;
    uVar4 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0x10] = param_2[0x10];
  }
  else {
    lVar1 = param_2[0xc];
    if (lVar1 == 1) {
      uVar4 = param_2[10];
      uVar5 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar3;
      param_1[0xe] = param_2[0xe];
    }
    else {
      uVar4 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xe];
      param_1[0xc] = lVar1;
      param_1[0xd] = uVar4;
      param_1[0xe] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  lVar2 = param_2[0x17];
  if (lVar2 == 1) {
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x17] = param_2[0x17];
  }
  else {
    lVar1 = param_2[0x13];
    if (lVar1 == 1) {
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      param_1[0x15] = param_2[0x15];
    }
    else {
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
      uVar4 = param_2[0x14];
      uVar3 = param_2[0x15];
      param_1[0x13] = lVar1;
      param_1[0x14] = uVar4;
      param_1[0x15] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  uVar4 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar4;
  param_1[0x1a] = param_2[0x1a];
  uVar4 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar4;
  uVar4 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 1047400bc; end: 104740853;  */

undefined8 * FUN_1047400bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_1[6];
  if (lVar2 == 0) {
    if (param_2[6] == 0) {
      uVar3 = param_2[6];
      uVar1 = param_2[5];
      uVar5 = param_2[8];
      uVar4 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar1;
    }
    else {
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar1 = param_2[8];
      param_1[8] = uVar1;
      uVar3 = param_2[9];
      param_1[9] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (param_2[6] == 0) {
    func_0x0001017b6844(param_1 + 5);
    uVar1 = param_2[9];
    uVar4 = param_2[8];
    uVar3 = param_2[7];
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[8] = uVar4;
    param_1[7] = uVar3;
    param_1[9] = uVar1;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[7] = param_2[7];
    uVar1 = param_1[8];
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  if (param_1[0x10] == 1) {
    if (param_2[0x10] == 1) {
      uVar3 = param_2[0xb];
      uVar1 = param_2[10];
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      uVar7 = param_2[0xf];
      uVar6 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      param_1[0xb] = uVar3;
      param_1[10] = uVar1;
    }
    else {
      if (param_2[0xc] == 1) {
        uVar3 = param_2[0xb];
        uVar1 = param_2[10];
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xb] = uVar3;
        param_1[10] = uVar1;
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
      }
      else {
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        uVar1 = param_2[0xe];
        param_1[0xe] = uVar1;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar1);
      }
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x10] == 1) {
    func_0x0001017b64d0(param_1 + 10);
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xf];
    uVar1 = param_2[0xe];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    param_1[0xf] = uVar3;
    param_1[0xe] = uVar1;
    param_1[0xb] = uVar7;
    param_1[10] = uVar6;
  }
  else {
    lVar2 = param_1[0xc];
    if (lVar2 == 1) {
      if (param_2[0xc] == 1) {
        uVar3 = param_2[0xb];
        uVar1 = param_2[10];
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xb] = uVar3;
        param_1[10] = uVar1;
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
      }
      else {
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        uVar1 = param_2[0xe];
        param_1[0xe] = uVar1;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar1);
      }
    }
    else if (param_2[0xc] == 1) {
      func_0x0001017b649c(param_1 + 10);
      uVar1 = param_2[0xe];
      uVar5 = param_2[10];
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
      param_1[0xe] = uVar1;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar2);
      param_1[0xd] = param_2[0xd];
      uVar1 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
    }
    param_1[0xf] = param_2[0xf];
    uVar1 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  if (param_1[0x17] == 1) {
    if (param_2[0x17] == 1) {
      uVar3 = param_2[0x12];
      uVar1 = param_2[0x11];
      uVar5 = param_2[0x14];
      uVar4 = param_2[0x13];
      uVar7 = param_2[0x16];
      uVar6 = param_2[0x15];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar7;
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar5;
      param_1[0x13] = uVar4;
      param_1[0x12] = uVar3;
      param_1[0x11] = uVar1;
    }
    else {
      if (param_2[0x13] == 1) {
        uVar3 = param_2[0x12];
        uVar1 = param_2[0x11];
        uVar5 = param_2[0x14];
        uVar4 = param_2[0x13];
        param_1[0x15] = param_2[0x15];
        param_1[0x14] = uVar5;
        param_1[0x13] = uVar4;
        param_1[0x12] = uVar3;
        param_1[0x11] = uVar1;
      }
      else {
        param_1[0x11] = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        uVar1 = param_2[0x15];
        param_1[0x15] = uVar1;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar1);
      }
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x17] == 1) {
    func_0x0001017b64d0(param_1 + 0x11);
    uVar4 = param_2[0x14];
    uVar3 = param_2[0x13];
    uVar6 = param_2[0x16];
    uVar5 = param_2[0x15];
    uVar1 = param_2[0x17];
    uVar7 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar7;
    param_1[0x17] = uVar1;
    param_1[0x16] = uVar6;
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar4;
    param_1[0x13] = uVar3;
  }
  else {
    lVar2 = param_1[0x13];
    if (lVar2 == 1) {
      if (param_2[0x13] == 1) {
        uVar3 = param_2[0x12];
        uVar1 = param_2[0x11];
        uVar5 = param_2[0x14];
        uVar4 = param_2[0x13];
        param_1[0x15] = param_2[0x15];
        param_1[0x14] = uVar5;
        param_1[0x13] = uVar4;
        param_1[0x12] = uVar3;
        param_1[0x11] = uVar1;
      }
      else {
        param_1[0x11] = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        uVar1 = param_2[0x15];
        param_1[0x15] = uVar1;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar1);
      }
    }
    else if (param_2[0x13] == 1) {
      func_0x0001017b649c(param_1 + 0x11);
      uVar1 = param_2[0x15];
      uVar4 = param_2[0x14];
      uVar3 = param_2[0x13];
      uVar5 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar5;
      param_1[0x14] = uVar4;
      param_1[0x13] = uVar3;
      param_1[0x15] = uVar1;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar2);
      param_1[0x14] = param_2[0x14];
      uVar1 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
    }
    param_1[0x16] = param_2[0x16];
    uVar1 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  uVar1 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104740854; end: 104740927;  */

int FUN_104740854(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x3e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104740928; end: 10474099f;  */

void FUN_104740928(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
    return;
  }
  return;
}



/* Entry: 1047409a0; end: 1047409ff;  */

void FUN_1047409a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104740a00; end: 104740a33;  */

void FUN_104740a00(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  return;
}



/* Entry: 104740a34; end: 104740a8f;  */

void FUN_104740a34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104740a90; end: 104740a93;  */

void FUN_104740a90(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32260;
  _swift_getWitnessTable(&UNK_10dd32260,&UNK_11079e518);
  puRam000000011308e490 = puVar1;
  return;
}



/* Entry: 104740a94; end: 104740ad3;  */

void FUN_104740a94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32260;
  _swift_getWitnessTable(&UNK_10dd32260,&UNK_11079e518);
  puRam000000011308e490 = puVar1;
  return;
}



/* Entry: 104740ad4; end: 104740b2f;  */

byte FUN_104740ad4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 104740b30; end: 104740b37;  */

void FUN_104740b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104740b38; end: 104740b6b;  */

undefined8 * FUN_104740b38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104740b6c; end: 104740bbf;  */

undefined8 * FUN_104740b6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 104740bc0; end: 104740bfb;  */

undefined8 * FUN_104740bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 104740bfc; end: 104740c9b;  */

int FUN_104740bfc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104740c9c; end: 104740d33;  */

void FUN_104740c9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar5 = unaff_x20[4];
  lVar4 = *(long *)(lVar5 + 0x10);
  __ss6HasherV8_combineyySuF(lVar4);
  if (lVar4 != 0) {
    puVar6 = (undefined1 *)(lVar5 + 0x30);
    do {
      uVar1 = *(undefined8 *)(puVar6 + -0x10);
      uVar2 = *(undefined8 *)(puVar6 + -8);
      uVar3 = *puVar6;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      __ss6HasherV8_combineyys5UInt8VF(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 0x18;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 104740d34; end: 104740d6f;  */

void FUN_104740d34(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104740c9c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104740d70; end: 104740d73;  */

void FUN_104740d70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar5 = unaff_x20[4];
  lVar4 = *(long *)(lVar5 + 0x10);
  __ss6HasherV8_combineyySuF(lVar4);
  if (lVar4 != 0) {
    puVar6 = (undefined1 *)(lVar5 + 0x30);
    do {
      uVar1 = *(undefined8 *)(puVar6 + -0x10);
      uVar2 = *(undefined8 *)(puVar6 + -8);
      uVar3 = *puVar6;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      __ss6HasherV8_combineyys5UInt8VF(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 0x18;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 104740d74; end: 104740dab;  */

void FUN_104740d74(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104740c9c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104740dac; end: 104740df3;  */

uint FUN_104740dac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104740df4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104740df4; end: 104740e6f;  */

undefined8 FUN_104740df4(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar4 = *param_1;
  if (((uVar4 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar4 & 1) == 0)) ||
     ((uVar4 = param_1[2], uVar4 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar4 & 1) == 0)))) {
    return 0;
  }
  uVar4 = param_1[4];
  uVar5 = param_2[4];
  lVar6 = *(long *)(uVar4 + 0x10);
  if (lVar6 == *(long *)(uVar5 + 0x10)) {
    if ((lVar6 != 0) && (uVar4 != uVar5)) {
      pbVar7 = (byte *)(uVar5 + 0x30);
      pbVar8 = (byte *)(uVar4 + 0x30);
      do {
        uVar4 = *(ulong *)(pbVar8 + -0x10);
        bVar1 = *pbVar8;
        bVar2 = *pbVar7;
        if (uVar4 == *(ulong *)(pbVar7 + -0x10) && *(long *)(pbVar8 + -8) == *(long *)(pbVar7 + -8))
        {
          if (bVar1 != bVar2) goto LAB_10470c07c;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if (((bVar1 ^ bVar2) & 1) != 0) {
            return 0;
          }
        }
        pbVar7 = pbVar7 + 0x18;
        pbVar8 = pbVar8 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = 1;
  }
  else {
LAB_10470c07c:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 104740e70; end: 104740e73;  */

void FUN_104740e70(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32300;
  _swift_getWitnessTable(&UNK_10dd32300,&UNK_11079e5d0);
  puRam000000011308e498 = puVar1;
  return;
}



/* Entry: 104740e74; end: 104740eb3;  */

void FUN_104740e74(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd32300;
  _swift_getWitnessTable(&UNK_10dd32300,&UNK_11079e5d0);
  puRam000000011308e498 = puVar1;
  return;
}



/* Entry: 104740eb4; end: 104740f0f;  */

long FUN_104740eb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104740f10; end: 104740fe7;  */

undefined8 * FUN_104740f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104740fe8; end: 10474103b;  */

undefined8 * FUN_104740fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10474103c; end: 1047410db;  */

int FUN_10474103c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047410dc; end: 10474113b;  */

void FUN_1047410dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10474113c; end: 10474116f;  */

void FUN_10474113c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = unaff_x20[2];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 104741170; end: 1047411cb;  */

void FUN_104741170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047411cc; end: 1047411e7;  */

bool FUN_1047411cc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar3 = param_2[2];
  if (((uVar1 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_1[1],*param_2,param_2[1],0), (uVar1 & 1) == 0)) {
    return false;
  }
  return (int)uVar2 == (int)uVar3;
}



/* Entry: 1047411e8; end: 10474123b;  */

bool FUN_1047411e8(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_6;
}



/* Entry: 10474123c; end: 10474123f;  */

void FUN_10474123c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd323a0;
  _swift_getWitnessTable(&UNK_10dd323a0,&UNK_11079e690);
  puRam000000011308e4a0 = puVar1;
  return;
}



/* Entry: 104741240; end: 10474127f;  */

void FUN_104741240(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd323a0;
  _swift_getWitnessTable(&UNK_10dd323a0,&UNK_11079e690);
  puRam000000011308e4a0 = puVar1;
  return;
}



/* Entry: 104741280; end: 104741287;  */

void FUN_104741280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104741288; end: 1047412bb;  */

undefined8 * FUN_104741288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047412bc; end: 10474130f;  */

undefined8 * FUN_1047412bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104741310; end: 10474134b;  */

undefined8 * FUN_104741310(undefined8 *param_1,undefined8 *param_2)

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


