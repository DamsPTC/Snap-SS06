/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b02ce4; end: 109b02d37;  */

long * FUN_109b02ce4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b02d38; end: 109b02ddf;  */

undefined8 * FUN_109b02d38(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24d58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b02de0; end: 109b02e87;  */

void FUN_109b02de0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24d58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b02e88; end: 109b02f7f;  */

void FUN_109b02e88(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *(uint *)(param_1 + 8);
  pfVar6 = *(float **)(param_1 + 0x20);
  uVar2 = param_5 * param_4;
  if ((int)uVar2 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar11 = (undefined8 *)(param_2 + (long)(int)param_5 * 4);
    do {
      fVar14 = *pfVar6;
      puVar4 = (undefined8 *)(param_2 + uVar7 * 4);
      uVar17 = puVar4[1];
      uVar16 = *puVar4;
      fVar13 = (float)uVar16 * fVar14;
      fVar15 = (float)((ulong)uVar16 >> 0x20) * fVar14;
      uVar16 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar14,(float)uVar17 * fVar14);
      puVar4 = puVar11;
      lVar5 = (ulong)uVar1 - 1;
      pfVar8 = pfVar6;
      if (1 < (int)uVar1) {
        do {
          fVar14 = pfVar8[1];
          fVar13 = fVar13 + (float)*puVar4 * fVar14;
          fVar15 = fVar15 + (float)((ulong)*puVar4 >> 0x20) * fVar14;
          uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                            (float)((ulong)puVar4[1] >> 0x20) * fVar14,
                            (float)uVar16 + (float)puVar4[1] * fVar14);
          lVar5 = lVar5 + -1;
          puVar4 = (undefined8 *)
                   ((long)puVar4 +
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
          pfVar8 = pfVar8 + 1;
        } while (lVar5 != 0);
      }
      puVar4 = (undefined8 *)(param_3 + uVar7 * 4);
      puVar4[1] = uVar16;
      *puVar4 = CONCAT44(fVar15,fVar13);
      uVar7 = uVar7 + 4;
      puVar11 = puVar11 + 2;
    } while (uVar7 <= uVar2 - 4);
  }
  if ((int)uVar7 < (int)uVar2) {
    uVar9 = uVar7 & 0xffffffff;
    uVar10 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    pfVar8 = (float *)(param_2 + uVar10 + (uVar7 & 0xffffffff) * 4);
    do {
      fVar14 = *pfVar6 * *(float *)(param_2 + uVar9 * 4);
      lVar5 = (ulong)uVar1 - 1;
      pfVar12 = pfVar8;
      pfVar3 = pfVar6;
      if (1 < (int)uVar1) {
        do {
          fVar14 = fVar14 + *pfVar12 * pfVar3[1];
          lVar5 = lVar5 + -1;
          pfVar12 = (float *)((long)pfVar12 + uVar10);
          pfVar3 = pfVar3 + 1;
        } while (lVar5 != 0);
      }
      *(float *)(param_3 + uVar9 * 4) = fVar14;
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar9 != uVar2);
  }
  return;
}



/* Entry: 109b02f80; end: 109b02fbb;  */

void FUN_109b02f80(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b02fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b02fbc; end: 109b0300f;  */

long * FUN_109b02fbc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b03010; end: 109b030b7;  */

undefined8 * FUN_109b03010(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24dd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b030b8; end: 109b0315f;  */

void FUN_109b030b8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24dd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b03160; end: 109b03283;  */

void FUN_109b03160(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  
  uVar2 = *(uint *)(param_1 + 8);
  pdVar6 = *(double **)(param_1 + 0x20);
  uVar3 = param_5 * param_4;
  if ((int)uVar3 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar11 = (undefined8 *)(param_2 + (long)(int)param_5 * 4 + 8);
    do {
      puVar13 = (undefined8 *)(param_2 + uVar7 * 4);
      dVar17 = *pdVar6;
      uVar14 = *puVar13;
      uVar19 = puVar13[1];
      dVar15 = (double)(float)uVar14 * dVar17;
      dVar16 = (double)(float)((ulong)uVar14 >> 0x20) * dVar17;
      dVar18 = (double)(float)uVar19 * dVar17;
      dVar17 = (double)(float)((ulong)uVar19 >> 0x20) * dVar17;
      lVar5 = (ulong)uVar2 - 1;
      puVar13 = puVar11;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar4 = pdVar1[1];
          dVar15 = dVar15 + (double)(float)puVar13[-1] * dVar4;
          dVar16 = dVar16 + (double)(float)((ulong)puVar13[-1] >> 0x20) * dVar4;
          dVar18 = dVar18 + (double)(float)*puVar13 * dVar4;
          dVar17 = dVar17 + (double)(float)((ulong)*puVar13 >> 0x20) * dVar4;
          lVar5 = lVar5 + -1;
          puVar13 = (undefined8 *)
                    ((long)puVar13 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      pdVar1 = (double *)(param_3 + uVar7 * 8);
      pdVar1[1] = dVar16;
      *pdVar1 = dVar15;
      pdVar1[3] = dVar17;
      pdVar1[2] = dVar18;
      uVar7 = uVar7 + 4;
      puVar11 = puVar11 + 2;
    } while (uVar7 <= uVar3 - 4);
  }
  if ((int)uVar7 < (int)uVar3) {
    uVar9 = uVar7 & 0xffffffff;
    uVar10 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    pfVar8 = (float *)(param_2 + uVar10 + (uVar7 & 0xffffffff) * 4);
    do {
      dVar15 = *pdVar6 * (double)*(float *)(param_2 + uVar9 * 4);
      lVar5 = (ulong)uVar2 - 1;
      pfVar12 = pfVar8;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar15 = dVar15 + (double)*pfVar12 * pdVar1[1];
          lVar5 = lVar5 + -1;
          pfVar12 = (float *)((long)pfVar12 + uVar10);
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      *(double *)(param_3 + uVar9 * 8) = dVar15;
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar9 != uVar3);
  }
  return;
}



/* Entry: 109b03284; end: 109b032bf;  */

void FUN_109b03284(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b032bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b032c0; end: 109b03313;  */

long * FUN_109b032c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b03314; end: 109b033bb;  */

undefined8 * FUN_109b03314(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24e58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b033bc; end: 109b03463;  */

void FUN_109b033bc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24e58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b03464; end: 109b0356b;  */

void FUN_109b03464(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar2 = *(uint *)(param_1 + 8);
  pdVar6 = *(double **)(param_1 + 0x20);
  uVar3 = param_5 * param_4;
  if ((int)uVar3 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pdVar8 = (double *)(param_2 + (long)(int)param_5 * 8 + 0x10);
    do {
      pdVar1 = (double *)(param_2 + uVar7 * 8);
      dVar14 = *pdVar6;
      dVar12 = *pdVar1 * dVar14;
      dVar13 = pdVar1[1] * dVar14;
      dVar15 = pdVar1[2] * dVar14;
      dVar14 = pdVar1[3] * dVar14;
      lVar5 = (ulong)uVar2 - 1;
      pdVar11 = pdVar8;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar4 = pdVar1[1];
          dVar12 = dVar12 + pdVar11[-2] * dVar4;
          dVar13 = dVar13 + pdVar11[-1] * dVar4;
          dVar15 = dVar15 + *pdVar11 * dVar4;
          dVar14 = dVar14 + pdVar11[1] * dVar4;
          lVar5 = lVar5 + -1;
          pdVar11 = (double *)
                    ((long)pdVar11 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3));
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      pdVar1 = (double *)(param_3 + uVar7 * 8);
      pdVar1[1] = dVar13;
      *pdVar1 = dVar12;
      pdVar1[3] = dVar14;
      pdVar1[2] = dVar15;
      uVar7 = uVar7 + 4;
      pdVar8 = pdVar8 + 4;
    } while (uVar7 <= uVar3 - 4);
  }
  if ((int)uVar7 < (int)uVar3) {
    uVar9 = uVar7 & 0xffffffff;
    uVar10 = -(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3;
    pdVar8 = (double *)(param_2 + uVar10 + (uVar7 & 0xffffffff) * 8);
    do {
      dVar12 = *pdVar6 * *(double *)(param_2 + uVar9 * 8);
      lVar5 = (ulong)uVar2 - 1;
      pdVar11 = pdVar8;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar12 = dVar12 + *pdVar11 * pdVar1[1];
          lVar5 = lVar5 + -1;
          pdVar11 = (double *)((long)pdVar11 + uVar10);
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      *(double *)(param_3 + uVar9 * 8) = dVar12;
      uVar9 = uVar9 + 1;
      pdVar8 = pdVar8 + 1;
    } while (uVar9 != uVar3);
  }
  return;
}



/* Entry: 109b0356c; end: 109b035a7;  */

void FUN_109b0356c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b035a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b035a8; end: 109b035fb;  */

long * FUN_109b035a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b035fc; end: 109b036a3;  */

undefined8 * FUN_109b035fc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24ed8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b036a4; end: 109b0374b;  */

void FUN_109b036a4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24ed8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b0374c; end: 109b0388b;  */

void FUN_109b0374c(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auVar8 [16];
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_5 != 0) {
    piVar10 = *(int **)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x7c);
    uVar2 = *(uint *)(param_1 + 0x70);
    iVar3 = *(int *)(param_1 + 0x74);
    uVar5 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar6 = (undefined8 *)(*param_2 + uVar11 * 4);
          uVar19 = puVar6[1];
          uVar18 = *puVar6;
          iVar17 = *piVar10;
          iVar12 = iVar4 + (int)uVar18 * iVar17;
          iVar15 = iVar4 + (int)((ulong)uVar18 >> 0x20) * iVar17;
          iVar16 = iVar4 + (int)uVar19 * iVar17;
          iVar17 = iVar4 + (int)((ulong)uVar19 >> 0x20) * iVar17;
          if (1 < (int)uVar5) {
            uVar9 = 1;
            do {
              puVar6 = (undefined8 *)(param_2[uVar9] + uVar11 * 4);
              uVar19 = puVar6[1];
              uVar18 = *puVar6;
              iVar7 = piVar10[uVar9];
              iVar12 = iVar12 + (int)uVar18 * iVar7;
              iVar15 = iVar15 + (int)((ulong)uVar18 >> 0x20) * iVar7;
              iVar16 = iVar16 + (int)uVar19 * iVar7;
              iVar17 = iVar17 + (int)((ulong)uVar19 >> 0x20) * iVar7;
              uVar9 = uVar9 + 1;
            } while (uVar5 != uVar9);
          }
          auVar13._0_4_ = iVar12 + iVar3;
          auVar13._4_4_ = iVar15 + iVar3;
          auVar13._8_4_ = iVar16 + iVar3;
          auVar13._12_4_ = iVar17 + iVar3;
          auVar14._4_4_ = -uVar2;
          auVar14._0_4_ = -uVar2;
          auVar14._8_4_ = -uVar2;
          auVar14._12_4_ = -uVar2;
          auVar14 = NEON_sshl(auVar13,auVar14,4);
          auVar14 = NEON_smax(auVar14,ZEXT216(0),4);
          auVar8._8_8_ = 0xff000000ff;
          auVar8._0_8_ = 0xff000000ff;
          auVar14 = NEON_smin(auVar14,auVar8,4);
          *(uint *)(param_3 + uVar11) =
               CONCAT13(auVar14[0xc],CONCAT12(auVar14[8],CONCAT11(auVar14[4],auVar14[0])));
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        do {
          iVar17 = iVar4 + *(int *)(*param_2 + uVar11 * 4) * *piVar10;
          if (1 < (int)uVar5) {
            uVar9 = 1;
            do {
              iVar17 = iVar17 + *(int *)(param_2[uVar9] + uVar11 * 4) * piVar10[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar5 != uVar9);
          }
          uVar1 = iVar17 + iVar3 >> (uVar2 & 0x1f);
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar1) {
            uVar1 = 0xff;
          }
          *(char *)(param_3 + uVar11) = (char)uVar1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0388c; end: 109b038c7;  */

void FUN_109b0388c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b038c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b038c8; end: 109b03b63;  */

undefined8 *
FUN_109b038c8(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b24f60;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b03a58;
  }
  if (puVar8 == param_3) goto LAB_109b03a58;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b03a00:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b03a34;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b03a00;
LAB_109b03a34:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b03a58:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  *(float *)((long)param_2 + 0x74) = (float)param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 5) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b03b20);
  (*pcVar5)();
}



/* Entry: 109b03b64; end: 109b03c0b;  */

undefined8 * FUN_109b03b64(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24f60;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b03c0c; end: 109b03cb3;  */

void FUN_109b03c0c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24f60;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b03cb4; end: 109b03e13;  */

void FUN_109b03cb4(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_5 != 0) {
    pfVar4 = *(float **)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x74);
    uVar2 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          fVar13 = *pfVar4;
          puVar3 = (undefined8 *)(*param_2 + uVar5 * 4);
          uVar16 = puVar3[1];
          uVar15 = *puVar3;
          fVar8 = fVar7 + (float)uVar15 * fVar13;
          fVar11 = fVar7 + (float)((ulong)uVar15 >> 0x20) * fVar13;
          fVar12 = fVar7 + (float)uVar16 * fVar13;
          fVar13 = fVar7 + (float)((ulong)uVar16 >> 0x20) * fVar13;
          if (1 < (int)uVar2) {
            uVar6 = 1;
            do {
              fVar14 = pfVar4[uVar6];
              puVar3 = (undefined8 *)(param_2[uVar6] + uVar5 * 4);
              uVar16 = puVar3[1];
              uVar15 = *puVar3;
              fVar8 = fVar8 + (float)uVar15 * fVar14;
              fVar11 = fVar11 + (float)((ulong)uVar15 >> 0x20) * fVar14;
              fVar12 = fVar12 + (float)uVar16 * fVar14;
              fVar13 = fVar13 + (float)((ulong)uVar16 >> 0x20) * fVar14;
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
          }
          auVar9._4_4_ = (int)(long)(float)(int)fVar11;
          auVar9._0_4_ = (int)(long)(float)(int)fVar8;
          auVar9._8_4_ = (int)(long)(float)(int)fVar12;
          auVar9._12_4_ = (int)(long)(float)(int)fVar13;
          auVar9 = NEON_smax(auVar9,ZEXT216(0),4);
          auVar10._8_8_ = 0xff000000ff;
          auVar10._0_8_ = 0xff000000ff;
          auVar10 = NEON_smin(auVar9,auVar10,4);
          *(uint *)(param_3 + uVar5) =
               CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
          uVar5 = uVar5 + 4;
        } while ((long)uVar5 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar5 < (int)param_6) {
        do {
          fVar8 = fVar7 + *(float *)(*param_2 + uVar5 * 4) * *pfVar4;
          if (1 < (int)uVar2) {
            uVar6 = 1;
            do {
              fVar8 = fVar8 + *(float *)(param_2[uVar6] + uVar5 * 4) * pfVar4[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
          }
          uVar1 = (uint)(long)(float)(int)fVar8 &
                  ((int)(uint)(long)(float)(int)fVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar1) {
            uVar1 = 0xff;
          }
          *(char *)(param_3 + uVar5) = (char)uVar1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b03e14; end: 109b03e4f;  */

void FUN_109b03e14(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b03e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b03e50; end: 109b040e7;  */

undefined8 *
FUN_109b03e50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b24fe8;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b03fe0;
  }
  if (puVar8 == param_3) goto LAB_109b03fe0;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b03f88:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b03fbc;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b03f88;
LAB_109b03fbc:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b03fe0:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  param_2[0xf] = param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 6) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b040a4);
  (*pcVar5)();
}



/* Entry: 109b040e8; end: 109b0418f;  */

undefined8 * FUN_109b040e8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24fe8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b04190; end: 109b04237;  */

void FUN_109b04190(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24fe8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b04238; end: 109b043ab;  */

void FUN_109b04238(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (param_5 != 0) {
    pdVar4 = *(double **)(param_1 + 0x20);
    dVar7 = *(double *)(param_1 + 0x78);
    uVar3 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          dVar12 = *pdVar4;
          pdVar1 = (double *)(*param_2 + uVar5 * 8);
          dVar11 = dVar7 + *pdVar1 * dVar12;
          dVar8 = dVar7 + pdVar1[1] * dVar12;
          dVar13 = dVar7 + pdVar1[2] * dVar12;
          dVar12 = dVar7 + pdVar1[3] * dVar12;
          if (1 < (int)uVar3) {
            lVar6 = 8;
            do {
              pdVar1 = (double *)(*(long *)((long)param_2 + lVar6) + uVar5 * 8);
              dVar14 = *(double *)((long)pdVar4 + lVar6);
              dVar11 = dVar11 + *pdVar1 * dVar14;
              dVar8 = dVar8 + pdVar1[1] * dVar14;
              dVar13 = dVar13 + pdVar1[2] * dVar14;
              dVar12 = dVar12 + pdVar1[3] * dVar14;
              lVar6 = lVar6 + 8;
            } while ((ulong)uVar3 * 8 - lVar6 != 0);
          }
          auVar9._4_4_ = (int)(long)(double)(long)dVar8;
          auVar9._0_4_ = (int)(long)(double)(long)dVar11;
          auVar9._8_4_ = (int)(long)(double)(long)dVar13;
          auVar9._12_4_ = (int)(long)(double)(long)dVar12;
          auVar9 = NEON_smax(auVar9,ZEXT216(0),4);
          auVar10._8_8_ = 0xff000000ff;
          auVar10._0_8_ = 0xff000000ff;
          auVar10 = NEON_smin(auVar9,auVar10,4);
          *(uint *)(param_3 + uVar5) =
               CONCAT13(auVar10[0xc],CONCAT12(auVar10[8],CONCAT11(auVar10[4],auVar10[0])));
          uVar5 = uVar5 + 4;
        } while ((long)uVar5 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar5 < (int)param_6) {
        do {
          dVar8 = dVar7 + *(double *)(*param_2 + uVar5 * 8) * *pdVar4;
          if (1 < (int)uVar3) {
            lVar6 = 8;
            do {
              dVar8 = dVar8 + *(double *)(*(long *)((long)param_2 + lVar6) + uVar5 * 8) *
                              *(double *)((long)pdVar4 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((ulong)uVar3 * 8 - lVar6 != 0);
          }
          uVar2 = (uint)(long)(double)(long)dVar8 &
                  ((int)(uint)(long)(double)(long)dVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          *(char *)(param_3 + uVar5) = (char)uVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b043ac; end: 109b043e7;  */

void FUN_109b043ac(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b043e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b043e8; end: 109b04683;  */

undefined8 *
FUN_109b043e8(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b25070;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b04578;
  }
  if (puVar8 == param_3) goto LAB_109b04578;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b04520:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b04554;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b04520;
LAB_109b04554:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b04578:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  *(float *)((long)param_2 + 0x74) = (float)param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 5) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b04640);
  (*pcVar5)();
}



/* Entry: 109b04684; end: 109b0472b;  */

undefined8 * FUN_109b04684(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25070;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b0472c; end: 109b047d3;  */

void FUN_109b0472c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25070;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b047d4; end: 109b04923;  */

void FUN_109b047d4(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_5 != 0) {
    pfVar5 = *(float **)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x74);
    uVar2 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar7 = *param_2;
        fVar10 = *pfVar5;
        do {
          puVar3 = (undefined8 *)(lVar7 + uVar6 * 4);
          uVar17 = puVar3[1];
          uVar16 = *puVar3;
          fVar11 = fVar9 + (float)uVar16 * fVar10;
          fVar12 = fVar9 + (float)((ulong)uVar16 >> 0x20) * fVar10;
          fVar13 = fVar9 + (float)uVar17 * fVar10;
          fVar14 = fVar9 + (float)((ulong)uVar17 >> 0x20) * fVar10;
          if (1 < (int)uVar2) {
            uVar8 = 1;
            do {
              fVar15 = pfVar5[uVar8];
              puVar3 = (undefined8 *)(param_2[uVar8] + uVar6 * 4);
              uVar17 = puVar3[1];
              uVar16 = *puVar3;
              fVar11 = fVar11 + (float)uVar16 * fVar15;
              fVar12 = fVar12 + (float)((ulong)uVar16 >> 0x20) * fVar15;
              fVar13 = fVar13 + (float)uVar17 * fVar15;
              fVar14 = fVar14 + (float)((ulong)uVar17 >> 0x20) * fVar15;
              uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
          }
          auVar4._4_4_ = (int)(long)(float)(int)fVar12;
          auVar4._0_4_ = (int)(long)(float)(int)fVar11;
          auVar4._8_4_ = (int)(long)(float)(int)fVar13;
          auVar4._12_4_ = (int)(long)(float)(int)fVar14;
          uVar16 = NEON_sqxtun(CONCAT44((int)(long)(float)(int)fVar12,(int)(long)(float)(int)fVar11)
                               ,auVar4,4);
          *(undefined8 *)(param_3 + uVar6 * 2) = uVar16;
          uVar6 = uVar6 + 4;
        } while ((long)uVar6 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar6 < (int)param_6) {
        fVar10 = *pfVar5;
        lVar7 = *param_2;
        do {
          fVar11 = fVar9 + *(float *)(lVar7 + uVar6 * 4) * fVar10;
          if (1 < (int)uVar2) {
            uVar8 = 1;
            do {
              fVar11 = fVar11 + *(float *)(param_2[uVar8] + uVar6 * 4) * pfVar5[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar2 != uVar8);
          }
          uVar1 = (uint)(long)(float)(int)fVar11 &
                  ((int)(uint)(long)(float)(int)fVar11 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          *(short *)(param_3 + uVar6 * 2) = (short)uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b04924; end: 109b0495f;  */

void FUN_109b04924(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0495c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b04960; end: 109b04bf7;  */

undefined8 *
FUN_109b04960(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b250f8;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b04af0;
  }
  if (puVar8 == param_3) goto LAB_109b04af0;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b04a98:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b04acc;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b04a98;
LAB_109b04acc:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b04af0:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  param_2[0xf] = param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 6) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b04bb4);
  (*pcVar5)();
}



/* Entry: 109b04bf8; end: 109b04c9f;  */

undefined8 * FUN_109b04bf8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b250f8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b04ca0; end: 109b04d47;  */

void FUN_109b04ca0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b250f8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b04d48; end: 109b04ea3;  */

void FUN_109b04d48(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  double dVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (param_5 != 0) {
    pdVar7 = *(double **)(param_1 + 0x20);
    dVar11 = *(double *)(param_1 + 0x78);
    uVar3 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        dVar12 = *pdVar7;
        lVar9 = *param_2;
        do {
          pdVar1 = (double *)(lVar9 + uVar8 * 8);
          dVar14 = dVar11 + *pdVar1 * dVar12;
          dVar6 = dVar11 + pdVar1[1] * dVar12;
          dVar15 = dVar11 + pdVar1[2] * dVar12;
          dVar13 = dVar11 + pdVar1[3] * dVar12;
          if (1 < (int)uVar3) {
            lVar10 = 8;
            do {
              pdVar1 = (double *)(*(long *)((long)param_2 + lVar10) + uVar8 * 8);
              dVar16 = *(double *)((long)pdVar7 + lVar10);
              dVar14 = dVar14 + *pdVar1 * dVar16;
              dVar6 = dVar6 + pdVar1[1] * dVar16;
              dVar15 = dVar15 + pdVar1[2] * dVar16;
              dVar13 = dVar13 + pdVar1[3] * dVar16;
              lVar10 = lVar10 + 8;
            } while ((ulong)uVar3 * 8 - lVar10 != 0);
          }
          auVar4._4_4_ = (int)(long)(double)(long)dVar6;
          auVar4._0_4_ = (int)(long)(double)(long)dVar14;
          auVar4._8_4_ = (int)(long)(double)(long)dVar15;
          auVar4._12_4_ = (int)(long)(double)(long)dVar13;
          uVar5 = NEON_sqxtun(CONCAT44((int)(long)(double)(long)dVar6,
                                       (int)(long)(double)(long)dVar14),auVar4,4);
          *(undefined8 *)(param_3 + uVar8 * 2) = uVar5;
          uVar8 = uVar8 + 4;
        } while ((long)uVar8 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar8 < (int)param_6) {
        dVar12 = *pdVar7;
        lVar9 = *param_2;
        do {
          dVar6 = dVar11 + *(double *)(lVar9 + uVar8 * 8) * dVar12;
          if (1 < (int)uVar3) {
            lVar10 = 8;
            do {
              dVar6 = dVar6 + *(double *)(*(long *)((long)param_2 + lVar10) + uVar8 * 8) *
                              *(double *)((long)pdVar7 + lVar10);
              lVar10 = lVar10 + 8;
            } while ((ulong)uVar3 * 8 - lVar10 != 0);
          }
          uVar2 = (uint)(long)(double)(long)dVar6 &
                  ((int)(uint)(long)(double)(long)dVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar2) {
            uVar2 = 0xffff;
          }
          *(short *)(param_3 + uVar8 * 2) = (short)uVar2;
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b04ea4; end: 109b04f4b;  */

undefined8 * FUN_109b04ea4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b250f8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b04f4c; end: 109b04f53;  */

void FUN_109b04f4c(void)

{
  return;
}



/* Entry: 109b04f54; end: 109b04f8f;  */

void FUN_109b04f54(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b04f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b04f90; end: 109b04fe3;  */

long * FUN_109b04f90(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b04fe4; end: 109b0508b;  */

undefined8 * FUN_109b04fe4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25180;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b0508c; end: 109b05133;  */

void FUN_109b0508c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25180;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b05134; end: 109b0528b;  */

void FUN_109b05134(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_5 != 0) {
    pfVar4 = *(float **)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x74);
    uVar1 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar7 = *param_2;
        fVar10 = *pfVar4;
        do {
          puVar2 = (undefined8 *)(lVar7 + uVar6 * 4);
          uVar17 = puVar2[1];
          uVar16 = *puVar2;
          fVar11 = fVar9 + (float)uVar16 * fVar10;
          fVar12 = fVar9 + (float)((ulong)uVar16 >> 0x20) * fVar10;
          fVar13 = fVar9 + (float)uVar17 * fVar10;
          fVar14 = fVar9 + (float)((ulong)uVar17 >> 0x20) * fVar10;
          if (1 < (int)uVar1) {
            uVar8 = 1;
            do {
              fVar15 = pfVar4[uVar8];
              puVar2 = (undefined8 *)(param_2[uVar8] + uVar6 * 4);
              uVar17 = puVar2[1];
              uVar16 = *puVar2;
              fVar11 = fVar11 + (float)uVar16 * fVar15;
              fVar12 = fVar12 + (float)((ulong)uVar16 >> 0x20) * fVar15;
              fVar13 = fVar13 + (float)uVar17 * fVar15;
              fVar14 = fVar14 + (float)((ulong)uVar17 >> 0x20) * fVar15;
              uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
          }
          auVar3._4_4_ = (int)(long)(float)(int)fVar12;
          auVar3._0_4_ = (int)(long)(float)(int)fVar11;
          auVar3._8_4_ = (int)(long)(float)(int)fVar13;
          auVar3._12_4_ = (int)(long)(float)(int)fVar14;
          uVar16 = NEON_sqxtn(CONCAT44((int)(long)(float)(int)fVar12,(int)(long)(float)(int)fVar11),
                              auVar3,4);
          *(undefined8 *)(param_3 + uVar6 * 2) = uVar16;
          uVar6 = uVar6 + 4;
        } while ((long)uVar6 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar6 < (int)param_6) {
        fVar10 = *pfVar4;
        lVar7 = *param_2;
        do {
          fVar11 = fVar9 + *(float *)(lVar7 + uVar6 * 4) * fVar10;
          if (1 < (int)uVar1) {
            uVar8 = 1;
            do {
              fVar11 = fVar11 + *(float *)(param_2[uVar8] + uVar6 * 4) * pfVar4[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
          }
          iVar5 = (int)(long)(float)(int)fVar11;
          if (iVar5 < -0x7fff) {
            iVar5 = -0x8000;
          }
          if (0x7ffe < iVar5) {
            iVar5 = 0x7fff;
          }
          *(short *)(param_3 + uVar6 * 2) = (short)iVar5;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0528c; end: 109b052c7;  */

void FUN_109b0528c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b052c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b052c8; end: 109b0531b;  */

long * FUN_109b052c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b0531c; end: 109b055b3;  */

undefined8 *
FUN_109b0531c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b25208;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b054ac;
  }
  if (puVar8 == param_3) goto LAB_109b054ac;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b05454:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b05488;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b05454;
LAB_109b05488:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b054ac:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  param_2[0xf] = param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 6) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b05570);
  (*pcVar5)();
}



/* Entry: 109b055b4; end: 109b0565b;  */

undefined8 * FUN_109b055b4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25208;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b0565c; end: 109b05703;  */

void FUN_109b0565c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25208;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b05704; end: 109b05867;  */

void FUN_109b05704(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (param_5 != 0) {
    pdVar8 = *(double **)(param_1 + 0x20);
    dVar11 = *(double *)(param_1 + 0x78);
    uVar2 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        dVar12 = *pdVar8;
        lVar10 = *param_2;
        do {
          pdVar1 = (double *)(lVar10 + uVar9 * 8);
          dVar14 = dVar11 + *pdVar1 * dVar12;
          dVar5 = dVar11 + pdVar1[1] * dVar12;
          dVar15 = dVar11 + pdVar1[2] * dVar12;
          dVar13 = dVar11 + pdVar1[3] * dVar12;
          if (1 < (int)uVar2) {
            lVar7 = 8;
            do {
              pdVar1 = (double *)(*(long *)((long)param_2 + lVar7) + uVar9 * 8);
              dVar16 = *(double *)((long)pdVar8 + lVar7);
              dVar14 = dVar14 + *pdVar1 * dVar16;
              dVar5 = dVar5 + pdVar1[1] * dVar16;
              dVar15 = dVar15 + pdVar1[2] * dVar16;
              dVar13 = dVar13 + pdVar1[3] * dVar16;
              lVar7 = lVar7 + 8;
            } while ((ulong)uVar2 * 8 - lVar7 != 0);
          }
          auVar3._4_4_ = (int)(long)(double)(long)dVar5;
          auVar3._0_4_ = (int)(long)(double)(long)dVar14;
          auVar3._8_4_ = (int)(long)(double)(long)dVar15;
          auVar3._12_4_ = (int)(long)(double)(long)dVar13;
          uVar4 = NEON_sqxtn(CONCAT44((int)(long)(double)(long)dVar5,(int)(long)(double)(long)dVar14
                                     ),auVar3,4);
          *(undefined8 *)(param_3 + uVar9 * 2) = uVar4;
          uVar9 = uVar9 + 4;
        } while ((long)uVar9 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar9 < (int)param_6) {
        dVar12 = *pdVar8;
        lVar10 = *param_2;
        do {
          dVar5 = dVar11 + *(double *)(lVar10 + uVar9 * 8) * dVar12;
          if (1 < (int)uVar2) {
            lVar7 = 8;
            do {
              dVar5 = dVar5 + *(double *)(*(long *)((long)param_2 + lVar7) + uVar9 * 8) *
                              *(double *)((long)pdVar8 + lVar7);
              lVar7 = lVar7 + 8;
            } while ((ulong)uVar2 * 8 - lVar7 != 0);
          }
          iVar6 = (int)(long)(double)(long)dVar5;
          if (iVar6 < -0x7fff) {
            iVar6 = -0x8000;
          }
          if (0x7ffe < iVar6) {
            iVar6 = 0x7fff;
          }
          *(short *)(param_3 + uVar9 * 2) = (short)iVar6;
          uVar9 = uVar9 + 1;
        } while (uVar9 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b05868; end: 109b0590f;  */

undefined8 * FUN_109b05868(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25208;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b05910; end: 109b05917;  */

void FUN_109b05910(void)

{
  return;
}



/* Entry: 109b05918; end: 109b05953;  */

void FUN_109b05918(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b05950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b05954; end: 109b059a7;  */

long * FUN_109b05954(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b059a8; end: 109b05c43;  */

undefined8 *
FUN_109b059a8(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b25290;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b05b38;
  }
  if (puVar8 == param_3) goto LAB_109b05b38;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b05ae0:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b05b14;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b05ae0;
LAB_109b05b14:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b05b38:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  *(float *)((long)param_2 + 0x74) = (float)param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 5) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b05c00);
  (*pcVar5)();
}



/* Entry: 109b05c44; end: 109b05ceb;  */

undefined8 * FUN_109b05c44(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25290;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b05cec; end: 109b05d93;  */

void FUN_109b05cec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25290;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b05d94; end: 109b05e7f;  */

void FUN_109b05d94(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_5 != 0) {
    pfVar2 = *(float **)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x74);
    uVar1 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        lVar4 = *param_2;
        do {
          fVar8 = *pfVar2;
          lVar5 = uVar3 * 4;
          uVar11 = ((undefined8 *)(lVar4 + lVar5))[1];
          uVar9 = *(undefined8 *)(lVar4 + lVar5);
          uVar9 = CONCAT44(fVar7 + (float)((ulong)uVar9 >> 0x20) * fVar8,
                           fVar7 + (float)uVar9 * fVar8);
          uVar11 = CONCAT44(fVar7 + (float)((ulong)uVar11 >> 0x20) * fVar8,
                            fVar7 + (float)uVar11 * fVar8);
          if (1 < (int)uVar1) {
            uVar6 = 1;
            do {
              fVar8 = pfVar2[uVar6];
              uVar12 = ((undefined8 *)(param_2[uVar6] + lVar5))[1];
              uVar10 = *(undefined8 *)(param_2[uVar6] + lVar5);
              uVar9 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                               (float)((ulong)uVar10 >> 0x20) * fVar8,
                               (float)uVar9 + (float)uVar10 * fVar8);
              uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                                (float)((ulong)uVar12 >> 0x20) * fVar8,
                                (float)uVar11 + (float)uVar12 * fVar8);
              uVar6 = uVar6 + 1;
            } while (uVar1 != uVar6);
          }
          ((undefined8 *)(param_3 + lVar5))[1] = uVar11;
          *(undefined8 *)(param_3 + lVar5) = uVar9;
          uVar3 = uVar3 + 4;
        } while ((long)uVar3 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar3 < (int)param_6) {
        lVar4 = *param_2;
        do {
          fVar8 = fVar7 + *(float *)(lVar4 + uVar3 * 4) * *pfVar2;
          if (1 < (int)uVar1) {
            uVar6 = 1;
            do {
              fVar8 = fVar8 + *(float *)(param_2[uVar6] + uVar3 * 4) * pfVar2[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar1 != uVar6);
          }
          *(float *)(param_3 + uVar3 * 4) = fVar8;
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b05e80; end: 109b05f27;  */

undefined8 * FUN_109b05e80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25290;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b05f28; end: 109b05f2f;  */

void FUN_109b05f28(void)

{
  return;
}



/* Entry: 109b05f30; end: 109b05f6b;  */

void FUN_109b05f30(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b05f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b05f6c; end: 109b05fbf;  */

long * FUN_109b05f6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b05fc0; end: 109b06257;  */

undefined8 *
FUN_109b05fc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  param_2[1] = 0xffffffffffffffff;
  puVar8 = param_2 + 2;
  *(undefined4 *)puVar8 = 0x42ff0000;
  piVar11 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar11[0] = 0;
  piVar11[1] = 0;
  *param_2 = &PTR_FUN_110b25318;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  param_2[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar8;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109b06150;
  }
  if (puVar8 == param_3) goto LAB_109b06150;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_2[9] != 0) {
      piVar1 = (int *)(param_2[9] + 0x14);
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
        func_0x000109a848d4(puVar8);
      }
    }
  }
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (*(int *)((long)param_2 + 0x14) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
LAB_109b060f8:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109b0612c;
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_3 + 4);
    param_2[3] = param_3[1];
    puVar8 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_2[0xb];
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[10];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar11);
    *(undefined4 *)puVar8 = *(undefined4 *)param_3;
    if (*piVar11 < 3) goto LAB_109b060f8;
LAB_109b0612c:
    func_0x000109a84868(puVar8,param_3);
  }
  uVar12 = param_3[2];
  param_2[5] = param_3[3];
  param_2[4] = uVar12;
  uVar12 = param_3[4];
  param_2[7] = param_3[5];
  param_2[6] = uVar12;
  uVar12 = param_3[6];
  param_2[9] = param_3[7];
  param_2[8] = uVar12;
LAB_109b06150:
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  param_2[0xf] = param_1;
  if (((*(uint *)(param_2 + 2) & 0xfff) == 6) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    return param_2;
  }
  puVar6 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
  *puVar6 = 1;
  puStack_68 = puVar6 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar6 + 0x51) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b06214);
  (*pcVar5)();
}



/* Entry: 109b06258; end: 109b062ff;  */

undefined8 * FUN_109b06258(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25318;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b06300; end: 109b063a7;  */

void FUN_109b06300(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25318;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b063a8; end: 109b064c7;  */

void FUN_109b063a8(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_5 != 0) {
    pdVar3 = *(double **)(param_1 + 0x20);
    dVar7 = *(double *)(param_1 + 0x78);
    uVar2 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        lVar5 = *param_2;
        do {
          dVar11 = *pdVar3;
          pdVar1 = (double *)(lVar5 + uVar4 * 8);
          dVar8 = dVar7 + *pdVar1 * dVar11;
          dVar9 = dVar7 + pdVar1[1] * dVar11;
          dVar10 = dVar7 + pdVar1[2] * dVar11;
          dVar11 = dVar7 + pdVar1[3] * dVar11;
          if (1 < (int)uVar2) {
            lVar6 = 8;
            do {
              pdVar1 = (double *)(*(long *)((long)param_2 + lVar6) + uVar4 * 8);
              dVar12 = *(double *)((long)pdVar3 + lVar6);
              dVar8 = dVar8 + *pdVar1 * dVar12;
              dVar9 = dVar9 + pdVar1[1] * dVar12;
              dVar10 = dVar10 + pdVar1[2] * dVar12;
              dVar11 = dVar11 + pdVar1[3] * dVar12;
              lVar6 = lVar6 + 8;
            } while ((ulong)uVar2 * 8 - lVar6 != 0);
          }
          pdVar1 = (double *)(param_3 + uVar4 * 8);
          *pdVar1 = dVar8;
          pdVar1[2] = dVar10;
          pdVar1[1] = dVar9;
          pdVar1[3] = dVar11;
          uVar4 = uVar4 + 4;
        } while ((long)uVar4 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar4 < (int)param_6) {
        lVar5 = *param_2;
        do {
          dVar8 = dVar7 + *(double *)(lVar5 + uVar4 * 8) * *pdVar3;
          if (1 < (int)uVar2) {
            lVar6 = 8;
            do {
              dVar8 = dVar8 + *(double *)(*(long *)((long)param_2 + lVar6) + uVar4 * 8) *
                              *(double *)((long)pdVar3 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((ulong)uVar2 * 8 - lVar6 != 0);
          }
          *(double *)(param_3 + uVar4 * 8) = dVar8;
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_6);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b064c8; end: 109b0656f;  */

undefined8 * FUN_109b064c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25318;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b06570; end: 109b06577;  */

void FUN_109b06570(void)

{
  return;
}



/* Entry: 109b06578; end: 109b065b3;  */

void FUN_109b06578(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b065b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b065b4; end: 109b06607;  */

long * FUN_109b065b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b06608; end: 109b06ad3;  */

undefined8 *
FUN_109b06608(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,uint param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  
  param_2[1] = 0xffffffffffffffff;
  puVar12 = (uint *)(param_2 + 2);
  *puVar12 = 0x42ff0000;
  *param_2 = &PTR_FUN_110b25448;
  piVar14 = (int *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  piVar14[0] = 0;
  piVar14[1] = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = param_2 + 0xc;
  puVar8 = param_2 + 0x10;
  *(undefined4 *)puVar8 = 0x42ff0000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined8 *)((long)param_2 + 0x9c) = 0;
  *(undefined8 *)((long)param_2 + 0x94) = 0;
  *(undefined8 *)((long)param_2 + 0xac) = 0;
  *(undefined8 *)((long)param_2 + 0xa4) = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  piVar13 = (int *)((long)param_2 + 0x84);
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  piVar13[0] = 0;
  piVar13[1] = 0;
  param_2[0x1a] = 0;
  param_2[0x18] = param_2 + 0x11;
  param_2[0x19] = param_2 + 0x1a;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
    uStack_78 = 0;
    puStack_80 = puVar12;
    FUN_109a479a0(param_3,&puStack_88);
  }
  else if (puVar12 != param_3) {
    if (*(long *)(param_3 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (param_2[9] != 0) {
        piVar1 = (int *)(param_2[9] + 0x14);
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
          func_0x000109a848d4(puVar12);
        }
      }
    }
    param_2[9] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    if (*(int *)((long)param_2 + 0x14) < 1) {
      *puVar12 = *param_3;
LAB_109b0678c:
      if (2 < (int)param_3[1]) goto LAB_109b067c0;
      *(uint *)((long)param_2 + 0x14) = param_3[1];
      param_2[3] = *(undefined8 *)(param_3 + 2);
      puVar11 = *(undefined8 **)(param_3 + 0x12);
      puVar10 = (undefined8 *)param_2[0xb];
      *puVar10 = *puVar11;
      puVar10[1] = puVar11[1];
    }
    else {
      lVar7 = 0;
      lVar9 = param_2[10];
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *piVar14);
      *puVar12 = *param_3;
      if (*piVar14 < 3) goto LAB_109b0678c;
LAB_109b067c0:
      func_0x000109a84868(puVar12,param_3);
    }
    uVar15 = *(undefined8 *)(param_3 + 4);
    param_2[5] = *(undefined8 *)(param_3 + 6);
    param_2[4] = uVar15;
    uVar15 = *(undefined8 *)(param_3 + 8);
    param_2[7] = *(undefined8 *)(param_3 + 10);
    param_2[6] = uVar15;
    uVar15 = *(undefined8 *)(param_3 + 0xc);
    param_2[9] = *(undefined8 *)(param_3 + 0xe);
    param_2[8] = uVar15;
  }
  *(int *)(param_2 + 1) = *(int *)(param_2 + 3) + *(int *)((long)param_2 + 0x1c) + -1;
  *(undefined4 *)((long)param_2 + 0xc) = param_4;
  *(int *)(param_2 + 0x1c) = (int)(long)(double)(long)param_1;
  param_2[0xe] = *param_6;
  puVar11 = param_7 + 1;
  param_2[0xf] = *param_7;
  if (param_2 + 0xf == param_7) goto LAB_109b0690c;
  if (param_7[8] != 0) {
    piVar14 = (int *)(param_7[8] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = *piVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_2[0x17] != 0) {
    piVar14 = (int *)(param_2[0x17] + 0x14);
    do {
      iVar2 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar8);
    }
  }
  param_2[0x17] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  if (*(int *)((long)param_2 + 0x84) < 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)puVar11;
LAB_109b068b4:
    if (2 < *(int *)((long)param_7 + 0xc)) goto LAB_109b068e8;
    *(int *)((long)param_2 + 0x84) = *(int *)((long)param_7 + 0xc);
    param_2[0x11] = param_7[2];
    puVar8 = (undefined8 *)param_7[10];
    puVar11 = (undefined8 *)param_2[0x19];
    *puVar11 = *puVar8;
    puVar11[1] = puVar8[1];
  }
  else {
    lVar7 = 0;
    lVar9 = param_2[0x18];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar13);
    *(undefined4 *)puVar8 = *(undefined4 *)puVar11;
    if (*piVar13 < 3) goto LAB_109b068b4;
LAB_109b068e8:
    func_0x000109a84868(puVar8,puVar11);
  }
  uVar15 = param_7[3];
  param_2[0x13] = param_7[4];
  param_2[0x12] = uVar15;
  uVar15 = param_7[5];
  param_2[0x15] = param_7[6];
  param_2[0x14] = uVar15;
  uVar15 = param_7[7];
  param_2[0x17] = param_7[8];
  param_2[0x16] = uVar15;
LAB_109b0690c:
  if (((*puVar12 & 0xfff) == 4) &&
     ((*(int *)(param_2 + 3) == 1 || (*(int *)((long)param_2 + 0x1c) == 1)))) {
    *param_2 = &PTR_FUN_110b25418;
    *(uint *)((long)param_2 + 0xe4) = param_5;
    if ((param_5 & 3) != 0) {
      return param_2;
    }
    puVar6 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_88 = puVar6 + 1;
    puStack_80 = (uint *)0x40;
    *(undefined8 *)(puVar6 + 3) = 0x2026206570795479;
    *(undefined8 *)(puVar6 + 1) = 0x7274656d6d797328;
    *(undefined8 *)(puVar6 + 7) = 0x495254454d4d5953;
    *(undefined8 *)(puVar6 + 5) = 0x5f4c454e52454b28;
    *(undefined8 *)(puVar6 + 0xb) = 0x5953415f4c454e52;
    *(undefined8 *)(puVar6 + 9) = 0x454b207c204c4143;
    *(undefined1 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)(puVar6 + 0xf) = 0x30203d212029294c;
    *(undefined8 *)(puVar6 + 0xd) = 0x4143495254454d4d;
    FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
  }
  else {
    puVar6 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 7) = 0x743a3a3e54533c65;
    *(undefined8 *)(puVar6 + 5) = 0x7079546174614420;
    *(undefined8 *)(puVar6 + 0xb) = 0x722e6c656e72656b;
    *(undefined8 *)(puVar6 + 9) = 0x2820262620657079;
    *(undefined8 *)(puVar6 + 0xf) = 0x6e72656b207c7c20;
    *(undefined8 *)(puVar6 + 0xd) = 0x31203d3d2073776f;
    *(undefined8 *)((long)puVar6 + 0x49) = 0x2931203d3d20736c;
    *(undefined8 *)((long)puVar6 + 0x41) = 0x6f632e6c656e7265;
    *puVar6 = 1;
    puStack_88 = puVar6 + 1;
    puStack_80 = (uint *)0x4d;
    *(undefined1 *)((long)puVar6 + 0x51) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x3d3d202928657079;
    *(undefined8 *)(puVar6 + 1) = 0x742e6c656e72656b;
    FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b06a50);
  (*pcVar5)();
}



/* Entry: 109b06ad4; end: 109b06ad7;  */

undefined8 * FUN_109b06ad4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25448;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b06ad8; end: 109b06aeb;  */

void FUN_109b06ad8(void)

{
  FUN_109b0717c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b06aec; end: 109b0717b;  */

void FUN_109b06aec(long param_1,long param_2,long param_3,int param_4,int param_5,undefined8 param_6
                  )

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  long *plVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  
  iVar12 = *(int *)(param_1 + 8);
  piVar19 = (int *)(*(long *)(param_1 + 0x20) + (long)(iVar12 / 2) * 4);
  iVar5 = *piVar19;
  iVar6 = piVar19[1];
  bVar11 = iVar5 != -2;
  if (param_5 != 0) {
    uVar24 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(uint *)(param_1 + 0xe4);
    iVar13 = (int)param_6;
    iVar10 = iVar13 + -4;
    iVar1 = *(int *)(param_1 + 0xe0) + (int)((ulong)uVar24 >> 0x20);
    lVar25 = (long)iVar10;
    lVar14 = (long)iVar13;
    plVar22 = (long *)(param_2 +
                      ((long)((ulong)(uint)(iVar12 - (iVar12 >> 0x1f)) << 0x20) >> 0x21) * 8);
    do {
      lVar18 = param_1 + 0x78;
      FUN_109b077fc(lVar18,plVar22,param_3,param_6);
      iVar12 = (int)lVar18;
      lVar15 = plVar22[-1];
      lVar16 = plVar22[1];
      uVar23 = (uint)uVar24;
      if ((uVar7 & 1) == 0) {
        if (!bVar11 || (iVar5 != 0 || iVar6 != 1 && iVar6 != -1)) {
          if (iVar12 <= iVar10) {
            lVar18 = (long)iVar12;
            piVar19 = (int *)(lVar15 + (long)iVar12 * 4 + 8);
            piVar20 = (int *)(lVar16 + (long)iVar12 * 4 + 8);
            do {
              iVar12 = piVar20[-1];
              iVar8 = piVar19[-1];
              uVar3 = iVar1 + (piVar20[-2] - piVar19[-2]) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2 = (undefined1 *)(param_3 + lVar18);
              *puVar2 = (char)uVar3;
              uVar3 = iVar1 + (iVar12 - iVar8) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[1] = (char)uVar3;
              iVar12 = piVar20[1];
              iVar8 = piVar19[1];
              uVar3 = iVar1 + (*piVar20 - *piVar19) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[2] = (char)uVar3;
              uVar3 = iVar1 + (iVar12 - iVar8) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[3] = (char)uVar3;
              lVar18 = lVar18 + 4;
              piVar19 = piVar19 + 4;
              piVar20 = piVar20 + 4;
            } while (lVar18 <= lVar25);
            iVar12 = (int)lVar18;
          }
          if (iVar12 < iVar13) {
            lVar18 = (long)iVar12;
            do {
              uVar3 = iVar1 + (*(int *)(lVar16 + lVar18 * 4) - *(int *)(lVar15 + lVar18 * 4)) *
                              iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              *(char *)(param_3 + lVar18) = (char)uVar3;
              lVar18 = lVar18 + 1;
            } while (lVar14 != lVar18);
          }
        }
        else {
          lVar18 = lVar15;
          if (-1 < iVar6) {
            lVar18 = lVar16;
            lVar16 = lVar15;
          }
          if (iVar12 <= iVar10) {
            lVar15 = (long)iVar12;
            piVar19 = (int *)(lVar16 + (long)iVar12 * 4 + 8);
            piVar20 = (int *)(lVar18 + (long)iVar12 * 4 + 8);
            do {
              iVar12 = piVar20[-1];
              iVar8 = piVar19[-1];
              uVar3 = (piVar20[-2] + iVar1) - piVar19[-2] >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2 = (undefined1 *)(param_3 + lVar15);
              *puVar2 = (char)uVar3;
              uVar3 = (iVar12 + iVar1) - iVar8 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[1] = (char)uVar3;
              iVar12 = piVar20[1];
              iVar8 = piVar19[1];
              uVar3 = (*piVar20 + iVar1) - *piVar19 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[2] = (char)uVar3;
              uVar3 = (iVar12 + iVar1) - iVar8 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[3] = (char)uVar3;
              lVar15 = lVar15 + 4;
              piVar19 = piVar19 + 4;
              piVar20 = piVar20 + 4;
            } while (lVar15 <= lVar25);
            iVar12 = (int)lVar15;
          }
          if (iVar12 < iVar13) {
            lVar15 = (long)iVar12;
            do {
              uVar3 = (*(int *)(lVar18 + lVar15 * 4) + iVar1) - *(int *)(lVar16 + lVar15 * 4) >>
                      (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              *(char *)(param_3 + lVar15) = (char)uVar3;
              lVar15 = lVar15 + 1;
            } while (lVar14 != lVar15);
          }
        }
      }
      else {
        lVar17 = *plVar22;
        if (bVar11 && (iVar5 != 0 && (iVar5 == 2 && iVar6 == 1))) {
          if (iVar12 <= iVar10) {
            lVar18 = (long)iVar12;
            piVar19 = (int *)(lVar16 + (long)iVar12 * 4 + 8);
            piVar20 = (int *)(lVar17 + (long)iVar12 * 4 + 8);
            piVar21 = (int *)(lVar15 + (long)iVar12 * 4 + 8);
            do {
              iVar12 = piVar21[-1];
              iVar8 = piVar20[-1];
              iVar9 = piVar19[-1];
              uVar3 = piVar21[-2] + iVar1 + piVar20[-2] * 2 + piVar19[-2] >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2 = (undefined1 *)(param_3 + lVar18);
              *puVar2 = (char)uVar3;
              uVar3 = iVar12 + iVar1 + iVar8 * 2 + iVar9 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[1] = (char)uVar3;
              uVar3 = *piVar21 + iVar1 + *piVar20 * 2 + *piVar19 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              uVar4 = piVar21[1] + iVar1 + piVar20[1] * 2 + piVar19[1] >> (uVar23 & 0x1f);
              uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar4) {
                uVar4 = 0xff;
              }
              lVar18 = lVar18 + 4;
              puVar2[2] = (char)uVar3;
              puVar2[3] = (char)uVar4;
              piVar19 = piVar19 + 4;
              piVar20 = piVar20 + 4;
              piVar21 = piVar21 + 4;
            } while (lVar18 <= lVar25);
          }
          if ((int)lVar18 < iVar13) {
            lVar18 = (long)(int)lVar18;
            do {
              uVar3 = *(int *)(lVar15 + lVar18 * 4) + iVar1 + *(int *)(lVar17 + lVar18 * 4) * 2 +
                      *(int *)(lVar16 + lVar18 * 4) >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              *(char *)(param_3 + lVar18) = (char)uVar3;
              lVar18 = lVar18 + 1;
            } while (lVar14 != lVar18);
          }
        }
        else if (bVar11 || iVar6 != 1) {
          if (iVar12 <= iVar10) {
            lVar18 = (long)iVar12;
            piVar19 = (int *)(lVar17 + (long)iVar12 * 4 + 8);
            piVar20 = (int *)(lVar16 + (long)iVar12 * 4 + 8);
            piVar21 = (int *)(lVar15 + (long)iVar12 * 4 + 8);
            do {
              iVar12 = piVar21[-1];
              iVar8 = piVar20[-1];
              iVar9 = piVar19[-1];
              uVar3 = iVar1 + piVar19[-2] * iVar5 + (piVar20[-2] + piVar21[-2]) * iVar6 >>
                      (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2 = (undefined1 *)(param_3 + lVar18);
              *puVar2 = (char)uVar3;
              uVar3 = iVar1 + iVar9 * iVar5 + (iVar8 + iVar12) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[1] = (char)uVar3;
              iVar12 = piVar21[1];
              iVar8 = piVar20[1];
              iVar9 = piVar19[1];
              uVar3 = iVar1 + *piVar19 * iVar5 + (*piVar20 + *piVar21) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[2] = (char)uVar3;
              uVar3 = iVar1 + iVar9 * iVar5 + (iVar8 + iVar12) * iVar6 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[3] = (char)uVar3;
              lVar18 = lVar18 + 4;
              piVar19 = piVar19 + 4;
              piVar20 = piVar20 + 4;
              piVar21 = piVar21 + 4;
            } while (lVar18 <= lVar25);
          }
          if ((int)lVar18 < iVar13) {
            lVar18 = (long)(int)lVar18;
            do {
              uVar3 = iVar1 + *(int *)(lVar17 + lVar18 * 4) * iVar5 +
                      (*(int *)(lVar16 + lVar18 * 4) + *(int *)(lVar15 + lVar18 * 4)) * iVar6 >>
                      (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              *(char *)(param_3 + lVar18) = (char)uVar3;
              lVar18 = lVar18 + 1;
            } while (lVar14 != lVar18);
          }
        }
        else {
          if (iVar12 <= iVar10) {
            lVar18 = (long)iVar12;
            piVar19 = (int *)(lVar16 + (long)iVar12 * 4 + 8);
            piVar20 = (int *)(lVar17 + (long)iVar12 * 4 + 8);
            piVar21 = (int *)(lVar15 + (long)iVar12 * 4 + 8);
            do {
              iVar12 = piVar21[-1];
              iVar8 = piVar20[-1];
              iVar9 = piVar19[-1];
              uVar3 = piVar21[-2] + iVar1 + piVar20[-2] * -2 + piVar19[-2] >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2 = (undefined1 *)(param_3 + lVar18);
              *puVar2 = (char)uVar3;
              uVar3 = iVar12 + iVar1 + iVar8 * -2 + iVar9 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              puVar2[1] = (char)uVar3;
              uVar3 = *piVar21 + iVar1 + *piVar20 * -2 + *piVar19 >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              uVar4 = piVar21[1] + iVar1 + piVar20[1] * -2 + piVar19[1] >> (uVar23 & 0x1f);
              uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar4) {
                uVar4 = 0xff;
              }
              lVar18 = lVar18 + 4;
              puVar2[2] = (char)uVar3;
              puVar2[3] = (char)uVar4;
              piVar19 = piVar19 + 4;
              piVar20 = piVar20 + 4;
              piVar21 = piVar21 + 4;
            } while (lVar18 <= lVar25);
          }
          if ((int)lVar18 < iVar13) {
            lVar18 = (long)(int)lVar18;
            do {
              uVar3 = *(int *)(lVar15 + lVar18 * 4) + iVar1 + *(int *)(lVar17 + lVar18 * 4) * -2 +
                      *(int *)(lVar16 + lVar18 * 4) >> (uVar23 & 0x1f);
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              *(char *)(param_3 + lVar18) = (char)uVar3;
              lVar18 = lVar18 + 1;
            } while (lVar14 != lVar18);
          }
        }
      }
      param_3 = param_3 + param_4;
      param_5 = param_5 + -1;
      plVar22 = plVar22 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0717c; end: 109b0729f;  */

undefined8 * FUN_109b0717c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25448;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b072a0; end: 109b072a3;  */

undefined8 * FUN_109b072a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25448;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b072a4; end: 109b072b7;  */

void FUN_109b072a4(void)

{
  FUN_109b0717c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b072b8; end: 109b07627;  */

void FUN_109b072b8(long param_1,long param_2,long param_3,int param_4,int param_5,undefined8 param_6
                  )

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar3 = iVar6 / 2;
  piVar1 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
  iVar7 = *(int *)(param_1 + 0xe0);
  uVar4 = *(uint *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x74);
  plVar17 = (long *)(param_2 + (long)iVar3 * 8);
  iVar13 = (int)param_6;
  if ((*(byte *)(param_1 + 0xe4) & 1) == 0) {
    if (param_5 != 0) {
      auVar10._4_4_ = -uVar4;
      auVar10._0_4_ = -uVar4;
      do {
        lVar12 = param_1 + 0x78;
        FUN_109b077fc(lVar12,plVar17,param_3,param_6);
        auVar10._8_4_ = -uVar4;
        if ((int)lVar12 <= iVar13 + -4) {
          lVar12 = (long)(int)lVar12;
          do {
            iVar18 = iVar7;
            iVar23 = iVar7;
            iVar24 = iVar7;
            iVar25 = iVar7;
            if (1 < iVar6) {
              lVar14 = -8;
              uVar15 = 1;
              do {
                puVar8 = (undefined8 *)(plVar17[uVar15] + lVar12 * 4);
                uVar27 = puVar8[1];
                uVar26 = *puVar8;
                puVar8 = (undefined8 *)(*(long *)((long)plVar17 + lVar14) + lVar12 * 4);
                uVar29 = puVar8[1];
                uVar28 = *puVar8;
                iVar9 = piVar1[uVar15];
                iVar18 = iVar18 + ((int)uVar26 - (int)uVar28) * iVar9;
                iVar23 = iVar23 + ((int)((ulong)uVar26 >> 0x20) - (int)((ulong)uVar28 >> 0x20)) *
                                  iVar9;
                iVar24 = iVar24 + ((int)uVar27 - (int)uVar29) * iVar9;
                iVar25 = iVar25 + ((int)((ulong)uVar27 >> 0x20) - (int)((ulong)uVar29 >> 0x20)) *
                                  iVar9;
                uVar15 = uVar15 + 1;
                lVar14 = lVar14 + -8;
              } while (iVar3 + 1 != uVar15);
            }
            auVar19._0_4_ = iVar18 + iVar5;
            auVar19._4_4_ = iVar23 + iVar5;
            auVar19._8_4_ = iVar24 + iVar5;
            auVar19._12_4_ = iVar25 + iVar5;
            auVar10._12_4_ = -uVar4;
            auVar20 = NEON_sshl(auVar19,auVar10,4);
            auVar20 = NEON_smax(auVar20,ZEXT216(0),4);
            auVar11._8_8_ = 0xff000000ff;
            auVar11._0_8_ = 0xff000000ff;
            auVar20 = NEON_smin(auVar20,auVar11,4);
            *(uint *)(param_3 + lVar12) =
                 CONCAT13(auVar20[0xc],CONCAT12(auVar20[8],CONCAT11(auVar20[4],auVar20[0])));
            lVar12 = lVar12 + 4;
          } while (lVar12 <= iVar13 + -4);
        }
        if ((int)lVar12 < iVar13) {
          lVar12 = (long)(int)lVar12;
          do {
            iVar18 = iVar7;
            if (1 < iVar6) {
              lVar14 = -8;
              uVar15 = 1;
              do {
                iVar18 = iVar18 + (*(int *)(plVar17[uVar15] + lVar12 * 4) -
                                  *(int *)(*(long *)((long)plVar17 + lVar14) + lVar12 * 4)) *
                                  piVar1[uVar15];
                uVar15 = uVar15 + 1;
                lVar14 = lVar14 + -8;
              } while (iVar3 + 1 != uVar15);
            }
            uVar2 = iVar18 + iVar5 >> (uVar4 & 0x1f);
            uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar2) {
              uVar2 = 0xff;
            }
            *(char *)(param_3 + lVar12) = (char)uVar2;
            lVar12 = lVar12 + 1;
          } while (lVar12 != iVar13);
        }
        param_3 = param_3 + param_4;
        plVar17 = plVar17 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    auVar20._4_4_ = -uVar4;
    auVar20._0_4_ = -uVar4;
    do {
      lVar12 = param_1 + 0x78;
      FUN_109b077fc(lVar12,plVar17,param_3,param_6);
      auVar20._8_4_ = -uVar4;
      if ((int)lVar12 <= iVar13 + -4) {
        lVar12 = (long)(int)lVar12;
        do {
          lVar14 = lVar12 * 4;
          uVar27 = ((undefined8 *)(*plVar17 + lVar14))[1];
          uVar26 = *(undefined8 *)(*plVar17 + lVar14);
          iVar18 = *piVar1;
          iVar23 = iVar7 + (int)uVar26 * iVar18;
          iVar24 = iVar7 + (int)((ulong)uVar26 >> 0x20) * iVar18;
          iVar25 = iVar7 + (int)uVar27 * iVar18;
          iVar18 = iVar7 + (int)((ulong)uVar27 >> 0x20) * iVar18;
          if (1 < iVar6) {
            lVar16 = -8;
            uVar15 = 1;
            do {
              uVar27 = ((undefined8 *)(plVar17[uVar15] + lVar14))[1];
              uVar26 = *(undefined8 *)(plVar17[uVar15] + lVar14);
              puVar8 = (undefined8 *)(*(long *)((long)plVar17 + lVar16) + lVar14);
              uVar29 = puVar8[1];
              uVar28 = *puVar8;
              iVar9 = piVar1[uVar15];
              iVar23 = iVar23 + ((int)uVar28 + (int)uVar26) * iVar9;
              iVar24 = iVar24 + ((int)((ulong)uVar28 >> 0x20) + (int)((ulong)uVar26 >> 0x20)) *
                                iVar9;
              iVar25 = iVar25 + ((int)uVar29 + (int)uVar27) * iVar9;
              iVar18 = iVar18 + ((int)((ulong)uVar29 >> 0x20) + (int)((ulong)uVar27 >> 0x20)) *
                                iVar9;
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + -8;
            } while (iVar3 + 1 != uVar15);
          }
          auVar22._0_4_ = iVar23 + iVar5;
          auVar22._4_4_ = iVar24 + iVar5;
          auVar22._8_4_ = iVar25 + iVar5;
          auVar22._12_4_ = iVar18 + iVar5;
          auVar20._12_4_ = -uVar4;
          auVar21 = NEON_sshl(auVar22,auVar20,4);
          auVar22 = NEON_smax(auVar21,ZEXT216(0),4);
          auVar21._8_8_ = 0xff000000ff;
          auVar21._0_8_ = 0xff000000ff;
          auVar21 = NEON_smin(auVar22,auVar21,4);
          *(uint *)(param_3 + lVar12) =
               CONCAT13(auVar21[0xc],CONCAT12(auVar21[8],CONCAT11(auVar21[4],auVar21[0])));
          lVar12 = lVar12 + 4;
        } while (lVar12 <= iVar13 + -4);
      }
      if ((int)lVar12 < iVar13) {
        lVar12 = (long)(int)lVar12;
        do {
          iVar18 = iVar7 + *(int *)(*plVar17 + lVar12 * 4) * *piVar1;
          if (1 < iVar6) {
            lVar14 = -8;
            uVar15 = 1;
            do {
              iVar18 = iVar18 + (*(int *)(*(long *)((long)plVar17 + lVar14) + lVar12 * 4) +
                                *(int *)(plVar17[uVar15] + lVar12 * 4)) * piVar1[uVar15];
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + -8;
            } while (iVar3 + 1 != uVar15);
          }
          uVar2 = iVar18 + iVar5 >> (uVar4 & 0x1f);
          uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          *(char *)(param_3 + lVar12) = (char)uVar2;
          lVar12 = lVar12 + 1;
        } while (lVar12 != iVar13);
      }
      param_3 = param_3 + param_4;
      plVar17 = plVar17 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b07628; end: 109b0762b;  */

undefined8 * FUN_109b07628(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25448;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b0762c; end: 109b0763f;  */

void FUN_109b0762c(void)

{
  FUN_109b0717c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b07640; end: 109b077fb;  */

void FUN_109b07640(long param_1,long *param_2,long param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auVar8 [16];
  long lVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_5 != 0) {
    piVar12 = *(int **)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0xe0);
    uVar2 = *(uint *)(param_1 + 0x70);
    iVar3 = *(int *)(param_1 + 0x74);
    uVar5 = *(uint *)(param_1 + 8);
    iVar10 = (int)param_6;
    auVar8._4_4_ = -uVar2;
    auVar8._0_4_ = -uVar2;
    do {
      lVar9 = param_1 + 0x78;
      FUN_109b077fc(lVar9,param_2,param_3,param_6);
      auVar8._8_4_ = -uVar2;
      if ((int)lVar9 <= iVar10 + -4) {
        lVar9 = (long)(int)lVar9;
        do {
          puVar6 = (undefined8 *)(*param_2 + lVar9 * 4);
          uVar20 = puVar6[1];
          uVar19 = *puVar6;
          iVar18 = *piVar12;
          iVar13 = iVar4 + (int)uVar19 * iVar18;
          iVar16 = iVar4 + (int)((ulong)uVar19 >> 0x20) * iVar18;
          iVar17 = iVar4 + (int)uVar20 * iVar18;
          iVar18 = iVar4 + (int)((ulong)uVar20 >> 0x20) * iVar18;
          if (1 < (int)uVar5) {
            uVar11 = 1;
            do {
              puVar6 = (undefined8 *)(param_2[uVar11] + lVar9 * 4);
              uVar20 = puVar6[1];
              uVar19 = *puVar6;
              iVar7 = piVar12[uVar11];
              iVar13 = iVar13 + (int)uVar19 * iVar7;
              iVar16 = iVar16 + (int)((ulong)uVar19 >> 0x20) * iVar7;
              iVar17 = iVar17 + (int)uVar20 * iVar7;
              iVar18 = iVar18 + (int)((ulong)uVar20 >> 0x20) * iVar7;
              uVar11 = uVar11 + 1;
            } while (uVar5 != uVar11);
          }
          auVar15._0_4_ = iVar13 + iVar3;
          auVar15._4_4_ = iVar16 + iVar3;
          auVar15._8_4_ = iVar17 + iVar3;
          auVar15._12_4_ = iVar18 + iVar3;
          auVar8._12_4_ = -uVar2;
          auVar14 = NEON_sshl(auVar15,auVar8,4);
          auVar15 = NEON_smax(auVar14,ZEXT216(0),4);
          auVar14._8_8_ = 0xff000000ff;
          auVar14._0_8_ = 0xff000000ff;
          auVar14 = NEON_smin(auVar15,auVar14,4);
          *(uint *)(param_3 + lVar9) =
               CONCAT13(auVar14[0xc],CONCAT12(auVar14[8],CONCAT11(auVar14[4],auVar14[0])));
          lVar9 = lVar9 + 4;
        } while (lVar9 <= iVar10 + -4);
      }
      if ((int)lVar9 < iVar10) {
        lVar9 = (long)(int)lVar9;
        do {
          iVar18 = iVar4 + *(int *)(*param_2 + lVar9 * 4) * *piVar12;
          if (1 < (int)uVar5) {
            uVar11 = 1;
            do {
              iVar18 = iVar18 + *(int *)(param_2[uVar11] + lVar9 * 4) * piVar12[uVar11];
              uVar11 = uVar11 + 1;
            } while (uVar5 != uVar11);
          }
          uVar1 = iVar18 + iVar3 >> (uVar2 & 0x1f);
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar1) {
            uVar1 = 0xff;
          }
          *(char *)(param_3 + lVar9) = (char)uVar1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != iVar10);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b077fc; end: 109b07a7f;  */

ulong FUN_109b077fc(byte *param_1,long *param_2,long param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  undefined8 uVar17;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  FUN_109ac28d8();
  if (cRam000000011382bd48 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + -1;
    lVar9 = *(long *)(param_1 + 0x18);
    lVar3 = (long)((ulong)(uint)(iVar4 - (iVar4 >> 0x1f)) << 0x20) >> 0x21;
    lVar14 = lVar9 + (long)(iVar4 / 2) * 4;
    fVar5 = *(float *)(param_1 + 4);
    uVar8 = iVar4 / 2;
    if ((*param_1 & 1) != 0) {
      if (param_4 < 8) {
        return 0;
      }
      if (iVar4 == 1) {
        return 0;
      }
      uVar7 = 0;
      pfVar13 = (float *)(lVar9 + lVar3 * 4);
      fVar15 = *pfVar13;
      fVar16 = *(float *)(lVar14 + 4);
      if ((int)uVar8 < 3) {
        uVar8 = 2;
      }
      do {
        pauVar1 = (undefined1 (*) [16])(*param_2 + uVar7 * 4);
        auVar18 = NEON_scvtf(*pauVar1,4);
        auVar23 = NEON_scvtf(pauVar1[1],4);
        pauVar1 = (undefined1 (*) [16])(param_2[1] + uVar7 * 4);
        pauVar2 = (undefined1 (*) [16])(param_2[-1] + uVar7 * 4);
        auVar27 = NEON_scvtf(*pauVar1,4);
        auVar29 = NEON_scvtf(pauVar1[1],4);
        auVar30 = NEON_scvtf(*pauVar2,4);
        auVar31 = NEON_scvtf(pauVar2[1],4);
        fVar19 = fVar5 + auVar18._0_4_ * fVar15 + (auVar27._0_4_ + auVar30._0_4_) * fVar16;
        fVar20 = fVar5 + auVar18._4_4_ * fVar15 + (auVar27._4_4_ + auVar30._4_4_) * fVar16;
        fVar21 = fVar5 + auVar18._8_4_ * fVar15 + (auVar27._8_4_ + auVar30._8_4_) * fVar16;
        fVar22 = fVar5 + auVar18._12_4_ * fVar15 + (auVar27._12_4_ + auVar30._12_4_) * fVar16;
        fVar24 = fVar5 + auVar23._0_4_ * fVar15 + (auVar29._0_4_ + auVar31._0_4_) * fVar16;
        fVar25 = fVar5 + auVar23._4_4_ * fVar15 + (auVar29._4_4_ + auVar31._4_4_) * fVar16;
        fVar26 = fVar5 + auVar23._8_4_ * fVar15 + (auVar29._8_4_ + auVar31._8_4_) * fVar16;
        fVar28 = fVar5 + auVar23._12_4_ * fVar15 + (auVar29._12_4_ + auVar31._12_4_) * fVar16;
        plVar10 = param_2 + 2;
        plVar11 = param_2 + -2;
        pfVar12 = pfVar13 + 2;
        lVar14 = (ulong)uVar8 - 1;
        if (3 < iVar4) {
          do {
            pauVar1 = (undefined1 (*) [16])(*plVar10 + uVar7 * 4);
            pauVar2 = (undefined1 (*) [16])(*plVar11 + uVar7 * 4);
            auVar18 = NEON_scvtf(*pauVar1,4);
            auVar27 = NEON_scvtf(*pauVar2,4);
            fVar6 = *pfVar12;
            auVar23 = NEON_scvtf(pauVar1[1],4);
            auVar29 = NEON_scvtf(pauVar2[1],4);
            fVar19 = fVar19 + fVar6 * (auVar18._0_4_ + auVar27._0_4_);
            fVar20 = fVar20 + fVar6 * (auVar18._4_4_ + auVar27._4_4_);
            fVar21 = fVar21 + fVar6 * (auVar18._8_4_ + auVar27._8_4_);
            fVar22 = fVar22 + fVar6 * (auVar18._12_4_ + auVar27._12_4_);
            fVar24 = fVar24 + fVar6 * (auVar23._0_4_ + auVar29._0_4_);
            fVar25 = fVar25 + fVar6 * (auVar23._4_4_ + auVar29._4_4_);
            fVar26 = fVar26 + fVar6 * (auVar23._8_4_ + auVar29._8_4_);
            fVar28 = fVar28 + fVar6 * (auVar23._12_4_ + auVar29._12_4_);
            lVar14 = lVar14 + -1;
            plVar10 = plVar10 + 1;
            plVar11 = plVar11 + -1;
            pfVar12 = pfVar12 + 1;
          } while (lVar14 != 0);
        }
        auVar18._0_8_ = CONCAT44((int)fVar20,(int)fVar19);
        auVar18._8_4_ = (int)fVar21;
        auVar18._12_4_ = (int)fVar22;
        auVar27._0_4_ = (int)fVar24;
        auVar27._4_4_ = (int)fVar25;
        auVar27._8_4_ = (int)fVar26;
        auVar27._12_4_ = (int)fVar28;
        auVar23._8_8_ = auVar18._8_8_;
        auVar23._0_8_ = NEON_sqxtn(auVar18._0_8_,auVar18,4);
        auVar18 = NEON_sqxtn2(auVar23,auVar27,4);
        uVar17 = NEON_sqxtun(auVar18._0_8_,auVar18,2);
        *(undefined8 *)(param_3 + uVar7) = uVar17;
        uVar7 = uVar7 + 8;
      } while (uVar7 <= param_4 - 8);
      return uVar7;
    }
    if (7 < param_4) {
      uVar7 = 0;
      fVar15 = *(float *)(lVar14 + 4);
      if ((int)uVar8 < 3) {
        uVar8 = 2;
      }
      do {
        pauVar1 = (undefined1 (*) [16])(param_2[1] + uVar7 * 4);
        pauVar2 = (undefined1 (*) [16])(param_2[-1] + uVar7 * 4);
        auVar18 = NEON_scvtf(*pauVar1,4);
        auVar23 = NEON_scvtf(pauVar1[1],4);
        auVar27 = NEON_scvtf(*pauVar2,4);
        auVar29 = NEON_scvtf(pauVar2[1],4);
        fVar16 = fVar5 + (auVar18._0_4_ - auVar27._0_4_) * fVar15;
        fVar19 = fVar5 + (auVar18._4_4_ - auVar27._4_4_) * fVar15;
        fVar20 = fVar5 + (auVar18._8_4_ - auVar27._8_4_) * fVar15;
        fVar21 = fVar5 + (auVar18._12_4_ - auVar27._12_4_) * fVar15;
        fVar22 = fVar5 + (auVar23._0_4_ - auVar29._0_4_) * fVar15;
        fVar24 = fVar5 + (auVar23._4_4_ - auVar29._4_4_) * fVar15;
        fVar25 = fVar5 + (auVar23._8_4_ - auVar29._8_4_) * fVar15;
        fVar26 = fVar5 + (auVar23._12_4_ - auVar29._12_4_) * fVar15;
        plVar10 = param_2 + 2;
        plVar11 = param_2 + -2;
        pfVar13 = (float *)(lVar9 + lVar3 * 4 + 8);
        lVar14 = (ulong)uVar8 - 1;
        if (3 < iVar4) {
          do {
            pauVar1 = (undefined1 (*) [16])(*plVar10 + uVar7 * 4);
            pauVar2 = (undefined1 (*) [16])(*plVar11 + uVar7 * 4);
            auVar18 = NEON_scvtf(*pauVar1,4);
            auVar27 = NEON_scvtf(*pauVar2,4);
            fVar28 = *pfVar13;
            auVar23 = NEON_scvtf(pauVar1[1],4);
            auVar29 = NEON_scvtf(pauVar2[1],4);
            fVar16 = fVar16 + fVar28 * (auVar18._0_4_ - auVar27._0_4_);
            fVar19 = fVar19 + fVar28 * (auVar18._4_4_ - auVar27._4_4_);
            fVar20 = fVar20 + fVar28 * (auVar18._8_4_ - auVar27._8_4_);
            fVar21 = fVar21 + fVar28 * (auVar18._12_4_ - auVar27._12_4_);
            fVar22 = fVar22 + fVar28 * (auVar23._0_4_ - auVar29._0_4_);
            fVar24 = fVar24 + fVar28 * (auVar23._4_4_ - auVar29._4_4_);
            fVar25 = fVar25 + fVar28 * (auVar23._8_4_ - auVar29._8_4_);
            fVar26 = fVar26 + fVar28 * (auVar23._12_4_ - auVar29._12_4_);
            lVar14 = lVar14 + -1;
            plVar10 = plVar10 + 1;
            plVar11 = plVar11 + -1;
            pfVar13 = pfVar13 + 1;
          } while (lVar14 != 0);
        }
        auVar29._0_8_ = CONCAT44((int)fVar19,(int)fVar16);
        auVar29._8_4_ = (int)fVar20;
        auVar29._12_4_ = (int)fVar21;
        auVar31._0_4_ = (int)fVar22;
        auVar31._4_4_ = (int)fVar24;
        auVar31._8_4_ = (int)fVar25;
        auVar31._12_4_ = (int)fVar26;
        auVar30._8_8_ = auVar29._8_8_;
        auVar30._0_8_ = NEON_sqxtn(auVar29._0_8_,auVar29,4);
        auVar18 = NEON_sqxtn2(auVar30,auVar31,4);
        uVar17 = NEON_sqxtun(auVar18._0_8_,auVar18,2);
        *(undefined8 *)(param_3 + uVar7) = uVar17;
        uVar7 = uVar7 + 8;
      } while (uVar7 <= param_4 - 8);
      return uVar7;
    }
  }
  return 0;
}



/* Entry: 109b07a80; end: 109b07a87;  */

void FUN_109b07a80(void)

{
  return;
}



/* Entry: 109b07a88; end: 109b07ac3;  */

void FUN_109b07a88(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b07ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b07ac4; end: 109b07ac7;  */

undefined8 * FUN_109b07ac4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25530;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b07ac8; end: 109b07adb;  */

void FUN_109b07ac8(void)

{
  FUN_109b07f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b07adc; end: 109b07f63;  */

void FUN_109b07adc(long param_1,long param_2,long param_3,int param_4,int param_5,undefined8 param_6
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  
  iVar29 = *(int *)(param_1 + 8);
  piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)(iVar29 / 2) * 4);
  iVar5 = *piVar4;
  iVar7 = piVar4[1];
  bVar16 = iVar5 != -2;
  if (param_5 != 0) {
    iVar6 = *(int *)(param_1 + 0xe0);
    uVar8 = *(uint *)(param_1 + 0xe4);
    iVar18 = (int)param_6;
    iVar9 = iVar18 + -4;
    lVar27 = (long)iVar9;
    lVar28 = (long)iVar18;
    plVar26 = (long *)(param_2 +
                      ((long)((ulong)(uint)(iVar29 - (iVar29 >> 0x1f)) << 0x20) >> 0x21) * 8);
    do {
      uVar17 = param_1 + 0x78;
      FUN_109b08228(uVar17,plVar26,param_3,param_6);
      lVar19 = plVar26[-1];
      lVar20 = plVar26[1];
      iVar29 = (int)uVar17;
      if ((uVar8 & 1) == 0) {
        if (!bVar16 || (iVar5 != 0 || iVar7 != 1 && iVar7 != -1)) {
          if (iVar29 <= iVar9) {
            lVar21 = (uVar17 & 0xffffffff) << 1;
            uVar1 = uVar17 & 0xffffffff;
            uVar2 = uVar17 & 0xffffffff;
            uVar17 = uVar17 & 0xffffffff;
            puVar23 = (undefined8 *)(lVar19 + uVar1 * 4);
            puVar24 = (undefined8 *)(lVar20 + uVar2 * 4);
            do {
              iVar29 = (int)*puVar24 - (int)*puVar23;
              iVar30 = (int)((ulong)*puVar24 >> 0x20) - (int)((ulong)*puVar23 >> 0x20);
              auVar14._4_4_ = iVar6 + iVar30 * iVar7;
              auVar14._0_4_ = iVar6 + iVar29 * iVar7;
              auVar14._8_4_ = iVar6 + ((int)puVar24[1] - (int)puVar23[1]) * iVar7;
              auVar14._12_4_ =
                   iVar6 + ((int)((ulong)puVar24[1] >> 0x20) - (int)((ulong)puVar23[1] >> 0x20)) *
                           iVar7;
              uVar13 = NEON_sqxtn(CONCAT44(iVar30,iVar29),auVar14,4);
              *(undefined8 *)(param_3 + lVar21) = uVar13;
              uVar17 = uVar17 + 4;
              lVar21 = lVar21 + 8;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
            } while ((long)uVar17 <= lVar27);
          }
          if ((int)uVar17 < iVar18) {
            lVar21 = (long)(int)uVar17;
            do {
              iVar29 = iVar6 + (*(int *)(lVar20 + lVar21 * 4) - *(int *)(lVar19 + lVar21 * 4)) *
                               iVar7;
              if (iVar29 < -0x7fff) {
                iVar29 = -0x8000;
              }
              if (0x7ffe < iVar29) {
                iVar29 = 0x7fff;
              }
              *(short *)(param_3 + lVar21 * 2) = (short)iVar29;
              lVar21 = lVar21 + 1;
            } while (lVar28 != lVar21);
          }
        }
        else {
          lVar21 = lVar19;
          if (-1 < iVar7) {
            lVar21 = lVar20;
            lVar20 = lVar19;
          }
          if (iVar29 <= iVar9) {
            lVar19 = (uVar17 & 0xffffffff) << 1;
            uVar1 = uVar17 & 0xffffffff;
            uVar2 = uVar17 & 0xffffffff;
            uVar17 = uVar17 & 0xffffffff;
            puVar23 = (undefined8 *)(lVar20 + uVar1 * 4);
            puVar24 = (undefined8 *)(lVar21 + uVar2 * 4);
            do {
              iVar29 = ((int)*puVar24 + iVar6) - (int)*puVar23;
              iVar30 = ((int)((ulong)*puVar24 >> 0x20) + iVar6) - (int)((ulong)*puVar23 >> 0x20);
              auVar10._4_4_ = iVar30;
              auVar10._0_4_ = iVar29;
              auVar10._8_4_ = ((int)puVar24[1] + iVar6) - (int)puVar23[1];
              auVar10._12_4_ =
                   ((int)((ulong)puVar24[1] >> 0x20) + iVar6) - (int)((ulong)puVar23[1] >> 0x20);
              uVar13 = NEON_sqxtn(CONCAT44(iVar30,iVar29),auVar10,4);
              *(undefined8 *)(param_3 + lVar19) = uVar13;
              uVar17 = uVar17 + 4;
              lVar19 = lVar19 + 8;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
            } while ((long)uVar17 <= lVar27);
          }
          if ((int)uVar17 < iVar18) {
            lVar19 = (long)(int)uVar17;
            do {
              iVar29 = (*(int *)(lVar21 + lVar19 * 4) + iVar6) - *(int *)(lVar20 + lVar19 * 4);
              if (iVar29 < -0x7fff) {
                iVar29 = -0x8000;
              }
              if (0x7ffe < iVar29) {
                iVar29 = 0x7fff;
              }
              *(short *)(param_3 + lVar19 * 2) = (short)iVar29;
              lVar19 = lVar19 + 1;
            } while (lVar28 != lVar19);
          }
        }
      }
      else {
        lVar21 = *plVar26;
        if (bVar16 && (iVar5 != 0 && (iVar5 == 2 && iVar7 == 1))) {
          if (iVar29 <= iVar9) {
            lVar22 = (uVar17 & 0xffffffff) << 1;
            uVar1 = uVar17 & 0xffffffff;
            uVar2 = uVar17 & 0xffffffff;
            uVar3 = uVar17 & 0xffffffff;
            uVar17 = uVar17 & 0xffffffff;
            puVar23 = (undefined8 *)(lVar20 + uVar1 * 4);
            puVar24 = (undefined8 *)(lVar21 + uVar2 * 4);
            puVar25 = (undefined8 *)(lVar19 + uVar3 * 4);
            do {
              iVar29 = (int)*puVar25 + iVar6 + (int)*puVar24 * 2 + (int)*puVar23;
              iVar30 = (int)((ulong)*puVar25 >> 0x20) + iVar6 + (int)((ulong)*puVar24 >> 0x20) * 2 +
                       (int)((ulong)*puVar23 >> 0x20);
              auVar11._4_4_ = iVar30;
              auVar11._0_4_ = iVar29;
              auVar11._8_4_ = (int)puVar25[1] + iVar6 + (int)puVar24[1] * 2 + (int)puVar23[1];
              auVar11._12_4_ =
                   (int)((ulong)puVar25[1] >> 0x20) + iVar6 + (int)((ulong)puVar24[1] >> 0x20) * 2 +
                   (int)((ulong)puVar23[1] >> 0x20);
              uVar13 = NEON_sqxtn(CONCAT44(iVar30,iVar29),auVar11,4);
              *(undefined8 *)(param_3 + lVar22) = uVar13;
              uVar17 = uVar17 + 4;
              lVar22 = lVar22 + 8;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
              puVar25 = puVar25 + 2;
            } while ((long)uVar17 <= lVar27);
          }
          if ((int)uVar17 < iVar18) {
            lVar22 = (long)(int)uVar17;
            do {
              iVar29 = *(int *)(lVar19 + lVar22 * 4) + iVar6 + *(int *)(lVar21 + lVar22 * 4) * 2 +
                       *(int *)(lVar20 + lVar22 * 4);
              if (iVar29 < -0x7fff) {
                iVar29 = -0x8000;
              }
              if (0x7ffe < iVar29) {
                iVar29 = 0x7fff;
              }
              *(short *)(param_3 + lVar22 * 2) = (short)iVar29;
              lVar22 = lVar22 + 1;
            } while (lVar28 != lVar22);
          }
        }
        else if (bVar16 || iVar7 != 1) {
          if (iVar29 <= iVar9) {
            lVar22 = (uVar17 & 0xffffffff) << 1;
            uVar1 = uVar17 & 0xffffffff;
            uVar2 = uVar17 & 0xffffffff;
            uVar3 = uVar17 & 0xffffffff;
            uVar17 = uVar17 & 0xffffffff;
            puVar23 = (undefined8 *)(lVar21 + uVar1 * 4);
            puVar24 = (undefined8 *)(lVar20 + uVar2 * 4);
            puVar25 = (undefined8 *)(lVar19 + uVar3 * 4);
            do {
              iVar29 = (int)*puVar24 + (int)*puVar25;
              iVar30 = (int)((ulong)*puVar24 >> 0x20) + (int)((ulong)*puVar25 >> 0x20);
              auVar15._4_4_ = iVar6 + (int)((ulong)*puVar23 >> 0x20) * iVar5 + iVar30 * iVar7;
              auVar15._0_4_ = iVar6 + (int)*puVar23 * iVar5 + iVar29 * iVar7;
              auVar15._8_4_ =
                   iVar6 + (int)puVar23[1] * iVar5 + ((int)puVar24[1] + (int)puVar25[1]) * iVar7;
              auVar15._12_4_ =
                   iVar6 + (int)((ulong)puVar23[1] >> 0x20) * iVar5 +
                   ((int)((ulong)puVar24[1] >> 0x20) + (int)((ulong)puVar25[1] >> 0x20)) * iVar7;
              uVar13 = NEON_sqxtn(CONCAT44(iVar30,iVar29),auVar15,4);
              *(undefined8 *)(param_3 + lVar22) = uVar13;
              uVar17 = uVar17 + 4;
              lVar22 = lVar22 + 8;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
              puVar25 = puVar25 + 2;
            } while ((long)uVar17 <= lVar27);
          }
          if ((int)uVar17 < iVar18) {
            lVar22 = (long)(int)uVar17;
            do {
              iVar29 = iVar6 + *(int *)(lVar21 + lVar22 * 4) * iVar5 +
                       (*(int *)(lVar20 + lVar22 * 4) + *(int *)(lVar19 + lVar22 * 4)) * iVar7;
              if (iVar29 < -0x7fff) {
                iVar29 = -0x8000;
              }
              if (0x7ffe < iVar29) {
                iVar29 = 0x7fff;
              }
              *(short *)(param_3 + lVar22 * 2) = (short)iVar29;
              lVar22 = lVar22 + 1;
            } while (lVar28 != lVar22);
          }
        }
        else {
          if (iVar29 <= iVar9) {
            lVar22 = (uVar17 & 0xffffffff) << 1;
            uVar1 = uVar17 & 0xffffffff;
            uVar2 = uVar17 & 0xffffffff;
            uVar3 = uVar17 & 0xffffffff;
            uVar17 = uVar17 & 0xffffffff;
            puVar23 = (undefined8 *)(lVar20 + uVar1 * 4);
            puVar24 = (undefined8 *)(lVar21 + uVar2 * 4);
            puVar25 = (undefined8 *)(lVar19 + uVar3 * 4);
            do {
              iVar29 = (int)*puVar25 + iVar6 + (int)*puVar24 * -2 + (int)*puVar23;
              iVar30 = (int)((ulong)*puVar25 >> 0x20) + iVar6 + (int)((ulong)*puVar24 >> 0x20) * -2
                       + (int)((ulong)*puVar23 >> 0x20);
              auVar12._4_4_ = iVar30;
              auVar12._0_4_ = iVar29;
              auVar12._8_4_ = (int)puVar25[1] + iVar6 + (int)puVar24[1] * -2 + (int)puVar23[1];
              auVar12._12_4_ =
                   (int)((ulong)puVar25[1] >> 0x20) + iVar6 + (int)((ulong)puVar24[1] >> 0x20) * -2
                   + (int)((ulong)puVar23[1] >> 0x20);
              uVar13 = NEON_sqxtn(CONCAT44(iVar30,iVar29),auVar12,4);
              *(undefined8 *)(param_3 + lVar22) = uVar13;
              uVar17 = uVar17 + 4;
              lVar22 = lVar22 + 8;
              puVar23 = puVar23 + 2;
              puVar24 = puVar24 + 2;
              puVar25 = puVar25 + 2;
            } while ((long)uVar17 <= lVar27);
          }
          if ((int)uVar17 < iVar18) {
            lVar22 = (long)(int)uVar17;
            do {
              iVar29 = *(int *)(lVar19 + lVar22 * 4) + iVar6 + *(int *)(lVar21 + lVar22 * 4) * -2 +
                       *(int *)(lVar20 + lVar22 * 4);
              if (iVar29 < -0x7fff) {
                iVar29 = -0x8000;
              }
              if (0x7ffe < iVar29) {
                iVar29 = 0x7fff;
              }
              *(short *)(param_3 + lVar22 * 2) = (short)iVar29;
              lVar22 = lVar22 + 1;
            } while (lVar28 != lVar22);
          }
        }
      }
      param_3 = param_3 + param_4;
      param_5 = param_5 + -1;
      plVar26 = plVar26 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b07f64; end: 109b08087;  */

undefined8 * FUN_109b07f64(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25530;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b08088; end: 109b0808b;  */

undefined8 * FUN_109b08088(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25530;
  if (param_1[0x17] != 0) {
    piVar1 = (int *)(param_1[0x17] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x10);
    }
  }
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar5 = 0;
    lVar7 = param_1[0x18];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x84));
  }
  puVar6 = (undefined8 *)param_1[0x19];
  if (puVar6 != param_1 + 0x1a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b0808c; end: 109b0809f;  */

void FUN_109b0808c(void)

{
  FUN_109b07f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b080a0; end: 109b08227;  */

void FUN_109b080a0(long param_1,long *param_2,long param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_5 != 0) {
    piVar11 = *(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0xe0);
    uVar2 = *(uint *)(param_1 + 8);
    iVar7 = (int)param_6;
    do {
      uVar6 = param_1 + 0x78;
      FUN_109b08228(uVar6,param_2,param_3,param_6);
      if ((int)uVar6 <= iVar7 + -4) {
        lVar8 = *param_2;
        uVar6 = uVar6 & 0xffffffff;
        iVar12 = *piVar11;
        do {
          puVar3 = (undefined8 *)(lVar8 + uVar6 * 4);
          uVar18 = puVar3[1];
          uVar17 = *puVar3;
          iVar13 = iVar1 + (int)uVar17 * iVar12;
          iVar14 = iVar1 + (int)((ulong)uVar17 >> 0x20) * iVar12;
          iVar15 = iVar1 + (int)uVar18 * iVar12;
          iVar16 = iVar1 + (int)((ulong)uVar18 >> 0x20) * iVar12;
          if (1 < (int)uVar2) {
            uVar10 = 1;
            do {
              puVar3 = (undefined8 *)(param_2[uVar10] + uVar6 * 4);
              uVar18 = puVar3[1];
              uVar17 = *puVar3;
              iVar4 = piVar11[uVar10];
              iVar13 = iVar13 + (int)uVar17 * iVar4;
              iVar14 = iVar14 + (int)((ulong)uVar17 >> 0x20) * iVar4;
              iVar15 = iVar15 + (int)uVar18 * iVar4;
              iVar16 = iVar16 + (int)((ulong)uVar18 >> 0x20) * iVar4;
              uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
          }
          auVar5._4_4_ = iVar14;
          auVar5._0_4_ = iVar13;
          auVar5._8_4_ = iVar15;
          auVar5._12_4_ = iVar16;
          uVar17 = NEON_sqxtn(CONCAT44(iVar14,iVar13),auVar5,4);
          *(undefined8 *)(param_3 + uVar6 * 2) = uVar17;
          uVar6 = uVar6 + 4;
        } while ((long)uVar6 <= (long)(iVar7 + -4));
      }
      if ((int)uVar6 < iVar7) {
        iVar12 = *piVar11;
        lVar9 = *param_2;
        lVar8 = (long)(int)uVar6;
        do {
          iVar13 = iVar1 + *(int *)(lVar9 + lVar8 * 4) * iVar12;
          if (1 < (int)uVar2) {
            uVar6 = 1;
            do {
              iVar13 = iVar13 + *(int *)(param_2[uVar6] + lVar8 * 4) * piVar11[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
          }
          if (iVar13 < -0x7fff) {
            iVar13 = -0x8000;
          }
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          *(short *)(param_3 + lVar8 * 2) = (short)iVar13;
          lVar8 = lVar8 + 1;
        } while (lVar8 != iVar7);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b08228; end: 109b084bf;  */

ulong FUN_109b08228(byte *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 (*pauVar7) [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  int iVar18;
  int iVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  
  FUN_109ac28d8();
  if (cRam000000011382bd48 == '\x01') {
    pfVar1 = (float *)(*(long *)(param_1 + 0x18) +
                      (long)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + -1) / 2) * 4);
    piVar4 = (int *)param_2[-1];
    piVar6 = (int *)param_2[1];
    fVar2 = *(float *)(param_1 + 4);
    auVar10._0_4_ = (int)fVar2;
    auVar10._4_4_ = (int)fVar2;
    auVar10._8_4_ = (int)fVar2;
    auVar10._12_4_ = (int)fVar2;
    if ((*param_1 & 1) == 0) {
      fVar17 = pfVar1[1];
      if ((ABS(fVar17) == 1.0) && (fVar17 == -pfVar1[-1])) {
        piVar5 = piVar4;
        if (0.0 <= fVar17) {
          piVar5 = piVar6;
          piVar6 = piVar4;
        }
        if (3 < param_4) {
          uVar3 = 0;
          do {
            auVar13._0_4_ = *piVar5 - *piVar6;
            auVar13._4_4_ = piVar5[1] - piVar6[1];
            auVar13._8_4_ = piVar5[2] - piVar6[2];
            auVar13._12_4_ = piVar5[3] - piVar6[3];
            auVar14 = NEON_sqadd(auVar13,auVar10,4);
            uVar12 = NEON_sqxtn(auVar14._0_8_,auVar14,4);
            *param_3 = uVar12;
            uVar3 = uVar3 + 4;
            piVar5 = piVar5 + 4;
            piVar6 = piVar6 + 4;
            param_3 = param_3 + 1;
          } while (uVar3 <= param_4 - 4);
          return uVar3;
        }
      }
      else if (3 < param_4) {
        uVar3 = 0;
        do {
          auVar9._0_4_ = *piVar6 - *piVar4;
          auVar9._4_4_ = piVar6[1] - piVar4[1];
          auVar9._8_4_ = piVar6[2] - piVar4[2];
          auVar9._12_4_ = piVar6[3] - piVar4[3];
          auVar10 = NEON_scvtf(auVar9,4);
          auVar11._0_8_ =
               CONCAT44((int)(fVar2 + auVar10._4_4_ * fVar17),(int)(fVar2 + auVar10._0_4_ * fVar17))
          ;
          auVar11._8_4_ = (int)(fVar2 + auVar10._8_4_ * fVar17);
          auVar11._12_4_ = (int)(fVar2 + auVar10._12_4_ * fVar17);
          uVar12 = NEON_sqxtn(auVar11._0_8_,auVar11,4);
          *param_3 = uVar12;
          uVar3 = uVar3 + 4;
          piVar4 = piVar4 + 4;
          piVar6 = piVar6 + 4;
          param_3 = param_3 + 1;
        } while (uVar3 <= param_4 - 4);
        return uVar3;
      }
    }
    else {
      pauVar7 = (undefined1 (*) [16])*param_2;
      fVar17 = *pfVar1;
      if ((fVar17 == 2.0) && (pfVar1[1] == 1.0)) {
        if (3 < param_4) {
          uVar3 = 0;
          do {
            auVar14 = NEON_sqshl(*pauVar7,1,4);
            auVar15._0_8_ =
                 CONCAT44(piVar4[1] + auVar10._4_4_ + piVar6[1] + auVar14._4_4_,
                          *piVar4 + auVar10._0_4_ + *piVar6 + auVar14._0_4_);
            auVar15._8_4_ = piVar4[2] + auVar10._8_4_ + piVar6[2] + auVar14._8_4_;
            auVar15._12_4_ = piVar4[3] + auVar10._12_4_ + piVar6[3] + auVar14._12_4_;
            uVar12 = NEON_sqxtn(auVar15._0_8_,auVar15,4);
            *param_3 = uVar12;
            uVar3 = uVar3 + 4;
            piVar4 = piVar4 + 4;
            piVar6 = piVar6 + 4;
            pauVar7 = pauVar7 + 1;
            param_3 = param_3 + 1;
          } while (uVar3 <= param_4 - 4);
          return uVar3;
        }
      }
      else if ((fVar17 == -2.0) && (pfVar1[1] == 1.0)) {
        if (3 < param_4) {
          uVar3 = 0;
          do {
            auVar14 = NEON_sqshl(*pauVar7,1,4);
            auVar16._0_8_ =
                 CONCAT44((piVar4[1] + auVar10._4_4_ + piVar6[1]) - auVar14._4_4_,
                          (*piVar4 + auVar10._0_4_ + *piVar6) - auVar14._0_4_);
            auVar16._8_4_ = (piVar4[2] + auVar10._8_4_ + piVar6[2]) - auVar14._8_4_;
            auVar16._12_4_ = (piVar4[3] + auVar10._12_4_ + piVar6[3]) - auVar14._12_4_;
            uVar12 = NEON_sqxtn(auVar16._0_8_,auVar16,4);
            *param_3 = uVar12;
            uVar3 = uVar3 + 4;
            piVar4 = piVar4 + 4;
            piVar6 = piVar6 + 4;
            pauVar7 = pauVar7 + 1;
            param_3 = param_3 + 1;
          } while (uVar3 <= param_4 - 4);
          return uVar3;
        }
      }
      else if ((fVar17 == 10.0) && (pfVar1[1] == 3.0)) {
        if (3 < param_4) {
          uVar3 = 0;
          do {
            iVar18 = (int)*(undefined8 *)piVar6 + *piVar4;
            iVar20 = (int)((ulong)*(undefined8 *)piVar6 >> 0x20) + piVar4[1];
            auVar21._4_4_ = auVar10._4_4_ + *(int *)(*pauVar7 + 4) * 10 + iVar20 * 3;
            auVar21._0_4_ = auVar10._0_4_ + *(int *)*pauVar7 * 10 + iVar18 * 3;
            auVar21._8_4_ =
                 auVar10._8_4_ + *(int *)(*pauVar7 + 8) * 10 +
                 ((int)*(undefined8 *)(piVar6 + 2) + piVar4[2]) * 3;
            auVar21._12_4_ =
                 auVar10._12_4_ + *(int *)(*pauVar7 + 0xc) * 10 +
                 ((int)((ulong)*(undefined8 *)(piVar6 + 2) >> 0x20) + piVar4[3]) * 3;
            uVar12 = NEON_sqxtn(CONCAT44(iVar20,iVar18),auVar21,4);
            *param_3 = uVar12;
            uVar3 = uVar3 + 4;
            piVar4 = piVar4 + 4;
            piVar6 = piVar6 + 4;
            pauVar7 = pauVar7 + 1;
            param_3 = param_3 + 1;
          } while (uVar3 <= param_4 - 4);
          return uVar3;
        }
      }
      else if (3 < param_4) {
        uVar3 = 0;
        fVar8 = pfVar1[1];
        do {
          auVar14._0_4_ = (int)*(undefined8 *)piVar6 + *piVar4;
          auVar14._4_4_ = (int)((ulong)*(undefined8 *)piVar6 >> 0x20) + piVar4[1];
          auVar14._8_4_ = (int)*(undefined8 *)(piVar6 + 2) + piVar4[2];
          auVar14._12_4_ = (int)((ulong)*(undefined8 *)(piVar6 + 2) >> 0x20) + piVar4[3];
          auVar21 = NEON_scvtf(*pauVar7,4);
          auVar10 = NEON_scvtf(auVar14,4);
          auVar19._0_8_ =
               CONCAT44((int)(fVar2 + auVar21._4_4_ * fVar17 + auVar10._4_4_ * fVar8),
                        (int)(fVar2 + auVar21._0_4_ * fVar17 + auVar10._0_4_ * fVar8));
          auVar19._8_4_ = (int)(fVar2 + auVar21._8_4_ * fVar17 + auVar10._8_4_ * fVar8);
          auVar19._12_4_ = (int)(fVar2 + auVar21._12_4_ * fVar17 + auVar10._12_4_ * fVar8);
          uVar12 = NEON_sqxtn(auVar19._0_8_,auVar19,4);
          *param_3 = uVar12;
          uVar3 = uVar3 + 4;
          piVar4 = piVar4 + 4;
          piVar6 = piVar6 + 4;
          pauVar7 = pauVar7 + 1;
          param_3 = param_3 + 1;
        } while (uVar3 <= param_4 - 4);
        return uVar3;
      }
    }
  }
  return 0;
}



/* Entry: 109b084c0; end: 109b084c7;  */

void FUN_109b084c0(void)

{
  return;
}



/* Entry: 109b084c8; end: 109b08503;  */

void FUN_109b084c8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b08500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b08504; end: 109b085ab;  */

undefined8 * FUN_109b08504(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25618;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b085ac; end: 109b08653;  */

undefined8 * FUN_109b085ac(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25618;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b08654; end: 109b086fb;  */

void FUN_109b08654(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25618;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
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
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b086fc; end: 109b08ac3;  */

void FUN_109b086fc(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  
  iVar2 = *(int *)(param_1 + 8);
  pfVar1 = (float *)(*(long *)(param_1 + 0x20) + (long)(iVar2 / 2) * 4);
  fVar20 = *pfVar1;
  if (fVar20 == 2.0) {
    bVar5 = pfVar1[1] == 1.0;
  }
  else {
    bVar5 = false;
  }
  fVar21 = pfVar1[1];
  bVar6 = fVar20 == 0.0;
  if (fVar21 != 1.0 && fVar20 == 0.0) {
    bVar6 = fVar21 == -1.0;
  }
  if (param_5 != 0) {
    uVar3 = *(uint *)(param_1 + 0x78);
    fVar22 = *(float *)(param_1 + 0x74);
    plVar12 = (long *)(param_2 +
                      ((long)((ulong)(uint)(iVar2 - (iVar2 >> 0x1f)) << 0x20) >> 0x21) * 8);
    lVar13 = (long)(int)(param_6 - 4);
    uVar14 = (ulong)param_6;
    puVar17 = (undefined8 *)(param_3 + 8);
    lVar15 = *plVar12;
    do {
      lVar16 = plVar12[1];
      lVar7 = plVar12[-1];
      if ((uVar3 & 1) == 0) {
        if (bVar6) {
          lVar15 = lVar7;
          lVar4 = lVar16;
          if (0.0 <= fVar21) {
            lVar15 = lVar16;
            lVar4 = lVar7;
          }
          if ((int)param_6 < 4) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            puVar9 = (undefined8 *)(lVar4 + 8);
            puVar10 = (undefined8 *)(lVar15 + 8);
            puVar11 = puVar17;
            do {
              puVar11[-1] = CONCAT44(fVar22 + ((float)((ulong)puVar10[-1] >> 0x20) -
                                              (float)((ulong)puVar9[-1] >> 0x20)),
                                     fVar22 + ((float)puVar10[-1] - (float)puVar9[-1]));
              uVar8 = uVar8 + 4;
              *puVar11 = CONCAT44(fVar22 + ((float)((ulong)*puVar10 >> 0x20) -
                                           (float)((ulong)*puVar9 >> 0x20)),
                                  fVar22 + ((float)*puVar10 - (float)*puVar9));
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = puVar11 + 2;
            } while ((long)uVar8 <= lVar13);
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 < (int)param_6) {
            do {
              *(float *)(param_3 + uVar8 * 4) =
                   fVar22 + (*(float *)(lVar15 + uVar8 * 4) - *(float *)(lVar4 + uVar8 * 4));
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
          }
        }
        else {
          if ((int)param_6 < 4) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            puVar9 = (undefined8 *)(lVar7 + 8);
            puVar10 = (undefined8 *)(lVar16 + 8);
            puVar11 = puVar17;
            do {
              puVar11[-1] = CONCAT44(fVar22 + ((float)((ulong)puVar10[-1] >> 0x20) -
                                              (float)((ulong)puVar9[-1] >> 0x20)) * fVar21,
                                     fVar22 + ((float)puVar10[-1] - (float)puVar9[-1]) * fVar21);
              uVar8 = uVar8 + 4;
              *puVar11 = CONCAT44(fVar22 + ((float)((ulong)*puVar10 >> 0x20) -
                                           (float)((ulong)*puVar9 >> 0x20)) * fVar21,
                                  fVar22 + ((float)*puVar10 - (float)*puVar9) * fVar21);
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = puVar11 + 2;
            } while ((long)uVar8 <= lVar13);
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 < (int)param_6) {
            do {
              *(float *)(param_3 + uVar8 * 4) =
                   fVar22 + fVar21 * (*(float *)(lVar16 + uVar8 * 4) - *(float *)(lVar7 + uVar8 * 4)
                                     );
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
          }
        }
      }
      else {
        uVar8 = 0;
        if (bVar5) {
          if (3 < (int)param_6) {
            puVar9 = (undefined8 *)(lVar16 + 8);
            puVar10 = (undefined8 *)(lVar15 + 8);
            puVar11 = (undefined8 *)(lVar7 + 8);
            puVar19 = puVar17;
            do {
              puVar19[-1] = CONCAT44(fVar22 + (float)((ulong)puVar11[-1] >> 0x20) +
                                              (float)((ulong)puVar10[-1] >> 0x20) * 2.0 +
                                              (float)((ulong)puVar9[-1] >> 0x20),
                                     fVar22 + (float)puVar11[-1] + (float)puVar10[-1] * 2.0 +
                                              (float)puVar9[-1]);
              uVar8 = uVar8 + 4;
              *puVar19 = CONCAT44(fVar22 + (float)((ulong)*puVar11 >> 0x20) +
                                           (float)((ulong)*puVar10 >> 0x20) * 2.0 +
                                           (float)((ulong)*puVar9 >> 0x20),
                                  fVar22 + (float)*puVar11 + (float)*puVar10 * 2.0 + (float)*puVar9)
              ;
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = puVar11 + 2;
              puVar19 = puVar19 + 2;
            } while ((long)uVar8 <= lVar13);
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 < (int)param_6) {
            do {
              *(float *)(param_3 + uVar8 * 4) =
                   fVar22 + *(float *)(lVar7 + uVar8 * 4) + *(float *)(lVar15 + uVar8 * 4) * 2.0 +
                            *(float *)(lVar16 + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
          }
        }
        else if (fVar21 != 1.0 || fVar20 != -2.0) {
          if (3 < (int)param_6) {
            puVar9 = (undefined8 *)(lVar15 + 8);
            puVar10 = (undefined8 *)(lVar16 + 8);
            puVar11 = (undefined8 *)(lVar7 + 8);
            puVar19 = puVar17;
            do {
              puVar19[-1] = CONCAT44(fVar22 + (float)((ulong)puVar9[-1] >> 0x20) * fVar20 +
                                              ((float)((ulong)puVar11[-1] >> 0x20) +
                                              (float)((ulong)puVar10[-1] >> 0x20)) * fVar21,
                                     fVar22 + (float)puVar9[-1] * fVar20 +
                                              ((float)puVar11[-1] + (float)puVar10[-1]) * fVar21);
              uVar8 = uVar8 + 4;
              *puVar19 = CONCAT44(fVar22 + (float)((ulong)*puVar9 >> 0x20) * fVar20 +
                                           ((float)((ulong)*puVar11 >> 0x20) +
                                           (float)((ulong)*puVar10 >> 0x20)) * fVar21,
                                  fVar22 + (float)*puVar9 * fVar20 +
                                           ((float)*puVar11 + (float)*puVar10) * fVar21);
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = puVar11 + 2;
              puVar19 = puVar19 + 2;
            } while ((long)uVar8 <= lVar13);
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 < (int)param_6) {
            do {
              *(float *)(param_3 + uVar8 * 4) =
                   fVar22 + fVar20 * *(float *)(lVar15 + uVar8 * 4) +
                            fVar21 * (*(float *)(lVar7 + uVar8 * 4) + *(float *)(lVar16 + uVar8 * 4)
                                     );
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
          }
        }
        else {
          if (3 < (int)param_6) {
            puVar9 = (undefined8 *)(lVar16 + 8);
            puVar10 = (undefined8 *)(lVar15 + 8);
            pdVar18 = (double *)(lVar7 + 8);
            puVar11 = puVar17;
            do {
              dVar23 = pdVar18[-1] -
                       (double)CONCAT44((float)((ulong)puVar10[-1] >> 0x20) * 2.0,
                                        (float)puVar10[-1] * 2.0);
              puVar11[-1] = CONCAT44(fVar22 + (float)((ulong)dVar23 >> 0x20) +
                                              (float)((ulong)puVar9[-1] >> 0x20),
                                     fVar22 + SUB84(dVar23,0) + (float)puVar9[-1]);
              dVar23 = *pdVar18 -
                       (double)CONCAT44((float)((ulong)*puVar10 >> 0x20) * 2.0,(float)*puVar10 * 2.0
                                       );
              uVar8 = uVar8 + 4;
              *puVar11 = CONCAT44(fVar22 + (float)((ulong)dVar23 >> 0x20) +
                                           (float)((ulong)*puVar9 >> 0x20),
                                  fVar22 + SUB84(dVar23,0) + (float)*puVar9);
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              pdVar18 = pdVar18 + 2;
              puVar11 = puVar11 + 2;
            } while ((long)uVar8 <= lVar13);
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 < (int)param_6) {
            do {
              *(float *)(param_3 + uVar8 * 4) =
                   fVar22 + *(float *)(lVar7 + uVar8 * 4) + *(float *)(lVar15 + uVar8 * 4) * -2.0 +
                            *(float *)(lVar16 + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar14 != uVar8);
          }
        }
      }
      param_3 = param_3 + param_4;
      puVar17 = (undefined8 *)((long)puVar17 + (long)param_4);
      param_5 = param_5 + -1;
      plVar12 = plVar12 + 1;
      lVar15 = lVar16;
    } while (param_5 != 0);
  }
  return;
}


