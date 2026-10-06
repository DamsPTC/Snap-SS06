/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b08ac4; end: 109b08b6b;  */

undefined8 * FUN_109b08ac4(undefined8 *param_1)

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



/* Entry: 109b08b6c; end: 109b08c13;  */

void FUN_109b08b6c(undefined8 *param_1)

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



/* Entry: 109b08c14; end: 109b08d07;  */

void FUN_109b08c14(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

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



/* Entry: 109b08d08; end: 109b08d43;  */

void FUN_109b08d08(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b08d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b08d44; end: 109b08d4b;  */

void FUN_109b08d44(void)

{
  return;
}



/* Entry: 109b08d4c; end: 109b08d87;  */

void FUN_109b08d4c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b08d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b08d88; end: 109b08e2f;  */

undefined8 * FUN_109b08d88(undefined8 *param_1)

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



/* Entry: 109b08e30; end: 109b08ed7;  */

void FUN_109b08e30(undefined8 *param_1)

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



/* Entry: 109b08ed8; end: 109b091df;  */

void FUN_109b08ed8(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = iVar4 / 2;
  pfVar1 = (float *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
  fVar12 = *(float *)(param_1 + 0x74);
  plVar9 = (long *)(param_2 + (long)iVar2 * 8);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (param_5 != 0) {
      do {
        if ((int)param_6 < 4) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            fVar13 = fVar12;
            fVar17 = fVar12;
            fVar18 = fVar12;
            fVar19 = fVar12;
            if (1 < iVar4) {
              lVar11 = -8;
              uVar7 = 1;
              do {
                fVar20 = pfVar1[uVar7];
                puVar5 = (undefined8 *)(plVar9[uVar7] + uVar10 * 4);
                uVar22 = puVar5[1];
                uVar21 = *puVar5;
                puVar5 = (undefined8 *)(*(long *)((long)plVar9 + lVar11) + uVar10 * 4);
                uVar24 = puVar5[1];
                uVar23 = *puVar5;
                fVar13 = fVar13 + ((float)uVar21 - (float)uVar23) * fVar20;
                fVar17 = fVar17 + ((float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar23 >> 0x20))
                                  * fVar20;
                fVar18 = fVar18 + ((float)uVar22 - (float)uVar24) * fVar20;
                fVar19 = fVar19 + ((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar24 >> 0x20))
                                  * fVar20;
                uVar7 = uVar7 + 1;
                lVar11 = lVar11 + -8;
              } while (iVar2 + 1 != uVar7);
            }
            auVar14._4_4_ = (int)(long)(float)(int)fVar17;
            auVar14._0_4_ = (int)(long)(float)(int)fVar13;
            auVar14._8_4_ = (int)(long)(float)(int)fVar18;
            auVar14._12_4_ = (int)(long)(float)(int)fVar19;
            auVar15 = NEON_smax(auVar14,ZEXT216(0),4);
            auVar6._8_8_ = 0xff000000ff;
            auVar6._0_8_ = 0xff000000ff;
            auVar15 = NEON_smin(auVar15,auVar6,4);
            *(uint *)(param_3 + uVar10) =
                 CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
            uVar10 = uVar10 + 4;
          } while ((long)uVar10 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar10 < (int)param_6) {
          do {
            fVar13 = fVar12;
            if (1 < iVar4) {
              lVar11 = -8;
              uVar7 = 1;
              do {
                fVar13 = fVar13 + (*(float *)(plVar9[uVar7] + uVar10 * 4) -
                                  *(float *)(*(long *)((long)plVar9 + lVar11) + uVar10 * 4)) *
                                  pfVar1[uVar7];
                uVar7 = uVar7 + 1;
                lVar11 = lVar11 + -8;
              } while (iVar2 + 1 != uVar7);
            }
            uVar3 = (uint)(long)(float)(int)fVar13 &
                    ((int)(uint)(long)(float)(int)fVar13 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar3) {
              uVar3 = 0xff;
            }
            *(char *)(param_3 + uVar10) = (char)uVar3;
            uVar10 = uVar10 + 1;
          } while (uVar10 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar9 = plVar9 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    do {
      if ((int)param_6 < 4) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          fVar19 = *pfVar1;
          lVar11 = uVar10 * 4;
          uVar22 = ((undefined8 *)(*plVar9 + lVar11))[1];
          uVar21 = *(undefined8 *)(*plVar9 + lVar11);
          fVar13 = fVar12 + (float)uVar21 * fVar19;
          fVar17 = fVar12 + (float)((ulong)uVar21 >> 0x20) * fVar19;
          fVar18 = fVar12 + (float)uVar22 * fVar19;
          fVar19 = fVar12 + (float)((ulong)uVar22 >> 0x20) * fVar19;
          if (1 < iVar4) {
            lVar8 = -8;
            uVar7 = 1;
            do {
              fVar20 = pfVar1[uVar7];
              uVar22 = ((undefined8 *)(plVar9[uVar7] + lVar11))[1];
              uVar21 = *(undefined8 *)(plVar9[uVar7] + lVar11);
              puVar5 = (undefined8 *)(*(long *)((long)plVar9 + lVar8) + lVar11);
              uVar24 = puVar5[1];
              uVar23 = *puVar5;
              fVar13 = fVar13 + ((float)uVar21 + (float)uVar23) * fVar20;
              fVar17 = fVar17 + ((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar23 >> 0x20)) *
                                fVar20;
              fVar18 = fVar18 + ((float)uVar22 + (float)uVar24) * fVar20;
              fVar19 = fVar19 + ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) *
                                fVar20;
              uVar7 = uVar7 + 1;
              lVar8 = lVar8 + -8;
            } while (iVar2 + 1 != uVar7);
          }
          auVar16._4_4_ = (int)(long)(float)(int)fVar17;
          auVar16._0_4_ = (int)(long)(float)(int)fVar13;
          auVar16._8_4_ = (int)(long)(float)(int)fVar18;
          auVar16._12_4_ = (int)(long)(float)(int)fVar19;
          auVar16 = NEON_smax(auVar16,ZEXT216(0),4);
          auVar15._8_8_ = 0xff000000ff;
          auVar15._0_8_ = 0xff000000ff;
          auVar15 = NEON_smin(auVar16,auVar15,4);
          *(uint *)(param_3 + uVar10) =
               CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
          uVar10 = uVar10 + 4;
        } while ((long)uVar10 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar10 < (int)param_6) {
        do {
          fVar13 = fVar12 + *(float *)(*plVar9 + uVar10 * 4) * *pfVar1;
          if (1 < iVar4) {
            lVar11 = -8;
            uVar7 = 1;
            do {
              fVar13 = fVar13 + (*(float *)(plVar9[uVar7] + uVar10 * 4) +
                                *(float *)(*(long *)((long)plVar9 + lVar11) + uVar10 * 4)) *
                                pfVar1[uVar7];
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + -8;
            } while (iVar2 + 1 != uVar7);
          }
          uVar3 = (uint)(long)(float)(int)fVar13 &
                  ((int)(uint)(long)(float)(int)fVar13 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          *(char *)(param_3 + uVar10) = (char)uVar3;
          uVar10 = uVar10 + 1;
        } while (uVar10 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar9 = plVar9 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b091e0; end: 109b0921b;  */

void FUN_109b091e0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b09218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0921c; end: 109b092c3;  */

undefined8 * FUN_109b0921c(undefined8 *param_1)

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



/* Entry: 109b092c4; end: 109b0936b;  */

void FUN_109b092c4(undefined8 *param_1)

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



/* Entry: 109b0936c; end: 109b096cb;  */

void FUN_109b0936c(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar15;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar4 = iVar6 / 2;
  pdVar1 = (double *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8);
  dVar13 = *(double *)(param_1 + 0x78);
  plVar10 = (long *)(param_2 + (long)iVar4 * 8);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if (param_5 != 0) {
      lVar7 = (ulong)(iVar4 + 1) << 3;
      do {
        if ((int)param_6 < 4) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            dVar15 = dVar13;
            dVar19 = dVar13;
            dVar20 = dVar13;
            dVar14 = dVar13;
            if (1 < iVar6) {
              lVar12 = -8;
              lVar9 = 8;
              do {
                pdVar2 = (double *)(*(long *)((long)plVar10 + lVar9) + uVar11 * 8);
                pdVar3 = (double *)(*(long *)((long)plVar10 + lVar12) + uVar11 * 8);
                dVar21 = *(double *)((long)pdVar1 + lVar9);
                dVar20 = dVar20 + (*pdVar2 - *pdVar3) * dVar21;
                dVar19 = dVar19 + (pdVar2[1] - pdVar3[1]) * dVar21;
                dVar15 = dVar15 + (pdVar2[2] - pdVar3[2]) * dVar21;
                dVar14 = dVar14 + (pdVar2[3] - pdVar3[3]) * dVar21;
                lVar9 = lVar9 + 8;
                lVar12 = lVar12 + -8;
              } while (lVar7 != lVar9);
            }
            auVar16._4_4_ = (int)(long)(double)(long)dVar19;
            auVar16._0_4_ = (int)(long)(double)(long)dVar20;
            auVar16._8_4_ = (int)(long)(double)(long)dVar15;
            auVar16._12_4_ = (int)(long)(double)(long)dVar14;
            auVar17 = NEON_smax(auVar16,ZEXT216(0),4);
            auVar8._8_8_ = 0xff000000ff;
            auVar8._0_8_ = 0xff000000ff;
            auVar17 = NEON_smin(auVar17,auVar8,4);
            *(uint *)(param_3 + uVar11) =
                 CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
            uVar11 = uVar11 + 4;
          } while ((long)uVar11 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar11 < (int)param_6) {
          do {
            dVar15 = dVar13;
            if (1 < iVar6) {
              lVar12 = -8;
              lVar9 = 8;
              do {
                dVar15 = dVar15 + (*(double *)(*(long *)((long)plVar10 + lVar9) + uVar11 * 8) -
                                  *(double *)(*(long *)((long)plVar10 + lVar12) + uVar11 * 8)) *
                                  *(double *)((long)pdVar1 + lVar9);
                lVar9 = lVar9 + 8;
                lVar12 = lVar12 + -8;
              } while (lVar7 != lVar9);
            }
            uVar5 = (uint)(long)(double)(long)dVar15 &
                    ((int)(uint)(long)(double)(long)dVar15 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            *(char *)(param_3 + uVar11) = (char)uVar5;
            uVar11 = uVar11 + 1;
          } while (uVar11 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar10 = plVar10 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    lVar7 = (ulong)(iVar4 + 1) << 3;
    do {
      if ((int)param_6 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          dVar20 = *pdVar1;
          pdVar2 = (double *)(*plVar10 + uVar11 * 8);
          dVar19 = dVar13 + *pdVar2 * dVar20;
          dVar15 = dVar13 + pdVar2[1] * dVar20;
          dVar14 = dVar13 + pdVar2[2] * dVar20;
          dVar20 = dVar13 + pdVar2[3] * dVar20;
          if (1 < iVar6) {
            lVar12 = -8;
            lVar9 = 8;
            do {
              pdVar2 = (double *)(*(long *)((long)plVar10 + lVar9) + uVar11 * 8);
              pdVar3 = (double *)(*(long *)((long)plVar10 + lVar12) + uVar11 * 8);
              dVar21 = *(double *)((long)pdVar1 + lVar9);
              dVar19 = dVar19 + (*pdVar2 + *pdVar3) * dVar21;
              dVar15 = dVar15 + (pdVar2[1] + pdVar3[1]) * dVar21;
              dVar14 = dVar14 + (pdVar2[2] + pdVar3[2]) * dVar21;
              dVar20 = dVar20 + (pdVar2[3] + pdVar3[3]) * dVar21;
              lVar9 = lVar9 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar7 != lVar9);
          }
          auVar18._4_4_ = (int)(long)(double)(long)dVar15;
          auVar18._0_4_ = (int)(long)(double)(long)dVar19;
          auVar18._8_4_ = (int)(long)(double)(long)dVar14;
          auVar18._12_4_ = (int)(long)(double)(long)dVar20;
          auVar18 = NEON_smax(auVar18,ZEXT216(0),4);
          auVar17._8_8_ = 0xff000000ff;
          auVar17._0_8_ = 0xff000000ff;
          auVar17 = NEON_smin(auVar18,auVar17,4);
          *(uint *)(param_3 + uVar11) =
               CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
          uVar11 = uVar11 + 4;
        } while ((long)uVar11 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar11 < (int)param_6) {
        do {
          dVar15 = dVar13 + *(double *)(*plVar10 + uVar11 * 8) * *pdVar1;
          if (1 < iVar6) {
            lVar12 = -8;
            lVar9 = 8;
            do {
              dVar15 = dVar15 + (*(double *)(*(long *)((long)plVar10 + lVar9) + uVar11 * 8) +
                                *(double *)(*(long *)((long)plVar10 + lVar12) + uVar11 * 8)) *
                                *(double *)((long)pdVar1 + lVar9);
              lVar9 = lVar9 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar7 != lVar9);
          }
          uVar5 = (uint)(long)(double)(long)dVar15 &
                  ((int)(uint)(long)(double)(long)dVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar5) {
            uVar5 = 0xff;
          }
          *(char *)(param_3 + uVar11) = (char)uVar5;
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar10 = plVar10 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b096cc; end: 109b09707;  */

void FUN_109b096cc(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b09704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b09708; end: 109b097af;  */

undefined8 * FUN_109b09708(undefined8 *param_1)

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



/* Entry: 109b097b0; end: 109b09857;  */

void FUN_109b097b0(undefined8 *param_1)

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



/* Entry: 109b09858; end: 109b09b3f;  */

void FUN_109b09858(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = iVar4 / 2;
  pfVar1 = (float *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
  fVar14 = *(float *)(param_1 + 0x74);
  plVar11 = (long *)(param_2 + (long)iVar2 * 8);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (param_5 != 0) {
      do {
        if ((int)param_6 < 4) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            fVar15 = fVar14;
            fVar16 = fVar14;
            fVar17 = fVar14;
            fVar18 = fVar14;
            if (1 < iVar4) {
              lVar13 = -8;
              uVar8 = 1;
              do {
                fVar19 = pfVar1[uVar8];
                puVar5 = (undefined8 *)(plVar11[uVar8] + uVar12 * 4);
                uVar22 = puVar5[1];
                uVar21 = *puVar5;
                puVar5 = (undefined8 *)(*(long *)((long)plVar11 + lVar13) + uVar12 * 4);
                uVar24 = puVar5[1];
                uVar23 = *puVar5;
                fVar15 = fVar15 + ((float)uVar21 - (float)uVar23) * fVar19;
                fVar16 = fVar16 + ((float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar23 >> 0x20))
                                  * fVar19;
                fVar17 = fVar17 + ((float)uVar22 - (float)uVar24) * fVar19;
                fVar18 = fVar18 + ((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar24 >> 0x20))
                                  * fVar19;
                uVar8 = uVar8 + 1;
                lVar13 = lVar13 + -8;
              } while (iVar2 + 1 != uVar8);
            }
            auVar6._4_4_ = (int)(long)(float)(int)fVar16;
            auVar6._0_4_ = (int)(long)(float)(int)fVar15;
            auVar6._8_4_ = (int)(long)(float)(int)fVar17;
            auVar6._12_4_ = (int)(long)(float)(int)fVar18;
            uVar21 = NEON_sqxtun(CONCAT44((int)(long)(float)(int)fVar16,
                                          (int)(long)(float)(int)fVar15),auVar6,4);
            *(undefined8 *)(param_3 + uVar12 * 2) = uVar21;
            uVar12 = uVar12 + 4;
          } while ((long)uVar12 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar12 < (int)param_6) {
          do {
            fVar15 = fVar14;
            if (1 < iVar4) {
              lVar13 = -8;
              uVar8 = 1;
              do {
                fVar15 = fVar15 + (*(float *)(plVar11[uVar8] + uVar12 * 4) -
                                  *(float *)(*(long *)((long)plVar11 + lVar13) + uVar12 * 4)) *
                                  pfVar1[uVar8];
                uVar8 = uVar8 + 1;
                lVar13 = lVar13 + -8;
              } while (iVar2 + 1 != uVar8);
            }
            uVar3 = (uint)(long)(float)(int)fVar15 &
                    ((int)(uint)(long)(float)(int)fVar15 >> 0x1f ^ 0xffffffffU);
            if (0xfffe < (int)uVar3) {
              uVar3 = 0xffff;
            }
            *(short *)(param_3 + uVar12 * 2) = (short)uVar3;
            uVar12 = uVar12 + 1;
          } while (uVar12 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar11 = plVar11 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    do {
      if ((int)param_6 < 4) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        lVar13 = *plVar11;
        fVar15 = *pfVar1;
        do {
          lVar9 = uVar12 * 4;
          uVar22 = ((undefined8 *)(lVar13 + lVar9))[1];
          uVar21 = *(undefined8 *)(lVar13 + lVar9);
          fVar16 = fVar14 + (float)uVar21 * fVar15;
          fVar17 = fVar14 + (float)((ulong)uVar21 >> 0x20) * fVar15;
          fVar18 = fVar14 + (float)uVar22 * fVar15;
          fVar19 = fVar14 + (float)((ulong)uVar22 >> 0x20) * fVar15;
          if (1 < iVar4) {
            lVar10 = -8;
            uVar8 = 1;
            do {
              fVar20 = pfVar1[uVar8];
              uVar22 = ((undefined8 *)(plVar11[uVar8] + lVar9))[1];
              uVar21 = *(undefined8 *)(plVar11[uVar8] + lVar9);
              puVar5 = (undefined8 *)(*(long *)((long)plVar11 + lVar10) + lVar9);
              uVar24 = puVar5[1];
              uVar23 = *puVar5;
              fVar16 = fVar16 + ((float)uVar21 + (float)uVar23) * fVar20;
              fVar17 = fVar17 + ((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar23 >> 0x20)) *
                                fVar20;
              fVar18 = fVar18 + ((float)uVar22 + (float)uVar24) * fVar20;
              fVar19 = fVar19 + ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) *
                                fVar20;
              uVar8 = uVar8 + 1;
              lVar10 = lVar10 + -8;
            } while (iVar2 + 1 != uVar8);
          }
          auVar7._4_4_ = (int)(long)(float)(int)fVar17;
          auVar7._0_4_ = (int)(long)(float)(int)fVar16;
          auVar7._8_4_ = (int)(long)(float)(int)fVar18;
          auVar7._12_4_ = (int)(long)(float)(int)fVar19;
          uVar21 = NEON_sqxtun(CONCAT44((int)(long)(float)(int)fVar17,(int)(long)(float)(int)fVar16)
                               ,auVar7,4);
          *(undefined8 *)(param_3 + uVar12 * 2) = uVar21;
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar12 < (int)param_6) {
        fVar15 = *pfVar1;
        lVar13 = *plVar11;
        do {
          fVar16 = fVar14 + *(float *)(lVar13 + uVar12 * 4) * fVar15;
          if (1 < iVar4) {
            lVar9 = -8;
            uVar8 = 1;
            do {
              fVar16 = fVar16 + (*(float *)(plVar11[uVar8] + uVar12 * 4) +
                                *(float *)(*(long *)((long)plVar11 + lVar9) + uVar12 * 4)) *
                                pfVar1[uVar8];
              uVar8 = uVar8 + 1;
              lVar9 = lVar9 + -8;
            } while (iVar2 + 1 != uVar8);
          }
          uVar3 = (uint)(long)(float)(int)fVar16 &
                  ((int)(uint)(long)(float)(int)fVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar3) {
            uVar3 = 0xffff;
          }
          *(short *)(param_3 + uVar12 * 2) = (short)uVar3;
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar11 = plVar11 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b09b40; end: 109b09b7b;  */

void FUN_109b09b40(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b09b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b09b7c; end: 109b09c23;  */

undefined8 * FUN_109b09b7c(undefined8 *param_1)

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



/* Entry: 109b09c24; end: 109b09ccb;  */

void FUN_109b09c24(undefined8 *param_1)

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



/* Entry: 109b09ccc; end: 109b0a00b;  */

void FUN_109b09ccc(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar4 = iVar6 / 2;
  pdVar1 = (double *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8);
  dVar18 = *(double *)(param_1 + 0x78);
  plVar15 = (long *)(param_2 + (long)iVar4 * 8);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if (param_5 != 0) {
      lVar7 = (ulong)(iVar4 + 1) << 3;
      do {
        if ((int)param_6 < 4) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            dVar19 = dVar18;
            dVar20 = dVar18;
            dVar12 = dVar18;
            dVar10 = dVar18;
            if (1 < iVar6) {
              lVar17 = -8;
              lVar13 = 8;
              do {
                pdVar2 = (double *)(*(long *)((long)plVar15 + lVar13) + uVar16 * 8);
                pdVar3 = (double *)(*(long *)((long)plVar15 + lVar17) + uVar16 * 8);
                dVar21 = *(double *)((long)pdVar1 + lVar13);
                dVar20 = dVar20 + (*pdVar2 - *pdVar3) * dVar21;
                dVar19 = dVar19 + (pdVar2[1] - pdVar3[1]) * dVar21;
                dVar12 = dVar12 + (pdVar2[2] - pdVar3[2]) * dVar21;
                dVar10 = dVar10 + (pdVar2[3] - pdVar3[3]) * dVar21;
                lVar13 = lVar13 + 8;
                lVar17 = lVar17 + -8;
              } while (lVar7 != lVar13);
            }
            auVar8._4_4_ = (int)(long)(double)(long)dVar19;
            auVar8._0_4_ = (int)(long)(double)(long)dVar20;
            auVar8._8_4_ = (int)(long)(double)(long)dVar12;
            auVar8._12_4_ = (int)(long)(double)(long)dVar10;
            uVar9 = NEON_sqxtun(CONCAT44((int)(long)(double)(long)dVar19,
                                         (int)(long)(double)(long)dVar20),auVar8,4);
            *(undefined8 *)(param_3 + uVar16 * 2) = uVar9;
            uVar16 = uVar16 + 4;
          } while ((long)uVar16 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar16 < (int)param_6) {
          do {
            dVar10 = dVar18;
            if (1 < iVar6) {
              lVar17 = -8;
              lVar13 = 8;
              do {
                dVar10 = dVar10 + (*(double *)(*(long *)((long)plVar15 + lVar13) + uVar16 * 8) -
                                  *(double *)(*(long *)((long)plVar15 + lVar17) + uVar16 * 8)) *
                                  *(double *)((long)pdVar1 + lVar13);
                lVar13 = lVar13 + 8;
                lVar17 = lVar17 + -8;
              } while (lVar7 != lVar13);
            }
            uVar5 = (uint)(long)(double)(long)dVar10 &
                    ((int)(uint)(long)(double)(long)dVar10 >> 0x1f ^ 0xffffffffU);
            if (0xfffe < (int)uVar5) {
              uVar5 = 0xffff;
            }
            *(short *)(param_3 + uVar16 * 2) = (short)uVar5;
            uVar16 = uVar16 + 1;
          } while (uVar16 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar15 = plVar15 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    lVar7 = (ulong)(iVar4 + 1) << 3;
    do {
      if ((int)param_6 < 4) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        dVar10 = *pdVar1;
        lVar13 = *plVar15;
        do {
          pdVar2 = (double *)(lVar13 + uVar16 * 8);
          dVar20 = dVar18 + *pdVar2 * dVar10;
          dVar12 = dVar18 + pdVar2[1] * dVar10;
          dVar21 = dVar18 + pdVar2[2] * dVar10;
          dVar19 = dVar18 + pdVar2[3] * dVar10;
          if (1 < iVar6) {
            lVar14 = -8;
            lVar17 = 8;
            do {
              pdVar2 = (double *)(*(long *)((long)plVar15 + lVar17) + uVar16 * 8);
              pdVar3 = (double *)(*(long *)((long)plVar15 + lVar14) + uVar16 * 8);
              dVar22 = *(double *)((long)pdVar1 + lVar17);
              dVar20 = dVar20 + (*pdVar2 + *pdVar3) * dVar22;
              dVar12 = dVar12 + (pdVar2[1] + pdVar3[1]) * dVar22;
              dVar21 = dVar21 + (pdVar2[2] + pdVar3[2]) * dVar22;
              dVar19 = dVar19 + (pdVar2[3] + pdVar3[3]) * dVar22;
              lVar17 = lVar17 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar7 != lVar17);
          }
          auVar11._4_4_ = (int)(long)(double)(long)dVar12;
          auVar11._0_4_ = (int)(long)(double)(long)dVar20;
          auVar11._8_4_ = (int)(long)(double)(long)dVar21;
          auVar11._12_4_ = (int)(long)(double)(long)dVar19;
          uVar9 = NEON_sqxtun(CONCAT44((int)(long)(double)(long)dVar12,
                                       (int)(long)(double)(long)dVar20),auVar11,4);
          *(undefined8 *)(param_3 + uVar16 * 2) = uVar9;
          uVar16 = uVar16 + 4;
        } while ((long)uVar16 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar16 < (int)param_6) {
        dVar10 = *pdVar1;
        lVar13 = *plVar15;
        do {
          dVar12 = dVar18 + *(double *)(lVar13 + uVar16 * 8) * dVar10;
          if (1 < iVar6) {
            lVar14 = -8;
            lVar17 = 8;
            do {
              dVar12 = dVar12 + (*(double *)(*(long *)((long)plVar15 + lVar17) + uVar16 * 8) +
                                *(double *)(*(long *)((long)plVar15 + lVar14) + uVar16 * 8)) *
                                *(double *)((long)pdVar1 + lVar17);
              lVar17 = lVar17 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar7 != lVar17);
          }
          uVar5 = (uint)(long)(double)(long)dVar12 &
                  ((int)(uint)(long)(double)(long)dVar12 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar5) {
            uVar5 = 0xffff;
          }
          *(short *)(param_3 + uVar16 * 2) = (short)uVar5;
          uVar16 = uVar16 + 1;
        } while (uVar16 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar15 = plVar15 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0a00c; end: 109b0a047;  */

void FUN_109b0a00c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0a044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0a048; end: 109b0a09b;  */

long * FUN_109b0a048(long *param_1)

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



/* Entry: 109b0a09c; end: 109b0a143;  */

undefined8 * FUN_109b0a09c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25948;
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



/* Entry: 109b0a144; end: 109b0a1eb;  */

undefined8 * FUN_109b0a144(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25948;
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



/* Entry: 109b0a1ec; end: 109b0a293;  */

void FUN_109b0a1ec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25948;
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



/* Entry: 109b0a294; end: 109b0a513;  */

void FUN_109b0a294(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = iVar3 / 2;
  piVar1 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
  iVar4 = *(int *)(param_1 + 0x74);
  plVar14 = (long *)(param_2 + (long)iVar2 * 8);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (param_5 != 0) {
      do {
        if ((int)param_6 < 4) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          do {
            iVar15 = iVar4;
            iVar16 = iVar4;
            iVar17 = iVar4;
            iVar18 = iVar4;
            if (1 < iVar3) {
              lVar10 = -8;
              uVar11 = 1;
              do {
                puVar5 = (undefined8 *)(plVar14[uVar11] + uVar9 * 4);
                uVar23 = puVar5[1];
                uVar21 = *puVar5;
                puVar5 = (undefined8 *)(*(long *)((long)plVar14 + lVar10) + uVar9 * 4);
                uVar22 = puVar5[1];
                uVar20 = *puVar5;
                iVar19 = piVar1[uVar11];
                iVar15 = iVar15 + ((int)uVar21 - (int)uVar20) * iVar19;
                iVar16 = iVar16 + ((int)((ulong)uVar21 >> 0x20) - (int)((ulong)uVar20 >> 0x20)) *
                                  iVar19;
                iVar17 = iVar17 + ((int)uVar23 - (int)uVar22) * iVar19;
                iVar18 = iVar18 + ((int)((ulong)uVar23 >> 0x20) - (int)((ulong)uVar22 >> 0x20)) *
                                  iVar19;
                uVar11 = uVar11 + 1;
                lVar10 = lVar10 + -8;
              } while (iVar2 + 1 != uVar11);
            }
            auVar7._4_4_ = iVar16;
            auVar7._0_4_ = iVar15;
            auVar7._8_4_ = iVar17;
            auVar7._12_4_ = iVar18;
            uVar21 = NEON_sqxtn(CONCAT44(iVar16,iVar15),auVar7,4);
            *(undefined8 *)(param_3 + uVar9 * 2) = uVar21;
            uVar9 = uVar9 + 4;
          } while ((long)uVar9 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar9 < (int)param_6) {
          do {
            iVar15 = iVar4;
            if (1 < iVar3) {
              lVar10 = -8;
              uVar11 = 1;
              do {
                iVar15 = iVar15 + (*(int *)(plVar14[uVar11] + uVar9 * 4) -
                                  *(int *)(*(long *)((long)plVar14 + lVar10) + uVar9 * 4)) *
                                  piVar1[uVar11];
                uVar11 = uVar11 + 1;
                lVar10 = lVar10 + -8;
              } while (iVar2 + 1 != uVar11);
            }
            if (iVar15 < -0x7fff) {
              iVar15 = -0x8000;
            }
            if (0x7ffe < iVar15) {
              iVar15 = 0x7fff;
            }
            *(short *)(param_3 + uVar9 * 2) = (short)iVar15;
            uVar9 = uVar9 + 1;
          } while (uVar9 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar14 = plVar14 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    do {
      if ((int)param_6 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        lVar10 = *plVar14;
        iVar15 = *piVar1;
        do {
          lVar13 = uVar9 * 4;
          uVar23 = ((undefined8 *)(lVar10 + lVar13))[1];
          uVar21 = *(undefined8 *)(lVar10 + lVar13);
          iVar16 = iVar4 + (int)uVar21 * iVar15;
          iVar17 = iVar4 + (int)((ulong)uVar21 >> 0x20) * iVar15;
          iVar18 = iVar4 + (int)uVar23 * iVar15;
          iVar19 = iVar4 + (int)((ulong)uVar23 >> 0x20) * iVar15;
          if (1 < iVar3) {
            lVar12 = -8;
            uVar11 = 1;
            do {
              uVar23 = ((undefined8 *)(plVar14[uVar11] + lVar13))[1];
              uVar21 = *(undefined8 *)(plVar14[uVar11] + lVar13);
              puVar5 = (undefined8 *)(*(long *)((long)plVar14 + lVar12) + lVar13);
              uVar22 = puVar5[1];
              uVar20 = *puVar5;
              iVar6 = piVar1[uVar11];
              iVar16 = iVar16 + ((int)uVar20 + (int)uVar21) * iVar6;
              iVar17 = iVar17 + ((int)((ulong)uVar20 >> 0x20) + (int)((ulong)uVar21 >> 0x20)) *
                                iVar6;
              iVar18 = iVar18 + ((int)uVar22 + (int)uVar23) * iVar6;
              iVar19 = iVar19 + ((int)((ulong)uVar22 >> 0x20) + (int)((ulong)uVar23 >> 0x20)) *
                                iVar6;
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + -8;
            } while (iVar2 + 1 != uVar11);
          }
          auVar8._4_4_ = iVar17;
          auVar8._0_4_ = iVar16;
          auVar8._8_4_ = iVar18;
          auVar8._12_4_ = iVar19;
          uVar21 = NEON_sqxtn(CONCAT44(iVar17,iVar16),auVar8,4);
          *(undefined8 *)(param_3 + uVar9 * 2) = uVar21;
          uVar9 = uVar9 + 4;
        } while ((long)uVar9 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar9 < (int)param_6) {
        iVar15 = *piVar1;
        lVar10 = *plVar14;
        do {
          iVar16 = iVar4 + *(int *)(lVar10 + uVar9 * 4) * iVar15;
          if (1 < iVar3) {
            lVar13 = -8;
            uVar11 = 1;
            do {
              iVar16 = iVar16 + (*(int *)(*(long *)((long)plVar14 + lVar13) + uVar9 * 4) +
                                *(int *)(plVar14[uVar11] + uVar9 * 4)) * piVar1[uVar11];
              uVar11 = uVar11 + 1;
              lVar13 = lVar13 + -8;
            } while (iVar2 + 1 != uVar11);
          }
          if (iVar16 < -0x7fff) {
            iVar16 = -0x8000;
          }
          if (0x7ffe < iVar16) {
            iVar16 = 0x7fff;
          }
          *(short *)(param_3 + uVar9 * 2) = (short)iVar16;
          uVar9 = uVar9 + 1;
        } while (uVar9 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar14 = plVar14 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0a514; end: 109b0a5bb;  */

undefined8 * FUN_109b0a514(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25948;
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



/* Entry: 109b0a5bc; end: 109b0a663;  */

void FUN_109b0a5bc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25948;
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



/* Entry: 109b0a664; end: 109b0a77b;  */

void FUN_109b0a664(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_5 != 0) {
    piVar8 = *(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x74);
    uVar2 = *(uint *)(param_1 + 8);
    do {
      if ((int)param_6 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        lVar6 = *param_2;
        iVar10 = *piVar8;
        do {
          puVar3 = (undefined8 *)(lVar6 + uVar9 * 4);
          uVar16 = puVar3[1];
          uVar15 = *puVar3;
          iVar11 = iVar1 + (int)uVar15 * iVar10;
          iVar12 = iVar1 + (int)((ulong)uVar15 >> 0x20) * iVar10;
          iVar13 = iVar1 + (int)uVar16 * iVar10;
          iVar14 = iVar1 + (int)((ulong)uVar16 >> 0x20) * iVar10;
          if (1 < (int)uVar2) {
            uVar7 = 1;
            do {
              puVar3 = (undefined8 *)(param_2[uVar7] + uVar9 * 4);
              uVar16 = puVar3[1];
              uVar15 = *puVar3;
              iVar4 = piVar8[uVar7];
              iVar11 = iVar11 + (int)uVar15 * iVar4;
              iVar12 = iVar12 + (int)((ulong)uVar15 >> 0x20) * iVar4;
              iVar13 = iVar13 + (int)uVar16 * iVar4;
              iVar14 = iVar14 + (int)((ulong)uVar16 >> 0x20) * iVar4;
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
          auVar5._4_4_ = iVar12;
          auVar5._0_4_ = iVar11;
          auVar5._8_4_ = iVar13;
          auVar5._12_4_ = iVar14;
          uVar15 = NEON_sqxtn(CONCAT44(iVar12,iVar11),auVar5,4);
          *(undefined8 *)(param_3 + uVar9 * 2) = uVar15;
          uVar9 = uVar9 + 4;
        } while ((long)uVar9 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar9 < (int)param_6) {
        iVar10 = *piVar8;
        lVar6 = *param_2;
        do {
          iVar11 = iVar1 + *(int *)(lVar6 + uVar9 * 4) * iVar10;
          if (1 < (int)uVar2) {
            uVar7 = 1;
            do {
              iVar11 = iVar11 + *(int *)(param_2[uVar7] + uVar9 * 4) * piVar8[uVar7];
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
          if (iVar11 < -0x7fff) {
            iVar11 = -0x8000;
          }
          if (0x7ffe < iVar11) {
            iVar11 = 0x7fff;
          }
          *(short *)(param_3 + uVar9 * 2) = (short)iVar11;
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



/* Entry: 109b0a77c; end: 109b0a783;  */

void FUN_109b0a77c(void)

{
  return;
}



/* Entry: 109b0a784; end: 109b0a7bf;  */

void FUN_109b0a784(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0a7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0a7c0; end: 109b0a813;  */

long * FUN_109b0a7c0(long *param_1)

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



/* Entry: 109b0a814; end: 109b0a937;  */

undefined8 * FUN_109b0a814(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25a18;
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



/* Entry: 109b0a938; end: 109b0a93b;  */

undefined8 * FUN_109b0a938(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25a18;
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



/* Entry: 109b0a93c; end: 109b0a94f;  */

void FUN_109b0a93c(void)

{
  FUN_109b0a814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b0a950; end: 109b0ace3;  */

void FUN_109b0a950(long param_1,long param_2,long param_3,int param_4,int param_5,undefined8 param_6
                  )

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = iVar3 / 2;
  pfVar1 = (float *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
  fVar15 = *(float *)(param_1 + 0xe8);
  plVar14 = (long *)(param_2 + (long)iVar2 * 8);
  iVar8 = (int)param_6;
  if ((*(byte *)(param_1 + 0xec) & 1) == 0) {
    if (param_5 != 0) {
      do {
        lVar7 = param_1 + 0x78;
        FUN_109b0aecc(lVar7,plVar14,param_3,param_6);
        if ((int)lVar7 <= iVar8 + -4) {
          lVar7 = (long)(int)lVar7;
          do {
            fVar16 = fVar15;
            fVar17 = fVar15;
            fVar18 = fVar15;
            fVar19 = fVar15;
            if (1 < iVar3) {
              lVar9 = -8;
              uVar11 = 1;
              do {
                fVar20 = pfVar1[uVar11];
                puVar4 = (undefined8 *)(plVar14[uVar11] + lVar7 * 4);
                uVar23 = puVar4[1];
                uVar22 = *puVar4;
                puVar4 = (undefined8 *)(*(long *)((long)plVar14 + lVar9) + lVar7 * 4);
                uVar25 = puVar4[1];
                uVar24 = *puVar4;
                fVar16 = fVar16 + ((float)uVar22 - (float)uVar24) * fVar20;
                fVar17 = fVar17 + ((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar24 >> 0x20))
                                  * fVar20;
                fVar18 = fVar18 + ((float)uVar23 - (float)uVar25) * fVar20;
                fVar19 = fVar19 + ((float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar25 >> 0x20))
                                  * fVar20;
                uVar11 = uVar11 + 1;
                lVar9 = lVar9 + -8;
              } while (iVar2 + 1 != uVar11);
            }
            auVar5._4_4_ = (int)(long)(float)(int)fVar17;
            auVar5._0_4_ = (int)(long)(float)(int)fVar16;
            auVar5._8_4_ = (int)(long)(float)(int)fVar18;
            auVar5._12_4_ = (int)(long)(float)(int)fVar19;
            uVar22 = NEON_sqxtn(CONCAT44((int)(long)(float)(int)fVar17,(int)(long)(float)(int)fVar16
                                        ),auVar5,4);
            *(undefined8 *)(param_3 + lVar7 * 2) = uVar22;
            lVar7 = lVar7 + 4;
          } while (lVar7 <= iVar8 + -4);
        }
        if ((int)lVar7 < iVar8) {
          lVar7 = (long)(int)lVar7;
          do {
            fVar16 = fVar15;
            if (1 < iVar3) {
              lVar9 = -8;
              uVar11 = 1;
              do {
                fVar16 = fVar16 + (*(float *)(plVar14[uVar11] + lVar7 * 4) -
                                  *(float *)(*(long *)((long)plVar14 + lVar9) + lVar7 * 4)) *
                                  pfVar1[uVar11];
                uVar11 = uVar11 + 1;
                lVar9 = lVar9 + -8;
              } while (iVar2 + 1 != uVar11);
            }
            iVar10 = (int)(long)(float)(int)fVar16;
            if (iVar10 < -0x7fff) {
              iVar10 = -0x8000;
            }
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            *(short *)(param_3 + lVar7 * 2) = (short)iVar10;
            lVar7 = lVar7 + 1;
          } while (lVar7 != iVar8);
        }
        param_3 = param_3 + param_4;
        plVar14 = plVar14 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    do {
      lVar7 = param_1 + 0x78;
      FUN_109b0aecc(lVar7,plVar14,param_3,param_6);
      if ((int)lVar7 <= iVar8 + -4) {
        lVar9 = *plVar14;
        lVar7 = (long)(int)lVar7;
        fVar16 = *pfVar1;
        do {
          lVar12 = lVar7 * 4;
          uVar23 = ((undefined8 *)(lVar9 + lVar12))[1];
          uVar22 = *(undefined8 *)(lVar9 + lVar12);
          fVar17 = fVar15 + (float)uVar22 * fVar16;
          fVar18 = fVar15 + (float)((ulong)uVar22 >> 0x20) * fVar16;
          fVar19 = fVar15 + (float)uVar23 * fVar16;
          fVar20 = fVar15 + (float)((ulong)uVar23 >> 0x20) * fVar16;
          if (1 < iVar3) {
            lVar13 = -8;
            uVar11 = 1;
            do {
              fVar21 = pfVar1[uVar11];
              uVar23 = ((undefined8 *)(plVar14[uVar11] + lVar12))[1];
              uVar22 = *(undefined8 *)(plVar14[uVar11] + lVar12);
              puVar4 = (undefined8 *)(*(long *)((long)plVar14 + lVar13) + lVar12);
              uVar25 = puVar4[1];
              uVar24 = *puVar4;
              fVar17 = fVar17 + ((float)uVar22 + (float)uVar24) * fVar21;
              fVar18 = fVar18 + ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) *
                                fVar21;
              fVar19 = fVar19 + ((float)uVar23 + (float)uVar25) * fVar21;
              fVar20 = fVar20 + ((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar25 >> 0x20)) *
                                fVar21;
              uVar11 = uVar11 + 1;
              lVar13 = lVar13 + -8;
            } while (iVar2 + 1 != uVar11);
          }
          auVar6._4_4_ = (int)(long)(float)(int)fVar18;
          auVar6._0_4_ = (int)(long)(float)(int)fVar17;
          auVar6._8_4_ = (int)(long)(float)(int)fVar19;
          auVar6._12_4_ = (int)(long)(float)(int)fVar20;
          uVar22 = NEON_sqxtn(CONCAT44((int)(long)(float)(int)fVar18,(int)(long)(float)(int)fVar17),
                              auVar6,4);
          *(undefined8 *)(param_3 + lVar7 * 2) = uVar22;
          lVar7 = lVar7 + 4;
        } while (lVar7 <= iVar8 + -4);
      }
      if ((int)lVar7 < iVar8) {
        fVar16 = *pfVar1;
        lVar9 = *plVar14;
        lVar7 = (long)(int)lVar7;
        do {
          fVar17 = fVar15 + *(float *)(lVar9 + lVar7 * 4) * fVar16;
          if (1 < iVar3) {
            lVar12 = -8;
            uVar11 = 1;
            do {
              fVar17 = fVar17 + (*(float *)(plVar14[uVar11] + lVar7 * 4) +
                                *(float *)(*(long *)((long)plVar14 + lVar12) + lVar7 * 4)) *
                                pfVar1[uVar11];
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + -8;
            } while (iVar2 + 1 != uVar11);
          }
          iVar10 = (int)(long)(float)(int)fVar17;
          if (iVar10 < -0x7fff) {
            iVar10 = -0x8000;
          }
          if (0x7ffe < iVar10) {
            iVar10 = 0x7fff;
          }
          *(short *)(param_3 + lVar7 * 2) = (short)iVar10;
          lVar7 = lVar7 + 1;
        } while (lVar7 != iVar8);
      }
      param_3 = param_3 + param_4;
      plVar14 = plVar14 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0ace4; end: 109b0ace7;  */

undefined8 * FUN_109b0ace4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b25a18;
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



/* Entry: 109b0ace8; end: 109b0acfb;  */

void FUN_109b0ace8(void)

{
  FUN_109b0a814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b0acfc; end: 109b0aecb;  */

void FUN_109b0acfc(long param_1,long *param_2,long param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  iVar5 = (int)param_6;
  if (param_5 != 0) {
    pfVar9 = *(float **)(param_1 + 0x20);
    fVar18 = *(float *)(param_1 + 0xe8);
    uVar1 = *(uint *)(param_1 + 8);
    do {
      lVar4 = param_1 + 0x78;
      FUN_109b0aecc(lVar4,param_2,param_3,param_6);
      if ((int)lVar4 <= iVar5 + -4) {
        lVar6 = *param_2;
        lVar4 = (long)(int)lVar4;
        fVar10 = *pfVar9;
        do {
          puVar2 = (undefined8 *)(lVar6 + lVar4 * 4);
          uVar17 = puVar2[1];
          uVar16 = *puVar2;
          fVar11 = fVar18 + (float)uVar16 * fVar10;
          fVar12 = fVar18 + (float)((ulong)uVar16 >> 0x20) * fVar10;
          fVar13 = fVar18 + (float)uVar17 * fVar10;
          fVar14 = fVar18 + (float)((ulong)uVar17 >> 0x20) * fVar10;
          if (1 < (int)uVar1) {
            uVar8 = 1;
            do {
              fVar15 = pfVar9[uVar8];
              puVar2 = (undefined8 *)(param_2[uVar8] + lVar4 * 4);
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
          *(undefined8 *)(param_3 + lVar4 * 2) = uVar16;
          lVar4 = lVar4 + 4;
        } while (lVar4 <= iVar5 + -4);
      }
      if ((int)lVar4 < iVar5) {
        fVar10 = *pfVar9;
        lVar6 = *param_2;
        lVar4 = (long)(int)lVar4;
        do {
          fVar11 = fVar18 + *(float *)(lVar6 + lVar4 * 4) * fVar10;
          if (1 < (int)uVar1) {
            uVar8 = 1;
            do {
              fVar11 = fVar11 + *(float *)(param_2[uVar8] + lVar4 * 4) * pfVar9[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
          }
          iVar7 = (int)(long)(float)(int)fVar11;
          if (iVar7 < -0x7fff) {
            iVar7 = -0x8000;
          }
          if (0x7ffe < iVar7) {
            iVar7 = 0x7fff;
          }
          *(short *)(param_3 + lVar4 * 2) = (short)iVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 != iVar5);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0aecc; end: 109b0b0db;  */

ulong FUN_109b0aecc(byte *param_1,long *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  if (param_1[0x68] == 1) {
    iVar5 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) + -1;
    lVar16 = *(long *)(param_1 + 0x18);
    lVar4 = (long)((ulong)(uint)(iVar5 - (iVar5 >> 0x1f)) << 0x20) >> 0x21;
    lVar21 = lVar16 + (long)(iVar5 / 2) * 4;
    fVar6 = *(float *)(param_1 + 4);
    uVar15 = iVar5 / 2;
    if ((*param_1 & 1) != 0) {
      if (param_4 < 8) {
        return 0;
      }
      if (iVar5 == 1) {
        return 0;
      }
      uVar14 = 0;
      pfVar20 = (float *)(lVar16 + lVar4 * 4);
      fVar22 = *pfVar20;
      fVar23 = *(float *)(lVar21 + 4);
      if ((int)uVar15 < 3) {
        uVar15 = 2;
      }
      do {
        puVar2 = (undefined8 *)(*param_2 + uVar14 * 4);
        puVar3 = (undefined8 *)(param_2[1] + uVar14 * 4);
        puVar1 = (undefined8 *)(param_2[-1] + uVar14 * 4);
        fVar24 = fVar6 + (float)*puVar2 * fVar22 + ((float)*puVar3 + (float)*puVar1) * fVar23;
        fVar25 = fVar6 + (float)((ulong)*puVar2 >> 0x20) * fVar22 +
                 ((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)*puVar1 >> 0x20)) * fVar23;
        fVar26 = fVar6 + (float)puVar2[1] * fVar22 + ((float)puVar3[1] + (float)puVar1[1]) * fVar23;
        fVar27 = fVar6 + (float)((ulong)puVar2[1] >> 0x20) * fVar22 +
                 ((float)((ulong)puVar3[1] >> 0x20) + (float)((ulong)puVar1[1] >> 0x20)) * fVar23;
        fVar28 = fVar6 + (float)puVar2[2] * fVar22 + ((float)puVar3[2] + (float)puVar1[2]) * fVar23;
        fVar29 = fVar6 + (float)((ulong)puVar2[2] >> 0x20) * fVar22 +
                 ((float)((ulong)puVar3[2] >> 0x20) + (float)((ulong)puVar1[2] >> 0x20)) * fVar23;
        fVar30 = fVar6 + (float)puVar2[3] * fVar22 + ((float)puVar3[3] + (float)puVar1[3]) * fVar23;
        fVar31 = fVar6 + (float)((ulong)puVar2[3] >> 0x20) * fVar22 +
                 ((float)((ulong)puVar3[3] >> 0x20) + (float)((ulong)puVar1[3] >> 0x20)) * fVar23;
        plVar17 = param_2 + 2;
        plVar18 = param_2 + -2;
        pfVar19 = pfVar20 + 2;
        lVar21 = (ulong)uVar15 - 1;
        if (3 < iVar5) {
          do {
            puVar2 = (undefined8 *)(*plVar17 + uVar14 * 4);
            puVar3 = (undefined8 *)(*plVar18 + uVar14 * 4);
            fVar7 = *pfVar19;
            fVar24 = fVar24 + fVar7 * ((float)*puVar2 + (float)*puVar3);
            fVar25 = fVar25 + fVar7 * ((float)((ulong)*puVar2 >> 0x20) +
                                      (float)((ulong)*puVar3 >> 0x20));
            fVar26 = fVar26 + fVar7 * ((float)puVar2[1] + (float)puVar3[1]);
            fVar27 = fVar27 + fVar7 * ((float)((ulong)puVar2[1] >> 0x20) +
                                      (float)((ulong)puVar3[1] >> 0x20));
            fVar28 = fVar28 + fVar7 * ((float)puVar2[2] + (float)puVar3[2]);
            fVar29 = fVar29 + fVar7 * ((float)((ulong)puVar2[2] >> 0x20) +
                                      (float)((ulong)puVar3[2] >> 0x20));
            fVar30 = fVar30 + fVar7 * ((float)puVar2[3] + (float)puVar3[3]);
            fVar31 = fVar31 + fVar7 * ((float)((ulong)puVar2[3] >> 0x20) +
                                      (float)((ulong)puVar3[3] >> 0x20));
            lVar21 = lVar21 + -1;
            plVar17 = plVar17 + 1;
            plVar18 = plVar18 + -1;
            pfVar19 = pfVar19 + 1;
          } while (lVar21 != 0);
        }
        auVar11._4_4_ = (int)fVar25;
        auVar11._0_4_ = (int)fVar24;
        auVar11._8_4_ = (int)fVar26;
        auVar11._12_4_ = (int)fVar27;
        uVar9 = NEON_sqxtn(CONCAT44((int)fVar25,(int)fVar24),auVar11,4);
        auVar13._4_4_ = (int)fVar29;
        auVar13._0_4_ = (int)fVar28;
        auVar13._8_4_ = (int)fVar30;
        auVar13._12_4_ = (int)fVar31;
        uVar12 = NEON_sqxtn(CONCAT44((int)fVar29,(int)fVar28),auVar13,4);
        puVar2 = (undefined8 *)(param_3 + uVar14 * 2);
        *puVar2 = uVar9;
        puVar2[1] = uVar12;
        uVar14 = uVar14 + 8;
      } while (uVar14 <= param_4 - 8);
      return uVar14;
    }
    if (7 < param_4) {
      uVar14 = 0;
      fVar22 = *(float *)(lVar21 + 4);
      if ((int)uVar15 < 3) {
        uVar15 = 2;
      }
      do {
        puVar2 = (undefined8 *)(param_2[1] + uVar14 * 4);
        puVar3 = (undefined8 *)(param_2[-1] + uVar14 * 4);
        fVar23 = fVar6 + ((float)*puVar2 - (float)*puVar3) * fVar22;
        fVar24 = fVar6 + ((float)((ulong)*puVar2 >> 0x20) - (float)((ulong)*puVar3 >> 0x20)) *
                         fVar22;
        fVar25 = fVar6 + ((float)puVar2[1] - (float)puVar3[1]) * fVar22;
        fVar26 = fVar6 + ((float)((ulong)puVar2[1] >> 0x20) - (float)((ulong)puVar3[1] >> 0x20)) *
                         fVar22;
        fVar27 = fVar6 + ((float)puVar2[2] - (float)puVar3[2]) * fVar22;
        fVar28 = fVar6 + ((float)((ulong)puVar2[2] >> 0x20) - (float)((ulong)puVar3[2] >> 0x20)) *
                         fVar22;
        fVar29 = fVar6 + ((float)puVar2[3] - (float)puVar3[3]) * fVar22;
        fVar30 = fVar6 + ((float)((ulong)puVar2[3] >> 0x20) - (float)((ulong)puVar3[3] >> 0x20)) *
                         fVar22;
        plVar17 = param_2 + 2;
        plVar18 = param_2 + -2;
        pfVar20 = (float *)(lVar16 + lVar4 * 4 + 8);
        lVar21 = (ulong)uVar15 - 1;
        if (3 < iVar5) {
          do {
            puVar2 = (undefined8 *)(*plVar17 + uVar14 * 4);
            puVar3 = (undefined8 *)(*plVar18 + uVar14 * 4);
            fVar31 = *pfVar20;
            fVar23 = fVar23 + fVar31 * ((float)*puVar2 - (float)*puVar3);
            fVar24 = fVar24 + fVar31 * ((float)((ulong)*puVar2 >> 0x20) -
                                       (float)((ulong)*puVar3 >> 0x20));
            fVar25 = fVar25 + fVar31 * ((float)puVar2[1] - (float)puVar3[1]);
            fVar26 = fVar26 + fVar31 * ((float)((ulong)puVar2[1] >> 0x20) -
                                       (float)((ulong)puVar3[1] >> 0x20));
            fVar27 = fVar27 + fVar31 * ((float)puVar2[2] - (float)puVar3[2]);
            fVar28 = fVar28 + fVar31 * ((float)((ulong)puVar2[2] >> 0x20) -
                                       (float)((ulong)puVar3[2] >> 0x20));
            fVar29 = fVar29 + fVar31 * ((float)puVar2[3] - (float)puVar3[3]);
            fVar30 = fVar30 + fVar31 * ((float)((ulong)puVar2[3] >> 0x20) -
                                       (float)((ulong)puVar3[3] >> 0x20));
            lVar21 = lVar21 + -1;
            plVar17 = plVar17 + 1;
            plVar18 = plVar18 + -1;
            pfVar20 = pfVar20 + 1;
          } while (lVar21 != 0);
        }
        auVar8._4_4_ = (int)fVar24;
        auVar8._0_4_ = (int)fVar23;
        auVar8._8_4_ = (int)fVar25;
        auVar8._12_4_ = (int)fVar26;
        uVar9 = NEON_sqxtn(CONCAT44((int)fVar24,(int)fVar23),auVar8,4);
        auVar10._4_4_ = (int)fVar28;
        auVar10._0_4_ = (int)fVar27;
        auVar10._8_4_ = (int)fVar29;
        auVar10._12_4_ = (int)fVar30;
        uVar12 = NEON_sqxtn(CONCAT44((int)fVar28,(int)fVar27),auVar10,4);
        puVar2 = (undefined8 *)(param_3 + uVar14 * 2);
        *puVar2 = uVar9;
        puVar2[1] = uVar12;
        uVar14 = uVar14 + 8;
      } while (uVar14 <= param_4 - 8);
      return uVar14;
    }
  }
  return 0;
}



/* Entry: 109b0b0dc; end: 109b0b117;  */

void FUN_109b0b0dc(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0b114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0b118; end: 109b0b16b;  */

long * FUN_109b0b118(long *param_1)

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



/* Entry: 109b0b16c; end: 109b0b213;  */

undefined8 * FUN_109b0b16c(undefined8 *param_1)

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



/* Entry: 109b0b214; end: 109b0b2bb;  */

void FUN_109b0b214(undefined8 *param_1)

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



/* Entry: 109b0b2bc; end: 109b0b60b;  */

void FUN_109b0b2bc(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar11 = iVar4 / 2;
  pdVar1 = (double *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8);
  dVar17 = *(double *)(param_1 + 0x78);
  plVar15 = (long *)(param_2 + (long)iVar11 * 8);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if (param_5 != 0) {
      lVar5 = (ulong)(iVar11 + 1) << 3;
      do {
        if ((int)param_6 < 4) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            dVar18 = dVar17;
            dVar19 = dVar17;
            dVar10 = dVar17;
            dVar8 = dVar17;
            if (1 < iVar4) {
              lVar12 = -8;
              lVar13 = 8;
              do {
                pdVar2 = (double *)(*(long *)((long)plVar15 + lVar13) + uVar16 * 8);
                pdVar3 = (double *)(*(long *)((long)plVar15 + lVar12) + uVar16 * 8);
                dVar20 = *(double *)((long)pdVar1 + lVar13);
                dVar19 = dVar19 + (*pdVar2 - *pdVar3) * dVar20;
                dVar18 = dVar18 + (pdVar2[1] - pdVar3[1]) * dVar20;
                dVar10 = dVar10 + (pdVar2[2] - pdVar3[2]) * dVar20;
                dVar8 = dVar8 + (pdVar2[3] - pdVar3[3]) * dVar20;
                lVar13 = lVar13 + 8;
                lVar12 = lVar12 + -8;
              } while (lVar5 != lVar13);
            }
            auVar6._4_4_ = (int)(long)(double)(long)dVar18;
            auVar6._0_4_ = (int)(long)(double)(long)dVar19;
            auVar6._8_4_ = (int)(long)(double)(long)dVar10;
            auVar6._12_4_ = (int)(long)(double)(long)dVar8;
            uVar7 = NEON_sqxtn(CONCAT44((int)(long)(double)(long)dVar18,
                                        (int)(long)(double)(long)dVar19),auVar6,4);
            *(undefined8 *)(param_3 + uVar16 * 2) = uVar7;
            uVar16 = uVar16 + 4;
          } while ((long)uVar16 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar16 < (int)param_6) {
          do {
            dVar8 = dVar17;
            if (1 < iVar4) {
              lVar12 = -8;
              lVar13 = 8;
              do {
                dVar8 = dVar8 + (*(double *)(*(long *)((long)plVar15 + lVar13) + uVar16 * 8) -
                                *(double *)(*(long *)((long)plVar15 + lVar12) + uVar16 * 8)) *
                                *(double *)((long)pdVar1 + lVar13);
                lVar13 = lVar13 + 8;
                lVar12 = lVar12 + -8;
              } while (lVar5 != lVar13);
            }
            iVar11 = (int)(long)(double)(long)dVar8;
            if (iVar11 < -0x7fff) {
              iVar11 = -0x8000;
            }
            if (0x7ffe < iVar11) {
              iVar11 = 0x7fff;
            }
            *(short *)(param_3 + uVar16 * 2) = (short)iVar11;
            uVar16 = uVar16 + 1;
          } while (uVar16 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar15 = plVar15 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    lVar5 = (ulong)(iVar11 + 1) << 3;
    do {
      if ((int)param_6 < 4) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        dVar8 = *pdVar1;
        lVar13 = *plVar15;
        do {
          pdVar2 = (double *)(lVar13 + uVar16 * 8);
          dVar19 = dVar17 + *pdVar2 * dVar8;
          dVar10 = dVar17 + pdVar2[1] * dVar8;
          dVar20 = dVar17 + pdVar2[2] * dVar8;
          dVar18 = dVar17 + pdVar2[3] * dVar8;
          if (1 < iVar4) {
            lVar14 = -8;
            lVar12 = 8;
            do {
              pdVar2 = (double *)(*(long *)((long)plVar15 + lVar12) + uVar16 * 8);
              pdVar3 = (double *)(*(long *)((long)plVar15 + lVar14) + uVar16 * 8);
              dVar21 = *(double *)((long)pdVar1 + lVar12);
              dVar19 = dVar19 + (*pdVar2 + *pdVar3) * dVar21;
              dVar10 = dVar10 + (pdVar2[1] + pdVar3[1]) * dVar21;
              dVar20 = dVar20 + (pdVar2[2] + pdVar3[2]) * dVar21;
              dVar18 = dVar18 + (pdVar2[3] + pdVar3[3]) * dVar21;
              lVar12 = lVar12 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar5 != lVar12);
          }
          auVar9._4_4_ = (int)(long)(double)(long)dVar10;
          auVar9._0_4_ = (int)(long)(double)(long)dVar19;
          auVar9._8_4_ = (int)(long)(double)(long)dVar20;
          auVar9._12_4_ = (int)(long)(double)(long)dVar18;
          uVar7 = NEON_sqxtn(CONCAT44((int)(long)(double)(long)dVar10,
                                      (int)(long)(double)(long)dVar19),auVar9,4);
          *(undefined8 *)(param_3 + uVar16 * 2) = uVar7;
          uVar16 = uVar16 + 4;
        } while ((long)uVar16 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar16 < (int)param_6) {
        dVar8 = *pdVar1;
        lVar13 = *plVar15;
        do {
          dVar10 = dVar17 + *(double *)(lVar13 + uVar16 * 8) * dVar8;
          if (1 < iVar4) {
            lVar14 = -8;
            lVar12 = 8;
            do {
              dVar10 = dVar10 + (*(double *)(*(long *)((long)plVar15 + lVar12) + uVar16 * 8) +
                                *(double *)(*(long *)((long)plVar15 + lVar14) + uVar16 * 8)) *
                                *(double *)((long)pdVar1 + lVar12);
              lVar12 = lVar12 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar5 != lVar12);
          }
          iVar11 = (int)(long)(double)(long)dVar10;
          if (iVar11 < -0x7fff) {
            iVar11 = -0x8000;
          }
          if (0x7ffe < iVar11) {
            iVar11 = 0x7fff;
          }
          *(short *)(param_3 + uVar16 * 2) = (short)iVar11;
          uVar16 = uVar16 + 1;
        } while (uVar16 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar15 = plVar15 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0b60c; end: 109b0b647;  */

void FUN_109b0b60c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0b644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0b648; end: 109b0b69b;  */

long * FUN_109b0b648(long *param_1)

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



/* Entry: 109b0b69c; end: 109b0b743;  */

undefined8 * FUN_109b0b69c(undefined8 *param_1)

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



/* Entry: 109b0b744; end: 109b0b7eb;  */

void FUN_109b0b744(undefined8 *param_1)

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



/* Entry: 109b0b7ec; end: 109b0ba1b;  */

void FUN_109b0b7ec(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = iVar3 / 2;
  pfVar1 = (float *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
  fVar11 = *(float *)(param_1 + 0x74);
  plVar6 = (long *)(param_2 + (long)iVar2 * 8);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (param_5 != 0) {
      do {
        if ((int)param_6 < 4) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            lVar8 = uVar7 * 4;
            uVar16 = CONCAT44(fVar11,fVar11);
            uVar14 = CONCAT44(fVar11,fVar11);
            if (1 < iVar3) {
              lVar9 = -8;
              uVar10 = 1;
              uVar16 = CONCAT44(fVar11,fVar11);
              uVar14 = CONCAT44(fVar11,fVar11);
              do {
                fVar12 = pfVar1[uVar10];
                uVar15 = ((undefined8 *)(plVar6[uVar10] + lVar8))[1];
                uVar13 = *(undefined8 *)(plVar6[uVar10] + lVar8);
                puVar4 = (undefined8 *)(*(long *)((long)plVar6 + lVar9) + lVar8);
                uVar18 = puVar4[1];
                uVar17 = *puVar4;
                uVar14 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                                  ((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar17 >> 0x20))
                                  * fVar12,(float)uVar14 + ((float)uVar13 - (float)uVar17) * fVar12)
                ;
                uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                  ((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar18 >> 0x20))
                                  * fVar12,(float)uVar16 + ((float)uVar15 - (float)uVar18) * fVar12)
                ;
                uVar10 = uVar10 + 1;
                lVar9 = lVar9 + -8;
              } while (iVar2 + 1 != uVar10);
            }
            ((undefined8 *)(param_3 + lVar8))[1] = uVar16;
            *(undefined8 *)(param_3 + lVar8) = uVar14;
            uVar7 = uVar7 + 4;
          } while ((long)uVar7 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar7 < (int)param_6) {
          do {
            fVar12 = fVar11;
            if (1 < iVar3) {
              lVar8 = -8;
              uVar10 = 1;
              do {
                fVar12 = fVar12 + (*(float *)(plVar6[uVar10] + uVar7 * 4) -
                                  *(float *)(*(long *)((long)plVar6 + lVar8) + uVar7 * 4)) *
                                  pfVar1[uVar10];
                uVar10 = uVar10 + 1;
                lVar8 = lVar8 + -8;
              } while (iVar2 + 1 != uVar10);
            }
            *(float *)(param_3 + uVar7 * 4) = fVar12;
            uVar7 = uVar7 + 1;
          } while (uVar7 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar6 = plVar6 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    do {
      if ((int)param_6 < 4) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        lVar8 = *plVar6;
        do {
          fVar12 = *pfVar1;
          lVar9 = uVar7 * 4;
          uVar16 = ((undefined8 *)(lVar8 + lVar9))[1];
          uVar14 = *(undefined8 *)(lVar8 + lVar9);
          uVar14 = CONCAT44(fVar11 + (float)((ulong)uVar14 >> 0x20) * fVar12,
                            fVar11 + (float)uVar14 * fVar12);
          uVar16 = CONCAT44(fVar11 + (float)((ulong)uVar16 >> 0x20) * fVar12,
                            fVar11 + (float)uVar16 * fVar12);
          if (1 < iVar3) {
            lVar5 = -8;
            uVar10 = 1;
            do {
              fVar12 = pfVar1[uVar10];
              uVar15 = ((undefined8 *)(plVar6[uVar10] + lVar9))[1];
              uVar13 = *(undefined8 *)(plVar6[uVar10] + lVar9);
              puVar4 = (undefined8 *)(*(long *)((long)plVar6 + lVar5) + lVar9);
              uVar18 = puVar4[1];
              uVar17 = *puVar4;
              uVar14 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                                ((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar17 >> 0x20)) *
                                fVar12,(float)uVar14 + ((float)uVar13 + (float)uVar17) * fVar12);
              uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                ((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar18 >> 0x20)) *
                                fVar12,(float)uVar16 + ((float)uVar15 + (float)uVar18) * fVar12);
              uVar10 = uVar10 + 1;
              lVar5 = lVar5 + -8;
            } while (iVar2 + 1 != uVar10);
          }
          ((undefined8 *)(param_3 + lVar9))[1] = uVar16;
          *(undefined8 *)(param_3 + lVar9) = uVar14;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar7 < (int)param_6) {
        lVar8 = *plVar6;
        do {
          fVar12 = fVar11 + *(float *)(lVar8 + uVar7 * 4) * *pfVar1;
          if (1 < iVar3) {
            lVar9 = -8;
            uVar10 = 1;
            do {
              fVar12 = fVar12 + (*(float *)(plVar6[uVar10] + uVar7 * 4) +
                                *(float *)(*(long *)((long)plVar6 + lVar9) + uVar7 * 4)) *
                                pfVar1[uVar10];
              uVar10 = uVar10 + 1;
              lVar9 = lVar9 + -8;
            } while (iVar2 + 1 != uVar10);
          }
          *(float *)(param_3 + uVar7 * 4) = fVar12;
          uVar7 = uVar7 + 1;
        } while (uVar7 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar6 = plVar6 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0ba1c; end: 109b0ba57;  */

void FUN_109b0ba1c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0ba58; end: 109b0baab;  */

long * FUN_109b0ba58(long *param_1)

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



/* Entry: 109b0baac; end: 109b0bb53;  */

undefined8 * FUN_109b0baac(undefined8 *param_1)

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



/* Entry: 109b0bb54; end: 109b0bbfb;  */

void FUN_109b0bb54(undefined8 *param_1)

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



/* Entry: 109b0bbfc; end: 109b0beb7;  */

void FUN_109b0bbfc(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = iVar5 / 2;
  pdVar1 = (double *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8);
  dVar12 = *(double *)(param_1 + 0x78);
  plVar7 = (long *)(param_2 + (long)iVar4 * 8);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if (param_5 != 0) {
      lVar6 = (ulong)(iVar4 + 1) << 3;
      do {
        if ((int)param_6 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            dVar13 = dVar12;
            dVar14 = dVar12;
            dVar15 = dVar12;
            dVar16 = dVar12;
            if (1 < iVar5) {
              lVar9 = -8;
              lVar10 = 8;
              do {
                pdVar2 = (double *)(*(long *)((long)plVar7 + lVar10) + uVar8 * 8);
                pdVar3 = (double *)(*(long *)((long)plVar7 + lVar9) + uVar8 * 8);
                dVar17 = *(double *)((long)pdVar1 + lVar10);
                dVar14 = dVar14 + (*pdVar2 - *pdVar3) * dVar17;
                dVar15 = dVar15 + (pdVar2[1] - pdVar3[1]) * dVar17;
                dVar16 = dVar16 + (pdVar2[2] - pdVar3[2]) * dVar17;
                dVar13 = dVar13 + (pdVar2[3] - pdVar3[3]) * dVar17;
                lVar10 = lVar10 + 8;
                lVar9 = lVar9 + -8;
              } while (lVar6 != lVar10);
            }
            pdVar2 = (double *)(param_3 + uVar8 * 8);
            *pdVar2 = dVar14;
            pdVar2[2] = dVar16;
            pdVar2[1] = dVar15;
            pdVar2[3] = dVar13;
            uVar8 = uVar8 + 4;
          } while ((long)uVar8 <= (long)(int)(param_6 - 4));
        }
        if ((int)uVar8 < (int)param_6) {
          do {
            dVar13 = dVar12;
            if (1 < iVar5) {
              lVar9 = -8;
              lVar10 = 8;
              do {
                dVar13 = dVar13 + (*(double *)(*(long *)((long)plVar7 + lVar10) + uVar8 * 8) -
                                  *(double *)(*(long *)((long)plVar7 + lVar9) + uVar8 * 8)) *
                                  *(double *)((long)pdVar1 + lVar10);
                lVar10 = lVar10 + 8;
                lVar9 = lVar9 + -8;
              } while (lVar6 != lVar10);
            }
            *(double *)(param_3 + uVar8 * 8) = dVar13;
            uVar8 = uVar8 + 1;
          } while (uVar8 != param_6);
        }
        param_3 = param_3 + param_4;
        plVar7 = plVar7 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_5 != 0) {
    lVar6 = (ulong)(iVar4 + 1) << 3;
    do {
      if ((int)param_6 < 4) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        lVar10 = *plVar7;
        do {
          dVar16 = *pdVar1;
          pdVar2 = (double *)(lVar10 + uVar8 * 8);
          dVar13 = dVar12 + *pdVar2 * dVar16;
          dVar14 = dVar12 + pdVar2[1] * dVar16;
          dVar15 = dVar12 + pdVar2[2] * dVar16;
          dVar16 = dVar12 + pdVar2[3] * dVar16;
          if (1 < iVar5) {
            lVar11 = -8;
            lVar9 = 8;
            do {
              pdVar2 = (double *)(*(long *)((long)plVar7 + lVar9) + uVar8 * 8);
              pdVar3 = (double *)(*(long *)((long)plVar7 + lVar11) + uVar8 * 8);
              dVar17 = *(double *)((long)pdVar1 + lVar9);
              dVar13 = dVar13 + (*pdVar2 + *pdVar3) * dVar17;
              dVar14 = dVar14 + (pdVar2[1] + pdVar3[1]) * dVar17;
              dVar15 = dVar15 + (pdVar2[2] + pdVar3[2]) * dVar17;
              dVar16 = dVar16 + (pdVar2[3] + pdVar3[3]) * dVar17;
              lVar9 = lVar9 + 8;
              lVar11 = lVar11 + -8;
            } while (lVar6 != lVar9);
          }
          pdVar2 = (double *)(param_3 + uVar8 * 8);
          *pdVar2 = dVar13;
          pdVar2[2] = dVar15;
          pdVar2[1] = dVar14;
          pdVar2[3] = dVar16;
          uVar8 = uVar8 + 4;
        } while ((long)uVar8 <= (long)(int)(param_6 - 4));
      }
      if ((int)uVar8 < (int)param_6) {
        lVar10 = *plVar7;
        do {
          dVar13 = dVar12 + *(double *)(lVar10 + uVar8 * 8) * *pdVar1;
          if (1 < iVar5) {
            lVar11 = -8;
            lVar9 = 8;
            do {
              dVar13 = dVar13 + (*(double *)(*(long *)((long)plVar7 + lVar9) + uVar8 * 8) +
                                *(double *)(*(long *)((long)plVar7 + lVar11) + uVar8 * 8)) *
                                *(double *)((long)pdVar1 + lVar9);
              lVar9 = lVar9 + 8;
              lVar11 = lVar11 + -8;
            } while (lVar6 != lVar9);
          }
          *(double *)(param_3 + uVar8 * 8) = dVar13;
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_6);
      }
      param_3 = param_3 + param_4;
      plVar7 = plVar7 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b0beb8; end: 109b0bef3;  */

void FUN_109b0beb8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0bef4; end: 109b0bf47;  */

long * FUN_109b0bef4(long *param_1)

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



/* Entry: 109b0bf48; end: 109b0bf4f;  */

void FUN_109b0bf48(void)

{
  return;
}



/* Entry: 109b0bf50; end: 109b0c043;  */

void FUN_109b0bf50(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0c044; end: 109b0c213;  */

void FUN_109b0c044(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (0 < param_5) {
    fVar16 = *(float *)(param_1 + 0x60);
    pfVar9 = *(float **)(param_1 + 0x30);
    plVar10 = *(long **)(param_1 + 0x48);
    uVar5 = param_7 * param_6;
    lVar4 = *(long *)(param_1 + 0x18);
    uVar12 = *(long *)(param_1 + 0x20) - lVar4;
    uVar13 = uVar12 >> 3 & 0x7fffffff;
    do {
      iVar11 = (int)(uVar12 >> 3);
      plVar6 = plVar10;
      uVar15 = uVar13;
      piVar14 = (int *)(lVar4 + 4);
      if (0 < iVar11) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar14 * 8) + (long)piVar14[-1] * (long)param_7;
          piVar14 = piVar14 + 2;
          uVar15 = uVar15 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar15 != 0);
      }
      if ((int)uVar5 < 4) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          plVar6 = plVar10;
          pfVar7 = pfVar9;
          uVar8 = uVar13;
          fVar22 = fVar16;
          fVar21 = fVar16;
          fVar20 = fVar16;
          fVar17 = fVar16;
          if (0 < iVar11) {
            do {
              pbVar2 = (byte *)(*plVar6 + uVar15);
              fVar23 = *pfVar7;
              fVar24 = (float)NEON_ucvtf((uint)*pbVar2);
              fVar22 = fVar22 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[1]);
              fVar21 = fVar21 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[2]);
              fVar20 = fVar20 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[3]);
              fVar17 = fVar17 + fVar24 * fVar23;
              uVar8 = uVar8 - 1;
              plVar6 = plVar6 + 1;
              pfVar7 = pfVar7 + 1;
            } while (uVar8 != 0);
          }
          auVar18._4_4_ = (int)(long)(float)(int)fVar21;
          auVar18._0_4_ = (int)(long)(float)(int)fVar22;
          auVar18._8_4_ = (int)(long)(float)(int)fVar20;
          auVar18._12_4_ = (int)(long)(float)(int)fVar17;
          auVar18 = NEON_smax(auVar18,ZEXT216(0),4);
          auVar19._8_8_ = 0xff000000ff;
          auVar19._0_8_ = 0xff000000ff;
          auVar19 = NEON_smin(auVar18,auVar19,4);
          *(uint *)(param_3 + uVar15) =
               CONCAT13(auVar19[0xc],CONCAT12(auVar19[8],CONCAT11(auVar19[4],auVar19[0])));
          uVar15 = uVar15 + 4;
        } while ((long)uVar15 <= (long)(int)(uVar5 - 4));
      }
      if ((int)uVar15 < (int)uVar5) {
        do {
          pfVar7 = pfVar9;
          plVar6 = plVar10;
          uVar8 = uVar13;
          fVar17 = fVar16;
          if (0 < iVar11) {
            do {
              fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*plVar6 + uVar15));
              fVar17 = fVar17 + fVar22 * *pfVar7;
              uVar8 = uVar8 - 1;
              pfVar7 = pfVar7 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar8 != 0);
          }
          uVar3 = (uint)(long)(float)(int)fVar17 &
                  ((int)(uint)(long)(float)(int)fVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          *(char *)(param_3 + uVar15) = (char)uVar3;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar5);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar11 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar11;
    } while (iVar11 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0c214; end: 109b0c307;  */

void FUN_109b0c214(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0c308; end: 109b0c4c7;  */

void FUN_109b0c308(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long *plVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (0 < param_5) {
    fVar18 = *(float *)(param_1 + 0x60);
    pfVar11 = *(float **)(param_1 + 0x30);
    uVar5 = param_7 * param_6;
    lVar4 = *(long *)(param_1 + 0x18);
    uVar14 = *(long *)(param_1 + 0x20) - lVar4;
    plVar13 = *(long **)(param_1 + 0x48);
    uVar15 = uVar14 >> 3 & 0x7fffffff;
    do {
      iVar12 = (int)(uVar14 >> 3);
      plVar8 = plVar13;
      uVar17 = uVar15;
      piVar16 = (int *)(lVar4 + 4);
      if (0 < iVar12) {
        do {
          *plVar8 = *(long *)(param_2 + (long)*piVar16 * 8) + (long)piVar16[-1] * (long)param_7;
          piVar16 = piVar16 + 2;
          uVar17 = uVar17 - 1;
          plVar8 = plVar8 + 1;
        } while (uVar17 != 0);
      }
      if ((int)uVar5 < 4) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          plVar8 = plVar13;
          pfVar9 = pfVar11;
          uVar10 = uVar15;
          fVar19 = fVar18;
          fVar22 = fVar18;
          fVar21 = fVar18;
          fVar20 = fVar18;
          if (0 < iVar12) {
            do {
              pbVar2 = (byte *)(*plVar8 + uVar17);
              fVar23 = *pfVar9;
              fVar24 = (float)NEON_ucvtf((uint)*pbVar2);
              fVar22 = fVar22 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[1]);
              fVar21 = fVar21 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[2]);
              fVar20 = fVar20 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[3]);
              fVar19 = fVar19 + fVar24 * fVar23;
              uVar10 = uVar10 - 1;
              plVar8 = plVar8 + 1;
              pfVar9 = pfVar9 + 1;
            } while (uVar10 != 0);
          }
          auVar6._4_4_ = (int)(long)(float)(int)fVar21;
          auVar6._0_4_ = (int)(long)(float)(int)fVar22;
          auVar6._8_4_ = (int)(long)(float)(int)fVar20;
          auVar6._12_4_ = (int)(long)(float)(int)fVar19;
          uVar7 = NEON_sqxtun(CONCAT44((int)(long)(float)(int)fVar21,(int)(long)(float)(int)fVar22),
                              auVar6,4);
          *(undefined8 *)(param_3 + uVar17 * 2) = uVar7;
          uVar17 = uVar17 + 4;
        } while ((long)uVar17 <= (long)(int)(uVar5 - 4));
      }
      if ((int)uVar17 < (int)uVar5) {
        do {
          pfVar9 = pfVar11;
          plVar8 = plVar13;
          uVar10 = uVar15;
          fVar19 = fVar18;
          if (0 < iVar12) {
            do {
              fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*plVar8 + uVar17));
              fVar19 = fVar19 + fVar22 * *pfVar9;
              uVar10 = uVar10 - 1;
              pfVar9 = pfVar9 + 1;
              plVar8 = plVar8 + 1;
            } while (uVar10 != 0);
          }
          uVar3 = (uint)(long)(float)(int)fVar19 &
                  ((int)(uint)(long)(float)(int)fVar19 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar3) {
            uVar3 = 0xffff;
          }
          *(short *)(param_3 + uVar17 * 2) = (short)uVar3;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar5);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar12 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar12;
    } while (iVar12 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0c4c8; end: 109b0c5bb;  */

void FUN_109b0c4c8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0c5bc; end: 109b0c783;  */

void FUN_109b0c5bc(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (0 < param_5) {
    fVar18 = *(float *)(param_1 + 0x60);
    pfVar13 = *(float **)(param_1 + 0x30);
    uVar4 = param_7 * param_6;
    lVar3 = *(long *)(param_1 + 0x18);
    uVar16 = *(long *)(param_1 + 0x20) - lVar3;
    plVar15 = *(long **)(param_1 + 0x48);
    uVar17 = uVar16 >> 3 & 0x7fffffff;
    do {
      iVar14 = (int)(uVar16 >> 3);
      piVar7 = (int *)(lVar3 + 4);
      plVar10 = plVar15;
      uVar8 = uVar17;
      if (0 < iVar14) {
        do {
          *plVar10 = *(long *)(param_2 + (long)*piVar7 * 8) + (long)piVar7[-1] * (long)param_7;
          piVar7 = piVar7 + 2;
          uVar8 = uVar8 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar8 != 0);
      }
      if ((int)uVar4 < 4) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          plVar10 = plVar15;
          pfVar11 = pfVar13;
          uVar12 = uVar17;
          fVar19 = fVar18;
          fVar22 = fVar18;
          fVar21 = fVar18;
          fVar20 = fVar18;
          if (0 < iVar14) {
            do {
              pbVar2 = (byte *)(*plVar10 + uVar8);
              fVar23 = *pfVar11;
              fVar24 = (float)NEON_ucvtf((uint)*pbVar2);
              fVar22 = fVar22 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[1]);
              fVar21 = fVar21 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[2]);
              fVar20 = fVar20 + fVar24 * fVar23;
              fVar24 = (float)NEON_ucvtf((uint)pbVar2[3]);
              fVar19 = fVar19 + fVar24 * fVar23;
              uVar12 = uVar12 - 1;
              plVar10 = plVar10 + 1;
              pfVar11 = pfVar11 + 1;
            } while (uVar12 != 0);
          }
          auVar5._4_4_ = (int)(long)(float)(int)fVar21;
          auVar5._0_4_ = (int)(long)(float)(int)fVar22;
          auVar5._8_4_ = (int)(long)(float)(int)fVar20;
          auVar5._12_4_ = (int)(long)(float)(int)fVar19;
          uVar6 = NEON_sqxtn(CONCAT44((int)(long)(float)(int)fVar21,(int)(long)(float)(int)fVar22),
                             auVar5,4);
          *(undefined8 *)(param_3 + uVar8 * 2) = uVar6;
          uVar8 = uVar8 + 4;
        } while ((long)uVar8 <= (long)(int)(uVar4 - 4));
      }
      if ((int)uVar8 < (int)uVar4) {
        do {
          pfVar11 = pfVar13;
          plVar10 = plVar15;
          uVar12 = uVar17;
          fVar19 = fVar18;
          if (0 < iVar14) {
            do {
              fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*plVar10 + uVar8));
              fVar19 = fVar19 + fVar22 * *pfVar11;
              uVar12 = uVar12 - 1;
              pfVar11 = pfVar11 + 1;
              plVar10 = plVar10 + 1;
            } while (uVar12 != 0);
          }
          iVar9 = (int)(long)(float)(int)fVar19;
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          *(short *)(param_3 + uVar8 * 2) = (short)iVar9;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar4);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar14 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar14;
    } while (iVar14 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0c784; end: 109b0c78b;  */

void FUN_109b0c784(void)

{
  return;
}



/* Entry: 109b0c78c; end: 109b0c87f;  */

void FUN_109b0c78c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0c7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0c880; end: 109b0c9bf;  */

void FUN_109b0c880(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  if (0 < param_5) {
    fVar16 = *(float *)(param_1 + 0x60);
    pfVar8 = *(float **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar3 = param_7 * param_6;
    lVar2 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar2;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar2 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)piVar13[-1] * (long)param_7;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar3 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar19 = CONCAT44(fVar16,fVar16);
          uVar18 = CONCAT44(fVar16,fVar16);
          if (0 < iVar10) {
            uVar19 = CONCAT44(fVar16,fVar16);
            uVar18 = CONCAT44(fVar16,fVar16);
            pfVar5 = pfVar8;
            uVar7 = uVar12;
            plVar6 = plVar9;
            do {
              fVar17 = *pfVar5;
              uVar20 = *(undefined4 *)(*plVar6 + uVar14);
              uVar15 = (undefined1)((uint)uVar20 >> 8);
              auVar22._6_2_ = 0;
              auVar22._0_6_ =
                   (uint6)CONCAT14(uVar15,(uint)CONCAT12(uVar15,(ushort)(byte)uVar20)) &
                   0xffff0000ffff;
              auVar22[8] = (char)((uint)uVar20 >> 0x10);
              auVar22._9_3_ = 0;
              auVar22[0xc] = (char)((uint)uVar20 >> 0x18);
              auVar22._13_3_ = 0;
              auVar22 = NEON_ucvtf(auVar22,4);
              uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) + auVar22._4_4_ * fVar17,
                                (float)uVar18 + auVar22._0_4_ * fVar17);
              uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + auVar22._12_4_ * fVar17,
                                (float)uVar19 + auVar22._8_4_ * fVar17);
              uVar7 = uVar7 - 1;
              pfVar5 = pfVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)(param_3 + uVar14 * 4);
          puVar4[1] = uVar19;
          *puVar4 = uVar18;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar3 - 4));
      }
      if ((int)uVar14 < (int)uVar3) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pfVar5 = pfVar8;
          fVar17 = fVar16;
          if (0 < iVar10) {
            do {
              fVar21 = (float)NEON_ucvtf((uint)*(byte *)(*plVar6 + uVar14));
              fVar17 = fVar17 + fVar21 * *pfVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pfVar5 = pfVar5 + 1;
            } while (uVar7 != 0);
          }
          *(float *)(param_3 + uVar14 * 4) = fVar17;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar3);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0c9c0; end: 109b0cab3;  */

void FUN_109b0c9c0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0cab4; end: 109b0cc2b;  */

void FUN_109b0cab4(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  double *pdVar5;
  long *plVar6;
  ulong uVar7;
  double *pdVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (0 < param_5) {
    dVar15 = *(double *)(param_1 + 0x60);
    pdVar8 = *(double **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar4 = param_7 * param_6;
    lVar3 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar3;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar3 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)piVar13[-1] * (long)param_7;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar4 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          pdVar5 = pdVar8;
          uVar7 = uVar12;
          plVar6 = plVar9;
          dVar16 = dVar15;
          dVar18 = dVar15;
          dVar17 = dVar15;
          dVar19 = dVar15;
          if (0 < iVar10) {
            do {
              pbVar2 = (byte *)(*plVar6 + uVar14);
              dVar20 = *pdVar5;
              dVar21 = (double)NEON_ucvtf((ulong)*pbVar2);
              dVar19 = dVar19 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)pbVar2[1]);
              dVar17 = dVar17 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)pbVar2[2]);
              dVar18 = dVar18 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)pbVar2[3]);
              dVar16 = dVar16 + dVar21 * dVar20;
              uVar7 = uVar7 - 1;
              pdVar5 = pdVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          pdVar5 = (double *)(param_3 + uVar14 * 8);
          *pdVar5 = dVar19;
          pdVar5[1] = dVar17;
          pdVar5[2] = dVar18;
          pdVar5[3] = dVar16;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar4 - 4));
      }
      if ((int)uVar14 < (int)uVar4) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pdVar5 = pdVar8;
          dVar16 = dVar15;
          if (0 < iVar10) {
            do {
              dVar18 = (double)NEON_ucvtf((ulong)*(byte *)(*plVar6 + uVar14));
              dVar16 = dVar16 + dVar18 * *pdVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pdVar5 = pdVar5 + 1;
            } while (uVar7 != 0);
          }
          *(double *)(param_3 + uVar14 * 8) = dVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar4);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0cc2c; end: 109b0cd1f;  */

void FUN_109b0cc2c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0cc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0cd20; end: 109b0cee7;  */

void FUN_109b0cd20(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  long *plVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (0 < param_5) {
    fVar19 = *(float *)(param_1 + 0x60);
    pfVar12 = *(float **)(param_1 + 0x30);
    uVar5 = param_7 * param_6;
    lVar4 = *(long *)(param_1 + 0x18);
    uVar15 = *(long *)(param_1 + 0x20) - lVar4;
    plVar14 = *(long **)(param_1 + 0x48);
    uVar16 = uVar15 >> 3 & 0x7fffffff;
    do {
      iVar13 = (int)(uVar15 >> 3);
      plVar9 = plVar14;
      uVar18 = uVar16;
      piVar17 = (int *)(lVar4 + 4);
      if (0 < iVar13) {
        do {
          *plVar9 = *(long *)(param_2 + (long)*piVar17 * 8) + (long)(piVar17[-1] * param_7) * 2;
          piVar17 = piVar17 + 2;
          uVar18 = uVar18 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar18 != 0);
      }
      if ((int)uVar5 < 4) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          plVar9 = plVar14;
          pfVar10 = pfVar12;
          uVar11 = uVar16;
          fVar20 = fVar19;
          fVar23 = fVar19;
          fVar22 = fVar19;
          fVar21 = fVar19;
          if (0 < iVar13) {
            do {
              puVar2 = (ushort *)(*plVar9 + uVar18 * 2);
              fVar24 = *pfVar10;
              fVar8 = (float)NEON_ucvtf((uint)*puVar2);
              fVar23 = fVar23 + fVar8 * fVar24;
              fVar8 = (float)NEON_ucvtf((uint)puVar2[1]);
              fVar22 = fVar22 + fVar8 * fVar24;
              fVar8 = (float)NEON_ucvtf((uint)puVar2[2]);
              fVar21 = fVar21 + fVar8 * fVar24;
              fVar8 = (float)NEON_ucvtf((uint)puVar2[3]);
              fVar20 = fVar20 + fVar8 * fVar24;
              uVar11 = uVar11 - 1;
              plVar9 = plVar9 + 1;
              pfVar10 = pfVar10 + 1;
            } while (uVar11 != 0);
          }
          auVar6._4_4_ = (int)(long)(float)(int)fVar22;
          auVar6._0_4_ = (int)(long)(float)(int)fVar23;
          auVar6._8_4_ = (int)(long)(float)(int)fVar21;
          auVar6._12_4_ = (int)(long)(float)(int)fVar20;
          uVar7 = NEON_sqxtun(CONCAT44((int)(long)(float)(int)fVar22,(int)(long)(float)(int)fVar23),
                              auVar6,4);
          *(undefined8 *)(param_3 + uVar18 * 2) = uVar7;
          uVar18 = uVar18 + 4;
        } while ((long)uVar18 <= (long)(int)(uVar5 - 4));
      }
      if ((int)uVar18 < (int)uVar5) {
        do {
          pfVar10 = pfVar12;
          plVar9 = plVar14;
          uVar11 = uVar16;
          fVar20 = fVar19;
          if (0 < iVar13) {
            do {
              fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(*plVar9 + uVar18 * 2));
              fVar20 = fVar20 + fVar23 * *pfVar10;
              uVar11 = uVar11 - 1;
              pfVar10 = pfVar10 + 1;
              plVar9 = plVar9 + 1;
            } while (uVar11 != 0);
          }
          uVar3 = (uint)(long)(float)(int)fVar20 &
                  ((int)(uint)(long)(float)(int)fVar20 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar3) {
            uVar3 = 0xffff;
          }
          *(short *)(param_3 + uVar18 * 2) = (short)uVar3;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar5);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar13 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar13;
    } while (iVar13 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0cee8; end: 109b0cf23;  */

void FUN_109b0cee8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0cf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0cf24; end: 109b0cf77;  */

long * FUN_109b0cf24(long *param_1)

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



/* Entry: 109b0cf78; end: 109b0d02f;  */

undefined8 * FUN_109b0cf78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b25f90;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0d030; end: 109b0d177;  */

void FUN_109b0d030(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  if (0 < param_5) {
    fVar15 = *(float *)(param_1 + 0x60);
    pfVar8 = *(float **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar3 = param_7 * param_6;
    lVar2 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar2;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar2 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)(piVar13[-1] * param_7) * 2;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar3 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar18 = CONCAT44(fVar15,fVar15);
          uVar17 = CONCAT44(fVar15,fVar15);
          if (0 < iVar10) {
            uVar18 = CONCAT44(fVar15,fVar15);
            uVar17 = CONCAT44(fVar15,fVar15);
            pfVar5 = pfVar8;
            uVar7 = uVar12;
            plVar6 = plVar9;
            do {
              fVar16 = *pfVar5;
              uVar20 = *(undefined8 *)(*plVar6 + uVar14 * 2);
              auVar21._2_2_ = 0;
              auVar21._0_2_ = (ushort)uVar20;
              auVar21._4_2_ = (short)((ulong)uVar20 >> 0x10);
              auVar21._6_2_ = 0;
              auVar21._8_2_ = (short)((ulong)uVar20 >> 0x20);
              auVar21._10_2_ = 0;
              auVar21._12_2_ = (short)((ulong)uVar20 >> 0x30);
              auVar21._14_2_ = 0;
              auVar21 = NEON_ucvtf(auVar21,4);
              uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) + auVar21._4_4_ * fVar16,
                                (float)uVar17 + auVar21._0_4_ * fVar16);
              uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) + auVar21._12_4_ * fVar16,
                                (float)uVar18 + auVar21._8_4_ * fVar16);
              uVar7 = uVar7 - 1;
              pfVar5 = pfVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)(param_3 + uVar14 * 4);
          puVar4[1] = uVar18;
          *puVar4 = uVar17;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar3 - 4));
      }
      if ((int)uVar14 < (int)uVar3) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pfVar5 = pfVar8;
          fVar16 = fVar15;
          if (0 < iVar10) {
            do {
              fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(*plVar6 + uVar14 * 2));
              fVar16 = fVar16 + fVar19 * *pfVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pfVar5 = pfVar5 + 1;
            } while (uVar7 != 0);
          }
          *(float *)(param_3 + uVar14 * 4) = fVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar3);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0d178; end: 109b0d1b3;  */

void FUN_109b0d178(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0d1b4; end: 109b0d207;  */

long * FUN_109b0d1b4(long *param_1)

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



/* Entry: 109b0d208; end: 109b0d2bf;  */

undefined8 * FUN_109b0d208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b26018;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0d2c0; end: 109b0d43f;  */

void FUN_109b0d2c0(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  double *pdVar5;
  long *plVar6;
  ulong uVar7;
  double *pdVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (0 < param_5) {
    dVar15 = *(double *)(param_1 + 0x60);
    pdVar8 = *(double **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar4 = param_7 * param_6;
    lVar3 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar3;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar3 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)(piVar13[-1] * param_7) * 2;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar4 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          pdVar5 = pdVar8;
          uVar7 = uVar12;
          plVar6 = plVar9;
          dVar16 = dVar15;
          dVar18 = dVar15;
          dVar17 = dVar15;
          dVar19 = dVar15;
          if (0 < iVar10) {
            do {
              puVar2 = (ushort *)(*plVar6 + uVar14 * 2);
              dVar20 = *pdVar5;
              dVar21 = (double)NEON_ucvtf((ulong)*puVar2);
              dVar19 = dVar19 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)puVar2[1]);
              dVar17 = dVar17 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)puVar2[2]);
              dVar18 = dVar18 + dVar21 * dVar20;
              dVar21 = (double)NEON_ucvtf((ulong)puVar2[3]);
              dVar16 = dVar16 + dVar21 * dVar20;
              uVar7 = uVar7 - 1;
              pdVar5 = pdVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          pdVar5 = (double *)(param_3 + uVar14 * 8);
          *pdVar5 = dVar19;
          pdVar5[1] = dVar17;
          pdVar5[2] = dVar18;
          pdVar5[3] = dVar16;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar4 - 4));
      }
      if ((int)uVar14 < (int)uVar4) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pdVar5 = pdVar8;
          dVar16 = dVar15;
          if (0 < iVar10) {
            do {
              dVar18 = (double)NEON_ucvtf((ulong)*(ushort *)(*plVar6 + uVar14 * 2));
              dVar16 = dVar16 + dVar18 * *pdVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pdVar5 = pdVar5 + 1;
            } while (uVar7 != 0);
          }
          *(double *)(param_3 + uVar14 * 8) = dVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar4);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0d440; end: 109b0d47b;  */

void FUN_109b0d440(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0d478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0d47c; end: 109b0d4cf;  */

long * FUN_109b0d47c(long *param_1)

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



/* Entry: 109b0d4d0; end: 109b0d587;  */

undefined8 * FUN_109b0d4d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b260a0;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0d588; end: 109b0d757;  */

void FUN_109b0d588(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (0 < param_5) {
    fVar18 = *(float *)(param_1 + 0x60);
    pfVar13 = *(float **)(param_1 + 0x30);
    uVar4 = param_7 * param_6;
    lVar3 = *(long *)(param_1 + 0x18);
    uVar16 = *(long *)(param_1 + 0x20) - lVar3;
    plVar15 = *(long **)(param_1 + 0x48);
    uVar17 = uVar16 >> 3 & 0x7fffffff;
    do {
      iVar14 = (int)(uVar16 >> 3);
      piVar7 = (int *)(lVar3 + 4);
      plVar10 = plVar15;
      uVar8 = uVar17;
      if (0 < iVar14) {
        do {
          *plVar10 = *(long *)(param_2 + (long)*piVar7 * 8) + (long)(piVar7[-1] * param_7) * 2;
          piVar7 = piVar7 + 2;
          uVar8 = uVar8 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar8 != 0);
      }
      if ((int)uVar4 < 4) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          plVar10 = plVar15;
          pfVar11 = pfVar13;
          uVar12 = uVar17;
          fVar19 = fVar18;
          fVar22 = fVar18;
          fVar21 = fVar18;
          fVar20 = fVar18;
          if (0 < iVar14) {
            do {
              fVar23 = *pfVar11;
              psVar2 = (short *)(*plVar10 + uVar8 * 2);
              fVar22 = fVar22 + (float)(int)*psVar2 * fVar23;
              fVar21 = fVar21 + (float)(int)psVar2[1] * fVar23;
              fVar20 = fVar20 + (float)(int)psVar2[2] * fVar23;
              fVar19 = fVar19 + (float)(int)psVar2[3] * fVar23;
              uVar12 = uVar12 - 1;
              plVar10 = plVar10 + 1;
              pfVar11 = pfVar11 + 1;
            } while (uVar12 != 0);
          }
          auVar5._4_4_ = (int)(long)(float)(int)fVar21;
          auVar5._0_4_ = (int)(long)(float)(int)fVar22;
          auVar5._8_4_ = (int)(long)(float)(int)fVar20;
          auVar5._12_4_ = (int)(long)(float)(int)fVar19;
          uVar6 = NEON_sqxtn(CONCAT44((int)(long)(float)(int)fVar21,(int)(long)(float)(int)fVar22),
                             auVar5,4);
          *(undefined8 *)(param_3 + uVar8 * 2) = uVar6;
          uVar8 = uVar8 + 4;
        } while ((long)uVar8 <= (long)(int)(uVar4 - 4));
      }
      if ((int)uVar8 < (int)uVar4) {
        do {
          pfVar11 = pfVar13;
          plVar10 = plVar15;
          uVar12 = uVar17;
          fVar19 = fVar18;
          if (0 < iVar14) {
            do {
              fVar19 = fVar19 + (float)(int)*(short *)(*plVar10 + uVar8 * 2) * *pfVar11;
              uVar12 = uVar12 - 1;
              pfVar11 = pfVar11 + 1;
              plVar10 = plVar10 + 1;
            } while (uVar12 != 0);
          }
          iVar9 = (int)(long)(float)(int)fVar19;
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          *(short *)(param_3 + uVar8 * 2) = (short)iVar9;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar4);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar14 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar14;
    } while (iVar14 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0d758; end: 109b0d75f;  */

void FUN_109b0d758(void)

{
  return;
}



/* Entry: 109b0d760; end: 109b0d79b;  */

void FUN_109b0d760(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0d798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0d79c; end: 109b0d7ef;  */

long * FUN_109b0d79c(long *param_1)

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



/* Entry: 109b0d7f0; end: 109b0d8a7;  */

undefined8 * FUN_109b0d7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b26128;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0d8a8; end: 109b0d9ef;  */

void FUN_109b0d8a8(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  if (0 < param_5) {
    fVar15 = *(float *)(param_1 + 0x60);
    pfVar8 = *(float **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar3 = param_7 * param_6;
    lVar2 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar2;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar2 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)(piVar13[-1] * param_7) * 2;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar3 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar18 = CONCAT44(fVar15,fVar15);
          uVar17 = CONCAT44(fVar15,fVar15);
          if (0 < iVar10) {
            uVar18 = CONCAT44(fVar15,fVar15);
            uVar17 = CONCAT44(fVar15,fVar15);
            pfVar5 = pfVar8;
            uVar7 = uVar12;
            plVar6 = plVar9;
            do {
              fVar16 = *pfVar5;
              uVar19 = *(undefined8 *)(*plVar6 + uVar14 * 2);
              auVar20._0_4_ = (int)(short)uVar19;
              auVar20._4_4_ = (int)(short)((ulong)uVar19 >> 0x10);
              auVar20._8_4_ = (int)(short)((ulong)uVar19 >> 0x20);
              auVar20._12_4_ = (int)(short)((ulong)uVar19 >> 0x30);
              auVar20 = NEON_scvtf(auVar20,4);
              uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) + auVar20._4_4_ * fVar16,
                                (float)uVar17 + auVar20._0_4_ * fVar16);
              uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) + auVar20._12_4_ * fVar16,
                                (float)uVar18 + auVar20._8_4_ * fVar16);
              uVar7 = uVar7 - 1;
              pfVar5 = pfVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)(param_3 + uVar14 * 4);
          puVar4[1] = uVar18;
          *puVar4 = uVar17;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar3 - 4));
      }
      if ((int)uVar14 < (int)uVar3) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pfVar5 = pfVar8;
          fVar16 = fVar15;
          if (0 < iVar10) {
            do {
              fVar16 = fVar16 + (float)(int)*(short *)(*plVar6 + uVar14 * 2) * *pfVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pfVar5 = pfVar5 + 1;
            } while (uVar7 != 0);
          }
          *(float *)(param_3 + uVar14 * 4) = fVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar3);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0d9f0; end: 109b0da2b;  */

void FUN_109b0d9f0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0da28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0da2c; end: 109b0da7f;  */

long * FUN_109b0da2c(long *param_1)

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



/* Entry: 109b0da80; end: 109b0db37;  */

undefined8 * FUN_109b0da80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b261b0;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0db38; end: 109b0dcb7;  */

void FUN_109b0db38(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  uint uVar4;
  double *pdVar5;
  long *plVar6;
  ulong uVar7;
  double *pdVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (0 < param_5) {
    dVar15 = *(double *)(param_1 + 0x60);
    pdVar8 = *(double **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar4 = param_7 * param_6;
    lVar3 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar3;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar3 + 4);
      plVar6 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar6 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)(piVar13[-1] * param_7) * 2;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar4 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          pdVar5 = pdVar8;
          uVar7 = uVar12;
          plVar6 = plVar9;
          dVar16 = dVar15;
          dVar17 = dVar15;
          dVar18 = dVar15;
          dVar19 = dVar15;
          if (0 < iVar10) {
            do {
              dVar20 = *pdVar5;
              psVar2 = (short *)(*plVar6 + uVar14 * 2);
              dVar19 = dVar19 + (double)(int)*psVar2 * dVar20;
              dVar18 = dVar18 + (double)(int)psVar2[1] * dVar20;
              dVar17 = dVar17 + (double)(int)psVar2[2] * dVar20;
              dVar16 = dVar16 + (double)(int)psVar2[3] * dVar20;
              uVar7 = uVar7 - 1;
              pdVar5 = pdVar5 + 1;
              plVar6 = plVar6 + 1;
            } while (uVar7 != 0);
          }
          pdVar5 = (double *)(param_3 + uVar14 * 8);
          *pdVar5 = dVar19;
          pdVar5[1] = dVar18;
          pdVar5[2] = dVar17;
          pdVar5[3] = dVar16;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar4 - 4));
      }
      if ((int)uVar14 < (int)uVar4) {
        do {
          plVar6 = plVar9;
          uVar7 = uVar12;
          pdVar5 = pdVar8;
          dVar16 = dVar15;
          if (0 < iVar10) {
            do {
              dVar16 = dVar16 + (double)(int)*(short *)(*plVar6 + uVar14 * 2) * *pdVar5;
              uVar7 = uVar7 - 1;
              plVar6 = plVar6 + 1;
              pdVar5 = pdVar5 + 1;
            } while (uVar7 != 0);
          }
          *(double *)(param_3 + uVar14 * 8) = dVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar4);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0dcb8; end: 109b0dcf3;  */

void FUN_109b0dcb8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0dcf4; end: 109b0dd47;  */

long * FUN_109b0dcf4(long *param_1)

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



/* Entry: 109b0dd48; end: 109b0ddff;  */

undefined8 * FUN_109b0dd48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b26238;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b0de00; end: 109b0df37;  */

void FUN_109b0de00(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (0 < param_5) {
    fVar15 = *(float *)(param_1 + 0x60);
    pfVar8 = *(float **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x48);
    uVar3 = param_7 * param_6;
    lVar2 = *(long *)(param_1 + 0x18);
    uVar11 = *(long *)(param_1 + 0x20) - lVar2;
    uVar12 = uVar11 >> 3 & 0x7fffffff;
    do {
      iVar10 = (int)(uVar11 >> 3);
      uVar14 = uVar12;
      piVar13 = (int *)(lVar2 + 4);
      plVar5 = plVar9;
      if (0 < iVar10) {
        do {
          *plVar5 = *(long *)(param_2 + (long)*piVar13 * 8) + (long)(piVar13[-1] * param_7) * 4;
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar14 != 0);
      }
      if ((int)uVar3 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar18 = CONCAT44(fVar15,fVar15);
          uVar17 = CONCAT44(fVar15,fVar15);
          if (0 < iVar10) {
            uVar18 = CONCAT44(fVar15,fVar15);
            uVar17 = CONCAT44(fVar15,fVar15);
            plVar5 = plVar9;
            pfVar6 = pfVar8;
            uVar7 = uVar12;
            do {
              fVar16 = *pfVar6;
              puVar4 = (undefined8 *)(*plVar5 + uVar14 * 4);
              uVar20 = puVar4[1];
              uVar19 = *puVar4;
              uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                                (float)((ulong)uVar19 >> 0x20) * fVar16,
                                (float)uVar17 + (float)uVar19 * fVar16);
              uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                                (float)((ulong)uVar20 >> 0x20) * fVar16,
                                (float)uVar18 + (float)uVar20 * fVar16);
              uVar7 = uVar7 - 1;
              plVar5 = plVar5 + 1;
              pfVar6 = pfVar6 + 1;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)(param_3 + uVar14 * 4);
          puVar4[1] = uVar18;
          *puVar4 = uVar17;
          uVar14 = uVar14 + 4;
        } while ((long)uVar14 <= (long)(int)(uVar3 - 4));
      }
      if ((int)uVar14 < (int)uVar3) {
        do {
          plVar5 = plVar9;
          uVar7 = uVar12;
          pfVar6 = pfVar8;
          fVar16 = fVar15;
          if (0 < iVar10) {
            do {
              fVar16 = fVar16 + *(float *)(*plVar5 + uVar14 * 4) * *pfVar6;
              uVar7 = uVar7 - 1;
              plVar5 = plVar5 + 1;
              pfVar6 = pfVar6 + 1;
            } while (uVar7 != 0);
          }
          *(float *)(param_3 + uVar14 * 4) = fVar16;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar3);
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 8;
      iVar10 = param_5 + -1;
      bVar1 = 0 < param_5;
      param_5 = iVar10;
    } while (iVar10 != 0 && bVar1);
  }
  return;
}



/* Entry: 109b0df38; end: 109b0df73;  */

void FUN_109b0df38(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b0df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0df74; end: 109b0dfc7;  */

long * FUN_109b0df74(long *param_1)

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



/* Entry: 109b0dfc8; end: 109b0e07f;  */

undefined8 * FUN_109b0dfc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b262c0;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}


