/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10971ea00; end: 10971ec23;  */

/* WARNING: Removing unreachable block (ram,0x00010971eae0) */
/* WARNING: Removing unreachable block (ram,0x00010971eae4) */
/* WARNING: Removing unreachable block (ram,0x00010971eaf0) */
/* WARNING: Removing unreachable block (ram,0x00010971eb28) */

float FUN_10971ea00(undefined8 param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  
  fVar12 = 0.0;
  if (param_3 < ((uint)(*(ushort *)(param_2 + 6) >> 8) | (*(ushort *)(param_2 + 6) & 0xff00ff) << 8)
     ) {
    uVar3 = *(uint *)(param_2 + (ulong)param_3 * 4 + 8);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar1 = (ushort *)&UNK_10dfe4888;
    if (uVar3 != 0) {
      puVar1 = (ushort *)(param_2 + (ulong)uVar3);
    }
    uVar3 = (*(uint *)(param_2 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 2) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar2 = (ushort *)&UNK_10dfe4888;
    if (uVar3 != 0) {
      puVar2 = (ushort *)(param_2 + (ulong)uVar3);
    }
    if (param_4 < ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8)) {
      bVar4 = (byte)puVar1[2];
      bVar5 = *(byte *)((long)puVar1 + 5);
      uVar3 = (uint)*(byte *)((long)puVar1 + 3) | ((byte)puVar1[1] & 0x7f) << 8;
      puVar6 = (ushort *)
               ((long)(puVar1 + 2) +
               (ulong)((uVar3 + CONCAT11(bVar4,bVar5) << (ulong)(byte)((byte)puVar1[1] >> 7)) *
                      param_4) + (ulong)bVar4 * 0x200 + (ulong)bVar5 * 2 + 2);
      fVar12 = 0.0;
      uVar9 = 0;
      if (uVar3 != 0) {
        puVar8 = (undefined *)((long)puVar1 + 7);
        puVar7 = puVar6;
        uVar11 = (ulong)uVar3;
        do {
          FUN_10971ec24(puVar2,*(ushort *)(puVar8 + -1) >> 8 | *(ushort *)(puVar8 + -1) << 8,param_5
                        ,param_6,param_7);
          fVar12 = fVar12 + (float)(int)(short)(*puVar7 >> 8 | *puVar7 << 8) * (float)param_1;
          puVar8 = puVar8 + 2;
          uVar11 = uVar11 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 != 0);
        puVar6 = puVar6 + uVar3;
        uVar9 = uVar3;
      }
      if (uVar9 < CONCAT11(bVar4,bVar5)) {
        lVar10 = (ulong)((uint)bVar4 * 0x100 + (uint)bVar5) - (ulong)uVar9;
        puVar8 = (undefined *)((long)puVar1 + (ulong)uVar9 * 2 + 7);
        do {
          FUN_10971ec24(puVar2,*(ushort *)(puVar8 + -1) >> 8 | *(ushort *)(puVar8 + -1) << 8,param_5
                        ,param_6,param_7);
          fVar12 = fVar12 + (float)(int)(char)(byte)*puVar6 * (float)param_1;
          puVar8 = puVar8 + 2;
          lVar10 = lVar10 + -1;
          puVar6 = (ushort *)((long)puVar6 + 1);
        } while (lVar10 != 0);
      }
    }
  }
  return fVar12;
}



/* Entry: 10971ec24; end: 10971ed6b;  */

float FUN_10971ec24(ushort *param_1,uint param_2,long param_3,uint param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) <= param_2) {
    return 0.0;
  }
  if (param_5 == 0) {
    pfVar7 = (float *)0x0;
  }
  else {
    pfVar7 = (float *)(param_5 + (ulong)param_2 * 4);
    if (*pfVar7 != 2.0) {
      return *pfVar7;
    }
  }
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 == 0) {
    fVar11 = 1.0;
  }
  else {
    uVar8 = 0;
    pbVar9 = (byte *)((long)param_1 + (ulong)(uVar5 * param_2) * 6 + 9);
    fVar11 = 1.0;
    do {
      if (uVar8 < param_4) {
        uVar10 = *(uint *)(param_3 + uVar8 * 4);
      }
      else {
        uVar10 = 0;
      }
      uVar2 = (int)(short)((ushort)pbVar9[-3] << 8) | (uint)pbVar9[-2];
      fVar12 = 1.0;
      if (uVar2 != 0 && uVar10 != uVar2) {
        if (uVar10 != 0) {
          uVar3 = (int)(short)((ushort)pbVar9[-5] << 8) | (uint)pbVar9[-4];
          uVar4 = (int)(short)((ushort)pbVar9[-1] << 8) | (uint)*pbVar9;
          if (((int)uVar2 < (int)uVar3 || (int)uVar4 < (int)uVar2) ||
             (((short)((ushort)pbVar9[-5] << 8) < 0 && (0 < (int)uVar4)))) goto LAB_10971ed30;
          if ((uVar10 - uVar3 != 0 && (int)uVar3 <= (int)uVar10) && (int)uVar10 < (int)uVar4) {
            iVar1 = uVar10 - uVar3;
            iVar6 = uVar2 - uVar3;
            if ((int)uVar2 <= (int)uVar10) {
              iVar1 = uVar4 - uVar10;
              iVar6 = uVar4 - uVar2;
            }
            fVar12 = (float)iVar1 / (float)iVar6;
            if (fVar12 != 0.0) goto LAB_10971ed30;
          }
        }
        fVar11 = 0.0;
        break;
      }
LAB_10971ed30:
      fVar11 = fVar11 * fVar12;
      uVar8 = uVar8 + 1;
      pbVar9 = pbVar9 + 6;
    } while (uVar5 != uVar8);
  }
  if (param_5 == 0) {
    return fVar11;
  }
  *pfVar7 = fVar11;
  return fVar11;
}



/* Entry: 10971ed6c; end: 10971eddb;  */

undefined * FUN_10971ed6c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0xc];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10971ee34();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_10971eddc();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10971eddc; end: 10971ee33;  */

void FUN_10971eddc(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10971ee34; end: 10971f2d7;  */

uint * FUN_10971ee34(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined4 auStack_90 [2];
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_58;
  undefined2 uStack_54;
  int *piVar13;
  
  puVar10 = (uint *)0x1;
  _calloc(1,0x28);
  if (puVar10 == (uint *)0x0) {
    return (uint *)0x0;
  }
  auStack_90[0] = 0;
  iStack_64 = 0;
  piStack_60 = (int *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  bStack_68 = 0;
  iStack_58 = 0x10000;
  uStack_54 = 0;
  iVar9 = param_1[6];
  if (iVar9 == -1) {
    piVar13 = param_1;
    FUN_109710978();
    iVar9 = (int)piVar13;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  iStack_58 = iVar9;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    piVar13 = (int *)&UNK_10dfe4888;
  }
  else {
    piVar13 = param_1;
    (**(code **)(param_1 + 8))(param_1,0x766d7478,*(undefined8 *)(param_1 + 10));
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar13 != 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  bStack_68 = 0;
  lVar16 = *(long *)(piVar13 + 4);
  uStack_78._0_4_ = piVar13[6];
  uStack_80 = lVar16 + (ulong)(uint)uStack_78;
  uVar15 = (uint)uStack_78 << 6;
  if (uVar15 < 0x4001) {
    uVar15 = 0x4000;
  }
  if (0x3ffffffe < uVar15) {
    uVar15 = 0x3fffffff;
  }
  uStack_78._4_4_ = 0x3fffffff;
  if ((uint)uStack_78 >> 0x1a == 0) {
    uStack_78._4_4_ = uVar15;
  }
  auStack_90[0] = 0;
  iStack_64 = 0;
  uStack_70 = uStack_70 & 0xffffffff;
  lStack_88 = lVar16;
  piStack_60 = piVar13;
  FUN_1096f5a5c(piVar13);
  piStack_60 = (int *)0x0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  if ((lVar16 != 0) && (piVar13[1] != 0)) {
    piVar13[1] = 0;
  }
  *(int **)(puVar10 + 6) = piVar13;
  FUN_109710c0c(auStack_90);
  auStack_90[0] = 0;
  iStack_64 = 0;
  piStack_60 = (int *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  bStack_68 = 0;
  iStack_58 = 0x10000;
  uStack_54 = 0;
  iVar9 = param_1[6];
  if (iVar9 == -1) {
    piVar13 = param_1;
    FUN_109710978();
    iVar9 = (int)piVar13;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  piVar13 = (int *)&UNK_10dfe4888;
  iStack_58 = iVar9;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    piVar13 = param_1;
    (**(code **)(param_1 + 8))(param_1,0x56564152,*(undefined8 *)(param_1 + 10));
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar13 != 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  piStack_60 = piVar13;
  bVar8 = 0;
  do {
    bStack_68 = bVar8;
    lVar16 = *(long *)(piStack_60 + 4);
    uStack_78._0_4_ = piStack_60[6];
    uStack_80 = lVar16 + (ulong)(uint)uStack_78;
    uVar15 = (uint)uStack_78 << 6;
    if (uVar15 < 0x4001) {
      uVar15 = 0x4000;
    }
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uStack_78._4_4_ = 0x3fffffff;
    if ((uint)uStack_78 >> 0x1a == 0) {
      uStack_78._4_4_ = uVar15;
    }
    auStack_90[0] = 0;
    iStack_64 = 0;
    uStack_70 = uStack_70 & 0xffffffff;
    lStack_88 = lVar16;
    if (lVar16 == 0) {
      FUN_1096f5a5c();
      piStack_60 = (int *)0x0;
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      goto LAB_10971f0e0;
    }
    lVar11 = lVar16;
    FUN_10971f2d8(lVar16,auStack_90);
    if ((int)lVar11 != 0) {
      if (iStack_64 == 0) {
        FUN_1096f5a5c(piStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      }
      else {
        iStack_64 = 0;
        FUN_10971f2d8(lVar16,auStack_90);
        iVar9 = iStack_64;
        FUN_1096f5a5c(piStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        uVar15 = 0;
        if (iVar9 == 0) {
          uVar15 = (uint)lVar16;
        }
        if ((uVar15 & 1) == 0) goto LAB_10971f0d0;
      }
      piStack_60 = (int *)0x0;
      uStack_80 = 0;
      lStack_88 = 0;
      if (piVar13[1] != 0) {
        piVar13[1] = 0;
      }
      goto LAB_10971f0e0;
    }
    if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10971f0bc;
    if ((piVar13[1] == 0) || (piVar12 = piVar13, FUN_1096f59a0(), ((ulong)piVar12 & 1) == 0)) {
      uStack_80 = (ulong)(uint)piVar13[6];
      lStack_88 = 0;
      goto LAB_10971f0bc;
    }
    uStack_80 = *(long *)(piVar13 + 4) + (ulong)(uint)piVar13[6];
    bVar8 = 1;
  } while (*(long *)(piVar13 + 4) != 0);
  lStack_88 = 0;
LAB_10971f0bc:
  FUN_1096f5a5c(piStack_60);
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10971f0d0:
  piStack_60 = (int *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  FUN_1096f5a5c(piVar13);
  piVar13 = (int *)&UNK_10dfe4888;
LAB_10971f0e0:
  *(int **)(puVar10 + 8) = piVar13;
  FUN_109710c0c(auStack_90);
  uVar15 = param_1[5];
  if (uVar15 == 0) {
    piVar13 = param_1;
    func_0x0001097109c0();
    uVar15 = (uint)piVar13;
  }
  puVar10[4] = uVar15;
  piVar13 = (int *)&UNK_10dfe4888;
  if (*(int **)(puVar10 + 6) != (int *)0x0) {
    piVar13 = *(int **)(puVar10 + 6);
  }
  uVar15 = piVar13[6];
  piVar13 = param_1 + 0x2e;
  FUN_10974e46c();
  piVar12 = (int *)&UNK_10dfe4888;
  if (0x23 < (uint)piVar13[6]) {
    piVar12 = *(int **)(piVar13 + 4);
  }
  uVar4 = (uint)(*(ushort *)((long)piVar12 + 0x22) >> 8) |
          (*(ushort *)((long)piVar12 + 0x22) & 0xff00ff) << 8;
  uVar2 = uVar4 << 2;
  uVar1 = uVar15 >> 2;
  uVar7 = uVar15 & 0xfffffffc;
  if (uVar2 <= (uVar15 & 0xfffffffe)) {
    uVar1 = uVar4;
    uVar7 = uVar2;
  }
  *puVar10 = uVar1;
  uVar7 = (uVar15 & 0xfffffffe) - uVar7;
  piVar13 = param_1 + 0x1c;
  FUN_10971e4f0();
  piVar12 = (int *)&UNK_10dfe4888;
  if (5 < (uint)piVar13[6]) {
    piVar12 = *(int **)(piVar13 + 4);
  }
  uVar2 = (uint)(*(ushort *)(piVar12 + 1) >> 8) | (*(ushort *)(piVar12 + 1) & 0xff00ff) << 8;
  puVar10[1] = uVar2;
  uVar15 = uVar2;
  if (uVar2 < uVar1) {
    uVar15 = uVar1;
  }
  uVar3 = (uVar15 - uVar1) * 2;
  uVar4 = uVar1 + (uVar7 >> 1);
  if (uVar7 < uVar3) {
    uVar15 = uVar4;
  }
  if (uVar1 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = uVar15;
    if (uVar1 <= uVar2 && uVar3 <= uVar7) goto LAB_10971f1a8;
  }
  puVar10[1] = uVar14;
LAB_10971f1a8:
  uVar14 = uVar14 + (uVar4 - uVar15 & 0x7fffffff);
  puVar10[2] = uVar14;
  uVar15 = param_1[6];
  if (uVar15 == 0xffffffff) {
    FUN_109710978();
    uVar15 = (uint)param_1;
  }
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  puVar10[3] = uVar15;
  return puVar10;
}



/* Entry: 10971f2d8; end: 10971f317;  */

long FUN_10971f2d8(long param_1,long param_2)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  
  lVar6 = param_1;
  FUN_10971df74();
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  puVar2 = (uint *)(param_1 + 0x14);
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 == 0) {
    return 1;
  }
  pcVar1 = (char *)(param_1 + (ulong)uVar4);
  if (pcVar1 + (1 - *(long *)(param_2 + 8)) <= (char *)(ulong)*(uint *)(param_2 + 0x18)) {
    if (*pcVar1 == '\x01') {
      pcVar8 = pcVar1 + 6;
      if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))) ||
          (uVar4 = (*(uint *)(pcVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar1 + 2) & 0xff00ff) << 8,
          uVar7 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10) * (ulong)(((byte)pcVar1[1] >> 4 & 3) + 1),
          (uVar7 & 0xffffffff00000000) != 0)) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
    }
    else {
      if (*pcVar1 != '\0') {
        return 1;
      }
      pcVar8 = pcVar1 + 4;
      if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
      uVar3 = *(ushort *)(pcVar1 + 2);
      uVar7 = (ulong)(((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * ((byte)pcVar1[1] >> 4 & 3) +
                     ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8));
    }
    if (((uint)uVar7 <= (uint)(*(int *)(param_2 + 0x10) - (int)pcVar8)) &&
       (iVar5 = *(int *)(param_2 + 0x1c) - (uint)uVar7, *(int *)(param_2 + 0x1c) = iVar5, 0 < iVar5)
       ) {
      return 1;
    }
  }
LAB_10971e0d8:
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *puVar2 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10971f318; end: 10971f373;  */

uint FUN_10971f318(int *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  
  if (param_2 < (uint)param_1[1]) {
    puVar2 = &UNK_10dfe4888;
    if (*(undefined **)(param_1 + 6) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_1 + 6);
    }
    uVar1 = *param_1 - 1U;
    if (param_2 <= *param_1 - 1U) {
      uVar1 = param_2;
    }
    uVar3 = *(ushort *)(*(long *)(puVar2 + 0x10) + (ulong)uVar1 * 4);
    return (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
  }
  if (param_1[2] != 0) {
    return 0;
  }
  return param_1[4];
}



/* Entry: 10971f374; end: 10971f573;  */

long FUN_10971f374(long param_1,long param_2,undefined8 param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lStack_78;
  uint *puStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  uint uStack_44;
  
  if (*(uint *)(param_1 + 0x1c) <= (uint)param_3) {
    return 0;
  }
  if (*(int *)(param_2 + 0x78) == 0) {
    FUN_10971fa1c(&lStack_78,param_1);
    if ((int)uStack_5c != 0) {
      pbVar9 = (byte *)(lStack_68 + 2);
      pbVar10 = (byte *)(lStack_68 + 6);
      pbVar1 = pbVar10;
      bVar2 = *pbVar10;
      if (CONCAT11(*pbVar9,*(undefined1 *)(lStack_68 + 3)) <=
          CONCAT11(*pbVar10,*(undefined1 *)(lStack_68 + 7))) {
        pbVar1 = pbVar9;
        bVar2 = *pbVar9;
      }
      uStack_44 = (int)(short)((ushort)bVar2 << 8) | (uint)pbVar1[1];
      FUN_109721144(*(undefined8 *)(param_1 + 8),uStack_60,&uStack_44);
      *param_4 = uStack_44;
      pbVar7 = (byte *)(lStack_68 + 8);
      pbVar8 = (byte *)(lStack_68 + 4);
      pbVar1 = pbVar7;
      bVar2 = *pbVar7;
      if (CONCAT11(*pbVar7,*(undefined1 *)(lStack_68 + 9)) <=
          CONCAT11(*pbVar8,*(undefined1 *)(lStack_68 + 5))) {
        pbVar1 = pbVar8;
        bVar2 = *pbVar8;
      }
      param_4[1] = (int)(short)((ushort)bVar2 << 8) | (uint)pbVar1[1];
      bVar2 = *pbVar9;
      sVar4 = CONCAT11(bVar2,*(undefined1 *)(lStack_68 + 3));
      bVar3 = *pbVar10;
      sVar5 = CONCAT11(bVar3,*(undefined1 *)(lStack_68 + 7));
      pbVar1 = pbVar10;
      bVar6 = bVar3;
      if (sVar5 <= sVar4) {
        pbVar1 = pbVar9;
        bVar6 = bVar2;
      }
      if (sVar4 <= sVar5) {
        pbVar10 = pbVar9;
        bVar3 = bVar2;
      }
      param_4[2] = ((int)(short)((ushort)bVar6 << 8) | (uint)pbVar1[1]) -
                   ((int)(short)((ushort)bVar3 << 8) | (uint)pbVar10[1]);
      bVar2 = *pbVar8;
      sVar4 = CONCAT11(bVar2,*(undefined1 *)(lStack_68 + 5));
      bVar3 = *pbVar7;
      sVar5 = CONCAT11(bVar3,*(undefined1 *)(lStack_68 + 9));
      pbVar1 = pbVar7;
      bVar6 = bVar3;
      if (sVar4 <= sVar5) {
        pbVar1 = pbVar8;
        bVar6 = bVar2;
      }
      if (sVar5 <= sVar4) {
        pbVar7 = pbVar8;
        bVar3 = bVar2;
      }
      param_4[3] = ((int)(short)((ushort)bVar6 << 8) | (uint)pbVar1[1]) -
                   ((int)(short)((ushort)bVar3 << 8) | (uint)pbVar7[1]);
      FUN_1096feabc(param_2,param_4);
    }
    param_1 = 1;
  }
  else {
    uStack_54 = 0xff7fffffff7fffff;
    uStack_5c = 0x7f7fffff7f7fffff;
    lStack_68 = 0;
    uStack_60 = CONCAT31(uStack_60._1_3_,1);
    lStack_78 = param_2;
    puStack_70 = param_4;
    FUN_10971f824(param_1,param_2,param_3,&lStack_78);
  }
  return param_1;
}



/* Entry: 10971f574; end: 10971f793;  */

int * FUN_10971f574(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  auStack_80[0] = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_44 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x564f5247,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulong)param_1 >> 0x20);
  bVar5 = 0;
  while( true ) {
    bStack_58 = bVar5;
    lVar8 = *(long *)(CONCAT44(uStack_4c,uStack_50) + 0x10);
    uStack_68._0_4_ = *(uint *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar1 = (uint)uStack_68 << 6;
    if (uVar1 < 0x4001) {
      uVar1 = 0x4000;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar1;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      uStack_50 = 0;
      uStack_4c = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_10971f6d0;
    }
    lVar6 = lVar8;
    FUN_10971f794(lVar8,auStack_80);
    if ((int)lVar6 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_10971f6ac;
    if ((param_1[1] == 0) || (piVar7 = param_1, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_10971f6ac;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar5 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_10971f6ac:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_10971f6c0:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_10971f6d0:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_10971f794(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    if (((uint)(iVar4 == 0) & (uint)lVar8) == 0) goto LAB_10971f6c0;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_10971f6d0;
}



/* Entry: 10971f794; end: 10971f823;  */

bool FUN_10971f794(ushort *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_1 + 4;
  if (((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) &&
      ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18) &&
      (uVar2 = (uint)(byte)param_1[3] << 10 | (uint)*(byte *)((long)param_1 + 7) << 2,
      uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1))))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}



/* Entry: 10971f824; end: 10971fa1b;  */

undefined1 * FUN_10971f824(long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  float *pfStack_48;
  
  if (*(uint *)(param_1 + 0x1c) <= param_3) {
    return (undefined1 *)0x0;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uStack_50 = 0;
  pfStack_48 = (float *)0x0;
  lVar10 = param_4[1];
  FUN_10971fa1c(auStack_70,param_1);
  puVar4 = auStack_70;
  FUN_10971fb24(puVar4,param_2,param_1,&uStack_50,lVar10 == 0,uVar9,uVar2,0,0);
  if (((ulong)puVar4 & 1) == 0) goto LAB_10971f9cc;
  uVar8 = uStack_50._4_4_ - 4;
  puVar5 = (undefined8 *)param_4[1];
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = uStack_50._4_4_;
    if (uVar8 <= uStack_50._4_4_) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0) {
      fVar12 = *(float *)((long)param_4 + 0x1c);
      fVar11 = *(float *)((long)param_4 + 0x24);
    }
    else {
      fVar12 = *(float *)((long)param_4 + 0x1c);
      fVar14 = *(float *)(param_4 + 4);
      fVar11 = *(float *)((long)param_4 + 0x24);
      fVar16 = *(float *)(param_4 + 5);
      pfVar6 = pfStack_48;
      do {
        if (*pfVar6 < fVar12) {
          fVar12 = *pfVar6;
        }
        *(float *)((long)param_4 + 0x1c) = fVar12;
        if (pfVar6[1] < fVar14) {
          fVar14 = pfVar6[1];
        }
        *(float *)(param_4 + 4) = fVar14;
        if (fVar11 < *pfVar6) {
          fVar11 = *pfVar6;
        }
        *(float *)((long)param_4 + 0x24) = fVar11;
        if (fVar16 < pfVar6[1]) {
          fVar16 = pfVar6[1];
        }
        *(float *)(param_4 + 5) = fVar16;
        pfVar6 = pfVar6 + 3;
      } while (pfVar6 != pfStack_48 + (ulong)uVar1 * 3);
    }
    if (fVar12 < fVar11) {
      fVar14 = *(float *)(param_4 + 4);
      if (fVar14 < *(float *)(param_4 + 5)) {
        uVar9 = *param_4;
        cVar3 = *(char *)(param_4 + 3);
        iVar13 = (int)(float)(int)(*(float *)(param_4 + 5) + 0.5);
        uVar15 = NEON_scvtf(CONCAT44(iVar13,(int)(float)(int)(fVar12 + 0.5)),4);
        *puVar5 = CONCAT44(iVar13,(int)(float)(int)(fVar12 + 0.5));
        puVar5[1] = CONCAT44((int)(float)(int)((fVar14 - (float)((ulong)uVar15 >> 0x20)) + 0.5),
                             (int)(float)(int)((fVar11 - (float)uVar15) + 0.5));
        if (cVar3 != '\0') {
          FUN_1096feabc(uVar9);
        }
        goto LAB_10971f990;
      }
    }
    *puVar5 = 0;
    puVar5[1] = 0;
  }
LAB_10971f990:
  lVar10 = param_4[2];
  if (lVar10 != 0) {
    lVar7 = 0;
    do {
      puVar5 = (undefined8 *)(lVar10 + lVar7);
      uVar9 = *(undefined8 *)(pfStack_48 + (ulong)uVar8 * 3);
      *(float *)(puVar5 + 1) = (pfStack_48 + (ulong)uVar8 * 3)[2];
      *puVar5 = uVar9;
      lVar7 = lVar7 + 0xc;
      uVar8 = uVar8 + 1;
    } while (lVar7 != 0x30);
  }
LAB_10971f9cc:
  if ((int)uStack_50 != 0) {
    _free(pfStack_48);
  }
  return puVar4;
}



/* Entry: 10971fa1c; end: 10971fb23;  */

void FUN_10971fa1c(undefined8 *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  
  if (*(uint *)(param_2 + 0x1c) <= param_3) {
    uVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = &UNK_10dfe4888;
    param_3 = 0xffffffff;
    goto LAB_10971faf0;
  }
  puVar4 = (ushort *)&UNK_10dfe4888;
  puVar2 = puVar4;
  if (*(ushort **)(param_2 + 0x20) != (ushort *)0x0) {
    puVar2 = *(ushort **)(param_2 + 0x20);
  }
  lVar8 = *(long *)(puVar2 + 8);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    pbVar1 = (byte *)(lVar8 + (ulong)param_3 * 2);
    uVar5 = (uint)*pbVar1 << 9 | (uint)pbVar1[1] << 1;
    pbVar1 = (byte *)(lVar8 + (ulong)(param_3 + 1) * 2);
    uVar9 = (uint)*pbVar1 << 9 | (uint)pbVar1[1] << 1;
  }
  else {
    uVar9 = *(uint *)(lVar8 + (ulong)param_3 * 4);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar5 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = *(uint *)(lVar8 + (ulong)(param_3 + 1) * 4);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  }
  if (uVar9 < uVar5) {
LAB_10971faf8:
    uVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_3 = 0xffffffff;
  }
  else {
    puVar2 = puVar4;
    if (*(ushort **)(param_2 + 0x28) != (ushort *)0x0) {
      puVar2 = *(ushort **)(param_2 + 0x28);
    }
    if (*(uint *)(puVar2 + 0xc) < uVar9) goto LAB_10971faf8;
    if (9 < uVar9 - uVar5) {
      puVar4 = (ushort *)(*(long *)(puVar2 + 8) + (ulong)uVar5);
    }
    uVar3 = *puVar4;
    uVar6 = 1;
    if ((short)(uVar3 >> 8 | uVar3 << 8) < 1) {
      uVar6 = 2;
    }
    uVar7 = 0;
    if (uVar3 >> 8 != 0 || (uVar3 & 0xff) != 0) {
      uVar7 = uVar6;
    }
    *param_1 = (ushort *)(*(long *)(puVar2 + 8) + (ulong)uVar5);
    param_1[1] = (ulong)(uVar9 - uVar5);
  }
  param_1[2] = puVar4;
LAB_10971faf0:
  *(uint *)(param_1 + 3) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
  return;
}



/* Entry: 10971fb24; end: 10972109b;  */

/* WARNING: Possible PIC construction at 0x000109720eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010971fe20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109720eb0) */
/* WARNING: Removing unreachable block (ram,0x000109720eb8) */
/* WARNING: Removing unreachable block (ram,0x00010971fe24) */
/* WARNING: Removing unreachable block (ram,0x00010971fe2c) */
/* WARNING: Removing unreachable block (ram,0x000109720b7c) */
/* WARNING: Type propagation algorithm not settling */

byte ** FUN_10971fb24(byte **param_1,byte **param_2,undefined8 *param_3,uint *param_4,uint param_5,
                     byte *param_6,ulong param_7,undefined8 *param_8,uint param_9,
                     undefined4 param_10,uint *param_11)

{
  uint *puVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  bool bVar27;
  uint *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  byte **ppbVar31;
  char cVar32;
  uint uVar33;
  ulong uVar34;
  byte *pbVar35;
  long lVar36;
  long *plVar37;
  byte *pbVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  ushort *puVar42;
  double *pdVar43;
  float *pfVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  long lVar49;
  int iVar50;
  uint uVar51;
  undefined8 *puVar52;
  ulong uVar53;
  undefined8 *puVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  byte **ppbVar59;
  long lVar60;
  undefined8 uVar61;
  byte **ppbVar62;
  ulong uVar63;
  long lVar64;
  ulong uVar65;
  byte **ppbVar66;
  char *pcVar67;
  undefined8 uVar68;
  ushort *puVar69;
  byte **ppbVar70;
  uint uVar71;
  byte *pbVar72;
  undefined *puVar73;
  int iVar74;
  byte *pbVar75;
  ulong uVar76;
  byte **ppbVar77;
  undefined4 *puVar78;
  ulong uVar79;
  float fVar80;
  double dVar81;
  float fVar82;
  double dVar83;
  int iStack_328;
  ulong uStack_300;
  uint *puStack_2f8;
  byte *pbStack_278;
  ulong uStack_270;
  uint uStack_204;
  undefined8 uStack_1b0;
  byte **ppbStack_1a8;
  byte **ppbStack_1a0;
  long lStack_198;
  uint auStack_188 [2];
  long lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined2 uStack_156;
  undefined8 uStack_150;
  uint uStack_148;
  int iStack_144;
  byte *pbStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  byte *pbStack_118;
  long lStack_110;
  undefined8 uStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  int iStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  byte *pbStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  ushort *puStack_a8;
  byte *pbStack_a0;
  long alStack_98 [3];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_9 < 0x41) {
    uStack_148 = 0;
    puVar45 = &uStack_148;
    if (param_11 != (uint *)0x0) {
      puVar45 = param_11;
    }
    if (0x800 < *puVar45) goto LAB_109720fb0;
    *puVar45 = *puVar45 + 1;
    uStack_178 = 1;
    uStack_174 = 1;
    uStack_170 = 0;
    uStack_168 = 1;
    uStack_150 = 0;
    uStack_15e = 0;
    uStack_166 = 0;
    puVar5 = (undefined8 *)&uStack_178;
    if (param_8 != (undefined8 *)0x0) {
      puVar5 = param_8;
    }
    uStack_156 = 0;
    if ((int)param_7 == 0) {
      uStack_270 = 0;
      param_6 = param_2[0x10];
      param_7 = (ulong)*(uint *)(param_2 + 0xf);
    }
    else {
      uStack_270 = param_7 & 0xffffffff00000000;
    }
    auStack_188[0] = 0;
    auStack_188[1] = 0;
    lStack_180 = 0;
    iVar74 = *(int *)((long)param_1 + 0x1c);
    puVar45 = param_4;
    if (iVar74 != 1) {
      puVar45 = auStack_188;
    }
    puVar1 = param_4 + 1;
    puVar6 = puVar1;
    if (iVar74 != 1) {
      puVar6 = (uint *)((ulong)auStack_188 | 4);
    }
    uVar48 = puVar45[1];
    uVar34 = (ulong)uVar48;
    if (iVar74 == 2) {
      FUN_10972109c(&pbStack_d8);
      lVar60 = CONCAT44(uStack_c4,uStack_c8);
      if (lVar60 == 0) goto LAB_10971ff54;
      func_0x000109721254(lVar60,&pbStack_a0,&pbStack_e8);
      ppbVar59 = (byte **)(ulong)(*puVar6 + 4);
      puVar28 = puVar45;
      FUN_10972142c(puVar45,ppbVar59,0);
      pbVar38 = pbStack_d8;
      if ((int)puVar28 == 0) goto LAB_109720fa8;
      uVar33 = *puVar6;
      if ((int)uVar33 < (int)*puVar45) {
LAB_10971fdec:
        *puVar6 = uVar33 + 1;
        puVar52 = (undefined8 *)(lStack_180 + (ulong)uVar33 * 0xc);
        *puVar52 = pbStack_e8;
        *(undefined4 *)(puVar52 + 1) = (undefined4)uStack_e0;
      }
      else {
        puVar28 = puVar45;
        FUN_10972142c(puVar45,uVar33 + 1,0);
        if ((int)puVar28 != 0) {
          uVar33 = *puVar6;
          goto LAB_10971fdec;
        }
        uRam000000011382ab38 = 0;
        uRam000000011382ab30 = 0;
      }
      if ((*(byte *)(lVar60 + 1) >> 5 & 1) != 0) {
        param_1 = &pbStack_d8;
        pbVar38 = (byte *)(lVar60 + ((ulong)pbStack_c0 & 0xffffffff));
        goto SUB_1097215a4;
      }
LAB_10971ff54:
      ppbVar59 = (byte **)(ulong)(*puVar6 + 4);
      puVar28 = puVar45;
      FUN_1097210d4();
      pbVar38 = pbStack_d8;
      if ((int)puVar28 == 0) goto LAB_109720fa8;
      puVar28 = param_4 + 2;
      puVar7 = puVar28;
      puVar24 = param_4;
      if (iVar74 != 1) {
        puVar7 = (uint *)&lStack_180;
        puVar24 = auStack_188;
      }
      uVar9 = puVar45[1];
      uVar39 = uVar9 - 4;
      uVar33 = 0;
      if (uVar39 <= uVar9) {
        uVar33 = uVar9 - uVar39;
      }
      uVar51 = uVar33;
      if (3 < uVar33) {
        uVar51 = 4;
      }
      ppbVar77 = (byte **)(*(long *)(puVar24 + 2) + (ulong)uVar39 * 0xc);
      pbStack_d8 = (byte *)((ulong)pbStack_d8 & 0xffffffff00000000);
      uVar61 = param_3[1];
      uVar39 = *(uint *)(param_1 + 3);
      ppbVar66 = (byte **)(ulong)uVar39;
      uVar68 = uVar61;
      FUN_109721144(uVar61,ppbVar66,&pbStack_d8);
      iVar74 = 0;
      pbVar38 = param_1[2];
      if ((int)uVar68 != 0) {
        iVar74 = ((int)(short)((ushort)pbVar38[2] << 8) | (uint)pbVar38[3]) - (int)pbStack_d8;
      }
      pbStack_a0 = (byte *)((ulong)pbStack_a0 & 0xffffffff00000000);
      bVar11 = pbVar38[9];
      uVar68 = param_3[2];
      bVar12 = pbVar38[8];
      func_0x0001097211cc(uVar68,ppbVar66,&pbStack_a0);
      iVar50 = (int)pbStack_a0 + ((int)(short)((ushort)bVar12 << 8) | (uint)bVar11);
      func_0x00010971e860(uVar61,ppbVar66);
      ppbVar59 = ppbVar66;
      FUN_10971f318();
      if ((((uVar9 < 4) || (*(float *)ppbVar77 = (float)iVar74, uVar33 == 1)) ||
          (*(float *)((long)ppbVar77 + 0xc) = (float)((int)uVar61 + iVar74), uVar33 < 3)) ||
         (*(float *)((long)ppbVar77 + 0x1c) = (float)iVar50, uVar33 == 3)) {
        lVar60 = 0x11382ab30;
        uRam000000011382ab38 = 0;
        uRam000000011382ab30 = 0;
      }
      else {
        lVar60 = (long)ppbVar77 + 0x24;
      }
      fVar80 = (float)(iVar50 - (int)uVar68);
      dVar81 = (double)(ulong)(uint)fVar80;
      *(float *)(lVar60 + 4) = fVar80;
      if ((uint)param_7 != 0) {
        bVar27 = false;
        puVar52 = (undefined8 *)*param_3;
        uVar47 = *puVar6;
        uVar33 = 0;
        if (uVar48 <= uVar47) {
          uVar33 = uVar47 - uVar48;
        }
        if (uVar48 != 0) {
          uVar47 = uVar33;
        }
        uVar79 = (ulong)uVar47;
        if (param_5 != 0) {
          bVar27 = *(int *)((long)param_1 + 0x1c) == 1;
        }
        ppbVar62 = (byte **)(ulong)*(uint *)(puVar52 + 1);
        if (uVar39 < *(uint *)(puVar52 + 1)) {
          lVar60 = *(long *)puVar7;
          puVar73 = (undefined *)*puVar52;
          puVar29 = &UNK_10dfe4888;
          if (puVar73 != (undefined *)0x0) {
            puVar29 = puVar73;
          }
          puVar8 = &UNK_10dfe4888;
          if (0x13 < *(uint *)(puVar29 + 0x18)) {
            puVar8 = *(undefined **)(puVar29 + 0x10);
          }
          puVar29 = puVar8;
          func_0x00010972186c(puVar8,ppbVar62,ppbVar66);
          puVar30 = puVar8;
          func_0x00010972186c(puVar8,ppbVar62,uVar39 + 1);
          uVar48 = (uint)puVar29;
          uVar33 = (uint)puVar30 - uVar48;
          if ((uint)puVar30 < uVar48) {
            pbStack_278 = (byte *)0x0;
            uVar63 = 0;
            pbVar38 = &UNK_10dfe4888;
          }
          else {
            uVar39 = (*(uint *)(puVar8 + 0x10) & 0xff00ff00) >> 8 |
                     (*(uint *)(puVar8 + 0x10) & 0xff00ff) << 8;
            uVar48 = (uVar39 >> 0x10 | uVar39 << 0x10) + uVar48;
            uVar39 = 0;
            if (uVar48 <= *(uint *)(puVar73 + 0x18)) {
              uVar39 = *(uint *)(puVar73 + 0x18) - uVar48;
            }
            if (uVar33 <= uVar39) {
              uVar39 = uVar33;
            }
            uVar63 = (ulong)uVar39;
            if (uVar39 < 4) {
              pbStack_278 = (byte *)0x0;
              uVar63 = 0;
              pbVar38 = &UNK_10dfe4888;
            }
            else {
              pbStack_278 = (byte *)(*(long *)(puVar73 + 0x10) + (ulong)uVar48);
              pbVar38 = pbStack_278;
            }
          }
          ppbVar59 = ppbVar62;
          if (pbVar38[1] != 0 || *pbVar38 != 0) {
            pbStack_a0 = (byte *)0x0;
            alStack_98[0] = 0;
            pbVar35 = &UNK_10dfe4888;
            if ((byte *)*puVar52 != (byte *)0x0) {
              pbVar35 = (byte *)*puVar52;
            }
            pbVar72 = &UNK_10dfe4888;
            if (0x13 < *(uint *)(pbVar35 + 0x18)) {
              pbVar72 = *(byte **)(pbVar35 + 0x10);
            }
            uVar48 = (uint)(*(ushort *)(pbVar72 + 4) >> 8) |
                     (*(ushort *)(pbVar72 + 4) & 0xff00ff) << 8;
            iStack_d0 = 0;
            puVar69 = (ushort *)(pbVar38 + 4);
            uStack_c8 = 0;
            pbStack_c0 = pbStack_278;
            pbStack_b8 = pbStack_278;
            pbStack_d8 = pbVar38;
            uStack_cc = uVar48;
            uStack_b0 = uVar63;
            puStack_a8 = puVar69;
            if ((char)*pbVar38 < '\0') {
              uVar33 = (uint)(*(ushort *)(pbVar38 + 2) >> 8) |
                       (*(ushort *)(pbVar38 + 2) & 0xff00ff) << 8;
              pbVar35 = &UNK_10dfe4888;
              if (uVar33 != 0) {
                pbVar35 = pbStack_278 + uVar33;
              }
              ppbVar66 = &pbStack_e8;
              ppbVar59 = &pbStack_a0;
              pbStack_e8 = pbVar35;
              FUN_109721624(ppbVar66,ppbVar59,pbStack_278 + uVar63);
              if ((int)ppbVar66 != 0) {
                uStack_c8 = (int)pbStack_e8 - (int)pbVar35;
                goto LAB_109720264;
              }
            }
            else {
LAB_109720264:
              uStack_204 = uStack_c8;
              iVar74 = (int)&pbStack_d8;
              func_0x0001097218b0();
              if (iVar74 != 0) {
                iStack_328 = 0;
                uStack_300 = 0;
                puStack_2f8 = (uint *)0x0;
                iVar74 = 0;
                ppbStack_1a0 = (byte **)0x0;
                lStack_198 = 0;
                uStack_1b0 = 0;
                ppbStack_1a8 = (byte **)0x0;
                bVar11 = 0;
                ppbVar66 = (byte **)(lVar60 + uVar34 * 0xc);
                pbStack_e8 = (byte *)0x0;
                uStack_e0 = 0;
                uStack_f8 = 0;
                lStack_f0 = 0;
                uStack_108 = 0;
                puStack_100 = (uint *)0x0;
                puVar29 = &UNK_10dfe4888;
                if ((undefined *)*puVar52 != (undefined *)0x0) {
                  puVar29 = (undefined *)*puVar52;
                }
                puVar73 = &UNK_10dfe4888;
                if (0x13 < *(uint *)(puVar29 + 0x18)) {
                  puVar73 = *(undefined **)(puVar29 + 0x10);
                }
                uVar21 = (uint)(*(ushort *)(puVar73 + 4) >> 8) |
                         (*(ushort *)(puVar73 + 4) & 0xff00ff) << 8;
                bVar12 = puVar73[8];
                bVar13 = puVar73[9];
                bVar14 = puVar73[10];
                bVar15 = puVar73[0xb];
                uVar18 = *(ushort *)(puVar73 + 6);
                lStack_110 = 0;
                pbStack_118 = (byte *)0x0;
                lStack_120 = 0;
                uStack_128 = 0;
                lStack_130 = 0;
                uStack_138 = 0;
                uVar33 = uVar47 & ((int)uVar47 >> 0x1f ^ 0xffffffffU);
                ppbVar62 = (byte **)(ulong)uVar33;
                uVar22 = uVar47 - 4;
                uVar53 = (ulong)uVar22;
                uVar39 = 0x30;
                if (!bVar27) {
                  uVar39 = uVar47 * 0xc;
                }
                uVar4 = uVar22;
                if (!bVar27) {
                  uVar53 = 0;
                  uVar4 = 0;
                }
                uVar40 = (ulong)uVar4;
                lVar36 = uVar79 - uVar40;
                lVar41 = lVar60 + uVar34 * 0xc;
                ppbVar70 = ppbVar59;
                do {
                  bVar17 = (byte)puVar69[1];
                  uVar46 = uVar21;
                  if ((char)bVar17 < '\0') {
                    uVar56 = 0;
                    puVar42 = puVar69 + 2;
                    iVar50 = 1;
                    uVar71 = uVar21;
LAB_109720458:
                    fVar80 = 1.0;
                    if (uVar56 < uVar46) {
                      dVar81 = 1.0;
                      do {
                        uVar55 = (ulong)uVar56;
                        uVar57 = (int)(short)((ushort)(byte)puVar42[uVar56] << 8) |
                                 (uint)*(byte *)((long)(puVar42 + uVar56) + 1);
                        if (uVar57 != 0) {
                          puVar45 = (uint *)(param_6 + uVar55 * 4);
                          if ((uint)param_7 <= uVar56) {
                            puVar45 = (uint *)&UNK_10dfe4888;
                          }
                          uVar10 = *puVar45;
                          if (uVar10 != uVar57) {
                            if ((bVar17 >> 6 & 1) == 0) {
                              if (((int)uVar10 <=
                                   (int)(uVar57 & ((int)uVar57 >> 0x1f ^ 0xffffffffU)) &&
                                  uVar10 != 0) && (int)(uVar57 & (int)uVar57 >> 0x1f) <= (int)uVar10
                                 ) {
                                dVar83 = (double)(int)uVar10;
                                goto LAB_1097204d4;
                              }
LAB_109720574:
                              dVar81 = 0.0;
                              break;
                            }
                            uVar23 = (uint)(short)((ushort)(byte)puVar69[(ulong)uVar71 + uVar55 + 2]
                                                  << 8);
                            ppbVar70 = (byte **)(ulong)uVar23;
                            uVar19 = uVar23 | *(byte *)((long)(puVar69 + (ulong)uVar71 + uVar55 + 2)
                                                       + 1);
                            uVar20 = (int)(short)((ushort)(byte)puVar69[(ulong)(uVar71 + uVar21) +
                                                                        uVar55 + 2] << 8) |
                                     (uint)*(byte *)((long)(puVar69 +
                                                           (ulong)(uVar71 + uVar21) + uVar55 + 2) +
                                                    1);
                            if (((int)uVar19 <= (int)uVar57 && (int)uVar57 <= (int)uVar20) &&
                               ((-1 < (int)uVar23 || ((int)uVar20 < 1)))) {
                              ppbVar70 = (byte **)(ulong)(uVar10 - uVar19);
                              if ((int)uVar10 < (int)uVar19 || (int)uVar20 < (int)uVar10)
                              goto LAB_109720574;
                              if ((int)uVar10 < (int)uVar57) {
                                uVar57 = uVar57 - uVar19;
                                if (uVar57 != 0) {
                                  dVar83 = (double)(int)(uVar10 - uVar19);
LAB_1097204d4:
                                  dVar81 = dVar81 * (dVar83 / (double)(int)uVar57);
                                }
                              }
                              else if (uVar57 != uVar20) {
                                dVar83 = (double)(int)(uVar20 - uVar10);
                                uVar57 = uVar20 - uVar57;
                                goto LAB_1097204d4;
                              }
                            }
                          }
                        }
                        uVar56 = uVar56 + iVar50;
                      } while (uVar56 < uVar46);
                      fVar80 = (float)dVar81;
                      if (fVar80 == 0.0) goto LAB_109720a3c;
                    }
                    uVar46 = (uint)(*(ushort *)(pbVar38 + 2) >> 8) |
                             (*(ushort *)(pbVar38 + 2) & 0xff00ff) << 8;
                    puVar45 = (uint *)&UNK_10dfe4888;
                    if (uVar46 != 0) {
                      puVar45 = (uint *)(pbStack_278 + uVar46);
                    }
                    pbVar35 = (byte *)((long)puVar45 + (ulong)uStack_204);
                    ppbVar59 = ppbVar70;
                    pbStack_140 = pbVar35;
                    if ((pbVar35 < pbStack_278) ||
                       (uVar46 = (uint)(*puVar69 >> 8) | (*puVar69 & 0xff00ff) << 8,
                       pbStack_278 + uVar63 < pbVar35 ||
                       (uint)((int)(pbStack_278 + uVar63) - (int)pbVar35) < uVar46))
                    goto LAB_109720b28;
                    if (ppbStack_1a0 == (byte **)0x0) {
                      puVar54 = &uStack_f8;
                      ppbVar59 = ppbVar62;
                      FUN_10972142c(puVar54,ppbVar62,0);
                      if ((int)puVar54 == 0) goto LAB_109720b28;
                      uStack_f8 = CONCAT44(uVar33,(int)uStack_f8);
                      lStack_198 = lStack_f0;
                      ppbStack_1a0 = ppbVar62;
                      if (uVar39 != 0) {
                        _bzero(lStack_f0 + uVar53 * 0xc);
                      }
                    }
                    plVar37 = alStack_98;
                    ppbVar70 = &pbStack_a0;
                    if (((byte)puVar69[1] >> 5 & 1) != 0) {
                      ppbVar31 = &pbStack_140;
                      ppbVar59 = &pbStack_118;
                      FUN_109721624(ppbVar31,ppbVar59,pbVar35 + uVar46);
                      plVar37 = &lStack_110;
                      ppbVar70 = &pbStack_118;
                      if ((int)ppbVar31 == 0) goto LAB_109720b28;
                    }
                    lVar64 = *plVar37;
                    uVar71 = *(uint *)((ulong)ppbVar70 | 4);
                    uVar56 = uVar47;
                    if (uVar71 != 0) {
                      uVar56 = uVar71;
                    }
                    uVar57 = uVar56 & ((int)uVar56 >> 0x1f ^ 0xffffffffU);
                    ppbVar70 = (byte **)(ulong)uVar57;
                    iVar50 = (int)&uStack_128;
                    ppbVar59 = ppbVar70;
                    FUN_1097219a0();
                    lVar26 = lStack_120;
                    if (iVar50 == 0) goto LAB_109720b28;
                    uStack_128 = CONCAT44(uVar57,(int)uStack_128);
                    iVar50 = (int)&pbStack_140;
                    ppbVar59 = ppbVar70;
                    FUN_109721a58();
                    if (iVar50 == 0) goto LAB_109720b28;
                    iVar50 = (int)&uStack_138;
                    ppbVar59 = ppbVar70;
                    FUN_1097219a0();
                    lVar25 = lStack_130;
                    if (iVar50 == 0) goto LAB_109720b28;
                    uStack_138 = CONCAT44(uVar57,(int)uStack_138);
                    ppbVar31 = &pbStack_140;
                    FUN_109721a58(ppbVar31,ppbVar70,lStack_130,pbVar35 + uVar46);
                    ppbVar59 = ppbVar70;
                    if ((int)ppbVar31 == 0) goto LAB_109720b28;
                    if (uVar71 != 0) {
                      bVar3 = bVar27;
                      if (ppbStack_1a8 != (byte **)0x0) {
                        bVar3 = true;
                      }
                      if (!bVar3) {
                        ppbVar59 = ppbVar66;
                        FUN_1097213ac(&pbStack_e8,ppbVar66,uVar79);
                        if ((int)pbStack_e8 < 0) goto LAB_109720b28;
                        ppbStack_1a8 = (byte **)((ulong)pbStack_e8 >> 0x20);
                        uStack_1b0 = uStack_e0;
                      }
                      if ((bool)(bVar11 & uVar4 < uVar47)) {
                        puVar54 = (undefined8 *)(lStack_198 + uVar40 * 0xc);
                        pdVar43 = (double *)(lVar41 + uVar40 * 0xc);
                        lVar49 = lVar36;
                        do {
                          dVar81 = (double)CONCAT44((float)((ulong)*puVar54 >> 0x20) +
                                                    (float)((ulong)*pdVar43 >> 0x20),
                                                    (float)*puVar54 + SUB84(*pdVar43,0));
                          *pdVar43 = dVar81;
                          lVar49 = lVar49 + -1;
                          puVar54 = (undefined8 *)((long)puVar54 + 0xc);
                          pdVar43 = (double *)((long)pdVar43 + 0xc);
                        } while (lVar49 != 0);
                      }
                      ppbVar70 = (byte **)(ulong)uVar39;
                      if (uVar39 != 0) {
                        _bzero(lStack_198 + uVar53 * 0xc);
                      }
                    }
                    if (uVar56 != 0) {
                      uVar55 = 0;
                      do {
                        if (uVar71 == 0) {
                          uVar46 = (uint)uVar55;
LAB_1097207c4:
                          bVar3 = false;
                          if (uVar46 < uVar22) {
                            bVar3 = bVar27;
                          }
                          if (!bVar3) {
                            pfVar44 = (float *)(lStack_198 + (ulong)uVar46 * 0xc);
                            *(undefined1 *)(pfVar44 + 2) = 1;
                            *pfVar44 = *pfVar44 + fVar80 * (float)*(int *)(lVar26 + uVar55 * 4);
                            fVar82 = pfVar44[1] + fVar80 * (float)*(int *)(lVar25 + uVar55 * 4);
                            dVar81 = (double)(ulong)(uint)fVar82;
                            pfVar44[1] = fVar82;
                          }
                        }
                        else {
                          if (uVar55 < uVar71) {
                            uVar46 = *(uint *)(lVar64 + uVar55 * 4);
                          }
                          else {
                            uVar46 = 0;
                            uRam000000011382ab30 = uRam000000011382ab30 & 0xffffffff00000000;
                          }
                          if (uVar46 < (uint)ppbStack_1a0) goto LAB_1097207c4;
                        }
                        uVar55 = uVar55 + 1;
                      } while (uVar56 != uVar55);
                    }
                    bVar3 = bVar27;
                    if (uVar71 == 0) {
                      bVar3 = true;
                    }
                    if (!bVar3) {
                      if (uStack_300 == 0) {
                        iStack_144 = 0;
                        if (uVar47 != 0) {
                          pcVar67 = (char *)(lVar41 + 9);
                          uVar55 = uVar79;
                          iVar50 = 1;
                          do {
                            iVar58 = iVar50;
                            if (*pcVar67 == '\x01') {
                              ppbVar70 = (byte **)&iStack_144;
                              FUN_109721778(&uStack_108);
                            }
                            uVar55 = uVar55 - 1;
                            pcVar67 = pcVar67 + 0xc;
                            iVar50 = iVar58 + 1;
                            iStack_144 = iVar58;
                          } while (uVar55 != 0);
                          iStack_328 = (int)uStack_108;
                        }
                        ppbVar59 = ppbVar70;
                        if (iStack_328 < 0) goto LAB_109720b28;
                        uStack_300 = (ulong)uStack_108._4_4_;
                        puStack_2f8 = puStack_100;
                        if (uStack_108._4_4_ == 0) {
                          uStack_300 = 0;
                          goto LAB_109720a38;
                        }
                      }
                      puVar45 = puStack_2f8;
                      uVar55 = 0;
                      do {
                        uVar56 = *puVar45;
                        uVar46 = uVar56 + 1;
                        uVar71 = (uint)uVar55;
                        iVar50 = 0;
                        if (uVar71 < uVar46) {
                          lVar64 = uVar46 - uVar55;
                          pbVar35 = (byte *)(lStack_198 + 8 + uVar55 * 0xc);
                          do {
                            iVar50 = iVar50 + (uint)*pbVar35;
                            lVar64 = lVar64 + -1;
                            pbVar35 = pbVar35 + 0xc;
                          } while (lVar64 != 0);
                        }
                        uVar57 = (uVar56 - uVar71) - iVar50;
                        if (uVar57 < uVar56 - uVar71) {
                          iVar50 = uVar57 + 1;
                          do {
                            do {
                              uVar76 = uVar55;
                              uVar57 = uVar71;
                              if ((uint)uVar76 < uVar56) {
                                uVar57 = (uint)uVar76 + 1;
                              }
                              uVar55 = (ulong)uVar57;
                            } while ((*(char *)(lStack_198 + uVar76 * 0xc + 8) == '\0') ||
                                    (*(char *)(lStack_198 + uVar55 * 0xc + 8) != '\0'));
                            uVar55 = uVar76;
                            cVar32 = '\x01';
                            do {
                              uVar57 = uVar71;
                              if ((uint)uVar55 < uVar56) {
                                uVar57 = (uint)uVar55 + 1;
                              }
                              uVar55 = (ulong)uVar57;
                              cVar16 = *(char *)(lStack_198 + uVar55 * 0xc + 8);
                              bVar3 = cVar32 != '\0';
                              cVar32 = cVar16;
                            } while ((bVar3) || (cVar32 = '\0', uVar65 = uVar76, cVar16 == '\0'));
                            while( true ) {
                              uVar10 = uVar71;
                              if ((uint)uVar65 < uVar56) {
                                uVar10 = (uint)uVar65 + 1;
                              }
                              uVar65 = (ulong)uVar10;
                              if (uVar10 == uVar57) break;
                              func_0x0001097217dc(uStack_1b0,ppbStack_1a8,lStack_198,ppbStack_1a0,
                                                  uVar65,uVar76,uVar55,0);
                              puVar78 = (undefined4 *)(lStack_198 + (ulong)uVar10 * 0xc);
                              *puVar78 = SUB84(dVar81,0);
                              ppbVar70 = ppbStack_1a8;
                              func_0x0001097217dc(uStack_1b0,ppbStack_1a8,lStack_198,ppbStack_1a0,
                                                  uVar65,uVar76,uVar55,4);
                              puVar78[1] = SUB84(dVar81,0);
                              iVar50 = iVar50 + -1;
                              if (iVar50 == 0) goto LAB_109720a0c;
                            }
                          } while( true );
                        }
LAB_109720a0c:
                        puVar45 = puVar45 + 1;
                        uVar55 = (ulong)uVar46;
                      } while (puVar45 != puStack_2f8 + uStack_300);
                    }
LAB_109720a38:
                    bVar11 = 1;
                  }
                  else {
                    uVar56 = (uint)*(byte *)((long)puVar69 + 3) | (bVar17 & 0xf) << 8;
                    if ((uVar21 + uVar21 * uVar56 <=
                         ((uint)(uVar18 >> 8) | (uVar18 & 0xff00ff) << 8) * uVar21) &&
                       (uVar56 < *(uint *)((long)puVar52 + 0x14))) {
                      puVar42 = (ushort *)
                                (puVar73 +
                                (ulong)(uVar56 * uVar21) * 2 +
                                (ulong)bVar15 +
                                (ulong)bVar14 * 0x100 +
                                (ulong)bVar12 * 0x1000000 + (ulong)bVar13 * 0x10000);
                      puVar45 = (uint *)(puVar52[3] + (ulong)uVar56 * 8);
                      uVar57 = *puVar45;
                      uVar56 = puVar45[1];
                      if (uVar56 == 0xffffffff) {
                        if (uVar57 != 0xffffffff) {
                          uVar46 = uVar57 + 1;
                        }
                        uVar56 = 0;
                        if (uVar57 != 0xffffffff) {
                          uVar56 = uVar57;
                        }
                        iVar50 = 1;
                        uVar71 = 0;
                      }
                      else {
                        iVar50 = uVar56 - uVar57;
                        uVar46 = uVar56 + 1;
                        uVar71 = 0;
                        uVar56 = uVar57;
                      }
                      goto LAB_109720458;
                    }
                  }
LAB_109720a3c:
                  uStack_204 = uStack_204 + ((uint)(*puVar69 >> 8) | (*puVar69 & 0xff00ff) << 8);
                  puVar69 = (ushort *)
                            ((long)puVar69 +
                            (ulong)(uVar48 * 2 *
                                   ((byte)((byte)puVar69[1] >> 5) & 2 |
                                   (uint)(byte)((byte)puVar69[1] >> 7))) + 4);
                  iVar74 = iVar74 + 1;
                  uVar55 = 0;
                  iStack_d0 = iVar74;
                  uStack_c8 = uStack_204;
                  puStack_a8 = puVar69;
                  func_0x0001097218b0();
                } while ((uVar55 & 1) != 0);
                ppbVar59 = ppbVar70;
                if ((bool)(bVar11 & uVar4 < uVar47)) {
                  puVar52 = (undefined8 *)(lStack_198 + uVar40 * 0xc);
                  puVar54 = (undefined8 *)(lVar60 + uVar40 * 0xc + uVar34 * 0xc);
                  do {
                    *puVar54 = CONCAT44((float)((ulong)*puVar52 >> 0x20) +
                                        (float)((ulong)*puVar54 >> 0x20),
                                        (float)*puVar52 + (float)*puVar54);
                    lVar36 = lVar36 + -1;
                    puVar52 = (undefined8 *)((long)puVar52 + 0xc);
                    puVar54 = (undefined8 *)((long)puVar54 + 0xc);
                  } while (lVar36 != 0);
                }
LAB_109720b28:
                if ((int)uStack_138 != 0) {
                  _free(lStack_130);
                }
                if ((int)uStack_128 != 0) {
                  _free(lStack_120);
                }
                if ((int)pbStack_118 != 0) {
                  _free(lStack_110);
                }
                if (iStack_328 != 0) {
                  _free(puStack_100);
                }
                if ((int)uStack_f8 != 0) {
                  _free(lStack_f0);
                }
              }
            }
            if ((int)pbStack_a0 != 0) {
              _free(alStack_98[0]);
            }
          }
        }
      }
      if (*(int *)((long)param_1 + 0x1c) == 0) {
LAB_109720ed0:
        ppbVar59 = ppbVar77;
        FUN_1097213ac(param_4,ppbVar77,(ulong)uVar51);
      }
      else if (*(int *)((long)param_1 + 0x1c) == 2) {
        FUN_10972109c(&pbStack_d8,param_1);
        pbVar38 = (byte *)CONCAT44(uStack_c4,uStack_c8);
        if (pbVar38 == (byte *)0x0) goto LAB_109720ed0;
        puVar52 = (undefined8 *)&uStack_178;
        if (param_8 != (undefined8 *)0x0) {
          puVar52 = param_8;
        }
        uVar48 = (uint)(*(ushort *)(pbVar38 + 2) >> 8) | (*(ushort *)(pbVar38 + 2) & 0xff00ff) << 8;
        ppbVar59 = (byte **)(ulong)uVar48;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar48);
        if ((puVar52[5] == 0) ||
           (puVar52 = puVar5, FUN_109739e3c(puVar5,ppbVar59,uVar48 * -0x61c8864f),
           puVar52 == (undefined8 *)0x0)) {
          FUN_109714db8(puVar5,&uStack_f8,uVar48 * -0x61c8864f);
          uVar48 = *puVar1;
          if ((param_5 == 0) || ((*pbVar38 >> 1 & 1) != 0)) {
            FUN_10971fa1c(&pbStack_a0,param_3,ppbVar59);
            ppbVar66 = &pbStack_a0;
            FUN_10971fb24(ppbVar66,param_2,param_3,param_4,param_5,param_6,
                          uStack_270 | param_7 & 0xffffffff,puVar5,param_9 + 1);
            if ((int)ppbVar66 != 0) {
              uVar33 = *puVar1;
              bVar27 = (*pbVar38 & 2) == 0;
              goto LAB_109720ca8;
            }
          }
          else {
            bVar27 = true;
            uVar33 = uVar48;
LAB_109720ca8:
            uVar39 = 0;
            if (uVar48 <= uVar33) {
              uVar39 = uVar33 - uVar48;
            }
            puVar52 = (undefined8 *)(*(long *)puVar28 + (ulong)uVar48 * 0xc);
            if (uVar48 != 0) {
              uVar33 = uVar39;
            }
            uVar34 = (ulong)uVar33;
            if (!bVar27) {
              uVar79 = 0;
              ppbVar66 = ppbVar77;
              do {
                uVar63 = (uVar33 - 4) + uVar79;
                if ((uint)uVar63 < uVar33) {
                  puVar54 = (undefined8 *)((long)puVar52 + (uVar63 & 0xffffffff) * 0xc);
                }
                else {
                  puVar54 = (undefined8 *)0x11382ab30;
                  uRam000000011382ab38 = 0;
                  uRam000000011382ab30 = 0;
                }
                ppbVar62 = ppbVar66;
                if (uVar51 <= uVar79) {
                  ppbVar62 = (byte **)0x11382ab30;
                  uRam000000011382ab38 = 0;
                  uRam000000011382ab30 = 0;
                }
                pbVar35 = (byte *)*puVar54;
                *(undefined4 *)(ppbVar62 + 1) = *(undefined4 *)(puVar54 + 1);
                *ppbVar62 = pbVar35;
                uVar79 = uVar79 + 1;
                ppbVar66 = (byte **)((long)ppbVar66 + 0xc);
              } while (uVar79 != 4);
            }
            if (uVar33 != 0) {
              func_0x000109721254(pbVar38,&pbStack_a0,&pbStack_e8);
              if (*puVar6 == 0) {
                uVar68 = 0x11382ab30;
                uRam000000011382ab38 = 0;
                uRam000000011382ab30 = 0;
              }
              else {
                uVar68 = *(undefined8 *)puVar7;
              }
              if ((*pbVar38 & 0x18) == 8) {
                func_0x000109721368(uVar68,puVar52,uVar34);
                FUN_109721bf0(&pbStack_a0,puVar52,uVar34);
              }
              else {
                FUN_109721bf0(&pbStack_a0,puVar52,uVar34);
                func_0x000109721368(uVar68,puVar52,uVar34);
              }
            }
            if (((param_5 & 1) == 0) && ((pbVar38[1] >> 1 & 1) == 0)) {
              uVar39 = (uint)pbVar38[4];
              if ((pbVar38[1] & 1) == 0) {
                uVar47 = (uint)pbVar38[5];
              }
              else {
                uVar39 = (uint)CONCAT11(pbVar38[4],pbVar38[5]);
                uVar47 = (uint)(*(ushort *)(pbVar38 + 6) >> 8) |
                         (*(ushort *)(pbVar38 + 6) & 0xff00ff) << 8;
              }
              uVar48 = *puVar1;
              if ((uVar39 < uVar48) && (uVar47 < uVar33)) {
                uVar68 = *(undefined8 *)((long)puVar52 + (ulong)uVar47 * 0xc);
                uVar61 = *(undefined8 *)(*(long *)puVar28 + (ulong)uVar39 * 0xc);
                fVar80 = (float)uVar61 - (float)uVar68;
                fVar82 = (float)((ulong)uVar61 >> 0x20) - (float)((ulong)uVar68 >> 0x20);
                if ((fVar80 != 0.0) || (fVar82 != 0.0)) {
                  lVar60 = uVar34 * 0xc;
                  do {
                    *puVar52 = CONCAT44(fVar82 + (float)((ulong)*puVar52 >> 0x20),
                                        fVar80 + (float)*puVar52);
                    lVar60 = lVar60 + -0xc;
                    puVar52 = (undefined8 *)((long)puVar52 + 0xc);
                  } while (lVar60 != 0);
                }
              }
            }
            else {
              uVar48 = *puVar1;
            }
            FUN_1097210d4(param_4,uVar48 - 4);
            if (param_4[1] < 0x30d41) {
              FUN_1096fc87c(puVar5,ppbVar59);
              goto LAB_109720e98;
            }
          }
          FUN_1096fc87c(puVar5);
          pbVar38 = pbStack_d8;
          goto LAB_109720fa8;
        }
LAB_109720e98:
        if ((pbVar38[1] >> 5 & 1) != 0) {
          param_1 = &pbStack_d8;
          pbVar38 = pbVar38 + ((ulong)pbStack_c0 & 0xffffffff);
          goto SUB_1097215a4;
        }
        goto LAB_109720ed0;
      }
      if (param_9 == 0) {
        if (uVar9 < 4) {
          uRam000000011382ab38 = 0;
          uRam000000011382ab30 = 0;
        }
        else {
          fVar80 = *(float *)ppbVar77;
          if ((fVar80 != 0.0) && (*puVar1 != 0)) {
            lVar60 = (ulong)*puVar1 * 0xc;
            pfVar44 = *(float **)puVar28;
            do {
              *pfVar44 = *pfVar44 - fVar80;
              lVar60 = lVar60 + -0xc;
              pfVar44 = pfVar44 + 3;
            } while (lVar60 != 0);
          }
        }
      }
      ppbVar77 = (byte **)(ulong)(~*param_4 >> 0x1f);
    }
    else {
      if (iVar74 != 1) goto LAB_10971ff54;
      pbVar75 = param_1[2];
      pbVar72 = *param_1;
      uVar79 = (long)(short)((ushort)*pbVar75 << 8) | (ulong)pbVar75[1];
      pbVar35 = pbVar75 + uVar79 * 2 + 10;
      ppbVar59 = param_1;
      pbVar38 = pbStack_d8;
      if ((pbVar72 <= pbVar35) &&
         (pbVar2 = pbVar72 + *(uint *)(param_1 + 1),
         pbVar35 <= pbVar2 && ((int)pbVar2 - (int)pbVar35 & 0xfffffffeU) != 0)) {
        iVar50 = ((uint)(*(ushort *)(pbVar75 + uVar79 * 2 + 8) >> 8) |
                 (*(ushort *)(pbVar75 + uVar79 * 2 + 8) & 0xff00ff) << 8) + 1;
        uVar9 = param_4[1];
        FUN_10972142c(param_4,uVar9 + iVar50 + 4,1);
        uVar33 = param_4[1] + iVar50 & ((int)(param_4[1] + iVar50) >> 0x1f ^ 0xffffffffU);
        ppbVar59 = (byte **)(ulong)uVar33;
        puVar28 = param_4;
        FUN_10972142c(param_4,ppbVar59,0);
        pbVar38 = pbStack_d8;
        if ((int)puVar28 != 0) {
          param_4[1] = uVar33;
          uVar39 = 0;
          if (uVar9 <= uVar33) {
            uVar39 = uVar33 - uVar9;
          }
          if (uVar9 != 0) {
            uVar33 = uVar39;
          }
          if ((param_5 & 1) != 0) goto LAB_10971ff54;
          lVar60 = *(long *)(param_4 + 2);
          ppbVar77 = (byte **)(lVar60 + (ulong)uVar9 * 0xc);
          ppbVar59 = (byte **)(ulong)(uint)(iVar50 * 0xc);
          _bzero(ppbVar77);
          if (0 < (int)uVar79) {
            pbVar38 = pbVar75 + 0xb;
            uVar63 = uVar79;
            do {
              uVar18 = *(ushort *)(pbVar38 + -1);
              if (((uint)(uVar18 >> 8) | (uVar18 & 0xff00ff) << 8) < uVar33) {
                lVar36 = (long)ppbVar77 +
                         (ulong)((uint)(uVar18 >> 8) | (uVar18 & 0xff00ff) << 8) * 0xc;
              }
              else {
                uRam000000011382ab38 = 0;
                uRam000000011382ab30 = 0;
                lVar36 = 0x11382ab30;
              }
              pbVar38 = pbVar38 + 2;
              *(undefined1 *)(lVar36 + 9) = 1;
              uVar63 = uVar63 - 1;
            } while (uVar63 != 0);
          }
          lVar36 = (ulong)pbVar75[uVar79 * 2 + 0xb] + (ulong)*pbVar35 * 0x100;
          pbVar38 = pbVar35 + lVar36 + 2;
          if (pbVar72 <= pbVar38 && pbVar38 < pbVar2) {
            pbStack_d8 = pbVar38;
            if (uVar33 == 0) {
LAB_10971ff04:
              ppbVar66 = &pbStack_d8;
              ppbVar59 = ppbVar77;
              FUN_1097214f4(ppbVar66,ppbVar77,uVar33,pbVar2,0,2,0x10);
              pbVar38 = pbStack_d8;
              if (((ulong)ppbVar66 & 1) != 0) {
                ppbVar66 = &pbStack_d8;
                FUN_1097214f4(ppbVar66,ppbVar77,uVar33,pbVar2,4,4,0x20);
                ppbVar59 = ppbVar77;
                pbVar38 = pbStack_d8;
                if (((ulong)ppbVar66 & 1) != 0) goto LAB_10971ff54;
              }
            }
            else {
              pbVar72 = pbVar38;
              pbStack_d8 = pbVar35 + lVar36 + 3;
              uVar39 = 0;
              do {
                pbVar35 = pbVar72 + 2;
                bVar11 = *pbVar72;
                uVar51 = uVar39 + 1;
                *(byte *)((long)ppbVar77 + ((ulong)uVar39 * 3 + 2) * 4) = bVar11;
                if ((bVar11 >> 3 & 1) != 0) {
                  if (pbVar2 < pbVar35) break;
                  uVar47 = uVar51 + *pbStack_d8;
                  if (uVar33 <= uVar51 + *pbStack_d8) {
                    uVar47 = uVar33;
                  }
                  pbStack_d8 = pbVar35;
                  if (uVar51 < uVar47) {
                    iVar50 = ~uVar39 + uVar47;
                    pbVar35 = (byte *)(lVar60 + (ulong)uVar9 * 0xc + 8 + (ulong)uVar51 * 0xc);
                    do {
                      *pbVar35 = bVar11;
                      iVar50 = iVar50 + -1;
                      pbVar35 = pbVar35 + 0xc;
                      uVar51 = uVar47;
                    } while (iVar50 != 0);
                  }
                }
                if (uVar33 <= uVar51) goto LAB_10971ff04;
                pbVar35 = pbStack_d8 + 1;
                pbVar72 = pbStack_d8;
                pbStack_d8 = pbVar35;
                uVar39 = uVar51;
              } while (pbVar35 <= pbVar2);
            }
          }
        }
      }
LAB_109720fa8:
      pbStack_d8 = pbVar38;
      ppbVar77 = (byte **)0x0;
    }
    param_2 = ppbVar59;
    if (auStack_188[0] != 0) {
      _free(lStack_180);
      param_2 = ppbVar59;
    }
    param_1 = (byte **)&uStack_178;
    FUN_10972c54c();
  }
  else {
LAB_109720fb0:
    ppbVar77 = (byte **)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppbVar77;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (*(int *)((long)param_2 + 0x1c) != 2) {
    *param_1 = (byte *)0x0;
    param_1[1] = (byte *)0x0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = (byte *)0x0;
    return param_1;
  }
  pbVar38 = param_2[2];
  pbVar35 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = pbVar35;
  param_1[2] = (byte *)0x0;
  *(undefined4 *)(param_1 + 3) = 0;
  pbVar38 = pbVar38 + 10;
SUB_1097215a4:
  if ((*param_1 <= pbVar38) &&
     (pbVar35 = *param_1 + *(uint *)(param_1 + 1), uVar34 = (long)pbVar35 - (long)pbVar38,
     pbVar38 <= pbVar35 && (uVar34 & 0xfffffffc) != 0)) {
    bVar11 = pbVar38[1];
    uVar48 = 6;
    if ((bVar11 & 1) != 0) {
      uVar48 = 8;
    }
    uVar33 = uVar48 + 8;
    if (-1 < (char)bVar11) {
      uVar33 = uVar48;
    }
    if ((bVar11 & 0x40) != 0) {
      uVar33 = uVar48 + 4;
    }
    if ((bVar11 & 8) != 0) {
      uVar33 = uVar48 + 2;
    }
    if (uVar33 <= (uint)uVar34) {
      param_1[2] = pbVar38;
      *(uint *)(param_1 + 3) = uVar33;
      return param_1;
    }
  }
  param_1[2] = (byte *)0x0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10972109c; end: 1097210d3;  */

void FUN_10972109c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (*(int *)((long)param_2 + 0x1c) != 2) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    return;
  }
  uVar5 = param_2[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar7 = uVar5 + 10;
  if ((*param_1 <= uVar7) &&
     (uVar1 = *param_1 + (ulong)(uint)param_1[1], uVar4 = uVar1 - uVar7,
     uVar7 <= uVar1 && (uVar4 & 0xfffffffc) != 0)) {
    bVar3 = *(byte *)(uVar5 + 0xb);
    uVar6 = 6;
    if ((bVar3 & 1) != 0) {
      uVar6 = 8;
    }
    uVar2 = uVar6 + 8;
    if (-1 < (char)bVar3) {
      uVar2 = uVar6;
    }
    if ((bVar3 & 0x40) != 0) {
      uVar2 = uVar6 + 4;
    }
    if ((bVar3 & 8) != 0) {
      uVar2 = uVar6 + 2;
    }
    if (uVar2 <= (uint)uVar4) {
      param_1[2] = uVar7;
      *(uint *)(param_1 + 3) = uVar2;
      return;
    }
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1097210d4; end: 109721143;  */

long FUN_1097210d4(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  lVar2 = param_1;
  FUN_10972142c(param_1,param_2,0);
  if ((int)lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < param_2) && ((param_2 - uVar1) * 0xc != 0)) {
      _bzero(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc);
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return lVar2;
}



/* Entry: 109721144; end: 1097213ab;  */

undefined8 FUN_109721144(uint *param_1,uint param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *param_1;
  if (param_2 < uVar2) {
    puVar1 = &UNK_10dfe4888;
    if (*(undefined **)(param_1 + 6) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 6);
    }
    pbVar3 = (byte *)(*(long *)(puVar1 + 0x10) + (ulong)param_2 * 4 + 2);
  }
  else {
    if (param_1[1] <= param_2) {
      return 0;
    }
    puVar1 = &UNK_10dfe4888;
    if (*(undefined **)(param_1 + 6) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 6);
    }
    pbVar3 = (byte *)(*(long *)(puVar1 + 0x10) + (ulong)uVar2 * 4 + (ulong)(param_2 - uVar2) * 2);
  }
  *param_3 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
  return 1;
}



/* Entry: 1097213ac; end: 10972142b;  */

void FUN_1097213ac(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar2 + param_3;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  lVar3 = param_1;
  FUN_10972142c(param_1,uVar1,0);
  if (((int)lVar3 != 0) && (*(uint *)(param_1 + 4) = uVar1, param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (*(long *)(param_1 + 8) + (ulong)uVar2 * 0xc,param_2,(ulong)param_3 * 0xc);
    return;
  }
  return;
}



/* Entry: 10972142c; end: 1097214f3;  */

undefined8 FUN_10972142c(uint *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_2 <= uVar3) {
      return 1;
    }
    do {
      uVar5 = (uint)uVar4 + ((uint)uVar4 >> 1) + 8;
      uVar4 = (ulong)uVar5;
    } while (uVar5 < param_2);
  }
  else {
    uVar5 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar5 = param_2;
    }
    uVar4 = (ulong)uVar5;
    if (uVar5 <= uVar3 && uVar3 >> 2 <= uVar5) {
      return 1;
    }
  }
  uVar5 = (uint)uVar4;
  if (uVar5 < 0x15555556) {
    lVar1 = *(long *)(param_1 + 2);
    if (uVar5 == 0) {
      _free();
      lVar1 = 0;
    }
    else {
      _realloc(lVar1,uVar4 * 0xc);
      if (lVar1 == 0) {
        uVar3 = *param_1;
        if (uVar5 <= uVar3) {
          return 1;
        }
        goto LAB_109721498;
      }
    }
    *(long *)(param_1 + 2) = lVar1;
    uVar2 = 1;
  }
  else {
LAB_109721498:
    uVar2 = 0;
    uVar5 = ~uVar3;
  }
  *param_1 = uVar5;
  return uVar2;
}



/* Entry: 1097214f4; end: 109721623;  */

undefined8
FUN_1097214f4(ulong *param_1,long param_2,uint param_3,byte *param_4,long param_5,byte param_6,
             byte param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  
  if ((ulong)param_3 != 0) {
    iVar3 = 0;
    pbVar5 = (byte *)*param_1;
    lVar4 = (ulong)param_3 * 0xc;
    do {
      bVar2 = *(byte *)(param_2 + 8);
      if ((param_6 & bVar2) == 0) {
        if ((param_7 & bVar2) == 0) {
          pbVar1 = pbVar5 + 2;
          if (param_4 < pbVar1) {
            return 0;
          }
          iVar3 = iVar3 + ((int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1]);
          *param_1 = (ulong)pbVar1;
          pbVar5 = pbVar1;
        }
      }
      else {
        pbVar1 = pbVar5 + 1;
        if (param_4 < pbVar1) {
          return 0;
        }
        *param_1 = (ulong)pbVar1;
        if ((param_7 & bVar2) == 0) {
          iVar3 = iVar3 - (uint)*pbVar5;
          pbVar5 = pbVar1;
        }
        else {
          iVar3 = iVar3 + (uint)*pbVar5;
          pbVar5 = pbVar1;
        }
      }
      *(float *)(param_2 + param_5) = (float)iVar3;
      param_2 = param_2 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 109721624; end: 109721777;  */

long FUN_109721624(ulong *param_1,long param_2,ushort *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  pbVar6 = (byte *)*param_1;
  puVar8 = (ushort *)(pbVar6 + 1);
  if (param_3 < puVar8) {
    return 0;
  }
  *param_1 = (ulong)puVar8;
  bVar2 = *pbVar6;
  uVar13 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    if (param_3 < pbVar6 + 2) {
      return 0;
    }
    *param_1 = (ulong)(pbVar6 + 2);
    uVar13 = (uint)(byte)*puVar8 | (bVar2 & 0x7f) << 8;
  }
  lVar4 = param_2;
  FUN_1097115cc(param_2,uVar13,0);
  if ((int)lVar4 != 0) {
    *(uint *)(param_2 + 4) = uVar13;
    if (uVar13 != 0) {
      iVar5 = 0;
      puVar8 = (ushort *)*param_1;
      uVar11 = 0;
      do {
        puVar7 = (ushort *)((long)puVar8 + 1);
        if (param_3 < puVar7) {
          return 0;
        }
        *param_1 = (ulong)puVar7;
        lVar4 = ((ulong)(byte)*puVar8 & 0x7f) + 1;
        uVar10 = (uint)uVar11;
        uVar1 = uVar10 + (int)lVar4;
        uVar9 = (ulong)uVar1;
        if (uVar13 < uVar1) {
          return 0;
        }
        uVar12 = uVar11;
        if ((char)(byte)*puVar8 < '\0') {
          if (param_3 < puVar7 + lVar4) {
            return 0;
          }
          puVar8 = puVar7;
          if (uVar10 < uVar1) {
            do {
              puVar8 = puVar7 + 1;
              iVar5 = iVar5 + ((uint)(*puVar7 >> 8) | (*puVar7 & 0xff00ff) << 8);
              *(int *)(*(long *)(param_2 + 8) + uVar11 * 4) = iVar5;
              *param_1 = (ulong)puVar8;
              uVar11 = uVar11 + 1;
              puVar7 = puVar8;
              uVar12 = uVar9;
            } while (uVar9 != uVar11);
          }
        }
        else {
          if (param_3 < (ushort *)((long)puVar7 + lVar4)) {
            return 0;
          }
          puVar8 = puVar7;
          if (uVar10 < uVar1) {
            do {
              puVar8 = (ushort *)((long)puVar7 + 1);
              uVar3 = *puVar7;
              *param_1 = (ulong)puVar8;
              iVar5 = iVar5 + (uint)(byte)uVar3;
              *(int *)(*(long *)(param_2 + 8) + uVar11 * 4) = iVar5;
              uVar11 = uVar11 + 1;
              puVar7 = puVar8;
              uVar12 = uVar9;
            } while (uVar9 != uVar11);
          }
        }
        uVar11 = uVar12;
      } while ((uint)uVar12 < uVar13);
    }
    lVar4 = 1;
  }
  return lVar4;
}



/* Entry: 109721778; end: 1097217db;  */

void FUN_109721778(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if (*param_1 <= (int)uVar2) {
    piVar1 = param_1;
    FUN_1097115cc(param_1,uVar2 + 1,0);
    if ((int)piVar1 == 0) {
      uRam000000011382ab30 = 0;
      return;
    }
    uVar2 = param_1[1];
  }
  param_1[1] = uVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 4) = *param_2;
  return;
}



/* Entry: 1097217dc; end: 109721937;  */

float FUN_1097217dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5,
                   uint param_6,uint param_7,long param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_1 + (ulong)param_6 * 0xc + param_8);
  fVar4 = *(float *)(param_1 + (ulong)param_7 * 0xc + param_8);
  fVar1 = *(float *)(param_3 + (ulong)param_6 * 0xc + param_8);
  fVar3 = *(float *)(param_3 + (ulong)param_7 * 0xc + param_8);
  if (fVar2 == fVar4) {
    if (fVar1 != fVar3) {
      fVar1 = 0.0;
    }
    return fVar1;
  }
  fVar5 = *(float *)(param_1 + (ulong)param_5 * 0xc + param_8);
  fVar6 = fVar2;
  if (fVar4 < fVar2) {
    fVar6 = fVar4;
  }
  if (fVar6 < fVar5) {
    fVar6 = fVar2;
    if (fVar2 < fVar4) {
      fVar6 = fVar4;
    }
    if (fVar5 < fVar6) {
      return fVar1 + (fVar3 - fVar1) * ((fVar5 - fVar2) / (fVar4 - fVar2));
    }
    if (fVar2 <= fVar4) {
      fVar1 = fVar3;
    }
    return fVar1;
  }
  if (fVar4 <= fVar2) {
    fVar1 = fVar3;
  }
  return fVar1;
}



/* Entry: 109721938; end: 10972199f;  */

long FUN_109721938(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  lVar2 = param_1;
  FUN_1097115cc(param_1,param_2,1);
  if ((int)lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < param_2) && ((param_2 - uVar1 & 0x3fffffff) != 0)) {
      _bzero(*(long *)(param_1 + 8) + (ulong)uVar1 * 4);
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return lVar2;
}



/* Entry: 1097219a0; end: 109721a33;  */

undefined8 FUN_1097219a0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 >> 0x1e == 0) {
    lVar1 = *(long *)(param_1 + 2);
    FUN_109721a34(lVar1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_109721a04;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_109721a04:
  *param_1 = uVar4;
  return uVar2;
}



/* Entry: 109721a34; end: 109721a57;  */

undefined8 FUN_109721a34(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 << 2);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109721a58; end: 109721bef;  */

undefined8 FUN_109721a58(ulong *param_1,uint param_2,long param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar11 = 0;
  puVar5 = (uint *)*param_1;
  do {
    puVar9 = (uint *)((long)puVar5 + 1);
    if (param_4 < puVar9) {
      return 0;
    }
    *param_1 = (ulong)puVar9;
    bVar2 = (byte)*puVar5;
    lVar6 = ((ulong)bVar2 & 0x3f) + 1;
    uVar10 = (uint)uVar11;
    uVar1 = (int)lVar6 + uVar10;
    uVar4 = (ulong)uVar1;
    if (param_2 < uVar1) {
      return 0;
    }
    bVar3 = bVar2 >> 6;
    puVar5 = puVar9;
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (param_4 < (uint *)((long)puVar9 + lVar6)) {
          return 0;
        }
        if (uVar10 < uVar1) {
          lVar6 = uVar4 - uVar11;
          piVar7 = (int *)(param_3 + uVar11 * 4);
          do {
            puVar5 = (uint *)((long)puVar9 + 1);
            *piVar7 = (int)(char)*puVar9;
            lVar6 = lVar6 + -1;
            piVar7 = piVar7 + 1;
            puVar9 = puVar5;
          } while (lVar6 != 0);
          *param_1 = (ulong)puVar5;
          uVar11 = uVar4;
        }
      }
      else {
        if (param_4 < (uint *)((long)puVar9 + lVar6 * 2)) {
          return 0;
        }
        if (uVar10 < uVar1) {
          lVar6 = uVar4 - uVar11;
          puVar8 = (uint *)(param_3 + uVar11 * 4);
          do {
            *puVar8 = (int)(short)((ushort)(byte)*puVar9 << 8) | (uint)*(byte *)((long)puVar9 + 1);
            puVar9 = (uint *)((long)puVar9 + 2);
            *param_1 = (ulong)puVar9;
            lVar6 = lVar6 + -1;
            uVar11 = uVar4;
            puVar8 = puVar8 + 1;
            puVar5 = puVar9;
          } while (lVar6 != 0);
        }
      }
    }
    else if (bVar3 == 3) {
      if (param_4 < (uint *)((long)puVar9 + (ulong)(uint)((int)lVar6 << 2))) {
        return 0;
      }
      if (uVar10 < uVar1) {
        lVar6 = uVar4 - uVar11;
        puVar8 = (uint *)(param_3 + uVar11 * 4);
        do {
          puVar5 = puVar9 + 1;
          uVar1 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
          *puVar8 = uVar1 >> 0x10 | uVar1 << 0x10;
          *param_1 = (ulong)puVar5;
          lVar6 = lVar6 + -1;
          uVar11 = uVar4;
          puVar8 = puVar8 + 1;
          puVar9 = puVar5;
        } while (lVar6 != 0);
      }
    }
    else if (uVar10 < uVar1) {
      _bzero(param_3 + uVar11 * 4,((ulong)bVar2 & 0x3f) * 4 + 4);
      uVar11 = (ulong)(uVar10 + (bVar2 & 0x3f) + 1);
    }
  } while ((uint)uVar11 < param_2);
  return 1;
}



/* Entry: 109721bf0; end: 109721c3f;  */

void FUN_109721bf0(undefined8 *param_1,float *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  
  iVar2 = -(uint)((float)*param_1 == 1.0);
  iVar4 = -(uint)((float)((ulong)*param_1 >> 0x20) == 0.0);
  iVar5 = -(uint)((float)param_1[1] == 0.0);
  iVar6 = -(uint)((float)((ulong)param_1[1] >> 0x20) == 1.0);
  auVar1[1] = ~(byte)((uint)iVar2 >> 8);
  auVar1[0] = ~(byte)iVar2;
  auVar1[2] = ~(byte)((uint)iVar2 >> 0x10);
  auVar1[3] = ~(byte)((uint)iVar2 >> 0x18);
  auVar1[4] = ~(byte)iVar4;
  auVar1[5] = ~(byte)((uint)iVar4 >> 8);
  auVar1[6] = ~(byte)((uint)iVar4 >> 0x10);
  auVar1[7] = ~(byte)((uint)iVar4 >> 0x18);
  auVar1[8] = ~(byte)iVar5;
  auVar1[9] = ~(byte)((uint)iVar5 >> 8);
  auVar1[10] = ~(byte)((uint)iVar5 >> 0x10);
  auVar1[0xb] = ~(byte)((uint)iVar5 >> 0x18);
  auVar1[0xc] = ~(byte)iVar6;
  auVar1[0xd] = ~(byte)((uint)iVar6 >> 8);
  auVar1[0xe] = ~(byte)((uint)iVar6 >> 0x10);
  auVar1[0xf] = ~(byte)((uint)iVar6 >> 0x18);
  uVar3 = NEON_umaxv(auVar1,4);
  if (((uVar3 & 1) != 0) && ((ulong)param_3 != 0)) {
    pfVar7 = param_2;
    do {
      pfVar8 = pfVar7 + 3;
      *(ulong *)pfVar7 =
           CONCAT44((float)((ulong)param_1[1] >> 0x20) * pfVar7[1] +
                    (float)((ulong)*param_1 >> 0x20) * *pfVar7,
                    (float)param_1[1] * pfVar7[1] + (float)*param_1 * *pfVar7);
      pfVar7 = pfVar8;
    } while (pfVar8 != param_2 + (ulong)param_3 * 3);
  }
  return;
}



/* Entry: 109721c40; end: 109721d03;  */

int * FUN_109721c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 4;
  if (*piVar1 != 0) {
    param_1[5] = 0;
    _free(*(undefined8 *)(param_1 + 6));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*param_1 != 0) {
    param_1[1] = 0;
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



/* Entry: 109721d04; end: 109721d7f;  */

void FUN_109721d04(undefined *param_1)

{
  int *piVar1;
  
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_109722fc4(param_1);
    func_0x000109723b60(param_1 + 0xb0);
    func_0x000109723b24(param_1 + 0xa0);
    piVar1 = (int *)(param_1 + 0x50);
    if (*piVar1 != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      _free(*(undefined8 *)(param_1 + 0x58));
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_109710c0c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 109721d80; end: 109722fc3;  */

undefined4 * FUN_109721d80(int *param_1)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined *puVar9;
  uint *puVar10;
  ushort *puVar11;
  undefined *puVar12;
  int *piVar13;
  undefined1 uVar14;
  uint uVar15;
  char *pcVar16;
  ulong uVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  undefined *puVar27;
  undefined *puVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  ushort *puVar32;
  uint uVar33;
  ulong uVar34;
  undefined *puStack_20c0;
  undefined8 uStack_20b8;
  byte bStack_20b0;
  int iStack_20ac;
  double adStack_20a8 [513];
  uint uStack_10a0;
  char cStack_109c;
  long lStack_1098;
  undefined8 uStack_1090;
  byte bStack_1088;
  int iStack_1084;
  double adStack_1080 [513];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined4 *)0x1;
  _calloc(1,200);
  if (puVar7 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar7[0xe] = 0x10000;
  iVar21 = param_1[6];
  if (iVar21 == -1) {
    piVar13 = param_1;
    FUN_109710978();
    iVar21 = (int)piVar13;
  }
  puVar7[0xe] = iVar21;
  *(undefined1 *)(puVar7 + 0xf) = 1;
  piVar13 = (int *)&UNK_10dfe4888;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1,0x43464632,*(undefined8 *)(param_1 + 10));
    piVar13 = param_1;
    if (param_1 == (int *)0x0) {
      piVar13 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar13 != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar14 = 0;
  *(int **)(puVar7 + 0xc) = piVar13;
  do {
    *(undefined1 *)(puVar7 + 10) = uVar14;
    pcVar16 = *(char **)(*(long *)(puVar7 + 0xc) + 0x10);
    *(char **)(puVar7 + 2) = pcVar16;
    uVar23 = *(uint *)(*(long *)(puVar7 + 0xc) + 0x18);
    *(char **)(puVar7 + 4) = pcVar16 + uVar23;
    uVar15 = uVar23 << 6;
    if (uVar15 < 0x4001) {
      uVar15 = 0x4000;
    }
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uVar30 = 0x3fffffff;
    if (uVar23 >> 0x1a == 0) {
      uVar30 = uVar15;
    }
    puVar7[6] = uVar23;
    puVar7[7] = uVar30;
    puVar7[0xb] = 0;
    *puVar7 = 0;
    puVar7[9] = 0;
    if (pcVar16 == (char *)0x0) {
      FUN_1096f5a5c();
      *(undefined8 *)(puVar7 + 0xc) = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      puVar7[6] = 0;
      goto LAB_109721f74;
    }
    if (uVar23 < 5) break;
    if (*pcVar16 == '\x02') {
      if (puVar7[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(puVar7 + 0xc));
        *(undefined8 *)(puVar7 + 0xc) = 0;
        *(undefined8 *)(puVar7 + 2) = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar7[6] = 0;
      }
      else {
        puVar7[0xb] = 0;
        if (((char *)(ulong)(uint)puVar7[6] < pcVar16 + (5 - *(long *)(puVar7 + 2))) ||
           (puVar7[0xb] != 0)) break;
        cVar3 = *pcVar16;
        FUN_1096f5a5c(*(undefined8 *)(puVar7 + 0xc));
        *(undefined8 *)(puVar7 + 0xc) = 0;
        *(undefined8 *)(puVar7 + 2) = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar7[6] = 0;
        if (cVar3 != '\x02') goto LAB_109721f64;
      }
      if (piVar13[1] != 0) {
        piVar13[1] = 0;
      }
      goto LAB_109721f74;
    }
    if ((puVar7[0xb] == 0) || ((*(byte *)(puVar7 + 10) & 1) != 0)) break;
    if (piVar13[1] == 0) {
      uVar17 = (ulong)(uint)piVar13[6];
LAB_109721f48:
      *(undefined8 *)(puVar7 + 2) = 0;
      *(ulong *)(puVar7 + 4) = uVar17;
      break;
    }
    piVar8 = piVar13;
    FUN_1096f59a0();
    uVar17 = (ulong)(uint)piVar13[6];
    if (((ulong)piVar8 & 1) == 0) goto LAB_109721f48;
    lVar24 = *(long *)(piVar13 + 4);
    *(long *)(puVar7 + 2) = lVar24;
    *(ulong *)(puVar7 + 4) = lVar24 + uVar17;
    uVar14 = 1;
  } while (lVar24 != 0);
  FUN_1096f5a5c(*(undefined8 *)(puVar7 + 0xc));
  *(undefined8 *)(puVar7 + 0xc) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
LAB_109721f64:
  FUN_1096f5a5c(piVar13);
  piVar13 = (int *)&UNK_10dfe4888;
LAB_109721f74:
  *(int **)(puVar7 + 0x10) = piVar13;
  if (*piVar13 != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(int **)(puVar7 + 0xc) = piVar13;
  *(undefined1 *)(puVar7 + 10) = 0;
  lVar25 = *(long *)(piVar13 + 4);
  *(long *)(puVar7 + 2) = lVar25;
  uVar23 = piVar13[6];
  lVar24 = lVar25 + (ulong)uVar23;
  *(long *)(puVar7 + 4) = lVar24;
  uVar15 = uVar23 << 6;
  if (uVar15 < 0x4001) {
    uVar15 = 0x4000;
  }
  if (0x3ffffffe < uVar15) {
    uVar15 = 0x3fffffff;
  }
  uVar30 = 0x3fffffff;
  if (uVar23 >> 0x1a == 0) {
    uVar30 = uVar15;
  }
  puVar7[6] = uVar23;
  puVar7[7] = uVar30;
  puVar7[0xb] = 0;
  *puVar7 = 0;
  puVar7[9] = 0;
  puVar28 = *(undefined **)(*(long *)(puVar7 + 0x10) + 0x10);
  if (4 < *(uint *)(*(long *)(puVar7 + 0x10) + 0x18) && puVar28 != &UNK_10dfe4888) {
    puVar12 = puVar28 + (byte)puVar28[2];
    uVar15 = (uint)(*(ushort *)(puVar28 + 3) >> 8) | (*(ushort *)(puVar28 + 3) & 0xff00ff) << 8;
    uVar17 = (ulong)uVar15;
    if (((ulong)((long)puVar12 - lVar25) <= (ulong)uVar23 &&
         uVar15 <= (uint)((int)lVar24 - (int)puVar12)) &&
       (puVar7[7] = uVar30 - uVar15, 0 < (int)(uVar30 - uVar15))) {
      _bzero(&iStack_20ac,0x100c);
      iVar21 = 0;
      uVar34 = 0;
      bStack_20b0 = 0;
      puVar7[0x12] = 0;
      *(undefined8 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)(puVar7 + 0x14) = 0;
      *(undefined8 *)(puVar7 + 0x1a) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      puStack_20c0 = puVar12;
      uStack_20b8 = uVar17;
      do {
        puVar12 = puStack_20c0;
        uVar15 = (int)uVar34 + 1;
        uVar23 = (uint)uVar17;
        if (uVar23 < uVar15) {
          uVar15 = (uint)(byte)puVar28[2] +
                   ((uint)(*(ushort *)(puVar28 + 3) >> 8) |
                   (*(ushort *)(puVar28 + 3) & 0xff00ff) << 8);
          if (uVar15 == 0) {
            puVar12 = &UNK_10dfe4888;
          }
          else {
            puVar27 = puVar28 + uVar15;
            puVar12 = &UNK_10dfe4888;
            if (((ulong)((long)puVar27 - *(long *)(puVar7 + 2)) <= (ulong)(uint)puVar7[6]) &&
               (puVar9 = puVar27, FUN_1097233d8(puVar27,puVar7), puVar12 = puVar27, (int)puVar9 == 0
               )) {
              puVar12 = &UNK_10dfe4888;
            }
          }
          *(undefined **)(puVar7 + 0x1c) = puVar12;
          if ((puVar7[0x1a] == 0) ||
             (puVar1 = (ushort *)(puVar28 + (int)puVar7[0x1a]),
             (ulong)(uint)puVar7[6] < (ulong)((long)puVar1 - *(long *)(puVar7 + 2)) ||
             (ulong)(uint)puVar7[6] < ((long)puVar1 - *(long *)(puVar7 + 2)) + 10U)) {
LAB_109722340:
            puVar32 = (ushort *)&UNK_10dfe4888;
          }
          else {
            puVar11 = puVar1 + 1;
            if (((ulong)(uint)puVar7[6] < (ulong)((long)puVar11 - *(long *)(puVar7 + 2))) ||
               (uVar15 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8,
               (uint)(puVar7[4] - (int)puVar11) < uVar15)) goto LAB_109722340;
            iVar21 = puVar7[7] - uVar15;
            puVar7[7] = iVar21;
            puVar32 = (ushort *)&UNK_10dfe4888;
            if ((0 < iVar21) && (FUN_10971e1dc(puVar11,puVar7), puVar32 = puVar1, (int)puVar11 == 0)
               ) {
              puVar32 = (ushort *)&UNK_10dfe4888;
            }
          }
          *(ushort **)(puVar7 + 0x1e) = puVar32;
          if (puVar7[0x18] == 0) {
            puVar12 = &UNK_10dfe4888;
          }
          else {
            puVar27 = puVar28 + (int)puVar7[0x18];
            puVar12 = &UNK_10dfe4888;
            if (((ulong)((long)puVar27 - *(long *)(puVar7 + 2)) <= (ulong)(uint)puVar7[6]) &&
               (puVar9 = puVar27, FUN_1097233d8(puVar27,puVar7), puVar12 = puVar27, (int)puVar9 == 0
               )) {
              puVar12 = &UNK_10dfe4888;
            }
          }
          *(undefined **)(puVar7 + 0x20) = puVar12;
          if (puVar7[0x19] == 0) {
            puVar31 = (uint *)&UNK_10dfe4888;
          }
          else {
            puVar29 = (uint *)(puVar28 + (int)puVar7[0x19]);
            puVar31 = (uint *)&UNK_10dfe4888;
            if (((ulong)((long)puVar29 - *(long *)(puVar7 + 2)) <= (ulong)(uint)puVar7[6]) &&
               (puVar10 = puVar29, FUN_1097233d8(puVar29,puVar7), puVar31 = puVar29,
               (int)puVar10 == 0)) {
              puVar31 = (uint *)&UNK_10dfe4888;
            }
          }
          *(uint **)(puVar7 + 0x22) = puVar31;
          iVar21 = puVar7[0x1b];
          if (iVar21 == 0) {
            pcVar16 = "";
            goto LAB_10972241c;
          }
          pcVar16 = puVar28 + iVar21;
          if (((ulong)(uint)puVar7[6] < (ulong)((long)pcVar16 - *(long *)(puVar7 + 2))) ||
             ((ulong)(uint)puVar7[6] < ((long)pcVar16 - *(long *)(puVar7 + 2)) + 2U))
          goto LAB_10972240c;
          uVar15 = (*puVar31 & 0xff00ff00) >> 8 | (*puVar31 & 0xff00ff) << 8;
          cVar3 = *pcVar16;
          if (cVar3 != '\x04') {
            if (cVar3 == '\x03') {
              pcVar19 = pcVar16 + 1;
              func_0x0001097235b4(pcVar19,puVar7);
              iVar21 = (int)pcVar19;
            }
            else {
              if (cVar3 != '\0') goto LAB_10972240c;
              pcVar19 = pcVar16 + 1;
              func_0x000109723558(pcVar19,puVar7);
              iVar21 = (int)pcVar19;
            }
            if (iVar21 != 0) goto LAB_10972241c;
            goto LAB_10972240c;
          }
          pcVar19 = pcVar16 + 5;
          if (((((ulong)(uint)puVar7[6] < (ulong)((long)pcVar19 - *(long *)(puVar7 + 2))) ||
               (uVar23 = (*(uint *)(pcVar16 + 1) & 0xff00ff00) >> 8 |
                         (*(uint *)(pcVar16 + 1) & 0xff00ff) << 8,
               uVar17 = (ulong)(uVar23 >> 0x10 | uVar23 << 0x10) * 6,
               (uVar17 & 0xffffffff00000000) != 0)) ||
              ((ulong)(uint)puVar7[6] < (ulong)((long)pcVar19 - *(long *)(puVar7 + 2)))) ||
             ((uVar23 = (uint)uVar17, (uint)(puVar7[4] - (int)pcVar19) < uVar23 ||
              (iVar5 = puVar7[7] - uVar23, puVar7[7] = iVar5, iVar5 < 1)))) goto LAB_10972240c;
          uVar23 = (*(uint *)(pcVar16 + 1) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar16 + 1) & 0xff00ff) << 8;
          uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
          uVar17 = (ulong)uVar23;
          if (uVar23 == 0) goto LAB_10972262c;
          puVar12 = puVar28 + (long)iVar21 + 0xb;
          puVar27 = puVar28 + (long)iVar21 + 10;
          goto LAB_1097225e4;
        }
        uVar30 = (uint)(byte)puStack_20c0[uVar34];
        uStack_20b8 = CONCAT44(uVar15,(uint)uStack_20b8);
        if (puStack_20c0[uVar34] == 0xc) {
          uVar22 = (int)uVar34 + 2;
          if (uVar22 <= uVar23) {
            uVar30 = (byte)puStack_20c0[uVar15] | 0x100;
            uStack_20b8 = CONCAT44(uVar22,(uint)uStack_20b8);
            uVar15 = uVar22;
            goto LAB_1097220b4;
          }
          uVar30 = 0xffff;
LAB_10972222c:
          FUN_10972310c(uVar30,&puStack_20c0);
          uVar17 = uStack_20b8 & 0xffffffff;
          uVar34 = uStack_20b8 >> 0x20;
          iVar21 = iStack_20ac;
          bVar6 = bStack_20b0;
          if (iStack_20ac == 0) goto LAB_1097221b4;
        }
        else {
LAB_1097220b4:
          uVar34 = (ulong)uVar15;
          if (uVar30 < 0x107) {
            if (uVar30 == 0x11) {
              bVar6 = iVar21 == 0;
              if (iVar21 == 0) {
                bStack_20b0 = 1;
                uRam000000011382ab30 = 0;
                iVar21 = 0;
              }
              else {
                iVar21 = (int)adStack_20a8[iVar21 - 1];
              }
              puVar7[0x18] = iVar21;
            }
            else {
              if (uVar30 != 0x18) goto LAB_10972222c;
              bVar6 = iVar21 == 0;
              if (iVar21 == 0) {
                bStack_20b0 = 1;
                uRam000000011382ab30 = 0;
                iVar21 = 0;
              }
              else {
                iVar21 = (int)adStack_20a8[iVar21 - 1];
              }
              puVar7[0x1a] = iVar21;
            }
          }
          else if (uVar30 == 0x125) {
            bVar6 = iVar21 == 0;
            if (iVar21 == 0) {
              bStack_20b0 = 1;
              uRam000000011382ab30 = 0;
              iVar21 = 0;
            }
            else {
              iVar21 = (int)adStack_20a8[iVar21 - 1];
            }
            puVar7[0x1b] = iVar21;
          }
          else if (uVar30 == 0x124) {
            bVar6 = iVar21 == 0;
            if (iVar21 == 0) {
              bStack_20b0 = 1;
              uRam000000011382ab30 = 0;
              iVar21 = 0;
            }
            else {
              iVar21 = (int)adStack_20a8[iVar21 - 1];
            }
            puVar7[0x19] = iVar21;
          }
          else {
            if (uVar30 != 0x107) goto LAB_10972222c;
            lStack_1098 = 0;
            uStack_1090 = 0xffff;
            puVar18 = (undefined8 *)(puVar7 + 0x14);
            FUN_10972302c(puVar18,&lStack_1098);
            bVar6 = false;
            *(undefined4 *)(puVar18 + 1) = 0x107;
            uVar33 = puVar7[0x12];
            uVar22 = 0;
            if (uVar33 <= uVar23) {
              uVar22 = uVar23 - uVar33;
            }
            *puVar18 = puVar12 + uVar33;
            if (uVar15 - uVar33 <= uVar22) {
              uVar22 = uVar15 - uVar33;
            }
            *(char *)((long)puVar18 + 0xc) = (char)uVar22;
            puVar7[0x12] = uVar15;
          }
          iStack_20ac = 0;
LAB_1097221b4:
          uVar15 = (uint)uVar17;
          uVar23 = (uint)uVar34;
          iVar21 = 0;
          if ((uVar23 <= uVar15) && ((bVar6 & 1) == 0)) {
            lStack_1098 = 0;
            uStack_1090 = 0xffff;
            puVar18 = (undefined8 *)(puVar7 + 0x14);
            FUN_10972302c(puVar18,&lStack_1098);
            *(uint *)(puVar18 + 1) = uVar30;
            uVar22 = puVar7[0x12];
            *puVar18 = puStack_20c0 + uVar22;
            uVar30 = 0;
            if (uVar22 <= uVar15) {
              uVar30 = uVar15 - uVar22;
            }
            if (uVar23 - uVar22 <= uVar30) {
              uVar30 = uVar23 - uVar22;
            }
            *(char *)((long)puVar18 + 0xc) = (char)uVar30;
            puVar7[0x12] = uVar23;
            iVar21 = 0;
            bVar6 = 0;
          }
        }
      } while (((uint)uVar34 <= (uint)uVar17) && ((bVar6 & 1) == 0));
    }
  }
  goto LAB_109722e80;
LAB_109722ec4:
  pcVar16 = "";
  goto LAB_10972241c;
  while( true ) {
    puVar12 = puVar12 + 6;
    puVar27 = puVar27 + 6;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) break;
LAB_1097225e4:
    if ((((ulong)(uint)puVar7[6] < (ulong)((long)puVar12 - *(long *)(puVar7 + 2))) ||
        (uVar23 = (*(uint *)(puVar27 + -5) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar27 + -5) & 0xff00ff) << 8,
        (uint)puVar7[0xe] <= (uVar23 >> 0x10 | uVar23 << 0x10))) ||
       ((uVar15 >> 0x10 | uVar15 << 0x10) <=
        ((uint)(*(ushort *)(puVar27 + -1) >> 8) | (*(ushort *)(puVar27 + -1) & 0xff00ff) << 8)))
    goto LAB_109722ec4;
  }
LAB_10972262c:
  if ((*(int *)(pcVar16 + 1) != 0) &&
     ((pcVar16[6] == '\0' && pcVar16[5] == '\0') && (pcVar16[7] == '\0' && pcVar16[8] == '\0'))) {
    uVar15 = *(uint *)(pcVar16 + 1);
    uVar23 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    if (1 < (uVar23 >> 0x10 | uVar23 << 0x10)) {
      puVar31 = (uint *)(puVar28 + (long)iVar21 + 0xb);
      uVar17 = 1;
      do {
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        uVar34 = (ulong)(uVar15 >> 0x10 | uVar15 << 0x10);
        puVar29 = (uint *)&UNK_10dfe4888;
        if (uVar17 - 1 < uVar34) {
          uVar15 = (*(uint *)(pcVar16 + 1) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar16 + 1) & 0xff00ff) << 8;
          uVar34 = (ulong)(uVar15 >> 0x10 | uVar15 << 0x10);
          puVar29 = (uint *)((long)puVar31 + -6);
        }
        puVar10 = (uint *)&UNK_10dfe4888;
        if (uVar17 < uVar34) {
          puVar10 = puVar31;
        }
        uVar15 = (*puVar29 & 0xff00ff00) >> 8 | (*puVar29 & 0xff00ff) << 8;
        uVar23 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
        if ((uVar23 >> 0x10 | uVar23 << 0x10) <= (uVar15 >> 0x10 | uVar15 << 0x10))
        goto LAB_109722ec4;
        uVar17 = uVar17 + 1;
        uVar15 = *(uint *)(pcVar16 + 1);
        uVar23 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        puVar31 = (uint *)((long)puVar31 + 6);
      } while (uVar17 < (uVar23 >> 0x10 | uVar23 << 0x10));
    }
    if (uVar15 == 0) {
      pcVar26 = "";
    }
    else {
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      pcVar26 = pcVar19 + (ulong)((uVar15 >> 0x10 | uVar15 << 0x10) - 1) * 6;
    }
    if (pcVar26 + (10 - *(long *)(puVar7 + 2)) <= (char *)(ulong)(uint)puVar7[6]) {
      uVar15 = *(uint *)(pcVar16 + 1);
      if (uVar15 == 0) {
        pcVar19 = "";
      }
      else {
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        pcVar19 = pcVar19 + (ulong)((uVar15 >> 0x10 | uVar15 << 0x10) - 1) * 6;
      }
      uVar15 = (*(uint *)(pcVar19 + 6) & 0xff00ff00) >> 8 | (*(uint *)(pcVar19 + 6) & 0xff00ff) << 8
      ;
      if ((uVar15 >> 0x10 | uVar15 << 0x10) == puVar7[0xe]) goto LAB_10972241c;
    }
  }
LAB_10972240c:
  pcVar16 = "";
LAB_10972241c:
  *(char **)(puVar7 + 0x24) = pcVar16;
  if ((((*(uint **)(puVar7 + 0x20) == (uint *)&UNK_10dfe4888) ||
       (*(undefined **)(puVar7 + 0x1c) == &UNK_10dfe4888)) ||
      (*(uint **)(puVar7 + 0x22) == (uint *)&UNK_10dfe4888)) ||
     (uVar15 = **(uint **)(puVar7 + 0x20),
     uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
     uVar15 = uVar15 >> 0x10 | uVar15 << 0x10, puVar7[0x30] = uVar15, uVar15 != puVar7[0xe]))
  goto LAB_109722e80;
  uVar15 = **(uint **)(puVar7 + 0x22);
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar23 = uVar15 >> 0x10 | uVar15 << 0x10;
  puVar7[0x26] = uVar23;
  uVar15 = puVar7[0x2c];
  if ((int)uVar15 < 0) goto LAB_109722e80;
  uVar22 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  uVar30 = uVar15;
  if ((int)uVar15 < (int)uVar23) {
    do {
      uVar30 = uVar30 + (uVar30 >> 1) + 8;
    } while (uVar30 < uVar22);
    if (0x5555555 < uVar30) {
LAB_109722f6c:
      puVar7[0x2c] = ~uVar15;
      goto LAB_109722e80;
    }
    puVar20 = puVar7 + 0x2c;
    FUN_109723800(puVar20,uVar30);
    if (puVar20 == (undefined4 *)0x0) {
      uVar15 = puVar7[0x2c];
      if (uVar15 < uVar30) goto LAB_109722f6c;
    }
    else {
      *(undefined4 **)(puVar7 + 0x2e) = puVar20;
      puVar7[0x2c] = uVar30;
    }
  }
  uVar15 = puVar7[0x2d];
  if (uVar15 < uVar22) {
    do {
      puVar18 = (undefined8 *)(*(long *)(puVar7 + 0x2e) + (ulong)uVar15 * 0x30);
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[5] = 0;
      puVar18[4] = 0;
      puVar18[1] = 0;
      *puVar18 = 0;
      uVar15 = puVar7[0x2d] + 1;
      puVar7[0x2d] = uVar15;
    } while (uVar15 < uVar22);
  }
  else if (uVar22 < uVar15) {
    FUN_109723794(puVar7 + 0x2c,uVar22);
  }
  puVar7[0x2d] = uVar22;
  if (puVar7[0x26] == 0) {
    return puVar7;
  }
  uVar17 = 0;
  while( true ) {
    lVar24 = *(long *)(puVar7 + 0x22);
    uVar34 = uVar17;
    FUN_10970098c();
    if ((((ulong)(uint)puVar7[6] < (ulong)(lVar24 - *(long *)(puVar7 + 2))) ||
        ((uint)(puVar7[4] - (int)lVar24) < (uint)uVar34)) ||
       (iVar21 = puVar7[7] - (uint)uVar34, puVar7[7] = iVar21, iVar21 < 1)) goto LAB_109722e80;
    _bzero(&iStack_1084,0x100c);
    bStack_1088 = 0;
    uVar15 = puVar7[0x28];
    lStack_1098 = lVar24;
    uStack_1090 = uVar34;
    if ((int)uVar15 < 0) break;
    uVar23 = puVar7[0x29] + 1;
    uVar22 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
    uVar30 = uVar15;
    if ((int)uVar15 < (int)uVar23) {
      do {
        uVar30 = uVar30 + (uVar30 >> 1) + 8;
      } while (uVar30 < uVar22);
      if (0x6666666 < uVar30) {
LAB_109722e64:
        puVar7[0x28] = ~uVar15;
        break;
      }
      puVar20 = puVar7 + 0x28;
      FUN_109723958(puVar20,uVar30);
      if (puVar20 == (undefined4 *)0x0) {
        uVar15 = puVar7[0x28];
        if (uVar15 < uVar30) goto LAB_109722e64;
      }
      else {
        *(undefined4 **)(puVar7 + 0x2a) = puVar20;
        puVar7[0x28] = uVar30;
      }
    }
    uVar15 = puVar7[0x29];
    if (uVar15 < uVar22) {
      do {
        puVar18 = (undefined8 *)(*(long *)(puVar7 + 0x2a) + (ulong)uVar15 * 0x28);
        puVar18[4] = 0;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        uVar15 = puVar7[0x29] + 1;
        puVar7[0x29] = uVar15;
      } while (uVar15 < uVar22);
    }
    else if (uVar22 < uVar15) {
      FUN_1097238ec(puVar7 + 0x28,uVar22);
    }
    puVar7[0x29] = uVar22;
    puVar31 = (uint *)(*(long *)(puVar7 + 0x2a) + (ulong)(uVar22 - 1) * 0x28);
    uRam000000011382ab38 = 0;
    uRam000000011382ab30 = 0;
    uRam000000011382ab48 = 0;
    uRam000000011382ab40 = 0;
    uRam000000011382ab50 = 0;
    if (puVar31 == (uint *)0x11382ab30) goto LAB_109722e80;
    iVar21 = 0;
    puVar29 = puVar31 + 2;
    puVar29[0] = 0;
    puVar29[1] = 0;
    *puVar31 = 0;
    puVar31[4] = 0;
    puVar31[5] = 0;
    puVar31[6] = 0;
    puVar31[7] = 0;
    puVar31[8] = 0;
    uVar15 = 0;
    while( true ) {
      uVar23 = uVar15 + 1;
      if ((uint)uVar34 < uVar23) break;
      bVar6 = *(byte *)(lStack_1098 + (ulong)uVar15);
      uVar30 = (uint)bVar6;
      uStack_1090 = CONCAT44(uVar23,(undefined4)uStack_1090);
      if (bVar6 == 0xc) {
        if ((uint)uVar34 < uVar15 + 2) {
          uVar30 = 0xffff;
        }
        else {
          uVar30 = *(byte *)(lStack_1098 + (ulong)uVar23) | 0x100;
          uStack_1090 = CONCAT44(uVar15 + 2,(undefined4)uStack_1090);
        }
LAB_109722934:
        FUN_10972310c(uVar30,&lStack_1098);
        uVar34 = uStack_1090 & 0xffffffff;
        uVar22 = (uint)bStack_1088;
        uVar23 = uStack_1090._4_4_;
        iVar21 = iStack_1084;
        if (iStack_1084 == 0) goto LAB_10972295c;
      }
      else {
        if (bVar6 != 0x12) goto LAB_109722934;
        if (iVar21 == 0) {
          puVar31[6] = 0;
LAB_1097229f0:
          uVar15 = 0;
          uVar22 = 1;
          bStack_1088 = 1;
          uRam000000011382ab30 = 0;
        }
        else {
          uVar22 = (uint)adStack_1080[iVar21 - 1U];
          uVar15 = uVar22;
          if ((int)uVar22 < 0) {
            uVar15 = 0;
            bStack_1088 = 1;
          }
          puVar31[6] = uVar15;
          if (iVar21 - 1U == 0) goto LAB_1097229f0;
          uVar15 = (uint)adStack_1080[iVar21 - 2];
          if ((int)uVar15 < 0) {
            uVar15 = 0;
            uVar22 = 1;
            bStack_1088 = 1;
          }
          else {
            uVar22 = uVar22 >> 0x1f;
          }
        }
        puVar31[7] = uVar15;
        iStack_1084 = 0;
        uVar30 = 0x12;
LAB_10972295c:
        uVar15 = (uint)uVar34;
        if ((uVar23 <= uVar15) && ((uVar22 & 1) == 0)) {
          puStack_20c0 = (undefined *)0x0;
          uStack_20b8 = 0xffff;
          puVar10 = puVar29;
          FUN_10972302c(puVar29,&puStack_20c0);
          uVar22 = 0;
          puVar10[2] = uVar30;
          uVar33 = *puVar31;
          *(ulong *)puVar10 = lStack_1098 + (ulong)uVar33;
          uVar30 = 0;
          if (uVar33 <= uVar15) {
            uVar30 = uVar15 - uVar33;
          }
          if (uVar23 - uVar33 <= uVar30) {
            uVar30 = uVar23 - uVar33;
          }
          *(char *)(puVar10 + 3) = (char)uVar30;
          *puVar31 = uVar23;
        }
        iVar21 = 0;
      }
      if (((uint)uVar34 < uVar23) || (uVar15 = uVar23, (uVar22 & 1) != 0)) goto LAB_109722e80;
    }
    if (((puVar31[6] == 0) ||
        (puVar12 = puVar28 + (int)puVar31[6],
        (ulong)(uint)puVar7[6] < (ulong)((long)puVar12 - *(long *)(puVar7 + 2)))) ||
       (uVar15 = puVar31[7], (uint)(puVar7[4] - (int)puVar12) < uVar15)) goto LAB_109722e80;
    iVar21 = puVar7[7];
    puVar7[7] = iVar21 - uVar15;
    if ((puVar12 == &UNK_10dfe4888) || ((int)(iVar21 - uVar15) < 1)) goto LAB_109722e80;
    _bzero(&iStack_20ac,0x100c);
    bStack_20b0 = 0;
    uStack_20b8 = (ulong)uVar15;
    uStack_10a0 = 0;
    cStack_109c = '\0';
    if (uVar17 < (uint)puVar7[0x2d]) {
      puVar20 = (undefined4 *)(*(long *)(puVar7 + 0x2e) + uVar17 * 0x30);
    }
    else {
      puVar20 = (undefined4 *)0x11382ab30;
      uRam000000011382ab48 = 0;
      uRam000000011382ab40 = 0;
      uRam000000011382ab58 = 0;
      uRam000000011382ab50 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab30 = 0;
    }
    *puVar20 = 0;
    *(undefined8 *)(puVar20 + 2) = 0;
    *(undefined8 *)(puVar20 + 4) = 0;
    puVar20[6] = 0;
    *(undefined **)(puVar20 + 8) = &UNK_10dfe4888;
    puVar20[10] = 0;
    if (uVar17 < (uint)puVar7[0x2d]) {
      puVar31 = (uint *)(*(long *)(puVar7 + 0x2e) + uVar17 * 0x30);
    }
    else {
      puVar31 = (uint *)0x11382ab30;
      uRam000000011382ab48 = 0;
      uRam000000011382ab40 = 0;
      uRam000000011382ab58 = 0;
      uRam000000011382ab50 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab30 = 0;
    }
    iVar21 = 0;
    uVar23 = 0;
    puVar29 = puVar31 + 2;
    puVar29[0] = 0;
    puVar29[1] = 0;
    *puVar31 = 0;
    puVar31[4] = 0;
    puVar31[5] = 0;
    puVar31[6] = 0;
    *(undefined **)(puVar31 + 8) = &UNK_10dfe4888;
    puVar31[10] = 0;
    puStack_20c0 = puVar12;
    uVar30 = uVar15;
    while (uVar22 = uVar23 + 1, uVar22 <= uVar30) {
      uVar33 = (uint)(byte)puStack_20c0[uVar23];
      uStack_20b8 = CONCAT44(uVar22,(uint)uStack_20b8);
      if (puStack_20c0[uVar23] == 0xc) {
        uVar23 = uVar23 + 2;
        if (uVar23 <= uVar30) {
          uVar33 = (byte)puStack_20c0[uVar22] | 0x100;
          uStack_20b8 = CONCAT44(uVar23,(uint)uStack_20b8);
          uVar22 = uVar23;
          goto LAB_109722b38;
        }
        uVar33 = 0xffff;
LAB_109722c48:
        uStack_6c = 0;
        uStack_70 = 0xffff;
        uStack_78 = 0;
        FUN_10972310c(uVar33,&puStack_20c0);
        uVar22 = uStack_20b8._4_4_;
        uVar23 = uStack_20b8._4_4_;
        iVar21 = iStack_20ac;
        uVar30 = (uint)uStack_20b8;
        bVar6 = bStack_20b0;
        if (iStack_20ac == 0) goto LAB_109722be4;
      }
      else {
LAB_109722b38:
        bVar6 = false;
        uStack_78 = 0;
        uStack_70 = 0xffff;
        uStack_6c = 0;
        if (uVar33 < 0x17) {
          if (5 < uVar33 - 6) {
            if (uVar33 == 0x13) {
              bVar6 = iVar21 == 0;
              if (iVar21 == 0) {
                uVar23 = 0;
                bStack_20b0 = 1;
                uRam000000011382ab30 = 0;
              }
              else {
                uVar23 = (uint)adStack_20a8[iVar21 - 1];
              }
              puVar31[6] = uVar23;
            }
            else {
              if (uVar33 != 0x16) goto LAB_109722c48;
              if (cStack_109c == '\x01') {
                bVar6 = false;
              }
              else if (iVar21 == 0) {
                uStack_10a0 = 0;
                bVar6 = true;
                bStack_20b0 = 1;
                uRam000000011382ab30 = 0;
              }
              else {
                uStack_10a0 = (uint)adStack_20a8[iVar21 - 1];
                if ((int)uStack_10a0 < 0) {
                  uStack_10a0 = 0;
                  bVar6 = true;
                  bStack_20b0 = 1;
                }
                else {
                  bVar6 = false;
                }
              }
              cStack_109c = '\x01';
              puVar31[10] = uStack_10a0;
            }
          }
        }
        else if (9 < uVar33 - 0x109 || (1 << (ulong)(uVar33 - 0x109 & 0x1f) & 799U) == 0) {
          if (uVar33 != 0x17) goto LAB_109722c48;
          goto LAB_109722be4;
        }
        iStack_20ac = 0;
        iVar21 = 0;
LAB_109722be4:
        uVar23 = uVar22;
        if ((uVar22 <= uVar30) && ((bVar6 & 1) == 0)) {
          puVar10 = puVar29;
          FUN_109723a44(puVar29,&uStack_78);
          puVar10[2] = uVar33;
          uVar2 = *puVar31;
          uVar33 = 0;
          if (uVar2 <= uVar30) {
            uVar33 = uVar30 - uVar2;
          }
          *(undefined **)puVar10 = puStack_20c0 + uVar2;
          if (uVar22 - uVar2 <= uVar33) {
            uVar33 = uVar22 - uVar2;
          }
          *(char *)(puVar10 + 3) = (char)uVar33;
          *puVar31 = uVar22;
          bVar6 = 0;
        }
      }
      if ((uVar30 < uVar23) || ((bVar6 & 1) != 0)) goto LAB_109722e80;
    }
    puVar27 = &UNK_10dfe4888;
    puVar9 = puVar27;
    if (uVar15 != 0) {
      puVar9 = puVar12;
    }
    uVar34 = (ulong)(uint)puVar7[0x2d];
    if (uVar17 < uVar34) {
      iVar21 = *(int *)(*(long *)(puVar7 + 0x2e) + uVar17 * 0x30 + 0x18);
      if ((iVar21 != 0) &&
         (puVar9 = puVar9 + iVar21,
         (ulong)((long)puVar9 - *(long *)(puVar7 + 2)) <= (ulong)(uint)puVar7[6])) {
        puVar12 = puVar9;
        FUN_1097233d8(puVar9,puVar7);
        if ((int)puVar12 == 0) {
          puVar9 = puVar27;
        }
        uVar34 = (ulong)(uint)puVar7[0x2d];
        puVar27 = puVar9;
      }
    }
    else {
      uRam000000011382ab48 = 0;
      uRam000000011382ab40 = 0;
      uRam000000011382ab58 = 0;
      uRam000000011382ab50 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab30 = 0;
    }
    if (uVar17 < uVar34) {
      lVar24 = *(long *)(puVar7 + 0x2e) + uVar17 * 0x30;
    }
    else {
      lVar24 = 0x11382ab30;
      uRam000000011382ab48 = 0;
      uRam000000011382ab40 = 0;
      uRam000000011382ab58 = 0;
      uRam000000011382ab50 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab30 = 0;
    }
    *(undefined **)(lVar24 + 0x20) = puVar27;
    uVar17 = uVar17 + 1;
    if ((uint)puVar7[0x26] <= uVar17) {
      return puVar7;
    }
  }
  uRam000000011382ab50 = 0;
  uRam000000011382ab38 = 0;
  uRam000000011382ab30 = 0;
  uRam000000011382ab48 = 0;
  uRam000000011382ab40 = 0;
LAB_109722e80:
  FUN_109722fc4(puVar7);
  return puVar7;
}



/* Entry: 109722fc4; end: 10972302b;  */

void FUN_109722fc4(long param_1)

{
  int *piVar1;
  
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  piVar1 = (int *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_109723b24(param_1 + 0xa0);
  func_0x000109723b60(param_1 + 0xb0);
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10972302c; end: 1097230e7;  */

void FUN_10972302c(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if ((int)uVar3 <= (int)uVar4) {
    if ((int)uVar3 < 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      return;
    }
    uVar5 = uVar3;
    if (uVar3 < uVar4 + 1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar4 + 1);
      if (uVar5 >> 0x1c != 0) {
LAB_1097230d0:
        *param_1 = ~uVar3;
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        return;
      }
      lVar2 = *(long *)(param_1 + 2);
      FUN_1097230e8(lVar2,uVar5);
      if (lVar2 == 0) {
        uVar3 = *param_1;
        if (uVar3 < uVar5) goto LAB_1097230d0;
      }
      else {
        *(long *)(param_1 + 2) = lVar2;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + 1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
  uVar6 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar6;
  return;
}



/* Entry: 1097230e8; end: 10972310b;  */

undefined8 FUN_1097230e8(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 << 4);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 10972310c; end: 1097233d7;  */

undefined8 ** FUN_10972310c(undefined8 **param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  byte *pbVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined *puVar16;
  double *pdVar17;
  byte bVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)param_1;
  plVar12 = param_2;
  if ((uVar9 & 0xffff) == 0x1e) {
    uVar9 = *(uint *)(param_2 + 1);
    ppuVar10 = (undefined8 **)(ulong)*(uint *)((long)param_2 + 0xc);
    if (*(uint *)((long)param_2 + 0xc) <= uVar9) {
      uVar19 = 0;
      bVar18 = 0;
      param_1 = (undefined8 **)0x0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      lVar20 = *param_2;
      do {
        if ((bool)(bVar18 & 1)) {
          plVar12 = (long *)((ulong)param_1 & 0xf);
        }
        else {
          uVar13 = (uint)ppuVar10 + 1;
          param_1 = (undefined8 **)(ulong)uVar13;
          if (uVar9 < uVar13) break;
          if ((uint)ppuVar10 < uVar9) {
            pbVar11 = (byte *)(lVar20 + (long)ppuVar10);
            ppuVar10 = param_1;
          }
          else {
            *(uint *)((long)param_2 + 0xc) = uVar9 + 1;
            pbVar11 = &UNK_10dfe4888;
            ppuVar10 = (undefined8 **)(ulong)(uVar9 + 2);
          }
          bVar6 = *pbVar11;
          param_1 = (undefined8 **)(ulong)bVar6;
          *(int *)((long)param_2 + 0xc) = (int)ppuVar10;
          plVar12 = (long *)(ulong)(bVar6 >> 4);
        }
        if (plVar12 == (long *)0xf) {
          puStack_58 = &uStack_50;
          param_1 = &puStack_58;
          plVar12 = (long *)((long)puStack_58 + uVar19);
          FUN_1096fc8cc(param_1,plVar12,&lStack_60,1);
          if (((ulong)param_1 & 1) != 0) goto LAB_109723300;
          break;
        }
        if (plVar12 == (long *)0xd) break;
        *(char *)((long)&uStack_50 + uVar19) = (char)plVar12[0x21eafd8b];
        uVar15 = uVar19;
        if (plVar12 == (long *)0xc) {
          uVar15 = uVar19 + 1;
          if (uVar15 == 0x20) break;
          *(undefined1 *)((long)&uStack_50 + uVar19 + 1) = 0x2d;
        }
        bVar18 = bVar18 + 1;
        uVar19 = uVar15 + 1;
      } while (uVar15 < 0x1f);
      *(uint *)((long)param_2 + 0xc) = uVar9 + 1;
    }
    lStack_60 = 0;
LAB_109723300:
    uVar9 = *(uint *)((long)param_2 + 0x14);
    if (uVar9 < 0x201) {
      *(uint *)((long)param_2 + 0x14) = uVar9 + 1;
      param_2 = param_2 + (ulong)uVar9 + 3;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      param_2 = (long *)0x11382ab30;
      uRam000000011382ab30 = 0;
    }
    *param_2 = lStack_60;
  }
  else {
    if (uVar9 != 0x1d) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        if (uVar9 - 0xf7 < 4) {
          uVar13 = *(uint *)((long)param_2 + 0xc);
          if (uVar13 < *(uint *)(param_2 + 1)) {
            pbVar11 = (byte *)(*param_2 + (ulong)uVar13);
          }
          else {
            uVar13 = *(uint *)(param_2 + 1) + 1;
            *(uint *)((long)param_2 + 0xc) = uVar13;
            pbVar11 = &UNK_10dfe4888;
          }
          bVar18 = *pbVar11;
          uVar3 = *(uint *)((long)param_2 + 0x14);
          if (uVar3 < 0x201) {
            *(uint *)((long)param_2 + 0x14) = uVar3 + 1;
            pdVar17 = (double *)(param_2 + (ulong)uVar3 + 3);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            pdVar17 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          dVar22 = (double)(uVar9 * 0x100 + (uint)bVar18 + 0x96c & 0xffff);
        }
        else {
          if (3 < uVar9 - 0xfb) {
            if (uVar9 != 0x1c) {
              if (0xd6 < uVar9 - 0x20) {
                *(undefined4 *)((long)param_2 + 0x14) = 0;
                return param_1;
              }
              uVar13 = *(uint *)((long)param_2 + 0x14);
              if (uVar13 < 0x201) {
                *(uint *)((long)param_2 + 0x14) = uVar13 + 1;
                pdVar17 = (double *)(param_2 + (ulong)uVar13 + 3);
              }
              else {
                *(undefined1 *)(param_2 + 2) = 1;
                pdVar17 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              *pdVar17 = (double)(int)(uVar9 - 0x8b);
              return param_1;
            }
            uVar13 = *(uint *)(param_2 + 1);
            uVar9 = *(uint *)((long)param_2 + 0xc);
            if (uVar9 < uVar13) {
              puVar16 = (undefined *)(*param_2 + (ulong)uVar9);
            }
            else {
              uVar9 = uVar13 + 1;
              *(uint *)((long)param_2 + 0xc) = uVar9;
              puVar16 = &UNK_10dfe4888;
            }
            uVar4 = *puVar16;
            if (uVar9 + 1 < uVar13) {
              puVar16 = (undefined *)(*param_2 + (ulong)(uVar9 + 1));
            }
            else {
              uVar9 = uVar13 + 1;
              *(uint *)((long)param_2 + 0xc) = uVar9;
              puVar16 = &UNK_10dfe4888;
            }
            uVar5 = *puVar16;
            uVar13 = *(uint *)((long)param_2 + 0x14);
            if (uVar13 < 0x201) {
              *(uint *)((long)param_2 + 0x14) = uVar13 + 1;
              pdVar17 = (double *)(param_2 + (ulong)uVar13 + 3);
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            *pdVar17 = (double)(int)CONCAT11(uVar4,uVar5);
            iVar14 = uVar9 + 2;
            goto LAB_109715aa0;
          }
          uVar13 = *(uint *)((long)param_2 + 0xc);
          if (uVar13 < *(uint *)(param_2 + 1)) {
            pbVar11 = (byte *)(*param_2 + (ulong)uVar13);
          }
          else {
            uVar13 = *(uint *)(param_2 + 1) + 1;
            *(uint *)((long)param_2 + 0xc) = uVar13;
            pbVar11 = &UNK_10dfe4888;
          }
          bVar18 = *pbVar11;
          uVar3 = *(uint *)((long)param_2 + 0x14);
          if (uVar3 < 0x201) {
            *(uint *)((long)param_2 + 0x14) = uVar3 + 1;
            pdVar17 = (double *)(param_2 + (ulong)uVar3 + 3);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            pdVar17 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          dVar22 = (double)(int)(-0x6c - (uVar9 * 0x10000 - 0xfb0000 >> 8 | (uint)bVar18));
        }
        *pdVar17 = dVar22;
        iVar14 = uVar13 + 1;
LAB_109715aa0:
        *(int *)((long)param_2 + 0xc) = iVar14;
        return param_1;
      }
      goto LAB_1097233d4;
    }
    uVar13 = *(uint *)(param_2 + 1);
    uVar9 = *(uint *)((long)param_2 + 0xc);
    if (uVar9 < uVar13) {
      pbVar11 = (byte *)(*param_2 + (ulong)uVar9);
    }
    else {
      uVar9 = uVar13 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar9;
      pbVar11 = &UNK_10dfe4888;
    }
    bVar18 = *pbVar11;
    if (uVar9 + 1 < uVar13) {
      pbVar11 = (byte *)(*param_2 + (ulong)(uVar9 + 1));
    }
    else {
      uVar9 = uVar13 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar9;
      pbVar11 = &UNK_10dfe4888;
    }
    bVar6 = *pbVar11;
    if (uVar9 + 2 < uVar13) {
      pbVar11 = (byte *)(*param_2 + (ulong)(uVar9 + 2));
    }
    else {
      uVar9 = uVar13 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar9;
      pbVar11 = &UNK_10dfe4888;
    }
    bVar7 = *pbVar11;
    if (uVar9 + 3 < uVar13) {
      pbVar11 = (byte *)(*param_2 + (ulong)(uVar9 + 3));
    }
    else {
      uVar9 = uVar13 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar9;
      pbVar11 = &UNK_10dfe4888;
    }
    bVar8 = *pbVar11;
    uVar13 = *(uint *)((long)param_2 + 0x14);
    if (uVar13 < 0x201) {
      *(uint *)((long)param_2 + 0x14) = uVar13 + 1;
      pdVar17 = (double *)(param_2 + (ulong)uVar13 + 3);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      pdVar17 = (double *)0x11382ab30;
      uRam000000011382ab30 = 0;
    }
    *pdVar17 = (double)(int)((uint)bVar18 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 |
                            (uint)bVar8);
    *(uint *)((long)param_2 + 0xc) = uVar9 + 4;
  }
  param_2 = plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
LAB_1097233d4:
  ___stack_chk_fail();
  puVar1 = (uint *)((long)param_1 + 4);
  if ((ulong)*(uint *)(param_2 + 3) < (ulong)((long)puVar1 - param_2[1])) {
    return (undefined8 **)0x0;
  }
  uVar9 = (*(uint *)param_1 & 0xff00ff00) >> 8 | (*(uint *)param_1 & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  if (uVar9 == 0) {
    ppuVar10 = (undefined8 **)0x1;
  }
  else {
    if (uVar9 != 0xffffffff) {
      lVar20 = param_2[1];
      uVar13 = *(uint *)(param_2 + 3);
      if ((ulong)(((long)param_1 + 5) - lVar20) <= (ulong)uVar13) {
        bVar18 = *(byte *)puVar1;
        if ((bVar18 - 1 < 4) &&
           (uVar19 = (ulong)(uint)bVar18 * (ulong)(uVar9 + 1), (uVar19 & 0xffffffff00000000) == 0))
        {
          lVar21 = param_2[2];
          uVar9 = (uint)uVar19;
          if (uVar9 <= (uint)((int)lVar21 - (int)((long)param_1 + 5))) {
            iVar14 = *(int *)((long)param_2 + 0x1c) - uVar9;
            *(int *)((long)param_2 + 0x1c) = iVar14;
            if (0 < iVar14) {
              uVar9 = (*(uint *)param_1 & 0xff00ff00) >> 8 | (*(uint *)param_1 & 0xff00ff) << 8;
              lVar2 = (long)puVar1 +
                      (ulong)((uint)bVar18 + (uint)bVar18 * (uVar9 >> 0x10 | uVar9 << 0x10));
              FUN_1097234d8();
              if ((ulong)(lVar2 - lVar20) <= (ulong)uVar13 &&
                  (uint)param_1 <= (uint)((int)lVar21 - (int)lVar2)) {
                iVar14 = iVar14 - (uint)param_1;
                *(int *)((long)param_2 + 0x1c) = iVar14;
                return (undefined8 **)(ulong)(0 < iVar14);
              }
            }
          }
        }
      }
    }
    ppuVar10 = (undefined8 **)0x0;
  }
  return ppuVar10;
}



/* Entry: 1097233d8; end: 1097234d7;  */

bool FUN_1097233d8(uint *param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  puVar1 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar7 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  if (uVar7 == 0) {
    bVar6 = true;
  }
  else {
    if (uVar7 != 0xffffffff) {
      lVar9 = *(long *)(param_2 + 8);
      uVar3 = *(uint *)(param_2 + 0x18);
      if ((ulong)(((long)param_1 + 5) - lVar9) <= (ulong)uVar3) {
        bVar4 = (byte)*puVar1;
        if ((bVar4 - 1 < 4) &&
           (uVar8 = (ulong)(uint)bVar4 * (ulong)(uVar7 + 1), (uVar8 & 0xffffffff00000000) == 0)) {
          iVar10 = (int)*(undefined8 *)(param_2 + 0x10);
          uVar7 = (uint)uVar8;
          if (uVar7 <= (uint)(iVar10 - (int)((long)param_1 + 5))) {
            iVar5 = *(int *)(param_2 + 0x1c) - uVar7;
            *(int *)(param_2 + 0x1c) = iVar5;
            if (0 < iVar5) {
              uVar7 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
              lVar2 = (long)puVar1 +
                      (ulong)((uint)bVar4 + (uint)bVar4 * (uVar7 >> 0x10 | uVar7 << 0x10));
              FUN_1097234d8();
              if ((ulong)(lVar2 - lVar9) <= (ulong)uVar3 &&
                  (uint)param_1 <= (uint)(iVar10 - (int)lVar2)) {
                iVar5 = iVar5 - (uint)param_1;
                *(int *)(param_2 + 0x1c) = iVar5;
                return 0 < iVar5;
              }
            }
          }
        }
      }
    }
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 1097234d8; end: 109723793;  */

uint FUN_1097234d8(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  bVar2 = *(byte *)(param_1 + 4);
  param_1 = param_1 + 5;
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      return (uint)*(byte *)(param_1 + (ulong)param_2);
    }
    if (bVar2 == 2) {
      uVar3 = *(ushort *)(param_1 + (ulong)param_2 * 2);
      return (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    }
  }
  else if (bVar2 == 3) {
    pbVar1 = (byte *)(param_1 + (ulong)param_2 * 2 + (ulong)param_2);
    uVar4 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
  }
  else if (bVar2 == 4) {
    uVar4 = *(uint *)(param_1 + (ulong)param_2 * 4);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    return uVar4 >> 0x10 | uVar4 << 0x10;
  }
  return uVar4;
}



/* Entry: 109723794; end: 1097237ff;  */

void FUN_109723794(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    iVar4 = param_2 - uVar1;
    piVar3 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x30 + -0x28);
    do {
      if (*piVar3 != 0) {
        piVar3[1] = 0;
        _free(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      bVar2 = iVar4 != -1;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + -0xc;
    } while (bVar2);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



/* Entry: 109723800; end: 1097238eb;  */

long FUN_109723800(long param_1,uint param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)param_2 * 0x30;
    _malloc();
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = 0;
      lVar5 = 0xc;
      do {
        lVar1 = lVar3 + lVar5;
        *(undefined8 *)(lVar1 + -4) = 0;
        *(undefined8 *)(lVar1 + -0xc) = 0;
        *(undefined8 *)(lVar1 + 0xc) = 0;
        *(undefined8 *)(lVar1 + 4) = 0;
        *(undefined8 *)(lVar1 + 0x1c) = 0;
        *(undefined8 *)(lVar1 + 0x14) = 0;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        *(undefined4 *)(lVar1 + -0xc) = puVar2[-3];
        *(undefined8 *)(lVar1 + -4) = *(undefined8 *)(puVar2 + -1);
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(undefined8 *)(lVar1 + 4) = *(undefined8 *)(puVar2 + 1);
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar7 = *(undefined8 *)(puVar2 + 3);
        *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(puVar2 + 5);
        *(undefined8 *)(lVar1 + 0xc) = uVar7;
        *(undefined4 *)(lVar1 + 0x1c) = puVar2[7];
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        piVar6 = puVar2 + -1;
        if (*piVar6 != 0) {
          *puVar2 = 0;
          _free(*(undefined8 *)(puVar2 + 1));
        }
        piVar6[0] = 0;
        piVar6[1] = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x30;
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
  }
  _free(*(undefined8 *)(param_1 + 8));
  return lVar3;
}



/* Entry: 1097238ec; end: 109723957;  */

void FUN_1097238ec(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    iVar4 = param_2 - uVar1;
    piVar3 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x28 + -0x20);
    do {
      if (*piVar3 != 0) {
        piVar3[1] = 0;
        _free(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      bVar2 = iVar4 != -1;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + -10;
    } while (bVar2);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



/* Entry: 109723958; end: 109723a43;  */

long FUN_109723958(long param_1,uint param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)param_2 * 0x28;
    _malloc();
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = 0;
      lVar5 = 0xc;
      do {
        lVar1 = lVar3 + lVar5;
        *(undefined8 *)(lVar1 + -4) = 0;
        *(undefined8 *)(lVar1 + -0xc) = 0;
        *(undefined8 *)(lVar1 + 0xc) = 0;
        *(undefined8 *)(lVar1 + 4) = 0;
        *(undefined8 *)(lVar1 + 0x14) = 0;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        *(undefined4 *)(lVar1 + -0xc) = puVar2[-3];
        *(undefined8 *)(lVar1 + -4) = *(undefined8 *)(puVar2 + -1);
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(undefined8 *)(lVar1 + 4) = *(undefined8 *)(puVar2 + 1);
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(lVar1 + 0xc) = *(undefined8 *)(puVar2 + 3);
        *(undefined4 *)(lVar1 + 0x14) = puVar2[5];
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        piVar6 = puVar2 + -1;
        if (*piVar6 != 0) {
          *puVar2 = 0;
          _free(*(undefined8 *)(puVar2 + 1));
        }
        piVar6[0] = 0;
        piVar6[1] = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
  }
  _free(*(undefined8 *)(param_1 + 8));
  return lVar3;
}



/* Entry: 109723a44; end: 109723aff;  */

void FUN_109723a44(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if ((int)uVar3 <= (int)uVar4) {
    if ((int)uVar3 < 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      return;
    }
    uVar5 = uVar3;
    if (uVar3 < uVar4 + 1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar4 + 1);
      if (uVar5 >> 0x1c != 0) {
LAB_109723ae8:
        *param_1 = ~uVar3;
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        return;
      }
      lVar2 = *(long *)(param_1 + 2);
      FUN_109723b00(lVar2,uVar5);
      if (lVar2 == 0) {
        uVar3 = *param_1;
        if (uVar3 < uVar5) goto LAB_109723ae8;
      }
      else {
        *(long *)(param_1 + 2) = lVar2;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + 1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
  uVar6 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar6;
  return;
}



/* Entry: 109723b00; end: 109723b23;  */

undefined8 FUN_109723b00(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 << 4);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109723b24; end: 109723c0b;  */

void FUN_109723b24(int *param_1)

{
  if (*param_1 != 0) {
    FUN_1097238ec(param_1,0);
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 109723c0c; end: 109723cab;  */

void FUN_109723c0c(undefined *param_1)

{
  int *piVar1;
  
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    piVar1 = *(int **)(param_1 + 0x130);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        piVar1[1] = 0;
        _free(*(undefined8 *)(piVar1 + 2));
      }
      _free(piVar1);
    }
    FUN_109725564(param_1);
    func_0x000109725c30(param_1 + 0x118);
    func_0x000109725bf4(param_1 + 0x108);
    piVar1 = (int *)(param_1 + 0xa0);
    if (*piVar1 != 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
      _free(*(undefined8 *)(param_1 + 0xa8));
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_109710c0c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 109723cac; end: 1097246fb;  */

undefined4 * FUN_109723cac(int *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  ushort *puVar17;
  ulong uVar18;
  undefined1 uVar19;
  char *pcVar20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined *puStack_20b0;
  ulong uStack_20a8;
  undefined1 uStack_20a0;
  undefined1 auStack_209c [4108];
  undefined *puStack_1090;
  ulong uStack_1088;
  undefined1 uStack_1080;
  undefined1 auStack_107c [4108];
  undefined8 uStack_70;
  int *piVar16;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined4 *)0x1;
  _calloc(1,0x138);
  if (puVar9 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar9[0xe] = 0x10000;
  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x2e) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x32) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x37) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x35) = 0xffffffffffffffff;
  puVar9[0x3b] = 0x2210;
  iVar8 = param_1[6];
  if (iVar8 == -1) {
    piVar16 = param_1;
    FUN_109710978();
    iVar8 = (int)piVar16;
  }
  puVar9[0xe] = iVar8;
  *(undefined1 *)(puVar9 + 0xf) = 1;
  piVar16 = (int *)&UNK_10dfe4888;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1,0x43464620,*(undefined8 *)(param_1 + 10));
    piVar16 = param_1;
    if (param_1 == (int *)0x0) {
      piVar16 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar16 != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = *piVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar19 = 0;
  *(int **)(puVar9 + 0xc) = piVar16;
  do {
    *(undefined1 *)(puVar9 + 10) = uVar19;
    pcVar20 = *(char **)(*(long *)(puVar9 + 0xc) + 0x10);
    *(char **)(puVar9 + 2) = pcVar20;
    uVar3 = *(uint *)(*(long *)(puVar9 + 0xc) + 0x18);
    *(char **)(puVar9 + 4) = pcVar20 + uVar3;
    uVar5 = uVar3 << 6;
    if (uVar5 < 0x4001) {
      uVar5 = 0x4000;
    }
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar2 = 0x3fffffff;
    if (uVar3 >> 0x1a == 0) {
      uVar2 = uVar5;
    }
    puVar9[6] = uVar3;
    puVar9[7] = uVar2;
    puVar9[0xb] = 0;
    *puVar9 = 0;
    puVar9[9] = 0;
    if (pcVar20 == (char *)0x0) {
      FUN_1096f5a5c();
      *(undefined8 *)(puVar9 + 0xc) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      puVar9[6] = 0;
      goto LAB_109723ebc;
    }
    if (uVar3 < 4) break;
    if (*pcVar20 == '\x01') {
      if (puVar9[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(puVar9 + 0xc));
        *(undefined8 *)(puVar9 + 0xc) = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        puVar9[6] = 0;
      }
      else {
        puVar9[0xb] = 0;
        if (((char *)(ulong)(uint)puVar9[6] < pcVar20 + (4 - *(long *)(puVar9 + 2))) ||
           (puVar9[0xb] != 0)) break;
        cVar6 = *pcVar20;
        FUN_1096f5a5c(*(undefined8 *)(puVar9 + 0xc));
        *(undefined8 *)(puVar9 + 0xc) = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        puVar9[6] = 0;
        if (cVar6 != '\x01') goto LAB_109723eac;
      }
      if (piVar16[1] != 0) {
        piVar16[1] = 0;
      }
      goto LAB_109723ebc;
    }
    if ((puVar9[0xb] == 0) || ((*(byte *)(puVar9 + 10) & 1) != 0)) break;
    if (piVar16[1] == 0) {
      uVar21 = (ulong)(uint)piVar16[6];
LAB_109723e90:
      *(undefined8 *)(puVar9 + 2) = 0;
      *(ulong *)(puVar9 + 4) = uVar21;
      break;
    }
    piVar10 = piVar16;
    FUN_1096f59a0();
    uVar21 = (ulong)(uint)piVar16[6];
    if (((ulong)piVar10 & 1) == 0) goto LAB_109723e90;
    lVar22 = *(long *)(piVar16 + 4);
    *(long *)(puVar9 + 2) = lVar22;
    *(ulong *)(puVar9 + 4) = lVar22 + uVar21;
    uVar19 = 1;
  } while (lVar22 != 0);
  FUN_1096f5a5c(*(undefined8 *)(puVar9 + 0xc));
  *(undefined8 *)(puVar9 + 0xc) = 0;
  *(undefined8 *)(puVar9 + 2) = 0;
  *(undefined8 *)(puVar9 + 4) = 0;
  puVar9[6] = 0;
LAB_109723eac:
  FUN_1096f5a5c(piVar16);
  piVar16 = (int *)&UNK_10dfe4888;
LAB_109723ebc:
  *(int **)(puVar9 + 0x10) = piVar16;
  if (*piVar16 != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = *piVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *(int **)(puVar9 + 0xc) = piVar16;
  *(undefined1 *)(puVar9 + 10) = 0;
  lVar22 = *(long *)(piVar16 + 4);
  *(long *)(puVar9 + 2) = lVar22;
  uVar3 = piVar16[6];
  *(ulong *)(puVar9 + 4) = lVar22 + (ulong)uVar3;
  uVar5 = uVar3 << 6;
  if (uVar5 < 0x4001) {
    uVar5 = 0x4000;
  }
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  uVar2 = 0x3fffffff;
  if (uVar3 >> 0x1a == 0) {
    uVar2 = uVar5;
  }
  puVar9[6] = uVar3;
  puVar9[7] = uVar2;
  puVar9[0xb] = 0;
  *puVar9 = 0;
  puVar9[9] = 0;
  puVar23 = *(undefined **)(*(long *)(puVar9 + 0x10) + 0x10);
  if (3 < *(uint *)(*(long *)(puVar9 + 0x10) + 0x18) && puVar23 != &UNK_10dfe4888) {
    puVar12 = puVar23 + (byte)puVar23[2];
    *(undefined **)(puVar9 + 0x16) = puVar12;
    if ((puVar12 != &UNK_10dfe4888) && (FUN_1097246fc(puVar12,puVar9), (int)puVar12 != 0)) {
      lVar24 = *(long *)(puVar9 + 0x16);
      lVar22 = lVar24;
      FUN_1097247f8();
      if (((int)lVar22 == 0) ||
         ((pcVar20 = (char *)(lVar24 + (int)lVar22),
          (ulong)(uint)puVar9[6] < (ulong)((long)pcVar20 - *(long *)(puVar9 + 2)) ||
          (pcVar11 = pcVar20, FUN_1097246fc(pcVar20,puVar9), ((ulong)pcVar11 & 1) == 0)))) {
        *(undefined **)(puVar9 + 0x18) = &UNK_10dfe4888;
      }
      else {
        *(char **)(puVar9 + 0x18) = pcVar20;
        if ((pcVar20 != "") && (pcVar20[1] != '\0' || *pcVar20 != '\0')) {
          puVar12 = *(undefined **)(puVar9 + 0x18);
          uVar21 = 0;
          FUN_1097007f0();
          if (((ulong)((long)puVar12 - *(long *)(puVar9 + 2)) <= (ulong)(uint)puVar9[6]) &&
             (((uint)uVar21 <= (uint)(puVar9[4] - (int)puVar12) &&
              (iVar8 = puVar9[7] - (uint)uVar21, puVar9[7] = iVar8, 0 < iVar8)))) {
            _bzero(auStack_107c,0x100c);
            uStack_1080 = 0;
            uStack_1088 = uVar21 & 0xffffffff;
            uStack_70 = 0;
            ppuVar13 = &puStack_1090;
            puStack_1090 = puVar12;
            FUN_109724838(ppuVar13,puVar9 + 0x26);
            if ((int)ppuVar13 != 0) {
              if ((int)puVar9[0x3d] < 3) {
                *(undefined **)(puVar9 + 0x14) = &UNK_10dfe4888;
LAB_109724058:
                puVar9[0x24] = 1;
                if (puVar9[0x37] == -1) {
                  *(undefined **)(puVar9 + 0x20) = &UNK_10dfe4888;
                  *(undefined **)(puVar9 + 0x22) = &UNK_10dfe4888;
                  *(undefined **)(puVar9 + 0x12) = &UNK_10dfe4888;
LAB_1097241d8:
                  if ((int)puVar9[0x3c] < 2) {
LAB_1097241e4:
                    lVar24 = *(long *)(puVar9 + 0x18);
                    lVar22 = lVar24;
                    FUN_1097247f8();
                    if ((((int)lVar22 == 0) ||
                        (puVar12 = (undefined *)(lVar24 + (int)lVar22),
                        (ulong)(uint)puVar9[6] < (ulong)((long)puVar12 - *(long *)(puVar9 + 2)))) ||
                       (puVar15 = puVar12, FUN_1097246fc(puVar12,puVar9), ((ulong)puVar15 & 1) == 0)
                       ) {
                      *(undefined **)(puVar9 + 0x1a) = &UNK_10dfe4888;
                    }
                    else {
                      *(undefined **)(puVar9 + 0x1a) = puVar12;
                      if (puVar12 != &UNK_10dfe4888) {
                        puVar15 = puVar12;
                        FUN_1097247f8();
                        if ((int)puVar15 == 0) {
                          puVar15 = &UNK_10dfe4888;
                        }
                        else {
                          puVar12 = puVar12 + (int)puVar15;
                          puVar15 = &UNK_10dfe4888;
                          if (((ulong)((long)puVar12 - *(long *)(puVar9 + 2)) <=
                               (ulong)(uint)puVar9[6]) &&
                             (puVar14 = puVar12, FUN_1097246fc(puVar12,puVar9), puVar15 = puVar12,
                             (int)puVar14 == 0)) {
                            puVar15 = &UNK_10dfe4888;
                          }
                        }
                        *(undefined **)(puVar9 + 0x1c) = puVar15;
                        if (((puVar9[0x2c] == 0) ||
                            (puVar1 = (ushort *)(puVar23 + (int)puVar9[0x2c]),
                            (ulong)(uint)puVar9[6] < (ulong)((long)puVar1 - *(long *)(puVar9 + 2))))
                           || (puVar17 = puVar1, FUN_1097246fc(puVar1,puVar9),
                              ((ulong)puVar17 & 1) == 0)) {
                          *(undefined **)(puVar9 + 0x1e) = &UNK_10dfe4888;
                        }
                        else {
                          *(ushort **)(puVar9 + 0x1e) = puVar1;
                          if ((puVar1 != (ushort *)&UNK_10dfe4888) &&
                             (uVar5 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8,
                             puVar9[0x4a] = uVar5, uVar5 == puVar9[0xe])) {
                            puVar25 = puVar9 + 0x46;
                            FUN_109724f68(puVar25,puVar9[0x24]);
                            if ((int)puVar25 != 0) {
                              if (puVar9[0x24] == 0) {
                                if (puVar9[0x37] != -1) goto LAB_1097240c0;
                              }
                              else {
                                lVar22 = 0;
                                uVar21 = 0;
                                do {
                                  if (uVar21 < (uint)puVar9[0x47]) {
                                    puVar25 = (undefined4 *)(*(long *)(puVar9 + 0x48) + lVar22);
                                  }
                                  else {
                                    uRam000000011382ab50 = 0;
                                    uRam000000011382ab38 = 0;
                                    uRam000000011382ab30 = 0;
                                    uRam000000011382ab48 = 0;
                                    uRam000000011382ab40 = 0;
                                    puVar25 = (undefined4 *)0x11382ab30;
                                  }
                                  *puVar25 = 0;
                                  *(undefined8 *)(puVar25 + 2) = 0;
                                  *(undefined8 *)(puVar25 + 4) = 0;
                                  puVar25[6] = 0;
                                  *(undefined **)(puVar25 + 8) = &UNK_10dfe4888;
                                  uVar21 = uVar21 + 1;
                                  lVar22 = lVar22 + 0x28;
                                } while (uVar21 < (uint)puVar9[0x24]);
                                if (puVar9[0x37] != -1) {
                                  if (puVar9[0x24] != 0) {
                                    lVar22 = 0;
                                    uVar21 = 0;
                                    do {
                                      puVar12 = *(undefined **)(puVar9 + 0x20);
                                      uVar18 = uVar21;
                                      FUN_1097007f0();
                                      if ((((ulong)(uint)puVar9[6] <
                                            (ulong)((long)puVar12 - *(long *)(puVar9 + 2))) ||
                                          ((uint)(puVar9[4] - (int)puVar12) < (uint)uVar18)) ||
                                         (iVar8 = puVar9[7] - (uint)uVar18, puVar9[7] = iVar8,
                                         iVar8 < 1)) goto LAB_1097240b8;
                                      _bzero(auStack_107c,0x100c);
                                      uStack_1080 = 0;
                                      uStack_1088 = uVar18 & 0xffffffff;
                                      uStack_70 = 0;
                                      piVar16 = puVar9 + 0x42;
                                      puStack_1090 = puVar12;
                                      func_0x000109725058();
                                      if ((int)puVar9[0x42] < 0) goto LAB_1097240b8;
                                      *piVar16 = 0;
                                      piVar16[2] = 0;
                                      piVar16[3] = 0;
                                      piVar16[4] = 0;
                                      piVar16[5] = 0;
                                      piVar16[6] = 0;
                                      piVar16[7] = 0;
                                      piVar16[8] = 0;
                                      piVar16[9] = -1;
                                      ppuVar13 = &puStack_1090;
                                      FUN_109725164(ppuVar13,piVar16);
                                      if ((int)ppuVar13 == 0) goto LAB_1097240b8;
                                      if (uVar21 < (uint)puVar9[0x47]) {
                                        puVar25 = (undefined4 *)(*(long *)(puVar9 + 0x48) + lVar22);
                                      }
                                      else {
                                        puVar25 = (undefined4 *)0x11382ab30;
                                        uRam000000011382ab50 = 0;
                                        uRam000000011382ab38 = 0;
                                        uRam000000011382ab30 = 0;
                                        uRam000000011382ab48 = 0;
                                        uRam000000011382ab40 = 0;
                                      }
                                      if (((piVar16[6] == 0) ||
                                          (puVar12 = puVar23 + piVar16[6],
                                          (ulong)(uint)puVar9[6] <
                                          (ulong)((long)puVar12 - *(long *)(puVar9 + 2)))) ||
                                         (uVar5 = piVar16[7],
                                         (uint)(puVar9[4] - (int)puVar12) < uVar5))
                                      goto LAB_1097240b8;
                                      iVar8 = puVar9[7];
                                      puVar9[7] = iVar8 - uVar5;
                                      if ((puVar12 == &UNK_10dfe4888) || ((int)(iVar8 - uVar5) < 1))
                                      goto LAB_1097240b8;
                                      _bzero(auStack_209c,0x100c);
                                      uStack_20a0 = 0;
                                      uStack_20a8 = (ulong)uVar5;
                                      *puVar25 = 0;
                                      *(undefined8 *)(puVar25 + 2) = 0;
                                      *(undefined8 *)(puVar25 + 4) = 0;
                                      puVar25[6] = 0;
                                      *(undefined **)(puVar25 + 8) = &UNK_10dfe4888;
                                      uVar18 = 0;
                                      puStack_20b0 = puVar12;
                                      func_0x000109725380(&puStack_20b0,puVar25);
                                      if ((uVar18 & 1) == 0) goto LAB_1097240b8;
                                      puVar15 = &UNK_10dfe4888;
                                      if (((puVar25[6] != 0) &&
                                          (puVar12 = puVar12 + (int)puVar25[6],
                                          (ulong)((long)puVar12 - *(long *)(puVar9 + 2)) <=
                                          (ulong)(uint)puVar9[6])) &&
                                         (puVar14 = puVar12, FUN_1097246fc(puVar12,puVar9),
                                         puVar15 = puVar12, (int)puVar14 == 0)) {
                                        puVar15 = &UNK_10dfe4888;
                                      }
                                      *(undefined **)(puVar25 + 8) = puVar15;
                                      uVar21 = uVar21 + 1;
                                      lVar22 = lVar22 + 0x28;
                                    } while (uVar21 < (uint)puVar9[0x24]);
                                  }
                                  goto LAB_1097240c0;
                                }
                              }
                              if (puVar9[0x47] == 0) {
                                puVar25 = (undefined4 *)0x11382ab30;
                                uRam000000011382ab50 = 0;
                                uRam000000011382ab38 = 0;
                                uRam000000011382ab30 = 0;
                                uRam000000011382ab48 = 0;
                                uRam000000011382ab40 = 0;
                              }
                              else {
                                puVar25 = *(undefined4 **)(puVar9 + 0x48);
                              }
                              if (((puVar9[0x3f] != 0) &&
                                  (puVar23 = puVar23 + (int)puVar9[0x3f],
                                  (ulong)((long)puVar23 - *(long *)(puVar9 + 2)) <=
                                  (ulong)(uint)puVar9[6])) &&
                                 (uVar5 = puVar9[0x40], uVar5 <= (uint)(puVar9[4] - (int)puVar23)))
                              {
                                iVar8 = puVar9[7];
                                puVar9[7] = iVar8 - uVar5;
                                if ((puVar23 != &UNK_10dfe4888) && (0 < (int)(iVar8 - uVar5))) {
                                  _bzero(auStack_107c,0x100c);
                                  uStack_1080 = 0;
                                  uStack_1088 = (ulong)uVar5;
                                  *puVar25 = 0;
                                  *(undefined8 *)(puVar25 + 2) = 0;
                                  *(undefined8 *)(puVar25 + 4) = 0;
                                  puVar25[6] = 0;
                                  *(undefined **)(puVar25 + 8) = &UNK_10dfe4888;
                                  ppuVar13 = &puStack_1090;
                                  puStack_1090 = puVar23;
                                  func_0x000109725380(ppuVar13,puVar25);
                                  if (((ulong)ppuVar13 & 1) != 0) {
                                    if (puVar25[6] == 0) {
                                      puVar12 = &UNK_10dfe4888;
                                    }
                                    else {
                                      puVar23 = puVar23 + (int)puVar25[6];
                                      puVar12 = &UNK_10dfe4888;
                                      if (((ulong)((long)puVar23 - *(long *)(puVar9 + 2)) <=
                                           (ulong)(uint)puVar9[6]) &&
                                         (puVar15 = puVar23, FUN_1097246fc(puVar23,puVar9),
                                         puVar12 = puVar23, (int)puVar15 == 0)) {
                                        puVar12 = &UNK_10dfe4888;
                                      }
                                    }
                                    *(undefined **)(puVar25 + 8) = puVar12;
                                    goto LAB_1097240c0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    puVar12 = puVar23 + (uint)puVar9[0x3c];
                    if (((ulong)(uint)puVar9[6] < (ulong)((long)puVar12 - *(long *)(puVar9 + 2))) ||
                       (puVar15 = puVar12, func_0x0001097257b0(puVar12,puVar9),
                       ((ulong)puVar15 & 1) == 0)) {
                      *(undefined **)(puVar9 + 0x12) = &UNK_10dfe4888;
                    }
                    else {
                      *(undefined **)(puVar9 + 0x12) = puVar12;
                      if (puVar12 != &UNK_10dfe4888) goto LAB_1097241e4;
                    }
                  }
                }
                else {
                  if (puVar9[0x2d] == 0) {
                    puVar12 = &UNK_10dfe4888;
                  }
                  else {
                    puVar15 = puVar23 + (int)puVar9[0x2d];
                    puVar12 = &UNK_10dfe4888;
                    if (((ulong)((long)puVar15 - *(long *)(puVar9 + 2)) <= (ulong)(uint)puVar9[6])
                       && (puVar14 = puVar15, FUN_1097246fc(puVar15,puVar9), puVar12 = puVar15,
                          (int)puVar14 == 0)) {
                      puVar12 = &UNK_10dfe4888;
                    }
                  }
                  *(undefined **)(puVar9 + 0x20) = puVar12;
                  puVar15 = puVar23;
                  FUN_109724ee0(puVar23,puVar9[0x3e],puVar9,*puVar12,puVar12[1]);
                  *(undefined **)(puVar9 + 0x22) = puVar15;
                  if ((puVar15 != &UNK_10dfe4888) &&
                     (*(ushort **)(puVar9 + 0x20) != (ushort *)&UNK_10dfe4888)) {
                    uVar4 = **(ushort **)(puVar9 + 0x20);
                    puVar9[0x24] = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
                    *(undefined **)(puVar9 + 0x12) = &UNK_10dfe4888;
                    if (puVar9[0x37] == -1) goto LAB_1097241d8;
                    if (*(undefined **)(puVar9 + 0x14) == &UNK_10dfe4888) goto LAB_1097240b8;
                    goto LAB_1097241e4;
                  }
                }
              }
              else {
                puVar12 = puVar23 + (uint)puVar9[0x3d];
                if (((ulong)(uint)puVar9[6] < (ulong)((long)puVar12 - *(long *)(puVar9 + 2))) ||
                   (puVar15 = puVar12, func_0x000109725674(puVar12,puVar9,puVar9 + 0x4b),
                   ((ulong)puVar15 & 1) == 0)) {
                  *(undefined **)(puVar9 + 0x14) = &UNK_10dfe4888;
                }
                else {
                  *(undefined **)(puVar9 + 0x14) = puVar12;
                  if (puVar12 != &UNK_10dfe4888) goto LAB_109724058;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1097240b8:
  FUN_109725564(puVar9);
LAB_1097240c0:
  *(undefined8 *)(puVar9 + 0x4c) = 0;
  return puVar9;
}



/* Entry: 1097246fc; end: 1097247f7;  */

bool FUN_1097246fc(ushort *param_1,long param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  
  puVar1 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 == 0) {
    bVar7 = true;
  }
  else {
    lVar8 = *(long *)(param_2 + 8);
    uVar3 = *(uint *)(param_2 + 0x18);
    if ((ulong)(((long)param_1 + 3) - lVar8) <= (ulong)uVar3) {
      bVar4 = (byte)*puVar1;
      if (bVar4 - 1 < 4) {
        uVar5 = (uVar5 + 1) * (uint)bVar4;
        iVar9 = (int)*(undefined8 *)(param_2 + 0x10);
        if (uVar5 <= (uint)(iVar9 - (int)(undefined1 *)((long)param_1 + 3))) {
          iVar6 = *(int *)(param_2 + 0x1c) - uVar5;
          *(int *)(param_2 + 0x1c) = iVar6;
          if (0 < iVar6) {
            pbVar2 = (byte *)((long)puVar1 +
                             (ulong)bVar4 +
                             (ulong)bVar4 *
                             (ulong)CONCAT11((char)*param_1,*(undefined1 *)((long)param_1 + 1)));
            FUN_1097255cc(param_1,CONCAT11((char)*param_1,*(undefined1 *)((long)param_1 + 1)));
            if ((ulong)((long)pbVar2 - lVar8) <= (ulong)uVar3 &&
                (uint)param_1 <= (uint)(iVar9 - (int)pbVar2)) {
              iVar6 = iVar6 - (uint)param_1;
              *(int *)(param_2 + 0x1c) = iVar6;
              return 0 < iVar6;
            }
          }
        }
      }
    }
    bVar7 = false;
  }
  return bVar7;
}



/* Entry: 1097247f8; end: 109724837;  */

int FUN_1097247f8(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 != 0) {
    uVar2 = param_1[1];
    FUN_1097255cc();
    return (int)param_1 + (uint)(byte)uVar2 + (byte)uVar2 * uVar1 + 2;
  }
  return 2;
}



/* Entry: 109724838; end: 109724edf;  */

bool FUN_109724838(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  
  puVar8 = param_2 + 2;
  puVar8[0] = 0;
  puVar8[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar14 = param_2 + 8;
  param_2[10] = 0xffffffff;
  param_2[0xb] = 0xffffffff;
  puVar14[0] = 0xffffffff;
  puVar14[1] = 0xffffffff;
  *param_2 = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0xffffffff;
  param_2[0xc] = 0xffffffff;
  param_2[0xd] = 0xffffffff;
  param_2[0x11] = 0xffffffff;
  param_2[0x12] = 0xffffffff;
  param_2[0xf] = 0xffffffff;
  param_2[0x10] = 0xffffffff;
  param_2[0x14] = 0;
  param_2[0x15] = 0x2210;
  puVar15 = param_2 + 0x16;
  puVar15[0] = 0;
  puVar15[1] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 1);
  while( true ) {
    uVar11 = uVar9;
    uVar1 = (int)uVar10 + 1;
    if (uVar11 < uVar1) break;
    bVar6 = *(byte *)(*param_1 + uVar10);
    uVar16 = (uint)bVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    uVar9 = uVar1;
    if (bVar6 == 0xc) {
      uVar9 = (int)uVar10 + 2;
      if (uVar9 <= uVar11) {
        uVar16 = *(byte *)(*param_1 + (ulong)uVar1) | 0x100;
        *(uint *)((long)param_1 + 0xc) = uVar9;
        goto LAB_109724934;
      }
      iVar18 = *(int *)((long)param_1 + 0x1024) + ~*param_2;
      *(uint *)((long)param_1 + 0x1024) = uVar1;
      uVar16 = 0xffff;
LAB_109724c2c:
      FUN_10972310c(uVar16,param_1);
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
      if (*(int *)((long)param_1 + 0x14) == 0) goto LAB_109724b3c;
    }
    else {
LAB_109724934:
      uVar10 = (ulong)uVar9;
      iVar18 = *(int *)((long)param_1 + 0x1024) + ~*param_2;
      if (uVar16 < 0x10) {
        if (uVar16 < 5) {
          if (uVar16 < 5) goto code_r0x0001097249d4;
        }
        else {
          if (uVar16 - 0xd < 2 || uVar16 == 5) goto LAB_109724b34;
          if (uVar16 == 0xf) {
            if (*(int *)((long)param_1 + 0x14) != 0) {
              uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
              param_2[0x17] = uVar9;
              goto LAB_109724bf8;
            }
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            param_2[0x17] = 0;
            goto LAB_109724bc4;
          }
        }
LAB_109724ac4:
        *(uint *)((long)param_1 + 0x1024) = uVar9;
        if (uVar16 == 0x124) {
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
          }
          param_2[7] = uVar9;
        }
        else if (uVar16 != 0x107) {
          if (uVar16 != 0x11) goto LAB_109724c2c;
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
          }
          param_2[6] = uVar9;
        }
        *(undefined4 *)((long)param_1 + 0x14) = 0;
      }
      else {
        switch(uVar16) {
        case 0x100:
        case 0x115:
        case 0x116:
        case 0x126:
code_r0x0001097249d4:
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
            if ((int)uVar9 < 0) {
              uVar9 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          lVar7 = 7;
          if (uVar16 != 0x126) {
            lVar7 = 0;
          }
          lVar4 = 8;
          if (uVar16 != 0x116) {
            lVar4 = lVar7;
          }
          lVar7 = 6;
          if (uVar16 != 0x115) {
            lVar7 = 0;
          }
          lVar3 = 2;
          if (uVar16 != 0x100) {
            lVar3 = lVar7;
          }
          if (uVar16 < 0x116) {
            lVar4 = lVar3;
          }
          lVar7 = 5;
          if (uVar16 != 4) {
            lVar7 = 0;
          }
          lVar3 = 4;
          if (uVar16 != 3) {
            lVar3 = lVar7;
          }
          lVar7 = 3;
          if (uVar16 != 2) {
            lVar7 = 0;
          }
          lVar2 = 1;
          if (uVar16 != 1) {
            lVar2 = lVar7;
          }
          if (uVar16 < 3) {
            lVar3 = lVar2;
          }
          if (uVar16 < 0x100) {
            lVar4 = lVar3;
          }
          puVar14[lVar4] = uVar9;
          break;
        case 0x101:
        case 0x102:
        case 0x103:
        case 0x104:
        case 0x105:
        case 0x106:
        case 0x108:
        case 0x114:
        case 0x117:
        case 0x11f:
        case 0x120:
        case 0x121:
        case 0x123:
          break;
        case 0x107:
        case 0x109:
        case 0x10a:
        case 0x10b:
        case 0x10c:
        case 0x10d:
        case 0x10e:
        case 0x10f:
        case 0x110:
        case 0x111:
        case 0x112:
        case 0x113:
        case 0x118:
        case 0x119:
        case 0x11a:
        case 0x11b:
        case 0x11c:
        case 0x11d:
        case 0x124:
          goto LAB_109724ac4;
        case 0x11e:
          iVar5 = *(int *)((long)param_1 + 0x14);
          if (iVar5 == 0) {
            param_2[0x14] = 0;
code_r0x000109724d90:
            uVar9 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
          }
          else {
            uVar9 = iVar5 - 1;
            *(uint *)((long)param_1 + 0x14) = uVar9;
            uVar13 = (uint)(double)param_1[(ulong)uVar9 + 3];
            if ((int)uVar13 < 0) {
              uVar13 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
            }
            param_2[0x14] = uVar13;
            if (uVar9 == 0) goto code_r0x000109724d90;
            *(uint *)((long)param_1 + 0x14) = iVar5 - 2U;
            uVar9 = (uint)(double)param_1[(ulong)(iVar5 - 2U) + 3];
            if ((int)uVar9 < 0) {
              uVar9 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          param_2[0x12] = uVar9;
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
            if ((int)uVar9 < 0) {
              uVar9 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          param_2[0x11] = uVar9;
          break;
        case 0x122:
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
            if ((int)uVar9 < 0) {
              uVar9 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          param_2[0x15] = uVar9;
          break;
        case 0x125:
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
          }
          param_2[0x18] = uVar9;
          break;
        default:
          if (uVar16 != 0x10) {
            if (uVar16 != 0x12) goto LAB_109724ac4;
            iVar5 = *(int *)((long)param_1 + 0x14);
            if (iVar5 == 0) {
              param_2[0x19] = 0;
LAB_109724dd4:
              uVar9 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
              uRam000000011382ab30 = 0;
            }
            else {
              param_2[0x19] = (int)(double)param_1[(ulong)(iVar5 - 1U) + 3];
              if (iVar5 - 1U == 0) goto LAB_109724dd4;
              uVar9 = (uint)(double)param_1[(ulong)(iVar5 - 2) + 3];
              if ((int)uVar9 < 0) {
                uVar9 = 0;
                *(undefined1 *)(param_1 + 2) = 1;
              }
            }
            param_2[0x1a] = uVar9;
            break;
          }
          if (*(int *)((long)param_1 + 0x14) == 0) {
            *(undefined1 *)(param_1 + 2) = 1;
            uRam000000011382ab30 = 0;
            *puVar15 = 0;
            goto LAB_109724bc4;
          }
          uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
          *puVar15 = uVar9;
LAB_109724bf8:
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          if (uVar9 == 0) goto LAB_109724bc4;
          goto LAB_109724b3c;
        }
LAB_109724b34:
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
      }
LAB_109724b3c:
      if (((uint)uVar10 <= *(uint *)(param_1 + 1)) && ((*(byte *)(param_1 + 2) & 1) == 0)) {
        uVar9 = param_2[2];
        uVar13 = param_2[3];
        if ((int)uVar13 < (int)uVar9) {
LAB_109724b70:
          param_2[3] = uVar13 + 1;
          plVar12 = (long *)(*(long *)(param_2 + 4) + (ulong)uVar13 * 0x18);
          *plVar12 = 0;
          *(undefined4 *)(plVar12 + 1) = 0xffff;
          *(undefined1 *)((long)plVar12 + 0xc) = 0;
          *(int *)(plVar12 + 2) = iVar18;
        }
        else {
          if (-1 < (int)uVar9) {
            uVar17 = uVar9;
            if (uVar9 < uVar13 + 1) {
              do {
                uVar17 = uVar17 + (uVar17 >> 1) + 8;
              } while (uVar17 < uVar13 + 1);
              if (0xaaaaaaa < uVar17) {
LAB_109724e5c:
                *puVar8 = ~uVar9;
                goto LAB_109724ea8;
              }
              lVar7 = *(long *)(param_2 + 4);
              FUN_10972564c(lVar7,uVar17);
              if (lVar7 == 0) {
                uVar9 = *puVar8;
                if (uVar9 < uVar17) goto LAB_109724e5c;
              }
              else {
                *(long *)(param_2 + 4) = lVar7;
                param_2[2] = uVar17;
              }
            }
            uVar13 = param_2[3];
            goto LAB_109724b70;
          }
LAB_109724ea8:
          plVar12 = (long *)0x11382ab30;
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        *(uint *)(plVar12 + 1) = uVar16;
        uVar13 = *param_2;
        uVar16 = *(uint *)((long)param_1 + 0xc);
        uVar10 = (ulong)uVar16;
        uVar9 = 0;
        if (uVar13 <= *(uint *)(param_1 + 1)) {
          uVar9 = *(uint *)(param_1 + 1) - uVar13;
        }
        if (uVar16 - uVar13 <= uVar9) {
          uVar9 = uVar16 - uVar13;
        }
        *plVar12 = *param_1 + (ulong)uVar13;
        *(char *)((long)plVar12 + 0xc) = (char)uVar9;
        *param_2 = uVar16;
      }
    }
LAB_109724bc4:
    if ((*(uint *)(param_1 + 1) < (uint)uVar10) ||
       (uVar9 = *(uint *)(param_1 + 1), (char)param_1[2] == '\x01')) break;
  }
  return uVar11 < uVar1;
}



/* Entry: 109724ee0; end: 109724f67;  */

char * FUN_109724ee0(long param_1,int param_2,long param_3,uint param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + param_2);
    if (((ulong)((long)pcVar1 - *(long *)(param_3 + 8)) <= (ulong)*(uint *)(param_3 + 0x18)) &&
       (pcVar2 = pcVar1 + 1,
       (ulong)((long)pcVar2 - *(long *)(param_3 + 8)) <= (ulong)*(uint *)(param_3 + 0x18))) {
      if (*pcVar1 == '\0') {
        func_0x000109723558(pcVar2,param_3);
        if ((int)pcVar2 != 0) {
          return pcVar1;
        }
      }
      else if ((*pcVar1 == '\x03') &&
              (func_0x0001097235b4(pcVar2,param_3,param_5 & 0xff | (param_4 & 0xff) << 8),
              ((ulong)pcVar2 & 1) != 0)) {
        return pcVar1;
      }
    }
  }
  return "";
}



/* Entry: 109724f68; end: 109725163;  */

undefined8 FUN_109724f68(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar5 = uVar3;
  if ((int)uVar3 < (int)param_2) {
    do {
      uVar5 = uVar5 + (uVar5 >> 1) + 8;
    } while (uVar5 < uVar1);
    if (0x6666666 < uVar5) {
LAB_109725048:
      *param_1 = ~uVar3;
      return 0;
    }
    puVar2 = param_1;
    FUN_1097259d8(param_1,uVar5);
    if (puVar2 == (uint *)0x0) {
      uVar3 = *param_1;
      if (uVar3 < uVar5) goto LAB_109725048;
    }
    else {
      *(uint **)(param_1 + 2) = puVar2;
      *param_1 = uVar5;
    }
  }
  uVar3 = param_1[1];
  if (uVar3 < uVar1) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x28);
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    } while (uVar3 < uVar1);
  }
  else if (uVar1 < uVar3) {
    FUN_10972596c(param_1,uVar1);
  }
  param_1[1] = uVar1;
  return 1;
}



/* Entry: 109725164; end: 109725563;  */

bool FUN_109725164(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_2 = 0;
  puVar10 = param_2 + 2;
  puVar10[0] = 0;
  puVar10[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0xffffffff;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 1);
  while( true ) {
    uVar8 = uVar9;
    iVar6 = (int)uVar7;
    uVar1 = iVar6 + 1;
    if (uVar8 < uVar1) break;
    bVar4 = *(byte *)(*param_1 + uVar7);
    uVar11 = (uint)bVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    uVar7 = (ulong)uVar1;
    if (bVar4 == 0xc) {
      uVar9 = iVar6 + 2;
      if (uVar9 <= uVar8) {
        uVar11 = *(byte *)(*param_1 + (ulong)uVar1) | 0x100;
        *(uint *)((long)param_1 + 0xc) = uVar9;
        uVar7 = (ulong)uVar9;
        goto LAB_1097251fc;
      }
      uVar11 = 0xffff;
LAB_1097252f8:
      FUN_10972310c(uVar11,param_1);
      uVar9 = *(uint *)(param_1 + 1);
      uVar7 = (ulong)*(uint *)((long)param_1 + 0xc);
      if (*(int *)((long)param_1 + 0x14) == 0) goto LAB_109725284;
    }
    else {
LAB_1097251fc:
      if (uVar11 < 0x107) {
        if (uVar11 != 0x12) {
          if (uVar11 == 0x105) goto LAB_10972527c;
          goto LAB_1097252f8;
        }
        iVar6 = *(int *)((long)param_1 + 0x14);
        if (iVar6 == 0) {
          param_2[6] = 0;
LAB_109725348:
          uVar9 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          uRam000000011382ab30 = 0;
        }
        else {
          uVar9 = (uint)(double)param_1[(ulong)(iVar6 - 1U) + 3];
          if ((int)uVar9 < 0) {
            uVar9 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
          }
          param_2[6] = uVar9;
          if (iVar6 - 1U == 0) goto LAB_109725348;
          uVar9 = (uint)(double)param_1[(ulong)(iVar6 - 2) + 3];
          if ((int)uVar9 < 0) {
            uVar9 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        param_2[7] = uVar9;
      }
      else if (uVar11 != 0x107) {
        if (uVar11 != 0x126) goto LAB_1097252f8;
        if (*(int *)((long)param_1 + 0x14) == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          uRam000000011382ab30 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)(double)param_1[(ulong)(*(int *)((long)param_1 + 0x14) - 1) + 3];
          if ((int)uVar9 < 0) {
            uVar9 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        param_2[9] = uVar9;
      }
LAB_10972527c:
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      uVar9 = uVar8;
LAB_109725284:
      if (((uint)uVar7 <= uVar9) && ((*(byte *)(param_1 + 2) & 1) == 0)) {
        uStack_70 = 0;
        uStack_68 = 0xffff;
        puVar5 = puVar10;
        FUN_10972302c(puVar10,&uStack_70);
        puVar5[2] = uVar11;
        uVar3 = *param_2;
        uVar9 = *(uint *)(param_1 + 1);
        uVar2 = *(uint *)((long)param_1 + 0xc);
        uVar7 = (ulong)uVar2;
        uVar11 = 0;
        if (uVar3 <= uVar9) {
          uVar11 = uVar9 - uVar3;
        }
        if (uVar2 - uVar3 <= uVar11) {
          uVar11 = uVar2 - uVar3;
        }
        *(ulong *)puVar5 = *param_1 + (ulong)uVar3;
        *(char *)(puVar5 + 3) = (char)uVar11;
        *param_2 = uVar2;
      }
    }
    if ((uVar9 < (uint)uVar7) || ((char)param_1[2] == '\x01')) break;
  }
  return uVar8 < uVar1;
}



/* Entry: 109725564; end: 1097255cb;  */

void FUN_109725564(long param_1)

{
  int *piVar1;
  
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  piVar1 = (int *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    _free(*(undefined8 *)(param_1 + 0xa8));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_109725bf4(param_1 + 0x108);
  func_0x000109725c30(param_1 + 0x118);
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1097255cc; end: 10972564b;  */

uint FUN_1097255cc(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  bVar2 = *(byte *)(param_1 + 2);
  param_1 = param_1 + 3;
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      return (uint)*(byte *)(param_1 + (ulong)param_2);
    }
    if (bVar2 == 2) {
      uVar3 = *(ushort *)(param_1 + (ulong)param_2 * 2);
      return (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    }
  }
  else if (bVar2 == 3) {
    pbVar1 = (byte *)(param_1 + (ulong)param_2 * 2 + (ulong)param_2);
    uVar4 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
  }
  else if (bVar2 == 4) {
    uVar4 = *(uint *)(param_1 + (ulong)param_2 * 4);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    return uVar4 >> 0x10 | uVar4 << 0x10;
  }
  return uVar4;
}



/* Entry: 10972564c; end: 109725673;  */

undefined8 FUN_10972564c(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0x18);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109725674; end: 10972596b;  */

bool FUN_109725674(char *param_1,long param_2,uint *param_3)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  pcVar1 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar1 - *(long *)(param_2 + 8))) {
    return false;
  }
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    uVar8 = 0;
    uVar7 = 0;
    for (uVar5 = *(int *)(param_2 + 0x38) - 1; uVar5 != 0;
        uVar5 = uVar5 + ~((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
      if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
          pcVar1 + (uVar8 * 4 - *(long *)(param_2 + 8)) + 4) {
        return false;
      }
      uVar3 = *(ushort *)(pcVar1 + uVar8 * 4 + 2);
      if (uVar5 <= ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
        return false;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar7;
    }
    *param_3 = uVar7;
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\0') {
        return false;
      }
      uVar7 = *(uint *)(param_2 + 0x38);
      *param_3 = uVar7;
      iVar4 = uVar7 - 1;
      if (iVar4 < 0) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar1 - *(long *)(param_2 + 8))) {
        return false;
      }
      if ((uint)(*(int *)(param_2 + 0x10) - (int)pcVar1) < (uint)(iVar4 * 2)) {
        return false;
      }
      iVar4 = *(int *)(param_2 + 0x1c) + iVar4 * -2;
      *(int *)(param_2 + 0x1c) = iVar4;
      return 0 < iVar4;
    }
    uVar8 = 0;
    for (uVar7 = *(int *)(param_2 + 0x38) - 1; uVar7 != 0;
        uVar7 = uVar7 + ~(uint)(byte)pcVar1[lVar6 + 2]) {
      if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
          pcVar1 + (uVar8 * 3 - *(long *)(param_2 + 8)) + 3) {
        return false;
      }
      lVar6 = uVar8 * 3;
      if (uVar7 <= (byte)pcVar1[lVar6 + 2]) {
        return false;
      }
      uVar8 = (ulong)((uint)uVar8 + 1);
    }
    *param_3 = (uint)uVar8;
  }
  return true;
}



/* Entry: 10972596c; end: 1097259d7;  */

void FUN_10972596c(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    iVar4 = param_2 - uVar1;
    piVar3 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x28 + -0x20);
    do {
      if (*piVar3 != 0) {
        piVar3[1] = 0;
        _free(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      bVar2 = iVar4 != -1;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + -10;
    } while (bVar2);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



/* Entry: 1097259d8; end: 109725aaf;  */

long FUN_1097259d8(long param_1,uint param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)param_2 * 0x28;
    _malloc();
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = 0;
      lVar5 = 0xc;
      do {
        lVar1 = lVar3 + lVar5;
        *(undefined8 *)(lVar1 + -0xc) = 0;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        *(undefined4 *)(lVar1 + -0xc) = puVar2[-3];
        *(undefined8 *)(lVar1 + -4) = *(undefined8 *)(puVar2 + -1);
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(undefined8 *)(lVar1 + 4) = *(undefined8 *)(puVar2 + 1);
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar7 = *(undefined8 *)(puVar2 + 3);
        *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(puVar2 + 5);
        *(undefined8 *)(lVar1 + 0xc) = uVar7;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        piVar6 = puVar2 + -1;
        if (*piVar6 != 0) {
          *puVar2 = 0;
          _free(*(undefined8 *)(puVar2 + 1));
        }
        piVar6[0] = 0;
        piVar6[1] = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
  }
  _free(*(undefined8 *)(param_1 + 8));
  return lVar3;
}



/* Entry: 109725ab0; end: 109725b1b;  */

void FUN_109725ab0(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    iVar4 = param_2 - uVar1;
    piVar3 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x28 + -0x20);
    do {
      if (*piVar3 != 0) {
        piVar3[1] = 0;
        _free(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      bVar2 = iVar4 != -1;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + -10;
    } while (bVar2);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



/* Entry: 109725b1c; end: 109725bf3;  */

long FUN_109725b1c(long param_1,uint param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)param_2 * 0x28;
    _malloc();
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = 0;
      lVar5 = 0xc;
      do {
        lVar1 = lVar3 + lVar5;
        *(undefined8 *)(lVar1 + -0xc) = 0;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        *(undefined4 *)(lVar1 + -0xc) = puVar2[-3];
        *(undefined8 *)(lVar1 + -4) = *(undefined8 *)(puVar2 + -1);
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(undefined8 *)(lVar1 + 4) = *(undefined8 *)(puVar2 + 1);
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar7 = *(undefined8 *)(puVar2 + 3);
        *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(puVar2 + 5);
        *(undefined8 *)(lVar1 + 0xc) = uVar7;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5);
        piVar6 = puVar2 + -1;
        if (*piVar6 != 0) {
          *puVar2 = 0;
          _free(*(undefined8 *)(puVar2 + 1));
        }
        piVar6[0] = 0;
        piVar6[1] = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
  }
  _free(*(undefined8 *)(param_1 + 8));
  return lVar3;
}



/* Entry: 109725bf4; end: 109725c6b;  */

void FUN_109725bf4(int *param_1)

{
  if (*param_1 != 0) {
    FUN_109725ab0(param_1,0);
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 109725c6c; end: 109726193;  */

undefined8
FUN_109725c6c(char *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,int param_8)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcStack_180;
  char *pcStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 auStack_140 [2];
  char *pcStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char **ppcStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f6;
  undefined8 uStack_ee;
  undefined2 uStack_e6;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c6;
  undefined8 uStack_be;
  undefined2 uStack_b6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  uint auStack_74 [5];
  
  uVar8 = (uint)param_3;
  pcVar11 = param_1;
  auStack_74[0] = uVar8;
  FUN_109726194();
  pcVar6 = param_1;
  func_0x0001097261f4();
  uStack_90 = *(ulong *)(param_2 + 0x80);
  uStack_88 = (ulong)*(uint *)(param_2 + 0x78);
  uStack_80 = 0;
  auStack_140[0] = 0;
  uStack_118 = (undefined4)param_6;
  uStack_114 = (undefined4)param_7;
  ppcStack_110 = &pcStack_a0;
  uStack_108 = 1;
  uStack_104 = 1;
  uStack_100 = 0;
  uStack_f8 = 1;
  uStack_e0 = 0;
  uStack_ee = 0;
  uStack_f6 = 0;
  uStack_e6 = 0;
  uStack_d8 = 1;
  uStack_d4 = 1;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_b0 = 0;
  uStack_be = 0;
  uStack_c6 = 0;
  uStack_b6 = 0;
  uStack_a8 = 0x80000000040;
  pcStack_138 = param_1;
  lStack_130 = param_4;
  uStack_128 = param_5;
  lStack_120 = param_2;
  pcStack_a0 = pcVar11;
  pcStack_98 = pcVar6;
  FUN_109714db8(&uStack_108,auStack_74,uVar8 * -0x61c8864f);
  if ((param_1[1] == '\0' && *param_1 == '\0') ||
     (pcVar11 = param_1, FUN_1097161d4(param_1,param_3), pcVar11 == (char *)0x0)) {
    uVar3 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    if (uVar3 != 0) {
      iVar15 = 0;
      lVar12 = (ulong)(byte)param_1[7] +
               (ulong)(byte)param_1[6] * 0x100 +
               (ulong)(byte)param_1[4] * 0x1000000 + (ulong)(byte)param_1[5] * 0x10000;
      iVar16 = uVar3 - 1;
      do {
        uVar3 = (uint)(iVar16 + iVar15) >> 1;
        uVar4 = (uint)(*(ushort *)(param_1 + (ulong)uVar3 * 6 + lVar12) >> 8) |
                (*(ushort *)(param_1 + (ulong)uVar3 * 6 + lVar12) & 0xff00ff) << 8;
        if (uVar8 <= uVar4 && uVar4 != uVar8) {
          iVar16 = uVar3 - 1;
        }
        else {
          if (uVar8 <= uVar4) {
            pcVar11 = param_1 + (ulong)uVar3 * 6 + lVar12;
            if (pcVar11 != "") {
              uVar4 = (uint)(*(ushort *)(param_1 + 0xc) >> 8) |
                      (*(ushort *)(param_1 + 0xc) & 0xff00ff) << 8;
              uVar1 = *(ushort *)(pcVar11 + 2);
              uVar3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
              uVar2 = *(ushort *)(pcVar11 + 4);
              uVar8 = 0;
              if (uVar3 <= uVar4) {
                uVar8 = uVar4 - uVar3;
              }
              if (((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) <= uVar8) {
                uVar8 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
              }
              if (uVar8 != 0) {
                lVar12 = (ulong)uVar8 << 2;
                param_1 = param_1 + (ulong)(byte)param_1[8] * 0x1000000 +
                                    (ulong)(byte)param_1[9] * 0x10000 +
                                    (ulong)(byte)param_1[10] * 0x100 +
                                    (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) * 4 +
                                    (ulong)(byte)param_1[0xb] + 3;
                do {
                  puVar7 = auStack_140;
                  FUN_109726254(0x3f800000,puVar7,
                                *(ushort *)(param_1 + -1) >> 8 | *(ushort *)(param_1 + -1) << 8,
                                &pcStack_180);
                  if (*(long *)(lStack_130 + 0x80) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x18);
                  }
                  (**(code **)(lStack_130 + 0x28))
                            (lStack_130,uStack_128,
                             *(ushort *)(param_1 + -3) >> 8 | *(ushort *)(param_1 + -3) << 8,
                             lStack_120,uVar9);
                  if (*(long *)(lStack_130 + 0x80) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x30);
                  }
                  (**(code **)(lStack_130 + 0x40))
                            (lStack_130,uStack_128,(ulong)pcStack_180 & 0xffffffff,puVar7,uVar9);
                  if (*(long *)(lStack_130 + 0x80) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x28);
                  }
                  (**(code **)(lStack_130 + 0x38))(lStack_130,uStack_128,uVar9);
                  param_1 = param_1 + 4;
                  lVar12 = lVar12 + -4;
                } while (lVar12 != 0);
              }
              goto LAB_1097260a0;
            }
            break;
          }
          iVar15 = uVar3 + 1;
        }
      } while (iVar15 <= iVar16);
    }
    uVar9 = 0;
    goto LAB_1097260a4;
  }
  if (param_8 == 0) {
LAB_109726014:
    bVar5 = true;
  }
  else {
    pcStack_178 = pcStack_98;
    pcStack_180 = pcStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    pcVar6 = param_1;
    FUN_109726448();
    FUN_1097264a8();
    if ((int)pcVar6 != 0) {
      FUN_1096feabc(param_2,&iStack_150);
      if (*(long *)(lStack_130 + 0x80) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x20);
      }
      (**(code **)(lStack_130 + 0x30))
                ((float)iStack_150,(float)(iStack_144 + iStack_14c),(float)(iStack_148 + iStack_150)
                 ,(float)iStack_14c,lStack_130,uStack_128,uVar9);
      goto LAB_109726014;
    }
    FUN_10974e9fc();
    FUN_109714f14(&pcStack_180);
    FUN_109725c6c(param_1,param_2,param_3,pcVar6,&pcStack_180,param_6,param_7,0);
    if (uStack_160._4_4_ == 0) {
      bVar5 = false;
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = 0;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
    }
    else {
      piVar10 = (int *)(lStack_158 + (ulong)(uStack_160._4_4_ - 1) * 0x14);
      iVar13 = piVar10[1];
      iVar14 = piVar10[2];
      iVar15 = piVar10[3];
      iVar16 = piVar10[4];
      bVar5 = *piVar10 != 0;
    }
    if (*(long *)(lStack_130 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x20);
    }
    (**(code **)(lStack_130 + 0x30))(iVar13,iVar14,iVar15,iVar16,lStack_130,uStack_128,uVar9);
    if ((int)uStack_160 != 0) {
      uStack_160 = uStack_160 & 0xffffffff;
      _free(lStack_158);
    }
    uStack_160 = 0;
    lStack_158 = 0;
    if ((int)uStack_170 != 0) {
      uStack_170 = uStack_170 & 0xffffffff;
      _free(uStack_168);
    }
    uStack_170 = 0;
    uStack_168 = 0;
    if ((int)pcStack_180 != 0) {
      pcStack_180 = (char *)((ulong)pcStack_180 & 0xffffffff);
      _free(pcStack_178);
    }
  }
  FUN_1097141dc(lStack_130,uStack_128,param_2);
  if (bVar5) {
    if (0 < (int)uStack_a8) {
      if (0 < uStack_a8._4_4_) {
        uStack_a8._0_4_ = (int)uStack_a8 + -1;
        uStack_a8._4_4_ = uStack_a8._4_4_ + -1;
        FUN_109726774(pcVar11,auStack_140);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
      }
    }
  }
  if (*(long *)(lStack_130 + 0x80) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 8);
  }
  (**(code **)(lStack_130 + 0x18))(lStack_130,uStack_128,uVar9);
  if (param_8 != 0) {
    if (*(long *)(lStack_130 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x28);
    }
    (**(code **)(lStack_130 + 0x38))(lStack_130,uStack_128,uVar9);
  }
LAB_1097260a0:
  uVar9 = 1;
LAB_1097260a4:
  FUN_10972c54c(&uStack_d8);
  FUN_10972c54c(&uStack_108);
  return uVar9;
}



/* Entry: 109726194; end: 109726253;  */

char * FUN_109726194(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  if ((param_1[1] != '\0' || *param_1 != '\0') &&
     ((param_1[0x1f] != '\0' || param_1[0x1e] != '\0') ||
      (param_1[0x20] != '\0' || param_1[0x21] != '\0'))) {
    uVar2 = (*(uint *)(param_1 + 0x1e) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1e) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    pcVar1 = "";
    if (uVar2 != 0) {
      pcVar1 = param_1 + uVar2;
    }
    return pcVar1;
  }
  return "";
}



/* Entry: 109726254; end: 10972640f;  */

uint FUN_109726254(float param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uStack_54;
  
  uStack_54 = *(uint *)(param_2 + 0x2c);
  *param_4 = 1;
  if ((uint)param_3 != 0xffff) {
    lVar12 = *(long *)(param_2 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 0x68);
    }
    (**(code **)(lVar12 + 0x78))(lVar12,*(undefined8 *)(param_2 + 0x18),param_3,&uStack_54,uVar11);
    if ((int)lVar12 == 0) {
      lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
      uVar2 = *(uint *)(param_2 + 0x28);
      plVar1 = (long *)(lVar12 + 0x178);
      puVar9 = (undefined *)*plVar1;
      while ((puVar9 == (undefined *)0x0 &&
             (puVar10 = *(undefined **)(lVar12 + 0x60), puVar9 = &UNK_10dfe4888,
             puVar10 != (undefined *)0x0))) {
        FUN_109747abc();
        if (puVar10 == (undefined *)0x0) {
          if (*plVar1 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = (long)&UNK_10dfe4888;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        else {
          if (*plVar1 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = (long)puVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            puVar9 = puVar10;
            if (cVar7 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          if (puVar10 != &UNK_10dfe4888) {
            FUN_1096f5a5c();
          }
        }
        puVar9 = (undefined *)*plVar1;
      }
      puVar10 = &UNK_10dfe4888;
      if (0xb < *(uint *)(puVar9 + 0x18)) {
        puVar10 = *(undefined **)(puVar9 + 0x10);
      }
      if (uVar2 < ((uint)(*(ushort *)(puVar10 + 4) >> 8) |
                  (*(ushort *)(puVar10 + 4) & 0xff00ff) << 8)) {
        uVar3 = *(ushort *)(puVar10 + (ulong)uVar2 * 2 + 0xc);
        uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
        uVar6 = (uint)(*(ushort *)(puVar10 + 6) >> 8) | (*(ushort *)(puVar10 + 6) & 0xff00ff) << 8;
        uVar2 = 0;
        if (uVar5 <= uVar6) {
          uVar2 = uVar6 - uVar5;
        }
        uVar4 = *(ushort *)(puVar10 + 2);
        if (((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) <= uVar2) {
          uVar2 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
        }
        if ((uint)param_3 < uVar2) {
          uVar2 = (*(uint *)(puVar10 +
                            (param_3 & 0xffffffff) * 4 +
                            (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 4 +
                            (ulong)(byte)puVar10[0xb] +
                            (ulong)(byte)puVar10[10] * 0x100 +
                            (ulong)(byte)puVar10[9] * 0x10000 + (ulong)(byte)puVar10[8] * 0x1000000)
                  & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar10 +
                            (param_3 & 0xffffffff) * 4 +
                            (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 4 +
                            (ulong)(byte)puVar10[0xb] +
                            (ulong)(byte)puVar10[10] * 0x100 +
                            (ulong)(byte)puVar10[9] * 0x10000 + (ulong)(byte)puVar10[8] * 0x1000000)
                  & 0xff00ff) << 8;
          uStack_54 = uVar2 >> 0x10 | uVar2 << 0x10;
        }
      }
    }
    *param_4 = 0;
  }
  return uStack_54 & 0xffffff00 | (int)(param_1 * (float)(uStack_54 & 0xff)) & 0xffU;
}



/* Entry: 109726410; end: 109726447;  */

long FUN_109726410(long param_1)

{
  FUN_10972c54c(param_1 + 0x68);
  FUN_10972c54c(param_1 + 0x38);
  return param_1;
}



/* Entry: 109726448; end: 1097264a7;  */

char * FUN_109726448(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  if ((param_1[1] != '\0' || *param_1 != '\0') &&
     ((param_1[0x17] != '\0' || param_1[0x16] != '\0') ||
      (param_1[0x18] != '\0' || param_1[0x19] != '\0'))) {
    uVar2 = (*(uint *)(param_1 + 0x16) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x16) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    pcVar1 = "";
    if (uVar2 != 0) {
      pcVar1 = param_1 + uVar2;
    }
    return pcVar1;
  }
  return "";
}



/* Entry: 1097264a8; end: 109726703;  */

undefined8 FUN_1097264a8(float param_1,long param_2,uint param_3,uint *param_4,long *param_5)

{
  ushort *puVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  uVar9 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  iVar5 = uVar9 - 1;
  if ((int)uVar9 < 1) {
    return 0;
  }
  iVar6 = 0;
  do {
    uVar9 = (uint)(iVar5 + iVar6) >> 1;
    uVar7 = (ulong)uVar9;
    lVar8 = (param_2 + 5) - uVar7;
    puVar1 = (ushort *)(lVar8 + uVar7 * 8);
    uVar3 = *puVar1;
    if (param_3 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
      iVar5 = uVar9 - 1;
    }
    else {
      uVar3 = puVar1[1];
      if (param_3 <= ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
        lVar8 = lVar8 + uVar7 * 8;
        uVar9 = (uint)*(byte *)(lVar8 + 4) << 0x10 | (uint)*(byte *)(lVar8 + 5) << 8 |
                (uint)*(byte *)(lVar8 + 6);
        pcVar2 = "";
        if (uVar9 != 0) {
          pcVar2 = (char *)(param_2 + (ulong)uVar9);
        }
        if (*pcVar2 == '\x02') {
          uVar9 = (int)(short)((ushort)(byte)pcVar2[1] << 8) | (uint)(byte)pcVar2[2];
          uVar10 = (int)(short)((ushort)(byte)pcVar2[3] << 8) | (uint)(byte)pcVar2[4];
          uVar11 = (int)(short)((ushort)(byte)pcVar2[5] << 8) | (uint)(byte)pcVar2[6];
          uVar12 = (int)(short)((ushort)(byte)pcVar2[7] << 8) | (uint)(byte)pcVar2[8];
          if ((*param_5 != 0) && ((int)param_5[3] != 0)) {
            uVar4 = (*(uint *)(pcVar2 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar2 + 9) & 0xff00ff) << 8;
            FUN_109726704(param_5,uVar4 >> 0x10 | uVar4 << 0x10,0);
            fVar13 = (float)(int)(param_1 + 0.5) + (float)(int)uVar9;
            uVar9 = (uint)fVar13;
            uVar4 = (*(uint *)(pcVar2 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar2 + 9) & 0xff00ff) << 8;
            FUN_109726704(param_5,uVar4 >> 0x10 | uVar4 << 0x10,1);
            fVar13 = (float)(int)(fVar13 + 0.5) + (float)(int)uVar10;
            uVar10 = (uint)fVar13;
            uVar4 = (*(uint *)(pcVar2 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar2 + 9) & 0xff00ff) << 8;
            FUN_109726704(param_5,uVar4 >> 0x10 | uVar4 << 0x10,2);
            fVar13 = (float)(int)(fVar13 + 0.5) + (float)(int)uVar11;
            uVar11 = (uint)fVar13;
            uVar4 = (*(uint *)(pcVar2 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(pcVar2 + 9) & 0xff00ff) << 8;
            FUN_109726704(param_5,uVar4 >> 0x10 | uVar4 << 0x10,3);
            uVar12 = (uint)((float)(int)(fVar13 + 0.5) + (float)(int)uVar12);
          }
        }
        else {
          if (*pcVar2 != '\x01') {
            return 1;
          }
          uVar9 = (int)(short)((ushort)(byte)pcVar2[1] << 8) | (uint)(byte)pcVar2[2];
          uVar10 = (int)(short)((ushort)(byte)pcVar2[3] << 8) | (uint)(byte)pcVar2[4];
          uVar11 = (int)(short)((ushort)(byte)pcVar2[5] << 8) | (uint)(byte)pcVar2[6];
          uVar12 = (int)(short)((ushort)(byte)pcVar2[7] << 8) | (uint)(byte)pcVar2[8];
        }
        *param_4 = uVar9;
        param_4[1] = uVar12;
        param_4[2] = uVar11 - uVar9;
        param_4[3] = uVar10 - uVar12;
        return 1;
      }
      iVar6 = uVar9 + 1;
    }
  } while (iVar6 <= iVar5);
  return 0;
}



/* Entry: 109726704; end: 109726773;  */

/* WARNING: Removing unreachable block (ram,0x00010971eae0) */
/* WARNING: Removing unreachable block (ram,0x00010971eae4) */
/* WARNING: Removing unreachable block (ram,0x00010971eaf0) */
/* WARNING: Removing unreachable block (ram,0x00010971eb28) */

float FUN_109726704(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined *puVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar13 = param_3 + param_4;
  }
  else {
    param_4 = param_3 + param_4;
    if (param_3 == -1) {
      param_4 = -1;
    }
    FUN_10971e940(lVar6,param_4);
    uVar13 = (uint)lVar6;
  }
  if ((int)param_2[3] != 0) {
    lVar9 = *param_2;
    lVar7 = param_2[2];
    lVar6 = param_2[3];
    lVar8 = param_2[4];
    fVar15 = 0.0;
    if (uVar13 >> 0x10 <
        ((uint)(*(ushort *)(lVar9 + 6) >> 8) | (*(ushort *)(lVar9 + 6) & 0xff00ff) << 8)) {
      uVar3 = *(uint *)(lVar9 + (ulong)(uVar13 >> 0x10) * 4 + 8);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      puVar1 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar1 = (ushort *)(lVar9 + (ulong)uVar3);
      }
      uVar3 = (*(uint *)(lVar9 + 2) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 2) & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      puVar2 = (ushort *)&UNK_10dfe4888;
      if (uVar3 != 0) {
        puVar2 = (ushort *)(lVar9 + (ulong)uVar3);
      }
      if ((uVar13 & 0xffff) < ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8)) {
        bVar4 = (byte)puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 5);
        uVar3 = (uint)*(byte *)((long)puVar1 + 3) | ((byte)puVar1[1] & 0x7f) << 8;
        puVar10 = (ushort *)
                  ((long)(puVar1 + 2) +
                  (ulong)((uVar3 + CONCAT11(bVar4,bVar5) << (ulong)(byte)((byte)puVar1[1] >> 7)) *
                         (uVar13 & 0xffff)) + (ulong)bVar4 * 0x200 + (ulong)bVar5 * 2 + 2);
        fVar15 = 0.0;
        uVar13 = 0;
        if (uVar3 != 0) {
          puVar12 = (undefined *)((long)puVar1 + 7);
          puVar11 = puVar10;
          uVar14 = (ulong)uVar3;
          do {
            FUN_10971ec24(puVar2,*(ushort *)(puVar12 + -1) >> 8 | *(ushort *)(puVar12 + -1) << 8,
                          lVar7,(int)lVar6,lVar8);
            fVar15 = fVar15 + (float)(int)(short)(*puVar11 >> 8 | *puVar11 << 8) * (float)param_1;
            puVar12 = puVar12 + 2;
            uVar14 = uVar14 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar14 != 0);
          puVar10 = puVar10 + uVar3;
          uVar13 = uVar3;
        }
        if (uVar13 < CONCAT11(bVar4,bVar5)) {
          lVar9 = (ulong)((uint)bVar4 * 0x100 + (uint)bVar5) - (ulong)uVar13;
          puVar12 = (undefined *)((long)puVar1 + (ulong)uVar13 * 2 + 7);
          do {
            FUN_10971ec24(puVar2,*(ushort *)(puVar12 + -1) >> 8 | *(ushort *)(puVar12 + -1) << 8,
                          lVar7,(int)lVar6,lVar8);
            fVar15 = fVar15 + (float)(int)(char)(byte)*puVar10 * (float)param_1;
            puVar12 = puVar12 + 2;
            lVar9 = lVar9 + -1;
            puVar10 = (ushort *)((long)puVar10 + 1);
          } while (lVar9 != 0);
        }
      }
    }
    return fVar15;
  }
  return 0.0;
}



/* Entry: 109726774; end: 109727a27;  */

void FUN_109726774(float param_1,undefined1 *param_2,long param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  undefined *puVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint *puVar21;
  code *pcVar22;
  undefined8 *puVar23;
  short sVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  undefined8 unaff_x23;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uStack_118;
  byte *pbStack_110;
  code *pcStack_108;
  long lStack_100;
  code *pcStack_f8;
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
  
  lStack_100 = param_3;
  switch(*param_2) {
  case 1:
    uVar17 = *(uint *)(*(long *)(param_3 + 8) + 0x12);
    uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    puVar1 = (uint *)&UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar1 = (uint *)(*(long *)(param_3 + 8) + (ulong)uVar17);
    }
    uVar20 = (uint)(byte)param_2[2];
    uVar28 = (uint)(byte)param_2[3];
    uVar32 = (uint)(byte)param_2[4];
    uVar29 = (uint)(byte)param_2[5];
    uVar17 = (uint)(byte)param_2[2] << 0x18 | (uint)(byte)param_2[3] << 0x10 |
             (uint)(byte)param_2[4] << 8 | (uint)(byte)param_2[5];
    uVar26 = (ulong)uVar17;
    pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,uVar17);
    uVar30 = (uint)(byte)param_2[1];
    if (uVar17 < uVar17 + (byte)param_2[1]) {
      iVar14 = uVar17 * -0x61c8864f;
      puVar31 = puVar1 + uVar17;
      do {
        puVar31 = puVar31 + 1;
        if (*(long *)(param_3 + 0x90) == 0) {
code_r0x000109726860:
          FUN_109714db8(param_3 + 0x68,&pbStack_110,iVar14);
          uVar17 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
          puVar21 = puVar31;
          if ((uVar17 >> 0x10 | uVar17 << 0x10) <= uVar26) {
            puVar21 = (uint *)&UNK_10dfe4888;
          }
          uVar17 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
          uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
          puVar15 = &UNK_10dfe4888;
          if (uVar17 != 0) {
            puVar15 = (undefined *)((long)puVar1 + (ulong)uVar17);
          }
          lVar16 = *(long *)(param_3 + 0x10);
          if (*(long *)(lVar16 + 0x80) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x58);
          }
          (**(code **)(lVar16 + 0x68))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
          if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
            *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
            *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
            FUN_109726774(puVar15,param_3);
            *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
          }
          lVar16 = *(long *)(param_3 + 0x10);
          if (*(long *)(lVar16 + 0x80) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x60);
          }
          (**(code **)(lVar16 + 0x70))(lVar16,*(undefined8 *)(param_3 + 0x18),3,uVar18);
          FUN_1096fc87c(param_3 + 0x68,uVar26);
          uVar20 = (uint)(byte)param_2[2];
          uVar28 = (uint)(byte)param_2[3];
          uVar32 = (uint)(byte)param_2[4];
          uVar29 = (uint)(byte)param_2[5];
          uVar30 = (uint)(byte)param_2[1];
        }
        else {
          lVar16 = param_3 + 0x68;
          FUN_109739e3c(lVar16,uVar26,iVar14);
          if (lVar16 == 0) goto code_r0x000109726860;
        }
        uVar26 = uVar26 + 1;
        pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,(int)uVar26);
        iVar14 = iVar14 + -0x61c8864f;
      } while (uVar26 < (uVar28 << 0x10 | uVar20 << 0x18 | uVar32 << 8 | uVar29) + uVar30);
    }
    break;
  case 2:
    uVar17 = 0xffffffff;
    goto code_r0x000109726e50;
  case 3:
    uVar17 = (*(uint *)(param_2 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 5) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109726e50:
    uVar10 = *(ushort *)(param_2 + 1);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    lVar27 = param_3;
    FUN_109726254((param_1 +
                  (float)(int)(short)(*(ushort *)(param_2 + 3) >> 8 | *(ushort *)(param_2 + 3) << 8)
                  ) * 6.1035156e-05,param_3,uVar10 >> 8 | uVar10 << 8,&stack0xffffffffffffffcc);
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000109727ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x40))
              (lVar16,*(undefined8 *)(param_3 + 0x18),(int)((ulong)unaff_x23 >> 0x20),lVar27,uVar18)
    ;
    return;
  case 4:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727ac4;
    pcStack_f8 = FUN_109727bb8;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uStack_118 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = param_2[4];
    uVar8 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,0);
    uVar9 = param_2[6];
    uVar3 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,1);
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,2);
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,3);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,4);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,5);
    pcVar22 = *(code **)(lVar16 + 0x50);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x40);
    }
    sVar11 = CONCAT11(uVar6,uVar7);
    sVar24 = CONCAT11(uVar4,uVar5);
    goto code_r0x00010972760c;
  case 5:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727c7c;
    uVar17 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    pcStack_f8 = FUN_109727d74;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uStack_118 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = param_2[4];
    uVar8 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    uVar9 = param_2[6];
    uVar3 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,3);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,4);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,5);
    pcVar22 = *(code **)(lVar16 + 0x50);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x40);
    }
    sVar11 = CONCAT11(uVar6,uVar7);
    sVar24 = CONCAT11(uVar4,uVar5);
code_r0x00010972760c:
    uVar17 = (uint)sVar24;
code_r0x0001097277ac:
    (*pcVar22)(fVar33 + (float)(int)CONCAT11(uVar2,uVar8),fVar36 + (float)(int)CONCAT11(uVar9,uVar3)
               ,fVar35 + (float)(int)uVar17,fVar34 + (float)(int)sVar11,lVar16,uStack_118,
               &pbStack_110,uVar18);
    break;
  case 6:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727ac4;
    pcStack_f8 = FUN_109727bb8;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uStack_118 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = param_2[4];
    uVar8 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,0);
    uVar9 = param_2[6];
    uVar3 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,1);
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,2);
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,3);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,4);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,5);
    pcVar22 = *(code **)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x48);
    }
    sVar11 = CONCAT11(uVar6,uVar7);
    uVar10 = CONCAT11(uVar4,uVar5);
    goto code_r0x0001097277a8;
  case 7:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727c7c;
    uVar17 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    pcStack_f8 = FUN_109727d74;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uStack_118 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = param_2[4];
    uVar8 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    uVar9 = param_2[6];
    uVar3 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,3);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,4);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,5);
    pcVar22 = *(code **)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x48);
    }
    sVar11 = CONCAT11(uVar6,uVar7);
    uVar10 = CONCAT11(uVar4,uVar5);
code_r0x0001097277a8:
    uVar17 = (uint)uVar10;
    goto code_r0x0001097277ac;
  case 8:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727ac4;
    pcStack_f8 = FUN_109727bb8;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,0);
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,1);
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,2);
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),0xffffffff,3);
    pcVar22 = *(code **)(lVar16 + 0x60);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x50);
    }
    fVar34 = fVar34 + (float)(int)CONCAT11(param_2[10],param_2[0xb]);
    fVar35 = fVar35 + (float)(int)CONCAT11(uVar8,uVar9);
    fVar36 = fVar36 + (float)(int)CONCAT11(uVar6,uVar7);
    fVar33 = fVar33 + (float)(int)CONCAT11(uVar4,uVar5);
    goto code_r0x00010972786c;
  case 9:
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    pbStack_110 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      pbStack_110 = param_2 + uVar17;
    }
    pcStack_108 = FUN_109727c7c;
    uVar17 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    pcStack_f8 = FUN_109727d74;
    fVar33 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    fVar36 = fVar33;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    fVar35 = fVar36;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    fVar34 = fVar35;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,3);
    pcVar22 = *(code **)(lVar16 + 0x60);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x50);
    }
    fVar34 = fVar34 + (float)(int)CONCAT11(param_2[10],param_2[0xb]);
    fVar35 = fVar35 + (float)(int)CONCAT11(uVar8,uVar9);
    fVar36 = fVar36 + (float)(int)CONCAT11(uVar6,uVar7);
    fVar33 = fVar33 + (float)(int)CONCAT11(uVar4,uVar5);
code_r0x00010972786c:
    (*pcVar22)(fVar33,fVar36,(fVar35 * 6.1035156e-05 + 1.0) * 3.1415927,
               (fVar34 * 6.1035156e-05 + 1.0) * 3.1415927,lVar16,uVar18,&pbStack_110,uVar19);
    break;
  case 10:
    FUN_1097153a8(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                  *(undefined8 *)(param_3 + 0x20));
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x18);
    }
    (**(code **)(lVar16 + 0x28))
              (lVar16,*(undefined8 *)(param_3 + 0x18),
               *(ushort *)(param_2 + 4) >> 8 | *(ushort *)(param_2 + 4) << 8,
               *(undefined8 *)(param_3 + 0x20),uVar18);
    FUN_1097141dc(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                  *(undefined8 *)(param_3 + 0x20));
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x28);
    }
    (**(code **)(lVar16 + 0x38))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    goto code_r0x000109727590;
  case 0xb:
    uVar17 = (uint)(*(ushort *)(param_2 + 1) >> 8) | (*(ushort *)(param_2 + 1) & 0xff00ff) << 8;
    if (*(long *)(param_3 + 0x60) != 0) {
      lVar16 = param_3 + 0x38;
      FUN_109739e3c(lVar16,uVar17,uVar17 * -0x61c8864f);
      if (lVar16 != 0) {
        return;
      }
    }
    pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,uVar17);
    FUN_109714db8(param_3 + 0x38,&pbStack_110,uVar17 * -0x61c8864f);
    FUN_1097153a8(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                  *(undefined8 *)(param_3 + 0x20));
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x18);
    }
    (**(code **)(lVar16 + 0x20))
              (lVar16,*(undefined8 *)(param_3 + 0x18),
               *(ushort *)(param_2 + 1) >> 8 | *(ushort *)(param_2 + 1) << 8,
               *(undefined8 *)(param_3 + 0x20),uVar18);
    lVar27 = *(long *)(param_3 + 0x10);
    lVar25 = *(long *)(lVar27 + 0x80);
    if ((int)lVar16 != 0) {
      if (lVar25 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(lVar25 + 8);
      }
      (**(code **)(lVar27 + 0x18))(lVar27,*(undefined8 *)(param_3 + 0x18),uVar18);
      uVar17 = (uint)(*(ushort *)(param_2 + 1) >> 8) | (*(ushort *)(param_2 + 1) & 0xff00ff) << 8;
      lVar16 = param_3 + 0x38;
      if ((*(long *)(param_3 + 0x60) != 0) &&
         (FUN_109739e3c(lVar16,uVar17,uVar17 * -0x61c8864f), lVar16 != 0)) {
        *(uint *)(lVar16 + 4) = *(uint *)(lVar16 + 4) & 0xfffffffe;
        *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + -1;
      }
      return;
    }
    if (lVar25 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(lVar25 + 8);
    }
    (**(code **)(lVar27 + 0x18))(lVar27,*(undefined8 *)(param_3 + 0x18),uVar18);
    lVar27 = *(long *)(param_3 + 8);
    lVar16 = lVar27;
    FUN_1097161d4(lVar27,*(ushort *)(param_2 + 1) >> 8 | *(ushort *)(param_2 + 1) << 8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    puVar23 = *(undefined8 **)(param_3 + 0x30);
    pcStack_108 = (code *)puVar23[1];
    pbStack_110 = (byte *)*puVar23;
    pcStack_f8 = (code *)puVar23[3];
    lStack_100 = puVar23[2];
    uStack_f0 = puVar23[4];
    FUN_109726448();
    iVar14 = (int)lVar27;
    FUN_1097264a8();
    if (iVar14 != 0) {
      lVar27 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar27 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0x80) + 0x20);
      }
      (**(code **)(lVar27 + 0x30))
                ((float)(int)uStack_a8,(float)(uStack_a0._4_4_ + uStack_a8._4_4_),
                 (float)((int)uStack_a0 + (int)uStack_a8),(float)uStack_a8._4_4_,lVar27,
                 *(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if (((lVar16 != 0) && (0 < *(int *)(param_3 + 0x98))) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(lVar16,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (iVar14 != 0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x28);
      }
      (**(code **)(lVar16 + 0x38))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    FUN_1096fc87c(param_3 + 0x38,*(ushort *)(param_2 + 1) >> 8 | *(ushort *)(param_2 + 1) << 8);
    break;
  case 0xc:
    uVar17 = (uint)(byte)param_2[4] << 0x10 | (uint)(byte)param_2[5] << 8 | (uint)(byte)param_2[6];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    uVar17 = 0xffffffff;
    goto code_r0x000109726b54;
  case 0xd:
    uVar17 = (uint)(byte)param_2[4] << 0x10 | (uint)(byte)param_2[5] << 8 | (uint)(byte)param_2[6];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    uVar17 = (*(uint *)(puVar15 + 0x18) & 0xff00ff00) >> 8 |
             (*(uint *)(puVar15 + 0x18) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109726b54:
    FUN_109727d7c(puVar15,param_3,uVar17);
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
code_r0x000109727590:
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001097275d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    return;
  case 0xe:
    uVar17 = 0xffffffff;
    goto code_r0x00010972704c;
  case 0xf:
    uVar17 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x00010972704c:
    uVar10 = *(ushort *)(param_2 + 4);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    fVar34 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    uVar10 = *(ushort *)(param_2 + 6);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    bVar12 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8) != 0.0;
    if (bVar12 || fVar34 != 0.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))
                (0x3f800000,0,0,0x3f800000,fVar34,lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (bVar12 || fVar34 != 0.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000109728118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x10:
    uVar17 = 0xffffffff;
    goto code_r0x000109726c24;
  case 0x11:
    uVar17 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109726c24:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar35 = param_1 * 6.1035156e-05;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    fVar34 = (param_1 +
             (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 | *(ushort *)(param_2 + 6) << 8)) *
             6.1035156e-05;
    if (fVar34 != 1.0 || fVar35 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))
                (fVar35,0,0,fVar34,0,0,lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (fVar34 != 1.0 || fVar35 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000109728284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x12:
    uVar17 = 0xffffffff;
    goto code_r0x0001097271b0;
  case 0x13:
    uVar17 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x0001097271b0:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar34 = param_1 * 6.1035156e-05;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                           *(ushort *)(param_2 + 6) << 8);
    fVar36 = param_1 * 6.1035156e-05;
    uVar10 = *(ushort *)(param_2 + 8);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    fVar35 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    uVar10 = *(ushort *)(param_2 + 10);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,3);
    param_1 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    bVar12 = fVar35 != 0.0;
    bVar13 = param_1 != 0.0;
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,fVar35,param_1,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    if (fVar36 != 1.0 || fVar34 != 1.0) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(fVar34,0,0,fVar36,0,0,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,-fVar35,-param_1,lVar16,uVar18,uVar19);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (bVar13 || bVar12) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if (fVar36 != 1.0 || fVar34 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      if (!bVar13 && !bVar12) {
        return;
      }
    }
    else if (!bVar13 && !bVar12) {
      return;
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001097284dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    return;
  case 0x14:
    uVar17 = 0xffffffff;
    goto code_r0x000109727390;
  case 0x15:
    uVar17 = (*(uint *)(param_2 + 6) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 6) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109727390:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    fVar34 = (param_1 +
             (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 | *(ushort *)(param_2 + 4) << 8)) *
             6.1035156e-05;
    if (fVar34 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))
                (fVar34,0,0,fVar34,0,0,lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (fVar34 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000109728654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x16:
    uVar17 = 0xffffffff;
    goto code_r0x000109727358;
  case 0x17:
    uVar17 = (*(uint *)(param_2 + 10) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 10) & 0xff00ff) << 8
    ;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109727358:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar34 = param_1 * 6.1035156e-05;
    uVar10 = *(ushort *)(param_2 + 6);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    fVar35 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    uVar10 = *(ushort *)(param_2 + 8);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    param_1 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    bVar12 = fVar35 != 0.0;
    bVar13 = param_1 != 0.0;
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,fVar35,param_1,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    if (fVar34 != 1.0) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(fVar34,0,0,fVar34,0,0,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,-fVar35,-param_1,lVar16,uVar18,uVar19);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (bVar13 || bVar12) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if (fVar34 != 1.0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if (bVar13 || bVar12) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x0001097288bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x18:
    uVar17 = 0xffffffff;
    goto code_r0x0001097273c8;
  case 0x19:
    uVar17 = (*(uint *)(param_2 + 6) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 6) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x0001097273c8:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    FUN_10971545c((param_1 +
                  (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 | *(ushort *)(param_2 + 4) << 8)
                  ) * 6.1035156e-05,uVar18,*(undefined8 *)(param_3 + 0x18));
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if ((int)uVar18 != 0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x0001097289ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x1a:
    uVar17 = 0xffffffff;
    goto code_r0x000109727478;
  case 0x1b:
    uVar17 = (*(uint *)(param_2 + 10) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 10) & 0xff00ff) << 8
    ;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109727478:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar34 = param_1 * 6.1035156e-05;
    uVar10 = *(ushort *)(param_2 + 6);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    fVar35 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    uVar10 = *(ushort *)(param_2 + 8);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    param_1 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    bVar12 = fVar35 != 0.0;
    bVar13 = param_1 != 0.0;
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,fVar35,param_1,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    FUN_10971545c(fVar34,lVar16,uVar18);
    if (bVar13 || bVar12) {
      lVar27 = *(long *)(param_3 + 0x10);
      if (*(undefined8 **)(lVar27 + 0x80) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(lVar27 + 0x80);
      }
      (**(code **)(lVar27 + 0x10))
                (0x3f800000,0,0,0x3f800000,-fVar35,-param_1,lVar27,*(undefined8 *)(param_3 + 0x18),
                 uVar18);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (bVar13 || bVar12) {
      lVar27 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar27 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0x80) + 8);
      }
      (**(code **)(lVar27 + 0x18))(lVar27,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if ((int)lVar16 == 0) {
      if (!bVar13 && !bVar12) {
        return;
      }
    }
    else {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      if (!bVar13 && !bVar12) {
        return;
      }
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000109728b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    return;
  case 0x1c:
    uVar17 = 0xffffffff;
    goto code_r0x000109727404;
  case 0x1d:
    uVar17 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x000109727404:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar34 = param_1 * 6.1035156e-05;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    FUN_1097154e8(fVar34,(param_1 +
                         (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                            *(ushort *)(param_2 + 6) << 8)) * 6.1035156e-05,uVar18,
                  *(undefined8 *)(param_3 + 0x18));
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if ((int)uVar18 != 0) {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000109728d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      return;
    }
    return;
  case 0x1e:
    uVar17 = 0xffffffff;
    goto code_r0x00010972743c;
  case 0x1f:
    uVar17 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
code_r0x00010972743c:
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,0);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                           *(ushort *)(param_2 + 4) << 8);
    fVar34 = param_1 * 6.1035156e-05;
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,1);
    param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                           *(ushort *)(param_2 + 6) << 8);
    fVar35 = param_1 * 6.1035156e-05;
    uVar10 = *(ushort *)(param_2 + 8);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,2);
    fVar36 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    uVar10 = *(ushort *)(param_2 + 10);
    FUN_109726704(*(undefined8 *)(param_3 + 0x30),uVar17,3);
    param_1 = param_1 + (float)(int)(short)(uVar10 >> 8 | uVar10 << 8);
    lVar16 = *(long *)(param_3 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x18);
    bVar12 = fVar36 != 0.0;
    bVar13 = param_1 != 0.0;
    if (bVar13 || bVar12) {
      if (*(undefined8 **)(lVar16 + 0x80) == (undefined8 *)0x0) {
        uVar19 = 0;
      }
      else {
        uVar19 = **(undefined8 **)(lVar16 + 0x80);
      }
      (**(code **)(lVar16 + 0x10))(0x3f800000,0,0,0x3f800000,fVar36,param_1,lVar16,uVar18,uVar19);
      lVar16 = *(long *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
    }
    FUN_1097154e8(fVar34,fVar35,lVar16,uVar18);
    if (bVar13 || bVar12) {
      lVar27 = *(long *)(param_3 + 0x10);
      if (*(undefined8 **)(lVar27 + 0x80) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = **(undefined8 **)(lVar27 + 0x80);
      }
      (**(code **)(lVar27 + 0x10))
                (0x3f800000,0,0,0x3f800000,-fVar36,-param_1,lVar27,*(undefined8 *)(param_3 + 0x18),
                 uVar18);
    }
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    if (bVar13 || bVar12) {
      lVar27 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar27 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0x80) + 8);
      }
      (**(code **)(lVar27 + 0x18))(lVar27,*(undefined8 *)(param_3 + 0x18),uVar18);
    }
    if ((int)lVar16 == 0) {
      if (!bVar13 && !bVar12) {
        return;
      }
    }
    else {
      lVar16 = *(long *)(param_3 + 0x10);
      if (*(long *)(lVar16 + 0x80) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
      }
      (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
      if (!bVar13 && !bVar12) {
        return;
      }
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000109728f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x18))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    return;
  case 0x20:
    uVar17 = (uint)(byte)param_2[5] << 0x10 | (uint)(byte)param_2[6] << 8 | (uint)(byte)param_2[7];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x58);
    }
    (**(code **)(lVar16 + 0x68))(lVar16,*(undefined8 *)(param_3 + 0x18),uVar18);
    uVar17 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 | (uint)(byte)param_2[3];
    puVar15 = &UNK_10dfe4888;
    if (uVar17 != 0) {
      puVar15 = param_2 + uVar17;
    }
    if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
      FUN_109726774(puVar15,param_3);
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    lVar16 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar16 + 0x80) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0x80) + 0x60);
    }
                    /* WARNING: Could not recover jumptable at 0x00010972773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 0x70))(lVar16,*(undefined8 *)(param_3 + 0x18),param_2[4],uVar18);
    return;
  }
  return;
}



/* Entry: 109727a28; end: 109727ac3;  */

void FUN_109727a28(float param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_34;
  
  uVar2 = *(ushort *)(param_2 + 1);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  lVar3 = param_3;
  FUN_109726254((param_1 +
                (float)(int)(short)(*(ushort *)(param_2 + 3) >> 8 | *(ushort *)(param_2 + 3) << 8))
                * 6.1035156e-05,param_3,uVar2 >> 8 | uVar2 << 8,&uStack_34);
  lVar1 = *(long *)(param_3 + 0x10);
  if (*(long *)(lVar1 + 0x80) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x80) + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x000109727ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x40))(lVar1,*(undefined8 *)(param_3 + 0x18),uStack_34,lVar3,uVar4);
  return;
}



/* Entry: 109727ac4; end: 109727bb7;  */

uint FUN_109727ac4(undefined8 param_1,long param_2,uint param_3,uint *param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar2 = (uint)(*(ushort *)(param_2 + 1) >> 8) | (*(ushort *)(param_2 + 1) & 0xff00ff) << 8;
  if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
    if (*param_4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = *(undefined8 *)(param_6 + 0x30);
      uVar1 = param_3;
      if (param_3 <= uVar2) {
        uVar1 = uVar2;
      }
      puVar7 = (undefined *)(param_2 + (ulong)param_3 * 6 + 3);
      do {
        uVar6 = (ulong)uVar1 - (ulong)param_3;
        if ((ulong)uVar1 - (ulong)param_3 == uVar5) break;
        puVar3 = puVar7;
        if ((ulong)((uint)(*(ushort *)(param_2 + 1) >> 8) |
                   (*(ushort *)(param_2 + 1) & 0xff00ff) << 8) <= param_3 + uVar5) {
          puVar3 = &UNK_10dfe4888;
        }
        FUN_109727bc0(puVar3,param_6,param_5,0xffffffff,uVar4);
        uVar5 = uVar5 + 1;
        param_5 = param_5 + 0xc;
        puVar7 = puVar7 + 6;
        uVar6 = uVar5;
      } while (uVar5 < *param_4);
    }
    *param_4 = (uint)uVar6;
  }
  return uVar2;
}



/* Entry: 109727bb8; end: 109727bbf;  */

undefined1 FUN_109727bb8(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



/* Entry: 109727bc0; end: 109727c7b;  */

void FUN_109727bc0(float param_1,ushort *param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  float fVar2;
  
  FUN_109726704(param_6,param_5,0);
  fVar2 = (param_1 + (float)(int)(short)(*param_2 >> 8 | *param_2 << 8)) * 6.1035156e-05;
  *param_4 = fVar2;
  uVar1 = param_2[1];
  FUN_109726704(param_6,param_5,1);
  FUN_109726254((fVar2 + (float)(int)(short)(param_2[2] >> 8 | param_2[2] << 8)) * 6.1035156e-05,
                param_3,uVar1 >> 8 | uVar1 << 8,param_4 + 1);
  param_4[2] = (float)param_3;
  return;
}



/* Entry: 109727c7c; end: 109727d73;  */

uint FUN_109727c7c(undefined8 param_1,long param_2,uint param_3,uint *param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar3 = (uint)(*(ushort *)(param_2 + 1) >> 8) | (*(ushort *)(param_2 + 1) & 0xff00ff) << 8;
  if ((param_4 != (uint *)0x0) && (param_5 != 0)) {
    if (*param_4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = *(undefined8 *)(param_6 + 0x30);
      uVar1 = param_3;
      if (param_3 <= uVar3) {
        uVar1 = uVar3;
      }
      puVar8 = (undefined *)(param_2 + (ulong)param_3 * 10 + 3);
      do {
        uVar7 = (ulong)uVar1 - (ulong)param_3;
        if ((ulong)uVar1 - (ulong)param_3 == uVar6) break;
        puVar4 = puVar8;
        if ((ulong)((uint)(*(ushort *)(param_2 + 1) >> 8) |
                   (*(ushort *)(param_2 + 1) & 0xff00ff) << 8) <= param_3 + uVar6) {
          puVar4 = &UNK_10dfe4888;
        }
        uVar2 = (*(uint *)(puVar4 + 6) & 0xff00ff00) >> 8 | (*(uint *)(puVar4 + 6) & 0xff00ff) << 8;
        FUN_109727bc0(puVar4,param_6,param_5,uVar2 >> 0x10 | uVar2 << 0x10,uVar5);
        uVar6 = uVar6 + 1;
        param_5 = param_5 + 0xc;
        puVar8 = puVar8 + 10;
        uVar7 = uVar6;
      } while (uVar6 < *param_4);
    }
    *param_4 = (uint)uVar7;
  }
  return uVar3;
}



/* Entry: 109727d74; end: 109727d7b;  */

undefined1 FUN_109727d74(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



/* Entry: 109727d7c; end: 109727fc3;  */

void FUN_109727d7c(float param_1,byte *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  bVar3 = *param_2;
  bVar4 = param_2[1];
  bVar5 = param_2[2];
  bVar6 = param_2[3];
  fVar24 = param_1;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  bVar7 = param_2[4];
  bVar8 = param_2[5];
  bVar9 = param_2[6];
  bVar10 = param_2[7];
  fVar25 = fVar24;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,2);
  bVar11 = param_2[8];
  bVar12 = param_2[9];
  bVar13 = param_2[10];
  bVar14 = param_2[0xb];
  fVar26 = fVar25;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,3);
  bVar15 = param_2[0xc];
  bVar16 = param_2[0xd];
  bVar17 = param_2[0xe];
  bVar18 = param_2[0xf];
  fVar27 = fVar26;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,4);
  bVar19 = param_2[0x10];
  bVar20 = param_2[0x11];
  bVar21 = param_2[0x12];
  bVar22 = param_2[0x13];
  fVar28 = fVar27;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,5);
  if (*(undefined8 **)(lVar1 + 0x80) == (undefined8 *)0x0) {
    uVar23 = 0;
  }
  else {
    uVar23 = **(undefined8 **)(lVar1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x000109727fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))
            ((param_1 +
             (float)(int)((uint)bVar3 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6
                         )) * 1.5258789e-05,
             (fVar24 + (float)(int)((uint)bVar7 << 0x18 | (uint)bVar8 << 0x10 | (uint)bVar9 << 8 |
                                   (uint)bVar10)) * 1.5258789e-05,
             (fVar25 + (float)(int)((uint)bVar11 << 0x18 | (uint)bVar12 << 0x10 | (uint)bVar13 << 8
                                   | (uint)bVar14)) * 1.5258789e-05,
             (fVar26 + (float)(int)((uint)bVar15 << 0x18 | (uint)bVar16 << 0x10 | (uint)bVar17 << 8
                                   | (uint)bVar18)) * 1.5258789e-05,
             (fVar27 + (float)(int)((uint)bVar19 << 0x18 | (uint)bVar20 << 0x10 | (uint)bVar21 << 8
                                   | (uint)bVar22)) * 1.5258789e-05,
             (fVar28 + (float)(int)((uint)param_2[0x14] << 0x18 | (uint)param_2[0x15] << 0x10 |
                                    (uint)param_2[0x16] << 8 | (uint)param_2[0x17])) * 1.5258789e-05
             ,lVar1,uVar2,uVar23);
  return;
}



/* Entry: 109727fc4; end: 109728287;  */

void FUN_109727fc4(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar3 = *(ushort *)(param_2 + 4);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  fVar7 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
  uVar3 = *(ushort *)(param_2 + 6);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  bVar5 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8) != 0.0;
  if (bVar5 || fVar7 != 0.0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(undefined8 **)(lVar2 + 0x80) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined8 **)(lVar2 + 0x80);
    }
    (**(code **)(lVar2 + 0x10))
              (0x3f800000,0,0,0x3f800000,fVar7,lVar2,*(undefined8 *)(param_3 + 0x18),uVar6);
  }
  uVar4 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar4);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (bVar5 || fVar7 != 0.0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000109728118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar6);
    return;
  }
  return;
}



/* Entry: 109728288; end: 109728527;  */

void FUN_109728288(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                         *(ushort *)(param_2 + 4) << 8);
  fVar9 = param_1 * 6.1035156e-05;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                         *(ushort *)(param_2 + 6) << 8);
  fVar11 = param_1 * 6.1035156e-05;
  uVar2 = *(ushort *)(param_2 + 8);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,2);
  fVar10 = param_1 + (float)(int)(short)(uVar2 >> 8 | uVar2 << 8);
  uVar2 = *(ushort *)(param_2 + 10);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,3);
  param_1 = param_1 + (float)(int)(short)(uVar2 >> 8 | uVar2 << 8);
  lVar6 = *(long *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  bVar4 = fVar10 != 0.0;
  bVar5 = param_1 != 0.0;
  if (bVar5 || bVar4) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(0x3f800000,0,0,0x3f800000,fVar10,param_1,lVar6,uVar8,uVar7);
    lVar6 = *(long *)(param_3 + 0x10);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
  }
  if (fVar11 != 1.0 || fVar9 != 1.0) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(fVar9,0,0,fVar11,0,0,lVar6,uVar8,uVar7);
    lVar6 = *(long *)(param_3 + 0x10);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
  }
  if (bVar5 || bVar4) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(0x3f800000,0,0,0x3f800000,-fVar10,-param_1,lVar6,uVar8,uVar7);
  }
  uVar3 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar3);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (bVar5 || bVar4) {
    lVar6 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar6 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
    }
    (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
  }
  if (fVar11 != 1.0 || fVar9 != 1.0) {
    lVar6 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar6 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
    }
    (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
    if (!bVar5 && !bVar4) {
      return;
    }
  }
  else if (!bVar5 && !bVar4) {
    return;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  if (*(long *)(lVar6 + 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001097284dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
  return;
}



/* Entry: 109728528; end: 109728657;  */

void FUN_109728528(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  fVar5 = (param_1 +
          (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 | *(ushort *)(param_2 + 4) << 8)) *
          6.1035156e-05;
  if (fVar5 != 1.0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(undefined8 **)(lVar2 + 0x80) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(lVar2 + 0x80);
    }
    (**(code **)(lVar2 + 0x10))(fVar5,0,0,fVar5,0,0,lVar2,*(undefined8 *)(param_3 + 0x18),uVar4);
  }
  uVar3 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar3);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (fVar5 != 1.0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000109728654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar4);
    return;
  }
  return;
}



/* Entry: 109728658; end: 1097288bf;  */

void FUN_109728658(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                         *(ushort *)(param_2 + 4) << 8);
  fVar9 = param_1 * 6.1035156e-05;
  uVar2 = *(ushort *)(param_2 + 6);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  fVar10 = param_1 + (float)(int)(short)(uVar2 >> 8 | uVar2 << 8);
  uVar2 = *(ushort *)(param_2 + 8);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,2);
  param_1 = param_1 + (float)(int)(short)(uVar2 >> 8 | uVar2 << 8);
  lVar6 = *(long *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  bVar4 = fVar10 != 0.0;
  bVar5 = param_1 != 0.0;
  if (bVar5 || bVar4) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(0x3f800000,0,0,0x3f800000,fVar10,param_1,lVar6,uVar8,uVar7);
    lVar6 = *(long *)(param_3 + 0x10);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
  }
  if (fVar9 != 1.0) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(fVar9,0,0,fVar9,0,0,lVar6,uVar8,uVar7);
    lVar6 = *(long *)(param_3 + 0x10);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
  }
  if (bVar5 || bVar4) {
    if (*(undefined8 **)(lVar6 + 0x80) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(lVar6 + 0x80);
    }
    (**(code **)(lVar6 + 0x10))(0x3f800000,0,0,0x3f800000,-fVar10,-param_1,lVar6,uVar8,uVar7);
  }
  uVar3 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar3);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (bVar5 || bVar4) {
    lVar6 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar6 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
    }
    (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
  }
  if (fVar9 != 1.0) {
    lVar6 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar6 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
    }
    (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
  }
  if (bVar5 || bVar4) {
    lVar6 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar6 + 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001097288bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(lVar6,*(undefined8 *)(param_3 + 0x18),uVar8);
    return;
  }
  return;
}



/* Entry: 1097288c0; end: 1097289af;  */

void FUN_1097288c0(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_10971545c((param_1 +
                (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 | *(ushort *)(param_2 + 4) << 8))
                * 6.1035156e-05,uVar4,*(undefined8 *)(param_3 + 0x18));
  uVar3 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar3);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if ((int)uVar4 != 0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001097289ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar4);
    return;
  }
  return;
}



/* Entry: 1097289b0; end: 109728be3;  */

void FUN_1097289b0(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                         *(ushort *)(param_2 + 4) << 8);
  fVar10 = param_1 * 6.1035156e-05;
  uVar3 = *(ushort *)(param_2 + 6);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  fVar11 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
  uVar3 = *(ushort *)(param_2 + 8);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,2);
  param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
  lVar7 = *(long *)(param_3 + 0x10);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  bVar5 = fVar11 != 0.0;
  bVar6 = param_1 != 0.0;
  if (bVar6 || bVar5) {
    if (*(undefined8 **)(lVar7 + 0x80) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = **(undefined8 **)(lVar7 + 0x80);
    }
    (**(code **)(lVar7 + 0x10))(0x3f800000,0,0,0x3f800000,fVar11,param_1,lVar7,uVar9,uVar8);
    lVar7 = *(long *)(param_3 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 0x18);
  }
  FUN_10971545c(fVar10,lVar7,uVar9);
  if (bVar6 || bVar5) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(undefined8 **)(lVar2 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar2 + 0x80);
    }
    (**(code **)(lVar2 + 0x10))
              (0x3f800000,0,0,0x3f800000,-fVar11,-param_1,lVar2,*(undefined8 *)(param_3 + 0x18),
               uVar9);
  }
  uVar4 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar4);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (bVar6 || bVar5) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar9);
  }
  if ((int)lVar7 == 0) {
    if (!bVar6 && !bVar5) {
      return;
    }
  }
  else {
    lVar7 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar7 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x80) + 8);
    }
    (**(code **)(lVar7 + 0x18))(lVar7,*(undefined8 *)(param_3 + 0x18),uVar9);
    if (!bVar6 && !bVar5) {
      return;
    }
  }
  lVar7 = *(long *)(param_3 + 0x10);
  if (*(long *)(lVar7 + 0x80) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000109728b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x18))(lVar7,*(undefined8 *)(param_3 + 0x18),uVar9);
  return;
}



/* Entry: 109728be4; end: 109728d0f;  */

void FUN_109728be4(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                         *(ushort *)(param_2 + 4) << 8);
  fVar5 = param_1 * 6.1035156e-05;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1097154e8(fVar5,(param_1 +
                      (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                         *(ushort *)(param_2 + 6) << 8)) * 6.1035156e-05,uVar4,
                *(undefined8 *)(param_3 + 0x18));
  uVar3 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar3);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if ((int)uVar4 != 0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000109728d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar4);
    return;
  }
  return;
}



/* Entry: 109728d10; end: 109728f6f;  */

void FUN_109728d10(float param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,0);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 4) >> 8 |
                                         *(ushort *)(param_2 + 4) << 8);
  fVar10 = param_1 * 6.1035156e-05;
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,1);
  param_1 = param_1 + (float)(int)(short)(*(ushort *)(param_2 + 6) >> 8 |
                                         *(ushort *)(param_2 + 6) << 8);
  fVar11 = param_1 * 6.1035156e-05;
  uVar3 = *(ushort *)(param_2 + 8);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,2);
  fVar12 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
  uVar3 = *(ushort *)(param_2 + 10);
  FUN_109726704(*(undefined8 *)(param_3 + 0x30),param_4,3);
  param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
  lVar7 = *(long *)(param_3 + 0x10);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  bVar5 = fVar12 != 0.0;
  bVar6 = param_1 != 0.0;
  if (bVar6 || bVar5) {
    if (*(undefined8 **)(lVar7 + 0x80) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = **(undefined8 **)(lVar7 + 0x80);
    }
    (**(code **)(lVar7 + 0x10))(0x3f800000,0,0,0x3f800000,fVar12,param_1,lVar7,uVar9,uVar8);
    lVar7 = *(long *)(param_3 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 0x18);
  }
  FUN_1097154e8(fVar10,fVar11,lVar7,uVar9);
  if (bVar6 || bVar5) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(undefined8 **)(lVar2 + 0x80) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar2 + 0x80);
    }
    (**(code **)(lVar2 + 0x10))
              (0x3f800000,0,0,0x3f800000,-fVar12,-param_1,lVar2,*(undefined8 *)(param_3 + 0x18),
               uVar9);
  }
  uVar4 = (uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
          (uint)*(byte *)(param_2 + 3);
  puVar1 = &UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar4);
  }
  if ((0 < *(int *)(param_3 + 0x98)) && (0 < *(int *)(param_3 + 0x9c))) {
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + -1;
    *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + -1;
    FUN_109726774(puVar1,param_3);
    *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
  }
  if (bVar6 || bVar5) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar2 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 8);
    }
    (**(code **)(lVar2 + 0x18))(lVar2,*(undefined8 *)(param_3 + 0x18),uVar9);
  }
  if ((int)lVar7 == 0) {
    if (!bVar6 && !bVar5) {
      return;
    }
  }
  else {
    lVar7 = *(long *)(param_3 + 0x10);
    if (*(long *)(lVar7 + 0x80) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x80) + 8);
    }
    (**(code **)(lVar7 + 0x18))(lVar7,*(undefined8 *)(param_3 + 0x18),uVar9);
    if (!bVar6 && !bVar5) {
      return;
    }
  }
  lVar7 = *(long *)(param_3 + 0x10);
  if (*(long *)(lVar7 + 0x80) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000109728f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x18))(lVar7,*(undefined8 *)(param_3 + 0x18),uVar9);
  return;
}



/* Entry: 109728f70; end: 10972914f;  */

/* WARNING: Removing unreachable block (ram,0x0001097290f4) */
/* WARNING: Removing unreachable block (ram,0x000109729060) */
/* WARNING: Removing unreachable block (ram,0x000109729068) */
/* WARNING: Removing unreachable block (ram,0x000109729070) */
/* WARNING: Removing unreachable block (ram,0x0001097290fc) */
/* WARNING: Removing unreachable block (ram,0x000109729104) */
/* WARNING: Removing unreachable block (ram,0x000109729098) */
/* WARNING: Removing unreachable block (ram,0x00010972912c) */
/* WARNING: Removing unreachable block (ram,0x0001097290ec) */

void FUN_109728f70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10dfe4888;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar2 = (undefined *)*param_1;
  }
  puVar1 = &UNK_10dfe4888;
  if (7 < *(uint *)(puVar2 + 0x18)) {
    puVar1 = *(undefined **)(puVar2 + 0x10);
  }
  func_0x0001097165d4();
  puVar2 = puVar1;
  func_0x000109716704();
  if (((puVar2 != (undefined *)0x0) && (puVar1[0x2c] != '\0')) && (puVar1[0x2d] != '\0')) {
    func_0x000109716790();
  }
  return;
}



/* Entry: 109729150; end: 109729307;  */

/* WARNING: Removing unreachable block (ram,0x0001097292a0) */
/* WARNING: Removing unreachable block (ram,0x0001097292f8) */
/* WARNING: Removing unreachable block (ram,0x0001097292ac) */
/* WARNING: Removing unreachable block (ram,0x0001097292bc) */

undefined1
FUN_109729150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             int param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar1 = "";
  pcVar2 = pcVar1;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar2 = (char *)*param_1;
  }
  pcVar3 = pcVar1;
  if (7 < *(uint *)(pcVar2 + 0x18)) {
    pcVar3 = *(char **)(pcVar2 + 0x10);
  }
  if (pcVar3[1] != '\0' || *pcVar3 != '\0') {
    FUN_109716310();
    FUN_109716490();
    if (0x1c < *(uint *)(param_1 + 3)) {
      pcVar1 = (char *)param_1[2];
    }
    if ((pcVar1[0x15] == '\0' && pcVar1[0x14] == '\0') &&
       (pcVar1[0x11] == '\0' && pcVar1[0x10] == '\0')) {
      *param_4 = 0;
      uVar4 = (*(uint *)(pcVar1 + 0x14) & 0xff00ff00) >> 8 |
              (*(uint *)(pcVar1 + 0x14) & 0xff00ff) << 8;
      param_4[1] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(pcVar1 + 0x10) & 0xff00ff00) >> 8 |
              (*(uint *)(pcVar1 + 0x10) & 0xff00ff) << 8;
      param_4[2] = uVar4 >> 0x10 | uVar4 << 0x10;
      param_4[3] = (uint)(byte)pcVar1[0x14] * -0x1000000 -
                   ((uint)(byte)pcVar1[0x15] << 0x10 | (uint)(byte)pcVar1[0x16] << 8 |
                   (uint)(byte)pcVar1[0x17]);
      if (param_5 != 0) {
        FUN_1096feabc(param_2,param_4);
      }
    }
    FUN_1096f5a5c(param_1);
  }
  return 0;
}



/* Entry: 109729308; end: 10972957f;  */

undefined1  [16] FUN_109729308(long param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(int *)(param_1 + 8) == 0x20000) {
    uVar3 = **(ushort **)(param_1 + 0x10);
    if (param_2 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
      uVar3 = (*(ushort **)(param_1 + 0x10))[(ulong)param_2 + 1];
      uVar4 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      if (uVar4 < 0x102) {
        uVar2 = *(uint *)(&UNK_10dfe55a4 + (ulong)uVar4 * 4);
        iVar5 = *(int *)(&UNK_10dfe55a4 + (ulong)(uVar4 + 1) * 4);
        goto LAB_109729398;
      }
      if (uVar4 - 0x102 < *(uint *)(param_1 + 0x1c)) {
        puVar1 = (undefined1 *)
                 (*(long *)(param_1 + 0x28) +
                 (ulong)*(uint *)(*(long *)(param_1 + 0x20) + (ulong)(uVar4 - 0x102) * 4));
        auVar7._0_8_ = puVar1 + 1;
        auVar7[8] = *puVar1;
        auVar7._9_7_ = 0;
        return auVar7;
      }
    }
  }
  else if ((*(int *)(param_1 + 8) == 0x10000) && (param_2 < 0x102)) {
    uVar2 = *(uint *)(&UNK_10dfe55a4 + (ulong)param_2 * 4);
    iVar5 = *(int *)(&UNK_10dfe55a4 + (ulong)(param_2 + 1) * 4);
LAB_109729398:
    auVar6._0_8_ = &UNK_10dfe4e68 + uVar2;
    auVar6._8_4_ = iVar5 + ~uVar2;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  return ZEXT816(0);
}



/* Entry: 109729580; end: 1097295f3;  */

ulong FUN_109729580(uint param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  
  param_2 = param_2 & 0xffff;
  FUN_109729308(param_3);
  param_1 = param_1 & 0xffff;
  FUN_109729308(param_3);
  uVar1 = (ulong)(param_1 - param_2);
  if (param_1 - param_2 == 0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcmp_11034c650)();
      return param_3;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1097295f4; end: 109729977;  */

void FUN_1097295f4(ushort *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulong uVar14;
  bool bVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ulong uVar21;
  
  puVar18 = param_1 + param_2;
  puVar13 = param_1;
  if (9 < param_2) {
    do {
      puVar13 = (ushort *)((long)param_1 + (param_2 & 0x7ffffffffffffffe));
      puVar17 = param_1 + 1;
      uVar4 = (uint)*puVar17;
      FUN_109729580(*puVar17,*puVar13,param_3);
      puVar7 = puVar18 + -2;
      puVar19 = puVar17;
      if ((int)uVar4 < 1) {
        puVar19 = puVar13;
      }
      uVar5 = (uint)*puVar19;
      FUN_109729580(*puVar19,*puVar7,param_3);
      if (0 < (int)uVar5) {
        if ((int)uVar4 < 1) {
          puVar13 = puVar17;
        }
        uVar4 = (uint)*puVar13;
        FUN_109729580(*puVar13,*puVar7,param_3);
        puVar19 = puVar13;
        if ((int)uVar4 < 1) {
          puVar19 = puVar7;
        }
      }
      puVar13 = puVar18 + -1;
      if (puVar19 != puVar13) {
        lVar6 = 0;
        puVar7 = puVar13;
        bVar3 = true;
        do {
          bVar15 = bVar3;
          uVar1 = *(undefined1 *)((long)puVar19 + lVar6);
          *(char *)((long)puVar19 + lVar6) = (char)*puVar7;
          *(undefined1 *)puVar7 = uVar1;
          lVar6 = 1;
          puVar7 = (ushort *)((long)puVar7 + 1);
          bVar3 = false;
        } while (bVar15);
      }
      puVar17 = puVar13;
      puVar20 = puVar13;
      puVar19 = param_1;
      puVar7 = param_1;
      if (param_1 < puVar13) {
        do {
          uVar4 = (uint)*puVar7;
          FUN_109729580(*puVar7,*puVar13,param_3);
          if ((int)uVar4 < 1) {
            if (uVar4 == 0) {
              if (puVar19 < puVar7) {
                lVar6 = 0;
                puVar8 = puVar7;
                bVar3 = true;
                do {
                  bVar15 = bVar3;
                  uVar1 = *(undefined1 *)((long)puVar19 + lVar6);
                  *(char *)((long)puVar19 + lVar6) = (char)*puVar8;
                  *(undefined1 *)puVar8 = uVar1;
                  lVar6 = 1;
                  puVar8 = (ushort *)((long)puVar8 + 1);
                  bVar3 = false;
                } while (bVar15);
              }
              puVar19 = puVar19 + 1;
            }
          }
          else {
            do {
              while( true ) {
                puVar8 = puVar17;
                if (puVar8 <= puVar7) goto LAB_1097297a8;
                puVar17 = puVar8 + -1;
                uVar4 = (uint)*puVar17;
                FUN_109729580(*puVar17,*puVar13,param_3);
                if (uVar4 != 0) break;
                puVar16 = puVar20 + -1;
                bVar3 = puVar8 < puVar20;
                puVar11 = puVar17;
                puVar20 = puVar16;
                if (bVar3) {
                  do {
                    uVar2 = *puVar11;
                    puVar12 = (ushort *)((long)puVar11 + 1);
                    *(char *)puVar11 = (char)*puVar16;
                    *(char *)puVar16 = (char)uVar2;
                    puVar11 = puVar12;
                    puVar16 = (ushort *)((long)puVar16 + 1);
                  } while (puVar12 < puVar8);
                }
              }
            } while (-1 < (int)uVar4);
            if (puVar7 < puVar17) {
              lVar10 = 0;
              lVar6 = -2;
              bVar3 = true;
              do {
                bVar15 = bVar3;
                uVar1 = *(undefined1 *)((long)puVar7 + lVar10);
                *(undefined1 *)((long)puVar7 + lVar10) = *(undefined1 *)((long)puVar8 + lVar6);
                *(undefined1 *)((long)puVar8 + lVar6) = uVar1;
                lVar6 = lVar6 + 1;
                lVar10 = 1;
                bVar3 = false;
              } while (bVar15);
            }
          }
          puVar7 = puVar7 + 1;
          puVar8 = puVar17;
LAB_1097297a8:
          puVar17 = puVar8;
        } while (puVar7 < puVar8);
        uVar9 = (long)puVar8 - (long)puVar19;
        uVar21 = (long)puVar19 - (long)param_1;
        if ((uVar21 != 0) && (puVar8 != puVar19)) {
          if (uVar9 < uVar21) {
            if (0 < (long)uVar9) {
              puVar13 = param_1;
              do {
                uVar2 = *puVar13;
                *(undefined1 *)puVar13 = *(undefined1 *)((long)puVar13 + uVar21);
                *(char *)((long)puVar13 + uVar21) = (char)uVar2;
                puVar13 = (ushort *)((long)puVar13 + 1);
              } while (puVar13 < (ushort *)((long)param_1 + uVar9));
            }
          }
          else {
            puVar13 = param_1;
            if (0 < (long)uVar21) {
              do {
                uVar2 = *puVar13;
                *(undefined1 *)puVar13 = *(undefined1 *)((long)puVar13 + uVar9);
                *(char *)((long)puVar13 + uVar9) = (char)uVar2;
                puVar13 = (ushort *)((long)puVar13 + 1);
              } while (puVar13 < puVar19);
            }
          }
        }
        uVar21 = (long)puVar20 - (long)puVar8;
        if ((uVar21 != 0) && (puVar18 != puVar20)) {
          uVar14 = (long)puVar18 - (long)puVar20;
          if (uVar14 < uVar21) {
            if (0 < (long)uVar14) {
              puVar13 = (ushort *)((long)puVar8 + uVar14);
              do {
                uVar2 = *puVar8;
                *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 + uVar21);
                *(char *)((long)puVar8 + uVar21) = (char)uVar2;
                puVar8 = (ushort *)((long)puVar8 + 1);
              } while (puVar8 < puVar13);
            }
          }
          else if (0 < (long)uVar21) {
            do {
              uVar2 = *puVar8;
              *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 + uVar14);
              *(char *)((long)puVar8 + uVar14) = (char)uVar2;
              puVar8 = (ushort *)((long)puVar8 + 1);
            } while (puVar8 < puVar20);
          }
        }
      }
      else {
        uVar21 = 0;
        uVar9 = (long)puVar13 - (long)param_1;
      }
      FUN_1097295f4(param_1,uVar9 >> 1,param_3);
      param_1 = (ushort *)((long)puVar18 - uVar21);
      param_2 = uVar21 >> 1;
      puVar18 = (ushort *)((long)param_1 + (uVar21 & 0xfffffffffffffffe));
      puVar13 = param_1;
    } while (0x13 < uVar21);
  }
  do {
    do {
      param_1 = param_1 + 1;
      if (puVar18 <= param_1) {
        return;
      }
      puVar19 = param_1;
    } while (param_1 <= puVar13);
    do {
      puVar7 = puVar19 + -1;
      uVar4 = (uint)*puVar7;
      FUN_109729580(*puVar7,*puVar19,param_3);
      if ((int)uVar4 < 1) break;
      lVar6 = 0;
      lVar10 = 0;
      bVar3 = true;
      do {
        bVar15 = bVar3;
        uVar1 = *(undefined1 *)((long)puVar7 + lVar10);
        *(undefined1 *)((long)puVar7 + lVar10) = *(undefined1 *)((long)puVar19 + lVar6);
        *(undefined1 *)((long)puVar19 + lVar6) = uVar1;
        lVar6 = lVar6 + 1;
        lVar10 = 1;
        bVar3 = false;
      } while (bVar15);
      puVar19 = puVar7;
    } while (puVar13 < puVar7);
  } while( true );
}



/* Entry: 109729978; end: 109729a4b;  */

void FUN_109729978(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  if ((int)uVar2 <= (int)uVar4) {
    if ((int)uVar2 < 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = 0;
      return;
    }
    uVar5 = uVar2;
    if (uVar2 < uVar4 + 1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar4 + 1);
      if (0xaaaaaaa < uVar5) {
LAB_109729a30:
        *param_1 = ~uVar2;
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
        return;
      }
      lVar1 = *(long *)(param_1 + 2);
      FUN_109729a88(lVar1,uVar5);
      if (lVar1 == 0) {
        uVar2 = *param_1;
        if (uVar2 < uVar5) goto LAB_109729a30;
      }
      else {
        *(long *)(param_1 + 2) = lVar1;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x18);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar3[2] = param_2[2];
  puVar3[1] = uVar7;
  *puVar3 = uVar6;
  return;
}



/* Entry: 109729a4c; end: 109729a87;  */

int FUN_109729a4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)(param_2 + 1);
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  uVar5 = *param_1;
  _strncmp(uVar5,*param_2,uVar1);
  iVar2 = uVar3 - uVar4;
  if ((int)uVar5 != 0) {
    iVar2 = (int)uVar5;
  }
  return iVar2;
}



/* Entry: 109729a88; end: 109729b2b;  */

undefined8 FUN_109729a88(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0x18);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109729b2c; end: 109729b83;  */

ushort * FUN_109729b2c(ushort *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uStack_24;
  
  puVar2 = param_1 + 1;
  puVar1 = puVar2;
  FUN_109729b84(puVar2,*param_1 >> 8 | *param_1 << 8,param_2,&uStack_24);
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = (ushort *)&UNK_10dfe4b12;
  }
  else {
    puVar2 = puVar2 + (ulong)uStack_24 * 3;
  }
  return puVar2;
}



/* Entry: 109729b84; end: 109729c73;  */

undefined8 FUN_109729b84(long param_1,int param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  iVar5 = param_2 + -1;
  if (param_2 < 1) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar4 = iVar5 + uVar3 >> 1;
      puVar6 = (ushort *)(param_1 + (ulong)uVar4 * 6);
      uVar1 = *puVar6;
      if (param_3 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
        iVar5 = uVar4 - 1;
      }
      else {
        uVar1 = puVar6[1];
        if (param_3 <= ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
          uVar2 = 1;
          goto LAB_109729bf0;
        }
        uVar3 = uVar4 + 1;
      }
    } while ((int)uVar3 <= iVar5);
    uVar2 = 0;
    uVar4 = uVar3;
  }
LAB_109729bf0:
  *param_4 = uVar4;
  return uVar2;
}



/* Entry: 109729c74; end: 109729cc7;  */

int FUN_109729c74(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(param_1 + 2);
  FUN_109729b2c();
  uVar1 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
  if (((uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8) < uVar1) {
    iVar2 = -1;
  }
  else {
    iVar2 = (param_2 - uVar1) + ((uint)(puVar3[2] >> 8) | (puVar3[2] & 0xff00ff) << 8);
  }
  return iVar2;
}



/* Entry: 109729cc8; end: 109729dbf;  */

ushort FUN_109729cc8(ushort *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5
                    ,uint param_6,uint *param_7,int *param_8)

{
  long lVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int iStack_68;
  int iStack_64;
  
  uVar14 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  puVar9 = &UNK_10dfe4888;
  if (uVar14 != 0) {
    puVar9 = (undefined *)((long)param_1 + (ulong)uVar14);
  }
  func_0x000109729bf8(puVar9,param_4);
  if ((uint)puVar9 == 0xffffffff) {
    if (param_7 != (uint *)0x0) {
      *param_7 = 0;
    }
    return 0;
  }
  puVar11 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar9 < ((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8)) {
    puVar11 = param_1 + ((ulong)puVar9 & 0xffffffff) + 2;
  }
  uVar14 = (uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8;
  puVar11 = (ushort *)&UNK_10dfe4888;
  if (uVar14 != 0) {
    puVar11 = (ushort *)((long)param_1 + (ulong)uVar14);
  }
  if (param_7 != (uint *)0x0) {
    uVar5 = (uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8;
    uVar14 = 0;
    if (param_6 <= uVar5) {
      uVar14 = uVar5 - param_6;
    }
    if (*param_7 <= uVar14) {
      uVar14 = *param_7;
    }
    *param_7 = uVar14;
    if (uVar14 != 0) {
      puVar15 = puVar11 + param_6;
      uVar5 = param_3 & 0xfffffffe;
      lVar1 = 0x58;
      if (uVar5 != 4) {
        lVar1 = 0x60;
      }
      iVar16 = -uVar14;
      do {
        puVar15 = puVar15 + 1;
        uVar6 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
        puVar2 = (ushort *)&UNK_10dfe4888;
        if (uVar6 != 0) {
          puVar2 = (ushort *)((long)puVar11 + (ulong)uVar6);
        }
        uVar4 = *puVar2 >> 8 | *puVar2 << 8;
        if (uVar4 == 3) {
          uVar12 = (long)(short)((ushort)(byte)puVar2[1] << 8) | (ulong)*(byte *)((long)puVar2 + 3);
          uVar6 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
          puVar10 = (ushort *)&UNK_10dfe4888;
          if (uVar6 != 0) {
            puVar10 = (ushort *)((long)puVar2 + (ulong)uVar6);
          }
          if (uVar5 == 4) {
            iVar13 = (int)(*(long *)(param_2 + 0x58) * uVar12 + 0x8000 >> 0x10);
            FUN_109729fb8(puVar10,param_2,param_5,0);
            iVar8 = (int)puVar10;
          }
          else {
            iVar13 = (int)(*(long *)(param_2 + 0x60) * uVar12 + 0x8000 >> 0x10);
            func_0x00010972a058(puVar10,param_2,param_5,0);
            iVar8 = (int)puVar10;
          }
          iVar8 = iVar8 + iVar13;
        }
        else if (uVar4 == 2) {
          func_0x0001096fb4c8(param_2,(int)param_4,puVar2[1] >> 8 | puVar2[1] << 8,param_3,
                              &iStack_64,&iStack_68);
          piVar3 = &iStack_64;
          if (uVar5 != 4) {
            piVar3 = &iStack_68;
          }
          iVar8 = *piVar3;
        }
        else if (uVar4 == 1) {
          iVar8 = (int)(*(long *)(param_2 + lVar1) *
                        ((long)(short)((ushort)(byte)puVar2[1] << 8) |
                        (ulong)*(byte *)((long)puVar2 + 3)) + 0x8000 >> 0x10);
        }
        else {
          iVar8 = 0;
        }
        if (uVar14 != 0) {
          *param_8 = iVar8;
          uVar14 = uVar14 - 1;
          param_8 = param_8 + 1;
          iVar8 = iRam000000011382ab30;
        }
        iRam000000011382ab30 = iVar8;
        bVar7 = iVar16 != -1;
        iVar16 = iVar16 + 1;
      } while (bVar7);
    }
  }
  return *puVar11 >> 8 | *puVar11 << 8;
}



/* Entry: 109729dc0; end: 109729fb7;  */

ushort FUN_109729dc0(ushort *param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5
                    ,uint param_6,uint *param_7,int *param_8)

{
  long lVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ushort *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  int iStack_68;
  int iStack_64;
  
  if (param_7 != (uint *)0x0) {
    uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
    uVar12 = 0;
    if (param_6 <= uVar5) {
      uVar12 = uVar5 - param_6;
    }
    if (*param_7 <= uVar12) {
      uVar12 = *param_7;
    }
    *param_7 = uVar12;
    if (uVar12 != 0) {
      puVar13 = param_1 + param_6;
      uVar5 = param_3 & 0xfffffffe;
      lVar1 = 0x58;
      if (uVar5 != 4) {
        lVar1 = 0x60;
      }
      iVar14 = -uVar12;
      do {
        puVar13 = puVar13 + 1;
        uVar6 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
        puVar2 = (ushort *)&UNK_10dfe4888;
        if (uVar6 != 0) {
          puVar2 = (ushort *)((long)param_1 + (ulong)uVar6);
        }
        uVar4 = *puVar2 >> 8 | *puVar2 << 8;
        if (uVar4 == 3) {
          uVar10 = (long)(short)((ushort)(byte)puVar2[1] << 8) | (ulong)*(byte *)((long)puVar2 + 3);
          uVar6 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
          puVar9 = (ushort *)&UNK_10dfe4888;
          if (uVar6 != 0) {
            puVar9 = (ushort *)((long)puVar2 + (ulong)uVar6);
          }
          if (uVar5 == 4) {
            iVar11 = (int)(*(long *)(param_2 + 0x58) * uVar10 + 0x8000 >> 0x10);
            FUN_109729fb8(puVar9,param_2,param_5,0);
            iVar8 = (int)puVar9;
          }
          else {
            iVar11 = (int)(*(long *)(param_2 + 0x60) * uVar10 + 0x8000 >> 0x10);
            func_0x00010972a058(puVar9,param_2,param_5,0);
            iVar8 = (int)puVar9;
          }
          iVar8 = iVar8 + iVar11;
        }
        else if (uVar4 == 2) {
          func_0x0001096fb4c8(param_2,param_4,puVar2[1] >> 8 | puVar2[1] << 8,param_3,&iStack_64,
                              &iStack_68);
          piVar3 = &iStack_64;
          if (uVar5 != 4) {
            piVar3 = &iStack_68;
          }
          iVar8 = *piVar3;
        }
        else if (uVar4 == 1) {
          iVar8 = (int)(*(long *)(param_2 + lVar1) *
                        ((long)(short)((ushort)(byte)puVar2[1] << 8) |
                        (ulong)*(byte *)((long)puVar2 + 3)) + 0x8000 >> 0x10);
        }
        else {
          iVar8 = 0;
        }
        if (uVar12 != 0) {
          *param_8 = iVar8;
          uVar12 = uVar12 - 1;
          param_8 = param_8 + 1;
          iVar8 = iRam000000011382ab30;
        }
        iRam000000011382ab30 = iVar8;
        bVar7 = iVar14 != -1;
        iVar14 = iVar14 + 1;
      } while (bVar7);
    }
  }
  return *param_1 >> 8 | *param_1 << 8;
}



/* Entry: 109729fb8; end: 10972a0f7;  */

void FUN_109729fb8(ushort *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
  if (uVar1 - 1 < 3) {
    if (*(int *)(param_2 + 0x68) != 0) {
      FUN_10972a0f8(param_1,*(int *)(param_2 + 0x68));
    }
  }
  else if (uVar1 == 0x8000) {
    FUN_10971ea00(param_3,*param_1 >> 8 | *param_1 << 8,param_1[1] >> 8 | param_1[1] << 8,
                  *(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x78),param_4);
  }
  return;
}



/* Entry: 10972a0f8; end: 10972a263;  */

int FUN_10972a0f8(ushort *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)(param_1[2] >> 8);
  uVar4 = uVar5 | (param_1[2] & 0xff00ff) << 8;
  if (0xfffffffc < uVar4 - 4) {
    uVar2 = *param_1;
    if ((((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) <= param_2) &&
       (param_2 <= ((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8))) {
      param_2 = param_2 - ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
      uVar4 = 4 - uVar4;
      uVar3 = 0xffff >> (ulong)((-1 << (ulong)(uVar5 & 0x1f)) + 0x10U & 0x1f);
      uVar4 = ((uint)(param_1[(ulong)(param_2 >> (ulong)(uVar4 & 0x1f)) + 3] >> 8) |
              (param_1[(ulong)(param_2 >> (ulong)(uVar4 & 0x1f)) + 3] & 0xff00ff) << 8) >>
              (ulong)(((-1 << (ulong)(uVar4 & 0x1f) | param_2 ^ 0xffffffff) << (ulong)(uVar5 & 0x1f)
                      ) + 0x10 & 0x1f) & uVar3;
      iVar1 = 0;
      if (uVar3 + 1 >> 1 <= uVar4) {
        iVar1 = uVar3 + 1;
      }
      return uVar4 - iVar1;
    }
  }
  return 0;
}



/* Entry: 10972a264; end: 10972a39b;  */

long FUN_10972a264(long param_1,ulong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = param_2 >> 9 & 0x7fffff;
  uVar9 = *(uint *)(param_1 + 0x14);
  lVar4 = *(long *)(param_1 + 0x18);
  iVar7 = (int)uVar8;
  if ((uVar9 <= *(uint *)(param_1 + 8)) ||
     (piVar1 = (int *)(lVar4 + (ulong)*(uint *)(param_1 + 8) * 8), *piVar1 != iVar7)) {
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar10 = 0;
    iVar6 = uVar9 - 1;
    if (0 < (int)uVar9) {
      do {
        uVar9 = (uint)(iVar6 + (int)uVar10) >> 1;
        uVar11 = (ulong)uVar9;
        iVar3 = *(int *)(lVar4 + uVar11 * 8);
        if (iVar7 < iVar3) {
          iVar6 = uVar9 - 1;
        }
        else {
          if (iVar7 == iVar3) goto LAB_10972a36c;
          uVar10 = (ulong)(uVar9 + 1);
        }
      } while ((int)uVar10 <= iVar6);
    }
    uVar9 = (uint)uVar10;
    if ((param_3 == 0) || (lVar4 = param_1, FUN_10972a39c(param_1,uVar2 + 1,1), (int)lVar4 == 0)) {
      return 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x48);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
    *puVar5 = 0;
    lVar4 = *(long *)(param_1 + 0x18) + uVar10 * 8;
    _memmove(lVar4 + 8,lVar4,(*(int *)(param_1 + 0x14) + ~uVar9) * 8);
    *(ulong *)(*(long *)(param_1 + 0x18) + uVar10 * 8) = uVar8 | (ulong)uVar2 << 0x20;
    lVar4 = *(long *)(param_1 + 0x18);
    uVar11 = uVar10;
LAB_10972a36c:
    *(uint *)(param_1 + 8) = uVar9;
    piVar1 = (int *)(lVar4 + uVar11 * 8);
  }
  return *(long *)(param_1 + 0x28) + (ulong)(uint)piVar1[1] * 0x48;
}



/* Entry: 10972a39c; end: 10972a51f;  */

undefined8 FUN_10972a39c(char *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 != '\x01') {
    return 0;
  }
  bVar1 = (int)param_2 == 1 && *(int *)(param_1 + 0x24) == 0;
  iVar2 = (int)param_1 + 0x20;
  func_0x00010972a438();
  if (iVar2 != 0) {
    pcVar3 = param_1 + 0x10;
    func_0x00010972a4b0(pcVar3,param_2,param_3,bVar1);
    if (((ulong)pcVar3 & 1) != 0) {
      return 1;
    }
  }
  func_0x00010972a438(param_1 + 0x20,*(undefined4 *)(param_1 + 0x14),param_3,bVar1);
  *param_1 = '\0';
  return 0;
}


