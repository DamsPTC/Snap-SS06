/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109530a14; end: 109530b27;  */

undefined4 * FUN_109530a14(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 **)(param_1 + 0x28) = param_1 + 0x1a;
  *(undefined4 **)(param_1 + 0x2a) = param_1 + 0x2c;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x38] = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x36) = uVar2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  param_1[0x45] = 0;
  *(undefined8 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  param_1[0x41] = 0;
  uVar1 = 8;
  __Znwm(8);
  FUN_10938e90c();
  FUN_1095311d4(param_1 + 0x40,uVar1);
  return param_1;
}



/* Entry: 109530b28; end: 109530c9f;  */

void FUN_109530b28(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uStack_80 = *(undefined8 *)(param_1 + 200);
  lStack_60 = 0;
  uStack_58 = 0;
  iStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  func_0x00010938e870(&ppuStack_68,&uStack_80);
  if (0 < *(int *)(param_1 + 0xcc)) {
    iVar1 = 0;
    do {
      _memcpy(lStack_60 + (long)iStack_50 * (long)iVar1,
              param_2 + (long)*(int *)(param_1 + 0xec) * (long)(iVar1 + *(int *)(param_1 + 0xc4)) +
              (long)*(int *)(param_1 + 0xc0),(long)*(int *)(param_1 + 200));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xcc));
  }
  ppuStack_a0 = &PTR_FUN_110af4c80;
  lStack_98 = lStack_60;
  uStack_90 = uStack_58;
  iStack_88 = iStack_50;
  iStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1093fb9a8(&uStack_80,&ppuStack_a0,*(int *)(param_1 + 0xd4) + 1);
  func_0x00010940c03c(param_3);
  param_3[1] = uStack_78;
  *param_3 = uStack_80;
  param_3[2] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  puStack_48 = &uStack_80;
  FUN_10939d590(&puStack_48);
  ppuStack_a0 = &PTR_FUN_110af4c80;
  if (lStack_98 != 0) {
    __ZdaPv();
  }
  lStack_98 = 0;
  uStack_90 = 0;
  iStack_88 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109530ca0; end: 109530d2b;  */

void FUN_109530ca0(undefined8 *param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = *(int *)(param_2 + 0xc0);
  iVar6 = *(int *)(param_2 + 0xc4);
  if (*(int *)(param_2 + 200) == 0) {
    bVar4 = *(int *)(param_2 + 0xcc) != 0;
    iVar5 = 0;
    if (bVar4) {
      iVar5 = *(int *)(param_2 + 0xc0);
    }
    iVar6 = 0;
    if (bVar4) {
      iVar6 = *(int *)(param_2 + 0xc4);
    }
  }
  iVar1 = 0;
  if (param_5 == 0) {
    iVar1 = iVar5;
  }
  iVar5 = 0;
  if (param_5 == 0) {
    iVar5 = iVar6;
  }
  uVar2 = param_3 - iVar5;
  *param_1 = 0x7f7fffff7f7fffff;
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_2 + 8))) &&
      (uVar3 = param_4 - iVar1, -1 < (int)uVar3)) && ((int)uVar3 < *(int *)(param_2 + 0xc))) {
    uVar7 = *(undefined4 *)
             (*(long *)(param_2 + 0x70) + **(long **)(param_2 + 0xa8) * (ulong)uVar2 +
             (ulong)uVar3 * 4);
    *(undefined4 *)param_1 =
         *(undefined4 *)
          (*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * (ulong)uVar2 + (ulong)uVar3 * 4
          );
    *(undefined4 *)((long)param_1 + 4) = uVar7;
  }
  return;
}



/* Entry: 109530d2c; end: 109530e43;  */

long FUN_109530d2c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109530e44; end: 109531183;  */

void FUN_109530e44(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
joined_r0x000109530e48:
  while( true ) {
    pfVar2 = param_3;
    if (pfVar2 == param_2) {
      return;
    }
    uVar7 = (long)pfVar2 - (long)param_1 >> 2;
    if (uVar7 < 2) {
      return;
    }
    if (uVar7 == 3) {
      fVar11 = param_1[1];
      fVar12 = pfVar2[-1];
      fVar14 = fVar11;
      if (fVar11 < fVar12) {
        fVar14 = fVar12;
        fVar12 = fVar11;
      }
      pfVar2[-1] = fVar14;
      param_1[1] = fVar12;
      fVar11 = pfVar2[-1];
      fVar12 = *param_1;
      fVar14 = fVar11;
      if (fVar11 < fVar12) {
        fVar14 = fVar12;
        fVar12 = fVar11;
      }
      pfVar2[-1] = fVar14;
      fVar14 = param_1[1];
      if (fVar14 <= fVar12) {
        *param_1 = fVar14;
        fVar14 = fVar12;
      }
      param_1[1] = fVar14;
      return;
    }
    if (uVar7 == 2) {
      fVar12 = *param_1;
      if (fVar12 <= pfVar2[-1]) {
        return;
      }
      *param_1 = pfVar2[-1];
      pfVar2[-1] = fVar12;
      return;
    }
    if ((long)uVar7 < 8) {
      while (pfVar6 = param_1, pfVar2 + -1 != pfVar6) {
        param_1 = pfVar6 + 1;
        if ((pfVar2 != pfVar6) && (param_1 != pfVar2)) {
          fVar14 = *pfVar6;
          pfVar8 = pfVar6;
          pfVar5 = param_1;
          fVar12 = fVar14;
          do {
            pfVar9 = pfVar5 + 1;
            pfVar1 = pfVar5;
            fVar11 = *pfVar5;
            if (fVar12 <= *pfVar5) {
              pfVar1 = pfVar8;
              fVar11 = fVar12;
            }
            fVar12 = fVar11;
            pfVar8 = pfVar1;
            pfVar5 = pfVar9;
          } while (pfVar9 != pfVar2);
          if (pfVar1 != pfVar6) {
            *pfVar6 = *pfVar1;
            *pfVar1 = fVar14;
          }
        }
      }
      return;
    }
    pfVar6 = param_1 + ((ulong)((long)pfVar2 - (long)param_1) >> 3);
    pfVar8 = pfVar2 + -1;
    fVar11 = *pfVar8;
    fVar13 = *pfVar6;
    fVar14 = fVar13;
    fVar12 = fVar11;
    if (fVar13 < fVar11) {
      fVar14 = fVar11;
      fVar12 = fVar13;
    }
    *pfVar8 = fVar14;
    *pfVar6 = fVar12;
    fVar15 = *pfVar8;
    fVar16 = *param_1;
    fVar14 = fVar15;
    fVar12 = fVar16;
    if (fVar15 < fVar16) {
      fVar14 = fVar16;
      fVar12 = fVar15;
    }
    *pfVar8 = fVar14;
    fVar17 = *pfVar6;
    fVar14 = fVar17;
    if (fVar17 <= fVar12) {
      *param_1 = fVar17;
      fVar14 = fVar12;
    }
    uVar4 = (uint)(fVar16 <= fVar15);
    if (fVar17 <= fVar12) {
      uVar4 = 1;
    }
    *pfVar6 = fVar14;
    if (fVar11 <= fVar13) {
      uVar4 = 1;
    }
    fVar12 = *param_1;
    pfVar5 = pfVar8;
    if (fVar12 < fVar14) break;
    while (pfVar5 = pfVar5 + -1, pfVar5 != param_1) {
      if (*pfVar5 < fVar14) goto code_r0x000109530f20;
    }
    pfVar6 = param_1 + 1;
    pfVar5 = pfVar6;
    if (*pfVar8 <= fVar12) {
      while( true ) {
        if (pfVar5 == pfVar8) {
          return;
        }
        fVar14 = *pfVar5;
        if (fVar12 < fVar14) break;
        pfVar5 = pfVar5 + 1;
      }
      pfVar6 = pfVar5 + 1;
      *pfVar5 = *pfVar8;
      *pfVar8 = fVar14;
    }
    if (pfVar6 == pfVar8) {
      return;
    }
    while( true ) {
      do {
        pfVar5 = pfVar6;
        pfVar6 = pfVar5 + 1;
        fVar12 = *pfVar5;
      } while (fVar12 <= *param_1);
      do {
        pfVar8 = pfVar8 + -1;
      } while (*param_1 < *pfVar8);
      if (pfVar8 <= pfVar5) break;
      *pfVar5 = *pfVar8;
      *pfVar8 = fVar12;
    }
    param_3 = pfVar2;
    param_1 = pfVar5;
    if (param_2 < pfVar5) {
      return;
    }
  }
  goto LAB_109530f30;
code_r0x000109530f20:
  *param_1 = *pfVar5;
  *pfVar5 = fVar12;
  bVar3 = uVar4 != 0;
  uVar4 = 1;
  pfVar8 = pfVar5;
  if (bVar3) {
    uVar4 = 2;
  }
LAB_109530f30:
  pfVar5 = param_1 + 1;
  pfVar1 = pfVar6;
  pfVar9 = pfVar5;
  pfVar10 = pfVar5;
  if (pfVar5 < pfVar8) {
    while( true ) {
      pfVar6 = pfVar1;
      do {
        pfVar9 = pfVar10;
        pfVar10 = pfVar9 + 1;
        fVar12 = *pfVar9;
      } while (fVar12 < *pfVar6);
      do {
        pfVar8 = pfVar8 + -1;
      } while (*pfVar6 <= *pfVar8);
      if (pfVar8 <= pfVar9) break;
      *pfVar9 = *pfVar8;
      *pfVar8 = fVar12;
      uVar4 = uVar4 + 1;
      pfVar1 = pfVar8;
      if (pfVar9 != pfVar6) {
        pfVar1 = pfVar6;
      }
    }
  }
  if (pfVar9 != pfVar6) {
    fVar12 = *pfVar9;
    if (*pfVar6 < fVar12) {
      *pfVar9 = *pfVar6;
      *pfVar6 = fVar12;
      uVar4 = uVar4 + 1;
    }
  }
  if (pfVar9 == param_2) {
    return;
  }
  if (uVar4 == 0) {
    pfVar6 = pfVar9;
    if (param_2 < pfVar9) {
      do {
        if (pfVar5 == pfVar9) {
          return;
        }
        pfVar6 = pfVar5 + -1;
        fVar12 = *pfVar5;
        pfVar5 = pfVar5 + 1;
      } while (*pfVar6 <= fVar12);
    }
    else {
      do {
        pfVar8 = pfVar6 + 1;
        if (pfVar8 == pfVar2) {
          return;
        }
        fVar12 = *pfVar6;
        pfVar6 = pfVar8;
      } while (fVar12 <= *pfVar8);
    }
  }
  param_3 = pfVar9;
  if (pfVar9 <= param_2) {
    param_3 = pfVar2;
    param_1 = pfVar9 + 1;
  }
  goto joined_r0x000109530e48;
}



/* Entry: 109531184; end: 1095311d3;  */

void FUN_109531184(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1095311d4(param_2 + 0x100,0);
    FUN_10939d61c(param_2 + 0xf8,0);
    FUN_10939d61c(param_2 + 0xf0,0);
    FUN_109530d2c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095311d4; end: 1095311fb;  */

void FUN_1095311d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10938e984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095311fc; end: 10953131b;  */

void FUN_1095311fc(long param_1)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_b4 [9];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  float afStack_60 [6];
  float fStack_48;
  
  FUN_10937fe84(param_1,afStack_b4,0);
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x3c);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 0x50);
  do {
    fVar9 = *(float *)((long)afStack_b4 + lVar2);
    fVar10 = *(float *)((long)afStack_b4 + lVar2 + 4);
    fVar11 = *(float *)((long)afStack_b4 + lVar2 + 8);
    *(ulong *)((long)&uStack_68 + lVar2) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar9 + (float)((ulong)uVar4 >> 0x20) * fVar10 +
                  (float)((ulong)uVar5 >> 0x20) * fVar11,
                  (float)uVar3 * fVar9 + (float)uVar4 * fVar10 + (float)uVar5 * fVar11);
    *(float *)((long)afStack_60 + lVar2) = fVar6 * fVar9 + fVar7 * fVar10 + fVar8 * fVar11;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x24);
  lVar2 = 0;
  do {
    pfVar1 = (float *)(param_1 + 0x54 + lVar2);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    *(ulong *)((long)&uStack_90 + lVar2) =
         CONCAT44((float)((ulong)uStack_68 >> 0x20) * fVar6 + SUB84(afStack_60._4_8_,4) * fVar7 +
                  SUB84(afStack_60._16_8_,4) * fVar8,
                  (float)uStack_68 * fVar6 + (float)afStack_60._4_8_ * fVar7 +
                  (float)afStack_60._16_8_ * fVar8);
    *(float *)((long)&uStack_88 + lVar2) =
         afStack_60[0] * fVar6 + afStack_60[3] * fVar7 + fStack_48 * fVar8;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x24);
  *(undefined8 *)(param_1 + 0x78) = uStack_90;
  *(undefined8 *)(param_1 + 0x88) = uStack_80;
  *(undefined8 *)(param_1 + 0x80) = uStack_88;
  *(undefined8 *)(param_1 + 0x90) = uStack_78;
  *(undefined4 *)(param_1 + 0x98) = uStack_70;
  return;
}



/* Entry: 10953131c; end: 1095314e3;  */

void FUN_10953131c(undefined8 *param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_108 [18];
  undefined8 uStack_c0;
  float afStack_b8 [6];
  float fStack_a0;
  undefined8 uStack_78;
  float afStack_70 [4];
  undefined8 uStack_60;
  float fStack_58;
  
  uStack_78 = *param_1;
  afStack_70[0] = *(float *)(param_1 + 1);
  FUN_10937fe84(&uStack_78,afStack_108 + 9,0);
  fVar7 = *(float *)((long)param_1 + 0xc);
  _expf();
  lVar6 = 0;
  afStack_108[2] = 0.0;
  afStack_108[3] = 0.0;
  afStack_108[1] = 0.0;
  afStack_108[7] = 0.0;
  afStack_108[8] = 1.0;
  afStack_108[5] = 0.0;
  afStack_108[6] = 0.0;
  afStack_108[0] = fVar7;
  afStack_108[4] = fVar7;
  uVar8 = param_1[6];
  uVar9 = *(undefined8 *)((long)param_1 + 0x3c);
  uVar10 = param_1[9];
  fVar7 = *(float *)(param_1 + 7);
  fVar11 = *(float *)((long)param_1 + 0x44);
  fVar12 = *(float *)(param_1 + 10);
  do {
    fVar13 = *(float *)((long)afStack_108 + lVar6);
    fVar14 = *(float *)((long)afStack_108 + lVar6 + 4);
    fVar15 = *(float *)((long)afStack_108 + lVar6 + 8);
    *(ulong *)((long)&uStack_78 + lVar6) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar13 + (float)((ulong)uVar9 >> 0x20) * fVar14 +
                  (float)((ulong)uVar10 >> 0x20) * fVar15,
                  (float)uVar8 * fVar13 + (float)uVar9 * fVar14 + (float)uVar10 * fVar15);
    uVar2 = uStack_78;
    *(float *)((long)afStack_70 + lVar6) = fVar7 * fVar13 + fVar11 * fVar14 + fVar12 * fVar15;
    fVar5 = fStack_58;
    uVar4 = uStack_60;
    fVar3 = afStack_70[3];
    fVar15 = afStack_70[2];
    fVar14 = afStack_70[1];
    fVar13 = afStack_70[0];
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0x24);
  lVar6 = 0;
  do {
    fVar7 = *(float *)((long)afStack_108 + lVar6 + 0x24);
    fVar11 = *(float *)((long)afStack_108 + lVar6 + 0x28);
    fVar12 = *(float *)((long)afStack_108 + lVar6 + 0x2c);
    *(ulong *)((long)&uStack_c0 + lVar6) =
         CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar7 + fVar15 * fVar11 +
                  (float)((ulong)uVar4 >> 0x20) * fVar12,
                  (float)uVar2 * fVar7 + fVar14 * fVar11 + (float)uVar4 * fVar12);
    *(float *)((long)afStack_b8 + lVar6) = fVar13 * fVar7 + fVar3 * fVar11 + fVar5 * fVar12;
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0x24);
  lVar6 = 0;
  do {
    pfVar1 = (float *)((long)param_1 + lVar6 + 0x54);
    fVar7 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    *(ulong *)((long)&uStack_78 + lVar6) =
         CONCAT44((float)((ulong)uStack_c0 >> 0x20) * fVar7 + SUB84(afStack_b8._4_8_,4) * fVar11 +
                  SUB84(afStack_b8._16_8_,4) * fVar12,
                  (float)uStack_c0 * fVar7 + (float)afStack_b8._4_8_ * fVar11 +
                  (float)afStack_b8._16_8_ * fVar12);
    *(float *)((long)afStack_70 + lVar6) =
         afStack_b8[0] * fVar7 + afStack_b8[3] * fVar11 + fStack_a0 * fVar12;
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0x24);
  param_1[0xf] = uStack_78;
  param_1[0x11] = CONCAT44(afStack_70[3],afStack_70[2]);
  param_1[0x10] = CONCAT44(afStack_70[1],afStack_70[0]);
  param_1[0x12] = uStack_60;
  *(float *)(param_1 + 0x13) = fStack_58;
  return;
}



/* Entry: 1095314e4; end: 1095329ab;  */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdc8 : 0x000109532374 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1095314e4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined1 auVar8 [8];
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  float **ppfVar12;
  float *pfVar13;
  float *pfVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  float *pfVar25;
  int iVar26;
  undefined4 *puVar27;
  float *pfVar28;
  ulong uVar29;
  float *pfVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  float *pfVar36;
  float *pfVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float *pfVar41;
  int iVar42;
  long lVar43;
  float *pfVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  float *pfVar50;
  float *pfVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fStack_2bc;
  long lStack_260;
  float afStack_238 [4];
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  int aiStack_210 [3];
  float fStack_204;
  float afStack_200 [2];
  int iStack_1f8;
  undefined1 uStack_1f4;
  uint uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float *pfStack_1d8;
  float *pfStack_1d0;
  float *pfStack_1c8;
  float afStack_1c0 [4];
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  float *pfStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined4 *puStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined4 *puStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  undefined8 uStack_cc;
  float fStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  
  uVar69 = NEON_fmov(0x3f800000,4);
  fStack_fc = (float)uVar69 / (float)*(double *)(param_2 + 0x20);
  fStack_ec = (float)((ulong)uVar69 >> 0x20) / (float)*(double *)(param_2 + 0x28);
  fStack_120 = (float)*(double *)(param_3 + 0x20);
  fStack_110 = (float)*(double *)(param_3 + 0x28);
  dStack_140 = (double)CONCAT44(fStack_110,fStack_120);
  uStack_138 = CONCAT44((float)*(double *)(param_3 + 0x18),(float)*(double *)(param_3 + 0x10));
  fVar53 = fStack_fc * -(float)*(double *)(param_2 + 0x10);
  fVar55 = fStack_ec * -(float)*(double *)(param_2 + 0x18);
  uStack_130 = CONCAT44(fStack_ec,fStack_fc);
  uStack_128 = CONCAT44(fVar55,fVar53);
  uStack_108 = CONCAT44((float)*(double *)(param_3 + 0x18),(float)*(double *)(param_3 + 0x10));
  uStack_11c = 0;
  uStack_114 = 0;
  uStack_10c = 0;
  uStack_100 = 0x3f800000;
  uStack_e4 = CONCAT44(fVar55,fVar53);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_dc = 0x3f800000;
  uStack_150._0_4_ = 0.0;
  uStack_150._4_4_ = 0.0;
  dStack_148 = (double)((ulong)dStack_148 & 0xffffffff00000000);
  FUN_1095311fc(&uStack_150);
  uVar20 = *(ulong *)(param_4 + 0x10);
  puStack_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  lStack_158 = 0;
  lVar43 = (long)uVar20 >> 0x20;
  iVar18 = (int)uVar20;
  lVar46 = (long)iVar18;
  bVar11 = uVar20 >> 0x20 != 0;
  bVar10 = iVar18 != 0;
  if (bVar11 && bVar10) {
    lVar48 = 0;
    if (lVar46 != 0) {
      lVar48 = 0x7fffffffffffffff / lVar46;
    }
    if (lVar48 < lVar43) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953293c;
    }
  }
  iVar42 = (int)(uVar20 >> 0x20);
  lVar48 = (long)iVar18 * (long)iVar42;
  FUN_1093c3d54(&puStack_168,lVar48,lVar43,lVar46);
  puStack_180 = (undefined4 *)0x0;
  uStack_178 = 0;
  lStack_170 = 0;
  if (bVar11 && bVar10) {
    lVar24 = 0;
    if (lVar46 != 0) {
      lVar24 = 0x7fffffffffffffff / lVar46;
    }
    if (lVar24 < lVar43) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953293c;
    }
  }
  FUN_1093c3d54(&puStack_180,lVar48,lVar43,lVar46);
  uVar29 = uStack_160;
  puVar1 = puStack_168;
  puVar27 = puStack_168;
  lVar24 = lStack_158;
  if (0 < lStack_158) {
    do {
      *puVar27 = 0;
      lVar24 = lVar24 + -1;
      puVar27 = puVar27 + uStack_160;
    } while (lVar24 != 0);
    puVar27 = puStack_168 + (iVar42 + -1);
    lVar24 = lStack_158;
    do {
      *puVar27 = 0;
      puVar27 = puVar27 + uStack_160;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  uVar4 = iVar42 - 1;
  lStack_260 = (long)(int)uVar4;
  uVar21 = (ulong)-((uint)puStack_168 >> 2) & 3;
  if ((long)uStack_160 <= (long)uVar21) {
    uVar21 = uStack_160;
  }
  uVar23 = uStack_160;
  if (((ulong)puStack_168 & 3) == 0) {
    uVar23 = uVar21;
  }
  uVar39 = uStack_160 - uVar23;
  uVar21 = uVar39 + 3;
  if (-1 < (long)uVar39) {
    uVar21 = uVar39;
  }
  if (0 < (long)uVar23) {
    _bzero(puStack_168,uVar23 << 2);
  }
  lVar24 = (uVar21 & 0xfffffffffffffffc) + uVar23;
  if (3 < (long)uVar39) {
    lVar47 = lVar24;
    if (lVar24 <= (long)(uVar23 + 4)) {
      lVar47 = uVar23 + 4;
    }
    _bzero(puVar1 + uVar23,(lVar47 + ~uVar23 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar24 < (long)uVar29) {
    _bzero(puVar1 + ((long)uVar21 >> 2) * 4 + uVar23,((long)uVar39 % 4) * 4);
  }
  uVar29 = uStack_160;
  uVar5 = iVar18 - 1;
  uVar23 = (ulong)(int)uVar5;
  puVar1 = puStack_168 + uStack_160 * uVar23;
  uVar21 = uStack_160;
  if ((((ulong)puVar1 & 3) == 0) &&
     (uVar21 = (ulong)-((uint)puVar1 >> 2) & 3, (long)uStack_160 <= (long)uVar21)) {
    uVar21 = uStack_160;
  }
  uVar40 = uStack_160 - uVar21;
  uVar39 = uVar40 + 3;
  if (-1 < (long)uVar40) {
    uVar39 = uVar40;
  }
  if (0 < (long)uVar21) {
    _bzero(puVar1,uVar21 << 2);
  }
  lVar24 = (uVar39 & 0xfffffffffffffffc) + uVar21;
  if (3 < (long)uVar40) {
    lVar47 = lVar24;
    if (lVar24 <= (long)(uVar21 + 4)) {
      lVar47 = uVar21 + 4;
    }
    _bzero(puVar1 + uVar21,(lVar47 + ~uVar21 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar24 < (long)uVar29) {
    _bzero(puVar1 + ((long)uVar39 >> 2) * 4 + uVar21,((long)uVar40 % 4) * 4);
  }
  uVar29 = uStack_178;
  puVar1 = puStack_180;
  puVar27 = puStack_180;
  lVar24 = lStack_170;
  if (0 < lStack_170) {
    do {
      *puVar27 = 0;
      lVar24 = lVar24 + -1;
      puVar27 = puVar27 + uStack_178;
    } while (lVar24 != 0);
    puVar27 = puStack_180 + lStack_260;
    lVar24 = lStack_170;
    do {
      *puVar27 = 0;
      puVar27 = puVar27 + uStack_178;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  uVar21 = (ulong)-((uint)puStack_180 >> 2) & 3;
  if ((long)uStack_178 <= (long)uVar21) {
    uVar21 = uStack_178;
  }
  uVar39 = uStack_178;
  if (((ulong)puStack_180 & 3) == 0) {
    uVar39 = uVar21;
  }
  uVar40 = uStack_178 - uVar39;
  uVar21 = uVar40 + 3;
  if (-1 < (long)uVar40) {
    uVar21 = uVar40;
  }
  if (0 < (long)uVar39) {
    _bzero(puStack_180,uVar39 << 2);
  }
  lVar24 = (uVar21 & 0xfffffffffffffffc) + uVar39;
  if (3 < (long)uVar40) {
    lVar47 = lVar24;
    if (lVar24 <= (long)(uVar39 + 4)) {
      lVar47 = uVar39 + 4;
    }
    _bzero(puVar1 + uVar39,(lVar47 + ~uVar39 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar24 < (long)uVar29) {
    _bzero(puVar1 + ((long)uVar21 >> 2) * 4 + uVar39,((long)uVar40 % 4) * 4);
  }
  uVar29 = uStack_178;
  puVar1 = puStack_180 + uStack_178 * uVar23;
  uVar21 = uStack_178;
  if ((((ulong)puVar1 & 3) == 0) &&
     (uVar21 = (ulong)-((uint)puVar1 >> 2) & 3, (long)uStack_178 <= (long)uVar21)) {
    uVar21 = uStack_178;
  }
  uVar40 = uStack_178 - uVar21;
  uVar39 = uVar40 + 3;
  if (-1 < (long)uVar40) {
    uVar39 = uVar40;
  }
  if (0 < (long)uVar21) {
    _bzero(puVar1,uVar21 << 2);
  }
  lVar24 = (uVar39 & 0xfffffffffffffffc) + uVar21;
  if (3 < (long)uVar40) {
    lVar47 = lVar24;
    if (lVar24 <= (long)(uVar21 + 4)) {
      lVar47 = uVar21 + 4;
    }
    _bzero(puVar1 + uVar21,(lVar47 + ~uVar21 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar24 < (long)uVar29) {
    _bzero(puVar1 + ((long)uVar39 >> 2) * 4 + uVar21,((long)uVar40 % 4) * 4);
  }
  if (1 < (int)uVar4) {
    pbVar22 = *(byte **)(param_4 + 8);
    lVar24 = (long)*(int *)(param_4 + 0x18);
    pfVar28 = (float *)(puStack_180 + uStack_178);
    uVar29 = 1;
    pfVar25 = (float *)(puStack_168 + uStack_160);
    do {
      pfVar25 = pfVar25 + 1;
      pfVar28 = pfVar28 + 1;
      uVar29 = uVar29 + 1;
      lVar47 = (ulong)uVar5 - 1;
      pfVar13 = pfVar25;
      pfVar14 = pfVar28;
      pbVar15 = pbVar22;
      if (2 < iVar18) {
        do {
          fVar53 = (float)NEON_ucvtf((uint)pbVar15[lVar24 + 2]);
          fVar55 = (float)NEON_ucvtf((uint)pbVar15[lVar24]);
          *pfVar13 = fVar53 - fVar55;
          fVar53 = (float)NEON_ucvtf((uint)pbVar15[lVar24 << 1 | 1]);
          *pfVar14 = fVar53 - (float)pbVar15[1];
          lVar47 = lVar47 + -1;
          pfVar13 = pfVar13 + uStack_160;
          pfVar14 = pfVar14 + uStack_178;
          pbVar15 = pbVar15 + 1;
        } while (lVar47 != 0);
      }
      pbVar22 = pbVar22 + lVar24;
    } while (uVar29 != uVar4);
  }
  pfStack_198 = (float *)0x0;
  lStack_190 = 0;
  uStack_188 = 0;
  if (bVar11 && bVar10) {
    lVar24 = 0;
    if (lVar46 != 0) {
      lVar24 = 0x7fffffffffffffff / lVar46;
    }
    if (lVar24 < lVar43) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953293c;
    }
  }
  FUN_1093c3d54(&pfStack_198,lVar48,lVar43,lVar46);
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  if (bVar11 && bVar10) {
    lVar24 = 0;
    if (lVar46 != 0) {
      lVar24 = 0x7fffffffffffffff / lVar46;
    }
    if (lVar24 < lVar43) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_10953293c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109532940);
      (*pcVar9)();
    }
  }
  FUN_1093c3d54(&lStack_1b0,lVar48,lVar43,lVar46);
  if (0 < iVar42) {
    uVar29 = 0;
    pbVar22 = *(byte **)(param_4 + 8);
    iVar26 = *(int *)(param_4 + 0x18);
    pfVar28 = pfStack_198;
    do {
      pbVar15 = pbVar22;
      pfVar25 = pfVar28;
      uVar21 = uVar20 & 0x7fffffff;
      if (0 < iVar18) {
        do {
          *pfVar25 = (float)*pbVar15;
          pfVar25 = pfVar25 + lStack_190;
          uVar21 = uVar21 - 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar21 != 0);
      }
      uVar29 = uVar29 + 1;
      pfVar28 = pfVar28 + 1;
      pbVar22 = pbVar22 + iVar26;
    } while (uVar29 != uVar20 >> 0x20);
  }
  iVar26 = 0;
  fStack_2bc = 100.0;
  uVar19 = (uint)SQRT((float)(iVar42 * iVar18) / 100.0);
  if ((int)uVar19 < 2) {
    uVar19 = 1;
  }
  uVar29 = (ulong)uVar19;
  pfStack_1d8 = (float *)0x0;
  pfStack_1d0 = (float *)0x0;
  pfStack_1c8 = (float *)0x0;
  pfVar28 = (float *)((ulong)afStack_238 | 4);
  uVar20 = (ulong)-((uint)pfVar28 >> 2) & 3;
  iVar2 = 0;
  if (uVar19 != 0) {
    iVar2 = iVar18 / (int)uVar19;
  }
  iVar3 = 0;
  if (uVar19 != 0) {
    iVar3 = iVar42 / (int)uVar19;
  }
LAB_109531bbc:
  FUN_109534a2c(&lStack_1b0,param_5,auStack_d8);
  afStack_1c0[0] = 0.0;
  afStack_1c0[1] = 0.0;
  afStack_1c0[2] = 0.0;
  pfStack_1d0 = pfStack_1d8;
  func_0x0001073b504c(&pfStack_1d8,(long)(iVar2 + 1 + (iVar2 + 1) * iVar3));
  if (2 < iVar18) {
    lVar46 = 4;
    lVar43 = 1;
    do {
      if (1 < (int)uVar4) {
        lVar48 = 1;
        do {
          fVar53 = *(float *)(lStack_1b0 + lVar46 * lStack_1a8 + lVar48 * 4);
          if (fVar53 <= 10000.0) {
            fVar53 = fVar53 - *(float *)((long)pfStack_198 + lVar48 * 4 + lVar46 * lStack_190);
            fVar53 = fVar53 * fVar53;
            if (pfStack_1d0 < pfStack_1c8) {
              pfVar14 = pfStack_1d0 + 1;
              *pfStack_1d0 = fVar53;
            }
            else {
              lVar24 = (long)pfStack_1d0 - (long)pfStack_1d8;
              uVar21 = (lVar24 >> 2) + 1;
              if (uVar21 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_10953293c;
              }
              uVar39 = (long)pfStack_1c8 - (long)pfStack_1d8 >> 1;
              if (uVar39 <= uVar21) {
                uVar39 = uVar21;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfStack_1c8 - (long)pfStack_1d8)) {
                uVar39 = 0x3fffffffffffffff;
              }
              ppfVar12 = &pfStack_1d8;
              FUN_1092cc1a0();
              pfVar13 = pfStack_1d8;
              pfVar25 = (float *)((long)ppfVar12 + lVar24);
              pfVar44 = (float *)((long)pfVar25 - ((long)pfStack_1d0 - (long)pfStack_1d8));
              pfVar14 = pfVar25 + 1;
              *pfVar25 = fVar53;
              _memcpy(pfVar44,pfVar13);
              pfVar25 = pfStack_1d8;
              pfStack_1d8 = pfVar44;
              pfStack_1c8 = (float *)((long)ppfVar12 + uVar39 * 4);
              if (pfVar25 != (float *)0x0) {
                pfStack_1d0 = pfVar14;
                __ZdlPv();
              }
            }
            pfStack_1d0 = pfVar14;
          }
          lVar48 = lVar48 + uVar29;
        } while ((int)lVar48 < (int)uVar4);
      }
      lVar43 = lVar43 + uVar29;
      lVar46 = lVar46 + uVar29 * 4;
    } while ((int)lVar43 < (int)uVar5);
  }
  if ((long)pfStack_1d0 - (long)pfStack_1d8 == 0) {
    fVar53 = 100.0;
  }
  else {
    uVar21 = (ulong)((long)pfStack_1d0 - (long)pfStack_1d8 >> 2) >> 1;
    if (pfStack_1d8 + uVar21 != pfStack_1d0) {
      FUN_109530e44();
    }
    fVar53 = pfStack_1d8[uVar21] * 1.4826022 * 1.4826022 * 21.950163;
  }
  fVar54 = 0.0;
  fVar56 = 0.0;
  fVar55 = 0.0;
  fVar68 = 0.0;
  uVar70 = 0;
  uVar69 = 0;
  uVar72 = 0;
  if (2 < iVar18) {
    if (fVar53 <= 100.0) {
      fVar53 = fStack_2bc;
    }
    fVar54 = 0.0;
    fVar56 = 0.0;
    fVar59 = 0.0;
    uVar21 = 1;
    fVar63 = 0.0;
    uVar64 = 0;
    uVar65 = 0;
    uVar66 = 0;
    fVar57 = afStack_1c0[0];
    fVar58 = afStack_1c0[1];
    do {
      if (1 < (int)uVar4) {
        lVar43 = lStack_1b0 + uVar21 * lStack_1a8 * 4;
        fVar73 = (float)(uVar21 & 0xffffffff) + 0.5;
        fVar74 = (float)uStack_128 + fVar73 * (float)uStack_130;
        uVar39 = 1;
        fVar67 = *(float *)(lVar43 + 4);
        do {
          fVar61 = *(float *)(lStack_1b0 + (uVar21 - 1) * lStack_1a8 * 4 + uVar39 * 4);
          fVar62 = *(float *)(lStack_1b0 + (uVar21 + 1) * lStack_1a8 * 4 + uVar39 * 4);
          fVar60 = *(float *)(lVar43 + -4 + uVar39 * 4);
          uVar40 = uVar39 + 1;
          fVar75 = *(float *)(lVar43 + uVar40 * 4);
          if (fVar61 + fVar62 + fVar60 + fVar75 + fVar67 <= 10000.0) {
            lVar46 = 0;
            fVar71 = (float)(uVar39 & 0xffffffff) + 0.5;
            fVar67 = fVar67 - pfStack_198[uVar21 * lStack_190 + uVar39];
            uVar69 = NEON_fmov(0x3e800000,4);
            fVar68 = ((fVar62 - fVar61) + (float)puStack_168[uVar21 * uStack_160 + uVar39]) *
                     (float)uVar69;
            fVar60 = ((fVar75 - fVar60) + (float)puStack_180[uVar21 * uStack_178 + uVar39]) *
                     (float)((ulong)uVar69 >> 0x20);
            fVar61 = SUB84(dStack_140,0) * fVar68;
            fVar62 = (float)((ulong)dStack_140 >> 0x20) * fVar60;
            fVar68 = ((float)uStack_138 - fVar73) * fVar68 +
                     ((float)((ulong)uStack_138 >> 0x20) - fVar71) * fVar60;
            fVar60 = 1.0 - (1.0 / fVar53) * fVar67 * fVar67;
            if (fVar53 <= fVar67 * fVar67) {
              fVar60 = 0.0;
            }
            fVar76 = (fVar61 * 0.0 + fVar62 * -1.0 +
                     (uStack_128._4_4_ + fVar71 * uStack_130._4_4_) * fVar68) * fVar60;
            fVar77 = ((fVar61 * 1.0 + fVar62 * 0.0) - fVar74 * fVar68) * fVar60;
            uStack_1e8 = CONCAT44(fVar77,fVar76);
            fVar61 = fVar60 * (fVar68 * 0.0 +
                              (-(uStack_130._4_4_ * fVar71) - uStack_128._4_4_) * fVar61 +
                              fVar74 * fVar62);
            fStack_1e0 = fVar61;
            pfVar25 = afStack_238 + 2;
            do {
              fVar68 = *(float *)((long)&uStack_1e8 + lVar46);
              *(ulong *)(pfVar25 + -2) = CONCAT44(fVar77 * fVar68,fVar76 * fVar68);
              *pfVar25 = fVar61 * fVar68;
              lVar46 = lVar46 + 4;
              pfVar25 = pfVar25 + 3;
            } while (lVar46 != 0xc);
            fVar67 = fVar67 * fVar60;
            uVar66 = CONCAT44((float)((ulong)uVar66 >> 0x20) + afStack_238[1],
                              (float)uVar66 + afStack_238[0]);
            uVar65 = CONCAT44((float)((ulong)uVar65 >> 0x20) + afStack_238[3],
                              (float)uVar65 + afStack_238[2]);
            uVar64 = CONCAT44((float)((ulong)uVar64 >> 0x20) + (float)((ulong)uStack_228 >> 0x20),
                              (float)uVar64 + (float)uStack_228);
            fVar54 = fVar54 + (float)uStack_220;
            fVar56 = fVar56 + (float)((ulong)uStack_220 >> 0x20);
            fVar68 = fVar63 + fStack_218;
            fVar57 = fVar57 + fVar76 * fVar67;
            fVar58 = fVar58 + fVar77 * fVar67;
            fVar59 = fVar59 + fVar67 * fVar61;
            uVar69 = uVar65;
            uVar70 = uVar64;
            uVar72 = uVar66;
            fVar63 = fVar68;
          }
          uVar39 = uVar40;
          fVar67 = fVar75;
        } while (uVar40 != uVar4);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar23);
    afStack_1c0[0] = fVar57;
    afStack_1c0[1] = fVar58;
    afStack_1c0[2] = fVar59;
  }
  uVar21 = 0;
  afStack_238[0] = (float)uVar72;
  afStack_238[1] = (float)((ulong)uVar72 >> 0x20);
  afStack_238[2] = (float)uVar69;
  afStack_238[3] = (float)((ulong)uVar69 >> 0x20);
  uStack_228 = uVar70;
  uStack_220 = CONCAT44(fVar56,fVar54);
  fStack_218 = fVar68;
  lVar43 = 2;
  fStack_214 = 0.0;
  pfVar25 = pfVar28;
  do {
    fVar53 = ABS(afStack_238[uVar21 * 4]);
    pfVar13 = pfVar25;
    lVar46 = lVar43;
    if (uVar21 < 2) {
      do {
        fVar53 = fVar53 + ABS(*pfVar13);
        lVar46 = lVar46 + -1;
        pfVar13 = pfVar13 + 1;
      } while (lVar46 != 0);
      if (uVar21 == 0) {
        fVar54 = 0.0;
      }
      else {
        fVar54 = ABS(afStack_238[uVar21]);
      }
    }
    else {
      fVar54 = ABS(afStack_238[uVar21]) + ABS(afStack_238[uVar21 + 3]);
    }
    fVar53 = fVar53 + fVar54;
    if (fVar55 < fVar53) {
      fStack_214 = fVar53;
      fVar55 = fVar53;
    }
    uVar21 = uVar21 + 1;
    lVar43 = lVar43 + -1;
    pfVar25 = pfVar25 + 4;
  } while (uVar21 != 3);
  lVar24 = 0;
  lVar43 = 0;
  bVar6 = 0;
  pfVar25 = afStack_238;
  uStack_1f4 = 0;
  iStack_1f8 = 2;
  lVar46 = 1;
  lVar48 = -2;
  lVar47 = -1;
  pfVar13 = afStack_238;
  uVar21 = 2;
  pfVar14 = afStack_238;
  bVar11 = true;
  pfVar44 = (float *)&uStack_228;
  pfVar37 = pfVar28;
  pfVar41 = (float *)&uStack_228;
  do {
    uVar39 = uVar21;
    if ((long)uVar20 <= (long)uVar21) {
      uVar39 = uVar20;
    }
    if (lVar43 == 2) {
      aiStack_210[2] = 2;
    }
    else {
      lVar35 = 0;
      lVar16 = 1;
      pfVar30 = pfVar44;
      fVar53 = ABS(afStack_238[lVar43 * 4]);
      do {
        fVar55 = ABS(*pfVar30);
        lVar34 = lVar16;
        if (ABS(*pfVar30) <= fVar53) {
          fVar55 = fVar53;
          lVar34 = lVar35;
        }
        lVar35 = lVar34;
        lVar16 = lVar16 + 1;
        pfVar30 = pfVar30 + 4;
        fVar53 = fVar55;
      } while (lVar43 + lVar16 != 3);
      lVar16 = lVar35 + lVar43;
      aiStack_210[lVar43] = (int)lVar16;
      if (lVar35 != 0) {
        if (lVar43 != 0) {
          lVar34 = lVar43;
          pfVar30 = pfVar14;
          pfVar36 = afStack_238 + lVar43 + lVar35;
          do {
            fVar53 = *pfVar30;
            *pfVar30 = *pfVar36;
            *pfVar36 = fVar53;
            lVar34 = lVar34 + -1;
            pfVar30 = pfVar30 + 3;
            pfVar36 = pfVar36 + 3;
          } while (lVar34 != 0);
        }
        uVar38 = 2 - lVar16;
        pfVar30 = afStack_238 + lVar43 * 3;
        uVar40 = (ulong)-((int)pfVar30 + (int)lVar16 * 4 + 4U >> 2) & 3;
        if ((long)uVar38 <= (long)uVar40) {
          uVar40 = uVar38;
        }
        uVar17 = uVar38 - uVar40;
        uVar31 = uVar17 + 3;
        if ((long)uVar40 <= (long)uVar38) {
          uVar31 = uVar17;
        }
        iVar42 = (int)pfVar13;
        if (0 < (long)uVar40) {
          uVar49 = (ulong)-((uint)(iVar42 + (int)(lVar46 + lVar35) * 4) >> 2) & 3;
          uVar45 = uVar21 - lVar35;
          if ((long)uVar49 <= (long)(uVar21 - lVar35)) {
            uVar45 = uVar49;
          }
          pfVar36 = pfVar25 + lVar46 + lVar35;
          pfVar50 = pfVar37 + lVar35 * 4;
          do {
            fVar53 = *pfVar36;
            *pfVar36 = *pfVar50;
            *pfVar50 = fVar53;
            uVar45 = uVar45 - 1;
            pfVar36 = pfVar36 + 1;
            pfVar50 = pfVar50 + 1;
          } while (uVar45 != 0);
        }
        lVar34 = (uVar31 & 0xfffffffffffffffc) + uVar40;
        if (3 < (long)uVar17) {
          uVar45 = (ulong)-((uint)(iVar42 + (int)(lVar46 + lVar35) * 4) >> 2) & 3;
          uVar17 = uVar21 - lVar35;
          if ((long)uVar45 <= (long)(uVar21 - lVar35)) {
            uVar17 = uVar45;
          }
          lVar32 = uVar17 * 4 + (lVar46 + lVar35) * 4;
          lVar33 = lVar35 * 0x10 + uVar17 * 4;
          do {
            uVar72 = ((undefined8 *)((long)pfVar37 + lVar33))[1];
            uVar69 = *(undefined8 *)((long)pfVar37 + lVar33);
            uVar70 = *(undefined8 *)((long)pfVar25 + lVar32);
            ((undefined8 *)((long)pfVar37 + lVar33))[1] =
                 ((undefined8 *)((long)pfVar25 + lVar32))[1];
            *(undefined8 *)((long)pfVar37 + lVar33) = uVar70;
            ((undefined8 *)((long)pfVar25 + lVar32))[1] = uVar72;
            *(undefined8 *)((long)pfVar25 + lVar32) = uVar69;
            uVar40 = uVar40 + 4;
            lVar32 = lVar32 + 0x10;
            lVar33 = lVar33 + 0x10;
          } while ((long)uVar40 < lVar34);
        }
        if (lVar34 < (long)uVar38) {
          uVar38 = (ulong)-((uint)(iVar42 + (int)(lVar46 + lVar35) * 4) >> 2) & 3;
          uVar40 = uVar21 - lVar35;
          if ((long)uVar38 <= (long)(uVar21 - lVar35)) {
            uVar40 = uVar38;
          }
          lVar32 = ((long)uVar31 >> 2) * 0x10 + uVar40 * 4;
          lVar33 = lVar48 + (uVar31 & 0xfffffffffffffffc) + lVar35 + uVar40;
          lVar34 = lVar32 + lVar35 * 0x10;
          lVar32 = lVar32 + (lVar46 + lVar35) * 4;
          do {
            uVar52 = *(undefined4 *)((long)pfVar25 + lVar32);
            *(undefined4 *)((long)pfVar25 + lVar32) = *(undefined4 *)((long)pfVar37 + lVar34);
            *(undefined4 *)((long)pfVar37 + lVar34) = uVar52;
            lVar34 = lVar34 + 4;
            lVar32 = lVar32 + 4;
            bVar10 = lVar33 != -1;
            lVar33 = lVar33 + 1;
          } while (bVar10);
        }
        fVar53 = pfVar30[lVar43];
        pfVar30[lVar43] = afStack_238[lVar16 * 4];
        afStack_238[lVar16 * 4] = fVar53;
        if (lVar35 != 1) {
          lVar34 = 0;
          lVar35 = (lVar43 + lVar35) * 4;
          do {
            lVar35 = lVar35 + 0xc;
            fVar53 = pfVar37[lVar34];
            pfVar37[lVar34] = *(float *)((long)pfVar25 + lVar35);
            *(float *)((long)pfVar25 + lVar35) = fVar53;
            lVar34 = lVar34 + 1;
          } while (lVar46 + lVar34 < lVar16);
        }
      }
    }
    lVar16 = lVar43 + 1;
    uVar40 = 2 - lVar43;
    pfVar30 = afStack_238 + lVar16 + lVar43 * 3;
    if (lVar43 == 0) {
      bVar10 = true;
      fVar53 = afStack_238[0];
      if ((0.0 <= afStack_238[0]) && (afStack_238[0] == 0.0)) {
        lVar43 = 0;
        iStack_1f8 = 2;
        lVar46 = 1;
        pfVar25 = pfVar28;
        goto LAB_1095325bc;
      }
    }
    else {
      lVar35 = 0;
      pfVar36 = afStack_238;
      pfVar50 = &fStack_204;
      do {
        *pfVar50 = *pfVar36 * *(float *)((long)pfVar14 + lVar35);
        lVar35 = lVar35 + 0xc;
        pfVar36 = pfVar36 + 4;
        pfVar50 = pfVar50 + 1;
      } while (lVar24 != lVar35);
      if (lVar43 != 2) {
        afStack_238[lVar43 * 4] = afStack_238[lVar43 * 4] - afStack_238[lVar43] * fStack_204;
        uVar19 = -((uint)pfVar30 >> 2);
        uVar31 = (ulong)uVar19 & 3;
        uVar38 = uVar31;
        if (uVar40 <= uVar31) {
          uVar38 = uVar40;
        }
        if ((uVar19 & 3) != 0) {
          uVar17 = 0;
          pfVar36 = pfVar41;
          do {
            fVar53 = afStack_238[lVar16 + uVar17] * fStack_204;
            lVar35 = lVar47;
            pfVar50 = pfVar36;
            pfVar51 = afStack_200;
            if (lVar43 != 1) {
              do {
                fVar53 = fVar53 + *pfVar50 * *pfVar51;
                lVar35 = lVar35 + -1;
                pfVar50 = pfVar50 + 3;
                pfVar51 = pfVar51 + 1;
              } while (lVar35 != 0);
            }
            pfVar30[uVar17] = pfVar30[uVar17] - fVar53;
            uVar17 = uVar17 + 1;
            pfVar36 = pfVar36 + 1;
          } while (uVar17 != uVar38);
        }
        if (uVar31 < uVar40) {
          do {
            pfVar37[uVar38] = pfVar37[uVar38] - pfVar14[uVar38 + 1] * fStack_204;
            uVar38 = uVar38 + 1;
          } while (uVar21 != uVar38);
        }
      }
      fVar53 = afStack_238[lVar43 * 4];
      bVar10 = 0.0 < fVar53 || fVar53 < 0.0;
    }
    if ((lVar43 == 2) || (!bVar10)) {
      if ((bool)(lVar43 != 2 & bVar11)) {
        lVar35 = 0;
        do {
          pfVar30 = pfVar37 + lVar35;
          lVar34 = lVar47 + lVar35;
          lVar35 = lVar35 + 1;
          bVar7 = *pfVar30 == 0.0;
        } while (*pfVar30 == 0.0 && lVar34 != 0);
      }
      else {
        bVar7 = (bool)(lVar43 == 2 & bVar11);
      }
    }
    else {
      uVar19 = -((uint)pfVar30 >> 2);
      uVar31 = (ulong)uVar19 & 3;
      uVar38 = uVar31;
      if ((long)uVar40 <= (long)uVar31) {
        uVar38 = uVar40;
      }
      if ((uVar19 & 3) != 0) {
        uVar17 = 0;
        do {
          pfVar37[uVar17] = pfVar37[uVar17] / fVar53;
          uVar17 = uVar17 + 1;
        } while (uVar39 != uVar17);
      }
      bVar7 = bVar11;
      if (uVar31 < uVar40) {
        do {
          pfVar37[uVar38] = pfVar37[uVar38] / fVar53;
          uVar38 = uVar38 + 1;
        } while (uVar21 != uVar38);
      }
    }
    bVar11 = (bool)((bVar6 & bVar10 ^ 1) & bVar7);
    if (!bVar10) {
      bVar11 = bVar7;
    }
    if (iStack_1f8 == 2) {
      if (fVar53 <= 0.0) {
        if (0.0 <= fVar53) goto LAB_109532578;
        iStack_1f8 = 1;
      }
      else {
        iStack_1f8 = 0;
      }
LAB_109532574:
    }
    else if (iStack_1f8 == 1) {
      if (0.0 < fVar53) goto LAB_109532554;
    }
    else if ((iStack_1f8 == 0) && (fVar53 < 0.0)) {
LAB_109532554:
      iStack_1f8 = 3;
      goto LAB_109532574;
    }
LAB_109532578:
    bVar6 = bVar10 ^ 1U | bVar6;
    lVar43 = lVar43 + 1;
    pfVar44 = pfVar44 + 4;
    pfVar14 = pfVar14 + 1;
    uVar21 = uVar21 - 1;
    pfVar13 = pfVar13 + 3;
    lVar46 = lVar46 + 1;
    pfVar37 = pfVar37 + 4;
    pfVar25 = pfVar25 + 3;
    lVar48 = lVar48 + 1;
    lVar24 = lVar24 + 0xc;
    lVar47 = lVar47 + 1;
    pfVar41 = pfVar41 + 1;
  } while (lVar16 != 3);
  goto LAB_109532618;
LAB_1095325bc:
  do {
    aiStack_210[lVar43] = (int)lVar43;
    if (bVar11) {
      pfVar13 = pfVar25;
      lVar48 = lVar46;
      if (lVar43 == 2) {
        bVar11 = true;
        break;
      }
      do {
        bVar10 = lVar48 != 0;
        bVar11 = *pfVar13 == 0.0;
        if (!bVar11) break;
        pfVar13 = pfVar13 + 1;
        lVar48 = lVar48 + -1;
      } while (bVar10);
    }
    else {
      bVar11 = false;
    }
    lVar43 = lVar43 + 1;
    lVar46 = lVar46 + -1;
    pfVar25 = pfVar25 + 4;
  } while (lVar43 != 3);
LAB_109532618:
  lVar43 = 0;
  uStack_1f0 = (uint)(bVar11 ^ 1);
  uStack_1f4 = 1;
  do {
    lVar46 = (long)aiStack_210[lVar43];
    if (lVar43 != lVar46) {
      fVar53 = afStack_1c0[lVar43];
      afStack_1c0[lVar43] = afStack_1c0[lVar46];
      afStack_1c0[lVar46] = fVar53;
    }
    lVar43 = lVar43 + 1;
  } while (lVar43 != 3);
  lVar46 = 0;
  lVar43 = 0;
  afStack_1c0[1] = afStack_1c0[1] - afStack_238[1] * afStack_1c0[0];
  afStack_1c0[2] =
       afStack_1c0[2] - (afStack_1c0[0] * afStack_238[2] + afStack_1c0[1] * uStack_228._4_4_);
  do {
    fVar53 = 0.0;
    if (1.1754944e-38 < ABS(afStack_238[lVar46])) {
      fVar53 = *(float *)((long)afStack_1c0 + lVar46) / afStack_238[lVar46];
    }
    *(float *)((long)afStack_1c0 + lVar46) = fVar53;
    lVar43 = lVar43 + 0xc;
    lVar46 = lVar46 + 4;
  } while (lVar43 != 0x24);
  lVar43 = 0;
  afStack_1c0[1] = afStack_1c0[1] - uStack_228._4_4_ * afStack_1c0[2];
  afStack_1c0[0] =
       afStack_1c0[0] - (afStack_238[1] * afStack_1c0[1] + afStack_238[2] * afStack_1c0[2]);
  do {
    lVar46 = (long)aiStack_210[lVar43 + 2];
    if (lVar43 + 2 != lVar46) {
      fVar53 = afStack_1c0[lVar43 + 2];
      afStack_1c0[lVar43 + 2] = afStack_1c0[lVar46];
      afStack_1c0[lVar46] = fVar53;
    }
    fVar54 = fStack_b8;
    uVar70 = uStack_c0;
    fVar55 = fStack_c4;
    uVar69 = uStack_cc;
    fVar53 = fStack_d0;
    auVar8 = auStack_d8;
    lVar43 = lVar43 + -1;
  } while (lVar43 != -3);
  uStack_150._0_4_ = (float)uStack_150 - afStack_1c0[0];
  uStack_150._4_4_ = uStack_150._4_4_ - afStack_1c0[1];
  dStack_148 = (double)CONCAT44(dStack_148._4_4_,dStack_148._0_4_ - afStack_1c0[2]);
  FUN_1095311fc(&uStack_150);
  fVar68 = uStack_150._4_4_;
  fVar56 = (float)uStack_150;
  fVar54 = fVar53 * 0.0 + fVar55 * 0.0 + fVar54;
  fVar55 = fStack_d0 * 0.0 + fStack_c4 * 0.0 + fStack_b8;
  fVar53 = (auStack_d8._0_4_ * 0.0 + (float)uStack_cc * 0.0 + (float)uStack_c0) / fVar55 -
           (auVar8._0_4_ * 0.0 + (float)uVar69 * 0.0 + (float)uVar70) / fVar54;
  fVar55 = (auStack_d8._4_4_ * 0.0 + (float)((ulong)uStack_cc >> 0x20) * 0.0 +
           (float)((ulong)uStack_c0 >> 0x20)) / fVar55 -
           (auVar8._4_4_ * 0.0 + (float)((ulong)uVar69 >> 0x20) * 0.0 +
           (float)((ulong)uVar70 >> 0x20)) / fVar54;
  iVar26 = iVar26 + 1;
  if (fVar53 * fVar53 + fVar55 * fVar55 <= 0.0625 || iVar26 == 10) {
    fVar53 = dStack_148._0_4_;
    if (pfStack_1d8 != (float *)0x0) {
      pfStack_1d0 = pfStack_1d8;
      __ZdlPv();
    }
    _free(lStack_1b0);
    _free(pfStack_198);
    _free(puStack_180);
    _free(puStack_168);
    uStack_150 = (double)fVar56;
    dStack_148 = (double)fVar68;
    dStack_140 = (double)fVar53;
    afStack_238[0] = 0.0;
    afStack_238[1] = 0.0;
    afStack_238[2] = 0.0;
    afStack_238[3] = 0.0;
    uStack_228 = 0;
    FUN_10937f620(param_1,&uStack_150,afStack_238);
    return;
  }
  goto LAB_109531bbc;
}



/* Entry: 1095329ac; end: 109533fff;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1095329ac(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  float **ppfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  byte bVar26;
  int iVar27;
  undefined4 *puVar28;
  float *pfVar29;
  float *pfVar30;
  undefined8 *puVar31;
  undefined4 *puVar32;
  ulong uVar33;
  float *pfVar34;
  undefined8 *puVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  float *pfVar42;
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  float *pfVar47;
  long lVar48;
  long lVar49;
  float *pfVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  long lVar54;
  float fVar55;
  undefined4 uVar56;
  int iVar57;
  undefined8 uVar58;
  int iVar60;
  int iVar61;
  undefined1 auVar59 [16];
  int iVar62;
  float fVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  double dVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fStack_2f4;
  ulong uStack_2c8;
  long lStack_2a8;
  float *pfStack_268;
  float *pfStack_260;
  float *pfStack_258;
  float afStack_250 [4];
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  float *pfStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined4 *puStack_210;
  ulong uStack_208;
  long lStack_200;
  undefined4 *puStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  int aiStack_190 [4];
  float afStack_180 [4];
  int iStack_170;
  undefined1 uStack_16c;
  uint uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar91 = *(undefined8 *)(param_2 + 0x18);
  auVar59._12_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  auVar59._0_12_ = *(undefined1 (*) [12])(param_2 + 0x20);
  uVar58 = NEON_fmov(0x3f800000,4);
  fStack_10c = (float)uVar58 / (float)SUB128(*(undefined1 (*) [12])(param_2 + 0x20),0);
  fStack_fc = (float)((ulong)uVar58 >> 0x20) / (float)auVar59._8_8_;
  fStack_130 = (float)*(double *)(param_3 + 0x20);
  fStack_120 = (float)*(double *)(param_3 + 0x28);
  uStack_150 = CONCAT44(fStack_120,fStack_130);
  auVar9._12_4_ = (int)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  auVar9._0_12_ = *(undefined1 (*) [12])(param_3 + 0x10);
  fVar63 = (float)SUB128(*(undefined1 (*) [12])(param_3 + 0x10),0);
  uStack_148 = CONCAT44((float)auVar9._8_8_,fVar63);
  auVar6[9] = (char)((ulong)uVar91 >> 8);
  auVar6._0_9_ = *(unkbyte9 *)(param_2 + 0x10);
  auVar6[10] = (char)((ulong)uVar91 >> 0x10);
  auVar6[0xb] = (char)((ulong)uVar91 >> 0x18);
  auVar6[0xc] = (char)((ulong)uVar91 >> 0x20);
  auVar6[0xd] = (char)((ulong)uVar91 >> 0x28);
  auVar6[0xe] = (char)((ulong)uVar91 >> 0x30);
  auVar6[0xf] = (char)((ulong)uVar91 >> 0x38);
  fStack_f4 = fStack_10c * -(float)(double)*(unkbyte9 *)(param_2 + 0x10);
  fVar55 = fStack_fc * -(float)auVar6._8_8_;
  uVar64 = (undefined1)((uint)fVar55 >> 8);
  uVar65 = (undefined1)((uint)fVar55 >> 0x10);
  uVar66 = (undefined1)((uint)fVar55 >> 0x18);
  uStack_140 = CONCAT44(fStack_fc,fStack_10c);
  uStack_138 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(SUB41(fVar55,0),fStack_f4)))
                       );
  uStack_118 = CONCAT44((float)auVar9._8_8_,fVar63);
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_11c = 0;
  uStack_110 = 0x3f800000;
  uStack_f0 = (undefined4)
              (CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(SUB41(fVar55,0),fStack_f4)))
                       ) >> 0x20);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_ec = 0x3f800000;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_10953131c(&uStack_160);
  uVar45 = *(ulong *)(param_4 + 0x10);
  puStack_1f8 = (undefined4 *)0x0;
  uStack_1f0 = 0;
  lStack_1e8 = 0;
  lVar46 = (long)uVar45 >> 0x20;
  iVar44 = (int)uVar45;
  lVar49 = (long)iVar44;
  bVar12 = uVar45 >> 0x20 != 0;
  bVar11 = iVar44 != 0;
  if (bVar12 && bVar11) {
    lVar54 = 0;
    if (lVar49 != 0) {
      lVar54 = 0x7fffffffffffffff / lVar49;
    }
    if (lVar54 < lVar46) goto LAB_109533efc;
  }
  iVar57 = (int)(uVar45 >> 0x20);
  lVar54 = (long)iVar44 * (long)iVar57;
  FUN_1093c3d54(&puStack_1f8,lVar54,lVar46,lVar49);
  puStack_210 = (undefined4 *)0x0;
  uStack_208 = 0;
  lStack_200 = 0;
  if (bVar12 && bVar11) {
    lVar25 = 0;
    if (lVar49 != 0) {
      lVar25 = 0x7fffffffffffffff / lVar49;
    }
    if (lVar25 < lVar46) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109533f88;
    }
  }
  FUN_1093c3d54(&puStack_210,lVar54,lVar46,lVar49);
  uVar33 = uStack_1f0;
  puVar32 = puStack_1f8;
  puVar28 = puStack_1f8;
  lVar25 = lStack_1e8;
  if (0 < lStack_1e8) {
    do {
      *puVar28 = 0;
      lVar25 = lVar25 + -1;
      puVar28 = puVar28 + uStack_1f0;
    } while (lVar25 != 0);
    puVar28 = puStack_1f8 + (iVar57 + -1);
    lVar25 = lStack_1e8;
    do {
      *puVar28 = 0;
      puVar28 = puVar28 + uStack_1f0;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  uVar3 = iVar57 - 1;
  lStack_2a8 = (long)(int)uVar3;
  uStack_2c8 = (ulong)uVar3;
  uVar22 = (ulong)-((uint)puStack_1f8 >> 2) & 3;
  if ((long)uStack_1f0 <= (long)uVar22) {
    uVar22 = uStack_1f0;
  }
  uVar24 = uStack_1f0;
  if (((ulong)puStack_1f8 & 3) == 0) {
    uVar24 = uVar22;
  }
  uVar52 = uStack_1f0 - uVar24;
  uVar22 = uVar52 + 3;
  if (-1 < (long)uVar52) {
    uVar22 = uVar52;
  }
  if (0 < (long)uVar24) {
    _bzero(puStack_1f8,uVar24 << 2);
  }
  lVar25 = (uVar22 & 0xfffffffffffffffc) + uVar24;
  if (3 < (long)uVar52) {
    lVar37 = lVar25;
    if (lVar25 <= (long)(uVar24 + 4)) {
      lVar37 = uVar24 + 4;
    }
    _bzero(puVar32 + uVar24,(lVar37 + ~uVar24 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar25 < (long)uVar33) {
    _bzero(puVar32 + ((long)uVar22 >> 2) * 4 + uVar24,((long)uVar52 % 4) * 4);
  }
  uVar33 = uStack_1f0;
  uVar4 = iVar44 - 1;
  uVar24 = (ulong)(int)uVar4;
  puVar32 = puStack_1f8 + uStack_1f0 * uVar24;
  uVar22 = uStack_1f0;
  if ((((ulong)puVar32 & 3) == 0) &&
     (uVar22 = (ulong)-((uint)puVar32 >> 2) & 3, (long)uStack_1f0 <= (long)uVar22)) {
    uVar22 = uStack_1f0;
  }
  uVar53 = uStack_1f0 - uVar22;
  uVar52 = uVar53 + 3;
  if (-1 < (long)uVar53) {
    uVar52 = uVar53;
  }
  if (0 < (long)uVar22) {
    _bzero(puVar32,uVar22 << 2);
  }
  lVar25 = (uVar52 & 0xfffffffffffffffc) + uVar22;
  if (3 < (long)uVar53) {
    lVar37 = lVar25;
    if (lVar25 <= (long)(uVar22 + 4)) {
      lVar37 = uVar22 + 4;
    }
    _bzero(puVar32 + uVar22,(lVar37 + ~uVar22 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar25 < (long)uVar33) {
    _bzero(puVar32 + ((long)uVar52 >> 2) * 4 + uVar22,((long)uVar53 % 4) * 4);
  }
  uVar33 = uStack_208;
  puVar32 = puStack_210;
  puVar28 = puStack_210;
  lVar25 = lStack_200;
  if (0 < lStack_200) {
    do {
      *puVar28 = 0;
      lVar25 = lVar25 + -1;
      puVar28 = puVar28 + uStack_208;
    } while (lVar25 != 0);
    puVar28 = puStack_210 + lStack_2a8;
    lVar25 = lStack_200;
    do {
      *puVar28 = 0;
      puVar28 = puVar28 + uStack_208;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  uVar22 = (ulong)-((uint)puStack_210 >> 2) & 3;
  if ((long)uStack_208 <= (long)uVar22) {
    uVar22 = uStack_208;
  }
  uVar52 = uStack_208;
  if (((ulong)puStack_210 & 3) == 0) {
    uVar52 = uVar22;
  }
  uVar53 = uStack_208 - uVar52;
  uVar22 = uVar53 + 3;
  if (-1 < (long)uVar53) {
    uVar22 = uVar53;
  }
  if (0 < (long)uVar52) {
    _bzero(puStack_210,uVar52 << 2);
  }
  lVar25 = (uVar22 & 0xfffffffffffffffc) + uVar52;
  if (3 < (long)uVar53) {
    lVar37 = lVar25;
    if (lVar25 <= (long)(uVar52 + 4)) {
      lVar37 = uVar52 + 4;
    }
    _bzero(puVar32 + uVar52,(lVar37 + ~uVar52 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar25 < (long)uVar33) {
    _bzero(puVar32 + ((long)uVar22 >> 2) * 4 + uVar52,((long)uVar53 % 4) * 4);
  }
  uVar33 = uStack_208;
  puVar32 = puStack_210 + uStack_208 * uVar24;
  uVar22 = uStack_208;
  if ((((ulong)puVar32 & 3) == 0) &&
     (uVar22 = (ulong)-((uint)puVar32 >> 2) & 3, (long)uStack_208 <= (long)uVar22)) {
    uVar22 = uStack_208;
  }
  uVar53 = uStack_208 - uVar22;
  uVar52 = uVar53 + 3;
  if (-1 < (long)uVar53) {
    uVar52 = uVar53;
  }
  if (0 < (long)uVar22) {
    _bzero(puVar32,uVar22 << 2);
  }
  lVar25 = (uVar52 & 0xfffffffffffffffc) + uVar22;
  if (3 < (long)uVar53) {
    lVar37 = lVar25;
    if (lVar25 <= (long)(uVar22 + 4)) {
      lVar37 = uVar22 + 4;
    }
    _bzero(puVar32 + uVar22,(lVar37 + ~uVar22 & 0x3ffffffffffffffc) * 4 + 0x10);
  }
  if (lVar25 < (long)uVar33) {
    _bzero(puVar32 + ((long)uVar52 >> 2) * 4 + uVar22,((long)uVar53 % 4) * 4);
  }
  if (1 < (int)uVar3) {
    pbVar23 = *(byte **)(param_4 + 8);
    lVar25 = (long)*(int *)(param_4 + 0x18);
    pfVar29 = (float *)(puStack_210 + uStack_208);
    uVar33 = 1;
    pfVar30 = (float *)(puStack_1f8 + uStack_1f0);
    do {
      pfVar30 = pfVar30 + 1;
      pfVar29 = pfVar29 + 1;
      uVar33 = uVar33 + 1;
      lVar37 = (ulong)uVar4 - 1;
      pfVar14 = pfVar30;
      pfVar16 = pfVar29;
      pbVar17 = pbVar23;
      if (2 < iVar44) {
        do {
          fVar63 = (float)NEON_ucvtf((uint)pbVar17[lVar25 + 2]);
          fVar55 = (float)NEON_ucvtf((uint)pbVar17[lVar25]);
          *pfVar14 = fVar63 - fVar55;
          fVar55 = (float)NEON_ucvtf((uint)pbVar17[lVar25 << 1 | 1]);
          *pfVar16 = fVar55 - (float)pbVar17[1];
          lVar37 = lVar37 + -1;
          pfVar14 = pfVar14 + uStack_1f0;
          pfVar16 = pfVar16 + uStack_208;
          pbVar17 = pbVar17 + 1;
        } while (lVar37 != 0);
      }
      pbVar23 = pbVar23 + lVar25;
    } while (uVar33 != uStack_2c8);
  }
  pfStack_228 = (float *)0x0;
  lStack_220 = 0;
  uStack_218 = 0;
  if (bVar12 && bVar11) {
    lVar25 = 0;
    if (lVar49 != 0) {
      lVar25 = 0x7fffffffffffffff / lVar49;
    }
    if (lVar25 < lVar46) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109533f88;
    }
  }
  FUN_1093c3d54(&pfStack_228,lVar54,lVar46,lVar49);
  lStack_240 = 0;
  lStack_238 = 0;
  uStack_230 = 0;
  if (bVar12 && bVar11) {
    lVar25 = 0;
    if (lVar49 != 0) {
      lVar25 = 0x7fffffffffffffff / lVar49;
    }
    if (lVar25 < lVar46) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109533f88;
    }
  }
  FUN_1093c3d54(&lStack_240,lVar54,lVar46,lVar49);
  if (0 < iVar57) {
    uVar33 = 0;
    pbVar23 = *(byte **)(param_4 + 8);
    iVar27 = *(int *)(param_4 + 0x18);
    pfVar29 = pfStack_228;
    do {
      pbVar17 = pbVar23;
      pfVar30 = pfVar29;
      uVar22 = uVar45 & 0x7fffffff;
      if (0 < iVar44) {
        do {
          *pfVar30 = (float)*pbVar17;
          pfVar30 = pfVar30 + lStack_220;
          uVar22 = uVar22 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar22 != 0);
      }
      uVar33 = uVar33 + 1;
      pfVar29 = pfVar29 + 1;
      pbVar23 = pbVar23 + iVar27;
    } while (uVar33 != uVar45 >> 0x20);
  }
  iVar27 = 0;
  fStack_2f4 = 100.0;
  uVar21 = (uint)SQRT((float)(iVar57 * iVar44) / 100.0);
  if ((int)uVar21 < 2) {
    uVar21 = 1;
  }
  uVar45 = (ulong)uVar21;
  pfStack_268 = (float *)0x0;
  pfStack_260 = (float *)0x0;
  pfStack_258 = (float *)0x0;
  pfVar30 = (float *)((ulong)&uStack_1e0 | 4);
  pfVar29 = afStack_180 + 1;
  iVar1 = 0;
  if (uVar21 != 0) {
    iVar1 = iVar44 / (int)uVar21;
  }
  iVar2 = 0;
  if (uVar21 != 0) {
    iVar2 = iVar57 / (int)uVar21;
  }
LAB_10953307c:
  FUN_109534a2c(&lStack_240,param_5,&uStack_e8);
  afStack_250[0] = 0.0;
  afStack_250[1] = 0.0;
  afStack_250[2] = 0.0;
  afStack_250[3] = 0.0;
  pfStack_260 = pfStack_268;
  func_0x0001073b504c(&pfStack_268,(long)(iVar1 + 1 + (iVar1 + 1) * iVar2));
  if (2 < iVar44) {
    lVar49 = 4;
    lVar46 = 1;
    do {
      if (1 < (int)uVar3) {
        lVar54 = 1;
        do {
          fVar55 = *(float *)(lStack_240 + lVar49 * lStack_238 + lVar54 * 4);
          if (fVar55 <= 10000.0) {
            fVar55 = fVar55 - *(float *)((long)pfStack_228 + lVar54 * 4 + lVar49 * lStack_220);
            fVar55 = fVar55 * fVar55;
            if (pfStack_260 < pfStack_258) {
              pfVar34 = pfStack_260 + 1;
              *pfStack_260 = fVar55;
            }
            else {
              lVar25 = (long)pfStack_260 - (long)pfStack_268;
              uVar33 = (lVar25 >> 2) + 1;
              if (uVar33 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_109533f88;
              }
              uVar22 = (long)pfStack_258 - (long)pfStack_268 >> 1;
              if (uVar22 <= uVar33) {
                uVar22 = uVar33;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfStack_258 - (long)pfStack_268)) {
                uVar22 = 0x3fffffffffffffff;
              }
              ppfVar13 = &pfStack_268;
              FUN_1092cc1a0();
              pfVar16 = pfStack_268;
              pfVar14 = (float *)((long)ppfVar13 + lVar25);
              pfVar47 = (float *)((long)pfVar14 - ((long)pfStack_260 - (long)pfStack_268));
              pfVar34 = pfVar14 + 1;
              *pfVar14 = fVar55;
              _memcpy(pfVar47,pfVar16);
              pfVar14 = pfStack_268;
              pfStack_268 = pfVar47;
              pfStack_258 = (float *)((long)ppfVar13 + uVar22 * 4);
              if (pfVar14 != (float *)0x0) {
                pfStack_260 = pfVar34;
                __ZdlPv();
              }
            }
            pfStack_260 = pfVar34;
          }
          lVar54 = lVar54 + uVar45;
        } while ((int)lVar54 < (int)uVar3);
      }
      lVar46 = lVar46 + uVar45;
      lVar49 = lVar49 + uVar45 * 4;
    } while ((int)lVar46 < (int)uVar4);
  }
  if ((long)pfStack_260 - (long)pfStack_268 == 0) {
    fVar55 = 100.0;
  }
  else {
    uVar33 = (ulong)((long)pfStack_260 - (long)pfStack_268 >> 2) >> 1;
    if (pfStack_268 + uVar33 != pfStack_260) {
      FUN_109530e44();
    }
    fVar55 = pfStack_268[uVar33] * 1.4826022 * 1.4826022 * 21.950163;
  }
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0.0;
  uStack_1c8 = 0;
  uVar91 = 0;
  uVar58 = 0;
  if (2 < iVar44) {
    if (fVar55 <= 100.0) {
      fVar55 = fStack_2f4;
    }
    pfVar14 = pfStack_228 + lStack_220 + 1;
    puVar32 = puStack_210 + uStack_208 + 1;
    puVar28 = puStack_1f8 + uStack_1f0 + 1;
    lVar54 = lStack_238 * 4;
    lVar46 = lStack_240 + lStack_238 * 8 + 4;
    uVar64 = 0;
    uVar65 = 0;
    uVar66 = 0;
    uVar67 = 0;
    uVar68 = 0;
    uVar69 = 0;
    uVar70 = 0;
    uVar71 = 0;
    uVar72 = 0;
    uVar73 = 0;
    uVar74 = 0;
    uVar75 = 0;
    uVar76 = 0;
    uVar77 = 0;
    uVar78 = 0;
    uVar79 = 0;
    uVar33 = 1;
    uVar80 = 0;
    uVar81 = 0;
    uVar82 = 0;
    uVar83 = 0;
    dVar84 = 0.0;
    uVar85 = 0;
    uVar86 = 0;
    uVar87 = 0;
    lVar49 = lStack_240;
    do {
      if (1 < (int)uVar3) {
        lVar25 = 0;
        fVar63 = (float)(uVar33 & 0xffffffff) + 0.5;
        fVar93 = (float)uStack_138 + fVar63 * (float)uStack_140;
        lVar37 = lVar54;
        do {
          fVar95 = *(float *)(lVar49 + lVar25 * 4 + 4);
          fVar96 = *(float *)(lVar46 + lVar25 * 4);
          pfVar16 = (float *)(lVar49 + lVar37);
          if (fVar95 + fVar96 + *pfVar16 + pfVar16[2] + pfVar16[1] <= 10000.0) {
            fVar92 = (float)((int)lVar25 + 1) + 0.5;
            fVar94 = pfVar16[1] - pfVar14[lVar25];
            uVar91 = NEON_fmov(0x3e800000,4);
            fVar95 = ((fVar96 - fVar95) + (float)puVar28[lVar25]) * (float)uVar91;
            fVar96 = ((pfVar16[2] - *pfVar16) + (float)puVar32[lVar25]) *
                     (float)((ulong)uVar91 >> 0x20);
            fVar90 = uStack_138._4_4_ + fVar92 * uStack_140._4_4_;
            fVar97 = (float)uStack_150 * fVar95;
            fVar98 = (float)((ulong)uStack_150 >> 0x20) * fVar96;
            fVar95 = ((float)uStack_148 - fVar63) * fVar95 +
                     ((float)((ulong)uStack_148 >> 0x20) - fVar92) * fVar96;
            fVar96 = 1.0 - (1.0 / fVar55) * fVar94 * fVar94;
            if (fVar55 <= fVar94 * fVar94) {
              fVar96 = 0.0;
            }
            fVar94 = fVar94 * fVar96;
            fVar88 = (fVar97 * 0.0 + fVar98 * -1.0 + fVar90 * fVar95) * fVar96;
            fVar89 = ((fVar97 * 1.0 + fVar98 * 0.0) - fVar93 * fVar95) * fVar96;
            fVar92 = (fVar95 * 0.0 +
                     (-(uStack_140._4_4_ * fVar92) - uStack_138._4_4_) * fVar97 + fVar93 * fVar98) *
                     fVar96;
            fVar96 = (fVar95 * 0.0 + fVar93 * fVar97 + fVar90 * fVar98) * fVar96;
            uVar86 = CONCAT44((float)((ulong)uVar86 >> 0x20) + fVar89 * fVar88,
                              (float)uVar86 + fVar88 * fVar88);
            uVar87 = CONCAT44((float)((ulong)uVar87 >> 0x20) + fVar96 * fVar88,
                              (float)uVar87 + fVar92 * fVar88);
            dVar84 = (double)CONCAT44((float)((ulong)dVar84 >> 0x20) + fVar89 * fVar89,
                                      SUB84(dVar84,0) + fVar88 * fVar89);
            uVar85 = CONCAT44((float)((ulong)uVar85 >> 0x20) + fVar96 * fVar89,
                              (float)uVar85 + fVar92 * fVar89);
            uVar82 = CONCAT44((float)((ulong)uVar82 >> 0x20) + fVar89 * fVar92,
                              (float)uVar82 + fVar88 * fVar92);
            uVar83 = CONCAT44((float)((ulong)uVar83 >> 0x20) + fVar96 * fVar92,
                              (float)uVar83 + fVar92 * fVar92);
            uVar80 = CONCAT44((float)((ulong)uVar80 >> 0x20) + fVar89 * fVar96,
                              (float)uVar80 + fVar88 * fVar96);
            uVar81 = CONCAT44((float)((ulong)uVar81 >> 0x20) + fVar96 * fVar96,
                              (float)uVar81 + fVar92 * fVar96);
            fVar95 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) +
                     fVar88 * fVar94;
            uVar64 = SUB41(fVar95,0);
            uVar65 = (undefined1)((uint)fVar95 >> 8);
            uVar66 = (undefined1)((uint)fVar95 >> 0x10);
            uVar67 = (undefined1)((uint)fVar95 >> 0x18);
            fVar95 = (float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) +
                     fVar89 * fVar94;
            uVar68 = SUB41(fVar95,0);
            uVar69 = (undefined1)((uint)fVar95 >> 8);
            uVar70 = (undefined1)((uint)fVar95 >> 0x10);
            uVar71 = (undefined1)((uint)fVar95 >> 0x18);
            fVar95 = (float)CONCAT13(uVar75,CONCAT12(uVar74,CONCAT11(uVar73,uVar72))) +
                     fVar92 * fVar94;
            uVar72 = SUB41(fVar95,0);
            uVar73 = (undefined1)((uint)fVar95 >> 8);
            uVar74 = (undefined1)((uint)fVar95 >> 0x10);
            uVar75 = (undefined1)((uint)fVar95 >> 0x18);
            fVar95 = (float)CONCAT13(uVar79,CONCAT12(uVar78,CONCAT11(uVar77,uVar76))) +
                     fVar96 * fVar94;
            uVar76 = SUB41(fVar95,0);
            uVar77 = (undefined1)((uint)fVar95 >> 8);
            uVar78 = (undefined1)((uint)fVar95 >> 0x10);
            uVar79 = (undefined1)((uint)fVar95 >> 0x18);
            uStack_1b0 = uVar80;
            uStack_1a8 = uVar81;
            uStack_1c0 = uVar82;
            uStack_1b8 = uVar83;
            uStack_1d0 = dVar84;
            uStack_1c8 = uVar85;
            uVar91 = uVar86;
            uVar58 = uVar87;
          }
          lVar25 = lVar25 + 1;
          lVar37 = lVar37 + 4;
        } while (uStack_2c8 - 1 != lVar25);
      }
      uVar33 = uVar33 + 1;
      pfVar14 = pfVar14 + lStack_220;
      puVar32 = puVar32 + uStack_208;
      puVar28 = puVar28 + uStack_1f0;
      lVar49 = lVar49 + lVar54;
      lVar46 = lVar46 + lVar54;
    } while (uVar33 != uVar24);
    afStack_250[2] = (float)CONCAT13(uVar75,CONCAT12(uVar74,CONCAT11(uVar73,uVar72)));
    afStack_250[3] =
         (float)(CONCAT17(uVar79,CONCAT16(uVar78,CONCAT15(uVar77,CONCAT14(uVar76,afStack_250[2]))))
                >> 0x20);
    afStack_250[0] = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)));
    afStack_250[1] =
         (float)(CONCAT17(uVar71,CONCAT16(uVar70,CONCAT15(uVar69,CONCAT14(uVar68,afStack_250[0]))))
                >> 0x20);
  }
  uVar33 = 0;
  uStack_16c = 0;
  uStack_1d8._0_4_ = (float)uVar58;
  uStack_1d8._4_4_ = (float)((ulong)uVar58 >> 0x20);
  uStack_1e0._0_4_ = (float)uVar91;
  uStack_1e0._4_4_ = (float)((ulong)uVar91 >> 0x20);
  fVar55 = 0.0;
  pfVar14 = (float *)&uStack_1e0;
  lVar46 = -1;
  lVar49 = 4;
  iStack_170 = 2;
  fStack_1a0 = 0.0;
  pfVar16 = (float *)&uStack_1d0;
  do {
    pfVar47 = (float *)((long)&uStack_1e0 + uVar33 * 0x14);
    pfVar34 = pfVar16;
    lVar54 = lVar46;
    if (uVar33 - 1 < 7) {
      fVar63 = ABS(*pfVar47);
      uVar64 = SUB41(fVar63,0);
      uVar65 = (undefined1)((uint)fVar63 >> 8);
      uVar66 = (undefined1)((uint)fVar63 >> 0x10);
      uVar67 = (undefined1)((uint)fVar63 >> 0x18);
      if (2 < uVar33) goto LAB_109533534;
      lVar25 = 1;
      do {
        fVar63 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) +
                 ABS(pfVar14[lVar25]);
        uVar64 = SUB41(fVar63,0);
        uVar65 = (undefined1)((uint)fVar63 >> 8);
        uVar66 = (undefined1)((uint)fVar63 >> 0x10);
        uVar67 = (undefined1)((uint)fVar63 >> 0x18);
        lVar25 = lVar25 + 1;
      } while (uVar33 + lVar25 != 4);
      fVar63 = ABS(*(float *)((long)&uStack_1e0 + uVar33 * 4));
      if (uVar33 != 1) goto LAB_109533544;
    }
    else {
      uVar58 = *(undefined8 *)((long)&uStack_1d8 + uVar33 * 0x14);
      uVar91 = *(undefined8 *)pfVar47;
      fVar63 = ABS((float)uVar91);
      fVar93 = ABS((float)((ulong)uVar91 >> 0x20));
      uVar64 = (undefined1)((uint)fVar93 >> 8);
      uVar65 = (undefined1)((uint)fVar93 >> 0x10);
      uVar66 = (undefined1)((uint)fVar93 >> 0x18);
      fVar95 = ABS((float)uVar58);
      uVar67 = (undefined1)((uint)fVar95 >> 8);
      uVar68 = (undefined1)((uint)fVar95 >> 0x10);
      uVar69 = (undefined1)((uint)fVar95 >> 0x18);
      fVar96 = ABS((float)((ulong)uVar58 >> 0x20));
      uVar70 = (undefined1)((uint)fVar96 >> 8);
      uVar71 = (undefined1)((uint)fVar96 >> 0x10);
      uVar72 = (undefined1)((uint)fVar96 >> 0x18);
      auVar7[4] = SUB41(fVar93,0);
      auVar7._0_4_ = fVar63;
      auVar7[5] = uVar64;
      auVar7[6] = uVar65;
      auVar7[7] = uVar66;
      auVar7[8] = SUB41(fVar95,0);
      auVar7[9] = uVar67;
      auVar7[10] = uVar68;
      auVar7[0xb] = uVar69;
      auVar7[0xc] = SUB41(fVar96,0);
      auVar7[0xd] = uVar70;
      auVar7[0xe] = uVar71;
      auVar7[0xf] = uVar72;
      auVar8[4] = SUB41(fVar93,0);
      auVar8._0_4_ = fVar63;
      auVar8[5] = uVar64;
      auVar8[6] = uVar65;
      auVar8[7] = uVar66;
      auVar8[8] = SUB41(fVar95,0);
      auVar8[9] = uVar67;
      auVar8[10] = uVar68;
      auVar8[0xb] = uVar69;
      auVar8[0xc] = SUB41(fVar96,0);
      auVar8[0xd] = uVar70;
      auVar8[0xe] = uVar71;
      auVar8[0xf] = uVar72;
      auVar59 = NEON_ext(auVar7,auVar8,8,1);
      fVar63 = fVar63 + auVar59._0_4_ + fVar93 + auVar59._4_4_;
      uVar64 = SUB41(fVar63,0);
      uVar65 = (undefined1)((uint)fVar63 >> 8);
      uVar66 = (undefined1)((uint)fVar63 >> 0x10);
      uVar67 = (undefined1)((uint)fVar63 >> 0x18);
      pfVar47 = pfVar14;
      lVar25 = lVar49;
      if ((uVar33 & 0x7ffffffffffffffb) == 0) {
        if (uVar33 == 0) {
          fVar63 = 0.0;
          goto LAB_109533558;
        }
      }
      else {
        do {
          fVar63 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) + ABS(*pfVar47);
          uVar64 = SUB41(fVar63,0);
          uVar65 = (undefined1)((uint)fVar63 >> 8);
          uVar66 = (undefined1)((uint)fVar63 >> 0x10);
          uVar67 = (undefined1)((uint)fVar63 >> 0x18);
          lVar25 = lVar25 + -1;
          pfVar47 = pfVar47 + 1;
        } while (lVar25 != 0);
      }
LAB_109533534:
      fVar63 = ABS(*(float *)((long)&uStack_1e0 + uVar33 * 4));
LAB_109533544:
      do {
        fVar63 = fVar63 + ABS(*pfVar34);
        lVar54 = lVar54 + -1;
        pfVar34 = pfVar34 + 4;
      } while (lVar54 != 0);
    }
LAB_109533558:
    fVar63 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) + fVar63;
    if (fVar55 < fVar63) {
      fStack_1a0 = fVar63;
      fVar55 = fVar63;
    }
    uVar33 = uVar33 + 1;
    lVar49 = lVar49 + -1;
    pfVar14 = pfVar14 + 5;
    lVar46 = lVar46 + 1;
    pfVar16 = pfVar16 + 1;
  } while (uVar33 != 4);
  lVar46 = 0;
  bVar26 = 0;
  puVar31 = &uStack_1e0;
  uStack_16c = 0;
  lVar49 = 1;
  iStack_170 = 2;
  lVar54 = -3;
  lVar25 = -1;
  uVar22 = 3;
  uVar33 = 3;
  puVar15 = &uStack_1e0;
  bVar12 = true;
  pfVar14 = (float *)((long)&uStack_1d0 + 4);
  pfVar16 = pfVar30;
  pfVar47 = (float *)((long)&uStack_1d0 + 4);
  do {
    uVar53 = uVar22 & 3;
    uVar52 = uVar33;
    if ((long)uVar53 <= (long)uVar33) {
      uVar52 = uVar53;
    }
    uVar40 = uVar33;
    if (uVar53 <= uVar33) {
      uVar40 = uVar53;
    }
    if (lVar46 == 3) {
      aiStack_190[3] = 3;
    }
    else {
      lVar48 = 0;
      lVar37 = 1;
      pfVar34 = pfVar14;
      fVar55 = ABS(*(float *)((long)&uStack_1e0 + lVar46 * 0x14));
      do {
        fVar63 = ABS(*pfVar34);
        lVar18 = lVar37;
        if (ABS(*pfVar34) <= fVar55) {
          fVar63 = fVar55;
          lVar18 = lVar48;
        }
        lVar48 = lVar18;
        lVar37 = lVar37 + 1;
        pfVar34 = pfVar34 + 5;
        fVar55 = fVar63;
      } while (lVar46 + lVar37 != 4);
      lVar37 = lVar48 + lVar46;
      aiStack_190[lVar46] = (int)lVar37;
      if (lVar48 != 0) {
        if (lVar46 != 0) {
          lVar18 = lVar46;
          puVar35 = puVar15;
          puVar32 = (undefined4 *)((long)&uStack_1e0 + (lVar46 + lVar48) * 4);
          do {
            uVar56 = *(undefined4 *)puVar35;
            *(undefined4 *)puVar35 = *puVar32;
            *puVar32 = uVar56;
            lVar18 = lVar18 + -1;
            puVar35 = puVar35 + 2;
            puVar32 = puVar32 + 4;
          } while (lVar18 != 0);
        }
        uVar43 = 3 - lVar37;
        lVar18 = lVar46 * 0x10 + -0x1e0;
        uVar53 = (ulong)-((int)lVar37 * 4 + 4U >> 2) & 3;
        if ((long)uVar43 <= (long)uVar53) {
          uVar53 = uVar43;
        }
        uVar5 = uVar43 - uVar53;
        uVar51 = uVar5 + 3;
        if ((long)uVar53 <= (long)uVar43) {
          uVar51 = uVar5;
        }
        if (0 < (long)uVar53) {
          uVar38 = (ulong)-((uint)(lVar49 + lVar48) & 0x3fffffff) & 3;
          uVar41 = uVar33 - lVar48;
          if ((long)uVar38 <= (long)(uVar33 - lVar48)) {
            uVar41 = uVar38;
          }
          pfVar34 = (float *)((long)puVar31 + (lVar49 + lVar48) * 4);
          pfVar42 = pfVar16 + lVar48 * 5;
          do {
            fVar55 = *pfVar34;
            *pfVar34 = *pfVar42;
            *pfVar42 = fVar55;
            uVar41 = uVar41 - 1;
            pfVar34 = pfVar34 + 1;
            pfVar42 = pfVar42 + 1;
          } while (uVar41 != 0);
        }
        lVar39 = (uVar51 & 0xfffffffffffffffc) + uVar53;
        if (3 < (long)uVar5) {
          uVar41 = (ulong)-((uint)(lVar49 + lVar48) & 0x3fffffff) & 3;
          uVar5 = uVar33 - lVar48;
          if ((long)uVar41 <= (long)(uVar33 - lVar48)) {
            uVar5 = uVar41;
          }
          lVar19 = uVar5 * 4 + (lVar49 + lVar48) * 4;
          lVar36 = lVar48 * 0x14 + uVar5 * 4;
          do {
            uVar58 = ((undefined8 *)((long)pfVar16 + lVar36))[1];
            uVar91 = *(undefined8 *)((long)pfVar16 + lVar36);
            uVar80 = *(undefined8 *)((long)puVar31 + lVar19);
            ((undefined8 *)((long)pfVar16 + lVar36))[1] =
                 ((undefined8 *)((long)puVar31 + lVar19))[1];
            *(undefined8 *)((long)pfVar16 + lVar36) = uVar80;
            ((undefined8 *)((long)puVar31 + lVar19))[1] = uVar58;
            *(undefined8 *)((long)puVar31 + lVar19) = uVar91;
            uVar53 = uVar53 + 4;
            lVar19 = lVar19 + 0x10;
            lVar36 = lVar36 + 0x10;
          } while ((long)uVar53 < lVar39);
        }
        if (lVar39 < (long)uVar43) {
          uVar43 = (ulong)-((uint)(lVar49 + lVar48) & 0x3fffffff) & 3;
          uVar53 = uVar33 - lVar48;
          if ((long)uVar43 <= (long)(uVar33 - lVar48)) {
            uVar53 = uVar43;
          }
          lVar36 = lVar54 + (uVar51 & 0xfffffffffffffffc) + lVar48 + uVar53;
          lVar19 = ((long)uVar51 >> 2) * 0x10 + uVar53 * 4;
          lVar39 = lVar19 + lVar48 * 0x14;
          lVar19 = lVar19 + (lVar49 + lVar48) * 4;
          do {
            uVar56 = *(undefined4 *)((long)puVar31 + lVar19);
            *(undefined4 *)((long)puVar31 + lVar19) = *(undefined4 *)((long)pfVar16 + lVar39);
            *(undefined4 *)((long)pfVar16 + lVar39) = uVar56;
            lVar39 = lVar39 + 4;
            lVar19 = lVar19 + 4;
            bVar11 = lVar36 != -1;
            lVar36 = lVar36 + 1;
          } while (bVar11);
        }
        lVar39 = lVar37 * 0x10 + -0x1e0;
        uVar56 = *(undefined4 *)((long)&uStack_1e0 + lVar46 * 4 + lVar18 + 0x1e0);
        *(undefined4 *)((long)&uStack_1e0 + lVar46 * 4 + lVar18 + 0x1e0) =
             *(undefined4 *)((long)&uStack_1e0 + lVar37 * 4 + lVar39 + 0x1e0);
        *(undefined4 *)((long)&uStack_1e0 + lVar37 * 4 + lVar39 + 0x1e0) = uVar56;
        if (lVar48 != 1) {
          lVar18 = 0;
          lVar48 = (lVar46 + lVar48) * 4;
          do {
            lVar48 = lVar48 + 0x10;
            fVar55 = pfVar16[lVar18];
            pfVar16[lVar18] = *(float *)((long)puVar31 + lVar48);
            *(float *)((long)puVar31 + lVar48) = fVar55;
            lVar18 = lVar18 + 1;
          } while (lVar49 + lVar18 < lVar37);
        }
      }
    }
    lVar18 = lVar46 + 1;
    uVar53 = 3 - lVar46;
    lVar48 = lVar18 * 4 + -0x1e0;
    lVar37 = (long)&uStack_1e0 + lVar46 * 0x10 + lVar48 + 0x1e0;
    if (lVar46 == 0) {
      bVar11 = true;
      fVar55 = (float)uStack_1e0;
      if ((0.0 <= (float)uStack_1e0) && ((float)uStack_1e0 == 0.0)) {
        lVar46 = 0;
        iStack_170 = 2;
        lVar49 = 2;
        pfVar14 = pfVar30;
        goto LAB_109533b7c;
      }
    }
    else {
      lVar39 = 0;
      lVar19 = uVar40 << 2;
      lVar36 = lVar46;
      pfVar34 = (float *)&uStack_1e0;
      do {
        *(float *)((long)afStack_180 + lVar39) = *pfVar34 * *(float *)((long)puVar15 + lVar39 * 4);
        lVar39 = lVar39 + 4;
        lVar36 = lVar36 + -1;
        pfVar34 = pfVar34 + 5;
      } while (lVar36 != 0);
      fVar55 = *(float *)((long)&uStack_1e0 + lVar46 * 4) * afStack_180[0];
      if (lVar46 == 1) {
        pfVar30[4] = pfVar30[4] - fVar55;
LAB_109533908:
        uVar43 = (ulong)-((uint)lVar37 >> 2) & 3;
        uVar40 = uVar43;
        if (uVar53 <= uVar43) {
          uVar40 = uVar53;
        }
        if (uVar40 != 0) {
          uVar51 = 0;
          pfVar34 = pfVar47;
          do {
            fVar55 = *(float *)((long)&uStack_1e0 + uVar51 * 4 + lVar48 + 0x1e0) * afStack_180[0];
            lVar39 = lVar25;
            pfVar42 = pfVar34;
            pfVar50 = pfVar29;
            if (lVar46 != 1) {
              do {
                fVar55 = fVar55 + *pfVar42 * *pfVar50;
                lVar39 = lVar39 + -1;
                pfVar42 = pfVar42 + 4;
                pfVar50 = pfVar50 + 1;
              } while (lVar39 != 0);
            }
            *(float *)(lVar37 + uVar51 * 4) = *(float *)(lVar37 + uVar51 * 4) - fVar55;
            uVar51 = uVar51 + 1;
            pfVar34 = pfVar34 + 1;
          } while (uVar51 != uVar40);
        }
        if (uVar43 < uVar53) {
          do {
            fVar55 = *(float *)((long)&uStack_1e0 + uVar40 * 4 + lVar48 + 0x1e0) * afStack_180[0];
            lVar36 = lVar19;
            pfVar34 = pfVar29;
            lVar39 = lVar25;
            if (lVar46 != 1) {
              do {
                fVar55 = fVar55 + *(float *)((long)pfVar47 + lVar36) * *pfVar34;
                lVar39 = lVar39 + -1;
                lVar36 = lVar36 + 0x10;
                pfVar34 = pfVar34 + 1;
              } while (lVar39 != 0);
            }
            *(float *)(lVar37 + uVar40 * 4) = *(float *)(lVar37 + uVar40 * 4) - fVar55;
            uVar40 = uVar40 + 1;
            lVar19 = lVar19 + 4;
          } while (uVar40 != uVar53);
        }
      }
      else {
        lVar39 = 0x10;
        pfVar34 = pfVar29;
        lVar36 = lVar25;
        do {
          fVar55 = fVar55 + *(float *)((long)puVar15 + lVar39) * *pfVar34;
          lVar39 = lVar39 + 0x10;
          lVar36 = lVar36 + -1;
          pfVar34 = pfVar34 + 1;
        } while (lVar36 != 0);
        lVar39 = lVar46 * 0x10 + -0x1e0;
        *(float *)((long)&uStack_1e0 + lVar46 * 4 + lVar39 + 0x1e0) =
             *(float *)((long)&uStack_1e0 + lVar46 * 4 + lVar39 + 0x1e0) - fVar55;
        if (lVar46 != 3) goto LAB_109533908;
      }
      fVar55 = *(float *)((long)&uStack_1e0 + lVar46 * 0x14);
      bVar11 = 0.0 < fVar55 || fVar55 < 0.0;
    }
    if ((lVar46 == 3) || (!bVar11)) {
      if ((bool)(lVar46 != 3 & bVar12)) {
        lVar37 = 0;
        do {
          pfVar34 = pfVar16 + lVar37;
          lVar48 = lVar46 + lVar37;
          lVar37 = lVar37 + 1;
          bVar20 = *pfVar34 == 0.0;
        } while (*pfVar34 == 0.0 && lVar48 != 2);
      }
      else {
        bVar20 = (bool)(lVar46 == 3 & bVar12);
      }
    }
    else {
      uVar21 = -((uint)lVar37 >> 2);
      uVar43 = (ulong)uVar21 & 3;
      uVar40 = uVar43;
      if ((long)uVar53 <= (long)uVar43) {
        uVar40 = uVar53;
      }
      if ((uVar21 & 3) != 0) {
        uVar51 = 0;
        do {
          pfVar16[uVar51] = pfVar16[uVar51] / fVar55;
          uVar51 = uVar51 + 1;
        } while (uVar52 != uVar51);
      }
      bVar20 = bVar12;
      if (uVar43 < uVar53) {
        do {
          pfVar16[uVar40] = pfVar16[uVar40] / fVar55;
          uVar40 = uVar40 + 1;
        } while (uVar33 != uVar40);
      }
    }
    bVar12 = (bool)((bVar26 & bVar11 ^ 1) & bVar20);
    if (!bVar11) {
      bVar12 = bVar20;
    }
    if (iStack_170 == 2) {
      if (fVar55 <= 0.0) {
        if (0.0 <= fVar55) goto LAB_109533b38;
        iStack_170 = 1;
      }
      else {
        iStack_170 = 0;
      }
LAB_109533b34:
    }
    else if (iStack_170 == 1) {
      if (0.0 < fVar55) goto LAB_109533b14;
    }
    else if ((iStack_170 == 0) && (fVar55 < 0.0)) {
LAB_109533b14:
      iStack_170 = 3;
      goto LAB_109533b34;
    }
LAB_109533b38:
    bVar26 = bVar11 ^ 1U | bVar26;
    lVar46 = lVar46 + 1;
    pfVar14 = pfVar14 + 5;
    puVar15 = (undefined8 *)((long)puVar15 + 4);
    uVar33 = uVar33 - 1;
    lVar49 = lVar49 + 1;
    pfVar16 = pfVar16 + 5;
    puVar31 = puVar31 + 2;
    lVar54 = lVar54 + 1;
    lVar25 = lVar25 + 1;
    pfVar47 = pfVar47 + 1;
    uVar22 = (ulong)((int)uVar22 + 3);
  } while (lVar18 != 4);
  goto LAB_109533bd8;
LAB_109533b7c:
  do {
    aiStack_190[lVar46] = (int)lVar46;
    if (bVar12) {
      pfVar16 = pfVar14;
      lVar54 = lVar49;
      if (lVar46 == 3) {
        bVar12 = true;
        break;
      }
      do {
        bVar11 = lVar54 != 0;
        bVar12 = *pfVar16 == 0.0;
        if (!bVar12) break;
        pfVar16 = pfVar16 + 1;
        lVar54 = lVar54 + -1;
      } while (bVar11);
    }
    else {
      bVar12 = false;
    }
    lVar46 = lVar46 + 1;
    lVar49 = lVar49 + -1;
    pfVar14 = pfVar14 + 5;
  } while (lVar46 != 4);
LAB_109533bd8:
  lVar46 = 0;
  uStack_168 = (uint)(bVar12 ^ 1);
  uStack_16c = 1;
  do {
    lVar49 = (long)aiStack_190[lVar46];
    if (lVar46 != lVar49) {
      fVar55 = afStack_250[lVar46];
      afStack_250[lVar46] = afStack_250[lVar49];
      afStack_250[lVar49] = fVar55;
    }
    lVar46 = lVar46 + 1;
  } while (lVar46 != 4);
  lVar46 = 0;
  afStack_250[1] = afStack_250[1] - uStack_1e0._4_4_ * afStack_250[0];
  afStack_250[2] =
       afStack_250[2] - (afStack_250[0] * (float)uStack_1d8 + afStack_250[1] * (float)uStack_1c8);
  iVar57 = -(uint)(1.1754944e-38 < ABS((float)uStack_1e0));
  iVar60 = -(uint)(1.1754944e-38 < ABS(uStack_1d0._4_4_));
  iVar61 = -(uint)(1.1754944e-38 < ABS((float)uStack_1b8));
  iVar62 = -(uint)(1.1754944e-38 < ABS(uStack_1a8._4_4_));
  fVar55 = afStack_250[0] / (float)uStack_1e0;
  fVar63 = afStack_250[1] / uStack_1d0._4_4_;
  fVar93 = afStack_250[2] / (float)uStack_1b8;
  fVar95 = (afStack_250[3] -
           (afStack_250[0] * uStack_1d8._4_4_ +
           afStack_250[1] * uStack_1c8._4_4_ + afStack_250[2] * uStack_1b8._4_4_)) /
           uStack_1a8._4_4_;
  afStack_250[2] =
       (float)CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)fVar93 >> 0x18),
                       CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)fVar93 >> 0x10),
                                CONCAT11((byte)((uint)iVar61 >> 8) & (byte)((uint)fVar93 >> 8),
                                         (byte)iVar61 & SUB41(fVar93,0))));
  afStack_250[3] =
       (float)(CONCAT17((byte)((uint)iVar62 >> 0x18) & (byte)((uint)fVar95 >> 0x18),
                        CONCAT16((byte)((uint)iVar62 >> 0x10) & (byte)((uint)fVar95 >> 0x10),
                                 CONCAT15((byte)((uint)iVar62 >> 8) & (byte)((uint)fVar95 >> 8),
                                          CONCAT14((byte)iVar62 & SUB41(fVar95,0),afStack_250[2]))))
              >> 0x20);
  fVar55 = (float)CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)fVar55 >> 0x18),
                           CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)fVar55 >> 0x10),
                                    CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)fVar55 >> 8),
                                             (byte)iVar57 & SUB41(fVar55,0))));
  afStack_250[1] =
       (float)(CONCAT17((byte)((uint)iVar60 >> 0x18) & (byte)((uint)fVar63 >> 0x18),
                        CONCAT16((byte)((uint)iVar60 >> 0x10) & (byte)((uint)fVar63 >> 0x10),
                                 CONCAT15((byte)((uint)iVar60 >> 8) & (byte)((uint)fVar63 >> 8),
                                          CONCAT14((byte)iVar60 & SUB41(fVar63,0),fVar55)))) >> 0x20
              );
  afStack_250[2] = afStack_250[2] - uStack_1b8._4_4_ * afStack_250[3];
  afStack_250[1] =
       afStack_250[1] - ((float)uStack_1c8 * afStack_250[2] + uStack_1c8._4_4_ * afStack_250[3]);
  afStack_250[0] =
       fVar55 - (uStack_1d8._4_4_ * afStack_250[3] +
                uStack_1e0._4_4_ * afStack_250[1] + (float)uStack_1d8 * afStack_250[2]);
  do {
    lVar49 = (long)aiStack_190[lVar46 + 3];
    if (lVar46 + 3 != lVar49) {
      fVar55 = afStack_250[lVar46 + 3];
      afStack_250[lVar46 + 3] = afStack_250[lVar49];
      afStack_250[lVar49] = fVar55;
    }
    fVar55 = fStack_c8;
    uVar58 = uStack_d0;
    fVar96 = fStack_d4;
    fVar95 = fStack_d8;
    fVar93 = fStack_dc;
    fVar63 = fStack_e0;
    uVar91 = uStack_e8;
    lVar46 = lVar46 + -1;
  } while (lVar46 != -4);
  uStack_158 = CONCAT44((float)((ulong)uStack_158 >> 0x20) - afStack_250[3],
                        (float)uStack_158 - afStack_250[2]);
  uStack_160 = CONCAT44((float)((ulong)uStack_160 >> 0x20) - afStack_250[1],
                        (float)uStack_160 - afStack_250[0]);
  FUN_10953131c(&uStack_160);
  uVar80 = uStack_160;
  fVar55 = fVar63 * 0.0 + fVar96 * 0.0 + fVar55;
  fVar96 = fStack_e0 * 0.0 + fStack_d4 * 0.0 + fStack_c8;
  fVar63 = ((float)uStack_e8 * 0.0 + fStack_dc * 0.0 + (float)uStack_d0) / fVar96 -
           ((float)uVar91 * 0.0 + fVar93 * 0.0 + (float)uVar58) / fVar55;
  fVar55 = ((float)((ulong)uStack_e8 >> 0x20) * 0.0 + fStack_d8 * 0.0 +
           (float)((ulong)uStack_d0 >> 0x20)) / fVar96 -
           ((float)((ulong)uVar91 >> 0x20) * 0.0 + fVar95 * 0.0 + (float)((ulong)uVar58 >> 0x20)) /
           fVar55;
  iVar27 = iVar27 + 1;
  if (fVar63 * fVar63 + fVar55 * fVar55 <= 0.0625 || iVar27 == 10) goto code_r0x000109533e00;
  goto LAB_10953307c;
code_r0x000109533e00:
  fVar55 = (float)uStack_158;
  fVar63 = uStack_158._4_4_;
  if (pfStack_268 != (float *)0x0) {
    pfStack_260 = pfStack_268;
    __ZdlPv();
  }
  _free(lStack_240);
  _free(pfStack_228);
  _free(puStack_210);
  _free(puStack_1f8);
  uStack_1e0 = (double)(float)uVar80;
  uStack_1d8 = (double)(float)((ulong)uVar80 >> 0x20);
  uStack_1d0 = (double)fVar55;
  puStack_1f8 = (undefined4 *)0x0;
  uStack_1f0 = 0;
  lStack_1e8 = 0;
  FUN_10937f620(&uStack_160,&uStack_1e0,&puStack_1f8);
  _expf();
  param_1[1] = uStack_158;
  *param_1 = uStack_160;
  param_1[3] = uStack_148;
  param_1[2] = uStack_150;
  param_1[5] = uStack_138;
  param_1[4] = uStack_140;
  param_1[6] = CONCAT44(uStack_12c,fStack_130);
  param_1[0xd] = CONCAT44(fStack_f4,uStack_f8);
  param_1[0xc] = CONCAT44(fStack_fc,uStack_100);
  param_1[0xf] = uStack_e8;
  param_1[0xe] = CONCAT44(uStack_ec,uStack_f0);
  param_1[0x10] = CONCAT44(fStack_dc,fStack_e0);
  param_1[9] = uStack_118;
  param_1[8] = CONCAT44(uStack_11c,fStack_120);
  param_1[0xb] = uStack_108;
  param_1[10] = CONCAT44(fStack_10c,uStack_110);
  param_1[0x12] = (double)fVar63;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_109533efc:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109533f88:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109533f8c);
  (*pcVar10)();
}



/* Entry: 109534000; end: 109534773;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_109534000(double *param_1,double param_2,byte *param_3,undefined8 param_4,double *param_5,
                  int param_6,double *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  float *pfVar7;
  double *pdVar8;
  undefined1 *puVar9;
  float *pfVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  float *pfVar13;
  ulong uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  float *pfVar19;
  bool bVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  long lVar27;
  ulong uVar28;
  double *pdVar29;
  float *pfVar30;
  int iVar31;
  double *pdVar32;
  double *pdVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  double dVar48;
  undefined1 auVar49 [16];
  float fVar50;
  double adStack_4e0 [5];
  uint auStack_4b8 [2];
  double dStack_4b0;
  int iStack_4a0;
  double adStack_490 [2];
  undefined1 auStack_480 [36];
  float afStack_45c [55];
  undefined1 auStack_380 [36];
  float afStack_35c [55];
  float afStack_280 [15];
  undefined8 uStack_244;
  undefined8 uStack_224;
  undefined8 uStack_204;
  undefined8 uStack_1e4;
  undefined8 uStack_1c4;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  float afStack_180 [15];
  undefined8 uStack_144;
  undefined8 uStack_124;
  undefined8 uStack_104;
  undefined8 uStack_e4;
  undefined8 uStack_c4;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  
  lVar6 = 0;
  dVar34 = *param_5;
  param_1[1] = param_5[1];
  *param_1 = dVar34;
  dVar39 = param_1[1];
  dVar34 = *param_1;
  uStack_144 = 0;
  uStack_124 = 0;
  uStack_104 = 0;
  uStack_e4 = 0;
  uStack_c4 = 0;
  afStack_180[2] = 0.0;
  afStack_180[3] = 0.0;
  afStack_180[0] = 0.0;
  afStack_180[1] = 0.0;
  afStack_180[6] = 0.0;
  afStack_180[7] = 0.0;
  afStack_180[4] = 0.0;
  afStack_180[5] = 0.0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  afStack_180[8] = 0.0;
  uStack_84 = 0;
  uStack_244 = 0;
  uStack_224 = 0;
  uStack_204 = 0;
  uStack_1e4 = 0;
  uStack_1c4 = 0;
  afStack_280[2] = 0.0;
  afStack_280[3] = 0.0;
  afStack_280[0] = 0.0;
  afStack_280[1] = 0.0;
  afStack_280[6] = 0.0;
  afStack_280[7] = 0.0;
  afStack_280[4] = 0.0;
  afStack_280[5] = 0.0;
  afStack_280[8] = 0.0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_194 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  puVar9 = auStack_380;
  dVar37 = *(double *)(param_3 + 0x40);
  pbVar12 = param_3;
  do {
    lVar18 = 0;
    do {
      dVar41 = (double)NEON_ucvtf((ulong)pbVar12[lVar18]);
      *(float *)(puVar9 + lVar18 * 4) = (float)(dVar41 - dVar37);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 8);
    lVar6 = lVar6 + 1;
    puVar9 = puVar9 + 0x20;
    pbVar12 = pbVar12 + 8;
  } while (lVar6 != 8);
  lVar6 = 1;
  lVar18 = 0x24;
  do {
    param_3 = param_3 + 8;
    lVar6 = lVar6 + 1;
    lVar21 = 6;
    pbVar12 = param_3;
    lVar27 = lVar18;
    do {
      *(float *)((long)afStack_180 + lVar27) = (float)(int)((uint)pbVar12[2] - (uint)*pbVar12);
      *(float *)((long)afStack_280 + lVar27) = (float)(int)((uint)pbVar12[9] - (uint)pbVar12[-7]);
      lVar27 = lVar27 + 4;
      pbVar12 = pbVar12 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = lVar18 + 0x20;
  } while (lVar6 != 7);
  dVar37 = dVar34;
  dVar41 = dVar39;
  if (0 < param_6) {
    iVar31 = 0;
    pdVar32 = (double *)((ulong)adStack_4e0 | 8);
    pdVar33 = (double *)((ulong)adStack_490 | 8);
LAB_1095341cc:
    dVar35 = dVar37;
    FUN_109534774(dVar37,dVar41,auStack_480,param_4);
    adStack_4e0[0] = 0.0;
    dVar38 = 0.0;
    adStack_4e0[2] = 0.0;
    adStack_4e0[3] = 0.0;
    lVar6 = 1;
    adStack_490[0] = 0.0;
    adStack_490[1] = 0.0;
    dVar42 = 0.0;
    dVar43 = 0.0;
    pfVar7 = afStack_280 + 9;
    pfVar10 = afStack_35c;
    pfVar13 = afStack_180 + 9;
    pfVar19 = afStack_45c;
    do {
      lVar18 = 6;
      pfVar22 = pfVar7;
      pfVar25 = pfVar10;
      pfVar26 = pfVar13;
      pfVar30 = pfVar19;
      do {
        pfVar3 = pfVar30 + -1;
        fVar50 = *pfVar30;
        pfVar1 = pfVar30 + 1;
        pfVar2 = pfVar30 + -8;
        pfVar30 = pfVar30 + 8;
        if ((double)*pfVar3 + (double)*pfVar1 + (double)*pfVar2 + (double)*pfVar30 + (double)fVar50
            <= 10000.0) {
          dVar48 = ((double)fVar50 - (double)SUB84(dVar35,0)) - (double)*pfVar25;
          auVar49 = NEON_fmov(0x3fd0000000000000,8);
          dVar45 = (((double)*pfVar1 - (double)*pfVar3) + (double)*pfVar26) * auVar49._0_8_;
          dVar46 = (((double)*pfVar30 - (double)*pfVar2) + (double)*pfVar22) * auVar49._8_8_;
          dVar38 = dVar38 + dVar45 * dVar45;
          adStack_4e0[2] = adStack_4e0[2] + dVar45 * dVar46;
          adStack_4e0[3] = adStack_4e0[3] + dVar46 * dVar46;
          dVar42 = dVar42 + dVar45 * dVar48;
          dVar43 = dVar43 + dVar46 * dVar48;
          adStack_490[0] = dVar42;
          adStack_490[1] = dVar43;
          adStack_4e0[0] = dVar38;
        }
        pfVar26 = pfVar26 + 8;
        pfVar25 = pfVar25 + 8;
        pfVar22 = pfVar22 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar6 = lVar6 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar10 = pfVar10 + 1;
      pfVar7 = pfVar7 + 1;
    } while (lVar6 != 7);
    lVar6 = 0;
    dVar35 = 0.0;
    adStack_4e0[4] = 0.0;
    pdVar8 = adStack_4e0;
    bVar5 = true;
    do {
      bVar16 = bVar5;
      if (bVar16) {
        pdVar8 = pdVar8 + lVar6 * 2;
        dVar38 = ABS(*pdVar8);
        lVar6 = lVar6 + -1;
        do {
          pdVar8 = pdVar8 + 2;
          dVar38 = dVar38 + ABS(*pdVar8);
          bVar5 = lVar6 != -1;
          lVar6 = lVar6 + 1;
        } while (bVar5);
        dVar42 = 0.0;
      }
      else {
        dVar42 = ABS(adStack_4e0[lVar6 * 2]);
        dVar38 = ABS(pdVar8[lVar6 * 2]);
      }
      dVar42 = dVar42 + dVar38;
      if (dVar35 < dVar42) {
        adStack_4e0[4] = dVar42;
        dVar35 = dVar42;
      }
      lVar6 = 1;
      pdVar8 = pdVar32;
      bVar5 = false;
    } while (bVar16);
    bVar4 = 0;
    bVar5 = true;
    iVar17 = 2;
    uVar14 = (ulong)auStack_4b8[0];
    lVar6 = 0x18;
    iVar24 = 2;
    lVar18 = 0;
    do {
      dVar35 = adStack_4e0[0];
      if (lVar18 == 0) {
        uVar14 = 0;
        uVar28 = 1;
        lVar27 = lVar6;
        dVar38 = ABS(adStack_4e0[0]);
        do {
          dVar42 = ABS(*(double *)((long)adStack_4e0 + lVar27));
          uVar23 = uVar28;
          if (dVar42 <= dVar38) {
            dVar42 = dVar38;
            uVar23 = uVar14;
          }
          uVar14 = uVar23;
          uVar28 = uVar28 + 1;
          lVar27 = lVar27 + 0x18;
          dVar38 = dVar42;
        } while (uVar28 != 2);
        if (uVar14 != 0) {
          adStack_4e0[0] = adStack_4e0[uVar14 * 3];
          adStack_4e0[uVar14 * 3] = dVar35;
          lVar27 = uVar14 - 1;
          if (lVar27 != 0) {
            pdVar29 = pdVar32 + uVar14 * 2;
            pdVar8 = adStack_4e0;
            do {
              pdVar8 = pdVar8 + 2;
              dVar35 = *pdVar8;
              *pdVar8 = *pdVar29;
              *pdVar29 = dVar35;
              lVar27 = lVar27 + -1;
              pdVar29 = pdVar29 + 1;
            } while (lVar27 != 0);
          }
        }
        if ((0.0 <= adStack_4e0[0]) && (adStack_4e0[0] == 0.0)) {
          bVar15 = false;
          uVar28 = 0;
          auStack_4b8[0] = (uint)uVar14;
          pdVar8 = adStack_4e0;
          bVar16 = true;
          goto LAB_109534518;
        }
        adStack_4e0[2] = adStack_4e0[2] / adStack_4e0[0];
        bVar5 = (bool)((bVar4 ^ 1) & bVar5);
        dVar35 = adStack_4e0[0];
      }
      else {
        auStack_4b8[lVar18] = (uint)lVar18;
        pdVar8 = adStack_4e0 + lVar18 * 2;
        dStack_4b0 = adStack_4e0[0] * *pdVar8;
        dVar35 = pdVar8[lVar18] - adStack_4e0[0] * *pdVar8 * *pdVar8;
        pdVar8[lVar18] = dVar35;
        bVar16 = (bool)((bVar4 & (0.0 < dVar35 || dVar35 < 0.0) ^ 1) & bVar5);
        bVar15 = bVar16;
        if (dVar35 >= 0.0) {
          bVar15 = bVar5;
        }
        bVar5 = bVar16;
        if (dVar35 <= 0.0) {
          bVar5 = bVar15;
        }
        bVar4 = dVar35 == 0.0 | bVar4;
      }
      if (iVar24 == 2) {
        if (dVar35 <= 0.0) {
          if (0.0 <= dVar35) {
            iVar24 = 2;
          }
          else {
            iVar24 = 1;
            iVar17 = iVar24;
          }
        }
        else {
          iVar24 = 0;
          iVar17 = iVar24;
        }
      }
      else if (iVar24 == 1) {
        if (0.0 < dVar35) {
LAB_1095344d0:
          iVar24 = 3;
          iVar17 = iVar24;
        }
        else {
          iVar24 = 1;
        }
      }
      else if (iVar24 == 0) {
        if (dVar35 < 0.0) goto LAB_1095344d0;
        iVar24 = 0;
      }
      lVar6 = lVar6 + 0x18;
      bVar16 = lVar18 == 0;
      lVar18 = lVar18 + 1;
    } while (bVar16);
    auStack_4b8[0] = (uint)uVar14;
    iStack_4a0 = iVar17;
    goto LAB_109534578;
  }
LAB_1095346c4:
  if (param_7 != (double *)0x0) {
    puVar9 = auStack_480;
    FUN_109534774(dVar37,dVar41,auStack_480,param_4);
    lVar6 = 0;
    fVar50 = 0.0;
    puVar11 = auStack_380;
    fVar40 = 0.0;
    fVar36 = 0.0;
    do {
      lVar18 = 0;
      do {
        fVar44 = *(float *)(puVar11 + lVar18);
        fVar47 = *(float *)(puVar9 + lVar18) - SUB84(dVar37,0);
        fVar50 = fVar50 + fVar44 * fVar44;
        fVar40 = fVar40 + fVar47 * fVar47;
        fVar36 = fVar36 + fVar47 * fVar44;
        lVar18 = lVar18 + 0x20;
      } while (lVar18 != 0x100);
      lVar6 = lVar6 + 1;
      puVar9 = puVar9 + 4;
      puVar11 = puVar11 + 4;
    } while (lVar6 != 8);
    fVar44 = 1.0;
    if (fVar50 != 0.0) {
      fVar44 = fVar50;
    }
    fVar50 = 1.0;
    if (fVar40 != 0.0) {
      fVar50 = fVar40;
    }
    *param_7 = (double)(fVar36 / SQRT(fVar44 * fVar50));
  }
  return;
LAB_109534518:
  do {
    bVar20 = bVar16;
    auStack_4b8[uVar28] = (uint)uVar28;
    if (bVar5) {
      if (bVar15) break;
      pdVar8 = pdVar8 + uVar28 * 2;
      uVar14 = 1;
      do {
        pdVar8 = pdVar8 + 2;
        bVar5 = *pdVar8 == 0.0;
        uVar23 = uVar14 ^ uVar28;
        uVar14 = uVar14 + 1;
      } while (bVar5 && uVar23 != 1);
    }
    else {
      bVar5 = false;
    }
    bVar15 = true;
    uVar28 = 1;
    pdVar8 = pdVar32;
    bVar16 = false;
  } while (bVar20);
LAB_109534578:
  lVar6 = 0;
  pdVar8 = adStack_490;
  bVar5 = true;
  do {
    bVar16 = bVar5;
    lVar18 = (long)(int)auStack_4b8[lVar6];
    if (lVar6 != lVar18) {
      dVar35 = *pdVar8;
      *pdVar8 = adStack_490[lVar18];
      adStack_490[lVar18] = dVar35;
    }
    lVar6 = 1;
    pdVar8 = pdVar33;
    bVar5 = false;
  } while (bVar16);
  lVar6 = 0;
  adStack_490[1] = adStack_490[1] - adStack_4e0[2] * adStack_490[0];
  pdVar8 = adStack_490;
  bVar5 = true;
  do {
    bVar16 = bVar5;
    dVar38 = adStack_4e0[lVar6 * 3];
    dVar35 = 0.0;
    if (2.2250738585072014e-308 < ABS(dVar38)) {
      dVar35 = *pdVar8 / dVar38;
    }
    *pdVar8 = dVar35;
    lVar6 = 1;
    pdVar8 = pdVar33;
    bVar5 = false;
  } while (bVar16);
  lVar6 = 0;
  adStack_490[0] = adStack_490[0] - adStack_4e0[2] * adStack_490[1];
  do {
    lVar18 = (long)(int)auStack_4b8[lVar6 + 1];
    if (lVar6 + 1 != lVar18) {
      dVar35 = *(double *)(auStack_480 + lVar6 * 8 + -8);
      *(double *)(auStack_480 + lVar6 * 8 + -8) = adStack_490[lVar18];
      adStack_490[lVar18] = dVar35;
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != -2);
  dVar37 = dVar37 - adStack_490[0];
  dVar41 = dVar41 - adStack_490[1];
  dVar35 = dVar37 - dVar34;
  dVar38 = dVar41 - dVar39;
  dVar42 = dVar35 * dVar35 + dVar38 * dVar38;
  if (param_2 * param_2 < dVar42) {
    if (0.0 < dVar42) {
      dVar35 = dVar35 / SQRT(dVar42);
      dVar38 = dVar38 / SQRT(dVar42);
    }
    dVar37 = dVar34 + dVar35 * param_2;
    dVar41 = dVar39 + dVar38 * param_2;
  }
  iVar31 = iVar31 + 1;
  if (iVar31 == param_6) goto code_r0x0001095346bc;
  goto LAB_1095341cc;
code_r0x0001095346bc:
  param_1[1] = dVar41;
  *param_1 = dVar37;
  goto LAB_1095346c4;
}



/* Entry: 109534774; end: 109534a2b;  */

void FUN_109534774(double param_1,double param_2,long *param_3,byte *param_4,byte *param_5,
                  float *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  ulong uVar46;
  float fVar47;
  float fVar49;
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fStack_a4;
  undefined1 auVar54 [16];
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_4 + 0x10);
  iVar2 = *(int *)(param_4 + 0x14);
  iVar3 = *(int *)(param_4 + 0x18);
  lVar14 = (long)iVar3;
  lVar15 = *(long *)(param_4 + 8);
  param_1 = param_1 + -4.0;
  param_2 = param_2 + -4.0;
  fVar47 = (float)param_1;
  fVar45 = (float)param_2;
  uVar46 = CONCAT44(0,fVar45);
  fVar25 = fVar47 - (float)(int)param_1;
  fVar26 = 1.0 - fVar25;
  fVar27 = fVar45 - (float)(int)param_2;
  fVar28 = 1.0 - fVar27;
  if (((iVar1 + -2 <= (int)param_1 + 8) ||
      (iVar21 = (int)param_2, fVar47 < 0.0 || iVar2 + -1 <= iVar21 + 8)) || (fVar45 < 0.0)) {
    uVar16 = 0;
    do {
      lVar14 = 0;
      iVar21 = (int)(fVar47 + (float)(uVar16 & 0xffffffff));
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar46;
      do {
        if (iVar21 < 0) {
LAB_1095349d8:
          *(undefined4 *)((long)param_3 + lVar14) = 0x60ad78ec;
        }
        else {
          uVar11 = (uint)auVar48._0_4_;
          param_4 = (byte *)(ulong)uVar11;
          if ((((int)uVar11 < 0) || (iVar1 + -1 <= iVar21)) || (iVar2 + -1 <= (int)uVar11))
          goto LAB_1095349d8;
          param_5 = (byte *)(lVar15 + (int)(iVar3 * uVar11 + iVar21));
          fVar45 = (float)NEON_ucvtf((uint)*param_5);
          fVar49 = (float)NEON_ucvtf((uint)param_5[1]);
          param_4 = (byte *)(lVar15 + (int)(iVar3 * uVar11 + iVar3 + iVar21));
          fVar57 = (float)NEON_ucvtf((uint)*param_4);
          fVar52 = (float)NEON_ucvtf((uint)param_4[1]);
          *(float *)((long)param_3 + lVar14) =
               fVar27 * (fVar25 * fVar52 + fVar26 * fVar57) +
               fVar28 * (fVar25 * fVar49 + fVar26 * fVar45);
        }
        auVar48 = ZEXT416((uint)(auVar48._0_4_ + 1.0));
        lVar14 = lVar14 + 0x20;
      } while (lVar14 != 0x100);
      uVar16 = uVar16 + 1;
      param_3 = (long *)((long)param_3 + 4);
    } while (uVar16 != 8);
  }
  else {
    lVar17 = (long)(int)param_1;
    lVar19 = lVar15 + (long)iVar3 * (long)iVar21;
    pfVar9 = (float *)(param_3 + 2);
    lVar15 = lVar15 + lVar14 + (long)iVar3 * (long)iVar21;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    lVar20 = 8;
    do {
      if (lVar20 == 8) {
        uVar46 = *(ulong *)(lVar19 + lVar17);
      }
      bVar22 = (byte)uVar46;
      uVar23 = (undefined1)(uVar46 >> 8);
      uVar16 = uVar46 >> 0x10;
      uVar18 = uVar46 >> 0x18;
      uVar10 = uVar46 >> 0x20;
      uVar6 = uVar46 >> 0x28;
      uVar7 = uVar46 >> 0x30;
      uVar8 = uVar46 >> 0x38;
      uVar46 = *(ulong *)(lVar15 + lVar17);
      uVar24 = (undefined1)(uVar46 >> 8);
      auVar53._6_2_ = 0;
      auVar53._0_6_ = (uint6)CONCAT14(uVar23,(uint)CONCAT12(uVar23,(ushort)bVar22)) & 0xffff0000ffff
      ;
      auVar53[8] = (char)uVar16;
      auVar53._9_3_ = 0;
      auVar53[0xc] = (char)uVar18;
      auVar53._13_3_ = 0;
      auVar53 = NEON_ucvtf(auVar53,4);
      auVar51._1_3_ = 0;
      auVar51[0] = (byte)uVar10;
      auVar51[4] = (char)uVar6;
      auVar51._5_3_ = 0;
      auVar51[8] = (char)uVar7;
      auVar51._9_3_ = 0;
      auVar51[0xc] = (char)uVar8;
      auVar51._13_3_ = 0;
      auVar48 = NEON_ucvtf(auVar51,4);
      auVar56._6_2_ = 0;
      auVar56._0_6_ =
           (uint6)CONCAT14(uVar24,(uint)CONCAT12(uVar24,(ushort)(byte)uVar46)) & 0xffff0000ffff;
      auVar56[8] = (char)(uVar46 >> 0x10);
      auVar56._9_3_ = 0;
      auVar56[0xc] = (char)(uVar46 >> 0x18);
      auVar56._13_3_ = 0;
      auVar56 = NEON_ucvtf(auVar56,4);
      auVar50._1_3_ = 0;
      auVar50[0] = (byte)(uVar46 >> 0x20);
      auVar50[4] = (char)(uVar46 >> 0x28);
      auVar50._5_3_ = 0;
      auVar50[8] = (char)(uVar46 >> 0x30);
      auVar50._9_3_ = 0;
      auVar50[0xc] = (char)(uVar46 >> 0x38);
      auVar50._13_3_ = 0;
      auVar51 = NEON_ucvtf(auVar50,4);
      fVar57 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + lVar17 + 8));
      fVar58 = (float)NEON_ucvtf((uint)(byte)((ulong *)(lVar15 + lVar17))[1]);
      fVar52 = (auVar53._0_4_ * fVar26 + auVar53._4_4_ * fVar25) * fVar28 +
               (auVar56._0_4_ * fVar26 + auVar56._4_4_ * fVar25) * fVar27;
      fVar55 = (auVar53._4_4_ * fVar26 + auVar53._8_4_ * fVar25) * fVar28 +
               (auVar56._4_4_ * fVar26 + auVar56._8_4_ * fVar25) * fVar27;
      auVar54._0_8_ = CONCAT44(fVar55,fVar52);
      auVar54._8_4_ =
           (auVar53._8_4_ * fVar26 + auVar53._12_4_ * fVar25) * fVar28 +
           (auVar56._8_4_ * fVar26 + auVar56._12_4_ * fVar25) * fVar27;
      auVar54._12_4_ =
           (auVar53._12_4_ * fVar26 + auVar48._0_4_ * fVar25) * fVar28 +
           (auVar56._12_4_ * fVar26 + auVar51._0_4_ * fVar25) * fVar27;
      fVar47 = (auVar48._0_4_ * fVar26 + auVar48._4_4_ * fVar25) * fVar28 +
               (auVar51._0_4_ * fVar26 + auVar51._4_4_ * fVar25) * fVar27;
      fVar45 = (auVar48._4_4_ * fVar26 + auVar48._8_4_ * fVar25) * fVar28 +
               (auVar51._4_4_ * fVar26 + auVar51._8_4_ * fVar25) * fVar27;
      fVar49 = (auVar48._8_4_ * fVar26 + auVar48._12_4_ * fVar25) * fVar28 +
               (auVar51._8_4_ * fVar26 + auVar51._12_4_ * fVar25) * fVar27;
      fVar57 = (auVar48._12_4_ * fVar26 + fVar25 * fVar57) * fVar28 +
               (auVar51._12_4_ * fVar26 + fVar25 * fVar58) * fVar27;
      *(long *)(pfVar9 + -2) = auVar54._8_8_;
      *(long *)(pfVar9 + -4) = auVar54._0_8_;
      pfVar9[2] = fVar49;
      pfVar9[3] = fVar57;
      *pfVar9 = fVar47;
      pfVar9[1] = fVar45;
      lVar19 = lVar19 + lVar14;
      fVar47 = (float)CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29))) + fVar52 + fVar47;
      uVar29 = SUB41(fVar47,0);
      uVar30 = (undefined1)((uint)fVar47 >> 8);
      uVar31 = (undefined1)((uint)fVar47 >> 0x10);
      uVar32 = (undefined1)((uint)fVar47 >> 0x18);
      fVar45 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) + fVar55 + fVar45;
      uVar33 = SUB41(fVar45,0);
      uVar34 = (undefined1)((uint)fVar45 >> 8);
      uVar35 = (undefined1)((uint)fVar45 >> 0x10);
      uVar36 = (undefined1)((uint)fVar45 >> 0x18);
      fVar49 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) + auVar54._8_4_ +
               fVar49;
      uVar37 = SUB41(fVar49,0);
      uVar38 = (undefined1)((uint)fVar49 >> 8);
      uVar39 = (undefined1)((uint)fVar49 >> 0x10);
      uVar40 = (undefined1)((uint)fVar49 >> 0x18);
      fVar57 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) + auVar54._12_4_ +
               fVar57;
      uVar41 = SUB41(fVar57,0);
      uVar42 = (undefined1)((uint)fVar57 >> 8);
      uVar43 = (undefined1)((uint)fVar57 >> 0x10);
      uVar44 = (undefined1)((uint)fVar57 >> 0x18);
      pfVar9 = pfVar9 + 8;
      lVar15 = lVar15 + lVar14;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    auVar4[4] = uVar33;
    auVar4._0_4_ = fVar47;
    auVar4[5] = uVar34;
    auVar4[6] = uVar35;
    auVar4[7] = uVar36;
    auVar4[8] = uVar37;
    auVar4[9] = uVar38;
    auVar4[10] = uVar39;
    auVar4[0xb] = uVar40;
    auVar4[0xc] = uVar41;
    auVar4[0xd] = uVar42;
    auVar4[0xe] = uVar43;
    auVar4[0xf] = uVar44;
    auVar5[4] = uVar33;
    auVar5._0_4_ = fVar47;
    auVar5[5] = uVar34;
    auVar5[6] = uVar35;
    auVar5[7] = uVar36;
    auVar5[8] = uVar37;
    auVar5[9] = uVar38;
    auVar5[10] = uVar39;
    auVar5[0xb] = uVar40;
    auVar5[0xc] = uVar41;
    auVar5[0xd] = uVar42;
    auVar5[0xe] = uVar43;
    auVar5[0xf] = uVar44;
    NEON_ext(auVar4,auVar5,8,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar46 = param_3[2];
  if (0 < (int)uVar46) {
    lVar13 = 0;
    uVar16 = 0;
    uVar18 = param_3[1];
    iVar1 = *(int *)(param_4 + 0x10);
    iVar2 = *(int *)(param_4 + 0x14);
    fVar47 = 1e+20;
    do {
      fVar25 = (float)(uVar16 & 0xffffffff) + 0.5;
      fStack_a4 = 0.5;
      if (0 < (int)uVar18) {
        lVar14 = *(long *)(param_4 + 8);
        iVar3 = *(int *)(param_4 + 0x18);
        pfVar9 = (float *)(*param_3 + lVar13);
        uVar10 = uVar18 & 0x7fffffff;
        do {
          fVar28 = fVar25 * *(float *)(param_5 + 8) +
                   *(float *)(param_5 + 0x14) * fStack_a4 + *(float *)(param_5 + 0x20);
          fVar27 = ((float)*(undefined8 *)param_5 * fVar25 +
                    (float)*(undefined8 *)(param_5 + 0xc) * fStack_a4 +
                   (float)*(undefined8 *)(param_5 + 0x18) * 1.0) / fVar28 + -0.5;
          uVar11 = (uint)fVar27;
          fVar26 = fVar47;
          if (-1 < (int)uVar11) {
            fVar28 = ((float)((ulong)*(undefined8 *)param_5 >> 0x20) * fVar25 +
                      (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20) * fStack_a4 +
                     (float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20) * 1.0) / fVar28 + -0.5;
            uVar12 = (uint)fVar28;
            if ((-1 < (int)uVar12) && ((int)uVar11 < iVar1 + -1 && (int)uVar12 < iVar2 + -1)) {
              fVar27 = fVar27 - (float)uVar11;
              fVar28 = fVar28 - (float)uVar12;
              lVar19 = lVar14 + (long)iVar3 * (long)(int)uVar12;
              fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + (ulong)uVar11));
              fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + (ulong)uVar11 + 1));
              lVar19 = lVar14 + (long)iVar3 + (long)iVar3 * (long)(int)uVar12;
              fVar49 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + (ulong)uVar11));
              fVar57 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + (ulong)uVar11 + 1));
              fVar26 = fVar28 * (fVar27 * fVar57 + (1.0 - fVar27) * fVar49) +
                       (1.0 - fVar28) * (fVar27 * fVar45 + (1.0 - fVar27) * fVar26);
            }
          }
          param_6 = pfVar9 + 1;
          *pfVar9 = fVar26;
          fStack_a4 = fStack_a4 + 1.0;
          uVar10 = uVar10 - 1;
          pfVar9 = param_6;
        } while (uVar10 != 0);
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + uVar18 * 4;
    } while (uVar16 != (uVar46 & 0x7fffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if (param_3[2] * param_3[1] - (long)param_4 == 0) goto LAB_109534c68;
  _free(*param_3);
  if ((long)param_4 < 1) {
LAB_109534c60:
    lVar15 = 0;
  }
  else {
    if ((ulong)param_4 >> 0x3d != 0) {
LAB_109534c40:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109534c60;
    }
    lVar15 = (long)param_4 << 3;
    _malloc();
    if (lVar15 == 0) goto LAB_109534c40;
  }
  *param_3 = lVar15;
LAB_109534c68:
  param_3[1] = (long)param_5;
  param_3[2] = (long)param_6;
  return;
}



/* Entry: 109534a2c; end: 109534beb;  */

void FUN_109534a2c(long *param_1,ulong param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_34;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_1[2];
  if (0 < (int)uVar13) {
    lVar10 = 0;
    uVar11 = 0;
    uVar12 = param_1[1];
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x14);
    fVar15 = 1e+20;
    do {
      fVar16 = (float)(uVar11 & 0xffffffff) + 0.5;
      fStack_34 = 0.5;
      if (0 < (int)uVar12) {
        lVar14 = *(long *)(param_2 + 8);
        iVar3 = *(int *)(param_2 + 0x18);
        pfVar4 = (float *)(*param_1 + lVar10);
        uVar5 = uVar12 & 0x7fffffff;
        do {
          fVar18 = fVar16 * *(float *)(param_3 + 1) +
                   *(float *)((long)param_3 + 0x14) * fStack_34 + *(float *)(param_3 + 4);
          fVar17 = ((float)*param_3 * fVar16 +
                    (float)*(undefined8 *)((long)param_3 + 0xc) * fStack_34 +
                   (float)param_3[3] * 1.0) / fVar18 + -0.5;
          uVar6 = (uint)fVar17;
          fVar19 = fVar15;
          if (-1 < (int)uVar6) {
            fVar18 = ((float)((ulong)*param_3 >> 0x20) * fVar16 +
                      (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20) * fStack_34 +
                     (float)((ulong)param_3[3] >> 0x20) * 1.0) / fVar18 + -0.5;
            uVar7 = (uint)fVar18;
            if ((-1 < (int)uVar7) && ((int)uVar6 < iVar1 + -1 && (int)uVar7 < iVar2 + -1)) {
              fVar17 = fVar17 - (float)uVar6;
              fVar18 = fVar18 - (float)uVar7;
              lVar8 = lVar14 + (long)iVar3 * (long)(int)uVar7;
              fVar19 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (ulong)uVar6));
              fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (ulong)uVar6 + 1));
              lVar8 = lVar14 + (long)iVar3 + (long)iVar3 * (long)(int)uVar7;
              fVar21 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (ulong)uVar6));
              fVar22 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (ulong)uVar6 + 1));
              fVar19 = fVar18 * (fVar17 * fVar22 + (1.0 - fVar17) * fVar21) +
                       (1.0 - fVar18) * (fVar17 * fVar20 + (1.0 - fVar17) * fVar19);
            }
          }
          param_4 = pfVar4 + 1;
          *pfVar4 = fVar19;
          fStack_34 = fStack_34 + 1.0;
          uVar5 = uVar5 - 1;
          pfVar4 = param_4;
        } while (uVar5 != 0);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + uVar12 * 4;
    } while (uVar11 != (uVar13 & 0x7fffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (param_1[2] * param_1[1] - param_2 == 0) goto LAB_109534c68;
  _free(*param_1);
  if ((long)param_2 < 1) {
LAB_109534c60:
    lVar9 = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
LAB_109534c40:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109534c60;
    }
    lVar9 = param_2 << 3;
    _malloc();
    if (lVar9 == 0) goto LAB_109534c40;
  }
  *param_1 = lVar9;
LAB_109534c68:
  param_1[1] = (long)param_3;
  param_1[2] = (long)param_4;
  return;
}



/* Entry: 109534bec; end: 109534c7b;  */

void FUN_109534bec(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_1[2] * param_1[1] - param_2 == 0) goto LAB_109534c68;
  _free(*param_1);
  if ((long)param_2 < 1) {
LAB_109534c60:
    lVar1 = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
LAB_109534c40:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109534c60;
    }
    lVar1 = param_2 << 3;
    _malloc();
    if (lVar1 == 0) goto LAB_109534c40;
  }
  *param_1 = lVar1;
LAB_109534c68:
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 109534c7c; end: 109534cf3;  */

undefined8 * FUN_109534c7c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_109536430(param_1 + 3);
  param_1[0x41] = 0x3f80000000000000;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0x408000003e4ccccd;
  *(undefined8 *)((long)param_1 + 0x23c) = 0x3f8000003dcccccd;
  return param_1;
}



/* Entry: 109534cf4; end: 109534d3f;  */

long FUN_109534cf4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x210;
  FUN_1093702c4(&lStack_28);
  FUN_1095365e0(param_1 + 0x18);
  FUN_1095361ec(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 109534d40; end: 109534d87;  */

undefined8 * FUN_109534d40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm();
  FUN_109534c7c();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 109534d88; end: 109534dbb;  */

long * FUN_109534d88(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109534cf4();
    __ZdlPv();
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 109534dbc; end: 109535273;  */

void FUN_109534dbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,int param_6,undefined4 param_7,ulong param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_1f0;
  int iStack_1ec;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long alStack_1a0 [36];
  
  plVar10 = (long *)*param_5;
  plVar6 = (long *)plVar10[1];
  plVar11 = plVar10 + 1;
  do {
    plVar12 = plVar11;
    if (plVar6 == (long *)0x0) {
LAB_109534e60:
      plVar5 = (long *)0xc0;
      __Znwm();
      *(int *)(plVar5 + 4) = param_6;
      plVar5[6] = 0;
      FUN_109a82c84(&uStack_1f0,3,3,5);
      *(undefined4 *)(plVar5 + 10) = 0x42ff0000;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      *(undefined8 *)((long)plVar5 + 0x7c) = 0;
      *(undefined8 *)((long)plVar5 + 0x74) = 0;
      *(undefined8 *)((long)plVar5 + 0x6c) = 0;
      *(undefined8 *)((long)plVar5 + 100) = 0;
      *(undefined8 *)((long)plVar5 + 0x5c) = 0;
      *(undefined8 *)((long)plVar5 + 0x54) = 0;
      plVar5[0x14] = 0;
      plVar5[0x12] = (long)(plVar5 + 0xb);
      plVar5[0x13] = (long)(plVar5 + 0x14);
      plVar5[0x15] = 0;
      (**(code **)(*(long *)CONCAT44(iStack_1ec,uStack_1f0) + 0x18))
                ((long *)CONCAT44(iStack_1ec,uStack_1f0),&uStack_1f0,plVar5 + 10,0xffffffff);
      FUN_10918eb6c(&uStack_1f0);
      *(undefined4 *)(plVar5 + 0x16) = 0xffffffff;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)plVar11;
      *plVar12 = (long)plVar5;
      plVar11 = plVar5;
      if (*(long *)*plVar10 != 0) {
        *plVar10 = *(long *)*plVar10;
        plVar11 = (long *)*plVar12;
      }
      func_0x000107c27d40(plVar10[1],plVar11);
      plVar10[2] = plVar10[2] + 1;
      param_8 = param_8 & 0xffffffff;
LAB_109534f5c:
      plVar11 = (long *)plVar5[6];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x1e0;
        __Znwm();
        FUN_109536430();
        lVar7 = *param_5;
        fVar13 = *(float *)(lVar7 + 0x228);
        if (0.0 < fVar13) {
          uVar14 = *(undefined4 *)(lVar7 + 0x22c);
          uVar15 = *(undefined4 *)(lVar7 + 0x230);
          uVar16 = *(undefined4 *)(lVar7 + 0x234);
          uVar17 = *(undefined4 *)(lVar7 + 0x238);
          *(float *)(plVar11 + 0x34) = fVar13;
          *(undefined4 *)((long)plVar11 + 0x1a4) = uVar14;
          *(undefined4 *)(plVar11 + 0x35) = uVar15;
          *(undefined4 *)((long)plVar11 + 0x1ac) = uVar16;
          *(undefined4 *)(plVar11 + 0x36) = uVar17;
          lVar7 = plVar11[0x3b];
          *(float *)(lVar7 + 0x134) = fVar13;
          *(undefined4 *)(lVar7 + 0x138) = uVar14;
          *(undefined4 *)(lVar7 + 0x13c) = uVar15;
          *(undefined4 *)(lVar7 + 0x140) = uVar16;
          *(undefined4 *)(lVar7 + 0x144) = uVar17;
        }
        *(undefined4 *)((long)plVar11 + 0x1b4) = param_1;
        *(undefined4 *)(plVar11 + 0x37) = param_2;
        *(undefined4 *)((long)plVar11 + 0x1bc) = param_3;
        *(undefined4 *)(plVar11 + 0x38) = param_4;
        *(undefined4 *)((long)plVar11 + 0x1c4) = param_13;
        *(undefined4 *)(plVar11 + 0x39) = param_14;
        *(undefined4 *)((long)plVar11 + 0x1cc) = param_15;
        *(undefined4 *)((long)plVar11 + 0x19c) = param_16;
        (**(code **)(*plVar11 + 0x10))(plVar11,param_7,param_8,param_9,param_10,param_11,param_12);
        plVar6 = (long *)plVar5[6];
        plVar5[6] = (long)plVar11;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
          plVar11 = (long *)plVar5[6];
        }
        (**(code **)(*plVar11 + 0x20))(&uStack_1f0,plVar11);
        if (plVar5[0x11] != 0) {
          piVar1 = (int *)(plVar5[0x11] + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(plVar5 + 10);
          }
        }
        plVar5[0x11] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        if (0 < *(int *)((long)plVar5 + 0x54)) {
          lVar7 = 0;
          lVar9 = plVar5[0x12];
          do {
            *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)plVar5 + 0x54));
        }
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11,param_7,param_8,param_9,param_10,param_11,param_12);
        (**(code **)(*(long *)plVar5[6] + 0x20))(&uStack_1f0);
        if (plVar5[0x11] != 0) {
          piVar1 = (int *)(plVar5[0x11] + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(plVar5 + 10);
          }
        }
        plVar5[0x11] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        if (0 < *(int *)((long)plVar5 + 0x54)) {
          lVar7 = 0;
          lVar9 = plVar5[0x12];
          do {
            *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)plVar5 + 0x54));
        }
      }
      plVar5[0xb] = lStack_1e8;
      plVar5[10] = CONCAT44(iStack_1ec,uStack_1f0);
      plVar5[0xd] = lStack_1d8;
      plVar5[0xc] = lStack_1e0;
      plVar5[0xf] = lStack_1c8;
      plVar5[0xe] = lStack_1d0;
      plVar5[0x11] = lStack_1b8;
      plVar5[0x10] = lStack_1c0;
      plVar6 = (long *)plVar5[0x13];
      plVar11 = plVar5 + 0x14;
      if (plVar6 != plVar11) {
        if (plVar6 != (long *)0x0) {
          _free(plVar6[-1]);
        }
        plVar5[0x12] = (long)(plVar5 + 0xb);
        plVar5[0x13] = (long)plVar11;
        plVar6 = plVar11;
      }
      if (iStack_1ec < 3) {
        puVar8 = (undefined8 *)((ulong)&uStack_1f0 | 4);
        *plVar6 = *plStack_1a8;
        plVar6[1] = plStack_1a8[1];
        uStack_1f0 = 0x42ff0000;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        if (plStack_1a8 != alStack_1a0) {
          _free(plStack_1a8[-1]);
        }
      }
      else {
        plVar5[0x12] = lStack_1b0;
        plVar5[0x13] = (long)plStack_1a8;
      }
      lVar7 = *(long *)(*param_5 + 0x200);
      plVar5[9] = *(long *)(*param_5 + 0x208);
      plVar5[8] = lVar7;
      return;
    }
    while (plVar5 = plVar6, plVar11 = plVar5, (int)plVar5[4] <= param_6) {
      if (param_6 <= (int)plVar5[4]) goto LAB_109534f5c;
      plVar6 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar12 = plVar5 + 1;
        goto LAB_109534e60;
      }
    }
    plVar6 = (long *)*plVar5;
  } while( true );
}



/* Entry: 109535274; end: 109535bc7;  */

/* WARNING: Removing unreachable block (ram,0x0001095353cc) */
/* WARNING: Removing unreachable block (ram,0x0001095353d0) */
/* WARNING: Removing unreachable block (ram,0x0001095353d8) */
/* WARNING: Removing unreachable block (ram,0x0001095353e0) */
/* WARNING: Removing unreachable block (ram,0x0001095353e4) */
/* WARNING: Removing unreachable block (ram,0x000109535404) */
/* WARNING: Removing unreachable block (ram,0x00010953540c) */
/* WARNING: Removing unreachable block (ram,0x000109535420) */
/* WARNING: Removing unreachable block (ram,0x000109535430) */

ulong FUN_109535274(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 *param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  uint *unaff_x20;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint *unaff_x23;
  undefined4 *unaff_x24;
  undefined8 *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_350 [4];
  int iStack_34c;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_318;
  long lStack_310;
  undefined1 *puStack_308;
  undefined1 auStack_300 [16];
  long *plStack_2f0;
  long *plStack_2e8;
  uint *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined4 *puStack_2d0;
  uint *puStack_2c8;
  undefined8 *puStack_2c0;
  ulong uStack_2b8;
  uint *puStack_2b0;
  uint *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined4 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined4 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 auStack_108 [2];
  uint *puStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  int *piStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  iVar4 = uStack_e8._4_4_;
  iVar19 = (int)uStack_e8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = *(undefined8 **)param_1;
  if (puVar22[2] == 0) {
    uVar21 = 0;
    puStack_2a8 = param_1;
    goto LAB_109535b04;
  }
  unaff_x24 = auStack_108;
  uStack_270 = 0x42ff0000;
  puStack_230 = &uStack_268;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_244 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_90 = 0;
  uVar20 = *param_2 >> 3 & 0x1ff;
  puStack_228 = &uStack_220;
  if (uVar20 < 2) {
    if (uVar20 == 0) {
      if (&uStack_270 != param_2) {
        if (*(long *)(param_2 + 0xe) != 0) {
          piVar18 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar5) {
              *piVar18 = *piVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_238 = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_248 = 0;
        uStack_244 = 0;
        uStack_250 = 0;
        uStack_24c = 0;
        uStack_270 = *param_2;
        if ((int)param_2[1] < 3) {
          uStack_268 = (undefined4)*(undefined8 *)(param_2 + 2);
          uStack_264 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
          uStack_220 = **(undefined8 **)(param_2 + 0x12);
          uStack_218 = (*(undefined8 **)(param_2 + 0x12))[1];
          uStack_26c = param_2[1];
        }
        else {
          func_0x000109a84868(&uStack_270,param_2);
        }
        uStack_258 = (undefined4)*(undefined8 *)(param_2 + 6);
        uStack_254 = (undefined4)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
        uStack_260 = (undefined4)*(undefined8 *)(param_2 + 4);
        uStack_25c = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
        uStack_248 = (undefined4)*(undefined8 *)(param_2 + 10);
        uStack_244 = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
        uStack_250 = (undefined4)*(undefined8 *)(param_2 + 8);
        uStack_24c = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        lStack_238 = *(long *)(param_2 + 0xe);
        uStack_240 = (undefined4)*(undefined8 *)(param_2 + 0xc);
        uStack_23c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
        iVar19 = (int)uStack_e8;
        iVar4 = uStack_e8._4_4_;
      }
    }
    else if (uVar20 == 1) {
      uStack_f0 = (uint)*(undefined8 *)(param_2 + 2);
      uStack_ec = (uint)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      FUN_109a83fd0(&uStack_270,2,&uStack_f0,0);
      param_5 = &uStack_90;
      param_6 = 1;
      FUN_109a3e710(param_2,1,&uStack_270,1,param_5,1);
      iVar19 = (int)uStack_e8;
      iVar4 = uStack_e8._4_4_;
    }
  }
  else {
    uStack_e8._0_4_ = (int)param_2;
    uStack_e8._4_4_ = (int)((ulong)param_2 >> 0x20);
    if (uVar20 == 2) {
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_f0 = 0x1010000;
      auStack_108[0] = 0x2010000;
      puStack_100 = &uStack_270;
      uStack_f8 = 0;
      FUN_109ac9fc8(&uStack_f0,auStack_108,6,0);
      iVar19 = (int)uStack_e8;
      iVar4 = uStack_e8._4_4_;
    }
    else if (uVar20 == 3) {
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_f0 = 0x1010000;
      auStack_108[0] = 0x2010000;
      puStack_100 = &uStack_270;
      uStack_f8 = 0;
      FUN_109ac9fc8(&uStack_f0,auStack_108,10,0);
      iVar19 = (int)uStack_e8;
      iVar4 = uStack_e8._4_4_;
    }
  }
  uStack_e8._4_4_ = iVar4;
  uStack_e8._0_4_ = iVar19;
  uVar20 = param_2[2];
  if ((int)param_2[3] <= (int)param_2[2]) {
    uVar20 = param_2[3];
  }
  _frexp((double)((int)uVar20 / 10),&uStack_274);
  param_3 = (uint *)(ulong)uStack_274;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_f0 = 0x1010000;
  uStack_e8 = &uStack_270;
  puStack_100 = (uint *)(puVar22 + 0x42);
  auStack_108[0] = 0x2050000;
  uStack_f8 = 0;
  param_4 = 4;
  FUN_109b40328(&uStack_f0,auStack_108,param_3,4);
  puVar8 = uStack_e8;
  if (lStack_238 != 0) {
    piVar18 = (int *)(lStack_238 + 0x14);
    do {
      iVar19 = *piVar18;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar19 + -1 == 0) {
      func_0x000109a848d4(&uStack_270);
      puVar8 = uStack_e8;
    }
  }
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  if (0 < (int)uStack_26c) {
    lVar10 = 0;
    do {
      puStack_230[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_26c);
  }
  if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
    uStack_e8 = puVar8;
    _free(puStack_228[-1]);
  }
  uStack_f0 = 0x42ff0000;
  unaff_x26 = &uStack_f0;
  piStack_b0 = (int *)&uStack_e8;
  uStack_e8._4_4_ = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8._0_4_ = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  unaff_x25 = &uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar11 = *(undefined8 **)param_1;
  unaff_x27 = (long *)*puVar11;
  puStack_a8 = unaff_x25;
  if (unaff_x27 == puVar11 + 1) {
    uVar21 = 0;
LAB_109535a84:
    puVar6 = (uint *)(puVar11 + 3);
    param_2 = (uint *)(puVar11 + 0x42);
    FUN_109538c34();
  }
  else {
    uVar21 = 0;
    puStack_280 = (undefined8 *)((ulong)&uStack_270 | 4);
    puStack_288 = &uStack_220;
    puVar22 = (undefined8 *)0x1;
    do {
      if ((int)unaff_x27[0x16] == 0) {
        if (CONCAT44(uStack_dc,uStack_e0) == 0) {
LAB_1095358c4:
          puVar22 = puVar11 + 3;
          FUN_109538668(puVar22,puVar11 + 0x42,&uStack_f0);
        }
        else {
          uVar14 = (ulong)uStack_ec;
          if ((int)uStack_ec < 3) {
            lVar10 = (long)uStack_e8._4_4_ * (long)(int)uStack_e8;
          }
          else {
            lVar10 = 1;
            piVar18 = piStack_b0;
            do {
              lVar10 = lVar10 * *piVar18;
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 1;
            } while (uVar14 != 0);
          }
          if (lVar10 == 0) goto LAB_1095358c4;
        }
        FUN_109a7d740(&uStack_270,&uStack_f0,unaff_x27 + 10);
        puVar8 = &uStack_270;
        param_3 = (uint *)(unaff_x27 + 10);
        param_4 = 0xffffffff;
        (**(code **)(*(long *)CONCAT44(uStack_26c,uStack_270) + 0x18))
                  ((long *)CONCAT44(uStack_26c,uStack_270),puVar8,param_3,0xffffffff);
LAB_109535904:
        puVar6 = &uStack_270;
        FUN_10918eb6c();
      }
      else {
        unaff_x28 = unaff_x27 + 0xc;
        pfVar13 = (float *)*unaff_x28;
        unaff_x23 = (uint *)(unaff_x27 + 10);
        fVar23 = SQRT(-(pfVar13[1] * pfVar13[3]) + pfVar13[4] * *pfVar13);
        if ((*(float *)((long)puVar11 + 0x244) <= fVar23) && (fVar23 <= *(float *)(puVar11 + 0x49)))
        {
          fVar24 = pfVar13[2];
          fVar23 = pfVar13[5];
          fVar26 = *(float *)(puVar11 + 0x45);
          if (0.0 < fVar26) {
            fVar27 = *(float *)((long)puVar11 + 0x22c);
            fVar28 = *(float *)(puVar11 + 0x46);
            fVar25 = (fVar24 - fVar27) / fVar26;
            fVar24 = (fVar23 - fVar28) / fVar26;
            fVar23 = fVar24 * fVar24 + fVar25 * fVar25;
            fVar26 = fVar26 * (fVar23 * *(float *)((long)puVar11 + 0x234) + 1.0 +
                              fVar23 * *(float *)(puVar11 + 0x47) * fVar23);
            fVar23 = fVar28;
            if (fVar27 <= fVar28) {
              fVar23 = fVar27;
            }
            fVar27 = (fVar27 + fVar25 * fVar26) - fVar27;
            fVar28 = (fVar28 + fVar24 * fVar26) - fVar28;
            if (fVar23 * 0.6 * fVar23 * 0.6 < fVar28 * fVar28 + fVar27 * fVar27) goto LAB_109535644;
LAB_109535784:
            plVar7 = (long *)unaff_x27[6];
            puVar8 = (uint *)(puVar11 + 0x42);
            (**(code **)(*plVar7 + 0x18))();
            uVar9 = 2;
            if ((int)plVar7 == 0) {
              uVar9 = 0;
            }
            *(undefined4 *)(unaff_x27 + 0x16) = uVar9;
            if ((int)plVar7 == 0) {
              if (CONCAT44(uStack_dc,uStack_e0) == 0) {
LAB_1095359f8:
                puVar22 = (undefined8 *)(*(long *)param_1 + 0x18);
                FUN_109538668(puVar22,*(long *)param_1 + 0x210,&uStack_f0);
              }
              else {
                uVar14 = (ulong)uStack_ec;
                if ((int)uStack_ec < 3) {
                  lVar10 = (long)uStack_e8._4_4_ * (long)(int)uStack_e8;
                }
                else {
                  lVar10 = 1;
                  piVar18 = piStack_b0;
                  do {
                    lVar10 = lVar10 * *piVar18;
                    uVar14 = uVar14 - 1;
                    piVar18 = piVar18 + 1;
                  } while (uVar14 != 0);
                }
                if (lVar10 == 0) goto LAB_1095359f8;
              }
              FUN_109a7d740(&uStack_270,&uStack_f0,unaff_x23);
              puVar8 = &uStack_270;
              param_4 = 0xffffffff;
              param_3 = unaff_x23;
              (**(code **)(*(long *)CONCAT44(uStack_26c,uStack_270) + 0x18))
                        ((long *)CONCAT44(uStack_26c,uStack_270),puVar8,unaff_x23,0xffffffff);
              goto LAB_109535904;
            }
            puVar6 = (uint *)unaff_x27[6];
            (**(code **)(*(long *)puVar6 + 0x20))(&uStack_270);
            if (unaff_x27[0x11] != 0) {
              piVar18 = (int *)(unaff_x27[0x11] + 0x14);
              do {
                iVar19 = *piVar18;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar5) {
                  *piVar18 = iVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar19 + -1 == 0) {
                func_0x000109a848d4();
                puVar6 = unaff_x23;
              }
            }
            unaff_x27[0x11] = 0;
            unaff_x27[0xd] = 0;
            *unaff_x28 = 0;
            unaff_x27[0xf] = 0;
            unaff_x27[0xe] = 0;
            if (0 < *(int *)((long)unaff_x27 + 0x54)) {
              lVar10 = 0;
              lVar15 = unaff_x27[0x12];
              do {
                *(undefined4 *)(lVar15 + lVar10 * 4) = 0;
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)((long)unaff_x27 + 0x54));
            }
            unaff_x27[0xb] = CONCAT44(uStack_264,uStack_268);
            unaff_x27[10] = CONCAT44(uStack_26c,uStack_270);
            unaff_x27[0xd] = CONCAT44(uStack_254,uStack_258);
            unaff_x27[0xc] = CONCAT44(uStack_25c,uStack_260);
            unaff_x27[0xf] = CONCAT44(uStack_244,uStack_248);
            unaff_x27[0xe] = CONCAT44(uStack_24c,uStack_250);
            unaff_x27[0x11] = lStack_238;
            unaff_x27[0x10] = CONCAT44(uStack_23c,uStack_240);
            puVar16 = (uint *)unaff_x27[0x13];
            unaff_x23 = (uint *)(unaff_x27 + 0x14);
            if (puVar16 != unaff_x23) {
              if (puVar16 != (uint *)0x0) {
                puVar6 = *(uint **)(puVar16 + -2);
                _free();
              }
              unaff_x27[0x12] = (long)(unaff_x27 + 0xb);
              unaff_x27[0x13] = (long)unaff_x23;
              puVar16 = unaff_x23;
            }
            if ((int)uStack_26c < 3) {
              *(undefined8 *)puVar16 = *puStack_228;
              *(undefined8 *)(puVar16 + 2) = puStack_228[1];
              uStack_270 = 0x42ff0000;
              puStack_280[1] = 0;
              *puStack_280 = 0;
              puStack_280[3] = 0;
              puStack_280[2] = 0;
              puStack_280[5] = 0;
              puStack_280[4] = 0;
              *(undefined8 *)((long)puStack_280 + 0x34) = 0;
              *(undefined8 *)((long)puStack_280 + 0x2c) = 0;
              if (puStack_228 != puStack_288) {
                puVar6 = (uint *)puStack_228[-1];
                _free();
              }
            }
            else {
              unaff_x27[0x12] = (long)puStack_230;
              unaff_x27[0x13] = (long)puStack_228;
            }
            goto LAB_10953590c;
          }
          uVar1 = param_2[2];
          uVar2 = param_2[3];
          uVar20 = uVar1;
          if ((int)uVar2 <= (int)uVar1) {
            uVar20 = uVar2;
          }
          fVar28 = *(float *)((long)puVar11 + 0x23c) * (float)(int)uVar20;
          fVar26 = (float)(int)fVar28;
          if (fVar26 <= fVar24) {
            iVar19 = (int)fVar28;
            bVar5 = true;
            if ((fVar24 <= (float)(int)(uVar2 - iVar19)) &&
               (bVar5 = false, !NAN(fVar23) && !NAN(fVar26))) {
              bVar5 = fVar23 < fVar26;
            }
            if ((!bVar5) && (fVar23 <= (float)(int)(uVar1 - iVar19))) goto LAB_109535784;
          }
        }
LAB_109535644:
        if (CONCAT44(uStack_dc,uStack_e0) == 0) {
LAB_1095356a0:
          puVar22 = puVar11 + 3;
          FUN_109538668(puVar22,puVar11 + 0x42,&uStack_f0);
        }
        else {
          uVar14 = (ulong)uStack_ec;
          if ((int)uStack_ec < 3) {
            lVar10 = (long)uStack_e8._4_4_ * (long)(int)uStack_e8;
          }
          else {
            lVar10 = 1;
            piVar18 = piStack_b0;
            do {
              lVar10 = lVar10 * *piVar18;
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 1;
            } while (uVar14 != 0);
          }
          if (lVar10 == 0) goto LAB_1095356a0;
        }
        *(uint *)(unaff_x27 + 0x16) = (uint)puVar22 & 1;
        FUN_109a7d740(&uStack_270,&uStack_f0,unaff_x23);
        param_4 = 0xffffffff;
        param_3 = unaff_x23;
        (**(code **)(*(long *)CONCAT44(uStack_26c,uStack_270) + 0x18))
                  ((long *)CONCAT44(uStack_26c,uStack_270),&uStack_270,unaff_x23,0xffffffff);
        FUN_10918eb6c(&uStack_270);
        puVar6 = (uint *)unaff_x27[6];
        puVar8 = unaff_x23;
        (**(code **)(*(long *)puVar6 + 0x28))();
      }
LAB_10953590c:
      uVar20 = (uint)uVar21;
      if ((int)unaff_x27[0x16] != 0) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = (ulong)uVar20;
      plVar7 = (long *)unaff_x27[1];
      plVar12 = unaff_x27;
      if ((long *)unaff_x27[1] == (long *)0x0) {
        do {
          unaff_x27 = (long *)plVar12[2];
          bVar5 = (long *)*unaff_x27 != plVar12;
          plVar12 = unaff_x27;
        } while (bVar5);
      }
      else {
        do {
          unaff_x27 = plVar7;
          plVar7 = (long *)*unaff_x27;
        } while ((long *)*unaff_x27 != (long *)0x0);
      }
      puVar11 = *(undefined8 **)param_1;
    } while (unaff_x27 != puVar11 + 1);
    if (CONCAT44(uStack_dc,uStack_e0) == 0) goto LAB_109535a84;
    uVar14 = (ulong)uStack_ec;
    if ((int)uStack_ec < 3) {
      lVar10 = (long)uStack_e8._4_4_ * (long)(int)uStack_e8;
    }
    else {
      lVar10 = 1;
      piVar18 = piStack_b0;
      do {
        lVar10 = lVar10 * *piVar18;
        uVar14 = uVar14 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar14 != 0);
    }
    param_2 = puVar8;
    if (lVar10 == 0) goto LAB_109535a84;
  }
  if (lStack_b8 != 0) {
    piVar18 = (int *)(lStack_b8 + 0x14);
    do {
      iVar19 = *piVar18;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar19 + -1 == 0) {
      puVar6 = &uStack_f0;
      func_0x000109a848d4();
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < (int)uStack_ec) {
    lVar10 = 0;
    do {
      piStack_b0[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_ec);
  }
  puStack_2a8 = puVar6;
  unaff_x20 = param_1;
  if (puStack_a8 != unaff_x25 && puStack_a8 != (undefined8 *)0x0) {
    puVar8 = (uint *)puStack_a8[-1];
    _free();
    puStack_2a8 = puVar8;
  }
LAB_109535b04:
  iVar19 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar21;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_270);
  func_0x00010567aa40(&uStack_f0);
  puVar8 = puStack_2a8;
  __Unwind_Resume();
  pcStack_298 = FUN_109535bc8;
  plVar12 = (long *)(*(long *)puVar8 + 8);
  plVar17 = (long *)*plVar12;
  plVar7 = plVar12;
  if (plVar17 != (long *)0x0) {
    do {
      lVar10 = 8;
      if (iVar19 <= (int)plVar17[4]) {
        lVar10 = 0;
        plVar7 = plVar17;
      }
      plVar17 = *(long **)((long)plVar17 + lVar10);
    } while (plVar17 != (long *)0x0);
    if ((plVar7 != plVar12) && ((int)plVar7[4] <= iVar19)) {
      plStack_2f0 = unaff_x28;
      plStack_2e8 = unaff_x27;
      puStack_2e0 = unaff_x26;
      puStack_2d8 = unaff_x25;
      puStack_2d0 = unaff_x24;
      puStack_2c8 = unaff_x23;
      puStack_2c0 = puVar22;
      uStack_2b8 = uVar21;
      puStack_2b0 = unaff_x20;
      puStack_2a0 = &stack0xfffffffffffffff0;
      FUN_109535fb8(auStack_350,puVar8);
      FUN_109536148(auStack_350,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_109535d40(*(undefined8 *)puVar8,plVar7 + 8);
      if (puStack_290 != (undefined4 *)0x0) {
        *puStack_290 = (int)plVar7[0x16];
      }
      if (lStack_318 != 0) {
        piVar18 = (int *)(lStack_318 + 0x14);
        do {
          iVar19 = *piVar18;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          func_0x000109a848d4(auStack_350);
        }
      }
      lStack_318 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      if (0 < iStack_34c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_310 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_34c);
      }
      if (puStack_308 != auStack_300 && puStack_308 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_308 + -8));
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109535bc8; end: 109535d3f;  */

undefined8
FUN_109535bc8(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  plVar5 = (long *)(*param_1 + 8);
  plVar7 = (long *)*plVar5;
  plVar8 = plVar5;
  if (plVar7 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (param_2 <= (int)plVar7[4]) {
        lVar6 = 0;
        plVar8 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar6);
    } while (plVar7 != (long *)0x0);
    if ((plVar8 != plVar5) && ((int)plVar8[4] <= param_2)) {
      FUN_109535fb8(auStack_c0,param_1);
      FUN_109536148(auStack_c0,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_109535d40(*param_1,plVar8 + 8);
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = (int)plVar8[0x16];
      }
      if (lStack_88 != 0) {
        piVar1 = (int *)(lStack_88 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_c0);
        }
      }
      lStack_88 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      if (0 < iStack_bc) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lStack_80 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iStack_bc);
      }
      if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_78 + -8));
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109535d40; end: 109535fb7;  */

void FUN_109535d40(long param_1,ulong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float afStack_bc [6];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  float afStack_90 [6];
  float fStack_78;
  undefined8 uStack_74;
  float afStack_6c [7];
  float afStack_50 [12];
  undefined1 auVar35 [16];
  
  uVar10 = param_2[1];
  uVar9 = *param_2;
  fVar52 = (float)uVar9;
  fVar13 = fVar52 * fVar52;
  fVar14 = (float)(uVar9 >> 0x20);
  fVar14 = fVar14 * fVar14;
  uVar15 = (undefined1)((uint)fVar14 >> 8);
  uVar16 = (undefined1)((uint)fVar14 >> 0x10);
  uVar17 = (undefined1)((uint)fVar14 >> 0x18);
  fVar32 = (float)uVar10 * (float)uVar10;
  uVar18 = (undefined1)((uint)fVar32 >> 8);
  uVar19 = (undefined1)((uint)fVar32 >> 0x10);
  uVar20 = (undefined1)((uint)fVar32 >> 0x18);
  fVar49 = (float)(uVar10 >> 0x20);
  fVar49 = fVar49 * fVar49;
  uVar21 = (undefined1)((uint)fVar49 >> 8);
  uVar22 = (undefined1)((uint)fVar49 >> 0x10);
  uVar23 = (undefined1)((uint)fVar49 >> 0x18);
  auVar34[4] = SUB41(fVar14,0);
  auVar34._0_4_ = fVar13;
  auVar34[5] = uVar15;
  auVar34[6] = uVar16;
  auVar34[7] = uVar17;
  auVar34[8] = SUB41(fVar32,0);
  auVar34[9] = uVar18;
  auVar34[10] = uVar19;
  auVar34[0xb] = uVar20;
  auVar34[0xc] = SUB41(fVar49,0);
  auVar34[0xd] = uVar21;
  auVar34[0xe] = uVar22;
  auVar34[0xf] = uVar23;
  auVar51[4] = SUB41(fVar14,0);
  auVar51._0_4_ = fVar13;
  auVar51[5] = uVar15;
  auVar51[6] = uVar16;
  auVar51[7] = uVar17;
  auVar51[8] = SUB41(fVar32,0);
  auVar51[9] = uVar18;
  auVar51[10] = uVar19;
  auVar51[0xb] = uVar20;
  auVar51[0xc] = SUB41(fVar49,0);
  auVar51[0xd] = uVar21;
  auVar51[0xe] = uVar22;
  auVar51[0xf] = uVar23;
  auVar34 = NEON_ext(auVar34,auVar51,8,1);
  fVar13 = fVar13 + auVar34._0_4_ + fVar14 + auVar34._4_4_;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  auVar53._0_14_ = ZEXT214(0);
  auVar53._14_2_ = 0;
  if (0.0 < fVar13) {
    auVar33._0_8_ = uVar9 ^ 0x8000000000000000;
    auVar33[8] = (char)uVar10;
    auVar33[9] = (char)(uVar10 >> 8);
    auVar33[10] = (char)(uVar10 >> 0x10);
    auVar33[0xb] = (byte)(uVar10 >> 0x18) ^ 0x80;
    auVar35[0xc] = (char)(uVar10 >> 0x20);
    auVar35._0_12_ = auVar33;
    auVar35[0xd] = (char)(uVar10 >> 0x28);
    auVar35[0xe] = (char)(uVar10 >> 0x30);
    auVar35[0xf] = (char)(uVar10 >> 0x38);
    auVar53._0_4_ = -fVar52 / fVar13;
    auVar53._4_4_ = (float)(auVar33._0_8_ >> 0x20) / fVar13;
    auVar53._8_4_ = auVar33._8_4_ / fVar13;
    auVar53._12_4_ = auVar35._12_4_ / fVar13;
  }
  pVar1 = (unkbyte9 *)(param_1 + 0x200);
  uVar11 = *(undefined8 *)(param_1 + 0x208);
  uVar40 = (undefined1)((ulong)uVar11 >> 8);
  uVar41 = (undefined1)((ulong)uVar11 >> 0x10);
  uVar42 = (undefined1)((ulong)uVar11 >> 0x18);
  uVar43 = (undefined1)((ulong)uVar11 >> 0x20);
  uVar44 = (undefined1)((ulong)uVar11 >> 0x28);
  uVar45 = (undefined1)((ulong)uVar11 >> 0x30);
  uVar47 = (undefined1)((ulong)uVar11 >> 0x38);
  fVar49 = auVar53._8_4_;
  fVar52 = auVar53._0_4_;
  fVar54 = auVar53._4_4_;
  auVar2[9] = uVar40;
  auVar2._0_9_ = *pVar1;
  auVar2[10] = uVar41;
  auVar2[0xb] = uVar42;
  auVar3[9] = uVar40;
  auVar3._0_9_ = *pVar1;
  auVar3[10] = uVar41;
  auVar3[0xb] = uVar42;
  auVar50._4_4_ = auVar3._8_4_;
  auVar50._0_4_ = (int)*pVar1;
  auVar50._8_4_ = (int)*pVar1;
  auVar50._12_4_ = auVar2._8_4_;
  auVar4[9] = uVar40;
  auVar4._0_9_ = *pVar1;
  auVar4[10] = uVar41;
  auVar4[0xb] = uVar42;
  auVar4[0xc] = uVar43;
  auVar4[0xd] = uVar44;
  auVar4[0xe] = uVar45;
  auVar4[0xf] = uVar47;
  auVar51 = NEON_ext(auVar50,auVar4,0xc,1);
  fVar39 = auVar53._12_4_;
  fVar32 = (float)((ulong)uVar11 >> 0x20);
  auVar5[9] = uVar40;
  auVar5._0_9_ = *pVar1;
  auVar5[10] = uVar41;
  auVar5[0xb] = uVar42;
  auVar5[0xc] = uVar43;
  auVar5[0xd] = uVar44;
  auVar5[0xe] = uVar45;
  auVar5[0xf] = uVar47;
  auVar6[9] = uVar40;
  auVar6._0_9_ = *pVar1;
  auVar6[10] = uVar41;
  auVar6[0xb] = uVar42;
  auVar6[0xc] = uVar43;
  auVar6[0xd] = uVar44;
  auVar6[0xe] = uVar45;
  auVar6[0xf] = uVar47;
  auVar53 = NEON_ext(auVar5,auVar6,4,1);
  fVar13 = (float)*(undefined8 *)pVar1;
  fVar14 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  auVar36._4_4_ = fVar49;
  auVar36._0_4_ = fVar52;
  auVar36._8_4_ = fVar52;
  auVar36._12_4_ = fVar54;
  auVar34 = NEON_rev64(auVar36,4);
  fVar31 = (fVar52 * fVar32 - auVar34._0_4_ * auVar53._0_4_) +
           fVar54 * auVar51._0_4_ + fVar39 * fVar13;
  fVar37 = (fVar54 * fVar32 - auVar34._4_4_ * auVar53._4_4_) +
           fVar49 * auVar51._4_4_ + fVar39 * fVar14;
  fVar38 = (fVar49 * fVar32 - auVar34._8_4_ * fVar13) +
           fVar52 * auVar51._8_4_ + fVar39 * (float)uVar11;
  fVar13 = (fVar39 * fVar32 - auVar34._12_4_ * auVar53._12_4_) +
           -(fVar49 * auVar51._12_4_ + fVar54 * fVar14);
  fVar14 = fVar31 * fVar31;
  fVar32 = fVar37 * fVar37;
  uVar40 = (undefined1)((uint)fVar32 >> 8);
  uVar41 = (undefined1)((uint)fVar32 >> 0x10);
  uVar42 = (undefined1)((uint)fVar32 >> 0x18);
  fVar49 = fVar38 * fVar38;
  uVar43 = (undefined1)((uint)fVar49 >> 8);
  uVar44 = (undefined1)((uint)fVar49 >> 0x10);
  uVar45 = (undefined1)((uint)fVar49 >> 0x18);
  fVar52 = fVar13 * fVar13;
  uVar47 = (undefined1)((uint)fVar52 >> 8);
  uVar46 = (undefined1)((uint)fVar52 >> 0x10);
  uVar48 = (undefined1)((uint)fVar52 >> 0x18);
  auVar7[4] = SUB41(fVar32,0);
  auVar7._0_4_ = fVar14;
  auVar7[5] = uVar40;
  auVar7[6] = uVar41;
  auVar7[7] = uVar42;
  auVar7[8] = SUB41(fVar49,0);
  auVar7[9] = uVar43;
  auVar7[10] = uVar44;
  auVar7[0xb] = uVar45;
  auVar7[0xc] = SUB41(fVar52,0);
  auVar7[0xd] = uVar47;
  auVar7[0xe] = uVar46;
  auVar7[0xf] = uVar48;
  auVar8[4] = SUB41(fVar32,0);
  auVar8._0_4_ = fVar14;
  auVar8[5] = uVar40;
  auVar8[6] = uVar41;
  auVar8[7] = uVar42;
  auVar8[8] = SUB41(fVar49,0);
  auVar8[9] = uVar43;
  auVar8[10] = uVar44;
  auVar8[0xb] = uVar45;
  auVar8[0xc] = SUB41(fVar52,0);
  auVar8[0xd] = uVar47;
  auVar8[0xe] = uVar46;
  auVar8[0xf] = uVar48;
  auVar34 = NEON_ext(auVar7,auVar8,8,1);
  fVar14 = fVar14 + auVar34._0_4_ + fVar32 + auVar34._4_4_;
  if (0.0 < fVar14) {
    fVar32 = -fVar31 / fVar14;
    uVar15 = SUB41(fVar32,0);
    uVar16 = (undefined1)((uint)fVar32 >> 8);
    uVar17 = (undefined1)((uint)fVar32 >> 0x10);
    uVar18 = (undefined1)((uint)fVar32 >> 0x18);
    fVar32 = -fVar37 / fVar14;
    uVar19 = SUB41(fVar32,0);
    uVar20 = (undefined1)((uint)fVar32 >> 8);
    uVar21 = (undefined1)((uint)fVar32 >> 0x10);
    uVar22 = (undefined1)((uint)fVar32 >> 0x18);
    fVar32 = -fVar38 / fVar14;
    uVar23 = SUB41(fVar32,0);
    uVar24 = (undefined1)((uint)fVar32 >> 8);
    uVar25 = (undefined1)((uint)fVar32 >> 0x10);
    uVar26 = (undefined1)((uint)fVar32 >> 0x18);
    fVar13 = fVar13 / fVar14;
    uVar27 = SUB41(fVar13,0);
    uVar28 = (undefined1)((uint)fVar13 >> 8);
    uVar29 = (undefined1)((uint)fVar13 >> 0x10);
    uVar30 = (undefined1)((uint)fVar13 >> 0x18);
  }
  lVar12 = 0;
  fVar32 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) +
           (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  fVar14 = (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) +
           (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar13 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
  fVar13 = fVar13 + fVar13;
  fVar49 = fVar32 * (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
  fVar52 = fVar14 * (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
  fVar31 = fVar13 * (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
  fVar32 = fVar32 * (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  fVar54 = fVar14 * (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  fVar37 = fVar13 * (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  fVar14 = fVar14 * (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar38 = fVar13 * (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar13 = fVar13 * (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
  afStack_bc[0] = 1.0 - (fVar14 + fVar13);
  afStack_bc[1] = fVar54 + fVar31;
  fStack_a4 = fVar37 + fVar52;
  fStack_a0 = fVar38 - fVar49;
  afStack_bc[2] = fVar37 - fVar52;
  afStack_bc[3] = fVar54 - fVar31;
  afStack_bc[4] = 1.0 - (fVar32 + fVar13);
  afStack_bc[5] = fVar38 + fVar49;
  fStack_9c = 1.0 - (fVar32 + fVar14);
  do {
    fVar13 = *(float *)((long)afStack_bc + lVar12);
    fVar14 = *(float *)((long)afStack_bc + lVar12 + 4);
    fVar32 = *(float *)((long)afStack_bc + lVar12 + 8);
    *(ulong *)((long)&uStack_98 + lVar12) =
         CONCAT44(fVar13 * 0.0 + fVar14 * -1.0 + fVar32 * 8.742278e-08,
                  fVar13 * 1.0 + fVar14 * 0.0 + fVar32 * 0.0);
    *(float *)((long)afStack_90 + lVar12) = fVar13 * 0.0 + (fVar14 * -8.742278e-08 - fVar32);
    lVar12 = lVar12 + 0xc;
  } while (lVar12 != 0x24);
  lVar12 = 0;
  afStack_50[2] = 0.0;
  afStack_50[3] = 0.0;
  afStack_50[0] = 1.0;
  afStack_50[1] = 0.0;
  afStack_50[6] = 0.0;
  afStack_50[7] = 8.742278e-08;
  afStack_50[4] = -1.0;
  afStack_50[5] = -8.742278e-08;
  afStack_50[8] = -1.0;
  do {
    fVar13 = *(float *)((long)afStack_50 + lVar12);
    fVar14 = *(float *)((long)afStack_50 + lVar12 + 4);
    fVar32 = *(float *)((long)afStack_50 + lVar12 + 8);
    *(ulong *)((long)&uStack_74 + lVar12) =
         CONCAT44((float)((ulong)uStack_98 >> 0x20) * fVar13 + SUB84(afStack_90._4_8_,4) * fVar14 +
                  SUB84(afStack_90._16_8_,4) * fVar32,
                  (float)uStack_98 * fVar13 + (float)afStack_90._4_8_ * fVar14 +
                  (float)afStack_90._16_8_ * fVar32);
    *(float *)((long)afStack_6c + lVar12) =
         afStack_90[0] * fVar13 + afStack_90[3] * fVar14 + fStack_78 * fVar32;
    lVar12 = lVar12 + 0xc;
  } while (lVar12 != 0x24);
  fVar13 = -afStack_6c[0];
  uVar15 = SUB41(fVar13,0);
  uVar16 = (undefined1)((uint)fVar13 >> 8);
  uVar17 = (undefined1)((uint)fVar13 >> 0x10);
  uVar18 = (undefined1)((uint)fVar13 >> 0x18);
  _asinf();
  *param_5 = CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  uVar15 = SUB41(afStack_6c[3],0);
  uVar16 = (undefined1)((uint)afStack_6c[3] >> 8);
  uVar17 = (undefined1)((uint)afStack_6c[3] >> 0x10);
  uVar18 = (undefined1)((uint)afStack_6c[3] >> 0x18);
  _atan2f();
  *param_4 = CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  return;
}



/* Entry: 109535fb8; end: 109536147;  */

void FUN_109535fb8(long *param_1,long *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined4 auStack_38 [2];
  long *plStack_30;
  undefined8 uStack_28;
  
  plVar9 = (long *)(*param_2 + 8);
  plVar11 = (long *)*plVar9;
  plVar6 = plVar9;
  if (plVar11 != (long *)0x0) {
    do {
      lVar8 = 8;
      if (param_3 <= (int)plVar11[4]) {
        lVar8 = 0;
        plVar6 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar8);
    } while (plVar11 != (long *)0x0);
    if ((plVar6 != plVar9) && ((int)plVar6[4] <= param_3)) {
      if (0.0 < *(float *)(*param_2 + 0x228)) {
        *(undefined4 *)param_1 = 0x42ff0000;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        *(undefined8 *)((long)param_1 + 4) = 0;
        *(undefined8 *)((long)param_1 + 0x1c) = 0;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        *(undefined8 *)((long)param_1 + 0x2c) = 0;
        *(undefined8 *)((long)param_1 + 0x24) = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[8] = (long)(param_1 + 1);
        param_1[9] = (long)(param_1 + 10);
        param_1[0xb] = 0;
        auStack_38[0] = 0x2010000;
        uStack_28 = 0;
        plStack_30 = param_1;
        FUN_109a479a0(plVar6 + 10,auStack_38);
        return;
      }
      lVar8 = plVar6[10];
      lVar13 = plVar6[0xd];
      lVar12 = plVar6[0xc];
      param_1[1] = plVar6[0xb];
      *param_1 = lVar8;
      param_1[3] = lVar13;
      param_1[2] = lVar12;
      lVar8 = plVar6[0xe];
      param_1[5] = plVar6[0xf];
      param_1[4] = lVar8;
      lVar8 = plVar6[0x11];
      lVar12 = plVar6[0x10];
      param_1[7] = plVar6[0x11];
      param_1[6] = lVar12;
      param_1[10] = 0;
      param_1[8] = (long)(param_1 + 1);
      param_1[9] = (long)(param_1 + 10);
      param_1[0xb] = 0;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)((long)plVar6 + 0x54) < 3) {
        puVar7 = (undefined8 *)plVar6[0x13];
        puVar10 = (undefined8 *)param_1[9];
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        return;
      }
      *(undefined4 *)((long)param_1 + 4) = 0;
      FUN_109a844cc(param_1,*(undefined4 *)((long)plVar6 + 0x54),0,0,0);
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar8 = 0;
        lVar12 = plVar6[0x12];
        lVar2 = plVar6[0x13];
        lVar13 = param_1[8];
        lVar3 = param_1[9];
        do {
          *(undefined4 *)(lVar13 + lVar8 * 4) = *(undefined4 *)(lVar12 + lVar8 * 4);
          *(undefined8 *)(lVar3 + lVar8 * 8) = *(undefined8 *)(lVar2 + lVar8 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((long)param_1 + 4));
      }
      return;
    }
  }
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  return;
}



/* Entry: 109536148; end: 1095361eb;  */

void FUN_109536148(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = *(float **)(param_1 + 0x10);
  *param_4 = pfVar2[2];
  *param_5 = pfVar2[5];
  fVar5 = SQRT(pfVar2[3] * pfVar2[3] + *pfVar2 * *pfVar2 + pfVar2[6] * pfVar2[6]);
  *param_3 = fVar5;
  fVar4 = *pfVar2;
  fVar3 = pfVar2[3];
  fVar6 = pfVar2[4];
  fVar1 = pfVar2[1] * fVar3;
  _atan2f();
  *param_2 = fVar3;
  fVar3 = -pfVar2[6];
  _asinf();
  *param_7 = fVar3;
  fVar3 = pfVar2[7];
  _atan2f(fVar3,(-fVar1 + fVar6 * fVar4) / fVar5);
  *param_6 = fVar3;
  return;
}



/* Entry: 1095361ec; end: 109536233;  */

void FUN_1095361ec(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1095361ec(param_1,*param_2);
    FUN_1095361ec(param_1,param_2[1]);
    FUN_109536234(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109536234; end: 1095362eb;  */

void FUN_109536234(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x68) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x70);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x34));
  }
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 != param_1 + 0x80 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095362d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))();
    return;
  }
  return;
}



/* Entry: 1095362ec; end: 10953642f;  */

void FUN_1095362ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109536234(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109536430; end: 1095365df;  */

undefined8 * FUN_109536430(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110afbb20;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 10) = 0x42ff0000;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = param_1 + 0xb;
  param_1[0x13] = param_1 + 0x14;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x42ff0000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x1e] = param_1 + 0x17;
  param_1[0x1f] = param_1 + 0x20;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x42ff0000;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  param_1[0x2b] = param_1 + 0x24;
  param_1[0x2c] = param_1 + 0x2d;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0x1000000002;
  param_1[0x32] = 0x500000001;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0x3e99999a3ecccccd;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0x3fc000003ecccccd;
  *(undefined4 *)((long)param_1 + 0x1c4) = 6;
  param_1[0x39] = 0x200000002;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  uVar1 = 0x148;
  __Znwm();
  FUN_109539344();
  param_1[0x3b] = uVar1;
  return param_1;
}



/* Entry: 1095365e0; end: 1095367e3;  */

undefined8 * FUN_1095365e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110afbb20;
  plVar5 = (long *)param_1[0x3b];
  param_1[0x3b] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_28 = param_1 + 0x2f;
  FUN_1093702c4(&puStack_28);
  if (param_1[0x2a] != 0) {
    piVar1 = (int *)(param_1[0x2a] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x23);
    }
  }
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  if (0 < *(int *)((long)param_1 + 0x11c)) {
    lVar6 = 0;
    lVar8 = param_1[0x2b];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x11c));
  }
  puVar7 = (undefined8 *)param_1[0x2c];
  if (puVar7 != param_1 + 0x2d && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x1d] != 0) {
    piVar1 = (int *)(param_1[0x1d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x16);
    }
  }
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  if (0 < *(int *)((long)param_1 + 0xb4)) {
    lVar6 = 0;
    lVar8 = param_1[0x1e];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xb4));
  }
  puVar7 = (undefined8 *)param_1[0x1f];
  if (puVar7 != param_1 + 0x20 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x11] != 0) {
    piVar1 = (int *)(param_1[0x11] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 10);
    }
  }
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (0 < *(int *)((long)param_1 + 0x54)) {
    lVar6 = 0;
    lVar8 = param_1[0x12];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x54));
  }
  puVar7 = (undefined8 *)param_1[0x13];
  if (puVar7 != param_1 + 0x14 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  puStack_28 = param_1 + 7;
  func_0x0001093957f8(&puStack_28);
  puStack_28 = param_1 + 4;
  func_0x0001093957f8(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095367e4; end: 1095367e7;  */

undefined8 * FUN_1095367e4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110afbb20;
  plVar5 = (long *)param_1[0x3b];
  param_1[0x3b] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_28 = param_1 + 0x2f;
  FUN_1093702c4(&puStack_28);
  if (param_1[0x2a] != 0) {
    piVar1 = (int *)(param_1[0x2a] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x23);
    }
  }
  param_1[0x2a] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  if (0 < *(int *)((long)param_1 + 0x11c)) {
    lVar6 = 0;
    lVar8 = param_1[0x2b];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x11c));
  }
  puVar7 = (undefined8 *)param_1[0x2c];
  if (puVar7 != param_1 + 0x2d && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x1d] != 0) {
    piVar1 = (int *)(param_1[0x1d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x16);
    }
  }
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  if (0 < *(int *)((long)param_1 + 0xb4)) {
    lVar6 = 0;
    lVar8 = param_1[0x1e];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xb4));
  }
  puVar7 = (undefined8 *)param_1[0x1f];
  if (puVar7 != param_1 + 0x20 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x11] != 0) {
    piVar1 = (int *)(param_1[0x11] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 10);
    }
  }
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (0 < *(int *)((long)param_1 + 0x54)) {
    lVar6 = 0;
    lVar8 = param_1[0x12];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x54));
  }
  puVar7 = (undefined8 *)param_1[0x13];
  if (puVar7 != param_1 + 0x14 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  puStack_28 = param_1 + 7;
  func_0x0001093957f8(&puStack_28);
  puStack_28 = param_1 + 4;
  func_0x0001093957f8(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095367e8; end: 1095367fb;  */

void FUN_1095367e8(void)

{
  FUN_1095365e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095367fc; end: 1095378b7;  */

void FUN_1095367fc(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  ulong uVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar31;
  int iVar32;
  ulong uVar30;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fStack_338;
  float fStack_334;
  ulong uStack_330;
  ulong uStack_328;
  undefined4 *puStack_320;
  ulong uStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_158;
  undefined8 uStack_154;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  int *piStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  long lStack_f0;
  float *pfStack_e8;
  long lStack_e0;
  float *pfStack_d8;
  undefined4 *puStack_d0;
  long lStack_c8;
  float *pfStack_c0;
  long lStack_b8;
  float *pfStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar33 = param_3;
  if (param_2 <= param_3) {
    iVar33 = param_2;
  }
  uVar1 = (int)((float)iVar33 * 0.7);
  if (param_6 != 0) {
    uVar1 = param_6;
  }
  uVar2 = uVar1;
  if (param_7 != 0) {
    uVar2 = param_7;
  }
  uVar15 = (uint)(*(float *)(param_1 + 0x1c0) * (float)iVar33);
  if ((int)uVar1 <= (int)uVar15) {
    uVar1 = uVar15;
  }
  uVar18 = (ulong)uVar1;
  if ((int)uVar2 <= (int)uVar15) {
    uVar2 = uVar15;
  }
  uVar19 = (ulong)uVar2;
  _frexpf((float)(iVar33 / 10),&iStack_2c4);
  uVar15 = iStack_2c4 - *(int *)(param_1 + 0x1c4);
  uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 400) = uVar15;
  uVar38 = iStack_2c4 - *(int *)(param_1 + 0x1c8);
  uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x194) = uVar38;
  uVar15 = *(int *)(param_1 + 0x1cc) + uVar15;
  if ((int)uVar15 <= (int)uVar38) {
    uVar38 = uVar15;
  }
  *(uint *)(param_1 + 0x198) = uVar38;
  fVar20 = *(float *)(param_1 + 0x1a0);
  if (fVar20 <= 0.0) {
    iStack_2c8 = *(int *)(param_1 + 0x19c);
    uStack_2d0 = 0;
    pfVar10 = (float *)(param_1 + 8);
    uVar11 = uVar19;
    FUN_1095378b8(&uStack_2c0,param_4,param_5,uVar18);
    uVar37 = uStack_2bc;
    uVar38 = uStack_2c0;
    uVar9 = (undefined4)uVar11;
    uStack_158 = 0x42ff0000;
    piStack_118 = (int *)((long)&uStack_154 + 4);
    iStack_14c = 0;
    uStack_148 = 0;
    uStack_154 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_12c = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_d0 = (undefined4 *)0x100000003;
    puStack_110 = &uStack_108;
    FUN_109a83fd0(&uStack_158,2,&puStack_d0,5);
    uVar15 = *(uint *)((ulong)&uStack_158 | 4);
    uVar11 = (ulong)uVar15;
    if ((int)uVar15 < 1) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = puStack_110[uVar11 - 1];
    }
    pfStack_c0 = (float *)0x0;
    lStack_b8 = 0;
    pfStack_b0 = (float *)0x0;
    if ((uStack_158._1_1_ >> 6 & 1) != 0) {
      lStack_b8 = CONCAT44(uStack_144,uStack_148);
      if ((int)uVar15 < 3) {
        lVar16 = (long)iStack_14c * (long)uStack_154._4_4_;
      }
      else {
        lVar16 = 1;
        piVar17 = piStack_118;
        do {
          lVar16 = lVar16 * *piVar17;
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar11 != 0);
      }
      pfStack_b0 = (float *)(lStack_b8 + lVar16 * lStack_c8);
    }
    puStack_d0 = &uStack_158;
    FUN_109a9bb94(&puStack_d0,0,0);
    *pfStack_c0 = (float)(int)param_4;
    pfVar6 = pfStack_c0;
    if ((puStack_d0 != (undefined4 *)0x0) &&
       (pfVar6 = (float *)((long)pfStack_c0 + lStack_c8),
       pfStack_b0 <= (float *)((long)pfStack_c0 + lStack_c8))) {
      FUN_109a9bb94(&puStack_d0,1,1);
      pfVar6 = pfStack_c0;
    }
    lStack_e0 = lStack_b8;
    *pfVar6 = (float)(int)param_5;
    pfStack_e8 = (float *)((long)pfVar6 + lStack_c8);
    puStack_f8 = puStack_d0;
    lStack_f0 = lStack_c8;
    pfStack_d8 = pfStack_b0;
    if (pfStack_e8 < pfStack_b0) {
      *pfStack_e8 = 1.0;
    }
    else {
      pfStack_e8 = pfVar6;
      FUN_109a9bb94(&puStack_f8,1,1);
      *pfStack_e8 = 1.0;
    }
    pfVar6 = (float *)((long)pfStack_e8 + lStack_f0);
    if (pfStack_d8 <= (float *)((long)pfStack_e8 + lStack_f0)) {
      FUN_109a9bb94(&puStack_f8,1,1);
      pfVar6 = pfStack_e8;
    }
    pfStack_e8 = pfVar6;
    uStack_288 = 0;
    uStack_28c = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uVar11 = (ulong)&uStack_2c0 | 8;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_2c0 = 0x42ff0005;
    uStack_280 = uVar11;
    puStack_278 = &uStack_270;
    FUN_109390e94(&uStack_2c0,puStack_f8);
    if (*(long *)(param_1 + 0x88) != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0x88) + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x50);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      lVar16 = 0;
      lVar12 = *(long *)(param_1 + 0x90);
      do {
        *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x54));
    }
    *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_2b4,uStack_2b8);
    *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_2bc,uStack_2c0);
    *(ulong *)(param_1 + 0x68) = CONCAT44(uStack_2a4,uStack_2a8);
    *(ulong *)(param_1 + 0x60) = CONCAT44(uStack_2ac,uStack_2b0);
    *(ulong *)(param_1 + 0x78) = CONCAT44(uStack_294,uStack_298);
    *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_29c,uStack_2a0);
    *(undefined8 *)(param_1 + 0x88) = uStack_288;
    *(ulong *)(param_1 + 0x80) = CONCAT44(uStack_28c,uStack_290);
    puVar13 = *(undefined8 **)(param_1 + 0x98);
    puVar14 = (undefined8 *)(param_1 + 0xa0);
    if (puVar13 != puVar14) {
      uVar18 = param_1 + 0x58;
      if (puVar13 != (undefined8 *)0x0) {
        _free(puVar13[-1]);
      }
      *(ulong *)(param_1 + 0x90) = uVar18;
      *(undefined8 **)(param_1 + 0x98) = puVar14;
      puVar13 = puVar14;
    }
    puVar14 = (undefined8 *)((ulong)&uStack_2c0 | 4);
    if ((int)uStack_2bc < 3) {
      *puVar13 = *puStack_278;
      puVar13[1] = puStack_278[1];
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (puStack_278 != &uStack_270) {
        _free(puStack_278[-1]);
      }
    }
    else {
      *(ulong *)(param_1 + 0x90) = uStack_280;
      *(undefined8 **)(param_1 + 0x98) = puStack_278;
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      uStack_280 = uVar11;
      puStack_278 = &uStack_270;
    }
    if (lStack_120 != 0) {
      piVar17 = (int *)(lStack_120 + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    lStack_120 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (0 < (int)uStack_154) {
      lVar16 = 0;
      do {
        piStack_118[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_154);
    }
    if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
      _free(puStack_110[-1]);
    }
    uStack_158 = 0x42ff0000;
    iStack_14c = 0;
    uStack_148 = 0;
    uStack_154 = 0;
    piStack_118 = (int *)((long)&uStack_154 + 4);
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_12c = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_d0 = (undefined4 *)0x100000003;
    puStack_110 = &uStack_108;
    FUN_109a83fd0(&uStack_158,2,&puStack_d0,5);
    uVar15 = *(uint *)((ulong)&uStack_158 | 4);
    uVar11 = (ulong)uVar15;
    if ((int)uVar15 < 1) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = puStack_110[uVar11 - 1];
    }
    pfStack_c0 = (float *)0x0;
    lStack_b8 = 0;
    pfStack_b0 = (float *)0x0;
    if ((uStack_158._1_1_ >> 6 & 1) != 0) {
      lStack_b8 = CONCAT44(uStack_144,uStack_148);
      if ((int)uVar15 < 3) {
        lVar16 = (long)iStack_14c * (long)uStack_154._4_4_;
      }
      else {
        lVar16 = 1;
        piVar17 = piStack_118;
        do {
          lVar16 = lVar16 * *piVar17;
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar11 != 0);
      }
      pfStack_b0 = (float *)(lStack_b8 + lVar16 * lStack_c8);
    }
    puStack_d0 = &uStack_158;
    FUN_109a9bb94(&puStack_d0,0,0);
    *pfStack_c0 = (float)uVar38;
    pfVar6 = pfStack_c0;
    if ((puStack_d0 != (undefined4 *)0x0) &&
       (pfVar6 = (float *)((long)pfStack_c0 + lStack_c8),
       pfStack_b0 <= (uint *)((long)pfStack_c0 + lStack_c8))) {
      FUN_109a9bb94(&puStack_d0,1,1);
      pfVar6 = pfStack_c0;
    }
    lStack_e0 = lStack_b8;
    *pfVar6 = (float)uVar37;
    pfStack_e8 = (float *)((long)pfVar6 + lStack_c8);
    puStack_f8 = puStack_d0;
    lStack_f0 = lStack_c8;
    pfStack_d8 = pfStack_b0;
    if (pfStack_e8 < pfStack_b0) {
      *pfStack_e8 = 1.0;
    }
    else {
      pfStack_e8 = pfVar6;
      FUN_109a9bb94(&puStack_f8,1,1);
      *pfStack_e8 = 1.0;
    }
    pfVar6 = (float *)((long)pfStack_e8 + lStack_f0);
    if (pfStack_d8 <= (uint *)((long)pfStack_e8 + lStack_f0)) {
      FUN_109a9bb94(&puStack_f8,1,1);
      pfVar6 = pfStack_e8;
    }
    pfStack_e8 = pfVar6;
    uStack_288 = 0;
    uStack_28c = 0;
    uVar11 = (ulong)&uStack_2c0 | 8;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_2c0 = 0x42ff0005;
    uStack_280 = uVar11;
    puStack_278 = &uStack_270;
    FUN_109390e94(&uStack_2c0,puStack_f8);
    if (*(long *)(param_1 + 0xe8) != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0xe8) + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0xb0);
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      lVar16 = 0;
      lVar12 = *(long *)(param_1 + 0xf0);
      do {
        *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0xb4));
    }
    *(ulong *)(param_1 + 0xb8) = CONCAT44(uStack_2b4,uStack_2b8);
    *(ulong *)(param_1 + 0xb0) = CONCAT44(uStack_2bc,uStack_2c0);
    *(ulong *)(param_1 + 200) = CONCAT44(uStack_2a4,uStack_2a8);
    *(ulong *)(param_1 + 0xc0) = CONCAT44(uStack_2ac,uStack_2b0);
    *(ulong *)(param_1 + 0xd8) = CONCAT44(uStack_294,uStack_298);
    *(ulong *)(param_1 + 0xd0) = CONCAT44(uStack_29c,uStack_2a0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_288;
    *(ulong *)(param_1 + 0xe0) = CONCAT44(uStack_28c,uStack_290);
    puVar13 = *(undefined8 **)(param_1 + 0xf8);
    puVar14 = (undefined8 *)(param_1 + 0x100);
    if (puVar13 != puVar14) {
      uVar18 = param_1 + 0xb8;
      if (puVar13 != (undefined8 *)0x0) {
        _free(puVar13[-1]);
      }
      *(ulong *)(param_1 + 0xf0) = uVar18;
      *(undefined8 **)(param_1 + 0xf8) = puVar14;
      puVar13 = puVar14;
    }
    puVar14 = (undefined8 *)((ulong)&uStack_2c0 | 4);
    if ((int)uStack_2bc < 3) {
      *puVar13 = *puStack_278;
      puVar13[1] = puStack_278[1];
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (puStack_278 != &uStack_270) {
        _free(puStack_278[-1]);
      }
    }
    else {
      *(ulong *)(param_1 + 0xf0) = uStack_280;
      *(undefined8 **)(param_1 + 0xf8) = puStack_278;
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      uStack_280 = uVar11;
      puStack_278 = &uStack_270;
    }
    if (lStack_120 != 0) {
      piVar17 = (int *)(lStack_120 + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    lStack_120 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (0 < (int)uStack_154) {
      lVar16 = 0;
      do {
        piStack_118[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_154);
    }
    if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
      _free(puStack_110[-1]);
    }
    *(uint *)(param_1 + 0x110) = uVar1;
    *(uint *)(param_1 + 0x114) = uVar2;
    FUN_109a82c84(&uStack_2c0,3,3,5);
    iVar33 = (int)&uStack_2c0;
    iVar34 = (int)param_1 + 0x118;
    uVar8 = 0xffffffff;
    (**(code **)(*(long *)CONCAT44(uStack_2bc,uStack_2c0) + 0x18))();
  }
  else {
    fVar22 = *(float *)(param_1 + 0x1a4);
    fVar24 = *(float *)(param_1 + 0x1a8);
    fVar36 = ((float)(int)param_4 - fVar22) / fVar20;
    fVar39 = ((float)(int)param_5 - fVar24) / fVar20;
    iVar33 = 5;
    fVar27 = fVar36;
    fVar35 = fVar39;
    do {
      fVar27 = fVar35 * fVar35 + fVar27 * fVar27;
      fVar35 = 1.0 / (fVar27 * *(float *)(param_1 + 0x1ac) + 1.0 +
                     fVar27 * *(float *)(param_1 + 0x1b0) * fVar27);
      fVar27 = fVar36 * fVar35;
      fVar35 = fVar39 * fVar35;
      iVar33 = iVar33 + -1;
    } while (iVar33 != 0);
    fVar36 = (float)param_2;
    fVar39 = (float)param_3;
    param_2 = (int)(fVar22 + fVar36 * 0.6);
    param_3 = (int)(fVar24 + fVar39 * 0.6);
    fVar27 = fVar22 + fVar27 * fVar20;
    fVar20 = fVar24 + fVar35 * fVar20;
    iStack_2c8 = *(int *)(param_1 + 0x19c);
    pfVar10 = (float *)(param_1 + 8);
    uStack_2d0 = CONCAT44((int)(fVar24 - fVar39 * 0.6),(int)(fVar22 - fVar36 * 0.6));
    uVar11 = uVar19;
    FUN_1095378b8(&uStack_2c0,(int)fVar27,(int)fVar20,uVar18);
    uVar37 = uStack_2bc;
    uVar38 = uStack_2c0;
    uVar9 = (undefined4)uVar11;
    uStack_158 = 0x42ff0000;
    piStack_118 = (int *)((long)&uStack_154 + 4);
    iStack_14c = 0;
    uStack_148 = 0;
    uStack_154 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_12c = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_d0 = (undefined4 *)0x100000003;
    puStack_110 = &uStack_108;
    FUN_109a83fd0(&uStack_158,2,&puStack_d0,5);
    uVar15 = *(uint *)((ulong)&uStack_158 | 4);
    uVar11 = (ulong)uVar15;
    if ((int)uVar15 < 1) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = puStack_110[uVar11 - 1];
    }
    pfStack_c0 = (float *)0x0;
    lStack_b8 = 0;
    pfStack_b0 = (float *)0x0;
    if ((uStack_158._1_1_ >> 6 & 1) != 0) {
      lStack_b8 = CONCAT44(uStack_144,uStack_148);
      if ((int)uVar15 < 3) {
        lVar16 = (long)iStack_14c * (long)uStack_154._4_4_;
      }
      else {
        lVar16 = 1;
        piVar17 = piStack_118;
        do {
          lVar16 = lVar16 * *piVar17;
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar11 != 0);
      }
      pfStack_b0 = (float *)(lStack_b8 + lVar16 * lStack_c8);
    }
    puStack_d0 = &uStack_158;
    FUN_109a9bb94(&puStack_d0,0,0);
    *pfStack_c0 = fVar27;
    pfVar6 = pfStack_c0;
    if ((puStack_d0 != (undefined4 *)0x0) &&
       (pfVar6 = (float *)((long)pfStack_c0 + lStack_c8),
       pfStack_b0 <= (float *)((long)pfStack_c0 + lStack_c8))) {
      FUN_109a9bb94(&puStack_d0,1,1);
      pfVar6 = pfStack_c0;
    }
    lStack_e0 = lStack_b8;
    *pfVar6 = fVar20;
    pfStack_e8 = (float *)((long)pfVar6 + lStack_c8);
    puStack_f8 = puStack_d0;
    lStack_f0 = lStack_c8;
    pfStack_d8 = pfStack_b0;
    if (pfStack_e8 < pfStack_b0) {
      *pfStack_e8 = 1.0;
    }
    else {
      pfStack_e8 = pfVar6;
      FUN_109a9bb94(&puStack_f8,1,1);
      *pfStack_e8 = 1.0;
    }
    pfVar6 = (float *)((long)pfStack_e8 + lStack_f0);
    if (pfStack_d8 <= (float *)((long)pfStack_e8 + lStack_f0)) {
      FUN_109a9bb94(&puStack_f8,1,1);
      pfVar6 = pfStack_e8;
    }
    pfStack_e8 = pfVar6;
    uStack_288 = 0;
    uStack_28c = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uVar11 = (ulong)&uStack_2c0 | 8;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_2c0 = 0x42ff0005;
    uStack_280 = uVar11;
    puStack_278 = &uStack_270;
    FUN_109390e94(&uStack_2c0,puStack_f8);
    if (*(long *)(param_1 + 0x88) != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0x88) + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x50);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      lVar16 = 0;
      lVar12 = *(long *)(param_1 + 0x90);
      do {
        *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x54));
    }
    *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_2b4,uStack_2b8);
    *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_2bc,uStack_2c0);
    *(ulong *)(param_1 + 0x68) = CONCAT44(uStack_2a4,uStack_2a8);
    *(ulong *)(param_1 + 0x60) = CONCAT44(uStack_2ac,uStack_2b0);
    *(ulong *)(param_1 + 0x78) = CONCAT44(uStack_294,uStack_298);
    *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_29c,uStack_2a0);
    *(undefined8 *)(param_1 + 0x88) = uStack_288;
    *(ulong *)(param_1 + 0x80) = CONCAT44(uStack_28c,uStack_290);
    puVar13 = *(undefined8 **)(param_1 + 0x98);
    puVar14 = (undefined8 *)(param_1 + 0xa0);
    if (puVar13 != puVar14) {
      uVar18 = param_1 + 0x58;
      if (puVar13 != (undefined8 *)0x0) {
        _free(puVar13[-1]);
      }
      *(ulong *)(param_1 + 0x90) = uVar18;
      *(undefined8 **)(param_1 + 0x98) = puVar14;
      puVar13 = puVar14;
    }
    puVar14 = (undefined8 *)((ulong)&uStack_2c0 | 4);
    if ((int)uStack_2bc < 3) {
      *puVar13 = *puStack_278;
      puVar13[1] = puStack_278[1];
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (puStack_278 != &uStack_270) {
        _free(puStack_278[-1]);
      }
    }
    else {
      *(ulong *)(param_1 + 0x90) = uStack_280;
      *(undefined8 **)(param_1 + 0x98) = puStack_278;
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      uStack_280 = uVar11;
      puStack_278 = &uStack_270;
    }
    if (lStack_120 != 0) {
      piVar17 = (int *)(lStack_120 + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    lStack_120 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (0 < (int)uStack_154) {
      lVar16 = 0;
      do {
        piStack_118[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_154);
    }
    if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
      _free(puStack_110[-1]);
    }
    uStack_158 = 0x42ff0000;
    iStack_14c = 0;
    uStack_148 = 0;
    uStack_154 = 0;
    piStack_118 = (int *)((long)&uStack_154 + 4);
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_12c = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_d0 = (undefined4 *)0x100000003;
    puStack_110 = &uStack_108;
    FUN_109a83fd0(&uStack_158,2,&puStack_d0,5);
    uVar15 = *(uint *)((ulong)&uStack_158 | 4);
    uVar11 = (ulong)uVar15;
    if ((int)uVar15 < 1) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = puStack_110[uVar11 - 1];
    }
    pfStack_c0 = (float *)0x0;
    lStack_b8 = 0;
    pfStack_b0 = (float *)0x0;
    if ((uStack_158._1_1_ >> 6 & 1) != 0) {
      lStack_b8 = CONCAT44(uStack_144,uStack_148);
      if ((int)uVar15 < 3) {
        lVar16 = (long)iStack_14c * (long)uStack_154._4_4_;
      }
      else {
        lVar16 = 1;
        piVar17 = piStack_118;
        do {
          lVar16 = lVar16 * *piVar17;
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar11 != 0);
      }
      pfStack_b0 = (float *)(lStack_b8 + lVar16 * lStack_c8);
    }
    puStack_d0 = &uStack_158;
    FUN_109a9bb94(&puStack_d0,0,0);
    *pfStack_c0 = (float)uVar38;
    pfVar6 = pfStack_c0;
    if ((puStack_d0 != (undefined4 *)0x0) &&
       (pfVar6 = (float *)((long)pfStack_c0 + lStack_c8),
       pfStack_b0 <= (uint *)((long)pfStack_c0 + lStack_c8))) {
      FUN_109a9bb94(&puStack_d0,1,1);
      pfVar6 = pfStack_c0;
    }
    lStack_e0 = lStack_b8;
    *pfVar6 = (float)uVar37;
    pfStack_e8 = (float *)((long)pfVar6 + lStack_c8);
    puStack_f8 = puStack_d0;
    lStack_f0 = lStack_c8;
    pfStack_d8 = pfStack_b0;
    if (pfStack_e8 < pfStack_b0) {
      *pfStack_e8 = 1.0;
    }
    else {
      pfStack_e8 = pfVar6;
      FUN_109a9bb94(&puStack_f8,1,1);
      *pfStack_e8 = 1.0;
    }
    pfVar6 = (float *)((long)pfStack_e8 + lStack_f0);
    if (pfStack_d8 <= (uint *)((long)pfStack_e8 + lStack_f0)) {
      FUN_109a9bb94(&puStack_f8,1,1);
      pfVar6 = pfStack_e8;
    }
    pfStack_e8 = pfVar6;
    uStack_288 = 0;
    uStack_28c = 0;
    uVar11 = (ulong)&uStack_2c0 | 8;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_2c0 = 0x42ff0005;
    uStack_280 = uVar11;
    puStack_278 = &uStack_270;
    FUN_109390e94(&uStack_2c0,puStack_f8);
    if (*(long *)(param_1 + 0xe8) != 0) {
      piVar17 = (int *)(*(long *)(param_1 + 0xe8) + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0xb0);
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      lVar16 = 0;
      lVar12 = *(long *)(param_1 + 0xf0);
      do {
        *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0xb4));
    }
    *(ulong *)(param_1 + 0xb8) = CONCAT44(uStack_2b4,uStack_2b8);
    *(ulong *)(param_1 + 0xb0) = CONCAT44(uStack_2bc,uStack_2c0);
    *(ulong *)(param_1 + 200) = CONCAT44(uStack_2a4,uStack_2a8);
    *(ulong *)(param_1 + 0xc0) = CONCAT44(uStack_2ac,uStack_2b0);
    *(ulong *)(param_1 + 0xd8) = CONCAT44(uStack_294,uStack_298);
    *(ulong *)(param_1 + 0xd0) = CONCAT44(uStack_29c,uStack_2a0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_288;
    *(ulong *)(param_1 + 0xe0) = CONCAT44(uStack_28c,uStack_290);
    puVar13 = *(undefined8 **)(param_1 + 0xf8);
    puVar14 = (undefined8 *)(param_1 + 0x100);
    if (puVar13 != puVar14) {
      uVar18 = param_1 + 0xb8;
      if (puVar13 != (undefined8 *)0x0) {
        _free(puVar13[-1]);
      }
      *(ulong *)(param_1 + 0xf0) = uVar18;
      *(undefined8 **)(param_1 + 0xf8) = puVar14;
      puVar13 = puVar14;
    }
    puVar14 = (undefined8 *)((ulong)&uStack_2c0 | 4);
    if ((int)uStack_2bc < 3) {
      *puVar13 = *puStack_278;
      puVar13[1] = puStack_278[1];
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (puStack_278 != &uStack_270) {
        _free(puStack_278[-1]);
      }
    }
    else {
      *(ulong *)(param_1 + 0xf0) = uStack_280;
      *(undefined8 **)(param_1 + 0xf8) = puStack_278;
      uStack_2c0 = 0x42ff0000;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      uStack_280 = uVar11;
      puStack_278 = &uStack_270;
    }
    if (lStack_120 != 0) {
      piVar17 = (int *)(lStack_120 + 0x14);
      do {
        iVar33 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    lStack_120 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (0 < (int)uStack_154) {
      lVar16 = 0;
      do {
        piStack_118[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_154);
    }
    if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
      _free(puStack_110[-1]);
    }
    *(uint *)(param_1 + 0x110) = uVar1;
    *(uint *)(param_1 + 0x114) = uVar2;
    FUN_109a82c84(&uStack_2c0,3,3,5);
    iVar33 = (int)&uStack_2c0;
    iVar34 = (int)param_1 + 0x118;
    uVar8 = 0xffffffff;
    (**(code **)(*(long *)CONCAT44(uStack_2bc,uStack_2c0) + 0x18))();
  }
  FUN_10918eb6c(&uStack_2c0);
  FUN_109395838(param_1 + 0x20);
  puVar14 = (undefined8 *)(param_1 + 0x38);
  FUN_109395838();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar33 != 0) {
    func_0x000104bd46a0();
    FUN_10938f90c(&uStack_2c0);
    FUN_10938f90c(&uStack_158);
  }
  puVar5 = puVar14;
  __Unwind_Resume();
  pcStack_2d8 = FUN_1095378b8;
  uVar25 = NEON_smin(CONCAT44(param_3 - uStack_2d0._4_4_,param_2 - (int)uStack_2d0),
                     CONCAT44(uVar9,uVar8),4);
  iVar28 = (int)uVar25 >> 1;
  iVar26 = (int)(uVar25 >> 0x20);
  iVar31 = iVar26 >> 1;
  iVar29 = iVar33 - iVar28;
  iVar32 = iVar34 - iVar31;
  iVar33 = iVar33 + iVar28;
  iVar34 = iVar34 + iVar31;
  uVar23 = NEON_smax(CONCAT44(iVar32,iVar29),uStack_2d0,4);
  uVar30 = CONCAT44(iVar34,iVar33) ^
           (CONCAT44(iVar34,iVar33) ^ uVar25) &
           CONCAT44(-(uint)(iVar32 < uStack_2d0._4_4_),-(uint)(iVar29 < (int)uStack_2d0));
  uVar23 = uVar23 ^ (uVar23 ^ CONCAT44(param_3 - iVar26,param_2 - (int)uVar25)) &
                    CONCAT44(-(uint)(param_3 < (int)(uVar30 >> 0x20)),-(uint)(param_2 < (int)uVar30)
                            );
  uVar21 = NEON_smin(uVar30,CONCAT44(param_3,param_2),4);
  iVar34 = (int)uVar23;
  iVar26 = (int)uVar21;
  iVar29 = (int)(uVar23 >> 0x20);
  iVar28 = (int)((ulong)uVar21 >> 0x20);
  iVar33 = iVar28 - iVar29;
  if (iVar26 - iVar34 <= iVar28 - iVar29) {
    iVar33 = iVar26 - iVar34;
  }
  pfVar6 = *(float **)pfVar10;
  *(float **)(pfVar10 + 2) = pfVar6;
  if (iVar29 < iVar28) {
    iVar32 = 0;
    iVar31 = iVar29;
    uStack_330 = (ulong)uVar38;
    uStack_328 = (ulong)uVar37;
    puStack_320 = &uStack_158;
    uStack_318 = uVar11;
    puStack_310 = &uStack_270;
    puStack_308 = &uStack_108;
    puStack_300 = puVar13;
    uStack_2f8 = uVar19;
    uStack_2f0 = uVar18;
    puStack_2e8 = puVar14;
    puStack_2e0 = &stack0xfffffffffffffff0;
    if (iStack_2c8 != 0) {
      iVar32 = iVar33 / iStack_2c8;
    }
    do {
      if (iVar34 < iVar26) {
        pfVar7 = pfVar6;
        iVar33 = iVar34;
        do {
          fStack_338 = (float)iVar33;
          if (pfVar7 < *(float **)(pfVar10 + 4)) {
            pfVar6 = pfVar7 + 2;
            *pfVar7 = fStack_338;
            pfVar7[1] = (float)iVar31;
          }
          else {
            pfVar6 = pfVar10;
            fStack_334 = (float)iVar31;
            FUN_1092de294(pfVar10,&fStack_338);
          }
          *(float **)(pfVar10 + 2) = pfVar6;
          iVar33 = iVar33 + iVar32;
          pfVar7 = pfVar6;
        } while (iVar33 < iVar26);
      }
      iVar31 = iVar31 + iVar32;
    } while (iVar31 < iVar28);
  }
  uVar21 = NEON_scvtf(CONCAT44((iVar29 + iVar28) / 2,(iVar34 + iVar26) / 2),4);
  *puVar5 = uVar21;
  return;
}



/* Entry: 1095378b8; end: 1095379ff;  */

void FUN_1095378b8(undefined8 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,float *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  ulong uVar11;
  float fStack_68;
  float fStack_64;
  
  uVar7 = NEON_smin(CONCAT44(param_8 - param_10,param_7 - param_9),CONCAT44(param_5,param_4),4);
  iVar9 = (int)uVar7 >> 1;
  iVar8 = (int)(uVar7 >> 0x20);
  iVar12 = iVar8 >> 1;
  iVar10 = param_2 - iVar9;
  iVar13 = param_3 - iVar12;
  param_2 = param_2 + iVar9;
  param_3 = param_3 + iVar12;
  uVar6 = NEON_smax(CONCAT44(iVar13,iVar10),CONCAT44(param_10,param_9),4);
  uVar11 = CONCAT44(param_3,param_2) ^
           (CONCAT44(param_3,param_2) ^ uVar7) &
           CONCAT44(-(uint)(iVar13 < param_10),-(uint)(iVar10 < param_9));
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(param_8 - iVar8,param_7 - (int)uVar7)) &
                  CONCAT44(-(uint)(param_8 < (int)(uVar11 >> 0x20)),-(uint)(param_7 < (int)uVar11));
  uVar5 = NEON_smin(uVar11,CONCAT44(param_8,param_7),4);
  iVar9 = (int)uVar6;
  iVar10 = (int)uVar5;
  iVar13 = (int)(uVar6 >> 0x20);
  iVar12 = (int)((ulong)uVar5 >> 0x20);
  iVar8 = iVar12 - iVar13;
  if (iVar10 - iVar9 <= iVar12 - iVar13) {
    iVar8 = iVar10 - iVar9;
  }
  pfVar2 = *(float **)param_6;
  *(float **)(param_6 + 2) = pfVar2;
  if (iVar13 < iVar12) {
    iVar1 = 0;
    iVar4 = iVar13;
    if (param_11 != 0) {
      iVar1 = iVar8 / param_11;
    }
    do {
      if (iVar9 < iVar10) {
        pfVar3 = pfVar2;
        iVar8 = iVar9;
        do {
          fStack_68 = (float)iVar8;
          if (pfVar3 < *(float **)(param_6 + 4)) {
            pfVar2 = pfVar3 + 2;
            *pfVar3 = fStack_68;
            pfVar3[1] = (float)iVar4;
          }
          else {
            pfVar2 = param_6;
            fStack_64 = (float)iVar4;
            FUN_1092de294(param_6,&fStack_68);
          }
          *(float **)(param_6 + 2) = pfVar2;
          iVar8 = iVar8 + iVar1;
          pfVar3 = pfVar2;
        } while (iVar8 < iVar10);
      }
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < iVar12);
  }
  uVar5 = NEON_scvtf(CONCAT44((iVar13 + iVar12) / 2,(iVar9 + iVar10) / 2),4);
  *param_1 = uVar5;
  return;
}



/* Entry: 109537a00; end: 1095380c3;  */

long * FUN_109537a00(long param_1,long *param_2,long *param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long *plStack_1b8;
  long lStack_1b0;
  undefined4 uStack_128;
  int iStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  plVar19 = (long *)(param_1 + 8);
  if (*plVar19 == *(long *)(param_1 + 0x10)) {
    return (long *)0x0;
  }
  plVar13 = (long *)((param_2[1] - *param_2 >> 5) * -0x5555555555555555);
  func_0x000109516d68(param_1 + 0x178);
  lVar14 = *(long *)(param_1 + 0x178);
  lVar16 = *(long *)(param_1 + 0x180);
  if (lVar16 != lVar14) {
    uVar23 = 0;
    do {
      if (lVar14 != *param_2) {
        plVar20 = (long *)(*param_2 + uVar23 * 0x60);
        if (plVar20[7] != 0) {
          piVar1 = (int *)(plVar20[7] + 0x14);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        puVar2 = (undefined4 *)(lVar14 + uVar23 * 0x60);
        if (*(long *)(puVar2 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar2 + 0xe) + 0x14);
          do {
            iVar3 = *piVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar3 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(puVar2);
          }
        }
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        if ((int)puVar2[1] < 1) {
          *puVar2 = (int)*plVar20;
LAB_109537b14:
          if (2 < *(int *)((long)plVar20 + 4)) goto LAB_109537b48;
          puVar2[1] = *(int *)((long)plVar20 + 4);
          *(long *)(puVar2 + 2) = plVar20[1];
          puVar15 = (undefined8 *)plVar20[9];
          puVar18 = *(undefined8 **)(puVar2 + 0x12);
          *puVar18 = *puVar15;
          puVar18[1] = puVar15[1];
        }
        else {
          lVar14 = 0;
          lVar16 = *(long *)(puVar2 + 0x10);
          do {
            *(undefined4 *)(lVar16 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)puVar2[1]);
          *puVar2 = (int)*plVar20;
          if ((int)puVar2[1] < 3) goto LAB_109537b14;
LAB_109537b48:
          plVar13 = plVar20;
          func_0x000109a84868(puVar2);
        }
        lVar14 = plVar20[2];
        *(long *)(puVar2 + 6) = plVar20[3];
        *(long *)(puVar2 + 4) = lVar14;
        lVar14 = plVar20[4];
        *(long *)(puVar2 + 10) = plVar20[5];
        *(long *)(puVar2 + 8) = lVar14;
        lVar14 = plVar20[6];
        *(long *)(puVar2 + 0xe) = plVar20[7];
        *(long *)(puVar2 + 0xc) = lVar14;
        lVar14 = *(long *)(param_1 + 0x178);
        lVar16 = *(long *)(param_1 + 0x180);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)((lVar16 - lVar14 >> 5) * -0x5555555555555555));
  }
  uVar4 = *(undefined4 *)(lVar14 + 8);
  uVar5 = *(undefined4 *)(lVar14 + 0xc);
  plVar20 = (long *)(param_1 + 0x20);
  if (*plVar20 == *(long *)(param_1 + 0x28)) {
    param_4 = param_1 + 0x118;
    plVar13 = plVar19;
    param_3 = plVar20;
    FUN_1095380c4(param_1,plVar19,plVar20,param_4);
  }
  plVar24 = (long *)(param_1 + 0x38);
  lVar14 = *plVar24;
  lVar16 = *(long *)(param_1 + 0x40);
  if (lVar14 == lVar16) {
    plVar12 = *(long **)(param_1 + 0x20);
    plVar7 = *(long **)(param_1 + 0x28);
    if ((ulong)(*(long *)(param_1 + 0x48) - lVar14) < (ulong)((long)plVar7 - (long)plVar12)) {
      lVar14 = (long)plVar7 - (long)plVar12 >> 3;
      uVar23 = lVar14 * -0x5555555555555555;
      plVar11 = plVar24;
      func_0x000108a64d6c();
      if (0xaaaaaaaaaaaaaaa < uVar23) {
        FUN_1093957a0();
        *(ulong *)(param_1 + 0x40) = uVar23;
        __Unwind_Resume();
        plVar19 = plVar11;
        if (plVar11[0x2f] != plVar11[0x30]) {
          FUN_10941066c(&plStack_1b8,plVar13[1] - *plVar13 >> 3);
          lVar14 = *plVar13;
          if (0 < (int)((ulong)(plVar13[1] - lVar14) >> 3)) {
            lVar22 = plVar11[0x3b];
            lVar16 = (plVar13[1] - lVar14) * 0x20000000 >> 0x20;
            plVar19 = plStack_1b8;
            if (lVar16 < 2) {
              lVar16 = 1;
            }
            do {
              FUN_10953b6dc(&uStack_1c0,lVar22,param_4,lVar14);
              *plVar19 = CONCAT44(uStack_1bc,uStack_1c0);
              lVar14 = lVar14 + 8;
              lVar16 = lVar16 + -1;
              plVar19 = plVar19 + 1;
            } while (lVar16 != 0);
          }
          FUN_1095201f0(param_3,(plVar11[0x30] - plVar11[0x2f] >> 5) * -0x5555555555555555);
          lVar14 = plVar11[0x2f];
          plVar19 = plStack_1b8;
          if (0 < (int)((ulong)(plVar11[0x30] - lVar14) >> 5) * -0x55555555) {
            lVar16 = 0;
            lVar22 = lStack_1b0;
            do {
              lVar14 = lVar14 + lVar16 * 0x60;
              iVar3 = *(int *)(lVar14 + 8);
              iVar6 = *(int *)(lVar14 + 0xc);
              uStack_1c0 = 0;
              func_0x00010817850c(*param_3 + lVar16 * 0x18,lVar22 - (long)plVar19 >> 3,&uStack_1c0);
              plVar19 = plStack_1b8;
              lVar22 = lStack_1b0;
              if (0 < (int)((ulong)(lStack_1b0 - (long)plStack_1b8) >> 3)) {
                lVar25 = 0;
                lVar26 = 0;
                lVar14 = 0;
                fVar29 = (float)(iVar6 + -1 << (ulong)((uint)lVar16 & 0x1f));
                fVar30 = (float)(iVar3 + -1 << (ulong)((uint)lVar16 & 0x1f));
                do {
                  fVar27 = *(float *)((long)plVar19 + lVar25);
                  bVar9 = false;
                  bVar10 = false;
                  if (0.0 <= fVar27) {
                    bVar9 = false;
                    bVar10 = true;
                    if (!NAN(fVar27) && !NAN(fVar29)) {
                      bVar9 = fVar27 < fVar29;
                      bVar10 = false;
                    }
                  }
                  if (bVar9 != bVar10) {
                    fVar27 = ((float *)((long)plVar19 + lVar25))[1];
                    bVar9 = false;
                    bVar10 = false;
                    if (0.0 <= fVar27) {
                      bVar9 = false;
                      bVar10 = true;
                      if (!NAN(fVar27) && !NAN(fVar30)) {
                        bVar9 = fVar27 < fVar30;
                        bVar10 = false;
                      }
                    }
                    if (bVar9 != bVar10) {
                      FUN_10953aacc(plVar11[0x3b],plVar11[0x2f] + lVar16 * 0x60,
                                    *(long *)(*param_3 + lVar16 * 0x18) + lVar26,lVar16);
                      plVar19 = plStack_1b8;
                      lVar22 = lStack_1b0;
                    }
                  }
                  lVar14 = lVar14 + 1;
                  lVar26 = lVar26 + 4;
                  lVar25 = lVar25 + 8;
                } while (lVar14 < (int)((ulong)(lVar22 - (long)plVar19) >> 3));
              }
              lVar16 = lVar16 + 1;
              lVar14 = plVar11[0x2f];
            } while (lVar16 < (int)((ulong)(plVar11[0x30] - lVar14) >> 5) * -0x55555555);
          }
          if (plVar19 != (long *)0x0) {
            __ZdlPv();
          }
        }
        return plVar19;
      }
      lVar16 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x38) >> 3;
      uVar17 = lVar16 * 0x5555555555555556;
      if (uVar17 < uVar23 || uVar17 + lVar14 * 0x5555555555555555 == 0) {
        uVar17 = uVar23;
      }
      if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
        uVar17 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_109395758(plVar24,uVar17);
      plVar13 = plVar24;
      FUN_1095391d0(plVar24,plVar12,plVar7,*(undefined8 *)(param_1 + 0x40));
      plVar12 = plVar13;
    }
    else if (plVar7 == plVar12) {
      func_0x0001095392e0(plVar12,plVar7,lVar14);
      plVar13 = *(long **)(param_1 + 0x40);
      while (plVar7 = plVar13, plVar7 != plVar12) {
        plVar13 = plVar7 + -3;
        if (*plVar13 != 0) {
          plVar7[-2] = *plVar13;
          __ZdlPv();
        }
      }
    }
    else {
      plVar13 = plVar24;
      FUN_1095391d0(plVar24,plVar12,plVar7,lVar16);
      plVar12 = (long *)((long)plVar13 + (lVar16 - lVar14));
    }
    *(long **)(param_1 + 0x40) = plVar12;
  }
  puVar2 = (undefined4 *)(param_1 + 0x118);
  FUN_1095382f8(&uStack_c8,param_1,puVar2,plVar19,plVar20,*(undefined4 *)(param_1 + 0x194),
                *(undefined4 *)(param_1 + 0x198));
  FUN_1095382f8(&uStack_128,param_1,&uStack_c8,plVar19,plVar24,*(undefined4 *)(param_1 + 0x198),
                *(undefined4 *)(param_1 + 400));
  lVar14 = param_1;
  FUN_1095383b8(param_1,&uStack_128,puVar2,param_1 + 0xb0,uVar5,uVar4);
  if ((int)lVar14 == 0) {
    lVar14 = param_1;
    FUN_1095383b8(param_1,&uStack_c8,puVar2,param_1 + 0xb0,uVar5,uVar4);
    if ((int)lVar14 == 0) {
      plVar19 = (long *)0x0;
      goto LAB_109537f58;
    }
    if (puVar2 == &uStack_c8) goto LAB_109537f40;
    if (lStack_90 != 0) {
      piVar1 = (int *)(lStack_90 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x150) + 0x14);
      do {
        iVar3 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar3 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(puVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x11c) < 1) {
      *puVar2 = uStack_c8;
LAB_109537ed4:
      if (2 < iStack_c4) goto LAB_109537f10;
      *(int *)(param_1 + 0x11c) = iStack_c4;
      puVar21 = &uStack_c8;
      goto LAB_109537ee8;
    }
    lVar14 = 0;
    lVar16 = *(long *)(param_1 + 0x158);
    do {
      *(undefined4 *)(lVar16 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x11c));
    *puVar2 = uStack_c8;
    if (*(int *)(param_1 + 0x11c) < 3) goto LAB_109537ed4;
LAB_109537f10:
    puVar21 = &uStack_c8;
    func_0x000109a84868(puVar2,&uStack_c8);
LAB_109537f20:
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(puVar21 + 4);
    uVar28 = *(undefined8 *)(puVar21 + 6);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(puVar21 + 8);
    *(undefined8 *)(param_1 + 0x130) = uVar28;
    uVar28 = *(undefined8 *)(puVar21 + 10);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(puVar21 + 0xc);
    *(undefined8 *)(param_1 + 0x140) = uVar28;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(puVar21 + 0xe);
  }
  else if (puVar2 != &uStack_128) {
    if (lStack_f0 != 0) {
      piVar1 = (int *)(lStack_f0 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x150) + 0x14);
      do {
        iVar3 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar3 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(puVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x11c) < 1) {
      *puVar2 = uStack_128;
LAB_109537ea0:
      if (iStack_124 < 3) {
        *(int *)(param_1 + 0x11c) = iStack_124;
        puVar21 = &uStack_128;
LAB_109537ee8:
        uVar4 = puVar21[3];
        *(undefined4 *)(param_1 + 0x120) = puVar21[2];
        *(undefined4 *)(param_1 + 0x124) = uVar4;
        puVar15 = *(undefined8 **)(puVar21 + 0x12);
        puVar18 = *(undefined8 **)(param_1 + 0x160);
        *puVar18 = *puVar15;
        puVar18[1] = puVar15[1];
        goto LAB_109537f20;
      }
    }
    else {
      lVar14 = 0;
      lVar16 = *(long *)(param_1 + 0x158);
      do {
        *(undefined4 *)(lVar16 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0x11c));
      *puVar2 = uStack_128;
      if (*(int *)(param_1 + 0x11c) < 3) goto LAB_109537ea0;
    }
    puVar21 = &uStack_128;
    func_0x000109a84868(puVar2,&uStack_128);
    goto LAB_109537f20;
  }
LAB_109537f40:
  FUN_1095380c4(param_1,plVar19,plVar20,puVar2);
  plVar19 = (long *)0x1;
LAB_109537f58:
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar3 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  if (0 < iStack_124) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_e8 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_124);
  }
  if (puStack_e0 != auStack_d8 && puStack_e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e0 + -8));
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar3 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < iStack_c4) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_c4);
  }
  if (puStack_80 != auStack_78 && puStack_80 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_80 + -8));
  }
  return plVar19;
}



/* Entry: 1095380c4; end: 1095382f7;  */

void FUN_1095380c4(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  long lStack_80;
  
  if (*(long *)(param_1 + 0x178) != *(long *)(param_1 + 0x180)) {
    FUN_10941066c(&puStack_88,param_2[1] - *param_2 >> 3);
    lVar6 = *param_2;
    if (0 < (int)((ulong)(param_2[1] - lVar6) >> 3)) {
      uVar9 = *(undefined8 *)(param_1 + 0x1d8);
      lVar8 = (param_2[1] - lVar6) * 0x20000000 >> 0x20;
      puVar5 = puStack_88;
      if (lVar8 < 2) {
        lVar8 = 1;
      }
      do {
        FUN_10953b6dc(&uStack_90,uVar9,param_4,lVar6);
        *puVar5 = CONCAT44(uStack_8c,uStack_90);
        lVar6 = lVar6 + 8;
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
    }
    FUN_1095201f0(param_3,(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 5) *
                          -0x5555555555555555);
    lVar6 = *(long *)(param_1 + 0x178);
    puVar5 = puStack_88;
    if (0 < (int)((ulong)(*(long *)(param_1 + 0x180) - lVar6) >> 5) * -0x55555555) {
      lVar8 = 0;
      lVar7 = lStack_80;
      do {
        lVar6 = lVar6 + lVar8 * 0x60;
        iVar1 = *(int *)(lVar6 + 8);
        iVar2 = *(int *)(lVar6 + 0xc);
        uStack_90 = 0;
        func_0x00010817850c(*param_3 + lVar8 * 0x18,lVar7 - (long)puVar5 >> 3,&uStack_90);
        puVar5 = puStack_88;
        lVar7 = lStack_80;
        if (0 < (int)((ulong)(lStack_80 - (long)puStack_88) >> 3)) {
          lVar10 = 0;
          lVar11 = 0;
          lVar6 = 0;
          fVar13 = (float)(iVar2 + -1 << (ulong)((uint)lVar8 & 0x1f));
          fVar14 = (float)(iVar1 + -1 << (ulong)((uint)lVar8 & 0x1f));
          do {
            fVar12 = *(float *)((long)puVar5 + lVar10);
            bVar3 = false;
            bVar4 = false;
            if (0.0 <= fVar12) {
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar12) && !NAN(fVar13)) {
                bVar3 = fVar12 < fVar13;
                bVar4 = false;
              }
            }
            if (bVar3 != bVar4) {
              fVar12 = ((float *)((long)puVar5 + lVar10))[1];
              bVar3 = false;
              bVar4 = false;
              if (0.0 <= fVar12) {
                bVar3 = false;
                bVar4 = true;
                if (!NAN(fVar12) && !NAN(fVar14)) {
                  bVar3 = fVar12 < fVar14;
                  bVar4 = false;
                }
              }
              if (bVar3 != bVar4) {
                FUN_10953aacc(*(undefined8 *)(param_1 + 0x1d8),
                              *(long *)(param_1 + 0x178) + lVar8 * 0x60,
                              *(long *)(*param_3 + lVar8 * 0x18) + lVar11,lVar8);
                puVar5 = puStack_88;
                lVar7 = lStack_80;
              }
            }
            lVar6 = lVar6 + 1;
            lVar11 = lVar11 + 4;
            lVar10 = lVar10 + 8;
          } while (lVar6 < (int)((ulong)(lVar7 - (long)puVar5) >> 3));
        }
        lVar8 = lVar8 + 1;
        lVar6 = *(long *)(param_1 + 0x178);
      } while (lVar8 < (int)((ulong)(*(long *)(param_1 + 0x180) - lVar6) >> 5) * -0x55555555);
    }
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1095382f8; end: 1095383b7;  */

void FUN_1095382f8(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,ulong param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined1 *puStack_68;
  
  FUN_1095395c4(*(undefined8 *)(param_2 + 0x1d8),param_3);
  iVar4 = (int)param_6;
  if (param_7 <= iVar4) {
    lVar5 = (long)iVar4 + 1;
    lVar7 = (-(param_6 >> 0x1f & 1) & 0xfffffffe00000000 | (param_6 & 0xffffffff) << 1) +
            (long)iVar4;
    lVar6 = lVar7 * 0x20;
    lVar7 = lVar7 * 8;
    do {
      FUN_109539788(*(undefined8 *)(param_2 + 0x1d8),param_4,*param_5 + lVar7,
                    *(long *)(param_2 + 0x178) + lVar6,param_6);
      lVar5 = lVar5 + -1;
      param_6 = (ulong)((int)param_6 - 1);
      lVar6 = lVar6 + -0x60;
      lVar7 = lVar7 + -0x18;
    } while (param_7 < lVar5);
  }
  lStack_a0 = *(long *)(param_2 + 0x1d8) + 0x30;
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_a8 = 0x300000003;
  uStack_b0 = 0x242ff4005;
  lStack_90 = *(long *)(param_2 + 0x1d8) + 0x54;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  lStack_98 = lStack_a0;
  lStack_88 = lStack_90;
  puStack_68 = &stack0xffffffffffffffa0;
  FUN_109a479a0(&uStack_b0,&stack0xffffffffffffffb8);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_b0._4_4_);
  }
  if (puStack_68 != &stack0xffffffffffffffa0 && puStack_68 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_68 + -8));
  }
  return;
}



/* Entry: 1095383b8; end: 109538667;  */

bool FUN_1095383b8(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_390 [352];
  long *aplStack_230 [44];
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_109a822d8(auStack_390,param_3,0);
  FUN_109a7dd18(aplStack_230,param_2,auStack_390);
  uStack_d0 = 0x42ff0000;
  lStack_90 = (long)&uStack_cc + 4;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  lStack_98 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &uStack_80;
  (**(code **)(*aplStack_230[0] + 0x18))(aplStack_230[0],aplStack_230,&uStack_d0,0xffffffff);
  FUN_10918eb6c(aplStack_230);
  FUN_10918eb6c(auStack_390);
  pfVar3 = (float *)CONCAT44(uStack_bc,uStack_c0);
  pfVar11 = *(float **)(param_3 + 0x10);
  pfVar10 = *(float **)(param_2 + 0x10);
  pfVar9 = *(float **)(param_4 + 0x10);
  fVar17 = pfVar3[3];
  fVar18 = *pfVar3;
  fVar12 = fVar17;
  _atan2f(fVar17,fVar18);
  iVar7 = param_6;
  if (param_5 <= param_6) {
    iVar7 = param_5;
  }
  if (ABS(fVar12) < *(float *)(param_1 + 0x1b4)) {
    fVar12 = -(pfVar3[1] * fVar17) + pfVar3[4] * fVar18;
    if (fVar12 < *(float *)(param_1 + 0x1b8)) {
      fVar13 = *pfVar9;
      fVar14 = pfVar9[1];
      fVar17 = pfVar10[2] + fVar14 * pfVar10[1] + fVar13 * *pfVar10;
      fVar18 = pfVar10[5] + fVar14 * pfVar10[4] + fVar13 * pfVar10[3];
      fVar16 = *(float *)(param_1 + 0x1bc) * (float)iVar7;
      fVar15 = ABS(fVar17 - (pfVar11[2] + pfVar11[1] * fVar14 + fVar13 * *pfVar11));
      fVar13 = ABS(fVar18 - (pfVar11[5] + fVar14 * pfVar11[4] + fVar13 * pfVar11[3]));
      bVar4 = false;
      if ((1.0 / *(float *)(param_1 + 0x1b8) < fVar12) &&
         (bVar4 = false, !NAN(fVar15) && !NAN(fVar16))) {
        bVar4 = fVar15 < fVar16;
      }
      bVar5 = false;
      if ((bVar4) && (bVar5 = false, !NAN(fVar13) && !NAN(fVar16))) {
        bVar5 = fVar13 < fVar16;
      }
      if (bVar5) {
        iVar7 = (int)(*(float *)(param_1 + 0x1d0) * (float)iVar7);
        fVar12 = (float)-iVar7;
        if (fVar12 < fVar17) {
          bVar4 = false;
          bVar5 = true;
          bVar6 = false;
          if (fVar17 < (float)(param_5 + iVar7)) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar18) && !NAN(fVar12)) {
              bVar4 = fVar18 < fVar12;
              bVar5 = fVar18 == fVar12;
              bVar6 = false;
            }
          }
          if (!bVar5 && bVar4 == bVar6) {
            bVar4 = fVar18 < (float)(param_6 + iVar7);
            goto LAB_109538584;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_109538584:
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < (int)uStack_cc) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return bVar4;
}



/* Entry: 109538668; end: 109538c33;  */

long * FUN_109538668(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 auStack_170 [34];
  
  func_0x000109516d68(param_1 + 0x2f,(param_2[1] - *param_2 >> 5) * -0x5555555555555555);
  lVar9 = param_1[0x2f];
  lVar11 = param_1[0x30];
  if (lVar11 != lVar9) {
    uVar15 = 0;
    do {
      if (lVar9 != *param_2) {
        puVar2 = (undefined4 *)(*param_2 + uVar15 * 0x60);
        if (*(long *)(puVar2 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar2 + 0xe) + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        puVar3 = (undefined4 *)(lVar9 + uVar15 * 0x60);
        if (*(long *)(puVar3 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar3 + 0xe) + 0x14);
          do {
            iVar4 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(puVar3);
          }
        }
        *(undefined8 *)(puVar3 + 0xe) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        if ((int)puVar3[1] < 1) {
          *puVar3 = *puVar2;
LAB_109538770:
          if (2 < (int)puVar2[1]) goto LAB_1095387a4;
          puVar3[1] = puVar2[1];
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
          puVar10 = *(undefined8 **)(puVar2 + 0x12);
          puVar12 = *(undefined8 **)(puVar3 + 0x12);
          *puVar12 = *puVar10;
          puVar12[1] = puVar10[1];
        }
        else {
          lVar9 = 0;
          lVar11 = *(long *)(puVar3 + 0x10);
          do {
            *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)puVar3[1]);
          *puVar3 = *puVar2;
          if ((int)puVar3[1] < 3) goto LAB_109538770;
LAB_1095387a4:
          func_0x000109a84868(puVar3,puVar2);
        }
        uVar17 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar3 + 4) = uVar17;
        uVar17 = *(undefined8 *)(puVar2 + 8);
        *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(puVar2 + 10);
        *(undefined8 *)(puVar3 + 8) = uVar17;
        uVar17 = *(undefined8 *)(puVar2 + 0xc);
        *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)(puVar2 + 0xe);
        *(undefined8 *)(puVar3 + 0xc) = uVar17;
        lVar9 = param_1[0x2f];
        lVar11 = param_1[0x30];
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)((lVar11 - lVar9 >> 5) * -0x5555555555555555));
  }
  iVar4 = *(int *)(lVar9 + 8);
  iVar5 = *(int *)(lVar9 + 0xc);
  plVar14 = param_1 + 1;
  if (*plVar14 == param_1[2]) {
    (**(code **)(*param_1 + 0x10))(param_1,iVar5,iVar4,iVar5 / 2,iVar4 / 2,iVar5,iVar4);
    FUN_109a82c84(&uStack_1c0,3,3,5);
    (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
              ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,param_3,0xffffffff);
    FUN_10918eb6c(&uStack_1c0);
    plVar13 = (long *)0x1;
  }
  else {
    FUN_109539490(param_1[0x3b]);
    iVar6 = *(int *)((long)param_1 + 0x194);
    if ((int)param_1[0x32] <= iVar6) {
      lVar11 = (long)iVar6;
      lVar9 = lVar11 + 1;
      lVar16 = lVar11 * 0x60;
      lVar11 = lVar11 * 0x18;
      do {
        FUN_109539788(param_1[0x3b],plVar14,param_1[4] + lVar11,param_1[0x2f] + lVar16,iVar6);
        lVar9 = lVar9 + -1;
        iVar6 = iVar6 + -1;
        lVar16 = lVar16 + -0x60;
        lVar11 = lVar11 + -0x18;
      } while ((int)param_1[0x32] < lVar9);
    }
    FUN_109539644(&uStack_1c0,param_1[0x3b]);
    if (param_3[7] != 0) {
      piVar1 = (int *)(param_3[7] + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(param_3);
      }
    }
    param_3[7] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    if (0 < *(int *)((long)param_3 + 4)) {
      lVar9 = 0;
      lVar11 = param_3[8];
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)param_3 + 4));
    }
    param_3[1] = uStack_1b8;
    *param_3 = CONCAT44(iStack_1bc,uStack_1c0);
    param_3[3] = uStack_1a8;
    param_3[2] = uStack_1b0;
    param_3[5] = uStack_198;
    param_3[4] = uStack_1a0;
    param_3[7] = uStack_188;
    param_3[6] = uStack_190;
    puVar12 = (undefined8 *)param_3[9];
    puVar10 = param_3 + 10;
    if (puVar12 != puVar10) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      param_3[8] = param_3 + 1;
      param_3[9] = puVar10;
      puVar12 = puVar10;
    }
    if (iStack_1bc < 3) {
      puVar10 = (undefined8 *)((ulong)&uStack_1c0 | 4);
      *puVar12 = *puStack_178;
      puVar12[1] = puStack_178[1];
      uStack_1c0 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_178 != auStack_170) {
        _free(puStack_178[-1]);
      }
    }
    else {
      param_3[8] = uStack_180;
      param_3[9] = puStack_178;
    }
    FUN_109a82c84(&uStack_1c0,3,3,5);
    uStack_220 = 0x42ff0000;
    lStack_1e0 = (long)&uStack_21c + 4;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_21c = 0;
    lStack_1e8 = 0;
    uStack_1ec = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    puStack_1d8 = &uStack_1d0;
    (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
              ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,&uStack_220,0xffffffff);
    plVar13 = param_1;
    FUN_1095383b8(param_1,param_3,&uStack_220,param_1 + 0x16,iVar5,iVar4);
    if (lStack_1e8 != 0) {
      piVar1 = (int *)(lStack_1e8 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_220);
      }
    }
    lStack_1e8 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    if (0 < (int)uStack_21c) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_1e0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_21c);
    }
    if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
      _free(puStack_1d8[-1]);
    }
    FUN_10918eb6c(&uStack_1c0);
  }
  FUN_109a82c84(&uStack_1c0,3,3,5);
  uStack_220 = 0x42ff0000;
  lStack_1e0 = (long)&uStack_21c + 4;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  lStack_1e8 = 0;
  uStack_1ec = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_1d8 = &uStack_1d0;
  (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
            ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,&uStack_220,0xffffffff);
  FUN_1095380c4(param_1,plVar14,param_1 + 4,&uStack_220);
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  if (0 < (int)uStack_21c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_21c);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  FUN_10918eb6c(&uStack_1c0);
  return plVar13;
}



/* Entry: 109538c34; end: 109538f17;  */

void FUN_109538c34(long *param_1,long *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *aplStack_210 [44];
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000109516d68(param_1 + 0x2f,(param_2[1] - *param_2 >> 5) * -0x5555555555555555);
  lVar8 = param_1[0x2f];
  lVar10 = param_1[0x30];
  if (lVar10 != lVar8) {
    uVar12 = 0;
    do {
      if (lVar8 != *param_2) {
        puVar2 = (undefined4 *)(*param_2 + uVar12 * 0x60);
        if (*(long *)(puVar2 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar2 + 0xe) + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        puVar3 = (undefined4 *)(lVar8 + uVar12 * 0x60);
        if (*(long *)(puVar3 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(puVar3 + 0xe) + 0x14);
          do {
            iVar4 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(puVar3);
          }
        }
        *(undefined8 *)(puVar3 + 0xe) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        if ((int)puVar3[1] < 1) {
          *puVar3 = *puVar2;
LAB_109538d34:
          if (2 < (int)puVar2[1]) goto LAB_109538d68;
          puVar3[1] = puVar2[1];
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
          puVar9 = *(undefined8 **)(puVar2 + 0x12);
          puVar11 = *(undefined8 **)(puVar3 + 0x12);
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
        }
        else {
          lVar8 = 0;
          lVar10 = *(long *)(puVar3 + 0x10);
          do {
            *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)puVar3[1]);
          *puVar3 = *puVar2;
          if ((int)puVar3[1] < 3) goto LAB_109538d34;
LAB_109538d68:
          func_0x000109a84868(puVar3,puVar2);
        }
        uVar13 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar3 + 4) = uVar13;
        uVar13 = *(undefined8 *)(puVar2 + 8);
        *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(puVar2 + 10);
        *(undefined8 *)(puVar3 + 8) = uVar13;
        uVar13 = *(undefined8 *)(puVar2 + 0xc);
        *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)(puVar2 + 0xe);
        *(undefined8 *)(puVar3 + 0xc) = uVar13;
        lVar8 = param_1[0x2f];
        lVar10 = param_1[0x30];
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)((lVar10 - lVar8 >> 5) * -0x5555555555555555));
  }
  if (param_1[1] == param_1[2]) {
    iVar4 = *(int *)(lVar8 + 8);
    iVar5 = *(int *)(lVar8 + 0xc);
    (**(code **)(*param_1 + 0x10))(param_1,iVar5,iVar4,iVar5 / 2,iVar4 / 2,iVar5,iVar4);
  }
  FUN_109a82c84(aplStack_210,3,3,5);
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  lStack_78 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &uStack_60;
  (**(code **)(*aplStack_210[0] + 0x18))(aplStack_210[0],aplStack_210,&uStack_b0,0xffffffff);
  FUN_1095380c4(param_1,param_1 + 1,param_1 + 4,&uStack_b0);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  FUN_10918eb6c(aplStack_210);
  return;
}



/* Entry: 109538f18; end: 109538feb;  */

void FUN_109538f18(undefined4 *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long *plVar4;
  undefined4 auStack_38 [2];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  auStack_38[0] = 0x2010000;
  uStack_28 = 0;
  puStack_30 = param_1;
  FUN_109a479a0(param_2 + 0x118,auStack_38);
  pfVar1 = *(float **)(param_2 + 0x128);
  pfVar2 = *(float **)(param_2 + 0x60);
  lVar3 = *(long *)(param_1 + 4);
  plVar4 = *(long **)(param_1 + 0x12);
  *(float *)(lVar3 + 8) = pfVar1[2] + pfVar1[1] * pfVar2[1] + *pfVar2 * *pfVar1;
  *(float *)(lVar3 + *plVar4 + 8) = pfVar1[5] + pfVar1[4] * pfVar2[1] + *pfVar2 * pfVar1[3];
  return;
}



/* Entry: 109538fec; end: 1095391cf;  */

void FUN_109538fec(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
  float *pfVar11;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulong uStack_80;
  long *plStack_78;
  long alStack_70 [3];
  undefined4 auStack_58 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined1 *)&uStack_c0;
  uStack_c0 = 0x42ff0000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  iStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_80 = (ulong)&uStack_c0 | 8;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  auStack_58[0] = 0x2010000;
  uStack_48 = 0;
  plStack_78 = alStack_70;
  FUN_109a479a0(param_2,auStack_58);
  if (*(long *)(param_1 + 0x150) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x150) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4((undefined8 *)(param_1 + 0x118));
    }
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (0 < *(int *)(param_1 + 0x11c)) {
    lVar6 = 0;
    lVar9 = *(long *)(param_1 + 0x158);
    do {
      *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x11c));
  }
  *(ulong *)(param_1 + 0x120) = CONCAT44(uStack_b4,uStack_b8);
  *(undefined8 *)(param_1 + 0x118) = CONCAT44(iStack_bc,uStack_c0);
  *(ulong *)(param_1 + 0x130) = CONCAT44(uStack_a4,uStack_a8);
  *(ulong *)(param_1 + 0x128) = CONCAT44(uStack_ac,uStack_b0);
  *(ulong *)(param_1 + 0x140) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(param_1 + 0x138) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(param_1 + 0x150) = uStack_88;
  *(ulong *)(param_1 + 0x148) = CONCAT44(uStack_8c,uStack_90);
  plVar10 = *(long **)(param_1 + 0x160);
  plVar2 = (long *)(param_1 + 0x168);
  if (plVar10 != plVar2) {
    if (plVar10 != (long *)0x0) {
      _free(plVar10[-1]);
    }
    *(long *)(param_1 + 0x158) = param_1 + 0x120;
    *(long **)(param_1 + 0x160) = plVar2;
    plVar10 = plVar2;
  }
  if (iStack_bc < 3) {
    puVar7 = (undefined8 *)((ulong)&uStack_c0 | 4);
    *plVar10 = *plStack_78;
    plVar10[1] = plStack_78[1];
    uStack_c0 = 0x42ff0000;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    if (plStack_78 != alStack_70) {
      _free(plStack_78[-1]);
      plVar10 = *(long **)(param_1 + 0x160);
    }
  }
  else {
    *(ulong *)(param_1 + 0x158) = uStack_80;
    *(long **)(param_1 + 0x160) = plStack_78;
    plVar10 = plStack_78;
  }
  pfVar8 = *(float **)(param_2 + 0x10);
  pfVar11 = *(float **)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x128);
  *(float *)(lVar6 + 8) = (pfVar8[2] - *pfVar11 * *pfVar8) - pfVar11[1] * pfVar8[1];
  *(float *)(lVar6 + *plVar10 + 8) = (pfVar8[5] - *pfVar11 * pfVar8[3]) - pfVar11[1] * pfVar8[4];
  FUN_109395838(param_1 + 0x20);
  return;
}



/* Entry: 1095391d0; end: 10953927b;  */

undefined8 * FUN_1095391d0(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_1092cc0dc(param_4,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10953927c(&uStack_60);
  return param_4;
}



/* Entry: 10953927c; end: 109539343;  */

long FUN_10953927c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 109539344; end: 10953948f;  */

undefined8 * FUN_109539344(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_110afbb88;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1093c3d54(puVar3,0x10,4,4);
  if (0 < (long)(param_1[3] * param_1[2])) {
    _bzero(*puVar3,param_1[3] * param_1[2] * 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = 1;
  _calloc(1,0x10);
  if (lVar2 != 0) {
    param_1[4] = lVar2;
    param_1[5] = 4;
    *(undefined4 *)(param_1 + 10) = 0x3f800000;
    param_1[7] = 0;
    param_1[6] = 0x3f800000;
    param_1[9] = 0;
    param_1[8] = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = 0;
    *(undefined8 *)((long)param_1 + 0x84) = 0;
    *(undefined8 *)((long)param_1 + 0x9c) = 0;
    *(undefined8 *)((long)param_1 + 0x94) = 0;
    *(undefined8 *)((long)param_1 + 0xac) = 0;
    *(undefined8 *)((long)param_1 + 0xa4) = 0;
    *(undefined8 *)((long)param_1 + 0xbc) = 0;
    *(undefined8 *)((long)param_1 + 0xb4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
    *(undefined8 *)((long)param_1 + 0xc4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    *(undefined8 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 4;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0x3a83126f;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    FUN_109539490(param_1);
    return param_1;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109539468);
  (*pcVar1)();
}



/* Entry: 109539490; end: 1095395c3;  */

void FUN_109539490(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *aplStack_1f0 [44];
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_109a82c84(aplStack_1f0,3,3,5);
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  lStack_58 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  (**(code **)(*aplStack_1f0[0] + 0x18))(aplStack_1f0[0],aplStack_1f0,&uStack_90,0xffffffff);
  FUN_1095395c4(param_1,&uStack_90);
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  FUN_10918eb6c(aplStack_1f0);
  return;
}



/* Entry: 1095395c4; end: 109539643;  */

void FUN_1095395c4(long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = *(float **)(param_2 + 0x10);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[2];
  fVar2 = pfVar1[3];
  fVar5 = pfVar1[5];
  fVar6 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + pfVar1[6] * pfVar1[6]);
  _atan2f();
  *(float *)(param_1 + 0x54) = fVar4;
  *(float *)(param_1 + 0x58) = fVar5;
  *(float *)(param_1 + 0x5c) = fVar6;
  *(float *)(param_1 + 0x60) = fVar2;
  ___sincosf_stret();
  *(float *)(param_1 + 0x30) = fVar3 * fVar6;
  *(float *)(param_1 + 0x34) = -(fVar6 * fVar2);
  *(float *)(param_1 + 0x38) = fVar4;
  *(float *)(param_1 + 0x3c) = fVar2 * fVar6;
  *(float *)(param_1 + 0x40) = fVar3 * fVar6;
  *(float *)(param_1 + 0x44) = fVar5;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  return;
}



/* Entry: 109539644; end: 109539787;  */

void FUN_109539644(undefined4 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  lStack_a0 = param_2 + 0x30;
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_a8 = 0x300000003;
  uStack_b0 = 0x242ff4005;
  uStack_58 = 4;
  uStack_60 = 0xc;
  lStack_90 = param_2 + 0x54;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  lStack_98 = lStack_a0;
  lStack_88 = lStack_90;
  puStack_68 = &uStack_60;
  puStack_40 = param_1;
  FUN_109a479a0(&uStack_b0,auStack_48);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109539788; end: 109539847;  */

undefined8
FUN_109539788(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  *(undefined8 *)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x120) = param_3;
  *(long *)(param_1 + 0x128) = param_4;
  *(undefined4 *)(param_1 + 0x130) = param_5;
  uVar1 = NEON_ushl(CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20) + -1,
                             (int)*(undefined8 *)(param_4 + 8) + -1),CONCAT44(param_5,param_5),4);
  uVar1 = NEON_scvtf(uVar1,4);
  uVar1 = NEON_rev64(CONCAT44((float)((ulong)uVar1 >> 0x20) * 0.5,(float)uVar1 * 0.5),4);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  FUN_109539848(auStack_40);
  uStack_4c = 5;
  uVar1 = 0x3727c5ac3c23d70a;
  uStack_48 = 0x3727c5ac3c23d70a;
  FUN_1095398b0(&uStack_4c,param_1,auStack_40);
  FUN_10953b65c(param_1,auStack_40[0]);
  _free(auStack_40[0]);
  return uVar1;
}



/* Entry: 109539848; end: 1095398af;  */

void FUN_109539848(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093c3de4(param_1,(long)*(int *)(param_2 + 0x104));
  uVar1 = (ulong)*(uint *)(param_2 + 0x104);
  if (0 < (int)*(uint *)(param_2 + 0x104)) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = (undefined4 *)(param_2 + 0x54);
    do {
      *puVar2 = *puVar3;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 1095398b0; end: 10953aacb;  */

void FUN_1095398b0(int *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  long *plVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 *puVar34;
  long lVar35;
  undefined1 *puVar36;
  ulong uVar37;
  undefined4 *puVar38;
  undefined8 *puVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined1 in_b0;
  undefined1 uVar51;
  undefined1 in_register_00005001;
  undefined1 uVar52;
  undefined1 in_register_00005002;
  undefined1 uVar53;
  undefined1 in_register_00005003;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  long *plStack_188;
  undefined1 (*pauStack_130) [16];
  ulong uStack_128;
  float *pfStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined1 (*pauStack_108) [16];
  ulong uStack_100;
  ulong uStack_f8;
  float fStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  float *pfStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  undefined1 uStack_c4;
  uint uStack_c0;
  float *pfStack_b8;
  undefined8 uStack_b0;
  float *pfStack_a8;
  ulong auStack_a0 [2];
  
  pauStack_108 = (undefined1 (*) [16])*param_3;
  uStack_100 = param_3[1];
  (**(code **)(*param_2 + 0x10))(param_2,&pauStack_108);
  plVar19 = param_2;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_10946c21c(&pfStack_120,plVar19);
  plStack_188 = param_2;
  (**(code **)(*param_2 + 0x20))();
  pauStack_108 = (undefined1 (*) [16])*param_3;
  uStack_100 = param_3[1];
  (**(code **)(*param_2 + 0x28))(param_2,&pauStack_108);
  fVar73 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  fVar74 = (float)param_1[2];
  uVar32 = uStack_118;
  pfVar22 = pfStack_120;
  if (0 < (long)uStack_118) {
    do {
      *pfVar22 = fVar74 + *pfVar22;
      uVar32 = uVar32 - 1;
      pfVar22 = pfVar22 + uStack_118 + 1;
    } while (uVar32 != 0);
  }
  if (0 < *param_1) {
    iVar31 = 0;
    do {
      uVar32 = uStack_118;
      pfVar22 = pfStack_120;
      pauStack_130 = (undefined1 (*) [16])0x0;
      uStack_128 = 0;
      pauStack_108 = (undefined1 (*) [16])0x0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uStack_e0 = 0;
      lStack_e8 = 0;
      uStack_d0 = 0;
      pfStack_d8 = (float *)0x0;
      iStack_c8 = 2;
      uStack_c4 = 0;
      if (uStack_118 != 0 || lStack_110 != 0) {
        if ((uStack_118 == 0) || (lStack_110 == 0)) {
LAB_109539a20:
          FUN_1093c3d54(&pauStack_108,lStack_110 * uStack_118,uStack_118);
          uVar37 = uStack_f8 * uStack_100;
          uVar29 = uVar37 + 3;
          if (-1 < (long)uVar37) {
            uVar29 = uVar37;
          }
          if (3 < (long)uVar37) {
            lVar21 = 0;
            pauVar30 = pauStack_108;
            pfVar20 = pfVar22;
            do {
              uVar10 = *(undefined8 *)pfVar20;
              uVar51 = (undefined1)uVar10;
              uVar52 = (undefined1)((ulong)uVar10 >> 8);
              uVar53 = (undefined1)((ulong)uVar10 >> 0x10);
              uVar54 = (undefined1)((ulong)uVar10 >> 0x18);
              *(undefined8 *)(*pauVar30 + 8) = *(undefined8 *)(pfVar20 + 2);
              *(undefined8 *)*pauVar30 = uVar10;
              lVar21 = lVar21 + 4;
              pauVar30 = pauVar30 + 1;
              pfVar20 = pfVar20 + 4;
            } while (lVar21 < (long)(uVar29 & 0xfffffffffffffffc));
          }
          lVar21 = (long)uVar37 % 4;
          if (lVar21 != 0 && lVar21 < 0 == SBORROW8(uVar37,uVar29 & 0xfffffffffffffffc)) {
            pauVar30 = pauStack_108 + ((long)uVar29 >> 2);
            pfVar22 = pfVar22 + ((long)uVar29 >> 2) * 4;
            do {
              fVar67 = *pfVar22;
              uVar51 = SUB41(fVar67,0);
              uVar52 = (undefined1)((uint)fVar67 >> 8);
              uVar53 = (undefined1)((uint)fVar67 >> 0x10);
              uVar54 = (undefined1)((uint)fVar67 >> 0x18);
              *(float *)*pauVar30 = fVar67;
              lVar21 = lVar21 + -1;
              pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
              pfVar22 = pfVar22 + 1;
            } while (lVar21 != 0);
          }
          fStack_f0 = 0.0;
          if ((long)uVar32 < 1) {
            bVar17 = false;
          }
          else {
            uVar29 = 0;
            pauVar30 = pauStack_108 + 3;
            pfVar22 = (float *)(*pauStack_108 + uStack_100 * (uStack_f8 * 4 + uVar32 * -4 + 4));
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
            uVar54 = 0;
            pauVar33 = pauStack_108;
            uVar37 = uVar32;
            do {
              uVar37 = uVar37 - 1;
              fVar67 = 0.0;
              if (uVar29 != 0) {
                pfVar20 = (float *)(*pauStack_108 + uVar29 * uStack_100 * 4);
                if (uVar29 < 4) {
                  fVar67 = ABS(*pfVar20);
                  if (uVar29 != 1) {
                    uVar40 = 1;
                    do {
                      fVar67 = fVar67 + ABS(*(float *)(*pauVar33 + uVar40 * 4));
                      uVar40 = uVar40 + 1;
                    } while (uVar29 != uVar40);
                  }
                }
                else {
                  uVar40 = uVar29 & 0x7ffffffffffffffc;
                  auVar68._0_4_ = ABS(*pfVar20);
                  auVar68._4_4_ = ABS(pfVar20[1]);
                  auVar68._8_4_ = ABS(pfVar20[2]);
                  auVar68._12_4_ = ABS(pfVar20[3]);
                  if (7 < uVar29) {
                    uVar24 = uVar29 & 0x7ffffffffffffff8;
                    fVar67 = ABS(pfVar20[4]);
                    fVar69 = ABS(pfVar20[5]);
                    fVar70 = ABS(pfVar20[6]);
                    fVar71 = ABS(pfVar20[7]);
                    auVar72 = auVar68;
                    if (0xf < uVar29) {
                      uVar28 = 8;
                      pauVar25 = pauVar30;
                      do {
                        auVar72._0_4_ = auVar68._0_4_ + ABS((float)*(undefined8 *)pauVar25[-1]);
                        auVar72._4_4_ =
                             auVar68._4_4_ +
                             ABS((float)((ulong)*(undefined8 *)pauVar25[-1] >> 0x20));
                        auVar72._8_4_ =
                             auVar68._8_4_ + ABS((float)*(undefined8 *)(pauVar25[-1] + 8));
                        auVar72._12_4_ =
                             auVar68._12_4_ +
                             ABS((float)((ulong)*(undefined8 *)(pauVar25[-1] + 8) >> 0x20));
                        fVar67 = fVar67 + ABS((float)*(undefined8 *)*pauVar25);
                        fVar69 = fVar69 + ABS((float)((ulong)*(undefined8 *)*pauVar25 >> 0x20));
                        fVar70 = fVar70 + ABS((float)*(undefined8 *)(*pauVar25 + 8));
                        fVar71 = fVar71 + ABS((float)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20)
                                             );
                        uVar28 = uVar28 + 8;
                        pauVar25 = pauVar25 + 2;
                        auVar68 = auVar72;
                      } while (uVar28 < uVar24);
                    }
                    auVar68._0_4_ = fVar67 + auVar72._0_4_;
                    auVar68._4_4_ = fVar69 + auVar72._4_4_;
                    auVar68._8_4_ = fVar70 + auVar72._8_4_;
                    auVar68._12_4_ = fVar71 + auVar72._12_4_;
                    if (uVar24 < uVar40) {
                      pfVar20 = pfVar20 + uVar24;
                      auVar68._0_4_ = auVar68._0_4_ + ABS(*pfVar20);
                      auVar68._4_4_ = auVar68._4_4_ + ABS(pfVar20[1]);
                      auVar68._8_4_ = auVar68._8_4_ + ABS(pfVar20[2]);
                      auVar68._12_4_ = auVar68._12_4_ + ABS(pfVar20[3]);
                    }
                  }
                  auVar72 = NEON_ext(auVar68,auVar68,8,1);
                  fVar67 = auVar68._0_4_ + auVar72._0_4_ + auVar68._4_4_ + auVar72._4_4_;
                  for (; uVar40 != uVar29; uVar40 = uVar40 + 1) {
                    fVar67 = fVar67 + ABS(*(float *)(*pauVar33 + uVar40 * 4));
                  }
                }
              }
              fVar69 = ABS(*(float *)(*pauStack_108 +
                                     (uStack_f8 - (uVar32 - uVar29)) * uStack_100 * 4 + uVar29 * 4))
              ;
              pfVar20 = pfVar22;
              uVar40 = uVar37;
              if (1 < (long)(uVar32 - uVar29)) {
                do {
                  fVar69 = fVar69 + ABS(*pfVar20);
                  uVar40 = uVar40 - 1;
                  pfVar20 = pfVar20 + uStack_100;
                } while (uVar40 != 0);
              }
              fVar67 = fVar67 + fVar69;
              if (fVar67 != (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) &&
                  (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) <= fVar67) {
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                fStack_f0 = fVar67;
              }
              uVar29 = uVar29 + 1;
              pauVar30 = (undefined1 (*) [16])(*pauVar30 + uStack_100 * 4);
              pauVar33 = (undefined1 (*) [16])(*pauVar33 + uStack_100 * 4);
              pfVar22 = pfVar22 + uStack_100 + 1;
            } while (uVar29 != uVar32);
            bVar17 = true;
          }
          goto LAB_109539c38;
        }
        lVar21 = 0;
        if (lStack_110 != 0) {
          lVar21 = 0x7fffffffffffffff / lStack_110;
        }
        pfVar20 = pfStack_a8;
        if ((long)uStack_118 <= lVar21) goto LAB_109539a20;
        goto LAB_10953aa38;
      }
      bVar17 = false;
      fStack_f0 = 0.0;
LAB_109539c38:
      lVar21 = lStack_e8;
      if (uStack_e0 != uVar32) {
        _free(lStack_e8);
        if (!bVar17) {
          lVar21 = 0;
          goto LAB_109539c74;
        }
        pfVar20 = pfStack_a8;
        if (uVar32 >> 0x3e == 0) {
          lVar21 = uVar32 << 2;
          _malloc();
          pfVar20 = pfStack_a8;
          if (lVar21 != 0) goto LAB_109539c74;
        }
        goto LAB_10953aa38;
      }
LAB_109539c74:
      lStack_e8 = lVar21;
      uStack_e0 = uVar32;
      uStack_c4 = 0;
      pfVar22 = pfStack_d8;
      if (uStack_d0 != uVar32) {
        _free(pfStack_d8);
        if (0 < (long)uVar32) {
          pfVar20 = pfStack_a8;
          if (uVar32 >> 0x3e == 0) {
            pfVar22 = (float *)(uVar32 << 2);
            _malloc();
            pfVar20 = pfStack_a8;
            if (pfVar22 != (float *)0x0) goto LAB_109539cbc;
          }
LAB_10953aa38:
          pfStack_a8 = pfVar20;
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953aa7c;
        }
        pfVar22 = (float *)0x0;
      }
LAB_109539cbc:
      pfStack_d8 = pfVar22;
      uVar29 = uStack_f8;
      uStack_d0 = uVar32;
      iStack_c8 = 2;
      lVar21 = uStack_f8 - 1;
      if (lVar21 != 0 && 0 < (long)uStack_f8) {
        lVar48 = 0;
        uVar32 = 0;
        bVar13 = 0;
        lVar27 = -uStack_f8;
        bVar17 = true;
        lVar46 = -uStack_f8;
        lVar26 = uStack_f8 - 2;
        lVar49 = 4;
        lVar47 = lVar26;
        uVar37 = uStack_f8;
        while( true ) {
          uVar24 = uStack_100;
          pauVar30 = pauStack_108;
          lVar46 = lVar46 + 1;
          lVar50 = uVar29 - uVar32;
          uVar40 = uStack_100;
          if ((long)uStack_f8 <= (long)uStack_100) {
            uVar40 = uStack_f8;
          }
          lVar2 = lVar50 + -1;
          if (lVar2 == 0 || lVar50 < 1) {
            *(int *)(lStack_e8 + uVar32 * 4) = (int)uVar32;
          }
          else {
            uVar28 = 0;
            fVar67 = ABS(*(float *)(*pauStack_108 + (uVar40 - lVar50) * (uStack_100 + 1) * 4));
            pfVar22 = (float *)(*pauStack_108 +
                               (uVar40 + lVar27) * (uStack_100 + 1) * 4 + uStack_100 * 4 + 4);
            uVar40 = 1;
            uVar51 = SUB41(fVar67,0);
            uVar52 = (char)((uint)fVar67 >> 8);
            uVar53 = (char)((uint)fVar67 >> 0x10);
            uVar54 = (char)((uint)fVar67 >> 0x18);
            do {
              fVar67 = ABS(*pfVar22);
              uVar55 = SUB41(fVar67,0);
              uVar56 = (char)((uint)fVar67 >> 8);
              uVar57 = (char)((uint)fVar67 >> 0x10);
              uVar58 = (char)((uint)fVar67 >> 0x18);
              uVar41 = uVar40;
              if (fVar67 == (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) ||
                  fVar67 < (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))) {
                uVar55 = uVar51;
                uVar56 = uVar52;
                uVar57 = uVar53;
                uVar58 = uVar54;
                uVar41 = uVar28;
              }
              uVar28 = uVar41;
              uVar40 = uVar40 + 1;
              pfVar22 = pfVar22 + uStack_100 + 1;
              uVar51 = uVar55;
              uVar52 = uVar56;
              uVar53 = uVar57;
              uVar54 = uVar58;
            } while (uVar37 != uVar40);
            uVar40 = uVar28 + uVar32;
            *(int *)(lStack_e8 + uVar32 * 4) = (int)uVar40;
            if (uVar28 != 0) {
              uVar41 = (ulong)-((uint)(*pauStack_108 + uStack_100 * uVar32 * 4) >> 2) & 3;
              if ((long)uVar32 <= (long)uVar41) {
                uVar41 = uVar32;
              }
              uVar43 = uVar32;
              if (((ulong)(*pauStack_108 + uStack_100 * uVar32 * 4) & 3) == 0) {
                uVar43 = uVar41;
              }
              uVar3 = uVar32 - uVar43;
              uVar41 = uVar3 + 3;
              if ((long)uVar43 <= (long)uVar32) {
                uVar41 = uVar3;
              }
              puVar38 = (undefined4 *)(*pauStack_108 + uStack_100 * lVar48);
              if (0 < (long)uVar43) {
                uVar23 = uVar43;
                puVar44 = (undefined4 *)(*pauStack_108 + uStack_100 * (uVar32 + uVar28) * 4);
                puVar45 = puVar38;
                do {
                  uVar9 = *puVar45;
                  *puVar45 = *puVar44;
                  *puVar44 = uVar9;
                  uVar23 = uVar23 - 1;
                  puVar44 = puVar44 + 1;
                  puVar45 = puVar45 + 1;
                } while (uVar23 != 0);
              }
              uVar41 = (uVar41 & 0xfffffffffffffffc) + uVar43;
              if (3 < (long)uVar3) {
                puVar34 = (undefined8 *)(*pauStack_108 + uStack_100 * lVar48 + uVar43 * 4);
                puVar39 = (undefined8 *)
                          (*pauStack_108 + uStack_100 * (uVar32 + uVar28) * 4 + uVar43 * 4);
                do {
                  uVar11 = puVar39[1];
                  uVar10 = *puVar39;
                  uVar12 = *puVar34;
                  puVar39[1] = puVar34[1];
                  *puVar39 = uVar12;
                  puVar34[1] = uVar11;
                  *puVar34 = uVar10;
                  uVar43 = uVar43 + 4;
                  puVar34 = puVar34 + 2;
                  puVar39 = puVar39 + 2;
                } while ((long)uVar43 < (long)uVar41);
              }
              if ((long)uVar41 < (long)uVar32) {
                lVar35 = uStack_100 * (uVar32 + uVar28);
                do {
                  uVar9 = puVar38[uVar41];
                  puVar38[uVar41] = *(undefined4 *)(*pauStack_108 + uVar41 * 4 + lVar35 * 4);
                  *(undefined4 *)(*pauStack_108 + uVar41 * 4 + lVar35 * 4) = uVar9;
                  uVar41 = uVar41 + 1;
                } while (uVar32 != uVar41);
              }
              lVar35 = uStack_100 * 4;
              if (0 < (long)(uVar29 + ~uVar40)) {
                lVar42 = lVar21 - uVar28;
                puVar36 = *pauStack_108 + lVar35 * (uStack_f8 + lVar46 + uVar28);
                do {
                  uVar9 = *(undefined4 *)(puVar36 + lVar48);
                  *(undefined4 *)(puVar36 + lVar48) =
                       *(undefined4 *)(puVar36 + (uVar32 + uVar28) * 4);
                  *(undefined4 *)(puVar36 + (uVar32 + uVar28) * 4) = uVar9;
                  puVar36 = puVar36 + lVar35;
                  lVar42 = lVar42 + -1;
                } while (lVar42 != 0);
              }
              uVar9 = *(undefined4 *)(*pauStack_108 + uVar32 * 4 + uStack_100 * uVar32 * 4);
              *(undefined4 *)(*pauStack_108 + uVar32 * 4 + uStack_100 * uVar32 * 4) =
                   *(undefined4 *)(*pauStack_108 + uVar40 * 4 + uStack_100 * uVar40 * 4);
              *(undefined4 *)(*pauStack_108 + uVar40 * 4 + uStack_100 * uVar40 * 4) = uVar9;
              lVar42 = uVar32 + 1;
              if (uVar28 != 1) {
                lVar1 = lVar35 * (uVar32 + uVar28);
                puVar36 = *pauStack_108 + uStack_100 * lVar49;
                do {
                  uVar9 = *(undefined4 *)(puVar36 + lVar48);
                  *(undefined4 *)(puVar36 + lVar48) =
                       *(undefined4 *)(*pauStack_108 + lVar42 * 4 + lVar1);
                  *(undefined4 *)(*pauStack_108 + lVar42 * 4 + lVar1) = uVar9;
                  lVar42 = lVar42 + 1;
                  puVar36 = puVar36 + lVar35;
                } while (lVar42 < (long)uVar40);
              }
            }
          }
          uVar40 = uVar32 + 1;
          if (uVar32 == 0) break;
          uVar28 = 0;
          pfStack_a8 = (float *)(*pauStack_108 + uStack_100 * uVar40 * 4);
          pfVar22 = (float *)(*pauStack_108 + uStack_100 * uVar32 * 4);
          lVar35 = uStack_100 * lVar48;
          pauVar33 = pauStack_108;
          do {
            pfStack_d8[uVar28] =
                 *(float *)*pauVar33 * *(float *)(*pauStack_108 + uVar28 * 4 + lVar35);
            uVar28 = uVar28 + 1;
            pauVar33 = (undefined1 (*) [16])(*pauVar33 + uStack_100 * 4 + 4);
          } while (uVar32 != uVar28);
          uVar41 = uVar32 & 0xfffffffffffffff8;
          uVar28 = uVar32 & 0xfffffffffffffffc;
          if (uVar32 < 4) {
            fVar67 = *pfVar22 * *pfStack_d8;
            uVar51 = SUB41(fVar67,0);
            uVar52 = (undefined1)((uint)fVar67 >> 8);
            uVar53 = (undefined1)((uint)fVar67 >> 0x10);
            uVar54 = (undefined1)((uint)fVar67 >> 0x18);
            if (uVar32 != 1) {
              uVar43 = 1;
              do {
                fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                         *(float *)(*pauStack_108 + uVar43 * 4 + lVar35) * pfStack_d8[uVar43];
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                uVar43 = uVar43 + 1;
              } while (uVar32 != uVar43);
            }
          }
          else {
            fVar67 = (float)*(undefined8 *)pfVar22 * *pfStack_d8;
            uVar51 = SUB41(fVar67,0);
            uVar52 = (undefined1)((uint)fVar67 >> 8);
            uVar53 = (undefined1)((uint)fVar67 >> 0x10);
            uVar54 = (undefined1)((uint)fVar67 >> 0x18);
            fVar67 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * pfStack_d8[1];
            uVar55 = SUB41(fVar67,0);
            uVar56 = (undefined1)((uint)fVar67 >> 8);
            uVar57 = (undefined1)((uint)fVar67 >> 0x10);
            uVar58 = (undefined1)((uint)fVar67 >> 0x18);
            fVar67 = (float)*(undefined8 *)(pfVar22 + 2) * pfStack_d8[2];
            uVar59 = SUB41(fVar67,0);
            uVar60 = (undefined1)((uint)fVar67 >> 8);
            uVar61 = (undefined1)((uint)fVar67 >> 0x10);
            uVar62 = (undefined1)((uint)fVar67 >> 0x18);
            fVar67 = (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * pfStack_d8[3];
            uVar63 = SUB41(fVar67,0);
            uVar64 = (undefined1)((uint)fVar67 >> 8);
            uVar65 = (undefined1)((uint)fVar67 >> 0x10);
            uVar66 = (undefined1)((uint)fVar67 >> 0x18);
            if (7 < uVar32) {
              auVar68 = *(undefined1 (*) [16])(pfStack_d8 + 4);
              fVar67 = pfVar22[4] * auVar68._0_4_;
              fVar69 = pfVar22[5] * auVar68._4_4_;
              fVar70 = pfVar22[6] * auVar68._8_4_;
              fVar71 = pfVar22[7] * auVar68._12_4_;
              if (0xf < uVar32) {
                pfVar20 = pfStack_d8 + 0xc;
                puVar34 = (undefined8 *)(pauStack_108[3] + lVar35);
                uVar43 = 8;
                do {
                  fVar8 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                          *(float *)(puVar34 + -2) * (float)*(undefined8 *)(pfVar20 + -4);
                  uVar51 = SUB41(fVar8,0);
                  uVar52 = (undefined1)((uint)fVar8 >> 8);
                  uVar53 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar54 = (undefined1)((uint)fVar8 >> 0x18);
                  fVar8 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                          *(float *)((long)puVar34 + -0xc) *
                          (float)((ulong)*(undefined8 *)(pfVar20 + -4) >> 0x20);
                  uVar55 = SUB41(fVar8,0);
                  uVar56 = (undefined1)((uint)fVar8 >> 8);
                  uVar57 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar58 = (undefined1)((uint)fVar8 >> 0x18);
                  fVar8 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) +
                          *(float *)(puVar34 + -1) * (float)*(undefined8 *)(pfVar20 + -2);
                  uVar59 = SUB41(fVar8,0);
                  uVar60 = (undefined1)((uint)fVar8 >> 8);
                  uVar61 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar62 = (undefined1)((uint)fVar8 >> 0x18);
                  fVar8 = (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                          *(float *)((long)puVar34 + -4) *
                          (float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20);
                  uVar63 = SUB41(fVar8,0);
                  uVar64 = (undefined1)((uint)fVar8 >> 8);
                  uVar65 = (undefined1)((uint)fVar8 >> 0x10);
                  uVar66 = (undefined1)((uint)fVar8 >> 0x18);
                  fVar67 = fVar67 + (float)*puVar34 * (float)*(undefined8 *)pfVar20;
                  fVar69 = fVar69 + (float)((ulong)*puVar34 >> 0x20) *
                                    (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
                  fVar70 = fVar70 + (float)puVar34[1] * (float)*(undefined8 *)(pfVar20 + 2);
                  fVar71 = fVar71 + (float)((ulong)puVar34[1] >> 0x20) *
                                    (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
                  uVar43 = uVar43 + 8;
                  pfVar20 = pfVar20 + 8;
                  puVar34 = puVar34 + 4;
                } while (uVar43 < uVar41);
              }
              fVar67 = fVar67 + (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
              uVar51 = SUB41(fVar67,0);
              uVar52 = (undefined1)((uint)fVar67 >> 8);
              uVar53 = (undefined1)((uint)fVar67 >> 0x10);
              uVar54 = (undefined1)((uint)fVar67 >> 0x18);
              fVar69 = fVar69 + (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
              uVar55 = SUB41(fVar69,0);
              uVar56 = (undefined1)((uint)fVar69 >> 8);
              uVar57 = (undefined1)((uint)fVar69 >> 0x10);
              uVar58 = (undefined1)((uint)fVar69 >> 0x18);
              fVar70 = fVar70 + (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
              uVar59 = SUB41(fVar70,0);
              uVar60 = (undefined1)((uint)fVar70 >> 8);
              uVar61 = (undefined1)((uint)fVar70 >> 0x10);
              uVar62 = (undefined1)((uint)fVar70 >> 0x18);
              fVar71 = fVar71 + (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63)));
              uVar63 = SUB41(fVar71,0);
              uVar64 = (undefined1)((uint)fVar71 >> 8);
              uVar65 = (undefined1)((uint)fVar71 >> 0x10);
              uVar66 = (undefined1)((uint)fVar71 >> 0x18);
              if ((long)uVar41 < (long)uVar28) {
                pfVar20 = pfVar22 + uVar41;
                auVar68 = *(undefined1 (*) [16])(pfStack_d8 + uVar41);
                fVar67 = fVar67 + *pfVar20 * auVar68._0_4_;
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                fVar69 = fVar69 + pfVar20[1] * auVar68._4_4_;
                uVar55 = SUB41(fVar69,0);
                uVar56 = (undefined1)((uint)fVar69 >> 8);
                uVar57 = (undefined1)((uint)fVar69 >> 0x10);
                uVar58 = (undefined1)((uint)fVar69 >> 0x18);
                fVar70 = fVar70 + pfVar20[2] * auVar68._8_4_;
                uVar59 = SUB41(fVar70,0);
                uVar60 = (undefined1)((uint)fVar70 >> 8);
                uVar61 = (undefined1)((uint)fVar70 >> 0x10);
                uVar62 = (undefined1)((uint)fVar70 >> 0x18);
                fVar71 = fVar71 + pfVar20[3] * auVar68._12_4_;
                uVar63 = SUB41(fVar71,0);
                uVar64 = (undefined1)((uint)fVar71 >> 8);
                uVar65 = (undefined1)((uint)fVar71 >> 0x10);
                uVar66 = (undefined1)((uint)fVar71 >> 0x18);
              }
            }
            auVar6[1] = uVar52;
            auVar6[0] = uVar51;
            auVar6[2] = uVar53;
            auVar6[3] = uVar54;
            auVar6[4] = uVar55;
            auVar6[5] = uVar56;
            auVar6[6] = uVar57;
            auVar6[7] = uVar58;
            auVar6[8] = uVar59;
            auVar6[9] = uVar60;
            auVar6[10] = uVar61;
            auVar6[0xb] = uVar62;
            auVar6[0xc] = uVar63;
            auVar6[0xd] = uVar64;
            auVar6[0xe] = uVar65;
            auVar6[0xf] = uVar66;
            auVar7[1] = uVar52;
            auVar7[0] = uVar51;
            auVar7[2] = uVar53;
            auVar7[3] = uVar54;
            auVar7[4] = uVar55;
            auVar7[5] = uVar56;
            auVar7[6] = uVar57;
            auVar7[7] = uVar58;
            auVar7[8] = uVar59;
            auVar7[9] = uVar60;
            auVar7[10] = uVar61;
            auVar7[0xb] = uVar62;
            auVar7[0xc] = uVar63;
            auVar7[0xd] = uVar64;
            auVar7[0xe] = uVar65;
            auVar7[0xf] = uVar66;
            auVar68 = NEON_ext(auVar6,auVar7,8,1);
            fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                     auVar68._0_4_ +
                     (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                     auVar68._4_4_;
            uVar51 = SUB41(fVar67,0);
            uVar52 = (undefined1)((uint)fVar67 >> 8);
            uVar53 = (undefined1)((uint)fVar67 >> 0x10);
            uVar54 = (undefined1)((uint)fVar67 >> 0x18);
            for (uVar43 = uVar28; uVar43 != uVar32; uVar43 = uVar43 + 1) {
              fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                       *(float *)(*pauStack_108 + uVar43 * 4 + lVar35) * pfStack_d8[uVar43];
              uVar51 = SUB41(fVar67,0);
              uVar52 = (undefined1)((uint)fVar67 >> 8);
              uVar53 = (undefined1)((uint)fVar67 >> 0x10);
              uVar54 = (undefined1)((uint)fVar67 >> 0x18);
            }
          }
          pfVar22[uVar32] =
               pfVar22[uVar32] - (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
          pfVar22 = (float *)auStack_a0;
          if (1 < lVar50) {
            if (lVar2 == 1) {
              if (uVar32 < 4) {
                fVar67 = *pfStack_a8 * *pfStack_d8;
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                if (uVar32 != 1) {
                  uVar28 = 1;
                  do {
                    fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                             *(float *)(*pauStack_108 + uVar28 * 4 + uStack_100 * lVar49) *
                             pfStack_d8[uVar28];
                    uVar51 = SUB41(fVar67,0);
                    uVar52 = (undefined1)((uint)fVar67 >> 8);
                    uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                    uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                    uVar28 = uVar28 + 1;
                  } while (uVar32 != uVar28);
                }
              }
              else {
                fVar67 = (float)*(undefined8 *)pfStack_a8 * *pfStack_d8;
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                fVar67 = (float)((ulong)*(undefined8 *)pfStack_a8 >> 0x20) * pfStack_d8[1];
                uVar55 = SUB41(fVar67,0);
                uVar56 = (undefined1)((uint)fVar67 >> 8);
                uVar57 = (undefined1)((uint)fVar67 >> 0x10);
                uVar58 = (undefined1)((uint)fVar67 >> 0x18);
                fVar67 = (float)*(undefined8 *)(pfStack_a8 + 2) * pfStack_d8[2];
                uVar59 = SUB41(fVar67,0);
                uVar60 = (undefined1)((uint)fVar67 >> 8);
                uVar61 = (undefined1)((uint)fVar67 >> 0x10);
                uVar62 = (undefined1)((uint)fVar67 >> 0x18);
                fVar67 = (float)((ulong)*(undefined8 *)(pfStack_a8 + 2) >> 0x20) * pfStack_d8[3];
                uVar63 = SUB41(fVar67,0);
                uVar64 = (undefined1)((uint)fVar67 >> 8);
                uVar65 = (undefined1)((uint)fVar67 >> 0x10);
                uVar66 = (undefined1)((uint)fVar67 >> 0x18);
                if (7 < uVar32) {
                  auVar68 = *(undefined1 (*) [16])(pfStack_d8 + 4);
                  fVar67 = pfStack_a8[4] * auVar68._0_4_;
                  fVar69 = pfStack_a8[5] * auVar68._4_4_;
                  fVar70 = pfStack_a8[6] * auVar68._8_4_;
                  fVar71 = pfStack_a8[7] * auVar68._12_4_;
                  if (0xf < uVar32) {
                    pfVar20 = pfStack_d8 + 0xc;
                    puVar34 = (undefined8 *)(pauStack_108[3] + uStack_100 * lVar49);
                    uVar43 = 8;
                    do {
                      fVar8 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                              *(float *)(puVar34 + -2) * (float)*(undefined8 *)(pfVar20 + -4);
                      uVar51 = SUB41(fVar8,0);
                      uVar52 = (undefined1)((uint)fVar8 >> 8);
                      uVar53 = (undefined1)((uint)fVar8 >> 0x10);
                      uVar54 = (undefined1)((uint)fVar8 >> 0x18);
                      fVar8 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                              *(float *)((long)puVar34 + -0xc) *
                              (float)((ulong)*(undefined8 *)(pfVar20 + -4) >> 0x20);
                      uVar55 = SUB41(fVar8,0);
                      uVar56 = (undefined1)((uint)fVar8 >> 8);
                      uVar57 = (undefined1)((uint)fVar8 >> 0x10);
                      uVar58 = (undefined1)((uint)fVar8 >> 0x18);
                      fVar8 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) +
                              *(float *)(puVar34 + -1) * (float)*(undefined8 *)(pfVar20 + -2);
                      uVar59 = SUB41(fVar8,0);
                      uVar60 = (undefined1)((uint)fVar8 >> 8);
                      uVar61 = (undefined1)((uint)fVar8 >> 0x10);
                      uVar62 = (undefined1)((uint)fVar8 >> 0x18);
                      fVar8 = (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                              *(float *)((long)puVar34 + -4) *
                              (float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20);
                      uVar63 = SUB41(fVar8,0);
                      uVar64 = (undefined1)((uint)fVar8 >> 8);
                      uVar65 = (undefined1)((uint)fVar8 >> 0x10);
                      uVar66 = (undefined1)((uint)fVar8 >> 0x18);
                      fVar67 = fVar67 + (float)*puVar34 * (float)*(undefined8 *)pfVar20;
                      fVar69 = fVar69 + (float)((ulong)*puVar34 >> 0x20) *
                                        (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
                      fVar70 = fVar70 + (float)puVar34[1] * (float)*(undefined8 *)(pfVar20 + 2);
                      fVar71 = fVar71 + (float)((ulong)puVar34[1] >> 0x20) *
                                        (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
                      uVar43 = uVar43 + 8;
                      pfVar20 = pfVar20 + 8;
                      puVar34 = puVar34 + 4;
                    } while (uVar43 < uVar41);
                  }
                  fVar67 = fVar67 + (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))
                  ;
                  uVar51 = SUB41(fVar67,0);
                  uVar52 = (undefined1)((uint)fVar67 >> 8);
                  uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                  uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                  fVar69 = fVar69 + (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)))
                  ;
                  uVar55 = SUB41(fVar69,0);
                  uVar56 = (undefined1)((uint)fVar69 >> 8);
                  uVar57 = (undefined1)((uint)fVar69 >> 0x10);
                  uVar58 = (undefined1)((uint)fVar69 >> 0x18);
                  fVar70 = fVar70 + (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))
                  ;
                  uVar59 = SUB41(fVar70,0);
                  uVar60 = (undefined1)((uint)fVar70 >> 8);
                  uVar61 = (undefined1)((uint)fVar70 >> 0x10);
                  uVar62 = (undefined1)((uint)fVar70 >> 0x18);
                  fVar71 = fVar71 + (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63)))
                  ;
                  uVar63 = SUB41(fVar71,0);
                  uVar64 = (undefined1)((uint)fVar71 >> 8);
                  uVar65 = (undefined1)((uint)fVar71 >> 0x10);
                  uVar66 = (undefined1)((uint)fVar71 >> 0x18);
                  if ((long)uVar41 < (long)uVar28) {
                    pfVar20 = pfStack_a8 + uVar41;
                    auVar68 = *(undefined1 (*) [16])(pfStack_d8 + uVar41);
                    fVar67 = fVar67 + *pfVar20 * auVar68._0_4_;
                    uVar51 = SUB41(fVar67,0);
                    uVar52 = (undefined1)((uint)fVar67 >> 8);
                    uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                    uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                    fVar69 = fVar69 + pfVar20[1] * auVar68._4_4_;
                    uVar55 = SUB41(fVar69,0);
                    uVar56 = (undefined1)((uint)fVar69 >> 8);
                    uVar57 = (undefined1)((uint)fVar69 >> 0x10);
                    uVar58 = (undefined1)((uint)fVar69 >> 0x18);
                    fVar70 = fVar70 + pfVar20[2] * auVar68._8_4_;
                    uVar59 = SUB41(fVar70,0);
                    uVar60 = (undefined1)((uint)fVar70 >> 8);
                    uVar61 = (undefined1)((uint)fVar70 >> 0x10);
                    uVar62 = (undefined1)((uint)fVar70 >> 0x18);
                    fVar71 = fVar71 + pfVar20[3] * auVar68._12_4_;
                    uVar63 = SUB41(fVar71,0);
                    uVar64 = (undefined1)((uint)fVar71 >> 8);
                    uVar65 = (undefined1)((uint)fVar71 >> 0x10);
                    uVar66 = (undefined1)((uint)fVar71 >> 0x18);
                  }
                }
                auVar4[1] = uVar52;
                auVar4[0] = uVar51;
                auVar4[2] = uVar53;
                auVar4[3] = uVar54;
                auVar4[4] = uVar55;
                auVar4[5] = uVar56;
                auVar4[6] = uVar57;
                auVar4[7] = uVar58;
                auVar4[8] = uVar59;
                auVar4[9] = uVar60;
                auVar4[10] = uVar61;
                auVar4[0xb] = uVar62;
                auVar4[0xc] = uVar63;
                auVar4[0xd] = uVar64;
                auVar4[0xe] = uVar65;
                auVar4[0xf] = uVar66;
                auVar5[1] = uVar52;
                auVar5[0] = uVar51;
                auVar5[2] = uVar53;
                auVar5[3] = uVar54;
                auVar5[4] = uVar55;
                auVar5[5] = uVar56;
                auVar5[6] = uVar57;
                auVar5[7] = uVar58;
                auVar5[8] = uVar59;
                auVar5[9] = uVar60;
                auVar5[10] = uVar61;
                auVar5[0xb] = uVar62;
                auVar5[0xc] = uVar63;
                auVar5[0xd] = uVar64;
                auVar5[0xe] = uVar65;
                auVar5[0xf] = uVar66;
                auVar68 = NEON_ext(auVar4,auVar5,8,1);
                fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                         auVar68._0_4_ +
                         (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                         auVar68._4_4_;
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                if (uVar28 != uVar32) {
                  do {
                    fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                             *(float *)(*pauStack_108 + uVar28 * 4 + uStack_100 * lVar49) *
                             pfStack_d8[uVar28];
                    uVar51 = SUB41(fVar67,0);
                    uVar52 = (undefined1)((uint)fVar67 >> 8);
                    uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                    uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                    uVar28 = uVar28 + 1;
                  } while (uVar32 != uVar28);
                }
              }
              pfStack_a8[uVar32] =
                   pfStack_a8[uVar32] -
                   (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
            }
            else {
              pfVar20 = (float *)auStack_a0;
              if (uVar32 >> 0x3e != 0) goto LAB_10953aa38;
              auStack_a0[0] = uStack_100;
              pfStack_b8 = pfStack_d8;
              uStack_b0 = 1;
              FUN_1093c55d4(lVar2,uVar32,&pfStack_a8,&pfStack_b8);
              pfVar22 = pfStack_a8;
            }
          }
          pfStack_a8 = pfVar22;
          fVar67 = *(float *)(*pauStack_108 + uVar32 * 4 + uStack_100 * uVar32 * 4);
          uVar51 = SUB41(fVar67,0);
          uVar52 = (undefined1)((uint)fVar67 >> 8);
          uVar53 = (undefined1)((uint)fVar67 >> 0x10);
          uVar54 = (undefined1)((uint)fVar67 >> 0x18);
          bVar18 = 0.0 < fVar67 || fVar67 < 0.0;
LAB_10953a2bc:
          if ((lVar50 < 2) || (!bVar18)) {
            if ((bool)(1 < lVar50 & bVar17)) {
              puVar36 = *pauVar30 + uVar24 * lVar49;
              lVar50 = lVar47;
              do {
                bVar17 = lVar50 != 0;
                lVar50 = lVar50 + -1;
                bVar16 = *(float *)(puVar36 + lVar48) == 0.0;
                if (!bVar16) break;
                puVar36 = puVar36 + uStack_100 * 4;
              } while (bVar17);
            }
            else {
              bVar16 = (bool)(lVar50 < 2 & bVar17);
            }
          }
          else {
            puVar36 = *pauVar30 + uVar24 * lVar49;
            lVar50 = lVar21;
            do {
              *(float *)(puVar36 + lVar48) =
                   *(float *)(puVar36 + lVar48) /
                   (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
              puVar36 = puVar36 + uStack_100 * 4;
              lVar50 = lVar50 + -1;
              bVar16 = bVar17;
            } while (lVar50 != 0);
          }
          bVar17 = (bool)((bVar13 & bVar18 ^ 1) & bVar16);
          if (!bVar18) {
            bVar17 = bVar16;
          }
          if (iStack_c8 == 2) {
            bVar16 = NAN((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))));
            bVar15 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) < 0.0;
            if ((bVar16 || (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) != 0.0)
                && (!bVar16 && bVar15) == bVar16) {
              iStack_c8 = 0;
            }
            else if (!bVar16 && bVar15) {
              iStack_c8 = 1;
            }
          }
          else if (iStack_c8 == 1) {
            bVar16 = NAN((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))));
            if ((bVar16 || (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) != 0.0)
                && (!bVar16 &&
                   (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) < 0.0) == bVar16
               ) goto LAB_10953a380;
          }
          else if ((iStack_c8 == 0) &&
                  (!NAN((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))) &&
                   (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) < 0.0)) {
LAB_10953a380:
            iStack_c8 = 3;
          }
          bVar13 = bVar18 ^ 1U | bVar13;
          uVar37 = uVar37 - 1;
          lVar27 = lVar27 + 1;
          uVar32 = uVar32 + 1;
          lVar48 = lVar48 + 4;
          lVar21 = lVar21 + -1;
          lVar49 = lVar49 + 4;
          lVar47 = lVar47 + -1;
          if (uVar40 == uVar29) goto LAB_10953a43c;
        }
        fVar67 = *(float *)*pauStack_108;
        uVar51 = SUB41(fVar67,0);
        uVar52 = (undefined1)((uint)fVar67 >> 8);
        uVar53 = (undefined1)((uint)fVar67 >> 0x10);
        uVar54 = (undefined1)((uint)fVar67 >> 0x18);
        bVar18 = true;
        if ((fVar67 < 0.0) || (fVar67 != 0.0)) goto LAB_10953a2bc;
        uVar32 = 0;
        iStack_c8 = 2;
        pfVar22 = (float *)(*pauStack_108 + (uStack_100 + uStack_100 * (uStack_f8 - uVar29)) * 4);
        do {
          *(int *)(lStack_e8 + uVar32 * 4) = (int)uVar32;
          if (bVar17) {
            pfVar20 = pfVar22;
            lVar21 = lVar26;
            if ((long)(uVar29 + ~uVar32) < 1) {
              bVar17 = true;
            }
            else {
              do {
                fVar67 = *pfVar20;
                uVar51 = SUB41(fVar67,0);
                uVar52 = (undefined1)((uint)fVar67 >> 8);
                uVar53 = (undefined1)((uint)fVar67 >> 0x10);
                uVar54 = (undefined1)((uint)fVar67 >> 0x18);
                bVar18 = lVar21 != 0;
                bVar17 = fVar67 == 0.0;
                if (!bVar17) break;
                pfVar20 = pfVar20 + uStack_100;
                lVar21 = lVar21 + -1;
              } while (bVar18);
            }
          }
          else {
            bVar17 = false;
          }
          uVar32 = uVar32 + 1;
          lVar26 = lVar26 + -1;
          pfVar22 = pfVar22 + uStack_100 + 1;
        } while (uVar32 != uVar29);
LAB_10953a43c:
        uStack_c0 = (uint)(bVar17 ^ 1);
        uStack_c4 = 1;
        if (bVar17) goto LAB_10953a478;
        _free(pfStack_d8);
        _free(lStack_e8);
        _free(pauStack_108);
        goto LAB_10953a9f4;
      }
      if (0 < (long)uStack_e0) {
        uVar32 = 0;
        do {
          *(int *)(lStack_e8 + uVar32 * 4) = (int)uVar32;
          uVar32 = uVar32 + 1;
        } while (uStack_e0 != uVar32);
      }
      if (uStack_f8 == 0) {
        iStack_c8 = 2;
      }
      else {
        fVar67 = *(float *)*pauStack_108;
        uVar51 = SUB41(fVar67,0);
        uVar52 = (undefined1)((uint)fVar67 >> 8);
        uVar53 = (undefined1)((uint)fVar67 >> 0x10);
        uVar54 = (undefined1)((uint)fVar67 >> 0x18);
        if (fVar67 <= 0.0) {
          iStack_c8 = 2;
          if (fVar67 < 0.0) {
            iStack_c8 = 1;
          }
        }
        else {
          iStack_c8 = 0;
        }
      }
      uStack_c0 = 0;
LAB_10953a478:
      uStack_c4 = 1;
      uVar32 = uStack_f8;
      if (uStack_128 != uStack_f8) {
        FUN_1093c61bc(&pauStack_130,uStack_f8,1);
        uVar32 = uStack_128;
      }
      uVar29 = uVar32;
      if (uVar32 != uStack_e0) {
        FUN_1093c61bc(&pauStack_130,uStack_e0,1);
        uVar32 = uStack_128;
        uVar29 = uStack_e0;
      }
      pauVar30 = (undefined1 (*) [16])*plStack_188;
      uVar37 = plStack_188[1];
      if ((pauStack_130 != pauVar30) || (uVar32 != uVar37)) {
        if (uVar32 != uVar37) {
          FUN_1093c61bc(&pauStack_130,uVar37,1);
          uVar32 = uStack_128;
        }
        uVar37 = uVar32 + 3;
        if (-1 < (long)uVar32) {
          uVar37 = uVar32;
        }
        if (3 < (long)uVar32) {
          lVar21 = 0;
          pauVar33 = pauStack_130;
          pauVar25 = pauVar30;
          do {
            uVar10 = *(undefined8 *)*pauVar25;
            uVar51 = (undefined1)uVar10;
            uVar52 = (undefined1)((ulong)uVar10 >> 8);
            uVar53 = (undefined1)((ulong)uVar10 >> 0x10);
            uVar54 = (undefined1)((ulong)uVar10 >> 0x18);
            *(undefined8 *)(*pauVar33 + 8) = *(undefined8 *)(*pauVar25 + 8);
            *(undefined8 *)*pauVar33 = uVar10;
            lVar21 = lVar21 + 4;
            pauVar33 = pauVar33 + 1;
            pauVar25 = pauVar25 + 1;
          } while (lVar21 < (long)(uVar37 & 0xfffffffffffffffc));
        }
        lVar21 = (long)uVar32 % 4;
        if (lVar21 != 0 && lVar21 < 0 == SBORROW8(uVar32,uVar37 & 0xfffffffffffffffc)) {
          pauVar30 = pauVar30 + ((long)uVar37 >> 2);
          pauVar33 = pauStack_130 + ((long)uVar37 >> 2);
          do {
            uVar9 = *(undefined4 *)*pauVar30;
            uVar51 = (undefined1)uVar9;
            uVar52 = (undefined1)((uint)uVar9 >> 8);
            uVar53 = (undefined1)((uint)uVar9 >> 0x10);
            uVar54 = (undefined1)((uint)uVar9 >> 0x18);
            *(undefined4 *)*pauVar33 = uVar9;
            lVar21 = lVar21 + -1;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
            pauVar33 = (undefined1 (*) [16])(*pauVar33 + 4);
          } while (lVar21 != 0);
        }
      }
      if (0 < (long)uVar29) {
        uVar32 = 0;
        do {
          uVar37 = (ulong)*(int *)(lStack_e8 + uVar32 * 4);
          if (uVar32 != uVar37) {
            uVar9 = *(undefined4 *)(*pauStack_130 + uVar32 * 4);
            uVar51 = (undefined1)uVar9;
            uVar52 = (undefined1)((uint)uVar9 >> 8);
            uVar53 = (undefined1)((uint)uVar9 >> 0x10);
            uVar54 = (undefined1)((uint)uVar9 >> 0x18);
            *(undefined4 *)(*pauStack_130 + uVar32 * 4) =
                 *(undefined4 *)(*pauStack_130 + uVar37 * 4);
            *(undefined4 *)(*pauStack_130 + uVar37 * 4) = uVar9;
          }
          uVar32 = uVar32 + 1;
        } while (uVar29 != uVar32);
      }
      if (uStack_100 == 0) {
        uVar32 = 0;
      }
      else {
        FUN_10953b858(&pauStack_108,pauStack_130,uStack_128);
        uVar32 = uStack_100;
      }
      uVar29 = uStack_f8;
      if ((long)uVar32 <= (long)uStack_f8) {
        uVar29 = uVar32;
      }
      if (0 < (long)uVar29) {
        pauVar30 = pauStack_108;
        pauVar33 = pauStack_130;
        do {
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          if (1.1754944e-38 < ABS(*(float *)*pauVar30)) {
            fVar67 = *(float *)*pauVar33 / *(float *)*pauVar30;
            uVar51 = SUB41(fVar67,0);
            uVar52 = (undefined1)((uint)fVar67 >> 8);
            uVar53 = (undefined1)((uint)fVar67 >> 0x10);
            uVar54 = (undefined1)((uint)fVar67 >> 0x18);
          }
          pauVar30 = (undefined1 (*) [16])(*pauVar30 + uVar32 * 4 + 4);
          *(uint *)*pauVar33 = CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
          uVar29 = uVar29 - 1;
          pauVar33 = (undefined1 (*) [16])(*pauVar33 + 4);
        } while (uVar29 != 0);
      }
      if (uStack_f8 != 0) {
        FUN_10953bb00(&pauStack_108,pauStack_130);
      }
      uVar32 = uStack_128;
      if (uStack_128 != uStack_e0) {
        FUN_1093c61bc(&pauStack_130,uStack_e0,1);
        uVar32 = uStack_e0;
      }
      if (0 < (long)uVar32) {
        do {
          uVar29 = uVar32 - 1;
          uVar37 = (ulong)*(int *)(lStack_e8 + uVar29 * 4);
          if (uVar29 != uVar37) {
            uVar9 = *(undefined4 *)(pauStack_130[-1] + uVar32 * 4 + 0xc);
            uVar51 = (undefined1)uVar9;
            uVar52 = (undefined1)((uint)uVar9 >> 8);
            uVar53 = (undefined1)((uint)uVar9 >> 0x10);
            uVar54 = (undefined1)((uint)uVar9 >> 0x18);
            *(undefined4 *)(pauStack_130[-1] + uVar32 * 4 + 0xc) =
                 *(undefined4 *)(*pauStack_130 + uVar37 * 4);
            *(undefined4 *)(*pauStack_130 + uVar37 * 4) = uVar9;
          }
          bVar17 = 1 < uVar32;
          uVar32 = uVar29;
        } while (bVar17);
      }
      _free(pfStack_d8);
      _free(lStack_e8);
      _free(pauStack_108);
      puVar34 = (undefined8 *)*param_3;
      uVar32 = uStack_128 + 3;
      if (-1 < (long)uStack_128) {
        uVar32 = uStack_128;
      }
      if (3 < (long)uStack_128) {
        lVar21 = 0;
        pauVar30 = pauStack_130;
        puVar39 = puVar34;
        do {
          auVar68 = *pauVar30;
          fVar67 = (float)*puVar39 + auVar68._0_4_;
          uVar51 = SUB41(fVar67,0);
          uVar52 = (undefined1)((uint)fVar67 >> 8);
          uVar53 = (undefined1)((uint)fVar67 >> 0x10);
          uVar54 = (undefined1)((uint)fVar67 >> 0x18);
          fVar69 = (float)((ulong)*puVar39 >> 0x20) + auVar68._4_4_;
          fVar70 = (float)((ulong)puVar39[1] >> 0x20) + auVar68._12_4_;
          *(ulong *)(*pauVar30 + 8) =
               CONCAT17((char)((uint)fVar70 >> 0x18),
                        CONCAT16((char)((uint)fVar70 >> 0x10),
                                 CONCAT15((char)((uint)fVar70 >> 8),
                                          CONCAT14(SUB41(fVar70,0),(float)puVar39[1] + auVar68._8_4_
                                                  ))));
          *(ulong *)*pauVar30 =
               CONCAT17((char)((uint)fVar69 >> 0x18),
                        CONCAT16((char)((uint)fVar69 >> 0x10),
                                 CONCAT15((char)((uint)fVar69 >> 8),CONCAT14(SUB41(fVar69,0),fVar67)
                                         )));
          lVar21 = lVar21 + 4;
          pauVar30 = pauVar30 + 1;
          puVar39 = puVar39 + 2;
        } while (lVar21 < (long)(uVar32 & 0xfffffffffffffffc));
      }
      lVar21 = (long)uStack_128 % 4;
      if (lVar21 != 0 && (long)(uVar32 & 0xfffffffffffffffc) <= (long)uStack_128) {
        pauVar30 = pauStack_130 + ((long)uVar32 >> 2);
        pfVar22 = (float *)(puVar34 + ((long)uVar32 >> 2) * 2);
        do {
          fVar67 = *pfVar22 + *(float *)*pauVar30;
          uVar51 = SUB41(fVar67,0);
          uVar52 = (undefined1)((uint)fVar67 >> 8);
          uVar53 = (undefined1)((uint)fVar67 >> 0x10);
          uVar54 = (undefined1)((uint)fVar67 >> 0x18);
          *(float *)*pauVar30 = fVar67;
          lVar21 = lVar21 + -1;
          pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
          pfVar22 = pfVar22 + 1;
        } while (lVar21 != 0);
      }
      pauStack_108 = pauStack_130;
      uStack_100 = uStack_128;
      (**(code **)(*param_2 + 0x28))(param_2,&pauStack_108);
      pauVar30 = pauStack_130;
      fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      fVar69 = 1.0 - (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) / fVar73;
      if (fVar69 < (float)param_1[1]) {
        if (0.0 <= fVar69) {
          uVar32 = uStack_128;
          if (param_3[1] != uStack_128) {
            FUN_1093c61bc(param_3,uStack_128,1);
            uVar32 = param_3[1];
          }
          param_3 = (undefined8 *)*param_3;
          uVar29 = uVar32 + 3;
          if (-1 < (long)uVar32) {
            uVar29 = uVar32;
          }
          if (3 < (long)uVar32) {
            lVar21 = 0;
            puVar34 = param_3;
            pauVar33 = pauVar30;
            do {
              uVar10 = *(undefined8 *)*pauVar33;
              puVar34[1] = *(undefined8 *)(*pauVar33 + 8);
              *puVar34 = uVar10;
              lVar21 = lVar21 + 4;
              puVar34 = puVar34 + 2;
              pauVar33 = pauVar33 + 1;
            } while (lVar21 < (long)(uVar29 & 0xfffffffffffffffc));
          }
          lVar21 = (long)uVar32 % 4;
          if (lVar21 != 0 && lVar21 < 0 == SBORROW8(uVar32,uVar29 & 0xfffffffffffffffc)) {
            puVar34 = param_3 + ((long)uVar29 >> 2) * 2;
            pauVar30 = pauVar30 + ((long)uVar29 >> 2);
            do {
              *(undefined4 *)puVar34 = *(undefined4 *)*pauVar30;
              lVar21 = lVar21 + -1;
              puVar34 = (undefined8 *)((long)puVar34 + 4);
              pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
            } while (lVar21 != 0);
          }
LAB_10953a9f4:
          _free(pauStack_130);
          break;
        }
        fVar74 = fVar74 * 1000.0;
        if (0 < (long)uStack_118) {
          uVar32 = uStack_118;
          pfVar22 = pfStack_120;
          do {
            *pfVar22 = fVar74 * 0.999 + *pfVar22;
            pfVar22 = pfVar22 + uStack_118 + 1;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
      }
      else {
        uVar32 = uStack_128;
        if (param_3[1] != uStack_128) {
          FUN_1093c61bc(param_3,uStack_128,1);
          uVar32 = param_3[1];
        }
        puVar34 = (undefined8 *)*param_3;
        uVar29 = uVar32 + 3;
        if (-1 < (long)uVar32) {
          uVar29 = uVar32;
        }
        if (3 < (long)uVar32) {
          lVar21 = 0;
          puVar39 = puVar34;
          pauVar33 = pauVar30;
          do {
            uVar10 = *(undefined8 *)*pauVar33;
            puVar39[1] = *(undefined8 *)(*pauVar33 + 8);
            *puVar39 = uVar10;
            lVar21 = lVar21 + 4;
            puVar39 = puVar39 + 2;
            pauVar33 = pauVar33 + 1;
          } while (lVar21 < (long)(uVar29 & 0xfffffffffffffffc));
        }
        lVar21 = (long)uVar32 % 4;
        if (lVar21 != 0 && lVar21 < 0 == SBORROW8(uVar32,uVar29 & 0xfffffffffffffffc)) {
          puVar34 = puVar34 + ((long)uVar29 >> 2) * 2;
          pauVar30 = pauVar30 + ((long)uVar29 >> 2);
          do {
            *(undefined4 *)puVar34 = *(undefined4 *)*pauVar30;
            lVar21 = lVar21 + -1;
            puVar34 = (undefined8 *)((long)puVar34 + 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
          } while (lVar21 != 0);
        }
        pauStack_108 = (undefined1 (*) [16])*param_3;
        uStack_100 = param_3[1];
        (**(code **)(*param_2 + 0x10))(param_2,&pauStack_108);
        plVar19 = param_2;
        (**(code **)(*param_2 + 0x18))();
        puVar34 = (undefined8 *)*plVar19;
        uVar32 = plVar19[1];
        lVar21 = plVar19[2];
        if (uStack_118 != uVar32 || lStack_110 != lVar21) {
          lVar27 = 0;
          if (lVar21 != 0) {
            lVar27 = 0x7fffffffffffffff / lVar21;
          }
          if ((uVar32 != 0 && lVar21 != 0) && lVar27 < (long)uVar32) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
LAB_10953aa7c:
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10953aa80);
            (*pcVar14)();
          }
          FUN_1093c3d54(&pfStack_120,lVar21 * uVar32);
          uVar32 = uStack_118;
          lVar21 = lStack_110;
        }
        uVar32 = uVar32 * lVar21;
        uVar29 = uVar32 + 3;
        if (-1 < (long)uVar32) {
          uVar29 = uVar32;
        }
        if (3 < (long)uVar32) {
          lVar21 = 0;
          pfVar22 = pfStack_120;
          puVar39 = puVar34;
          do {
            uVar10 = *puVar39;
            *(undefined8 *)(pfVar22 + 2) = puVar39[1];
            *(undefined8 *)pfVar22 = uVar10;
            lVar21 = lVar21 + 4;
            pfVar22 = pfVar22 + 4;
            puVar39 = puVar39 + 2;
          } while (lVar21 < (long)(uVar29 & 0xfffffffffffffffc));
        }
        lVar21 = (long)uVar32 % 4;
        if (lVar21 != 0 && lVar21 < 0 == SBORROW8(uVar32,uVar29 & 0xfffffffffffffffc)) {
          pfVar22 = pfStack_120 + ((long)uVar29 >> 2) * 4;
          pfVar20 = (float *)(puVar34 + ((long)uVar29 >> 2) * 2);
          do {
            *pfVar22 = *pfVar20;
            lVar21 = lVar21 + -1;
            pfVar22 = pfVar22 + 1;
            pfVar20 = pfVar20 + 1;
          } while (lVar21 != 0);
        }
        plStack_188 = param_2;
        (**(code **)(*param_2 + 0x20))();
        fVar74 = fVar74 * 0.1;
        uVar32 = uStack_118;
        pfVar22 = pfStack_120;
        fVar73 = fVar67;
        if (0 < (long)uStack_118) {
          do {
            *pfVar22 = fVar74 + *pfVar22;
            uVar32 = uVar32 - 1;
            pfVar22 = pfVar22 + uStack_118 + 1;
          } while (uVar32 != 0);
        }
      }
      _free(pauStack_130);
      iVar31 = iVar31 + 1;
    } while (iVar31 < *param_1);
  }
  _free(pfStack_120);
  return;
}



/* Entry: 10953aacc; end: 10953abb7;  */

void FUN_10953aacc(float param_1,float param_2,undefined8 param_3,long param_4,float *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_6 != 0) {
    uVar1 = 1 << (ulong)(param_6 & 0x1f);
    if ((int)param_6 < 1) {
      fVar6 = (float)uVar1;
      param_1 = param_1 * fVar6;
      param_2 = param_2 * fVar6;
    }
    else {
      fVar6 = (float)(int)uVar1;
      param_1 = param_1 / fVar6;
      param_2 = param_2 / fVar6;
    }
  }
  uVar2 = *(int *)(param_4 + 0xc) - 2;
  uVar1 = (int)param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_4 + 8) - 2;
  uVar1 = (int)param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 <= (int)uVar3) {
    uVar3 = uVar1;
  }
  param_2 = param_2 - (float)(int)uVar3;
  lVar5 = *(long *)(param_4 + 0x10) + **(long **)(param_4 + 0x48) * (long)(int)uVar3;
  fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + (int)uVar2));
  lVar4 = *(long *)(param_4 + 0x10) + **(long **)(param_4 + 0x48) * (long)(int)(uVar3 + 1);
  fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + (int)uVar2));
  fVar8 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + (long)(int)uVar2 + 1));
  fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + (long)(int)uVar2 + 1));
  *param_5 = ((param_1 - (float)(int)uVar2) * (param_2 * fVar9 + fVar8 * (1.0 - param_2)) +
             (1.0 - (param_1 - (float)(int)uVar2)) * (param_2 * fVar7 + fVar6 * (1.0 - param_2))) *
             0.003921569;
  return;
}



/* Entry: 10953abb8; end: 10953b373;  */

float * FUN_10953abb8(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  ulong uVar29;
  float *pfVar30;
  float *pfVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  
  puStack_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_1093c61bc(&puStack_b0,param_2[1],1);
  puVar20 = (undefined8 *)*param_2;
  uVar16 = param_2[1];
  if (uStack_a8 != uVar16) {
    FUN_1093c61bc(&puStack_b0,uVar16,1);
    uVar16 = uStack_a8;
  }
  puVar10 = puStack_b0;
  uVar34 = uVar16 + 3;
  if (-1 < (long)uVar16) {
    uVar34 = uVar16;
  }
  if (3 < (long)uVar16) {
    lVar25 = 0;
    puVar14 = puStack_b0;
    puVar27 = puVar20;
    do {
      uVar40 = *puVar27;
      puVar14[1] = puVar27[1];
      *puVar14 = uVar40;
      lVar25 = lVar25 + 4;
      puVar14 = puVar14 + 2;
      puVar27 = puVar27 + 2;
    } while (lVar25 < (long)(uVar34 & 0xfffffffffffffffc));
  }
  lVar25 = (long)uVar16 % 4;
  if (lVar25 != 0 && lVar25 < 0 == SBORROW8(uVar16,uVar34 & 0xfffffffffffffffc)) {
    puVar14 = puStack_b0 + ((long)uVar34 >> 2) * 2;
    puVar20 = puVar20 + ((long)uVar34 >> 2) * 2;
    do {
      *(undefined4 *)puVar14 = *(undefined4 *)puVar20;
      lVar25 = lVar25 + -1;
      puVar14 = (undefined8 *)((long)puVar14 + 4);
      puVar20 = (undefined8 *)((long)puVar20 + 4);
    } while (lVar25 != 0);
  }
  FUN_10953b65c(param_1,puStack_b0);
  _free(puVar10);
  iVar13 = *(int *)(param_1 + 0x104);
  lVar25 = (long)iVar13;
  if (iVar13 != 0) {
    lVar33 = 0;
    if (lVar25 != 0) {
      lVar33 = 0x7fffffffffffffff / lVar25;
    }
    if (lVar33 < lVar25) {
LAB_10953b340:
      lVar25 = 8;
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      _free(puStack_b0);
      __Unwind_Resume(lVar25);
      return (float *)(lVar25 + 8);
    }
  }
  FUN_1093c3d54(param_1 + 8,(long)iVar13 * (long)iVar13,lVar25,lVar25);
  lVar25 = *(long *)(param_1 + 0x18) * *(long *)(param_1 + 0x10);
  if (0 < lVar25) {
    _bzero(*(undefined8 *)(param_1 + 8),lVar25 * 4);
  }
  FUN_1093c3de4(param_1 + 0x20,(long)*(int *)(param_1 + 0x104));
  if (0 < *(long *)(param_1 + 0x28)) {
    _bzero(*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x28) << 2);
  }
  lVar25 = *(long *)(param_1 + 0x128);
  uVar6 = *(uint *)(param_1 + 0x130);
  iVar13 = *(int *)(lVar25 + 8);
  iVar4 = *(int *)(lVar25 + 0xc);
  fVar48 = *(float *)(param_1 + 0x13c);
  if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0x13c)) {
    fVar48 = *(float *)(param_1 + 0x138);
  }
  uVar7 = *(uint *)(param_1 + 0x104);
  lVar33 = (long)(int)uVar7;
  pfVar15 = (float *)(lVar33 << 3);
  if ((int)uVar7 < 0) {
    pfVar15 = (float *)0xffffffffffffffff;
  }
  __Znam();
  lVar5 = **(long **)(param_1 + 0x118);
  uVar16 = (*(long **)(param_1 + 0x118))[1] - lVar5;
  if (0 < (int)((long)uVar16 >> 3)) {
    uVar34 = 0;
    fVar47 = (float)(iVar4 + -1 << (ulong)(uVar6 & 0x1f));
    fVar55 = (float)(iVar13 + -1 << (ulong)(uVar6 & 0x1f));
    uVar35 = (ulong)uVar7;
    uVar21 = uVar16 >> 3 & 0x7fffffff;
    uVar8 = 1 << (ulong)(uVar6 & 0x1f);
    fVar41 = (float)(int)uVar8;
    fVar36 = (float)uVar8;
    fVar37 = 1.0 / (fVar41 * 255.0);
    if ((uVar16 >> 3 & 0x7ffffffe) == 0) {
      uVar21 = 1;
    }
    uVar8 = iVar4 - 2;
    uVar9 = iVar13 - 2;
    do {
      if (uVar34 == (long)uVar16 >> 3) {
        func_0x0001094c604c();
LAB_10953b33c:
        FUN_10953b80c();
        goto LAB_10953b340;
      }
      pfVar17 = (float *)(lVar5 + uVar34 * 8);
      fVar53 = *pfVar17;
      fVar50 = pfVar17[1];
      fVar38 = *(float *)(param_1 + 0x50) +
               fVar50 * *(float *)(param_1 + 0x4c) + fVar53 * *(float *)(param_1 + 0x48);
      if (fVar38 == 0.0) {
        fVar49 = 0.0;
        fVar38 = 0.0;
      }
      else {
        fVar49 = (*(float *)(param_1 + 0x38) +
                 fVar50 * *(float *)(param_1 + 0x34) + fVar53 * *(float *)(param_1 + 0x30)) / fVar38
        ;
        fVar38 = (*(float *)(param_1 + 0x44) +
                 fVar50 * *(float *)(param_1 + 0x40) + fVar53 * *(float *)(param_1 + 0x3c)) / fVar38
        ;
      }
      fVar52 = *(float *)(param_1 + 0x134);
      if (0.0 < fVar52) {
        fVar49 = (fVar49 - *(float *)(param_1 + 0x138)) / fVar52;
        fVar46 = (fVar38 - *(float *)(param_1 + 0x13c)) / fVar52;
        fVar38 = fVar46 * fVar46 + fVar49 * fVar49;
        fVar38 = fVar52 * (fVar38 * *(float *)(param_1 + 0x140) + 1.0 +
                          fVar38 * *(float *)(param_1 + 0x144) * fVar38);
        fVar49 = *(float *)(param_1 + 0x138) + fVar49 * fVar38;
        fVar38 = *(float *)(param_1 + 0x13c) + fVar46 * fVar38;
      }
      bVar11 = false;
      bVar12 = false;
      if (0.0 <= fVar49) {
        bVar11 = false;
        bVar12 = true;
        if (!NAN(fVar49) && !NAN(fVar47)) {
          bVar11 = fVar49 < fVar47;
          bVar12 = false;
        }
      }
      if (bVar11 != bVar12) {
        bVar11 = false;
        bVar12 = false;
        if (0.0 <= fVar38) {
          bVar11 = false;
          bVar12 = true;
          if (!NAN(fVar38) && !NAN(fVar55)) {
            bVar11 = fVar38 < fVar55;
            bVar12 = false;
          }
        }
        if (bVar11 != bVar12) {
          if (fVar52 <= 0.0) {
            FUN_10953aacc(fVar49,fVar38);
            if (uVar6 != 0) {
              if ((int)uVar6 < 1) {
                fVar49 = fVar49 * fVar36;
                fVar38 = fVar38 * fVar36;
              }
              else {
                fVar49 = fVar49 / fVar41;
                fVar38 = fVar38 / fVar41;
              }
            }
            uVar1 = (int)fVar49 & ((int)fVar49 >> 0x1f ^ 0xffffffffU);
            uVar2 = uVar8;
            if ((int)uVar1 <= (int)uVar8) {
              uVar2 = uVar1;
            }
            uVar1 = (int)fVar38 & ((int)fVar38 >> 0x1f ^ 0xffffffffU);
            uVar3 = uVar9;
            if ((int)uVar1 <= (int)uVar9) {
              uVar3 = uVar1;
            }
            lVar26 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)uVar3;
            fVar46 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (int)uVar2));
            fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (long)(int)uVar2 + 1));
            lVar26 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)(uVar3 + 1);
            fVar52 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (int)uVar2));
            fVar51 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (long)(int)uVar2 + 1));
            fVar38 = fVar37 * ((fVar38 - (float)(int)uVar3) * (fVar51 - fVar52) +
                              (1.0 - (fVar38 - (float)(int)uVar3)) * (fVar45 - fVar46));
            fVar52 = fVar52 - fVar46;
            fVar49 = fVar37 * ((fVar49 - (float)(int)uVar2) * (fVar51 - fVar45) +
                              (1.0 - (fVar49 - (float)(int)uVar2)) * fVar52);
          }
          else {
            fVar46 = *(float *)(param_1 + 0x138);
            fVar51 = fVar49 - fVar46;
            fVar45 = *(float *)(param_1 + 0x13c);
            fVar54 = fVar38 - fVar45;
            if (fVar48 * fVar48 < fVar54 * fVar54 + fVar51 * fVar51) goto LAB_10953b2a4;
            FUN_10953aacc(fVar49,fVar38);
            fVar39 = *(float *)(param_1 + 0x140);
            fVar42 = *(float *)(param_1 + 0x144);
            iVar13 = 5;
            fVar43 = fVar54 / fVar52;
            fVar44 = fVar51 / fVar52;
            do {
              fVar43 = fVar43 * fVar43 + fVar44 * fVar44;
              fVar43 = 1.0 / (fVar43 * fVar39 + 1.0 + fVar43 * fVar42 * fVar43);
              fVar44 = (fVar51 / fVar52) * fVar43;
              fVar43 = (fVar54 / fVar52) * fVar43;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            fVar51 = fVar49;
            fVar54 = fVar38;
            if (uVar6 != 0) {
              fVar51 = fVar49 * fVar36;
              fVar54 = fVar38 * fVar36;
              if (0 < (int)uVar6) {
                fVar51 = fVar49 / fVar41;
                fVar54 = fVar38 / fVar41;
              }
            }
            uVar1 = (int)fVar51 & ((int)fVar51 >> 0x1f ^ 0xffffffffU);
            uVar2 = uVar8;
            if ((int)uVar1 <= (int)uVar8) {
              uVar2 = uVar1;
            }
            uVar1 = (int)fVar54 & ((int)fVar54 >> 0x1f ^ 0xffffffffU);
            uVar3 = uVar9;
            if ((int)uVar1 <= (int)uVar9) {
              uVar3 = uVar1;
            }
            lVar26 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)uVar3;
            fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (int)uVar2));
            fVar49 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (long)(int)uVar2 + 1));
            lVar26 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)(uVar3 + 1);
            fVar56 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (int)uVar2));
            fVar57 = (float)NEON_ucvtf((uint)*(byte *)(lVar26 + (long)(int)uVar2 + 1));
            fVar54 = fVar37 * ((fVar54 - (float)(int)uVar3) * (fVar57 - fVar56) +
                              (1.0 - (fVar54 - (float)(int)uVar3)) * (fVar49 - fVar38));
            fVar49 = fVar37 * ((fVar51 - (float)(int)uVar2) * (fVar57 - fVar49) +
                              (1.0 - (fVar51 - (float)(int)uVar2)) * (fVar56 - fVar38));
            fVar38 = ((fVar46 + fVar44 * fVar52) - fVar46) / fVar52;
            fVar52 = ((fVar45 + fVar43 * fVar52) - fVar45) / fVar52;
            fVar46 = fVar38 * fVar38;
            fVar45 = fVar52 * fVar52;
            fVar51 = fVar46 + fVar45;
            fVar52 = fVar52 * fVar38 * (fVar39 + fVar51 * (fVar42 + fVar42));
            fVar52 = fVar52 + fVar52;
            fVar38 = fVar52 * fVar49 +
                     ((fVar51 + fVar46 * 2.0) * fVar39 + 1.0 +
                     (fVar51 + fVar46 * 4.0) * fVar42 * fVar51) * fVar54;
            fVar49 = ((fVar51 + fVar45 * 2.0) * fVar39 + 1.0 +
                     (fVar51 + fVar45 * 4.0) * fVar42 * fVar51) * fVar49 + fVar52 * fVar54;
          }
          lVar26 = **(long **)(param_1 + 0x120);
          if ((ulong)((*(long **)(param_1 + 0x120))[1] - lVar26 >> 2) <= uVar34) goto LAB_10953b33c;
          fVar46 = puStack_b0._0_4_;
          fVar54 = *(float *)(lVar26 + uVar34 * 4);
          fVar43 = *(float *)(param_1 + 0x5c);
          fVar45 = *(float *)(param_1 + 0x60);
          ___sincosf_stret();
          fVar51 = -(fVar45 * fVar43);
          pfVar15[0] = 1.0;
          pfVar15[1] = 0.0;
          pfVar15[2] = -(fVar45 * fVar50) + fVar52 * fVar53 + fVar45 * 0.0 + fVar52 * 0.0;
          pfVar15[3] = fVar50 * -(fVar52 * fVar43) + fVar51 * fVar53 + fVar43 * fVar52 * 0.0 +
                       fVar51 * 0.0;
          pfVar15[4] = 0.0;
          pfVar15[5] = 1.0;
          pfVar15[6] = fVar45 * -0.0 + fVar52 * 0.0 + fVar45 * fVar53 + fVar52 * fVar50;
          pfVar15[7] = -(fVar52 * fVar43) * 0.0 + fVar51 * 0.0 + fVar43 * fVar52 * fVar53 +
                       fVar51 * fVar50;
          if (0 < (int)uVar7) {
            pfVar17 = pfVar15;
            uVar18 = uVar35;
            do {
              *pfVar17 = fVar49 * pfVar17[lVar33] + *pfVar17 * fVar38;
              uVar18 = uVar18 - 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar18 != 0);
            uVar18 = 0;
            lVar22 = *(long *)(param_1 + 0x20);
            pfVar23 = *(float **)(param_1 + 8);
            lVar26 = *(long *)(param_1 + 0x10);
            pfVar17 = pfVar15;
            uVar29 = uVar35;
            do {
              fVar38 = pfVar15[uVar18];
              *(float *)(lVar22 + uVar18 * 4) =
                   *(float *)(lVar22 + uVar18 * 4) - (fVar46 - fVar54) * fVar38;
              pfVar30 = pfVar17;
              pfVar31 = pfVar23;
              uVar32 = uVar29;
              do {
                *pfVar31 = *pfVar31 + *pfVar30 * fVar38;
                pfVar31 = pfVar31 + lVar26;
                uVar32 = uVar32 - 1;
                pfVar30 = pfVar30 + 1;
              } while (uVar32 != 0);
              uVar18 = uVar18 + 1;
              uVar29 = uVar29 - 1;
              pfVar23 = pfVar23 + lVar26 + 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar18 != uVar35);
          }
        }
      }
LAB_10953b2a4:
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar21);
  }
  if (1 < (int)uVar7) {
    puVar19 = *(undefined4 **)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar25 = 1;
    puVar24 = puVar19;
    do {
      puVar24 = puVar24 + lVar5;
      puVar19 = puVar19 + 1;
      lVar26 = 0;
      puVar28 = puVar19;
      do {
        *puVar28 = puVar24[lVar26];
        lVar26 = lVar26 + 1;
        puVar28 = puVar28 + lVar5;
      } while (lVar25 != lVar26);
      lVar25 = lVar25 + 1;
    } while (lVar25 != lVar33);
  }
  __ZdaPv(pfVar15);
  return pfVar15;
}



/* Entry: 10953b374; end: 10953b383;  */

long FUN_10953b374(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10953b384; end: 10953b65b;  */

float FUN_10953b384(undefined8 param_1,float param_2,long param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 *puStack_a0;
  ulong uStack_98;
  
  puStack_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_1093c61bc(&puStack_a0,param_4[1],1);
  puVar4 = (undefined8 *)*param_4;
  uVar5 = param_4[1];
  if (uStack_98 != uVar5) {
    FUN_1093c61bc(&puStack_a0,uVar5,1);
    uVar5 = uStack_98;
  }
  puVar3 = puStack_a0;
  uVar9 = uVar5 + 3;
  if (-1 < (long)uVar5) {
    uVar9 = uVar5;
  }
  if (3 < (long)uVar5) {
    lVar6 = 0;
    puVar8 = puStack_a0;
    puVar7 = puVar4;
    do {
      uVar15 = *puVar7;
      puVar8[1] = puVar7[1];
      *puVar8 = uVar15;
      lVar6 = lVar6 + 4;
      puVar8 = puVar8 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar6 < (long)(uVar9 & 0xfffffffffffffffc));
  }
  lVar6 = (long)uVar5 % 4;
  if (lVar6 != 0 && lVar6 < 0 == SBORROW8(uVar5,uVar9 & 0xfffffffffffffffc)) {
    puVar8 = puStack_a0 + ((long)uVar9 >> 2) * 2;
    puVar4 = puVar4 + ((long)uVar9 >> 2) * 2;
    do {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar4;
      lVar6 = lVar6 + -1;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
      puVar4 = (undefined8 *)((long)puVar4 + 4);
    } while (lVar6 != 0);
  }
  puVar4 = puStack_a0;
  FUN_10953b65c(param_3);
  _free();
  fVar19 = *(float *)(param_3 + 0x13c);
  fVar20 = *(float *)(param_3 + 0x138);
  fVar14 = fVar19;
  if (fVar20 <= fVar19) {
    fVar14 = fVar20;
  }
  lVar6 = **(long **)(param_3 + 0x118);
  uVar5 = (*(long **)(param_3 + 0x118))[1] - lVar6;
  uVar9 = (long)uVar5 >> 3;
  if ((int)uVar9 < 1) {
    fVar24 = 0.0;
    fVar22 = 0.0;
  }
  else {
    uVar10 = 0;
    puVar8 = *(undefined8 **)(param_3 + 0x128);
    fVar21 = (float)(*(int *)((long)puVar8 + 0xc) + -1 << (ulong)(*(uint *)(param_3 + 0x130) & 0x1f)
                    );
    fVar23 = (float)(*(int *)(puVar8 + 1) + -1 << (ulong)(*(uint *)(param_3 + 0x130) & 0x1f));
    pfVar11 = (float *)(lVar6 + 4);
    fVar22 = 0.0;
    fVar24 = 0.0;
    do {
      if (uVar9 == uVar10) {
        func_0x0001094c604c();
LAB_10953b644:
        FUN_10953b80c();
        _free(puStack_a0);
        __Unwind_Resume();
        *(undefined4 *)((long)puVar3 + 0x54) = *(undefined4 *)puVar4;
        *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)((long)puVar4 + 4);
        *(undefined4 *)((long)puVar3 + 0x5c) = *(undefined4 *)(puVar4 + 1);
        fVar14 = *(float *)((long)puVar4 + 0xc);
        *(float *)(puVar3 + 0xc) = fVar14;
        fVar19 = *(float *)(puVar4 + 1);
        ___sincosf_stret();
        *(float *)(puVar3 + 6) = param_2 * fVar19;
        *(float *)((long)puVar3 + 0x34) = -(fVar19 * fVar14);
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)puVar4;
        *(float *)((long)puVar3 + 0x3c) = fVar14 * fVar19;
        *(float *)(puVar3 + 8) = param_2 * fVar19;
        fVar14 = *(float *)((long)puVar4 + 4);
        *(float *)((long)puVar3 + 0x44) = fVar14;
        puVar3[9] = 0;
        *(undefined4 *)(puVar3 + 10) = 0x3f800000;
        return fVar14;
      }
      fVar12 = pfVar11[-1];
      fVar16 = *pfVar11;
      param_2 = *(float *)(param_3 + 0x50) +
                fVar16 * *(float *)(param_3 + 0x4c) + fVar12 * *(float *)(param_3 + 0x48);
      if (param_2 == 0.0) {
        fVar13 = 0.0;
        param_2 = 0.0;
      }
      else {
        fVar13 = (*(float *)(param_3 + 0x38) +
                 fVar16 * *(float *)(param_3 + 0x34) + fVar12 * *(float *)(param_3 + 0x30)) /
                 param_2;
        param_2 = (*(float *)(param_3 + 0x44) +
                  fVar16 * *(float *)(param_3 + 0x40) + fVar12 * *(float *)(param_3 + 0x3c)) /
                  param_2;
      }
      fVar12 = *(float *)(param_3 + 0x134);
      if (0.0 < fVar12) {
        fVar16 = (fVar13 - fVar20) / fVar12;
        fVar17 = (param_2 - fVar19) / fVar12;
        fVar13 = fVar17 * fVar17 + fVar16 * fVar16;
        fVar18 = fVar12 * (fVar13 * *(float *)(param_3 + 0x140) + 1.0 +
                          fVar13 * fVar13 * *(float *)(param_3 + 0x144));
        fVar13 = fVar20 + fVar16 * fVar18;
        param_2 = fVar19 + fVar17 * fVar18;
      }
      bVar1 = false;
      bVar2 = false;
      if (0.0 <= fVar13) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13) && !NAN(fVar21)) {
          bVar1 = fVar13 < fVar21;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        bVar1 = false;
        bVar2 = false;
        if (0.0 <= param_2) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(param_2) && !NAN(fVar23)) {
            bVar1 = param_2 < fVar23;
            bVar2 = false;
          }
        }
        if ((bVar1 != bVar2) &&
           ((fVar12 <= 0.0 ||
            ((param_2 - fVar19) * (param_2 - fVar19) + (fVar13 - fVar20) * (fVar13 - fVar20) <=
             fVar14 * fVar14)))) {
          puVar4 = puVar8;
          FUN_10953aacc();
          lVar6 = **(long **)(param_3 + 0x120);
          if ((ulong)((*(long **)(param_3 + 0x120))[1] - lVar6 >> 2) <= uVar10) goto LAB_10953b644;
          param_2 = *(float *)(lVar6 + uVar10 * 4);
          fVar22 = fVar22 + (puStack_a0._0_4_ - param_2) * (puStack_a0._0_4_ - param_2);
          fVar24 = fVar24 + 1.0;
        }
      }
      uVar10 = uVar10 + 1;
      pfVar11 = pfVar11 + 2;
    } while ((uVar5 >> 3 & 0x7fffffff) != uVar10);
  }
  fVar14 = fVar22 / fVar24;
  if (fVar24 <= 0.0) {
    fVar14 = 3.4028235e+38;
  }
  return fVar14;
}



/* Entry: 10953b65c; end: 10953b6db;  */

void FUN_10953b65c(undefined8 param_1,float param_2,long param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  
  *(undefined4 *)(param_3 + 0x54) = *param_4;
  *(undefined4 *)(param_3 + 0x58) = param_4[1];
  *(undefined4 *)(param_3 + 0x5c) = param_4[2];
  fVar1 = (float)param_4[3];
  *(float *)(param_3 + 0x60) = fVar1;
  fVar2 = (float)param_4[2];
  ___sincosf_stret();
  *(float *)(param_3 + 0x30) = param_2 * fVar2;
  *(float *)(param_3 + 0x34) = -(fVar2 * fVar1);
  *(undefined4 *)(param_3 + 0x38) = *param_4;
  *(float *)(param_3 + 0x3c) = fVar1 * fVar2;
  *(float *)(param_3 + 0x40) = param_2 * fVar2;
  *(undefined4 *)(param_3 + 0x44) = param_4[1];
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined4 *)(param_3 + 0x50) = 0x3f800000;
  return;
}



/* Entry: 10953b6dc; end: 10953b793;  */

void FUN_10953b6dc(float *param_1,long param_2,long param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = *(float **)(param_3 + 0x10);
  fVar2 = *param_4;
  fVar4 = param_4[1];
  fVar5 = pfVar1[8] + fVar4 * pfVar1[7] + fVar2 * pfVar1[6];
  if (fVar5 == 0.0) {
    fVar3 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar3 = (pfVar1[2] + fVar4 * pfVar1[1] + fVar2 * *pfVar1) / fVar5;
    fVar5 = (pfVar1[5] + fVar4 * pfVar1[4] + fVar2 * pfVar1[3]) / fVar5;
  }
  *param_1 = fVar3;
  param_1[1] = fVar5;
  fVar2 = *(float *)(param_2 + 0x134);
  if (0.0 < fVar2) {
    fVar6 = *(float *)(param_2 + 0x13c);
    fVar4 = (fVar3 - *(float *)(param_2 + 0x138)) / fVar2;
    fVar5 = (fVar5 - fVar6) / fVar2;
    fVar3 = fVar5 * fVar5 + fVar4 * fVar4;
    fVar2 = fVar2 * (fVar3 * *(float *)(param_2 + 0x140) + 1.0 +
                    fVar3 * *(float *)(param_2 + 0x144) * fVar3);
    *param_1 = *(float *)(param_2 + 0x138) + fVar4 * fVar2;
    param_1[1] = fVar6 + fVar5 * fVar2;
  }
  return;
}



/* Entry: 10953b794; end: 10953b80b;  */

undefined8 * FUN_10953b794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afbb88;
  _free(param_1[4]);
  _free(param_1[1]);
  return param_1;
}



/* Entry: 10953b80c; end: 10953b81f;  */

undefined8 * FUN_10953b80c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109262df8();
  _free(puVar1[6]);
  _free(puVar1[4]);
  _free(*puVar1);
  return puVar1;
}



/* Entry: 10953b820; end: 10953b857;  */

undefined8 * FUN_10953b820(undefined8 *param_1)

{
  _free(param_1[6]);
  _free(param_1[4]);
  _free(*param_1);
  return param_1;
}



/* Entry: 10953b858; end: 10953baff;  */

long * FUN_10953b858(float *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float *pfVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  float *pfVar26;
  float *pfVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar33;
  long *unaff_x22;
  float *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined8 uVar48;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  plVar24 = &lStack_b0;
  plVar14 = &lStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3e == 0) {
    plStack_a0 = param_3;
    if (param_2 == (long *)0x0) {
      plVar15 = (long *)((long)param_3 << 2);
      if (param_3 < (long *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar28 = -((long)plVar15 + 0x1eU & 0xfffffffffffffff0);
        plVar24 = (long *)((long)&lStack_b0 + lVar28);
        plVar15 = (long *)((long)&lStack_b0 + lVar28);
        unaff_x20 = plVar15;
      }
      else {
        _malloc();
        unaff_x20 = plVar15;
        unaff_x23 = param_1;
        if (plVar15 == (long *)0x0) goto LAB_10953babc;
      }
    }
    else {
      plVar15 = (long *)0x0;
      plVar24 = &lStack_b0;
      unaff_x20 = param_2;
    }
    unaff_x24 = *(ulong *)(param_1 + 2);
    plStack_a8 = plVar15;
    if (0 < (long)unaff_x24) {
      unaff_x22 = (long *)0x0;
      lVar28 = *(long *)param_1;
      lStack_98 = unaff_x24 * 0x20 + 0x20;
      unaff_x27 = unaff_x24 * 4;
      uVar31 = unaff_x24;
      plVar14 = unaff_x20;
      unaff_x28 = lVar28;
      do {
        unaff_x26 = uVar31;
        if ((long)uVar31 < 2) {
          unaff_x26 = 1;
        }
        if (7 < (long)unaff_x26) {
          unaff_x26 = 8;
        }
        unaff_x19 = (long *)(unaff_x24 - (long)unaff_x22);
        param_1 = (float *)((long)unaff_x20 + (long)unaff_x22 * 4);
        if (unaff_x22 != (long *)0x0) {
          lStack_78 = lVar28 + (long)unaff_x22 * unaff_x24 * 4;
          plVar15 = unaff_x19;
          if (7 < (long)unaff_x19) {
            plVar15 = (long *)0x8;
          }
          uStack_80 = 1;
          param_3 = &lStack_78;
          param_2 = unaff_x22;
          uStack_90 = uVar31;
          plStack_88 = unaff_x20;
          uStack_70 = unaff_x24;
          FUN_1093c55d4();
          uVar31 = uStack_90;
          unaff_x25 = lVar28;
        }
        if (0 < (long)unaff_x19) {
          uVar23 = 0;
          lVar34 = unaff_x28;
          do {
            if (uVar23 != 0) {
              lVar2 = uVar23 + (long)unaff_x22;
              pfVar26 = (float *)(lVar28 + (long)unaff_x22 * 4 + lVar2 * unaff_x24 * 4);
              if (uVar23 < 4) {
                fVar35 = *pfVar26 * *param_1;
                uVar36 = SUB41(fVar35,0);
                uVar37 = (undefined1)((uint)fVar35 >> 8);
                uVar38 = (undefined1)((uint)fVar35 >> 0x10);
                uVar39 = (undefined1)((uint)fVar35 >> 0x18);
                if (uVar23 != 1) {
                  uVar25 = 1;
                  do {
                    fVar35 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) +
                             *(float *)(lVar34 + uVar25 * 4) *
                             *(float *)((long)plVar14 + uVar25 * 4);
                    uVar36 = SUB41(fVar35,0);
                    uVar37 = (undefined1)((uint)fVar35 >> 8);
                    uVar38 = (undefined1)((uint)fVar35 >> 0x10);
                    uVar39 = (undefined1)((uint)fVar35 >> 0x18);
                    uVar25 = uVar25 + 1;
                  } while (uVar23 != uVar25);
                }
              }
              else {
                uVar25 = uVar23 & 0x7ffffffffffffffc;
                fVar35 = (float)*(undefined8 *)pfVar26 * *param_1;
                fVar9 = (float)((ulong)*(undefined8 *)pfVar26 >> 0x20) * param_1[1];
                uVar36 = (undefined1)((uint)fVar9 >> 8);
                uVar37 = (undefined1)((uint)fVar9 >> 0x10);
                uVar38 = (undefined1)((uint)fVar9 >> 0x18);
                fVar10 = (float)*(undefined8 *)(pfVar26 + 2) * param_1[2];
                uVar39 = (undefined1)((uint)fVar10 >> 8);
                uVar40 = (undefined1)((uint)fVar10 >> 0x10);
                uVar41 = (undefined1)((uint)fVar10 >> 0x18);
                fVar11 = (float)((ulong)*(undefined8 *)(pfVar26 + 2) >> 0x20) * param_1[3];
                uVar42 = (undefined1)((uint)fVar11 >> 8);
                uVar43 = (undefined1)((uint)fVar11 >> 0x10);
                uVar44 = (undefined1)((uint)fVar11 >> 0x18);
                auVar45[4] = SUB41(fVar9,0);
                auVar45._0_4_ = fVar35;
                auVar45[5] = uVar36;
                auVar45[6] = uVar37;
                auVar45[7] = uVar38;
                auVar45[8] = SUB41(fVar10,0);
                auVar45[9] = uVar39;
                auVar45[10] = uVar40;
                auVar45[0xb] = uVar41;
                auVar45[0xc] = SUB41(fVar11,0);
                auVar45[0xd] = uVar42;
                auVar45[0xe] = uVar43;
                auVar45[0xf] = uVar44;
                auVar8[4] = SUB41(fVar9,0);
                auVar8._0_4_ = fVar35;
                auVar8[5] = uVar36;
                auVar8[6] = uVar37;
                auVar8[7] = uVar38;
                auVar8[8] = SUB41(fVar10,0);
                auVar8[9] = uVar39;
                auVar8[10] = uVar40;
                auVar8[0xb] = uVar41;
                auVar8[0xc] = SUB41(fVar11,0);
                auVar8[0xd] = uVar42;
                auVar8[0xe] = uVar43;
                auVar8[0xf] = uVar44;
                auVar45 = NEON_ext(auVar45,auVar8,8,1);
                fVar35 = fVar35 + auVar45._0_4_ + fVar9 + auVar45._4_4_;
                uVar36 = SUB41(fVar35,0);
                uVar37 = (undefined1)((uint)fVar35 >> 8);
                uVar38 = (undefined1)((uint)fVar35 >> 0x10);
                uVar39 = (undefined1)((uint)fVar35 >> 0x18);
                for (; uVar25 != uVar23; uVar25 = uVar25 + 1) {
                  fVar35 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) +
                           *(float *)(lVar34 + uVar25 * 4) * *(float *)((long)plVar14 + uVar25 * 4);
                  uVar36 = SUB41(fVar35,0);
                  uVar37 = (undefined1)((uint)fVar35 >> 8);
                  uVar38 = (undefined1)((uint)fVar35 >> 0x10);
                  uVar39 = (undefined1)((uint)fVar35 >> 0x18);
                }
              }
              *(float *)((long)unaff_x20 + lVar2 * 4) =
                   *(float *)((long)unaff_x20 + lVar2 * 4) -
                   (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
            }
            uVar23 = uVar23 + 1;
            lVar34 = lVar34 + unaff_x27;
          } while (uVar23 != unaff_x26);
        }
        unaff_x22 = unaff_x22 + 1;
        uVar31 = uVar31 - 8;
        plVar14 = plVar14 + 4;
        unaff_x28 = unaff_x28 + lStack_98;
      } while ((long)unaff_x22 < (long)unaff_x24);
    }
    if ((long *)0x8000 < plStack_a0) {
      plVar15 = plStack_a8;
      _free();
    }
    plVar14 = plVar24;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar15;
    }
  }
  else {
LAB_10953babc:
    param_1 = unaff_x23;
    plVar15 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_2 = (long *)PTR___ZTISt9bad_alloc_110346a68;
    param_3 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *)0x8000 < plStack_a0) {
    _free(plStack_a8);
  }
  plVar16 = plVar15;
  __Unwind_Resume();
  *(long *)((long)plVar14 + -0x60) = unaff_x28;
  *(long *)((long)plVar14 + -0x58) = unaff_x27;
  *(ulong *)((long)plVar14 + -0x50) = unaff_x26;
  *(long *)((long)plVar14 + -0x48) = unaff_x25;
  *(ulong *)((long)plVar14 + -0x40) = unaff_x24;
  *(float **)((long)plVar14 + -0x38) = param_1;
  *(long **)((long)plVar14 + -0x30) = unaff_x22;
  *(long **)((long)plVar14 + -0x28) = plVar15;
  *(long **)((long)plVar14 + -0x20) = unaff_x20;
  *(long **)((long)plVar14 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar14 + -8) = FUN_10953bb00;
  plVar24 = (long *)((long)plVar14 + -0xa0);
  plVar15 = (long *)((long)plVar14 + -0xa0);
  *(undefined8 *)((long)plVar14 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3e == 0) {
    *(long **)((long)plVar14 + -0x90) = param_3;
    if (param_2 == (long *)0x0) {
      plVar17 = (long *)((long)param_3 << 2);
      if (param_3 < (long *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        plVar24 = (long *)((long)plVar14 + (-0xa0 - ((long)plVar17 + 0x1eU & 0xfffffffffffffff0)));
        *(long **)((long)plVar14 + -0x98) = plVar24;
        plVar33 = plVar24;
      }
      else {
        _malloc();
        *(long **)((long)plVar14 + -0x98) = plVar17;
        plVar33 = plVar17;
        if (plVar17 == (long *)0x0) goto LAB_10953bd80;
      }
    }
    else {
      *(undefined8 *)((long)plVar14 + -0x98) = 0;
      plVar24 = (long *)((long)plVar14 + -0xa0);
      plVar17 = plVar16;
      plVar33 = param_2;
    }
    iVar18 = (int)param_2;
    uVar31 = plVar16[2];
    if (0 < (long)uVar31) {
      lVar2 = *plVar16;
      uVar23 = plVar16[1];
      lVar28 = lVar2 + uVar23 * (uVar31 - 1) * 4 + uVar31 * 4;
      lVar34 = (long)plVar33 + uVar31 * 4;
      unaff_x20 = (long *)0x8;
      unaff_x19 = (long *)0x1;
      do {
        uVar25 = 0;
        uVar19 = uVar31;
        if (7 < uVar31) {
          uVar19 = 8;
        }
        pfVar26 = (float *)(lVar28 + uVar19 * -4);
        pfVar27 = (float *)(lVar34 + uVar19 * -4);
        plVar17 = (long *)(uVar31 - uVar19);
        uVar3 = (long)plVar33 + (long)plVar17 * 4;
        uVar29 = (ulong)-((uint)uVar3 >> 2) & 3;
        lVar30 = lVar28;
        do {
          fVar35 = *(float *)((long)plVar33 + (uVar31 + ~uVar25) * 4);
          uVar4 = uVar19 + ~uVar25;
          if (fVar35 != 0.0 && 0 < (long)uVar4) {
            uVar5 = uVar29;
            if (uVar4 <= uVar29) {
              uVar5 = uVar4;
            }
            if ((uVar3 & 3) != 0) {
              uVar5 = uVar4;
            }
            uVar22 = uVar4 - uVar5;
            pfVar7 = pfVar27;
            uVar12 = uVar5;
            pfVar13 = pfVar26;
            uVar6 = uVar22 + 3;
            if ((long)uVar5 <= (long)uVar4) {
              uVar6 = uVar22;
            }
            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pfVar7 = *pfVar7 - fVar35 * *pfVar13;
              pfVar7 = pfVar7 + 1;
              pfVar13 = pfVar13 + 1;
            }
            lVar32 = (uVar6 & 0xfffffffffffffffc) + uVar5;
            if (3 < (long)uVar22) {
              lVar21 = uVar19 * -4 + uVar5 * 4;
              uVar22 = uVar5;
              do {
                pfVar7 = (float *)(lVar30 + lVar21);
                uVar48 = ((undefined8 *)(lVar34 + lVar21))[1];
                uVar47 = *(undefined8 *)(lVar34 + lVar21);
                auVar46._0_8_ =
                     CONCAT44((float)((ulong)uVar47 >> 0x20) - pfVar7[1] * fVar35,
                              (float)uVar47 - *pfVar7 * fVar35);
                auVar46._8_4_ = (float)uVar48 - pfVar7[2] * fVar35;
                auVar46._12_4_ = (float)((ulong)uVar48 >> 0x20) - pfVar7[3] * fVar35;
                ((undefined8 *)(lVar34 + lVar21))[1] = auVar46._8_8_;
                *(undefined8 *)(lVar34 + lVar21) = auVar46._0_8_;
                uVar22 = uVar22 + 4;
                lVar21 = lVar21 + 0x10;
              } while ((long)uVar22 < lVar32);
            }
            if (lVar32 < (long)uVar4) {
              lVar32 = (uVar5 - uVar19) + (uVar6 & 0xfffffffffffffffc);
              do {
                *(float *)(lVar34 + lVar32 * 4) =
                     *(float *)(lVar34 + lVar32 * 4) - fVar35 * *(float *)(lVar30 + lVar32 * 4);
                lVar32 = lVar32 + 1;
              } while (uVar25 + lVar32 != -1);
            }
          }
          uVar25 = uVar25 + 1;
          pfVar26 = pfVar26 + -uVar23;
          lVar30 = lVar30 + uVar23 * -4;
        } while (uVar25 != uVar19);
        if (0 < (long)plVar17) {
          *(ulong *)((long)plVar14 + -0x78) = lVar2 + (long)plVar17 * uVar23 * 4;
          *(ulong *)((long)plVar14 + -0x70) = uVar23;
          *(ulong *)((long)plVar14 + -0x88) = uVar3;
          *(undefined8 *)((long)plVar14 + -0x80) = 1;
          FUN_1093c6e08(plVar17,uVar19,(undefined1 *)((long)plVar14 + -0x78),
                        (undefined1 *)((long)plVar14 + -0x88),plVar33,1);
        }
        iVar18 = (int)uVar19;
        lVar34 = lVar34 + -0x20;
        lVar28 = lVar28 + ~uVar23 * 0x20;
        uVar25 = uVar31 - 8;
        bVar1 = 7 < (long)uVar31;
        uVar31 = uVar25;
      } while (uVar25 != 0 && bVar1);
    }
    if (0x8000 < *(ulong *)((long)plVar14 + -0x90)) {
      plVar17 = *(long **)((long)plVar14 + -0x98);
      _free();
    }
    plVar15 = plVar24;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar14 + -0x68)) {
      return plVar17;
    }
  }
  else {
LAB_10953bd80:
    plVar17 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar20 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    iVar18 = (int)puVar20;
  }
  ___stack_chk_fail();
  if (0x8000 < *(ulong *)((long)plVar14 + -0x90)) {
    _free(*(undefined8 *)((long)plVar14 + -0x98));
  }
  __Unwind_Resume();
  *(long **)((long)plVar15 + -0x20) = unaff_x20;
  *(long **)((long)plVar15 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar15 + -0x10) = (undefined1 *)((long)plVar14 + -0x10);
  *(code **)((long)plVar15 + -8) = FUN_10953bdc4;
  plVar17[2] = 0x32aaaba7;
  plVar17[4] = 0;
  plVar17[3] = 0;
  plVar17[6] = 0;
  plVar17[5] = 0;
  plVar17[8] = 0;
  plVar17[7] = 0;
  *(undefined8 *)((long)plVar17 + 0x49) = 0;
  *(undefined8 *)((long)plVar17 + 0x41) = 0;
  if (iVar18 == 1) {
    plVar24 = (long *)&UNK_10f573308;
    puVar20 = (undefined *)0x0;
  }
  else {
    plVar24 = plVar17;
    if (iVar18 < 2) goto LAB_10953be2c;
    plVar24 = (long *)&UNK_10f57332b;
    puVar20 = PTR___dispatch_queue_attr_concurrent_11034be28;
  }
  _dispatch_queue_create(plVar24,puVar20);
  *plVar17 = (long)plVar24;
LAB_10953be2c:
  _dispatch_group_create();
  plVar17[1] = (long)plVar24;
  return plVar17;
}



/* Entry: 10953bb00; end: 10953bdc3;  */

long * FUN_10953bb00(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  ulong auStack_88 [3];
  ulong uStack_70;
  long lStack_68;
  
  plVar12 = &lStack_a0;
  plVar13 = &lStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 >> 0x3e == 0) {
    uStack_90 = param_3;
    if (param_2 == (long *)0x0) {
      plVar14 = (long *)(param_3 << 2);
      if (param_3 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar28 = -((long)plVar14 + 0x1eU & 0xfffffffffffffff0);
        plVar12 = (long *)((long)&lStack_a0 + lVar28);
        plVar26 = (long *)((long)&lStack_a0 + lVar28);
        plStack_98 = plVar26;
      }
      else {
        _malloc();
        plVar26 = plVar14;
        plStack_98 = plVar14;
        if (plVar14 == (long *)0x0) goto LAB_10953bd80;
      }
    }
    else {
      plStack_98 = (long *)0x0;
      plVar12 = &lStack_a0;
      plVar14 = param_1;
      plVar26 = param_2;
    }
    iVar15 = (int)param_2;
    uVar27 = param_1[2];
    if (0 < (long)uVar27) {
      lVar6 = *param_1;
      uVar7 = param_1[1];
      lVar28 = lVar6 + uVar7 * (uVar27 - 1) * 4 + uVar27 * 4;
      lVar29 = (long)plVar26 + uVar27 * 4;
      unaff_x20 = 8;
      unaff_x19 = 1;
      do {
        uVar20 = 0;
        uVar16 = uVar27;
        if (7 < uVar27) {
          uVar16 = 8;
        }
        pfVar21 = (float *)(lVar28 + uVar16 * -4);
        pfVar22 = (float *)(lVar29 + uVar16 * -4);
        plVar14 = (long *)(uVar27 - uVar16);
        uVar2 = (long)plVar26 + (long)plVar14 * 4;
        uVar23 = (ulong)-((uint)uVar2 >> 2) & 3;
        lVar24 = lVar28;
        do {
          fVar8 = *(float *)((long)plVar26 + (uVar27 + ~uVar20) * 4);
          uVar3 = uVar16 + ~uVar20;
          if (fVar8 != 0.0 && 0 < (long)uVar3) {
            uVar4 = uVar23;
            if (uVar3 <= uVar23) {
              uVar4 = uVar3;
            }
            if ((uVar2 & 3) != 0) {
              uVar4 = uVar3;
            }
            uVar19 = uVar3 - uVar4;
            pfVar9 = pfVar22;
            uVar10 = uVar4;
            pfVar11 = pfVar21;
            uVar5 = uVar19 + 3;
            if ((long)uVar4 <= (long)uVar3) {
              uVar5 = uVar19;
            }
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pfVar9 = *pfVar9 - fVar8 * *pfVar11;
              pfVar9 = pfVar9 + 1;
              pfVar11 = pfVar11 + 1;
            }
            lVar25 = (uVar5 & 0xfffffffffffffffc) + uVar4;
            if (3 < (long)uVar19) {
              lVar18 = uVar16 * -4 + uVar4 * 4;
              uVar19 = uVar4;
              do {
                uVar31 = ((undefined8 *)(lVar24 + lVar18))[1];
                uVar30 = *(undefined8 *)(lVar24 + lVar18);
                uVar33 = ((undefined8 *)(lVar29 + lVar18))[1];
                uVar32 = *(undefined8 *)(lVar29 + lVar18);
                ((undefined8 *)(lVar29 + lVar18))[1] =
                     CONCAT44((float)((ulong)uVar33 >> 0x20) -
                              (float)((ulong)uVar31 >> 0x20) * fVar8,
                              (float)uVar33 - (float)uVar31 * fVar8);
                *(undefined8 *)(lVar29 + lVar18) =
                     CONCAT44((float)((ulong)uVar32 >> 0x20) -
                              (float)((ulong)uVar30 >> 0x20) * fVar8,
                              (float)uVar32 - (float)uVar30 * fVar8);
                uVar19 = uVar19 + 4;
                lVar18 = lVar18 + 0x10;
              } while ((long)uVar19 < lVar25);
            }
            if (lVar25 < (long)uVar3) {
              lVar25 = (uVar4 - uVar16) + (uVar5 & 0xfffffffffffffffc);
              do {
                *(float *)(lVar29 + lVar25 * 4) =
                     *(float *)(lVar29 + lVar25 * 4) - fVar8 * *(float *)(lVar24 + lVar25 * 4);
                lVar25 = lVar25 + 1;
              } while (uVar20 + lVar25 != -1);
            }
          }
          uVar20 = uVar20 + 1;
          pfVar21 = pfVar21 + -uVar7;
          lVar24 = lVar24 + uVar7 * -4;
        } while (uVar20 != uVar16);
        if (0 < (long)plVar14) {
          auStack_88[2] = lVar6 + (long)plVar14 * uVar7 * 4;
          auStack_88[1] = 1;
          auStack_88[0] = uVar2;
          uStack_70 = uVar7;
          FUN_1093c6e08(plVar14,uVar16,auStack_88 + 2,auStack_88,plVar26,1);
        }
        iVar15 = (int)uVar16;
        lVar29 = lVar29 + -0x20;
        lVar28 = lVar28 + ~uVar7 * 0x20;
        uVar20 = uVar27 - 8;
        bVar1 = 7 < (long)uVar27;
        uVar27 = uVar20;
      } while (uVar20 != 0 && bVar1);
    }
    if (0x8000 < uStack_90) {
      plVar14 = plStack_98;
      _free();
    }
    plVar13 = plVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar14;
    }
  }
  else {
LAB_10953bd80:
    plVar14 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar17 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    iVar15 = (int)puVar17;
  }
  ___stack_chk_fail();
  if (0x8000 < uStack_90) {
    _free(plStack_98);
  }
  __Unwind_Resume();
  *(undefined8 *)((long)plVar13 + -0x20) = unaff_x20;
  *(undefined8 *)((long)plVar13 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar13 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar13 + -8) = FUN_10953bdc4;
  plVar14[2] = 0x32aaaba7;
  plVar14[4] = 0;
  plVar14[3] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  *(undefined8 *)((long)plVar14 + 0x49) = 0;
  *(undefined8 *)((long)plVar14 + 0x41) = 0;
  if (iVar15 == 1) {
    plVar12 = (long *)&UNK_10f573308;
    puVar17 = (undefined *)0x0;
  }
  else {
    plVar12 = plVar14;
    if (iVar15 < 2) goto LAB_10953be2c;
    plVar12 = (long *)&UNK_10f57332b;
    puVar17 = PTR___dispatch_queue_attr_concurrent_11034be28;
  }
  _dispatch_queue_create(plVar12,puVar17);
  *plVar14 = (long)plVar12;
LAB_10953be2c:
  _dispatch_group_create();
  plVar14[1] = (long)plVar12;
  return plVar14;
}



/* Entry: 10953bdc4; end: 10953be43;  */

undefined8 * FUN_10953bdc4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  param_1[2] = 0x32aaaba7;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  if (param_2 == 1) {
    puVar1 = (undefined8 *)&UNK_10f573308;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    if (param_2 < 2) goto LAB_10953be2c;
    puVar1 = (undefined8 *)&UNK_10f57332b;
    puVar2 = PTR___dispatch_queue_attr_concurrent_11034be28;
  }
  _dispatch_queue_create(puVar1,puVar2);
  *param_1 = puVar1;
LAB_10953be2c:
  _dispatch_group_create();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10953be44; end: 10953be73;  */

long FUN_10953be44(long param_1)

{
  FUN_10953be74();
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10953be74; end: 10953bec7;  */

void FUN_10953be74(undefined8 *param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 2);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    _dispatch_group_wait(param_1[1],0xffffffffffffffff);
    _dispatch_release(param_1[1]);
    _dispatch_release(*param_1);
    *(undefined1 *)(param_1 + 10) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 2);
  return;
}



/* Entry: 10953bec8; end: 10953bf23;  */

float FUN_10953bec8(float *param_1)

{
  return (*param_1 + param_1[2]) * 0.5;
}



/* Entry: 10953bf24; end: 10953bfdf;  */

long FUN_10953bf24(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar6 = *(ulong *)(param_3 + 0x18);
  puVar1 = (ulong *)(param_3 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  uVar7 = *puVar1;
  uVar6 = param_1 + 8;
  if (uVar7 != uVar6) {
    func_0x000109349ec8(uVar6);
    FUN_10934a194(uVar6,uVar7);
  }
  ppuVar2 = &PTR_PTR_1132da178;
  if (*(undefined ***)(param_3 + 0x30) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_3 + 0x30);
  }
  lVar5 = param_1 + 0xd0;
  FUN_10953bfe0(lVar5,ppuVar2,uVar4,uVar3);
  if ((int)lVar5 != 0) {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    FUN_10953c314(param_1);
  }
  return lVar5;
}



/* Entry: 10953bfe0; end: 10953c313;  */

undefined ***
FUN_10953bfe0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long unaff_x21;
  ulong unaff_x22;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_s3;
  undefined8 uVar29;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined **ppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined ***pppuStack_c0;
  undefined4 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  float *pfStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  float *pfStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_1 = param_3;
  *(undefined4 *)((long)param_1 + 4) = param_4;
  if (param_1[7] == 8 && param_1[8] == 8) {
    lVar10 = param_1[6];
    lVar11 = 8;
    lVar5 = 8;
LAB_10953c05c:
    lVar13 = 0;
    lVar15 = lVar10;
    do {
      if (0 < lVar11) {
        lVar16 = 0;
        do {
          uVar24 = 0x3f800000;
          if (lVar13 != lVar16) {
            uVar24 = 0;
          }
          *(undefined4 *)(lVar15 + lVar16 * 4) = uVar24;
          lVar16 = lVar16 + 1;
        } while (lVar11 != lVar16);
      }
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + lVar11 * 4;
    } while (lVar13 != lVar5);
  }
  else {
    FUN_1093d98c8(param_1 + 6,0x40,8,8);
    lVar5 = param_1[7];
    lVar11 = param_1[8];
    lVar10 = param_1[6];
    if (0 < lVar5) goto LAB_10953c05c;
  }
  *(undefined4 *)(lVar10 + 0x10) = 0x3f800000;
  *(undefined4 *)(lVar10 + lVar11 * 4 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar10 + lVar11 * 8 + 0x18) = 0x3f800000;
  *(undefined4 *)(lVar10 + lVar11 * 0xc + 0x1c) = 0x3f800000;
  if ((param_1[10] == 4) && (param_1[0xb] == 8)) {
    lVar5 = 4;
    lVar11 = 8;
LAB_10953c110:
    lVar10 = 0;
    lVar13 = param_1[9];
    do {
      if (0 < lVar11) {
        lVar15 = 0;
        do {
          uVar24 = 0x3f800000;
          if (lVar10 != lVar15) {
            uVar24 = 0;
          }
          *(undefined4 *)(lVar13 + lVar15 * 4) = uVar24;
          lVar15 = lVar15 + 1;
        } while (lVar11 != lVar15);
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + lVar11 * 4;
    } while (lVar10 != lVar5);
  }
  else {
    FUN_1093d98c8(param_1 + 9,0x20,4,8);
    lVar5 = param_1[10];
    if (0 < lVar5) {
      lVar11 = param_1[0xb];
      goto LAB_10953c110;
    }
  }
  auVar21._0_8_ = param_2[2];
  fVar19 = (float)auVar21._0_8_ + (float)param_2[3];
  fVar17 = (float)((ulong)auVar21._0_8_ >> 0x20);
  fVar22 = fVar17 + (float)((ulong)param_2[3] >> 0x20);
  auVar21._12_4_ = fVar22;
  auVar21._8_4_ = fVar19;
  auVar20 = NEON_fmov(0x3f800000,4);
  iVar25 = -(uint)(auVar20._0_4_ < (float)auVar21._0_8_);
  auVar18._4_4_ = -(uint)(auVar20._4_4_ < fVar17);
  auVar18._0_4_ = iVar25;
  auVar18._8_4_ = -(uint)(auVar20._8_4_ < fVar19);
  auVar18._12_4_ = -(uint)(auVar20._12_4_ < fVar22);
  auVar18 = NEON_fmaxnm(auVar21 ^ (auVar21 ^ auVar20) & auVar18,ZEXT216(0),4);
  auVar20._0_8_ = *param_1;
  auVar20._8_8_ = auVar20._0_8_;
  auVar21 = NEON_scvtf(auVar20,4);
  fStack_70 = auVar18._0_4_ * auVar21._0_4_;
  fStack_6c = auVar18._4_4_ * auVar21._4_4_;
  uStack_68 = (float **)CONCAT44(auVar18._12_4_ * auVar21._12_4_,auVar18._8_4_ * auVar21._8_4_);
  uVar29 = FUN_10953bec8(&fStack_70);
  lVar5 = 0x20;
  _malloc();
  if (lVar5 != 0) {
    uVar6 = param_1[1];
    param_1[1] = lVar5;
    param_1[2] = 8;
    _free(uVar6);
    param_2 = (undefined8 *)param_1[1];
    *param_2 = uVar29;
    *(int *)(param_2 + 1) = iVar25;
    *(float *)((long)param_2 + 0xc) = in_s3;
    puVar8 = param_2 + 2;
    uVar7 = (ulong)-((uint)puVar8 >> 2) & 3;
    if (((ulong)puVar8 & 3) != 0) {
      uVar7 = 4;
    }
    lVar5 = 4;
    if (uVar7 != 0) {
      lVar5 = 0;
    }
    unaff_x22 = lVar5 + uVar7;
    unaff_x21 = uVar7 * 4;
    lVar5 = 0x10;
    if (uVar7 != 0) {
      lVar5 = unaff_x21;
    }
    _bzero(puVar8,lVar5);
    if (unaff_x22 < 4) {
      _bzero((long)param_2 + (uVar7 + 4) * 4,uVar7 * -4 + 0x10);
    }
    pfVar2 = (float *)0x20;
    _malloc();
    if (pfVar2 != (float *)0x0) {
      fVar17 = in_s3 * 0.1;
      in_s3 = in_s3 * 0.0625;
      uStack_78 = 8;
      *pfVar2 = fVar17;
      pfVar2[1] = fVar17;
      pfVar2[2] = 0.01;
      pfVar2[3] = fVar17;
      pfVar2[4] = in_s3;
      pfVar2[5] = in_s3;
      pfVar2[6] = 1e-05;
      pfVar2[7] = in_s3;
      pfStack_80 = pfVar2;
      uStack_68 = &pfStack_80;
      FUN_1093d98c8(param_1 + 3,0x40,8,8);
      FUN_10953e954(param_1 + 3,&fStack_70);
      pfVar2 = pfStack_80;
      _free();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return (undefined ***)0x1;
      }
      goto LAB_10953c2fc;
    }
  }
  pfVar2 = (float *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10953c2fc:
  ___stack_chk_fail();
  _free(pfStack_80);
  pfVar3 = pfVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_10953c314;
  ppuStack_e0 = &PTR_FUN_110af3e98;
  uStack_d8 = 0;
  puStack_c8 = &DAT_11383d918;
  pppuStack_c0 = (undefined ***)0x0;
  uStack_b8 = 0x3f800000;
  puVar8 = *(undefined8 **)(pfVar3 + 0x36);
  ppuStack_108 = &PTR_FUN_110af0b68;
  ppuStack_100 = (undefined **)0x0;
  uStack_e8 = 0;
  fVar26 = (float)*puVar8;
  fVar27 = (float)((ulong)*puVar8 >> 0x20);
  fVar17 = *(float *)(puVar8 + 1) * *(float *)((long)puVar8 + 0xc) * 0.5;
  fVar19 = *(float *)((long)puVar8 + 0xc) * 0.5;
  uVar29 = NEON_scvtf(*(undefined8 *)(pfVar3 + 0x34),4);
  fVar28 = (float)((ulong)uVar29 >> 0x20);
  fVar22 = (fVar26 - fVar17) / (float)uVar29;
  fVar23 = (fVar27 - fVar19) / fVar28;
  uStack_f8 = CONCAT44(fVar23,fVar22);
  uStack_f0 = CONCAT44((fVar27 + fVar19) / fVar28 - fVar23,
                       (fVar26 + fVar17) / (float)uVar29 - fVar22);
  uStack_d0 = 1;
  pppuVar4 = (undefined ***)0x0;
  uStack_b0 = unaff_x22;
  lStack_a8 = unaff_x21;
  puStack_a0 = param_2;
  pfStack_98 = pfVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_1093492b0();
  pppuStack_c0 = pppuVar4;
  if (pppuVar4 != &ppuStack_108) {
    ppuVar9 = pppuVar4[1];
    ppuVar12 = ppuVar9;
    if (((ulong)ppuVar9 & 1) != 0) {
      ppuVar12 = *(undefined ***)((ulong)ppuVar9 & 0xfffffffffffffffe);
    }
    ppuVar14 = ppuStack_100;
    if (((ulong)ppuStack_100 & 1) != 0) {
      ppuVar14 = *(undefined ***)((ulong)ppuStack_100 & 0xfffffffffffffffe);
    }
    if (ppuVar12 == ppuVar14) {
      lVar5 = 0;
      pppuVar4[1] = ppuStack_100;
      do {
        uVar1 = *(undefined1 *)((long)pppuVar4 + lVar5 + 0x10);
        *(undefined1 *)((long)pppuVar4 + lVar5 + 0x10) = *(undefined1 *)((long)&uStack_f8 + lVar5);
        *(undefined1 *)((long)&uStack_f8 + lVar5) = uVar1;
        lVar5 = lVar5 + 1;
        ppuStack_100 = ppuVar9;
      } while (lVar5 != 0x10);
    }
    else {
      func_0x000109348f68(pppuVar4);
      func_0x000109348e48(pppuVar4,&ppuStack_108);
    }
  }
  if (((ulong)ppuStack_100 & 1) != 0) {
    func_0x0001053936ac(&ppuStack_100);
  }
  uVar7 = uStack_d8;
  if ((uStack_d8 & 1) != 0) {
    uVar7 = *(ulong *)(uStack_d8 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(&puStack_c8,*(ulong *)(pfVar3 + 6) & 0xfffffffffffffffc,uVar7);
  FUN_109594c94(pfVar3,&ppuStack_e0);
  pppuVar4 = &ppuStack_e0;
  FUN_1093644a0(pppuVar4);
  return pppuVar4;
}



/* Entry: 10953c314; end: 10953c4d3;  */

void FUN_10953c314(long param_1)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined ***pppuStack_40;
  undefined4 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110af3e98;
  uStack_58 = 0;
  puStack_48 = &DAT_11383d918;
  pppuStack_40 = (undefined ***)0x0;
  uStack_38 = 0x3f800000;
  puVar4 = *(undefined8 **)(param_1 + 0xd8);
  ppuStack_88 = &PTR_FUN_110af0b68;
  ppuStack_80 = (undefined **)0x0;
  uStack_68 = 0;
  fVar9 = *(float *)(puVar4 + 1) * *(float *)((long)puVar4 + 0xc) * 0.5;
  fVar10 = *(float *)((long)puVar4 + 0xc) * 0.5;
  fVar13 = (float)*puVar4;
  fVar15 = (float)((ulong)*puVar4 >> 0x20);
  uVar14 = NEON_scvtf(*(undefined8 *)(param_1 + 0xd0),4);
  fVar11 = (fVar13 - fVar9) / (float)uVar14;
  fVar16 = (float)((ulong)uVar14 >> 0x20);
  fVar12 = (fVar15 - fVar10) / fVar16;
  uStack_78 = CONCAT44(fVar12,fVar11);
  uStack_70 = CONCAT44((fVar15 + fVar10) / fVar16 - fVar12,(fVar13 + fVar9) / (float)uVar14 - fVar11
                      );
  uStack_50 = 1;
  pppuVar2 = (undefined ***)0x0;
  FUN_1093492b0();
  pppuStack_40 = pppuVar2;
  if (pppuVar2 != &ppuStack_88) {
    ppuVar5 = pppuVar2[1];
    ppuVar6 = ppuVar5;
    if (((ulong)ppuVar5 & 1) != 0) {
      ppuVar6 = *(undefined ***)((ulong)ppuVar5 & 0xfffffffffffffffe);
    }
    ppuVar8 = ppuStack_80;
    if (((ulong)ppuStack_80 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_80 & 0xfffffffffffffffe);
    }
    if (ppuVar6 == ppuVar8) {
      lVar7 = 0;
      pppuVar2[1] = ppuStack_80;
      do {
        uVar1 = *(undefined1 *)((long)pppuVar2 + lVar7 + 0x10);
        *(undefined1 *)((long)pppuVar2 + lVar7 + 0x10) = *(undefined1 *)((long)&uStack_78 + lVar7);
        *(undefined1 *)((long)&uStack_78 + lVar7) = uVar1;
        lVar7 = lVar7 + 1;
        ppuStack_80 = ppuVar5;
      } while (lVar7 != 0x10);
    }
    else {
      func_0x000109348f68(pppuVar2);
      func_0x000109348e48(pppuVar2,&ppuStack_88);
    }
  }
  if (((ulong)ppuStack_80 & 1) != 0) {
    func_0x0001053936ac(&ppuStack_80);
  }
  uVar3 = uStack_58;
  if ((uStack_58 & 1) != 0) {
    uVar3 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(&puStack_48,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,uVar3);
  FUN_109594c94(param_1,&ppuStack_60);
  FUN_1093644a0(&ppuStack_60);
  return;
}



/* Entry: 10953c4d4; end: 10953c77f;  */

float * FUN_10953c4d4(long param_1)

{
  undefined **ppuVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  float **ppfVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 auStack_98 [3];
  float *pfStack_80;
  undefined8 uStack_78;
  float *pfStack_70;
  float **ppfStack_68;
  float *pfStack_60;
  undefined8 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfStack_80 = (float *)0x0;
  uStack_78 = 0;
  pfVar3 = (float *)0x20;
  _malloc();
  if (pfVar3 == (float *)0x0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10953c740);
    (*pcVar2)();
  }
  uStack_78 = 8;
  plVar12 = (long *)(param_1 + 8);
  lVar8 = *plVar12;
  *pfVar3 = *(float *)(lVar8 + 0xc) * 0.05;
  pfVar3[1] = *(float *)(lVar8 + 0xc) * 0.05;
  pfVar3[2] = 0.01;
  pfVar3[3] = *(float *)(lVar8 + 0xc) * 0.05;
  pfVar3[4] = *(float *)(lVar8 + 0xc) * 0.00625;
  pfVar3[5] = *(float *)(lVar8 + 0xc) * 0.00625;
  pfVar3[6] = 1e-05;
  fVar14 = *(float *)(lVar8 + 0xc) * 0.00625;
  pfVar3[7] = fVar14;
  ppfStack_68 = &pfStack_80;
  pfStack_80 = pfVar3;
  FUN_10953ea3c(auStack_98,&pfStack_70);
  pfVar3 = (float *)(param_1 + 0x30);
  pfStack_70 = (float *)0x0;
  ppfStack_68 = (float **)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar6 = 1;
    FUN_1093c61bc(&pfStack_70);
    ppfVar5 = ppfStack_68;
    if (0 < (long)ppfStack_68) {
      _bzero(pfStack_70,(long)ppfStack_68 << 2);
    }
    if (*(long *)(param_1 + 0x38) == 1) {
      uVar13 = *(ulong *)(param_1 + 0x10);
      if (uVar13 == 0) {
        fVar14 = 0.0;
      }
      else {
        uVar7 = uVar13;
        FUN_10953ec50(*(undefined8 *)pfVar3,*plVar12);
        iVar6 = (int)uVar7;
      }
      *pfStack_70 = fVar14 + *pfStack_70;
      goto LAB_10953c63c;
    }
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  FUN_10953eb04(0x3f800000,pfVar3,*(undefined8 *)(param_1 + 8),uVar15,pfStack_70);
  iVar6 = (int)uVar15;
  uVar13 = *(ulong *)(param_1 + 0x10);
  ppfVar5 = ppfStack_68;
LAB_10953c63c:
  pfVar4 = pfStack_70;
  if ((float **)uVar13 != ppfVar5) {
    iVar6 = 1;
    FUN_1093c61bc(plVar12,ppfVar5);
    uVar13 = *(ulong *)(param_1 + 0x10);
  }
  puVar9 = (undefined8 *)*plVar12;
  uVar7 = uVar13 + 3;
  if (-1 < (long)uVar13) {
    uVar7 = uVar13;
  }
  if (3 < (long)uVar13) {
    lVar8 = 0;
    puVar11 = puVar9;
    pfVar10 = pfVar4;
    do {
      uVar15 = *(undefined8 *)pfVar10;
      puVar11[1] = *(undefined8 *)(pfVar10 + 2);
      *puVar11 = uVar15;
      lVar8 = lVar8 + 4;
      puVar11 = puVar11 + 2;
      pfVar10 = pfVar10 + 4;
    } while (lVar8 < (long)(uVar7 & 0xfffffffffffffffc));
  }
  lVar8 = (long)uVar13 % 4;
  if (lVar8 != 0 && lVar8 < 0 == SBORROW8(uVar13,uVar7 & 0xfffffffffffffffc)) {
    pfVar10 = (float *)(puVar9 + ((long)uVar7 >> 2) * 2);
    pfVar4 = pfVar4 + ((long)uVar7 >> 2) * 4;
    do {
      *pfVar10 = *pfVar4;
      lVar8 = lVar8 + -1;
      pfVar10 = pfVar10 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar8 != 0);
  }
  _free(pfStack_70);
  ppfStack_68 = (float **)(param_1 + 0x18);
  puStack_58 = auStack_98;
  ppfVar5 = &pfStack_70;
  pfStack_70 = pfVar3;
  pfStack_60 = pfVar3;
  FUN_10953ed6c();
  _free(auStack_98[0]);
  pfVar3 = pfStack_80;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _free(pfStack_70);
    _free(auStack_98[0]);
    _free(pfStack_80);
    __Unwind_Resume();
    ppuVar1 = &PTR_PTR_1132da178;
    if ((undefined **)ppfVar5[6] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppfVar5[6];
    }
    pfVar4 = pfVar3 + 0x34;
    FUN_10953c7e4(pfVar4,ppuVar1);
    if ((-1 < iVar6) && ((int)pfVar4 != 0)) {
      FUN_10953e8ec(pfVar3 + 0x24);
      FUN_10953c314(pfVar3);
    }
    return pfVar4;
  }
  return (float *)0x1;
}



/* Entry: 10953c780; end: 10953c7e3;  */

long FUN_10953c780(long param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR_PTR_1132da178;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x30);
  }
  lVar2 = param_1 + 0xd0;
  FUN_10953c7e4(lVar2,ppuVar1);
  if ((-1 < param_3) && ((int)lVar2 != 0)) {
    FUN_10953e8ec(param_1 + 0x90);
    FUN_10953c314(param_1);
  }
  return lVar2;
}



/* Entry: 10953c7e4; end: 10953e8eb;  */

undefined8 FUN_10953c7e4(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  float *pfVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  float *pfVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  undefined4 *puVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  long lVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined8 *puVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  long lVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  long lVar46;
  undefined1 *puVar47;
  undefined1 (*pauVar48) [16];
  undefined1 *puVar49;
  float *pfVar50;
  float extraout_s0;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float extraout_s1;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float extraout_s2;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float extraout_s3;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  long lStack_290;
  undefined1 (*pauStack_280) [16];
  undefined1 (*pauStack_278) [16];
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  ulong uStack_260;
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  ulong uStack_238;
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  long lStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined8 uStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined8 uStack_170;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (**ppauStack_150) [16];
  undefined1 (**ppauStack_148) [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar52._0_8_ = *(undefined8 *)(param_2 + 0x10);
  fVar61 = (float)auVar52._0_8_ + (float)*(undefined8 *)(param_2 + 0x18);
  fVar51 = (float)((ulong)auVar52._0_8_ >> 0x20);
  fVar67 = fVar51 + (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  auVar52._12_4_ = fVar67;
  auVar52._8_4_ = fVar61;
  auVar62 = NEON_fmov(0x3f800000,4);
  auVar70._0_4_ = -(uint)(auVar62._0_4_ < (float)auVar52._0_8_);
  auVar70._4_4_ = -(uint)(auVar62._4_4_ < fVar51);
  auVar70._8_4_ = -(uint)(auVar62._8_4_ < fVar61);
  auVar70._12_4_ = -(uint)(auVar62._12_4_ < fVar67);
  auVar52 = NEON_fmaxnm(auVar52 ^ (auVar52 ^ auVar62) & auVar70,ZEXT216(0),4);
  auVar62._0_8_ = *param_1;
  auVar62._8_8_ = auVar62._0_8_;
  auVar62 = NEON_scvtf(auVar62,4);
  uStack_1a8 = (undefined1 (*) [16])
               CONCAT44(auVar52._12_4_ * auVar62._12_4_,auVar52._8_4_ * auVar62._8_4_);
  uStack_1b0 = (undefined1 (*) [16])
               CONCAT44(auVar52._4_4_ * auVar62._4_4_,auVar52._0_4_ * auVar62._0_4_);
  FUN_10953bec8(&uStack_1b0);
  pfVar7 = (float *)0x10;
  _malloc();
  if (pfVar7 == (float *)0x0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953e578:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10953e74c;
  }
  *pfVar7 = extraout_s0;
  pfVar7[1] = extraout_s1;
  pfVar7[2] = extraout_s2;
  pfVar7[3] = extraout_s3;
  pauVar8 = (undefined1 (*) [16])0x10;
  _malloc();
  if (pauVar8 == (undefined1 (*) [16])0x0) goto LAB_10953e578;
  pauStack_210 = (undefined1 (*) [16])0x4;
  lVar18 = param_1[1];
  *(float *)*pauVar8 = *(float *)(lVar18 + 0xc) * 0.05;
  *(float *)(*pauVar8 + 4) = *(float *)(lVar18 + 0xc) * 0.05;
  *(undefined4 *)(*pauVar8 + 8) = 0x3dcccccd;
  *(float *)(*pauVar8 + 0xc) = *(float *)(lVar18 + 0xc) * 0.05;
  uStack_1a8 = (undefined1 (*) [16])&pauStack_218;
  pauStack_218 = pauVar8;
  FUN_10953ea3c(&pauStack_110,&uStack_1b0);
  pauStack_258 = (undefined1 (*) [16])0x0;
  pauStack_250 = (undefined1 (*) [16])0x0;
  FUN_1093c61bc(&pauStack_258,param_1[10],1);
  pauVar8 = (undefined1 (*) [16])param_1[10];
  if (pauStack_250 != pauVar8) {
    FUN_1093c61bc(&pauStack_258,pauVar8,1);
    pauVar8 = pauStack_250;
  }
  pauVar12 = (undefined1 (*) [16])(param_1 + 9);
  if (0 < (long)pauVar8) {
    _bzero(pauStack_258,(long)pauVar8 << 2);
  }
  if (param_1[10] == 1) {
    if (param_1[2] == 0) {
      fVar51 = 0.0;
    }
    else {
      fVar51 = (float)FUN_10953ec50(param_1[9],param_1[1]);
    }
    *(float *)*pauStack_258 = fVar51 + *(float *)*pauStack_258;
  }
  else {
    FUN_10953eb04(pauVar12,param_1[1],param_1[2],pauStack_258);
  }
  pauVar8 = (undefined1 (*) [16])(param_1 + 3);
  pauStack_198 = (undefined1 (*) [16])&pauStack_110;
  pauStack_1e8 = (undefined1 (*) [16])0x0;
  pauStack_1e0 = (undefined1 (*) [16])0x0;
  pauStack_1f0 = (undefined1 (*) [16])0x0;
  uStack_1b0 = pauVar12;
  uStack_1a8 = pauVar8;
  pauStack_1a0 = pauVar12;
  if ((pauStack_108 != (undefined1 (*) [16])0x0) && (pauStack_100 != (undefined1 (*) [16])0x0)) {
    lVar18 = 0;
    if (pauStack_100 != (undefined1 (*) [16])0x0) {
      lVar18 = 0x7fffffffffffffff / (long)pauStack_100;
    }
    if (lVar18 < (long)pauStack_108) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953e74c;
    }
  }
  FUN_1093d98c8(&pauStack_1f0,(long)pauStack_100 * (long)pauStack_108);
  FUN_10953ed6c(&pauStack_1f0,&uStack_1b0);
  func_0x0001093c625c(&pauStack_240,&pauStack_258);
  pauVar22 = pauStack_1e0;
  pauVar20 = pauStack_1e8;
  uVar19 = (long)pauStack_1e0 * (long)pauStack_1e8;
  if (uVar19 != 0) {
    if (uVar19 >> 0x3e == 0) {
      pauVar48 = (undefined1 (*) [16])(uVar19 * 4);
      _malloc();
      pauVar11 = pauStack_1f0;
      if (pauVar48 != (undefined1 (*) [16])0x0) {
        pauStack_228 = pauVar20;
        pauStack_220 = pauVar22;
        pauStack_230 = pauVar48;
        _memcpy();
        goto LAB_10953ca30;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10953e74c;
  }
  pauStack_230 = (undefined1 (*) [16])0x0;
  pauStack_228 = pauStack_1e8;
  pauStack_220 = pauStack_1e0;
  pauVar11 = pauStack_1f0;
LAB_10953ca30:
  _free(pauVar11);
  _free(pauStack_258);
  _free(pauStack_110);
  _free(pauStack_218);
  pauStack_1e8 = (undefined1 (*) [16])0x0;
  pauStack_1e0 = (undefined1 (*) [16])0x0;
  pauStack_1f0 = (undefined1 (*) [16])0x0;
  if ((pauStack_228 != (undefined1 (*) [16])0x0) && (pauStack_220 != (undefined1 (*) [16])0x0)) {
    lVar18 = 0;
    if (pauStack_220 != (undefined1 (*) [16])0x0) {
      lVar18 = 0x7fffffffffffffff / (long)pauStack_220;
    }
    if (lVar18 < (long)pauStack_228) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953e74c;
    }
  }
  FUN_1093d98c8(&pauStack_1f0,(long)pauStack_220 * (long)pauStack_228);
  pauVar20 = pauStack_228;
  uStack_1d8._0_5_ = (uint5)(uint)uStack_1d8;
  if (pauStack_228 == (undefined1 (*) [16])0x0) {
LAB_10953ca9c:
    FUN_1093d98c8(&pauStack_1f0,(long)pauStack_228 * (long)pauStack_228,pauStack_228,pauStack_228);
    pauVar22 = pauStack_230;
    if ((pauStack_1f0 != pauStack_230) || (pauStack_1e0 != pauStack_220)) {
      if ((pauStack_1e8 != pauStack_228) || (pauVar11 = pauStack_228, pauStack_1e0 != pauStack_220))
      {
        if ((pauStack_220 != (undefined1 (*) [16])0x0) && (pauStack_228 != (undefined1 (*) [16])0x0)
           ) {
          lVar18 = 0;
          if (pauStack_220 != (undefined1 (*) [16])0x0) {
            lVar18 = 0x7fffffffffffffff / (long)pauStack_220;
          }
          if (lVar18 < (long)pauStack_228) goto LAB_10953e5a0;
        }
        FUN_1093d98c8(&pauStack_1f0,(long)pauStack_228 * (long)pauStack_220);
        pauVar11 = pauStack_1e8;
      }
      uVar24 = (long)pauVar11 * (long)pauStack_1e0;
      uVar19 = uVar24 + 3;
      if (-1 < (long)uVar24) {
        uVar19 = uVar24;
      }
      if (3 < (long)uVar24) {
        lVar18 = 0;
        pauVar11 = pauStack_1f0;
        pauVar48 = pauVar22;
        do {
          auVar52 = *pauVar48;
          *(long *)(*pauVar11 + 8) = auVar52._8_8_;
          *(long *)*pauVar11 = auVar52._0_8_;
          lVar18 = lVar18 + 4;
          pauVar11 = pauVar11 + 1;
          pauVar48 = pauVar48 + 1;
        } while (lVar18 < (long)(uVar19 & 0xfffffffffffffffc));
      }
      lVar18 = (long)uVar24 % 4;
      if (lVar18 != 0 && lVar18 < 0 == SBORROW8(uVar24,uVar19 & 0xfffffffffffffffc)) {
        pauVar11 = pauStack_1f0 + ((long)uVar19 >> 2);
        pauVar22 = pauVar22 + ((long)uVar19 >> 2);
        do {
          *(undefined4 *)*pauVar11 = *(undefined4 *)*pauVar22;
          lVar18 = lVar18 + -1;
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
          pauVar22 = (undefined1 (*) [16])(*pauVar22 + 4);
        } while (lVar18 != 0);
      }
    }
    pauVar22 = pauStack_1e8;
    uStack_1d8 = (undefined1 (**) [16])((ulong)uStack_1d8 & 0xffffffff00000000);
    if (0 < (long)pauVar20) {
      pauVar48 = (undefined1 (*) [16])0x0;
      pfVar10 = (float *)(*pauStack_1f0 +
                         (long)pauStack_1e0 * ((long)pauStack_1e8 * 4 + (long)pauVar20 * -4 + 4));
      pauVar11 = pauStack_1f0 + 3;
      fVar51 = 0.0;
      pauVar44 = pauStack_1f0;
      pauVar27 = pauVar20;
      do {
        pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xf);
        fVar61 = ABS(*(float *)(*pauStack_1f0 +
                               ((long)pauStack_1e8 - ((long)pauVar20 - (long)pauVar48)) *
                               (long)pauStack_1e0 * 4 + (long)pauVar48 * 4));
        pauVar45 = pauVar27;
        pfVar21 = pfVar10;
        if (1 < (long)pauVar20 - (long)pauVar48) {
          do {
            fVar61 = fVar61 + ABS(*pfVar21);
            pauVar25 = pauVar45 + -1;
            pauVar45 = (undefined1 (*) [16])(*pauVar25 + 0xf);
            pfVar21 = pfVar21 + (long)pauStack_1e0;
          } while ((undefined1 (*) [16])(*pauVar25 + 0xf) != (undefined1 (*) [16])0x0);
        }
        if (pauVar48 == (undefined1 (*) [16])0x0) {
          fVar67 = 0.0;
        }
        else {
          pfVar21 = (float *)(*pauStack_1f0 + (long)pauVar48 * (long)pauStack_1e0 * 4);
          if (pauVar48 < (undefined1 (*) [16])0x4) {
            fVar67 = ABS(*pfVar21);
            if (pauVar48 != (undefined1 (*) [16])0x1) {
              pauVar45 = (undefined1 (*) [16])0x1;
              do {
                fVar67 = fVar67 + ABS(*(float *)(*pauVar44 + (long)pauVar45 * 4));
                pauVar45 = (undefined1 (*) [16])(*pauVar45 + 1);
              } while (pauVar48 != pauVar45);
            }
          }
          else {
            pauVar45 = (undefined1 (*) [16])((ulong)pauVar48 & 0x7ffffffffffffffc);
            auVar71._0_4_ = ABS(*pfVar21);
            auVar71._4_4_ = ABS(pfVar21[1]);
            auVar71._8_4_ = ABS(pfVar21[2]);
            auVar71._12_4_ = ABS(pfVar21[3]);
            if ((undefined1 (*) [16])0x7 < pauVar48) {
              pauVar25 = (undefined1 (*) [16])((ulong)pauVar48 & 0x7ffffffffffffff8);
              fVar67 = ABS(pfVar21[4]);
              fVar69 = ABS(pfVar21[5]);
              fVar68 = ABS(pfVar21[6]);
              fVar73 = ABS(pfVar21[7]);
              auVar72 = auVar71;
              if ((undefined1 (*) [16])0xf < pauVar48) {
                pauVar32 = (undefined1 (*) [16])0x8;
                pauVar28 = pauVar11;
                do {
                  auVar72._0_4_ = auVar71._0_4_ + ABS((float)*(undefined8 *)pauVar28[-1]);
                  auVar72._4_4_ =
                       auVar71._4_4_ + ABS((float)((ulong)*(undefined8 *)pauVar28[-1] >> 0x20));
                  auVar72._8_4_ = auVar71._8_4_ + ABS((float)*(undefined8 *)(pauVar28[-1] + 8));
                  auVar72._12_4_ =
                       auVar71._12_4_ +
                       ABS((float)((ulong)*(undefined8 *)(pauVar28[-1] + 8) >> 0x20));
                  fVar67 = fVar67 + ABS((float)*(undefined8 *)*pauVar28);
                  fVar69 = fVar69 + ABS((float)((ulong)*(undefined8 *)*pauVar28 >> 0x20));
                  fVar68 = fVar68 + ABS((float)*(undefined8 *)(*pauVar28 + 8));
                  fVar73 = fVar73 + ABS((float)((ulong)*(undefined8 *)(*pauVar28 + 8) >> 0x20));
                  pauVar32 = (undefined1 (*) [16])(*pauVar32 + 8);
                  pauVar28 = pauVar28 + 2;
                  auVar71 = auVar72;
                } while (pauVar32 < pauVar25);
              }
              auVar71._0_4_ = fVar67 + auVar72._0_4_;
              auVar71._4_4_ = fVar69 + auVar72._4_4_;
              auVar71._8_4_ = fVar68 + auVar72._8_4_;
              auVar71._12_4_ = fVar73 + auVar72._12_4_;
              if (pauVar25 < pauVar45) {
                pfVar21 = pfVar21 + (long)pauVar25;
                auVar71._0_4_ = auVar71._0_4_ + ABS(*pfVar21);
                auVar71._4_4_ = auVar71._4_4_ + ABS(pfVar21[1]);
                auVar71._8_4_ = auVar71._8_4_ + ABS(pfVar21[2]);
                auVar71._12_4_ = auVar71._12_4_ + ABS(pfVar21[3]);
              }
            }
            auVar52 = NEON_ext(auVar71,auVar71,8,1);
            fVar67 = auVar71._0_4_ + auVar52._0_4_ + auVar71._4_4_ + auVar52._4_4_;
            for (; pauVar45 != pauVar48; pauVar45 = (undefined1 (*) [16])(*pauVar45 + 1)) {
              fVar67 = fVar67 + ABS(*(float *)(*pauVar44 + (long)pauVar45 * 4));
            }
          }
        }
        fVar61 = fVar61 + fVar67;
        if (fVar51 < fVar61) {
          uStack_1d8 = (undefined1 (**) [16])CONCAT44(uStack_1d8._4_4_,fVar61);
          fVar51 = fVar61;
        }
        pauVar48 = (undefined1 (*) [16])(*pauVar48 + 1);
        pfVar10 = pfVar10 + (long)(*pauStack_1e0 + 1);
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + (long)pauStack_1e0 * 4);
        pauVar44 = (undefined1 (*) [16])(*pauVar44 + (long)pauStack_1e0 * 4);
      } while (pauVar48 != pauVar20);
    }
    uStack_1d8._0_5_ = CONCAT14(1,(uint)uStack_1d8);
    if ((long)pauStack_1e8 < 0x20) {
      if (0 < (long)pauStack_1e8) {
        lVar18 = 0;
        lVar46 = 4;
        pauVar11 = (undefined1 (*) [16])0x0;
        pauVar48 = pauStack_1e0;
        pauVar44 = pauStack_1e0;
        pauVar20 = pauStack_1e8;
        do {
          pauVar27 = pauStack_1f0;
          pauVar20 = (undefined1 (*) [16])(pauVar20[-1] + 0xf);
          pfVar10 = (float *)(*pauStack_1f0 + (long)pauVar11 * (long)pauVar44 * 4);
          fVar51 = pfVar10[(long)pauVar11];
          if (pauVar11 != (undefined1 (*) [16])0x0) {
            if (pauVar11 < (undefined1 (*) [16])0x4) {
              fVar61 = *pfVar10 * *pfVar10;
              if (pauVar11 != (undefined1 (*) [16])0x1) {
                pauVar45 = (undefined1 (*) [16])0x1;
                do {
                  fVar61 = fVar61 + *(float *)(*pauStack_1f0 +
                                              (long)pauVar45 * 4 + (long)pauVar44 * lVar18) *
                                    *(float *)(*pauStack_1f0 +
                                              (long)pauVar45 * 4 + (long)pauVar44 * lVar18);
                  pauVar45 = (undefined1 (*) [16])(*pauVar45 + 1);
                } while (pauVar11 != pauVar45);
              }
            }
            else {
              pauVar45 = (undefined1 (*) [16])((ulong)pauVar11 & 0x7ffffffffffffffc);
              auVar63._0_4_ = *pfVar10 * *pfVar10;
              auVar63._4_4_ = pfVar10[1] * pfVar10[1];
              auVar63._8_4_ = pfVar10[2] * pfVar10[2];
              auVar63._12_4_ = pfVar10[3] * pfVar10[3];
              if ((undefined1 (*) [16])0x7 < pauVar11) {
                pauVar25 = (undefined1 (*) [16])((ulong)pauVar11 & 0x7ffffffffffffff8);
                fVar61 = pfVar10[4] * pfVar10[4];
                fVar67 = pfVar10[5] * pfVar10[5];
                fVar69 = pfVar10[6] * pfVar10[6];
                fVar68 = pfVar10[7] * pfVar10[7];
                auVar64 = auVar63;
                if ((undefined1 (*) [16])0xf < pauVar11) {
                  puVar35 = (undefined8 *)(pauStack_1f0[3] + (long)pauVar44 * lVar18);
                  pauVar32 = (undefined1 (*) [16])0x8;
                  do {
                    auVar64._0_4_ =
                         auVar63._0_4_ + *(float *)(puVar35 + -2) * *(float *)(puVar35 + -2);
                    auVar64._4_4_ =
                         auVar63._4_4_ +
                         *(float *)((long)puVar35 + -0xc) * *(float *)((long)puVar35 + -0xc);
                    auVar64._8_4_ =
                         auVar63._8_4_ + *(float *)(puVar35 + -1) * *(float *)(puVar35 + -1);
                    auVar64._12_4_ =
                         auVar63._12_4_ +
                         *(float *)((long)puVar35 + -4) * *(float *)((long)puVar35 + -4);
                    fVar73 = (float)*puVar35;
                    fVar74 = (float)((ulong)*puVar35 >> 0x20);
                    fVar75 = (float)puVar35[1];
                    fVar76 = (float)((ulong)puVar35[1] >> 0x20);
                    fVar61 = fVar61 + fVar73 * fVar73;
                    fVar67 = fVar67 + fVar74 * fVar74;
                    fVar69 = fVar69 + fVar75 * fVar75;
                    fVar68 = fVar68 + fVar76 * fVar76;
                    pauVar32 = (undefined1 (*) [16])(*pauVar32 + 8);
                    puVar35 = puVar35 + 4;
                    auVar63 = auVar64;
                  } while (pauVar32 < pauVar25);
                }
                auVar63._0_4_ = fVar61 + auVar64._0_4_;
                auVar63._4_4_ = fVar67 + auVar64._4_4_;
                auVar63._8_4_ = fVar69 + auVar64._8_4_;
                auVar63._12_4_ = fVar68 + auVar64._12_4_;
                if (pauVar25 < pauVar45) {
                  pfVar21 = pfVar10 + (long)pauVar25;
                  auVar63._0_4_ = auVar63._0_4_ + *pfVar21 * *pfVar21;
                  auVar63._4_4_ = auVar63._4_4_ + pfVar21[1] * pfVar21[1];
                  auVar63._8_4_ = auVar63._8_4_ + pfVar21[2] * pfVar21[2];
                  auVar63._12_4_ = auVar63._12_4_ + pfVar21[3] * pfVar21[3];
                }
              }
              auVar52 = NEON_ext(auVar63,auVar63,8,1);
              fVar61 = auVar63._0_4_ + auVar52._0_4_ + auVar63._4_4_ + auVar52._4_4_;
              if (pauVar45 != pauVar11) {
                do {
                  fVar61 = fVar61 + *(float *)(*pauStack_1f0 +
                                              (long)pauVar45 * 4 + (long)pauVar44 * lVar18) *
                                    *(float *)(*pauStack_1f0 +
                                              (long)pauVar45 * 4 + (long)pauVar44 * lVar18);
                  pauVar45 = (undefined1 (*) [16])(*pauVar45 + 1);
                } while (pauVar11 != pauVar45);
              }
            }
            fVar51 = fVar51 - fVar61;
          }
          if (fVar51 <= 0.0) goto LAB_10953d4c0;
          pauVar25 = (undefined1 (*) [16])(*pauVar22 + ~(ulong)pauVar11);
          pauVar45 = (undefined1 (*) [16])(*pauVar11 + 1);
          pfVar10[(long)pauVar11] = SQRT(fVar51);
          if ((pauVar11 == (undefined1 (*) [16])0x0) || ((long)pauVar25 < 1)) {
            if (0 < (long)pauVar25) goto LAB_10953cfc4;
          }
          else {
            pauVar32 = (undefined1 (*) [16])(*pauStack_1f0 + (long)pauVar45 * (long)pauVar44 * 4);
            if (pauVar25 == (undefined1 (*) [16])0x1) {
              if (pauVar11 < (undefined1 (*) [16])0x4) {
                fVar61 = *(float *)*pauVar32 * *pfVar10;
                if ((undefined1 (*) [16])0x1 < pauVar11) {
                  pauVar25 = (undefined1 (*) [16])0x1;
                  do {
                    fVar61 = fVar61 + *(float *)(*pauStack_1f0 +
                                                (long)pauVar25 * 4 + (long)pauVar44 * lVar46) *
                                      *(float *)(*pauStack_1f0 +
                                                (long)pauVar25 * 4 + (long)pauVar44 * lVar18);
                    pauVar25 = (undefined1 (*) [16])(*pauVar25 + 1);
                  } while (pauVar11 != pauVar25);
                }
              }
              else {
                pauVar25 = (undefined1 (*) [16])((ulong)pauVar11 & 0x7ffffffffffffffc);
                auVar53._0_4_ = *(float *)*pauVar32 * *pfVar10;
                auVar53._4_4_ = *(float *)(*pauVar32 + 4) * pfVar10[1];
                auVar53._8_4_ = *(float *)(*pauVar32 + 8) * pfVar10[2];
                auVar53._12_4_ = *(float *)(*pauVar32 + 0xc) * pfVar10[3];
                if ((undefined1 (*) [16])0x7 < pauVar11) {
                  pauVar28 = (undefined1 (*) [16])((ulong)pauVar11 & 0x7ffffffffffffff8);
                  auVar52 = *(undefined1 (*) [16])(pfVar10 + 4);
                  fVar61 = *(float *)pauVar32[1] * auVar52._0_4_;
                  fVar67 = *(float *)(pauVar32[1] + 4) * auVar52._4_4_;
                  fVar69 = *(float *)(pauVar32[1] + 8) * auVar52._8_4_;
                  fVar68 = *(float *)(pauVar32[1] + 0xc) * auVar52._12_4_;
                  auVar54 = auVar53;
                  if ((undefined1 (*) [16])0xf < pauVar11) {
                    puVar35 = (undefined8 *)(pauStack_1f0[3] + (long)pauVar44 * lVar18);
                    pauVar33 = (undefined1 (*) [16])(pauStack_1f0[3] + (long)pauVar44 * lVar46);
                    pauVar40 = (undefined1 (*) [16])0x8;
                    do {
                      auVar52 = *pauVar33;
                      auVar54._0_4_ = auVar53._0_4_ + *(float *)pauVar33[-1] * (float)puVar35[-2];
                      auVar54._4_4_ =
                           auVar53._4_4_ +
                           *(float *)(pauVar33[-1] + 4) * (float)((ulong)puVar35[-2] >> 0x20);
                      auVar54._8_4_ =
                           auVar53._8_4_ + *(float *)(pauVar33[-1] + 8) * (float)puVar35[-1];
                      auVar54._12_4_ =
                           auVar53._12_4_ +
                           *(float *)(pauVar33[-1] + 0xc) * (float)((ulong)puVar35[-1] >> 0x20);
                      fVar61 = fVar61 + auVar52._0_4_ * (float)*puVar35;
                      fVar67 = fVar67 + auVar52._4_4_ * (float)((ulong)*puVar35 >> 0x20);
                      fVar69 = fVar69 + auVar52._8_4_ * (float)puVar35[1];
                      fVar68 = fVar68 + auVar52._12_4_ * (float)((ulong)puVar35[1] >> 0x20);
                      pauVar40 = (undefined1 (*) [16])(*pauVar40 + 8);
                      puVar35 = puVar35 + 4;
                      pauVar33 = pauVar33 + 2;
                      auVar53 = auVar54;
                    } while (pauVar40 < pauVar28);
                  }
                  auVar53._0_4_ = fVar61 + auVar54._0_4_;
                  auVar53._4_4_ = fVar67 + auVar54._4_4_;
                  auVar53._8_4_ = fVar69 + auVar54._8_4_;
                  auVar53._12_4_ = fVar68 + auVar54._12_4_;
                  if (pauVar28 < pauVar25) {
                    pfVar21 = (float *)(*pauVar32 + (long)pauVar28 * 4);
                    auVar52 = *(undefined1 (*) [16])(pfVar10 + (long)pauVar28);
                    auVar53._0_4_ = auVar53._0_4_ + *pfVar21 * auVar52._0_4_;
                    auVar53._4_4_ = auVar53._4_4_ + pfVar21[1] * auVar52._4_4_;
                    auVar53._8_4_ = auVar53._8_4_ + pfVar21[2] * auVar52._8_4_;
                    auVar53._12_4_ = auVar53._12_4_ + pfVar21[3] * auVar52._12_4_;
                  }
                }
                auVar52 = NEON_ext(auVar53,auVar53,8,1);
                fVar61 = auVar53._0_4_ + auVar52._0_4_ + auVar53._4_4_ + auVar52._4_4_;
                if (pauVar25 != pauVar11) {
                  do {
                    fVar61 = fVar61 + *(float *)(*pauStack_1f0 +
                                                (long)pauVar25 * 4 + (long)pauVar44 * lVar46) *
                                      *(float *)(*pauStack_1f0 +
                                                (long)pauVar25 * 4 + (long)pauVar44 * lVar18);
                    pauVar25 = (undefined1 (*) [16])(*pauVar25 + 1);
                  } while (pauVar11 != pauVar25);
                }
              }
              *(float *)(*pauVar32 + (long)pauVar11 * 4) =
                   *(float *)(*pauVar32 + (long)pauVar11 * 4) - fVar61;
            }
            else {
              pauStack_188 = (undefined1 (*) [16])0x0;
              uStack_1b0 = pauVar32;
              uStack_1a8 = pauVar25;
              pauStack_1a0 = pauVar11;
              pauStack_198 = (undefined1 (*) [16])&pauStack_1f0;
              pauStack_190 = pauVar45;
              pauStack_180 = pauVar44;
              FUN_109540a54(&uStack_1b0);
              pauVar48 = pauStack_1e0;
            }
LAB_10953cfc4:
            puVar47 = *pauVar27 + (long)pauVar44 * lVar46;
            pauVar11 = pauVar20;
            do {
              *(float *)(puVar47 + lVar18) = *(float *)(puVar47 + lVar18) / SQRT(fVar51);
              puVar47 = puVar47 + (long)pauVar48 * 4;
              pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
              pauVar44 = pauVar48;
            } while (pauVar11 != (undefined1 (*) [16])0x0);
          }
          lVar18 = lVar18 + 4;
          lVar46 = lVar46 + 4;
          pauVar11 = pauVar45;
        } while (pauVar22 != pauVar45);
      }
    }
    else {
      lStack_290 = 0;
      puVar47 = (undefined1 *)0x0;
      pauVar20 = (undefined1 (*) [16])((ulong)pauStack_1e8 >> 3 & 0xffffffffffffff0);
      if ((undefined1 (*) [16])0x7f < pauVar20) {
        pauVar20 = (undefined1 (*) [16])0x80;
      }
      pauVar11 = (undefined1 (*) [16])0x8;
      if (((ulong)pauStack_1e8 >> 3 & 0xffffffffffffff0) != 0) {
        pauVar11 = pauVar20;
      }
      pauVar20 = pauStack_1e8;
      do {
        pauVar27 = pauStack_1e0;
        pauVar44 = pauStack_1f0;
        pauVar48 = pauVar11;
        if ((long)pauVar20 <= (long)pauVar11) {
          pauVar48 = pauVar20;
        }
        pauVar25 = (undefined1 (*) [16])((long)pauVar22 - (long)puVar47);
        pauVar45 = pauVar25;
        if ((long)pauVar11 <= (long)pauVar25) {
          pauVar45 = pauVar11;
        }
        puVar1 = *pauStack_1f0 + (long)pauStack_1e0 * (long)puVar47 * 4 + (long)puVar47 * 4;
        if (0 < (long)pauVar45) {
          lVar18 = 0;
          puVar2 = *pauStack_1f0 + lStack_290 + lStack_290 * (long)pauStack_1e0;
          lVar46 = 4;
          pauVar32 = (undefined1 (*) [16])0x0;
          pauVar28 = pauStack_1e0;
          puVar49 = puVar2;
          do {
            pauVar48 = (undefined1 (*) [16])(pauVar48[-1] + 0xf);
            lVar30 = (long)pauVar32 * (long)pauVar28;
            pauVar40 = (undefined1 (*) [16])(puVar1 + lVar30 * 4);
            fVar51 = *(float *)(puVar1 + lVar30 * 4 + (long)pauVar32 * 4);
            if (pauVar32 != (undefined1 (*) [16])0x0) {
              if (pauVar32 < (undefined1 (*) [16])0x4) {
                fVar61 = *(float *)*pauVar40 * *(float *)*pauVar40;
                if (pauVar32 != (undefined1 (*) [16])0x1) {
                  pauVar33 = (undefined1 (*) [16])0x1;
                  do {
                    fVar61 = fVar61 + *(float *)(puVar2 + (long)pauVar33 * 4 +
                                                          (long)pauVar28 * lVar18) *
                                      *(float *)(puVar2 + (long)pauVar33 * 4 +
                                                          (long)pauVar28 * lVar18);
                    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 1);
                  } while (pauVar32 != pauVar33);
                }
              }
              else {
                pauVar33 = (undefined1 (*) [16])((ulong)pauVar32 & 0x7ffffffffffffffc);
                auVar65._0_4_ = *(float *)*pauVar40 * *(float *)*pauVar40;
                auVar65._4_4_ = *(float *)(*pauVar40 + 4) * *(float *)(*pauVar40 + 4);
                auVar65._8_4_ = *(float *)(*pauVar40 + 8) * *(float *)(*pauVar40 + 8);
                auVar65._12_4_ = *(float *)(*pauVar40 + 0xc) * *(float *)(*pauVar40 + 0xc);
                if ((undefined1 (*) [16])0x7 < pauVar32) {
                  pauVar34 = (undefined1 (*) [16])((ulong)pauVar32 & 0x7ffffffffffffff8);
                  fVar61 = *(float *)pauVar40[1] * *(float *)pauVar40[1];
                  fVar67 = *(float *)(pauVar40[1] + 4) * *(float *)(pauVar40[1] + 4);
                  fVar69 = *(float *)(pauVar40[1] + 8) * *(float *)(pauVar40[1] + 8);
                  fVar68 = *(float *)(pauVar40[1] + 0xc) * *(float *)(pauVar40[1] + 0xc);
                  auVar66 = auVar65;
                  if ((undefined1 (*) [16])0xf < pauVar32) {
                    puVar35 = (undefined8 *)(puVar2 + (long)pauVar28 * lVar18 + 0x30);
                    pauVar41 = (undefined1 (*) [16])0x8;
                    do {
                      auVar66._0_4_ =
                           auVar65._0_4_ + *(float *)(puVar35 + -2) * *(float *)(puVar35 + -2);
                      auVar66._4_4_ =
                           auVar65._4_4_ +
                           *(float *)((long)puVar35 + -0xc) * *(float *)((long)puVar35 + -0xc);
                      auVar66._8_4_ =
                           auVar65._8_4_ + *(float *)(puVar35 + -1) * *(float *)(puVar35 + -1);
                      auVar66._12_4_ =
                           auVar65._12_4_ +
                           *(float *)((long)puVar35 + -4) * *(float *)((long)puVar35 + -4);
                      fVar73 = (float)*puVar35;
                      fVar74 = (float)((ulong)*puVar35 >> 0x20);
                      fVar75 = (float)puVar35[1];
                      fVar76 = (float)((ulong)puVar35[1] >> 0x20);
                      fVar61 = fVar61 + fVar73 * fVar73;
                      fVar67 = fVar67 + fVar74 * fVar74;
                      fVar69 = fVar69 + fVar75 * fVar75;
                      fVar68 = fVar68 + fVar76 * fVar76;
                      pauVar41 = (undefined1 (*) [16])(*pauVar41 + 8);
                      puVar35 = puVar35 + 4;
                      auVar65 = auVar66;
                    } while (pauVar41 < pauVar34);
                  }
                  auVar65._0_4_ = fVar61 + auVar66._0_4_;
                  auVar65._4_4_ = fVar67 + auVar66._4_4_;
                  auVar65._8_4_ = fVar69 + auVar66._8_4_;
                  auVar65._12_4_ = fVar68 + auVar66._12_4_;
                  if (pauVar34 < pauVar33) {
                    pfVar10 = (float *)(*pauVar40 + (long)pauVar34 * 4);
                    auVar65._0_4_ = auVar65._0_4_ + *pfVar10 * *pfVar10;
                    auVar65._4_4_ = auVar65._4_4_ + pfVar10[1] * pfVar10[1];
                    auVar65._8_4_ = auVar65._8_4_ + pfVar10[2] * pfVar10[2];
                    auVar65._12_4_ = auVar65._12_4_ + pfVar10[3] * pfVar10[3];
                  }
                }
                auVar52 = NEON_ext(auVar65,auVar65,8,1);
                fVar61 = auVar65._0_4_ + auVar52._0_4_ + auVar65._4_4_ + auVar52._4_4_;
                if (pauVar33 != pauVar32) {
                  do {
                    fVar61 = fVar61 + *(float *)(puVar2 + (long)pauVar33 * 4 +
                                                          (long)pauVar28 * lVar18) *
                                      *(float *)(puVar2 + (long)pauVar33 * 4 +
                                                          (long)pauVar28 * lVar18);
                    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 1);
                  } while (pauVar32 != pauVar33);
                }
              }
              fVar51 = fVar51 - fVar61;
            }
            if (fVar51 <= 0.0) goto LAB_10953d4c0;
            puVar3 = *pauVar45 + ~(ulong)pauVar32;
            pauVar33 = (undefined1 (*) [16])(*pauVar32 + 1);
            *(float *)(puVar1 + lVar30 * 4 + (long)pauVar32 * 4) = SQRT(fVar51);
            pauVar34 = pauVar28;
            if ((pauVar32 == (undefined1 (*) [16])0x0) || ((long)puVar3 < 1)) {
              if (0 < (long)puVar3) goto LAB_10953d340;
            }
            else {
              pauVar41 = (undefined1 (*) [16])(puVar1 + (long)pauVar33 * (long)pauVar28 * 4);
              if (puVar3 == (undefined1 *)0x1) {
                if (pauVar32 < (undefined1 (*) [16])0x4) {
                  fVar61 = *(float *)*pauVar41 * *(float *)*pauVar40;
                  if ((undefined1 (*) [16])0x1 < pauVar32) {
                    pauVar40 = (undefined1 (*) [16])0x1;
                    do {
                      fVar61 = fVar61 + *(float *)(puVar2 + (long)pauVar40 * 4 +
                                                            (long)pauVar28 * lVar46) *
                                        *(float *)(puVar2 + (long)pauVar40 * 4 +
                                                            (long)pauVar28 * lVar18);
                      pauVar40 = (undefined1 (*) [16])(*pauVar40 + 1);
                    } while (pauVar32 != pauVar40);
                  }
                }
                else {
                  pauVar23 = (undefined1 (*) [16])((ulong)pauVar32 & 0x7ffffffffffffffc);
                  auVar55._0_4_ = *(float *)*pauVar41 * *(float *)*pauVar40;
                  auVar55._4_4_ = *(float *)(*pauVar41 + 4) * *(float *)(*pauVar40 + 4);
                  auVar55._8_4_ = *(float *)(*pauVar41 + 8) * *(float *)(*pauVar40 + 8);
                  auVar55._12_4_ = *(float *)(*pauVar41 + 0xc) * *(float *)(*pauVar40 + 0xc);
                  if ((undefined1 (*) [16])0x7 < pauVar32) {
                    pauVar29 = (undefined1 (*) [16])((ulong)pauVar32 & 0x7ffffffffffffff8);
                    auVar52 = pauVar40[1];
                    fVar61 = *(float *)pauVar41[1] * auVar52._0_4_;
                    fVar67 = *(float *)(pauVar41[1] + 4) * auVar52._4_4_;
                    fVar69 = *(float *)(pauVar41[1] + 8) * auVar52._8_4_;
                    fVar68 = *(float *)(pauVar41[1] + 0xc) * auVar52._12_4_;
                    auVar56 = auVar55;
                    if ((undefined1 (*) [16])0xf < pauVar32) {
                      puVar35 = (undefined8 *)(puVar2 + (long)pauVar28 * lVar18 + 0x30);
                      pauVar39 = (undefined1 (*) [16])0x8;
                      pauVar42 = (undefined1 (*) [16])(puVar2 + (long)pauVar28 * lVar46 + 0x30);
                      do {
                        auVar52 = *pauVar42;
                        auVar56._0_4_ = auVar55._0_4_ + *(float *)pauVar42[-1] * (float)puVar35[-2];
                        auVar56._4_4_ =
                             auVar55._4_4_ +
                             *(float *)(pauVar42[-1] + 4) * (float)((ulong)puVar35[-2] >> 0x20);
                        auVar56._8_4_ =
                             auVar55._8_4_ + *(float *)(pauVar42[-1] + 8) * (float)puVar35[-1];
                        auVar56._12_4_ =
                             auVar55._12_4_ +
                             *(float *)(pauVar42[-1] + 0xc) * (float)((ulong)puVar35[-1] >> 0x20);
                        fVar61 = fVar61 + auVar52._0_4_ * (float)*puVar35;
                        fVar67 = fVar67 + auVar52._4_4_ * (float)((ulong)*puVar35 >> 0x20);
                        fVar69 = fVar69 + auVar52._8_4_ * (float)puVar35[1];
                        fVar68 = fVar68 + auVar52._12_4_ * (float)((ulong)puVar35[1] >> 0x20);
                        pauVar39 = (undefined1 (*) [16])(*pauVar39 + 8);
                        puVar35 = puVar35 + 4;
                        pauVar42 = pauVar42 + 2;
                        auVar55 = auVar56;
                      } while (pauVar39 < pauVar29);
                    }
                    auVar55._0_4_ = fVar61 + auVar56._0_4_;
                    auVar55._4_4_ = fVar67 + auVar56._4_4_;
                    auVar55._8_4_ = fVar69 + auVar56._8_4_;
                    auVar55._12_4_ = fVar68 + auVar56._12_4_;
                    if (pauVar29 < pauVar23) {
                      pfVar10 = (float *)(*pauVar41 + (long)pauVar29 * 4);
                      auVar52 = *(undefined1 (*) [16])(*pauVar40 + (long)pauVar29 * 4);
                      auVar55._0_4_ = auVar55._0_4_ + *pfVar10 * auVar52._0_4_;
                      auVar55._4_4_ = auVar55._4_4_ + pfVar10[1] * auVar52._4_4_;
                      auVar55._8_4_ = auVar55._8_4_ + pfVar10[2] * auVar52._8_4_;
                      auVar55._12_4_ = auVar55._12_4_ + pfVar10[3] * auVar52._12_4_;
                    }
                  }
                  auVar52 = NEON_ext(auVar55,auVar55,8,1);
                  fVar61 = auVar55._0_4_ + auVar52._0_4_ + auVar55._4_4_ + auVar52._4_4_;
                  if (pauVar23 != pauVar32) {
                    do {
                      fVar61 = fVar61 + *(float *)(puVar2 + (long)pauVar23 * 4 +
                                                            (long)pauVar28 * lVar46) *
                                        *(float *)(puVar2 + (long)pauVar23 * 4 +
                                                            (long)pauVar28 * lVar18);
                      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
                    } while (pauVar32 != pauVar23);
                  }
                }
                *(float *)(puVar1 + (long)pauVar33 * (long)pauVar28 * 4 + (long)pauVar32 * 4) =
                     *(float *)(puVar1 + (long)pauVar33 * (long)pauVar28 * 4 + (long)pauVar32 * 4) -
                     fVar61;
              }
              else {
                uStack_1a8 = pauStack_1e0;
                pauStack_108 = (undefined1 (*) [16])0x1;
                uStack_1b0 = pauVar41;
                pauStack_110 = pauVar40;
                FUN_1093c55d4(puVar3,pauVar32,&uStack_1b0,&pauStack_110);
                pauVar34 = pauStack_1e0;
              }
LAB_10953d340:
              pfVar10 = (float *)(puVar49 + (long)pauVar28 * lVar46);
              pauVar32 = pauVar48;
              do {
                *pfVar10 = *pfVar10 / SQRT(fVar51);
                pfVar10 = pfVar10 + (long)pauVar34;
                pauVar32 = (undefined1 (*) [16])(pauVar32[-1] + 0xf);
              } while (pauVar32 != (undefined1 (*) [16])0x0);
            }
            lVar18 = lVar18 + 4;
            lVar46 = lVar46 + 4;
            puVar49 = puVar49 + 4;
            pauVar32 = pauVar33;
            pauVar28 = pauVar34;
          } while (pauVar45 != pauVar33);
        }
        pauVar25 = (undefined1 (*) [16])((long)pauVar25 - (long)pauVar45);
        if (0 < (long)pauVar25) {
          lVar18 = (long)(*pauVar45 + (long)puVar47) * (long)pauVar27;
          puVar49 = *pauVar44 + lVar18 * 4 + (long)puVar47 * 4;
          if (pauVar45 != (undefined1 (*) [16])0x0) {
            uStack_1b0 = (undefined1 (*) [16])0x0;
            uStack_1a8 = (undefined1 (*) [16])0x0;
            pauStack_1a0 = pauVar45;
            pauStack_198 = pauVar25;
            pauStack_190 = pauVar45;
            pauStack_110 = pauVar25;
            FUN_1093de430(&pauStack_190,&pauStack_1a0,&pauStack_110,1);
            pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
            pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
            FUN_109540bb0(pauVar45,pauVar25,puVar1,pauStack_1e0,puVar49,pauStack_1e0,&uStack_1b0);
            _free(uStack_1b0);
            _free(uStack_1a8);
          }
          uStack_1b0 = (undefined1 (*) [16])0x0;
          uStack_1a8 = (undefined1 (*) [16])0x0;
          pauStack_1a0 = pauVar25;
          pauStack_198 = pauVar25;
          pauStack_190 = pauVar45;
          pauStack_110 = pauVar25;
          FUN_1093ecdf0(&pauStack_190,&pauStack_1a0,&pauStack_110,1);
          pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
          pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
          FUN_10954166c(pauVar25,pauVar45,puVar49,pauStack_1e0,puVar49,pauStack_1e0,
                        *pauVar44 + lVar18 * 4 + (long)(*pauVar45 + (long)puVar47) * 4,pauStack_1e0,
                        &uStack_1b0);
          _free(uStack_1b0);
          _free(uStack_1a8);
        }
        puVar47 = *pauVar11 + (long)puVar47;
        lStack_290 = lStack_290 + (long)pauVar11 * 4;
        pauVar20 = (undefined1 (*) [16])((long)pauVar20 - (long)pauVar11);
      } while ((long)puVar47 < (long)pauVar22);
    }
    uVar17 = 0;
    goto LAB_10953d4c4;
  }
  lVar18 = 0;
  if (pauStack_228 != (undefined1 (*) [16])0x0) {
    lVar18 = 0x7fffffffffffffff / (long)pauStack_228;
  }
  if ((long)pauStack_228 <= lVar18) goto LAB_10953ca9c;
  goto LAB_10953e5a0;
LAB_10953d4c0:
  uVar17 = 1;
LAB_10953d4c4:
  pauStack_1d0 = (undefined1 (*) [16])CONCAT44(pauStack_1d0._4_4_,uVar17);
  pauStack_250 = (undefined1 (*) [16])0x0;
  pauStack_248 = (undefined1 (*) [16])0x0;
  pauStack_258 = (undefined1 (*) [16])0x0;
  lVar18 = param_1[4];
  if ((pauStack_1e0 != (undefined1 (*) [16])0x0) && (lVar18 != 0)) {
    lVar46 = 0;
    if (lVar18 != 0) {
      lVar46 = 0x7fffffffffffffff / lVar18;
    }
    if ((long)pauStack_1e0 <= lVar46) goto LAB_10953d4f4;
LAB_10953e5c4:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10953e74c;
  }
LAB_10953d4f4:
  FUN_1093d98c8(&pauStack_258,lVar18 * (long)pauStack_1e0);
  pauVar20 = (undefined1 (*) [16])param_1[4];
  if ((pauStack_250 != pauStack_1e0) || (pauStack_248 != pauVar20)) {
    if ((pauStack_1e0 != (undefined1 (*) [16])0x0) && (pauVar20 != (undefined1 (*) [16])0x0)) {
      lVar18 = 0;
      if (pauVar20 != (undefined1 (*) [16])0x0) {
        lVar18 = 0x7fffffffffffffff / (long)pauVar20;
      }
      if (lVar18 < (long)pauStack_1e0) goto LAB_10953e5c4;
    }
    FUN_1093d98c8(&pauStack_258,(long)pauVar20 * (long)pauStack_1e0,pauStack_1e0,pauVar20);
    pauVar20 = (undefined1 (*) [16])param_1[4];
  }
  pauStack_110 = (undefined1 (*) [16])0x0;
  pauStack_108 = (undefined1 (*) [16])0xffffffffffffffff;
  lVar18 = param_1[10];
  pauStack_f8 = (undefined1 (*) [16])0x0;
  pauStack_f0 = (undefined1 (*) [16])0x0;
  pauStack_100 = (undefined1 (*) [16])0x0;
  if ((pauVar20 != (undefined1 (*) [16])0x0) && (lVar18 != 0)) {
    lVar46 = 0;
    if (lVar18 != 0) {
      lVar46 = 0x7fffffffffffffff / lVar18;
    }
    if (lVar46 < (long)pauVar20) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953e74c;
    }
  }
  FUN_1093c3d54(&pauStack_100,lVar18 * (long)pauVar20,pauVar20);
  pauVar11 = pauStack_f0;
  pauVar22 = pauStack_f8;
  pauVar20 = pauStack_100;
  pauStack_110 = pauStack_100;
  pauStack_108 = pauStack_f8;
  uVar19 = param_1[0xb];
  lVar18 = uVar19 - 1;
  if (((long)uVar19 < 1) || (0x13 < (long)(*pauStack_f0 + (long)(*pauStack_f8 + uVar19)))) {
    if (0 < (long)pauStack_f0 * (long)pauStack_f8) {
      _bzero(pauStack_100,(long)pauStack_f0 * (long)pauStack_f8 * 4);
    }
    pauVar48 = (undefined1 (*) [16])param_1[5];
    if (((pauVar48 != (undefined1 (*) [16])0x0) && (param_1[4] != 0)) && (param_1[10] != 0)) {
      if (pauVar11 == (undefined1 (*) [16])0x1) {
        pfVar10 = *(float **)*pauVar12;
        if (param_1[4] == 1) {
          if (uVar19 == 0) {
            fVar51 = 0.0;
          }
          else {
            pfVar21 = *(float **)*pauVar8;
            uVar24 = uVar19 + 3;
            uVar31 = uVar19 + 7;
            if (-1 < (long)uVar19) {
              uVar24 = uVar19;
              uVar31 = uVar19;
            }
            if (uVar19 + 3 < 7) {
              fVar51 = *pfVar21 * *pfVar10;
              if (1 < (long)uVar19) {
                do {
                  pfVar10 = pfVar10 + 1;
                  pfVar21 = pfVar21 + 1;
                  fVar51 = fVar51 + *pfVar21 * *pfVar10;
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
              }
            }
            else {
              auVar59._0_4_ = *pfVar21 * *pfVar10;
              auVar59._4_4_ = pfVar21[1] * pfVar10[1];
              auVar59._8_4_ = pfVar21[2] * pfVar10[2];
              auVar59._12_4_ = pfVar21[3] * pfVar10[3];
              if (7 < (long)uVar19) {
                uVar31 = uVar31 & 0xfffffffffffffff8;
                fVar51 = pfVar21[4] * pfVar10[4];
                fVar61 = pfVar21[5] * pfVar10[5];
                fVar67 = pfVar21[6] * pfVar10[6];
                fVar69 = pfVar21[7] * pfVar10[7];
                auVar60 = auVar59;
                if (0xf < uVar19) {
                  pfVar38 = pfVar10 + 0xc;
                  pauVar8 = (undefined1 (*) [16])(pfVar21 + 0xc);
                  lVar18 = 8;
                  do {
                    auVar52 = *pauVar8;
                    auVar60._0_4_ =
                         auVar59._0_4_ +
                         *(float *)pauVar8[-1] * (float)*(undefined8 *)(pfVar38 + -4);
                    auVar60._4_4_ =
                         auVar59._4_4_ +
                         *(float *)(pauVar8[-1] + 4) *
                         (float)((ulong)*(undefined8 *)(pfVar38 + -4) >> 0x20);
                    auVar60._8_4_ =
                         auVar59._8_4_ +
                         *(float *)(pauVar8[-1] + 8) * (float)*(undefined8 *)(pfVar38 + -2);
                    auVar60._12_4_ =
                         auVar59._12_4_ +
                         *(float *)(pauVar8[-1] + 0xc) *
                         (float)((ulong)*(undefined8 *)(pfVar38 + -2) >> 0x20);
                    fVar51 = fVar51 + auVar52._0_4_ * (float)*(undefined8 *)pfVar38;
                    fVar61 = fVar61 + auVar52._4_4_ * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20)
                    ;
                    fVar67 = fVar67 + auVar52._8_4_ * (float)*(undefined8 *)(pfVar38 + 2);
                    fVar69 = fVar69 + auVar52._12_4_ *
                                      (float)((ulong)*(undefined8 *)(pfVar38 + 2) >> 0x20);
                    lVar18 = lVar18 + 8;
                    pfVar38 = pfVar38 + 8;
                    pauVar8 = pauVar8 + 2;
                    auVar59 = auVar60;
                  } while (lVar18 < (long)uVar31);
                }
                auVar59._0_4_ = fVar51 + auVar60._0_4_;
                auVar59._4_4_ = fVar61 + auVar60._4_4_;
                auVar59._8_4_ = fVar67 + auVar60._8_4_;
                auVar59._12_4_ = fVar69 + auVar60._12_4_;
                if ((long)uVar31 < (long)(uVar24 & 0xfffffffffffffffc)) {
                  pfVar38 = pfVar21 + uVar31;
                  pfVar50 = pfVar10 + uVar31;
                  auVar59._0_4_ = auVar59._0_4_ + *pfVar38 * *pfVar50;
                  auVar59._4_4_ = auVar59._4_4_ + pfVar38[1] * pfVar50[1];
                  auVar59._8_4_ = auVar59._8_4_ + pfVar38[2] * pfVar50[2];
                  auVar59._12_4_ = auVar59._12_4_ + pfVar38[3] * pfVar50[3];
                }
              }
              auVar52 = NEON_ext(auVar59,auVar59,8,1);
              fVar51 = auVar59._0_4_ + auVar52._0_4_ + auVar59._4_4_ + auVar52._4_4_;
              lVar18 = (long)uVar19 % 4;
              if (lVar18 != 0 && lVar18 < 0 == SBORROW8(uVar19,uVar24 & 0xfffffffffffffffc)) {
                pfVar21 = pfVar21 + ((long)uVar24 >> 2) * 4;
                pfVar10 = pfVar10 + ((long)uVar24 >> 2) * 4;
                do {
                  fVar51 = fVar51 + *pfVar21 * *pfVar10;
                  lVar18 = lVar18 + -1;
                  pfVar21 = pfVar21 + 1;
                  pfVar10 = pfVar10 + 1;
                } while (lVar18 != 0);
              }
            }
          }
          fVar51 = fVar51 + *(float *)*pauVar20;
LAB_10953da70:
          *(float *)*pauVar20 = fVar51;
        }
        else {
          FUN_109541c1c(pauVar8,pfVar10,uVar19,pauVar20);
        }
      }
      else if (pauVar22 == (undefined1 (*) [16])0x1) {
        if (param_1[10] == 1) {
          if (uVar19 == 0) {
            fVar51 = 0.0;
          }
          else {
            fVar51 = (float)FUN_109541d68(*(undefined8 *)*pauVar8,*(undefined8 *)*pauVar12,uVar19);
          }
          fVar51 = fVar51 + *(float *)*pauVar20;
          goto LAB_10953da70;
        }
        FUN_109541e84(pauVar12,*(undefined8 *)*pauVar8,pauVar48,pauVar20,&pauStack_100);
      }
      else {
        uStack_1b0 = (undefined1 (*) [16])0x0;
        uStack_1a8 = (undefined1 (*) [16])0x0;
        pauStack_1a0 = pauVar22;
        pauStack_198 = pauVar11;
        pauStack_190 = pauVar48;
        FUN_1093ecdf0(&pauStack_190,&pauStack_1a0,&pauStack_198,1);
        pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
        pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
        FUN_1093ed160(param_1[4],param_1[10],param_1[5],param_1[3],param_1[5],param_1[9],
                      param_1[0xb],pauStack_100,1,pauStack_f8,&uStack_1b0,0);
        _free(uStack_1b0);
        _free(uStack_1a8);
      }
    }
  }
  else {
    pauVar8 = (undefined1 (*) [16])param_1[4];
    pauVar12 = (undefined1 (*) [16])param_1[10];
    if ((pauStack_f8 != pauVar8) || (pauStack_f0 != pauVar12)) {
      if ((pauVar8 != (undefined1 (*) [16])0x0) && (pauVar12 != (undefined1 (*) [16])0x0)) {
        lVar18 = 0;
        if (pauVar12 != (undefined1 (*) [16])0x0) {
          lVar18 = 0x7fffffffffffffff / (long)pauVar12;
        }
        if (lVar18 < (long)pauVar8) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953e74c;
        }
      }
      FUN_1093c3d54(&pauStack_100,(long)pauVar12 * (long)pauVar8);
    }
    if (0 < (long)pauStack_f0) {
      lVar18 = 0;
      pauVar8 = (undefined1 (*) [16])0x0;
      lVar46 = param_1[3];
      lVar30 = param_1[5];
      do {
        if (0 < (long)pauStack_f8) {
          lVar43 = 0;
          lVar36 = param_1[9];
          uVar24 = param_1[0xb];
          pfVar10 = (float *)(lVar36 + uVar24 * (long)pauVar8 * 4);
          uVar19 = uVar24 + 7;
          if (-1 < (long)uVar24) {
            uVar19 = uVar24;
          }
          uVar9 = uVar19 & 0xfffffffffffffff8;
          uVar31 = uVar24 + 3;
          if (-1 < (long)uVar24) {
            uVar31 = uVar24;
          }
          uVar13 = uVar31 & 0xfffffffffffffffc;
          pfVar21 = (float *)(lVar36 + uVar24 * lVar18);
          lVar14 = (uVar31 & 0x3ffffffffffffffc) * 4;
          pfVar38 = (float *)(lVar46 + lVar14);
          pfVar50 = (float *)(lVar46 + 4);
          pauVar12 = (undefined1 (*) [16])(lVar46 + 0x30);
          do {
            if (uVar24 == 0) {
              fVar51 = 0.0;
            }
            else {
              pfVar16 = (float *)(lVar46 + lVar43 * lVar30 * 4);
              if (uVar24 + 3 < 7) {
                fVar51 = *pfVar16 * *pfVar10;
                pfVar15 = pfVar50;
                lVar37 = uVar24 - 1;
                pfVar16 = pfVar21;
                if (1 < (long)uVar24) {
                  do {
                    fVar51 = fVar51 + *pfVar15 * pfVar16[1];
                    lVar37 = lVar37 + -1;
                    pfVar15 = pfVar15 + 1;
                    pfVar16 = pfVar16 + 1;
                  } while (lVar37 != 0);
                }
              }
              else {
                auVar57._0_4_ = *pfVar16 * *pfVar10;
                auVar57._4_4_ = pfVar16[1] * pfVar10[1];
                auVar57._8_4_ = pfVar16[2] * pfVar10[2];
                auVar57._12_4_ = pfVar16[3] * pfVar10[3];
                if (7 < (long)uVar24) {
                  auVar52 = *(undefined1 (*) [16])(pfVar10 + 4);
                  fVar51 = pfVar16[4] * auVar52._0_4_;
                  fVar61 = pfVar16[5] * auVar52._4_4_;
                  fVar67 = pfVar16[6] * auVar52._8_4_;
                  fVar69 = pfVar16[7] * auVar52._12_4_;
                  auVar58 = auVar57;
                  if (0xf < uVar24) {
                    lVar37 = 8;
                    pfVar15 = pfVar21 + 0xc;
                    pauVar20 = pauVar12;
                    do {
                      auVar52 = *pauVar20;
                      auVar58._0_4_ =
                           auVar57._0_4_ +
                           *(float *)pauVar20[-1] * (float)*(undefined8 *)(pfVar15 + -4);
                      auVar58._4_4_ =
                           auVar57._4_4_ +
                           *(float *)(pauVar20[-1] + 4) *
                           (float)((ulong)*(undefined8 *)(pfVar15 + -4) >> 0x20);
                      auVar58._8_4_ =
                           auVar57._8_4_ +
                           *(float *)(pauVar20[-1] + 8) * (float)*(undefined8 *)(pfVar15 + -2);
                      auVar58._12_4_ =
                           auVar57._12_4_ +
                           *(float *)(pauVar20[-1] + 0xc) *
                           (float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
                      fVar51 = fVar51 + auVar52._0_4_ * (float)*(undefined8 *)pfVar15;
                      fVar61 = fVar61 + auVar52._4_4_ *
                                        (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                      fVar67 = fVar67 + auVar52._8_4_ * (float)*(undefined8 *)(pfVar15 + 2);
                      fVar69 = fVar69 + auVar52._12_4_ *
                                        (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                      lVar37 = lVar37 + 8;
                      pfVar15 = pfVar15 + 8;
                      pauVar20 = pauVar20 + 2;
                      auVar57 = auVar58;
                    } while (lVar37 < (long)uVar9);
                  }
                  auVar57._0_4_ = fVar51 + auVar58._0_4_;
                  auVar57._4_4_ = fVar61 + auVar58._4_4_;
                  auVar57._8_4_ = fVar67 + auVar58._8_4_;
                  auVar57._12_4_ = fVar69 + auVar58._12_4_;
                  if ((long)uVar9 < (long)uVar13) {
                    pfVar16 = pfVar16 + uVar9;
                    auVar52 = *(undefined1 (*) [16])(pfVar10 + (uVar19 & 0xfffffffffffffff8));
                    auVar57._0_4_ = auVar57._0_4_ + *pfVar16 * auVar52._0_4_;
                    auVar57._4_4_ = auVar57._4_4_ + pfVar16[1] * auVar52._4_4_;
                    auVar57._8_4_ = auVar57._8_4_ + pfVar16[2] * auVar52._8_4_;
                    auVar57._12_4_ = auVar57._12_4_ + pfVar16[3] * auVar52._12_4_;
                  }
                }
                auVar52 = NEON_ext(auVar57,auVar57,8,1);
                fVar51 = auVar57._0_4_ + auVar52._0_4_ + auVar57._4_4_ + auVar52._4_4_;
                pfVar16 = (float *)(lVar36 + lVar14 + uVar24 * lVar18);
                pfVar15 = pfVar38;
                lVar37 = (long)uVar24 % 4;
                if (uVar24 != uVar13 && (long)uVar24 % 4 < 0 == SBORROW8(uVar24,uVar13)) {
                  do {
                    fVar51 = fVar51 + *pfVar15 * *pfVar16;
                    lVar37 = lVar37 + -1;
                    pfVar16 = pfVar16 + 1;
                    pfVar15 = pfVar15 + 1;
                  } while (lVar37 != 0);
                }
              }
            }
            *(float *)(*pauStack_100 + lVar43 * 4 + (long)pauVar8 * (long)pauStack_f8 * 4) = fVar51;
            lVar43 = lVar43 + 1;
            pauVar12 = (undefined1 (*) [16])(*pauVar12 + lVar30 * 4);
            pfVar38 = pfVar38 + lVar30;
            pfVar50 = pfVar50 + lVar30;
          } while (lVar43 < (long)pauStack_f8);
        }
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
        lVar18 = lVar18 + 4;
      } while (pauVar8 != pauStack_f0);
    }
  }
  pauVar8 = (undefined1 (*) [16])param_1[10];
  pauVar12 = (undefined1 (*) [16])param_1[4];
  if (pauStack_250 != pauVar8 || pauStack_248 != pauVar12) {
    if ((pauVar8 != (undefined1 (*) [16])0x0) && (pauVar12 != (undefined1 (*) [16])0x0)) {
      lVar18 = 0;
      if (pauVar12 != (undefined1 (*) [16])0x0) {
        lVar18 = 0x7fffffffffffffff / (long)pauVar12;
      }
      if (lVar18 < (long)pauVar8) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10953e74c;
      }
    }
    FUN_1093d98c8(&pauStack_258,(long)pauVar12 * (long)pauVar8);
    pauVar8 = pauStack_250;
    pauVar12 = pauStack_248;
  }
  uVar24 = (long)pauVar8 * (long)pauVar12;
  uVar19 = uVar24 + 3;
  if (-1 < (long)uVar24) {
    uVar19 = uVar24;
  }
  if (3 < (long)uVar24) {
    lVar46 = 0;
    lVar18 = 0;
    do {
      uVar4 = *(undefined8 *)(*pauStack_110 + lVar46);
      *(undefined8 *)((long)(*pauStack_258 + lVar46) + 8) =
           *(undefined8 *)((long)(*pauStack_110 + lVar46) + 8);
      *(undefined8 *)(*pauStack_258 + lVar46) = uVar4;
      lVar18 = lVar18 + 4;
      lVar46 = lVar46 + 0x10;
    } while (lVar18 < (long)(uVar19 & 0xfffffffffffffffc));
  }
  lVar18 = (long)uVar24 % 4;
  if (lVar18 != 0 && lVar18 < 0 == SBORROW8(uVar24,uVar19 & 0xfffffffffffffffc)) {
    pauVar8 = pauStack_258 + ((long)uVar19 >> 2);
    pauVar12 = pauStack_110 + ((long)uVar19 >> 2);
    do {
      *(undefined4 *)*pauVar8 = *(undefined4 *)*pauVar12;
      lVar18 = lVar18 + -1;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
    } while (lVar18 != 0);
  }
  _free(pauStack_100);
  pauVar12 = pauStack_1e8;
  pauVar8 = pauStack_248;
  if (pauStack_1e0 != (undefined1 (*) [16])0x0) {
    uStack_1b0 = (undefined1 (*) [16])0x0;
    uStack_1a8 = (undefined1 (*) [16])0x0;
    pauStack_1a0 = pauStack_248;
    pauStack_198 = pauStack_250;
    pauStack_190 = pauStack_1e8;
    pauStack_110 = pauStack_250;
    FUN_1093de430(&pauStack_190,&pauStack_1a0,&pauStack_110,1);
    pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
    pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
    FUN_109541fdc(pauVar12,pauVar8,pauStack_1f0,pauStack_1e0,pauStack_258,pauStack_248,&uStack_1b0);
    _free(uStack_1b0);
    _free(uStack_1a8);
  }
  pauVar12 = pauStack_1e0;
  pauVar8 = pauStack_248;
  if (pauStack_1e8 != (undefined1 (*) [16])0x0) {
    uStack_1b0 = (undefined1 (*) [16])0x0;
    uStack_1a8 = (undefined1 (*) [16])0x0;
    pauStack_1a0 = pauStack_248;
    pauStack_198 = pauStack_250;
    pauStack_190 = pauStack_1e0;
    pauStack_110 = pauStack_250;
    FUN_1093de430(&pauStack_190,&pauStack_1a0,&pauStack_110,1);
    pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
    pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
    FUN_109542bec(pauVar12,pauVar8,pauStack_1f0,pauStack_1e0,pauStack_258,pauStack_248,&uStack_1b0);
    _free(uStack_1b0);
    _free(uStack_1a8);
  }
  _free(pauStack_1f0);
  pauStack_268 = (undefined1 (*) [16])0x0;
  uStack_260 = 0;
  FUN_1093c61bc(&pauStack_268,uStack_238,1);
  pauVar8 = pauStack_240;
  if (uStack_260 != uStack_238) {
    FUN_1093c61bc(&pauStack_268,uStack_238,1);
    uStack_238 = uStack_260;
  }
  uVar19 = uStack_238 + 3;
  if (-1 < (long)uStack_238) {
    uVar19 = uStack_238;
  }
  if (3 < (long)uStack_238) {
    lVar18 = 0;
    pauVar12 = pauStack_268;
    pfVar10 = pfVar7;
    pauVar20 = pauVar8;
    do {
      fVar51 = *pfVar10;
      fVar61 = pfVar10[1];
      fVar67 = pfVar10[3];
      auVar52 = *pauVar20;
      *(float *)(*pauVar12 + 8) = pfVar10[2] - auVar52._8_4_;
      *(float *)(*pauVar12 + 0xc) = fVar67 - auVar52._12_4_;
      *(float *)*pauVar12 = fVar51 - auVar52._0_4_;
      *(float *)(*pauVar12 + 4) = fVar61 - auVar52._4_4_;
      lVar18 = lVar18 + 4;
      pauVar12 = pauVar12 + 1;
      pfVar10 = pfVar10 + 4;
      pauVar20 = pauVar20 + 1;
    } while (lVar18 < (long)(uVar19 & 0xfffffffffffffffc));
  }
  lVar18 = (long)uStack_238 % 4;
  if (lVar18 != 0 && lVar18 < 0 == SBORROW8(uStack_238,uVar19 & 0xfffffffffffffffc)) {
    lVar46 = (long)uVar19 >> 2;
    pauVar12 = pauStack_268 + lVar46;
    pauVar8 = pauVar8 + lVar46;
    pfVar10 = pfVar7 + lVar46 * 4;
    do {
      *(float *)*pauVar12 = *pfVar10 - *(float *)*pauVar8;
      lVar18 = lVar18 + -1;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      pfVar10 = pfVar10 + 1;
    } while (lVar18 != 0);
  }
  uStack_1b0 = (undefined1 (*) [16])0x0;
  uStack_1a8 = (undefined1 (*) [16])0x0;
  pauStack_1a0 = (undefined1 (*) [16])0x0;
  FUN_109540370(&uStack_1a8,1,pauStack_248);
  pauVar8 = uStack_1a8;
  uStack_1b0 = uStack_1a8;
  if (0 < (long)pauStack_1a0) {
    _bzero(uStack_1a8,(long)pauStack_1a0 << 2);
  }
  if (pauStack_248 == (undefined1 (*) [16])0x1) {
    if (pauStack_250 == (undefined1 (*) [16])0x0) {
      fVar51 = 0.0;
    }
    else {
      fVar51 = *(float *)*pauStack_268 * *(float *)*pauStack_258;
      if (1 < (long)pauStack_250) {
        puVar47 = pauStack_250[-1] + 0xf;
        pauVar12 = pauStack_258;
        pauVar20 = pauStack_268;
        do {
          pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
          fVar51 = fVar51 + *(float *)*pauVar20 * *(float *)*pauVar12;
          puVar47 = puVar47 + -1;
        } while (puVar47 != (undefined1 *)0x0);
      }
    }
    *(float *)*pauVar8 = fVar51 + *(float *)*pauVar8;
  }
  else {
    pauStack_110 = pauStack_258;
    pauStack_108 = pauStack_248;
    pauStack_1f0 = pauStack_268;
    pauStack_1e8 = (undefined1 (*) [16])0x1;
    FUN_10946ddac(pauStack_248,pauStack_250,&pauStack_110,&pauStack_1f0,pauVar8,1);
  }
  lVar18 = param_1[1];
  uVar24 = param_1[2];
  uVar19 = uVar24 + 3;
  if (-1 < (long)uVar24) {
    uVar19 = uVar24;
  }
  if (3 < (long)uVar24) {
    lVar30 = 0;
    lVar46 = 0;
    do {
      pfVar10 = (float *)(*uStack_1b0 + lVar30);
      fVar51 = *pfVar10;
      fVar61 = pfVar10[1];
      fVar67 = pfVar10[3];
      auVar52 = *(undefined1 (*) [16])(lVar18 + lVar30);
      pfVar21 = (float *)(lVar18 + lVar30);
      pfVar21[2] = pfVar10[2] + auVar52._8_4_;
      pfVar21[3] = fVar67 + auVar52._12_4_;
      *pfVar21 = fVar51 + auVar52._0_4_;
      pfVar21[1] = fVar61 + auVar52._4_4_;
      lVar46 = lVar46 + 4;
      lVar30 = lVar30 + 0x10;
    } while (lVar46 < (long)(uVar19 & 0xfffffffffffffffc));
  }
  lVar46 = (long)uVar24 % 4;
  if (lVar46 != 0 && (long)(uVar19 & 0xfffffffffffffffc) <= (long)uVar24) {
    pfVar10 = (float *)(lVar18 + ((long)uVar19 >> 2) * 0x10);
    pauVar8 = uStack_1b0 + ((long)uVar19 >> 2);
    do {
      *pfVar10 = *(float *)*pauVar8 + *pfVar10;
      lVar46 = lVar46 + -1;
      pfVar10 = pfVar10 + 1;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
    } while (lVar46 != 0);
  }
  _free(uStack_1a8);
  pauStack_280 = (undefined1 (*) [16])&pauStack_258;
  pauStack_218 = (undefined1 (*) [16])0x0;
  pauStack_210 = (undefined1 (*) [16])0x0;
  pauStack_208 = (undefined1 (*) [16])0x0;
  pauStack_278 = (undefined1 (*) [16])&pauStack_230;
  pauStack_270 = pauStack_280;
  if (pauStack_248 != (undefined1 (*) [16])0x0) {
    lVar18 = 0;
    if (pauStack_248 != (undefined1 (*) [16])0x0) {
      lVar18 = 0x7fffffffffffffff / (long)pauStack_248;
    }
    if (lVar18 < (long)pauStack_248) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10953e74c;
    }
    FUN_1093d98c8(&pauStack_218,(long)pauStack_248 * (long)pauStack_248,pauStack_248,pauStack_248);
  }
  pauVar11 = pauStack_208;
  pauVar22 = pauStack_210;
  pauVar20 = pauStack_250;
  pauVar12 = pauStack_278;
  pauVar8 = pauStack_280;
  puVar47 = pauStack_250[-1] + 0xf;
  if (((long)pauStack_250 < 1) ||
     (0x13 < (long)(*pauStack_250 + (long)(*pauStack_208 + (long)*pauStack_210)))) {
    if (0 < (long)pauStack_210 * (long)pauStack_208) {
      _bzero(pauStack_218,(long)pauStack_210 * (long)pauStack_208 * 4);
    }
    pauVar48 = pauStack_218;
    pauVar12 = pauStack_220;
    pauVar8 = pauStack_258;
    if ((pauStack_220 != (undefined1 (*) [16])0x0) && (pauStack_248 != (undefined1 (*) [16])0x0)) {
      if (pauVar11 == (undefined1 (*) [16])0x1) {
        pauStack_1f0 = pauStack_218;
        uStack_1d8 = &pauStack_218;
        pauStack_1d0 = (undefined1 (*) [16])0x0;
        pauStack_1c8 = (undefined1 (*) [16])0x0;
        uStack_1c0 = 1;
        pauStack_1e8 = pauVar22;
        if (pauStack_248 == (undefined1 (*) [16])0x1) {
          uStack_1a8 = pauStack_278;
          uStack_1b0 = pauStack_280;
          ppauStack_148 = (undefined1 (**) [16])0x0;
          uStack_140 = 0;
          pauStack_1a0 = (undefined1 (*) [16])0x0;
          pauStack_198 = (undefined1 (*) [16])0x0;
          pauStack_188 = pauStack_220;
          pauStack_180 = pauStack_258;
          pauStack_178 = pauVar20;
          pauStack_168 = pauStack_258;
          pauStack_160 = pauVar20;
          ppauStack_150 = &pauStack_258;
          uStack_130 = 0;
          uStack_138 = 1;
          uStack_120 = 1;
          if (pauVar20 == (undefined1 (*) [16])0x0) {
            fVar51 = 0.0;
          }
          else {
            FUN_109543cf0(&pauStack_108,&uStack_1b0);
            pauStack_e0 = (undefined1 (*) [16])0x0;
            pauStack_d8 = (undefined1 (*) [16])0x0;
            pauStack_c8 = pauVar8;
            pauStack_c0 = pauStack_248;
            fVar51 = *(float *)*pauStack_108 * *(float *)*pauVar8;
            if (1 < (long)pauVar20) {
              pfVar10 = (float *)(*pauVar8 + (long)pauStack_248 * 4);
              pfVar21 = (float *)(*pauStack_108 + (long)pauStack_100 * 4);
              do {
                fVar51 = fVar51 + *pfVar21 * *pfVar10;
                pfVar10 = pfVar10 + (long)pauStack_248;
                pfVar21 = pfVar21 + (long)pauStack_100;
                puVar47 = puVar47 + -1;
              } while (puVar47 != (undefined1 *)0x0);
            }
            _free(pauStack_f8);
          }
          *(float *)*pauVar48 = fVar51 + *(float *)*pauVar48;
          goto LAB_10953e440;
        }
        uStack_1b0 = (undefined1 (*) [16])0x0;
        uStack_1a8 = (undefined1 (*) [16])0x0;
        pauStack_1a0 = (undefined1 (*) [16])0x0;
        lVar18 = 0;
        if (pauStack_220 != (undefined1 (*) [16])0x0) {
          lVar18 = 0x7fffffffffffffff / (long)pauStack_220;
        }
        if (lVar18 < (long)pauStack_248) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953e74c;
        }
        FUN_1093c3d54(&uStack_1b0,(long)pauStack_248 * (long)pauStack_220,pauStack_248,pauStack_220)
        ;
        FUN_109543494(&uStack_1b0,&pauStack_280,(undefined1 (*) [16])&pauStack_230);
        FUN_109543b4c(&uStack_1b0,pauVar8,&pauStack_258,&pauStack_1f0);
        pauVar8 = uStack_1b0;
      }
      else if (pauVar22 == (undefined1 (*) [16])0x1) {
        pauStack_1e8 = pauStack_278;
        pauStack_1f0 = pauStack_280;
        pauStack_1e0 = (undefined1 (*) [16])0x0;
        uStack_1d8 = (undefined1 (**) [16])0x0;
        pauStack_1c8 = pauStack_220;
        if (pauStack_248 == (undefined1 (*) [16])0x1) {
          uStack_1a8 = pauStack_278;
          uStack_1b0 = pauStack_280;
          pauStack_198 = (undefined1 (*) [16])0x0;
          pauStack_1a0 = (undefined1 (*) [16])0x0;
          pauStack_188 = pauStack_220;
          pauStack_190 = pauStack_1d0;
          pauStack_178 = (undefined1 (*) [16])0x0;
          pauStack_168 = pauStack_220;
          pauStack_160 = pauStack_258;
          pauStack_158 = pauVar20;
          ppauStack_148 = &pauStack_258;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_130 = 1;
          if (pauVar20 == (undefined1 (*) [16])0x0) {
            fVar51 = 0.0;
          }
          else {
            FUN_109543cf0(&pauStack_108,&uStack_1b0);
            pauStack_e0 = pauStack_1a0;
            pauStack_d8 = pauStack_198;
            pauStack_c0 = (undefined1 (*) [16])0x0;
            uStack_b8 = 0;
            pauStack_b0 = pauVar8;
            pauStack_a8 = pauStack_248;
            fVar51 = *(float *)(*pauStack_108 +
                               (long)pauStack_1a0 * 4 + (long)pauStack_100 * (long)pauStack_198 * 4)
                     * *(float *)*pauVar8;
            if (1 < (long)pauVar20) {
              pfVar10 = (float *)(*pauVar8 + (long)pauStack_248 * 4);
              pfVar21 = (float *)(*pauStack_108 +
                                 (long)(*pauStack_100 + (long)pauStack_100 * (long)pauStack_198) * 4
                                 + (long)pauStack_1a0 * 4);
              do {
                fVar51 = fVar51 + *pfVar21 * *pfVar10;
                pfVar10 = pfVar10 + (long)pauStack_248;
                pfVar21 = pfVar21 + (long)pauStack_100;
                puVar47 = puVar47 + -1;
              } while (puVar47 != (undefined1 *)0x0);
            }
            _free(pauStack_f8);
          }
          *(float *)*pauVar48 = fVar51 + *(float *)*pauVar48;
          goto LAB_10953e440;
        }
        pauStack_200 = (undefined1 (*) [16])0x0;
        lStack_1f8 = 0;
        FUN_109543cf0(&uStack_1b0,&pauStack_1f0);
        pauStack_188 = (undefined1 (*) [16])0x0;
        pauStack_180 = (undefined1 (*) [16])0x0;
        FUN_109540370(&pauStack_200,1,pauVar12);
        if (0 < lStack_1f8) {
          puVar26 = (undefined4 *)
                    (*uStack_1b0 +
                    (long)pauStack_180 * (long)uStack_1a8 * 4 + (long)pauStack_188 * 4);
          lVar18 = lStack_1f8;
          pauVar8 = pauStack_200;
          do {
            *(undefined4 *)*pauVar8 = *puVar26;
            puVar26 = puVar26 + (long)uStack_1a8;
            lVar18 = lVar18 + -1;
            pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
          } while (lVar18 != 0);
        }
        _free(pauStack_1a0);
        uStack_1b0 = pauStack_258;
        uStack_1a8 = pauStack_248;
        pauStack_110 = pauStack_200;
        pauStack_108 = (undefined1 (*) [16])0x1;
        FUN_10946ddac(pauStack_248,pauStack_250,&uStack_1b0,&pauStack_110,pauVar48,1);
        pauVar8 = pauStack_200;
      }
      else {
        pauStack_110 = (undefined1 (*) [16])0x0;
        pauStack_108 = (undefined1 (*) [16])0x0;
        pauStack_100 = (undefined1 (*) [16])0x0;
        lVar18 = 0;
        if (pauStack_220 != (undefined1 (*) [16])0x0) {
          lVar18 = 0x7fffffffffffffff / (long)pauStack_220;
        }
        if (lVar18 < (long)pauStack_248) {
LAB_10953e708:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953e74c;
        }
        FUN_1093c3d54(&pauStack_110,(long)pauStack_248 * (long)pauStack_220,pauStack_248,
                      pauStack_220);
        if ((pauStack_108 != pauStack_248) || (pauStack_100 != pauStack_220)) {
          if ((pauStack_248 != (undefined1 (*) [16])0x0) &&
             (pauStack_220 != (undefined1 (*) [16])0x0)) {
            lVar18 = 0;
            if (pauStack_220 != (undefined1 (*) [16])0x0) {
              lVar18 = 0x7fffffffffffffff / (long)pauStack_220;
            }
            if (lVar18 < (long)pauStack_248) goto LAB_10953e708;
          }
          FUN_1093c3d54(&pauStack_110,(long)pauStack_220 * (long)pauStack_248);
        }
        FUN_109543494(&pauStack_110,&pauStack_280,(undefined1 (*) [16])&pauStack_230);
        uStack_1b0 = (undefined1 (*) [16])0x0;
        uStack_1a8 = (undefined1 (*) [16])0x0;
        auVar5._8_8_ = pauStack_208;
        auVar5._0_8_ = pauStack_210;
        auVar52 = NEON_ext(auVar5,auVar5,8,1);
        pauStack_198 = auVar52._8_8_;
        pauStack_1a0 = auVar52._0_8_;
        pauStack_190 = pauStack_100;
        FUN_1093ecdf0(&pauStack_190,&pauStack_1a0,&pauStack_198,1);
        pauStack_188 = (undefined1 (*) [16])((long)pauStack_190 * (long)pauStack_1a0);
        pauStack_180 = (undefined1 (*) [16])((long)pauStack_198 * (long)pauStack_190);
        FUN_1093eea40(pauStack_248,pauStack_248,pauStack_100,pauStack_258,pauStack_248,pauStack_110,
                      pauStack_108,pauStack_218,1,pauStack_208,&uStack_1b0,0);
        _free(uStack_1b0);
        _free(uStack_1a8);
        pauVar8 = pauStack_110;
      }
      goto LAB_10953e01c;
    }
  }
  else {
    pauStack_108 = pauStack_278;
    pauStack_110 = pauStack_280;
    pauStack_100 = (undefined1 (*) [16])&pauStack_258;
    uStack_1a8 = (undefined1 (*) [16])0x0;
    pauStack_1a0 = (undefined1 (*) [16])0x0;
    uStack_1b0 = (undefined1 (*) [16])0x0;
    lVar18 = *(long *)pauStack_280[1];
    lVar46 = *(long *)pauStack_278[1];
    if (lVar18 != 0 || lVar46 != 0) {
      if ((lVar18 != 0) && (lVar46 != 0)) {
        lVar30 = 0;
        if (lVar46 != 0) {
          lVar30 = 0x7fffffffffffffff / lVar46;
        }
        if (lVar30 < lVar18) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953e74c;
        }
      }
      FUN_1093c3d54(&uStack_1b0,lVar46 * lVar18);
    }
    FUN_109543494(&uStack_1b0,&pauStack_110,pauVar12);
    pauStack_198 = (undefined1 (*) [16])&pauStack_258;
    pauStack_190 = uStack_1b0;
    pauStack_188 = uStack_1a8;
    pauStack_180 = pauStack_258;
    pauStack_178 = pauStack_248;
    uStack_170 = *(undefined8 *)pauVar12[1];
    pauVar12 = *(undefined1 (**) [16])pauVar8[1];
    if ((pauStack_210 != pauVar12) || (pauVar20 = pauStack_248, pauStack_208 != pauStack_248)) {
      if ((pauStack_248 != (undefined1 (*) [16])0x0) && (pauVar12 != (undefined1 (*) [16])0x0)) {
        lVar18 = 0;
        if (pauStack_248 != (undefined1 (*) [16])0x0) {
          lVar18 = 0x7fffffffffffffff / (long)pauStack_248;
        }
        if (lVar18 < (long)pauVar12) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953e74c;
        }
      }
      FUN_1093d98c8(&pauStack_218,(long)pauVar12 * (long)pauStack_248);
      pauVar12 = pauStack_210;
      pauVar20 = pauStack_208;
    }
    pauVar8 = uStack_1b0;
    if (0 < (long)pauVar12) {
      pauVar22 = (undefined1 (*) [16])0x0;
      pauVar11 = uStack_1b0;
      do {
        if (0 < (long)pauVar20) {
          pauVar48 = (undefined1 (*) [16])0x0;
          lVar46 = *(long *)*pauStack_198;
          lVar30 = *(long *)(*pauStack_198 + 8);
          lVar18 = lVar46;
          do {
            if (lVar30 == 0) {
              fVar51 = 0.0;
            }
            else {
              fVar51 = *(float *)(*uStack_1b0 + (long)pauVar22 * 4) *
                       *(float *)(lVar46 + (long)pauVar48 * 4);
              if (1 < lVar30) {
                pfVar10 = (float *)(lVar18 + *(long *)pauStack_198[1] * 4);
                pfVar21 = (float *)(*pauVar11 + (long)uStack_1a8 * 4);
                lVar43 = lVar30 + -1;
                do {
                  fVar51 = fVar51 + *pfVar21 * *pfVar10;
                  pfVar10 = pfVar10 + *(long *)pauStack_198[1];
                  pfVar21 = pfVar21 + (long)uStack_1a8;
                  lVar43 = lVar43 + -1;
                } while (lVar43 != 0);
              }
            }
            *(float *)(*pauStack_218 + (long)pauVar48 * 4 + (long)pauVar22 * (long)pauVar20 * 4) =
                 fVar51;
            pauVar48 = (undefined1 (*) [16])(*pauVar48 + 1);
            lVar18 = lVar18 + 4;
          } while (pauVar48 != pauVar20);
        }
        pauVar22 = (undefined1 (*) [16])(*pauVar22 + 1);
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
      } while (pauVar22 != pauVar12);
    }
LAB_10953e01c:
    _free(pauVar8);
  }
LAB_10953e440:
  pauVar8 = (undefined1 (*) [16])param_1[3];
  uVar24 = param_1[5] * param_1[4];
  uVar19 = uVar24 + 3;
  if (-1 < (long)uVar24) {
    uVar19 = uVar24;
  }
  if (3 < (long)uVar24) {
    lVar18 = 0;
    pauVar12 = pauVar8;
    pauVar20 = pauStack_218;
    do {
      fVar51 = *(float *)*pauVar20;
      fVar61 = *(float *)(*pauVar20 + 4);
      fVar67 = *(float *)(*pauVar20 + 0xc);
      auVar52 = *pauVar12;
      *(float *)(*pauVar12 + 8) = auVar52._8_4_ - *(float *)(*pauVar20 + 8);
      *(float *)(*pauVar12 + 0xc) = auVar52._12_4_ - fVar67;
      *(float *)*pauVar12 = auVar52._0_4_ - fVar51;
      *(float *)(*pauVar12 + 4) = auVar52._4_4_ - fVar61;
      lVar18 = lVar18 + 4;
      pauVar12 = pauVar12 + 1;
      pauVar20 = pauVar20 + 1;
    } while (lVar18 < (long)(uVar19 & 0xfffffffffffffffc));
  }
  lVar18 = (long)uVar24 % 4;
  if (lVar18 != 0 && lVar18 < 0 == SBORROW8(uVar24,uVar19 & 0xfffffffffffffffc)) {
    pauVar8 = pauVar8 + ((long)uVar19 >> 2);
    pauVar12 = pauStack_218 + ((long)uVar19 >> 2);
    do {
      *(float *)*pauVar8 = *(float *)*pauVar8 - *(float *)*pauVar12;
      lVar18 = lVar18 + -1;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
    } while (lVar18 != 0);
  }
  _free(pauStack_218);
  _free(pauStack_268);
  _free(pauStack_258);
  _free(pauStack_230);
  _free(pauStack_240);
  _free(pfVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return 1;
  }
  ___stack_chk_fail();
LAB_10953e5a0:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10953e74c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10953e750);
  (*pcVar6)();
}



/* Entry: 10953e8ec; end: 10953e953;  */

bool FUN_10953e8ec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_1093644a0(*(long *)(*(long *)(param_1 + 8) + (uVar4 / 0x55) * 8) + (uVar4 % 0x55) * 0x30);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x55 + -1;
  }
  bVar3 = 0xa9 < (ulong)(lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)));
  if (bVar3) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return bVar3;
}



/* Entry: 10953e954; end: 10953ea3b;  */

float * FUN_10953e954(float *param_1,long param_2)

{
  code *pcVar1;
  float *pfVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_2 + 8) + 8);
  pfVar2 = param_1;
  lVar7 = lVar6;
  if (*(long *)(param_1 + 2) != lVar6 || *(long *)(param_1 + 4) != lVar6) {
    if (lVar6 != 0) {
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = 0x7fffffffffffffff / lVar6;
      }
      if (lVar7 < lVar6) {
        pfVar2 = (float *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        puVar3 = PTR___ZTISt9bad_alloc_110346a68;
        ___cxa_throw();
        pfVar2[0] = 0.0;
        pfVar2[1] = 0.0;
        pfVar2[2] = 0.0;
        pfVar2[3] = 0.0;
        pfVar2[4] = 0.0;
        pfVar2[5] = 0.0;
        lVar6 = *(long *)(*(long *)(puVar3 + 8) + 8);
        if (lVar6 != 0) {
          lVar7 = 0;
          if (lVar6 != 0) {
            lVar7 = 0x7fffffffffffffff / lVar6;
          }
          if (lVar7 < lVar6) goto LAB_10953eacc;
        }
        FUN_1093d98c8(pfVar2,lVar6 * lVar6,lVar6,lVar6);
        lVar6 = *(long *)(*(long *)(puVar3 + 8) + 8);
        if (lVar6 != 0) {
          lVar7 = 0;
          if (lVar6 != 0) {
            lVar7 = 0x7fffffffffffffff / lVar6;
          }
          if (lVar7 < lVar6) {
LAB_10953eacc:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10953eaf0);
            (*pcVar1)();
          }
        }
        FUN_1093d98c8(pfVar2,lVar6 * lVar6,lVar6,lVar6);
        FUN_10953e954(pfVar2,puVar3);
        return pfVar2;
      }
    }
    FUN_1093d98c8(param_1,lVar6 * lVar6,lVar6,lVar6);
    lVar6 = *(long *)(param_1 + 4);
    lVar7 = *(long *)(param_1 + 2);
  }
  param_1 = *(float **)param_1;
  if (0 < lVar7 * lVar6) {
    pfVar2 = param_1;
    _bzero(param_1,lVar7 * lVar6 * 4);
  }
  lVar4 = lVar6;
  if (lVar7 <= lVar6) {
    lVar4 = lVar7;
  }
  if (0 < lVar4) {
    pfVar5 = (float *)**(long **)(param_2 + 8);
    do {
      *param_1 = *pfVar5 * *pfVar5;
      param_1 = param_1 + lVar6 + 1;
      lVar4 = lVar4 + -1;
      pfVar5 = pfVar5 + 1;
    } while (lVar4 != 0);
  }
  return pfVar2;
}



/* Entry: 10953ea3c; end: 10953eb03;  */

undefined8 * FUN_10953ea3c(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 8);
  if (lVar3 != 0) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar3;
    }
    if (lVar1 < lVar3) goto LAB_10953eacc;
  }
  FUN_1093d98c8(param_1,lVar3 * lVar3,lVar3,lVar3);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 8);
  if (lVar3 != 0) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar3;
    }
    if (lVar1 < lVar3) {
LAB_10953eacc:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10953eaf0);
      (*pcVar2)();
    }
  }
  FUN_1093d98c8(param_1,lVar3 * lVar3,lVar3,lVar3);
  FUN_10953e954(param_1,param_2);
  return param_1;
}



/* Entry: 10953eb04; end: 10953ec4f;  */

undefined8 FUN_10953eb04(undefined8 param_1,undefined8 *param_2,float *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  ulong unaff_x19;
  float *unaff_x21;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  float afStack_70 [2];
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float *pfStack_50;
  long lStack_48;
  
  uVar14 = (undefined4)((ulong)param_1 >> 0x20);
  uVar12 = (undefined4)param_1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    if (param_3 == (float *)0x0) {
      param_3 = (float *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        param_3 = (float *)((long)afStack_70 - ((long)param_3 + 0x1eU & 0xfffffffffffffff0));
        unaff_x21 = param_3;
      }
      else {
        _malloc();
        unaff_x21 = param_3;
        if (param_3 == (float *)0x0) goto LAB_10953ec10;
      }
    }
    else {
      unaff_x21 = (float *)0x0;
    }
    pfVar4 = (float *)param_2[1];
    pfVar5 = (float *)param_2[2];
    uStack_58 = *param_2;
    uStack_60 = 1;
    puVar6 = &uStack_58;
    pfStack_68 = param_3;
    pfStack_50 = pfVar5;
    FUN_1093c55d4(uVar12);
    if (0x8000 < param_4) {
      pfVar4 = unaff_x21;
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return CONCAT44(uVar14,uVar12);
    }
  }
  else {
LAB_10953ec10:
    pfVar4 = (float *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pfVar5 = (float *)PTR___ZTISt9bad_alloc_110346a68;
    puVar6 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x21);
  }
  __Unwind_Resume();
  puVar1 = (undefined8 *)((long)puVar6 + 3);
  puVar3 = (undefined8 *)((long)puVar6 + 7);
  if (-1 < (long)puVar6) {
    puVar1 = puVar6;
    puVar3 = puVar6;
  }
  if ((undefined *)((long)puVar6 + 3U) < (undefined *)0x7) {
    fVar13 = *pfVar4 * *pfVar5;
    fVar15 = 0.0;
    if (1 < (long)puVar6) {
      puVar7 = (undefined *)((long)puVar6 + -1);
      do {
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
        fVar13 = fVar13 + *pfVar4 * *pfVar5;
        fVar15 = 0.0;
        puVar7 = puVar7 + -1;
      } while (puVar7 != (undefined *)0x0);
    }
  }
  else {
    fVar15 = (float)*(undefined8 *)pfVar4 * *pfVar5;
    fVar16 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * pfVar5[1];
    fVar13 = (float)*(undefined8 *)(pfVar4 + 2) * pfVar5[2];
    fVar17 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * pfVar5[3];
    if (7 < (long)puVar6) {
      uVar8 = (ulong)puVar3 & 0xfffffffffffffff8;
      fVar18 = pfVar4[4] * (float)*(undefined8 *)(pfVar5 + 4);
      fVar20 = pfVar4[5] * (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
      fVar21 = pfVar4[6] * (float)*(undefined8 *)(pfVar5 + 6);
      fVar22 = pfVar4[7] * (float)((ulong)*(undefined8 *)(pfVar5 + 6) >> 0x20);
      if ((undefined8 *)0xf < puVar6) {
        pfVar9 = pfVar5 + 0xc;
        pfVar10 = pfVar4 + 0xc;
        lVar11 = 8;
        do {
          fVar15 = fVar15 + (float)*(undefined8 *)(pfVar10 + -4) *
                            (float)*(undefined8 *)(pfVar9 + -4);
          fVar16 = fVar16 + (float)((ulong)*(undefined8 *)(pfVar10 + -4) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20);
          fVar13 = fVar13 + (float)*(undefined8 *)(pfVar10 + -2) *
                            (float)*(undefined8 *)(pfVar9 + -2);
          fVar17 = fVar17 + (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
          fVar18 = fVar18 + (float)*(undefined8 *)pfVar10 * (float)*(undefined8 *)pfVar9;
          fVar20 = fVar20 + (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) *
                            (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          fVar21 = fVar21 + (float)*(undefined8 *)(pfVar10 + 2) * (float)*(undefined8 *)(pfVar9 + 2)
          ;
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          lVar11 = lVar11 + 8;
          pfVar9 = pfVar9 + 8;
          pfVar10 = pfVar10 + 8;
        } while (lVar11 < (long)uVar8);
      }
      fVar15 = fVar18 + fVar15;
      fVar16 = fVar20 + fVar16;
      fVar13 = fVar21 + fVar13;
      fVar17 = fVar22 + fVar17;
      if ((long)uVar8 < (long)((ulong)puVar1 & 0xfffffffffffffffc)) {
        pfVar9 = pfVar4 + uVar8;
        uVar24 = *(undefined8 *)(pfVar5 + uVar8 + 2);
        uVar23 = *(undefined8 *)(pfVar5 + uVar8);
        fVar15 = fVar15 + *pfVar9 * (float)uVar23;
        fVar16 = fVar16 + pfVar9[1] * (float)((ulong)uVar23 >> 0x20);
        fVar13 = fVar13 + pfVar9[2] * (float)uVar24;
        fVar17 = fVar17 + pfVar9[3] * (float)((ulong)uVar24 >> 0x20);
      }
    }
    auVar19._4_4_ = fVar16;
    auVar19._0_4_ = fVar15;
    auVar19._8_4_ = fVar13;
    auVar19._12_4_ = fVar17;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar15;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar17;
    auVar19 = NEON_ext(auVar19,auVar2,8,1);
    fVar15 = fVar15 + auVar19._0_4_;
    fVar16 = fVar16 + auVar19._4_4_;
    fVar13 = fVar15 + fVar16;
    fVar15 = fVar15 + fVar16;
    lVar11 = (long)puVar6 % 4;
    if (lVar11 != 0 && lVar11 < 0 == SBORROW8((long)puVar6,(ulong)puVar1 & 0xfffffffffffffffc)) {
      pfVar5 = pfVar5 + ((long)puVar1 >> 2) * 4;
      pfVar4 = pfVar4 + ((long)puVar1 >> 2) * 4;
      do {
        fVar13 = fVar13 + *pfVar4 * *pfVar5;
        fVar15 = 0.0;
        lVar11 = lVar11 + -1;
        pfVar5 = pfVar5 + 1;
        pfVar4 = pfVar4 + 1;
      } while (lVar11 != 0);
    }
  }
  return CONCAT44(fVar15,fVar13);
}



/* Entry: 10953ec50; end: 10953ed6b;  */

undefined8 FUN_10953ec50(float *param_1,float *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = param_3 + 3;
  uVar5 = param_3 + 7;
  if (-1 < (long)param_3) {
    uVar1 = param_3;
    uVar5 = param_3;
  }
  if (param_3 + 3 < 7) {
    fVar7 = *param_1 * *param_2;
    fVar8 = 0.0;
    if (1 < (long)param_3) {
      lVar3 = param_3 - 1;
      do {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        fVar7 = fVar7 + *param_1 * *param_2;
        fVar8 = 0.0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    fVar8 = (float)*(undefined8 *)param_1 * *param_2;
    fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) * param_2[1];
    fVar7 = (float)*(undefined8 *)(param_1 + 2) * param_2[2];
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) * param_2[3];
    if (7 < (long)param_3) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      fVar11 = param_1[4] * (float)*(undefined8 *)(param_2 + 4);
      fVar13 = param_1[5] * (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar14 = param_1[6] * (float)*(undefined8 *)(param_2 + 6);
      fVar15 = param_1[7] * (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      if (0xf < param_3) {
        pfVar4 = param_2 + 0xc;
        pfVar6 = param_1 + 0xc;
        lVar3 = 8;
        do {
          fVar8 = fVar8 + (float)*(undefined8 *)(pfVar6 + -4) * (float)*(undefined8 *)(pfVar4 + -4);
          fVar9 = fVar9 + (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(pfVar4 + -4) >> 0x20);
          fVar7 = fVar7 + (float)*(undefined8 *)(pfVar6 + -2) * (float)*(undefined8 *)(pfVar4 + -2);
          fVar10 = fVar10 + (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20);
          fVar11 = fVar11 + (float)*(undefined8 *)pfVar6 * (float)*(undefined8 *)pfVar4;
          fVar13 = fVar13 + (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) *
                            (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
          fVar14 = fVar14 + (float)*(undefined8 *)(pfVar6 + 2) * (float)*(undefined8 *)(pfVar4 + 2);
          fVar15 = fVar15 + (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
          lVar3 = lVar3 + 8;
          pfVar4 = pfVar4 + 8;
          pfVar6 = pfVar6 + 8;
        } while (lVar3 < (long)uVar5);
      }
      fVar8 = fVar11 + fVar8;
      fVar9 = fVar13 + fVar9;
      fVar7 = fVar14 + fVar7;
      fVar10 = fVar15 + fVar10;
      if ((long)uVar5 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar4 = param_1 + uVar5;
        uVar17 = *(undefined8 *)(param_2 + uVar5 + 2);
        uVar16 = *(undefined8 *)(param_2 + uVar5);
        fVar8 = fVar8 + *pfVar4 * (float)uVar16;
        fVar9 = fVar9 + pfVar4[1] * (float)((ulong)uVar16 >> 0x20);
        fVar7 = fVar7 + pfVar4[2] * (float)uVar17;
        fVar10 = fVar10 + pfVar4[3] * (float)((ulong)uVar17 >> 0x20);
      }
    }
    auVar12._4_4_ = fVar9;
    auVar12._0_4_ = fVar8;
    auVar12._8_4_ = fVar7;
    auVar12._12_4_ = fVar10;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar7;
    auVar2._12_4_ = fVar10;
    auVar12 = NEON_ext(auVar12,auVar2,8,1);
    fVar8 = fVar8 + auVar12._0_4_;
    fVar9 = fVar9 + auVar12._4_4_;
    fVar7 = fVar8 + fVar9;
    fVar8 = fVar8 + fVar9;
    lVar3 = (long)param_3 % 4;
    if (lVar3 != 0 && lVar3 < 0 == SBORROW8(param_3,uVar1 & 0xfffffffffffffffc)) {
      pfVar4 = param_2 + ((long)uVar1 >> 2) * 4;
      pfVar6 = param_1 + ((long)uVar1 >> 2) * 4;
      do {
        fVar7 = fVar7 + *pfVar6 * *pfVar4;
        fVar8 = 0.0;
        lVar3 = lVar3 + -1;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      } while (lVar3 != 0);
    }
  }
  return CONCAT44(fVar8,fVar7);
}



/* Entry: 10953ed6c; end: 10953f7df;  */

void FUN_10953ed6c(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 *puStack_160;
  float *pfStack_158;
  undefined4 *puStack_150;
  float *pfStack_148;
  undefined8 uStack_140;
  float *pfStack_130;
  undefined4 *puStack_128;
  float *pfStack_120;
  undefined4 *puStack_118;
  float *pfStack_110;
  float *pfStack_108;
  long lStack_100;
  undefined4 *puStack_f8;
  float *pfStack_f0;
  undefined4 *puStack_e8;
  float *pfStack_e0;
  undefined4 *puStack_d8;
  float *pfStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  float *pfStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  float *pfStack_98;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfStack_130 = (float *)0x0;
  puStack_128 = (undefined4 *)0xffffffffffffffff;
  lVar4 = *(long *)(*param_2 + 8);
  lVar7 = *(long *)(param_2[2] + 8);
  puStack_118 = (undefined4 *)0x0;
  pfStack_110 = (float *)0x0;
  pfStack_120 = (float *)0x0;
  if (lVar4 == 0 || lVar7 == 0) {
LAB_10953ede4:
    FUN_1093c3d54(&pfStack_120,lVar7 * lVar4);
    pfVar20 = pfStack_110;
    puVar8 = puStack_118;
    pfVar6 = pfStack_120;
    pfStack_130 = pfStack_120;
    puStack_128 = puStack_118;
    pfVar21 = (float *)param_2[2];
    lVar7 = *(long *)(pfVar21 + 4);
    lVar4 = lVar7 + -1;
    if (0 < lVar7 && lVar7 + (long)puStack_118 + (long)pfStack_110 < 0x14) {
      lVar4 = *param_2;
      lVar7 = param_2[1];
      pfStack_f0 = (float *)0x0;
      puStack_e8 = (undefined4 *)0x0;
      puStack_f8 = (undefined4 *)0x0;
      lVar18 = *(long *)(lVar4 + 8);
      lVar19 = *(long *)(lVar7 + 0x10);
      if (lVar18 != 0 || lVar19 != 0) {
        if ((lVar18 != 0) && (lVar19 != 0)) {
          lVar5 = 0;
          if (lVar19 != 0) {
            lVar5 = 0x7fffffffffffffff / lVar19;
          }
          if (lVar5 < lVar18) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10953f740;
          }
        }
        FUN_1093c3d54(&puStack_f8,lVar19 * lVar18);
      }
      FUN_10953f7e0(&puStack_f8,lVar4,lVar7);
      puStack_d8 = puStack_f8;
      pfStack_d0 = pfStack_f0;
      lStack_c8 = *(long *)pfVar21;
      lStack_c0 = *(long *)(pfVar21 + 4);
      lStack_b8 = *(long *)(lVar7 + 0x10);
      puVar8 = *(undefined4 **)(lVar4 + 8);
      pfVar6 = *(float **)(pfVar21 + 2);
      pfStack_e0 = pfVar21;
      if ((puStack_118 != puVar8) || (pfStack_110 != pfVar6)) {
        if ((puVar8 != (undefined4 *)0x0) && (pfVar6 != (float *)0x0)) {
          lVar4 = 0;
          if (pfVar6 != (float *)0x0) {
            lVar4 = 0x7fffffffffffffff / (long)pfVar6;
          }
          if (lVar4 < (long)puVar8) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10953f740;
          }
        }
        FUN_1093c3d54(&pfStack_120,(long)pfVar6 * (long)puVar8);
        puVar8 = puStack_118;
        pfVar6 = pfStack_110;
      }
      puVar3 = puStack_f8;
      if (0 < (long)pfVar6) {
        lVar4 = 0;
        puVar13 = (undefined4 *)0x0;
        pfVar20 = (float *)0x0;
        do {
          lVar7 = (long)pfVar20 * (long)puVar8;
          if (0 < (long)puVar13) {
            puVar14 = (undefined4 *)0x0;
            pfVar21 = (float *)(puStack_f8 + (long)pfStack_f0);
            do {
              lVar18 = *(long *)(pfStack_e0 + 4);
              if (lVar18 == 0) {
                fVar24 = 0.0;
              }
              else {
                fVar24 = (float)puStack_f8[(long)puVar14] *
                         *(float *)(*(long *)pfStack_e0 + lVar18 * (long)pfVar20 * 4);
                if (1 < lVar18) {
                  lVar19 = lVar18 + -1;
                  pfVar9 = (float *)(*(long *)pfStack_e0 + lVar4 * lVar18);
                  pfVar10 = pfVar21;
                  do {
                    pfVar9 = pfVar9 + 1;
                    fVar24 = fVar24 + *pfVar10 * *pfVar9;
                    pfVar10 = pfVar10 + (long)pfStack_f0;
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                }
              }
              pfStack_120[(long)(lVar7 + (long)puVar14)] = fVar24;
              puVar14 = (undefined4 *)((long)puVar14 + 1);
              pfVar21 = pfVar21 + 1;
            } while (puVar14 != puVar13);
          }
          uVar15 = (long)puVar8 - (long)puVar13;
          lVar18 = (uVar15 & 0xfffffffffffffffc) + (long)puVar13;
          if (3 < (long)uVar15) {
            lVar19 = (long)puVar13 << 2;
            puVar14 = puVar13;
            do {
              if (lStack_b8 < 1) {
                uVar22 = 0;
                uVar23 = 0;
              }
              else {
                puVar17 = (undefined8 *)((long)puStack_d8 + lVar19);
                uVar22 = 0;
                uVar23 = 0;
                lVar5 = lStack_b8;
                pfVar21 = (float *)(lStack_c8 + lVar4 * lStack_c0);
                do {
                  fVar24 = *pfVar21;
                  uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                    (float)((ulong)*puVar17 >> 0x20) * fVar24,
                                    (float)uVar22 + (float)*puVar17 * fVar24);
                  uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                    (float)((ulong)puVar17[1] >> 0x20) * fVar24,
                                    (float)uVar23 + (float)puVar17[1] * fVar24);
                  puVar17 = (undefined8 *)((long)puVar17 + (long)pfStack_d0 * 4);
                  lVar5 = lVar5 + -1;
                  pfVar21 = pfVar21 + 1;
                } while (lVar5 != 0);
              }
              *(undefined8 *)(pfStack_120 + (long)(lVar7 + (long)puVar14) + 2) = uVar23;
              *(undefined8 *)(pfStack_120 + (long)(lVar7 + (long)puVar14)) = uVar22;
              puVar14 = puVar14 + 1;
              lVar19 = lVar19 + 0x10;
            } while ((long)puVar14 < lVar18);
          }
          if (lVar18 < (long)puVar8) {
            pfVar21 = (float *)((long)puStack_f8 +
                               (uVar15 * 4 & 0xfffffffffffffff0) + (long)puVar13 * 4 +
                               (long)pfStack_f0 * 4);
            do {
              lVar19 = *(long *)(pfStack_e0 + 4);
              if (lVar19 == 0) {
                fVar24 = 0.0;
              }
              else {
                fVar24 = (float)puStack_f8[lVar18] *
                         *(float *)(*(long *)pfStack_e0 + lVar19 * (long)pfVar20 * 4);
                if (1 < lVar19) {
                  lVar5 = lVar19 + -1;
                  pfVar9 = (float *)(*(long *)pfStack_e0 + lVar4 * lVar19);
                  pfVar10 = pfVar21;
                  do {
                    pfVar9 = pfVar9 + 1;
                    fVar24 = fVar24 + *pfVar10 * *pfVar9;
                    pfVar10 = pfVar10 + (long)pfStack_f0;
                    lVar5 = lVar5 + -1;
                  } while (lVar5 != 0);
                }
              }
              pfStack_120[lVar7 + lVar18] = fVar24;
              lVar18 = lVar18 + 1;
              pfVar21 = pfVar21 + 1;
            } while (lVar18 < (long)puVar8);
          }
          uVar15 = (long)puVar13 + ((ulong)(uint)-(int)puVar8 & 3);
          puVar14 = (undefined4 *)(uVar15 & 3);
          uVar15 = -uVar15;
          if (-1 < (long)uVar15) {
            puVar14 = (undefined4 *)-(uVar15 & 3);
          }
          puVar13 = puVar8;
          if ((long)puVar14 <= (long)puVar8) {
            puVar13 = puVar14;
          }
          pfVar20 = (float *)((long)pfVar20 + 1);
          lVar4 = lVar4 + 4;
        } while (pfVar20 != pfVar6);
      }
      goto LAB_10953f1c4;
    }
    if (0 < (long)pfStack_110 * (long)puStack_118) {
      _bzero(pfStack_120,(long)pfStack_110 * (long)puStack_118 * 4);
    }
    lVar19 = param_2[1];
    lVar18 = *(long *)(lVar19 + 0x10);
    if (lVar18 != 0) {
      lVar11 = *param_2;
      lVar5 = *(long *)(lVar11 + 8);
      if ((lVar5 != 0) && (*(long *)(pfVar21 + 2) != 0)) {
        if (pfVar20 == (float *)0x1) {
          pfVar20 = *(float **)pfVar21;
          if (lVar5 == 1) {
            if (lVar7 == 0) {
LAB_10953f518:
              fVar24 = 0.0;
            }
            else {
              pfStack_f0 = (float *)0x0;
              puStack_e8 = (undefined4 *)0xffffffffffffffff;
              puStack_d8 = (undefined4 *)0x0;
              pfStack_d0 = (float *)0x0;
              pfStack_e0 = (float *)0x0;
              lVar5 = 0;
              if (lVar18 != 0) {
                lVar5 = 0x7fffffffffffffff / lVar18;
              }
              if (lVar5 < 1) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10953f740;
              }
              FUN_1093c3d54(&pfStack_e0,lVar18,1,lVar18);
              pfStack_f0 = pfStack_e0;
              puStack_e8 = puStack_d8;
              FUN_10953f7e0(&pfStack_e0,lVar11,lVar19);
              lStack_a0 = *(long *)(pfVar21 + 4);
              fVar24 = *pfStack_f0 * *pfVar20;
              pfStack_b0 = pfVar20;
              pfVar21 = pfStack_f0;
              if (1 < lVar7) {
                do {
                  fVar24 = fVar24 + pfVar21[(long)puStack_e8] * pfVar20[1];
                  lVar4 = lVar4 + -1;
                  pfVar20 = pfVar20 + 1;
                  pfVar21 = pfVar21 + (long)puStack_e8;
                } while (lVar4 != 0);
              }
LAB_10953f388:
              lStack_c0 = 0;
              lStack_c8 = 0;
              _free(pfStack_e0);
            }
            *pfVar6 = fVar24 + *pfVar6;
            goto LAB_10953f1c8;
          }
          puStack_f8 = (undefined4 *)0x0;
          pfStack_f0 = (float *)0x0;
          puStack_e8 = (undefined4 *)0x0;
          lVar4 = 0;
          if (lVar18 != 0) {
            lVar4 = 0x7fffffffffffffff / lVar18;
          }
          if (lVar4 < lVar5) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10953f740;
          }
          FUN_1093c3d54(&puStack_f8,lVar5 * lVar18,lVar5,lVar18);
          FUN_10953f7e0(&puStack_f8,*param_2,param_2[1]);
          puStack_160 = puStack_f8;
          pfStack_158 = pfStack_f0;
          uStack_140 = 1;
          pfStack_148 = pfVar20;
          FUN_10946ddac(0x3f800000,pfStack_f0,puStack_e8,&puStack_160,&pfStack_148,pfVar6,1);
          puVar3 = puStack_f8;
        }
        else if (puVar8 == (undefined4 *)0x1) {
          if (*(long *)(pfVar21 + 2) == 1) {
            if (lVar7 == 0) goto LAB_10953f518;
            pfVar20 = *(float **)pfVar21;
            pfStack_f0 = (float *)0x0;
            puStack_e8 = (undefined4 *)0xffffffffffffffff;
            puStack_d8 = (undefined4 *)0x0;
            pfStack_d0 = (float *)0x0;
            pfStack_e0 = (float *)0x0;
            lVar1 = 0;
            if (lVar18 != 0) {
              lVar1 = 0x7fffffffffffffff / lVar18;
            }
            if (lVar1 < lVar5) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10953f740;
            }
            FUN_1093c3d54(&pfStack_e0,lVar5 * lVar18,lVar5,lVar18);
            pfStack_f0 = pfStack_e0;
            puStack_e8 = puStack_d8;
            FUN_10953f7e0(&pfStack_e0,lVar11,lVar19);
            uStack_a8 = 0;
            lStack_a0 = 0;
            lStack_88 = *(long *)(pfVar21 + 4);
            fVar24 = *pfStack_f0 * *pfVar20;
            pfStack_98 = pfVar20;
            pfVar21 = pfStack_f0;
            if (1 < lVar7) {
              do {
                fVar24 = fVar24 + pfVar21[(long)puStack_e8] * pfVar20[1];
                lVar4 = lVar4 + -1;
                pfVar20 = pfVar20 + 1;
                pfVar21 = pfVar21 + (long)puStack_e8;
              } while (lVar4 != 0);
            }
            goto LAB_10953f388;
          }
          puStack_160 = (undefined4 *)0x0;
          pfStack_158 = (float *)0x0;
          puStack_f8 = (undefined4 *)0x0;
          pfStack_f0 = (float *)0xffffffffffffffff;
          pfStack_e0 = (float *)0x0;
          puStack_d8 = (undefined4 *)0x0;
          puStack_e8 = (undefined4 *)0x0;
          lVar4 = 0;
          if (lVar18 != 0) {
            lVar4 = 0x7fffffffffffffff / lVar18;
          }
          if (lVar4 < lVar5) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10953f740;
          }
          FUN_1093c3d54(&puStack_e8,lVar5 * lVar18,lVar5,lVar18);
          puStack_f8 = puStack_e8;
          pfStack_f0 = pfStack_e0;
          FUN_10953f7e0(&puStack_e8,lVar11,lVar19);
          pfStack_d0 = (float *)0x0;
          lStack_c8 = 0;
          FUN_109540370(&puStack_160,1,lVar18);
          if (0 < (long)pfStack_158) {
            puVar8 = puStack_f8 + (long)((long)pfStack_d0 + lStack_c8 * (long)pfStack_f0);
            pfVar20 = pfStack_158;
            puVar3 = puStack_160;
            do {
              *puVar3 = *puVar8;
              puVar8 = puVar8 + (long)pfStack_f0;
              pfVar20 = (float *)((long)pfVar20 + -1);
              puVar3 = puVar3 + 1;
            } while (pfVar20 != (float *)0x0);
          }
          _free(puStack_e8);
          FUN_109540410(0x3f800000,param_2[2],&puStack_160,pfVar6,&pfStack_120);
          puVar3 = puStack_160;
        }
        else {
          puStack_160 = (undefined4 *)0x0;
          pfStack_158 = (float *)0x0;
          puStack_150 = (undefined4 *)0x0;
          lVar4 = 0;
          if (lVar18 != 0) {
            lVar4 = 0x7fffffffffffffff / lVar18;
          }
          if (lVar4 < lVar5) {
LAB_10953f690:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10953f740;
          }
          FUN_1093c3d54(&puStack_160,lVar5 * lVar18,lVar5,lVar18);
          lVar4 = *param_2;
          lVar7 = param_2[1];
          pfVar6 = *(float **)(lVar4 + 8);
          puVar8 = *(undefined4 **)(lVar7 + 0x10);
          if ((pfStack_158 != pfVar6) || (puStack_150 != puVar8)) {
            if ((pfVar6 != (float *)0x0) && (puVar8 != (undefined4 *)0x0)) {
              lVar4 = 0;
              if (puVar8 != (undefined4 *)0x0) {
                lVar4 = 0x7fffffffffffffff / (long)puVar8;
              }
              if (lVar4 < (long)pfVar6) goto LAB_10953f690;
            }
            FUN_1093c3d54(&puStack_160,(long)puVar8 * (long)pfVar6);
            lVar4 = *param_2;
            lVar7 = param_2[1];
          }
          FUN_10953f7e0(&puStack_160,lVar4,lVar7);
          puVar17 = (undefined8 *)param_2[2];
          puStack_f8 = (undefined4 *)0x0;
          pfStack_f0 = (float *)0x0;
          pfStack_e0 = pfStack_110;
          puStack_e8 = puStack_118;
          puStack_d8 = puStack_150;
          FUN_1093ecdf0(&puStack_d8,&puStack_e8,&pfStack_e0,1);
          pfStack_d0 = (float *)((long)puStack_d8 * (long)puStack_e8);
          lStack_c8 = (long)pfStack_e0 * (long)puStack_d8;
          lVar4 = *(long *)(param_2[2] + 8);
          if (lVar4 == -1) {
            lVar4 = puVar17[1];
          }
          FUN_109540568(0x3f800000,*(undefined8 *)(*param_2 + 8),lVar4,puStack_150,puStack_160,
                        pfStack_158,*puVar17,puVar17[2],pfStack_120,1,puStack_118,&puStack_f8,0);
          _free(puStack_f8);
          _free(pfStack_f0);
          puVar3 = puStack_160;
        }
LAB_10953f1c4:
        _free(puVar3);
      }
    }
LAB_10953f1c8:
    plVar12 = (long *)param_2[3];
    pfStack_108 = (float *)*plVar12;
    lVar7 = plVar12[2];
    lVar4 = plVar12[1];
    lStack_100 = lVar7;
    if (param_1[1] != lVar4 || param_1[2] != lVar7) {
      if (lVar7 != 0 && lVar4 != 0) {
        lVar18 = 0;
        if (lVar7 != 0) {
          lVar18 = 0x7fffffffffffffff / lVar7;
        }
        if (lVar18 < lVar4) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10953f740;
        }
      }
      FUN_1093d98c8(param_1,lVar4 * lVar7);
      lVar4 = param_1[1];
      lVar7 = param_1[2];
    }
    if (0 < lVar4) {
      lVar18 = 0;
      pfVar21 = (float *)*param_1;
      pfVar20 = pfStack_108;
      pfVar6 = pfStack_130;
      do {
        lVar19 = lVar7;
        pfVar9 = pfVar21;
        pfVar10 = pfVar6;
        pfVar16 = pfVar20;
        if (0 < lVar7) {
          do {
            *pfVar9 = *pfVar10 + *pfVar16;
            pfVar10 = pfVar10 + (long)puStack_128;
            lVar19 = lVar19 + -1;
            pfVar9 = pfVar9 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar19 != 0);
        }
        lVar18 = lVar18 + 1;
        pfVar20 = pfVar20 + lStack_100;
        pfVar6 = pfVar6 + 1;
        pfVar21 = pfVar21 + lVar7;
      } while (lVar18 != lVar4);
    }
    _free(pfStack_120);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar18 = 0;
    if (lVar7 != 0) {
      lVar18 = 0x7fffffffffffffff / lVar7;
    }
    if (lVar4 <= lVar18) goto LAB_10953ede4;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10953f740:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10953f744);
  (*pcVar2)();
}



/* Entry: 10953f7e0; end: 10953fb77;  */

void FUN_10953f7e0(ulong param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  long lVar15;
  float *in_x6;
  long in_x7;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint *puVar25;
  float *pfVar26;
  long lVar27;
  float *pfVar28;
  long lVar29;
  uint *puVar30;
  long *plVar31;
  uint *puVar32;
  ulong uVar33;
  float **ppfVar34;
  long lVar35;
  long lVar36;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar37;
  float fVar38;
  ulong unaff_d8;
  undefined8 unaff_d9;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  float **ppfStack_98;
  float *pfStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = param_4[1];
  plVar31 = (long *)param_2[1];
  plVar7 = (long *)param_2[2];
  ppfVar34 = (float **)(lVar35 + -1);
  if (lVar35 < 1 || 0x13 < (long)plVar31 + lVar35 + (long)plVar7) {
    if (0 < (long)plVar7 * (long)plVar31) {
      _bzero(*param_2,(long)plVar7 * (long)plVar31 * 4);
    }
    if (((param_3[2] != 0) && (param_3[1] != 0)) && (lVar21 = param_4[2], lVar21 != 0)) {
      if (plVar7 == (long *)0x1) {
        pfVar28 = (float *)*param_4;
        if (param_3[1] == 1) {
          if (lVar35 == 0) {
            fVar38 = 0.0;
          }
          else {
            pfVar26 = (float *)*param_3;
            fVar38 = *pfVar26 * *pfVar28;
            if (1 < lVar35) {
              do {
                pfVar28 = pfVar28 + lVar21;
                pfVar26 = pfVar26 + 1;
                fVar38 = fVar38 + *pfVar26 * *pfVar28;
                ppfVar34 = (float **)((long)ppfVar34 + -1);
              } while (ppfVar34 != (float **)0x0);
              ppfVar34 = (float **)0x0;
            }
          }
          fVar38 = fVar38 + *(float *)*param_2;
          param_1 = (ulong)(uint)fVar38;
          *(float *)*param_2 = fVar38;
        }
        else {
          lStack_70 = 0;
          lStack_68 = 0;
          lStack_60 = 1;
          param_1 = 0x3f800000;
          pfStack_90 = pfVar28;
          lStack_88 = lVar35;
          plStack_78 = param_4;
          FUN_10953fb78(param_3,&pfStack_90);
        }
      }
      else if (plVar31 == (long *)0x1) {
        pfVar26 = (float *)*param_2;
        pfVar28 = (float *)*param_3;
        if (lVar21 == 1) {
          if (lVar35 == 0) {
            fVar38 = 0.0;
          }
          else {
            pfVar22 = (float *)*param_4;
            fVar38 = *pfVar28 * *pfVar22;
            if (1 < lVar35) {
              do {
                pfVar28 = pfVar28 + 1;
                pfVar22 = pfVar22 + 1;
                fVar38 = fVar38 + *pfVar28 * *pfVar22;
                ppfVar34 = (float **)((long)ppfVar34 + -1);
              } while (ppfVar34 != (float **)0x0);
              ppfVar34 = (float **)0x0;
            }
          }
          param_1 = (ulong)(uint)(fVar38 + *pfVar26);
          *pfVar26 = fVar38 + *pfVar26;
        }
        else {
          lStack_70 = 0;
          lStack_68 = 0;
          lStack_60 = 1;
          param_1 = 0x3f800000;
          pfStack_90 = pfVar26;
          plStack_80 = plVar7;
          plStack_78 = param_2;
          FUN_10953fce4(param_4,pfVar28,&pfStack_90);
        }
      }
      else {
        pfStack_90 = (float *)0x0;
        lStack_88 = 0;
        ppfVar34 = &pfStack_90;
        plStack_80 = plVar31;
        plStack_78 = plVar7;
        lStack_70 = param_3[2];
        FUN_1093ecdf0(&lStack_70,&plStack_80,&plStack_78,1);
        lStack_68 = lStack_70 * (long)plStack_80;
        lStack_60 = (long)plStack_78 * lStack_70;
        in_x6 = (float *)param_4[2];
        in_x7 = *param_2;
        lStack_a0 = param_2[1];
        param_1 = 0x3f800000;
        ppfStack_98 = ppfVar34;
        FUN_10953fe84(param_3[1],in_x6,param_3[2],*param_3,param_3[2],*param_4);
        _free(pfStack_90);
        _free(lStack_88);
      }
    }
LAB_10953f9c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar5 = (long *)param_3[1];
    plVar13 = (long *)param_4[2];
    if (plVar31 == plVar5 && plVar7 == plVar13) {
LAB_10953f900:
      if (0 < (long)plVar7) {
        plVar5 = (long *)0x0;
        lVar27 = *param_2;
        lVar36 = *param_3;
        lVar29 = param_3[2];
        lVar20 = *param_4;
        lVar15 = param_4[1];
        lVar21 = lVar20;
        do {
          if (0 < (long)plVar31) {
            plVar13 = (long *)0x0;
            lVar37 = param_4[2];
            pfVar28 = (float *)(lVar36 + 4);
            do {
              if (lVar15 == 0) {
                param_1 = 0;
              }
              else {
                param_1 = (ulong)(uint)(*(float *)(lVar36 + (long)plVar13 * lVar29 * 4) *
                                       *(float *)(lVar20 + (long)plVar5 * 4));
                pfVar26 = pfVar28;
                pfVar22 = (float *)(lVar21 + lVar37 * 4);
                lVar16 = lVar15 + -1;
                if (1 < lVar15) {
                  do {
                    param_1 = (ulong)(uint)((float)param_1 + *pfVar26 * *pfVar22);
                    in_x6 = pfVar22 + lVar37;
                    lVar16 = lVar16 + -1;
                    pfVar26 = pfVar26 + 1;
                    pfVar22 = in_x6;
                  } while (lVar16 != 0);
                  in_x7 = 0;
                }
              }
              *(int *)(lVar27 + (long)plVar5 * (long)plVar31 * 4 + (long)plVar13 * 4) = (int)param_1
              ;
              plVar13 = (long *)((long)plVar13 + 1);
              pfVar28 = pfVar28 + lVar29;
            } while (plVar13 != plVar31);
          }
          plVar5 = (long *)((long)plVar5 + 1);
          lVar21 = lVar21 + 4;
        } while (plVar5 != plVar7);
      }
      goto LAB_10953f9c0;
    }
    if (plVar5 == (long *)0x0 || plVar13 == (long *)0x0) {
LAB_10953f8f0:
      FUN_1093c3d54(param_2,(long)plVar13 * (long)plVar5);
      plVar31 = (long *)param_2[1];
      plVar7 = (long *)param_2[2];
      goto LAB_10953f900;
    }
    lVar21 = 0;
    if (plVar13 != (long *)0x0) {
      lVar21 = 0x7fffffffffffffff / (long)plVar13;
    }
    if ((long)plVar5 <= lVar21) goto LAB_10953f8f0;
  }
  plVar5 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  plVar31 = (long *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
  _free(pfStack_90);
  _free(lStack_88);
  __Unwind_Resume();
  pcStack_a8 = FUN_10953fb78;
  plVar13 = &lStack_120;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar33 = plVar31[1];
  puStack_b0 = &stack0xfffffffffffffff0;
  if (uVar33 >> 0x3e == 0) {
    plVar6 = (long *)(uVar33 << 2);
    if (uVar33 < 0x8001) goto LAB_10953fbf8;
    _malloc();
    param_2 = plVar5;
    plVar7 = plVar31;
    unaff_d8 = param_1;
    if (plVar6 == (long *)0x0) goto LAB_10953fbd8;
LAB_10953fc28:
    uVar17 = 0;
    puVar23 = (undefined4 *)*plVar31;
    lVar21 = *(long *)(plVar31[3] + 0x10);
    do {
      *(undefined4 *)((long)plVar6 + uVar17 * 4) = *puVar23;
      uVar17 = uVar17 + 1;
      puVar23 = puVar23 + lVar21;
    } while (uVar33 != uVar17);
  }
  else {
LAB_10953fbd8:
    param_1 = unaff_d8;
    plVar31 = plVar7;
    plVar5 = param_2;
    plVar6 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953fbf8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar21 = -((long)plVar6 + 0x1eU & 0xfffffffffffffff0);
    plVar13 = (long *)((long)&lStack_120 + lVar21);
    plVar6 = (long *)((long)&lStack_120 + lVar21);
    if (uVar33 != 0) goto LAB_10953fc28;
  }
  plVar7 = (long *)plVar5[1];
  plVar10 = (long *)plVar5[2];
  lStack_108 = *plVar5;
  uStack_110 = 1;
  plVar11 = &lStack_108;
  uVar17 = param_1;
  plStack_118 = plVar6;
  plStack_100 = plVar10;
  FUN_1093c55d4();
  if (0x8000 < uVar33) {
    plVar7 = plVar6;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar33) {
    _free(plVar6);
  }
  plVar8 = plVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar13 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar13 + -0x48) = param_1;
  *(float ***)((long)plVar13 + -0x40) = ppfVar34;
  *(ulong *)((long)plVar13 + -0x38) = uVar33;
  *(long **)((long)plVar13 + -0x30) = plVar31;
  *(long **)((long)plVar13 + -0x28) = plVar5;
  *(long **)((long)plVar13 + -0x20) = plVar6;
  *(long **)((long)plVar13 + -0x18) = plVar7;
  *(undefined1 ***)((long)plVar13 + -0x10) = &puStack_b0;
  *(code **)((long)plVar13 + -8) = FUN_10953fce4;
  puVar18 = (uint *)((long)plVar13 + -0x80);
  *(undefined8 *)((long)plVar13 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar33 = plVar11[2];
  if (uVar33 >> 0x3e == 0) {
    puVar9 = (uint *)(uVar33 << 2);
    if (uVar33 < 0x8001) goto LAB_10953fd64;
    _malloc();
    plVar6 = plVar11;
    plVar5 = plVar10;
    plVar31 = plVar8;
    param_1 = uVar17;
    if (puVar9 == (uint *)0x0) goto LAB_10953fd44;
LAB_10953fd94:
    uVar19 = 0;
    puVar24 = (uint *)*plVar11;
    lVar21 = *(long *)(plVar11[3] + 8);
    do {
      puVar9[uVar19] = *puVar24;
      uVar19 = uVar19 + 1;
      puVar24 = puVar24 + lVar21;
    } while (uVar33 != uVar19);
  }
  else {
LAB_10953fd44:
    uVar17 = param_1;
    plVar8 = plVar31;
    plVar10 = plVar5;
    plVar11 = plVar6;
    puVar9 = (uint *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953fd64:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar18 = (uint *)((long)plVar13 +
                      (-0x80 - ((ulong)((long)puVar9 + 0x1eU) & 0xfffffffffffffff0)));
    puVar9 = puVar18;
    if (uVar33 != 0) goto LAB_10953fd94;
  }
  lVar21 = plVar8[1];
  puVar24 = (uint *)plVar8[2];
  *(long *)((long)plVar13 + -0x68) = *plVar8;
  *(uint **)((long)plVar13 + -0x60) = puVar24;
  *(long **)((long)plVar13 + -0x78) = plVar10;
  *(undefined8 *)((long)plVar13 + -0x70) = 1;
  puVar12 = (undefined1 *)((long)plVar13 + -0x68);
  puVar14 = (undefined1 *)((long)plVar13 + -0x78);
  lVar15 = 1;
  puVar32 = puVar9;
  uVar19 = uVar17;
  FUN_10946ddac(uVar17);
  lVar20 = plVar11[2];
  if (0 < lVar20) {
    puVar25 = (uint *)*plVar11;
    lVar27 = *(long *)(plVar11[3] + 8);
    puVar30 = puVar9;
    do {
      uVar19 = (ulong)*puVar30;
      *puVar25 = *puVar30;
      puVar25 = puVar25 + lVar27;
      lVar20 = lVar20 + -1;
      puVar30 = puVar30 + 1;
    } while (lVar20 != 0);
  }
  if (0x8000 < uVar33) {
    puVar24 = puVar9;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar13 + -0x58)) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar33) {
    _free(puVar9);
  }
  puVar25 = puVar24;
  __Unwind_Resume();
  *(undefined8 *)(puVar18 + -0x1c) = unaff_d9;
  *(ulong *)(puVar18 + -0x1a) = uVar17;
  *(long *)(puVar18 + -0x18) = unaff_x28;
  *(long *)(puVar18 + -0x16) = unaff_x27;
  *(long *)(puVar18 + -0x14) = unaff_x26;
  *(long *)(puVar18 + -0x12) = lVar35;
  *(float ***)(puVar18 + -0x10) = ppfVar34;
  *(ulong *)(puVar18 + -0xe) = uVar33;
  *(long **)(puVar18 + -0xc) = plVar8;
  *(long **)(puVar18 + -10) = plVar10;
  *(uint **)(puVar18 + -8) = puVar24;
  *(uint **)(puVar18 + -6) = puVar9;
  *(undefined1 **)(puVar18 + -4) = (undefined1 *)((long)plVar13 + -0x10);
  *(code **)(puVar18 + -2) = FUN_10953fe84;
  puVar24 = puVar18 + -0x5c;
  *(long *)(puVar18 + -0x44) = in_x7;
  *(float **)(puVar18 + -0x34) = in_x6;
  *(long *)(puVar18 + -0x4e) = lVar15;
  *(uint **)(puVar18 + -0x3a) = puVar32;
  *(undefined1 **)(puVar18 + -0x50) = puVar14;
  plVar31 = *(long **)(puVar18 + 2);
  *(long *)(puVar18 + -0x20) = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = plVar31[3];
  lVar20 = plVar31[4];
  puVar32 = (uint *)plVar31[2];
  puVar9 = puVar32;
  if ((long)puVar25 <= (long)puVar32) {
    puVar9 = puVar25;
  }
  lVar15 = lVar35;
  if (lVar21 <= lVar35) {
    lVar15 = lVar21;
  }
  *(long *)(puVar18 + -0x3e) = lVar20;
  *(uint **)(puVar18 + -0x48) = puVar9;
  uVar33 = (long)puVar9 * lVar20;
  if (uVar33 >> 0x3e == 0) {
    lVar20 = *plVar31;
    *(long *)(puVar18 + -0x2a) = lVar20;
    if (lVar20 == 0) {
      lVar20 = uVar33 * 4;
      if (uVar33 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar24 = (uint *)((long)puVar18 + (-0x170 - (lVar20 + 0x1eU & 0xfffffffffffffff0)));
        *(uint **)(puVar18 + -0x58) = puVar24;
        *(uint **)(puVar18 + -0x2a) = puVar24;
      }
      else {
        _malloc();
        *(long *)(puVar18 + -0x2a) = lVar20;
        *(long *)(puVar18 + -0x58) = lVar20;
        if (lVar20 == 0) goto LAB_1095402a0;
      }
    }
    else {
      puVar18[-0x58] = 0;
      puVar18[-0x57] = 0;
      puVar24 = puVar18 + -0x5c;
    }
    uVar17 = lVar15 * *(long *)(puVar18 + -0x3e);
    if (uVar17 >> 0x3e == 0) {
      puVar14 = (undefined1 *)plVar31[1];
      *(ulong *)(puVar18 + -0x54) = uVar33;
      *(ulong *)(puVar18 + -0x56) = uVar17;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = (undefined1 *)(uVar17 * 4);
        if (uVar17 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar24 = (uint *)((long)puVar24 + -((ulong)(puVar14 + 0x1e) & 0xfffffffffffffff0));
          *(uint **)(puVar18 + -0x5a) = puVar24;
          puVar14 = (undefined1 *)puVar24;
          goto LAB_109540018;
        }
        _malloc();
        *(undefined1 **)(puVar18 + -0x5a) = puVar14;
        if (puVar14 != (undefined1 *)0x0) goto LAB_109540018;
      }
      else {
        puVar18[-0x5a] = 0;
        puVar18[-0x59] = 0;
LAB_109540018:
        puVar18[-0x51] =
             (uint)((*(undefined1 **)(puVar18 + -0x3e) != puVar12 || (long)puVar25 <= (long)puVar32)
                   || lVar35 < lVar21);
        if (0 < (long)puVar25) {
          lVar35 = 0;
          *(long *)(puVar18 + -0x4c) = *(long *)(puVar18 + -0x48) << 2;
          *(long *)(puVar18 + -0x30) = *(long *)puVar18 * lVar15 * 4;
          *(long *)(puVar18 + -0x2e) = *(long *)puVar18;
          *(long *)(puVar18 + -0x42) = *(long *)(puVar18 + -0x3e) * *(long *)(puVar18 + -0x34) * 4;
          *(undefined1 **)(puVar18 + -0x40) = puVar12;
          *(long *)(puVar18 + -0x32) = lVar15 << 2;
          *(uint **)(puVar18 + -0x4a) = puVar25;
          do {
            puVar9 = (uint *)(lVar35 + *(long *)(puVar18 + -0x48));
            *(uint **)(puVar18 + -0x46) = puVar9;
            if ((long)puVar25 <= (long)puVar9) {
              puVar9 = puVar25;
            }
            if (0 < (long)puVar12) {
              lVar20 = 0;
              *(long *)(puVar18 + -0x28) = (long)puVar9 - lVar35;
              *(long *)(puVar18 + -0x3c) =
                   *(long *)(puVar18 + -0x50) + lVar35 * *(long *)(puVar18 + -0x3a) * 4;
              uVar3 = puVar18[-0x51];
              if (lVar35 == 0) {
                uVar3 = 1;
              }
              puVar18[-0x2b] = uVar3;
              *(long *)(puVar18 + -0x36) = *(long *)(puVar18 + -0x4e);
              do {
                puVar1 = (undefined1 *)(lVar20 + *(long *)(puVar18 + -0x3e));
                puVar2 = puVar1;
                if ((long)puVar12 <= (long)puVar1) {
                  puVar2 = puVar12;
                }
                lVar35 = (long)puVar2 - lVar20;
                *(long *)(puVar18 + -0x26) = *(long *)(puVar18 + -0x3c) + lVar20 * 4;
                *(long *)(puVar18 + -0x24) = *(long *)(puVar18 + -0x3a);
                FUN_1093db8c4((undefined1 *)((long)puVar18 + -0x81),*(long *)(puVar18 + -0x2a),
                              puVar18 + -0x26,lVar35,*(long *)(puVar18 + -0x28),0,0);
                *(undefined1 **)(puVar18 + -0x38) = puVar1;
                if (0 < lVar21) {
                  lVar37 = 0;
                  lVar20 = 0;
                  lVar36 = *(long *)(puVar18 + -0x36);
                  lVar27 = *(long *)(puVar18 + -0x44);
                  lVar29 = lVar15;
                  do {
                    lVar16 = lVar21;
                    if (lVar29 <= lVar21) {
                      lVar16 = lVar29;
                    }
                    if (puVar18[-0x2b] != 0) {
                      *(long *)(puVar18 + -0x26) = lVar36;
                      *(long *)(puVar18 + -0x24) = *(long *)(puVar18 + -0x34);
                      FUN_1093eef2c((undefined1 *)((long)puVar18 + -0x82),puVar14,puVar18 + -0x26,
                                    lVar35,lVar16 + lVar37,0,0);
                    }
                    *(long *)(puVar18 + -0x26) = lVar27;
                    *(long *)(puVar18 + -0x24) = *(long *)(puVar18 + -0x2e);
                    *(undefined8 *)((long)puVar24 + -0x18) = 0;
                    *(undefined8 *)((long)puVar24 + -0x10) = 0;
                    *(undefined8 *)((long)puVar24 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(uVar19,(undefined1 *)((long)puVar18 + -0x83),puVar18 + -0x26,
                                  *(long *)(puVar18 + -0x2a),puVar14,*(long *)(puVar18 + -0x28),
                                  lVar35,lVar16 + lVar37,0xffffffffffffffff);
                    lVar20 = lVar20 + lVar15;
                    lVar27 = lVar27 + *(long *)(puVar18 + -0x30);
                    lVar36 = lVar36 + *(long *)(puVar18 + -0x32);
                    lVar29 = lVar29 + lVar15;
                    lVar37 = lVar37 - lVar15;
                  } while (lVar20 < lVar21);
                }
                puVar12 = *(undefined1 **)(puVar18 + -0x40);
                lVar20 = *(long *)(puVar18 + -0x38);
                *(long *)(puVar18 + -0x36) = *(long *)(puVar18 + -0x36) + *(long *)(puVar18 + -0x42)
                ;
              } while (lVar20 < (long)puVar12);
            }
            *(long *)(puVar18 + -0x44) = *(long *)(puVar18 + -0x44) + *(long *)(puVar18 + -0x4c);
            lVar35 = *(long *)(puVar18 + -0x46);
            puVar25 = *(uint **)(puVar18 + -0x4a);
          } while (lVar35 < (long)puVar25);
        }
        if (0x8000 < *(ulong *)(puVar18 + -0x56)) {
          _free(*(long *)(puVar18 + -0x5a));
        }
        if (0x8000 < *(ulong *)(puVar18 + -0x54)) {
          _free(*(long *)(puVar18 + -0x58));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar18 + -0x20)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109540308;
    }
  }
  else {
LAB_1095402a0:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109540308:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10954030c);
  (*pcVar4)();
}



/* Entry: 10953fb78; end: 10953fce3;  */

void FUN_10953fb78(ulong param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long in_x6;
  long in_x7;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  long *plVar25;
  long lVar26;
  long *unaff_x21;
  uint *puVar27;
  long lVar28;
  long *unaff_x22;
  ulong uVar29;
  long unaff_x24;
  long unaff_x25;
  long lVar30;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar31;
  ulong unaff_d8;
  undefined8 unaff_d9;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  plVar25 = &lStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = param_3[1];
  if (uVar29 >> 0x3e == 0) {
    plVar6 = (long *)(uVar29 << 2);
    if (uVar29 < 0x8001) goto LAB_10953fbf8;
    _malloc();
    unaff_x21 = param_2;
    unaff_x22 = param_3;
    unaff_d8 = param_1;
    if (plVar6 == (long *)0x0) goto LAB_10953fbd8;
LAB_10953fc28:
    uVar15 = 0;
    puVar19 = (undefined4 *)*param_3;
    lVar22 = *(long *)(param_3[3] + 0x10);
    do {
      *(undefined4 *)((long)plVar6 + uVar15 * 4) = *puVar19;
      uVar15 = uVar15 + 1;
      puVar19 = puVar19 + lVar22;
    } while (uVar29 != uVar15);
  }
  else {
LAB_10953fbd8:
    param_1 = unaff_d8;
    param_3 = unaff_x22;
    param_2 = unaff_x21;
    plVar6 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953fbf8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = -((long)plVar6 + 0x1eU & 0xfffffffffffffff0);
    plVar25 = (long *)((long)&lStack_80 + lVar22);
    plVar6 = (long *)((long)&lStack_80 + lVar22);
    if (uVar29 != 0) goto LAB_10953fc28;
  }
  plVar7 = (long *)param_2[1];
  plVar10 = (long *)param_2[2];
  lStack_68 = *param_2;
  uStack_70 = 1;
  plVar11 = &lStack_68;
  uVar15 = param_1;
  plStack_78 = plVar6;
  plStack_60 = plVar10;
  FUN_1093c55d4();
  if (0x8000 < uVar29) {
    plVar7 = plVar6;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar29) {
    _free(plVar6);
  }
  plVar8 = plVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar25 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar25 + -0x48) = param_1;
  *(long *)((long)plVar25 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar25 + -0x38) = uVar29;
  *(long **)((long)plVar25 + -0x30) = param_3;
  *(long **)((long)plVar25 + -0x28) = param_2;
  *(long **)((long)plVar25 + -0x20) = plVar6;
  *(long **)((long)plVar25 + -0x18) = plVar7;
  *(undefined1 **)((long)plVar25 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar25 + -8) = FUN_10953fce4;
  puVar16 = (uint *)((long)plVar25 + -0x80);
  *(undefined8 *)((long)plVar25 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = plVar11[2];
  if (uVar29 >> 0x3e == 0) {
    puVar9 = (uint *)(uVar29 << 2);
    if (uVar29 < 0x8001) goto LAB_10953fd64;
    _malloc();
    plVar6 = plVar11;
    param_2 = plVar10;
    param_3 = plVar8;
    param_1 = uVar15;
    if (puVar9 == (uint *)0x0) goto LAB_10953fd44;
LAB_10953fd94:
    uVar17 = 0;
    puVar20 = (uint *)*plVar11;
    lVar22 = *(long *)(plVar11[3] + 8);
    do {
      puVar9[uVar17] = *puVar20;
      uVar17 = uVar17 + 1;
      puVar20 = puVar20 + lVar22;
    } while (uVar29 != uVar17);
  }
  else {
LAB_10953fd44:
    uVar15 = param_1;
    plVar8 = param_3;
    plVar10 = param_2;
    plVar11 = plVar6;
    puVar9 = (uint *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953fd64:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar16 = (uint *)((long)plVar25 +
                      (-0x80 - ((ulong)((long)puVar9 + 0x1eU) & 0xfffffffffffffff0)));
    puVar9 = puVar16;
    if (uVar29 != 0) goto LAB_10953fd94;
  }
  lVar22 = plVar8[1];
  puVar20 = (uint *)plVar8[2];
  *(long *)((long)plVar25 + -0x68) = *plVar8;
  *(uint **)((long)plVar25 + -0x60) = puVar20;
  *(long **)((long)plVar25 + -0x78) = plVar10;
  *(undefined8 *)((long)plVar25 + -0x70) = 1;
  puVar12 = (undefined1 *)((long)plVar25 + -0x68);
  puVar13 = (undefined1 *)((long)plVar25 + -0x78);
  lVar14 = 1;
  puVar27 = puVar9;
  uVar17 = uVar15;
  FUN_10946ddac(uVar15);
  lVar18 = plVar11[2];
  if (0 < lVar18) {
    puVar21 = (uint *)*plVar11;
    lVar23 = *(long *)(plVar11[3] + 8);
    puVar24 = puVar9;
    do {
      uVar17 = (ulong)*puVar24;
      *puVar21 = *puVar24;
      puVar21 = puVar21 + lVar23;
      lVar18 = lVar18 + -1;
      puVar24 = puVar24 + 1;
    } while (lVar18 != 0);
  }
  if (0x8000 < uVar29) {
    puVar20 = puVar9;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar25 + -0x58)) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar29) {
    _free(puVar9);
  }
  puVar21 = puVar20;
  __Unwind_Resume();
  *(undefined8 *)(puVar16 + -0x1c) = unaff_d9;
  *(ulong *)(puVar16 + -0x1a) = uVar15;
  *(long *)(puVar16 + -0x18) = unaff_x28;
  *(long *)(puVar16 + -0x16) = unaff_x27;
  *(long *)(puVar16 + -0x14) = unaff_x26;
  *(long *)(puVar16 + -0x12) = unaff_x25;
  *(long *)(puVar16 + -0x10) = unaff_x24;
  *(ulong *)(puVar16 + -0xe) = uVar29;
  *(long **)(puVar16 + -0xc) = plVar8;
  *(long **)(puVar16 + -10) = plVar10;
  *(uint **)(puVar16 + -8) = puVar20;
  *(uint **)(puVar16 + -6) = puVar9;
  *(undefined1 **)(puVar16 + -4) = (undefined1 *)((long)plVar25 + -0x10);
  *(code **)(puVar16 + -2) = FUN_10953fe84;
  puVar20 = puVar16 + -0x5c;
  *(long *)(puVar16 + -0x44) = in_x7;
  *(long *)(puVar16 + -0x34) = in_x6;
  *(long *)(puVar16 + -0x4e) = lVar14;
  *(uint **)(puVar16 + -0x3a) = puVar27;
  *(undefined1 **)(puVar16 + -0x50) = puVar13;
  plVar25 = *(long **)(puVar16 + 2);
  *(long *)(puVar16 + -0x20) = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar25[3];
  lVar14 = plVar25[4];
  puVar27 = (uint *)plVar25[2];
  puVar9 = puVar27;
  if ((long)puVar21 <= (long)puVar27) {
    puVar9 = puVar21;
  }
  lVar23 = lVar18;
  if (lVar22 <= lVar18) {
    lVar23 = lVar22;
  }
  *(long *)(puVar16 + -0x3e) = lVar14;
  *(uint **)(puVar16 + -0x48) = puVar9;
  uVar29 = (long)puVar9 * lVar14;
  if (uVar29 >> 0x3e == 0) {
    lVar14 = *plVar25;
    *(long *)(puVar16 + -0x2a) = lVar14;
    if (lVar14 == 0) {
      lVar14 = uVar29 * 4;
      if (uVar29 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar20 = (uint *)((long)puVar16 + (-0x170 - (lVar14 + 0x1eU & 0xfffffffffffffff0)));
        *(uint **)(puVar16 + -0x58) = puVar20;
        *(uint **)(puVar16 + -0x2a) = puVar20;
      }
      else {
        _malloc();
        *(long *)(puVar16 + -0x2a) = lVar14;
        *(long *)(puVar16 + -0x58) = lVar14;
        if (lVar14 == 0) goto LAB_1095402a0;
      }
    }
    else {
      puVar16[-0x58] = 0;
      puVar16[-0x57] = 0;
      puVar20 = puVar16 + -0x5c;
    }
    uVar15 = lVar23 * *(long *)(puVar16 + -0x3e);
    if (uVar15 >> 0x3e == 0) {
      puVar13 = (undefined1 *)plVar25[1];
      *(ulong *)(puVar16 + -0x54) = uVar29;
      *(ulong *)(puVar16 + -0x56) = uVar15;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)(uVar15 * 4);
        if (uVar15 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar20 = (uint *)((long)puVar20 + -((ulong)(puVar13 + 0x1e) & 0xfffffffffffffff0));
          *(uint **)(puVar16 + -0x5a) = puVar20;
          puVar13 = (undefined1 *)puVar20;
          goto LAB_109540018;
        }
        _malloc();
        *(undefined1 **)(puVar16 + -0x5a) = puVar13;
        if (puVar13 != (undefined1 *)0x0) goto LAB_109540018;
      }
      else {
        puVar16[-0x5a] = 0;
        puVar16[-0x59] = 0;
LAB_109540018:
        puVar16[-0x51] =
             (uint)((*(undefined1 **)(puVar16 + -0x3e) != puVar12 || (long)puVar21 <= (long)puVar27)
                   || lVar18 < lVar22);
        if (0 < (long)puVar21) {
          lVar18 = 0;
          *(long *)(puVar16 + -0x4c) = *(long *)(puVar16 + -0x48) << 2;
          *(long *)(puVar16 + -0x30) = *(long *)puVar16 * lVar23 * 4;
          *(long *)(puVar16 + -0x2e) = *(long *)puVar16;
          *(long *)(puVar16 + -0x42) = *(long *)(puVar16 + -0x3e) * *(long *)(puVar16 + -0x34) * 4;
          *(undefined1 **)(puVar16 + -0x40) = puVar12;
          *(long *)(puVar16 + -0x32) = lVar23 << 2;
          *(uint **)(puVar16 + -0x4a) = puVar21;
          do {
            puVar9 = (uint *)(lVar18 + *(long *)(puVar16 + -0x48));
            *(uint **)(puVar16 + -0x46) = puVar9;
            if ((long)puVar21 <= (long)puVar9) {
              puVar9 = puVar21;
            }
            if (0 < (long)puVar12) {
              lVar14 = 0;
              *(long *)(puVar16 + -0x28) = (long)puVar9 - lVar18;
              *(long *)(puVar16 + -0x3c) =
                   *(long *)(puVar16 + -0x50) + lVar18 * *(long *)(puVar16 + -0x3a) * 4;
              uVar4 = puVar16[-0x51];
              if (lVar18 == 0) {
                uVar4 = 1;
              }
              puVar16[-0x2b] = uVar4;
              *(long *)(puVar16 + -0x36) = *(long *)(puVar16 + -0x4e);
              do {
                puVar1 = (undefined1 *)(lVar14 + *(long *)(puVar16 + -0x3e));
                puVar2 = puVar1;
                if ((long)puVar12 <= (long)puVar1) {
                  puVar2 = puVar12;
                }
                lVar18 = (long)puVar2 - lVar14;
                *(long *)(puVar16 + -0x26) = *(long *)(puVar16 + -0x3c) + lVar14 * 4;
                *(long *)(puVar16 + -0x24) = *(long *)(puVar16 + -0x3a);
                FUN_1093db8c4((undefined1 *)((long)puVar16 + -0x81),*(long *)(puVar16 + -0x2a),
                              puVar16 + -0x26,lVar18,*(long *)(puVar16 + -0x28),0,0);
                *(undefined1 **)(puVar16 + -0x38) = puVar1;
                if (0 < lVar22) {
                  lVar31 = 0;
                  lVar14 = 0;
                  lVar30 = *(long *)(puVar16 + -0x36);
                  lVar28 = *(long *)(puVar16 + -0x44);
                  lVar26 = lVar23;
                  do {
                    lVar3 = lVar22;
                    if (lVar26 <= lVar22) {
                      lVar3 = lVar26;
                    }
                    if (puVar16[-0x2b] != 0) {
                      *(long *)(puVar16 + -0x26) = lVar30;
                      *(long *)(puVar16 + -0x24) = *(long *)(puVar16 + -0x34);
                      FUN_1093eef2c((undefined1 *)((long)puVar16 + -0x82),puVar13,puVar16 + -0x26,
                                    lVar18,lVar3 + lVar31,0,0);
                    }
                    *(long *)(puVar16 + -0x26) = lVar28;
                    *(long *)(puVar16 + -0x24) = *(long *)(puVar16 + -0x2e);
                    *(undefined8 *)((long)puVar20 + -0x18) = 0;
                    *(undefined8 *)((long)puVar20 + -0x10) = 0;
                    *(undefined8 *)((long)puVar20 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(uVar17,(undefined1 *)((long)puVar16 + -0x83),puVar16 + -0x26,
                                  *(long *)(puVar16 + -0x2a),puVar13,*(long *)(puVar16 + -0x28),
                                  lVar18,lVar3 + lVar31,0xffffffffffffffff);
                    lVar14 = lVar14 + lVar23;
                    lVar28 = lVar28 + *(long *)(puVar16 + -0x30);
                    lVar30 = lVar30 + *(long *)(puVar16 + -0x32);
                    lVar26 = lVar26 + lVar23;
                    lVar31 = lVar31 - lVar23;
                  } while (lVar14 < lVar22);
                }
                puVar12 = *(undefined1 **)(puVar16 + -0x40);
                lVar14 = *(long *)(puVar16 + -0x38);
                *(long *)(puVar16 + -0x36) = *(long *)(puVar16 + -0x36) + *(long *)(puVar16 + -0x42)
                ;
              } while (lVar14 < (long)puVar12);
            }
            *(long *)(puVar16 + -0x44) = *(long *)(puVar16 + -0x44) + *(long *)(puVar16 + -0x4c);
            lVar18 = *(long *)(puVar16 + -0x46);
            puVar21 = *(uint **)(puVar16 + -0x4a);
          } while (lVar18 < (long)puVar21);
        }
        if (0x8000 < *(ulong *)(puVar16 + -0x56)) {
          _free(*(long *)(puVar16 + -0x5a));
        }
        if (0x8000 < *(ulong *)(puVar16 + -0x54)) {
          _free(*(long *)(puVar16 + -0x58));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar16 + -0x20)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109540308;
    }
  }
  else {
LAB_1095402a0:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109540308:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10954030c);
  (*pcVar5)();
}



/* Entry: 10953fce4; end: 10953fe83;  */

void FUN_10953fce4(ulong param_1,undefined8 *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  long in_x6;
  long in_x7;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *unaff_x20;
  long lVar21;
  long unaff_x21;
  long lVar22;
  undefined8 *unaff_x22;
  ulong uVar23;
  long unaff_x24;
  long unaff_x25;
  long lVar24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar25;
  ulong unaff_d8;
  undefined8 unaff_d9;
  uint auStack_80 [2];
  long alStack_78 [3];
  uint *puStack_60;
  long lStack_58;
  
  puVar5 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = param_4[2];
  if (uVar23 >> 0x3e == 0) {
    puVar6 = (uint *)(uVar23 << 2);
    if (uVar23 < 0x8001) goto LAB_10953fd64;
    _malloc();
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    unaff_d8 = param_1;
    if (puVar6 == (uint *)0x0) goto LAB_10953fd44;
LAB_10953fd94:
    uVar10 = 0;
    puVar13 = (uint *)*param_4;
    lVar16 = *(long *)(param_4[3] + 8);
    do {
      puVar6[uVar10] = *puVar13;
      uVar10 = uVar10 + 1;
      puVar13 = puVar13 + lVar16;
    } while (uVar23 != uVar10);
  }
  else {
LAB_10953fd44:
    param_1 = unaff_d8;
    param_2 = unaff_x22;
    param_3 = unaff_x21;
    param_4 = unaff_x20;
    puVar6 = (uint *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10953fd64:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar16 = -((long)puVar6 + 0x1eU & 0xfffffffffffffff0);
    puVar5 = (uint *)((long)auStack_80 + lVar16);
    puVar6 = (uint *)((long)auStack_80 + lVar16);
    if (uVar23 != 0) goto LAB_10953fd94;
  }
  lVar16 = param_2[1];
  puVar13 = (uint *)param_2[2];
  alStack_78[2] = *param_2;
  alStack_78[1] = 1;
  plVar7 = alStack_78 + 2;
  plVar19 = alStack_78;
  lVar9 = 1;
  puVar8 = puVar6;
  uVar10 = param_1;
  alStack_78[0] = param_3;
  puStack_60 = puVar13;
  FUN_10946ddac(param_1);
  lVar11 = param_4[2];
  if (0 < lVar11) {
    puVar14 = (uint *)*param_4;
    lVar17 = *(long *)(param_4[3] + 8);
    puVar18 = puVar6;
    do {
      uVar10 = (ulong)*puVar18;
      *puVar14 = *puVar18;
      puVar14 = puVar14 + lVar17;
      lVar11 = lVar11 + -1;
      puVar18 = puVar18 + 1;
    } while (lVar11 != 0);
  }
  if (0x8000 < uVar23) {
    puVar13 = puVar6;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar23) {
    _free(puVar6);
  }
  puVar14 = puVar13;
  __Unwind_Resume();
  *(undefined8 *)((long)puVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)puVar5 + -0x68) = param_1;
  *(long *)((long)puVar5 + -0x60) = unaff_x28;
  *(long *)((long)puVar5 + -0x58) = unaff_x27;
  *(long *)((long)puVar5 + -0x50) = unaff_x26;
  *(long *)((long)puVar5 + -0x48) = unaff_x25;
  *(long *)((long)puVar5 + -0x40) = unaff_x24;
  *(ulong *)((long)puVar5 + -0x38) = uVar23;
  *(undefined8 **)((long)puVar5 + -0x30) = param_2;
  *(long *)((long)puVar5 + -0x28) = param_3;
  *(uint **)((long)puVar5 + -0x20) = puVar13;
  *(uint **)((long)puVar5 + -0x18) = puVar6;
  *(undefined1 **)((long)puVar5 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar5 + -8) = FUN_10953fe84;
  plVar12 = (long *)((long)puVar5 + -0x170);
  *(long *)((long)puVar5 + -0x110) = in_x7;
  *(long *)((long)puVar5 + -0xd0) = in_x6;
  *(long *)((long)puVar5 + -0x138) = lVar9;
  *(uint **)((long)puVar5 + -0xe8) = puVar8;
  *(long **)((long)puVar5 + -0x140) = plVar19;
  plVar19 = *(long **)((long)puVar5 + 8);
  *(long *)((long)puVar5 + -0x80) = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar19[3];
  lVar9 = plVar19[4];
  puVar13 = (uint *)plVar19[2];
  puVar6 = puVar13;
  if ((long)puVar14 <= (long)puVar13) {
    puVar6 = puVar14;
  }
  lVar17 = lVar11;
  if (lVar16 <= lVar11) {
    lVar17 = lVar16;
  }
  *(long *)((long)puVar5 + -0xf8) = lVar9;
  *(uint **)((long)puVar5 + -0x120) = puVar6;
  uVar23 = (long)puVar6 * lVar9;
  if (uVar23 >> 0x3e == 0) {
    lVar9 = *plVar19;
    *(long *)((long)puVar5 + -0xa8) = lVar9;
    if (lVar9 == 0) {
      lVar9 = uVar23 * 4;
      if (uVar23 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        plVar12 = (long *)((long)puVar5 + (-0x170 - (lVar9 + 0x1eU & 0xfffffffffffffff0)));
        *(long **)((long)puVar5 + -0x160) = plVar12;
        *(long **)((long)puVar5 + -0xa8) = plVar12;
      }
      else {
        _malloc();
        *(long *)((long)puVar5 + -0xa8) = lVar9;
        *(long *)((long)puVar5 + -0x160) = lVar9;
        if (lVar9 == 0) goto LAB_1095402a0;
      }
    }
    else {
      *(long *)((long)puVar5 + -0x160) = 0;
      plVar12 = (long *)((long)puVar5 + -0x170);
    }
    uVar15 = lVar17 * *(long *)((long)puVar5 + -0xf8);
    if (uVar15 >> 0x3e == 0) {
      puVar20 = (undefined1 *)plVar19[1];
      *(ulong *)((long)puVar5 + -0x150) = uVar23;
      *(ulong *)((long)puVar5 + -0x158) = uVar15;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = (undefined1 *)(uVar15 * 4);
        if (uVar15 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          plVar12 = (long *)((long)plVar12 + -((ulong)(puVar20 + 0x1e) & 0xfffffffffffffff0));
          *(long **)((long)puVar5 + -0x168) = plVar12;
          puVar20 = (undefined1 *)plVar12;
          goto LAB_109540018;
        }
        _malloc();
        *(undefined1 **)((long)puVar5 + -0x168) = puVar20;
        if (puVar20 != (undefined1 *)0x0) goto LAB_109540018;
      }
      else {
        *(long *)((long)puVar5 + -0x168) = 0;
LAB_109540018:
        *(uint *)((long)puVar5 + -0x144) =
             (uint)((*(long **)((long)puVar5 + -0xf8) != plVar7 || (long)puVar14 <= (long)puVar13)
                   || lVar11 < lVar16);
        if (0 < (long)puVar14) {
          lVar11 = 0;
          *(long *)((long)puVar5 + -0x130) = *(long *)((long)puVar5 + -0x120) << 2;
          *(long *)((long)puVar5 + -0xc0) = *(long *)puVar5 * lVar17 * 4;
          *(long *)((long)puVar5 + -0xb8) = *(long *)puVar5;
          *(long *)((long)puVar5 + -0x108) =
               *(long *)((long)puVar5 + -0xf8) * *(long *)((long)puVar5 + -0xd0) * 4;
          *(long **)((long)puVar5 + -0x100) = plVar7;
          *(long *)((long)puVar5 + -200) = lVar17 << 2;
          *(uint **)((long)puVar5 + -0x128) = puVar14;
          do {
            puVar6 = (uint *)(lVar11 + *(long *)((long)puVar5 + -0x120));
            *(uint **)((long)puVar5 + -0x118) = puVar6;
            if ((long)puVar14 <= (long)puVar6) {
              puVar6 = puVar14;
            }
            if (0 < (long)plVar7) {
              lVar9 = 0;
              *(long *)((long)puVar5 + -0xa0) = (long)puVar6 - lVar11;
              *(long *)((long)puVar5 + -0xf0) =
                   *(long *)((long)puVar5 + -0x140) + lVar11 * *(long *)((long)puVar5 + -0xe8) * 4;
              uVar3 = *(undefined4 *)((long)puVar5 + -0x144);
              if (lVar11 == 0) {
                uVar3 = 1;
              }
              *(undefined4 *)((long)puVar5 + -0xac) = uVar3;
              *(long *)((long)puVar5 + -0xd8) = *(long *)((long)puVar5 + -0x138);
              do {
                plVar19 = (long *)(lVar9 + *(long *)((long)puVar5 + -0xf8));
                plVar1 = plVar19;
                if ((long)plVar7 <= (long)plVar19) {
                  plVar1 = plVar7;
                }
                lVar11 = (long)plVar1 - lVar9;
                *(long *)((long)puVar5 + -0x98) = *(long *)((long)puVar5 + -0xf0) + lVar9 * 4;
                *(long *)((long)puVar5 + -0x90) = *(long *)((long)puVar5 + -0xe8);
                FUN_1093db8c4((undefined1 *)((long)puVar5 + -0x81),*(long *)((long)puVar5 + -0xa8),
                              (long *)((long)puVar5 + -0x98),lVar11,*(long *)((long)puVar5 + -0xa0),
                              0,0);
                *(long **)((long)puVar5 + -0xe0) = plVar19;
                if (0 < lVar16) {
                  lVar25 = 0;
                  lVar9 = 0;
                  lVar24 = *(long *)((long)puVar5 + -0xd8);
                  lVar22 = *(long *)((long)puVar5 + -0x110);
                  lVar21 = lVar17;
                  do {
                    lVar2 = lVar16;
                    if (lVar21 <= lVar16) {
                      lVar2 = lVar21;
                    }
                    if (*(int *)((long)puVar5 + -0xac) != 0) {
                      *(long *)((long)puVar5 + -0x98) = lVar24;
                      *(long *)((long)puVar5 + -0x90) = *(long *)((long)puVar5 + -0xd0);
                      FUN_1093eef2c((undefined1 *)((long)puVar5 + -0x82),puVar20,
                                    (long *)((long)puVar5 + -0x98),lVar11,lVar2 + lVar25,0,0);
                    }
                    *(long *)((long)puVar5 + -0x98) = lVar22;
                    *(long *)((long)puVar5 + -0x90) = *(long *)((long)puVar5 + -0xb8);
                    *(undefined8 *)((long)plVar12 + -0x18) = 0;
                    *(undefined8 *)((long)plVar12 + -0x10) = 0;
                    *(undefined8 *)((long)plVar12 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(uVar10,(undefined1 *)((long)puVar5 + -0x83),
                                  (long *)((long)puVar5 + -0x98),*(long *)((long)puVar5 + -0xa8),
                                  puVar20,*(long *)((long)puVar5 + -0xa0),lVar11,lVar2 + lVar25,
                                  0xffffffffffffffff);
                    lVar9 = lVar9 + lVar17;
                    lVar22 = lVar22 + *(long *)((long)puVar5 + -0xc0);
                    lVar24 = lVar24 + *(long *)((long)puVar5 + -200);
                    lVar21 = lVar21 + lVar17;
                    lVar25 = lVar25 - lVar17;
                  } while (lVar9 < lVar16);
                }
                plVar7 = *(long **)((long)puVar5 + -0x100);
                lVar9 = *(long *)((long)puVar5 + -0xe0);
                *(long *)((long)puVar5 + -0xd8) =
                     *(long *)((long)puVar5 + -0xd8) + *(long *)((long)puVar5 + -0x108);
              } while (lVar9 < (long)plVar7);
            }
            *(long *)((long)puVar5 + -0x110) =
                 *(long *)((long)puVar5 + -0x110) + *(long *)((long)puVar5 + -0x130);
            lVar11 = *(long *)((long)puVar5 + -0x118);
            puVar14 = *(uint **)((long)puVar5 + -0x128);
          } while (lVar11 < (long)puVar14);
        }
        if (0x8000 < *(ulong *)((long)puVar5 + -0x158)) {
          _free(*(long *)((long)puVar5 + -0x168));
        }
        if (0x8000 < *(ulong *)((long)puVar5 + -0x150)) {
          _free(*(long *)((long)puVar5 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar5 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109540308;
    }
  }
  else {
LAB_1095402a0:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109540308:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10954030c);
  (*pcVar4)();
}



/* Entry: 10953fe84; end: 10954036f;  */

void FUN_10953fe84(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,
                  undefined8 *param_11)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar5 = auStack_170;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_11[3];
  lStack_f8 = param_11[4];
  lVar9 = param_11[2];
  lStack_120 = lVar9;
  if (param_2 <= lVar9) {
    lStack_120 = param_2;
  }
  lVar1 = lVar12;
  if (param_3 <= lVar12) {
    lVar1 = param_3;
  }
  uVar7 = lStack_120 * lStack_f8;
  lStack_140 = param_5;
  lStack_138 = param_7;
  lStack_110 = param_9;
  lStack_e8 = param_6;
  lStack_d0 = param_8;
  if (uVar7 >> 0x3e == 0) {
    puStack_a8 = (undefined1 *)*param_11;
    if (puStack_a8 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 * 4);
      if (uVar7 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_160 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_a8 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_160 = puVar4;
        puStack_a8 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_1095402a0;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x0;
      puVar5 = auStack_170;
    }
    uVar6 = lVar1 * lStack_f8;
    if (uVar6 >> 0x3e == 0) {
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      if ((undefined1 *)param_11[1] == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 4);
        if (uVar6 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puVar4 = puVar5;
          puStack_168 = puVar5;
          goto LAB_109540018;
        }
        _malloc();
        puStack_168 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_109540018;
      }
      else {
        puStack_168 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)param_11[1];
LAB_109540018:
        uStack_144 = (uint)((lStack_f8 != param_4 || param_2 <= lVar9) || lVar12 < param_3);
        if (0 < param_2) {
          lStack_118 = 0;
          lStack_130 = lStack_120 << 2;
          lStack_c0 = param_10 * lVar1 * 4;
          lStack_b8 = param_10;
          lStack_108 = lStack_f8 * lStack_d0 * 4;
          lStack_c8 = lVar1 << 2;
          lStack_128 = param_2;
          lStack_100 = param_4;
          do {
            lVar12 = lStack_118 + lStack_120;
            lVar9 = lVar12;
            if (lStack_128 <= lVar12) {
              lVar9 = lStack_128;
            }
            if (0 < param_4) {
              lStack_a0 = lVar9 - lStack_118;
              lStack_f0 = lStack_140 + lStack_118 * lStack_e8 * 4;
              uStack_ac = uStack_144;
              if (lStack_118 == 0) {
                uStack_ac = 1;
              }
              lStack_d8 = lStack_138;
              lVar9 = 0;
              lStack_118 = lVar12;
              do {
                lVar12 = lVar9 + lStack_f8;
                lVar10 = lVar12;
                if (param_4 <= lVar12) {
                  lVar10 = param_4;
                }
                lVar10 = lVar10 - lVar9;
                lStack_98 = lStack_f0 + lVar9 * 4;
                lStack_90 = lStack_e8;
                FUN_1093db8c4(&uStack_81,puStack_a8,&lStack_98,lVar10,lStack_a0,0,0);
                lStack_e0 = lVar12;
                if (0 < param_3) {
                  lVar13 = 0;
                  lVar12 = 0;
                  lVar8 = lVar1;
                  lVar9 = lStack_110;
                  lVar11 = lStack_d8;
                  do {
                    lVar2 = param_3;
                    if (lVar8 <= param_3) {
                      lVar2 = lVar8;
                    }
                    if (uStack_ac != 0) {
                      lStack_90 = lStack_d0;
                      lStack_98 = lVar11;
                      FUN_1093eef2c(&uStack_82,puVar4,&lStack_98,lVar10,lVar2 + lVar13,0,0);
                    }
                    lStack_90 = lStack_b8;
                    lStack_98 = lVar9;
                    *(undefined8 *)(puVar5 + -0x18) = 0;
                    *(undefined8 *)(puVar5 + -0x10) = 0;
                    *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(param_1,&uStack_83,&lStack_98,puStack_a8,puVar4,lStack_a0,lVar10,
                                  lVar2 + lVar13,0xffffffffffffffff);
                    lVar12 = lVar12 + lVar1;
                    lVar9 = lVar9 + lStack_c0;
                    lVar11 = lVar11 + lStack_c8;
                    lVar8 = lVar8 + lVar1;
                    lVar13 = lVar13 - lVar1;
                  } while (lVar12 < param_3);
                }
                lStack_d8 = lStack_d8 + lStack_108;
                lVar9 = lStack_e0;
                param_4 = lStack_100;
                lVar12 = lStack_118;
              } while (lStack_e0 < lStack_100);
            }
            lStack_118 = lVar12;
            lStack_110 = lStack_110 + lStack_130;
          } while (lStack_118 < lStack_128);
        }
        if (0x8000 < uStack_158) {
          _free(puStack_168);
        }
        if (0x8000 < uStack_150) {
          _free(puStack_160);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109540308;
    }
  }
  else {
LAB_1095402a0:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109540308:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10954030c);
  (*pcVar3)();
}



/* Entry: 109540370; end: 10954040f;  */

void FUN_109540370(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = 0x7fffffffffffffff / param_3;
    }
    if (param_2 <= lVar1) goto LAB_1095403a0;
    goto LAB_1095403d4;
  }
LAB_1095403a0:
  uVar2 = param_3 * param_2;
  if (param_1[1] == uVar2) goto LAB_1095403fc;
  _free(*param_1);
  if ((long)uVar2 < 1) {
LAB_1095403f4:
    lVar1 = 0;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
LAB_1095403d4:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1095403f4;
    }
    lVar1 = uVar2 * 4;
    _malloc();
    if (lVar1 == 0) goto LAB_1095403d4;
  }
  *param_1 = lVar1;
LAB_1095403fc:
  param_1[1] = param_3;
  return;
}



/* Entry: 109540410; end: 109540567;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109540410(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 **param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 **unaff_x20;
  undefined *puVar16;
  undefined1 *unaff_x21;
  undefined1 *puVar17;
  undefined8 *unaff_x22;
  ulong uVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  long lVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined *puVar21;
  undefined8 unaff_x28;
  long lVar22;
  undefined8 uVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar15 = auStack_80;
  puVar6 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_3[1];
  ppuVar9 = param_5;
  uVar23 = param_1;
  if (uVar18 >> 0x3e == 0) {
    unaff_x21 = (undefined1 *)*param_3;
    unaff_x20 = param_5;
    unaff_x22 = param_2;
    unaff_d8 = param_1;
    if (unaff_x21 == (undefined1 *)0x0) {
      unaff_x21 = (undefined1 *)(uVar18 << 2);
      if (uVar18 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar15 = auStack_80 + -((ulong)(unaff_x21 + 0x1e) & 0xfffffffffffffff0);
        unaff_x21 = auStack_80 + -((ulong)(unaff_x21 + 0x1e) & 0xfffffffffffffff0);
        puVar11 = unaff_x21;
      }
      else {
        _malloc();
        puVar11 = unaff_x21;
        if (unaff_x21 == (undefined1 *)0x0) goto LAB_109540528;
      }
    }
    else {
      puVar15 = auStack_80;
      puVar11 = (undefined1 *)0x0;
    }
    puVar17 = (undefined1 *)param_2[1];
    puVar7 = (undefined *)param_2[2];
    puStack_68 = (undefined1 *)*param_2;
    uStack_70 = 1;
    param_7 = param_5[1];
    ppuVar8 = &puStack_68;
    ppuVar9 = &puStack_78;
    uVar23 = param_1;
    puStack_78 = unaff_x21;
    puStack_60 = puVar7;
    FUN_1093c55d4(param_1);
    if (0x8000 < uVar18) {
      puVar17 = puVar11;
      _free();
    }
    puVar6 = puVar15;
    unaff_x21 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_109540528:
    param_4 = param_6;
    puVar17 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar7 = PTR___ZTISt9bad_alloc_110346a68;
    ppuVar8 = (undefined1 **)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < uVar18) {
    _free(unaff_x21);
  }
  puVar19 = puVar17;
  __Unwind_Resume();
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = uVar18;
  *(undefined8 **)(puVar6 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
  *(undefined1 ***)(puVar6 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar6 + -0x18) = puVar17;
  *(undefined1 **)(puVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar6 + -8) = FUN_109540568;
  puVar11 = puVar6 + -0x170;
  *(undefined8 *)(puVar6 + -0x110) = param_9;
  *(undefined8 *)(puVar6 + -0xd0) = param_8;
  *(undefined1 **)(puVar6 + -0x138) = param_7;
  *(undefined8 *)(puVar6 + -0xf8) = param_4;
  *(undefined1 ***)(puVar6 + -0x140) = ppuVar9;
  plVar14 = *(long **)(puVar6 + 0x10);
  *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined *)plVar14[3];
  lVar10 = plVar14[4];
  puVar17 = (undefined1 *)plVar14[2];
  puVar15 = puVar17;
  if ((long)puVar19 <= (long)puVar17) {
    puVar15 = puVar19;
  }
  puVar1 = puVar21;
  if ((long)puVar7 <= (long)puVar21) {
    puVar1 = puVar7;
  }
  *(long *)(puVar6 + -0xf0) = lVar10;
  *(undefined1 **)(puVar6 + -0x120) = puVar15;
  uVar18 = (long)puVar15 * lVar10;
  if (uVar18 >> 0x3e == 0) {
    lVar10 = *plVar14;
    *(long *)(puVar6 + -0xa8) = lVar10;
    if (lVar10 == 0) {
      lVar10 = uVar18 * 4;
      if (uVar18 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar11 = puVar6 + (-0x170 - (lVar10 + 0x1eU & 0xfffffffffffffff0));
        *(undefined1 **)(puVar6 + -0x160) = puVar11;
        *(undefined1 **)(puVar6 + -0xa8) = puVar11;
      }
      else {
        _malloc();
        *(long *)(puVar6 + -0xa8) = lVar10;
        *(long *)(puVar6 + -0x160) = lVar10;
        if (lVar10 == 0) goto LAB_109540984;
      }
    }
    else {
      *(undefined8 *)(puVar6 + -0x160) = 0;
      puVar11 = puVar6 + -0x170;
    }
    uVar12 = (long)puVar1 * *(long *)(puVar6 + -0xf0);
    if (uVar12 >> 0x3e == 0) {
      puVar15 = (undefined1 *)plVar14[1];
      *(ulong *)(puVar6 + -0x150) = uVar18;
      *(ulong *)(puVar6 + -0x158) = uVar12;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)(uVar12 * 4);
        if (uVar12 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar11 = puVar11 + -((ulong)(puVar15 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)(puVar6 + -0x168) = puVar11;
          puVar15 = puVar11;
          goto LAB_1095406fc;
        }
        _malloc();
        *(undefined1 **)(puVar6 + -0x168) = puVar15;
        if (puVar15 != (undefined1 *)0x0) goto LAB_1095406fc;
      }
      else {
        *(undefined8 *)(puVar6 + -0x168) = 0;
LAB_1095406fc:
        *(uint *)(puVar6 + -0x144) =
             (uint)((*(undefined1 ***)(puVar6 + -0xf0) != ppuVar8 || (long)puVar19 <= (long)puVar17)
                   || (long)puVar21 < (long)puVar7);
        if (0 < (long)puVar19) {
          lVar10 = 0;
          *(long *)(puVar6 + -0x130) = *(long *)(puVar6 + -0x120) << 2;
          *(long *)(puVar6 + -0xc0) = *(long *)(puVar6 + 8) * (long)puVar1 * 4;
          *(long *)(puVar6 + -0xb8) = *(long *)(puVar6 + 8);
          *(long *)(puVar6 + -0x108) = *(long *)(puVar6 + -0xf0) << 2;
          *(undefined1 ***)(puVar6 + -0x100) = ppuVar8;
          *(long *)(puVar6 + -200) = *(long *)(puVar6 + -0xd0) * (long)puVar1 * 4;
          *(undefined1 **)(puVar6 + -0x128) = puVar19;
          do {
            puVar17 = (undefined1 *)(lVar10 + *(long *)(puVar6 + -0x120));
            *(undefined1 **)(puVar6 + -0x118) = puVar17;
            if ((long)puVar19 <= (long)puVar17) {
              puVar17 = puVar19;
            }
            if (0 < (long)ppuVar8) {
              lVar13 = 0;
              *(long *)(puVar6 + -0xa0) = (long)puVar17 - lVar10;
              *(long *)(puVar6 + -0xe8) = *(long *)(puVar6 + -0x140) + lVar10 * 4;
              uVar4 = *(undefined4 *)(puVar6 + -0x144);
              if (lVar10 == 0) {
                uVar4 = 1;
              }
              *(undefined4 *)(puVar6 + -0xac) = uVar4;
              *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0x138);
              do {
                ppuVar9 = (undefined1 **)(lVar13 + *(long *)(puVar6 + -0xf0));
                ppuVar2 = ppuVar9;
                if ((long)ppuVar8 <= (long)ppuVar9) {
                  ppuVar2 = ppuVar8;
                }
                lVar10 = (long)ppuVar2 - lVar13;
                *(long *)(puVar6 + -0x98) =
                     *(long *)(puVar6 + -0xe8) + lVar13 * *(long *)(puVar6 + -0xf8) * 4;
                *(long *)(puVar6 + -0x90) = *(long *)(puVar6 + -0xf8);
                FUN_1093df154(puVar6 + -0x81,*(undefined8 *)(puVar6 + -0xa8),puVar6 + -0x98,lVar10,
                              *(undefined8 *)(puVar6 + -0xa0),0,0);
                *(undefined1 ***)(puVar6 + -0xe0) = ppuVar9;
                if (0 < (long)puVar7) {
                  lVar22 = 0;
                  puVar21 = (undefined *)0x0;
                  lVar20 = *(long *)(puVar6 + -0xd8);
                  lVar13 = *(long *)(puVar6 + -0x110);
                  puVar16 = puVar1;
                  do {
                    puVar3 = puVar7;
                    if ((long)puVar16 <= (long)puVar7) {
                      puVar3 = puVar16;
                    }
                    if (*(int *)(puVar6 + -0xac) != 0) {
                      *(long *)(puVar6 + -0x98) = lVar20;
                      *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xd0);
                      FUN_1093db31c(puVar6 + -0x82,puVar15,puVar6 + -0x98,lVar10,puVar3 + lVar22,0,0
                                   );
                    }
                    *(long *)(puVar6 + -0x98) = lVar13;
                    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xb8);
                    *(undefined8 *)(puVar11 + -0x18) = 0;
                    *(undefined8 *)(puVar11 + -0x10) = 0;
                    *(undefined8 *)(puVar11 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(uVar23,puVar6 + -0x83,puVar6 + -0x98,
                                  *(undefined8 *)(puVar6 + -0xa8),puVar15,
                                  *(undefined8 *)(puVar6 + -0xa0),lVar10,puVar3 + lVar22,
                                  0xffffffffffffffff);
                    puVar21 = puVar21 + (long)puVar1;
                    lVar13 = lVar13 + *(long *)(puVar6 + -0xc0);
                    lVar20 = lVar20 + *(long *)(puVar6 + -200);
                    puVar16 = puVar16 + (long)puVar1;
                    lVar22 = lVar22 - (long)puVar1;
                  } while ((long)puVar21 < (long)puVar7);
                }
                ppuVar8 = *(undefined1 ***)(puVar6 + -0x100);
                lVar13 = *(long *)(puVar6 + -0xe0);
                *(long *)(puVar6 + -0xd8) = *(long *)(puVar6 + -0xd8) + *(long *)(puVar6 + -0x108);
              } while (lVar13 < (long)ppuVar8);
            }
            *(long *)(puVar6 + -0x110) = *(long *)(puVar6 + -0x110) + *(long *)(puVar6 + -0x130);
            lVar10 = *(long *)(puVar6 + -0x118);
            puVar19 = *(undefined1 **)(puVar6 + -0x128);
          } while (lVar10 < (long)puVar19);
        }
        if (0x8000 < *(ulong *)(puVar6 + -0x158)) {
          _free(*(undefined8 *)(puVar6 + -0x168));
        }
        if (0x8000 < *(ulong *)(puVar6 + -0x150)) {
          _free(*(undefined8 *)(puVar6 + -0x160));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1095409ec;
    }
  }
  else {
LAB_109540984:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1095409ec:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1095409f0);
  (*pcVar5)();
}



/* Entry: 109540568; end: 109540a53;  */

void FUN_109540568(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined4 param_10,
                  undefined4 param_11,long param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar5 = auStack_170;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_13[3];
  lStack_f0 = param_13[4];
  lVar9 = param_13[2];
  lStack_120 = lVar9;
  if (param_2 <= lVar9) {
    lStack_120 = param_2;
  }
  lVar1 = lVar12;
  if (param_3 <= lVar12) {
    lVar1 = param_3;
  }
  uVar7 = lStack_120 * lStack_f0;
  lStack_140 = param_5;
  lStack_138 = param_7;
  lStack_110 = param_9;
  lStack_f8 = param_6;
  lStack_d0 = param_8;
  if (uVar7 >> 0x3e == 0) {
    puStack_a8 = (undefined1 *)*param_13;
    if (puStack_a8 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 * 4);
      if (uVar7 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_160 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_a8 = auStack_170 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_160 = puVar4;
        puStack_a8 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_109540984;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x0;
      puVar5 = auStack_170;
    }
    uVar6 = lVar1 * lStack_f0;
    if (uVar6 >> 0x3e == 0) {
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      if ((undefined1 *)param_13[1] == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 4);
        if (uVar6 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puVar4 = puVar5;
          puStack_168 = puVar5;
          goto LAB_1095406fc;
        }
        _malloc();
        puStack_168 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_1095406fc;
      }
      else {
        puStack_168 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)param_13[1];
LAB_1095406fc:
        uStack_144 = (uint)((lStack_f0 != param_4 || param_2 <= lVar9) || lVar12 < param_3);
        if (0 < param_2) {
          lStack_118 = 0;
          lStack_130 = lStack_120 << 2;
          lStack_c0 = param_12 * lVar1 * 4;
          lStack_b8 = param_12;
          lStack_108 = lStack_f0 << 2;
          lStack_c8 = lStack_d0 * lVar1 * 4;
          lStack_128 = param_2;
          lStack_100 = param_4;
          do {
            lVar12 = lStack_118 + lStack_120;
            lVar9 = lVar12;
            if (lStack_128 <= lVar12) {
              lVar9 = lStack_128;
            }
            if (0 < param_4) {
              lStack_a0 = lVar9 - lStack_118;
              lStack_e8 = lStack_140 + lStack_118 * 4;
              uStack_ac = uStack_144;
              if (lStack_118 == 0) {
                uStack_ac = 1;
              }
              lStack_d8 = lStack_138;
              lVar9 = 0;
              lStack_118 = lVar12;
              do {
                lVar12 = lVar9 + lStack_f0;
                lVar10 = lVar12;
                if (param_4 <= lVar12) {
                  lVar10 = param_4;
                }
                lVar10 = lVar10 - lVar9;
                lStack_98 = lStack_e8 + lVar9 * lStack_f8 * 4;
                lStack_90 = lStack_f8;
                FUN_1093df154(&uStack_81,puStack_a8,&lStack_98,lVar10,lStack_a0,0,0);
                lStack_e0 = lVar12;
                if (0 < param_3) {
                  lVar13 = 0;
                  lVar12 = 0;
                  lVar8 = lVar1;
                  lVar9 = lStack_110;
                  lVar11 = lStack_d8;
                  do {
                    lVar2 = param_3;
                    if (lVar8 <= param_3) {
                      lVar2 = lVar8;
                    }
                    if (uStack_ac != 0) {
                      lStack_90 = lStack_d0;
                      lStack_98 = lVar11;
                      FUN_1093db31c(&uStack_82,puVar4,&lStack_98,lVar10,lVar2 + lVar13,0,0);
                    }
                    lStack_90 = lStack_b8;
                    lStack_98 = lVar9;
                    *(undefined8 *)(puVar5 + -0x18) = 0;
                    *(undefined8 *)(puVar5 + -0x10) = 0;
                    *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(param_1,&uStack_83,&lStack_98,puStack_a8,puVar4,lStack_a0,lVar10,
                                  lVar2 + lVar13,0xffffffffffffffff);
                    lVar12 = lVar12 + lVar1;
                    lVar9 = lVar9 + lStack_c0;
                    lVar11 = lVar11 + lStack_c8;
                    lVar8 = lVar8 + lVar1;
                    lVar13 = lVar13 - lVar1;
                  } while (lVar12 < param_3);
                }
                lStack_d8 = lStack_d8 + lStack_108;
                lVar9 = lStack_e0;
                param_4 = lStack_100;
                lVar12 = lStack_118;
              } while (lStack_e0 < lStack_100);
            }
            lStack_118 = lVar12;
            lStack_110 = lStack_110 + lStack_130;
          } while (lStack_118 < lStack_128);
        }
        if (0x8000 < uStack_158) {
          _free(puStack_168);
        }
        if (0x8000 < uStack_150) {
          _free(puStack_160);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1095409ec;
    }
  }
  else {
LAB_109540984:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1095409ec:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1095409f0);
  (*pcVar3)();
}



/* Entry: 109540a54; end: 109540baf;  */

void FUN_109540a54(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,ulong param_4,
                  undefined1 **param_5,undefined1 **param_6,undefined1 *param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *extraout_x12;
  undefined1 *extraout_x12_00;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *extraout_x13;
  undefined1 *extraout_x13_00;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong unaff_x19;
  long lVar24;
  undefined1 **unaff_x21;
  undefined1 *unaff_x22;
  ulong uVar25;
  undefined8 *unaff_x23;
  long lVar26;
  undefined8 unaff_x24;
  long lVar27;
  long lVar28;
  undefined8 unaff_x25;
  ulong uVar29;
  long lVar30;
  undefined8 unaff_x26;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar33;
  float fVar34;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar21 = auStack_80;
  puVar6 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_5;
  ppuVar8 = param_6;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    unaff_x21 = param_6;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (param_3 == (undefined1 *)0x0) {
      param_3 = (undefined1 *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar21 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        param_3 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        unaff_x22 = param_3;
      }
      else {
        _malloc();
        unaff_x22 = param_3;
        if (param_3 == (undefined1 *)0x0) goto LAB_109540b70;
      }
    }
    else {
      puVar21 = auStack_80;
      unaff_x22 = (undefined1 *)0x0;
    }
    puStack_68 = (undefined1 *)*param_2;
    puVar11 = (undefined1 *)param_2[1];
    puVar32 = (undefined *)param_2[2];
    uStack_60 = *(undefined8 *)(param_2[3] + 0x10);
    uStack_70 = 1;
    param_7 = param_6[2];
    ppuVar8 = &puStack_68;
    ppuVar9 = &puStack_78;
    puStack_78 = param_3;
    FUN_1093c55d4(param_1);
    if (0x8000 < param_4) {
      puVar11 = unaff_x22;
      _free();
    }
    puVar6 = puVar21;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_109540b70:
    param_5 = ppuVar8;
    puVar11 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar32 = PTR___ZTISt9bad_alloc_110346a68;
    ppuVar8 = (undefined1 **)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x22);
  }
  puVar19 = puVar11;
  __Unwind_Resume();
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar6 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
  *(undefined1 ***)(puVar6 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar6 + -0x20) = puVar11;
  *(ulong *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar6 + -8) = FUN_109540bb0;
  puVar11 = puVar6 + -0x1c0;
  *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = param_8[4];
  puVar21 = (undefined1 *)param_8[2];
  if ((long)puVar19 <= param_8[2]) {
    puVar21 = puVar19;
  }
  uVar25 = (long)puVar21 * lVar27;
  if (uVar25 >> 0x3e == 0) {
    lVar10 = *param_8;
    *(undefined1 ***)(puVar6 + -0xd0) = ppuVar8;
    *(undefined1 **)(puVar6 + -0x140) = puVar19;
    *(undefined1 **)(puVar6 + -0x148) = puVar21;
    *(long *)(puVar6 + -0x108) = lVar10;
    if (lVar10 == 0) {
      lVar10 = uVar25 * 4;
      if (uVar25 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar11 = puVar6 + (-0x1c0 - (lVar10 + 0x1eU & 0xfffffffffffffff0));
        *(undefined1 **)(puVar6 + -0x1b8) = puVar11;
        *(undefined1 **)(puVar6 + -0x108) = puVar11;
        puVar19 = extraout_x12;
        puVar21 = extraout_x13;
      }
      else {
        _malloc();
        puVar21 = *(undefined1 **)(puVar6 + -0x148);
        puVar19 = *(undefined1 **)(puVar6 + -0x140);
        ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
        *(long *)(puVar6 + -0x108) = lVar10;
        *(long *)(puVar6 + -0x1b8) = lVar10;
        if (lVar10 == 0) goto LAB_109541334;
      }
    }
    else {
      *(undefined8 *)(puVar6 + -0x1b8) = 0;
      puVar11 = puVar6 + -0x1c0;
    }
    uVar29 = lVar27 * (long)puVar32;
    if (uVar29 >> 0x3e == 0) {
      lVar10 = param_8[1];
      *(long *)(puVar6 + -0x120) = lVar10;
      if (lVar10 == 0) {
        puVar15 = (undefined1 *)(uVar29 * 4);
        if (uVar29 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar11 = puVar11 + -((ulong)(puVar15 + 0x1e) & 0xfffffffffffffff0);
          *(undefined1 **)(puVar6 + -0x120) = puVar11;
          puVar19 = extraout_x12_00;
          puVar21 = extraout_x13_00;
          puVar15 = puVar11;
          goto LAB_109540d44;
        }
        _malloc();
        puVar21 = *(undefined1 **)(puVar6 + -0x148);
        puVar19 = *(undefined1 **)(puVar6 + -0x140);
        ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
        *(undefined1 **)(puVar6 + -0x120) = puVar15;
        if (puVar15 != (undefined1 *)0x0) goto LAB_109540d44;
      }
      else {
        puVar15 = (undefined1 *)0x0;
LAB_109540d44:
        if ((bRam00000001132dfa18 & 1) == 0) {
          iVar7 = 0x132dfa18;
          ___cxa_guard_acquire();
          puVar21 = *(undefined1 **)(puVar6 + -0x148);
          puVar19 = *(undefined1 **)(puVar6 + -0x140);
          ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
          if (iVar7 != 0) {
            uRam00000001132dfa08 = 0x80000;
            uRam00000001132dfa00 = 0x4000;
            uRam00000001132dfa10 = 0x80000;
            ___cxa_guard_release(0x1132dfa18);
            puVar21 = *(undefined1 **)(puVar6 + -0x148);
            puVar19 = *(undefined1 **)(puVar6 + -0x140);
            ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
          }
        }
        *(ulong *)(puVar6 + -0x1b0) = uVar29;
        *(long *)(puVar6 + -0x188) = lVar27;
        *(undefined1 ***)(puVar6 + -0x100) = ppuVar9;
        *(ulong *)(puVar6 + -0x1a8) = uVar25;
        *(undefined1 **)(puVar6 + -0x1c0) = puVar15;
        if ((long)puVar32 < 1) {
          uVar25 = 0;
        }
        else {
          puVar15 = param_7;
          if ((long)param_7 <= (long)puVar19) {
            puVar15 = puVar19;
          }
          uVar29 = 0;
          if ((long)puVar15 << 4 != 0) {
            uVar29 = uRam00000001132dfa08 / (ulong)((long)puVar15 << 4);
          }
          uVar25 = uVar29 + 3;
          if (-1 < (long)uVar29) {
            uVar25 = uVar29;
          }
          uVar25 = uVar25 & 0xfffffffffffffffc;
        }
        if ((long)uVar25 < 5) {
          uVar25 = 4;
        }
        *(ulong *)(puVar6 + -0x138) = uVar25;
        if (0 < (long)puVar19) {
          *(undefined8 *)(puVar6 + -0xe8) = 0;
          puVar15 = *(undefined1 **)(puVar6 + -0x188);
          *(long *)(puVar6 + -0x198) = (long)puVar15 << 2;
          lVar27 = *(long *)(puVar6 + -0x138);
          *(long *)(puVar6 + -0x150) = (long)param_7 * lVar27 * 4;
          lVar30 = *(long *)(puVar6 + -0x100);
          lVar10 = lVar30 * 4;
          *(long *)(puVar6 + -0x1a0) = (long)puVar15 * (lVar10 + 4);
          *(long *)(puVar6 + -0xf0) = lVar30 * 0x30 + 0x30;
          *(long *)(puVar6 + -0x168) = (long)param_5 + (long)puVar15 * 4;
          *(long *)(puVar6 + -0x128) = (long)puVar21 << 2;
          *(long *)(puVar6 + -0x130) = lVar30 * (long)puVar21 * 4;
          *(long *)(puVar6 + -0x170) = (long)puVar19 - (long)puVar15;
          *(undefined1 ***)(puVar6 + -0x158) = ppuVar8;
          *(undefined1 ***)(puVar6 + -0x180) = param_5;
          *(undefined **)(puVar6 + -0x178) =
               (undefined *)((long)ppuVar8 + (long)puVar15 * lVar30 * 4);
          *(undefined **)(puVar6 + -0x118) = puVar32;
          *(long *)(puVar6 + -0xf8) = lVar10;
          puVar21 = puVar19;
          while( true ) {
            *(undefined1 **)(puVar6 + -400) = puVar21;
            puVar3 = puVar15;
            if ((long)puVar21 <= (long)puVar15) {
              puVar3 = puVar21;
            }
            *(undefined1 **)(puVar6 + -0x160) = puVar3;
            if ((long)(puVar19 + -*(long *)(puVar6 + -0xe8)) <= (long)puVar15) {
              puVar15 = puVar19 + -*(long *)(puVar6 + -0xe8);
            }
            *(undefined1 **)(puVar6 + -200) = puVar15;
            if (0 < (long)puVar32) {
              lVar24 = 0;
              *(undefined8 *)(puVar6 + -0x110) = *(undefined8 *)(puVar6 + -0x180);
              do {
                lVar26 = (long)puVar32 - lVar24;
                if (lVar26 <= lVar27) {
                  lVar27 = lVar26;
                }
                *(long *)(puVar6 + -0xc0) = lVar27;
                if (0 < (long)puVar15) {
                  lVar27 = 0;
                  lVar12 = *(long *)(puVar6 + -0xc0);
                  *(long *)(puVar6 + -0xe0) = (long)param_5 + lVar24 * (long)param_7 * 4;
                  *(long *)(puVar6 + -0xd8) =
                       *(long *)(puVar6 + -0x120) + lVar24 * (long)puVar15 * 4;
                  lVar23 = *(long *)(puVar6 + -0x158);
                  lVar28 = *(long *)(puVar6 + -0x110);
                  lVar14 = *(long *)(puVar6 + -0x160);
                  do {
                    *(long *)(puVar6 + -0xb8) = lVar14;
                    if (lVar14 < 2) {
                      lVar14 = 1;
                    }
                    if (0xb < lVar14) {
                      lVar14 = 0xc;
                    }
                    lVar16 = (long)puVar15 - lVar27;
                    lVar4 = lVar16;
                    if (0xb < lVar16) {
                      lVar4 = 0xc;
                    }
                    lVar1 = lVar27 + *(long *)(puVar6 + -0xe8);
                    *(long *)(puVar6 + -0xa8) = lVar16;
                    if (0 < lVar16) {
                      lVar16 = 0;
                      lVar17 = lVar23;
                      do {
                        if (0 < lVar26) {
                          lVar2 = lVar16 + lVar1;
                          fVar33 = *(float *)((long)ppuVar8 + lVar2 * 4 + lVar2 * lVar30 * 4);
                          lVar18 = lVar28;
                          lVar20 = lVar24;
                          do {
                            if (lVar16 == 0) {
                              fVar34 = 0.0;
                            }
                            else {
                              lVar22 = 0;
                              fVar34 = 0.0;
                              do {
                                fVar34 = fVar34 + *(float *)(lVar18 + lVar22 * 4) *
                                                  *(float *)(lVar17 + lVar22 * 4);
                                lVar22 = lVar22 + 1;
                              } while (lVar16 != lVar22);
                            }
                            *(float *)((long)param_5 + lVar2 * 4 + lVar20 * (long)param_7 * 4) =
                                 (1.0 / fVar33) *
                                 (*(float *)((long)param_5 + lVar2 * 4 + lVar20 * (long)param_7 * 4)
                                 - fVar34);
                            lVar20 = lVar20 + 1;
                            lVar18 = lVar18 + (long)param_7 * 4;
                          } while (lVar20 < lVar12 + lVar24);
                        }
                        lVar16 = lVar16 + 1;
                        lVar17 = lVar17 + lVar10;
                      } while (lVar16 != lVar14);
                    }
                    *(long *)(puVar6 + -0xb0) = lVar23;
                    *(long *)(puVar6 + -0x98) = *(long *)(puVar6 + -0xe0) + lVar1 * 4;
                    *(undefined1 **)(puVar6 + -0x90) = param_7;
                    *(long *)(puVar6 + -0xa0) = lVar27;
                    FUN_109541464(*(undefined8 *)(puVar6 + -0xd8),puVar6 + -0x98,lVar4,
                                  *(undefined8 *)(puVar6 + -0xc0),puVar15);
                    lVar27 = *(long *)(puVar6 + -0xa8) - lVar4;
                    if (0 < lVar27) {
                      *(long *)(puVar6 + -0x98) =
                           *(long *)(puVar6 + -0xd0) + (lVar4 + lVar1) * lVar30 * 4 + lVar1 * 4;
                      *(long *)(puVar6 + -0x90) = lVar30;
                      uVar31 = *(undefined8 *)(puVar6 + -0x108);
                      *(long *)(puVar6 + -0xa8) = lVar27;
                      FUN_1093db8c4(puVar6 + -0x82,uVar31,puVar6 + -0x98,lVar4,lVar27,0,0);
                      *(long *)(puVar6 + -0x98) = *(long *)(puVar6 + -0xe0) + (lVar4 + lVar1) * 4;
                      *(undefined1 **)(puVar6 + -0x90) = param_7;
                      uVar13 = *(undefined8 *)(puVar6 + -0xa0);
                      *(undefined8 *)(puVar11 + -0x18) = 0;
                      *(undefined8 *)(puVar11 + -0x10) = uVar13;
                      *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar6 + -200);
                      FUN_1093dc118(0xbf800000,puVar6 + -0x81,puVar6 + -0x98,uVar31,
                                    *(undefined8 *)(puVar6 + -0xd8),*(undefined8 *)(puVar6 + -0xa8),
                                    lVar4,*(undefined8 *)(puVar6 + -0xc0),lVar4);
                      lVar30 = *(long *)(puVar6 + -0x100);
                    }
                    lVar27 = *(long *)(puVar6 + -0xa0) + 0xc;
                    lVar14 = *(long *)(puVar6 + -0xb8) + -0xc;
                    lVar28 = lVar28 + 0x30;
                    lVar10 = *(long *)(puVar6 + -0xf8);
                    lVar23 = *(long *)(puVar6 + -0xb0) + *(long *)(puVar6 + -0xf0);
                    ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
                    puVar15 = *(undefined1 **)(puVar6 + -200);
                  } while (lVar27 < (long)puVar15);
                }
                lVar27 = *(long *)(puVar6 + -0x138);
                lVar24 = lVar24 + lVar27;
                *(long *)(puVar6 + -0x110) = *(long *)(puVar6 + -0x110) + *(long *)(puVar6 + -0x150)
                ;
                puVar32 = *(undefined **)(puVar6 + -0x118);
              } while (lVar24 < (long)puVar32);
            }
            lVar27 = *(long *)(puVar6 + -0xe8) + *(long *)(puVar6 + -0x188);
            lVar26 = *(long *)(puVar6 + -0x170);
            lVar24 = *(long *)(puVar6 + -0x178);
            lVar30 = *(long *)(puVar6 + -0x168);
            puVar19 = *(undefined1 **)(puVar6 + -0x140);
            *(long *)(puVar6 + -0xe8) = lVar27;
            lVar28 = *(long *)(puVar6 + -0x148);
            if ((long)puVar19 <= lVar27) break;
            do {
              lVar14 = lVar26 - lVar28;
              lVar23 = lVar26;
              if (lVar28 <= lVar26) {
                lVar23 = lVar28;
              }
              lVar26 = lVar14;
              if (0 < lVar23) {
                *(long *)(puVar6 + -0xa0) = lVar14;
                *(long *)(puVar6 + -0x98) = lVar24;
                uVar13 = *(undefined8 *)(puVar6 + -0x108);
                *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x100);
                FUN_1093db8c4(puVar6 + -0x82,uVar13,puVar6 + -0x98,puVar15,lVar23,0,0);
                *(long *)(puVar6 + -0x98) = lVar30;
                *(undefined1 **)(puVar6 + -0x90) = param_7;
                *(undefined8 *)(puVar11 + -0x18) = 0;
                *(undefined8 *)(puVar11 + -0x10) = 0;
                *(undefined8 *)(puVar11 + -0x20) = 0xffffffffffffffff;
                puVar32 = *(undefined **)(puVar6 + -0x118);
                FUN_1093dc118(0xbf800000,puVar6 + -0x81,puVar6 + -0x98,uVar13,
                              *(undefined8 *)(puVar6 + -0x120),lVar23,puVar15,puVar32,
                              0xffffffffffffffff);
                ppuVar8 = *(undefined1 ***)(puVar6 + -0xd0);
                puVar15 = *(undefined1 **)(puVar6 + -200);
                puVar19 = *(undefined1 **)(puVar6 + -0x140);
                lVar28 = *(long *)(puVar6 + -0x148);
                lVar26 = *(long *)(puVar6 + -0xa0);
              }
              lVar27 = lVar27 + lVar28;
              lVar30 = lVar30 + *(long *)(puVar6 + -0x128);
              lVar24 = lVar24 + *(long *)(puVar6 + -0x130);
            } while (lVar27 < (long)puVar19);
            puVar15 = *(undefined1 **)(puVar6 + -0x188);
            puVar21 = (undefined1 *)(*(long *)(puVar6 + -400) - (long)puVar15);
            *(long *)(puVar6 + -0x180) = *(long *)(puVar6 + -0x180) + *(long *)(puVar6 + -0x198);
            *(long *)(puVar6 + -0x158) = *(long *)(puVar6 + -0x158) + *(long *)(puVar6 + -0x1a0);
            *(long *)(puVar6 + -0x168) = *(long *)(puVar6 + -0x168) + *(long *)(puVar6 + -0x198);
            *(long *)(puVar6 + -0x178) = *(long *)(puVar6 + -0x178) + *(long *)(puVar6 + -0x1a0);
            *(long *)(puVar6 + -0x170) = *(long *)(puVar6 + -0x170) - (long)puVar15;
            lVar30 = *(long *)(puVar6 + -0x100);
            lVar27 = *(long *)(puVar6 + -0x138);
          }
        }
        if (0x8000 < *(ulong *)(puVar6 + -0x1b0)) {
          _free(*(undefined8 *)(puVar6 + -0x1c0));
        }
        if (0x8000 < *(ulong *)(puVar6 + -0x1a8)) {
          _free(*(undefined8 *)(puVar6 + -0x1b8));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109541400;
    }
  }
  else {
LAB_109541334:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109541400:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109541404);
  (*pcVar5)();
}



/* Entry: 109540bb0; end: 109541463;  */

void FUN_109540bb0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  long extraout_x13;
  long extraout_x13_00;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  ppuVar10 = &puStack_1c0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = param_7[4];
  lVar17 = param_7[2];
  if (param_1 <= param_7[2]) {
    lVar17 = param_1;
  }
  uVar21 = lVar17 * lVar23;
  if (uVar21 >> 0x3e == 0) {
    lStack_108 = *param_7;
    lStack_148 = lVar17;
    lStack_140 = param_1;
    lStack_d0 = param_3;
    if (lStack_108 == 0) {
      lVar25 = uVar21 * 4;
      if (uVar21 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar17 = -(lVar25 + 0x1eU & 0xfffffffffffffff0);
        ppuVar10 = (undefined1 **)((long)&puStack_1c0 + lVar17);
        lStack_1b8 = (long)&puStack_1c0 + lVar17;
        param_1 = extraout_x12;
        lVar17 = extraout_x13;
        lStack_108 = lStack_1b8;
      }
      else {
        _malloc();
        param_3 = lStack_d0;
        param_1 = lStack_140;
        lVar17 = lStack_148;
        lStack_1b8 = lVar25;
        lStack_108 = lVar25;
        if (lVar25 == 0) goto LAB_109541334;
      }
    }
    else {
      lStack_1b8 = 0;
      ppuVar10 = &puStack_1c0;
    }
    uVar24 = lVar23 * param_2;
    if (uVar24 >> 0x3e == 0) {
      puStack_120 = (undefined1 *)param_7[1];
      if (puStack_120 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)(uVar24 * 4);
        if (uVar24 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar10 = (undefined1 **)
                     ((long)ppuVar10 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0));
          param_1 = extraout_x12_00;
          lVar17 = extraout_x13_00;
          puVar8 = (undefined1 *)ppuVar10;
          puStack_120 = (undefined1 *)ppuVar10;
          goto LAB_109540d44;
        }
        _malloc();
        param_3 = lStack_d0;
        param_1 = lStack_140;
        lVar17 = lStack_148;
        puStack_120 = puVar8;
        if (puVar8 != (undefined1 *)0x0) goto LAB_109540d44;
      }
      else {
        puVar8 = (undefined1 *)0x0;
LAB_109540d44:
        if ((bRam00000001132dfa18 & 1) == 0) {
          iVar7 = 0x132dfa18;
          ___cxa_guard_acquire();
          param_3 = lStack_d0;
          param_1 = lStack_140;
          lVar17 = lStack_148;
          if (iVar7 != 0) {
            uRam00000001132dfa08 = 0x80000;
            uRam00000001132dfa00 = 0x4000;
            uRam00000001132dfa10 = 0x80000;
            ___cxa_guard_release(0x1132dfa18);
            param_3 = lStack_d0;
            param_1 = lStack_140;
            lVar17 = lStack_148;
          }
        }
        if (param_2 < 1) {
          uStack_138 = 0;
        }
        else {
          lVar25 = param_6;
          if (param_6 <= param_1) {
            lVar25 = param_1;
          }
          uVar5 = 0;
          if (lVar25 << 4 != 0) {
            uVar5 = uRam00000001132dfa08 / (ulong)(lVar25 << 4);
          }
          uStack_138 = uVar5 + 3;
          if (-1 < (long)uVar5) {
            uStack_138 = uVar5;
          }
          uStack_138 = uStack_138 & 0xfffffffffffffffc;
        }
        if ((long)uStack_138 < 5) {
          uStack_138 = 4;
        }
        puStack_1c0 = puVar8;
        uStack_1b0 = uVar24;
        uStack_1a8 = uVar21;
        lStack_188 = lVar23;
        lStack_100 = param_4;
        if (0 < param_1) {
          lStack_e8 = 0;
          lStack_198 = lVar23 << 2;
          lStack_150 = param_6 * uStack_138 * 4;
          lVar25 = param_4 * 4;
          lStack_1a0 = lVar23 * (lVar25 + 4);
          lStack_f0 = param_4 * 0x30 + 0x30;
          lStack_168 = param_5 + lVar23 * 4;
          lStack_128 = lVar17 << 2;
          lStack_130 = param_4 * lVar17 * 4;
          lStack_170 = param_1 - lVar23;
          lStack_178 = param_3 + lVar23 * param_4 * 4;
          lStack_190 = param_1;
          lStack_180 = param_5;
          lStack_158 = param_3;
          lStack_118 = param_2;
          lStack_f8 = lVar25;
          while( true ) {
            lStack_160 = lStack_188;
            if (lStack_190 <= lStack_188) {
              lStack_160 = lStack_190;
            }
            lVar17 = lStack_188;
            if (param_1 - lStack_e8 <= lStack_188) {
              lVar17 = param_1 - lStack_e8;
            }
            lStack_c8 = lVar17;
            if (0 < param_2) {
              lVar23 = 0;
              lStack_110 = lStack_180;
              lVar22 = lStack_100;
              do {
                uVar21 = param_2 - lVar23;
                uStack_c0 = uStack_138;
                if ((long)uVar21 <= (long)uStack_138) {
                  uStack_c0 = uVar21;
                }
                if (0 < lVar17) {
                  lVar9 = 0;
                  lVar14 = uStack_c0 + lVar23;
                  puStack_d8 = puStack_120 + lVar23 * lVar17 * 4;
                  lStack_e0 = param_5 + lVar23 * param_6 * 4;
                  lVar13 = lStack_160;
                  lVar20 = lStack_158;
                  lVar11 = lStack_110;
                  do {
                    lVar4 = lVar13;
                    if (lVar13 < 2) {
                      lVar4 = 1;
                    }
                    if (0xb < lVar4) {
                      lVar4 = 0xc;
                    }
                    lStack_a8 = lVar17 - lVar9;
                    lVar3 = lStack_a8;
                    if (0xb < lStack_a8) {
                      lVar3 = 0xc;
                    }
                    lVar1 = lVar9 + lStack_e8;
                    if (0 < lStack_a8) {
                      lVar12 = 0;
                      lVar15 = lVar20;
                      do {
                        if (0 < (long)uVar21) {
                          lVar2 = lVar12 + lVar1;
                          fVar26 = *(float *)(param_3 + lVar2 * lVar22 * 4 + lVar2 * 4);
                          lVar16 = lVar11;
                          lVar18 = lVar23;
                          do {
                            if (lVar12 == 0) {
                              fVar27 = 0.0;
                            }
                            else {
                              lVar19 = 0;
                              fVar27 = 0.0;
                              do {
                                fVar27 = fVar27 + *(float *)(lVar16 + lVar19 * 4) *
                                                  *(float *)(lVar15 + lVar19 * 4);
                                lVar19 = lVar19 + 1;
                              } while (lVar12 != lVar19);
                            }
                            lVar19 = param_5 + lVar18 * param_6 * 4;
                            *(float *)(lVar19 + lVar2 * 4) =
                                 (1.0 / fVar26) * (*(float *)(lVar19 + lVar2 * 4) - fVar27);
                            lVar18 = lVar18 + 1;
                            lVar16 = lVar16 + param_6 * 4;
                          } while (lVar18 < lVar14);
                        }
                        lVar12 = lVar12 + 1;
                        lVar15 = lVar15 + lVar25;
                      } while (lVar12 != lVar4);
                    }
                    lStack_98 = lStack_e0 + lVar1 * 4;
                    lStack_b8 = lVar13;
                    lStack_b0 = lVar20;
                    lStack_a0 = lVar9;
                    lStack_90 = param_6;
                    FUN_109541464(puStack_d8,&lStack_98,lVar3,uStack_c0,lVar17);
                    lVar17 = lStack_108;
                    lVar25 = lStack_a8 - lVar3;
                    if (0 < lVar25) {
                      lStack_98 = lStack_d0 + (lVar3 + lVar1) * lVar22 * 4 + lVar1 * 4;
                      lStack_a8 = lVar25;
                      lStack_90 = lVar22;
                      FUN_1093db8c4(&uStack_82,lStack_108,&lStack_98,lVar3,lVar25,0,0);
                      lVar25 = lStack_a0;
                      lStack_98 = lStack_e0 + (lVar3 + lVar1) * 4;
                      lStack_90 = param_6;
                      *(undefined8 *)((long)ppuVar10 + -0x18) = 0;
                      *(long *)((long)ppuVar10 + -0x10) = lVar25;
                      *(long *)((long)ppuVar10 + -0x20) = lStack_c8;
                      FUN_1093dc118(0xbf800000,&uStack_81,&lStack_98,lVar17,puStack_d8,lStack_a8,
                                    lVar3,uStack_c0,lVar3);
                      lVar22 = lStack_100;
                    }
                    lVar9 = lStack_a0 + 0xc;
                    lVar13 = lStack_b8 + -0xc;
                    lVar11 = lVar11 + 0x30;
                    lVar20 = lStack_b0 + lStack_f0;
                    param_3 = lStack_d0;
                    lVar17 = lStack_c8;
                    lVar25 = lStack_f8;
                  } while (lVar9 < lStack_c8);
                }
                lVar23 = lVar23 + uStack_138;
                lStack_110 = lStack_110 + lStack_150;
                param_2 = lStack_118;
              } while (lVar23 < lStack_118);
            }
            lVar23 = lStack_e8 + lStack_188;
            lVar11 = lStack_170;
            lVar14 = lStack_148;
            param_1 = lStack_140;
            lVar9 = lStack_178;
            lVar22 = lStack_168;
            lStack_e8 = lVar23;
            if (lStack_140 <= lVar23) break;
            do {
              lVar4 = lStack_108;
              lVar13 = lVar11 - lVar14;
              lVar20 = lVar11;
              if (lVar14 <= lVar11) {
                lVar20 = lVar14;
              }
              lVar11 = lVar13;
              if (0 < lVar20) {
                lStack_90 = lStack_100;
                lStack_a0 = lVar13;
                lStack_98 = lVar9;
                FUN_1093db8c4(&uStack_82,lStack_108,&lStack_98,lVar17,lVar20,0,0);
                lStack_98 = lVar22;
                lStack_90 = param_6;
                *(undefined8 *)((long)ppuVar10 + -0x18) = 0;
                *(undefined8 *)((long)ppuVar10 + -0x10) = 0;
                *(undefined8 *)((long)ppuVar10 + -0x20) = 0xffffffffffffffff;
                param_2 = lStack_118;
                FUN_1093dc118(0xbf800000,&uStack_81,&lStack_98,lVar4,puStack_120,lVar20,lVar17,
                              lStack_118,0xffffffffffffffff);
                param_3 = lStack_d0;
                lVar14 = lStack_148;
                lVar11 = lStack_a0;
                param_1 = lStack_140;
                lVar17 = lStack_c8;
              }
              lVar23 = lVar23 + lVar14;
              lVar22 = lVar22 + lStack_128;
              lVar9 = lVar9 + lStack_130;
            } while (lVar23 < param_1);
            lStack_190 = lStack_190 - lStack_188;
            lStack_180 = lStack_180 + lStack_198;
            lStack_158 = lStack_158 + lStack_1a0;
            lStack_168 = lStack_168 + lStack_198;
            lStack_178 = lStack_178 + lStack_1a0;
            lStack_170 = lStack_170 - lStack_188;
          }
        }
        if (0x8000 < uStack_1b0) {
          _free(puStack_1c0);
        }
        if (0x8000 < uStack_1a8) {
          _free(lStack_1b8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109541400;
    }
  }
  else {
LAB_109541334:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109541400:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109541404);
  (*pcVar6)();
}



/* Entry: 109541464; end: 10954166b;  */

void FUN_109541464(long param_1,long *param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 (*pauVar18) [12];
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar14 = param_4 + 3;
  if (-1 < (long)param_4) {
    uVar14 = param_4;
  }
  uVar9 = uVar14 & 0xfffffffffffffffc;
  uVar1 = param_3 + 3;
  if (-1 < (long)param_3) {
    uVar1 = param_3;
  }
  if ((long)param_4 < 4) {
    lVar17 = 0;
  }
  else {
    lVar10 = 0;
    lVar12 = 0;
    lVar17 = 0;
    lVar15 = 0xc;
    lVar7 = 8;
    lVar8 = 4;
    do {
      lVar16 = lVar17 + param_6 * 4;
      lVar2 = *param_2;
      lVar3 = param_2[1];
      if ((long)param_3 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        pauVar18 = (undefined1 (*) [12])(lVar2 + lVar3 * lVar10);
        puVar20 = (undefined8 *)(lVar2 + lVar3 * lVar15);
        puVar22 = (undefined8 *)(lVar2 + lVar3 * lVar7);
        puVar23 = (undefined8 *)(lVar2 + lVar3 * lVar8);
        puVar11 = (undefined4 *)(param_1 + param_6 * 0x10 + 0x20 + lVar17 * 4);
        do {
          uVar4 = *(undefined8 *)(*pauVar18 + 8);
          auVar6 = *pauVar18;
          auVar5 = *pauVar18;
          uVar25 = puVar23[1];
          uVar24 = *puVar23;
          uVar27 = puVar22[1];
          uVar26 = *puVar22;
          uVar29 = puVar20[1];
          uVar28 = *puVar20;
          puVar11[-8] = auVar5._0_4_;
          puVar11[-7] = (int)uVar24;
          puVar11[-6] = (int)uVar26;
          puVar11[-5] = (int)uVar28;
          *(ulong *)(puVar11 + -2) =
               CONCAT44((int)((ulong)uVar28 >> 0x20),(int)((ulong)uVar26 >> 0x20));
          *(ulong *)(puVar11 + -4) = CONCAT44((int)((ulong)uVar24 >> 0x20),auVar5._4_4_);
          *puVar11 = auVar6._8_4_;
          puVar11[1] = (int)uVar25;
          puVar11[2] = (int)uVar27;
          puVar11[3] = (int)uVar29;
          *(ulong *)(puVar11 + 6) =
               CONCAT44((int)((ulong)uVar29 >> 0x20),(int)((ulong)uVar27 >> 0x20));
          *(ulong *)(puVar11 + 4) =
               CONCAT44((int)((ulong)uVar25 >> 0x20),(int)((ulong)uVar4 >> 0x20));
          lVar16 = lVar16 + 0x10;
          lVar19 = lVar19 + 4;
          pauVar18 = (undefined1 (*) [12])(pauVar18[1] + 4);
          puVar20 = puVar20 + 2;
          puVar22 = puVar22 + 2;
          puVar23 = puVar23 + 2;
          puVar11 = puVar11 + 0x10;
        } while (lVar19 < (long)(uVar1 & 0xfffffffffffffffc));
      }
      lVar17 = param_3 - lVar19;
      if (lVar17 != 0 && lVar19 <= (long)param_3) {
        lVar21 = 0;
        puVar11 = (undefined4 *)(param_1 + 8 + lVar16 * 4);
        do {
          puVar11[-2] = *(undefined4 *)(lVar2 + lVar3 * lVar10 + lVar19 * 4 + lVar21);
          puVar11[-1] = *(undefined4 *)(lVar2 + lVar3 * lVar8 + lVar19 * 4 + lVar21);
          *puVar11 = *(undefined4 *)(lVar2 + lVar3 * lVar7 + lVar19 * 4 + lVar21);
          puVar11[1] = *(undefined4 *)(lVar2 + lVar3 * lVar15 + lVar19 * 4 + lVar21);
          lVar21 = lVar21 + 4;
          puVar11 = puVar11 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar16 = lVar16 + lVar21;
      }
      lVar17 = lVar16 + (param_5 - (param_3 + param_6)) * 4;
      lVar12 = lVar12 + 4;
      lVar15 = lVar15 + 0x10;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + 0x10;
    } while (lVar12 < (long)uVar9);
  }
  if ((long)uVar9 < (long)param_4) {
    lVar12 = param_2[1];
    puVar11 = (undefined4 *)(*param_2 + lVar12 * ((long)uVar14 >> 2) * 0x10);
    do {
      lVar17 = lVar17 + param_6;
      puVar13 = puVar11;
      uVar14 = param_3;
      if (0 < (long)param_3) {
        do {
          *(undefined4 *)(param_1 + lVar17 * 4) = *puVar13;
          lVar17 = lVar17 + 1;
          uVar14 = uVar14 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      lVar17 = (param_5 - (param_3 + param_6)) + lVar17;
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + lVar12;
    } while (uVar9 != param_4);
  }
  return;
}



/* Entry: 10954166c; end: 109541c1b;  */

void FUN_10954166c(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined8 *param_10)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_3e0 [8];
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  ulong uStack_380;
  long lStack_378;
  ulong uStack_370;
  long lStack_368;
  long lStack_360;
  undefined1 *puStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 *puStack_320;
  long lStack_318;
  undefined1 *puStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 uStack_2e3;
  undefined1 uStack_2e2;
  undefined1 uStack_2e1;
  long *plStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  puVar4 = auStack_3e0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_398 = param_10[4];
  uVar11 = param_10[2];
  if ((long)param_2 <= (long)param_10[2]) {
    uVar11 = param_2;
  }
  uStack_370 = uVar11 & 0x7ffffffffffffffc;
  if ((long)uVar11 < 5) {
    uStack_370 = uVar11;
  }
  uVar11 = uStack_370 * lStack_398;
  lStack_3b8 = param_4;
  lStack_3a8 = param_6;
  lStack_3a0 = param_7;
  lStack_378 = param_5;
  lStack_360 = param_8;
  lStack_308 = param_9;
  if (uVar11 >> 0x3e == 0) {
    puVar14 = (undefined1 *)*param_10;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)(uVar11 * 4);
      if (uVar11 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar4 = auStack_3e0 + -((ulong)(puVar14 + 0x1e) & 0xfffffffffffffff0);
        puVar14 = auStack_3e0 + -((ulong)(puVar14 + 0x1e) & 0xfffffffffffffff0);
        puStack_3d0 = puVar14;
      }
      else {
        _malloc();
        puStack_3d0 = puVar14;
        if (puVar14 == (undefined1 *)0x0) goto LAB_109541b60;
      }
    }
    else {
      puStack_3d0 = (undefined1 *)0x0;
      puVar4 = auStack_3e0;
    }
    uVar5 = lStack_398 * param_2;
    if (uVar5 >> 0x3e == 0) {
      puStack_358 = (undefined1 *)param_10[1];
      uStack_3c8 = uVar5;
      uStack_3c0 = uVar11;
      if (puStack_358 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(uVar5 * 4);
        if (uVar5 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar4 = puVar4 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0);
          puStack_3d8 = puVar4;
          puStack_358 = puVar4;
          goto LAB_1095417e0;
        }
        _malloc();
        puStack_3d8 = puVar3;
        puStack_358 = puVar3;
        if (puVar3 != (undefined1 *)0x0) goto LAB_1095417e0;
      }
      else {
        puStack_3d8 = (undefined1 *)0x0;
LAB_1095417e0:
        if (0 < param_3) {
          lVar17 = lStack_308 * 4;
          lStack_388 = uStack_370 * (lVar17 + 4);
          lStack_330 = lStack_308 * 0x30 + 0x30;
          lVar10 = 0;
          lStack_3b0 = param_3;
          uStack_380 = param_2;
          puStack_310 = puVar14;
          do {
            lStack_390 = lVar10 + lStack_398;
            lVar12 = lStack_390;
            if (lStack_3b0 <= lStack_390) {
              lVar12 = lStack_3b0;
            }
            lVar12 = lVar12 - lVar10;
            lStack_2d0 = lStack_3a8 + lVar10 * 4;
            lStack_2c8 = lStack_3a0;
            FUN_1093db31c(&uStack_2e2,puStack_358,&lStack_2d0,lVar12,param_2,0,0);
            if (0 < (long)param_2) {
              lStack_368 = lStack_3b8 + lVar10 * 4;
              lStack_338 = lStack_360;
              uVar11 = 0;
              lStack_300 = lVar12;
              do {
                uVar5 = uVar11 + uStack_370;
                uVar1 = uVar5;
                if ((long)param_2 <= (long)uVar5) {
                  uVar1 = param_2;
                }
                lVar16 = uVar1 - uVar11;
                lStack_2d0 = lStack_368 + uVar11 * lStack_378 * 4;
                lStack_2c8 = lStack_378;
                FUN_1093db8c4(&uStack_2e1,puVar14,&lStack_2d0,lVar12,lVar16,0,0);
                lVar10 = lVar16;
                uStack_350 = uVar5;
                uStack_348 = uVar1;
                uStack_340 = uVar11;
                if (0 < lVar16) {
                  lVar12 = 0;
                  lStack_318 = lStack_360 + uVar11 * lStack_308 * 4 + uVar11 * 4;
                  puStack_320 = puStack_358 + uVar11 * lStack_300 * 4;
                  lVar8 = lStack_338;
                  lStack_328 = lVar16;
                  do {
                    lVar7 = lStack_300;
                    lVar10 = lVar16;
                    if (lVar16 < 2) {
                      lVar10 = 1;
                    }
                    if (0xb < lVar10) {
                      lVar10 = 0xc;
                    }
                    lVar13 = lStack_328 - lVar12;
                    lVar9 = lVar13;
                    if (0xb < lVar13) {
                      lVar9 = 0xc;
                    }
                    lVar15 = lVar12 * lStack_300;
                    puVar14 = puStack_320 + lVar15 * 4;
                    plStack_2e0 = (long *)(lStack_318 + lVar12 * lStack_308 * 4);
                    lStack_2d8 = lStack_308;
                    lStack_2f8 = lVar16;
                    lStack_2f0 = lVar8;
                    *(undefined8 *)(puVar4 + -0x18) = 0;
                    *(undefined8 *)(puVar4 + -0x10) = 0;
                    *(undefined8 *)(puVar4 + -0x20) = 0xffffffffffffffff;
                    puVar3 = puStack_310;
                    FUN_1093dc118(param_1,&uStack_81,&plStack_2e0,puStack_310,puVar14,lVar12,lVar7,
                                  lVar9,0xffffffffffffffff);
                    _bzero(&lStack_2d0,0x240);
                    plStack_2e0 = &lStack_2d0;
                    lStack_2d8 = 0xc;
                    *(undefined8 *)(puVar4 + -0x18) = 0;
                    *(undefined8 *)(puVar4 + -0x10) = 0;
                    *(undefined8 *)(puVar4 + -0x20) = 0xffffffffffffffff;
                    FUN_1093dc118(param_1,&uStack_82,&plStack_2e0,puVar3 + lVar15 * 4,puVar14,lVar9,
                                  lVar7,lVar9,0xffffffffffffffff);
                    if (0 < lVar13) {
                      lVar16 = 0;
                      plVar6 = &lStack_2d0;
                      lVar8 = 1;
                      lVar7 = lStack_2f0;
                      do {
                        lVar9 = 0;
                        do {
                          *(float *)(lVar7 + lVar9 * 4) =
                               *(float *)((long)plVar6 + lVar9 * 4) + *(float *)(lVar7 + lVar9 * 4);
                          lVar9 = lVar9 + 1;
                        } while (lVar8 != lVar9);
                        lVar16 = lVar16 + 1;
                        lVar8 = lVar8 + 1;
                        lVar7 = lVar7 + lVar17;
                        plVar6 = plVar6 + 6;
                      } while (lVar16 != lVar10);
                    }
                    lVar12 = lVar12 + 0xc;
                    lVar16 = lStack_2f8 + -0xc;
                    lVar8 = lStack_2f0 + lStack_330;
                    lVar10 = lStack_328;
                  } while (lVar12 < lStack_328);
                }
                lVar12 = lStack_300;
                param_2 = uStack_380;
                lStack_2d0 = lStack_360 + uStack_348 * lStack_308 * 4 + uStack_340 * 4;
                lStack_2c8 = lStack_308;
                lVar16 = uStack_380 - uStack_348;
                puVar3 = puStack_358 + uStack_348 * lStack_300 * 4;
                *(undefined8 *)(puVar4 + -0x18) = 0;
                *(undefined8 *)(puVar4 + -0x10) = 0;
                *(undefined8 *)(puVar4 + -0x20) = 0xffffffffffffffff;
                puVar14 = puStack_310;
                FUN_1093dc118(param_1,&uStack_2e3,&lStack_2d0,puStack_310,puVar3,lVar10,lVar12,
                              lVar16,0xffffffffffffffff);
                lStack_338 = lStack_338 + lStack_388;
                uVar11 = uStack_350;
              } while ((long)uStack_350 < (long)param_2);
            }
            lVar10 = lStack_390;
          } while (lStack_390 < lStack_3b0);
        }
        if (0x8000 < uStack_3c8) {
          _free(puStack_3d8);
        }
        if (0x8000 < uStack_3c0) {
          _free(puStack_3d0);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109541bc8;
    }
  }
  else {
LAB_109541b60:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109541bc8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109541bcc);
  (*pcVar2)();
}



/* Entry: 109541c1c; end: 109541d67;  */

undefined8 FUN_109541c1c(undefined8 param_1,undefined8 *param_2,float *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  ulong unaff_x19;
  float *unaff_x21;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  float afStack_70 [2];
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float *pfStack_50;
  long lStack_48;
  
  uVar14 = (undefined4)((ulong)param_1 >> 0x20);
  uVar12 = (undefined4)param_1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    if (param_3 == (float *)0x0) {
      param_3 = (float *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        param_3 = (float *)((long)afStack_70 - ((long)param_3 + 0x1eU & 0xfffffffffffffff0));
        unaff_x21 = param_3;
      }
      else {
        _malloc();
        unaff_x21 = param_3;
        if (param_3 == (float *)0x0) goto LAB_109541d28;
      }
    }
    else {
      unaff_x21 = (float *)0x0;
    }
    pfVar4 = (float *)param_2[1];
    pfVar5 = (float *)param_2[2];
    uStack_58 = *param_2;
    uStack_60 = 1;
    puVar6 = &uStack_58;
    pfStack_68 = param_3;
    pfStack_50 = pfVar5;
    FUN_1093c55d4(uVar12);
    if (0x8000 < param_4) {
      pfVar4 = unaff_x21;
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return CONCAT44(uVar14,uVar12);
    }
  }
  else {
LAB_109541d28:
    pfVar4 = (float *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pfVar5 = (float *)PTR___ZTISt9bad_alloc_110346a68;
    puVar6 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x21);
  }
  __Unwind_Resume();
  puVar1 = (undefined8 *)((long)puVar6 + 3);
  puVar3 = (undefined8 *)((long)puVar6 + 7);
  if (-1 < (long)puVar6) {
    puVar1 = puVar6;
    puVar3 = puVar6;
  }
  if ((undefined *)((long)puVar6 + 3U) < (undefined *)0x7) {
    fVar13 = *pfVar4 * *pfVar5;
    fVar15 = 0.0;
    if (1 < (long)puVar6) {
      puVar7 = (undefined *)((long)puVar6 + -1);
      do {
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
        fVar13 = fVar13 + *pfVar4 * *pfVar5;
        fVar15 = 0.0;
        puVar7 = puVar7 + -1;
      } while (puVar7 != (undefined *)0x0);
    }
  }
  else {
    fVar15 = (float)*(undefined8 *)pfVar4 * *pfVar5;
    fVar16 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * pfVar5[1];
    fVar13 = (float)*(undefined8 *)(pfVar4 + 2) * pfVar5[2];
    fVar17 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * pfVar5[3];
    if (7 < (long)puVar6) {
      uVar8 = (ulong)puVar3 & 0xfffffffffffffff8;
      fVar18 = pfVar4[4] * (float)*(undefined8 *)(pfVar5 + 4);
      fVar20 = pfVar4[5] * (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
      fVar21 = pfVar4[6] * (float)*(undefined8 *)(pfVar5 + 6);
      fVar22 = pfVar4[7] * (float)((ulong)*(undefined8 *)(pfVar5 + 6) >> 0x20);
      if ((undefined8 *)0xf < puVar6) {
        pfVar9 = pfVar5 + 0xc;
        pfVar10 = pfVar4 + 0xc;
        lVar11 = 8;
        do {
          fVar15 = fVar15 + (float)*(undefined8 *)(pfVar10 + -4) *
                            (float)*(undefined8 *)(pfVar9 + -4);
          fVar16 = fVar16 + (float)((ulong)*(undefined8 *)(pfVar10 + -4) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20);
          fVar13 = fVar13 + (float)*(undefined8 *)(pfVar10 + -2) *
                            (float)*(undefined8 *)(pfVar9 + -2);
          fVar17 = fVar17 + (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
          fVar18 = fVar18 + (float)*(undefined8 *)pfVar10 * (float)*(undefined8 *)pfVar9;
          fVar20 = fVar20 + (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) *
                            (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          fVar21 = fVar21 + (float)*(undefined8 *)(pfVar10 + 2) * (float)*(undefined8 *)(pfVar9 + 2)
          ;
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          lVar11 = lVar11 + 8;
          pfVar9 = pfVar9 + 8;
          pfVar10 = pfVar10 + 8;
        } while (lVar11 < (long)uVar8);
      }
      fVar15 = fVar18 + fVar15;
      fVar16 = fVar20 + fVar16;
      fVar13 = fVar21 + fVar13;
      fVar17 = fVar22 + fVar17;
      if ((long)uVar8 < (long)((ulong)puVar1 & 0xfffffffffffffffc)) {
        pfVar9 = pfVar4 + uVar8;
        uVar24 = *(undefined8 *)(pfVar5 + uVar8 + 2);
        uVar23 = *(undefined8 *)(pfVar5 + uVar8);
        fVar15 = fVar15 + *pfVar9 * (float)uVar23;
        fVar16 = fVar16 + pfVar9[1] * (float)((ulong)uVar23 >> 0x20);
        fVar13 = fVar13 + pfVar9[2] * (float)uVar24;
        fVar17 = fVar17 + pfVar9[3] * (float)((ulong)uVar24 >> 0x20);
      }
    }
    auVar19._4_4_ = fVar16;
    auVar19._0_4_ = fVar15;
    auVar19._8_4_ = fVar13;
    auVar19._12_4_ = fVar17;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar15;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar17;
    auVar19 = NEON_ext(auVar19,auVar2,8,1);
    fVar15 = fVar15 + auVar19._0_4_;
    fVar16 = fVar16 + auVar19._4_4_;
    fVar13 = fVar15 + fVar16;
    fVar15 = fVar15 + fVar16;
    lVar11 = (long)puVar6 % 4;
    if (lVar11 != 0 && lVar11 < 0 == SBORROW8((long)puVar6,(ulong)puVar1 & 0xfffffffffffffffc)) {
      pfVar5 = pfVar5 + ((long)puVar1 >> 2) * 4;
      pfVar4 = pfVar4 + ((long)puVar1 >> 2) * 4;
      do {
        fVar13 = fVar13 + *pfVar4 * *pfVar5;
        fVar15 = 0.0;
        lVar11 = lVar11 + -1;
        pfVar5 = pfVar5 + 1;
        pfVar4 = pfVar4 + 1;
      } while (lVar11 != 0);
    }
  }
  return CONCAT44(fVar15,fVar13);
}



/* Entry: 109541d68; end: 109541e83;  */

undefined8 FUN_109541d68(float *param_1,float *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = param_3 + 3;
  uVar5 = param_3 + 7;
  if (-1 < (long)param_3) {
    uVar1 = param_3;
    uVar5 = param_3;
  }
  if (param_3 + 3 < 7) {
    fVar7 = *param_1 * *param_2;
    fVar8 = 0.0;
    if (1 < (long)param_3) {
      lVar3 = param_3 - 1;
      do {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        fVar7 = fVar7 + *param_1 * *param_2;
        fVar8 = 0.0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    fVar8 = (float)*(undefined8 *)param_1 * *param_2;
    fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) * param_2[1];
    fVar7 = (float)*(undefined8 *)(param_1 + 2) * param_2[2];
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) * param_2[3];
    if (7 < (long)param_3) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      fVar11 = param_1[4] * (float)*(undefined8 *)(param_2 + 4);
      fVar13 = param_1[5] * (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar14 = param_1[6] * (float)*(undefined8 *)(param_2 + 6);
      fVar15 = param_1[7] * (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      if (0xf < param_3) {
        pfVar4 = param_2 + 0xc;
        pfVar6 = param_1 + 0xc;
        lVar3 = 8;
        do {
          fVar8 = fVar8 + (float)*(undefined8 *)(pfVar6 + -4) * (float)*(undefined8 *)(pfVar4 + -4);
          fVar9 = fVar9 + (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(pfVar4 + -4) >> 0x20);
          fVar7 = fVar7 + (float)*(undefined8 *)(pfVar6 + -2) * (float)*(undefined8 *)(pfVar4 + -2);
          fVar10 = fVar10 + (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20);
          fVar11 = fVar11 + (float)*(undefined8 *)pfVar6 * (float)*(undefined8 *)pfVar4;
          fVar13 = fVar13 + (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) *
                            (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
          fVar14 = fVar14 + (float)*(undefined8 *)(pfVar6 + 2) * (float)*(undefined8 *)(pfVar4 + 2);
          fVar15 = fVar15 + (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
          lVar3 = lVar3 + 8;
          pfVar4 = pfVar4 + 8;
          pfVar6 = pfVar6 + 8;
        } while (lVar3 < (long)uVar5);
      }
      fVar8 = fVar11 + fVar8;
      fVar9 = fVar13 + fVar9;
      fVar7 = fVar14 + fVar7;
      fVar10 = fVar15 + fVar10;
      if ((long)uVar5 < (long)(uVar1 & 0xfffffffffffffffc)) {
        pfVar4 = param_1 + uVar5;
        uVar17 = *(undefined8 *)(param_2 + uVar5 + 2);
        uVar16 = *(undefined8 *)(param_2 + uVar5);
        fVar8 = fVar8 + *pfVar4 * (float)uVar16;
        fVar9 = fVar9 + pfVar4[1] * (float)((ulong)uVar16 >> 0x20);
        fVar7 = fVar7 + pfVar4[2] * (float)uVar17;
        fVar10 = fVar10 + pfVar4[3] * (float)((ulong)uVar17 >> 0x20);
      }
    }
    auVar12._4_4_ = fVar9;
    auVar12._0_4_ = fVar8;
    auVar12._8_4_ = fVar7;
    auVar12._12_4_ = fVar10;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar7;
    auVar2._12_4_ = fVar10;
    auVar12 = NEON_ext(auVar12,auVar2,8,1);
    fVar8 = fVar8 + auVar12._0_4_;
    fVar9 = fVar9 + auVar12._4_4_;
    fVar7 = fVar8 + fVar9;
    fVar8 = fVar8 + fVar9;
    lVar3 = (long)param_3 % 4;
    if (lVar3 != 0 && lVar3 < 0 == SBORROW8(param_3,uVar1 & 0xfffffffffffffffc)) {
      pfVar4 = param_2 + ((long)uVar1 >> 2) * 4;
      pfVar6 = param_1 + ((long)uVar1 >> 2) * 4;
      do {
        fVar7 = fVar7 + *pfVar6 * *pfVar4;
        fVar8 = 0.0;
        lVar3 = lVar3 + -1;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      } while (lVar3 != 0);
    }
  }
  return CONCAT44(fVar8,fVar7);
}



/* Entry: 109541e84; end: 109541fdb;  */

void FUN_109541e84(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,ulong param_4,
                  undefined1 **param_5,undefined1 **param_6,undefined1 *param_7,long *param_8)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong unaff_x19;
  ulong uVar19;
  long lVar20;
  undefined1 **unaff_x21;
  undefined1 *puVar21;
  long lVar22;
  undefined1 *unaff_x22;
  long lVar23;
  undefined1 **ppuVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *puVar25;
  long lVar26;
  undefined8 unaff_x26;
  long lVar27;
  float *pfVar28;
  undefined8 unaff_x27;
  long lVar29;
  undefined1 *puVar30;
  undefined8 unaff_x28;
  float fVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar25 = auStack_80;
  puVar5 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = param_5;
  ppuVar6 = param_6;
  if (param_4 >> 0x3e == 0) {
    unaff_x19 = param_4;
    unaff_x21 = param_6;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (param_3 == (undefined1 *)0x0) {
      param_3 = (undefined1 *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar25 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        param_3 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        unaff_x22 = param_3;
      }
      else {
        _malloc();
        unaff_x22 = param_3;
        if (param_3 == (undefined1 *)0x0) goto LAB_109541f9c;
      }
    }
    else {
      puVar25 = auStack_80;
      unaff_x22 = (undefined1 *)0x0;
    }
    puVar9 = (undefined1 *)param_2[1];
    puVar15 = (undefined *)param_2[2];
    puStack_68 = (undefined1 *)*param_2;
    uStack_70 = 1;
    param_7 = param_6[1];
    ppuVar6 = &puStack_68;
    ppuVar24 = &puStack_78;
    puStack_78 = param_3;
    puStack_60 = puVar15;
    FUN_1093c55d4(param_1);
    if (0x8000 < param_4) {
      puVar9 = unaff_x22;
      _free();
    }
    puVar5 = puVar25;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
LAB_109541f9c:
    param_5 = ppuVar6;
    puVar9 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar15 = PTR___ZTISt9bad_alloc_110346a68;
    ppuVar6 = (undefined1 **)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x22);
  }
  puVar10 = puVar9;
  __Unwind_Resume();
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar5 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 ***)(puVar5 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar5 + -0x20) = puVar9;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar5 + -8) = FUN_109541fdc;
  puVar9 = puVar5 + -0x1a0;
  *(undefined1 **)(puVar5 + -0xa0) = param_7;
  *(undefined1 ***)(puVar5 + -0x140) = param_5;
  *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = (undefined1 *)param_8[4];
  puVar7 = (undefined *)param_8[2];
  *(undefined **)(puVar5 + -0x118) = puVar7;
  if ((long)puVar15 <= (long)puVar7) {
    puVar7 = puVar15;
  }
  uVar19 = (long)puVar7 * (long)puVar25;
  if (uVar19 >> 0x3e == 0) {
    lVar8 = *param_8;
    *(long *)(puVar5 + -0xa8) = lVar8;
    if (lVar8 == 0) {
      lVar8 = uVar19 * 4;
      if (uVar19 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar9 = puVar5 + (-0x1a0 - (lVar8 + 0x1eU & 0xfffffffffffffff0));
        *(undefined1 **)(puVar5 + -0x198) = puVar9;
        *(undefined1 **)(puVar5 + -0xa8) = puVar9;
      }
      else {
        _malloc();
        *(long *)(puVar5 + -0xa8) = lVar8;
        *(long *)(puVar5 + -0x198) = lVar8;
        if (lVar8 == 0) goto LAB_109542674;
      }
    }
    else {
      *(undefined8 *)(puVar5 + -0x198) = 0;
      puVar9 = puVar5 + -0x1a0;
    }
    uVar11 = (long)puVar25 * (long)puVar10;
    if (uVar11 >> 0x3e == 0) {
      lVar8 = param_8[1];
      *(long *)(puVar5 + -0xe0) = lVar8;
      *(ulong *)(puVar5 + -0x188) = uVar19;
      *(ulong *)(puVar5 + -400) = uVar11;
      if (lVar8 == 0) {
        lVar8 = uVar11 * 4;
        if (uVar11 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar9 = puVar9 + -(lVar8 + 0x1eU & 0xfffffffffffffff0);
          *(undefined1 **)(puVar5 + -0x1a0) = puVar9;
          *(undefined1 **)(puVar5 + -0xe0) = puVar9;
          goto LAB_109542158;
        }
        _malloc();
        *(long *)(puVar5 + -0xe0) = lVar8;
        *(long *)(puVar5 + -0x1a0) = lVar8;
        if (lVar8 != 0) goto LAB_109542158;
      }
      else {
        *(undefined8 *)(puVar5 + -0x1a0) = 0;
LAB_109542158:
        if (0 < (long)puVar10) {
          puVar21 = (undefined1 *)0x0;
          *(long *)(puVar5 + -0x178) = (long)puVar25 * ((long)ppuVar24 * 4 + 4);
          *(long *)(puVar5 + -0x110) = (long)ppuVar24 * 0x30;
          lVar8 = *(long *)(puVar5 + -0xa0);
          *(long *)(puVar5 + -0x180) = (long)puVar25 * lVar8 * 4;
          *(long *)(puVar5 + -0x128) = (long)puVar7 << 2;
          *(long *)(puVar5 + -0xd0) = lVar8 * 0x30;
          *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0x140);
          *(undefined1 ***)(puVar5 + -0x150) = ppuVar6;
          *(undefined1 ***)(puVar5 + -200) = ppuVar24;
          *(undefined **)(puVar5 + -0x120) = puVar15;
          *(undefined1 **)(puVar5 + -0x168) = puVar10;
          *(undefined1 **)(puVar5 + -0x170) = puVar25;
          *(undefined **)(puVar5 + -0x108) = puVar7;
          puVar30 = puVar10;
          do {
            puVar1 = puVar25;
            if ((long)puVar30 <= (long)puVar25) {
              puVar1 = puVar30;
            }
            *(undefined1 **)(puVar5 + -0x130) = puVar1;
            puVar10 = puVar10 + -(long)puVar21;
            if ((long)puVar10 <= (long)puVar25) {
              puVar25 = puVar10;
            }
            puVar1 = puVar25 + (long)puVar21;
            *(long *)(puVar5 + -0x138) =
                 *(long *)(puVar5 + -0xe0) + (long)puVar25 * (long)puVar25 * 4;
            *(long *)(puVar5 + -0x100) = (long)puVar10 - (long)puVar25;
            *(undefined1 **)(puVar5 + -0xd8) = puVar25;
            if (0 < (long)puVar10 - (long)puVar25) {
              *(undefined **)(puVar5 + -0x98) =
                   (undefined *)
                   ((long)ppuVar6 + (long)puVar21 * 4 + (long)puVar1 * (long)ppuVar24 * 4);
              *(undefined1 ***)(puVar5 + -0x90) = ppuVar24;
              FUN_1093db31c(puVar5 + -0x82,*(undefined8 *)(puVar5 + -0x138),puVar5 + -0x98,puVar25,
                            *(undefined8 *)(puVar5 + -0x100),0,0);
              puVar25 = *(undefined1 **)(puVar5 + -0xd8);
            }
            *(undefined1 **)(puVar5 + -0x160) = puVar30;
            *(undefined1 **)(puVar5 + -0xc0) = puVar21;
            if (0 < (long)puVar25) {
              lVar22 = 0;
              lVar29 = *(long *)(puVar5 + -0x130);
              lVar20 = lVar29 * 0x30;
              lVar26 = *(long *)(puVar5 + -0xe0);
              lVar27 = *(long *)(puVar5 + -0x150);
              do {
                if (lVar22 != 0) {
                  lVar23 = lVar29;
                  if (0xb < lVar29) {
                    lVar23 = 0xc;
                  }
                  *(long *)(puVar5 + -0x98) = lVar27;
                  *(undefined1 ***)(puVar5 + -0x90) = ppuVar24;
                  FUN_109542750(lVar26,puVar5 + -0x98,lVar22,lVar23,puVar25);
                  puVar25 = *(undefined1 **)(puVar5 + -0xd8);
                }
                lVar22 = lVar22 + 0xc;
                lVar29 = lVar29 + -0xc;
                lVar27 = lVar27 + *(long *)(puVar5 + -0x110);
                lVar26 = lVar26 + lVar20;
              } while (lVar22 < (long)puVar25);
            }
            lVar22 = *(long *)(puVar5 + -0x108);
            puVar7 = puVar15;
            if (0 < (long)puVar15) {
              lVar27 = 0;
              *(long *)(puVar5 + -0x148) =
                   *(long *)(puVar5 + -0x140) + (long)puVar1 * *(long *)(puVar5 + -0xa0) * 4;
              *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0x158);
              do {
                puVar3 = *(undefined **)(puVar5 + -0x118);
                if ((long)puVar7 <= (long)*(undefined **)(puVar5 + -0x118)) {
                  puVar3 = puVar7;
                }
                *(undefined **)(puVar5 + -0xf8) = puVar15;
                *(long *)(puVar5 + -0xf0) = lVar27;
                if ((long)puVar15 <= (long)puVar3) {
                  puVar3 = puVar15;
                }
                lVar26 = (long)puVar7 - lVar27;
                if (lVar22 <= (long)puVar7 - lVar27) {
                  lVar26 = lVar22;
                }
                if (0 < (long)puVar25) {
                  lVar22 = 0;
                  pfVar28 = *(float **)(puVar5 + -0xe8);
                  lVar27 = *(long *)(puVar5 + -0x130);
                  *(long *)(puVar5 + -0xb0) =
                       *(long *)(puVar5 + -0x140) + *(long *)(puVar5 + -0xf0) * 4;
                  do {
                    lVar20 = lVar27;
                    if (lVar27 < 2) {
                      lVar20 = 1;
                    }
                    if (0xb < lVar20) {
                      lVar20 = 0xc;
                    }
                    lVar23 = (long)puVar25 - lVar22;
                    lVar29 = lVar23;
                    if (0xb < lVar23) {
                      lVar29 = 0xc;
                    }
                    lVar2 = lVar22 + *(long *)(puVar5 + -0xc0);
                    if (lVar22 != 0) {
                      *(long *)(puVar5 + -0xb8) = lVar27;
                      *(long *)(puVar5 + -0x98) =
                           *(long *)(puVar5 + -0xb0) + lVar2 * *(long *)(puVar5 + -0xa0) * 4;
                      *(long *)(puVar5 + -0x90) = *(long *)(puVar5 + -0xa0);
                      lVar27 = *(long *)(puVar5 + -0xe0);
                      *(undefined8 *)(puVar9 + -0x18) = 0;
                      *(undefined8 *)(puVar9 + -0x10) = 0;
                      *(undefined1 **)(puVar9 + -0x20) = puVar25;
                      FUN_1093dc118(0xbf800000,puVar5 + -0x81,puVar5 + -0x98,
                                    *(undefined8 *)(puVar5 + -0xa8),
                                    lVar27 + lVar22 * (long)puVar25 * 4,lVar26,lVar22,lVar29,puVar25
                                   );
                      puVar25 = *(undefined1 **)(puVar5 + -0xd8);
                      lVar27 = *(long *)(puVar5 + -0xb8);
                    }
                    ppuVar24 = *(undefined1 ***)(puVar5 + -200);
                    if (0 < lVar23) {
                      lVar23 = 0;
                      pfVar12 = pfVar28;
                      do {
                        lVar13 = (lVar23 + lVar2) * (long)ppuVar24;
                        if (lVar23 != 0) {
                          lVar14 = 0;
                          pfVar16 = pfVar28;
                          do {
                            if (0 < lVar26) {
                              fVar31 = *(float *)((long)ppuVar6 + (lVar14 + lVar2) * 4 + lVar13 * 4)
                              ;
                              pfVar17 = pfVar16;
                              pfVar18 = pfVar12;
                              puVar15 = puVar3;
                              do {
                                *pfVar18 = *pfVar18 - fVar31 * *pfVar17;
                                puVar15 = puVar15 + -1;
                                pfVar17 = pfVar17 + 1;
                                pfVar18 = pfVar18 + 1;
                              } while (puVar15 != (undefined *)0x0);
                            }
                            lVar14 = lVar14 + 1;
                            pfVar16 = pfVar16 + lVar8;
                          } while (lVar14 != lVar23);
                        }
                        if (0 < lVar26) {
                          puVar15 = (undefined *)0x0;
                          fVar31 = *(float *)((long)ppuVar6 + (lVar23 + lVar2) * 4 + lVar13 * 4);
                          do {
                            pfVar12[(long)puVar15] = (1.0 / fVar31) * pfVar12[(long)puVar15];
                            puVar15 = puVar15 + 1;
                          } while (puVar3 != puVar15);
                        }
                        lVar23 = lVar23 + 1;
                        pfVar12 = pfVar12 + lVar8;
                      } while (lVar23 != lVar20);
                    }
                    FUN_109542938(*(undefined8 *)(puVar5 + -0xa8),
                                  *(long *)(puVar5 + -0xb0) + lVar2 * *(long *)(puVar5 + -0xa0) * 4,
                                  *(long *)(puVar5 + -0xa0),lVar29,lVar26,puVar25,lVar22);
                    lVar22 = lVar22 + 0xc;
                    lVar27 = lVar27 + -0xc;
                    pfVar28 = (float *)((long)pfVar28 + *(long *)(puVar5 + -0xd0));
                  } while (lVar22 < (long)puVar25);
                }
                lVar22 = *(long *)(puVar5 + -0x108);
                puVar7 = *(undefined **)(puVar5 + -0x120);
                lVar27 = *(long *)(puVar5 + -0xf0);
                if (0 < *(long *)(puVar5 + -0x100)) {
                  *(long *)(puVar5 + -0x98) = *(long *)(puVar5 + -0x148) + lVar27 * 4;
                  *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0xa0);
                  *(undefined8 *)(puVar9 + -0x18) = 0;
                  *(undefined8 *)(puVar9 + -0x10) = 0;
                  *(undefined8 *)(puVar9 + -0x20) = 0xffffffffffffffff;
                  FUN_1093dc118(0xbf800000,puVar5 + -0x81,puVar5 + -0x98,
                                *(undefined8 *)(puVar5 + -0xa8),*(undefined8 *)(puVar5 + -0x138),
                                lVar26,puVar25,*(undefined8 *)(puVar5 + -0x100),0xffffffffffffffff);
                  puVar25 = *(undefined1 **)(puVar5 + -0xd8);
                }
                lVar27 = lVar27 + lVar22;
                puVar15 = (undefined *)(*(long *)(puVar5 + -0xf8) - lVar22);
                *(long *)(puVar5 + -0xe8) = *(long *)(puVar5 + -0xe8) + *(long *)(puVar5 + -0x128);
              } while (lVar27 < (long)puVar7);
            }
            puVar25 = *(undefined1 **)(puVar5 + -0x170);
            puVar21 = puVar25 + *(long *)(puVar5 + -0xc0);
            puVar30 = (undefined1 *)(*(long *)(puVar5 + -0x160) - (long)puVar25);
            *(long *)(puVar5 + -0x150) = *(long *)(puVar5 + -0x150) + *(long *)(puVar5 + -0x178);
            *(long *)(puVar5 + -0x158) = *(long *)(puVar5 + -0x158) + *(long *)(puVar5 + -0x180);
            puVar10 = *(undefined1 **)(puVar5 + -0x168);
            puVar15 = puVar7;
          } while ((long)puVar21 < (long)puVar10);
        }
        if (0x8000 < *(ulong *)(puVar5 + -400)) {
          _free(*(undefined8 *)(puVar5 + -0x1a0));
        }
        if (0x8000 < *(ulong *)(puVar5 + -0x188)) {
          _free(*(undefined8 *)(puVar5 + -0x198));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x80)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1095426e0;
    }
  }
  else {
LAB_109542674:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1095426e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095426e4);
  (*pcVar4)();
}



/* Entry: 109541fdc; end: 10954274f;  */

void FUN_109541fdc(long param_1,long param_2,float *param_3,long param_4,float *param_5,long param_6
                  ,long *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  float fVar24;
  undefined1 *puStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  float *pfStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  float *pfStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  float *pfStack_b0;
  long lStack_a8;
  long lStack_a0;
  float *pfStack_98;
  long lStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  
  ppuVar7 = &puStack_1a0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = param_7[4];
  lStack_118 = param_7[2];
  lVar19 = lStack_118;
  if (param_2 <= lStack_118) {
    lVar19 = param_2;
  }
  uVar16 = lVar19 * lVar21;
  pfStack_140 = param_5;
  lStack_a0 = param_6;
  if (uVar16 >> 0x3e == 0) {
    lStack_a8 = *param_7;
    if (lStack_a8 == 0) {
      lVar5 = uVar16 * 4;
      if (uVar16 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar5 = -(lVar5 + 0x1eU & 0xfffffffffffffff0);
        ppuVar7 = (undefined1 **)((long)&puStack_1a0 + lVar5);
        lStack_198 = (long)&puStack_1a0 + lVar5;
        lStack_a8 = lStack_198;
      }
      else {
        _malloc();
        lStack_198 = lVar5;
        lStack_a8 = lVar5;
        if (lVar5 == 0) goto LAB_109542674;
      }
    }
    else {
      lStack_198 = 0;
      ppuVar7 = &puStack_1a0;
    }
    uVar8 = lVar21 * param_1;
    if (uVar8 >> 0x3e == 0) {
      puStack_e0 = (undefined1 *)param_7[1];
      uStack_190 = uVar8;
      uStack_188 = uVar16;
      if (puStack_e0 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(uVar8 * 4);
        if (uVar8 < 0x8001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar7 = (undefined1 **)((long)ppuVar7 + -((ulong)(puVar6 + 0x1e) & 0xfffffffffffffff0));
          puStack_1a0 = (undefined1 *)ppuVar7;
          puStack_e0 = (undefined1 *)ppuVar7;
          goto LAB_109542158;
        }
        _malloc();
        puStack_1a0 = puVar6;
        puStack_e0 = puVar6;
        if (puVar6 != (undefined1 *)0x0) goto LAB_109542158;
      }
      else {
        puStack_1a0 = (undefined1 *)0x0;
LAB_109542158:
        lVar5 = lStack_a0;
        if (0 < param_1) {
          lVar18 = 0;
          lStack_178 = lVar21 * (param_4 * 4 + 4);
          lStack_110 = param_4 * 0x30;
          lStack_180 = lVar21 * lStack_a0 * 4;
          lStack_128 = lVar19 << 2;
          lStack_d0 = lStack_a0 * 0x30;
          pfStack_158 = pfStack_140;
          lStack_170 = lVar21;
          lStack_168 = param_1;
          pfStack_150 = param_3;
          lStack_120 = param_2;
          lStack_108 = lVar19;
          lStack_c8 = param_4;
          do {
            lStack_130 = lStack_170;
            if (param_1 <= lStack_170) {
              lStack_130 = param_1;
            }
            lStack_100 = lStack_168 - lVar18;
            lStack_d8 = lStack_170;
            if (lStack_100 <= lStack_170) {
              lStack_d8 = lStack_100;
            }
            lVar19 = lStack_d8 + lVar18;
            lStack_100 = lStack_100 - lStack_d8;
            puStack_138 = puStack_e0 + lStack_d8 * lStack_d8 * 4;
            if (0 < lStack_100) {
              pfStack_98 = param_3 + lVar19 * param_4 + lVar18;
              lStack_90 = param_4;
              FUN_1093db31c(&uStack_82,puStack_138,&pfStack_98,lStack_d8,lStack_100,0,0);
            }
            lVar21 = lStack_d8;
            lStack_160 = param_1;
            lStack_c0 = lVar18;
            if (0 < lStack_d8) {
              lVar18 = 0;
              lVar17 = lStack_130 * 0x30;
              puVar6 = puStack_e0;
              pfVar22 = pfStack_150;
              lVar23 = lStack_130;
              do {
                if (lVar18 != 0) {
                  lVar2 = lVar23;
                  if (0xb < lVar23) {
                    lVar2 = 0xc;
                  }
                  pfStack_98 = pfVar22;
                  lStack_90 = param_4;
                  FUN_109542750(puVar6,&pfStack_98,lVar18,lVar2,lVar21);
                  lVar21 = lStack_d8;
                }
                lVar18 = lVar18 + 0xc;
                lVar23 = lVar23 + -0xc;
                pfVar22 = (float *)((long)pfVar22 + lStack_110);
                puVar6 = puVar6 + lVar17;
              } while (lVar18 < lVar21);
            }
            lVar23 = param_2;
            if (0 < param_2) {
              lVar18 = 0;
              pfStack_148 = pfStack_140 + lVar19 * lStack_a0;
              pfStack_e8 = pfStack_158;
              lVar19 = lStack_108;
              do {
                lVar17 = lStack_118;
                if (lVar23 <= lStack_118) {
                  lVar17 = lVar23;
                }
                if (param_2 <= lVar17) {
                  lVar17 = param_2;
                }
                lVar2 = lVar23 - lVar18;
                if (lVar19 <= lVar23 - lVar18) {
                  lVar2 = lVar19;
                }
                lStack_f8 = param_2;
                lStack_f0 = lVar18;
                if (0 < lVar21) {
                  lVar19 = 0;
                  pfStack_b0 = pfStack_140 + lVar18;
                  lVar18 = lStack_130;
                  pfVar22 = pfStack_e8;
                  do {
                    lVar23 = lVar18;
                    if (lVar18 < 2) {
                      lVar23 = 1;
                    }
                    if (0xb < lVar23) {
                      lVar23 = 0xc;
                    }
                    lVar20 = lVar21 - lVar19;
                    lVar3 = lVar20;
                    if (0xb < lVar20) {
                      lVar3 = 0xc;
                    }
                    lVar1 = lVar19 + lStack_c0;
                    if (lVar19 != 0) {
                      pfStack_98 = pfStack_b0 + lVar1 * lStack_a0;
                      lStack_90 = lStack_a0;
                      puVar6 = puStack_e0 + lVar19 * lVar21 * 4;
                      lStack_b8 = lVar18;
                      *(undefined8 *)((long)ppuVar7 + -0x18) = 0;
                      *(undefined8 *)((long)ppuVar7 + -0x10) = 0;
                      *(long *)((long)ppuVar7 + -0x20) = lVar21;
                      FUN_1093dc118(0xbf800000,&uStack_81,&pfStack_98,lStack_a8,puVar6,lVar2,lVar19,
                                    lVar3,lVar21);
                      lVar21 = lStack_d8;
                      lVar18 = lStack_b8;
                    }
                    param_4 = lStack_c8;
                    if (0 < lVar20) {
                      lVar20 = 0;
                      pfVar9 = pfVar22;
                      do {
                        lVar10 = (lVar20 + lVar1) * lStack_c8;
                        if (lVar20 != 0) {
                          lVar11 = 0;
                          pfVar12 = pfVar22;
                          do {
                            if (0 < lVar2) {
                              fVar24 = param_3[lVar10 + lVar11 + lVar1];
                              pfVar13 = pfVar12;
                              pfVar14 = pfVar9;
                              lVar15 = lVar17;
                              do {
                                *pfVar14 = *pfVar14 - fVar24 * *pfVar13;
                                lVar15 = lVar15 + -1;
                                pfVar13 = pfVar13 + 1;
                                pfVar14 = pfVar14 + 1;
                              } while (lVar15 != 0);
                            }
                            lVar11 = lVar11 + 1;
                            pfVar12 = pfVar12 + lVar5;
                          } while (lVar11 != lVar20);
                        }
                        if (0 < lVar2) {
                          lVar11 = 0;
                          fVar24 = param_3[lVar10 + lVar20 + lVar1];
                          do {
                            pfVar9[lVar11] = (1.0 / fVar24) * pfVar9[lVar11];
                            lVar11 = lVar11 + 1;
                          } while (lVar17 != lVar11);
                        }
                        lVar20 = lVar20 + 1;
                        pfVar9 = pfVar9 + lVar5;
                      } while (lVar20 != lVar23);
                    }
                    FUN_109542938(lStack_a8,pfStack_b0 + lVar1 * lStack_a0,lStack_a0,lVar3,lVar2,
                                  lVar21,lVar19);
                    lVar19 = lVar19 + 0xc;
                    lVar18 = lVar18 + -0xc;
                    pfVar22 = (float *)((long)pfVar22 + lStack_d0);
                  } while (lVar19 < lVar21);
                }
                lVar18 = lStack_f0;
                lVar19 = lStack_108;
                lVar23 = lStack_120;
                if (0 < lStack_100) {
                  pfStack_98 = pfStack_148 + lStack_f0;
                  lStack_90 = lStack_a0;
                  *(undefined8 *)((long)ppuVar7 + -0x18) = 0;
                  *(undefined8 *)((long)ppuVar7 + -0x10) = 0;
                  *(undefined8 *)((long)ppuVar7 + -0x20) = 0xffffffffffffffff;
                  FUN_1093dc118(0xbf800000,&uStack_81,&pfStack_98,lStack_a8,puStack_138,lVar2,lVar21
                                ,lStack_100,0xffffffffffffffff);
                  lVar21 = lStack_d8;
                }
                lVar18 = lVar18 + lVar19;
                param_2 = lStack_f8 - lVar19;
                pfStack_e8 = (float *)((long)pfStack_e8 + lStack_128);
              } while (lVar18 < lVar23);
            }
            lVar18 = lStack_c0 + lStack_170;
            param_1 = lStack_160 - lStack_170;
            pfStack_150 = (float *)((long)pfStack_150 + lStack_178);
            pfStack_158 = (float *)((long)pfStack_158 + lStack_180);
            param_2 = lVar23;
          } while (lVar18 < lStack_168);
        }
        if (0x8000 < uStack_190) {
          _free(puStack_1a0);
        }
        if (0x8000 < uStack_188) {
          _free(lStack_198);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1095426e0;
    }
  }
  else {
LAB_109542674:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1095426e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095426e4);
  (*pcVar4)();
}



/* Entry: 109542750; end: 109542937;  */

void FUN_109542750(long param_1,long *param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [12];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar15 = param_4 + 3;
  if (-1 < (long)param_4) {
    uVar15 = param_4;
  }
  uVar9 = uVar15 & 0xfffffffffffffffc;
  uVar1 = param_3 + 3;
  if (-1 < (long)param_3) {
    uVar1 = param_3;
  }
  if ((long)param_4 < 4) {
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar13 = 0;
    lVar10 = 0;
    lVar16 = 0xc;
    lVar7 = 8;
    lVar8 = 4;
    do {
      lVar2 = *param_2;
      lVar3 = param_2[1];
      if ((long)param_3 < 4) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        puVar18 = (undefined8 *)(lVar2 + lVar3 * lVar16);
        puVar20 = (undefined8 *)(lVar2 + lVar3 * lVar7);
        puVar22 = (undefined8 *)(lVar2 + lVar3 * lVar8);
        pauVar23 = (undefined1 (*) [12])(lVar2 + lVar3 * lVar11);
        puVar12 = (undefined4 *)(param_1 + 0x20 + lVar10 * 4);
        do {
          uVar4 = *(undefined8 *)(*pauVar23 + 8);
          auVar6 = *pauVar23;
          auVar5 = *pauVar23;
          uVar25 = puVar22[1];
          uVar24 = *puVar22;
          uVar27 = puVar20[1];
          uVar26 = *puVar20;
          uVar29 = puVar18[1];
          uVar28 = *puVar18;
          puVar12[-8] = auVar5._0_4_;
          puVar12[-7] = (int)uVar24;
          puVar12[-6] = (int)uVar26;
          puVar12[-5] = (int)uVar28;
          *(ulong *)(puVar12 + -2) =
               CONCAT44((int)((ulong)uVar28 >> 0x20),(int)((ulong)uVar26 >> 0x20));
          *(ulong *)(puVar12 + -4) = CONCAT44((int)((ulong)uVar24 >> 0x20),auVar5._4_4_);
          *puVar12 = auVar6._8_4_;
          puVar12[1] = (int)uVar25;
          puVar12[2] = (int)uVar27;
          puVar12[3] = (int)uVar29;
          *(ulong *)(puVar12 + 6) =
               CONCAT44((int)((ulong)uVar29 >> 0x20),(int)((ulong)uVar27 >> 0x20));
          *(ulong *)(puVar12 + 4) =
               CONCAT44((int)((ulong)uVar25 >> 0x20),(int)((ulong)uVar4 >> 0x20));
          lVar10 = lVar10 + 0x10;
          lVar17 = lVar17 + 4;
          puVar18 = puVar18 + 2;
          puVar20 = puVar20 + 2;
          puVar22 = puVar22 + 2;
          pauVar23 = (undefined1 (*) [12])(pauVar23[1] + 4);
          puVar12 = puVar12 + 0x10;
        } while (lVar17 < (long)(uVar1 & 0xfffffffffffffffc));
      }
      lVar19 = param_3 - lVar17;
      if (lVar19 != 0 && lVar17 <= (long)param_3) {
        lVar21 = 0;
        puVar12 = (undefined4 *)(param_1 + 8 + lVar10 * 4);
        do {
          puVar12[-2] = *(undefined4 *)(lVar2 + lVar3 * lVar11 + lVar17 * 4 + lVar21);
          puVar12[-1] = *(undefined4 *)(lVar2 + lVar3 * lVar8 + lVar17 * 4 + lVar21);
          *puVar12 = *(undefined4 *)(lVar2 + lVar3 * lVar7 + lVar17 * 4 + lVar21);
          puVar12[1] = *(undefined4 *)(lVar2 + lVar3 * lVar16 + lVar17 * 4 + lVar21);
          lVar21 = lVar21 + 4;
          puVar12 = puVar12 + 4;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar10 = lVar10 + lVar21;
      }
      lVar10 = lVar10 + (param_5 - param_3) * 4;
      lVar13 = lVar13 + 4;
      lVar16 = lVar16 + 0x10;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
      lVar11 = lVar11 + 0x10;
    } while (lVar13 < (long)uVar9);
  }
  if ((long)uVar9 < (long)param_4) {
    lVar13 = param_2[1];
    puVar12 = (undefined4 *)(*param_2 + lVar13 * ((long)uVar15 >> 2) * 0x10);
    do {
      puVar14 = puVar12;
      uVar15 = param_3;
      if (0 < (long)param_3) {
        do {
          *(undefined4 *)(param_1 + lVar10 * 4) = *puVar14;
          lVar10 = lVar10 + 1;
          uVar15 = uVar15 - 1;
          puVar14 = puVar14 + 1;
        } while (uVar15 != 0);
      }
      lVar10 = (param_5 - param_3) + lVar10;
      uVar9 = uVar9 + 1;
      puVar12 = puVar12 + lVar13;
    } while (uVar9 != param_4);
  }
  return;
}



/* Entry: 109542938; end: 109542beb;  */

void FUN_109542938(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  iVar3 = (int)((ulong)param_5 >> 0x20);
  lVar11 = (((ulong)(param_5 / 6 + ((long)iVar3 >> 0x1f)) >> 1) - ((long)iVar3 >> 0x1f)) * 0xc;
  iVar3 = (int)param_5 - (int)lVar11;
  lVar13 = lVar11 + (long)((int)((iVar3 + ((uint)(int)(char)iVar3 >> 0xc & 7)) * 0x1000000) >> 0x1b)
                    * 8;
  uVar1 = (param_5 - lVar13) + 3;
  if (lVar13 <= param_5) {
    uVar1 = param_5 - lVar13;
  }
  lVar5 = (uVar1 & 0xfffffffffffffffc) + lVar13;
  lVar6 = param_3 * 4;
  if (lVar11 < 1) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar14 = param_7 * 0xc;
      if (0 < param_4) {
        puVar9 = (undefined8 *)(param_1 + param_7 * 0x30 + 0x20 + lVar8 * 4);
        puVar2 = puVar4;
        lVar15 = param_4;
        do {
          uVar16 = puVar2[-4];
          uVar18 = puVar2[-1];
          uVar17 = puVar2[-2];
          uVar20 = puVar2[1];
          uVar19 = *puVar2;
          puVar9[-3] = puVar2[-3];
          puVar9[-4] = uVar16;
          puVar9[-1] = uVar18;
          puVar9[-2] = uVar17;
          puVar9[1] = uVar20;
          *puVar9 = uVar19;
          puVar2 = (undefined8 *)((long)puVar2 + lVar6);
          lVar15 = lVar15 + -1;
          puVar9 = puVar9 + 6;
          lVar14 = param_4 * 0xc + param_7 * 0xc;
        } while (lVar15 != 0);
      }
      lVar8 = lVar14 + lVar8 + (param_6 - (param_4 + param_7)) * 0xc;
      lVar7 = lVar7 + 0xc;
      puVar4 = puVar4 + 6;
    } while (lVar7 < lVar11);
  }
  if (lVar7 < lVar13) {
    puVar4 = (undefined8 *)(param_2 + lVar7 * 4 + 0x10);
    do {
      lVar11 = param_7 * 8;
      if (0 < param_4) {
        puVar2 = (undefined8 *)(param_1 + param_7 * 0x20 + 0x10 + lVar8 * 4);
        puVar9 = puVar4;
        lVar14 = param_4;
        do {
          uVar16 = puVar9[-2];
          uVar18 = puVar9[1];
          uVar17 = *puVar9;
          puVar2[-1] = puVar9[-1];
          puVar2[-2] = uVar16;
          puVar2[1] = uVar18;
          *puVar2 = uVar17;
          puVar2 = puVar2 + 4;
          puVar9 = (undefined8 *)((long)puVar9 + lVar6);
          lVar14 = lVar14 + -1;
          lVar11 = param_7 * 8 + param_4 * 8;
        } while (lVar14 != 0);
      }
      lVar8 = lVar11 + lVar8 + (param_6 - (param_4 + param_7)) * 8;
      lVar7 = lVar7 + 8;
      puVar4 = puVar4 + 4;
    } while (lVar7 < lVar13);
  }
  lVar13 = ((param_5 - lVar5) - (param_5 - lVar5 >> 0x3f) & 0xfffffffffffffffeU) + lVar5;
  if (lVar7 < lVar5) {
    puVar4 = (undefined8 *)(param_2 + lVar7 * 4);
    do {
      lVar11 = param_7 * 4;
      if (0 < param_4) {
        puVar2 = puVar4;
        puVar9 = (undefined8 *)(param_1 + param_7 * 0x10 + lVar8 * 4);
        lVar14 = param_4;
        do {
          uVar16 = *puVar2;
          puVar9[1] = puVar2[1];
          *puVar9 = uVar16;
          puVar2 = (undefined8 *)((long)puVar2 + lVar6);
          lVar14 = lVar14 + -1;
          puVar9 = puVar9 + 2;
          lVar11 = param_7 * 4 + param_4 * 4;
        } while (lVar14 != 0);
      }
      lVar8 = lVar11 + lVar8 + (param_6 - (param_4 + param_7)) * 4;
      lVar7 = lVar7 + 4;
      puVar4 = puVar4 + 2;
    } while (lVar7 < lVar5);
  }
  if (lVar7 < lVar13) {
    puVar4 = (undefined8 *)(param_2 + lVar7 * 4);
    do {
      lVar11 = param_7 * 2;
      if (0 < param_4) {
        puVar2 = puVar4;
        lVar5 = param_4;
        puVar9 = (undefined8 *)(param_1 + param_7 * 8 + lVar8 * 4);
        do {
          *puVar9 = *puVar2;
          puVar2 = (undefined8 *)((long)puVar2 + lVar6);
          lVar5 = lVar5 + -1;
          puVar9 = puVar9 + 1;
          lVar11 = param_7 * 2 + param_4 * 2;
        } while (lVar5 != 0);
      }
      lVar8 = lVar11 + lVar8 + (param_6 - (param_4 + param_7)) * 2;
      lVar7 = lVar7 + 2;
      puVar4 = puVar4 + 1;
    } while (lVar7 < lVar13);
  }
  if (lVar7 < param_5) {
    puVar10 = (undefined4 *)(param_2 + lVar7 * 4);
    do {
      lVar8 = lVar8 + param_7;
      puVar12 = puVar10;
      lVar13 = param_4;
      if (0 < param_4) {
        do {
          *(undefined4 *)(param_1 + lVar8 * 4) = *puVar12;
          lVar8 = lVar8 + 1;
          puVar12 = puVar12 + param_3;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar8 = (param_6 - (param_4 + param_7)) + lVar8;
      lVar7 = lVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != param_5);
  }
  return;
}



/* Entry: 109542bec; end: 1095433cf;  */

void FUN_109542bec(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6,ulong *param_7)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  float *pfVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long **pplVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  float *pfVar17;
  long *plVar18;
  float *pfVar19;
  undefined4 *puVar20;
  long *plVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  float *pfVar24;
  float *pfVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  undefined8 uVar34;
  long *aplStack_1b0 [2];
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined1 auStack_82 [2];
  long lStack_80;
  
  pplVar13 = aplStack_1b0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = (long *)param_7[4];
  plStack_150 = (long *)param_7[2];
  plStack_118 = plStack_150;
  if ((long)param_2 <= (long)plStack_150) {
    plStack_118 = param_2;
  }
  uVar27 = (long)plStack_118 * (long)plVar30;
  plStack_128 = param_5;
  plStack_b0 = param_6;
  if (uVar27 >> 0x3e == 0) {
    plStack_c8 = (long *)*param_7;
    plVar12 = param_4;
    plVar32 = param_2;
    plVar10 = param_3;
    if (plStack_c8 == (long *)0x0) {
      plVar7 = (long *)(uVar27 * 4);
      if (uVar27 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar28 = -((long)plVar7 + 0x1eU & 0xfffffffffffffff0);
        pplVar13 = (long **)((long)aplStack_1b0 + lVar28);
        aplStack_1b0[1] = (long *)((long)aplStack_1b0 + lVar28);
        plStack_c8 = aplStack_1b0[1];
      }
      else {
        _malloc();
        aplStack_1b0[1] = plVar7;
        plStack_c8 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_10954331c;
      }
    }
    else {
      aplStack_1b0[1] = (long *)0x0;
      pplVar13 = aplStack_1b0;
      plVar7 = param_1;
    }
    uVar16 = (long)plVar30 * (long)param_1;
    if (uVar16 >> 0x3e == 0) {
      plStack_f8 = (long *)param_7[1];
      uStack_1a0 = uVar16;
      uStack_198 = uVar27;
      plStack_120 = param_2;
      if (plStack_f8 != (long *)0x0) {
        aplStack_1b0[0] = (long *)0x0;
LAB_109542d68:
        plVar15 = plStack_b0;
        lStack_170 = (long)param_1 - 1;
        if (0 < (long)param_1) {
          lStack_190 = (long)plVar30 << 2;
          lStack_168 = (long)param_4 << 2;
          lStack_158 = (long)plStack_118 << 2;
          lVar28 = (long)plStack_b0 * 4;
          lStack_178 = (long)param_3 + (long)param_1 * 4;
          plStack_188 = plVar30;
          plStack_100 = param_3;
          do {
            plVar21 = plStack_188;
            plVar30 = plStack_188;
            if ((long)param_1 <= (long)plStack_188) {
              plVar30 = param_1;
            }
            plVar18 = (long *)((long)param_1 - (long)plVar30);
            plVar9 = (long *)((long)plStack_f8 + (long)plVar30 * (long)plVar30 * 4);
            plStack_160 = plVar9;
            plStack_e8 = plVar18;
            plStack_a0 = plVar30;
            if (0 < (long)plVar18) {
              lStack_98 = (long)param_3 + (long)plVar18 * (long)param_4 * 4;
              plVar7 = (long *)auStack_82;
              plVar10 = &lStack_98;
              param_6 = (long *)0x0;
              plStack_90 = param_4;
              FUN_1093eef2c();
              plVar32 = plVar9;
              plVar12 = plVar30;
              param_5 = plVar18;
            }
            plVar30 = plStack_a0;
            plStack_180 = param_1;
            if (0 < (long)plVar21) {
              lVar26 = 0;
              lVar29 = lStack_178 + (long)plStack_a0 * -4;
              plVar18 = plStack_a0;
              plVar9 = plStack_f8;
              plVar21 = plStack_e8;
              do {
                plVar12 = plVar18;
                if (0xb < (long)plVar18) {
                  plVar12 = (long *)0xc;
                }
                plVar10 = (long *)((long)plVar18 - (long)plVar12);
                if (0 < (long)plVar10) {
                  lStack_98 = lVar29 + lStack_168 * ((long)plVar12 + (long)plVar21);
                  plVar32 = &lStack_98;
                  param_6 = (long *)((long)plVar12 + lVar26);
                  plVar7 = plVar9;
                  param_5 = plStack_a0;
                  plStack_90 = param_4;
                  FUN_1095433d0();
                }
                lVar26 = lVar26 + 0xc;
                plVar9 = plVar9 + (long)plVar30 * 6;
                lVar29 = lVar29 + 0x30;
                plVar21 = (long *)((long)plVar21 + 0xc);
                plVar18 = (long *)((long)plVar18 - 0xc);
              } while (lVar26 < (long)plStack_a0);
            }
            if (0 < (long)plStack_120) {
              lVar26 = 0;
              uVar27 = (long)plStack_a0 +
                       (((ulong)((long)plStack_a0 / 6 + ((long)plStack_a0 >> 0x3f)) >> 1) -
                       ((long)plStack_a0 >> 0x3f)) * -0xc;
              uStack_130 = 0xc;
              if (uVar27 != 0) {
                uStack_130 = uVar27;
              }
              lStack_138 = (long)plStack_a0 - uStack_130;
              lStack_140 = lStack_170 - uStack_130;
              lStack_148 = (long)plStack_180 - uStack_130;
              plStack_f0 = plStack_128;
              plVar21 = plStack_120;
              plVar30 = plStack_118;
              do {
                plVar9 = plStack_150;
                if ((long)plStack_120 <= (long)plStack_150) {
                  plVar9 = plStack_120;
                }
                if ((long)plVar21 <= (long)plVar9) {
                  plVar9 = plVar21;
                }
                plVar18 = (long *)((long)plStack_120 - lVar26);
                if ((long)plVar30 <= (long)plStack_120 - lVar26) {
                  plVar18 = plVar30;
                }
                lStack_c0 = (long)plStack_128 + lVar26 * 4;
                lStack_a8 = lStack_140;
                uVar27 = uStack_130;
                lVar31 = lStack_138;
                lVar29 = lStack_148;
                plStack_110 = plVar21;
                lStack_108 = lVar26;
                if (-1 < lStack_138) {
                  do {
                    plVar30 = plStack_a0;
                    uVar16 = uVar27;
                    if (0xb < (long)uVar27) {
                      uVar16 = 0xc;
                    }
                    uVar3 = uVar27;
                    if ((long)uVar27 < 2) {
                      uVar3 = 1;
                    }
                    if (0xb < (long)uVar3) {
                      uVar3 = 0xc;
                    }
                    plVar32 = (long *)((long)plStack_a0 - lVar31);
                    plVar12 = plVar32;
                    if (0xb < (long)plVar32) {
                      plVar12 = (long *)0xc;
                    }
                    lVar26 = lVar31 + (long)plStack_e8;
                    lVar11 = lVar26 * (long)plStack_b0;
                    lStack_b8 = lVar29;
                    if (0 < (long)plVar32 - (long)plVar12) {
                      lStack_98 = lStack_c0 + lVar11 * 4;
                      plStack_90 = plStack_b0;
                      lVar29 = (long)plStack_f8 + lVar31 * (long)plStack_a0 * 4;
                      lStack_e0 = lVar26;
                      uStack_d8 = uVar16;
                      uStack_d0 = uVar27;
                      pplVar13[-3] = (long *)((long)plVar12 + lVar31);
                      pplVar13[-2] = (long *)((long)plVar12 + lVar31);
                      pplVar13[-4] = plVar30;
                      FUN_1093dc118(0xbf800000,auStack_82 + 1,&lStack_98,plStack_c8,lVar29,plVar18);
                      uVar16 = uStack_d8;
                      lVar26 = lStack_e0;
                      uVar27 = uStack_d0;
                      param_3 = plStack_100;
                    }
                    lVar29 = lStack_b8;
                    if (0 < (long)plVar32) {
                      uVar14 = 0;
                      pfVar17 = (float *)((long)plStack_f0 + lVar28 * (uVar16 + lStack_a8));
                      pfVar19 = (float *)((long)plStack_f0 + lVar28 * (uVar16 + lStack_b8));
                      do {
                        lVar2 = (long)plVar12 + ~uVar14 + lVar26;
                        if (uVar14 != 0) {
                          uVar16 = 0;
                          pfVar24 = pfVar19;
                          do {
                            if (0 < (long)plVar18) {
                              fVar33 = *(float *)((long)param_3 +
                                                 ((long)plVar12 + uVar16 + (lVar26 - uVar14)) *
                                                 (long)param_4 * 4 + lVar2 * 4);
                              pfVar8 = pfVar17;
                              plVar30 = plVar9;
                              pfVar25 = pfVar24;
                              do {
                                *pfVar8 = *pfVar8 - fVar33 * *pfVar25;
                                plVar30 = (long *)((long)plVar30 - 1);
                                pfVar8 = pfVar8 + 1;
                                pfVar25 = pfVar25 + 1;
                              } while (plVar30 != (long *)0x0);
                            }
                            uVar16 = uVar16 + 1;
                            pfVar24 = pfVar24 + (long)plVar15;
                          } while (uVar16 != uVar14);
                        }
                        if (0 < (long)plVar18) {
                          plVar30 = (long *)0x0;
                          fVar33 = *(float *)((long)param_3 + lVar2 * 4 + lVar2 * (long)param_4 * 4)
                          ;
                          do {
                            pfVar17[(long)plVar30] = (1.0 / fVar33) * pfVar17[(long)plVar30];
                            plVar30 = (long *)((long)plVar30 + 1);
                          } while (plVar9 != plVar30);
                        }
                        uVar14 = uVar14 + 1;
                        pfVar17 = pfVar17 + -(long)plVar15;
                        pfVar19 = pfVar19 + -(long)plVar15;
                      } while (uVar14 != uVar3);
                    }
                    plVar32 = (long *)(lStack_c0 + lVar11 * 4);
                    plVar7 = plStack_c8;
                    plVar10 = plStack_b0;
                    param_5 = plVar18;
                    param_6 = plStack_a0;
                    FUN_109542938();
                    uVar27 = uVar27 + 0xc;
                    lStack_a8 = lStack_a8 + -0xc;
                    lVar29 = lVar29 + -0xc;
                    bVar1 = 0xb < lVar31;
                    lVar31 = lVar31 + -0xc;
                  } while (bVar1);
                }
                plVar30 = plStack_118;
                if (0 < (long)plStack_e8) {
                  lStack_98 = lStack_c0;
                  plStack_90 = plStack_b0;
                  pplVar13[-3] = (long *)0x0;
                  pplVar13[-2] = (long *)0x0;
                  plVar7 = (long *)(auStack_82 + 1);
                  plVar32 = &lStack_98;
                  pplVar13[-4] = (long *)0xffffffffffffffff;
                  plVar10 = plStack_c8;
                  plVar12 = plStack_160;
                  param_6 = plStack_a0;
                  FUN_1093dc118(0xbf800000);
                  param_5 = plVar18;
                }
                lVar26 = lStack_108 + (long)plVar30;
                plVar21 = (long *)((long)plStack_110 - (long)plVar30);
                plStack_f0 = (long *)((long)plStack_f0 + lStack_158);
              } while (lVar26 < (long)plStack_120);
            }
            lStack_178 = lStack_178 - lStack_190;
            lStack_170 = lStack_170 - (long)plStack_188;
            param_1 = (long *)((long)plStack_180 - (long)plStack_188);
          } while (param_1 != (long *)0x0 && (long)plStack_188 <= (long)plStack_180);
        }
        if (0x8000 < uStack_1a0) {
          plVar7 = aplStack_1b0[0];
          _free();
        }
        if (0x8000 < uStack_198) {
          plVar7 = aplStack_1b0[1];
          _free();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
          ___stack_chk_fail();
          if (0x8000 < uStack_198) {
            _free(aplStack_1b0[1]);
          }
          __Unwind_Resume();
          plVar30 = (long *)((long)plVar12 + 3);
          if (-1 < (long)plVar12) {
            plVar30 = plVar12;
          }
          plVar15 = (long *)((ulong)plVar30 & 0xfffffffffffffffc);
          if ((long)plVar12 < 4) {
            lVar28 = 0;
          }
          else {
            lVar26 = 0;
            lVar28 = 0;
            do {
              plVar21 = (long *)0x0;
              lVar29 = lVar28 * 4;
              lVar28 = (long)param_5 * 4 + lVar28;
              do {
                puVar4 = (undefined8 *)(*plVar32 + plVar32[1] * (long)plVar21 * 4 + lVar26 * 4);
                uVar34 = *puVar4;
                puVar5 = (undefined8 *)
                         ((long)plVar7 + (long)plVar21 * 0x10 + lVar29 + (long)param_6 * 0x10);
                puVar5[1] = puVar4[1];
                *puVar5 = uVar34;
                plVar21 = (long *)((long)plVar21 + 1);
              } while (plVar10 != plVar21);
              lVar26 = lVar26 + 4;
            } while (lVar26 < (long)plVar15);
          }
          if ((long)plVar15 < (long)plVar12) {
            lVar26 = plVar32[1];
            puVar20 = (undefined4 *)(*plVar32 + ((long)plVar30 >> 2) * 0x10);
            do {
              puVar22 = (undefined4 *)((long)plVar7 + (lVar28 + (long)param_6) * 4);
              plVar30 = plVar10;
              puVar23 = puVar20;
              do {
                *puVar22 = *puVar23;
                puVar23 = puVar23 + lVar26;
                plVar30 = (long *)((long)plVar30 - 1);
                puVar22 = puVar22 + 1;
              } while (plVar30 != (long *)0x0);
              lVar28 = (long)param_5 + lVar28;
              plVar15 = (long *)((long)plVar15 + 1);
              puVar20 = puVar20 + 1;
            } while (plVar15 != plVar12);
          }
          return;
        }
        return;
      }
      plVar7 = (long *)(uVar16 * 4);
      if (uVar16 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pplVar13 = (long **)((long)pplVar13 + -((long)plVar7 + 0x1eU & 0xfffffffffffffff0));
        aplStack_1b0[0] = (long *)pplVar13;
        plStack_f8 = (long *)pplVar13;
        goto LAB_109542d68;
      }
      _malloc();
      aplStack_1b0[0] = plVar7;
      plStack_f8 = plVar7;
      if (plVar7 != (long *)0x0) goto LAB_109542d68;
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10954335c;
    }
  }
  else {
LAB_10954331c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10954335c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109543360);
  (*pcVar6)();
}



/* Entry: 1095433d0; end: 109543493;  */

void FUN_1095433d0(long param_1,long *param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  uVar1 = param_4 + 3;
  if (-1 < (long)param_4) {
    uVar1 = param_4;
  }
  uVar4 = uVar1 & 0xfffffffffffffffc;
  if ((long)param_4 < 4) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    do {
      lVar10 = 0;
      lVar9 = lVar5 * 4;
      lVar5 = param_5 * 4 + lVar5;
      do {
        puVar2 = (undefined8 *)(*param_2 + param_2[1] * lVar10 * 4 + lVar7 * 4);
        uVar12 = *puVar2;
        puVar3 = (undefined8 *)(param_1 + param_6 * 0x10 + lVar9 + lVar10 * 0x10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar12;
        lVar10 = lVar10 + 1;
      } while (param_3 != lVar10);
      lVar7 = lVar7 + 4;
    } while (lVar7 < (long)uVar4);
  }
  if ((long)uVar4 < (long)param_4) {
    lVar7 = param_2[1];
    puVar6 = (undefined4 *)(*param_2 + ((long)uVar1 >> 2) * 0x10);
    do {
      puVar8 = (undefined4 *)(param_1 + (lVar5 + param_6) * 4);
      lVar9 = param_3;
      puVar11 = puVar6;
      do {
        *puVar8 = *puVar11;
        puVar11 = puVar11 + lVar7;
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
      lVar5 = param_5 + lVar5;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != param_4);
  }
  return;
}



/* Entry: 109543494; end: 1095439a7;  */

/* WARNING: Type propagation algorithm not settling */

float *******
FUN_109543494(ulong param_1,float *******param_2,float *******param_3,float *******param_4,
             float *******param_5)

{
  ulong *puVar1;
  code *pcVar2;
  float *******pppppppfVar3;
  float *******pppppppfVar4;
  float *******pppppppfVar5;
  float *******pppppppfVar6;
  float *******pppppppfVar7;
  float ******ppppppfVar8;
  float *****pppppfVar9;
  float *******pppppppfVar10;
  float *****pppppfVar11;
  float ****ppppfVar12;
  float *******pppppppfVar13;
  float ****ppppfVar14;
  float ******ppppppfVar15;
  float *pfVar16;
  long lVar17;
  float ******ppppppfVar18;
  float *******pppppppfVar19;
  float *****pppppfVar20;
  float ******ppppppfVar21;
  float *******pppppppfVar22;
  float *******pppppppfVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  float *******pppppppfVar27;
  float ******ppppppfVar28;
  float *****pppppfVar29;
  float fVar30;
  ulong uVar31;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float ******ppppppfStack_150;
  float *******pppppppfStack_148;
  float ******ppppppfStack_140;
  float ******ppppppfStack_138;
  float *******pppppppfStack_130;
  long lStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  float ******ppppppfStack_c8;
  float ******ppppppfStack_c0;
  undefined8 uStack_b8;
  float ******ppppppfStack_b0;
  float ******ppppppfStack_a8;
  float ******ppppppfStack_a0;
  float *******pppppppfStack_98;
  float *******pppppppfStack_90;
  float *******pppppppfStack_88;
  float ******ppppppfStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppfVar28 = param_4[1];
  pppppppfVar7 = (float *******)param_2[1];
  pppppppfVar10 = (float *******)param_2[2];
  lVar17 = (long)ppppppfVar28 + -1;
  pppppppfVar3 = param_2;
  if ((long)ppppppfVar28 < 1 || 0x13 < (long)pppppppfVar7 + (long)ppppppfVar28 + (long)pppppppfVar10
     ) {
    if (0 < (long)pppppppfVar10 * (long)pppppppfVar7) {
      pppppppfVar3 = (float *******)*param_2;
      _bzero(pppppppfVar3,(long)pppppppfVar10 * (long)pppppppfVar7 * 4);
    }
    pppppppfVar27 = (float *******)*param_3;
    ppppppfVar8 = pppppppfVar27[1];
    if (((ppppppfVar8 != (float ******)0x0) &&
        (pppppppfVar3 = (float *******)pppppppfVar27[2], pppppppfVar3 != (float *******)0x0)) &&
       (ppppppfVar18 = param_4[2], ppppppfVar18 != (float ******)0x0)) {
      if (pppppppfVar10 == (float *******)0x1) {
        ppppppfVar15 = *param_2;
        ppppppfVar21 = *param_4;
        if (pppppppfVar3 == (float *******)0x1) {
          if (ppppppfVar28 == (float ******)0x0) {
            fVar30 = 0.0;
          }
          else {
            ppppppfVar8 = *pppppppfVar27;
            fVar30 = *(float *)ppppppfVar8 * *(float *)ppppppfVar21;
            if (1 < (long)ppppppfVar28) {
              do {
                ppppppfVar21 = (float ******)((long)ppppppfVar21 + (long)ppppppfVar18 * 4);
                ppppppfVar8 = (float ******)((long)ppppppfVar8 + 4);
                fVar30 = fVar30 + *(float *)ppppppfVar8 * *(float *)ppppppfVar21;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
          }
          param_1 = (ulong)(uint)(fVar30 + *(float *)ppppppfVar15);
          *(float *)ppppppfVar15 = fVar30 + *(float *)ppppppfVar15;
        }
        else {
          ppppppfStack_a0 = *pppppppfVar27;
          param_5 = &ppppppfStack_b0;
          param_1 = 0x3f800000;
          ppppppfStack_b0 = ppppppfVar21;
          ppppppfStack_a8 = ppppppfVar18;
          pppppppfStack_98 = pppppppfVar3;
          FUN_10946ddac(pppppppfVar3,ppppppfVar8,&ppppppfStack_a0,param_5,ppppppfVar15,1);
        }
      }
      else if (pppppppfVar7 == (float *******)0x1) {
        ppppppfVar21 = *param_2;
        ppppppfVar8 = *pppppppfVar27;
        if (ppppppfVar18 == (float ******)0x1) {
          if (ppppppfVar28 == (float ******)0x0) {
            fVar30 = 0.0;
          }
          else {
            ppppppfVar18 = *param_4;
            fVar30 = *(float *)ppppppfVar8 * *(float *)ppppppfVar18;
            if (1 < (long)ppppppfVar28) {
              do {
                ppppppfVar8 = (float ******)((long)ppppppfVar8 + (long)pppppppfVar3 * 4);
                ppppppfVar18 = (float ******)((long)ppppppfVar18 + 4);
                fVar30 = fVar30 + *(float *)ppppppfVar8 * *(float *)ppppppfVar18;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
          }
          param_1 = (ulong)(uint)(fVar30 + *(float *)ppppppfVar21);
          *(float *)ppppppfVar21 = fVar30 + *(float *)ppppppfVar21;
        }
        else {
          ppppppfStack_80 = (float ******)0x0;
          lStack_78 = 0;
          lStack_70 = 1;
          param_5 = &ppppppfStack_a0;
          param_1 = 0x3f800000;
          ppppppfStack_a0 = ppppppfVar21;
          pppppppfStack_90 = pppppppfVar10;
          pppppppfStack_88 = param_2;
          FUN_1095439a8(param_4,ppppppfVar8,pppppppfVar27);
          pppppppfVar3 = param_4;
        }
      }
      else {
        ppppppfStack_a0 = (float ******)0x0;
        pppppppfStack_98 = (float *******)0x0;
        pppppppfStack_90 = pppppppfVar7;
        pppppppfStack_88 = pppppppfVar10;
        ppppppfStack_80 = ppppppfVar8;
        FUN_1093ecdf0(&ppppppfStack_80,&pppppppfStack_90,&pppppppfStack_88,1);
        lStack_78 = (long)ppppppfStack_80 * (long)pppppppfStack_90;
        lStack_70 = (long)pppppppfStack_88 * (long)ppppppfStack_80;
        param_5 = (float *******)*pppppppfVar27;
        ppppppfStack_c8 = param_2[1];
        uStack_b8 = 0;
        uStack_d0 = 1;
        param_1 = 0x3f800000;
        ppppppfStack_c0 = (float ******)&ppppppfStack_a0;
        FUN_1093eea40((*param_3)[2],param_4[2],pppppppfVar27[1],param_5,pppppppfVar27[2],*param_4,
                      param_4[2],*param_2);
        _free(ppppppfStack_a0);
        pppppppfVar3 = pppppppfStack_98;
        _free(pppppppfStack_98);
      }
    }
LAB_1095437d4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pppppppfVar3;
    }
    ___stack_chk_fail();
    pppppppfVar5 = pppppppfVar27;
  }
  else {
    ppppppfVar28 = *param_3;
    pppppfVar20 = ppppppfVar28[1];
    pppppppfVar5 = (float *******)ppppppfVar28[2];
    pppppppfVar4 = (float *******)*param_4;
    param_3 = (float *******)param_4[2];
    pppppfVar29 = *ppppppfVar28;
    if (pppppppfVar7 == pppppppfVar5 && pppppppfVar10 == param_3) {
LAB_1095435d0:
      pppppppfVar27 = pppppppfVar5;
      if (0 < (long)pppppppfVar10) {
        lVar17 = 0;
        pppppppfVar22 = (float *******)0x0;
        pppppppfVar19 = (float *******)0x0;
        ppppppfVar8 = *param_2;
        do {
          if (0 < (long)pppppppfVar22) {
            pppppppfVar23 = (float *******)0x0;
            ppppppfVar18 = *param_4;
            ppppppfVar21 = param_4[1];
            pppppppfVar3 = (float *******)
                           ((long)ppppppfVar8 + (long)pppppppfVar19 * (long)pppppppfVar7 * 4);
            pppppfVar9 = *ppppppfVar28;
            ppppppfVar15 = param_4[2];
            param_5 = (float *******)((long)ppppppfVar15 * 4);
            pppppfVar11 = pppppfVar9;
            do {
              if (ppppppfVar21 == (float ******)0x0) {
                param_1 = 0;
              }
              else {
                param_1 = (ulong)(uint)(*(float *)((long)pppppfVar9 + (long)pppppppfVar23 * 4) *
                                       *(float *)((long)ppppppfVar18 + (long)pppppppfVar19 * 4));
                if (1 < (long)ppppppfVar21) {
                  pfVar16 = (float *)((long)pppppfVar11 + (long)ppppppfVar28[2] * 4);
                  param_2 = (float *******)((long)ppppppfVar18 + lVar17 + (long)ppppppfVar15 * 4);
                  lVar24 = (long)ppppppfVar21 + -1;
                  do {
                    param_1 = (ulong)(uint)((float)param_1 + *pfVar16 * *(float *)param_2);
                    param_2 = (float *******)((long)param_2 + (long)ppppppfVar15 * 4);
                    pfVar16 = pfVar16 + (long)ppppppfVar28[2];
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                  pppppppfVar27 = (float *******)0x0;
                }
              }
              *(int *)((long)pppppppfVar3 + (long)pppppppfVar23 * 4) = (int)param_1;
              pppppppfVar23 = (float *******)((long)pppppppfVar23 + 1);
              pppppfVar11 = (float *****)((long)pppppfVar11 + 4);
            } while (pppppppfVar23 != pppppppfVar22);
          }
          uVar25 = (long)pppppppfVar7 - (long)pppppppfVar22;
          lVar24 = (uVar25 & 0xfffffffffffffffc) + (long)pppppppfVar22;
          if (3 < (long)uVar25) {
            pppppppfVar3 = (float *******)((long)pppppfVar29 + (long)pppppppfVar22 * 4);
            pppppppfVar23 = pppppppfVar22;
            do {
              param_1 = 0;
              uVar31 = 0;
              pppppppfVar6 = pppppppfVar3;
              pppppppfVar13 = pppppppfVar4;
              pppppfVar11 = pppppfVar20;
              if (0 < (long)pppppfVar20) {
                do {
                  fVar30 = *(float *)pppppppfVar13;
                  param_1 = CONCAT44((float)(param_1 >> 0x20) +
                                     (float)((ulong)*pppppppfVar6 >> 0x20) * fVar30,
                                     (float)param_1 + SUB84(*pppppppfVar6,0) * fVar30);
                  uVar31 = CONCAT44((float)(uVar31 >> 0x20) +
                                    (float)((ulong)pppppppfVar6[1] >> 0x20) * fVar30,
                                    (float)uVar31 + SUB84(pppppppfVar6[1],0) * fVar30);
                  param_5 = (float *******)((long)pppppppfVar13 + (long)param_3 * 4);
                  pppppfVar11 = (float *****)((long)pppppfVar11 + -1);
                  pppppppfVar6 = (float *******)((long)pppppppfVar6 + (long)pppppppfVar5 * 4);
                  pppppppfVar13 = param_5;
                } while (pppppfVar11 != (float *****)0x0);
              }
              puVar1 = (ulong *)((long)ppppppfVar8 +
                                (long)((long)pppppppfVar19 * (long)pppppppfVar7 +
                                      (long)pppppppfVar23) * 4);
              puVar1[1] = uVar31;
              *puVar1 = param_1;
              pppppppfVar23 = (float *******)((long)pppppppfVar23 + 4);
              pppppppfVar3 = pppppppfVar3 + 2;
            } while ((long)pppppppfVar23 < lVar24);
          }
          if (lVar24 < (long)pppppppfVar7) {
            ppppppfVar18 = *param_4;
            pppppppfVar3 = (float *******)param_4[1];
            pppppfVar11 = *ppppppfVar28;
            ppppppfVar21 = param_4[2];
            param_5 = (float *******)((long)pppppppfVar3 + -1);
            lVar26 = (long)pppppfVar11 + (uVar25 * 4 & 0xfffffffffffffff0) + (long)pppppppfVar22 * 4
            ;
            do {
              if (pppppppfVar3 == (float *******)0x0) {
                param_1 = 0;
              }
              else {
                param_1 = (ulong)(uint)(*(float *)((long)pppppfVar11 + lVar24 * 4) *
                                       *(float *)((long)ppppppfVar18 + (long)pppppppfVar19 * 4));
                if (1 < (long)pppppppfVar3) {
                  pfVar16 = (float *)(lVar26 + (long)ppppppfVar28[2] * 4);
                  param_2 = (float *******)((long)ppppppfVar18 + (long)ppppppfVar21 * 4);
                  pppppppfVar27 = param_5;
                  do {
                    param_1 = (ulong)(uint)((float)param_1 +
                                           *pfVar16 * *(float *)((long)param_2 + lVar17));
                    param_2 = (float *******)((long)param_2 + (long)ppppppfVar21 * 4);
                    pfVar16 = pfVar16 + (long)ppppppfVar28[2];
                    pppppppfVar27 = (float *******)((long)pppppppfVar27 + -1);
                  } while (pppppppfVar27 != (float *******)0x0);
                  pppppppfVar27 = (float *******)0x0;
                }
              }
              *(int *)((long)ppppppfVar8 + ((long)pppppppfVar19 * (long)pppppppfVar7 + lVar24) * 4)
                   = (int)param_1;
              lVar24 = lVar24 + 1;
              lVar26 = lVar26 + 4;
            } while (lVar24 < (long)pppppppfVar7);
          }
          uVar25 = (long)pppppppfVar22 + ((ulong)(uint)-(int)pppppppfVar7 & 3);
          pppppppfVar23 = (float *******)(uVar25 & 3);
          uVar25 = -uVar25;
          if (-1 < (long)uVar25) {
            pppppppfVar23 = (float *******)-(uVar25 & 3);
          }
          pppppppfVar22 = pppppppfVar7;
          if ((long)pppppppfVar23 <= (long)pppppppfVar7) {
            pppppppfVar22 = pppppppfVar23;
          }
          pppppppfVar19 = (float *******)((long)pppppppfVar19 + 1);
          lVar17 = lVar17 + 4;
          pppppppfVar4 = (float *******)((long)pppppppfVar4 + 4);
        } while (pppppppfVar19 != pppppppfVar10);
      }
      goto LAB_1095437d4;
    }
    if (pppppppfVar5 == (float *******)0x0 || param_3 == (float *******)0x0) {
LAB_1095435b8:
      param_5 = param_3;
      FUN_1093c3d54(param_2,(long)param_3 * (long)pppppppfVar5,pppppppfVar5);
      pppppppfVar7 = (float *******)param_2[1];
      pppppppfVar10 = (float *******)param_2[2];
      goto LAB_1095435d0;
    }
    lVar17 = 0;
    if (param_3 != (float *******)0x0) {
      lVar17 = 0x7fffffffffffffff / (long)param_3;
    }
    if ((long)pppppppfVar5 <= lVar17) goto LAB_1095435b8;
  }
  pppppppfVar4 = (float *******)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  pppppppfVar3 = (float *******)PTR___ZTISt9bad_alloc_110346a68;
  pppppppfVar7 = (float *******)PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  _free(ppppppfStack_a0);
  _free(pppppppfStack_98);
  __Unwind_Resume();
  puStack_e0 = &stack0xfffffffffffffff0;
  pcStack_d8 = FUN_1095439a8;
  ppppppfVar28 = (float ******)&ppppppfStack_150;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppfVar8 = param_5[2];
  if ((ulong)ppppppfVar8 >> 0x3e == 0) {
    pppppppfVar27 = (float *******)((long)ppppppfVar8 << 2);
    if (ppppppfVar8 < (float ******)0x8001) goto LAB_109543a2c;
    _malloc();
    param_2 = param_5;
    pppppppfVar5 = pppppppfVar3;
    param_3 = pppppppfVar7;
    pppppppfVar10 = pppppppfVar4;
    unaff_d8 = param_1;
    if (pppppppfVar27 == (float *******)0x0) goto LAB_109543a0c;
LAB_109543a5c:
    ppppppfVar18 = (float ******)0x0;
    ppppppfVar21 = *param_5;
    pppppfVar20 = param_5[3][1];
    do {
      *(undefined4 *)((long)pppppppfVar27 + (long)ppppppfVar18 * 4) = *(undefined4 *)ppppppfVar21;
      ppppppfVar18 = (float ******)((long)ppppppfVar18 + 1);
      ppppppfVar21 = (float ******)((long)ppppppfVar21 + (long)pppppfVar20 * 4);
    } while (ppppppfVar8 != ppppppfVar18);
  }
  else {
LAB_109543a0c:
    param_1 = unaff_d8;
    pppppppfVar4 = pppppppfVar10;
    pppppppfVar7 = param_3;
    pppppppfVar3 = pppppppfVar5;
    param_5 = param_2;
    pppppppfVar27 = (float *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109543a2c:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar17 = -((long)pppppppfVar27 + 0x1eU & 0xfffffffffffffff0);
    ppppppfVar28 = (float ******)((long)&ppppppfStack_150 + lVar17);
    pppppppfVar27 = (float *******)((long)&ppppppfStack_150 + lVar17);
    if (ppppppfVar8 != (float ******)0x0) goto LAB_109543a5c;
  }
  pppppppfVar10 = (float *******)pppppppfVar4[1];
  pppppppfVar5 = (float *******)pppppppfVar4[2];
  ppppppfStack_138 = *pppppppfVar4;
  ppppppfStack_140 = pppppppfVar7[2];
  pppppppfVar19 = &ppppppfStack_138;
  pppppppfVar22 = (float *******)&pppppppfStack_148;
  uVar25 = param_1;
  pppppppfStack_148 = pppppppfVar3;
  pppppppfStack_130 = pppppppfVar5;
  FUN_10946ddac(param_1);
  ppppppfVar18 = param_5[2];
  if (0 < (long)ppppppfVar18) {
    ppppppfVar21 = *param_5;
    pppppfVar20 = param_5[3][1];
    pppppppfVar23 = pppppppfVar27;
    do {
      uVar25 = (ulong)*(uint *)pppppppfVar23;
      *(uint *)ppppppfVar21 = *(uint *)pppppppfVar23;
      ppppppfVar21 = (float ******)((long)ppppppfVar21 + (long)pppppfVar20 * 4);
      ppppppfVar18 = (float ******)((long)ppppppfVar18 + -1);
      pppppppfVar23 = (float *******)((long)pppppppfVar23 + 4);
    } while (ppppppfVar18 != (float ******)0x0);
  }
  if ((float ******)0x8000 < ppppppfVar8) {
    pppppppfVar5 = pppppppfVar27;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return pppppppfVar5;
  }
  ___stack_chk_fail();
  if ((float ******)0x8000 < ppppppfVar8) {
    _free(pppppppfVar27);
  }
  pppppppfVar23 = pppppppfVar5;
  __Unwind_Resume();
  *(undefined8 *)((long)ppppppfVar28 + -0x50) = unaff_d9;
  *(ulong *)((long)ppppppfVar28 + -0x48) = param_1;
  *(float *******)((long)ppppppfVar28 + -0x40) = ppppppfVar8;
  *(float ********)((long)ppppppfVar28 + -0x38) = pppppppfVar4;
  *(float ********)((long)ppppppfVar28 + -0x30) = pppppppfVar7;
  *(float ********)((long)ppppppfVar28 + -0x28) = pppppppfVar3;
  *(float ********)((long)ppppppfVar28 + -0x20) = pppppppfVar5;
  *(float ********)((long)ppppppfVar28 + -0x18) = pppppppfVar27;
  *(undefined1 ***)((long)ppppppfVar28 + -0x10) = &puStack_e0;
  *(code **)((long)ppppppfVar28 + -8) = FUN_109543b4c;
  pppppppfVar27 = (float *******)((long)ppppppfVar28 + -0x80);
  *(undefined8 *)((long)ppppppfVar28 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppppppfVar8 = pppppppfVar22[1];
  if ((ulong)ppppppfVar8 >> 0x3e == 0) {
    pppppppfVar6 = (float *******)((long)ppppppfVar8 << 2);
    if (ppppppfVar8 < (float ******)0x8001) goto LAB_109543bd0;
    _malloc();
    pppppppfVar5 = pppppppfVar22;
    pppppppfVar3 = pppppppfVar10;
    pppppppfVar7 = pppppppfVar19;
    pppppppfVar4 = pppppppfVar23;
    param_1 = uVar25;
    if (pppppppfVar6 == (float *******)0x0) goto LAB_109543bb0;
  }
  else {
LAB_109543bb0:
    uVar25 = param_1;
    pppppppfVar23 = pppppppfVar4;
    pppppppfVar19 = pppppppfVar7;
    pppppppfVar10 = pppppppfVar3;
    pppppppfVar22 = pppppppfVar5;
    pppppppfVar6 = (float *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109543bd0:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pppppppfVar27 =
         (float *******)
         ((long)ppppppfVar28 + (-0x80 - ((long)pppppppfVar6 + 0x1eU & 0xfffffffffffffff0)));
    pppppppfVar6 = pppppppfVar27;
    if (ppppppfVar8 == (float ******)0x0) goto LAB_109543c2c;
  }
  ppppppfVar18 = (float ******)0x0;
  ppppppfVar21 = *pppppppfVar22;
  pppppfVar20 = pppppppfVar22[3][2];
  do {
    *(undefined4 *)((long)pppppppfVar6 + (long)ppppppfVar18 * 4) = *(undefined4 *)ppppppfVar21;
    ppppppfVar18 = (float ******)((long)ppppppfVar18 + 1);
    ppppppfVar21 = (float ******)((long)ppppppfVar21 + (long)pppppfVar20 * 4);
  } while (ppppppfVar8 != ppppppfVar18);
LAB_109543c2c:
  pppppppfVar3 = (float *******)pppppppfVar23[1];
  ppppppfVar18 = pppppppfVar23[2];
  *(float *******)((long)ppppppfVar28 + -0x68) = *pppppppfVar23;
  *(float ********)((long)ppppppfVar28 + -0x60) = pppppppfVar3;
  ppppppfVar21 = pppppppfVar19[2];
  *(float ********)((long)ppppppfVar28 + -0x78) = pppppppfVar10;
  *(float *******)((long)ppppppfVar28 + -0x70) = ppppppfVar21;
  FUN_10946ddac(uVar25,pppppppfVar3,ppppppfVar18,(undefined1 *)((long)ppppppfVar28 + -0x68),
                (undefined1 *)((long)ppppppfVar28 + -0x78),pppppppfVar6,1);
  ppppppfVar21 = pppppppfVar22[1];
  if (0 < (long)ppppppfVar21) {
    ppppppfVar15 = *pppppppfVar22;
    pppppfVar20 = pppppppfVar22[3][2];
    pppppppfVar7 = pppppppfVar6;
    do {
      *(undefined4 *)ppppppfVar15 = *(undefined4 *)pppppppfVar7;
      ppppppfVar15 = (float ******)((long)ppppppfVar15 + (long)pppppfVar20 * 4);
      ppppppfVar21 = (float ******)((long)ppppppfVar21 + -1);
      pppppppfVar7 = (float *******)((long)pppppppfVar7 + 4);
    } while (ppppppfVar21 != (float ******)0x0);
  }
  if ((float ******)0x8000 < ppppppfVar8) {
    pppppppfVar3 = pppppppfVar6;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)ppppppfVar28 + -0x58)) {
    ___stack_chk_fail();
    if ((float ******)0x8000 < ppppppfVar8) {
      _free(pppppppfVar6);
    }
    pppppppfVar7 = pppppppfVar3;
    __Unwind_Resume();
    pppppppfVar27[-6] = (float ******)pppppppfVar19;
    pppppppfVar27[-5] = (float ******)pppppppfVar10;
    pppppppfVar27[-4] = (float ******)pppppppfVar3;
    pppppppfVar27[-3] = (float ******)pppppppfVar6;
    pppppppfVar27[-2] = (float ******)((long)ppppppfVar28 + -0x10);
    pppppppfVar27[-1] = (float ******)FUN_109543cf0;
    *pppppppfVar7 = (float ******)0x0;
    pppppppfVar7[1] = (float ******)0xffffffffffffffff;
    ppppfVar12 = (*ppppppfVar18)[2];
    ppppfVar14 = ppppppfVar18[1][2];
    pppppppfVar3 = pppppppfVar7 + 2;
    *pppppppfVar3 = (float ******)0x0;
    pppppppfVar7[3] = (float ******)0x0;
    pppppppfVar7[4] = (float ******)0x0;
    if (ppppfVar12 != (float ****)0x0 && ppppfVar14 != (float ****)0x0) {
      lVar17 = 0;
      if (ppppfVar14 != (float ****)0x0) {
        lVar17 = 0x7fffffffffffffff / (long)ppppfVar14;
      }
      if (lVar17 < (long)ppppfVar12) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109543da0);
        (*pcVar2)();
      }
    }
    FUN_1093c3d54(pppppppfVar3,(long)ppppfVar14 * (long)ppppfVar12);
    *pppppppfVar7 = pppppppfVar7[2];
    pppppppfVar7[1] = pppppppfVar7[3];
    FUN_109543494(pppppppfVar3,ppppppfVar18,ppppppfVar18[1]);
    return pppppppfVar7;
  }
  return pppppppfVar3;
}



/* Entry: 1095439a8; end: 109543b4b;  */

uint * FUN_1095439a8(ulong param_1,uint *param_2,long param_3,long *param_4,long *param_5)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint *unaff_x23;
  ulong uVar15;
  ulong unaff_d8;
  undefined8 unaff_d9;
  uint auStack_80 [2];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  uint *puStack_60;
  long lStack_58;
  
  puVar2 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_5[2];
  if (uVar15 >> 0x3e == 0) {
    puVar3 = (uint *)(uVar15 << 2);
    if (uVar15 < 0x8001) goto LAB_109543a2c;
    _malloc();
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (puVar3 == (uint *)0x0) goto LAB_109543a0c;
LAB_109543a5c:
    uVar8 = 0;
    puVar11 = (uint *)*param_5;
    lVar13 = *(long *)(param_5[3] + 8);
    do {
      puVar3[uVar8] = *puVar11;
      uVar8 = uVar8 + 1;
      puVar11 = puVar11 + lVar13;
    } while (uVar15 != uVar8);
  }
  else {
LAB_109543a0c:
    param_1 = unaff_d8;
    param_2 = unaff_x23;
    param_4 = unaff_x22;
    param_3 = unaff_x21;
    param_5 = unaff_x20;
    puVar3 = (uint *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109543a2c:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = -((long)puVar3 + 0x1eU & 0xfffffffffffffff0);
    puVar2 = (uint *)((long)auStack_80 + lVar13);
    puVar3 = (uint *)((long)auStack_80 + lVar13);
    if (uVar15 != 0) goto LAB_109543a5c;
  }
  lVar13 = *(long *)(param_2 + 2);
  puVar11 = *(uint **)(param_2 + 4);
  lStack_68 = *(long *)param_2;
  lStack_70 = param_4[2];
  plVar7 = &lStack_68;
  puVar5 = (uint *)&lStack_78;
  uVar8 = param_1;
  lStack_78 = param_3;
  puStack_60 = puVar11;
  FUN_10946ddac(param_1);
  lVar9 = param_5[2];
  if (0 < lVar9) {
    puVar12 = (uint *)*param_5;
    lVar14 = *(long *)(param_5[3] + 8);
    puVar4 = puVar3;
    do {
      uVar8 = (ulong)*puVar4;
      *puVar12 = *puVar4;
      puVar12 = puVar12 + lVar14;
      lVar9 = lVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar9 != 0);
  }
  if (0x8000 < uVar15) {
    puVar11 = puVar3;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar15) {
    _free(puVar3);
  }
  puVar12 = puVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)puVar2 + -0x50) = unaff_d9;
  *(ulong *)((long)puVar2 + -0x48) = param_1;
  *(ulong *)((long)puVar2 + -0x40) = uVar15;
  *(uint **)((long)puVar2 + -0x38) = param_2;
  *(long **)((long)puVar2 + -0x30) = param_4;
  *(long *)((long)puVar2 + -0x28) = param_3;
  *(uint **)((long)puVar2 + -0x20) = puVar11;
  *(uint **)((long)puVar2 + -0x18) = puVar3;
  *(undefined1 **)((long)puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar2 + -8) = FUN_109543b4c;
  puVar3 = (uint *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(ulong *)(puVar5 + 2);
  if (uVar15 >> 0x3e == 0) {
    puVar4 = (uint *)(uVar15 << 2);
    if (uVar15 < 0x8001) goto LAB_109543bd0;
    _malloc();
    puVar11 = puVar5;
    param_3 = lVar13;
    param_4 = plVar7;
    param_2 = puVar12;
    param_1 = uVar8;
    if (puVar4 == (uint *)0x0) goto LAB_109543bb0;
  }
  else {
LAB_109543bb0:
    uVar8 = param_1;
    puVar12 = param_2;
    plVar7 = param_4;
    lVar13 = param_3;
    puVar5 = puVar11;
    puVar4 = (uint *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109543bd0:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = (uint *)((long)puVar2 + (-0x80 - ((long)puVar4 + 0x1eU & 0xfffffffffffffff0)));
    puVar4 = puVar3;
    if (uVar15 == 0) goto LAB_109543c2c;
  }
  uVar10 = 0;
  puVar11 = *(uint **)puVar5;
  lVar9 = *(long *)(*(long *)(puVar5 + 6) + 0x10);
  do {
    puVar4[uVar10] = *puVar11;
    uVar10 = uVar10 + 1;
    puVar11 = puVar11 + lVar9;
  } while (uVar15 != uVar10);
LAB_109543c2c:
  puVar11 = *(uint **)(puVar12 + 2);
  plVar6 = *(long **)(puVar12 + 4);
  *(long *)((long)puVar2 + -0x68) = *(long *)puVar12;
  *(uint **)((long)puVar2 + -0x60) = puVar11;
  lVar9 = plVar7[2];
  *(long *)((long)puVar2 + -0x78) = lVar13;
  *(long *)((long)puVar2 + -0x70) = lVar9;
  FUN_10946ddac(uVar8,puVar11,plVar6,(undefined1 *)((long)puVar2 + -0x68),
                (undefined1 *)((long)puVar2 + -0x78),puVar4,1);
  lVar9 = *(long *)(puVar5 + 2);
  if (0 < lVar9) {
    puVar12 = *(uint **)puVar5;
    lVar14 = *(long *)(*(long *)(puVar5 + 6) + 0x10);
    puVar5 = puVar4;
    do {
      *puVar12 = *puVar5;
      puVar12 = puVar12 + lVar14;
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
  }
  if (0x8000 < uVar15) {
    puVar11 = puVar4;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar2 + -0x58)) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar15) {
    _free(puVar4);
  }
  puVar5 = puVar11;
  __Unwind_Resume();
  *(long **)(puVar3 + -0xc) = plVar7;
  *(long *)(puVar3 + -10) = lVar13;
  *(uint **)(puVar3 + -8) = puVar11;
  *(uint **)(puVar3 + -6) = puVar4;
  *(undefined1 **)(puVar3 + -4) = (undefined1 *)((long)puVar2 + -0x10);
  *(code **)(puVar3 + -2) = FUN_109543cf0;
  puVar5[0] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0xffffffff;
  puVar5[3] = 0xffffffff;
  lVar13 = *(long *)(*plVar6 + 0x10);
  lVar9 = *(long *)(plVar6[1] + 0x10);
  puVar2 = puVar5 + 4;
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  if (lVar13 != 0 && lVar9 != 0) {
    lVar14 = 0;
    if (lVar9 != 0) {
      lVar14 = 0x7fffffffffffffff / lVar9;
    }
    if (lVar14 < lVar13) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109543da0);
      (*pcVar1)();
    }
  }
  FUN_1093c3d54(puVar2,lVar9 * lVar13);
  *(undefined8 *)puVar5 = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar5 + 6);
  FUN_109543494(puVar2,plVar6,plVar6[1]);
  return puVar5;
}



/* Entry: 109543b4c; end: 109543cef;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_109543b4c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,long *param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar12;
  undefined8 unaff_d8;
  undefined8 auStack_80 [4];
  undefined8 *puStack_60;
  long lStack_58;
  
  puVar3 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_5[1];
  if (uVar12 >> 0x3e == 0) {
    puVar4 = (undefined8 *)(uVar12 << 2);
    if (uVar12 < 0x8001) goto LAB_109543bd0;
    _malloc();
    unaff_x20 = param_5;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_d8 = param_1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_109543bb0;
  }
  else {
LAB_109543bb0:
    param_1 = unaff_d8;
    param_2 = unaff_x23;
    param_4 = unaff_x22;
    param_3 = unaff_x21;
    param_5 = unaff_x20;
    puVar4 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109543bd0:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = -((long)puVar4 + 0x1eU & 0xfffffffffffffff0);
    puVar3 = (undefined8 *)((long)auStack_80 + lVar10);
    puVar4 = (undefined8 *)((long)auStack_80 + lVar10);
    if (uVar12 == 0) goto LAB_109543c2c;
  }
  uVar8 = 0;
  puVar9 = (undefined4 *)*param_5;
  lVar10 = *(long *)(param_5[3] + 0x10);
  do {
    *(undefined4 *)((long)puVar4 + uVar8 * 4) = *puVar9;
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + lVar10;
  } while (uVar12 != uVar8);
LAB_109543c2c:
  puVar5 = (undefined8 *)param_2[1];
  plVar7 = (long *)param_2[2];
  auStack_80[3] = *param_2;
  auStack_80[2] = *(undefined8 *)(param_4 + 0x10);
  auStack_80[1] = param_3;
  puStack_60 = puVar5;
  FUN_10946ddac(param_1,puVar5,plVar7,auStack_80 + 3,auStack_80 + 1,puVar4,1);
  lVar10 = param_5[1];
  if (0 < lVar10) {
    puVar9 = (undefined4 *)*param_5;
    lVar11 = *(long *)(param_5[3] + 0x10);
    puVar6 = puVar4;
    do {
      *puVar9 = *(undefined4 *)puVar6;
      puVar9 = puVar9 + lVar11;
      lVar10 = lVar10 + -1;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
    } while (lVar10 != 0);
  }
  if (0x8000 < uVar12) {
    puVar5 = puVar4;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar12) {
    _free(puVar4);
  }
  puVar6 = puVar5;
  __Unwind_Resume();
  *(long *)((long)puVar3 + -0x30) = param_4;
  *(undefined8 *)((long)puVar3 + -0x28) = param_3;
  *(undefined8 **)((long)puVar3 + -0x20) = puVar5;
  *(undefined8 **)((long)puVar3 + -0x18) = puVar4;
  *(undefined1 **)((long)puVar3 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar3 + -8) = FUN_109543cf0;
  *puVar6 = 0;
  puVar6[1] = 0xffffffffffffffff;
  lVar10 = *(long *)(*plVar7 + 0x10);
  lVar11 = *(long *)(plVar7[1] + 0x10);
  puVar3 = puVar6 + 2;
  *puVar3 = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  if (lVar10 != 0 && lVar11 != 0) {
    lVar1 = 0;
    if (lVar11 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar11;
    }
    if (lVar1 < lVar10) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109543da0);
      (*pcVar2)();
    }
  }
  FUN_1093c3d54(puVar3,lVar11 * lVar10);
  *puVar6 = puVar6[2];
  puVar6[1] = puVar6[3];
  FUN_109543494(puVar3,plVar7,plVar7[1]);
  return puVar6;
}


