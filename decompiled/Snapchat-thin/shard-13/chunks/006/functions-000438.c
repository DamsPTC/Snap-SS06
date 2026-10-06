/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa29188; end: 10aa2954f;  */

void FUN_10aa29188(float param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar1 = *(int *)(param_2 + 0x360);
  lVar15 = (long)iVar1;
  iVar13 = (int)param_3;
  if (iVar1 == 0) {
    lVar12 = 0;
    lVar17 = 0;
    lVar16 = 0;
  }
  else {
    if (iVar1 < 0) {
      FUN_10aa3e25c();
      goto LAB_10aa29530;
    }
    lVar12 = lVar15;
    FUN_10aa3e270();
    lVar16 = lVar12 + param_3 * 0x20;
    param_3 = lVar15 << 5;
    _bzero();
    lVar6 = 0;
    pfVar9 = (float *)(lVar12 + 0x10);
    lVar17 = lVar12 + lVar15 * 0x20;
    lVar7 = lVar15;
    do {
      lVar11 = param_2 + 0x10 + (long)(int)((ulong)lVar6 >> 0x20) * 0xd0;
      fVar18 = *(float *)(lVar11 + 0x50) * 100.0;
      fVar19 = *(float *)(lVar11 + 0x84) * 100.0;
      fVar21 = *(float *)(lVar11 + 0x28) * 100.0;
      fVar24 = (float)*(undefined8 *)(lVar11 + 0x20) * 100.0;
      fVar25 = (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20) * 100.0;
      uVar22 = *(undefined8 *)(lVar11 + 0x40);
      fVar20 = *(float *)(lVar11 + 0x48);
      if (iVar13 != 0) {
        fVar26 = (float)((ulong)uVar22 >> 0x20);
        fVar24 = fVar24 + (float)uVar22 * fVar18;
        fVar25 = fVar25 + fVar26 * fVar18;
        fVar21 = fVar21 + fVar20 * fVar18;
        uVar22 = CONCAT44(-fVar26,-(float)uVar22);
        fVar20 = -fVar20;
      }
      if (param_4 != (undefined8 *)0x0) {
        fVar18 = fVar18 * param_1;
        fVar19 = fVar19 * param_1;
        fVar26 = *(float *)(param_4 + 1) * fVar24;
        fVar27 = *(float *)(param_4 + 3) * fVar25;
        fVar23 = (float)*param_4;
        fVar28 = (float)((ulong)*param_4 >> 0x20);
        fVar30 = fVar28 * fVar24;
        fVar32 = (float)param_4[2];
        fVar33 = (float)((ulong)param_4[2] >> 0x20);
        fVar29 = (float)param_4[4];
        fVar31 = (float)((ulong)param_4[4] >> 0x20);
        fVar34 = (float)param_4[6];
        fVar35 = (float)((ulong)param_4[6] >> 0x20);
        fVar24 = fVar23 * fVar24 + fVar32 * fVar25 + fVar29 * fVar21 + fVar34;
        fVar25 = fVar30 + fVar33 * fVar25 + fVar31 * fVar21 + fVar35;
        fVar21 = fVar26 + fVar27 + fVar21 * *(float *)(param_4 + 5) + *(float *)(param_4 + 7);
        fVar26 = (float)uVar22;
        fVar30 = (float)((ulong)uVar22 >> 0x20);
        fVar27 = fVar23 * fVar26 + fVar32 * fVar30 + fVar29 * fVar20 + fVar34 * 0.0;
        fVar23 = fVar28 * fVar26 + fVar33 * fVar30 + fVar31 * fVar20 + fVar35 * 0.0;
        uVar22 = CONCAT44(fVar23,fVar27);
        fVar20 = *(float *)(param_4 + 1) * fVar26 + *(float *)(param_4 + 3) * fVar30 +
                 fVar20 * *(float *)(param_4 + 5) + *(float *)(param_4 + 7) * 0.0;
        fVar26 = fVar27 * fVar27 + fVar23 * fVar23 + fVar20 * fVar20;
        if ((1e-06 < fVar26) && (fVar26 = 1.0 / SQRT(fVar26), 0.0 < fVar26)) {
          uVar22 = CONCAT44(fVar23 * fVar26,fVar27 * fVar26);
          fVar20 = fVar20 * fVar26;
        }
      }
      if (lVar15 == 0) goto LAB_10aa29534;
      *(ulong *)(pfVar9 + -4) = CONCAT44(fVar19,fVar18);
      *(ulong *)(pfVar9 + -2) = CONCAT44(fVar25,fVar24);
      *pfVar9 = fVar21;
      lVar15 = lVar15 + -1;
      *(undefined8 *)(pfVar9 + 1) = uVar22;
      pfVar9[3] = fVar20;
      pfVar9 = pfVar9 + 8;
      lVar6 = lVar6 + 0x100000000;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar15 = *(long *)(*(long *)(param_2 + 0x350) + 0x120);
  plVar5 = *(long **)(lVar15 + 0x10);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 8);
    plVar14 = plVar5 + 1;
    do {
      lVar6 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x358) + 0x120);
  plVar5 = *(long **)(lVar6 + 0x10);
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 8);
    plVar14 = plVar5 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar7 = lVar6;
  if (iVar13 != 0) {
    lVar7 = lVar15;
    lVar15 = lVar6;
  }
  plVar5 = *(long **)(lVar15 + 0x2f8);
  if (plVar5 < *(long **)(lVar15 + 0x300)) {
    *plVar5 = lVar7;
    *(undefined4 *)(plVar5 + 1) = 0;
    *(undefined2 *)((long)plVar5 + 0xc) = 0xffff;
    plVar5[2] = lVar12;
    plVar5[3] = lVar17;
    plVar14 = plVar5 + 5;
    plVar5[4] = lVar16;
  }
  else {
    lVar6 = (long)plVar5 - *(long *)(lVar15 + 0x2f0);
    uVar8 = (lVar6 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar8) {
LAB_10aa29530:
      FUN_10aa3e2a4();
LAB_10aa29534:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa29538);
      (*pcVar4)();
    }
    lStack_58 = lVar15 + 0x2f0;
    lVar11 = (long)*(long **)(lVar15 + 0x300) - *(long *)(lVar15 + 0x2f0) >> 3;
    uVar10 = lVar11 * -0x6666666666666666;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    FUN_10aa3e2b8();
    plVar5 = (long *)(uVar10 + lVar6);
    *plVar5 = lVar7;
    *(undefined4 *)(plVar5 + 1) = 0;
    *(undefined2 *)((long)plVar5 + 0xc) = 0xffff;
    plVar5[2] = lVar12;
    plVar5[3] = lVar17;
    plVar5[4] = lVar16;
    plVar14 = plVar5 + 5;
    lVar16 = (long)plVar5 + (*(long *)(lVar15 + 0x2f0) - *(long *)(lVar15 + 0x2f8));
    func_0x00010aa3e2fc(*(long *)(lVar15 + 0x2f0),*(long *)(lVar15 + 0x2f8),lVar16);
    uStack_78 = *(undefined8 *)(lVar15 + 0x2f0);
    *(long *)(lVar15 + 0x2f0) = lVar16;
    *(long **)(lVar15 + 0x2f8) = plVar14;
    uStack_60 = *(undefined8 *)(lVar15 + 0x300);
    *(ulong *)(lVar15 + 0x300) = uVar10 + param_3 * 0x28;
    uStack_70 = uStack_78;
    uStack_68 = uStack_78;
    func_0x00010aa3e384(&uStack_78);
  }
  *(long **)(lVar15 + 0x2f8) = plVar14;
  return;
}



/* Entry: 10aa29550; end: 10aa295e3;  */

void FUN_10aa29550(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10aa295e4; end: 10aa297fb;  */

void FUN_10aa295e4(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar5 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar8 - lVar5;
  uVar9 = (lVar10 >> 4) * -0x5555555555555555;
  uVar11 = param_3[1] - *param_3;
  uVar7 = uVar9 + ((long)uVar11 >> 4) * -0x5555555555555555;
  if (uVar9 < uVar7) {
    if ((ulong)(param_1[2] - (long)puVar8) < uVar11) {
      if (0x555555555555555 < uVar7) {
        FUN_10aa3fab4();
        lVar5 = *param_1;
        for (lVar10 = param_1[1]; lVar10 != lVar5; lVar10 = lVar10 + -0x28) {
          if (*(long *)(lVar10 + -0x18) != 0) {
            *(long *)(lVar10 + -0x10) = *(long *)(lVar10 + -0x18);
            __ZdlPv();
          }
        }
        param_1[1] = lVar5;
        return;
      }
      lVar5 = param_1[2] - lVar5 >> 4;
      uVar9 = lVar5 * 0x5555555555555556;
      if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
        uVar9 = uVar7;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar9 = 0x555555555555555;
      }
      lVar5 = param_2;
      plStack_58 = param_1;
      FUN_10aa3fac8();
      puVar12 = (undefined8 *)(uVar9 + lVar10);
      puVar8 = puVar12;
      do {
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined1 *)((long)puVar8 + 0x14) = 3;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8 = puVar8 + 6;
      } while (puVar8 != (undefined8 *)((long)puVar12 + uVar11));
      lVar6 = (long)puVar12 + (*param_1 - param_1[1]);
      func_0x00010aa3fb0c(*param_1,param_1[1],lVar6);
      lStack_78 = *param_1;
      *param_1 = lVar6;
      param_1[1] = (long)((long)puVar12 + uVar11);
      lStack_60 = param_1[2];
      param_1[2] = uVar9 + lVar5 * 0x30;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      func_0x00010aa3fb98(&lStack_78);
    }
    else {
      puVar12 = (undefined8 *)((long)puVar8 + uVar11);
      do {
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined1 *)((long)puVar8 + 0x14) = 3;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8 = puVar8 + 6;
      } while (puVar8 != puVar12);
      param_1[1] = (long)puVar12;
    }
  }
  else if (uVar9 - uVar7 != 0) {
    puVar12 = (undefined8 *)(lVar5 + uVar7 * 0x30);
    while (puVar8 != puVar12) {
      puVar8 = puVar8 + -6;
      FUN_10aa3c98c(puVar8);
    }
    param_1[1] = (long)puVar12;
  }
  puVar8 = (undefined8 *)*param_3;
  puVar12 = (undefined8 *)param_3[1];
  if (puVar8 != puVar12) {
    lVar5 = 0;
    lVar6 = *param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + lVar10 + lVar5);
      puVar2 = (undefined8 *)((long)puVar8 + lVar5);
      uVar14 = puVar2[1];
      uVar13 = *puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      lVar4 = puVar1[1];
      puVar1[1] = uVar14;
      *puVar1 = uVar13;
      if (lVar4 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uVar3 = *(undefined4 *)(puVar2 + 2);
      *(undefined1 *)((long)puVar1 + 0x14) = *(undefined1 *)((long)puVar2 + 0x14);
      *(undefined4 *)(puVar1 + 2) = uVar3;
      func_0x00010aa3fbe4(puVar1 + 3,puVar2 + 3);
      *(char *)((long)puVar1 + 0x14) = (char)param_2;
      lVar5 = lVar5 + 0x30;
    } while (puVar2 + 6 != puVar12);
    puVar8 = (undefined8 *)*param_3;
    puVar12 = (undefined8 *)param_3[1];
  }
  while (puVar12 != puVar8) {
    puVar12 = puVar12 + -6;
    FUN_10aa3c98c(puVar12);
  }
  param_3[1] = (long)puVar8;
  return;
}



/* Entry: 10aa297fc; end: 10aa29847;  */

void FUN_10aa297fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10aa29848; end: 10aa29a27;  */

bool FUN_10aa29848(long param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  if (*param_2 != '\x01') {
    return (uVar4 & 4) == 0;
  }
  bVar5 = param_2[1];
  if (((uVar4 >> 2 & 1) == 0) || ((bVar5 >> 2 & 1) != 0)) {
    if ((uVar4 & 3) == 0) {
      bVar5 = bVar5 >> 1;
    }
    if ((bVar5 & 1) == 0) {
      uVar10 = *(ulong *)(param_2 + 8);
      if ((uVar10 != 0) || (*(short *)(param_2 + 0x10) != 0)) {
        uStack_48 = *(undefined8 *)(param_1 + 0x370);
        uStack_50 = *(undefined8 *)(param_1 + 0x368);
        uVar11 = *(ulong *)(param_1 + 0x368);
        uVar8 = (ulong)&uStack_50 | 8;
        FUN_10a3c8d60();
        if ((uVar11 & uVar10) != *(ulong *)(param_1 + 0x368)) {
          return false;
        }
        if (uVar8 != *(ulong *)(param_1 + 0x370)) {
          return false;
        }
      }
      uVar10 = *(ulong *)(param_2 + 0x18);
      if ((uVar10 != 0) || (*(short *)(param_2 + 0x20) != 0)) {
        uStack_48 = *(undefined8 *)(param_1 + 0x370);
        uStack_50 = *(undefined8 *)(param_1 + 0x368);
        uVar11 = *(ulong *)(param_1 + 0x368);
        uVar8 = (ulong)&uStack_50 | 8;
        FUN_10a3c8d60();
        if (((uVar11 & uVar10) == *(ulong *)(param_1 + 0x368)) &&
           (uVar8 == *(ulong *)(param_1 + 0x370))) {
          return false;
        }
      }
      plVar15 = *(long **)(param_2 + 0x28);
      plVar2 = *(long **)(param_2 + 0x30);
      plVar14 = *(long **)(param_2 + 0x40);
      plVar3 = *(long **)(param_2 + 0x48);
      if ((plVar2 != plVar15) || (plVar3 != plVar14)) {
        plVar9 = *(long **)(param_1 + 0x10);
        if ((plVar9 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(param_1 + 8);
          plVar1 = plVar9 + 1;
          do {
            lVar12 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (plVar2 != plVar15) {
          do {
            plVar9 = plVar15;
            if (*plVar15 == lVar13) break;
            plVar15 = plVar15 + 1;
            plVar9 = plVar2;
          } while (plVar15 != plVar2);
          if (plVar9 == plVar2) {
            return false;
          }
        }
        if (plVar3 != plVar14) {
          do {
            plVar15 = plVar14;
            if (*plVar14 == lVar13) break;
            plVar14 = plVar14 + 1;
            plVar15 = plVar3;
          } while (plVar14 != plVar3);
          if (plVar15 != plVar3) {
            return false;
          }
        }
      }
      return true;
    }
  }
  return false;
}



/* Entry: 10aa29a28; end: 10aa29a87;  */

undefined8 * FUN_10aa29a28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b121c0;
  func_0x0001098079e0(param_1 + 2);
  return param_1;
}



/* Entry: 10aa29a88; end: 10aa29b97;  */

void FUN_10aa29a88(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((((6 < *(uint *)(param_2 + 0x1f) ||
         (1 << (ulong)(*(uint *)(param_2 + 0x1f) & 0x1f) & 100U) == 0) ||
       (6 < *(uint *)(param_3 + 0x1f) ||
        (1 << (ulong)(*(uint *)(param_3 + 0x1f) & 0x1f) & 100U) == 0)) &&
      (((int)param_2[0x28] == 0 ||
       (plVar1 = param_2, (**(code **)(*param_2 + 0x18))(param_2,param_3), (int)plVar1 != 0)))) &&
     ((((int)param_3[0x28] == 0 ||
       (plVar1 = param_3, (**(code **)(*param_3 + 0x18))(param_3,param_2), (int)plVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x5150) & 1) == 0)))) {
    lVar4 = param_2[0x24];
    lVar3 = param_3[0x24];
    lVar2 = lVar3;
    FUN_10aa29848(lVar3,lVar4 + 0x3a0);
    if ((((int)lVar2 != 0) && (FUN_10aa29848(lVar4,lVar3 + 0x3a0), (int)lVar4 != 0)) &&
       (0x11 < *(ushort *)(lVar3 + 0x360))) {
      FUN_10aa69538();
    }
  }
  return;
}



/* Entry: 10aa29b98; end: 10aa2a123;  */

ulong FUN_10aa29b98(ushort *param_1,ulong param_2,long param_3,uint param_4,long param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  ushort *puVar28;
  ulong uVar29;
  byte *pbVar30;
  uint *puVar31;
  int iVar32;
  ushort *puVar33;
  ushort *puVar34;
  ushort *puVar35;
  ushort *puVar36;
  
  puVar28 = param_1;
  if ((param_4 & 0xff) == 4) {
    if (param_2 != 0) {
      iVar32 = 0;
      uVar29 = 0;
      puVar31 = (uint *)(param_3 + -4);
      do {
        uVar4 = puVar31[1];
        uVar6 = puVar31[2];
        uVar8 = puVar31[3];
        puVar33 = (ushort *)(param_5 + (ulong)uVar4 * 6);
        puVar34 = (ushort *)(param_5 + (ulong)uVar6 * 6);
        puVar35 = (ushort *)(param_5 + (ulong)uVar8 * 6);
        uVar12 = *puVar33;
        uVar13 = puVar33[1];
        uVar14 = puVar33[2];
        uVar15 = *puVar34;
        uVar16 = puVar34[1];
        uVar17 = puVar34[2];
        uVar18 = *puVar35;
        uVar19 = puVar35[1];
        uVar20 = puVar35[2];
        uVar1 = uVar18;
        if (uVar15 <= uVar18) {
          uVar1 = uVar15;
        }
        if (uVar12 <= uVar1) {
          uVar1 = uVar12;
        }
        uVar21 = uVar19;
        if (uVar16 <= uVar19) {
          uVar21 = uVar16;
        }
        if (uVar13 <= uVar21) {
          uVar21 = uVar13;
        }
        uVar22 = uVar20;
        if (uVar17 <= uVar20) {
          uVar22 = uVar17;
        }
        if (uVar14 <= uVar22) {
          uVar22 = uVar14;
        }
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        uVar12 = uVar12 + 1;
        if (uVar16 <= uVar19) {
          uVar16 = uVar19;
        }
        if (uVar13 <= uVar16) {
          uVar13 = uVar16;
        }
        uVar13 = uVar13 + 1;
        if (uVar17 <= uVar20) {
          uVar17 = uVar20;
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        uVar14 = uVar14 + 1;
        if (iVar32 == 1) {
          uVar5 = puVar31[-2];
          uVar7 = puVar31[-1];
          uVar9 = *puVar31;
          bVar27 = (uVar6 == uVar5 || uVar6 == uVar7) || uVar6 == uVar9;
          if ((uVar4 == uVar5 || uVar4 == uVar7) || uVar4 == uVar9) {
            bVar27 = bVar27 + 1;
          }
          if ((uVar8 == uVar5 || uVar8 == uVar7) || uVar8 == uVar9) {
            bVar27 = bVar27 + 1;
          }
          if (bVar27 < 2) goto LAB_10aa2a058;
          uVar18 = puVar28[-8];
          if (uVar1 <= puVar28[-8]) {
            uVar18 = uVar1;
          }
          puVar28[-8] = uVar18;
          uVar1 = puVar28[-7];
          if (uVar21 <= puVar28[-7]) {
            uVar1 = uVar21;
          }
          puVar28[-7] = uVar1;
          uVar1 = puVar28[-6];
          if (uVar22 <= puVar28[-6]) {
            uVar1 = uVar22;
          }
          puVar28[-6] = uVar1;
          if (uVar12 <= puVar28[-5]) {
            uVar12 = puVar28[-5];
          }
          puVar28[-5] = uVar12;
          if (uVar13 <= puVar28[-4]) {
            uVar13 = puVar28[-4];
          }
          puVar28[-4] = uVar13;
          if (uVar14 <= puVar28[-3]) {
            uVar14 = puVar28[-3];
          }
          puVar28[-3] = uVar14;
          *(uint *)(puVar28 + -2) = *(uint *)(puVar28 + -2) | 0x1000000;
          iVar32 = 2;
        }
        else {
LAB_10aa2a058:
          *puVar28 = uVar1;
          puVar28[1] = uVar21;
          puVar28[2] = uVar22;
          puVar28[3] = uVar12;
          puVar28[4] = uVar13;
          puVar28[5] = uVar14;
          *(int *)(puVar28 + 6) = (int)uVar29;
          puVar28 = puVar28 + 8;
          iVar32 = 1;
        }
        uVar29 = (ulong)((int)uVar29 + 1);
        puVar31 = puVar31 + 3;
      } while (param_2 != uVar29);
    }
  }
  else if (param_4 == 2) {
    if (param_2 != 0) {
      iVar32 = 0;
      uVar29 = 0;
      puVar33 = (ushort *)(param_3 + -2);
      do {
        uVar18 = puVar33[1];
        uVar19 = puVar33[2];
        uVar20 = puVar33[3];
        puVar34 = (ushort *)(param_5 + (ulong)uVar18 * 6);
        puVar35 = (ushort *)(param_5 + (ulong)uVar19 * 6);
        puVar36 = (ushort *)(param_5 + (ulong)uVar20 * 6);
        uVar12 = *puVar34;
        uVar13 = puVar34[1];
        uVar14 = puVar34[2];
        uVar21 = *puVar35;
        uVar22 = puVar35[1];
        uVar23 = puVar35[2];
        uVar15 = *puVar36;
        uVar16 = puVar36[1];
        uVar17 = puVar36[2];
        uVar1 = uVar15;
        if (uVar21 <= uVar15) {
          uVar1 = uVar21;
        }
        if (uVar12 <= uVar1) {
          uVar1 = uVar12;
        }
        uVar2 = uVar16;
        if (uVar22 <= uVar16) {
          uVar2 = uVar22;
        }
        if (uVar13 <= uVar2) {
          uVar2 = uVar13;
        }
        uVar3 = uVar17;
        if (uVar23 <= uVar17) {
          uVar3 = uVar23;
        }
        if (uVar14 <= uVar3) {
          uVar3 = uVar14;
        }
        if (uVar21 <= uVar15) {
          uVar21 = uVar15;
        }
        if (uVar12 <= uVar21) {
          uVar12 = uVar21;
        }
        uVar12 = uVar12 + 1;
        if (uVar22 <= uVar16) {
          uVar22 = uVar16;
        }
        if (uVar13 <= uVar22) {
          uVar13 = uVar22;
        }
        uVar13 = uVar13 + 1;
        if (uVar23 <= uVar17) {
          uVar23 = uVar17;
        }
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        uVar14 = uVar14 + 1;
        if (iVar32 == 1) {
          uVar16 = puVar33[-2];
          uVar17 = puVar33[-1];
          uVar15 = *puVar33;
          bVar27 = (uVar19 == uVar16 || uVar19 == uVar17) || uVar19 == uVar15;
          if ((uVar18 == uVar16 || uVar18 == uVar17) || uVar18 == uVar15) {
            bVar27 = bVar27 + 1;
          }
          if ((uVar20 == uVar16 || uVar20 == uVar17) || uVar20 == uVar15) {
            bVar27 = bVar27 + 1;
          }
          if (bVar27 < 2) goto LAB_10aa29e98;
          uVar18 = puVar28[-8];
          if (uVar1 <= puVar28[-8]) {
            uVar18 = uVar1;
          }
          puVar28[-8] = uVar18;
          uVar1 = puVar28[-7];
          if (uVar2 <= puVar28[-7]) {
            uVar1 = uVar2;
          }
          puVar28[-7] = uVar1;
          uVar1 = puVar28[-6];
          if (uVar3 <= puVar28[-6]) {
            uVar1 = uVar3;
          }
          puVar28[-6] = uVar1;
          if (uVar12 <= puVar28[-5]) {
            uVar12 = puVar28[-5];
          }
          puVar28[-5] = uVar12;
          if (uVar13 <= puVar28[-4]) {
            uVar13 = puVar28[-4];
          }
          puVar28[-4] = uVar13;
          if (uVar14 <= puVar28[-3]) {
            uVar14 = puVar28[-3];
          }
          puVar28[-3] = uVar14;
          *(uint *)(puVar28 + -2) = *(uint *)(puVar28 + -2) | 0x1000000;
          iVar32 = 2;
        }
        else {
LAB_10aa29e98:
          *puVar28 = uVar1;
          puVar28[1] = uVar2;
          puVar28[2] = uVar3;
          puVar28[3] = uVar12;
          puVar28[4] = uVar13;
          puVar28[5] = uVar14;
          *(int *)(puVar28 + 6) = (int)uVar29;
          puVar28 = puVar28 + 8;
          iVar32 = 1;
        }
        uVar29 = (ulong)((int)uVar29 + 1);
        puVar33 = puVar33 + 3;
      } while (param_2 != uVar29);
    }
  }
  else if ((param_4 == 1) && (param_2 != 0)) {
    iVar32 = 0;
    uVar29 = 0;
    pbVar30 = (byte *)(param_3 + -1);
    do {
      bVar27 = pbVar30[1];
      bVar26 = pbVar30[2];
      bVar10 = pbVar30[3];
      puVar33 = (ushort *)(param_5 + (ulong)bVar27 * 6);
      puVar34 = (ushort *)(param_5 + (ulong)bVar26 * 6);
      puVar35 = (ushort *)(param_5 + (ulong)bVar10 * 6);
      uVar12 = *puVar33;
      uVar13 = puVar33[1];
      uVar14 = puVar33[2];
      uVar15 = *puVar34;
      uVar16 = puVar34[1];
      uVar17 = puVar34[2];
      uVar18 = *puVar35;
      uVar19 = puVar35[1];
      uVar20 = puVar35[2];
      uVar1 = uVar18;
      if (uVar15 <= uVar18) {
        uVar1 = uVar15;
      }
      if (uVar12 <= uVar1) {
        uVar1 = uVar12;
      }
      uVar21 = uVar19;
      if (uVar16 <= uVar19) {
        uVar21 = uVar16;
      }
      if (uVar13 <= uVar21) {
        uVar21 = uVar13;
      }
      uVar22 = uVar20;
      if (uVar17 <= uVar20) {
        uVar22 = uVar17;
      }
      if (uVar14 <= uVar22) {
        uVar22 = uVar14;
      }
      if (uVar15 <= uVar18) {
        uVar15 = uVar18;
      }
      if (uVar12 <= uVar15) {
        uVar12 = uVar15;
      }
      uVar12 = uVar12 + 1;
      if (uVar16 <= uVar19) {
        uVar16 = uVar19;
      }
      if (uVar13 <= uVar16) {
        uVar13 = uVar16;
      }
      uVar13 = uVar13 + 1;
      if (uVar17 <= uVar20) {
        uVar17 = uVar20;
      }
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      uVar14 = uVar14 + 1;
      if (iVar32 == 1) {
        bVar24 = pbVar30[-2];
        bVar25 = pbVar30[-1];
        bVar11 = *pbVar30;
        bVar26 = (bVar26 == bVar24 || bVar26 == bVar25) || bVar26 == bVar11;
        if ((bVar27 == bVar24 || bVar27 == bVar25) || bVar27 == bVar11) {
          bVar26 = bVar26 + 1;
        }
        if ((bVar10 == bVar24 || bVar10 == bVar25) || bVar10 == bVar11) {
          bVar26 = bVar26 + 1;
        }
        if (bVar26 < 2) goto LAB_10aa29cd4;
        uVar18 = puVar28[-8];
        if (uVar1 <= puVar28[-8]) {
          uVar18 = uVar1;
        }
        puVar28[-8] = uVar18;
        uVar1 = puVar28[-7];
        if (uVar21 <= puVar28[-7]) {
          uVar1 = uVar21;
        }
        puVar28[-7] = uVar1;
        uVar1 = puVar28[-6];
        if (uVar22 <= puVar28[-6]) {
          uVar1 = uVar22;
        }
        puVar28[-6] = uVar1;
        if (uVar12 <= puVar28[-5]) {
          uVar12 = puVar28[-5];
        }
        puVar28[-5] = uVar12;
        if (uVar13 <= puVar28[-4]) {
          uVar13 = puVar28[-4];
        }
        puVar28[-4] = uVar13;
        if (uVar14 <= puVar28[-3]) {
          uVar14 = puVar28[-3];
        }
        puVar28[-3] = uVar14;
        *(uint *)(puVar28 + -2) = *(uint *)(puVar28 + -2) | 0x1000000;
        iVar32 = 2;
      }
      else {
LAB_10aa29cd4:
        *puVar28 = uVar1;
        puVar28[1] = uVar21;
        puVar28[2] = uVar22;
        puVar28[3] = uVar12;
        puVar28[4] = uVar13;
        puVar28[5] = uVar14;
        *(int *)(puVar28 + 6) = (int)uVar29;
        puVar28 = puVar28 + 8;
        iVar32 = 1;
      }
      uVar29 = (ulong)((int)uVar29 + 1);
      pbVar30 = pbVar30 + 3;
    } while (param_2 != uVar29);
  }
  return (ulong)((long)puVar28 - (long)param_1) >> 4;
}



/* Entry: 10aa2a124; end: 10aa2a523;  */

undefined1 (*) [16]
FUN_10aa2a124(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 (*pauVar21) [16];
  ushort *puVar22;
  undefined1 (*pauVar23) [16];
  uint *puVar24;
  ushort *puVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  uint *puVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined1 (*unaff_x19) [16];
  long lVar39;
  ulong uVar40;
  int iVar41;
  ulong uVar42;
  undefined8 extraout_var;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined8 in_register_00005028;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int aiStack_74 [3];
  long lStack_68;
  
  uVar46 = (undefined4)((ulong)param_2 >> 0x20);
  uVar45 = (undefined4)param_2;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *param_4;
  param_3[1] = param_4[1];
  *param_3 = uVar13;
  uVar13 = param_4[2];
  param_3[3] = param_4[3];
  param_3[2] = uVar13;
  uVar13 = param_4[4];
  param_3[5] = param_4[5];
  param_3[4] = uVar13;
  uVar13 = param_4[6];
  param_3[7] = param_4[7];
  param_3[6] = uVar13;
  uVar13 = param_4[8];
  param_3[9] = param_4[9];
  param_3[8] = uVar13;
  *(int *)(param_3 + 10) = (int)param_6;
  puVar24 = (uint *)(param_6 << 1);
  pauVar21 = (undefined1 (*) [16])(param_3 + 0xb);
  FUN_10aa2a524();
  if (param_6 < 0xaaaaaaaaaaaaaab) {
    unaff_x19 = (undefined1 (*) [16])(param_6 * 0x18);
    __Znwm();
    _bzero();
    if (param_6 != 1) {
      uVar32 = 0;
      iVar36 = 0;
      uVar40 = 0;
      lVar31 = param_3[0xb];
      *(undefined8 *)*unaff_x19 = 0;
      *(int *)(*unaff_x19 + 8) = (int)param_6;
      pauVar21 = unaff_x19;
      do {
        *(int *)*pauVar21 = iVar36 + 1;
        iVar41 = (int)param_6;
        iVar35 = (int)uVar40;
        pauVar33 = pauVar21;
        if (iVar36 == 1) {
          iVar36 = *(int *)(*pauVar21 + 0xc);
          *(int *)(pauVar21[1] + 4) = iVar35;
          if (iVar36 + 1 == iVar41) {
            uVar13 = param_5[(long)iVar36 * 2];
            puVar38 = (undefined8 *)(lVar31 + (long)iVar35 * 0x10);
            puVar38[1] = (param_5 + (long)iVar36 * 2)[1];
            *puVar38 = uVar13;
            uVar40 = (ulong)(iVar35 + 1);
          }
          else {
            pauVar33 = (undefined1 (*) [16])(pauVar21[1] + 8);
            *(undefined4 *)*pauVar33 = 0;
            *(int *)(pauVar21[1] + 0xc) = iVar36;
            *(int *)pauVar21[2] = iVar41;
          }
        }
        else if (iVar36 == 0) {
          lVar29 = 0;
          lVar30 = 0;
          lVar39 = 0;
          iVar36 = (int)uVar32;
          lVar37 = (long)iVar41 - (long)iVar36;
          puVar22 = (ushort *)((long)param_5 + (long)iVar36 * 0x10 + 6);
          puVar25 = puVar22;
          lVar27 = lVar37;
          do {
            lVar39 = lVar39 + (ulong)puVar25[-3] + (ulong)*puVar25;
            lVar30 = lVar30 + (ulong)puVar25[-2] + (ulong)puVar25[1];
            lVar29 = lVar29 + (ulong)puVar25[-1] + (ulong)puVar25[2];
            puVar25 = puVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          uVar28 = 0;
          uVar40 = 0;
          uVar42 = (ulong)(iVar41 - iVar36);
          aiStack_74[0] = 0;
          if (uVar42 != 0) {
            aiStack_74[0] = (int)((ulong)(lVar39 * 0x10) / uVar42);
          }
          aiStack_74[1] = 0;
          if (uVar42 != 0) {
            aiStack_74[1] = (int)((ulong)(lVar30 * 0x10) / uVar42);
          }
          aiStack_74[2] = 0;
          if (uVar42 != 0) {
            aiStack_74[2] = (int)((ulong)(lVar29 * 0x10) / uVar42);
          }
          uVar42 = 0;
          lVar39 = lVar37;
          do {
            iVar11 = ((uint)*puVar22 + (uint)puVar22[-3]) * 0x10 - aiStack_74[0];
            iVar26 = ((uint)puVar22[1] + (uint)puVar22[-2]) * 0x10 - aiStack_74[1];
            iVar12 = ((uint)puVar22[2] + (uint)puVar22[-1]) * 0x10 - aiStack_74[2];
            uVar40 = uVar40 + (long)iVar11 * (long)iVar11;
            uVar42 = uVar42 + (long)iVar26 * (long)iVar26;
            uVar28 = uVar28 + (long)iVar12 * (long)iVar12;
            puVar22 = puVar22 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 1;
          if (uVar42 < uVar28) {
            lVar39 = 2;
          }
          lVar30 = 2;
          if (uVar28 <= uVar40) {
            lVar30 = 0;
          }
          if (uVar42 <= uVar40) {
            lVar39 = lVar30;
          }
          iVar11 = aiStack_74[lVar39];
          puVar38 = (undefined8 *)
                    ((long)param_5 + (-(uVar32 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4));
          do {
            puVar22 = (ushort *)((long)puVar38 + lVar39 * 2);
            if (iVar11 < (int)(((uint)puVar22[3] + (uint)*puVar22) * 0x10)) {
              uVar14 = *puVar38;
              uVar15 = puVar38[1];
              iVar26 = (int)uVar32;
              in_register_00005028 = (param_5 + (long)iVar26 * 2)[1];
              uVar13 = param_5[(long)iVar26 * 2];
              uVar45 = (undefined4)uVar13;
              uVar46 = (undefined4)((ulong)uVar13 >> 0x20);
              puVar38[1] = in_register_00005028;
              *puVar38 = uVar13;
              (param_5 + (long)iVar26 * 2)[1] = uVar15;
              param_5[(long)iVar26 * 2] = uVar14;
              uVar32 = (ulong)(iVar26 + 1);
            }
            puVar38 = puVar38 + 2;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          iVar26 = (int)uVar32;
          iVar11 = iVar36 + (iVar41 - iVar36 >> 1);
          if (iVar26 != iVar41 && iVar26 != iVar36) {
            iVar11 = iVar26;
          }
          *(int *)(*pauVar21 + 0xc) = iVar11;
          *(int *)pauVar21[1] = iVar35;
          uVar40 = (long)iVar35 + 1;
          if (iVar36 + 1 == iVar11) {
            uVar13 = param_5[(long)iVar36 * 2];
            puVar38 = (undefined8 *)(lVar31 + uVar40 * 0x10);
            puVar38[1] = (param_5 + (long)iVar36 * 2)[1];
            *puVar38 = uVar13;
            uVar40 = (ulong)(iVar35 + 2);
          }
          else {
            *(undefined4 *)*(undefined1 (*) [16])(pauVar21[1] + 8) = 0;
            *(int *)(pauVar21[1] + 0xc) = iVar36;
            *(int *)pauVar21[2] = iVar11;
            pauVar33 = (undefined1 (*) [16])(pauVar21[1] + 8);
          }
        }
        else {
          iVar36 = *(int *)pauVar21[1];
          puVar22 = (ushort *)(lVar31 + (long)iVar36 * 0x10);
          puVar25 = (ushort *)(lVar31 + (long)*(int *)(pauVar21[1] + 4) * 0x10);
          uVar6 = puVar25[1];
          uVar7 = puVar25[2];
          uVar8 = puVar25[3];
          uVar9 = puVar25[4];
          uVar10 = puVar25[5];
          uVar4 = *puVar25;
          if (puVar22[8] <= *puVar25) {
            uVar4 = puVar22[8];
          }
          *puVar22 = uVar4;
          if (puVar22[9] <= uVar6) {
            uVar6 = puVar22[9];
          }
          puVar22[1] = uVar6;
          if (puVar22[10] <= uVar7) {
            uVar7 = puVar22[10];
          }
          puVar22[2] = uVar7;
          uVar4 = puVar22[0xb];
          if (puVar22[0xb] <= uVar8) {
            uVar4 = uVar8;
          }
          puVar22[3] = uVar4;
          uVar4 = puVar22[0xc];
          if (puVar22[0xc] <= uVar9) {
            uVar4 = uVar9;
          }
          puVar22[4] = uVar4;
          uVar4 = puVar22[0xd];
          if (puVar22[0xd] <= uVar10) {
            uVar4 = uVar10;
          }
          puVar22[5] = uVar4;
          *(uint *)(puVar22 + 6) = iVar35 - iVar36 | 0x80000000;
          if (pauVar21 == unaff_x19) goto LAB_10aa2a4b8;
          pauVar33 = (undefined1 (*) [16])(pauVar21[-2] + 8);
        }
        iVar36 = *(int *)*pauVar33;
        uVar32 = (ulong)*(uint *)(*pauVar33 + 4);
        param_6 = (ulong)*(uint *)(*pauVar33 + 8);
        pauVar21 = pauVar33;
      } while( true );
    }
    pauVar21 = (undefined1 (*) [16])(param_3 + 0xb);
    puVar24 = (uint *)0x1;
    FUN_10aa2a524();
    puVar38 = (undefined8 *)param_3[0xb];
    if ((undefined8 *)param_3[0xc] == puVar38) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10aa2a504);
      (*pcVar16)();
    }
    uVar13 = *param_5;
    puVar38[1] = param_5[1];
    *puVar38 = uVar13;
    goto LAB_10aa2a4c4;
  }
  FUN_10aa41394();
  goto LAB_10aa2a508;
LAB_10aa2a4b8:
  puVar24 = (uint *)(uVar40 & 0xffffffff);
  pauVar21 = (undefined1 (*) [16])(param_3 + 0xb);
  FUN_10aa2a524();
LAB_10aa2a4c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x00010bdbd7ac;
LAB_10aa2a508:
  ___stack_chk_fail();
  __ZdlPv(unaff_x19);
  __Unwind_Resume();
  lVar31 = *(long *)*pauVar21;
  pauVar33 = *(undefined1 (**) [16])(*pauVar21 + 8);
  puVar34 = (uint *)((long)pauVar33 - lVar31 >> 4);
  if (puVar34 < puVar24) {
    uVar40 = (long)puVar24 - (long)puVar34;
    if ((ulong)(*(long *)pauVar21[1] - (long)pauVar33 >> 4) < uVar40) {
      if ((ulong)puVar24 >> 0x3c != 0) {
        auVar43._0_8_ = FUN_10aa4134c();
        auVar43._8_8_ = extraout_var;
        puVar22 = *(ushort **)(pauVar21[5] + 8);
        puVar25 = *(ushort **)pauVar21[6];
        puVar34 = puVar24;
        if (puVar22 != puVar25) {
          auVar43 = NEON_fmax(auVar43,*pauVar21,4);
          auVar43 = NEON_fmin(auVar43,pauVar21[1],4);
          fVar47 = (float)*(undefined8 *)pauVar21[3];
          fVar48 = (float)((ulong)*(undefined8 *)pauVar21[3] >> 0x20);
          fVar49 = (float)*(undefined8 *)(pauVar21[3] + 8);
          fVar50 = (float)*(undefined8 *)pauVar21[2];
          fVar51 = (float)((ulong)*(undefined8 *)pauVar21[2] >> 0x20);
          fVar52 = (float)*(undefined8 *)(pauVar21[2] + 8);
          auVar44._4_4_ = uVar46;
          auVar44._0_4_ = uVar45;
          auVar44._8_8_ = in_register_00005028;
          auVar44 = NEON_fmax(auVar44,*pauVar21,4);
          auVar44 = NEON_fmin(auVar44,pauVar21[1],4);
          uVar1 = (int)(fVar50 * (auVar44._0_4_ - fVar47)) + 1U & 0xffff;
          uVar2 = (int)(fVar52 * (auVar44._8_4_ - fVar49)) + 1U & 0xffff;
          uVar3 = (int)(fVar51 * (auVar44._4_4_ - fVar48)) + 1U & 0xffff;
          do {
            bVar17 = false;
            bVar19 = true;
            if (((int)(fVar50 * (auVar43._0_4_ - fVar47)) & 0xffffU) <= (uint)puVar22[3]) {
              bVar19 = uVar1 <= *puVar22;
              bVar17 = *puVar22 == uVar1;
            }
            bVar18 = false;
            bVar20 = true;
            if ((!bVar19 || bVar17) &&
                ((int)(fVar52 * (auVar43._8_4_ - fVar49)) & 0xffffU) <= (uint)puVar22[5]) {
              bVar20 = uVar2 <= puVar22[2];
              bVar18 = puVar22[2] == uVar2;
            }
            bVar17 = false;
            bVar19 = true;
            if ((!bVar20 || bVar18) &&
                ((int)(fVar51 * (auVar43._4_4_ - fVar48)) & 0xffffU) <= (uint)puVar22[4]) {
              bVar19 = uVar3 <= puVar22[1];
              bVar17 = puVar22[1] == uVar3;
            }
            uVar5 = *(uint *)(puVar22 + 6);
            if (((int)uVar5 < 0) || (bVar19 && !bVar17)) {
              if (-1 < (int)uVar5 || (!bVar19 || bVar17)) goto LAB_10aa2a6f0;
              puVar22 = puVar22 + ((ulong)uVar5 & 0x7fffffff) * 8;
            }
            else {
              *puVar34 = uVar5;
              puVar34 = puVar34 + 1;
LAB_10aa2a6f0:
              puVar22 = puVar22 + 8;
            }
          } while (puVar22 != puVar25);
        }
        return (undefined1 (*) [16])((ulong)((long)puVar34 - (long)puVar24) >> 2);
      }
      uVar32 = *(long *)pauVar21[1] - lVar31;
      puVar34 = (uint *)((long)uVar32 >> 3);
      if (puVar34 <= puVar24) {
        puVar34 = puVar24;
      }
      if (0x7fffffffffffffef < uVar32) {
        puVar34 = (uint *)0xfffffffffffffff;
      }
      FUN_10aa41360();
      lVar31 = (long)puVar34 + ((long)pauVar33 - lVar31);
      _bzero(lVar31,uVar40 * 0x10);
      lVar39 = lVar31 - (*(long *)(*pauVar21 + 8) - *(long *)*pauVar21);
      _memcpy(lVar39);
      unaff_x19 = *(undefined1 (**) [16])*pauVar21;
      *(long *)*pauVar21 = lVar39;
      *(ulong *)(*pauVar21 + 8) = lVar31 + uVar40 * 0x10;
      *(uint **)pauVar21[1] = puVar34 + (long)puVar24 * 4;
      if (unaff_x19 == (undefined1 (*) [16])0x0) {
        return (undefined1 (*) [16])0x0;
      }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(unaff_x19);
      return unaff_x19;
    }
    pauVar23 = pauVar33;
    _bzero(pauVar33,uVar40 * 0x10);
    pauVar33 = pauVar33 + uVar40;
  }
  else {
    if (puVar34 <= puVar24) {
      return pauVar21;
    }
    pauVar33 = (undefined1 (*) [16])(lVar31 + (long)puVar24 * 0x10);
    pauVar23 = pauVar21;
  }
  *(undefined1 (**) [16])(*pauVar21 + 8) = pauVar33;
  return pauVar23;
}



/* Entry: 10aa2a524; end: 10aa2a60f;  */

undefined1 (*) [16]
FUN_10aa2a524(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ushort *puVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 extraout_var;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 in_register_00005028;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar21 = (undefined4)((ulong)param_2 >> 0x20);
  uVar20 = (undefined4)param_2;
  lVar4 = *(long *)*param_3;
  pauVar11 = *(undefined1 (**) [16])(*param_3 + 8);
  puVar15 = (uint *)((long)pauVar11 - lVar4 >> 4);
  if (puVar15 < param_4) {
    uVar17 = (long)param_4 - (long)puVar15;
    if ((ulong)(*(long *)param_3[1] - (long)pauVar11 >> 4) < uVar17) {
      if ((ulong)param_4 >> 0x3c == 0) {
        uVar13 = *(long *)param_3[1] - lVar4;
        puVar15 = (uint *)((long)uVar13 >> 3);
        if (puVar15 <= param_4) {
          puVar15 = param_4;
        }
        if (0x7fffffffffffffef < uVar13) {
          puVar15 = (uint *)0xfffffffffffffff;
        }
        FUN_10aa41360();
        lVar4 = (long)puVar15 + ((long)pauVar11 - lVar4);
        _bzero(lVar4,uVar17 * 0x10);
        lVar16 = lVar4 - (*(long *)(*param_3 + 8) - *(long *)*param_3);
        _memcpy(lVar16);
        pauVar11 = *(undefined1 (**) [16])*param_3;
        *(long *)*param_3 = lVar16;
        *(ulong *)(*param_3 + 8) = lVar4 + uVar17 * 0x10;
        *(uint **)param_3[1] = puVar15 + (long)param_4 * 4;
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          return (undefined1 (*) [16])0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return pauVar11;
      }
      auVar18._0_8_ = FUN_10aa4134c();
      auVar18._8_8_ = extraout_var;
      puVar14 = *(ushort **)(param_3[5] + 8);
      puVar5 = *(ushort **)param_3[6];
      puVar15 = param_4;
      if (puVar14 != puVar5) {
        auVar18 = NEON_fmax(auVar18,*param_3,4);
        auVar18 = NEON_fmin(auVar18,param_3[1],4);
        fVar22 = (float)*(undefined8 *)param_3[3];
        fVar23 = (float)((ulong)*(undefined8 *)param_3[3] >> 0x20);
        fVar24 = (float)*(undefined8 *)(param_3[3] + 8);
        fVar25 = (float)*(undefined8 *)param_3[2];
        fVar26 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
        fVar27 = (float)*(undefined8 *)(param_3[2] + 8);
        auVar19._4_4_ = uVar21;
        auVar19._0_4_ = uVar20;
        auVar19._8_8_ = in_register_00005028;
        auVar19 = NEON_fmax(auVar19,*param_3,4);
        auVar19 = NEON_fmin(auVar19,param_3[1],4);
        uVar1 = (int)(fVar25 * (auVar19._0_4_ - fVar22)) + 1U & 0xffff;
        uVar2 = (int)(fVar27 * (auVar19._8_4_ - fVar24)) + 1U & 0xffff;
        uVar3 = (int)(fVar26 * (auVar19._4_4_ - fVar23)) + 1U & 0xffff;
        do {
          bVar7 = false;
          bVar9 = true;
          if (((int)(fVar25 * (auVar18._0_4_ - fVar22)) & 0xffffU) <= (uint)puVar14[3]) {
            bVar9 = uVar1 <= *puVar14;
            bVar7 = *puVar14 == uVar1;
          }
          bVar8 = false;
          bVar10 = true;
          if ((!bVar9 || bVar7) &&
              ((int)(fVar27 * (auVar18._8_4_ - fVar24)) & 0xffffU) <= (uint)puVar14[5]) {
            bVar10 = uVar2 <= puVar14[2];
            bVar8 = puVar14[2] == uVar2;
          }
          bVar7 = false;
          bVar9 = true;
          if ((!bVar10 || bVar8) &&
              ((int)(fVar26 * (auVar18._4_4_ - fVar23)) & 0xffffU) <= (uint)puVar14[4]) {
            bVar9 = uVar3 <= puVar14[1];
            bVar7 = puVar14[1] == uVar3;
          }
          uVar6 = *(uint *)(puVar14 + 6);
          if (((int)uVar6 < 0) || (bVar9 && !bVar7)) {
            if (-1 < (int)uVar6 || (!bVar9 || bVar7)) goto LAB_10aa2a6f0;
            puVar14 = puVar14 + ((ulong)uVar6 & 0x7fffffff) * 8;
          }
          else {
            *puVar15 = uVar6;
            puVar15 = puVar15 + 1;
LAB_10aa2a6f0:
            puVar14 = puVar14 + 8;
          }
        } while (puVar14 != puVar5);
      }
      return (undefined1 (*) [16])((ulong)((long)puVar15 - (long)param_4) >> 2);
    }
    pauVar12 = pauVar11;
    _bzero(pauVar11,uVar17 * 0x10);
    pauVar11 = pauVar11 + uVar17;
  }
  else {
    if (puVar15 <= param_4) {
      return param_3;
    }
    pauVar11 = (undefined1 (*) [16])(lVar4 + (long)param_4 * 0x10);
    pauVar12 = param_3;
  }
  *(undefined1 (**) [16])(*param_3 + 8) = pauVar11;
  return pauVar12;
}



/* Entry: 10aa2a610; end: 10aa2a9ab;  */

ulong FUN_10aa2a610(undefined8 param_1,undefined1 (*param_2) [16],uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort *puVar10;
  uint *puVar11;
  undefined1 in_q0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_register_00005028;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar10 = *(ushort **)(param_2[5] + 8);
  puVar4 = *(ushort **)param_2[6];
  puVar11 = param_3;
  if (puVar10 != puVar4) {
    auVar12 = NEON_fmax(in_q0,*param_2,4);
    auVar13 = NEON_fmin(auVar12,param_2[1],4);
    fVar14 = (float)*(undefined8 *)param_2[3];
    fVar15 = (float)((ulong)*(undefined8 *)param_2[3] >> 0x20);
    fVar16 = (float)*(undefined8 *)(param_2[3] + 8);
    fVar17 = (float)*(undefined8 *)param_2[2];
    fVar18 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
    fVar19 = (float)*(undefined8 *)(param_2[2] + 8);
    auVar12._8_8_ = in_register_00005028;
    auVar12._0_8_ = param_1;
    auVar12 = NEON_fmax(auVar12,*param_2,4);
    auVar12 = NEON_fmin(auVar12,param_2[1],4);
    uVar1 = (int)(fVar17 * (auVar12._0_4_ - fVar14)) + 1U & 0xffff;
    uVar2 = (int)(fVar19 * (auVar12._8_4_ - fVar16)) + 1U & 0xffff;
    uVar3 = (int)(fVar18 * (auVar12._4_4_ - fVar15)) + 1U & 0xffff;
    do {
      bVar6 = false;
      bVar8 = true;
      if (((int)(fVar17 * (auVar13._0_4_ - fVar14)) & 0xffffU) <= (uint)puVar10[3]) {
        bVar8 = uVar1 <= *puVar10;
        bVar6 = *puVar10 == uVar1;
      }
      bVar7 = false;
      bVar9 = true;
      if ((!bVar8 || bVar6) &&
          ((int)(fVar19 * (auVar13._8_4_ - fVar16)) & 0xffffU) <= (uint)puVar10[5]) {
        bVar9 = uVar2 <= puVar10[2];
        bVar7 = puVar10[2] == uVar2;
      }
      bVar6 = false;
      bVar8 = true;
      if ((!bVar9 || bVar7) &&
          ((int)(fVar18 * (auVar13._4_4_ - fVar15)) & 0xffffU) <= (uint)puVar10[4]) {
        bVar8 = uVar3 <= puVar10[1];
        bVar6 = puVar10[1] == uVar3;
      }
      uVar5 = *(uint *)(puVar10 + 6);
      if (((int)uVar5 < 0) || (bVar8 && !bVar6)) {
        if (-1 < (int)uVar5 || (!bVar8 || bVar6)) goto LAB_10aa2a6f0;
        puVar10 = puVar10 + ((ulong)uVar5 & 0x7fffffff) * 8;
      }
      else {
        *puVar11 = uVar5;
        puVar11 = puVar11 + 1;
LAB_10aa2a6f0:
        puVar10 = puVar10 + 8;
      }
    } while (puVar10 != puVar4);
  }
  return (ulong)((long)puVar11 - (long)param_3) >> 2;
}



/* Entry: 10aa2a9ac; end: 10aa2a9c7;  */

void FUN_10aa2a9ac(long param_1)

{
  if (param_1 != 0) {
    func_0x000109825740();
  }
  return;
}



/* Entry: 10aa2a9c8; end: 10aa2aaef;  */

void FUN_10aa2a9c8(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar13;
  float fVar15;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    uVar25 = auRam0000000113835590[8];
    uVar26 = auRam0000000113835590[9];
    uVar27 = auRam0000000113835590[10];
    uVar28 = auRam0000000113835590[0xb];
    uVar29 = auRam0000000113835590[0xc];
    uVar30 = auRam0000000113835590[0xd];
    uVar31 = auRam0000000113835590[0xe];
    uVar32 = auRam0000000113835590[0xf];
    uVar17 = auRam0000000113835590[0];
    uVar18 = auRam0000000113835590[1];
    uVar19 = auRam0000000113835590[2];
    uVar20 = auRam0000000113835590[3];
    uVar21 = auRam0000000113835590[4];
    uVar22 = auRam0000000113835590[5];
    uVar23 = auRam0000000113835590[6];
    uVar24 = auRam0000000113835590[7];
    auVar10 = auRam0000000113835590;
  }
  else {
    auVar42 = *(undefined1 (*) [12])(lVar6 + 0x20);
    fVar15 = *(float *)(param_1 + 0x20);
    auVar9._0_4_ = auVar42._0_4_ * *(float *)(param_1 + 0x30);
    auVar9._4_4_ = auVar42._4_4_ * *(float *)(param_1 + 0x34);
    auVar9._8_4_ = auVar42._8_4_ * *(float *)(param_1 + 0x38);
    auVar9._12_4_ = *(float *)(param_1 + 0x3c) * 0.0;
    fVar37 = (float)*(undefined8 *)(lVar6 + 0x2c) * *(float *)(param_1 + 0x30);
    fVar1 = (float)((ulong)*(undefined8 *)(lVar6 + 0x2c) >> 0x20) * *(float *)(param_1 + 0x34);
    uVar17 = (undefined1)((uint)fVar1 >> 8);
    uVar18 = (undefined1)((uint)fVar1 >> 0x10);
    uVar19 = (undefined1)((uint)fVar1 >> 0x18);
    fVar16 = *(float *)(lVar6 + 0x34) * *(float *)(param_1 + 0x38);
    uVar20 = (undefined1)((uint)fVar16 >> 8);
    uVar21 = (undefined1)((uint)fVar16 >> 0x10);
    uVar22 = (undefined1)((uint)fVar16 >> 0x18);
    fVar7 = *(float *)(param_1 + 0x3c) * 0.0;
    uVar23 = (undefined1)((uint)fVar7 >> 8);
    uVar24 = (undefined1)((uint)fVar7 >> 0x10);
    uVar25 = (undefined1)((uint)fVar7 >> 0x18);
    auVar38[4] = SUB41(fVar1,0);
    auVar38._0_4_ = fVar37;
    auVar38[5] = uVar17;
    auVar38[6] = uVar18;
    auVar38[7] = uVar19;
    auVar38[8] = SUB41(fVar16,0);
    auVar38[9] = uVar20;
    auVar38[10] = uVar21;
    auVar38[0xb] = uVar22;
    auVar38[0xc] = SUB41(fVar7,0);
    auVar38[0xd] = uVar23;
    auVar38[0xe] = uVar24;
    auVar38[0xf] = uVar25;
    auVar38 = NEON_fmin(auVar9,auVar38,4);
    auVar40[4] = SUB41(fVar1,0);
    auVar40._0_4_ = fVar37;
    auVar40[5] = uVar17;
    auVar40[6] = uVar18;
    auVar40[7] = uVar19;
    auVar40[8] = SUB41(fVar16,0);
    auVar40[9] = uVar20;
    auVar40[10] = uVar21;
    auVar40[0xb] = uVar22;
    auVar40[0xc] = SUB41(fVar7,0);
    auVar40[0xd] = uVar23;
    auVar40[0xe] = uVar24;
    auVar40[0xf] = uVar25;
    auVar10 = NEON_fmax(auVar9,auVar40,4);
    fVar37 = auVar38._0_4_ - fVar15;
    fVar1 = auVar38._4_4_ - fVar15;
    fVar16 = auVar38._8_4_ - fVar15;
    fVar7 = fVar15 + auVar10._0_4_;
    fVar13 = fVar15 + auVar10._4_4_;
    fVar15 = fVar15 + auVar10._8_4_;
    fVar33 = (fVar7 - fVar37) * 0.5;
    fVar35 = (fVar13 - fVar1) * 0.5;
    fVar36 = (fVar15 - fVar16) * 0.5;
    fVar8 = (fVar7 + fVar37) * 0.5;
    fVar14 = (fVar13 + fVar1) * 0.5;
    fVar16 = (fVar15 + fVar16) * 0.5;
    auVar10 = *param_2;
    auVar38 = param_2[1];
    auVar42._0_8_ = auVar10._0_8_ & 0x7fffffff7fffffff;
    auVar42[8] = auVar10[8];
    auVar42[9] = auVar10[9];
    auVar42[10] = auVar10[10];
    auVar42[0xb] = auVar10[0xb] & 0x7f;
    auVar43._0_8_ = auVar38._0_8_ & 0x7fffffff7fffffff;
    auVar43[8] = auVar38[8];
    auVar43[9] = auVar38[9];
    auVar43[10] = auVar38[10];
    auVar43[0xb] = auVar38[0xb] & 0x7f;
    fVar13 = (float)*(undefined8 *)param_2[2];
    fVar15 = ABS(fVar13) * fVar33;
    fVar34 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
    fVar1 = ABS(fVar34) * fVar35;
    uVar17 = (undefined1)((uint)fVar1 >> 8);
    uVar18 = (undefined1)((uint)fVar1 >> 0x10);
    uVar19 = (undefined1)((uint)fVar1 >> 0x18);
    fVar37 = (float)*(undefined8 *)(param_2[2] + 8);
    fVar7 = ABS(fVar37) * fVar36;
    uVar20 = (undefined1)((uint)fVar7 >> 8);
    uVar21 = (undefined1)((uint)fVar7 >> 0x10);
    uVar22 = (undefined1)((uint)fVar7 >> 0x18);
    fVar13 = fVar13 * fVar8;
    fVar34 = fVar34 * fVar14;
    uVar23 = (undefined1)((uint)fVar34 >> 8);
    uVar24 = (undefined1)((uint)fVar34 >> 0x10);
    uVar25 = (undefined1)((uint)fVar34 >> 0x18);
    fVar37 = fVar37 * fVar16;
    uVar26 = (undefined1)((uint)fVar37 >> 8);
    uVar27 = (undefined1)((uint)fVar37 >> 0x10);
    uVar28 = (undefined1)((uint)fVar37 >> 0x18);
    auVar39._0_4_ = auVar10._0_4_ * fVar8;
    auVar39._4_4_ = auVar10._4_4_ * fVar14;
    auVar39._8_4_ = auVar10._8_4_ * fVar16;
    auVar39._12_4_ = auVar10._12_4_ * 0.0;
    auVar11._0_4_ = auVar38._0_4_ * fVar8;
    auVar11._4_4_ = auVar38._4_4_ * fVar14;
    auVar11._8_4_ = auVar38._8_4_ * fVar16;
    auVar11._12_4_ = auVar38._12_4_ * 0.0;
    auVar41 = NEON_ext(auVar39,auVar39,8,1);
    auVar44 = NEON_ext(auVar11,auVar11,8,1);
    auVar4[4] = SUB41(fVar34,0);
    auVar4._0_4_ = fVar13;
    auVar4[5] = uVar23;
    auVar4[6] = uVar24;
    auVar4[7] = uVar25;
    auVar4[8] = SUB41(fVar37,0);
    auVar4[9] = uVar26;
    auVar4[10] = uVar27;
    auVar4[0xb] = uVar28;
    auVar4._12_4_ = 0;
    auVar5[4] = SUB41(fVar34,0);
    auVar5._0_4_ = fVar13;
    auVar5[5] = uVar23;
    auVar5[6] = uVar24;
    auVar5[7] = uVar25;
    auVar5[8] = SUB41(fVar37,0);
    auVar5[9] = uVar26;
    auVar5[10] = uVar27;
    auVar5[0xb] = uVar28;
    auVar5._12_4_ = 0;
    auVar40 = NEON_ext(auVar4,auVar5,8,1);
    fVar37 = (float)*(undefined8 *)param_2[3] + auVar39._0_4_ + auVar39._4_4_ + auVar41._0_4_;
    fVar16 = (float)((ulong)*(undefined8 *)param_2[3] >> 0x20) +
             auVar11._0_4_ + auVar11._4_4_ + auVar44._0_4_;
    fVar13 = (float)*(undefined8 *)(param_2[3] + 8) +
             fVar13 + fVar34 + auVar40._0_4_ + auVar40._4_4_;
    auVar12._0_4_ = ABS(auVar10._0_4_) * fVar33;
    auVar12._4_4_ = (float)(auVar42._0_8_ >> 0x20) * fVar35;
    auVar12._8_4_ = auVar42._8_4_ * fVar36;
    auVar12._12_4_ = 0;
    fVar33 = ABS(auVar38._0_4_) * fVar33;
    fVar35 = (float)(auVar43._0_8_ >> 0x20) * fVar35;
    fVar36 = auVar43._8_4_ * fVar36;
    auVar10 = NEON_ext(auVar12,auVar12,8,1);
    auVar2._4_4_ = fVar35;
    auVar2._0_4_ = fVar33;
    auVar2._8_4_ = fVar36;
    auVar2._12_4_ = 0;
    auVar3._4_4_ = fVar35;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar36;
    auVar3._12_4_ = 0;
    auVar38 = NEON_ext(auVar2,auVar3,8,1);
    fVar34 = auVar12._0_4_ + auVar12._4_4_ + auVar10._0_4_;
    fVar8 = fVar33 + fVar35 + auVar38._0_4_;
    auVar41[4] = SUB41(fVar1,0);
    auVar41._0_4_ = fVar15;
    auVar41[5] = uVar17;
    auVar41[6] = uVar18;
    auVar41[7] = uVar19;
    auVar41[8] = SUB41(fVar7,0);
    auVar41[9] = uVar20;
    auVar41[10] = uVar21;
    auVar41[0xb] = uVar22;
    auVar41._12_4_ = 0;
    auVar44[4] = SUB41(fVar1,0);
    auVar44._0_4_ = fVar15;
    auVar44[5] = uVar17;
    auVar44[6] = uVar18;
    auVar44[7] = uVar19;
    auVar44[8] = SUB41(fVar7,0);
    auVar44[9] = uVar20;
    auVar44[10] = uVar21;
    auVar44[0xb] = uVar22;
    auVar44._12_4_ = 0;
    auVar10 = NEON_ext(auVar41,auVar44,8,1);
    fVar15 = fVar15 + fVar1 + auVar10._0_4_ + auVar10._4_4_;
    auVar10._0_4_ = fVar37 - fVar34;
    auVar10._4_4_ = fVar16 - fVar8;
    auVar10._8_4_ = fVar13 - fVar15;
    auVar10._12_4_ = 0;
    fVar37 = fVar37 + fVar34;
    uVar17 = SUB41(fVar37,0);
    uVar18 = (undefined1)((uint)fVar37 >> 8);
    uVar19 = (undefined1)((uint)fVar37 >> 0x10);
    uVar20 = (undefined1)((uint)fVar37 >> 0x18);
    fVar16 = fVar16 + fVar8;
    uVar21 = SUB41(fVar16,0);
    uVar22 = (undefined1)((uint)fVar16 >> 8);
    uVar23 = (undefined1)((uint)fVar16 >> 0x10);
    uVar24 = (undefined1)((uint)fVar16 >> 0x18);
    fVar13 = fVar13 + fVar15;
    uVar25 = SUB41(fVar13,0);
    uVar26 = (undefined1)((uint)fVar13 >> 8);
    uVar27 = (undefined1)((uint)fVar13 >> 0x10);
    uVar28 = (undefined1)((uint)fVar13 >> 0x18);
    fVar15 = (float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20) + 0.0 + 0.0;
    uVar29 = SUB41(fVar15,0);
    uVar30 = (undefined1)((uint)fVar15 >> 8);
    uVar31 = (undefined1)((uint)fVar15 >> 0x10);
    uVar32 = (undefined1)((uint)fVar15 >> 0x18);
  }
  param_3[1] = auVar10._8_8_;
  *param_3 = auVar10._0_8_;
  param_4[1] = CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,
                                                  CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))));
  *param_4 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  return;
}



/* Entry: 10aa2aaf0; end: 10aa2ae53;  */

void FUN_10aa2aaf0(long param_1,long *param_2,float *param_3,undefined8 *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  uint *puVar18;
  ushort *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint *apuStack_a8 [3];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar16 = *(long *)(param_1 + 0x28);
  if (lVar16 != 0) {
    FUN_109ffe100(apuStack_a8,*(undefined4 *)(lVar16 + 0x90));
    fVar5 = *(float *)(param_1 + 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    fVar23 = (float)*(undefined8 *)(param_1 + 0x40);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    auVar21._0_4_ = fVar23 * (*param_3 - fVar5);
    auVar21._4_4_ = fVar24 * (param_3[1] - fVar5);
    auVar21._8_4_ = fVar25 * (param_3[2] - fVar5);
    auVar21._12_4_ = fVar26 * 0.0;
    fVar23 = fVar23 * ((float)*param_4 + fVar5);
    fVar24 = fVar24 * ((float)((ulong)*param_4 >> 0x20) + fVar5);
    fVar25 = fVar25 * ((float)param_4[1] + fVar5);
    fVar26 = fVar26 * ((float)((ulong)param_4[1] >> 0x20) + 0.0);
    auVar20._4_4_ = fVar24;
    auVar20._0_4_ = fVar23;
    auVar20._8_4_ = fVar25;
    auVar20._12_4_ = fVar26;
    auVar20 = NEON_fmin(auVar21,auVar20,4);
    auVar22._4_4_ = fVar24;
    auVar22._0_4_ = fVar23;
    auVar22._8_4_ = fVar25;
    auVar22._12_4_ = fVar26;
    auVar22 = NEON_fmax(auVar21,auVar22,4);
    uVar15 = lVar16 + 0x40;
    FUN_10aa2a610(auVar20._0_8_,auVar22._0_8_,uVar15,apuStack_a8[0]);
    uVar11 = uVar15 & 0xffffffff;
    cVar4 = *(char *)(lVar16 + 8);
    iVar14 = (int)uVar15;
    if (cVar4 == '\x04') {
      if (iVar14 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        lVar2 = *(long *)(lVar16 + 0x10);
        lVar16 = *(long *)(lVar16 + 0x18);
        puVar1 = apuStack_a8[0] + uVar11;
        puVar13 = apuStack_a8[0];
        do {
          uVar3 = *puVar13;
          uVar15 = (ulong)uVar3 & 0xffffff;
          iVar14 = (int)uVar15;
          puVar18 = (uint *)(lVar16 + 8 + uVar15 * 0xc);
          do {
            puVar12 = (undefined8 *)(lVar2 + (ulong)*puVar18 * 0xc);
            auVar7 = *(undefined1 (*) [12])(lVar2 + (ulong)puVar18[-2] * 0xc);
            auVar8 = *(undefined1 (*) [12])(lVar2 + (ulong)puVar18[-1] * 0xc);
            uVar6 = *puVar12;
            fStack_70 = (float)uVar9;
            fStack_90 = fStack_70 * auVar7._0_4_;
            fStack_6c = (float)((ulong)uVar9 >> 0x20);
            fStack_8c = fStack_6c * auVar7._4_4_;
            fStack_68 = (float)uVar10;
            fStack_88 = fStack_68 * auVar7._8_4_;
            fStack_64 = (float)((ulong)uVar10 >> 0x20);
            fStack_84 = fStack_64 * 0.0;
            fStack_80 = fStack_70 * auVar8._0_4_;
            fStack_7c = fStack_6c * auVar8._4_4_;
            fStack_78 = fStack_68 * auVar8._8_4_;
            fStack_74 = fStack_64 * 0.0;
            fStack_70 = fStack_70 * (float)uVar6;
            fStack_6c = fStack_6c * (float)((ulong)uVar6 >> 0x20);
            fStack_68 = fStack_68 * *(float *)(puVar12 + 1);
            fStack_64 = fStack_64 * 0.0;
            (**(code **)(*param_2 + 0x10))(param_2,&fStack_90,0,uVar15);
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 3;
          } while (iVar14 + (uVar3 >> 0x18 & 1) + 1 != uVar15);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar1);
      }
    }
    else if (cVar4 == '\x02') {
      if (iVar14 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        lVar2 = *(long *)(lVar16 + 0x10);
        lVar16 = *(long *)(lVar16 + 0x18);
        puVar1 = apuStack_a8[0] + uVar11;
        puVar13 = apuStack_a8[0];
        do {
          uVar3 = *puVar13;
          uVar15 = (ulong)uVar3 & 0xffffff;
          iVar14 = (int)uVar15;
          puVar19 = (ushort *)(lVar16 + 4 + uVar15 * 6);
          do {
            puVar12 = (undefined8 *)(lVar2 + (ulong)*puVar19 * 0xc);
            auVar7 = *(undefined1 (*) [12])(lVar2 + (ulong)puVar19[-2] * 0xc);
            auVar8 = *(undefined1 (*) [12])(lVar2 + (ulong)puVar19[-1] * 0xc);
            uVar6 = *puVar12;
            fStack_70 = (float)uVar9;
            fStack_90 = fStack_70 * auVar7._0_4_;
            fStack_6c = (float)((ulong)uVar9 >> 0x20);
            fStack_8c = fStack_6c * auVar7._4_4_;
            fStack_68 = (float)uVar10;
            fStack_88 = fStack_68 * auVar7._8_4_;
            fStack_64 = (float)((ulong)uVar10 >> 0x20);
            fStack_84 = fStack_64 * 0.0;
            fStack_80 = fStack_70 * auVar8._0_4_;
            fStack_7c = fStack_6c * auVar8._4_4_;
            fStack_78 = fStack_68 * auVar8._8_4_;
            fStack_74 = fStack_64 * 0.0;
            fStack_70 = fStack_70 * (float)uVar6;
            fStack_6c = fStack_6c * (float)((ulong)uVar6 >> 0x20);
            fStack_68 = fStack_68 * *(float *)(puVar12 + 1);
            fStack_64 = fStack_64 * 0.0;
            (**(code **)(*param_2 + 0x10))(param_2,&fStack_90,0,uVar15);
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 3;
          } while (iVar14 + (uVar3 >> 0x18 & 1) + 1 != uVar15);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar1);
      }
    }
    else if ((cVar4 == '\x01') && (iVar14 != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      lVar2 = *(long *)(lVar16 + 0x10);
      lVar16 = *(long *)(lVar16 + 0x18);
      puVar1 = apuStack_a8[0] + uVar11;
      puVar13 = apuStack_a8[0];
      do {
        uVar3 = *puVar13;
        uVar15 = (ulong)uVar3 & 0xffffff;
        iVar14 = (int)uVar15;
        pbVar17 = (byte *)(lVar16 + 2 + uVar15 * 3);
        do {
          puVar12 = (undefined8 *)(lVar2 + (ulong)*pbVar17 * 0xc);
          auVar7 = *(undefined1 (*) [12])(lVar2 + (ulong)pbVar17[-2] * 0xc);
          auVar8 = *(undefined1 (*) [12])(lVar2 + (ulong)pbVar17[-1] * 0xc);
          uVar6 = *puVar12;
          fStack_70 = (float)uVar9;
          fStack_90 = fStack_70 * auVar7._0_4_;
          fStack_6c = (float)((ulong)uVar9 >> 0x20);
          fStack_8c = fStack_6c * auVar7._4_4_;
          fStack_68 = (float)uVar10;
          fStack_88 = fStack_68 * auVar7._8_4_;
          fStack_64 = (float)((ulong)uVar10 >> 0x20);
          fStack_84 = fStack_64 * 0.0;
          fStack_80 = fStack_70 * auVar8._0_4_;
          fStack_7c = fStack_6c * auVar8._4_4_;
          fStack_78 = fStack_68 * auVar8._8_4_;
          fStack_74 = fStack_64 * 0.0;
          fStack_70 = fStack_70 * (float)uVar6;
          fStack_6c = fStack_6c * (float)((ulong)uVar6 >> 0x20);
          fStack_68 = fStack_68 * *(float *)(puVar12 + 1);
          fStack_64 = fStack_64 * 0.0;
          (**(code **)(*param_2 + 0x10))(param_2,&fStack_90,0,uVar15);
          uVar15 = uVar15 + 1;
          pbVar17 = pbVar17 + 3;
        } while (iVar14 + (uVar3 >> 0x18 & 1) + 1 != uVar15);
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar1);
    }
    if (apuStack_a8[0] != (uint *)0x0) {
      __ZdlPv(apuStack_a8[0]);
    }
  }
  return;
}



/* Entry: 10aa2ae54; end: 10aa2b4c3;  */

void FUN_10aa2ae54(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uVar29;
  undefined1 auVar30 [12];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined ***pppuVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  uint *puVar40;
  long lVar41;
  byte *pbVar42;
  ushort *puVar43;
  uint *puVar44;
  int iVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
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
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  float fVar71;
  undefined1 auVar67 [16];
  ulong uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 extraout_d3;
  float fVar77;
  undefined8 extraout_var;
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  float fVar78;
  float fVar79;
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint *puStack_160;
  uint *puStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [28];
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_f0 [2];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar41 = *(long *)(param_1 + 10);
  if (lVar41 != 0) {
    uVar31 = *param_5;
    uVar32 = param_5[1];
    uVar23 = param_5[3];
    uVar11 = param_5[2];
    uVar33 = *(undefined8 *)*(undefined1 (*) [16])(param_5 + 4);
    auVar86 = *(undefined1 (*) [16])(param_5 + 4);
    uVar13 = param_5[7];
    uVar65 = param_5[6];
    uVar14 = param_2[1];
    uVar12 = *param_2;
    uVar34 = *param_3;
    uVar35 = param_3[1];
    FUN_109ffe100(&puStack_160,*(undefined4 *)(lVar41 + 0x90));
    auVar92._8_8_ = extraout_var;
    auVar92._0_8_ = extraout_d3;
    fStack_1e0 = (float)uVar11;
    fStack_1dc = (float)((ulong)uVar11 >> 0x20);
    uStack_1d8 = (undefined4)uVar23;
    fStack_1d0 = (float)uVar31;
    fStack_1cc = (float)((ulong)uVar31 >> 0x20);
    uStack_1c8 = (undefined4)uVar32;
    auVar73._4_12_ = auVar92._4_12_;
    auVar73._0_4_ = fStack_1d0;
    auVar93._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
    auVar93._0_8_ = auVar73._0_8_;
    auVar93._8_4_ = uStack_1c8;
    auVar74._8_8_ = auVar93._8_8_;
    auVar74._4_4_ = fStack_1e0;
    auVar74._0_4_ = fStack_1d0;
    auVar75._0_12_ = auVar74._0_12_;
    auVar75._12_4_ = uStack_1d8;
    auVar66 = NEON_ext(auVar75,auVar75,8,1);
    fVar25 = (float)uVar33;
    fVar77 = (float)uVar65;
    auVar80._0_4_ = fStack_1d0 * -fVar77;
    fVar24 = (float)((ulong)uVar65 >> 0x20);
    auVar80._4_4_ = fStack_1e0 * -fVar24;
    fVar78 = (float)uVar13;
    auVar80._8_4_ = fVar25 * -fVar78;
    fVar26 = (float)((ulong)uVar13 >> 0x20);
    auVar80._12_4_ = -fVar26 * 0.0;
    fVar48 = (float)((ulong)uVar33 >> 0x20);
    auVar84._0_4_ = fStack_1cc * -fVar77;
    auVar84._4_4_ = fStack_1dc * -fVar24;
    auVar84._8_4_ = fVar48 * -fVar78;
    auVar84._12_4_ = -fVar26 * 0.0;
    auVar81 = NEON_ext(auVar80,auVar80,8,1);
    auVar85 = NEON_ext(auVar84,auVar84,8,1);
    auVar86 = NEON_ext(auVar86,auVar86,8,1);
    fVar83 = auVar86._0_4_;
    fVar79 = auVar80._0_4_ + auVar80._4_4_ + auVar81._0_4_;
    fVar82 = auVar84._0_4_ + auVar84._4_4_ + auVar85._0_4_;
    fVar64 = auVar66._0_4_;
    fVar77 = fVar64 * -fVar77;
    fVar71 = auVar66._4_4_;
    fVar24 = fVar71 * -fVar24;
    uVar49 = (undefined1)((uint)fVar24 >> 8);
    uVar50 = (undefined1)((uint)fVar24 >> 0x10);
    uVar51 = (undefined1)((uint)fVar24 >> 0x18);
    fVar78 = fVar83 * -fVar78;
    uVar52 = (undefined1)((uint)fVar78 >> 8);
    uVar53 = (undefined1)((uint)fVar78 >> 0x10);
    uVar54 = (undefined1)((uint)fVar78 >> 0x18);
    auVar86[4] = SUB41(fVar24,0);
    auVar86._0_4_ = fVar77;
    auVar86[5] = uVar49;
    auVar86[6] = uVar50;
    auVar86[7] = uVar51;
    auVar86[8] = SUB41(fVar78,0);
    auVar86[9] = uVar52;
    auVar86[10] = uVar53;
    auVar86[0xb] = uVar54;
    auVar86._12_4_ = 0;
    auVar66[4] = SUB41(fVar24,0);
    auVar66._0_4_ = fVar77;
    auVar66[5] = uVar49;
    auVar66[6] = uVar50;
    auVar66[7] = uVar51;
    auVar66[8] = SUB41(fVar78,0);
    auVar66[9] = uVar52;
    auVar66[10] = uVar53;
    auVar66[0xb] = uVar54;
    auVar66._12_4_ = 0;
    auVar86 = NEON_ext(auVar86,auVar66,8,1);
    fVar47 = fVar77 + fVar24 + auVar86._0_4_ + auVar86._4_4_;
    fVar90 = (float)uVar14;
    fVar91 = (float)((ulong)uVar14 >> 0x20);
    fVar88 = (float)uVar12;
    fVar89 = (float)((ulong)uVar12 >> 0x20);
    fVar77 = fStack_1d0 * fVar88;
    fVar24 = fStack_1e0 * fVar89;
    uVar49 = (undefined1)((uint)fVar24 >> 8);
    uVar50 = (undefined1)((uint)fVar24 >> 0x10);
    uVar51 = (undefined1)((uint)fVar24 >> 0x18);
    fVar78 = fVar25 * fVar90;
    uVar52 = (undefined1)((uint)fVar78 >> 8);
    uVar53 = (undefined1)((uint)fVar78 >> 0x10);
    uVar54 = (undefined1)((uint)fVar78 >> 0x18);
    fVar26 = fVar91 * 0.0;
    uVar55 = (undefined1)((uint)fVar26 >> 8);
    uVar56 = (undefined1)((uint)fVar26 >> 0x10);
    uVar57 = (undefined1)((uint)fVar26 >> 0x18);
    auVar87._0_4_ = fStack_1cc * fVar88;
    auVar87._4_4_ = fStack_1dc * fVar89;
    auVar87._8_4_ = fVar48 * fVar90;
    auVar87._12_4_ = fVar91 * 0.0;
    fVar88 = fVar64 * fVar88;
    fVar89 = fVar71 * fVar89;
    auVar81[4] = SUB41(fVar24,0);
    auVar81._0_4_ = fVar77;
    auVar81[5] = uVar49;
    auVar81[6] = uVar50;
    auVar81[7] = uVar51;
    auVar81[8] = SUB41(fVar78,0);
    auVar81[9] = uVar52;
    auVar81[10] = uVar53;
    auVar81[0xb] = uVar54;
    auVar81[0xc] = SUB41(fVar26,0);
    auVar81[0xd] = uVar55;
    auVar81[0xe] = uVar56;
    auVar81[0xf] = uVar57;
    auVar85[4] = SUB41(fVar24,0);
    auVar85._0_4_ = fVar77;
    auVar85[5] = uVar49;
    auVar85[6] = uVar50;
    auVar85[7] = uVar51;
    auVar85[8] = SUB41(fVar78,0);
    auVar85[9] = uVar52;
    auVar85[10] = uVar53;
    auVar85[0xb] = uVar54;
    auVar85[0xc] = SUB41(fVar26,0);
    auVar85[0xd] = uVar55;
    auVar85[0xe] = uVar56;
    auVar85[0xf] = uVar57;
    auVar92 = NEON_ext(auVar81,auVar85,8,1);
    auVar93 = NEON_ext(auVar87,auVar87,8,1);
    auVar27._4_4_ = fVar89;
    auVar27._0_4_ = fVar88;
    auVar27._8_4_ = fVar83 * fVar90;
    auVar27._12_4_ = 0;
    auVar28._4_4_ = fVar89;
    auVar28._0_4_ = fVar88;
    auVar28._8_4_ = fVar83 * fVar90;
    auVar28._12_4_ = 0;
    auVar81 = NEON_ext(auVar27,auVar28,8,1);
    fStack_1a0 = (float)uVar34;
    fStack_19c = (float)((ulong)uVar34 >> 0x20);
    fStack_198 = (float)uVar35;
    fStack_194 = (float)((ulong)uVar35 >> 0x20);
    fStack_1d0 = fStack_1d0 * fStack_1a0;
    fStack_1e0 = fStack_1e0 * fStack_19c;
    uVar49 = (undefined1)((uint)fStack_1e0 >> 8);
    uVar50 = (undefined1)((uint)fStack_1e0 >> 0x10);
    uVar51 = (undefined1)((uint)fStack_1e0 >> 0x18);
    fVar25 = fVar25 * fStack_198;
    uVar52 = (undefined1)((uint)fVar25 >> 8);
    uVar53 = (undefined1)((uint)fVar25 >> 0x10);
    uVar54 = (undefined1)((uint)fVar25 >> 0x18);
    fVar78 = fStack_194 * 0.0;
    uVar55 = (undefined1)((uint)fVar78 >> 8);
    uVar56 = (undefined1)((uint)fVar78 >> 0x10);
    uVar57 = (undefined1)((uint)fVar78 >> 0x18);
    auVar76._0_4_ = fStack_1cc * fStack_1a0;
    auVar76._4_4_ = fStack_1dc * fStack_19c;
    auVar76._8_4_ = fVar48 * fStack_198;
    auVar76._12_4_ = fStack_194 * 0.0;
    auVar67._0_4_ = fVar64 * fStack_1a0;
    auVar67._4_4_ = fVar71 * fStack_19c;
    auVar67._8_4_ = fVar83 * fStack_198;
    auVar15[4] = SUB41(fStack_1e0,0);
    auVar15._0_4_ = fStack_1d0;
    auVar15[5] = uVar49;
    auVar15[6] = uVar50;
    auVar15[7] = uVar51;
    auVar15[8] = SUB41(fVar25,0);
    auVar15[9] = uVar52;
    auVar15[10] = uVar53;
    auVar15[0xb] = uVar54;
    auVar15[0xc] = SUB41(fVar78,0);
    auVar15[0xd] = uVar55;
    auVar15[0xe] = uVar56;
    auVar15[0xf] = uVar57;
    auVar16[4] = SUB41(fStack_1e0,0);
    auVar16._0_4_ = fStack_1d0;
    auVar16[5] = uVar49;
    auVar16[6] = uVar50;
    auVar16[7] = uVar51;
    auVar16[8] = SUB41(fVar25,0);
    auVar16[9] = uVar52;
    auVar16[10] = uVar53;
    auVar16[0xb] = uVar54;
    auVar16[0xc] = SUB41(fVar78,0);
    auVar16[0xd] = uVar55;
    auVar16[0xe] = uVar56;
    auVar16[0xf] = uVar57;
    auVar66 = NEON_ext(auVar15,auVar16,8,1);
    auVar85 = NEON_ext(auVar76,auVar76,8,1);
    auVar67._12_4_ = 0;
    auVar86 = NEON_ext(auVar67,auVar67,8,1);
    uVar65 = CONCAT44(fVar82 + auVar76._0_4_ + auVar76._4_4_ + auVar85._0_4_,
                      fVar79 + fStack_1d0 + fStack_1e0 + auVar66._0_4_);
    uVar29 = (ulong)(uint)(fVar47 + fVar88 + fVar89 + auVar81._0_4_ + auVar81._4_4_);
    uVar11 = CONCAT44(fVar82 + auVar87._0_4_ + auVar87._4_4_ + auVar93._0_4_,
                      fVar79 + fVar77 + fVar24 + auVar92._0_4_);
    uVar72 = (ulong)(uint)(fVar47 + auVar67._0_4_ + auVar67._4_4_ + auVar86._0_4_ + auVar86._4_4_);
    uVar46 = lVar41 + 0x40;
    func_0x00010aa2a714(uVar46,puStack_160);
    uVar37 = uVar46 & 0xffffffff;
    uStack_c0 = (undefined4)param_6[4];
    appuStack_f0[0] = &PTR_FUN_110c3b8a0;
    uStack_bc = (undefined4)param_6[1];
    cVar4 = *(char *)(lVar41 + 8);
    iVar45 = (int)uVar46;
    uStack_e0 = uVar11;
    uStack_d8 = uVar29;
    uStack_d0 = uVar65;
    uStack_c8 = uVar72;
    if (cVar4 == '\x04') {
      if (iVar45 != 0) {
        uVar65 = *(undefined8 *)(param_1 + 0xe);
        uVar11 = *(undefined8 *)(param_1 + 0xc);
        lVar2 = *(long *)(lVar41 + 0x10);
        lVar41 = *(long *)(lVar41 + 0x18);
        puVar1 = puStack_160 + uVar37;
        puVar40 = puStack_160;
        do {
          uVar3 = *puVar40;
          uVar46 = (ulong)uVar3 & 0xffffff;
          iVar45 = (int)uVar46;
          puVar44 = (uint *)(lVar41 + 8 + uVar46 * 0xc);
          do {
            puVar38 = (undefined8 *)(lVar2 + (ulong)puVar44[-2] * 0xc);
            puVar39 = (undefined8 *)(lVar2 + (ulong)puVar44[-1] * 0xc);
            uVar12 = *puVar38;
            uVar23 = *puVar39;
            auVar30 = *(undefined1 (*) [12])(lVar2 + (ulong)*puVar44 * 0xc);
            fVar48 = (float)uVar11;
            fVar77 = (float)((ulong)uVar11 >> 0x20);
            fVar25 = fVar77 * (float)((ulong)uVar12 >> 0x20);
            fVar64 = (float)uVar65;
            fVar78 = (float)((ulong)uVar65 >> 0x20);
            fVar24 = fVar78 * 0.0;
            fVar26 = fVar77 * (float)((ulong)uVar23 >> 0x20);
            fVar47 = fVar78 * 0.0;
            uStack_118 = CONCAT17((char)((uint)fVar24 >> 0x18),
                                  CONCAT16((char)((uint)fVar24 >> 0x10),
                                           CONCAT15((char)((uint)fVar24 >> 8),
                                                    CONCAT14(SUB41(fVar24,0),
                                                             fVar64 * *(float *)(puVar38 + 1)))));
            uStack_120 = CONCAT17((char)((uint)fVar25 >> 0x18),
                                  CONCAT16((char)((uint)fVar25 >> 0x10),
                                           CONCAT15((char)((uint)fVar25 >> 8),
                                                    CONCAT14(SUB41(fVar25,0),fVar48 * (float)uVar12)
                                                   )));
            uStack_108 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                  CONCAT16((char)((uint)fVar47 >> 0x10),
                                           CONCAT15((char)((uint)fVar47 >> 8),
                                                    CONCAT14(SUB41(fVar47,0),
                                                             fVar64 * *(float *)(puVar39 + 1)))));
            uStack_110 = CONCAT17((char)((uint)fVar26 >> 0x18),
                                  CONCAT16((char)((uint)fVar26 >> 0x10),
                                           CONCAT15((char)((uint)fVar26 >> 8),
                                                    CONCAT14(SUB41(fVar26,0),fVar48 * (float)uVar23)
                                                   )));
            fVar77 = fVar77 * auVar30._4_4_;
            fVar78 = fVar78 * 0.0;
            uStack_f8 = CONCAT17((char)((uint)fVar78 >> 0x18),
                                 CONCAT16((char)((uint)fVar78 >> 0x10),
                                          CONCAT15((char)((uint)fVar78 >> 8),
                                                   CONCAT14(SUB41(fVar78,0),fVar64 * auVar30._8_4_))
                                         ));
            uStack_100 = CONCAT17((char)((uint)fVar77 >> 0x18),
                                  CONCAT16((char)((uint)fVar77 >> 0x10),
                                           CONCAT15((char)((uint)fVar77 >> 8),
                                                    CONCAT14(SUB41(fVar77,0),fVar48 * auVar30._0_4_)
                                                   )));
            pppuVar36 = appuStack_f0;
            func_0x00010982416c(pppuVar36,&uStack_124,auStack_140,&uStack_120);
            if ((int)pppuVar36 != 0) {
              uStack_144 = (undefined4)uVar46;
              uStack_148 = 0;
              fVar25 = (float)auStack_140._0_8_;
              fVar78 = (float)*param_5 * fVar25;
              fVar77 = SUB84(auStack_140._0_8_,4);
              fVar26 = (float)((ulong)*param_5 >> 0x20) * fVar77;
              uVar55 = (undefined1)((uint)fVar26 >> 8);
              uVar56 = (undefined1)((uint)fVar26 >> 0x10);
              uVar57 = (undefined1)((uint)fVar26 >> 0x18);
              fVar24 = (float)auStack_140._8_8_;
              fVar47 = (float)param_5[1] * fVar24;
              uVar58 = (undefined1)((uint)fVar47 >> 8);
              uVar59 = (undefined1)((uint)fVar47 >> 0x10);
              uVar60 = (undefined1)((uint)fVar47 >> 0x18);
              fVar48 = (float)((ulong)param_5[1] >> 0x20) * SUB84(auStack_140._8_8_,4);
              uVar61 = (undefined1)((uint)fVar48 >> 8);
              uVar62 = (undefined1)((uint)fVar48 >> 0x10);
              uVar63 = (undefined1)((uint)fVar48 >> 0x18);
              auVar70._0_4_ = fVar25 * *(float *)(param_5 + 2);
              auVar70._4_4_ = fVar77 * *(float *)((long)param_5 + 0x14);
              auVar70._8_4_ = fVar24 * *(float *)(param_5 + 3);
              auVar70._12_4_ = SUB84(auStack_140._8_8_,4) * *(float *)((long)param_5 + 0x1c);
              fVar25 = fVar25 * *(float *)(param_5 + 4);
              fVar77 = fVar77 * *(float *)((long)param_5 + 0x24);
              uVar49 = (undefined1)((uint)fVar77 >> 8);
              uVar50 = (undefined1)((uint)fVar77 >> 0x10);
              uVar51 = (undefined1)((uint)fVar77 >> 0x18);
              fVar24 = fVar24 * *(float *)(param_5 + 5);
              uVar52 = (undefined1)((uint)fVar24 >> 8);
              uVar53 = (undefined1)((uint)fVar24 >> 0x10);
              uVar54 = (undefined1)((uint)fVar24 >> 0x18);
              auVar21[4] = SUB41(fVar26,0);
              auVar21._0_4_ = fVar78;
              auVar21[5] = uVar55;
              auVar21[6] = uVar56;
              auVar21[7] = uVar57;
              auVar21[8] = SUB41(fVar47,0);
              auVar21[9] = uVar58;
              auVar21[10] = uVar59;
              auVar21[0xb] = uVar60;
              auVar21[0xc] = SUB41(fVar48,0);
              auVar21[0xd] = uVar61;
              auVar21[0xe] = uVar62;
              auVar21[0xf] = uVar63;
              auVar22[4] = SUB41(fVar26,0);
              auVar22._0_4_ = fVar78;
              auVar22[5] = uVar55;
              auVar22[6] = uVar56;
              auVar22[7] = uVar57;
              auVar22[8] = SUB41(fVar47,0);
              auVar22[9] = uVar58;
              auVar22[10] = uVar59;
              auVar22[0xb] = uVar60;
              auVar22[0xc] = SUB41(fVar48,0);
              auVar22[0xd] = uVar61;
              auVar22[0xe] = uVar62;
              auVar22[0xf] = uVar63;
              auVar66 = NEON_ext(auVar21,auVar22,8,1);
              auVar86 = NEON_ext(auVar70,auVar70,8,1);
              fVar47 = auVar70._0_4_ + auVar70._4_4_ + auVar86._0_4_;
              auVar9[4] = SUB41(fVar77,0);
              auVar9._0_4_ = fVar25;
              auVar9[5] = uVar49;
              auVar9[6] = uVar50;
              auVar9[7] = uVar51;
              auVar9[8] = SUB41(fVar24,0);
              auVar9[9] = uVar52;
              auVar9[10] = uVar53;
              auVar9[0xb] = uVar54;
              auVar9._12_4_ = 0;
              auVar10[4] = SUB41(fVar77,0);
              auVar10._0_4_ = fVar25;
              auVar10[5] = uVar49;
              auVar10[6] = uVar50;
              auVar10[7] = uVar51;
              auVar10[8] = SUB41(fVar24,0);
              auVar10[9] = uVar52;
              auVar10[10] = uVar53;
              auVar10[0xb] = uVar54;
              auVar10._12_4_ = 0;
              auVar86 = NEON_ext(auVar9,auVar10,8,1);
              uVar49 = (undefined1)uStack_124;
              uVar50 = (undefined1)((uint)uStack_124 >> 8);
              uVar51 = (undefined1)((uint)uStack_124 >> 0x10);
              uVar52 = (undefined1)((uint)uStack_124 >> 0x18);
              uStack_98 = (ulong)(uint)(fVar25 + fVar77 + auVar86._0_4_ + auVar86._4_4_);
              uStack_a0 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                   CONCAT16((char)((uint)fVar47 >> 0x10),
                                            CONCAT15((char)((uint)fVar47 >> 8),
                                                     CONCAT14(SUB41(fVar47,0),
                                                              fVar78 + fVar26 + auVar66._0_4_))));
              uStack_90 = uStack_124;
              uStack_b0 = param_4;
              puStack_a8 = &uStack_148;
              (**(code **)(*param_6 + 0x18))(param_6,&uStack_b0,1);
              uStack_bc = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
            }
            puVar44 = puVar44 + 3;
            uVar46 = uVar46 + 1;
          } while (iVar45 + (uVar3 >> 0x18 & 1) + 1 != uVar46);
          puVar40 = puVar40 + 1;
        } while (puVar40 != puVar1);
      }
    }
    else if (cVar4 == '\x02') {
      if (iVar45 != 0) {
        uVar65 = *(undefined8 *)(param_1 + 0xe);
        uVar11 = *(undefined8 *)(param_1 + 0xc);
        lVar2 = *(long *)(lVar41 + 0x10);
        lVar41 = *(long *)(lVar41 + 0x18);
        puVar1 = puStack_160 + uVar37;
        puVar40 = puStack_160;
        do {
          uVar3 = *puVar40;
          uVar46 = (ulong)uVar3 & 0xffffff;
          iVar45 = (int)uVar46;
          puVar43 = (ushort *)(lVar41 + 4 + uVar46 * 6);
          do {
            puVar38 = (undefined8 *)(lVar2 + (ulong)puVar43[-2] * 0xc);
            puVar39 = (undefined8 *)(lVar2 + (ulong)puVar43[-1] * 0xc);
            uVar12 = *puVar38;
            uVar23 = *puVar39;
            auVar30 = *(undefined1 (*) [12])(lVar2 + (ulong)*puVar43 * 0xc);
            fVar48 = (float)uVar11;
            fVar77 = (float)((ulong)uVar11 >> 0x20);
            fVar25 = fVar77 * (float)((ulong)uVar12 >> 0x20);
            fVar64 = (float)uVar65;
            fVar78 = (float)((ulong)uVar65 >> 0x20);
            fVar24 = fVar78 * 0.0;
            fVar26 = fVar77 * (float)((ulong)uVar23 >> 0x20);
            fVar47 = fVar78 * 0.0;
            uStack_118 = CONCAT17((char)((uint)fVar24 >> 0x18),
                                  CONCAT16((char)((uint)fVar24 >> 0x10),
                                           CONCAT15((char)((uint)fVar24 >> 8),
                                                    CONCAT14(SUB41(fVar24,0),
                                                             fVar64 * *(float *)(puVar38 + 1)))));
            uStack_120 = CONCAT17((char)((uint)fVar25 >> 0x18),
                                  CONCAT16((char)((uint)fVar25 >> 0x10),
                                           CONCAT15((char)((uint)fVar25 >> 8),
                                                    CONCAT14(SUB41(fVar25,0),fVar48 * (float)uVar12)
                                                   )));
            uStack_108 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                  CONCAT16((char)((uint)fVar47 >> 0x10),
                                           CONCAT15((char)((uint)fVar47 >> 8),
                                                    CONCAT14(SUB41(fVar47,0),
                                                             fVar64 * *(float *)(puVar39 + 1)))));
            uStack_110 = CONCAT17((char)((uint)fVar26 >> 0x18),
                                  CONCAT16((char)((uint)fVar26 >> 0x10),
                                           CONCAT15((char)((uint)fVar26 >> 8),
                                                    CONCAT14(SUB41(fVar26,0),fVar48 * (float)uVar23)
                                                   )));
            fVar77 = fVar77 * auVar30._4_4_;
            fVar78 = fVar78 * 0.0;
            uStack_f8 = CONCAT17((char)((uint)fVar78 >> 0x18),
                                 CONCAT16((char)((uint)fVar78 >> 0x10),
                                          CONCAT15((char)((uint)fVar78 >> 8),
                                                   CONCAT14(SUB41(fVar78,0),fVar64 * auVar30._8_4_))
                                         ));
            uStack_100 = CONCAT17((char)((uint)fVar77 >> 0x18),
                                  CONCAT16((char)((uint)fVar77 >> 0x10),
                                           CONCAT15((char)((uint)fVar77 >> 8),
                                                    CONCAT14(SUB41(fVar77,0),fVar48 * auVar30._0_4_)
                                                   )));
            pppuVar36 = appuStack_f0;
            func_0x00010982416c(pppuVar36,&uStack_124,auStack_140,&uStack_120);
            if ((int)pppuVar36 != 0) {
              uStack_144 = (undefined4)uVar46;
              uStack_148 = 0;
              fVar25 = (float)auStack_140._0_8_;
              fVar78 = (float)*param_5 * fVar25;
              fVar77 = SUB84(auStack_140._0_8_,4);
              fVar26 = (float)((ulong)*param_5 >> 0x20) * fVar77;
              uVar55 = (undefined1)((uint)fVar26 >> 8);
              uVar56 = (undefined1)((uint)fVar26 >> 0x10);
              uVar57 = (undefined1)((uint)fVar26 >> 0x18);
              fVar24 = (float)auStack_140._8_8_;
              fVar47 = (float)param_5[1] * fVar24;
              uVar58 = (undefined1)((uint)fVar47 >> 8);
              uVar59 = (undefined1)((uint)fVar47 >> 0x10);
              uVar60 = (undefined1)((uint)fVar47 >> 0x18);
              fVar48 = (float)((ulong)param_5[1] >> 0x20) * SUB84(auStack_140._8_8_,4);
              uVar61 = (undefined1)((uint)fVar48 >> 8);
              uVar62 = (undefined1)((uint)fVar48 >> 0x10);
              uVar63 = (undefined1)((uint)fVar48 >> 0x18);
              auVar69._0_4_ = fVar25 * *(float *)(param_5 + 2);
              auVar69._4_4_ = fVar77 * *(float *)((long)param_5 + 0x14);
              auVar69._8_4_ = fVar24 * *(float *)(param_5 + 3);
              auVar69._12_4_ = SUB84(auStack_140._8_8_,4) * *(float *)((long)param_5 + 0x1c);
              fVar25 = fVar25 * *(float *)(param_5 + 4);
              fVar77 = fVar77 * *(float *)((long)param_5 + 0x24);
              uVar49 = (undefined1)((uint)fVar77 >> 8);
              uVar50 = (undefined1)((uint)fVar77 >> 0x10);
              uVar51 = (undefined1)((uint)fVar77 >> 0x18);
              fVar24 = fVar24 * *(float *)(param_5 + 5);
              uVar52 = (undefined1)((uint)fVar24 >> 8);
              uVar53 = (undefined1)((uint)fVar24 >> 0x10);
              uVar54 = (undefined1)((uint)fVar24 >> 0x18);
              auVar19[4] = SUB41(fVar26,0);
              auVar19._0_4_ = fVar78;
              auVar19[5] = uVar55;
              auVar19[6] = uVar56;
              auVar19[7] = uVar57;
              auVar19[8] = SUB41(fVar47,0);
              auVar19[9] = uVar58;
              auVar19[10] = uVar59;
              auVar19[0xb] = uVar60;
              auVar19[0xc] = SUB41(fVar48,0);
              auVar19[0xd] = uVar61;
              auVar19[0xe] = uVar62;
              auVar19[0xf] = uVar63;
              auVar20[4] = SUB41(fVar26,0);
              auVar20._0_4_ = fVar78;
              auVar20[5] = uVar55;
              auVar20[6] = uVar56;
              auVar20[7] = uVar57;
              auVar20[8] = SUB41(fVar47,0);
              auVar20[9] = uVar58;
              auVar20[10] = uVar59;
              auVar20[0xb] = uVar60;
              auVar20[0xc] = SUB41(fVar48,0);
              auVar20[0xd] = uVar61;
              auVar20[0xe] = uVar62;
              auVar20[0xf] = uVar63;
              auVar66 = NEON_ext(auVar19,auVar20,8,1);
              auVar86 = NEON_ext(auVar69,auVar69,8,1);
              fVar47 = auVar69._0_4_ + auVar69._4_4_ + auVar86._0_4_;
              auVar7[4] = SUB41(fVar77,0);
              auVar7._0_4_ = fVar25;
              auVar7[5] = uVar49;
              auVar7[6] = uVar50;
              auVar7[7] = uVar51;
              auVar7[8] = SUB41(fVar24,0);
              auVar7[9] = uVar52;
              auVar7[10] = uVar53;
              auVar7[0xb] = uVar54;
              auVar7._12_4_ = 0;
              auVar8[4] = SUB41(fVar77,0);
              auVar8._0_4_ = fVar25;
              auVar8[5] = uVar49;
              auVar8[6] = uVar50;
              auVar8[7] = uVar51;
              auVar8[8] = SUB41(fVar24,0);
              auVar8[9] = uVar52;
              auVar8[10] = uVar53;
              auVar8[0xb] = uVar54;
              auVar8._12_4_ = 0;
              auVar86 = NEON_ext(auVar7,auVar8,8,1);
              uVar49 = (undefined1)uStack_124;
              uVar50 = (undefined1)((uint)uStack_124 >> 8);
              uVar51 = (undefined1)((uint)uStack_124 >> 0x10);
              uVar52 = (undefined1)((uint)uStack_124 >> 0x18);
              uStack_98 = (ulong)(uint)(fVar25 + fVar77 + auVar86._0_4_ + auVar86._4_4_);
              uStack_a0 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                   CONCAT16((char)((uint)fVar47 >> 0x10),
                                            CONCAT15((char)((uint)fVar47 >> 8),
                                                     CONCAT14(SUB41(fVar47,0),
                                                              fVar78 + fVar26 + auVar66._0_4_))));
              uStack_90 = uStack_124;
              uStack_b0 = param_4;
              puStack_a8 = &uStack_148;
              (**(code **)(*param_6 + 0x18))(param_6,&uStack_b0,1);
              uStack_bc = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
            }
            puVar43 = puVar43 + 3;
            uVar46 = uVar46 + 1;
          } while (iVar45 + (uVar3 >> 0x18 & 1) + 1 != uVar46);
          puVar40 = puVar40 + 1;
        } while (puVar40 != puVar1);
      }
    }
    else if ((cVar4 == '\x01') && (iVar45 != 0)) {
      uVar65 = *(undefined8 *)(param_1 + 0xe);
      uVar11 = *(undefined8 *)(param_1 + 0xc);
      lVar2 = *(long *)(lVar41 + 0x10);
      lVar41 = *(long *)(lVar41 + 0x18);
      puVar1 = puStack_160 + uVar37;
      puVar40 = puStack_160;
      do {
        uVar3 = *puVar40;
        uVar46 = (ulong)uVar3 & 0xffffff;
        iVar45 = (int)uVar46;
        pbVar42 = (byte *)(lVar41 + 2 + uVar46 * 3);
        do {
          puVar38 = (undefined8 *)(lVar2 + (ulong)pbVar42[-2] * 0xc);
          puVar39 = (undefined8 *)(lVar2 + (ulong)pbVar42[-1] * 0xc);
          uVar12 = *puVar38;
          uVar23 = *puVar39;
          auVar30 = *(undefined1 (*) [12])(lVar2 + (ulong)*pbVar42 * 0xc);
          fVar48 = (float)uVar11;
          fVar77 = (float)((ulong)uVar11 >> 0x20);
          fVar25 = fVar77 * (float)((ulong)uVar12 >> 0x20);
          fVar64 = (float)uVar65;
          fVar78 = (float)((ulong)uVar65 >> 0x20);
          fVar24 = fVar78 * 0.0;
          fVar26 = fVar77 * (float)((ulong)uVar23 >> 0x20);
          fVar47 = fVar78 * 0.0;
          uStack_118 = CONCAT17((char)((uint)fVar24 >> 0x18),
                                CONCAT16((char)((uint)fVar24 >> 0x10),
                                         CONCAT15((char)((uint)fVar24 >> 8),
                                                  CONCAT14(SUB41(fVar24,0),
                                                           fVar64 * *(float *)(puVar38 + 1)))));
          uStack_120 = CONCAT17((char)((uint)fVar25 >> 0x18),
                                CONCAT16((char)((uint)fVar25 >> 0x10),
                                         CONCAT15((char)((uint)fVar25 >> 8),
                                                  CONCAT14(SUB41(fVar25,0),fVar48 * (float)uVar12)))
                               );
          uStack_108 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                CONCAT16((char)((uint)fVar47 >> 0x10),
                                         CONCAT15((char)((uint)fVar47 >> 8),
                                                  CONCAT14(SUB41(fVar47,0),
                                                           fVar64 * *(float *)(puVar39 + 1)))));
          uStack_110 = CONCAT17((char)((uint)fVar26 >> 0x18),
                                CONCAT16((char)((uint)fVar26 >> 0x10),
                                         CONCAT15((char)((uint)fVar26 >> 8),
                                                  CONCAT14(SUB41(fVar26,0),fVar48 * (float)uVar23)))
                               );
          fVar77 = fVar77 * auVar30._4_4_;
          fVar78 = fVar78 * 0.0;
          uStack_f8 = CONCAT17((char)((uint)fVar78 >> 0x18),
                               CONCAT16((char)((uint)fVar78 >> 0x10),
                                        CONCAT15((char)((uint)fVar78 >> 8),
                                                 CONCAT14(SUB41(fVar78,0),fVar64 * auVar30._8_4_))))
          ;
          uStack_100 = CONCAT17((char)((uint)fVar77 >> 0x18),
                                CONCAT16((char)((uint)fVar77 >> 0x10),
                                         CONCAT15((char)((uint)fVar77 >> 8),
                                                  CONCAT14(SUB41(fVar77,0),fVar48 * auVar30._0_4_)))
                               );
          pppuVar36 = appuStack_f0;
          func_0x00010982416c(pppuVar36,&uStack_124,auStack_140,&uStack_120);
          if ((int)pppuVar36 != 0) {
            uStack_144 = (undefined4)uVar46;
            uStack_148 = 0;
            fVar25 = (float)auStack_140._0_8_;
            fVar78 = (float)*param_5 * fVar25;
            fVar77 = SUB84(auStack_140._0_8_,4);
            fVar26 = (float)((ulong)*param_5 >> 0x20) * fVar77;
            uVar55 = (undefined1)((uint)fVar26 >> 8);
            uVar56 = (undefined1)((uint)fVar26 >> 0x10);
            uVar57 = (undefined1)((uint)fVar26 >> 0x18);
            fVar24 = (float)auStack_140._8_8_;
            fVar47 = (float)param_5[1] * fVar24;
            uVar58 = (undefined1)((uint)fVar47 >> 8);
            uVar59 = (undefined1)((uint)fVar47 >> 0x10);
            uVar60 = (undefined1)((uint)fVar47 >> 0x18);
            fVar48 = (float)((ulong)param_5[1] >> 0x20) * SUB84(auStack_140._8_8_,4);
            uVar61 = (undefined1)((uint)fVar48 >> 8);
            uVar62 = (undefined1)((uint)fVar48 >> 0x10);
            uVar63 = (undefined1)((uint)fVar48 >> 0x18);
            auVar68._0_4_ = fVar25 * *(float *)(param_5 + 2);
            auVar68._4_4_ = fVar77 * *(float *)((long)param_5 + 0x14);
            auVar68._8_4_ = fVar24 * *(float *)(param_5 + 3);
            auVar68._12_4_ = SUB84(auStack_140._8_8_,4) * *(float *)((long)param_5 + 0x1c);
            fVar25 = fVar25 * *(float *)(param_5 + 4);
            fVar77 = fVar77 * *(float *)((long)param_5 + 0x24);
            uVar49 = (undefined1)((uint)fVar77 >> 8);
            uVar50 = (undefined1)((uint)fVar77 >> 0x10);
            uVar51 = (undefined1)((uint)fVar77 >> 0x18);
            fVar24 = fVar24 * *(float *)(param_5 + 5);
            uVar52 = (undefined1)((uint)fVar24 >> 8);
            uVar53 = (undefined1)((uint)fVar24 >> 0x10);
            uVar54 = (undefined1)((uint)fVar24 >> 0x18);
            auVar17[4] = SUB41(fVar26,0);
            auVar17._0_4_ = fVar78;
            auVar17[5] = uVar55;
            auVar17[6] = uVar56;
            auVar17[7] = uVar57;
            auVar17[8] = SUB41(fVar47,0);
            auVar17[9] = uVar58;
            auVar17[10] = uVar59;
            auVar17[0xb] = uVar60;
            auVar17[0xc] = SUB41(fVar48,0);
            auVar17[0xd] = uVar61;
            auVar17[0xe] = uVar62;
            auVar17[0xf] = uVar63;
            auVar18[4] = SUB41(fVar26,0);
            auVar18._0_4_ = fVar78;
            auVar18[5] = uVar55;
            auVar18[6] = uVar56;
            auVar18[7] = uVar57;
            auVar18[8] = SUB41(fVar47,0);
            auVar18[9] = uVar58;
            auVar18[10] = uVar59;
            auVar18[0xb] = uVar60;
            auVar18[0xc] = SUB41(fVar48,0);
            auVar18[0xd] = uVar61;
            auVar18[0xe] = uVar62;
            auVar18[0xf] = uVar63;
            auVar66 = NEON_ext(auVar17,auVar18,8,1);
            auVar86 = NEON_ext(auVar68,auVar68,8,1);
            fVar47 = auVar68._0_4_ + auVar68._4_4_ + auVar86._0_4_;
            auVar5[4] = SUB41(fVar77,0);
            auVar5._0_4_ = fVar25;
            auVar5[5] = uVar49;
            auVar5[6] = uVar50;
            auVar5[7] = uVar51;
            auVar5[8] = SUB41(fVar24,0);
            auVar5[9] = uVar52;
            auVar5[10] = uVar53;
            auVar5[0xb] = uVar54;
            auVar5._12_4_ = 0;
            auVar6[4] = SUB41(fVar77,0);
            auVar6._0_4_ = fVar25;
            auVar6[5] = uVar49;
            auVar6[6] = uVar50;
            auVar6[7] = uVar51;
            auVar6[8] = SUB41(fVar24,0);
            auVar6[9] = uVar52;
            auVar6[10] = uVar53;
            auVar6[0xb] = uVar54;
            auVar6._12_4_ = 0;
            auVar86 = NEON_ext(auVar5,auVar6,8,1);
            uVar49 = (undefined1)uStack_124;
            uVar50 = (undefined1)((uint)uStack_124 >> 8);
            uVar51 = (undefined1)((uint)uStack_124 >> 0x10);
            uVar52 = (undefined1)((uint)uStack_124 >> 0x18);
            uStack_98 = (ulong)(uint)(fVar25 + fVar77 + auVar86._0_4_ + auVar86._4_4_);
            uStack_a0 = CONCAT17((char)((uint)fVar47 >> 0x18),
                                 CONCAT16((char)((uint)fVar47 >> 0x10),
                                          CONCAT15((char)((uint)fVar47 >> 8),
                                                   CONCAT14(SUB41(fVar47,0),
                                                            fVar78 + fVar26 + auVar66._0_4_))));
            uStack_90 = uStack_124;
            uStack_b0 = param_4;
            puStack_a8 = &uStack_148;
            (**(code **)(*param_6 + 0x18))(param_6,&uStack_b0,1);
            uStack_bc = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
          }
          pbVar42 = pbVar42 + 3;
          uVar46 = uVar46 + 1;
        } while (iVar45 + (uVar3 >> 0x18 & 1) + 1 != uVar46);
        puVar40 = puVar40 + 1;
      } while (puVar40 != puVar1);
    }
    param_1 = puStack_160;
    if (puStack_160 != (uint *)0x0) {
      puStack_158 = puStack_160;
      __ZdlPv();
      param_1 = puStack_160;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Unwind_Resume(param_1);
    return;
  }
  return;
}



/* Entry: 10aa2b4c4; end: 10aa2b4c7;  */

void FUN_10aa2b4c4(void)

{
  return;
}



/* Entry: 10aa2b4c8; end: 10aa2bbcf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010aa2b764 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10aa2b4c8(undefined4 param_1,undefined4 param_2,uint *param_3,long *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  long *param_9)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  byte *pbVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  float fVar37;
  float fVar38;
  float fVar42;
  float fVar44;
  undefined1 auVar39 [12];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  undefined **ppuStack_290;
  long *plStack_288;
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
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  uint *puStack_1a8;
  uint *puStack_1a0;
  undefined1 auStack_190 [8];
  float fStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_3 + 10);
  if (lVar25 != 0) {
    uVar11 = param_8[1];
    fVar59 = (float)uVar11;
    fVar57 = (float)*param_8;
    fVar58 = (float)((ulong)*param_8 >> 0x20);
    auVar51 = *(undefined1 (*) [16])(param_8 + 2);
    auVar66 = *(undefined1 (*) [16])(param_8 + 4);
    uVar7 = param_8[7];
    uVar18 = param_8[6];
    fVar29 = (float)param_6[1];
    fVar26 = (float)*param_6;
    fVar60 = (float)((ulong)*param_6 >> 0x20);
    fVar49 = (float)param_3[8];
    uVar5 = param_6[2];
    auVar41 = *(undefined1 (*) [16])(param_6 + 4);
    fVar64 = auVar51._4_4_;
    fVar28 = (float)uVar5;
    fVar38 = (float)((ulong)uVar5 >> 0x20);
    fVar43 = (float)param_6[3];
    fVar65 = auVar51._8_4_;
    fVar55 = auVar66._4_4_;
    fVar37 = auVar41._0_4_;
    fVar42 = auVar41._4_4_;
    fVar44 = auVar41._8_4_;
    auVar45._0_8_ =
         CONCAT44(fVar60 * fVar58 + fVar38 * fVar64 + fVar42 * fVar55,
                  fVar26 * fVar58 + fVar28 * fVar64 + fVar37 * fVar55);
    auVar45._8_4_ = fVar29 * fVar58 + fVar43 * fVar64 + fVar44 * fVar55;
    auVar45._12_4_ = fVar58 * 0.0 + fVar64 * 0.0 + fVar55 * 0.0;
    fVar61 = auVar51._0_4_;
    fVar53 = auVar66._0_4_;
    fVar56 = auVar66._8_4_;
    auVar50._0_8_ =
         CONCAT44(fVar60 * fVar59 + fVar38 * fVar65 + fVar42 * fVar56,
                  fVar26 * fVar59 + fVar28 * fVar65 + fVar37 * fVar56);
    auVar50._8_4_ = fVar29 * fVar59 + fVar43 * fVar65 + fVar44 * fVar56;
    auVar50._12_4_ = fVar59 * 0.0 + fVar65 * 0.0 + fVar56 * 0.0;
    uStack_168 = CONCAT44(fVar57 * 0.0 + fVar61 * 0.0 + fVar53 * 0.0,
                          fVar29 * fVar57 + fVar43 * fVar61 + fVar44 * fVar53);
    uStack_170 = CONCAT44(fVar60 * fVar57 + fVar38 * fVar61 + fVar42 * fVar53,
                          fVar26 * fVar57 + fVar28 * fVar61 + fVar37 * fVar53);
    uStack_158 = auVar45._8_8_;
    uStack_148 = auVar50._8_8_;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_160 = auVar45._0_8_;
    uStack_150 = auVar50._0_8_;
    (**(code **)(*param_4 + 0x10))(param_4,&uStack_170,auStack_190,auStack_180);
    uVar9 = *(undefined8 *)(param_3 + 0x12);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    uVar14 = param_5[6];
    uVar15 = param_5[7];
    uVar6 = param_6[7];
    uVar5 = param_6[6];
    FUN_109ffe100(&puStack_1a8,*(undefined4 *)(lVar25 + 0x90));
    uVar34 = (undefined1)((ulong)uVar11 >> 8);
    uVar35 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar36 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar30 = auVar51[0];
    uVar31 = auVar51[1];
    uVar32 = auVar51[2];
    uVar33 = auVar51[3];
    fVar28 = (float)(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,fVar57)))) >>
                    0x20);
    auVar41[4] = uVar30;
    auVar41._0_4_ = fVar57;
    auVar41[5] = uVar31;
    auVar41[6] = uVar32;
    auVar41[7] = uVar33;
    auVar41[8] = (char)uVar11;
    auVar41[9] = uVar34;
    auVar41[10] = uVar35;
    auVar41[0xb] = uVar36;
    auVar41[0xc] = auVar51[8];
    auVar41[0xd] = auVar51[9];
    auVar41[0xe] = auVar51[10];
    auVar41[0xf] = auVar51[0xb];
    auVar48[4] = uVar30;
    auVar48._0_4_ = fVar57;
    auVar48[5] = uVar31;
    auVar48[6] = uVar32;
    auVar48[7] = uVar33;
    auVar48[8] = (char)uVar11;
    auVar48[9] = uVar34;
    auVar48[10] = uVar35;
    auVar48[0xb] = uVar36;
    auVar48[0xc] = auVar51[8];
    auVar48[0xd] = auVar51[9];
    auVar48[0xe] = auVar51[10];
    auVar48[0xf] = auVar51[0xb];
    auVar51 = NEON_ext(auVar41,auVar48,8,1);
    auVar39._0_8_ = uVar18 ^ 0x8000000080000000;
    auVar39[8] = (undefined1)uVar7;
    auVar39[9] = (undefined1)((ulong)uVar7 >> 8);
    auVar39[10] = (undefined1)((ulong)uVar7 >> 0x10);
    auVar39[0xb] = (byte)((ulong)uVar7 >> 0x18) ^ 0x80;
    auVar62[0xc] = (undefined1)((ulong)uVar7 >> 0x20);
    auVar62._0_12_ = auVar39;
    auVar62[0xd] = (undefined1)((ulong)uVar7 >> 0x28);
    auVar62[0xe] = (undefined1)((ulong)uVar7 >> 0x30);
    auVar62[0xf] = (byte)((ulong)uVar7 >> 0x38) ^ 0x80;
    fVar38 = (float)auVar39._0_8_;
    auVar46._0_4_ = fVar57 * fVar38;
    fVar43 = (float)(auVar39._0_8_ >> 0x20);
    auVar46._4_4_ = fVar28 * fVar43;
    fVar26 = auVar39._8_4_;
    auVar46._8_4_ = fVar53 * fVar26;
    auVar46._12_4_ = auVar62._12_4_ * 0.0;
    fVar60 = auVar62._12_4_ * 0.0;
    auVar62 = NEON_ext(auVar46,auVar46,8,1);
    auVar69._4_4_ = fVar64 * fVar43;
    auVar69._0_4_ = fVar58 * fVar38;
    auVar69._8_4_ = fVar55 * fVar26;
    auVar69._12_4_ = fVar60;
    auVar10._4_4_ = fVar64 * fVar43;
    auVar10._0_4_ = fVar58 * fVar38;
    auVar10._8_4_ = fVar55 * fVar26;
    auVar10._12_4_ = fVar60;
    NEON_ext(auVar69,auVar10,8,1);
    auVar66 = NEON_ext(auVar66,auVar66,8,1);
    fVar29 = auVar66._0_4_;
    fVar60 = auVar51._0_4_;
    auVar40._0_4_ = fVar60 * fVar38;
    fVar38 = auVar51._4_4_;
    auVar40._4_4_ = fVar38 * fVar43;
    auVar40._8_4_ = fVar29 * fVar26;
    auVar40._12_4_ = 0;
    NEON_ext(auVar40,auVar40,8,1);
    fVar44 = (float)uVar8;
    auVar47._0_4_ = fVar44 * (auStack_190._0_4_ - fVar49);
    fVar43 = (float)((ulong)uVar8 >> 0x20);
    auVar47._4_4_ = fVar43 * (auStack_190._4_4_ - fVar49);
    fVar26 = (float)uVar9;
    auVar47._8_4_ = fVar26 * (fStack_188 - fVar49);
    fVar37 = (float)((ulong)uVar9 >> 0x20);
    auVar47._12_4_ = fVar37 * 0.0;
    auVar63._0_4_ = (fVar49 + (float)auStack_180._0_8_) * fVar44;
    auVar63._4_4_ = (fVar49 + SUB84(auStack_180._0_8_,4)) * fVar43;
    auVar63._8_4_ = (fVar49 + (float)auStack_180._8_8_) * fVar26;
    auVar63._12_4_ = (SUB84(auStack_180._8_8_,4) + 0.0) * fVar37;
    auVar41 = NEON_fmin(auVar47,auVar63,4);
    fVar37 = (float)uVar15;
    fVar42 = (float)((ulong)uVar15 >> 0x20);
    fVar43 = (float)uVar14;
    fVar26 = (float)((ulong)uVar14 >> 0x20);
    auVar67._0_4_ = fVar57 * fVar43;
    auVar67._4_4_ = fVar28 * fVar26;
    auVar67._8_4_ = fVar53 * fVar37;
    auVar67._12_4_ = fVar42 * 0.0;
    auVar68._0_4_ = fVar58 * fVar43;
    auVar68._4_4_ = fVar64 * fVar26;
    auVar68._8_4_ = fVar55 * fVar37;
    auVar68._12_4_ = fVar42 * 0.0;
    auVar69 = NEON_ext(auVar67,auVar67,8,1);
    NEON_ext(auVar68,auVar68,8,1);
    auVar12._4_4_ = fVar38 * fVar26;
    auVar12._0_4_ = fVar60 * fVar43;
    auVar12._8_4_ = fVar29 * fVar37;
    auVar12._12_4_ = 0;
    auVar13._4_4_ = fVar38 * fVar26;
    auVar13._0_4_ = fVar60 * fVar43;
    auVar13._8_4_ = fVar29 * fVar37;
    auVar13._12_4_ = 0;
    NEON_ext(auVar12,auVar13,8,1);
    auVar48 = NEON_fmax(auVar47,auVar63,4);
    fStack_340 = (float)uVar5;
    fStack_33c = (float)((ulong)uVar5 >> 0x20);
    fStack_338 = (float)uVar6;
    fStack_334 = (float)((ulong)uVar6 >> 0x20);
    auVar54._0_4_ = fVar58 * fStack_340;
    auVar54._4_4_ = fVar64 * fStack_33c;
    auVar54._8_4_ = fVar55 * fStack_338;
    auVar54._12_4_ = fStack_334 * 0.0;
    auVar52._0_4_ = fVar60 * fStack_340;
    auVar52._4_4_ = fVar38 * fStack_33c;
    auVar52._8_4_ = fVar29 * fStack_338;
    auVar51._4_4_ = fVar28 * fStack_33c;
    auVar51._0_4_ = fVar57 * fStack_340;
    auVar51._8_4_ = fVar53 * fStack_338;
    auVar51._12_4_ = fStack_334 * 0.0;
    auVar66._4_4_ = fVar28 * fStack_33c;
    auVar66._0_4_ = fVar57 * fStack_340;
    auVar66._8_4_ = fVar53 * fStack_338;
    auVar66._12_4_ = fStack_334 * 0.0;
    NEON_ext(auVar51,auVar66,8,1);
    NEON_ext(auVar54,auVar54,8,1);
    auVar52._12_4_ = 0;
    NEON_ext(auVar52,auVar52,8,1);
    uVar18 = lVar25 + 0x40;
    func_0x00010aa2a714(fVar44 * (auVar62._0_4_ + auVar46._0_4_ + auVar46._4_4_ +
                                 auVar67._0_4_ + auVar67._4_4_ + auVar69._0_4_),
                        CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,param_2)))),
                        auVar41._0_8_,auVar48._0_8_,uVar18,puStack_1a8);
    iVar16 = (int)uVar18;
    uVar18 = uVar18 & 0xffffffff;
    uStack_278 = param_5[1];
    uStack_280 = *param_5;
    uStack_268 = param_5[3];
    uStack_270 = param_5[2];
    uStack_258 = param_5[5];
    uStack_260 = param_5[4];
    uStack_248 = param_5[7];
    uStack_250 = param_5[6];
    uStack_238 = param_6[1];
    uStack_240 = *param_6;
    uStack_228 = param_6[3];
    uStack_230 = param_6[2];
    uStack_218 = param_6[5];
    uStack_220 = *(undefined8 *)*(undefined1 (*) [16])(param_6 + 4);
    uStack_208 = param_6[7];
    uStack_210 = param_6[6];
    uStack_1f8 = param_8[1];
    uStack_200 = *param_8;
    uStack_1e8 = param_8[3];
    uStack_1f0 = *(undefined8 *)*(undefined1 (*) [16])(param_8 + 2);
    uStack_1d8 = param_8[5];
    uStack_1e0 = *(undefined8 *)*(undefined1 (*) [16])(param_8 + 4);
    uStack_1c8 = param_8[7];
    uStack_1d0 = param_8[6];
    ppuStack_290 = &PTR_FUN_110c3b8e8;
    uStack_1c0 = (undefined4)param_9[1];
    cVar4 = *(char *)(lVar25 + 8);
    plStack_288 = param_4;
    fStack_1bc = fVar49;
    uStack_1b8 = param_1;
    if (cVar4 == '\x04') {
      if (iVar16 != 0) {
        uVar7 = *(undefined8 *)(param_3 + 0xe);
        uVar5 = *(undefined8 *)(param_3 + 0xc);
        lVar2 = *(long *)(lVar25 + 0x10);
        lVar25 = *(long *)(lVar25 + 0x18);
        puVar1 = puStack_1a8 + uVar18;
        puVar24 = puStack_1a8;
        do {
          uVar3 = *puVar24;
          uVar18 = (ulong)uVar3 & 0xffffff;
          iVar16 = (int)uVar18;
          puVar23 = (uint *)(lVar25 + 8 + uVar18 * 0xc);
          do {
            puVar19 = (undefined8 *)(lVar2 + (ulong)puVar23[-2] * 0xc);
            puVar20 = (undefined8 *)(lVar2 + (ulong)puVar23[-1] * 0xc);
            uVar6 = *puVar19;
            uVar8 = *puVar20;
            auVar39 = *(undefined1 (*) [12])(lVar2 + (ulong)*puVar23 * 0xc);
            fVar43 = (float)uVar5;
            fVar49 = (float)((ulong)uVar5 >> 0x20);
            fVar26 = (float)uVar7;
            fVar60 = (float)((ulong)uVar7 >> 0x20);
            fVar28 = fVar49 * (float)((ulong)uVar8 >> 0x20);
            fVar38 = fVar60 * 0.0;
            uStack_e8 = CONCAT44(fVar60 * 0.0,fVar26 * *(float *)(puVar19 + 1));
            uStack_f0 = CONCAT44(fVar49 * (float)((ulong)uVar6 >> 0x20),fVar43 * (float)uVar6);
            uStack_d8 = CONCAT17((char)((uint)fVar38 >> 0x18),
                                 CONCAT16((char)((uint)fVar38 >> 0x10),
                                          CONCAT15((char)((uint)fVar38 >> 8),
                                                   CONCAT14(SUB41(fVar38,0),
                                                            fVar26 * *(float *)(puVar20 + 1)))));
            uStack_e0 = CONCAT17((char)((uint)fVar28 >> 0x18),
                                 CONCAT16((char)((uint)fVar28 >> 0x10),
                                          CONCAT15((char)((uint)fVar28 >> 8),
                                                   CONCAT14(SUB41(fVar28,0),fVar43 * (float)uVar8)))
                                );
            uStack_c8 = CONCAT44(fVar60 * 0.0,fVar26 * auVar39._8_4_);
            uStack_d0 = CONCAT44(fVar49 * auVar39._4_4_,fVar43 * auVar39._0_4_);
            pppuVar17 = &ppuStack_290;
            func_0x0001098243b4(pppuVar17,&uStack_f4,&uStack_110,&uStack_120,&uStack_f0);
            if ((int)pppuVar17 != 0) {
              uStack_128 = 0;
              uStack_124 = (undefined4)uVar18;
              uStack_a8 = uStack_108;
              uStack_b0 = uStack_110;
              uStack_98 = uStack_118;
              uStack_a0 = uStack_120;
              uStack_90 = uStack_f4;
              uVar27 = uStack_f4;
              uStack_c0 = param_7;
              puStack_b8 = &uStack_128;
              (**(code **)(*param_9 + 0x18))(param_9,&uStack_c0,1);
              uStack_1c0 = uVar27;
            }
            puVar23 = puVar23 + 3;
            uVar18 = uVar18 + 1;
          } while (iVar16 + (uVar3 >> 0x18 & 1) + 1 != uVar18);
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar1);
      }
    }
    else if (cVar4 == '\x02') {
      if (iVar16 != 0) {
        uVar7 = *(undefined8 *)(param_3 + 0xe);
        uVar5 = *(undefined8 *)(param_3 + 0xc);
        puVar1 = puStack_1a8 + uVar18;
        lVar2 = *(long *)(lVar25 + 0x10);
        lVar25 = *(long *)(lVar25 + 0x18);
        puVar24 = puStack_1a8;
        do {
          uVar3 = *puVar24;
          uVar18 = (ulong)uVar3 & 0xffffff;
          iVar16 = (int)uVar18;
          puVar21 = (ushort *)(lVar25 + 4 + uVar18 * 6);
          do {
            puVar19 = (undefined8 *)(lVar2 + (ulong)puVar21[-2] * 0xc);
            puVar20 = (undefined8 *)(lVar2 + (ulong)puVar21[-1] * 0xc);
            uVar6 = *puVar19;
            uVar8 = *puVar20;
            auVar39 = *(undefined1 (*) [12])(lVar2 + (ulong)*puVar21 * 0xc);
            fVar43 = (float)uVar5;
            fVar49 = (float)((ulong)uVar5 >> 0x20);
            fVar26 = (float)uVar7;
            fVar60 = (float)((ulong)uVar7 >> 0x20);
            fVar28 = fVar49 * (float)((ulong)uVar8 >> 0x20);
            fVar38 = fVar60 * 0.0;
            uStack_e8 = CONCAT44(fVar60 * 0.0,fVar26 * *(float *)(puVar19 + 1));
            uStack_f0 = CONCAT44(fVar49 * (float)((ulong)uVar6 >> 0x20),fVar43 * (float)uVar6);
            uStack_d8 = CONCAT17((char)((uint)fVar38 >> 0x18),
                                 CONCAT16((char)((uint)fVar38 >> 0x10),
                                          CONCAT15((char)((uint)fVar38 >> 8),
                                                   CONCAT14(SUB41(fVar38,0),
                                                            fVar26 * *(float *)(puVar20 + 1)))));
            uStack_e0 = CONCAT17((char)((uint)fVar28 >> 0x18),
                                 CONCAT16((char)((uint)fVar28 >> 0x10),
                                          CONCAT15((char)((uint)fVar28 >> 8),
                                                   CONCAT14(SUB41(fVar28,0),fVar43 * (float)uVar8)))
                                );
            uStack_c8 = CONCAT44(fVar60 * 0.0,fVar26 * auVar39._8_4_);
            uStack_d0 = CONCAT44(fVar49 * auVar39._4_4_,fVar43 * auVar39._0_4_);
            pppuVar17 = &ppuStack_290;
            func_0x0001098243b4(pppuVar17,&uStack_f4,&uStack_110,&uStack_120,&uStack_f0);
            if ((int)pppuVar17 != 0) {
              uStack_128 = 0;
              uStack_124 = (undefined4)uVar18;
              uStack_a8 = uStack_108;
              uStack_b0 = uStack_110;
              uStack_98 = uStack_118;
              uStack_a0 = uStack_120;
              uStack_90 = uStack_f4;
              uVar27 = uStack_f4;
              uStack_c0 = param_7;
              puStack_b8 = &uStack_128;
              (**(code **)(*param_9 + 0x18))(param_9,&uStack_c0,1);
              uStack_1c0 = uVar27;
            }
            puVar21 = puVar21 + 3;
            uVar18 = uVar18 + 1;
          } while (iVar16 + (uVar3 >> 0x18 & 1) + 1 != uVar18);
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar1);
      }
    }
    else if ((cVar4 == '\x01') && (iVar16 != 0)) {
      uVar7 = *(undefined8 *)(param_3 + 0xe);
      uVar5 = *(undefined8 *)(param_3 + 0xc);
      lVar2 = *(long *)(lVar25 + 0x10);
      lVar25 = *(long *)(lVar25 + 0x18);
      puVar1 = puStack_1a8 + uVar18;
      puVar24 = puStack_1a8;
      do {
        uVar3 = *puVar24;
        uVar18 = (ulong)uVar3 & 0xffffff;
        iVar16 = (int)uVar18;
        pbVar22 = (byte *)(lVar25 + 2 + uVar18 * 3);
        do {
          puVar19 = (undefined8 *)(lVar2 + (ulong)pbVar22[-2] * 0xc);
          puVar20 = (undefined8 *)(lVar2 + (ulong)pbVar22[-1] * 0xc);
          uVar6 = *puVar19;
          uVar8 = *puVar20;
          auVar39 = *(undefined1 (*) [12])(lVar2 + (ulong)*pbVar22 * 0xc);
          fVar43 = (float)uVar5;
          fVar49 = (float)((ulong)uVar5 >> 0x20);
          fVar26 = (float)uVar7;
          fVar60 = (float)((ulong)uVar7 >> 0x20);
          fVar28 = fVar49 * (float)((ulong)uVar8 >> 0x20);
          fVar38 = fVar60 * 0.0;
          uStack_e8 = CONCAT44(fVar60 * 0.0,fVar26 * *(float *)(puVar19 + 1));
          uStack_f0 = CONCAT44(fVar49 * (float)((ulong)uVar6 >> 0x20),fVar43 * (float)uVar6);
          uStack_d8 = CONCAT17((char)((uint)fVar38 >> 0x18),
                               CONCAT16((char)((uint)fVar38 >> 0x10),
                                        CONCAT15((char)((uint)fVar38 >> 8),
                                                 CONCAT14(SUB41(fVar38,0),
                                                          fVar26 * *(float *)(puVar20 + 1)))));
          uStack_e0 = CONCAT17((char)((uint)fVar28 >> 0x18),
                               CONCAT16((char)((uint)fVar28 >> 0x10),
                                        CONCAT15((char)((uint)fVar28 >> 8),
                                                 CONCAT14(SUB41(fVar28,0),fVar43 * (float)uVar8))));
          uStack_c8 = CONCAT44(fVar60 * 0.0,fVar26 * auVar39._8_4_);
          uStack_d0 = CONCAT44(fVar49 * auVar39._4_4_,fVar43 * auVar39._0_4_);
          pppuVar17 = &ppuStack_290;
          func_0x0001098243b4(pppuVar17,&uStack_f4,&uStack_110,&uStack_120,&uStack_f0);
          if ((int)pppuVar17 != 0) {
            uStack_128 = 0;
            uStack_124 = (undefined4)uVar18;
            uStack_a8 = uStack_108;
            uStack_b0 = uStack_110;
            uStack_98 = uStack_118;
            uStack_a0 = uStack_120;
            uStack_90 = uStack_f4;
            uVar27 = uStack_f4;
            uStack_c0 = param_7;
            puStack_b8 = &uStack_128;
            (**(code **)(*param_9 + 0x18))(param_9,&uStack_c0,1);
            uStack_1c0 = uVar27;
          }
          pbVar22 = pbVar22 + 3;
          uVar18 = uVar18 + 1;
        } while (iVar16 + (uVar3 >> 0x18 & 1) + 1 != uVar18);
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar1);
    }
    param_3 = puStack_1a8;
    if (puStack_1a8 != (uint *)0x0) {
      puStack_1a0 = puStack_1a8;
      __ZdlPv();
      param_3 = puStack_1a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Unwind_Resume(param_3);
    return;
  }
  return;
}



/* Entry: 10aa2bbd0; end: 10aa2bbd3;  */

void FUN_10aa2bbd0(void)

{
  return;
}



/* Entry: 10aa2bbd4; end: 10aa2bebf;  */

void FUN_10aa2bbd4(float *param_1,ushort *param_2,long param_3,long param_4,undefined8 *param_5)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  float fStack_48;
  undefined4 uStack_44;
  
  uVar6 = uRam0000000113835570;
  uVar5 = uRam0000000113835560;
  fVar8 = fRam0000000113835590;
  fVar9 = fRam0000000113835594;
  fVar10 = fRam0000000113835598;
  fVar11 = fRam000000011383559c;
  fVar15 = fRam0000000113835598;
  fVar18 = fRam0000000113835598;
  fVar13 = fRam0000000113835590;
  fVar14 = fRam0000000113835594;
  fVar16 = fRam0000000113835590;
  fVar17 = fRam0000000113835594;
  fVar12 = fRam0000000113835590;
  if (param_3 != 0) {
    fVar19 = *(float *)(param_5 + 1);
    puVar1 = param_2 + param_3;
    do {
      auVar3 = *(undefined1 (*) [12])(param_4 + (ulong)*param_2 * 0xc);
      auVar4 = *(undefined1 (*) [12])(param_4 + (ulong)param_2[1] * 0xc);
      puVar7 = (undefined8 *)(param_4 + (ulong)param_2[2] * 0xc);
      uVar2 = *puVar7;
      fVar23 = (float)*param_5;
      auVar20._0_4_ = fVar23 * auVar3._0_4_;
      fVar24 = (float)((ulong)*param_5 >> 0x20);
      auVar20._4_4_ = fVar24 * auVar3._4_4_;
      auVar20._8_4_ = fVar19 * auVar3._8_4_;
      auVar20._12_4_ = 0;
      auVar21._0_4_ = fVar23 * auVar4._0_4_;
      auVar21._4_4_ = fVar24 * auVar4._4_4_;
      auVar21._8_4_ = fVar19 * auVar4._8_4_;
      auVar21._12_4_ = 0;
      auVar22._0_4_ = auVar21._0_4_ - auVar20._0_4_;
      auVar22._4_4_ = auVar21._4_4_ - auVar20._4_4_;
      auVar22._8_4_ = auVar21._8_4_ - auVar20._8_4_;
      auVar22._12_4_ = 0;
      fVar23 = fVar23 * (float)uVar2;
      fVar24 = fVar24 * (float)((ulong)uVar2 >> 0x20);
      fVar25 = fVar19 * *(float *)(puVar7 + 1);
      auVar44._0_4_ = fVar23 - auVar20._0_4_;
      auVar44._4_4_ = fVar24 - auVar20._4_4_;
      auVar44._8_4_ = fVar25 - auVar20._8_4_;
      auVar44._12_4_ = 0;
      auVar30 = NEON_ext(auVar22,auVar22,0xc,1);
      auVar31 = NEON_ext(auVar30,auVar22,8,1);
      auVar30 = NEON_ext(auVar44,auVar44,0xc,1);
      auVar33 = NEON_ext(auVar30,auVar44,8,1);
      fVar32 = auVar20._0_4_ * auVar20._0_4_ + auVar21._0_4_ * (auVar20._0_4_ + auVar21._0_4_);
      fVar34 = auVar20._4_4_ * auVar20._4_4_ + auVar21._4_4_ * (auVar20._4_4_ + auVar21._4_4_);
      fVar35 = auVar20._8_4_ * auVar20._8_4_ + auVar21._8_4_ * (auVar20._8_4_ + auVar21._8_4_);
      fVar36 = auVar20._0_4_ + auVar21._0_4_ + fVar23;
      fVar37 = auVar20._4_4_ + auVar21._4_4_ + fVar24;
      fVar38 = auVar20._8_4_ + auVar21._8_4_ + fVar25;
      fVar39 = fVar32 + fVar23 * fVar36;
      fVar40 = fVar34 + fVar24 * fVar37;
      fVar41 = fVar35 + fVar25 * fVar38;
      auVar30 = NEON_ext(ZEXT216(0),auVar20,0xc,1);
      auVar42 = NEON_rev64(auVar30,4);
      auVar42 = NEON_ext(auVar30,auVar42,8,1);
      auVar30 = NEON_ext(ZEXT216(0),auVar21,0xc,1);
      auVar43 = NEON_rev64(auVar30,4);
      auVar27._0_4_ = auVar33._0_4_ * auVar22._0_4_ - auVar31._0_4_ * auVar44._0_4_;
      auVar27._4_4_ = auVar33._4_4_ * auVar22._4_4_ - auVar31._4_4_ * auVar44._4_4_;
      auVar27._8_4_ = auVar33._8_4_ * auVar22._8_4_ - auVar31._8_4_ * auVar44._8_4_;
      auVar27._12_4_ = auVar33._12_4_ * 0.0 - auVar31._12_4_ * 0.0;
      auVar22 = NEON_ext(auVar30,auVar43,8,1);
      auVar30._4_4_ = fVar24;
      auVar30._0_4_ = fVar23;
      auVar30._8_4_ = fVar25;
      auVar30._12_4_ = 0;
      auVar30 = NEON_ext(ZEXT216(0),auVar30,0xc,1);
      auVar44 = NEON_rev64(auVar30,4);
      auVar44 = NEON_ext(auVar30,auVar44,8,1);
      auVar30 = NEON_ext(auVar27,auVar27,0xc,1);
      auVar30 = NEON_ext(auVar30,auVar27,8,1);
      fVar26 = auVar30._0_4_;
      fVar28 = auVar30._4_4_;
      fVar29 = auVar30._8_4_;
      fVar12 = fVar12 + fVar36 * fVar26;
      fVar16 = fVar16 + fVar39 * fVar26;
      fVar17 = fVar17 + fVar40 * fVar28;
      fVar18 = fVar18 + fVar41 * fVar29;
      fVar13 = fVar13 + (auVar20._0_4_ * auVar20._0_4_ * auVar20._0_4_ + auVar21._0_4_ * fVar32 +
                        fVar23 * fVar39) * fVar26;
      fVar14 = fVar14 + (auVar20._4_4_ * auVar20._4_4_ * auVar20._4_4_ + auVar21._4_4_ * fVar34 +
                        fVar24 * fVar40) * fVar28;
      fVar15 = fVar15 + (auVar20._8_4_ * auVar20._8_4_ * auVar20._8_4_ + auVar21._8_4_ * fVar35 +
                        fVar25 * fVar41) * fVar29;
      fVar8 = fVar8 + (auVar44._0_4_ * (fVar39 + fVar23 * (fVar23 + fVar36)) +
                      auVar42._0_4_ * (fVar39 + auVar20._0_4_ * (auVar20._0_4_ + fVar36)) +
                      auVar22._0_4_ * (fVar39 + auVar21._0_4_ * (auVar21._0_4_ + fVar36))) * fVar26;
      fVar9 = fVar9 + (auVar44._4_4_ * (fVar40 + fVar24 * (fVar24 + fVar37)) +
                      auVar42._4_4_ * (fVar40 + auVar20._4_4_ * (auVar20._4_4_ + fVar37)) +
                      auVar22._4_4_ * (fVar40 + auVar21._4_4_ * (auVar21._4_4_ + fVar37))) * fVar28;
      fVar10 = fVar10 + (auVar44._8_4_ * (fVar41 + fVar25 * (fVar25 + fVar38)) +
                        auVar42._8_4_ * (fVar41 + auVar20._8_4_ * (auVar20._8_4_ + fVar38)) +
                        auVar22._8_4_ * (fVar41 + auVar21._8_4_ * (auVar21._8_4_ + fVar38))) *
                        fVar29;
      fVar11 = fVar11 + (auVar44._12_4_ * 0.0 + auVar42._12_4_ * 0.0 + auVar22._12_4_ * 0.0) * 0.0;
      param_2 = param_2 + 3;
    } while (param_2 != puVar1);
  }
  fVar12 = fVar12 * 0.16666667;
  if (1e-06 <= fVar12) {
    fVar19 = 1.0 / fVar12;
    fVar23 = fVar19 * 0.041666668;
    fVar16 = fVar16 * fVar23;
    fVar17 = fVar17 * fVar23;
    fVar18 = fVar18 * fVar23;
    fVar23 = fVar19 * 0.016666668;
    fStack_48 = fVar13 * fVar23 - fVar16 * fVar16;
    fVar13 = fVar14 * fVar23 - fVar17 * fVar17;
    fStack_5c = fVar15 * fVar23 - fVar18 * fVar18;
    fVar19 = fVar19 * 0.008333334;
    fStack_70 = fVar13 + fStack_5c;
    fStack_5c = fStack_5c + fStack_48;
    fStack_6c = -(fVar8 * fVar19) + fVar16 * fVar17;
    uStack_64 = 0;
    uStack_54 = 0;
    fVar8 = -(fVar8 * fVar19);
    fStack_58 = -(fVar9 * fVar19);
    auVar42._4_4_ = fStack_58;
    auVar42._0_4_ = fVar8;
    auVar42._8_4_ = -(fVar10 * fVar19);
    auVar42._12_4_ = -(fVar11 * fVar19);
    auVar31._4_4_ = fStack_58;
    auVar31._0_4_ = fVar8;
    auVar31._8_4_ = -(fVar10 * fVar19);
    auVar31._12_4_ = -(fVar11 * fVar19);
    auVar30 = NEON_ext(auVar42,auVar31,8,1);
    fStack_68 = auVar30._0_4_ + fVar16 * fVar18;
    fStack_58 = fStack_58 + fVar17 * fVar18;
    uStack_50 = CONCAT44(fStack_58,fStack_68);
    fStack_48 = fStack_48 + fVar13;
    uStack_44 = 0;
    fStack_60 = fStack_6c;
    func_0x000109816974(0x3727c5ac,&fStack_70,auStack_a0,0x14);
    fVar10 = fStack_48;
    fVar9 = fStack_5c;
    fVar8 = fStack_70;
    func_0x00010980adc4(auStack_a0,&uStack_b0);
    *param_1 = fVar12;
    param_1[3] = fVar18;
    param_1[1] = fVar16;
    param_1[2] = fVar17;
    *(undefined8 *)(param_1 + 6) = uStack_a8;
    *(undefined8 *)(param_1 + 4) = uStack_b0;
    param_1[8] = fVar8;
    param_1[9] = fVar9;
    param_1[10] = fVar10;
  }
  else {
    uVar2 = CONCAT44(uRam000000011383557c,uRam0000000113835578);
    *(undefined8 *)(param_1 + 2) = uRam0000000113835568;
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar6;
    uVar5 = CONCAT44(uRam0000000113835580,uRam000000011383557c);
    *(undefined8 *)(param_1 + 9) = uRam0000000113835584;
    *(undefined8 *)(param_1 + 7) = uVar5;
  }
  return;
}



/* Entry: 10aa2bec0; end: 10aa2bf0f;  */

long FUN_10aa2bec0(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa2bf10; end: 10aa2c017;  */

long * FUN_10aa2bf10(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *param_1;
  plVar3 = (long *)param_1[1];
  plVar6 = (long *)((long)plVar3 - lVar7 >> 4);
  if (plVar6 < param_2) {
    uVar9 = (long)param_2 - (long)plVar6;
    if ((ulong)(param_1[2] - (long)plVar3 >> 4) < uVar9) {
      if ((ulong)param_2 >> 0x3c != 0) {
        FUN_10aa3ca94();
        lVar8 = param_2[1];
        lVar7 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        plVar3 = (long *)param_1[1];
        param_1[1] = lVar8;
        *param_1 = lVar7;
        if (plVar3 != (long *)0x0) {
          plVar6 = plVar3 + 1;
          do {
            lVar7 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        return param_1;
      }
      uVar5 = param_1[2] - lVar7;
      plVar6 = (long *)((long)uVar5 >> 3);
      if (plVar6 <= param_2) {
        plVar6 = param_2;
      }
      if (0x7fffffffffffffef < uVar5) {
        plVar6 = (long *)0xfffffffffffffff;
      }
      FUN_10aa3caa8();
      lVar7 = (long)plVar6 + ((long)plVar3 - lVar7);
      _bzero(lVar7,uVar9 * 0x10);
      lVar8 = lVar7 - (param_1[1] - *param_1);
      _memcpy(lVar8);
      plVar3 = (long *)*param_1;
      *param_1 = lVar8;
      param_1[1] = lVar7 + uVar9 * 0x10;
      param_1[2] = (long)(plVar6 + (long)param_2 * 2);
      plVar4 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar3;
      }
    }
    else {
      plVar4 = plVar3;
      _bzero(plVar3,uVar9 * 0x10);
      param_1[1] = (long)(plVar3 + uVar9 * 2);
    }
  }
  else {
    plVar4 = param_1;
    if (param_2 < plVar6) {
      plVar6 = (long *)(lVar7 + (long)param_2 * 0x10);
      while (plVar3 != plVar6) {
        plVar3 = plVar3 + -2;
        plVar4 = plVar3;
        func_0x00010aa500f4(plVar3);
      }
      param_1[1] = (long)plVar6;
    }
  }
  return plVar4;
}



/* Entry: 10aa2c018; end: 10aa2c0ef;  */

undefined8 * FUN_10aa2c018(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa2c0f0; end: 10aa2d147;  */

/* WARNING: Removing unreachable block (ram,0x00010aa2d000) */
/* WARNING: Removing unreachable block (ram,0x00010aa2d004) */
/* WARNING: Removing unreachable block (ram,0x00010aa2d00c) */
/* WARNING: Removing unreachable block (ram,0x00010aa2d014) */
/* WARNING: Removing unreachable block (ram,0x00010aa2d018) */
/* WARNING: Removing unreachable block (ram,0x00010aa2d038) */

void FUN_10aa2c0f0(undefined8 *param_1,undefined8 *param_2,long param_3,byte *param_4,byte *param_5,
                  undefined8 param_6,long *param_7,long param_8,undefined8 param_9)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined8 **ppuStack_360;
  long lStack_348;
  float fStack_340;
  undefined8 **ppuStack_330;
  undefined8 uStack_2e0;
  float fStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_280;
  float fStack_278;
  long lStack_260;
  long *plStack_258;
  float fStack_24c;
  undefined2 auStack_248 [4];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined1 auStack_1c4 [16];
  undefined8 uStack_1b4;
  float fStack_1ac;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 **ppuStack_188;
  byte *pbStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  byte abStack_b1 [17];
  
  FUN_10aa43f18(auStack_1e0,param_6,param_7);
  fStack_1e8 = fStack_1ac - fStack_1c8;
  fVar23 = (float)uStack_1b4 - (float)uStack_1d0;
  fVar28 = (float)((ulong)uStack_1b4 >> 0x20) - (float)((ulong)uStack_1d0 >> 0x20);
  uStack_1f0 = CONCAT44(fVar28,fVar23);
  fVar23 = fVar23 * fVar23 + fVar28 * fVar28 + fStack_1e8 * fStack_1e8;
  if ((param_7 == (long *)0x0) && (fVar23 < 9.999999e-09)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  auStack_248[0] = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_218 = 0;
  lStack_220 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  lStack_200 = 0;
  FUN_10aa2edb0(auStack_248,param_5);
  fStack_24c = 1.0;
  if (param_3 == 0) {
    lStack_348 = 0;
    ppuStack_360 = (undefined8 **)0x0;
    iVar16 = -1;
    fStack_364 = 0.0;
    fStack_370 = 0.0;
    fStack_36c = 0.0;
    fStack_368 = 0.0;
  }
  else {
    lStack_348 = 0;
    puVar9 = param_2 + param_3;
    ppuStack_360 = (undefined8 **)0x0;
    fStack_368 = 0.0;
    iVar16 = -1;
    fStack_370 = 0.0;
    fStack_36c = 0.0;
    fStack_364 = 0.0;
    do {
      pbVar19 = (byte *)*param_2;
      *(undefined8 *)(param_8 + 0x60) = *(undefined8 *)(param_8 + 0x58);
      bVar3 = *pbVar19;
      lStack_260 = 0;
      plStack_258 = (long *)0x0;
      plVar8 = *(long **)(pbVar19 + 0x18);
      if (plVar8 == (long *)0x0) {
LAB_10aa2c278:
        lVar13 = 0;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_258 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_10aa2c278;
        lVar13 = *(long *)(pbVar19 + 0x10);
        lStack_260 = lVar13;
      }
      if ((bVar3 & 1) == 0) {
        if (lVar13 != 0) {
          lVar13 = *(long *)(lVar13 + 0x178);
          goto LAB_10aa2c29c;
        }
        iVar12 = 3;
      }
      else {
        lVar13 = 0;
LAB_10aa2c29c:
        if (param_7 == (long *)0x0) {
          uStack_280 = uStack_1d0;
          fStack_278 = fStack_1c8;
          uStack_2e0._0_4_ = (float)uStack_1f0 * fStack_24c + (float)uStack_1d0;
          uStack_2e0._4_4_ =
               (float)((ulong)uStack_1f0 >> 0x20) * fStack_24c + (float)((ulong)uStack_1d0 >> 0x20);
          fStack_2d8 = fStack_24c * fStack_1e8 + fStack_1c8;
          if ((bVar3 & 1) == 0) {
            if ((*(byte *)(lVar13 + 0x2a) >> 6 & 1) != 0) {
              func_0x00010a3e933c(lVar13);
            }
            fVar29 = (float)uStack_280 * *(float *)(lVar13 + 0x108);
            fVar24 = uStack_280._4_4_ * *(float *)(lVar13 + 0x118);
            fVar28 = (float)uStack_2e0 * *(float *)(lVar13 + 0x108);
            fVar21 = uStack_2e0._4_4_ * *(float *)(lVar13 + 0x118);
            fVar40 = (float)*(undefined8 *)(lVar13 + 0x120);
            fVar42 = (float)((ulong)*(undefined8 *)(lVar13 + 0x120) >> 0x20);
            fVar41 = (float)*(undefined8 *)(lVar13 + 0x100);
            fVar38 = (float)((ulong)*(undefined8 *)(lVar13 + 0x100) >> 0x20);
            fVar33 = (float)*(undefined8 *)(lVar13 + 0x110);
            fVar35 = (float)((ulong)*(undefined8 *)(lVar13 + 0x110) >> 0x20);
            fVar39 = (float)*(undefined8 *)(lVar13 + 0x130);
            fVar48 = (float)((ulong)*(undefined8 *)(lVar13 + 0x130) >> 0x20);
            uStack_280 = CONCAT44(fVar38 * (float)uStack_280 + fVar35 * uStack_280._4_4_ +
                                  fVar42 * fStack_278 + fVar48,
                                  fVar41 * (float)uStack_280 + fVar33 * uStack_280._4_4_ +
                                  fVar40 * fStack_278 + fVar39);
            uStack_2e0 = CONCAT44(fVar38 * (float)uStack_2e0 + fVar35 * uStack_2e0._4_4_ +
                                  fVar42 * fStack_2d8 + fVar48,
                                  fVar41 * (float)uStack_2e0 + fVar33 * uStack_2e0._4_4_ +
                                  fVar40 * fStack_2d8 + fVar39);
            fStack_2d8 = fVar28 + fVar21 +
                         fStack_2d8 * *(float *)(lVar13 + 0x128) + *(float *)(lVar13 + 0x138);
            fStack_278 = fVar29 + fVar24 +
                         fStack_278 * *(float *)(lVar13 + 0x128) + *(float *)(lVar13 + 0x138);
          }
          fStack_1a0 = 1.0;
          uStack_198 = 0;
          fStack_194 = 0.0;
          pbStack_180 = (byte *)auStack_248;
          uStack_1a8 = &PTR_FUN_110c3ba20;
          uStack_170 = (long *)0x0;
          uStack_168 = 0xffffffff00000000;
          uStack_190 = -0xffffffbf;
          bVar4 = *param_5;
          if ((bVar4 & 7) != 4) {
            uVar10 = 0xfffffffd;
            if ((bVar4 & 1) == 0) {
              uVar10 = 0xffffffff;
            }
            if ((bVar4 & 2) != 0) {
              uVar10 = uVar10 & 0xfffffffe;
            }
            uVar17 = uVar10 & 0xffffff7f;
            if ((bVar4 & 4) != 0) {
              uVar17 = uVar10;
            }
            uStack_190 = CONCAT44(uVar17,0x41);
          }
          uVar11 = 2;
          if (-1 < (char)bVar4) {
            uVar11 = 3;
          }
          ppuStack_188 = (undefined8 **)CONCAT44(ppuStack_188._4_4_,uVar11);
          uStack_2c8._0_4_ = fStack_278 * 0.01;
          puStack_2d0 = (undefined8 *)
                        CONCAT44((float)((ulong)uStack_280 >> 0x20) * 0.01,(float)uStack_280 * 0.01)
          ;
          uStack_2c8._4_4_ = 0.0;
          uStack_100 = (undefined8 **)
                       CONCAT44((float)((ulong)uStack_2e0 >> 0x20) * 0.01,(float)uStack_2e0 * 0.01);
          uStack_f8 = (byte *)(ulong)(uint)(fStack_2d8 * 0.01);
          puStack_178 = (undefined8 *)(param_8 + 0x58);
          func_0x000109809218(pbVar19 + 0x56d0,&puStack_2d0,&uStack_100,&uStack_1a8);
          if (*(long *)(param_8 + 0x58) != *(long *)(param_8 + 0x60)) {
            uStack_f8 = (byte *)0x0;
            uStack_100 = (undefined8 **)0x3f800000;
            uStack_e8 = 0;
            uStack_f0 = (undefined8 *)0x3f800000;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x3f800000);
            if ((bVar3 & 1) == 0) {
              if ((*(byte *)(lVar13 + 0x2a) & 0x24) != 0) {
                FUN_10a3e8fd4(lVar13);
              }
              fVar21 = *(float *)(lVar13 + 0xc0);
              fVar41 = *(float *)(lVar13 + 0xc4);
              fVar38 = *(float *)(lVar13 + 200);
              fVar48 = *(float *)(lVar13 + 200);
              fVar28 = *(float *)(lVar13 + 0xd0);
              fVar29 = *(float *)(lVar13 + 0xd4);
              fVar22 = *(float *)(lVar13 + 0xd4);
              fVar24 = *(float *)(lVar13 + 0xd8);
              fVar35 = *(float *)(lVar13 + 0xe0);
              fVar33 = *(float *)(lVar13 + 0xe4);
              fVar40 = *(float *)(lVar13 + 0xe8);
              fVar42 = -(fVar33 * fVar24) + fVar40 * fVar22;
              fVar26 = -(fVar33 * fVar48) + fVar40 * fVar41;
              fVar39 = -(fVar22 * fVar48) + fVar24 * fVar41;
              if (1e-06 < ABS(-(fVar28 * fVar26) + fVar42 * fVar21 + fVar39 * fVar35)) {
                fVar43 = -fVar28;
                fVar44 = -(fVar41 * (-(fVar24 * fVar35) + fVar40 * fVar28)) +
                         (-(fVar24 * fVar33) + fVar40 * fVar22) * fVar21 +
                         (fVar35 * -fVar22 + fVar33 * fVar28) * fVar48;
                fVar29 = fVar40 * fVar21;
                fVar36 = fVar35 * fVar41;
                fVar32 = fVar21 * fVar33;
                fVar34 = fVar21 * fVar24;
                fVar25 = fVar41 * fVar43;
                fVar30 = fVar22 * fVar21;
                fVar21 = fVar42 / fVar44;
                fVar41 = (-(fVar28 * fVar40) - -(fVar35 * fVar24)) / fVar44;
                fVar38 = (-(fVar35 * fVar22) + fVar33 * fVar28) / fVar44;
                fVar28 = -fVar26 / fVar44;
                fVar29 = (-(fVar35 * fVar48) + fVar29) / fVar44;
                fVar24 = (-fVar32 - -fVar36) / fVar44;
                fVar35 = fVar39 / fVar44;
                fVar33 = (-fVar34 - fVar48 * fVar43) / fVar44;
                fVar40 = (fVar25 + fVar30) / fVar44;
              }
              uStack_100 = (undefined8 **)CONCAT44(fVar41,fVar21);
              uStack_f8 = (byte *)CONCAT44(fVar28,fVar38);
              uStack_f0 = (undefined8 *)CONCAT44(fVar24,fVar29);
              uStack_e8 = CONCAT44(fVar33,fVar35);
              uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar40);
            }
            fVar28 = (float)uStack_2e0 - (float)uStack_280;
            fVar29 = (float)((ulong)uStack_2e0 >> 0x20) - (float)((ulong)uStack_280 >> 0x20);
            if (0.0001 < SQRT(fVar28 * fVar28 + fVar29 * fVar29 +
                              (fStack_2d8 - fStack_278) * (fStack_2d8 - fStack_278))) {
              puStack_2d0 = &uStack_280;
              uStack_2c8 = &uStack_2e0;
              puStack_2c0 = auStack_1e0;
              uStack_2b8 = &uStack_1f0;
              fStack_2b0 = (float)(CONCAT31(fStack_2b0._1_3_,bVar3) & 0xffffff01);
              uStack_2a8 = &uStack_100;
              abStack_b1[0] = *param_5 >> 7;
              lVar15 = param_8;
              uStack_120 = &uStack_1a8;
              uStack_118 = &puStack_2d0;
              FUN_10aa44e30(param_8,*(undefined4 *)(pbVar19 + 4),pbVar19 + 4);
              pbStack_158 = abStack_b1;
              uStack_150 = &uStack_120;
              plVar2 = *(long **)(param_8 + 0x60);
              uStack_160 = &puStack_2d0;
              for (plVar8 = *(long **)(param_8 + 0x58); plVar8 != plVar2; plVar8 = plVar8 + 1) {
                lVar20 = *plVar8;
                if ((*(byte *)(lVar20 + 300) >> 2 & 1) == 0) {
                  uVar27 = *(undefined8 *)(lVar20 + 0xd0);
                  FUN_10aa44dac();
                  FUN_10aa44858(lVar20,uVar27,0x1137ec0e0,0,lVar15 + 0x18,&uStack_160);
                }
              }
            }
          }
          lVar15 = CONCAT44(fStack_194,uStack_198);
          if (lVar15 != 0) {
            ppuStack_330 = (undefined8 **)0x0;
            fStack_340 = 0.0;
            fVar28 = fStack_1a0;
            fVar29 = (float)uStack_168;
            fVar21 = uStack_170._4_4_;
            fVar41 = (float)uStack_170;
            iVar18 = uStack_168._4_4_;
            goto LAB_10aa2ca5c;
          }
        }
        else {
          FUN_10aa43fa8(fStack_24c,&uStack_280,auStack_1e0,auStack_1c4);
          FUN_10aa440e4(&puStack_2d0,lVar13,auStack_1e0,&uStack_280,param_7);
          fVar29 = uStack_2c8._4_4_;
          fVar28 = (float)uStack_2c8;
          auVar7._8_4_ = (float)uStack_2c8;
          auVar7._0_8_ = puStack_2d0;
          auVar31._8_4_ = (float)uStack_2c8;
          auVar31._0_8_ = puStack_2d0;
          fVar41 = SUB84(puStack_2d0,0);
          fVar38 = (float)((ulong)puStack_2d0 >> 0x20);
          auVar31._12_4_ = uStack_2c8._4_4_;
          auVar7._12_4_ = uStack_2c8._4_4_;
          auVar31 = NEON_ext(auVar31,auVar7,8,1);
          uVar27 = NEON_rev64(CONCAT44(auVar31._4_4_ * (float)uStack_2a8,auVar31._0_4_ * fStack_2ac)
                              ,4);
          fVar21 = fVar41 * uStack_2b8._4_4_ + (float)uVar27 +
                   fVar38 * fStack_2b0 + (float)((ulong)uVar27 >> 0x20);
          if (fVar21 <= 0.7141424) {
            if (fVar21 <= -1.0) {
              uVar10 = 5;
            }
            else {
              _acosf();
              uVar10 = (uint)(fVar21 * 1.2896601);
              if (uVar10 < 2) {
                uVar10 = 1;
              }
            }
          }
          else {
            uVar10 = 1;
          }
          uVar27 = uStack_298;
          uVar17 = 0;
          fVar40 = 1.0 / (float)uVar10;
          fVar21 = 2.0 / (fVar41 * fVar41 + fVar38 * fVar38 + fVar28 * fVar28 + fVar29 * fVar29);
          fVar33 = fVar21 * fVar38;
          fVar24 = fVar21 * fVar28;
          fVar35 = fVar21 * fVar41 * fVar29;
          fVar21 = fVar21 * fVar41 * fVar41;
          uStack_100 = (undefined8 **)
                       CONCAT44(fVar33 * fVar41 - fVar24 * fVar29,
                                1.0 - (fVar33 * fVar38 + fVar24 * fVar28));
          uStack_f8 = (byte *)(ulong)(uint)(fVar24 * fVar41 + fVar33 * fVar29);
          uStack_f0 = (undefined8 *)
                      CONCAT44(1.0 - (fVar21 + fVar24 * fVar28),fVar33 * fVar41 + fVar24 * fVar29);
          uStack_e8 = (ulong)(uint)(fVar24 * fVar38 - fVar35);
          uStack_e0 = CONCAT44(fVar24 * fVar38 + fVar35,fVar24 * fVar41 - fVar33 * fVar29);
          uStack_d8 = (ulong)(uint)(1.0 - (fVar21 + fVar33 * fVar38));
          uStack_d0 = CONCAT44((float)((ulong)puStack_2c0 >> 0x20) * 0.01,
                               SUB84(puStack_2c0,0) * 0.01);
          uStack_c8 = (ulong)(uint)((float)uStack_2b8 * 0.01);
          do {
            FUN_10aa43fa8(fVar40 + fVar40 * (float)uVar17,&uStack_120,&puStack_2d0,
                          (long)&uStack_2b8 + 4);
            fVar28 = 2.0 / ((float)uStack_120 * (float)uStack_120 +
                            uStack_120._4_4_ * uStack_120._4_4_ +
                           (float)uStack_118 * (float)uStack_118 +
                           uStack_118._4_4_ * uStack_118._4_4_);
            fVar21 = fVar28 * uStack_120._4_4_;
            fVar29 = fVar28 * (float)uStack_118;
            fStack_13c = fVar28 * (float)uStack_120 * uStack_118._4_4_;
            fVar28 = fVar28 * (float)uStack_120 * (float)uStack_120;
            fStack_148 = fVar29 * uStack_120._4_4_ - fStack_13c;
            fStack_140 = fVar29 * (float)uStack_120 - fVar21 * uStack_118._4_4_;
            fStack_13c = fVar29 * uStack_120._4_4_ + fStack_13c;
            fStack_138 = 1.0 - (fVar28 + fVar21 * uStack_120._4_4_);
            uStack_160 = (undefined8 **)
                         CONCAT44(fVar21 * (float)uStack_120 - fVar29 * uStack_118._4_4_,
                                  1.0 - (fVar21 * uStack_120._4_4_ + fVar29 * (float)uStack_118));
            pbStack_158 = (byte *)(ulong)(uint)(fVar29 * (float)uStack_120 +
                                               fVar21 * uStack_118._4_4_);
            uStack_150 = (undefined8 *)
                         CONCAT44(1.0 - (fVar28 + fVar29 * (float)uStack_118),
                                  fVar21 * (float)uStack_120 + fVar29 * uStack_118._4_4_);
            uStack_144 = 0;
            uStack_130 = CONCAT44((float)((ulong)uStack_110 >> 0x20) * 0.01,(float)uStack_110 * 0.01
                                 );
            uStack_134 = 0;
            uStack_128 = (ulong)(uint)(fStack_108 * 0.01);
            fStack_1a0 = 1.0;
            uStack_190 = 0;
            ppuStack_188 = (undefined8 **)0x0;
            pbStack_180 = (byte *)((ulong)pbStack_180 & 0xffffffff00000000);
            puStack_178 = (undefined8 *)auStack_248;
            uStack_1a8 = &PTR_FUN_110c3b9c0;
            uStack_170 = (long *)0x0;
            uStack_168 = 0xffffffff00000000;
            uStack_19c = 0x41;
            uStack_198 = 0xffffffff;
            bVar4 = *param_5;
            if ((bVar4 & 7) != 4) {
              uVar14 = 0xfffffffd;
              if ((bVar4 & 1) == 0) {
                uVar14 = 0xffffffff;
              }
              if ((bVar4 & 2) != 0) {
                uVar14 = uVar14 & 0xfffffffe;
              }
              uStack_198 = uVar14 & 0xffffff7f;
              if ((bVar4 & 4) != 0) {
                uStack_198 = uVar14;
              }
            }
            func_0x00010980928c(0,pbVar19 + 0x56d0,uVar27,&uStack_100,&uStack_160,&uStack_1a8);
            if (fStack_1a0 < 1.0) {
              fVar28 = fVar40 * (float)uVar17 + fVar40 * fStack_1a0;
              ppuStack_330 = ppuStack_188;
              fStack_340 = SUB84(pbStack_180,0);
              lVar15 = uStack_190;
              fVar21 = uStack_170._4_4_;
              fVar29 = (float)uStack_168;
              fVar41 = (float)uStack_170;
              iVar18 = uStack_168._4_4_;
              goto LAB_10aa2c654;
            }
            uStack_f8 = pbStack_158;
            uStack_100 = uStack_160;
            uStack_f0 = uStack_150;
            uStack_e8 = CONCAT44(uStack_144,fStack_148);
            uStack_d8 = CONCAT44(uStack_134,fStack_138);
            uStack_e0 = CONCAT44(fStack_13c,fStack_140);
            uStack_c8 = uStack_128;
            uStack_d0 = uStack_130;
            uVar17 = uVar17 + 1;
          } while (uVar10 != uVar17);
          ppuStack_330 = (undefined8 **)0x0;
          fVar28 = 0.0;
          fStack_340 = 0.0;
          lVar15 = 0;
          fVar21 = 0.0;
          fVar29 = 0.0;
          fVar41 = 0.0;
          iVar18 = 0;
LAB_10aa2c654:
          if (plStack_290 != (long *)0x0) {
            (**(code **)(*plStack_290 + 8))();
          }
          if (lVar15 != 0) {
LAB_10aa2ca5c:
            lVar15 = *(long *)(lVar15 + 0x120);
            plVar8 = *(long **)(lVar15 + 0x10);
            if (plVar8 == (long *)0x0) {
              lStack_348 = 0;
            }
            else {
              __ZNSt3__119__shared_weak_count4lockEv();
              if (plVar8 != (long *)0x0) {
                lStack_348 = *(long *)(lVar15 + 8);
                plVar2 = plVar8 + 1;
                do {
                  lVar15 = *plVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *plVar2 = lVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar15 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
                if (lStack_348 != 0) {
                  if ((bVar3 & 1) == 0) {
                    if ((*(byte *)(lVar13 + 0x2a) & 0x24) != 0) {
                      FUN_10a3e8fd4(lVar13);
                    }
                    fVar26 = *(float *)(lVar13 + 200);
                    fVar22 = *(float *)(lVar13 + 0xd8);
                    uVar37 = *(ulong *)(lVar13 + 0xc0);
                    fVar34 = *(float *)(lVar13 + 0xe8);
                    fVar32 = (float)((ulong)*(undefined8 *)(lVar13 + 0xe0) >> 0x20);
                    fVar36 = (float)((ulong)*(undefined8 *)(lVar13 + 0xd0) >> 0x20);
                    fVar46 = -(fVar32 * fVar22) + fVar34 * fVar36;
                    fVar43 = (float)(uVar37 >> 0x20);
                    fVar45 = -(fVar32 * fVar26) + fVar34 * fVar43;
                    fVar44 = (float)*(undefined8 *)(lVar13 + 0xd0);
                    fVar25 = (float)uVar37;
                    fVar47 = -(fVar36 * fVar26) + fVar22 * fVar43;
                    fVar30 = (float)*(undefined8 *)(lVar13 + 0xe0);
                    fVar38 = fVar43;
                    fVar24 = fVar22;
                    fVar33 = fVar34;
                    fVar35 = fVar32;
                    fVar40 = fVar36;
                    fVar42 = fVar44;
                    fVar39 = fVar30;
                    fVar48 = fVar26;
                    if (1e-06 < ABS(-(fVar44 * fVar45) + fVar46 * fVar25 + fVar47 * fVar30)) {
                      fVar48 = -(fVar43 * (-(fVar22 * fVar30) + fVar34 * fVar44)) +
                               (-(fVar22 * fVar32) + fVar34 * fVar36) * fVar25 +
                               (fVar30 * -fVar36 + fVar32 * fVar44) * fVar26;
                      uVar37 = (ulong)(uint)(fVar46 / fVar48);
                      fVar38 = (-(fVar44 * fVar34) - -(fVar30 * fVar22)) / fVar48;
                      fVar24 = (-(fVar25 * fVar32) - -(fVar30 * fVar43)) / fVar48;
                      fVar33 = (fVar43 * -fVar44 + fVar36 * fVar25) / fVar48;
                      fVar35 = (-(fVar25 * fVar22) - fVar26 * -fVar44) / fVar48;
                      fVar40 = (-(fVar30 * fVar26) + fVar34 * fVar25) / fVar48;
                      fVar42 = -fVar45 / fVar48;
                      fVar39 = fVar47 / fVar48;
                      fVar48 = (-(fVar30 * fVar36) + fVar32 * fVar44) / fVar48;
                    }
                    fVar42 = fVar21 * fVar42 + fVar41 * (float)uVar37 + fVar29 * fVar39;
                    fVar38 = fVar21 * fVar40 + fVar41 * fVar38 + fVar29 * fVar35;
                    fVar24 = fVar21 * fVar24 + fVar41 * fVar48 + fVar29 * fVar33;
                    fVar33 = fVar24 * fVar24 + fVar38 * fVar38 + fVar42 * fVar42;
                    if ((1e-06 < fVar33) && (fVar33 = 1.0 / SQRT(fVar33), 0.0 < fVar33)) {
                      fVar41 = fVar42 * fVar33;
                      fVar21 = fVar38 * fVar33;
                      fVar29 = fVar24 * fVar33;
                    }
                    if (param_7 != (long *)0x0) {
                      fVar38 = SUB84(ppuStack_330,0);
                      fVar24 = (float)((ulong)ppuStack_330 >> 0x20);
                      ppuStack_360 = (undefined8 **)
                                     CONCAT44(fVar43 * fVar38 + fVar36 * fVar24 +
                                              fVar32 * fStack_340 +
                                              (float)((ulong)*(undefined8 *)(lVar13 + 0xf0) >> 0x20)
                                              ,fVar25 * fVar38 + fVar44 * fVar24 +
                                               fVar30 * fStack_340 +
                                               (float)*(undefined8 *)(lVar13 + 0xf0));
                      fStack_364 = fVar26 * fVar38 + fVar22 * fVar24 +
                                   fStack_340 * fVar34 + *(float *)(lVar13 + 0xf8);
                    }
                  }
                  else if (param_7 != (long *)0x0) {
                    fStack_364 = fStack_340;
                    ppuStack_360 = ppuStack_330;
                  }
                  fStack_24c = fVar28 * fStack_24c;
                  iVar12 = 0;
                  fStack_370 = fVar41;
                  fStack_36c = fVar21;
                  fStack_368 = fVar29;
                  iVar16 = iVar18;
                  if (fStack_24c <= 0.0001) {
                    iVar12 = 2;
                  }
                  goto LAB_10aa2cbe8;
                }
              }
              lStack_348 = 0;
            }
          }
        }
        iVar12 = 3;
      }
LAB_10aa2cbe8:
      plVar8 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar2 = plStack_258 + 1;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    } while (((iVar12 == 3) || (iVar12 == 0)) && (param_2 = param_2 + 1, param_2 != puVar9));
  }
  fVar28 = fStack_24c;
  if ((*param_4 & 1) == 0) {
    if (fStack_24c < 1.0) {
      if (param_7 == (long *)0x0) {
LAB_10aa2ce48:
        fVar28 = 1.0 - fStack_24c;
        ppuStack_360 = (undefined8 **)
                       CONCAT44((float)((ulong)uStack_1d0 >> 0x20) * fVar28 +
                                (float)((ulong)uStack_1b4 >> 0x20) * fStack_24c,
                                (float)uStack_1d0 * fVar28 + (float)uStack_1b4 * fStack_24c);
        fStack_364 = fVar28 * fStack_1c8 + fStack_24c * fStack_1ac;
      }
LAB_10aa2ce7c:
      pbStack_158 = (byte *)CONCAT44(pbStack_158._4_4_,fStack_364);
      uStack_160 = ppuStack_360;
      if (((iVar16 < 0) || (lStack_348 == 0)) ||
         (*(char *)(*(long *)(lStack_348 + 0x250) + 0x3c) != '\x06')) {
        puStack_2d0 = (undefined8 *)0x0;
        uStack_2c8 = (long *)0x0;
      }
      else {
        FUN_10a407a70(&puStack_2d0,*(long *)(lStack_348 + 0x250),lStack_348,iVar16,&uStack_160);
      }
      uStack_1a8 = (undefined **)CONCAT44(fStack_24c,SQRT(fVar23) * fStack_24c);
      fStack_1a0 = SUB84(uStack_160,0);
      uStack_19c = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_198 = (uint)pbStack_158;
      uStack_190 = CONCAT44(fStack_368,fStack_36c);
      fStack_194 = fStack_370;
      FUN_10aa29550(&uStack_100,lStack_348);
      pbVar19 = uStack_f8;
      pbStack_180 = uStack_f8;
      ppuStack_188 = uStack_100;
      if (uStack_f8 == (byte *)0x0) {
        uStack_170 = uStack_2c8;
        puStack_178 = puStack_2d0;
        puStack_2d0 = (undefined8 *)0x0;
        uStack_2c8._0_4_ = 0.0;
        uStack_2c8._4_4_ = 0.0;
      }
      else {
        pbVar1 = uStack_f8 + 0x10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *(long *)pbVar1 = *(long *)pbVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uStack_170 = uStack_2c8;
        puStack_178 = puStack_2d0;
        puStack_2d0 = (undefined8 *)0x0;
        uStack_2c8._0_4_ = 0.0;
        uStack_2c8._4_4_ = 0.0;
        pbVar1 = uStack_f8 + 8;
        do {
          lVar13 = *(long *)pbVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *(long *)pbVar1 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*(long *)uStack_f8 + 0x10))(uStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pbVar19);
        }
      }
      if ((*param_4 & 1) != 0) {
        FUN_10aa44380(param_9,&uStack_1a8);
      }
      puVar9 = (undefined8 *)0x78;
      __Znwm();
      puVar9[8] = CONCAT44(uStack_19c,fStack_1a0);
      puVar9[7] = uStack_1a8;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110c3ba80;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[3] = &PTR_FUN_110c3a150;
      *(undefined1 *)(puVar9 + 6) = 0;
      puVar9[10] = uStack_190;
      puVar9[9] = CONCAT44(fStack_194,uStack_198);
      puVar9[0xc] = pbStack_180;
      puVar9[0xb] = ppuStack_188;
      puVar9[0xd] = puStack_178;
      puVar9[0xe] = uStack_170;
      *param_1 = puVar9 + 3;
      param_1[1] = puVar9;
      uStack_170 = (long *)0x0;
      puStack_178 = (undefined8 *)0x0;
      pbStack_180 = (byte *)0x0;
      ppuStack_188 = (undefined8 **)0x0;
      plVar8 = (long *)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
      uStack_2c8 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10aa2d074;
    }
  }
  else if (param_7 == (long *)0x0) {
    FUN_10aaf962c(param_9,&UNK_10e482b48,&uStack_1d0,&uStack_1b4,&UNK_10e4eba30,6);
    if (fVar28 < 1.0) goto LAB_10aa2ce48;
  }
  else {
    (**(code **)(*param_7 + 0x28))(param_7,param_9,auStack_1e0,&fStack_24c,fStack_24c < 1.0);
    if (fVar28 < 1.0) goto LAB_10aa2ce7c;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10aa2d074:
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa2d148; end: 10aa2e1f3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10aa2d148(undefined8 *param_1,long param_2,byte *param_3,byte *param_4,undefined8 param_5,
                  long *param_6,undefined8 **param_7,undefined8 param_8)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  undefined **ppuVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 **ppuVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  undefined8 **ppuVar32;
  uint uVar33;
  undefined8 **ppuVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 **ppuVar37;
  undefined8 **ppuVar38;
  byte *pbVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  undefined8 uVar46;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uStack_350;
  float fStack_348;
  undefined **ppuStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  uint uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 **ppuStack_320;
  undefined2 *puStack_318;
  undefined8 **ppuStack_310;
  byte bStack_308;
  float fStack_304;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float fStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  float fStack_180;
  undefined1 auStack_17c [16];
  undefined8 uStack_16c;
  float fStack_164;
  undefined8 uStack_160;
  undefined8 **ppuStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  byte abStack_b1 [17];
  
  FUN_10aa43f18(auStack_198,param_5,param_6);
  fStack_1a0 = fStack_164 - fStack_180;
  fVar43 = (float)uStack_16c - (float)uStack_188;
  fVar47 = (float)((ulong)uStack_16c >> 0x20) - (float)((ulong)uStack_188 >> 0x20);
  uStack_1a8 = CONCAT44(fVar47,fVar43);
  fVar43 = fVar43 * fVar43 + fVar47 * fVar47 + fStack_1a0 * fStack_1a0;
  if ((param_6 != (long *)0x0) || (9.999999e-09 <= fVar43)) {
    puStack_200._0_2_ = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    lStack_1d0 = 0;
    lStack_1d8 = 0;
    lStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    lStack_1b8 = 0;
    FUN_10aa2edb0(&puStack_200,param_4);
    if (param_2 != 0) {
      ppuVar37 = param_7 + 5;
      puVar17 = param_1 + param_2;
      fVar43 = SQRT(fVar43);
      do {
        pbVar39 = (byte *)*param_1;
        param_7[0xc] = param_7[0xb];
        bVar2 = *pbVar39;
        lStack_210 = 0;
        plStack_208 = (long *)0x0;
        plVar14 = *(long **)(pbVar39 + 0x18);
        if (plVar14 == (long *)0x0) {
LAB_10aa2d2b8:
          lVar20 = 0;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          plStack_208 = plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10aa2d2b8;
          lVar20 = *(long *)(pbVar39 + 0x10);
          lStack_210 = lVar20;
        }
        plVar14 = plStack_208;
        bVar8 = bVar2 & 1;
        if ((bVar2 & 1) == 0) {
          if (lVar20 != 0) {
            lVar20 = *(long *)(lVar20 + 0x178);
            uStack_248 = 0;
            uStack_250 = 0x3f800000;
            uStack_238 = 0;
            uStack_240 = 0x3f80000000000000;
            uStack_228 = 0x3f800000;
            uStack_230 = 0;
            uStack_218 = 0x3f80000000000000;
            uStack_220 = 0;
            uStack_278 = 0;
            uStack_280 = 0x3f800000;
            uStack_268 = 0;
            uStack_270 = 0x3f800000;
            fStack_260 = 1.0;
            if ((*(byte *)(lVar20 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar20);
            }
            uVar42 = *(undefined8 *)(lVar20 + 200);
            uVar40 = *(undefined8 *)(lVar20 + 0xc0);
            uVar10 = *(undefined8 *)(lVar20 + 0xd0);
            uVar11 = *(undefined8 *)(lVar20 + 0xd8);
            uVar46 = *(undefined8 *)(lVar20 + 0xe8);
            uVar41 = *(undefined8 *)(lVar20 + 0xe0);
            uStack_220 = *(undefined8 *)(lVar20 + 0xf0);
            uStack_218 = *(undefined8 *)(lVar20 + 0xf8);
            uStack_250._4_4_ = (float)((ulong)uVar40 >> 0x20);
            uStack_248._0_4_ = (float)uVar42;
            uStack_250._0_4_ = (float)uVar40;
            uStack_240._0_4_ = (float)uVar10;
            uStack_240._4_4_ = (float)((ulong)uVar10 >> 0x20);
            uStack_238._0_4_ = (float)uVar11;
            uStack_230._0_4_ = (float)uVar41;
            uStack_230._4_4_ = (float)((ulong)uVar41 >> 0x20);
            uStack_228._0_4_ = (float)uVar46;
            fVar47 = -(uStack_230._4_4_ * (float)uStack_238) + (float)uStack_228 * uStack_240._4_4_;
            fVar56 = -(uStack_230._4_4_ * (float)uStack_248) + (float)uStack_228 * uStack_250._4_4_;
            fVar54 = -(uStack_240._4_4_ * (float)uStack_248) + (float)uStack_238 * uStack_250._4_4_;
            if (1e-06 < ABS(-((float)uStack_240 * fVar56) + fVar47 * (float)uStack_250 +
                            fVar54 * (float)uStack_230)) {
              fVar57 = -(uStack_250._4_4_ *
                        (-((float)uStack_238 * (float)uStack_230) +
                        (float)uStack_228 * (float)uStack_240)) +
                       (-((float)uStack_238 * uStack_230._4_4_) +
                       (float)uStack_228 * uStack_240._4_4_) * (float)uStack_250 +
                       ((float)uStack_230 * -uStack_240._4_4_ + uStack_230._4_4_ * (float)uStack_240
                       ) * (float)uStack_248;
              fVar51 = (float)uStack_230 * (float)uStack_248;
              fVar52 = (float)uStack_228 * (float)uStack_250;
              fVar55 = (float)uStack_230 * uStack_250._4_4_;
              fVar45 = (float)uStack_250 * uStack_230._4_4_;
              fVar50 = (float)uStack_248 * -(float)uStack_240;
              fVar49 = (float)uStack_250 * (float)uStack_238;
              fVar44 = uStack_250._4_4_ * -(float)uStack_240;
              fVar53 = uStack_240._4_4_ * (float)uStack_250;
              uStack_250._0_4_ = fVar47 / fVar57;
              uStack_250._4_4_ =
                   (-((float)uStack_240 * (float)uStack_228) -
                   -((float)uStack_230 * (float)uStack_238)) / fVar57;
              uStack_248._0_4_ =
                   (-((float)uStack_230 * uStack_240._4_4_) + uStack_230._4_4_ * (float)uStack_240)
                   / fVar57;
              uStack_240._0_4_ = -fVar56 / fVar57;
              uStack_240._4_4_ = (-fVar51 + fVar52) / fVar57;
              uStack_238._0_4_ = (-fVar45 - -fVar55) / fVar57;
              uStack_230._0_4_ = fVar54 / fVar57;
              uStack_230._4_4_ = (-fVar49 - fVar50) / fVar57;
              uStack_228._0_4_ = (fVar44 + fVar53) / fVar57;
            }
            uStack_278 = CONCAT44((float)uStack_240,(float)uStack_248);
            uStack_280 = CONCAT44(uStack_250._4_4_,(float)uStack_250);
            uStack_270 = CONCAT44((float)uStack_238,uStack_240._4_4_);
            uStack_268 = CONCAT44(uStack_230._4_4_,(float)uStack_230);
            fStack_260 = (float)uStack_228;
            uStack_250 = uVar40;
            uStack_248 = uVar42;
            uStack_240 = uVar10;
            uStack_238 = uVar11;
            uStack_230 = uVar41;
            if (param_6 == (long *)0x0) {
              uStack_120 = uStack_188;
              fStack_118 = fStack_180;
              uStack_350 = uStack_16c;
              fStack_348 = fStack_164;
              if ((*(byte *)(lVar20 + 0x2a) >> 6 & 1) != 0) {
                uStack_228 = uVar46;
                func_0x00010a3e933c(lVar20);
                uVar46 = uStack_228;
              }
              uStack_228 = uVar46;
              fVar52 = (float)uStack_120 * *(float *)(lVar20 + 0x108);
              fVar45 = uStack_120._4_4_ * *(float *)(lVar20 + 0x118);
              fVar49 = (float)*(undefined8 *)(lVar20 + 0x100);
              fVar51 = (float)((ulong)*(undefined8 *)(lVar20 + 0x100) >> 0x20);
              fVar55 = (float)*(undefined8 *)(lVar20 + 0x110);
              fVar44 = (float)((ulong)*(undefined8 *)(lVar20 + 0x110) >> 0x20);
              fVar47 = (float)*(undefined8 *)(lVar20 + 0x120);
              fVar54 = (float)((ulong)*(undefined8 *)(lVar20 + 0x120) >> 0x20);
              fVar50 = (float)*(undefined8 *)(lVar20 + 0x130);
              fVar57 = (float)((ulong)*(undefined8 *)(lVar20 + 0x130) >> 0x20);
              uStack_120 = CONCAT44(fVar51 * (float)uStack_120 + fVar44 * uStack_120._4_4_ +
                                    fVar54 * fStack_118 + fVar57,
                                    fVar49 * (float)uStack_120 + fVar55 * uStack_120._4_4_ +
                                    fVar47 * fStack_118 + fVar50);
              fVar56 = *(float *)(lVar20 + 0x108) * (float)uStack_350;
              fVar53 = *(float *)(lVar20 + 0x118) * uStack_350._4_4_;
              uStack_350 = CONCAT44(fVar51 * (float)uStack_350 + fVar44 * uStack_350._4_4_ +
                                    fVar57 + fVar54 * fStack_348,
                                    fVar49 * (float)uStack_350 + fVar55 * uStack_350._4_4_ +
                                    fVar50 + fVar47 * fStack_348);
              fStack_348 = fVar56 + fVar53 +
                           *(float *)(lVar20 + 0x138) + *(float *)(lVar20 + 0x128) * fStack_348;
              fStack_118 = fVar52 + fVar45 +
                           fStack_118 * *(float *)(lVar20 + 0x128) + *(float *)(lVar20 + 0x138);
              goto LAB_10aa2d89c;
            }
LAB_10aa2d488:
            uStack_228 = uVar46;
            FUN_10aa440e4(&puStack_2d0,lVar20,auStack_198,auStack_17c,param_6);
            fVar54 = uStack_2c8._4_4_;
            fVar47 = (float)uStack_2c8;
            uStack_338 = 0x3f800000;
            uStack_328 = (undefined8 *)0x0;
            ppuStack_320 = (undefined8 **)0x0;
            puStack_318 = (undefined2 *)((ulong)puStack_318 & 0xffffffff00000000);
            ppuStack_310 = &puStack_200;
            ppuStack_340 = &PTR_DAT_110c3bad0;
            uStack_300 = 0x3f80000000000000;
            puStack_2f0 = &uStack_1a8;
            puStack_2e8 = &uStack_250;
            puStack_2e0 = &uStack_280;
            bVar2 = *param_4;
            uStack_334 = 0x41;
            uStack_330 = 0xffffffff;
            if ((bVar2 & 7) != 4) {
              uVar18 = 0xfffffffd;
              if ((bVar2 & 1) == 0) {
                uVar18 = 0xffffffff;
              }
              if ((bVar2 & 2) != 0) {
                uVar18 = uVar18 & 0xfffffffe;
              }
              uStack_330 = uVar18 & 0xffffff7f;
              if ((bVar2 & 4) != 0) {
                uStack_330 = uVar18;
              }
            }
            auVar9._8_4_ = (float)uStack_2c8;
            auVar9._0_8_ = puStack_2d0;
            auVar48._8_4_ = (float)uStack_2c8;
            auVar48._0_8_ = puStack_2d0;
            fVar52 = SUB84(puStack_2d0,0);
            fVar53 = (float)((ulong)puStack_2d0 >> 0x20);
            auVar48._12_4_ = uStack_2c8._4_4_;
            auVar9._12_4_ = uStack_2c8._4_4_;
            auVar48 = NEON_ext(auVar48,auVar9,8,1);
            uVar46 = NEON_rev64(CONCAT44(auVar48._4_4_ * (float)uStack_2a8,
                                         auVar48._0_4_ * fStack_2ac),4);
            fVar56 = fVar52 * uStack_2b8._4_4_ + (float)uVar46 +
                     fVar53 * fStack_2b0 + (float)((ulong)uVar46 >> 0x20);
            if (fVar56 <= 0.7141424) {
              if (fVar56 <= -1.0) {
                uVar18 = 5;
                bStack_308 = bVar8;
                fStack_304 = fVar43;
                puStack_2f8 = &uStack_188;
                ppuStack_2d8 = ppuVar37;
              }
              else {
                bStack_308 = bVar8;
                fStack_304 = fVar43;
                puStack_2f8 = &uStack_188;
                ppuStack_2d8 = ppuVar37;
                _acosf();
                uVar18 = (uint)(fVar56 * 1.2896601);
                if (uVar18 < 2) {
                  uVar18 = 1;
                }
              }
            }
            else {
              uVar18 = 1;
              bStack_308 = bVar8;
              fStack_304 = fVar43;
              puStack_2f8 = &uStack_188;
              ppuStack_2d8 = ppuVar37;
            }
            uVar46 = uStack_298;
            uVar33 = 0;
            fVar55 = 1.0 / (float)uVar18;
            fVar56 = 2.0 / (fVar52 * fVar52 + fVar53 * fVar53 + fVar47 * fVar47 + fVar54 * fVar54);
            fVar49 = fVar56 * fVar53;
            fVar45 = fVar56 * fVar47;
            fVar51 = fVar56 * fVar52 * fVar54;
            fVar56 = fVar56 * fVar52 * fVar52;
            uStack_100 = (undefined8 **)
                         CONCAT44(fVar49 * fVar52 - fVar45 * fVar54,
                                  1.0 - (fVar49 * fVar53 + fVar45 * fVar47));
            ppuStack_f8 = (undefined8 **)(ulong)(uint)(fVar45 * fVar52 + fVar49 * fVar54);
            uStack_f0 = (undefined8 *)
                        CONCAT44(1.0 - (fVar56 + fVar45 * fVar47),fVar49 * fVar52 + fVar45 * fVar54)
            ;
            uStack_e8 = (ulong)(uint)(fVar45 * fVar53 - fVar51);
            uStack_e0 = CONCAT44(fVar45 * fVar53 + fVar51,fVar45 * fVar52 - fVar49 * fVar54);
            uStack_d8 = (ulong)(uint)(1.0 - (fVar56 + fVar49 * fVar53));
            uStack_d0 = CONCAT44((float)((ulong)puStack_2c0 >> 0x20) * 0.01,
                                 SUB84(puStack_2c0,0) * 0.01);
            uStack_c8 = (ulong)(uint)((float)uStack_2b8 * 0.01);
            do {
              FUN_10aa43fa8(fVar55 + fVar55 * (float)uVar33,&uStack_120,&puStack_2d0,
                            (long)&uStack_2b8 + 4);
              fVar47 = 2.0 / ((float)uStack_120 * (float)uStack_120 +
                              uStack_120._4_4_ * uStack_120._4_4_ +
                             fStack_118 * fStack_118 + fStack_114 * fStack_114);
              fVar56 = fVar47 * uStack_120._4_4_;
              fVar54 = fVar47 * fStack_118;
              fStack_13c = fVar47 * (float)uStack_120 * fStack_114;
              fVar47 = fVar47 * (float)uStack_120 * (float)uStack_120;
              fStack_150 = fVar56 * (float)uStack_120 + fVar54 * fStack_114;
              fStack_14c = 1.0 - (fVar47 + fVar54 * fStack_118);
              fStack_148 = fVar54 * uStack_120._4_4_ - fStack_13c;
              fStack_140 = fVar54 * (float)uStack_120 - fVar56 * fStack_114;
              fStack_13c = fVar54 * uStack_120._4_4_ + fStack_13c;
              fStack_138 = 1.0 - (fVar47 + fVar56 * uStack_120._4_4_);
              uStack_160 = (undefined8 **)
                           CONCAT44(fVar56 * (float)uStack_120 - fVar54 * fStack_114,
                                    1.0 - (fVar56 * uStack_120._4_4_ + fVar54 * fStack_118));
              ppuStack_158 = (undefined8 **)
                             (ulong)(uint)(fVar54 * (float)uStack_120 + fVar56 * fStack_114);
              uStack_144 = 0;
              uStack_130 = CONCAT44((float)((ulong)uStack_110 >> 0x20) * 0.01,
                                    (float)uStack_110 * 0.01);
              uStack_134 = 0;
              uStack_128 = (ulong)(uint)(fStack_108 * 0.01);
              uStack_300 = CONCAT44(fVar55,fVar55 * (float)uVar33);
              func_0x00010980928c(0,pbVar39 + 0x56d0,uVar46,&uStack_100,&uStack_160,&ppuStack_340);
              ppuStack_f8 = ppuStack_158;
              uStack_100 = uStack_160;
              uStack_f0 = (undefined8 *)CONCAT44(fStack_14c,fStack_150);
              uStack_e8 = CONCAT44(uStack_144,fStack_148);
              uStack_d8 = CONCAT44(uStack_134,fStack_138);
              uStack_e0 = CONCAT44(fStack_13c,fStack_140);
              uStack_c8 = uStack_128;
              uStack_d0 = uStack_130;
              uVar33 = uVar33 + 1;
            } while (uVar18 != uVar33);
            if (plStack_290 != (long *)0x0) {
              (**(code **)(*plStack_290 + 8))();
            }
          }
        }
        else {
          uStack_248 = 0;
          uStack_250 = 0x3f800000;
          uStack_238 = 0;
          uStack_240 = 0x3f80000000000000;
          uStack_228 = 0x3f800000;
          uStack_230 = 0;
          uStack_218 = 0x3f80000000000000;
          uStack_220 = 0;
          uStack_278 = 0;
          uStack_280 = 0x3f800000;
          uStack_268 = 0;
          uStack_270 = 0x3f800000;
          fStack_260 = 1.0;
          if (param_6 != (long *)0x0) {
            lVar20 = 0;
            uVar46 = uStack_228;
            goto LAB_10aa2d488;
          }
          uStack_120 = uStack_188;
          fStack_118 = fStack_180;
          uStack_350 = uStack_16c;
          fStack_348 = fStack_164;
LAB_10aa2d89c:
          uStack_338 = 0x3f800000;
          uStack_330 = 0;
          uStack_32c = 0;
          puStack_318 = (undefined2 *)&puStack_200;
          ppuStack_340 = &PTR_DAT_110c3bb18;
          uStack_300 = 0x3f80000000000000;
          puStack_2f0 = &uStack_1a8;
          puStack_2e8 = &uStack_250;
          puStack_2e0 = &uStack_280;
          bVar3 = *param_4;
          uStack_328 = (undefined8 *)0xffffffff00000041;
          if ((bVar3 & 7) != 4) {
            uVar18 = 0xfffffffd;
            if ((bVar3 & 1) == 0) {
              uVar18 = 0xffffffff;
            }
            if ((bVar3 & 2) != 0) {
              uVar18 = uVar18 & 0xfffffffe;
            }
            uVar33 = uVar18 & 0xffffff7f;
            if ((bVar3 & 4) != 0) {
              uVar33 = uVar18;
            }
            uStack_328 = (undefined8 *)CONCAT44(uVar33,0x41);
          }
          uVar19 = 2;
          if (-1 < (char)bVar3) {
            uVar19 = 3;
          }
          ppuStack_320 = (undefined8 **)CONCAT44(ppuStack_320._4_4_,uVar19);
          uStack_2c8._0_4_ = fStack_118 * 0.01;
          puStack_2d0 = (undefined8 *)
                        CONCAT44((float)((ulong)uStack_120 >> 0x20) * 0.01,(float)uStack_120 * 0.01)
          ;
          uStack_2c8._4_4_ = 0.0;
          uStack_100 = (undefined8 **)
                       CONCAT44((float)((ulong)uStack_350 >> 0x20) * 0.01,(float)uStack_350 * 0.01);
          ppuStack_f8 = (undefined8 **)(ulong)(uint)(fStack_348 * 0.01);
          ppuStack_310 = param_7 + 0xb;
          bStack_308 = bVar8;
          fStack_304 = fVar43;
          puStack_2f8 = &uStack_188;
          ppuStack_2d8 = ppuVar37;
          func_0x000109809218(pbVar39 + 0x56d0,&puStack_2d0,&uStack_100,&ppuStack_340);
          uStack_2c8 = (undefined8 *)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          if ((param_7[0xb] != param_7[0xc]) &&
             (fVar47 = (float)uStack_350 - (float)uStack_120,
             fVar54 = (float)((ulong)uStack_350 >> 0x20) - (float)((ulong)uStack_120 >> 0x20),
             uStack_2c8 = (undefined8 *)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
             0.0001 < SQRT(fVar47 * fVar47 + fVar54 * fVar54 +
                           (fStack_348 - fStack_118) * (fStack_348 - fStack_118)))) {
            puStack_2d0 = &uStack_120;
            uStack_2c8 = &uStack_350;
            puStack_2c0 = auStack_198;
            uStack_2b8 = &uStack_1a8;
            fStack_2b0 = (float)(CONCAT31(fStack_2b0._1_3_,bVar2) & 0xffffff01);
            uStack_2a8 = &uStack_280;
            abStack_b1[0] = *param_4 >> 7;
            ppuVar15 = param_7;
            uStack_160 = param_7;
            ppuStack_158 = &puStack_2d0;
            FUN_10aa44e30(param_7,*(undefined4 *)(pbVar39 + 4),pbVar39 + 4);
            ppuStack_f8 = (undefined8 **)abStack_b1;
            uStack_f0 = &uStack_160;
            plVar23 = param_7[0xc];
            uStack_100 = &puStack_2d0;
            for (plVar24 = param_7[0xb]; plVar24 != plVar23; plVar24 = plVar24 + 1) {
              lVar20 = *plVar24;
              if ((*(byte *)(lVar20 + 300) >> 2 & 1) == 0) {
                uVar46 = *(undefined8 *)(lVar20 + 0xd0);
                FUN_10aa44dac();
                FUN_10aa48b8c(lVar20,uVar46,0x1137ec0e0,0,ppuVar15 + 3,&uStack_100);
              }
            }
          }
        }
        if (plVar14 != (long *)0x0) {
          plVar24 = plVar14 + 1;
          do {
            lVar20 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 != puVar17);
    }
    puVar12 = PTR___ZSt7nothrow_1103469d8;
    puVar17 = param_7[5];
    puVar25 = param_7[6];
    if (puVar17 != puVar25) {
      uVar35 = ((long)puVar25 - (long)puVar17 >> 3) * -0x71c71c71c71c71c7;
      uVar36 = uVar35;
      if ((long)puVar25 - (long)puVar17 < 1) {
        lVar20 = 0;
        uVar36 = 0;
      }
      else {
        do {
          lVar20 = uVar36 * 0x48;
          __ZnwmRKSt9nothrow_t(lVar20,puVar12);
          if (lVar20 != 0) goto LAB_10aa2db74;
          uVar21 = uVar36 >> 1;
          bVar6 = 1 < uVar36;
          uVar36 = uVar21;
        } while (bVar6);
        lVar20 = 0;
      }
LAB_10aa2db74:
      FUN_10aa492ec(puVar17,puVar25,uVar35,lVar20,uVar36);
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
      ppuVar37 = param_7 + 8;
      puVar17 = *ppuVar37;
      puVar25 = param_7[9];
      while (puVar25 != puVar17) {
        puVar25 = puVar25 + -2;
        func_0x00010aa4dd5c();
      }
      param_7[9] = puVar17;
      FUN_10aa480cc(ppuVar37,((long)param_7[6] - (long)param_7[5] >> 3) * -0x71c71c71c71c71c7);
      puVar17 = (undefined8 *)
                (long)((float)(ulong)(((long)param_7[6] - (long)param_7[5] >> 3) *
                                     -0x71c71c71c71c71c7) / *(float *)(param_7 + 0x12));
      FUN_10aa4a6e4(param_7 + 0xe);
      puVar30 = param_7[5];
      puVar1 = param_7[6];
      if (puVar30 != puVar1) {
        ppuVar15 = param_7 + 0x10;
        ppuVar32 = param_7;
        do {
          uVar36 = *puVar30;
          *(uint *)(uVar36 + 0x18c) = *(uint *)(uVar36 + 0x18c) & 0xfffffffb;
          ppuVar22 = (undefined **)puVar30[7];
          if (ppuVar22 == (undefined **)0x0) {
LAB_10aa2dea0:
            puVar16 = (undefined8 *)0x78;
            __Znwm();
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = &PTR_FUN_110c3ba80;
            puVar31 = puVar16 + 3;
            *puVar31 = &PTR_FUN_110c3a150;
            puVar16[4] = 0;
            puVar16[5] = 0;
            *(undefined1 *)(puVar16 + 6) = 0;
            uVar21 = puVar30[2];
            uVar35 = puVar30[1];
            uVar36 = puVar30[3];
            puVar16[10] = puVar30[4];
            puVar16[9] = uVar36;
            puVar16[8] = uVar21;
            puVar16[7] = uVar35;
            uVar36 = puVar30[5];
            puVar16[0xc] = puVar30[6];
            puVar16[0xb] = uVar36;
            puVar30[5] = 0;
            puVar30[6] = 0;
            uVar36 = puVar30[7];
            puVar16[0xe] = puVar30[8];
            puVar16[0xd] = uVar36;
            puVar30[7] = 0;
            puVar30[8] = 0;
            uStack_2c8._0_4_ = SUB84(puVar16,0);
            uStack_2c8._4_4_ = (float)((ulong)puVar16 >> 0x20);
            puVar25 = param_7[9];
            puStack_2d0 = puVar31;
            if (puVar25 < param_7[10]) {
              *puVar25 = puVar31;
              puVar25[1] = puVar16;
              puVar25 = puVar25 + 2;
            }
            else {
              lVar20 = (long)puVar25 - (long)*ppuVar37;
              uVar36 = (lVar20 >> 4) + 1;
              if (uVar36 >> 0x3c != 0) {
                FUN_10aa4a650();
                goto LAB_10aa2e134;
              }
              uVar21 = (long)param_7[10] - (long)*ppuVar37;
              uVar35 = (long)uVar21 >> 3;
              if (uVar35 <= uVar36) {
                uVar35 = uVar36;
              }
              if (0x7fffffffffffffef < uVar21) {
                uVar35 = 0xfffffffffffffff;
              }
              ppuStack_320 = ppuVar37;
              FUN_10aa4a664();
              puVar29 = (undefined8 *)(uVar35 + lVar20);
              ppuVar32 = (undefined8 **)(uVar35 + (long)puVar17 * 0x10);
              *puVar29 = puVar31;
              puVar29[1] = puVar16;
              puVar25 = puVar29 + 2;
              puVar17 = param_7[8];
              puVar29 = (undefined8 *)((long)puVar29 - ((long)param_7[9] - (long)puVar17));
              _memcpy(puVar29);
              ppuStack_340 = (undefined **)param_7[8];
              param_7[8] = puVar29;
              param_7[9] = puVar25;
              uStack_328 = param_7[10];
              param_7[10] = ppuVar32;
              uStack_330 = (uint)ppuStack_340;
              uStack_32c = (undefined4)((ulong)ppuStack_340 >> 0x20);
              uStack_338 = uStack_330;
              uStack_334 = uStack_32c;
              func_0x00010aa4a698(&ppuStack_340);
            }
            param_7[9] = puVar25;
          }
          else {
            plVar14 = (long *)puVar30[8];
            uStack_338 = (uint)plVar14;
            uStack_334 = (undefined4)((ulong)plVar14 >> 0x20);
            if (plVar14 != (long *)0x0) {
              plVar24 = plVar14 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar6) {
                  *plVar24 = *plVar24 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              uVar36 = *puVar30;
            }
            iVar4 = *(int *)(ppuVar22 + 5);
            uVar35 = ((ulong)(uint)((int)uVar36 << 3) + 8 ^ uVar36 >> 0x20) * -0x622015f714c7d297;
            uVar35 = (uVar36 >> 0x20 ^ uVar35 >> 0x2f ^ uVar35) * -0x622015f714c7d297;
            uVar35 = uVar35 ^ uVar35 >> 0x2f;
            uVar21 = uVar35 * -0x622015f714c7d297;
            ppuVar34 = (undefined8 **)
                       ((long)iVar4 + uVar35 * 0x77fa823ace0b5a40 + (uVar21 >> 2) + 0x9e3779b9 ^
                       uVar21);
            ppuVar38 = (undefined8 **)param_7[0xf];
            ppuStack_340 = ppuVar22;
            if (ppuVar38 != (undefined8 **)0x0) {
              uVar35 = (long)ppuVar38 - 1;
              if (((ulong)ppuVar38 & uVar35) == 0) {
                ppuVar32 = (undefined8 **)((ulong)ppuVar34 & uVar35);
              }
              else {
                ppuVar32 = ppuVar34;
                if (ppuVar38 <= ppuVar34) {
                  uVar21 = 0;
                  if (ppuVar38 != (undefined8 **)0x0) {
                    uVar21 = (ulong)ppuVar34 / (ulong)ppuVar38;
                  }
                  ppuVar32 = (undefined8 **)((long)ppuVar34 - uVar21 * (long)ppuVar38);
                }
              }
              plVar24 = (long *)param_7[0xe][(long)ppuVar32];
              if (plVar24 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar24 = (long *)*plVar24;
                    if (plVar24 == (long *)0x0) goto LAB_10aa2dd5c;
                    ppuVar26 = (undefined8 **)plVar24[1];
                    if (ppuVar26 != ppuVar34) break;
                    if (plVar24[2] == uVar36 && *(int *)(plVar24 + 3) == iVar4) {
                      bVar6 = false;
                      goto LAB_10aa2de7c;
                    }
                  }
                  if (((ulong)ppuVar38 & uVar35) == 0) {
                    ppuVar26 = (undefined8 **)((ulong)ppuVar26 & uVar35);
                  }
                  else if (ppuVar38 <= ppuVar26) {
                    uVar21 = 0;
                    if (ppuVar38 != (undefined8 **)0x0) {
                      uVar21 = (ulong)ppuVar26 / (ulong)ppuVar38;
                    }
                    ppuVar26 = (undefined8 **)((long)ppuVar26 - uVar21 * (long)ppuVar38);
                  }
                } while (ppuVar26 == ppuVar32);
              }
            }
LAB_10aa2dd5c:
            plVar24 = (long *)0x20;
            __Znwm();
            *plVar24 = 0;
            plVar24[1] = (long)ppuVar34;
            plVar24[2] = uVar36;
            *(int *)(plVar24 + 3) = iVar4;
            if ((ppuVar38 == (undefined8 **)0x0) ||
               (*(float *)(param_7 + 0x12) * (float)ppuVar38 < (float)((long)param_7[0x11] + 1))) {
              uVar36 = 1;
              if ((undefined8 **)0x2 < ppuVar38) {
                uVar36 = (ulong)(((ulong)ppuVar38 & (long)ppuVar38 - 1U) != 0);
              }
              puVar17 = (undefined8 *)(uVar36 | (long)ppuVar38 << 1);
              puVar25 = (undefined8 *)
                        (long)((float)((long)param_7[0x11] + 1) / *(float *)(param_7 + 0x12));
              if (puVar17 <= puVar25) {
                puVar17 = puVar25;
              }
              FUN_10aa4a6e4(param_7 + 0xe);
              ppuVar38 = (undefined8 **)param_7[0xf];
              if (((ulong)ppuVar38 & (long)ppuVar38 - 1U) == 0) {
                ppuVar32 = (undefined8 **)((long)ppuVar38 - 1U & (ulong)ppuVar34);
              }
              else {
                ppuVar32 = ppuVar34;
                if (ppuVar38 <= ppuVar34) {
                  uVar36 = 0;
                  if (ppuVar38 != (undefined8 **)0x0) {
                    uVar36 = (ulong)ppuVar34 / (ulong)ppuVar38;
                  }
                  ppuVar32 = (undefined8 **)((long)ppuVar34 - uVar36 * (long)ppuVar38);
                }
              }
            }
            puVar25 = param_7[0xe];
            plVar23 = (long *)puVar25[(long)ppuVar32];
            if (plVar23 == (long *)0x0) {
              *plVar24 = (long)*ppuVar15;
              *ppuVar15 = plVar24;
              puVar25[(long)ppuVar32] = ppuVar15;
              if (*plVar24 != 0) {
                ppuVar34 = *(undefined8 ***)(*plVar24 + 8);
                if (((ulong)ppuVar38 & (long)ppuVar38 - 1U) == 0) {
                  ppuVar34 = (undefined8 **)((ulong)ppuVar34 & (long)ppuVar38 - 1U);
                }
                else if (ppuVar38 <= ppuVar34) {
                  uVar36 = 0;
                  if (ppuVar38 != (undefined8 **)0x0) {
                    uVar36 = (ulong)ppuVar34 / (ulong)ppuVar38;
                  }
                  ppuVar34 = (undefined8 **)((long)ppuVar34 - uVar36 * (long)ppuVar38);
                }
                plVar23 = param_7[0xe] + (long)ppuVar34;
                goto LAB_10aa2de68;
              }
            }
            else {
              *plVar24 = *plVar23;
LAB_10aa2de68:
              *plVar23 = (long)plVar24;
            }
            param_7[0x11] = (undefined8 *)((long)param_7[0x11] + 1);
            bVar6 = true;
LAB_10aa2de7c:
            if (plVar14 != (long *)0x0) {
              plVar24 = plVar14 + 1;
              do {
                lVar20 = *plVar24;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar7) {
                  *plVar24 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
              }
            }
            if (bVar6) goto LAB_10aa2dea0;
          }
          puVar30 = puVar30 + 9;
        } while (puVar30 != puVar1);
      }
      if ((*param_3 & 1) != 0) {
        plVar24 = param_7[9];
        for (plVar14 = param_7[8]; plVar14 != plVar24; plVar14 = plVar14 + 2) {
          FUN_10aa44380(param_8,*plVar14 + 0x20);
        }
      }
    }
    if ((*param_3 & 1) != 0) {
      if (param_6 == (long *)0x0) {
        FUN_10aaf962c(param_8,&UNK_10e482b48,&uStack_188,&uStack_16c,&UNK_10e4eba30,6);
      }
      else {
        puVar17 = param_7[8];
        puVar25 = param_7[9];
        lVar20 = (long)puVar25 - (long)puVar17 >> 4;
        FUN_10a132380(&ppuStack_340,lVar20);
        if (puVar25 != puVar17) {
          lVar27 = (long)param_7[9] - (long)param_7[8] >> 4;
          lVar28 = CONCAT44(uStack_334,uStack_338) - (long)ppuStack_340 >> 2;
          plVar14 = param_7[8];
          ppuVar22 = ppuStack_340;
          do {
            if ((lVar27 == 0) || (lVar28 == 0)) {
LAB_10aa2e134:
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10aa2e138);
              (*pcVar13)();
            }
            *(undefined4 *)ppuVar22 = *(undefined4 *)(*plVar14 + 0x24);
            lVar28 = lVar28 + -1;
            lVar27 = lVar27 + -1;
            lVar20 = lVar20 + -1;
            plVar14 = plVar14 + 2;
            ppuVar22 = (undefined **)((long)ppuVar22 + 4);
          } while (lVar20 != 0);
        }
        (**(code **)(*param_6 + 0x28))
                  (param_6,param_8,auStack_198,ppuStack_340,
                   CONCAT44(uStack_334,uStack_338) - (long)ppuStack_340 >> 2);
        if (ppuStack_340 != (undefined **)0x0) {
          uStack_338 = (uint)ppuStack_340;
          uStack_334 = (undefined4)((ulong)ppuStack_340 >> 0x20);
          __ZdlPv();
        }
      }
    }
    if (lStack_1c0 != 0) {
      lStack_1b8 = lStack_1c0;
      __ZdlPv();
    }
    if (lStack_1d8 != 0) {
      lStack_1d0 = lStack_1d8;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10aa2e1f4; end: 10aa2e2ab;  */

void FUN_10aa2e1f4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((*(byte *)(param_2 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(param_2);
  }
  func_0x000109519fd0(auStack_80,param_3,param_2 + 0xc0);
  uStack_a0 = NEON_fmov(0x3f800000,4);
  uStack_98 = 0x3f800000;
  uStack_8c = 0x3f80000000000000;
  uStack_94 = 0;
  FUN_10a008544(&uStack_a0,auStack_80);
  *param_1 = uStack_a0;
  *(undefined4 *)(param_1 + 1) = uStack_98;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_8c;
  *(undefined8 *)((long)param_1 + 0xc) = uStack_94;
  *(undefined8 *)((long)param_1 + 0x1c) = uStack_50;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_48;
  return;
}



/* Entry: 10aa2e2ac; end: 10aa2e337;  */

void FUN_10aa2e2ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (param_6 != 0) {
    if ((*(byte *)((long)param_5 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(param_5);
    }
    func_0x000109519fd0(auStack_80,param_6,param_5 + 0x18);
    uStack_a0 = NEON_fmov(0x3f800000,4);
    uStack_98 = 0x3f800000;
    uStack_8c = 0x3f80000000000000;
    uStack_94 = 0;
    FUN_10a008544(&uStack_a0,auStack_80);
    *param_4 = uStack_a0;
    *(undefined4 *)(param_4 + 1) = uStack_98;
    *(undefined8 *)((long)param_4 + 0x14) = uStack_8c;
    *(undefined8 *)((long)param_4 + 0xc) = uStack_94;
    *(undefined8 *)((long)param_4 + 0x1c) = uStack_50;
    *(undefined4 *)((long)param_4 + 0x24) = uStack_48;
    return;
  }
  FUN_10a2cd058(param_5);
  FUN_10a2f095c();
  *param_4 = *param_5;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_5 + 1);
  uVar1 = *(undefined8 *)((long)param_5 + 0xc);
  *(undefined8 *)((long)param_4 + 0x14) = *(undefined8 *)((long)param_5 + 0x14);
  *(undefined8 *)((long)param_4 + 0xc) = uVar1;
  *(undefined4 *)((long)param_4 + 0x1c) = param_1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  return;
}



/* Entry: 10aa2e338; end: 10aa2e3c3;  */

void FUN_10aa2e338(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  plVar3 = *(long **)(param_2 + 0x250);
  uVar2 = (ulong)((*(byte *)(param_2 + 0x2a0) & 2) == 0);
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  uStack_40 = *param_3;
  uStack_38 = *(undefined4 *)(param_3 + 1);
  lStack_48 = param_2;
  FUN_10aa199c8(uVar1,uVar2,0x167 < *(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18));
  uStack_2c = (undefined4)uVar2;
  uStack_28 = (undefined1)(uVar2 >> 0x20);
  uStack_34 = uVar1;
  (**(code **)(*plVar3 + 0x80))(param_1,plVar3,&lStack_48);
  return;
}



/* Entry: 10aa2e3c4; end: 10aa2e7ab;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10aa2e3c4(long *******param_1,long *******param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  uint *puVar9;
  ulong uVar10;
  long ******pppppplVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long ******pppppplVar16;
  int iVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long lVar21;
  long ******pppppplVar22;
  long *******unaff_x24;
  long *****ppppplVar23;
  ulong unaff_x26;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long ******pppppplStack_c0;
  long *******ppppppplStack_b8;
  ulong uStack_b0;
  long *****ppppplStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  if ((param_2[0x4a] == (long ******)0x0) || (*(char *)((long)param_2[0x4a] + 0x3c) == '\0')) {
    ppppppplVar18 = (long *******)0xffffffff;
  }
  else if (*(int *)(param_1 + 2) == *(int *)(param_2 + 0x74)) {
    ppppppplVar18 = (long *******)(ulong)*(uint *)(param_2 + 0x76);
  }
  else {
    ppppplVar23 = param_2[0x2d][0x31];
    ppppppplVar6 = param_1;
    ppppppplVar18 = param_2;
    if (ppppplVar23 != (long *****)0x0) {
      bVar3 = *(byte *)(param_2 + 0x54);
      unaff_x26 = (ulong)bVar3;
      do {
        ppppppplVar5 = ppppppplVar6;
        for (unaff_x24 = (long *******)ppppplVar23[0x2b];
            unaff_x24 != (long *******)(ppppplVar23 + 0x2a); unaff_x24 = (long *******)unaff_x24[1])
        {
          ppppppplVar5 = (long *******)0x0;
          if (unaff_x24[2] != (long ******)0x0) {
            ppppppplVar5 = (long *******)(unaff_x24[2] + 0x16);
            ppppppplVar18 = (long *******)0x1663061754011abf;
            (*(code *)(*ppppppplVar5)[3])();
            if (ppppppplVar5 != (long *******)0x0) {
              if (((ulong)ppppppplVar5[0x30] & 0x17) == 0) {
                if ((long *******)param_1[1] == (long *******)0x0) goto LAB_10aa2e6c8;
                ppppppplVar19 = (long *******)0x0;
                pppppplVar11 = *param_1 + 1;
                goto LAB_10aa2e6b0;
              }
              break;
            }
          }
        }
        ppppppplVar6 = ppppppplVar5;
        if ((bVar3 >> 5 & 1) == 0) {
          for (ppppppplVar19 = (long *******)ppppplVar23[0x2b]; ppppppplVar6 = ppppppplVar5,
              ppppppplVar19 != (long *******)(ppppplVar23 + 0x2a);
              ppppppplVar19 = (long *******)ppppppplVar19[1]) {
            ppppppplVar5 = (long *******)0x0;
            if (ppppppplVar19[2] != (long ******)0x0) {
              ppppppplVar5 = (long *******)(ppppppplVar19[2] + 0x16);
              ppppppplVar18 = (long *******)0xeb76020423cc3559;
              (*(code *)(*ppppppplVar5)[3])();
              if (ppppppplVar5 != (long *******)0x0) {
                ppppppplVar6 = ppppppplVar5;
                unaff_x24 = ppppppplVar5;
                if (((((ulong)ppppppplVar5[0x30] & 0x17) != 0) ||
                    (ppppppplVar5[0x4a] == (long ******)0x0)) ||
                   (*(char *)((long)ppppppplVar5[0x4a] + 0x3c) == '\0')) break;
                if ((*(byte *)(ppppppplVar5 + 0x54) >> 4 & 1) == 0) {
                  ppppppplVar18 = (long *******)0x3f7860c77ce5b69d;
                  (*(code *)(*ppppppplVar5)[0x1f])();
                  if (((ppppppplVar6 == (long *******)0x0) || (((ulong)ppppppplVar6[0x77] & 1) != 0)
                      ) || ((*(byte *)((long)ppppppplVar6[0x4a] + 0x3d) & 1) != 0)) break;
                }
                ppppppplVar6 = param_1;
                FUN_10aa2e3c4();
                pppppplVar22 = param_1[3];
                pppppplVar11 = param_1[4];
                unaff_x24 = (long *******)((long)pppppplVar11 - (long)pppppplVar22);
                ppppppplVar18 = (long *******)((long)unaff_x24 >> 5);
                param_2[0x74] = (long ******)((ulong)*(uint *)(param_1 + 2) | 0xffffffff00000000);
                iVar17 = (int)ppppppplVar18;
                *(int *)(param_2 + 0x76) = iVar17;
                if (pppppplVar11 < param_1[5]) {
                  *pppppplVar11 = (long *****)param_2;
                  *(undefined4 *)(pppppplVar11 + 1) = 0xffffffff;
                  *(int *)((long)pppppplVar11 + 0xc) = (int)ppppppplVar6;
                  pppppplVar11[3] = (long *****)0xffffffffffffffff;
                  pppppplVar11[2] = (long *****)0xffffffff00000000;
                  pppppplVar11 = pppppplVar11 + 4;
                }
                else {
                  uVar15 = (long)ppppppplVar18 + 1;
                  ppppppplVar19 = ppppppplVar6;
                  if (uVar15 >> 0x3b != 0) goto LAB_10aa2e7a8;
                  uVar10 = (long)param_1[5] - (long)pppppplVar22;
                  uVar13 = (long)uVar10 >> 4;
                  if (uVar13 <= uVar15) {
                    uVar13 = uVar15;
                  }
                  if (0x7fffffffffffffdf < uVar10) {
                    uVar13 = 0x7ffffffffffffff;
                  }
                  FUN_10aa4a924();
                  pppppplVar7 = param_1[3];
                  pppppplVar22 = param_1[4];
                  puVar1 = (undefined8 *)(uVar13 + (long)unaff_x24);
                  *puVar1 = param_2;
                  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
                  *(int *)((long)puVar1 + 0xc) = (int)ppppppplVar6;
                  puVar1[3] = 0xffffffffffffffff;
                  puVar1[2] = 0xffffffff00000000;
                  pppppplVar11 = (long ******)(puVar1 + 4);
                  pppppplVar22 = (long ******)
                                 ((long)puVar1 - ((long)pppppplVar22 - (long)pppppplVar7));
                  _memcpy(pppppplVar22,pppppplVar7);
                  pppppplVar7 = param_1[3];
                  param_1[3] = pppppplVar22;
                  param_1[4] = pppppplVar11;
                  param_1[5] = (long ******)(uVar13 + (long)ppppppplVar5 * 0x20);
                  if (pppppplVar7 != (long ******)0x0) {
                    __ZdlPv();
                    pppppplVar22 = param_1[3];
                  }
                }
                param_1[4] = pppppplVar11;
                uVar15 = (long)pppppplVar11 - (long)pppppplVar22 >> 5;
                if (uVar15 <= ((ulong)ppppppplVar6 & 0xffffffff)) goto LAB_10aa2e6c8;
                uVar13 = (ulong)ppppppplVar6 & 0xffffffff;
                piVar14 = (int *)((long)pppppplVar22 + uVar13 * 0x20 + 0x14);
                if (*piVar14 != -1) {
                  if (uVar15 <= *(uint *)(pppppplVar22 + uVar13 * 4 + 3)) goto LAB_10aa2e6c8;
                  piVar14 = (int *)((long)pppppplVar22 +
                                   (ulong)*(uint *)(pppppplVar22 + uVar13 * 4 + 3) * 0x20 + 0x1c);
                }
                *piVar14 = iVar17;
                *(int *)(pppppplVar22 + uVar13 * 4 + 3) = iVar17;
                *(int *)(pppppplVar22 + uVar13 * 4 + 2) =
                     *(int *)(pppppplVar22 + uVar13 * 4 + 2) + 1;
                return ppppppplVar18;
              }
            }
          }
        }
        ppppplVar23 = (long *****)ppppplVar23[0x31];
      } while (ppppplVar23 != (long *****)0x0);
    }
    ppppppplVar19 = (long *******)0x0;
LAB_10aa2e588:
    ppppppplVar5 = ppppppplVar18;
    if (param_1[1] <= (long ******)((ulong)ppppppplVar19 & 0xffffffff)) goto LAB_10aa2e6c8;
    pppppplVar7 = param_1[3];
    pppppplVar11 = param_1[4];
    pppppplVar22 = (long ******)((long)pppppplVar11 - (long)pppppplVar7);
    ppppppplVar18 = (long *******)((long)pppppplVar22 >> 5);
    param_2[0x74] =
         (long ******)
         CONCAT44(*(undefined4 *)(*param_1 + ((ulong)ppppppplVar19 & 0xffffffff) * 8),
                  *(undefined4 *)(param_1 + 2));
    *(int *)(param_2 + 0x76) = (int)ppppppplVar18;
    if (pppppplVar11 < param_1[5]) {
      *pppppplVar11 = (long *****)param_2;
      *(int *)(pppppplVar11 + 1) = (int)ppppppplVar19;
      *(undefined8 *)((long)pppppplVar11 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((long)pppppplVar11 + 0xc) = 0xffffffff;
      *(undefined4 *)((long)pppppplVar11 + 0x1c) = 0xffffffff;
      pppppplVar11 = pppppplVar11 + 4;
    }
    else {
      uVar15 = (long)ppppppplVar18 + 1;
      if (uVar15 >> 0x3b != 0) {
LAB_10aa2e7a8:
        FUN_10aa4a910();
        pcStack_68 = FUN_10aa2e7ac;
        *ppppppplVar5 = (long ******)*param_3;
        uVar2 = *(uint *)(param_3 + 2);
        uVar13 = (ulong)uVar2;
        pppppplVar11 = ppppppplVar5[1];
        ppppppplVar20 = (long *******)ppppppplVar5[2];
        uVar15 = (long)ppppppplVar20 - (long)pppppplVar11 >> 5;
        ppppppplVar8 = ppppppplVar6;
        uStack_b0 = unaff_x26;
        ppppplStack_a8 = ppppplVar23;
        ppppppplStack_a0 = unaff_x24;
        pppppplStack_98 = pppppplVar22;
        ppppppplStack_90 = ppppppplVar19;
        ppppppplStack_88 = ppppppplVar18;
        ppppppplStack_80 = param_2;
        ppppppplStack_78 = param_1;
        puStack_70 = &stack0xfffffffffffffff0;
        if (uVar15 < uVar13) {
          uVar15 = uVar13 - uVar15;
          if ((ulong)((long)ppppppplVar5[3] - (long)ppppppplVar20 >> 5) < uVar15) {
            uVar12 = (long)ppppppplVar5[3] - (long)pppppplVar11;
            uVar10 = (long)uVar12 >> 4;
            if (uVar10 <= uVar13) {
              uVar10 = uVar13;
            }
            if (0x7fffffffffffffdf < uVar12) {
              uVar10 = 0x7ffffffffffffff;
            }
            ppppppplVar18 = ppppppplVar5;
            ppppppplStack_b8 = ppppppplVar5 + 1;
            FUN_10aa4a96c();
            lVar21 = uVar10 + ((long)ppppppplVar20 - (long)pppppplVar11);
            _bzero(lVar21,uVar15 * 0x20);
            pppppplVar11 = (long ******)((long)ppppppplVar5[1] + (lVar21 - (long)ppppppplVar5[2]));
            func_0x00010aa4a9a0(ppppppplVar5[1],ppppppplVar5[2],pppppplVar11);
            ppppppplStack_d8 = (long *******)ppppppplVar5[1];
            ppppppplVar5[1] = pppppplVar11;
            ppppppplVar5[2] = (long ******)(lVar21 + uVar15 * 0x20);
            pppppplStack_c0 = ppppppplVar5[3];
            ppppppplVar5[3] = (long ******)(uVar10 + (long)ppppppplVar18 * 0x20);
            ppppppplVar8 = (long *******)&ppppppplStack_d8;
            ppppppplStack_d0 = ppppppplStack_d8;
            ppppppplStack_c8 = ppppppplStack_d8;
            FUN_10aa4aaac(ppppppplVar8);
          }
          else {
            ppppppplVar8 = ppppppplVar20;
            _bzero(ppppppplVar20,uVar15 * 0x20);
            ppppppplVar5[2] = (long ******)(ppppppplVar20 + uVar15 * 4);
          }
        }
        else if (uVar13 < uVar15) {
          for (; ppppppplVar20 != (long *******)(pppppplVar11 + uVar13 * 4);
              ppppppplVar20 = ppppppplVar20 + -4) {
            ppppppplStack_d8 = ppppppplVar20 + -3;
            ppppppplVar8 = (long *******)&ppppppplStack_d8;
            FUN_10aa4aa24(ppppppplVar8);
          }
          ppppppplVar5[2] = pppppplVar11 + uVar13 * 4;
        }
        if (uVar2 != 0) {
          lVar21 = 0;
          uVar15 = 0;
          puVar9 = (uint *)((long)param_3 + 0x14);
          do {
            if ((ulong)((long)ppppppplVar5[2] - (long)ppppppplVar5[1] >> 5) <= uVar15) {
LAB_10aa2e95c:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa2e960);
              (*pcVar4)();
            }
            if ((ulong)((long)ppppppplVar6[4] - (long)ppppppplVar6[3] >> 5) <= (ulong)*puVar9)
            goto LAB_10aa2e95c;
            pppppplVar11 = ppppppplVar6[3] + (ulong)*puVar9 * 4;
            ppppppplVar8 = ppppppplVar6;
            FUN_10aa2e7ac(ppppppplVar6,(long)ppppppplVar5[1] + lVar21,pppppplVar11);
            puVar9 = (uint *)((long)pppppplVar11 + 0x1c);
            uVar15 = uVar15 + 1;
            lVar21 = lVar21 + 0x20;
          } while (uVar13 * 0x20 - lVar21 != 0);
        }
        return ppppppplVar8;
      }
      uVar10 = (long)param_1[5] - (long)pppppplVar7;
      uVar13 = (long)uVar10 >> 4;
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      if (0x7fffffffffffffdf < uVar10) {
        uVar13 = 0x7ffffffffffffff;
      }
      FUN_10aa4a924();
      pppppplVar7 = param_1[3];
      pppppplVar16 = param_1[4];
      puVar1 = (undefined8 *)(uVar13 + (long)pppppplVar22);
      *puVar1 = param_2;
      *(int *)(puVar1 + 1) = (int)ppppppplVar19;
      *(undefined8 *)((long)puVar1 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0xffffffff;
      pppppplVar11 = (long ******)(puVar1 + 4);
      pppppplVar16 = (long ******)((long)puVar1 - ((long)pppppplVar16 - (long)pppppplVar7));
      _memcpy(pppppplVar16,pppppplVar7);
      pppppplVar22 = param_1[3];
      param_1[3] = pppppplVar16;
      param_1[4] = pppppplVar11;
      param_1[5] = (long ******)(uVar13 + (long)ppppppplVar5 * 0x20);
      if (pppppplVar22 != (long ******)0x0) {
        __ZdlPv();
      }
    }
    param_1[4] = pppppplVar11;
  }
  return ppppppplVar18;
  while (ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1), pppppplVar11 = pppppplVar11 + 8,
        (long *******)param_1[1] != ppppppplVar19) {
LAB_10aa2e6b0:
    ppppppplVar6 = ppppppplVar5;
    if ((long *******)*pppppplVar11 == ppppppplVar5) goto LAB_10aa2e588;
  }
LAB_10aa2e6c8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa2e6cc);
  (*pcVar4)();
}



/* Entry: 10aa2e7ac; end: 10aa2e95f;  */

void FUN_10aa2e7ac(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  *param_2 = *param_3;
  uVar1 = *(uint *)(param_3 + 2);
  uVar10 = (ulong)uVar1;
  lVar5 = param_2[1];
  lVar9 = param_2[2];
  uVar7 = lVar9 - lVar5 >> 5;
  if (uVar7 < uVar10) {
    uVar7 = uVar10 - uVar7;
    if ((ulong)(param_2[3] - lVar9 >> 5) < uVar7) {
      uVar6 = param_2[3] - lVar5;
      uVar8 = (long)uVar6 >> 4;
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (0x7fffffffffffffdf < uVar6) {
        uVar8 = 0x7ffffffffffffff;
      }
      puVar3 = param_2;
      plStack_58 = param_2 + 1;
      FUN_10aa4a96c();
      lVar5 = uVar8 + (lVar9 - lVar5);
      _bzero(lVar5,uVar7 * 0x20);
      lVar9 = lVar5 + (param_2[1] - param_2[2]);
      func_0x00010aa4a9a0(param_2[1],param_2[2],lVar9);
      lStack_78 = param_2[1];
      param_2[1] = lVar9;
      param_2[2] = lVar5 + uVar7 * 0x20;
      uStack_60 = param_2[3];
      param_2[3] = uVar8 + (long)puVar3 * 0x20;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      FUN_10aa4aaac(&lStack_78);
    }
    else {
      _bzero(lVar9,uVar7 * 0x20);
      param_2[2] = lVar9 + uVar7 * 0x20;
    }
  }
  else if (uVar10 < uVar7) {
    lVar5 = lVar5 + uVar10 * 0x20;
    for (; lVar9 != lVar5; lVar9 = lVar9 + -0x20) {
      lStack_78 = lVar9 + -0x18;
      FUN_10aa4aa24(&lStack_78);
    }
    param_2[2] = lVar5;
  }
  if (uVar1 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    puVar4 = (uint *)((long)param_3 + 0x14);
    do {
      if ((ulong)((long)(param_2[2] - param_2[1]) >> 5) <= uVar7) {
LAB_10aa2e95c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa2e960);
        (*pcVar2)();
      }
      if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5) <= (ulong)*puVar4)
      goto LAB_10aa2e95c;
      lVar9 = *(long *)(param_1 + 0x18) + (ulong)*puVar4 * 0x20;
      FUN_10aa2e7ac(param_1,param_2[1] + lVar5,lVar9);
      puVar4 = (uint *)(lVar9 + 0x1c);
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar10 * 0x20 - lVar5 != 0);
  }
  return;
}



/* Entry: 10aa2e960; end: 10aa2e997;  */

long FUN_10aa2e960(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  FUN_10aa4ab0c(param_1);
  return param_1;
}



/* Entry: 10aa2e998; end: 10aa2ec2b;  */

void FUN_10aa2e998(long *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  long *plStack_90;
  undefined1 auStack_88 [40];
  
  lVar9 = *param_2;
  if (*(char *)(*(long *)(lVar9 + 0x250) + 0x3c) != '\0') {
    uVar8 = *(undefined8 *)(lVar9 + 0x178);
    FUN_10aa2e2ac(auStack_88,uVar8,param_1[6]);
    FUN_10aa2e338(&plStack_90,lVar9,auStack_88);
    plVar1 = plStack_90;
    puVar10 = (undefined8 *)param_1[1];
    if (puVar10 < (undefined8 *)param_1[2]) {
      plStack_90 = (long *)0x0;
      puVar11 = puVar10 + 1;
      *puVar10 = plVar1;
    }
    else {
      lVar9 = *param_1;
      lVar6 = (long)puVar10 - lVar9;
      uVar5 = (lVar6 >> 3) + 1;
      if (uVar5 >> 0x3d != 0) {
        func_0x00010aa4ab80();
        goto LAB_10aa2ebfc;
      }
      uVar4 = param_1[2] - lVar9;
      uVar7 = (long)uVar4 >> 2;
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10aa2ebfc;
      }
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar10 = (undefined8 *)(lVar3 + lVar6);
      plStack_90 = (long *)0x0;
      puVar11 = puVar10 + 1;
      *puVar10 = plVar1;
      _memcpy(puVar10 + -(lVar6 >> 3),lVar9,lVar6);
      *param_1 = (long)(puVar10 + -(lVar6 >> 3));
      param_1[1] = (long)puVar11;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
    }
    param_1[1] = (long)puVar11;
    FUN_10aa2e1f4(auStack_b8,uVar8,param_1 + 7);
    FUN_10aa28324(&uStack_e0,plVar1 + 2,auStack_b8);
    puVar10 = (undefined8 *)param_1[4];
    if (puVar10 < (undefined8 *)param_1[5]) {
      puVar10[1] = uStack_d8;
      *puVar10 = uStack_e0;
      puVar10[3] = uStack_c8;
      puVar10[2] = uStack_d0;
      puVar10[4] = uStack_c0;
      puVar10 = puVar10 + 5;
    }
    else {
      lVar9 = param_1[3];
      uVar5 = ((long)puVar10 - lVar9 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar5) {
        func_0x00010aa4ab94();
LAB_10aa2ebfc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa2ec00);
        (*pcVar2)();
      }
      lVar6 = param_1[5] - lVar9 >> 3;
      uVar7 = lVar6 * -0x6666666666666666;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
        uVar7 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar7) {
        func_0x000109ffded8();
        goto LAB_10aa2ebfc;
      }
      lVar6 = uVar7 * 0x28;
      __Znwm();
      puVar10 = (undefined8 *)(lVar6 + ((long)puVar10 - lVar9));
      puVar10[1] = uStack_d8;
      *puVar10 = uStack_e0;
      puVar10[3] = uStack_c8;
      puVar10[2] = uStack_d0;
      puVar10[4] = uStack_c0;
      puVar10 = puVar10 + 5;
      _memcpy();
      param_1[3] = lVar6;
      param_1[4] = (long)puVar10;
      param_1[5] = lVar6 + uVar7 * 0x28;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
    }
    plVar1 = plStack_90;
    param_1[4] = (long)puVar10;
    plStack_90 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  lVar6 = param_2[2];
  for (lVar9 = param_2[1]; lVar9 != lVar6; lVar9 = lVar9 + 0x20) {
    FUN_10aa2e998(param_1,lVar9);
  }
  return;
}



/* Entry: 10aa2ec2c; end: 10aa2edaf;  */

long FUN_10aa2ec2c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_38;
  
  for (lVar7 = *(long *)(param_1 + 0x210); lVar7 != param_1 + 0x208; lVar7 = *(long *)(lVar7 + 8)) {
    if (*(long *)(lVar7 + 0x28) != 0) {
      func_0x0001098350ac(param_1 + 0x56d0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar7 = *(long *)(param_1 + 0x20);
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (lVar7 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      FUN_10aa6bf80(lVar7 + 0x1d8,uVar2);
      FUN_10aa6bf80(lVar7 + 0x270,uVar2);
    }
  }
  if (*(long *)(param_1 + 0x58e8) != 0) {
    *(long *)(param_1 + 0x58f0) = *(long *)(param_1 + 0x58e8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58d0) != 0) {
    *(long *)(param_1 + 0x58d8) = *(long *)(param_1 + 0x58d0);
    __ZdlPv();
  }
  func_0x0001098342c4(param_1 + 0x56d0);
  func_0x000109830398(param_1 + 0x5530);
  func_0x000109802768(param_1 + 0x5428);
  *(undefined ***)(param_1 + 0x2d0) = &PTR_DAT_110b121c0;
  func_0x0001098079e0(param_1 + 0x2e0);
  func_0x000109812550(param_1 + 0x220);
  FUN_10aa4aba8(param_1 + 0x208);
  FUN_10aa4ac5c(param_1 + 0x1f0);
  FUN_10aa4ac5c(param_1 + 0x1d8);
  lStack_38 = param_1 + 0x1c0;
  func_0x00010a4aec24(&lStack_38);
  lStack_38 = param_1 + 0x1a8;
  func_0x00010a4aec24(&lStack_38);
  func_0x00010726f2e4(param_1 + 0x138);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aa2edb0; end: 10aa2eeef;  */

uint FUN_10aa2edb0(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  cVar1 = *param_2;
  bVar2 = *(char *)(param_1 + 1) != cVar1;
  if (bVar2) {
    *(char *)(param_1 + 1) = cVar1;
  }
  uVar4 = (uint)bVar2;
  if ((*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) ||
     (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10))) {
    lVar5 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    uVar4 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)) ||
     (*(long *)(param_1 + 0x20) != *(long *)(param_2 + 0x20))) {
    lVar5 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_1 + 0x18) = lVar5;
    uVar4 = 1;
  }
  lVar5 = param_1 + 0x28;
  FUN_10aa2eef0(lVar5,*(long *)(param_2 + 0x28),
                *(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 4);
  lVar3 = param_1 + 0x40;
  FUN_10aa2eef0(lVar3,*(long *)(param_2 + 0x40),
                *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 4);
  bVar2 = true;
  if ((((*(char *)(param_1 + 1) == cRam00000001137ec120) && (*(long *)(param_1 + 8) == 0)) &&
      (*(short *)(param_1 + 0x10) == 0)) &&
     ((*(long *)(param_1 + 0x18) == 0 && (*(short *)(param_1 + 0x20) == 0)))) {
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      bVar2 = *(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48);
    }
    else {
      bVar2 = true;
    }
  }
  *(bool *)param_1 = bVar2;
  return uVar4 | (uint)lVar5 | (uint)lVar3;
}



/* Entry: 10aa2eef0; end: 10aa2effb;  */

byte FUN_10aa2eef0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  FUN_10aa4ad98(param_1,param_3);
  plVar7 = (long *)*param_1;
  bVar9 = 0;
  plVar10 = plVar7;
  if (param_3 != 0) {
    plVar7 = param_2 + param_3 * 2;
    bVar9 = 0;
    do {
      plVar6 = (long *)param_2[1];
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar11 = *param_2;
        plVar1 = plVar6 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
        if (lVar11 != 0) {
          if (*plVar10 != lVar11) {
            *plVar10 = lVar11;
            bVar9 = 1;
          }
          plVar10 = plVar10 + 1;
        }
      }
      param_2 = param_2 + 2;
    } while (param_2 != plVar7);
    plVar7 = (long *)*param_1;
  }
  FUN_10aa4ad98(param_1,(long)plVar10 - (long)plVar7 >> 3);
  return bVar9 | (long)plVar10 - (long)plVar7 != lVar3 - lVar2;
}



/* Entry: 10aa2effc; end: 10aa2f803;  */

void FUN_10aa2effc(undefined8 *param_1,long *param_2,byte *param_3,undefined8 param_4,float *param_5
                  )

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
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
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  float *pfStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [48];
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2[1] == param_2[2]) {
    FUN_10aa2e338(&uStack_220,*param_2,param_4);
    *param_1 = uStack_220;
  }
  else {
    lVar9 = *(long *)(*param_2 + 0x178);
    if (param_5 == (float *)0x0) {
      fVar34 = 1.0;
    }
    else {
      fVar12 = (float)*(undefined8 *)(param_5 + 1);
      fVar34 = (float)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20);
      fVar34 = SQRT(*param_5 * *param_5 + fVar12 * fVar12 + fVar34 * fVar34);
    }
    if ((*(byte *)(lVar9 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar9);
    }
    func_0x00010a008c90(auStack_160,lVar9 + 0xc0);
    fVar12 = fVar34 * 0.0;
    uStack_220 = (long *)CONCAT44(fVar12,fVar34);
    uStack_218 = (long *)CONCAT44(fVar12,fVar12);
    uStack_210 = CONCAT44(fVar34,fVar12);
    uStack_200 = CONCAT44(fVar12,fVar12);
    uStack_208 = CONCAT44(fVar12,fVar12);
    uStack_1f8 = CONCAT44(fVar12,fVar34);
    pfStack_1f0 = (float *)0x0;
    uStack_1e8 = 0x3f80000000000000;
    FUN_10a3e939c(&uStack_120,auStack_160,&UNK_10e482b48);
    func_0x000109519fd0(&uStack_1a0,&uStack_220,&uStack_120);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_218 = (long *)0x0;
    uStack_220 = (long *)0x0;
    uStack_1e0 = uStack_198;
    uStack_1e8 = uStack_1a0;
    uStack_1d0 = uStack_188;
    uStack_1d8 = uStack_190;
    uStack_1c0 = uStack_178;
    uStack_1c8 = uStack_180;
    uStack_1b0 = uStack_168;
    uStack_1b8 = uStack_170;
    pfStack_1f0 = param_5;
    FUN_10aa2e998(&uStack_220,param_2);
    puVar3 = (undefined8 *)0xe0;
    __Znwm();
    lVar9 = uStack_208;
    uVar10 = (uStack_200 - uStack_208 >> 3) * -0x3333333333333333;
    puVar8 = puVar3 + 8;
    *puVar3 = &PTR_FUN_110c3d220;
    uVar16 = 0x3f80000000000000;
    uVar41 = 0;
    uVar21 = 0;
    if ((long)uStack_218 - (long)uStack_220 == 0) {
      fVar12 = 0.0;
      fVar34 = 0.0;
      uVar18 = 0;
      uVar23 = 0;
      uVar27 = 0;
      plVar4 = uStack_220;
    }
    else {
      lVar5 = (long)uStack_218 - (long)uStack_220 >> 3;
      if (uVar10 < lVar5 - 1U || uVar10 - (lVar5 - 1U) == 0) {
LAB_10aa2f7ac:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa2f7b0);
        (*pcVar2)();
      }
      fVar17 = 0.0;
      fVar22 = 0.0;
      fVar12 = 0.0;
      fVar34 = 0.0;
      puVar6 = (undefined8 *)(uStack_208 + 0x20);
      plVar4 = uStack_220;
      lVar7 = lVar5;
      do {
        fVar26 = *(float *)(*plVar4 + 0x10);
        fVar12 = fVar12 + fVar26;
        fVar34 = fVar34 + fVar26 * *(float *)((long)puVar6 + -4);
        fVar17 = fVar17 + (float)*puVar6 * fVar26;
        fVar22 = fVar22 + (float)((ulong)*puVar6 >> 0x20) * fVar26;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 5;
        plVar4 = plVar4 + 1;
      } while (lVar7 != 0);
      if (1e-06 <= fVar12) {
        fVar26 = 1.0 / fVar12;
        fVar34 = fVar26 * fVar34;
        uVar41 = CONCAT44(fVar22 * fVar26,fVar17 * fVar26);
        fVar13 = 0.0;
        fVar19 = 0.0;
        fVar24 = 0.0;
        fVar28 = 0.0;
        fVar30 = 0.0;
        fVar15 = 0.0;
        fVar14 = 0.0;
        fVar20 = 0.0;
        fVar25 = 0.0;
        plVar4 = uStack_220;
        puVar6 = (undefined8 *)(uStack_208 + 0x20);
        do {
          lVar7 = *plVar4;
          fVar43 = *(float *)(lVar7 + 0x30);
          fVar44 = *(float *)(lVar7 + 0x34);
          fVar31 = *(float *)(lVar7 + 0x38);
          fVar29 = *(float *)((long)puVar6 + -0x14);
          fVar32 = *(float *)(puVar6 + -2);
          fVar33 = *(float *)((long)puVar6 + -0xc);
          fVar53 = *(float *)(puVar6 + -1);
          fVar54 = (fVar32 * fVar32 + fVar33 * fVar33) * -2.0 + 1.0;
          fVar37 = fVar29 * fVar32 + fVar33 * fVar53;
          fVar37 = fVar37 + fVar37;
          fVar39 = fVar29 * fVar33 - fVar32 * fVar53;
          fVar39 = fVar39 + fVar39;
          fVar52 = fVar29 * fVar32 - fVar33 * fVar53;
          fVar52 = fVar52 + fVar52;
          fVar55 = (fVar29 * fVar29 + fVar33 * fVar33) * -2.0 + 1.0;
          fVar35 = fVar32 * fVar33 + fVar29 * fVar53;
          fVar35 = fVar35 + fVar35;
          fVar46 = fVar29 * fVar33 + fVar32 * fVar53;
          fVar46 = fVar46 + fVar46;
          fVar45 = fVar32 * fVar33 - fVar29 * fVar53;
          fVar45 = fVar45 + fVar45;
          fVar47 = (fVar29 * fVar29 + fVar32 * fVar32) * -2.0 + 1.0;
          fVar50 = fVar43 * fVar37;
          fVar56 = fVar43 * fVar54;
          fVar43 = fVar43 * fVar39;
          fVar53 = fVar44 * fVar52;
          fVar40 = fVar44 * fVar55;
          fVar44 = fVar44 * fVar35;
          fVar38 = fVar31 * fVar46;
          fVar36 = fVar31 * fVar45;
          fVar31 = fVar31 * fVar47;
          fVar29 = *(float *)((long)puVar6 + -4) - fVar34;
          fVar48 = (float)*puVar6 - fVar17 * fVar26;
          fVar49 = (float)((ulong)*puVar6 >> 0x20) - fVar22 * fVar26;
          fVar32 = fVar29 * fVar29 + fVar48 * fVar48 + fVar49 * fVar49;
          fVar33 = fVar26 * *(float *)(lVar7 + 0x10);
          fVar25 = fVar25 + fVar33 * ((fVar32 - fVar29 * fVar29) +
                                     fVar52 * fVar53 + fVar54 * fVar56 + fVar46 * fVar38);
          fVar51 = 0.0 - fVar29 * fVar49;
          fVar14 = fVar14 + fVar33 * (fVar51 + fVar52 * fVar44 + fVar54 * fVar43 + fVar46 * fVar31);
          fVar29 = 0.0 - fVar29 * fVar48;
          fVar15 = fVar15 + fVar33 * (fVar29 + fVar55 * fVar53 + fVar37 * fVar56 + fVar45 * fVar38);
          fVar20 = fVar20 + fVar33 * (fVar29 + fVar40 * fVar52 + fVar54 * fVar50 + fVar46 * fVar36);
          fVar30 = fVar30 + fVar33 * ((fVar32 - fVar48 * fVar48) +
                                     fVar55 * fVar40 + fVar37 * fVar50 + fVar45 * fVar36);
          fVar29 = 0.0 - fVar48 * fVar49;
          fVar28 = fVar28 + fVar33 * (fVar29 + fVar55 * fVar44 + fVar37 * fVar43 + fVar45 * fVar31);
          fVar24 = fVar24 + fVar33 * (fVar51 + fVar35 * fVar53 + fVar39 * fVar56 + fVar47 * fVar38);
          fVar19 = fVar19 + fVar33 * (fVar29 + fVar40 * fVar35 + fVar39 * fVar50 + fVar47 * fVar36);
          fVar13 = fVar13 + fVar33 * ((fVar32 - fVar49 * fVar49) +
                                     fVar35 * fVar44 + fVar39 * fVar43 + fVar47 * fVar31);
          lVar5 = lVar5 + -1;
          plVar4 = plVar4 + 1;
          puVar6 = puVar6 + 5;
        } while (lVar5 != 0);
        uStack_120 = CONCAT44(fVar20,fVar25);
        uStack_118 = (ulong)(uint)fVar14;
        uStack_110 = CONCAT44(fVar30,fVar15);
        uStack_108 = (ulong)(uint)fVar28;
        uStack_f8 = (ulong)(uint)fVar13;
        uStack_100 = CONCAT17((char)((uint)fVar19 >> 0x18),
                              CONCAT16((char)((uint)fVar19 >> 0x10),
                                       CONCAT15((char)((uint)fVar19 >> 8),
                                                CONCAT14(SUB41(fVar19,0),fVar24))));
        func_0x000109816974(0x3727c5ac,&uStack_120,auStack_d0,0x14);
        func_0x00010980adc4(auStack_d0,&uStack_e0);
        uVar27 = (undefined4)uStack_120;
        uVar18 = (undefined4)uStack_f8;
        plVar4 = uStack_218;
        uVar16 = uStack_d8;
        uVar21 = uStack_e0;
        uVar23 = uStack_110._4_4_;
      }
      else {
        fVar12 = 0.0;
        fVar34 = 0.0;
        uVar18 = 0;
        uVar27 = 0;
        uVar41 = 0;
        plVar4 = uStack_218;
        uVar21 = 0;
        uVar23 = 0;
      }
    }
    *(float *)(puVar3 + 2) = fVar12;
    *(float *)((long)puVar3 + 0x14) = fVar34;
    puVar3[4] = uVar21;
    puVar3[3] = uVar41;
    puVar3[5] = uVar16;
    *(undefined4 *)(puVar3 + 6) = uVar27;
    *(undefined4 *)((long)puVar3 + 0x34) = uVar23;
    *(undefined4 *)(puVar3 + 7) = uVar18;
    *puVar3 = &PTR_FUN_110c3d220;
    puVar3[1] = puVar8;
    func_0x00010981611c(puVar8,1,(ulong)((long)plVar4 - (long)uStack_220) >> 3);
    plVar1 = uStack_218;
    plVar4 = uStack_220;
    puVar3[0x18] = uStack_220;
    puVar3[0x1a] = uStack_210;
    puVar3[0x19] = uStack_218;
    uStack_218 = (long *)0x0;
    uStack_210 = 0;
    uStack_220 = (long *)0x0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
    if ((long)plVar1 - (long)plVar4 != 0) {
      uVar11 = 0;
      fVar34 = *(float *)((long)puVar3 + 0x2c);
      uVar16 = puVar3[4];
      uVar21 = *(undefined8 *)((long)puVar3 + 0x24);
      fVar12 = (float)uVar16;
      fVar24 = -fVar12;
      fVar22 = (float)((ulong)uVar16 >> 0x20);
      uVar16 = NEON_ext(uVar21,uVar16,4,1);
      fVar13 = (float)uVar21;
      fVar17 = -fVar13;
      fVar19 = (float)((ulong)uVar21 >> 0x20);
      fVar26 = -fVar19;
      fVar28 = (float)uVar16;
      fVar30 = (float)((ulong)uVar16 >> 0x20);
      puVar6 = (undefined8 *)(lVar9 + 0x20);
      do {
        if (((ulong)((long)(puVar3[0x19] - puVar3[0x18]) >> 3) <= uVar11) || (uVar10 - uVar11 == 0))
        goto LAB_10aa2f7ac;
        fVar14 = *(float *)((long)puVar6 + -0x14);
        fVar20 = *(float *)(puVar6 + -2);
        fVar25 = *(float *)((long)puVar6 + -0xc);
        fVar29 = *(float *)(puVar6 + -1);
        fVar31 = fVar12 * fVar14 + fVar29 * fVar34 + fVar20 * fVar13 + fVar25 * fVar19;
        fVar32 = fVar29 * fVar24 + fVar14 * fVar34 + fVar25 * fVar17 + fVar20 * fVar19;
        fVar15 = fVar29 * fVar17 + fVar20 * fVar34 + fVar14 * fVar26 + fVar25 * fVar12;
        fVar14 = fVar29 * fVar26 + fVar25 * fVar34 + fVar20 * fVar24 + fVar14 * fVar13;
        fVar20 = 2.0 / (fVar32 * fVar32 + fVar15 * fVar15 + fVar14 * fVar14 + fVar31 * fVar31);
        fVar29 = fVar15 * fVar20;
        fVar25 = fVar14 * fVar20;
        fVar33 = fVar31 * fVar32 * fVar20;
        fVar20 = fVar32 * fVar32 * fVar20;
        uVar16 = *(undefined8 *)((long)puVar6 + -4);
        uVar21 = *(undefined8 *)((long)puVar3 + 0x14);
        uVar41 = *puVar6;
        uVar42 = puVar3[3];
        uStack_120 = CONCAT44(fVar32 * fVar29 - fVar31 * fVar25,
                              1.0 - (fVar15 * fVar29 + fVar14 * fVar25));
        uStack_118 = (ulong)(uint)(fVar32 * fVar25 + fVar31 * fVar29);
        uStack_110 = CONCAT44(1.0 - (fVar20 + fVar14 * fVar25),fVar32 * fVar29 + fVar31 * fVar25);
        uStack_108 = (ulong)(uint)(fVar15 * fVar25 - fVar33);
        uStack_100 = CONCAT44(fVar15 * fVar25 + fVar33,fVar32 * fVar25 - fVar31 * fVar29);
        uStack_f8 = (ulong)(uint)(1.0 - (fVar20 + fVar15 * fVar29));
        fVar20 = (float)uVar16 - (float)uVar21;
        fVar25 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
        uVar16 = NEON_ext(uVar41,uVar16,4,1);
        uVar21 = NEON_ext(uVar42,uVar21,4,1);
        fVar29 = (float)uVar16 - (float)uVar21;
        fVar31 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
        uVar16 = NEON_ext(CONCAT44(fVar25,fVar20),CONCAT44(fVar31,fVar29),4,1);
        fVar32 = fVar13 * fVar20 + (float)uVar16 * fVar24;
        fVar15 = fVar28 * ((float)uVar41 - (float)uVar42) + fVar29 * fVar17;
        fVar14 = fVar30 * ((float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar42 >> 0x20)) +
                 fVar31 * fVar26;
        fVar33 = fVar34 * fVar32 + fVar13 * fVar15 + fVar24 * fVar14;
        fVar15 = fVar15 * fVar34 + fVar28 * (fVar12 * fVar29 + fVar20 * -fVar28) + fVar32 * fVar17;
        fVar14 = fVar14 * fVar34 +
                 fVar30 * (fVar22 * fVar31 + fVar25 * -fVar30) +
                 (fVar19 * fVar25 + (float)((ulong)uVar16 >> 0x20) * -fVar22) * fVar26;
        uStack_f0 = CONCAT44((fVar25 + fVar14 + fVar14) * 0.01,(fVar20 + fVar15 + fVar15) * 0.01);
        uStack_e8 = (ulong)(uint)((fVar29 + fVar33 + fVar33) * 0.01);
        func_0x000109816320(puVar8,&uStack_120,
                            *(undefined8 *)(*(long *)(puVar3[0x18] + uVar11 * 8) + 8));
        uVar11 = uVar11 + 1;
        puVar6 = puVar6 + 5;
      } while ((long)plVar1 - (long)plVar4 >> 3 != uVar11);
    }
    *param_1 = puVar3;
    FUN_10aa2e960(&uStack_220);
    uStack_220 = puVar3;
  }
  if ((*param_3 & 3) == 0) {
    *(float *)(param_1 + 1) = *(float *)(uStack_220 + 2) * *(float *)(param_3 + 4) * 0.001;
  }
  return;
}



/* Entry: 10aa2f804; end: 10aa2f8f3;  */

void FUN_10aa2f804(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  do {
    if (param_1 == 0) {
      return;
    }
    for (lVar2 = *(long *)(param_1 + 0x158); lVar2 != param_1 + 0x150; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar2 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0x1663061754011abf);
        if (plVar1 != (long *)0x0) {
          if ((*(ushort *)(plVar1 + 0x30) & 0x17) == 0) {
            return;
          }
          break;
        }
      }
    }
    for (lVar2 = *(long *)(param_1 + 0x158); lVar2 != param_1 + 0x150; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar2 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xeb76020423cc3559);
        if (plVar1 != (long *)0x0) {
          if (param_2 == (int)plVar1[0x74] && (ulong)plVar1[0x74] < 0xffffffff00000000) {
            return;
          }
          break;
        }
      }
    }
    param_1 = *(long *)(param_1 + 0x188);
  } while( true );
}



/* Entry: 10aa2f8f4; end: 10aa2f987;  */

void FUN_10aa2f8f4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10aa2f988; end: 10aa2fd73;  */

bool FUN_10aa2f988(ushort *param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  long **pplVar16;
  long *plVar17;
  ulong unaff_x26;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  
  uVar8 = (uint)param_3;
  uVar20 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1;
  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
  if ((param_3 & 0xffff) == 0) {
    uVar8 = 0xffffffff;
  }
  if (param_2 != 0) {
    uVar8 = (uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
  }
  uVar20 = *(ulong *)(param_1 + 4);
  uVar15 = *(ulong *)(param_1 + 8);
  uVar3 = *param_1;
  if (uVar20 != param_2 || uVar15 != param_3) {
    *param_1 = (ushort)uVar8;
    *(ulong *)(param_1 + 4) = param_2;
    *(ulong *)(param_1 + 8) = param_3;
  }
  if ((uVar8 & 0xffff) < 0x12) {
    iVar11 = *(int *)(param_4 + (ulong)(ushort)uVar8 * 4 + 0x20);
  }
  else {
    iVar11 = 0;
  }
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 != iVar11) {
    *(int *)(param_1 + 2) = iVar11;
  }
  bVar14 = iVar2 != iVar11 || (uVar20 != param_2 || uVar15 != param_3);
  if (*(long *)(param_4 + 0x80) == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10aa4afbc(param_1 + 0xc);
      bVar14 = true;
    }
  }
  else if (((uint)uVar3 != (uVar8 & 0xffff)) || (param_1[1] != *(ushort *)(param_4 + 0x90))) {
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    plStack_80 = (long *)0x0;
    fStack_70 = 1.0;
    plVar17 = *(long **)(param_4 + 0x78);
    lVar18 = 0;
    if (plVar17 != (long *)0x0) {
      uVar20 = 0;
      do {
        uVar4 = *(uint *)(plVar17 + 2) >> 0x10;
        uVar1 = *(uint *)(plVar17 + 2) & 0xffff;
        uVar19 = uVar4;
        if (uVar1 != (uVar8 & 0xffff)) {
          uVar19 = 0xffffffff;
        }
        if (uVar4 != (uVar8 & 0xffff)) {
          uVar1 = uVar19;
        }
        uVar15 = (ulong)uVar1;
        if (uVar1 != 0xffffffff) {
          if (uVar20 != 0) {
            uVar9 = uVar20 - 1;
            uVar19 = (uint)uVar20;
            if ((uVar20 & uVar9) == 0) {
              unaff_x26 = (ulong)(uVar19 + 0xffff & uVar1);
            }
            else {
              unaff_x26 = uVar15;
              if (uVar20 <= uVar15) {
                uVar4 = 0;
                if (uVar19 != 0) {
                  uVar4 = uVar1 / uVar19;
                }
                unaff_x26 = (ulong)(uVar1 - uVar4 * uVar19);
              }
            }
            plVar12 = *(long **)(lStack_90 + unaff_x26 * 8);
            if (plVar12 != (long *)0x0) {
              do {
                while( true ) {
                  plVar12 = (long *)*plVar12;
                  if (plVar12 == (long *)0x0) goto LAB_10aa2fb1c;
                  uVar13 = plVar12[1];
                  if (uVar13 != uVar15) break;
                  if (*(ushort *)(plVar12 + 2) == uVar1) goto LAB_10aa2fc34;
                }
                if ((uVar20 & uVar9) == 0) {
                  uVar13 = uVar13 & uVar9;
                }
                else if (uVar20 <= uVar13) {
                  uVar5 = 0;
                  if (uVar20 != 0) {
                    uVar5 = uVar13 / uVar20;
                  }
                  uVar13 = uVar13 - uVar5 * uVar20;
                }
              } while (uVar13 == unaff_x26);
            }
          }
LAB_10aa2fb1c:
          plVar12 = (long *)0x18;
          __Znwm();
          *plVar12 = 0;
          plVar12[1] = uVar15;
          *(short *)(plVar12 + 2) = (short)uVar1;
          if ((uVar20 == 0) || (fStack_70 * (float)uVar20 < (float)(lVar18 + 1))) {
            uVar9 = 1;
            if (2 < uVar20) {
              uVar9 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            uVar9 = uVar9 | uVar20 << 1;
            uVar20 = (ulong)((float)(lVar18 + 1) / fStack_70);
            if (uVar9 <= uVar20) {
              uVar9 = uVar20;
            }
            FUN_10a5c814c(&lStack_90,uVar9);
            uVar20 = uStack_88;
            if ((uStack_88 & uStack_88 - 1) == 0) {
              unaff_x26 = (ulong)((int)uStack_88 + 0xffffU & uVar1);
            }
            else {
              unaff_x26 = uVar15;
              if (uStack_88 <= uVar15) {
                uVar9 = 0;
                if (uStack_88 != 0) {
                  uVar9 = uVar15 / uStack_88;
                }
                unaff_x26 = uVar15 - uVar9 * uStack_88;
              }
            }
          }
          plVar10 = *(long **)(lStack_90 + unaff_x26 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar12 = (long)plStack_80;
            plStack_80 = plVar12;
            *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
            if (*plVar12 != 0) {
              uVar15 = *(ulong *)(*plVar12 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar15 = uVar15 & uVar20 - 1;
              }
              else if (uVar20 <= uVar15) {
                uVar9 = 0;
                if (uVar20 != 0) {
                  uVar9 = uVar15 / uVar20;
                }
                uVar15 = uVar15 - uVar9 * uVar20;
              }
              plVar10 = (long *)(lStack_90 + uVar15 * 8);
              goto LAB_10aa2fc24;
            }
          }
          else {
            *plVar12 = *plVar10;
LAB_10aa2fc24:
            *plVar10 = (long)plVar12;
          }
          lVar18 = lStack_78 + 1;
          lStack_78 = lVar18;
        }
LAB_10aa2fc34:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    if (lVar18 == *(long *)(param_1 + 0x18)) {
      pplVar16 = &plStack_80;
      do {
        pplVar16 = (long **)*pplVar16;
        if (pplVar16 == (long **)0x0) goto LAB_10aa2fd14;
        uVar3 = *(ushort *)(pplVar16 + 2);
        puVar6 = param_1 + 0xc;
        FUN_10aa69538(puVar6,uVar3);
      } while ((puVar6 != (ushort *)0x0) && (uVar3 == puVar6[8]));
    }
    FUN_10aa4afbc(param_1 + 0xc);
    lVar18 = lStack_90;
    lStack_90 = 0;
    lVar7 = *(long *)(param_1 + 0xc);
    *(long *)(param_1 + 0xc) = lVar18;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    uVar20 = uStack_88;
    *(long **)(param_1 + 0x14) = plStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_88;
    uStack_88 = 0;
    *(long *)(param_1 + 0x18) = lStack_78;
    *(float *)(param_1 + 0x1c) = fStack_70;
    if (lStack_78 != 0) {
      uVar15 = plStack_80[1];
      if ((uVar20 & uVar20 - 1) == 0) {
        uVar15 = uVar15 & uVar20 - 1;
      }
      else if (uVar20 <= uVar15) {
        uVar9 = 0;
        if (uVar20 != 0) {
          uVar9 = uVar15 / uVar20;
        }
        uVar15 = uVar15 - uVar9 * uVar20;
      }
      *(ushort **)(*(long *)(param_1 + 0xc) + uVar15 * 8) = param_1 + 0x14;
      plStack_80 = (long *)0x0;
      lStack_78 = 0;
    }
    bVar14 = true;
LAB_10aa2fd14:
    func_0x00010a3f8ab8(&lStack_90);
  }
  param_1[1] = *(ushort *)(param_4 + 0x90);
  return bVar14;
}



/* Entry: 10aa2fd74; end: 10aa2ff27;  */

float FUN_10aa2fd74(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar1 = param_2[2];
  fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar4 < 1.1920929e-07) {
    return 0.0;
  }
  fVar6 = fVar5 * *(float *)(param_1 + 1) + fVar3 * *(float *)(param_1 + 3) +
          fVar1 * *(float *)(param_1 + 5) + *(float *)(param_1 + 7) * 0.0;
  fVar2 = (float)*param_1 * fVar5 + (float)param_1[2] * fVar3 +
          (float)param_1[4] * fVar1 + (float)param_1[6] * 0.0;
  fVar1 = (float)((ulong)*param_1 >> 0x20) * fVar5 + (float)((ulong)param_1[2] >> 0x20) * fVar3 +
          (float)((ulong)param_1[4] >> 0x20) * fVar1 + (float)((ulong)param_1[6] >> 0x20) * 0.0;
  return fVar4 * (1.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6)) * fVar2;
}



/* Entry: 10aa2ff28; end: 10aa32c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aa2ff28(uint **param_1,uint *param_2,long param_3,uint *param_4,undefined8 *param_5,
                  uint *param_6)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [12];
  long *plVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  byte *pbVar33;
  long *plVar34;
  undefined **ppuVar35;
  undefined8 *puVar36;
  float fVar37;
  ulong uVar39;
  long lVar40;
  byte *pbVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined8 uVar44;
  uint *puVar45;
  long lVar46;
  float *pfVar47;
  long lVar48;
  undefined *puVar49;
  long *plVar50;
  byte bVar51;
  undefined **ppuVar52;
  undefined8 *puVar53;
  byte *pbVar54;
  ulong uVar55;
  uint *puVar56;
  long lVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  ulong uVar60;
  undefined **ppuVar61;
  long *plVar62;
  long *plVar63;
  long *plVar64;
  float fVar65;
  int iVar66;
  uint uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  int iVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float fVar78;
  ulong uVar77;
  float fVar79;
  float extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined8 uVar80;
  ulong uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  uint *puStack_3d8;
  ulong uStack_3d0;
  uint *puStack_3a8;
  uint uStack_38c;
  float *pfStack_388;
  uint *puStack_368;
  uint *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_338;
  uint *puStack_320;
  uint *puStack_318;
  uint *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2fc;
  undefined8 uStack_2f4;
  undefined1 auStack_2ec [12];
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined8 uStack_29c;
  float fStack_294;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  long *plStack_268;
  undefined4 uStack_260;
  undefined8 uStack_240;
  uint *puStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  long *plStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  float fStack_17c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_b8;
  float fVar38;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar43 = *param_2 + 1;
  *param_2 = uVar43;
  lVar57 = param_3 + 0xd48;
  FUN_10a5aeb74(lVar57,&PTR_DAT_110c3b430);
  lVar46 = *(long *)(lVar57 + 8);
  if (lVar46 == lVar57) {
    puStack_350 = (uint *)0x0;
    plVar62 = (long *)0x0;
  }
  else {
    puStack_350 = (uint *)0x0;
    plVar63 = (long *)0x0;
    plVar50 = (long *)0x0;
    do {
      lVar48 = *(long *)(lVar46 + 0x28);
      plVar62 = plVar50;
      puVar56 = puStack_350;
      if ((*(ushort *)(lVar48 + 0x180) & 0x17) == 0) {
        if (plVar50 < plVar63) {
          plVar62 = plVar50 + 1;
          *plVar50 = lVar48;
        }
        else {
          lVar27 = (long)plVar50 - (long)puStack_350;
          uVar55 = (lVar27 >> 3) + 1;
          if (uVar55 >> 0x3d != 0) {
            func_0x00010aa697f4();
            goto LAB_10aa32bf0;
          }
          uVar39 = (long)plVar63 - (long)puStack_350 >> 2;
          if (uVar39 <= uVar55) {
            uVar39 = uVar55;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar63 - (long)puStack_350)) {
            uVar39 = 0x1fffffffffffffff;
          }
          if (uVar39 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10aa32bf0;
          }
          lVar40 = uVar39 << 3;
          __Znwm();
          plVar50 = (long *)(lVar40 + lVar27);
          plVar63 = (long *)(lVar40 + uVar39 * 8);
          puVar56 = (uint *)(plVar50 + -(lVar27 >> 3));
          plVar62 = plVar50 + 1;
          *plVar50 = lVar48;
          _memcpy(puVar56,puStack_350,lVar27);
          if (puStack_350 != (uint *)0x0) {
            __ZdlPv(puStack_350);
          }
        }
      }
      puStack_350 = puVar56;
      lVar46 = *(long *)(lVar46 + 8);
      plVar50 = plVar62;
    } while (lVar46 != lVar57);
  }
  lVar57 = param_3 + 0xd48;
  FUN_10a5aeb74(lVar57,&PTR_DAT_110c3d528);
  puStack_238 = (uint *)0x0;
  uStack_240 = (uint *)0x0;
  fStack_230 = 0.0;
  fStack_22c = 0.0;
  for (lVar46 = *(long *)(lVar57 + 8); lVar46 != lVar57; lVar46 = *(long *)(lVar46 + 8)) {
    if (((*(ushort *)(*(long *)(lVar46 + 0x28) + 0x180) & 0x17) == 0) &&
       (*(int *)(*(long *)(lVar46 + 0x28) + 0x3b4) == 0)) {
      FUN_10aa32c44(&uStack_240);
    }
  }
  ppuVar35 = &PTR_DAT_110c3b150;
  lVar57 = param_3 + 0xd48;
  FUN_10a5aeb74();
  lVar46 = *(long *)(lVar57 + 8);
  if (lVar46 == lVar57) {
    ppuStack_348 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
  }
  else {
    ppuStack_348 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
    ppuVar52 = (undefined **)0x0;
    do {
      puVar49 = *(undefined **)(lVar46 + 0x28);
      ppuVar61 = ppuStack_348;
      if ((*(ushort *)(puVar49 + 0x180) & 0x17) == 0) {
        if (ppuStack_338 < ppuVar52) {
          *ppuStack_338 = puVar49;
          ppuStack_338 = ppuStack_338 + 1;
        }
        else {
          lVar48 = (long)ppuStack_338 - (long)ppuStack_348;
          uVar55 = (lVar48 >> 3) + 1;
          if (uVar55 >> 0x3d != 0) {
            func_0x00010aa69808();
            goto LAB_10aa32bf0;
          }
          uVar39 = (long)ppuVar52 - (long)ppuStack_348 >> 2;
          if (uVar39 <= uVar55) {
            uVar39 = uVar55;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuVar52 - (long)ppuStack_348)) {
            uVar39 = 0x1fffffffffffffff;
          }
          if (uVar39 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10aa32bf0;
          }
          lVar27 = uVar39 << 3;
          __Znwm();
          puVar36 = (undefined8 *)(lVar27 + lVar48);
          ppuVar52 = (undefined **)(lVar27 + uVar39 * 8);
          ppuVar61 = (undefined **)(puVar36 + -(lVar48 >> 3));
          ppuStack_338 = (undefined **)(puVar36 + 1);
          *puVar36 = puVar49;
          ppuVar35 = ppuStack_348;
          _memcpy(ppuVar61,ppuStack_348,lVar48);
          if (ppuStack_348 != (undefined **)0x0) {
            __ZdlPv(ppuStack_348);
          }
        }
      }
      ppuStack_348 = ppuVar61;
      lVar46 = *(long *)(lVar46 + 8);
    } while (lVar46 != lVar57);
  }
  uVar39 = (long)plVar62 - (long)puStack_350 >> 3;
  puStack_320 = (uint *)0x0;
  puStack_318 = (uint *)0x0;
  puStack_310 = (uint *)0x0;
  uVar55 = uVar39 + 1;
  if (0xfffffffffffffffe < uVar39) {
LAB_10aa303c8:
    puVar28 = puStack_238;
    puVar45 = uStack_240;
    puVar25 = puStack_318;
    puVar56 = puStack_320;
    uVar55 = (long)puStack_318 - (long)puStack_320 >> 6;
    fStack_160 = SUB84(puStack_320,0);
    fStack_15c = (float)((ulong)puStack_320 >> 0x20);
    fStack_158 = (float)uVar55;
    fStack_154 = (float)((long)puStack_318 - (long)puStack_320 >> 0x26);
    uStack_138 = 0;
    fStack_148 = 0.0;
    fStack_144 = 0.0;
    uStack_140._0_4_ = 0.0;
    uStack_140._4_4_ = 0.0;
    ppuVar52 = ppuStack_348;
    uStack_150._0_4_ = (float)uVar43;
    if ((long)puStack_238 - (long)uStack_240 != 0) {
      uVar39 = (long)puStack_238 - (long)uStack_240 >> 3;
      if (uVar39 >> 0x3b != 0) {
        FUN_10aa4a910();
        goto LAB_10aa32bf0;
      }
      FUN_10aa4a924();
      uStack_138 = uVar39 + (long)ppuVar35 * 0x20;
      fStack_148 = (float)uVar39;
      fStack_144 = (float)(uVar39 >> 0x20);
      uStack_140._0_4_ = fStack_148;
      uStack_140._4_4_ = fStack_144;
      do {
        puVar29 = puVar45 + 2;
        puVar36 = *(undefined8 **)puVar45;
        FUN_10aa2e3c4(&fStack_160);
        puVar45 = puVar29;
      } while (puVar29 != puVar28);
      lVar48 = CONCAT44(uStack_140._4_4_,(float)uStack_140);
      lVar46 = CONCAT44(fStack_144,fStack_148);
      for (lVar57 = lVar46; lVar57 != lVar48; lVar57 = lVar57 + 0x20) {
        if (*(int *)(lVar57 + 0xc) == -1) {
          uVar39 = (ulong)*(uint *)(lVar57 + 8);
          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
          uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
          if (uVar55 <= uVar39) goto LAB_10aa32bf0;
          puVar1 = (ulong *)(puVar56 + uVar39 * 0x10 + 4);
          puVar53 = *(undefined8 **)(puVar56 + uVar39 * 0x10 + 6);
          if (puVar53 < *(undefined8 **)(puVar56 + uVar39 * 0x10 + 8)) {
            puVar53[1] = 0;
            *puVar53 = 0;
            puVar53[3] = 0;
            puVar53[2] = 0;
            puVar53 = puVar53 + 4;
          }
          else {
            lVar27 = (long)puVar53 - *puVar1;
            uVar60 = (lVar27 >> 5) + 1;
            if (uVar60 >> 0x3b != 0) {
              FUN_10aa4a958();
              goto LAB_10aa32bf0;
            }
            uVar77 = (long)*(undefined8 **)(puVar56 + uVar39 * 0x10 + 8) - *puVar1;
            uVar26 = (long)uVar77 >> 4;
            if (uVar26 <= uVar60) {
              uVar26 = uVar60;
            }
            if (0x7fffffffffffffdf < uVar77) {
              uVar26 = 0x7ffffffffffffff;
            }
            uStack_1c0 = puVar1;
            FUN_10aa4a96c();
            puVar58 = (undefined8 *)(uVar26 + lVar27);
            puVar58[1] = 0;
            *puVar58 = 0;
            puVar58[3] = 0;
            puVar58[2] = 0;
            puVar53 = puVar58 + 4;
            uVar60 = (long)puVar58 + (*puVar1 - *(long *)(puVar56 + uVar39 * 0x10 + 6));
            func_0x00010aa4a9a0(*puVar1,*(long *)(puVar56 + uVar39 * 0x10 + 6),uVar60);
            uStack_1e0 = *puVar1;
            *puVar1 = uVar60;
            fStack_1d8 = (float)uStack_1e0;
            fStack_1d4 = (float)(uStack_1e0 >> 0x20);
            *(undefined8 **)(puVar56 + uVar39 * 0x10 + 6) = puVar53;
            uVar44 = *(undefined8 *)(puVar56 + uVar39 * 0x10 + 8);
            *(ulong *)(puVar56 + uVar39 * 0x10 + 8) = uVar26 + (long)puVar36 * 0x20;
            fStack_1c8 = (float)uVar44;
            fStack_1c4 = (float)((ulong)uVar44 >> 0x20);
            fStack_1d0 = fStack_1d8;
            fStack_1cc = fStack_1d4;
            FUN_10aa4aaac(&uStack_1e0);
          }
          *(undefined8 **)(puVar56 + uVar39 * 0x10 + 6) = puVar53;
          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
          uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
          if ((undefined8 *)*puVar1 == puVar53) goto LAB_10aa32bf0;
          puVar36 = puVar53 + -4;
          FUN_10aa2e7ac(&fStack_160,puVar36,lVar57);
        }
      }
      if (lVar46 != 0) {
        __ZdlPv(lVar46);
      }
    }
    for (; ppuVar52 != ppuStack_338; ppuVar52 = ppuVar52 + 1) {
      puVar49 = *ppuVar52;
      lVar57 = *(long *)(puVar49 + 0x168);
      uVar39 = (ulong)uVar43;
      FUN_10aa2f804();
      if (lVar57 == 0) {
        *(undefined8 *)(puVar49 + 0x268) = 0xffffffffffffffff;
        *(undefined8 *)(puVar49 + 0x278) = 0;
        *(undefined8 *)(puVar49 + 0x288) = 0;
        *(undefined8 *)(puVar49 + 0x280) = 0;
      }
      else {
        plVar62 = *(long **)(puVar49 + 0x1f8);
        if (plVar62 == (long *)0x0) {
LAB_10aa30618:
          lVar46 = 0;
          uVar67 = *(uint *)(lVar57 + 0x3a4);
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (plVar62 == (long *)0x0) goto LAB_10aa30618;
          lVar46 = *(long *)(puVar49 + 0x1f0);
          plVar63 = plVar62 + 1;
          do {
            lVar48 = *plVar63;
            cVar5 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
            if (bVar21) {
              *plVar63 = lVar48 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar48 == 0) {
            (**(code **)(*plVar62 + 0x10))(plVar62);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
          }
          if (lVar46 == 0) goto LAB_10aa30618;
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
          lVar46 = *(long *)(lVar46 + 0x168);
          uVar39 = (ulong)uVar43;
          FUN_10aa2f804();
          uVar67 = *(uint *)(lVar57 + 0x3a4);
          if (lVar46 == 0) {
            lVar46 = 0;
          }
          else if (*(uint *)(lVar46 + 0x3a4) != uVar67) {
            lVar46 = 0;
          }
        }
        uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
        uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
        if (puVar25 == puVar56) goto LAB_10aa32bf0;
        uVar60 = 0;
        puVar45 = puVar56;
        while (*puVar45 != uVar67) {
          uVar60 = uVar60 + 1;
          puVar45 = puVar45 + 0x10;
          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
          uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
          if (uVar55 == uVar60) goto LAB_10aa32bf0;
        }
        uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
        uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
        if (uVar55 <= (uVar60 & 0xffffffff)) goto LAB_10aa32bf0;
        uVar60 = uVar60 & 0xffffffff;
        puVar45 = puVar56 + uVar60 * 0x10 + 10;
        puVar36 = *(undefined8 **)(puVar56 + uVar60 * 0x10 + 0xc);
        lVar27 = (long)puVar36 - *(long *)puVar45;
        lVar48 = (lVar27 >> 3) * -0x5555555555555555;
        if (puVar36 < *(undefined8 **)(puVar56 + uVar60 * 0x10 + 0xe)) {
          *puVar36 = puVar49;
          puVar36[1] = lVar57;
          puVar53 = puVar36 + 3;
          puVar36[2] = lVar46;
        }
        else {
          uVar26 = lVar48 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar26) {
            func_0x00010aa4aec0();
            goto LAB_10aa32bf0;
          }
          lVar40 = (long)*(undefined8 **)(puVar56 + uVar60 * 0x10 + 0xe) - *(long *)puVar45 >> 3;
          uVar77 = lVar40 * 0x5555555555555556;
          if (uVar77 < uVar26 || uVar77 - uVar26 == 0) {
            uVar77 = uVar26;
          }
          if (0x555555555555554 < (ulong)(lVar40 * -0x5555555555555555)) {
            uVar77 = 0xaaaaaaaaaaaaaaa;
          }
          FUN_10aa4aed4();
          puVar36 = (undefined8 *)(uVar77 + lVar27);
          *puVar36 = puVar49;
          puVar36[1] = lVar57;
          puVar36[2] = lVar46;
          puVar53 = puVar36 + 3;
          lVar46 = (long)puVar36 - (*(long *)(puVar56 + uVar60 * 0x10 + 0xc) - *(long *)puVar45);
          _memcpy(lVar46);
          lVar57 = *(long *)puVar45;
          *(long *)puVar45 = lVar46;
          *(undefined8 **)(puVar56 + uVar60 * 0x10 + 0xc) = puVar53;
          *(ulong *)(puVar56 + uVar60 * 0x10 + 0xe) = uVar77 + uVar39 * 0x18;
          if (lVar57 != 0) {
            __ZdlPv();
          }
        }
        *(undefined8 **)(puVar56 + uVar60 * 0x10 + 0xc) = puVar53;
        *(ulong *)(puVar49 + 0x268) = CONCAT44(uVar67,uVar43);
        *(int *)(puVar49 + 0x270) = (int)lVar48;
      }
    }
    if (ppuStack_348 != (undefined **)0x0) {
      __ZdlPv();
    }
    puVar56 = uStack_240;
    if (uStack_240 != (uint *)0x0) {
      __ZdlPv();
    }
    if (puStack_350 != (uint *)0x0) {
      __ZdlPv();
      puVar56 = puStack_350;
    }
    puVar45 = puStack_320;
    puVar25 = param_2 + 2;
    lVar57 = (long)puStack_318 - (long)puStack_320;
    if ((*(long *)(param_2 + 6) == 0) && (lVar57 == 0x40)) {
      if (*(long *)(puStack_320 + 4) == *(long *)(puStack_320 + 6)) goto LAB_10aa32988;
      uVar43 = *param_2;
      lVar57 = 0x40;
      lVar46 = 1;
    }
    else {
      lVar46 = lVar57 >> 6;
      uVar43 = *param_2;
      if (*(long *)(param_2 + 6) != 0) goto LAB_10aa30884;
    }
    FUN_10aa6981c();
    *(uint **)(puVar56 + 2) = puVar25;
    lVar48 = *(long *)(param_2 + 2);
    *(long *)puVar56 = lVar48;
    *(uint **)(lVar48 + 8) = puVar56;
    *(uint **)(param_2 + 2) = puVar56;
    lVar48 = *(long *)(param_2 + 6);
    *(long *)(param_2 + 6) = lVar48 + 1;
    uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
    if (lVar48 != -1) {
      *(byte *)(puVar56 + 4) = (byte)puVar56[4] | 1;
      puVar56[5] = 0;
      puVar28 = *(uint **)(*(long *)(param_3 + 0xac0) + 0x30);
      if (puVar28 != (uint *)0x0) {
        uVar44 = *(undefined8 *)(*(long *)(param_3 + 0xac0) + 0x28);
        __ZNSt3__119__shared_weak_count4lockEv();
        if (puVar28 != (uint *)0x0) {
          puVar29 = puVar28 + 4;
          do {
            cVar5 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar29,0x10);
            if (bVar21) {
              *(long *)puVar29 = *(long *)puVar29 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar29 = *(uint **)(puVar56 + 0xe);
          *(undefined8 *)(puVar56 + 0xc) = uVar44;
          *(uint **)(puVar56 + 0xe) = puVar28;
          if (puVar29 != (uint *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar56 = puVar28 + 2;
          do {
            lVar48 = *(long *)puVar56;
            cVar5 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar56,0x10);
            if (bVar21) {
              *(long *)puVar56 = lVar48 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar56 = puVar29;
          if (lVar48 == 0) {
            (**(code **)(*(long *)puVar28 + 0x10))(puVar28);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            puVar56 = puVar28;
          }
LAB_10aa30884:
          puVar28 = *(uint **)(param_2 + 4);
joined_r0x00010aa30894:
          do {
            puVar29 = puVar28;
            if (puVar29 == puVar25) goto LAB_10aa30a68;
            if ((puVar29[4] & 1) == 0) {
              puVar30 = *(uint **)(puVar29 + 10);
              if (puVar30 == (uint *)0x0) {
                puVar30 = (uint *)0x0;
LAB_10aa308f8:
                puVar29[5] = 0xffffffff;
                for (puVar56 = *(uint **)(puVar29 + 0x7c); puVar56 != puVar29 + 0x7a;
                    puVar56 = *(uint **)(puVar56 + 2)) {
                  plVar62 = *(long **)(puVar56 + 8);
                  if (plVar62 != (long *)0x0) {
                    __ZNSt3__119__shared_weak_count4lockEv();
                    if (plVar62 != (long *)0x0) {
                      lVar48 = *(long *)(puVar56 + 6);
                      plVar63 = plVar62 + 1;
                      do {
                        lVar27 = *plVar63;
                        cVar5 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                        if (bVar21) {
                          *plVar63 = lVar27 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar27 == 0) {
                        (**(code **)(*plVar62 + 0x10))(plVar62);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
                      }
                      if (lVar48 != 0) {
                        *(undefined8 *)(lVar48 + 0x3a0) = 0xffffffffffffffff;
                        *(undefined8 *)(lVar48 + 0x3a8) = 0;
                      }
                    }
                  }
                }
                for (puVar56 = *(uint **)(puVar29 + 0x88); puVar56 != puVar29 + 0x86;
                    puVar56 = *(uint **)(puVar56 + 2)) {
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
                  plVar62 = *(long **)(puVar56 + 8);
                  if (plVar62 != (long *)0x0) {
                    __ZNSt3__119__shared_weak_count4lockEv();
                    if (plVar62 != (long *)0x0) {
                      lVar48 = *(long *)(puVar56 + 6);
                      if (lVar48 != 0) {
                        *(undefined8 *)(lVar48 + 0x268) = 0xffffffffffffffff;
                        *(undefined8 *)(lVar48 + 0x278) = 0;
                        *(undefined8 *)(lVar48 + 0x288) = 0;
                        *(undefined8 *)(lVar48 + 0x280) = 0;
                      }
                      plVar63 = plVar62 + 1;
                      do {
                        lVar48 = *plVar63;
                        cVar5 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                        if (bVar21) {
                          *plVar63 = lVar48 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar48 == 0) {
                        (**(code **)(*plVar62 + 0x10))(plVar62);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
                      }
                    }
                  }
                }
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
                if (puVar25 == puVar29) goto LAB_10aa32bf0;
                lVar48 = *(long *)puVar29;
                puVar28 = *(uint **)(puVar29 + 2);
                *(uint **)(lVar48 + 8) = puVar28;
                *(long *)puVar28 = lVar48;
                *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + -1;
                FUN_10aa2ec2c(puVar29 + 4);
                __ZdlPv();
                puVar56 = puVar29;
                if (puVar30 == (uint *)0x0) goto joined_r0x00010aa30894;
              }
              else {
                __ZNSt3__119__shared_weak_count4lockEv();
                if ((puVar30 == (uint *)0x0) || (lVar48 = *(long *)(puVar29 + 8), lVar48 == 0))
                goto LAB_10aa308f8;
                if (uVar43 != (uint)*(ulong *)(lVar48 + 0x218)) {
                  *(ulong *)(lVar48 + 0x218) = *(ulong *)(lVar48 + 0x218) & 0xffffffff00000000;
                  *(undefined8 *)(lVar48 + 0x220) = 0;
                  goto LAB_10aa308f8;
                }
                puVar28 = *(uint **)(puVar29 + 2);
                puVar29 = puVar30;
              }
              puVar56 = puVar30 + 2;
              do {
                lVar48 = *(long *)puVar56;
                cVar5 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(puVar56,0x10);
                if (bVar21) {
                  *(long *)puVar56 = lVar48 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              puVar56 = puVar29;
              if (lVar48 == 0) {
                (**(code **)(*(long *)puVar30 + 0x10))(puVar30);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                puVar56 = puVar30;
              }
              goto joined_r0x00010aa30894;
            }
            puVar28 = *(uint **)(puVar29 + 2);
          } while( true );
        }
      }
LAB_10aa329f8:
      FUN_10a043ecc();
    }
    goto LAB_10aa32bf0;
  }
  if (uVar55 >> 0x3a == 0) {
    puVar25 = (uint *)(uVar55 * 0x40);
    __Znwm();
    puStack_318 = puVar25 + uVar55 * 0x10;
    puVar56 = puVar25;
    do {
      puVar56[0] = 0xffffffff;
      puVar56[1] = 0;
      puVar56[4] = 0;
      puVar56[5] = 0;
      puVar56[2] = 0;
      puVar56[3] = 0;
      puVar56[8] = 0;
      puVar56[9] = 0;
      puVar56[6] = 0;
      puVar56[7] = 0;
      puVar56[0xc] = 0;
      puVar56[0xd] = 0;
      puVar56[10] = 0;
      puVar56[0xb] = 0;
      puVar56[0xe] = 0;
      puVar56[0xf] = 0;
      puVar56 = puVar56 + 0x10;
    } while (puVar56 != puStack_318);
    uVar39 = 0;
    uVar60 = (long)ppuStack_338 - (long)ppuStack_348 >> 3;
    lVar57 = 0x38;
    puStack_320 = puVar25;
    puStack_310 = puStack_318;
    do {
      puVar56 = puStack_320;
      uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
      if ((ulong)((long)puStack_318 - (long)puStack_320 >> 6) <= uVar39) goto LAB_10aa32bf0;
      if (uVar39 == 0) {
        uVar42 = 0;
        lVar46 = 0;
      }
      else {
        lVar46 = *(long *)(puStack_350 + uVar39 * 2 + -2);
        uVar42 = *(undefined4 *)(lVar46 + 0x21c);
        *(uint *)(lVar46 + 0x218) = uVar43;
      }
      *(undefined4 *)((long)puStack_320 + lVar57 + -0x38) = uVar42;
      *(long *)((long)puStack_320 + lVar57 + -0x30) = lVar46;
      plVar62 = (long *)((long)puStack_320 + lVar57 + -0x28);
      lVar46 = *plVar62;
      uVar26 = (long)puStack_238 - (long)uStack_240 >> 3;
      if ((ulong)(*(long *)((long)puStack_320 + lVar57 + -0x18) - lVar46 >> 5) < uVar26) {
        if (uVar26 >> 0x3b != 0) {
          FUN_10aa4a958();
          goto LAB_10aa32bf0;
        }
        lVar48 = *(long *)((long)puStack_320 + lVar57 + -0x20);
        uStack_140 = plVar62;
        FUN_10aa4a96c();
        lVar48 = uVar26 + (lVar48 - lVar46);
        lVar46 = (long)ppuVar35 * 0x20;
        ppuVar35 = *(undefined ***)((long)puVar56 + lVar57 + -0x20);
        lVar27 = lVar48 + (*plVar62 - (long)ppuVar35);
        func_0x00010aa4a9a0(*plVar62,ppuVar35,lVar27);
        lVar40 = *plVar62;
        *plVar62 = lVar27;
        fStack_158 = (float)lVar40;
        fStack_154 = (float)((ulong)lVar40 >> 0x20);
        *(long *)((long)puVar56 + lVar57 + -0x20) = lVar48;
        uVar44 = *(undefined8 *)((long)puVar56 + lVar57 + -0x18);
        *(ulong *)((long)puVar56 + lVar57 + -0x18) = uVar26 + lVar46;
        fStack_148 = (float)uVar44;
        fStack_144 = (float)((ulong)uVar44 >> 0x20);
        fStack_160 = fStack_158;
        fStack_15c = fStack_154;
        uStack_150._0_4_ = fStack_158;
        uStack_150._4_4_ = fStack_154;
        FUN_10aa4aaac(&fStack_160);
      }
      plVar62 = (long *)((long)puVar56 + lVar57);
      lVar46 = plVar62[-2];
      if ((ulong)((*plVar62 - lVar46 >> 3) * -0x5555555555555555) < uVar60) {
        if (0xaaaaaaaaaaaaaaa < uVar60) {
          func_0x00010aa4aec0();
          goto LAB_10aa32bf0;
        }
        lVar48 = *(long *)((long)puVar56 + lVar57 + -8);
        uVar26 = uVar60;
        FUN_10aa4aed4();
        lVar46 = uVar26 + (lVar48 - lVar46);
        lVar48 = (long)ppuVar35 * 0x18;
        ppuVar35 = (undefined **)plVar62[-2];
        lVar40 = lVar46 - (*(long *)((long)puVar56 + lVar57 + -8) - (long)ppuVar35);
        _memcpy(lVar40);
        lVar27 = plVar62[-2];
        plVar62[-2] = lVar40;
        *(long *)((long)puVar56 + lVar57 + -8) = lVar46;
        *(ulong *)((long)puVar56 + lVar57) = uVar26 + lVar48;
        if (lVar27 != 0) {
          __ZdlPv();
        }
      }
      uVar39 = uVar39 + 1;
      lVar57 = lVar57 + 0x40;
    } while (uVar55 != uVar39);
    goto LAB_10aa303c8;
  }
  goto LAB_10aa32a3c;
code_r0x00010aa31024:
  lVar40 = *(long *)(puVar45 + uVar39 * 0x10 + 10) + uVar60 * 0x18;
  lVar27 = *(long *)(lVar40 + 8);
  lVar48 = 0;
  if (lVar27 != 0) {
    lVar48 = *(long *)(lVar27 + 0x3a8);
  }
  lVar40 = *(long *)(lVar40 + 0x10);
  lVar27 = 0;
  if (lVar40 != 0) {
    lVar27 = *(long *)(lVar40 + 0x3a8);
  }
  if ((((lVar48 != *(long *)(lVar46 + 0x280)) || (lVar27 != *(long *)(lVar46 + 0x288))) ||
      ((char)puVar31[4] != *(char *)(*(long *)(lVar46 + 0x200) + 0x21))) ||
     (((*(byte *)((long)puVar31 + 0x11) & 1) == 0) != ((*(byte *)(lVar46 + 0x210) & 2) == 0))) {
LAB_10aa31090:
    *(undefined8 *)(lVar46 + 0x268) = 0xffffffffffffffff;
    *(undefined8 *)(lVar46 + 0x280) = 0;
    *(undefined8 *)(lVar46 + 0x288) = 0;
    *(undefined8 *)(lVar46 + 0x278) = 0;
LAB_10aa310a4:
    func_0x0001098350ac(puVar56 + 0x15b8,*(undefined8 *)(puVar31 + 10));
    if (puVar29 == puVar31) goto LAB_10aa32bf0;
    lVar46 = *(long *)puVar31;
    plVar62 = *(long **)(puVar31 + 2);
    *(long **)(lVar46 + 8) = plVar62;
    *plVar62 = lVar46;
    *(long *)(puVar56 + 0x8a) = *(long *)(puVar56 + 0x8a) + -1;
    FUN_10aa4ac14(puVar31 + 4);
    __ZdlPv(puVar31);
  }
  goto joined_r0x00010aa30f88;
LAB_10aa30a68:
  if (lVar57 != 0) {
    lVar57 = 0;
    do {
      lVar48 = *(long *)(puVar45 + lVar57 * 0x10 + 2);
      puVar36 = param_5;
      puVar29 = param_6;
      puVar28 = param_4;
      if (lVar48 == 0) {
        if (*(long *)(param_2 + 6) == 0) goto LAB_10aa32bf0;
        puVar30 = (uint *)(*(long *)(param_2 + 4) + 0x10);
        *(undefined4 *)(*(long *)(param_2 + 4) + 0x18) = 0;
      }
      else {
        puVar30 = *(uint **)(lVar48 + 0x220);
        if (puVar30 == (uint *)0x0) {
          uVar43 = *(uint *)(lVar48 + 0x21c);
          FUN_10aa6981c();
          *(uint **)(puVar56 + 2) = puVar25;
          lVar27 = *(long *)(param_2 + 2);
          *(long *)puVar56 = lVar27;
          *(uint **)(lVar27 + 8) = puVar56;
          *(uint **)(param_2 + 2) = puVar56;
          uVar55 = *(ulong *)(param_2 + 6);
          *(ulong *)(param_2 + 6) = uVar55 + 1;
          uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
          if (0xfffffffffffffffe < uVar55) goto LAB_10aa32bf0;
          puVar56[5] = uVar43;
          FUN_10aa2f8f4(&fStack_160,lVar48);
          plVar62 = (long *)CONCAT44(fStack_154,fStack_158);
          if (plVar62 != (long *)0x0) {
            plVar63 = plVar62 + 2;
            do {
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
              if (bVar21) {
                *plVar63 = *plVar63 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar27 = *(long *)(puVar56 + 10);
          *(ulong *)(puVar56 + 10) = CONCAT44(fStack_154,fStack_158);
          *(ulong *)(puVar56 + 8) = CONCAT44(fStack_15c,fStack_160);
          if (lVar27 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plVar62 != (long *)0x0) {
            plVar63 = plVar62 + 1;
            do {
              lVar27 = *plVar63;
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
              if (bVar21) {
                *plVar63 = lVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar27 == 0) {
              (**(code **)(*plVar62 + 0x10))(plVar62);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
            }
          }
          puVar31 = *(uint **)(*(long *)(param_3 + 0xac0) + 0x30);
          if (puVar31 == (uint *)0x0) goto LAB_10aa329f8;
          uVar44 = *(undefined8 *)(*(long *)(param_3 + 0xac0) + 0x28);
          __ZNSt3__119__shared_weak_count4lockEv();
          if (puVar31 == (uint *)0x0) goto LAB_10aa329f8;
          puVar30 = puVar56 + 4;
          puVar32 = puVar31 + 4;
          do {
            cVar5 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar21) {
              *(long *)puVar32 = *(long *)puVar32 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar32 = *(uint **)(puVar56 + 0xe);
          *(undefined8 *)(puVar56 + 0xc) = uVar44;
          *(uint **)(puVar56 + 0xe) = puVar31;
          if (puVar32 != (uint *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar56 = puVar31 + 2;
          do {
            lVar27 = *(long *)puVar56;
            cVar5 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar56,0x10);
            if (bVar21) {
              *(long *)puVar56 = lVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar56 = puVar32;
          if (lVar27 == 0) {
            (**(code **)(*(long *)puVar31 + 0x10))(puVar31);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            puVar56 = puVar31;
          }
          *(uint **)(lVar48 + 0x220) = puVar30;
        }
        puVar30[2] = *(uint *)(lVar48 + 0x1f0);
        lVar48 = *(long *)(lVar48 + 0x1f8);
        if (lVar48 != 0) {
          puVar28 = (uint *)(lVar48 + 0xe0);
          if (*(long *)(lVar48 + 0x178) != 0) {
            puVar36 = (undefined8 *)(*(long *)(lVar48 + 0x178) + 0xe0);
          }
          if (*(long *)(lVar48 + 0x188) != 0) {
            puVar29 = (uint *)(*(long *)(lVar48 + 0x188) + 0xe0);
          }
        }
      }
      uVar68 = *(undefined8 *)puVar28;
      uVar44 = *(undefined8 *)(puVar28 + 4);
      uVar73 = *(undefined8 *)(puVar28 + 6);
      *(undefined8 *)(puVar30 + 0x36) = *(undefined8 *)(puVar28 + 2);
      *(undefined8 *)(puVar30 + 0x34) = uVar68;
      *(undefined8 *)(puVar30 + 0x3a) = uVar73;
      *(undefined8 *)(puVar30 + 0x38) = uVar44;
      uVar44 = *(undefined8 *)(puVar28 + 0x10);
      uVar73 = *(undefined8 *)(puVar28 + 0x12);
      uVar72 = *(undefined8 *)(puVar28 + 0x16);
      uVar69 = *(undefined8 *)(puVar28 + 0x14);
      uVar68 = *(undefined8 *)(puVar28 + 0xc);
      uVar74 = *(undefined8 *)(puVar28 + 0xe);
      *(undefined8 *)(puVar30 + 0x4c) = *(undefined8 *)(puVar28 + 0x18);
      *(undefined8 *)(puVar30 + 0x46) = uVar73;
      *(undefined8 *)(puVar30 + 0x44) = uVar44;
      *(undefined8 *)(puVar30 + 0x4a) = uVar72;
      *(undefined8 *)(puVar30 + 0x48) = uVar69;
      *(undefined8 *)(puVar30 + 0x42) = uVar74;
      *(undefined8 *)(puVar30 + 0x40) = uVar68;
      uVar44 = *(undefined8 *)(puVar28 + 8);
      *(undefined8 *)(puVar30 + 0x3e) = *(undefined8 *)(puVar28 + 10);
      *(undefined8 *)(puVar30 + 0x3c) = uVar44;
      if (puVar30 + 0x34 != puVar28) {
        puVar30[0x56] = puVar28[0x22];
        puVar56 = puVar30 + 0x4e;
        func_0x00010879ba80(puVar56,*(undefined8 *)(puVar28 + 0x1e),0);
      }
      *(short *)(puVar30 + 0x58) = (short)puVar28[0x24];
      uVar73 = puVar36[1];
      uVar44 = *puVar36;
      puVar30[0x5e] = *(uint *)(puVar36 + 2);
      *(undefined8 *)(puVar30 + 0x5c) = uVar73;
      *(undefined8 *)(puVar30 + 0x5a) = uVar44;
      uVar74 = *(undefined8 *)(puVar29 + 2);
      uVar68 = *(undefined8 *)puVar29;
      uVar44 = *(undefined8 *)(puVar29 + 4);
      uVar73 = *(undefined8 *)(puVar29 + 6);
      *(undefined8 *)(puVar30 + 0x68) = *(undefined8 *)(puVar29 + 8);
      *(undefined8 *)(puVar30 + 0x62) = uVar74;
      *(undefined8 *)(puVar30 + 0x60) = uVar68;
      *(undefined8 *)(puVar30 + 0x66) = uVar73;
      *(undefined8 *)(puVar30 + 100) = uVar44;
      if (puVar30 + 0x60 != puVar29) {
        FUN_10aa3e010(puVar30 + 0x6a,*(long *)(puVar29 + 10),*(long *)(puVar29 + 0xc),
                      *(long *)(puVar29 + 0xc) - *(long *)(puVar29 + 10) >> 4);
        puVar56 = puVar30 + 0x70;
        FUN_10aa3e010();
      }
      bVar3 = (byte)puVar30[0x37];
      bVar51 = bVar3;
      if (7 < bVar3) {
        bVar51 = 8;
      }
      if (bVar3 == 0) {
        bVar51 = 1;
      }
      puVar30[0x2e] = (uint)(0.033333335 / (float)bVar51);
      lVar57 = lVar57 + 1;
    } while (lVar57 != lVar46);
  }
  puVar56 = *(uint **)(param_2 + 4);
  if (puVar56 != puVar25) {
    uVar55 = NEON_fmov(0x3f800000,4);
    fVar86 = 0.0;
    do {
      puVar45 = puStack_320;
      auVar9 = _UNK_10e482b58;
      uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
      if ((long)puStack_318 - (long)puStack_320 == 0) goto LAB_10aa32bf0;
      uVar39 = 0;
      lVar57 = CONCAT44(puVar56[5],*param_2);
      uVar60 = (long)puStack_318 - (long)puStack_320 >> 6;
      puVar28 = puStack_320;
      while (*puVar28 != puVar56[5]) {
        uVar39 = uVar39 + 1;
        puVar28 = puVar28 + 0x10;
        uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
        if (uVar60 == uVar39) goto LAB_10aa32bf0;
      }
      uStack_140 = (long *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
      if (uVar60 <= (uVar39 & 0xffffffff)) goto LAB_10aa32bf0;
      uVar39 = uVar39 & 0xffffffff;
      lVar46 = *(long *)(puStack_320 + uVar39 * 0x10 + 2);
      uVar44 = (undefined8)UNK_10e482b58;
      puVar56[0x12] = 0;
      puVar56[0x13] = 0;
      puVar56[0x10] = 0x3f800000;
      puVar56[0x11] = 0;
      *(long *)(puVar56 + 0x16) = auVar9._8_8_;
      *(undefined8 *)(puVar56 + 0x14) = uVar44;
      auVar10 = _UNK_10e482b68;
      uVar73 = UNK_10e482b68._8_8_;
      *(undefined8 *)(puVar56 + 0x1a) = uVar73;
      *(long *)(puVar56 + 0x18) = auVar10._0_8_;
      puVar56[0x1e] = 0;
      puVar56[0x1f] = 0x3f800000;
      puVar56[0x1c] = 0;
      puVar56[0x1d] = 0;
      puVar56[0x22] = 0;
      puVar56[0x23] = 0;
      puVar56[0x20] = 0x3f800000;
      puVar56[0x21] = 0;
      *(long *)(puVar56 + 0x26) = auVar9._8_8_;
      *(undefined8 *)(puVar56 + 0x24) = uVar44;
      *(undefined8 *)(puVar56 + 0x2a) = uVar73;
      *(long *)(puVar56 + 0x28) = auVar10._0_8_;
      puVar56[0x2e] = 0;
      puVar56[0x2f] = 0x3f800000;
      puVar56[0x2c] = 0;
      puVar56[0x2d] = 0;
      *(ulong *)(puVar56 + 0x30) = uVar55;
      if (lVar46 == 0) {
        pfStack_388 = (float *)0x0;
      }
      else {
        lVar46 = *(long *)(lVar46 + 0x178);
        if ((*(byte *)(lVar46 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(lVar46);
        }
        uVar69 = *(undefined8 *)(lVar46 + 200);
        uVar74 = *(undefined8 *)(lVar46 + 0xc0);
        uVar44 = *(undefined8 *)(lVar46 + 0xd0);
        uVar73 = *(undefined8 *)(lVar46 + 0xd8);
        uVar68 = *(undefined8 *)(lVar46 + 0xe0);
        uVar80 = *(undefined8 *)(lVar46 + 0xf8);
        uVar72 = *(undefined8 *)(lVar46 + 0xf0);
        *(undefined8 *)(puVar56 + 0x1a) = *(undefined8 *)(lVar46 + 0xe8);
        *(undefined8 *)(puVar56 + 0x18) = uVar68;
        *(undefined8 *)(puVar56 + 0x1e) = uVar80;
        *(undefined8 *)(puVar56 + 0x1c) = uVar72;
        *(undefined8 *)(puVar56 + 0x12) = uVar69;
        *(undefined8 *)(puVar56 + 0x10) = uVar74;
        *(undefined8 *)(puVar56 + 0x16) = uVar73;
        *(undefined8 *)(puVar56 + 0x14) = uVar44;
        if ((*(byte *)(lVar46 + 0x2a) >> 6 & 1) != 0) {
          func_0x00010a3e933c(lVar46);
        }
        pfStack_388 = (float *)(puVar56 + 0x20);
        uVar69 = *(undefined8 *)(lVar46 + 0x108);
        uVar74 = *(undefined8 *)(lVar46 + 0x100);
        uVar44 = *(undefined8 *)(lVar46 + 0x110);
        uVar73 = *(undefined8 *)(lVar46 + 0x118);
        uVar68 = *(undefined8 *)(lVar46 + 0x120);
        uVar80 = *(undefined8 *)(lVar46 + 0x138);
        uVar72 = *(undefined8 *)(lVar46 + 0x130);
        *(undefined8 *)(puVar56 + 0x2a) = *(undefined8 *)(lVar46 + 0x128);
        *(undefined8 *)(puVar56 + 0x28) = uVar68;
        *(undefined8 *)(puVar56 + 0x2e) = uVar80;
        *(undefined8 *)(puVar56 + 0x2c) = uVar72;
        *(undefined8 *)(puVar56 + 0x22) = uVar69;
        *(undefined8 *)pfStack_388 = uVar74;
        *(undefined8 *)(puVar56 + 0x26) = uVar73;
        *(undefined8 *)(puVar56 + 0x24) = uVar44;
        fVar65 = (float)*(undefined8 *)(puVar56 + 0x11);
        fVar78 = (float)((ulong)*(undefined8 *)(puVar56 + 0x11) >> 0x20);
        fVar65 = (float)puVar56[0x10] * (float)puVar56[0x10] + fVar65 * fVar65 + fVar78 * fVar78;
        fVar75 = SQRT(fVar65);
        fVar78 = fVar86;
        if (fVar65 != 0.0) {
          fVar78 = 1.0 / fVar75;
        }
        puVar56[0x30] = (uint)fVar75;
        puVar56[0x31] = (uint)fVar78;
      }
      puVar28 = puVar56 + 0x80;
      puVar29 = *(uint **)(puVar56 + 0x7c);
      while (puVar30 = puVar29, puVar30 != puVar56 + 0x7a) {
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
        puVar29 = *(uint **)(puVar30 + 2);
        plVar62 = *(long **)(puVar30 + 8);
        if (plVar62 == (long *)0x0) goto LAB_10aa30f10;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar62 == (long *)0x0) goto LAB_10aa30f10;
        lVar46 = *(long *)(puVar30 + 6);
        plVar63 = plVar62 + 1;
        do {
          lVar48 = *plVar63;
          cVar5 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
          if (bVar21) {
            *plVar63 = lVar48 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar48 == 0) {
          (**(code **)(*plVar62 + 0x10))(plVar62);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
          if (lVar46 != 0) goto LAB_10aa30eec;
          goto LAB_10aa30f10;
        }
        if (lVar46 == 0) goto LAB_10aa30f10;
LAB_10aa30eec:
        if (*(long *)(lVar46 + 0x3a8) == 0) goto LAB_10aa30f10;
        if (*(long *)(lVar46 + 0x3a0) != lVar57) {
          *(undefined8 *)(lVar46 + 0x3a0) = 0xffffffffffffffff;
          *(undefined8 *)(lVar46 + 0x3a8) = 0;
LAB_10aa30f10:
          *(byte *)(puVar30 + 4) = (byte)puVar30[4] | 1;
          if ((puVar30 != puVar28) && (puVar31 = *(uint **)(puVar30 + 2), puVar31 != puVar28)) {
            lVar46 = *(long *)puVar30;
            *(uint **)(lVar46 + 8) = puVar31;
            *(long *)puVar31 = lVar46;
            lVar46 = *(long *)(puVar56 + 0x80);
            *(uint **)(lVar46 + 8) = puVar30;
            *(long *)puVar30 = lVar46;
            *(uint **)(puVar56 + 0x80) = puVar30;
            *(uint **)(puVar30 + 2) = puVar28;
            *(long *)(puVar56 + 0x7e) = *(long *)(puVar56 + 0x7e) + -1;
            *(long *)(puVar56 + 0x84) = *(long *)(puVar56 + 0x84) + 1;
          }
        }
      }
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
      puVar29 = puVar56 + 0x86;
      puVar30 = *(uint **)(puVar56 + 0x88);
joined_r0x00010aa30f88:
      puVar31 = puVar30;
      if (puVar31 != puVar29) {
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
        puVar30 = *(uint **)(puVar31 + 2);
        plVar62 = *(long **)(puVar31 + 8);
        if (plVar62 == (long *)0x0) goto LAB_10aa310a4;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar62 == (long *)0x0) goto LAB_10aa310a4;
        lVar46 = *(long *)(puVar31 + 6);
        plVar63 = plVar62 + 1;
        do {
          lVar48 = *plVar63;
          cVar5 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
          if (bVar21) {
            *plVar63 = lVar48 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar48 == 0) {
          (**(code **)(*plVar62 + 0x10))(plVar62);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
          if (lVar46 != 0) goto LAB_10aa30fe4;
          goto LAB_10aa310a4;
        }
        if (lVar46 == 0) goto LAB_10aa310a4;
LAB_10aa30fe4:
        if ((*(long *)(lVar46 + 0x278) == 0) || (*(long *)(lVar46 + 0x268) != lVar57))
        goto LAB_10aa31090;
        uVar60 = (ulong)*(uint *)(lVar46 + 0x270);
        uVar26 = (*(long *)(puVar45 + uVar39 * 0x10 + 0xc) - *(long *)(puVar45 + uVar39 * 0x10 + 10)
                 >> 3) * -0x5555555555555555;
        if (uVar60 <= uVar26 && uVar26 - uVar60 != 0) goto code_r0x00010aa31024;
        goto LAB_10aa32bf0;
      }
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
      if (*(long *)(puVar56 + 0x84) != 0) {
        uStack_1e0 = *(ulong *)(param_3 + 0xac0);
        fStack_160 = 1.6041819e-32;
        fStack_158 = 7.723812e-29;
        if (uStack_1e0 != 0) {
          fStack_160 = 1.6041854e-32;
          fStack_158 = 7.7238265e-29;
          uStack_150 = &uStack_1e0;
        }
        fStack_154 = 1.4013e-45;
        fStack_15c = 1.4013e-45;
        for (puVar30 = *(uint **)(puVar56 + 0x82); puVar30 != puVar28;
            puVar30 = *(uint **)(puVar30 + 2)) {
          (*(code *)CONCAT44(fStack_15c,fStack_160))(puVar56[5],puVar30 + 0x1c,&fStack_160);
          uVar43 = puVar30[0x67];
          puVar30[0x67] = uVar43 | 2;
          (**(code **)(*(long *)(puVar56 + 0x15b8) + 0xc0))(puVar56 + 0x15b8,puVar30 + 0x1c);
          puVar30[0x67] = uVar43;
          plVar62 = *(long **)(puVar30 + 8);
          if (plVar62 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            if (plVar62 != (long *)0x0) {
              lVar46 = *(long *)(puVar30 + 6);
              if (lVar46 != 0) {
                *(byte *)(lVar46 + 0x370) = *(byte *)(lVar46 + 0x370) | 3;
              }
              plVar63 = plVar62 + 1;
              do {
                lVar46 = *plVar63;
                cVar5 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar63,0x10);
                if (bVar21) {
                  *plVar63 = lVar46 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar46 == 0) {
                (**(code **)(*plVar62 + 0x10))(plVar62);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar62);
              }
            }
          }
        }
        FUN_10aa4ac5c(puVar28);
        (**(code **)CONCAT44(fStack_154,fStack_158))(&fStack_158);
      }
      fVar71 = fStack_220;
      fVar79 = fStack_224;
      fVar75 = fStack_228;
      fVar78 = fStack_22c;
      puVar36 = *(undefined8 **)(puVar45 + uVar39 * 0x10 + 4);
      puVar53 = *(undefined8 **)(puVar45 + uVar39 * 0x10 + 6);
      *(byte *)(puVar56 + 4) = (byte)puVar56[4] & 0xfd;
      fStack_22c = 1.0;
      fVar65 = fStack_22c;
      fStack_228 = 0.0;
      fVar11 = fStack_228;
      fStack_224 = 0.0;
      fVar12 = fStack_224;
      fStack_220 = 0.0;
      fVar13 = fStack_220;
      fStack_22c = fVar78;
      fStack_228 = fVar75;
      fStack_224 = fVar79;
      fStack_220 = fVar71;
      if (puVar53 != puVar36) {
        puVar28 = puVar56 + 0x38;
        uStack_3d0 = 0;
        puStack_3d8 = puVar28;
        puStack_3a8 = puVar28;
        do {
          plVar62 = (long *)*puVar36;
          if (plVar62 == (long *)0x0) {
LAB_10aa3129c:
            pbVar41 = (byte *)0x1137ec070;
          }
          else {
            plVar63 = plVar62;
            (**(code **)(*plVar62 + 0xf8))(plVar62,0x3f7860c77ce5b69d);
            if (plVar63 == (long *)0x0) goto LAB_10aa3129c;
            pbVar41 = (byte *)(plVar63 + 0x77);
            if ((*(byte *)(plVar63[0x4a] + 0x3d) & 1) != 0) {
              pbVar41 = (byte *)0x1137ec070;
            }
          }
          bVar51 = *pbVar41;
          bVar21 = (bVar51 & 1) == 0;
          FUN_10aa2e2ac(&plStack_268,plVar62[0x2f],pfStack_388);
          bVar22 = (bVar51 & 1) != 0;
          bVar3 = *(byte *)(plVar62 + 0x54);
          uVar60 = 0xffffffff00000001;
          if ((*pbVar41 & 1) != 0) {
            uVar60 = 0xfffffffd00000002;
          }
          if ((bVar3 & 4) != 0) {
            uVar60 = 0x4000000080;
          }
          bVar23 = (bVar3 & 8) != 0;
          lVar46 = plVar62[0x52];
          ppuStack_348 = (undefined **)(puVar56 + 0x5e);
          puVar30 = puVar56 + 100;
          if (lVar46 == 0) {
            if (plVar62[0x4e] == 0) {
              lVar48 = plVar62[0x50];
            }
            else {
              lVar48 = plVar62[0x50];
              ppuStack_348 = (undefined **)(plVar62[0x4e] + 0xe0);
            }
            puStack_368 = puVar28;
            if (lVar48 != 0) goto LAB_10aa313a4;
          }
          else {
            puStack_368 = (uint *)(lVar46 + 0xe0);
            if (plVar62[0x4e] == 0) {
              if (*(long *)(lVar46 + 0x178) != 0) {
                ppuStack_348 = (undefined **)(*(long *)(lVar46 + 0x178) + 0xe0);
              }
            }
            else {
              ppuStack_348 = (undefined **)(plVar62[0x4e] + 0xe0);
            }
            lVar48 = plVar62[0x50];
            if (lVar48 == 0) {
              if (*(long *)(lVar46 + 0x188) != 0) {
                puVar30 = (uint *)(*(long *)(lVar46 + 0x188) + 0xe0);
              }
            }
            else {
LAB_10aa313a4:
              puVar30 = (uint *)(lVar48 + 0xe0);
            }
          }
          if ((bVar3 >> 1 & 1) == 0) {
            lVar46 = plVar62[0x2d];
            FUN_10a909124();
            if ((lVar46 == 0) || (*(long *)(lVar46 + 0x260) == 0)) goto LAB_10aa313fc;
            lVar46 = *(long *)(*(long *)(lVar46 + 0x260) + 0xe0);
            bVar24 = false;
            if (lVar46 != 0) {
              lVar48 = lVar46;
              ___dynamic_cast(lVar46,&PTR_DAT_110bb37d0,&PTR_DAT_110c5d0b0,0);
              if (lVar48 == 0) {
                ___dynamic_cast(lVar46,&PTR_DAT_110bb37d0,&PTR_DAT_110c1f000,0);
                bVar24 = lVar46 != 0;
              }
              else {
                bVar24 = true;
              }
            }
          }
          else {
LAB_10aa313fc:
            bVar24 = false;
          }
          puVar58 = uStack_150;
          if (plVar62[0x4a] == 0) {
            bVar8 = false;
            uVar26 = 0;
            uStack_38c = 0;
          }
          else {
            bVar8 = false;
            if (((*(byte *)(plVar62 + 0x54) >> 1 & 1) != 0) || (bVar24)) {
              uVar26 = 0;
              uStack_38c = 0;
            }
            else {
              uVar26 = 0;
              uStack_38c = 0;
              if ((*(byte *)(plVar62[0x4a] + 0x3c) & 0xfd) == 1) {
                uVar26 = plVar62[0x2d];
                puStack_3a8 = (uint *)0x1;
                FUN_10aa199c8(uVar26,1,0x167 < *(int *)(*(long *)(plVar62[0x2e] + 0xa20) + 0x18));
                uStack_3d0 = uVar26 >> 8 & 0xffffff;
                puStack_3d8 = (uint *)(uVar26 >> 0x20);
                uStack_38c = (uint)uVar26 & 0xff;
                bVar8 = true;
                uVar26 = (ulong)puStack_3a8 >> 0x20;
                puVar58 = uStack_150;
              }
            }
          }
          fVar84 = uStack_140._4_4_;
          fVar83 = (float)uStack_140;
          fVar79 = fStack_144;
          fVar78 = fStack_148;
          pbVar54 = (byte *)plVar62[0x75];
          iVar66 = (int)uStack_3d0;
          fVar37 = SUB84(puStack_3d8,0);
          fVar38 = SUB84(puStack_3a8,0);
          uStack_150._0_4_ = 0.0;
          uVar42 = (float)uStack_150;
          uStack_150._4_4_ = 1.0;
          uVar14 = uStack_150._4_4_;
          fStack_148 = 0.0;
          fVar75 = fStack_148;
          fStack_144 = 0.0;
          fVar71 = fStack_144;
          uStack_140._0_4_ = 0.0;
          fVar15 = (float)uStack_140;
          uStack_140._4_4_ = 0.0;
          fVar16 = uStack_140._4_4_;
          fStack_148 = fVar78;
          fStack_144 = fVar79;
          uStack_140._0_4_ = fVar83;
          uStack_140._4_4_ = fVar84;
          uStack_150 = puVar58;
          if (pbVar54 == (byte *)0x0) {
            FUN_10aa2effc(&uStack_290,puVar36,pbVar41,&plStack_268,pfStack_388);
            plVar63 = uStack_290;
            FUN_10aa28324(&uStack_1e0,uStack_290 + 2,&plStack_268);
            fVar78 = 0.0;
            if (((bVar51 & 1) == 0) && (fVar78 = fStack_288, (*pbVar41 >> 1 & 1) != 0)) {
              fVar78 = *(float *)(pbVar41 + 4);
            }
            plVar50 = (long *)0x410;
            __Znwm();
            plVar50[3] = 0;
            plVar50[4] = 0;
            *plVar50 = 0;
            plVar50[1] = 0;
            *(undefined1 *)(plVar50 + 2) = 0;
            uStack_290 = (long *)0x0;
            plVar50[5] = (long)plVar63;
            plVar50[6] = uStack_1e0;
            *(float *)(plVar50 + 7) = fStack_1d8;
            *(undefined1 *)((long)plVar50 + 0x3c) = 0;
            *(undefined1 *)(plVar50 + 9) = 0;
            pfVar47 = (float *)((long)plVar50 + 0x4c);
            pfVar47[0] = 0.0;
            pfVar47[1] = 0.0;
            *(undefined8 *)((long)plVar50 + 0x5c) = 0;
            *(undefined8 *)((long)plVar50 + 0x54) = 0;
            *(undefined4 *)((long)plVar50 + 100) = 0;
            fVar79 = fVar78 * 0.0001;
            uStack_100 = CONCAT44((float)((ulong)plVar63[6] >> 0x20) * fVar79,
                                  (float)plVar63[6] * fVar79);
            uStack_f8 = (ulong)(uint)(*(float *)(plVar63 + 7) * fVar79);
            fStack_158 = 0.0;
            fStack_154 = 0.0;
            uStack_110 = (undefined4)plVar63[1];
            uStack_10c = (undefined4)((ulong)plVar63[1] >> 0x20);
            uStack_e8 = 0x3f00000000000000;
            uStack_f0 = 0;
            uStack_d8 = 0x3f4ccccd00000000;
            uStack_e0 = 0;
            uStack_d0 = 0x3f800000;
            uStack_120 = CONCAT44((float)uStack_1c0 * 0.01,fStack_1c4 * 0.01);
            uStack_118 = (ulong)(uint)(uStack_1c0._4_4_ * 0.01);
            fVar79 = 2.0 / (fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0 +
                           fStack_1cc * fStack_1cc + fStack_1c8 * fStack_1c8);
            fVar84 = fVar79 * fStack_1d0;
            fVar83 = fVar79 * fStack_1cc;
            fVar85 = fVar79 * fStack_1d4 * fStack_1c8;
            fVar79 = fVar79 * fStack_1d4 * fStack_1d4;
            uStack_150._0_4_ = 1.0 - (fVar84 * fStack_1d0 + fVar83 * fStack_1cc);
            fVar76 = fVar84 * fStack_1d4 - fVar83 * fStack_1c8;
            fStack_148 = fVar83 * fStack_1d4 + fVar84 * fStack_1c8;
            uStack_140._0_4_ = fVar84 * fStack_1d4 + fVar83 * fStack_1c8;
            uStack_140._4_4_ = 1.0 - (fVar79 + fVar83 * fStack_1cc);
            uStack_138 = (ulong)(uint)(fVar83 * fStack_1d0 - fVar85);
            uStack_130 = CONCAT44(fVar83 * fStack_1d0 + fVar85,
                                  fVar83 * fStack_1d4 - fVar84 * fStack_1c8);
            fStack_144 = 0.0;
            uStack_150._4_4_ =
                 (float)(CONCAT17((char)((uint)fVar76 >> 0x18),
                                  CONCAT16((char)((uint)fVar76 >> 0x10),
                                           CONCAT15((char)((uint)fVar76 >> 8),
                                                    CONCAT14(SUB41(fVar76,0),(float)uStack_150))))
                        >> 0x20);
            uStack_128 = (ulong)(uint)(1.0 - (fVar79 + fVar84 * fStack_1d0));
            fStack_160 = fVar78;
            func_0x000109837d1c(plVar50 + 0xe,&fStack_160);
            plVar50[0x74] = 0;
            plVar50[0x71] = 0;
            plVar50[0x70] = 0;
            plVar50[0x73] = 0;
            plVar50[0x72] = 0;
            plVar50[0x6f] = 0;
            plVar50[0x6e] = 0;
            *(undefined4 *)(plVar50 + 0x75) = 0x3f800000;
            *(undefined2 *)(plVar50 + 0x76) = 0;
            plVar50[0x7e] = 0;
            plVar50[0x7d] = 0;
            plVar50[0x80] = 0;
            plVar50[0x7f] = 0;
            plVar50[0x7a] = 0;
            plVar50[0x79] = 0;
            plVar50[0x7c] = 0;
            plVar50[0x7b] = 0;
            plVar50[0x78] = 0;
            plVar50[0x77] = 0;
            *(undefined4 *)((long)plVar50 + 0x19c) = 0;
            plVar50[1] = (long)(puVar56 + 0x7a);
            lVar46 = *(long *)(puVar56 + 0x7a);
            *plVar50 = lVar46;
            *(long **)(lVar46 + 8) = plVar50;
            *(long **)(puVar56 + 0x7a) = plVar50;
            uVar77 = *(ulong *)(puVar56 + 0x7e);
            *(ulong *)(puVar56 + 0x7e) = uVar77 + 1;
            if (0xfffffffffffffffe < uVar77) goto LAB_10aa32bf0;
            FUN_10aa29550(&fStack_160,plVar62);
            plVar63 = (long *)CONCAT44(fStack_154,fStack_158);
            if (plVar63 != (long *)0x0) {
              plVar64 = plVar63 + 2;
              do {
                cVar5 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                if (bVar21) {
                  *plVar64 = *plVar64 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar46 = plVar50[4];
            plVar50[4] = CONCAT44(fStack_154,fStack_158);
            plVar50[3] = CONCAT44(fStack_15c,fStack_160);
            if (lVar46 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plVar63 != (long *)0x0) {
              plVar64 = plVar63 + 1;
              do {
                lVar46 = *plVar64;
                cVar5 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar64,0x10);
                if (bVar21) {
                  *plVar64 = lVar46 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar46 == 0) {
                (**(code **)(*plVar63 + 0x10))(plVar63);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar63);
              }
            }
            uStack_138 = 0x3f800000;
            uStack_130 = 0;
            uStack_128 = 0;
            fStack_160 = fVar65;
            fStack_15c = fVar11;
            fStack_158 = fVar12;
            fStack_154 = fVar13;
            uStack_150._0_4_ = (float)uVar42;
            uStack_150._4_4_ = (float)uVar14;
            fStack_148 = fVar75;
            fStack_144 = fVar71;
            uStack_140._0_4_ = fVar15;
            uStack_140._4_4_ = fVar16;
            (**(code **)(**(long **)(plVar50[5] + 8) + 0x10))
                      (*(long **)(plVar50[5] + 8),&fStack_160,&uStack_240,&plStack_1a0);
            fVar75 = SUB84(plStack_1a0,0) - (float)uStack_240;
            fVar78 = (float)((ulong)plStack_1a0 >> 0x20) - uStack_240._4_4_;
            if (fStack_198 - puStack_238._0_4_ <= fVar78) {
              fVar78 = fStack_198 - puStack_238._0_4_;
            }
            if (fVar78 <= fVar75) {
              fVar75 = fVar78;
            }
            *pfVar47 = fVar75;
            func_0x000109834ce0(puVar56 + 0x15b8,plVar50 + 0xe,uVar60,uVar60 >> 0x20);
            plVar50[0x32] = (long)(plVar50 + 2);
            *(undefined8 *)((long)plVar50 + 700) = 0x3f8000003da3d70a;
            FUN_10aa2f988(plVar50 + 0x6e,*(undefined8 *)(plVar62[0x2d] + 0x130),
                          *(undefined8 *)(plVar62[0x2d] + 0x138),puStack_368);
            FUN_10aa2edb0(plVar50 + 0x76);
            if ((bVar51 & 1) != 0) {
              *(uint *)(plVar50 + 0x2b) = *(uint *)(plVar50 + 0x2b) | 2;
              if ((*(uint *)(plVar50 + 0x2d) & 0xfffffffe) != 4) {
                *(undefined4 *)(plVar50 + 0x2d) = 1;
              }
              *(undefined4 *)((long)plVar50 + 0x16c) = 0;
            }
            plVar62[0x75] = (long)(plVar50 + 2);
            plVar62[0x74] = lVar57;
            if (bVar8) {
              *(uint *)((long)plVar50 + 0x3c) = uStack_38c | iVar66 << 8;
              *(float *)(plVar50 + 8) = fVar37;
              *(float *)((long)plVar50 + 0x44) = fVar38;
              *(byte *)(plVar50 + 9) = (byte)uVar26;
            }
            if (uStack_290 != (long *)0x0) {
              (**(code **)(*uStack_290 + 8))();
            }
            uVar43 = 0;
          }
          else {
            FUN_10aa28324(&uStack_290,*(long *)(pbVar54 + 0x18) + 0x10,&plStack_268);
            func_0x00010980adc4(pbVar54 + 0x70,&fStack_160);
            fStack_2ac = fStack_160;
            fStack_2a8 = fStack_15c;
            fStack_2a4 = fStack_158;
            fStack_2a0 = fStack_154;
            if (fStack_154 * fStack_278 + fStack_160 * fStack_284 +
                fStack_15c * fStack_280 + fStack_158 * fStack_27c < 0.0) {
              fStack_2a0 = -fStack_154;
              fStack_2ac = -fStack_160;
              fStack_2a8 = -fStack_15c;
              fStack_2a4 = -fStack_158;
            }
            iVar70 = 0;
            fStack_294 = *(float *)(pbVar54 + 0xa8) * 100.0;
            uVar44 = *(undefined8 *)(pbVar54 + 0x20);
            fStack_2b0 = *(float *)(pbVar54 + 0x28);
            fVar76 = (float)*(undefined8 *)(pbVar54 + 0xa0) * 100.0;
            fVar78 = (float)((ulong)*(undefined8 *)(pbVar54 + 0xa0) >> 0x20) * 100.0;
            uStack_29c = CONCAT44(fVar78,fVar76);
            uStack_2d8 = CONCAT44(fStack_284,fStack_288);
            uStack_2d0 = CONCAT44(fStack_27c,fStack_280);
            plStack_2e0 = uStack_290;
            fStack_2c8 = fStack_278;
            fStack_2c4 = fStack_274;
            fVar76 = fStack_274 - fVar76;
            fVar78 = fStack_270 - fVar78;
            fStack_2c0 = fStack_270;
            fStack_2bc = fStack_26c;
            fVar79 = fStack_26c - fStack_294;
            fVar83 = fStack_2ac - fStack_284;
            fVar84 = fStack_2a8 - fStack_280;
            fVar85 = fStack_2a4 - fStack_27c;
            if (fVar83 < 0.0) {
              fVar83 = -fVar83;
            }
            if (fVar84 < 0.0) {
              fVar84 = -fVar84;
            }
            if (fVar85 < 0.0) {
              fVar85 = -fVar85;
            }
            fStack_160 = (float)CONCAT31(fStack_160._1_3_,1);
            uStack_1e0 = CONCAT71(uStack_1e0._1_7_,1);
            uStack_240 = (uint *)CONCAT71(uStack_240._1_7_,1);
            bVar18 = ABS(fStack_2a0 - fStack_278) < 0.001;
            do {
              if (iVar70 == 1) {
                pfVar47 = (float *)&uStack_1e0;
                fVar82 = fVar84;
              }
              else if (iVar70 == 2) {
                pfVar47 = (float *)&uStack_240;
                fVar82 = fVar85;
              }
              else {
                if (iVar70 == 3) goto LAB_10aa3163c;
                pfVar47 = &fStack_160;
                fVar82 = fVar83;
              }
              *(bool *)pfVar47 = fVar82 < 0.001;
              iVar70 = iVar70 + 1;
            } while (iVar70 != 4);
            bVar18 = true;
LAB_10aa3163c:
            if (((uint)fStack_160 & 1) == 0) {
              bVar3 = 0;
            }
            else {
              bVar3 = 0;
              if ((uStack_1e0 & 1) != 0) {
                bVar3 = bVar18 & (byte)uStack_240;
              }
            }
            iVar70 = 0;
            if (fVar76 < 0.0) {
              fVar76 = -fVar76;
            }
            if (fVar78 < 0.0) {
              fVar78 = -fVar78;
            }
            if (fVar79 < 0.0) {
              fVar79 = -fVar79;
            }
            bVar18 = true;
            do {
              if (bVar18 == false) {
                bVar18 = false;
              }
              else {
                fVar83 = fVar76;
                if (iVar70 == 1) {
                  fVar83 = fVar78;
                }
                fVar84 = fVar79;
                if (iVar70 != 2) {
                  fVar84 = fVar83;
                }
                bVar18 = fVar84 < 0.01;
              }
              iVar70 = iVar70 + 1;
            } while (iVar70 != 3);
            iVar70 = 0;
            uStack_2b8._0_4_ = (float)uVar44;
            uStack_2b8._4_4_ = (float)((ulong)uVar44 >> 0x20);
            uStack_2b8._0_4_ = (float)uStack_2b8 - (float)uStack_290;
            uStack_2b8._4_4_ = uStack_2b8._4_4_ - uStack_290._4_4_;
            fVar78 = fStack_2b0 - fStack_288;
            if ((float)uStack_2b8 < 0.0) {
              uStack_2b8._0_4_ = -(float)uStack_2b8;
            }
            if (uStack_2b8._4_4_ < 0.0) {
              uStack_2b8._4_4_ = -uStack_2b8._4_4_;
            }
            fVar79 = -fVar78;
            if (fVar78 < 0.0) {
              fVar78 = fVar79;
            }
            bVar19 = true;
            do {
              if (bVar19 == false) {
                bVar19 = false;
              }
              else {
                fVar83 = (float)uStack_2b8;
                if (iVar70 == 1) {
                  fVar83 = uStack_2b8._4_4_;
                }
                fVar79 = fVar78;
                if (iVar70 != 2) {
                  fVar79 = fVar83;
                }
                bVar19 = fVar79 < 0.01;
              }
              iVar70 = iVar70 + 1;
            } while (iVar70 != 3);
            uStack_2b8 = uVar44;
            if (bVar8) {
              if (((uint)uVar26 & 1) == (uint)pbVar54[0x38]) {
                if ((uVar26 & 1) == 0) goto LAB_10aa3185c;
                if ((pbVar54[0x38] & 1) != 0) {
                  iVar70 = 0;
                  fVar78 = (float)(uStack_38c | iVar66 << 8) - *(float *)(pbVar54 + 0x2c);
                  fVar83 = fVar37 - *(float *)(pbVar54 + 0x30);
                  fVar84 = fVar38 - *(float *)(pbVar54 + 0x34);
                  if (fVar78 < 0.0) {
                    fVar78 = -fVar78;
                  }
                  if (fVar83 < 0.0) {
                    fVar83 = -fVar83;
                  }
                  fVar79 = -fVar84;
                  if (fVar84 < 0.0) {
                    fVar84 = fVar79;
                  }
                  bVar20 = true;
                  do {
                    if (bVar20) {
                      fVar85 = fVar78;
                      if (iVar70 == 1) {
                        fVar85 = fVar83;
                      }
                      fVar79 = fVar84;
                      if (iVar70 != 2) {
                        fVar79 = fVar85;
                      }
                      bVar20 = fVar79 < 0.01;
                    }
                    else {
                      bVar20 = false;
                    }
                    iVar70 = iVar70 + 1;
                  } while (iVar70 != 3);
                  bVar20 = (bool)(bVar20 ^ 1);
                  goto LAB_10aa31860;
                }
                goto LAB_10aa32bf0;
              }
              FUN_10aa2effc(&plStack_1a0,puVar36,pbVar41,&plStack_268,pfStack_388);
LAB_10aa318a8:
              uVar43 = *(uint *)(pbVar54 + 0x18c);
              *(uint *)(pbVar54 + 0x18c) = uVar43 | 2;
              (**(code **)(*(long *)(puVar56 + 0x15b8) + 0xc0))(puVar56 + 0x15b8,pbVar54 + 0x60);
              plVar63 = plStack_1a0;
              *(uint *)(pbVar54 + 0x18c) = uVar43;
              plVar50 = (long *)plStack_1a0[1];
              *(undefined4 *)(pbVar54 + 0x28) = uStack_260;
              *(long **)(pbVar54 + 0x20) = plStack_268;
              uStack_138 = 0x3f800000;
              uStack_130 = 0;
              uStack_128 = 0;
              fStack_160 = fVar65;
              fStack_15c = fVar11;
              fStack_158 = fVar12;
              fStack_154 = fVar13;
              uStack_150._0_4_ = (float)uVar42;
              uStack_150._4_4_ = (float)uVar14;
              fStack_148 = fVar75;
              fStack_144 = fVar71;
              uStack_140._0_4_ = fVar15;
              uStack_140._4_4_ = fVar16;
              (**(code **)(*plVar50 + 0x10))(plVar50,&fStack_160,&uStack_1e0,&uStack_240);
              fVar78 = SUB84(uStack_240,0) - (float)uStack_1e0;
              fVar75 = (float)((ulong)uStack_240 >> 0x20) - uStack_1e0._4_4_;
              fVar71 = SUB84(puStack_238,0) - fStack_1d8;
              if (fVar71 <= fVar75) {
                fVar75 = fVar71;
              }
              if (fVar75 <= fVar78) {
                fVar78 = fVar75;
              }
              *(float *)(pbVar54 + 0x3c) = fVar78;
              *(int *)(pbVar54 + 0x1c8) = *(int *)(pbVar54 + 0x1c8) + 1;
              *(long **)(pbVar54 + 0x130) = plVar50;
              *(long **)(pbVar54 + 0x140) = plVar50;
              plStack_1a0 = (long *)0x0;
              plVar50 = *(long **)(pbVar54 + 0x18);
              *(long **)(pbVar54 + 0x18) = plVar63;
              if (plVar50 != (long *)0x0) {
                (**(code **)(*plVar50 + 8))();
              }
              if ((bVar51 & 1) == 0) {
                fVar78 = fStack_198;
                if ((*pbVar41 & 1) != 0) {
                  fVar78 = 0.0;
                }
                auVar6 = *(undefined1 (*) [12])(*(long *)(pbVar54 + 0x18) + 0x30);
                fStack_158 = *(float *)(pbVar41 + 4);
                if ((*pbVar41 & 3) != 2) {
                  fStack_158 = fVar78;
                }
                fStack_158 = fStack_158 * 0.0001;
                fStack_160 = auVar6._0_4_ * fStack_158;
                fStack_15c = auVar6._4_4_ * fStack_158;
                fStack_158 = auVar6._8_4_ * fStack_158;
                fStack_154 = 0.0;
                func_0x000109838028(pbVar54 + 0x60,&fStack_160);
              }
              func_0x000109834ce0(puVar56 + 0x15b8,pbVar54 + 0x60,uVar60,uVar60 >> 0x20);
              uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
              if (bVar8) {
                *(uint *)(pbVar54 + 0x2c) = uStack_38c | iVar66 << 8;
                *(float *)(pbVar54 + 0x30) = fVar37;
                *(float *)(pbVar54 + 0x34) = fVar38;
                pbVar54[0x38] = (byte)uVar26;
                uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,(float)uStack_150);
              }
            }
            else {
LAB_10aa3185c:
              bVar20 = false;
LAB_10aa31860:
              if (((bVar19 ^ 1U) != 0 || bVar20) || bVar24) {
                FUN_10aa2effc(&plStack_1a0,puVar36,pbVar41,&plStack_268,pfStack_388);
                if (((bVar19 ^ 1U) != 0 || bVar20) ||
                   (1.0 <= ABS(*(float *)(plStack_1a0 + 2) -
                               *(float *)(*(long *)(pbVar54 + 0x18) + 0x10)))) goto LAB_10aa318a8;
                (**(code **)(*plStack_1a0 + 8))();
              }
            }
            if (bVar23 && bVar22) {
              bVar4 = *pbVar54;
              if ((bVar3 & bVar18) == 0) {
                if ((bVar4 >> 1 & 1) == 0) {
                  pbVar54[0x40] = 0;
                  pbVar54[0x41] = 0;
                  pbVar54[0x42] = 0;
                  pbVar54[0x43] = 0;
                  pbVar54[0x44] = 0;
                  pbVar54[0x45] = 0;
                  pbVar54[0x46] = 0;
                  pbVar54[0x47] = 0;
                  pbVar54[0x48] = 0;
                  pbVar54[0x49] = 0;
                  pbVar54[0x4a] = 0;
                  pbVar54[0x4b] = 0;
                  pbVar54[0x4c] = 0;
                  pbVar54[0x4d] = 0;
                  pbVar54[0x4e] = 0;
                  pbVar54[0x4f] = 0;
                  pbVar54[0x50] = 0;
                  pbVar54[0x51] = 0;
                  pbVar54[0x52] = 0;
                  pbVar54[0x53] = 0;
                  pbVar54[0x54] = 0;
                  pbVar54[0x55] = 0;
                  pbVar54[0x56] = 0;
                  pbVar54[0x57] = 0;
                  *pbVar54 = bVar4 | 2;
                }
                else {
                  fVar75 = (float)puVar56[0x33];
                  fVar78 = *(float *)((long)plVar62 + 0x2a4);
                  uVar26 = (ulong)(uint)-(fVar78 * fVar75);
                  _expf(uVar26);
                  fStack_2c4 = fVar78;
                  FUN_10a00891c(fVar78,uVar26,fVar75,&uStack_29c,&fStack_274,pbVar54 + 0x40);
                  fVar78 = *(float *)(plVar62 + 0x55);
                  uVar26 = (ulong)(uint)-(fVar78 * fVar75);
                  fStack_2c0 = extraout_s1;
                  fStack_2bc = extraout_s2;
                  _expf(uVar26);
                  FUN_10a0089a8(fVar78,uVar26,fVar75,&fStack_2ac,&fStack_284,pbVar54 + 0x4c);
                  uStack_2d8 = CONCAT44(fVar78,(undefined4)uStack_2d8);
                  uStack_2d0 = CONCAT44(extraout_s2_00,extraout_s1_00);
                  fStack_2c8 = fVar79;
                  if ((*(byte *)(plVar62 + 0x54) & 1) != 0) {
                    func_0x00010aa28420(&uStack_308,*(long *)(pbVar54 + 0x18) + 0x10,&plStack_2e0);
                    lVar46 = plVar62[0x2d];
                    puVar58 = (undefined8 *)plVar62[0x2e];
                    uStack_200 = uStack_308;
                    uStack_1f8 = uStack_300;
                    uStack_1ec = uStack_2f4;
                    uStack_1f4 = uStack_2fc;
                    FUN_10a0087b0(&uStack_1e0,&uStack_200,auStack_2ec);
                    func_0x000109519fd0(&uStack_240,puVar56 + 0x10,&uStack_1e0);
                    uVar26 = (ulong)((*(byte *)(plVar62 + 0x54) & 2) == 0);
                    lVar48 = lVar46;
                    FUN_10aa199c8(lVar46,uVar26,0x167 < *(int *)(puVar58[0x144] + 0x18));
                    FUN_10a3df648(puVar58,lVar46,&plStack_1a0,8);
                    if (lVar46 != 0) {
                      plVar63 = (long *)plVar62[0x4a];
                      lVar46 = lVar46 << 3;
                      do {
                        fStack_160 = (float)*puVar58;
                        fStack_15c = (float)((ulong)*puVar58 >> 0x20);
                        fStack_158 = SUB84(plVar62,0);
                        fStack_154 = (float)((ulong)plVar62 >> 0x20);
                        uStack_138 = CONCAT44(fStack_224,fStack_228);
                        fStack_148 = SUB84(puStack_238,0);
                        fStack_144 = (float)((ulong)puStack_238 >> 0x20);
                        uStack_150._0_4_ = SUB84(uStack_240,0);
                        uStack_150._4_4_ = (float)((ulong)uStack_240 >> 0x20);
                        uStack_140._0_4_ = fStack_230;
                        uStack_140._4_4_ = fStack_22c;
                        uStack_130 = CONCAT44(uStack_21c,fStack_220);
                        uStack_128 = uStack_218;
                        uStack_118 = uStack_208;
                        uStack_120 = uStack_210;
                        uStack_110 = CONCAT31(uStack_110._1_3_,4);
                        uStack_10c = (undefined4)lVar48;
                        uStack_108 = (undefined4)((ulong)lVar48 >> 0x20);
                        uStack_100 = CONCAT71(uStack_100._1_7_,(char)(uVar26 >> 0x20));
                        uStack_104 = (undefined4)uVar26;
                        (**(code **)(*plVar63 + 0x58))(plVar63,&fStack_160);
                        lVar46 = lVar46 + -8;
                        puVar58 = puVar58 + 1;
                      } while (lVar46 != 0);
                    }
                  }
                }
                goto LAB_10aa31f2c;
              }
              *pbVar54 = bVar4 & 0xfd;
            }
            else if ((bVar3 & bVar18) == 0) {
LAB_10aa31f2c:
              uVar44 = CONCAT44(fStack_2c0 * 0.01,fStack_2c4 * 0.01);
              fVar78 = 2.0 / (uStack_2d8._4_4_ * uStack_2d8._4_4_ +
                              (float)uStack_2d0 * (float)uStack_2d0 +
                             uStack_2d0._4_4_ * uStack_2d0._4_4_ + fStack_2c8 * fStack_2c8);
              fVar79 = fVar78 * (float)uStack_2d0;
              fVar75 = fVar78 * uStack_2d0._4_4_;
              fVar71 = fVar78 * uStack_2d8._4_4_ * fStack_2c8;
              fVar78 = fVar78 * uStack_2d8._4_4_ * uStack_2d8._4_4_;
              uVar73 = CONCAT44(fVar79 * uStack_2d8._4_4_ - fVar75 * fStack_2c8,
                                1.0 - (fVar79 * (float)uStack_2d0 + fVar75 * uStack_2d0._4_4_));
              uVar68 = CONCAT44(1.0 - (fVar78 + fVar75 * uStack_2d0._4_4_),
                                fVar79 * uStack_2d8._4_4_ + fVar75 * fStack_2c8);
              uVar74 = CONCAT44(fVar75 * (float)uStack_2d0 + fVar71,
                                fVar75 * uStack_2d8._4_4_ - fVar79 * fStack_2c8);
              uVar81 = (ulong)(uint)(1.0 - (fVar78 + fVar79 * (float)uStack_2d0));
              iVar66 = *(int *)(pbVar54 + 0x1c8);
              *(int *)(pbVar54 + 0x1c8) = iVar66 + 1;
              uVar26 = (ulong)(uint)(fVar75 * uStack_2d8._4_4_ + fVar79 * fStack_2c8);
              *(ulong *)(pbVar54 + 0x78) = uVar26;
              *(undefined8 *)(pbVar54 + 0x70) = uVar73;
              uVar77 = (ulong)(uint)(fVar75 * (float)uStack_2d0 - fVar71);
              *(ulong *)(pbVar54 + 0x88) = uVar77;
              *(undefined8 *)(pbVar54 + 0x80) = uVar68;
              *(ulong *)(pbVar54 + 0x98) = uVar81;
              *(undefined8 *)(pbVar54 + 0x90) = uVar74;
              *(ulong *)(pbVar54 + 0xa8) = (ulong)(uint)(fStack_2bc * 0.01);
              *(undefined8 *)(pbVar54 + 0xa0) = uVar44;
              if ((bVar51 & 1) == 0) {
                pbVar54[0x288] = 0;
                pbVar54[0x289] = 0;
                pbVar54[0x28a] = 0;
                pbVar54[0x28b] = 0;
                pbVar54[0x28c] = 0;
                pbVar54[0x28d] = 0;
                pbVar54[0x28e] = 0;
                pbVar54[0x28f] = 0;
                pbVar54[0x280] = 0;
                pbVar54[0x281] = 0;
                pbVar54[0x282] = 0;
                pbVar54[0x283] = 0;
                pbVar54[0x284] = 0;
                pbVar54[0x285] = 0;
                pbVar54[0x286] = 0;
                pbVar54[0x287] = 0;
                pbVar54[0x298] = 0;
                pbVar54[0x299] = 0;
                pbVar54[0x29a] = 0;
                pbVar54[0x29b] = 0;
                pbVar54[0x29c] = 0;
                pbVar54[0x29d] = 0;
                pbVar54[0x29e] = 0;
                pbVar54[0x29f] = 0;
                pbVar54[0x290] = 0;
                uVar72 = uRam0000000113835598;
                uVar69 = uRam0000000113835590;
                pbVar54[0x291] = 0;
                pbVar54[0x292] = 0;
                pbVar54[0x293] = 0;
                pbVar54[0x294] = 0;
                pbVar54[0x295] = 0;
                pbVar54[0x296] = 0;
                pbVar54[0x297] = 0;
                *(undefined8 *)(pbVar54 + 0x218) = uRam0000000113835598;
                *(undefined8 *)(pbVar54 + 0x210) = uVar69;
                *(undefined8 *)(pbVar54 + 0x228) = uVar72;
                *(undefined8 *)(pbVar54 + 0x220) = uVar69;
                *(undefined8 *)(pbVar54 + 0xf8) = uVar72;
                *(undefined8 *)(pbVar54 + 0xf0) = uVar69;
                *(undefined8 *)(pbVar54 + 0x108) = uVar72;
                *(undefined8 *)(pbVar54 + 0x100) = uVar69;
                *(int *)(pbVar54 + 0x1c8) = iVar66 + 6;
                *(ulong *)(pbVar54 + 0xb8) = uVar26;
                *(undefined8 *)(pbVar54 + 0xb0) = uVar73;
                *(ulong *)(pbVar54 + 200) = uVar77;
                *(undefined8 *)(pbVar54 + 0xc0) = uVar68;
                *(ulong *)(pbVar54 + 0xd8) = uVar81;
                *(undefined8 *)(pbVar54 + 0xd0) = uVar74;
                *(ulong *)(pbVar54 + 0xe8) = (ulong)(uint)(fStack_2bc * 0.01);
                *(undefined8 *)(pbVar54 + 0xe0) = uVar44;
              }
            }
            pbVar33 = pbVar54 + 0x360;
            FUN_10aa2f988(pbVar33,*(undefined8 *)(plVar62[0x2d] + 0x130),
                          *(undefined8 *)(plVar62[0x2d] + 0x138),puStack_368);
            uVar43 = (int)pbVar54 + 0x3a0;
            FUN_10aa2edb0();
            if ((((uint)pbVar33 | uVar43) & 1) == 0) {
              if ((bVar19 & bVar3 & bVar18) != 1) goto LAB_10aa320b8;
              uVar43 = *(uint *)(pbVar54 + 0x148);
LAB_10aa320e0:
              uVar67 = uVar43 & 0xfffffffd;
              if ((pbVar54[0x18c] & 8) != 0) {
                uVar67 = uVar43;
              }
            }
            else {
              puVar30 = *(uint **)(pbVar54 + 0x128);
              (**(code **)(**(long **)(puVar56 + 0x1536) + 0x60))
                        (*(long **)(puVar56 + 0x1536),puVar30,puVar56 + 0xb8);
              bVar21 = (bool)(bVar19 & bVar3 & bVar18);
              if ((bVar51 & 1) == 0) {
                bVar21 = true;
              }
LAB_10aa320b8:
              if ((*(uint *)(pbVar54 + 0x158) & 0xfffffffe) != 4) {
                pbVar54[0x158] = 1;
                pbVar54[0x159] = 0;
                pbVar54[0x15a] = 0;
                pbVar54[0x15b] = 0;
              }
              pbVar54[0x15c] = 0;
              pbVar54[0x15d] = 0;
              pbVar54[0x15e] = 0;
              pbVar54[0x15f] = 0;
              uVar43 = *(uint *)(pbVar54 + 0x148);
              if (bVar21 != false) goto LAB_10aa320e0;
              uVar67 = uVar43 | 2;
            }
            *(uint *)(pbVar54 + 0x148) = uVar67;
            uVar43 = 8;
          }
          pbVar54 = (byte *)plVar62[0x75];
          (**(code **)(**(long **)(pbVar54 + 0x18) + 0x10))();
          uVar26 = *(ulong *)(pbVar41 + 8);
          fVar78 = (float)(uVar26 >> 0x20);
          uVar77 = uVar26 ^ (uVar26 ^ uVar55) &
                            CONCAT44(-(uint)((float)(uVar55 >> 0x20) < fVar78),
                                     -(uint)((float)uVar55 < (float)uVar26));
          iVar66 = -(uint)((float)uVar26 < 0.0);
          iVar70 = -(uint)(fVar78 < 0.0);
          *(ulong *)(pbVar54 + 0x2a0) =
               CONCAT17((byte)(uVar77 >> 0x38) & ~(byte)((uint)iVar70 >> 0x18),
                        CONCAT16((byte)(uVar77 >> 0x30) & ~(byte)((uint)iVar70 >> 0x10),
                                 CONCAT15((byte)(uVar77 >> 0x28) & ~(byte)((uint)iVar70 >> 8),
                                          CONCAT14((byte)(uVar77 >> 0x20) & ~(byte)iVar70,
                                                   CONCAT13((byte)(uVar77 >> 0x18) &
                                                            ~(byte)((uint)iVar66 >> 0x18),
                                                            CONCAT12((byte)(uVar77 >> 0x10) &
                                                                     ~(byte)((uint)iVar66 >> 0x10),
                                                                     CONCAT11((byte)(uVar77 >> 8) &
                                                                              ~(byte)((uint)iVar66
                                                                                     >> 8),
                                                                              (byte)uVar77 &
                                                                              ~(byte)iVar66)))))));
          if ((bVar23 && bVar22) || (*pbVar54 = *pbVar54 & 0xfd, (bVar51 & 1) != 0)) {
            lVar46 = 0xc;
          }
          else {
            fVar78 = (float)*(undefined8 *)puStack_368 * 0.01;
            fVar75 = (float)((ulong)*(undefined8 *)puStack_368 >> 0x20) * 0.01;
            fVar79 = (float)puStack_368[2];
            if (*(float *)(pbVar54 + 0x230) != 0.0) {
              fVar71 = 1.0 / *(float *)(pbVar54 + 0x230);
              *(ulong *)(pbVar54 + 600) = (ulong)(uint)(fVar79 * 0.01 * fVar71);
              *(ulong *)(pbVar54 + 0x250) = CONCAT44(fVar75 * fVar71,fVar78 * fVar71);
            }
            *(ulong *)(pbVar54 + 0x268) = (ulong)(uint)(fVar79 * 0.01);
            *(ulong *)(pbVar54 + 0x260) = CONCAT44(fVar75,fVar78);
            if ((float)puStack_368[7] <= 0.0) {
              fVar78 = 3.4028235e+38;
            }
            else {
              fVar78 = ((float)puStack_368[7] * *(float *)(pbVar54 + 0x3c)) / (float)puVar56[0x32];
            }
            fVar75 = (float)puStack_368[6] * 0.01;
            if ((float)puStack_368[6] <= 0.0) {
              fVar75 = 3.4028235e+38;
            }
            if (fVar75 <= fVar78) {
              fVar78 = fVar75;
            }
            fVar75 = fVar86;
            if (fVar78 != 3.4028235e+38) {
              fVar75 = fVar78;
            }
            fVar78 = fVar86;
            if (0.0 < fVar75) {
              fVar78 = fVar75 * fVar75;
            }
            *(float *)(pbVar54 + 0x2a8) = fVar78;
            lVar46 = 0x10;
          }
          iVar70 = *(int *)(pbVar54 + 0x1c8);
          *(undefined4 *)(pbVar54 + 0x164) = *(undefined4 *)((long)ppuStack_348 + lVar46);
          uVar67 = *(uint *)ppuStack_348;
          iVar66 = iVar70 + 2;
          *(int *)(pbVar54 + 0x1c8) = iVar66;
          *(uint *)(pbVar54 + 0x160) = uVar67;
          plVar63 = *(long **)(*(long *)(pbVar54 + 0x18) + 8);
          if ((*(byte *)(plVar63 + 3) & 1) != 0) {
            *(byte *)(puVar56 + 4) = (byte)puVar56[4] | 2;
          }
          if ((bVar51 & 1) == 0) {
            if ((*(float *)((long)ppuStack_348 + 4) == 0.0) &&
               (*(float *)((long)ppuStack_348 + 8) == 0.0)) {
              uVar42 = 0;
              fStack_158 = (float)uRam00000001137ec088;
              fStack_154 = (float)((ulong)uRam00000001137ec088 >> 0x20);
              fStack_160 = (float)uRam00000001137ec080;
              fStack_15c = (float)((ulong)uRam00000001137ec080 >> 0x20);
              uVar44 = uRam00000001137ec080;
              uVar73 = uRam00000001137ec088;
            }
            else {
              (**(code **)(*plVar63 + 0x50))(&fStack_160);
              iVar66 = *(int *)(pbVar54 + 0x1c8);
              uVar42 = 2;
              uVar73 = CONCAT44(fStack_154,fStack_158);
              uVar44 = CONCAT44(fStack_15c,fStack_160);
            }
            fVar78 = (float)((ulong)uVar44 >> 0x20);
            *(int *)(pbVar54 + 0x1c8) = iVar66 + 2;
            *(ulong *)(pbVar54 + 0x168) =
                 CONCAT44((float)((ulong)*(undefined8 *)((long)ppuStack_348 + 4) >> 0x20) * 0.1,
                          (float)*(undefined8 *)((long)ppuStack_348 + 4) * 0.1);
            *(undefined8 *)(pbVar54 + 0x118) = uVar73;
            *(undefined8 *)(pbVar54 + 0x110) = uVar44;
            bVar21 = false;
            if (((float)uVar73 == 1.0) && (bVar21 = false, !NAN(fVar78))) {
              bVar21 = fVar78 == 1.0;
            }
            bVar22 = false;
            if (bVar21) {
              bVar22 = false;
              if (!NAN((float)uVar44)) {
                bVar22 = (float)uVar44 == 1.0;
              }
            }
            if (bVar22) {
              uVar42 = 0;
            }
            *(undefined4 *)(pbVar54 + 0x120) = uVar42;
          }
          else {
            *(int *)(pbVar54 + 0x1c8) = iVar70 + 4;
            pbVar54[0x168] = 0;
            uVar44 = uRam00000001137ec080;
            pbVar54[0x169] = 0;
            pbVar54[0x16a] = 0;
            pbVar54[0x16b] = 0;
            pbVar54[0x16c] = 0;
            pbVar54[0x16d] = 0;
            pbVar54[0x16e] = 0;
            pbVar54[0x16f] = 0;
            *(undefined8 *)(pbVar54 + 0x118) = uRam00000001137ec088;
            *(undefined8 *)(pbVar54 + 0x110) = uVar44;
            pbVar54[0x120] = 0;
            pbVar54[0x121] = 0;
            pbVar54[0x122] = 0;
            pbVar54[0x123] = 0;
          }
          fVar78 = (float)uVar44;
          *(uint *)(pbVar54 + 0x148) =
               *(uint *)(pbVar54 + 0x148) & 0xfffffff8 |
               *(uint *)(pbVar54 + 0x148) & 3 | (*(byte *)(plVar62 + 0x54) >> 2 & 1) << 2;
          lVar46 = *(long *)(pbVar54 + 0x128);
          *(int *)(lVar46 + 8) = (int)uVar60;
          *(int *)(lVar46 + 0xc) = (int)(uVar60 >> 0x20);
          if (((*(long *)(plVar62[0x3e] + 0x30) != 0) || (*(long *)(plVar62[0x40] + 0x30) != 0)) ||
             (*(long *)(plVar62[0x42] + 0x30) != 0)) {
            lVar46 = plVar62[0x5c];
            lVar48 = plVar62[0x5b];
            while (fVar78 = (float)uVar44, lVar46 != lVar48) {
              lVar46 = lVar46 + -0x30;
              FUN_10aa3c98c(lVar46);
            }
            plVar62[0x5c] = lVar48;
            puVar58 = *(undefined8 **)(puVar56 + 0x163a);
            if (puVar58 < *(undefined8 **)(puVar56 + 0x163c)) {
              puVar59 = puVar58 + 1;
              *puVar58 = plVar62;
            }
            else {
              lVar46 = (long)puVar58 - *(long *)(puVar56 + 0x1638);
              uVar60 = (lVar46 >> 3) + 1;
              if (uVar60 >> 0x3d != 0) {
                func_0x00010aa416e8();
                goto LAB_10aa32bf0;
              }
              uVar77 = (long)*(undefined8 **)(puVar56 + 0x163c) - *(long *)(puVar56 + 0x1638);
              uVar26 = (long)uVar77 >> 2;
              if (uVar26 <= uVar60) {
                uVar26 = uVar60;
              }
              if (0x7ffffffffffffff7 < uVar77) {
                uVar26 = 0x1fffffffffffffff;
              }
              FUN_10aa416fc();
              puVar58 = (undefined8 *)(uVar26 + lVar46);
              puVar59 = puVar58 + 1;
              *puVar58 = plVar62;
              lVar48 = (long)puVar58 - (*(long *)(puVar56 + 0x163a) - *(long *)(puVar56 + 0x1638));
              _memcpy(lVar48);
              lVar46 = *(long *)(puVar56 + 0x1638);
              *(long *)(puVar56 + 0x1638) = lVar48;
              *(undefined8 **)(puVar56 + 0x163a) = puVar59;
              *(ulong *)(puVar56 + 0x163c) = uVar26 + (long)puVar30 * 8;
              if (lVar46 != 0) {
                __ZdlPv();
              }
            }
            uVar43 = uVar43 | 1;
            *(undefined8 **)(puVar56 + 0x163a) = puVar59;
          }
          *(uint *)(pbVar54 + 0x18c) = uVar43;
          bVar51 = *(byte *)(plVar62 + 0x6e);
          if (bVar51 != 0) {
            if ((*(uint *)(pbVar54 + 0x158) & 0xfffffffe) != 4) {
              pbVar54[0x158] = 1;
              pbVar54[0x159] = 0;
              pbVar54[0x15a] = 0;
              pbVar54[0x15b] = 0;
            }
            pbVar54[0x15c] = 0;
            pbVar54[0x15d] = 0;
            pbVar54[0x15e] = 0;
            pbVar54[0x15f] = 0;
            if ((bVar51 & 1) != 0) {
              fVar75 = *(float *)((long)plVar62 + 0x374);
              lVar46 = plVar62[0x6f];
              if (pfStack_388 != (float *)0x0) {
                fVar78 = (float)lVar46;
                fVar79 = (float)((ulong)lVar46 >> 0x20);
                fVar71 = (float)*(undefined8 *)(pfStack_388 + 1) * fVar75;
                fVar83 = (float)((ulong)*(undefined8 *)(pfStack_388 + 1) >> 0x20) * fVar75;
                fVar75 = fVar78 * pfStack_388[4] + fVar75 * *pfStack_388 +
                         fVar79 * pfStack_388[8] + pfStack_388[0xc] * 0.0;
                lVar46 = CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(pfStack_388 + 5) >> 0x20)
                                           * fVar78 +
                                  (float)((ulong)*(undefined8 *)(pfStack_388 + 9) >> 0x20) * fVar79
                                  + (float)((ulong)*(undefined8 *)(pfStack_388 + 0xd) >> 0x20) * 0.0
                                  ,fVar71 + (float)*(undefined8 *)(pfStack_388 + 5) * fVar78 +
                                   (float)*(undefined8 *)(pfStack_388 + 9) * fVar79 +
                                   (float)*(undefined8 *)(pfStack_388 + 0xd) * 0.0);
              }
              fVar78 = (float)((ulong)lVar46 >> 0x20) * 0.01;
              *(int *)(pbVar54 + 0x1c8) = *(int *)(pbVar54 + 0x1c8) + 1;
              *(ulong *)(pbVar54 + 0x218) = (ulong)(uint)fVar78;
              *(ulong *)(pbVar54 + 0x210) = CONCAT44((float)lVar46 * 0.01,fVar75 * 0.01);
              bVar51 = *(byte *)(plVar62 + 0x6e);
            }
            if ((bVar51 >> 1 & 1) != 0) {
              fStack_160 = (float)plVar62[0x70];
              fStack_15c = (float)((ulong)plVar62[0x70] >> 0x20);
              fStack_158 = *(float *)(plVar62 + 0x71);
              if (pfStack_388 == (float *)0x0) {
                uVar60 = CONCAT44(fStack_158,fStack_15c);
                fVar78 = fStack_160;
              }
              else {
                FUN_10aa2fd74(pfStack_388,&fStack_160);
                uVar60 = CONCAT44(extraout_s2_01,extraout_s1_01);
              }
              *(int *)(pbVar54 + 0x1c8) = *(int *)(pbVar54 + 0x1c8) + 1;
              *(ulong *)(pbVar54 + 0x228) = uVar60 >> 0x20;
              *(ulong *)(pbVar54 + 0x220) = CONCAT44((int)uVar60,fVar78);
            }
            *(undefined1 *)(plVar62 + 0x6e) = 0;
          }
          puVar36 = puVar36 + 4;
        } while (puVar36 != puVar53);
      }
      puVar53 = *(undefined8 **)(puVar45 + uVar39 * 0x10 + 0xc);
      for (puVar36 = *(undefined8 **)(puVar45 + uVar39 * 0x10 + 10); puVar53 != puVar36;
          puVar36 = puVar36 + 3) {
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
        plVar62 = (long *)*puVar36;
        if (plVar62[0x4f] == 0) {
          lVar57 = puVar36[1];
          lVar46 = *(long *)(lVar57 + 0x3a8);
          fStack_230 = 0.0;
          puStack_238 = (uint *)0x0;
          uStack_240 = (uint *)(lVar46 + 0x60);
          fStack_22c = fVar65;
          fStack_228 = fVar11;
          fStack_224 = fVar12;
          fStack_220 = fVar13;
          if (*(long *)(lVar57 + 0x168) != plVar62[0x2d]) {
            lVar48 = *(long *)(lVar57 + 0x178);
            lVar57 = plVar62[0x2f];
            if ((*(byte *)(lVar48 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar48);
            }
            func_0x00010a008c90(&fStack_160,lVar48 + 0xc0);
            FUN_10a3e939c(&uStack_1e0,&fStack_160,&UNK_10e482b48);
            FUN_10aa2e1f4(&plStack_1a0,lVar57,&uStack_1e0);
            func_0x00010aa2fe48(&plStack_1a0,*(long *)(lVar46 + 0x18) + 0x10);
            puStack_238 = (uint *)CONCAT44(uStack_190,uStack_194);
            fStack_230 = (float)uStack_18c;
            fStack_22c = (float)((ulong)uStack_18c >> 0x20);
            fStack_228 = (float)uStack_184;
            fStack_224 = (float)((ulong)uStack_184 >> 0x20);
            fStack_220 = fStack_17c;
          }
          if (puVar36[2] == 0) {
            lVar57 = 0;
          }
          else {
            lVar57 = *(long *)(puVar36[2] + 0x3a8);
          }
          fStack_1d8 = 1.0;
          fStack_1cc = 0.0;
          fStack_1c8 = 1.0;
          fStack_1d4 = 0.0;
          fStack_1d0 = 0.0;
          uStack_1e0 = uVar55;
          FUN_10a008544(&uStack_1e0,(long)plVar62 + 0x214);
          fStack_160 = (float)uStack_1e0;
          fStack_15c = (float)(uStack_1e0 >> 0x20);
          fStack_158 = fStack_1d8;
          uStack_150._4_4_ = fStack_1cc;
          fStack_148 = fStack_1c8;
          fStack_154 = fStack_1d4;
          uStack_150._0_4_ = fStack_1d0;
          uStack_140._4_4_ = *(float *)((long)plVar62 + 0x24c);
          fStack_144 = (float)*(undefined8 *)((long)plVar62 + 0x244);
          uStack_140._0_4_ = (float)((ulong)*(undefined8 *)((long)plVar62 + 0x244) >> 0x20);
          if (lVar57 != 0) {
            func_0x00010aa2fe48(&fStack_160,*(long *)(lVar57 + 0x18) + 0x10);
          }
          uStack_1e0 = 0;
          if (lVar57 != 0) {
            uStack_1e0 = lVar57 + 0x60;
          }
          fStack_1d0 = uStack_150._4_4_;
          fStack_1cc = fStack_148;
          fStack_1d8 = fStack_154;
          fStack_1d4 = (float)uStack_150;
          fStack_1c8 = fStack_144;
          fStack_1c4 = (float)uStack_140;
          uStack_1c0._0_4_ = uStack_140._4_4_;
          plVar50 = (long *)plVar62[0x40];
          (**(code **)(*plVar50 + 0x60))(&plStack_268,puVar56[0x36],plVar50,&uStack_240,&uStack_1e0)
          ;
          bVar51 = *(byte *)(plVar62 + 0x42);
          func_0x000109834fa4(puVar56 + 0x15b8,plStack_268,bVar51 >> 1 & 1);
          plVar63 = (long *)0x30;
          __Znwm();
          plVar64 = plVar63 + 2;
          *plVar64 = 3;
          plVar63[4] = 0;
          plVar63[5] = 0;
          plVar63[3] = 0;
          plVar63[1] = (long)puVar29;
          lVar48 = *(long *)(puVar56 + 0x86);
          *plVar63 = lVar48;
          *(long **)(lVar48 + 8) = plVar63;
          *(long **)(puVar56 + 0x86) = plVar63;
          uVar39 = *(ulong *)(puVar56 + 0x8a);
          *(ulong *)(puVar56 + 0x8a) = uVar39 + 1;
          if (0xfffffffffffffffe < uVar39) goto LAB_10aa32bf0;
          plStack_268[2] = (long)plVar64;
          *(undefined1 *)(plVar63 + 2) = *(undefined1 *)((long)plVar50 + 0x21);
          *(byte *)((long)plVar63 + 0x11) =
               *(byte *)((long)plVar63 + 0x11) & 0xfe | (byte)((bVar51 & 2) >> 1);
          (**(code **)(*plVar62 + 0x50))(&plStack_1a0,plVar62);
          plVar34 = plStack_1a0;
          plVar50 = (long *)CONCAT44(uStack_194,fStack_198);
          lVar48 = CONCAT44(uStack_194,fStack_198);
          if (plVar50 != (long *)0x0) {
            plVar7 = plVar50 + 1;
            do {
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar21) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar7 = (long *)CONCAT44(uStack_194,fStack_198);
            if (plVar7 != (long *)0x0) {
              plVar2 = plVar7 + 1;
              do {
                lVar27 = *plVar2;
                cVar5 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar21) {
                  *plVar2 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            plVar7 = plVar50 + 2;
            do {
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar21) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar27 = plVar63[4];
          plVar63[4] = lVar48;
          plVar63[3] = (long)plVar34;
          if (lVar27 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plVar50 != (long *)0x0) {
            plVar34 = plVar50 + 1;
            do {
              lVar48 = *plVar34;
              cVar5 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar21) {
                *plVar34 = lVar48 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar48 == 0) {
              (**(code **)(*plVar50 + 0x10))(plVar50);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar50);
            }
          }
          plVar50 = plStack_268;
          plStack_268 = (long *)0x0;
          plVar34 = (long *)plVar63[5];
          plVar63[5] = (long)plVar50;
          if (plVar34 != (long *)0x0) {
            (**(code **)(*plVar34 + 8))();
          }
          plVar63 = plStack_268;
          if ((uStack_240[0x3a] & 3) == 0) {
            if ((uStack_240[0x3e] & 0xfffffffe) != 4) {
              uStack_240[0x3e] = 1;
            }
            uStack_240[0x3f] = 0;
          }
          if ((uStack_1e0 != 0) && ((*(byte *)(uStack_1e0 + 0xe8) & 3) == 0)) {
            if ((*(uint *)(uStack_1e0 + 0xf8) & 0xfffffffe) != 4) {
              *(undefined4 *)(uStack_1e0 + 0xf8) = 1;
            }
            *(undefined4 *)(uStack_1e0 + 0xfc) = 0;
          }
          plVar62[0x4f] = (long)plVar64;
          plVar62[0x50] = lVar46;
          plVar62[0x51] = lVar57;
          plStack_268 = (long *)0x0;
          if (plVar63 != (long *)0x0) {
            (**(code **)(*plVar63 + 8))();
          }
        }
        else {
          lVar46 = *(long *)(plVar62[0x4f] + 0x18);
          lVar57 = *(long *)(lVar46 + 0x28);
          lVar46 = *(long *)(lVar46 + 0x30);
          if ((*(uint *)(lVar57 + 0xe8) >> 1 & 1) == 0) {
            if (((*(uint *)(lVar57 + 0xe8) & 1) == 0) && ((*(uint *)(lVar46 + 0xe8) >> 1 & 1) != 0))
            {
              if ((*(uint *)(lVar57 + 0xf8) & 0xfffffffe) != 4) {
                *(undefined4 *)(lVar57 + 0xf8) = 1;
              }
              *(undefined4 *)(lVar57 + 0xfc) = 0;
            }
          }
          else if ((*(uint *)(lVar46 + 0xe8) & 3) == 0) {
            if ((*(uint *)(lVar46 + 0xf8) & 0xfffffffe) != 4) {
              *(undefined4 *)(lVar46 + 0xf8) = 1;
            }
            *(undefined4 *)(lVar46 + 0xfc) = 0;
          }
        }
      }
                    /* WARNING: Read-only address (ram,0x00010e482b58) is written */
                    /* WARNING: Read-only address (ram,0x00010e482b68) is written */
      puVar56 = *(uint **)(puVar56 + 2);
    } while (puVar56 != puVar25);
  }
  param_1[1] = puStack_318;
  *param_1 = puStack_320;
  param_1[2] = puStack_310;
  param_1 = &puStack_320;
LAB_10aa32988:
  *param_1 = (uint *)0x0;
  param_1[1] = (uint *)0x0;
  param_1[2] = (uint *)0x0;
  FUN_10aa4af2c(&puStack_320);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10aa32a3c:
  FUN_10aa4af18();
LAB_10aa32bf0:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10aa32bf4);
  (*pcVar17)();
}



/* Entry: 10aa32c44; end: 10aa32cfb;  */

undefined1  [16] FUN_10aa32c44(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    plVar7 = plVar2 + 1;
    *plVar2 = param_2;
    plVar2 = param_1;
  }
  else {
    lVar6 = (long)plVar2 - *param_1;
    uVar1 = (lVar6 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x00010aa416e8();
      auVar9._8_8_ = 0xe;
      auVar9._0_8_ = &UNK_10f68b921;
      return auVar9;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    lVar3 = param_2;
    FUN_10aa416fc();
    plVar2 = (long *)(uVar5 + lVar6);
    plVar7 = plVar2 + 1;
    *plVar2 = param_2;
    param_2 = *param_1;
    lVar6 = (long)plVar2 - (param_1[1] - param_2);
    _memcpy(lVar6);
    plVar2 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar7;
    param_1[2] = uVar5 + lVar3 * 8;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar7;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = plVar2;
  return auVar8;
}



/* Entry: 10aa32cfc; end: 10aa32d6b;  */

undefined1  [16] FUN_10aa32cfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f68b921;
  return auVar1;
}



/* Entry: 10aa32d6c; end: 10aa3307b;  */

void FUN_10aa32d6c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68b921,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b1f8;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa9;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b1f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4a776e,FUN_10aa69a60,FUN_10aa69b1c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b3ff,FUN_10aa69cdc,FUN_10aa69d98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b40f,FUN_10aa69e88,FUN_10aa69f44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b420,FUN_10aa6a034,FUN_10aa6a0f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b431,FUN_10aa6a1e0,FUN_10aa6a29c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68b921,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa33060);
  (*pcVar6)();
}



/* Entry: 10aa3307c; end: 10aa330df;  */

void FUN_10aa3307c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c39e50;
  param_1[2] = &PTR_DAT_110c39ef0;
  param_1[7] = &PTR_DAT_110c39f48;
  param_1[0x1d] = 0x3f8000003ca3d70a;
  param_1[0x1c] = 0x3ca3d70a3f000000;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



/* Entry: 10aa330e0; end: 10aa330f3;  */

undefined8 * FUN_10aa330e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa330f4; end: 10aa33137;  */

void FUN_10aa330f4(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa33138; end: 10aa33223;  */

void FUN_10aa33138(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x00010aa70acc();
  uVar1 = 0x3ca3d70a;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa20) + 0x18) < 0xa8) {
    uVar1 = 0;
  }
  uVar2 = 0x3f000000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c39f58);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = uVar1;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c39f78);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c39f98);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar1 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c39fb8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  uVar1 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c39fd8);
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  return;
}



/* Entry: 10aa33224; end: 10aa332cf;  */

void FUN_10aa33224(long param_1,long *param_2)

{
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xe0),param_2,&PTR_DAT_110c39f58);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xe4),param_2,&PTR_DAT_110c39f78);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xe8),param_2,&PTR_DAT_110c39f98);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xec),param_2,&PTR_DAT_110c39fb8);
                    /* WARNING: Could not recover jumptable at 0x00010aa332cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xf0),param_2,&PTR_DAT_110c39fd8);
  return;
}



/* Entry: 10aa332d0; end: 10aa3336f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3335c) */

void FUN_10aa332d0(void)

{
  FUN_10a0ee900(&UNK_10f68b443,0x30);
  return;
}



/* Entry: 10aa33370; end: 10aa33377;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3335c) */

void FUN_10aa33370(void)

{
  FUN_10a0ee900(&UNK_10f68b443,0x30);
  return;
}



/* Entry: 10aa33378; end: 10aa336d3;  */

void FUN_10aa33378(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(param_2 + 0x50);
  if (lVar7 == 0) {
    plVar4 = (long *)0x110;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c3d308;
    plVar6 = plVar4 + 3;
    FUN_10aa3307c(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar4;
    FUN_10aa6a4f0(&plStack_50,plVar4 + 8,plVar6);
    FUN_10aa6a38c(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa335f8;
    plVar6 = plStack_48 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x858);
    plVar6 = *(long **)(lVar7 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = (long *)0xf8;
    lStack_80 = lVar8;
    plStack_78 = plVar6;
    __Znwm();
    FUN_10aa3307c();
    lStack_70 = lVar8;
    plStack_68 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar5 = (long *)0x30;
    lStack_60 = lVar8;
    plStack_58 = plVar6;
    plStack_50 = plVar4;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110c3d2a8;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar8;
    plVar5[5] = (long)plVar6;
    plStack_48 = plVar5;
    FUN_10aa6a4f0(&plStack_50,plVar4 + 5,plVar4);
    FUN_10aa6a38c(&plStack_90,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar6 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa335f8;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa335f8:
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  lVar7 = *(long *)(param_2 + 0xe0);
  plStack_90[0x1d] = *(long *)(param_2 + 0xe8);
  plStack_90[0x1c] = lVar7;
  *(undefined4 *)(plStack_90 + 0x1e) = uVar1;
  *param_1 = plStack_90;
  param_1[1] = plStack_88;
  return;
}



/* Entry: 10aa336d4; end: 10aa33757;  */

undefined1  [16] FUN_10aa336d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f68bcab;
  return auVar1;
}



/* Entry: 10aa33758; end: 10aa3384f;  */

void FUN_10aa33758(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f68a4a1;
  uStack_88 = 0;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_70 = 0xa4;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10aa33850(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f68a7ff;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xa4;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aa6a7c8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68a808;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xa4;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010aa6a974(param_1,&puStack_a8);
  FUN_10aa6aa84(param_1);
  return;
}



/* Entry: 10aa33850; end: 10aa33927;  */

/* WARNING: Removing unreachable block (ram,0x00010aa338e8) */

undefined1  [16] FUN_10aa33850(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68bcab,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa6a6cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa33928; end: 10aa33ed3;  */

void FUN_10aa33928(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  char cStack_31;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_2 + 0x18);
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    cStack_31 = '\x0f';
    uStack_48 = 0x73636973796850;
    uStack_41 = 0x2e;
    uStack_40 = 0x70616c7265764f;
    uStack_39 = 0;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x168);
      if (*(char *)(lVar6 + 0x17f) < '\0') {
        func_0x000107c3192c(&uStack_60,*(undefined8 *)(lVar6 + 0x168),*(undefined8 *)(lVar6 + 0x170)
                           );
      }
      else {
        uStack_58 = *(undefined8 *)(lVar6 + 0x170);
        uStack_60 = *(undefined8 *)(lVar6 + 0x168);
        lStack_50 = *(long *)(lVar6 + 0x178);
      }
      goto LAB_10aa33a0c;
    }
  }
  cStack_31 = '\x0f';
  uStack_39 = 0;
  uStack_40 = 0x70616c7265764f;
  uStack_41 = 0x2e;
  uStack_48 = 0x73636973796850;
  func_0x000107c2b054(&uStack_60,"(null)");
LAB_10aa33a0c:
  FUN_10a0ee900(param_1,&UNK_10f68b474,0x17);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(CONCAT17(uStack_41,uStack_48));
  }
  return;
}



/* Entry: 10aa33ed4; end: 10aa33f47;  */

undefined1  [16] FUN_10aa33ed4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &UNK_10f68b087;
  return auVar1;
}



/* Entry: 10aa33f48; end: 10aa34153;  */

void FUN_10aa33f48(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b087;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f68a4a1;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b4cf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010aa34084(param_1,&puStack_98,FUN_10aa34154);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b4e4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa3418c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b4f6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa3418c();
  func_0x00010a004064();
  return;
}



/* Entry: 10aa34154; end: 10aa3418b;  */

void FUN_10aa34154(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0xac0);
    lVar4 = *(long *)(lVar5 + 0x58);
    uVar6 = *(undefined8 *)(lVar5 + 0x50);
    param_1[1] = *(undefined8 *)(lVar5 + 0x58);
    *param_1 = uVar6;
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
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10aa3418c; end: 10aa3425b;  */

undefined *** FUN_10aa3418c(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long *extraout_x8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)pppuVar2 & 1) == 0) {
    pcStack_78 = FUN_10aa6ac64;
    ppuStack_70 = &PTR_FUN_110c3d360;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa34258);
      (*pcVar1)();
    }
    FUN_10a0544d8(param_1,*param_2,&pcStack_78,0,param_1[3] + -1);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (pppuVar2 != (undefined ***)0x0) {
    ppuVar4 = pppuVar2[0x158];
    puVar3 = (undefined8 *)0x60;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110c3d388;
    uStack_d0 = 0;
    pppuStack_c8 = (undefined ***)0x0;
    FUN_10aa38890(puVar3 + 3,0,ppuVar4,&uStack_d0);
    if (pppuStack_c8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *extraout_x8 = (long)(puVar3 + 3);
    extraout_x8[1] = (long)puVar3;
    return pppuStack_c8;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return (undefined ***)0x0;
}



/* Entry: 10aa3425c; end: 10aa34293;  */

void FUN_10aa3425c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xac0);
    puVar1 = (undefined8 *)0x60;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110c3d388;
    uStack_50 = 0;
    lStack_48 = 0;
    FUN_10aa38890(puVar1 + 3,0,uVar2,&uStack_50);
    if (lStack_48 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *param_1 = (long)(puVar1 + 3);
    param_1[1] = (long)puVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10aa34294; end: 10aa34603;  */

undefined8 * FUN_10aa34294(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_48;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_110c3a008;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110c3a070;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)((long)param_1 + 0x3a) = 0;
  param_1[8] = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = puVar1 + 1;
  puVar1[2] = puVar1 + 1;
  puVar1[3] = 0;
  param_1[10] = 0;
  param_1[9] = puVar1;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0xc4750000;
  *(undefined1 *)((long)param_1 + 0x6c) = 2;
  param_1[0xf] = 0x3f00000000000000;
  param_1[0xe] = 0x3f8000003f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0x3f8000003ca3d70a;
  param_1[0x1f] = 0x3ca3d70a3f000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0x32aaaba7;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = &PTR_DAT_110c38dd0;
  param_1[0x2c] = param_2;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  plVar2 = (long *)0x10;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 0xffffff38;
  *plVar2 = (long)&PTR_DAT_110c3adf8;
  *(undefined1 *)((long)plVar2 + 0xc) = 1;
  plStack_48 = plVar2;
  FUN_10aa1b830(param_1 + 0x2a,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 8))();
  }
  plVar2 = (long *)0x10;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 0xffffff9c;
  *plVar2 = (long)&PTR_DAT_110c3ad30;
  plStack_48 = plVar2;
  FUN_10aa1b830(param_1 + 0x2a,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 8))();
  }
  plVar2 = (long *)0x10;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 0x7ffffffd;
  *plVar2 = (long)&PTR_DAT_110c3ad90;
  *(undefined1 *)((long)plVar2 + 0xc) = 1;
  plStack_48 = plVar2;
  FUN_10aa1b830(param_1 + 0x2a,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 8))();
  }
  plVar2 = (long *)0x10;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 0x7ffffffe;
  *plVar2 = (long)&PTR_DAT_110c3adf8;
  *(undefined1 *)((long)plVar2 + 0xc) = 0;
  plStack_48 = plVar2;
  FUN_10aa1b830(param_1 + 0x2a,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 8))();
  }
  plVar2 = (long *)0x10;
  __Znwm();
  *(undefined4 *)(plVar2 + 1) = 0x7fffffff;
  *plVar2 = (long)&PTR_DAT_110c3ad90;
  *(undefined1 *)((long)plVar2 + 0xc) = 0;
  plStack_48 = plVar2;
  FUN_10aa1b830(param_1 + 0x2a,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)(*plStack_48 + 8))();
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_10aa4b020(param_1 + 0x3b);
  FUN_10aa4b020(param_1 + 0x4e);
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  return param_1;
}



/* Entry: 10aa34604; end: 10aa34747;  */

long * FUN_10aa34604(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10aa4b17c(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  FUN_10aa4a8b4(param_1 + 8);
  FUN_10aa4b1c4(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010aa45258(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa34748; end: 10aa34753;  */

undefined8 * FUN_10aa34748(undefined8 *param_1)

{
  if (param_1[0x61] != 0) {
    FUN_10aa381b0(param_1 + 0x61);
    __ZdlPv(param_1[0x61]);
  }
  FUN_10aa4b17c(param_1 + 0x5c);
  if (param_1[0x59] != 0) {
    param_1[0x5a] = param_1[0x59];
    __ZdlPv();
  }
  FUN_10aa4a8b4(param_1 + 0x56);
  FUN_10aa4b1c4(param_1 + 0x53);
  func_0x00010aa4b22c(param_1 + 0x4e);
  FUN_10aa4b17c(param_1 + 0x49);
  if (param_1[0x46] != 0) {
    param_1[0x47] = param_1[0x46];
    __ZdlPv();
  }
  FUN_10aa4a8b4(param_1 + 0x43);
  FUN_10aa4b1c4(param_1 + 0x40);
  func_0x00010aa4b22c(param_1 + 0x3b);
  func_0x00010aa4b288(param_1 + 0x38);
  func_0x00010aa3cba8(param_1 + 0x35);
  FUN_10aa61480(param_1 + 0x30);
  FUN_10aa3cc04(param_1 + 0x2d);
  __ZNSt3__15mutexD1Ev(param_1 + 0x22);
  func_0x00010726f2e4(param_1 + 0x19);
  func_0x00010aa5a44c(param_1 + 10);
  FUN_10aa6ae18(param_1 + 9);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa34754; end: 10aa3477f;  */

void FUN_10aa34754(void)

{
  func_0x00010aa3464c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa34780; end: 10aa347fb;  */

void FUN_10aa34780(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
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
  undefined4 uStack_168;
  undefined2 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  long lStack_d8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  FUN_10aa347fc(param_1,0);
  FUN_10aa1df74(param_1,0);
  FUN_10aa200c4(param_1,0);
  FUN_10aa23504(param_1);
  FUN_10aa2477c(param_1,0);
  FUN_10aa348c0(param_1,0);
  FUN_10aa34984(param_1,0);
  FUN_10aa34a48(param_1,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6b12c;
  puStack_78 = &UNK_10f68b93f;
  uStack_70 = 0x1a;
  ppuVar9 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar9,&pcStack_68,100,0);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = 0x10aa6b47c;
  ppuStack_150 = &PTR_DAT_110c3d3e0;
  lStack_1f0 = 0x10aa6b47c;
  uStack_1e8 = 0x10c3d3e0;
  uStack_1e4 = 1;
  uStack_1e0 = SUB84(pppuVar4,0);
  uStack_1dc = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_1a0 = CONCAT17(6,(undefined7)uStack_1a0);
  uStack_1b0 = CONCAT17(uStack_1b0._7_1_,0x5357746f6f72);
  pcStack_118 = FUN_10aa6b2d8;
  ppuStack_110 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_148 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_1a8;
  puVar5[8] = uStack_1b0;
  puVar5[10] = uStack_1a0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  puStack_108 = puVar5;
  func_0x000107c2b054(auStack_208,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_118,0,auStack_208);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_110)(&ppuStack_110);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  (**(code **)CONCAT44(uStack_1e4,uStack_1e8))(&uStack_1e8);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  puVar8 = pppuVar4[8][0x144];
  lStack_1f0 = -0x3b8b000000000000;
  uStack_1e8 = 0;
  uStack_1e4 = CONCAT31(uStack_1e4._1_3_,2);
  uStack_1d8 = 0;
  uStack_1d4 = 0x3f000000;
  uStack_1e0 = 0x3f800000;
  uStack_1dc = 0x3f800000;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0;
  uStack_168 = 0x3f800000;
  uStack_160 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_1d4 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_1e8;
  uVar2 = CONCAT44(uStack_1e0,uStack_1e4);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_1d8,uStack_1dc);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_1d4;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_188);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_160;
  func_0x00010726f2e4(&uStack_188);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_1f0,pppuVar4);
    lVar3 = lStack_1f0;
    puVar8 = *(undefined **)(lStack_1f0 + 0x58);
    puVar7 = *(undefined **)(lStack_1f0 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_1e0 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_1e4,uStack_1e8));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_110)(&ppuStack_110);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  (**(code **)CONCAT44(uStack_1e4,uStack_1e8))(&uStack_1e8);
  (*(code *)*ppuStack_150)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa347fc; end: 10aa348bf;  */

void FUN_10aa347fc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_408 [2];
  char cStack_3f1;
  long lStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
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
  undefined4 uStack_368;
  undefined2 uStack_360;
  undefined8 uStack_358;
  undefined **ppuStack_350;
  undefined ***pppuStack_348;
  code *pcStack_318;
  undefined **ppuStack_310;
  undefined8 *puStack_308;
  long lStack_2d8;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined **ppuStack_260;
  code *pcStack_258;
  long lStack_228;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  code *pcStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6aea4;
  puStack_78 = &UNK_10f68b8dc;
  uStack_70 = 0x15;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar4);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10aa6aeb0;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar4);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  pcStack_158 = FUN_10aa6af48;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar4);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  pcStack_1d8 = FUN_10aa6afd4;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume(pppuVar4);
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_268 = FUN_10a061484;
  ppuStack_260 = &PTR_DAT_110b9ec98;
  pcStack_258 = FUN_10aa6b12c;
  puStack_278 = &UNK_10f68b93f;
  uStack_270 = 0x1a;
  ppuVar9 = &puStack_278;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_260;
  (*(code *)*ppuStack_260)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_260)(&ppuStack_260);
  __Unwind_Resume();
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_358 = 0x10aa6b47c;
  ppuStack_350 = &PTR_DAT_110c3d3e0;
  lStack_3f0 = 0x10aa6b47c;
  uStack_3e8 = 0x10c3d3e0;
  uStack_3e4 = 1;
  uStack_3e0 = SUB84(pppuVar4,0);
  uStack_3dc = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_3a0 = CONCAT17(6,(undefined7)uStack_3a0);
  uStack_3b0 = CONCAT17(uStack_3b0._7_1_,0x5357746f6f72);
  pcStack_318 = FUN_10aa6b2d8;
  ppuStack_310 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_348 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_3a8;
  puVar5[8] = uStack_3b0;
  puVar5[10] = uStack_3a0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  puStack_308 = puVar5;
  func_0x000107c2b054(auStack_408,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_318,0,auStack_408);
  if (cStack_3f1 < '\0') {
    __ZdlPv(auStack_408[0]);
  }
  (*(code *)*ppuStack_310)(&ppuStack_310);
  if (uStack_3a0 < 0) {
    __ZdlPv(uStack_3b0);
  }
  (**(code **)CONCAT44(uStack_3e4,uStack_3e8))(&uStack_3e8);
  (*(code *)*ppuStack_350)(&ppuStack_350);
  puVar8 = pppuVar4[8][0x144];
  lStack_3f0 = -0x3b8b000000000000;
  uStack_3e8 = 0;
  uStack_3e4 = CONCAT31(uStack_3e4._1_3_,2);
  uStack_3d8 = 0;
  uStack_3d4 = 0x3f000000;
  uStack_3e0 = 0x3f800000;
  uStack_3dc = 0x3f800000;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_370 = 0;
  uStack_368 = 0x3f800000;
  uStack_360 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_3d4 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_3e8;
  uVar2 = CONCAT44(uStack_3e0,uStack_3e4);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_3d8,uStack_3dc);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_3d4;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_388);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_360;
  func_0x00010726f2e4(&uStack_388);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_3f0,pppuVar4);
    lVar3 = lStack_3f0;
    puVar8 = *(undefined **)(lStack_3f0 + 0x58);
    puVar7 = *(undefined **)(lStack_3f0 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_3e0 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_3e4,uStack_3e8));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_3f1 < '\0') {
    __ZdlPv(auStack_408[0]);
  }
  (*(code *)*ppuStack_310)(&ppuStack_310);
  if (uStack_3a0 < 0) {
    __ZdlPv(uStack_3b0);
  }
  (**(code **)CONCAT44(uStack_3e4,uStack_3e8))(&uStack_3e8);
  (*(code *)*ppuStack_350)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa348c0; end: 10aa34983;  */

void FUN_10aa348c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_388 [2];
  char cStack_371;
  long lStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
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
  undefined4 uStack_2e8;
  undefined2 uStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_2d0;
  undefined ***pppuStack_2c8;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined8 *puStack_288;
  long lStack_258;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1a8;
  undefined **ppuStack_160;
  code *pcStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6aeb0;
  puStack_78 = &UNK_10f68b930;
  uStack_70 = 0xe;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar4);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10aa6af48;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar4);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  pcStack_158 = FUN_10aa6afd4;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar4);
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1e8 = FUN_10a061484;
  ppuStack_1e0 = &PTR_DAT_110b9ec98;
  pcStack_1d8 = FUN_10aa6b12c;
  puStack_1f8 = &UNK_10f68b93f;
  uStack_1f0 = 0x1a;
  ppuVar9 = &puStack_1f8;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_1e0;
  (*(code *)*ppuStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1e0)(&ppuStack_1e0);
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2d8 = 0x10aa6b47c;
  ppuStack_2d0 = &PTR_DAT_110c3d3e0;
  lStack_370 = 0x10aa6b47c;
  uStack_368 = 0x10c3d3e0;
  uStack_364 = 1;
  uStack_360 = SUB84(pppuVar4,0);
  uStack_35c = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_320 = CONCAT17(6,(undefined7)uStack_320);
  uStack_330 = CONCAT17(uStack_330._7_1_,0x5357746f6f72);
  pcStack_298 = FUN_10aa6b2d8;
  ppuStack_290 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_2c8 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_328;
  puVar5[8] = uStack_330;
  puVar5[10] = uStack_320;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  puStack_288 = puVar5;
  func_0x000107c2b054(auStack_388,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_298,0,auStack_388);
  if (cStack_371 < '\0') {
    __ZdlPv(auStack_388[0]);
  }
  (*(code *)*ppuStack_290)(&ppuStack_290);
  if (uStack_320 < 0) {
    __ZdlPv(uStack_330);
  }
  (**(code **)CONCAT44(uStack_364,uStack_368))(&uStack_368);
  (*(code *)*ppuStack_2d0)(&ppuStack_2d0);
  puVar8 = pppuVar4[8][0x144];
  lStack_370 = -0x3b8b000000000000;
  uStack_368 = 0;
  uStack_364 = CONCAT31(uStack_364._1_3_,2);
  uStack_358 = 0;
  uStack_354 = 0x3f000000;
  uStack_360 = 0x3f800000;
  uStack_35c = 0x3f800000;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0x3f800000;
  uStack_2e0 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_354 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_368;
  uVar2 = CONCAT44(uStack_360,uStack_364);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_358,uStack_35c);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_354;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_308);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_2e0;
  func_0x00010726f2e4(&uStack_308);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_370,pppuVar4);
    lVar3 = lStack_370;
    puVar8 = *(undefined **)(lStack_370 + 0x58);
    puVar7 = *(undefined **)(lStack_370 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_360 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_364,uStack_368));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_371 < '\0') {
    __ZdlPv(auStack_388[0]);
  }
  (*(code *)*ppuStack_290)(&ppuStack_290);
  if (uStack_320 < 0) {
    __ZdlPv(uStack_330);
  }
  (**(code **)CONCAT44(uStack_364,uStack_368))(&uStack_368);
  (*(code *)*ppuStack_2d0)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34984; end: 10aa34a47;  */

void FUN_10aa34984(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_308 [2];
  char cStack_2f1;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined2 uStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined ***pppuStack_248;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined8 *puStack_208;
  long lStack_1d8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  long lStack_128;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6af48;
  puStack_78 = &UNK_10f68b921;
  uStack_70 = 0xe;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar4);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10aa6afd4;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar4);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_168 = FUN_10a061484;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  pcStack_158 = FUN_10aa6b12c;
  puStack_178 = &UNK_10f68b93f;
  uStack_170 = 0x1a;
  ppuVar9 = &puStack_178;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_160;
  (*(code *)*ppuStack_160)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_258 = 0x10aa6b47c;
  ppuStack_250 = &PTR_DAT_110c3d3e0;
  lStack_2f0 = 0x10aa6b47c;
  uStack_2e8 = 0x10c3d3e0;
  uStack_2e4 = 1;
  uStack_2e0 = SUB84(pppuVar4,0);
  uStack_2dc = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_2a0 = CONCAT17(6,(undefined7)uStack_2a0);
  uStack_2b0 = CONCAT17(uStack_2b0._7_1_,0x5357746f6f72);
  pcStack_218 = FUN_10aa6b2d8;
  ppuStack_210 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_248 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_2a8;
  puVar5[8] = uStack_2b0;
  puVar5[10] = uStack_2a0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  puStack_208 = puVar5;
  func_0x000107c2b054(auStack_308,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_218,0,auStack_308);
  if (cStack_2f1 < '\0') {
    __ZdlPv(auStack_308[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (uStack_2a0 < 0) {
    __ZdlPv(uStack_2b0);
  }
  (**(code **)CONCAT44(uStack_2e4,uStack_2e8))(&uStack_2e8);
  (*(code *)*ppuStack_250)(&ppuStack_250);
  puVar8 = pppuVar4[8][0x144];
  lStack_2f0 = -0x3b8b000000000000;
  uStack_2e8 = 0;
  uStack_2e4 = CONCAT31(uStack_2e4._1_3_,2);
  uStack_2d8 = 0;
  uStack_2d4 = 0x3f000000;
  uStack_2e0 = 0x3f800000;
  uStack_2dc = 0x3f800000;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_270 = 0;
  uStack_268 = 0x3f800000;
  uStack_260 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_2d4 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_2e8;
  uVar2 = CONCAT44(uStack_2e0,uStack_2e4);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_2d8,uStack_2dc);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_2d4;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_288);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_260;
  func_0x00010726f2e4(&uStack_288);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_2f0,pppuVar4);
    lVar3 = lStack_2f0;
    puVar8 = *(undefined **)(lStack_2f0 + 0x58);
    puVar7 = *(undefined **)(lStack_2f0 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_2e0 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_2e4,uStack_2e8));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_2f1 < '\0') {
    __ZdlPv(auStack_308[0]);
  }
  (*(code *)*ppuStack_210)(&ppuStack_210);
  if (uStack_2a0 < 0) {
    __ZdlPv(uStack_2b0);
  }
  (**(code **)CONCAT44(uStack_2e4,uStack_2e8))(&uStack_2e8);
  (*(code *)*ppuStack_250)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34a48; end: 10aa34b0b;  */

void FUN_10aa34a48(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_288 [2];
  char cStack_271;
  long lStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined8 *puStack_188;
  long lStack_158;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6afd4;
  puStack_78 = &UNK_10f68bd05;
  uStack_70 = 0x16;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar4);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a061484;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10aa6b12c;
  puStack_f8 = &UNK_10f68b93f;
  uStack_f0 = 0x1a;
  ppuVar9 = &puStack_f8;
  FUN_10a57077c();
  pppuVar4 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d8 = 0x10aa6b47c;
  ppuStack_1d0 = &PTR_DAT_110c3d3e0;
  lStack_270 = 0x10aa6b47c;
  uStack_268 = 0x10c3d3e0;
  uStack_264 = 1;
  uStack_260 = SUB84(pppuVar4,0);
  uStack_25c = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_220 = CONCAT17(6,(undefined7)uStack_220);
  uStack_230 = CONCAT17(uStack_230._7_1_,0x5357746f6f72);
  pcStack_198 = FUN_10aa6b2d8;
  ppuStack_190 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_1c8 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_228;
  puVar5[8] = uStack_230;
  puVar5[10] = uStack_220;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  puStack_188 = puVar5;
  func_0x000107c2b054(auStack_288,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_198,0,auStack_288);
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (uStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  (**(code **)CONCAT44(uStack_264,uStack_268))(&uStack_268);
  (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
  puVar8 = pppuVar4[8][0x144];
  lStack_270 = -0x3b8b000000000000;
  uStack_268 = 0;
  uStack_264 = CONCAT31(uStack_264._1_3_,2);
  uStack_258 = 0;
  uStack_254 = 0x3f000000;
  uStack_260 = 0x3f800000;
  uStack_25c = 0x3f800000;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0x3f800000;
  uStack_1e0 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_254 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_268;
  uVar2 = CONCAT44(uStack_260,uStack_264);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_258,uStack_25c);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_254;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_208);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_1e0;
  func_0x00010726f2e4(&uStack_208);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_270,pppuVar4);
    lVar3 = lStack_270;
    puVar8 = *(undefined **)(lStack_270 + 0x58);
    puVar7 = *(undefined **)(lStack_270 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_260 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_264,uStack_268));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_271 < '\0') {
    __ZdlPv(auStack_288[0]);
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (uStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  (**(code **)CONCAT44(uStack_264,uStack_268))(&uStack_268);
  (*(code *)*ppuStack_1d0)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34b0c; end: 10aa34bcf;  */

void FUN_10aa34b0c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *extraout_x8;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
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
  undefined4 uStack_168;
  undefined2 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  long lStack_d8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa6b12c;
  puStack_78 = &UNK_10f68b93f;
  uStack_70 = 0x1a;
  ppuVar9 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar9,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = 0x10aa6b47c;
  ppuStack_150 = &PTR_DAT_110c3d3e0;
  lStack_1f0 = 0x10aa6b47c;
  uStack_1e8 = 0x10c3d3e0;
  uStack_1e4 = 1;
  uStack_1e0 = SUB84(pppuVar4,0);
  uStack_1dc = (undefined4)((ulong)pppuVar4 >> 0x20);
  uStack_1a0 = CONCAT17(6,(undefined7)uStack_1a0);
  uStack_1b0 = CONCAT17(uStack_1b0._7_1_,0x5357746f6f72);
  pcStack_118 = FUN_10aa6b2d8;
  ppuStack_110 = &PTR_FUN_110c3d3c8;
  puVar5 = (undefined8 *)0x58;
  pppuStack_148 = pppuVar4;
  __Znwm();
  *puVar5 = 0x10aa6b47c;
  puVar5[1] = &PTR_DAT_110c3d3e0;
  puVar5[2] = pppuVar4;
  puVar5[9] = uStack_1a8;
  puVar5[8] = uStack_1b0;
  puVar5[10] = uStack_1a0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  puStack_108 = puVar5;
  func_0x000107c2b054(auStack_208,&UNK_10f68a4a1);
  (**(code **)(*ppuVar9 + 0x250))(ppuVar9,&PTR_DAT_110c3a0a8,&pcStack_118,0,auStack_208);
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_110)(&ppuStack_110);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  (**(code **)CONCAT44(uStack_1e4,uStack_1e8))(&uStack_1e8);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  puVar8 = pppuVar4[8][0x144];
  lStack_1f0 = -0x3b8b000000000000;
  uStack_1e8 = 0;
  uStack_1e4 = CONCAT31(uStack_1e4._1_3_,2);
  uStack_1d8 = 0;
  uStack_1d4 = 0x3f000000;
  uStack_1e0 = 0x3f800000;
  uStack_1dc = 0x3f800000;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0;
  uStack_168 = 0x3f800000;
  uStack_160 = 0;
  if (*(int *)(puVar8 + 0x18) < 0xa6) {
    uStack_1d4 = 0;
  }
  pppuVar4[0xc] = (undefined **)0xc475000000000000;
  *(undefined4 *)(pppuVar4 + 0xd) = uStack_1e8;
  uVar2 = CONCAT44(uStack_1e0,uStack_1e4);
  *(ulong *)((long)pppuVar4 + 0x74) = CONCAT44(uStack_1d8,uStack_1dc);
  *(undefined8 *)((long)pppuVar4 + 0x6c) = uVar2;
  *(undefined4 *)((long)pppuVar4 + 0x7c) = uStack_1d4;
  pppuVar4[0x11] = (undefined **)0x0;
  pppuVar4[0x10] = (undefined **)0x0;
  pppuVar4[0x13] = (undefined **)0x0;
  pppuVar4[0x12] = (undefined **)0x0;
  pppuVar4[0x15] = (undefined **)0x0;
  pppuVar4[0x14] = (undefined **)0x0;
  pppuVar4[0x17] = (undefined **)0x0;
  pppuVar4[0x16] = (undefined **)0x0;
  pppuVar4[0x18] = (undefined **)0x0;
  func_0x0001074b2c18(pppuVar4 + 0x19,&uStack_188);
  *(undefined2 *)(pppuVar4 + 0x1e) = uStack_160;
  func_0x00010726f2e4(&uStack_188);
  uVar10 = 0x3ca3d70a;
  if (*(int *)(puVar8 + 0x18) < 0xa8) {
    uVar10 = 0;
  }
  *(undefined4 *)(pppuVar4 + 0x1f) = 0x3f000000;
  *(undefined4 *)((long)pppuVar4 + 0xfc) = uVar10;
  *(undefined4 *)(pppuVar4 + 0x20) = uVar10;
  *(undefined8 *)((long)pppuVar4 + 0x104) = 0x3f800000;
  ppuVar6 = ppuVar9;
  (**(code **)(*ppuVar9 + 0x200))(ppuVar9,&PTR_DAT_110c3a0c8);
  if ((int)ppuVar6 != 0) {
    (**(code **)(*ppuVar9 + 0x210))(ppuVar9,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_1f0,pppuVar4);
    lVar3 = lStack_1f0;
    puVar8 = *(undefined **)(lStack_1f0 + 0x58);
    puVar7 = *(undefined **)(lStack_1f0 + 0x60);
    while (puVar7 != puVar8) {
      puVar7 = puVar7 + -0x10;
      FUN_10a40c30c();
    }
    *(undefined **)(lVar3 + 0x60) = puVar8;
    if ((char)uStack_1e0 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_1e4,uStack_1e8));
    }
    (**(code **)(*ppuVar9 + 0x220))();
    ppuVar6 = ppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  (*(code *)*ppuStack_110)(&ppuStack_110);
  if (uStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  (**(code **)CONCAT44(uStack_1e4,uStack_1e8))(&uStack_1e8);
  (*(code *)*ppuStack_150)(puVar8 + 8);
  __Unwind_Resume();
  ppuVar9 = ppuVar6;
  FUN_10a1c5b90();
  bVar1 = ((ulong)ppuVar9 & 1) == 0;
  if (bVar1) {
    ppuVar9 = ppuVar6 + 0x22;
    __ZNSt3__15mutex4lockEv(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  *extraout_x8 = (long)(ppuVar6 + 0x2a);
  extraout_x8[1] = (long)ppuVar9;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34bd0; end: 10aa34f1b;  */

void FUN_10aa34bd0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *extraout_x8;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 auStack_188 [2];
  char cStack_171;
  long lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
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
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = 0x10aa6b47c;
  ppuStack_d0 = &PTR_DAT_110c3d3e0;
  lStack_170 = 0x10aa6b47c;
  uStack_168 = 0x10c3d3e0;
  uStack_164 = 1;
  uStack_160 = (undefined4)param_1;
  uStack_15c = (undefined4)((ulong)param_1 >> 0x20);
  uStack_120 = CONCAT17(6,(undefined7)uStack_120);
  uStack_130 = CONCAT17(uStack_130._7_1_,0x5357746f6f72);
  pcStack_98 = FUN_10aa6b2d8;
  ppuStack_90 = &PTR_FUN_110c3d3c8;
  puVar3 = (undefined8 *)0x58;
  lStack_c8 = param_1;
  __Znwm();
  *puVar3 = 0x10aa6b47c;
  puVar3[1] = &PTR_DAT_110c3d3e0;
  puVar3[2] = param_1;
  puVar3[9] = uStack_128;
  puVar3[8] = uStack_130;
  puVar3[10] = uStack_120;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_88 = puVar3;
  func_0x000107c2b054(auStack_188,&UNK_10f68a4a1);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3a0a8,&pcStack_98,0,auStack_188);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  (**(code **)CONCAT44(uStack_164,uStack_168))(&uStack_168);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0xa20);
  lStack_170 = -0x3b8b000000000000;
  uStack_168 = 0;
  uStack_164 = CONCAT31(uStack_164._1_3_,2);
  uStack_158 = 0;
  uStack_154 = 0x3f000000;
  uStack_160 = 0x3f800000;
  uStack_15c = 0x3f800000;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x3f800000;
  uStack_e0 = 0;
  if (*(int *)(lVar6 + 0x18) < 0xa6) {
    uStack_154 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0xc475000000000000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x3f800000;
  *(ulong *)(param_1 + 0x6c) = CONCAT44(0x3f800000,uStack_164);
  *(undefined4 *)(param_1 + 0x7c) = uStack_154;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  func_0x0001074b2c18(param_1 + 200,&uStack_108);
  *(undefined2 *)(param_1 + 0xf0) = uStack_e0;
  func_0x00010726f2e4(&uStack_108);
  uVar8 = 0x3ca3d70a;
  if (*(int *)(lVar6 + 0x18) < 0xa8) {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xfc) = uVar8;
  *(undefined4 *)(param_1 + 0x100) = uVar8;
  *(undefined8 *)(param_1 + 0x104) = 0x3f800000;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3a0c8);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_170,param_1);
    lVar2 = lStack_170;
    lVar6 = *(long *)(lStack_170 + 0x58);
    lVar5 = *(long *)(lStack_170 + 0x60);
    while (lVar5 != lVar6) {
      lVar5 = lVar5 + -0x10;
      FUN_10a40c30c();
    }
    *(long *)(lVar2 + 0x60) = lVar6;
    if ((char)uStack_160 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_164,uStack_168));
    }
    (**(code **)(*param_2 + 0x220))();
    plVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  (**(code **)CONCAT44(uStack_164,uStack_168))(&uStack_168);
  (*(code *)*ppuStack_d0)(lVar6 + 8);
  __Unwind_Resume();
  plVar7 = plVar4;
  FUN_10a1c5b90();
  bVar1 = ((ulong)plVar7 & 1) == 0;
  if (bVar1) {
    plVar7 = plVar4 + 0x22;
    __ZNSt3__15mutex4lockEv(plVar7);
  }
  else {
    plVar7 = (long *)0x0;
  }
  *extraout_x8 = (long)(plVar4 + 0x2a);
  extraout_x8[1] = (long)plVar7;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34f1c; end: 10aa34f77;  */

void FUN_10aa34f1c(long *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_2;
  FUN_10a1c5b90();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    lVar3 = param_2 + 0x110;
    __ZNSt3__15mutex4lockEv(lVar3);
  }
  else {
    lVar3 = 0;
  }
  *param_1 = param_2 + 0x150;
  param_1[1] = lVar3;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10aa34f78; end: 10aa34f7f;  */

void FUN_10aa34f78(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *extraout_x8;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 auStack_188 [2];
  char cStack_171;
  long lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
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
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lVar5 = param_1 + -0x18;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = 0x10aa6b47c;
  ppuStack_d0 = &PTR_DAT_110c3d3e0;
  lStack_170 = 0x10aa6b47c;
  uStack_168 = 0x10c3d3e0;
  uStack_164 = 1;
  uStack_120 = CONCAT17(6,(undefined7)uStack_120);
  uStack_130 = CONCAT17(uStack_130._7_1_,0x5357746f6f72);
  pcStack_98 = FUN_10aa6b2d8;
  ppuStack_90 = &PTR_FUN_110c3d3c8;
  puVar3 = (undefined8 *)0x58;
  lStack_c8 = lVar5;
  uStack_160 = lVar5;
  __Znwm();
  *puVar3 = 0x10aa6b47c;
  puVar3[1] = &PTR_DAT_110c3d3e0;
  puVar3[2] = lVar5;
  puVar3[9] = uStack_128;
  puVar3[8] = uStack_130;
  puVar3[10] = uStack_120;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_88 = puVar3;
  func_0x000107c2b054(auStack_188,&UNK_10f68a4a1);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3a0a8,&pcStack_98,0,auStack_188);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  (**(code **)CONCAT44(uStack_164,uStack_168))(&uStack_168);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0xa20);
  lStack_170 = -0x3b8b000000000000;
  uStack_168 = 0;
  uStack_164 = CONCAT31(uStack_164._1_3_,2);
  uStack_158 = 0;
  uStack_154 = 0x3f000000;
  uStack_160._0_4_ = 0x3f800000;
  uStack_160._4_4_ = 0x3f800000;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x3f800000;
  uStack_e0 = 0;
  if (*(int *)(lVar6 + 0x18) < 0xa6) {
    uStack_154 = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0xc475000000000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0x3f800000;
  *(ulong *)(param_1 + 0x54) = CONCAT44(0x3f800000,uStack_164);
  *(undefined4 *)(param_1 + 100) = uStack_154;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x0001074b2c18(param_1 + 0xb0,&uStack_108);
  *(undefined2 *)(param_1 + 0xd8) = uStack_e0;
  func_0x00010726f2e4(&uStack_108);
  uVar8 = 0x3ca3d70a;
  if (*(int *)(lVar6 + 0x18) < 0xa8) {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  *(undefined4 *)(param_1 + 0xe8) = uVar8;
  *(undefined8 *)(param_1 + 0xec) = 0x3f800000;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3a0c8);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3a0c8);
    FUN_10aa34f1c(&lStack_170,lVar5);
    lVar2 = lStack_170;
    lVar6 = *(long *)(lStack_170 + 0x58);
    lVar5 = *(long *)(lStack_170 + 0x60);
    while (lVar5 != lVar6) {
      lVar5 = lVar5 + -0x10;
      FUN_10a40c30c();
    }
    *(long *)(lVar2 + 0x60) = lVar6;
    if ((char)uStack_160 == '\x01') {
      __ZNSt3__15mutex6unlockEv(CONCAT44(uStack_164,uStack_168));
    }
    (**(code **)(*param_2 + 0x220))();
    plVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  (**(code **)CONCAT44(uStack_164,uStack_168))(&uStack_168);
  (*(code *)*ppuStack_d0)(lVar6 + 8);
  __Unwind_Resume();
  plVar7 = plVar4;
  FUN_10a1c5b90();
  bVar1 = ((ulong)plVar7 & 1) == 0;
  if (bVar1) {
    plVar7 = plVar4 + 0x22;
    __ZNSt3__15mutex4lockEv(plVar7);
  }
  else {
    plVar7 = (long *)0x0;
  }
  *extraout_x8 = (long)(plVar4 + 0x2a);
  extraout_x8[1] = (long)plVar7;
  *(bool *)(extraout_x8 + 2) = bVar1;
  return;
}



/* Entry: 10aa34f80; end: 10aa34fff;  */

void FUN_10aa34f80(long param_1,long *param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10aa1903c(param_2,&PTR_DAT_110c3a0a8,*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3a0c8);
  FUN_10aa34f1c(auStack_38,param_1);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa34ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa35000; end: 10aa35007;  */

void FUN_10aa35000(long param_1,long *param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10aa1903c(param_2,&PTR_DAT_110c3a0a8,*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3a0c8);
  FUN_10aa34f1c(auStack_38,param_1 + -0x18);
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa34ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa35008; end: 10aa37d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aa35008(float param_1,long param_2)

{
  int **ppiVar1;
  long *plVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  int *piVar11;
  int *piVar12;
  code *pcVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int **ppiVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  long *plVar37;
  long lVar38;
  int **ppiVar39;
  int *piVar40;
  undefined8 *puVar41;
  long lVar42;
  int *piVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  ushort *puVar46;
  long *plVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  ulong uVar50;
  long *plVar51;
  undefined1 auVar54 [12];
  float fVar52;
  float fVar53;
  undefined4 extraout_s0;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [12];
  float fVar61;
  float fVar62;
  undefined4 extraout_s1;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 extraout_s2;
  undefined8 uVar68;
  undefined1 auVar69 [12];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  int iVar84;
  float fVar85;
  int iVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  long lStack_300;
  undefined8 *puStack_2d0;
  int *piStack_2c8;
  int *piStack_2c0;
  int *piStack_2b0;
  float fStack_2a8;
  undefined4 auStack_2a4 [2];
  undefined8 uStack_29c;
  undefined1 auStack_294 [12];
  long *plStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int **ppiStack_274;
  undefined8 uStack_26c;
  float fStack_264;
  long *plStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined4 uStack_214;
  long lStack_210;
  undefined8 uStack_1e0;
  int **ppiStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  undefined2 auStack_198 [4];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  long lStack_100;
  long *plStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  int *piStack_d8;
  float fStack_d0;
  undefined8 uStack_c4;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_2 + 0x50);
  lVar35 = param_2 + 0xf8;
  lVar27 = 0x1137ec120;
  if (lVar24 == 0) {
    lVar29 = param_2 + 0x60;
  }
  else {
    lVar29 = lVar24 + 0xe0;
    if (*(long *)(lVar24 + 0x178) != 0) {
      lVar35 = *(long *)(lVar24 + 0x178) + 0xe0;
    }
    if (*(long *)(lVar24 + 0x188) != 0) {
      lVar27 = *(long *)(lVar24 + 0x188) + 0xe0;
    }
  }
  plVar47 = *(long **)(param_2 + 0x48);
  FUN_10aa34f1c(&uStack_1e0);
  ppiVar1 = (int **)uStack_1e0;
  ppiVar18 = (int **)uStack_1e0[8];
joined_r0x00010aa350a4:
  if (ppiVar18 != (int **)0x0) {
    do {
      plVar15 = (long *)ppiVar18[6];
      if (plVar15 == (long *)0x0) {
LAB_10aa350e0:
        ppiVar39 = ppiVar1 + 6;
        func_0x00010aa6151c(ppiVar39,ppiVar18);
        ppiVar18 = ppiVar39;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        fStack_218 = SUB84(plVar15,0);
        uStack_214 = (undefined4)((ulong)plVar15 >> 0x20);
        if (plVar15 == (long *)0x0) goto LAB_10aa350e0;
        plVar16 = (long *)ppiVar18[5];
        uStack_220._0_4_ = SUB84(plVar16,0);
        uStack_220._4_4_ = (float)((ulong)plVar16 >> 0x20);
        if (plVar16 == (long *)0x0) {
          ppiVar39 = ppiVar1 + 6;
          func_0x00010aa6151c(ppiVar39,ppiVar18);
        }
        else {
          (**(code **)(*plVar16 + 0xc0))();
          ppiVar39 = (int **)*ppiVar18;
        }
        plVar16 = plVar15 + 1;
        do {
          lVar24 = *plVar16;
          cVar8 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar14) {
            *plVar16 = lVar24 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        ppiVar18 = ppiVar39;
        if (lVar24 == 0) goto LAB_10aa35128;
      }
      if (ppiVar18 == (int **)0x0) break;
    } while( true );
  }
  if ((char)lStack_1d0 == '\x01') {
    __ZNSt3__15mutex6unlockEv(ppiStack_1d8);
  }
  plVar15 = plVar47;
  FUN_10aa2ff28(&piStack_2c8,plVar47,*(undefined8 *)(param_2 + 0x40),lVar29,lVar35,lVar27);
  if (piStack_2c8 == piStack_2c0) {
    uStack_220._0_4_ = (float)param_2;
    uStack_220._4_4_ = (float)((ulong)param_2 >> 0x20);
    fStack_218 = (float)((uint)fStack_218 & 0xffffff00);
    lVar35 = *(long *)(*(long *)(param_2 + 0x40) + 0xa20);
    if ((*(byte *)(lVar35 + 0x1c) >> 5 & 1) == 0) {
      bVar14 = 0xdf < *(int *)(lVar35 + 0x18);
    }
    else {
      bVar14 = true;
    }
    puVar41 = *(undefined8 **)(param_2 + 0x1c0);
    puVar34 = *(undefined8 **)(param_2 + 0x1c8);
    lStack_300 = param_2;
    if (puVar41 != puVar34) {
      puVar41 = puVar41 + 0x14;
      do {
        if (*(char *)(puVar41 + 4) == '\x01') {
          if (bVar14) {
            uStack_1e0 = (undefined **)((ulong)uStack_1e0._1_7_ << 8);
            lStack_1d0 = (ulong)lStack_1d0._1_7_ << 8;
            FUN_10aa6b4a8(puVar41,&uStack_1e0);
          }
          else {
            uStack_1e0 = (undefined **)((ulong)uStack_1e0._1_7_ << 8);
            lStack_1d0 = (ulong)lStack_1d0._1_7_ << 8;
            FUN_10aa6b6ec(*puVar41,&uStack_1e0);
          }
        }
        else {
          if (bVar14) {
            uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
            if ((*(byte *)(puVar41 + 9) & 1) == 0) goto LAB_10aa379b4;
            uStack_1e0 = (undefined **)0x0;
            ppiStack_1d8 = (int **)0x0;
            lStack_1d0 = 0;
            FUN_10aa6b9c8(puVar41 + 5,&uStack_1e0);
          }
          else {
            if ((*(byte *)(puVar41 + 9) & 1) == 0) goto LAB_10aa379b4;
            uStack_1e0 = (undefined **)0x0;
            ppiStack_1d8 = (int **)0x0;
            lStack_1d0 = 0;
            FUN_10aa6bbc4(puVar41[5],&uStack_1e0);
          }
          FUN_10aa4a8b4(&uStack_1e0);
        }
        puVar49 = puVar41 + 0xc;
        puVar41 = puVar41 + 0x20;
      } while (puVar49 != puVar34);
      lStack_300 = CONCAT44(uStack_220._4_4_,(float)uStack_220);
      puVar41 = *(undefined8 **)(lStack_300 + 0x1c0);
      puVar34 = *(undefined8 **)(lStack_300 + 0x1c8);
    }
    while (puVar34 != puVar41) {
      puVar34 = puVar34 + -0x20;
      FUN_10aa4b2f0(puVar34);
    }
    *(undefined8 **)(lStack_300 + 0x1c8) = puVar41;
    FUN_10aa381b0(lStack_300 + 0x308);
LAB_10aa37910:
    FUN_10aa4af2c(&piStack_2c8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar16 = *(long **)(param_2 + 0x308);
    plVar37 = *(long **)(param_2 + 0x310);
    if (plVar16 != plVar37) {
      piVar40 = *(int **)(param_2 + 0x48);
      do {
        plVar17 = (long *)plVar16[1];
        if ((plVar17 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar17 != (long *)0x0)) {
          lVar35 = *plVar16;
          plVar19 = plVar17 + 1;
          do {
            lVar27 = *plVar19;
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = lVar27 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          ppiVar18 = ppiStack_1d8;
          if (lVar27 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            ppiVar18 = ppiStack_1d8;
          }
          ppiStack_1d8 = ppiVar18;
          if (lVar35 != 0) {
            uVar33 = *(undefined8 *)(lVar35 + 0x3a0);
            if (*piVar40 == (int)uVar33) {
              lVar35 = *(long *)(lVar35 + 0x3a8);
              if ((*(byte *)(lVar35 + 0x148) & 3) == 0) {
                if ((*(uint *)(lVar35 + 0x158) & 0xfffffffe) != 4) {
                  *(undefined4 *)(lVar35 + 0x158) = 1;
                }
                *(undefined4 *)(lVar35 + 0x15c) = 0;
              }
              for (piVar43 = *(int **)(piVar40 + 4); piVar43 != piVar40 + 2;
                  piVar43 = *(int **)(piVar43 + 2)) {
                if (piVar43[5] == (int)((ulong)uVar33 >> 0x20)) goto LAB_10aa35294;
              }
              piVar43 = *(int **)(piVar40 + 4);
              uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
              if (*(long *)(piVar40 + 6) == 0) goto LAB_10aa379b4;
LAB_10aa35294:
              bVar7 = *(byte *)(plVar16 + 5);
              fVar94 = 0.01;
              if ((bVar7 >> 2 & 1) != 0) {
                fVar94 = 0.0;
                if (*(float *)(lVar35 + 0x230) != 0.0) {
                  fVar94 = (1.0 / *(float *)(lVar35 + 0x230)) * 0.01;
                }
              }
              bVar6 = *(byte *)(piVar43 + 4);
              fVar92 = *(float *)(plVar16 + 2);
              fVar53 = fVar94 * fVar92;
              uVar68 = *(undefined8 *)((long)plVar16 + 0x14);
              fVar93 = (float)uVar68;
              fVar52 = fVar93 * fVar94;
              fVar62 = (float)((ulong)uVar68 >> 0x20);
              fVar94 = fVar62 * fVar94;
              uVar33 = CONCAT44(fVar94,fVar52);
              if ((bVar7 & 1) == 0) {
                if ((bVar7 >> 1 & 1) == 0) {
                  if ((bVar6 & 1) == 0) {
                    fVar93 = (float)*(undefined8 *)(piVar43 + 0x21) * fVar53;
                    fVar62 = (float)((ulong)*(undefined8 *)(piVar43 + 0x21) >> 0x20) * fVar53;
                    fVar53 = fVar52 * (float)piVar43[0x24] + fVar53 * (float)piVar43[0x20] +
                             fVar94 * (float)piVar43[0x28] + (float)piVar43[0x2c] * 0.0;
                    uVar33 = CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(piVar43 + 0x25) >>
                                                      0x20) * fVar52 +
                                      (float)((ulong)*(undefined8 *)(piVar43 + 0x29) >> 0x20) *
                                      fVar94 + (float)((ulong)*(undefined8 *)(piVar43 + 0x2d) >>
                                                      0x20) * 0.0,
                                      fVar93 + (float)*(undefined8 *)(piVar43 + 0x25) * fVar52 +
                                      (float)*(undefined8 *)(piVar43 + 0x29) * fVar94 +
                                      (float)*(undefined8 *)(piVar43 + 0x2d) * 0.0);
                  }
                  fVar94 = (float)uVar33;
                  auVar69._4_4_ = fVar94;
                  auVar69._0_4_ = fVar53;
                  fVar52 = (float)((ulong)uVar33 >> 0x20);
                  auVar69._8_4_ = fVar52;
                  if ((bVar7 >> 4 & 1) != 0) {
                    auVar55._0_4_ = fVar53 * *(float *)(lVar35 + 0x70);
                    auVar55._4_4_ = fVar94 * *(float *)(lVar35 + 0x74);
                    auVar55._8_4_ = fVar52 * *(float *)(lVar35 + 0x78);
                    auVar55._12_4_ = *(float *)(lVar35 + 0x7c) * 0.0;
                    auVar64._0_4_ = fVar53 * *(float *)(lVar35 + 0x80);
                    auVar64._4_4_ = fVar94 * *(float *)(lVar35 + 0x84);
                    auVar64._8_4_ = fVar52 * *(float *)(lVar35 + 0x88);
                    auVar64._12_4_ = *(float *)(lVar35 + 0x8c) * 0.0;
                    auVar75._0_4_ = fVar53 * *(float *)(lVar35 + 0x90);
                    auVar75._4_4_ = fVar94 * *(float *)(lVar35 + 0x94);
                    auVar75._8_4_ = fVar52 * *(float *)(lVar35 + 0x98);
                    auVar70 = NEON_ext(auVar55,auVar55,8,1);
                    auVar78 = NEON_ext(auVar64,auVar64,8,1);
                    auVar75._12_4_ = 0;
                    auVar69._4_4_ = auVar64._0_4_ + auVar64._4_4_ + auVar78._0_4_;
                    auVar69._0_4_ = auVar55._0_4_ + auVar55._4_4_ + auVar70._0_4_;
                    auVar70 = NEON_ext(auVar75,auVar75,8,1);
                    auVar69._8_4_ = auVar75._0_4_ + auVar75._4_4_ + auVar70._0_4_ + auVar70._4_4_;
                  }
                  fVar94 = auVar69._0_4_ * *(float *)(lVar35 + 0x240);
                  fVar52 = auVar69._4_4_ * *(float *)(lVar35 + 0x244);
                  fVar53 = auVar69._8_4_ * *(float *)(lVar35 + 0x248);
                  if ((bVar7 >> 3 & 1) == 0) {
                    *(float *)(lVar35 + 0x288) = fVar53 + *(float *)(lVar35 + 0x288);
                    *(float *)(lVar35 + 0x28c) =
                         *(float *)(lVar35 + 0x24c) * 0.0 + *(float *)(lVar35 + 0x28c);
                    *(float *)(lVar35 + 0x280) = fVar94 + *(float *)(lVar35 + 0x280);
                    *(float *)(lVar35 + 0x284) = fVar52 + *(float *)(lVar35 + 0x284);
                  }
                  else {
                    fVar93 = *(float *)(lVar35 + 0x230);
                    *(float *)(lVar35 + 0x218) = *(float *)(lVar35 + 0x218) + fVar53 * fVar93;
                    *(float *)(lVar35 + 0x21c) = *(float *)(lVar35 + 0x21c) + 0.0;
                    *(float *)(lVar35 + 0x210) = *(float *)(lVar35 + 0x210) + fVar94 * fVar93;
                    *(float *)(lVar35 + 0x214) = *(float *)(lVar35 + 0x214) + fVar52 * fVar93;
                  }
                }
                else {
                  fVar93 = (float)*(undefined8 *)((long)plVar16 + 0x1c) * 0.01;
                  fVar62 = (float)((ulong)*(undefined8 *)((long)plVar16 + 0x1c) >> 0x20) * 0.01;
                  uVar68 = CONCAT44(fVar62,fVar93);
                  fStack_218 = *(float *)((long)plVar16 + 0x24) * 0.01;
                  if ((bVar6 & 1) == 0) {
                    fVar92 = (float)*(undefined8 *)(piVar43 + 0x20);
                    fVar95 = (float)((ulong)*(undefined8 *)(piVar43 + 0x20) >> 0x20);
                    fVar96 = (float)*(undefined8 *)(piVar43 + 0x24);
                    fVar97 = (float)((ulong)*(undefined8 *)(piVar43 + 0x24) >> 0x20);
                    fVar98 = (float)*(undefined8 *)(piVar43 + 0x28);
                    fVar99 = (float)((ulong)*(undefined8 *)(piVar43 + 0x28) >> 0x20);
                    fVar100 = (float)*(undefined8 *)(piVar43 + 0x2c) * 0.0;
                    fVar101 = (float)((ulong)*(undefined8 *)(piVar43 + 0x2c) >> 0x20) * 0.0;
                    uStack_1e0 = (undefined **)
                                 CONCAT44(fVar95 * fVar53 + fVar97 * fVar52 +
                                          fVar99 * fVar94 + fVar101,
                                          fVar92 * fVar53 + fVar96 * fVar52 +
                                          fVar98 * fVar94 + fVar100);
                    uVar33 = NEON_ext(uVar68,uVar33,4,1);
                    uVar68 = CONCAT44(fVar95 * fVar93 + fVar97 * fVar62 +
                                      fVar99 * fStack_218 + fVar101,
                                      fVar92 * fVar93 + fVar96 * fVar62 +
                                      fVar98 * fStack_218 + fVar100);
                    fStack_218 = fVar93 * (float)piVar43[0x22] +
                                 (float)uVar33 * (float)piVar43[0x26] +
                                 fStack_218 * (float)piVar43[0x2a] + (float)piVar43[0x2e] * 0.0;
                    fVar94 = fVar53 * (float)piVar43[0x22] +
                             (float)((ulong)uVar33 >> 0x20) * (float)piVar43[0x26] +
                             fVar94 * (float)piVar43[0x2a] + (float)piVar43[0x2e] * 0.0;
                  }
                  else {
                    uStack_1e0 = (undefined **)CONCAT44(fVar52,fVar53);
                  }
                  *(float *)((ulong)&uStack_1e0 | 8) = fVar94;
                  ppiStack_1d8 = (int **)((ulong)ppiVar18 & 0xffffffff);
                  uStack_220._0_4_ = (float)uVar68;
                  uStack_220._4_4_ = (float)((ulong)uVar68 >> 0x20);
                  if ((bVar7 >> 4 & 1) != 0) {
                    uStack_1e0._4_4_ = (float)((ulong)uStack_1e0 >> 0x20);
                    ppiStack_1d8._0_4_ = SUB84(ppiVar18,0);
                    auVar77._0_4_ = *(float *)(lVar35 + 0x70) * (float)uStack_1e0;
                    auVar77._4_4_ = *(float *)(lVar35 + 0x74) * uStack_1e0._4_4_;
                    auVar77._8_4_ = *(float *)(lVar35 + 0x78) * ppiStack_1d8._0_4_;
                    auVar77._12_4_ = *(float *)(lVar35 + 0x7c) * 0.0;
                    auVar82._0_4_ = (float)uStack_1e0 * *(float *)(lVar35 + 0x80);
                    auVar82._4_4_ = uStack_1e0._4_4_ * *(float *)(lVar35 + 0x84);
                    auVar82._8_4_ = ppiStack_1d8._0_4_ * *(float *)(lVar35 + 0x88);
                    auVar82._12_4_ = *(float *)(lVar35 + 0x8c) * 0.0;
                    fVar94 = (float)*(undefined8 *)(lVar35 + 0x90);
                    auVar58._0_4_ = (float)uStack_1e0 * fVar94;
                    fVar52 = (float)((ulong)*(undefined8 *)(lVar35 + 0x90) >> 0x20);
                    auVar58._4_4_ = uStack_1e0._4_4_ * fVar52;
                    fVar53 = (float)*(undefined8 *)(lVar35 + 0x98);
                    auVar58._8_4_ = ppiStack_1d8._0_4_ * fVar53;
                    auVar70 = NEON_ext(auVar77,auVar77,8,1);
                    auVar78 = NEON_ext(auVar82,auVar82,8,1);
                    auVar58._12_4_ = 0;
                    uStack_1e0 = (undefined **)
                                 CONCAT44(auVar82._0_4_ + auVar82._4_4_ + auVar78._0_4_,
                                          auVar77._0_4_ + auVar77._4_4_ + auVar70._0_4_);
                    auVar70 = NEON_ext(auVar58,auVar58,8,1);
                    ppiStack_1d8 = (int **)(ulong)(uint)(auVar58._0_4_ + auVar58._4_4_ +
                                                        auVar70._0_4_ + auVar70._4_4_);
                    auVar66._0_4_ = *(float *)(lVar35 + 0x70) * (float)uStack_220;
                    auVar66._4_4_ = *(float *)(lVar35 + 0x74) * uStack_220._4_4_;
                    auVar66._8_4_ = *(float *)(lVar35 + 0x78) * fStack_218;
                    auVar66._12_4_ = *(float *)(lVar35 + 0x7c) * 0.0;
                    auVar74._0_4_ = *(float *)(lVar35 + 0x80) * (float)uStack_220;
                    auVar74._4_4_ = *(float *)(lVar35 + 0x84) * uStack_220._4_4_;
                    auVar74._8_4_ = *(float *)(lVar35 + 0x88) * fStack_218;
                    auVar74._12_4_ = *(float *)(lVar35 + 0x8c) * 0.0;
                    auVar59._0_4_ = fVar94 * (float)uStack_220;
                    auVar59._4_4_ = fVar52 * uStack_220._4_4_;
                    auVar59._8_4_ = fVar53 * fStack_218;
                    auVar70 = NEON_ext(auVar66,auVar66,8,1);
                    auVar78 = NEON_ext(auVar74,auVar74,8,1);
                    auVar59._12_4_ = 0;
                    uStack_220._0_4_ = auVar66._0_4_ + auVar66._4_4_ + auVar70._0_4_;
                    uStack_220._4_4_ = auVar74._0_4_ + auVar74._4_4_ + auVar78._0_4_;
                    auVar70 = NEON_ext(auVar59,auVar59,8,1);
                    fStack_218 = auVar59._0_4_ + auVar59._4_4_ + auVar70._0_4_ + auVar70._4_4_;
                  }
                  uStack_214 = 0;
                  if ((bVar7 >> 3 & 1) == 0) {
                    auVar60._0_4_ = (float)uStack_1e0 * *(float *)(lVar35 + 0x240);
                    auVar60._4_4_ = uStack_1e0._4_4_ * *(float *)(lVar35 + 0x244);
                    auVar60._8_4_ = ppiStack_1d8._0_4_ * *(float *)(lVar35 + 0x248);
                    auVar60._12_4_ = *(float *)(lVar35 + 0x24c) * 0.0;
                    auVar9._4_4_ = uStack_220._4_4_;
                    auVar9._0_4_ = (float)uStack_220;
                    auVar9._8_4_ = fStack_218;
                    auVar9._12_4_ = 0;
                    auVar70 = NEON_ext(auVar9,auVar9,0xc,1);
                    auVar70 = NEON_ext(auVar70,auVar9,8,1);
                    auVar78 = NEON_ext(auVar60,auVar60,0xc,1);
                    auVar78 = NEON_ext(auVar78,auVar60,8,1);
                    auVar67._0_4_ =
                         (float)uStack_220 * auVar78._0_4_ - auVar60._0_4_ * auVar70._0_4_;
                    auVar67._4_4_ = uStack_220._4_4_ * auVar78._4_4_ - auVar60._4_4_ * auVar70._4_4_
                    ;
                    auVar67._8_4_ = fStack_218 * auVar78._8_4_ - auVar60._8_4_ * auVar70._8_4_;
                    auVar67._12_4_ = auVar78._12_4_ * 0.0 - auVar60._12_4_ * auVar70._12_4_;
                    auVar70 = NEON_ext(auVar67,auVar67,0xc,1);
                    auVar70 = NEON_ext(auVar70,auVar67,8,1);
                    *(float *)(lVar35 + 0x288) = *(float *)(lVar35 + 0x288) + auVar60._8_4_;
                    *(float *)(lVar35 + 0x28c) = *(float *)(lVar35 + 0x28c) + auVar60._12_4_;
                    *(float *)(lVar35 + 0x280) = *(float *)(lVar35 + 0x280) + auVar60._0_4_;
                    *(float *)(lVar35 + 0x284) = *(float *)(lVar35 + 0x284) + auVar60._4_4_;
                    *(float *)(lVar35 + 0x298) =
                         *(float *)(lVar35 + 0x298) + *(float *)(lVar35 + 0x318) * auVar70._8_4_;
                    *(float *)(lVar35 + 0x29c) =
                         *(float *)(lVar35 + 0x29c) + *(float *)(lVar35 + 0x31c) * 0.0;
                    *(float *)(lVar35 + 0x290) =
                         *(float *)(lVar35 + 0x290) + *(float *)(lVar35 + 0x310) * auVar70._0_4_;
                    *(float *)(lVar35 + 0x294) =
                         *(float *)(lVar35 + 0x294) + *(float *)(lVar35 + 0x314) * auVar70._4_4_;
                  }
                  else {
                    plVar15 = &uStack_1e0;
                    func_0x00010982bbe0(lVar35 + 0x60,plVar15,&uStack_220);
                  }
                }
              }
              else {
                if ((bVar7 >> 2 & 1) == 0) {
                  fVar53 = fVar53 * 0.01;
                  fVar52 = fVar52 * 0.01;
                  uVar33 = CONCAT44(fVar52,fVar53);
                  fVar94 = fVar94 * 0.01;
                  if ((bVar6 & 1) == 0) {
                    fVar93 = (float)piVar43[0x31];
                    uVar33 = CONCAT44(((float)((ulong)*(undefined8 *)(piVar43 + 0x20) >> 0x20) *
                                       fVar53 + (float)((ulong)*(undefined8 *)(piVar43 + 0x24) >>
                                                       0x20) * fVar52 +
                                      (float)((ulong)*(undefined8 *)(piVar43 + 0x28) >> 0x20) *
                                      fVar94 + (float)((ulong)*(undefined8 *)(piVar43 + 0x2c) >>
                                                      0x20) * 0.0) * fVar93,
                                      ((float)*(undefined8 *)(piVar43 + 0x20) * fVar53 +
                                       (float)*(undefined8 *)(piVar43 + 0x24) * fVar52 +
                                      (float)*(undefined8 *)(piVar43 + 0x28) * fVar94 +
                                      (float)*(undefined8 *)(piVar43 + 0x2c) * 0.0) * fVar93);
                    fVar94 = fVar93 * ((float)piVar43[0x22] * fVar53 + (float)piVar43[0x26] * fVar52
                                      + fVar94 * (float)piVar43[0x2a] + (float)piVar43[0x2e] * 0.0);
                  }
                  auVar63._8_4_ = fVar94;
                  auVar63._0_8_ = uVar33;
                  if ((bVar7 >> 4 & 1) != 0) {
                    fVar52 = (float)uVar33;
                    auVar56._0_4_ = fVar52 * *(float *)(lVar35 + 0x70);
                    fVar53 = (float)((ulong)uVar33 >> 0x20);
                    auVar56._4_4_ = fVar53 * *(float *)(lVar35 + 0x74);
                    auVar56._8_4_ = fVar94 * *(float *)(lVar35 + 0x78);
                    auVar56._12_4_ = *(float *)(lVar35 + 0x7c) * 0.0;
                    auVar71._0_4_ = fVar52 * *(float *)(lVar35 + 0x80);
                    auVar71._4_4_ = fVar53 * *(float *)(lVar35 + 0x84);
                    auVar71._8_4_ = fVar94 * *(float *)(lVar35 + 0x88);
                    auVar71._12_4_ = *(float *)(lVar35 + 0x8c) * 0.0;
                    auVar76._0_4_ = fVar52 * *(float *)(lVar35 + 0x90);
                    auVar76._4_4_ = fVar53 * *(float *)(lVar35 + 0x94);
                    auVar76._8_4_ = fVar94 * *(float *)(lVar35 + 0x98);
                    auVar70 = NEON_ext(auVar56,auVar56,8,1);
                    auVar78 = NEON_ext(auVar71,auVar71,8,1);
                    auVar76._12_4_ = 0;
                    auVar63._4_4_ = auVar71._0_4_ + auVar71._4_4_ + auVar78._0_4_;
                    auVar63._0_4_ = auVar56._0_4_ + auVar56._4_4_ + auVar70._0_4_;
                    auVar70 = NEON_ext(auVar76,auVar76,8,1);
                    auVar63._8_4_ = auVar76._0_4_ + auVar76._4_4_ + auVar70._0_4_ + auVar70._4_4_;
                  }
                  fVar52 = auVar63._0_4_;
                  fVar53 = auVar63._4_4_;
                  fVar93 = auVar63._8_4_;
                  if ((bVar7 >> 3 & 1) != 0) {
                    auVar57._0_4_ = fVar52 * *(float *)(lVar35 + 0x1e0);
                    auVar57._4_4_ = fVar53 * *(float *)(lVar35 + 0x1e4);
                    auVar57._8_4_ = fVar93 * *(float *)(lVar35 + 0x1e8);
                    auVar57._12_4_ = *(float *)(lVar35 + 0x1ec) * 0.0;
                    auVar73._0_4_ = fVar52 * *(float *)(lVar35 + 0x1f0);
                    auVar73._4_4_ = fVar53 * *(float *)(lVar35 + 500);
                    auVar73._8_4_ = fVar93 * *(float *)(lVar35 + 0x1f8);
                    auVar73._12_4_ = *(float *)(lVar35 + 0x1fc) * 0.0;
                    auVar65._0_4_ = fVar52 * *(float *)(lVar35 + 0x200);
                    auVar65._4_4_ = fVar53 * *(float *)(lVar35 + 0x204);
                    auVar65._8_4_ = fVar93 * *(float *)(lVar35 + 0x208);
                    auVar78 = NEON_ext(auVar57,auVar57,8,1);
                    auVar81 = NEON_ext(auVar73,auVar73,8,1);
                    auVar65._12_4_ = 0;
                    auVar70 = NEON_ext(auVar65,auVar65,8,1);
                    fVar94 = *(float *)(lVar35 + 0x220) +
                             (auVar57._0_4_ + auVar57._4_4_ + auVar78._0_4_) *
                             *(float *)(lVar35 + 0x310);
                    fVar52 = *(float *)(lVar35 + 0x224) +
                             (auVar73._0_4_ + auVar73._4_4_ + auVar81._0_4_) *
                             *(float *)(lVar35 + 0x314);
                    fVar53 = *(float *)(lVar35 + 0x228) +
                             (auVar65._0_4_ + auVar65._4_4_ + auVar70._0_4_ + auVar70._4_4_) *
                             *(float *)(lVar35 + 0x318);
                    fVar93 = *(float *)(lVar35 + 0x22c) + *(float *)(lVar35 + 0x31c) * 0.0;
LAB_10aa35848:
                    *(float *)(lVar35 + 0x228) = fVar53;
                    *(float *)(lVar35 + 0x22c) = fVar93;
                    *(float *)(lVar35 + 0x220) = fVar94;
                    *(float *)(lVar35 + 0x224) = fVar52;
                    goto LAB_10aa35860;
                  }
                  fVar94 = *(float *)(lVar35 + 0x31c);
                  fVar52 = fVar52 * *(float *)(lVar35 + 0x310);
                  fVar53 = fVar53 * *(float *)(lVar35 + 0x314);
                  fVar93 = fVar93 * *(float *)(lVar35 + 0x318);
                }
                else {
                  if ((bVar6 & 1) == 0) {
                    fVar94 = (float)piVar43[0x30];
                    fVar52 = (float)*(undefined8 *)(piVar43 + 0x21) * fVar92;
                    fVar53 = (float)((ulong)*(undefined8 *)(piVar43 + 0x21) >> 0x20) * fVar92;
                    fVar92 = fVar94 * (fVar93 * (float)piVar43[0x24] + fVar92 * (float)piVar43[0x20]
                                      + fVar62 * (float)piVar43[0x28] + (float)piVar43[0x2c] * 0.0);
                    uVar68 = CONCAT44((fVar53 + (float)((ulong)*(undefined8 *)(piVar43 + 0x25) >>
                                                       0x20) * fVar93 +
                                      (float)((ulong)*(undefined8 *)(piVar43 + 0x29) >> 0x20) *
                                      fVar62 + (float)((ulong)*(undefined8 *)(piVar43 + 0x2d) >>
                                                      0x20) * 0.0) * fVar94,
                                      (fVar52 + (float)*(undefined8 *)(piVar43 + 0x25) * fVar93 +
                                      (float)*(undefined8 *)(piVar43 + 0x29) * fVar62 +
                                      (float)*(undefined8 *)(piVar43 + 0x2d) * 0.0) * fVar94);
                  }
                  fVar94 = (float)uVar68;
                  auVar54._4_4_ = fVar94;
                  auVar54._0_4_ = fVar92;
                  fVar52 = (float)((ulong)uVar68 >> 0x20);
                  auVar54._8_4_ = fVar52;
                  if ((bVar7 >> 4 & 1) != 0) {
                    auVar78._0_4_ = fVar92 * *(float *)(lVar35 + 0x70);
                    auVar78._4_4_ = fVar94 * *(float *)(lVar35 + 0x74);
                    auVar78._8_4_ = fVar52 * *(float *)(lVar35 + 0x78);
                    auVar78._12_4_ = *(float *)(lVar35 + 0x7c) * 0.0;
                    auVar81._0_4_ = fVar92 * *(float *)(lVar35 + 0x80);
                    auVar81._4_4_ = fVar94 * *(float *)(lVar35 + 0x84);
                    auVar81._8_4_ = fVar52 * *(float *)(lVar35 + 0x88);
                    auVar81._12_4_ = *(float *)(lVar35 + 0x8c) * 0.0;
                    auVar80._0_4_ = fVar92 * *(float *)(lVar35 + 0x90);
                    auVar80._4_4_ = fVar94 * *(float *)(lVar35 + 0x94);
                    auVar80._8_4_ = fVar52 * *(float *)(lVar35 + 0x98);
                    auVar70 = NEON_ext(auVar78,auVar78,8,1);
                    auVar79 = NEON_ext(auVar81,auVar81,8,1);
                    auVar80._12_4_ = 0;
                    auVar54._4_4_ = auVar81._0_4_ + auVar81._4_4_ + auVar79._0_4_;
                    auVar54._0_4_ = auVar78._0_4_ + auVar78._4_4_ + auVar70._0_4_;
                    auVar70 = NEON_ext(auVar80,auVar80,8,1);
                    auVar54._8_4_ = auVar80._0_4_ + auVar80._4_4_ + auVar70._0_4_ + auVar70._4_4_;
                  }
                  fVar94 = auVar54._0_4_;
                  fVar52 = auVar54._4_4_;
                  fVar53 = auVar54._8_4_;
                  if ((bVar7 >> 3 & 1) != 0) {
                    fVar94 = fVar94 + *(float *)(lVar35 + 0x220);
                    fVar52 = fVar52 + *(float *)(lVar35 + 0x224);
                    fVar53 = fVar53 + *(float *)(lVar35 + 0x228);
                    fVar93 = *(float *)(lVar35 + 0x22c) + 0.0;
                    *(int *)(lVar35 + 0x1c8) = *(int *)(lVar35 + 0x1c8) + 1;
                    goto LAB_10aa35848;
                  }
                  fVar93 = *(float *)(lVar35 + 0x70);
                  fVar62 = *(float *)(lVar35 + 0x74);
                  fVar92 = *(float *)(lVar35 + 0x78);
                  fVar95 = *(float *)(lVar35 + 0x80);
                  fVar96 = *(float *)(lVar35 + 0x84);
                  fVar97 = *(float *)(lVar35 + 0x88);
                  fVar98 = *(float *)(lVar35 + 0x90);
                  fVar99 = *(float *)(lVar35 + 0x94);
                  fVar100 = *(float *)(lVar35 + 0x98);
                  fVar101 = (float)*(undefined8 *)(lVar35 + 0x270);
                  iVar84 = -(uint)(fVar101 == 0.0);
                  fVar83 = (float)((ulong)*(undefined8 *)(lVar35 + 0x270) >> 0x20);
                  iVar86 = -(uint)(fVar83 == 0.0);
                  uVar33 = NEON_fmov(0x3f800000,4);
                  fVar101 = (float)uVar33 / fVar101;
                  fVar83 = (float)((ulong)uVar33 >> 0x20) / fVar83;
                  fVar61 = (float)CONCAT13((byte)((uint)fVar101 >> 0x18) &
                                           ~(byte)((uint)iVar84 >> 0x18),
                                           CONCAT12((byte)((uint)fVar101 >> 0x10) &
                                                    ~(byte)((uint)iVar84 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar101 >> 8) &
                                                             ~(byte)((uint)iVar84 >> 8),
                                                             SUB41(fVar101,0) & ~(byte)iVar84)));
                  fVar101 = 1.0 / *(float *)(lVar35 + 0x278);
                  if (*(float *)(lVar35 + 0x278) == 0.0) {
                    fVar101 = 0.0;
                  }
                  fVar85 = fVar61 * fVar92;
                  fVar83 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) &
                                            ~(byte)((uint)iVar86 >> 0x18),
                                            CONCAT16((byte)((uint)fVar83 >> 0x10) &
                                                     ~(byte)((uint)iVar86 >> 0x10),
                                                     CONCAT15((byte)((uint)fVar83 >> 8) &
                                                              ~(byte)((uint)iVar86 >> 8),
                                                              CONCAT14(SUB41(fVar83,0) &
                                                                       ~(byte)iVar86,fVar61)))) >>
                                  0x20);
                  fVar87 = fVar83 * fVar97;
                  fVar88 = fVar101 * fVar100;
                  fVar89 = fVar61 * fVar62;
                  fVar90 = fVar83 * fVar96;
                  fVar91 = fVar101 * fVar99;
                  fVar61 = fVar61 * fVar93;
                  fVar83 = fVar83 * fVar95;
                  fVar101 = fVar101 * fVar98;
                  auVar79._0_4_ = fVar94 * (fVar61 * fVar93 + fVar89 * fVar62 + fVar85 * fVar92);
                  auVar79._4_4_ = fVar52 * (fVar83 * fVar93 + fVar90 * fVar62 + fVar87 * fVar92);
                  auVar79._8_4_ = fVar53 * (fVar101 * fVar93 + fVar91 * fVar62 + fVar88 * fVar92);
                  auVar79._12_4_ = (fVar93 * 0.0 + fVar62 * 0.0 + fVar92 * 0.0) * 0.0;
                  auVar72._0_4_ = fVar94 * (fVar61 * fVar95 + fVar89 * fVar96 + fVar85 * fVar97);
                  auVar72._4_4_ = fVar52 * (fVar83 * fVar95 + fVar90 * fVar96 + fVar87 * fVar97);
                  auVar72._8_4_ = fVar53 * (fVar101 * fVar95 + fVar91 * fVar96 + fVar88 * fVar97);
                  auVar72._12_4_ = (fVar95 * 0.0 + fVar96 * 0.0 + fVar97 * 0.0) * 0.0;
                  auVar70._0_4_ = fVar94 * (fVar61 * fVar98 + fVar89 * fVar99 + fVar85 * fVar100);
                  auVar70._4_4_ = fVar52 * (fVar83 * fVar98 + fVar90 * fVar99 + fVar87 * fVar100);
                  auVar70._8_4_ = fVar53 * (fVar101 * fVar98 + fVar91 * fVar99 + fVar88 * fVar100);
                  auVar81 = NEON_ext(auVar79,auVar79,8,1);
                  auVar80 = NEON_ext(auVar72,auVar72,8,1);
                  auVar70._12_4_ = 0;
                  auVar78 = NEON_ext(auVar70,auVar70,8,1);
                  fVar94 = *(float *)(lVar35 + 0x31c);
                  fVar52 = *(float *)(lVar35 + 0x310) *
                           (auVar79._0_4_ + auVar79._4_4_ + auVar81._0_4_);
                  fVar53 = *(float *)(lVar35 + 0x314) *
                           (auVar72._0_4_ + auVar72._4_4_ + auVar80._0_4_);
                  fVar93 = *(float *)(lVar35 + 0x318) *
                           (auVar70._0_4_ + auVar70._4_4_ + auVar78._0_4_ + auVar78._4_4_);
                }
                *(float *)(lVar35 + 0x298) = *(float *)(lVar35 + 0x298) + fVar93;
                *(float *)(lVar35 + 0x29c) = *(float *)(lVar35 + 0x29c) + fVar94 * 0.0;
                *(float *)(lVar35 + 0x290) = *(float *)(lVar35 + 0x290) + fVar52;
                *(float *)(lVar35 + 0x294) = *(float *)(lVar35 + 0x294) + fVar53;
              }
            }
          }
        }
LAB_10aa35860:
        plVar16 = plVar16 + 6;
      } while (plVar16 != plVar37);
      FUN_10aa381b0(param_2 + 0x308);
    }
    plVar16 = (long *)plVar47[3];
    if (plVar16 == (long *)0x0) {
      plVar16 = (long *)0x0;
      plVar37 = (long *)0x0;
LAB_10aa358d0:
      plVar19 = plVar16;
      puVar10 = PTR___ZSt7nothrow_1103469d8;
      for (plVar17 = (long *)plVar47[2]; PTR___ZSt7nothrow_1103469d8 = puVar10,
          plVar17 != plVar47 + 1; plVar17 = (long *)plVar17[1]) {
        if (plVar16 < plVar37) {
          *plVar16 = (long)(plVar17 + 2);
          plVar20 = plVar19;
        }
        else {
          lVar35 = (long)plVar16 - (long)plVar19;
          uVar28 = (lVar35 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) {
            FUN_10aa4c2ec();
            uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
            goto LAB_10aa379b4;
          }
          uVar32 = (long)plVar37 - (long)plVar19 >> 2;
          if (uVar32 <= uVar28) {
            uVar32 = uVar28;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar37 - (long)plVar19)) {
            uVar32 = 0x1fffffffffffffff;
          }
          FUN_10aa4c300();
          plVar16 = (long *)(uVar32 + lVar35);
          plVar37 = (long *)(uVar32 + (long)plVar15 * 8);
          plVar20 = plVar16 + -(lVar35 >> 3);
          *plVar16 = (long)(plVar17 + 2);
          plVar15 = plVar19;
          _memcpy(plVar20,plVar19,lVar35);
          if (plVar19 != (long *)0x0) {
            __ZdlPv(plVar19);
          }
        }
        plVar16 = plVar16 + 1;
        plVar19 = plVar20;
        puVar10 = PTR___ZSt7nothrow_1103469d8;
      }
      uVar32 = (long)plVar16 - (long)plVar19 >> 3;
      uVar28 = uVar32;
      plVar15 = plVar19;
      if ((long)uVar32 < 0x81) {
        uVar23 = 0;
LAB_10aa359c4:
        FUN_10aa4c334(plVar19,plVar16,uVar32,0,uVar23);
      }
      else {
        while( true ) {
          lVar35 = uVar28 << 3;
          __ZnwmRKSt9nothrow_t(lVar35,puVar10);
          if (lVar35 != 0) break;
          uVar23 = uVar28 >> 1;
          bVar14 = uVar28 < 2;
          uVar28 = uVar23;
          if (bVar14) goto LAB_10aa359c4;
        }
        FUN_10aa4c334(plVar19,plVar16,uVar32,lVar35,uVar28);
        __ZdlPv(lVar35);
      }
      for (; plVar15 != plVar16; plVar15 = plVar15 + 1) {
        lVar35 = *plVar15;
        if (param_1 <= 0.0) {
          *(undefined4 *)(lVar35 + 0xbc) = 0;
          fVar94 = 0.0;
        }
        else {
          fVar52 = *(float *)(lVar35 + 0xe0);
          fVar94 = 100.0;
          if (fVar52 <= 100.0) {
            fVar94 = fVar52;
          }
          fVar53 = 1.0;
          if (1.0 <= fVar52) {
            fVar53 = fVar94;
          }
          fVar53 = param_1 / fVar53;
          *(float *)(lVar35 + 0xbc) = fVar53;
          fVar52 = (float)((ulong)*(byte *)(lVar35 + 0xdc) << 1);
          fVar93 = *(float *)(lVar35 + 0xb8);
          fVar94 = fVar93 * fVar52;
          if (fVar53 <= fVar93 * fVar52) {
            fVar94 = fVar53;
          }
          fVar53 = 0.0;
          if (ABS(*(float *)(lVar35 + 0xc0) - fVar94) < fVar93) {
            fVar92 = *(float *)(lVar35 + 0xc0) - fVar94;
            fVar53 = (float)_expf();
            fVar62 = *(float *)(lVar35 + 0xc4) + fVar92 * 10.0;
            fVar92 = fVar53 * (fVar92 + fVar94 * fVar62);
            fVar53 = fVar92 * -10.0 + fVar53 * fVar62;
            fVar94 = fVar94 + fVar92;
          }
          *(float *)(lVar35 + 0xc0) = fVar94;
          *(float *)(lVar35 + 0xc4) = fVar53;
          fVar53 = 0.0;
          if (0.0 <= fVar94) {
            fVar53 = fVar94;
          }
          if ((float)(int)(fVar53 / fVar93) <= fVar52) {
            fVar52 = (float)(int)(fVar53 / fVar93);
          }
          fVar94 = fVar93 * fVar52;
          if (fVar52 <= 0.0) {
            fVar94 = fVar53;
          }
        }
        *(float *)(lVar35 + 200) = fVar94;
        for (lVar27 = *(long *)(lVar35 + 0x210); lVar27 != lVar35 + 0x208;
            lVar27 = *(long *)(lVar27 + 8)) {
          ppiVar18 = *(int ***)(lVar27 + 0x20);
          if ((ppiVar18 != (int **)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), ppiStack_1d8 = ppiVar18,
             ppiVar18 != (int **)0x0)) {
            uStack_1e0 = *(undefined ***)(lVar27 + 0x18);
            if (((int **)uStack_1e0 != (int **)0x0) &&
               (plVar37 = (long *)uStack_1e0[0x40], plVar37 != (long *)0x0)) {
              (**(code **)(*plVar37 + 0x70))(plVar37,*(undefined8 *)(lVar27 + 0x28));
            }
            ppiVar1 = ppiVar18 + 1;
            do {
              piVar40 = *ppiVar1;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppiVar1,0x10);
              if (bVar14) {
                *ppiVar1 = (int *)((long)piVar40 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (piVar40 == (int *)0x0) {
              (**(code **)(*ppiVar18 + 4))(ppiVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppiVar18);
            }
          }
        }
        *(code **)(lVar35 + 0x5758) = FUN_10aa4b380;
        *(code **)(lVar35 + 0x5750) = FUN_10aa4b688;
        *(long *)(lVar35 + 0x5760) = lVar35;
        func_0x0001098347b4(lVar35 + 0x56d0,(ulong)*(byte *)(lVar35 + 0xdc) << 1);
      }
      if (plVar19 != (long *)0x0) {
        __ZdlPv(plVar19);
      }
      plVar15 = (long *)plVar47[2];
      do {
        if (plVar15 == plVar47 + 1) {
          lVar35 = *(long *)(param_2 + 0x48);
          uVar28 = *(ulong *)(lVar35 + 0x18);
          plStack_260 = (long *)0x0;
          plStack_258 = (long *)0x0;
          uStack_250 = (long *)0x0;
          if (uVar28 != 0) {
            if (0x555555555555555 < uVar28) {
              FUN_10aa4cbc8();
              uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
              goto LAB_10aa379b4;
            }
            plVar47 = (long *)(uVar28 * 0x30);
            __Znwm();
            _bzero();
            plStack_258 = plVar47 + ((ulong)((long *)(uVar28 * 0x30) + -6) / 0x30) * 6 + 6;
            uStack_250 = plVar47 + uVar28 * 6;
            plStack_260 = plVar47;
          }
          plVar16 = plStack_258;
          lVar27 = *(long *)(lVar35 + 0x10);
          plVar47 = plStack_260;
          plVar15 = plVar16;
          if (lVar27 != lVar35 + 8) {
            plVar37 = plStack_260;
            do {
              FUN_10aa37d38(&uStack_1e0,lVar27 + 0x58e0);
              func_0x00010a4aebec(plVar37);
              plVar37[1] = (long)ppiStack_1d8;
              *plVar37 = (long)uStack_1e0;
              plVar37[2] = lStack_1d0;
              ppiStack_1d8 = (int **)0x0;
              lStack_1d0 = 0;
              uStack_1e0 = (undefined **)0x0;
              uStack_220 = &uStack_1e0;
              func_0x00010a4aec24(&uStack_220);
              FUN_10aa37d38(&uStack_1e0,lVar27 + 0x58f8);
              func_0x00010a4aebec(plVar37 + 3);
              plVar37[4] = (long)ppiStack_1d8;
              plVar37[3] = (long)uStack_1e0;
              plVar37[5] = lStack_1d0;
              ppiStack_1d8 = (int **)0x0;
              lStack_1d0 = 0;
              uStack_1e0 = (undefined **)0x0;
              uStack_220 = &uStack_1e0;
              func_0x00010a4aec24(&uStack_220);
              lVar27 = *(long *)(lVar27 + 8);
              plVar37 = plVar37 + 6;
              plVar47 = plStack_260;
            } while (lVar27 != lVar35 + 8);
          }
          for (; plVar37 = plStack_260, plVar47 != plVar16; plVar47 = plVar47 + 6) {
            plVar37 = (long *)plVar47[1];
            for (plVar15 = (long *)*plVar47; plVar15 != plVar37; plVar15 = plVar15 + 2) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
              plVar17 = (long *)plVar15[1];
              if (plVar17 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count4lockEv();
                if (plVar17 != (long *)0x0) {
                  lVar35 = *plVar15;
                  plVar19 = plVar17 + 1;
                  do {
                    lVar27 = *plVar19;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar14) {
                      *plVar19 = lVar27 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                  if ((lVar35 != 0) && ((*(ushort *)(lVar35 + 0x180) >> 4 & 1) == 0)) {
                    lVar27 = *(long *)(lVar35 + 0x170);
                    plVar17 = *(long **)(lVar35 + 0x2d8);
                    uStack_220._0_4_ = SUB84(plVar17,0);
                    uStack_220._4_4_ = (float)((ulong)plVar17 >> 0x20);
                    plVar19 = *(long **)(lVar35 + 0x2e0);
                    lStack_210 = *(long *)(lVar35 + 0x2e8);
                    fStack_218 = SUB84(plVar19,0);
                    uStack_214 = (undefined4)((ulong)plVar19 >> 0x20);
                    *(undefined8 *)(lVar35 + 0x2e0) = 0;
                    *(undefined8 *)(lVar35 + 0x2e8) = 0;
                    *(undefined8 *)(lVar35 + 0x2d8) = 0;
                    for (; plVar17 != plVar19; plVar17 = plVar17 + 6) {
                      cVar8 = *(char *)((long)plVar17 + 0x14);
                      if (cVar8 == '\x02') {
                        lVar24 = *(long *)(lVar35 + 0x210);
                        if (((*(long *)(lVar24 + 0x30) != 0) &&
                            (plVar20 = (long *)plVar17[1], plVar20 != (long *)0x0)) &&
                           (__ZNSt3__119__shared_weak_count4lockEv(), plVar20 != (long *)0x0)) {
                          lVar29 = *plVar17;
                          plVar51 = plVar20 + 1;
                          do {
                            lVar38 = *plVar51;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                            if (bVar14) {
                              *plVar51 = lVar38 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar38 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                          }
                          if ((lVar29 != 0) && ((*(ushort *)(lVar29 + 0x180) >> 4 & 1) == 0)) {
                            FUN_10aa5acd8(&uStack_1e0,plVar17);
                            plVar20 = (long *)0x40;
                            __Znwm();
                            plVar51 = plVar20 + 1;
                            *plVar51 = 0;
                            plVar20[2] = 0;
                            *plVar20 = (long)&PTR_FUN_110c3c408;
                            plVar20[4] = 0;
                            plVar20[5] = 0;
                            plStack_288 = plVar20 + 3;
                            *plStack_288 = (long)&PTR_FUN_110c3c458;
                            plVar20[7] = (long)ppiStack_1d8;
                            plVar20[6] = (long)uStack_1e0;
                            uStack_280 = SUB84(plVar20,0);
                            uStack_27c = (undefined4)((ulong)plVar20 >> 0x20);
                            if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                               (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                              FUN_10aa5c2a0(&uStack_1e0,lVar24 + 0x18);
                              for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                  plVar21 = (long *)*plVar21) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                                lVar29 = lVar24 + 0x18;
                                FUN_10aa54890(lVar29,plVar21[2]);
                                if (lVar29 != 0) {
                                  if (*(char *)(plVar21 + 0xc) == '\x02') {
                                    FUN_10aa5c7f4(plVar21[4],&plStack_288);
                                  }
                                  else {
                                    FUN_10aa5c584(plVar21 + 4,&plStack_288);
                                  }
                                }
                              }
                            }
                            else {
                              FUN_10aa5c2a0(&uStack_1e0,lVar24 + 0x18);
                              for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                  plVar21 = (long *)*plVar21) {
                                lVar29 = lVar24 + 0x18;
                                FUN_10aa54890(lVar29,plVar21[2]);
                                if (lVar29 != 0) {
                                  FUN_10aa5c584(plVar21 + 4,&plStack_288);
                                }
                              }
                            }
                            FUN_10aa598f0(&uStack_1e0);
                            do {
                              lVar24 = *plVar51;
                              cVar8 = '\x01';
                              bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                              if (bVar14) {
                                *plVar51 = lVar24 + -1;
                                cVar8 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar8 != '\0');
                            if (lVar24 == 0) {
                              (**(code **)(*plVar20 + 0x10))(plVar20);
LAB_10aa36fe8:
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                            }
                          }
                        }
                      }
                      else if (cVar8 == '\x01') {
                        lVar24 = *(long *)(lVar35 + 0x200);
                        if (((*(long *)(lVar24 + 0x30) != 0) &&
                            (plVar20 = (long *)plVar17[1], plVar20 != (long *)0x0)) &&
                           (__ZNSt3__119__shared_weak_count4lockEv(), plVar20 != (long *)0x0)) {
                          lVar29 = *plVar17;
                          plVar51 = plVar20 + 1;
                          do {
                            lVar38 = *plVar51;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                            if (bVar14) {
                              *plVar51 = lVar38 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar38 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                          }
                          if ((lVar29 != 0) && ((*(ushort *)(lVar29 + 0x180) >> 4 & 1) == 0)) {
                            FUN_10aa5acd8(&uStack_1e0,plVar17);
                            plVar20 = (long *)0x40;
                            __Znwm();
                            plVar51 = plVar20 + 1;
                            *plVar51 = 0;
                            plVar20[2] = 0;
                            *plVar20 = (long)&PTR_FUN_110c3c330;
                            plVar20[4] = 0;
                            plVar20[5] = 0;
                            plStack_288 = plVar20 + 3;
                            *plStack_288 = (long)&PTR_FUN_110c3c380;
                            plVar20[7] = (long)ppiStack_1d8;
                            plVar20[6] = (long)uStack_1e0;
                            uStack_280 = SUB84(plVar20,0);
                            uStack_27c = (undefined4)((ulong)plVar20 >> 0x20);
                            if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                               (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                              FUN_10aa5b904(&uStack_1e0,lVar24 + 0x18);
                              for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                  plVar21 = (long *)*plVar21) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                                lVar29 = lVar24 + 0x18;
                                FUN_10aa52a18(lVar29,plVar21[2]);
                                if (lVar29 != 0) {
                                  if (*(char *)(plVar21 + 0xc) == '\x02') {
                                    FUN_10aa5be58(plVar21[4],&plStack_288);
                                  }
                                  else {
                                    FUN_10aa5bbe8(plVar21 + 4,&plStack_288);
                                  }
                                }
                              }
                            }
                            else {
                              FUN_10aa5b904(&uStack_1e0,lVar24 + 0x18);
                              for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                  plVar21 = (long *)*plVar21) {
                                lVar29 = lVar24 + 0x18;
                                FUN_10aa52a18(lVar29,plVar21[2]);
                                if (lVar29 != 0) {
                                  FUN_10aa5bbe8(plVar21 + 4,&plStack_288);
                                }
                              }
                            }
                            FUN_10aa5958c(&uStack_1e0);
                            do {
                              lVar24 = *plVar51;
                              cVar8 = '\x01';
                              bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                              if (bVar14) {
                                *plVar51 = lVar24 + -1;
                                cVar8 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar8 != '\0');
                            goto LAB_10aa36fd0;
                          }
                        }
                      }
                      else if ((((cVar8 == '\0') &&
                                (lVar24 = *(long *)(lVar35 + 0x1f0), *(long *)(lVar24 + 0x30) != 0))
                               && (plVar20 = (long *)plVar17[1], plVar20 != (long *)0x0)) &&
                              (__ZNSt3__119__shared_weak_count4lockEv(), plVar20 != (long *)0x0)) {
                        lVar29 = *plVar17;
                        plVar51 = plVar20 + 1;
                        do {
                          lVar38 = *plVar51;
                          cVar8 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                          if (bVar14) {
                            *plVar51 = lVar38 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (lVar38 == 0) {
                          (**(code **)(*plVar20 + 0x10))(plVar20);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                        }
                        if ((lVar29 != 0) && ((*(ushort *)(lVar29 + 0x180) >> 4 & 1) == 0)) {
                          FUN_10aa5acd8(&uStack_1e0,plVar17);
                          plVar20 = (long *)0x40;
                          __Znwm();
                          plVar51 = plVar20 + 1;
                          *plVar51 = 0;
                          plVar20[2] = 0;
                          *plVar20 = (long)&PTR_DAT_110c3c208;
                          plVar20[4] = 0;
                          plVar20[5] = 0;
                          plStack_288 = plVar20 + 3;
                          *plStack_288 = (long)&PTR_FUN_110c3c258;
                          plVar20[7] = (long)ppiStack_1d8;
                          plVar20[6] = (long)uStack_1e0;
                          uStack_280 = SUB84(plVar20,0);
                          uStack_27c = (undefined4)((ulong)plVar20 >> 0x20);
                          if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                             (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                            FUN_10aa5af68(&uStack_1e0,lVar24 + 0x18);
                            for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                              lVar29 = lVar24 + 0x18;
                              FUN_10aa53954(lVar29,plVar21[2]);
                              if (lVar29 != 0) {
                                if (*(char *)(plVar21 + 0xc) == '\x02') {
                                  FUN_10aa5b4bc(plVar21[4],&plStack_288);
                                }
                                else {
                                  FUN_10aa5b24c(plVar21 + 4,&plStack_288);
                                }
                              }
                            }
                          }
                          else {
                            FUN_10aa5af68(&uStack_1e0,lVar24 + 0x18);
                            for (plVar21 = (long *)lStack_1d0; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                              lVar29 = lVar24 + 0x18;
                              FUN_10aa53954(lVar29,plVar21[2]);
                              if (lVar29 != 0) {
                                FUN_10aa5b24c(plVar21 + 4,&plStack_288);
                              }
                            }
                          }
                          FUN_10aa59228(&uStack_1e0);
                          do {
                            lVar24 = *plVar51;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                            if (bVar14) {
                              *plVar51 = lVar24 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
LAB_10aa36fd0:
                          if (lVar24 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            goto LAB_10aa36fe8;
                          }
                        }
                      }
                    }
                    FUN_10aa3c924(&uStack_220);
                  }
                }
              }
            }
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
            plVar15 = plStack_258;
          }
          for (; plVar37 != plVar15; plVar37 = plVar37 + 6) {
            plVar16 = (long *)plVar37[4];
            for (plVar47 = (long *)plVar37[3]; plVar47 != plVar16; plVar47 = plVar47 + 2) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
              plVar17 = (long *)plVar47[1];
              if (plVar17 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count4lockEv();
                if (plVar17 != (long *)0x0) {
                  lVar35 = *plVar47;
                  plVar19 = plVar17 + 1;
                  do {
                    lVar27 = *plVar19;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar14) {
                      *plVar19 = lVar27 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                  if ((lVar35 != 0) && ((*(ushort *)(lVar35 + 0x180) >> 4 & 1) == 0)) {
                    lVar27 = *(long *)(lVar35 + 0x170);
                    uStack_1e0 = *(undefined ***)(lVar35 + 0x328);
                    ppiVar18 = *(int ***)(lVar35 + 0x330);
                    lStack_1d0 = *(long *)(lVar35 + 0x338);
                    plStack_1c8 = *(long **)(lVar35 + 0x340);
                    plStack_1c0 = *(long **)(lVar35 + 0x348);
                    *(undefined8 *)(lVar35 + 0x338) = 0;
                    *(undefined8 *)(lVar35 + 0x330) = 0;
                    *(undefined8 *)(lVar35 + 0x328) = 0;
                    plVar17 = *(long **)(lVar35 + 0x348);
                    plStack_1b8 = *(long **)(lVar35 + 0x350);
                    *(undefined8 *)(lVar35 + 0x348) = 0;
                    *(undefined8 *)(lVar35 + 0x340) = 0;
                    *(undefined8 *)(lVar35 + 0x350) = 0;
                    plStack_1b0 = *(long **)(lVar35 + 0x358);
                    plStack_1a8 = *(long **)(lVar35 + 0x360);
                    uStack_1a0 = *(ulong *)(lVar35 + 0x368);
                    *(undefined8 *)(lVar35 + 0x368) = 0;
                    *(undefined8 *)(lVar35 + 0x360) = 0;
                    *(undefined8 *)(lVar35 + 0x358) = 0;
                    lVar24 = *(long *)(lVar35 + 0x310);
                    lVar38 = *(long *)(lVar35 + 0x318);
                    lVar29 = lVar38 - lVar24 >> 4;
                    lVar42 = *(long *)(lVar35 + 0x220);
                    ppiStack_1d8 = ppiVar18;
                    ppiVar1 = (int **)uStack_1e0;
                    if (*(long *)(lVar42 + 0x30) != 0) {
                      for (; ppiVar18 != ppiVar1; ppiVar1 = ppiVar1 + 2) {
                        iVar84 = (int)*ppiVar1;
                        func_0x00010aa5cac8();
                        if (iVar84 != 0) {
                          plVar17 = (long *)0x58;
                          __Znwm();
                          plVar19 = plVar17 + 1;
                          *plVar19 = 0;
                          plVar17[2] = 0;
                          *plVar17 = (long)&PTR_FUN_110c3c4e0;
                          plVar20 = plVar17 + 3;
                          *plVar20 = (long)&PTR_FUN_110c3c530;
                          plVar17[4] = 0;
                          plVar17[5] = 0;
                          piVar40 = *ppiVar1;
                          plVar17[7] = (long)ppiVar1[1];
                          plVar17[6] = (long)piVar40;
                          *ppiVar1 = (int *)0x0;
                          ppiVar1[1] = (int *)0x0;
                          plVar17[8] = 0;
                          plVar17[9] = 0;
                          plVar17[10] = 0;
                          FUN_10aa5ccdc(plVar17 + 8,lVar24,lVar38,lVar29);
                          uStack_280 = SUB84(plVar17,0);
                          uStack_27c = (undefined4)((ulong)plVar17 >> 0x20);
                          plStack_288 = plVar20;
                          if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                             (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                            FUN_10aa5cd68(&uStack_220,lVar42 + 0x18);
                            for (plVar20 = (long *)lStack_210; plVar20 != (long *)0x0;
                                plVar20 = (long *)*plVar20) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                              lVar26 = lVar42 + 0x18;
                              FUN_10aa57644(lVar26,plVar20[2]);
                              if (lVar26 != 0) {
                                if (*(char *)(plVar20 + 0xc) == '\x02') {
                                  FUN_10aa5d2bc(plVar20[4],&plStack_288);
                                }
                                else {
                                  FUN_10aa5d04c(plVar20 + 4,&plStack_288);
                                }
                              }
                            }
                          }
                          else {
                            FUN_10aa5cd68(&uStack_220,lVar42 + 0x18);
                            for (plVar20 = (long *)lStack_210; plVar20 != (long *)0x0;
                                plVar20 = (long *)*plVar20) {
                              lVar26 = lVar42 + 0x18;
                              FUN_10aa57644(lVar26,plVar20[2]);
                              if (lVar26 != 0) {
                                FUN_10aa5d04c(plVar20 + 4,&plStack_288);
                              }
                            }
                          }
                          FUN_10aa59c54(&uStack_220);
                          do {
                            lVar26 = *plVar19;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                            if (bVar14) {
                              *plVar19 = lVar26 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar26 == 0) {
                            (**(code **)(*plVar17 + 0x10))(plVar17);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                          }
                        }
                        plVar17 = plStack_1c0;
                      }
                    }
                    lVar42 = *(long *)(lVar35 + 0x230);
                    plVar19 = plStack_1c8;
                    if (*(long *)(lVar42 + 0x30) != 0 && plVar17 != plStack_1c8) {
                      do {
                        iVar84 = (int)*plVar19;
                        func_0x00010aa5cac8();
                        if (iVar84 != 0) {
                          plVar20 = (long *)0x58;
                          __Znwm();
                          plVar51 = plVar20 + 1;
                          *plVar51 = 0;
                          plVar20[2] = 0;
                          *plVar20 = (long)&PTR_FUN_110c3c5b8;
                          plVar21 = plVar20 + 3;
                          *plVar21 = (long)&PTR_FUN_110c3c608;
                          plVar20[4] = 0;
                          plVar20[5] = 0;
                          lVar26 = *plVar19;
                          plVar20[7] = plVar19[1];
                          plVar20[6] = lVar26;
                          *plVar19 = 0;
                          plVar19[1] = 0;
                          plVar20[8] = 0;
                          plVar20[9] = 0;
                          plVar20[10] = 0;
                          FUN_10aa5ccdc(plVar20 + 8,lVar24,lVar38,lVar29);
                          uStack_280 = SUB84(plVar20,0);
                          uStack_27c = (undefined4)((ulong)plVar20 >> 0x20);
                          plStack_288 = plVar21;
                          if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                             (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                            FUN_10aa5d71c(&uStack_220,lVar42 + 0x18);
                            for (plVar21 = (long *)lStack_210; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                              lVar26 = lVar42 + 0x18;
                              FUN_10aa557cc(lVar26,plVar21[2]);
                              if (lVar26 != 0) {
                                if (*(char *)(plVar21 + 0xc) == '\x02') {
                                  FUN_10aa5dc70(plVar21[4],&plStack_288);
                                }
                                else {
                                  FUN_10aa5da00(plVar21 + 4,&plStack_288);
                                }
                              }
                            }
                          }
                          else {
                            FUN_10aa5d71c(&uStack_220,lVar42 + 0x18);
                            for (plVar21 = (long *)lStack_210; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                              lVar26 = lVar42 + 0x18;
                              FUN_10aa557cc(lVar26,plVar21[2]);
                              if (lVar26 != 0) {
                                FUN_10aa5da00(plVar21 + 4,&plStack_288);
                              }
                            }
                          }
                          FUN_10aa59fb8(&uStack_220);
                          do {
                            lVar26 = *plVar51;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                            if (bVar14) {
                              *plVar51 = lVar26 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar26 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                          }
                        }
                        plVar19 = plVar19 + 2;
                      } while (plVar19 != plVar17);
                    }
                    plVar19 = plStack_1a8;
                    lVar35 = *(long *)(lVar35 + 0x240);
                    plVar17 = plStack_1b0;
                    if (*(long *)(lVar35 + 0x30) != 0 && plStack_1a8 != plStack_1b0) {
                      do {
                        iVar84 = (int)*plVar17;
                        func_0x00010aa5cac8();
                        if (iVar84 != 0) {
                          plVar20 = (long *)0x58;
                          __Znwm();
                          plVar51 = plVar20 + 1;
                          *plVar51 = 0;
                          plVar20[2] = 0;
                          *plVar20 = (long)&PTR_FUN_110c3c690;
                          plVar21 = plVar20 + 3;
                          *plVar21 = (long)&PTR_FUN_110c3c6e0;
                          plVar20[4] = 0;
                          plVar20[5] = 0;
                          lVar42 = *plVar17;
                          plVar20[7] = plVar17[1];
                          plVar20[6] = lVar42;
                          *plVar17 = 0;
                          plVar17[1] = 0;
                          plVar20[8] = 0;
                          plVar20[9] = 0;
                          plVar20[10] = 0;
                          FUN_10aa5ccdc(plVar20 + 8,lVar24,lVar38,lVar29);
                          uStack_280 = SUB84(plVar20,0);
                          uStack_27c = (undefined4)((ulong)plVar20 >> 0x20);
                          plStack_288 = plVar21;
                          if (((*(byte *)(*(long *)(lVar27 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
                             (*(int *)(*(long *)(lVar27 + 0xa20) + 0x18) < 0xe0)) {
                            FUN_10aa5e0d0(&uStack_220,lVar35 + 0x18);
                            for (plVar21 = (long *)lStack_210; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
                              lVar42 = lVar35 + 0x18;
                              FUN_10aa56708(lVar42,plVar21[2]);
                              if (lVar42 != 0) {
                                if (*(char *)(plVar21 + 0xc) == '\x02') {
                                  FUN_10aa5e624(plVar21[4],&plStack_288);
                                }
                                else {
                                  FUN_10aa5e3b4(plVar21 + 4,&plStack_288);
                                }
                              }
                            }
                          }
                          else {
                            FUN_10aa5e0d0(&uStack_220,lVar35 + 0x18);
                            for (plVar21 = (long *)lStack_210; plVar21 != (long *)0x0;
                                plVar21 = (long *)*plVar21) {
                              lVar42 = lVar35 + 0x18;
                              FUN_10aa56708(lVar42,plVar21[2]);
                              if (lVar42 != 0) {
                                FUN_10aa5e3b4(plVar21 + 4,&plStack_288);
                              }
                            }
                          }
                          FUN_10aa5a31c(&uStack_220);
                          do {
                            lVar42 = *plVar51;
                            cVar8 = '\x01';
                            bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                            if (bVar14) {
                              *plVar51 = lVar42 + -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (lVar42 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                          }
                        }
                        plVar17 = plVar17 + 2;
                      } while (plVar17 != plVar19);
                    }
                    func_0x00010aa3cadc(&plStack_1b0);
                    func_0x00010aa3cadc(&plStack_1c8);
                    func_0x00010aa3cadc(&uStack_1e0);
                  }
                }
              }
            }
                    /* WARNING: Read-only address (ram,0x00010e4ec108) is written */
                    /* WARNING: Read-only address (ram,0x00010e4ec118) is written */
          }
          lVar35 = *(long *)(param_2 + 0x1c0);
          lVar27 = *(long *)(param_2 + 0x1c8);
          if (lVar35 != lVar27) {
            piVar43 = *(int **)(param_2 + 0x48);
            uStack_1e0 = (undefined **)0x0;
            ppiStack_1d8 = (int **)0x0;
            lStack_1d0 = 0;
            FUN_10aa37e80(&uStack_1e0,*(undefined8 *)(piVar43 + 6));
            for (piVar40 = *(int **)(piVar43 + 4); piVar40 != piVar43 + 2;
                piVar40 = *(int **)(piVar40 + 2)) {
              func_0x00010aa37f10(&uStack_1e0,piVar40 + 4);
            }
            lVar35 = *(long *)(*(long *)(param_2 + 0x40) + 0xa20);
            if ((*(byte *)(lVar35 + 0x1c) >> 5 & 1) == 0) {
              bVar14 = 0xdf < *(int *)(lVar35 + 0x18);
            }
            else {
              bVar14 = true;
            }
            lVar35 = *(long *)(param_2 + 0x1c0);
            lVar27 = *(long *)(param_2 + 0x1c8);
            uVar28 = lVar27 - lVar35 >> 7;
            if (uVar28 < 0x3e9) {
              uVar28 = 1000;
            }
            if (lVar27 - lVar35 != 0) {
              uVar32 = 0;
              uVar33 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0xa80);
              uVar23 = lVar27 - lVar35 >> 8;
              uVar28 = uVar28 + uVar23;
              do {
                if (uVar28 < uVar32) {
                  FUN_10a0ee900(&uStack_220,&UNK_10f68b506,0x2c);
                  FUN_10a0029c0(&uStack_220);
                  goto LAB_10aa379b4;
                }
                if (uVar23 <= uVar32) goto LAB_10aa379b4;
                pcVar3 = (char *)(lVar35 + uVar32 * 0x100);
                plStack_288 = (long *)0x0;
                uStack_280 = 0;
                uStack_27c = 0;
                cVar8 = *pcVar3;
                if (cVar8 == '\x02') {
                  plVar47 = *(long **)(pcVar3 + 0xf8);
                  if (plVar47 != (long *)0x0) {
                    __ZNSt3__119__shared_weak_count4lockEv();
                    if (plVar47 != (long *)0x0) {
                      plStack_288 = *(long **)(pcVar3 + 0xf0);
                      uStack_280 = SUB84(plVar47,0);
                      uStack_27c = (undefined4)((ulong)plVar47 >> 0x20);
                      if ((plStack_288 == (long *)0x0) || (*piVar43 != (int)plStack_288[0x43]))
                      goto LAB_10aa37704;
                      piStack_d8 = (int *)plStack_288[0x44];
                      goto LAB_10aa376bc;
                    }
                  }
                  plVar47 = (long *)0x0;
                  lVar35 = 0;
                  ppiVar18 = (int **)0x0;
                  plStack_288 = (long *)0x0;
                  uStack_280 = 0;
                  uStack_27c = 0;
                }
                else if (cVar8 == '\x01') {
                  if (ppiStack_1d8 == (int **)uStack_1e0) goto LAB_10aa379b4;
                  plVar47 = (long *)0x0;
                  piStack_d8 = (int *)*uStack_1e0;
LAB_10aa376bc:
                  ppiVar18 = &piStack_d8;
                  lVar35 = 1;
                }
                else {
                  plVar47 = (long *)0x0;
                  if (cVar8 == '\0') {
                    lVar35 = (long)ppiStack_1d8 - (long)uStack_1e0 >> 3;
                    ppiVar18 = (int **)uStack_1e0;
                  }
                  else {
LAB_10aa37704:
                    lVar35 = 0;
                    ppiVar18 = (int **)0x0;
                  }
                }
                func_0x00010aa37fc8(param_2 + 0x1d8);
                if (pcVar3[0xc0] == '\x01') {
                  FUN_10aa2c0f0(&piStack_2b0,ppiVar18,lVar35,pcVar3 + 1,pcVar3 + 8,pcVar3 + 0x60,
                                *(undefined8 *)(pcVar3 + 0x98),param_2 + 0x1d8,uVar33);
                  bVar4 = piStack_2b0 == (int *)0x0;
                  if (bVar4) {
                    uStack_220._0_4_ = (float)((uint)(float)uStack_220 & 0xffffff00);
                  }
                  else {
                    uStack_220._0_4_ = SUB84(piStack_2b0,0);
                    uStack_220._4_4_ = (float)((ulong)piStack_2b0 >> 0x20);
                    fStack_218 = fStack_2a8;
                    uStack_214 = auStack_2a4[0];
                    piStack_2b0 = (int *)0x0;
                    fStack_2a8 = 0.0;
                    auStack_2a4[0] = 0;
                  }
                  bVar4 = !bVar4;
                  lStack_210 = CONCAT71(lStack_210._1_7_,bVar4);
                  if (bVar14) {
                    uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                    if ((pcVar3[0xc0] & 1U) == 0) goto LAB_10aa379b4;
                    FUN_10aa6b4a8(pcVar3 + 0xa0,&uStack_220);
                  }
                  else {
                    uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                    if ((pcVar3[0xc0] & 1U) == 0) goto LAB_10aa379b4;
                    FUN_10aa6b6ec(*(undefined8 *)(pcVar3 + 0xa0),&uStack_220);
                  }
                  if ((bVar4) &&
                     (plVar47 = (long *)CONCAT44(uStack_214,fStack_218), plVar47 != (long *)0x0)) {
                    plVar15 = plVar47 + 1;
                    do {
                      lVar35 = *plVar15;
                      cVar8 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar4) {
                        *plVar15 = lVar35 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar47 + 0x10))(plVar47);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
                    }
                  }
                  plVar47 = (long *)CONCAT44(auStack_2a4[0],fStack_2a8);
                  if (plVar47 != (long *)0x0) {
                    plVar15 = plVar47 + 1;
                    do {
                      lVar35 = *plVar15;
                      cVar8 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar4) {
                        *plVar15 = lVar35 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*plVar47 + 0x10))(plVar47);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
                    }
                  }
                  plVar47 = (long *)CONCAT44(uStack_27c,uStack_280);
                }
                else {
                  FUN_10aa2d148(ppiVar18,lVar35,pcVar3 + 1,pcVar3 + 8,pcVar3 + 0x60,
                                *(undefined8 *)(pcVar3 + 0x98),param_2 + 0x1d8,uVar33);
                  if (bVar14) {
                    if ((pcVar3[0xe8] & 1U) == 0) goto LAB_10aa379b4;
                    FUN_10aa6b9c8(pcVar3 + 200,param_2 + 0x218);
                  }
                  else {
                    if ((pcVar3[0xe8] & 1U) == 0) goto LAB_10aa379b4;
                    FUN_10aa6bbc4(*(undefined8 *)(pcVar3 + 200),param_2 + 0x218);
                  }
                }
                if (plVar47 != (long *)0x0) {
                  plVar15 = plVar47 + 1;
                  do {
                    lVar35 = *plVar15;
                    cVar8 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *plVar15 = lVar35 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*plVar47 + 0x10))(plVar47);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar47);
                  }
                }
                uVar32 = uVar32 + 1;
                lVar35 = *(long *)(param_2 + 0x1c0);
                lVar27 = *(long *)(param_2 + 0x1c8);
                uVar23 = lVar27 - lVar35 >> 8;
              } while (uVar32 != uVar23);
            }
            if ((int **)uStack_1e0 != (int **)0x0) {
              __ZdlPv();
              lVar35 = *(long *)(param_2 + 0x1c0);
              lVar27 = *(long *)(param_2 + 0x1c8);
            }
          }
          while (lVar27 != lVar35) {
            lVar27 = lVar27 + -0x100;
            FUN_10aa4b2f0(lVar27);
          }
          *(long *)(param_2 + 0x1c8) = lVar35;
          FUN_10aa4cc48(&plStack_260);
          goto LAB_10aa37910;
        }
        uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
        if ((long)piStack_2c0 - (long)piStack_2c8 == 0) goto LAB_10aa379b4;
        uVar28 = 0;
        uVar32 = (long)piStack_2c0 - (long)piStack_2c8 >> 6;
        piVar40 = piStack_2c8;
        while (*piVar40 != *(int *)((long)plVar15 + 0x14)) {
          uVar28 = uVar28 + 1;
          piVar40 = piVar40 + 0x10;
          uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
          if (uVar32 == uVar28) goto LAB_10aa379b4;
        }
        uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
        if (uVar32 <= (uVar28 & 0xffffffff)) goto LAB_10aa379b4;
        lVar35 = *(long *)(piStack_2c8 + (uVar28 & 0xffffffff) * 0x10 + 2);
        plStack_258 = (long *)0x0;
        plStack_260 = (long *)0x3f800000;
        uStack_248 = 0;
        uStack_250 = (long *)0x3f80000000000000;
        uStack_240 = (undefined8)UNK_10e4ec108;
        uStack_230 = (undefined8)UNK_10e4ec118;
        uStack_238 = UNK_10e4ec108._8_8_;
        uStack_228 = UNK_10e4ec118._8_8_;
        if (lVar35 != 0) {
          lVar27 = *(long *)(lVar35 + 0x178);
          if ((*(byte *)(lVar27 + 0x2a) & 0x24) != 0) {
            FUN_10a3e8fd4(lVar27);
          }
          plStack_260 = *(long **)(lVar27 + 0xc0);
          plStack_258 = *(long **)(lVar27 + 200);
          uStack_250 = *(long **)(lVar27 + 0xd0);
          uStack_248 = *(undefined8 *)(lVar27 + 0xd8);
          uStack_238 = SUB168(*(undefined1 (*) [16])(lVar27 + 0xe0),8);
          uStack_240 = SUB168(*(undefined1 (*) [16])(lVar27 + 0xe0),0);
          uStack_228 = SUB168(*(undefined1 (*) [16])(lVar27 + 0xf0),8);
          uStack_230 = SUB168(*(undefined1 (*) [16])(lVar27 + 0xf0),0);
        }
        for (plVar16 = (long *)plVar15[0x3e]; plVar16 != plVar15 + 0x3d;
            plVar16 = (long *)plVar16[1]) {
          plVar19 = (long *)plVar16[4];
          __ZNSt3__119__shared_weak_count4lockEv();
          lVar27 = plVar16[3];
          plVar37 = (long *)(lVar27 + 0x318);
          plVar17 = plVar19 + 1;
          do {
            lVar24 = *plVar17;
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar14) {
              *plVar17 = lVar24 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
          if ((*(long *)(*(long *)(lVar27 + 0x220) + 0x30) == 0) &&
             (*(long *)(*(long *)(lVar27 + 0x230) + 0x30) == 0)) {
            bVar14 = *(long *)(*(long *)(lVar27 + 0x240) + 0x30) != 0;
          }
          else {
            bVar14 = true;
          }
          if ((*(uint *)(plVar16 + 0x2b) & 1) == 0) {
            func_0x00010980adc4(plVar16 + 0x10,&uStack_1e0);
            fStack_264 = *(float *)(plVar16 + 0x17) * 100.0;
            plStack_288 = (long *)plVar16[6];
            uStack_280 = (undefined4)plVar16[7];
            ppiStack_274 = ppiStack_1d8;
            uStack_27c = SUB84(uStack_1e0,0);
            uStack_278 = (undefined4)((ulong)uStack_1e0 >> 0x20);
            uStack_26c = CONCAT44((float)((ulong)plVar16[0x16] >> 0x20) * 100.0,
                                  (float)plVar16[0x16] * 100.0);
            func_0x00010aa28420(&piStack_2b0,plVar16[5] + 0x10,&plStack_288);
            uVar33 = *(undefined8 *)(lVar27 + 0x178);
            if (lVar35 == 0) {
              FUN_10a3e8838(uVar33,auStack_2a4);
              FUN_10a3e8ad4(uVar33,auStack_294);
            }
            else {
              piStack_d8 = piStack_2b0;
              fStack_d0 = fStack_2a8;
              uStack_c4 = uStack_29c;
              FUN_10a0087b0(&uStack_1e0,&piStack_d8,auStack_294);
              func_0x000109519fd0(&uStack_220,&plStack_260,&uStack_1e0);
              FUN_10a3e28b8(uVar33,&uStack_220);
            }
          }
          fVar52 = (float)plVar16[0x44] * 100.0;
          fVar53 = (float)((ulong)plVar16[0x44] >> 0x20) * 100.0;
          uVar33 = CONCAT44(fVar53,fVar52);
          fVar94 = *(float *)(plVar16 + 0x45) * 100.0;
          if (lVar35 != 0) {
            uVar33 = CONCAT44((float)((ulong)plStack_260 >> 0x20) * fVar52 +
                              uStack_250._4_4_ * fVar53 +
                              (float)((ulong)uStack_240 >> 0x20) * fVar94 +
                              (float)((ulong)uStack_230 >> 0x20) * 0.0,
                              SUB84(plStack_260,0) * fVar52 + (float)uStack_250 * fVar53 +
                              (float)uStack_240 * fVar94 + (float)uStack_230 * 0.0);
            fVar94 = plStack_258._0_4_ * fVar52 + (float)uStack_248 * fVar53 +
                     fVar94 * (float)uStack_238 + (float)uStack_228 * 0.0;
          }
          *(undefined8 *)(lVar27 + 0x374) = uVar33;
          *(float *)(lVar27 + 0x37c) = fVar94;
          uStack_1e0 = (undefined **)plVar16[0x46];
          ppiStack_1d8 = (int **)CONCAT44(ppiStack_1d8._4_4_,(int)plVar16[0x47]);
          if (lVar35 != 0) {
            FUN_10aa2fd74(&plStack_260,&uStack_1e0);
            uStack_1e0 = (undefined **)CONCAT44(extraout_s1,extraout_s0);
            ppiStack_1d8 = (int **)CONCAT44(ppiStack_1d8._4_4_,extraout_s2);
          }
          *(undefined ***)(lVar27 + 0x380) = uStack_1e0;
          *(float *)(lVar27 + 0x388) = ppiStack_1d8._0_4_;
          if (bVar14) {
            (**(code **)(**(long **)(plVar16[5] + 8) + 0x10))
                      (*(long **)(plVar16[5] + 8),plVar16 + 0x10,auStack_110,auStack_120);
            plStack_1c0 = plVar16 + 0xe;
            bVar7 = *(byte *)(*(long *)(lVar27 + 0x260) + 0xe0);
            uVar30 = 0xfffffffd;
            if ((bVar7 & 1) == 0) {
              uVar30 = 0xffffffff;
            }
            if ((bVar7 & 2) != 0) {
              uVar30 = uVar30 & 0xfffffffe;
            }
            uStack_1e0 = &PTR_FUN_110c3b930;
            uVar5 = uVar30 & 0xffffff7f;
            if ((bVar7 & 4) != 0) {
              uVar5 = uVar30;
            }
            plStack_1c8 = (long *)plVar16[0x28];
            uStack_1a0 = (ulong)uVar5 << 0x20 | 0x40;
            lStack_1d0 = 0;
            plStack_1b0 = (long *)0x0;
            plStack_1a8 = (long *)0xffffffffffffffff;
            auStack_198[0] = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            lStack_168 = 0;
            lStack_170 = 0;
            lStack_158 = 0;
            uStack_160 = 0;
            uStack_148 = 0;
            lStack_150 = 0;
            lStack_138 = 0;
            lStack_140 = 0;
            uStack_130 = 0;
            lVar24 = plVar16[0x32];
            plVar19 = *(long **)(lVar24 + 0x10);
            ppiStack_1d8 = (int **)(plVar15 + 2);
            plStack_1b8 = plVar16 + 0x10;
            __ZNSt3__119__shared_weak_count4lockEv();
            lVar24 = *(long *)(lVar24 + 8);
            plVar17 = plVar19 + 1;
            do {
              lVar29 = *plVar17;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar14) {
                *plVar17 = lVar29 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar29 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
            FUN_10aa2edb0(auStack_198,*(long *)(lVar24 + 0x260) + 0xe0);
            *(undefined1 *)(plVar15 + 0xa86) = 1;
            puVar22 = auStack_110;
            (**(code **)(*(long *)plVar15[0xae9] + 0x38))
                      ((long *)plVar15[0xae9],puVar22,auStack_120,&uStack_1e0);
            *(undefined1 *)(plVar15 + 0xa86) = 0;
            lVar24 = lStack_138 - lStack_140;
            if (lVar24 == 0) {
              puVar41 = (undefined8 *)0x0;
              puVar49 = (undefined8 *)0x0;
              puVar45 = (undefined8 *)0x0;
              puVar34 = (undefined8 *)0x0;
            }
            else {
              puVar36 = (undefined8 *)(lVar24 >> 3);
              if ((ulong)puVar36 >> 0x3d != 0) {
                func_0x00010aa416e8();
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                goto LAB_10aa379b4;
              }
              puVar49 = puVar36;
              FUN_10aa416fc();
              puVar41 = puVar49 + (long)puVar22;
              _bzero();
              puVar48 = (undefined8 *)0x0;
              puVar34 = (undefined8 *)((long)puVar49 + lVar24);
              puVar44 = puVar49;
              do {
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if ((undefined8 *)(lStack_138 - lStack_140 >> 3) <= puVar48) goto LAB_10aa379b4;
                lVar24 = *(long *)(*(long *)(lStack_140 + (long)puVar48 * 8) + 0x120);
                plVar17 = *(long **)(lVar24 + 0x10);
                if ((plVar17 == (long *)0x0) ||
                   (__ZNSt3__119__shared_weak_count4lockEv(), plVar17 == (long *)0x0)) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = *(undefined8 *)(lVar24 + 8);
                  plVar19 = plVar17 + 1;
                  do {
                    lVar24 = *plVar19;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar14) {
                      *plVar19 = lVar24 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar24 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                }
                puVar45 = puVar44 + 1;
                *puVar44 = uVar33;
                puVar48 = (undefined8 *)((long)puVar48 + 1);
                puVar44 = puVar45;
              } while (puVar48 != puVar36);
            }
            uVar28 = (long)puVar45 - (long)puVar49 >> 3;
            lVar24 = (long)puVar34 - (long)puVar49;
            uVar32 = lVar24 >> 3;
            puStack_2d0 = puVar49;
            if (uVar32 < uVar28) {
              uVar23 = uVar28 - uVar32;
              if ((ulong)((long)puVar41 - (long)puVar34 >> 3) < uVar23) {
                if (uVar28 >> 0x3d != 0) {
                  func_0x00010aa416e8();
                  uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                  goto LAB_10aa379b4;
                }
                uVar31 = (long)puVar41 - (long)puVar49 >> 2;
                if (uVar31 <= uVar28) {
                  uVar31 = uVar28;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)puVar41 - (long)puVar49)) {
                  uVar31 = 0x1fffffffffffffff;
                }
                FUN_10aa416fc();
                lVar29 = uVar31 + lVar24;
                _bzero(lVar29,uVar23 * 8);
                puVar41 = (undefined8 *)(lVar29 + uVar23 * 8);
                puStack_2d0 = (undefined8 *)(lVar29 + uVar32 * -8);
                _memcpy(puStack_2d0,puVar49,lVar24);
                if (puVar49 != (undefined8 *)0x0) {
                  __ZdlPv(puVar49);
                }
              }
              else {
                _bzero(puVar34,uVar23 * 8);
                puVar41 = puVar34 + uVar23;
              }
            }
            else {
              puVar41 = (undefined8 *)((long)puVar49 + ((long)puVar45 - (long)puVar49));
              if (uVar32 <= uVar28) {
                puVar41 = puVar34;
              }
            }
            lVar24 = *(long *)(lVar27 + 0x330);
            lVar29 = *(long *)(lVar27 + 0x328);
            while (lVar24 != lVar29) {
              lVar24 = lVar24 + -0x10;
              func_0x00010aa500f4();
            }
            *(long *)(lVar27 + 0x330) = lVar29;
            lVar24 = *(long *)(lVar27 + 0x348);
            lVar29 = *(long *)(lVar27 + 0x340);
            while (lVar24 != lVar29) {
              lVar24 = lVar24 + -0x10;
              func_0x00010aa500f4();
            }
            *(long *)(lVar27 + 0x348) = lVar29;
            lVar24 = *(long *)(lVar27 + 0x360);
            lVar29 = *(long *)(lVar27 + 0x358);
            while (lVar24 != lVar29) {
              lVar24 = lVar24 + -0x10;
              func_0x00010aa500f4();
            }
            uVar23 = (long)puVar41 - (long)puStack_2d0 >> 3;
            *(long *)(lVar27 + 0x360) = lVar29;
            lVar29 = *(long *)(lVar27 + 0x310);
            uStack_220._0_4_ = (float)lVar29;
            uStack_220._4_4_ = (float)((ulong)lVar29 >> 0x20);
            lVar24 = *plVar37;
            lStack_210 = *(long *)(lVar27 + 800);
            fStack_218 = (float)lVar24;
            uStack_214 = (undefined4)((ulong)lVar24 >> 0x20);
            *(undefined8 *)(lVar27 + 0x318) = 0;
            *(undefined8 *)(lVar27 + 800) = 0;
            *(undefined8 *)(lVar27 + 0x310) = 0;
            uVar28 = lVar24 - lVar29 >> 4;
            uVar32 = uVar23 + uVar28;
            plVar17 = (long *)0x0;
            if (uVar32 != 0) {
              if (uVar32 >> 0x3c != 0) {
                FUN_10aa41730();
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                goto LAB_10aa379b4;
              }
              plVar17 = (long *)(uVar32 * 0x10);
              __Znwm();
              plVar19 = plVar17;
              do {
                plVar20 = plVar19 + 2;
                *plVar19 = 0;
                plVar19[1] = 0xffffffff;
                plVar19 = plVar20;
              } while (plVar20 != plVar17 + uVar32 * 2);
            }
            plVar19 = plVar17;
            if (lVar24 != lVar29) {
              uVar32 = 0;
              do {
                if ((ulong)(CONCAT44(uStack_214,fStack_218) - (long)uStack_220 >> 4) <= uVar32)
                goto LAB_10aa379b4;
                lVar24 = uStack_220[uVar32 * 2];
                plVar20 = *(long **)(lVar24 + 0x20);
                if ((plVar20 == (long *)0x0) ||
                   (__ZNSt3__119__shared_weak_count4lockEv(), plVar20 == (long *)0x0)) {
                  *plVar19 = 0;
                }
                else {
                  *plVar19 = *(long *)(lVar24 + 0x18);
                  plVar51 = plVar20 + 1;
                  do {
                    lVar29 = *plVar51;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                    if (bVar14) {
                      *plVar51 = lVar29 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar29 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                  }
                }
                *(short *)(plVar19 + 1) = (short)uVar32;
                *(undefined4 *)((long)plVar19 + 0xc) = *(undefined4 *)(lVar24 + 0x28);
                plVar19 = plVar19 + 2;
                uVar32 = uVar32 + 1;
              } while (uVar32 != uVar28);
            }
            if (puVar41 != puStack_2d0) {
              uVar32 = 0;
              do {
                *plVar19 = puStack_2d0[uVar32];
                *(short *)((long)plVar19 + 10) = (short)uVar32;
                plVar19 = plVar19 + 2;
                uVar32 = uVar32 + 1;
              } while (uVar23 != uVar32);
            }
            lVar24 = 0;
            if (plVar19 != plVar17) {
              lVar24 = LZCOUNT((long)plVar19 - (long)plVar17 >> 4) * -2 + 0x7e;
            }
            FUN_10aa41744(plVar17,plVar19,lVar24,1);
            FUN_10aa42aa4(&plStack_288,uVar23);
            FUN_10aa42aa4(&piStack_2b0,uVar28);
            FUN_10aa42aa4(&piStack_d8,uVar23);
            piVar12 = piStack_d8;
            plVar51 = plStack_288;
            piVar11 = piStack_2b0;
            piVar43 = piStack_d8;
            piVar40 = piStack_2b0;
            plVar20 = plStack_288;
            if (plVar19 != plVar17) {
              iVar84 = *(int *)(lVar27 + 0x308);
              plVar21 = plVar17;
              do {
                plVar2 = plVar21 + 2;
                if (plVar2 == plVar19) {
LAB_10aa36514:
                  lVar24 = plVar21[1];
                  if ((short)lVar24 == -1) {
                    *(int *)(lVar27 + 0x308) = iVar84 + 1;
                    *piVar43 = iVar84;
                    *(undefined2 *)(piVar43 + 1) = *(undefined2 *)((long)plVar21 + 10);
                    piVar43 = piVar43 + 2;
                    iVar84 = iVar84 + 1;
                  }
                  else {
                    *piVar40 = *(int *)((long)plVar21 + 0xc);
                    *(short *)(piVar40 + 1) = (short)lVar24;
                    piVar40 = piVar40 + 2;
                  }
                }
                else {
                  lVar24 = *plVar21;
                  if (lVar24 == 0) {
                    lVar24 = (long)*(int *)((long)plVar21 + 0xc);
                  }
                  lVar29 = *plVar2;
                  if (lVar29 == 0) {
                    lVar29 = (long)*(int *)((long)plVar21 + 0x1c);
                  }
                  if (lVar24 != lVar29) goto LAB_10aa36514;
                  *(undefined4 *)plVar20 = *(undefined4 *)((long)plVar21 + 0xc);
                  *(short *)((long)plVar20 + 4) = (short)plVar21[1];
                  plVar20 = plVar20 + 1;
                  plVar21 = plVar2;
                }
                plVar21 = plVar21 + 2;
              } while (plVar21 != plVar19);
            }
            plVar19 = (long *)(lVar27 + 0x310);
            uVar28 = (long)piVar43 - (long)piStack_d8 >> 3;
            lVar24 = 0;
            if (piVar43 != piStack_d8) {
              lVar24 = LZCOUNT(uVar28) * -2 + 0x7e;
            }
            uVar32 = (long)piVar40 - (long)piStack_2b0 >> 3;
            lVar29 = 0;
            if (piVar40 != piStack_2b0) {
              lVar29 = LZCOUNT(uVar32) * -2 + 0x7e;
            }
            uVar31 = (long)plVar20 - (long)plStack_288 >> 3;
            lVar38 = 0;
            if (plVar20 != plStack_288) {
              lVar38 = LZCOUNT(uVar31) * -2 + 0x7e;
            }
            FUN_10aa42b50(plStack_288,plVar20,lVar38,1);
            FUN_10aa42b50(piVar11,piVar40,lVar29,1);
            FUN_10aa42b50(piVar12,piVar43,lVar24,1);
            FUN_10aa2bf10(plVar19,uVar23);
            FUN_10aa2bf10(lVar27 + 0x328,uVar28);
            if (piVar43 != piVar12) {
              uVar50 = 0;
              do {
                uVar25 = (ulong)*(ushort *)(piVar12 + uVar50 * 2 + 1);
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if (uVar23 <= uVar25) goto LAB_10aa379b4;
                FUN_10aa29550(&lStack_100,puStack_2d0[uVar25]);
                plVar21 = (long *)0x48;
                __Znwm();
                plVar21[1] = 0;
                plVar21[2] = 0;
                *plVar21 = (long)&PTR_DAT_110c3d1d0;
                if (plStack_f8 != (long *)0x0) {
                  plVar2 = plStack_f8 + 2;
                  do {
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar14) {
                      *plVar2 = *plVar2 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                iVar84 = piVar12[uVar50 * 2];
                plVar21[4] = 0;
                plVar21[5] = 0;
                plStack_e8 = plVar21 + 3;
                *plStack_e8 = (long)&PTR_DAT_110c3aab8;
                plVar21[7] = (long)plStack_f8;
                plVar21[6] = lStack_100;
                *(int *)(plVar21 + 8) = iVar84;
                plStack_e0 = plVar21;
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if ((ulong)(*plVar37 - *plVar19 >> 4) <= uVar50 + uVar31) goto LAB_10aa379b4;
                puVar41 = (undefined8 *)(*plVar19 + (uVar50 + uVar31) * 0x10);
                FUN_10aa2c018(puVar41,&plStack_e8);
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if ((ulong)(*(long *)(lVar27 + 0x330) - *(long *)(lVar27 + 0x328) >> 4) <= uVar50)
                goto LAB_10aa379b4;
                func_0x00010aa2c07c(*(long *)(lVar27 + 0x328) + uVar50 * 0x10,*puVar41,puVar41[1]);
                plVar21 = plStack_e0;
                if (plStack_e0 != (long *)0x0) {
                  plVar2 = plStack_e0 + 1;
                  do {
                    lVar24 = *plVar2;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar14) {
                      *plVar2 = lVar24 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar24 == 0) {
                    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
                  }
                }
                plVar21 = plStack_f8;
                if (plStack_f8 != (long *)0x0) {
                  plVar2 = plStack_f8 + 1;
                  do {
                    lVar24 = *plVar2;
                    cVar8 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar14) {
                      *plVar2 = lVar24 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (lVar24 == 0) {
                    (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
                  }
                }
                uVar50 = uVar50 + 1;
              } while (uVar50 != uVar28);
            }
            FUN_10aa2bf10(lVar27 + 0x340,uVar31);
            if (plVar20 != plVar51) {
              lVar24 = 0;
              uVar28 = 0;
              lVar29 = CONCAT44(uStack_220._4_4_,(float)uStack_220);
              lVar38 = CONCAT44(uStack_214,fStack_218);
              puVar46 = (ushort *)((long)plVar51 + 4);
              do {
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if (((ulong)(lVar38 - lVar29 >> 4) <= (ulong)*puVar46) ||
                   (uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220),
                   (ulong)(*plVar37 - *plVar19 >> 4) <= uVar28)) goto LAB_10aa379b4;
                puVar41 = (undefined8 *)(*plVar19 + lVar24);
                FUN_10aa2c018(puVar41,lVar29 + (ulong)*puVar46 * 0x10);
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if ((ulong)(*(long *)(lVar27 + 0x348) - *(long *)(lVar27 + 0x340) >> 4) <= uVar28)
                goto LAB_10aa379b4;
                func_0x00010aa2c07c(*(long *)(lVar27 + 0x340) + lVar24,*puVar41,puVar41[1]);
                uVar28 = uVar28 + 1;
                lVar24 = lVar24 + 0x10;
                puVar46 = puVar46 + 4;
              } while (uVar31 != uVar28);
            }
            FUN_10aa2bf10(lVar27 + 0x358,uVar32);
            if (piVar40 != piVar11) {
              lVar24 = 0;
              uVar28 = 0;
              lVar29 = CONCAT44(uStack_220._4_4_,(float)uStack_220);
              lVar38 = CONCAT44(uStack_214,fStack_218);
              puVar46 = (ushort *)(piVar11 + 1);
              do {
                uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220);
                if (((ulong)(lVar38 - lVar29 >> 4) <= (ulong)*puVar46) ||
                   (uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(float)uStack_220),
                   (ulong)(*(long *)(lVar27 + 0x360) - *(long *)(lVar27 + 0x358) >> 4) <= uVar28))
                goto LAB_10aa379b4;
                FUN_10aa2c018(*(long *)(lVar27 + 0x358) + lVar24,lVar29 + (ulong)*puVar46 * 0x10);
                uVar28 = uVar28 + 1;
                lVar24 = lVar24 + 0x10;
                puVar46 = puVar46 + 4;
              } while (uVar32 != uVar28);
            }
            if (piStack_d8 != (int *)0x0) {
              __ZdlPv();
            }
            if (piStack_2b0 != (int *)0x0) {
              __ZdlPv();
            }
            if (plStack_288 != (long *)0x0) {
              __ZdlPv();
            }
            if (plVar17 != (long *)0x0) {
              __ZdlPv();
            }
            func_0x00010aa3cadc(&uStack_220);
            if (puStack_2d0 != (undefined8 *)0x0) {
              __ZdlPv();
            }
            if (lStack_140 != 0) {
              lStack_138 = lStack_140;
              __ZdlPv();
            }
            if (lStack_158 != 0) {
              lStack_150 = lStack_158;
              __ZdlPv();
            }
            if (lStack_170 != 0) {
              lStack_168 = lStack_170;
              __ZdlPv();
            }
            if (((*(long *)(lVar27 + 0x328) != *(long *)(lVar27 + 0x330)) ||
                (*(long *)(lVar27 + 0x340) != *(long *)(lVar27 + 0x348))) ||
               (*(long *)(lVar27 + 0x358) != *(long *)(lVar27 + 0x360))) {
              FUN_10aa32c44(plVar15 + 0xb1f,lVar27);
            }
          }
        }
        plVar15 = (long *)plVar15[1];
      } while( true );
    }
    if ((ulong)plVar16 >> 0x3d == 0) {
      FUN_10aa4c300();
      plVar37 = plVar16 + (long)plVar15;
      goto LAB_10aa358d0;
    }
  }
  FUN_10aa4c2ec();
LAB_10aa379b4:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10aa379b8);
  (*pcVar13)();
LAB_10aa35128:
  (**(code **)(*plVar15 + 0x10))(plVar15);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
  goto joined_r0x00010aa350a4;
}



/* Entry: 10aa37d38; end: 10aa37e7f;  */

void FUN_10aa37d38(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  lVar8 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_48 = 0;
  lVar3 = lVar3 - lVar8;
  if (lVar3 != 0) {
    plStack_50 = param_1;
    FUN_10a60f1e8(param_1,lVar3 >> 3);
    lVar8 = param_1[1];
    _bzero(lVar8,lVar3 * 2);
    uVar9 = 0;
    param_1[1] = lVar8 + lVar3 * 2;
    do {
      if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar9) {
LAB_10aa37e5c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aa37e60);
        (*pcVar7)();
      }
      FUN_10aa29550(&plStack_50,*(undefined8 *)(*param_2 + uVar9 * 8));
      lVar8 = *param_1;
      if ((ulong)(param_1[1] - lVar8 >> 4) <= uVar9) goto LAB_10aa37e5c;
      plVar6 = (long *)CONCAT71(uStack_47,uStack_48);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar2 = (undefined8 *)(lVar8 + uVar9 * 0x10);
      lVar8 = puVar2[1];
      puVar2[1] = CONCAT71(uStack_47,uStack_48);
      *puVar2 = plStack_50;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != lVar3 >> 3);
  }
  param_2[1] = *param_2;
  return;
}



/* Entry: 10aa37e80; end: 10aa38077;  */

void FUN_10aa37e80(long *param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10aa4cc78();
      puVar1 = (ulong *)param_1[1];
      if (puVar1 < (ulong *)param_1[2]) {
        puVar9 = puVar1 + 1;
        *puVar1 = param_2;
      }
      else {
        lVar4 = (long)puVar1 - *param_1;
        uVar3 = (lVar4 >> 3) + 1;
        if (uVar3 >> 0x3d != 0) {
          FUN_10aa4cc78();
          lVar4 = param_1[5];
          lVar6 = param_1[6];
          while (lVar6 != lVar4) {
            lVar6 = lVar6 + -0x48;
            func_0x00010aa4875c(lVar6);
          }
          param_1[6] = lVar4;
          lVar4 = param_1[8];
          lVar6 = param_1[9];
          while (lVar6 != lVar4) {
            lVar6 = lVar6 + -0x10;
            func_0x00010aa4dd5c();
          }
          param_1[9] = lVar4;
          param_1[0xc] = param_1[0xb];
          if (param_1[0x11] != 0) {
            plVar2 = (long *)param_1[0x10];
            while (plVar2 != (long *)0x0) {
              plVar2 = (long *)*plVar2;
              __ZdlPv();
            }
            param_1[0x10] = 0;
            lVar4 = param_1[0xf];
            if (lVar4 != 0) {
              lVar6 = 0;
              do {
                *(undefined8 *)(param_1[0xe] + lVar6 * 8) = 0;
                lVar6 = lVar6 + 1;
              } while (lVar4 != lVar6);
            }
            param_1[0x11] = 0;
          }
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 2;
        if (uVar7 <= uVar3) {
          uVar7 = uVar3;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        uVar3 = param_2;
        FUN_10aa4cc8c();
        puVar1 = (ulong *)(uVar7 + lVar4);
        puVar9 = puVar1 + 1;
        *puVar1 = param_2;
        lVar6 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar4 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar9;
        param_1[2] = uVar7 + uVar3 * 8;
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return;
    }
    lVar6 = param_1[1];
    uVar3 = param_2;
    FUN_10aa4cc8c();
    lVar4 = param_2 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = param_2 + uVar3 * 8;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10aa38078; end: 10aa381af;  */

undefined1  [16]
FUN_10aa38078(int *param_1,int param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  if (param_2 == 2) {
    plVar4 = (long *)param_3[1];
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar6 = *param_3;
      if ((lVar6 == 0) || (*param_1 != *(int *)(lVar6 + 0x218))) {
        lVar6 = 0;
        param_4 = (long *)0x0;
      }
      else {
        *param_4 = *(long *)(lVar6 + 0x220);
        lVar6 = 1;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      goto LAB_10aa38158;
    }
  }
  else if (param_2 == 1) {
    if (*(long *)(param_1 + 6) != 0) {
      *param_4 = *(long *)(param_1 + 4) + 0x10;
      lVar6 = 1;
      goto LAB_10aa38158;
    }
  }
  else if (param_2 == 0) {
    param_5[1] = *param_5;
    FUN_10aa37e80(param_5,*(undefined8 *)(param_1 + 6));
    for (piVar7 = *(int **)(param_1 + 4); piVar7 != param_1 + 2; piVar7 = *(int **)(piVar7 + 2)) {
      func_0x00010aa37f10(param_5,piVar7 + 4);
    }
    param_4 = (long *)*param_5;
    lVar6 = param_5[1] - (long)param_4 >> 3;
    goto LAB_10aa38158;
  }
  lVar6 = 0;
  param_4 = (long *)0x0;
LAB_10aa38158:
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = param_4;
  return auVar8;
}



/* Entry: 10aa381b0; end: 10aa3825b;  */

void FUN_10aa381b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    if (*(long *)(lVar2 + -0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10aa3825c; end: 10aa382df;  */

undefined1  [16] FUN_10aa3825c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f68bcd0;
  return auVar1;
}



/* Entry: 10aa382e0; end: 10aa3888f;  */

void FUN_10aa382e0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68bcd0,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b268;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b268;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b533,FUN_10aa6c0c8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b53b,FUN_10aa6c3ac,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b546,FUN_10aa6c628,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b551,FUN_10aa6c7b4,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b55f,FUN_10aa6c940,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b569,FUN_10aa6cc58,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b576,FUN_10aa6cf70,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b582,FUN_10aa6d0b0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b591,FUN_10aa6d1c4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b5a0,FUN_10aa6d370,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b5b2,FUN_10aa6d4cc,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa38870;
    FUN_10a054dac(param_1,&UNK_10f68b5c0,FUN_10aa6d88c,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f33c7a6,FUN_10aa6dbc4,FUN_10aa6dc7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a64d,FUN_10aa6de00,FUN_10aa6debc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68bcd0,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa38870:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa38874);
  (*pcVar6)();
}



/* Entry: 10aa38890; end: 10aa3891f;  */

undefined8 * FUN_10aa38890(undefined8 *param_1,undefined1 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c3a0f8;
  *(undefined1 *)(param_1 + 3) = param_2;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  param_1[4] = param_3;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_10aa38920(param_1 + 7,*(undefined8 *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 10aa38920; end: 10aa38a47;  */

void FUN_10aa38920(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x150;
  uVar6 = param_2;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c3bb98;
  plVar1 = plVar4 + 3;
  plVar5 = plVar4;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,param_2,plVar5,uVar6);
  plVar4[3] = (long)&PTR_FUN_110c39ac0;
  plVar4[5] = (long)&PTR_DAT_110c39b60;
  plVar4[10] = (long)&PTR_DAT_110c39bb8;
  *(undefined1 *)(plVar4 + 0x1f) = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  plVar4[0x29] = 0;
  plVar4[0x28] = 0;
  plStack_40 = plVar1;
  plStack_38 = plVar4;
  FUN_10aa4dc00(&plStack_40,plVar4 + 8,plVar1);
  FUN_10aa4da60(param_1,&plStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10aa38a48; end: 10aa38a8f;  */

undefined8 * FUN_10aa38a48(undefined8 *param_1)

{
  func_0x00010aa4dcac(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa38a90; end: 10aa38a93;  */

undefined8 * FUN_10aa38a90(undefined8 *param_1)

{
  func_0x00010aa4dcac(param_1 + 7);
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa38a94; end: 10aa38aa7;  */

void FUN_10aa38a94(void)

{
  FUN_10aa38a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa38aa8; end: 10aa38ce3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa38c74) */

void FUN_10aa38aa8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_78;
  long *plStack_70;
  char cStack_61;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  cVar2 = *(char *)(param_2 + 0x18);
  if (cVar2 != '\x02') {
    if (cVar2 == '\x01') {
      uStack_38 = 0x600000000000000;
      uStack_48 = 0x29746f6f7228;
    }
    else if (cVar2 == '\0') {
      uStack_38 = 0x800000000000000;
      uStack_48 = 0x296c61626f6c6728;
    }
    goto LAB_10aa38bd4;
  }
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x30);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_70 = plVar4, plVar4 == (long *)0x0)) {
    plVar4 = (long *)0x0;
LAB_10aa38b74:
    func_0x000107c2b054(&uStack_60,"(null)");
  }
  else {
    lStack_78 = *(long *)(param_2 + 0x28);
    if (lStack_78 == 0) goto LAB_10aa38b74;
    lVar5 = *(long *)(lStack_78 + 0x168);
    if (*(char *)(lVar5 + 0x17f) < '\0') {
      func_0x000107c3192c(&uStack_60,*(undefined8 *)(lVar5 + 0x168),*(undefined8 *)(lVar5 + 0x170));
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 0x170);
      uStack_58 = (undefined5)uVar6;
      uStack_53 = (undefined1)((ulong)uVar6 >> 0x28);
      uStack_52 = (undefined2)((ulong)uVar6 >> 0x30);
      uStack_60 = (undefined5)*(undefined8 *)(lVar5 + 0x168);
      uStack_5b = (undefined3)((ulong)*(undefined8 *)(lVar5 + 0x168) >> 0x28);
      uStack_50 = *(long *)(lVar5 + 0x178);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_48,&uStack_60);
  if (uStack_50 < 0) {
    __ZdlPv(CONCAT35(uStack_5b,uStack_60));
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
LAB_10aa38bd4:
  uStack_50 = CONCAT17(0xd,(undefined7)uStack_50);
  uStack_60 = 0x6973796850;
  uStack_5b = 0x2e7363;
  uStack_58 = 0x65626f7250;
  uStack_53 = 0;
  FUN_10aa27540(&lStack_78,*(undefined8 *)(param_2 + 0x38));
  FUN_10a0ee900(param_1,&UNK_10f68b5d1,0x18);
  if (cStack_61 < '\0') {
    __ZdlPv(lStack_78);
  }
  if (uStack_50 < 0) {
    __ZdlPv(CONCAT35(uStack_5b,uStack_60));
  }
  return;
}



/* Entry: 10aa38ce4; end: 10aa38dbb;  */

/* WARNING: Removing unreachable block (ram,0x00010aa17e4c) */
/* WARNING: Removing unreachable block (ram,0x00010aa17e50) */
/* WARNING: Removing unreachable block (ram,0x00010aa17e58) */

long * FUN_10aa38ce4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_10aa38920(&lStack_30,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    plVar5 = plStack_28;
    plVar6 = (long *)(param_1 + 0x38);
    FUN_10aa17e38(plVar6,lStack_30,plStack_28);
    if (plVar5 == (long *)0x0) {
      return plVar6;
    }
  }
  else {
    plVar5 = (long *)param_2[1];
    lStack_30 = lVar4;
    plStack_28 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x40);
      *(long *)(param_1 + 0x38) = lVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 1;
        do {
          lVar4 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      return (long *)(param_1 + 0x38);
    }
    plVar6 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(param_1 + 0x38);
    FUN_10aa17e38(plVar6,lVar4,plVar5);
  }
  plVar1 = plVar5 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return plVar6;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return plVar5;
}



/* Entry: 10aa38dbc; end: 10aa38f07;  */

void FUN_10aa38dbc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  uStack_50 = *param_2;
  uStack_48 = *(undefined4 *)(param_2 + 1);
  uStack_3c = 0x3f80000000000000;
  uStack_44 = 0;
  uStack_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  plStack_68 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x38);
  lStack_78 = *(long *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar2 = *(ulong *)(lVar7 + 0x1c8);
  if (uVar2 < *(ulong *)(lVar7 + 0x1d0)) {
    FUN_10aa4d364(uVar2,*(undefined1 *)(param_1 + 0x18),param_1 + 0x19,lVar3 + 0xe0,&uStack_60,
                  &plStack_68,param_4,&uStack_80);
    lVar6 = uVar2 + 0x100;
    *(long *)(lVar7 + 0x1c8) = lVar6;
  }
  else {
    lVar6 = lVar7 + 0x1c0;
    FUN_10aa4d220(lVar6,param_1 + 0x18,param_1 + 0x19,lVar3 + 0xe0,&uStack_60,&plStack_68,param_4,
                  &uStack_80);
  }
  *(long *)(lVar7 + 0x1c8) = lVar6;
  if (lStack_78 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_68 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa38eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_68 + 8))();
    return;
  }
  return;
}



/* Entry: 10aa38f08; end: 10aa39053;  */

void FUN_10aa38f08(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  uStack_50 = *param_2;
  uStack_48 = *(undefined4 *)(param_2 + 1);
  uStack_3c = 0x3f80000000000000;
  uStack_44 = 0;
  uStack_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  plStack_68 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x38);
  lStack_78 = *(long *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar2 = *(ulong *)(lVar7 + 0x1c8);
  if (uVar2 < *(ulong *)(lVar7 + 0x1d0)) {
    FUN_10aa4d944(uVar2,*(undefined1 *)(param_1 + 0x18),param_1 + 0x19,lVar3 + 0xe0,&uStack_60,
                  &plStack_68,param_4,&uStack_80);
    lVar6 = uVar2 + 0x100;
    *(long *)(lVar7 + 0x1c8) = lVar6;
  }
  else {
    lVar6 = lVar7 + 0x1c0;
    FUN_10aa4d800(lVar6,param_1 + 0x18,param_1 + 0x19,lVar3 + 0xe0,&uStack_60,&plStack_68,param_4,
                  &uStack_80);
  }
  *(long *)(lVar7 + 0x1c8) = lVar6;
  if (lStack_78 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_68 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa39004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_68 + 8))();
    return;
  }
  return;
}



/* Entry: 10aa39054; end: 10aa391eb;  */

void FUN_10aa39054(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 unaff_x22;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 unaff_x24;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_40 = (undefined4)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  if (param_1 <= 0.0) {
    lVar7 = *(long *)(param_2 + 0x20);
    uStack_58 = 0;
    uStack_54 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_50 = (undefined4)*param_3;
    uStack_4c = (undefined4)((ulong)*param_3 >> 0x20);
    uStack_48 = *(undefined4 *)(param_3 + 1);
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_34 = (undefined4)*param_4;
    uStack_30 = (undefined4)((ulong)*param_4 >> 0x20);
    uStack_2c = *(undefined4 *)(param_4 + 1);
    uStack_68 = 0;
    uStack_64 = 0;
    lVar6 = *(long *)(param_2 + 0x38);
    lStack_78 = *(long *)(param_2 + 0x30);
    uStack_80 = *(undefined8 *)(param_2 + 0x28);
    if (*(long *)(param_2 + 0x30) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x30) + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar2 = *(ulong *)(lVar7 + 0x1c8);
    if (uVar2 < *(ulong *)(lVar7 + 0x1d0)) {
      FUN_10aa4d364(uVar2,*(undefined1 *)(param_2 + 0x18),param_2 + 0x19,lVar6 + 0xe0,&uStack_60,
                    &uStack_68,param_5,&uStack_80);
      lVar5 = uVar2 + 0x100;
      *(long *)(lVar7 + 0x1c8) = lVar5;
    }
    else {
      lVar5 = lVar7 + 0x1c0;
      FUN_10aa4d220(lVar5,param_2 + 0x18,param_2 + 0x19,lVar6 + 0xe0,&uStack_60,&uStack_68,param_5,
                    &uStack_80);
    }
    *(long *)(lVar7 + 0x1c8) = lVar5;
    if (lStack_78 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long *)CONCAT44(uStack_64,uStack_68) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa38eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)CONCAT44(uStack_64,uStack_68) + 8))();
      return;
    }
    return;
  }
  lVar6 = *(long *)(param_2 + 0x20);
  lVar7 = *(long *)(param_2 + 0x38);
  lStack_78 = 0x3f80000000000000;
  uStack_80 = 0;
  uStack_70 = *param_3;
  uStack_68 = *(undefined4 *)(param_3 + 1);
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_54 = (undefined4)*param_4;
  uStack_50 = (undefined4)((ulong)*param_4 >> 0x20);
  uStack_4c = *(undefined4 *)(param_4 + 1);
  FUN_10aa28640(&plStack_88);
  lStack_98 = *(long *)(param_2 + 0x30);
  uStack_a0 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x30) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(ulong *)(lVar6 + 0x1c8);
  if (uVar2 < *(ulong *)(lVar6 + 0x1d0)) {
    FUN_10aa4d364(uVar2,*(undefined1 *)(param_2 + 0x18),param_2 + 0x19,lVar7 + 0xe0,&uStack_80,
                  &plStack_88,param_5,&uStack_a0);
    lVar5 = uVar2 + 0x100;
    *(long *)(lVar6 + 0x1c8) = lVar5;
  }
  else {
    lVar5 = lVar6 + 0x1c0;
    FUN_10aa4d220(lVar5,param_2 + 0x18,param_2 + 0x19,lVar7 + 0xe0,&uStack_80,&plStack_88,param_5,
                  &uStack_a0);
  }
  *(long *)(lVar6 + 0x1c8) = lVar5;
  if (lStack_98 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_88 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa39198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_88 + 8))();
    return;
  }
  return;
}



/* Entry: 10aa391ec; end: 10aa39383;  */

void FUN_10aa391ec(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 unaff_x22;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 unaff_x24;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_40 = (undefined4)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  if (param_1 <= 0.0) {
    lVar7 = *(long *)(param_2 + 0x20);
    uStack_58 = 0;
    uStack_54 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_50 = (undefined4)*param_3;
    uStack_4c = (undefined4)((ulong)*param_3 >> 0x20);
    uStack_48 = *(undefined4 *)(param_3 + 1);
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_34 = (undefined4)*param_4;
    uStack_30 = (undefined4)((ulong)*param_4 >> 0x20);
    uStack_2c = *(undefined4 *)(param_4 + 1);
    uStack_68 = 0;
    uStack_64 = 0;
    lVar6 = *(long *)(param_2 + 0x38);
    lStack_78 = *(long *)(param_2 + 0x30);
    uStack_80 = *(undefined8 *)(param_2 + 0x28);
    if (*(long *)(param_2 + 0x30) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x30) + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar2 = *(ulong *)(lVar7 + 0x1c8);
    if (uVar2 < *(ulong *)(lVar7 + 0x1d0)) {
      FUN_10aa4d944(uVar2,*(undefined1 *)(param_2 + 0x18),param_2 + 0x19,lVar6 + 0xe0,&uStack_60,
                    &uStack_68,param_5,&uStack_80);
      lVar5 = uVar2 + 0x100;
      *(long *)(lVar7 + 0x1c8) = lVar5;
    }
    else {
      lVar5 = lVar7 + 0x1c0;
      FUN_10aa4d800(lVar5,param_2 + 0x18,param_2 + 0x19,lVar6 + 0xe0,&uStack_60,&uStack_68,param_5,
                    &uStack_80);
    }
    *(long *)(lVar7 + 0x1c8) = lVar5;
    if (lStack_78 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long *)CONCAT44(uStack_64,uStack_68) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa39004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)CONCAT44(uStack_64,uStack_68) + 8))();
      return;
    }
    return;
  }
  lVar6 = *(long *)(param_2 + 0x20);
  lVar7 = *(long *)(param_2 + 0x38);
  lStack_78 = 0x3f80000000000000;
  uStack_80 = 0;
  uStack_70 = *param_3;
  uStack_68 = *(undefined4 *)(param_3 + 1);
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_54 = (undefined4)*param_4;
  uStack_50 = (undefined4)((ulong)*param_4 >> 0x20);
  uStack_4c = *(undefined4 *)(param_4 + 1);
  FUN_10aa28640(&plStack_88);
  lStack_98 = *(long *)(param_2 + 0x30);
  uStack_a0 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x30) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(ulong *)(lVar6 + 0x1c8);
  if (uVar2 < *(ulong *)(lVar6 + 0x1d0)) {
    FUN_10aa4d944(uVar2,*(undefined1 *)(param_2 + 0x18),param_2 + 0x19,lVar7 + 0xe0,&uStack_80,
                  &plStack_88,param_5,&uStack_a0);
    lVar5 = uVar2 + 0x100;
    *(long *)(lVar6 + 0x1c8) = lVar5;
  }
  else {
    lVar5 = lVar6 + 0x1c0;
    FUN_10aa4d800(lVar5,param_2 + 0x18,param_2 + 0x19,lVar7 + 0xe0,&uStack_80,&plStack_88,param_5,
                  &uStack_a0);
  }
  *(long *)(lVar6 + 0x1c8) = lVar5;
  if (lStack_98 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_88 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aa39330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_88 + 8))();
    return;
  }
  return;
}



/* Entry: 10aa39384; end: 10aa3952f;  */

undefined1  [16]
FUN_10aa39384(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar13;
  long *plVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar15;
  undefined8 unaff_x26;
  long lVar16;
  undefined8 unaff_x29;
  undefined1 *puVar17;
  undefined8 unaff_x30;
  code *pcVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
code_r0x00010aa39384:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  plVar7 = (long *)(ulong)*(byte *)(param_3 + 3);
  plVar4 = *(long **)(param_3[4] + 0x48);
  plVar14 = param_3 + 5;
  FUN_10aa38078();
  if (plVar7 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    plVar8 = (long *)0x0;
  }
  else {
    unaff_x25 = param_3[4];
    func_0x00010aa37fc8(unaff_x25 + 0x270);
    uVar10 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
    lVar12 = param_3[7];
    param_2 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f80000000000000;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(long *)((long)register0x00000008 + -0xb0) = *param_4;
    *(int *)((long)register0x00000008 + -0xa8) = (int)param_4[1];
    *(undefined8 *)((long)register0x00000008 + -0x9c) = 0x3f80000000000000;
    *(undefined8 *)((long)register0x00000008 + -0xa4) = 0;
    *(long *)((long)register0x00000008 + -0x94) = *param_5;
    *(int *)((long)register0x00000008 + -0x8c) = (int)param_5[1];
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar10;
    plVar8 = plVar4;
    plVar14 = plVar7;
    FUN_10aa2c0f0((undefined1 *)((long)register0x00000008 + -0x88),plVar4,plVar7,
                  (long)param_3 + 0x19,lVar12 + 0xe0,
                  (undefined1 *)((long)register0x00000008 + -0xc0),0,unaff_x25 + 0x270);
    unaff_x24 = plVar4;
    if (*(long *)((long)register0x00000008 + -0x88) == 0) {
      *(undefined1 *)param_1 = 0;
      param_3 = *(long **)((long)register0x00000008 + -0x80);
      *(undefined1 *)(param_1 + 2) = 0;
      if (param_3 != (long *)0x0) {
        plVar4 = param_3 + 1;
        do {
          lVar12 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*param_3 + 0x10))(param_3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
        }
      }
    }
    else {
      lVar12 = *(long *)((long)register0x00000008 + -0x80);
      *param_1 = *(long *)((long)register0x00000008 + -0x88);
      param_1[1] = lVar12;
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  plVar4 = *(long **)((long)register0x00000008 + -0x78);
  uVar10 = param_2;
  if (plVar4 != (long *)0x0) {
    __ZdlPv();
    uVar10 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar19._8_8_ = plVar8;
    auVar19._0_8_ = plVar4;
    return auVar19;
  }
  ___stack_chk_fail();
  if (*(long *)((long)register0x00000008 + -0x78) != 0) {
    __ZdlPv();
  }
  pcVar18 = FUN_10aa39530;
  plVar5 = plVar4;
  __Unwind_Resume();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xd0);
  puVar11 = extraout_x8;
  do {
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xb0);
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(long *)(puVar3 + -0x48) = unaff_x25;
    *(long **)(puVar3 + -0x40) = unaff_x24;
    *(long **)(puVar3 + -0x38) = plVar7;
    *(long **)(puVar3 + -0x30) = param_4;
    *(long **)(puVar3 + -0x28) = param_5;
    *(long **)(puVar3 + -0x20) = param_3;
    *(long **)(puVar3 + -0x18) = plVar4;
    *(undefined1 **)(puVar3 + -0x10) = puVar17;
    *(code **)(puVar3 + -8) = pcVar18;
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar3 + -0x78) = 0;
    *(undefined8 *)(puVar3 + -0x70) = 0;
    *(undefined8 *)(puVar3 + -0x68) = 0;
    plVar4 = (long *)(ulong)*(byte *)(plVar5 + 3);
    plVar7 = *(long **)(plVar5[4] + 0x48);
    param_5 = plVar5 + 5;
    FUN_10aa38078();
    param_4 = plVar4;
    if (plVar4 == (long *)0x0) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      param_2 = uVar10;
    }
    else {
      unaff_x25 = plVar5[4];
      func_0x00010aa37fc8(unaff_x25 + 0x270);
      uVar10 = *(undefined8 *)(*(long *)(plVar5[4] + 0x40) + 0xa80);
      lVar12 = plVar5[7];
      *(undefined8 *)(puVar3 + -0xa8) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      *(long *)(puVar3 + -0xa0) = *plVar8;
      *(int *)(puVar3 + -0x98) = (int)plVar8[1];
      *(undefined8 *)(puVar3 + -0x8c) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -0x94) = 0;
      *(long *)(puVar3 + -0x84) = *plVar14;
      *(int *)(puVar3 + -0x7c) = (int)plVar14[1];
      param_5 = (long *)((long)plVar5 + 0x19);
      FUN_10aa2d148(plVar7,plVar4,param_5,lVar12 + 0xe0,puVar3 + -0xb0,0,unaff_x25 + 0x270,uVar10);
      uVar10 = *(undefined8 *)(unaff_x25 + 0x2b0);
      puVar11[1] = *(undefined8 *)(unaff_x25 + 0x2b8);
      *puVar11 = uVar10;
      puVar11[2] = *(undefined8 *)(unaff_x25 + 0x2c0);
      *(undefined8 *)(unaff_x25 + 0x2c0) = 0;
      *(undefined8 *)(unaff_x25 + 0x2b8) = 0;
      *(undefined8 *)(unaff_x25 + 0x2b0) = 0;
      unaff_x24 = plVar7;
      param_2 = 0;
    }
    plVar7 = *(long **)(puVar3 + -0x78);
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x58)) {
      auVar20._8_8_ = param_4;
      auVar20._0_8_ = plVar7;
      return auVar20;
    }
    ___stack_chk_fail();
    if (*(long *)(puVar3 + -0x78) != 0) {
      __ZdlPv();
    }
    param_3 = plVar7;
    __Unwind_Resume();
    *(undefined8 *)(puVar3 + -0x110) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x108) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x100) = unaff_x26;
    *(long *)(puVar3 + -0xf8) = unaff_x25;
    *(long **)(puVar3 + -0xf0) = unaff_x24;
    *(long **)(puVar3 + -0xe8) = plVar4;
    *(long **)(puVar3 + -0xe0) = plVar8;
    *(long **)(puVar3 + -0xd8) = plVar14;
    *(long **)(puVar3 + -0xd0) = plVar5;
    *(long **)(puVar3 + -200) = plVar7;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x10;
    *(code **)(puVar3 + -0xb8) = FUN_10aa39694;
    *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = param_3;
    plVar13 = param_5;
    uVar10 = param_2;
    if ((float)param_2 <= 0.0) {
      plVar8 = param_4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x118)) break;
    }
    else {
      *(undefined8 *)(puVar3 + -0x138) = 0;
      *(undefined8 *)(puVar3 + -0x130) = 0;
      *(undefined8 *)(puVar3 + -0x128) = 0;
      plVar4 = (long *)(ulong)*(byte *)(param_3 + 3);
      plVar5 = *(long **)(param_3[4] + 0x48);
      plVar14 = param_3 + 5;
      FUN_10aa38078();
      if (plVar4 == (long *)0x0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
        plVar8 = (long *)0x0;
      }
      else {
        unaff_x25 = param_3[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        unaff_x26 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        FUN_10aa28640(puVar3 + -0x140,param_2);
        lVar12 = param_3[7];
        uVar10 = 0;
        *(undefined8 *)(puVar3 + -0x188) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -400) = 0;
        *(long *)(puVar3 + -0x180) = *param_4;
        *(int *)(puVar3 + -0x178) = (int)param_4[1];
        *(undefined8 *)(puVar3 + -0x16c) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x174) = 0;
        *(long *)(puVar3 + -0x164) = *param_5;
        *(int *)(puVar3 + -0x15c) = (int)param_5[1];
        plVar13 = *(long **)(puVar3 + -0x140);
        *(undefined8 *)(puVar3 + -0x1a0) = unaff_x26;
        plVar8 = plVar5;
        plVar14 = plVar4;
        FUN_10aa2c0f0(puVar3 + -0x150,plVar5,plVar4,(long)param_3 + 0x19,lVar12 + 0xe0,puVar3 + -400
                      ,plVar13,unaff_x25 + 0x270);
        if (*(long *)(puVar3 + -0x150) == 0) {
          *(undefined1 *)extraout_x8_00 = 0;
          param_3 = *(long **)(puVar3 + -0x148);
          *(undefined1 *)(extraout_x8_00 + 2) = 0;
          if (param_3 != (long *)0x0) {
            plVar7 = param_3 + 1;
            do {
              lVar12 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*param_3 + 0x10))(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
        }
        else {
          lVar12 = *(long *)(puVar3 + -0x148);
          *extraout_x8_00 = *(long *)(puVar3 + -0x150);
          extraout_x8_00[1] = lVar12;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
        }
        plVar7 = param_3;
        unaff_x24 = plVar5;
        if (*(long **)(puVar3 + -0x140) != (long *)0x0) {
          (**(code **)(**(long **)(puVar3 + -0x140) + 8))();
        }
      }
      param_3 = *(long **)(puVar3 + -0x138);
      if (param_3 != (long *)0x0) {
        __ZdlPv();
      }
      param_5 = plVar14;
      unaff_d8 = param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x118)) {
        auVar21._8_8_ = plVar8;
        auVar21._0_8_ = param_3;
        return auVar21;
      }
    }
    ___stack_chk_fail();
    plVar14 = param_5;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
      plVar14 = param_5;
    }
    if (*(long *)(puVar3 + -0x138) != 0) {
      __ZdlPv();
    }
    plVar5 = param_3;
    __Unwind_Resume();
    *(undefined8 *)(puVar3 + -0x200) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x1f8) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x1f0) = unaff_x26;
    *(long *)(puVar3 + -0x1e8) = unaff_x25;
    *(long **)(puVar3 + -0x1e0) = unaff_x24;
    *(long **)(puVar3 + -0x1d8) = plVar4;
    *(long **)(puVar3 + -0x1d0) = param_4;
    *(long **)(puVar3 + -0x1c8) = plVar13;
    *(long **)(puVar3 + -0x1c0) = plVar7;
    *(long **)(puVar3 + -0x1b8) = param_3;
    *(undefined1 **)(puVar3 + -0x1b0) = puVar3 + -0xc0;
    *(code **)(puVar3 + -0x1a8) = FUN_10aa398dc;
    *(undefined8 *)(puVar3 + -0x208) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (0.0 < (float)uVar10) {
      *(undefined8 *)(puVar3 + -0x228) = 0;
      *(undefined8 *)(puVar3 + -0x220) = 0;
      *(undefined8 *)(puVar3 + -0x218) = 0;
      uVar9 = (ulong)*(byte *)(plVar5 + 3);
      uVar6 = *(undefined8 *)(plVar5[4] + 0x48);
      FUN_10aa38078(uVar6,uVar9,plVar5 + 5,puVar3 + -0x210,puVar3 + -0x228);
      if (uVar9 == 0) {
        *extraout_x8_01 = 0;
        extraout_x8_01[1] = 0;
        extraout_x8_01[2] = 0;
      }
      else {
        lVar16 = plVar5[4];
        func_0x00010aa37fc8(lVar16 + 0x270);
        uVar15 = *(undefined8 *)(*(long *)(plVar5[4] + 0x40) + 0xa80);
        FUN_10aa28640(puVar3 + -0x230,uVar10);
        lVar12 = plVar5[7];
        *(undefined8 *)(puVar3 + -0x268) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x270) = 0;
        *(long *)(puVar3 + -0x260) = *plVar8;
        *(int *)(puVar3 + -600) = (int)plVar8[1];
        *(undefined8 *)(puVar3 + -0x24c) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x254) = 0;
        *(long *)(puVar3 + -0x244) = *plVar14;
        *(int *)(puVar3 + -0x23c) = (int)plVar14[1];
        plVar14 = *(long **)(puVar3 + -0x230);
        FUN_10aa2d148(uVar6,uVar9,(long)plVar5 + 0x19,lVar12 + 0xe0,puVar3 + -0x270,plVar14,
                      lVar16 + 0x270,uVar15);
        uVar10 = *(undefined8 *)(lVar16 + 0x2b0);
        extraout_x8_01[1] = *(undefined8 *)(lVar16 + 0x2b8);
        *extraout_x8_01 = uVar10;
        extraout_x8_01[2] = *(undefined8 *)(lVar16 + 0x2c0);
        *(undefined8 *)(lVar16 + 0x2c0) = 0;
        *(undefined8 *)(lVar16 + 0x2b8) = 0;
        *(undefined8 *)(lVar16 + 0x2b0) = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      plVar5 = *(long **)(puVar3 + -0x228);
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x208)) {
        auVar22._8_8_ = uVar9;
        auVar22._0_8_ = plVar5;
        return auVar22;
      }
LAB_10aa39aa4:
      ___stack_chk_fail();
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      if (*(long *)(puVar3 + -0x228) != 0) {
        __ZdlPv();
      }
      __Unwind_Resume(plVar5);
      auVar23._8_8_ = 0x12;
      auVar23._0_8_ = &UNK_10f68bcde;
      return auVar23;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar3 + -0x208)) goto LAB_10aa39aa4;
    puVar17 = *(undefined1 **)(puVar3 + -0x1b0);
    pcVar18 = *(code **)(puVar3 + -0x1a8);
    param_3 = *(long **)(puVar3 + -0x1c0);
    plVar4 = *(long **)(puVar3 + -0x1b8);
    param_4 = *(long **)(puVar3 + -0x1d0);
    param_5 = *(long **)(puVar3 + -0x1c8);
    unaff_x24 = *(long **)(puVar3 + -0x1e0);
    plVar7 = *(long **)(puVar3 + -0x1d8);
    unaff_x26 = *(undefined8 *)(puVar3 + -0x1f0);
    unaff_x25 = *(long *)(puVar3 + -0x1e8);
    unaff_d9 = *(undefined8 *)(puVar3 + -0x200);
    unaff_d8 = *(undefined8 *)(puVar3 + -0x1f8);
    puVar3 = puVar3 + -0x1a0;
    puVar11 = extraout_x8_01;
  } while( true );
  unaff_x29 = *(undefined8 *)(puVar3 + -0xc0);
  unaff_x30 = *(undefined8 *)(puVar3 + -0xb8);
  unaff_x20 = *(undefined8 *)(puVar3 + -0xd0);
  unaff_x19 = *(undefined8 *)(puVar3 + -200);
  unaff_x22 = *(undefined8 *)(puVar3 + -0xe0);
  unaff_x21 = *(undefined8 *)(puVar3 + -0xd8);
  unaff_x24 = *(long **)(puVar3 + -0xf0);
  unaff_x23 = *(undefined8 *)(puVar3 + -0xe8);
  unaff_x26 = *(undefined8 *)(puVar3 + -0x100);
  unaff_x25 = *(long *)(puVar3 + -0xf8);
  unaff_d9 = *(undefined8 *)(puVar3 + -0x110);
  unaff_d8 = *(undefined8 *)(puVar3 + -0x108);
  param_1 = extraout_x8_00;
  goto code_r0x00010aa39384;
}



/* Entry: 10aa39530; end: 10aa39693;  */

undefined1  [16]
FUN_10aa39530(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar11;
  undefined8 unaff_x26;
  long lVar12;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  do {
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      plVar5 = (long *)(ulong)*(byte *)(param_3 + 3);
      plVar3 = *(long **)(param_3[4] + 0x48);
      unaff_x21 = param_3 + 5;
      FUN_10aa38078();
      unaff_x22 = plVar5;
      if (plVar5 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        unaff_x25 = param_3[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        uVar8 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        lVar9 = param_3[7];
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(long *)((long)register0x00000008 + -0xa0) = *param_4;
        *(int *)((long)register0x00000008 + -0x98) = (int)param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x8c) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0x94) = 0;
        *(long *)((long)register0x00000008 + -0x84) = *param_5;
        *(int *)((long)register0x00000008 + -0x7c) = (int)param_5[1];
        unaff_x21 = (long *)((long)param_3 + 0x19);
        FUN_10aa2d148(plVar3,plVar5,unaff_x21,lVar9 + 0xe0,
                      (undefined1 *)((long)register0x00000008 + -0xb0),0,unaff_x25 + 0x270,uVar8);
        uVar8 = *(undefined8 *)(unaff_x25 + 0x2b0);
        param_1[1] = *(undefined8 *)(unaff_x25 + 0x2b8);
        *param_1 = uVar8;
        param_1[2] = *(undefined8 *)(unaff_x25 + 0x2c0);
        *(undefined8 *)(unaff_x25 + 0x2c0) = 0;
        param_2 = 0;
        *(undefined8 *)(unaff_x25 + 0x2b8) = 0;
        *(undefined8 *)(unaff_x25 + 0x2b0) = 0;
        unaff_x24 = plVar3;
      }
      plVar3 = *(long **)((long)register0x00000008 + -0x78);
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        auVar14._8_8_ = unaff_x22;
        auVar14._0_8_ = plVar3;
        return auVar14;
      }
      ___stack_chk_fail();
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        __ZdlPv();
      }
      unaff_x20 = plVar3;
      __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xf8) = unaff_x25;
      *(long **)((long)register0x00000008 + -0xf0) = unaff_x24;
      *(long **)((long)register0x00000008 + -0xe8) = plVar5;
      *(long **)((long)register0x00000008 + -0xe0) = param_4;
      *(long **)((long)register0x00000008 + -0xd8) = param_5;
      *(long **)((long)register0x00000008 + -0xd0) = param_3;
      *(long **)((long)register0x00000008 + -200) = plVar3;
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0xb8) = FUN_10aa39694;
      *(undefined8 *)((long)register0x00000008 + -0x118) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = unaff_x20;
      plVar10 = unaff_x21;
      uVar8 = param_2;
      if (0.0 < (float)param_2) break;
      param_4 = unaff_x22;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x118))
      goto LAB_10aa398a0;
      unaff_x24 = *(long **)((long)register0x00000008 + -0xf0);
      unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x100);
      unaff_x25 = *(long *)((long)register0x00000008 + -0xf8);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x110);
      unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x108);
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xf8) = unaff_x25;
      *(long **)((long)register0x00000008 + -0xf0) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x108) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      unaff_x23 = (long *)(ulong)*(byte *)(unaff_x20 + 3);
      plVar3 = *(long **)(unaff_x20[4] + 0x48);
      param_5 = unaff_x20 + 5;
      FUN_10aa38078();
      if (unaff_x23 == (long *)0x0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
        param_4 = (long *)0x0;
      }
      else {
        unaff_x25 = unaff_x20[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x20[4] + 0x40) + 0xa80);
        lVar9 = unaff_x20[7];
        param_2 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(long *)((long)register0x00000008 + -0x160) = *unaff_x22;
        *(int *)((long)register0x00000008 + -0x158) = (int)unaff_x22[1];
        *(undefined8 *)((long)register0x00000008 + -0x14c) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0x154) = 0;
        *(long *)((long)register0x00000008 + -0x144) = *unaff_x21;
        *(int *)((long)register0x00000008 + -0x13c) = (int)unaff_x21[1];
        *(undefined8 *)((long)register0x00000008 + -0x180) = uVar8;
        param_4 = plVar3;
        param_5 = unaff_x23;
        FUN_10aa2c0f0((undefined1 *)((long)register0x00000008 + -0x138),plVar3,unaff_x23,
                      (long)unaff_x20 + 0x19,lVar9 + 0xe0,
                      (undefined1 *)((long)register0x00000008 + -0x170),0,unaff_x25 + 0x270);
        unaff_x24 = plVar3;
        if (*(long *)((long)register0x00000008 + -0x138) == 0) {
          *(undefined1 *)extraout_x8_00 = 0;
          unaff_x20 = *(long **)((long)register0x00000008 + -0x130);
          *(undefined1 *)(extraout_x8_00 + 2) = 0;
          if (unaff_x20 != (long *)0x0) {
            plVar3 = unaff_x20 + 1;
            do {
              lVar9 = *plVar3;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar2) {
                *plVar3 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
            }
          }
        }
        else {
          lVar9 = *(long *)((long)register0x00000008 + -0x130);
          *extraout_x8_00 = *(long *)((long)register0x00000008 + -0x138);
          extraout_x8_00[1] = lVar9;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
        }
      }
      unaff_x19 = *(long **)((long)register0x00000008 + -0x128);
      if (unaff_x19 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x108))
      {
        auVar13._8_8_ = param_4;
        auVar13._0_8_ = unaff_x19;
        return auVar13;
      }
      ___stack_chk_fail();
      if (*(long *)((long)register0x00000008 + -0x128) != 0) {
        __ZdlPv();
      }
      unaff_x30 = FUN_10aa39530;
      param_3 = unaff_x19;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
      param_1 = extraout_x8;
    }
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    plVar5 = (long *)(ulong)*(byte *)(unaff_x20 + 3);
    plVar4 = *(long **)(unaff_x20[4] + 0x48);
    plVar7 = unaff_x20 + 5;
    FUN_10aa38078();
    if (plVar5 == (long *)0x0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x25 = unaff_x20[4];
      func_0x00010aa37fc8(unaff_x25 + 0x270);
      unaff_x26 = *(undefined8 *)(*(long *)(unaff_x20[4] + 0x40) + 0xa80);
      FUN_10aa28640((undefined1 *)((long)register0x00000008 + -0x140),param_2);
      lVar9 = unaff_x20[7];
      uVar8 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -400) = 0;
      *(long *)((long)register0x00000008 + -0x180) = *unaff_x22;
      *(int *)((long)register0x00000008 + -0x178) = (int)unaff_x22[1];
      *(undefined8 *)((long)register0x00000008 + -0x16c) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0x174) = 0;
      *(long *)((long)register0x00000008 + -0x164) = *unaff_x21;
      *(int *)((long)register0x00000008 + -0x15c) = (int)unaff_x21[1];
      plVar10 = *(long **)((long)register0x00000008 + -0x140);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x26;
      param_4 = plVar4;
      plVar7 = plVar5;
      FUN_10aa2c0f0((undefined1 *)((long)register0x00000008 + -0x150),plVar4,plVar5,
                    (long)unaff_x20 + 0x19,lVar9 + 0xe0,
                    (undefined1 *)((long)register0x00000008 + -400),plVar10,unaff_x25 + 0x270);
      if (*(long *)((long)register0x00000008 + -0x150) == 0) {
        *(undefined1 *)extraout_x8_00 = 0;
        unaff_x20 = *(long **)((long)register0x00000008 + -0x148);
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
        if (unaff_x20 != (long *)0x0) {
          plVar3 = unaff_x20 + 1;
          do {
            lVar9 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
          }
        }
      }
      else {
        lVar9 = *(long *)((long)register0x00000008 + -0x148);
        *extraout_x8_00 = *(long *)((long)register0x00000008 + -0x150);
        extraout_x8_00[1] = lVar9;
        *(undefined1 *)(extraout_x8_00 + 2) = 1;
      }
      plVar3 = unaff_x20;
      unaff_x24 = plVar4;
      if (*(long **)((long)register0x00000008 + -0x140) != (long *)0x0) {
        (**(code **)(**(long **)((long)register0x00000008 + -0x140) + 8))();
      }
    }
    unaff_x20 = *(long **)((long)register0x00000008 + -0x138);
    if (unaff_x20 != (long *)0x0) {
      __ZdlPv();
    }
    unaff_x21 = plVar7;
    unaff_d8 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x118)) {
      auVar15._8_8_ = param_4;
      auVar15._0_8_ = unaff_x20;
      return auVar15;
    }
LAB_10aa398a0:
    ___stack_chk_fail();
    param_5 = unaff_x21;
    param_2 = uVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
      param_5 = unaff_x21;
      param_2 = uVar8;
    }
    if (*(long *)((long)register0x00000008 + -0x138) != 0) {
      __ZdlPv();
    }
    param_3 = unaff_x20;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x200) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x1f8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x1e8) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x1e0) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x1d8) = plVar5;
    *(long **)((long)register0x00000008 + -0x1d0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x1c8) = plVar10;
    *(long **)((long)register0x00000008 + -0x1c0) = plVar3;
    *(long **)((long)register0x00000008 + -0x1b8) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x1b0) =
         (undefined1 *)((long)register0x00000008 + -0xc0);
    *(code **)((long)register0x00000008 + -0x1a8) = FUN_10aa398dc;
    *(undefined8 *)((long)register0x00000008 + -0x208) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (0.0 < (float)param_2) {
      *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
      uVar6 = (ulong)*(byte *)(param_3 + 3);
      uVar8 = *(undefined8 *)(param_3[4] + 0x48);
      FUN_10aa38078(uVar8,uVar6,param_3 + 5,(undefined1 *)((long)register0x00000008 + -0x210),
                    (undefined1 *)((long)register0x00000008 + -0x228));
      if (uVar6 == 0) {
        *extraout_x8_01 = 0;
        extraout_x8_01[1] = 0;
        extraout_x8_01[2] = 0;
      }
      else {
        lVar12 = param_3[4];
        func_0x00010aa37fc8(lVar12 + 0x270);
        uVar11 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        FUN_10aa28640((undefined1 *)((long)register0x00000008 + -0x230),param_2);
        lVar9 = param_3[7];
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
        *(long *)((long)register0x00000008 + -0x260) = *param_4;
        *(int *)((long)register0x00000008 + -600) = (int)param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x24c) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0x254) = 0;
        *(long *)((long)register0x00000008 + -0x244) = *param_5;
        *(int *)((long)register0x00000008 + -0x23c) = (int)param_5[1];
        param_5 = *(long **)((long)register0x00000008 + -0x230);
        FUN_10aa2d148(uVar8,uVar6,(long)param_3 + 0x19,lVar9 + 0xe0,
                      (undefined1 *)((long)register0x00000008 + -0x270),param_5,lVar12 + 0x270,
                      uVar11);
        uVar8 = *(undefined8 *)(lVar12 + 0x2b0);
        extraout_x8_01[1] = *(undefined8 *)(lVar12 + 0x2b8);
        *extraout_x8_01 = uVar8;
        extraout_x8_01[2] = *(undefined8 *)(lVar12 + 0x2c0);
        *(undefined8 *)(lVar12 + 0x2c0) = 0;
        *(undefined8 *)(lVar12 + 0x2b8) = 0;
        *(undefined8 *)(lVar12 + 0x2b0) = 0;
        if (param_5 != (long *)0x0) {
          (**(code **)(*param_5 + 8))(param_5);
        }
      }
      param_3 = *(long **)((long)register0x00000008 + -0x228);
      if (param_3 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x208))
      {
        auVar16._8_8_ = uVar6;
        auVar16._0_8_ = param_3;
        return auVar16;
      }
LAB_10aa39aa4:
      ___stack_chk_fail();
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 8))(param_5);
      }
      if (*(long *)((long)register0x00000008 + -0x228) != 0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_3);
      auVar17._8_8_ = 0x12;
      auVar17._0_8_ = &UNK_10f68bcde;
      return auVar17;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x208))
    goto LAB_10aa39aa4;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
    unaff_x30 = *(code **)((long)register0x00000008 + -0x1a8);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x1c0);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x1b8);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x1d0);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x1c8);
    unaff_x24 = *(long **)((long)register0x00000008 + -0x1e0);
    unaff_x23 = *(long **)((long)register0x00000008 + -0x1d8);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
    unaff_x25 = *(long *)((long)register0x00000008 + -0x1e8);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x200);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1a0);
    param_1 = extraout_x8_01;
  } while( true );
}



/* Entry: 10aa39694; end: 10aa398db;  */

undefined1  [16]
FUN_10aa39694(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  long *extraout_x8_00;
  long lVar10;
  undefined8 *extraout_x8_01;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar11;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar12;
  undefined8 unaff_x26;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *unaff_x29;
  code *pcVar15;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  do {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = param_3;
    plVar11 = param_5;
    uVar6 = param_2;
    if ((float)param_2 <= 0.0) {
      unaff_x22 = param_4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68))
      goto LAB_10aa398a0;
      unaff_x24 = *(long **)((long)register0x00000008 + -0x40);
      unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
      unaff_x25 = *(long *)((long)register0x00000008 + -0x48);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x60);
      unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x58);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x38);
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      plVar4 = (long *)(ulong)*(byte *)(param_3 + 3);
      plVar11 = *(long **)(param_3[4] + 0x48);
      unaff_x21 = param_3 + 5;
      FUN_10aa38078();
      if (plVar4 == (long *)0x0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        unaff_x22 = (long *)0x0;
      }
      else {
        unaff_x25 = param_3[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        uVar6 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        lVar10 = param_3[7];
        param_2 = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(long *)((long)register0x00000008 + -0xb0) = *param_4;
        *(int *)((long)register0x00000008 + -0xa8) = (int)param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0x9c) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xa4) = 0;
        *(long *)((long)register0x00000008 + -0x94) = *param_5;
        *(int *)((long)register0x00000008 + -0x8c) = (int)param_5[1];
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar6;
        unaff_x22 = plVar11;
        unaff_x21 = plVar4;
        FUN_10aa2c0f0((undefined1 *)((long)register0x00000008 + -0x88),plVar11,plVar4,
                      (long)param_3 + 0x19,lVar10 + 0xe0,
                      (undefined1 *)((long)register0x00000008 + -0xc0),0,unaff_x25 + 0x270);
        unaff_x24 = plVar11;
        if (*(long *)((long)register0x00000008 + -0x88) == 0) {
          *(undefined1 *)param_1 = 0;
          param_3 = *(long **)((long)register0x00000008 + -0x80);
          *(undefined1 *)(param_1 + 2) = 0;
          if (param_3 != (long *)0x0) {
            plVar11 = param_3 + 1;
            do {
              lVar10 = *plVar11;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar2) {
                *plVar11 = lVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*param_3 + 0x10))(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
        }
        else {
          lVar10 = *(long *)((long)register0x00000008 + -0x80);
          *param_1 = *(long *)((long)register0x00000008 + -0x88);
          param_1[1] = lVar10;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      plVar11 = *(long **)((long)register0x00000008 + -0x78);
      if (plVar11 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        auVar16._8_8_ = unaff_x22;
        auVar16._0_8_ = plVar11;
        return auVar16;
      }
      ___stack_chk_fail();
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        __ZdlPv();
      }
      pcVar15 = FUN_10aa39530;
      unaff_x20 = plVar11;
      __Unwind_Resume();
      puVar9 = extraout_x8;
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      unaff_x23 = (long *)(ulong)*(byte *)(param_3 + 3);
      plVar5 = *(long **)(param_3[4] + 0x48);
      plVar8 = param_3 + 5;
      FUN_10aa38078();
      if (unaff_x23 == (long *)0x0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        unaff_x22 = (long *)0x0;
      }
      else {
        unaff_x25 = param_3[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        unaff_x26 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        FUN_10aa28640((undefined1 *)((long)register0x00000008 + -0x90),param_2);
        lVar10 = param_3[7];
        uVar6 = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
        *(long *)((long)register0x00000008 + -0xd0) = *param_4;
        *(int *)((long)register0x00000008 + -200) = (int)param_4[1];
        *(undefined8 *)((long)register0x00000008 + -0xbc) = 0x3f80000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xc4) = 0;
        *(long *)((long)register0x00000008 + -0xb4) = *param_5;
        *(int *)((long)register0x00000008 + -0xac) = (int)param_5[1];
        plVar11 = *(long **)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
        unaff_x22 = plVar5;
        plVar8 = unaff_x23;
        FUN_10aa2c0f0((undefined1 *)((long)register0x00000008 + -0xa0),plVar5,unaff_x23,
                      (long)param_3 + 0x19,lVar10 + 0xe0,
                      (undefined1 *)((long)register0x00000008 + -0xe0),plVar11,unaff_x25 + 0x270);
        if (*(long *)((long)register0x00000008 + -0xa0) == 0) {
          *(undefined1 *)param_1 = 0;
          param_3 = *(long **)((long)register0x00000008 + -0x98);
          *(undefined1 *)(param_1 + 2) = 0;
          if (param_3 != (long *)0x0) {
            plVar4 = param_3 + 1;
            do {
              lVar10 = *plVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = lVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*param_3 + 0x10))(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
        }
        else {
          lVar10 = *(long *)((long)register0x00000008 + -0x98);
          *param_1 = *(long *)((long)register0x00000008 + -0xa0);
          param_1[1] = lVar10;
          *(undefined1 *)(param_1 + 2) = 1;
        }
        plVar4 = param_3;
        unaff_x24 = plVar5;
        if (*(long **)((long)register0x00000008 + -0x90) != (long *)0x0) {
          (**(code **)(**(long **)((long)register0x00000008 + -0x90) + 8))();
        }
      }
      param_3 = *(long **)((long)register0x00000008 + -0x88);
      if (param_3 != (long *)0x0) {
        __ZdlPv();
      }
      param_5 = plVar8;
      unaff_d8 = param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
      {
        auVar18._8_8_ = unaff_x22;
        auVar18._0_8_ = param_3;
        return auVar18;
      }
LAB_10aa398a0:
      ___stack_chk_fail();
      unaff_x21 = param_5;
      param_2 = uVar6;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11);
        unaff_x21 = param_5;
        param_2 = uVar6;
      }
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        __ZdlPv();
      }
      unaff_x20 = param_3;
      __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x26;
      *(long *)((long)register0x00000008 + -0x138) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x130) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x128) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x120) = param_4;
      *(long **)((long)register0x00000008 + -0x118) = plVar11;
      *(long **)((long)register0x00000008 + -0x110) = plVar4;
      *(long **)((long)register0x00000008 + -0x108) = param_3;
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0xf8) = FUN_10aa398dc;
      *(undefined8 *)((long)register0x00000008 + -0x158) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      if (0.0 < (float)param_2) {
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        uVar7 = (ulong)*(byte *)(unaff_x20 + 3);
        uVar6 = *(undefined8 *)(unaff_x20[4] + 0x48);
        FUN_10aa38078(uVar6,uVar7,unaff_x20 + 5,(undefined1 *)((long)register0x00000008 + -0x160),
                      (undefined1 *)((long)register0x00000008 + -0x178));
        if (uVar7 == 0) {
          *extraout_x8_01 = 0;
          extraout_x8_01[1] = 0;
          extraout_x8_01[2] = 0;
        }
        else {
          lVar13 = unaff_x20[4];
          func_0x00010aa37fc8(lVar13 + 0x270);
          uVar12 = *(undefined8 *)(*(long *)(unaff_x20[4] + 0x40) + 0xa80);
          FUN_10aa28640((undefined1 *)((long)register0x00000008 + -0x180),param_2);
          lVar10 = unaff_x20[7];
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x3f80000000000000;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
          *(long *)((long)register0x00000008 + -0x1b0) = *unaff_x22;
          *(int *)((long)register0x00000008 + -0x1a8) = (int)unaff_x22[1];
          *(undefined8 *)((long)register0x00000008 + -0x19c) = 0x3f80000000000000;
          *(undefined8 *)((long)register0x00000008 + -0x1a4) = 0;
          *(long *)((long)register0x00000008 + -0x194) = *unaff_x21;
          *(int *)((long)register0x00000008 + -0x18c) = (int)unaff_x21[1];
          unaff_x21 = *(long **)((long)register0x00000008 + -0x180);
          FUN_10aa2d148(uVar6,uVar7,(long)unaff_x20 + 0x19,lVar10 + 0xe0,
                        (undefined1 *)((long)register0x00000008 + -0x1c0),unaff_x21,lVar13 + 0x270,
                        uVar12);
          uVar6 = *(undefined8 *)(lVar13 + 0x2b0);
          extraout_x8_01[1] = *(undefined8 *)(lVar13 + 0x2b8);
          *extraout_x8_01 = uVar6;
          extraout_x8_01[2] = *(undefined8 *)(lVar13 + 0x2c0);
          *(undefined8 *)(lVar13 + 0x2c0) = 0;
          *(undefined8 *)(lVar13 + 0x2b8) = 0;
          *(undefined8 *)(lVar13 + 0x2b0) = 0;
          if (unaff_x21 != (long *)0x0) {
            (**(code **)(*unaff_x21 + 8))(unaff_x21);
          }
        }
        unaff_x20 = *(long **)((long)register0x00000008 + -0x178);
        if (unaff_x20 != (long *)0x0) {
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x158)) {
          auVar19._8_8_ = uVar7;
          auVar19._0_8_ = unaff_x20;
          return auVar19;
        }
LAB_10aa39aa4:
        ___stack_chk_fail();
        if (unaff_x21 != (long *)0x0) {
          (**(code **)(*unaff_x21 + 8))(unaff_x21);
        }
        if (*(long *)((long)register0x00000008 + -0x178) != 0) {
          __ZdlPv();
        }
        __Unwind_Resume(unaff_x20);
        auVar20._8_8_ = 0x12;
        auVar20._0_8_ = &UNK_10f68bcde;
        return auVar20;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x158))
      goto LAB_10aa39aa4;
      puVar14 = *(undefined1 **)((long)register0x00000008 + -0x100);
      pcVar15 = *(code **)((long)register0x00000008 + -0xf8);
      param_3 = *(long **)((long)register0x00000008 + -0x110);
      plVar11 = *(long **)((long)register0x00000008 + -0x108);
      param_4 = *(long **)((long)register0x00000008 + -0x120);
      param_5 = *(long **)((long)register0x00000008 + -0x118);
      unaff_x24 = *(long **)((long)register0x00000008 + -0x130);
      plVar4 = *(long **)((long)register0x00000008 + -0x128);
      unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x140);
      unaff_x25 = *(long *)((long)register0x00000008 + -0x138);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x150);
      unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x148);
      puVar9 = extraout_x8_01;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xb0);
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(long *)(puVar3 + -0x48) = unaff_x25;
    *(long **)(puVar3 + -0x40) = unaff_x24;
    *(long **)(puVar3 + -0x38) = plVar4;
    *(long **)(puVar3 + -0x30) = param_4;
    *(long **)(puVar3 + -0x28) = param_5;
    *(long **)(puVar3 + -0x20) = param_3;
    *(long **)(puVar3 + -0x18) = plVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar15;
    unaff_x29 = puVar3 + -0x10;
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar3 + -0x78) = 0;
    *(undefined8 *)(puVar3 + -0x70) = 0;
    *(undefined8 *)(puVar3 + -0x68) = 0;
    unaff_x23 = (long *)(ulong)*(byte *)(unaff_x20 + 3);
    plVar4 = *(long **)(unaff_x20[4] + 0x48);
    param_5 = unaff_x20 + 5;
    FUN_10aa38078();
    param_4 = unaff_x23;
    if (unaff_x23 == (long *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
    }
    else {
      unaff_x25 = unaff_x20[4];
      func_0x00010aa37fc8(unaff_x25 + 0x270);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x20[4] + 0x40) + 0xa80);
      lVar10 = unaff_x20[7];
      *(undefined8 *)(puVar3 + -0xa8) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      *(long *)(puVar3 + -0xa0) = *unaff_x22;
      *(int *)(puVar3 + -0x98) = (int)unaff_x22[1];
      *(undefined8 *)(puVar3 + -0x8c) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -0x94) = 0;
      *(long *)(puVar3 + -0x84) = *unaff_x21;
      *(int *)(puVar3 + -0x7c) = (int)unaff_x21[1];
      param_5 = (long *)((long)unaff_x20 + 0x19);
      FUN_10aa2d148(plVar4,unaff_x23,param_5,lVar10 + 0xe0,puVar3 + -0xb0,0,unaff_x25 + 0x270,uVar6)
      ;
      uVar6 = *(undefined8 *)(unaff_x25 + 0x2b0);
      puVar9[1] = *(undefined8 *)(unaff_x25 + 0x2b8);
      *puVar9 = uVar6;
      puVar9[2] = *(undefined8 *)(unaff_x25 + 0x2c0);
      *(undefined8 *)(unaff_x25 + 0x2c0) = 0;
      param_2 = 0;
      *(undefined8 *)(unaff_x25 + 0x2b8) = 0;
      *(undefined8 *)(unaff_x25 + 0x2b0) = 0;
      unaff_x24 = plVar4;
    }
    unaff_x19 = *(long **)(puVar3 + -0x78);
    if (unaff_x19 != (long *)0x0) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x58)) {
      auVar17._8_8_ = param_4;
      auVar17._0_8_ = unaff_x19;
      return auVar17;
    }
    ___stack_chk_fail();
    if (*(long *)(puVar3 + -0x78) != 0) {
      __ZdlPv();
    }
    unaff_x30 = FUN_10aa39694;
    param_3 = unaff_x19;
    __Unwind_Resume();
    param_1 = extraout_x8_00;
  } while( true );
}



/* Entry: 10aa398dc; end: 10aa39adf;  */

undefined1  [16]
FUN_10aa398dc(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar10;
  undefined8 unaff_x26;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *unaff_x29;
  code *pcVar13;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (0.0 < (float)param_2) break;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68))
    goto LAB_10aa39aa4;
    puVar12 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar13 = *(code **)((long)register0x00000008 + -8);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x20);
    plVar4 = *(long **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
    plVar8 = *(long **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(long **)((long)register0x00000008 + -0x40);
    plVar5 = *(long **)((long)register0x00000008 + -0x38);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x25 = *(long *)((long)register0x00000008 + -0x48);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar3 = (undefined1 *)register0x00000008;
    while( true ) {
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(long *)(puVar3 + -0x48) = unaff_x25;
      *(long **)(puVar3 + -0x40) = unaff_x24;
      *(long **)(puVar3 + -0x38) = plVar5;
      *(long **)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = plVar8;
      *(long **)(puVar3 + -0x20) = unaff_x19;
      *(long **)(puVar3 + -0x18) = plVar4;
      *(undefined1 **)(puVar3 + -0x10) = puVar12;
      *(code **)(puVar3 + -8) = pcVar13;
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)(puVar3 + -0x78) = 0;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(undefined8 *)(puVar3 + -0x68) = 0;
      unaff_x23 = (long *)(ulong)*(byte *)(param_3 + 3);
      plVar4 = *(long **)(param_3[4] + 0x48);
      plVar8 = param_3 + 5;
      FUN_10aa38078();
      unaff_x22 = unaff_x23;
      if (unaff_x23 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        unaff_x25 = param_3[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        uVar6 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
        lVar9 = param_3[7];
        *(undefined8 *)(puVar3 + -0xa8) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0xb0) = 0;
        *(long *)(puVar3 + -0xa0) = *param_4;
        *(int *)(puVar3 + -0x98) = (int)param_4[1];
        *(undefined8 *)(puVar3 + -0x8c) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x94) = 0;
        *(long *)(puVar3 + -0x84) = *param_5;
        *(int *)(puVar3 + -0x7c) = (int)param_5[1];
        plVar8 = (long *)((long)param_3 + 0x19);
        FUN_10aa2d148(plVar4,unaff_x23,plVar8,lVar9 + 0xe0,puVar3 + -0xb0,0,unaff_x25 + 0x270,uVar6)
        ;
        uVar6 = *(undefined8 *)(unaff_x25 + 0x2b0);
        param_1[1] = *(undefined8 *)(unaff_x25 + 0x2b8);
        *param_1 = uVar6;
        param_1[2] = *(undefined8 *)(unaff_x25 + 0x2c0);
        *(undefined8 *)(unaff_x25 + 0x2c0) = 0;
        param_2 = 0;
        *(undefined8 *)(unaff_x25 + 0x2b8) = 0;
        *(undefined8 *)(unaff_x25 + 0x2b0) = 0;
        unaff_x24 = plVar4;
      }
      plVar4 = *(long **)(puVar3 + -0x78);
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x58)) {
        auVar15._8_8_ = unaff_x22;
        auVar15._0_8_ = plVar4;
        return auVar15;
      }
      ___stack_chk_fail();
      if (*(long *)(puVar3 + -0x78) != 0) {
        __ZdlPv();
      }
      unaff_x19 = plVar4;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x1a0);
      *(undefined8 *)(puVar3 + -0x110) = unaff_d9;
      *(undefined8 *)(puVar3 + -0x108) = unaff_d8;
      *(undefined8 *)(puVar3 + -0x100) = unaff_x26;
      *(long *)(puVar3 + -0xf8) = unaff_x25;
      *(long **)(puVar3 + -0xf0) = unaff_x24;
      *(long **)(puVar3 + -0xe8) = unaff_x23;
      *(long **)(puVar3 + -0xe0) = param_4;
      *(long **)(puVar3 + -0xd8) = param_5;
      *(long **)(puVar3 + -0xd0) = param_3;
      *(long **)(puVar3 + -200) = plVar4;
      *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x10;
      *(code **)(puVar3 + -0xb8) = FUN_10aa39694;
      unaff_x29 = puVar3 + -0xc0;
      *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      unaff_x20 = unaff_x19;
      unaff_x21 = plVar8;
      uVar6 = param_2;
      if (0.0 < (float)param_2) break;
      param_4 = unaff_x22;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar3 + -0x118))
      goto LAB_10aa398a0;
      unaff_x24 = *(long **)(puVar3 + -0xf0);
      unaff_x26 = *(undefined8 *)(puVar3 + -0x100);
      unaff_x25 = *(long *)(puVar3 + -0xf8);
      unaff_d9 = *(undefined8 *)(puVar3 + -0x110);
      unaff_d8 = *(undefined8 *)(puVar3 + -0x108);
      *(undefined8 *)(puVar3 + -0x100) = unaff_x26;
      *(long *)(puVar3 + -0xf8) = unaff_x25;
      *(long **)(puVar3 + -0xf0) = unaff_x24;
      *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0xe8);
      *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0xe0);
      *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xd8);
      *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
      *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
      *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
      *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
      puVar12 = puVar3 + -0xc0;
      *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)(puVar3 + -0x128) = 0;
      *(undefined8 *)(puVar3 + -0x120) = 0;
      *(undefined8 *)(puVar3 + -0x118) = 0;
      plVar5 = (long *)(ulong)*(byte *)(unaff_x19 + 3);
      plVar4 = *(long **)(unaff_x19[4] + 0x48);
      param_5 = unaff_x19 + 5;
      FUN_10aa38078();
      if (plVar5 == (long *)0x0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
        param_4 = (long *)0x0;
      }
      else {
        unaff_x25 = unaff_x19[4];
        func_0x00010aa37fc8(unaff_x25 + 0x270);
        uVar6 = *(undefined8 *)(*(long *)(unaff_x19[4] + 0x40) + 0xa80);
        lVar9 = unaff_x19[7];
        param_2 = 0;
        *(undefined8 *)(puVar3 + -0x168) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x170) = 0;
        *(long *)(puVar3 + -0x160) = *unaff_x22;
        *(int *)(puVar3 + -0x158) = (int)unaff_x22[1];
        *(undefined8 *)(puVar3 + -0x14c) = 0x3f80000000000000;
        *(undefined8 *)(puVar3 + -0x154) = 0;
        *(long *)(puVar3 + -0x144) = *plVar8;
        *(int *)(puVar3 + -0x13c) = (int)plVar8[1];
        *(undefined8 *)(puVar3 + -0x180) = uVar6;
        param_4 = plVar4;
        param_5 = plVar5;
        FUN_10aa2c0f0(puVar3 + -0x138,plVar4,plVar5,(long)unaff_x19 + 0x19,lVar9 + 0xe0,
                      puVar3 + -0x170,0,unaff_x25 + 0x270);
        unaff_x24 = plVar4;
        if (*(long *)(puVar3 + -0x138) == 0) {
          *(undefined1 *)extraout_x8_00 = 0;
          unaff_x19 = *(long **)(puVar3 + -0x130);
          *(undefined1 *)(extraout_x8_00 + 2) = 0;
          if (unaff_x19 != (long *)0x0) {
            plVar4 = unaff_x19 + 1;
            do {
              lVar9 = *plVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
            }
          }
        }
        else {
          lVar9 = *(long *)(puVar3 + -0x130);
          *extraout_x8_00 = *(long *)(puVar3 + -0x138);
          extraout_x8_00[1] = lVar9;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
        }
      }
      plVar4 = *(long **)(puVar3 + -0x128);
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x108)) {
        auVar14._8_8_ = param_4;
        auVar14._0_8_ = plVar4;
        return auVar14;
      }
      ___stack_chk_fail();
      if (*(long *)(puVar3 + -0x128) != 0) {
        __ZdlPv();
      }
      pcVar13 = FUN_10aa39530;
      param_3 = plVar4;
      __Unwind_Resume();
      puVar3 = puVar3 + -0x180;
      param_1 = extraout_x8;
    }
    *(undefined8 *)(puVar3 + -0x138) = 0;
    *(undefined8 *)(puVar3 + -0x130) = 0;
    *(undefined8 *)(puVar3 + -0x128) = 0;
    unaff_x23 = (long *)(ulong)*(byte *)(unaff_x19 + 3);
    plVar5 = *(long **)(unaff_x19[4] + 0x48);
    plVar4 = unaff_x19 + 5;
    FUN_10aa38078();
    if (unaff_x23 == (long *)0x0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x25 = unaff_x19[4];
      func_0x00010aa37fc8(unaff_x25 + 0x270);
      unaff_x26 = *(undefined8 *)(*(long *)(unaff_x19[4] + 0x40) + 0xa80);
      FUN_10aa28640(puVar3 + -0x140,param_2);
      lVar9 = unaff_x19[7];
      uVar6 = 0;
      *(undefined8 *)(puVar3 + -0x188) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -400) = 0;
      *(long *)(puVar3 + -0x180) = *unaff_x22;
      *(int *)(puVar3 + -0x178) = (int)unaff_x22[1];
      *(undefined8 *)(puVar3 + -0x16c) = 0x3f80000000000000;
      *(undefined8 *)(puVar3 + -0x174) = 0;
      *(long *)(puVar3 + -0x164) = *plVar8;
      *(int *)(puVar3 + -0x15c) = (int)plVar8[1];
      unaff_x21 = *(long **)(puVar3 + -0x140);
      *(undefined8 *)(puVar3 + -0x1a0) = unaff_x26;
      param_4 = plVar5;
      plVar4 = unaff_x23;
      FUN_10aa2c0f0(puVar3 + -0x150,plVar5,unaff_x23,(long)unaff_x19 + 0x19,lVar9 + 0xe0,
                    puVar3 + -400,unaff_x21,unaff_x25 + 0x270);
      if (*(long *)(puVar3 + -0x150) == 0) {
        *(undefined1 *)extraout_x8_00 = 0;
        unaff_x19 = *(long **)(puVar3 + -0x148);
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
        if (unaff_x19 != (long *)0x0) {
          plVar8 = unaff_x19 + 1;
          do {
            lVar9 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
          }
        }
      }
      else {
        lVar9 = *(long *)(puVar3 + -0x148);
        *extraout_x8_00 = *(long *)(puVar3 + -0x150);
        extraout_x8_00[1] = lVar9;
        *(undefined1 *)(extraout_x8_00 + 2) = 1;
      }
      unaff_x20 = unaff_x19;
      unaff_x24 = plVar5;
      if (*(long **)(puVar3 + -0x140) != (long *)0x0) {
        (**(code **)(**(long **)(puVar3 + -0x140) + 8))();
      }
    }
    unaff_x19 = *(long **)(puVar3 + -0x138);
    if (unaff_x19 != (long *)0x0) {
      __ZdlPv();
    }
    plVar8 = plVar4;
    unaff_d8 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x118)) {
      auVar16._8_8_ = param_4;
      auVar16._0_8_ = unaff_x19;
      return auVar16;
    }
LAB_10aa398a0:
    ___stack_chk_fail();
    param_5 = plVar8;
    param_2 = uVar6;
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 8))(unaff_x21);
      param_5 = plVar8;
      param_2 = uVar6;
    }
    if (*(long *)(puVar3 + -0x138) != 0) {
      __ZdlPv();
    }
    unaff_x30 = FUN_10aa398dc;
    param_3 = unaff_x19;
    __Unwind_Resume();
    param_1 = extraout_x8_01;
  }
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  uVar7 = (ulong)*(byte *)(param_3 + 3);
  uVar6 = *(undefined8 *)(param_3[4] + 0x48);
  FUN_10aa38078(uVar6,uVar7,param_3 + 5,(undefined1 *)((long)register0x00000008 + -0x70),
                (undefined1 *)((long)register0x00000008 + -0x88));
  if (uVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar11 = param_3[4];
    func_0x00010aa37fc8(lVar11 + 0x270);
    uVar10 = *(undefined8 *)(*(long *)(param_3[4] + 0x40) + 0xa80);
    FUN_10aa28640((undefined1 *)((long)register0x00000008 + -0x90),param_2);
    lVar9 = param_3[7];
    *(undefined8 *)((long)register0x00000008 + -200) = 0x3f80000000000000;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(long *)((long)register0x00000008 + -0xc0) = *param_4;
    *(int *)((long)register0x00000008 + -0xb8) = (int)param_4[1];
    *(undefined8 *)((long)register0x00000008 + -0xac) = 0x3f80000000000000;
    *(undefined8 *)((long)register0x00000008 + -0xb4) = 0;
    *(long *)((long)register0x00000008 + -0xa4) = *param_5;
    *(int *)((long)register0x00000008 + -0x9c) = (int)param_5[1];
    param_5 = *(long **)((long)register0x00000008 + -0x90);
    FUN_10aa2d148(uVar6,uVar7,(long)param_3 + 0x19,lVar9 + 0xe0,
                  (undefined1 *)((long)register0x00000008 + -0xd0),param_5,lVar11 + 0x270,uVar10);
    uVar6 = *(undefined8 *)(lVar11 + 0x2b0);
    param_1[1] = *(undefined8 *)(lVar11 + 0x2b8);
    *param_1 = uVar6;
    param_1[2] = *(undefined8 *)(lVar11 + 0x2c0);
    *(undefined8 *)(lVar11 + 0x2c0) = 0;
    *(undefined8 *)(lVar11 + 0x2b8) = 0;
    *(undefined8 *)(lVar11 + 0x2b0) = 0;
    if (param_5 != (long *)0x0) {
      (**(code **)(*param_5 + 8))(param_5);
    }
  }
  param_3 = *(long **)((long)register0x00000008 + -0x88);
  if (param_3 != (long *)0x0) {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    auVar17._8_8_ = uVar7;
    auVar17._0_8_ = param_3;
    return auVar17;
  }
LAB_10aa39aa4:
  ___stack_chk_fail();
  if (param_5 != (long *)0x0) {
    (**(code **)(*param_5 + 8))(param_5);
  }
  if (*(long *)((long)register0x00000008 + -0x88) != 0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_3);
  auVar18._8_8_ = 0x12;
  auVar18._0_8_ = &UNK_10f68bcde;
  return auVar18;
}



/* Entry: 10aa39ae0; end: 10aa39b6b;  */

undefined1  [16] FUN_10aa39ae0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f68bcde;
  return auVar1;
}



/* Entry: 10aa39b6c; end: 10aa39ee3;  */

void FUN_10aa39b6c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68bcde,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b280;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b280;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b652,FUN_10aa6df88,FUN_10aa6e044);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3e1a8f,FUN_10aa6e1c4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"t",FUN_10aa6e280,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f20c,FUN_10aa6e33c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"normal",FUN_10aa6e410,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68a7ff,FUN_10aa6e4e4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68b660,FUN_10aa6e59c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68bcde,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa39ec8);
  (*pcVar6)();
}



/* Entry: 10aa39ee4; end: 10aa39f5f;  */

undefined8 * FUN_10aa39ee4(undefined8 *param_1)

{
  FUN_10a40bb4c(param_1 + 10);
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}


