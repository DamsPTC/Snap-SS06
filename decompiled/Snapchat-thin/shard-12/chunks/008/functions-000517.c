/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097dcd9c; end: 1097dce2b;  */

/* WARNING: Removing unreachable block (ram,0x0001097dcb20) */

undefined8 FUN_1097dcd9c(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return 0;
  }
  puVar3 = param_1;
  func_0x0001097dc7a0(param_1,*param_1,param_1[1]);
  if ((int)puVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0xc);
    uVar5 = *(int *)(lVar4 + 0x10) - 1;
    if (*(char *)(*(long *)(lVar4 + 0x20) + (ulong)uVar5) == '\x01') {
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
      *(uint *)(lVar4 + 0x10) = uVar5;
    }
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    plVar7 = *(long **)(param_1 + 0xc);
    uVar2 = *(uint *)(plVar7 + 2);
    uVar5 = uVar2 + 1;
    puVar1 = (uint *)(plVar7 + 3);
    if ((*(uint *)((long)plVar7 + 0x14) < uVar5) || (*(uint *)((long)plVar7 + 0x1c) < *puVar1)) {
      plVar7 = (long *)(ulong)(uVar2 << 1);
      FUN_1097dc370(plVar7,*puVar1 << 1);
      if (plVar7 == (long *)0x0) {
        return 1;
      }
      puVar6 = *(undefined8 **)(param_1 + 0xc);
      *(long **)(param_1 + 0xc) = plVar7;
      *plVar7 = (long)(param_1 + 10);
      plVar7[1] = (long)puVar6;
      *puVar6 = plVar7;
      uVar2 = *(uint *)(plVar7 + 2);
      uVar5 = uVar2 + 1;
    }
    *(uint *)(plVar7 + 2) = uVar5;
    *(undefined1 *)(plVar7[4] + (ulong)uVar2) = 3;
    return 0;
  }
  return 1;
}



/* Entry: 1097dce2c; end: 1097dd0db;  */

void FUN_1097dce2c(long param_1,code *UNRECOVERED_JUMPTABLE,code *param_3,code *param_4,
                  code *param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = (long *)(param_1 + 0x28);
  do {
    if ((int)plVar5[2] != 0) {
      uVar6 = 0;
      lVar4 = plVar5[5];
      do {
        cVar1 = *(char *)(plVar5[4] + uVar6);
        if (cVar1 == '\x02') {
          uVar3 = param_6;
          (*param_4)(param_6,lVar4,lVar4 + 8,lVar4 + 0x10);
          lVar4 = lVar4 + 0x18;
          iVar2 = (int)uVar3;
        }
        else {
          if (cVar1 == '\x01') {
            uVar3 = param_6;
            (*param_3)(param_6,lVar4);
            iVar2 = (int)uVar3;
          }
          else {
            if (cVar1 != '\0') {
              uVar3 = param_6;
              (*param_5)();
              iVar2 = (int)uVar3;
              goto joined_r0x0001097dcee4;
            }
            uVar3 = param_6;
            (*UNRECOVERED_JUMPTABLE)(param_6,lVar4);
            iVar2 = (int)uVar3;
          }
          lVar4 = lVar4 + 8;
        }
joined_r0x0001097dcee4:
        if (iVar2 != 0) {
          return;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(plVar5 + 2));
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)(param_1 + 0x28)) {
      if (((*(byte *)(param_1 + 0x10) ^ 0xff) & 3) != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001097dcf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_6,param_1 + 8);
      return;
    }
  } while( true );
}



/* Entry: 1097dd0dc; end: 1097dd19b;  */

void FUN_1097dd0dc(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 != 0 || param_2 != 0) {
    param_1[1] = CONCAT44((int)((ulong)param_1[1] >> 0x20) + param_3,(int)param_1[1] + param_2);
    *param_1 = CONCAT44((int)((ulong)*param_1 >> 0x20) + param_3,(int)*param_1 + param_2);
    bVar6 = *(byte *)(param_1 + 2) | 0x40;
    *(byte *)(param_1 + 2) = bVar6;
    plVar5 = param_1 + 5;
    do {
      uVar8 = (ulong)*(uint *)(plVar5 + 3);
      if (*(uint *)(plVar5 + 3) != 0) {
        lVar7 = 0;
        uVar9 = 0;
        do {
          puVar1 = (uint *)(plVar5[5] + lVar7);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          *puVar1 = uVar2 + param_2;
          puVar1[1] = uVar3 + param_3;
          bVar6 = *(byte *)(param_1 + 2);
          if ((bVar6 >> 6 & 1) != 0) {
            bVar4 = 0x40;
            if (((uVar2 + param_2 | uVar3 + param_3) & 0xff) != 0) {
              bVar4 = 0;
            }
            bVar6 = bVar4 | bVar6 & 0xbf;
            *(byte *)(param_1 + 2) = bVar6;
            uVar8 = (ulong)*(uint *)(plVar5 + 3);
          }
          uVar9 = uVar9 + 1;
          lVar7 = lVar7 + 8;
        } while (uVar9 < uVar8);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != param_1 + 5);
    *(byte *)(param_1 + 2) = (bVar6 << 1 | 0xbf) & bVar6;
    *(ulong *)((long)param_1 + 0x1c) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x1c) >> 0x20) + param_3,
                  (int)*(undefined8 *)((long)param_1 + 0x1c) + param_2);
    *(ulong *)((long)param_1 + 0x14) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20) + param_3,
                  (int)*(undefined8 *)((long)param_1 + 0x14) + param_2);
  }
  return;
}



/* Entry: 1097dd19c; end: 1097dd58b;  */

void FUN_1097dd19c(int *param_1,double *param_2)

{
  ulong *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong *puVar17;
  int *piVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  int iVar27;
  double dVar28;
  undefined1 auVar29 [16];
  int iStack_34;
  ulong uStack_30;
  undefined8 uStack_28;
  
  dVar22 = param_2[2];
  dVar21 = param_2[1];
  dVar23 = param_2[2];
  if ((dVar21 == 0.0) && (dVar23 == 0.0)) {
    iVar10 = SUB84(*param_2 + 26388279066624.0,0);
    iVar27 = SUB84(param_2[4] + 26388279066624.0,0);
    iVar4 = SUB84(param_2[5] + 26388279066624.0,0);
    iVar7 = SUB84(param_2[3] + 26388279066624.0,0);
    if ((iVar10 == 0x100) && (iVar7 == 0x100)) {
      if (iVar4 != 0 || iVar27 != 0) {
        *(ulong *)(param_1 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar4,
                      (int)*(undefined8 *)(param_1 + 2) + iVar27);
        *(ulong *)param_1 =
             CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar4,
                      (int)*(undefined8 *)param_1 + iVar27);
        bVar9 = *(byte *)(param_1 + 4) | 0x40;
        *(byte *)(param_1 + 4) = bVar9;
        piVar11 = param_1 + 10;
        do {
          uVar14 = (ulong)(uint)piVar11[6];
          if (piVar11[6] != 0) {
            lVar13 = 0;
            uVar15 = 0;
            do {
              puVar3 = (uint *)(*(long *)(piVar11 + 10) + lVar13);
              uVar5 = *puVar3;
              uVar6 = puVar3[1];
              *puVar3 = uVar5 + iVar27;
              puVar3[1] = uVar6 + iVar4;
              bVar9 = *(byte *)(param_1 + 4);
              if ((bVar9 >> 6 & 1) != 0) {
                bVar8 = 0x40;
                if (((uVar5 + iVar27 | uVar6 + iVar4) & 0xff) != 0) {
                  bVar8 = 0;
                }
                bVar9 = bVar8 | bVar9 & 0xbf;
                *(byte *)(param_1 + 4) = bVar9;
                uVar14 = (ulong)(uint)piVar11[6];
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 8;
            } while (uVar15 < uVar14);
          }
          piVar11 = *(int **)piVar11;
        } while (piVar11 != param_1 + 10);
        *(byte *)(param_1 + 4) = (bVar9 << 1 | 0xbf) & bVar9;
        *(ulong *)(param_1 + 7) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20) + iVar4,
                      (int)*(undefined8 *)(param_1 + 7) + iVar27);
        *(ulong *)(param_1 + 5) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20) + iVar4,
                      (int)*(undefined8 *)(param_1 + 5) + iVar27);
      }
      return;
    }
    *param_1 = (int)((ulong)((long)iVar10 * (long)*param_1) >> 8) + iVar27;
    param_1[1] = (int)((ulong)((long)iVar7 * (long)param_1[1]) >> 8) + iVar4;
    param_1[2] = (int)((ulong)((long)iVar10 * (long)param_1[2]) >> 8) + iVar27;
    param_1[3] = (int)((ulong)((long)iVar7 * (long)param_1[3]) >> 8) + iVar4;
    bVar9 = *(byte *)(param_1 + 4) | 0x40;
    *(byte *)(param_1 + 4) = bVar9;
    piVar11 = param_1 + 10;
    do {
      uVar14 = (ulong)(uint)piVar11[6];
      if (piVar11[6] != 0) {
        lVar13 = 0;
        uVar15 = 0;
        do {
          puVar3 = (uint *)(*(long *)(piVar11 + 10) + lVar13);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          if (iVar10 != 0x100) {
            uVar5 = (uint)((ulong)((long)iVar10 * (long)(int)uVar5) >> 8);
          }
          if (iVar7 != 0x100) {
            uVar6 = (uint)((ulong)((long)iVar7 * (long)(int)uVar6) >> 8);
          }
          *puVar3 = uVar5 + iVar27;
          puVar3[1] = uVar6 + iVar4;
          bVar9 = *(byte *)(param_1 + 4);
          if ((bVar9 >> 6 & 1) != 0) {
            bVar8 = 0x40;
            if (((uVar5 + iVar27 | uVar6 + iVar4) & 0xff) != 0) {
              bVar8 = 0;
            }
            bVar9 = bVar8 | bVar9 & 0xbf;
            *(byte *)(param_1 + 4) = bVar9;
            uVar14 = (ulong)(uint)piVar11[6];
          }
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 8;
        } while (uVar15 < uVar14);
      }
      piVar11 = *(int **)piVar11;
    } while (piVar11 != param_1 + 10);
    *(byte *)(param_1 + 4) = (bVar9 << 1 | 0xbf) & bVar9;
    iVar2 = (int)((ulong)((long)iVar10 * (long)param_1[5]) >> 8) + iVar27;
    param_1[5] = iVar2;
    iVar27 = (int)((ulong)((long)iVar10 * (long)param_1[7]) >> 8) + iVar27;
    param_1[7] = iVar27;
    if (iVar10 < 0) {
      param_1[5] = iVar27;
      param_1[7] = iVar2;
    }
    iVar27 = (int)((ulong)((long)iVar7 * (long)param_1[6]) >> 8) + iVar4;
    param_1[6] = iVar27;
    iVar4 = (int)((ulong)((long)iVar7 * (long)param_1[8]) >> 8) + iVar4;
    param_1[8] = iVar4;
    if (iVar7 < 0) {
      param_1[6] = iVar4;
      param_1[8] = iVar27;
    }
  }
  else {
    dVar28 = *param_2;
    dVar26 = param_2[3];
    dVar25 = param_2[5];
    dVar24 = param_2[4];
    auVar29._0_8_ = (long)*param_1;
    auVar29._8_8_ = (long)param_1[2];
    auVar29 = NEON_scvtf(auVar29,8);
    dVar19 = auVar29._0_8_ * 0.00390625;
    dVar20 = auVar29._8_8_ * 0.00390625;
    *(ulong *)(param_1 + 2) =
         CONCAT44(SUB84(dVar25 + dVar26 * ((double)param_1[3] / 256.0) + dVar21 * dVar20 +
                        26388279066624.0,0),
                  SUB84(dVar24 + ((double)param_1[3] / 256.0) * dVar22 + dVar28 * dVar20 +
                        26388279066624.0,0));
    *(ulong *)param_1 =
         CONCAT44(SUB84(dVar25 + ((double)param_1[1] / 256.0) * dVar26 + dVar21 * dVar19 +
                        26388279066624.0,0),
                  SUB84(dVar24 + dVar22 * ((double)param_1[1] / 256.0) + dVar28 * dVar19 +
                        26388279066624.0,0));
    if (param_1[0x10] != 0) {
      puVar1 = (ulong *)(param_1 + 5);
      uStack_28 = *(undefined8 *)(param_1 + 7);
      uStack_30 = *(ulong *)(param_1 + 5);
      dVar22 = (double)**(int **)(param_1 + 0x14) / 256.0;
      dVar19 = (double)(*(int **)(param_1 + 0x14))[1] / 256.0;
      uVar14 = (ulong)(dVar24 + dVar23 * dVar19 + dVar22 * dVar28 + 26388279066624.0) & 0xffffffff |
               (long)(dVar25 + dVar26 * dVar19 + dVar22 * dVar21 + 26388279066624.0) << 0x20;
      *(ulong *)(param_1 + 5) = uVar14;
      puVar12 = (ulong *)(param_1 + 7);
      *puVar12 = uVar14;
      piVar11 = param_1 + 10;
      do {
        if (piVar11[6] != 0) {
          uVar14 = 0;
          dVar22 = param_2[1];
          dVar21 = *param_2;
          dVar19 = param_2[3];
          dVar23 = param_2[2];
          dVar24 = param_2[5];
          dVar20 = param_2[4];
          piVar16 = (int *)(*(long *)(piVar11 + 10) + 4);
          do {
            iVar27 = SUB84(dVar19 * ((double)*piVar16 / 256.0) +
                           dVar22 * ((double)piVar16[-1] / 256.0) + dVar24 + 26388279066624.0,0);
            iVar4 = SUB84(dVar23 * ((double)*piVar16 / 256.0) +
                          dVar21 * ((double)piVar16[-1] / 256.0) + dVar20 + 26388279066624.0,0);
            *(ulong *)(piVar16 + -1) = CONCAT44(iVar27,iVar4);
            puVar17 = puVar1;
            if ((iVar4 < (int)*puVar1) || (puVar17 = puVar12, (int)*puVar12 < iVar4)) {
              *(int *)puVar17 = iVar4;
              iVar27 = *piVar16;
            }
            piVar18 = param_1 + 6;
            if ((iVar27 < param_1[6]) || (piVar18 = param_1 + 8, param_1[8] < iVar27)) {
              *piVar18 = iVar27;
            }
            uVar14 = uVar14 + 1;
            piVar16 = piVar16 + 2;
          } while (uVar14 < (uint)piVar11[6]);
        }
        piVar11 = *(int **)piVar11;
      } while (piVar11 != param_1 + 10);
      bVar9 = *(byte *)(param_1 + 4);
      if ((bVar9 >> 3 & 1) != 0) {
        FUN_1097d9534(param_2,&uStack_30,&iStack_34);
        if (iStack_34 == 0) {
          FUN_1097db6f4(param_1,&uStack_30);
        }
        *(undefined8 *)(param_1 + 7) = uStack_28;
        *puVar1 = uStack_30;
        bVar9 = *(byte *)(param_1 + 4);
      }
      *(byte *)(param_1 + 4) = bVar9 & 0xf;
    }
  }
  return;
}



/* Entry: 1097dd58c; end: 1097dd72b;  */

void FUN_1097dd58c(undefined8 param_1,long param_2,code *param_3,code *param_4,code *param_5,
                  undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [56];
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)(param_2 + 0x10) >> 3 & 1) != 0) {
    plVar8 = (long *)(param_2 + 0x28);
    uStack_d0 = param_1;
    pcStack_c0 = param_3;
    pcStack_b8 = param_4;
    pcStack_b0 = param_5;
    uStack_a8 = param_6;
    do {
      if ((int)plVar8[2] != 0) {
        uVar9 = 0;
        puVar6 = (undefined8 *)plVar8[5];
        do {
          cVar1 = *(char *)(plVar8[4] + uVar9);
          if (cVar1 == '\x02') {
            puVar3 = auStack_a0;
            FUN_1097f35f0(puVar3,0x1097ddc48,&uStack_d0,&uStack_c8,puVar6,puVar6 + 1,puVar6 + 2);
            uStack_c8 = puVar6[2];
            if ((int)puVar3 == 0) {
              uVar4 = uStack_a8;
              (*pcStack_b8)(uStack_a8,puVar6 + 2);
              iVar2 = (int)uVar4;
            }
            else {
              iVar2 = (int)auStack_a0;
              FUN_1097f3744(uStack_d0);
            }
            puVar6 = puVar6 + 3;
          }
          else {
            if (cVar1 == '\x01') {
              uStack_c8 = *puVar6;
              pcVar5 = pcStack_b8;
            }
            else {
              if (cVar1 != '\0') {
                uVar4 = uStack_a8;
                (*pcStack_b0)();
                iVar2 = (int)uVar4;
                goto LAB_1097dd6c0;
              }
              uStack_c8 = *puVar6;
              pcVar5 = pcStack_c0;
            }
            uVar4 = uStack_a8;
            (*pcVar5)(uStack_a8,puVar6);
            iVar2 = (int)uVar4;
            puVar6 = puVar6 + 1;
          }
LAB_1097dd6c0:
          if (iVar2 != 0) {
            return;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(plVar8 + 2));
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)(param_2 + 0x28)) {
        if (((*(byte *)(param_2 + 0x10) ^ 0xff) & 3) == 0) {
          uStack_c8 = *(undefined8 *)(param_2 + 8);
          (*pcStack_c0)(uStack_a8,(undefined8 *)(param_2 + 8));
        }
        return;
      }
    } while( true );
  }
  plVar8 = (long *)(param_2 + 0x28);
  UNRECOVERED_JUMPTABLE = param_3;
  do {
    if ((int)plVar8[2] != 0) {
      uVar9 = 0;
      lVar7 = plVar8[5];
      do {
        cVar1 = *(char *)(plVar8[4] + uVar9);
        if (cVar1 == '\x02') {
          uVar4 = param_6;
          (*(code *)0x0)(param_6,lVar7,lVar7 + 8,lVar7 + 0x10);
          lVar7 = lVar7 + 0x18;
          iVar2 = (int)uVar4;
        }
        else {
          if (cVar1 == '\x01') {
            uVar4 = param_6;
            (*param_4)(param_6,lVar7);
            iVar2 = (int)uVar4;
          }
          else {
            if (cVar1 != '\0') {
              uVar4 = param_6;
              (*param_5)();
              iVar2 = (int)uVar4;
              goto joined_r0x0001097dcee4;
            }
            uVar4 = param_6;
            (*UNRECOVERED_JUMPTABLE)(param_6,lVar7);
            iVar2 = (int)uVar4;
          }
          lVar7 = lVar7 + 8;
        }
joined_r0x0001097dcee4:
        if (iVar2 != 0) {
          return;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(plVar8 + 2));
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)(param_2 + 0x28)) {
      if (((*(byte *)(param_2 + 0x10) ^ 0xff) & 3) != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001097dcf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_6,param_2 + 8);
      return;
    }
  } while( true );
}



/* Entry: 1097dd72c; end: 1097dd8d7;  */

undefined8 FUN_1097dd72c(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (((((((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) &&
         (iVar8 = *(int *)(param_1 + 0x38), 0xfffffffc < iVar8 - 7U)) &&
        (pcVar5 = *(char **)(param_1 + 0x48), *pcVar5 == '\0')) &&
       ((pcVar5[1] == '\x01' && (pcVar5[2] == '\x01')))) && (pcVar5[3] == '\x01')) &&
     ((iVar8 == 4 ||
      (((pcVar5[4] == '\x03' ||
        (((pcVar5[4] == '\x01' && (piVar4 = *(int **)(param_1 + 0x50), piVar4[8] == *piVar4)) &&
         (piVar4[9] == piVar4[1])))) &&
       (((iVar8 != 6 || (pcVar5[5] == '\x03')) || (pcVar5[5] == '\0')))))))) {
    piVar4 = *(int **)(param_1 + 0x50);
    iVar8 = piVar4[2];
    iVar2 = piVar4[3];
    iVar3 = piVar4[1];
    if ((((iVar3 == iVar2) && (iVar8 == piVar4[4])) &&
        ((iVar7 = piVar4[5], iVar7 == piVar4[7] && (iVar6 = piVar4[6], iVar6 == *piVar4)))) ||
       ((((*piVar4 == iVar8 && (iVar2 == piVar4[5])) && (piVar4[4] == piVar4[6])) &&
        (iVar6 = iVar8, iVar8 = piVar4[4], iVar7 = iVar2, piVar4[7] == iVar3)))) {
      iVar2 = iVar6;
      if (iVar8 <= iVar6) {
        iVar2 = iVar8;
      }
      *param_2 = iVar2;
      piVar1 = piVar4;
      if (iVar6 <= iVar8) {
        piVar1 = piVar4 + 4;
      }
      iVar2 = *piVar1;
      iVar8 = iVar3;
      if (iVar7 <= iVar3) {
        iVar8 = iVar7;
      }
      param_2[1] = iVar8;
      param_2[2] = iVar2;
      piVar1 = piVar4 + 1;
      if (iVar3 <= iVar7) {
        piVar1 = piVar4 + 5;
      }
      param_2[3] = *piVar1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 1097dd8d8; end: 1097dd9cb;  */

undefined8 FUN_1097dd8d8(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  
  if (((((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) && (*(int *)(param_1 + 0x38) == 5)) &&
      (pcVar1 = *(char **)(param_1 + 0x48), *pcVar1 == '\0')) &&
     (((pcVar1[1] == '\x01' && (pcVar1[2] == '\x01')) &&
      ((pcVar1[3] == '\x01' && (pcVar1[4] == '\x03')))))) {
    piVar2 = *(int **)(param_1 + 0x50);
    if ((((piVar2[1] == piVar2[3]) && (piVar2[2] == piVar2[4])) &&
        ((piVar2[5] == piVar2[7] && (piVar2[6] == *piVar2)))) ||
       ((((*piVar2 == piVar2[2] && (piVar2[3] == piVar2[5])) && (piVar2[4] == piVar2[6])) &&
        (piVar2[7] == piVar2[1])))) {
      func_0x0001097dd898(param_2,piVar2,piVar2 + 4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1097dd9cc; end: 1097ddc5b;  */

undefined8 FUN_1097dd9cc(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  plVar13 = (long *)param_1[1];
  if (plVar13 == (long *)0x0) {
    return 0;
  }
  plVar14 = (long *)*param_1;
  uVar16 = *(uint *)(param_1 + 2);
  uVar15 = *(uint *)((long)param_1 + 0x14);
  if (uVar16 == *(uint *)(plVar13 + 2)) {
    if (uVar16 == 0xffffffff) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar15 = 0;
      plVar13 = (long *)*plVar13;
      if (plVar13 == plVar14) {
        return 0;
      }
    }
  }
  lVar11 = plVar13[4];
  if (*(char *)(lVar11 + (ulong)uVar16) != '\0') {
    return 0;
  }
  piVar1 = (int *)(plVar13[5] + (ulong)uVar15 * 8);
  iVar2 = *piVar1;
  iVar6 = piVar1[1];
  uVar16 = uVar16 + 1;
  if (uVar16 < *(uint *)(plVar13 + 2)) {
    uVar15 = uVar15 + 1;
  }
  else {
    plVar13 = (long *)*plVar13;
    if (plVar13 == plVar14) {
      return 0;
    }
    uVar16 = 0;
    uVar15 = 0;
    lVar11 = plVar13[4];
  }
  if (*(char *)(lVar11 + (ulong)uVar16) != '\x01') {
    return 0;
  }
  piVar1 = (int *)(plVar13[5] + (ulong)uVar15 * 8);
  iVar3 = *piVar1;
  iVar7 = piVar1[1];
  uVar16 = uVar16 + 1;
  if (uVar16 < *(uint *)(plVar13 + 2)) {
    uVar15 = uVar15 + 1;
  }
  else {
    plVar13 = (long *)*plVar13;
    if (plVar13 == plVar14) {
      return 0;
    }
    uVar16 = 0;
    uVar15 = 0;
    lVar11 = plVar13[4];
  }
  cVar10 = *(char *)(lVar11 + (ulong)uVar16);
  uVar17 = uVar16;
  if (cVar10 != '\0') {
    if (cVar10 == '\x01') {
      piVar1 = (int *)(plVar13[5] + (ulong)uVar15 * 8);
      iVar4 = *piVar1;
      iVar8 = piVar1[1];
      uVar16 = uVar16 + 1;
      if (uVar16 < *(uint *)(plVar13 + 2)) {
        uVar17 = uVar15 + 1;
      }
      else {
        plVar13 = (long *)*plVar13;
        if (plVar13 == plVar14) {
          return 0;
        }
        uVar16 = 0;
        uVar17 = 0;
        lVar11 = plVar13[4];
      }
      if (*(char *)(lVar11 + (ulong)uVar16) != '\x01') {
        return 0;
      }
      uVar15 = uVar17 + 1;
      piVar1 = (int *)(plVar13[5] + (ulong)uVar17 * 8);
      iVar5 = *piVar1;
      iVar9 = piVar1[1];
      uVar17 = uVar16 + 1;
      if (uVar17 < *(uint *)(plVar13 + 2)) {
LAB_1097ddb5c:
        cVar10 = *(char *)(lVar11 + (ulong)uVar17);
        if (cVar10 != '\0') {
          if (cVar10 != '\x03') {
            if (((cVar10 != '\x01') ||
                (piVar1 = (int *)(plVar13[5] + (ulong)uVar15 * 8), *piVar1 != iVar2)) ||
               (piVar1[1] != iVar6)) {
              return 0;
            }
            uVar15 = uVar15 + 1;
          }
          uVar17 = uVar17 + 1;
          if (*(uint *)(plVar13 + 2) <= uVar17) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == plVar14) goto LAB_1097ddbf4;
            uVar17 = 0;
            uVar15 = 0;
          }
        }
      }
      else {
        plVar13 = (long *)*plVar13;
        if (plVar13 != plVar14) {
          uVar17 = 0;
          uVar15 = 0;
          lVar11 = plVar13[4];
          goto LAB_1097ddb5c;
        }
LAB_1097ddbf4:
        plVar13 = (long *)0x0;
      }
      if (((iVar6 == iVar7 && iVar3 == iVar4) && iVar8 == iVar9) && iVar5 == iVar2) {
        *param_2 = iVar2;
        param_2[1] = iVar6;
        param_2[2] = iVar3;
        param_2[3] = iVar8;
      }
      else {
        if (iVar2 != iVar3) {
          return 0;
        }
        if (iVar7 != iVar8) {
          return 0;
        }
        if (iVar4 != iVar5) {
          return 0;
        }
        if (iVar9 != iVar6) {
          return 0;
        }
        *param_2 = iVar2;
        param_2[1] = iVar7;
        param_2[2] = iVar4;
        param_2[3] = iVar6;
      }
      goto LAB_1097ddbe4;
    }
    if (cVar10 != '\x03') {
      return 0;
    }
    uVar17 = uVar16 + 1;
    if (*(uint *)(plVar13 + 2) <= uVar17) {
      plVar12 = (long *)*plVar13;
      uVar17 = 0;
      if (plVar12 == plVar14) {
        uVar17 = uVar16 + 1;
      }
      plVar13 = (long *)0x0;
      if (plVar12 != plVar14) {
        uVar15 = 0;
        plVar13 = plVar12;
      }
    }
  }
  param_2[2] = iVar2;
  param_2[3] = iVar6;
  *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 2);
  *param_1 = plVar14;
LAB_1097ddbe4:
  param_1[1] = plVar13;
  *(uint *)(param_1 + 2) = uVar17;
  *(uint *)((long)param_1 + 0x14) = uVar15;
  return 1;
}



/* Entry: 1097ddc5c; end: 1097ddef3;  */

uint FUN_1097ddc5c(undefined8 param_1,double param_2,double param_3,long param_4,int param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  
  if (-1 < *(char *)(param_4 + 0x10)) {
    uStack_48 = 0;
    uStack_40 = CONCAT44(SUB84(param_3 + 26388279066624.0,0),SUB84(param_2 + 26388279066624.0,0));
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_50 = param_1;
    FUN_1097dce2c(param_4,0x1097ddd34,0x1097ddd88,0x1097dddd4,0x1097ddebc,&uStack_50);
    if ((int)uStack_38 != 0) {
      FUN_1097ddef4(&uStack_50,(long)&uStack_38 + 4,auStack_2c);
    }
    if ((int)uStack_48 == 0) {
      if (param_5 == 0) {
        uStack_48._4_4_ = (uint)(uStack_48._4_4_ != 0);
      }
      else if (param_5 == 1) {
        uStack_48._4_4_ = uStack_48._4_4_ & 1;
      }
      else {
        uStack_48._4_4_ = 0;
      }
    }
    else {
      uStack_48._4_4_ = 1;
    }
    return uStack_48._4_4_;
  }
  return 0;
}



/* Entry: 1097ddef4; end: 1097de02f;  */

void FUN_1097ddef4(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  piVar1 = param_2;
  if (param_2[1] <= param_3[1]) {
    piVar1 = param_3;
  }
  iVar8 = -1;
  if (param_2[1] <= param_3[1]) {
    param_3 = param_2;
    iVar8 = 1;
  }
  iVar4 = *param_3;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar4 == iVar5) {
    iVar6 = *(int *)(param_1 + 0x14);
    if (param_3[1] == iVar6) goto LAB_1097de00c;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x14);
  }
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  if ((iVar2 != iVar5 || iVar3 != iVar6) &&
     ((((iVar3 < iVar6 || (iVar6 < param_3[1])) || (iVar5 < iVar4 && iVar5 < iVar2)) ||
      ((iVar4 < iVar5 && iVar2 < iVar5 ||
       (piVar7 = param_3, FUN_1097de030(param_3,piVar1,iVar6,iVar5), (int)piVar7 != 0)))))) {
    if (iVar3 <= iVar6) {
      return;
    }
    if (iVar6 < param_3[1]) {
      return;
    }
    if (iVar5 <= iVar4 && iVar5 <= iVar2) {
      return;
    }
    if ((iVar5 < iVar4 || iVar5 < iVar2) &&
       (FUN_1097de030(param_3,piVar1,iVar6,iVar5), -1 < (int)param_3)) {
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar8;
    return;
  }
LAB_1097de00c:
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1097de030; end: 1097de087;  */

ulong FUN_1097de030(int *param_1,int *param_2,int param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)param_4 - (long)*param_1;
  uVar1 = (long)*param_2 - (long)*param_1;
  uVar2 = (uint)lVar3;
  if ((uint)uVar1 == 0) {
    uVar1 = (ulong)-uVar2;
  }
  else if (-1 < (int)((uint)uVar1 ^ uVar2)) {
    lVar4 = ((long)param_3 - (long)param_1[1]) * uVar1;
    lVar3 = ((long)param_2[1] - (long)param_1[1]) * lVar3;
    uVar2 = (uint)(lVar4 - lVar3 != 0 && lVar3 <= lVar4);
    if (lVar4 < lVar3) {
      uVar2 = 0xffffffff;
    }
    return (ulong)uVar2;
  }
  return uVar1;
}



/* Entry: 1097de088; end: 1097de0d3;  */

undefined8 FUN_1097de088(long param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1097ddef4(param_1,param_1 + 0x1c,param_2);
  }
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return 0;
}



/* Entry: 1097de0d4; end: 1097de3eb;  */

double ** FUN_1097de0d4(double **param_1,double *param_2,double *param_3,undefined8 param_4,
                       double **param_5)

{
  code *pcVar1;
  double **ppdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  double *pdStack_198;
  double *pdStack_190;
  undefined4 uStack_188;
  int iStack_184;
  int iStack_180;
  double **ppdStack_178;
  undefined4 uStack_160;
  uint auStack_158 [6];
  double dStack_140;
  double dStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined1 *puStack_108;
  undefined1 auStack_100 [160];
  
  if ((((*(int *)((long)param_2 + 0xc) != 0) || (param_2[2] < 1.4142135623730951)) ||
      (((ulong)param_2[1] & 0xfffffffd) != 0)) || ((param_3[1] != 0.0 || (param_3[2] != 0.0)))) {
    return (double **)0x64;
  }
  uStack_188 = (undefined4)param_4;
  auVar4 = NEON_fmov(0x3fe0000000000000,8);
  iStack_180 = SUB84(ABS(param_3[3]) * *param_2 * auVar4._8_8_ + 26388279066624.0,0);
  iStack_184 = SUB84(ABS(*param_3) * *param_2 * auVar4._0_8_ + 26388279066624.0,0);
  uStack_114 = 0x800000000;
  dVar3 = param_2[3];
  uStack_160 = 0;
  auStack_158[0] = (uint)(dVar3 != 0.0);
  pdStack_198 = param_2;
  pdStack_190 = param_3;
  puStack_108 = auStack_100;
  ppdStack_178 = param_5;
  if (dVar3 == 0.0) {
LAB_1097de210:
    uStack_128 = 0;
    ppdVar2 = param_1;
    FUN_1097dd8d8(param_1,&iStack_1a8);
    if ((((int)ppdVar2 == 0) || (iStack_1a0 - iStack_1a8 <= iStack_184 * 2)) ||
       (iStack_19c - iStack_1a4 <= iStack_180 * 2)) goto LAB_1097de300;
    iStack_1b8 = iStack_1a8 - iStack_184;
    iStack_1b0 = iStack_184 + iStack_1a0;
    iStack_1b4 = iStack_1a4 - iStack_180;
    iStack_1ac = iStack_180 + iStack_1a4;
    FUN_1097c8e80(param_5,param_4,&iStack_1b8);
    iStack_1b8 = iStack_1a8 - iStack_184;
    iStack_1b0 = iStack_184 + iStack_1a8;
    iStack_1b4 = iStack_180 + iStack_1a4;
    iStack_1ac = iStack_19c - iStack_180;
    FUN_1097c8e80(param_5,param_4,&iStack_1b8);
    iStack_1b8 = iStack_1a0 - iStack_184;
    iStack_1b0 = iStack_184 + iStack_1a0;
    iStack_1b4 = iStack_180 + iStack_1a4;
    iStack_1ac = iStack_19c - iStack_180;
    FUN_1097c8e80(param_5,param_4,&iStack_1b8);
    iStack_1b8 = iStack_1a8 - iStack_184;
    iStack_1b0 = iStack_184 + iStack_1a0;
    iStack_1b4 = iStack_19c - iStack_180;
    iStack_1ac = iStack_180 + iStack_19c;
    FUN_1097c8e80(param_5,param_4,&iStack_1b8);
LAB_1097de3b4:
    if (puStack_108 != auStack_100) {
      _free();
    }
    param_1 = (double **)0x0;
  }
  else {
    uStack_130 = *(undefined4 *)(param_2 + 4);
    dStack_140 = param_2[5];
    dStack_138 = dVar3;
    FUN_1097f3d84(auStack_158);
    uStack_128 = 0;
    if (auStack_158[0] == 0) goto LAB_1097de210;
LAB_1097de300:
    if (*(int *)(param_5 + 4) != 0) {
      uStack_128 = 1;
      func_0x0001097ed390(param_5[3],*(int *)(param_5 + 4),&uStack_124);
      uStack_11c = CONCAT44((int)((ulong)uStack_11c >> 0x20) + iStack_180,
                            (int)uStack_11c + iStack_184);
      uStack_124 = CONCAT44((int)((ulong)uStack_124 >> 0x20) - iStack_180,
                            (int)uStack_124 - iStack_184);
    }
    pcVar1 = FUN_1097de6b8;
    if (auStack_158[0] != 0) {
      pcVar1 = FUN_1097de458;
    }
    FUN_1097dce2c(param_1,FUN_1097de3ec,pcVar1,0,0x1097de71c,&pdStack_198);
    if ((int)param_1 == 0) {
      if (auStack_158[0] == 0) {
        param_1 = &pdStack_198;
        FUN_1097dea0c();
      }
      else {
        param_1 = &pdStack_198;
        FUN_1097de7a0();
      }
      if (((int)param_1 == 0) &&
         (param_1 = param_5, FUN_1097c5b20(param_5,0,param_5), (int)param_1 == 0))
      goto LAB_1097de3b4;
    }
    if (puStack_108 != auStack_100) {
      _free();
    }
    FUN_1097c916c(param_5);
  }
  return param_1;
}



/* Entry: 1097de3ec; end: 1097de457;  */

long FUN_1097de3ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_1097dea0c();
  }
  else {
    FUN_1097de7a0();
  }
  if ((int)lVar1 == 0) {
    FUN_1097f3d84((int *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x28) = *param_2;
    *(undefined8 *)(param_1 + 0x30) = *param_2;
  }
  return lVar1;
}



/* Entry: 1097de458; end: 1097de6b7;  */

undefined8 FUN_1097de458(long param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *param_2;
  if ((iVar4 - iVar3 == 0) && (*(int *)(param_1 + 0x2c) == param_2[1])) {
    return 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
LAB_1097de518:
    bVar6 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x74) <= iVar3) && (iVar3 <= *(int *)(param_1 + 0x7c))) {
      if (((*(int *)(param_1 + 0x78) <= *(int *)(param_1 + 0x2c)) &&
          (((iVar4 <= *(int *)(param_1 + 0x7c) && (*(int *)(param_1 + 0x74) <= iVar4)) &&
           (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x80))))) &&
         ((*(int *)(param_1 + 0x78) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x80)))))
      goto LAB_1097de518;
    }
    bVar6 = true;
  }
  uVar5 = param_2[1] - *(int *)(param_1 + 0x2c);
  bVar7 = uVar5 == 0;
  lVar10 = 0;
  if (!(bool)bVar7) {
    lVar10 = 0x18;
  }
  uVar1 = iVar4 - iVar3;
  if (!(bool)bVar7) {
    uVar1 = uVar5;
  }
  bVar11 = 2;
  if ((bool)bVar7) {
    bVar11 = 3;
  }
  uVar5 = -uVar1;
  if (-1 < (int)uVar1) {
    bVar7 = bVar11;
    uVar5 = uVar1;
  }
  dVar14 = (double)uVar5 / 256.0;
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  if (0.0 < dVar14) {
    dVar15 = ABS(*(double *)(*(long *)(param_1 + 8) + lVar10));
    bVar8 = (bVar7 & 1) != 0;
    piVar2 = param_2 + 1;
    if (bVar8) {
      piVar2 = param_2;
    }
    lVar10 = 0xc;
    if (bVar8) {
      lVar10 = 8;
    }
    do {
      uStack_90 = uStack_88;
      dVar12 = dVar15 * *(double *)(param_1 + 0x50);
      if (dVar14 <= dVar12) {
        dVar12 = dVar14;
      }
      dVar14 = dVar14 - dVar12;
      dVar13 = dVar14;
      if (-1 < (int)uVar1) {
        dVar13 = -dVar14;
      }
      *(int *)((long)&uStack_90 + lVar10) = *piVar2 + SUB84(dVar13 + 26388279066624.0,0);
      if (*(int *)(param_1 + 0x48) == 0) {
LAB_1097de60c:
        bVar8 = false;
      }
      else {
        if (bVar6) {
          lVar9 = param_1 + 0x74;
          func_0x0001097ed4b8(lVar9,&uStack_90);
          if ((int)lVar9 == 0) goto LAB_1097de60c;
        }
        bVar11 = 4;
        if (0.0 < dVar14) {
          bVar11 = 0;
        }
        lVar9 = param_1;
        FUN_1097debf4(param_1,&uStack_90,&uStack_88,bVar11 | bVar7);
        bVar8 = true;
        if ((int)lVar9 != 0) {
          return 1;
        }
      }
      func_0x0001097f3de4(dVar12 / dVar15,param_1 + 0x40);
    } while (0.0 < dVar14);
    if (bVar8) goto LAB_1097de670;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uStack_90 = uStack_88;
    if (bVar6) {
      lVar10 = param_1 + 0x74;
      func_0x0001097ed4b8(lVar10,&uStack_90);
      if ((int)lVar10 == 0) goto LAB_1097de670;
    }
    lVar10 = param_1;
    FUN_1097debf4(param_1,&uStack_90,&uStack_90,bVar7 | 4);
    if ((int)lVar10 != 0) {
      return 1;
    }
  }
LAB_1097de670:
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x38) = 1;
  return 0;
}



/* Entry: 1097de6b8; end: 1097de79f;  */

void FUN_1097de6b8(long param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != *param_2 || *(int *)(param_1 + 0x2c) != param_2[1]) {
    uVar1 = 4;
    if (*(int *)(param_1 + 0x2c) == param_2[1]) {
      uVar1 = 5;
    }
    FUN_1097debf4(param_1,(int *)(param_1 + 0x28),param_2,uVar1);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 1097de7a0; end: 1097dea0b;  */

void FUN_1097de7a0(long *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = (ulong)*(uint *)((long)param_1 + 0x84);
  if (0 < (int)*(uint *)((long)param_1 + 0x84)) {
    lVar14 = 0;
    uVar15 = 0;
    iVar3 = *(int *)((long)param_1 + 0x14);
    iVar4 = (int)param_1[3];
    iVar5 = *(int *)(*param_1 + 8);
    do {
      lVar16 = param_1[0x12];
      piVar1 = (int *)(lVar16 + lVar14);
      uVar6 = piVar1[4];
      if (((iVar5 == 0) && ((uVar6 >> 2 & 1) != 0)) &&
         ((iVar10 = (int)uVar11, uVar15 != iVar10 - 1 ||
          (((int)param_1[7] == 0 && (*(int *)((long)param_1 + 0x4c) != 0)))))) {
        iVar13 = (int)uVar15 + 1;
        iVar8 = 0;
        if (iVar10 != 0) {
          iVar8 = iVar13 / iVar10;
        }
        piVar12 = (int *)(lVar16 + (ulong)(uint)(iVar13 - iVar8 * iVar10) * 0x14);
        uStack_70 = *(undefined8 *)(lVar16 + lVar14 + 8);
        iVar10 = (int)uStack_70;
        iVar13 = (int)((ulong)uStack_70 >> 0x20);
        uStack_68 = uStack_70;
        if ((uVar6 & 1) == 0) {
          if ((uVar6 >> 1 & 1) == 0) {
            uStack_70 = CONCAT44(iVar13 - iVar4,iVar10);
          }
          else {
            uStack_68 = CONCAT44(iVar4 + iVar13,iVar10);
          }
          if (*piVar12 < piVar12[2]) {
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar10 - iVar3);
          }
          else {
            uStack_68 = CONCAT44(uStack_68._4_4_,iVar3 + iVar10);
          }
        }
        else {
          if ((uVar6 >> 1 & 1) == 0) {
            uStack_70 = CONCAT44(iVar13,iVar10 - iVar3);
          }
          else {
            uStack_68 = CONCAT44(iVar13,iVar3 + iVar10);
          }
          if (piVar12[1] < piVar12[3]) {
            uStack_70 = CONCAT44(iVar13 - iVar4,(undefined4)uStack_70);
          }
          else {
            uStack_68 = CONCAT44(iVar4 + iVar13,(undefined4)uStack_68);
          }
        }
        lVar9 = param_1[4];
        FUN_1097c8e80(lVar9,(int)param_1[2],&uStack_70);
        if ((int)lVar9 != 0) {
          return;
        }
      }
      piVar12 = piVar1 + 2;
      if ((uVar6 & 1) == 0) {
        if (iVar5 == 2) {
          lVar9 = lVar16 + lVar14;
          iVar13 = *(int *)(lVar9 + 4);
          iVar8 = *(int *)(lVar9 + 0xc);
          iVar10 = iVar4;
          if (iVar13 <= iVar8) {
            iVar10 = -iVar4;
          }
          iVar7 = -iVar4;
          if (iVar13 <= iVar8) {
            iVar7 = iVar4;
          }
          *(int *)(lVar9 + 4) = iVar13 + iVar10;
          *(int *)(lVar9 + 0xc) = iVar8 + iVar7;
        }
        iVar10 = *piVar1 + iVar3;
        *piVar1 = iVar10;
        iVar13 = *piVar12 - iVar3;
        *piVar12 = iVar13;
      }
      else {
        iVar8 = *piVar1;
        iVar13 = *piVar12;
        iVar10 = iVar8;
        if (iVar5 == 2) {
          iVar10 = iVar3;
          if (iVar8 <= iVar13) {
            iVar10 = -iVar3;
          }
          iVar10 = iVar8 + iVar10;
          iVar7 = -iVar3;
          if (iVar8 <= iVar13) {
            iVar7 = iVar3;
          }
          iVar13 = iVar13 + iVar7;
          *piVar1 = iVar10;
          *piVar12 = iVar13;
        }
        lVar9 = lVar16 + lVar14;
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + iVar4;
        *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) - iVar4;
      }
      lVar16 = lVar16 + lVar14;
      iVar8 = *(int *)(lVar16 + 4);
      iVar7 = *(int *)(lVar16 + 0xc);
      if (iVar10 != iVar13 || iVar8 != iVar7) {
        if (iVar13 <= iVar10) {
          piVar12 = piVar1;
          iVar10 = iVar13;
        }
        iVar13 = iVar8;
        if (iVar7 <= iVar8) {
          iVar13 = iVar7;
        }
        uStack_70 = CONCAT44(iVar13,iVar10);
        puVar2 = (undefined4 *)(lVar16 + 0xc);
        if (iVar7 <= iVar8) {
          puVar2 = (undefined4 *)(lVar16 + 4);
        }
        uStack_68 = CONCAT44(*puVar2,*piVar12);
        lVar16 = param_1[4];
        FUN_1097c8e80(lVar16,(int)param_1[2],&uStack_70);
        if ((int)lVar16 != 0) {
          return;
        }
      }
      uVar15 = uVar15 + 1;
      uVar11 = (ulong)*(int *)((long)param_1 + 0x84);
      lVar14 = lVar14 + 0x14;
    } while ((long)uVar15 < (long)uVar11);
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  return;
}



/* Entry: 1097dea0c; end: 1097debf3;  */

void FUN_1097dea0c(long *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  lVar16 = 0;
  uVar18 = 0;
  iVar8 = *(int *)(*param_1 + 8);
  iVar6 = *(int *)((long)param_1 + 0x14);
  iVar7 = (int)param_1[3];
  do {
    iVar17 = *(int *)((long)param_1 + 0x84);
    if ((long)iVar17 <= (long)uVar18) {
      *(undefined4 *)((long)param_1 + 0x84) = 0;
      return;
    }
    lVar12 = param_1[0x12];
    piVar1 = (int *)(lVar12 + lVar16);
    uVar9 = iVar17 - 1;
    if (lVar16 != 0) {
      iVar17 = (int)uVar18;
    }
    uVar2 = (*(uint *)(lVar12 + (long)iVar17 * 0x14 + -4) ^ piVar1[4]) & 1;
    uVar19 = (uint)(iVar8 != 0);
    uVar3 = uVar19;
    if (lVar16 != 0) {
      uVar3 = uVar2;
    }
    bVar10 = uVar18 != uVar9;
    lVar5 = 0;
    if (bVar10) {
      lVar5 = uVar18 + 1;
    }
    uVar9 = (*(uint *)(lVar12 + lVar5 * 0x14 + 0x10) ^ piVar1[4]) & 1;
    if (bVar10) {
      uVar19 = uVar9;
    }
    if ((int)param_1[7] != 0) {
      uVar9 = uVar19;
      uVar2 = uVar3;
    }
    piVar11 = piVar1 + 1;
    iVar17 = *piVar11;
    piVar13 = piVar1 + 3;
    iVar14 = *piVar13;
    if (uVar9 == 0 && uVar2 == 0) goto LAB_1097deb4c;
    if (iVar17 == iVar14) {
      iStack_60 = *piVar1;
      iVar15 = piVar1[2];
      iVar14 = iVar17;
      if (iStack_60 < iVar15) {
        if (uVar2 != 0) {
          iStack_60 = iStack_60 - iVar6;
          *piVar1 = iStack_60;
        }
        iVar17 = iVar6;
        if (uVar9 != 0) {
LAB_1097deb2c:
          iVar15 = iVar15 + iVar17;
          piVar1[2] = iVar15;
        }
      }
      else {
        if (uVar2 != 0) {
          iStack_60 = iStack_60 + iVar6;
          *piVar1 = iStack_60;
        }
        if (uVar9 != 0) {
          iVar17 = -iVar6;
          goto LAB_1097deb2c;
        }
      }
LAB_1097deb60:
      iVar17 = iVar14 - iVar7;
      *piVar11 = iVar17;
      *piVar13 = iVar14 + iVar7;
      iVar14 = iVar14 + iVar7;
    }
    else {
      if (iVar17 < iVar14) {
        if (uVar2 != 0) {
          iVar17 = iVar17 - iVar7;
          *piVar11 = iVar17;
        }
        iVar15 = iVar7;
        if (uVar9 != 0) {
LAB_1097deb48:
          iVar14 = iVar14 + iVar15;
          *piVar13 = iVar14;
        }
      }
      else {
        if (uVar2 != 0) {
          iVar17 = iVar17 + iVar7;
          *piVar11 = iVar17;
        }
        if (uVar9 != 0) {
          iVar15 = -iVar7;
          goto LAB_1097deb48;
        }
      }
LAB_1097deb4c:
      iStack_60 = *piVar1;
      iVar15 = piVar1[2];
      if (iVar17 == iVar14) goto LAB_1097deb60;
      iStack_60 = iStack_60 - iVar6;
      *piVar1 = iStack_60;
      iVar15 = iVar15 + iVar6;
      piVar1[2] = iVar15;
    }
    piVar4 = piVar1 + 2;
    if (iVar15 <= iStack_60) {
      piVar4 = piVar1;
      iStack_60 = iVar15;
    }
    iStack_5c = iVar17;
    if (iVar14 <= iVar17) {
      iStack_5c = iVar14;
    }
    iStack_58 = *piVar4;
    if (iVar14 <= iVar17) {
      piVar13 = piVar11;
    }
    iStack_54 = *piVar13;
    lVar12 = param_1[4];
    FUN_1097c8e80(lVar12,(int)param_1[2],&iStack_60);
    lVar16 = lVar16 + 0x14;
    uVar18 = uVar18 + 1;
    if ((int)lVar12 != 0) {
      return;
    }
  } while( true );
}



/* Entry: 1097debf4; end: 1097ded13;  */

undefined8 FUN_1097debf4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  iVar5 = *(int *)(param_1 + 0x84);
  if (iVar5 == *(int *)(param_1 + 0x88)) {
    uVar6 = (long)iVar5 << 1;
    lVar4 = *(long *)(param_1 + 0x90);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    bVar2 = SUB168(auVar1 * ZEXT816(0x14),8) != 0;
    lVar3 = (long)iVar5 * 0x28;
    if (lVar4 == param_1 + 0x98) {
      if (lVar3 == 0 || bVar2) {
        return 1;
      }
      _malloc();
      if (lVar3 == 0) {
        return 1;
      }
      _memcpy();
    }
    else {
      if ((bVar2) || (_realloc(), lVar4 == 0)) {
        return 1;
      }
      iVar5 = *(int *)(param_1 + 0x84);
      lVar3 = lVar4;
    }
    *(int *)(param_1 + 0x88) = (int)uVar6;
    *(long *)(param_1 + 0x90) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x90);
  }
  *(undefined8 *)(lVar3 + (long)iVar5 * 0x14) = *param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x84) * 0x14 + 8) = *param_3;
  iVar5 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar5 * 0x14 + 0x10) = param_4;
  *(int *)(param_1 + 0x84) = iVar5 + 1;
  return 0;
}



/* Entry: 1097ded14; end: 1097df077;  */

undefined1 *
FUN_1097ded14(double param_1,undefined1 *param_2,double *param_3,double *param_4,undefined8 param_5,
             long param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  int unaff_s10;
  double dVar17;
  double dVar18;
  double dStack_960;
  double dStack_958;
  double dStack_950;
  double dStack_948;
  double dStack_940;
  double dStack_938;
  double dStack_930;
  double dStack_928;
  double dStack_920;
  double dStack_918;
  undefined4 uStack_900;
  undefined1 *puStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e8;
  undefined1 **ppuStack_8e0;
  undefined1 auStack_8d8 [528];
  undefined4 uStack_6c8;
  undefined1 *puStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined1 **ppuStack_6a8;
  undefined1 auStack_6a0 [440];
  undefined1 auStack_4e8 [72];
  long lStack_4a0;
  long lStack_498;
  double *pdStack_490;
  undefined8 uStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  code *pcStack_468;
  undefined1 auStack_460 [16];
  int iStack_450;
  undefined1 *puStack_448;
  undefined1 auStack_440 [16];
  undefined1 *puStack_430;
  undefined1 auStack_428 [752];
  undefined8 uStack_138;
  undefined4 uStack_e8;
  uint uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  
  if (*(int *)(param_3 + 4) != 0) {
    puVar2 = auStack_4e8;
    FUN_1097e1dac(param_1,puVar2,param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x28),
                  *(undefined4 *)(param_6 + 0x30));
    if ((int)puVar2 == 0) {
      pcStack_468 = FUN_1097ea088;
      pcVar1 = FUN_1097e2324;
      if (unaff_s10 != 0) {
        pcVar1 = FUN_1097e1f88;
      }
      dStack_470 = (double)param_6;
      FUN_1097dce2c(param_2,FUN_1097e1f38,pcVar1,FUN_1097e24c4,FUN_1097e27cc,auStack_4e8);
      if ((int)param_2 == 0) {
        param_2 = auStack_4e8;
        FUN_1097e2858(param_2);
      }
      puVar2 = param_2;
      if (puStack_430 != auStack_428) {
        _free();
      }
    }
    return puVar2;
  }
  uStack_98 = *(uint *)(param_6 + 0x30);
  if (uStack_98 != 0) {
    puVar6 = *(undefined8 **)(param_6 + 0x28);
    uVar15 = puVar6[1];
    uVar13 = *puVar6;
    uStack_94._0_4_ = (int)uVar13;
    uStack_94._4_4_ = (int)((ulong)uVar13 >> 0x20);
    uStack_8c._0_4_ = (int)uVar15;
    uStack_8c._4_4_ = (int)((ulong)uVar15 >> 0x20);
    iVar9 = (int)uStack_94;
    iVar10 = (int)uStack_8c;
    iVar11 = uStack_94._4_4_;
    iVar12 = uStack_8c._4_4_;
    if (1 < (int)uStack_98) {
      lVar4 = (ulong)uStack_98 - 1;
      piVar7 = (int *)((long)puVar6 + 0x1c);
      do {
        iVar9 = piVar7[-3];
        if ((int)uStack_94 <= piVar7[-3]) {
          iVar9 = (int)uStack_94;
        }
        iVar10 = piVar7[-1];
        if (piVar7[-1] <= (int)uStack_8c) {
          iVar10 = (int)uStack_8c;
        }
        iVar11 = piVar7[-2];
        if (uStack_94._4_4_ <= piVar7[-2]) {
          iVar11 = uStack_94._4_4_;
        }
        iVar12 = *piVar7;
        if (*piVar7 <= uStack_8c._4_4_) {
          iVar12 = uStack_8c._4_4_;
        }
        lVar4 = lVar4 + -1;
        piVar7 = piVar7 + 4;
        uStack_94._0_4_ = iVar9;
        uStack_8c._0_4_ = iVar10;
        uStack_94._4_4_ = iVar11;
        uStack_8c._4_4_ = iVar12;
      } while (lVar4 != 0);
    }
    uStack_94 = uVar13;
    uStack_8c = uVar15;
    FUN_1097f3ec8(param_3,param_2,param_4,&dStack_958,&dStack_960);
    iVar3 = SUB84(dStack_958 + 26388279066624.0,0);
    iVar5 = SUB84(dStack_960 + 26388279066624.0,0);
    uStack_94 = CONCAT44(iVar11 - iVar5,iVar9 - iVar3);
    uStack_8c = CONCAT44(iVar12 + iVar5,iVar10 + iVar3);
  }
  dStack_948 = param_3[1];
  dStack_950 = *param_3;
  dStack_938 = param_3[3];
  dStack_940 = param_3[2];
  dStack_928 = param_3[5];
  dStack_930 = param_3[4];
  dStack_918 = param_3[7];
  dStack_920 = param_3[6];
  dVar16 = *param_3 * 0.5;
  dVar17 = *param_4;
  dVar18 = param_4[1];
  dVar14 = dVar16 * dVar17;
  pdStack_490 = param_4;
  uStack_488 = param_5;
  dStack_480 = param_1;
  dStack_470 = dVar16;
  _hypot(dVar14,dVar16 * dVar18);
  dStack_478 = -1.0;
  if (param_1 < dVar14) {
    dVar14 = 1.0 - param_1 / dVar14;
    dVar14 = dVar14 * dVar14;
    dStack_478 = dVar14 + dVar14 + -1.0;
  }
  pcStack_468 = (code *)CONCAT44(pcStack_468._4_4_,
                                 (uint)(0.0 <= -(dVar18 * param_4[2]) + param_4[3] * dVar17));
  iStack_450 = 0;
  if (((((byte)param_2[0x10] >> 3 & 1) != 0) || (*(int *)((long)param_3 + 0xc) == 1)) ||
     (*(int *)(param_3 + 1) == 1)) {
    puVar2 = auStack_460;
    FUN_1097e6538(dVar16,param_1,puVar2,param_4);
    if ((int)puVar2 != 0) {
      return puVar2;
    }
    if (iStack_450 < 2) {
      return (undefined1 *)0x0;
    }
  }
  uStack_e8 = 0;
  uStack_138 = 0;
  uStack_900 = 1;
  puStack_8f8 = auStack_8d8;
  ppuStack_8e0 = &puStack_8f8;
  uStack_8f0 = 0x4000000000;
  lStack_8e8 = 0;
  uStack_6c8 = 0xffffffff;
  puStack_6c0 = auStack_6a0;
  ppuStack_6a8 = &puStack_6c0;
  lStack_6b0 = 0;
  uStack_6b8 = 0x4000000000;
  lStack_4a0 = (long)(param_1 * 256.0 * param_1 * 256.0);
  lStack_498 = param_6;
  FUN_1097dce2c(param_2,FUN_1097df078,FUN_1097df0bc,0x1097df314,0x1097df4f8,&dStack_950);
  lVar4 = lStack_8e8;
  if ((int)param_2 == 0) {
    FUN_1097df898(&dStack_950);
    lVar4 = lStack_8e8;
  }
  while (lVar8 = lStack_6b0, lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    _free();
  }
  while (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x10);
    _free();
  }
  if ((iStack_450 != 0) && (puStack_448 != auStack_440)) {
    _free();
  }
  return param_2;
}



/* Entry: 1097df078; end: 1097df0bb;  */

undefined8 FUN_1097df078(long param_1,undefined8 *param_2)

{
  FUN_1097df898();
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = *param_2;
  *(undefined8 *)(param_1 + 0x828) = *param_2;
  return 0;
}



/* Entry: 1097df0bc; end: 1097df897;  */

undefined8 FUN_1097df0bc(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iStack_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 0x818) = 1;
  iVar4 = *param_2 - *(int *)(param_1 + 0x828);
  if (iVar4 == 0) {
    iVar6 = *(int *)(param_1 + 0x82c);
    iVar2 = param_2[1];
    if (iVar6 == iVar2) {
      return 0;
    }
  }
  else {
    iVar2 = param_2[1];
    iVar6 = *(int *)(param_1 + 0x82c);
  }
  puVar1 = (undefined8 *)(param_1 + 0x820);
  iVar2 = iVar2 - iVar6;
  iStack_90 = iVar4;
  iStack_8c = iVar2;
  FUN_1097dfa18(param_1 + 0x828,&iStack_90,param_1,&uStack_88);
  if (*(int *)(param_1 + 0x81c) == 0) {
    if (*(int *)(param_1 + 0x868) == 0) {
      *(undefined8 *)(param_1 + 0x888) = uStack_70;
      *(undefined8 *)(param_1 + 0x880) = uStack_78;
      *(undefined8 *)(param_1 + 0x898) = uStack_60;
      *(undefined8 *)(param_1 + 0x890) = uStack_68;
      *(undefined8 *)(param_1 + 0x8a8) = uStack_50;
      *(undefined8 *)(param_1 + 0x8a0) = uStack_58;
      *(undefined8 *)(param_1 + 0x8b0) = uStack_48;
      *(undefined8 *)(param_1 + 0x878) = uStack_80;
      *(undefined8 *)(param_1 + 0x870) = uStack_88;
      *(undefined4 *)(param_1 + 0x868) = 1;
    }
    *(undefined4 *)(param_1 + 0x81c) = 1;
    plVar7 = *(long **)(param_1 + 0x70);
    iVar6 = (int)plVar7[1];
    if (iVar6 == *(int *)((long)plVar7 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x40,&uStack_78);
    }
    else {
      *(int *)(plVar7 + 1) = iVar6 + 1;
      *(undefined8 *)(*plVar7 + (long)iVar6 * 8) = uStack_78;
    }
    plVar7 = *(long **)(param_1 + 0x2a8);
    iVar6 = (int)plVar7[1];
    if (iVar6 == *(int *)((long)plVar7 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x278,&uStack_88);
    }
    else {
      *(int *)(plVar7 + 1) = iVar6 + 1;
      *(undefined8 *)(*plVar7 + (long)iVar6 * 8) = uStack_88;
    }
  }
  else {
    lVar5 = param_1 + 0x838;
    FUN_1097f1294(lVar5,&uStack_70);
    if ((uint)lVar5 != 0) {
      uVar3 = (uint)lVar5 >> 0x1f;
      FUN_1097dfc20(param_1,puVar1,&uStack_88,uVar3);
      FUN_1097dfe58(param_1,puVar1,&uStack_88,uVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x860) = uStack_48;
  *(undefined8 *)(param_1 + 0x848) = uStack_60;
  *(undefined8 *)(param_1 + 0x840) = uStack_68;
  *(undefined8 *)(param_1 + 0x858) = uStack_50;
  *(undefined8 *)(param_1 + 0x850) = uStack_58;
  *(undefined8 *)(param_1 + 0x828) = uStack_80;
  *puVar1 = uStack_88;
  *(undefined8 *)(param_1 + 0x838) = uStack_70;
  *(undefined8 *)(param_1 + 0x830) = uStack_78;
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)param_2;
  *(int *)(param_1 + 0x820) = *(int *)(param_1 + 0x820) + iVar4;
  *(int *)(param_1 + 0x824) = *(int *)(param_1 + 0x824) + iVar2;
  *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + iVar4;
  *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + iVar2;
  plVar7 = *(long **)(param_1 + 0x70);
  iVar4 = (int)plVar7[1];
  if (iVar4 == *(int *)((long)plVar7 + 0xc)) {
    FUN_1097cc5e0(param_1 + 0x40);
  }
  else {
    *(int *)(plVar7 + 1) = iVar4 + 1;
    *(undefined8 *)(*plVar7 + (long)iVar4 * 8) = *(undefined8 *)(param_1 + 0x830);
  }
  plVar7 = *(long **)(param_1 + 0x2a8);
  iVar4 = (int)plVar7[1];
  if (iVar4 == *(int *)((long)plVar7 + 0xc)) {
    FUN_1097cc5e0(param_1 + 0x278,puVar1);
  }
  else {
    *(int *)(plVar7 + 1) = iVar4 + 1;
    *(undefined8 *)(*plVar7 + (long)iVar4 * 8) = *puVar1;
  }
  return 0;
}



/* Entry: 1097df898; end: 1097dfa17;  */

void FUN_1097df898(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  if ((((*(int *)(param_1 + 0x818) != 0) && (*(int *)(param_1 + 0x868) == 0)) &&
      (*(int *)(param_1 + 0x81c) == 0)) && (*(int *)(param_1 + 8) == 1)) {
    uStack_28 = 0x100;
    FUN_1097dfa18(param_1 + 0x810,&uStack_28,param_1,auStack_70);
    FUN_1097e0324(param_1,auStack_70,param_1 + 0x278);
    FUN_1097e0384(param_1,auStack_70,param_1 + 0x278);
    puVar3 = *(undefined8 **)(param_1 + 0x290);
    plVar4 = *(long **)(param_1 + 0x2a8);
    iVar1 = (int)plVar4[1];
    if (iVar1 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x278);
    }
    else {
      *(int *)(plVar4 + 1) = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = *puVar3;
    }
    func_0x0001097ea764(*(undefined8 *)(param_1 + 0x4b8),param_1 + 0x278);
    FUN_1097cc65c(param_1 + 0x278);
    return;
  }
  if (*(int *)(param_1 + 0x81c) != 0) {
    FUN_1097e0384(param_1,param_1 + 0x820,param_1 + 0x278);
  }
  func_0x0001097ea764(*(undefined8 *)(param_1 + 0x4b8),param_1 + 0x278);
  FUN_1097cc65c(param_1 + 0x278);
  if (*(int *)(param_1 + 0x868) != 0) {
    plVar4 = *(long **)(param_1 + 0x2a8);
    iVar1 = (int)plVar4[1];
    if (iVar1 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x278);
    }
    else {
      *(int *)(plVar4 + 1) = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = *(undefined8 *)(param_1 + 0x880);
    }
    FUN_1097e0324(param_1,param_1 + 0x870,param_1 + 0x278);
    func_0x0001097ea764(*(undefined8 *)(param_1 + 0x4b8),param_1 + 0x278);
    FUN_1097cc65c(param_1 + 0x278);
  }
  func_0x0001097ea764(*(undefined8 *)(param_1 + 0x4b8),param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x68);
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    _free();
  }
  *(long *)(param_1 + 0x58) = param_1 + 0x78;
  *(undefined8 *)(param_1 + 0x60) = 0x4000000000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long **)(param_1 + 0x70) = (long *)(param_1 + 0x58);
  return;
}



/* Entry: 1097dfa18; end: 1097dfc1f;  */

void FUN_1097dfa18(int *param_1,int *param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (double)*param_2 / 256.0;
  dVar8 = (double)param_2[1] / 256.0;
  if (dVar9 == 0.0) {
    dVar5 = 1.0;
    dVar6 = 0.0;
    dVar9 = dVar8;
    if (dVar8 <= 0.0) {
      dVar5 = -1.0;
      dVar9 = -dVar8;
    }
  }
  else if (dVar8 == 0.0) {
    dVar5 = 0.0;
    dVar6 = 1.0;
    if (dVar9 <= 0.0) {
      dVar6 = -1.0;
      dVar9 = -dVar9;
    }
  }
  else {
    dVar7 = dVar9;
    _hypot(dVar9,dVar8);
    dVar5 = dVar8 / dVar7;
    dVar6 = dVar9 / dVar7;
    dVar9 = dVar7;
  }
  *(double *)(param_4 + 0x10) = dVar9;
  *(double *)(param_4 + 8) = dVar6;
  *(double *)(param_4 + 10) = dVar5;
  pdVar3 = *(double **)(param_3 + 0x4c8);
  if ((((*pdVar3 == 1.0) && (pdVar3[1] == 0.0)) && (pdVar3[2] == 0.0)) &&
     (((pdVar3[3] == 1.0 && (pdVar3[4] == 0.0)) && (pdVar3[5] == 0.0)))) {
    dVar8 = -(dVar5 * *(double *)(param_3 + 0x4e0));
    dVar9 = dVar6 * *(double *)(param_3 + 0x4e0);
  }
  else {
    dVar9 = dVar5 * pdVar3[2] + dVar6 * *pdVar3;
    dVar8 = dVar5 * pdVar3[3] + dVar6 * pdVar3[1];
    if (dVar9 == 0.0) {
      dVar5 = 1.0;
      dVar6 = 0.0;
      if (dVar8 <= 0.0) {
        dVar5 = -1.0;
      }
    }
    else if (dVar8 == 0.0) {
      dVar5 = 0.0;
      dVar6 = 1.0;
      if (dVar9 <= 0.0) {
        dVar6 = -1.0;
      }
    }
    else {
      dVar5 = dVar9;
      _hypot(dVar9,dVar8);
      dVar6 = dVar9 / dVar5;
      dVar5 = dVar8 / dVar5;
    }
    if (*(int *)(param_3 + 0x4e8) == 0) {
      dVar9 = dVar5 * *(double *)(param_3 + 0x4e0);
      dVar7 = -(dVar6 * *(double *)(param_3 + 0x4e0));
    }
    else {
      dVar9 = -(dVar5 * *(double *)(param_3 + 0x4e0));
      dVar7 = dVar6 * *(double *)(param_3 + 0x4e0);
    }
    pdVar3 = *(double **)(param_3 + 0x4c0);
    dVar8 = dVar7 * pdVar3[2] + dVar9 * *pdVar3;
    dVar9 = dVar7 * pdVar3[3] + dVar9 * pdVar3[1];
  }
  iVar1 = param_1[1];
  iVar2 = SUB84(dVar8 + 26388279066624.0,0);
  iVar4 = SUB84(dVar9 + 26388279066624.0,0);
  *param_4 = iVar2 + *param_1;
  param_4[1] = iVar1 + iVar4;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)param_1;
  iVar1 = param_1[1];
  param_4[4] = *param_1 - iVar2;
  param_4[5] = iVar1 - iVar4;
  *(double *)(param_4 + 0xc) = dVar6;
  *(double *)(param_4 + 0xe) = dVar5;
  *(undefined8 *)(param_4 + 6) = *(undefined8 *)param_2;
  return;
}



/* Entry: 1097dfc20; end: 1097dfe57;  */

long FUN_1097dfc20(long param_1,int *param_2,int *param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  if ((((param_2[4] != param_3[4]) || (param_2[5] != param_3[5])) || (*param_2 != *param_3)) ||
     (param_2[1] != param_3[1])) {
    bVar8 = (int)param_4 != 0;
    lVar1 = 0x278;
    if (bVar8) {
      lVar1 = 0x40;
    }
    lVar1 = param_1 + lVar1;
    piVar2 = param_3;
    if (bVar8) {
      piVar2 = param_3 + 4;
    }
    lVar12 = 0;
    piVar3 = param_2;
    if (bVar8) {
      lVar12 = 0x10;
      piVar3 = param_2 + 4;
    }
    if (*(int *)(param_1 + 0xc) != 2) {
      if (*(int *)(param_1 + 0xc) == 1) {
        if (*(double *)(param_2 + 10) * *(double *)(param_3 + 10) +
            *(double *)(param_3 + 8) * *(double *)(param_2 + 8) < *(double *)(param_1 + 0x4d8)) {
          FUN_1097dff10(param_1,param_2 + 6,param_3 + 6,param_2 + 2,param_4,lVar1);
        }
      }
      else {
        dVar14 = *(double *)(param_2 + 8);
        dVar16 = *(double *)(param_2 + 10);
        dVar17 = *(double *)(param_3 + 8);
        dVar18 = *(double *)(param_3 + 10);
        if (2.0 <= *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10) *
                   (dVar16 * dVar18 + dVar17 * dVar14 + 1.0)) {
          dVar19 = (double)*(int *)((long)param_2 + lVar12) / 256.0;
          dVar20 = (double)piVar3[1] / 256.0;
          dVar21 = (double)*piVar2 / 256.0;
          dVar22 = (double)piVar2[1] / 256.0;
          dVar13 = (dVar16 * -(dVar22 * dVar17) + dVar18 * dVar16 * (dVar21 - dVar19) +
                   dVar18 * dVar14 * dVar20) / (-(dVar17 * dVar16) + dVar18 * dVar14);
          dVar15 = dVar21;
          dVar6 = dVar22;
          if (ABS(dVar18) <= ABS(dVar16)) {
            dVar15 = dVar19;
            dVar18 = dVar16;
            dVar17 = dVar14;
            dVar6 = dVar20;
          }
          dVar15 = dVar15 + (dVar17 * (dVar13 - dVar6)) / dVar18;
          dVar18 = (double)param_2[2] / 256.0;
          dVar14 = (double)param_2[3] / 256.0;
          dVar17 = dVar15 - dVar18;
          dVar16 = -(dVar17 * (dVar20 - dVar14)) + (dVar13 - dVar14) * (dVar19 - dVar18);
          dVar18 = -(dVar17 * (dVar22 - dVar14)) + (dVar13 - dVar14) * (dVar21 - dVar18);
          bVar7 = dVar18 < 0.0;
          bVar8 = dVar18 != 0.0 && !bVar7;
          if (dVar16 <= 0.0) {
            bVar8 = (dVar18 == 0.0 || bVar7) && bVar7 != 0.0 <= dVar16;
          }
          if (!bVar8) {
            *(ulong *)(**(long **)(lVar1 + 0x30) + (long)(int)(*(long **)(lVar1 + 0x30))[1] * 8 + -8
                      ) = CONCAT44(SUB84(dVar13 + 26388279066624.0,0),
                                   SUB84(dVar15 + 26388279066624.0,0));
            return param_1;
          }
        }
      }
    }
    plVar11 = *(long **)(lVar1 + 0x30);
    iVar4 = (int)plVar11[1];
    if (iVar4 == *(int *)((long)plVar11 + 0xc)) {
      lVar12 = *(long *)(lVar1 + 0x30);
      iVar4 = *(int *)(lVar12 + 0xc);
      if (iVar4 < 0) {
        lVar10 = 1;
      }
      else {
        uVar5 = iVar4 << 1;
        puVar9 = (undefined8 *)((ulong)uVar5 * 8 + 0x18);
        _malloc();
        lVar10 = 1;
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar9 + 1) = 1;
          *(uint *)((long)puVar9 + 0xc) = uVar5;
          puVar9[2] = 0;
          *(undefined8 **)(lVar12 + 0x10) = puVar9;
          *(undefined8 **)(lVar1 + 0x30) = puVar9;
          puVar9[3] = *(undefined8 *)piVar2;
          *puVar9 = puVar9 + 3;
          lVar10 = 0;
        }
      }
      return lVar10;
    }
    *(int *)(plVar11 + 1) = iVar4 + 1;
    *(undefined8 *)(*plVar11 + (long)iVar4 * 8) = *(undefined8 *)piVar2;
  }
  return param_1;
}



/* Entry: 1097dfe58; end: 1097dff0f;  */

long FUN_1097dfe58(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar1 = 0x10;
  if (param_4 != 0) {
    lVar1 = 0;
  }
  lVar2 = 0x40;
  if (param_4 != 0) {
    lVar2 = 0x278;
  }
  lVar2 = param_1 + lVar2;
  plVar7 = *(long **)(lVar2 + 0x30);
  iVar3 = (int)plVar7[1];
  if (iVar3 == *(int *)((long)plVar7 + 0xc)) {
    param_1 = lVar2;
    FUN_1097cc5e0(lVar2,param_2 + 8);
  }
  else {
    *(int *)(plVar7 + 1) = iVar3 + 1;
    *(undefined8 *)(*plVar7 + (long)iVar3 * 8) = *(undefined8 *)(param_2 + 8);
  }
  plVar7 = *(long **)(lVar2 + 0x30);
  iVar3 = (int)plVar7[1];
  if (iVar3 != *(int *)((long)plVar7 + 0xc)) {
    *(int *)(plVar7 + 1) = iVar3 + 1;
    *(undefined8 *)(*plVar7 + (long)iVar3 * 8) = *(undefined8 *)(param_3 + lVar1);
    return param_1;
  }
  lVar8 = *(long *)(lVar2 + 0x30);
  iVar3 = *(int *)(lVar8 + 0xc);
  if (iVar3 < 0) {
    lVar6 = 1;
  }
  else {
    uVar4 = iVar3 << 1;
    puVar5 = (undefined8 *)((ulong)uVar4 * 8 + 0x18);
    _malloc();
    lVar6 = 1;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *(uint *)((long)puVar5 + 0xc) = uVar4;
      puVar5[2] = 0;
      *(undefined8 **)(lVar8 + 0x10) = puVar5;
      *(undefined8 **)(lVar2 + 0x30) = puVar5;
      puVar5[3] = *(undefined8 *)(param_3 + lVar1);
      *puVar5 = puVar5 + 3;
      lVar6 = 0;
    }
  }
  return lVar6;
}



/* Entry: 1097dff10; end: 1097e00ab;  */

void FUN_1097dff10(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  long param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if ((*(int *)(param_1 + 0x8b8) == 0) ||
     ((((*(int *)(param_1 + 0x8bc) <= *param_4 && (*param_4 <= *(int *)(param_1 + 0x8c4))) &&
       (*(int *)(param_1 + 0x8c0) <= param_4[1])) && (param_4[1] <= *(int *)(param_1 + 0x8c8))))) {
    if (param_5 == 0) {
      func_0x0001097e689c(param_1 + 0x4f0,param_2,param_3,&iStack_44,&iStack_48);
      for (; iStack_44 != iStack_48; iStack_44 = iStack_44 + -1) {
        piVar4 = (int *)(*(long *)(param_1 + 0x508) + (long)iStack_44 * 0x18);
        iStack_50 = *piVar4 + *param_4;
        iStack_4c = piVar4[1] + param_4[1];
        plVar3 = *(long **)(param_6 + 0x30);
        iVar2 = (int)plVar3[1];
        if (iVar2 == *(int *)((long)plVar3 + 0xc)) {
          FUN_1097cc5e0(param_6,&iStack_50);
        }
        else {
          *(int *)(plVar3 + 1) = iVar2 + 1;
          *(ulong *)(*plVar3 + (long)iVar2 * 8) = CONCAT44(iStack_4c,iStack_50);
        }
        if (iStack_44 == 0) {
          iStack_44 = *(int *)(param_1 + 0x500);
        }
      }
    }
    else {
      FUN_1097e6760();
      while (iVar2 = iStack_44, iVar2 != iStack_48) {
        piVar4 = (int *)(*(long *)(param_1 + 0x508) + (long)iVar2 * 0x18);
        iStack_50 = *piVar4 + *param_4;
        iStack_4c = piVar4[1] + param_4[1];
        plVar3 = *(long **)(param_6 + 0x30);
        iVar1 = (int)plVar3[1];
        if (iVar1 == *(int *)((long)plVar3 + 0xc)) {
          FUN_1097cc5e0(param_6,&iStack_50);
        }
        else {
          *(int *)(plVar3 + 1) = iVar1 + 1;
          *(ulong *)(*plVar3 + (long)iVar1 * 8) = CONCAT44(iStack_4c,iStack_50);
        }
        iStack_44 = 0;
        if (iVar2 + 1 != *(int *)(param_1 + 0x500)) {
          iStack_44 = iVar2 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 1097e00ac; end: 1097e0323;  */

undefined8 FUN_1097e00ac(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  
  if (param_3[1] == 0 && *param_3 == 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x830);
    uStack_98 = *(undefined8 *)(param_1 + 0x828);
    uStack_90 = *(undefined8 *)(param_1 + 0x820);
    dStack_78 = *(double *)(param_1 + 0x848);
    dStack_80 = *(double *)(param_1 + 0x840);
    uStack_60 = *(undefined8 *)(param_1 + 0x860);
    dStack_70 = -*(double *)(param_1 + 0x850);
    dStack_68 = -*(double *)(param_1 + 0x858);
    uStack_88 = CONCAT44(-(int)((ulong)*(undefined8 *)(param_1 + 0x838) >> 0x20),
                         -(int)*(undefined8 *)(param_1 + 0x838));
    uVar3 = param_1 + 0x838;
    FUN_1097f1294(uVar3,&uStack_88);
    lVar1 = 0x40;
    if (-1 < (int)uVar3) {
      lVar1 = 0x278;
    }
    FUN_1097dff10(param_1,param_1 + 0x838,&uStack_88,param_1 + 0x828,uVar3 >> 0x1f & 1,
                  param_1 + lVar1);
  }
  else {
    FUN_1097dfa18(param_2,param_3,param_1,&uStack_a0);
    if (dStack_78 * *(double *)(param_1 + 0x848) + *(double *)(param_1 + 0x840) * dStack_80 <
        *(double *)(param_1 + 0x4d8)) {
      uVar3 = param_1 + 0x838;
      FUN_1097f1294(uVar3,&uStack_88);
      iVar5 = (int)uStack_98;
      iVar6 = (int)((ulong)uStack_98 >> 0x20);
      *(ulong *)(param_1 + 0x830) =
           CONCAT44((iVar6 - (int)((ulong)*(undefined8 *)(param_1 + 0x828) >> 0x20)) +
                    (int)((ulong)*(undefined8 *)(param_1 + 0x830) >> 0x20),
                    (iVar5 - (int)*(undefined8 *)(param_1 + 0x828)) +
                    (int)*(undefined8 *)(param_1 + 0x830));
      plVar4 = *(long **)(param_1 + 0x70);
      iVar2 = (int)plVar4[1];
      if (iVar2 == *(int *)((long)plVar4 + 0xc)) {
        FUN_1097cc5e0(param_1 + 0x40);
      }
      else {
        *(int *)(plVar4 + 1) = iVar2 + 1;
        *(undefined8 *)(*plVar4 + (long)iVar2 * 8) = *(undefined8 *)(param_1 + 0x830);
      }
      *(ulong *)(param_1 + 0x820) =
           CONCAT44((iVar6 - (int)((ulong)*(undefined8 *)(param_1 + 0x828) >> 0x20)) +
                    (int)((ulong)*(undefined8 *)(param_1 + 0x820) >> 0x20),
                    (iVar5 - (int)*(undefined8 *)(param_1 + 0x828)) +
                    (int)*(undefined8 *)(param_1 + 0x820));
      plVar4 = *(long **)(param_1 + 0x2a8);
      iVar2 = (int)plVar4[1];
      if (iVar2 == *(int *)((long)plVar4 + 0xc)) {
        FUN_1097cc5e0(param_1 + 0x278);
      }
      else {
        *(int *)(plVar4 + 1) = iVar2 + 1;
        *(undefined8 *)(*plVar4 + (long)iVar2 * 8) = *(undefined8 *)(param_1 + 0x820);
      }
      lVar1 = param_1 + 0x40;
      if (-1 < (int)uVar3) {
        lVar1 = param_1 + 0x278;
      }
      FUN_1097dff10(param_1,param_1 + 0x838,&uStack_88,param_1 + 0x828,uVar3 >> 0x1f & 1,lVar1);
    }
    plVar4 = *(long **)(param_1 + 0x70);
    iVar2 = (int)plVar4[1];
    if (iVar2 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x40,&uStack_90);
    }
    else {
      *(int *)(plVar4 + 1) = iVar2 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar2 * 8) = uStack_90;
    }
    plVar4 = *(long **)(param_1 + 0x2a8);
    iVar2 = (int)plVar4[1];
    if (iVar2 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_1 + 0x278,&uStack_a0);
    }
    else {
      *(int *)(plVar4 + 1) = iVar2 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar2 * 8) = uStack_a0;
    }
  }
  *(undefined8 *)(param_1 + 0x838) = uStack_88;
  *(undefined8 *)(param_1 + 0x830) = uStack_90;
  *(double *)(param_1 + 0x848) = dStack_78;
  *(double *)(param_1 + 0x840) = dStack_80;
  *(double *)(param_1 + 0x858) = dStack_68;
  *(double *)(param_1 + 0x850) = dStack_70;
  *(undefined8 *)(param_1 + 0x860) = uStack_60;
  *(undefined8 *)(param_1 + 0x828) = uStack_98;
  *(undefined8 *)(param_1 + 0x820) = uStack_a0;
  return 0;
}



/* Entry: 1097e0324; end: 1097e0383;  */

void FUN_1097e0324(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  undefined8 uStack_20;
  
  uStack_58 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_20 = param_2[8];
  dStack_30 = -(double)param_2[6];
  dStack_28 = -(double)param_2[7];
  uStack_48 = CONCAT44(-(int)((ulong)param_2[3] >> 0x20),-(int)param_2[3]);
  FUN_1097e0384(param_1,&uStack_60);
  return;
}



/* Entry: 1097e0384; end: 1097e04df;  */

void FUN_1097e0384(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  long *plVar4;
  undefined8 uVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 8) == 2) {
    dVar6 = (double)param_2[6] * *(double *)(param_1 + 0x4e0);
    dVar8 = (double)param_2[7] * *(double *)(param_1 + 0x4e0);
    pdVar3 = *(double **)(param_1 + 0x4c0);
    iVar2 = SUB84(pdVar3[2] * dVar8 + *pdVar3 * dVar6 + 26388279066624.0,0);
    iVar7 = SUB84(pdVar3[3] * dVar8 + pdVar3[1] * dVar6 + 26388279066624.0,0);
    uStack_38 = CONCAT44((int)((ulong)*param_2 >> 0x20) + iVar7,(int)*param_2 + iVar2);
    plVar4 = *(long **)(param_3 + 0x30);
    iVar1 = (int)plVar4[1];
    if (iVar1 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_3,&uStack_38);
    }
    else {
      *(int *)(plVar4 + 1) = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = uStack_38;
    }
    uStack_38 = CONCAT44((int)((ulong)param_2[2] >> 0x20) + iVar7,(int)param_2[2] + iVar2);
    plVar4 = *(long **)(param_3 + 0x30);
    iVar1 = (int)plVar4[1];
    if (iVar1 == *(int *)((long)plVar4 + 0xc)) {
      FUN_1097cc5e0(param_3,&uStack_38);
    }
    else {
      *(int *)(plVar4 + 1) = iVar1 + 1;
      *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = uStack_38;
    }
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar5 = param_2[3];
    uStack_38 = CONCAT44(-(int)((ulong)uVar5 >> 0x20),-(int)uVar5);
    FUN_1097dff10(param_1,param_2 + 3,&uStack_38,param_2 + 1,0,param_3);
  }
  plVar4 = *(long **)(param_3 + 0x30);
  iVar1 = (int)plVar4[1];
  if (iVar1 == *(int *)((long)plVar4 + 0xc)) {
    FUN_1097cc5e0(param_3,param_2 + 2);
  }
  else {
    *(int *)(plVar4 + 1) = iVar1 + 1;
    *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = param_2[2];
  }
  return;
}



/* Entry: 1097e04e0; end: 1097e09cb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001097e059c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1097e04e0(long param_1,double *param_2,double *param_3,double *param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [11];
  undefined1 auVar4 [11];
  undefined1 auVar5 [11];
  undefined1 auVar6 [11];
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  undefined1 *puVar20;
  double **ppdVar21;
  undefined8 *puVar22;
  double *pdVar23;
  long lVar24;
  double dVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined1 in_b0;
  undefined1 uVar29;
  undefined1 in_register_00005001;
  undefined1 uVar30;
  undefined1 in_register_00005002;
  undefined1 uVar31;
  undefined1 in_register_00005003;
  undefined1 uVar32;
  undefined1 in_register_00005004;
  undefined1 uVar33;
  undefined1 in_register_00005005;
  undefined1 uVar34;
  undefined1 in_register_00005006;
  undefined1 uVar35;
  undefined1 in_register_00005007;
  undefined1 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double *pdStack_598;
  double *pdStack_590;
  double *pdStack_588;
  double dStack_580;
  double dStack_578;
  double dStack_568;
  uint uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  undefined1 auStack_550 [24];
  undefined1 *puStack_538;
  undefined1 auStack_530 [768];
  undefined8 uStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int iStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  uint uStack_188;
  int iStack_184;
  uint uStack_180;
  uint uStack_17c;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  int iStack_160;
  int iStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double adStack_d8 [6];
  undefined1 auStack_a8 [40];
  
  dVar25 = (double)CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  pdStack_588 = (double *)0x0;
  if ((((*param_4 != 1.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) ||
     (((param_4[3] != 1.0 || (param_4[4] != 0.0)) || (param_4[5] != 0.0)))) {
    pdStack_588 = param_4;
  }
  uStack_55c = *(undefined4 *)((long)param_2 + 0xc);
  dStack_578 = *param_2 * 0.5;
  dVar38 = *param_3;
  dVar39 = param_3[1];
  dVar37 = dStack_578 * dVar38;
  uVar8 = SUB81(dVar37,0);
  uVar9 = (char)((ulong)dVar37 >> 8);
  uVar10 = (char)((ulong)dVar37 >> 0x10);
  uVar11 = (char)((ulong)dVar37 >> 0x18);
  uVar12 = (char)((ulong)dVar37 >> 0x20);
  uVar13 = (char)((ulong)dVar37 >> 0x28);
  uVar14 = (char)((ulong)dVar37 >> 0x30);
  uVar15 = (char)((ulong)dVar37 >> 0x38);
  pdStack_598 = param_2;
  pdStack_590 = param_3;
  lStack_558 = param_5;
  _hypot(CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32,CONCAT12(
                                                  uVar31,CONCAT11(uVar30,uVar29))))))),
         dStack_578 * dVar39);
  uVar36 = uVar15;
  uVar35 = uVar14;
  uVar34 = uVar13;
  uVar33 = uVar12;
  uVar32 = uVar11;
  uVar31 = uVar10;
  uVar30 = uVar9;
  uVar29 = uVar8;
  dStack_580 = -1.0;
  bVar16 = false;
  bVar18 = true;
  if (!NAN((double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32,
                                                  CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))))) &&
      !NAN(dVar25)) {
    bVar16 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32
                                                  ,CONCAT12(uVar31,CONCAT11(uVar30,uVar29))))))) ==
             dVar25;
    bVar18 = dVar25 <= (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,
                                                  CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,
                                                  uVar29)))))));
  }
  if (bVar18 && !bVar16) {
    dVar25 = 1.0 - dVar25 / (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,
                                                  CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,
                                                  uVar29)))))));
    dVar25 = dVar25 * dVar25;
    dStack_580 = dVar25 + dVar25 + -1.0;
  }
  dStack_568 = -(dVar39 * param_3[2]) + param_3[3] * dVar38;
  uStack_560 = (uint)(0.0 <= dStack_568);
  puVar20 = auStack_550;
  FUN_1097e6538(puVar20,param_3);
  if ((int)puVar20 == 0) {
    iStack_1d8 = 0;
    uStack_228 = 0;
    dVar25 = param_2[3];
    uStack_188 = (uint)(dVar25 != 0.0);
    if (dVar25 != 0.0) {
      iStack_160 = *(int *)(param_2 + 4);
      dStack_170 = param_2[5];
      uVar29 = SUB81(dStack_170,0);
      uVar30 = (undefined1)((ulong)dStack_170 >> 8);
      uVar31 = (undefined1)((ulong)dStack_170 >> 0x10);
      uVar32 = (undefined1)((ulong)dStack_170 >> 0x18);
      uVar33 = (undefined1)((ulong)dStack_170 >> 0x20);
      uVar34 = (undefined1)((ulong)dStack_170 >> 0x28);
      uVar35 = (undefined1)((ulong)dStack_170 >> 0x30);
      uVar36 = (undefined1)((ulong)dStack_170 >> 0x38);
      uVar26 = 0;
      uStack_180 = 1;
      while( true ) {
        bVar18 = false;
        bVar17 = false;
        bVar16 = NAN((double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,
                                                  CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,
                                                  uVar29))))))));
        if (!bVar16) {
          bVar18 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                  )) < 0.0;
          bVar17 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                  )) == 0.0;
        }
        iStack_184 = (int)uVar26;
        if (bVar17 || bVar18 != bVar16) break;
        dVar37 = *(double *)((long)dVar25 + uVar26 * 8);
        bVar18 = false;
        bVar16 = NAN((double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,
                                                  CONCAT13(uVar32,CONCAT12(uVar31,CONCAT11(uVar30,
                                                  uVar29))))))));
        if (!bVar16 && !NAN(dVar37)) {
          bVar18 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                  )) < dVar37;
        }
        if (bVar18 != (bVar16 || NAN(dVar37))) break;
        dVar37 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                 )) - dVar37;
        uVar29 = SUB81(dVar37,0);
        uVar30 = (undefined1)((ulong)dVar37 >> 8);
        uVar31 = (undefined1)((ulong)dVar37 >> 0x10);
        uVar32 = (undefined1)((ulong)dVar37 >> 0x18);
        uVar33 = (undefined1)((ulong)dVar37 >> 0x20);
        uVar34 = (undefined1)((ulong)dVar37 >> 0x28);
        uVar35 = (undefined1)((ulong)dVar37 >> 0x30);
        uVar36 = (undefined1)((ulong)dVar37 >> 0x38);
        uStack_180 = uStack_180 ^ 1;
        uVar1 = 0;
        if (iStack_184 + 1 != iStack_160) {
          uVar1 = iStack_184 + 1;
        }
        uVar26 = (ulong)uVar1;
      }
      dStack_178 = *(double *)((long)dVar25 + uVar26 * 8) -
                   (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                  ));
      uStack_17c = uStack_180;
      dStack_168 = dVar25;
    }
    iStack_158 = *(int *)(param_5 + 0x20);
    if (iStack_158 != 0) {
      uStack_14c = *(undefined8 *)(param_5 + 0xc);
      uStack_154 = *(undefined8 *)(param_5 + 4);
      FUN_1097f3ec8(pdStack_598,param_1,pdStack_590,adStack_d8,&dStack_120);
      func_0x0001097f3f84(pdStack_598,param_1,pdStack_590,adStack_d8,&dStack_120);
      dVar25 = adStack_d8[0] + 26388279066624.0;
      dVar37 = dStack_120 + 26388279066624.0;
      uVar29 = (undefined1)((ulong)dVar37 >> 8);
      uVar30 = (undefined1)((ulong)dVar37 >> 0x10);
      uVar31 = (undefined1)((ulong)dVar37 >> 0x18);
      auVar3[8] = SUB81(dVar37,0);
      auVar3._0_8_ = dVar25;
      auVar3[9] = uVar29;
      auVar3[10] = uVar30;
      auVar4[8] = SUB81(dVar37,0);
      auVar4._0_8_ = dVar25;
      auVar4[9] = uVar29;
      auVar4[10] = uVar30;
      uStack_144 = CONCAT44((int)((ulong)uStack_154 >> 0x20) - CONCAT13(uVar31,auVar4._8_3_),
                            (int)uStack_154 - SUB84(dVar25,0));
      iVar19 = (int)((ulong)uStack_14c >> 0x20) + CONCAT13(uVar31,auVar3._8_3_);
      uStack_13c = CONCAT17((char)((uint)iVar19 >> 0x18),
                            CONCAT16((char)((uint)iVar19 >> 0x10),
                                     CONCAT15((char)((uint)iVar19 >> 8),
                                              CONCAT14((char)iVar19,
                                                       (int)uStack_14c + SUB84(dVar25,0)))));
      func_0x0001097f4004(pdStack_598,param_1,pdStack_590,adStack_d8,&dStack_120);
      adStack_d8[0] = adStack_d8[0] + 26388279066624.0;
      dVar25 = dStack_120 + 26388279066624.0;
      uVar29 = (undefined1)((ulong)dVar25 >> 8);
      uVar30 = (undefined1)((ulong)dVar25 >> 0x10);
      uVar31 = (undefined1)((ulong)dVar25 >> 0x18);
      auVar5[8] = SUB81(dVar25,0);
      auVar5._0_8_ = adStack_d8[0];
      auVar5[9] = uVar29;
      auVar5[10] = uVar30;
      auVar6[8] = SUB81(dVar25,0);
      auVar6._0_8_ = adStack_d8[0];
      auVar6[9] = uVar29;
      auVar6[10] = uVar30;
      uStack_134 = CONCAT44((int)((ulong)uStack_154 >> 0x20) - CONCAT13(uVar31,auVar6._8_3_),
                            (int)uStack_154 - SUB84(adStack_d8[0],0));
      iVar19 = (int)((ulong)uStack_14c >> 0x20) + CONCAT13(uVar31,auVar5._8_3_);
      uStack_12c = CONCAT17((char)((uint)iVar19 >> 0x18),
                            CONCAT16((char)((uint)iVar19 >> 0x10),
                                     CONCAT15((char)((uint)iVar19 >> 8),
                                              CONCAT14((char)iVar19,
                                                       (int)uStack_14c + SUB84(adStack_d8[0],0)))));
    }
    if (uStack_188 == 0) {
      plVar28 = (long *)(param_1 + 0x28);
      do {
        if ((int)plVar28[2] != 0) {
          uVar26 = 0;
          puVar27 = (undefined8 *)plVar28[5];
          do {
            cVar2 = *(char *)(plVar28[4] + uVar26);
            if (cVar2 == '\x02') {
              if (iStack_158 == 0) {
LAB_1097e088c:
                pdVar23 = adStack_d8;
                FUN_1097f35f0(pdVar23,0x1097e1c50,&pdStack_598,&uStack_218,puVar27,puVar27 + 1,
                              puVar27 + 2);
                if ((int)pdVar23 == 0) goto LAB_1097e08f8;
                FUN_1097e17fc(&uStack_218,auStack_a8,&pdStack_598,&dStack_120);
                if (uStack_228._4_4_ == 0) {
                  if (iStack_1d8 == 0) {
                    uStack_1a8 = uStack_f8;
                    uStack_1b0 = uStack_100;
                    uStack_198 = uStack_e8;
                    uStack_1a0 = uStack_f0;
                    uStack_190 = uStack_e0;
                    uStack_1c8 = uStack_118;
                    dStack_1d0 = dStack_120;
                    uStack_1b8 = uStack_108;
                    uStack_1c0 = uStack_110;
                    iStack_1d8 = 1;
                  }
                  uStack_228 = CONCAT44(1,(undefined4)uStack_228);
                }
                else {
                  FUN_1097e1330(&pdStack_598,&dStack_220,&dStack_120);
                }
                uVar7 = uStack_55c;
                uStack_1f8 = uStack_f8;
                uStack_200 = uStack_100;
                uStack_1e8 = uStack_e8;
                uStack_1f0 = uStack_f0;
                uStack_1e0 = uStack_e0;
                uStack_218 = uStack_118;
                dStack_220 = dStack_120;
                uStack_208 = uStack_108;
                uStack_210 = uStack_110;
                uStack_55c = 1;
                iVar19 = (int)adStack_d8;
                FUN_1097f3744();
                uStack_55c = uVar7;
              }
              else {
                puVar22 = &uStack_218;
                FUN_1097f33d4(puVar22,puVar27,puVar27 + 1,puVar27 + 2,&uStack_144);
                if ((int)puVar22 != 0) goto LAB_1097e088c;
LAB_1097e08f8:
                func_0x0001097e0e78(&pdStack_598,puVar27 + 2);
                iVar19 = 0;
              }
              lVar24 = 0x18;
              if (iVar19 != 0) goto LAB_1097e0788;
LAB_1097e096c:
              puVar27 = (undefined8 *)((long)puVar27 + lVar24);
            }
            else {
              ppdVar21 = &pdStack_598;
              if (cVar2 == '\x01') {
                func_0x0001097e0e78(ppdVar21,puVar27);
                lVar24 = 8;
                if ((int)ppdVar21 == 0) goto LAB_1097e096c;
                goto LAB_1097e0788;
              }
              if (cVar2 == '\0') {
                func_0x0001097e0f6c();
                uStack_230 = *puVar27;
                uStack_218 = *puVar27;
                iStack_1d8 = 0;
                uStack_228 = 0;
                puVar27 = puVar27 + 1;
              }
              else {
                func_0x0001097e0e78(ppdVar21,&uStack_230);
                FUN_1097e1bfc(&pdStack_598);
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(plVar28 + 2));
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)(param_1 + 0x28));
      if (((*(byte *)(param_1 + 0x10) ^ 0xff) & 3) == 0) {
        func_0x0001097e0f6c(&pdStack_598);
        uStack_230 = *(undefined8 *)(param_1 + 8);
        iStack_1d8 = 0;
        uStack_228 = 0;
        uStack_218 = uStack_230;
      }
    }
    else {
      FUN_1097dce2c(param_1,FUN_1097e09cc,FUN_1097e0a1c,FUN_1097e0d94,0x1097e0e48,&pdStack_598);
    }
LAB_1097e0788:
    func_0x0001097e0f6c(&pdStack_598);
    if (puStack_538 != auStack_530) {
      _free();
    }
  }
  return;
}



/* Entry: 1097e09cc; end: 1097e0a1b;  */

undefined8 FUN_1097e09cc(long param_1,undefined8 *param_2)

{
  FUN_1097f3d84(param_1 + 0x410);
  func_0x0001097e0f6c(param_1);
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  *(undefined8 *)(param_1 + 0x380) = *param_2;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  return 0;
}



/* Entry: 1097e0a1c; end: 1097e0d93;  */

undefined8 FUN_1097e0a1c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
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
  
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x41c);
  iVar2 = *(int *)(param_1 + 0x380);
  iVar3 = *param_2;
  iStack_118 = iVar3 - iVar2;
  if ((iStack_118 == 0) && (*(int *)(param_1 + 900) == param_2[1])) {
    return 0;
  }
  if (*(int *)(param_1 + 0x440) == 0) {
LAB_1097e0adc:
    bVar4 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x464) <= iVar2) && (iVar2 <= *(int *)(param_1 + 0x46c))) {
      if ((*(int *)(param_1 + 0x468) <= *(int *)(param_1 + 900)) &&
         ((((iVar3 <= *(int *)(param_1 + 0x46c) && (*(int *)(param_1 + 0x464) <= iVar3)) &&
           (*(int *)(param_1 + 900) <= *(int *)(param_1 + 0x470))) &&
          ((*(int *)(param_1 + 0x468) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x470))))))
         ) goto LAB_1097e0adc;
    }
    bVar4 = true;
  }
  iStack_114 = param_2[1] - *(int *)(param_1 + 900);
  dVar10 = (double)iStack_118 / 256.0;
  dVar11 = (double)iStack_114 / 256.0;
  pdVar6 = *(double **)(param_1 + 0x10);
  if (pdVar6 != (double *)0x0) {
    dVar7 = dVar11 * pdVar6[2];
    dVar11 = dVar11 * pdVar6[3] + dVar10 * pdVar6[1];
    dVar10 = dVar7 + dVar10 * *pdVar6;
  }
  if ((dVar10 != 0.0) || (dVar11 != 0.0)) {
    if (dVar10 == 0.0) {
      dVar12 = 0.0;
      dVar13 = 1.0;
      if (dVar11 <= 0.0) {
        dVar13 = -1.0;
        dVar11 = -dVar11;
      }
    }
    else if (dVar11 == 0.0) {
      dVar12 = 1.0;
      dVar13 = 0.0;
      dVar11 = dVar10;
      if (dVar10 <= 0.0) {
        dVar12 = -1.0;
        dVar11 = -dVar10;
      }
    }
    else {
      dVar7 = dVar10;
      _hypot(dVar10,dVar11);
      dVar12 = dVar10 / dVar7;
      dVar13 = dVar11 / dVar7;
      dVar11 = dVar7;
    }
    if (2.220446049250313e-16 < dVar11) {
      puVar1 = (undefined8 *)(param_1 + 0x378);
      uStack_128 = *(undefined8 *)(param_1 + 0x380);
      dVar10 = dVar11;
      do {
        dVar7 = *(double *)(param_1 + 0x420);
        if (dVar10 <= *(double *)(param_1 + 0x420)) {
          dVar7 = dVar10;
        }
        dVar10 = dVar10 - dVar7;
        dVar9 = dVar12 * (dVar11 - dVar10);
        dVar8 = dVar13 * (dVar11 - dVar10);
        pdVar6 = *(double **)(param_1 + 8);
        uStack_120 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x380) >> 0x20) +
                              SUB84(pdVar6[3] * dVar8 + pdVar6[1] * dVar9 + 26388279066624.0,0),
                              (int)*(undefined8 *)(param_1 + 0x380) +
                              SUB84(pdVar6[2] * dVar8 + *pdVar6 * dVar9 + 26388279066624.0,0));
        if (*(int *)(param_1 + 0x418) == 0) {
LAB_1097e0c30:
          if (*(int *)(param_1 + 0x374) != 0) {
            FUN_1097e1a24(param_1,puVar1);
            *(undefined4 *)(param_1 + 0x374) = 0;
          }
        }
        else {
          if ((bVar4) && ((*(int *)(param_1 + 0x3c0) != 0 || (*(int *)(param_1 + 0x41c) == 0)))) {
            lVar5 = param_1 + 0x464;
            func_0x0001097ed4b8(lVar5,&uStack_128);
            if ((int)lVar5 == 0) goto LAB_1097e0c30;
          }
          FUN_1097e1020(param_1,&uStack_128,&uStack_120,&iStack_118,&uStack_c8,&uStack_110);
          if (*(int *)(param_1 + 0x374) == 0) {
            if ((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x41c) != 0)) {
              *(undefined8 *)(param_1 + 0x3f0) = uStack_a0;
              *(undefined8 *)(param_1 + 1000) = uStack_a8;
              *(undefined8 *)(param_1 + 0x400) = uStack_90;
              *(undefined8 *)(param_1 + 0x3f8) = uStack_98;
              *(undefined8 *)(param_1 + 0x408) = uStack_88;
              *(undefined8 *)(param_1 + 0x3d0) = uStack_c0;
              *(undefined8 *)(param_1 + 0x3c8) = uStack_c8;
              *(undefined8 *)(param_1 + 0x3e0) = uStack_b0;
              *(undefined8 *)(param_1 + 0x3d8) = uStack_b8;
              *(undefined4 *)(param_1 + 0x3c0) = 1;
            }
            else {
              FUN_1097e179c(param_1,&uStack_c8);
            }
          }
          else {
            FUN_1097e1330(param_1,puVar1,&uStack_c8);
            *(undefined4 *)(param_1 + 0x374) = 0;
          }
          if (dVar10 == 0.0) {
            *(undefined8 *)(param_1 + 0x3a0) = uStack_e8;
            *(undefined8 *)(param_1 + 0x398) = uStack_f0;
            *(undefined8 *)(param_1 + 0x3b0) = uStack_d8;
            *(undefined8 *)(param_1 + 0x3a8) = uStack_e0;
            *(undefined8 *)(param_1 + 0x3b8) = uStack_d0;
            *(undefined8 *)(param_1 + 0x380) = uStack_108;
            *puVar1 = uStack_110;
            *(undefined8 *)(param_1 + 0x390) = uStack_f8;
            *(undefined8 *)(param_1 + 0x388) = uStack_100;
            *(undefined4 *)(param_1 + 0x374) = 1;
          }
          else {
            FUN_1097e1a24(param_1,&uStack_110);
          }
        }
        func_0x0001097f3de4(dVar7,param_1 + 0x410);
        uStack_128 = uStack_120;
      } while (dVar10 != 0.0);
      if ((*(int *)(param_1 + 0x418) == 0) || (*(int *)(param_1 + 0x374) != 0)) {
        *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)param_2;
      }
      else {
        FUN_1097e17fc(param_2,&iStack_118,param_1,puVar1);
        FUN_1097e179c(param_1,puVar1);
        *(undefined4 *)(param_1 + 0x374) = 1;
      }
    }
  }
  return 0;
}



/* Entry: 1097e0d94; end: 1097e0e47;  */

void FUN_1097e0d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_80 [80];
  
  iVar2 = (int)auStack_80;
  if (*(int *)(param_1 + 0x440) != 0) {
    lVar3 = param_1 + 0x380;
    FUN_1097f33d4(lVar3,param_2,param_3,param_4,param_1 + 0x454);
    if ((int)lVar3 == 0) goto LAB_1097e0e24;
  }
  FUN_1097f35f0(auStack_80,FUN_1097e1be4,param_1,param_1 + 0x380,param_2,param_3,param_4);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = 1;
    FUN_1097f3744(*(undefined8 *)(param_1 + 0x28),auStack_80);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    return;
  }
LAB_1097e0e24:
  FUN_1097e0a1c(param_1,param_4);
  return;
}



/* Entry: 1097e0e48; end: 1097e101f;  */

undefined8 FUN_1097e0e48(long param_1)

{
  FUN_1097e0a1c(param_1,param_1 + 0x368);
  FUN_1097e1bfc(param_1);
  return 0;
}



/* Entry: 1097e1020; end: 1097e132f;  */

void FUN_1097e1020(int *param_1,long *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  double *pdVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  piVar12 = param_1;
  FUN_1097e17fc();
  uVar17 = *(undefined8 *)param_5;
  *(undefined8 *)(param_6 + 2) = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)param_6 = uVar17;
  uVar20 = *(undefined8 *)(param_5 + 6);
  uVar17 = *(undefined8 *)(param_5 + 4);
  uVar23 = *(undefined8 *)(param_5 + 10);
  uVar21 = *(undefined8 *)(param_5 + 8);
  uVar27 = *(undefined8 *)(param_5 + 0xe);
  uVar24 = *(undefined8 *)(param_5 + 0xc);
  *(undefined8 *)(param_6 + 0x10) = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(param_6 + 10) = uVar23;
  *(undefined8 *)(param_6 + 8) = uVar21;
  *(undefined8 *)(param_6 + 0xe) = uVar27;
  *(undefined8 *)(param_6 + 0xc) = uVar24;
  *(undefined8 *)(param_6 + 6) = uVar20;
  *(undefined8 *)(param_6 + 4) = uVar17;
  *(undefined8 *)(param_6 + 2) = *(undefined8 *)param_3;
  iVar13 = *param_3 - (int)*param_2;
  iVar14 = param_3[1] - *(int *)((long)param_2 + 4);
  iVar1 = *param_6 + iVar13;
  iVar2 = param_6[1] + iVar14;
  *param_6 = iVar1;
  param_6[1] = iVar2;
  iVar13 = param_6[4] + iVar13;
  iVar14 = param_6[5] + iVar14;
  param_6[4] = iVar13;
  param_6[5] = iVar14;
  if (((int)*param_2 != *param_3) || (*(int *)((long)param_2 + 4) != param_3[1])) {
    if (param_1[0x110] != 0) {
      iVar4 = param_1[0x111];
      iVar5 = param_5[4];
      if ((((iVar5 < iVar4) || (param_1[0x113] < iVar5)) || (param_5[5] < param_1[0x112])) ||
         (param_1[0x114] < param_5[5])) {
        iStack_74 = param_5[5];
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar5);
        iVar6 = *param_5;
        iStack_70 = iVar5;
        iStack_6c = iStack_74;
        if (((iVar6 < iVar4) || (param_1[0x113] < iVar6)) ||
           ((param_5[1] < param_1[0x112] || (param_1[0x114] < param_5[1])))) {
          if (iVar6 < iVar5) {
            piVar15 = (int *)&uStack_68;
LAB_1097e1180:
            *piVar15 = iVar6;
          }
          else if (iVar5 < iVar6) {
            piVar15 = &iStack_70;
            goto LAB_1097e1180;
          }
          iVar5 = param_5[1];
          if (iVar5 < iStack_74) {
            piVar15 = &iStack_6c;
LAB_1097e11a0:
            *piVar15 = iVar5;
          }
          else if (iStack_74 < iVar5) {
            piVar15 = &iStack_74;
            goto LAB_1097e11a0;
          }
          if (((iVar13 < iVar4) || (param_1[0x113] < iVar13)) ||
             ((iVar14 < param_1[0x112] || (param_1[0x114] < iVar14)))) {
            if (iVar13 < (int)uStack_68) {
              piVar15 = (int *)&uStack_68;
LAB_1097e11f4:
              *piVar15 = iVar13;
            }
            else if (iStack_70 < iVar13) {
              piVar15 = &iStack_70;
              goto LAB_1097e11f4;
            }
            if (iVar14 < iStack_6c) {
              piVar15 = &iStack_6c;
LAB_1097e121c:
              *piVar15 = iVar14;
            }
            else if (iStack_74 < iVar14) {
              piVar15 = &iStack_74;
              goto LAB_1097e121c;
            }
            if ((((iVar1 < iVar4) || (param_1[0x113] < iVar1)) || (iVar2 < param_1[0x112])) ||
               (param_1[0x114] < iVar2)) {
              if (iVar1 < (int)uStack_68) {
                piVar15 = (int *)&uStack_68;
LAB_1097e1270:
                *piVar15 = iVar1;
              }
              else if (iStack_70 < iVar1) {
                piVar15 = &iStack_70;
                goto LAB_1097e1270;
              }
              if (iVar2 < iStack_6c) {
                piVar15 = &iStack_6c;
LAB_1097e1298:
                *piVar15 = iVar2;
              }
              else if (iStack_74 < iVar2) {
                piVar15 = &iStack_74;
                goto LAB_1097e1298;
              }
              if (((iStack_70 <= iVar4) || (param_1[0x113] <= (int)uStack_68)) ||
                 ((iStack_74 <= param_1[0x112] || (param_1[0x114] <= iStack_6c))))
              goto LAB_1097e12fc;
            }
          }
        }
      }
    }
    uStack_68 = *(undefined8 *)(param_5 + 4);
    uStack_60 = *(undefined8 *)param_5;
    uStack_58 = *(undefined8 *)param_6;
    uStack_50 = *(undefined8 *)(param_6 + 4);
    plVar11 = *(long **)(param_1 + 0x10);
    param_4 = (int *)&uStack_68;
    FUN_1097ff0b4();
  }
LAB_1097e12fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (int)piVar12 + 0x18;
  FUN_1097f1294();
  iVar1 = param_4[4];
  iVar2 = piVar12[4];
  if (((iVar1 == iVar2) && (param_4[5] == piVar12[5])) &&
     ((*param_4 == *piVar12 && (param_4[1] == piVar12[1])))) goto LAB_1097e1688;
  lVar3 = 0x10;
  piVar15 = param_4 + 4;
  piVar8 = piVar12 + 4;
  if (0x7fffffff < uVar10) {
    lVar3 = 0;
    piVar15 = param_4;
    piVar8 = piVar12;
  }
  if ((int)plVar11[0x88] != 0) {
    uStack_120 = *(undefined8 *)piVar15;
    uStack_118 = *(undefined8 *)piVar8;
    iVar13 = (int)plVar11 + 0x464;
    func_0x0001097ed4b8();
    if (iVar13 == 0) goto LAB_1097e1688;
  }
  if (*(int *)((long)plVar11 + 0x3c) == 1) {
    if ((double)plVar11[3] <=
        *(double *)(param_4 + 10) * *(double *)(piVar12 + 10) +
        *(double *)(piVar12 + 8) * *(double *)(param_4 + 8)) {
      uStack_f8 = *(undefined8 *)((long)param_4 + lVar3);
      uStack_118 = *(undefined8 *)param_4;
      uStack_100 = *(undefined8 *)(param_4 + 2);
      uStack_f0 = *(undefined8 *)((long)piVar12 + lVar3);
      iVar13 = param_4[5];
      goto LAB_1097e1668;
    }
    uStack_100 = *(undefined8 *)(param_4 + 2);
    uStack_120 = *(undefined8 *)(param_4 + 4);
    uStack_118 = *(undefined8 *)param_4;
    uStack_f8 = *(undefined8 *)((long)param_4 + lVar3);
    if ((int)uVar10 < 0) {
      func_0x0001097e689c(plVar11 + 9,param_4 + 6,piVar12 + 6,&iStack_124,&iStack_128);
      for (; iStack_124 != iStack_128; iStack_124 = iStack_124 + -1) {
        uStack_110 = *(undefined8 *)(param_4 + 2);
        piVar15 = (int *)(plVar11[0xc] + (long)iStack_124 * 0x18);
        uStack_f0 = CONCAT44(piVar15[1] + (int)((ulong)uStack_110 >> 0x20),
                             *piVar15 + (int)uStack_110);
        uStack_108 = uStack_f0;
        FUN_1097ff4c4(plVar11[8],&uStack_100,&uStack_120);
        if (iStack_124 == 0) {
          iStack_124 = (int)plVar11[0xb];
        }
        uStack_120 = uStack_110;
        uStack_118 = uStack_108;
        uStack_f8 = uStack_f0;
      }
    }
    else {
      FUN_1097e6760();
      while (iVar1 = iStack_124, iVar1 != iStack_128) {
        uStack_110 = *(undefined8 *)(param_4 + 2);
        piVar15 = (int *)(plVar11[0xc] + (long)iVar1 * 0x18);
        uStack_f0 = CONCAT44(piVar15[1] + (int)((ulong)uStack_110 >> 0x20),
                             *piVar15 + (int)uStack_110);
        uStack_108 = uStack_f0;
        FUN_1097ff4c4(plVar11[8],&uStack_100,&uStack_120);
        iStack_124 = 0;
        uStack_120 = uStack_110;
        uStack_118 = uStack_108;
        uStack_f8 = uStack_f0;
        if (iVar1 + 1 != (int)plVar11[0xb]) {
          iStack_124 = iVar1 + 1;
        }
      }
    }
    uStack_f0 = *(undefined8 *)((long)piVar12 + lVar3);
    uStack_110 = *(undefined8 *)(piVar12 + 4);
    uStack_108 = *(undefined8 *)piVar12;
  }
  else {
    if (*(int *)((long)plVar11 + 0x3c) == 2) {
      iVar13 = *piVar15;
      iVar14 = *piVar8;
    }
    else {
      dVar25 = *(double *)(param_4 + 0xc);
      dVar28 = *(double *)(param_4 + 0xe);
      dVar18 = *(double *)(piVar12 + 0xc);
      dVar22 = *(double *)(piVar12 + 0xe);
      iVar13 = *(int *)((long)param_4 + lVar3);
      iVar14 = *(int *)((long)piVar12 + lVar3);
      if (2.0 <= *(double *)(*plVar11 + 0x10) * *(double *)(*plVar11 + 0x10) *
                 (1.0 - (-(dVar28 * dVar22) - dVar18 * dVar25))) {
        dVar30 = (double)iVar13 / 256.0;
        dVar31 = (double)piVar15[1] / 256.0;
        pdVar16 = (double *)plVar11[1];
        dVar32 = dVar28 * pdVar16[2] + dVar25 * *pdVar16;
        dVar26 = dVar28 * pdVar16[3] + dVar25 * pdVar16[1];
        dVar29 = (double)iVar14 / 256.0;
        dVar33 = (double)piVar8[1] / 256.0;
        dVar25 = dVar22 * pdVar16[2] + dVar18 * *pdVar16;
        dVar18 = dVar22 * pdVar16[3] + dVar18 * pdVar16[1];
        dVar19 = (dVar26 * -(dVar33 * dVar25) + dVar18 * dVar26 * (dVar29 - dVar30) +
                 dVar18 * dVar31 * dVar32) / (-(dVar25 * dVar26) + dVar18 * dVar32);
        dVar28 = dVar29;
        dVar22 = dVar33;
        if (ABS(dVar18) <= ABS(dVar26)) {
          dVar28 = dVar30;
          dVar18 = dVar26;
          dVar25 = dVar32;
          dVar22 = dVar31;
        }
        dVar28 = dVar28 + (dVar25 * (dVar19 - dVar22)) / dVar18;
        dVar18 = (double)param_4[2] / 256.0;
        dVar26 = (double)param_4[3] / 256.0;
        dVar22 = dVar28 - dVar18;
        dVar25 = -(dVar22 * (dVar31 - dVar26)) + (dVar19 - dVar26) * (dVar30 - dVar18);
        dVar18 = -(dVar22 * (dVar33 - dVar26)) + (dVar19 - dVar26) * (dVar29 - dVar18);
        bVar9 = dVar18 < 0.0;
        bVar7 = dVar18 != 0.0 && !bVar9;
        if (dVar25 <= 0.0) {
          bVar7 = (dVar18 == 0.0 || bVar9) && bVar9 != 0.0 <= dVar25;
        }
        if (!bVar7) {
          uStack_120 = *(undefined8 *)(param_4 + 2);
          uStack_118 = *(undefined8 *)((long)param_4 + lVar3);
          uStack_110 = CONCAT44(SUB84(dVar19 + 26388279066624.0,0),
                                SUB84(dVar28 + 26388279066624.0,0));
          uStack_108 = *(undefined8 *)piVar8;
          FUN_1097ff0b4(plVar11[8]);
          goto LAB_1097e1688;
        }
      }
    }
    uStack_118 = *(undefined8 *)param_4;
    uStack_100 = *(undefined8 *)(param_4 + 2);
    uStack_f8 = CONCAT44(piVar15[1],iVar13);
    uStack_f0 = CONCAT44(piVar8[1],iVar14);
    iVar13 = param_4[5];
LAB_1097e1668:
    uStack_120 = CONCAT44(iVar13,iVar1);
    uStack_110 = CONCAT44(piVar12[5],iVar2);
    uStack_108 = *(undefined8 *)piVar12;
  }
  FUN_1097ff4c4(plVar11[8],&uStack_100,&uStack_120);
LAB_1097e1688:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_1097e1a24();
  return;
}



/* Entry: 1097e1330; end: 1097e179b;  */

void FUN_1097e1330(long *param_1,int *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (int)param_3 + 0x18;
  FUN_1097f1294();
  iVar2 = param_2[4];
  iVar3 = param_3[4];
  if ((((iVar2 == iVar3) && (param_2[5] == param_3[5])) && (*param_2 == *param_3)) &&
     (param_2[1] == param_3[1])) goto LAB_1097e1688;
  lVar1 = 0x10;
  piVar10 = param_2 + 4;
  piVar5 = param_3 + 4;
  if (0x7fffffff < uVar7) {
    lVar1 = 0;
    piVar10 = param_2;
    piVar5 = param_3;
  }
  if ((int)param_1[0x88] != 0) {
    uStack_a0 = *(undefined8 *)piVar10;
    uStack_98 = *(undefined8 *)piVar5;
    iVar8 = (int)param_1 + 0x464;
    func_0x0001097ed4b8();
    if (iVar8 == 0) goto LAB_1097e1688;
  }
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    if ((double)param_1[3] <=
        *(double *)(param_2 + 10) * *(double *)(param_3 + 10) +
        *(double *)(param_3 + 8) * *(double *)(param_2 + 8)) {
      uStack_78 = *(undefined8 *)((long)param_2 + lVar1);
      uStack_98 = *(undefined8 *)param_2;
      uStack_80 = *(undefined8 *)(param_2 + 2);
      uStack_70 = *(undefined8 *)((long)param_3 + lVar1);
      iVar8 = param_2[5];
      goto LAB_1097e1668;
    }
    uStack_80 = *(undefined8 *)(param_2 + 2);
    uStack_a0 = *(undefined8 *)(param_2 + 4);
    uStack_98 = *(undefined8 *)param_2;
    uStack_78 = *(undefined8 *)((long)param_2 + lVar1);
    if ((int)uVar7 < 0) {
      func_0x0001097e689c(param_1 + 9,param_2 + 6,param_3 + 6,&iStack_a4,&iStack_a8);
      for (; iStack_a4 != iStack_a8; iStack_a4 = iStack_a4 + -1) {
        uStack_90 = *(undefined8 *)(param_2 + 2);
        piVar10 = (int *)(param_1[0xc] + (long)iStack_a4 * 0x18);
        uStack_70 = CONCAT44(piVar10[1] + (int)((ulong)uStack_90 >> 0x20),*piVar10 + (int)uStack_90)
        ;
        uStack_88 = uStack_70;
        FUN_1097ff4c4(param_1[8],&uStack_80,&uStack_a0);
        if (iStack_a4 == 0) {
          iStack_a4 = (int)param_1[0xb];
        }
        uStack_a0 = uStack_90;
        uStack_98 = uStack_88;
        uStack_78 = uStack_70;
      }
    }
    else {
      FUN_1097e6760();
      while (iVar2 = iStack_a4, iVar2 != iStack_a8) {
        uStack_90 = *(undefined8 *)(param_2 + 2);
        piVar10 = (int *)(param_1[0xc] + (long)iVar2 * 0x18);
        uStack_70 = CONCAT44(piVar10[1] + (int)((ulong)uStack_90 >> 0x20),*piVar10 + (int)uStack_90)
        ;
        uStack_88 = uStack_70;
        FUN_1097ff4c4(param_1[8],&uStack_80,&uStack_a0);
        iStack_a4 = 0;
        uStack_a0 = uStack_90;
        uStack_98 = uStack_88;
        uStack_78 = uStack_70;
        if (iVar2 + 1 != (int)param_1[0xb]) {
          iStack_a4 = iVar2 + 1;
        }
      }
    }
    uStack_70 = *(undefined8 *)((long)param_3 + lVar1);
    uStack_90 = *(undefined8 *)(param_3 + 4);
    uStack_88 = *(undefined8 *)param_3;
  }
  else {
    if (*(int *)((long)param_1 + 0x3c) == 2) {
      iVar8 = *piVar10;
      iVar9 = *piVar5;
    }
    else {
      dVar15 = *(double *)(param_2 + 0xc);
      dVar17 = *(double *)(param_2 + 0xe);
      dVar12 = *(double *)(param_3 + 0xc);
      dVar14 = *(double *)(param_3 + 0xe);
      iVar8 = *(int *)((long)param_2 + lVar1);
      iVar9 = *(int *)((long)param_3 + lVar1);
      if (2.0 <= *(double *)(*param_1 + 0x10) * *(double *)(*param_1 + 0x10) *
                 (1.0 - (-(dVar17 * dVar14) - dVar12 * dVar15))) {
        dVar19 = (double)iVar8 / 256.0;
        dVar20 = (double)piVar10[1] / 256.0;
        pdVar11 = (double *)param_1[1];
        dVar21 = dVar17 * pdVar11[2] + dVar15 * *pdVar11;
        dVar16 = dVar17 * pdVar11[3] + dVar15 * pdVar11[1];
        dVar18 = (double)iVar9 / 256.0;
        dVar22 = (double)piVar5[1] / 256.0;
        dVar15 = dVar14 * pdVar11[2] + dVar12 * *pdVar11;
        dVar12 = dVar14 * pdVar11[3] + dVar12 * pdVar11[1];
        dVar13 = (dVar16 * -(dVar22 * dVar15) + dVar12 * dVar16 * (dVar18 - dVar19) +
                 dVar12 * dVar20 * dVar21) / (-(dVar15 * dVar16) + dVar12 * dVar21);
        dVar17 = dVar18;
        dVar14 = dVar22;
        if (ABS(dVar12) <= ABS(dVar16)) {
          dVar17 = dVar19;
          dVar12 = dVar16;
          dVar15 = dVar21;
          dVar14 = dVar20;
        }
        dVar17 = dVar17 + (dVar15 * (dVar13 - dVar14)) / dVar12;
        dVar12 = (double)param_2[2] / 256.0;
        dVar16 = (double)param_2[3] / 256.0;
        dVar14 = dVar17 - dVar12;
        dVar15 = -(dVar14 * (dVar20 - dVar16)) + (dVar13 - dVar16) * (dVar19 - dVar12);
        dVar12 = -(dVar14 * (dVar22 - dVar16)) + (dVar13 - dVar16) * (dVar18 - dVar12);
        bVar6 = dVar12 < 0.0;
        bVar4 = dVar12 != 0.0 && !bVar6;
        if (dVar15 <= 0.0) {
          bVar4 = (dVar12 == 0.0 || bVar6) && bVar6 != 0.0 <= dVar15;
        }
        if (!bVar4) {
          uStack_a0 = *(undefined8 *)(param_2 + 2);
          uStack_98 = *(undefined8 *)((long)param_2 + lVar1);
          uStack_90 = CONCAT44(SUB84(dVar13 + 26388279066624.0,0),SUB84(dVar17 + 26388279066624.0,0)
                              );
          uStack_88 = *(undefined8 *)piVar5;
          FUN_1097ff0b4(param_1[8]);
          goto LAB_1097e1688;
        }
      }
    }
    uStack_98 = *(undefined8 *)param_2;
    uStack_80 = *(undefined8 *)(param_2 + 2);
    uStack_78 = CONCAT44(piVar10[1],iVar8);
    uStack_70 = CONCAT44(piVar5[1],iVar9);
    iVar8 = param_2[5];
LAB_1097e1668:
    uStack_a0 = CONCAT44(iVar8,iVar2);
    uStack_90 = CONCAT44(param_3[5],iVar3);
    uStack_88 = *(undefined8 *)param_3;
  }
  FUN_1097ff4c4(param_1[8],&uStack_80,&uStack_a0);
LAB_1097e1688:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_1097e1a24();
  return;
}



/* Entry: 1097e179c; end: 1097e17fb;  */

void FUN_1097e179c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  undefined8 uStack_20;
  
  uStack_58 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_20 = param_2[8];
  dStack_30 = -(double)param_2[6];
  dStack_28 = -(double)param_2[7];
  uStack_48 = CONCAT44(-(int)((ulong)param_2[3] >> 0x20),-(int)param_2[3]);
  FUN_1097e1a24(param_1,&uStack_60);
  return;
}



/* Entry: 1097e17fc; end: 1097e1a23;  */

void FUN_1097e17fc(int *param_1,undefined8 *param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  auVar6._0_8_ = (long)(int)*param_2;
  auVar6._8_8_ = (long)(int)((ulong)*param_2 >> 0x20);
  auVar6 = NEON_scvtf(auVar6,8);
  dVar9 = auVar6._0_8_ * 0.00390625;
  dVar10 = auVar6._8_8_ * 0.00390625;
  if ((dVar9 == 0.0) && (dVar10 == 0.0)) {
    dVar8 = 0.0;
    dVar5 = dVar9;
    dVar7 = dVar10;
  }
  else if (dVar9 == 0.0) {
    if (dVar10 <= 0.0) {
      dVar7 = -1.0;
      dVar5 = 0.0;
      dVar8 = -dVar10;
    }
    else {
      dVar7 = 1.0;
      dVar5 = 0.0;
      dVar8 = dVar10;
    }
  }
  else if (dVar10 == 0.0) {
    if (dVar9 <= 0.0) {
      dVar8 = -dVar9;
      dVar7 = 0.0;
      dVar5 = -1.0;
    }
    else {
      dVar7 = 0.0;
      dVar5 = 1.0;
      dVar8 = dVar9;
    }
  }
  else {
    dVar8 = (double)_hypot(dVar9);
    dVar5 = dVar9 / dVar8;
    dVar7 = dVar10 / dVar8;
  }
  *(double *)(param_4 + 0x10) = dVar8;
  *(double *)(param_4 + 10) = dVar7;
  *(double *)(param_4 + 8) = dVar5;
  pdVar3 = *(double **)(param_3 + 0x10);
  if (pdVar3 == (double *)0x0) {
    dVar9 = -dVar7 * *(double *)(param_3 + 0x20);
    dVar10 = dVar5 * *(double *)(param_3 + 0x20);
  }
  else {
    dVar9 = pdVar3[1] * dVar5;
    dVar5 = pdVar3[2] * dVar7 + *pdVar3 * dVar5;
    dVar7 = pdVar3[3] * dVar7 + dVar9;
    if ((dVar5 != 0.0) || (dVar7 != 0.0)) {
      if (dVar5 == 0.0) {
        if (dVar7 <= 0.0) {
          dVar7 = -1.0;
          dVar5 = 0.0;
        }
        else {
          dVar7 = 1.0;
          dVar5 = 0.0;
        }
      }
      else if (dVar7 == 0.0) {
        if (dVar5 <= 0.0) {
          dVar7 = 0.0;
          dVar5 = -1.0;
        }
        else {
          dVar7 = 0.0;
          dVar5 = 1.0;
        }
      }
      else {
        dVar9 = (double)_hypot();
        dVar5 = dVar5 / dVar9;
        dVar7 = dVar7 / dVar9;
      }
    }
    if (*(int *)(param_3 + 0x38) == 0) {
      dVar10 = -dVar5;
      dVar8 = dVar7;
    }
    else {
      dVar10 = dVar5;
      dVar8 = -dVar7;
    }
    dVar10 = dVar10 * *(double *)(param_3 + 0x20);
    dVar8 = dVar8 * *(double *)(param_3 + 0x20);
    pdVar3 = *(double **)(param_3 + 8);
    dVar9 = pdVar3[2] * dVar10 + *pdVar3 * dVar8;
    dVar10 = pdVar3[3] * dVar10 + pdVar3[1] * dVar8;
  }
  iVar1 = param_1[1];
  iVar2 = SUB84(dVar9 + 26388279066624.0,0);
  iVar4 = SUB84(dVar10 + 26388279066624.0,0);
  *param_4 = iVar2 + *param_1;
  param_4[1] = iVar1 + iVar4;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)param_1;
  iVar1 = param_1[1];
  param_4[4] = *param_1 - iVar2;
  param_4[5] = iVar1 - iVar4;
  *(double *)(param_4 + 0xe) = dVar7;
  *(double *)(param_4 + 0xc) = dVar5;
  *(undefined8 *)(param_4 + 6) = *param_2;
  return;
}



/* Entry: 1097e1a24; end: 1097e1be3;  */

long * FUN_1097e1a24(long *param_1,undefined8 *param_2)

{
  double dVar1;
  double *pdVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(*param_1 + 8) == 2) {
    dVar1 = (double)param_2[6] * (double)param_1[4];
    dVar6 = (double)param_2[7] * (double)param_1[4];
    pdVar2 = (double *)param_1[1];
    uStack_80 = param_2[2];
    iVar5 = SUB84(pdVar2[3] * dVar6 + pdVar2[1] * dVar1 + 26388279066624.0,0);
    iVar4 = SUB84(pdVar2[2] * dVar6 + *pdVar2 * dVar1 + 26388279066624.0,0);
    uStack_70 = CONCAT44((int)((ulong)*param_2 >> 0x20) + iVar5,(int)*param_2 + iVar4);
    uStack_78 = CONCAT44((int)((ulong)uStack_80 >> 0x20) + iVar5,(int)uStack_80 + iVar4);
    uStack_68 = *param_2;
    param_1 = (long *)param_1[8];
    FUN_1097ff0b4(param_1,&uStack_80);
  }
  else if (*(int *)(*param_1 + 8) == 1) {
    uStack_90 = param_2[3];
    iStack_98 = -(int)uStack_90;
    iStack_94 = -(int)((ulong)uStack_90 >> 0x20);
    FUN_1097e6760(param_1 + 9,&uStack_90,&iStack_98,&iStack_84,&iStack_88);
    uStack_68 = *param_2;
    uStack_70 = param_2[2];
    uStack_58 = param_2[2];
    uStack_60 = param_2[1];
    uStack_80 = uStack_70;
    uStack_78 = uStack_68;
    if (iStack_84 != iStack_88) {
      do {
        uStack_70 = param_2[1];
        piVar3 = (int *)(param_1[0xc] + (long)iStack_84 * 0x18);
        uStack_50 = CONCAT44(piVar3[1] + (int)((ulong)uStack_70 >> 0x20),*piVar3 + (int)uStack_70);
        uStack_68 = uStack_50;
        FUN_1097ff4c4(param_1[8],&uStack_60,&uStack_80);
        uStack_58 = uStack_50;
        uStack_78 = uStack_68;
        uStack_80 = uStack_70;
        iVar4 = 0;
        if (iStack_84 + 1 != (int)param_1[0xb]) {
          iVar4 = iStack_84 + 1;
        }
        iStack_84 = iVar4;
      } while (iVar4 != iStack_88);
      uStack_68 = *param_2;
      uStack_70 = param_2[2];
    }
    param_1 = (long *)param_1[8];
    uStack_50 = uStack_68;
    FUN_1097ff4c4(param_1,&uStack_60,&uStack_80);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_1097e0a1c();
    return (long *)0x0;
  }
  return param_1;
}



/* Entry: 1097e1be4; end: 1097e1bfb;  */

undefined8 FUN_1097e1be4(void)

{
  FUN_1097e0a1c();
  return 0;
}



/* Entry: 1097e1bfc; end: 1097e1dab;  */

void FUN_1097e1bfc(long param_1)

{
  if ((*(int *)(param_1 + 0x3c0) == 0) || (*(int *)(param_1 + 0x374) == 0)) {
    func_0x0001097e0f6c(param_1);
  }
  else {
    FUN_1097e1330(param_1,param_1 + 0x378,param_1 + 0x3c8);
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  return;
}



/* Entry: 1097e1dac; end: 1097e1f37;  */

double * FUN_1097e1dac(double *param_1,undefined8 param_2,double *param_3,double *param_4,
                      double param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_50;
  double dStack_48;
  
  dVar9 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  dVar7 = param_3[1];
  dVar4 = *param_3;
  dVar10 = param_3[3];
  dVar8 = param_3[2];
  dVar12 = param_3[4];
  dVar11 = param_3[7];
  dVar13 = param_3[6];
  param_1[5] = param_3[5];
  param_1[4] = dVar12;
  param_1[7] = dVar11;
  param_1[6] = dVar13;
  param_1[1] = dVar7;
  *param_1 = dVar4;
  param_1[3] = dVar10;
  param_1[2] = dVar8;
  dVar4 = *param_3;
  dVar7 = 1.0 - dVar9 / (dVar4 * 0.5);
  dVar7 = dVar7 * dVar7;
  dVar8 = *param_4;
  dVar10 = param_4[1];
  dVar12 = param_4[2];
  dVar13 = param_4[3];
  param_1[8] = (double)param_4;
  param_1[9] = param_5;
  param_1[10] = dVar4 * 0.5;
  param_1[0xb] = dVar9;
  dVar9 = -(dVar10 * dVar12) + dVar13 * dVar8;
  param_1[0xc] = dVar7 + dVar7 + -1.0;
  param_1[0xd] = dVar9;
  *(uint *)(param_1 + 0xe) = (uint)(0.0 <= dVar9);
  pdVar6 = param_1 + 0x14;
  FUN_1097e6538(pdVar6,param_4);
  if ((int)pdVar6 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    param_1[0x7a] = 0.0;
    param_1[0x83] = 0.0;
    param_1[0x7c] = 0.0;
    param_1[0x7b] = 0.0;
    param_1[0x7e] = 0.0;
    param_1[0x7d] = 0.0;
    param_1[0x80] = 0.0;
    param_1[0x7f] = 0.0;
    param_1[0x82] = 0.0;
    param_1[0x81] = 0.0;
    param_1[0x8d] = 0.0;
    param_1[0x86] = 0.0;
    param_1[0x85] = 0.0;
    param_1[0x88] = 0.0;
    param_1[0x87] = 0.0;
    param_1[0x8a] = 0.0;
    param_1[0x89] = 0.0;
    param_1[0x8c] = 0.0;
    param_1[0x8b] = 0.0;
    dVar9 = param_3[3];
    *(uint *)(param_1 + 0x8e) = (uint)(dVar9 != 0.0);
    if (dVar9 != 0.0) {
      param_1[0x92] = dVar9;
      *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(param_3 + 4);
      param_1[0x91] = param_3[5];
      FUN_1097f3d84(param_1 + 0x8e);
    }
    param_1[0x10] = 0.0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    if ((int)param_7 != 0) {
      *(undefined4 *)(param_1 + 0x94) = 1;
      puVar1 = (undefined8 *)((long)param_1 + 0x4a4);
      func_0x0001097ed390(param_6,param_7,puVar1);
      FUN_1097f3ec8(param_1,param_2,param_1[8],&dStack_48,&dStack_50);
      iVar2 = SUB84(dStack_48 + 26388279066624.0,0);
      iVar3 = SUB84(dStack_50 + 26388279066624.0,0);
      iVar5 = (int)((ulong)*(undefined8 *)((long)param_1 + 0x4ac) >> 0x20) + iVar3;
      *(ulong *)((long)param_1 + 0x4ac) =
           CONCAT17((char)((uint)iVar5 >> 0x18),
                    CONCAT16((char)((uint)iVar5 >> 0x10),
                             CONCAT15((char)((uint)iVar5 >> 8),
                                      CONCAT14((char)iVar5,
                                               (int)*(undefined8 *)((long)param_1 + 0x4ac) + iVar2))
                            ));
      *puVar1 = CONCAT44((int)((ulong)*puVar1 >> 0x20) - iVar3,(int)*puVar1 - iVar2);
    }
  }
  return pdVar6;
}



/* Entry: 1097e1f38; end: 1097e1f87;  */

void FUN_1097e1f38(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  FUN_1097f3d84(param_1 + 0x470);
  lVar1 = param_1;
  FUN_1097e2858();
  if ((int)lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x3c8) = *param_2;
    *(undefined8 *)(param_1 + 0x3c0) = *param_2;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  return;
}



/* Entry: 1097e1f88; end: 1097e2323;  */

void FUN_1097e1f88(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
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
  
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x47c);
  iVar2 = *(int *)(param_1 + 0x3c0);
  iVar3 = *param_2;
  iStack_118 = iVar3 - iVar2;
  if ((iStack_118 == 0) && (*(int *)(param_1 + 0x3c4) == param_2[1])) {
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
LAB_1097e2048:
    bVar4 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x4a4) <= iVar2) && (iVar2 <= *(int *)(param_1 + 0x4ac))) {
      if ((*(int *)(param_1 + 0x4a8) <= *(int *)(param_1 + 0x3c4)) &&
         ((((iVar3 <= *(int *)(param_1 + 0x4ac) && (*(int *)(param_1 + 0x4a4) <= iVar3)) &&
           (*(int *)(param_1 + 0x3c4) <= *(int *)(param_1 + 0x4b0))) &&
          ((*(int *)(param_1 + 0x4a8) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x4b0))))))
         ) goto LAB_1097e2048;
    }
    bVar4 = true;
  }
  iStack_114 = param_2[1] - *(int *)(param_1 + 0x3c4);
  pdVar7 = *(double **)(param_1 + 0x48);
  dVar14 = ((double)iStack_114 / 256.0) * pdVar7[2] + ((double)iStack_118 / 256.0) * *pdVar7;
  dVar12 = ((double)iStack_114 / 256.0) * pdVar7[3] + ((double)iStack_118 / 256.0) * pdVar7[1];
  if ((dVar14 != 0.0) || (dVar12 != 0.0)) {
    if (dVar14 == 0.0) {
      dVar11 = 1.0;
      dVar13 = 0.0;
      dVar14 = dVar12;
      if (dVar12 <= 0.0) {
        dVar11 = -1.0;
        dVar14 = -dVar12;
      }
    }
    else if (dVar12 == 0.0) {
      dVar11 = 0.0;
      dVar13 = 1.0;
      if (dVar14 <= 0.0) {
        dVar13 = -1.0;
        dVar14 = -dVar14;
      }
    }
    else {
      dVar8 = dVar14;
      _hypot(dVar14,dVar12);
      dVar11 = dVar12 / dVar8;
      dVar13 = dVar14 / dVar8;
      dVar14 = dVar8;
    }
    uStack_128 = *(undefined8 *)(param_1 + 0x3c0);
    if (dVar14 != 0.0) {
      puVar1 = (undefined8 *)(param_1 + 0x3d8);
      dVar12 = dVar14;
      do {
        dVar8 = *(double *)(param_1 + 0x480);
        if (dVar12 <= *(double *)(param_1 + 0x480)) {
          dVar8 = dVar12;
        }
        dVar12 = dVar12 - dVar8;
        dVar10 = dVar13 * (dVar14 - dVar12);
        dVar9 = dVar11 * (dVar14 - dVar12);
        pdVar7 = *(double **)(param_1 + 0x40);
        uStack_120 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20) +
                              SUB84(pdVar7[3] * dVar9 + pdVar7[1] * dVar10 + 26388279066624.0,0),
                              (int)*(undefined8 *)(param_1 + 0x3c0) +
                              SUB84(pdVar7[2] * dVar9 + *pdVar7 * dVar10 + 26388279066624.0,0));
        if (*(int *)(param_1 + 0x478) == 0) {
LAB_1097e2198:
          if (*(int *)(param_1 + 0x3d4) != 0) {
            lVar5 = param_1;
            FUN_1097e362c(param_1,puVar1);
            if ((int)lVar5 != 0) {
              return;
            }
            uVar6 = 0;
            goto LAB_1097e228c;
          }
        }
        else {
          if ((bVar4) && ((*(int *)(param_1 + 0x420) != 0 || (*(int *)(param_1 + 0x47c) == 0)))) {
            lVar5 = param_1 + 0x4a4;
            func_0x0001097ed4b8(lVar5,&uStack_128);
            if ((int)lVar5 == 0) goto LAB_1097e2198;
          }
          lVar5 = param_1;
          FUN_1097e2b54(dVar13,dVar11,param_1,&uStack_128,&uStack_120,&iStack_118,&uStack_c8,
                        &uStack_110);
          if ((int)lVar5 != 0) {
            return;
          }
          if (*(int *)(param_1 + 0x3d4) == 0) {
            if ((*(int *)(param_1 + 0x420) == 0) && (*(int *)(param_1 + 0x47c) != 0)) {
              *(undefined8 *)(param_1 + 0x450) = uStack_a0;
              *(undefined8 *)(param_1 + 0x448) = uStack_a8;
              *(undefined8 *)(param_1 + 0x460) = uStack_90;
              *(undefined8 *)(param_1 + 0x458) = uStack_98;
              *(undefined8 *)(param_1 + 0x468) = uStack_88;
              *(undefined8 *)(param_1 + 0x430) = uStack_c0;
              *(undefined8 *)(param_1 + 0x428) = uStack_c8;
              *(undefined8 *)(param_1 + 0x440) = uStack_b0;
              *(undefined8 *)(param_1 + 0x438) = uStack_b8;
              *(undefined4 *)(param_1 + 0x420) = 1;
            }
            else {
              lVar5 = param_1;
              FUN_1097e30e4(param_1,&uStack_c8);
              if ((int)lVar5 != 0) {
                return;
              }
            }
          }
          else {
            lVar5 = param_1;
            FUN_1097e2cd8(param_1,puVar1,&uStack_c8);
            if ((int)lVar5 != 0) {
              return;
            }
            *(undefined4 *)(param_1 + 0x3d4) = 0;
          }
          if (dVar12 == 0.0) {
            *(undefined8 *)(param_1 + 0x400) = uStack_e8;
            *(undefined8 *)(param_1 + 0x3f8) = uStack_f0;
            *(undefined8 *)(param_1 + 0x410) = uStack_d8;
            *(undefined8 *)(param_1 + 0x408) = uStack_e0;
            *(undefined8 *)(param_1 + 0x418) = uStack_d0;
            *(undefined8 *)(param_1 + 0x3e0) = uStack_108;
            *puVar1 = uStack_110;
            *(undefined8 *)(param_1 + 0x3f0) = uStack_f8;
            *(undefined8 *)(param_1 + 1000) = uStack_100;
            uVar6 = 1;
LAB_1097e228c:
            *(undefined4 *)(param_1 + 0x3d4) = uVar6;
          }
          else {
            lVar5 = param_1;
            FUN_1097e362c(param_1,&uStack_110);
            if ((int)lVar5 != 0) {
              return;
            }
          }
        }
        func_0x0001097f3de4(dVar8,param_1 + 0x470);
        uStack_128 = uStack_120;
      } while (dVar12 != 0.0);
    }
    if ((*(int *)(param_1 + 0x478) != 0) && (*(int *)(param_1 + 0x3d4) == 0)) {
      FUN_1097e3144(dVar13,dVar11,param_2,&iStack_118,param_1,param_1 + 0x3d8);
      lVar5 = param_1;
      FUN_1097e30e4(param_1,param_1 + 0x3d8);
      if ((int)lVar5 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3d4) = 1;
    }
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)param_2;
  }
  return;
}



/* Entry: 1097e2324; end: 1097e24c3;  */

void FUN_1097e2324(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iStack_c8;
  int iStack_c4;
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
  
  *(undefined4 *)(param_1 + 0x3d0) = 1;
  iStack_c8 = *param_2 - *(int *)(param_1 + 0x3c0);
  if (iStack_c8 == 0) {
    iVar2 = *(int *)(param_1 + 0x3c4);
    iStack_c4 = param_2[1];
    if (iVar2 == iStack_c4) {
      return;
    }
  }
  else {
    iStack_c4 = param_2[1];
    iVar2 = *(int *)(param_1 + 0x3c4);
  }
  iStack_c4 = iStack_c4 - iVar2;
  dVar4 = (double)iStack_c8 / 256.0;
  dVar5 = (double)iStack_c4 / 256.0;
  pdVar3 = *(double **)(param_1 + 0x48);
  dVar6 = dVar5 * pdVar3[2] + dVar4 * *pdVar3;
  dVar7 = dVar5 * pdVar3[3] + dVar4 * pdVar3[1];
  if ((dVar6 != 0.0) || (dVar7 != 0.0)) {
    if (dVar6 == 0.0) {
      dVar5 = 1.0;
      dVar4 = 0.0;
      if (dVar7 <= 0.0) {
        dVar5 = -1.0;
      }
    }
    else if (dVar7 == 0.0) {
      dVar5 = 0.0;
      dVar4 = 1.0;
      if (dVar6 <= 0.0) {
        dVar4 = -1.0;
      }
    }
    else {
      dVar5 = dVar6;
      _hypot(dVar6,dVar7);
      dVar4 = dVar6 / dVar5;
      dVar5 = dVar7 / dVar5;
    }
  }
  lVar1 = param_1;
  FUN_1097e2b54(dVar4,dVar5,param_1,param_1 + 0x3c0,param_2,&iStack_c8,&uStack_78,&uStack_c0);
  if ((int)lVar1 == 0) {
    if (*(int *)(param_1 + 0x3d4) == 0) {
      if (*(int *)(param_1 + 0x420) == 0) {
        *(undefined8 *)(param_1 + 0x468) = uStack_38;
        *(undefined8 *)(param_1 + 0x450) = uStack_50;
        *(undefined8 *)(param_1 + 0x448) = uStack_58;
        *(undefined8 *)(param_1 + 0x460) = uStack_40;
        *(undefined8 *)(param_1 + 0x458) = uStack_48;
        *(undefined8 *)(param_1 + 0x430) = uStack_70;
        *(undefined8 *)(param_1 + 0x428) = uStack_78;
        *(undefined8 *)(param_1 + 0x440) = uStack_60;
        *(undefined8 *)(param_1 + 0x438) = uStack_68;
        *(undefined4 *)(param_1 + 0x420) = 1;
      }
    }
    else {
      lVar1 = param_1;
      FUN_1097e2cd8(param_1,param_1 + 0x3d8,&uStack_78);
      if ((int)lVar1 != 0) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x418) = uStack_80;
    *(undefined8 *)(param_1 + 0x400) = uStack_98;
    *(undefined8 *)(param_1 + 0x3f8) = uStack_a0;
    *(undefined8 *)(param_1 + 0x410) = uStack_88;
    *(undefined8 *)(param_1 + 0x408) = uStack_90;
    *(undefined8 *)(param_1 + 0x3e0) = uStack_b8;
    *(undefined8 *)(param_1 + 0x3d8) = uStack_c0;
    *(undefined8 *)(param_1 + 0x3f0) = uStack_a8;
    *(undefined8 *)(param_1 + 1000) = uStack_b0;
    *(undefined4 *)(param_1 + 0x3d4) = 1;
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)param_2;
  }
  return;
}



/* Entry: 1097e24c4; end: 1097e27cb;  */

void FUN_1097e24c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  iVar3 = *(int *)(param_1 + 0x470);
  pcVar1 = FUN_1097e37b8;
  if (iVar3 != 0) {
    pcVar1 = FUN_1097e37b0;
  }
  puVar4 = auStack_90;
  FUN_1097f35f0(puVar4,pcVar1,param_1,param_1 + 0x3c0,param_2,param_3,param_4);
  if ((int)puVar4 == 0) {
    pcVar1 = FUN_1097e37b0;
    if (iVar3 != 0) {
      pcVar1 = FUN_1097e37b0;
    }
    uStack_d8 = CONCAT44((int)((ulong)*param_4 >> 0x20) -
                         (int)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20),
                         (int)*param_4 - (int)*(undefined8 *)(param_1 + 0x3c0));
    (*pcVar1)(param_1,param_4,&uStack_d8);
  }
  else if (1 < *(int *)(param_1 + 0xb0)) {
    if ((*(int *)(param_1 + 0x470) == 0) || (*(int *)(param_1 + 0x478) != 0)) {
      pdVar6 = *(double **)(param_1 + 0x48);
      dVar9 = ((double)iStack_5c / 256.0) * pdVar6[2] + ((double)iStack_60 / 256.0) * *pdVar6;
      dVar10 = ((double)iStack_5c / 256.0) * pdVar6[3] + ((double)iStack_60 / 256.0) * pdVar6[1];
      if ((dVar9 != 0.0) || (dVar10 != 0.0)) {
        if (dVar9 == 0.0) {
          dVar8 = 1.0;
          dVar7 = 0.0;
          if (dVar10 <= 0.0) {
            dVar8 = -1.0;
          }
        }
        else if (dVar10 == 0.0) {
          dVar8 = 0.0;
          dVar7 = 1.0;
          if (dVar9 <= 0.0) {
            dVar7 = -1.0;
          }
        }
        else {
          dVar8 = dVar9;
          _hypot(dVar9,dVar10);
          dVar7 = dVar9 / dVar8;
          dVar8 = dVar10 / dVar8;
        }
        FUN_1097e3144(dVar7,dVar8,param_1 + 0x3c0,&iStack_60,param_1,&uStack_d8);
      }
      if (*(int *)(param_1 + 0x3d4) == 0) {
        if (*(int *)(param_1 + 0x420) == 0) {
          *(undefined8 *)(param_1 + 0x468) = uStack_98;
          *(undefined8 *)(param_1 + 0x450) = uStack_b0;
          *(undefined8 *)(param_1 + 0x448) = uStack_b8;
          *(undefined8 *)(param_1 + 0x460) = uStack_a0;
          *(undefined8 *)(param_1 + 0x458) = uStack_a8;
          *(undefined8 *)(param_1 + 0x430) = uStack_d0;
          *(undefined8 *)(param_1 + 0x428) = uStack_d8;
          *(undefined8 *)(param_1 + 0x440) = uStack_c0;
          *(undefined8 *)(param_1 + 0x438) = uStack_c8;
          *(undefined4 *)(param_1 + 0x420) = 1;
        }
      }
      else {
        lVar5 = param_1;
        FUN_1097e2cd8(param_1,param_1 + 0x3d8,&uStack_d8);
        if ((int)lVar5 != 0) {
          return;
        }
      }
      *(undefined8 *)(param_1 + 0x418) = uStack_98;
      *(undefined8 *)(param_1 + 0x400) = uStack_b0;
      *(undefined8 *)(param_1 + 0x3f8) = uStack_b8;
      *(undefined8 *)(param_1 + 0x410) = uStack_a0;
      *(undefined8 *)(param_1 + 0x408) = uStack_a8;
      *(undefined8 *)(param_1 + 0x3e0) = uStack_d0;
      *(undefined8 *)(param_1 + 0x3d8) = uStack_d8;
      *(undefined8 *)(param_1 + 0x3f0) = uStack_c0;
      *(undefined8 *)(param_1 + 1000) = uStack_c8;
      *(undefined4 *)(param_1 + 0x3d4) = 1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 1;
    iVar3 = (int)auStack_90;
    FUN_1097f3744(*(undefined8 *)(param_1 + 0x58));
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 0x470) == 0) || (*(int *)(param_1 + 0x478) != 0)) {
        pdVar6 = *(double **)(param_1 + 0x48);
        dVar9 = ((double)iStack_54 / 256.0) * pdVar6[2] + ((double)iStack_58 / 256.0) * *pdVar6;
        dVar10 = ((double)iStack_54 / 256.0) * pdVar6[3] + ((double)iStack_58 / 256.0) * pdVar6[1];
        if ((dVar9 != 0.0) || (dVar10 != 0.0)) {
          if (dVar9 == 0.0) {
            dVar8 = 1.0;
            dVar7 = 0.0;
            if (dVar10 <= 0.0) {
              dVar8 = -1.0;
            }
          }
          else if (dVar10 == 0.0) {
            dVar8 = 0.0;
            dVar7 = 1.0;
            if (dVar9 <= 0.0) {
              dVar7 = -1.0;
            }
          }
          else {
            dVar8 = dVar9;
            _hypot(dVar9,dVar10);
            dVar7 = dVar9 / dVar8;
            dVar8 = dVar10 / dVar8;
          }
          FUN_1097e3144(dVar7,dVar8,param_1 + 0x3c0,&iStack_58,param_1,&uStack_d8);
        }
        lVar5 = param_1;
        FUN_1097e2cd8(param_1,(undefined8 *)(param_1 + 0x3d8),&uStack_d8);
        if ((int)lVar5 != 0) {
          return;
        }
        *(undefined8 *)(param_1 + 0x400) = uStack_b0;
        *(undefined8 *)(param_1 + 0x3f8) = uStack_b8;
        *(undefined8 *)(param_1 + 0x410) = uStack_a0;
        *(undefined8 *)(param_1 + 0x408) = uStack_a8;
        *(undefined8 *)(param_1 + 0x418) = uStack_98;
        *(undefined8 *)(param_1 + 0x3e0) = uStack_d0;
        *(undefined8 *)(param_1 + 0x3d8) = uStack_d8;
        *(undefined8 *)(param_1 + 0x3f0) = uStack_c0;
        *(undefined8 *)(param_1 + 1000) = uStack_c8;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}



/* Entry: 1097e27cc; end: 1097e2857;  */

void FUN_1097e27cc(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x470) == 0) {
    lVar2 = param_1;
    FUN_1097e2324(param_1,param_1 + 0x3c8);
    iVar1 = (int)lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_1097e1f88(param_1,param_1 + 0x3c8);
    iVar1 = (int)lVar2;
  }
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x420) == 0) || (*(int *)(param_1 + 0x3d4) == 0)) {
      lVar2 = param_1;
      FUN_1097e2858();
      iVar1 = (int)lVar2;
    }
    else {
      lVar2 = param_1;
      FUN_1097e2cd8(param_1,param_1 + 0x3d8,param_1 + 0x428);
      iVar1 = (int)lVar2;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x420) = 0;
      *(undefined8 *)(param_1 + 0x3d0) = 0;
    }
  }
  return;
}



/* Entry: 1097e2858; end: 1097e299b;  */

void FUN_1097e2858(long param_1)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  if ((((*(int *)(param_1 + 0x3d0) != 0) && (*(int *)(param_1 + 0x420) == 0)) &&
      (*(int *)(param_1 + 0x3d4) == 0)) && (*(int *)(param_1 + 8) == 1)) {
    uStack_38 = 0x100;
    pdVar2 = *(double **)(param_1 + 0x48);
    dVar4 = 0.0;
    dVar6 = *pdVar2 + pdVar2[2] * 0.0;
    dVar5 = pdVar2[1] + pdVar2[3] * 0.0;
    dVar3 = 1.0;
    if ((dVar6 != 0.0) || (dVar5 != 0.0)) {
      if (dVar6 == 0.0) {
        dVar4 = 1.0;
        dVar3 = 0.0;
        if (dVar5 <= 0.0) {
          dVar4 = -1.0;
        }
      }
      else if (dVar5 == 0.0) {
        if (dVar6 <= 0.0) {
          dVar3 = -1.0;
        }
      }
      else {
        dVar4 = dVar6;
        _hypot(dVar6,dVar5);
        dVar3 = dVar6 / dVar4;
        dVar4 = dVar5 / dVar4;
      }
    }
    FUN_1097e3144(dVar3,dVar4,param_1 + 0x3c8,&uStack_38,param_1,auStack_80);
    lVar1 = param_1;
    FUN_1097e30e4(param_1,auStack_80);
    if ((int)lVar1 != 0) {
      return;
    }
    lVar1 = param_1;
    FUN_1097e362c(param_1,auStack_80);
    if ((int)lVar1 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0x420) == 0) ||
      (lVar1 = param_1, FUN_1097e30e4(param_1,param_1 + 0x428), (int)lVar1 == 0)) &&
     (*(int *)(param_1 + 0x3d4) != 0)) {
    FUN_1097e362c(param_1,param_1 + 0x3d8);
  }
  return;
}



/* Entry: 1097e299c; end: 1097e2a6f;  */

undefined1 *
FUN_1097e299c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_4e8 [120];
  long lStack_470;
  code *pcStack_468;
  undefined1 *puStack_430;
  undefined1 auStack_428 [944];
  int iStack_78;
  
  puVar2 = auStack_4e8;
  FUN_1097e1dac(puVar2,param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x28),
                *(undefined4 *)(param_5 + 0x30));
  if ((int)puVar2 == 0) {
    pcStack_468 = FUN_1097ea088;
    pcVar1 = FUN_1097e2324;
    if (iStack_78 != 0) {
      pcVar1 = FUN_1097e1f88;
    }
    lStack_470 = param_5;
    FUN_1097dce2c(param_1,FUN_1097e1f38,pcVar1,FUN_1097e24c4,FUN_1097e27cc,auStack_4e8);
    if ((int)param_1 == 0) {
      param_1 = auStack_4e8;
      FUN_1097e2858(param_1);
    }
    puVar2 = param_1;
    if (puStack_430 != auStack_428) {
      _free();
    }
  }
  return puVar2;
}



/* Entry: 1097e2a70; end: 1097e2b53;  */

ulong FUN_1097e2a70(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6)

{
  ulong auStack_430 [2];
  undefined4 uStack_420;
  undefined8 uStack_3fc;
  undefined1 *puStack_3f0;
  undefined1 auStack_3e8 [904];
  
  uStack_3fc = 0x2000000000;
  uStack_420 = 0x80000000;
  auStack_430[1] = 0x800000007fffffff;
  auStack_430[0] = 0x7fffffff00000000;
  puStack_3f0 = auStack_3e8;
  FUN_1097e9d0c(auStack_430,*(undefined8 *)(param_6 + 0x18),*(undefined4 *)(param_6 + 0x20));
  FUN_1097ded14(param_1,param_2,param_3,param_4,param_5,auStack_430);
  if ((int)param_2 == 0) {
    param_2 = auStack_430[0] & 0xffffffff;
    if ((int)auStack_430[0] == 0) {
      FUN_1097c6bf8(param_6,auStack_430,0);
      param_2 = param_6;
    }
  }
  if (puStack_3f0 != auStack_3e8) {
    _free();
  }
  return param_2;
}



/* Entry: 1097e2b54; end: 1097e2cd7;  */

int * FUN_1097e2b54(int *param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5,
                   undefined8 *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  long lVar13;
  double *pdVar14;
  undefined8 uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uStack_458;
  undefined8 uStack_450;
  int iStack_448;
  int iStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  int *piStack_300;
  int *piStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  int iStack_2d0;
  int iStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar8 = param_1;
  FUN_1097e3144(param_2,param_4,param_1,param_5);
  uVar15 = *param_5;
  param_6[1] = param_5[1];
  *param_6 = uVar15;
  uVar1 = param_5[3];
  uVar15 = param_5[2];
  uVar21 = param_5[5];
  uVar20 = param_5[4];
  uVar25 = param_5[7];
  uVar22 = param_5[6];
  param_6[8] = param_5[8];
  param_6[5] = uVar21;
  param_6[4] = uVar20;
  param_6[7] = uVar25;
  param_6[6] = uVar22;
  param_6[3] = uVar1;
  param_6[2] = uVar15;
  if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
    piVar6 = (int *)0x0;
LAB_1097e2ca4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return piVar6;
    }
  }
  else {
    param_6[1] = *(undefined8 *)param_3;
    *param_6 = CONCAT44(((int)((ulong)*(undefined8 *)param_3 >> 0x20) -
                        (int)((ulong)*(undefined8 *)param_2 >> 0x20)) +
                        (int)((ulong)*param_6 >> 0x20),
                        ((int)*(undefined8 *)param_3 - (int)*(undefined8 *)param_2) + (int)*param_6)
    ;
    param_4 = (int *)(param_6 + 2);
    *(ulong *)param_4 =
         CONCAT44(((int)((ulong)*(undefined8 *)param_3 >> 0x20) -
                  (int)((ulong)*(undefined8 *)param_2 >> 0x20)) +
                  (int)((ulong)*(undefined8 *)param_4 >> 0x20),
                  ((int)*(undefined8 *)param_3 - (int)*(undefined8 *)param_2) +
                  (int)*(undefined8 *)param_4);
    if (*(code **)(param_1 + 0x20) == (code *)0x0) {
      uStack_68 = param_5[2];
      uStack_60 = param_6[2];
      uStack_58 = *param_6;
      uStack_50 = *param_5;
      piVar6 = *(int **)(param_1 + 0x1e);
      param_4 = (int *)&uStack_68;
      (**(code **)(param_1 + 0x26))();
      goto LAB_1097e2ca4;
    }
    piVar6 = *(int **)(param_1 + 0x1e);
    piVar8 = (int *)(param_5 + 2);
    (**(code **)(param_1 + 0x20))();
    if ((int)piVar6 != 0) goto LAB_1097e2ca4;
    piVar6 = *(int **)(param_1 + 0x1e);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0001097e2c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x20))(piVar6,param_5,param_6);
      return piVar6;
    }
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1097e2cd8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar7 = piVar8;
  piVar5 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1097e31d4();
  piVar16 = param_4 + 4;
  piVar17 = piVar8 + 4;
  if ((((*piVar16 == *piVar17) && (param_4[5] == piVar8[5])) && (*param_4 == *piVar8)) &&
     (param_4[1] == piVar8[1])) {
LAB_1097e30a8:
    piVar7 = (int *)0x0;
LAB_1097e30ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return piVar7;
    }
LAB_1097e30e0:
    ___stack_chk_fail();
    ppuStack_100 = &puStack_80;
    pcStack_f8 = FUN_1097e30e4;
    uStack_138 = *(undefined8 *)(piVar5 + 6);
    uStack_148 = *(undefined8 *)(piVar5 + 2);
    uStack_150 = *(undefined8 *)piVar5;
    uStack_140 = *(undefined8 *)(piVar5 + 4);
    uStack_128 = *(undefined8 *)(piVar5 + 10);
    uStack_130 = *(undefined8 *)(piVar5 + 8);
    dStack_118 = *(double *)(piVar5 + 0xe);
    dStack_120 = *(double *)(piVar5 + 0xc);
    uStack_110 = *(undefined8 *)(piVar5 + 0x10);
    dStack_120 = -*(double *)(piVar5 + 0xc);
    dStack_118 = -*(double *)(piVar5 + 0xe);
    uStack_138 = CONCAT44(-(int)((ulong)uStack_138 >> 0x20),-(int)uStack_138);
    uStack_150 = *(undefined8 *)(piVar5 + 4);
    uStack_140 = *(undefined8 *)piVar5;
    FUN_1097e362c();
    return piVar7;
  }
  pcVar12 = *(code **)(piVar6 + 0x20);
  iVar18 = (int)piVar7;
  if (iVar18 == 0) {
    piVar10 = piVar17;
    piVar9 = piVar16;
    if (pcVar12 == (code *)0x0) goto LAB_1097e2dec;
    piVar7 = *(int **)(piVar6 + 0x1e);
    piVar5 = param_4;
    (*pcVar12)(piVar7,param_4,param_4 + 2);
    if ((int)piVar7 == 0) {
      piVar7 = *(int **)(piVar6 + 0x1e);
      piVar5 = param_4 + 2;
      (**(code **)(piVar6 + 0x20))(piVar7,piVar5,piVar8);
      iVar4 = (int)piVar7;
joined_r0x0001097e2ddc:
      piVar10 = piVar17;
      piVar9 = piVar16;
      if (iVar4 == 0) goto LAB_1097e2dec;
    }
    goto LAB_1097e30ac;
  }
  piVar10 = piVar8;
  piVar9 = param_4;
  if (pcVar12 != (code *)0x0) {
    piVar7 = *(int **)(piVar6 + 0x1e);
    (*pcVar12)(piVar7,piVar17,param_4 + 2);
    piVar5 = piVar17;
    if ((int)piVar7 == 0) {
      piVar7 = *(int **)(piVar6 + 0x1e);
      piVar5 = param_4 + 2;
      (**(code **)(piVar6 + 0x20))(piVar7,piVar5,piVar16);
      iVar4 = (int)piVar7;
      piVar16 = param_4;
      piVar17 = piVar8;
      goto joined_r0x0001097e2ddc;
    }
    goto LAB_1097e30ac;
  }
LAB_1097e2dec:
  if (piVar6[3] == 2) goto LAB_1097e2f74;
  if (piVar6[3] != 1) {
    dVar23 = *(double *)(param_4 + 0xc);
    dVar28 = *(double *)(param_4 + 0xe);
    dVar31 = *(double *)(piVar8 + 0xc);
    dVar29 = *(double *)(piVar8 + 0xe);
    if (*(double *)(piVar6 + 4) * *(double *)(piVar6 + 4) *
        (1.0 - (-(dVar28 * dVar29) - dVar31 * dVar23)) < 2.0) {
LAB_1097e2f74:
      if (*(code **)(piVar6 + 0x20) != (code *)0x0) {
        piVar7 = *(int **)(piVar6 + 0x1e);
        if (iVar18 == 0) {
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          piVar8 = piVar10;
          piVar10 = piVar9;
        }
        else {
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          piVar8 = piVar9;
        }
        if (lVar13 == lStack_c8) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(piVar6 + 0x20))(piVar7,piVar8,piVar10);
          return piVar7;
        }
        goto LAB_1097e30e0;
      }
      uStack_e8 = *(undefined8 *)(param_4 + 2);
      uStack_e0 = *(undefined8 *)piVar9;
      uStack_d8 = *(undefined8 *)piVar10;
      pcVar12 = *(code **)(piVar6 + 0x22);
    }
    else {
      dVar26 = (double)*piVar9 / 256.0;
      dVar27 = (double)piVar9[1] / 256.0;
      pdVar14 = *(double **)(piVar6 + 0x10);
      dVar32 = dVar28 * pdVar14[2] + dVar23 * *pdVar14;
      dVar24 = dVar28 * pdVar14[3] + dVar23 * pdVar14[1];
      dVar19 = (double)*piVar10 / 256.0;
      dVar33 = (double)piVar10[1] / 256.0;
      dVar23 = dVar29 * pdVar14[2] + dVar31 * *pdVar14;
      dVar29 = dVar29 * pdVar14[3] + dVar31 * pdVar14[1];
      dVar31 = (dVar24 * -(dVar33 * dVar23) + dVar29 * dVar24 * (dVar19 - dVar26) +
               dVar29 * dVar27 * dVar32) / (-(dVar23 * dVar24) + dVar29 * dVar32);
      dVar30 = dVar19;
      dVar28 = dVar33;
      if (ABS(dVar29) <= ABS(dVar24)) {
        dVar30 = dVar26;
        dVar29 = dVar24;
        dVar23 = dVar32;
        dVar28 = dVar27;
      }
      dVar30 = dVar30 + (dVar23 * (dVar31 - dVar28)) / dVar29;
      dVar29 = (double)param_4[2] / 256.0;
      dVar28 = (double)param_4[3] / 256.0;
      dVar23 = -((dVar30 - dVar29) * (dVar27 - dVar28)) + (dVar31 - dVar28) * (dVar26 - dVar29);
      dVar29 = -((dVar30 - dVar29) * (dVar33 - dVar28)) + (dVar31 - dVar28) * (dVar19 - dVar29);
      bVar3 = dVar29 < 0.0;
      bVar2 = dVar29 != 0.0 && !bVar3;
      if (dVar23 <= 0.0) {
        bVar2 = (dVar29 == 0.0 || bVar3) && bVar3 != 0.0 <= dVar23;
      }
      if (bVar2) goto LAB_1097e2f74;
      pcVar12 = *(code **)(piVar6 + 0x20);
      if (pcVar12 != (code *)0x0) {
        uStack_e8 = CONCAT44(SUB84(dVar31 + 26388279066624.0,0),SUB84(dVar30 + 26388279066624.0,0));
        piVar7 = *(int **)(piVar6 + 0x1e);
        if (iVar18 == 0) {
          (*pcVar12)(piVar7,piVar10,&uStack_e8);
          piVar5 = piVar10;
          if ((int)piVar7 == 0) {
            piVar7 = *(int **)(piVar6 + 0x1e);
            pcVar12 = *(code **)(piVar6 + 0x20);
            goto LAB_1097e30a0;
          }
        }
        else {
          (*pcVar12)();
          piVar5 = piVar9;
          if ((int)piVar7 == 0) {
            piVar7 = *(int **)(piVar6 + 0x1e);
            pcVar12 = *(code **)(piVar6 + 0x20);
            piVar9 = piVar10;
LAB_1097e30a0:
            piVar5 = (int *)&uStack_e8;
            (*pcVar12)(piVar7,piVar5,piVar9);
            if ((int)piVar7 == 0) goto LAB_1097e30a8;
          }
        }
        goto LAB_1097e30ac;
      }
      uStack_e8 = *(undefined8 *)(param_4 + 2);
      uStack_e0 = *(undefined8 *)piVar9;
      uStack_d8 = CONCAT44(SUB84(dVar31 + 26388279066624.0,0),SUB84(dVar30 + 26388279066624.0,0));
      uStack_d0 = *(undefined8 *)piVar10;
      pcVar12 = *(code **)(piVar6 + 0x26);
    }
    piVar7 = *(int **)(piVar6 + 0x1e);
    piVar5 = (int *)&uStack_e8;
    (*pcVar12)(piVar7);
    goto LAB_1097e30ac;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) goto LAB_1097e30e0;
  piVar7 = param_4 + 6;
  piVar5 = param_4 + 2;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((piVar6[0x128] == 0) ||
     (((piVar6[0x129] <= *piVar5 && (*piVar5 <= piVar6[299])) &&
      ((piVar6[0x12a] <= param_4[3] && (param_4[3] <= piVar6[300])))))) {
    if (iVar18 == 0) {
      func_0x0001097e6760(piVar6 + 0x28,piVar7,piVar8 + 6,&iStack_2cc,&iStack_2d0);
      pcVar12 = *(code **)(piVar6 + 0x20);
      if (pcVar12 != (code *)0x0) {
        uStack_2c8 = *(undefined8 *)piVar9;
        iVar18 = iStack_2cc;
        if (iStack_2cc != iStack_2d0) {
          do {
            piVar8 = (int *)(*(long *)(piVar6 + 0x2e) + (long)iVar18 * 0x18);
            uStack_2d8 = CONCAT44(piVar8[1] + (int)((ulong)*(undefined8 *)piVar5 >> 0x20),
                                  *piVar8 + (int)*(undefined8 *)piVar5);
            piVar8 = *(int **)(piVar6 + 0x1e);
            piVar7 = (int *)&uStack_2d8;
            (**(code **)(piVar6 + 0x20))(piVar8,piVar7,&uStack_2c8);
            piVar16 = piVar8;
            if ((int)piVar8 != 0) goto LAB_1097e34b0;
            uStack_2c8 = uStack_2d8;
            iVar4 = 0;
            if (iVar18 + 1 != piVar6[0x2c]) {
              iVar4 = iVar18 + 1;
            }
            iVar18 = iVar4;
          } while (iVar4 != iStack_2d0);
          pcVar12 = *(code **)(piVar6 + 0x20);
        }
        piVar8 = *(int **)(piVar6 + 0x1e);
        piVar5 = (int *)&uStack_2c8;
        piVar7 = piVar10;
        goto LAB_1097e3400;
      }
      iVar18 = iStack_2d0 - iStack_2cc;
      if (iVar18 == 0) goto LAB_1097e3488;
      if (iVar18 < 0) {
        iVar18 = piVar6[0x2c] + iVar18;
      }
      if (iVar18 < 0x3f) {
        piVar8 = (int *)&uStack_2c8;
      }
      else {
        piVar8 = (int *)((ulong)(iVar18 + 2) << 3);
        _malloc();
        if (piVar8 == (int *)0x0) goto LAB_1097e3510;
      }
      *(undefined8 *)piVar8 = *(undefined8 *)piVar9;
      uVar15 = *(undefined8 *)piVar5;
      lVar13 = *(long *)(piVar6 + 0x2e);
      iVar18 = piVar6[0x2c];
      uVar11 = 1;
      piVar7 = piVar8;
      do {
        piVar16 = piVar7 + 2;
        *(undefined8 *)piVar16 = uVar15;
        piVar17 = (int *)(lVar13 + (long)iStack_2cc * 0x18);
        *piVar16 = *piVar17 + (int)uVar15;
        piVar7[3] = piVar17[1] + (int)((ulong)uVar15 >> 0x20);
        uVar11 = uVar11 + 1;
        iVar4 = 0;
        if (iStack_2cc + 1 != iVar18) {
          iVar4 = iStack_2cc + 1;
        }
        piVar17 = piVar8;
        piVar7 = piVar16;
        iStack_2cc = iVar4;
      } while (iVar4 != iStack_2d0);
    }
    else {
      func_0x0001097e689c();
      pcVar12 = *(code **)(piVar6 + 0x20);
      if (pcVar12 != (code *)0x0) {
        uStack_2c8 = *(undefined8 *)piVar9;
        iVar18 = iStack_2cc;
        if (iStack_2cc != iStack_2d0) {
          do {
            piVar8 = (int *)(*(long *)(piVar6 + 0x2e) + (long)iVar18 * 0x18);
            uStack_2d8 = CONCAT44(piVar8[1] + (int)((ulong)*(undefined8 *)piVar5 >> 0x20),
                                  *piVar8 + (int)*(undefined8 *)piVar5);
            piVar8 = *(int **)(piVar6 + 0x1e);
            piVar7 = (int *)&uStack_2c8;
            (**(code **)(piVar6 + 0x20))(piVar8,piVar7,&uStack_2d8);
            piVar16 = piVar8;
            if ((int)piVar8 != 0) goto LAB_1097e34b0;
            uStack_2c8 = uStack_2d8;
            if (iVar18 == 0) {
              iVar18 = piVar6[0x2c];
            }
            iVar18 = iVar18 + -1;
          } while (iVar18 != iStack_2d0);
          pcVar12 = *(code **)(piVar6 + 0x20);
        }
        piVar8 = *(int **)(piVar6 + 0x1e);
        piVar7 = (int *)&uStack_2c8;
        piVar5 = piVar10;
LAB_1097e3400:
        (*pcVar12)(piVar8,piVar7,piVar5);
        piVar16 = piVar8;
        goto LAB_1097e34b0;
      }
      iVar18 = iStack_2d0 - iStack_2cc;
      if (iVar18 == 0) goto LAB_1097e3488;
      if (iVar18 < 0) {
        iVar18 = piVar6[0x2c] + iVar18;
      }
      if (iVar18 < 0x3f) {
        piVar17 = (int *)&uStack_2c8;
      }
      else {
        piVar8 = (int *)((ulong)(iVar18 + 2) << 3);
        _malloc();
        piVar17 = piVar8;
        if (piVar8 == (int *)0x0) {
LAB_1097e3510:
          piVar16 = (int *)0x1;
          goto LAB_1097e34b0;
        }
      }
      *(undefined8 *)piVar17 = *(undefined8 *)piVar9;
      uVar15 = *(undefined8 *)piVar5;
      lVar13 = *(long *)(piVar6 + 0x2e);
      uVar11 = 1;
      piVar8 = piVar17;
      do {
        piVar7 = piVar8 + 2;
        *(undefined8 *)piVar7 = uVar15;
        piVar16 = (int *)(lVar13 + (long)iStack_2cc * 0x18);
        *piVar7 = *piVar16 + (int)uVar15;
        piVar8[3] = piVar16[1] + (int)((ulong)uVar15 >> 0x20);
        if (iStack_2cc == 0) {
          iStack_2cc = piVar6[0x2c];
        }
        iStack_2cc = iStack_2cc + -1;
        uVar11 = uVar11 + 1;
        piVar8 = piVar7;
      } while (iStack_2cc != iStack_2d0);
    }
    *(undefined8 *)(piVar17 + (ulong)uVar11 * 2) = *(undefined8 *)piVar10;
    piVar16 = *(int **)(piVar6 + 0x1e);
    (**(code **)(piVar6 + 0x24))(piVar16,piVar5,piVar17,uVar11 + 1);
    piVar8 = piVar16;
    piVar7 = piVar5;
    if (piVar17 != (int *)&uStack_2c8) {
      _free();
      piVar8 = piVar17;
      piVar7 = piVar5;
    }
LAB_1097e34b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return piVar16;
    }
  }
  else {
    if (*(code **)(piVar6 + 0x20) == (code *)0x0) {
LAB_1097e3488:
      uStack_2c8 = *(undefined8 *)piVar5;
      uStack_2c0 = *(undefined8 *)piVar9;
      uStack_2b8 = *(undefined8 *)piVar10;
      piVar8 = *(int **)(piVar6 + 0x1e);
      piVar7 = (int *)&uStack_2c8;
      (**(code **)(piVar6 + 0x22))();
      piVar16 = piVar8;
      goto LAB_1097e34b0;
    }
    piVar8 = *(int **)(piVar6 + 0x1e);
    if (iVar18 == 0) {
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar5 = piVar10;
    }
    else {
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar5 = piVar9;
      piVar9 = piVar10;
    }
    if (lVar13 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar6 + 0x20))(piVar8,piVar5,piVar9);
      return piVar8;
    }
  }
  ___stack_chk_fail();
  pcStack_2e8 = FUN_1097e362c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piStack_300 = piVar6;
  piStack_2f8 = piVar10;
  ppuStack_2f0 = &puStack_80;
  if (piVar8[2] == 2) {
    dVar31 = *(double *)(piVar7 + 0xc) * *(double *)(piVar8 + 0x14);
    dVar29 = *(double *)(piVar7 + 0xe) * *(double *)(piVar8 + 0x14);
    pdVar14 = *(double **)(piVar8 + 0x10);
    uStack_328 = *(undefined8 *)piVar7;
    iVar4 = SUB84(pdVar14[3] * dVar29 + pdVar14[1] * dVar31 + 26388279066624.0,0);
    iVar18 = SUB84(pdVar14[2] * dVar29 + *pdVar14 * dVar31 + 26388279066624.0,0);
    uStack_318 = CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 4) >> 0x20) + iVar4,
                          (int)*(undefined8 *)(piVar7 + 4) + iVar18);
    uStack_320 = CONCAT44((int)((ulong)uStack_328 >> 0x20) + iVar4,(int)uStack_328 + iVar18);
    uStack_310 = *(undefined8 *)(piVar7 + 4);
    if (*(code **)(piVar8 + 0x20) == (code *)0x0) {
      piVar6 = *(int **)(piVar8 + 0x1e);
      piVar7 = (int *)&uStack_328;
      (**(code **)(piVar8 + 0x26))();
    }
    else {
      piVar6 = *(int **)(piVar8 + 0x1e);
      piVar7 = (int *)&uStack_328;
      (**(code **)(piVar8 + 0x20))(piVar6,piVar7,&uStack_320);
      if ((int)piVar6 == 0) {
        piVar6 = *(int **)(piVar8 + 0x1e);
        piVar7 = (int *)&uStack_320;
        (**(code **)(piVar8 + 0x20))(piVar6,piVar7,&uStack_318);
        if ((int)piVar6 == 0) {
          piVar6 = *(int **)(piVar8 + 0x1e);
          piVar7 = (int *)&uStack_318;
          (**(code **)(piVar8 + 0x20))(piVar6,piVar7,&uStack_310);
        }
      }
    }
LAB_1097e3784:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return piVar6;
    }
  }
  else {
    if (piVar8[2] == 1) {
      piVar5 = piVar7 + 6;
      uStack_328 = CONCAT44(-(int)((ulong)*(undefined8 *)piVar5 >> 0x20),-(int)*(undefined8 *)piVar5
                           );
      FUN_1097e3210(piVar8,piVar5,&uStack_328,piVar7 + 2,piVar7 + 4,piVar7,0);
      piVar6 = piVar8;
      piVar7 = piVar5;
      goto LAB_1097e3784;
    }
    if (*(code **)(piVar8 + 0x20) == (code *)0x0) {
      piVar6 = (int *)0x0;
      goto LAB_1097e3784;
    }
    piVar6 = *(int **)(piVar8 + 0x1e);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar8 + 0x20))(piVar6,piVar7,piVar7 + 4);
      return piVar6;
    }
  }
  ___stack_chk_fail();
  piVar6[0xf4] = piVar6[0x11f];
  iVar18 = piVar6[0xf0];
  iVar4 = *piVar7;
  iStack_448 = iVar4 - iVar18;
  if ((iStack_448 == 0) && (piVar6[0xf1] == piVar7[1])) {
    return (int *)0x0;
  }
  if (piVar6[0x128] == 0) {
LAB_1097e2048:
    bVar2 = false;
  }
  else {
    if ((piVar6[0x129] <= iVar18) && (iVar18 <= piVar6[299])) {
      if (((piVar6[0x12a] <= piVar6[0xf1]) &&
          (((iVar4 <= piVar6[299] && (piVar6[0x129] <= iVar4)) && (piVar6[0xf1] <= piVar6[300]))))
         && ((piVar6[0x12a] <= piVar7[1] && (piVar7[1] <= piVar6[300])))) goto LAB_1097e2048;
    }
    bVar2 = true;
  }
  iStack_444 = piVar7[1] - piVar6[0xf1];
  pdVar14 = *(double **)(piVar6 + 0x12);
  dVar31 = ((double)iStack_444 / 256.0) * pdVar14[2] + ((double)iStack_448 / 256.0) * *pdVar14;
  dVar29 = ((double)iStack_444 / 256.0) * pdVar14[3] + ((double)iStack_448 / 256.0) * pdVar14[1];
  if ((dVar31 == 0.0) && (dVar29 == 0.0)) {
    return (int *)0x0;
  }
  if (dVar31 == 0.0) {
    dVar28 = 1.0;
    dVar30 = 0.0;
    dVar31 = dVar29;
    if (dVar29 <= 0.0) {
      dVar28 = -1.0;
      dVar31 = -dVar29;
    }
  }
  else if (dVar29 == 0.0) {
    dVar28 = 0.0;
    dVar30 = 1.0;
    if (dVar31 <= 0.0) {
      dVar30 = -1.0;
      dVar31 = -dVar31;
    }
  }
  else {
    dVar23 = dVar31;
    _hypot(SUB84(dVar31,0),dVar29);
    dVar28 = dVar29 / dVar23;
    dVar30 = dVar31 / dVar23;
    dVar31 = dVar23;
  }
  uStack_458 = *(undefined8 *)(piVar6 + 0xf0);
  if (dVar31 != 0.0) {
    piVar8 = piVar6 + 0xf6;
    dVar29 = dVar31;
    do {
      dVar23 = *(double *)(piVar6 + 0x120);
      if (dVar29 <= *(double *)(piVar6 + 0x120)) {
        dVar23 = dVar29;
      }
      dVar29 = dVar29 - dVar23;
      dVar19 = dVar30 * (dVar31 - dVar29);
      dVar24 = dVar28 * (dVar31 - dVar29);
      pdVar14 = *(double **)(piVar6 + 0x10);
      uStack_450 = CONCAT44((int)((ulong)*(undefined8 *)(piVar6 + 0xf0) >> 0x20) +
                            SUB84(pdVar14[3] * dVar24 + pdVar14[1] * dVar19 + 26388279066624.0,0),
                            (int)*(undefined8 *)(piVar6 + 0xf0) +
                            SUB84(pdVar14[2] * dVar24 + *pdVar14 * dVar19 + 26388279066624.0,0));
      if (piVar6[0x11e] == 0) {
LAB_1097e2198:
        if (piVar6[0xf5] != 0) {
          piVar5 = piVar6;
          FUN_1097e362c(piVar6,piVar8);
          if ((int)piVar5 != 0) {
            return piVar5;
          }
          iVar18 = 0;
          goto LAB_1097e228c;
        }
      }
      else {
        if ((bVar2) && ((piVar6[0x108] != 0 || (piVar6[0x11f] == 0)))) {
          piVar5 = piVar6 + 0x129;
          func_0x0001097ed4b8(piVar5,&uStack_458);
          if ((int)piVar5 == 0) goto LAB_1097e2198;
        }
        piVar5 = piVar6;
        FUN_1097e2b54(SUB84(dVar30,0),dVar28,piVar6,&uStack_458,&uStack_450,&iStack_448,&uStack_3f8,
                      &uStack_440);
        if ((int)piVar5 != 0) {
          return piVar5;
        }
        if (piVar6[0xf5] == 0) {
          if ((piVar6[0x108] == 0) && (piVar6[0x11f] != 0)) {
            *(undefined8 *)(piVar6 + 0x114) = uStack_3d0;
            *(undefined8 *)(piVar6 + 0x112) = uStack_3d8;
            *(undefined8 *)(piVar6 + 0x118) = uStack_3c0;
            *(undefined8 *)(piVar6 + 0x116) = uStack_3c8;
            *(undefined8 *)(piVar6 + 0x11a) = uStack_3b8;
            *(undefined8 *)(piVar6 + 0x10c) = uStack_3f0;
            *(undefined8 *)(piVar6 + 0x10a) = uStack_3f8;
            *(undefined8 *)(piVar6 + 0x110) = uStack_3e0;
            *(undefined8 *)(piVar6 + 0x10e) = uStack_3e8;
            piVar6[0x108] = 1;
          }
          else {
            piVar5 = piVar6;
            FUN_1097e30e4(piVar6,&uStack_3f8);
            if ((int)piVar5 != 0) {
              return piVar5;
            }
          }
        }
        else {
          piVar5 = piVar6;
          FUN_1097e2cd8(piVar6,piVar8,&uStack_3f8);
          if ((int)piVar5 != 0) {
            return piVar5;
          }
          piVar6[0xf5] = 0;
        }
        if (dVar29 == 0.0) {
          *(undefined8 *)(piVar6 + 0x100) = uStack_418;
          *(undefined8 *)(piVar6 + 0xfe) = uStack_420;
          *(undefined8 *)(piVar6 + 0x104) = uStack_408;
          *(undefined8 *)(piVar6 + 0x102) = uStack_410;
          *(undefined8 *)(piVar6 + 0x106) = uStack_400;
          *(undefined8 *)(piVar6 + 0xf8) = uStack_438;
          *(undefined8 *)piVar8 = uStack_440;
          *(undefined8 *)(piVar6 + 0xfc) = uStack_428;
          *(undefined8 *)(piVar6 + 0xfa) = uStack_430;
          iVar18 = 1;
LAB_1097e228c:
          piVar6[0xf5] = iVar18;
        }
        else {
          piVar5 = piVar6;
          FUN_1097e362c(piVar6,&uStack_440);
          if ((int)piVar5 != 0) {
            return piVar5;
          }
        }
      }
      func_0x0001097f3de4(SUB84(dVar23,0),piVar6 + 0x11c);
      uStack_458 = uStack_450;
    } while (dVar29 != 0.0);
  }
  if ((piVar6[0x11e] != 0) && (piVar6[0xf5] == 0)) {
    FUN_1097e3144(SUB84(dVar30,0),dVar28,piVar7,&iStack_448,piVar6,piVar6 + 0xf6);
    piVar8 = piVar6;
    FUN_1097e30e4(piVar6,piVar6 + 0xf6);
    if ((int)piVar8 != 0) {
      return piVar8;
    }
    piVar6[0xf5] = 1;
  }
  *(undefined8 *)(piVar6 + 0xf0) = *(undefined8 *)piVar7;
  return (int *)0x0;
}



/* Entry: 1097e2cd8; end: 1097e30e3;  */

int * FUN_1097e2cd8(long param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  double *pdVar12;
  undefined8 uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  int iStack_3d8;
  int iStack_3d4;
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
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  int *piStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  int iStack_260;
  int iStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_3;
  piVar7 = param_2;
  FUN_1097e31d4();
  piVar5 = param_2 + 4;
  piVar14 = param_3 + 4;
  if ((((*piVar5 == *piVar14) && (param_2[5] == param_3[5])) && (*param_2 == *param_3)) &&
     (param_2[1] == param_3[1])) {
LAB_1097e30a8:
    piVar4 = (int *)0x0;
LAB_1097e30ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return piVar4;
    }
LAB_1097e30e0:
    ___stack_chk_fail();
    puStack_90 = &stack0xfffffffffffffff0;
    pcStack_88 = FUN_1097e30e4;
    uStack_c8 = *(undefined8 *)(piVar7 + 6);
    uStack_d8 = *(undefined8 *)(piVar7 + 2);
    uStack_e0 = *(undefined8 *)piVar7;
    uStack_d0 = *(undefined8 *)(piVar7 + 4);
    uStack_b8 = *(undefined8 *)(piVar7 + 10);
    uStack_c0 = *(undefined8 *)(piVar7 + 8);
    dStack_a8 = *(double *)(piVar7 + 0xe);
    dStack_b0 = *(double *)(piVar7 + 0xc);
    uStack_a0 = *(undefined8 *)(piVar7 + 0x10);
    dStack_b0 = -*(double *)(piVar7 + 0xc);
    dStack_a8 = -*(double *)(piVar7 + 0xe);
    uStack_c8 = CONCAT44(-(int)((ulong)uStack_c8 >> 0x20),-(int)uStack_c8);
    uStack_e0 = *(undefined8 *)(piVar7 + 4);
    uStack_d0 = *(undefined8 *)piVar7;
    FUN_1097e362c();
    return piVar4;
  }
  pcVar10 = *(code **)(param_1 + 0x80);
  iVar16 = (int)piVar4;
  if (iVar16 == 0) {
    piVar8 = piVar14;
    piVar15 = piVar5;
    if (pcVar10 == (code *)0x0) goto LAB_1097e2dec;
    piVar4 = *(int **)(param_1 + 0x78);
    piVar7 = param_2;
    (*pcVar10)(piVar4,param_2,param_2 + 2);
    if ((int)piVar4 == 0) {
      piVar4 = *(int **)(param_1 + 0x78);
      piVar7 = param_2 + 2;
      (**(code **)(param_1 + 0x80))(piVar4,piVar7,param_3);
      iVar3 = (int)piVar4;
joined_r0x0001097e2ddc:
      piVar8 = piVar14;
      piVar15 = piVar5;
      if (iVar3 == 0) goto LAB_1097e2dec;
    }
    goto LAB_1097e30ac;
  }
  piVar8 = param_3;
  piVar15 = param_2;
  if (pcVar10 != (code *)0x0) {
    piVar4 = *(int **)(param_1 + 0x78);
    (*pcVar10)(piVar4,piVar14,param_2 + 2);
    piVar7 = piVar14;
    if ((int)piVar4 == 0) {
      piVar4 = *(int **)(param_1 + 0x78);
      piVar7 = param_2 + 2;
      (**(code **)(param_1 + 0x80))(piVar4,piVar7,piVar5);
      iVar3 = (int)piVar4;
      piVar5 = param_2;
      piVar14 = param_3;
      goto joined_r0x0001097e2ddc;
    }
    goto LAB_1097e30ac;
  }
LAB_1097e2dec:
  if (*(int *)(param_1 + 0xc) == 2) goto LAB_1097e2f74;
  if (*(int *)(param_1 + 0xc) != 1) {
    dVar18 = *(double *)(param_2 + 0xc);
    dVar22 = *(double *)(param_2 + 0xe);
    dVar25 = *(double *)(param_3 + 0xc);
    dVar23 = *(double *)(param_3 + 0xe);
    if (*(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10) *
        (1.0 - (-(dVar22 * dVar23) - dVar25 * dVar18)) < 2.0) {
LAB_1097e2f74:
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        piVar4 = *(int **)(param_1 + 0x78);
        if (iVar16 == 0) {
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          piVar5 = piVar8;
          piVar8 = piVar15;
        }
        else {
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          piVar5 = piVar15;
        }
        if (lVar11 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x80))(piVar4,piVar5,piVar8);
          return piVar4;
        }
        goto LAB_1097e30e0;
      }
      uStack_78 = *(undefined8 *)(param_2 + 2);
      uStack_70 = *(undefined8 *)piVar15;
      uStack_68 = *(undefined8 *)piVar8;
      pcVar10 = *(code **)(param_1 + 0x88);
    }
    else {
      dVar20 = (double)*piVar15 / 256.0;
      dVar21 = (double)piVar15[1] / 256.0;
      pdVar12 = *(double **)(param_1 + 0x40);
      dVar26 = dVar22 * pdVar12[2] + dVar18 * *pdVar12;
      dVar19 = dVar22 * pdVar12[3] + dVar18 * pdVar12[1];
      dVar17 = (double)*piVar8 / 256.0;
      dVar27 = (double)piVar8[1] / 256.0;
      dVar18 = dVar23 * pdVar12[2] + dVar25 * *pdVar12;
      dVar23 = dVar23 * pdVar12[3] + dVar25 * pdVar12[1];
      dVar25 = (dVar19 * -(dVar27 * dVar18) + dVar23 * dVar19 * (dVar17 - dVar20) +
               dVar23 * dVar21 * dVar26) / (-(dVar18 * dVar19) + dVar23 * dVar26);
      dVar24 = dVar17;
      dVar22 = dVar27;
      if (ABS(dVar23) <= ABS(dVar19)) {
        dVar24 = dVar20;
        dVar23 = dVar19;
        dVar18 = dVar26;
        dVar22 = dVar21;
      }
      dVar24 = dVar24 + (dVar18 * (dVar25 - dVar22)) / dVar23;
      dVar23 = (double)param_2[2] / 256.0;
      dVar22 = (double)param_2[3] / 256.0;
      dVar18 = -((dVar24 - dVar23) * (dVar21 - dVar22)) + (dVar25 - dVar22) * (dVar20 - dVar23);
      dVar23 = -((dVar24 - dVar23) * (dVar27 - dVar22)) + (dVar25 - dVar22) * (dVar17 - dVar23);
      bVar2 = dVar23 < 0.0;
      bVar1 = dVar23 != 0.0 && !bVar2;
      if (dVar18 <= 0.0) {
        bVar1 = (dVar23 == 0.0 || bVar2) && bVar2 != 0.0 <= dVar18;
      }
      if (bVar1) goto LAB_1097e2f74;
      pcVar10 = *(code **)(param_1 + 0x80);
      if (pcVar10 != (code *)0x0) {
        uStack_78 = CONCAT44(SUB84(dVar25 + 26388279066624.0,0),SUB84(dVar24 + 26388279066624.0,0));
        piVar4 = *(int **)(param_1 + 0x78);
        if (iVar16 == 0) {
          (*pcVar10)(piVar4,piVar8,&uStack_78);
          piVar7 = piVar8;
          if ((int)piVar4 == 0) {
            piVar4 = *(int **)(param_1 + 0x78);
            pcVar10 = *(code **)(param_1 + 0x80);
            goto LAB_1097e30a0;
          }
        }
        else {
          (*pcVar10)();
          piVar7 = piVar15;
          if ((int)piVar4 == 0) {
            piVar4 = *(int **)(param_1 + 0x78);
            pcVar10 = *(code **)(param_1 + 0x80);
            piVar15 = piVar8;
LAB_1097e30a0:
            piVar7 = (int *)&uStack_78;
            (*pcVar10)(piVar4,piVar7,piVar15);
            if ((int)piVar4 == 0) goto LAB_1097e30a8;
          }
        }
        goto LAB_1097e30ac;
      }
      uStack_78 = *(undefined8 *)(param_2 + 2);
      uStack_70 = *(undefined8 *)piVar15;
      uStack_68 = CONCAT44(SUB84(dVar25 + 26388279066624.0,0),SUB84(dVar24 + 26388279066624.0,0));
      uStack_60 = *(undefined8 *)piVar8;
      pcVar10 = *(code **)(param_1 + 0x98);
    }
    piVar4 = *(int **)(param_1 + 0x78);
    piVar7 = (int *)&uStack_78;
    (*pcVar10)(piVar4);
    goto LAB_1097e30ac;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_1097e30e0;
  piVar4 = param_2 + 6;
  piVar7 = param_2 + 2;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(int *)(param_1 + 0x4a0) == 0) ||
     (((*(int *)(param_1 + 0x4a4) <= *piVar7 && (*piVar7 <= *(int *)(param_1 + 0x4ac))) &&
      ((*(int *)(param_1 + 0x4a8) <= param_2[3] && (param_2[3] <= *(int *)(param_1 + 0x4b0))))))) {
    if (iVar16 == 0) {
      func_0x0001097e6760(param_1 + 0xa0,piVar4,param_3 + 6,&iStack_25c,&iStack_260);
      pcVar10 = *(code **)(param_1 + 0x80);
      if (pcVar10 != (code *)0x0) {
        uStack_258 = *(undefined8 *)piVar15;
        iVar16 = iStack_25c;
        if (iStack_25c != iStack_260) {
          do {
            piVar4 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar16 * 0x18);
            uStack_268 = CONCAT44(piVar4[1] + (int)((ulong)*(undefined8 *)piVar7 >> 0x20),
                                  *piVar4 + (int)*(undefined8 *)piVar7);
            piVar5 = *(int **)(param_1 + 0x78);
            piVar4 = (int *)&uStack_268;
            (**(code **)(param_1 + 0x80))(piVar5,piVar4,&uStack_258);
            piVar14 = piVar5;
            if ((int)piVar5 != 0) goto LAB_1097e34b0;
            uStack_258 = uStack_268;
            iVar3 = 0;
            if (iVar16 + 1 != *(int *)(param_1 + 0xb0)) {
              iVar3 = iVar16 + 1;
            }
            iVar16 = iVar3;
          } while (iVar3 != iStack_260);
          pcVar10 = *(code **)(param_1 + 0x80);
        }
        piVar5 = *(int **)(param_1 + 0x78);
        piVar7 = (int *)&uStack_258;
        piVar4 = piVar8;
        goto LAB_1097e3400;
      }
      iVar16 = iStack_260 - iStack_25c;
      if (iVar16 == 0) goto LAB_1097e3488;
      if (iVar16 < 0) {
        iVar16 = *(int *)(param_1 + 0xb0) + iVar16;
      }
      if (iVar16 < 0x3f) {
        piVar5 = (int *)&uStack_258;
      }
      else {
        piVar5 = (int *)((ulong)(iVar16 + 2) << 3);
        _malloc();
        if (piVar5 == (int *)0x0) goto LAB_1097e3510;
      }
      *(undefined8 *)piVar5 = *(undefined8 *)piVar15;
      uVar13 = *(undefined8 *)piVar7;
      lVar11 = *(long *)(param_1 + 0xb8);
      iVar16 = *(int *)(param_1 + 0xb0);
      uVar9 = 1;
      piVar4 = piVar5;
      do {
        piVar14 = piVar4 + 2;
        *(undefined8 *)piVar14 = uVar13;
        piVar15 = (int *)(lVar11 + (long)iStack_25c * 0x18);
        *piVar14 = *piVar15 + (int)uVar13;
        piVar4[3] = piVar15[1] + (int)((ulong)uVar13 >> 0x20);
        uVar9 = uVar9 + 1;
        iVar3 = 0;
        if (iStack_25c + 1 != iVar16) {
          iVar3 = iStack_25c + 1;
        }
        piVar6 = piVar5;
        piVar4 = piVar14;
        iStack_25c = iVar3;
      } while (iVar3 != iStack_260);
    }
    else {
      func_0x0001097e689c();
      pcVar10 = *(code **)(param_1 + 0x80);
      if (pcVar10 != (code *)0x0) {
        uStack_258 = *(undefined8 *)piVar15;
        iVar16 = iStack_25c;
        if (iStack_25c != iStack_260) {
          do {
            piVar4 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar16 * 0x18);
            uStack_268 = CONCAT44(piVar4[1] + (int)((ulong)*(undefined8 *)piVar7 >> 0x20),
                                  *piVar4 + (int)*(undefined8 *)piVar7);
            piVar5 = *(int **)(param_1 + 0x78);
            piVar4 = (int *)&uStack_258;
            (**(code **)(param_1 + 0x80))(piVar5,piVar4,&uStack_268);
            piVar14 = piVar5;
            if ((int)piVar5 != 0) goto LAB_1097e34b0;
            uStack_258 = uStack_268;
            if (iVar16 == 0) {
              iVar16 = *(int *)(param_1 + 0xb0);
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != iStack_260);
          pcVar10 = *(code **)(param_1 + 0x80);
        }
        piVar5 = *(int **)(param_1 + 0x78);
        piVar4 = (int *)&uStack_258;
        piVar7 = piVar8;
LAB_1097e3400:
        (*pcVar10)(piVar5,piVar4,piVar7);
        piVar14 = piVar5;
        goto LAB_1097e34b0;
      }
      iVar16 = iStack_260 - iStack_25c;
      if (iVar16 == 0) goto LAB_1097e3488;
      if (iVar16 < 0) {
        iVar16 = *(int *)(param_1 + 0xb0) + iVar16;
      }
      if (iVar16 < 0x3f) {
        piVar6 = (int *)&uStack_258;
      }
      else {
        piVar5 = (int *)((ulong)(iVar16 + 2) << 3);
        _malloc();
        piVar6 = piVar5;
        if (piVar5 == (int *)0x0) {
LAB_1097e3510:
          piVar14 = (int *)0x1;
          goto LAB_1097e34b0;
        }
      }
      *(undefined8 *)piVar6 = *(undefined8 *)piVar15;
      uVar13 = *(undefined8 *)piVar7;
      lVar11 = *(long *)(param_1 + 0xb8);
      uVar9 = 1;
      piVar4 = piVar6;
      do {
        piVar5 = piVar4 + 2;
        *(undefined8 *)piVar5 = uVar13;
        piVar14 = (int *)(lVar11 + (long)iStack_25c * 0x18);
        *piVar5 = *piVar14 + (int)uVar13;
        piVar4[3] = piVar14[1] + (int)((ulong)uVar13 >> 0x20);
        if (iStack_25c == 0) {
          iStack_25c = *(int *)(param_1 + 0xb0);
        }
        iStack_25c = iStack_25c + -1;
        uVar9 = uVar9 + 1;
        piVar4 = piVar5;
      } while (iStack_25c != iStack_260);
    }
    *(undefined8 *)(piVar6 + (ulong)uVar9 * 2) = *(undefined8 *)piVar8;
    piVar14 = *(int **)(param_1 + 0x78);
    (**(code **)(param_1 + 0x90))(piVar14,piVar7,piVar6,uVar9 + 1);
    piVar5 = piVar14;
    piVar4 = piVar7;
    if (piVar6 != (int *)&uStack_258) {
      _free();
      piVar5 = piVar6;
      piVar4 = piVar7;
    }
LAB_1097e34b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return piVar14;
    }
  }
  else {
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
LAB_1097e3488:
      uStack_258 = *(undefined8 *)piVar7;
      uStack_250 = *(undefined8 *)piVar15;
      uStack_248 = *(undefined8 *)piVar8;
      piVar5 = *(int **)(param_1 + 0x78);
      piVar4 = (int *)&uStack_258;
      (**(code **)(param_1 + 0x88))();
      piVar14 = piVar5;
      goto LAB_1097e34b0;
    }
    piVar5 = *(int **)(param_1 + 0x78);
    if (iVar16 == 0) {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar7 = piVar8;
    }
    else {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar7 = piVar15;
      piVar15 = piVar8;
    }
    if (lVar11 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x80))(piVar5,piVar7,piVar15);
      return piVar5;
    }
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_1097e362c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_290 = param_1;
  piStack_288 = piVar8;
  puStack_280 = &stack0xfffffffffffffff0;
  if (piVar5[2] == 2) {
    dVar25 = *(double *)(piVar4 + 0xc) * *(double *)(piVar5 + 0x14);
    dVar23 = *(double *)(piVar4 + 0xe) * *(double *)(piVar5 + 0x14);
    pdVar12 = *(double **)(piVar5 + 0x10);
    uStack_2b8 = *(undefined8 *)piVar4;
    iVar3 = SUB84(pdVar12[3] * dVar23 + pdVar12[1] * dVar25 + 26388279066624.0,0);
    iVar16 = SUB84(pdVar12[2] * dVar23 + *pdVar12 * dVar25 + 26388279066624.0,0);
    uStack_2a8 = CONCAT44((int)((ulong)*(undefined8 *)(piVar4 + 4) >> 0x20) + iVar3,
                          (int)*(undefined8 *)(piVar4 + 4) + iVar16);
    uStack_2b0 = CONCAT44((int)((ulong)uStack_2b8 >> 0x20) + iVar3,(int)uStack_2b8 + iVar16);
    uStack_2a0 = *(undefined8 *)(piVar4 + 4);
    if (*(code **)(piVar5 + 0x20) == (code *)0x0) {
      piVar7 = *(int **)(piVar5 + 0x1e);
      piVar4 = (int *)&uStack_2b8;
      (**(code **)(piVar5 + 0x26))();
    }
    else {
      piVar7 = *(int **)(piVar5 + 0x1e);
      piVar4 = (int *)&uStack_2b8;
      (**(code **)(piVar5 + 0x20))(piVar7,piVar4,&uStack_2b0);
      if ((int)piVar7 == 0) {
        piVar7 = *(int **)(piVar5 + 0x1e);
        piVar4 = (int *)&uStack_2b0;
        (**(code **)(piVar5 + 0x20))(piVar7,piVar4,&uStack_2a8);
        if ((int)piVar7 == 0) {
          piVar7 = *(int **)(piVar5 + 0x1e);
          piVar4 = (int *)&uStack_2a8;
          (**(code **)(piVar5 + 0x20))(piVar7,piVar4,&uStack_2a0);
        }
      }
    }
LAB_1097e3784:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return piVar7;
    }
  }
  else {
    if (piVar5[2] == 1) {
      piVar14 = piVar4 + 6;
      uStack_2b8 = CONCAT44(-(int)((ulong)*(undefined8 *)piVar14 >> 0x20),
                            -(int)*(undefined8 *)piVar14);
      FUN_1097e3210(piVar5,piVar14,&uStack_2b8,piVar4 + 2,piVar4 + 4,piVar4,0);
      piVar7 = piVar5;
      piVar4 = piVar14;
      goto LAB_1097e3784;
    }
    if (*(code **)(piVar5 + 0x20) == (code *)0x0) {
      piVar7 = (int *)0x0;
      goto LAB_1097e3784;
    }
    piVar7 = *(int **)(piVar5 + 0x1e);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar5 + 0x20))(piVar7,piVar4,piVar4 + 4);
      return piVar7;
    }
  }
  ___stack_chk_fail();
  piVar7[0xf4] = piVar7[0x11f];
  iVar16 = piVar7[0xf0];
  iVar3 = *piVar4;
  iStack_3d8 = iVar3 - iVar16;
  if ((iStack_3d8 == 0) && (piVar7[0xf1] == piVar4[1])) {
    return (int *)0x0;
  }
  if (piVar7[0x128] == 0) {
LAB_1097e2048:
    bVar1 = false;
  }
  else {
    if ((piVar7[0x129] <= iVar16) && (iVar16 <= piVar7[299])) {
      if (((piVar7[0x12a] <= piVar7[0xf1]) &&
          (((iVar3 <= piVar7[299] && (piVar7[0x129] <= iVar3)) && (piVar7[0xf1] <= piVar7[300]))))
         && ((piVar7[0x12a] <= piVar4[1] && (piVar4[1] <= piVar7[300])))) goto LAB_1097e2048;
    }
    bVar1 = true;
  }
  iStack_3d4 = piVar4[1] - piVar7[0xf1];
  pdVar12 = *(double **)(piVar7 + 0x12);
  dVar25 = ((double)iStack_3d4 / 256.0) * pdVar12[2] + ((double)iStack_3d8 / 256.0) * *pdVar12;
  dVar23 = ((double)iStack_3d4 / 256.0) * pdVar12[3] + ((double)iStack_3d8 / 256.0) * pdVar12[1];
  if ((dVar25 == 0.0) && (dVar23 == 0.0)) {
    return (int *)0x0;
  }
  if (dVar25 == 0.0) {
    dVar22 = 1.0;
    dVar24 = 0.0;
    dVar25 = dVar23;
    if (dVar23 <= 0.0) {
      dVar22 = -1.0;
      dVar25 = -dVar23;
    }
  }
  else if (dVar23 == 0.0) {
    dVar22 = 0.0;
    dVar24 = 1.0;
    if (dVar25 <= 0.0) {
      dVar24 = -1.0;
      dVar25 = -dVar25;
    }
  }
  else {
    dVar18 = dVar25;
    _hypot(SUB84(dVar25,0),dVar23);
    dVar22 = dVar23 / dVar18;
    dVar24 = dVar25 / dVar18;
    dVar25 = dVar18;
  }
  uStack_3e8 = *(undefined8 *)(piVar7 + 0xf0);
  if (dVar25 != 0.0) {
    piVar5 = piVar7 + 0xf6;
    dVar23 = dVar25;
    do {
      dVar18 = *(double *)(piVar7 + 0x120);
      if (dVar23 <= *(double *)(piVar7 + 0x120)) {
        dVar18 = dVar23;
      }
      dVar23 = dVar23 - dVar18;
      dVar17 = dVar24 * (dVar25 - dVar23);
      dVar19 = dVar22 * (dVar25 - dVar23);
      pdVar12 = *(double **)(piVar7 + 0x10);
      uStack_3e0 = CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 0xf0) >> 0x20) +
                            SUB84(pdVar12[3] * dVar19 + pdVar12[1] * dVar17 + 26388279066624.0,0),
                            (int)*(undefined8 *)(piVar7 + 0xf0) +
                            SUB84(pdVar12[2] * dVar19 + *pdVar12 * dVar17 + 26388279066624.0,0));
      if (piVar7[0x11e] == 0) {
LAB_1097e2198:
        if (piVar7[0xf5] != 0) {
          piVar14 = piVar7;
          FUN_1097e362c(piVar7,piVar5);
          if ((int)piVar14 != 0) {
            return piVar14;
          }
          iVar16 = 0;
          goto LAB_1097e228c;
        }
      }
      else {
        if ((bVar1) && ((piVar7[0x108] != 0 || (piVar7[0x11f] == 0)))) {
          piVar14 = piVar7 + 0x129;
          func_0x0001097ed4b8(piVar14,&uStack_3e8);
          if ((int)piVar14 == 0) goto LAB_1097e2198;
        }
        piVar14 = piVar7;
        FUN_1097e2b54(SUB84(dVar24,0),dVar22,piVar7,&uStack_3e8,&uStack_3e0,&iStack_3d8,&uStack_388,
                      &uStack_3d0);
        if ((int)piVar14 != 0) {
          return piVar14;
        }
        if (piVar7[0xf5] == 0) {
          if ((piVar7[0x108] == 0) && (piVar7[0x11f] != 0)) {
            *(undefined8 *)(piVar7 + 0x114) = uStack_360;
            *(undefined8 *)(piVar7 + 0x112) = uStack_368;
            *(undefined8 *)(piVar7 + 0x118) = uStack_350;
            *(undefined8 *)(piVar7 + 0x116) = uStack_358;
            *(undefined8 *)(piVar7 + 0x11a) = uStack_348;
            *(undefined8 *)(piVar7 + 0x10c) = uStack_380;
            *(undefined8 *)(piVar7 + 0x10a) = uStack_388;
            *(undefined8 *)(piVar7 + 0x110) = uStack_370;
            *(undefined8 *)(piVar7 + 0x10e) = uStack_378;
            piVar7[0x108] = 1;
          }
          else {
            piVar14 = piVar7;
            FUN_1097e30e4(piVar7,&uStack_388);
            if ((int)piVar14 != 0) {
              return piVar14;
            }
          }
        }
        else {
          piVar14 = piVar7;
          FUN_1097e2cd8(piVar7,piVar5,&uStack_388);
          if ((int)piVar14 != 0) {
            return piVar14;
          }
          piVar7[0xf5] = 0;
        }
        if (dVar23 == 0.0) {
          *(undefined8 *)(piVar7 + 0x100) = uStack_3a8;
          *(undefined8 *)(piVar7 + 0xfe) = uStack_3b0;
          *(undefined8 *)(piVar7 + 0x104) = uStack_398;
          *(undefined8 *)(piVar7 + 0x102) = uStack_3a0;
          *(undefined8 *)(piVar7 + 0x106) = uStack_390;
          *(undefined8 *)(piVar7 + 0xf8) = uStack_3c8;
          *(undefined8 *)piVar5 = uStack_3d0;
          *(undefined8 *)(piVar7 + 0xfc) = uStack_3b8;
          *(undefined8 *)(piVar7 + 0xfa) = uStack_3c0;
          iVar16 = 1;
LAB_1097e228c:
          piVar7[0xf5] = iVar16;
        }
        else {
          piVar14 = piVar7;
          FUN_1097e362c(piVar7,&uStack_3d0);
          if ((int)piVar14 != 0) {
            return piVar14;
          }
        }
      }
      func_0x0001097f3de4(SUB84(dVar18,0),piVar7 + 0x11c);
      uStack_3e8 = uStack_3e0;
    } while (dVar23 != 0.0);
  }
  if ((piVar7[0x11e] != 0) && (piVar7[0xf5] == 0)) {
    FUN_1097e3144(SUB84(dVar24,0),dVar22,piVar4,&iStack_3d8,piVar7,piVar7 + 0xf6);
    piVar5 = piVar7;
    FUN_1097e30e4(piVar7,piVar7 + 0xf6);
    if ((int)piVar5 != 0) {
      return piVar5;
    }
    piVar7[0xf5] = 1;
  }
  *(undefined8 *)(piVar7 + 0xf0) = *(undefined8 *)piVar4;
  return (int *)0x0;
}



/* Entry: 1097e30e4; end: 1097e3143;  */

void FUN_1097e30e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  undefined8 uStack_20;
  
  uStack_58 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_20 = param_2[8];
  dStack_30 = -(double)param_2[6];
  dStack_28 = -(double)param_2[7];
  uStack_48 = CONCAT44(-(int)((ulong)param_2[3] >> 0x20),-(int)param_2[3]);
  FUN_1097e362c(param_1,&uStack_60);
  return;
}



/* Entry: 1097e3144; end: 1097e31d3;  */

void FUN_1097e3144(double param_1,double param_2,int *param_3,undefined8 *param_4,long param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_5 + 0x70) == 0) {
    dVar5 = param_2 * *(double *)(param_5 + 0x50);
    dVar6 = -(param_1 * *(double *)(param_5 + 0x50));
  }
  else {
    dVar5 = -(param_2 * *(double *)(param_5 + 0x50));
    dVar6 = param_1 * *(double *)(param_5 + 0x50);
  }
  pdVar3 = *(double **)(param_5 + 0x40);
  iVar1 = param_3[1];
  iVar2 = SUB84(dVar6 * pdVar3[2] + dVar5 * *pdVar3 + 26388279066624.0,0);
  iVar4 = SUB84(dVar6 * pdVar3[3] + dVar5 * pdVar3[1] + 26388279066624.0,0);
  *param_6 = iVar2 + *param_3;
  param_6[1] = iVar4 + iVar1;
  *(undefined8 *)(param_6 + 2) = *(undefined8 *)param_3;
  iVar1 = param_3[1];
  param_6[4] = *param_3 - iVar2;
  param_6[5] = iVar1 - iVar4;
  *(double *)(param_6 + 0xc) = param_1;
  *(double *)(param_6 + 0xe) = param_2;
  *(undefined8 *)(param_6 + 6) = *param_4;
  return;
}



/* Entry: 1097e31d4; end: 1097e320f;  */

ulong FUN_1097e31d4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) -
                       (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                       (int)*(undefined8 *)(param_2 + 0x10) - (int)*(undefined8 *)(param_2 + 8));
  uStack_18 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) -
                       (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                       (int)*(undefined8 *)(param_1 + 0x10) - (int)*(undefined8 *)(param_1 + 8));
  puVar1 = &uStack_18;
  FUN_1097f1294(puVar1,&uStack_20);
  return (ulong)puVar1 >> 0x1f & 1;
}



/* Entry: 1097e3210; end: 1097e362b;  */

int * FUN_1097e3210(long param_1,int *param_2,undefined8 param_3,int *param_4,int *param_5,
                   int *param_6,int param_7)

{
  double dVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  double *pdVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  int iStack_3d8;
  int iStack_3d4;
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
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  int *piStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  int iStack_260;
  int iStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(int *)(param_1 + 0x4a0) == 0) ||
     ((((*(int *)(param_1 + 0x4a4) <= *param_4 && (*param_4 <= *(int *)(param_1 + 0x4ac))) &&
       (*(int *)(param_1 + 0x4a8) <= param_4[1])) && (param_4[1] <= *(int *)(param_1 + 0x4b0))))) {
    if (param_7 == 0) {
      func_0x0001097e6760(param_1 + 0xa0,param_2,param_3,&iStack_25c,&iStack_260);
      pcVar6 = *(code **)(param_1 + 0x80);
      if (pcVar6 != (code *)0x0) {
        uStack_258 = *(undefined8 *)param_5;
        iVar12 = iStack_25c;
        if (iStack_25c != iStack_260) {
          do {
            piVar3 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar12 * 0x18);
            uStack_268 = CONCAT44(piVar3[1] + (int)((ulong)*(undefined8 *)param_4 >> 0x20),
                                  *piVar3 + (int)*(undefined8 *)param_4);
            piVar3 = *(int **)(param_1 + 0x78);
            param_2 = (int *)&uStack_268;
            (**(code **)(param_1 + 0x80))(piVar3,param_2,&uStack_258);
            piVar4 = piVar3;
            if ((int)piVar3 != 0) goto LAB_1097e34b0;
            uStack_258 = uStack_268;
            iVar13 = 0;
            if (iVar12 + 1 != *(int *)(param_1 + 0xb0)) {
              iVar13 = iVar12 + 1;
            }
            iVar12 = iVar13;
          } while (iVar13 != iStack_260);
          pcVar6 = *(code **)(param_1 + 0x80);
        }
        piVar3 = *(int **)(param_1 + 0x78);
        piVar4 = (int *)&uStack_258;
        param_2 = param_6;
        goto LAB_1097e3400;
      }
      iVar12 = iStack_260 - iStack_25c;
      if (iVar12 == 0) goto LAB_1097e3488;
      if (iVar12 < 0) {
        iVar12 = *(int *)(param_1 + 0xb0) + iVar12;
      }
      if (iVar12 < 0x3f) {
        piVar3 = (int *)&uStack_258;
      }
      else {
        piVar3 = (int *)((ulong)(iVar12 + 2) << 3);
        _malloc();
        if (piVar3 == (int *)0x0) goto LAB_1097e3510;
      }
      *(undefined8 *)piVar3 = *(undefined8 *)param_5;
      uVar9 = *(undefined8 *)param_4;
      lVar7 = *(long *)(param_1 + 0xb8);
      iVar12 = *(int *)(param_1 + 0xb0);
      uVar5 = 1;
      piVar4 = piVar3;
      do {
        piVar10 = piVar4 + 2;
        *(undefined8 *)piVar10 = uVar9;
        piVar11 = (int *)(lVar7 + (long)iStack_25c * 0x18);
        *piVar10 = *piVar11 + (int)uVar9;
        piVar4[3] = piVar11[1] + (int)((ulong)uVar9 >> 0x20);
        uVar5 = uVar5 + 1;
        iVar13 = 0;
        if (iStack_25c + 1 != iVar12) {
          iVar13 = iStack_25c + 1;
        }
        piVar11 = piVar3;
        piVar4 = piVar10;
        iStack_25c = iVar13;
      } while (iVar13 != iStack_260);
    }
    else {
      func_0x0001097e689c();
      pcVar6 = *(code **)(param_1 + 0x80);
      if (pcVar6 != (code *)0x0) {
        uStack_258 = *(undefined8 *)param_5;
        iVar12 = iStack_25c;
        if (iStack_25c != iStack_260) {
          do {
            piVar3 = (int *)(*(long *)(param_1 + 0xb8) + (long)iVar12 * 0x18);
            uStack_268 = CONCAT44(piVar3[1] + (int)((ulong)*(undefined8 *)param_4 >> 0x20),
                                  *piVar3 + (int)*(undefined8 *)param_4);
            piVar3 = *(int **)(param_1 + 0x78);
            param_2 = (int *)&uStack_258;
            (**(code **)(param_1 + 0x80))(piVar3,param_2,&uStack_268);
            piVar4 = piVar3;
            if ((int)piVar3 != 0) goto LAB_1097e34b0;
            uStack_258 = uStack_268;
            if (iVar12 == 0) {
              iVar12 = *(int *)(param_1 + 0xb0);
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != iStack_260);
          pcVar6 = *(code **)(param_1 + 0x80);
        }
        piVar3 = *(int **)(param_1 + 0x78);
        param_2 = (int *)&uStack_258;
        piVar4 = param_6;
LAB_1097e3400:
        (*pcVar6)(piVar3,param_2,piVar4);
        piVar4 = piVar3;
        goto LAB_1097e34b0;
      }
      iVar12 = iStack_260 - iStack_25c;
      if (iVar12 == 0) goto LAB_1097e3488;
      if (iVar12 < 0) {
        iVar12 = *(int *)(param_1 + 0xb0) + iVar12;
      }
      if (iVar12 < 0x3f) {
        piVar11 = (int *)&uStack_258;
      }
      else {
        piVar3 = (int *)((ulong)(iVar12 + 2) << 3);
        _malloc();
        piVar11 = piVar3;
        if (piVar3 == (int *)0x0) {
LAB_1097e3510:
          piVar4 = (int *)0x1;
          goto LAB_1097e34b0;
        }
      }
      *(undefined8 *)piVar11 = *(undefined8 *)param_5;
      uVar9 = *(undefined8 *)param_4;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar5 = 1;
      piVar3 = piVar11;
      do {
        piVar4 = piVar3 + 2;
        *(undefined8 *)piVar4 = uVar9;
        piVar10 = (int *)(lVar7 + (long)iStack_25c * 0x18);
        *piVar4 = *piVar10 + (int)uVar9;
        piVar3[3] = piVar10[1] + (int)((ulong)uVar9 >> 0x20);
        if (iStack_25c == 0) {
          iStack_25c = *(int *)(param_1 + 0xb0);
        }
        iStack_25c = iStack_25c + -1;
        uVar5 = uVar5 + 1;
        piVar3 = piVar4;
      } while (iStack_25c != iStack_260);
    }
    *(undefined8 *)(piVar11 + (ulong)uVar5 * 2) = *(undefined8 *)param_6;
    piVar4 = *(int **)(param_1 + 0x78);
    (**(code **)(param_1 + 0x90))(piVar4,param_4,piVar11,uVar5 + 1);
    piVar3 = piVar4;
    param_2 = param_4;
    if (piVar11 != (int *)&uStack_258) {
      _free();
      piVar3 = piVar11;
      param_2 = param_4;
    }
LAB_1097e34b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return piVar4;
    }
  }
  else {
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
LAB_1097e3488:
      uStack_258 = *(undefined8 *)param_4;
      uStack_250 = *(undefined8 *)param_5;
      uStack_248 = *(undefined8 *)param_6;
      piVar3 = *(int **)(param_1 + 0x78);
      param_2 = (int *)&uStack_258;
      (**(code **)(param_1 + 0x88))();
      piVar4 = piVar3;
      goto LAB_1097e34b0;
    }
    piVar3 = *(int **)(param_1 + 0x78);
    if (param_7 == 0) {
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar4 = param_6;
    }
    else {
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      piVar4 = param_5;
      param_5 = param_6;
    }
    if (lVar7 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x80))(piVar3,piVar4,param_5);
      return piVar3;
    }
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_1097e362c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_290 = param_1;
  piStack_288 = param_6;
  puStack_280 = &stack0xfffffffffffffff0;
  if (piVar3[2] == 2) {
    dVar18 = *(double *)(param_2 + 0xc) * *(double *)(piVar3 + 0x14);
    dVar16 = *(double *)(param_2 + 0xe) * *(double *)(piVar3 + 0x14);
    pdVar8 = *(double **)(piVar3 + 0x10);
    uStack_2b8 = *(undefined8 *)param_2;
    iVar13 = SUB84(pdVar8[3] * dVar16 + pdVar8[1] * dVar18 + 26388279066624.0,0);
    iVar12 = SUB84(pdVar8[2] * dVar16 + *pdVar8 * dVar18 + 26388279066624.0,0);
    uStack_2a8 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) + iVar13,
                          (int)*(undefined8 *)(param_2 + 4) + iVar12);
    uStack_2b0 = CONCAT44((int)((ulong)uStack_2b8 >> 0x20) + iVar13,(int)uStack_2b8 + iVar12);
    uStack_2a0 = *(undefined8 *)(param_2 + 4);
    if (*(code **)(piVar3 + 0x20) == (code *)0x0) {
      piVar4 = *(int **)(piVar3 + 0x1e);
      param_2 = (int *)&uStack_2b8;
      (**(code **)(piVar3 + 0x26))();
    }
    else {
      piVar4 = *(int **)(piVar3 + 0x1e);
      param_2 = (int *)&uStack_2b8;
      (**(code **)(piVar3 + 0x20))(piVar4,param_2,&uStack_2b0);
      if ((int)piVar4 == 0) {
        piVar4 = *(int **)(piVar3 + 0x1e);
        param_2 = (int *)&uStack_2b0;
        (**(code **)(piVar3 + 0x20))(piVar4,param_2,&uStack_2a8);
        if ((int)piVar4 == 0) {
          piVar4 = *(int **)(piVar3 + 0x1e);
          param_2 = (int *)&uStack_2a8;
          (**(code **)(piVar3 + 0x20))(piVar4,param_2,&uStack_2a0);
        }
      }
    }
LAB_1097e3784:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return piVar4;
    }
  }
  else {
    if (piVar3[2] == 1) {
      piVar10 = param_2 + 6;
      uStack_2b8 = CONCAT44(-(int)((ulong)*(undefined8 *)piVar10 >> 0x20),
                            -(int)*(undefined8 *)piVar10);
      FUN_1097e3210(piVar3,piVar10,&uStack_2b8,param_2 + 2,param_2 + 4,param_2,0);
      piVar4 = piVar3;
      param_2 = piVar10;
      goto LAB_1097e3784;
    }
    if (*(code **)(piVar3 + 0x20) == (code *)0x0) {
      piVar4 = (int *)0x0;
      goto LAB_1097e3784;
    }
    piVar4 = *(int **)(piVar3 + 0x1e);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar3 + 0x20))(piVar4,param_2,param_2 + 4);
      return piVar4;
    }
  }
  ___stack_chk_fail();
  piVar4[0xf4] = piVar4[0x11f];
  iVar12 = piVar4[0xf0];
  iVar13 = *param_2;
  iStack_3d8 = iVar13 - iVar12;
  if ((iStack_3d8 == 0) && (piVar4[0xf1] == param_2[1])) {
    return (int *)0x0;
  }
  if (piVar4[0x128] == 0) {
LAB_1097e2048:
    bVar2 = false;
  }
  else {
    if ((piVar4[0x129] <= iVar12) && (iVar12 <= piVar4[299])) {
      if (((piVar4[0x12a] <= piVar4[0xf1]) &&
          (((iVar13 <= piVar4[299] && (piVar4[0x129] <= iVar13)) && (piVar4[0xf1] <= piVar4[300]))))
         && ((piVar4[0x12a] <= param_2[1] && (param_2[1] <= piVar4[300])))) goto LAB_1097e2048;
    }
    bVar2 = true;
  }
  iStack_3d4 = param_2[1] - piVar4[0xf1];
  pdVar8 = *(double **)(piVar4 + 0x12);
  dVar18 = ((double)iStack_3d4 / 256.0) * pdVar8[2] + ((double)iStack_3d8 / 256.0) * *pdVar8;
  dVar16 = ((double)iStack_3d4 / 256.0) * pdVar8[3] + ((double)iStack_3d8 / 256.0) * pdVar8[1];
  if ((dVar18 == 0.0) && (dVar16 == 0.0)) {
    return (int *)0x0;
  }
  if (dVar18 == 0.0) {
    dVar15 = 1.0;
    dVar17 = 0.0;
    dVar18 = dVar16;
    if (dVar16 <= 0.0) {
      dVar15 = -1.0;
      dVar18 = -dVar16;
    }
  }
  else if (dVar16 == 0.0) {
    dVar15 = 0.0;
    dVar17 = 1.0;
    if (dVar18 <= 0.0) {
      dVar17 = -1.0;
      dVar18 = -dVar18;
    }
  }
  else {
    dVar19 = dVar18;
    _hypot(SUB84(dVar18,0),dVar16);
    dVar15 = dVar16 / dVar19;
    dVar17 = dVar18 / dVar19;
    dVar18 = dVar19;
  }
  uStack_3e8 = *(undefined8 *)(piVar4 + 0xf0);
  if (dVar18 != 0.0) {
    piVar3 = piVar4 + 0xf6;
    dVar16 = dVar18;
    do {
      dVar19 = *(double *)(piVar4 + 0x120);
      if (dVar16 <= *(double *)(piVar4 + 0x120)) {
        dVar19 = dVar16;
      }
      dVar16 = dVar16 - dVar19;
      dVar14 = dVar17 * (dVar18 - dVar16);
      dVar1 = dVar15 * (dVar18 - dVar16);
      pdVar8 = *(double **)(piVar4 + 0x10);
      uStack_3e0 = CONCAT44((int)((ulong)*(undefined8 *)(piVar4 + 0xf0) >> 0x20) +
                            SUB84(pdVar8[3] * dVar1 + pdVar8[1] * dVar14 + 26388279066624.0,0),
                            (int)*(undefined8 *)(piVar4 + 0xf0) +
                            SUB84(pdVar8[2] * dVar1 + *pdVar8 * dVar14 + 26388279066624.0,0));
      if (piVar4[0x11e] == 0) {
LAB_1097e2198:
        if (piVar4[0xf5] != 0) {
          piVar10 = piVar4;
          FUN_1097e362c(piVar4,piVar3);
          if ((int)piVar10 != 0) {
            return piVar10;
          }
          iVar12 = 0;
          goto LAB_1097e228c;
        }
      }
      else {
        if ((bVar2) && ((piVar4[0x108] != 0 || (piVar4[0x11f] == 0)))) {
          piVar10 = piVar4 + 0x129;
          func_0x0001097ed4b8(piVar10,&uStack_3e8);
          if ((int)piVar10 == 0) goto LAB_1097e2198;
        }
        piVar10 = piVar4;
        FUN_1097e2b54(SUB84(dVar17,0),dVar15,piVar4,&uStack_3e8,&uStack_3e0,&iStack_3d8,&uStack_388,
                      &uStack_3d0);
        if ((int)piVar10 != 0) {
          return piVar10;
        }
        if (piVar4[0xf5] == 0) {
          if ((piVar4[0x108] == 0) && (piVar4[0x11f] != 0)) {
            *(undefined8 *)(piVar4 + 0x114) = uStack_360;
            *(undefined8 *)(piVar4 + 0x112) = uStack_368;
            *(undefined8 *)(piVar4 + 0x118) = uStack_350;
            *(undefined8 *)(piVar4 + 0x116) = uStack_358;
            *(undefined8 *)(piVar4 + 0x11a) = uStack_348;
            *(undefined8 *)(piVar4 + 0x10c) = uStack_380;
            *(undefined8 *)(piVar4 + 0x10a) = uStack_388;
            *(undefined8 *)(piVar4 + 0x110) = uStack_370;
            *(undefined8 *)(piVar4 + 0x10e) = uStack_378;
            piVar4[0x108] = 1;
          }
          else {
            piVar10 = piVar4;
            FUN_1097e30e4(piVar4,&uStack_388);
            if ((int)piVar10 != 0) {
              return piVar10;
            }
          }
        }
        else {
          piVar10 = piVar4;
          FUN_1097e2cd8(piVar4,piVar3,&uStack_388);
          if ((int)piVar10 != 0) {
            return piVar10;
          }
          piVar4[0xf5] = 0;
        }
        if (dVar16 == 0.0) {
          *(undefined8 *)(piVar4 + 0x100) = uStack_3a8;
          *(undefined8 *)(piVar4 + 0xfe) = uStack_3b0;
          *(undefined8 *)(piVar4 + 0x104) = uStack_398;
          *(undefined8 *)(piVar4 + 0x102) = uStack_3a0;
          *(undefined8 *)(piVar4 + 0x106) = uStack_390;
          *(undefined8 *)(piVar4 + 0xf8) = uStack_3c8;
          *(undefined8 *)piVar3 = uStack_3d0;
          *(undefined8 *)(piVar4 + 0xfc) = uStack_3b8;
          *(undefined8 *)(piVar4 + 0xfa) = uStack_3c0;
          iVar12 = 1;
LAB_1097e228c:
          piVar4[0xf5] = iVar12;
        }
        else {
          piVar10 = piVar4;
          FUN_1097e362c(piVar4,&uStack_3d0);
          if ((int)piVar10 != 0) {
            return piVar10;
          }
        }
      }
      func_0x0001097f3de4(SUB84(dVar19,0),piVar4 + 0x11c);
      uStack_3e8 = uStack_3e0;
    } while (dVar16 != 0.0);
  }
  if ((piVar4[0x11e] != 0) && (piVar4[0xf5] == 0)) {
    FUN_1097e3144(SUB84(dVar17,0),dVar15,param_2,&iStack_3d8,piVar4,piVar4 + 0xf6);
    piVar3 = piVar4;
    FUN_1097e30e4(piVar4,piVar4 + 0xf6);
    if ((int)piVar3 != 0) {
      return piVar3;
    }
    piVar4[0xf5] = 1;
  }
  *(undefined8 *)(piVar4 + 0xf0) = *(undefined8 *)param_2;
  return (int *)0x0;
}



/* Entry: 1097e362c; end: 1097e37af;  */

void FUN_1097e362c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 uVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int iStack_168;
  int iStack_164;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 8) == 2) {
    dVar15 = *(double *)(param_2 + 0xc) * *(double *)(param_1 + 0x50);
    dVar13 = *(double *)(param_2 + 0xe) * *(double *)(param_1 + 0x50);
    pdVar8 = *(double **)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)param_2;
    iVar10 = SUB84(pdVar8[3] * dVar13 + pdVar8[1] * dVar15 + 26388279066624.0,0);
    iVar9 = SUB84(pdVar8[2] * dVar13 + *pdVar8 * dVar15 + 26388279066624.0,0);
    uStack_38 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) + iVar10,
                         (int)*(undefined8 *)(param_2 + 4) + iVar9);
    uStack_40 = CONCAT44((int)((ulong)uStack_48 >> 0x20) + iVar10,(int)uStack_48 + iVar9);
    uStack_30 = *(undefined8 *)(param_2 + 4);
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
      lVar5 = *(long *)(param_1 + 0x78);
      param_2 = (int *)&uStack_48;
      (**(code **)(param_1 + 0x98))();
    }
    else {
      lVar5 = *(long *)(param_1 + 0x78);
      param_2 = (int *)&uStack_48;
      (**(code **)(param_1 + 0x80))(lVar5,param_2,&uStack_40);
      if ((int)lVar5 == 0) {
        lVar5 = *(long *)(param_1 + 0x78);
        param_2 = (int *)&uStack_40;
        (**(code **)(param_1 + 0x80))(lVar5,param_2,&uStack_38);
        if ((int)lVar5 == 0) {
          lVar5 = *(long *)(param_1 + 0x78);
          param_2 = (int *)&uStack_38;
          (**(code **)(param_1 + 0x80))(lVar5,param_2,&uStack_30);
        }
      }
    }
LAB_1097e3784:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      piVar6 = param_2 + 6;
      uStack_48 = CONCAT44(-(int)((ulong)*(undefined8 *)piVar6 >> 0x20),-(int)*(undefined8 *)piVar6)
      ;
      FUN_1097e3210(param_1,piVar6,&uStack_48,param_2 + 2,param_2 + 4,param_2,0);
      lVar5 = param_1;
      param_2 = piVar6;
      goto LAB_1097e3784;
    }
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
      lVar5 = 0;
      goto LAB_1097e3784;
    }
    lVar5 = *(long *)(param_1 + 0x78);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x0001097e3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x80))(lVar5,param_2,param_2 + 4);
      return;
    }
  }
  ___stack_chk_fail();
  *(undefined4 *)(lVar5 + 0x3d0) = *(undefined4 *)(lVar5 + 0x47c);
  iVar9 = *(int *)(lVar5 + 0x3c0);
  iVar10 = *param_2;
  iStack_168 = iVar10 - iVar9;
  if ((iStack_168 == 0) && (*(int *)(lVar5 + 0x3c4) == param_2[1])) {
    return;
  }
  if (*(int *)(lVar5 + 0x4a0) == 0) {
LAB_1097e2048:
    bVar3 = false;
  }
  else {
    if ((*(int *)(lVar5 + 0x4a4) <= iVar9) && (iVar9 <= *(int *)(lVar5 + 0x4ac))) {
      if ((*(int *)(lVar5 + 0x4a8) <= *(int *)(lVar5 + 0x3c4)) &&
         ((((iVar10 <= *(int *)(lVar5 + 0x4ac) && (*(int *)(lVar5 + 0x4a4) <= iVar10)) &&
           (*(int *)(lVar5 + 0x3c4) <= *(int *)(lVar5 + 0x4b0))) &&
          ((*(int *)(lVar5 + 0x4a8) <= param_2[1] && (param_2[1] <= *(int *)(lVar5 + 0x4b0)))))))
      goto LAB_1097e2048;
    }
    bVar3 = true;
  }
  iStack_164 = param_2[1] - *(int *)(lVar5 + 0x3c4);
  pdVar8 = *(double **)(lVar5 + 0x48);
  dVar15 = ((double)iStack_164 / 256.0) * pdVar8[2] + ((double)iStack_168 / 256.0) * *pdVar8;
  dVar13 = ((double)iStack_164 / 256.0) * pdVar8[3] + ((double)iStack_168 / 256.0) * pdVar8[1];
  if ((dVar15 != 0.0) || (dVar13 != 0.0)) {
    if (dVar15 == 0.0) {
      dVar12 = 1.0;
      dVar14 = 0.0;
      dVar15 = dVar13;
      if (dVar13 <= 0.0) {
        dVar12 = -1.0;
        dVar15 = -dVar13;
      }
    }
    else if (dVar13 == 0.0) {
      dVar12 = 0.0;
      dVar14 = 1.0;
      if (dVar15 <= 0.0) {
        dVar14 = -1.0;
        dVar15 = -dVar15;
      }
    }
    else {
      dVar16 = dVar15;
      _hypot(SUB84(dVar15,0),dVar13);
      dVar12 = dVar13 / dVar16;
      dVar14 = dVar15 / dVar16;
      dVar15 = dVar16;
    }
    uStack_178 = *(undefined8 *)(lVar5 + 0x3c0);
    if (dVar15 != 0.0) {
      puVar1 = (undefined8 *)(lVar5 + 0x3d8);
      dVar13 = dVar15;
      do {
        dVar16 = *(double *)(lVar5 + 0x480);
        if (dVar13 <= *(double *)(lVar5 + 0x480)) {
          dVar16 = dVar13;
        }
        dVar13 = dVar13 - dVar16;
        dVar11 = dVar14 * (dVar15 - dVar13);
        dVar2 = dVar12 * (dVar15 - dVar13);
        pdVar8 = *(double **)(lVar5 + 0x40);
        uStack_170 = CONCAT44((int)((ulong)*(undefined8 *)(lVar5 + 0x3c0) >> 0x20) +
                              SUB84(pdVar8[3] * dVar2 + pdVar8[1] * dVar11 + 26388279066624.0,0),
                              (int)*(undefined8 *)(lVar5 + 0x3c0) +
                              SUB84(pdVar8[2] * dVar2 + *pdVar8 * dVar11 + 26388279066624.0,0));
        if (*(int *)(lVar5 + 0x478) == 0) {
LAB_1097e2198:
          if (*(int *)(lVar5 + 0x3d4) != 0) {
            lVar4 = lVar5;
            FUN_1097e362c(lVar5,puVar1);
            if ((int)lVar4 != 0) {
              return;
            }
            uVar7 = 0;
            goto LAB_1097e228c;
          }
        }
        else {
          if ((bVar3) && ((*(int *)(lVar5 + 0x420) != 0 || (*(int *)(lVar5 + 0x47c) == 0)))) {
            lVar4 = lVar5 + 0x4a4;
            func_0x0001097ed4b8(lVar4,&uStack_178);
            if ((int)lVar4 == 0) goto LAB_1097e2198;
          }
          lVar4 = lVar5;
          FUN_1097e2b54(SUB84(dVar14,0),dVar12,lVar5,&uStack_178,&uStack_170,&iStack_168,&uStack_118
                        ,&uStack_160);
          if ((int)lVar4 != 0) {
            return;
          }
          if (*(int *)(lVar5 + 0x3d4) == 0) {
            if ((*(int *)(lVar5 + 0x420) == 0) && (*(int *)(lVar5 + 0x47c) != 0)) {
              *(undefined8 *)(lVar5 + 0x450) = uStack_f0;
              *(undefined8 *)(lVar5 + 0x448) = uStack_f8;
              *(undefined8 *)(lVar5 + 0x460) = uStack_e0;
              *(undefined8 *)(lVar5 + 0x458) = uStack_e8;
              *(undefined8 *)(lVar5 + 0x468) = uStack_d8;
              *(undefined8 *)(lVar5 + 0x430) = uStack_110;
              *(undefined8 *)(lVar5 + 0x428) = uStack_118;
              *(undefined8 *)(lVar5 + 0x440) = uStack_100;
              *(undefined8 *)(lVar5 + 0x438) = uStack_108;
              *(undefined4 *)(lVar5 + 0x420) = 1;
            }
            else {
              lVar4 = lVar5;
              FUN_1097e30e4(lVar5,&uStack_118);
              if ((int)lVar4 != 0) {
                return;
              }
            }
          }
          else {
            lVar4 = lVar5;
            FUN_1097e2cd8(lVar5,puVar1,&uStack_118);
            if ((int)lVar4 != 0) {
              return;
            }
            *(undefined4 *)(lVar5 + 0x3d4) = 0;
          }
          if (dVar13 == 0.0) {
            *(undefined8 *)(lVar5 + 0x400) = uStack_138;
            *(undefined8 *)(lVar5 + 0x3f8) = uStack_140;
            *(undefined8 *)(lVar5 + 0x410) = uStack_128;
            *(undefined8 *)(lVar5 + 0x408) = uStack_130;
            *(undefined8 *)(lVar5 + 0x418) = uStack_120;
            *(undefined8 *)(lVar5 + 0x3e0) = uStack_158;
            *puVar1 = uStack_160;
            *(undefined8 *)(lVar5 + 0x3f0) = uStack_148;
            *(undefined8 *)(lVar5 + 1000) = uStack_150;
            uVar7 = 1;
LAB_1097e228c:
            *(undefined4 *)(lVar5 + 0x3d4) = uVar7;
          }
          else {
            lVar4 = lVar5;
            FUN_1097e362c(lVar5,&uStack_160);
            if ((int)lVar4 != 0) {
              return;
            }
          }
        }
        func_0x0001097f3de4(SUB84(dVar16,0),lVar5 + 0x470);
        uStack_178 = uStack_170;
      } while (dVar13 != 0.0);
    }
    if ((*(int *)(lVar5 + 0x478) != 0) && (*(int *)(lVar5 + 0x3d4) == 0)) {
      FUN_1097e3144(SUB84(dVar14,0),dVar12,param_2,&iStack_168,lVar5,lVar5 + 0x3d8);
      lVar4 = lVar5;
      FUN_1097e30e4(lVar5,lVar5 + 0x3d8);
      if ((int)lVar4 != 0) {
        return;
      }
      *(undefined4 *)(lVar5 + 0x3d4) = 1;
    }
    *(undefined8 *)(lVar5 + 0x3c0) = *(undefined8 *)param_2;
  }
  return;
}



/* Entry: 1097e37b0; end: 1097e37b7;  */

void FUN_1097e37b0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
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
  
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x47c);
  iVar2 = *(int *)(param_1 + 0x3c0);
  iVar3 = *param_2;
  iStack_118 = iVar3 - iVar2;
  if ((iStack_118 == 0) && (*(int *)(param_1 + 0x3c4) == param_2[1])) {
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
LAB_1097e2048:
    bVar4 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x4a4) <= iVar2) && (iVar2 <= *(int *)(param_1 + 0x4ac))) {
      if ((*(int *)(param_1 + 0x4a8) <= *(int *)(param_1 + 0x3c4)) &&
         ((((iVar3 <= *(int *)(param_1 + 0x4ac) && (*(int *)(param_1 + 0x4a4) <= iVar3)) &&
           (*(int *)(param_1 + 0x3c4) <= *(int *)(param_1 + 0x4b0))) &&
          ((*(int *)(param_1 + 0x4a8) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x4b0))))))
         ) goto LAB_1097e2048;
    }
    bVar4 = true;
  }
  iStack_114 = param_2[1] - *(int *)(param_1 + 0x3c4);
  pdVar7 = *(double **)(param_1 + 0x48);
  dVar14 = ((double)iStack_114 / 256.0) * pdVar7[2] + ((double)iStack_118 / 256.0) * *pdVar7;
  dVar12 = ((double)iStack_114 / 256.0) * pdVar7[3] + ((double)iStack_118 / 256.0) * pdVar7[1];
  if ((dVar14 != 0.0) || (dVar12 != 0.0)) {
    if (dVar14 == 0.0) {
      dVar11 = 1.0;
      dVar13 = 0.0;
      dVar14 = dVar12;
      if (dVar12 <= 0.0) {
        dVar11 = -1.0;
        dVar14 = -dVar12;
      }
    }
    else if (dVar12 == 0.0) {
      dVar11 = 0.0;
      dVar13 = 1.0;
      if (dVar14 <= 0.0) {
        dVar13 = -1.0;
        dVar14 = -dVar14;
      }
    }
    else {
      dVar8 = dVar14;
      _hypot(dVar14,dVar12);
      dVar11 = dVar12 / dVar8;
      dVar13 = dVar14 / dVar8;
      dVar14 = dVar8;
    }
    uStack_128 = *(undefined8 *)(param_1 + 0x3c0);
    if (dVar14 != 0.0) {
      puVar1 = (undefined8 *)(param_1 + 0x3d8);
      dVar12 = dVar14;
      do {
        dVar8 = *(double *)(param_1 + 0x480);
        if (dVar12 <= *(double *)(param_1 + 0x480)) {
          dVar8 = dVar12;
        }
        dVar12 = dVar12 - dVar8;
        dVar10 = dVar13 * (dVar14 - dVar12);
        dVar9 = dVar11 * (dVar14 - dVar12);
        pdVar7 = *(double **)(param_1 + 0x40);
        uStack_120 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20) +
                              SUB84(pdVar7[3] * dVar9 + pdVar7[1] * dVar10 + 26388279066624.0,0),
                              (int)*(undefined8 *)(param_1 + 0x3c0) +
                              SUB84(pdVar7[2] * dVar9 + *pdVar7 * dVar10 + 26388279066624.0,0));
        if (*(int *)(param_1 + 0x478) == 0) {
LAB_1097e2198:
          if (*(int *)(param_1 + 0x3d4) != 0) {
            lVar5 = param_1;
            FUN_1097e362c(param_1,puVar1);
            if ((int)lVar5 != 0) {
              return;
            }
            uVar6 = 0;
            goto LAB_1097e228c;
          }
        }
        else {
          if ((bVar4) && ((*(int *)(param_1 + 0x420) != 0 || (*(int *)(param_1 + 0x47c) == 0)))) {
            lVar5 = param_1 + 0x4a4;
            func_0x0001097ed4b8(lVar5,&uStack_128);
            if ((int)lVar5 == 0) goto LAB_1097e2198;
          }
          lVar5 = param_1;
          FUN_1097e2b54(dVar13,dVar11,param_1,&uStack_128,&uStack_120,&iStack_118,&uStack_c8,
                        &uStack_110);
          if ((int)lVar5 != 0) {
            return;
          }
          if (*(int *)(param_1 + 0x3d4) == 0) {
            if ((*(int *)(param_1 + 0x420) == 0) && (*(int *)(param_1 + 0x47c) != 0)) {
              *(undefined8 *)(param_1 + 0x450) = uStack_a0;
              *(undefined8 *)(param_1 + 0x448) = uStack_a8;
              *(undefined8 *)(param_1 + 0x460) = uStack_90;
              *(undefined8 *)(param_1 + 0x458) = uStack_98;
              *(undefined8 *)(param_1 + 0x468) = uStack_88;
              *(undefined8 *)(param_1 + 0x430) = uStack_c0;
              *(undefined8 *)(param_1 + 0x428) = uStack_c8;
              *(undefined8 *)(param_1 + 0x440) = uStack_b0;
              *(undefined8 *)(param_1 + 0x438) = uStack_b8;
              *(undefined4 *)(param_1 + 0x420) = 1;
            }
            else {
              lVar5 = param_1;
              FUN_1097e30e4(param_1,&uStack_c8);
              if ((int)lVar5 != 0) {
                return;
              }
            }
          }
          else {
            lVar5 = param_1;
            FUN_1097e2cd8(param_1,puVar1,&uStack_c8);
            if ((int)lVar5 != 0) {
              return;
            }
            *(undefined4 *)(param_1 + 0x3d4) = 0;
          }
          if (dVar12 == 0.0) {
            *(undefined8 *)(param_1 + 0x400) = uStack_e8;
            *(undefined8 *)(param_1 + 0x3f8) = uStack_f0;
            *(undefined8 *)(param_1 + 0x410) = uStack_d8;
            *(undefined8 *)(param_1 + 0x408) = uStack_e0;
            *(undefined8 *)(param_1 + 0x418) = uStack_d0;
            *(undefined8 *)(param_1 + 0x3e0) = uStack_108;
            *puVar1 = uStack_110;
            *(undefined8 *)(param_1 + 0x3f0) = uStack_f8;
            *(undefined8 *)(param_1 + 1000) = uStack_100;
            uVar6 = 1;
LAB_1097e228c:
            *(undefined4 *)(param_1 + 0x3d4) = uVar6;
          }
          else {
            lVar5 = param_1;
            FUN_1097e362c(param_1,&uStack_110);
            if ((int)lVar5 != 0) {
              return;
            }
          }
        }
        func_0x0001097f3de4(dVar8,param_1 + 0x470);
        uStack_128 = uStack_120;
      } while (dVar12 != 0.0);
    }
    if ((*(int *)(param_1 + 0x478) != 0) && (*(int *)(param_1 + 0x3d4) == 0)) {
      FUN_1097e3144(dVar13,dVar11,param_2,&iStack_118,param_1,param_1 + 0x3d8);
      lVar5 = param_1;
      FUN_1097e30e4(param_1,param_1 + 0x3d8);
      if ((int)lVar5 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3d4) = 1;
    }
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)param_2;
  }
  return;
}



/* Entry: 1097e37b8; end: 1097e3ab3;  */

undefined4 * FUN_1097e37b8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  int *piVar14;
  ulong uVar15;
  char *pcVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_100;
  int *piStack_f8;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0xf4] = 1;
  piVar8 = param_1;
  piVar7 = param_2;
  if ((param_1[0xf0] != *param_2) || (param_1[0xf1] != param_2[1])) {
    pdVar13 = *(double **)(param_1 + 0x12);
    dVar22 = ((double)param_3[1] / 256.0) * pdVar13[2] + ((double)*param_3 / 256.0) * *pdVar13;
    dVar23 = ((double)param_3[1] / 256.0) * pdVar13[3] + ((double)*param_3 / 256.0) * pdVar13[1];
    if ((dVar22 != 0.0) || (dVar23 != 0.0)) {
      if (dVar22 == 0.0) {
        dVar18 = 1.0;
        dVar17 = 0.0;
        if (dVar23 <= 0.0) {
          dVar18 = -1.0;
        }
      }
      else if (dVar23 == 0.0) {
        dVar18 = 0.0;
        dVar17 = 1.0;
        if (dVar22 <= 0.0) {
          dVar17 = -1.0;
        }
      }
      else {
        dVar18 = dVar22;
        _hypot(dVar22,dVar23);
        dVar17 = dVar22 / dVar18;
        dVar18 = dVar23 / dVar18;
      }
      piVar7 = param_1;
      FUN_1097e3144(dVar17,dVar18,param_2,param_3,param_1,&iStack_a8);
      piVar14 = param_1 + 0xf6;
      param_3 = piVar7;
      if (dStack_80 * *(double *)(param_1 + 0x100) + *(double *)(param_1 + 0xfe) * dStack_88 <
          *(double *)(param_1 + 0x18)) {
        piVar7 = &iStack_a8;
        FUN_1097e31d4(piVar7,piVar14);
        bVar5 = (int)piVar7 != 0;
        piVar8 = piVar14;
        if (bVar5) {
          piVar8 = param_1 + 0xfa;
        }
        lVar10 = 0;
        if (bVar5) {
          lVar10 = 0x10;
        }
        param_3 = (int *)&uStack_90;
        FUN_1097e3210(param_1,param_1 + 0xfc,param_3,param_1 + 0xf8,piVar8,(long)&iStack_a8 + lVar10
                      ,piVar7);
      }
      iVar11 = param_1[0xfa];
      dVar23 = (double)(param_1[0xf6] - iVar11) / 256.0;
      iVar1 = param_1[0xfb];
      dVar22 = (double)(param_1[0xf7] - iVar1) / 256.0;
      dVar18 = (double)(iStack_a8 - iStack_98) / 256.0;
      dVar20 = (double)(iStack_a4 - iStack_94) / 256.0;
      dVar17 = -(dVar18 * dVar22) + dVar23 * dVar20;
      if (dVar17 == 0.0) {
LAB_1097e3964:
        uStack_60 = *(undefined8 *)(param_1 + 0xf6);
        uStack_58 = *(undefined8 *)(param_1 + 0xfa);
        (**(code **)(param_1 + 0x22))(*(undefined8 *)(param_1 + 0x1e),&uStack_60);
        uStack_60 = *(undefined8 *)(param_1 + 0xf6);
        uStack_50 = CONCAT44(iStack_a4,iStack_a8);
      }
      else {
        dVar19 = (double)(iVar11 - iStack_98) / 256.0;
        dVar21 = (double)(iVar1 - iStack_94) / 256.0;
        dVar18 = (-(dVar20 * dVar19) + dVar21 * dVar18) / dVar17;
        bVar5 = false;
        bVar4 = false;
        if (0.0 < dVar18) {
          bVar5 = false;
          bVar4 = true;
          if (!NAN(dVar18)) {
            bVar5 = dVar18 < 1.0;
            bVar4 = false;
          }
        }
        if (bVar5 == bVar4) goto LAB_1097e3964;
        dVar17 = (-(dVar22 * dVar19) + dVar21 * dVar23) / dVar17;
        bVar5 = false;
        bVar4 = false;
        if (0.0 < dVar17) {
          bVar5 = false;
          bVar4 = true;
          if (!NAN(dVar17)) {
            bVar5 = dVar17 < 1.0;
            bVar4 = false;
          }
        }
        if (bVar5 == bVar4) goto LAB_1097e3964;
        uStack_60 = *(undefined8 *)(param_1 + 0xf6);
        uStack_50 = CONCAT44(iVar1 + SUB84(dVar22 * dVar18 + 26388279066624.0,0),
                             iVar11 + SUB84(dVar23 * dVar18 + 26388279066624.0,0));
        (**(code **)(param_1 + 0x22))(*(undefined8 *)(param_1 + 0x1e),&uStack_60);
        uStack_60 = *(undefined8 *)(param_1 + 0xfa);
      }
      piVar8 = *(int **)(param_1 + 0x1e);
      piVar7 = (int *)&uStack_60;
      (**(code **)(param_1 + 0x22))();
      *(double *)(param_1 + 0x100) = dStack_80;
      *(double *)(param_1 + 0xfe) = dStack_88;
      *(undefined8 *)(param_1 + 0x104) = uStack_70;
      *(undefined8 *)(param_1 + 0x102) = uStack_78;
      *(undefined8 *)(param_1 + 0x106) = uStack_68;
      *(undefined8 *)(param_1 + 0xf8) = uStack_a0;
      *(ulong *)piVar14 = CONCAT44(iStack_a4,iStack_a8);
      *(undefined8 *)(param_1 + 0xfc) = uStack_90;
      *(ulong *)(param_1 + 0xfa) = CONCAT44(iStack_94,iStack_98);
      param_1[0xf5] = 1;
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)param_2;
    }
  }
  iVar11 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined4 *)0x0;
  }
  ___stack_chk_fail();
  puVar9 = (undefined4 *)0x1;
  _calloc(1,0x18);
  if (puVar9 == (undefined4 *)0x0) goto LAB_1097e3c1c;
  if (piVar7[1] == 0) {
    (**(code **)(*(long *)(piVar7 + 8) + 0x108))(piVar7);
  }
  uStack_100 = (ulong)uStack_100._4_4_ << 0x20;
  if (iVar11 == 0) {
    uVar12 = 0;
    piVar14 = piVar8 + 10;
    do {
      uVar15 = (ulong)(uint)piVar14[4];
      if (piVar14[4] != 0) {
        pcVar16 = *(char **)(piVar14 + 8);
        do {
          cVar2 = *pcVar16;
          if (cVar2 == '\x02') {
            uVar12 = uVar12 + 4;
          }
          else {
            if ((cVar2 == '\x01') || (cVar2 == '\0')) {
              uVar12 = uVar12 + 2;
            }
            else {
              uVar12 = uVar12 + 1;
            }
            uStack_100 = CONCAT44(uStack_100._4_4_,uVar12);
          }
          uVar15 = uVar15 - 1;
          pcVar16 = pcVar16 + 1;
        } while (uVar15 != 0);
      }
      piVar14 = *(int **)piVar14;
    } while (piVar14 != piVar8 + 10);
    uVar3 = uVar12 + 2;
    if (((*(byte *)(piVar8 + 4) ^ 0xff) & 3) != 0) {
      uVar3 = uVar12;
    }
LAB_1097e3bb0:
    puVar9[4] = uVar3;
    if (-1 < (int)uVar3) {
      if (uVar3 == 0) {
        uVar6 = 0;
LAB_1097e3c5c:
        *puVar9 = uVar6;
        return puVar9;
      }
      lVar10 = (ulong)uVar3 << 4;
      _malloc();
      *(long *)(puVar9 + 2) = lVar10;
      if (lVar10 != 0) {
        uStack_100 = lVar10;
        piStack_f8 = piVar7;
        if (iVar11 == 0) {
          FUN_1097dce2c(piVar8,FUN_1097e3dc0,0x1097e3e30,FUN_1097e3ec4,FUN_1097e3ea0,&uStack_100);
          uVar6 = SUB84(piVar8,0);
        }
        else {
          if (piVar7[1] == 0) {
            (**(code **)(*(long *)(piVar7 + 8) + 0x108))(piVar7);
          }
          FUN_1097dd58c(piVar8,FUN_1097e3dc0,0x1097e3e30,FUN_1097e3ea0,&uStack_100);
          uVar6 = SUB84(piVar8,0);
        }
        goto LAB_1097e3c5c;
      }
    }
  }
  else {
    piVar14 = piVar8;
    FUN_1097dd58c(piVar8,FUN_1097e3d84,0x1097e3d98,0x1097e3dac,&uStack_100);
    if ((int)piVar14 == 0) {
      uVar3 = (uint)uStack_100;
      goto LAB_1097e3bb0;
    }
  }
  _free(puVar9);
LAB_1097e3c1c:
  return (undefined4 *)&UNK_10dffe570;
}



/* Entry: 1097e3ab4; end: 1097e3c8b;  */

undefined4 * FUN_1097e3ab4(long param_1,long param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0x18);
  if (puVar4 == (undefined4 *)0x0) goto LAB_1097e3c1c;
  if (*(int *)(param_2 + 4) == 0) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x108))(param_2);
  }
  uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
  if (param_3 == 0) {
    uVar6 = 0;
    plVar7 = (long *)(param_1 + 0x28);
    do {
      uVar8 = (ulong)*(uint *)(plVar7 + 2);
      if (*(uint *)(plVar7 + 2) != 0) {
        pcVar9 = (char *)plVar7[4];
        do {
          cVar1 = *pcVar9;
          if (cVar1 == '\x02') {
            uVar6 = uVar6 + 4;
          }
          else {
            if ((cVar1 == '\x01') || (cVar1 == '\0')) {
              uVar6 = uVar6 + 2;
            }
            else {
              uVar6 = uVar6 + 1;
            }
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
          }
          uVar8 = uVar8 - 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)(param_1 + 0x28));
    uVar2 = uVar6 + 2;
    if (((*(byte *)(param_1 + 0x10) ^ 0xff) & 3) != 0) {
      uVar2 = uVar6;
    }
LAB_1097e3bb0:
    puVar4[4] = uVar2;
    if (-1 < (int)uVar2) {
      if (uVar2 == 0) {
        uVar3 = 0;
LAB_1097e3c5c:
        *puVar4 = uVar3;
        return puVar4;
      }
      lVar5 = (ulong)uVar2 << 4;
      _malloc();
      *(long *)(puVar4 + 2) = lVar5;
      if (lVar5 != 0) {
        uStack_50 = lVar5;
        lStack_48 = param_2;
        if (param_3 == 0) {
          FUN_1097dce2c(param_1,FUN_1097e3dc0,0x1097e3e30,FUN_1097e3ec4,FUN_1097e3ea0,&uStack_50);
          uVar3 = (undefined4)param_1;
        }
        else {
          if (*(int *)(param_2 + 4) == 0) {
            (**(code **)(*(long *)(param_2 + 0x20) + 0x108))(param_2);
          }
          FUN_1097dd58c(param_1,FUN_1097e3dc0,0x1097e3e30,FUN_1097e3ea0,&uStack_50);
          uVar3 = (undefined4)param_1;
        }
        goto LAB_1097e3c5c;
      }
    }
  }
  else {
    lVar5 = param_1;
    FUN_1097dd58c(param_1,FUN_1097e3d84,0x1097e3d98,0x1097e3dac,&uStack_50);
    if ((int)lVar5 == 0) {
      uVar2 = (uint)uStack_50;
      goto LAB_1097e3bb0;
    }
  }
  _free(puVar4);
LAB_1097e3c1c:
  return (undefined4 *)&UNK_10dffe570;
}



/* Entry: 1097e3c8c; end: 1097e3d83;  */

int FUN_1097e3c8c(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    return 0;
  }
  piVar3 = *(int **)(param_1 + 8);
  piVar1 = piVar3 + (long)*(int *)(param_1 + 0x10) * 4;
  do {
    iVar2 = *piVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        if (piVar3[1] < 2) {
          return 9;
        }
        func_0x0001098016c0(*(undefined8 *)(piVar3 + 4),*(undefined8 *)(piVar3 + 6),param_2);
      }
      else {
        if (iVar2 != 1) {
          return 9;
        }
        if (piVar3[1] < 2) {
          return 9;
        }
        func_0x00010980170c(*(undefined8 *)(piVar3 + 4),*(undefined8 *)(piVar3 + 6),param_2);
      }
    }
    else if (iVar2 == 2) {
      if (piVar3[1] < 4) {
        return 9;
      }
      func_0x000109801758(*(undefined8 *)(piVar3 + 4),*(undefined8 *)(piVar3 + 6),
                          *(undefined8 *)(piVar3 + 8),*(undefined8 *)(piVar3 + 10),
                          *(undefined8 *)(piVar3 + 0xc),*(undefined8 *)(piVar3 + 0xe),param_2);
    }
    else {
      if (iVar2 != 3) {
        return 9;
      }
      if (piVar3[1] < 1) {
        return 9;
      }
      func_0x0001098017f0(param_2);
    }
    if (*(int *)(param_2 + 4) != 0) {
      return *(int *)(param_2 + 4);
    }
    piVar3 = piVar3 + (long)piVar3[1] * 4;
  } while (piVar3 < piVar1);
  return 0;
}



/* Entry: 1097e3d84; end: 1097e3dbf;  */

undefined8 FUN_1097e3d84(int *param_1)

{
  *param_1 = *param_1 + 2;
  return 0;
}



/* Entry: 1097e3dc0; end: 1097e3e9f;  */

undefined8 FUN_1097e3dc0(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  double dStack_30;
  double dStack_28;
  
  dStack_28 = (double)*param_2 / 256.0;
  dStack_30 = (double)param_2[1] / 256.0;
  puVar1 = (undefined8 *)*param_1;
  (**(code **)(*(long *)(param_1[1] + 0x20) + 0x178))(param_1[1],&dStack_28,&dStack_30);
  *puVar1 = 0x200000000;
  puVar1[2] = dStack_28;
  puVar1[3] = dStack_30;
  *param_1 = *param_1 + 0x20;
  return 0;
}



/* Entry: 1097e3ea0; end: 1097e3ec3;  */

undefined8 FUN_1097e3ea0(long *param_1)

{
  *(undefined8 *)*param_1 = 0x100000003;
  *param_1 = *param_1 + 0x10;
  return 0;
}



/* Entry: 1097e3ec4; end: 1097e421f;  */

undefined8 FUN_1097e3ec4(long *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_38 = (double)*param_2 / 256.0;
  dStack_40 = (double)param_2[1] / 256.0;
  puVar1 = (undefined8 *)*param_1;
  (**(code **)(*(long *)(param_1[1] + 0x20) + 0x178))(param_1[1],&dStack_38,&dStack_40);
  dStack_48 = (double)*param_3 / 256.0;
  dStack_50 = (double)param_3[1] / 256.0;
  (**(code **)(*(long *)(param_1[1] + 0x20) + 0x178))(param_1[1],&dStack_48,&dStack_50);
  dStack_58 = (double)*param_4 / 256.0;
  dStack_60 = (double)param_4[1] / 256.0;
  (**(code **)(*(long *)(param_1[1] + 0x20) + 0x178))(param_1[1],&dStack_58,&dStack_60);
  *puVar1 = 0x400000002;
  puVar1[2] = dStack_38;
  puVar1[3] = dStack_40;
  puVar1[4] = dStack_48;
  puVar1[5] = dStack_50;
  puVar1[6] = dStack_58;
  puVar1[7] = dStack_60;
  *param_1 = *param_1 + 0x40;
  return 0;
}



/* Entry: 1097e4220; end: 1097e4583;  */

undefined8 FUN_1097e4220(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = (int)param_2;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return param_2;
}



/* Entry: 1097e4584; end: 1097e45db;  */

void FUN_1097e4584(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auVar15 [16];
  undefined1 in_b2;
  undefined1 in_register_00005041;
  undefined1 in_register_00005042;
  undefined1 in_register_00005043;
  undefined1 in_register_00005044;
  undefined1 in_register_00005045;
  undefined1 in_register_00005046;
  undefined1 in_register_00005047;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  
  uVar8 = (undefined1)((ulong)param_1 >> 8);
  uVar9 = (undefined1)((ulong)param_1 >> 0x10);
  uVar10 = (undefined1)((ulong)param_1 >> 0x18);
  uVar11 = (undefined1)((ulong)param_1 >> 0x20);
  uVar12 = (undefined1)((ulong)param_1 >> 0x28);
  uVar13 = (undefined1)((ulong)param_1 >> 0x30);
  uVar14 = (undefined1)((ulong)param_1 >> 0x38);
  auVar15 = NEON_fmov(0x3ff0000000000000,8);
  auVar16._0_8_ =
       -(ulong)(auVar15._0_8_ <
               (double)CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0))))))));
  auVar16._8_8_ = -(ulong)(auVar15._8_8_ < param_1);
  auVar1[1] = in_register_00005001;
  auVar1[0] = in_b0;
  auVar1[2] = in_register_00005002;
  auVar1[3] = in_register_00005003;
  auVar1[4] = in_register_00005004;
  auVar1[5] = in_register_00005005;
  auVar1[6] = in_register_00005006;
  auVar1[7] = in_register_00005007;
  auVar1[8] = SUB81(param_1,0);
  auVar1[9] = uVar8;
  auVar1[10] = uVar9;
  auVar1[0xb] = uVar10;
  auVar1[0xc] = uVar11;
  auVar1[0xd] = uVar12;
  auVar1[0xe] = uVar13;
  auVar1[0xf] = uVar14;
  auVar17[1] = in_register_00005001;
  auVar17[0] = in_b0;
  auVar17[2] = in_register_00005002;
  auVar17[3] = in_register_00005003;
  auVar17[4] = in_register_00005004;
  auVar17[5] = in_register_00005005;
  auVar17[6] = in_register_00005006;
  auVar17[7] = in_register_00005007;
  auVar17[8] = SUB81(param_1,0);
  auVar17[9] = uVar8;
  auVar17[10] = uVar9;
  auVar17[0xb] = uVar10;
  auVar17[0xc] = uVar11;
  auVar17[0xd] = uVar12;
  auVar17[0xe] = uVar13;
  auVar17[0xf] = uVar14;
  auVar17 = auVar17 ^ (auVar1 ^ auVar15) & auVar16;
  lVar2 = -(ulong)((double)CONCAT17(in_register_00005007,
                                    CONCAT16(in_register_00005006,
                                             CONCAT15(in_register_00005005,
                                                      CONCAT14(in_register_00005004,
                                                               CONCAT13(in_register_00005003,
                                                                        CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))) < 0.0);
  lVar3 = -(ulong)(param_1 < 0.0);
  auVar4[1] = in_register_00005041;
  auVar4[0] = in_b2;
  auVar4[2] = in_register_00005042;
  auVar4[3] = in_register_00005043;
  auVar4[4] = in_register_00005044;
  auVar4[5] = in_register_00005045;
  auVar4[6] = in_register_00005046;
  auVar4[7] = in_register_00005047;
  auVar4[8] = SUB81(param_2,0);
  auVar4[9] = (char)((ulong)param_2 >> 8);
  auVar4[10] = (char)((ulong)param_2 >> 0x10);
  auVar4[0xb] = (char)((ulong)param_2 >> 0x18);
  auVar4[0xc] = (char)((ulong)param_2 >> 0x20);
  auVar4[0xd] = (char)((ulong)param_2 >> 0x28);
  auVar4[0xe] = (char)((ulong)param_2 >> 0x30);
  auVar4[0xf] = (char)((ulong)param_2 >> 0x38);
  auVar7._8_8_ = -(ulong)(auVar15._8_8_ < param_2);
  auVar7._0_8_ = -(ulong)(auVar15._0_8_ <
                         (double)CONCAT17(in_register_00005047,
                                          CONCAT16(in_register_00005046,
                                                   CONCAT15(in_register_00005045,
                                                            CONCAT14(in_register_00005044,
                                                                     CONCAT13(in_register_00005043,
                                                                              CONCAT12(
                                                  in_register_00005042,
                                                  CONCAT11(in_register_00005041,in_b2))))))));
  auVar15 = auVar15 ^ (auVar15 ^ auVar4) & ~auVar7;
  lVar5 = -(ulong)((double)CONCAT17(in_register_00005047,
                                    CONCAT16(in_register_00005046,
                                             CONCAT15(in_register_00005045,
                                                      CONCAT14(in_register_00005044,
                                                               CONCAT13(in_register_00005043,
                                                                        CONCAT12(
                                                  in_register_00005042,
                                                  CONCAT11(in_register_00005041,in_b2))))))) < 0.0);
  lVar6 = -(ulong)(param_2 < 0.0);
  bStack_30 = auVar15[0] & ~(byte)lVar5;
  bStack_2f = auVar15[1] & ~(byte)((ulong)lVar5 >> 8);
  bStack_2e = auVar15[2] & ~(byte)((ulong)lVar5 >> 0x10);
  bStack_2d = auVar15[3] & ~(byte)((ulong)lVar5 >> 0x18);
  bStack_2c = auVar15[4] & ~(byte)((ulong)lVar5 >> 0x20);
  bStack_2b = auVar15[5] & ~(byte)((ulong)lVar5 >> 0x28);
  bStack_2a = auVar15[6] & ~(byte)((ulong)lVar5 >> 0x30);
  bStack_29 = auVar15[7] & ~(byte)((ulong)lVar5 >> 0x38);
  bStack_28 = auVar15[8] & ~(byte)lVar6;
  bStack_27 = auVar15[9] & ~(byte)((ulong)lVar6 >> 8);
  bStack_26 = auVar15[10] & ~(byte)((ulong)lVar6 >> 0x10);
  bStack_25 = auVar15[0xb] & ~(byte)((ulong)lVar6 >> 0x18);
  bStack_24 = auVar15[0xc] & ~(byte)((ulong)lVar6 >> 0x20);
  bStack_23 = auVar15[0xd] & ~(byte)((ulong)lVar6 >> 0x28);
  bStack_22 = auVar15[0xe] & ~(byte)((ulong)lVar6 >> 0x30);
  bStack_21 = auVar15[0xf] & ~(byte)((ulong)lVar6 >> 0x38);
  uStack_38 = CONCAT17(auVar17[0xf] & ~(byte)((ulong)lVar3 >> 0x38),
                       CONCAT16(auVar17[0xe] & ~(byte)((ulong)lVar3 >> 0x30),
                                CONCAT15(auVar17[0xd] & ~(byte)((ulong)lVar3 >> 0x28),
                                         CONCAT14(auVar17[0xc] & ~(byte)((ulong)lVar3 >> 0x20),
                                                  CONCAT13(auVar17[0xb] &
                                                           ~(byte)((ulong)lVar3 >> 0x18),
                                                           CONCAT12(auVar17[10] &
                                                                    ~(byte)((ulong)lVar3 >> 0x10),
                                                                    CONCAT11(auVar17[9] &
                                                                             ~(byte)((ulong)lVar3 >>
                                                                                    8),
                                                                             auVar17[8] &
                                                                             ~(byte)lVar3)))))));
  uStack_40 = CONCAT17(auVar17[7] & ~(byte)((ulong)lVar2 >> 0x38),
                       CONCAT16(auVar17[6] & ~(byte)((ulong)lVar2 >> 0x30),
                                CONCAT15(auVar17[5] & ~(byte)((ulong)lVar2 >> 0x28),
                                         CONCAT14(auVar17[4] & ~(byte)((ulong)lVar2 >> 0x20),
                                                  CONCAT13(auVar17[3] &
                                                           ~(byte)((ulong)lVar2 >> 0x18),
                                                           CONCAT12(auVar17[2] &
                                                                    ~(byte)((ulong)lVar2 >> 0x10),
                                                                    CONCAT11(auVar17[1] &
                                                                             ~(byte)((ulong)lVar2 >>
                                                                                    8),
                                                                             auVar17[0] &
                                                                             ~(byte)lVar2)))))));
  FUN_1097cb1e0(&uStack_40);
  func_0x0001097e44ac(&uStack_40);
  return;
}



/* Entry: 1097e45dc; end: 1097e465b;  */

undefined4 * FUN_1097e45dc(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)&UNK_10dffe860;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        puVar2 = (undefined4 *)&UNK_10dffe7b8;
      }
      else {
        puVar2 = (undefined4 *)&UNK_10dffcd48;
        func_0x0001097e44ac();
        if (puVar2[1] == 0) {
          func_0x0001097e4220(puVar2,iVar1);
        }
      }
      return puVar2;
    }
    puVar2 = (undefined4 *)0x1;
    _calloc(1,0x90);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)&UNK_10dffe7b8;
    }
    else {
      func_0x0001097e43f4();
      *puVar2 = 1;
    }
  }
  return puVar2;
}



/* Entry: 1097e465c; end: 1097e46f7;  */

void FUN_1097e465c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,0x110);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0x18;
    puVar1[0xe] = 3;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000002;
    *(undefined8 *)(puVar1 + 0x1e) = 0x3ff0000000000000;
    puVar1[0x11] = 1;
    *(undefined8 *)(puVar1 + 0x12) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x18) = 0x3ff0000000000000;
    *(undefined4 **)(puVar1 + 8) = puVar1 + 8;
    *(undefined4 **)(puVar1 + 10) = puVar1 + 8;
    *(undefined8 *)(puVar1 + 0x3c) = param_1;
    *(undefined8 *)(puVar1 + 0x3e) = param_2;
    *(undefined8 *)(puVar1 + 0x40) = param_3;
    *(undefined8 *)(puVar1 + 0x42) = param_4;
    *puVar1 = 1;
  }
  return;
}



/* Entry: 1097e46f8; end: 1097e47af;  */

void FUN_1097e46f8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,double param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,0x120);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0x18;
    puVar1[0xe] = 3;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000003;
    *(undefined8 *)(puVar1 + 0x1e) = 0x3ff0000000000000;
    puVar1[0x11] = 1;
    *(undefined8 *)(puVar1 + 0x12) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x18) = 0x3ff0000000000000;
    *(undefined4 **)(puVar1 + 8) = puVar1 + 8;
    *(undefined4 **)(puVar1 + 10) = puVar1 + 8;
    *(undefined8 *)(puVar1 + 0x3c) = param_1;
    *(undefined8 *)(puVar1 + 0x3e) = param_2;
    *(double *)(puVar1 + 0x40) = ABS(param_3);
    *(undefined8 *)(puVar1 + 0x42) = param_4;
    *(undefined8 *)(puVar1 + 0x44) = param_5;
    *(double *)(puVar1 + 0x46) = ABS(param_6);
    *puVar1 = 1;
  }
  return;
}



/* Entry: 1097e47b0; end: 1097e487f;  */

void FUN_1097e47b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,200);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0x18;
    puVar1[0xe] = 3;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000004;
    *(undefined8 *)(puVar1 + 0x1e) = 0x3ff0000000000000;
    puVar1[0x11] = 1;
    *(undefined8 *)(puVar1 + 0x12) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x18) = 0x3ff0000000000000;
    *(undefined4 **)(puVar1 + 8) = puVar1 + 8;
    *(undefined4 **)(puVar1 + 10) = puVar1 + 8;
    puVar1[0x22] = 0x1a0;
    *puVar1 = 1;
  }
  return;
}



/* Entry: 1097e4880; end: 1097e48f7;  */

void FUN_1097e4880(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar1 + -1 == 0) {
      func_0x0001097e434c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097e48f8; end: 1097e499f;  */

uint * FUN_1097e48f8(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)(param_1 + 4);
  if (*puVar3 != 0) {
    return puVar3;
  }
  if (*(int *)(param_1 + 0x30) == 4) {
    if (*(long *)(param_1 + 0x98) == 0) {
      puVar3 = (uint *)(param_1 + 0x80);
      FUN_1097c54b0(puVar3,1);
      iVar2 = (int)puVar3;
      if (iVar2 == 0) {
        uVar4 = *(uint *)(param_1 + 0x84);
        *(uint *)(param_1 + 0x84) = uVar4 + 1;
        *(ulong *)(param_1 + 0x98) =
             *(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * (ulong)uVar4;
        *(undefined4 *)(param_1 + 0xa0) = 0xfffffffe;
        *(undefined8 *)(param_1 + 0xac) = 0;
        *(undefined8 *)(param_1 + 0xa4) = 0;
        *(undefined8 *)(param_1 + 0xbc) = 0;
        *(undefined8 *)(param_1 + 0xb4) = 0;
        return puVar3;
      }
      if (iVar2 != 0) {
        _pthread_mutex_lock(0x1132e0448);
        if (*(int *)(param_1 + 4) == 0) {
          *(int *)(param_1 + 4) = iVar2;
        }
        _pthread_mutex_unlock(0x1132e0448);
      }
      return puVar3;
    }
    uVar4 = 0x24;
  }
  else {
    uVar4 = 0xe;
  }
  _pthread_mutex_lock(0x1132e0448);
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    *puVar3 = uVar4;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return (uint *)(ulong)uVar1;
}



/* Entry: 1097e49a0; end: 1097e4c27;  */

double * FUN_1097e49a0(double *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double **ppdVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  long lVar11;
  double dVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  double **ppdVar16;
  long lVar17;
  double *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar18;
  uint *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *puVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  code *pcStack_98;
  double *pdStack_90;
  double *pdStack_88;
  double *pdStack_80;
  double *pdStack_78;
  double *pdStack_70;
  double *pdStack_68;
  double *pdStack_60;
  double *pdStack_58;
  double *pdStack_50;
  long lStack_48;
  
  ppdVar7 = &pdStack_90;
  puVar19 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar8 = (double *)((long)param_1 + 4);
  puVar18 = unaff_x20;
  if (*(uint *)pdVar8 == 0) {
    pdVar9 = pdVar8;
    if (*(uint *)(param_1 + 6) == 4) {
      puVar18 = (undefined8 *)param_1[0x13];
      if ((puVar18 != (undefined8 *)0x0) && (*(uint *)(param_1 + 0x14) != 0xfffffffe)) {
        if ((int)*(uint *)(param_1 + 0x14) < 3) {
          pdVar8 = param_1;
          FUN_1097e4c28(*puVar18,puVar18[1]);
          uVar10 = *(uint *)(param_1 + 0x14);
          if ((int)uVar10 < 3) {
            unaff_x21 = (uint *)((long)param_1 + 0xb4);
            unaff_x22 = puVar18 + 0x20;
            do {
              lVar11 = (long)(int)uVar10 + 1;
              if (unaff_x21[lVar11] == 0) {
                puVar14 = unaff_x22 + lVar11 * 5;
                uVar3 = *unaff_x22;
                uVar4 = puVar18[0x21];
                uVar5 = puVar18[0x22];
                uVar6 = puVar18[0x23];
                puVar14[4] = puVar18[0x24];
                puVar14[1] = uVar4;
                *puVar14 = uVar3;
                puVar14[3] = uVar6;
                puVar14[2] = uVar5;
                unaff_x21[lVar11] = 1;
                if (2 < (int)*(uint *)(param_1 + 0x14)) break;
              }
              pdVar8 = param_1;
              FUN_1097e4c28(*puVar18,puVar18[1]);
              uVar10 = *(uint *)(param_1 + 0x14);
            } while ((int)uVar10 < 3);
          }
        }
        lVar11 = 0;
        auVar21 = NEON_fmov(0x4018000000000000,8);
        auVar23 = NEON_fmov(0xc010000000000000,8);
        auVar25 = NEON_fmov(0xc000000000000000,8);
        auVar27 = NEON_fmov(0x4008000000000000,8);
        do {
          if (*(int *)((long)param_1 + lVar11 * 4 + 0xa4) == 0) {
            lVar15 = 0;
            uVar10 = *(uint *)(&UNK_10dffe968 + lVar11 * 4);
            uVar13 = *(uint *)(&UNK_10dffe978 + lVar11 * 4);
            ppdVar16 = &pdStack_90;
            do {
              lVar17 = 0;
              do {
                *(undefined8 **)((long)ppdVar16 + lVar17 * 8) =
                     puVar18 + (long)(int)(uVar10 ^ (uint)lVar15) * 8 +
                               (long)(int)(uVar13 ^ (uint)lVar17) * 2;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 3);
              lVar15 = lVar15 + 1;
              ppdVar16 = (double **)((long)ppdVar16 + 0x18);
            } while (lVar15 != 3);
            dVar20 = *pdStack_70;
            dVar12 = *pdStack_78;
            dVar28 = *pdStack_88;
            dVar22 = *pdStack_68;
            dVar29 = *pdStack_58;
            dVar24 = *pdStack_60;
            dVar30 = *pdStack_80;
            dVar26 = *pdStack_50;
            pdStack_90[1] =
                 (((pdStack_78[1] + pdStack_88[1]) * auVar21._8_8_ + auVar23._8_8_ * pdStack_70[1] +
                   auVar25._8_8_ * (pdStack_68[1] + pdStack_58[1]) +
                  auVar27._8_8_ * (pdStack_60[1] + pdStack_80[1])) - pdStack_50[1]) *
                 0.1111111111111111;
            *pdStack_90 = (((dVar12 + dVar28) * auVar21._0_8_ + auVar23._0_8_ * dVar20 +
                            auVar25._0_8_ * (dVar22 + dVar29) + auVar27._0_8_ * (dVar24 + dVar30)) -
                          dVar26) * 0.1111111111111111;
            pdVar8 = pdStack_50;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
        lVar11 = 0;
        puVar14 = puVar18 + 0x20;
        do {
          if (*(int *)((long)param_1 + lVar11 + 0xb4) == 0) {
            puVar14[4] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
          }
          lVar11 = lVar11 + 4;
          puVar14 = puVar14 + 5;
        } while (lVar11 != 0x10);
        param_1[0x13] = 0.0;
        goto LAB_1097e4b98;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        uVar10 = 0x24;
        ppdVar7 = (double **)register0x00000008;
        param_1 = unaff_x19;
        puVar19 = unaff_x29;
        goto FUN_1097c5788;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      uVar10 = 0xe;
      ppdVar7 = (double **)register0x00000008;
      param_1 = unaff_x19;
      puVar19 = unaff_x29;
      goto FUN_1097c5788;
    }
  }
  else {
LAB_1097e4b98:
    pdVar9 = pdVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pdVar8;
    }
  }
  unaff_x20 = puVar18;
  unaff_x30 = FUN_1097e4c28;
  auVar21 = ___stack_chk_fail();
  pdVar8 = (double *)((long)pdVar9 + 4);
  if (*(uint *)pdVar8 != 0) {
    return pdVar9;
  }
  if (*(uint *)(pdVar9 + 6) == 4) {
    if (pdVar9[0x13] != 0.0) {
      uVar10 = *(uint *)(pdVar9 + 0x14);
      if (uVar10 == 0xfffffffe) {
        pdVar8 = (double *)((long)pdVar9 + 4);
        if (*(uint *)pdVar8 != 0) {
          return pdVar8;
        }
        if (*(uint *)(pdVar9 + 6) == 4) {
          if (((undefined1 (*) [16])pdVar9[0x13] != (undefined1 (*) [16])0x0) &&
             ((int)*(uint *)(pdVar9 + 0x14) < 0)) {
            *(uint *)(pdVar9 + 0x14) = 0xffffffff;
            *(undefined1 (*) [16])pdVar9[0x13] = auVar21;
            return pdVar8;
          }
          uVar10 = 0x24;
          ppdVar7 = &pdStack_90;
        }
        else {
          uVar10 = 0xe;
          ppdVar7 = &pdStack_90;
        }
        goto FUN_1097c5788;
      }
      if (uVar10 != 3) {
        iVar1 = uVar10 * 3 + 3;
        pdVar8 = (double *)
                 ((long)pdVar9[0x13] + (long)*(int *)(&UNK_10dffe908 + (long)iVar1 * 4) * 0x40 +
                 (long)*(int *)(&UNK_10dffe938 + (long)iVar1 * 4) * 0x10);
        dVar24 = *pdVar8;
        dVar26 = pdVar8[1];
        dVar20 = (auVar21._0_8_ + dVar24 * 2.0) * 0.3333333333333333;
        dVar22 = (auVar21._8_8_ + dVar26 * 2.0) * 0.3333333333333333;
        pcStack_98 = FUN_1097e4c28;
        pdVar8 = (double *)((long)pdVar9 + 4);
        if (*(uint *)pdVar8 != 0) {
          return pdVar8;
        }
        unaff_x30 = pcStack_98;
        if (*(uint *)(pdVar9 + 6) != 4) {
          uVar10 = 0xe;
          goto FUN_1097c5788;
        }
        dVar12 = pdVar9[0x13];
        if (dVar12 != 0.0) {
          uVar10 = *(uint *)(pdVar9 + 0x14);
          if (uVar10 == 0xfffffffe) {
            pdVar8 = pdVar9;
            FUN_1097e4e2c(dVar20,dVar22,pdVar9);
            uVar10 = *(uint *)(pdVar9 + 0x14);
            dVar12 = pdVar9[0x13];
LAB_1097e4d78:
            uVar13 = (uint)((long)(int)uVar10 + 1);
            *(uint *)(pdVar9 + 0x14) = uVar13;
            lVar11 = ((long)(int)uVar10 + 1) * 0xc;
            pdVar9 = (double *)
                     ((long)dVar12 + (long)*(int *)(&UNK_10dffe90c + lVar11) * 0x40 +
                     (long)*(int *)(&UNK_10dffe93c + lVar11) * 0x10);
            lVar11 = (long)(int)(uVar13 * 3) * 4;
            iVar1 = *(int *)(&UNK_10dffe910 + lVar11);
            iVar2 = *(int *)(&UNK_10dffe940 + lVar11);
            *pdVar9 = dVar20;
            pdVar9[1] = dVar22;
            pdVar9 = (double *)((long)dVar12 + (long)iVar1 * 0x40 + (long)iVar2 * 0x10);
            *pdVar9 = (dVar24 + auVar21._0_8_ * 2.0) * 0.3333333333333333;
            pdVar9[1] = (dVar26 + auVar21._8_8_ * 2.0) * 0.3333333333333333;
            if ((int)uVar10 < 2) {
              *(undefined1 (*) [16])
               ((long)dVar12 + (long)*(int *)(&UNK_10dffe914 + lVar11) * 0x40 +
               (long)*(int *)(&UNK_10dffe944 + lVar11) * 0x10) = auVar21;
            }
            return pdVar8;
          }
          if (uVar10 != 3) goto LAB_1097e4d78;
        }
        uVar10 = 0x24;
        ppdVar7 = &pdStack_90;
        goto FUN_1097c5788;
      }
    }
    uVar10 = 0x24;
    ppdVar7 = &pdStack_90;
  }
  else {
    uVar10 = 0xe;
    ppdVar7 = &pdStack_90;
  }
FUN_1097c5788:
  *(undefined8 **)((long)ppdVar7 + -0x30) = unaff_x22;
  *(uint **)((long)ppdVar7 + -0x28) = unaff_x21;
  *(undefined8 **)((long)ppdVar7 + -0x20) = unaff_x20;
  *(double **)((long)ppdVar7 + -0x18) = param_1;
  *(undefined1 **)((long)ppdVar7 + -0x10) = puVar19;
  *(code **)((long)ppdVar7 + -8) = unaff_x30;
  _pthread_mutex_lock(0x1132e0448);
  uVar13 = *(uint *)pdVar8;
  if (uVar13 == 0) {
    *(uint *)pdVar8 = uVar10;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return (double *)(ulong)uVar13;
}



/* Entry: 1097e4c28; end: 1097e4cef;  */

int * FUN_1097e4c28(double param_1,double param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (param_3[1] != 0) {
    return param_3;
  }
  if (param_3[0xc] == 4) {
    if (*(long *)(param_3 + 0x26) != 0) {
      iVar6 = param_3[0x28];
      if (iVar6 == -2) {
        piVar3 = param_3 + 1;
        if (*piVar3 != 0) {
          return piVar3;
        }
        if (param_3[0xc] == 4) {
          pdVar7 = *(double **)(param_3 + 0x26);
          if ((pdVar7 != (double *)0x0) && (param_3[0x28] < 0)) {
            param_3[0x28] = -1;
            *pdVar7 = param_1;
            pdVar7[1] = param_2;
            return piVar3;
          }
          uVar4 = 0x24;
        }
        else {
          uVar4 = 0xe;
        }
        goto FUN_1097c5788;
      }
      if (iVar6 != 3) {
        iVar6 = iVar6 * 3 + 3;
        pdVar7 = (double *)
                 (*(long *)(param_3 + 0x26) +
                  (long)*(int *)(&UNK_10dffe908 + (long)iVar6 * 4) * 0x40 +
                 (long)*(int *)(&UNK_10dffe938 + (long)iVar6 * 4) * 0x10);
        dVar12 = *pdVar7;
        dVar13 = pdVar7[1];
        dVar10 = (param_1 + dVar12 * 2.0) * 0.3333333333333333;
        dVar11 = (param_2 + dVar13 * 2.0) * 0.3333333333333333;
        piVar3 = param_3 + 1;
        if (*piVar3 != 0) {
          return piVar3;
        }
        if (param_3[0xc] != 4) {
          uVar4 = 0xe;
          goto FUN_1097c5788;
        }
        lVar5 = *(long *)(param_3 + 0x26);
        if (lVar5 != 0) {
          iVar6 = param_3[0x28];
          if (iVar6 == -2) {
            piVar3 = param_3;
            FUN_1097e4e2c(dVar10,dVar11,param_3);
            iVar6 = param_3[0x28];
            lVar5 = *(long *)(param_3 + 0x26);
LAB_1097e4d78:
            iVar8 = (int)((long)iVar6 + 1);
            param_3[0x28] = iVar8;
            lVar9 = ((long)iVar6 + 1) * 0xc;
            pdVar7 = (double *)
                     (lVar5 + (long)*(int *)(&UNK_10dffe90c + lVar9) * 0x40 +
                     (long)*(int *)(&UNK_10dffe93c + lVar9) * 0x10);
            lVar9 = (long)(iVar8 * 3) * 4;
            iVar8 = *(int *)(&UNK_10dffe910 + lVar9);
            iVar2 = *(int *)(&UNK_10dffe940 + lVar9);
            *pdVar7 = dVar10;
            pdVar7[1] = dVar11;
            pdVar7 = (double *)(lVar5 + (long)iVar8 * 0x40 + (long)iVar2 * 0x10);
            *pdVar7 = (dVar12 + param_1 * 2.0) * 0.3333333333333333;
            pdVar7[1] = (dVar13 + param_2 * 2.0) * 0.3333333333333333;
            if (iVar6 < 2) {
              pdVar7 = (double *)
                       (lVar5 + (long)*(int *)(&UNK_10dffe914 + lVar9) * 0x40 +
                       (long)*(int *)(&UNK_10dffe944 + lVar9) * 0x10);
              *pdVar7 = param_1;
              pdVar7[1] = param_2;
            }
            return piVar3;
          }
          if (iVar6 != 3) goto LAB_1097e4d78;
        }
        uVar4 = 0x24;
        goto FUN_1097c5788;
      }
    }
    uVar4 = 0x24;
  }
  else {
    uVar4 = 0xe;
  }
FUN_1097c5788:
  _pthread_mutex_lock(0x1132e0448);
  uVar1 = param_3[1];
  if (uVar1 == 0) {
    param_3[1] = uVar4;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return (int *)(ulong)uVar1;
}



/* Entry: 1097e4cf0; end: 1097e4e2b;  */

uint * FUN_1097e4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,uint *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  puVar4 = param_7 + 1;
  if (*puVar4 != 0) {
    return puVar4;
  }
  if (param_7[0xc] == 4) {
    lVar5 = *(long *)(param_7 + 0x26);
    if (lVar5 != 0) {
      uVar6 = param_7[0x28];
      if (uVar6 == 0xfffffffe) {
        puVar4 = param_7;
        FUN_1097e4e2c(param_1,param_2,param_7);
        uVar6 = param_7[0x28];
        lVar5 = *(long *)(param_7 + 0x26);
LAB_1097e4d78:
        uVar7 = (uint)((long)(int)uVar6 + 1);
        param_7[0x28] = uVar7;
        lVar8 = ((long)(int)uVar6 + 1) * 0xc;
        puVar1 = (undefined8 *)
                 (lVar5 + (long)*(int *)(&UNK_10dffe90c + lVar8) * 0x40 +
                 (long)*(int *)(&UNK_10dffe93c + lVar8) * 0x10);
        lVar8 = (long)(int)(uVar7 * 3) * 4;
        iVar2 = *(int *)(&UNK_10dffe910 + lVar8);
        iVar3 = *(int *)(&UNK_10dffe940 + lVar8);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        puVar1 = (undefined8 *)(lVar5 + (long)iVar2 * 0x40 + (long)iVar3 * 0x10);
        *puVar1 = param_3;
        puVar1[1] = param_4;
        if ((int)uVar6 < 2) {
          puVar1 = (undefined8 *)
                   (lVar5 + (long)*(int *)(&UNK_10dffe914 + lVar8) * 0x40 +
                   (long)*(int *)(&UNK_10dffe944 + lVar8) * 0x10);
          *puVar1 = param_5;
          puVar1[1] = param_6;
        }
        return puVar4;
      }
      if (uVar6 != 3) goto LAB_1097e4d78;
    }
    uVar6 = 0x24;
  }
  else {
    uVar6 = 0xe;
  }
  _pthread_mutex_lock(0x1132e0448);
  uVar7 = *puVar4;
  if (uVar7 == 0) {
    *puVar4 = uVar6;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return (uint *)(ulong)uVar7;
}



/* Entry: 1097e4e2c; end: 1097e4f77;  */

uint * FUN_1097e4e2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar2 = (uint *)(param_3 + 4);
  if (*puVar2 != 0) {
    return puVar2;
  }
  if (*(int *)(param_3 + 0x30) == 4) {
    puVar4 = *(undefined8 **)(param_3 + 0x98);
    if ((puVar4 != (undefined8 *)0x0) && (*(int *)(param_3 + 0xa0) < 0)) {
      *(undefined4 *)(param_3 + 0xa0) = 0xffffffff;
      *puVar4 = param_1;
      puVar4[1] = param_2;
      return puVar2;
    }
    uVar3 = 0x24;
  }
  else {
    uVar3 = 0xe;
  }
  _pthread_mutex_lock(0x1132e0448);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    *puVar2 = uVar3;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return (uint *)(ulong)uVar1;
}



/* Entry: 1097e4f78; end: 1097e51d7;  */

double * FUN_1097e4f78(double param_1,double param_2,double param_3,double param_4,double param_5,
                      double *param_6)

{
  uint uVar1;
  double *pdVar2;
  uint uVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  double *pdVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (*(int *)((long)param_6 + 4) != 0) {
    return param_6;
  }
  if (((ulong)param_6[6] & 0xfffffffe) != 2) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)param_6 + 4) == 0) {
      *(undefined4 *)((long)param_6 + 4) = 0xe;
    }
    pdVar7 = (double *)0x1132e0448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132e0448);
    return pdVar7;
  }
  dVar9 = 1.0;
  if (param_1 <= 1.0) {
    dVar9 = param_1;
  }
  dVar14 = 0.0;
  if (0.0 <= param_1) {
    dVar14 = dVar9;
  }
  dVar9 = 1.0;
  if (param_2 <= 1.0) {
    dVar9 = param_2;
  }
  dVar10 = 0.0;
  if (0.0 <= param_2) {
    dVar10 = dVar9;
  }
  dVar9 = 1.0;
  if (param_3 <= 1.0) {
    dVar9 = param_3;
  }
  dVar11 = 0.0;
  if (0.0 <= param_3) {
    dVar11 = dVar9;
  }
  dVar9 = 1.0;
  if (param_4 <= 1.0) {
    dVar9 = param_4;
  }
  dVar12 = 0.0;
  if (0.0 <= param_4) {
    dVar12 = dVar9;
  }
  dVar9 = 1.0;
  if (param_5 <= 1.0) {
    dVar9 = param_5;
  }
  dVar13 = 0.0;
  if (0.0 <= param_5) {
    dVar13 = dVar9;
  }
  uVar8 = *(uint *)(param_6 + 0x10);
  uVar1 = *(uint *)((long)param_6 + 0x84);
  pdVar7 = param_6;
  if (uVar8 < uVar1) {
    pdVar5 = (double *)param_6[0x11];
  }
  else {
    uVar3 = uVar1;
    if ((int)uVar1 < 5) {
      uVar3 = 4;
    }
    if ((int)uVar1 < 2) {
      pdVar5 = param_6 + 0x12;
      param_6[0x11] = (double)pdVar5;
      uVar3 = 2;
    }
    else {
      uVar3 = uVar3 << 1;
      pdVar7 = (double *)param_6[0x11];
      pdVar5 = (double *)((ulong)uVar3 * 0x30);
      if (pdVar7 == param_6 + 0x12) {
        _malloc();
        if (pdVar5 == (double *)0x0) goto FUN_1097e4220;
        pdVar7 = pdVar5;
        _memcpy();
      }
      else {
        _realloc();
        if (pdVar7 == (double *)0x0) {
FUN_1097e4220:
          _pthread_mutex_lock(0x1132e0448);
          if (*(int *)((long)param_6 + 4) == 0) {
            *(undefined4 *)((long)param_6 + 4) = 1;
          }
          _pthread_mutex_unlock(0x1132e0448);
          return (double *)0x1;
        }
        uVar8 = *(uint *)(param_6 + 0x10);
        pdVar5 = pdVar7;
      }
      param_6[0x11] = (double)pdVar5;
    }
    *(uint *)((long)param_6 + 0x84) = uVar3;
  }
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = (ulong)uVar8;
    pdVar2 = pdVar5;
    do {
      if (dVar14 < *pdVar2) {
        pdVar7 = pdVar2 + 6;
        _memmove(pdVar7,pdVar2,(ulong)(uVar8 - (int)uVar6) * 0x30);
        uVar8 = *(uint *)(param_6 + 0x10);
        uVar4 = uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
      pdVar2 = pdVar2 + 6;
    } while (uVar4 != uVar6);
  }
  pdVar5 = pdVar5 + (uVar4 & 0xffffffff) * 6;
  *pdVar5 = dVar14;
  pdVar5[1] = dVar10;
  pdVar5[2] = dVar11;
  pdVar5[3] = dVar12;
  pdVar5[4] = dVar13;
  *(short *)(pdVar5 + 5) = (short)(int)(dVar10 * 65535.0 + 0.5);
  *(short *)((long)pdVar5 + 0x2a) = (short)(int)(dVar11 * 65535.0 + 0.5);
  *(short *)((long)pdVar5 + 0x2c) = (short)(int)(dVar12 * 65535.0 + 0.5);
  *(short *)((long)pdVar5 + 0x2e) = (short)(int)(dVar13 * 65535.0 + 0.5);
  *(uint *)(param_6 + 0x10) = uVar8 + 1;
  return pdVar7;
}



/* Entry: 1097e51d8; end: 1097e5297;  */

undefined1 * FUN_1097e51d8(undefined1 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_60;
  puVar2 = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = param_1 + 0x48;
    _memcmp(puVar2,param_2,0x30);
    if ((int)puVar2 != 0) {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      uVar9 = param_2[4];
      *(undefined8 *)(param_1 + 0x70) = param_2[5];
      *(undefined8 *)(param_1 + 0x68) = uVar9;
      *(undefined8 *)(param_1 + 0x60) = uVar8;
      *(undefined8 *)(param_1 + 0x58) = uVar7;
      *(undefined8 *)(param_1 + 0x50) = uVar6;
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      for (puVar4 = *(undefined8 **)(param_1 + 0x20); puVar4 != (undefined8 *)(param_1 + 0x20);
          puVar4 = (undefined8 *)*puVar4) {
        (*(code *)puVar4[-1])(puVar4 + -1,param_1,1);
      }
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      uStack_38 = param_2[5];
      uStack_40 = param_2[4];
      FUN_1097d95c8();
      iVar1 = (int)puVar3;
      puVar2 = (undefined1 *)puVar3;
      if (iVar1 != 0) {
        if (iVar1 != 0) {
          _pthread_mutex_lock(0x1132e0448);
          if (*(int *)(param_1 + 4) == 0) {
            *(int *)(param_1 + 4) = iVar1;
          }
          _pthread_mutex_unlock(0x1132e0448);
        }
        return (undefined1 *)puVar3;
      }
    }
  }
  return puVar2;
}



/* Entry: 1097e5298; end: 1097e531f;  */

void FUN_1097e5298(double param_1,double param_2,double param_3,double param_4,long param_5,
                  double *param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *(double *)(param_5 + 0x100) - *(double *)(param_5 + 0xf0);
  dVar3 = *(double *)(param_5 + 0x108) - *(double *)(param_5 + 0xf8);
  dVar4 = 1.0 / (dVar3 * dVar3 + dVar2 * dVar2);
  dVar2 = dVar2 * dVar4;
  dVar3 = dVar3 * dVar4;
  dVar4 = (param_2 - *(double *)(param_5 + 0xf8)) * dVar3 +
          dVar2 * (param_1 - *(double *)(param_5 + 0xf0));
  dVar2 = (param_3 - param_1) * dVar2;
  dVar3 = (param_4 - param_2) * dVar3;
  *param_6 = dVar4;
  param_6[1] = dVar4;
  lVar1 = 0;
  if (dVar2 >= 0.0) {
    lVar1 = 8;
  }
  *(double *)((long)param_6 + lVar1) = dVar2 + dVar4;
  lVar1 = 0;
  if (dVar3 >= 0.0) {
    lVar1 = 8;
  }
  if (dVar2 < 0.0 == dVar3 < 0.0) {
    dVar4 = dVar2 + dVar4;
  }
  *(double *)((long)param_6 + lVar1) = dVar3 + dVar4;
  return;
}



/* Entry: 1097e5320; end: 1097e54ef;  */

void FUN_1097e5320(double param_1,long param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double adStack_40 [4];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_2 + 0x30) == 2) {
    dVar6 = *(double *)(param_2 + 0xf0);
    param_4[1] = *(double *)(param_2 + 0xf8);
    *param_4 = dVar6;
    param_4[2] = 0.0;
    dVar6 = *(double *)(param_2 + 0x100);
    param_4[4] = *(double *)(param_2 + 0x108);
    param_4[3] = dVar6;
    param_4[5] = 0.0;
    adStack_40[0] = ABS(*(double *)(param_2 + 0xf0));
    dVar6 = ABS(*(double *)(param_2 + 0xf8));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x100));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x108));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0xf0) - *(double *)(param_2 + 0x100));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = *(double *)(param_2 + 0xf8) - *(double *)(param_2 + 0x108);
  }
  else {
    dVar2 = *(double *)(param_2 + 0xf8);
    dVar6 = *(double *)(param_2 + 0xf0);
    param_4[2] = *(double *)(param_2 + 0x100);
    param_4[1] = dVar2;
    *param_4 = dVar6;
    dVar2 = *(double *)(param_2 + 0x110);
    dVar6 = *(double *)(param_2 + 0x108);
    param_4[5] = *(double *)(param_2 + 0x118);
    param_4[4] = dVar2;
    param_4[3] = dVar6;
    adStack_40[0] = ABS(*(double *)(param_2 + 0xf0));
    dVar6 = ABS(*(double *)(param_2 + 0xf8));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x100));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x108));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x110));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0x118));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0xf0) - *(double *)(param_2 + 0x108));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = ABS(*(double *)(param_2 + 0xf8) - *(double *)(param_2 + 0x110));
    if (adStack_40[0] <= dVar6) {
      adStack_40[0] = dVar6;
    }
    dVar6 = *(double *)(param_2 + 0x100) - *(double *)(param_2 + 0x118);
  }
  if (adStack_40[0] <= ABS(dVar6)) {
    adStack_40[0] = ABS(dVar6);
  }
  pdVar1 = (double *)(param_2 + 0x48);
  if (adStack_40[0] <= ABS(*pdVar1)) {
    adStack_40[0] = ABS(*pdVar1);
  }
  if (adStack_40[0] <= ABS(*(double *)(param_2 + 0x58))) {
    adStack_40[0] = ABS(*(double *)(param_2 + 0x58));
  }
  if (adStack_40[0] <= ABS(*(double *)(param_2 + 0x68))) {
    adStack_40[0] = ABS(*(double *)(param_2 + 0x68));
  }
  if (adStack_40[0] <= ABS(*(double *)(param_2 + 0x50))) {
    adStack_40[0] = ABS(*(double *)(param_2 + 0x50));
  }
  if (adStack_40[0] <= ABS(*(double *)(param_2 + 0x60))) {
    adStack_40[0] = ABS(*(double *)(param_2 + 0x60));
  }
  if (adStack_40[0] <= ABS(*(double *)(param_2 + 0x70))) {
    adStack_40[0] = ABS(*(double *)(param_2 + 0x70));
  }
  if (adStack_40[0] <= param_1) {
    dVar2 = *(double *)(param_2 + 0x50);
    dVar6 = *pdVar1;
    dVar3 = *(double *)(param_2 + 0x58);
    dVar5 = *(double *)(param_2 + 0x70);
    dVar4 = *(double *)(param_2 + 0x68);
    param_3[3] = *(double *)(param_2 + 0x60);
    param_3[2] = dVar3;
    param_3[5] = dVar5;
    param_3[4] = dVar4;
    param_3[1] = dVar2;
    *param_3 = dVar6;
    return;
  }
  adStack_40[0] = param_1 / adStack_40[0];
  param_4[1] = param_4[1] * adStack_40[0];
  *param_4 = *param_4 * adStack_40[0];
  param_4[3] = param_4[3] * adStack_40[0];
  param_4[2] = param_4[2] * adStack_40[0];
  param_4[5] = param_4[5] * adStack_40[0];
  param_4[4] = param_4[4] * adStack_40[0];
  adStack_40[1] = 0.0;
  adStack_40[2] = 0.0;
  uStack_20 = 0;
  uStack_18 = 0;
  adStack_40[3] = adStack_40[0];
  func_0x0001097d92b4(param_3,pdVar1,adStack_40);
  return;
}



/* Entry: 1097e54f0; end: 1097e558f;  */

undefined8
FUN_1097e54f0(long param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  ulong uVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*(uint *)(param_1 + 0x84) != 0) {
    uVar1 = 0;
    dVar8 = **(double **)(param_1 + 0x90);
    pdVar2 = *(double **)(param_1 + 0x90) + 1;
    dVar7 = *pdVar2;
    dVar9 = dVar7;
    dVar10 = dVar8;
    do {
      lVar3 = 0;
      pdVar4 = pdVar2;
      do {
        lVar6 = 4;
        pdVar5 = pdVar4;
        do {
          dVar11 = pdVar5[-1];
          dVar12 = *pdVar5;
          if (dVar11 <= dVar10) {
            dVar10 = dVar11;
          }
          if (dVar12 <= dVar9) {
            dVar9 = dVar12;
          }
          if (dVar8 <= dVar11) {
            dVar8 = dVar11;
          }
          if (dVar7 <= dVar12) {
            dVar7 = dVar12;
          }
          pdVar5 = pdVar5 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar3 = lVar3 + 1;
        pdVar4 = pdVar4 + 8;
      } while (lVar3 != 4);
      uVar1 = uVar1 + 1;
      pdVar2 = pdVar2 + 0x34;
    } while (uVar1 != *(uint *)(param_1 + 0x84));
    *param_2 = dVar10;
    *param_3 = dVar9;
    *param_4 = dVar8;
    *param_5 = dVar7;
    return 1;
  }
  return 0;
}



/* Entry: 1097e5590; end: 1097e5817;  */

ulong FUN_1097e5590(long param_1,int *param_2,double *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ushort *puVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  double *unaff_x19;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dStack_98;
  int iStack_90;
  int iStack_8c;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  long lStack_70;
  double *pdStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  double dStack_48;
  double dStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x30) != 2) goto LAB_1097e5688;
  unaff_x19 = param_3;
  if ((2.220446049250313e-16 <= ABS(*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x100))) ||
     (2.220446049250313e-16 <= ABS(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x108)))) {
    if (*(int *)(param_1 + 0x38) != 0) {
LAB_1097e5604:
      puVar1 = (uint *)(param_1 + 0x80);
      lVar16 = *(long *)(param_1 + 0x88);
      if (1 < *puVar1) {
        param_1 = lVar16 + 0x38;
        lVar17 = (ulong)*puVar1 - 1;
        do {
          uVar8 = lVar16 + 8;
          func_0x0001097cb294(uVar8,param_1);
          if ((int)uVar8 == 0) goto LAB_1097e56b8;
          param_1 = param_1 + 0x30;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      dVar19 = *(double *)(lVar16 + 0x10);
      dVar18 = *(double *)(lVar16 + 8);
      dVar21 = *(double *)(lVar16 + 0x20);
      dVar20 = *(double *)(lVar16 + 0x18);
      goto LAB_1097e56a8;
    }
    unaff_x20 = param_1;
    if (param_2 != (int *)0x0) {
      FUN_1097e5298((double)*param_2,(double)param_2[1],(double)(param_2[2] + *param_2),
                    (double)(param_2[3] + param_2[1]),param_1,&dStack_48);
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      if (0.0 <= dStack_48) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(dStack_40)) {
          bVar5 = dStack_40 < 1.0;
          bVar6 = dStack_40 == 1.0;
          bVar7 = false;
        }
      }
      if (bVar6 || bVar5 != bVar7) goto LAB_1097e5604;
    }
LAB_1097e5688:
    param_1 = unaff_x20;
    uVar8 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80);
    uVar4 = iVar3 - 1;
    uVar8 = (ulong)uVar4;
    if (uVar4 == 0) {
      lVar16 = *(long *)(param_1 + 0x88);
      dVar19 = *(double *)(lVar16 + 0x10);
      dVar18 = *(double *)(lVar16 + 8);
      dVar21 = *(double *)(lVar16 + 0x20);
      dVar20 = *(double *)(lVar16 + 0x18);
LAB_1097e56a8:
      param_3[1] = dVar19;
      *param_3 = dVar18;
      param_3[3] = dVar21;
      param_3[2] = dVar20;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 1) {
        pdVar12 = *(double **)(param_1 + 0x88);
        dVar19 = (pdVar12[6] + 1.0) - pdVar12[uVar8 * 6];
        dVar18 = *pdVar12 + 1.0;
        uVar15 = (ulong)(iVar3 - 2);
LAB_1097e5774:
        dVar18 = dVar18 - pdVar12[uVar15 * 6];
        uVar14 = 1;
      }
      else {
        if (iVar2 == 2) {
          pdVar12 = *(double **)(param_1 + 0x88);
          dVar19 = *pdVar12 + pdVar12[6];
          dVar18 = 2.0 - pdVar12[(ulong)(iVar3 - 2) * 6];
          uVar15 = uVar8;
          goto LAB_1097e5774;
        }
        if (iVar2 != 3) {
          param_3[1] = 0.0;
          *param_3 = 0.0;
          param_3[3] = 0.0;
          param_3[2] = 0.0;
          goto LAB_1097e56ac;
        }
        pdVar12 = *(double **)(param_1 + 0x88);
        dVar18 = 1.0;
        dVar19 = 1.0;
        uVar14 = uVar4;
      }
      dVar21 = pdVar12[1] * dVar19;
      dVar22 = pdVar12[2] * dVar19;
      dVar20 = pdVar12[3] * dVar19;
      dVar19 = pdVar12[4] * dVar19;
      if (uVar14 < uVar4) {
        pdVar13 = pdVar12 + (ulong)uVar14 * 6 + 3;
        uVar15 = (ulong)uVar14 + 0xffffffff;
        lVar16 = uVar8 - uVar14;
        do {
          dVar23 = pdVar13[3] - pdVar12[(uVar15 & 0xffffffff) * 6];
          dVar21 = dVar21 + pdVar13[-2] * dVar23;
          dVar22 = dVar22 + pdVar13[-1] * dVar23;
          dVar20 = dVar20 + *pdVar13 * dVar23;
          dVar19 = dVar19 + pdVar13[1] * dVar23;
          pdVar13 = pdVar13 + 6;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      dVar23 = pdVar12[(ulong)uVar4 * 6 + 1];
      auVar24 = NEON_fmov(0x3fe0000000000000,8);
      dVar26 = pdVar12[(ulong)uVar4 * 6 + 4];
      dVar25 = pdVar12[(ulong)uVar4 * 6 + 3];
      param_3[1] = (dVar22 + pdVar12[(ulong)uVar4 * 6 + 2] * dVar18) * auVar24._8_8_;
      *param_3 = (dVar21 + dVar23 * dVar18) * auVar24._0_8_;
      param_3[3] = (dVar19 + dVar26 * dVar18) * auVar24._8_8_;
      param_3[2] = (dVar20 + dVar25 * dVar18) * auVar24._0_8_;
    }
LAB_1097e56ac:
    func_0x0001097cb1e0(param_3);
    uVar8 = 1;
  }
LAB_1097e56b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar8;
  }
  ___stack_chk_fail();
  if (*(int *)(uVar8 + 0x3c) != 0) {
    return 0;
  }
  pcStack_58 = FUN_1097e5818;
  iVar3 = *(int *)(uVar8 + 0x30);
  lStack_70 = param_1;
  pdStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      return (ulong)(*(ushort *)(uVar8 + 0xa6) < 0x100);
    }
    if (iVar3 != 1) {
      return 0;
    }
    uVar9 = *(undefined8 *)(uVar8 + 0x80);
    func_0x0001097f6fa4(uVar9,&dStack_98);
    if ((int)uVar9 != 0) {
      if (iStack_90 == 0) {
        return 1;
      }
      if (iStack_8c == 0) {
        return 1;
      }
    }
    if ((*(byte *)(*(long *)(uVar8 + 0x80) + 0x30) >> 2 & 1) == 0) {
      return 0;
    }
    return (ulong)(*(uint *)(*(long *)(uVar8 + 0x80) + 0x14) >> 0xd & 1);
  }
  if (1 < iVar3 - 2U) {
    if (iVar3 == 4) {
      FUN_1097e54f0(uVar8,&dStack_98,&dStack_78,&dStack_80,&dStack_88);
      if ((int)uVar8 == 0) {
        return 1;
      }
      if (dStack_80 - dStack_98 < 2.220446049250313e-16) {
        return 1;
      }
      if (dStack_88 - dStack_78 < 2.220446049250313e-16) {
        return 1;
      }
      return 0;
    }
    if (iVar3 != 5) {
      return 0;
    }
    if (*(int *)(uVar8 + 0x8c) == 0) {
      return 1;
    }
    return (ulong)(*(int *)(uVar8 + 0x90) == 0);
  }
  uVar4 = *(uint *)(uVar8 + 0x80);
  uVar15 = (ulong)uVar4;
  if (uVar4 == 0) {
    return 1;
  }
  if (*(int *)(uVar8 + 0x38) == 0) {
    if (**(double **)(uVar8 + 0x88) == (*(double **)(uVar8 + 0x88))[(ulong)(uVar4 - 1) * 6]) {
      return 1;
    }
    if (iVar3 != 3) {
      if ((ABS(*(double *)(uVar8 + 0xf0) - *(double *)(uVar8 + 0x100)) < 2.220446049250313e-16) &&
         (ABS(*(double *)(uVar8 + 0xf8) - *(double *)(uVar8 + 0x108)) < 2.220446049250313e-16)) {
        return 1;
      }
      goto LAB_1097e58ec;
    }
  }
  else if (iVar3 != 3) goto LAB_1097e58ec;
  uVar10 = uVar8;
  FUN_1097e64c8();
  if ((int)uVar10 != 0) {
    return 1;
  }
LAB_1097e58ec:
  puVar11 = (ushort *)(*(long *)(uVar8 + 0x88) + 0x2e);
  do {
    if (0xff < *puVar11) {
      return 0;
    }
    uVar15 = uVar15 - 1;
    puVar11 = puVar11 + 0x18;
  } while (uVar15 != 0);
  return 1;
}



/* Entry: 1097e5818; end: 1097e59e7;  */

uint FUN_1097e5818(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  double dStack_48;
  int iStack_40;
  int iStack_3c;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return (uint)(*(ushort *)(param_1 + 0xa6) < 0x100);
    }
    if (iVar1 != 1) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x0001097f6fa4(uVar3,&dStack_48);
    if ((int)uVar3 != 0) {
      if (iStack_40 == 0) {
        return 1;
      }
      if (iStack_3c == 0) {
        return 1;
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0x80) + 0x30) >> 2 & 1) == 0) {
      return 0;
    }
    return *(uint *)(*(long *)(param_1 + 0x80) + 0x14) >> 0xd & 1;
  }
  if (1 < iVar1 - 2U) {
    if (iVar1 == 4) {
      FUN_1097e54f0(param_1,&dStack_48,&dStack_28,&dStack_30,&dStack_38);
      if ((int)param_1 == 0) {
        return 1;
      }
      if (dStack_30 - dStack_48 < 2.220446049250313e-16) {
        return 1;
      }
      if (dStack_38 - dStack_28 < 2.220446049250313e-16) {
        return 1;
      }
      return 0;
    }
    if (iVar1 != 5) {
      return 0;
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 1;
    }
    return (uint)(*(int *)(param_1 + 0x90) == 0);
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (**(double **)(param_1 + 0x88) == (*(double **)(param_1 + 0x88))[(ulong)(uVar2 - 1) * 6]) {
      return 1;
    }
    if (iVar1 != 3) {
      if ((ABS(*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x100)) < 2.220446049250313e-16)
         && (ABS(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x108)) < 2.220446049250313e-16
            )) {
        return 1;
      }
      goto LAB_1097e58ec;
    }
  }
  else if (iVar1 != 3) goto LAB_1097e58ec;
  lVar4 = param_1;
  FUN_1097e64c8();
  if ((int)lVar4 != 0) {
    return 1;
  }
LAB_1097e58ec:
  puVar5 = (ushort *)(*(long *)(param_1 + 0x88) + 0x2e);
  do {
    if (0xff < *puVar5) {
      return 0;
    }
    uVar6 = uVar6 - 1;
    puVar5 = puVar5 + 0x18;
  } while (uVar6 != 0);
  return 1;
}



/* Entry: 1097e59e8; end: 1097e5c57;  */

uint FUN_1097e59e8(long param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    uVar4 = 0;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar4 = (uint)(0xfe < *(byte *)(param_1 + 0xa7));
        goto LAB_1097e5a18;
      }
      if (iVar3 != 1) goto LAB_1097e5a18;
      lVar5 = *(long *)(param_1 + 0x80);
      if ((*(byte *)(lVar5 + 0x15) >> 5 & 1) == 0) {
        if ((*(int *)(param_1 + 0x38) != 0) ||
           (func_0x0001097f6fa4(lVar5,&iStack_48), param_1 = lVar5, (int)lVar5 == 0)) {
LAB_1097e5b2c:
          uVar4 = 1;
          goto LAB_1097e5a18;
        }
        if ((((param_2 != (int *)0x0) && (iStack_48 <= *param_2)) &&
            (param_2[2] + *param_2 <= iStack_40 + iStack_48)) &&
           (iVar3 = param_2[1], iStack_44 <= iVar3)) {
LAB_1097e5be4:
          uVar4 = (uint)(param_2[3] + iVar3 <= iStack_3c + iStack_44);
          goto LAB_1097e5a18;
        }
      }
    }
    else if (iVar3 - 2U < 2) {
      uVar1 = *(uint *)(param_1 + 0x80);
      uVar6 = (ulong)uVar1;
      if (uVar1 != 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          uVar4 = 0;
          if ((iVar3 != 2) ||
             (pdVar7 = *(double **)(param_1 + 0x88), *pdVar7 == pdVar7[(ulong)(uVar1 - 1) * 6]))
          goto LAB_1097e5a18;
          if (2.220446049250313e-16 <=
              ABS(*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x100))) {
            bVar2 = false;
          }
          else {
            bVar2 = ABS(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x108)) <
                    2.220446049250313e-16;
          }
          if ((param_2 != (int *)0x0) && (!bVar2)) {
            FUN_1097e5298((double)*param_2,(double)param_2[1],(double)(param_2[2] + *param_2),
                          (double)(param_2[3] + param_2[1]),param_1,&iStack_48);
            uVar4 = 0;
            if (((double)CONCAT44(iStack_44,iStack_48) < 0.0) ||
               (1.0 < (double)CONCAT44(iStack_3c,iStack_40))) goto LAB_1097e5a18;
            goto LAB_1097e5a80;
          }
        }
        else if (iVar3 == 2) {
          pdVar7 = *(double **)(param_1 + 0x88);
LAB_1097e5a80:
          lVar5 = (long)pdVar7 + 0x2e;
          do {
            if (*(char *)(lVar5 + 1) != -1) goto LAB_1097e5a14;
            lVar5 = lVar5 + 0x30;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          goto LAB_1097e5b2c;
        }
      }
    }
    else {
      if (iVar3 != 5) goto LAB_1097e5a18;
      if ((*(byte *)(param_1 + 0x81) >> 5 & 1) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) goto LAB_1097e5b2c;
        if (param_2 != (int *)0x0) {
          if ((*(int *)(param_1 + 0x84) <= *param_2) &&
             (param_2[2] + *param_2 <= *(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x84))) {
            iStack_44 = *(int *)(param_1 + 0x88);
            iVar3 = param_2[1];
            if (iStack_44 <= iVar3) {
              iStack_3c = *(int *)(param_1 + 0x90);
              goto LAB_1097e5be4;
            }
          }
        }
      }
    }
  }
LAB_1097e5a14:
  uVar4 = 0;
LAB_1097e5a18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar4 = *(uint *)(param_1 + 0x34);
    if (uVar4 < 5 && uVar4 != 3) {
      iVar3 = (int)param_1 + 0x48;
      FUN_1097d9894();
      if (iVar3 == 0) {
        if (uVar4 == 1) {
          dVar8 = *(double *)(param_1 + 0x48);
          dVar9 = *(double *)(param_1 + 0x58);
          dVar10 = dVar9 * dVar9 + dVar8 * dVar8;
          if ((dVar10 < 1.7777777777777777) ||
             (((uVar4 = 1, 3.99 < dVar10 && (dVar10 < 4.01)) &&
              ((SUB84(dVar8 * dVar9 + 26388279066624.0,0) == 0 &&
               (((ulong)(*(double *)(param_1 + 0x68) + 26388279066624.0) & 0xff) == 0)))))) {
            dVar8 = *(double *)(param_1 + 0x50);
            dVar9 = *(double *)(param_1 + 0x60);
            dVar10 = dVar9 * dVar9 + dVar8 * dVar8;
            if ((dVar10 < 1.7777777777777777) ||
               (((uVar4 = 1, 3.99 < dVar10 && (dVar10 < 4.01)) &&
                ((SUB84(dVar8 * dVar9 + 26388279066624.0,0) == 0 &&
                 (((ulong)(*(double *)(param_1 + 0x70) + 26388279066624.0) & 0xff) == 0)))))) {
              uVar4 = 4;
            }
          }
        }
      }
      else {
        uVar4 = 3;
      }
    }
    return uVar4;
  }
  return uVar4;
}



/* Entry: 1097e5c58; end: 1097e5d97;  */

uint FUN_1097e5c58(long param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  if (uVar2 < 5 && uVar2 != 3) {
    iVar1 = (int)param_1 + 0x48;
    FUN_1097d9894();
    if (iVar1 == 0) {
      if (uVar2 == 1) {
        dVar3 = *(double *)(param_1 + 0x48);
        dVar4 = *(double *)(param_1 + 0x58);
        dVar5 = dVar4 * dVar4 + dVar3 * dVar3;
        if ((dVar5 < 1.7777777777777777) ||
           ((((uVar2 = 1, 3.99 < dVar5 && (dVar5 < 4.01)) &&
             (SUB84(dVar3 * dVar4 + 26388279066624.0,0) == 0)) &&
            (((ulong)(*(double *)(param_1 + 0x68) + 26388279066624.0) & 0xff) == 0)))) {
          dVar3 = *(double *)(param_1 + 0x50);
          dVar4 = *(double *)(param_1 + 0x60);
          dVar5 = dVar4 * dVar4 + dVar3 * dVar3;
          if ((dVar5 < 1.7777777777777777) ||
             (((uVar2 = 1, 3.99 < dVar5 && (dVar5 < 4.01)) &&
              ((SUB84(dVar3 * dVar4 + 26388279066624.0,0) == 0 &&
               (((ulong)(*(double *)(param_1 + 0x70) + 26388279066624.0) & 0xff) == 0)))))) {
            uVar2 = 4;
          }
        }
      }
    }
    else {
      uVar2 = 3;
    }
  }
  return uVar2;
}



/* Entry: 1097e5d98; end: 1097e601b;  */

void FUN_1097e5d98(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if ((((*(double *)(param_1 + 0x48) == 1.0) && (*(double *)(param_1 + 0x50) == 0.0)) &&
      (*(double *)(param_1 + 0x58) == 0.0)) &&
     (((*(double *)(param_1 + 0x60) == 1.0 && (*(double *)(param_1 + 0x68) == 0.0)) &&
      (*(double *)(param_1 + 0x70) == 0.0)))) {
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = uVar4;
    return;
  }
  dStack_58 = (double)*param_2 + 0.5;
  dStack_68 = (double)param_2[1] + 0.5;
  dStack_60 = dStack_58 + (double)(param_2[2] + -1);
  dStack_70 = dStack_68 + (double)(param_2[3] + -1);
  FUN_1097d92f0((double *)(param_1 + 0x48),&dStack_58,&dStack_68,&dStack_60,&dStack_70,0);
  iVar1 = *(int *)(param_1 + 0x34);
  dVar7 = 0.004;
  dVar2 = dVar7;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1097e5f68;
    if (iVar1 == 1) {
      dVar2 = *(double *)(param_1 + 0x48);
      _hypot(dVar2,*(undefined8 *)(param_1 + 0x58));
      dVar7 = 0.495;
      if (1.0 < dVar2) {
        if (16.0 <= dVar2) {
          dVar7 = 7.92;
        }
        else {
          dVar7 = dVar2 * 0.495;
        }
      }
      dVar3 = *(double *)(param_1 + 0x50);
      _hypot(dVar3,*(undefined8 *)(param_1 + 0x60));
      dVar2 = 0.495;
      if (1.0 < dVar3) {
        if (16.0 <= dVar3) {
          dVar2 = 7.92;
        }
        else {
          dVar2 = dVar3 * 0.495;
        }
      }
      goto LAB_1097e5f68;
    }
  }
  else {
    if (iVar1 == 2) {
      dVar2 = *(double *)(param_1 + 0x48);
      _hypot(dVar2,*(undefined8 *)(param_1 + 0x58));
      dVar7 = 7.92;
      if (dVar2 * 1.98 <= 7.92) {
        dVar7 = dVar2 * 1.98;
      }
      dVar3 = *(double *)(param_1 + 0x50);
      _hypot(dVar3,*(undefined8 *)(param_1 + 0x60));
      dVar2 = 7.92;
      if (dVar3 * 1.98 <= 7.92) {
        dVar2 = dVar3 * 1.98;
      }
      goto LAB_1097e5f68;
    }
    if (iVar1 == 3) goto LAB_1097e5f68;
  }
  dVar7 = 0.495;
  dVar2 = dVar7;
LAB_1097e5f68:
  dVar3 = -8388608.0;
  if (-8388608.0 <= (double)(long)(dStack_58 - dVar7)) {
    dVar3 = (double)(long)(dStack_58 - dVar7);
  }
  dVar5 = -8388608.0;
  if (-8388608.0 <= (double)(long)(dStack_68 - dVar2)) {
    dVar5 = (double)(long)(dStack_68 - dVar2);
  }
  dVar6 = (double)(long)(dVar7 + dStack_60) + 1.0;
  dVar7 = 8388607.0;
  if (dVar6 <= 8388607.0) {
    dVar7 = dVar6;
  }
  *param_3 = (int)dVar3;
  param_3[1] = (int)dVar5;
  dVar6 = (double)(long)(dVar2 + dStack_70) + 1.0;
  dVar2 = 8388607.0;
  if (dVar6 <= 8388607.0) {
    dVar2 = dVar6;
  }
  param_3[2] = (int)(dVar7 - dVar3);
  param_3[3] = (int)(dVar2 - dVar5);
  return;
}



/* Entry: 1097e601c; end: 1097e64c7;  */

void FUN_1097e601c(long param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  bVar5 = false;
  iVar2 = *(int *)(param_1 + 0x30);
  bVar8 = true;
  if (iVar2 < 3) {
    if (iVar2 == 0) goto LAB_1097e61ec;
    if (iVar2 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      func_0x0001097f6fa4(uVar7,&uStack_c0);
      if ((int)uVar7 == 0) goto LAB_1097e61ec;
      if (((int)uStack_b8 == 0) || (uStack_b8._4_4_ == 0)) goto LAB_1097e6224;
      if (*(int *)(param_1 + 0x38) != 0) goto LAB_1097e61ec;
      uStack_b8._0_4_ = (int)uStack_c0 + (int)uStack_b8;
      uStack_b8._4_4_ = uStack_c0._4_4_ + uStack_b8._4_4_;
LAB_1097e624c:
      dVar13 = (double)(int)uStack_b8;
      dVar12 = (double)(int)uStack_c0;
      dVar10 = (double)uStack_c0._4_4_;
      dVar11 = (double)uStack_b8._4_4_;
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 != 3) {
        dStack_90 = dVar11;
        dStack_88 = dVar13;
        dStack_80 = dVar10;
        dStack_78 = dVar12;
        if (iVar2 == 2) goto LAB_1097e621c;
        if (iVar2 != 0) {
          dVar9 = *(double *)(param_1 + 0x48);
          _hypot(dVar9,*(undefined8 *)(param_1 + 0x50));
          bVar5 = dVar9 < 1.0;
          if (bVar5) {
            dStack_78 = dVar12 + -0.5;
            dStack_88 = dVar13 + 0.5;
          }
          dVar12 = *(double *)(param_1 + 0x58);
          _hypot(dVar12,*(undefined8 *)(param_1 + 0x60));
          if (dVar12 < 1.0) {
            bVar8 = false;
            dStack_80 = dVar10 + -0.5;
            dStack_90 = dVar11 + 0.5;
          }
          goto LAB_1097e62a0;
        }
      }
      dStack_78 = dVar12 + -0.004;
      dStack_80 = dVar10 + -0.004;
      dStack_88 = dVar13 + 0.004;
      dStack_90 = dVar11 + 0.004;
    }
    else {
      if (iVar2 != 2) goto LAB_1097e62a0;
      if (*(int *)(param_1 + 0x38) != 0) goto LAB_1097e61ec;
      dStack_88 = *(double *)(param_1 + 0xf0);
      dVar10 = *(double *)(param_1 + 0x100);
      if ((ABS(dStack_88 - dVar10) < 2.220446049250313e-16) &&
         (ABS(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x108)) < 2.220446049250313e-16))
      goto LAB_1097e6224;
      if ((*(double *)(param_1 + 0x58) != 0.0) || (*(double *)(param_1 + 0x50) != 0.0)) {
LAB_1097e61ec:
        param_2[2] = 0xffffff;
        param_2[3] = 0xffffff;
        param_2[0] = -0x800000;
        param_2[1] = -0x800000;
        return;
      }
      if (dStack_88 != dVar10) {
        if (*(double *)(param_1 + 0xf8) == *(double *)(param_1 + 0x108)) {
          bVar8 = false;
          dStack_78 = dStack_88;
          if (dVar10 <= dStack_88) {
            dStack_78 = dVar10;
          }
          if (dStack_88 <= dVar10) {
            dStack_88 = dVar10;
          }
          dStack_80 = -INFINITY;
          bVar5 = true;
          dStack_90 = INFINITY;
          goto LAB_1097e62a0;
        }
        goto LAB_1097e61ec;
      }
      dStack_78 = -INFINITY;
      dStack_88 = INFINITY;
      dStack_90 = *(double *)(param_1 + 0xf8);
      dVar10 = *(double *)(param_1 + 0x108);
      dStack_80 = dStack_90;
      if (dVar10 <= dStack_90) {
        dStack_80 = dVar10;
      }
      if (dStack_90 <= dVar10) {
        dStack_90 = dVar10;
      }
    }
    bVar8 = false;
    bVar5 = true;
  }
  else {
    if (iVar2 == 3) {
      lVar6 = param_1;
      FUN_1097e64c8();
      if ((int)lVar6 != 0) {
LAB_1097e6224:
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        return;
      }
      if (*(int *)(param_1 + 0x38) != 0) goto LAB_1097e61ec;
      bVar5 = false;
      dVar11 = *(double *)(param_1 + 0x100);
      dVar10 = *(double *)(param_1 + 0x118);
      dStack_78 = *(double *)(param_1 + 0xf0) - dVar11;
      dVar12 = *(double *)(param_1 + 0x108) - dVar10;
      if (dVar12 <= dStack_78) {
        dStack_78 = dVar12;
      }
      dStack_80 = *(double *)(param_1 + 0xf8) - dVar11;
      dVar12 = *(double *)(param_1 + 0x110) - dVar10;
      if (dVar12 <= dStack_80) {
        dStack_80 = dVar12;
      }
      dStack_88 = *(double *)(param_1 + 0xf0) + dVar11;
      dVar12 = *(double *)(param_1 + 0x108) + dVar10;
      if (dStack_88 <= dVar12) {
        dStack_88 = dVar12;
      }
      dStack_90 = *(double *)(param_1 + 0xf8) + dVar11;
      dVar10 = *(double *)(param_1 + 0x110) + dVar10;
      if (dStack_90 <= dVar10) {
        dStack_90 = dVar10;
      }
      goto LAB_1097e62a0;
    }
    if (iVar2 != 4) {
      if (iVar2 != 5) goto LAB_1097e62a0;
      if ((*(int *)(param_1 + 0x8c) == 0) || (*(int *)(param_1 + 0x90) == 0)) goto LAB_1097e6224;
      if (*(int *)(param_1 + 0x38) != 0) goto LAB_1097e61ec;
      uStack_c0._0_4_ = *(int *)(param_1 + 0x84);
      uStack_c0._4_4_ = *(int *)(param_1 + 0x88);
      uStack_b8._0_4_ = (int)uStack_c0 + *(int *)(param_1 + 0x8c);
      uStack_b8._4_4_ = uStack_c0._4_4_ + *(int *)(param_1 + 0x90);
      goto LAB_1097e624c;
    }
    lVar6 = param_1;
    FUN_1097e54f0(param_1,&dStack_78,&dStack_80,&dStack_88,&dStack_90);
    if ((int)lVar6 == 0) goto LAB_1097e6224;
LAB_1097e621c:
    bVar5 = false;
  }
LAB_1097e62a0:
  if ((((*(double *)(param_1 + 0x48) == 1.0) && (*(double *)(param_1 + 0x50) == 0.0)) &&
      (*(double *)(param_1 + 0x58) == 0.0)) && (*(double *)(param_1 + 0x60) == 1.0)) {
    dStack_78 = dStack_78 - *(double *)(param_1 + 0x68);
    dStack_88 = dStack_88 - *(double *)(param_1 + 0x68);
    dStack_80 = dStack_80 - *(double *)(param_1 + 0x70);
    dStack_90 = dStack_90 - *(double *)(param_1 + 0x70);
  }
  else {
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = *(double *)(param_1 + 0x48);
    uStack_a8 = *(undefined8 *)(param_1 + 0x60);
    uStack_b0 = *(undefined8 *)(param_1 + 0x58);
    uStack_98 = *(undefined8 *)(param_1 + 0x70);
    uStack_a0 = *(undefined8 *)(param_1 + 0x68);
    FUN_1097d95c8(&uStack_c0);
    FUN_1097d92f0(&uStack_c0,&dStack_78,&dStack_80,&dStack_88,&dStack_90,0);
  }
  dVar11 = dStack_78 + -0.5;
  dVar10 = dStack_88 + 0.5;
  if (bVar5) {
    dVar11 = dStack_78;
    dVar10 = dStack_88;
  }
  iVar2 = -0x800000;
  if (-8388608.0 <= dVar11) {
    iVar2 = (int)(dVar11 + 0.5);
  }
  iVar3 = 0x7fffff;
  if (dVar10 <= 8388607.0) {
    iVar3 = (int)(dVar10 + 0.5);
  }
  iVar3 = iVar3 - iVar2;
  if ((iVar3 == 0 && param_3 != 0) && dVar11 != dVar10) {
    iVar3 = 1;
  }
  dVar10 = dStack_80 + -0.5;
  if (!bVar8) {
    dVar10 = dStack_80;
  }
  dVar11 = dStack_90 + 0.5;
  if (!bVar8) {
    dVar11 = dStack_90;
  }
  iVar1 = -0x800000;
  if (-8388608.0 <= dVar10) {
    iVar1 = (int)(dVar10 + 0.5);
  }
  iVar4 = 0x7fffff;
  if (dVar11 <= 8388607.0) {
    iVar4 = (int)(dVar11 + 0.5);
  }
  *param_2 = iVar2;
  param_2[1] = iVar1;
  iVar4 = iVar4 - iVar1;
  if ((iVar4 == 0 && param_3 != 0) && dVar10 != dVar11) {
    iVar4 = 1;
  }
  param_2[2] = iVar3;
  param_2[3] = iVar4;
  return;
}



/* Entry: 1097e64c8; end: 1097e6537;  */

bool FUN_1097e64c8(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x100);
  dVar2 = *(double *)(param_1 + 0x118);
  if (2.220446049250313e-16 <= ABS(dVar1 - dVar2)) {
    return false;
  }
  if (dVar2 <= dVar1) {
    dVar1 = dVar2;
  }
  if (dVar1 < 2.220446049250313e-16) {
    return true;
  }
  dVar1 = ABS(*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x108));
  dVar2 = ABS(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x110));
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  return dVar1 < 4.440892098500626e-16;
}



/* Entry: 1097e6538; end: 1097e6673;  */

undefined8 FUN_1097e6538(double param_1,double param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  dVar7 = *param_4;
  dVar10 = param_4[1];
  dVar8 = param_4[2];
  dVar9 = param_4[3];
  FUN_1097e6674(param_2,param_1);
  *(uint *)(param_3 + 2) = (uint)param_4;
  if ((uint)param_4 < 0x21) {
    pdVar1 = param_3 + 4;
    param_3[3] = (double)pdVar1;
  }
  else {
    pdVar1 = (double *)((((ulong)param_4 & 0xffffffff) * 2 + ((ulong)param_4 & 0xffffffff)) * 8);
    _malloc();
    param_3[3] = (double)pdVar1;
    if (pdVar1 == (double *)0x0) {
      return 1;
    }
  }
  uVar3 = 0;
  puVar2 = (undefined4 *)((long)pdVar1 + 4);
  do {
    dVar4 = ((double)(uVar3 & 0xffffffff) * 6.283185307179586) /
            (double)((ulong)param_4 & 0xffffffff);
    dVar6 = -dVar4;
    dVar5 = dVar6;
    if (0.0 <= -(dVar10 * dVar8) + dVar9 * dVar7) {
      dVar5 = dVar4;
    }
    ___sincos_stret();
    puVar2[-1] = SUB84(dVar8 * param_1 * dVar5 + param_1 * dVar6 * dVar7 + 26388279066624.0,0);
    *puVar2 = SUB84(dVar9 * param_1 * dVar5 + param_1 * dVar6 * dVar10 + 26388279066624.0,0);
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 6;
  } while (((ulong)param_4 & 0xffffffff) != uVar3);
  FUN_1097e66fc(param_3);
  return 0;
}



/* Entry: 1097e6674; end: 1097e66fb;  */

int FUN_1097e6674(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  
  FUN_1097d98f8();
  if (param_2 * 4.0 <= param_1) {
    iVar1 = 1;
  }
  else if (param_2 <= param_1) {
    iVar1 = 4;
  }
  else {
    dVar2 = 1.0 - param_1 / param_2;
    _acos();
    iVar1 = 4;
    if ((dVar2 != 0.0) &&
       (iVar1 = ((int)(6.283185307179586 / dVar2) & 1U) + (int)(6.283185307179586 / dVar2),
       iVar1 < 5)) {
      iVar1 = 4;
    }
  }
  return iVar1;
}



/* Entry: 1097e66fc; end: 1097e675f;  */

void FUN_1097e66fc(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    puVar6 = (undefined8 *)(lVar4 + 8);
    uVar7 = (ulong)(uVar2 - 1);
    do {
      uVar5 = uVar3;
      lVar1 = 0;
      if ((ulong)uVar2 - 1 != uVar5) {
        lVar1 = uVar5 + 1;
      }
      uVar8 = *(undefined8 *)(lVar4 + (long)(int)uVar7 * 0x18);
      uVar9 = *(undefined8 *)(lVar4 + lVar1 * 0x18);
      iVar10 = (int)puVar6[-1];
      iVar11 = (int)((ulong)puVar6[-1] >> 0x20);
      puVar6[1] = CONCAT44(iVar11 - (int)((ulong)uVar8 >> 0x20),iVar10 - (int)uVar8);
      *puVar6 = CONCAT44((int)((ulong)uVar9 >> 0x20) - iVar11,(int)uVar9 - iVar10);
      uVar3 = uVar5 + 1;
      puVar6 = puVar6 + 3;
      uVar7 = uVar5;
    } while ((ulong)uVar2 != uVar5 + 1);
  }
  return;
}



/* Entry: 1097e6760; end: 1097e702b;  */

void FUN_1097e6760(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = iVar2 >> 1;
  lVar5 = *(long *)(param_1 + 0x18);
  iVar7 = iVar2;
  do {
    lVar3 = lVar5 + (long)iVar8 * 0x18 + 0x10;
    FUN_1097f1294(lVar3,param_2);
    if (-1 < (int)lVar3) {
      iVar7 = iVar8;
      iVar8 = iVar6;
    }
    iVar6 = iVar8;
    iVar8 = iVar6 + iVar7 >> 1;
  } while (1 < iVar7 - iVar6);
  lVar3 = lVar5 + (long)iVar8 * 0x18 + 0x10;
  FUN_1097f1294(lVar3,param_2);
  iVar7 = 0;
  if (iVar8 + 1 != iVar2) {
    iVar7 = iVar8 + 1;
  }
  if (-1 < (int)lVar3) {
    iVar7 = iVar8;
  }
  *param_4 = iVar7;
  uVar4 = param_3;
  FUN_1097f1294(param_3,lVar5 + (long)iVar7 * 0x18 + 8);
  if (-1 < (int)uVar4) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar8 = iVar2 + iVar7 + iVar7 >> 1;
    iVar6 = iVar2 + iVar7;
    do {
      iVar1 = 0;
      if (iVar2 <= iVar8) {
        iVar1 = iVar2;
      }
      lVar3 = lVar5 + (long)(iVar8 - iVar1) * 0x18 + 0x10;
      FUN_1097f1294(lVar3,param_3);
      iVar1 = iVar8;
      if ((int)lVar3 < 1) {
        iVar1 = iVar6;
        iVar7 = iVar8;
      }
      iVar8 = iVar7 + iVar1 >> 1;
      iVar6 = iVar1;
    } while (1 < iVar1 - iVar7);
    iVar7 = 0;
    if (iVar2 <= iVar8) {
      iVar7 = iVar2;
    }
    iVar7 = iVar8 - iVar7;
  }
  *param_5 = iVar7;
  return;
}



/* Entry: 1097e702c; end: 1097e705f;  */

void FUN_1097e702c(long param_1)

{
  if (**(int **)(param_1 + 0xe8) == 0) {
    **(int **)(param_1 + 0xe8) = 0x27;
  }
  FUN_109b62cf4(param_1,PTR__longjmp_11034c548,0xc0);
  _longjmp();
  return;
}



/* Entry: 1097e7060; end: 1097e7063;  */

void FUN_1097e7060(void)

{
  return;
}



/* Entry: 1097e7064; end: 1097e7103;  */

void FUN_1097e7064(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(param_1 + 0x100);
  iVar9 = (int)puVar17[1];
  lVar12 = param_3;
  (*(code *)*puVar17)();
  if (iVar9 != 0) {
    if (**(int **)(param_1 + 0xe8) == 0) {
      **(int **)(param_1 + 0xe8) = iVar9;
    }
    lVar11 = 0;
    FUN_109b6244c(param_1);
    if (*(long *)(lVar11 + 8) != 0) {
      uVar8 = 4;
      uVar14 = 0;
      do {
        uVar13 = uVar8;
        puVar1 = (uint *)(lVar12 + uVar14);
        bVar2 = *(byte *)((long)puVar1 + 3);
        uVar15 = (uint)bVar2;
        if (bVar2 != 0) {
          uVar16 = (uint)bVar2;
          uVar3 = (byte)*puVar1 * uVar16 + 0x80;
          uVar4 = *(byte *)((long)puVar1 + 1) * uVar16 + 0x80;
          uVar5 = *(byte *)((long)puVar1 + 2) * uVar16 + 0x80;
          uVar15 = (uint)*(byte *)((long)puVar1 + 2);
          uVar6 = (uint)*(byte *)((long)puVar1 + 1);
          uVar7 = (uint)(byte)*puVar1;
          if (bVar2 != 0xff) {
            uVar15 = uVar5 + (uVar5 >> 8) >> 8;
            uVar6 = uVar4 + (uVar4 >> 8) >> 8;
            uVar7 = uVar3 + (uVar3 >> 8) >> 8;
          }
          uVar15 = uVar7 << 0x10 | uVar16 << 0x18 | uVar6 << 8 | uVar15;
        }
        *puVar1 = uVar15;
        uVar8 = (ulong)((int)uVar13 + 4);
        uVar14 = uVar13;
      } while (uVar13 < *(ulong *)(lVar11 + 8));
    }
    return;
  }
  if ((param_3 != 0) && (puVar17 = (undefined8 *)puVar17[2], *(int *)(puVar17 + 4) == 0)) {
    if (*(int *)((long)puVar17 + 0x24) == 0) {
      puVar10 = puVar17;
      (*(code *)*puVar17)(puVar17,param_2,param_3);
      *(int *)(puVar17 + 4) = (int)puVar10;
      puVar17[3] = puVar17[3] + param_3;
    }
    else {
      *(undefined4 *)(puVar17 + 4) = 0xb;
    }
  }
  return;
}



/* Entry: 1097e7104; end: 1097e71db;  */

void FUN_1097e7104(undefined8 param_1,long param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(long *)(param_2 + 8) != 0) {
    uVar8 = 4;
    uVar10 = 0;
    do {
      uVar9 = uVar8;
      puVar1 = (uint *)(param_3 + uVar10);
      bVar2 = *(byte *)((long)puVar1 + 3);
      uVar11 = (uint)bVar2;
      if (bVar2 != 0) {
        uVar12 = (uint)bVar2;
        uVar3 = (byte)*puVar1 * uVar12 + 0x80;
        uVar4 = *(byte *)((long)puVar1 + 1) * uVar12 + 0x80;
        uVar5 = *(byte *)((long)puVar1 + 2) * uVar12 + 0x80;
        uVar11 = (uint)*(byte *)((long)puVar1 + 2);
        uVar6 = (uint)*(byte *)((long)puVar1 + 1);
        uVar7 = (uint)(byte)*puVar1;
        if (bVar2 != 0xff) {
          uVar11 = uVar5 + (uVar5 >> 8) >> 8;
          uVar6 = uVar4 + (uVar4 >> 8) >> 8;
          uVar7 = uVar3 + (uVar3 >> 8) >> 8;
        }
        uVar11 = uVar7 << 0x10 | uVar12 << 0x18 | uVar6 << 8 | uVar11;
      }
      *puVar1 = uVar11;
      uVar8 = (ulong)((int)uVar9 + 4);
      uVar10 = uVar9;
    } while (uVar9 < *(ulong *)(param_2 + 8));
  }
  return;
}



/* Entry: 1097e71dc; end: 1097e7d2f;  */

uint * FUN_1097e71dc(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  uint *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  uint auStack_2d60 [48];
  uint auStack_2ca0 [506];
  int *piStack_24b8;
  undefined8 *puStack_24b0;
  undefined8 uStack_24a8;
  undefined4 uStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined1 *puStack_2488;
  undefined1 auStack_2480 [1000];
  undefined8 uStack_2098;
  undefined1 *puStack_2090;
  undefined1 auStack_2088 [8];
  undefined8 uStack_2080;
  uint *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if ((int)param_2 != 0) {
    FUN_1097e88d4();
    uVar20 = (uint)param_2;
    puVar6 = puVar4;
    if ((int)puVar4 != 0) goto LAB_1097e7cc0;
  }
  if ((int)param_4 != 0) {
    puVar4 = param_3;
    FUN_1097e88d4();
    uVar20 = (uint)param_4;
    param_2 = param_4;
    puVar6 = puVar4;
    if ((int)puVar4 != 0) goto LAB_1097e7cc0;
  }
  uVar20 = (uint)param_2;
  uVar21 = param_1[0xd];
  uVar25 = (ulong)uVar21;
  if (uVar21 == 0) {
    puVar6 = (uint *)0x0;
  }
  else {
    uVar3 = param_3[0xd];
    if (uVar3 == 0) {
      param_1[0xd] = 0;
      puVar6 = (uint *)0x0;
    }
    else {
      uVar2 = uVar3 + uVar21;
      uVar23 = (ulong)uVar2;
      if ((int)uVar2 < 0x18) {
        puVar6 = auStack_2d60;
        puVar4 = auStack_2ca0;
      }
      else {
        puVar4 = (uint *)(uVar23 * 0x60 | 8);
        _malloc();
        uVar20 = (uint)param_2;
        if (puVar4 == (uint *)0x0) {
          puVar6 = (uint *)0x1;
          goto LAB_1097e7cc0;
        }
        puVar6 = puVar4 + uVar23 * 0x16;
      }
      if ((int)uVar21 < 1) {
        uVar25 = 0;
      }
      else {
        puVar28 = *(undefined8 **)(param_1 + 0x10);
        puVar22 = puVar4;
        puVar26 = puVar6;
        uVar18 = uVar25;
        do {
          *(uint **)puVar26 = puVar22;
          *puVar22 = 1;
          param_2 = (int *)(ulong)*(uint *)(puVar28 + 2);
          puVar22[3] = *(uint *)(puVar28 + 2);
          puVar22[4] = 0;
          puVar5 = puVar28;
          FUN_1097e7d30();
          puVar22[1] = (uint)puVar5;
          puVar22[2] = 0;
          puVar22[6] = 0;
          uVar35 = *(undefined8 *)((long)puVar28 + 0x14);
          uVar34 = *(undefined8 *)((long)puVar28 + 0xc);
          uVar36 = *puVar28;
          *(undefined8 *)(puVar22 + 9) = puVar28[1];
          *(undefined8 *)(puVar22 + 7) = uVar36;
          *(undefined8 *)(puVar22 + 0xc) = uVar35;
          *(undefined8 *)(puVar22 + 10) = uVar34;
          puVar22[0x10] = 0;
          puVar22[0x11] = 0;
          puVar22[0x12] = 0;
          puVar22[0x13] = 0;
          puVar22[0xe] = 0;
          puVar22[0xf] = 0;
          puVar22 = puVar22 + 0x16;
          uVar18 = uVar18 - 1;
          puVar28 = (undefined8 *)((long)puVar28 + 0x1c);
          puVar26 = puVar26 + 2;
        } while (uVar18 != 0);
      }
      if (0 < (int)uVar3) {
        lVar29 = 0;
        lVar30 = *(long *)(param_3 + 0x10);
        puVar22 = puVar4 + uVar25 * 0x16;
        puVar26 = puVar6 + uVar25 * 2;
        do {
          *(uint **)puVar26 = puVar22;
          *puVar22 = 1;
          puVar28 = (undefined8 *)(lVar30 + lVar29);
          param_2 = (int *)(ulong)*(uint *)(puVar28 + 2);
          puVar22[3] = *(uint *)(puVar28 + 2);
          puVar22[4] = 0;
          puVar5 = puVar28;
          FUN_1097e7d30();
          puVar22[1] = (uint)puVar5;
          puVar22[2] = 0;
          puVar22[6] = 1;
          uVar35 = *(undefined8 *)((long)puVar28 + 0x14);
          uVar34 = *(undefined8 *)((long)puVar28 + 0xc);
          uVar36 = *puVar28;
          *(undefined8 *)(puVar22 + 9) = puVar28[1];
          *(undefined8 *)(puVar22 + 7) = uVar36;
          *(undefined8 *)(puVar22 + 0xc) = uVar35;
          *(undefined8 *)(puVar22 + 10) = uVar34;
          puVar22[0x10] = 0;
          puVar22[0x11] = 0;
          puVar22[0x12] = 0;
          puVar22[0x13] = 0;
          puVar22[0xe] = 0;
          puVar22[0xf] = 0;
          lVar29 = lVar29 + 0x1c;
          puVar22 = puVar22 + 0x16;
          puVar26 = puVar26 + 2;
        } while ((ulong)uVar3 * 0x1c != lVar29);
      }
      param_1[0xd] = 0;
      do {
        uVar21 = (int)uVar23 * 10;
        uVar20 = uVar21 / 0xd;
        if (uVar21 / 0xd < 2) {
          uVar20 = 1;
        }
        uVar3 = 0xb;
        if (0x19 < uVar21 - 0x75) {
          uVar3 = uVar20;
        }
        uVar23 = (ulong)uVar3;
        bVar1 = 1 < uVar3;
        uVar25 = (ulong)(uVar2 - uVar3);
        puVar22 = puVar6;
        uVar18 = uVar23;
        if (uVar2 - uVar3 != 0) {
          do {
            piVar17 = *(int **)puVar22;
            piVar19 = *(int **)(puVar6 + uVar18 * 2);
            uVar20 = piVar17[3] - piVar19[3];
            if (((((uVar20 != 0) || (uVar20 = piVar17[4] - piVar19[4], uVar20 != 0)) ||
                 (uVar20 = piVar17[1] - piVar19[1], uVar20 != 0)) ||
                ((uVar20 = *piVar17 - *piVar19, uVar20 != 0 ||
                 (uVar20 = (uint)(piVar17 != piVar19), piVar19 <= piVar17)))) && (0 < (int)uVar20))
            {
              *(int **)puVar22 = piVar19;
              *(int **)(puVar6 + uVar18 * 2) = piVar17;
              bVar1 = true;
            }
            uVar25 = uVar25 - 1;
            puVar22 = puVar22 + 2;
            uVar18 = (ulong)((int)uVar18 + 1);
          } while (uVar25 != 0);
        }
      } while (bVar1);
      (puVar6 + (long)(int)uVar2 * 2)[0] = 0;
      (puVar6 + (long)(int)uVar2 * 2)[1] = 0;
      piStack_24b8 = (int *)0x0;
      puStack_24b0 = &uStack_2498;
      uStack_24a8 = 0;
      uStack_24a0 = 0x28;
      uStack_2498 = 0;
      uStack_2490 = 0x3e8000003e8;
      puStack_2488 = auStack_2480;
      uStack_2098 = 0x40000000000;
      puStack_2090 = auStack_2088;
      uStack_2080 = 0;
      piVar27 = (int *)0x80000000;
      piVar17 = (int *)0x0;
      piVar19 = (int *)0x0;
      puStack_88 = puVar6;
LAB_1097e74b8:
      do {
        do {
          do {
            uVar20 = (uint)param_2;
            piVar24 = *(int **)(puStack_2090 + 8);
            piVar12 = *(int **)puStack_88;
            if (piVar24 == (int *)0x0) goto LAB_1097e7634;
            if (piVar12 == (int *)0x0) {
LAB_1097e750c:
              iVar10 = (int)uStack_2098;
              lVar29 = (long)(int)uStack_2098;
              iVar13 = (int)uStack_2098 + -1;
              uStack_2098 = CONCAT44(uStack_2098._4_4_,iVar13);
              if (iVar13 != 0) {
                piVar12 = *(int **)(puStack_2090 + lVar29 * 8);
                if (iVar10 < 3) {
                  lVar29 = 1;
                }
                else {
                  iVar31 = piVar12[3];
                  iVar32 = 2;
                  iVar16 = 1;
                  do {
                    iVar15 = iVar13;
                    if (iVar32 != iVar13) {
                      puVar22 = *(uint **)(puStack_2090 + ((long)iVar32 | 1U) * 8);
                      puVar6 = *(uint **)(puStack_2090 + (long)iVar32 * 8);
                      param_2 = (int *)(ulong)puVar6[3];
                      uVar20 = puVar22[3] - puVar6[3];
                      if (uVar20 == 0) {
                        param_2 = (int *)(ulong)puVar6[4];
                        uVar20 = puVar22[4] - puVar6[4];
                        if (uVar20 == 0) {
                          param_2 = (int *)(ulong)puVar6[1];
                          uVar20 = puVar22[1] - puVar6[1];
                          if (uVar20 == 0) {
                            param_2 = (int *)(ulong)*puVar6;
                            uVar21 = (uint)(puVar22 != puVar6);
                            if (puVar22 < puVar6) {
                              uVar21 = 0xffffffff;
                            }
                            uVar20 = *puVar22 - *puVar6;
                            if (uVar20 == 0) {
                              uVar20 = uVar21;
                            }
                          }
                        }
                      }
                      iVar15 = (int)((long)iVar32 | 1U);
                      if (-1 < (int)uVar20) {
                        iVar15 = iVar32;
                      }
                    }
                    piVar14 = *(int **)(puStack_2090 + (long)iVar15 * 8);
                    iVar32 = piVar14[3] - iVar31;
                    if ((((iVar32 == 0) && (iVar32 = piVar14[4] - piVar12[4], iVar32 == 0)) &&
                        (iVar32 = piVar14[1] - piVar12[1], iVar32 == 0)) &&
                       (iVar32 = *piVar14 - *piVar12, iVar32 == 0)) {
                      if (piVar12 <= piVar14) break;
                    }
                    else if (-1 < iVar32) break;
                    *(int **)(puStack_2090 + (long)iVar16 * 8) = piVar14;
                    iVar32 = iVar15 * 2;
                    iVar16 = iVar15;
                  } while (iVar32 < iVar10);
                  lVar29 = (long)iVar16;
                }
                uVar20 = (uint)param_2;
                *(int **)(puStack_2090 + lVar29 * 8) = piVar12;
                goto joined_r0x0001097e7624;
              }
              *(undefined8 *)(puStack_2090 + 8) = 0;
            }
            else {
              iVar13 = piVar12[3] - piVar24[3];
              if (((iVar13 == 0) && (iVar13 = piVar12[4] - piVar24[4], iVar13 == 0)) &&
                 ((iVar13 = piVar12[1] - piVar24[1], iVar13 == 0 &&
                  (iVar13 = *piVar12 - *piVar24, iVar13 == 0)))) {
                if (piVar24 <= piVar12) goto LAB_1097e750c;
              }
              else if (-1 < iVar13) goto LAB_1097e750c;
LAB_1097e7634:
              puStack_88 = puStack_88 + 2;
              piVar24 = piVar12;
joined_r0x0001097e7624:
              if (piVar24 == (int *)0x0) {
                puVar6 = (uint *)0x0;
                goto LAB_1097e7c90;
              }
            }
            if (piVar24[3] != (int)piVar27) {
              uStack_80 = 0;
              piVar12 = piVar19;
              while (piVar12 != (int *)0x0) {
                while( true ) {
                  *(int *)((long)&uStack_80 + (long)*piVar12 * 4) =
                       *(int *)((long)&uStack_80 + (long)*piVar12 * 4) + piVar12[7];
                  piVar14 = piVar12;
                  if ((int)uStack_80 != 0 && uStack_80._4_4_ != 0) break;
                  if (*(long *)(piVar12 + 0xc) != 0) {
                    param_2 = piVar27;
                    FUN_1097e823c(piVar12,piVar27,param_1);
                  }
                  piVar12 = *(int **)(piVar12 + 10);
                  if (piVar12 == (int *)0x0) goto LAB_1097e79f4;
                }
                do {
                  while( true ) {
                    do {
                      do {
                        piVar14 = *(int **)(piVar14 + 10);
                        if (*(long *)(piVar14 + 0xc) != 0) {
                          param_2 = piVar27;
                          FUN_1097e823c(piVar14,piVar27,param_1);
                        }
                        *(int *)((long)&uStack_80 + (long)*piVar14 * 4) =
                             *(int *)((long)&uStack_80 + (long)*piVar14 * 4) + piVar14[7];
                      } while ((int)uStack_80 != 0 && uStack_80._4_4_ != 0);
                      piVar7 = *(int **)(piVar14 + 10);
                      if (piVar7 == (int *)0x0) goto LAB_1097e77c0;
                      iVar13 = piVar14[1];
                      iVar10 = piVar7[1];
                    } while (((iVar13 == iVar10) && (piVar14[2] == piVar7[2])) &&
                            ((piVar14[3] == piVar7[3] && (piVar14[4] == piVar7[4]))));
                    iVar31 = piVar7[3];
                    uVar20 = piVar14[3] - iVar13;
                    if (uVar20 == 0) {
                      if (iVar31 != iVar10) goto LAB_1097e77c0;
                      param_2 = (int *)(ulong)(uint)piVar14[2];
                      piVar11 = (int *)(ulong)(uint)piVar7[2];
                    }
                    else {
                      if ((iVar31 == iVar10) || ((int)(iVar31 - iVar10 ^ uVar20) < 0))
                      goto LAB_1097e77c0;
                      param_2 = (int *)(long)piVar14[2];
                      piVar11 = (int *)(long)piVar7[2];
                      if (((long)piVar7[4] - (long)piVar11) * (long)(int)uVar20 -
                          ((long)piVar14[4] - (long)param_2) * (long)(iVar31 - iVar10) != 0)
                      goto LAB_1097e77c0;
                    }
                    if ((int)param_2 != (int)piVar11) break;
                    if (iVar13 != iVar10) goto LAB_1097e77c0;
                  }
                  piVar33 = piVar14;
                  if ((int)param_2 < (int)piVar11) {
                    piVar33 = piVar7;
                    piVar11 = param_2;
                    iVar10 = iVar13;
                  }
                  param_2 = piVar11;
                  FUN_1097e82a8(piVar33,param_2,iVar10);
                } while ((int)piVar33 == 0);
LAB_1097e77c0:
                piVar7 = *(int **)(piVar12 + 0xc);
                if (piVar7 != piVar14) {
                  if (piVar7 == (int *)0x0) {
LAB_1097e78f0:
                    iVar13 = piVar12[1];
                    iVar10 = piVar14[1];
                    if (((iVar13 == iVar10) && (piVar12[2] == piVar14[2])) &&
                       ((piVar12[3] == piVar14[3] && (piVar12[4] == piVar14[4]))))
                    goto LAB_1097e79d4;
                    iVar31 = piVar14[3];
                    uVar20 = piVar12[3] - iVar13;
                    if (uVar20 == 0) {
                      if (iVar31 == iVar10) {
                        param_2 = (int *)(ulong)(uint)piVar12[2];
                        piVar7 = (int *)(ulong)(uint)piVar14[2];
LAB_1097e7998:
                        if ((int)param_2 == (int)piVar7) {
                          if (iVar13 != iVar10) goto LAB_1097e79cc;
                        }
                        else {
                          piVar11 = piVar12;
                          if ((int)param_2 < (int)piVar7) {
                            piVar11 = piVar14;
                            piVar7 = param_2;
                            iVar10 = iVar13;
                          }
                          param_2 = piVar7;
                          FUN_1097e82a8(piVar11,param_2,iVar10);
                          if ((int)piVar11 != 0) goto LAB_1097e79cc;
                        }
                        goto LAB_1097e79d4;
                      }
                    }
                    else if ((iVar31 != iVar10) && (-1 < (int)(iVar31 - iVar10 ^ uVar20))) {
                      param_2 = (int *)(long)piVar12[2];
                      piVar7 = (int *)(long)piVar14[2];
                      if (((long)piVar14[4] - (long)piVar7) * (long)(int)uVar20 -
                          ((long)piVar12[4] - (long)param_2) * (long)(iVar31 - iVar10) == 0)
                      goto LAB_1097e7998;
                    }
LAB_1097e79cc:
                    piVar12[0xe] = (int)piVar27;
                  }
                  else {
                    iVar13 = piVar7[1];
                    iVar10 = piVar14[1];
                    if ((((iVar13 != iVar10) || (piVar7[2] != piVar14[2])) ||
                        (piVar7[3] != piVar14[3])) || (piVar7[4] != piVar14[4])) {
                      iVar31 = piVar14[3];
                      uVar20 = piVar7[3] - iVar13;
                      if (uVar20 == 0) {
                        if (iVar31 == iVar10) {
                          piVar11 = (int *)(ulong)(uint)piVar7[2];
                          piVar33 = (int *)(ulong)(uint)piVar14[2];
LAB_1097e7878:
                          iVar31 = (int)piVar11;
                          iVar32 = (int)piVar33;
                          if (iVar31 == iVar32) {
                            if (iVar13 == iVar10) {
LAB_1097e7888:
                              if (iVar31 < iVar32) {
                                *(undefined8 *)(piVar14 + 1) = *(undefined8 *)(piVar7 + 1);
                              }
                              goto LAB_1097e789c;
                            }
                          }
                          else {
                            piVar8 = piVar7;
                            param_2 = piVar33;
                            if (iVar31 < iVar32) {
                              piVar8 = piVar14;
                              param_2 = piVar11;
                              iVar10 = iVar13;
                            }
                            FUN_1097e82a8(piVar8,param_2,iVar10);
                            if ((int)piVar8 == 0) goto LAB_1097e7888;
                          }
                        }
                      }
                      else if ((iVar31 != iVar10) && (-1 < (int)(iVar31 - iVar10 ^ uVar20))) {
                        piVar11 = (int *)(long)piVar7[2];
                        piVar33 = (int *)(long)piVar14[2];
                        if (((long)piVar14[4] - (long)piVar33) * (long)(int)uVar20 -
                            ((long)piVar7[4] - (long)piVar11) * (long)(iVar31 - iVar10) == 0)
                        goto LAB_1097e7878;
                      }
                      param_2 = piVar27;
                      FUN_1097e823c(piVar12,piVar27,param_1);
                      goto LAB_1097e78f0;
                    }
LAB_1097e789c:
                    if (piVar14[4] < piVar7[4]) {
                      *(undefined8 *)(piVar14 + 3) = *(undefined8 *)(piVar7 + 3);
                    }
                  }
                  *(int **)(piVar12 + 0xc) = piVar14;
                }
LAB_1097e79d4:
                piVar12 = *(int **)(piVar14 + 10);
              }
LAB_1097e79f4:
              piVar27 = (int *)(ulong)(uint)piVar24[3];
            }
            iVar10 = (int)piVar27;
            iVar13 = *piVar24;
            if (iVar13 == -1) {
              piVar12 = *(int **)(piVar24 + 6);
              *(int **)piVar24 = piStack_24b8;
              piStack_24b8 = piVar24;
              if (*(long *)(piVar12 + 0xc) != 0) {
                FUN_1097e823c(piVar12,piVar27,param_1);
              }
              piVar14 = *(int **)(piVar12 + 8);
              piVar24 = *(int **)(piVar12 + 10);
              piVar7 = piVar24;
              if (piVar14 != (int *)0x0) {
                *(int **)(piVar14 + 10) = piVar24;
                piVar7 = piVar19;
              }
              if (piVar24 != (int *)0x0) {
                *(int **)(piVar24 + 8) = piVar14;
              }
              if ((piVar17 == piVar12) && (piVar17 = piVar24, *(int **)(piVar12 + 8) != (int *)0x0))
              {
                piVar17 = *(int **)(piVar12 + 8);
              }
              param_2 = piVar14;
              piVar19 = piVar7;
              if (piVar14 != (int *)0x0 && piVar24 != (int *)0x0) {
LAB_1097e7bc4:
                ppiVar9 = &piStack_24b8;
                FUN_1097e7f6c(ppiVar9,piVar14,piVar24);
                uVar20 = (uint)piVar14;
                param_2 = piVar14;
                piVar19 = piVar7;
                if ((int)ppiVar9 != 0) goto LAB_1097e7d00;
              }
              goto LAB_1097e74b8;
            }
            if (iVar13 == 0) {
              piVar14 = *(int **)(piVar24 + 6);
              piVar12 = *(int **)(piVar24 + 8);
              *(int **)piVar24 = piStack_24b8;
              piStack_24b8 = piVar24;
              if (piVar12 == *(int **)(piVar14 + 10)) {
                if (*(long *)(piVar14 + 0xc) != 0) {
                  FUN_1097e823c(piVar14,piVar27,param_1);
                }
                if (*(long *)(piVar12 + 0xc) != 0) {
                  FUN_1097e823c(piVar12,piVar27,param_1);
                }
                param_2 = *(int **)(piVar14 + 8);
                piVar24 = *(int **)(piVar12 + 10);
                piVar11 = piVar24;
                piVar7 = piVar12;
                if (param_2 != (int *)0x0) {
                  *(int **)(param_2 + 10) = piVar12;
                  piVar11 = *(int **)(piVar12 + 10);
                  piVar7 = piVar19;
                }
                piVar19 = param_2;
                if (piVar11 != (int *)0x0) {
                  *(int **)(piVar11 + 8) = piVar14;
                  piVar19 = *(int **)(piVar14 + 8);
                }
                *(int **)(piVar14 + 10) = piVar11;
                *(int **)(piVar12 + 8) = piVar19;
                *(int **)(piVar12 + 10) = piVar14;
                *(int **)(piVar14 + 8) = piVar12;
                if (param_2 != (int *)0x0) {
                  ppiVar9 = &piStack_24b8;
                  FUN_1097e7f6c(ppiVar9,param_2,piVar12);
                  uVar20 = (uint)param_2;
                  if ((int)ppiVar9 != 0) goto LAB_1097e7d00;
                }
                piVar19 = piVar7;
                if (piVar24 != (int *)0x0) goto LAB_1097e7bc4;
              }
              goto LAB_1097e74b8;
            }
          } while (iVar13 != 1);
          piVar12 = piVar24 + 6;
          piVar14 = piVar12;
          if (piVar17 != (int *)0x0) {
            iVar13 = iVar10;
            FUN_1097e8330(piVar27,piVar17,piVar12);
            if (iVar13 < 0) {
              do {
                piVar14 = piVar17;
                piVar17 = *(int **)(piVar14 + 10);
                if (piVar17 == (int *)0x0) {
                  *(int **)(piVar14 + 10) = piVar12;
                  *(int **)(piVar24 + 0xe) = piVar14;
                  piVar24[0x10] = 0;
                  piVar24[0x11] = 0;
                  piVar14 = piVar19;
                  goto LAB_1097e7c18;
                }
                iVar13 = iVar10;
                FUN_1097e8330(piVar27,piVar17,piVar12);
              } while (iVar13 < 0);
              *(int **)(piVar14 + 10) = piVar12;
              *(int **)(piVar24 + 0xe) = piVar14;
              *(int **)(piVar24 + 0x10) = piVar17;
              *(int **)(piVar17 + 8) = piVar12;
              piVar14 = piVar19;
            }
            else if (iVar13 == 0) {
              *(int **)(piVar24 + 0xe) = piVar17;
              lVar29 = *(long *)(piVar17 + 10);
              *(long *)(piVar24 + 0x10) = lVar29;
              if (lVar29 != 0) {
                *(int **)(lVar29 + 0x20) = piVar12;
              }
              *(int **)(piVar17 + 10) = piVar12;
              piVar14 = piVar19;
            }
            else {
              do {
                piVar7 = piVar17;
                piVar17 = *(int **)(piVar7 + 8);
                if (piVar17 == (int *)0x0) {
                  *(int **)(piVar7 + 8) = piVar12;
                  piVar24[0xe] = 0;
                  piVar24[0xf] = 0;
                  *(int **)(piVar24 + 0x10) = piVar7;
                  goto LAB_1097e7c18;
                }
                iVar13 = iVar10;
                FUN_1097e8330(piVar27,piVar17,piVar12);
              } while (0 < iVar13);
              *(int **)(piVar7 + 8) = piVar12;
              *(int **)(piVar24 + 0xe) = piVar17;
              *(int **)(piVar24 + 0x10) = piVar7;
              *(int **)(piVar17 + 10) = piVar12;
              piVar14 = piVar19;
            }
          }
LAB_1097e7c18:
          iStack_78 = piVar24[0xc];
          uStack_74 = 0;
          uVar20 = (int)piVar24 + 0x1c;
          FUN_1097e7d30();
          uStack_80 = (ulong)uVar20;
          ppiVar9 = &piStack_24b8;
          uVar20 = 0xffffffff;
          FUN_1097e86f4(ppiVar9,0xffffffff,piVar12,0,&uStack_80);
          if ((int)ppiVar9 != 0) goto LAB_1097e7d00;
          param_2 = *(int **)(piVar24 + 0xe);
          lVar29 = *(long *)(piVar24 + 0x10);
          if (param_2 != (int *)0x0) {
            ppiVar9 = &piStack_24b8;
            FUN_1097e7f6c(ppiVar9,param_2,piVar12);
            uVar20 = (uint)param_2;
            if ((int)ppiVar9 != 0) goto LAB_1097e7d00;
          }
          piVar17 = piVar12;
          piVar19 = piVar14;
        } while (lVar29 == 0);
        ppiVar9 = &piStack_24b8;
        param_2 = piVar12;
        FUN_1097e7f6c(ppiVar9,piVar12,lVar29);
        uVar20 = (uint)param_2;
      } while ((int)ppiVar9 == 0);
LAB_1097e7d00:
      puVar6 = (uint *)0x1;
LAB_1097e7c90:
      if (puStack_2090 != auStack_2088) {
        _free();
      }
      FUN_1097cf6a0(&piStack_24b8);
      if (puVar4 != auStack_2ca0) {
        _free();
      }
    }
  }
LAB_1097e7cc0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  ___stack_chk_fail();
  iVar13 = uVar20 - puVar4[1];
  if (iVar13 == 0) {
    uVar20 = *puVar4;
  }
  else {
    if (puVar4[3] == uVar20) {
      return (uint *)(ulong)puVar4[2];
    }
    uVar20 = *puVar4;
    iVar10 = puVar4[3] - puVar4[1];
    if (iVar10 != 0) {
      iVar31 = 0;
      if ((long)iVar10 != 0) {
        iVar31 = (int)((((long)(int)puVar4[2] - (long)(int)uVar20) * (long)iVar13) / (long)iVar10);
      }
      return (uint *)(ulong)(uVar20 + iVar31);
    }
  }
  return (uint *)(ulong)uVar20;
}



/* Entry: 1097e7d30; end: 1097e7d8b;  */

int FUN_1097e7d30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1[1];
  if (iVar3 == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_1[3] == param_2) {
      return param_1[2];
    }
    iVar1 = *param_1;
    iVar4 = param_1[3] - param_1[1];
    if (iVar4 != 0) {
      iVar2 = 0;
      if ((long)iVar4 != 0) {
        iVar2 = (int)((((long)param_1[2] - (long)iVar1) * (long)iVar3) / (long)iVar4);
      }
      return iVar1 + iVar2;
    }
  }
  return iVar1;
}


