/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078730a8; end: 1078730cb;  */

undefined8 FUN_1078730a8(undefined8 param_1)

{
  func_0x0001078730cc(param_1,0);
  return param_1;
}



/* Entry: 107873828; end: 10787386b;  */

undefined1  [16] FUN_107873828(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  if ((char)param_1[1] == '\x01') {
    plVar1 = param_1;
    func_0x00010789a00c();
    auVar2._8_8_ = 1;
    auVar2._0_8_ = *param_1 + (long)plVar1;
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 107873b10; end: 107873b53;  */

bool FUN_107873b10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107873928();
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar1 != lVar2) {
    *param_1 = lVar1 + 1;
  }
  return lVar1 != lVar2;
}



/* Entry: 107874228; end: 10787445b;  */

bool FUN_107874228(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar2 = param_1;
  func_0x000107873f80();
  if ((uVar2 & 1) != 0) {
    return false;
  }
  uVar4 = (uint)param_1;
  if ((uVar4 & 0xff80) == 0x80) {
    uVar1 = (uVar4 & 0xff) - 0xa7;
    if ((uVar1 < 0x31) && ((1L << ((ulong)uVar1 & 0x3f) & 0x1000000e00485U) != 0)) {
      return false;
    }
    if ((uVar4 & 0xff) == 0xf7) {
      return false;
    }
  }
  else if (uVar4 - 0x2000 < 0x70) {
    if ((uVar4 - 0x2016 < 0x3c) &&
       ((0x80e10600c000c01U >> ((ulong)(uVar4 - 0x2016) & 0x3f) & 1) != 0)) {
      return false;
    }
  }
  else if (uVar4 - 0x2100 < 0x90) {
    return false;
  }
  if ((uVar4 & 0xff00) == 0x2300) {
    if ((uVar4 & 0x23f8) == 0x2300 || (uVar4 - 0x230c & 0xffff) < 0x14) {
      return false;
    }
    if (((uint)((uVar4 - 0x2324 & 0xfff8) == 0) & 0x9fU >> (ulong)(uVar4 - 0x2324 & 0x1f)) != 0) {
      return false;
    }
    if ((uVar4 - 0x237d & 0xffff) < 0x1e) {
      return false;
    }
    if (((uVar4 - 0x23e2 < 0x1e || (uVar4 - 0x23d1 & 0xffff) < 0xb) || uVar4 == 0x23cf) ||
        (uVar4 - 0x23be & 0xffff) < 0x10) {
      return false;
    }
  }
  if (uVar4 - 0x25a0 < 0x60) {
    return false;
  }
  if ((0x9f < (uVar4 - 0x2460 & 0xffff) && (uVar4 & 0xffc0) != 0x2400) && (uVar4 & 0xffe0) != 0x2440
     ) {
    if (((uVar4 & 0xff00) == 0x2600) || ((uVar4 & 0xffc0) != 0x3000)) {
      sVar3 = (short)param_1;
      uVar5 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(sVar3 + 0x100U) < 0xf0),
                                  CONCAT24(-(ushort)((ushort)(sVar3 + 0x1d0U) < 0x40),
                                           CONCAT22(-(ushort)((ushort)(sVar3 + 0x2000U) < 0x1900),
                                                    -(ushort)((ushort)(sVar3 + 0xcf60U) < 0x60)))),2
                        );
      if (((uVar5 & 1) == 0) &&
         (((0x17 < uVar4 - 0x221e || ((1 << (ulong)(uVar4 - 0x221e & 0x1f) & 0xc00001U) == 0)) &&
          (0x67 < uVar4 - 0x2700)))) {
        return (uVar4 - 0x2794 & 0xffff) < 0xffe2 && (uVar4 & 0xfffe) != 0xfffc;
      }
    }
    return false;
  }
  return false;
}



/* Entry: 1078747a0; end: 107874817;  */

void FUN_1078747a0(ushort *param_1,long param_2,ushort *param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1 >> 2;
  while (puVar3 = param_1, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    puVar1 = puVar3 + uVar4 * 2;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = puVar1 + 2;
    if (*param_3 <= *puVar1) {
      uVar2 = uVar4;
      param_1 = puVar3;
    }
  }
  return;
}



/* Entry: 107874c00; end: 107874c47;  */

void FUN_107874c00(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  func_0x000107874c48();
  if ((lVar1 == 1) && (func_0x000107874d7c(), extraout_x8 != 0)) {
    func_0x000107874d6c();
    func_0x000107874d94();
    func_0x000107874d8c();
  }
  func_0x000107874c84(param_1);
  return;
}



/* Entry: 107874dc0; end: 107874e03;  */

int * FUN_107874dc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 7) {
    return (int *)0x0;
  }
  iVar3 = *param_1;
  param_1 = param_1 + 2;
  if (iVar3 != 2) {
    param_1 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (1 < iVar3 - 3U) {
    piVar1 = param_1;
  }
  piVar2 = (int *)0x0;
  if (1 < iVar3 - 5U) {
    piVar2 = piVar1;
  }
  return piVar2;
}



/* Entry: 10787526c; end: 107875447;  */

bool FUN_10787526c(float param_1,short *param_2,long *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  float fVar13;
  float fVar14;
  
  psVar11 = (short *)*param_3;
  if (param_3[1] - (long)psVar11 == 4) {
    func_0x0001073f0fe0(param_3,0);
    fVar13 = (float)((int)(short)*param_3 - (int)*param_2);
    fVar14 = (float)((int)*(short *)((long)param_3 + 2) - (int)param_2[1]);
    bVar8 = fVar14 * fVar14 + fVar13 * fVar13 < param_1 * param_1;
  }
  else {
    psVar9 = psVar11;
    if (psVar11 == (short *)param_3[1]) {
      bVar8 = false;
    }
    else {
      do {
        psVar12 = psVar9 + 2;
        if (psVar12 == (short *)param_3[1]) {
          return false;
        }
        iVar7 = (int)*psVar11;
        sVar1 = *psVar12;
        iVar10 = (int)psVar11[1];
        sVar2 = psVar9[3];
        if (*psVar11 == sVar1 && psVar11[1] == sVar2) {
          fVar13 = (float)(iVar7 - *param_2);
          iVar10 = iVar10 - param_2[1];
LAB_107875394:
          fVar14 = (float)iVar10;
        }
        else {
          iVar5 = sVar1 - iVar7;
          fVar13 = (float)iVar5;
          iVar6 = sVar2 - iVar10;
          fVar14 = (float)iVar6;
          sVar3 = *param_2;
          sVar4 = param_2[1];
          fVar14 = (float)((sVar3 - iVar7) * iVar5 + (sVar4 - iVar10) * iVar6) /
                   (fVar14 * fVar14 + fVar13 * fVar13);
          if (fVar14 < 0.0) {
            fVar13 = (float)(iVar7 - sVar3);
            iVar10 = iVar10 - sVar4;
            goto LAB_107875394;
          }
          if (1.0 < fVar14) {
            fVar13 = (float)((int)sVar1 - (int)sVar3);
            iVar10 = (int)sVar2 - (int)sVar4;
            goto LAB_107875394;
          }
          psVar9 = psVar12;
          func_0x00010749ec9c(psVar12,psVar11);
          fVar13 = (fVar14 * (float)(int)(short)psVar9 + (float)(int)*psVar11) -
                   (float)(int)*param_2;
          fVar14 = (fVar14 * (float)((int)psVar9 >> 0x10) + (float)(int)psVar11[1]) -
                   (float)(int)param_2[1];
        }
        psVar11 = psVar11 + 2;
        bVar8 = true;
        psVar9 = psVar12;
      } while (param_1 * param_1 <= fVar14 * fVar14 + fVar13 * fVar13);
    }
  }
  return bVar8;
}



/* Entry: 107875a18; end: 107875aef;  */

undefined1 FUN_107875a18(float param_1,long *param_2,float *param_3)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar5 = param_2;
  func_0x0001078757d4();
  if (((ulong)plVar5 & 1) == 0) {
    lVar4 = *param_2;
    lVar1 = param_2[1] - lVar4 >> 3;
    pfVar6 = (float *)(lVar4 + 4);
    lVar7 = 1;
    do {
      if (lVar7 - lVar1 == 1) {
        return 0;
      }
      lVar3 = 0;
      if (lVar7 != lVar1) {
        lVar3 = lVar7;
      }
      fVar8 = pfVar6[-1];
      fVar9 = *pfVar6;
      pfVar2 = (float *)(lVar4 + lVar3 * 8);
      fVar10 = *pfVar2 - fVar8;
      fVar11 = pfVar2[1] - fVar9;
      fVar12 = (float)NEON_fminnm(((param_3[1] - fVar9) * fVar11 + fVar10 * (*param_3 - fVar8)) /
                                  (fVar11 * fVar11 + fVar10 * fVar10),0x3f800000);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar8 = (fVar8 + fVar10 * fVar12) - *param_3;
      fVar9 = (fVar9 + fVar11 * fVar12) - param_3[1];
      lVar7 = lVar7 + 1;
      pfVar6 = pfVar6 + 2;
    } while (param_1 * param_1 < fVar9 * fVar9 + fVar8 * fVar8);
  }
  return 1;
}



/* Entry: 107875f24; end: 107876097;  */

void FUN_107875f24(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined1 auStack_90 [64];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107876624();
  if ((uVar1 & 1) == 0) {
    func_0x000100060b18(param_1,&uStack_50);
    return;
  }
  uVar1 = *(ulong *)(param_5 + 8);
  if (-1 < (char)*(byte *)(param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_5 + 0x17);
  }
  if (uVar1 == 0) {
    uVar1 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar1,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
    ___cxa_free_exception();
    func_0x000107876654();
    func_0x0001078765b0();
    if ((uVar1 & 1) != 0) {
      func_0x0001078765fc();
      func_0x00010787666c(uStack_130,uStack_128);
      if ((uStack_130 & 1) != 0) {
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
  func_0x000107884e08(auStack_90,param_3,param_4);
  func_0x000100456794(auStack_d8,param_2,&UNK_10f43082b);
  func_0x000100610910(auStack_c0,auStack_d8,param_5);
  func_0x00010048a6c8(&ppppppuStack_a8,auStack_c0,&UNK_10f43084b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    ppppppuStack_a8 = &ppppppuStack_a8;
  }
  func_0x000107885088(param_1,ppppppuStack_a8,uStack_a0,param_3,param_4,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_a8);
  return;
}



/* Entry: 1078764b8; end: 1078765af;  */

long * FUN_1078764b8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined1 auStack_98 [24];
  long alStack_80 [6];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  func_0x000107876624();
  if ((int)plVar5 != 0) {
    lVar2 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar2; lVar6 = lVar6 + 0x38) {
      func_0x00010724ef84(&puStack_b0,lVar6);
      uVar1 = uStack_a8;
      ppuVar3 = (undefined1 **)puStack_b0;
      if (-1 < (char)bStack_99) {
        uVar1 = (ulong)bStack_99;
        ppuVar3 = &puStack_b0;
      }
      param_3 = param_4;
      func_0x0001078762e8(auStack_98,ppuVar3,uVar1,param_4,param_5);
      func_0x0001072625b4(alStack_80,auStack_98);
      param_2 = alStack_80;
      func_0x000104c2f1f0(lVar6);
      plVar5 = alStack_80;
      func_0x000104c2f714(plVar5);
      func_0x000107876664();
      func_0x00010787665c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x000107876654();
    iVar4 = (int)&plStack_d0;
    puStack_b8 = &UNK_1078765b0;
    plStack_d0 = param_2;
    uStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    plStack_50 = param_2;
    lStack_48 = param_3;
    func_0x000107875ee0(&plStack_d0,0,9,&UNK_10f430926);
    return (long *)(ulong)(iVar4 == 0);
  }
  return plVar5;
}



/* Entry: 107876e38; end: 107876fff;  */

void FUN_107876e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  if (param_6 != param_5) {
    *param_5 = *param_6;
    param_5[1] = param_6[1];
    param_5[2] = param_6[2];
    param_5[3] = param_6[3];
    func_0x00010787751c();
  }
  ___sincos_stret();
  func_0x000107877588();
  param_5[4] = param_3;
  param_5[5] = param_4;
  func_0x000107877574();
  param_5[6] = param_3;
  param_5[7] = param_4;
  func_0x000107877560();
  param_5[8] = param_3;
  param_5[9] = param_4;
  func_0x00010787754c();
  param_5[10] = param_3;
  param_5[0xb] = param_1;
  return;
}



/* Entry: 107877718; end: 107877777;  */

undefined8 * FUN_107877718(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  *param_1 = 0;
  uVar1 = 1;
  __Znwm(1);
  uStack_28 = 0;
  func_0x0001078777a0(param_1,uVar1);
  func_0x000107877778(&uStack_28);
  return param_1;
}



/* Entry: 107878130; end: 107878183;  */

void FUN_107878130(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  ppuStack_30 = &PTR_DAT_110cf0f18;
  uStack_18 = 0;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_3;
  func_0x00010787797c(param_1,&ppuStack_30,param_4);
  return;
}



/* Entry: 10787863c; end: 1078786d7;  */

void FUN_10787863c(void)

{
  return;
}



/* Entry: 107878b1c; end: 107878b7f;  */

void FUN_107878b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  
  uVar1 = param_6[2];
  uStack_38 = param_6[1];
  uVar2 = *param_6;
  uStack_28 = 0;
  uStack_40 = uVar2;
  uStack_30 = uVar1;
  func_0x00010787899c(param_5,&uStack_40);
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x0001078788e4(param_5);
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x00010787899c(&uStack_60,&uStack_80);
  return;
}



/* Entry: 107878f60; end: 107878f73;  */

void FUN_107878f60(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
            (param_1,*(long *)(param_2 + 0x18),(param_2 - *(long *)(param_2 + 0x18)) + 0x15);
  return;
}



/* Entry: 107879230; end: 10787928f;  */

undefined1 * FUN_107879230(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return &stack0x00000008;
}



/* Entry: 107879a74; end: 107879b33;  */

void FUN_107879a74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [16];
  
  if (lRam0000000113823e40 == 0) {
    func_0x0001072a6080(auStack_30);
    func_0x000107879af0(0x113823e40,auStack_30);
    func_0x0001072ae334(auStack_30);
  }
  lVar4 = lRam0000000113823e48;
  *param_1 = lRam0000000113823e40;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 107879cf8; end: 107879d17;  */

void FUN_107879cf8(void)

{
  undefined1 uStack_11;
  
  func_0x00010787ac5c(&uStack_11);
  return;
}



/* Entry: 10787a600; end: 10787a7d3;  */

void FUN_10787a600(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if ((uVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
    uVar5 = uVar4 - 1;
    uVar11 = 0;
    if (uVar4 != 0) {
      uVar11 = param_2 / uVar4;
    }
    if ((uVar4 & uVar5) == 0) {
      uVar7 = uVar5 & param_2;
    }
    else {
      uVar7 = param_2;
      if (uVar4 <= param_2) {
        uVar7 = param_2 - uVar11 * uVar4;
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    plStack_28 = *(long **)(lVar6 + uVar7 * 8);
    if (plStack_28 != (long *)0x0) {
      do {
        while( true ) {
          plStack_28 = (long *)*plStack_28;
          if (plStack_28 == (long *)0x0) {
            return;
          }
          uVar9 = plStack_28[1];
          if (uVar9 != param_2) break;
          if (plStack_28[2] == param_2) {
            lVar8 = *plStack_28;
            if ((uVar4 & uVar5) == 0) {
              param_2 = param_2 & uVar5;
            }
            else if (uVar4 <= param_2) {
              param_2 = param_2 - uVar11 * uVar4;
            }
            plVar2 = *(long **)(lVar6 + param_2 * 8);
            do {
              plVar10 = plVar2;
              plVar2 = (long *)*plVar10;
            } while ((long *)*plVar10 != plStack_28);
            plStack_20 = (long *)(param_1 + 0x20);
            if (plVar10 == plStack_20) {
LAB_10787a70c:
              if (lVar8 == 0) {
LAB_10787a740:
                *(undefined8 *)(lVar6 + param_2 * 8) = 0;
                lVar8 = *plStack_28;
                goto LAB_10787a748;
              }
              uVar11 = *(ulong *)(lVar8 + 8);
              if ((uVar4 & uVar5) == 0) {
                uVar7 = uVar11 & uVar5;
              }
              else {
                uVar7 = uVar11;
                if (uVar4 <= uVar11) {
                  uVar7 = 0;
                  if (uVar4 != 0) {
                    uVar7 = uVar11 / uVar4;
                  }
                  uVar7 = uVar11 - uVar7 * uVar4;
                }
              }
              if (uVar7 != param_2) goto LAB_10787a740;
            }
            else {
              uVar11 = plVar10[1];
              if ((uVar4 & uVar5) == 0) {
                uVar11 = uVar11 & uVar5;
              }
              else if (uVar4 <= uVar11) {
                uVar7 = 0;
                if (uVar4 != 0) {
                  uVar7 = uVar11 / uVar4;
                }
                uVar11 = uVar11 - uVar7 * uVar4;
              }
              if (uVar11 != param_2) goto LAB_10787a70c;
LAB_10787a748:
              if (lVar8 == 0) goto LAB_10787a780;
              uVar11 = *(ulong *)(lVar8 + 8);
            }
            if ((uVar4 & uVar5) == 0) {
              uVar11 = uVar11 & uVar5;
            }
            else if (uVar4 <= uVar11) {
              uVar5 = 0;
              if (uVar4 != 0) {
                uVar5 = uVar11 / uVar4;
              }
              uVar11 = uVar11 - uVar5 * uVar4;
            }
            if (uVar11 != param_2) {
              *(long **)(lVar6 + uVar11 * 8) = plVar10;
              lVar8 = *plStack_28;
            }
LAB_10787a780:
            *plVar10 = lVar8;
            *plStack_28 = 0;
            *(long *)(param_1 + 0x28) = lVar3 + -1;
            uStack_18 = 1;
            uStack_17 = 0;
            uStack_13 = 0;
            func_0x00010787a888(&plStack_28);
            return;
          }
        }
        if ((uVar4 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar1 * uVar4;
        }
      } while (uVar9 == uVar7);
    }
  }
  return;
}



/* Entry: 10787a92c; end: 10787a93f;  */

void FUN_10787a92c(void)

{
  func_0x00010787abd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787ac34; end: 10787ac5b;  */

long FUN_10787ac34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10787ad88; end: 10787ae03;  */

long FUN_10787ad88(long param_1)

{
  func_0x00010787adb0(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x00010787ae04(param_1,0);
  return param_1;
}



/* Entry: 10787af80; end: 10787b1af;  */

/* WARNING: Possible PIC construction at 0x00010787afec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787aff0) */
/* WARNING: Removing unreachable block (ram,0x00010787b100) */
/* WARNING: Removing unreachable block (ram,0x00010787b0a0) */
/* WARNING: Removing unreachable block (ram,0x00010787b110) */
/* WARNING: Removing unreachable block (ram,0x00010787b168) */
/* WARNING: Removing unreachable block (ram,0x00010787b0e4) */

undefined8 * FUN_10787af80(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 auStack_a0 [12];
  
  lVar3 = param_1;
  func_0x00010787bdec();
  func_0x00010724b408(lVar3);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  __ZNSt3__17promiseIvEC1Ev(auStack_b8);
  __ZNSt3__17promiseIvE10get_futureEv(auStack_a0,auStack_b8);
  uVar2 = auStack_a0[0];
  puVar1 = (undefined8 *)(param_1 + 0x50);
  uStack_c8 = 0x10787aff0;
  auStack_a0[0] = 0;
  uStack_e8 = *puVar1;
  *puVar1 = uVar2;
  puStack_e0 = (undefined8 *)(param_1 + 0x48);
  lStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  __ZNSt3__16futureIvED1Ev(&uStack_e8);
  return puVar1;
}



/* Entry: 10787b678; end: 10787b76f;  */

void FUN_10787b678(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *param_4;
  return;
}



/* Entry: 10787b9c4; end: 10787b9f7;  */

void FUN_10787b9c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return;
}



/* Entry: 10787bbe8; end: 10787bd03;  */

void FUN_10787bbe8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10787bc9c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10787bc9c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10787bc9c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10787bf64; end: 10787c02b;  */

undefined8 * FUN_10787bf64(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  *param_1 = &PTR_DAT_1109e3f98;
  param_1[1] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3cb0b1bb;
  uVar1 = 0;
  if ((param_2 & 0x100000000) != 0) {
    uVar1 = (undefined4)param_2;
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_3);
  func_0x0001077b1764(param_1 + 0x10,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 10787c3c8; end: 10787c40f;  */

/* WARNING: Possible PIC construction at 0x00010787c3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787c400) */

long FUN_10787c3c8(long param_1)

{
  long lStack_48;
  
  func_0x00010726b264(param_1 + 0x98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x80);
  func_0x0001077b2f78(param_1 + 0x58);
  func_0x0001073b0514(param_1 + 0x30);
  lStack_48 = param_1 + 0x18;
  func_0x0001077b3038(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 10787c948; end: 10787c9c3;  */

void FUN_10787c948(long *param_1,ulong param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x0001075162f0();
      func_0x00010781dd60(auStack_48);
      func_0x0001078814b0();
      func_0x000107881804();
      lVar1 = lStack_a8;
      if (lStack_a8 != lStack_a0) {
        func_0x0001078813ec();
        func_0x0001078813d8();
        func_0x00010787f63c();
        lVar1 = lStack_a0;
      }
      func_0x000107881728(lVar1,lStack_a8);
      FUN_10787c948(extraout_x8);
      for (; lStack_a8 != lStack_a0; lStack_a8 = lStack_a8 + 0x18) {
        func_0x0001078817ec();
      }
      func_0x00010788162c();
      return;
    }
    func_0x00010781dd18(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010781dcf8(param_1,auStack_48);
    func_0x00010781dd60(auStack_48);
  }
  return;
}



/* Entry: 10787deb0; end: 10787e50b;  */

void FUN_10787deb0(undefined8 param_1,long param_2,undefined8 param_3,byte *param_4)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  byte bVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double *pdVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  double extraout_d0_03;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double extraout_d1;
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_d1_02;
  double extraout_d1_03;
  double extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  undefined8 extraout_d2_02;
  double extraout_d2_03;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  undefined8 uStack_770;
  undefined8 uStack_768;
  double dStack_760;
  undefined8 uStack_758;
  double *pdStack_750;
  char acStack_710 [4];
  uint uStack_70c;
  int iStack_708;
  int iStack_704;
  double dStack_6b0;
  double dStack_6a8;
  double dStack_6a0;
  double dStack_698;
  byte bStack_650;
  uint uStack_64c;
  uint uStack_648;
  int iStack_644;
  double dStack_640;
  double dStack_638;
  double dStack_630;
  double dStack_628;
  double dStack_620;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double adStack_128 [5];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  
  dVar22 = (double)func_0x0001078817d4();
  uVar19 = (uint)param_3;
  uVar3 = (uint)*param_4;
  if (param_4[1] == 0) {
    uVar3 = uVar19;
  }
  dStack_628 = (double)*(uint *)(param_2 + 0x4c) / 2.0;
  dStack_620 = (double)*(uint *)(param_2 + 0x50) / 2.0;
  auStack_1a8 = func_0x0001073c2238(param_2,param_3,&dStack_628);
  uStack_198 = 0;
  func_0x000107416bf8(param_2);
  func_0x00010785c1dc(&dStack_628,0x3ff0000000000000,0,param_2 + 0xd30,1);
  dVar32 = *(double *)(param_4 + 8);
  dStack_640 = 0.0;
  dStack_638 = 0.0;
  dStack_630 = 0.0;
  func_0x000107881970();
  dVar15 = 7.08292509878011e-320;
  pdStack_750 = &dStack_630;
  __Znwm();
  dStack_630 = (double)((long)dVar15 + 0x3800);
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  dStack_760 = 0.0;
  dStack_640 = dVar15;
  dStack_638 = dVar15;
  func_0x00010787eda4(&uStack_770);
  dStack_6a0 = 0.0;
  dStack_6a8 = 0.0;
  dStack_6b0 = 0.0;
  adStack_128[1] = 0.0;
  dStack_130 = dVar22;
  adStack_128[0] = dVar22;
  func_0x000107429dc8(&uStack_770,&dStack_6b0,&dStack_130);
  dVar15 = dStack_638;
  acStack_710[0] = '\0';
  uStack_70c = 0;
  iStack_708 = 0;
  iStack_704 = 1;
  if ((ulong)dStack_638 < (ulong)dStack_630) {
    func_0x0001078811ac();
    dVar15 = (double)((long)dVar15 + 0x70);
  }
  else {
    dVar15 = dStack_640;
    FUN_10787ede4(dStack_640,dStack_630,((long)dStack_638 - (long)dStack_640) / 0x70 + 1);
    func_0x00010787ed60(&dStack_6b0,dVar15,((long)dStack_638 - (long)dStack_640) / 0x70,&dStack_630)
    ;
    dVar15 = dStack_6a0;
    func_0x0001078811ac();
    dVar15 = (double)((long)dVar15 + 0x70);
    func_0x00010788197c(dStack_6a8);
    dVar21 = (double)(extraout_x8 + extraout_x9 * 0x70);
    _memcpy(dVar21);
    dVar25 = dStack_630;
    dStack_630 = dStack_698;
    dStack_6a0 = dStack_640;
    dStack_698 = dVar25;
    dStack_6b0 = dStack_640;
    dStack_6a8 = dStack_640;
    dStack_640 = dVar21;
    dStack_638 = dVar15;
    func_0x00010787eda4(&dStack_6b0);
  }
  auVar23 = NEON_fmov(0x3ff0000000000000,8);
  auVar24 = NEON_fmov(0xbff0000000000000,8);
  dStack_638 = dVar15;
LAB_10787e0d4:
  if (dStack_640 == dStack_638) {
    func_0x00010787ed30(&dStack_640);
    return;
  }
  dVar15 = (double)((long)dStack_638 + -0x70);
  func_0x0001078811b8(&dStack_6b0,dVar15);
  dStack_638 = dVar15;
  if (iStack_644 != 2) goto code_r0x00010787e100;
  goto LAB_10787e250;
code_r0x00010787e100:
  if (1 < bStack_650) {
    dVar15 = (double)(1 << (ulong)(bStack_650 & 0x1f));
    auVar26._4_4_ = 0;
    auVar26._0_4_ = uStack_64c;
    auVar26._8_4_ = uStack_648;
    auVar26._12_4_ = 0;
    auVar26 = NEON_ucvtf(auVar26,8);
    dStack_d0 = auVar26._0_8_ / dVar15;
    dStack_c8 = auVar26._8_8_ / dVar15;
    dStack_c0 = (1.0 / dVar15) * 0.0001220703125;
    dStack_168 = 0.0;
    dStack_170 = 0.0;
    dStack_b8 = dStack_c0;
    func_0x000107881588(&dStack_170);
    dStack_188 = 0.0;
    dStack_190 = 8192.0;
    dStack_130 = extraout_d0;
    adStack_128[0] = extraout_d1;
    adStack_128[1] = extraout_d2;
    func_0x000107881588(&dStack_190);
    uStack_138 = 0x40c0000000000000;
    uStack_140 = 0x40c0000000000000;
    adStack_128[2] = extraout_d0_00;
    adStack_128[3] = (double)extraout_d1_00;
    adStack_128[4] = (double)extraout_d2_00;
    func_0x000107881588(&uStack_140);
    uStack_148 = 0x40c0000000000000;
    uStack_150 = 0;
    uStack_100 = extraout_d0_01;
    uStack_f8 = extraout_d1_01;
    uStack_f0 = extraout_d2_01;
    func_0x000107881588(&uStack_150);
    lVar17 = 0;
    uStack_e8 = extraout_d0_02;
    uStack_e0 = extraout_d1_02;
    uStack_d8 = extraout_d2_02;
    auVar26 = auVar24;
    dStack_160 = 1.0;
    dStack_170 = auVar23._0_8_;
    dStack_168 = auVar23._8_8_;
    dStack_180 = -1.0;
    while( true ) {
      dStack_188 = auVar26._8_8_;
      dStack_190 = auVar26._0_8_;
      if (lVar17 == 0x60) break;
      pauVar1 = (undefined1 (*) [16])((long)&dStack_130 + lVar17);
      auVar29._0_8_ = -(ulong)(dStack_190 < *(double *)*pauVar1);
      auVar29._8_8_ = -(ulong)(dStack_188 < *(double *)((long)adStack_128 + lVar17));
      dStack_170 = (double)((ulong)dStack_170 ^
                           ((ulong)dStack_170 ^ *(ulong *)*pauVar1) &
                           -(ulong)(*(double *)*pauVar1 < dStack_170));
      dStack_168 = (double)((ulong)dStack_168 ^
                           ((ulong)dStack_168 ^ *(ulong *)((long)adStack_128 + lVar17)) &
                           -(ulong)(*(double *)((long)adStack_128 + lVar17) < dStack_168));
      auVar26 = auVar26 ^ (auVar26 ^ *pauVar1) & auVar29;
      dVar15 = *(double *)((long)adStack_128 + lVar17 + 8);
      dVar25 = dVar15;
      if (dStack_160 <= dVar15) {
        dVar25 = dStack_160;
      }
      if (dVar15 <= dStack_180) {
        dVar15 = dStack_180;
      }
      lVar17 = lVar17 + 0x18;
      dStack_160 = dVar25;
      dStack_180 = dVar15;
    }
    func_0x000107429dc8(&uStack_770,&dStack_170,&dStack_190);
    _memcpy(acStack_710,&dStack_130,0x60);
    pdVar16 = &dStack_628;
    func_0x00010785c710(pdVar16,&uStack_770);
    iStack_644 = (int)pdVar16;
  }
  if (iStack_644 != 0) {
LAB_10787e250:
    iVar4 = iStack_644;
    func_0x00010787e9c8(&dStack_6b0,auStack_1a8);
    uVar20 = uStack_64c;
    bVar10 = bStack_650;
    uVar11 = auStack_1a8._0_8_;
    uVar18 = (uint)bStack_650;
    if (bStack_650 != uVar19) {
      dVar15 = extraout_d2_03;
      if (extraout_d2_03 <= extraout_d1_03) {
        dVar15 = extraout_d1_03;
      }
      dVar25 = dVar32 + (double)(1 << (ulong)(uVar19 - bStack_650 & 0x1f)) + -2.0;
      if (dVar15 <= extraout_d0_03) {
        dVar15 = extraout_d0_03;
      }
      bVar12 = false;
      bVar13 = true;
      bVar14 = false;
      if (uVar19 <= uVar18) {
        bVar12 = false;
        bVar13 = false;
        bVar14 = true;
        if (!NAN(dVar15) && !NAN(dVar25)) {
          bVar12 = dVar15 < dVar25;
          bVar13 = dVar15 == dVar25;
          bVar14 = false;
        }
      }
      if (bVar13 || bVar12 != bVar14) {
        iVar5 = uStack_648 * 2;
        uVar18 = uStack_64c << 1;
        cVar6 = bStack_650 + 1;
        for (uVar20 = 0; uVar20 != 4; uVar20 = uVar20 + 1) {
          func_0x00010787ea4c(&uStack_770,&dStack_6b0,uVar20);
          dVar15 = dStack_638;
          iStack_708 = iVar5 + (uVar20 >> 1);
          uStack_70c = uVar18 | uVar20 & 1;
          acStack_710[0] = cVar6;
          iStack_704 = iVar4;
          if ((ulong)dStack_638 < (ulong)dStack_630) {
            func_0x0001078811b8(dStack_638,&uStack_770);
            dVar15 = (double)((long)dVar15 + 0x70);
          }
          else {
            dVar15 = dStack_640;
            FUN_10787ede4(dStack_640,dStack_630,((long)dStack_638 - (long)dStack_640) / 0x70 + 1);
            func_0x00010787ed60(&dStack_130,dVar15,((long)dStack_638 - (long)dStack_640) / 0x70,
                                &dStack_630);
            dVar15 = adStack_128[1];
            func_0x0001078811b8(adStack_128[1],&uStack_770);
            dVar15 = (double)((long)dVar15 + 0x70);
            func_0x00010788197c(adStack_128[0]);
            dVar21 = (double)(extraout_x8_00 + extraout_x9_00 * 0x70);
            _memcpy(dVar21);
            dVar25 = dStack_630;
            dStack_630 = adStack_128[2];
            adStack_128[1] = dStack_640;
            adStack_128[2] = dVar25;
            adStack_128[0] = dStack_640;
            dStack_130 = dStack_640;
            dStack_640 = dVar21;
            dStack_638 = dVar15;
            func_0x00010787eda4(&dStack_130);
          }
          dStack_638 = dVar15;
        }
        goto LAB_10787e0d4;
      }
    }
    lVar17 = param_2;
    func_0x000107418388();
    uVar9 = uStack_770;
    dVar15 = 1.0 / (double)(1 << (ulong)(uVar18 & 0x1f));
    dVar25 = (double)uVar20;
    dVar21 = dVar15 * dVar25;
    dVar27 = dVar15 * (double)uVar11;
    dVar28 = (dVar21 + 1.0) - dVar27;
    dVar31 = (dVar21 + -1.0) - dVar27;
    auVar30._0_8_ = dVar28 - dVar15;
    auVar30._8_8_ = dVar31 - dVar15;
    auVar26 = NEON_fmaxnm(auVar30,ZEXT216(0),8);
    auVar8._8_8_ = -dVar31;
    auVar8._0_8_ = -dVar28;
    auVar7._8_8_ = -(ulong)(dVar31 < 0.0);
    auVar7._0_8_ = -(ulong)(dVar28 < 0.0);
    auVar26 = auVar26 ^ (auVar26 ^ auVar8) & auVar7;
    dVar21 = dVar21 - dVar27;
    dVar15 = dVar21 - dVar15;
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    dVar27 = -dVar21;
    if (0.0 <= dVar21) {
      dVar27 = dVar15;
    }
    dVar28 = auVar26._8_8_;
    dVar21 = auVar26._0_8_;
    dVar15 = dVar21;
    if (dVar28 <= dVar21) {
      dVar15 = dVar28;
    }
    if (dVar27 <= dVar15) {
      dVar15 = dVar27;
    }
    iVar4 = -(uint)(dVar15 == dVar28);
    if (dVar15 == dVar21) {
      iVar4 = 1;
    }
    bVar2 = (byte)uVar3;
    if (uVar18 != uVar19) {
      bVar2 = bVar10;
    }
    iVar5 = iVar4;
    if ((int)lVar17 == 0) {
      iVar5 = 0;
    }
    dVar15 = (dVar25 + dVar22 * (double)iVar4 + 0.5) - (double)auStack_1a8._0_8_;
    dVar25 = ((double)uStack_648 + 0.5) - (double)auStack_1a8._8_8_;
    uStack_770 = CONCAT71(uStack_770._1_7_,bVar2);
    uStack_770._5_3_ = SUB83(uVar9,5);
    uStack_770._0_5_ = CONCAT14(bVar10,CONCAT22((short)iVar5,(undefined2)uStack_770));
    uStack_768 = CONCAT44(uStack_648,uVar20);
    dStack_760 = dVar25 * dVar25 + dVar15 * dVar15;
    func_0x00010787ec10(param_1,&uStack_770);
  }
  goto LAB_10787e0d4;
}



/* Entry: 10787eb70; end: 10787ebaf;  */

long * FUN_10787eb70(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x70;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10787ede4; end: 10787ee3b;  */

ulong FUN_10787ede4(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 < 0x24924924924924a) {
    uVar1 = (long)(param_2 - (long)param_1) / 0x70;
    uVar2 = uVar1 * 2;
    if (uVar2 < param_3 || uVar2 - param_3 == 0) {
      uVar2 = param_3;
    }
    if (0x124924924924923 < uVar1) {
      uVar2 = 0x249249249249249;
    }
    return uVar2;
  }
  func_0x00010787ed54();
  uVar2 = *param_1;
  *param_1 = param_2;
  if (uVar2 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return uVar2;
}



/* Entry: 10787f4a4; end: 10787f4fb;  */

void FUN_10787f4a4(void)

{
  bool bVar1;
  long in_x4;
  long unaff_x22;
  
  func_0x000107881134();
  func_0x00010787f460();
  bVar1 = *(double *)(in_x4 + 0x10) < *(double *)(unaff_x22 + 0x10);
  if ((((bVar1) && (func_0x00010788125c(), bVar1)) && (func_0x0001078810e0(), bVar1)) &&
     (func_0x0001078810b0(), bVar1)) {
    func_0x000107881110();
  }
  return;
}



/* Entry: 10787fd48; end: 10787ff73;  */

void FUN_10787fd48(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_4;
  dVar2 = param_2;
  if (param_4 < param_2) {
    dVar4 = param_2;
    dVar2 = param_4;
  }
  dVar3 = param_6;
  if (param_6 < param_4) {
    dVar3 = param_4;
    param_4 = param_6;
  }
  dVar4 = dVar4 - dVar2;
  dVar3 = dVar3 - param_4;
  dVar2 = param_2;
  if (param_2 < param_6) {
    dVar2 = param_6;
    param_6 = param_2;
  }
  dVar2 = dVar2 - param_6;
  dVar1 = dVar4;
  if (dVar3 < dVar4) {
    dVar1 = dVar3;
    dVar3 = dVar4;
  }
  dVar4 = dVar1;
  if (dVar2 < dVar1) {
    dVar4 = dVar2;
    dVar2 = dVar1;
  }
  if (dVar2 < dVar3) {
    dVar3 = dVar2;
  }
  if (dVar4 != 0.0) {
    func_0x000107881840();
    func_0x00010787ffdc();
  }
  if (dVar3 != 0.0) {
    func_0x000107881840();
    func_0x00010787ffdc();
  }
  return;
}



/* Entry: 107880350; end: 10788035b;  */

undefined ** FUN_107880350(void)

{
  return &PTR_DAT_1109e4068;
}



/* Entry: 107880cf0; end: 107880d1b;  */

long FUN_107880cf0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072ba1cc(param_1);
  }
  return param_1;
}



/* Entry: 107880e94; end: 107880f0b;  */

void FUN_107880e94(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x000107880f0c();
  func_0x000107880f30(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  if (uVar3 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 107881a08; end: 107881ac7;  */

long * FUN_107881a08(long *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = *param_2;
  plVar3 = (long *)param_1[1];
  plVar4 = param_1 + 1;
  do {
    plVar5 = plVar4;
    if (plVar3 == (long *)0x0) {
LAB_107881a6c:
      plVar2 = (long *)0x40;
      __Znwm();
      *(uint *)(plVar2 + 4) = uVar1;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar4;
      *plVar5 = (long)plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar2);
      param_1[2] = param_1[2] + 1;
LAB_107881abc:
      return plVar2 + 5;
    }
    while (plVar2 = plVar3, plVar4 = plVar2, *(uint *)(plVar2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(plVar2 + 4)) goto LAB_107881abc;
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar5 = plVar2 + 1;
        goto LAB_107881a6c;
      }
    }
    plVar3 = (long *)*plVar2;
  } while( true );
}



/* Entry: 1078825d4; end: 107882607;  */

void FUN_1078825d4(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1078828b8; end: 1078828f7;  */

long * FUN_1078828b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0xc;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107883954; end: 107883a2f;  */

void FUN_107883954(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010788440c();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      func_0x000107883a58();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      func_0x000107883a30(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000107883ab8(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 107884284; end: 10788429f;  */

bool FUN_107884284(long param_1)

{
  bool bVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x3ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return bVar1;
}



/* Entry: 107884b68; end: 107884b8b;  */

void FUN_107884b68(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined2 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 1; lVar3 != 0; lVar3 = lVar3 + -2) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 107885418; end: 10788547f;  */

ulong FUN_107885418(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      uVar2 = param_3 + 1;
    }
    while (uVar2 != 0) {
      pcVar1 = (char *)(*param_1 + -1 + uVar2);
      uVar2 = uVar2 - 1;
      if (*pcVar1 == param_2) {
        return uVar2;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 1078867a0; end: 1078867a3;  */

long FUN_1078867a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010788893c();
    _objc_msgSend(lVar2,lVar1);
  }
  func_0x000107887ccc(param_1 + 0x30);
  return param_1;
}



/* Entry: 107886c10; end: 107886d3b;  */

void FUN_107886c10(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((*(byte *)(lVar3 + 0x53) & 1) == 0) {
    bVar2 = *param_2 & 1;
  }
  else {
    bVar2 = *param_2;
    if (((bVar2 == *(byte *)(lVar3 + 0x50)) && (param_2[1] == *(byte *)(lVar3 + 0x51))) &&
       (param_2[2] == *(byte *)(lVar3 + 0x52))) {
      return;
    }
  }
  if (bVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = 1;
    if (param_2[1] != 0) {
      lVar1 = 2;
    }
    lVar4 = 0;
    if (param_2[1] != 2) {
      lVar4 = lVar1;
    }
  }
  if ((*(char *)(lVar3 + 0x60) != '\x01') || (*(long *)(lVar3 + 0x58) != lVar4)) {
    func_0x000107889720();
    func_0x000107887e10();
    _objc_msgSend();
    lVar3 = *(long *)(param_1 + 0x30);
    *(long *)(lVar3 + 0x58) = lVar4;
    *(undefined1 *)(lVar3 + 0x60) = 1;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  bVar2 = param_2[2];
  if ((*(char *)(lVar3 + 0x88) != '\x01') || (*(ulong *)(lVar3 + 0x80) != (ulong)(bVar2 != 0))) {
    func_0x000107889e7c();
    func_0x000107887e10();
    _objc_msgSend();
    lVar3 = *(long *)(param_1 + 0x30);
    *(ulong *)(lVar3 + 0x80) = (ulong)(bVar2 != 0);
    *(undefined1 *)(lVar3 + 0x88) = 1;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  bVar2 = param_2[2];
  *(undefined2 *)(lVar3 + 0x50) = *(undefined2 *)param_2;
  *(byte *)(lVar3 + 0x52) = bVar2;
  if ((*(byte *)(lVar3 + 0x53) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x53) = 1;
  }
  return;
}



/* Entry: 107887200; end: 1078872a7;  */

void FUN_107887200(long param_1,uint param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar2 + 0x6f0) != 0) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar2 + 0x6f0) + 0x188) + (ulong)param_2 * 2);
    if ((uVar1 >> 8 & 1) != 0) {
      lVar6 = *(long *)(param_3 + 0x10);
      lVar5 = *(long *)(lVar6 + 0x30);
      uVar4 = (ulong)uVar1 & 0xff;
      lVar3 = *(long *)(lVar2 + (ulong)(byte)uVar1 * 8 + 0x5e8);
      if (lVar3 == 0 || lVar3 != lVar5) {
        func_0x000107889da0();
        func_0x000107887e10();
        func_0x000107887e9c();
        lVar2 = *(long *)(param_1 + 0x30);
        *(long *)(lVar2 + uVar4 * 8 + 0x5e8) = lVar5;
      }
      lVar3 = *(long *)(lVar6 + 0x20);
      lVar2 = *(long *)(lVar2 + uVar4 * 8 + 0x668);
      if (lVar2 == 0 || lVar2 != lVar3) {
        func_0x000107889d30();
        func_0x000107887e10();
        func_0x000107887e9c();
        *(long *)(*(long *)(param_1 + 0x30) + uVar4 * 8 + 0x668) = lVar3;
      }
    }
  }
  return;
}



/* Entry: 1078875b4; end: 1078875d7;  */

void FUN_1078875b4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if (((uVar2 >> 0x18 == 1) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 2)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,8,uVar2 & 0xff);
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



/* Entry: 107887864; end: 10788792b;  */

void FUN_107887864(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int unaff_w19;
  long unaff_x24;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lStack_58;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar4 != 0) {
    func_0x000107887eb4();
    uVar5 = (ulong)param_4;
    lVar3 = (ulong)param_4 << 4;
    __Znam();
    if (unaff_w19 != 0) {
      _bzero(lVar3,(ulong)param_4 << 4);
    }
    puVar1 = (undefined4 *)(unaff_x24 + 8);
    puVar2 = (undefined4 *)(lVar3 + 0xc);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar6 = *puVar1;
      *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(puVar1 + -2);
      puVar2[-1] = uVar6;
      *puVar2 = 0;
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 4;
    }
    lStack_58 = lVar3;
    func_0x000107887df4(*(undefined8 *)(lVar4 + 0x1c0));
    func_0x000107887e84();
    func_0x000107887d44(&lStack_58);
  }
  return;
}



/* Entry: 107887c94; end: 107887ccb;  */

undefined8 FUN_107887c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107887efc; end: 107887f5f;  */

undefined8 * FUN_107887efc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e4250;
  func_0x000107887f60(param_1 + 6);
  *param_1 = &PTR_DAT_1109e4228;
  func_0x00010724e5b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078880f4; end: 107888163;  */

undefined * FUN_1078880f4(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ea0 & 1) == 0) {
    iVar1 = 0x13823ea0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430a7d;
      _objc_lookUpClass();
      puRam0000000113823e98 = puVar2;
      ___cxa_guard_release(0x113823ea0);
    }
  }
  return puRam0000000113823e98;
}



/* Entry: 10788846c; end: 1078884db;  */

undefined * FUN_10788846c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f00 & 1) == 0) {
    iVar1 = 0x13823f00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b32;
      _sel_registerName();
      puRam0000000113823ef8 = puVar2;
      ___cxa_guard_release(0x113823f00);
    }
  }
  return puRam0000000113823ef8;
}



/* Entry: 1078887ec; end: 10788885b;  */

undefined * FUN_1078887ec(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f80 & 1) == 0) {
    iVar1 = 0x13823f80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430c0a;
      _sel_registerName();
      puRam0000000113823f78 = puVar2;
      ___cxa_guard_release(0x113823f80);
    }
  }
  return puRam0000000113823f78;
}



/* Entry: 107888b68; end: 107888bd7;  */

undefined * FUN_107888b68(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ff0 & 1) == 0) {
    iVar1 = 0x13823ff0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430d08;
      _sel_registerName();
      puRam0000000113823fe8 = puVar2;
      ___cxa_guard_release(0x113823ff0);
    }
  }
  return puRam0000000113823fe8;
}



/* Entry: 107888edc; end: 107888f47;  */

undefined8 FUN_107888edc(void)

{
  int iVar1;
  
  if ((bRam0000000113726458 & 1) == 0) {
    iVar1 = 0x13726458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430de4);
      func_0x0001078902dc(0x113726450);
    }
  }
  return uRam0000000113726450;
}



/* Entry: 107889254; end: 1078892c3;  */

undefined * FUN_107889254(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240a0 & 1) == 0) {
    iVar1 = 0x138240a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ec8;
      _sel_registerName();
      puRam0000000113824098 = puVar2;
      ___cxa_guard_release(0x1138240a0);
    }
  }
  return puRam0000000113824098;
}



/* Entry: 1078895d0; end: 10788963f;  */

undefined * FUN_1078895d0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824110 & 1) == 0) {
    iVar1 = 0x13824110;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430fc0;
      _sel_registerName();
      puRam0000000113824108 = puVar2;
      ___cxa_guard_release(0x113824110);
    }
  }
  return puRam0000000113824108;
}



/* Entry: 107889944; end: 1078899b3;  */

undefined * FUN_107889944(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824160 & 1) == 0) {
    iVar1 = 0x13824160;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431091;
      _sel_registerName();
      puRam0000000113824158 = puVar2;
      ___cxa_guard_release(0x113824160);
    }
  }
  return puRam0000000113824158;
}



/* Entry: 107889cc0; end: 107889d2f;  */

undefined * FUN_107889cc0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241d0 & 1) == 0) {
    iVar1 = 0x138241d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43116a;
      _sel_registerName();
      puRam00000001138241c8 = puVar2;
      ___cxa_guard_release(0x1138241d0);
    }
  }
  return puRam00000001138241c8;
}



/* Entry: 10788a03c; end: 10788a0a7;  */

undefined8 FUN_10788a03c(void)

{
  int iVar1;
  
  if ((bRam00000001137264e8 & 1) == 0) {
    iVar1 = 0x137264e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f43120c);
      func_0x0001078902dc(0x1137264e0);
    }
  }
  return uRam00000001137264e0;
}



/* Entry: 10788a3ac; end: 10788a41b;  */

undefined * FUN_10788a3ac(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824280 & 1) == 0) {
    iVar1 = 0x13824280;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43128b;
      _sel_registerName();
      puRam0000000113824278 = puVar2;
      ___cxa_guard_release(0x113824280);
    }
  }
  return puRam0000000113824278;
}



/* Entry: 10788a720; end: 10788a78f;  */

undefined * FUN_10788a720(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242d0 & 1) == 0) {
    iVar1 = 0x138242d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431358;
      _sel_registerName();
      puRam00000001138242c8 = puVar2;
      ___cxa_guard_release(0x1138242d0);
    }
  }
  return puRam00000001138242c8;
}



/* Entry: 10788aa9c; end: 10788ab0b;  */

undefined * FUN_10788aa9c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824340 & 1) == 0) {
    iVar1 = 0x13824340;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4313ce;
      _sel_registerName();
      puRam0000000113824338 = puVar2;
      ___cxa_guard_release(0x113824340);
    }
  }
  return puRam0000000113824338;
}



/* Entry: 10788ae1c; end: 10788ae8b;  */

undefined * FUN_10788ae1c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243c0 & 1) == 0) {
    iVar1 = 0x138243c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431475;
      _sel_registerName();
      puRam00000001138243b8 = puVar2;
      ___cxa_guard_release(0x1138243c0);
    }
  }
  return puRam00000001138243b8;
}



/* Entry: 10788b198; end: 10788b207;  */

undefined * FUN_10788b198(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824430 & 1) == 0) {
    iVar1 = 0x13824430;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4314cf;
      _sel_registerName();
      puRam0000000113824428 = puVar2;
      ___cxa_guard_release(0x113824430);
    }
  }
  return puRam0000000113824428;
}



/* Entry: 10788b510; end: 10788b57f;  */

undefined * FUN_10788b510(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824490 & 1) == 0) {
    iVar1 = 0x13824490;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431535;
      _sel_registerName();
      puRam0000000113824488 = puVar2;
      ___cxa_guard_release(0x113824490);
    }
  }
  return puRam0000000113824488;
}



/* Entry: 10788c4c0; end: 10788c66f;  */

void FUN_10788c4c0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010788afdc();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c4f4;
  }
  else {
LAB_10788c4f4:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c520;
  }
  else {
LAB_10788c520:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c54c;
  }
  else {
LAB_10788c54c:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c578;
  }
  else {
LAB_10788c578:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c5a4;
  }
  else {
LAB_10788c5a4:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 != 0) goto LAB_10788c5d0;
  }
  else {
LAB_10788c5d0:
    func_0x000107890664();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107890564();
  func_0x000107890550();
  func_0x000107890320();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890310();
    if (uVar1 == 0) goto LAB_10788c620;
  }
  func_0x000107890664();
  _objc_msgSend();
  if ((uVar1 & 1) != 0) {
    return;
  }
LAB_10788c620:
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010788afdc();
  uVar2 = uVar1;
  func_0x00010788b3c4();
  func_0x000107890530();
  _objc_msgSend();
  if ((uVar2 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890530();
    _objc_msgSend();
    if (uVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(uVar3,uVar1,0x3f0);
  return;
}



/* Entry: 10788d224; end: 10788d26f;  */

void FUN_10788d224(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107890870();
  FUN_10788f854();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10788d7cc; end: 10788d81f;  */

void FUN_10788d7cc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107890558();
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  lVar2 = 0;
  *puVar1 = &PTR_DAT_1109e4f08;
  puVar1[1] = unaff_x20;
  do {
    *(undefined1 *)((long)puVar1 + lVar2 + 0x10) = 0;
    *(undefined1 *)((long)puVar1 + lVar2 + 0x28) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x60);
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *unaff_x19 = puVar1;
  return;
}



/* Entry: 10788e414; end: 10788e417;  */

void FUN_10788e414(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [6];
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  auStack_b0[0] = 0x9d;
  uStack_98 = 0;
  lVar1 = param_1;
  func_0x000107890348();
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(lVar1 + 0x6c));
  uStack_c8 = 3;
  func_0x00010743fa44(puVar2,auStack_b0,&uStack_c0,&uStack_d0,7);
  func_0x000107890430();
  func_0x000107890378(0x9e);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x70));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa1);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x68));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xeb);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x74));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xec);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x78));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa2);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x34));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa3);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x3c));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa4);
  func_0x0001078902c0();
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = 3;
  uStack_d0 = *puVar2;
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  auStack_b0[0] = 0xa5;
  uStack_98 = 0;
  func_0x000107890348();
  uStack_64 = 1;
  func_0x00010789053c();
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa7);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  uStack_c0 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa9);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x38));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xaa);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x30));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10788f154; end: 10788f1bb;  */

void FUN_10788f154(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x00010788f614();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f340; end: 10788f427;  */

void FUN_10788f340(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078906dc();
  func_0x000107890530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(param_1,param_2,0);
  return;
}



/* Entry: 10788f540; end: 10788f593;  */

long FUN_10788f540(long param_1,long *param_2)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10788f734; end: 10788f74b;  */

void FUN_10788f734(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107877778(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10788f854; end: 10788f893;  */

void FUN_10788f854(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109e4250;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined4 *)((long)param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0x1d) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = param_4[1];
  param_1[6] = *param_4;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_4 + 2);
  *(undefined1 *)(param_4 + 2) = 0;
  return;
}



/* Entry: 10788fab4; end: 10788fac7;  */

void FUN_10788fab4(void)

{
  func_0x00010788fa88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788fd30; end: 10788fe33;  */

void FUN_10788fd30(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10788fda8;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10788fda8:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107890110; end: 107890117;  */

void FUN_107890110(void)

{
  return;
}



/* Entry: 107890908; end: 107890947;  */

undefined8 * FUN_107890908(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109e4618;
  param_1[1] = param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = param_1;
  func_0x00010788854c();
  _objc_msgSend(uVar2,puVar1);
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 107890c18; end: 107890c47;  */

void FUN_107890c18(void)

{
  return;
}



/* Entry: 107890d60; end: 107890da3;  */

void FUN_107890d60(void)

{
  return;
}



/* Entry: 1078916c4; end: 1078916f3;  */

void FUN_1078916c4(long param_1)

{
  undefined8 *extraout_x8;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  *extraout_x8 = 0;
  return;
}



/* Entry: 1078918c4; end: 1078918d7;  */

void FUN_1078918c4(void)

{
  func_0x000107891928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107891af8; end: 107891b0b;  */

void FUN_107891af8(void)

{
  func_0x000107891ab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107891e48; end: 107891f7b;  */

void FUN_107891e48(long *param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_78;
  undefined1 uStack_74;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  if (((*param_3 >> 0x20 == 0) || ((*param_3 & 0xffffffff) == 0)) || (param_3[1] == 0)) {
    *param_1 = 0;
  }
  else {
    if ((int)param_6 - 0x10U < 0x1c) {
      auStack_68[0] = 0;
      lVar1 = *(long *)(param_2 + 0x10) + 0xad0;
      func_0x00010724e2c8(lVar1,auStack_68);
      if ((int)lVar1 != 0) {
        param_4 = 1;
      }
    }
    func_0x00010788c82c(auStack_68,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),param_3,param_4,
                        param_6);
    func_0x000107892294(&lStack_70);
    func_0x000107892280(param_5,1 < param_4,param_6);
    uStack_74 = (undefined1)((ulong)param_5 >> 0x20);
    uStack_78 = (undefined4)param_5;
    *(undefined4 *)(lStack_70 + 0x19) = uStack_78;
    *(undefined1 *)(lStack_70 + 0x1d) = uStack_74;
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010788cd4c(uVar2,&uStack_78);
    *(undefined8 *)(lStack_70 + 0x20) = uVar2;
    *(bool *)(lStack_70 + 0x28) = 1 < param_4;
    *param_1 = lStack_70;
    func_0x000107887f60(auStack_68);
  }
  return;
}



/* Entry: 107892380; end: 1078923bf;  */

void FUN_107892380(void)

{
  long unaff_x19;
  
  func_0x000107893650();
  func_0x000107893608();
  func_0x000107892c2c(unaff_x19 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 107892c90; end: 107892d33;  */

long FUN_107892c90(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107893650();
  func_0x000107892d34();
  func_0x000107892e18(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x28,unaff_x19 + 2);
  func_0x00010725b620(lStack_48);
  lStack_48 = lStack_48 + 0x28;
  func_0x000107892d84();
  lVar1 = unaff_x19[1];
  func_0x000107893010(auStack_58);
  return lVar1;
}



/* Entry: 107892f8c; end: 107892fbb;  */

long FUN_107892f8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107892fbc(param_1);
  }
  return param_1;
}



/* Entry: 1078930d4; end: 107893127;  */

long FUN_1078930d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107893500; end: 10789352b;  */

void FUN_107893500(void)

{
  func_0x000107893644();
  func_0x000107456660();
  func_0x0001072bb9b4();
  return;
}



/* Entry: 107893764; end: 107893787;  */

void FUN_107893764(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 4;
  return;
}



/* Entry: 107893b64; end: 107893b93;  */

undefined8 * FUN_107893b64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e4c30;
  func_0x00010788f6e4(param_1 + 1);
  return param_1;
}



/* Entry: 107893f50; end: 10789477b;  */

/* WARNING: Possible PIC construction at 0x0001078945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107894684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078946ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107894688) */
/* WARNING: Removing unreachable block (ram,0x0001078946d0) */
/* WARNING: Removing unreachable block (ram,0x0001078946e8) */
/* WARNING: Removing unreachable block (ram,0x000107894694) */
/* WARNING: Removing unreachable block (ram,0x0001078945a8) */
/* WARNING: Removing unreachable block (ram,0x0001078945f8) */
/* WARNING: Removing unreachable block (ram,0x0001078945fc) */
/* WARNING: Removing unreachable block (ram,0x000107894604) */
/* WARNING: Removing unreachable block (ram,0x0001078946f0) */
/* WARNING: Removing unreachable block (ram,0x00010789471c) */
/* WARNING: Removing unreachable block (ram,0x00010789477c) */

undefined8 * FUN_107893f50(undefined8 *param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  ushort uVar12;
  undefined3 uVar13;
  undefined5 uVar14;
  ulong uVar15;
  code *pcVar16;
  undefined1 uVar17;
  int iVar18;
  uint5 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  ushort *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int extraout_w10;
  undefined1 *puVar29;
  ushort *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  uint5 auStack_d0 [2];
  ushort *puStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_1109e4cb0;
  *(uint *)(param_1 + 1) = *param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 4);
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x19);
  plVar1 = param_1 + 0x3e;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  func_0x00010726ed14(param_1 + 0x45);
  param_1[0x47] = param_1;
  uVar32 = *(undefined8 *)(param_2 + 9);
  param_1[0x42] = *(undefined8 *)(param_2 + 0xb);
  param_1[0x41] = uVar32;
  plVar20 = (long *)(ulong)*param_2;
  func_0x0001073cce40();
  plVar21 = (long *)(ulong)*param_2;
  func_0x0001073d6ba4();
  plVar22 = (long *)(ulong)*param_2;
  func_0x0001073d1afc();
  plVar23 = (long *)(ulong)*param_2;
  func_0x0001073d3290();
  uVar26 = plVar22[1] - *plVar22 >> 6;
  if ((ulong)((long)(param_1[0x33] - param_1[0x31]) >> 1) < uVar26) {
    if ((long)uVar26 < 0) {
LAB_1078946b8:
      func_0x000107894ae4();
      goto LAB_1078946cc;
    }
    func_0x000107895f04();
    func_0x000107895eec();
    func_0x000107894b74(auStack_d0);
  }
  for (uVar26 = 0; uVar26 < (ulong)(plVar22[1] - *plVar22 >> 6); uVar26 = uVar26 + 1) {
    uVar12 = (ushort)uVar26 & 0xff | 0x100;
    puVar25 = (ushort *)param_1[0x32];
    if (puVar25 < (ushort *)param_1[0x33]) {
      puVar30 = puVar25 + 1;
      *puVar25 = uVar12;
    }
    else {
      if ((long)puVar25 - param_1[0x31] >> 1 < -1) goto LAB_1078946b8;
      func_0x000107895f04();
      *puStack_c0 = uVar12;
      puStack_c0 = puStack_c0 + 1;
      func_0x000107895eec();
      puVar30 = (ushort *)param_1[0x32];
      func_0x000107894b74(auStack_d0);
    }
    param_1[0x32] = puVar30;
  }
  uVar13 = SUB83((undefined8)auStack_d0[0],5);
  auStack_d0[0]._0_4_ = (uint)(undefined8)auStack_d0[0] & 0xffffff00;
  auStack_d0[0] = (uint5)(uint)auStack_d0[0];
  auStack_d0[0]._0_8_ = CONCAT35(uVar13,auStack_d0[0]);
  func_0x000107894904(param_1 + 0x38,(plVar20[1] - *plVar20) / 0x48,auStack_d0);
  lVar27 = 0;
  lVar28 = 0;
  for (uVar26 = 0; uVar26 < (ulong)((plVar20[1] - *plVar20) / 0x48); uVar26 = uVar26 + 1) {
    lVar24 = *plVar20 + lVar27;
    bVar8 = *(byte *)(lVar24 + 0x38);
    iVar18 = *(int *)(lVar24 + 0x3c);
    bVar9 = *(byte *)(lVar24 + 0x40);
    bVar10 = *(byte *)(lVar24 + 0x41);
    puVar2 = (uint *)(param_1[0x38] + lVar28);
    if ((puVar2[1] & 1) == 0) {
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    *puVar2 = (uint)bVar8 << 0x10 | iVar18 << 0x18 | (uint)bVar9 | (uint)bVar10 << 8;
    lVar28 = lVar28 + 5;
    lVar27 = lVar27 + 0x48;
  }
  plVar20 = *(long **)(param_2 + 2);
  if (plVar20 != (long *)0x0) {
    uVar13 = SUB83((undefined8)auStack_d0[0],5);
    auStack_d0[0]._0_4_ = (uint)(undefined8)auStack_d0[0] & 0xffffff00;
    auStack_d0[0] = (uint5)(uint)auStack_d0[0];
    auStack_d0[0]._0_8_ = CONCAT35(uVar13,auStack_d0[0]);
    func_0x000107894904(param_1 + 0x3b,(plVar20[1] - *plVar20) / 0xc << 1,auStack_d0);
    uVar26 = ((*(long **)(param_2 + 2))[1] - **(long **)(param_2 + 2)) / 0xc;
    if ((ulong)((long)(param_1[0x36] - param_1[0x34]) / 3) < uVar26) {
      if (0x5555555555555555 < uVar26) {
LAB_1078946c0:
        func_0x000107894bf0();
        goto LAB_1078946cc;
      }
      func_0x000107895ef8();
      func_0x000107895f48();
      FUN_107894c9c(auStack_d0);
    }
    lVar27 = 0;
    lVar28 = 0;
    uVar31 = 0;
    for (uVar26 = 0; lVar24 = **(long **)(param_2 + 2),
        uVar26 < (ulong)(((*(long **)(param_2 + 2))[1] - lVar24) / 0xc); uVar26 = uVar26 + 1) {
      lVar24 = lVar24 + lVar27;
      if (*(int *)(lVar24 + 8) != 0) {
        lVar3 = *plVar23 + uVar31 * 0x40;
        bVar8 = *(byte *)(lVar3 + 0x3c);
        iVar18 = (int)lVar3 + 0x38;
        func_0x0001073da1f0();
        puVar2 = (uint *)(param_1[0x3b] + lVar28);
        if ((puVar2[1] & 1) == 0) {
          *(undefined1 *)(puVar2 + 1) = 1;
        }
        *puVar2 = (uint)bVar8 | iVar18 << 0x10 | 0x100ff00;
        iVar18 = *(int *)(lVar3 + 0x3c);
        lVar4 = param_1[0x3b] + lVar28;
        if ((*(byte *)(lVar4 + 9) & 1) == 0) {
          *(undefined1 *)(lVar4 + 9) = 1;
        }
        *(uint *)(lVar4 + 5) = (iVar18 + 1U & 0xff) + 0x101ff00;
        uVar7 = *(undefined4 *)(lVar3 + 0x3c);
        func_0x000107894a28();
        puVar6 = (undefined1 *)param_1[0x35];
        uVar17 = (undefined1)uVar7;
        if (puVar6 < (undefined1 *)param_1[0x36]) {
          *puVar6 = uVar17;
          puVar6[1] = (char)uVar31;
          puVar29 = puVar6 + 3;
          puVar6[2] = (char)lVar24;
        }
        else {
          if (0x5555555555555555 < ((long)puVar6 - param_1[0x34]) / 3 + 1U) goto LAB_1078946c0;
          func_0x000107895ef8();
          *(undefined1 *)puStack_c0 = uVar17;
          *(char *)((long)puStack_c0 + 1) = (char)uVar31;
          *(char *)(puStack_c0 + 1) = (char)lVar24;
          puStack_c0 = (ushort *)((long)puStack_c0 + 3);
          func_0x000107895f48();
          puVar29 = (undefined1 *)param_1[0x35];
          FUN_107894c9c(auStack_d0);
        }
        param_1[0x35] = puVar29;
        uVar31 = (ulong)((int)uVar31 + 1);
      }
      lVar28 = lVar28 + 10;
      lVar27 = lVar27 + 0xc;
    }
    uVar17 = (undefined1)*param_2;
    func_0x0001073d4bb4();
    *(undefined1 *)(param_1 + 0x37) = uVar17;
  }
  uVar26 = plVar21[1] - *plVar21 >> 6;
  uVar14 = SUB85((undefined8)auStack_d0[0],3);
  auStack_d0[0]._0_2_ = (ushort)(undefined8)auStack_d0[0] & 0xff00;
  uVar12 = (ushort)auStack_d0[0];
  auStack_d0[0]._0_3_ = (uint3)(ushort)auStack_d0[0];
  auStack_d0[0]._0_8_ = CONCAT53(uVar14,(uint3)auStack_d0[0]);
  lVar28 = param_1[0x40];
  puVar25 = (ushort *)param_1[0x3e];
  if ((ulong)((lVar28 - (long)puVar25) / 3) < uVar26) {
    if (puVar25 != (ushort *)0x0) {
      param_1[0x3f] = puVar25;
      __ZdlPv();
      lVar28 = 0;
      *plVar1 = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
    }
    if (uVar26 < 0x5555555555555556) {
      uVar31 = (lVar28 / 3) * 2;
      if (uVar31 < uVar26 || uVar31 - uVar26 == 0) {
        uVar31 = uVar26;
      }
      if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar28 / 3)) {
        uVar31 = 0x5555555555555555;
      }
      if (uVar31 < 0x5555555555555556) {
        lVar28 = uVar31 * 3;
        __Znwm();
        param_1[0x3e] = lVar28;
        param_1[0x3f] = lVar28;
        param_1[0x40] = lVar28 + uVar31 * 3;
        func_0x000107894d7c(plVar1,uVar26,auStack_d0);
        goto LAB_1078944e0;
      }
    }
    func_0x000107894dac();
LAB_1078946cc:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1078946d0);
    (*pcVar16)();
  }
  uVar31 = (param_1[0x3f] - (long)puVar25) / 3;
  uVar15 = uVar31;
  if (uVar26 <= uVar31) {
    uVar15 = uVar26;
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    *puVar25 = uVar12;
    *(undefined1 *)(puVar25 + 1) = 0;
    puVar25 = (ushort *)((long)puVar25 + 3);
  }
  if (uVar26 < uVar31 || uVar26 - uVar31 == 0) {
    param_1[0x3f] = param_1[0x3e] + uVar26 * 3;
  }
  else {
    func_0x000107894d7c(plVar1,uVar26 - uVar31,auStack_d0);
  }
LAB_1078944e0:
  lVar27 = 0;
  lVar28 = 0;
  for (uVar26 = 0; uVar26 < (ulong)(plVar21[1] - *plVar21 >> 6); uVar26 = uVar26 + 1) {
    puVar5 = (undefined2 *)(*plVar1 + lVar28);
    uVar11 = *(undefined2 *)(*plVar21 + lVar27 + 0x3c);
    if ((*(byte *)(puVar5 + 1) & 1) == 0) {
      *(undefined1 *)(puVar5 + 1) = 1;
    }
    *puVar5 = uVar11;
    lVar28 = lVar28 + 3;
    lVar27 = lVar27 + 0x40;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  func_0x0001073af27c(&uStack_a0,0,0);
  auStack_d0[1]._0_8_ = uStack_98;
  auStack_d0[0]._0_8_ = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001073139fc(param_1 + 0x43,auStack_d0);
  func_0x00010724b8b8(auStack_d0);
  func_0x00010724b8b8(&uStack_a0);
  if (param_1[0x46] != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10 != 0);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  auStack_d0[0]._0_8_ = 0;
  auStack_d0[1]._0_8_ = 0;
  puVar19 = auStack_d0;
  func_0x00010725c0a0();
  if (puVar19 != (uint5 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 107894a4c; end: 107894a53;  */

undefined4 FUN_107894a4c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107894c9c; end: 107894d0b;  */

long * FUN_107894c9c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -3;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107894e7c; end: 107894ea7;  */

void FUN_107894e7c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e4d20;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10 != 0);
  }
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  uVar4 = puVar1[5];
  uVar3 = puVar1[4];
  uVar5 = *(undefined8 *)((long)puVar1 + 0x2b);
  *(undefined8 *)((long)param_2 + 0x3b) = *(undefined8 *)((long)puVar1 + 0x33);
  *(undefined8 *)((long)param_2 + 0x33) = uVar5;
  param_2[6] = uVar4;
  param_2[5] = uVar3;
  *(undefined8 *)((long)param_2 + 0x44) = *(undefined8 *)((long)puVar1 + 0x3c);
  uVar4 = *(undefined8 *)((long)puVar1 + 0x4c);
  uVar3 = *(undefined8 *)((long)puVar1 + 0x44);
  *(undefined4 *)((long)param_2 + 0x5c) = *(undefined4 *)((long)puVar1 + 0x54);
  *(undefined8 *)((long)param_2 + 0x54) = uVar4;
  *(undefined8 *)((long)param_2 + 0x4c) = uVar3;
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(puVar1 + 0xb);
  uVar3 = puVar1[0xc];
  param_2[0xe] = puVar1[0xd];
  param_2[0xd] = uVar3;
  lVar2 = puVar1[0xe];
  param_2[0xf] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 107896168; end: 10789618b;  */

long FUN_107896168(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (lVar1 == param_2 + 0x28) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1 + 0x28;
}


