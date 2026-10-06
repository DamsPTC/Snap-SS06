/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10972a520; end: 10972a6a3;  */

undefined8 FUN_10972a520(uint *param_1,uint param_2,int param_3)

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
  if (uVar5 < 0x38e38e4) {
    lVar1 = *(long *)(param_1 + 2);
    if (uVar5 == 0) {
      _free();
      lVar1 = 0;
    }
    else {
      _realloc(lVar1,uVar4 * 0x48);
      if (lVar1 == 0) {
        uVar3 = *param_1;
        if (uVar5 <= uVar3) {
          return 1;
        }
        goto LAB_10972a58c;
      }
    }
    *(long *)(param_1 + 2) = lVar1;
    uVar2 = 1;
  }
  else {
LAB_10972a58c:
    uVar2 = 0;
    uVar5 = ~uVar3;
  }
  *param_1 = uVar5;
  return uVar2;
}



/* Entry: 10972a6a4; end: 10972a74f;  */

undefined * FUN_10972a6a4(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  if (((ushort)((ushort)*param_1 >> 8 | (ushort)*param_1 << 8) == 1) &&
     (uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8,
     0x10000 < (uVar2 >> 0x10 | uVar2 << 0x10))) {
    uVar2 = (*(uint *)((long)param_1 + 10) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 10) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    puVar1 = &UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar1 = (undefined *)((long)param_1 + (ulong)uVar2);
    }
    return puVar1;
  }
  return &UNK_10dfe4888;
}



/* Entry: 10972a750; end: 10972a9e3;  */

byte FUN_10972a750(float param_1,ushort *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  
  bVar7 = 0;
  while (uVar1 = *param_2 >> 8 | *param_2 << 8, uVar1 == 5) {
    uVar2 = (uint)(byte)param_2[1] << 0x10 | (uint)*(byte *)((long)param_2 + 3) << 8 |
            (uint)(byte)param_2[2];
    puVar4 = (ushort *)((long)param_2 + (ulong)uVar2);
    param_2 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      param_2 = puVar4;
    }
    bVar7 = bVar7 ^ 1;
  }
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      uVar2 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if (uVar2 < (uint)param_4) {
        iVar6 = *(int *)(param_3 + (ulong)uVar2 * 4);
      }
      else {
        iVar6 = 0;
      }
      if ((int)((int)(short)((ushort)(byte)param_2[2] << 8) | (uint)*(byte *)((long)param_2 + 5)) <=
          iVar6) {
        bVar3 = iVar6 <= (int)((int)(short)((ushort)(byte)param_2[3] << 8) |
                              (uint)*(byte *)((long)param_2 + 7));
        goto LAB_10972a9a0;
      }
    }
    else if (uVar1 == 2) {
      uVar1 = param_2[1];
      uVar2 = (*(uint *)(param_2 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 2) & 0xff00ff) << 8;
      FUN_109726704(param_5,uVar2 >> 0x10 | uVar2 << 0x10,0);
      bVar3 = 0 < (int)(param_1 + (float)(int)(short)(uVar1 >> 8 | uVar1 << 8));
      goto LAB_10972a9a0;
    }
  }
  else if (uVar1 == 3) {
    uVar8 = (ulong)(byte)param_2[1];
    if (uVar8 == 0) goto LAB_10972a974;
    uVar2 = (uint)*(byte *)((long)param_2 + 3) << 0x10 | (uint)(byte)param_2[2] << 8 |
            (uint)*(byte *)((long)param_2 + 5);
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar4 = (ushort *)((long)param_2 + (ulong)uVar2);
    }
    FUN_10972a750(puVar4,param_3,param_4,param_5);
    if ((int)puVar4 != 0) {
      uVar9 = 0;
      puVar4 = param_2 + 4;
      do {
        if (uVar8 - 1 == uVar9) goto LAB_10972a974;
        uVar2 = (uint)(byte)puVar4[-1] << 0x10 | (uint)*(byte *)((long)puVar4 + -1) << 8 |
                (uint)(byte)*puVar4;
        puVar5 = (ushort *)&UNK_10dfe4888;
        if (uVar2 != 0) {
          puVar5 = (ushort *)((long)param_2 + (ulong)uVar2);
        }
        FUN_10972a750(puVar5,param_3,param_4,param_5);
        uVar9 = uVar9 + 1;
        puVar4 = (ushort *)((long)puVar4 + 3);
      } while (((ulong)puVar5 & 1) != 0);
      bVar3 = uVar8 <= uVar9;
      goto LAB_10972a9a0;
    }
  }
  else if ((uVar1 == 4) && (uVar8 = (ulong)(byte)param_2[1], uVar8 != 0)) {
    uVar2 = (uint)*(byte *)((long)param_2 + 3) << 0x10 | (uint)(byte)param_2[2] << 8 |
            (uint)*(byte *)((long)param_2 + 5);
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar4 = (ushort *)((long)param_2 + (ulong)uVar2);
    }
    FUN_10972a750(puVar4,param_3,param_4,param_5);
    if (((ulong)puVar4 & 1) == 0) {
      uVar9 = 0;
      puVar4 = param_2 + 4;
      do {
        if (uVar8 - 1 == uVar9) goto LAB_10972a99c;
        uVar2 = (uint)(byte)puVar4[-1] << 0x10 | (uint)*(byte *)((long)puVar4 + -1) << 8 |
                (uint)(byte)*puVar4;
        puVar5 = (ushort *)&UNK_10dfe4888;
        if (uVar2 != 0) {
          puVar5 = (ushort *)((long)param_2 + (ulong)uVar2);
        }
        FUN_10972a750(puVar5,param_3,param_4,param_5);
        uVar9 = uVar9 + 1;
        puVar4 = (ushort *)((long)puVar4 + 3);
      } while (((ulong)puVar5 & 1) == 0);
      bVar3 = uVar9 < uVar8;
      goto LAB_10972a9a0;
    }
LAB_10972a974:
    bVar3 = true;
    goto LAB_10972a9a0;
  }
LAB_10972a99c:
  bVar3 = false;
LAB_10972a9a0:
  return bVar7 ^ bVar3;
}



/* Entry: 10972a9e4; end: 10972aadf;  */

uint FUN_10972a9e4(ulong *param_1,uint param_2)

{
  if (((*param_1 >> ((ulong)(param_2 >> 4) & 0x3f) & 1) != 0) &&
     ((param_1[1] >> ((ulong)param_2 & 0x3f) & 1) != 0)) {
    return (uint)(param_1[2] >> ((ulong)(param_2 >> 9) & 0x3f)) & 1;
  }
  return 0;
}



/* Entry: 10972aae0; end: 10972ab0f;  */

bool FUN_10972aae0(undefined4 *param_1,int param_2,undefined8 param_3)

{
  func_0x000109729ab0(param_3,*param_1);
  return (int)param_3 == param_2;
}



/* Entry: 10972ab10; end: 10972ab47;  */

bool FUN_10972ab10(undefined4 *param_1,ushort param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dfe4888;
  if (param_2 != 0) {
    puVar1 = (undefined *)(param_3 + (ulong)param_2);
  }
  func_0x000109729bf8(puVar1,*param_1);
  return (int)puVar1 != -1;
}



/* Entry: 10972ab48; end: 10972ac87;  */

undefined8 FUN_10972ab48(ushort *param_1,long param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 auStack_74 [5];
  
  uVar7 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar7 != 0) {
    puVar8 = param_1;
    do {
      puVar8 = puVar8 + 1;
      uVar4 = (uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8;
      pbVar9 = &UNK_10dfe4888;
      if (uVar4 != 0) {
        pbVar9 = (byte *)((long)param_1 + (ulong)uVar4);
      }
      bVar2 = *pbVar9;
      bVar3 = pbVar9[1];
      puVar6 = (ushort *)(pbVar9 + (ulong)bVar2 * 0x200 + (ulong)bVar3 * 2 + 2);
      uVar4 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
      iVar1 = 0;
      if (uVar4 != 0) {
        iVar1 = uVar4 - 1;
      }
      if ((((*(byte *)((long)puVar6 + (ulong)(uint)(iVar1 << 1) + 2) == 0 &&
            *(byte *)((long)puVar6 + (ulong)(uint)(iVar1 << 1) + 3) == 0) &&
            (bVar2 == 0 && bVar3 == 0)) || ((*(byte *)(param_2 + 0x1c) & 1) == 0)) &&
         (*(uint *)(param_2 + 0x18) == uVar4)) {
        if (uVar4 < 2) {
          return 1;
        }
        pbVar9 = pbVar9 + (ulong)bVar2 * 0x200 + (ulong)bVar3 * 2 + 5;
        uVar10 = 1;
        while( true ) {
          auStack_74[0] = *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar10 * 4);
          puVar5 = auStack_74;
          (*param_3)(puVar5,*(ushort *)(pbVar9 + -1) >> 8 | *(ushort *)(pbVar9 + -1) << 8,param_4);
          if (((ulong)puVar5 & 1) == 0) break;
          pbVar9 = pbVar9 + 2;
          uVar10 = uVar10 + 1;
          if (uVar4 == uVar10) {
            return 1;
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return 0;
}



/* Entry: 10972ac88; end: 10972ad33;  */

void FUN_10972ac88(long *param_1,ulong param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_2;
  sVar2 = *(short *)((long)param_1 + (ulong)(uVar4 & 0xff) * 2 + 0x18);
  if ((sVar2 == -1) || ((uint)(int)sVar2 >> 3 != uVar4 >> 8)) {
    puVar1 = &UNK_10dfe4888;
    if ((undefined *)*param_1 != (undefined *)0x0) {
      puVar1 = (undefined *)*param_1;
    }
    puVar3 = &UNK_10dfe4888;
    if (3 < *(uint *)(puVar1 + 0x18)) {
      puVar3 = *(undefined **)(puVar1 + 0x10);
    }
    FUN_10972bfb4(puVar3,param_2);
    if (((*param_1 != 0) && (uVar4 >> 0x15 == 0)) && ((uint)puVar3 < 8)) {
      *(ushort *)((long)param_1 + (ulong)(uVar4 & 0xff) * 2 + 0x18) =
           (ushort)puVar3 | (ushort)(param_2 >> 5) & 0xfff8;
    }
  }
  return;
}



/* Entry: 10972ad34; end: 10972ada3;  */

undefined * FUN_10972ad34(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x17];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10972add0();
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
      FUN_10972ada4();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10972ada4; end: 10972adcf;  */

void FUN_10972ada4(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_10972bf68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 10972add0; end: 10972ae03;  */

void FUN_10972add0(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x218);
  if (lVar1 != 0) {
    FUN_10972ae04();
  }
  return;
}



/* Entry: 10972ae04; end: 10972b1e7;  */

undefined8 * FUN_10972ae04(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 auStack_a0 [2];
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  byte bStack_78;
  int iStack_74;
  uint *puStack_70;
  uint uStack_68;
  undefined2 uStack_64;
  
  _bzero(param_1,0x218);
  lVar12 = 0x18;
  do {
    *(undefined2 *)((long)param_1 + lVar12) = 0xffff;
    lVar12 = lVar12 + 2;
  } while (lVar12 != 0x218);
  auStack_a0[0] = 0;
  iStack_74 = 0;
  puStack_70 = (uint *)0x0;
  uStack_90 = 0;
  lStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  bStack_78 = 0;
  uStack_68 = 0x10000;
  uStack_64 = 0;
  uVar14 = param_2[6];
  if (uVar14 == 0xffffffff) {
    puVar10 = param_2;
    FUN_109710978();
    uVar14 = (uint)puVar10;
  }
  uStack_64 = CONCAT11(uStack_64._1_1_,1);
  puVar10 = (uint *)&UNK_10dfe4888;
  uStack_68 = uVar14;
  if (*(code **)(param_2 + 8) != (code *)0x0) {
    (**(code **)(param_2 + 8))(param_2,0x47444546,*(undefined8 *)(param_2 + 10));
    puVar10 = param_2;
    if (param_2 == (uint *)0x0) {
      puVar10 = (uint *)&UNK_10dfe4888;
    }
  }
  if (*puVar10 != 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar5) {
        *puVar10 = *puVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_70 = puVar10;
  bVar7 = 0;
  do {
    bStack_78 = bVar7;
    lVar12 = *(long *)(puStack_70 + 4);
    uStack_88._0_4_ = puStack_70[6];
    uStack_90 = lVar12 + (ulong)(uint)uStack_88;
    uVar14 = (uint)uStack_88 << 6;
    if (uVar14 < 0x4001) {
      uVar14 = 0x4000;
    }
    if (0x3ffffffe < uVar14) {
      uVar14 = 0x3fffffff;
    }
    uStack_88._4_4_ = 0x3fffffff;
    if ((uint)uStack_88 >> 0x1a == 0) {
      uStack_88._4_4_ = uVar14;
    }
    iStack_74 = 0;
    auStack_a0[0] = 0;
    uStack_80 = uStack_80 & 0xffffffff;
    lStack_98 = lVar12;
    if (lVar12 == 0) {
      FUN_1096f5a5c();
      puStack_70 = (uint *)0x0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
      goto LAB_10972afb8;
    }
    lVar8 = lVar12;
    FUN_10972b254(lVar12,auStack_a0);
    if ((int)lVar8 != 0) {
      if (iStack_74 == 0) {
        FUN_1096f5a5c(puStack_70);
        uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
      }
      else {
        iStack_74 = 0;
        FUN_10972b254(lVar12,auStack_a0);
        iVar6 = iStack_74;
        FUN_1096f5a5c(puStack_70);
        uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
        uVar14 = 0;
        if (iVar6 == 0) {
          uVar14 = (uint)lVar12;
        }
        if ((uVar14 & 1) == 0) goto LAB_10972afa8;
      }
      puStack_70 = (uint *)0x0;
      uStack_90 = 0;
      lStack_98 = 0;
      if (puVar10[1] != 0) {
        puVar10[1] = 0;
      }
      goto LAB_10972afb8;
    }
    if ((iStack_74 == 0) || ((bStack_78 & 1) != 0)) goto LAB_10972af94;
    if ((puVar10[1] == 0) || (puVar9 = puVar10, FUN_1096f59a0(), ((ulong)puVar9 & 1) == 0)) {
      uStack_90 = (ulong)puVar10[6];
      lStack_98 = 0;
      goto LAB_10972af94;
    }
    uStack_90 = *(long *)(puVar10 + 4) + (ulong)puVar10[6];
    bVar7 = 1;
  } while (*(long *)(puVar10 + 4) != 0);
  lStack_98 = 0;
LAB_10972af94:
  FUN_1096f5a5c(puStack_70);
  uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
LAB_10972afa8:
  puStack_70 = (uint *)0x0;
  uStack_90 = 0;
  lStack_98 = 0;
  FUN_1096f5a5c(puVar10);
  puVar10 = (uint *)&UNK_10dfe4888;
LAB_10972afb8:
  *param_1 = puVar10;
  FUN_109710c0c(auStack_a0);
  puVar10 = (uint *)&UNK_10dfe4888;
  if ((uint *)*param_1 != (uint *)0x0) {
    puVar10 = (uint *)*param_1;
  }
  puVar9 = (uint *)&UNK_10dfe4888;
  if (3 < puVar10[6]) {
    puVar9 = *(uint **)(puVar10 + 4);
  }
  FUN_10972b1e8();
  if (((ushort)((ushort)*puVar9 >> 8 | (ushort)*puVar9 << 8) == 1) &&
     (uVar14 = (uint)(*(ushort *)((long)puVar9 + 2) >> 8) |
               (*(ushort *)((long)puVar9 + 2) & 0xff00ff) << 8, uVar14 != 0)) {
    puVar10 = puVar9;
    do {
      puVar10 = puVar10 + 1;
      uVar11 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
      uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
      puVar3 = (uint *)&UNK_10dfe4888;
      if (uVar11 != 0) {
        puVar3 = (uint *)((long)puVar9 + (ulong)uVar11);
      }
      uVar11 = *(uint *)(param_1 + 1);
      if ((int)uVar11 < 0) {
LAB_10972b0f0:
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
        lVar12 = 0x11382ab30;
      }
      else {
        uVar1 = *(int *)((long)param_1 + 0xc) + 1;
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        uVar15 = uVar11;
        if ((int)uVar11 < (int)uVar1) {
          do {
            uVar15 = uVar15 + (uVar15 >> 1) + 8;
          } while (uVar15 < uVar2);
          if (0xaaaaaaa < uVar15) {
LAB_10972b0e8:
            *(uint *)(param_1 + 1) = ~uVar11;
            goto LAB_10972b0f0;
          }
          lVar12 = param_1[2];
          FUN_10972bf40(lVar12,uVar15);
          if (lVar12 == 0) {
            uVar11 = *(uint *)(param_1 + 1);
            if (uVar11 < uVar15) goto LAB_10972b0e8;
          }
          else {
            param_1[2] = lVar12;
            *(uint *)(param_1 + 1) = uVar15;
          }
        }
        uVar11 = *(uint *)((long)param_1 + 0xc);
        while (uVar11 < uVar2) {
          puVar13 = (undefined8 *)(param_1[2] + (ulong)uVar11 * 0x18);
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          uVar11 = *(int *)((long)param_1 + 0xc) + 1;
          *(uint *)((long)param_1 + 0xc) = uVar11;
        }
        *(uint *)((long)param_1 + 0xc) = uVar2;
        lVar12 = param_1[2] + (ulong)(uVar2 - 1) * 0x18;
      }
      FUN_10972bcd8(puVar3,lVar12);
    } while (puVar10 != puVar9 + uVar14);
  }
  return param_1;
}



/* Entry: 10972b1e8; end: 10972b253;  */

byte * FUN_10972b1e8(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  if (CONCAT11(*param_1,param_1[1]) == 1) {
    pbVar2 = &UNK_10dfe4888;
    if ((0x10001 < ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3] |
                   (uint)param_1[2] << 8)) &&
       (uVar1 = (uint)(*(ushort *)(param_1 + 0xc) >> 8) |
                (*(ushort *)(param_1 + 0xc) & 0xff00ff) << 8, uVar1 != 0)) {
      pbVar2 = param_1 + uVar1;
    }
  }
  else {
    pbVar2 = &UNK_10dfe4888;
  }
  return pbVar2;
}



/* Entry: 10972b254; end: 10972b757;  */

uint * FUN_10972b254(uint *param_1,long param_2)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar8 = param_1 + 1;
  if ((ulong)((long)puVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    if ((ushort)((ushort)*param_1 >> 8 | (ushort)*param_1 << 8) != 1) {
      return (uint *)0x1;
    }
    if ((ulong)((long)puVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
      FUN_10972b758(puVar8,param_2,param_1);
      if ((int)puVar8 == 0) {
        return puVar8;
      }
      if ((ulong)((long)(param_1 + 2) - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
      {
        uVar6 = (uint)(*(ushort *)((long)param_1 + 6) >> 8) |
                (*(ushort *)((long)param_1 + 6) & 0xff00ff) << 8;
        if (uVar6 != 0) {
          lVar1 = (long)param_1 + (ulong)uVar6;
          lVar9 = lVar1;
          FUN_10972ba4c(lVar1,param_2,lVar1);
          if (((((int)lVar9 == 0) ||
               (puVar13 = (ushort *)(lVar1 + 4),
               (ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar13 - *(long *)(param_2 + 8))))
              || ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar13 - *(long *)(param_2 + 8))
                 )) || ((uVar3 = (uint)*(byte *)(lVar1 + 2) << 9 | (uint)*(byte *)(lVar1 + 3) << 1,
                        (uint)(*(int *)(param_2 + 0x10) - (int)puVar13) < uVar3 ||
                        (iVar7 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar7,
                        iVar7 < 1)))) {
LAB_10972b3e8:
            if (0x1f < *(uint *)(param_2 + 0x2c)) {
              return (uint *)0x0;
            }
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
            if (*(char *)(param_2 + 0x28) != '\x01') {
              return (uint *)0x0;
            }
            *(undefined2 *)((long)param_1 + 6) = 0;
          }
          else {
            uVar3 = (uint)(*(ushort *)(lVar1 + 2) >> 8) | (*(ushort *)(lVar1 + 2) & 0xff00ff) << 8;
            uVar15 = (ulong)uVar3;
            if (uVar3 != 0) {
              lVar9 = (long)param_1 + (ulong)uVar6 + 6;
              do {
                if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar9 - *(long *)(param_2 + 8)))
                goto LAB_10972b3e8;
                uVar6 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
                if (uVar6 != 0) {
                  uVar16 = lVar1 + (ulong)uVar6;
                  FUN_10971e484(uVar16,param_2);
                  if ((uVar16 & 1) == 0) {
                    if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                       (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                       *(char *)(param_2 + 0x28) != '\x01')) goto LAB_10972b3e8;
                    *puVar13 = 0;
                  }
                }
                puVar13 = puVar13 + 1;
                lVar9 = lVar9 + 2;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
        }
        puVar8 = (uint *)((long)param_1 + 10);
        if ((ulong)((long)puVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
          uVar6 = (uint)(ushort)((ushort)param_1[2] >> 8) | ((ushort)param_1[2] & 0xff00ff) << 8;
          if (uVar6 != 0) {
            lVar1 = (long)param_1 + (ulong)uVar6;
            lVar9 = lVar1;
            FUN_10972ba4c(lVar1,param_2,lVar1);
            if (((((int)lVar9 == 0) ||
                 (lVar9 = lVar1 + 4,
                 (ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar9 - *(long *)(param_2 + 8)))) ||
                ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar9 - *(long *)(param_2 + 8)))) ||
               ((uVar3 = (uint)*(byte *)(lVar1 + 2) << 9 | (uint)*(byte *)(lVar1 + 3) << 1,
                (uint)(*(int *)(param_2 + 0x10) - (int)lVar9) < uVar3 ||
                (iVar7 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar7,
                iVar7 < 1)))) {
LAB_10972b688:
              if (0x1f < *(uint *)(param_2 + 0x2c)) {
                return (uint *)0x0;
              }
              *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
              if (*(char *)(param_2 + 0x28) != '\x01') {
                return (uint *)0x0;
              }
              *(undefined2 *)(param_1 + 2) = 0;
            }
            else {
              uVar3 = (uint)(*(ushort *)(lVar1 + 2) >> 8) | (*(ushort *)(lVar1 + 2) & 0xff00ff) << 8
              ;
              if (uVar3 != 0) {
                uVar15 = 0;
                do {
                  puVar13 = (ushort *)(lVar9 + uVar15 * 2);
                  if ((ulong)*(uint *)(param_2 + 0x18) <
                      (ulong)((long)puVar13 + (2 - *(long *)(param_2 + 8)))) goto LAB_10972b688;
                  uVar11 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
                  if (uVar11 != 0) {
                    puVar2 = (ushort *)(lVar1 + (ulong)uVar11);
                    puVar12 = puVar2 + 1;
                    if ((((ulong)*(uint *)(param_2 + 0x18) <
                          (ulong)((long)puVar12 - *(long *)(param_2 + 8))) ||
                        ((ulong)*(uint *)(param_2 + 0x18) <
                         (ulong)((long)puVar12 - *(long *)(param_2 + 8)))) ||
                       ((uVar4 = (uint)(byte)*puVar2 << 9 | (uint)*(byte *)((long)puVar2 + 1) << 1,
                        (uint)(*(int *)(param_2 + 0x10) - (int)puVar12) < uVar4 ||
                        (iVar7 = *(int *)(param_2 + 0x1c) - uVar4, *(int *)(param_2 + 0x1c) = iVar7,
                        iVar7 < 1)))) {
LAB_10972b654:
                      uVar11 = *(uint *)(param_2 + 0x2c);
LAB_10972b658:
                      if ((0x1f < uVar11) ||
                         (*(uint *)(param_2 + 0x2c) = uVar11 + 1,
                         *(char *)(param_2 + 0x28) != '\x01')) goto LAB_10972b688;
                      *puVar13 = 0;
                    }
                    else {
                      uVar4 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
                      uVar16 = (ulong)uVar4;
                      if (uVar4 != 0) {
                        lVar14 = (long)param_1 + (ulong)uVar11 + (ulong)uVar6 + 4;
                        do {
                          if ((ulong)*(uint *)(param_2 + 0x18) <
                              (ulong)(lVar14 - *(long *)(param_2 + 8))) goto LAB_10972b654;
                          uVar11 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
                          if (uVar11 != 0) {
                            puVar10 = (ushort *)((long)puVar2 + (ulong)uVar11);
                            if ((byte *)((long)puVar10 + (2 - *(long *)(param_2 + 8))) <=
                                (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
                              uVar5 = *puVar10 >> 8 | *puVar10 << 8;
                              if (uVar5 == 3) {
                                if ((byte *)((long)puVar10 + (6 - *(long *)(param_2 + 8))) <=
                                    (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
                                  puVar10 = puVar10 + 2;
                                  FUN_10972bb90(puVar10,param_2);
                                  if (((ulong)puVar10 & 1) != 0) goto LAB_10972b5d8;
                                }
                              }
                              else if (((uVar5 != 2) && (uVar5 != 1)) ||
                                      ((byte *)((long)puVar10 + (4 - *(long *)(param_2 + 8))) <=
                                       (byte *)(ulong)*(uint *)(param_2 + 0x18)))
                              goto LAB_10972b5d8;
                            }
                            if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_10972b688;
                            uVar11 = *(uint *)(param_2 + 0x2c) + 1;
                            *(uint *)(param_2 + 0x2c) = uVar11;
                            if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_10972b658;
                            *puVar12 = 0;
                          }
LAB_10972b5d8:
                          puVar12 = puVar12 + 1;
                          lVar14 = lVar14 + 2;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                    }
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar3);
              }
            }
          }
          FUN_10972b758(puVar8,param_2,param_1);
          if ((int)puVar8 == 0) {
            return puVar8;
          }
          uVar6 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
          if (0x10001 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
            puVar8 = param_1 + 3;
            FUN_10972b844(puVar8,param_2,param_1);
            if ((int)puVar8 == 0) {
              return puVar8;
            }
          }
          uVar6 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
          if ((uVar6 >> 0x10 | uVar6 << 0x10) < 0x10003) {
            return (uint *)0x1;
          }
          puVar8 = (uint *)((long)param_1 + 0xe);
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar8 + (4 - *(long *)(param_2 + 8)))) {
            return (uint *)0x0;
          }
          uVar6 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          if (uVar6 != 0) {
            uVar15 = (long)param_1 + (ulong)uVar6;
            FUN_10971e1dc();
            if ((uVar15 & 1) == 0) {
              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                 (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                 *(char *)(param_2 + 0x28) != '\x01')) {
                return (uint *)0x0;
              }
              *puVar8 = 0;
            }
          }
          return (uint *)0x1;
        }
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10972b758; end: 10972b843;  */

undefined8 FUN_10972b758(ushort *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar3 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar3 == 0) {
    return 1;
  }
  puVar1 = (ushort *)(param_3 + (ulong)uVar3);
  puVar4 = puVar1 + 1;
  if ((ulong)((long)puVar4 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar2 = *puVar1 >> 8 | *puVar1 << 8;
    if (uVar2 == 2) {
      FUN_10972b9d8(puVar4,param_2);
    }
    else {
      if (uVar2 != 1) {
        return 1;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (6 - *(long *)(param_2 + 8))))
      goto LAB_10972b7ac;
      puVar4 = puVar1 + 2;
      FUN_10971e484(puVar4,param_2);
    }
    if (((ulong)puVar4 & 1) != 0) {
      return 1;
    }
  }
LAB_10972b7ac:
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10972b844; end: 10972b9d7;  */

undefined8 FUN_10972b844(ushort *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar3 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar3 == 0) {
    return 1;
  }
  puVar1 = (ushort *)(param_3 + (ulong)uVar3);
  if ((ulong)((long)puVar1 + (2 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) {
    if ((ushort)(*puVar1 >> 8 | *puVar1 << 8) != 1) {
      return 1;
    }
    puVar6 = (uint *)(puVar1 + 2);
    if (((((ulong)((long)puVar6 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
         ((ulong)((long)puVar6 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
        (uVar2 = (uint)(byte)puVar1[1] << 10 | (uint)*(byte *)((long)puVar1 + 3) << 2,
        uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar6))) &&
       (iVar4 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar4, 0 < iVar4)) {
      uVar2 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      uVar7 = (ulong)uVar2;
      if (uVar2 == 0) {
        return 1;
      }
      lVar8 = param_3 + (ulong)uVar3 + 8;
      while ((ulong)(lVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
        uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        if (uVar3 != 0) {
          uVar5 = (long)puVar1 + (ulong)uVar3;
          FUN_10972bad8(uVar5,param_2);
          if ((uVar5 & 1) == 0) {
            if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
               (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
               *(char *)(param_2 + 0x28) != '\x01')) break;
            *puVar6 = 0;
          }
        }
        puVar6 = puVar6 + 1;
        lVar8 = lVar8 + 4;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          return 1;
        }
      }
    }
  }
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10972b9d8; end: 10972ba4b;  */

bool FUN_10972b9d8(ushort *param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  
  puVar1 = param_1 + 1;
  if (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
     ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
    uVar3 = *param_1;
    iVar2 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
            ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
    if ((uint)(iVar2 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1)) {
      iVar2 = *(int *)(param_2 + 0x1c) + iVar2 * -2;
      *(int *)(param_2 + 0x1c) = iVar2;
      return 0 < iVar2;
    }
  }
  return false;
}



/* Entry: 10972ba4c; end: 10972bad7;  */

undefined8 FUN_10972ba4c(ushort *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    FUN_10972bad8();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
  }
  return 1;
}



/* Entry: 10972bad8; end: 10972bb8f;  */

bool FUN_10972bad8(ushort *param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  if (uVar3 == 2) {
    param_1 = param_1 + 2;
    if (((ulong)((long)param_1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)((long)param_1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar3 = *puVar1;
      iVar5 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
      if ((uint)(iVar5 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)param_1)) {
        iVar5 = *(int *)(param_2 + 0x1c) + iVar5 * -2;
        *(int *)(param_2 + 0x1c) = iVar5;
        return 0 < iVar5;
      }
    }
    return false;
  }
  if (uVar3 != 1) {
    return true;
  }
  puVar2 = param_1 + 2;
  if ((((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar4 = (uint)(byte)*puVar1 << 9 | (uint)*(byte *)((long)param_1 + 3) << 1,
     uVar4 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar2))) {
    iVar5 = *(int *)(param_2 + 0x1c) - uVar4;
    *(int *)(param_2 + 0x1c) = iVar5;
    return 0 < iVar5;
  }
  return false;
}



/* Entry: 10972bb90; end: 10972bc1b;  */

undefined8 FUN_10972bb90(ushort *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    FUN_10972bc1c();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
  }
  return 1;
}



/* Entry: 10972bc1c; end: 10972bcd7;  */

bool FUN_10972bc1c(ushort *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (long)param_1 - *(long *)(param_2 + 8);
  if (uVar5 + 6 <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar2 = (uint)CONCAT11((char)param_1[2],*(undefined1 *)((long)param_1 + 5));
    if (2 < uVar2 - 1) {
      return true;
    }
    if (uVar2 - 4 < 0xfffffffd) {
      uVar6 = 6;
    }
    else {
      uVar1 = *param_1;
      uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
      uVar6 = 6;
      if (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <= uVar3) {
        uVar6 = (uVar3 - ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) >> (ulong)(4 - uVar2 & 0x1f)
                ) * 2 + 8;
      }
    }
    if ((uVar5 <= *(uint *)(param_2 + 0x18)) &&
       (uVar6 <= (uint)(*(int *)(param_2 + 0x10) - (int)param_1))) {
      iVar4 = *(int *)(param_2 + 0x1c) - uVar6;
      *(int *)(param_2 + 0x1c) = iVar4;
      return 0 < iVar4;
    }
  }
  return false;
}



/* Entry: 10972bcd8; end: 10972be17;  */

void FUN_10972bcd8(ushort *param_1,ulong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar1 = *param_1 >> 8 | *param_1 << 8;
  if (uVar1 == 2) {
    uVar5 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
    if (uVar5 != 0) {
      puVar6 = param_1 + 2;
      do {
        uVar1 = *puVar6 >> 8 | *puVar6 << 8;
        uVar2 = puVar6[1] >> 8 | puVar6[1] << 8;
        puVar3 = param_2;
        FUN_10972be18(param_2,uVar1,uVar2);
        puVar4 = param_2 + 1;
        func_0x00010972be80(puVar4,uVar1,uVar2);
        puVar6 = puVar6 + 3;
      } while (((uint)puVar3 | (uint)puVar4) == 1 && puVar6 != param_1 + (ulong)uVar5 * 3 + 2);
    }
  }
  else if ((uVar1 == 1) &&
          (uVar5 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8, uVar5 != 0)) {
    uVar7 = *param_2;
    puVar6 = param_1 + 2;
    uVar9 = uVar5;
    do {
      uVar7 = 1L << ((ulong)(ushort)(CONCAT11((byte)*puVar6,*(byte *)((long)puVar6 + 1)) >> 4) &
                    0x3f) | uVar7;
      *param_2 = uVar7;
      puVar6 = puVar6 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar7 = param_2[1];
    pbVar8 = (byte *)((long)param_1 + 5);
    uVar9 = uVar5;
    do {
      uVar7 = 1L << ((ulong)*pbVar8 & 0x3f) | uVar7;
      param_2[1] = uVar7;
      uVar9 = uVar9 - 1;
      pbVar8 = pbVar8 + 2;
    } while (uVar9 != 0);
    uVar7 = param_2[2];
    puVar6 = param_1 + 2;
    do {
      uVar7 = 1L << ((ulong)(byte)((byte)*puVar6 >> 1) & 0x3f) | uVar7;
      param_2[2] = uVar7;
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10972be18; end: 10972bf3f;  */

bool FUN_10972be18(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  if (*param_1 == 0xffffffffffffffff) {
    bVar3 = false;
  }
  else {
    param_3 = param_3 >> 4;
    uVar2 = param_3 - (param_2 >> 4);
    bVar3 = uVar2 < 0x3f;
    uVar4 = 1L << ((ulong)(param_2 >> 4) & 0x3f);
    uVar1 = 0xffffffffffffffff;
    if (uVar2 < 0x3f) {
      uVar1 = *param_1 |
              ((2L << ((ulong)param_3 & 0x3f)) - uVar4) -
              (ulong)((ulong)(1L << ((ulong)param_3 & 0x3f)) < uVar4);
    }
    *param_1 = uVar1;
  }
  return bVar3;
}



/* Entry: 10972bf40; end: 10972bf67;  */

undefined8 FUN_10972bf40(undefined8 param_1,uint param_2)

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



/* Entry: 10972bf68; end: 10972bfb3;  */

undefined8 * FUN_10972bf68(undefined8 *param_1)

{
  int *piVar1;
  
  FUN_1096f5a5c(*param_1);
  *param_1 = 0;
  piVar1 = (int *)(param_1 + 1);
  if (*piVar1 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    _free(param_1[2]);
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Entry: 10972bfb4; end: 10972c067;  */

uint FUN_10972bfb4(ushort *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = &UNK_10dfe4888;
  if (((ushort)(*param_1 >> 8 | *param_1 << 8) == 1) &&
     (uVar1 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8, uVar1 != 0)) {
    puVar3 = (undefined *)((long)param_1 + (ulong)uVar1);
  }
  func_0x000109729ab0(puVar3,param_2);
  iVar2 = (int)puVar3;
  if (iVar2 == 3) {
    puVar3 = &UNK_10dfe4888;
    if (((ushort)(*param_1 >> 8 | *param_1 << 8) == 1) &&
       (uVar1 = (uint)(param_1[5] >> 8) | (param_1[5] & 0xff00ff) << 8, uVar1 != 0)) {
      puVar3 = (undefined *)((long)param_1 + (ulong)uVar1);
    }
    func_0x000109729ab0(puVar3,param_2);
    uVar1 = (int)puVar3 << 8 | 8;
  }
  else {
    uVar4 = 0;
    if (iVar2 == 1) {
      uVar4 = 2;
    }
    uVar1 = 4;
    if (iVar2 != 2) {
      uVar1 = uVar4;
    }
  }
  return uVar1;
}



/* Entry: 10972c068; end: 10972c0df;  */

uint FUN_10972c068(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *param_1 >> 8 | *param_1 << 8;
  if (uVar2 == 2) {
    uVar5 = 0;
    uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
    if (uVar3 != 0) {
      lVar7 = (ulong)uVar3 * 6;
      lVar6 = (long)param_1 + 7;
      do {
        uVar4 = (uint)(*(ushort *)(lVar6 + -1) >> 8) | (*(ushort *)(lVar6 + -1) & 0xff00ff) << 8;
        uVar3 = (uint)(*(ushort *)(lVar6 + -3) >> 8) | (*(ushort *)(lVar6 + -3) & 0xff00ff) << 8;
        iVar1 = 0;
        if (uVar3 <= uVar4) {
          iVar1 = (uVar4 - uVar3) + 1;
        }
        uVar5 = iVar1 + uVar5;
        lVar6 = lVar6 + 6;
        lVar7 = lVar7 + -6;
      } while (lVar7 != 0);
    }
    return uVar5;
  }
  if (uVar2 == 1) {
    return (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  }
  return 0xffffffff;
}



/* Entry: 10972c0e0; end: 10972c19f;  */

bool FUN_10972c0e0(long param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  uint uStack_38;
  uint uStack_34;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar8 = *param_2;
    if (uVar8 == 0xfffffffe) {
      bVar4 = false;
      uVar5 = 0xffffffff;
    }
    else {
      uStack_38 = uVar8;
      uStack_34 = uVar8;
      FUN_10972c1a0(param_1,&uStack_38);
      uVar5 = uVar8 + 1;
      if (uVar5 < uStack_38) {
        bVar4 = true;
      }
      else {
        uStack_38 = uVar8;
        FUN_10972c3e8(param_1,&uStack_34,&uStack_38);
        uVar5 = uStack_38 + 1;
        bVar4 = uVar5 != 0xffffffff;
      }
    }
    *param_2 = uVar5;
    return bVar4;
  }
  uVar8 = *param_2;
  if (uVar8 == 0xffffffff) {
    FUN_10972c478();
    *param_2 = (uint)param_1;
    return (uint)param_1 != 0xffffffff;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  uVar2 = uVar8 >> 9;
  uVar10 = (ulong)*(uint *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((*(uint *)(param_1 + 8) < uVar5) && (*(uint *)(lVar6 + uVar10 * 8) == uVar2)) {
    lVar7 = *(long *)(param_1 + 0x28);
LAB_10972c1ec:
    uVar8 = uVar8 + 1;
    if ((uVar8 & 0x1ff) == 0) {
      *param_2 = 0xffffffff;
    }
    else {
      piVar1 = (int *)(lVar6 + uVar10 * 8);
      uVar5 = piVar1[1];
      uVar2 = (uVar8 & 0x1ff) >> 6;
      uVar3 = uVar8 >> 6 & 7;
      uVar11 = *(ulong *)(lVar7 + (ulong)uVar5 * 0x48 + (ulong)uVar2 * 8 + 8) &
               -1L << ((ulong)uVar8 & 0x3f);
      if (uVar11 != 0) {
        uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar5 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar3 << 6;
        *param_2 = uVar5;
LAB_10972c238:
        *param_2 = uVar5 + *piVar1 * 0x200;
        return true;
      }
      lVar12 = 1 - (ulong)uVar3;
      iVar9 = uVar3 * -0x40;
      lVar14 = (ulong)uVar3 - (ulong)((uVar3 - uVar2) + 8);
      puVar13 = (ulong *)((ulong)uVar5 * 0x48 + (ulong)uVar3 * 8 + lVar7 + 0x10);
      do {
        lVar14 = lVar14 + 1;
        if (lVar14 == 0) {
          uVar5 = 0xffffffff;
          *param_2 = 0xffffffff;
          if (7 < (uVar8 >> 6 & 7 | 8) - ((uVar8 & 0x1ff) >> 6)) goto LAB_10972c250;
          goto LAB_10972c238;
        }
        uVar11 = *puVar13;
        lVar12 = lVar12 + -1;
        iVar9 = iVar9 + -0x40;
        puVar13 = puVar13 + 1;
      } while (uVar11 == 0);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar5 = (int)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) - iVar9;
      *param_2 = uVar5;
      if ((ulong)-lVar12 < 7) goto LAB_10972c238;
    }
LAB_10972c250:
    uVar10 = (ulong)((int)uVar10 + 1);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar10 = 0;
    iVar9 = uVar5 - 1;
    uVar11 = uVar10;
    if (0 < (int)uVar5) {
      do {
        uVar3 = (uint)(iVar9 + (int)uVar11) >> 1;
        uVar10 = (ulong)uVar3;
        uVar8 = *(uint *)(lVar6 + uVar10 * 8);
        if ((int)uVar2 < (int)uVar8) {
          iVar9 = uVar3 - 1;
          uVar10 = uVar11;
        }
        else {
          if (uVar2 == uVar8) break;
          uVar10 = (ulong)(uVar3 + 1);
        }
        uVar11 = uVar10;
      } while ((int)uVar10 <= iVar9);
    }
    if (uVar5 <= (uint)uVar10) goto LAB_10972c2a0;
    *(uint *)(param_1 + 8) = (uint)uVar10;
    lVar7 = *(long *)(param_1 + 0x28);
    if (*(uint *)(lVar6 + uVar10 * 8) == uVar2) {
      uVar8 = *param_2;
      goto LAB_10972c1ec;
    }
  }
  if ((uint)uVar10 < uVar5) {
    do {
      lVar12 = 0;
      piVar1 = (int *)(lVar6 + uVar10 * 8);
      puVar13 = (ulong *)(lVar7 + (ulong)(uint)piVar1[1] * 0x48);
      do {
        puVar13 = puVar13 + 1;
        uVar11 = *puVar13;
        if (uVar11 != 0) {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          *param_2 = ((uint)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | *piVar1 << 9) - (int)lVar12;
          *(int *)(param_1 + 8) = (int)uVar10;
          return true;
        }
        lVar12 = lVar12 + -0x40;
      } while (lVar12 != -0x200);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar5);
  }
LAB_10972c2a0:
  *param_2 = 0xffffffff;
  return false;
}



/* Entry: 10972c1a0; end: 10972c3e7;  */

bool FUN_10972c1a0(long param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  
  uVar7 = *param_2;
  if (uVar7 == 0xffffffff) {
    FUN_10972c478();
    *param_2 = (uint)param_1;
    return (uint)param_1 != 0xffffffff;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar2 = uVar7 >> 9;
  uVar9 = (ulong)*(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x14);
  if ((*(uint *)(param_1 + 8) < uVar6) && (*(uint *)(lVar4 + uVar9 * 8) == uVar2)) {
    lVar5 = *(long *)(param_1 + 0x28);
LAB_10972c1ec:
    uVar7 = uVar7 + 1;
    if ((uVar7 & 0x1ff) == 0) {
      *param_2 = 0xffffffff;
    }
    else {
      piVar1 = (int *)(lVar4 + uVar9 * 8);
      uVar6 = piVar1[1];
      uVar2 = (uVar7 & 0x1ff) >> 6;
      uVar3 = uVar7 >> 6 & 7;
      uVar10 = *(ulong *)(lVar5 + (ulong)uVar6 * 0x48 + (ulong)uVar2 * 8 + 8) &
               -1L << ((ulong)uVar7 & 0x3f);
      if (uVar10 != 0) {
        uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar6 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar3 << 6;
        *param_2 = uVar6;
LAB_10972c238:
        *param_2 = uVar6 + *piVar1 * 0x200;
        return true;
      }
      lVar11 = 1 - (ulong)uVar3;
      iVar8 = uVar3 * -0x40;
      lVar13 = (ulong)uVar3 - (ulong)((uVar3 - uVar2) + 8);
      puVar12 = (ulong *)((ulong)uVar6 * 0x48 + (ulong)uVar3 * 8 + lVar5 + 0x10);
      do {
        lVar13 = lVar13 + 1;
        if (lVar13 == 0) {
          uVar6 = 0xffffffff;
          *param_2 = 0xffffffff;
          if (7 < (uVar7 >> 6 & 7 | 8) - ((uVar7 & 0x1ff) >> 6)) goto LAB_10972c250;
          goto LAB_10972c238;
        }
        uVar10 = *puVar12;
        lVar11 = lVar11 + -1;
        iVar8 = iVar8 + -0x40;
        puVar12 = puVar12 + 1;
      } while (uVar10 == 0);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = (int)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) - iVar8;
      *param_2 = uVar6;
      if ((ulong)-lVar11 < 7) goto LAB_10972c238;
    }
LAB_10972c250:
    uVar9 = (ulong)((int)uVar9 + 1);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar9 = 0;
    iVar8 = uVar6 - 1;
    uVar10 = uVar9;
    if (0 < (int)uVar6) {
      do {
        uVar3 = (uint)(iVar8 + (int)uVar10) >> 1;
        uVar9 = (ulong)uVar3;
        uVar7 = *(uint *)(lVar4 + uVar9 * 8);
        if ((int)uVar2 < (int)uVar7) {
          iVar8 = uVar3 - 1;
          uVar9 = uVar10;
        }
        else {
          if (uVar2 == uVar7) break;
          uVar9 = (ulong)(uVar3 + 1);
        }
        uVar10 = uVar9;
      } while ((int)uVar9 <= iVar8);
    }
    if (uVar6 <= (uint)uVar9) goto LAB_10972c2a0;
    *(uint *)(param_1 + 8) = (uint)uVar9;
    lVar5 = *(long *)(param_1 + 0x28);
    if (*(uint *)(lVar4 + uVar9 * 8) == uVar2) {
      uVar7 = *param_2;
      goto LAB_10972c1ec;
    }
  }
  if ((uint)uVar9 < uVar6) {
    do {
      lVar11 = 0;
      piVar1 = (int *)(lVar4 + uVar9 * 8);
      puVar12 = (ulong *)(lVar5 + (ulong)(uint)piVar1[1] * 0x48);
      do {
        puVar12 = puVar12 + 1;
        uVar10 = *puVar12;
        if (uVar10 != 0) {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          *param_2 = ((uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | *piVar1 << 9) - (int)lVar11;
          *(int *)(param_1 + 8) = (int)uVar9;
          return true;
        }
        lVar11 = lVar11 + -0x40;
      } while (lVar11 != -0x200);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar6);
  }
LAB_10972c2a0:
  *param_2 = 0xffffffff;
  return false;
}



/* Entry: 10972c3e8; end: 10972c477;  */

ulong FUN_10972c3e8(ulong param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iStack_34;
  
  iStack_34 = *param_3;
  uVar1 = param_1;
  FUN_10972c1a0(param_1,&iStack_34);
  if ((uVar1 & 1) == 0) {
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
        return uVar1;
      }
    } while (iStack_34 == *param_3 + 1);
  }
  return uVar1;
}



/* Entry: 10972c478; end: 10972c54b;  */

int FUN_10972c478(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      puVar6 = (ulong *)&UNK_10dfe4888;
      if (uVar4 < *(uint *)(param_1 + 0x14)) {
        puVar6 = (ulong *)(*(long *)(param_1 + 0x18) + uVar4 * 8);
      }
      puVar7 = (ulong *)&UNK_10dfe4888;
      if (*(uint *)((long)puVar6 + 4) < uVar1) {
        puVar7 = (ulong *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)((long)puVar6 + 4) * 0x48);
      }
      if ((int)*puVar7 != 0) {
        if ((int)*puVar7 != -1) {
LAB_10972c504:
          lVar5 = 0;
          goto LAB_10972c514;
        }
        iVar3 = 8;
        puVar8 = puVar7;
        do {
          puVar8 = puVar8 + 1;
          if (*puVar8 != 0) goto LAB_10972c504;
          bVar2 = iVar3 != 1;
          iVar3 = iVar3 + -1;
        } while (bVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return -1;
  while (lVar5 = lVar5 + -0x40, lVar5 != -0x200) {
LAB_10972c514:
    puVar7 = puVar7 + 1;
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      iVar3 = (int)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) - (int)lVar5;
      goto LAB_10972c544;
    }
  }
  iVar3 = -1;
LAB_10972c544:
  return iVar3 + (int)*puVar6 * 0x200;
}



/* Entry: 10972c54c; end: 10972c5af;  */

void FUN_10972c54c(undefined4 *param_1)

{
  long lVar1;
  
  *param_1 = 0xffff2153;
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    FUN_109711500(lVar1 + 0x40,lVar1);
    _pthread_mutex_destroy(lVar1);
    _free(lVar1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (*(long *)(param_1 + 10) != 0) {
    _free();
    *(undefined8 *)(param_1 + 10) = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 10972c5b0; end: 10972c6eb;  */

void FUN_10972c5b0(long param_1,uint param_2,uint param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  
  lVar7 = param_1 + (ulong)param_3 * 0x14;
  sVar3 = *(short *)(lVar7 + 0x10);
  iVar8 = (int)sVar3;
  if (sVar3 != 0) {
    bVar2 = *(byte *)(lVar7 + 0x12);
    *(undefined2 *)(lVar7 + 0x10) = 0;
    if (param_5 != 0) {
      uVar1 = param_3 + (int)sVar3;
      if (uVar1 < param_2) {
        FUN_10972c5b0(param_1,param_2,(ulong)uVar1,param_4,param_5 + -1);
        if ((bVar2 >> 1 & 1) == 0) {
          uVar9 = *(undefined8 *)(param_1 + (ulong)uVar1 * 0x14 + 8);
          uVar9 = CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 8) >> 0x20) +
                           (int)((ulong)uVar9 >> 0x20),(int)*(undefined8 *)(lVar7 + 8) + (int)uVar9)
          ;
          *(undefined8 *)(lVar7 + 8) = uVar9;
          if (((uint)param_4 & 0xfffffffd) == 4) {
            if (param_3 <= uVar1) {
              return;
            }
            lVar5 = (ulong)param_3 - (ulong)uVar1;
            puVar6 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x14);
            do {
              uVar9 = CONCAT44((int)((ulong)uVar9 >> 0x20) - (int)((ulong)*puVar6 >> 0x20),
                               (int)uVar9 - (int)*puVar6);
              lVar5 = lVar5 + -1;
              puVar6 = (undefined8 *)((long)puVar6 + 0x14);
            } while (lVar5 != 0);
          }
          else {
            if (param_3 + 1 <= uVar1 + 1) {
              return;
            }
            puVar6 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x14);
            do {
              puVar6 = (undefined8 *)((long)puVar6 + 0x14);
              uVar9 = CONCAT44((int)((ulong)*puVar6 >> 0x20) + (int)((ulong)uVar9 >> 0x20),
                               (int)*puVar6 + (int)uVar9);
              bVar4 = iVar8 != -1;
              iVar8 = iVar8 + 1;
            } while (bVar4);
          }
          *(undefined8 *)(lVar7 + 8) = uVar9;
        }
        else if (((uint)param_4 & 0xfffffffe) == 4) {
          *(int *)(lVar7 + 0xc) =
               *(int *)(lVar7 + 0xc) + *(int *)(param_1 + (ulong)uVar1 * 0x14 + 0xc);
        }
        else {
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + *(int *)(param_1 + (ulong)uVar1 * 0x14 + 8);
        }
      }
    }
  }
  return;
}



/* Entry: 10972c6ec; end: 10972c75b;  */

undefined * FUN_10972c6ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x18];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10972c7dc();
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
      FUN_10972c75c();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10972c75c; end: 10972c7db;  */

void FUN_10972c75c(undefined8 *param_1)

{
  ulong uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    if (*(int *)(param_1 + 1) != 0) {
      uVar1 = 0;
      do {
        _free(*(undefined8 *)(param_1[2] + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 1));
    }
    _free(param_1[2]);
    FUN_1096f5a5c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10972c7dc; end: 10972ca8f;  */

undefined8 * FUN_10972c7dc(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar10;
  long lVar11;
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
  int *piVar9;
  
  puVar5 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar5 != (undefined8 *)0x0) {
    auStack_90[0] = 0;
    iStack_64 = 0;
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    bStack_68 = 0;
    iStack_58 = 0x10000;
    uStack_54 = 0x100;
    iVar4 = param_1[6];
    if (iVar4 == -1) {
      piVar9 = param_1;
      FUN_109710978();
      iVar4 = (int)piVar9;
    }
    uStack_54 = CONCAT11(uStack_54._1_1_,1);
    piVar9 = (int *)&UNK_10dfe4888;
    iStack_58 = iVar4;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(param_1,0x47535542,*(undefined8 *)(param_1 + 10));
      piVar9 = param_1;
      if (param_1 == (int *)0x0) {
        piVar9 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar9 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_60 = piVar9;
    bVar3 = 0;
    do {
      bStack_68 = bVar3;
      lVar11 = *(long *)(piStack_60 + 4);
      uStack_78._0_4_ = piStack_60[6];
      uStack_80 = lVar11 + (ulong)(uint)uStack_78;
      uVar10 = (uint)uStack_78 << 6;
      if (uVar10 < 0x4001) {
        uVar10 = 0x4000;
      }
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar10;
      }
      iStack_64 = 0;
      auStack_90[0] = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      lStack_88 = lVar11;
      if (lVar11 == 0) {
        FUN_1096f5a5c();
        piStack_60 = (int *)0x0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        goto LAB_10972c980;
      }
      lVar6 = lVar11;
      FUN_10972ca90(lVar11,auStack_90);
      if ((int)lVar6 != 0) {
        if (iStack_64 == 0) {
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        }
        else {
          iStack_64 = 0;
          FUN_10972ca90(lVar11,auStack_90);
          iVar4 = iStack_64;
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          uVar10 = 0;
          if (iVar4 == 0) {
            uVar10 = (uint)lVar11;
          }
          if ((uVar10 & 1) == 0) goto LAB_10972c970;
        }
        piStack_60 = (int *)0x0;
        uStack_80 = 0;
        lStack_88 = 0;
        if (piVar9[1] != 0) {
          piVar9[1] = 0;
        }
        goto LAB_10972c980;
      }
      if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10972c95c;
      if ((piVar9[1] == 0) || (piVar7 = piVar9, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
        uStack_80 = (ulong)(uint)piVar9[6];
        lStack_88 = 0;
        goto LAB_10972c95c;
      }
      uStack_80 = *(long *)(piVar9 + 4) + (ulong)(uint)piVar9[6];
      bVar3 = 1;
    } while (*(long *)(piVar9 + 4) != 0);
    lStack_88 = 0;
LAB_10972c95c:
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10972c970:
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    FUN_1096f5a5c(piVar9);
    piVar9 = (int *)&UNK_10dfe4888;
LAB_10972c980:
    *puVar5 = piVar9;
    piVar7 = (int *)&UNK_10dfe4888;
    if (3 < (uint)piVar9[6]) {
      piVar7 = *(int **)(piVar9 + 4);
    }
    func_0x000109700ec8();
    *(int *)(puVar5 + 1) = (int)piVar7;
    uVar8 = (ulong)piVar7 & 0xffffffff;
    _calloc(uVar8,8);
    puVar5[2] = uVar8;
    if (uVar8 == 0) {
      *(undefined4 *)(puVar5 + 1) = 0;
      FUN_1096f5a5c(piVar9);
      *puVar5 = &UNK_10dfe4888;
    }
    FUN_109710c0c(auStack_90);
  }
  return puVar5;
}



/* Entry: 10972ca90; end: 10972d98b;  */

void FUN_10972ca90(uint *param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint *puVar15;
  long lVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  byte *pbVar21;
  ushort *puVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  ushort *puVar26;
  ushort uVar27;
  ushort *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  
  puVar15 = param_1 + 1;
  if ((((ulong)((long)puVar15 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ushort)((ushort)*param_1 >> 8 | (ushort)*param_1 << 8) == 1)) &&
     (func_0x00010972d67c(puVar15,param_2,param_1), (int)puVar15 != 0)) {
    lVar16 = (long)param_1 + 6;
    FUN_10972d98c(lVar16,param_2,param_1);
    if (((int)lVar16 != 0) &&
       ((ulong)(((long)param_1 + 10) - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
    {
      uVar10 = (uint)(ushort)((ushort)param_1[2] >> 8) | ((ushort)param_1[2] & 0xff00ff) << 8;
      if (uVar10 != 0) {
        puVar1 = (ushort *)((long)param_1 + (ulong)uVar10);
        puVar3 = puVar1 + 1;
        if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 - *(long *)(param_2 + 8))) ||
            ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 - *(long *)(param_2 + 8)))) ||
           ((uVar7 = (uint)(byte)*puVar1 << 9 | (uint)*(byte *)((long)puVar1 + 1) << 1,
            (uint)(*(int *)(param_2 + 0x10) - (int)puVar3) < uVar7 ||
            (iVar13 = *(int *)(param_2 + 0x1c) - uVar7, *(int *)(param_2 + 0x1c) = iVar13,
            iVar13 < 1)))) {
LAB_10972d604:
          if (0x1f < *(uint *)(param_2 + 0x2c)) {
            return;
          }
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
          if (*(char *)(param_2 + 0x28) != '\x01') {
            return;
          }
          *(undefined2 *)(param_1 + 2) = 0;
        }
        else {
          uVar7 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
          if (uVar7 != 0) {
            uVar32 = 0;
            do {
              puVar5 = puVar3 + uVar32;
              if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                  (byte *)((long)puVar5 + (2 - *(long *)(param_2 + 8)))) goto LAB_10972d604;
              uVar11 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
              if (uVar11 != 0) {
                puVar2 = (ushort *)((long)puVar1 + (ulong)uVar11);
                puVar26 = puVar2 + 3;
                if ((ulong)((long)puVar26 - *(long *)(param_2 + 8)) <=
                    (ulong)*(uint *)(param_2 + 0x18)) {
                  puVar28 = puVar2 + 2;
                  puVar17 = puVar28;
                  func_0x00010972e264(puVar28,param_2);
                  if ((int)puVar17 != 0) {
                    uVar27 = puVar2[2];
                    iVar13 = *(int *)(param_2 + 0x20) +
                             ((uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8);
                    *(int *)(param_2 + 0x20) = iVar13;
                    if (iVar13 < 0x4000) {
                      if ((((((*(byte *)((long)puVar2 + 3) >> 4 & 1) == 0) ||
                            ((byte *)((long)puVar28 +
                                     (((ulong)(byte)puVar2[2] * 0x200 +
                                      (ulong)*(byte *)((long)puVar2 + 5) * 2) -
                                     *(long *)(param_2 + 8)) + 4) <=
                             (byte *)(ulong)*(uint *)(param_2 + 0x18))) &&
                           ((byte *)((long)puVar26 - *(long *)(param_2 + 8)) <=
                            (byte *)(ulong)*(uint *)(param_2 + 0x18))) &&
                          ((uVar23 = *puVar2,
                           (ulong)((long)puVar26 - *(long *)(param_2 + 8)) <=
                           (ulong)*(uint *)(param_2 + 0x18) &&
                           (uVar8 = (uint)(byte)puVar2[2] << 9 |
                                    (uint)*(byte *)((long)puVar2 + 5) << 1,
                           uVar8 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar26))))) &&
                         (iVar13 = *(int *)(param_2 + 0x1c) - uVar8,
                         *(int *)(param_2 + 0x1c) = iVar13, 0 < iVar13)) {
                        uVar8 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
                        if (uVar8 != 0) {
                          uVar31 = 0;
                          do {
                            puVar28 = puVar26 + uVar31;
                            if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                (byte *)((long)puVar28 + (2 - *(long *)(param_2 + 8))))
                            goto LAB_10972cc28;
                            uVar24 = (uint)(*puVar28 >> 8) | (*puVar28 & 0xff00ff) << 8;
                            if (uVar24 == 0) goto LAB_10972d3bc;
                            puVar17 = (ushort *)((long)puVar2 + (ulong)uVar24);
                            uVar6 = uVar23 >> 8 | uVar23 << 8;
                            while (uVar6 == 7) {
                              if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                  (byte *)((long)puVar17 + (2 - *(long *)(param_2 + 8))))
                              goto LAB_10972d398;
                              if ((ushort)(*puVar17 >> 8 | *puVar17 << 8) != 1) goto LAB_10972d3bc;
                              if (((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                   (byte *)((long)puVar17 + (8 - *(long *)(param_2 + 8)))) ||
                                 ((ushort)(puVar17[1] >> 8 | puVar17[1] << 8) == 7))
                              goto LAB_10972d398;
                              uVar24 = (*(uint *)(puVar17 + 2) & 0xff00ff00) >> 8 |
                                       (*(uint *)(puVar17 + 2) & 0xff00ff) << 8;
                              uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
                              puVar18 = (ushort *)((long)puVar17 + (ulong)uVar24);
                              puVar22 = puVar17 + 1;
                              puVar17 = (ushort *)&UNK_10dfe4888;
                              if (uVar24 != 0) {
                                puVar17 = puVar18;
                              }
                              uVar6 = *puVar22 >> 8 | *puVar22 << 8;
                            }
                            if (uVar6 < 4) {
                              if (uVar6 == 1) {
                                puVar22 = puVar17 + 1;
                                if ((ulong)((long)puVar22 - *(long *)(param_2 + 8)) <=
                                    (ulong)*(uint *)(param_2 + 0x18)) {
                                  uVar6 = *puVar17 >> 8 | *puVar17 << 8;
                                  if (uVar6 == 2) {
                                    FUN_10972ba4c(puVar22,param_2,puVar17);
                                    if ((int)puVar22 != 0) {
                                      puVar17 = puVar17 + 2;
LAB_10972d4f4:
                                      func_0x00010972bb24(puVar17,param_2);
                                      goto LAB_10972d2c8;
                                    }
                                  }
                                  else {
                                    if (uVar6 != 1) goto LAB_10972d3bc;
                                    if ((byte *)((long)puVar17 + (6 - *(long *)(param_2 + 8))) <=
                                        (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
                                      FUN_10972ba4c(puVar22,param_2,puVar17);
                                      if ((int)puVar22 != 0) {
                                        uVar12 = (uint)(puVar17[1] >> 8) |
                                                 (puVar17[1] & 0xff00ff) << 8;
                                        uVar24 = 0xdfe4888;
                                        if (uVar12 != 0) {
                                          uVar24 = (int)puVar17 + uVar12;
                                        }
                                        FUN_10972c068();
                                        uVar12 = *(uint *)(param_2 + 0x1c);
                                        uVar24 = uVar24 >> 1;
                                        iVar13 = uVar12 - uVar24;
                                        bVar14 = iVar13 != 0;
                                        if (0x7fffffff < uVar12 || (uVar24 > uVar12 || !bVar14)) {
                                          iVar13 = -1;
                                        }
                                        *(int *)(param_2 + 0x1c) = iVar13;
                                        if (uVar12 < 0x80000000 && (uVar24 <= uVar12 && bVar14))
                                        goto LAB_10972d3bc;
                                      }
                                    }
                                  }
                                }
LAB_10972d398:
                                uVar24 = *(uint *)(param_2 + 0x2c);
LAB_10972d39c:
                                if (0x1f < uVar24) goto LAB_10972cc28;
                                uVar24 = uVar24 + 1;
                                *(uint *)(param_2 + 0x2c) = uVar24;
                                if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_10972cc2c;
                                *puVar28 = 0;
                              }
                              else if (uVar6 == 2) {
                                puVar22 = puVar17 + 1;
                                if ((ulong)*(uint *)(param_2 + 0x18) <
                                    (ulong)((long)puVar22 - *(long *)(param_2 + 8)))
                                goto LAB_10972d398;
                                if ((ushort)(*puVar17 >> 8 | *puVar17 << 8) == 1) {
                                  FUN_10972ba4c(puVar22,param_2,puVar17);
                                  if (((((int)puVar22 == 0) ||
                                       (puVar22 = puVar17 + 3,
                                       (ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar22 - *(long *)(param_2 + 8)))) ||
                                      ((ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar22 - *(long *)(param_2 + 8)))) ||
                                     ((uVar24 = (uint)(byte)puVar17[2] << 9 |
                                                (uint)*(byte *)((long)puVar17 + 5) << 1,
                                      (uint)(*(int *)(param_2 + 0x10) - (int)puVar22) < uVar24 ||
                                      (iVar13 = *(int *)(param_2 + 0x1c) - uVar24,
                                      *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1))))
                                  goto LAB_10972d398;
                                  uVar24 = (uint)(puVar17[2] >> 8) | (puVar17[2] & 0xff00ff) << 8;
                                  uVar25 = (ulong)uVar24;
                                  if (uVar24 != 0) {
                                    puVar18 = puVar17 + 4;
                                    do {
                                      if ((ulong)*(uint *)(param_2 + 0x18) <
                                          (ulong)((long)puVar18 - *(long *)(param_2 + 8)))
                                      goto LAB_10972d398;
                                      uVar24 = (uint)(*puVar22 >> 8) | (*puVar22 & 0xff00ff) << 8;
                                      if (uVar24 != 0) {
                                        pbVar21 = (byte *)((long)puVar17 + (ulong)uVar24);
                                        func_0x00010972bb24(pbVar21,param_2);
                                        if (((ulong)pbVar21 & 1) == 0) {
                                          if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_10972d604;
                                          uVar24 = *(uint *)(param_2 + 0x2c) + 1;
                                          *(uint *)(param_2 + 0x2c) = uVar24;
                                          if (*(char *)(param_2 + 0x28) != '\x01')
                                          goto LAB_10972d39c;
                                          *puVar22 = 0;
                                        }
                                      }
                                      puVar22 = puVar22 + 1;
                                      puVar18 = puVar18 + 1;
                                      uVar25 = uVar25 - 1;
                                    } while (uVar25 != 0);
                                  }
                                }
                              }
                              else if (uVar6 == 3) {
                                puVar22 = puVar17 + 1;
                                if ((ulong)*(uint *)(param_2 + 0x18) <
                                    (ulong)((long)puVar22 - *(long *)(param_2 + 8)))
                                goto LAB_10972d398;
                                if ((ushort)(*puVar17 >> 8 | *puVar17 << 8) == 1) {
                                  FUN_10972ba4c(puVar22,param_2,puVar17);
                                  if ((((int)puVar22 == 0) ||
                                      (puVar22 = puVar17 + 3,
                                      (ulong)*(uint *)(param_2 + 0x18) <
                                      (ulong)((long)puVar22 - *(long *)(param_2 + 8)))) ||
                                     (((ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar22 - *(long *)(param_2 + 8)) ||
                                      ((uVar24 = (uint)(byte)puVar17[2] << 9 |
                                                 (uint)*(byte *)((long)puVar17 + 5) << 1,
                                       (uint)(*(int *)(param_2 + 0x10) - (int)puVar22) < uVar24 ||
                                       (iVar13 = *(int *)(param_2 + 0x1c) - uVar24,
                                       *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1))))))
                                  goto LAB_10972d398;
                                  uVar24 = (uint)(puVar17[2] >> 8) | (puVar17[2] & 0xff00ff) << 8;
                                  uVar25 = (ulong)uVar24;
                                  if (uVar24 != 0) {
                                    puVar18 = puVar17 + 4;
                                    do {
                                      if ((ulong)*(uint *)(param_2 + 0x18) <
                                          (ulong)((long)puVar18 - *(long *)(param_2 + 8)))
                                      goto LAB_10972d398;
                                      uVar24 = (uint)(*puVar22 >> 8) | (*puVar22 & 0xff00ff) << 8;
                                      if (uVar24 != 0) {
                                        pbVar21 = (byte *)((long)puVar17 + (ulong)uVar24);
                                        func_0x00010972bb24(pbVar21,param_2);
                                        if (((ulong)pbVar21 & 1) == 0) {
                                          if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_10972d604;
                                          uVar24 = *(uint *)(param_2 + 0x2c) + 1;
                                          *(uint *)(param_2 + 0x2c) = uVar24;
                                          if (*(char *)(param_2 + 0x28) != '\x01')
                                          goto LAB_10972d39c;
                                          *puVar22 = 0;
                                        }
                                      }
                                      puVar22 = puVar22 + 1;
                                      puVar18 = puVar18 + 1;
                                      uVar25 = uVar25 - 1;
                                    } while (uVar25 != 0);
                                  }
                                }
                              }
                            }
                            else if (uVar6 < 6) {
                              if (uVar6 == 4) {
                                puVar22 = puVar17 + 1;
                                if ((ulong)*(uint *)(param_2 + 0x18) <
                                    (ulong)((long)puVar22 - *(long *)(param_2 + 8)))
                                goto LAB_10972d398;
                                if ((ushort)(*puVar17 >> 8 | *puVar17 << 8) == 1) {
                                  FUN_10972ba4c(puVar22,param_2,puVar17);
                                  if (((((int)puVar22 == 0) ||
                                       (puVar22 = puVar17 + 3,
                                       (ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar22 - *(long *)(param_2 + 8)))) ||
                                      ((ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar22 - *(long *)(param_2 + 8)))) ||
                                     ((uVar24 = (uint)(byte)puVar17[2] << 9 |
                                                (uint)*(byte *)((long)puVar17 + 5) << 1,
                                      (uint)(*(int *)(param_2 + 0x10) - (int)puVar22) < uVar24 ||
                                      (iVar13 = *(int *)(param_2 + 0x1c) - uVar24,
                                      *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1))))
                                  goto LAB_10972d398;
                                  uVar12 = (uint)(puVar17[2] >> 8) | (puVar17[2] & 0xff00ff) << 8;
                                  if (uVar12 != 0) {
                                    uVar25 = 0;
                                    do {
                                      puVar18 = puVar22 + uVar25;
                                      if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                          (byte *)((long)puVar18 + (2 - *(long *)(param_2 + 8))))
                                      goto LAB_10972d398;
                                      uVar24 = (uint)(*puVar18 >> 8) | (*puVar18 & 0xff00ff) << 8;
                                      if (uVar24 != 0) {
                                        puVar19 = (ushort *)((long)puVar17 + (ulong)uVar24);
                                        puVar20 = puVar19 + 1;
                                        if ((((ulong)*(uint *)(param_2 + 0x18) <
                                              (ulong)((long)puVar20 - *(long *)(param_2 + 8))) ||
                                            ((ulong)*(uint *)(param_2 + 0x18) <
                                             (ulong)((long)puVar20 - *(long *)(param_2 + 8)))) ||
                                           ((uVar9 = (uint)(byte)*puVar19 << 9 |
                                                     (uint)*(byte *)((long)puVar19 + 1) << 1,
                                            (uint)(*(int *)(param_2 + 0x10) - (int)puVar20) < uVar9
                                            || (iVar13 = *(int *)(param_2 + 0x1c) - uVar9,
                                               *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1)))) {
LAB_10972d294:
                                          uVar24 = *(uint *)(param_2 + 0x2c);
LAB_10972d298:
                                          if (0x1f < uVar24) goto LAB_10972d398;
                                          uVar24 = uVar24 + 1;
                                          *(uint *)(param_2 + 0x2c) = uVar24;
                                          if (*(char *)(param_2 + 0x28) != '\x01')
                                          goto LAB_10972d39c;
                                          *puVar18 = 0;
                                        }
                                        else {
                                          uVar9 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8
                                          ;
                                          uVar29 = (ulong)uVar9;
                                          if (uVar9 != 0) {
                                            pbVar21 = (byte *)((long)puVar17 + (ulong)uVar24 + 4);
                                            do {
                                              if ((ulong)*(uint *)(param_2 + 0x18) <
                                                  (ulong)((long)pbVar21 - *(long *)(param_2 + 8)))
                                              goto LAB_10972d294;
                                              uVar24 = (uint)(*puVar20 >> 8) |
                                                       (*puVar20 & 0xff00ff) << 8;
                                              if (uVar24 != 0) {
                                                if ((((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                                      (byte *)((long)puVar19 +
                                                              ((ulong)uVar24 -
                                                              *(long *)(param_2 + 8)) + 2)) ||
                                                    (pbVar4 = (byte *)((long)puVar19 +
                                                                      (ulong)uVar24 + 4),
                                                    (byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                                    pbVar4 + -*(long *)(param_2 + 8))) ||
                                                   ((uVar6 = *(ushort *)
                                                              ((long)puVar19 + (ulong)uVar24 + 2),
                                                    uVar24 = (uint)(uVar6 >> 8) |
                                                             (uVar6 & 0xff00ff) << 8, uVar24 != 0 &&
                                                    ((((ulong)*(uint *)(param_2 + 0x18) <
                                                       (ulong)((long)pbVar4 - *(long *)(param_2 + 8)
                                                              ) ||
                                                      (uVar24 = uVar24 * 2 - 2,
                                                      (uint)(*(int *)(param_2 + 0x10) - (int)pbVar4)
                                                      < uVar24)) ||
                                                     (iVar13 = *(int *)(param_2 + 0x1c) - uVar24,
                                                     *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1))
                                                    )))) {
                                                  if (0x1f < *(uint *)(param_2 + 0x2c))
                                                  goto LAB_10972d604;
                                                  uVar24 = *(uint *)(param_2 + 0x2c) + 1;
                                                  *(uint *)(param_2 + 0x2c) = uVar24;
                                                  if (*(char *)(param_2 + 0x28) != '\x01')
                                                  goto LAB_10972d298;
                                                  *puVar20 = 0;
                                                }
                                              }
                                              puVar20 = puVar20 + 1;
                                              pbVar21 = pbVar21 + 2;
                                              uVar29 = uVar29 - 1;
                                            } while (uVar29 != 0);
                                          }
                                        }
                                      }
                                      uVar25 = uVar25 + 1;
                                    } while (uVar25 != uVar12);
                                  }
                                }
                              }
                              else if (uVar6 == 5) {
                                FUN_10972e2d0(puVar17,param_2);
                                goto LAB_10972d2c8;
                              }
                            }
                            else if (uVar6 == 6) {
                              func_0x00010972e4f0(puVar17,param_2);
LAB_10972d2c8:
                              if (((ulong)puVar17 & 1) == 0) goto LAB_10972d398;
                            }
                            else if (uVar6 == 8) {
                              puVar22 = puVar17 + 1;
                              if ((ulong)((long)puVar22 - *(long *)(param_2 + 8)) <=
                                  (ulong)*(uint *)(param_2 + 0x18)) {
                                if ((ushort)(*puVar17 >> 8 | *puVar17 << 8) != 1)
                                goto LAB_10972d3bc;
                                FUN_10972ba4c(puVar22,param_2,puVar17);
                                if ((int)puVar22 != 0) {
                                  puVar22 = puVar17 + 2;
                                  puVar18 = puVar22;
                                  func_0x00010972ec58(puVar22,param_2);
                                  if ((int)puVar18 != 0) {
                                    uVar24 = (uint)(puVar17[2] >> 8) | (puVar17[2] & 0xff00ff) << 8;
                                    uVar25 = (ulong)uVar24;
                                    if (uVar24 != 0) {
                                      puVar18 = puVar17 + 3;
                                      do {
                                        puVar19 = puVar18;
                                        FUN_10972ba4c(puVar18,param_2,puVar17);
                                        if (((ulong)puVar19 & 1) == 0) goto LAB_10972d398;
                                        puVar18 = puVar18 + 1;
                                        uVar25 = uVar25 - 1;
                                      } while (uVar25 != 0);
                                    }
                                    uVar25 = (ulong)(byte)puVar17[2];
                                    uVar29 = (ulong)*(byte *)((long)puVar17 + 5);
                                    puVar18 = puVar22 + uVar29 + uVar25 * 0x100 + 1;
                                    puVar19 = puVar18;
                                    func_0x00010972ec58(puVar18,param_2);
                                    if ((int)puVar19 != 0) {
                                      uVar24 = (uint)(puVar22[uVar29 + uVar25 * 0x100 + 1] >> 8) |
                                               (puVar22[uVar29 + uVar25 * 0x100 + 1] & 0xff00ff) <<
                                               8;
                                      uVar30 = (ulong)uVar24;
                                      if (uVar24 != 0) {
                                        puVar19 = puVar22 + uVar29 + uVar25 * 0x100 + 2;
                                        do {
                                          puVar20 = puVar19;
                                          FUN_10972ba4c(puVar19,param_2,puVar17);
                                          if (((ulong)puVar20 & 1) == 0) goto LAB_10972d398;
                                          puVar19 = puVar19 + 1;
                                          uVar30 = uVar30 - 1;
                                        } while (uVar30 != 0);
                                      }
                                      puVar17 = puVar18 + (ulong)*(byte *)((long)puVar22 +
                                                                          uVar25 * 0x200 +
                                                                          uVar29 * 2 + 3) +
                                                          (ulong)(byte)puVar22[uVar29 + uVar25 * 
                                                  0x100 + 1] * 0x100 + 1;
                                      goto LAB_10972d4f4;
                                    }
                                  }
                                }
                              }
                              goto LAB_10972d398;
                            }
LAB_10972d3bc:
                            uVar31 = uVar31 + 1;
                          } while (uVar31 != uVar8);
                        }
                        if (((ushort)(*puVar2 >> 8 | *puVar2 << 8) == 7) &&
                           (*(int *)(param_2 + 0x2c) == 0)) {
                          if (*(byte *)((long)puVar2 + 5) == 0 && (byte)puVar2[2] == 0) {
                            puVar26 = (ushort *)&UNK_10dfe4888;
                          }
                          uVar8 = (uint)(*puVar26 >> 8) | (*puVar26 & 0xff00ff) << 8;
                          puVar26 = (ushort *)&UNK_10dfe4888;
                          if (uVar8 != 0) {
                            puVar26 = (ushort *)((long)puVar2 + (ulong)uVar8);
                          }
                          if ((ushort)(*puVar26 >> 8 | *puVar26 << 8) == 1) {
                            uVar23 = puVar26[1] >> 8 | puVar26[1] << 8;
                          }
                          else {
                            uVar23 = 0;
                          }
                          uVar8 = (uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8;
                          if (1 < uVar8) {
                            puVar26 = (ushort *)((long)param_1 + (ulong)uVar11 + (ulong)uVar10 + 8);
                            uVar31 = 1;
                            do {
                              puVar28 = (ushort *)&UNK_10dfe4888;
                              if (uVar31 < ((uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8)) {
                                puVar28 = puVar26;
                              }
                              uVar11 = (uint)(*puVar28 >> 8) | (*puVar28 & 0xff00ff) << 8;
                              puVar28 = (ushort *)&UNK_10dfe4888;
                              if (uVar11 != 0) {
                                puVar28 = (ushort *)((long)puVar2 + (ulong)uVar11);
                              }
                              if ((ushort)(*puVar28 >> 8 | *puVar28 << 8) == 1) {
                                uVar27 = puVar28[1] >> 8 | puVar28[1] << 8;
                              }
                              else {
                                uVar27 = 0;
                              }
                              if (uVar27 != uVar23) goto LAB_10972cc28;
                              uVar31 = uVar31 + 1;
                              puVar26 = puVar26 + 1;
                            } while (uVar8 != uVar31);
                          }
                        }
                        goto LAB_10972d51c;
                      }
                    }
                  }
                }
LAB_10972cc28:
                uVar24 = *(uint *)(param_2 + 0x2c);
LAB_10972cc2c:
                if ((0x1f < uVar24) ||
                   (*(uint *)(param_2 + 0x2c) = uVar24 + 1, *(char *)(param_2 + 0x28) != '\x01'))
                goto LAB_10972d604;
                *puVar5 = 0;
              }
LAB_10972d51c:
              uVar32 = uVar32 + 1;
            } while (uVar32 != uVar7);
          }
        }
      }
      uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      if (0x10000 < (uVar10 >> 0x10 | uVar10 << 0x10)) {
        FUN_10972db20((long)param_1 + 10,param_2);
      }
    }
  }
  return;
}



/* Entry: 10972d98c; end: 10972db1f;  */

undefined8 FUN_10972d98c(ushort *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint auStack_50 [2];
  ushort *puStack_48;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 != 0) {
    puVar1 = (ushort *)(param_3 + (ulong)uVar5);
    puVar2 = puVar1 + 1;
    if (((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)((long)puVar2 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar4 = *puVar1;
      iVar3 = ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
      if (((uint)(iVar3 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar2)) &&
         (iVar3 = *(int *)(param_2 + 0x1c) + iVar3 * -2, *(int *)(param_2 + 0x1c) = iVar3, 0 < iVar3
         )) {
        uVar6 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
        uVar8 = (ulong)uVar6;
        if (uVar6 == 0) {
          return 1;
        }
        lVar9 = param_3 + (ulong)uVar5 + 7;
        lVar10 = param_3 + (ulong)uVar5 + 8;
        while (uVar5 = (*(uint *)(lVar9 + -5) & 0xff00ff00) >> 8 |
                       (*(uint *)(lVar9 + -5) & 0xff00ff) << 8,
              auStack_50[0] = uVar5 >> 0x10 | uVar5 << 0x10,
              (ulong)(lVar10 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
          uVar5 = (uint)(*(ushort *)(lVar9 + -1) >> 8) | (*(ushort *)(lVar9 + -1) & 0xff00ff) << 8;
          if (uVar5 != 0) {
            uVar7 = (long)puVar1 + (ulong)uVar5;
            puStack_48 = puVar1;
            FUN_10972dfb4(uVar7,param_2,auStack_50);
            if ((uVar7 & 1) == 0) {
              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                 (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                 *(char *)(param_2 + 0x28) != '\x01')) break;
              *(undefined2 *)(lVar9 + -1) = 0;
            }
          }
          lVar9 = lVar9 + 6;
          lVar10 = lVar10 + 6;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 1;
          }
        }
      }
    }
    if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
       (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
       *(char *)(param_2 + 0x28) != '\x01')) {
      return 0;
    }
    *param_1 = 0;
  }
  return 1;
}



/* Entry: 10972db20; end: 10972df47;  */

undefined8 FUN_10972db20(uint *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar12 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  if (uVar12 != 0) {
    puVar1 = (ushort *)(param_3 + (ulong)uVar12);
    if ((((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (4 - *(long *)(param_2 + 8))))
          || ((ushort)(*puVar1 >> 8 | *puVar1 << 8) != 1)) ||
         (puVar3 = puVar1 + 4,
         (ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 - *(long *)(param_2 + 8)))) ||
        ((0x1f < (byte)puVar1[2] ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 - *(long *)(param_2 + 8)))))) ||
       ((uVar7 = ((uint)(byte)puVar1[2] << 0x18 | (uint)*(byte *)((long)puVar1 + 5) << 0x10 |
                 (uint)*(byte *)((long)puVar1 + 7)) << 3 | (uint)(byte)puVar1[3] << 0xb,
        (uint)(*(int *)(param_2 + 0x10) - (int)puVar3) < uVar7 ||
        (iVar9 = *(int *)(param_2 + 0x1c) - uVar7, *(int *)(param_2 + 0x1c) = iVar9, iVar9 < 1)))) {
LAB_10972db88:
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
    else {
      uVar7 = (*(uint *)(puVar1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar1 + 2) & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (uVar7 != 0) {
        uVar16 = 0;
        param_3 = param_3 + (ulong)uVar12;
        do {
          puVar5 = (uint *)(puVar3 + uVar16 * 4);
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)(puVar5 + 1) - *(long *)(param_2 + 8))) goto LAB_10972db88;
          uVar12 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
          uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
          if (uVar12 != 0) {
            puVar2 = (ushort *)((long)puVar1 + (ulong)uVar12);
            puVar14 = (uint *)(puVar2 + 1);
            if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar14 - *(long *)(param_2 + 8))
                 ) || ((ulong)*(uint *)(param_2 + 0x18) <
                       (ulong)((long)puVar14 - *(long *)(param_2 + 8)))) ||
               ((uVar8 = (uint)(byte)*puVar2 << 10 | (uint)*(byte *)((long)puVar2 + 1) << 2,
                (uint)(*(int *)(param_2 + 0x10) - (int)puVar14) < uVar8 ||
                (iVar9 = *(int *)(param_2 + 0x1c) - uVar8, *(int *)(param_2 + 0x1c) = iVar9,
                iVar9 < 1)))) {
LAB_10972deec:
              uVar12 = *(uint *)(param_2 + 0x2c);
LAB_10972def0:
              if ((0x1f < uVar12) ||
                 (*(uint *)(param_2 + 0x2c) = uVar12 + 1, *(char *)(param_2 + 0x28) != '\x01'))
              goto LAB_10972db88;
              *puVar5 = 0;
            }
            else {
              uVar8 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
              uVar13 = (ulong)uVar8;
              if (uVar8 != 0) {
                lVar15 = param_3 + 6 + (ulong)uVar12;
                do {
                  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar15 - *(long *)(param_2 + 8)))
                  goto LAB_10972deec;
                  uVar12 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
                  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                  if (uVar12 != 0) {
                    pbVar10 = (byte *)((long)puVar2 + (ulong)uVar12);
                    FUN_10972ecc4(pbVar10,param_2);
                    if (((ulong)pbVar10 & 1) == 0) {
                      if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_10972db88;
                      uVar12 = *(uint *)(param_2 + 0x2c) + 1;
                      *(uint *)(param_2 + 0x2c) = uVar12;
                      if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_10972def0;
                      *puVar14 = 0;
                    }
                  }
                  puVar14 = puVar14 + 1;
                  lVar15 = lVar15 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
          }
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar5 + (8 - *(long *)(param_2 + 8)))) goto LAB_10972db88;
          uVar12 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
          uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
          if (uVar12 != 0) {
            puVar2 = (ushort *)((long)puVar1 + (ulong)uVar12);
            if (((((ulong)((long)puVar2 + (4 - *(long *)(param_2 + 8))) <=
                   (ulong)*(uint *)(param_2 + 0x18)) && ((ushort)(*puVar2 >> 8 | *puVar2 << 8) == 1)
                 ) && (puVar4 = puVar2 + 3,
                      (ulong)((long)puVar4 - *(long *)(param_2 + 8)) <=
                      (ulong)*(uint *)(param_2 + 0x18))) &&
               ((ulong)((long)puVar4 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
            {
              uVar6 = puVar2[2];
              iVar9 = ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) * 2 +
                      ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
              if (((uint)(iVar9 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar4)) &&
                 (iVar9 = *(int *)(param_2 + 0x1c) + iVar9 * -2, *(int *)(param_2 + 0x1c) = iVar9,
                 0 < iVar9)) {
                uVar8 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
                uVar13 = (ulong)uVar8;
                if (uVar8 != 0) {
                  puVar14 = (uint *)(param_3 + 8 + (ulong)uVar12);
                  lVar15 = param_3 + 0xc + (ulong)uVar12;
                  do {
                    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar15 - *(long *)(param_2 + 8)))
                    goto LAB_10972ddbc;
                    uVar12 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
                    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                    if (uVar12 != 0) {
                      uVar11 = (long)puVar2 + (ulong)uVar12;
                      FUN_10972dfb4(uVar11,param_2,0);
                      if ((uVar11 & 1) == 0) {
                        if (0x1f < *(uint *)(param_2 + 0x2c)) goto LAB_10972db88;
                        uVar12 = *(uint *)(param_2 + 0x2c) + 1;
                        *(uint *)(param_2 + 0x2c) = uVar12;
                        if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_10972ddc0;
                        *puVar14 = 0;
                      }
                    }
                    puVar14 = (uint *)((long)puVar14 + 6);
                    lVar15 = lVar15 + 6;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                goto LAB_10972dedc;
              }
            }
LAB_10972ddbc:
            uVar12 = *(uint *)(param_2 + 0x2c);
LAB_10972ddc0:
            if ((0x1f < uVar12) ||
               (*(uint *)(param_2 + 0x2c) = uVar12 + 1, *(char *)(param_2 + 0x28) != '\x01'))
            goto LAB_10972db88;
            puVar5[1] = 0;
          }
LAB_10972dedc:
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar7);
      }
    }
  }
  return 1;
}



/* Entry: 10972df48; end: 10972dfb3;  */

bool FUN_10972df48(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 2;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 9 | (uint)param_1[1] << 1,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}



/* Entry: 10972dfb4; end: 10972e0cf;  */

ushort * FUN_10972dfb4(ushort *param_1,long param_2,int *param_3)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  
  if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
      (char *)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return (ushort *)0x0;
  }
  puVar2 = param_1 + 1;
  FUN_10972df48();
  if ((int)puVar2 != 0) {
    uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
    if (uVar1 != 0) {
      if (param_3 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *param_3;
      }
      puVar2 = param_1;
      FUN_10972e0d0(param_1,param_2,param_1,iVar3);
      if ((int)puVar2 == 0) {
        return puVar2;
      }
      if (param_3 == (int *)0x0) {
        return (ushort *)0x1;
      }
      if (*(char *)((long)param_1 + 1) != '\0' || (char)*param_1 != '\0') {
        return (ushort *)0x1;
      }
      if (*param_3 != 0x73697a65) {
        return (ushort *)0x1;
      }
      puVar2 = *(ushort **)(param_3 + 2);
      if (puVar2 == (ushort *)0x0) {
        return (ushort *)0x1;
      }
      if (param_1 <= puVar2) {
        return (ushort *)0x1;
      }
      uVar1 = uVar1 + ((int)puVar2 - (int)param_1);
      if (((uVar1 >> 0x10 == 0) && (*(uint *)(param_2 + 0x2c) < 0x20)) &&
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) == '\x01')) {
        *param_1 = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
        FUN_10972e0d0(param_1,param_2,param_1,*param_3);
        if ((int)param_1 == 0) {
          return param_1;
        }
      }
    }
    puVar2 = (ushort *)0x1;
  }
  return puVar2;
}



/* Entry: 10972e0d0; end: 10972e2cf;  */

undefined8 FUN_10972e0d0(ushort *param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar4 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar4 == 0) {
    return 1;
  }
  puVar1 = (ushort *)(param_3 + (ulong)uVar4);
  if (param_4 == 0x73697a65) {
    if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (10 - *(long *)(param_2 + 8))))
       || (uVar3 = *puVar1 >> 8 | *puVar1 << 8, uVar3 == 0)) goto LAB_10972e230;
    if ((*(char *)((long)puVar1 + 3) == '\0' && (char)puVar1[1] == '\0') &&
       (((*(char *)((long)puVar1 + 5) == '\0' && (char)puVar1[2] == '\0' &&
         (*(char *)((long)puVar1 + 7) == '\0' && (char)puVar1[3] == '\0')) &&
        (*(char *)((long)puVar1 + 9) == '\0' && (char)puVar1[4] == '\0')))) {
      return 1;
    }
    if ((uVar3 < (ushort)(puVar1[3] >> 8 | puVar1[3] << 8)) ||
       ((ushort)(puVar1[4] >> 8 | puVar1[4] << 8) < uVar3)) goto LAB_10972e230;
    iVar5 = (int)(char)puVar1[2];
  }
  else {
    if ((param_4 & 0xffff0000) != 0x63760000) {
      if ((param_4 & 0xffff0000) != 0x73730000) {
        return 1;
      }
      if ((ulong)((long)puVar1 + (4 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
      {
        return 1;
      }
      goto LAB_10972e230;
    }
    puVar2 = puVar1 + 7;
    if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))) ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))))
    goto LAB_10972e230;
    uVar3 = puVar1[6];
    uVar4 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
            ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
    if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar2) < uVar4) goto LAB_10972e230;
    iVar5 = *(int *)(param_2 + 0x1c) - uVar4;
    *(int *)(param_2 + 0x1c) = iVar5;
  }
  if (0 < iVar5) {
    return 1;
  }
LAB_10972e230:
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10972e2d0; end: 10972e77b;  */

void FUN_10972e2d0(ushort *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  
  puVar4 = param_1 + 1;
  if ((ulong)((long)puVar4 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar1 = *param_1 >> 8 | *param_1 << 8;
    if (uVar1 == 3) {
      puVar4 = param_1 + 3;
      if ((ulong)((long)puVar4 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
        uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
        uVar7 = (ulong)uVar2;
        if ((((uVar2 != 0) &&
             ((ulong)((long)puVar4 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
            && (uVar2 * 2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar4))) &&
           (iVar3 = *(int *)(param_2 + 0x1c) + uVar2 * -2, *(int *)(param_2 + 0x1c) = iVar3,
           puVar5 = puVar4, 0 < iVar3)) {
          do {
            puVar6 = puVar5;
            FUN_10972ba4c(puVar5,param_2,param_1);
            if (((ulong)puVar6 & 1) == 0) {
              return;
            }
            uVar7 = uVar7 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
          if (((ulong)((long)(puVar4 + (ulong)*(byte *)((long)param_1 + 3) +
                                       (ulong)(byte)param_1[1] * 0x100) - *(long *)(param_2 + 8)) <=
               (ulong)*(uint *)(param_2 + 0x18)) &&
             (uVar2 = (uint)(byte)param_1[2] << 10 | (uint)*(byte *)((long)param_1 + 5) << 2,
             uVar2 <= (uint)(*(int *)(param_2 + 0x10) -
                            (int)(puVar4 + (ulong)*(byte *)((long)param_1 + 3) +
                                           (ulong)(byte)param_1[1] * 0x100)))) {
            *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - uVar2;
          }
        }
      }
    }
    else if (uVar1 == 2) {
      FUN_10972ba4c(puVar4,param_2,param_1);
      if ((int)puVar4 != 0) {
        puVar4 = param_1 + 2;
        FUN_10972b758(puVar4,param_2,param_1);
        if ((int)puVar4 != 0) {
          puVar4 = param_1 + 3;
          FUN_10972e77c(puVar4,param_2);
          if (((int)puVar4 != 0) &&
             (uVar2 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8, uVar7 = (ulong)uVar2,
             uVar2 != 0)) {
            puVar4 = param_1 + 4;
            do {
              uVar7 = uVar7 - 1;
              puVar5 = puVar4;
              func_0x00010972e7e8(puVar4,param_2,param_1);
              if ((int)puVar5 == 0) {
                return;
              }
              puVar4 = puVar4 + 1;
            } while (uVar7 != 0);
          }
        }
      }
    }
    else if ((uVar1 == 1) && (FUN_10972ba4c(puVar4,param_2,param_1), (int)puVar4 != 0)) {
      puVar4 = param_1 + 2;
      FUN_10972e77c(puVar4,param_2);
      if (((int)puVar4 != 0) &&
         (uVar2 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8, uVar7 = (ulong)uVar2,
         uVar2 != 0)) {
        puVar4 = param_1 + 3;
        do {
          uVar7 = uVar7 - 1;
          puVar5 = puVar4;
          func_0x00010972e7e8(puVar4,param_2,param_1);
          if ((int)puVar5 == 0) {
            return;
          }
          puVar4 = puVar4 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}



/* Entry: 10972e77c; end: 10972e9fb;  */

bool FUN_10972e77c(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 2;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 9 | (uint)param_1[1] << 1,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}



/* Entry: 10972e9fc; end: 10972ebeb;  */

undefined8 FUN_10972e9fc(ushort *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar3 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar3 != 0) {
    puVar1 = (ushort *)(param_3 + (ulong)uVar3);
    puVar8 = puVar1 + 1;
    if (((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar8 - *(long *)(param_2 + 8))) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar8 - *(long *)(param_2 + 8)))) ||
        (uVar2 = (uint)(byte)*puVar1 << 9 | (uint)*(byte *)((long)puVar1 + 1) << 1,
        (uint)(*(int *)(param_2 + 0x10) - (int)puVar8) < uVar2)) ||
       (iVar4 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar4, iVar4 < 1)) {
LAB_10972ebb4:
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
    else {
      uVar2 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
      uVar9 = (ulong)uVar2;
      if (uVar2 != 0) {
        lVar10 = param_3 + (ulong)uVar3 + 4;
        do {
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar10 - *(long *)(param_2 + 8)))
          goto LAB_10972ebb4;
          uVar3 = (uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8;
          if (uVar3 != 0) {
            pbVar7 = (byte *)((long)puVar1 + (ulong)uVar3);
            if ((pbVar7 + (2 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18))
               && (lVar5 = (ulong)*pbVar7 * 0x200 + (ulong)pbVar7[1] * 2,
                  pbVar7 + (lVar5 - *(long *)(param_2 + 8)) + 4 <=
                  (byte *)(ulong)*(uint *)(param_2 + 0x18))) {
              puVar6 = (ushort *)(pbVar7 + lVar5 + 2);
              uVar3 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
              iVar4 = 0;
              if (uVar3 != 0) {
                iVar4 = uVar3 - 1;
              }
              uVar3 = iVar4 << 1;
              if ((byte *)((long)puVar6 + ((ulong)uVar3 - *(long *)(param_2 + 8)) + 4) <=
                  (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
                pbVar7 = (byte *)((long)puVar6 + (ulong)uVar3 + 2);
                pbVar7 = pbVar7 + (ulong)*pbVar7 * 0x200 +
                                  (ulong)*(byte *)((long)puVar6 + (ulong)uVar3 + 3) * 2 + 2;
                FUN_10972ebec(pbVar7,param_2);
                if (((ulong)pbVar7 & 1) != 0) goto LAB_10972eb8c;
              }
            }
            if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
               (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
               *(char *)(param_2 + 0x28) != '\x01')) goto LAB_10972ebb4;
            *puVar8 = 0;
          }
LAB_10972eb8c:
          puVar8 = puVar8 + 1;
          lVar10 = lVar10 + 2;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return 1;
}



/* Entry: 10972ebec; end: 10972ecc3;  */

bool FUN_10972ebec(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 2;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 10 | (uint)param_1[1] << 2,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}



/* Entry: 10972ecc4; end: 10972ee17;  */

ushort * FUN_10972ecc4(ushort *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  
  puVar3 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 - *(long *)(param_2 + 8))) {
    puVar3 = (ushort *)0x0;
  }
  else {
    uVar2 = *param_1 >> 8 | *param_1 << 8;
    if (uVar2 < 3) {
      if ((uVar2 != 1) && (uVar2 != 2)) {
        return (ushort *)0x1;
      }
      return (ushort *)
             (ulong)((ulong)((long)param_1 + (8 - *(long *)(param_2 + 8))) <=
                    (ulong)*(uint *)(param_2 + 0x18));
    }
    if (uVar2 == 3) {
      puVar4 = puVar3;
      FUN_10972ee18(puVar3,param_2);
      if ((int)puVar4 == 0) {
        return puVar4;
      }
      uVar5 = (ulong)(byte)*puVar3;
      puVar3 = param_1;
      if (uVar5 != 0) {
        do {
          uVar5 = uVar5 - 1;
          puVar3 = (ushort *)((long)puVar3 + 3);
          puVar4 = puVar3;
          FUN_10972ee7c(puVar3,param_2,param_1);
          if ((int)puVar4 == 0) {
            return puVar4;
          }
        } while (uVar5 != 0);
        return puVar4;
      }
    }
    else {
      if (uVar2 != 4) {
        if (uVar2 != 5) {
          return (ushort *)0x1;
        }
        if ((byte *)((long)puVar3 + (3 - *(long *)(param_2 + 8))) <=
            (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
          uVar1 = (uint)(byte)*puVar3 << 0x10 | (uint)*(byte *)((long)param_1 + 3) << 8 |
                  (uint)(byte)param_1[2];
          if (uVar1 != 0) {
            uVar5 = (long)param_1 + (ulong)uVar1;
            FUN_10972ecc4();
            if ((uVar5 & 1) == 0) {
              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                 (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                 *(char *)(param_2 + 0x28) != '\x01')) {
                return (ushort *)0x0;
              }
              *puVar3 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
            }
          }
          return (ushort *)0x1;
        }
        return (ushort *)0x0;
      }
      puVar4 = puVar3;
      FUN_10972ee18(puVar3,param_2);
      if ((int)puVar4 == 0) {
        return puVar4;
      }
      uVar5 = (ulong)(byte)*puVar3;
      puVar3 = param_1;
      if (uVar5 != 0) {
        do {
          uVar5 = uVar5 - 1;
          puVar3 = (ushort *)((long)puVar3 + 3);
          puVar4 = puVar3;
          FUN_10972ee7c(puVar3,param_2,param_1);
          if ((int)puVar4 == 0) {
            return puVar4;
          }
        } while (uVar5 != 0);
        return puVar4;
      }
    }
    puVar3 = (ushort *)0x1;
  }
  return puVar3;
}



/* Entry: 10972ee18; end: 10972ee7b;  */

bool FUN_10972ee18(byte *param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = param_1 + 1;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     ((uint)*param_1 * 3 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar2 = *(int *)(param_2 + 0x1c) + (uint)*param_1 * -3;
    *(int *)(param_2 + 0x1c) = iVar2;
    return 0 < iVar2;
  }
  return false;
}



/* Entry: 10972ee7c; end: 10972ef8b;  */

undefined8 FUN_10972ee7c(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (3 - *(long *)(param_2 + 8))) {
    return 0;
  }
  uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    FUN_10972ecc4();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return 1;
}



/* Entry: 10972ef8c; end: 10972f00b;  */

void FUN_10972ef8c(undefined8 *param_1)

{
  ulong uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    if (*(int *)(param_1 + 1) != 0) {
      uVar1 = 0;
      do {
        _free(*(undefined8 *)(param_1[2] + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 1));
    }
    _free(param_1[2]);
    FUN_1096f5a5c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10972f00c; end: 10972f2bf;  */

undefined8 * FUN_10972f00c(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar10;
  long lVar11;
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
  int *piVar9;
  
  puVar5 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar5 != (undefined8 *)0x0) {
    auStack_90[0] = 0;
    iStack_64 = 0;
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    bStack_68 = 0;
    iStack_58 = 0x10000;
    uStack_54 = 0x100;
    iVar4 = param_1[6];
    if (iVar4 == -1) {
      piVar9 = param_1;
      FUN_109710978();
      iVar4 = (int)piVar9;
    }
    uStack_54 = CONCAT11(uStack_54._1_1_,1);
    piVar9 = (int *)&UNK_10dfe4888;
    iStack_58 = iVar4;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(param_1,0x47504f53,*(undefined8 *)(param_1 + 10));
      piVar9 = param_1;
      if (param_1 == (int *)0x0) {
        piVar9 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar9 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_60 = piVar9;
    bVar3 = 0;
    do {
      bStack_68 = bVar3;
      lVar11 = *(long *)(piStack_60 + 4);
      uStack_78._0_4_ = piStack_60[6];
      uStack_80 = lVar11 + (ulong)(uint)uStack_78;
      uVar10 = (uint)uStack_78 << 6;
      if (uVar10 < 0x4001) {
        uVar10 = 0x4000;
      }
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar10;
      }
      iStack_64 = 0;
      auStack_90[0] = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      lStack_88 = lVar11;
      if (lVar11 == 0) {
        FUN_1096f5a5c();
        piStack_60 = (int *)0x0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        goto LAB_10972f1b0;
      }
      lVar6 = lVar11;
      FUN_10972f2c0(lVar11,auStack_90);
      if ((int)lVar6 != 0) {
        if (iStack_64 == 0) {
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        }
        else {
          iStack_64 = 0;
          FUN_10972f2c0(lVar11,auStack_90);
          iVar4 = iStack_64;
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          uVar10 = 0;
          if (iVar4 == 0) {
            uVar10 = (uint)lVar11;
          }
          if ((uVar10 & 1) == 0) goto LAB_10972f1a0;
        }
        piStack_60 = (int *)0x0;
        uStack_80 = 0;
        lStack_88 = 0;
        if (piVar9[1] != 0) {
          piVar9[1] = 0;
        }
        goto LAB_10972f1b0;
      }
      if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10972f18c;
      if ((piVar9[1] == 0) || (piVar7 = piVar9, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
        uStack_80 = (ulong)(uint)piVar9[6];
        lStack_88 = 0;
        goto LAB_10972f18c;
      }
      uStack_80 = *(long *)(piVar9 + 4) + (ulong)(uint)piVar9[6];
      bVar3 = 1;
    } while (*(long *)(piVar9 + 4) != 0);
    lStack_88 = 0;
LAB_10972f18c:
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10972f1a0:
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    FUN_1096f5a5c(piVar9);
    piVar9 = (int *)&UNK_10dfe4888;
LAB_10972f1b0:
    *puVar5 = piVar9;
    piVar7 = (int *)&UNK_10dfe4888;
    if (3 < (uint)piVar9[6]) {
      piVar7 = *(int **)(piVar9 + 4);
    }
    func_0x000109700ec8();
    *(int *)(puVar5 + 1) = (int)piVar7;
    uVar8 = (ulong)piVar7 & 0xffffffff;
    _calloc(uVar8,8);
    puVar5[2] = uVar8;
    if (uVar8 == 0) {
      *(undefined4 *)(puVar5 + 1) = 0;
      FUN_1096f5a5c(piVar9);
      *puVar5 = &UNK_10dfe4888;
    }
    FUN_109710c0c(auStack_90);
  }
  return puVar5;
}



/* Entry: 10972f2c0; end: 10973039f;  */

void FUN_10972f2c0(uint *param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ushort *puVar26;
  ushort uVar27;
  ushort *puVar28;
  int iVar29;
  ulong uVar30;
  ushort *puVar31;
  ulong uVar32;
  ulong uVar33;
  byte bVar34;
  uint uStack_70;
  uint uStack_6c;
  
  puVar14 = param_1 + 1;
  if ((((ulong)((long)puVar14 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ushort)((ushort)*param_1 >> 8 | (ushort)*param_1 << 8) == 1)) &&
     (func_0x00010972d67c(puVar14,param_2,param_1), (int)puVar14 != 0)) {
    lVar15 = (long)param_1 + 6;
    FUN_10972d98c(lVar15,param_2,param_1);
    if (((int)lVar15 != 0) &&
       ((ulong)(((long)param_1 + 10) - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
    {
      uVar10 = (uint)(ushort)((ushort)param_1[2] >> 8) | ((ushort)param_1[2] & 0xff00ff) << 8;
      if (uVar10 != 0) {
        puVar1 = (ushort *)((long)param_1 + (ulong)uVar10);
        puVar4 = puVar1 + 1;
        if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar4 - *(long *)(param_2 + 8))) ||
            ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar4 - *(long *)(param_2 + 8)))) ||
           ((uVar8 = (uint)(byte)*puVar1 << 9 | (uint)*(byte *)((long)puVar1 + 1) << 1,
            (uint)(*(int *)(param_2 + 0x10) - (int)puVar4) < uVar8 ||
            (iVar23 = *(int *)(param_2 + 0x1c) - uVar8, *(int *)(param_2 + 0x1c) = iVar23,
            iVar23 < 1)))) {
LAB_109730328:
          if (0x1f < *(uint *)(param_2 + 0x2c)) {
            return;
          }
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
          if (*(char *)(param_2 + 0x28) != '\x01') {
            return;
          }
          *(undefined2 *)(param_1 + 2) = 0;
        }
        else {
          uVar8 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
          if (uVar8 != 0) {
            uVar33 = 0;
            do {
              puVar5 = puVar4 + uVar33;
              if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                  (byte *)((long)puVar5 + (2 - *(long *)(param_2 + 8)))) goto LAB_109730328;
              uVar11 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
              if (uVar11 != 0) {
                puVar2 = (ushort *)((long)puVar1 + (ulong)uVar11);
                puVar26 = puVar2 + 3;
                if ((ulong)((long)puVar26 - *(long *)(param_2 + 8)) <=
                    (ulong)*(uint *)(param_2 + 0x18)) {
                  puVar28 = puVar2 + 2;
                  puVar16 = puVar28;
                  func_0x00010972e264(puVar28,param_2);
                  if ((int)puVar16 != 0) {
                    uVar27 = puVar2[2];
                    iVar23 = *(int *)(param_2 + 0x20) +
                             ((uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8);
                    *(int *)(param_2 + 0x20) = iVar23;
                    if (iVar23 < 0x4000) {
                      if ((((((*(byte *)((long)puVar2 + 3) >> 4 & 1) == 0) ||
                            ((byte *)((long)puVar28 +
                                     (((ulong)(byte)puVar2[2] * 0x200 +
                                      (ulong)*(byte *)((long)puVar2 + 5) * 2) -
                                     *(long *)(param_2 + 8)) + 4) <=
                             (byte *)(ulong)*(uint *)(param_2 + 0x18))) &&
                           ((byte *)((long)puVar26 - *(long *)(param_2 + 8)) <=
                            (byte *)(ulong)*(uint *)(param_2 + 0x18))) &&
                          ((uVar21 = *puVar2,
                           (ulong)((long)puVar26 - *(long *)(param_2 + 8)) <=
                           (ulong)*(uint *)(param_2 + 0x18) &&
                           (uVar9 = (uint)(byte)puVar2[2] << 9 |
                                    (uint)*(byte *)((long)puVar2 + 5) << 1,
                           uVar9 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar26))))) &&
                         (iVar23 = *(int *)(param_2 + 0x1c) - uVar9,
                         *(int *)(param_2 + 0x1c) = iVar23, 0 < iVar23)) {
                        uVar9 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
                        if (uVar9 != 0) {
                          uVar32 = 0;
                          do {
                            puVar28 = puVar26 + uVar32;
                            if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                (byte *)((long)puVar28 + (2 - *(long *)(param_2 + 8))))
                            goto LAB_10972f450;
                            uVar13 = (uint)(*puVar28 >> 8) | (*puVar28 & 0xff00ff) << 8;
                            if (uVar13 == 0) goto LAB_10972fed8;
                            puVar16 = (ushort *)((long)puVar2 + (ulong)uVar13);
                            uVar20 = uVar21 >> 8 | uVar21 << 8;
                            while (uVar20 == 9) {
                              if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                  (byte *)((long)puVar16 + (2 - *(long *)(param_2 + 8))))
                              goto LAB_10972feb4;
                              if ((ushort)(*puVar16 >> 8 | *puVar16 << 8) != 1) goto LAB_10972fed8;
                              if (((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                   (byte *)((long)puVar16 + (8 - *(long *)(param_2 + 8)))) ||
                                 ((ushort)(puVar16[1] >> 8 | puVar16[1] << 8) == 9))
                              goto LAB_10972feb4;
                              uVar13 = (*(uint *)(puVar16 + 2) & 0xff00ff00) >> 8 |
                                       (*(uint *)(puVar16 + 2) & 0xff00ff) << 8;
                              uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
                              puVar19 = (ushort *)((long)puVar16 + (ulong)uVar13);
                              puVar17 = puVar16 + 1;
                              puVar16 = (ushort *)&UNK_10dfe4888;
                              if (uVar13 != 0) {
                                puVar16 = puVar19;
                              }
                              uVar20 = *puVar17 >> 8 | *puVar17 << 8;
                            }
                            if (uVar20 < 5) {
                              if (uVar20 < 3) {
                                if (uVar20 == 1) {
                                  puVar17 = puVar16 + 1;
                                  if ((ulong)((long)puVar17 - *(long *)(param_2 + 8)) <=
                                      (ulong)*(uint *)(param_2 + 0x18)) {
                                    uVar20 = *puVar16 >> 8 | *puVar16 << 8;
                                    if (uVar20 == 2) {
                                      puVar19 = puVar16 + 4;
                                      if ((((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                            (ulong)*(uint *)(param_2 + 0x18)) &&
                                          (FUN_10972ba4c(puVar17,param_2,puVar16), (int)puVar17 != 0
                                          )) && ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                                 (ulong)*(uint *)(param_2 + 0x18))) {
                                        uVar20 = puVar16[3];
                                        bVar6 = *(byte *)((long)puVar16 + 7);
                                        uVar13 = (uint)CONCAT11((byte)uVar20,bVar6);
                                        bVar34 = POPCOUNT((char)(puVar16[2] >> 8)) +
                                                 POPCOUNT((char)puVar16[2]);
                                        uVar3 = (uint)bVar34 * 2 * uVar13;
                                        if ((uVar3 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar19
                                                            )) &&
                                           (iVar23 = *(int *)(param_2 + 0x1c) - uVar3,
                                           *(int *)(param_2 + 0x1c) = iVar23, 0 < iVar23)) {
                                          if (((*(byte *)(param_2 + 0x3d) & 1) == 0) &&
                                             ((uVar13 != 0 && (0xf < *(byte *)((long)puVar16 + 5))))
                                             ) {
                                            iVar23 = (uint)(byte)uVar20 * 0x100 + (uint)bVar6;
                                            do {
                                              uVar13 = (uint)*(byte *)((long)puVar16 + 5);
                                              FUN_1097303a0(*(byte *)((long)puVar16 + 5),param_2,
                                                            puVar16,puVar19);
                                              if (uVar13 == 0) goto LAB_10972feb4;
                                              puVar19 = puVar19 + bVar34;
                                              iVar23 = iVar23 + -1;
                                            } while (iVar23 != 0);
                                          }
                                          goto LAB_10972fed8;
                                        }
                                      }
                                    }
                                    else {
                                      if (uVar20 != 1) goto LAB_10972fed8;
                                      puVar19 = puVar16 + 3;
                                      if ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                          (ulong)*(uint *)(param_2 + 0x18)) {
                                        FUN_10972ba4c(puVar17,param_2,puVar16);
                                        if ((int)puVar17 != 0) {
                                          uVar3 = (uint)(puVar16[1] >> 8) |
                                                  (puVar16[1] & 0xff00ff) << 8;
                                          uVar13 = 0xdfe4888;
                                          if (uVar3 != 0) {
                                            uVar13 = (int)puVar16 + uVar3;
                                          }
                                          FUN_10972c068();
                                          uVar3 = *(uint *)(param_2 + 0x1c);
                                          uVar13 = uVar13 >> 1;
                                          iVar25 = uVar3 - uVar13;
                                          iVar23 = iVar25;
                                          if (0x7fffffff < uVar3 || (uVar13 > uVar3 || iVar25 == 0))
                                          {
                                            iVar23 = -1;
                                          }
                                          *(int *)(param_2 + 0x1c) = iVar23;
                                          if ((((uVar3 < 0x80000000 &&
                                                 (uVar13 <= uVar3 && iVar25 != 0)) &&
                                               ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                                (ulong)*(uint *)(param_2 + 0x18))) &&
                                              (uVar13 = (uint)(byte)(POPCOUNT((char)(puVar16[2] >> 8
                                                                                    )) +
                                                                    POPCOUNT((char)puVar16[2])),
                                              uVar13 * 2 <=
                                              (uint)(*(int *)(param_2 + 0x10) - (int)puVar19))) &&
                                             (iVar25 = iVar25 + uVar13 * -2,
                                             *(int *)(param_2 + 0x1c) = iVar25, 0 < iVar25)) {
                                            if (((*(byte *)(param_2 + 0x3d) & 1) == 0) &&
                                               (puVar17 = (ushort *)
                                                          (ulong)*(byte *)((long)puVar16 + 5),
                                               0xf < *(byte *)((long)puVar16 + 5))) {
                                              FUN_1097303a0(puVar17,param_2,puVar16,puVar19);
                                              puVar16 = puVar17;
                                              goto LAB_10972fea0;
                                            }
                                            goto LAB_10972fed8;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  if (uVar20 != 2) goto LAB_10972fed8;
                                  puVar17 = puVar16 + 1;
                                  if ((ulong)((long)puVar17 - *(long *)(param_2 + 8)) <=
                                      (ulong)*(uint *)(param_2 + 0x18)) {
                                    uVar20 = *puVar16 >> 8 | *puVar16 << 8;
                                    if (uVar20 == 2) {
                                      puVar19 = puVar16 + 8;
                                      if (((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                           (ulong)*(uint *)(param_2 + 0x18)) &&
                                         (FUN_10972ba4c(puVar17,param_2,puVar16), (int)puVar17 != 0)
                                         ) {
                                        puVar17 = puVar16 + 4;
                                        FUN_10972b758(puVar17,param_2,puVar16);
                                        if ((int)puVar17 != 0) {
                                          puVar17 = puVar16 + 5;
                                          FUN_10972b758(puVar17,param_2,puVar16);
                                          if ((int)puVar17 != 0) {
                                            uVar3 = (uint)(byte)(POPCOUNT((char)(puVar16[2] >> 8)) +
                                                                POPCOUNT((char)puVar16[2]));
                                            uVar30 = (ulong)(((byte)(POPCOUNT((char)(puVar16[3] >> 8
                                                                                    )) +
                                                                    POPCOUNT((char)puVar16[3])) +
                                                             uVar3) * 2);
                                            uVar20 = puVar16[6];
                                            bVar6 = *(byte *)((long)puVar16 + 0xd);
                                            uVar7 = puVar16[7];
                                            bVar34 = *(byte *)((long)puVar16 + 0xf);
                                            uVar13 = (uint)CONCAT11((byte)uVar7,bVar34) *
                                                     (uint)CONCAT11((byte)uVar20,bVar6);
                                            if (((((uVar13 * uVar30 & 0xffffffff00000000) == 0) &&
                                                 ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                                  (ulong)*(uint *)(param_2 + 0x18))) &&
                                                (uVar24 = (uint)(uVar13 * uVar30),
                                                uVar24 <= (uint)(*(int *)(param_2 + 0x10) -
                                                                (int)puVar19))) &&
                                               (iVar23 = *(int *)(param_2 + 0x1c) - uVar24,
                                               *(int *)(param_2 + 0x1c) = iVar23, 0 < iVar23)) {
                                              if ((*(byte *)(param_2 + 0x3d) & 1) == 0) {
                                                iVar25 = (uint)(byte)uVar20 * 0x100;
                                                iVar23 = (uint)(byte)uVar7 * 0x100;
                                                if ((uVar13 != 0) &&
                                                   (0xf < *(byte *)((long)puVar16 + 5))) {
                                                  iVar29 = (iVar23 + (uint)bVar34) *
                                                           (iVar25 + (uint)bVar6);
                                                  puVar17 = puVar19;
                                                  do {
                                                    uVar24 = (uint)*(byte *)((long)puVar16 + 5);
                                                    FUN_1097303a0(*(byte *)((long)puVar16 + 5),
                                                                  param_2,puVar16,puVar17);
                                                    if (uVar24 == 0) goto LAB_10972feb4;
                                                    puVar17 = (ushort *)((long)puVar17 + uVar30);
                                                    iVar29 = iVar29 + -1;
                                                  } while (iVar29 != 0);
                                                }
                                                if ((uVar13 != 0) &&
                                                   (0xf < *(byte *)((long)puVar16 + 7))) {
                                                  puVar19 = puVar19 + uVar3;
                                                  iVar23 = (iVar23 + (uint)bVar34) *
                                                           (iVar25 + (uint)bVar6);
                                                  do {
                                                    uVar13 = (uint)*(byte *)((long)puVar16 + 7);
                                                    FUN_1097303a0(*(byte *)((long)puVar16 + 7),
                                                                  param_2,puVar16,puVar19);
                                                    if (uVar13 == 0) goto LAB_10972feb4;
                                                    puVar19 = (ushort *)((long)puVar19 + uVar30);
                                                    iVar23 = iVar23 + -1;
                                                  } while (iVar23 != 0);
                                                }
                                              }
                                              goto LAB_10972fed8;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      if (uVar20 != 1) goto LAB_10972fed8;
                                      puVar19 = puVar16 + 5;
                                      if ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                          (ulong)*(uint *)(param_2 + 0x18)) {
                                        uVar20 = puVar16[2];
                                        uVar7 = puVar16[3];
                                        FUN_10972ba4c(puVar17,param_2,puVar16);
                                        if (((((int)puVar17 != 0) &&
                                             ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                              (ulong)*(uint *)(param_2 + 0x18))) &&
                                            ((ulong)((long)puVar19 - *(long *)(param_2 + 8)) <=
                                             (ulong)*(uint *)(param_2 + 0x18))) &&
                                           ((uVar13 = (uint)(byte)puVar16[4] << 9 |
                                                      (uint)*(byte *)((long)puVar16 + 9) << 1,
                                            uVar13 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar19
                                                            ) &&
                                            (iVar23 = *(int *)(param_2 + 0x1c) - uVar13,
                                            *(int *)(param_2 + 0x1c) = iVar23, 0 < iVar23)))) {
                                          uVar13 = (uint)(puVar16[4] >> 8) |
                                                   (puVar16[4] & 0xff00ff) << 8;
                                          if (uVar13 != 0) {
                                            uVar30 = 0;
                                            uVar24 = (uint)(byte)(POPCOUNT((char)(uVar20 >> 8)) +
                                                                 POPCOUNT((char)uVar20));
                                            uVar3 = ((byte)(POPCOUNT((char)(uVar7 >> 8)) +
                                                           POPCOUNT((char)uVar7)) + uVar24) * 2 + 2;
                                            do {
                                              puVar17 = puVar19 + uVar30;
                                              if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                                                  (byte *)((long)puVar17 +
                                                          (2 - *(long *)(param_2 + 8))))
                                              goto LAB_10972feb4;
                                              uVar22 = (uint)(*puVar17 >> 8) |
                                                       (*puVar17 & 0xff00ff) << 8;
                                              if (uVar22 != 0) {
                                                puVar18 = (ushort *)((long)puVar16 + (ulong)uVar22);
                                                puVar31 = puVar18 + 1;
                                                if ((((ulong)*(uint *)(param_2 + 0x18) <
                                                      (ulong)((long)puVar31 - *(long *)(param_2 + 8)
                                                             )) ||
                                                    ((ulong)*(uint *)(param_2 + 0x18) <
                                                     (ulong)((long)puVar31 - *(long *)(param_2 + 8))
                                                    )) || ((uVar22 = ((uint)(*puVar18 >> 8) |
                                                                     (*puVar18 & 0xff00ff) << 8) *
                                                                     uVar3,
                                                           (uint)(*(int *)(param_2 + 0x10) -
                                                                 (int)puVar31) < uVar22 ||
                                                           (iVar23 = *(int *)(param_2 + 0x1c) -
                                                                     uVar22,
                                                           *(int *)(param_2 + 0x1c) = iVar23,
                                                           iVar23 < 1)))) {
LAB_10972f8cc:
                                                  if (0x1f < *(uint *)(param_2 + 0x2c))
                                                  goto LAB_109730328;
                                                  uVar22 = *(uint *)(param_2 + 0x2c) + 1;
                                                  *(uint *)(param_2 + 0x2c) = uVar22;
                                                  if (*(char *)(param_2 + 0x28) != '\x01')
                                                  goto LAB_10972feb8;
                                                  *puVar17 = 0;
                                                }
                                                else if ((*(byte *)(param_2 + 0x3d) & 1) == 0) {
                                                  iVar23 = (uint)(byte)*puVar18 * 0x100;
                                                  bVar6 = *(byte *)((long)puVar18 + 1);
                                                  sVar12 = CONCAT11((byte)*puVar18,bVar6);
                                                  if (sVar12 != 0 &&
                                                      0xf < *(byte *)((long)puVar16 + 5)) {
                                                    iVar25 = iVar23 + (uint)bVar6;
                                                    puVar31 = puVar18 + 2;
                                                    do {
                                                      uVar22 = (uint)*(byte *)((long)puVar16 + 5);
                                                      FUN_1097303a0(*(byte *)((long)puVar16 + 5),
                                                                    param_2,puVar18,puVar31);
                                                      if (uVar22 == 0) goto LAB_10972f8cc;
                                                      puVar31 = (ushort *)
                                                                ((long)puVar31 + (ulong)uVar3);
                                                      iVar25 = iVar25 + -1;
                                                    } while (iVar25 != 0);
                                                  }
                                                  if ((sVar12 != 0) &&
                                                     (0xf < *(byte *)((long)puVar16 + 7))) {
                                                    puVar31 = puVar18 + 2 + uVar24;
                                                    iVar23 = iVar23 + (uint)bVar6;
                                                    do {
                                                      uVar22 = (uint)*(byte *)((long)puVar16 + 7);
                                                      FUN_1097303a0(*(byte *)((long)puVar16 + 7),
                                                                    param_2,puVar18,puVar31);
                                                      if (uVar22 == 0) goto LAB_10972f8cc;
                                                      puVar31 = (ushort *)
                                                                ((long)puVar31 + (ulong)uVar3);
                                                      iVar23 = iVar23 + -1;
                                                    } while (iVar23 != 0);
                                                  }
                                                }
                                              }
                                              uVar30 = uVar30 + 1;
                                            } while (uVar30 != uVar13);
                                          }
                                          goto LAB_10972fed8;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_10972feb4;
                              }
                              if (uVar20 == 3) {
                                puVar17 = puVar16 + 1;
                                if ((ulong)*(uint *)(param_2 + 0x18) <
                                    (ulong)((long)puVar17 - *(long *)(param_2 + 8)))
                                goto LAB_10972feb4;
                                if ((ushort)(*puVar16 >> 8 | *puVar16 << 8) == 1) {
                                  FUN_10972ba4c(puVar17,param_2,puVar16);
                                  if (((((int)puVar17 == 0) ||
                                       (puVar17 = puVar16 + 3,
                                       (ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar17 - *(long *)(param_2 + 8)))) ||
                                      ((ulong)*(uint *)(param_2 + 0x18) <
                                       (ulong)((long)puVar17 - *(long *)(param_2 + 8)))) ||
                                     (uVar13 = (uint)(byte)puVar16[2] << 10 |
                                               (uint)*(byte *)((long)puVar16 + 5) << 2,
                                     (uint)(*(int *)(param_2 + 0x10) - (int)puVar17) < uVar13))
                                  goto LAB_10972feb4;
                                  iVar23 = *(int *)(param_2 + 0x1c) - uVar13;
                                  *(int *)(param_2 + 0x1c) = iVar23;
                                  if (((*(byte *)(param_2 + 0x3d) & 1) == 0) && (0 < iVar23)) {
                                    uVar13 = (uint)(puVar16[2] >> 8) | (puVar16[2] & 0xff00ff) << 8;
                                    uVar30 = (ulong)uVar13;
                                    if (uVar13 != 0) {
                                      puVar17 = puVar16 + 4;
                                      do {
                                        puVar19 = puVar17 + -1;
                                        func_0x0001097304fc(puVar19,param_2,puVar16);
                                        if (((int)puVar19 == 0) ||
                                           (puVar19 = puVar17,
                                           func_0x0001097304fc(puVar17,param_2,puVar16),
                                           ((ulong)puVar19 & 1) == 0)) goto LAB_10972feb4;
                                        puVar17 = puVar17 + 2;
                                        uVar30 = uVar30 - 1;
                                      } while (uVar30 != 0);
                                    }
                                  }
                                  else if ((*(byte *)(param_2 + 0x3d) == 0) || (iVar23 < 1))
                                  goto LAB_10972feb4;
                                }
                              }
                              else if (uVar20 == 4) {
                                puVar17 = puVar16 + 1;
                                if ((ulong)((long)puVar17 - *(long *)(param_2 + 8)) <=
                                    (ulong)*(uint *)(param_2 + 0x18)) {
                                  if ((ushort)(*puVar16 >> 8 | *puVar16 << 8) != 1)
                                  goto LAB_10972fed8;
                                  if (((byte *)((long)puVar16 + (0xc - *(long *)(param_2 + 8))) <=
                                       (byte *)(ulong)*(uint *)(param_2 + 0x18)) &&
                                     (FUN_10972ba4c(puVar17,param_2,puVar16), (int)puVar17 != 0)) {
                                    puVar17 = puVar16 + 2;
                                    FUN_10972ba4c(puVar17,param_2,puVar16);
                                    if ((int)puVar17 != 0) {
                                      puVar17 = puVar16 + 4;
                                      FUN_10973065c(puVar17,param_2,puVar16);
                                      if (((ulong)puVar17 & 1) != 0) {
                                        lVar15 = -100;
LAB_10972faa4:
                                        puVar17 = puVar16 + 5;
                                        func_0x0001097307cc(puVar17,param_2,puVar16,
                                                            &stack0xfffffffffffffff0 + lVar15);
                                        puVar16 = puVar17;
                                        goto LAB_10972fea0;
                                      }
                                    }
                                  }
                                }
                                goto LAB_10972feb4;
                              }
                            }
                            else {
                              if (uVar20 < 7) {
                                if (uVar20 == 5) {
                                  puVar17 = puVar16 + 1;
                                  if ((ulong)((long)puVar17 - *(long *)(param_2 + 8)) <=
                                      (ulong)*(uint *)(param_2 + 0x18)) {
                                    if ((ushort)(*puVar16 >> 8 | *puVar16 << 8) != 1)
                                    goto LAB_10972fed8;
                                    if (((byte *)((long)puVar16 + (0xc - *(long *)(param_2 + 8))) <=
                                         (byte *)(ulong)*(uint *)(param_2 + 0x18)) &&
                                       (FUN_10972ba4c(puVar17,param_2,puVar16), (int)puVar17 != 0))
                                    {
                                      puVar17 = puVar16 + 2;
                                      FUN_10972ba4c(puVar17,param_2,puVar16);
                                      if ((int)puVar17 != 0) {
                                        puVar17 = puVar16 + 4;
                                        FUN_10973065c(puVar17,param_2,puVar16);
                                        if (((int)puVar17 != 0) &&
                                           (uStack_70 = (uint)(puVar16[3] >> 8) |
                                                        (puVar16[3] & 0xff00ff) << 8,
                                           (byte *)((long)puVar16 + (0xc - *(long *)(param_2 + 8)))
                                           <= (byte *)(ulong)*(uint *)(param_2 + 0x18))) {
                                          uVar13 = (uint)(puVar16[5] >> 8) |
                                                   (puVar16[5] & 0xff00ff) << 8;
                                          if (uVar13 != 0) {
                                            puVar17 = (ushort *)((long)puVar16 + (ulong)uVar13);
                                            puVar19 = puVar17 + 1;
                                            if (((((ulong)*(uint *)(param_2 + 0x18) <
                                                   (ulong)((long)puVar19 - *(long *)(param_2 + 8)))
                                                 || ((ulong)*(uint *)(param_2 + 0x18) <
                                                     (ulong)((long)puVar19 - *(long *)(param_2 + 8))
                                                    )) || (uVar13 = (uint)(byte)*puVar17 << 9 |
                                                                    (uint)*(byte *)((long)puVar17 +
                                                                                   1) << 1,
                                                          (uint)(*(int *)(param_2 + 0x10) -
                                                                (int)puVar19) < uVar13)) ||
                                               (iVar23 = *(int *)(param_2 + 0x1c) - uVar13,
                                               *(int *)(param_2 + 0x1c) = iVar23, iVar23 < 1)) {
LAB_1097301ec:
                                              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                                                 (*(uint *)(param_2 + 0x2c) =
                                                       *(uint *)(param_2 + 0x2c) + 1,
                                                 *(char *)(param_2 + 0x28) != '\x01'))
                                              goto LAB_10972feb4;
                                              puVar16[5] = 0;
                                            }
                                            else {
                                              uVar13 = (uint)(*puVar17 >> 8) |
                                                       (*puVar17 & 0xff00ff) << 8;
                                              uVar30 = (ulong)uVar13;
                                              if (uVar13 != 0) {
                                                do {
                                                  puVar18 = puVar19;
                                                  func_0x0001097307cc(puVar19,param_2,puVar17,
                                                                      &uStack_70);
                                                  if (((ulong)puVar18 & 1) == 0) goto LAB_1097301ec;
                                                  puVar19 = puVar19 + 1;
                                                  uVar30 = uVar30 - 1;
                                                } while (uVar30 != 0);
                                              }
                                            }
                                          }
                                          goto LAB_10972fed8;
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  if (uVar20 != 6) goto LAB_10972fed8;
                                  puVar17 = puVar16 + 1;
                                  if ((ulong)((long)puVar17 - *(long *)(param_2 + 8)) <=
                                      (ulong)*(uint *)(param_2 + 0x18)) {
                                    if ((ushort)(*puVar16 >> 8 | *puVar16 << 8) != 1)
                                    goto LAB_10972fed8;
                                    if (((byte *)((long)puVar16 + (0xc - *(long *)(param_2 + 8))) <=
                                         (byte *)(ulong)*(uint *)(param_2 + 0x18)) &&
                                       (FUN_10972ba4c(puVar17,param_2,puVar16), (int)puVar17 != 0))
                                    {
                                      puVar17 = puVar16 + 2;
                                      FUN_10972ba4c(puVar17,param_2,puVar16);
                                      if ((int)puVar17 != 0) {
                                        puVar17 = puVar16 + 4;
                                        FUN_10973065c(puVar17,param_2,puVar16);
                                        if (((ulong)puVar17 & 1) != 0) {
                                          uStack_6c = (uint)(puVar16[3] >> 8) |
                                                      (puVar16[3] & 0xff00ff) << 8;
                                          lVar15 = -0x5c;
                                          goto LAB_10972faa4;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                if (uVar20 == 7) {
                                  func_0x00010972e2d0(puVar16,param_2);
                                }
                                else {
                                  if (uVar20 != 8) goto LAB_10972fed8;
                                  func_0x00010972e4f0(puVar16,param_2);
                                }
LAB_10972fea0:
                                if (((ulong)puVar16 & 1) != 0) goto LAB_10972fed8;
                              }
LAB_10972feb4:
                              uVar22 = *(uint *)(param_2 + 0x2c);
LAB_10972feb8:
                              if (0x1f < uVar22) goto LAB_10972f450;
                              uVar22 = uVar22 + 1;
                              *(uint *)(param_2 + 0x2c) = uVar22;
                              if (*(char *)(param_2 + 0x28) != '\x01') goto LAB_10972f454;
                              *puVar28 = 0;
                            }
LAB_10972fed8:
                            uVar32 = uVar32 + 1;
                          } while (uVar32 != uVar9);
                        }
                        if (((ushort)(*puVar2 >> 8 | *puVar2 << 8) == 9) &&
                           (*(int *)(param_2 + 0x2c) == 0)) {
                          if (*(byte *)((long)puVar2 + 5) == 0 && (byte)puVar2[2] == 0) {
                            puVar26 = (ushort *)&UNK_10dfe4888;
                          }
                          uVar9 = (uint)(*puVar26 >> 8) | (*puVar26 & 0xff00ff) << 8;
                          puVar26 = (ushort *)&UNK_10dfe4888;
                          if (uVar9 != 0) {
                            puVar26 = (ushort *)((long)puVar2 + (ulong)uVar9);
                          }
                          if ((ushort)(*puVar26 >> 8 | *puVar26 << 8) == 1) {
                            uVar21 = puVar26[1] >> 8 | puVar26[1] << 8;
                          }
                          else {
                            uVar21 = 0;
                          }
                          uVar9 = (uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8;
                          if (1 < uVar9) {
                            puVar26 = (ushort *)((long)param_1 + (ulong)uVar11 + (ulong)uVar10 + 8);
                            uVar32 = 1;
                            do {
                              puVar28 = (ushort *)&UNK_10dfe4888;
                              if (uVar32 < ((uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8)) {
                                puVar28 = puVar26;
                              }
                              uVar11 = (uint)(*puVar28 >> 8) | (*puVar28 & 0xff00ff) << 8;
                              puVar28 = (ushort *)&UNK_10dfe4888;
                              if (uVar11 != 0) {
                                puVar28 = (ushort *)((long)puVar2 + (ulong)uVar11);
                              }
                              if ((ushort)(*puVar28 >> 8 | *puVar28 << 8) == 1) {
                                uVar27 = puVar28[1] >> 8 | puVar28[1] << 8;
                              }
                              else {
                                uVar27 = 0;
                              }
                              if (uVar27 != uVar21) goto LAB_10972f450;
                              uVar32 = uVar32 + 1;
                              puVar26 = puVar26 + 1;
                            } while (uVar9 != uVar32);
                          }
                        }
                        goto LAB_109730240;
                      }
                    }
                  }
                }
LAB_10972f450:
                uVar22 = *(uint *)(param_2 + 0x2c);
LAB_10972f454:
                if ((0x1f < uVar22) ||
                   (*(uint *)(param_2 + 0x2c) = uVar22 + 1, *(char *)(param_2 + 0x28) != '\x01'))
                goto LAB_109730328;
                *puVar5 = 0;
              }
LAB_109730240:
              uVar33 = uVar33 + 1;
            } while (uVar33 != uVar8);
          }
        }
      }
      uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      if (0x10000 < (uVar10 >> 0x10 | uVar10 << 0x10)) {
        FUN_10972db20((long)param_1 + 10,param_2);
      }
    }
  }
  return;
}



/* Entry: 1097303a0; end: 10973046f;  */

void FUN_1097303a0(uint param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_4 + (ulong)((param_1 & 1) << 1) + (ulong)(param_1 & 2) +
          (ulong)(param_1 >> 1 & 2) + (ulong)(param_1 >> 2 & 2);
  if ((param_1 >> 4 & 1) != 0) {
    lVar1 = lVar2;
    FUN_109730470(lVar2,param_2,param_3);
    if ((int)lVar1 == 0) {
      return;
    }
    lVar2 = lVar2 + 2;
  }
  if (((param_1 & 0xff) >> 5 & 1) != 0) {
    lVar1 = lVar2;
    FUN_109730470(lVar2,param_2,param_3);
    if ((int)lVar1 == 0) {
      return;
    }
    lVar2 = lVar2 + 2;
  }
  if (((param_1 & 0xff) >> 6 & 1) != 0) {
    lVar1 = lVar2;
    FUN_109730470(lVar2,param_2,param_3);
    if ((int)lVar1 == 0) {
      return;
    }
    lVar2 = lVar2 + 2;
  }
  if ((param_1 >> 7 & 1) != 0) {
    FUN_109730470(lVar2,param_2,param_3);
  }
  return;
}



/* Entry: 109730470; end: 10973065b;  */

undefined8 FUN_109730470(ushort *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    FUN_10972bc1c();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
  }
  return 1;
}



/* Entry: 10973065c; end: 1097308ff;  */

undefined8 FUN_10973065c(ushort *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar4 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar4 != 0) {
    puVar1 = (ushort *)(param_3 + (ulong)uVar4);
    puVar2 = puVar1 + 1;
    if (((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8)))) ||
        (uVar3 = (uint)(byte)*puVar1 << 10 | (uint)*(byte *)((long)puVar1 + 1) << 2,
        (uint)(*(int *)(param_2 + 0x10) - (int)puVar2) < uVar3)) ||
       (iVar5 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar5, iVar5 < 1)) {
LAB_109730794:
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
    else {
      uVar3 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
      uVar7 = (ulong)uVar3;
      if (uVar3 != 0) {
        lVar8 = param_3 + (ulong)uVar4 + 5;
        lVar9 = param_3 + (ulong)uVar4 + 6;
        do {
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar9 - *(long *)(param_2 + 8)))
          goto LAB_109730794;
          uVar4 = (uint)(*(ushort *)(lVar8 + -1) >> 8) | (*(ushort *)(lVar8 + -1) & 0xff00ff) << 8;
          if (uVar4 != 0) {
            pbVar6 = (byte *)((long)puVar1 + (ulong)uVar4);
            func_0x000109730588(pbVar6,param_2);
            if (((ulong)pbVar6 & 1) == 0) {
              if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
                 (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
                 *(char *)(param_2 + 0x28) != '\x01')) goto LAB_109730794;
              *(undefined2 *)(lVar8 + -1) = 0;
            }
          }
          lVar8 = lVar8 + 4;
          lVar9 = lVar9 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  return 1;
}



/* Entry: 109730900; end: 10973098b;  */

undefined8 FUN_109730900(ushort *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 != 0) {
    uVar2 = param_3 + (ulong)uVar1;
    func_0x000109730588();
    if ((uVar2 & 1) == 0) {
      if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
         (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
         *(char *)(param_2 + 0x28) != '\x01')) {
        return 0;
      }
      *param_1 = 0;
    }
  }
  return 1;
}



/* Entry: 10973098c; end: 109730ba3;  */

ulong FUN_10973098c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_3c = 0;
  iStack_38 = 0;
  uStack_44 = 0;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar6 = param_1;
  (**(code **)(param_1 + 0x20))(param_1,param_3,&iStack_38,&iStack_3c);
  if ((int)uVar6 == 0) {
LAB_109730b88:
    uVar6 = 0;
  }
  else {
    if (iStack_3c != 0) {
      uStack_44 = 0;
      lVar5 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar5 + 0x10);
      }
      lVar5 = lVar3;
      (**(code **)(*(long *)(lVar3 + 0x90) + 0x30))
                (lVar3,*(undefined8 *)(lVar3 + 0x98),iStack_3c,&uStack_44,uVar4);
      if ((int)lVar5 == 0) goto LAB_109730b88;
    }
    uStack_40 = 0;
    lVar5 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
    }
    (**(code **)(*(long *)(lVar3 + 0x90) + 0x30))
              (lVar3,*(undefined8 *)(lVar3 + 0x98),iStack_38,&uStack_40,uVar4);
    if (((int)param_2 == 0) || ((int)lVar3 == 0)) {
      FUN_10973098c(param_1,param_2);
      if ((int)param_1 != 0) {
        if (iStack_3c == 0) {
          return param_1;
        }
        *(undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x5c) * 0x14 + 0xc) =
             uStack_44;
        iStack_34 = iStack_3c;
        FUN_109730ba4(lVar2,0,1,&iStack_34);
        uVar1 = 0;
        if (*(int *)(lVar2 + 100) != 0) {
          uVar1 = *(int *)(lVar2 + 100) - 1;
        }
        FUN_1097049c0(*(long *)(lVar2 + 0x78) + (ulong)uVar1 * 0x14,lVar2);
        return (ulong)((int)param_1 + 1);
      }
      if ((int)lVar3 == 0) goto LAB_109730b88;
      *(undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x5c) * 0x14 + 0xc) =
           uStack_40;
    }
    else {
      *(undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x5c) * 0x14 + 0xc) =
           uStack_40;
    }
    uVar6 = 1;
    iStack_34 = iStack_38;
    FUN_109730ba4(lVar2,0,1,&iStack_34);
    uVar1 = 0;
    if (*(int *)(lVar2 + 100) != 0) {
      uVar1 = *(int *)(lVar2 + 100) - 1;
    }
    FUN_1097049c0(*(long *)(lVar2 + 0x78) + (ulong)uVar1 * 0x14,lVar2);
    if (iStack_3c != 0) {
      *(undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x5c) * 0x14 + 0xc) =
           uStack_44;
      iStack_34 = iStack_3c;
      FUN_109730ba4(lVar2,0,1,&iStack_34);
      uVar1 = 0;
      if (*(int *)(lVar2 + 100) != 0) {
        uVar1 = *(int *)(lVar2 + 100) - 1;
      }
      FUN_1097049c0(*(long *)(lVar2 + 0x78) + (ulong)uVar1 * 0x14,lVar2);
      uVar6 = 2;
    }
  }
  return uVar6;
}



/* Entry: 109730ba4; end: 109730c7f;  */

long FUN_109730ba4(long param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1;
  FUN_1096f5fd4();
  if ((int)lVar2 != 0) {
    if (1 < param_2) {
      FUN_1096f65e4(param_1,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x5c) + param_2);
    }
    if (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x60)) {
      lVar4 = *(long *)(param_1 + 0x78);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x5c) * 0x14);
      uVar6 = *(uint *)(param_1 + 100);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x78);
      uVar6 = *(uint *)(param_1 + 100);
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar6 - 1;
      }
      puVar3 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x14);
    }
    uVar7 = (ulong)param_3;
    puVar5 = (undefined8 *)(lVar4 + (ulong)uVar6 * 0x14);
    do {
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar3 + 2);
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined4 *)puVar5 = *param_4;
      uVar7 = uVar7 - 1;
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
      param_4 = param_4 + 1;
    } while (uVar7 != 0);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
  }
  return lVar2;
}



/* Entry: 109730c80; end: 109730ee7;  */

void FUN_109730c80(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) >> 6 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if (param_3 <= *(uint *)(param_1 + 0x60)) {
      uVar1 = param_3;
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
    if (param_2 < uVar1) {
      lVar2 = (ulong)uVar1 - (ulong)param_2;
      puVar3 = (uint *)(*(long *)(param_1 + 0x70) + (ulong)param_2 * 0x14 + 4);
      do {
        *puVar3 = *puVar3 | 2;
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 5;
      } while (lVar2 != 0);
    }
  }
  return;
}



/* Entry: 109730ee8; end: 10973127b;  */

undefined8 * FUN_109730ee8(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 auStack_80 [2];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar4 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
  uVar13 = (ulong)uVar4;
  uVar14 = (ulong)(uVar4 * 0x38);
  puVar5 = (undefined8 *)0x1;
  _calloc(1,uVar4 * 0x38 + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    puStack_78 = puVar5 + 4;
    auStack_80[0] = 0;
    uStack_70 = 0xffffffff00000000;
    uStack_68 = 0;
    if (uVar4 == 0) {
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    }
    else {
      uVar15 = 0;
      uVar3 = *param_1 >> 8 | *param_1 << 8;
      do {
        puVar6 = (ushort *)&UNK_10dfe4888;
        if (uVar15 < ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8)) {
          puVar6 = param_1 + uVar15 + 3;
        }
        uVar4 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
        puVar6 = (ushort *)&UNK_10dfe4888;
        uVar8 = uVar3;
        if (uVar4 != 0) {
          puVar6 = (ushort *)((long)param_1 + (ulong)uVar4);
        }
        while (uVar8 == 7) {
          if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) != 1) goto LAB_1097311d8;
          uVar4 = (*(uint *)(puVar6 + 2) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar6 + 2) & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          puVar2 = puVar6 + 1;
          puVar1 = (ushort *)&UNK_10dfe4888;
          if (uVar4 != 0) {
            puVar1 = (ushort *)((long)puVar6 + (ulong)uVar4);
          }
          puVar6 = puVar1;
          uVar8 = *puVar2 >> 8 | *puVar2 << 8;
        }
        if (uVar8 < 4) {
          if (uVar8 == 1) {
            uVar8 = *puVar6 >> 8 | *puVar6 << 8;
            if (uVar8 == 1) {
              pcVar10 = FUN_109731608;
              uVar9 = 0x10973160c;
              uVar12 = 0x109731610;
            }
            else {
              if (uVar8 != 2) goto LAB_1097311d8;
              pcVar10 = FUN_109731848;
              uVar9 = 0x10973184c;
              uVar12 = 0x109731850;
            }
            puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
            *puVar7 = puVar6;
            puVar7[1] = pcVar10;
            puVar7[2] = uVar9;
            puVar7[3] = uVar12;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[4] = 0;
LAB_1097311c0:
            uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + 1);
            uVar4 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
            puVar2 = (ushort *)&UNK_10dfe4888;
            if (uVar4 != 0) {
              puVar2 = (ushort *)((long)puVar6 + (ulong)uVar4);
            }
            FUN_10972bcd8(puVar2);
          }
          else if (uVar8 == 2) {
            if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1) {
              puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
              *puVar7 = puVar6;
              puVar7[1] = FUN_109731970;
              puVar7[2] = 0x109731974;
              uVar9 = 0x109731978;
              goto LAB_109731170;
            }
          }
          else if ((uVar8 == 3) && ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1)) {
            puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
            *puVar7 = puVar6;
            puVar7[1] = FUN_109731d4c;
            puVar7[2] = 0x109731d50;
            uVar9 = 0x109731d54;
LAB_109731170:
            puVar7[3] = uVar9;
            goto LAB_109731174;
          }
        }
        else if (uVar8 < 6) {
          if (uVar8 == 4) {
            if ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1) {
              puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
              *puVar7 = puVar6;
              puVar7[1] = FUN_109731fc4;
              puVar7[2] = 0x109731fc8;
              uVar9 = 0x109731fcc;
              goto LAB_109731170;
            }
          }
          else if (uVar8 == 5) {
            FUN_10973127c(puVar6,auStack_80);
          }
        }
        else if (uVar8 == 6) {
          func_0x00010973141c(puVar6,auStack_80);
        }
        else if ((uVar8 == 8) && ((ushort)(*puVar6 >> 8 | *puVar6 << 8) == 1)) {
          puVar7 = puStack_78 + (uStack_70 & 0xffffffff) * 7;
          *puVar7 = puVar6;
          puVar7[1] = FUN_109734370;
          puVar7[2] = 0x109734374;
          puVar7[3] = 0x109734378;
LAB_109731174:
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[4] = 0;
          goto LAB_1097311c0;
        }
LAB_1097311d8:
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar13);
      uVar15 = 0;
      puVar5[2] = 0;
      uVar9 = 0;
      uVar12 = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar11 = puVar5 + 10;
      do {
        uVar17 = puVar11[-1];
        uVar16 = puVar11[-2];
        uVar9 = CONCAT17((byte)(uVar16 >> 0x38) | (byte)((ulong)uVar9 >> 0x38),
                         CONCAT16((byte)(uVar16 >> 0x30) | (byte)((ulong)uVar9 >> 0x30),
                                  CONCAT15((byte)(uVar16 >> 0x28) | (byte)((ulong)uVar9 >> 0x28),
                                           CONCAT14((byte)(uVar16 >> 0x20) |
                                                    (byte)((ulong)uVar9 >> 0x20),
                                                    CONCAT13((byte)(uVar16 >> 0x18) |
                                                             (byte)((ulong)uVar9 >> 0x18),
                                                             CONCAT12((byte)(uVar16 >> 0x10) |
                                                                      (byte)((ulong)uVar9 >> 0x10),
                                                                      CONCAT11((byte)(uVar16 >> 8) |
                                                                               (byte)((ulong)uVar9
                                                                                     >> 8),
                                                                               (byte)uVar16 |
                                                                               (byte)uVar9)))))));
        uVar12 = CONCAT17((byte)(uVar17 >> 0x38) | (byte)((ulong)uVar12 >> 0x38),
                          CONCAT16((byte)(uVar17 >> 0x30) | (byte)((ulong)uVar12 >> 0x30),
                                   CONCAT15((byte)(uVar17 >> 0x28) | (byte)((ulong)uVar12 >> 0x28),
                                            CONCAT14((byte)(uVar17 >> 0x20) |
                                                     (byte)((ulong)uVar12 >> 0x20),
                                                     CONCAT13((byte)(uVar17 >> 0x18) |
                                                              (byte)((ulong)uVar12 >> 0x18),
                                                              CONCAT12((byte)(uVar17 >> 0x10) |
                                                                       (byte)((ulong)uVar12 >> 0x10)
                                                                       ,CONCAT11((byte)(uVar17 >> 8)
                                                                                 | (byte)((ulong)
                                                  uVar12 >> 8),(byte)uVar17 | (byte)uVar12)))))));
        puVar5[1] = uVar12;
        *puVar5 = uVar9;
        uVar15 = *puVar11 | uVar15;
        puVar5[2] = uVar15;
        uVar14 = uVar14 - 0x38;
        puVar11 = puVar11 + 7;
      } while (uVar14 != 0);
      uVar14 = (ulong)uStack_70._4_4_;
      *(uint *)(puVar5 + 3) = uStack_70._4_4_;
      puVar7 = puVar5 + 6;
      do {
        if (uVar14 != 0) {
          *puVar7 = puVar7[-1];
        }
        puVar7 = puVar7 + 7;
        uVar14 = uVar14 - 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return puVar5;
}



/* Entry: 10973127c; end: 109731607;  */

void FUN_10973127c(ushort *param_1,long param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  uint uVar9;
  ushort *puVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  
  uVar2 = *param_1 >> 8 | *param_1 << 8;
  if (uVar2 == 3) {
    uVar9 = *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = uVar9 + 1;
    puVar7 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar9 * 0x38);
    *puVar7 = param_1;
    puVar7[1] = 0x1097336b8;
    puVar7[2] = 0x1097336bc;
    puVar7[3] = 0x1097336c0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar8 = puVar7 + 4;
    *puVar8 = 0;
    uVar2 = param_1[3];
LAB_1097313f4:
    uVar9 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
    puVar10 = (ushort *)&UNK_10dfe4888;
    if (uVar9 != 0) {
      puVar10 = (ushort *)((long)param_1 + (ulong)uVar9);
    }
    uVar2 = *puVar10 >> 8 | *puVar10 << 8;
    if (uVar2 == 2) {
      uVar9 = (uint)(puVar10[1] >> 8) | (puVar10[1] & 0xff00ff) << 8;
      if (uVar9 != 0) {
        puVar14 = puVar10 + 2;
        do {
          uVar2 = *puVar14 >> 8 | *puVar14 << 8;
          uVar3 = puVar14[1] >> 8 | puVar14[1] << 8;
          puVar5 = puVar8;
          FUN_10972be18(puVar8,uVar2,uVar3);
          puVar6 = puVar8 + 1;
          func_0x00010972be80(puVar6,uVar2,uVar3);
          puVar14 = puVar14 + 3;
        } while (((uint)puVar5 | (uint)puVar6) == 1 && puVar14 != puVar10 + (ulong)uVar9 * 3 + 2);
      }
    }
    else if ((uVar2 == 1) &&
            (uVar9 = (uint)(puVar10[1] >> 8) | (puVar10[1] & 0xff00ff) << 8, uVar9 != 0)) {
      uVar11 = *puVar8;
      puVar14 = puVar10 + 2;
      uVar13 = uVar9;
      do {
        uVar11 = 1L << ((ulong)(ushort)(CONCAT11((byte)*puVar14,*(byte *)((long)puVar14 + 1)) >> 4)
                       & 0x3f) | uVar11;
        *puVar8 = uVar11;
        puVar14 = puVar14 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      uVar11 = puVar8[1];
      pbVar12 = (byte *)((long)puVar10 + 5);
      uVar13 = uVar9;
      do {
        uVar11 = 1L << ((ulong)*pbVar12 & 0x3f) | uVar11;
        puVar8[1] = uVar11;
        uVar13 = uVar13 - 1;
        pbVar12 = pbVar12 + 2;
      } while (uVar13 != 0);
      uVar11 = puVar8[2];
      puVar10 = puVar10 + 2;
      do {
        uVar11 = 1L << ((ulong)(byte)((byte)*puVar10 >> 1) & 0x3f) | uVar11;
        puVar8[2] = uVar11;
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != 0);
    }
    return;
  }
  if (uVar2 == 2) {
    uVar9 = *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = uVar9 + 1;
    puVar7 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar9 * 0x38);
    *puVar7 = param_1;
    puVar7[1] = FUN_10973346c;
    puVar7[2] = 0x109733474;
    puVar7[3] = 0x10973347c;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[4] = 0;
    uVar9 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
    puVar1 = &UNK_10dfe4888;
    if (uVar9 != 0) {
      puVar1 = (undefined *)((long)param_1 + (ulong)uVar9);
    }
    FUN_10972bcd8(puVar1);
    uVar9 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
    puVar1 = &UNK_10dfe4888;
    if (uVar9 != 0) {
      puVar1 = (undefined *)((long)param_1 + (ulong)uVar9);
    }
    iVar4 = (int)puVar1;
    FUN_109733670();
    uVar9 = ((uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8) * iVar4;
    if (uVar9 < 4) {
      uVar9 = 0;
    }
    if (*(uint *)(param_2 + 0x18) < uVar9) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x10) + -1;
      *(uint *)(param_2 + 0x18) = uVar9;
    }
  }
  else if (uVar2 == 1) {
    uVar9 = *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = uVar9 + 1;
    puVar7 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar9 * 0x38);
    *puVar7 = param_1;
    puVar7[1] = FUN_109732b90;
    puVar7[2] = 0x109732b94;
    puVar7[3] = 0x109732b98;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar8 = puVar7 + 4;
    *puVar8 = 0;
    uVar2 = param_1[1];
    goto LAB_1097313f4;
  }
  return;
}



/* Entry: 109731608; end: 109731617;  */

bool FUN_109731608(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                  (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14);
  uVar4 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar5 = &UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar5 = (undefined *)(param_1 + (ulong)uVar4);
  }
  func_0x000109729bf8(puVar5,iVar1);
  if ((int)puVar5 != -1) {
    uVar2 = *(undefined1 *)(param_1 + 4);
    uVar3 = *(undefined1 *)(param_1 + 5);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecc3);
    }
    FUN_10973170c(param_2,(uint)CONCAT11(uVar2,uVar3) + iVar1 & 0xffff);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecef);
    }
  }
  return (int)puVar5 != -1;
}



/* Entry: 109731618; end: 10973170b;  */

bool FUN_109731618(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                  (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14);
  uVar4 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar5 = &UNK_10dfe4888;
  if (uVar4 != 0) {
    puVar5 = (undefined *)(param_1 + (ulong)uVar4);
  }
  func_0x000109729bf8(puVar5,iVar1);
  if ((int)puVar5 != -1) {
    uVar2 = *(undefined1 *)(param_1 + 4);
    uVar3 = *(undefined1 *)(param_1 + 5);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecc3);
    }
    FUN_10973170c(param_2,(uint)CONCAT11(uVar2,uVar3) + iVar1 & 0xffff);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecef);
    }
  }
  return (int)puVar5 != -1;
}



/* Entry: 10973170c; end: 109731847;  */

void FUN_10973170c(long param_1,undefined8 param_2)

{
  undefined4 uStack_24;
  
  func_0x00010973175c(param_1,param_2,0,0,0);
  uStack_24 = (undefined4)param_2;
  FUN_109730ba4(*(undefined8 *)(param_1 + 0xa0),1,1,&uStack_24);
  return;
}



/* Entry: 109731848; end: 109731857;  */

undefined8 FUN_109731848(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort *puVar4;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 != 0xffffffff) &&
     (uVar1 = *(ushort *)(param_1 + 4), uVar2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8))) {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecc3);
      uVar1 = *(ushort *)(param_1 + 4);
    }
    if (uVar2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
      puVar4 = (ushort *)(param_1 + ((ulong)puVar3 & 0xffffffff) * 2 + 6);
    }
    else {
      puVar4 = (ushort *)&UNK_10dfe4888;
    }
    FUN_10973170c(param_2,*puVar4 >> 8 | *puVar4 << 8);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecef);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109731858; end: 10973196f;  */

undefined8 FUN_109731858(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort *puVar4;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 != 0xffffffff) &&
     (uVar1 = *(ushort *)(param_1 + 4), uVar2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8))) {
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecc3);
      uVar1 = *(ushort *)(param_1 + 4);
    }
    if (uVar2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
      puVar4 = (ushort *)(param_1 + ((ulong)puVar3 & 0xffffffff) * 2 + 6);
    }
    else {
      puVar4 = (ushort *)&UNK_10dfe4888;
    }
    FUN_10973170c(param_2,*puVar4 >> 8 | *puVar4 << 8);
    if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
      FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ecef);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109731970; end: 10973197f;  */

bool FUN_109731970(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort *puVar4;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if (uVar2 != 0xffffffff) {
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 < ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)
       ) {
      puVar4 = (ushort *)(param_1 + ((ulong)puVar3 & 0xffffffff) * 2 + 6);
    }
    uVar1 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar1 != 0) {
      puVar4 = (ushort *)(param_1 + (ulong)uVar1);
    }
    FUN_109731a3c(puVar4,param_2);
  }
  return uVar2 != 0xffffffff;
}



/* Entry: 109731980; end: 109731a3b;  */

bool FUN_109731980(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ushort *puVar4;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if (uVar2 != 0xffffffff) {
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar2 < ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)
       ) {
      puVar4 = (ushort *)(param_1 + ((ulong)puVar3 & 0xffffffff) * 2 + 6);
    }
    uVar1 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (uVar1 != 0) {
      puVar4 = (ushort *)(param_1 + (ulong)uVar1);
    }
    FUN_109731a3c(puVar4,param_2);
  }
  return uVar2 != 0xffffffff;
}



/* Entry: 109731a3c; end: 109731d4b;  */

ushort * FUN_109731a3c(ushort *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint *puVar10;
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint auStack_468 [256];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  lVar16 = *(long *)(param_2 + 0xa0);
  lVar14 = *(long *)(lVar16 + 0xd0);
  if (uVar8 == 1) {
    if (lVar14 != 0) {
      FUN_1096f6424(lVar16);
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ed1a);
    }
    uVar12 = (ulong)((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8);
    func_0x00010973170c(param_2);
    puVar9 = *(ushort **)(param_2 + 0xa0);
    if (*(long *)(puVar9 + 0x68) == 0) goto LAB_109731c50;
    uVar12 = *(ulong *)(param_2 + 0x90);
    puVar11 = &UNK_10f57ed48;
  }
  else {
    uVar12 = param_2;
    if (uVar8 == 0) {
      if (lVar14 != 0) {
        FUN_1096f6424(lVar16);
        uVar12 = *(ulong *)(param_2 + 0x90);
        FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),uVar12,&UNK_10f57ed75);
        lVar16 = *(long *)(param_2 + 0xa0);
      }
      FUN_1096f6928(lVar16);
      puVar9 = *(ushort **)(param_2 + 0xa0);
      if (*(long *)(puVar9 + 0x68) == 0) goto LAB_109731c50;
      FUN_1096f6424();
      puVar9 = *(ushort **)(param_2 + 0xa0);
      uVar12 = *(ulong *)(param_2 + 0x90);
      puVar11 = &UNK_10f57eda2;
    }
    else {
      puVar9 = param_1;
      if (lVar14 != 0) {
        cVar4 = *(char *)(lVar16 + 0x5a);
        uVar1 = *(undefined4 *)(lVar16 + 100);
        uVar2 = *(undefined4 *)(lVar16 + 0x5c);
        lVar14 = lVar16;
        FUN_1096f6314();
        if ((int)lVar14 == 0) {
          uVar1 = uVar2;
        }
        *(undefined4 *)(lVar16 + 0x5c) = uVar1;
        if (cVar4 == '\x01') {
          *(undefined1 *)(lVar16 + 0x5a) = 1;
          *(undefined4 *)(lVar16 + 100) = uVar1;
        }
        puVar9 = *(ushort **)(param_2 + 0xa0);
        uVar12 = *(ulong *)(param_2 + 0x90);
        FUN_1096f53f4(puVar9,uVar12,&UNK_10f57edce);
        lVar16 = *(long *)(param_2 + 0xa0);
      }
      uVar13 = *(uint *)(lVar16 + 0x5c);
      if (uVar8 != 0) {
        uVar18 = 0;
        lVar14 = *(long *)(lVar16 + 0x70) + (ulong)uVar13 * 0x14;
        uVar6 = *(ushort *)(lVar14 + 0xc);
        bVar5 = *(byte *)(lVar14 + 0xe);
        lVar14 = (long)param_1 + 3;
        do {
          if (bVar5 < 0x20) {
            *(byte *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                      (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14 + 0xe) =
                 (byte)uVar18 & 0xf;
          }
          uVar13 = (uint)(*(ushort *)(lVar14 + -1) >> 8) |
                   (*(ushort *)(lVar14 + -1) & 0xff00ff) << 8;
          func_0x00010973175c(param_2,uVar13,uVar6 >> 1 & 2,0,1);
          puVar9 = *(ushort **)(param_2 + 0xa0);
          uVar12 = 0;
          auStack_468[0] = uVar13;
          FUN_109730ba4(puVar9,0,1,auStack_468);
          uVar18 = uVar18 + 1;
          lVar14 = lVar14 + 2;
        } while (uVar8 != uVar18);
        lVar16 = *(long *)(param_2 + 0xa0);
        uVar13 = *(uint *)(lVar16 + 0x5c);
      }
      *(uint *)(lVar16 + 0x5c) = uVar13 + 1;
      if (*(long *)(lVar16 + 0xd0) == 0) goto LAB_109731c50;
      cVar4 = *(char *)(lVar16 + 0x5a);
      iVar3 = *(int *)(lVar16 + 100);
      lVar14 = lVar16;
      FUN_1096f6314();
      if ((int)lVar14 == 0) {
        iVar3 = uVar13 + 1;
      }
      *(int *)(lVar16 + 0x5c) = iVar3;
      if (cVar4 == '\x01') {
        *(undefined1 *)(lVar16 + 0x5a) = 1;
        *(int *)(lVar16 + 100) = iVar3;
      }
      _bzero(auStack_468,0x400);
      puVar9 = *(ushort **)(param_2 + 0xa0);
      uVar8 = *(uint *)(puVar9 + 0x2e) - uVar8;
      if (uVar8 < *(uint *)(puVar9 + 0x2e)) {
        puVar10 = auStack_468;
        do {
          puVar17 = puVar10;
          if (auStack_468 < puVar10) {
            puVar17 = (uint *)((long)puVar10 + 1);
            *(undefined1 *)puVar10 = 0x2c;
          }
          _snprintf(puVar17,(long)&lStack_68 - (long)puVar17,&DAT_10f3b2553);
          puVar10 = puVar17;
          _strlen();
          puVar10 = (uint *)((long)puVar17 + (long)puVar10);
          uVar8 = uVar8 + 1;
          puVar9 = *(ushort **)(param_2 + 0xa0);
        } while (uVar8 < *(uint *)(puVar9 + 0x2e));
      }
      uVar12 = *(ulong *)(param_2 + 0x90);
      puVar11 = &UNK_10f57ede6;
    }
  }
  FUN_1096f53f4(puVar9,uVar12,puVar11);
LAB_109731c50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar9;
  }
  ___stack_chk_fail();
  uVar8 = (uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8;
  puVar11 = &UNK_10dfe4888;
  if (uVar8 != 0) {
    puVar11 = (undefined *)((long)puVar9 + (ulong)uVar8);
  }
  func_0x000109729bf8(puVar11,*(undefined4 *)
                               (*(long *)(*(long *)(uVar12 + 0xa0) + 0x70) +
                               (ulong)*(uint *)(*(long *)(uVar12 + 0xa0) + 0x5c) * 0x14));
  if ((uint)puVar11 != 0xffffffff) {
    puVar15 = (ushort *)&UNK_10dfe4888;
    if ((uint)puVar11 < ((uint)(puVar9[2] >> 8) | (puVar9[2] & 0xff00ff) << 8)) {
      puVar15 = puVar9 + ((ulong)puVar11 & 0xffffffff) + 3;
    }
    uVar8 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
    puVar15 = (ushort *)&UNK_10dfe4888;
    if (uVar8 != 0) {
      puVar15 = (ushort *)((long)puVar9 + (ulong)uVar8);
    }
    uVar8 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
    if (uVar8 != 0) {
      lVar14 = *(long *)(uVar12 + 0xa0);
      uVar13 = *(uint *)(uVar12 + 300);
      uVar7 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar13 = (uVar13 & *(uint *)(*(long *)(lVar14 + 0x70) + (ulong)*(uint *)(lVar14 + 0x5c) * 0x14
                                  + 4)) >>
               (ulong)((uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10) & 0x1f);
      if (uVar13 == 0xff) {
        if (*(char *)(uVar12 + 0x140) == '\x01') {
          FUN_109710ea8(lVar14,3,0,*(undefined4 *)(lVar14 + 0x60),1,0);
          lVar14 = *(long *)(uVar12 + 0xa0);
          uVar13 = *(int *)(lVar14 + 0xbc) * 0xbc8f;
          uVar7 = uVar13 / 0x7fffffff;
          uVar13 = uVar13 + (uVar7 | uVar7 << 0x1f);
          *(uint *)(lVar14 + 0xbc) = uVar13;
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = uVar13 / uVar8;
          }
          uVar13 = (uVar13 - uVar7 * uVar8) + 1;
        }
        else {
          uVar13 = 0xff;
        }
      }
      uVar13 = uVar13 - 1;
      if (uVar13 < uVar8) {
        if (*(long *)(lVar14 + 0xd0) != 0) {
          cVar4 = *(char *)(lVar14 + 0x5a);
          uVar1 = *(undefined4 *)(lVar14 + 100);
          uVar2 = *(undefined4 *)(lVar14 + 0x5c);
          lVar16 = lVar14;
          FUN_1096f6314();
          if ((int)lVar16 == 0) {
            uVar1 = uVar2;
          }
          *(undefined4 *)(lVar14 + 0x5c) = uVar1;
          if (cVar4 == '\x01') {
            *(undefined1 *)(lVar14 + 0x5a) = 1;
            *(undefined4 *)(lVar14 + 100) = uVar1;
          }
          FUN_1096f53f4(*(undefined8 *)(uVar12 + 0xa0),*(undefined8 *)(uVar12 + 0x90),&UNK_10f57edfe
                       );
        }
        if (uVar13 < ((uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8)) {
          puVar15 = puVar15 + (ulong)uVar13 + 1;
        }
        else {
          puVar15 = (ushort *)&UNK_10dfe4888;
        }
        func_0x00010973170c(uVar12,*puVar15 >> 8 | *puVar15 << 8);
        if (*(long *)(*(long *)(uVar12 + 0xa0) + 0xd0) != 0) {
          FUN_1096f53f4(*(long *)(uVar12 + 0xa0),*(undefined8 *)(uVar12 + 0x90),&UNK_10f57ee2d);
        }
        return (ushort *)0x1;
      }
    }
    return (ushort *)0x0;
  }
  return (ushort *)0x0;
}



/* Entry: 109731d4c; end: 109731d5b;  */

undefined8 FUN_109731d4c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  
  uVar5 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar6 = &UNK_10dfe4888;
  if (uVar5 != 0) {
    puVar6 = (undefined *)(param_1 + (ulong)uVar5);
  }
  func_0x000109729bf8(puVar6,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((uint)puVar6 == 0xffffffff) {
    return 0;
  }
  puVar9 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar6 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar9 = (ushort *)(param_1 + ((ulong)puVar6 & 0xffffffff) * 2 + 6);
  }
  uVar5 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
  puVar9 = (ushort *)&UNK_10dfe4888;
  if (uVar5 != 0) {
    puVar9 = (ushort *)(param_1 + (ulong)uVar5);
  }
  uVar5 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
  if (uVar5 != 0) {
    lVar10 = *(long *)(param_2 + 0xa0);
    uVar8 = *(uint *)(param_2 + 300);
    uVar4 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar8 = (uVar8 & *(uint *)(*(long *)(lVar10 + 0x70) + (ulong)*(uint *)(lVar10 + 0x5c) * 0x14 + 4
                              )) >> (ulong)((uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) & 0x1f);
    if (uVar8 == 0xff) {
      if (*(char *)(param_2 + 0x140) == '\x01') {
        FUN_109710ea8(lVar10,3,0,*(undefined4 *)(lVar10 + 0x60),1,0);
        lVar10 = *(long *)(param_2 + 0xa0);
        uVar8 = *(int *)(lVar10 + 0xbc) * 0xbc8f;
        uVar4 = uVar8 / 0x7fffffff;
        uVar8 = uVar8 + (uVar4 | uVar4 << 0x1f);
        *(uint *)(lVar10 + 0xbc) = uVar8;
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar8 / uVar5;
        }
        uVar8 = (uVar8 - uVar4 * uVar5) + 1;
      }
      else {
        uVar8 = 0xff;
      }
    }
    uVar8 = uVar8 - 1;
    if (uVar8 < uVar5) {
      if (*(long *)(lVar10 + 0xd0) != 0) {
        cVar3 = *(char *)(lVar10 + 0x5a);
        uVar1 = *(undefined4 *)(lVar10 + 100);
        uVar2 = *(undefined4 *)(lVar10 + 0x5c);
        lVar7 = lVar10;
        FUN_1096f6314();
        if ((int)lVar7 == 0) {
          uVar1 = uVar2;
        }
        *(undefined4 *)(lVar10 + 0x5c) = uVar1;
        if (cVar3 == '\x01') {
          *(undefined1 *)(lVar10 + 0x5a) = 1;
          *(undefined4 *)(lVar10 + 100) = uVar1;
        }
        FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57edfe
                     );
      }
      if (uVar8 < ((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8)) {
        puVar9 = puVar9 + (ulong)uVar8 + 1;
      }
      else {
        puVar9 = (ushort *)&UNK_10dfe4888;
      }
      FUN_10973170c(param_2,*puVar9 >> 8 | *puVar9 << 8);
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ee2d);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109731d5c; end: 109731e0b;  */

undefined8 FUN_109731d5c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  
  uVar5 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar6 = &UNK_10dfe4888;
  if (uVar5 != 0) {
    puVar6 = (undefined *)(param_1 + (ulong)uVar5);
  }
  func_0x000109729bf8(puVar6,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((uint)puVar6 == 0xffffffff) {
    return 0;
  }
  puVar9 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar6 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar9 = (ushort *)(param_1 + ((ulong)puVar6 & 0xffffffff) * 2 + 6);
  }
  uVar5 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
  puVar9 = (ushort *)&UNK_10dfe4888;
  if (uVar5 != 0) {
    puVar9 = (ushort *)(param_1 + (ulong)uVar5);
  }
  uVar5 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
  if (uVar5 != 0) {
    lVar10 = *(long *)(param_2 + 0xa0);
    uVar8 = *(uint *)(param_2 + 300);
    uVar4 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar8 = (uVar8 & *(uint *)(*(long *)(lVar10 + 0x70) + (ulong)*(uint *)(lVar10 + 0x5c) * 0x14 + 4
                              )) >> (ulong)((uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) & 0x1f);
    if (uVar8 == 0xff) {
      if (*(char *)(param_2 + 0x140) == '\x01') {
        FUN_109710ea8(lVar10,3,0,*(undefined4 *)(lVar10 + 0x60),1,0);
        lVar10 = *(long *)(param_2 + 0xa0);
        uVar8 = *(int *)(lVar10 + 0xbc) * 0xbc8f;
        uVar4 = uVar8 / 0x7fffffff;
        uVar8 = uVar8 + (uVar4 | uVar4 << 0x1f);
        *(uint *)(lVar10 + 0xbc) = uVar8;
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar8 / uVar5;
        }
        uVar8 = (uVar8 - uVar4 * uVar5) + 1;
      }
      else {
        uVar8 = 0xff;
      }
    }
    uVar8 = uVar8 - 1;
    if (uVar8 < uVar5) {
      if (*(long *)(lVar10 + 0xd0) != 0) {
        cVar3 = *(char *)(lVar10 + 0x5a);
        uVar1 = *(undefined4 *)(lVar10 + 100);
        uVar2 = *(undefined4 *)(lVar10 + 0x5c);
        lVar7 = lVar10;
        FUN_1096f6314();
        if ((int)lVar7 == 0) {
          uVar1 = uVar2;
        }
        *(undefined4 *)(lVar10 + 0x5c) = uVar1;
        if (cVar3 == '\x01') {
          *(undefined1 *)(lVar10 + 0x5a) = 1;
          *(undefined4 *)(lVar10 + 100) = uVar1;
        }
        FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57edfe
                     );
      }
      if (uVar8 < ((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8)) {
        puVar9 = puVar9 + (ulong)uVar8 + 1;
      }
      else {
        puVar9 = (ushort *)&UNK_10dfe4888;
      }
      FUN_10973170c(param_2,*puVar9 >> 8 | *puVar9 << 8);
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ee2d);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109731e0c; end: 109731fc3;  */

undefined8 FUN_109731e0c(ushort *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar5 != 0) {
    lVar8 = *(long *)(param_2 + 0xa0);
    uVar7 = *(uint *)(param_2 + 300);
    uVar4 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar7 = (uVar7 & *(uint *)(*(long *)(lVar8 + 0x70) + (ulong)*(uint *)(lVar8 + 0x5c) * 0x14 + 4))
            >> (ulong)((uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) & 0x1f);
    if (uVar7 == 0xff) {
      if (*(char *)(param_2 + 0x140) == '\x01') {
        FUN_109710ea8(lVar8,3,0,*(undefined4 *)(lVar8 + 0x60),1,0);
        lVar8 = *(long *)(param_2 + 0xa0);
        uVar7 = *(int *)(lVar8 + 0xbc) * 0xbc8f;
        uVar4 = uVar7 / 0x7fffffff;
        uVar7 = uVar7 + (uVar4 | uVar4 << 0x1f);
        *(uint *)(lVar8 + 0xbc) = uVar7;
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar7 / uVar5;
        }
        uVar7 = (uVar7 - uVar4 * uVar5) + 1;
      }
      else {
        uVar7 = 0xff;
      }
    }
    uVar7 = uVar7 - 1;
    if (uVar7 < uVar5) {
      if (*(long *)(lVar8 + 0xd0) != 0) {
        cVar3 = *(char *)(lVar8 + 0x5a);
        uVar1 = *(undefined4 *)(lVar8 + 100);
        uVar2 = *(undefined4 *)(lVar8 + 0x5c);
        lVar6 = lVar8;
        FUN_1096f6314();
        if ((int)lVar6 == 0) {
          uVar1 = uVar2;
        }
        *(undefined4 *)(lVar8 + 0x5c) = uVar1;
        if (cVar3 == '\x01') {
          *(undefined1 *)(lVar8 + 0x5a) = 1;
          *(undefined4 *)(lVar8 + 100) = uVar1;
        }
        FUN_1096f53f4(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57edfe
                     );
      }
      if (uVar7 < ((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8)) {
        param_1 = param_1 + (ulong)uVar7 + 1;
      }
      else {
        param_1 = (ushort *)&UNK_10dfe4888;
      }
      FUN_10973170c(param_2,*param_1 >> 8 | *param_1 << 8);
      if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
        FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ee2d);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109731fc4; end: 109731fd3;  */

bool FUN_109731fc4(long param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined1 uVar20;
  byte bVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  byte bVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  ulong uVar34;
  byte bVar35;
  uint auStack_480 [256];
  uint auStack_80 [4];
  long lStack_70;
  
  uVar23 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar12 = &UNK_10dfe4888;
  if (uVar23 != 0) {
    puVar12 = (undefined *)(param_1 + (ulong)uVar23);
  }
  func_0x000109729bf8(puVar12,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0x28) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_2 + 0x28) + 0x5c) * 0x14));
  if ((uint)puVar12 == 0xffffffff) {
    return false;
  }
  puVar28 = (uint *)&UNK_10dfe4888;
  if ((uint)puVar12 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar28 = (uint *)(param_1 + ((ulong)puVar12 & 0xffffffff) * 2 + 6);
  }
  uVar23 = (uint)(ushort)((ushort)*puVar28 >> 8) | ((ushort)*puVar28 & 0xff00ff) << 8;
  puVar28 = (uint *)&UNK_10dfe4888;
  if (uVar23 != 0) {
    puVar28 = (uint *)(param_1 + (ulong)uVar23);
  }
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = (uint)(ushort)((ushort)*puVar28 >> 8) | ((ushort)*puVar28 & 0xff00ff) << 8;
  puVar29 = puVar28;
  puVar14 = param_2;
  if (uVar23 == 0) {
LAB_109732354:
    bVar10 = false;
LAB_1097327a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return bVar10;
    }
    ___stack_chk_fail();
    uVar23 = puVar29[0xe];
    uVar17 = *puVar29;
    if ((int)uVar17 < (int)(uVar23 - 1)) {
      do {
        *puVar29 = uVar17 + 1;
        puVar28 = puVar29;
        func_0x000109732900(puVar29,*(long *)(*(long *)(*(long *)(puVar29 + 2) + 0xa0) + 0x70) +
                                    (ulong)(uVar17 + 1) * 0x14);
        if ((int)puVar28 == 1) {
          *puVar14 = *puVar29 + 1;
          return false;
        }
        if ((int)puVar28 == 0) {
          if (*(long *)(puVar29 + 0xc) != 0) {
            *(long *)(puVar29 + 0xc) = *(long *)(puVar29 + 0xc) + 2;
          }
          return true;
        }
        uVar17 = *puVar29;
      } while ((int)uVar17 < (int)(uVar23 - 1));
      uVar23 = puVar29[0xe];
    }
    *puVar14 = uVar23;
    return false;
  }
  uVar33 = 0;
  bVar10 = true;
LAB_1097320e4:
  uVar7 = *(ushort *)((long)puVar28 + uVar33 * 2 + 2);
  uVar17 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  puVar19 = (ushort *)&UNK_10dfe4888;
  if (uVar17 != 0) {
    puVar19 = (ushort *)((long)puVar28 + (ulong)uVar17);
  }
  uVar7 = puVar19[1];
  bVar32 = *(byte *)((long)puVar19 + 3);
  uVar17 = (uint)CONCAT11((char)uVar7,bVar32);
  uVar31 = (ulong)uVar17;
  if (uVar17 == 0) goto LAB_109732304;
  if (uVar17 == 1) {
    if (*(long *)(*(long *)(param_2 + 0x28) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57ee5b);
    }
    puVar14 = (uint *)(ulong)((uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8);
    func_0x00010973170c(param_2);
    puVar29 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar29 + 0x34) != 0) {
      puVar14 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar29,puVar14,&UNK_10f57ee89);
    }
    goto LAB_1097327a0;
  }
  if (uVar17 < 0x41) {
    if (uVar17 < 5) {
      puVar13 = auStack_80;
    }
    else {
      puVar29 = (uint *)((ulong)bVar32 << 2);
      _malloc();
      puVar13 = puVar29;
      if (puVar29 == (uint *)0x0) goto LAB_109732304;
    }
    lVar27 = *(long *)(param_2 + 0x28);
    uVar15 = *(uint *)(lVar27 + 0x5c);
    param_2[2] = uVar15;
    lVar24 = *(long *)(*(long *)(param_2 + 4) + 0xa0);
    param_2[0x10] = *(uint *)(lVar24 + 0x60);
    if (*(uint *)(lVar24 + 0x5c) == uVar15) {
      uVar20 = *(undefined1 *)(*(long *)(lVar24 + 0x70) + (ulong)uVar15 * 0x14 + 0xf);
    }
    else {
      uVar20 = 0;
    }
    cVar22 = '\0';
    iVar30 = 0;
    if (*(char *)((long)param_2 + 0x23) == '\0') {
      uVar20 = 0;
    }
    *(undefined1 *)(param_2 + 9) = uVar20;
    param_2[10] = 0x972aad0;
    param_2[0xb] = 1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(ushort **)(param_2 + 0xe) = puVar19 + 2;
    bVar35 = *(byte *)(*(long *)(lVar27 + 0x70) + (ulong)uVar15 * 0x14 + 0xe);
    bVar5 = bVar35 >> 5;
    bVar21 = bVar35 & 0xf;
    if ((bVar35 & 0x10) != 0) {
      bVar21 = 0;
    }
    uVar34 = 1;
    do {
      puVar29 = param_2 + 2;
      FUN_109732850(puVar29,auStack_480);
      uVar15 = auStack_480[0];
      if (((ulong)puVar29 & 1) == 0) goto LAB_1097322dc;
      uVar15 = param_2[2];
      uVar18 = (ulong)uVar15;
      puVar13[uVar34] = uVar15;
      lVar24 = *(long *)(lVar27 + 0x70);
      bVar3 = *(byte *)(lVar24 + (ulong)uVar15 * 0x14 + 0xe);
      bVar25 = bVar3 & 0xf;
      if ((bVar3 & 0x10) != 0) {
        bVar25 = 0;
      }
      if (bVar35 < 0x20 || bVar21 == 0) {
        if ((0x1f < bVar3 && bVar25 != 0) && bVar3 >> 5 != bVar5) goto LAB_1097322d0;
      }
      else if (bVar5 != bVar3 >> 5 || bVar21 != bVar25) {
        if (iVar30 == 0) {
          lVar26 = *(long *)(lVar27 + 0x78) + (ulong)*(uint *)(lVar27 + 100) * 0x14;
          lVar24 = (ulong)*(uint *)(lVar27 + 100) + 1;
          do {
            lVar24 = lVar24 + -1;
            if ((lVar24 == 0) || (bVar25 = *(byte *)(lVar26 + -6), bVar5 != bVar25 >> 5))
            goto LAB_1097322d0;
            lVar26 = lVar26 + -0x14;
          } while (((bVar25 >> 4 & 1) == 0) && ((bVar25 & 0xf) != 0));
          puVar29 = param_2 + 6;
          FUN_1097329b8(puVar29,*(undefined8 *)(param_2 + 4));
          if ((int)puVar29 != 1) goto LAB_1097322d0;
          lVar24 = *(long *)(lVar27 + 0x70);
          uVar18 = (ulong)param_2[2];
          iVar30 = 2;
        }
        else if (iVar30 == 1) {
LAB_1097322d0:
          uVar15 = 0;
          goto LAB_1097322dc;
        }
      }
      lVar26 = lVar24 + uVar18 * 0x14;
      if ((*(ushort *)(lVar26 + 0xc) >> 2 & 1) == 0) {
        bVar25 = 1;
      }
      else {
        bVar25 = *(byte *)(lVar26 + 0xe);
        if ((bVar25 & 0x10) == 0) {
          bVar25 = 1;
        }
      }
      cVar22 = bVar25 + cVar22;
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar31);
    lVar24 = lVar24 + (ulong)*(uint *)(lVar27 + 0x5c) * 0x14;
    if ((*(ushort *)(lVar24 + 0xc) >> 2 & 1) == 0) {
      bVar21 = 1;
    }
    else {
      bVar21 = *(byte *)(lVar24 + 0xe);
      if ((bVar21 & 0x10) == 0) {
        bVar21 = 1;
      }
    }
    iVar30 = (int)uVar18 + 1;
    *puVar13 = *(uint *)(lVar27 + 0x5c);
    puVar28 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar28 + 0x34) != 0) {
      cVar4 = *(char *)((long)puVar28 + 0x5a);
      uVar23 = puVar28[0x19];
      uVar15 = puVar28[0x17];
      puVar29 = puVar28;
      FUN_1096f6314();
      if ((int)puVar29 == 0) {
        uVar23 = uVar15;
      }
      puVar28[0x17] = uVar23;
      if (cVar4 == '\x01') {
        *(undefined1 *)((long)puVar28 + 0x5a) = 1;
        puVar28[0x19] = uVar23;
      }
      iVar8 = uVar23 - uVar15;
      puVar28 = auStack_480;
      _bzero(auStack_480,0x400);
      uVar33 = 0;
      do {
        puVar13[uVar33] = puVar13[uVar33] + iVar8;
        puVar29 = puVar28;
        if (uVar33 != 0) {
          puVar29 = (uint *)((long)puVar28 + 1);
          *(undefined1 *)puVar28 = 0x2c;
        }
        _snprintf(puVar29,(long)auStack_80 - (long)puVar29,&DAT_10f3b2553);
        puVar28 = puVar29;
        _strlen();
        puVar28 = (uint *)((long)puVar29 + (long)puVar28);
        uVar33 = uVar33 + 1;
      } while (CONCAT11((char)uVar7,bVar32) != uVar33);
      iVar30 = iVar8 + iVar30;
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57eeb6);
      puVar28 = *(uint **)(param_2 + 0x28);
    }
    uVar7 = *puVar19;
    if (1 < iVar30 - puVar28[0x17]) {
      FUN_1096f65e4(puVar28,puVar28[0x17],iVar30);
    }
    lVar24 = *(long *)(puVar28 + 0x1c);
    uVar6 = *(ushort *)(lVar24 + (ulong)*puVar13 * 0x14 + 0xc);
    bVar11 = (uVar6 & 8) == 0;
    if (uVar17 < 2) {
LAB_1097324e0:
      if ((uVar6 & 10) == 0) goto LAB_109732504;
      uVar16 = 0;
      bVar9 = false;
      bVar32 = 0;
    }
    else {
      lVar27 = uVar31 - 1;
      puVar29 = puVar13;
      while (puVar29 = puVar29 + 1,
            (*(ushort *)(lVar24 + (ulong)*puVar29 * 0x14 + 0xc) >> 3 & 1) != 0) {
        lVar27 = lVar27 + -1;
        if (lVar27 == 0) goto LAB_1097324e0;
      }
      bVar11 = true;
LAB_109732504:
      bVar32 = *(byte *)((long)puVar28 + 0xb9);
      do {
        bVar32 = bVar32 + 1;
        if ((bVar32 & 0xfe) == 0) {
          bVar32 = 1;
        }
      } while ((bVar32 & 7) == 0);
      *(byte *)((long)puVar28 + 0xb9) = bVar32;
      bVar32 = bVar32 << 5;
      bVar9 = true;
      uVar16 = 4;
    }
    uVar23 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    lVar24 = lVar24 + (ulong)puVar28[0x17] * 0x14;
    bVar5 = *(byte *)(lVar24 + 0xe);
    bVar35 = bVar5 & 0xf;
    if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar24 + 0xc) & 4) == 0) {
      bVar35 = 1;
    }
    if (bVar9) {
      *(byte *)(lVar24 + 0xe) = bVar32 | bVar21 + cVar22 & 0xf | 0x10;
      puVar19 = (ushort *)(*(long *)(puVar28 + 0x1c) + (ulong)puVar28[0x17] * 0x14 + 0x10);
      uVar7 = *puVar19;
      if ((uVar7 & 0x1f) == 0xc) {
        *puVar19 = uVar7 & 0xe0 | 7;
      }
    }
    func_0x00010973175c(param_2,uVar23,uVar16,1,0);
    puVar29 = *(uint **)(param_2 + 0x28);
    puVar14 = (uint *)0x1;
    auStack_480[0] = uVar23;
    FUN_109730ba4(puVar29,1,1,auStack_480);
    cVar22 = -bVar35;
    bVar21 = bVar35;
    if (1 < uVar17) {
      uVar23 = puVar28[0x17];
      uVar33 = 1;
      do {
        uVar34 = (ulong)uVar23;
        if (uVar23 < puVar13[uVar33]) {
          do {
            if ((char)puVar28[0x16] != '\x01') break;
            if (bVar9) {
              lVar24 = *(long *)(puVar28 + 0x1c) + uVar34 * 0x14;
              bVar25 = *(byte *)(lVar24 + 0xe);
              bVar5 = bVar25 & 0xf;
              if ((bVar25 & 0x10) != 0) {
                bVar5 = 0;
              }
              bVar25 = bVar5;
              if (bVar21 <= bVar5) {
                bVar25 = bVar21;
              }
              bVar3 = bVar21;
              if (bVar5 != 0) {
                bVar3 = bVar25;
              }
              *(byte *)(lVar24 + 0xe) = bVar35 + cVar22 + bVar3 & 0xf | bVar32;
            }
            puVar29 = puVar28;
            FUN_109704924();
            uVar34 = (ulong)puVar28[0x17];
          } while (puVar28[0x17] < puVar13[uVar33]);
        }
        lVar24 = *(long *)(puVar28 + 0x1c) + uVar34 * 0x14;
        bVar5 = *(byte *)(lVar24 + 0xe);
        bVar21 = bVar5 & 0xf;
        if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar24 + 0xc) & 4) == 0) {
          bVar21 = 1;
        }
        bVar35 = bVar21 + bVar35;
        uVar23 = (int)uVar34 + 1;
        puVar28[0x17] = uVar23;
        uVar33 = uVar33 + 1;
        cVar22 = -bVar21;
      } while (uVar33 != uVar31);
    }
    bVar9 = false;
    if (0x1f < bVar5) {
      bVar9 = bVar11;
    }
    if (bVar9) {
      uVar23 = puVar28[0x17];
      uVar33 = (ulong)uVar23;
      if (uVar23 < puVar28[0x18]) {
        lVar24 = (ulong)uVar23 * 0x14 + 0xe;
        do {
          bVar25 = *(byte *)(*(long *)(puVar28 + 0x1c) + lVar24);
          if (((0x1f < (bVar25 ^ bVar5)) || ((bVar25 >> 4 & 1) != 0)) || ((bVar25 & 0xf) == 0))
          break;
          bVar3 = bVar21;
          if ((bVar25 & 0xf) <= bVar21) {
            bVar3 = bVar25 & 0xf;
          }
          *(byte *)(*(long *)(puVar28 + 0x1c) + lVar24) = cVar22 + bVar35 + bVar3 & 0xf | bVar32;
          uVar33 = uVar33 + 1;
          lVar24 = lVar24 + 0x14;
        } while (uVar33 < puVar28[0x18]);
      }
    }
    lVar24 = *(long *)(param_2 + 0x28);
    if (*(long *)(lVar24 + 0xd0) != 0) {
      cVar22 = *(char *)(lVar24 + 0x5a);
      uVar1 = *(undefined4 *)(lVar24 + 100);
      uVar2 = *(undefined4 *)(lVar24 + 0x5c);
      lVar27 = lVar24;
      FUN_1096f6314();
      if ((int)lVar27 == 0) {
        uVar1 = uVar2;
      }
      *(undefined4 *)(lVar24 + 0x5c) = uVar1;
      if (cVar22 == '\x01') {
        *(undefined1 *)(lVar24 + 0x5a) = 1;
        *(undefined4 *)(lVar24 + 100) = uVar1;
      }
      puVar29 = *(uint **)(param_2 + 0x28);
      puVar14 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar29,puVar14,&UNK_10f57eecc);
    }
    if (puVar13 != auStack_80) {
      _free();
      puVar29 = puVar13;
    }
    goto LAB_1097327a0;
  }
LAB_109732304:
  uVar33 = uVar33 + 1;
  bVar10 = uVar33 < uVar23;
  if (uVar33 == uVar23) goto LAB_109732354;
  goto LAB_1097320e4;
LAB_1097322dc:
  puVar29 = *(uint **)(param_2 + 0x28);
  puVar14 = (uint *)(ulong)puVar29[0x17];
  FUN_109730c80(puVar29,puVar14,uVar15);
  if (puVar13 != auStack_80) {
    _free();
    puVar29 = puVar13;
  }
  goto LAB_109732304;
}



/* Entry: 109731fd4; end: 109732083;  */

bool FUN_109731fd4(long param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined1 uVar20;
  byte bVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  byte bVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  ulong uVar34;
  byte bVar35;
  uint auStack_480 [256];
  uint auStack_80 [4];
  long lStack_70;
  
  uVar23 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar12 = &UNK_10dfe4888;
  if (uVar23 != 0) {
    puVar12 = (undefined *)(param_1 + (ulong)uVar23);
  }
  func_0x000109729bf8(puVar12,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0x28) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_2 + 0x28) + 0x5c) * 0x14));
  if ((uint)puVar12 == 0xffffffff) {
    return false;
  }
  puVar28 = (uint *)&UNK_10dfe4888;
  if ((uint)puVar12 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar28 = (uint *)(param_1 + ((ulong)puVar12 & 0xffffffff) * 2 + 6);
  }
  uVar23 = (uint)(ushort)((ushort)*puVar28 >> 8) | ((ushort)*puVar28 & 0xff00ff) << 8;
  puVar28 = (uint *)&UNK_10dfe4888;
  if (uVar23 != 0) {
    puVar28 = (uint *)(param_1 + (ulong)uVar23);
  }
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = (uint)(ushort)((ushort)*puVar28 >> 8) | ((ushort)*puVar28 & 0xff00ff) << 8;
  puVar29 = puVar28;
  puVar14 = param_2;
  if (uVar23 == 0) {
LAB_109732354:
    bVar10 = false;
LAB_1097327a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return bVar10;
    }
    ___stack_chk_fail();
    uVar23 = puVar29[0xe];
    uVar17 = *puVar29;
    if ((int)uVar17 < (int)(uVar23 - 1)) {
      do {
        *puVar29 = uVar17 + 1;
        puVar28 = puVar29;
        func_0x000109732900(puVar29,*(long *)(*(long *)(*(long *)(puVar29 + 2) + 0xa0) + 0x70) +
                                    (ulong)(uVar17 + 1) * 0x14);
        if ((int)puVar28 == 1) {
          *puVar14 = *puVar29 + 1;
          return false;
        }
        if ((int)puVar28 == 0) {
          if (*(long *)(puVar29 + 0xc) != 0) {
            *(long *)(puVar29 + 0xc) = *(long *)(puVar29 + 0xc) + 2;
          }
          return true;
        }
        uVar17 = *puVar29;
      } while ((int)uVar17 < (int)(uVar23 - 1));
      uVar23 = puVar29[0xe];
    }
    *puVar14 = uVar23;
    return false;
  }
  uVar33 = 0;
  bVar10 = true;
LAB_1097320e4:
  uVar7 = *(ushort *)((long)puVar28 + uVar33 * 2 + 2);
  uVar17 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  puVar19 = (ushort *)&UNK_10dfe4888;
  if (uVar17 != 0) {
    puVar19 = (ushort *)((long)puVar28 + (ulong)uVar17);
  }
  uVar7 = puVar19[1];
  bVar32 = *(byte *)((long)puVar19 + 3);
  uVar17 = (uint)CONCAT11((char)uVar7,bVar32);
  uVar31 = (ulong)uVar17;
  if (uVar17 == 0) goto LAB_109732304;
  if (uVar17 == 1) {
    if (*(long *)(*(long *)(param_2 + 0x28) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57ee5b);
    }
    puVar14 = (uint *)(ulong)((uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8);
    func_0x00010973170c(param_2);
    puVar29 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar29 + 0x34) != 0) {
      puVar14 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar29,puVar14,&UNK_10f57ee89);
    }
    goto LAB_1097327a0;
  }
  if (uVar17 < 0x41) {
    if (uVar17 < 5) {
      puVar13 = auStack_80;
    }
    else {
      puVar29 = (uint *)((ulong)bVar32 << 2);
      _malloc();
      puVar13 = puVar29;
      if (puVar29 == (uint *)0x0) goto LAB_109732304;
    }
    lVar27 = *(long *)(param_2 + 0x28);
    uVar15 = *(uint *)(lVar27 + 0x5c);
    param_2[2] = uVar15;
    lVar24 = *(long *)(*(long *)(param_2 + 4) + 0xa0);
    param_2[0x10] = *(uint *)(lVar24 + 0x60);
    if (*(uint *)(lVar24 + 0x5c) == uVar15) {
      uVar20 = *(undefined1 *)(*(long *)(lVar24 + 0x70) + (ulong)uVar15 * 0x14 + 0xf);
    }
    else {
      uVar20 = 0;
    }
    cVar22 = '\0';
    iVar30 = 0;
    if (*(char *)((long)param_2 + 0x23) == '\0') {
      uVar20 = 0;
    }
    *(undefined1 *)(param_2 + 9) = uVar20;
    param_2[10] = 0x972aad0;
    param_2[0xb] = 1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(ushort **)(param_2 + 0xe) = puVar19 + 2;
    bVar35 = *(byte *)(*(long *)(lVar27 + 0x70) + (ulong)uVar15 * 0x14 + 0xe);
    bVar5 = bVar35 >> 5;
    bVar21 = bVar35 & 0xf;
    if ((bVar35 & 0x10) != 0) {
      bVar21 = 0;
    }
    uVar34 = 1;
    do {
      puVar29 = param_2 + 2;
      FUN_109732850(puVar29,auStack_480);
      uVar15 = auStack_480[0];
      if (((ulong)puVar29 & 1) == 0) goto LAB_1097322dc;
      uVar15 = param_2[2];
      uVar18 = (ulong)uVar15;
      puVar13[uVar34] = uVar15;
      lVar24 = *(long *)(lVar27 + 0x70);
      bVar3 = *(byte *)(lVar24 + (ulong)uVar15 * 0x14 + 0xe);
      bVar25 = bVar3 & 0xf;
      if ((bVar3 & 0x10) != 0) {
        bVar25 = 0;
      }
      if (bVar35 < 0x20 || bVar21 == 0) {
        if ((0x1f < bVar3 && bVar25 != 0) && bVar3 >> 5 != bVar5) goto LAB_1097322d0;
      }
      else if (bVar5 != bVar3 >> 5 || bVar21 != bVar25) {
        if (iVar30 == 0) {
          lVar26 = *(long *)(lVar27 + 0x78) + (ulong)*(uint *)(lVar27 + 100) * 0x14;
          lVar24 = (ulong)*(uint *)(lVar27 + 100) + 1;
          do {
            lVar24 = lVar24 + -1;
            if ((lVar24 == 0) || (bVar25 = *(byte *)(lVar26 + -6), bVar5 != bVar25 >> 5))
            goto LAB_1097322d0;
            lVar26 = lVar26 + -0x14;
          } while (((bVar25 >> 4 & 1) == 0) && ((bVar25 & 0xf) != 0));
          puVar29 = param_2 + 6;
          FUN_1097329b8(puVar29,*(undefined8 *)(param_2 + 4));
          if ((int)puVar29 != 1) goto LAB_1097322d0;
          lVar24 = *(long *)(lVar27 + 0x70);
          uVar18 = (ulong)param_2[2];
          iVar30 = 2;
        }
        else if (iVar30 == 1) {
LAB_1097322d0:
          uVar15 = 0;
          goto LAB_1097322dc;
        }
      }
      lVar26 = lVar24 + uVar18 * 0x14;
      if ((*(ushort *)(lVar26 + 0xc) >> 2 & 1) == 0) {
        bVar25 = 1;
      }
      else {
        bVar25 = *(byte *)(lVar26 + 0xe);
        if ((bVar25 & 0x10) == 0) {
          bVar25 = 1;
        }
      }
      cVar22 = bVar25 + cVar22;
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar31);
    lVar24 = lVar24 + (ulong)*(uint *)(lVar27 + 0x5c) * 0x14;
    if ((*(ushort *)(lVar24 + 0xc) >> 2 & 1) == 0) {
      bVar21 = 1;
    }
    else {
      bVar21 = *(byte *)(lVar24 + 0xe);
      if ((bVar21 & 0x10) == 0) {
        bVar21 = 1;
      }
    }
    iVar30 = (int)uVar18 + 1;
    *puVar13 = *(uint *)(lVar27 + 0x5c);
    puVar28 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar28 + 0x34) != 0) {
      cVar4 = *(char *)((long)puVar28 + 0x5a);
      uVar23 = puVar28[0x19];
      uVar15 = puVar28[0x17];
      puVar29 = puVar28;
      FUN_1096f6314();
      if ((int)puVar29 == 0) {
        uVar23 = uVar15;
      }
      puVar28[0x17] = uVar23;
      if (cVar4 == '\x01') {
        *(undefined1 *)((long)puVar28 + 0x5a) = 1;
        puVar28[0x19] = uVar23;
      }
      iVar8 = uVar23 - uVar15;
      puVar28 = auStack_480;
      _bzero(auStack_480,0x400);
      uVar33 = 0;
      do {
        puVar13[uVar33] = puVar13[uVar33] + iVar8;
        puVar29 = puVar28;
        if (uVar33 != 0) {
          puVar29 = (uint *)((long)puVar28 + 1);
          *(undefined1 *)puVar28 = 0x2c;
        }
        _snprintf(puVar29,(long)auStack_80 - (long)puVar29,&DAT_10f3b2553);
        puVar28 = puVar29;
        _strlen();
        puVar28 = (uint *)((long)puVar29 + (long)puVar28);
        uVar33 = uVar33 + 1;
      } while (CONCAT11((char)uVar7,bVar32) != uVar33);
      iVar30 = iVar8 + iVar30;
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57eeb6);
      puVar28 = *(uint **)(param_2 + 0x28);
    }
    uVar7 = *puVar19;
    if (1 < iVar30 - puVar28[0x17]) {
      FUN_1096f65e4(puVar28,puVar28[0x17],iVar30);
    }
    lVar24 = *(long *)(puVar28 + 0x1c);
    uVar6 = *(ushort *)(lVar24 + (ulong)*puVar13 * 0x14 + 0xc);
    bVar11 = (uVar6 & 8) == 0;
    if (uVar17 < 2) {
LAB_1097324e0:
      if ((uVar6 & 10) == 0) goto LAB_109732504;
      uVar16 = 0;
      bVar9 = false;
      bVar32 = 0;
    }
    else {
      lVar27 = uVar31 - 1;
      puVar29 = puVar13;
      while (puVar29 = puVar29 + 1,
            (*(ushort *)(lVar24 + (ulong)*puVar29 * 0x14 + 0xc) >> 3 & 1) != 0) {
        lVar27 = lVar27 + -1;
        if (lVar27 == 0) goto LAB_1097324e0;
      }
      bVar11 = true;
LAB_109732504:
      bVar32 = *(byte *)((long)puVar28 + 0xb9);
      do {
        bVar32 = bVar32 + 1;
        if ((bVar32 & 0xfe) == 0) {
          bVar32 = 1;
        }
      } while ((bVar32 & 7) == 0);
      *(byte *)((long)puVar28 + 0xb9) = bVar32;
      bVar32 = bVar32 << 5;
      bVar9 = true;
      uVar16 = 4;
    }
    uVar23 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    lVar24 = lVar24 + (ulong)puVar28[0x17] * 0x14;
    bVar5 = *(byte *)(lVar24 + 0xe);
    bVar35 = bVar5 & 0xf;
    if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar24 + 0xc) & 4) == 0) {
      bVar35 = 1;
    }
    if (bVar9) {
      *(byte *)(lVar24 + 0xe) = bVar32 | bVar21 + cVar22 & 0xf | 0x10;
      puVar19 = (ushort *)(*(long *)(puVar28 + 0x1c) + (ulong)puVar28[0x17] * 0x14 + 0x10);
      uVar7 = *puVar19;
      if ((uVar7 & 0x1f) == 0xc) {
        *puVar19 = uVar7 & 0xe0 | 7;
      }
    }
    func_0x00010973175c(param_2,uVar23,uVar16,1,0);
    puVar29 = *(uint **)(param_2 + 0x28);
    puVar14 = (uint *)0x1;
    auStack_480[0] = uVar23;
    FUN_109730ba4(puVar29,1,1,auStack_480);
    cVar22 = -bVar35;
    bVar21 = bVar35;
    if (1 < uVar17) {
      uVar23 = puVar28[0x17];
      uVar33 = 1;
      do {
        uVar34 = (ulong)uVar23;
        if (uVar23 < puVar13[uVar33]) {
          do {
            if ((char)puVar28[0x16] != '\x01') break;
            if (bVar9) {
              lVar24 = *(long *)(puVar28 + 0x1c) + uVar34 * 0x14;
              bVar25 = *(byte *)(lVar24 + 0xe);
              bVar5 = bVar25 & 0xf;
              if ((bVar25 & 0x10) != 0) {
                bVar5 = 0;
              }
              bVar25 = bVar5;
              if (bVar21 <= bVar5) {
                bVar25 = bVar21;
              }
              bVar3 = bVar21;
              if (bVar5 != 0) {
                bVar3 = bVar25;
              }
              *(byte *)(lVar24 + 0xe) = bVar35 + cVar22 + bVar3 & 0xf | bVar32;
            }
            puVar29 = puVar28;
            FUN_109704924();
            uVar34 = (ulong)puVar28[0x17];
          } while (puVar28[0x17] < puVar13[uVar33]);
        }
        lVar24 = *(long *)(puVar28 + 0x1c) + uVar34 * 0x14;
        bVar5 = *(byte *)(lVar24 + 0xe);
        bVar21 = bVar5 & 0xf;
        if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar24 + 0xc) & 4) == 0) {
          bVar21 = 1;
        }
        bVar35 = bVar21 + bVar35;
        uVar23 = (int)uVar34 + 1;
        puVar28[0x17] = uVar23;
        uVar33 = uVar33 + 1;
        cVar22 = -bVar21;
      } while (uVar33 != uVar31);
    }
    bVar9 = false;
    if (0x1f < bVar5) {
      bVar9 = bVar11;
    }
    if (bVar9) {
      uVar23 = puVar28[0x17];
      uVar33 = (ulong)uVar23;
      if (uVar23 < puVar28[0x18]) {
        lVar24 = (ulong)uVar23 * 0x14 + 0xe;
        do {
          bVar25 = *(byte *)(*(long *)(puVar28 + 0x1c) + lVar24);
          if (((0x1f < (bVar25 ^ bVar5)) || ((bVar25 >> 4 & 1) != 0)) || ((bVar25 & 0xf) == 0))
          break;
          bVar3 = bVar21;
          if ((bVar25 & 0xf) <= bVar21) {
            bVar3 = bVar25 & 0xf;
          }
          *(byte *)(*(long *)(puVar28 + 0x1c) + lVar24) = cVar22 + bVar35 + bVar3 & 0xf | bVar32;
          uVar33 = uVar33 + 1;
          lVar24 = lVar24 + 0x14;
        } while (uVar33 < puVar28[0x18]);
      }
    }
    lVar24 = *(long *)(param_2 + 0x28);
    if (*(long *)(lVar24 + 0xd0) != 0) {
      cVar22 = *(char *)(lVar24 + 0x5a);
      uVar1 = *(undefined4 *)(lVar24 + 100);
      uVar2 = *(undefined4 *)(lVar24 + 0x5c);
      lVar27 = lVar24;
      FUN_1096f6314();
      if ((int)lVar27 == 0) {
        uVar1 = uVar2;
      }
      *(undefined4 *)(lVar24 + 0x5c) = uVar1;
      if (cVar22 == '\x01') {
        *(undefined1 *)(lVar24 + 0x5a) = 1;
        *(undefined4 *)(lVar24 + 100) = uVar1;
      }
      puVar29 = *(uint **)(param_2 + 0x28);
      puVar14 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar29,puVar14,&UNK_10f57eecc);
    }
    if (puVar13 != auStack_80) {
      _free();
      puVar29 = puVar13;
    }
    goto LAB_1097327a0;
  }
LAB_109732304:
  uVar33 = uVar33 + 1;
  bVar10 = uVar33 < uVar23;
  if (uVar33 == uVar23) goto LAB_109732354;
  goto LAB_1097320e4;
LAB_1097322dc:
  puVar29 = *(uint **)(param_2 + 0x28);
  puVar14 = (uint *)(ulong)puVar29[0x17];
  FUN_109730c80(puVar29,puVar14,uVar15);
  if (puVar13 != auStack_80) {
    _free();
    puVar29 = puVar13;
  }
  goto LAB_109732304;
}



/* Entry: 109732084; end: 10973284f;  */

bool FUN_109732084(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ushort *puVar18;
  undefined1 uVar19;
  byte bVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  byte bVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  ulong uVar30;
  byte bVar31;
  ulong uVar32;
  ulong uVar33;
  byte bVar34;
  uint auStack_480 [256];
  uint auStack_80 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = (uint)(ushort)((ushort)*param_1 >> 8) | ((ushort)*param_1 & 0xff00ff) << 8;
  puVar13 = param_1;
  puVar28 = param_2;
  if (uVar22 == 0) {
LAB_109732354:
    bVar10 = false;
LAB_1097327a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return bVar10;
    }
    ___stack_chk_fail();
    uVar22 = puVar13[0xe];
    uVar16 = *puVar13;
    if ((int)uVar16 < (int)(uVar22 - 1)) {
      do {
        *puVar13 = uVar16 + 1;
        puVar12 = puVar13;
        func_0x000109732900(puVar13,*(long *)(*(long *)(*(long *)(puVar13 + 2) + 0xa0) + 0x70) +
                                    (ulong)(uVar16 + 1) * 0x14);
        if ((int)puVar12 == 1) {
          *puVar28 = *puVar13 + 1;
          return false;
        }
        if ((int)puVar12 == 0) {
          if (*(long *)(puVar13 + 0xc) != 0) {
            *(long *)(puVar13 + 0xc) = *(long *)(puVar13 + 0xc) + 2;
          }
          return true;
        }
        uVar16 = *puVar13;
      } while ((int)uVar16 < (int)(uVar22 - 1));
      uVar22 = puVar13[0xe];
    }
    *puVar28 = uVar22;
    return false;
  }
  uVar32 = 0;
  bVar10 = true;
LAB_1097320e4:
  uVar7 = *(ushort *)((long)param_1 + uVar32 * 2 + 2);
  uVar16 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  puVar18 = (ushort *)&UNK_10dfe4888;
  if (uVar16 != 0) {
    puVar18 = (ushort *)((long)param_1 + (ulong)uVar16);
  }
  uVar7 = puVar18[1];
  bVar31 = *(byte *)((long)puVar18 + 3);
  uVar16 = (uint)CONCAT11((char)uVar7,bVar31);
  uVar30 = (ulong)uVar16;
  if (uVar16 == 0) goto LAB_109732304;
  if (uVar16 == 1) {
    if (*(long *)(*(long *)(param_2 + 0x28) + 0xd0) != 0) {
      FUN_1096f6424();
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57ee5b);
    }
    puVar28 = (uint *)(ulong)((uint)(*puVar18 >> 8) | (*puVar18 & 0xff00ff) << 8);
    func_0x00010973170c(param_2);
    puVar13 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar13 + 0x34) != 0) {
      puVar28 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar13,puVar28,&UNK_10f57ee89);
    }
    goto LAB_1097327a0;
  }
  if (uVar16 < 0x41) {
    if (uVar16 < 5) {
      puVar12 = auStack_80;
    }
    else {
      puVar13 = (uint *)((ulong)bVar31 << 2);
      _malloc();
      puVar12 = puVar13;
      if (puVar13 == (uint *)0x0) goto LAB_109732304;
    }
    lVar26 = *(long *)(param_2 + 0x28);
    uVar14 = *(uint *)(lVar26 + 0x5c);
    param_2[2] = uVar14;
    lVar23 = *(long *)(*(long *)(param_2 + 4) + 0xa0);
    param_2[0x10] = *(uint *)(lVar23 + 0x60);
    if (*(uint *)(lVar23 + 0x5c) == uVar14) {
      uVar19 = *(undefined1 *)(*(long *)(lVar23 + 0x70) + (ulong)uVar14 * 0x14 + 0xf);
    }
    else {
      uVar19 = 0;
    }
    cVar21 = '\0';
    iVar29 = 0;
    if (*(char *)((long)param_2 + 0x23) == '\0') {
      uVar19 = 0;
    }
    *(undefined1 *)(param_2 + 9) = uVar19;
    param_2[10] = 0x972aad0;
    param_2[0xb] = 1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(ushort **)(param_2 + 0xe) = puVar18 + 2;
    bVar34 = *(byte *)(*(long *)(lVar26 + 0x70) + (ulong)uVar14 * 0x14 + 0xe);
    bVar5 = bVar34 >> 5;
    bVar20 = bVar34 & 0xf;
    if ((bVar34 & 0x10) != 0) {
      bVar20 = 0;
    }
    uVar33 = 1;
    do {
      puVar13 = param_2 + 2;
      FUN_109732850(puVar13,auStack_480);
      uVar14 = auStack_480[0];
      if (((ulong)puVar13 & 1) == 0) goto LAB_1097322dc;
      uVar14 = param_2[2];
      uVar17 = (ulong)uVar14;
      puVar12[uVar33] = uVar14;
      lVar23 = *(long *)(lVar26 + 0x70);
      bVar3 = *(byte *)(lVar23 + (ulong)uVar14 * 0x14 + 0xe);
      bVar24 = bVar3 & 0xf;
      if ((bVar3 & 0x10) != 0) {
        bVar24 = 0;
      }
      if (bVar34 < 0x20 || bVar20 == 0) {
        if ((0x1f < bVar3 && bVar24 != 0) && bVar3 >> 5 != bVar5) goto LAB_1097322d0;
      }
      else if (bVar5 != bVar3 >> 5 || bVar20 != bVar24) {
        if (iVar29 == 0) {
          lVar25 = *(long *)(lVar26 + 0x78) + (ulong)*(uint *)(lVar26 + 100) * 0x14;
          lVar23 = (ulong)*(uint *)(lVar26 + 100) + 1;
          do {
            lVar23 = lVar23 + -1;
            if ((lVar23 == 0) || (bVar24 = *(byte *)(lVar25 + -6), bVar5 != bVar24 >> 5))
            goto LAB_1097322d0;
            lVar25 = lVar25 + -0x14;
          } while (((bVar24 >> 4 & 1) == 0) && ((bVar24 & 0xf) != 0));
          puVar13 = param_2 + 6;
          FUN_1097329b8(puVar13,*(undefined8 *)(param_2 + 4));
          if ((int)puVar13 != 1) goto LAB_1097322d0;
          lVar23 = *(long *)(lVar26 + 0x70);
          uVar17 = (ulong)param_2[2];
          iVar29 = 2;
        }
        else if (iVar29 == 1) {
LAB_1097322d0:
          uVar14 = 0;
          goto LAB_1097322dc;
        }
      }
      lVar25 = lVar23 + uVar17 * 0x14;
      if ((*(ushort *)(lVar25 + 0xc) >> 2 & 1) == 0) {
        bVar24 = 1;
      }
      else {
        bVar24 = *(byte *)(lVar25 + 0xe);
        if ((bVar24 & 0x10) == 0) {
          bVar24 = 1;
        }
      }
      cVar21 = bVar24 + cVar21;
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar30);
    lVar23 = lVar23 + (ulong)*(uint *)(lVar26 + 0x5c) * 0x14;
    if ((*(ushort *)(lVar23 + 0xc) >> 2 & 1) == 0) {
      bVar20 = 1;
    }
    else {
      bVar20 = *(byte *)(lVar23 + 0xe);
      if ((bVar20 & 0x10) == 0) {
        bVar20 = 1;
      }
    }
    iVar29 = (int)uVar17 + 1;
    *puVar12 = *(uint *)(lVar26 + 0x5c);
    puVar27 = *(uint **)(param_2 + 0x28);
    if (*(long *)(puVar27 + 0x34) != 0) {
      cVar4 = *(char *)((long)puVar27 + 0x5a);
      uVar22 = puVar27[0x19];
      uVar14 = puVar27[0x17];
      puVar13 = puVar27;
      FUN_1096f6314();
      if ((int)puVar13 == 0) {
        uVar22 = uVar14;
      }
      puVar27[0x17] = uVar22;
      if (cVar4 == '\x01') {
        *(undefined1 *)((long)puVar27 + 0x5a) = 1;
        puVar27[0x19] = uVar22;
      }
      iVar8 = uVar22 - uVar14;
      puVar13 = auStack_480;
      _bzero(auStack_480,0x400);
      uVar32 = 0;
      do {
        puVar12[uVar32] = puVar12[uVar32] + iVar8;
        puVar28 = puVar13;
        if (uVar32 != 0) {
          puVar28 = (uint *)((long)puVar13 + 1);
          *(undefined1 *)puVar13 = 0x2c;
        }
        _snprintf(puVar28,(long)auStack_80 - (long)puVar28,&DAT_10f3b2553);
        puVar13 = puVar28;
        _strlen();
        puVar13 = (uint *)((long)puVar28 + (long)puVar13);
        uVar32 = uVar32 + 1;
      } while (CONCAT11((char)uVar7,bVar31) != uVar32);
      iVar29 = iVar8 + iVar29;
      FUN_1096f53f4(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x24),&UNK_10f57eeb6);
      puVar27 = *(uint **)(param_2 + 0x28);
    }
    uVar7 = *puVar18;
    if (1 < iVar29 - puVar27[0x17]) {
      FUN_1096f65e4(puVar27,puVar27[0x17],iVar29);
    }
    lVar23 = *(long *)(puVar27 + 0x1c);
    uVar6 = *(ushort *)(lVar23 + (ulong)*puVar12 * 0x14 + 0xc);
    bVar11 = (uVar6 & 8) == 0;
    if (uVar16 < 2) {
LAB_1097324e0:
      if ((uVar6 & 10) == 0) goto LAB_109732504;
      uVar15 = 0;
      bVar9 = false;
      bVar31 = 0;
    }
    else {
      lVar26 = uVar30 - 1;
      puVar13 = puVar12;
      while (puVar13 = puVar13 + 1,
            (*(ushort *)(lVar23 + (ulong)*puVar13 * 0x14 + 0xc) >> 3 & 1) != 0) {
        lVar26 = lVar26 + -1;
        if (lVar26 == 0) goto LAB_1097324e0;
      }
      bVar11 = true;
LAB_109732504:
      bVar31 = *(byte *)((long)puVar27 + 0xb9);
      do {
        bVar31 = bVar31 + 1;
        if ((bVar31 & 0xfe) == 0) {
          bVar31 = 1;
        }
      } while ((bVar31 & 7) == 0);
      *(byte *)((long)puVar27 + 0xb9) = bVar31;
      bVar31 = bVar31 << 5;
      bVar9 = true;
      uVar15 = 4;
    }
    uVar22 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    lVar23 = lVar23 + (ulong)puVar27[0x17] * 0x14;
    bVar5 = *(byte *)(lVar23 + 0xe);
    bVar34 = bVar5 & 0xf;
    if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar23 + 0xc) & 4) == 0) {
      bVar34 = 1;
    }
    if (bVar9) {
      *(byte *)(lVar23 + 0xe) = bVar31 | bVar20 + cVar21 & 0xf | 0x10;
      puVar18 = (ushort *)(*(long *)(puVar27 + 0x1c) + (ulong)puVar27[0x17] * 0x14 + 0x10);
      uVar7 = *puVar18;
      if ((uVar7 & 0x1f) == 0xc) {
        *puVar18 = uVar7 & 0xe0 | 7;
      }
    }
    func_0x00010973175c(param_2,uVar22,uVar15,1,0);
    puVar13 = *(uint **)(param_2 + 0x28);
    puVar28 = (uint *)0x1;
    auStack_480[0] = uVar22;
    FUN_109730ba4(puVar13,1,1,auStack_480);
    cVar21 = -bVar34;
    bVar20 = bVar34;
    if (1 < uVar16) {
      uVar22 = puVar27[0x17];
      uVar32 = 1;
      do {
        uVar33 = (ulong)uVar22;
        if (uVar22 < puVar12[uVar32]) {
          do {
            if ((char)puVar27[0x16] != '\x01') break;
            if (bVar9) {
              lVar23 = *(long *)(puVar27 + 0x1c) + uVar33 * 0x14;
              bVar24 = *(byte *)(lVar23 + 0xe);
              bVar5 = bVar24 & 0xf;
              if ((bVar24 & 0x10) != 0) {
                bVar5 = 0;
              }
              bVar24 = bVar5;
              if (bVar20 <= bVar5) {
                bVar24 = bVar20;
              }
              bVar3 = bVar20;
              if (bVar5 != 0) {
                bVar3 = bVar24;
              }
              *(byte *)(lVar23 + 0xe) = bVar34 + cVar21 + bVar3 & 0xf | bVar31;
            }
            puVar13 = puVar27;
            FUN_109704924();
            uVar33 = (ulong)puVar27[0x17];
          } while (puVar27[0x17] < puVar12[uVar32]);
        }
        lVar23 = *(long *)(puVar27 + 0x1c) + uVar33 * 0x14;
        bVar5 = *(byte *)(lVar23 + 0xe);
        bVar20 = bVar5 & 0xf;
        if ((bVar5 & 0x10) == 0 || (*(ushort *)(lVar23 + 0xc) & 4) == 0) {
          bVar20 = 1;
        }
        bVar34 = bVar20 + bVar34;
        uVar22 = (int)uVar33 + 1;
        puVar27[0x17] = uVar22;
        uVar32 = uVar32 + 1;
        cVar21 = -bVar20;
      } while (uVar32 != uVar30);
    }
    bVar9 = false;
    if (0x1f < bVar5) {
      bVar9 = bVar11;
    }
    if (bVar9) {
      uVar22 = puVar27[0x17];
      uVar32 = (ulong)uVar22;
      if (uVar22 < puVar27[0x18]) {
        lVar23 = (ulong)uVar22 * 0x14 + 0xe;
        do {
          bVar24 = *(byte *)(*(long *)(puVar27 + 0x1c) + lVar23);
          if (((0x1f < (bVar24 ^ bVar5)) || ((bVar24 >> 4 & 1) != 0)) || ((bVar24 & 0xf) == 0))
          break;
          bVar3 = bVar20;
          if ((bVar24 & 0xf) <= bVar20) {
            bVar3 = bVar24 & 0xf;
          }
          *(byte *)(*(long *)(puVar27 + 0x1c) + lVar23) = cVar21 + bVar34 + bVar3 & 0xf | bVar31;
          uVar32 = uVar32 + 1;
          lVar23 = lVar23 + 0x14;
        } while (uVar32 < puVar27[0x18]);
      }
    }
    lVar23 = *(long *)(param_2 + 0x28);
    if (*(long *)(lVar23 + 0xd0) != 0) {
      cVar21 = *(char *)(lVar23 + 0x5a);
      uVar1 = *(undefined4 *)(lVar23 + 100);
      uVar2 = *(undefined4 *)(lVar23 + 0x5c);
      lVar26 = lVar23;
      FUN_1096f6314();
      if ((int)lVar26 == 0) {
        uVar1 = uVar2;
      }
      *(undefined4 *)(lVar23 + 0x5c) = uVar1;
      if (cVar21 == '\x01') {
        *(undefined1 *)(lVar23 + 0x5a) = 1;
        *(undefined4 *)(lVar23 + 100) = uVar1;
      }
      puVar13 = *(uint **)(param_2 + 0x28);
      puVar28 = *(uint **)(param_2 + 0x24);
      FUN_1096f53f4(puVar13,puVar28,&UNK_10f57eecc);
    }
    if (puVar12 != auStack_80) {
      _free();
      puVar13 = puVar12;
    }
    goto LAB_1097327a0;
  }
LAB_109732304:
  uVar32 = uVar32 + 1;
  bVar10 = uVar32 < uVar22;
  if (uVar32 == uVar22) goto LAB_109732354;
  goto LAB_1097320e4;
LAB_1097322dc:
  puVar13 = *(uint **)(param_2 + 0x28);
  puVar28 = (uint *)(ulong)puVar13[0x17];
  FUN_109730c80(puVar13,puVar28,uVar14);
  if (puVar12 != auStack_80) {
    _free();
    puVar13 = puVar12;
  }
  goto LAB_109732304;
}



/* Entry: 109732850; end: 1097329b7;  */

undefined8 FUN_109732850(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[0xe];
  uVar2 = *param_1;
  if ((int)uVar2 < (int)(uVar3 - 1)) {
    do {
      *param_1 = uVar2 + 1;
      puVar1 = param_1;
      func_0x000109732900(param_1,*(long *)(*(long *)(*(long *)(param_1 + 2) + 0xa0) + 0x70) +
                                  (ulong)(uVar2 + 1) * 0x14);
      if ((int)puVar1 == 1) {
        *param_2 = *param_1 + 1;
        return 0;
      }
      if ((int)puVar1 == 0) {
        if (*(long *)(param_1 + 0xc) != 0) {
          *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 2;
        }
        return 1;
      }
      uVar2 = *param_1;
    } while ((int)uVar2 < (int)(uVar3 - 1));
    uVar3 = param_1[0xe];
  }
  *param_2 = uVar3;
  return 0;
}



/* Entry: 1097329b8; end: 109732a57;  */

undefined4 FUN_1097329b8(undefined4 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  FUN_109732a58(param_2,param_3,*param_1);
  if ((int)param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0x10);
    if (((((uVar1 >> 5 & 1) == 0) || ((*(ushort *)(param_3 + 0xc) >> 4 & 1) != 0)) ||
        (((uVar1 & 0x21f) == 0x201 && ((*(byte *)(param_1 + 2) & 1) == 0)))) ||
       (((uVar1 & 0x11f) == 0x101 && ((*(byte *)((long)param_1 + 9) & 1) == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
      if ((uVar1 & 0x40) != 0 && (*(byte *)((long)param_1 + 10) & 1) == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* Entry: 109732a58; end: 109732a87;  */

ushort * FUN_109732a58(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  
  uVar2 = *(ushort *)(param_2 + 3);
  if ((param_3 & uVar2 & 0xe) != 0) {
    return (ushort *)0x0;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return (ushort *)0x1;
  }
  uVar1 = *param_2;
  if ((param_3 >> 4 & 1) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0xf8);
    uVar3 = param_3 >> 0x10;
    puVar6 = (ushort *)&UNK_10dfe4888;
    if (param_3 >> 0x10 < *(uint *)((long)puVar7 + 0xc)) {
      puVar6 = (ushort *)(puVar7[2] + (ulong)uVar3 * 0x18);
    }
    FUN_10972a9e4(puVar6,uVar1);
    if ((int)puVar6 != 0) {
      puVar6 = (ushort *)&UNK_10dfe4888;
      if ((ushort *)*puVar7 != (ushort *)0x0) {
        puVar6 = (ushort *)*puVar7;
      }
      puVar4 = (ushort *)&UNK_10dfe4888;
      if (3 < *(uint *)(puVar6 + 0xc)) {
        puVar4 = *(ushort **)(puVar6 + 8);
      }
      FUN_10972b1e8();
      if ((ushort)(*puVar4 >> 8 | *puVar4 << 8) == 1) {
        puVar5 = (uint *)&UNK_10dfe4888;
        if (uVar3 < ((uint)(puVar4[1] >> 8) | (puVar4[1] & 0xff00ff) << 8)) {
          puVar5 = (uint *)(puVar4 + (ulong)uVar3 * 2 + 2);
        }
        uVar3 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        puVar5 = (uint *)&UNK_10dfe4888;
        if (uVar3 != 0) {
          puVar5 = (uint *)((long)puVar4 + (ulong)uVar3);
        }
        func_0x000109729bf8(puVar5,uVar1);
        puVar6 = (ushort *)(ulong)((int)puVar5 != -1);
      }
      else {
        puVar6 = (ushort *)0x0;
      }
    }
    return puVar6;
  }
  if ((param_3 & 0xff00) == 0) {
    return (ushort *)0x1;
  }
  return (ushort *)(ulong)((param_3 & 0xff00) == (uVar2 & 0xff00));
}



/* Entry: 109732a88; end: 109732b8f;  */

ushort * FUN_109732a88(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  
  if ((param_4 >> 4 & 1) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0xf8);
    uVar1 = param_4 >> 0x10;
    puVar4 = (ushort *)&UNK_10dfe4888;
    if (param_4 >> 0x10 < *(uint *)((long)puVar5 + 0xc)) {
      puVar4 = (ushort *)(puVar5[2] + (ulong)uVar1 * 0x18);
    }
    FUN_10972a9e4(puVar4,param_2);
    if ((int)puVar4 != 0) {
      puVar4 = (ushort *)&UNK_10dfe4888;
      if ((ushort *)*puVar5 != (ushort *)0x0) {
        puVar4 = (ushort *)*puVar5;
      }
      puVar2 = (ushort *)&UNK_10dfe4888;
      if (3 < *(uint *)(puVar4 + 0xc)) {
        puVar2 = *(ushort **)(puVar4 + 8);
      }
      FUN_10972b1e8();
      if ((ushort)(*puVar2 >> 8 | *puVar2 << 8) == 1) {
        puVar3 = (uint *)&UNK_10dfe4888;
        if (uVar1 < ((uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8)) {
          puVar3 = (uint *)(puVar2 + (ulong)uVar1 * 2 + 2);
        }
        uVar1 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        puVar3 = (uint *)&UNK_10dfe4888;
        if (uVar1 != 0) {
          puVar3 = (uint *)((long)puVar2 + (ulong)uVar1);
        }
        func_0x000109729bf8(puVar3,param_2);
        puVar4 = (ushort *)(ulong)((int)puVar3 != -1);
      }
      else {
        puVar4 = (ushort *)0x0;
      }
    }
    return puVar4;
  }
  if ((param_4 & 0xff00) == 0) {
    return (ushort *)0x1;
  }
  return (ushort *)(ulong)((param_4 & 0xff00) == (param_3 & 0xff00));
}



/* Entry: 109732b90; end: 109732b9f;  */

/* WARNING: Possible PIC construction at 0x000109732d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109732d20) */
/* WARNING: Removing unreachable block (ram,0x000109732d78) */
/* WARNING: Removing unreachable block (ram,0x000109732d34) */
/* WARNING: Removing unreachable block (ram,0x000109732d84) */
/* WARNING: Removing unreachable block (ram,0x000109732dc0) */
/* WARNING: Removing unreachable block (ram,0x000109732d90) */
/* WARNING: Removing unreachable block (ram,0x000109732dd4) */

long FUN_109732b90(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uVar15;
  ushort *puVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  uint *puVar20;
  long lVar21;
  long unaff_x28;
  ulong uVar22;
  int iStack_104;
  long lStack_100;
  undefined8 uStack_88;
  int iStack_7c;
  undefined4 auStack_78 [4];
  long lStack_68;
  
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar8 = &UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar8 = (undefined *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(puVar8,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((uint)puVar8 == 0xffffffff) {
    return 0;
  }
  puVar16 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar8 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar16 = (ushort *)(param_1 + ((ulong)puVar8 & 0xffffffff) * 2 + 6);
  }
  uVar6 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
  puVar16 = (ushort *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar16 = (ushort *)(param_1 + (ulong)uVar6);
  }
  puVar8 = (undefined *)0x10972aad0;
  uVar13 = 0;
  uStack_88 = 0x10972aad0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
  lVar17 = param_2;
  if (uVar6 != 0) {
    puVar19 = (undefined *)((long)puVar16 + 3);
    do {
      uVar11 = (uint)(*(ushort *)(puVar19 + -1) >> 8) | (*(ushort *)(puVar19 + -1) & 0xff00ff) << 8;
      puVar2 = &UNK_10dfe4888;
      if (uVar11 != 0) {
        puVar2 = (undefined *)((long)puVar16 + (ulong)uVar11);
      }
      uVar11 = (uint)CONCAT11(*puVar2,puVar2[1]);
      unaff_x28 = param_2;
      if (uVar11 < 0x41) {
        if (uVar11 < 5) {
          puVar9 = auStack_78;
        }
        else {
          puVar9 = (undefined4 *)((ulong)(byte)puVar2[1] << 2);
          _malloc();
          if (puVar9 == (undefined4 *)0x0) goto LAB_109732d98;
        }
        param_7 = puVar9;
        puVar8 = puVar2 + 4;
        iStack_7c = 0;
        param_6 = &iStack_7c;
        param_5 = 0;
        goto SUB_109732e14;
      }
LAB_109732d98:
      puVar19 = puVar19 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uStack_88 = uVar13;
  uVar11 = (uint)lVar17;
  param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
SUB_109732e14:
  lVar21 = *(long *)(param_2 + 0xa0);
  uVar14 = *(uint *)(lVar21 + 0x5c);
  puVar20 = (uint *)(param_2 + 8);
  *puVar20 = uVar14;
  lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar6 = *(uint *)(lVar17 + 0x5c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar17 + 0x60);
  if (uVar6 == uVar14) {
    uVar15 = *(undefined1 *)(*(long *)(lVar17 + 0x70) + (ulong)uVar14 * 0x14 + 0xf);
  }
  else {
    uVar15 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar15 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar15;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = param_5;
  *(undefined **)(param_2 + 0x38) = puVar8;
  bVar3 = *(byte *)(*(long *)(lVar21 + 0x70) + (ulong)uVar14 * 0x14 + 0xe);
  bVar1 = bVar3 & 0xf;
  if ((bVar3 & 0x10) != 0) {
    bVar1 = 0;
  }
  if (1 < uVar11) {
    iVar18 = 0;
    bVar7 = bVar3 >> 5;
    uVar22 = 1;
    lStack_100 = unaff_x28;
    do {
      puVar10 = puVar20;
      FUN_109732850(puVar20,&iStack_104);
      if (((ulong)puVar10 & 1) == 0) {
        *param_6 = iStack_104;
        return 0;
      }
      uVar6 = *puVar20;
      param_7[uVar22] = uVar6;
      bVar4 = *(byte *)(*(long *)(lVar21 + 0x70) + (ulong)uVar6 * 0x14 + 0xe);
      bVar5 = bVar4 & 0xf;
      if ((bVar4 & 0x10) != 0) {
        bVar5 = 0;
      }
      if (bVar3 < 0x20 || bVar1 == 0) {
        if ((0x1f < bVar4 && bVar5 != 0) && bVar4 >> 5 != bVar7) {
          return 0;
        }
      }
      else if (bVar7 != bVar4 >> 5 || bVar1 != bVar5) {
        if (iVar18 == 0) {
          lVar12 = *(long *)(lVar21 + 0x78) + (ulong)*(uint *)(lVar21 + 100) * 0x14;
          lVar17 = (ulong)*(uint *)(lVar21 + 100) + 1;
          do {
            lVar17 = lVar17 + -1;
            if (lVar17 == 0) {
              return 0;
            }
            bVar5 = *(byte *)(lVar12 + -6);
            if (bVar7 != bVar5 >> 5) {
              return 0;
            }
            lVar12 = lVar12 + -0x14;
          } while (((bVar5 >> 4 & 1) == 0) && ((bVar5 & 0xf) != 0));
          lVar17 = param_2 + 0x18;
          FUN_1097329b8(lVar17,*(undefined8 *)(param_2 + 0x10));
          if ((int)lVar17 != 1) {
            return 0;
          }
          iVar18 = 2;
        }
        else if (iVar18 == 1) {
          return 0;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar11);
    uVar14 = *puVar20;
  }
  *param_6 = uVar14 + 1;
  *param_7 = *(undefined4 *)(lVar21 + 0x5c);
  return 1;
}



/* Entry: 109732ba0; end: 109732c5b;  */

/* WARNING: Possible PIC construction at 0x000109732d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109732d20) */
/* WARNING: Removing unreachable block (ram,0x000109732d78) */
/* WARNING: Removing unreachable block (ram,0x000109732d34) */
/* WARNING: Removing unreachable block (ram,0x000109732d84) */
/* WARNING: Removing unreachable block (ram,0x000109732dc0) */
/* WARNING: Removing unreachable block (ram,0x000109732d90) */
/* WARNING: Removing unreachable block (ram,0x000109732dd4) */

long FUN_109732ba0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uVar15;
  ushort *puVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  uint *puVar20;
  long lVar21;
  long unaff_x28;
  ulong uVar22;
  int iStack_104;
  long lStack_100;
  undefined8 uStack_88;
  int iStack_7c;
  undefined4 auStack_78 [4];
  long lStack_68;
  
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar8 = &UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar8 = (undefined *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(puVar8,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((uint)puVar8 == 0xffffffff) {
    return 0;
  }
  puVar16 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar8 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar16 = (ushort *)(param_1 + ((ulong)puVar8 & 0xffffffff) * 2 + 6);
  }
  uVar6 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
  puVar16 = (ushort *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar16 = (ushort *)(param_1 + (ulong)uVar6);
  }
  puVar8 = (undefined *)0x10972aad0;
  uVar13 = 0;
  uStack_88 = 0x10972aad0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
  lVar17 = param_2;
  if (uVar6 != 0) {
    puVar19 = (undefined *)((long)puVar16 + 3);
    do {
      uVar11 = (uint)(*(ushort *)(puVar19 + -1) >> 8) | (*(ushort *)(puVar19 + -1) & 0xff00ff) << 8;
      puVar2 = &UNK_10dfe4888;
      if (uVar11 != 0) {
        puVar2 = (undefined *)((long)puVar16 + (ulong)uVar11);
      }
      uVar11 = (uint)CONCAT11(*puVar2,puVar2[1]);
      unaff_x28 = param_2;
      if (uVar11 < 0x41) {
        if (uVar11 < 5) {
          puVar9 = auStack_78;
        }
        else {
          puVar9 = (undefined4 *)((ulong)(byte)puVar2[1] << 2);
          _malloc();
          if (puVar9 == (undefined4 *)0x0) goto LAB_109732d98;
        }
        param_7 = puVar9;
        puVar8 = puVar2 + 4;
        iStack_7c = 0;
        param_6 = &iStack_7c;
        param_5 = 0;
        goto SUB_109732e14;
      }
LAB_109732d98:
      puVar19 = puVar19 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uStack_88 = uVar13;
  uVar11 = (uint)lVar17;
  param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
SUB_109732e14:
  lVar21 = *(long *)(param_2 + 0xa0);
  uVar14 = *(uint *)(lVar21 + 0x5c);
  puVar20 = (uint *)(param_2 + 8);
  *puVar20 = uVar14;
  lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar6 = *(uint *)(lVar17 + 0x5c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar17 + 0x60);
  if (uVar6 == uVar14) {
    uVar15 = *(undefined1 *)(*(long *)(lVar17 + 0x70) + (ulong)uVar14 * 0x14 + 0xf);
  }
  else {
    uVar15 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar15 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar15;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = param_5;
  *(undefined **)(param_2 + 0x38) = puVar8;
  bVar3 = *(byte *)(*(long *)(lVar21 + 0x70) + (ulong)uVar14 * 0x14 + 0xe);
  bVar1 = bVar3 & 0xf;
  if ((bVar3 & 0x10) != 0) {
    bVar1 = 0;
  }
  if (1 < uVar11) {
    iVar18 = 0;
    bVar7 = bVar3 >> 5;
    uVar22 = 1;
    lStack_100 = unaff_x28;
    do {
      puVar10 = puVar20;
      FUN_109732850(puVar20,&iStack_104);
      if (((ulong)puVar10 & 1) == 0) {
        *param_6 = iStack_104;
        return 0;
      }
      uVar6 = *puVar20;
      param_7[uVar22] = uVar6;
      bVar4 = *(byte *)(*(long *)(lVar21 + 0x70) + (ulong)uVar6 * 0x14 + 0xe);
      bVar5 = bVar4 & 0xf;
      if ((bVar4 & 0x10) != 0) {
        bVar5 = 0;
      }
      if (bVar3 < 0x20 || bVar1 == 0) {
        if ((0x1f < bVar4 && bVar5 != 0) && bVar4 >> 5 != bVar7) {
          return 0;
        }
      }
      else if (bVar7 != bVar4 >> 5 || bVar1 != bVar5) {
        if (iVar18 == 0) {
          lVar12 = *(long *)(lVar21 + 0x78) + (ulong)*(uint *)(lVar21 + 100) * 0x14;
          lVar17 = (ulong)*(uint *)(lVar21 + 100) + 1;
          do {
            lVar17 = lVar17 + -1;
            if (lVar17 == 0) {
              return 0;
            }
            bVar5 = *(byte *)(lVar12 + -6);
            if (bVar7 != bVar5 >> 5) {
              return 0;
            }
            lVar12 = lVar12 + -0x14;
          } while (((bVar5 >> 4 & 1) == 0) && ((bVar5 & 0xf) != 0));
          lVar17 = param_2 + 0x18;
          FUN_1097329b8(lVar17,*(undefined8 *)(param_2 + 0x10));
          if ((int)lVar17 != 1) {
            return 0;
          }
          iVar18 = 2;
        }
        else if (iVar18 == 1) {
          return 0;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar11);
    uVar14 = *puVar20;
  }
  *param_6 = uVar14 + 1;
  *param_7 = *(undefined4 *)(lVar21 + 0x5c);
  return 1;
}



/* Entry: 109732c5c; end: 109732ff3;  */

/* WARNING: Possible PIC construction at 0x000109732d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109732d20) */
/* WARNING: Removing unreachable block (ram,0x000109732d78) */
/* WARNING: Removing unreachable block (ram,0x000109732d34) */
/* WARNING: Removing unreachable block (ram,0x000109732d84) */
/* WARNING: Removing unreachable block (ram,0x000109732dc0) */
/* WARNING: Removing unreachable block (ram,0x000109732d90) */
/* WARNING: Removing unreachable block (ram,0x000109732dd4) */

long FUN_109732c5c(ushort *param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,int *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  long lVar19;
  long unaff_x28;
  ulong uVar20;
  int iStack_104;
  long lStack_100;
  int iStack_7c;
  undefined4 auStack_78 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  lVar16 = param_2;
  puVar11 = param_3;
  puVar13 = param_4;
  if (uVar6 != 0) {
    lVar19 = (long)param_1 + 3;
    do {
      uVar10 = (uint)(*(ushort *)(lVar19 + -1) >> 8) | (*(ushort *)(lVar19 + -1) & 0xff00ff) << 8;
      puVar2 = &UNK_10dfe4888;
      if (uVar10 != 0) {
        puVar2 = (undefined *)((long)param_1 + (ulong)uVar10);
      }
      uVar10 = (uint)CONCAT11(*puVar2,puVar2[1]);
      unaff_x28 = param_2;
      if (uVar10 < 0x41) {
        if (uVar10 < 5) {
          puVar8 = auStack_78;
        }
        else {
          puVar8 = (undefined4 *)((ulong)(byte)puVar2[1] << 2);
          _malloc();
          if (puVar8 == (undefined4 *)0x0) goto LAB_109732d98;
        }
        param_7 = puVar8;
        puVar11 = puVar2 + 4;
        iStack_7c = 0;
        param_6 = &iStack_7c;
        goto SUB_109732e14;
      }
LAB_109732d98:
      lVar19 = lVar19 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  param_4 = param_5;
  param_3 = puVar13;
  uVar10 = (uint)lVar16;
  param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
SUB_109732e14:
  lVar19 = *(long *)(param_2 + 0xa0);
  uVar14 = *(uint *)(lVar19 + 0x5c);
  puVar18 = (uint *)(param_2 + 8);
  *puVar18 = uVar14;
  lVar16 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar6 = *(uint *)(lVar16 + 0x5c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar16 + 0x60);
  if (uVar6 == uVar14) {
    uVar15 = *(undefined1 *)(*(long *)(lVar16 + 0x70) + (ulong)uVar14 * 0x14 + 0xf);
  }
  else {
    uVar15 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar15 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar15;
  *(undefined **)(param_2 + 0x28) = param_3;
  *(undefined **)(param_2 + 0x30) = param_4;
  *(undefined **)(param_2 + 0x38) = puVar11;
  bVar3 = *(byte *)(*(long *)(lVar19 + 0x70) + (ulong)uVar14 * 0x14 + 0xe);
  bVar1 = bVar3 & 0xf;
  if ((bVar3 & 0x10) != 0) {
    bVar1 = 0;
  }
  if (1 < uVar10) {
    iVar17 = 0;
    bVar7 = bVar3 >> 5;
    uVar20 = 1;
    lStack_100 = unaff_x28;
    do {
      puVar9 = puVar18;
      FUN_109732850(puVar18,&iStack_104);
      if (((ulong)puVar9 & 1) == 0) {
        *param_6 = iStack_104;
        return 0;
      }
      uVar6 = *puVar18;
      param_7[uVar20] = uVar6;
      bVar4 = *(byte *)(*(long *)(lVar19 + 0x70) + (ulong)uVar6 * 0x14 + 0xe);
      bVar5 = bVar4 & 0xf;
      if ((bVar4 & 0x10) != 0) {
        bVar5 = 0;
      }
      if (bVar3 < 0x20 || bVar1 == 0) {
        if ((0x1f < bVar4 && bVar5 != 0) && bVar4 >> 5 != bVar7) {
          return 0;
        }
      }
      else if (bVar7 != bVar4 >> 5 || bVar1 != bVar5) {
        if (iVar17 == 0) {
          lVar12 = *(long *)(lVar19 + 0x78) + (ulong)*(uint *)(lVar19 + 100) * 0x14;
          lVar16 = (ulong)*(uint *)(lVar19 + 100) + 1;
          do {
            lVar16 = lVar16 + -1;
            if (lVar16 == 0) {
              return 0;
            }
            bVar5 = *(byte *)(lVar12 + -6);
            if (bVar7 != bVar5 >> 5) {
              return 0;
            }
            lVar12 = lVar12 + -0x14;
          } while (((bVar5 >> 4 & 1) == 0) && ((bVar5 & 0xf) != 0));
          lVar16 = param_2 + 0x18;
          FUN_1097329b8(lVar16,*(undefined8 *)(param_2 + 0x10));
          if ((int)lVar16 != 1) {
            return 0;
          }
          iVar17 = 2;
        }
        else if (iVar17 == 1) {
          return 0;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar10);
    uVar14 = *puVar18;
  }
  *param_6 = uVar14 + 1;
  *param_7 = *(undefined4 *)(lVar19 + 0x5c);
  return 1;
}



/* Entry: 109732ff4; end: 10973346b;  */

/* WARNING: Possible PIC construction at 0x0001097330f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097330f8) */
/* WARNING: Removing unreachable block (ram,0x0001097330fc) */
/* WARNING: Removing unreachable block (ram,0x000109733418) */
/* WARNING: Removing unreachable block (ram,0x000109733108) */
/* WARNING: Removing unreachable block (ram,0x000109733118) */
/* WARNING: Removing unreachable block (ram,0x000109733124) */
/* WARNING: Removing unreachable block (ram,0x00010973313c) */
/* WARNING: Removing unreachable block (ram,0x000109733158) */
/* WARNING: Removing unreachable block (ram,0x000109733164) */
/* WARNING: Removing unreachable block (ram,0x000109733188) */
/* WARNING: Removing unreachable block (ram,0x000109733370) */
/* WARNING: Removing unreachable block (ram,0x000109733190) */
/* WARNING: Removing unreachable block (ram,0x00010973319c) */
/* WARNING: Removing unreachable block (ram,0x000109733374) */
/* WARNING: Removing unreachable block (ram,0x0001097331b4) */
/* WARNING: Removing unreachable block (ram,0x00010973337c) */
/* WARNING: Removing unreachable block (ram,0x0001097331d8) */
/* WARNING: Removing unreachable block (ram,0x0001097331e8) */
/* WARNING: Removing unreachable block (ram,0x0001097331f4) */
/* WARNING: Removing unreachable block (ram,0x00010973320c) */
/* WARNING: Removing unreachable block (ram,0x000109733228) */
/* WARNING: Removing unreachable block (ram,0x000109733234) */
/* WARNING: Removing unreachable block (ram,0x000109733258) */
/* WARNING: Removing unreachable block (ram,0x000109733264) */
/* WARNING: Removing unreachable block (ram,0x00010973328c) */
/* WARNING: Removing unreachable block (ram,0x00010973329c) */
/* WARNING: Removing unreachable block (ram,0x0001097332a4) */
/* WARNING: Removing unreachable block (ram,0x0001097332dc) */
/* WARNING: Removing unreachable block (ram,0x0001097332e8) */
/* WARNING: Removing unreachable block (ram,0x0001097332b8) */
/* WARNING: Removing unreachable block (ram,0x0001097332c8) */
/* WARNING: Removing unreachable block (ram,0x000109733394) */
/* WARNING: Removing unreachable block (ram,0x0001097333a0) */
/* WARNING: Removing unreachable block (ram,0x0001097333b0) */
/* WARNING: Removing unreachable block (ram,0x0001097333b4) */
/* WARNING: Removing unreachable block (ram,0x0001097333b8) */
/* WARNING: Removing unreachable block (ram,0x0001097333ec) */
/* WARNING: Removing unreachable block (ram,0x000109733464) */
/* WARNING: Removing unreachable block (ram,0x0001097333f8) */
/* WARNING: Removing unreachable block (ram,0x0001097333d0) */
/* WARNING: Removing unreachable block (ram,0x00010973345c) */
/* WARNING: Removing unreachable block (ram,0x0001097333e8) */
/* WARNING: Removing unreachable block (ram,0x0001097332d4) */
/* WARNING: Removing unreachable block (ram,0x0001097332f4) */
/* WARNING: Removing unreachable block (ram,0x0001097332f8) */
/* WARNING: Removing unreachable block (ram,0x000109733318) */
/* WARNING: Removing unreachable block (ram,0x000109733324) */
/* WARNING: Removing unreachable block (ram,0x000109733338) */
/* WARNING: Removing unreachable block (ram,0x000109733348) */
/* WARNING: Removing unreachable block (ram,0x00010973334c) */
/* WARNING: Removing unreachable block (ram,0x000109733364) */
/* WARNING: Removing unreachable block (ram,0x000109733284) */
/* WARNING: Removing unreachable block (ram,0x00010973342c) */

void FUN_109732ff4(long param_1,ulong param_2,int *param_3,uint param_4,long param_5,int param_6)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long lVar13;
  int *unaff_x20;
  ulong unaff_x21;
  ushort *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_c0 [24];
  int *piStack_a8;
  ulong uStack_a0;
  long lStack_98;
  uint uStack_8c;
  ulong uStack_88;
  ulong uStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar13 = *(long *)(param_1 + 0xa0);
  lVar7 = 100;
  if (*(char *)(lVar13 + 0x5a) == '\0') {
    lVar7 = 0x5c;
  }
  iVar3 = *(int *)(lVar13 + lVar7);
  iVar9 = *(int *)(lVar13 + 0x5c);
  uVar8 = (iVar3 + param_6) - iVar9;
  if ((uint)param_2 != 0) {
    uVar11 = param_2 & 0xffffffff;
    piVar12 = param_3;
    do {
      *piVar12 = (iVar3 - iVar9) + *piVar12;
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar11 != 0);
  }
  if (param_4 != 0) {
    uVar11 = 0;
    uStack_88 = (ulong)param_4;
    do {
      piStack_a8 = param_3;
      uStack_a0 = param_2;
      lStack_98 = param_5;
      uStack_8c = uVar8;
      if (*(char *)(lVar13 + 0x58) != '\x01') break;
      puVar2 = (ushort *)(param_5 + uVar11 * 4);
      uVar4 = *puVar2;
      uVar10 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
      if (uVar10 < (uint)param_2) {
        lVar7 = 100;
        if (*(char *)(lVar13 + 0x5a) == '\0') {
          lVar7 = 0x5c;
        }
        if ((uint)param_3[uVar10] <
            (uint)((*(int *)(lVar13 + 0x60) - *(int *)(lVar13 + 0x5c)) + *(int *)(lVar13 + lVar7)))
        {
          unaff_x30 = 0x1097330f8;
          register0x00000008 = (BADSPACEBASE *)auStack_c0;
          unaff_x19 = lVar13;
          unaff_x20 = param_3;
          unaff_x21 = (ulong)uVar10;
          unaff_x22 = puVar2;
          unaff_x29 = puVar1;
          uVar8 = param_3[uVar10];
          uStack_78 = param_2;
          break;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uStack_88);
  }
  *(ushort **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(byte *)(lVar13 + 0x5a) & 1) == 0) {
    *(uint *)(lVar13 + 0x5c) = uVar8;
  }
  else if (*(char *)(lVar13 + 0x58) == '\x01') {
    uVar10 = *(uint *)(lVar13 + 100);
    uVar5 = uVar10 - uVar8;
    if (uVar10 < uVar8) {
      uVar8 = uVar8 - uVar10;
      uVar11 = (ulong)uVar8;
      lVar7 = lVar13;
      FUN_1096f5fd4(lVar13,uVar11,uVar11);
      if ((int)lVar7 != 0) {
        _memmove(*(long *)(lVar13 + 0x78) + (ulong)*(uint *)(lVar13 + 100) * 0x14,
                 *(long *)(lVar13 + 0x70) + (ulong)*(uint *)(lVar13 + 0x5c) * 0x14,uVar11 * 0x14);
        *(uint *)(lVar13 + 0x5c) = *(int *)(lVar13 + 0x5c) + uVar8;
        *(uint *)(lVar13 + 100) = *(int *)(lVar13 + 100) + uVar8;
      }
    }
    else if (uVar5 != 0) {
      uVar8 = *(uint *)(lVar13 + 0x5c);
      uVar11 = (ulong)uVar8;
      uVar6 = uVar5 - uVar8;
      if (uVar8 <= uVar5 && uVar6 != 0) {
        iVar9 = *(int *)(lVar13 + 0x60);
        if ((iVar9 + uVar6 != 0) && (*(uint *)(lVar13 + 0x68) <= iVar9 + uVar6)) {
          lVar7 = lVar13;
          FUN_1096f5ea4();
          if ((int)lVar7 == 0) {
            return;
          }
          uVar11 = (ulong)*(uint *)(lVar13 + 0x5c);
          iVar9 = *(int *)(lVar13 + 0x60);
        }
        lVar7 = *(long *)(lVar13 + 0x70) + uVar11 * 0x14;
        _memmove(lVar7 + (ulong)uVar6 * 0x14,lVar7,(ulong)(uint)(iVar9 - (int)uVar11) * 0x14);
        uVar10 = *(uint *)(lVar13 + 0x60);
        uVar8 = *(int *)(lVar13 + 0x5c) + uVar6;
        if ((uVar10 <= uVar8 && uVar8 - uVar10 != 0) && ((uVar8 - uVar10) * 0x14 != 0)) {
          _bzero(*(long *)(lVar13 + 0x70) + (ulong)uVar10 * 0x14);
          uVar10 = *(uint *)(lVar13 + 0x60);
          uVar8 = *(int *)(lVar13 + 0x5c) + uVar6;
        }
        *(uint *)(lVar13 + 0x60) = uVar10 + uVar6;
        uVar10 = *(uint *)(lVar13 + 100);
      }
      *(uint *)(lVar13 + 0x5c) = uVar8 - uVar5;
      *(uint *)(lVar13 + 100) = uVar10 - uVar5;
      _memmove(*(long *)(lVar13 + 0x70) + (ulong)(uVar8 - uVar5) * 0x14,
               *(long *)(lVar13 + 0x78) + (ulong)(uVar10 - uVar5) * 0x14,(ulong)uVar5 * 0x14);
    }
  }
  return;
}



/* Entry: 10973346c; end: 1097334eb;  */

/* WARNING: Possible PIC construction at 0x000109732d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109732d20) */
/* WARNING: Removing unreachable block (ram,0x000109732d78) */
/* WARNING: Removing unreachable block (ram,0x000109732d34) */
/* WARNING: Removing unreachable block (ram,0x000109732d84) */
/* WARNING: Removing unreachable block (ram,0x000109732dc0) */
/* WARNING: Removing unreachable block (ram,0x000109732d90) */
/* WARNING: Removing unreachable block (ram,0x000109732dd4) */
/* WARNING: Removing unreachable block (ram,0x0001097335a0) */

long FUN_10973346c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  int *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  uint uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort *puVar19;
  int iVar20;
  undefined *puVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  long unaff_x28;
  int iStack_104;
  long lStack_100;
  int iStack_7c;
  undefined4 auStack_78 [4];
  long lStack_68;
  
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  pcVar10 = (code *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    pcVar10 = (code *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(pcVar10,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)pcVar10 == -1) {
    return 0;
  }
  uVar6 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
  pcVar10 = FUN_10972aae0;
  pcVar15 = (code *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    pcVar15 = (code *)(param_1 + (ulong)uVar6);
  }
  pcVar11 = pcVar15;
  func_0x000109729ab0(pcVar15,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  puVar19 = (ushort *)&UNK_10dfe4888;
  if ((uint)pcVar11 <
      ((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8)) {
    puVar19 = (ushort *)(param_1 + ((ulong)pcVar11 & 0xffffffff) * 2 + 8);
  }
  uVar6 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
  puVar19 = (ushort *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar19 = (ushort *)(param_1 + (ulong)uVar6);
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
  lVar18 = param_2;
  pcVar11 = pcVar10;
  pcVar14 = pcVar15;
  if (uVar6 != 0) {
    puVar21 = (undefined *)((long)puVar19 + 3);
    do {
      uVar12 = (uint)(*(ushort *)(puVar21 + -1) >> 8) | (*(ushort *)(puVar21 + -1) & 0xff00ff) << 8;
      puVar2 = &UNK_10dfe4888;
      if (uVar12 != 0) {
        puVar2 = (undefined *)((long)puVar19 + (ulong)uVar12);
      }
      uVar12 = (uint)CONCAT11(*puVar2,puVar2[1]);
      unaff_x28 = param_2;
      if (uVar12 < 0x41) {
        if (uVar12 < 5) {
          puVar8 = auStack_78;
        }
        else {
          puVar8 = (undefined4 *)((ulong)(byte)puVar2[1] << 2);
          _malloc();
          if (puVar8 == (undefined4 *)0x0) goto LAB_109732d98;
        }
        param_7 = puVar8;
        pcVar11 = (code *)(puVar2 + 4);
        iStack_7c = 0;
        param_6 = &iStack_7c;
        goto SUB_109732e14;
      }
LAB_109732d98:
      puVar21 = puVar21 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  pcVar15 = param_5;
  pcVar10 = pcVar14;
  uVar12 = (uint)lVar18;
  param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
SUB_109732e14:
  lVar23 = *(long *)(param_2 + 0xa0);
  uVar16 = *(uint *)(lVar23 + 0x5c);
  puVar22 = (uint *)(param_2 + 8);
  *puVar22 = uVar16;
  lVar18 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar6 = *(uint *)(lVar18 + 0x5c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar18 + 0x60);
  if (uVar6 == uVar16) {
    uVar17 = *(undefined1 *)(*(long *)(lVar18 + 0x70) + (ulong)uVar16 * 0x14 + 0xf);
  }
  else {
    uVar17 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar17 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar17;
  *(code **)(param_2 + 0x28) = pcVar10;
  *(code **)(param_2 + 0x30) = pcVar15;
  *(code **)(param_2 + 0x38) = pcVar11;
  bVar3 = *(byte *)(*(long *)(lVar23 + 0x70) + (ulong)uVar16 * 0x14 + 0xe);
  bVar1 = bVar3 & 0xf;
  if ((bVar3 & 0x10) != 0) {
    bVar1 = 0;
  }
  if (1 < uVar12) {
    iVar20 = 0;
    bVar7 = bVar3 >> 5;
    uVar24 = 1;
    lStack_100 = unaff_x28;
    do {
      puVar9 = puVar22;
      FUN_109732850(puVar22,&iStack_104);
      if (((ulong)puVar9 & 1) == 0) {
        *param_6 = iStack_104;
        return 0;
      }
      uVar6 = *puVar22;
      param_7[uVar24] = uVar6;
      bVar4 = *(byte *)(*(long *)(lVar23 + 0x70) + (ulong)uVar6 * 0x14 + 0xe);
      bVar5 = bVar4 & 0xf;
      if ((bVar4 & 0x10) != 0) {
        bVar5 = 0;
      }
      if (bVar3 < 0x20 || bVar1 == 0) {
        if ((0x1f < bVar4 && bVar5 != 0) && bVar4 >> 5 != bVar7) {
          return 0;
        }
      }
      else if (bVar7 != bVar4 >> 5 || bVar1 != bVar5) {
        if (iVar20 == 0) {
          lVar13 = *(long *)(lVar23 + 0x78) + (ulong)*(uint *)(lVar23 + 100) * 0x14;
          lVar18 = (ulong)*(uint *)(lVar23 + 100) + 1;
          do {
            lVar18 = lVar18 + -1;
            if (lVar18 == 0) {
              return 0;
            }
            bVar5 = *(byte *)(lVar13 + -6);
            if (bVar7 != bVar5 >> 5) {
              return 0;
            }
            lVar13 = lVar13 + -0x14;
          } while (((bVar5 >> 4 & 1) == 0) && ((bVar5 & 0xf) != 0));
          lVar18 = param_2 + 0x18;
          FUN_1097329b8(lVar18,*(undefined8 *)(param_2 + 0x10));
          if ((int)lVar18 != 1) {
            return 0;
          }
          iVar20 = 2;
        }
        else if (iVar20 == 1) {
          return 0;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar12);
    uVar16 = *puVar22;
  }
  *param_6 = uVar16 + 1;
  *param_7 = *(undefined4 *)(lVar23 + 0x5c);
  return 1;
}



/* Entry: 1097334ec; end: 109733623;  */

/* WARNING: Possible PIC construction at 0x000109732d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109732d20) */
/* WARNING: Removing unreachable block (ram,0x000109732d78) */
/* WARNING: Removing unreachable block (ram,0x000109732d34) */
/* WARNING: Removing unreachable block (ram,0x000109732d84) */
/* WARNING: Removing unreachable block (ram,0x000109732dc0) */
/* WARNING: Removing unreachable block (ram,0x000109732d90) */
/* WARNING: Removing unreachable block (ram,0x000109732dd4) */

long FUN_1097334ec(long param_1,long param_2,int param_3,undefined8 param_4,code *param_5,
                  int *param_6,undefined4 *param_7)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;
  ushort *puVar19;
  int iVar20;
  undefined *puVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  long unaff_x28;
  int iStack_104;
  long lStack_100;
  int iStack_7c;
  undefined4 auStack_78 [4];
  long lStack_68;
  
  uVar6 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  pcVar10 = (code *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    pcVar10 = (code *)(param_1 + (ulong)uVar6);
  }
  func_0x000109729bf8(pcVar10,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                               (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)pcVar10 == -1) {
    return 0;
  }
  uVar6 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
  pcVar10 = (code *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    pcVar10 = (code *)(param_1 + (ulong)uVar6);
  }
  pcVar15 = FUN_109733624;
  if (param_3 == 0) {
    pcVar15 = FUN_10972aae0;
  }
  lVar17 = *(long *)(*(long *)(param_2 + 0xa0) + 0x70);
  uVar6 = *(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
  if ((param_3 == 0) ||
     (bVar4 = *(byte *)(lVar17 + (ulong)uVar6 * 0x14 + 0xf), uVar12 = (uint)bVar4, bVar4 == 0xff)) {
    pcVar11 = pcVar10;
    func_0x000109729ab0(pcVar10,*(undefined4 *)(lVar17 + (ulong)uVar6 * 0x14));
    uVar12 = (uint)pcVar11;
  }
  puVar19 = (ushort *)&UNK_10dfe4888;
  if (uVar12 < ((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8))
  {
    puVar19 = (ushort *)(param_1 + (ulong)uVar12 * 2 + 8);
  }
  uVar6 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
  puVar19 = (ushort *)&UNK_10dfe4888;
  if (uVar6 != 0) {
    puVar19 = (ushort *)(param_1 + (ulong)uVar6);
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
  lVar17 = param_2;
  pcVar11 = pcVar15;
  pcVar14 = pcVar10;
  if (uVar6 != 0) {
    puVar21 = (undefined *)((long)puVar19 + 3);
    do {
      uVar12 = (uint)(*(ushort *)(puVar21 + -1) >> 8) | (*(ushort *)(puVar21 + -1) & 0xff00ff) << 8;
      puVar1 = &UNK_10dfe4888;
      if (uVar12 != 0) {
        puVar1 = (undefined *)((long)puVar19 + (ulong)uVar12);
      }
      uVar12 = (uint)CONCAT11(*puVar1,puVar1[1]);
      unaff_x28 = param_2;
      if (uVar12 < 0x41) {
        if (uVar12 < 5) {
          puVar8 = auStack_78;
        }
        else {
          puVar8 = (undefined4 *)((ulong)(byte)puVar1[1] << 2);
          _malloc();
          if (puVar8 == (undefined4 *)0x0) goto LAB_109732d98;
        }
        param_7 = puVar8;
        pcVar11 = (code *)(puVar1 + 4);
        iStack_7c = 0;
        param_6 = &iStack_7c;
        goto SUB_109732e14;
      }
LAB_109732d98:
      puVar21 = puVar21 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  pcVar10 = param_5;
  pcVar15 = pcVar14;
  uVar12 = (uint)lVar17;
  param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
SUB_109732e14:
  lVar23 = *(long *)(param_2 + 0xa0);
  uVar16 = *(uint *)(lVar23 + 0x5c);
  puVar22 = (uint *)(param_2 + 8);
  *puVar22 = uVar16;
  lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar6 = *(uint *)(lVar17 + 0x5c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar17 + 0x60);
  if (uVar6 == uVar16) {
    uVar18 = *(undefined1 *)(*(long *)(lVar17 + 0x70) + (ulong)uVar16 * 0x14 + 0xf);
  }
  else {
    uVar18 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar18 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar18;
  *(code **)(param_2 + 0x28) = pcVar15;
  *(code **)(param_2 + 0x30) = pcVar10;
  *(code **)(param_2 + 0x38) = pcVar11;
  bVar2 = *(byte *)(*(long *)(lVar23 + 0x70) + (ulong)uVar16 * 0x14 + 0xe);
  bVar4 = bVar2 & 0xf;
  if ((bVar2 & 0x10) != 0) {
    bVar4 = 0;
  }
  if (1 < uVar12) {
    iVar20 = 0;
    bVar7 = bVar2 >> 5;
    uVar24 = 1;
    lStack_100 = unaff_x28;
    do {
      puVar9 = puVar22;
      FUN_109732850(puVar22,&iStack_104);
      if (((ulong)puVar9 & 1) == 0) {
        *param_6 = iStack_104;
        return 0;
      }
      uVar6 = *puVar22;
      param_7[uVar24] = uVar6;
      bVar3 = *(byte *)(*(long *)(lVar23 + 0x70) + (ulong)uVar6 * 0x14 + 0xe);
      bVar5 = bVar3 & 0xf;
      if ((bVar3 & 0x10) != 0) {
        bVar5 = 0;
      }
      if (bVar2 < 0x20 || bVar4 == 0) {
        if ((0x1f < bVar3 && bVar5 != 0) && bVar3 >> 5 != bVar7) {
          return 0;
        }
      }
      else if (bVar7 != bVar3 >> 5 || bVar4 != bVar5) {
        if (iVar20 == 0) {
          lVar13 = *(long *)(lVar23 + 0x78) + (ulong)*(uint *)(lVar23 + 100) * 0x14;
          lVar17 = (ulong)*(uint *)(lVar23 + 100) + 1;
          do {
            lVar17 = lVar17 + -1;
            if (lVar17 == 0) {
              return 0;
            }
            bVar5 = *(byte *)(lVar13 + -6);
            if (bVar7 != bVar5 >> 5) {
              return 0;
            }
            lVar13 = lVar13 + -0x14;
          } while (((bVar5 >> 4 & 1) == 0) && ((bVar5 & 0xf) != 0));
          lVar17 = param_2 + 0x18;
          FUN_1097329b8(lVar17,*(undefined8 *)(param_2 + 0x10));
          if ((int)lVar17 != 1) {
            return 0;
          }
          iVar20 = 2;
        }
        else if (iVar20 == 1) {
          return 0;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar12);
    uVar16 = *puVar22;
  }
  *param_6 = uVar16 + 1;
  *param_7 = *(undefined4 *)(lVar23 + 0x5c);
  return 1;
}



/* Entry: 109733624; end: 10973366f;  */

bool FUN_109733624(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0xf);
  if (*(byte *)((long)param_1 + 0xf) == 0xff) {
    func_0x000109729ab0(param_3,*param_1);
    uVar1 = (uint)param_3;
    if (uVar1 < 0xff) {
      *(char *)((long)param_1 + 0xf) = (char)param_3;
    }
  }
  return uVar1 == param_2;
}



/* Entry: 109733670; end: 1097336c7;  */

int FUN_109733670(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *param_1 >> 8 | *param_1 << 8;
  if (uVar2 == 2) {
    uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = 0x20 - (int)LZCOUNT(uVar3);
    }
    return iVar1;
  }
  if (uVar2 == 1) {
    return 1;
  }
  return 0;
}



/* Entry: 1097336c8; end: 109733853;  */

long FUN_1097336c8(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong unaff_x22;
  uint unaff_w23;
  ushort *puVar8;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (ushort *)(param_1 + 6);
  uVar1 = *puVar8;
  uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
  puVar4 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar4 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar4,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar4 != -1) {
    uVar7 = (ulong)*(byte *)(param_1 + 3);
    uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(byte *)(param_1 + 3));
    unaff_x22 = (ulong)uVar2;
    if (uVar2 < 0x41) {
      unaff_w23 = (uint)*(ushort *)(param_1 + 4);
      if (4 < uVar2) goto LAB_109733840;
      puVar6 = auStack_68;
      lVar5 = param_1;
      goto LAB_1097337a0;
    }
  }
  do {
    param_1 = 0;
    while( true ) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return param_1;
      }
      ___stack_chk_fail();
      uVar7 = extraout_x8;
LAB_109733840:
      puVar6 = (undefined1 *)(uVar7 << 2);
      _malloc();
      lVar5 = param_1;
      if (puVar6 == (undefined1 *)0x0) break;
LAB_1097337a0:
      uStack_6c = 0;
      param_1 = param_2;
      func_0x000109732e14(param_2,unaff_x22,lVar5 + 8,FUN_10972ab10,lVar5,&uStack_6c,puVar6);
      uVar3 = uStack_6c;
      lVar5 = *(long *)(param_2 + 0xa0);
      if ((int)param_1 == 0) {
        FUN_109730c80(lVar5,*(undefined4 *)(lVar5 + 0x5c),uStack_6c);
      }
      else {
        unaff_w23 = (unaff_w23 & 0xff00ff00) >> 8 | (unaff_w23 & 0xff00ff) << 8;
        FUN_109710ea8(lVar5,3,*(undefined4 *)(lVar5 + 0x5c),uStack_6c,1,0);
        FUN_109732ff4(param_2,unaff_x22,puVar6,unaff_w23,
                      (long)puVar8 + (ulong)(uint)((int)unaff_x22 << 1),uVar3);
      }
      if (puVar6 != auStack_68) {
        _free(puVar6);
      }
    }
  } while( true );
}



/* Entry: 109733854; end: 109733863;  */

uint * FUN_109733854(long param_1,ulong param_2,undefined8 param_3,undefined *param_4,byte *param_5,
                    uint *param_6,uint *param_7)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  uint *puVar15;
  uint uVar16;
  ulong unaff_x22;
  ulong unaff_x23;
  uint *unaff_x24;
  uint uVar17;
  uint uStack_104;
  uint *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ushort *puStack_c0;
  uint uStack_b4;
  byte *pbStack_b0;
  uint uStack_a4;
  ulong uStack_a0;
  undefined **ppuStack_98;
  uint *puStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint auStack_78 [4];
  long lStack_68;
  
  uVar16 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar6 = &UNK_10dfe4888;
  if (uVar16 != 0) {
    puVar6 = (undefined *)(param_1 + (ulong)uVar16);
  }
  func_0x000109729bf8(puVar6,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar16 = (uint)param_6;
  if ((uint)puVar6 == 0xffffffff) {
    return (uint *)0x0;
  }
  puVar13 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar6 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar13 = (ushort *)(param_1 + ((ulong)puVar6 & 0xffffffff) * 2 + 6);
  }
  uVar17 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
  puVar13 = (ushort *)&UNK_10dfe4888;
  if (uVar17 != 0) {
    puVar13 = (ushort *)(param_1 + (ulong)uVar17);
  }
  ppuVar11 = &PTR_DAT_110b0b350;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
  uVar10 = param_2;
  if (uVar17 != 0) {
    puVar6 = (undefined *)((long)puVar13 + 3);
    ppuStack_98 = &PTR_DAT_110b0b350;
    puStack_c0 = puVar13;
    do {
      uVar16 = (uint)(*(ushort *)(puVar6 + -1) >> 8) | (*(ushort *)(puVar6 + -1) & 0xff00ff) << 8;
      pbVar2 = &UNK_10dfe4888;
      if (uVar16 != 0) {
        pbVar2 = (byte *)((long)puStack_c0 + (ulong)uVar16);
      }
      uVar14 = (ulong)*pbVar2;
      lVar7 = uVar14 * 0x200 + (ulong)pbVar2[1] * 2;
      unaff_x21 = (undefined **)(pbVar2 + lVar7 + 2);
      uVar16 = (uint)CONCAT11(*(undefined1 *)unaff_x21,pbVar2[lVar7 + 3]);
      unaff_x23 = (ulong)uVar16;
      iVar1 = 0;
      if (uVar16 != 0) {
        iVar1 = uVar16 - 1;
      }
      if (uVar16 < 0x41) {
        uVar9 = iVar1 << 1;
        pbStack_b0 = (byte *)((long)unaff_x21 + (ulong)uVar9 + 2);
        bVar3 = *pbStack_b0;
        bVar4 = *(byte *)((long)unaff_x21 + (ulong)uVar9 + 3);
        unaff_x22 = (ulong)bVar4;
        pbStack_b0 = pbStack_b0 + (ulong)bVar3 * 0x200 + unaff_x22 * 2;
        uStack_b4 = (uint)*(ushort *)(pbStack_b0 + 2);
        uStack_a4 = (uint)pbVar2[1];
        uStack_a0 = uVar14;
        if (uVar16 < 5) {
          puVar8 = auStack_78;
        }
        else {
          puVar8 = (uint *)((ulong)pbVar2[lVar7 + 3] << 2);
          _malloc();
          ppuVar11 = ppuStack_98;
          unaff_x19 = param_2;
          if (puVar8 == (uint *)0x0) goto LAB_109733b00;
        }
        uStack_7c = *(uint *)(*(long *)(param_2 + 0xa0) + 100);
        unaff_x24 = (uint *)(ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
        uStack_84 = 0;
        param_4 = ppuVar11[1];
        param_5 = ppuVar11[4];
        param_6 = &uStack_84;
        uVar10 = param_2;
        puStack_90 = puVar8;
        func_0x000109732e14(param_2,unaff_x23,pbVar2 + lVar7 + 4);
        ppuVar11 = ppuStack_98;
        if ((int)uVar10 == 0) {
LAB_109733ad8:
          uVar10 = (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
          FUN_109730c80(*(long *)(param_2 + 0xa0),uVar10,unaff_x24);
LAB_109733ae8:
          unaff_x19 = 0;
        }
        else {
          unaff_x24 = (uint *)(ulong)uStack_84;
          uStack_80 = uStack_84;
          if (uStack_84 == 0) goto LAB_109733ad8;
          param_4 = ppuStack_98[2];
          param_5 = ppuStack_98[5];
          puVar8 = &uStack_80;
          uVar10 = param_2;
          param_6 = unaff_x24;
          FUN_109733bac(param_2,CONCAT11(bVar3,bVar4),
                        (undefined *)((long)unaff_x21 + (ulong)uVar9 + 4));
          unaff_x21 = ppuVar11;
          if ((uVar10 & 1) == 0) {
            unaff_x24 = (uint *)(ulong)uStack_80;
            goto LAB_109733ad8;
          }
          uVar10 = (ulong)(uStack_a4 | (int)uStack_a0 << 8);
          param_4 = *ppuVar11;
          param_5 = ppuVar11[3];
          param_6 = &uStack_7c;
          uVar14 = param_2;
          func_0x000109733c94(param_2,uVar10,pbVar2 + 2);
          lVar7 = *(long *)(param_2 + 0xa0);
          if ((uVar14 & 1) == 0) {
            if ((*(byte *)(lVar7 + 0x18) >> 6 & 1) != 0) {
              param_4 = (undefined *)(ulong)uStack_80;
              uVar10 = 2;
              param_5 = (byte *)0x0;
              param_6 = (uint *)0x1;
              FUN_109710ea8(lVar7,2,uStack_7c);
            }
            goto LAB_109733ae8;
          }
          param_4 = (undefined *)
                    (ulong)((uStack_b4 & 0xff00ff00) >> 8 | (uStack_b4 & 0xff00ff) << 8);
          unaff_x19 = 1;
          FUN_109710ea8(lVar7,3,uStack_7c,uStack_80,1,1);
          param_5 = pbStack_b0 + 4;
          uVar10 = unaff_x23;
          param_6 = unaff_x24;
          FUN_109732ff4(param_2,unaff_x23,puStack_90);
        }
        uVar9 = (uint)uVar10;
        uVar16 = (uint)param_6;
        param_7 = puVar8;
        ppuVar11 = ppuStack_98;
        if (puStack_90 != auStack_78) {
          _free();
          uVar9 = (uint)uVar10;
          uVar16 = (uint)param_6;
          param_7 = puVar8;
          ppuVar11 = ppuStack_98;
        }
        ppuStack_98 = ppuVar11;
        if ((int)unaff_x19 != 0) {
          puVar8 = (uint *)0x1;
          goto LAB_109733b70;
        }
      }
LAB_109733b00:
      uVar16 = (uint)param_6;
      puVar6 = puVar6 + 2;
      uVar17 = uVar17 - 1;
      unaff_x20 = param_2;
    } while (uVar17 != 0);
  }
  param_2 = unaff_x20;
  uVar9 = (uint)uVar10;
  puVar8 = (uint *)0x0;
LAB_109733b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_109733bac;
  uVar5 = uVar16 - 1;
  puVar15 = puVar8 + 0x12;
  *puVar15 = uVar5;
  lVar7 = *(long *)(*(long *)(puVar8 + 0x14) + 0xa0);
  uVar17 = *(uint *)(lVar7 + 0x5c);
  puVar8[0x20] = *(uint *)(lVar7 + 0x60);
  if (uVar17 == uVar5) {
    uVar12 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + (ulong)uVar5 * 0x14 + 0xf);
  }
  else {
    uVar12 = 0;
  }
  if (*(char *)((long)puVar8 + 99) == '\0') {
    uVar12 = 0;
  }
  *(undefined1 *)(puVar8 + 0x19) = uVar12;
  *(undefined **)(puVar8 + 0x1a) = param_4;
  *(byte **)(puVar8 + 0x1c) = param_5;
  *(undefined ***)(puVar8 + 0x1e) = ppuVar11;
  if (uVar9 == 0) {
LAB_109733c74:
    *param_7 = uVar16;
    puVar8 = (uint *)0x1;
  }
  else {
    puVar8 = puVar15;
    puStack_100 = unaff_x24;
    uStack_f8 = unaff_x23;
    uStack_f0 = unaff_x22;
    ppuStack_e8 = unaff_x21;
    uStack_e0 = param_2;
    uStack_d8 = unaff_x19;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_109732850(puVar15,&uStack_104);
    if ((int)puVar8 != 0) {
      uVar16 = 0;
      do {
        if (uVar9 - 1 == uVar16) {
          uVar16 = *puVar15 + 1;
          goto LAB_109733c74;
        }
        puVar8 = puVar15;
        FUN_109732850(puVar15,&uStack_104);
        uVar16 = uVar16 + 1;
      } while (((ulong)puVar8 & 1) != 0);
      puVar8 = (uint *)(ulong)(uVar9 <= uVar16);
    }
    *param_7 = uStack_104;
  }
  return puVar8;
}



/* Entry: 109733864; end: 10973391b;  */

uint * FUN_109733864(long param_1,ulong param_2,undefined8 param_3,undefined *param_4,byte *param_5,
                    uint *param_6,uint *param_7)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  uint *puVar15;
  uint uVar16;
  ulong unaff_x22;
  ulong unaff_x23;
  uint *unaff_x24;
  uint uVar17;
  uint uStack_104;
  uint *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ushort *puStack_c0;
  uint uStack_b4;
  byte *pbStack_b0;
  uint uStack_a4;
  ulong uStack_a0;
  undefined **ppuStack_98;
  uint *puStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint auStack_78 [4];
  long lStack_68;
  
  uVar16 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar6 = &UNK_10dfe4888;
  if (uVar16 != 0) {
    puVar6 = (undefined *)(param_1 + (ulong)uVar16);
  }
  func_0x000109729bf8(puVar6,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar16 = (uint)param_6;
  if ((uint)puVar6 == 0xffffffff) {
    return (uint *)0x0;
  }
  puVar13 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar6 <
      ((uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8)) {
    puVar13 = (ushort *)(param_1 + ((ulong)puVar6 & 0xffffffff) * 2 + 6);
  }
  uVar17 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
  puVar13 = (ushort *)&UNK_10dfe4888;
  if (uVar17 != 0) {
    puVar13 = (ushort *)(param_1 + (ulong)uVar17);
  }
  ppuVar11 = &PTR_DAT_110b0b350;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
  uVar10 = param_2;
  if (uVar17 != 0) {
    puVar6 = (undefined *)((long)puVar13 + 3);
    ppuStack_98 = &PTR_DAT_110b0b350;
    puStack_c0 = puVar13;
    do {
      uVar16 = (uint)(*(ushort *)(puVar6 + -1) >> 8) | (*(ushort *)(puVar6 + -1) & 0xff00ff) << 8;
      pbVar2 = &UNK_10dfe4888;
      if (uVar16 != 0) {
        pbVar2 = (byte *)((long)puStack_c0 + (ulong)uVar16);
      }
      uVar14 = (ulong)*pbVar2;
      lVar7 = uVar14 * 0x200 + (ulong)pbVar2[1] * 2;
      unaff_x21 = (undefined **)(pbVar2 + lVar7 + 2);
      uVar16 = (uint)CONCAT11(*(undefined1 *)unaff_x21,pbVar2[lVar7 + 3]);
      unaff_x23 = (ulong)uVar16;
      iVar1 = 0;
      if (uVar16 != 0) {
        iVar1 = uVar16 - 1;
      }
      if (uVar16 < 0x41) {
        uVar9 = iVar1 << 1;
        pbStack_b0 = (byte *)((long)unaff_x21 + (ulong)uVar9 + 2);
        bVar3 = *pbStack_b0;
        bVar4 = *(byte *)((long)unaff_x21 + (ulong)uVar9 + 3);
        unaff_x22 = (ulong)bVar4;
        pbStack_b0 = pbStack_b0 + (ulong)bVar3 * 0x200 + unaff_x22 * 2;
        uStack_b4 = (uint)*(ushort *)(pbStack_b0 + 2);
        uStack_a4 = (uint)pbVar2[1];
        uStack_a0 = uVar14;
        if (uVar16 < 5) {
          puVar8 = auStack_78;
        }
        else {
          puVar8 = (uint *)((ulong)pbVar2[lVar7 + 3] << 2);
          _malloc();
          ppuVar11 = ppuStack_98;
          unaff_x19 = param_2;
          if (puVar8 == (uint *)0x0) goto LAB_109733b00;
        }
        uStack_7c = *(uint *)(*(long *)(param_2 + 0xa0) + 100);
        unaff_x24 = (uint *)(ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
        uStack_84 = 0;
        param_4 = ppuVar11[1];
        param_5 = ppuVar11[4];
        param_6 = &uStack_84;
        uVar10 = param_2;
        puStack_90 = puVar8;
        func_0x000109732e14(param_2,unaff_x23,pbVar2 + lVar7 + 4);
        ppuVar11 = ppuStack_98;
        if ((int)uVar10 == 0) {
LAB_109733ad8:
          uVar10 = (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
          FUN_109730c80(*(long *)(param_2 + 0xa0),uVar10,unaff_x24);
LAB_109733ae8:
          unaff_x19 = 0;
        }
        else {
          unaff_x24 = (uint *)(ulong)uStack_84;
          uStack_80 = uStack_84;
          if (uStack_84 == 0) goto LAB_109733ad8;
          param_4 = ppuStack_98[2];
          param_5 = ppuStack_98[5];
          puVar8 = &uStack_80;
          uVar10 = param_2;
          param_6 = unaff_x24;
          FUN_109733bac(param_2,CONCAT11(bVar3,bVar4),
                        (undefined *)((long)unaff_x21 + (ulong)uVar9 + 4));
          unaff_x21 = ppuVar11;
          if ((uVar10 & 1) == 0) {
            unaff_x24 = (uint *)(ulong)uStack_80;
            goto LAB_109733ad8;
          }
          uVar10 = (ulong)(uStack_a4 | (int)uStack_a0 << 8);
          param_4 = *ppuVar11;
          param_5 = ppuVar11[3];
          param_6 = &uStack_7c;
          uVar14 = param_2;
          func_0x000109733c94(param_2,uVar10,pbVar2 + 2);
          lVar7 = *(long *)(param_2 + 0xa0);
          if ((uVar14 & 1) == 0) {
            if ((*(byte *)(lVar7 + 0x18) >> 6 & 1) != 0) {
              param_4 = (undefined *)(ulong)uStack_80;
              uVar10 = 2;
              param_5 = (byte *)0x0;
              param_6 = (uint *)0x1;
              FUN_109710ea8(lVar7,2,uStack_7c);
            }
            goto LAB_109733ae8;
          }
          param_4 = (undefined *)
                    (ulong)((uStack_b4 & 0xff00ff00) >> 8 | (uStack_b4 & 0xff00ff) << 8);
          unaff_x19 = 1;
          FUN_109710ea8(lVar7,3,uStack_7c,uStack_80,1,1);
          param_5 = pbStack_b0 + 4;
          uVar10 = unaff_x23;
          param_6 = unaff_x24;
          FUN_109732ff4(param_2,unaff_x23,puStack_90);
        }
        uVar9 = (uint)uVar10;
        uVar16 = (uint)param_6;
        param_7 = puVar8;
        ppuVar11 = ppuStack_98;
        if (puStack_90 != auStack_78) {
          _free();
          uVar9 = (uint)uVar10;
          uVar16 = (uint)param_6;
          param_7 = puVar8;
          ppuVar11 = ppuStack_98;
        }
        ppuStack_98 = ppuVar11;
        if ((int)unaff_x19 != 0) {
          puVar8 = (uint *)0x1;
          goto LAB_109733b70;
        }
      }
LAB_109733b00:
      uVar16 = (uint)param_6;
      puVar6 = puVar6 + 2;
      uVar17 = uVar17 - 1;
      unaff_x20 = param_2;
    } while (uVar17 != 0);
  }
  param_2 = unaff_x20;
  uVar9 = (uint)uVar10;
  puVar8 = (uint *)0x0;
LAB_109733b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_109733bac;
  uVar5 = uVar16 - 1;
  puVar15 = puVar8 + 0x12;
  *puVar15 = uVar5;
  lVar7 = *(long *)(*(long *)(puVar8 + 0x14) + 0xa0);
  uVar17 = *(uint *)(lVar7 + 0x5c);
  puVar8[0x20] = *(uint *)(lVar7 + 0x60);
  if (uVar17 == uVar5) {
    uVar12 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + (ulong)uVar5 * 0x14 + 0xf);
  }
  else {
    uVar12 = 0;
  }
  if (*(char *)((long)puVar8 + 99) == '\0') {
    uVar12 = 0;
  }
  *(undefined1 *)(puVar8 + 0x19) = uVar12;
  *(undefined **)(puVar8 + 0x1a) = param_4;
  *(byte **)(puVar8 + 0x1c) = param_5;
  *(undefined ***)(puVar8 + 0x1e) = ppuVar11;
  if (uVar9 == 0) {
LAB_109733c74:
    *param_7 = uVar16;
    puVar8 = (uint *)0x1;
  }
  else {
    puVar8 = puVar15;
    puStack_100 = unaff_x24;
    uStack_f8 = unaff_x23;
    uStack_f0 = unaff_x22;
    ppuStack_e8 = unaff_x21;
    uStack_e0 = param_2;
    uStack_d8 = unaff_x19;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_109732850(puVar15,&uStack_104);
    if ((int)puVar8 != 0) {
      uVar16 = 0;
      do {
        if (uVar9 - 1 == uVar16) {
          uVar16 = *puVar15 + 1;
          goto LAB_109733c74;
        }
        puVar8 = puVar15;
        FUN_109732850(puVar15,&uStack_104);
        uVar16 = uVar16 + 1;
      } while (((ulong)puVar8 & 1) != 0);
      puVar8 = (uint *)(ulong)(uVar9 <= uVar16);
    }
    *param_7 = uStack_104;
  }
  return puVar8;
}



/* Entry: 10973391c; end: 109733bab;  */

void FUN_10973391c(ushort *param_1,ulong param_2,ulong *param_3,ulong param_4,byte *param_5,
                  uint *param_6,uint *param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong *unaff_x21;
  uint *puVar14;
  int iVar15;
  ulong unaff_x22;
  ulong unaff_x23;
  uint *unaff_x24;
  uint uVar16;
  uint uStack_104;
  uint *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ushort *puStack_c0;
  uint uStack_b4;
  byte *pbStack_b0;
  uint uStack_a4;
  ulong uStack_a0;
  ulong *puStack_98;
  uint *puStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint auStack_78 [4];
  long lStack_68;
  
  uVar11 = (uint)param_6;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  uVar10 = param_2;
  if (uVar16 != 0) {
    lVar7 = (long)param_1 + 3;
    puStack_c0 = param_1;
    puStack_98 = param_3;
    do {
      uVar11 = (uint)(*(ushort *)(lVar7 + -1) >> 8) | (*(ushort *)(lVar7 + -1) & 0xff00ff) << 8;
      pbVar1 = &UNK_10dfe4888;
      if (uVar11 != 0) {
        pbVar1 = (byte *)((long)puStack_c0 + (ulong)uVar11);
      }
      uVar13 = (ulong)*pbVar1;
      lVar6 = uVar13 * 0x200 + (ulong)pbVar1[1] * 2;
      unaff_x21 = (ulong *)(pbVar1 + lVar6 + 2);
      uVar11 = (uint)CONCAT11((char)*unaff_x21,pbVar1[lVar6 + 3]);
      unaff_x23 = (ulong)uVar11;
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = uVar11 - 1;
      }
      if (uVar11 < 0x41) {
        uVar4 = iVar9 << 1;
        pbStack_b0 = (byte *)((long)unaff_x21 + (ulong)uVar4 + 2);
        bVar2 = *pbStack_b0;
        bVar3 = *(byte *)((long)unaff_x21 + (ulong)uVar4 + 3);
        unaff_x22 = (ulong)bVar3;
        pbStack_b0 = pbStack_b0 + (ulong)bVar2 * 0x200 + unaff_x22 * 2;
        uStack_b4 = (uint)*(ushort *)(pbStack_b0 + 2);
        uStack_a4 = (uint)pbVar1[1];
        uStack_a0 = uVar13;
        if (uVar11 < 5) {
          puVar14 = auStack_78;
        }
        else {
          puVar14 = (uint *)((ulong)pbVar1[lVar6 + 3] << 2);
          _malloc();
          param_3 = puStack_98;
          unaff_x19 = param_2;
          if (puVar14 == (uint *)0x0) goto LAB_109733b00;
        }
        uStack_7c = *(uint *)(*(long *)(param_2 + 0xa0) + 100);
        unaff_x24 = (uint *)(ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
        uStack_84 = 0;
        param_4 = param_3[1];
        param_5 = (byte *)param_3[4];
        param_6 = &uStack_84;
        uVar10 = param_2;
        puStack_90 = puVar14;
        func_0x000109732e14(param_2,unaff_x23,pbVar1 + lVar6 + 4);
        puVar5 = puStack_98;
        if ((int)uVar10 == 0) {
LAB_109733ad8:
          uVar10 = (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
          FUN_109730c80(*(long *)(param_2 + 0xa0),uVar10,unaff_x24);
LAB_109733ae8:
          unaff_x19 = 0;
        }
        else {
          unaff_x24 = (uint *)(ulong)uStack_84;
          uStack_80 = uStack_84;
          if (uStack_84 == 0) goto LAB_109733ad8;
          param_4 = puStack_98[2];
          param_5 = (byte *)puStack_98[5];
          puVar14 = &uStack_80;
          uVar10 = param_2;
          param_6 = unaff_x24;
          FUN_109733bac(param_2,CONCAT11(bVar2,bVar3),
                        (undefined *)((long)unaff_x21 + (ulong)uVar4 + 4));
          unaff_x21 = puVar5;
          if ((uVar10 & 1) == 0) {
            unaff_x24 = (uint *)(ulong)uStack_80;
            goto LAB_109733ad8;
          }
          uVar10 = (ulong)(uStack_a4 | (int)uStack_a0 << 8);
          param_4 = *puVar5;
          param_5 = (byte *)puVar5[3];
          param_6 = &uStack_7c;
          uVar13 = param_2;
          func_0x000109733c94(param_2,uVar10,pbVar1 + 2);
          lVar6 = *(long *)(param_2 + 0xa0);
          if ((uVar13 & 1) == 0) {
            if ((*(byte *)(lVar6 + 0x18) >> 6 & 1) != 0) {
              param_4 = (ulong)uStack_80;
              uVar10 = 2;
              param_5 = (byte *)0x0;
              param_6 = (uint *)0x1;
              FUN_109710ea8(lVar6,2,uStack_7c);
            }
            goto LAB_109733ae8;
          }
          param_4 = (ulong)((uStack_b4 & 0xff00ff00) >> 8 | (uStack_b4 & 0xff00ff) << 8);
          unaff_x19 = 1;
          FUN_109710ea8(lVar6,3,uStack_7c,uStack_80,1,1);
          param_5 = pbStack_b0 + 4;
          uVar10 = unaff_x23;
          param_6 = unaff_x24;
          FUN_109732ff4(param_2,unaff_x23,puStack_90);
        }
        iVar9 = (int)uVar10;
        uVar11 = (uint)param_6;
        param_7 = puVar14;
        param_3 = puStack_98;
        if (puStack_90 != auStack_78) {
          _free();
          iVar9 = (int)uVar10;
          uVar11 = (uint)param_6;
          param_7 = puVar14;
          param_3 = puStack_98;
        }
        puStack_98 = param_3;
        if ((int)unaff_x19 != 0) {
          lVar7 = 1;
          goto LAB_109733b70;
        }
      }
LAB_109733b00:
      uVar11 = (uint)param_6;
      lVar7 = lVar7 + 2;
      uVar16 = uVar16 - 1;
      unaff_x20 = param_2;
    } while (uVar16 != 0);
  }
  param_2 = unaff_x20;
  iVar9 = (int)uVar10;
  lVar7 = 0;
LAB_109733b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_109733bac;
  uVar4 = uVar11 - 1;
  puVar14 = (uint *)(lVar7 + 0x48);
  *puVar14 = uVar4;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x50) + 0xa0);
  uVar16 = *(uint *)(lVar6 + 0x5c);
  *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar6 + 0x60);
  if (uVar16 == uVar4) {
    uVar12 = *(undefined1 *)(*(long *)(lVar6 + 0x70) + (ulong)uVar4 * 0x14 + 0xf);
  }
  else {
    uVar12 = 0;
  }
  if (*(char *)(lVar7 + 99) == '\0') {
    uVar12 = 0;
  }
  *(undefined1 *)(lVar7 + 100) = uVar12;
  *(ulong *)(lVar7 + 0x68) = param_4;
  *(byte **)(lVar7 + 0x70) = param_5;
  *(ulong **)(lVar7 + 0x78) = param_3;
  if (iVar9 == 0) {
LAB_109733c74:
    *param_7 = uVar11;
  }
  else {
    puVar8 = puVar14;
    puStack_100 = unaff_x24;
    uStack_f8 = unaff_x23;
    uStack_f0 = unaff_x22;
    puStack_e8 = unaff_x21;
    uStack_e0 = param_2;
    uStack_d8 = unaff_x19;
    puStack_d0 = &stack0xfffffffffffffff0;
    FUN_109732850(puVar14,&uStack_104);
    if ((int)puVar8 != 0) {
      iVar15 = 0;
      do {
        if (iVar9 + -1 == iVar15) {
          uVar11 = *puVar14 + 1;
          goto LAB_109733c74;
        }
        puVar8 = puVar14;
        FUN_109732850(puVar14,&uStack_104);
        iVar15 = iVar15 + 1;
      } while (((ulong)puVar8 & 1) != 0);
    }
    *param_7 = uStack_104;
  }
  return;
}



/* Entry: 109733bac; end: 109733d8f;  */

void FUN_109733bac(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,int param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  int iStack_44;
  
  uVar2 = param_6 - 1;
  puVar6 = (uint *)(param_1 + 0x48);
  *puVar6 = uVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
  uVar1 = *(uint *)(lVar5 + 0x5c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar5 + 0x60);
  if (uVar1 == uVar2) {
    uVar4 = *(undefined1 *)(*(long *)(lVar5 + 0x70) + (ulong)uVar2 * 0x14 + 0xf);
  }
  else {
    uVar4 = 0;
  }
  if (*(char *)(param_1 + 99) == '\0') {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 100) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_5;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  if (param_2 == 0) {
LAB_109733c74:
    *param_7 = param_6;
  }
  else {
    puVar3 = puVar6;
    FUN_109732850(puVar6,&iStack_44);
    if ((int)puVar3 != 0) {
      iVar7 = 0;
      do {
        if (param_2 + -1 == iVar7) {
          param_6 = *puVar6 + 1;
          goto LAB_109733c74;
        }
        puVar3 = puVar6;
        FUN_109732850(puVar6,&iStack_44);
        iVar7 = iVar7 + 1;
      } while (((ulong)puVar3 & 1) != 0);
    }
    *param_7 = iStack_44;
  }
  return;
}



/* Entry: 109733d90; end: 109733e2f;  */

undefined8 FUN_109733d90(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *param_1;
  while( true ) {
    if (uVar2 == 0) {
      *param_2 = 0;
      return 0;
    }
    *param_1 = uVar2 - 1;
    puVar3 = param_1;
    func_0x000109732900(param_1,*(long *)(*(long *)(*(long *)(param_1 + 2) + 0xa0) + 0x78) +
                                (ulong)(uVar2 - 1) * 0x14);
    if ((int)puVar3 == 1) break;
    if ((int)puVar3 == 0) {
      if (*(long *)(param_1 + 0xc) != 0) {
        *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 2;
      }
      return 1;
    }
    uVar2 = *param_1;
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *param_1 - 1;
  }
  *param_2 = iVar1;
  return 0;
}



/* Entry: 109733e30; end: 109733eaf;  */

/* WARNING: Removing unreachable block (ram,0x000109733fb4) */
/* WARNING: Removing unreachable block (ram,0x000109733fdc) */

void FUN_109733e30(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ushort *puVar3;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar2 = &UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_1 + (ulong)uVar1);
  }
  func_0x000109729bf8(puVar2,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar2 != -1) {
    uVar1 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puStack_48 = &UNK_10dfe4888;
    if (uVar1 != 0) {
      puStack_48 = (undefined *)(param_1 + (ulong)uVar1);
    }
    uVar1 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
    puVar2 = &UNK_10dfe4888;
    if (uVar1 != 0) {
      puVar2 = (undefined *)(param_1 + (ulong)uVar1);
    }
    uVar1 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
    puStack_38 = &UNK_10dfe4888;
    if (uVar1 != 0) {
      puStack_38 = (undefined *)(param_1 + (ulong)uVar1);
    }
    pcStack_60 = FUN_10972aae0;
    pcStack_58 = FUN_10972aae0;
    pcStack_50 = FUN_10972aae0;
    puStack_40 = puVar2;
    func_0x000109729ab0(puVar2,*(undefined4 *)
                                (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                                (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
    puVar3 = (ushort *)&UNK_10dfe4888;
    if ((uint)puVar2 <
        ((uint)(*(ushort *)(param_1 + 10) >> 8) | (*(ushort *)(param_1 + 10) & 0xff00ff) << 8)) {
      puVar3 = (ushort *)(param_1 + ((ulong)puVar2 & 0xffffffff) * 2 + 0xc);
    }
    uVar1 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
    puVar3 = (ushort *)&UNK_10dfe4888;
    if (uVar1 != 0) {
      puVar3 = (ushort *)(param_1 + (ulong)uVar1);
    }
    FUN_10973391c(puVar3,param_2,&pcStack_60);
  }
  return;
}



/* Entry: 109733eb0; end: 10973402b;  */

void FUN_109733eb0(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ushort *puVar5;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar3 != -1) {
    uVar2 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
    puStack_48 = &UNK_10dfe4888;
    if (uVar2 != 0) {
      puStack_48 = (undefined *)(param_1 + (ulong)uVar2);
    }
    uVar2 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
    puVar3 = &UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar3 = (undefined *)(param_1 + (ulong)uVar2);
    }
    uVar2 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
    puStack_38 = &UNK_10dfe4888;
    if (uVar2 != 0) {
      puStack_38 = (undefined *)(param_1 + (ulong)uVar2);
    }
    pcStack_60 = FUN_10973402c;
    if ((param_3 & puStack_48 == puStack_38) == 0) {
      pcStack_60 = FUN_10972aae0;
    }
    pcStack_50 = FUN_10973402c;
    pcStack_58 = (code *)0x109734088;
    if (param_3 == 0) {
      pcStack_50 = FUN_10972aae0;
      pcStack_58 = FUN_10972aae0;
    }
    lVar4 = *(long *)(*(long *)(param_2 + 0xa0) + 0x70);
    uVar2 = *(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
    puStack_40 = puVar3;
    if ((param_3 == 0) || (bVar1 = *(byte *)(lVar4 + (ulong)uVar2 * 0x14 + 0xf), 0xef < bVar1)) {
      func_0x000109729ab0(puVar3,*(undefined4 *)(lVar4 + (ulong)uVar2 * 0x14));
      uVar2 = (uint)puVar3;
    }
    else {
      uVar2 = (uint)(bVar1 >> 4);
    }
    puVar5 = (ushort *)&UNK_10dfe4888;
    if (uVar2 < ((uint)(*(ushort *)(param_1 + 10) >> 8) |
                (*(ushort *)(param_1 + 10) & 0xff00ff) << 8)) {
      puVar5 = (ushort *)(param_1 + (ulong)uVar2 * 2 + 0xc);
    }
    uVar2 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
    puVar5 = (ushort *)&UNK_10dfe4888;
    if (uVar2 != 0) {
      puVar5 = (ushort *)(param_1 + (ulong)uVar2);
    }
    FUN_10973391c(puVar5,param_2,&pcStack_60);
  }
  return;
}



/* Entry: 10973402c; end: 1097340df;  */

bool FUN_10973402c(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = *(byte *)((long)param_1 + 0xf) & 0xf;
  if (uVar1 == 0xf) {
    func_0x000109729ab0(param_3,*param_1);
    uVar1 = (uint)param_3;
    if (uVar1 < 0xf) {
      *(byte *)((long)param_1 + 0xf) = *(byte *)((long)param_1 + 0xf) & 0xf0 | (byte)param_3;
    }
  }
  return uVar1 == param_2;
}



/* Entry: 1097340e0; end: 1097340ef;  */

long FUN_1097340e0(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ushort *puVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong extraout_x8;
  byte *pbVar10;
  ulong unaff_x22;
  int iVar11;
  byte *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x27;
  byte *unaff_x28;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar8 = (byte *)(param_1 + 2);
  lVar3 = (ulong)*pbVar8 * 0x200 + (ulong)*(byte *)(param_1 + 3) * 2;
  pbVar10 = pbVar8 + lVar3 + 2;
  puVar5 = (ushort *)&UNK_10dfe4888;
  if (pbVar8[lVar3 + 3] != 0 || *pbVar10 != 0) {
    puVar5 = (ushort *)(pbVar8 + lVar3 + 4);
  }
  uVar2 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
  puVar5 = (ushort *)&UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar5 = (ushort *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar5,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar5 != -1) {
    bVar1 = pbVar8[lVar3 + 3];
    uVar9 = (ulong)bVar1;
    uVar2 = (uint)CONCAT11(pbVar8[lVar3 + 2],bVar1);
    unaff_x22 = (ulong)uVar2;
    if (uVar2 < 0x41) {
      lVar6 = (ulong)pbVar8[lVar3 + 2] * 0x200 + (ulong)bVar1 * 2;
      unaff_x28 = pbVar10 + lVar6 + 2;
      unaff_x25 = (ulong)*unaff_x28;
      unaff_x27 = (ulong)pbVar10[lVar6 + 3];
      unaff_x24 = unaff_x28 + unaff_x25 * 0x200 + unaff_x27 * 2;
      uStack_8c = (uint)*(ushort *)(unaff_x24 + 2);
      uStack_88 = (uint)*(ushort *)(param_1 + 2);
      if (4 < uVar2) goto LAB_10973435c;
      puVar7 = auStack_78;
      goto LAB_109734220;
    }
  }
  do {
    param_1 = 0;
    while( true ) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return param_1;
      }
      ___stack_chk_fail();
      uVar9 = extraout_x8;
LAB_10973435c:
      puVar7 = (undefined1 *)(uVar9 << 2);
      _malloc();
      if (puVar7 == (undefined1 *)0x0) break;
LAB_109734220:
      uStack_7c = *(undefined4 *)(*(long *)(param_2 + 0xa0) + 100);
      iVar11 = *(int *)(*(long *)(param_2 + 0xa0) + 0x5c);
      iStack_84 = 0;
      uVar9 = param_2;
      func_0x000109732e14(param_2,unaff_x22,pbVar8 + lVar3 + 6,FUN_10972ab10,param_1,&iStack_84,
                          puVar7);
      iVar4 = iStack_84;
      if ((int)uVar9 == 0) {
LAB_10973430c:
        FUN_109730c80(*(long *)(param_2 + 0xa0),*(undefined4 *)(*(long *)(param_2 + 0xa0) + 0x5c),
                      iVar11);
LAB_10973431c:
        param_1 = 0;
      }
      else {
        iStack_80 = iStack_84;
        if (iStack_84 == 0) {
          iVar11 = 0;
          goto LAB_10973430c;
        }
        uVar9 = param_2;
        FUN_109733bac(param_2,(uint)unaff_x27 | (int)unaff_x25 << 8,unaff_x28 + 2,FUN_10972ab10,
                      param_1,iStack_84,&iStack_80);
        iVar11 = iStack_80;
        if ((uVar9 & 1) == 0) goto LAB_10973430c;
        uVar9 = param_2;
        func_0x000109733c94(param_2,(uStack_88 & 0xff00ff00) >> 8 | (uStack_88 & 0xff00ff) << 8,
                            param_1 + 4,FUN_10972ab10,param_1,&uStack_7c);
        lVar6 = *(long *)(param_2 + 0xa0);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(lVar6 + 0x18) >> 6 & 1) != 0) {
            FUN_109710ea8(lVar6,2,uStack_7c,iStack_80,0,1);
          }
          goto LAB_10973431c;
        }
        param_1 = 1;
        FUN_109710ea8(lVar6,3,uStack_7c,iStack_80,1,1);
        FUN_109732ff4(param_2,unaff_x22,puVar7,
                      (uStack_8c & 0xff00ff00) >> 8 | (uStack_8c & 0xff00ff) << 8,unaff_x24 + 4,
                      iVar4);
      }
      if (puVar7 != auStack_78) {
        _free(puVar7);
      }
    }
  } while( true );
}



/* Entry: 1097340f0; end: 10973436f;  */

long FUN_1097340f0(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ushort *puVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong extraout_x8;
  byte *pbVar10;
  ulong unaff_x22;
  int iVar11;
  byte *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x27;
  byte *unaff_x28;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar8 = (byte *)(param_1 + 2);
  lVar3 = (ulong)*pbVar8 * 0x200 + (ulong)*(byte *)(param_1 + 3) * 2;
  pbVar10 = pbVar8 + lVar3 + 2;
  puVar5 = (ushort *)&UNK_10dfe4888;
  if (pbVar8[lVar3 + 3] != 0 || *pbVar10 != 0) {
    puVar5 = (ushort *)(pbVar8 + lVar3 + 4);
  }
  uVar2 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
  puVar5 = (ushort *)&UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar5 = (ushort *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar5,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  if ((int)puVar5 != -1) {
    bVar1 = pbVar8[lVar3 + 3];
    uVar9 = (ulong)bVar1;
    uVar2 = (uint)CONCAT11(pbVar8[lVar3 + 2],bVar1);
    unaff_x22 = (ulong)uVar2;
    if (uVar2 < 0x41) {
      lVar6 = (ulong)pbVar8[lVar3 + 2] * 0x200 + (ulong)bVar1 * 2;
      unaff_x28 = pbVar10 + lVar6 + 2;
      unaff_x25 = (ulong)*unaff_x28;
      unaff_x27 = (ulong)pbVar10[lVar6 + 3];
      unaff_x24 = unaff_x28 + unaff_x25 * 0x200 + unaff_x27 * 2;
      uStack_8c = (uint)*(ushort *)(unaff_x24 + 2);
      uStack_88 = (uint)*(ushort *)(param_1 + 2);
      if (4 < uVar2) goto LAB_10973435c;
      puVar7 = auStack_78;
      goto LAB_109734220;
    }
  }
  do {
    param_1 = 0;
    while( true ) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return param_1;
      }
      ___stack_chk_fail();
      uVar9 = extraout_x8;
LAB_10973435c:
      puVar7 = (undefined1 *)(uVar9 << 2);
      _malloc();
      if (puVar7 == (undefined1 *)0x0) break;
LAB_109734220:
      uStack_7c = *(undefined4 *)(*(long *)(param_2 + 0xa0) + 100);
      iVar11 = *(int *)(*(long *)(param_2 + 0xa0) + 0x5c);
      iStack_84 = 0;
      uVar9 = param_2;
      func_0x000109732e14(param_2,unaff_x22,pbVar8 + lVar3 + 6,FUN_10972ab10,param_1,&iStack_84,
                          puVar7);
      iVar4 = iStack_84;
      if ((int)uVar9 == 0) {
LAB_10973430c:
        FUN_109730c80(*(long *)(param_2 + 0xa0),*(undefined4 *)(*(long *)(param_2 + 0xa0) + 0x5c),
                      iVar11);
LAB_10973431c:
        param_1 = 0;
      }
      else {
        iStack_80 = iStack_84;
        if (iStack_84 == 0) {
          iVar11 = 0;
          goto LAB_10973430c;
        }
        uVar9 = param_2;
        FUN_109733bac(param_2,(uint)unaff_x27 | (int)unaff_x25 << 8,unaff_x28 + 2,FUN_10972ab10,
                      param_1,iStack_84,&iStack_80);
        iVar11 = iStack_80;
        if ((uVar9 & 1) == 0) goto LAB_10973430c;
        uVar9 = param_2;
        func_0x000109733c94(param_2,(uStack_88 & 0xff00ff00) >> 8 | (uStack_88 & 0xff00ff) << 8,
                            param_1 + 4,FUN_10972ab10,param_1,&uStack_7c);
        lVar6 = *(long *)(param_2 + 0xa0);
        if ((uVar9 & 1) == 0) {
          if ((*(byte *)(lVar6 + 0x18) >> 6 & 1) != 0) {
            FUN_109710ea8(lVar6,2,uStack_7c,iStack_80,0,1);
          }
          goto LAB_10973431c;
        }
        param_1 = 1;
        FUN_109710ea8(lVar6,3,uStack_7c,iStack_80,1,1);
        FUN_109732ff4(param_2,unaff_x22,puVar7,
                      (uStack_8c & 0xff00ff00) >> 8 | (uStack_8c & 0xff00ff) << 8,unaff_x24 + 4,
                      iVar4);
      }
      if (puVar7 != auStack_78) {
        _free(puVar7);
      }
    }
  } while( true );
}



/* Entry: 109734370; end: 10973437f;  */

undefined8 FUN_109734370(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uStack_48;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 != 0xffffffff) && (*(int *)(param_2 + 0x138) == 0x40)) {
    pbVar7 = (byte *)(param_1 + 4);
    lVar5 = (ulong)*pbVar7 * 0x200 + (ulong)*(byte *)(param_1 + 5) * 2;
    pbVar8 = pbVar7 + lVar5 + 2;
    lVar1 = (ulong)*pbVar8 * 0x200 + (ulong)pbVar7[lVar5 + 3] * 2;
    if (uVar2 < ((uint)(*(ushort *)(pbVar8 + lVar1 + 2) >> 8) |
                (*(ushort *)(pbVar8 + lVar1 + 2) & 0xff00ff) << 8)) {
      uStack_48 = 0;
      lVar4 = param_2;
      func_0x000109733c94(param_2,CONCAT11(*pbVar7,*(byte *)(param_1 + 5)),param_1 + 6,FUN_10972ab10
                          ,param_1,(long)&uStack_48 + 4);
      if (((int)lVar4 != 0) &&
         (lVar4 = param_2,
         func_0x000109733bac(param_2,*(ushort *)(pbVar7 + lVar5 + 2) >> 8 |
                                     *(ushort *)(pbVar7 + lVar5 + 2) << 8,pbVar7 + lVar5 + 4,
                             FUN_10972ab10,param_1,*(int *)(*(long *)(param_2 + 0xa0) + 0x5c) + 1,
                             &uStack_48), (int)lVar4 != 0)) {
        FUN_109710ea8(*(undefined8 *)(param_2 + 0xa0),3,uStack_48._4_4_,uStack_48 & 0xffffffff,1,1);
        if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
          FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ef13);
        }
        if (uVar2 < ((uint)(*(ushort *)(pbVar8 + lVar1 + 2) >> 8) |
                    (*(ushort *)(pbVar8 + lVar1 + 2) & 0xff00ff) << 8)) {
          puVar6 = (ushort *)(pbVar8 + ((ulong)puVar3 & 0xffffffff) * 2 + lVar1 + 4);
        }
        else {
          puVar6 = (ushort *)&UNK_10dfe4888;
        }
        uVar2 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
        func_0x00010973175c(param_2,uVar2,0,0,0);
        lVar5 = *(long *)(param_2 + 0xa0);
        *(uint *)(*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14) = uVar2;
        if (*(long *)(lVar5 + 0xd0) != 0) {
          FUN_1096f53f4(lVar5,*(undefined8 *)(param_2 + 0x90),&UNK_10f57ef49);
        }
        return 1;
      }
      if ((*(byte *)(*(long *)(param_2 + 0xa0) + 0x18) >> 6 & 1) != 0) {
        FUN_109710ea8(*(long *)(param_2 + 0xa0),2,uStack_48._4_4_,uStack_48 & 0xffffffff,0,1);
      }
    }
  }
  return 0;
}



/* Entry: 109734380; end: 10973457f;  */

undefined8 FUN_109734380(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uStack_48;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
  puVar3 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar3 = (undefined *)(param_1 + (ulong)uVar2);
  }
  func_0x000109729bf8(puVar3,*(undefined4 *)
                              (*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                              (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = (uint)puVar3;
  if ((uVar2 != 0xffffffff) && (*(int *)(param_2 + 0x138) == 0x40)) {
    pbVar7 = (byte *)(param_1 + 4);
    lVar5 = (ulong)*pbVar7 * 0x200 + (ulong)*(byte *)(param_1 + 5) * 2;
    pbVar8 = pbVar7 + lVar5 + 2;
    lVar1 = (ulong)*pbVar8 * 0x200 + (ulong)pbVar7[lVar5 + 3] * 2;
    if (uVar2 < ((uint)(*(ushort *)(pbVar8 + lVar1 + 2) >> 8) |
                (*(ushort *)(pbVar8 + lVar1 + 2) & 0xff00ff) << 8)) {
      uStack_48 = 0;
      lVar4 = param_2;
      func_0x000109733c94(param_2,CONCAT11(*pbVar7,*(byte *)(param_1 + 5)),param_1 + 6,FUN_10972ab10
                          ,param_1,(long)&uStack_48 + 4);
      if (((int)lVar4 != 0) &&
         (lVar4 = param_2,
         func_0x000109733bac(param_2,*(ushort *)(pbVar7 + lVar5 + 2) >> 8 |
                                     *(ushort *)(pbVar7 + lVar5 + 2) << 8,pbVar7 + lVar5 + 4,
                             FUN_10972ab10,param_1,*(int *)(*(long *)(param_2 + 0xa0) + 0x5c) + 1,
                             &uStack_48), (int)lVar4 != 0)) {
        FUN_109710ea8(*(undefined8 *)(param_2 + 0xa0),3,uStack_48._4_4_,uStack_48 & 0xffffffff,1,1);
        if (*(long *)(*(long *)(param_2 + 0xa0) + 0xd0) != 0) {
          FUN_1096f53f4(*(long *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0x90),&UNK_10f57ef13);
        }
        if (uVar2 < ((uint)(*(ushort *)(pbVar8 + lVar1 + 2) >> 8) |
                    (*(ushort *)(pbVar8 + lVar1 + 2) & 0xff00ff) << 8)) {
          puVar6 = (ushort *)(pbVar8 + ((ulong)puVar3 & 0xffffffff) * 2 + lVar1 + 4);
        }
        else {
          puVar6 = (ushort *)&UNK_10dfe4888;
        }
        uVar2 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
        func_0x00010973175c(param_2,uVar2,0,0,0);
        lVar5 = *(long *)(param_2 + 0xa0);
        *(uint *)(*(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x5c) * 0x14) = uVar2;
        if (*(long *)(lVar5 + 0xd0) != 0) {
          FUN_1096f53f4(lVar5,*(undefined8 *)(param_2 + 0x90),&UNK_10f57ef49);
        }
        return 1;
      }
      if ((*(byte *)(*(long *)(param_2 + 0xa0) + 0x18) >> 6 & 1) != 0) {
        FUN_109710ea8(*(long *)(param_2 + 0xa0),2,uStack_48._4_4_,uStack_48 & 0xffffffff,0,1);
      }
    }
  }
  return 0;
}


