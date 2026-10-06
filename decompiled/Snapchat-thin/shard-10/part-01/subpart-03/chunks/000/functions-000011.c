/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078718b0; end: 1078718ff;  */

bool FUN_1078718b0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  do {
    lVar4 = lVar2;
    if (lVar4 == lVar1) break;
    uVar3 = param_1;
    func_0x000107871848(param_1,lVar4,param_3);
    lVar2 = lVar4 + 0x18;
  } while ((int)uVar3 == 0);
  return lVar4 != lVar1;
}



/* Entry: 107871cdc; end: 107872513;  */

void FUN_107871cdc(float param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  long ****pppplVar3;
  uint uVar4;
  long ****pppplVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  long *plVar13;
  long *****ppppplVar14;
  int extraout_w8;
  uint uVar15;
  int extraout_w8_00;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  long extraout_x9;
  long extraout_x9_00;
  undefined1 (*pauVar19) [12];
  ulong uVar20;
  long ****pppplVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  float fStack_cc;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long lStack_b8;
  float afStack_ac [3];
  
  pauVar1 = (undefined1 (*) [12])(param_6 + 0x27c29);
  pauVar12 = (undefined1 (*) [16])(param_6 + 0x101);
  dVar34 = (double)NEON_fminnm((double)(float)(int)(param_1 * 270.0),0x407e000000000000);
  *(float *)((long)param_6 + 0x23c33c) = (float)dVar34;
  if ((*(byte *)(param_6 + 6) & 1) == 0) {
    *(undefined1 *)(param_6 + 6) = 1;
    plVar13 = param_6 + 0x37a39;
    for (uVar17 = 0; uVar17 != 0x1e0; uVar17 = uVar17 + 1) {
      fVar32 = (float)(uVar17 & 0xffffffff) * 0.004166667 + -1.0 + 0.0020833334;
      for (uVar20 = 0; uVar20 != 0x10e; uVar20 = uVar20 + 1) {
        fVar35 = (float)(uVar20 & 0xffffffff) * 0.0074074073 + -1.0 + 0.0037037036;
        *(float *)((long)plVar13 + uVar20 * 4) =
             1.0 - (ABS(fVar32 * fVar32 * fVar32) * 0.5 + ABS(fVar35 * fVar35 * fVar35) * 0.5);
      }
      plVar13 = plVar13 + 0x87;
    }
    for (lVar27 = 0; lVar27 != 0x7d4; lVar27 = lVar27 + 4) {
      *(undefined4 *)((long)param_6 + lVar27 + 0x34) = 0xbf800000;
    }
  }
  fVar32 = (float)func_0x0001078732d4();
  fVar32 = (float)NEON_fminnm(param_3 * (fVar32 * 2.0 + 1.0),0x433b0000);
  if (fVar32 <= 1.0) {
    fVar32 = 1.0;
  }
  uVar24 = (uint)fVar32;
  func_0x00010787325c(pauVar12);
  func_0x00010787325c(pauVar1);
  lVar27 = 0;
  for (lVar29 = param_6[1] - *param_6 >> 4; lVar29 != 0; lVar29 = lVar29 + -1) {
    lVar16 = *param_6;
    plVar13 = param_6;
    func_0x000107872514(param_6,uVar24 << 1);
    if (plVar13 != (long *)0x0) {
      func_0x00010787262c(*(undefined4 *)((long)param_6 + 0x23c33c),*(undefined4 *)(lVar16 + lVar27)
                         );
    }
    lVar27 = lVar27 + 0x10;
  }
  uVar25 = (uint)(*(float *)((long)param_6 + 0x23c33c) * 270.0);
  lVar31 = 0x1bd1c8;
  lVar23 = (long)(int)uVar25;
  lVar29 = 0x808;
  lVar16 = 0x1bd1c8;
  for (lVar27 = 0; lVar27 < lVar23; lVar27 = lVar27 + 4) {
    uVar9 = ((undefined8 *)((long)param_6 + lVar29))[1];
    fVar33 = (float)uVar9;
    fVar36 = (float)((ulong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)((long)param_6 + lVar29);
    fVar32 = (float)uVar9;
    fVar35 = (float)((ulong)uVar9 >> 0x20);
    auVar37 = *(undefined1 (*) [16])((long)param_6 + lVar16);
    auVar38._0_4_ = fVar32 + 1.1754944e-38;
    auVar38._4_4_ = fVar35 + 1.1754944e-38;
    auVar38._8_4_ = fVar33 + 1.1754944e-38;
    auVar38._12_4_ = fVar36 + 1.1754944e-38;
    auVar38 = NEON_frsqrte(auVar38,4);
    ((undefined8 *)((long)param_6 + lVar29))[1] =
         CONCAT44(auVar37._12_4_ * fVar36 * auVar38._12_4_,auVar37._8_4_ * fVar33 * auVar38._8_4_);
    *(undefined8 *)((long)param_6 + lVar29) =
         CONCAT44(auVar37._4_4_ * fVar35 * auVar38._4_4_,auVar37._0_4_ * fVar32 * auVar38._0_4_);
    lVar29 = lVar29 + 0x10;
    lVar16 = lVar16 + 0x10;
  }
  param_4 = param_4 * 255.0;
  func_0x00010787271c(pauVar12,afStack_ac,uVar25);
  fVar32 = *(float *)(param_6 + 0x47867);
  if (*(float *)(param_6 + 0x47867) <= afStack_ac[0]) {
    fVar32 = afStack_ac[0];
  }
  *(undefined1 *)((long)param_6 + 0x23c344) = 0;
  if ((*(byte *)(param_6 + 0x47849) & 1) == 0) {
    for (lVar27 = 0; (int)lVar27 != 0x60; lVar27 = lVar27 + 4) {
      *(float *)((long)param_6 + lVar27 + 0x23c24c) = param_4;
    }
    dVar34 = (double)(param_4 * 24.0);
    param_6[0x47856] = (long)dVar34;
    *(byte *)(param_6 + 0x47849) = 1;
  }
  else {
    func_0x000107873398((int)param_6[0x47857]);
    dVar34 = (double)param_6[0x47856] + (double)(fVar32 - *(float *)(extraout_x9 + 0x23c24c));
    param_6[0x47856] = (long)dVar34;
    *(float *)(extraout_x9 + 0x23c24c) = fVar32;
    *(int *)(param_6 + 0x47857) = extraout_w8 + 1;
  }
  fVar33 = (float)(dVar34 / 24.0);
  *(float *)(param_6 + 0x47868) = fVar33;
  fVar35 = param_4 / fVar33;
  if (fVar33 <= 1.0) {
    fVar35 = param_4;
  }
  func_0x000107872788(fVar35,param_4,pauVar12,pauVar12,uVar25);
  lVar27 = 0;
  *(bool *)((long)param_6 + 0x23c344) = ABS(*(float *)(param_6 + 0x47868) - fVar32) < 0.0001;
  lStack_b8 = 0;
  pppplStack_c8 = (long ****)&pppplStack_c8;
  pppplStack_c0 = (long ****)&pppplStack_c8;
  for (lVar29 = param_6[4] - param_6[3] >> 4; lVar29 != 0; lVar29 = lVar29 + -1) {
    lVar16 = param_6[3];
    pppplVar3 = (long ****)(lVar16 + lVar27);
    uVar39 = *(undefined4 *)(pppplVar3 + 1);
    uVar15 = uVar24;
    if ((*(float *)((long)pppplVar3 + 0xc) < param_2) &&
       (0.0001 <= *(float *)((long)pppplVar3 + 0xc))) {
      fVar32 = (float)func_0x0001078732d4();
      dVar34 = (double)func_0x000107873324();
      uVar15 = (uint)(param_3 * (fVar32 * 2.0 + 1.0) * (float)dVar34);
    }
    if ((int)uVar15 < 300) {
      uVar4 = uVar15 & 0x7ffffffc;
      if ((int)uVar15 < 0xbc) {
        uVar4 = uVar15;
      }
      plVar13 = param_6;
      func_0x000107872514(uVar39,param_6,uVar4 << 1);
      if (plVar13 != (long *)0x0) {
        func_0x00010787262c(*(undefined4 *)((long)param_6 + 0x23c33c),
                            *(undefined4 *)(lVar16 + lVar27));
      }
    }
    else {
      ppppplVar14 = (long *****)0x18;
      __Znwm();
      ppppplVar14[1] = (long ****)&pppplStack_c8;
      ppppplVar14[2] = pppplVar3;
      *ppppplVar14 = pppplStack_c8;
      pppplStack_c8[1] = (long ***)ppppplVar14;
      lStack_b8 = lStack_b8 + 1;
      pppplStack_c8 = (long ****)ppppplVar14;
    }
    lVar27 = lVar27 + 0x10;
  }
  lVar16 = (long)(int)(uVar25 & 0xfffffffc);
  lVar27 = 0x13e148;
  for (lVar29 = 0; lVar29 < lVar16; lVar29 = lVar29 + 4) {
    pfVar6 = (float *)((long)param_6 + lVar27);
    fVar32 = *pfVar6;
    fVar35 = pfVar6[1];
    uVar10 = ((undefined8 *)((long)param_6 + lVar31))[1];
    uVar9 = *(undefined8 *)((long)param_6 + lVar31);
    pfVar7 = (float *)((long)param_6 + lVar27);
    pfVar7[2] = pfVar6[2] * (float)uVar10;
    pfVar7[3] = pfVar6[3] * (float)((ulong)uVar10 >> 0x20);
    *pfVar7 = fVar32 * (float)uVar9;
    pfVar7[1] = fVar35 * (float)((ulong)uVar9 >> 0x20);
    lVar27 = lVar27 + 0x10;
    lVar31 = lVar31 + 0x10;
  }
  for (; lVar29 < lVar23; lVar29 = lVar29 + 1) {
    *(float *)((long)*pauVar1 + lVar29 * 4) =
         *(float *)((long)*pauVar1 + lVar29 * 4) * *(float *)((long)param_6 + lVar29 * 4 + 0x1bd1c8)
    ;
  }
  plVar13 = param_6 + 0xff11;
  while (lStack_b8 != 0) {
    pppplVar3 = (long ****)pppplStack_c0[1];
    pppplVar5 = (long ****)pppplStack_c0[2];
    pppplVar21 = (long ****)*pppplStack_c0;
    pppplVar21[1] = (long ***)pppplVar3;
    *pppplVar3 = (long ***)pppplVar21;
    lStack_b8 = lStack_b8 + -1;
    __ZdlPv();
    fVar32 = (float)func_0x0001078732d4();
    dVar34 = (double)func_0x000107873324();
    iVar26 = (int)(param_3 * (fVar32 * 2.0 + 1.0) * (float)dVar34);
    iVar28 = (int)(*(float *)pppplVar5 * 270.0);
    fVar32 = *(float *)((long)param_6 + 0x23c33c);
    iVar30 = (int)(*(float *)((long)pppplVar5 + 4) * fVar32);
    iVar2 = iVar26 + iVar30;
    if (((0 < iVar26 + iVar28) && (iVar28 - iVar26 < 0x10f && 0 < iVar2)) &&
       (uVar24 = iVar30 - iVar26, (float)(int)uVar24 <= fVar32)) {
      uVar39 = *(undefined4 *)(pppplVar5 + 1);
      func_0x00010787325c(plVar13);
      func_0x0001078727ec(uVar39,param_6,plVar13,iVar28,iVar30,iVar26,0x10e,(int)fVar32);
      uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
      if ((int)*(float *)((long)param_6 + 0x23c33c) <= iVar2) {
        iVar2 = (int)*(float *)((long)param_6 + 0x23c33c);
      }
      uVar17 = (ulong)(uVar24 * 0x10e);
      lVar27 = (long)*pauVar1 + uVar17 * 4;
      func_0x0001078729ec(lVar27,(long)plVar13 + uVar17 * 4,lVar27,(iVar2 - uVar24) * 0x10e);
    }
  }
  pauVar19 = pauVar1;
  for (lVar27 = 0; lVar27 < lVar16; lVar27 = lVar27 + 4) {
    fVar33 = (float)*(long *)((long)*pauVar19 + 8);
    fVar36 = (float)((ulong)*(long *)((long)*pauVar19 + 8) >> 0x20);
    fVar32 = (float)*(long *)*pauVar19;
    fVar35 = (float)((ulong)*(long *)*pauVar19 >> 0x20);
    auVar37._0_4_ = fVar32 + 1.1754944e-38;
    auVar37._4_4_ = fVar35 + 1.1754944e-38;
    auVar37._8_4_ = fVar33 + 1.1754944e-38;
    auVar37._12_4_ = fVar36 + 1.1754944e-38;
    auVar37 = NEON_frsqrte(auVar37,4);
    *(long *)((long)*pauVar19 + 8) = CONCAT44(fVar36 * auVar37._12_4_,fVar33 * auVar37._8_4_);
    *(long *)*pauVar19 = CONCAT44(fVar35 * auVar37._4_4_,fVar32 * auVar37._0_4_);
    pauVar19 = (undefined1 (*) [12])(pauVar19[1] + 4);
  }
  for (; lVar27 < lVar23; lVar27 = lVar27 + 1) {
    *(float *)((long)*pauVar1 + lVar27 * 4) = SQRT(*(float *)((long)*pauVar1 + lVar27 * 4));
  }
  func_0x00010787271c(pauVar1,&fStack_cc,uVar25);
  fVar32 = *(float *)(param_6 + 0x47867);
  if (*(float *)(param_6 + 0x47867) <= fStack_cc) {
    fVar32 = fStack_cc;
  }
  if ((*(byte *)(param_6 + 0x47858) & 1) == 0) {
    for (lVar27 = 0; (int)lVar27 != 0x60; lVar27 = lVar27 + 4) {
      *(float *)((long)param_6 + lVar27 + 0x23c2c4) = param_5 * 255.0;
    }
    dVar34 = (double)(param_5 * 255.0 * 24.0);
    param_6[0x47865] = (long)dVar34;
    *(undefined1 *)(param_6 + 0x47858) = 1;
  }
  else {
    func_0x000107873398((int)param_6[0x47866]);
    dVar34 = (double)param_6[0x47865] + (double)(fVar32 - *(float *)(extraout_x9_00 + 0x23c2c4));
    param_6[0x47865] = (long)dVar34;
    *(float *)(extraout_x9_00 + 0x23c2c4) = fVar32;
    *(int *)(param_6 + 0x47866) = extraout_w8_00 + 1;
  }
  *(float *)((long)param_6 + 0x23c2bc) = (float)(dVar34 / 24.0);
  func_0x000107872788(pauVar1,pauVar1,uVar25);
  if (*(char *)((long)param_6 + 0x23c344) == '\x01') {
    bVar18 = ABS(*(float *)((long)param_6 + 0x23c2bc) - fVar32) < 0.0001;
  }
  else {
    bVar18 = false;
  }
  *(bool *)((long)param_6 + 0x23c344) = bVar18;
  pauVar19 = pauVar1;
  pauVar22 = pauVar12;
  for (lVar27 = 0; lVar27 < lVar16; lVar27 = lVar27 + 4) {
    auVar8._12_4_ = (int)((ulong)*(long *)((long)*pauVar19 + 8) >> 0x20);
    auVar8._0_12_ = *pauVar19;
    auVar37 = NEON_fmax(*pauVar22,auVar8,4);
    *(long *)((long)*pauVar22 + 8) = auVar37._8_8_;
    *(long *)*pauVar22 = auVar37._0_8_;
    pauVar19 = (undefined1 (*) [12])(pauVar19[1] + 4);
    pauVar22 = pauVar22 + 1;
  }
  for (; lVar27 < lVar23; lVar27 = lVar27 + 1) {
    fVar32 = *(float *)((long)*pauVar12 + lVar27 * 4);
    fVar35 = *(float *)((long)*pauVar1 + lVar27 * 4);
    if (fVar32 <= fVar35) {
      fVar32 = fVar35;
    }
    *(float *)((long)*pauVar12 + lVar27 * 4) = fVar32;
  }
  if (*(float *)((long)param_6 + 0x23c33c) != 480.0) {
    uVar25 = ((int)uVar25 / 4) * 4 + 4;
  }
  puVar11 = (undefined1 *)((long)param_6 + 0xfe909);
  for (uVar17 = (ulong)(uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
      uVar17 = uVar17 - 1) {
    fVar35 = *(float *)*pauVar12;
    puVar11[-1] = 0;
    fVar32 = 255.0;
    if (fVar35 < 255.0) {
      fVar32 = fVar35;
    }
    *puVar11 = (char)(int)fVar32;
    puVar11 = puVar11 + 2;
    pauVar12 = (undefined1 (*) [16])((long)*pauVar12 + 4);
  }
  func_0x000107872d48(&pppplStack_c8);
  return;
}



/* Entry: 107872b64; end: 107872bab;  */

undefined8 * FUN_107872b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x0001078732dc();
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000107872da0();
      func_0x0001078732b0();
      func_0x000107873268();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar2 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar2;
        puVar1 = puVar1 + 2;
      }
      else {
        puVar1 = param_1;
        func_0x000107872e94();
      }
      param_1[1] = puVar1;
      return puVar1 + -2;
    }
    func_0x00010787330c();
    func_0x000107872dcc();
    func_0x000107873360();
    func_0x0001078732b0();
  }
  return param_1;
}



/* Entry: 107872dac; end: 107872dcb;  */

void FUN_107872dac(void)

{
  func_0x000107873218();
  func_0x0001078731b0();
  return;
}



/* Entry: 107872f30; end: 107872f8b;  */

void FUN_107872f30(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107872f68(param_4);
  }
  func_0x0001078732f4();
  return;
}



/* Entry: 1078730cc; end: 1078730e3;  */

void FUN_1078730cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107873100(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10787386c; end: 107873927;  */

undefined1  [16] FUN_10787386c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107873b8c();
    lVar1 = param_1;
    func_0x00010789a00c();
    param_2 = lVar1 + (int)param_1;
  }
  else {
    if (*(char *)(param_2 + 0x18) != '\x01') {
      param_2 = 0;
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_1078738d4;
    }
    func_0x000107873b8c(param_2);
    func_0x00010785d498();
  }
  uVar3 = param_2 & 0xffffffffffffff00;
  uVar2 = 1;
LAB_1078738d4:
  auVar4._0_8_ = uVar3 | param_2 & 0xff;
  auVar4._8_8_ = uVar2;
  return auVar4;
}



/* Entry: 107873b54; end: 107873b97;  */

void FUN_107873b54(long *param_1)

{
  char *pcVar1;
  char *in_stack_00000058;
  
  pcVar1 = (char *)*param_1;
  while (((pcVar1 != in_stack_00000058 && (-1 < (long)*pcVar1)) &&
         (((byte)(&UNK_10deaf981)[*pcVar1] >> 6 & 1) != 0))) {
    pcVar1 = pcVar1 + 1;
    *param_1 = (long)pcVar1;
  }
  return;
}



/* Entry: 10787445c; end: 10787459b;  */

void FUN_10787445c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = 0;
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    cVar2 = *(char *)((long)param_2 + 0x17);
    uVar9 = (ulong)cVar2;
    if ((long)uVar9 < 0) {
      uVar9 = param_2[1];
    }
    if (uVar9 <= uVar8) {
      return;
    }
    if (uVar8 < uVar9 - 1) {
      func_0x000107874894();
      uVar4 = (uint)*(ushort *)(extraout_x8 + 2);
      uVar3 = (uint)*(ushort *)(extraout_x8 + 2);
      if (uVar8 == 0) goto LAB_1078744e8;
LAB_1078744d0:
      uVar4 = uVar3;
      func_0x000107874894();
      uVar5 = (uint)*(ushort *)(extraout_x8_00 + -2);
      uVar3 = (uint)*(ushort *)(extraout_x8_00 + -2);
      if (uVar4 != 0) goto LAB_1078744f0;
LAB_107874518:
      if ((uVar5 != 0) && (func_0x000107874228(), uVar5 != 0)) {
        func_0x00010787486c();
        puVar6 = &UNK_10deafac0;
        func_0x00010787459c(&UNK_10deafac0,extraout_x8_01 + lVar7 + -2);
        if (puVar6 == (undefined *)0x0) goto LAB_107874554;
      }
      func_0x00010787486c();
      uVar9 = (ulong)*(ushort *)(extraout_x8_02 + lVar7);
      func_0x0001078745b8();
      if ((int)uVar9 == 0) goto LAB_107874554;
    }
    else {
      uVar4 = 0;
      uVar3 = uVar4;
      if (uVar8 != 0) goto LAB_1078744d0;
LAB_1078744e8:
      uVar5 = 0;
      uVar3 = 0;
      if (uVar4 == 0) goto LAB_107874518;
LAB_1078744f0:
      uVar5 = uVar3;
      func_0x000107874228();
      if (uVar4 == 0) goto LAB_107874518;
      plVar1 = (long *)*param_2;
      if (-1 < cVar2) {
        plVar1 = param_2;
      }
      puVar6 = &UNK_10deafac0;
      func_0x00010787459c(&UNK_10deafac0,(long)plVar1 + lVar7 + 2);
      if (puVar6 != (undefined *)0x0) goto LAB_107874518;
LAB_107874554:
      func_0x00010787486c();
      uVar9 = (ulong)*(ushort *)(extraout_x8_03 + lVar7);
    }
    func_0x0001078281ac(param_1,uVar9);
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 2;
  } while( true );
}



/* Entry: 107874818; end: 10787486b;  */

void FUN_107874818(long param_1,ushort *param_2)

{
  ushort uStack_22;
  
  uStack_22 = *param_2;
  func_0x0001078747a0(param_1,param_1 + 0x14c,&uStack_22);
  return;
}



/* Entry: 107874c48; end: 107874c83;  */

long FUN_107874c48(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107874e04; end: 107874e8b;  */

undefined8 FUN_107874e04(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  func_0x000107874e8c();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010724e49c(auStack_30);
  return uVar1;
}



/* Entry: 107875448; end: 10787554b;  */

undefined1 FUN_107875448(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar5 = (ulong *)*param_3;
  puVar1 = (ulong *)param_3[1];
  do {
    if (puVar5 == puVar1) {
      return 0;
    }
    uVar6 = *param_2;
    uVar7 = param_2[1];
    if (8 < uVar7 - uVar6) {
      uVar4 = *puVar5;
      uVar2 = puVar5[1];
      while (uVar4 != uVar2) {
        puVar3 = param_2;
        func_0x0001078751e0(param_2,uVar4);
        uVar4 = uVar4 + 4;
        if (((ulong)puVar3 & 1) != 0) {
          return 1;
        }
      }
    }
    if (4 < uVar7 - uVar6) {
      puVar3 = param_2;
      func_0x0001078755cc(param_2,puVar5);
      if (((ulong)puVar3 & 1) != 0) {
        return 1;
      }
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      while (uVar6 != uVar7) {
        uVar4 = uVar6;
        func_0x00010787526c(param_1,uVar6,param_2);
        uVar6 = uVar6 + 4;
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      uVar6 = *param_2;
      uVar7 = param_2[1];
    }
    while (uVar6 != uVar7) {
      uVar4 = uVar6;
      func_0x00010787526c(param_1,uVar6,puVar5);
      uVar6 = uVar6 + 4;
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    puVar5 = puVar5 + 3;
  } while( true );
}



/* Entry: 107875af0; end: 107875bb3;  */

bool FUN_107875af0(short *param_1,short *param_2,short *param_3)

{
  return ((int)*param_3 - (int)*param_1) * ((int)param_2[1] - (int)param_1[1]) <
         ((int)*param_2 - (int)*param_1) * ((int)param_3[1] - (int)param_1[1]);
}



/* Entry: 107876098; end: 10787611f;  */

void FUN_107876098(ulong param_1)

{
  ulong uStack_50;
  undefined8 uStack_48;
  
  FUN_1078765b0();
  if ((param_1 & 1) != 0) {
    func_0x0001078765fc();
    func_0x00010787666c(uStack_50,uStack_48);
    if ((uStack_50 & 1) != 0) {
      func_0x000107876648();
      func_0x0001078765e8();
      func_0x00010787665c();
      func_0x00010787660c();
      func_0x00010787663c();
      func_0x000107876664();
      return;
    }
  }
  func_0x000107876630();
  return;
}



/* Entry: 1078765b0; end: 10787668b;  */

bool FUN_1078765b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long unaff_x29;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *(undefined8 *)(unaff_x29 + -0x40) = param_2;
  *(undefined8 *)(unaff_x29 + -0x38) = param_3;
  iVar1 = (int)&uStack_20;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000107875ee0(&uStack_20,0,9,&UNK_10f430926);
  return iVar1 == 0;
}



/* Entry: 107877000; end: 107877033;  */

void FUN_107877000(double param_1,double param_2,double param_3,double *param_4)

{
  param_4[1] = param_4[1] * param_1;
  *param_4 = *param_4 * param_1;
  param_4[3] = param_4[3] * param_1;
  param_4[2] = param_4[2] * param_1;
  param_4[5] = param_4[5] * param_2;
  param_4[4] = param_4[4] * param_2;
  param_4[7] = param_4[7] * param_2;
  param_4[6] = param_4[6] * param_2;
  param_4[9] = param_4[9] * param_3;
  param_4[8] = param_4[8] * param_3;
  param_4[0xb] = param_4[0xb] * param_3;
  param_4[10] = param_4[10] * param_3;
  return;
}



/* Entry: 107877778; end: 10787779f;  */

undefined8 FUN_107877778(undefined8 param_1)

{
  func_0x0001078777a0(param_1,0);
  return param_1;
}



/* Entry: 107878184; end: 107878277;  */

void FUN_107878184(long param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 extraout_x8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_98;
  undefined8 **ppuStack_90;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x0001078786b4();
  uStack_38 = extraout_x8;
  if ((*(byte *)(lVar3 + 0x20) & 1) == 0) {
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    param_2 = &puStack_68;
    func_0x000100602604(param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_68);
  }
  puVar4 = (undefined8 *)(param_1 + 8);
  func_0x0001072e787c();
  bVar1 = *(byte *)((long)puVar4 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_60 = puVar4[1];
  puStack_68 = (undefined8 *)*puVar4;
  if (-1 < (char)bVar1) {
    uStack_60 = (ulong)bVar1;
    puStack_68 = puVar4;
  }
  pcVar5 = " ";
  func_0x000100066b30();
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  pcStack_98 = pcVar5;
  ppuStack_90 = param_2;
  func_0x000100066c24(auStack_e0,&puStack_68,&pcStack_98,&uStack_c8);
  func_0x000100602604(param_1 + 8,auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x000107878660(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_68);
    func_0x000107878674();
    return;
  }
  return;
}



/* Entry: 1078786d8; end: 10787886f;  */

void FUN_1078786d8(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar7 = (uint)param_3;
  iVar4 = uVar2 * uVar7;
  iVar3 = iVar4 * 4;
  lVar11 = (long)(iVar3 * iVar4);
  __Znam();
  _bzero();
  lStack_78 = 3;
  lStack_68 = lVar11;
  for (uVar12 = 0; uVar12 != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar12 = uVar12 + 1) {
    lVar11 = lStack_78;
    for (uVar13 = 0; uVar13 != uVar2; uVar13 = uVar13 + 1) {
      lVar6 = param_2;
      func_0x0001078daf3c(param_2,uVar13,uVar12);
      cVar5 = (char)lVar6 + -1;
      lVar6 = lVar11;
      for (uVar8 = 0; uVar9 = param_3 & 0xffffffff, lVar10 = lVar6,
          uVar8 != (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          puVar1 = (undefined1 *)(lStack_68 + lVar10);
          puVar1[-3] = cVar5;
          puVar1[-2] = cVar5;
          puVar1[-1] = cVar5;
          *puVar1 = 0xff;
          lVar10 = lVar10 + 4;
        }
        lVar6 = lVar6 + iVar3;
      }
      lVar11 = lVar11 + (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
    }
    lStack_78 = lStack_78 + (long)(int)uVar7 * (long)iVar3;
  }
  lStack_70 = lStack_68;
  lStack_68 = 0;
  func_0x000107878870(param_1,CONCAT44(iVar4,iVar4),&lStack_70);
  func_0x00010724e5b8(&lStack_70);
  func_0x00010724e5b8(&lStack_68);
  return;
}



/* Entry: 107878b80; end: 107878d13;  */

void FUN_107878b80(double *param_1)

{
  undefined8 *extraout_x8;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_d6;
  double in_d7;
  double extraout_d16;
  double extraout_d17;
  double extraout_d18;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = dVar1 + dVar1;
  dVar4 = dVar2 + dVar2;
  dVar5 = param_1[2];
  dVar6 = param_1[3];
  func_0x000107878cdc();
  *extraout_x8 = in_d6;
  extraout_x8[1] = extraout_d17 + dVar6;
  extraout_x8[2] = dVar1 - extraout_d16;
  extraout_x8[3] = 0;
  extraout_x8[4] = extraout_d17 - dVar6;
  extraout_x8[5] = extraout_d18 - (dVar3 + dVar5);
  extraout_x8[6] = dVar2 + in_d7;
  extraout_x8[7] = 0;
  extraout_x8[8] = dVar1 + extraout_d16;
  extraout_x8[9] = dVar2 - in_d7;
  extraout_x8[10] = extraout_d18 - (dVar3 + dVar4);
  extraout_x8[0xc] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xf] = 0x3ff0000000000000;
  return;
}



/* Entry: 107878f74; end: 107879077;  */

void FUN_107878f74(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_e8 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_48 [40];
  
  func_0x000107879230(param_1,param_1);
  func_0x000107879198();
  func_0x000107878f60(auStack_48);
  func_0x00010787924c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107879230();
    func_0x0001078791b8();
    func_0x000107878f60(auStack_98);
    func_0x00010787924c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107879230();
      func_0x000107879210();
      iVar2 = (int)auStack_e8;
      func_0x000107878f60();
      func_0x00010787924c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        puVar1 = &UNK_10f430942;
        if (iVar2 == 0) {
          puVar1 = &UNK_10f430947;
        }
        func_0x0001003a91d4(puVar1);
        func_0x0001003a9204(extraout_x8);
        return;
      }
    }
  }
  return;
}



/* Entry: 107879290; end: 107879347;  */

void FUN_107879290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar2 = &uStack_68;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x000100060b18(param_1);
  plVar3 = (long *)(param_4 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    lVar1 = (long)(plVar3 + 2);
    func_0x0001005d466c();
    lStack_40 = lVar1;
    puStack_38 = puVar2;
    func_0x0001003a91d4(&UNK_10f430969);
    func_0x0001003a9204(auStack_58);
    puVar2 = auStack_58;
    func_0x000107879348(param_1,puVar2,plVar3 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return;
}



/* Entry: 107879b34; end: 107879b4f;  */

long * FUN_107879b34(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*param_1 != 0) {
    lVar2 = param_1[1];
    lVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uStack_28 = lRam0000000113823e48;
    uStack_30 = lRam0000000113823e40;
    lRam0000000113823e40 = lVar1;
    lRam0000000113823e48 = lVar2;
    func_0x0001072ae334(&uStack_30);
    return (long *)0x113823e40;
  }
  return param_1;
}



/* Entry: 107879d18; end: 107879d9f;  */

void FUN_107879d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = 0x70;
  __Znwm();
  func_0x00010002b838(auStack_48,param_2);
  func_0x00010787ae2c(uVar1,auStack_48,param_3);
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10787a7d4; end: 10787a887;  */

long FUN_10787a7d4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10787a940; end: 10787a963;  */

void FUN_10787a940(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010787be3c();
  *puVar4 = &PTR_DAT_1109e3d48;
  uVar6 = param_1[1];
  puVar4[2] = param_1[2];
  puVar4[1] = uVar6;
  lVar5 = param_1[3];
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10787ac5c; end: 10787acef;  */

/* WARNING: Possible PIC construction at 0x00010787ac80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787ac84) */
/* WARNING: Removing unreachable block (ram,0x00010787ace8) */
/* WARNING: Removing unreachable block (ram,0x00010787ace0) */
/* WARNING: Removing unreachable block (ram,0x00010787bde0) */

undefined1 * FUN_10787ac5c(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010787bdec();
  uStack_38 = 1;
  func_0x00010787ad18();
  return auStack_40;
}



/* Entry: 10787ae04; end: 10787ae2b;  */

void FUN_10787ae04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10787b1b0; end: 10787b1f3;  */

undefined8 * FUN_10787b1b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  *param_2 = 0;
  uStack_28 = *param_1;
  *param_1 = uVar1;
  __ZNSt3__16futureIvED1Ev(&uStack_28);
  return param_1;
}



/* Entry: 10787b770; end: 10787b85f;  */

void FUN_10787b770(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    func_0x00010787b860(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    func_0x00010787b878(plVar3);
    func_0x00010787b860(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x00010787be24();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10787b9f8; end: 10787ba2f;  */

undefined8 *
FUN_10787b9f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_DAT_1109e3e98;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  func_0x00010787b9c4(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 10787bd04; end: 10787bd33;  */

void FUN_10787bd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010787bd34(param_1,&uStack_20,&uStack_28);
  return;
}



/* Entry: 10787c02c; end: 10787c09b;  */

undefined8 * FUN_10787c02c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3f98;
  func_0x00010787c3c8(param_1 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10787c410; end: 10787c5db;  */

/* WARNING: Possible PIC construction at 0x00010787c560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787c5d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787c564) */
/* WARNING: Removing unreachable block (ram,0x00010787c588) */
/* WARNING: Removing unreachable block (ram,0x00010787c5ac) */
/* WARNING: Removing unreachable block (ram,0x00010787c5c0) */
/* WARNING: Removing unreachable block (ram,0x00010787c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010787c570) */
/* WARNING: Removing unreachable block (ram,0x00010787c5d8) */

undefined8 ** FUN_10787c410(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  char cStack_40;
  
  puVar2 = param_1;
  func_0x00010787c668();
  puStack_158 = puVar2;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  lVar4 = param_1[1];
  func_0x0001073af1cc(lVar4);
  if (*(char *)(param_1 + 6) == '\x01') {
    puVar2 = param_1 + 3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_128);
  }
  else {
    puVar2 = (undefined8 *)&UNK_10f4309e8;
    func_0x00010002b838(auStack_128);
  }
  lVar5 = param_1[2];
  puVar3 = auStack_128;
  func_0x0001005d466c();
  lStack_100 = lVar5 + 1;
  lStack_f8 = 0;
  puStack_110 = puVar3;
  puStack_108 = puVar2;
  func_0x0001003a91d4(&UNK_10f4309ef);
  func_0x0001003a9204(auStack_140);
  func_0x0001078bba88(auStack_140);
  do {
    uStack_148 = 1;
    lStack_150 = lVar4 + 8;
    __ZNSt3__15mutex4lockEv(lVar4 + 8);
    while (*(long *)(lVar4 + 0x80) == *(long *)(lVar4 + 0x88)) {
      bVar1 = *(byte *)(lVar4 + 0x78);
      if (*(long *)(lVar4 + 0x98) != *(long *)(lVar4 + 0xa0)) goto LAB_10787c504;
      if ((bVar1 & 1) != 0) goto LAB_10787c548;
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar4 + 0x48,&lStack_150);
    }
    bVar1 = *(byte *)(lVar4 + 0x78);
LAB_10787c504:
    if ((bVar1 & 1) != 0) {
LAB_10787c548:
      func_0x00010787c680();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      puVar2 = puStack_158;
      puStack_158 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x0001001148fc(puVar2 + 3);
        func_0x0001004895c8(puVar2);
        __ZdlPv();
      }
      return &puStack_158;
    }
    func_0x0001077b1ad0(&puStack_110,lVar4 + 0x80);
    func_0x00010054bf64(&lStack_150);
    if ((cStack_40 == '\x01') && (lStack_f8 != 0)) {
      func_0x000104c003e8(&puStack_110);
    }
    func_0x00010787c618(&puStack_110);
    func_0x00010787c680();
  } while( true );
}



/* Entry: 10787c9c4; end: 10787ca67;  */

void FUN_10787c9c4(undefined8 param_1)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  func_0x000107881804();
  lVar1 = lStack_58;
  if (lStack_58 != lStack_50) {
    func_0x0001078813ec();
    func_0x0001078813d8();
    func_0x00010787f63c();
    lVar1 = lStack_50;
  }
  func_0x000107881728(lVar1,lStack_58);
  func_0x00010787c948(param_1);
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x18) {
    func_0x0001078817ec();
  }
  func_0x00010788162c();
  return;
}



/* Entry: 10787e50c; end: 10787e897;  */

void FUN_10787e50c(long *param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long **pplVar6;
  long **extraout_x8;
  long extraout_x8_00;
  long **extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long *extraout_x10;
  long **pplVar11;
  long **pplVar12;
  long **extraout_x11;
  ulong uVar13;
  long *plVar14;
  long **pplVar15;
  long **unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pplVar8 = &plStack_68;
  func_0x00010784b2bc();
  pplVar15 = (long **)param_1[1];
  if (pplVar15 != (long **)0x0) {
    uVar13 = (long)pplVar15 - 1;
    if (((ulong)pplVar15 & uVar13) == 0) {
      unaff_x25 = (long **)(uVar13 & (ulong)pplVar8);
    }
    else {
      unaff_x25 = pplVar8;
      if (pplVar15 <= pplVar8) {
        uVar7 = 0;
        if (pplVar15 != (long **)0x0) {
          uVar7 = (ulong)pplVar8 / (ulong)pplVar15;
        }
        unaff_x25 = (long **)((long)pplVar8 - uVar7 * (long)pplVar15);
      }
    }
    plVar14 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10787e5cc;
          pplVar6 = (long **)plVar14[1];
          if (pplVar6 != pplVar8) break;
          uVar7 = (ulong)(plVar14 + 2);
          func_0x0001073bc1c0(uVar7,param_2);
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        if (((ulong)pplVar15 & uVar13) == 0) {
          pplVar6 = (long **)((ulong)pplVar6 & uVar13);
        }
        else if (pplVar15 <= pplVar6) {
          uVar7 = 0;
          if (pplVar15 != (long **)0x0) {
            uVar7 = (ulong)pplVar6 / (ulong)pplVar15;
          }
          pplVar6 = (long **)((long)pplVar6 - uVar7 * (long)pplVar15);
        }
      } while (pplVar6 == unaff_x25);
    }
  }
LAB_10787e5cc:
  plVar14 = param_1 + 2;
  plVar4 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar4 = 0;
  plVar4[1] = (long)pplVar8;
  lVar5 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar5;
  plVar4[4] = param_2[2];
  plStack_60 = plVar14;
  if ((pplVar15 != (long **)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)pplVar15)) goto LAB_10787e7e8;
  bVar2 = (long **)0x2 < pplVar15;
  bVar3 = pplVar15 == (long **)0x3;
  plStack_68 = plVar4;
  func_0x000107881374((long)pplVar15 << 1);
  pplVar6 = extraout_x8;
  if (!bVar2 || bVar3) {
    pplVar6 = extraout_x9;
  }
  if ((long)pplVar6 - 1U == 0) {
    pplVar6 = (long **)0x2;
  }
  else if (((ulong)pplVar6 & (long)pplVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  pplVar15 = (long **)param_1[1];
  if (pplVar15 < pplVar6) {
LAB_10787e674:
    if ((ulong)pplVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10787e884);
      (*pcVar1)();
    }
    lVar5 = (long)pplVar6 << 3;
    __Znwm(lVar5);
    FUN_10787ee3c(param_1,lVar5);
    param_1[1] = (long)pplVar6;
    lVar5 = *param_1;
    for (pplVar15 = (long **)0x0; pplVar6 != pplVar15; pplVar15 = (long **)((long)pplVar15 + 1)) {
      *(undefined8 *)(lVar5 + (long)pplVar15 * 8) = 0;
    }
    plVar9 = (long *)*plVar14;
    pplVar15 = pplVar6;
    if (plVar9 != (long *)0x0) {
      pplVar11 = (long **)plVar9[1];
      uVar7 = (long)pplVar6 - 1;
      uVar13 = 0;
      if (pplVar6 != (long **)0x0) {
        uVar13 = (ulong)pplVar11 / (ulong)pplVar6;
      }
      pplVar12 = pplVar11;
      if (pplVar6 <= pplVar11) {
        pplVar12 = (long **)((long)pplVar11 - uVar13 * (long)pplVar6);
      }
      if (((ulong)pplVar6 & uVar7) == 0) {
        pplVar12 = (long **)((ulong)pplVar11 & uVar7);
      }
      *(long **)(lVar5 + (long)pplVar12 * 8) = plVar14;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        pplVar11 = (long **)plVar9[1];
        if (((ulong)pplVar6 & uVar7) == 0) {
          pplVar11 = (long **)((ulong)pplVar11 & uVar7);
        }
        else if (pplVar6 <= pplVar11) {
          uVar13 = 0;
          if (pplVar6 != (long **)0x0) {
            uVar13 = (ulong)pplVar11 / (ulong)pplVar6;
          }
          pplVar11 = (long **)((long)pplVar11 - uVar13 * (long)pplVar6);
        }
        if (pplVar11 != pplVar12) {
          if (*(long *)(lVar5 + (long)pplVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)pplVar11 * 8) = plVar10;
            pplVar12 = pplVar11;
          }
          else {
            func_0x0001078814b8();
            lVar5 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar9 = extraout_x10;
            pplVar12 = extraout_x11;
          }
        }
      }
    }
  }
  else if (pplVar6 < pplVar15) {
    pplVar11 = (long **)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((pplVar15 < (long **)0x3) || (((ulong)pplVar15 & (long)pplVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long **)0x1 < pplVar11) {
      pplVar11 = (long **)(1L << (-LZCOUNT((long)pplVar11 + -1) & 0x3fU));
    }
    if (pplVar6 <= pplVar11) {
      pplVar6 = pplVar11;
    }
    if (pplVar6 < pplVar15) {
      if (pplVar6 != (long **)0x0) goto LAB_10787e674;
      FUN_10787ee3c(param_1,0);
      param_1[1] = 0;
      pplVar15 = (long **)0x0;
    }
    else {
      pplVar15 = (long **)param_1[1];
    }
  }
  if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
    unaff_x25 = (long **)((long)pplVar15 - 1U & (ulong)pplVar8);
  }
  else {
    unaff_x25 = pplVar8;
    if (pplVar15 <= pplVar8) {
      uVar13 = 0;
      if (pplVar15 != (long **)0x0) {
        uVar13 = (ulong)pplVar8 / (ulong)pplVar15;
      }
      unaff_x25 = (long **)((long)pplVar8 - uVar13 * (long)pplVar15);
    }
  }
LAB_10787e7e8:
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar4 = *plVar14;
    *plVar14 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar14;
    if (*plVar4 != 0) {
      pplVar8 = *(long ***)(*plVar4 + 8);
      if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
        pplVar8 = (long **)((ulong)pplVar8 & (long)pplVar15 - 1U);
      }
      else if (pplVar15 <= pplVar8) {
        uVar13 = 0;
        if (pplVar15 != (long **)0x0) {
          uVar13 = (ulong)pplVar8 / (ulong)pplVar15;
        }
        pplVar8 = (long **)((long)pplVar8 - uVar13 * (long)pplVar15);
      }
      *(long **)(lVar5 + (long)pplVar8 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010787ee54(&plStack_68);
  return;
}



/* Entry: 10787ebb0; end: 10787ec0f;  */

/* WARNING: Possible PIC construction at 0x00010787ec98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787ece8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787ec9c) */
/* WARNING: Removing unreachable block (ram,0x00010787ecd8) */

undefined1  [16] FUN_10787ebb0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 ***pppuVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 ***pppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_2 < 0x24924924924924a) {
    uVar3 = (param_1[2] - *param_1) / 0x70;
    uVar7 = uVar3 * 2;
    if (uVar7 < param_2 || uVar7 - param_2 == 0) {
      uVar7 = param_2;
    }
    if (0x124924924924923 < uVar3) {
      uVar7 = 0x249249249249249;
    }
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = uVar7;
    return auVar12;
  }
  func_0x00010787eb20();
  pppuVar4 = (undefined1 ***)&stack0xffffffffffffffb0;
  puStack_18 = &UNK_10787ec10;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001078814d8();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar11 = unaff_x20[1];
    uVar10 = *unaff_x20;
    puVar2[2] = unaff_x20[2];
    puVar2[1] = uVar11;
    *puVar2 = uVar10;
    unaff_x19[1] = (long)(puVar2 + 3);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  plVar1 = (long *)(((long)puVar2 - *unaff_x19) / 0x18 + 1);
  uVar5 = (long *)0xaaaaaaaaaaaaaa9 < plVar1;
  if (plVar1 < (long *)0xaaaaaaaaaaaaaab) {
    uVar7 = (param_1[2] - *unaff_x19) / 0x18;
    param_1 = (long *)(uVar7 * 2);
    if (param_1 < plVar1 || (long)param_1 - (long)plVar1 == 0) {
      param_1 = plVar1;
    }
    uVar5 = 0x555555555555554 < uVar7;
    if ((bool)uVar5) {
      param_1 = (long *)0xaaaaaaaaaaaaaaa;
    }
    puVar9 = &UNK_10787ec9c;
    pppuVar8 = (undefined1 ***)&puStack_20;
  }
  else {
    pppuVar4 = &ppuStack_60;
    pppuVar8 = &ppuStack_60;
    puStack_58 = &UNK_10787ecec;
    puVar9 = &UNK_10787ecf8;
    ppuStack_60 = &puStack_20;
    func_0x0001078811a0();
  }
  *(undefined8 **)((long)pppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar8;
  *(undefined **)((long)pppuVar4 + -8) = puVar9;
  func_0x00010788195c();
  if (!(bool)uVar5) {
    lVar6 = (long)param_1 * 0x18;
    __Znwm(lVar6);
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = lVar6;
    return auVar13;
  }
  func_0x000104bd35f4();
  *(undefined8 **)((long)pppuVar4 + -0x40) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x38) = unaff_x19;
  *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(undefined **)((long)pppuVar4 + -0x28) = &UNK_10787ed30;
  func_0x000107881704();
  if (param_1 != (long *)0x0) {
    func_0x0001078817c0();
  }
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = unaff_x19;
  return auVar14;
}



/* Entry: 10787ee3c; end: 10787ee53;  */

void FUN_10787ee3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10787f4fc; end: 10787f60f;  */

void FUN_10787f4fc(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  long extraout_x12;
  long unaff_x19;
  long unaff_x20;
  double dVar5;
  
  func_0x0001078814d8();
  func_0x0001078813ec();
  switch(extraout_x8) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(double *)(unaff_x20 + -8) < *(double *)(unaff_x19 + 0x10)) {
      func_0x000107881448();
    }
    break;
  case 3:
    func_0x00010787f3b4();
    break;
  case 4:
    func_0x00010788182c();
    func_0x00010787f460();
    break;
  case 5:
    func_0x0001078816ec(1);
    func_0x00010787f4a4();
    break;
  default:
    func_0x0001078818cc();
    func_0x00010787f3b4();
    lVar3 = 0;
    lVar4 = unaff_x19 + 0x48;
    while( true ) {
      bVar1 = lVar4 - unaff_x20 < 0;
      uVar2 = lVar4 == unaff_x20;
      if ((bool)uVar2) break;
      dVar5 = *(double *)(lVar4 + 0x10);
      func_0x0001078815a0(lVar3);
      lVar3 = extraout_x8_00;
      lVar4 = extraout_x10;
      if (bVar1) {
        do {
          func_0x00010788156c();
          if ((bool)uVar2) {
            uVar2 = true;
            break;
          }
          uVar2 = dVar5 == *(double *)(extraout_x12 + 0x28);
        } while (dVar5 < *(double *)(extraout_x12 + 0x28));
        func_0x0001078816d4();
        lVar3 = extraout_x8_01;
        lVar4 = extraout_x10_00;
        if ((bool)uVar2) {
          return;
        }
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + 0x18;
    }
  }
  return;
}



/* Entry: 10787ff74; end: 10787ffdb;  */

void FUN_10787ff74(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107881230();
  param_1[3] = 0;
  func_0x0001078817b8();
  *param_1 = &PTR_DAT_1109e3ff8;
  uVar1 = *unaff_x19;
  param_1[2] = unaff_x19[1];
  param_1[1] = uVar1;
  param_1[3] = unaff_x19[2];
  *(undefined8 **)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10788035c; end: 107880367;  */

long * FUN_10788035c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001078811a0();
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107880d1c; end: 107880d6b;  */

long * FUN_107880d1c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001072ba1a8(lVar1);
    func_0x000107881614();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107880f0c; end: 107880f57;  */

void FUN_107880f0c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107881ac8; end: 107881b2b;  */

double FUN_107881ac8(long param_1,long param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)(param_1 + param_2 * 0x10);
  dVar2 = pdVar1[2];
  dVar3 = *pdVar1;
  if (dVar2 - dVar3 != 0.0) {
    dVar4 = pdVar1[1];
    dVar6 = pdVar1[3] - dVar4;
    dVar5 = (double)param_3;
    if (dVar6 == 0.0) {
      if (dVar5 <= dVar4) {
        dVar2 = dVar3;
      }
      return dVar2;
    }
    if (dVar4 <= dVar5) {
      if (dVar5 <= pdVar1[3]) {
        dVar2 = dVar3 + (dVar5 - dVar4) * ((dVar2 - dVar3) / dVar6);
      }
      return dVar2;
    }
  }
  return dVar3;
}



/* Entry: 107882608; end: 107882657;  */

undefined8 * FUN_107882608(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    uVar2 = (param_1[2] - *param_1) / 0x28;
    puVar5 = (undefined8 *)(uVar2 * 2);
    if (puVar5 < param_2 || (long)puVar5 - (long)param_2 == 0) {
      puVar5 = param_2;
    }
    if (0x333333333333332 < uVar2) {
      puVar5 = (undefined8 *)0x666666666666666;
    }
    return puVar5;
  }
  func_0x00010788275c();
  pplVar3 = &plStack_80;
  lVar6 = *param_1;
  lVar1 = param_1[1];
  lVar7 = param_2[1] + ((lVar1 - lVar6) / -0x28) * 0x28;
  plStack_80 = param_1 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  uStack_68 = 0;
  lStack_58 = lVar7;
  lStack_60 = lVar7;
  for (lVar4 = lVar6; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    func_0x000107882528(lStack_58,lVar4);
    lStack_58 = lStack_58 + 0x28;
  }
  uStack_68 = 1;
  for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    func_0x000104c31c5c(lVar6);
  }
  func_0x0001078827c4(&plStack_80);
  param_2[1] = lVar7;
  lVar4 = *param_1;
  param_1[1] = lVar4;
  *param_1 = param_2[1];
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return pplVar3;
}



/* Entry: 1078828f8; end: 1078831af;  */

/* WARNING: Possible PIC construction at 0x000107882974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107882998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078829e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107883354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078832d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107883358) */
/* WARNING: Removing unreachable block (ram,0x000107883370) */
/* WARNING: Removing unreachable block (ram,0x00010788337c) */
/* WARNING: Removing unreachable block (ram,0x0001078833a8) */
/* WARNING: Removing unreachable block (ram,0x0001078833b4) */
/* WARNING: Removing unreachable block (ram,0x0001078833c0) */
/* WARNING: Removing unreachable block (ram,0x0001078833cc) */
/* WARNING: Removing unreachable block (ram,0x0001078833d8) */
/* WARNING: Removing unreachable block (ram,0x0001078833e4) */
/* WARNING: Removing unreachable block (ram,0x0001078833e8) */
/* WARNING: Removing unreachable block (ram,0x00010788299c) */
/* WARNING: Removing unreachable block (ram,0x0001078829e4) */
/* WARNING: Removing unreachable block (ram,0x0001078829f8) */
/* WARNING: Removing unreachable block (ram,0x000107882a10) */
/* WARNING: Removing unreachable block (ram,0x000107882b88) */
/* WARNING: Removing unreachable block (ram,0x000107882b9c) */
/* WARNING: Removing unreachable block (ram,0x000107882bc8) */
/* WARNING: Removing unreachable block (ram,0x000107882bcc) */
/* WARNING: Removing unreachable block (ram,0x000107882bd8) */
/* WARNING: Removing unreachable block (ram,0x000107882bec) */
/* WARNING: Removing unreachable block (ram,0x000107882ba4) */
/* WARNING: Removing unreachable block (ram,0x000107882ba8) */
/* WARNING: Removing unreachable block (ram,0x000107882bbc) */
/* WARNING: Removing unreachable block (ram,0x000107882bc4) */
/* WARNING: Removing unreachable block (ram,0x000107882bfc) */
/* WARNING: Removing unreachable block (ram,0x000107882c08) */
/* WARNING: Removing unreachable block (ram,0x000107882c0c) */
/* WARNING: Removing unreachable block (ram,0x000107882c20) */
/* WARNING: Removing unreachable block (ram,0x000107882c28) */
/* WARNING: Removing unreachable block (ram,0x000107882c2c) */
/* WARNING: Removing unreachable block (ram,0x000107882ca4) */
/* WARNING: Removing unreachable block (ram,0x000107882cb0) */
/* WARNING: Removing unreachable block (ram,0x000107882cc0) */
/* WARNING: Removing unreachable block (ram,0x000107882c34) */
/* WARNING: Removing unreachable block (ram,0x000107882c64) */
/* WARNING: Removing unreachable block (ram,0x000107882c78) */
/* WARNING: Removing unreachable block (ram,0x000107882c84) */
/* WARNING: Removing unreachable block (ram,0x000107882c98) */
/* WARNING: Removing unreachable block (ram,0x000107882ca0) */
/* WARNING: Removing unreachable block (ram,0x0001078829f0) */
/* WARNING: Removing unreachable block (ram,0x000107882a18) */
/* WARNING: Removing unreachable block (ram,0x000107882a20) */
/* WARNING: Removing unreachable block (ram,0x000107882a38) */
/* WARNING: Removing unreachable block (ram,0x000107882a44) */
/* WARNING: Removing unreachable block (ram,0x000107882a78) */
/* WARNING: Removing unreachable block (ram,0x000107882a7c) */
/* WARNING: Removing unreachable block (ram,0x000107882a84) */
/* WARNING: Removing unreachable block (ram,0x000107882a98) */
/* WARNING: Removing unreachable block (ram,0x000107882a54) */
/* WARNING: Removing unreachable block (ram,0x000107882a68) */
/* WARNING: Removing unreachable block (ram,0x000107882a74) */
/* WARNING: Removing unreachable block (ram,0x000107882aa0) */
/* WARNING: Removing unreachable block (ram,0x000107882aa8) */
/* WARNING: Removing unreachable block (ram,0x000107882b1c) */
/* WARNING: Removing unreachable block (ram,0x000107882b28) */
/* WARNING: Removing unreachable block (ram,0x000107882b38) */
/* WARNING: Removing unreachable block (ram,0x000107882b48) */
/* WARNING: Removing unreachable block (ram,0x000107882cd0) */
/* WARNING: Removing unreachable block (ram,0x000107882cd8) */
/* WARNING: Removing unreachable block (ram,0x000107882b68) */
/* WARNING: Removing unreachable block (ram,0x000107882b6c) */
/* WARNING: Removing unreachable block (ram,0x000107882ab0) */
/* WARNING: Removing unreachable block (ram,0x000107882ae0) */
/* WARNING: Removing unreachable block (ram,0x000107882af4) */
/* WARNING: Removing unreachable block (ram,0x000107882afc) */
/* WARNING: Removing unreachable block (ram,0x000107882b10) */
/* WARNING: Removing unreachable block (ram,0x000107882b18) */
/* WARNING: Removing unreachable block (ram,0x000107882978) */
/* WARNING: Removing unreachable block (ram,0x0001078832dc) */
/* WARNING: Removing unreachable block (ram,0x0001078832e8) */
/* WARNING: Removing unreachable block (ram,0x0001078832f4) */
/* WARNING: Removing unreachable block (ram,0x000107883300) */
/* WARNING: Removing unreachable block (ram,0x00010788330c) */
/* WARNING: Removing unreachable block (ram,0x000107883318) */
/* WARNING: Removing unreachable block (ram,0x000107883324) */
/* WARNING: Removing unreachable block (ram,0x000107883328) */
/* WARNING: Removing unreachable block (ram,0x00010788432c) */

void FUN_1078828f8(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulong in_x3;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_100 [64];
  int *piStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  int *piStack_78;
  undefined8 uStack_70;
  int iStack_68;
  
  puVar8 = auStack_80;
  func_0x000107884430();
  piVar13 = unaff_x19 + -3;
  piStack_78 = unaff_x19 + -6;
  uVar17 = (long)unaff_x19 - (long)unaff_x20;
  uVar16 = (long)uVar17 / 0xc;
  piVar9 = unaff_x20;
  switch(uVar16) {
  case 0:
  case 1:
    break;
  case 2:
    piVar9 = unaff_x19 + -3;
    bVar1 = unaff_x19[-2] < unaff_x20[1];
    if (*piVar9 != *unaff_x20) {
      bVar1 = *piVar9 < *unaff_x20;
    }
    if (bVar1) {
      func_0x000107884540();
      uVar19 = *(undefined8 *)piVar9;
      unaff_x20[2] = unaff_x19[-1];
      *(undefined8 *)unaff_x20 = uVar19;
      unaff_x19[-1] = iStack_68;
      *(undefined8 *)piVar9 = uStack_70;
    }
    break;
  case 3:
    piVar11 = unaff_x20 + 3;
    func_0x000107884440();
    piVar9 = unaff_x20;
    unaff_x20 = piVar11;
    goto code_r0x0001078831b0;
  case 4:
    piVar11 = unaff_x20 + 3;
    piVar12 = unaff_x20 + 6;
    func_0x000107884440();
    piVar14 = piVar13;
    goto code_r0x0001078832bc;
  case 5:
    piVar11 = unaff_x20 + 3;
    piVar12 = unaff_x20 + 6;
    piVar14 = unaff_x20 + 9;
    func_0x000107884440();
    puVar8 = auStack_100;
    uStack_b8 = 0xc;
    unaff_x29 = auStack_90;
    piStack_c0 = unaff_x19 + -9;
    piStack_b0 = piVar13;
    func_0x000107884430();
    unaff_x30 = &UNK_107883358;
code_r0x0001078832bc:
    piVar13 = piVar12;
    *(int **)(puVar8 + -0x30) = piVar14;
    *(long *)(puVar8 + -0x28) = unaff_x21;
    *(int **)(puVar8 + -0x20) = unaff_x20;
    *(int **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = unaff_x29;
    *(undefined **)(puVar8 + -8) = unaff_x30;
    func_0x000107884430();
    unaff_x20 = piVar11;
code_r0x0001078831b0:
    iVar23 = *unaff_x20;
    bVar1 = unaff_x20[1] < piVar9[1];
    if (iVar23 != *piVar9) {
      bVar1 = iVar23 < *piVar9;
    }
    bVar2 = piVar13[1] < unaff_x20[1];
    if (*piVar13 != iVar23) {
      bVar2 = *piVar13 < iVar23;
    }
    if (bVar1) {
      if (bVar2) {
        iVar23 = piVar9[2];
        uVar19 = *(undefined8 *)piVar9;
        iVar4 = piVar13[2];
        *(undefined8 *)piVar9 = *(undefined8 *)piVar13;
        piVar9[2] = iVar4;
      }
      else {
        func_0x000107884570();
        bVar1 = piVar13[1] < unaff_x20[1];
        if (*piVar13 != *unaff_x20) {
          bVar1 = *piVar13 < *unaff_x20;
        }
        if (!bVar1) {
          return;
        }
        iVar23 = unaff_x20[2];
        uVar19 = *(undefined8 *)unaff_x20;
        iVar4 = piVar13[2];
        *(undefined8 *)unaff_x20 = *(undefined8 *)piVar13;
        unaff_x20[2] = iVar4;
      }
      *(undefined8 *)piVar13 = uVar19;
      piVar13[2] = iVar23;
    }
    else if (bVar2) {
      iVar23 = unaff_x20[2];
      uVar19 = *(undefined8 *)unaff_x20;
      iVar4 = piVar13[2];
      *(undefined8 *)unaff_x20 = *(undefined8 *)piVar13;
      unaff_x20[2] = iVar4;
      *(undefined8 *)piVar13 = uVar19;
      piVar13[2] = iVar23;
      bVar1 = unaff_x20[1] < piVar9[1];
      if (*unaff_x20 != *piVar9) {
        bVar1 = *unaff_x20 < *piVar9;
      }
      if (bVar1) {
        func_0x000107884570();
      }
    }
    return;
  default:
    if ((long)uVar17 < 0x120) {
      if ((in_x3 & 1) == 0) {
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            piVar13 = piVar9;
            unaff_x20 = unaff_x20 + 3;
            piVar9 = piVar13 + 3;
            if (piVar9 == unaff_x19) break;
            iVar23 = piVar13[3];
            iVar4 = piVar13[4];
            bVar1 = iVar4 < piVar13[1];
            if (iVar23 != *piVar13) {
              bVar1 = iVar23 < *piVar13;
            }
            if (bVar1) {
              iVar6 = piVar13[5];
              piVar13 = unaff_x20;
              do {
                piVar11 = piVar13;
                piVar13 = piVar11 + -3;
                *(undefined8 *)piVar11 = *(undefined8 *)piVar13;
                piVar11[2] = piVar11[-1];
                bVar1 = iVar4 < piVar11[-5];
                if (iVar23 != piVar11[-6]) {
                  bVar1 = iVar23 < piVar11[-6];
                }
              } while (bVar1);
              *piVar13 = iVar23;
              piVar11[-2] = iVar4;
              piVar11[-1] = iVar6;
            }
          }
        }
      }
      else if (unaff_x20 != unaff_x19) {
        lVar15 = 0;
        while (piVar9 + 3 != unaff_x19) {
          iVar23 = piVar9[3];
          iVar4 = piVar9[4];
          bVar1 = iVar4 < piVar9[1];
          if (iVar23 != *piVar9) {
            bVar1 = iVar23 < *piVar9;
          }
          if (bVar1) {
            iVar6 = piVar9[5];
            lVar7 = lVar15;
            do {
              lVar20 = lVar7;
              puVar3 = (undefined8 *)((long)unaff_x20 + lVar20);
              *(undefined8 *)((long)puVar3 + 0xc) = *puVar3;
              *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(puVar3 + 1);
              piVar13 = unaff_x20;
              if (lVar20 == 0) goto LAB_107882e54;
              bVar1 = iVar4 < *(int *)(puVar3 + -1);
              if (iVar23 != *(int *)((long)puVar3 + -0xc)) {
                bVar1 = iVar23 < *(int *)((long)puVar3 + -0xc);
              }
              lVar7 = lVar20 + -0xc;
            } while (bVar1);
            piVar13 = (int *)((long)unaff_x20 + lVar20);
LAB_107882e54:
            *piVar13 = iVar23;
            piVar13[1] = iVar4;
            piVar13[2] = iVar6;
          }
          lVar15 = lVar15 + 0xc;
          piVar9 = piVar9 + 3;
        }
      }
    }
    else {
      if (unaff_x21 != 0) {
        piVar9 = unaff_x20 + (uVar16 >> 1) * 3;
        if (0x600 < uVar17) {
          piVar9 = unaff_x20;
          unaff_x20 = unaff_x20 + (uVar16 >> 1) * 3;
        }
        goto code_r0x0001078831b0;
      }
      if (unaff_x20 != unaff_x19) {
        uVar18 = uVar16 - 2 >> 1;
        uVar17 = uVar18;
        do {
          if ((long)uVar17 <= (long)uVar18) {
            uVar22 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
            piVar9 = unaff_x20 + uVar22 * 3;
            uVar21 = uVar17 * 2 + 2;
            if ((long)uVar21 < (long)uVar16) {
              iVar23 = piVar9[3];
              iVar4 = *piVar9;
              bVar1 = piVar9[1] < piVar9[4];
              if (iVar4 != iVar23) {
                bVar1 = iVar4 < iVar23;
              }
              piVar13 = piVar9 + 3;
              if (!bVar1) {
                piVar13 = piVar9;
                uVar21 = uVar22;
                iVar23 = iVar4;
              }
            }
            else {
              piVar13 = piVar9;
              uVar21 = uVar22;
              iVar23 = *piVar9;
            }
            piVar9 = unaff_x20 + uVar17 * 3;
            iVar4 = *piVar9;
            iVar6 = piVar9[1];
            bVar1 = piVar13[1] < iVar6;
            if (iVar23 != iVar4) {
              bVar1 = iVar23 < iVar4;
            }
            if (!bVar1) {
              iVar23 = piVar9[2];
              do {
                piVar11 = piVar13;
                uVar19 = *(undefined8 *)piVar11;
                piVar9[2] = piVar11[2];
                *(undefined8 *)piVar9 = uVar19;
                if ((long)uVar18 < (long)uVar21) break;
                uVar22 = uVar21 << 1 | 1;
                piVar9 = unaff_x20 + uVar22 * 3;
                uVar21 = uVar21 * 2 + 2;
                if ((long)uVar21 < (long)uVar16) {
                  iVar10 = piVar9[3];
                  iVar5 = *piVar9;
                  bVar1 = piVar9[1] < piVar9[4];
                  if (iVar5 != iVar10) {
                    bVar1 = iVar5 < iVar10;
                  }
                  piVar13 = piVar9 + 3;
                  if (!bVar1) {
                    piVar13 = piVar9;
                    uVar21 = uVar22;
                    iVar10 = iVar5;
                  }
                }
                else {
                  piVar13 = piVar9;
                  uVar21 = uVar22;
                  iVar10 = *piVar9;
                }
                bVar1 = piVar13[1] < iVar6;
                if (iVar10 != iVar4) {
                  bVar1 = iVar10 < iVar4;
                }
                piVar9 = piVar11;
              } while (!bVar1);
              *piVar11 = iVar4;
              piVar11[1] = iVar6;
              piVar11[2] = iVar23;
            }
          }
          uVar17 = uVar17 - 1;
        } while (-1 < (long)uVar17);
        for (; 1 < (long)uVar16; uVar16 = uVar16 - 1) {
          uStack_70 = *(undefined8 *)unaff_x20;
          iStack_68 = unaff_x20[2];
          piVar9 = unaff_x20;
          uVar17 = 0;
          do {
            uVar21 = uVar17 << 1 | 1;
            uVar18 = uVar17 * 2 + 2;
            piVar13 = piVar9 + uVar17 * 3 + 3;
            uVar22 = uVar21;
            if ((long)uVar18 < (long)uVar16) {
              iVar23 = piVar9[uVar17 * 3 + 6];
              bVar1 = piVar9[uVar17 * 3 + 4] < piVar9[uVar17 * 3 + 7];
              if (piVar9[uVar17 * 3 + 3] != iVar23) {
                bVar1 = piVar9[uVar17 * 3 + 3] < iVar23;
              }
              piVar13 = piVar9 + uVar17 * 3 + 6;
              uVar22 = uVar18;
              if (!bVar1) {
                piVar13 = piVar9 + uVar17 * 3 + 3;
                uVar22 = uVar21;
              }
            }
            uVar19 = *(undefined8 *)piVar13;
            piVar9[2] = piVar13[2];
            *(undefined8 *)piVar9 = uVar19;
            piVar9 = piVar13;
            uVar17 = uVar22;
          } while ((long)uVar22 <= (long)(uVar16 - 2 >> 1));
          piVar9 = unaff_x19 + -3;
          if (piVar13 == piVar9) {
            piVar13[2] = iStack_68;
            *(undefined8 *)piVar13 = uStack_70;
          }
          else {
            uVar19 = *(undefined8 *)piVar9;
            piVar13[2] = unaff_x19[-1];
            *(undefined8 *)piVar13 = uVar19;
            unaff_x19[-1] = iStack_68;
            *(undefined8 *)piVar9 = uStack_70;
            uVar17 = (long)piVar13 + (0xc - (long)unaff_x20);
            if (0xc < (long)uVar17) {
              uVar17 = uVar17 / 0xc - 2 >> 1;
              piVar11 = unaff_x20 + uVar17 * 3;
              iVar23 = *piVar13;
              iVar4 = piVar13[1];
              bVar1 = piVar11[1] < iVar4;
              if (*piVar11 != iVar23) {
                bVar1 = *piVar11 < iVar23;
              }
              if (bVar1) {
                iVar6 = piVar13[2];
                do {
                  piVar12 = piVar11;
                  uVar19 = *(undefined8 *)piVar12;
                  piVar13[2] = piVar12[2];
                  *(undefined8 *)piVar13 = uVar19;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1 >> 1;
                  piVar11 = unaff_x20 + uVar17 * 3;
                  bVar1 = piVar11[1] < iVar4;
                  if (*piVar11 != iVar23) {
                    bVar1 = *piVar11 < iVar23;
                  }
                  piVar13 = piVar12;
                } while (bVar1);
                *piVar12 = iVar23;
                piVar12[1] = iVar4;
                piVar12[2] = iVar6;
              }
            }
          }
          unaff_x19 = piVar9;
        }
      }
    }
  }
  func_0x000107884440(unaff_x30);
  return;
}



/* Entry: 107883a30; end: 107883a57;  */

void FUN_107883a30(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078842a0; end: 1078842fb;  */

uint FUN_1078842a0(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ulong *)(param_1 + 0x20) < 0x200) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x400) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return uVar1 ^ 1;
}



/* Entry: 107884b8c; end: 107884bbb;  */

undefined8 * FUN_107884b8c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x000107884bbc(*param_1);
  }
  return param_1;
}



/* Entry: 107885480; end: 1078861e3;  */

void FUN_107885480(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [56];
  uint uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 auStack_2a0 [2];
  long *plStack_298;
  long *plStack_290;
  long lStack_280;
  undefined1 auStack_270 [192];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_130;
  long lStack_128;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_b8 [2];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  func_0x00010728451c(auStack_2a0);
  func_0x00010726236c(auStack_318,auStack_270);
  uStack_378 = 0;
  uStack_370 = 0;
  func_0x000107269c1c(&uStack_378);
  func_0x000104c2dd8c();
  lStack_130 = lStack_280;
  plVar8 = plStack_298;
  plVar9 = plStack_290;
  while (plStack_298 = plVar8, lStack_128 = lVar7, lStack_130 != 0) {
    plStack_290 = plVar9;
    func_0x000104c2fe00(&uStack_f0,lVar7);
    func_0x000107268350(auStack_b8,lVar7 + 0x38);
    func_0x000107886334(&uStack_170,&uStack_378);
    func_0x00010788632c();
    func_0x000104c2de10(&lStack_130);
    lVar7 = lStack_128;
    plVar8 = plStack_298;
    plVar9 = plStack_290;
  }
  uStack_170 = (undefined *)CONCAT44(uStack_170._4_4_,7);
  switch(auStack_2a0[0]) {
  case 1:
    if (((plVar8 != plVar9) && (plVar9 = (long *)*plVar8, plVar9 != (long *)plVar8[1])) &&
       (*plVar9 != plVar9[1])) {
      func_0x0001078862f8();
      func_0x00010788629c();
      func_0x000107886368(*(undefined8 *)*plStack_298);
      func_0x000107886280();
      func_0x000107886354();
      func_0x00010788633c();
      func_0x0001078862ac();
      func_0x000107886388();
      func_0x00010739a1c0();
      func_0x000107886280();
      goto LAB_107885840;
    }
    break;
  case 2:
    if ((plVar8 != plVar9) && (*plVar8 != plVar8[1])) {
      func_0x0001078862f8();
      func_0x00010788629c();
      func_0x000107886368(*plStack_298);
      func_0x000107886280();
      func_0x000107886354();
      func_0x00010788633c();
      func_0x0001078862ac();
      func_0x000107886388();
      func_0x00010739a1c0();
      func_0x000107886280();
      goto LAB_107885840;
    }
    break;
  case 3:
    if (plVar8 != plVar9) {
      func_0x0001078862f8();
      func_0x00010788629c();
      func_0x000107886368(plStack_298);
      func_0x000107886280();
      func_0x000107886354();
      func_0x00010788633c();
      func_0x0001078862ac();
      func_0x000107886388();
      func_0x00010739a1c0();
      func_0x000107886280();
      goto LAB_107885840;
    }
    break;
  case 4:
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 3) {
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_340 = 0;
      lVar1 = plVar8[1];
      for (lVar7 = *plVar8; lVar7 != lVar1; lVar7 = lVar7 + 0x10) {
        puStack_1b0 = &UNK_10e52b660;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_1a8 = 0;
        func_0x0001078863e0();
        func_0x0001078862e8();
        func_0x000107886280();
        func_0x000107886354();
        func_0x00010788633c();
        func_0x0001078863ec();
        func_0x0001078862e8();
        func_0x000107886280();
        func_0x000107886354();
        func_0x00010788633c();
        func_0x0001078863a8();
        uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
        func_0x000107886318();
        func_0x0001078863f8(&uStack_350);
        func_0x000107886380();
        func_0x0001078863b4();
        func_0x0001078863a0();
      }
      func_0x0001078863d4();
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      func_0x0001078862bc();
      func_0x000107886380();
      func_0x0001078863bc();
      func_0x000107886410();
    }
    func_0x000107269124(&uStack_368);
    break;
  case 5:
    if (plVar8 != plVar9) {
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_340 = 0;
      for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
        puStack_1b0 = &UNK_10e52b660;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_1a8 = 0;
        func_0x0001078863e0();
        func_0x0001078862e8();
        func_0x000107886280();
        func_0x000107886354();
        func_0x00010788633c();
        func_0x0001078863ec();
        func_0x0001078862e8();
        func_0x000107886280();
        func_0x000107886354();
        func_0x00010788633c();
        func_0x0001078863a8();
        uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
        func_0x000107886318();
        func_0x0001078863f8(&uStack_350);
        func_0x000107886380();
        func_0x0001078863b4();
        func_0x0001078863a0();
      }
      func_0x0001078863d4();
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      func_0x0001078862bc();
      func_0x000107886380();
      func_0x0001078863bc();
      func_0x000107886410();
    }
    break;
  case 6:
    func_0x0001078862f8();
    func_0x00010788629c();
    func_0x000107886388();
    func_0x00010739a1c0();
    func_0x000107886280();
    func_0x000107886354();
    func_0x00010788633c();
    func_0x0001078862ac();
    func_0x000107886388();
    func_0x00010739a1c0();
    func_0x000107886280();
    goto LAB_107885840;
  case 7:
    break;
  default:
    func_0x0001078862f8();
    func_0x00010788629c();
    func_0x000107886388();
    func_0x0001078861e4();
    func_0x000107886280();
    func_0x000107886354();
    func_0x00010788633c();
    func_0x0001078862ac();
    func_0x000107886388();
    func_0x0001078861e4();
    func_0x000107886280();
LAB_107885840:
    func_0x000107886354();
    func_0x00010788633c();
    func_0x0001078863a8();
    uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
    func_0x0001078862bc();
    func_0x000107886380();
    func_0x0001078863b4();
    func_0x0001078863a0();
  }
  uStack_390 = 0;
  uStack_388 = 0;
  func_0x000107269c1c(&uStack_390);
  if ((char)uStack_2e0 == '\x01') {
    func_0x000100060964(&puStack_1b0,"id");
    if ((uStack_2e0 & 1) == 0) goto LAB_107885e5c;
    func_0x000104c318bc(&uStack_f0,&puStack_1b0);
    func_0x000104c2fe00(&lStack_130,auStack_318);
    func_0x000104c33004(auStack_b8,&lStack_130);
    func_0x00010788633c();
    func_0x000107886334(&lStack_130,&uStack_390);
    func_0x00010788632c();
    func_0x000104c2f714(&puStack_1b0);
  }
  func_0x00010788634c();
  func_0x000107886388();
  func_0x000107886214();
  func_0x000107886334(&puStack_1b0,&uStack_390);
  func_0x00010788632c();
  func_0x00010788633c();
  func_0x00010788634c();
  func_0x000107886388();
  func_0x0001072d807c();
  func_0x000107886334(&puStack_1b0,&uStack_390);
  func_0x00010788632c();
  func_0x00010788633c();
  func_0x000104c3323c(&uStack_170);
  func_0x000104c335c0(&uStack_378);
  func_0x00010724b3d8(auStack_318);
  uStack_330 = 0;
  uStack_328 = 0;
  func_0x000107269c1c(&uStack_330);
  if (*(char *)(param_2 + 0x1ac) == '\x01') {
    func_0x00010788634c();
    pbVar5 = (byte *)(param_2 + 0x1a0);
    func_0x0001073a2768();
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x000107886418();
    func_0x000107886400();
    func_0x00010726805c(&uStack_f0,&uStack_170,pbVar5 + 4);
    func_0x00010788630c(&puStack_1b0);
    func_0x00010788632c();
    func_0x0001078863cc();
    func_0x000107886400();
    func_0x00010726805c(&uStack_f0,&uStack_170,pbVar5 + 8);
    func_0x00010788630c(&puStack_1b0);
    func_0x00010788632c();
    func_0x0001078863cc();
    func_0x000107886400();
    func_0x000104c318bc(&uStack_f0,&uStack_170);
    puStack_b0 = (undefined *)(ulong)*pbVar5;
    auStack_b8[0] = 5;
    func_0x00010788630c(&puStack_1b0);
    func_0x00010788632c();
    func_0x0001078863cc();
    func_0x000104c318bc(auStack_318,&lStack_130);
    uStack_2d0 = uStack_348;
    uStack_2d8 = uStack_350;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_2e0 = 1;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x000104c335c0(&uStack_f0);
    func_0x00010729d364(&uStack_f0,&uStack_330,auStack_318);
    func_0x0001072684c8(auStack_318);
    func_0x0001078863c4();
    func_0x00010788633c();
  }
  uVar6 = param_2 + 0xf0;
  func_0x000104c2d614();
  if ((uVar6 & 1) == 0) {
    func_0x000107886378();
    func_0x000107886394();
    func_0x00010735dfec();
    func_0x0001078862d8();
    func_0x00010788632c();
    func_0x000107886344();
  }
  if (*(char *)(param_2 + 0x198) == '\x01') {
    lStack_128 = 0;
    lStack_130 = 0;
    func_0x000107269c1c(&lStack_130);
    uStack_1a8 = 0;
    puStack_1b0 = (undefined *)0x0;
    func_0x000107269c1c(&puStack_1b0);
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x000107886418();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107267fe4();
    func_0x000107886334(&uStack_170,&puStack_1b0);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107267fe4();
    func_0x000107886334(&uStack_170,&puStack_1b0);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107267fe4();
    func_0x00010788630c(&uStack_170);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107267fe4();
    func_0x00010788630c(&uStack_170);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107886214();
    func_0x000107886334(&uStack_170,&lStack_130);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107886214();
    func_0x000107886334(&uStack_170,&lStack_130);
    func_0x00010788632c();
    func_0x000107886344();
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107886214();
    func_0x0001078862d8();
    func_0x00010788632c();
    func_0x000107886344();
    func_0x0001078863c4();
    func_0x000104c335c0(&puStack_1b0);
    func_0x0001078863b4();
  }
  if (*(long *)(param_2 + 0x138) != *(long *)(param_2 + 0x140)) {
    func_0x000107289330(&lStack_130);
    lVar1 = *(long *)(param_2 + 0x140);
    for (lVar7 = *(long *)(param_2 + 0x138); lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_170,lVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_318,&uStack_170);
      func_0x000107886394();
      func_0x000107268798();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
      func_0x0001072aacf4(&lStack_130,&uStack_f0);
      func_0x000107886380();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_170);
    }
    func_0x000107886378();
    func_0x000107886394();
    func_0x000104c318bc();
    func_0x000107268464(&uStack_170,&lStack_130);
    auStack_b8[0] = 0;
    uStack_a8 = uStack_168;
    puStack_b0 = uStack_170;
    uStack_170 = (undefined *)0x0;
    uStack_168 = 0;
    func_0x000104c33108(&uStack_170);
    func_0x0001078862d8();
    func_0x00010788632c();
    func_0x000107886344();
    func_0x0001078863bc();
  }
  if (*(long *)(param_2 + 0x168) != 0) {
    func_0x000107886418();
    plVar8 = (long *)(param_2 + 0x160);
    while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
      uStack_168 = 0;
      uStack_170 = (undefined *)0x0;
      plVar9 = plVar8 + 7;
      uStack_160 = 0;
      while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_318,plVar9 + 2);
        func_0x000107886394();
        func_0x000107268798();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
        func_0x0001078863f8(&uStack_170);
        func_0x000107886380();
      }
      func_0x000107262e9c(auStack_318,plVar8 + 2);
      func_0x000107327958(&puStack_1b0,&uStack_170);
      func_0x000107886394();
      func_0x000104c318bc();
      uStack_a8 = uStack_1a8;
      puStack_b0 = puStack_1b0;
      uStack_1a8 = 0;
      puStack_1b0 = (undefined *)0x0;
      auStack_b8[0] = 0;
      lStack_128 = 0;
      lStack_130 = 0;
      func_0x0001078863bc();
      func_0x00010788630c(&lStack_130);
      func_0x00010788632c();
      func_0x000104c33108(&puStack_1b0);
      func_0x000107886344();
      func_0x000107269124(&uStack_170);
    }
    func_0x000107886378();
    func_0x000107886394();
    func_0x000107886214();
    func_0x0001078862d8();
    func_0x00010788632c();
    func_0x000107886344();
    func_0x0001078863c4();
  }
  func_0x000107886378();
  func_0x000107886394();
  func_0x000107886214();
  func_0x000107886334(&uStack_170,&uStack_390);
  func_0x00010788632c();
  func_0x000107886344();
  uVar3 = uStack_388;
  uVar2 = uStack_390;
  uStack_390 = 0;
  uStack_388 = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar2;
  uStack_3a0 = 0;
  uStack_398 = 0;
  func_0x000104c335c0(&uStack_3a0);
  func_0x000104c335c0(&uStack_330);
  func_0x000107886408();
  func_0x000107269e60(auStack_2a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_107885e5c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107885e64);
  (*pcVar4)();
}



/* Entry: 1078867a4; end: 1078867b7;  */

void FUN_1078867a4(void)

{
  func_0x000107886760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107886d3c; end: 107886e1f;  */

void FUN_107886d3c(float param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x10));
  dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x14));
  dVar5 = (double)param_1;
  dVar6 = (double)param_2;
  lVar1 = *(long *)(param_3 + 0x30);
  if ((((*(char *)(lVar1 + 0xc0) != '\x01') || (*(double *)(lVar1 + 0x90) != 0.0)) ||
      (*(double *)(lVar1 + 0x98) != 0.0)) ||
     (((*(double *)(lVar1 + 0xa0) != dVar3 || (*(double *)(lVar1 + 0xa8) != dVar4)) ||
      ((*(double *)(lVar1 + 0xb0) != dVar5 || (*(double *)(lVar1 + 0xb8) != dVar6)))))) {
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    lVar1 = param_3;
    func_0x00010788ad3c();
    uStack_70 = 0;
    uStack_68 = 0;
    dStack_60 = dVar3;
    dStack_58 = dVar4;
    dStack_50 = dVar5;
    dStack_48 = dVar6;
    _objc_msgSend(uVar2,lVar1,&uStack_70);
    lVar1 = *(long *)(param_3 + 0x30);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(double *)(lVar1 + 0xa0) = dVar3;
    *(double *)(lVar1 + 0xa8) = dVar4;
    *(double *)(lVar1 + 0xb0) = dVar5;
    *(double *)(lVar1 + 0xb8) = dVar6;
    if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0xc0) = 1;
    }
  }
  return;
}



/* Entry: 1078872a8; end: 10788732b;  */

void FUN_1078872a8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x0001073da214(param_3,*(undefined1 *)(lVar3 + 0x28),*(undefined1 *)(param_2 + 0xc),1);
  uStack_28 = (undefined4)param_3;
  uStack_24 = (undefined1)((ulong)param_3 >> 0x20);
  lVar1 = lVar3 + 0x19;
  func_0x00010788732c(lVar1,&uStack_28);
  if ((int)lVar1 != 0) {
    *(undefined4 *)(lVar3 + 0x19) = uStack_28;
    *(undefined1 *)(lVar3 + 0x1d) = uStack_24;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    func_0x00010788cd4c(uVar2,&uStack_28);
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
  }
  return;
}



/* Entry: 1078875d8; end: 107887627;  */

void FUN_1078875d8(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    func_0x0001078874dc();
  }
  return;
}



/* Entry: 10788792c; end: 107887983;  */

void FUN_10788792c(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if ((((uint)param_4 == uVar2 >> 0x18) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 4)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,(param_4 & 0xffffffff) << 4,uVar2 & 0xff);
      }
      if ((~uVar2 & 0xff00) != 0) {
        func_0x000107889c50();
        func_0x000107887ed4();
        _objc_msgSend();
        lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
        *(undefined8 *)(lVar1 + 1000) = 0;
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107887ccc; end: 107887cef;  */

undefined8 FUN_107887ccc(undefined8 param_1)

{
  func_0x000107887cf0(param_1,0);
  return param_1;
}



/* Entry: 107887f60; end: 107887f8b;  */

void FUN_107887f60(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107890f50(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 107888164; end: 1078881cf;  */

undefined8 FUN_107888164(void)

{
  int iVar1;
  
  if ((bRam00000001137263c8 & 1) == 0) {
    iVar1 = 0x137263c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _objc_lookUpClass(&UNK_10f430a99);
      func_0x0001078902dc(0x1137263c0);
    }
  }
  return uRam00000001137263c0;
}



/* Entry: 1078884dc; end: 10788854b;  */

undefined * FUN_1078884dc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f10 & 1) == 0) {
    iVar1 = 0x13823f10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b45;
      _sel_registerName();
      puRam0000000113823f08 = puVar2;
      ___cxa_guard_release(0x113823f10);
    }
  }
  return puRam0000000113823f08;
}



/* Entry: 10788885c; end: 1078888cb;  */

undefined * FUN_10788885c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f90 & 1) == 0) {
    iVar1 = 0x13823f90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430c1a;
      _sel_registerName();
      puRam0000000113823f88 = puVar2;
      ___cxa_guard_release(0x113823f90);
    }
  }
  return puRam0000000113823f88;
}



/* Entry: 107888bd8; end: 107888c47;  */

undefined * FUN_107888bd8(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824000 & 1) == 0) {
    iVar1 = 0x13824000;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430d10;
      _sel_registerName();
      puRam0000000113823ff8 = puVar2;
      ___cxa_guard_release(0x113824000);
    }
  }
  return puRam0000000113823ff8;
}



/* Entry: 107888f48; end: 107888fb7;  */

undefined * FUN_107888f48(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824040 & 1) == 0) {
    iVar1 = 0x13824040;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430e08;
      _sel_registerName();
      puRam0000000113824038 = puVar2;
      ___cxa_guard_release(0x113824040);
    }
  }
  return puRam0000000113824038;
}



/* Entry: 1078892c4; end: 107889333;  */

undefined * FUN_1078892c4(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240b0 & 1) == 0) {
    iVar1 = 0x138240b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430f0d;
      _sel_registerName();
      puRam00000001138240a8 = puVar2;
      ___cxa_guard_release(0x1138240b0);
    }
  }
  return puRam00000001138240a8;
}



/* Entry: 107889640; end: 1078896af;  */

undefined * FUN_107889640(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824120 & 1) == 0) {
    iVar1 = 0x13824120;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430fcf;
      _sel_registerName();
      puRam0000000113824118 = puVar2;
      ___cxa_guard_release(0x113824120);
    }
  }
  return puRam0000000113824118;
}



/* Entry: 1078899b4; end: 107889a1f;  */

undefined8 FUN_1078899b4(void)

{
  int iVar1;
  
  if ((bRam00000001137264c8 & 1) == 0) {
    iVar1 = 0x137264c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4310a7);
      func_0x0001078902dc(0x1137264c0);
    }
  }
  return uRam00000001137264c0;
}



/* Entry: 107889d30; end: 107889d9f;  */

undefined * FUN_107889d30(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241e0 & 1) == 0) {
    iVar1 = 0x138241e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43117f;
      _sel_registerName();
      puRam00000001138241d8 = puVar2;
      ___cxa_guard_release(0x1138241e0);
    }
  }
  return puRam00000001138241d8;
}



/* Entry: 10788a0a8; end: 10788a113;  */

undefined8 FUN_10788a0a8(void)

{
  int iVar1;
  
  if ((bRam00000001137264f8 & 1) == 0) {
    iVar1 = 0x137264f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f43121a);
      func_0x0001078902dc(0x1137264f0);
    }
  }
  return uRam00000001137264f0;
}



/* Entry: 10788a41c; end: 10788a487;  */

undefined8 FUN_10788a41c(void)

{
  int iVar1;
  
  if ((bRam0000000113726528 & 1) == 0) {
    iVar1 = 0x13726528;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4312a1);
      func_0x0001078902dc(0x113726520);
    }
  }
  return uRam0000000113726520;
}



/* Entry: 10788a790; end: 10788a7ff;  */

undefined * FUN_10788a790(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242e0 & 1) == 0) {
    iVar1 = 0x138242e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431369;
      _sel_registerName();
      puRam00000001138242d8 = puVar2;
      ___cxa_guard_release(0x1138242e0);
    }
  }
  return puRam00000001138242d8;
}



/* Entry: 10788ab0c; end: 10788ab7b;  */

undefined * FUN_10788ab0c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824350 & 1) == 0) {
    iVar1 = 0x13824350;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4313d8;
      _sel_registerName();
      puRam0000000113824348 = puVar2;
      ___cxa_guard_release(0x113824350);
    }
  }
  return puRam0000000113824348;
}



/* Entry: 10788ae8c; end: 10788aefb;  */

undefined * FUN_10788ae8c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243d0 & 1) == 0) {
    iVar1 = 0x138243d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431483;
      _sel_registerName();
      puRam00000001138243c8 = puVar2;
      ___cxa_guard_release(0x1138243d0);
    }
  }
  return puRam00000001138243c8;
}



/* Entry: 10788b208; end: 10788b277;  */

undefined * FUN_10788b208(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824440 & 1) == 0) {
    iVar1 = 0x13824440;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430d03;
      _sel_registerName();
      puRam0000000113824438 = puVar2;
      ___cxa_guard_release(0x113824440);
    }
  }
  return puRam0000000113824438;
}



/* Entry: 10788b580; end: 10788b5ef;  */

undefined * FUN_10788b580(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138244a0 & 1) == 0) {
    iVar1 = 0x138244a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431551;
      _sel_registerName();
      puRam0000000113824498 = puVar2;
      ___cxa_guard_release(0x1138244a0);
    }
  }
  return puRam0000000113824498;
}



/* Entry: 10788c670; end: 10788c677;  */

undefined1 FUN_10788c670(long param_1)

{
  return *(undefined1 *)(param_1 + 0x27b0);
}



/* Entry: 10788d270; end: 10788d343;  */

void FUN_10788d270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,uint param_6)

{
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined4 uStack_68;
  undefined1 uStack_64;
  long lStack_50;
  undefined1 uStack_41;
  
  uStack_41 = param_5;
  func_0x000107890558();
  func_0x00010788c9d4(&uStack_68);
  func_0x00010788d224(&lStack_50,param_2,&uStack_41,&uStack_68);
  FUN_107887f60(&uStack_68);
  func_0x0001073da214(param_4,param_6 & 1,uStack_41,1);
  uStack_64 = (undefined1)((ulong)param_4 >> 0x20);
  uStack_68 = (undefined4)param_4;
  *(undefined4 *)(lStack_50 + 0x19) = uStack_68;
  *(undefined1 *)(lStack_50 + 0x1d) = uStack_64;
  func_0x00010788cd4c();
  *(undefined8 *)(lStack_50 + 0x20) = unaff_x20;
  *unaff_x19 = lStack_50;
  return;
}



/* Entry: 10788d820; end: 10788db4f;  */

/* WARNING: Possible PIC construction at 0x00010788d86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010788da7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010788d870) */
/* WARNING: Removing unreachable block (ram,0x00010788da74) */
/* WARNING: Removing unreachable block (ram,0x00010788d964) */
/* WARNING: Removing unreachable block (ram,0x00010788d974) */
/* WARNING: Removing unreachable block (ram,0x00010788d978) */
/* WARNING: Removing unreachable block (ram,0x00010788d980) */
/* WARNING: Removing unreachable block (ram,0x00010788d9a0) */
/* WARNING: Removing unreachable block (ram,0x00010788d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010788d9ac) */
/* WARNING: Removing unreachable block (ram,0x00010788da80) */
/* WARNING: Removing unreachable block (ram,0x00010788da94) */
/* WARNING: Removing unreachable block (ram,0x00010788dacc) */
/* WARNING: Removing unreachable block (ram,0x00010788daf8) */
/* WARNING: Removing unreachable block (ram,0x00010788db44) */
/* WARNING: Removing unreachable block (ram,0x00010788daa8) */

void FUN_10788d820(void)

{
  undefined1 *puVar1;
  long *unaff_x19;
  undefined1 auStack_118 [168];
  
  func_0x000107890480();
  func_0x00010724e330();
  puVar1 = auStack_118;
  func_0x000107890850();
  func_0x000107890908();
  *unaff_x19 = (long)puVar1;
  return;
}



/* Entry: 10788e418; end: 10788eae7;  */

void FUN_10788e418(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 extraout_x8;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *unaff_x26;
  long lVar22;
  undefined8 *unaff_x28;
  long lVar23;
  float fVar24;
  long lVar25;
  float fVar26;
  long lStack_1f8;
  undefined4 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long **pplStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  long alStack_158 [3];
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 auStack_130 [4];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  lVar17 = param_1;
  func_0x000107890480();
  uStack_78 = extraout_x8;
  if (*(long *)(lVar17 + 0x27a8) == 0) {
    puStack_138 = (undefined8 *)0x0;
    lVar16 = *(long *)(param_1 + 8);
    func_0x00010788b128();
    func_0x000107890818();
    func_0x000107890584();
    lVar5 = lVar17;
    func_0x000107888edc();
    _objc_msgSend(lVar16,lVar5,lVar17,0,&puStack_138);
    if ((lVar16 == 0) || (puStack_138 != (undefined8 *)0x0)) {
      func_0x00010788b278();
      func_0x000107890428();
      FUN_10788b580();
      func_0x000107890428();
      if (lVar16 == 0) goto LAB_10788e8c8;
    }
    else {
      lVar17 = lVar16;
      func_0x00010788b128();
      func_0x000107890818();
      func_0x000107890584();
      func_0x000107888d94();
      lVar5 = lVar16;
      func_0x00010789082c(lVar16,lVar17);
      if ((lVar5 == 0) || (puStack_138 != (undefined8 *)0x0)) {
        func_0x00010788b278();
        func_0x0001078904d8();
        FUN_10788b580();
        func_0x0001078904d8();
        if (lVar5 == 0) goto LAB_10788e8bc;
      }
      else {
        func_0x00010788b128();
        lVar17 = lVar5;
        func_0x00010788b510();
        _objc_msgSend(lVar5,lVar17,&DAT_10f431806,4);
        lVar17 = lVar5;
        func_0x000107888d94();
        _objc_msgSend(lVar16,lVar17,lVar5);
        if ((lVar16 == 0) || (puStack_138 != (undefined8 *)0x0)) {
          unaff_x24 = lVar16;
          func_0x00010788b278();
          func_0x000107890470();
          FUN_10788b580();
          func_0x000107890470();
          if (lVar16 == 0) goto LAB_10788e8b0;
        }
        else {
          func_0x0001078880f4();
          func_0x00010788b198();
          func_0x000107890470();
          FUN_10788b208();
          func_0x000107890470();
          lVar17 = lVar16;
          func_0x00010788accc();
          lVar5 = lVar16;
          func_0x0001078905a8(lVar16,lVar17);
          func_0x000107889cc0();
          lVar17 = lVar16;
          func_0x00010789051c(lVar16,lVar5);
          func_0x00010788a568();
          lVar5 = lVar16;
          func_0x000107890648(lVar16,lVar17);
          func_0x000107889790();
          lVar17 = lVar16;
          func_0x000107890648(lVar16,lVar5);
          FUN_1078884dc();
          func_0x000107890470();
          lVar5 = lVar17;
          func_0x000107889094();
          _objc_msgSend(lVar17,lVar5,0);
          lVar5 = lVar17;
          func_0x00010788a260();
          lVar22 = lVar17;
          func_0x000107890720(lVar17,lVar5);
          func_0x000107889480();
          lVar5 = lVar17;
          _objc_msgSend(lVar17,lVar22,1);
          func_0x00010788a3ac();
          lVar22 = lVar17;
          func_0x000107890418(lVar17,lVar5);
          func_0x000107889334();
          lVar5 = lVar17;
          func_0x000107890418(lVar17,lVar22);
          func_0x00010788a4f8();
          lVar22 = lVar17;
          _objc_msgSend(lVar17,lVar5,4);
          func_0x000107889a90();
          lVar5 = lVar17;
          _objc_msgSend(lVar17,lVar22,5);
          func_0x00010788a488();
          lVar22 = lVar17;
          func_0x000107890418(lVar17,lVar5);
          func_0x000107889a20();
          _objc_msgSend(lVar17,lVar22,1);
          puVar20 = *(undefined8 **)(param_1 + 8);
          FUN_107888f48();
          _objc_msgSend(puVar20,lVar17,lVar16,&puStack_138);
          unaff_x26 = puStack_138;
          if ((puVar20 == (undefined8 *)0x0) || (puStack_138 != (undefined8 *)0x0)) {
            func_0x00010788b278();
            unaff_x25 = unaff_x26;
            _objc_msgSend(unaff_x26,puVar20);
            puVar20 = unaff_x25;
            FUN_10788b580();
            _objc_msgSend(unaff_x25,puVar20);
          }
          else {
            uStack_a8 = 0x2000100040005;
            plStack_b0 = (long *)0x1000400010000;
            uStack_98 = 0x3000600030002;
            uStack_a0 = 0x5000600020005;
            uStack_88 = 0x7000400000007;
            uStack_90 = 0x300060007;
            puVar4 = puVar20;
            func_0x0001078906c8();
            puVar4[1] = 0;
            *puVar4 = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            auStack_130[0] = 0;
            func_0x00010788f78c(param_1 + 0x27a8);
            puVar4 = auStack_130;
            func_0x00010788f768(puVar4);
            unaff_x28 = *(undefined8 **)(param_1 + 0x27a8);
            unaff_x26 = (undefined8 *)*unaff_x28;
            in_ZR = unaff_x26 == puVar20;
            if ((bool)in_ZR) {
              func_0x00010788b354();
              func_0x000107890624();
            }
            else {
              if (unaff_x26 != (undefined8 *)0x0) {
                func_0x00010788b354();
                _objc_msgSend(unaff_x26,puVar4);
              }
              *unaff_x28 = puVar20;
            }
            *(undefined1 *)(*(long *)(param_1 + 0x27a8) + 8) = 0;
            func_0x00010788cbc8(auStack_130,param_1,0x30,&plStack_b0);
            func_0x00010788f01c(alStack_158,auStack_130);
            lVar17 = alStack_158[0];
            alStack_158[0] = 0;
            lVar5 = *(long *)(*(long *)(param_1 + 0x27a8) + 0x10);
            *(long *)(*(long *)(param_1 + 0x27a8) + 0x10) = lVar17;
            if (lVar5 != 0) {
              func_0x00010789036c();
              lVar17 = alStack_158[0];
              alStack_158[0] = 0;
              if (lVar17 != 0) {
                func_0x00010789036c();
              }
            }
            func_0x00010788f68c(auStack_130);
            fVar24 = (float)NEON_ucvtf((int)param_2[2]);
            fVar26 = (float)NEON_ucvtf(*(undefined4 *)((long)param_2 + 0x14));
            auStack_130[1] = 0x3f800000bf800000;
            auStack_130[0] = 0xbf800000bf800000;
            auStack_130[3] = 0xbf8000003f800000;
            auStack_130[2] = 0x3f8000003f800000;
            fStack_110 = 16.0 / fVar24 + -1.0;
            fStack_10c = 16.0 / fVar26 + -1.0;
            fStack_104 = 1.0 - 16.0 / fVar26;
            fStack_100 = 1.0 - 16.0 / fVar24;
            fStack_108 = fStack_110;
            fStack_fc = fStack_104;
            fStack_f8 = fStack_100;
            fStack_f4 = fStack_10c;
            func_0x00010788cc48(alStack_158,param_1,0x40,auStack_130);
            func_0x00010788f048(&lStack_140,alStack_158);
            lVar17 = lStack_140;
            lStack_140 = 0;
            lVar5 = *(long *)(*(long *)(param_1 + 0x27a8) + 0x18);
            *(long *)(*(long *)(param_1 + 0x27a8) + 0x18) = lVar17;
            if (lVar5 != 0) {
              func_0x00010789036c();
              lVar17 = lStack_140;
              lStack_140 = 0;
              if (lVar17 != 0) {
                func_0x00010789036c();
              }
            }
            func_0x00010788f6e4(alStack_158);
            unaff_x25 = puVar20;
          }
          unaff_x24 = lVar16;
          if (lVar16 != 0) {
            func_0x00010788b354();
            func_0x000107890514();
          }
        }
        func_0x00010788b354();
        func_0x0001078904e0();
      }
LAB_10788e8b0:
      func_0x00010788b354();
      func_0x000107890420();
    }
LAB_10788e8bc:
    func_0x00010788b354();
    func_0x0001078904e8();
  }
LAB_10788e8c8:
  plStack_b0 = param_2;
  (**(code **)(*param_2 + 0x10))(param_2,&UNK_10f431572,0xf);
  puVar20 = auStack_130;
  _memcpy(puVar20,&UNK_10deb04a8,0x80);
  lVar17 = param_2[7];
  uVar18 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x27a8) + 0x18) + 8);
  FUN_10788ab0c();
  _objc_msgSend(lVar17,puVar20,uVar18,0,0);
  lVar5 = param_2[7];
  uVar19 = (ulong)uRam00000001137263a8;
  func_0x000107889c50();
  _objc_msgSend(lVar5,lVar17,auStack_130 + uVar19 * 2,0x10,0);
  func_0x0001078868d4(param_2,**(undefined8 **)(param_1 + 0x27a8));
  bVar2 = *(byte *)(*(long *)(param_1 + 0x27a8) + 8);
  uVar10 = (uint)bVar2;
  func_0x0001078867c4(param_2,*(long *)(*(long *)(param_1 + 0x27a8) + 0x10) + 8,bVar2,4,0,0x18,1);
  uRam00000001137263a8 = uRam00000001137263a8 + 1 & 7;
  pplVar6 = &plStack_b0;
  func_0x00010748eeb8();
  func_0x0001078903b4(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar7 = alStack_158;
  func_0x00010788f6e4();
  if (unaff_x24 != 0) {
    func_0x00010788b354();
    func_0x000107890514();
  }
  func_0x00010788b354();
  func_0x0001078904e0();
  func_0x00010788b354();
  func_0x000107890420();
  func_0x00010788b354();
  plVar9 = plVar7;
  func_0x0001078904e8();
  func_0x00010789083c();
  uStack_1b8 = 0x27a8;
  uStack_190 = 0x113726000;
  puStack_168 = &DAT_10788eae8;
  lVar17 = plVar9[3];
  lVar16 = plVar9[4];
  lVar22 = plVar9[5];
  for (plVar11 = (long *)plVar7[0x4f2]; puStack_1c0 = unaff_x28, puStack_1b0 = unaff_x26,
      puStack_1a8 = unaff_x25, lStack_1a0 = unaff_x24, uStack_198 = uVar19, lStack_188 = param_1,
      pplStack_180 = pplVar6, lStack_178 = lVar5, puStack_170 = &stack0xfffffffffffffff0,
      plVar11 != (long *)plVar7[0x4f3]; plVar11 = plVar11 + 4) {
    if (((*plVar11 == lVar17) && (plVar11[1] == lVar16)) && (plVar11[2] == lVar22)) {
      lVar17 = plVar11[3];
      goto code_r0x00010788eeac;
    }
  }
  lStack_1f8 = 0;
  lVar5 = plVar7[1];
  plVar11 = plVar7;
  func_0x00010788b128();
  plVar21 = plVar11;
  func_0x00010788b510();
  _objc_msgSend(plVar11,plVar21,&UNK_10f431595,4);
  plVar21 = plVar11;
  func_0x000107888edc();
  _objc_msgSend(lVar5,plVar21,plVar11,0,&lStack_1f8);
  if ((lVar5 == 0) || (lStack_1f8 != 0)) {
    func_0x00010788b278();
    func_0x000107890428();
    func_0x000107890708();
    func_0x0001078903f4();
    lVar17 = 0;
    if (lVar5 == 0) goto code_r0x00010788eeac;
  }
  else {
    lVar25 = lVar5;
    func_0x00010788b128();
    func_0x000107890818();
    func_0x000107890584();
    func_0x000107888d94();
    func_0x00010789082c(lVar5,lVar25);
    if ((lVar5 == 0) || (lStack_1f8 != 0)) {
      func_0x00010788b278();
      func_0x000107890470();
      func_0x000107890708();
      func_0x0001078903f4();
      lVar17 = 0;
      if (lVar5 == 0) goto code_r0x00010788eea0;
    }
    else {
      func_0x0001078880f4();
      func_0x00010788b198();
      func_0x0001078903f4();
      FUN_10788b208();
      func_0x0001078903f4();
      lVar25 = lVar5;
      func_0x00010788accc();
      lVar23 = lVar5;
      func_0x0001078905a8(lVar5,lVar25);
      func_0x000107889cc0();
      lVar25 = lVar5;
      func_0x000107890418(lVar5,lVar23);
      func_0x00010788a568();
      lVar23 = lVar5;
      func_0x000107890710(lVar5,lVar25);
      func_0x000107889790();
      lVar25 = lVar5;
      func_0x000107890720(lVar5,lVar23);
      FUN_1078884dc();
      func_0x000107890470();
      lVar23 = lVar25;
      func_0x000107889094();
      _objc_msgSend(lVar25,lVar23,0);
      lVar23 = lVar25;
      func_0x00010788a260();
      lVar8 = lVar25;
      func_0x000107890648(lVar25,lVar23);
      func_0x000107889480();
      lVar23 = lVar25;
      _objc_msgSend(lVar25,lVar8,0);
      func_0x00010788ae1c();
      func_0x000107890418(lVar25,lVar23);
      lVar23 = plVar7[1];
      FUN_107888f48();
      _objc_msgSend(lVar23,lVar25,lVar5,&lStack_1f8);
      if ((lVar23 == 0) || (lStack_1f8 != 0)) {
        func_0x00010788b278();
        func_0x0001078903f4();
        func_0x000107890708();
        func_0x0001078903f4();
        lVar17 = 0;
      }
      else {
        plVar11 = (long *)plVar7[0x4f3];
        uStack_1e0 = lVar17;
        uStack_1d8 = lVar16;
        lStack_1d0 = lVar22;
        if (plVar11 < (long *)plVar7[0x4f4]) {
          plVar11[2] = lVar22;
          plVar11[1] = lVar16;
          *plVar11 = lVar17;
          plVar11[3] = lVar23;
          lStack_1c8 = 0;
          plVar11 = plVar11 + 4;
        }
        else {
          plVar21 = (long *)plVar7[0x4f2];
          lVar17 = (long)plVar11 - (long)plVar21 >> 5;
          uVar19 = lVar17 + 1;
          lStack_1c8 = lVar23;
          if (uVar19 >> 0x3b != 0) {
            func_0x00010788f608();
code_r0x00010788ef74:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10788ef78);
            (*pcVar3)();
          }
          uVar12 = plVar7[0x4f4] - (long)plVar21;
          uVar15 = (long)uVar12 >> 4;
          if (uVar15 <= uVar19) {
            uVar15 = uVar19;
          }
          if (0x7fffffffffffffdf < uVar12) {
            uVar15 = 0x7ffffffffffffff;
          }
          if (uVar15 >> 0x3b != 0) {
            func_0x000104bd35f4();
            goto code_r0x00010788ef74;
          }
          lVar16 = uVar15 << 5;
          __Znwm();
          plVar1 = (long *)(lVar16 + ((long)plVar11 - (long)plVar21));
          plVar1[1] = uStack_1d8;
          *plVar1 = uStack_1e0;
          plVar1[2] = lStack_1d0;
          plVar1[3] = lVar23;
          lStack_1c8 = 0;
          plVar13 = plVar1 + lVar17 * -4;
          for (plVar14 = plVar21; plVar14 != plVar11; plVar14 = plVar14 + 4) {
            lVar25 = plVar14[1];
            lVar22 = *plVar14;
            plVar13[2] = plVar14[2];
            plVar13[1] = lVar25;
            *plVar13 = lVar22;
            plVar13[3] = plVar14[3];
            plVar14[3] = 0;
            plVar13 = plVar13 + 4;
          }
          for (; plVar21 != plVar11; plVar21 = plVar21 + 4) {
            func_0x00010788f614(plVar21);
          }
          plVar11 = plVar1 + 4;
          lVar22 = plVar7[0x4f2];
          plVar7[0x4f2] = (long)(plVar1 + lVar17 * -4);
          plVar7[0x4f3] = (long)plVar11;
          plVar7[0x4f4] = lVar16 + uVar15 * 0x20;
          if (lVar22 != 0) {
            __ZdlPv();
          }
        }
        plVar7[0x4f3] = (long)plVar11;
        func_0x00010788f614(&uStack_1e0);
        lVar17 = *(long *)(plVar7[0x4f3] + -8);
      }
      if (lVar5 != 0) {
        func_0x00010788b354();
        func_0x000107890514();
      }
    }
    func_0x00010788b354();
    func_0x000107890420();
  }
code_r0x00010788eea0:
  func_0x00010788b354();
  func_0x000107890438();
code_r0x00010788eeac:
  if (lVar17 != 0) {
    plStack_1e8 = plVar9;
    (**(code **)(*plVar9 + 0x10))(plVar9,&UNK_10f431582,0x12);
    func_0x0001078868d4(plVar9,lVar17);
    lStack_1f8 = 7;
    uStack_1f0 = 0x3f800000;
    uStack_1e0 = CONCAT44(7,(undefined4)uStack_1e0);
    uStack_1d8 = CONCAT44(0xff,uVar10);
    lStack_1d0 = CONCAT53(lStack_1d0._3_5_,0x20101);
    plVar7 = plVar9;
    func_0x000107887388(plVar9,&lStack_1f8,&uStack_1e0);
    lVar17 = plVar9[7];
    func_0x0001078888cc();
    _objc_msgSend(lVar17,plVar7,3,0,3,1);
    func_0x00010748eeb8(&plStack_1e8);
  }
  return;
}



/* Entry: 10788f1bc; end: 10788f203;  */

long FUN_10788f1bc(long param_1)

{
  long lVar1;
  
  lVar1 = 0x1b8;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      func_0x00010788b354();
      func_0x000107890438();
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 10788f428; end: 10788f433;  */

long FUN_10788f428(long param_1)

{
  func_0x00010789056c();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f594; end: 10788f613;  */

void FUN_10788f594(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  int extraout_w10;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48();
    uStack_18 = 0x10788f5b4;
    lVar5 = param_2[1];
    lVar4 = *param_2;
    puStack_20 = &stack0xfffffffffffffff0;
    puVar1 = &stack0xfffffffffffffff0;
    if (param_2[1] != 0) {
      do {
        puStack_20 = puVar1;
        func_0x000107890504();
        puVar1 = puStack_20;
      } while (extraout_w10 != 0);
    }
    lVar3 = param_2[2];
    uStack_40 = 0;
    uStack_38 = 0;
    plVar2[1] = lVar5;
    *plVar2 = lVar4;
    uStack_30 = 0;
    uStack_28 = 0;
    plVar2[2] = lVar3;
    func_0x00010725b1d4(&uStack_30);
    func_0x00010725b1d4(&uStack_40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010788f5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return;
}



/* Entry: 10788f74c; end: 10788f767;  */

void FUN_10788f74c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107877778(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788f894; end: 10788f8cb;  */

void FUN_10788f894(void)

{
  func_0x000107890844();
  return;
}



/* Entry: 10788fac8; end: 10788faef;  */

undefined8 * FUN_10788fac8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e4488;
  func_0x00010788fd00(puVar1 + 1);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar1;
}



/* Entry: 10788fe34; end: 10788fe47;  */

void FUN_10788fe34(void)

{
  func_0x00010788fe08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107890118; end: 107890143;  */

void FUN_107890118(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107890850();
  *param_1 = &PTR_DAT_1109e4578;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 107890948; end: 10789097b;  */

long FUN_107890948(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x0001078885bc();
  _objc_msgSend(uVar2,lVar1);
  return param_1;
}



/* Entry: 107890c48; end: 107890c6b;  */

undefined8 FUN_107890c48(undefined8 param_1)

{
  func_0x000107890d70();
  func_0x0001006393ec();
  return param_1;
}



/* Entry: 107890da4; end: 107890e0b;  */

void FUN_107890da4(ulong param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_2 == 0) {
    return;
  }
  func_0x0001078910e4();
  func_0x0001078910cc();
  do {
    func_0x000107891110();
  } while (extraout_w10 != 0);
  do {
    func_0x0001078910f4();
  } while (extraout_w10_00 != 0);
  func_0x00010788b4a0();
  func_0x0001078910cc();
  if (1 < param_1) {
    func_0x000107891120();
    func_0x000107890e0c();
  }
  func_0x00010788b354();
  func_0x000107891104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1078916f4; end: 1078916fb;  */

void FUN_1078916f4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1078918d8; end: 107891927;  */

long FUN_1078918d8(long param_1)

{
  long lVar1;
  
  lVar1 = 0x18;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      func_0x00010788b354();
      func_0x000107891994();
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 107891b0c; end: 107891b37;  */

undefined8 FUN_107891b0c(long param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x2758);
}



/* Entry: 107891f7c; end: 107891fe7;  */

void FUN_107891f7c(undefined8 param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((((int)param_3 != 0) && (param_3 >> 0x20 != 0)) && (param_4 != 0)) {
    func_0x000107893e30(param_5,param_3);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    FUN_1078892c4();
    func_0x0001078922d0();
    func_0x00010789224c(uVar1);
  }
  return;
}



/* Entry: 1078923c0; end: 10789248b;  */

void FUN_1078923c0(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  func_0x000107893608();
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  puStack_48 = puVar1;
  puStack_40 = puVar2;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 5) {
    if (puVar1[4] != 0) {
      uStack_98 = *puVar1;
      uStack_90 = 0;
      uStack_50 = 0;
      auStack_a0[0] = param_2;
      func_0x00010725b570(puVar1 + 1,auStack_a0);
      func_0x0001078935d8();
    }
  }
  func_0x000107892b74(&puStack_48);
  return;
}



/* Entry: 107892d34; end: 107892d83;  */

long * FUN_107892d34(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar3 = (long *)0x666666666666666;
    }
    return plVar3;
  }
  func_0x000107892e04();
  func_0x000107893644();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  func_0x000107892eb4(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 107892fbc; end: 107892fdb;  */

void FUN_107892fbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    func_0x00010725b6a4(lVar1 + -0x20);
  }
  return;
}



/* Entry: 107893128; end: 10789313b;  */

void FUN_107893128(void)

{
  func_0x0001078930fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789352c; end: 107893587;  */

undefined8
FUN_10789352c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107456660();
  func_0x000107893588(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}



/* Entry: 107893788; end: 1078937e7;  */

void FUN_107893788(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x000107893b20();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001078937c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x30))(*(long **)(param_1 + 0x60),param_2);
    return;
  }
  if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
    func_0x0001078937e8();
    *(undefined1 *)(param_1 + 0x5b) = 1;
  }
  return;
}



/* Entry: 107893b94; end: 107893dcf;  */

undefined8 FUN_107893b94(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  case 0:
    uVar1 = 0x2e;
    uVar2 = 0x30;
    break;
  case 1:
    uVar1 = 4;
    uVar2 = 10;
    break;
  case 2:
    uVar1 = 5;
    uVar2 = 0xb;
    break;
  case 3:
    uVar1 = 6;
    uVar2 = 0xc;
    break;
  case 4:
    uVar1 = 0x2d;
    uVar2 = 0x2f;
    break;
  case 5:
    uVar2 = 7;
    if (param_2 == 0) {
      uVar2 = 1;
    }
    return uVar2;
  case 6:
    uVar1 = 2;
    uVar2 = 8;
    break;
  case 7:
    uVar1 = 3;
    uVar2 = 9;
    break;
  case 8:
    uVar1 = 0x32;
    uVar2 = 0x34;
    break;
  case 9:
    uVar1 = 0x10;
    uVar2 = 0x16;
    break;
  case 10:
    uVar1 = 0x11;
    uVar2 = 0x17;
    break;
  case 0xb:
    uVar1 = 0x12;
    uVar2 = 0x18;
    break;
  case 0xc:
    uVar1 = 0x31;
    uVar2 = 0x33;
    break;
  case 0xd:
    uVar1 = 0xd;
    uVar2 = 0x13;
    break;
  case 0xe:
    uVar1 = 0xe;
    uVar2 = 0x14;
    break;
  case 0xf:
    uVar1 = 0xf;
    uVar2 = 0x15;
    break;
  default:
    return 0x20;
  case 0x11:
    return 0x21;
  case 0x12:
    return 0x22;
  case 0x13:
    return 0x23;
  case 0x14:
    return 0x24;
  case 0x15:
    return 0x25;
  case 0x16:
    return 0x26;
  case 0x17:
    return 0x27;
  case 0x18:
    return 0x1c;
  case 0x19:
    return 0x1d;
  case 0x1a:
    return 0x1e;
  case 0x1b:
    return 0x1f;
  }
  if (param_2 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


