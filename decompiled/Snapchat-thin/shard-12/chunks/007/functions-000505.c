/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10974d8d4; end: 10974d8e3;  */

void FUN_10974d8d4(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  undefined4 *puVar13;
  long lVar14;
  uint *puVar15;
  uint uStack_44;
  
  lVar14 = *(long *)(param_2 + 0xa0);
  uVar7 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar8 = &UNK_10dfe4888;
  if (uVar7 != 0) {
    puVar8 = (undefined *)(param_1 + (ulong)uVar7);
  }
  func_0x000109729bf8(puVar8,*(undefined4 *)
                              (*(long *)(lVar14 + 0x70) + (ulong)*(uint *)(lVar14 + 0x5c) * 0x14));
  if ((int)puVar8 == -1) {
    return;
  }
  puVar15 = (uint *)(param_2 + 8);
  *puVar15 = *(uint *)(lVar14 + 0x5c);
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x134) & 0xfffffff1;
  puVar9 = puVar15;
  FUN_109733d90(puVar15,&uStack_44);
  if (((ulong)puVar9 & 1) == 0) {
    if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar12 = *(int *)(lVar14 + 0x5c);
  }
  else {
    uVar11 = (ulong)*puVar15;
    puVar13 = (undefined4 *)(*(long *)(lVar14 + 0x70) + uVar11 * 0x14);
    if ((*(ushort *)(puVar13 + 3) >> 3 & 1) == 0) {
      if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
        return;
      }
      iVar12 = *(int *)(lVar14 + 0x5c) + 1;
      goto LAB_10974d9bc;
    }
    bVar5 = *(byte *)(*(long *)(lVar14 + 0x70) + (ulong)*(uint *)(lVar14 + 0x5c) * 0x14 + 0xe);
    bVar6 = *(byte *)((long)puVar13 + 0xe);
    bVar1 = bVar5 & 0xf;
    if ((bVar5 & 0x10) != 0) {
      bVar1 = 0;
    }
    bVar2 = bVar6 & 0xf;
    if ((bVar6 & 0x10) != 0) {
      bVar2 = 0;
    }
    if ((bVar6 ^ bVar5) < 0x20) {
      if (0x1f < bVar5 && bVar1 != bVar2) {
LAB_10974dacc:
        if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
          return;
        }
        iVar12 = *(uint *)(lVar14 + 0x5c) + 1;
        goto LAB_10974d9bc;
      }
    }
    else if ((bVar5 < 0x20 || bVar1 != 0) && (bVar6 < 0x20 || bVar2 != 0)) goto LAB_10974dacc;
    uVar7 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puVar10 = &UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar10 = (undefined *)(param_1 + (ulong)uVar7);
    }
    func_0x000109729bf8(puVar10,*puVar13);
    if ((int)puVar10 != -1) {
      uVar7 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
      puVar3 = &UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar3 = (undefined *)(param_1 + (ulong)uVar7);
      }
      uVar7 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar4 = &UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar4 = (undefined *)(param_1 + (ulong)uVar7);
      }
      FUN_10974d464(puVar3,param_2,puVar8,puVar10,puVar4,
                    *(ushort *)(param_1 + 6) >> 8 | *(ushort *)(param_1 + 6) << 8,uVar11);
      return;
    }
    if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar12 = *(int *)(lVar14 + 0x5c);
    uStack_44 = *puVar15;
  }
  uVar11 = (ulong)uStack_44;
  iVar12 = iVar12 + 1;
LAB_10974d9bc:
  FUN_109710ea8(lVar14,2,uVar11,iVar12,0,1);
  return;
}



/* Entry: 10974d8e4; end: 10974dae7;  */

void FUN_10974d8e4(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  undefined4 *puVar13;
  long lVar14;
  uint *puVar15;
  uint uStack_44;
  
  lVar14 = *(long *)(param_2 + 0xa0);
  uVar7 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar8 = &UNK_10dfe4888;
  if (uVar7 != 0) {
    puVar8 = (undefined *)(param_1 + (ulong)uVar7);
  }
  func_0x000109729bf8(puVar8,*(undefined4 *)
                              (*(long *)(lVar14 + 0x70) + (ulong)*(uint *)(lVar14 + 0x5c) * 0x14));
  if ((int)puVar8 == -1) {
    return;
  }
  puVar15 = (uint *)(param_2 + 8);
  *puVar15 = *(uint *)(lVar14 + 0x5c);
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x134) & 0xfffffff1;
  puVar9 = puVar15;
  FUN_109733d90(puVar15,&uStack_44);
  if (((ulong)puVar9 & 1) == 0) {
    if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar12 = *(int *)(lVar14 + 0x5c);
  }
  else {
    uVar11 = (ulong)*puVar15;
    puVar13 = (undefined4 *)(*(long *)(lVar14 + 0x70) + uVar11 * 0x14);
    if ((*(ushort *)(puVar13 + 3) >> 3 & 1) == 0) {
      if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
        return;
      }
      iVar12 = *(int *)(lVar14 + 0x5c) + 1;
      goto LAB_10974d9bc;
    }
    bVar5 = *(byte *)(*(long *)(lVar14 + 0x70) + (ulong)*(uint *)(lVar14 + 0x5c) * 0x14 + 0xe);
    bVar6 = *(byte *)((long)puVar13 + 0xe);
    bVar1 = bVar5 & 0xf;
    if ((bVar5 & 0x10) != 0) {
      bVar1 = 0;
    }
    bVar2 = bVar6 & 0xf;
    if ((bVar6 & 0x10) != 0) {
      bVar2 = 0;
    }
    if ((bVar6 ^ bVar5) < 0x20) {
      if (0x1f < bVar5 && bVar1 != bVar2) {
LAB_10974dacc:
        if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
          return;
        }
        iVar12 = *(uint *)(lVar14 + 0x5c) + 1;
        goto LAB_10974d9bc;
      }
    }
    else if ((bVar5 < 0x20 || bVar1 != 0) && (bVar6 < 0x20 || bVar2 != 0)) goto LAB_10974dacc;
    uVar7 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puVar10 = &UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar10 = (undefined *)(param_1 + (ulong)uVar7);
    }
    func_0x000109729bf8(puVar10,*puVar13);
    if ((int)puVar10 != -1) {
      uVar7 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
      puVar3 = &UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar3 = (undefined *)(param_1 + (ulong)uVar7);
      }
      uVar7 = (uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8;
      puVar4 = &UNK_10dfe4888;
      if (uVar7 != 0) {
        puVar4 = (undefined *)(param_1 + (ulong)uVar7);
      }
      FUN_10974d464(puVar3,param_2,puVar8,puVar10,puVar4,
                    *(ushort *)(param_1 + 6) >> 8 | *(ushort *)(param_1 + 6) << 8,uVar11);
      return;
    }
    if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) {
      return;
    }
    iVar12 = *(int *)(lVar14 + 0x5c);
    uStack_44 = *puVar15;
  }
  uVar11 = (ulong)uStack_44;
  iVar12 = iVar12 + 1;
LAB_10974d9bc:
  FUN_109710ea8(lVar14,2,uVar11,iVar12,0,1);
  return;
}



/* Entry: 10974dae8; end: 10974dc8f;  */

void FUN_10974dae8(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  if (*(uint *)(param_2 + 0x18) == 0xffffffff) {
    iVar2 = 0;
  }
  else {
    lVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x18) * 0x38;
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    (**(code **)(lVar8 + 0x38))(uVar3,param_1,1);
    iVar2 = (int)uVar3;
  }
  lVar8 = *(long *)(param_1 + 0xa0);
  uVar6 = (ulong)*(uint *)(lVar8 + 0x5c);
  if (uVar6 < *(uint *)(lVar8 + 0x60)) {
    do {
      if (*(char *)(lVar8 + 0x58) != '\x01') break;
      puVar9 = (undefined4 *)(*(long *)(lVar8 + 0x70) + uVar6 * 0x14);
      lVar4 = param_2;
      FUN_10972a9e4(param_2,*puVar9);
      if ((((int)lVar4 != 0) && ((*(uint *)(param_1 + 300) & puVar9[1]) != 0)) &&
         (lVar4 = param_1, FUN_109732a58(param_1,puVar9,*(undefined4 *)(param_1 + 0x134)),
         (int)lVar4 != 0)) {
        uVar6 = param_2 + 0x20;
        iVar1 = param_3;
        lVar4 = param_2 + 0x40;
        if (iVar2 == 0) {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar7 = uVar6;
            FUN_10974b720(uVar6,param_1);
            if ((uVar7 & 1) != 0) goto LAB_10974dc2c;
            uVar6 = uVar6 + 0x38;
          }
        }
        else {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            lVar5 = lVar4;
            FUN_10972a9e4(lVar4,*(undefined4 *)
                                 (*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                                 (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c) * 0x14));
            if ((int)lVar5 != 0) {
              uVar6 = *(ulong *)(lVar4 + -0x20);
              (**(code **)(lVar4 + -0x10))(uVar6,param_1);
              if ((uVar6 & 1) != 0) goto LAB_10974dc2c;
            }
            lVar4 = lVar4 + 0x38;
          }
        }
      }
      FUN_109704924(lVar8);
LAB_10974dc2c:
      uVar6 = (ulong)*(uint *)(lVar8 + 0x5c);
    } while (uVar6 < *(uint *)(lVar8 + 0x60));
  }
  if (iVar2 == 0) {
    return;
  }
  param_2 = param_2 + (ulong)*(uint *)(param_2 + 0x18) * 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010974dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x20),param_1,0);
  return;
}



/* Entry: 10974dc90; end: 10974de1f;  */

undefined8 FUN_10974dc90(uint *param_1,uint param_2,int param_3)

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
  if (uVar5 < 0x924924a) {
    lVar1 = *(long *)(param_1 + 2);
    if (uVar5 == 0) {
      _free();
      lVar1 = 0;
    }
    else {
      _realloc(lVar1,uVar4 * 0x1c);
      if (lVar1 == 0) {
        uVar3 = *param_1;
        if (uVar5 <= uVar3) {
          return 1;
        }
        goto LAB_10974dcfc;
      }
    }
    *(long *)(param_1 + 2) = lVar1;
    uVar2 = 1;
  }
  else {
LAB_10974dcfc:
    uVar2 = 0;
    uVar5 = ~uVar3;
  }
  *param_1 = uVar5;
  return uVar2;
}



/* Entry: 10974de20; end: 10974de6b;  */

undefined8 FUN_10974de20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,param_2 << 4);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 10974de6c; end: 10974de83;  */

uint FUN_10974de6c(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10974de84; end: 10974df0f;  */

void FUN_10974de84(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0x16], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10974df10();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974df10; end: 10974e12f;  */

int * FUN_10974df10(int *param_1)

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
    (**(code **)(param_1 + 8))(param_1,0x4d564152,*(undefined8 *)(param_1 + 10));
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
      goto LAB_10974e06c;
    }
    lVar6 = lVar8;
    FUN_10974e130(lVar8,auStack_80);
    if ((int)lVar6 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_10974e048;
    if ((param_1[1] == 0) || (piVar7 = param_1, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_10974e048;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar5 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_10974e048:
      FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_10974e05c:
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_10974e06c:
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
    FUN_10974e130(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(CONCAT44(uStack_4c,uStack_50));
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    if (((uint)(iVar4 == 0) & (uint)lVar8) == 0) goto LAB_10974e05c;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_10974e06c;
}



/* Entry: 10974e130; end: 10974e25b;  */

bool FUN_10974e130(ushort *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return false;
  }
  if (((((ushort)(*param_1 >> 8 | *param_1 << 8) == 1) &&
       (puVar1 = param_1 + 6,
       (ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
      (7 < (ushort)(param_1[3] >> 8 | param_1[3] << 8))) &&
     ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
    uVar2 = (uint)(param_1[5] >> 8) | (param_1[5] & 0xff00ff) << 8;
    if (uVar2 != 0) {
      uVar4 = (long)param_1 + (ulong)uVar2;
      FUN_10971e1dc(uVar4,param_2);
      if ((uVar4 & 1) == 0) {
        if (0x1f < *(uint *)(param_2 + 0x2c)) {
          return false;
        }
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
        if (*(char *)(param_2 + 0x28) != '\x01') {
          return false;
        }
        param_1[5] = 0;
      }
    }
    if (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       (uVar2 = ((uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8) *
                ((uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8),
       uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1))) {
      iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
      *(int *)(param_2 + 0x1c) = iVar3;
      return 0 < iVar3;
    }
  }
  return false;
}



/* Entry: 10974e25c; end: 10974e2e7;  */

void FUN_10974e25c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-4], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10974e2e8();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974e2e8; end: 10974e46b;  */

int * FUN_10974e2e8(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 auStack_60 [2];
  ushort *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  auStack_60[0] = 0;
  lStack_50 = 0;
  puStack_58 = (ushort *)0x0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_24 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x68686561,*(undefined8 *)(param_1 + 10));
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
  uStack_30 = SUB84(param_1,0);
  uStack_2c = (undefined4)((ulong)param_1 >> 0x20);
  puStack_58 = *(ushort **)(param_1 + 4);
  uStack_48._0_4_ = param_1[6];
  uStack_38 = 0;
  lStack_50 = (long)puStack_58 + (ulong)(uint)uStack_48;
  uVar1 = (uint)uStack_48 << 6;
  if (uVar1 < 0x4001) {
    uVar1 = 0x4000;
  }
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  uStack_48._4_4_ = 0x3fffffff;
  if ((uint)uStack_48 >> 0x1a == 0) {
    uStack_48._4_4_ = uVar1;
  }
  uStack_34 = 0;
  auStack_60[0] = 0;
  uStack_40 = uStack_40 & 0xffffffff;
  if (puStack_58 == (ushort *)0x0) {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
  }
  else if (((uint)uStack_48 < 0x24) || ((ushort)(*puStack_58 >> 8 | *puStack_58 << 8) != 1)) {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    FUN_1096f5a5c(param_1);
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    if (param_1[1] != 0) {
      param_1[1] = 0;
    }
  }
  FUN_109710c0c(auStack_60);
  return param_1;
}



/* Entry: 10974e46c; end: 10974e4f7;  */

void FUN_10974e46c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0xb], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10974e4f8();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974e4f8; end: 10974e67b;  */

int * FUN_10974e4f8(int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 auStack_60 [2];
  ushort *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  auStack_60[0] = 0;
  lStack_50 = 0;
  puStack_58 = (ushort *)0x0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_24 = 1;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x76686561,*(undefined8 *)(param_1 + 10));
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
  uStack_30 = SUB84(param_1,0);
  uStack_2c = (undefined4)((ulong)param_1 >> 0x20);
  puStack_58 = *(ushort **)(param_1 + 4);
  uStack_48._0_4_ = param_1[6];
  uStack_38 = 0;
  lStack_50 = (long)puStack_58 + (ulong)(uint)uStack_48;
  uVar1 = (uint)uStack_48 << 6;
  if (uVar1 < 0x4001) {
    uVar1 = 0x4000;
  }
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  uStack_48._4_4_ = 0x3fffffff;
  if ((uint)uStack_48 >> 0x1a == 0) {
    uStack_48._4_4_ = uVar1;
  }
  uStack_34 = 0;
  auStack_60[0] = 0;
  uStack_40 = uStack_40 & 0xffffffff;
  if (puStack_58 == (ushort *)0x0) {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
  }
  else if (((uint)uStack_48 < 0x24) || ((ushort)(*puStack_58 >> 8 | *puStack_58 << 8) != 1)) {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    FUN_1096f5a5c(param_1);
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    FUN_1096f5a5c(param_1);
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_58 = (ushort *)0x0;
    lStack_50 = 0;
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    if (param_1[1] != 0) {
      param_1[1] = 0;
    }
  }
  FUN_109710c0c(auStack_60);
  return param_1;
}



/* Entry: 10974e67c; end: 10974e76b;  */

undefined4 * FUN_10974e67c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0x48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x1132dfdd0;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar3 = PTR_FUN_1132dfdf8;
    puVar2 = PTR_FUN_1132dfdf0;
    puVar1 = PTR_FUN_1132dfde0;
    *(undefined **)(puVar4 + 6) = PTR_FUN_1132dfde8;
    *(undefined **)(puVar4 + 4) = puVar1;
    *(undefined **)(puVar4 + 10) = puVar3;
    *(undefined **)(puVar4 + 8) = puVar2;
    *(undefined **)(puVar4 + 0xc) = PTR_FUN_1132dfe00;
  }
  func_0x0001096f81b8(puVar4,FUN_10974e76c,0,0);
  FUN_1096f8338(puVar4,0x10974e798,0,0);
  FUN_1096f8428(puVar4,FUN_10974e7c8);
  FUN_1096f84f8(puVar4,FUN_10974e828,0,0);
  FUN_1096f85e8(puVar4,FUN_10974e8ac,0,0);
  if (puVar4[1] != 0) {
    puVar4[1] = 0;
  }
  _atexit(0x10974e8b8);
  return puVar4;
}



/* Entry: 10974e76c; end: 10974e7c7;  */

void FUN_10974e76c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_1c = param_1;
  uStack_18 = param_2;
  FUN_10974e900(param_4,&uStack_1c);
  return;
}



/* Entry: 10974e7c8; end: 10974e827;  */

void FUN_10974e7c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 2;
  uStack_3c = param_1;
  uStack_38 = param_2;
  FUN_10974e900(param_6,&uStack_3c);
  uStack_34 = 2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  FUN_10974e900(param_6,&uStack_3c);
  return;
}



/* Entry: 10974e828; end: 10974e8ab;  */

void FUN_10974e828(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 3;
  uStack_4c = param_1;
  uStack_48 = param_2;
  FUN_10974e900(param_8,&uStack_4c);
  uStack_44 = 3;
  uStack_4c = param_3;
  uStack_48 = param_4;
  FUN_10974e900(param_8,&uStack_4c);
  uStack_44 = 3;
  uStack_4c = param_5;
  uStack_48 = param_6;
  FUN_10974e900(param_8,&uStack_4c);
  return;
}



/* Entry: 10974e8ac; end: 10974e8ff;  */

void FUN_10974e8ac(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*piVar1 <= (int)uVar2) {
    FUN_1097115cc(piVar1,uVar2 + 1,0);
    if ((int)piVar1 == 0) {
      uRam000000011382ab30 = 0;
      return;
    }
    uVar2 = *(uint *)(param_2 + 0x14);
  }
  *(uint *)(param_2 + 0x14) = uVar2 + 1;
  *(undefined4 *)(*(long *)(param_2 + 0x18) + (ulong)uVar2 * 4) = *(undefined4 *)(param_2 + 4);
  return;
}



/* Entry: 10974e900; end: 10974e9d3;  */

void FUN_10974e900(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  if ((int)uVar2 <= (int)uVar4) {
    if ((int)uVar2 < 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      return;
    }
    uVar6 = uVar2;
    if (uVar2 < uVar4 + 1) {
      do {
        uVar6 = uVar6 + (uVar6 >> 1) + 8;
      } while (uVar6 < uVar4 + 1);
      if (0x15555555 < uVar6) {
LAB_10974e9b8:
        *param_1 = ~uVar2;
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        return;
      }
      lVar1 = *(long *)(param_1 + 2);
      FUN_10974e9d4(lVar1,uVar6);
      if (lVar1 == 0) {
        uVar2 = *param_1;
        if (uVar2 < uVar6) goto LAB_10974e9b8;
      }
      else {
        *(long *)(param_1 + 2) = lVar1;
        *param_1 = uVar6;
      }
    }
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  return;
}



/* Entry: 10974e9d4; end: 10974e9fb;  */

undefined8 FUN_10974e9d4(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0xc);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 10974e9fc; end: 10974ec33;  */

void FUN_10974e9fc(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = lRam0000000113735dd8;
  do {
    while( true ) {
      while( true ) {
        if (lVar3 != 0) {
          lRam0000000113735dd8 = lVar3;
          return;
        }
        lRam0000000113735dd8 = lVar3;
        func_0x00010974ea84();
        if (lVar3 == 0) break;
        if (lRam0000000113735dd8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x113735dd8,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            lRam0000000113735dd8 = lVar3;
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        bVar2 = lVar3 != 0x1132e01e8;
        lVar3 = lRam0000000113735dd8;
        if (bVar2) {
          FUN_10970d344();
          lVar3 = lRam0000000113735dd8;
        }
      }
      if (lRam0000000113735dd8 == 0) break;
      ClearExclusiveLocal();
      lVar3 = lRam0000000113735dd8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113735dd8,0x10);
    if (bVar2) {
      lRam0000000113735dd8 = 0x1132e01e8;
      cVar1 = ExclusiveMonitorsStatus();
    }
    lVar3 = lRam0000000113735dd8;
  } while (cVar1 != '\0');
  return;
}



/* Entry: 10974ec34; end: 10974ed47;  */

void FUN_10974ec34(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,int *param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = param_8[1];
  if (uVar2 == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
    uVar2 = param_8[1];
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_8 + 2) + (ulong)(uVar2 - 1) * 0x18);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar8 = puVar3[2];
  }
  if (*param_8 <= (int)uVar2) {
    piVar1 = param_8;
    func_0x000109715040(param_8,uVar2 + 1);
    if ((int)piVar1 == 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = 0;
      return;
    }
    uVar2 = param_8[1];
  }
  fVar4 = (float)uVar10;
  fVar5 = (float)((ulong)uVar10 >> 0x20);
  fVar6 = (float)uVar9;
  fVar7 = (float)((ulong)uVar9 >> 0x20);
  param_8[1] = uVar2 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_8 + 2) + (ulong)uVar2 * 0x18);
  puVar3[1] = CONCAT44(param_4 * fVar5 + fVar7 * param_3,param_4 * fVar4 + fVar6 * param_3);
  *puVar3 = CONCAT44(param_2 * fVar5 + fVar7 * param_1,param_2 * fVar4 + fVar6 * param_1);
  puVar3[2] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar5 * param_6 + fVar7 * param_5,
                       (float)uVar8 + fVar4 * param_6 + fVar6 * param_5);
  return;
}



/* Entry: 10974ed48; end: 10974ed5b;  */

void FUN_10974ed48(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  }
  return;
}



/* Entry: 10974ed5c; end: 10974ee57;  */

void FUN_10974ed5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xbf800000bf800000;
  uStack_50 = 0;
  lVar3 = lRam0000000113735de8;
  if (lRam0000000113735de8 == 0) {
    do {
      func_0x00010974f22c();
      if (param_1 == 0) {
        if (lRam0000000113735de8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x113735de8,0x10);
          if (bVar2) {
            lRam0000000113735de8 = 0x1132dfdd0;
            cVar1 = ExclusiveMonitorsStatus();
          }
          lVar3 = 0x1132dfdd0;
          if (cVar1 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
      }
      else {
        if (lRam0000000113735de8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x113735de8,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            lRam0000000113735de8 = param_1;
          }
          lVar3 = param_1;
          if (cVar1 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        if (param_1 != 0x1132dfdd0) {
          FUN_1096f86d8();
        }
      }
      lVar3 = lRam0000000113735de8;
    } while (lRam0000000113735de8 == 0);
  }
  lVar5 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x88);
  }
  (**(code **)(*(long *)(param_4 + 0x90) + 0xa8))
            (param_4,*(undefined8 *)(param_4 + 0x98),param_3,lVar3,&uStack_50,uVar4);
  FUN_10974f050(uStack_50 & 0xffffffff,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,param_2
               );
  return;
}



/* Entry: 10974ee58; end: 10974ee73;  */

int * FUN_10974ee58(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float afStack_4c [4];
  float fStack_3c;
  float afStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_6 + 4) == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar20 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_6 + 8) + (ulong)(*(int *)(param_6 + 4) - 1) * 0x18);
    uVar16 = *puVar9;
    uVar18 = puVar9[1];
    uVar20 = puVar9[2];
  }
  lVar10 = 0;
  afStack_4c[0] = param_1;
  afStack_4c[1] = param_1;
  afStack_38[0] = param_2;
  afStack_38[1] = (float)param_4;
  afStack_4c[2] = (float)param_3;
  afStack_4c[3] = (float)param_3;
  fStack_3c = -1.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  auVar12 = ZEXT816(0);
  fVar22 = -1.0;
  afStack_38[2] = param_2;
  afStack_38[3] = (float)param_4;
  do {
    fVar3 = *(float *)((long)afStack_4c + lVar10);
    fVar15 = *(float *)((long)afStack_38 + lVar10);
    fVar19 = (float)((ulong)uVar18 >> 0x20);
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar11 = auVar12._0_4_;
    auVar12._0_4_ = (float)uVar18 * fVar15 + (float)uVar16 * fVar3 + (float)uVar20;
    fVar21 = (float)((ulong)uVar20 >> 0x20);
    auVar12._4_4_ = fVar19 * fVar15 + fVar17 * fVar3 + fVar21;
    auVar12._8_4_ = (float)uVar18 * fVar15 + (float)uVar16 * fVar3 + (float)uVar20;
    auVar12._12_4_ = fVar19 * fVar15 + fVar17 * fVar3 + fVar21;
    *(float *)((long)afStack_4c + lVar10) = auVar12._0_4_;
    *(float *)((long)afStack_38 + lVar10) = auVar12._4_4_;
    if (fVar11 <= fVar22) {
      auVar4._4_4_ = fVar14;
      auVar4._0_4_ = fVar13;
      auVar4._8_4_ = fVar22;
      auVar4._12_4_ = fStack_3c;
      auVar2._4_2_ = -(ushort)(fVar14 <= auVar12._4_4_);
      auVar2._0_4_ = (int)(short)-(ushort)(fVar13 <= auVar12._0_4_);
      auVar2._6_2_ = (short)-(ushort)(fVar14 <= auVar12._4_4_) >> 0xf;
      auVar2._8_2_ = -(ushort)(auVar12._8_4_ <= fVar22);
      auVar2._10_2_ = (short)-(ushort)(auVar12._8_4_ <= fVar22) >> 0xf;
      auVar2._12_2_ = -(ushort)(auVar12._12_4_ <= fStack_3c);
      auVar2._14_2_ = (short)-(ushort)(auVar12._12_4_ <= fStack_3c) >> 0xf;
      auVar12 = auVar12 ^ (auVar12 ^ auVar4) & auVar2;
    }
    fVar22 = auVar12._8_4_;
    lVar10 = lVar10 + 4;
    fStack_3c = auVar12._12_4_;
    fVar13 = auVar12._0_4_;
    fVar14 = auVar12._4_4_;
  } while (lVar10 != 0x10);
  if ((fVar22 <= fVar13) || (fStack_3c <= fVar14)) {
    afStack_4c[0] = 2.8026e-45;
  }
  else {
    afStack_4c[0] = 1.4013e-45;
  }
  uVar1 = *(uint *)(param_6 + 0x14);
  if (uVar1 == 0) {
    lVar10 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = uRam000000011382ab40 & 0xffffffff00000000;
  }
  else {
    lVar10 = *(long *)(param_6 + 0x18) + (ulong)(uVar1 - 1) * 0x14;
  }
  afStack_4c[1] = fVar13;
  afStack_4c[2] = fVar14;
  afStack_4c[3] = fVar22;
  func_0x00010974f44c(afStack_4c,lVar10);
  piVar8 = (int *)(param_6 + 0x10);
  if (*piVar8 <= (int)uVar1) {
    FUN_109715104(piVar8,uVar1 + 1);
    if ((int)piVar8 == 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = uRam000000011382ab40 & 0xffffffff00000000;
      goto LAB_10974f1b8;
    }
    uVar1 = *(uint *)(param_6 + 0x14);
  }
  *(uint *)(param_6 + 0x14) = uVar1 + 1;
  puVar9 = (undefined8 *)(*(long *)(param_6 + 0x18) + (ulong)uVar1 * 0x14);
  puVar9[1] = CONCAT44(afStack_4c[3],afStack_4c[2]);
  *puVar9 = CONCAT44(afStack_4c[1],afStack_4c[0]);
  *(float *)(puVar9 + 2) = fStack_3c;
LAB_10974f1b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar8;
  }
  ___stack_chk_fail();
  piVar8 = (int *)0x1;
  _calloc(1,0x48);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x1132dfdd0;
  }
  else {
    *piVar8 = 1;
    piVar8[1] = 1;
    piVar8[2] = 0;
    puVar7 = PTR_FUN_1132dfdf8;
    puVar6 = PTR_FUN_1132dfdf0;
    puVar5 = PTR_FUN_1132dfde0;
    piVar8[3] = 0;
    *(undefined **)(piVar8 + 6) = PTR_FUN_1132dfde8;
    *(undefined **)(piVar8 + 4) = puVar5;
    *(undefined **)(piVar8 + 10) = puVar7;
    *(undefined **)(piVar8 + 8) = puVar6;
    *(undefined **)(piVar8 + 0xc) = PTR_FUN_1132dfe00;
  }
  func_0x0001096f81b8(piVar8,FUN_10974f304,0,0);
  FUN_1096f8338(piVar8,0x10974f30c,0,0);
  FUN_1096f8428(piVar8,FUN_10974f314);
  FUN_1096f84f8(piVar8,FUN_10974f354,0,0);
  if (piVar8[1] != 0) {
    piVar8[1] = 0;
  }
  _atexit(0x10974f3b4);
  return piVar8;
}



/* Entry: 10974ee74; end: 10974ef87;  */

void FUN_10974ee74(undefined8 param_1,long param_2)

{
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_24 = 2;
  uStack_18 = 0xbf800000bf800000;
  uStack_20 = 0;
  func_0x000109714fc8(param_2 + 0x20,&uStack_24);
  return;
}



/* Entry: 10974ef88; end: 10974ef8f;  */

void FUN_10974ef88(undefined8 param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    piVar2 = (int *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    piVar2 = (int *)(*(long *)(param_2 + 0x18) + (ulong)(*(int *)(param_2 + 0x14) - 1) * 0x14);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    piVar1 = (int *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    piVar1 = (int *)(*(long *)(param_2 + 0x28) + (ulong)(*(int *)(param_2 + 0x24) - 1) * 0x14);
  }
  if (*piVar2 == 1) {
    if (*piVar1 == 1) {
      fVar3 = (float)piVar1[1];
      if ((float)piVar2[1] < (float)piVar1[1]) {
        fVar3 = (float)piVar2[1];
      }
      piVar1[1] = (int)fVar3;
      fVar3 = (float)piVar1[2];
      if ((float)piVar2[2] < (float)piVar1[2]) {
        fVar3 = (float)piVar2[2];
      }
      piVar1[2] = (int)fVar3;
      fVar3 = (float)piVar1[3];
      if ((float)piVar1[3] < (float)piVar2[3]) {
        fVar3 = (float)piVar2[3];
      }
      piVar1[3] = (int)fVar3;
      fVar3 = (float)piVar1[4];
      if ((float)piVar1[4] < (float)piVar2[4]) {
        fVar3 = (float)piVar2[4];
      }
      piVar1[4] = (int)fVar3;
    }
    else if (*piVar1 == 2) {
      uVar5 = *(undefined8 *)(piVar2 + 2);
      uVar4 = *(undefined8 *)piVar2;
      piVar1[4] = piVar2[4];
      *(undefined8 *)(piVar1 + 2) = uVar5;
      *(undefined8 *)piVar1 = uVar4;
      return;
    }
  }
  else if (*piVar2 == 0) {
    *piVar1 = 0;
    return;
  }
  return;
}



/* Entry: 10974ef90; end: 10974efef;  */

undefined8 FUN_10974ef90(undefined8 param_1,long param_2)

{
  int *in_x6;
  
  FUN_10974f050((float)*in_x6,(float)in_x6[1] + (float)in_x6[3],(float)*in_x6 + (float)in_x6[2],
                param_2);
  func_0x00010974f578(param_2);
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  }
  return 1;
}



/* Entry: 10974eff0; end: 10974f04f;  */

void FUN_10974eff0(undefined8 param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    piVar2 = (int *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    piVar2 = (int *)(*(long *)(param_2 + 0x18) + (ulong)(*(int *)(param_2 + 0x14) - 1) * 0x14);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    piVar1 = (int *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    piVar1 = (int *)(*(long *)(param_2 + 0x28) + (ulong)(*(int *)(param_2 + 0x24) - 1) * 0x14);
  }
  if (*piVar2 == 1) {
    if (*piVar1 == 1) {
      fVar3 = (float)piVar1[1];
      if ((float)piVar2[1] < (float)piVar1[1]) {
        fVar3 = (float)piVar2[1];
      }
      piVar1[1] = (int)fVar3;
      fVar3 = (float)piVar1[2];
      if ((float)piVar2[2] < (float)piVar1[2]) {
        fVar3 = (float)piVar2[2];
      }
      piVar1[2] = (int)fVar3;
      fVar3 = (float)piVar1[3];
      if ((float)piVar1[3] < (float)piVar2[3]) {
        fVar3 = (float)piVar2[3];
      }
      piVar1[3] = (int)fVar3;
      fVar3 = (float)piVar1[4];
      if ((float)piVar1[4] < (float)piVar2[4]) {
        fVar3 = (float)piVar2[4];
      }
      piVar1[4] = (int)fVar3;
    }
    else if (*piVar1 == 2) {
      uVar5 = *(undefined8 *)(piVar2 + 2);
      uVar4 = *(undefined8 *)piVar2;
      piVar1[4] = piVar2[4];
      *(undefined8 *)(piVar1 + 2) = uVar5;
      *(undefined8 *)piVar1 = uVar4;
      return;
    }
  }
  else if (*piVar2 == 0) {
    *piVar1 = 0;
    return;
  }
  return;
}



/* Entry: 10974f050; end: 10974f303;  */

int * FUN_10974f050(float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float afStack_4c [4];
  float fStack_3c;
  float afStack_38 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_5 + 4) == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar20 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_5 + 8) + (ulong)(*(int *)(param_5 + 4) - 1) * 0x18);
    uVar16 = *puVar9;
    uVar18 = puVar9[1];
    uVar20 = puVar9[2];
  }
  lVar10 = 0;
  afStack_4c[0] = param_1;
  afStack_4c[1] = param_1;
  afStack_38[0] = param_2;
  afStack_38[1] = (float)param_4;
  afStack_4c[2] = (float)param_3;
  afStack_4c[3] = (float)param_3;
  fStack_3c = -1.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  auVar12 = ZEXT816(0);
  fVar22 = -1.0;
  afStack_38[2] = param_2;
  afStack_38[3] = (float)param_4;
  do {
    fVar3 = *(float *)((long)afStack_4c + lVar10);
    fVar15 = *(float *)((long)afStack_38 + lVar10);
    fVar19 = (float)((ulong)uVar18 >> 0x20);
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar11 = auVar12._0_4_;
    auVar12._0_4_ = (float)uVar18 * fVar15 + (float)uVar16 * fVar3 + (float)uVar20;
    fVar21 = (float)((ulong)uVar20 >> 0x20);
    auVar12._4_4_ = fVar19 * fVar15 + fVar17 * fVar3 + fVar21;
    auVar12._8_4_ = (float)uVar18 * fVar15 + (float)uVar16 * fVar3 + (float)uVar20;
    auVar12._12_4_ = fVar19 * fVar15 + fVar17 * fVar3 + fVar21;
    *(float *)((long)afStack_4c + lVar10) = auVar12._0_4_;
    *(float *)((long)afStack_38 + lVar10) = auVar12._4_4_;
    if (fVar11 <= fVar22) {
      auVar4._4_4_ = fVar14;
      auVar4._0_4_ = fVar13;
      auVar4._8_4_ = fVar22;
      auVar4._12_4_ = fStack_3c;
      auVar2._4_2_ = -(ushort)(fVar14 <= auVar12._4_4_);
      auVar2._0_4_ = (int)(short)-(ushort)(fVar13 <= auVar12._0_4_);
      auVar2._6_2_ = (short)-(ushort)(fVar14 <= auVar12._4_4_) >> 0xf;
      auVar2._8_2_ = -(ushort)(auVar12._8_4_ <= fVar22);
      auVar2._10_2_ = (short)-(ushort)(auVar12._8_4_ <= fVar22) >> 0xf;
      auVar2._12_2_ = -(ushort)(auVar12._12_4_ <= fStack_3c);
      auVar2._14_2_ = (short)-(ushort)(auVar12._12_4_ <= fStack_3c) >> 0xf;
      auVar12 = auVar12 ^ (auVar12 ^ auVar4) & auVar2;
    }
    fVar22 = auVar12._8_4_;
    lVar10 = lVar10 + 4;
    fStack_3c = auVar12._12_4_;
    fVar13 = auVar12._0_4_;
    fVar14 = auVar12._4_4_;
  } while (lVar10 != 0x10);
  if ((fVar22 <= fVar13) || (fStack_3c <= fVar14)) {
    afStack_4c[0] = 2.8026e-45;
  }
  else {
    afStack_4c[0] = 1.4013e-45;
  }
  uVar1 = *(uint *)(param_5 + 0x14);
  if (uVar1 == 0) {
    lVar10 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = uRam000000011382ab40 & 0xffffffff00000000;
  }
  else {
    lVar10 = *(long *)(param_5 + 0x18) + (ulong)(uVar1 - 1) * 0x14;
  }
  afStack_4c[1] = fVar13;
  afStack_4c[2] = fVar14;
  afStack_4c[3] = fVar22;
  func_0x00010974f44c(afStack_4c,lVar10);
  piVar8 = (int *)(param_5 + 0x10);
  if (*piVar8 <= (int)uVar1) {
    FUN_109715104(piVar8,uVar1 + 1);
    if ((int)piVar8 == 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = uRam000000011382ab40 & 0xffffffff00000000;
      goto LAB_10974f1b8;
    }
    uVar1 = *(uint *)(param_5 + 0x14);
  }
  *(uint *)(param_5 + 0x14) = uVar1 + 1;
  puVar9 = (undefined8 *)(*(long *)(param_5 + 0x18) + (ulong)uVar1 * 0x14);
  puVar9[1] = CONCAT44(afStack_4c[3],afStack_4c[2]);
  *puVar9 = CONCAT44(afStack_4c[1],afStack_4c[0]);
  *(float *)(puVar9 + 2) = fStack_3c;
LAB_10974f1b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar8;
  }
  ___stack_chk_fail();
  piVar8 = (int *)0x1;
  _calloc(1,0x48);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x1132dfdd0;
  }
  else {
    *piVar8 = 1;
    piVar8[1] = 1;
    piVar8[2] = 0;
    puVar7 = PTR_FUN_1132dfdf8;
    puVar6 = PTR_FUN_1132dfdf0;
    puVar5 = PTR_FUN_1132dfde0;
    piVar8[3] = 0;
    *(undefined **)(piVar8 + 6) = PTR_FUN_1132dfde8;
    *(undefined **)(piVar8 + 4) = puVar5;
    *(undefined **)(piVar8 + 10) = puVar7;
    *(undefined **)(piVar8 + 8) = puVar6;
    *(undefined **)(piVar8 + 0xc) = PTR_FUN_1132dfe00;
  }
  func_0x0001096f81b8(piVar8,FUN_10974f304,0,0);
  FUN_1096f8338(piVar8,0x10974f30c,0,0);
  FUN_1096f8428(piVar8,FUN_10974f314);
  FUN_1096f84f8(piVar8,FUN_10974f354,0,0);
  if (piVar8[1] != 0) {
    piVar8[1] = 0;
  }
  _atexit(0x10974f3b4);
  return piVar8;
}



/* Entry: 10974f304; end: 10974f313;  */

void FUN_10974f304(float param_1,float param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_4;
  fVar1 = param_4[2];
  if (fVar2 <= fVar1) {
    if (param_1 < fVar2) {
      fVar2 = param_1;
    }
    fVar3 = param_4[1];
    if (param_2 < param_4[1]) {
      fVar3 = param_2;
    }
    *param_4 = fVar2;
    param_4[1] = fVar3;
    if (fVar1 < param_1) {
      fVar1 = param_1;
    }
    fVar2 = param_4[3];
    if (param_4[3] < param_2) {
      fVar2 = param_2;
    }
    param_4[2] = fVar1;
    param_4[3] = fVar2;
    return;
  }
  param_4[2] = param_1;
  param_4[3] = param_2;
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* Entry: 10974f314; end: 10974f353;  */

/* WARNING: Possible PIC construction at 0x00010974f334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010974f338) */

void FUN_10974f314(float param_1,float param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_4;
  fVar1 = param_4[2];
  if (fVar2 <= fVar1) {
    if (param_1 < fVar2) {
      fVar2 = param_1;
    }
    fVar3 = param_4[1];
    if (param_2 < param_4[1]) {
      fVar3 = param_2;
    }
    *param_4 = fVar2;
    param_4[1] = fVar3;
    if (fVar1 < param_1) {
      fVar1 = param_1;
    }
    fVar2 = param_4[3];
    if (param_4[3] < param_2) {
      fVar2 = param_2;
    }
    param_4[2] = fVar1;
    param_4[3] = fVar2;
    return;
  }
  param_4[2] = param_1;
  param_4[3] = param_2;
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* Entry: 10974f354; end: 10974f3b3;  */

/* WARNING: Possible PIC construction at 0x00010974f380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010974f384) */

void FUN_10974f354(float param_1,float param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_4;
  fVar1 = param_4[2];
  if (fVar2 <= fVar1) {
    if (param_1 < fVar2) {
      fVar2 = param_1;
    }
    fVar3 = param_4[1];
    if (param_2 < param_4[1]) {
      fVar3 = param_2;
    }
    *param_4 = fVar2;
    param_4[1] = fVar3;
    if (fVar1 < param_1) {
      fVar1 = param_1;
    }
    fVar2 = param_4[3];
    if (param_4[3] < param_2) {
      fVar2 = param_2;
    }
    param_4[2] = fVar1;
    param_4[3] = fVar2;
    return;
  }
  param_4[2] = param_1;
  param_4[3] = param_2;
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* Entry: 10974f3b4; end: 10974f5d3;  */

/* WARNING: Removing unreachable block (ram,0x00010974f3dc) */

void FUN_10974f3b4(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  do {
    piVar4 = piRam0000000113735de8;
    if (piRam0000000113735de8 == (int *)0x0) {
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113735de8,0x10);
    if (bVar3) {
      piRam0000000113735de8 = (int *)0x0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (piVar4 == (int *)0x1132dfdd0) {
    return;
  }
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *piVar4 = -0xdead;
      lVar7 = *(long *)(piVar4 + 2);
      if (lVar7 != 0) {
        FUN_109711500(lVar7 + 0x40,lVar7);
        _pthread_mutex_destroy(lVar7);
        _free(lVar7);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      puVar5 = *(undefined8 **)(piVar4 + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        if ((code *)*puVar5 != (code *)0x0) {
          if (*(undefined8 **)(piVar4 + 0xe) == (undefined8 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = **(undefined8 **)(piVar4 + 0xe);
          }
          (*(code *)*puVar5)(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 0x10);
        }
        if ((code *)puVar5[1] != (code *)0x0) {
          if (*(long *)(piVar4 + 0xe) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 0xe) + 8);
          }
          (*(code *)puVar5[1])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 0x10);
        }
        if ((code *)puVar5[2] != (code *)0x0) {
          if (*(long *)(piVar4 + 0xe) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 0xe) + 0x10);
          }
          (*(code *)puVar5[2])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 0x10);
        }
        if ((code *)puVar5[3] != (code *)0x0) {
          if (*(long *)(piVar4 + 0xe) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 0xe) + 0x18);
          }
          (*(code *)puVar5[3])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 0x10);
        }
        if ((code *)puVar5[4] != (code *)0x0) {
          if (*(long *)(piVar4 + 0xe) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 0xe) + 0x20);
          }
          (*(code *)puVar5[4])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 0x10);
        }
      }
      _free(puVar5);
      _free(*(undefined8 *)(piVar4 + 0xe));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10974f5d4; end: 10974f66b;  */

ulong FUN_10974f5d4(ulong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iStack_34;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar3 = param_1;
    FUN_10972c0e0(param_1,param_3);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      *param_2 = -1;
      *param_3 = -1;
    }
    else {
      *param_2 = *param_3;
      FUN_10972c1a0(param_1,param_3);
      *param_3 = *param_3 + -1;
    }
    return (ulong)!bVar1;
  }
  iStack_34 = *param_3;
  uVar3 = param_1;
  FUN_10972c1a0(param_1,&iStack_34);
  if ((uVar3 & 1) == 0) {
    *param_2 = -1;
    *param_3 = -1;
  }
  else {
    *param_2 = iStack_34;
    do {
      *param_3 = iStack_34;
      uVar2 = param_1;
      FUN_10972c1a0(param_1,&iStack_34);
      if ((int)uVar2 == 0) {
        return uVar3;
      }
    } while (iStack_34 == *param_3 + 1);
  }
  return uVar3;
}



/* Entry: 10974f66c; end: 10974f72f;  */

long FUN_10974f66c(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  int *piVar4;
  
  pcVar2 = *(code **)(*(long *)(param_1 + 0x20) + 0x18);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x88));
  }
  FUN_109704cc8(param_1 + 0x28);
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    piVar4 = (int *)(lVar1 + 0x78);
    if (*piVar4 != 0) {
      *(undefined4 *)(lVar1 + 0x7c) = 0;
      _free(*(undefined8 *)(lVar1 + 0x80));
    }
    piVar4[0] = 0;
    piVar4[1] = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    piVar4 = (int *)(lVar1 + 0x58);
    if (*piVar4 != 0) {
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      _free(*(undefined8 *)(lVar1 + 0x60));
    }
    piVar4[0] = 0;
    piVar4[1] = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  piVar4 = (int *)(param_1 + 0x38);
  if (*piVar4 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    _free(*(undefined8 *)(param_1 + 0x40));
  }
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return param_1;
}



/* Entry: 10974f730; end: 10974f7a3;  */

undefined8 * FUN_10974f730(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = "HB_SHAPER_LIST";
  _getenv();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x1;
    _calloc(1,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = 0x746f;
      puVar2[2] = FUN_109704d68;
      _atexit(FUN_10974f7a4);
    }
  }
  return puVar2;
}



/* Entry: 10974f7a4; end: 10974f7eb;  */

/* WARNING: Removing unreachable block (ram,0x00010974f7cc) */

void FUN_10974f7a4(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = puRam0000000113735de0;
    if (puRam0000000113735de0 == (undefined *)0x0) {
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113735de0,0x10);
    if (bVar2) {
      puRam0000000113735de0 = (undefined *)0x0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3 == &UNK_110b0b380) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10974f7ec; end: 10974fa57;  */

void FUN_10974f7ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if (lVar3 != 0) {
      return;
    }
    puVar4 = (undefined *)0x0;
    func_0x00010974f870();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&DAT_1132dfc08;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &DAT_1132dfc08) {
        func_0x0001096f60c8();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10974fa58; end: 10974ff77;  */

undefined1 FUN_10974fa58(undefined8 param_1,uint param_2)

{
  if (param_2 < 0x1e94b) {
    return (&UNK_10dfebb78)
           [(ulong)(param_2 & 3 | 0x2138) +
            (ulong)(byte)(&UNK_10dfebb78)
                         [(ulong)(param_2 >> 2 & 3 | 0x1f00) +
                          (ulong)(byte)(&UNK_10dfebb78)
                                       [(ulong)(param_2 >> 4 & 3 | 0x1d24) +
                                        (ulong)(byte)(&UNK_10dfebb78)
                                                     [(ulong)((param_2 >> 6 & 7) + 0x1bbc) +
                                                      (ulong)(byte)(&UNK_10dfed63e)[param_2 >> 9] *
                                                      8] * 4] * 4] * 4];
  }
  return 0;
}



/* Entry: 10974ff78; end: 109750207;  */

undefined8
FUN_10974ff78(float param_1,long param_2,int *param_3,ulong param_4,ulong param_5,int param_6,
             int *param_7)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined8 uVar5;
  code **ppcVar6;
  int *piStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_7 == (int *)0x0) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_2 + 8);
  if (param_6 == 0x42475241) {
    if ((uint)param_3[6] < (uint)((int)param_4 * 4 * (int)param_5)) {
      return 0;
    }
    ppcVar3 = *(code ***)(param_3 + 4);
    FUN_1097d8784(ppcVar3,0,param_4,param_5);
    if (*param_3 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
        if (bVar2) {
          *param_3 = *param_3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < *(int *)(ppcVar3 + 3)) {
      FUN_1097c5634(ppcVar3 + 7,0,param_3,FUN_109750274);
    }
  }
  else {
    if (param_6 != 0x706e6720) {
      return 0;
    }
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    pcStack_90 = FUN_109750208;
    ppcVar3 = &pcStack_90;
    piStack_c0 = param_3;
    puStack_88 = (undefined1 *)&piStack_c0;
    func_0x0001097e69dc();
    if ((*ppcVar3 == (code *)0x0) || (*(int *)*ppcVar3 != 0)) {
      param_5 = 0;
      param_4 = param_5;
    }
    else {
      param_5 = (ulong)*(uint *)(ppcVar3 + 0x33);
      param_4 = param_5;
    }
  }
  FUN_109801148(uVar5);
  func_0x0001098017a4((double)*param_7,(double)param_7[1],(double)param_7[2],(double)param_7[3],
                      uVar5);
  func_0x000109801920(uVar5);
  ppcVar4 = ppcVar3;
  FUN_1097e45dc();
  if (*(int *)((long)ppcVar4 + 4) == 0) {
    ppcVar6 = (code **)ppcVar4[4];
    *(undefined4 *)(ppcVar4 + 7) = 3;
    for (; ppcVar6 != ppcVar4 + 4; ppcVar6 = (code **)*ppcVar6) {
      (*ppcVar6[-1])(ppcVar6 + -1,ppcVar4,4);
    }
  }
  pcStack_90 = (code *)(double)(param_4 & 0xffffffff);
  dStack_78 = (double)(param_5 & 0xffffffff);
  puStack_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1097e51d8(ppcVar4,&pcStack_90);
  param_7[2] = (int)((float)param_7[2] - param_1 * (float)param_7[3]);
  *param_7 = (int)((float)*param_7 - param_1 * (float)param_7[1]);
  uStack_b8 = 0;
  piStack_c0 = (int *)0x3ff0000000000000;
  dStack_b0 = (double)param_1;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0x3ff0000000000000;
  func_0x0001098015dc(uVar5,&piStack_c0);
  func_0x000109801544((double)*param_7,(double)param_7[1],uVar5);
  func_0x000109801590((double)param_7[2],(double)param_7[3],uVar5);
  func_0x0001098012c0(uVar5,ppcVar4);
  func_0x00010980183c(uVar5);
  FUN_1097e4880(ppcVar4);
  FUN_1097f61ac(ppcVar3);
  func_0x000109801194(uVar5);
  return 1;
}



/* Entry: 109750208; end: 109750273;  */

undefined8 FUN_109750208(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1) + param_3;
  if (*(uint *)(*param_1 + 0x18) < uVar1) {
    return 10;
  }
  if (param_3 != 0) {
    _memcpy(param_2,*(long *)(*param_1 + 0x10) + (ulong)*(uint *)(param_1 + 1),param_3);
    uVar1 = (int)param_1[1] + param_3;
  }
  *(uint *)(param_1 + 1) = uVar1;
  return 0;
}



/* Entry: 109750274; end: 109750277;  */

void FUN_109750274(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        FUN_109711500(lVar4 + 0x40,lVar4);
        _pthread_mutex_destroy(lVar4);
        _free(lVar4);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 109750278; end: 1097504ab;  */

void FUN_109750278(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,long param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  float fVar13;
  uint uStack_194;
  uint *puStack_190;
  ulong uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  float fStack_160;
  float fStack_15c;
  uint *puStack_158;
  uint uStack_14c;
  uint auStack_148 [48];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(param_7 + 8);
  uStack_14c = 0x10;
  puStack_158 = auStack_148;
  FUN_1097504ac(param_8,&uStack_14c,&puStack_158);
  uVar1 = uStack_14c;
  puVar4 = puStack_158;
  uVar10 = (ulong)uStack_14c;
  puVar3 = puStack_158;
  FUN_109750580(puStack_158,uVar10,&fStack_15c,&fStack_160);
  param_5 = param_5 - param_1;
  param_6 = param_6 - param_2;
  fVar13 = param_6 * param_6 + param_5 * param_5;
  if (1e-06 <= fVar13) {
    fVar13 = (-(param_5 * (param_3 - param_1)) - (param_4 - param_2) * param_6) / fVar13;
    param_3 = param_3 + param_5 * fVar13;
    param_4 = param_4 + param_6 * fVar13;
  }
  FUN_1097e465c((double)(param_1 + (param_3 - param_1) * fStack_15c),
                (double)(param_2 + (param_4 - param_2) * fStack_15c),
                (double)(param_1 + (param_3 - param_1) * fStack_160),
                (double)(param_2 + (param_4 - param_2) * fStack_160));
  plVar7 = (long *)param_8[4];
  (*(code *)param_8[3])(param_8,*param_8);
  if (puVar3[1] == 0) {
    uVar2 = (uint)param_8;
    uVar8 = 3;
    if (uVar2 == 1) {
      uVar8 = 1;
    }
    if (uVar2 != 2) {
      uVar2 = uVar8;
    }
    puVar12 = *(uint **)(puVar3 + 8);
    puVar3[0xe] = uVar2;
    for (; puVar12 != puVar3 + 8; puVar12 = *(uint **)puVar12) {
      plVar7 = (long *)0x4;
      (**(code **)(puVar12 + -2))(puVar12 + -2,puVar3);
    }
  }
  if (uVar1 != 0) {
    puVar12 = puVar4 + 2;
    uVar11 = uVar10;
    do {
      uVar1 = *puVar12;
      FUN_1097e4f78((double)(float)puVar12[-2],(double)(uVar1 >> 8 & 0xff) / 255.0,
                    (double)(uVar1 >> 0x10 & 0xff) / 255.0,(double)(uVar1 >> 0x18) / 255.0,
                    (double)(uVar1 & 0xff) / 255.0,puVar3);
      puVar12 = puVar12 + 3;
      uVar11 = uVar11 - 1;
      uVar10 = 0;
    } while (uVar11 != 0);
  }
  puVar6 = puVar3;
  func_0x0001098012c0(uVar9);
  func_0x00010980183c(uVar9);
  puVar12 = puVar3;
  FUN_1097e4880();
  if (puVar4 != auStack_148) {
    puVar12 = puVar4;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puStack_180 = puVar4;
  pcStack_168 = FUN_1097504ac;
  puVar4 = puVar12;
  puStack_190 = puVar3;
  uStack_188 = uVar10;
  uStack_178 = uVar9;
  puStack_170 = &stack0xfffffffffffffff0;
  (**(code **)(puVar12 + 2))();
  uStack_194 = (uint)puVar4;
  if (*puVar6 < uStack_194) {
    lVar5 = ((ulong)puVar4 & 0xffffffff) * 0xc;
    _malloc();
    *plVar7 = lVar5;
  }
  else {
    lVar5 = *plVar7;
  }
  (**(code **)(puVar12 + 2))
            (puVar12,*(undefined8 *)puVar12,0,&uStack_194,lVar5,*(undefined8 *)(puVar12 + 4));
  if (uStack_194 == 0) {
    uStack_194 = 0;
  }
  else {
    uVar10 = 0;
    puVar4 = (uint *)(*plVar7 + 8);
    do {
      if (puVar4[-1] != 0) {
        *puVar4 = (uint)(byte)*puVar4;
      }
      uVar10 = uVar10 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar10 < uStack_194);
  }
  *puVar6 = uStack_194;
  return;
}



/* Entry: 1097504ac; end: 10975057f;  */

void FUN_1097504ac(undefined8 *param_1,uint *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  uint uStack_34;
  
  puVar1 = param_1;
  (*(code *)param_1[1])(param_1,*param_1,0,0,0,param_1[2]);
  uStack_34 = (uint)puVar1;
  if (*param_2 < uStack_34) {
    lVar2 = ((ulong)puVar1 & 0xffffffff) * 0xc;
    _malloc();
    *param_3 = lVar2;
  }
  else {
    lVar2 = *param_3;
  }
  (*(code *)param_1[1])(param_1,*param_1,0,&uStack_34,lVar2,param_1[2]);
  if (uStack_34 == 0) {
    uStack_34 = 0;
  }
  else {
    uVar3 = 0;
    puVar4 = (uint *)(*param_3 + 8);
    do {
      if (puVar4[-1] != 0) {
        *puVar4 = (uint)(byte)*puVar4;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < uStack_34);
  }
  *param_2 = uStack_34;
  return;
}



/* Entry: 109750580; end: 109750633;  */

void FUN_109750580(float *param_1,uint param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (ulong)param_2;
  _qsort(param_1,uVar3,0xc,FUN_1097510a4);
  fVar4 = *param_1;
  pfVar1 = param_1;
  uVar2 = uVar3;
  fVar5 = fVar4;
  if (param_2 != 0) {
    do {
      fVar6 = *pfVar1;
      if (fVar6 < fVar5) {
        fVar5 = fVar6;
      }
      if (fVar4 < fVar6) {
        fVar4 = fVar6;
      }
      uVar2 = uVar2 - 1;
      pfVar1 = pfVar1 + 3;
    } while (uVar2 != 0);
    if (fVar5 != fVar4) {
      do {
        *param_1 = (*param_1 - fVar5) / (fVar4 - fVar5);
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 3;
      } while (uVar3 != 0);
    }
  }
  *param_3 = fVar5;
  *param_4 = fVar4;
  return;
}



/* Entry: 109750634; end: 10975083f;  */

float * FUN_109750634(float param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6,long param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 uVar29;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float *pfStack_490;
  undefined8 *puStack_488;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  float *pfStack_450;
  uint uStack_444;
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined8 uStack_428;
  float afStack_410 [48];
  undefined8 uStack_350;
  undefined8 uStack_348;
  float afStack_250 [16];
  long lStack_210;
  float fStack_160;
  float fStack_15c;
  float *pfStack_158;
  uint uStack_14c;
  float afStack_148 [48];
  long lStack_88;
  undefined8 uVar30;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(param_7 + 8);
  uStack_14c = 0x10;
  pfStack_158 = afStack_148;
  FUN_1097504ac(param_8,&uStack_14c,&pfStack_158);
  uVar12 = uStack_14c;
  pfVar7 = pfStack_158;
  uVar20 = (ulong)uStack_14c;
  pfVar8 = pfStack_158;
  FUN_109750580(pfStack_158,uVar20,&fStack_15c,&fStack_160);
  dVar33 = (double)(param_3 + (param_6 - param_3) * fStack_15c);
  dVar35 = (double)(param_1 + (param_4 - param_1) * fStack_160);
  FUN_1097e46f8((double)(param_1 + (param_4 - param_1) * fStack_15c),
                (double)(param_2 + (param_5 - param_2) * fStack_15c),dVar33,dVar35,
                (double)(param_2 + (param_5 - param_2) * fStack_160),
                (double)(param_3 + (param_6 - param_3) * fStack_160));
  (*(code *)param_8[3])(param_8,*param_8,param_8[4]);
  if (pfVar8[1] == 0.0) {
    fVar24 = SUB84(param_8,0);
    fVar34 = 4.2039e-45;
    if (fVar24 == 1.4013e-45) {
      fVar34 = 1.4013e-45;
    }
    if (fVar24 != 2.8026e-45) {
      fVar24 = fVar34;
    }
    pfVar21 = *(float **)(pfVar8 + 8);
    pfVar8[0xe] = fVar24;
    for (; pfVar21 != pfVar8 + 8; pfVar21 = *(float **)pfVar21) {
      (**(code **)(pfVar21 + -2))(pfVar21 + -2,pfVar8,4);
    }
  }
  if (uVar12 != 0) {
    pfVar21 = pfVar7 + 2;
    do {
      fVar24 = *pfVar21;
      dVar33 = (double)((uint)fVar24 >> 0x10 & 0xff) / 255.0;
      dVar35 = (double)((uint)fVar24 >> 0x18) / 255.0;
      FUN_1097e4f78((double)pfVar21[-2],(double)((uint)fVar24 >> 8 & 0xff) / 255.0,dVar33,dVar35,
                    (double)((uint)fVar24 & 0xff) / 255.0,pfVar8);
      pfVar21 = pfVar21 + 3;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  pfVar21 = pfVar8;
  func_0x0001098012c0(uVar17);
  func_0x00010980183c(uVar17);
  FUN_1097e4880();
  if (pfVar7 != afStack_148) {
    _free();
    pfVar8 = pfVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pfVar8;
  }
  auVar42 = ___stack_chk_fail();
  uVar30 = auVar42._8_8_;
  uVar26 = auVar42._0_8_;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(pfVar8 + 2);
  uStack_444 = 0x10;
  pfStack_450 = afStack_410;
  FUN_1097504ac(pfVar21,&uStack_444,&pfStack_450);
  uVar12 = uStack_444;
  pfVar7 = pfStack_450;
  uVar20 = (ulong)uStack_444;
  _qsort(pfStack_450,uVar20,0xc,FUN_1097510a4);
  func_0x00010980196c(uVar17,&dStack_458,&dStack_460,&dStack_468,&dStack_470);
  dStack_458 = dStack_458 - (double)auVar42._0_4_;
  dStack_458 = dStack_458 * dStack_458;
  dStack_468 = dStack_468 - (double)auVar42._0_4_;
  dStack_468 = dStack_468 * dStack_468;
  if (dStack_458 < dStack_468) {
    dStack_458 = dStack_468;
  }
  dStack_460 = dStack_460 - (double)auVar42._8_4_;
  dStack_460 = dStack_460 * dStack_460;
  dStack_470 = dStack_470 - (double)auVar42._8_4_;
  dStack_470 = dStack_470 * dStack_470;
  if (dStack_460 < dStack_470) {
    dStack_460 = dStack_470;
  }
  fVar24 = SQRT((float)dStack_458 + (float)dStack_460);
  (**(code **)(pfVar21 + 6))(pfVar21,*(undefined8 *)pfVar21,*(undefined8 *)(pfVar21 + 8));
  iVar6 = (int)pfVar21;
  iVar10 = 3;
  if (iVar6 == 1) {
    iVar10 = 1;
  }
  iVar2 = iVar6;
  if (iVar6 != 2) {
    iVar2 = iVar10;
  }
  FUN_1097e47b0();
  fVar38 = SUB84(dVar33,0);
  fVar34 = SUB84(dVar35,0);
  if (fVar38 == fVar34) {
    if (iVar2 == 3) {
      if (0.0 < fVar38) {
        fVar38 = pfVar7[2];
        uVar27 = NEON_ushl(CONCAT44(fVar38,fVar38),0xfffffff0fffffff8,4);
        uVar29 = (undefined1)((ulong)uVar27 >> 0x20);
        uVar20 = CONCAT35(0,CONCAT14(uVar29,(uint)(byte)uVar27));
        auVar4._8_4_ = (uint)fVar38 >> 0x18;
        auVar4._0_8_ = uVar20;
        auVar4[0xc] = SUB41(fVar38,0);
        auVar42._0_8_ = uVar20 & 0xffffffff;
        auVar42[8] = uVar29;
        auVar42._9_7_ = 0;
        auVar42 = NEON_ucvtf(auVar42,8);
        auVar31._0_8_ = (ulong)auVar4._8_5_ & 0xffffffff;
        auVar31[8] = SUB41(fVar38,0);
        auVar31._9_7_ = 0;
        auVar31 = NEON_ucvtf(auVar31,8);
        uStack_350 = CONCAT44((float)(auVar42._8_8_ / 255.0),(float)(auVar42._0_8_ / 255.0));
        uStack_348 = CONCAT44((float)(auVar31._8_8_ / 255.0),(float)(auVar31._0_8_ / 255.0));
        FUN_1097510bc(uVar26,uVar30,fVar24,0,dVar33,&uStack_350,&uStack_350,pfVar21);
      }
      if (fVar34 < 6.2831855) {
        fVar34 = pfVar7[(ulong)(uVar12 - 1) * 3 + 2];
        uVar27 = NEON_ushl(CONCAT44(fVar34,fVar34),0xfffffff0fffffff8,4);
        uVar29 = (undefined1)((ulong)uVar27 >> 0x20);
        uVar20 = CONCAT35(0,CONCAT14(uVar29,(uint)(byte)uVar27));
        auVar5._8_4_ = (uint)fVar34 >> 0x18;
        auVar5._0_8_ = uVar20;
        auVar5[0xc] = SUB41(fVar34,0);
        auVar28._0_8_ = uVar20 & 0xffffffff;
        auVar28[8] = uVar29;
        auVar28._9_7_ = 0;
        auVar42 = NEON_ucvtf(auVar28,8);
        auVar32._0_8_ = (ulong)auVar5._8_5_ & 0xffffffff;
        auVar32[8] = SUB41(fVar34,0);
        auVar32._9_7_ = 0;
        auVar31 = NEON_ucvtf(auVar32,8);
        uStack_350 = CONCAT44((float)(auVar42._8_8_ / 255.0),(float)(auVar42._0_8_ / 255.0));
        uStack_348 = CONCAT44((float)(auVar31._8_8_ / 255.0),(float)(auVar31._0_8_ / 255.0));
        FUN_1097510bc(uVar26,uVar30,fVar24,dVar35,&uStack_350,&uStack_350,pfVar21);
      }
    }
    goto LAB_109751024;
  }
  dVar39 = dVar33;
  dVar40 = dVar35;
  if (fVar38 <= fVar34) {
LAB_109750b40:
    if (uVar12 < 0x11) {
      if (uVar12 != 0) {
        puStack_488 = &uStack_350;
        pfVar8 = afStack_250;
        goto LAB_109750b80;
      }
      goto LAB_109750c8c;
    }
    pfVar8 = (float *)(uVar20 << 2);
    _malloc();
    puStack_488 = (undefined8 *)(uVar20 << 4);
    _malloc();
    if ((pfVar8 != (float *)0x0) && (puStack_488 != (undefined8 *)0x0)) {
LAB_109750b80:
      uVar18 = 0;
      pfVar7 = pfVar7 + 2;
      do {
        fVar34 = *pfVar7;
        uVar27 = NEON_ushl(CONCAT44(fVar34,fVar34),0xfffffff0fffffff8,4);
        uVar29 = (undefined1)((ulong)uVar27 >> 0x20);
        uVar14 = CONCAT35(0,CONCAT14(uVar29,(uint)(byte)uVar27));
        auVar3._8_4_ = (uint)fVar34 >> 0x18;
        auVar3._0_8_ = uVar14;
        auVar3[0xc] = SUB41(fVar34,0);
        auVar37._0_8_ = uVar14 & 0xffffffff;
        auVar37[8] = uVar29;
        auVar37._9_7_ = 0;
        auVar36._0_8_ = (ulong)auVar3._8_5_ & 0xffffffff;
        auVar36[8] = SUB41(fVar34,0);
        auVar36._9_7_ = 0;
        auVar31 = NEON_ucvtf(auVar37,8);
        auVar42 = NEON_ucvtf(auVar36,8);
        pfVar8[uVar18] = SUB84(dVar39,0) + (SUB84(dVar40,0) - SUB84(dVar39,0)) * pfVar7[-2];
        (puStack_488 + uVar18 * 2)[1] =
             CONCAT44((float)(auVar42._8_8_ / 255.0),(float)(auVar42._0_8_ / 255.0));
        puStack_488[uVar18 * 2] =
             CONCAT44((float)(auVar31._8_8_ / 255.0),(float)(auVar31._0_8_ / 255.0));
        uVar18 = uVar18 + 1;
        pfVar7 = pfVar7 + 3;
      } while (uVar20 != uVar18);
      if (iVar2 == 3) {
        uVar18 = 0;
        uStack_430 = *puStack_488;
        uStack_428 = puStack_488[1];
        puVar9 = puStack_488;
        do {
          if (0.0 <= pfVar8[uVar18]) {
            if (uVar18 != 0) {
              uVar20 = (ulong)((int)uVar18 - 1);
              fVar34 = pfVar8[uVar20];
              FUN_109751404((0.0 - fVar34) / (pfVar8[uVar18] - fVar34),fVar34,0.0 - fVar34,
                            puStack_488 + uVar20 * 2,puVar9,&uStack_430);
            }
            goto LAB_109750ccc;
          }
          uVar18 = uVar18 + 1;
          puVar9 = puVar9 + 2;
        } while (uVar20 != uVar18);
        goto LAB_109750cd4;
      }
      fVar38 = *pfVar8;
      uVar11 = uVar12 - 1;
      pfStack_490 = pfVar8 + uVar11;
      fVar25 = *pfStack_490;
      fVar34 = fVar25 - fVar38;
      if (0.0 <= fVar38) {
        if (0.0 < fVar38) {
          uVar23 = 0;
          iVar10 = -1;
          if (fVar34 <= 0.0) {
            iVar10 = 1;
          }
          fVar25 = -fVar34;
          if (fVar34 <= 0.0) {
            fVar25 = fVar34;
          }
          do {
            uVar23 = uVar23 + iVar10;
            fVar38 = fVar25 + fVar38;
          } while (0.0 < fVar38);
          goto LAB_109750d1c;
        }
        goto LAB_109750de0;
      }
      if (0.0 <= fVar25) goto LAB_109750de0;
      uVar23 = 0;
      iVar10 = -1;
      if (0.0 < fVar34) {
        iVar10 = 1;
      }
      fVar38 = fVar34;
      if (fVar34 <= 0.0) {
        fVar38 = -fVar34;
      }
      do {
        uVar23 = uVar23 + iVar10;
        fVar25 = fVar38 + fVar25;
      } while (fVar25 < 0.0);
LAB_109750d1c:
      if (999 < (int)uVar23) goto LAB_109750ffc;
      goto LAB_109750de8;
    }
    _free(pfVar8);
  }
  else {
    uVar14 = (ulong)(uVar12 - 1);
    pfVar8 = pfVar7;
    uVar18 = uVar20;
    if (uVar12 - 1 == 0) {
LAB_109750b20:
      do {
        *pfVar8 = 1.0 - *pfVar8;
        uVar18 = uVar18 - 1;
        pfVar8 = pfVar8 + 3;
        dVar39 = dVar35;
        dVar40 = dVar33;
      } while (uVar18 != 0);
      goto LAB_109750b40;
    }
    uVar13 = 0;
    pfVar15 = pfVar7 + uVar14 * 3;
    pfVar16 = pfVar7;
    do {
      uVar14 = uVar14 - 1;
      fVar34 = pfVar16[2];
      uVar27 = *(undefined8 *)pfVar16;
      fVar38 = pfVar15[2];
      *(undefined8 *)pfVar16 = *(undefined8 *)pfVar15;
      pfVar16[2] = fVar38;
      *(undefined8 *)pfVar15 = uVar27;
      pfVar15[2] = fVar34;
      uVar13 = uVar13 + 1;
      pfVar16 = pfVar16 + 3;
      pfVar15 = pfVar15 + -3;
    } while (uVar13 < (uVar14 & 0xffffffff));
    if (uVar12 != 0) goto LAB_109750b20;
LAB_109750c8c:
    pfVar8 = afStack_250;
    if (iVar2 == 3) {
      uVar18 = 0;
      puStack_488 = &uStack_350;
LAB_109750ccc:
      if ((uint)uVar18 == uVar12) {
LAB_109750cd4:
        uStack_430 = puStack_488[(ulong)(uVar12 - 1) * 2];
        uStack_428 = (puStack_488 + (ulong)(uVar12 - 1) * 2)[1];
        fVar34 = 0.0;
      }
      else {
        FUN_1097510bc(uVar26,uVar30,fVar24,0,pfVar8[uVar18 & 0xffffffff],&uStack_430,
                      puStack_488 + (uVar18 & 0xffffffff) * 2,pfVar21);
        uVar11 = (uint)uVar18 + 1;
        if (uVar11 < uVar12) {
          puVar9 = puStack_488 + (ulong)uVar11 * 2;
          pfVar7 = pfVar8 + uVar11;
          do {
            uVar23 = uVar11 - 1;
            if (6.2831855 < *pfVar7) {
              FUN_109751404(puStack_488 + (ulong)uVar23 * 2,puVar9,auStack_440);
              FUN_1097510bc(uVar26,uVar30,fVar24,pfVar8[uVar23],0x40c90fdb,
                            puStack_488 + (ulong)uVar23 * 2,auStack_440,pfVar21);
              goto LAB_109750fc0;
            }
            FUN_1097510bc(uVar26,uVar30,fVar24,pfVar8[uVar23],puStack_488 + (ulong)uVar23 * 2,puVar9
                          ,pfVar21);
            puVar9 = puVar9 + 2;
            uVar11 = uVar11 + 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar12 != uVar11);
        }
        else {
LAB_109750fc0:
          if (uVar11 != uVar12) goto LAB_109750ffc;
        }
        uStack_430 = puStack_488[(ulong)(uVar12 - 1) * 2];
        uStack_428 = (puStack_488 + (ulong)(uVar12 - 1) * 2)[1];
        fVar34 = pfVar8[uVar12 - 1];
      }
      FUN_1097510bc(uVar26,uVar30,fVar24,fVar34,0x40c90fdb,&uStack_430,&uStack_430,pfVar21);
    }
    else {
      pfStack_490 = (float *)&stack0x0003fffffdac;
      puStack_488 = &uStack_350;
      uVar11 = 0xffffffff;
      fVar34 = NAN;
LAB_109750de0:
      uVar23 = 0;
LAB_109750de8:
      fVar34 = ABS(fVar34);
      do {
        if (1 < uVar12) {
          uVar18 = 0;
          fVar38 = (float)(int)uVar23;
          pfVar7 = pfVar8;
          uVar19 = uVar12;
          uVar22 = uVar11;
          do {
            uVar22 = uVar22 - 1;
            uVar19 = uVar19 - 1;
            if ((iVar6 == 2 & uVar23) == 0) {
              uVar14 = uVar18 + 1;
              fVar25 = pfVar7[1];
              fVar41 = *pfVar7 + fVar34 * fVar38;
              uVar13 = uVar18;
            }
            else {
              fVar41 = ((*pfVar8 + *pfStack_490) - pfVar8[uVar19]) + fVar34 * fVar38;
              uVar14 = (ulong)uVar22;
              fVar25 = (*pfVar8 + *pfStack_490) - pfVar8[uVar22];
              uVar13 = (ulong)uVar19;
            }
            fVar25 = fVar25 + fVar34 * fVar38;
            if (0.0 <= fVar25) {
              puVar1 = puStack_488 + uVar14 * 2;
              puVar9 = puStack_488 + uVar13 * 2;
              if (0.0 <= fVar41) {
                if (6.2831855 <= fVar25) {
                  FUN_109751404(puVar9,puVar1,&uStack_430);
                  FUN_1097510bc(uVar26,uVar30,fVar24,fVar41,0x40c90fdb,puVar9,&uStack_430,pfVar21);
                  goto LAB_109750ffc;
                }
              }
              else {
                FUN_109751404(puVar9,puVar1,&uStack_430);
                fVar41 = 0.0;
                puVar9 = &uStack_430;
              }
              FUN_1097510bc(uVar26,uVar30,fVar24,fVar41,fVar25,puVar9,puVar1,pfVar21);
            }
            uVar18 = uVar18 + 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar20 - 1 != uVar18);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != 1000);
    }
LAB_109750ffc:
    if (pfVar8 != afStack_250) {
      _free(pfVar8);
    }
    if (puStack_488 == &uStack_350) goto LAB_109751024;
  }
  _free(puStack_488);
LAB_109751024:
  pfVar8 = pfVar21;
  func_0x0001098012c0(uVar17);
  func_0x00010980183c(uVar17);
  FUN_1097e4880(pfVar21);
  pfVar7 = pfStack_450;
  if (pfStack_450 != afStack_410) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
    ___stack_chk_fail();
    uVar12 = (uint)(*pfVar8 < *pfVar7);
    if (*pfVar7 < *pfVar8) {
      uVar12 = 0xffffffff;
    }
    return (float *)(ulong)uVar12;
  }
  return pfVar7;
}



/* Entry: 109750840; end: 1097510a3;  */

float * FUN_109750840(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5
                     ,float *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  float fVar23;
  undefined1 uVar27;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float *pfStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float *pfStack_2f0;
  uint uStack_2e4;
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float afStack_2b0 [48];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float afStack_f0 [16];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)(param_5 + 8);
  uStack_2e4 = 0x10;
  pfStack_2f0 = afStack_2b0;
  FUN_1097504ac(param_6,&uStack_2e4,&pfStack_2f0);
  uVar12 = uStack_2e4;
  pfVar9 = pfStack_2f0;
  uVar21 = (ulong)uStack_2e4;
  _qsort(pfStack_2f0,uVar21,0xc,FUN_1097510a4);
  func_0x00010980196c(uVar19,&uStack_2f8,&uStack_300,&uStack_308,&uStack_310);
  (**(code **)(param_6 + 6))(param_6,*(undefined8 *)param_6,*(undefined8 *)(param_6 + 8));
  iVar6 = (int)param_6;
  iVar10 = 3;
  if (iVar6 == 1) {
    iVar10 = 1;
  }
  iVar2 = iVar6;
  if (iVar6 != 2) {
    iVar2 = iVar10;
  }
  FUN_1097e47b0();
  if (param_3 == param_4) {
    if (iVar2 == 3) {
      if (0.0 < param_3) {
        fVar34 = pfVar9[2];
        uVar24 = NEON_ushl(CONCAT44(fVar34,fVar34),0xfffffff0fffffff8,4);
        uVar27 = (undefined1)((ulong)uVar24 >> 0x20);
        uVar21 = CONCAT35(0,CONCAT14(uVar27,(uint)(byte)uVar24));
        auVar4._8_4_ = (uint)fVar34 >> 0x18;
        auVar4._0_8_ = uVar21;
        auVar4[0xc] = SUB41(fVar34,0);
        auVar25._0_8_ = uVar21 & 0xffffffff;
        auVar25[8] = uVar27;
        auVar25._9_7_ = 0;
        auVar25 = NEON_ucvtf(auVar25,8);
        auVar28._0_8_ = (ulong)auVar4._8_5_ & 0xffffffff;
        auVar28[8] = SUB41(fVar34,0);
        auVar28._9_7_ = 0;
        auVar28 = NEON_ucvtf(auVar28,8);
        uStack_1f0 = CONCAT44((float)(auVar25._8_8_ / 255.0),(float)(auVar25._0_8_ / 255.0));
        uStack_1e8 = CONCAT44((float)(auVar28._8_8_ / 255.0),(float)(auVar28._0_8_ / 255.0));
        FUN_1097510bc(&uStack_1f0,&uStack_1f0,param_6);
      }
      if (param_4 < 6.2831855) {
        fVar34 = pfVar9[(ulong)(uVar12 - 1) * 3 + 2];
        uVar24 = NEON_ushl(CONCAT44(fVar34,fVar34),0xfffffff0fffffff8,4);
        uVar27 = (undefined1)((ulong)uVar24 >> 0x20);
        uVar21 = CONCAT35(0,CONCAT14(uVar27,(uint)(byte)uVar24));
        auVar5._8_4_ = (uint)fVar34 >> 0x18;
        auVar5._0_8_ = uVar21;
        auVar5[0xc] = SUB41(fVar34,0);
        auVar26._0_8_ = uVar21 & 0xffffffff;
        auVar26[8] = uVar27;
        auVar26._9_7_ = 0;
        auVar25 = NEON_ucvtf(auVar26,8);
        auVar29._0_8_ = (ulong)auVar5._8_5_ & 0xffffffff;
        auVar29[8] = SUB41(fVar34,0);
        auVar29._9_7_ = 0;
        auVar28 = NEON_ucvtf(auVar29,8);
        uStack_1f0 = CONCAT44((float)(auVar25._8_8_ / 255.0),(float)(auVar25._0_8_ / 255.0));
        uStack_1e8 = CONCAT44((float)(auVar28._8_8_ / 255.0),(float)(auVar28._0_8_ / 255.0));
        FUN_1097510bc(&uStack_1f0,&uStack_1f0,param_6);
      }
    }
    goto LAB_109751024;
  }
  fVar34 = param_3;
  fVar32 = param_4;
  if (param_3 <= param_4) {
LAB_109750b40:
    if (uVar12 < 0x11) {
      if (uVar12 != 0) {
        puStack_328 = &uStack_1f0;
        pfVar7 = afStack_f0;
        goto LAB_109750b80;
      }
      goto LAB_109750c8c;
    }
    pfVar7 = (float *)(uVar21 << 2);
    _malloc();
    puStack_328 = (undefined8 *)(uVar21 << 4);
    _malloc();
    if ((pfVar7 != (float *)0x0) && (puStack_328 != (undefined8 *)0x0)) {
LAB_109750b80:
      uVar17 = 0;
      pfVar9 = pfVar9 + 2;
      do {
        fVar23 = *pfVar9;
        uVar24 = NEON_ushl(CONCAT44(fVar23,fVar23),0xfffffff0fffffff8,4);
        uVar27 = (undefined1)((ulong)uVar24 >> 0x20);
        uVar14 = CONCAT35(0,CONCAT14(uVar27,(uint)(byte)uVar24));
        auVar3._8_4_ = (uint)fVar23 >> 0x18;
        auVar3._0_8_ = uVar14;
        auVar3[0xc] = SUB41(fVar23,0);
        auVar31._0_8_ = uVar14 & 0xffffffff;
        auVar31[8] = uVar27;
        auVar31._9_7_ = 0;
        auVar30._0_8_ = (ulong)auVar3._8_5_ & 0xffffffff;
        auVar30[8] = SUB41(fVar23,0);
        auVar30._9_7_ = 0;
        auVar28 = NEON_ucvtf(auVar31,8);
        auVar25 = NEON_ucvtf(auVar30,8);
        pfVar7[uVar17] = fVar34 + (fVar32 - fVar34) * pfVar9[-2];
        (puStack_328 + uVar17 * 2)[1] =
             CONCAT44((float)(auVar25._8_8_ / 255.0),(float)(auVar25._0_8_ / 255.0));
        puStack_328[uVar17 * 2] =
             CONCAT44((float)(auVar28._8_8_ / 255.0),(float)(auVar28._0_8_ / 255.0));
        uVar17 = uVar17 + 1;
        pfVar9 = pfVar9 + 3;
      } while (uVar21 != uVar17);
      if (iVar2 == 3) {
        uVar17 = 0;
        uStack_2d0 = *puStack_328;
        uStack_2c8 = puStack_328[1];
        puVar8 = puStack_328;
        do {
          if (0.0 <= pfVar7[uVar17]) {
            if (uVar17 != 0) {
              uVar21 = (ulong)((int)uVar17 - 1);
              fVar34 = pfVar7[uVar21];
              FUN_109751404((0.0 - fVar34) / (pfVar7[uVar17] - fVar34),fVar34,0.0 - fVar34,
                            puStack_328 + uVar21 * 2,puVar8,&uStack_2d0);
            }
            goto LAB_109750ccc;
          }
          uVar17 = uVar17 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar21 != uVar17);
        goto LAB_109750cd4;
      }
      fVar32 = *pfVar7;
      uVar11 = uVar12 - 1;
      pfStack_330 = pfVar7 + uVar11;
      fVar23 = *pfStack_330;
      fVar34 = fVar23 - fVar32;
      if (0.0 <= fVar32) {
        if (0.0 < fVar32) {
          uVar22 = 0;
          iVar10 = -1;
          if (fVar34 <= 0.0) {
            iVar10 = 1;
          }
          fVar23 = -fVar34;
          if (fVar34 <= 0.0) {
            fVar23 = fVar34;
          }
          do {
            uVar22 = uVar22 + iVar10;
            fVar32 = fVar23 + fVar32;
          } while (0.0 < fVar32);
          goto LAB_109750d1c;
        }
        goto LAB_109750de0;
      }
      if (0.0 <= fVar23) goto LAB_109750de0;
      uVar22 = 0;
      iVar10 = -1;
      if (0.0 < fVar34) {
        iVar10 = 1;
      }
      fVar32 = fVar34;
      if (fVar34 <= 0.0) {
        fVar32 = -fVar34;
      }
      do {
        uVar22 = uVar22 + iVar10;
        fVar23 = fVar32 + fVar23;
      } while (fVar23 < 0.0);
LAB_109750d1c:
      if (999 < (int)uVar22) goto LAB_109750ffc;
      goto LAB_109750de8;
    }
    _free(pfVar7);
  }
  else {
    uVar14 = (ulong)(uVar12 - 1);
    pfVar7 = pfVar9;
    uVar17 = uVar21;
    if (uVar12 - 1 == 0) {
LAB_109750b20:
      do {
        *pfVar7 = 1.0 - *pfVar7;
        uVar17 = uVar17 - 1;
        pfVar7 = pfVar7 + 3;
        fVar34 = param_4;
        fVar32 = param_3;
      } while (uVar17 != 0);
      goto LAB_109750b40;
    }
    uVar13 = 0;
    pfVar15 = pfVar9 + uVar14 * 3;
    pfVar16 = pfVar9;
    do {
      uVar14 = uVar14 - 1;
      fVar34 = pfVar16[2];
      uVar24 = *(undefined8 *)pfVar16;
      fVar32 = pfVar15[2];
      *(undefined8 *)pfVar16 = *(undefined8 *)pfVar15;
      pfVar16[2] = fVar32;
      *(undefined8 *)pfVar15 = uVar24;
      pfVar15[2] = fVar34;
      uVar13 = uVar13 + 1;
      pfVar16 = pfVar16 + 3;
      pfVar15 = pfVar15 + -3;
    } while (uVar13 < (uVar14 & 0xffffffff));
    if (uVar12 != 0) goto LAB_109750b20;
LAB_109750c8c:
    pfVar7 = afStack_f0;
    if (iVar2 == 3) {
      uVar17 = 0;
      puStack_328 = &uStack_1f0;
LAB_109750ccc:
      if ((uint)uVar17 == uVar12) {
LAB_109750cd4:
        uStack_2d0 = puStack_328[(ulong)(uVar12 - 1) * 2];
        uStack_2c8 = (puStack_328 + (ulong)(uVar12 - 1) * 2)[1];
      }
      else {
        FUN_1097510bc(&uStack_2d0,puStack_328 + (uVar17 & 0xffffffff) * 2,param_6);
        uVar11 = (uint)uVar17 + 1;
        if (uVar11 < uVar12) {
          puVar8 = puStack_328 + (ulong)uVar11 * 2;
          pfVar9 = pfVar7 + uVar11;
          do {
            if (6.2831855 < *pfVar9) {
              FUN_109751404(puStack_328 + (ulong)(uVar11 - 1) * 2,puVar8,auStack_2e0);
              FUN_1097510bc(puStack_328 + (ulong)(uVar11 - 1) * 2,auStack_2e0,param_6);
              goto LAB_109750fc0;
            }
            FUN_1097510bc(puStack_328 + (ulong)(uVar11 - 1) * 2,puVar8,param_6);
            puVar8 = puVar8 + 2;
            uVar11 = uVar11 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar12 != uVar11);
        }
        else {
LAB_109750fc0:
          if (uVar11 != uVar12) goto LAB_109750ffc;
        }
        uStack_2d0 = puStack_328[(ulong)(uVar12 - 1) * 2];
        uStack_2c8 = (puStack_328 + (ulong)(uVar12 - 1) * 2)[1];
      }
      FUN_1097510bc(&uStack_2d0,&uStack_2d0,param_6);
    }
    else {
      pfStack_330 = (float *)&stack0x0003ffffff0c;
      puStack_328 = &uStack_1f0;
      uVar11 = 0xffffffff;
      fVar34 = NAN;
LAB_109750de0:
      uVar22 = 0;
LAB_109750de8:
      fVar34 = ABS(fVar34);
      do {
        if (1 < uVar12) {
          uVar17 = 0;
          fVar32 = (float)(int)uVar22;
          pfVar9 = pfVar7;
          uVar18 = uVar12;
          uVar20 = uVar11;
          do {
            uVar20 = uVar20 - 1;
            uVar18 = uVar18 - 1;
            if ((iVar6 == 2 & uVar22) == 0) {
              uVar14 = uVar17 + 1;
              fVar23 = pfVar9[1];
              fVar33 = *pfVar9 + fVar34 * fVar32;
              uVar13 = uVar17;
            }
            else {
              fVar33 = ((*pfVar7 + *pfStack_330) - pfVar7[uVar18]) + fVar34 * fVar32;
              uVar14 = (ulong)uVar20;
              fVar23 = (*pfVar7 + *pfStack_330) - pfVar7[uVar20];
              uVar13 = (ulong)uVar18;
            }
            fVar23 = fVar23 + fVar34 * fVar32;
            if (0.0 <= fVar23) {
              puVar1 = puStack_328 + uVar14 * 2;
              puVar8 = puStack_328 + uVar13 * 2;
              if (0.0 <= fVar33) {
                if (6.2831855 <= fVar23) {
                  FUN_109751404(puVar8,puVar1,&uStack_2d0);
                  FUN_1097510bc(puVar8,&uStack_2d0,param_6);
                  goto LAB_109750ffc;
                }
              }
              else {
                FUN_109751404(puVar8,puVar1,&uStack_2d0);
                puVar8 = &uStack_2d0;
              }
              FUN_1097510bc(puVar8,puVar1,param_6);
            }
            uVar17 = uVar17 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar21 - 1 != uVar17);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != 1000);
    }
LAB_109750ffc:
    if (pfVar7 != afStack_f0) {
      _free(pfVar7);
    }
    if (puStack_328 == &uStack_1f0) goto LAB_109751024;
  }
  _free(puStack_328);
LAB_109751024:
  pfVar7 = param_6;
  func_0x0001098012c0(uVar19);
  func_0x00010980183c(uVar19);
  FUN_1097e4880(param_6);
  pfVar9 = pfStack_2f0;
  if (pfStack_2f0 != afStack_2b0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    uVar12 = (uint)(*pfVar7 < *pfVar9);
    if (*pfVar9 < *pfVar7) {
      uVar12 = 0xffffffff;
    }
    return (float *)(ulong)uVar12;
  }
  return pfVar9;
}



/* Entry: 1097510a4; end: 1097510bb;  */

uint FUN_1097510a4(float *param_1,float *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 1097510bc; end: 109751403;  */

void FUN_1097510bc(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  uVar6 = (uint)(ABS(param_5 - param_4) / 0.3926991);
  if (0 < (int)uVar6) {
    uVar8 = (ulong)(uint)param_4;
    uVar10 = (ulong)(uint)(param_5 - param_4);
    fVar19 = param_6[2];
    fVar17 = param_6[3];
    fVar21 = *param_6;
    fVar22 = param_6[1];
    ___sincosf_stret();
    uVar1 = (ulong)uVar6;
    uVar7 = 1;
    do {
      fVar18 = param_4 + (param_5 - param_4) * (float)((double)uVar7 / (double)uVar1);
      FUN_109751404(param_6,param_7,&fStack_90);
      fVar5 = fStack_84;
      fVar4 = fStack_88;
      fVar3 = fStack_8c;
      fVar2 = fStack_90;
      fVar9 = fStack_88;
      ___sincosf_stret();
      fVar24 = (float)uVar10;
      fVar26 = (float)uVar8;
      fVar15 = fVar24 + fVar9;
      fVar13 = fVar26 + fVar18;
      fVar11 = SQRT(fVar13 * fVar13 + fVar15 * fVar15);
      fVar15 = fVar15 / fVar11;
      fVar13 = fVar13 / fVar11;
      fVar11 = (fVar26 * (fVar26 - fVar13) + fVar24 * (fVar24 - fVar15)) /
               (fVar26 * fVar15 - fVar24 * fVar13);
      fVar12 = fVar15 - fVar13 * fVar11;
      fVar14 = fVar13 + fVar15 * fVar11;
      fVar16 = (fVar18 * (fVar18 - fVar13) + fVar9 * (fVar9 - fVar15)) /
               (fVar18 * fVar15 - fVar9 * fVar13);
      fVar11 = fVar15 - fVar13 * fVar16;
      fVar13 = fVar13 + fVar15 * fVar16;
      FUN_1097e48f8(param_8);
      FUN_1097e4e2c((double)param_1,(double)param_2,param_8);
      FUN_1097e4c28((double)(param_1 + param_3 * fVar24),(double)(param_2 + param_3 * fVar26),
                    param_8);
      FUN_1097e4cf0((double)(param_1 + param_3 * (fVar12 + (fVar12 - fVar24) * 0.33333)),
                    (double)(param_2 + param_3 * (fVar14 + (fVar14 - fVar26) * 0.33333)),
                    (double)(param_1 + param_3 * (fVar11 + (fVar11 - fVar9) * 0.33333)),
                    (double)(param_2 + param_3 * (fVar13 + (fVar13 - fVar18) * 0.33333)),
                    (double)(param_1 + param_3 * fVar9),(double)(param_2 + param_3 * fVar18),param_8
                   );
      FUN_1097e4c28((double)param_1,(double)param_2,param_8);
      func_0x0001097e4e7c((double)fVar21,(double)fVar22,(double)fVar19,(double)fVar17,param_8,0);
      func_0x0001097e4e7c((double)fVar21,(double)fVar22,(double)fVar19,(double)fVar17,param_8,1);
      dVar20 = (double)fVar2;
      dVar23 = (double)fVar3;
      dVar25 = (double)fVar4;
      dVar27 = (double)fVar5;
      func_0x0001097e4e7c(dVar20,dVar23,dVar25,dVar27,param_8,2);
      func_0x0001097e4e7c(dVar20,dVar23,dVar25,dVar27,param_8,3);
      FUN_1097e49a0(param_8);
      uVar7 = uVar7 + 1;
      uVar8 = (ulong)(uint)fVar18;
      uVar10 = (ulong)(uint)fVar9;
      uVar6 = uVar6 - 1;
      fVar17 = fVar5;
      fVar19 = fVar4;
      fVar21 = fVar2;
      fVar22 = fVar3;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 109751404; end: 10975149b;  */

void FUN_109751404(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  fVar5 = param_2[3];
  *(ulong *)param_2 =
       CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                (float)*(undefined8 *)param_2 * fVar5);
  param_2[2] = fVar5 * param_2[2];
  fVar1 = *param_3;
  uVar7 = NEON_rev64(*(undefined8 *)(param_3 + 2),4);
  fVar4 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
  *param_3 = fVar1 * fVar4;
  fVar6 = param_3[1] * (float)uVar7;
  fVar8 = fVar4 * (float)((ulong)uVar7 >> 0x20);
  *(ulong *)(param_3 + 1) = CONCAT44(fVar8,fVar6);
  fVar3 = *param_2 + (fVar1 * fVar4 - *param_2) * param_1;
  *param_4 = fVar3;
  fVar1 = (float)*(undefined8 *)(param_2 + 1);
  fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar1 = fVar1 + (fVar6 - fVar1) * param_1;
  fVar2 = fVar2 + (fVar8 - fVar2) * param_1;
  *(ulong *)(param_4 + 1) = CONCAT44(fVar2,fVar1);
  fVar5 = fVar5 + (fVar4 - fVar5) * param_1;
  param_4[3] = fVar5;
  if (fVar5 != 0.0) {
    *param_4 = fVar3 / fVar5;
    *(ulong *)(param_4 + 1) = CONCAT44(fVar2 / fVar5,fVar1 / fVar5);
  }
  return;
}



/* Entry: 10975149c; end: 109751527;  */

long FUN_10975149c(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  func_0x0001096fbb00();
  lVar4 = *(long *)(param_1 + 8);
  FUN_109751528();
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (*(int *)(lVar4 + 0xc) == -1) {
    iVar3 = *(int *)(lVar4 + 8);
  }
  else {
    lVar5 = lVar4 + 0x10;
    FUN_1097c5634(lVar5,&UNK_10dff6d4c,param_1,FUN_10975169c);
    iVar3 = (int)lVar5;
  }
  if (iVar3 != 0) {
    func_0x0001096fba38(param_1);
  }
  return lVar4;
}



/* Entry: 109751528; end: 10975169b;  */

undefined * FUN_109751528(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x1;
  _calloc(1,0x60);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &UNK_10dffe298;
  }
  else {
    *(undefined4 *)(puVar4 + 0xc) = 1;
    *(undefined **)(puVar4 + 0x28) = &UNK_110b11ca8;
    *(undefined4 *)(puVar4 + 0x18) = 0x18;
  }
  FUN_109800480(puVar4,FUN_1097516a0);
  func_0x0001098005d0(puVar4,FUN_109751ad4);
  func_0x000109800564(puVar4,FUN_109751f28);
  piVar5 = param_1;
  func_0x000109700b18();
  if ((int)piVar5 == 0) {
    piVar5 = param_1 + 0x5c;
    FUN_109747f24();
    puVar6 = &UNK_10dfe4888;
    if (0xd < (uint)piVar5[6]) {
      puVar6 = *(undefined **)(piVar5 + 4);
    }
    if (puVar6[3] == '\0' && puVar6[2] == '\0') {
      piVar5 = param_1 + 0x5c;
      FUN_109747f24();
      puVar6 = &UNK_10dfe4888;
      if (0xd < (uint)piVar5[6]) {
        puVar6 = *(undefined **)(piVar5 + 4);
      }
      iVar3 = (int)puVar6;
      FUN_109700a58();
      if (iVar3 == 0) goto LAB_10975162c;
    }
    func_0x0001098004ec(puVar4,FUN_109751ff0);
  }
  else {
    func_0x0001098004ec(puVar4,FUN_109751ff0);
    if (param_1 == (int *)0x0) goto LAB_109751648;
  }
LAB_10975162c:
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_109751648:
  if (*(int *)(puVar4 + 0xc) == -1) {
    iVar3 = *(int *)(puVar4 + 8);
  }
  else {
    puVar6 = puVar4 + 0x10;
    FUN_1097c5634(puVar6,&UNK_10dff6d50,param_1,FUN_1097521c0);
    iVar3 = (int)puVar6;
  }
  if (iVar3 != 0) {
    func_0x0001096f8de8(param_1);
  }
  return puVar4;
}



/* Entry: 10975169c; end: 10975169f;  */

/* WARNING: Possible PIC construction at 0x0001096fbac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096fbac4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbe28c) */

void FUN_10975169c(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar4 = (undefined1 *)register0x00000008;
  while( true ) {
    piVar5 = param_1;
    *(long *)(puVar4 + -0x20) = unaff_x20;
    *(int **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      return;
    }
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 != 0) break;
    *piVar5 = -0xdead;
    unaff_x20 = *(long *)(piVar5 + 2);
    if (unaff_x20 != 0) {
      FUN_109711500(unaff_x20 + 0x40,unaff_x20);
      _pthread_mutex_destroy(unaff_x20);
      _free(unaff_x20);
      piVar5[2] = 0;
      piVar5[3] = 0;
    }
    piVar5[0x2c] = 0;
    piVar5[0x2d] = 0;
    if (*(code **)(piVar5 + 0x28) != (code *)0x0) {
      (**(code **)(piVar5 + 0x28))(*(undefined8 *)(piVar5 + 0x26));
    }
    unaff_x30 = 0x1096fbac4;
    puVar4 = puVar4 + -0x20;
    param_1 = *(int **)(piVar5 + 6);
    unaff_x19 = piVar5;
  }
  return;
}



/* Entry: 1097516a0; end: 109751ad3;  */

undefined8 FUN_1097516a0(long param_1,undefined8 param_2,double *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  undefined *puVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar20 = *(undefined **)(param_1 + 0x28);
    if (puVar20 == (undefined *)0x0) {
      puVar20 = *(undefined **)(param_1 + 0x30);
    }
  }
  else {
    puVar20 = &UNK_10dffe298;
  }
  uVar10 = (ulong)*(uint *)(puVar20 + 0x14);
  if (*(uint *)(puVar20 + 0x14) != 0) {
    puVar13 = (undefined8 *)(*(long *)(puVar20 + 0x20) + 8);
    uVar11 = uVar10;
    do {
      if ((undefined *)puVar13[-1] == &UNK_10dff6d4c) {
        piVar5 = (int *)*puVar13;
        if (piVar5 != (int *)0x0) goto LAB_1097519a4;
        break;
      }
      puVar13 = puVar13 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar13 = (undefined8 *)(*(long *)(puVar20 + 0x20) + 8);
    do {
      if ((undefined *)puVar13[-1] == &UNK_10dff6d50) {
        piVar5 = (int *)*puVar13;
        goto LAB_109751758;
      }
      puVar13 = puVar13 + 3;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  piVar5 = (int *)0x0;
LAB_109751758:
  FUN_1096fb59c();
  puVar6 = (undefined *)0x1;
  _calloc(1,0x38);
  puVar1 = &UNK_10dffe2e0;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  FUN_1097f0ce0(param_1,puVar1);
  pcVar19 = *(char **)(puVar1 + 0x18);
  if (pcVar19 == (char *)0x0) {
    lVar17 = 0;
    uVar15 = 0;
LAB_109751870:
    uVar10 = 0;
    lVar16 = 0x11382ab30;
    uRam000000011382ab30 = 0;
  }
  else {
    uVar10 = 0;
    lVar16 = 0;
    uVar15 = 0;
    do {
      if (*pcVar19 == '\0') break;
      pcVar7 = pcVar19;
      _strpbrk(pcVar19,&DAT_10f68f19e);
      iVar4 = (int)pcVar7 - (int)pcVar19;
      if (pcVar7 == (char *)0x0) {
        iVar4 = -1;
      }
      func_0x0001096f8078(pcVar19,iVar4,&uStack_90);
      if ((int)pcVar19 != 0) {
        uVar9 = (int)uVar10 + 1;
        lVar17 = lVar16;
        uVar18 = uVar15;
        if ((int)uVar15 <= (int)uVar10) {
          if ((int)uVar15 < 0) {
LAB_10975184c:
            uRam000000011382ab30 = 0;
            goto LAB_109751810;
          }
          if (uVar15 < uVar9) {
            do {
              uVar18 = uVar18 + (uVar18 >> 1) + 8;
            } while (uVar18 < uVar9);
            if ((uVar18 >> 0x1d != 0) || (FUN_1097521c8(lVar16,uVar18), lVar17 == 0)) {
              uVar15 = ~uVar15;
              goto LAB_10975184c;
            }
          }
        }
        *(undefined8 *)(lVar17 + uVar10 * 8) = uStack_90;
        uVar10 = (ulong)uVar9;
        lVar16 = lVar17;
        uVar15 = uVar18;
      }
LAB_109751810:
      pcVar19 = pcVar7 + 1;
    } while (pcVar7 != (char *)0x0);
    lVar17 = lVar16;
    if ((int)uVar10 == 0) goto LAB_109751870;
  }
  FUN_1096fbc24(piVar5,lVar16,uVar10);
  FUN_1097cf308(puVar1);
  uVar9 = *(uint *)(puVar20 + 0x14);
  uVar10 = (ulong)uVar9;
  if (uVar9 != 0) {
    puVar12 = (uint *)(*(long *)(puVar20 + 0x20) + 8);
    do {
      if (*(undefined **)(puVar12 + -2) == &UNK_10dff6d5c) {
        if (*puVar12 != 0) {
          dVar21 = 1.0;
          dVar22 = 1.0;
          if (*(int *)(param_1 + 8) == 0) {
            dVar22 = *(double *)(param_1 + 0xd8);
            dVar21 = *(double *)(param_1 + 0xf0);
          }
          dVar23 = (double)*puVar12;
          FUN_1096fbbec(piVar5,(int)(dVar22 * dVar23),(int)(dVar21 * dVar23));
          uVar9 = *(uint *)(puVar20 + 0x14);
        }
        break;
      }
      puVar12 = puVar12 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar9 != 0) {
      uVar11 = (ulong)uVar9;
      puVar13 = (undefined8 *)(*(long *)(puVar20 + 0x20) + 8);
      uVar10 = uVar11;
      do {
        if ((undefined *)puVar13[-1] == &UNK_10dff6d54) {
          if ((code *)*puVar13 != (code *)0x0) {
            puVar14 = (undefined8 *)(*(long *)(puVar20 + 0x20) + 8);
            goto LAB_109751958;
          }
          break;
        }
        puVar13 = puVar13 + 3;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
LAB_10975198c:
  func_0x0001096fbb00(piVar5);
  if (uVar15 != 0) {
    _free(lVar17);
  }
  if (piVar5 != (int *)0x0) {
LAB_1097519a4:
    if (*piVar5 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_1097c5634(param_1 + 0x10,&UNK_10dff6d4c,piVar5,FUN_10975169c);
  }
  iVar4 = piVar5[0xb];
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar13 = *(undefined8 **)(*(long *)(piVar5 + 0x24) + 0x10);
  if (puVar13 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar13;
  }
  (**(code **)(*(long *)(piVar5 + 0x24) + 0x20))
            (piVar5,*(undefined8 *)(piVar5 + 0x26),&uStack_90,uVar8);
  dVar21 = (double)(int)uStack_90 / (double)iVar4;
  dVar22 = (double)-uStack_90._4_4_ / (double)iVar4;
  *param_3 = dVar21;
  param_3[1] = dVar22;
  param_3[2] = dVar21 + dVar22;
  func_0x0001096fc790();
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar4 = *(int *)(param_1 + 8);
  }
  else {
    param_1 = param_1 + 0x10;
    FUN_1097c5634(param_1,&UNK_10dff6d60,piVar5,0x1097521c4);
    iVar4 = (int)param_1;
  }
  if (iVar4 != 0) {
    FUN_1096fc7ec(piVar5);
  }
  return 0;
  while( true ) {
    puVar14 = puVar14 + 3;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) break;
LAB_109751958:
    if ((undefined *)puVar14[-1] == &UNK_10dff6d58) {
      uVar8 = *puVar14;
      goto LAB_10975197c;
    }
  }
  uVar8 = 0;
LAB_10975197c:
  (*(code *)*puVar13)(piVar5,param_1,uVar8);
  goto LAB_10975198c;
}



/* Entry: 109751ad4; end: 109751f27;  */

undefined8
FUN_109751ad4(long param_1,long param_2,int param_3,long *param_4,uint *param_5,long *param_6,
             uint *param_7,uint *param_8)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  double *pdVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  char cVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  int iVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar40;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if ((undefined *)plVar7[-1] == &UNK_10dff6d4c) {
        lVar12 = *plVar7;
        goto LAB_109751b50;
      }
      plVar7 = plVar7 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar12 = 0;
LAB_109751b50:
  FUN_1096f6e38();
  FUN_1096f7104();
  FUN_1096f69f4(param_1);
  FUN_10970fc5c(lVar12,param_1,0,0,0);
  uVar40 = *(undefined8 *)(lVar12 + 0x28);
  if ((param_2 != 0) && (param_3 < 0)) {
    lVar12 = param_2;
    _strlen();
    param_3 = (int)lVar12;
  }
  uVar2 = *param_5;
  uVar13 = *(uint *)(param_1 + 0x60);
  *param_5 = uVar13;
  puVar11 = *(uint **)(param_1 + 0x70);
  if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
    if (*(int *)(param_1 + 0xe8) == 0) {
      *(undefined2 *)(param_1 + 0x5a) = 0x100;
      *(undefined4 *)(param_1 + 100) = 0;
      *(uint **)(param_1 + 0x78) = puVar11;
      if (uVar13 * 0x14 != 0) {
        _bzero(*(undefined8 *)(param_1 + 0x80));
      }
      goto LAB_109751bf0;
    }
    lVar12 = 0;
  }
  else {
LAB_109751bf0:
    lVar12 = *(long *)(param_1 + 0x80);
    uVar13 = *param_5;
  }
  iVar39 = (int)uVar40;
  cVar19 = (char)(iVar39 >> 0x1f);
  iVar14 = (int)((ulong)uVar40 >> 0x20);
  cVar28 = (char)(iVar14 >> 0x1f);
  if (uVar2 < uVar13 + 1) {
    if (uVar13 < 0x7fffffff) {
      lVar4 = (ulong)(uVar13 + 1) * 0x18;
      _malloc();
    }
    else {
      lVar4 = 0;
    }
    *param_4 = lVar4;
  }
  auVar37[5] = cVar19;
  auVar37._0_5_ = (int5)iVar39;
  auVar37[6] = cVar19;
  auVar37[7] = cVar19;
  auVar37[8] = (char)((ulong)uVar40 >> 0x20);
  auVar37[9] = (char)((ulong)uVar40 >> 0x28);
  auVar37[10] = (char)((ulong)uVar40 >> 0x30);
  auVar37[0xb] = (char)((ulong)uVar40 >> 0x38);
  auVar37[0xc] = cVar28;
  auVar37[0xd] = cVar28;
  auVar37[0xe] = cVar28;
  auVar37[0xf] = cVar28;
  auVar37 = NEON_scvtf(auVar37,8);
  if ((param_2 != 0) && (param_6 != (long *)0x0)) {
    uVar2 = *param_7;
    uVar5 = (ulong)(uVar13 != 0);
    *param_7 = (uint)(uVar13 != 0);
    uVar13 = *param_5;
    if (1 < uVar13) {
      puVar8 = puVar11 + 7;
      uVar10 = 1;
      do {
        if (*puVar8 != puVar8[-5]) {
          uVar13 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar13;
          *param_7 = uVar13;
          uVar13 = *param_5;
        }
        puVar8 = puVar8 + 5;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar13);
    }
    if (uVar2 < (uint)uVar5) {
      if ((int)(uint)uVar5 < 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = uVar5 << 3;
        _malloc();
      }
      *param_6 = lVar4;
    }
  }
  iVar39 = -(uint)(iVar39 == 0);
  iVar14 = -(uint)(iVar14 == 0);
  bVar25 = (byte)((uint)iVar14 >> 8);
  bVar26 = (byte)((uint)iVar14 >> 0x10);
  bVar27 = (byte)((uint)iVar14 >> 0x18);
  bVar23 = (byte)(iVar39 >> 0x1f);
  bVar32 = (byte)((long)CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14((byte)iVar14,iVar39
                                                                                )))) >> 0x3f);
  auVar34 = NEON_fmov(0x3ff0000000000000,8);
  dVar33 = auVar34._0_8_ / auVar37._0_8_;
  dVar36 = auVar34._8_8_ / auVar37._8_8_;
  bVar15 = SUB81(dVar33,0) & ~(byte)iVar39;
  bVar16 = (byte)((ulong)dVar33 >> 8) & ~(byte)((uint)iVar39 >> 8);
  bVar17 = (byte)((ulong)dVar33 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
  bVar18 = (byte)((ulong)dVar33 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
  bVar20 = (byte)((ulong)dVar33 >> 0x20) & ~bVar23;
  bVar21 = (byte)((ulong)dVar33 >> 0x28) & ~bVar23;
  bVar22 = (byte)((ulong)dVar33 >> 0x30) & ~bVar23;
  bVar23 = (byte)((ulong)dVar33 >> 0x38) & ~bVar23;
  bVar24 = SUB81(dVar36,0) & ~(byte)iVar14;
  bVar25 = (byte)((ulong)dVar36 >> 8) & ~bVar25;
  bVar26 = (byte)((ulong)dVar36 >> 0x10) & ~bVar26;
  bVar27 = (byte)((ulong)dVar36 >> 0x18) & ~bVar27;
  bVar29 = (byte)((ulong)dVar36 >> 0x20) & ~bVar32;
  bVar30 = (byte)((ulong)dVar36 >> 0x28) & ~bVar32;
  bVar31 = (byte)((ulong)dVar36 >> 0x30) & ~bVar32;
  bVar32 = (byte)((ulong)dVar36 >> 0x38) & ~bVar32;
  lVar4 = *param_4;
  if ((int)uVar13 < 1) {
    uVar5 = 0;
    auVar37 = ZEXT216(0);
  }
  else {
    uVar5 = (ulong)uVar13;
    auVar34 = ZEXT216(0);
    puVar6 = (undefined8 *)(lVar12 + 8);
    pdVar9 = (double *)(lVar4 + 8);
    puVar8 = puVar11;
    uVar10 = uVar5;
    do {
      uVar40 = puVar6[-1];
      auVar38._0_8_ = (long)(auVar34._0_4_ + (int)*puVar6);
      auVar38._8_8_ = (long)(auVar34._4_4_ - (int)((ulong)*puVar6 >> 0x20));
      auVar37 = NEON_scvtf(auVar38,8);
      pdVar9[-1] = (double)(ulong)*puVar8;
      pdVar9[1] = (double)CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(
                                                  bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)))))
                                                  )) * auVar37._8_8_ + 0.0;
      *pdVar9 = (double)CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(
                                                  bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))
                                                )) * auVar37._0_8_ + 0.0;
      iVar39 = auVar34._4_4_ - (int)((ulong)uVar40 >> 0x20);
      auVar34._0_4_ = auVar34._0_4_ + (int)uVar40;
      auVar34._4_4_ = iVar39;
      auVar34._8_8_ = 0;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      uVar10 = uVar10 - 1;
      pdVar9 = pdVar9 + 3;
      puVar8 = puVar8 + 5;
    } while (uVar10 != 0);
    auVar35._0_8_ = (long)auVar34._0_4_;
    auVar35._8_8_ = (long)iVar39;
    auVar37 = NEON_scvtf(auVar35,8);
  }
  puVar6 = (undefined8 *)(lVar4 + uVar5 * 0x18);
  *puVar6 = 0xffffffffffffffff;
  puVar6[2] = (long)((double)CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,
                                                  CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,
                                                  bVar24))))))) * auVar37._8_8_);
  puVar6[1] = (long)((double)CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,
                                                  CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,
                                                  bVar15))))))) * auVar37._0_8_);
  if (param_6 == (long *)0x0) {
    if (param_7 == (uint *)0x0) goto LAB_109751ef0;
  }
  else if ((param_2 != 0) && (*param_7 != 0)) {
    lVar12 = *param_6;
    if ((*param_7 & 0x1fffffff) != 0) {
      _bzero();
      lVar12 = *param_6;
    }
    uVar2 = *(uint *)(param_1 + 0x38);
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar3 = (uVar2 & 0xfffffffd) == 5;
    *param_8 = (uint)bVar3;
    iVar39 = (int)param_2;
    if (bVar3) {
      uVar2 = *param_5 - 2;
      if ((int)uVar2 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        lVar4 = (ulong)uVar2 + 1;
        puVar11 = puVar11 + (ulong)uVar2 * 5 + 7;
        do {
          uVar13 = puVar11[-5];
          uVar2 = *puVar11;
          if (uVar13 != uVar2) {
            param_2 = (param_2 + (ulong)uVar13) - (ulong)uVar2;
            *(uint *)(lVar12 + uVar5 * 8) = uVar13 - uVar2;
            uVar5 = (ulong)((int)uVar5 + 1);
          }
          lVar1 = lVar12 + uVar5 * 8;
          *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
          lVar1 = lVar4 + -1;
          bVar3 = 0 < lVar4;
          lVar4 = lVar1;
          puVar11 = puVar11 + -5;
        } while (lVar1 != 0 && bVar3);
      }
      *(int *)(lVar12 + uVar5 * 8) = (iVar39 + param_3) - (int)param_2;
    }
    else {
      if ((int)*param_5 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        puVar11 = puVar11 + 7;
        lVar4 = 1;
        do {
          uVar2 = *puVar11;
          uVar13 = puVar11[-5];
          if (uVar2 != uVar13) {
            param_2 = (param_2 + (ulong)uVar2) - (ulong)uVar13;
            *(uint *)(lVar12 + uVar5 * 8) = uVar2 - uVar13;
            uVar5 = (ulong)((int)uVar5 + 1);
          }
          puVar11 = puVar11 + 5;
          lVar1 = lVar12 + uVar5 * 8;
          *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)*param_5);
      }
      *(int *)(lVar12 + uVar5 * 8) = (iVar39 + param_3) - (int)param_2;
    }
    goto LAB_109751ef0;
  }
  *param_7 = 0;
LAB_109751ef0:
  func_0x0001096f6e98(param_1);
  return 0;
}



/* Entry: 109751f28; end: 109751fef;  */

undefined8 FUN_109751f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if ((undefined *)plVar4[-1] == &UNK_10dff6d4c) {
        lVar6 = *plVar4;
        goto LAB_109751f7c;
      }
      plVar4 = plVar4 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar6 = 0;
LAB_109751f7c:
  uVar1 = param_3;
  func_0x000109801590(1.0 / (double)*(int *)(lVar6 + 0x28),-1.0 / (double)*(int *)(lVar6 + 0x2c),
                      param_3);
  FUN_1097521ec();
  lVar5 = *(long *)(*(long *)(lVar6 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
  }
  (**(code **)(*(long *)(lVar6 + 0x90) + 0xa8))
            (lVar6,*(undefined8 *)(lVar6 + 0x98),param_2,uVar1,param_3,uVar2);
  func_0x0001098018d4(param_3);
  return 0;
}



/* Entry: 109751ff0; end: 1097521bf;  */

undefined8 FUN_109751ff0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if ((undefined *)plVar8[-1] == &UNK_10dff6d4c) {
        lVar11 = *plVar8;
        goto LAB_109752050;
      }
      plVar8 = plVar8 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar11 = 0;
LAB_109752050:
  puVar4 = (undefined *)0x1;
  _calloc(1,0x38);
  puVar1 = &UNK_10dffe2e0;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  FUN_1097f0ce0(param_1,puVar1);
  uVar12 = 0;
  if (puVar4 != (undefined *)0x0) {
    uVar12 = *(undefined4 *)(puVar4 + 0x24);
  }
  FUN_1097cf308(puVar1);
  lVar10 = param_3;
  func_0x000109801590(1.0 / (double)*(int *)(lVar11 + 0x28),-1.0 / (double)*(int *)(lVar11 + 0x2c));
  uVar7 = (ulong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) == 0) {
    uStack_48 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if ((undefined *)puVar9[-1] == &UNK_10dff6d60) {
        uStack_48 = *puVar9;
        goto LAB_1097520f4;
      }
      puVar9 = puVar9 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uStack_48 = 0;
  }
LAB_1097520f4:
  lVar5 = lRam0000000113735df8;
  lStack_58 = param_1;
  lStack_50 = param_3;
  if (lRam0000000113735df8 == 0) {
    do {
      FUN_1097523e4();
      if (lVar10 == 0) {
        if (lRam0000000113735df8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x113735df8,0x10);
          if (bVar3) {
            lRam0000000113735df8 = 0x1132e01e8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          lVar5 = 0x1132e01e8;
          if (cVar2 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
      }
      else {
        if (lRam0000000113735df8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x113735df8,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            lRam0000000113735df8 = lVar10;
          }
          lVar5 = lVar10;
          if (cVar2 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        if (lVar10 != 0x1132e01e8) {
          FUN_10970d344();
        }
      }
      lVar5 = lRam0000000113735df8;
    } while (lRam0000000113735df8 == 0);
  }
  lVar10 = *(long *)(*(long *)(lVar11 + 0x90) + 0x10);
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar10 + 0x90);
  }
  (**(code **)(*(long *)(lVar11 + 0x90) + 0xb0))
            (lVar11,*(undefined8 *)(lVar11 + 0x98),param_2,lVar5,&lStack_58,uVar12,0xff,uVar6);
  return 0;
}



/* Entry: 1097521c0; end: 1097521c7;  */

void FUN_1097521c0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar6 = *(long *)(param_1 + 2);
      if (lVar6 != 0) {
        FUN_109711500(lVar6 + 0x40,lVar6);
        _pthread_mutex_destroy(lVar6);
        _free(lVar6);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      puVar5 = *(undefined8 **)(param_1 + 0x68);
      while (puVar5 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar5[1];
        FUN_1096f8ed0(*puVar5);
        _free(puVar5);
        puVar5 = puVar2;
      }
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      FUN_1096f8f68(param_1 + 0x18);
      if (*(code **)(param_1 + 0x12) != (code *)0x0) {
        (**(code **)(param_1 + 0x12))(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(code **)(param_1 + 0xc) != (code *)0x0) {
        (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 10));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097521c8; end: 1097521eb;  */

undefined8 FUN_1097521c8(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 << 3);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 1097521ec; end: 109752353;  */

void FUN_1097521ec(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = lRam0000000113735df0;
  do {
    while( true ) {
      while( true ) {
        if (lVar3 != 0) {
          lRam0000000113735df0 = lVar3;
          return;
        }
        lRam0000000113735df0 = lVar3;
        func_0x000109752274();
        if (lVar3 == 0) break;
        if (lRam0000000113735df0 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x113735df0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            lRam0000000113735df0 = lVar3;
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        bVar2 = lVar3 != 0x1132dfdd0;
        lVar3 = lRam0000000113735df0;
        if (bVar2) {
          FUN_1096f86d8();
          lVar3 = lRam0000000113735df0;
        }
      }
      if (lRam0000000113735df0 == 0) break;
      ClearExclusiveLocal();
      lVar3 = lRam0000000113735df0;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113735df0,0x10);
    if (bVar2) {
      lRam0000000113735df0 = 0x1132dfdd0;
      cVar1 = ExclusiveMonitorsStatus();
    }
    lVar3 = lRam0000000113735df0;
  } while (cVar1 != '\0');
  return;
}



/* Entry: 109752354; end: 1097523e3;  */

ulong FUN_109752354(float param_1,float param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_4 + 4);
  if (*puVar2 == 0) {
    (**(code **)(*(long *)(param_4 + 0x20) + 0x198))((double)param_1,(double)param_2);
    if ((uint)param_4 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        *puVar2 = (uint)param_4;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return param_4;
}



/* Entry: 1097523e4; end: 1097525c3;  */

undefined4 * FUN_1097523e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0x90);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x1132e01e8;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar3 = PTR_FUN_1132e0250;
    puVar2 = PTR_FUN_1132e0248;
    puVar1 = PTR_FUN_1132e0238;
    *(undefined **)(puVar4 + 0x16) = PTR_FUN_1132e0240;
    *(undefined **)(puVar4 + 0x14) = puVar1;
    *(undefined **)(puVar4 + 0x1a) = puVar3;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    puVar1 = PTR_FUN_1132e0258;
    *(undefined **)(puVar4 + 0x1e) = PTR_FUN_1132e0260;
    *(undefined **)(puVar4 + 0x1c) = puVar1;
    puVar3 = PTR_FUN_1132e0210;
    puVar2 = PTR_FUN_1132e0208;
    puVar1 = PTR_FUN_1132e01f8;
    *(undefined **)(puVar4 + 6) = PTR_FUN_1132e0200;
    *(undefined **)(puVar4 + 4) = puVar1;
    *(undefined **)(puVar4 + 10) = puVar3;
    *(undefined **)(puVar4 + 8) = puVar2;
    puVar3 = PTR_FUN_1132e0230;
    puVar2 = PTR_FUN_1132e0228;
    puVar1 = PTR_FUN_1132e0218;
    *(undefined **)(puVar4 + 0xe) = PTR_FUN_1132e0220;
    *(undefined **)(puVar4 + 0xc) = puVar1;
    *(undefined **)(puVar4 + 0x12) = puVar3;
    *(undefined **)(puVar4 + 0x10) = puVar2;
  }
  FUN_10970c588(puVar4,FUN_1097525c4,0,0);
  FUN_10970c708(puVar4,FUN_109752650,0,0);
  FUN_10970c7f8(puVar4,FUN_109752658,0,0);
  FUN_10970c8ec(puVar4,0x1097526ec,0,0);
  FUN_10970c9dc(puVar4,FUN_109752768,0,0);
  FUN_10970cacc(puVar4,FUN_1097527d0,0,0);
  FUN_10970d070(puVar4,FUN_1097527d8,0,0);
  FUN_10970d160(puVar4,0x109752804,0,0);
  FUN_10970cbbc(puVar4,0x109752860,0,0);
  FUN_10970ccac(puVar4,FUN_1097528e8,0,0);
  FUN_10970cda0(puVar4,0x109752904,0,0);
  FUN_10970ce90(puVar4,0x109752910,0,0);
  FUN_10970cf80(puVar4,0x10975291c,0,0);
  FUN_10970d250(puVar4,0x109752928,0,0);
  if (puVar4[1] != 0) {
    puVar4[1] = 0;
  }
  _atexit(0x109752930);
  return puVar4;
}



/* Entry: 1097525c4; end: 10975264f;  */

void FUN_1097525c4(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  uVar1 = *(undefined8 *)(param_8 + 8);
  FUN_109801148(uVar1);
  dStack_80 = (double)param_1;
  dStack_78 = (double)param_2;
  dStack_70 = (double)param_3;
  dStack_68 = (double)param_4;
  dStack_60 = (double)param_5;
  dStack_58 = (double)param_6;
  func_0x0001098015dc(uVar1,&dStack_80);
  return;
}



/* Entry: 109752650; end: 109752657;  */

ulong FUN_109752650(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = *(ulong *)(param_2 + 8);
  puVar3 = (uint *)(uVar2 + 4);
  if (*puVar3 == 0) {
    (**(code **)(*(long *)(uVar2 + 0x20) + 0x28))();
    if ((uint)uVar2 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = (uint)uVar2;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 109752658; end: 109752767;  */

undefined8 FUN_109752658(undefined8 param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ulong auStack_48 [3];
  
  uVar1 = param_2[1];
  FUN_109801148(uVar1);
  func_0x000109801590((double)*(int *)(param_4 + 0x28),(double)*(int *)(param_4 + 0x2c),uVar1);
  auStack_48[0] = param_3 & 0xffffffff;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  func_0x000109801a90(uVar1,*param_2);
  func_0x0001098019d8(0x3ff0000000000000,uVar1);
  func_0x000109801b80(uVar1,auStack_48,1);
  func_0x000109801194(uVar1);
  return 1;
}



/* Entry: 109752768; end: 1097527cf;  */

ulong FUN_109752768(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                   long param_6)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = *(ulong *)(param_6 + 8);
  FUN_109801148(uVar2);
  func_0x0001098017a4((double)param_1,(double)param_2,(double)(param_3 - param_1),
                      (double)(param_4 - param_2),uVar2);
  puVar3 = (uint *)(uVar2 + 4);
  if (*puVar3 == 0) {
    (**(code **)(*(long *)(uVar2 + 0x20) + 0x228))();
    if ((uint)uVar2 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = (uint)uVar2;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 1097527d0; end: 1097527d7;  */

ulong FUN_1097527d0(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = *(ulong *)(param_2 + 8);
  puVar3 = (uint *)(uVar2 + 4);
  if (*puVar3 == 0) {
    (**(code **)(*(long *)(uVar2 + 0x20) + 0x28))();
    if ((uint)uVar2 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = (uint)uVar2;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 1097527d8; end: 1097528e7;  */

ulong FUN_1097527d8(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = *(ulong *)(param_2 + 8);
  FUN_109801148(uVar2);
  puVar3 = (uint *)(uVar2 + 4);
  if (*puVar3 == 0) {
    (**(code **)(*(long *)(uVar2 + 0x20) + 0x30))(uVar2,0x3000);
    if ((uint)uVar2 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = (uint)uVar2;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 1097528e8; end: 109752977;  */

undefined8
FUN_1097528e8(float param_1,undefined8 param_2,long param_3,int *param_4,ulong param_5,ulong param_6
             ,int param_7,int *param_8)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined8 uVar5;
  code **ppcVar6;
  int *piStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_8 == (int *)0x0) {
    return 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 8);
  if (param_7 == 0x42475241) {
    if ((uint)param_4[6] < (uint)((int)param_5 * 4 * (int)param_6)) {
      return 0;
    }
    ppcVar3 = *(code ***)(param_4 + 4);
    FUN_1097d8784(ppcVar3,0,param_5,param_6);
    if (*param_4 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar2) {
          *param_4 = *param_4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < *(int *)(ppcVar3 + 3)) {
      FUN_1097c5634(ppcVar3 + 7,0,param_4,FUN_109750274);
    }
  }
  else {
    if (param_7 != 0x706e6720) {
      return 0;
    }
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    pcStack_90 = FUN_109750208;
    ppcVar3 = &pcStack_90;
    piStack_c0 = param_4;
    puStack_88 = (undefined1 *)&piStack_c0;
    func_0x0001097e69dc();
    if ((*ppcVar3 == (code *)0x0) || (*(int *)*ppcVar3 != 0)) {
      param_6 = 0;
      param_5 = param_6;
    }
    else {
      param_6 = (ulong)*(uint *)(ppcVar3 + 0x33);
      param_5 = param_6;
    }
  }
  FUN_109801148(uVar5);
  func_0x0001098017a4((double)*param_8,(double)param_8[1],(double)param_8[2],(double)param_8[3],
                      uVar5);
  func_0x000109801920(uVar5);
  ppcVar4 = ppcVar3;
  FUN_1097e45dc();
  if (*(int *)((long)ppcVar4 + 4) == 0) {
    ppcVar6 = (code **)ppcVar4[4];
    *(undefined4 *)(ppcVar4 + 7) = 3;
    for (; ppcVar6 != ppcVar4 + 4; ppcVar6 = (code **)*ppcVar6) {
      (*ppcVar6[-1])(ppcVar6 + -1,ppcVar4,4);
    }
  }
  pcStack_90 = (code *)(double)(param_5 & 0xffffffff);
  dStack_78 = (double)(param_6 & 0xffffffff);
  puStack_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1097e51d8(ppcVar4,&pcStack_90);
  param_8[2] = (int)((float)param_8[2] - param_1 * (float)param_8[3]);
  *param_8 = (int)((float)*param_8 - param_1 * (float)param_8[1]);
  uStack_b8 = 0;
  piStack_c0 = (int *)0x3ff0000000000000;
  dStack_b0 = (double)param_1;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0x3ff0000000000000;
  func_0x0001098015dc(uVar5,&piStack_c0);
  func_0x000109801544((double)*param_8,(double)param_8[1],uVar5);
  func_0x000109801590((double)param_8[2],(double)param_8[3],uVar5);
  func_0x0001098012c0(uVar5,ppcVar4);
  func_0x00010980183c(uVar5);
  FUN_1097e4880(ppcVar4);
  FUN_1097f61ac(ppcVar3);
  func_0x000109801194(uVar5);
  return 1;
}



/* Entry: 109752978; end: 109752a5f;  */

long FUN_109752978(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_4 == (ulong *)0x0) {
    return 6;
  }
  uVar6 = (uint)param_2;
  if (*(uint *)(param_1 + 0x20) <= uVar6) {
    return 0x10;
  }
  pcVar7 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
  uVar11 = (uint)param_3;
  if ((pcVar7 != (code *)0x0) && (((param_3 & 3) != 0 || ((uVar11 & 0xf0000) == 0x10000)))) {
    lVar4 = param_1;
    (*pcVar7)(param_1,param_2,1,param_3,param_4);
    if ((uint)lVar4 == 0) goto FUN_109752a60;
    if (((uint)lVar4 & 0xff) != 7) {
      return lVar4;
    }
  }
  if (param_1 == 0) {
    lVar4 = 0x23;
  }
  else if (param_4 == (ulong *)0x0) {
    lVar4 = 6;
  }
  else {
    lVar4 = 0x10;
    if (((uVar6 + 1 <= *(uint *)(param_1 + 0x20)) && (uVar6 != 0xffffffff)) &&
       (uVar6 < *(uint *)(param_1 + 0x20))) {
      pcVar7 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
      if ((pcVar7 != (code *)0x0) && (((param_3 & 3) != 0 || ((uVar11 & 0xf0000) == 0x10000)))) {
        lVar4 = param_1;
        (*pcVar7)(param_1,param_2,1,param_3,param_4);
        if ((uint)lVar4 == 0) {
FUN_109752a60:
          lVar4 = 1;
          if ((param_3 & 1) == 0) {
            if (*(long *)(param_1 + 0xa0) == 0) {
              return 0x24;
            }
            lVar3 = 0x20;
            if ((param_3 & 0x10) != 0) {
              lVar3 = 0x28;
            }
            uVar8 = *(ulong *)(*(long *)(param_1 + 0xa0) + lVar3);
            uVar1 = -uVar8;
            if (-1 < (long)uVar8) {
              uVar1 = uVar8;
            }
            do {
              uVar9 = *param_4;
              uVar2 = -uVar9;
              if (-1 < (long)uVar9) {
                uVar2 = uVar9;
              }
              uVar10 = uVar2 * uVar1 + 0x20 >> 6;
              uVar2 = -uVar10;
              if (-1 < (long)(uVar9 ^ uVar8)) {
                uVar2 = uVar10;
              }
              *param_4 = uVar2;
              lVar4 = lVar4 + -1;
              param_4 = param_4 + 1;
            } while (lVar4 != 0);
          }
          return 0;
        }
        if (((uint)lVar4 & 0xff) != 7) {
          return lVar4;
        }
      }
      if ((uVar11 >> 0x1d & 1) == 0) {
        lVar4 = 10;
        if ((param_3 & 1) != 0) {
          lVar4 = 0;
        }
        lVar12 = 1;
        lVar3 = 0x80;
        if ((param_3 & 0x10) != 0) {
          lVar3 = 0x88;
        }
        do {
          lVar5 = param_1;
          FUN_109752c30(param_1,param_2,uVar11 | 0x100);
          if ((int)lVar5 != 0) {
            return lVar5;
          }
          *param_4 = *(long *)(*(long *)(param_1 + 0x98) + lVar3) << lVar4;
          param_2 = (ulong)((int)param_2 + 1);
          lVar12 = lVar12 + -1;
          param_4 = param_4 + 1;
        } while (lVar12 != 0);
        lVar4 = 0;
      }
      else {
        lVar4 = 7;
      }
    }
  }
  return lVar4;
}



/* Entry: 109752a60; end: 109752ad3;  */

undefined8 FUN_109752a60(long param_1,ulong *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_4 & 1) == 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      return 0x24;
    }
    lVar3 = 0x20;
    if ((param_4 & 0x10) != 0) {
      lVar3 = 0x28;
    }
    if (param_3 != 0) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 0xa0) + lVar3);
      uVar1 = -uVar4;
      if (-1 < (long)uVar4) {
        uVar1 = uVar4;
      }
      uVar5 = (ulong)param_3;
      do {
        uVar6 = *param_2;
        uVar2 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar2 = uVar6;
        }
        uVar7 = uVar2 * uVar1 + 0x20 >> 6;
        uVar2 = -uVar7;
        if (-1 < (long)(uVar6 ^ uVar4)) {
          uVar2 = uVar7;
        }
        *param_2 = uVar2;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
  }
  return 0;
}



/* Entry: 109752ad4; end: 109752c2f;  */

long FUN_109752ad4(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    lVar4 = 0x23;
  }
  else if (param_5 == (ulong *)0x0) {
    lVar4 = 6;
  }
  else {
    uVar6 = (uint)param_2;
    uVar7 = (uint)param_3;
    lVar4 = 0x10;
    if (((uVar7 + uVar6 <= *(uint *)(param_1 + 0x20)) && (!CARRY4(uVar7,uVar6))) &&
       (uVar6 < *(uint *)(param_1 + 0x20))) {
      if (uVar7 != 0) {
        pcVar9 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
        uVar6 = (uint)param_4;
        if ((pcVar9 != (code *)0x0) && (((param_4 & 3) != 0 || ((uVar6 & 0xf0000) == 0x10000)))) {
          lVar4 = param_1;
          (*pcVar9)(param_1,param_2,param_3,param_4,param_5);
          if ((uint)lVar4 == 0) {
            if ((param_4 & 1) == 0) {
              if (*(long *)(param_1 + 0xa0) == 0) {
                return 0x24;
              }
              lVar4 = 0x20;
              if ((param_4 & 0x10) != 0) {
                lVar4 = 0x28;
              }
              if (uVar7 != 0) {
                uVar8 = *(ulong *)(*(long *)(param_1 + 0xa0) + lVar4);
                uVar1 = -uVar8;
                if (-1 < (long)uVar8) {
                  uVar1 = uVar8;
                }
                param_3 = param_3 & 0xffffffff;
                do {
                  uVar10 = *param_5;
                  uVar2 = -uVar10;
                  if (-1 < (long)uVar10) {
                    uVar2 = uVar10;
                  }
                  uVar11 = uVar2 * uVar1 + 0x20 >> 6;
                  uVar2 = -uVar11;
                  if (-1 < (long)(uVar10 ^ uVar8)) {
                    uVar2 = uVar11;
                  }
                  *param_5 = uVar2;
                  param_3 = param_3 - 1;
                  param_5 = param_5 + 1;
                } while (param_3 != 0);
              }
            }
            return 0;
          }
          if (((uint)lVar4 & 0xff) != 7) {
            return lVar4;
          }
        }
        if ((uVar6 >> 0x1d & 1) != 0) {
          return 7;
        }
        lVar4 = 10;
        if ((param_4 & 1) != 0) {
          lVar4 = 0;
        }
        param_3 = param_3 & 0xffffffff;
        lVar3 = 0x80;
        if ((param_4 & 0x10) != 0) {
          lVar3 = 0x88;
        }
        do {
          lVar5 = param_1;
          FUN_109752c30(param_1,param_2,uVar6 | 0x100);
          if ((int)lVar5 != 0) {
            return lVar5;
          }
          *param_5 = *(long *)(*(long *)(param_1 + 0x98) + lVar3) << lVar4;
          param_2 = (ulong)((int)param_2 + 1);
          param_3 = param_3 - 1;
          param_5 = param_5 + 1;
        } while (param_3 != 0);
      }
      lVar4 = 0;
    }
  }
  return lVar4;
}



/* Entry: 109752c30; end: 1097531c7;  */

long * FUN_109752c30(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  long *plVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  ushort *puVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  byte bVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) ||
     (plVar15 = *(long **)(param_1 + 0x98), plVar15 == (long *)0x0)) {
    return (long *)0x23;
  }
  FUN_109753e5c(plVar15);
  plVar15[0x1a] = 0;
  plVar15[0x19] = 0;
  *(undefined4 *)(plVar15 + 3) = 0;
  plVar15[7] = 0;
  plVar15[6] = 0;
  plVar15[9] = 0;
  plVar15[8] = 0;
  plVar15[0xb] = 0;
  plVar15[10] = 0;
  plVar15[0xd] = 0;
  plVar15[0xc] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x13] = 0;
  *(undefined4 *)(plVar15 + 0x14) = 0;
  *(undefined1 *)((long)plVar15 + 0xb2) = 0;
  plVar15[0x18] = 0;
  *(undefined4 *)(plVar15 + 0x1e) = 0;
  plVar15[0x20] = 0;
  plVar15[0x21] = 0;
  plVar15[0x1f] = 0;
  if ((*(byte *)(plVar15[1] + 0x12) & 1) == 0) {
    plVar15[0x24] = 0;
  }
  else {
    lVar19 = plVar15[0x25];
    uVar16 = *(uint *)(lVar19 + 8);
    if ((uVar16 >> 1 & 1) != 0) {
      plVar17 = (long *)plVar15[0x24];
      if (*plVar17 != 0) {
        (**(code **)(*(long *)(plVar15[1] + 0xb8) + 0x10))();
        lVar19 = plVar15[0x25];
        uVar16 = *(uint *)(lVar19 + 8);
      }
      *plVar17 = 0;
      *(uint *)(lVar19 + 8) = uVar16 & 0xfffffffd;
    }
  }
  pauVar20 = (undefined1 (*) [16])(plVar15 + 0xe);
  plVar15[0xf] = 0;
  *(undefined8 *)*pauVar20 = 0;
  *(undefined4 *)(plVar15 + 0x12) = 0;
  plVar15[0x11] = 0;
  plVar15[0x10] = 0;
  plVar15[0x22] = 0;
  plVar15[0x23] = 0;
  plVar18 = *(long **)(param_1 + 0xb0);
  plVar17 = *(long **)(plVar18[1] + 0x130);
  if ((*(short *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) ||
     (*(short *)(*(long *)(param_1 + 0xa0) + 0x1a) == 0)) {
    param_3 = param_3 | 1;
  }
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x801;
  }
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffff0 | param_3 & 1 | 10;
  }
  if ((param_3 & 0x400000) != 0) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((plVar17 == (long *)0x0) || ((param_3 & 0x8002) != 0)) ||
     (((*(ulong *)(param_1 + 0x10) & 0x2001) != 1 ||
      (((param_3 >> 0xb & 1) == 0 &&
       (((*(long **)(param_1 + 0xf0))[2] == 0) == (**(long **)(param_1 + 0xf0) == 0))))))) {
LAB_109752f28:
    plVar17 = plVar15;
    (**(code **)(plVar18[3] + 0x90))(plVar15,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    if ((int)plVar17 != 0) {
      return plVar17;
    }
    if ((int)plVar15[0x12] == 0x6f75746c) {
      uVar4 = *(ushort *)((long)plVar15 + 0xca);
      uVar3 = *(ushort *)(plVar15 + 0x19);
      uVar24 = (ulong)uVar3;
      if ((uVar4 != 0) || (uVar3 != 0)) {
        if (uVar4 == 0) {
          return (long *)0x14;
        }
        if (uVar3 == 0) {
          return (long *)0x14;
        }
        puVar14 = (ushort *)plVar15[0x1c];
        uVar16 = 0xffffffff;
        do {
          uVar3 = *puVar14;
          if ((uint)uVar4 <= (uint)uVar3 || (int)(uint)uVar3 <= (int)uVar16) {
            return (long *)0x14;
          }
          uVar24 = uVar24 - 1;
          puVar14 = puVar14 + 1;
          uVar16 = (uint)uVar3;
        } while (uVar24 != 0);
        if (uVar4 - 1 != (uint)uVar3) {
          return (long *)0x14;
        }
      }
      if ((param_3 >> 1 & 1) == 0) {
        FUN_1097546cc(plVar15,param_3 >> 4 & 1);
      }
    }
LAB_109752f80:
    plVar17 = (long *)0x0;
  }
  else {
    if (((param_3 >> 5 & 1) == 0) && ((*(byte *)(*plVar18 + 1) >> 2 & 1) != 0)) {
      plVar10 = plVar18;
      (**(code **)(*plVar18 + 0x40))(plVar18,&UNK_10f57f6e5);
      _strstr();
      if (plVar10 == (long *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = (int)plVar18[7] == 1;
      }
      if ((((param_3 & 0xf0000) != 0x10000) || (bVar9 || (*(byte *)(*plVar18 + 1) >> 3 & 1) != 0))
         && ((((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0 ||
              (((*(long *)(param_1 + 0x4f8) == 0 || (*(short *)(param_1 + 0x1e6) != 0)) ||
               (*(long *)(param_1 + 0x458) != 0)))) || (*(long *)(param_1 + 0x468) != 0))))
      goto LAB_109752f28;
    }
    if (((((param_3 >> 0x18 & 1) == 0) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) &&
        ((plVar10 = plVar15,
         (**(code **)(plVar18[3] + 0x90))
                   (plVar15,*(undefined8 *)(param_1 + 0xa0),param_2,param_3 | 0x800000),
         (int)plVar10 == 0 && ((int)plVar15[0x12] == 0x53564720)))) ||
       (((((param_3 >> 3 & 1) == 0 && (((uint)*(undefined8 *)(param_1 + 0x10) >> 1 & 1) != 0)) &&
         (plVar10 = plVar15,
         (**(code **)(plVar18[3] + 0x90))
                   (plVar15,*(undefined8 *)(param_1 + 0xa0),param_2,param_3 | 0x4000),
         (int)plVar10 == 0)) && ((int)plVar15[0x12] == 0x62697473)))) goto LAB_109752f80;
    lVar19 = *(long *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(lVar19 + 0x30);
    *(undefined4 *)(lVar19 + 0x30) = 0;
    (**(code **)(*(long *)(*plVar17 + 0x28) + 0x18))
              (plVar17,plVar15,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    *(undefined4 *)(lVar19 + 0x30) = uVar2;
  }
  if ((param_3 >> 4 & 1) == 0) {
    lVar19 = 0;
    lVar13 = plVar15[10];
  }
  else {
    lVar13 = 0;
    lVar19 = plVar15[0xd];
  }
  plVar15[0x10] = lVar13;
  plVar15[0x11] = lVar19;
  if (((param_3 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    auVar5 = *pauVar20;
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x28);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x20);
    lVar19 = MP_INT_ABS(uVar6);
    lVar13 = MP_INT_ABS(uVar7);
    lVar26 = MP_INT_ABS(auVar5._0_8_);
    lVar27 = MP_INT_ABS(auVar5._8_8_);
    uVar24 = lVar19 * lVar26 + 0x20U >> 6;
    uVar25 = lVar13 * lVar27 + 0x20U >> 6;
    bVar23 = (byte)((ulong)uVar6 >> 0x38) ^ auVar5[7];
    auVar21._0_8_ = -(ulong)((char)bVar23 < '\0');
    auVar21._8_8_ =
         -(ulong)((long)(CONCAT18((byte)((ulong)uVar7 >> 0x38) ^ auVar5[0xf],
                                  CONCAT17((byte)((ulong)uVar7 >> 0x30) ^ auVar5[0xe],
                                           CONCAT16((byte)((ulong)uVar7 >> 0x28) ^ auVar5[0xd],
                                                    CONCAT15((byte)((ulong)uVar7 >> 0x20) ^
                                                             auVar5[0xc],
                                                             CONCAT14((byte)((ulong)uVar7 >> 0x18) ^
                                                                      auVar5[0xb],
                                                                      CONCAT13((byte)((ulong)uVar7
                                                                                     >> 0x10) ^
                                                                               auVar5[10],
                                                                               CONCAT12((byte)((
                                                  ulong)uVar7 >> 8) ^ auVar5[9],
                                                  CONCAT11((byte)uVar7 ^ auVar5[8],bVar23)))))))) >>
                        8) < 0);
    lVar19 = -uVar25;
    auVar5[8] = (char)lVar19;
    auVar5._0_8_ = -uVar24;
    auVar5[9] = (char)((ulong)lVar19 >> 8);
    auVar5[10] = (char)((ulong)lVar19 >> 0x10);
    auVar5[0xb] = (char)((ulong)lVar19 >> 0x18);
    auVar5[0xc] = (char)((ulong)lVar19 >> 0x20);
    auVar5[0xd] = (char)((ulong)lVar19 >> 0x28);
    auVar5[0xe] = (char)((ulong)lVar19 >> 0x30);
    auVar5[0xf] = (char)((ulong)lVar19 >> 0x38);
    auVar8._8_8_ = uVar25;
    auVar8._0_8_ = uVar24;
    auVar22._8_8_ = uVar25;
    auVar22._0_8_ = uVar24;
    auVar22 = auVar22 ^ (auVar8 ^ auVar5) & auVar21;
    plVar15[0xf] = auVar22._8_8_;
    *(long *)*pauVar20 = auVar22._0_8_;
  }
  if ((param_3 >> 0xb & 1) != 0) goto LAB_109753124;
  lVar19 = *(long *)(param_1 + 0xf0);
  uVar16 = *(uint *)(lVar19 + 0x30);
  if (uVar16 == 0) goto LAB_109753124;
  lVar13 = *(long *)(*(long *)(plVar15[1] + 0xb0) + 8);
  plVar18 = *(long **)(lVar13 + 0x128);
  if (plVar18 == (long *)0x0) {
    iVar12 = (int)plVar15[0x12];
LAB_1097530a4:
    for (lVar13 = *(long *)(lVar13 + 0x118); lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
      plVar18 = *(long **)(lVar13 + 0x10);
      if ((int)plVar18[4] == iVar12) goto LAB_10975303c;
    }
    if (iVar12 == 0x6f75746c) {
      if ((uVar16 & 1) != 0) {
        FUN_10975478c(plVar15 + 0x19,lVar19);
        uVar16 = *(uint *)(lVar19 + 0x30);
      }
      if (((uVar16 >> 1 & 1) != 0) && (uVar4 = *(ushort *)((long)plVar15 + 0xca), uVar4 != 0)) {
        uVar16 = 0;
        lVar13 = *(long *)(lVar19 + 0x20);
        lVar26 = *(long *)(lVar19 + 0x28);
        plVar18 = (long *)plVar15[0x1a];
        do {
          plVar18[1] = plVar18[1] + lVar26;
          *plVar18 = *plVar18 + lVar13;
          uVar16 = uVar16 + 1;
          plVar18 = plVar18 + 2;
        } while (uVar16 < uVar4);
      }
    }
  }
  else {
    iVar12 = (int)plVar15[0x12];
    if ((int)plVar18[4] != iVar12) goto LAB_1097530a4;
LAB_10975303c:
    (**(code **)(plVar18[3] + 0x58))(plVar18,plVar15,lVar19,lVar19 + 0x20);
    plVar17 = plVar18;
  }
  FUN_1097547e4(plVar15 + 0x10,lVar19);
LAB_109753124:
  *(int *)(plVar15 + 3) = (int)param_2;
  *(uint *)(plVar15[0x25] + 0x48) = param_3;
  if ((int)plVar17 == 0) {
    if ((param_3 & 1) == 0) {
      if ((int)plVar15[0x12] == 0x62697473) {
        return (long *)0x0;
      }
      if ((int)plVar15[0x12] == 0x636f6d70) {
        return (long *)0x0;
      }
      uVar16 = param_3 >> 0x10 & 0xf;
      uVar1 = param_3 >> 0xb & 2;
      if (uVar16 != 0) {
        uVar1 = uVar16;
      }
      if ((param_3 >> 2 & 1) != 0) {
        if (plVar15[1] == 0) {
          return (long *)0x6;
        }
        lVar19 = *(long *)(*(long *)(plVar15[1] + 0xb0) + 8);
        if ((*(byte *)(plVar15[0x25] + 0x4a) >> 4 & 1) != 0) {
          lVar13 = plVar15[1];
          uVar16 = *(uint *)(plVar15 + 3);
          if ((((lVar13 != 0) && (uVar16 < *(uint *)(lVar13 + 0x20))) &&
              ((*(byte *)(lVar13 + 0x10) >> 3 & 1) != 0)) &&
             ((pcVar11 = *(code **)(*(long *)(lVar13 + 0x370) + 0x118), pcVar11 != (code *)0x0 &&
              (lVar26 = lVar13,
              (*pcVar11)(lVar13,uVar16,&uStack_64,&uStack_68,&stack0xffffffffffffffa0),
              (int)lVar26 != 0)))) {
            lVar26 = lVar13;
            FUN_109754390();
            if ((int)lVar26 == 0) {
              lVar26 = *(long *)(lVar13 + 0x370);
              while ((lVar27 = lVar13,
                     FUN_109752c30(lVar13,uStack_64,*(uint *)(plVar15[0x25] + 0x48) & 0xffefffff | 4
                                  ), (int)lVar27 == 0 &&
                     (lVar27 = lVar13,
                     (**(code **)(lVar26 + 0x148))
                               (lVar13,uStack_68,plVar15,*(undefined8 *)(lVar13 + 0x98)),
                     (int)lVar27 == 0))) {
                if ((*(uint *)(lVar13 + 0x20) <= uVar16) ||
                   ((((*(byte *)(lVar13 + 0x10) >> 3 & 1) == 0 ||
                     (pcVar11 = *(code **)(*(long *)(lVar13 + 0x370) + 0x118),
                     pcVar11 == (code *)0x0)) ||
                    (lVar27 = lVar13,
                    (*pcVar11)(lVar13,uVar16,&uStack_64,&uStack_68,&stack0xffffffffffffffa0),
                    (int)lVar27 == 0)))) {
                  *(undefined4 *)(plVar15 + 0x12) = 0x62697473;
                  FUN_109754628(*(undefined8 *)(lVar13 + 0x98));
                  return (long *)0x0;
                }
              }
              FUN_109754628(*(undefined8 *)(lVar13 + 0x98));
            }
            *(undefined4 *)(plVar15 + 0x12) = 0x6f75746c;
          }
        }
        iVar12 = (int)plVar15[0x12];
        if (iVar12 == 0x6f75746c) {
          plVar17 = *(long **)(lVar19 + 0x128);
          if (plVar17 == (long *)0x0) {
            plVar18 = (long *)0x13;
          }
          else {
            lVar13 = *(long *)(lVar19 + 0x118);
LAB_109756094:
            (*(code *)plVar17[0xf])(plVar17,plVar15,uVar1,0);
            plVar18 = plVar17;
            if ((int)plVar17 != 0) {
              plVar10 = plVar17;
              do {
                if (((uint)plVar10 & 0xff) != 0x13) {
                  return plVar10;
                }
                iVar12 = (int)plVar15[0x12];
                plVar18 = plVar17;
                if (lVar19 == 0) goto LAB_109756148;
                plVar18 = (long *)(lVar19 + 0x118);
                if (lVar13 != 0) {
                  plVar18 = (long *)(lVar13 + 8);
                }
                lVar13 = *plVar18;
                while( true ) {
                  plVar18 = plVar10;
                  if (lVar13 == 0) goto LAB_109756148;
                  plVar18 = *(long **)(lVar13 + 0x10);
                  if ((int)plVar18[4] == iVar12) break;
                  lVar13 = *(long *)(lVar13 + 8);
                }
                (*(code *)plVar18[0xf])(plVar18,plVar15,uVar1,0);
                plVar10 = plVar18;
              } while ((int)plVar18 != 0);
            }
          }
        }
        else {
          if (lVar19 != 0) {
            for (lVar13 = *(long *)(lVar19 + 0x118); lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
              plVar17 = *(long **)(lVar13 + 0x10);
              if ((int)plVar17[4] == iVar12) goto LAB_109756094;
            }
          }
          plVar18 = (long *)0x13;
LAB_109756148:
          uVar16 = 0;
          if (iVar12 != 0x62697473) {
            uVar16 = (uint)plVar18;
          }
          plVar18 = (long *)(ulong)uVar16;
        }
        return plVar18;
      }
      func_0x000109753ebc(plVar15,uVar1,0);
    }
    plVar17 = (long *)0x0;
  }
  return plVar17;
}



/* Entry: 1097531c8; end: 1097532ab;  */

ulong FUN_1097531c8(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lStack_40;
  long lStack_38;
  
  uVar6 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar5 = param_1[1];
    uVar8 = *param_1;
    if (uVar8 == 0) {
      uVar6 = -uVar5;
      if (-1 < (long)uVar5) {
        uVar6 = uVar5;
      }
    }
    else {
      uVar6 = -uVar8;
      if (-1 < (long)uVar8) {
        uVar6 = uVar8;
      }
      if (uVar5 != 0) {
        uVar1 = -uVar5;
        if (-1 < (long)uVar5) {
          uVar1 = uVar5;
        }
        uVar3 = (uint)uVar1 | (uint)uVar6;
        iVar7 = (int)LZCOUNT(uVar3);
        uVar6 = (ulong)(iVar7 - 2);
        uVar4 = 2 - iVar7;
        lStack_38 = (long)uVar5 >> ((ulong)uVar4 & 0x3f);
        lStack_40 = (long)uVar8 >> ((ulong)uVar4 & 0x3f);
        if (uVar3 >> 0x1e == 0) {
          lStack_38 = uVar5 << (uVar6 & 0x3f);
          lStack_40 = uVar8 << (uVar6 & 0x3f);
        }
        FUN_109757db4(&lStack_40);
        lVar2 = -lStack_40;
        if (-1 < lStack_40) {
          lVar2 = lStack_40;
        }
        uVar5 = lVar2 * 0xdbd95b16 + 0x40000000U >> 0x20;
        uVar8 = -uVar5;
        if (-1 < lStack_40) {
          uVar8 = uVar5;
        }
        if (uVar3 >> 0x1d == 0) {
          uVar6 = (long)(uVar8 + (1L << ((ulong)(iVar7 - 3) & 0x3f))) >> (uVar6 & 0x3f);
        }
        else {
          uVar6 = (ulong)(uint)((int)uVar8 << (ulong)(uVar4 & 0x1f));
        }
      }
    }
  }
  return uVar6;
}



/* Entry: 1097532ac; end: 1097533a7;  */

ulong FUN_1097532ac(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    uVar6 = 0x7fffffff;
  }
  else {
    uVar5 = -param_3;
    if (-1 < (long)param_3) {
      uVar5 = param_3;
    }
    lVar3 = -param_2;
    if (-1 < param_2) {
      lVar3 = param_2;
    }
    lVar4 = -param_1;
    if (-1 < param_1) {
      lVar4 = param_1;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (lVar3 * lVar4 + (uVar5 >> 1)) / uVar5;
    }
  }
  iVar2 = 1;
  if (param_1 < 0) {
    iVar2 = -1;
  }
  iVar1 = -iVar2;
  if (-1 < param_2) {
    iVar1 = iVar2;
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_3) {
    iVar2 = iVar1;
  }
  uVar5 = -uVar6;
  if (-1 < iVar2) {
    uVar5 = uVar6;
  }
  return uVar5;
}



/* Entry: 1097533a8; end: 1097534bb;  */

void FUN_1097533a8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    param_3 = param_3 << 0x10;
    lVar5 = *param_1;
    lVar7 = *param_2;
    lVar1 = lVar5;
    FUN_1097532ac(lVar5,lVar7,param_3);
    lVar9 = param_1[1];
    lVar10 = param_2[2];
    lVar2 = lVar9;
    FUN_1097532ac(lVar9,lVar10,param_3);
    lVar8 = param_2[1];
    FUN_1097532ac(lVar5,lVar8,param_3);
    lVar11 = param_2[3];
    FUN_1097532ac(lVar9,lVar11,param_3);
    lVar6 = param_1[2];
    lVar3 = lVar6;
    FUN_1097532ac(lVar6,lVar7,param_3);
    lVar4 = param_1[3];
    lVar7 = lVar4;
    FUN_1097532ac(lVar4,lVar10,param_3);
    FUN_1097532ac(lVar6,lVar8,param_3);
    FUN_1097532ac(lVar4,lVar11,param_3);
    *param_2 = lVar2 + lVar1;
    param_2[1] = lVar9 + lVar5;
    param_2[2] = lVar7 + lVar3;
    param_2[3] = lVar4 + lVar6;
  }
  return;
}



/* Entry: 1097534bc; end: 10975356b;  */

bool FUN_1097534bc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  bVar8 = false;
  if (param_1 != (ulong *)0x0) {
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    uVar7 = param_1[3];
    uVar9 = -uVar4;
    if (-1 < (long)uVar4) {
      uVar9 = uVar4;
    }
    uVar11 = -uVar6;
    if (-1 < (long)uVar6) {
      uVar11 = uVar6;
    }
    uVar1 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar1 = uVar5;
    }
    uVar2 = -uVar7;
    if (-1 < (long)uVar7) {
      uVar2 = uVar7;
    }
    uVar9 = uVar11 | uVar9 | uVar1 | uVar2;
    if (uVar9 - 0x80000000 < 0xffffffff80000001) {
      return false;
    }
    uVar11 = (ulong)(0x13 - (int)LZCOUNT((int)uVar9));
    if (0x1fff < uVar9) {
      uVar4 = (long)uVar4 >> (uVar11 & 0x3f);
      uVar6 = (long)uVar6 >> (uVar11 & 0x3f);
      uVar5 = (long)uVar5 >> (uVar11 & 0x3f);
      uVar7 = (long)uVar7 >> (uVar11 & 0x3f);
    }
    lVar10 = uVar4 * uVar7 - uVar6 * uVar5;
    lVar3 = -lVar10;
    if (-1 < lVar10) {
      lVar3 = lVar10;
    }
    bVar8 = uVar7 * uVar7 + uVar5 * uVar5 + uVar6 * uVar6 + uVar4 * uVar4 < (ulong)(lVar3 << 5);
  }
  return bVar8;
}



/* Entry: 10975356c; end: 109753603;  */

void FUN_10975356c(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) {
    param_3 = param_3 << 0x10;
    lVar3 = *param_1;
    lVar1 = lVar3;
    FUN_1097532ac(lVar3,*param_2,param_3);
    lVar4 = param_1[1];
    lVar2 = lVar4;
    FUN_1097532ac(lVar4,param_2[1],param_3);
    FUN_1097532ac(lVar3,param_2[2],param_3);
    FUN_1097532ac(lVar4,param_2[3],param_3);
    *param_1 = lVar2 + lVar1;
    param_1[1] = lVar4 + lVar3;
  }
  return;
}



/* Entry: 109753604; end: 1097537e3;  */

uint FUN_109753604(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar7 = (uint)*param_1;
  uVar8 = (uint)param_1[1];
  uVar4 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar4 = uVar7;
  }
  uVar5 = 0x10000;
  if (-1 >= (int)uVar7) {
    uVar5 = 0xffffffffffff0000;
  }
  uVar14 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar14 = uVar8;
  }
  uVar6 = 0x10000;
  if (-1 >= (int)uVar8) {
    uVar6 = 0xffffffffffff0000;
  }
  if (uVar7 == 0) {
    if (uVar8 == 0) {
      uVar14 = 0;
    }
    else {
      param_1[1] = uVar6;
    }
  }
  else if (uVar8 == 0) {
    *param_1 = uVar5;
    uVar14 = uVar4;
  }
  else {
    uVar2 = uVar4 + (uVar14 >> 1);
    if (uVar4 <= uVar14) {
      uVar2 = uVar14 + (uVar4 >> 1);
    }
    iVar15 = -0x10;
    if ((ulong)uVar2 < 0xaaaaaaaaUL >> LZCOUNT(uVar2)) {
      iVar15 = -0xf;
    }
    uVar1 = iVar15 + (int)LZCOUNT(uVar2);
    uVar13 = -uVar1;
    uVar9 = uVar4 << (ulong)(uVar1 & 0x1f);
    uVar10 = uVar14 << (ulong)(uVar1 & 0x1f);
    uVar3 = uVar9 + (uVar10 >> 1);
    if (uVar9 <= uVar10) {
      uVar3 = uVar10 + (uVar9 >> 1);
    }
    uVar2 = uVar2 >> (ulong)(uVar13 & 0x1f);
    uVar14 = uVar14 >> (ulong)(uVar13 & 0x1f);
    uVar4 = uVar4 >> (ulong)(uVar13 & 0x1f);
    if (0 < (int)uVar1) {
      uVar2 = uVar3;
      uVar14 = uVar10;
      uVar4 = uVar9;
    }
    iVar15 = 0x10000 - uVar2;
    do {
      uVar2 = uVar4 + ((int)(iVar15 * uVar4) >> 0x10);
      uVar3 = uVar14 + ((int)(iVar15 * uVar14) >> 0x10);
      iVar11 = uVar3 * uVar3 + uVar2 * uVar2;
      iVar12 = iVar11 + 0x1ff;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      uVar9 = -((iVar12 >> 9) * (iVar15 + 0x10000 >> 8));
      iVar15 = iVar15 + (uVar9 >> 0x10);
    } while (0xffff < (int)uVar9);
    uVar5 = -(ulong)uVar2;
    if (-1 < (int)uVar7) {
      uVar5 = (ulong)uVar2;
    }
    uVar6 = -(ulong)uVar3;
    if (-1 < (int)uVar8) {
      uVar6 = (ulong)uVar3;
    }
    *param_1 = uVar5;
    param_1[1] = uVar6;
    iVar12 = uVar3 * uVar14 + uVar2 * uVar4;
    iVar15 = iVar12 + 0xffff;
    if (-1 < iVar12) {
      iVar15 = iVar12;
    }
    iVar15 = (iVar15 >> 0x10) + 0x10000;
    if ((int)uVar1 < 1) {
      uVar14 = iVar15 << (ulong)(-uVar1 & 0x1f);
    }
    else {
      uVar14 = (uint)(iVar15 + (1 << (ulong)(uVar1 - 1 & 0x1f))) >> (ulong)(uVar1 & 0x1f);
    }
  }
  return uVar14;
}



/* Entry: 1097537e4; end: 109753853;  */

long FUN_1097537e4(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    param_1 = 0;
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 6;
    }
  }
  else {
    (**(code **)(param_1 + 8))();
    if (param_1 == 0) {
      uVar1 = 0x40;
    }
    else {
      _bzero(param_1,param_2);
      uVar1 = 0;
    }
  }
  *param_3 = uVar1;
  return param_1;
}



/* Entry: 109753854; end: 1097539a7;  */

void FUN_109753854(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[4] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x14] = 0;
  param_1[0x11] = param_1[8];
  param_1[0x10] = param_1[7];
  param_1[0x13] = param_1[10];
  param_1[0x12] = param_1[9];
  param_1[0xd] = param_1[4];
  param_1[0xc] = param_1[3];
  param_1[0xf] = param_1[6];
  param_1[0xe] = param_1[5];
  return;
}



/* Entry: 1097539a8; end: 109753a1f;  */

long FUN_1097539a8(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  int *param_6)

{
  int iStack_44;
  
  func_0x000109755910();
  if ((param_4 - param_3 != 0 && param_3 <= param_4) && (iStack_44 == 0 && param_1 != 0)) {
    _bzero(param_1 + param_3 * param_2,(param_4 - param_3) * param_2);
  }
  *param_6 = iStack_44;
  return param_1;
}



/* Entry: 109753a20; end: 109753a7b;  */

void FUN_109753a20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar1 = lVar1 + (ulong)*(ushort *)(param_1 + 0x1a) * 0x10;
  }
  *(long *)(param_1 + 0x68) = lVar1;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = lVar1 + (ulong)*(ushort *)(param_1 + 0x1a);
  }
  *(long *)(param_1 + 0x70) = lVar1;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = lVar1 + (ulong)*(ushort *)(param_1 + 0x18) * 2;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(ulong *)(param_1 + 0x88) =
         *(long *)(param_1 + 0x40) + (ulong)*(ushort *)(param_1 + 0x1a) * 0x10;
    *(ulong *)(param_1 + 0x90) =
         *(long *)(param_1 + 0x48) + (ulong)*(ushort *)(param_1 + 0x1a) * 0x10;
  }
  return;
}



/* Entry: 109753a7c; end: 109753c6b;  */

long * FUN_109753a7c(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint uStack_54;
  
  lVar6 = *param_1;
  plVar9 = param_1;
  func_0x000109753920();
  uStack_54 = (uint)plVar9;
  if (uStack_54 != 0) goto LAB_109753ab8;
  uVar1 = param_2 + (uint)*(ushort *)((long)param_1 + 0x1a) +
          (uint)*(ushort *)((long)param_1 + 0x62);
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = (ulong)uVar3;
  if (uVar3 < uVar1) {
    if (uVar1 >> 0x10 == 0) {
      uVar2 = uVar3 + (uVar3 >> 1);
      uVar4 = uVar1;
      if (uVar1 <= uVar2) {
        uVar4 = uVar2;
      }
      uVar2 = 0xffff;
      if (uVar4 + 7 >> 0x10 == 0) {
        uVar2 = uVar4 + 7 & 0xfffffff8;
      }
      uVar8 = (ulong)uVar2;
      lVar5 = lVar6;
      FUN_1097539a8(lVar6,0x10,uVar7,uVar8,param_1[4],&uStack_54);
      param_1[4] = lVar5;
      plVar9 = (long *)(ulong)uStack_54;
      if (uStack_54 != 0) goto LAB_109753ab8;
      lVar5 = lVar6;
      FUN_1097539a8(lVar6,1,uVar7,uVar8,param_1[5],&uStack_54);
      param_1[5] = lVar5;
      plVar9 = (long *)(ulong)uStack_54;
      if (uStack_54 != 0) goto LAB_109753ab8;
      if (*(char *)((long)param_1 + 0x14) != '\0') {
        lVar5 = lVar6;
        FUN_1097539a8(lVar6,0x10,uVar3 << 1,uVar2 << 1,param_1[8],&uStack_54);
        param_1[8] = lVar5;
        plVar9 = (long *)(ulong)uStack_54;
        if (uStack_54 != 0) goto LAB_109753ab8;
        _memmove(lVar5 + uVar8 * 0x10,lVar5 + uVar7 * 0x10,uVar7 << 4);
        param_1[9] = param_1[8] + uVar8 * 0x10;
      }
      *(uint *)(param_1 + 1) = uVar2;
      goto LAB_109753bd4;
    }
  }
  else {
LAB_109753bd4:
    plVar9 = param_1;
    func_0x000109753920();
    if ((int)plVar9 != 0) goto LAB_109753ab8;
    uVar4 = *(uint *)((long)param_1 + 0xc);
    uVar2 = param_3 + (uint)*(ushort *)(param_1 + 3) + (uint)*(ushort *)(param_1 + 0xc);
    if (uVar2 <= uVar4) {
      if (uVar1 <= uVar3) {
        return (long *)0x0;
      }
LAB_109753c5c:
      FUN_109753a20(param_1);
      return (long *)0x0;
    }
    if (uVar2 >> 0x10 == 0) {
      uVar1 = uVar4 + (uVar4 >> 1);
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      uVar1 = 0xffff;
      if (uVar2 + 3 >> 0x10 == 0) {
        uVar1 = uVar2 + 3 & 0xfffffffc;
      }
      FUN_1097539a8(lVar6,2,uVar4,uVar1,param_1[6],&uStack_54);
      param_1[6] = lVar6;
      plVar9 = (long *)(ulong)uStack_54;
      if (uStack_54 != 0) goto LAB_109753ab8;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      goto LAB_109753c5c;
    }
  }
  plVar9 = (long *)0xa;
LAB_109753ab8:
  func_0x000109753854(param_1);
  return plVar9;
}



/* Entry: 109753c6c; end: 109753e47;  */

int FUN_109753c6c(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iStack_24;
  
  uVar1 = (int)param_1[10] + param_2 + (int)param_1[0x13];
  if (*(uint *)(param_1 + 2) < uVar1) {
    lVar2 = *param_1;
    uVar1 = uVar1 + 1 & 0xfffffffe;
    FUN_1097539a8(lVar2,0x30,*(uint *)(param_1 + 2),uVar1,param_1[0xb],&iStack_24);
    param_1[0xb] = lVar2;
    if (iStack_24 == 0) {
      *(uint *)(param_1 + 2) = uVar1;
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + (ulong)*(uint *)(param_1 + 10) * 0x30;
      }
      iStack_24 = 0;
      param_1[0x14] = lVar2;
    }
  }
  else {
    iStack_24 = 0;
  }
  return iStack_24;
}



/* Entry: 109753e48; end: 109753e5b;  */

void FUN_109753e48(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  _longjmp(param_1,1);
  lVar1 = *(long *)(param_1 + 0x128);
  if ((lVar1 == 0) || (uVar2 = *(uint *)(lVar1 + 8), (uVar2 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      lVar1 = *(long *)(param_1 + 0x128);
      uVar2 = *(uint *)(lVar1 + 8);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(uint *)(lVar1 + 8) = uVar2 & 0xfffffffe;
  }
  return;
}



/* Entry: 109753e5c; end: 10975421b;  */

void FUN_109753e5c(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x128);
  if ((lVar1 == 0) || (uVar2 = *(uint *)(lVar1 + 8), (uVar2 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      lVar1 = *(long *)(param_1 + 0x128);
      uVar2 = *(uint *)(lVar1 + 8);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(uint *)(lVar1 + 8) = uVar2 & 0xfffffffe;
  }
  return;
}



/* Entry: 10975421c; end: 109754287;  */

long * FUN_10975421c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0)) {
    puVar4 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5 = puVar4 + 1;
      plVar3 = (long *)*puVar4;
      uVar2 = *(undefined8 *)(*plVar3 + 0x10);
      _strcmp(uVar2,param_2);
      if ((int)uVar2 == 0) {
        return plVar3;
      }
      puVar4 = puVar5;
    } while (puVar5 < (undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18));
  }
  return (long *)0x0;
}



/* Entry: 109754288; end: 10975430f;  */

void FUN_109754288(long param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar12;
  long *plVar11;
  
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 == 0) {
      lVar2 = 0;
      lVar4 = 0;
      lVar7 = 0;
      lVar9 = 0;
    }
    else {
      plVar12 = *(long **)(param_1 + 8);
      lVar4 = *plVar12;
      lVar2 = plVar12[1];
      lVar7 = lVar2;
      lVar9 = lVar4;
      if (uVar1 != 1) {
        lVar3 = lVar2;
        lVar5 = lVar4;
        lVar6 = lVar2;
        lVar8 = lVar4;
        plVar10 = plVar12 + 2;
        do {
          plVar11 = plVar10 + 2;
          lVar9 = *plVar10;
          lVar7 = plVar10[1];
          lVar4 = lVar9;
          if (lVar5 <= lVar9) {
            lVar4 = lVar5;
          }
          if (lVar9 <= lVar8) {
            lVar9 = lVar8;
          }
          lVar2 = lVar7;
          if (lVar3 <= lVar7) {
            lVar2 = lVar3;
          }
          if (lVar7 <= lVar6) {
            lVar7 = lVar6;
          }
          lVar3 = lVar2;
          lVar5 = lVar4;
          lVar6 = lVar7;
          lVar8 = lVar9;
          plVar10 = plVar11;
        } while (plVar11 < plVar12 + (ulong)uVar1 * 2);
      }
    }
    *param_2 = lVar4;
    param_2[1] = lVar2;
    param_2[2] = lVar9;
    param_2[3] = lVar7;
  }
  return;
}



/* Entry: 109754310; end: 10975438f;  */

undefined4 FUN_109754310(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uStack_34;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0xb8);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x128) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(long *)(param_1 + 0x128) + 8) = uVar1 | 1;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_1097537e4(lVar2,param_2,&uStack_34);
  *(long *)(param_1 + 0xa8) = lVar2;
  return uStack_34;
}



/* Entry: 109754390; end: 10975452b;  */

long * FUN_109754390(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uStack_54;
  
  if (param_1 == 0) {
    return (long *)0x23;
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    return (long *)0x6;
  }
  plVar1 = *(long **)(lVar6 + 0x10);
  plVar2 = plVar1;
  FUN_1097537e4(plVar1,*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x58),&uStack_54);
  if (uStack_54 != 0) {
    return (long *)(ulong)uStack_54;
  }
  plVar7 = *(long **)(param_1 + 0xb0);
  puVar5 = (undefined8 *)plVar7[2];
  lVar6 = plVar7[3];
  *plVar2 = plVar7[1];
  plVar2[1] = param_1;
  puVar3 = puVar5;
  (*(code *)puVar5[1])(puVar5,0x50);
  if (puVar3 == (undefined8 *)0x0) {
LAB_1097544f0:
    plVar7 = (long *)0x40;
LAB_1097544f4:
    FUN_10975452c(plVar2);
    (*(code *)plVar1[2])(plVar1,plVar2);
  }
  else {
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    plVar2[0x25] = (long)puVar3;
    if ((*(byte *)(*plVar7 + 1) >> 1 & 1) == 0) {
      puVar4 = puVar5;
      (*(code *)puVar5[1])(puVar5,0xb0);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[0x13] = 0;
        puVar4[0x12] = 0;
        puVar4[0x15] = 0;
        puVar4[0x14] = 0;
        puVar4[0xf] = 0;
        puVar4[0xe] = 0;
        puVar4[0x11] = 0;
        puVar4[0x10] = 0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        puVar4[0xd] = 0;
        puVar4[0xc] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        *puVar4 = puVar5;
        *puVar3 = puVar4;
        goto LAB_10975445c;
      }
      if ((*(byte *)(plVar2[1] + 0x12) & 1) == 0) goto LAB_1097544f0;
LAB_1097544b0:
      (*(code *)puVar5[1])(puVar5,0x80);
      if (puVar5 == (undefined8 *)0x0) goto LAB_1097544f0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      plVar2[0x24] = (long)puVar5;
    }
    else {
LAB_10975445c:
      if (*(code **)(lVar6 + 0x80) != (code *)0x0) {
        plVar7 = plVar2;
        (**(code **)(lVar6 + 0x80))();
        if ((*(byte *)(plVar2[1] + 0x12) & 1) != 0) goto LAB_1097544b0;
        if ((int)plVar7 == 0) goto LAB_1097544dc;
        goto LAB_1097544f4;
      }
      if ((*(byte *)(plVar2[1] + 0x12) & 1) != 0) goto LAB_1097544b0;
    }
LAB_1097544dc:
    plVar7 = (long *)0x0;
    plVar2[2] = *(long *)(param_1 + 0x98);
    *(long **)(param_1 + 0x98) = plVar2;
  }
  return plVar7;
}



/* Entry: 10975452c; end: 109754627;  */

void FUN_10975452c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0xb0);
  lVar1 = plVar4[2];
  lVar5 = plVar4[3];
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x12) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x128);
    if ((lVar2 != 0) && (uVar3 = *(uint *)(lVar2 + 8), (uVar3 >> 1 & 1) != 0)) {
      plVar6 = *(long **)(param_1 + 0x120);
      if (*plVar6 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1);
        lVar2 = *(long *)(param_1 + 0x128);
        uVar3 = *(uint *)(lVar2 + 8);
      }
      *plVar6 = 0;
      *(uint *)(lVar2 + 8) = uVar3 & 0xfffffffd;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(code **)(lVar5 + 0x88) != (code *)0x0) {
    (**(code **)(lVar5 + 0x88))(param_1);
  }
  FUN_109753e5c(param_1);
  plVar6 = *(long **)(param_1 + 0x128);
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 1) >> 1 & 1) == 0) {
      plVar4 = (long *)*plVar6;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        FUN_109753854(plVar4);
        (**(code **)(lVar5 + 0x10))(lVar5,plVar4);
        plVar6 = *(long **)(param_1 + 0x128);
      }
      *plVar6 = 0;
    }
    (**(code **)(lVar1 + 0x10))(lVar1);
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return;
}



/* Entry: 109754628; end: 1097546cb;  */

void FUN_109754628(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 0x98);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 0x10);
      if (lVar2 == param_1) {
        lVar3 = 0;
      }
      else {
        do {
          lVar3 = lVar2;
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == 0) {
            return;
          }
        } while (lVar2 != param_1);
      }
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x10);
      }
      *plVar1 = *(long *)(lVar2 + 0x10);
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      FUN_10975452c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001097546c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x10))(lVar4,param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097546cc; end: 10975478b;  */

void FUN_1097546cc(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 0x58) = *(ulong *)(param_1 + 0x58) & 0xffffffffffffffc0;
    uVar1 = *(ulong *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = uVar1 & 0xffffffffffffffc0;
    uVar4 = lVar2 + 0x3fU & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 0x40) = uVar3;
    *(ulong *)(param_1 + 0x48) = uVar4;
    *(ulong *)(param_1 + 0x30) =
         (uVar1 + *(long *)(param_1 + 0x30) + 0x3f & 0xffffffffffffffc0) - uVar3;
    *(ulong *)(param_1 + 0x38) = uVar4 - (lVar2 - *(long *)(param_1 + 0x38) & 0xffffffffffffffc0U);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x60);
    uVar4 = *(ulong *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x3fU & 0xffffffffffffffc0;
    uVar1 = uVar4 & 0xffffffffffffffc0;
    uVar3 = uVar5 & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 0x60) = uVar3;
    *(ulong *)(param_1 + 0x58) = uVar1;
    *(ulong *)(param_1 + 0x38) =
         (uVar5 + *(long *)(param_1 + 0x38) + 0x3f & 0xffffffffffffffc0) - uVar3;
    *(ulong *)(param_1 + 0x30) =
         (uVar4 + *(long *)(param_1 + 0x30) + 0x3f & 0xffffffffffffffc0) - uVar1;
  }
  *(ulong *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x20U & 0xffffffffffffffc0;
  return;
}



/* Entry: 10975478c; end: 1097547e3;  */

void FUN_10975478c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar2 = *(ulong *)(param_1 + 8), uVar2 != 0)) &&
     ((ulong)*(ushort *)(param_1 + 2) != 0)) {
    uVar1 = uVar2 + (ulong)*(ushort *)(param_1 + 2) * 0x10;
    do {
      FUN_1097547e4(uVar2,param_2);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1097547e4; end: 10975483f;  */

void FUN_1097547e4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar3 = *param_2 * *param_1;
    lVar4 = param_2[1] * param_1[1];
    lVar1 = param_2[2] * *param_1;
    lVar2 = param_2[3] * param_1[1];
    *param_1 = (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) +
               (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10);
    param_1[1] = (lVar2 + (lVar2 >> 0x3f) + 0x8000 >> 0x10) +
                 (lVar1 + (lVar1 >> 0x3f) + 0x8000 >> 0x10);
  }
  return;
}



/* Entry: 109754840; end: 109754ce3;  */

undefined8 * FUN_109754840(undefined8 *param_1,uint *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  short sVar11;
  short *psVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uStack_80;
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puStack_70 = (undefined8 *)0x0;
  uVar8 = param_3 & 0x7fffffff;
  if ((long)param_3 < 1) {
    uVar8 = -((ulong)(uint)-(int)param_3 & 0x7fffffff);
  }
  if (param_2 == (uint *)0x0) {
    return (undefined8 *)0x6;
  }
  uVar7 = *param_2;
  if ((uVar7 >> 1 & 1) == 0) {
    cVar3 = false;
  }
  else {
    cVar3 = *(long *)(param_2 + 8) != 0;
  }
  puStack_68 = (undefined8 *)0x0;
  cStack_71 = cVar3;
  if (param_1 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
    plVar15 = (long *)0x0;
    puVar17 = (undefined8 *)0x21;
    goto LAB_109754b10;
  }
  puVar14 = (undefined8 *)*param_1;
  uVar5 = uVar7 & 7;
  puVar16 = puVar14;
  if (uVar5 == 4) {
    (*(code *)puVar14[1])(puVar14,0x50);
    if (puVar16 == (undefined8 *)0x0) {
LAB_1097549d0:
      puVar16 = (undefined8 *)0x0;
      plVar15 = (long *)0x0;
      puVar17 = (undefined8 *)0x40;
    }
    else {
      puVar16[7] = 0;
      puVar16[6] = 0;
      puVar16[9] = 0;
      puVar16[8] = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16[5] = 0;
      puVar16[4] = 0;
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[7] = puVar14;
      puVar17 = puVar16;
      FUN_10975c750();
      if ((int)puVar17 == 0) goto LAB_109754934;
      (*(code *)puVar14[2])(puVar14,puVar16);
      plVar15 = (long *)0x0;
      puVar14 = (undefined8 *)0x0;
LAB_109754ac0:
      uVar7 = (uint)puVar17 & 0xff;
      puVar16 = puVar14;
      if (((uVar7 == 2) || (uVar7 == 0x55)) || (uVar7 == 0x51)) {
        puVar17 = (undefined8 *)0x2;
      }
    }
LAB_109754ae0:
    cVar3 = cStack_71;
    if (puStack_68 == (undefined8 *)0x0) goto LAB_109754b10;
  }
  else {
    if (uVar5 == 2) {
      puVar16 = *(undefined8 **)(param_2 + 8);
      if (puVar16 == (undefined8 *)0x0) goto LAB_109754950;
    }
    else {
      if (uVar5 != 1) {
LAB_109754950:
        if ((((uVar7 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) &&
           (pcVar9 = *(code **)(*(long *)(param_2 + 8) + 0x30), pcVar9 != (code *)0x0)) {
          (*pcVar9)();
        }
        puVar16 = (undefined8 *)0x0;
        plVar15 = (long *)0x0;
        puVar17 = (undefined8 *)0x6;
        goto LAB_109754ae0;
      }
      (*(code *)puVar14[1])(puVar14,0x50);
      if (puVar16 == (undefined8 *)0x0) goto LAB_1097549d0;
      puVar16[7] = 0;
      puVar16[6] = 0;
      puVar16[9] = 0;
      puVar16[8] = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16[5] = 0;
      puVar16[4] = 0;
      puVar16[1] = 0;
      *puVar16 = 0;
      uVar6 = *(undefined8 *)(param_2 + 4);
      *puVar16 = *(undefined8 *)(param_2 + 2);
      puVar16[1] = uVar6;
      puVar16[2] = 0;
      puVar16[8] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
    }
    puVar16[7] = puVar14;
LAB_109754934:
    puStack_68 = puVar16;
    if ((param_4 != (long *)0x0) || ((long)uVar8 < 0)) {
      plVar15 = (long *)*param_1;
      if (((*param_2 >> 3 & 1) == 0) ||
         (puVar16 = *(undefined8 **)(param_2 + 10), puVar16 == (undefined8 *)0x0)) {
        uVar7 = *(uint *)((long)param_1 + 0x14);
        if (uVar7 != 0) {
          puVar14 = (undefined8 *)0x0;
          puVar18 = param_1 + 3;
          puVar17 = (undefined8 *)0xb;
          do {
            puVar16 = (undefined8 *)*puVar18;
            if ((*(byte *)*puVar16 & 1) != 0) {
              if (((byte)*param_2 >> 4 & 1) == 0) {
                uVar5 = 0;
                uVar6 = 0;
              }
              else {
                uVar5 = param_2[0xc];
                uVar6 = *(undefined8 *)(param_2 + 0xe);
              }
              puVar17 = puVar16;
              FUN_109758110(puVar16,&puStack_68,&cStack_71,uVar8,uVar5,uVar6,&puStack_70);
              iVar19 = 0;
              if (((uint)puVar17 & 0xff) != 2) {
                iVar19 = 2;
              }
              iVar1 = 3;
              if ((uint)puVar17 != 0) {
                iVar1 = iVar19;
              }
              puVar14 = puVar16;
              if (iVar1 != 0) {
                if (iVar1 == 1) {
                  return puVar17;
                }
                if (iVar1 != 2) goto LAB_109754b88;
                break;
              }
            }
            puVar18 = puVar18 + 1;
          } while (puVar18 < param_1 + (ulong)uVar7 + 3);
          goto LAB_109754ac0;
        }
        puVar16 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)0xb;
      }
      else {
        if ((*(byte *)*puVar16 & 1) == 0) {
          puVar17 = (undefined8 *)0x20;
          goto LAB_109754aec;
        }
        if ((*param_2 >> 4 & 1) == 0) {
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          uVar7 = param_2[0xc];
          uVar6 = *(undefined8 *)(param_2 + 0xe);
        }
        puVar17 = puVar16;
        FUN_109758110(puVar16,&puStack_68,&cStack_71,uVar8,uVar7,uVar6,&puStack_70);
        if ((int)puVar17 == 0) {
LAB_109754b88:
          plVar4 = plVar15;
          (*(code *)plVar15[1])(plVar15,0x18);
          puVar17 = puStack_70;
          if (plVar4 != (long *)0x0) {
            plVar4[2] = (long)puStack_70;
            lVar10 = puStack_70[0x16];
            lVar13 = *(long *)(lVar10 + 0x28);
            *plVar4 = lVar13;
            plVar4[1] = 0;
            plVar15 = (long *)(lVar10 + 0x20);
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + 8);
            }
            *plVar15 = (long)plVar4;
            *(long **)(lVar10 + 0x28) = plVar4;
            if (-1 < (long)uVar8) {
              puVar16 = puStack_70;
              FUN_109754390();
              if (((int)puVar16 != 0) ||
                 (puVar16 = puVar17, FUN_109754eb8(puVar17,&uStack_80), (int)puVar16 != 0)) {
                FUN_109754ce4(puVar17);
                return puVar16;
              }
              puVar17[0x14] = uStack_80;
            }
            uVar7 = (uint)puVar17[2];
            if ((puVar17[2] & 1) != 0) {
              sVar11 = *(short *)((long)puVar17 + 0x8e);
              if (sVar11 < 0) {
                sVar11 = -sVar11;
                *(short *)((long)puVar17 + 0x8e) = sVar11;
              }
              if ((uVar7 >> 5 & 1) == 0) {
                *(short *)((long)puVar17 + 0x92) = sVar11;
              }
            }
            if (((uVar7 >> 1 & 1) != 0) &&
               (uVar8 = (ulong)*(uint *)(puVar17 + 7), 0 < (int)*(uint *)(puVar17 + 7))) {
              psVar12 = (short *)puVar17[8];
              do {
                if (*psVar12 < 0) {
                  sVar11 = -*psVar12;
                  *psVar12 = sVar11;
                  bVar2 = sVar11 < 0;
                }
                else {
                  bVar2 = false;
                }
                if (*(long *)(psVar12 + 8) < 0) {
                  *(long *)(psVar12 + 8) = -*(long *)(psVar12 + 8);
                }
                if (*(long *)(psVar12 + 0xc) < 0) {
                  *(long *)(psVar12 + 0xc) = -*(long *)(psVar12 + 0xc);
                }
                if (bVar2) {
                  psVar12[0] = 0;
                  psVar12[1] = 0;
                  psVar12[8] = 0;
                  psVar12[9] = 0;
                  psVar12[10] = 0;
                  psVar12[0xb] = 0;
                  psVar12[0xc] = 0;
                  psVar12[0xd] = 0;
                  psVar12[0xe] = 0;
                  psVar12[0xf] = 0;
                  psVar12[4] = 0;
                  psVar12[5] = 0;
                  psVar12[6] = 0;
                  psVar12[7] = 0;
                }
                psVar12 = psVar12 + 0x10;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar16 = (undefined8 *)puVar17[0x1e];
            *puVar16 = 0x10000;
            puVar16[1] = 0;
            puVar16[2] = 0;
            puVar16[3] = 0x10000;
            puVar16[4] = 0;
            puVar16[5] = 0;
            *(undefined4 *)(puVar16 + 0xe) = 1;
            *(undefined1 *)(puVar16 + 0xd) = 0xff;
            if (param_4 != (long *)0x0) {
              *param_4 = (long)puVar17;
              return (undefined8 *)0x0;
            }
            FUN_109754ce4(puVar17);
            return (undefined8 *)0x0;
          }
          puVar17 = (undefined8 *)0x40;
          goto LAB_109754b10;
        }
      }
      goto LAB_109754ae0;
    }
    plVar15 = (long *)0x0;
    puVar16 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)0x6;
  }
LAB_109754aec:
  puVar14 = puStack_68;
  lVar10 = puStack_68[7];
  if ((code *)puStack_68[6] != (code *)0x0) {
    (*(code *)puStack_68[6])(puStack_68);
  }
  if (cVar3 == '\0') {
    (**(code **)(lVar10 + 0x10))(lVar10,puVar14);
  }
LAB_109754b10:
  if (puStack_70 != (undefined8 *)0x0) {
    FUN_109754da0(plVar15,puStack_70,puVar16);
  }
  return puVar17;
}



/* Entry: 109754ce4; end: 109754d9f;  */

undefined8 FUN_109754ce4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar7 = *(long *)(param_1 + 0xb0);
  if (lVar7 != 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0xf0) + 0x70);
    iVar5 = iVar4 + -1;
    *(int *)(*(long *)(param_1 + 0xf0) + 0x70) = iVar5;
    if (iVar5 != 0 && 0 < iVar4) {
      return 0;
    }
    plVar6 = *(long **)(lVar7 + 0x20);
    if (plVar6 != (long *)0x0) {
      lVar8 = *(long *)(lVar7 + 0x10);
      do {
        if (plVar6[2] == param_1) {
          lVar3 = *plVar6;
          plVar6 = (long *)plVar6[1];
          puVar1 = (undefined8 *)(lVar7 + 0x20);
          if (lVar3 != 0) {
            puVar1 = (undefined8 *)(lVar3 + 8);
          }
          *puVar1 = plVar6;
          plVar2 = (long *)(lVar7 + 0x28);
          if (plVar6 != (long *)0x0) {
            plVar2 = plVar6;
          }
          *plVar2 = lVar3;
          (**(code **)(lVar8 + 0x10))(lVar8);
          FUN_109754da0(lVar8,param_1,lVar7);
          return 0;
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0x23;
}



/* Entry: 109754da0; end: 109754eb7;  */

void FUN_109754da0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xe0) != (code *)0x0) {
    (**(code **)(param_2 + 0xe0))(*(undefined8 *)(param_2 + 0xd8));
  }
  while (*(long *)(param_2 + 0x98) != 0) {
    FUN_109754628();
  }
  if (param_1 != 0) {
    lVar2 = *(long *)(param_2 + 200);
    while (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 8);
      FUN_109755024(param_1,*(undefined8 *)(lVar2 + 0x10),param_3);
      (**(code **)(param_1 + 0x10))(param_1,lVar2);
      lVar2 = lVar1;
    }
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  *(undefined8 *)(param_2 + 0xa0) = 0;
  if (*(code **)(param_2 + 0x60) != (code *)0x0) {
    (**(code **)(param_2 + 0x60))(param_2);
  }
  FUN_1097582ac(param_2,param_1);
  pcVar3 = *(code **)(lVar4 + 0x68);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_2);
  }
  lVar4 = *(long *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    lVar2 = *(long *)(lVar4 + 0x38);
    if (*(code **)(lVar4 + 0x30) != (code *)0x0) {
      (**(code **)(lVar4 + 0x30))(lVar4);
    }
    if (((uint)uVar5 >> 10 & 1) == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
    }
  }
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (*(long *)(param_2 + 0xf0) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
    *(undefined8 *)(param_2 + 0xf0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000109754eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2);
  return;
}


