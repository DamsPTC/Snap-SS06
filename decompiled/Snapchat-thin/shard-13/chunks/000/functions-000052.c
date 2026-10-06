/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f0c710; end: 109f0c85b;  */

undefined8 FUN_109f0c710(long param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  plVar4 = (long *)**(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    plVar9 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    plVar6 = (long *)0x0;
    plVar8 = (long *)0x0;
    do {
      plVar7 = plVar6;
      plVar9 = plVar8;
      if ((param_2 & 0x1fffff & *(uint *)(plVar3 + 4)) != 0) {
        plVar9 = plVar3;
        if (*(int *)((long)plVar3 + 0x3c) != 0x11) {
          plVar9 = plVar8;
        }
        plVar7 = plVar3;
        if (*(int *)((long)plVar3 + 0x3c) != 0x13) {
          plVar7 = plVar6;
        }
      }
      plVar5 = (long *)*plVar4;
      plVar3 = plVar4;
      plVar4 = plVar5;
      plVar6 = plVar7;
      plVar8 = plVar9;
    } while (plVar5 != (long *)0x0);
  }
  if (plVar7 == (long *)0x0 && plVar9 == (long *)0x0) {
    if (param_3 != 0) {
      *(ushort *)(param_1 + 0x14e) = *(ushort *)(param_1 + 0x14e) & 0xf00f;
      return 0;
    }
  }
  else if (((plVar7 != (long *)0x0) || (plVar9 == (long *)0x0)) ||
          (((*(byte *)((long)plVar9 + 0x24) >> 6 & 1) != 0 &&
           ((*(ulong *)((long)plVar9 + 0x2c) & 0x6000) != 0x4000)))) {
    lVar1 = param_1;
    FUN_109f0b718(param_1,plVar9);
    lVar2 = param_1;
    FUN_109f0b718(param_1,plVar7);
    uVar10 = (uint)lVar1;
    if (param_3 != 0) {
      *(ushort *)(param_1 + 0x14e) =
           (ushort)((uVar10 & 0xf) << 4) | (ushort)(((uint)lVar2 & 0xf) << 8) |
           *(ushort *)(param_1 + 0x14e) & 0xf00f;
    }
    if (plVar9 != (long *)0x0) {
      *(ulong *)((long)plVar9 + 0x2c) =
           *(ulong *)((long)plVar9 + 0x2c) & 0xffffffffffff9fff | 0x4000;
    }
    if (plVar7 != (long *)0x0) {
      *(ulong *)((long)plVar7 + 0x2c) =
           *(ulong *)((long)plVar7 + 0x2c) & 0xffffffffffff9fff | 0x4000;
      *(uint *)((long)plVar7 + 0x3c) = (uVar10 >> 2) + 0x11;
      plVar7[4] = plVar7[4] & 0xffffffc000000000U |
                  plVar7[4] & 0xfffffffffU | (ulong)(uVar10 & 3) << 0x24;
    }
    return 1;
  }
  return 0;
}



/* Entry: 109f0c85c; end: 109f0ca0b;  */

void FUN_109f0c85c(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  puVar5 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar5,0x48,8);
  *(undefined4 *)(puVar5 + 3) = 7;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,puVar5);
  uVar6 = (ulong)*(byte *)((long)puVar5 + 0x44);
  func_0x000109ecd728(uVar6);
  lVar7 = param_1[3];
  FUN_109ecaef8(lVar7,uVar6);
  if (*(char *)((long)puVar5 + 0x44) != '\0') {
    uVar6 = 0;
    lVar8 = lVar7 + (ulong)param_4 * 0x30;
    puVar9 = (undefined1 *)(lVar7 + 0x70);
    do {
      if (param_4 == uVar6) {
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined8 *)(lVar8 + 0x58) = 0;
        *(undefined8 *)(lVar8 + 0x60) = 0;
        *(undefined8 *)(lVar8 + 0x68) = param_3;
        *(undefined1 *)(lVar8 + 0x70) = 0;
      }
      else {
        *(undefined8 *)(puVar9 + -0x20) = 0;
        *(undefined8 *)(puVar9 + -0x18) = 0;
        *(undefined8 *)(puVar9 + -0x10) = 0;
        *(undefined8 **)(puVar9 + -8) = puVar5 + 5;
        *puVar9 = (char)uVar6;
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 0x30;
    } while (uVar6 < *(byte *)((long)puVar5 + 0x44));
  }
  puVar5 = param_1;
  func_0x000109ecdf34();
  uVar3 = 1 << (ulong)(param_4 & 0x1f);
  uVar4 = -1 << (ulong)(*(byte *)((long)puVar5 + 0x1c) & 0x1f);
  lVar7 = param_1[3];
  FUN_109ecb0a8(lVar7,0x26f);
  bVar2 = *(byte *)((long)puVar5 + 0x1c);
  *(byte *)(lVar7 + 0x50) = bVar2;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(long *)(lVar7 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 **)(lVar7 + 0xb8) = puVar5;
  uVar10 = 0xffffffff;
  if (bVar2 != 0x20) {
    uVar10 = ~(-1 << (ulong)(bVar2 & 0x1f));
  }
  uVar1 = uVar3 & (uVar4 ^ 0xffffffff);
  if ((uVar4 & uVar3) != 0) {
    uVar1 = uVar10;
  }
  lVar8 = (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
  *(uint *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar8] * 4 + -4) = uVar1;
  *(undefined4 *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar8] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar7);
  *param_1 = 3;
  param_1[1] = lVar7;
  return;
}



/* Entry: 109f0ca0c; end: 109f0caa3;  */

long FUN_109f0ca0c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[3];
  FUN_109ecb0a8(lVar1,*(undefined4 *)(param_2 + 0x28));
  *(undefined1 *)(lVar1 + 0x50) = 4;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(long *)(lVar1 + 0x98) = param_3 + 0x80;
  if ((*(uint *)(lVar1 + 0x28) & 0xfffffffe) == 0xbc) {
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = uVar2;
  }
  FUN_109ecb048(lVar1,lVar1 + 0x30,4,0x20);
  FUN_109ecb4f0(*param_1,param_1[1],lVar1);
  *param_1 = 3;
  param_1[1] = lVar1;
  return lVar1 + 0x30;
}



/* Entry: 109f0caa4; end: 109f0de53;  */

void FUN_109f0caa4(ulong *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  
  uVar7 = (uint)param_5;
  if ((int)param_6 - 1U != uVar7) {
    uVar7 = uVar7 + ((int)param_6 - uVar7 >> 1);
    uVar14 = (ulong)uVar7;
    bVar2 = *(byte *)(param_4 + 0x1d);
    uVar8 = (bVar2 & 0xaaaaaaaa) >> 1 | (bVar2 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    uVar5 = uVar14;
    uVar6 = uVar14;
    if (uVar8 < 5) {
      if (uVar8 == 0) {
        uVar9 = 0;
        uVar5 = 0;
        uVar6 = (ulong)(uVar7 != 0);
      }
      else if (uVar8 == 3) {
        uVar9 = 0;
        uVar5 = 0;
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = uVar14 & 0xffff0000;
    }
    puVar4 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar4,0x50,8);
    if (puVar4 != (undefined8 *)0x0) {
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
    }
    *(undefined4 *)(puVar4 + 3) = 5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_109ecb048(puVar4,puVar4 + 5,1,bVar2);
    puVar4[9] = uVar5 & 0xff00 | uVar9 | uVar6 & 0xff;
    FUN_109ecb4f0(*param_1,param_1[1],puVar4);
    *param_1 = 3;
    param_1[1] = (ulong)puVar4;
    puVar10 = param_1;
    FUN_109ece1b0(param_1,0x12f,param_4,puVar4 + 5);
    FUN_109ece6c4(param_1,puVar10);
    FUN_109f0caa4(param_1,param_2,param_3,param_4,param_5,uVar14);
    uVar5 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    uVar5 = *(ulong *)(*(long *)(uVar5 + 0x18) + 0x68);
    if (*(int *)(uVar5 + 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      puVar10 = (ulong *)(uVar5 + 8);
      uVar5 = 0;
      if (*(long *)(*puVar10 + 8) != 0) {
        uVar5 = *puVar10;
      }
      uVar6 = 1;
    }
    *param_1 = uVar6;
    param_1[1] = uVar5;
    FUN_109f0caa4(param_1,param_2,param_3,param_4,uVar14,param_6);
    uVar5 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    puVar10 = *(ulong **)(uVar5 + 0x18);
    if ((int)puVar10[2] == 0) {
      uVar5 = 1;
      puVar11 = puVar10;
    }
    else {
      uVar5 = 0;
      puVar11 = (ulong *)0x0;
      if (*(ulong *)*puVar10 != 0) {
        puVar11 = (ulong *)*puVar10;
      }
    }
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar11;
    return;
  }
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0x48,8);
  *(undefined4 *)(puVar4 + 3) = 7;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,puVar4);
  uVar5 = (ulong)*(byte *)((long)puVar4 + 0x44);
  func_0x000109ecd728(uVar5);
  uVar6 = param_1[3];
  FUN_109ecaef8(uVar6,uVar5);
  if (*(char *)((long)puVar4 + 0x44) != '\0') {
    uVar5 = 0;
    lVar12 = uVar6 + (param_5 & 0xffffffff) * 0x30;
    puVar13 = (undefined1 *)(uVar6 + 0x70);
    do {
      if ((param_5 & 0xffffffff) == uVar5) {
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x60) = 0;
        *(undefined8 *)(lVar12 + 0x68) = param_3;
        *(undefined1 *)(lVar12 + 0x70) = 0;
      }
      else {
        *(undefined8 *)(puVar13 + -0x20) = 0;
        *(undefined8 *)(puVar13 + -0x18) = 0;
        *(undefined8 *)(puVar13 + -0x10) = 0;
        *(undefined8 **)(puVar13 + -8) = puVar4 + 5;
        *puVar13 = (char)uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar13 = puVar13 + 0x30;
    } while (uVar5 < *(byte *)((long)puVar4 + 0x44));
  }
  puVar10 = param_1;
  func_0x000109ecdf34();
  uVar8 = 1 << (ulong)(uVar7 & 0x1f);
  uVar3 = -1 << (ulong)(*(byte *)((long)puVar10 + 0x1c) & 0x1f);
  uVar5 = param_1[3];
  FUN_109ecb0a8(uVar5,0x26f);
  bVar2 = *(byte *)((long)puVar10 + 0x1c);
  *(byte *)(uVar5 + 0x50) = bVar2;
  *(undefined8 *)(uVar5 + 0x80) = 0;
  *(undefined8 *)(uVar5 + 0x88) = 0;
  *(undefined8 *)(uVar5 + 0x90) = 0;
  *(long *)(uVar5 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(uVar5 + 0xa0) = 0;
  *(undefined8 *)(uVar5 + 0xa8) = 0;
  *(undefined8 *)(uVar5 + 0xb0) = 0;
  *(ulong **)(uVar5 + 0xb8) = puVar10;
  uVar7 = 0xffffffff;
  if (bVar2 != 0x20) {
    uVar7 = ~(-1 << (ulong)(bVar2 & 0x1f));
  }
  uVar1 = uVar8 & (uVar3 ^ 0xffffffff);
  if ((uVar3 & uVar8) != 0) {
    uVar1 = uVar7;
  }
  lVar12 = (ulong)*(uint *)(uVar5 + 0x28) * 0x68;
  *(uint *)(uVar5 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar12] * 4 + -4) = uVar1;
  *(undefined4 *)(uVar5 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar12] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],uVar5);
  *param_1 = 3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 109f0de54; end: 109f0dfaf;  */

undefined8 * FUN_109f0de54(ulong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if ((bVar1 < 2) || (2 < *(byte *)(param_1 + 4) - 2)) {
    if ((*(byte *)(param_1 + 4) | 2) == 0x13) {
      uVar5 = param_1;
      FUN_109eca23c();
      *(int *)((long)puVar2 + 0x84) = (int)uVar5;
      FUN_109f658b0(param_2,(uVar5 & 0xffffffff) << 3);
      puVar2[0x11] = param_2;
      if (*(int *)((long)puVar2 + 0x84) != 0) {
        lVar6 = 0;
        uVar5 = 0;
        do {
          if (*(char *)(param_1 + 4) == '\x13') {
            uVar4 = param_1;
            func_0x000109eca118();
          }
          else {
            uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar6);
          }
          FUN_109f0de54();
          *(ulong *)(puVar2[0x11] + uVar5 * 8) = uVar4;
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 0x30;
        } while (uVar5 < *(uint *)((long)puVar2 + 0x84));
      }
    }
  }
  else {
    *(uint *)((long)puVar2 + 0x84) = (uint)bVar1;
    puVar3 = param_2;
    FUN_109f658b0(param_2,(ulong)bVar1 << 3);
    puVar2[0x11] = puVar3;
    if (*(int *)((long)puVar2 + 0x84) != 0) {
      uVar5 = 0;
      do {
        puVar3 = param_2;
        FUN_109f658b0(param_2,0x90);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
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
        }
        *(undefined8 **)(puVar2[0x11] + uVar5 * 8) = puVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((long)puVar2 + 0x84));
    }
  }
  return puVar2;
}



/* Entry: 109f0dfb0; end: 109f0e0bb;  */

undefined8 FUN_109f0dfb0(int param_1)

{
  if (param_1 < 0xf9) {
    if (param_1 < 0xcc) {
      if (param_1 == 0xa9) {
        return 0x20;
      }
      if (param_1 == 0xb1) {
        return 0x400;
      }
      if (param_1 == 0xc9) {
        return 0x10;
      }
    }
    else if (param_1 < 0xe5) {
      if (param_1 == 0xcc) {
        return 0x40;
      }
      if (param_1 == 0xe3) {
        return 0x1000;
      }
    }
    else {
      if (param_1 == 0xe5) {
        return 0x1000;
      }
      if (param_1 == 0xe7) {
        return 0x100;
      }
    }
  }
  else if (param_1 < 0xff) {
    if (param_1 == 0xf9) {
      return 1;
    }
    if (param_1 == 0xfd) {
      return 0x80;
    }
    if (param_1 == 0xfe) {
      return 4;
    }
  }
  else if (param_1 < 0x107) {
    if (param_1 == 0xff) {
      return 0x2000;
    }
    if (param_1 == 0x106) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x107) {
      return 0x200;
    }
    if (param_1 == 0x10b) {
      return 8;
    }
  }
  return 0;
}



/* Entry: 109f0e0bc; end: 109f0e717;  */

bool FUN_109f0e0bc(long param_1,byte param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  double dStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  
  uStack_d8 = 0x4000000008;
  uStack_e0 = 0;
  lVar9 = 0x40;
  _malloc();
  if (lVar9 == 0) {
    bVar8 = false;
  }
  else {
    plVar24 = *(long **)(param_1 + 0x178);
    for (plVar18 = (long *)**(long **)(param_1 + 0x178); lStack_d0 = lVar9, plVar18 != (long *)0x0;
        plVar18 = (long *)*plVar18) {
      lVar25 = plVar24[6];
      if (lVar25 != 0) {
        do {
          lStack_c0 = 0;
          plStack_b8 = (long *)0x0;
          puStack_a8 = *(undefined8 **)(*(long *)(lVar25 + 0x20) + 0x18);
          uStack_b0 = 0;
          lVar9 = *(long *)(lVar25 + 0x30);
          lStack_a0 = lVar25;
          while (lVar9 != 0) {
            plVar23 = *(long **)(lVar9 + 0x20);
            plVar18 = (long *)*plVar23;
            if (plVar18 != (long *)0x0) {
              do {
                plVar10 = (long *)0x0;
                plVar22 = plVar23;
                if (*plVar18 != 0) {
                  plVar10 = plVar18;
                }
                do {
                  plVar23 = plVar10;
                  if ((((int)plVar22[3] == 0) && ((int)plVar22[5] == 0xda)) &&
                     (bVar3 = *(byte *)((long)plVar22 + 0x4d), (param_2 & bVar3) != 0)) {
                    lVar19 = 3;
                    if (bVar3 == 0x20) {
                      lVar19 = 2;
                    }
                    lVar1 = 1;
                    if (bVar3 != 0x10) {
                      lVar1 = lVar19;
                    }
                    bVar5 = *(byte *)(puStack_a8[5] + lVar1);
                    lStack_c0 = 2;
                    plStack_b8 = plVar22;
                    if ((*(ushort *)((long)plVar22 + 0x2c) & 1) == 0) {
                      if (*(int *)(*(long *)plVar22[0xd] + 0x18) == 5 &&
                          *(int *)(*(long *)plVar22[0x13] + 0x18) == 5) {
                        lVar19 = *(long *)plVar22[0xd] + 0x48;
                        lVar1 = *(long *)plVar22[0x13] + 0x48;
                        bVar4 = *(byte *)((long)plVar22 + 0x4c);
                        uVar13 = (ulong)bVar4;
                        if (bVar3 == 0x20) {
                          pbVar20 = (byte *)(plVar22 + 0x14);
                          if (bVar4 != 0) {
                            do {
                              _frexpf(*(undefined4 *)(lVar19 + (ulong)pbVar20[-0x30] * 8),&iStack_94
                                     );
                              _frexpf(*(undefined4 *)(lVar1 + (ulong)*pbVar20 * 8),&iStack_80);
                              uVar7 = iStack_94 - iStack_80;
                              uVar2 = -uVar7;
                              if (-1 < (int)uVar7) {
                                uVar2 = uVar7;
                              }
                              if (0xb < uVar2) goto LAB_109f0e214;
                              uVar13 = uVar13 - 1;
                              pbVar20 = pbVar20 + 1;
                            } while (uVar13 != 0);
                          }
                        }
                        else {
                          pbVar20 = (byte *)(plVar22 + 0x14);
                          if (bVar4 != 0) {
                            do {
                              _frexp(*(undefined8 *)(lVar19 + (ulong)pbVar20[-0x30] * 8),&iStack_94)
                              ;
                              _frexp(*(undefined8 *)(lVar1 + (ulong)*pbVar20 * 8),&iStack_80);
                              uVar7 = iStack_94 - iStack_80;
                              uVar2 = -uVar7;
                              if (-1 < (int)uVar7) {
                                uVar2 = uVar7;
                              }
                              if (0x1a < uVar2) goto LAB_109f0e214;
                              uVar13 = uVar13 - 1;
                              pbVar20 = pbVar20 + 1;
                            } while (uVar13 != 0);
                          }
                        }
                        FUN_109f0eb54(&lStack_c0,&uStack_e0,plVar22);
                      }
                      else {
LAB_109f0e214:
                        plVar18 = plVar22;
                        FUN_109f0ed24(plVar22,0,&iStack_80);
                        if ((int)plVar18 == 0) {
LAB_109f0e328:
                          plVar18 = plVar22;
                          FUN_109f0ed24(plVar22,1,&dStack_88);
                          if ((int)plVar18 != 0) {
                            bVar8 = true;
                            if ((dStack_88 != -1.0) && (bVar8 = false, !NAN(dStack_88))) {
                              bVar8 = dStack_88 == 1.0;
                            }
                            if (bVar8) {
                              FUN_109f0e8ac(&lStack_c0,&uStack_e0,plVar22);
                              goto joined_r0x000109f0e60c;
                            }
                          }
                          if ((bVar5 & 1) == 0) {
                            if ((param_3 != 0) ||
                               (FUN_109f0efd0(plVar22,&iStack_94), iStack_90 != 0))
                            goto LAB_109f0e1e4;
                            if (iStack_8c != 0) {
                              plVar18 = &lStack_c0;
                              func_0x000109ece464(plVar18,plVar22,0);
                              plVar10 = &lStack_c0;
                              func_0x000109ece464(plVar10,plVar22,1);
                              plVar11 = &lStack_c0;
                              func_0x000109ece464(plVar11,plVar22,2);
                              plVar12 = &lStack_c0;
                              FUN_109ece168(plVar12,0xea,plVar11);
                              *(ushort *)(*plVar12 + 0x2c) =
                                   *(ushort *)(*plVar12 + 0x2c) & 0xfffe |
                                   *(ushort *)((long)plVar22 + 0x2c) & 1;
                              *(ushort *)(*plVar12 + 0x2c) =
                                   *(ushort *)(*plVar12 + 0x2c) & 0xf007 |
                                   *(ushort *)((long)plVar22 + 0x2c) & 0xff8;
                              bVar3 = *(byte *)((long)plVar11 + 0x1d);
                              uVar13 = (ulong)bVar3;
                              FUN_109ecc128(0x3ff0000000000000);
                              plVar14 = (long *)*puStack_a8;
                              FUN_109f6600c(plVar14,0x50,8);
                              if (plVar14 != (long *)0x0) {
                                plVar14[7] = 0;
                                plVar14[6] = 0;
                                plVar14[9] = 0;
                                plVar14[8] = 0;
                                plVar14[3] = 0;
                                plVar14[2] = 0;
                                plVar14[5] = 0;
                                plVar14[4] = 0;
                                plVar14[1] = 0;
                                *plVar14 = 0;
                              }
                              *(undefined4 *)(plVar14 + 3) = 5;
                              plVar14[1] = 0;
                              plVar14[2] = 0;
                              *plVar14 = 0;
                              FUN_109ecb048(plVar14,plVar14 + 5,1,bVar3);
                              plVar14[9] = uVar13;
                              FUN_109ecb4f0(lStack_c0,plStack_b8,plVar14);
                              lStack_c0 = 3;
                              plVar15 = &lStack_c0;
                              plStack_b8 = plVar14;
                              FUN_109ece1b0(plVar15,0x9c,plVar14 + 5,plVar12);
                              *(ushort *)(*plVar15 + 0x2c) =
                                   *(ushort *)(*plVar15 + 0x2c) & 0xfffe |
                                   *(ushort *)((long)plVar22 + 0x2c) & 1;
                              *(ushort *)(*plVar15 + 0x2c) =
                                   *(ushort *)(*plVar15 + 0x2c) & 0xf007 |
                                   *(ushort *)((long)plVar22 + 0x2c) & 0xff8;
                              plVar12 = &lStack_c0;
                              FUN_109ece1b0(plVar12,0xe8,plVar10,plVar11);
                              *(ushort *)(*plVar12 + 0x2c) =
                                   *(ushort *)(*plVar12 + 0x2c) & 0xfffe |
                                   *(ushort *)((long)plVar22 + 0x2c) & 1;
                              *(ushort *)(*plVar12 + 0x2c) =
                                   *(ushort *)(*plVar12 + 0x2c) & 0xf007 |
                                   *(ushort *)((long)plVar22 + 0x2c) & 0xff8;
                              plVar10 = &lStack_c0;
                              func_0x000109ece210(plVar10,0xca,plVar18,plVar15,plVar12);
                              *(ushort *)(*plVar10 + 0x2c) =
                                   *(ushort *)(*plVar10 + 0x2c) & 0xfffe |
                                   *(ushort *)((long)plVar22 + 0x2c) & 1;
                              *(ushort *)(*plVar10 + 0x2c) =
                                   *(ushort *)(*plVar10 + 0x2c) & 0xf007 |
                                   *(ushort *)((long)plVar22 + 0x2c) & 0xff8;
                              if ((long *)plVar22[8] + -1 != plVar22 + 6) {
                                plVar18 = (long *)plVar22[8];
                                do {
                                  lVar19 = *plVar18;
                                  plVar11 = (long *)plVar18[1];
                                  *(long **)(lVar19 + 8) = plVar11;
                                  *plVar11 = lVar19;
                                  plVar18[1] = (long)(plVar10 + 1);
                                  plVar18[2] = (long)plVar10;
                                  *plVar18 = 0;
                                  lVar19 = plVar10[1];
                                  *plVar18 = lVar19;
                                  *(long **)(lVar19 + 8) = plVar18;
                                  plVar10[1] = (long)plVar18;
                                  plVar18 = plVar11;
                                } while (plVar11 + -1 != plVar22 + 6);
                              }
                              puVar16 = &uStack_e0;
                              FUN_109f68850();
                              *puVar16 = plVar22;
                              goto joined_r0x000109f0e60c;
                            }
                          }
                          else if ((param_3 != 0) ||
                                  (FUN_109f0efd0(plVar22,&iStack_94),
                                  iStack_90 != 0 || iStack_8c != 0)) goto LAB_109f0e634;
                          if (*(int *)(*(long *)plVar22[0x19] + 0x18) == 5) goto LAB_109f0e634;
                          FUN_109f0eb54(&lStack_c0,&uStack_e0,plVar22);
                        }
                        else {
                          if ((double)CONCAT44(uStack_7c,iStack_80) == 1.0) {
                            uVar17 = 1;
                          }
                          else {
                            if ((double)CONCAT44(uStack_7c,iStack_80) != -1.0) goto LAB_109f0e328;
                            uVar17 = 0;
                          }
                          FUN_109f0ede8(&lStack_c0,&uStack_e0,plVar22,uVar17);
                        }
                      }
                    }
                    else if ((bVar5 & 1) == 0) {
LAB_109f0e1e4:
                      FUN_109f0e718(&lStack_c0,&uStack_e0,plVar22);
                    }
                    else {
LAB_109f0e634:
                      FUN_109f0e8ac(&lStack_c0,&uStack_e0,plVar22);
                    }
                  }
joined_r0x000109f0e60c:
                  if (plVar23 == (long *)0x0) goto LAB_109f0e664;
                  plVar18 = (long *)*plVar23;
                  plVar10 = (long *)0x0;
                  plVar22 = plVar23;
                } while (plVar18 == (long *)0x0);
              } while( true );
            }
LAB_109f0e664:
            FUN_109ecc434();
          }
          *(uint *)(lVar25 + 0x84) = *(uint *)(lVar25 + 0x84) & 3;
          plVar24 = (long *)*plVar24;
          plVar18 = (long *)*plVar24;
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_109f0e6a4;
            lVar25 = plVar24[6];
            if (lVar25 != 0) break;
            plVar24 = plVar18;
            plVar18 = (long *)*plVar18;
          }
        } while( true );
      }
      plVar24 = plVar18;
    }
LAB_109f0e6a4:
    lVar9 = lStack_d0;
    uVar2 = (uint)uStack_e0;
    uVar7 = (uint)uStack_d8;
    bVar8 = (uint)uStack_d8 <= (uint)uStack_e0 - uStack_e0._4_4_;
    if ((uint)uStack_e0 != uStack_e0._4_4_) {
      uVar6 = uStack_d8._4_4_ - 1;
      uVar21 = uStack_e0._4_4_;
      do {
        FUN_109ecb9c0(*(undefined8 *)(lVar9 + (ulong)(uVar6 & uVar21)));
        uVar21 = uVar21 + uVar7;
      } while (uVar21 != uVar2);
    }
    _free(lVar9);
  }
  return bVar8;
}



/* Entry: 109f0e718; end: 109f0e8ab;  */

void FUN_109f0e718(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar1 = param_1;
  func_0x000109ece464(param_1,param_3,0);
  plVar2 = param_1;
  func_0x000109ece464(param_1,param_3,1);
  plVar3 = param_1;
  func_0x000109ece464(param_1,param_3,2);
  plVar4 = param_1;
  FUN_109ece168(param_1,0xea,plVar1);
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar5 = param_1;
  func_0x000109ece210(param_1,0xca,plVar4,plVar3,plVar1);
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  func_0x000109ece210(param_1,0xca,plVar2,plVar3,plVar5);
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  if (*(long **)(param_3 + 0x40) + -1 != (long *)(param_3 + 0x30)) {
    plVar1 = *(long **)(param_3 + 0x40);
    do {
      lVar6 = *plVar1;
      plVar2 = (long *)plVar1[1];
      *(long **)(lVar6 + 8) = plVar2;
      *plVar2 = lVar6;
      plVar1[1] = (long)(param_1 + 1);
      plVar1[2] = (long)param_1;
      *plVar1 = 0;
      lVar6 = param_1[1];
      *plVar1 = lVar6;
      *(long **)(lVar6 + 8) = plVar1;
      param_1[1] = (long)plVar1;
      plVar1 = plVar2;
    } while (plVar2 + -1 != (long *)(param_3 + 0x30));
  }
  FUN_109f68850();
  *param_2 = param_3;
  return;
}



/* Entry: 109f0e8ac; end: 109f0eb53;  */

void FUN_109f0e8ac(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  plVar2 = param_1;
  func_0x000109ece464(param_1,param_3,0);
  plVar3 = param_1;
  func_0x000109ece464(param_1,param_3,1);
  plVar4 = param_1;
  func_0x000109ece464(param_1,param_3,2);
  plVar5 = param_1;
  FUN_109ece168(param_1,0xea,plVar4);
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  bVar1 = *(byte *)((long)plVar4 + 0x1d);
  uVar6 = (ulong)bVar1;
  FUN_109ecc128(0x3ff0000000000000);
  puVar7 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar7,0x50,8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  *(undefined4 *)(puVar7 + 3) = 5;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_109ecb048(puVar7,puVar7 + 5,1,(ulong)bVar1);
  puVar7[9] = uVar6;
  FUN_109ecb4f0(*param_1,param_1[1],puVar7);
  *param_1 = 3;
  param_1[1] = (long)puVar7;
  plVar8 = param_1;
  FUN_109ece1b0(param_1,0x9c,puVar7 + 5,plVar5);
  *(ushort *)(*plVar8 + 0x2c) =
       *(ushort *)(*plVar8 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar8 + 0x2c) =
       *(ushort *)(*plVar8 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar5 = param_1;
  FUN_109ece1b0(param_1,0xe8,plVar2,plVar8);
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar2 = param_1;
  FUN_109ece1b0(param_1,0xe8,plVar3,plVar4);
  *(ushort *)(*plVar2 + 0x2c) =
       *(ushort *)(*plVar2 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar2 + 0x2c) =
       *(ushort *)(*plVar2 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  FUN_109ece1b0(param_1,0x9c,plVar5,plVar2);
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  if (*(long **)(param_3 + 0x40) + -1 != (long *)(param_3 + 0x30)) {
    plVar2 = *(long **)(param_3 + 0x40);
    do {
      lVar9 = *plVar2;
      plVar3 = (long *)plVar2[1];
      *(long **)(lVar9 + 8) = plVar3;
      *plVar3 = lVar9;
      plVar2[1] = (long)(param_1 + 1);
      plVar2[2] = (long)param_1;
      *plVar2 = 0;
      lVar9 = param_1[1];
      *plVar2 = lVar9;
      *(long **)(lVar9 + 8) = plVar2;
      param_1[1] = (long)plVar2;
      plVar2 = plVar3;
    } while (plVar3 + -1 != (long *)(param_3 + 0x30));
  }
  FUN_109f68850();
  *param_2 = param_3;
  return;
}



/* Entry: 109f0eb54; end: 109f0ed23;  */

void FUN_109f0eb54(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar1 = param_1;
  func_0x000109ece464(param_1,param_3,0);
  plVar2 = param_1;
  func_0x000109ece464(param_1,param_3,1);
  plVar3 = param_1;
  func_0x000109ece464(param_1,param_3,2);
  plVar4 = param_1;
  FUN_109ece168(param_1,0xea,plVar1);
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar5 = param_1;
  FUN_109ece1b0(param_1,0x9c,plVar2,plVar4);
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar5 + 0x2c) =
       *(ushort *)(*plVar5 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar2 = param_1;
  FUN_109ece1b0(param_1,0xe8,plVar3,plVar5);
  *(ushort *)(*plVar2 + 0x2c) =
       *(ushort *)(*plVar2 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar2 + 0x2c) =
       *(ushort *)(*plVar2 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  FUN_109ece1b0(param_1,0x9c,plVar1,plVar2);
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  if (*(long **)(param_3 + 0x40) + -1 != (long *)(param_3 + 0x30)) {
    plVar1 = *(long **)(param_3 + 0x40);
    do {
      lVar6 = *plVar1;
      plVar2 = (long *)plVar1[1];
      *(long **)(lVar6 + 8) = plVar2;
      *plVar2 = lVar6;
      plVar1[1] = (long)(param_1 + 1);
      plVar1[2] = (long)param_1;
      *plVar1 = 0;
      lVar6 = param_1[1];
      *plVar1 = lVar6;
      *(long **)(lVar6 + 8) = plVar1;
      param_1[1] = (long)plVar1;
      plVar1 = plVar2;
    } while (plVar2 + -1 != (long *)(param_3 + 0x30));
  }
  FUN_109f68850();
  *param_2 = param_3;
  return;
}



/* Entry: 109f0ed24; end: 109f0ede7;  */

undefined8 FUN_109f0ed24(long param_1,uint param_2,double *param_3)

{
  double *pdVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  
  lVar5 = param_1 + (ulong)param_2 * 0x30;
  lVar3 = **(long **)(lVar5 + 0x68);
  if (*(int *)(lVar3 + 0x18) != 5) {
    return 0;
  }
  lVar3 = lVar3 + 0x48;
  bVar2 = *(byte *)(param_1 + 0x4c);
  pdVar1 = (double *)(lVar3 + (ulong)*(byte *)(lVar5 + 0x70) * 8);
  if (*(char *)(param_1 + 0x4d) == ' ') {
    fVar6 = *(float *)pdVar1;
    if (1 < bVar2) {
      lVar5 = (ulong)bVar2 - 1;
      pbVar4 = (byte *)(param_1 + (ulong)param_2 * 0x30 + 0x71);
      do {
        if (*(float *)(lVar3 + (ulong)*pbVar4 * 8) != fVar6) {
          return 0;
        }
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
      } while (lVar5 != 0);
    }
    dVar7 = (double)fVar6;
  }
  else {
    dVar7 = *pdVar1;
    if (1 < bVar2) {
      lVar5 = (ulong)bVar2 - 1;
      pbVar4 = (byte *)(param_1 + (ulong)param_2 * 0x30 + 0x71);
      do {
        if (*(double *)(lVar3 + (ulong)*pbVar4 * 8) != dVar7) {
          return 0;
        }
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  *param_3 = dVar7;
  return 1;
}



/* Entry: 109f0ede8; end: 109f0efcf;  */

void FUN_109f0ede8(long *param_1,long *param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = param_1;
  func_0x000109ece464(param_1,param_3,0);
  plVar2 = param_1;
  func_0x000109ece464(param_1,param_3,1);
  plVar3 = param_1;
  func_0x000109ece464(param_1,param_3,2);
  plVar4 = param_1;
  FUN_109ece1b0(param_1,0xe8,plVar2,plVar3);
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar4 + 0x2c) =
       *(ushort *)(*plVar4 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  plVar2 = plVar3;
  if (param_4 != 0) {
    plVar2 = param_1;
    FUN_109ece168(param_1,0xea,plVar3);
    *(ushort *)(*plVar2 + 0x2c) =
         *(ushort *)(*plVar2 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
    *(ushort *)(*plVar2 + 0x2c) =
         *(ushort *)(*plVar2 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  }
  plVar3 = param_1;
  FUN_109ece1b0(param_1,0x9c,plVar1,plVar2);
  *(ushort *)(*plVar3 + 0x2c) =
       *(ushort *)(*plVar3 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*plVar3 + 0x2c) =
       *(ushort *)(*plVar3 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  FUN_109ece1b0(param_1,0x9c,plVar3,plVar4);
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xfffe | *(ushort *)(param_3 + 0x2c) & 1;
  *(ushort *)(*param_1 + 0x2c) =
       *(ushort *)(*param_1 + 0x2c) & 0xf007 | *(ushort *)(param_3 + 0x2c) & 0xff8;
  if (*(long **)(param_3 + 0x40) + -1 != (long *)(param_3 + 0x30)) {
    plVar1 = *(long **)(param_3 + 0x40);
    do {
      lVar5 = *plVar1;
      plVar2 = (long *)plVar1[1];
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
      plVar1[1] = (long)(param_1 + 1);
      plVar1[2] = (long)param_1;
      *plVar1 = 0;
      lVar5 = param_1[1];
      *plVar1 = lVar5;
      *(long **)(lVar5 + 8) = plVar1;
      param_1[1] = (long)plVar1;
      plVar1 = plVar2;
    } while (plVar2 + -1 != (long *)(param_3 + 0x30));
  }
  FUN_109f68850();
  *param_2 = param_3;
  return;
}



/* Entry: 109f0efd0; end: 109f0f143;  */

void FUN_109f0efd0(ulong param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar9 = *(long *)(param_1 + 200);
  lVar10 = *(long *)(lVar9 + 0x10);
  if (lVar10 == lVar9 + 8) {
    return;
  }
LAB_109f0f010:
  uVar5 = *(ulong *)(lVar10 + -8);
  if ((((uVar5 & 1) == 0) && (param_1 != uVar5 && *(int *)(uVar5 + 0x18) == 0)) &&
     (*(int *)(uVar5 + 0x28) == 0xda)) {
    uVar8 = 0;
    uVar3 = *(uint *)(param_1 + 0x28);
    do {
      bVar4 = (&UNK_110b7854a)[(ulong)uVar3 * 0x68];
      if ((&UNK_110b7854a)[(ulong)uVar3 * 0x68] == 0) {
        bVar4 = *(byte *)(param_1 + 0x4c);
      }
      if (bVar4 <= uVar8) {
        if (lVar9 == *(long *)(uVar5 + 200)) {
          uVar8 = 0;
          goto LAB_109f0f090;
        }
        break;
      }
      pcVar1 = (char *)(param_1 + 0xd0 + uVar8);
      pcVar2 = (char *)(uVar5 + 0xd0 + uVar8);
      uVar8 = uVar8 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  goto LAB_109f0f130;
  while (pcVar1 = (char *)(param_1 + 0x70 + uVar8), pcVar2 = (char *)(uVar5 + 0x70 + uVar8),
        uVar8 = uVar8 + 1, *pcVar1 == *pcVar2) {
LAB_109f0f090:
    bVar4 = (&UNK_110b78548)[(ulong)uVar3 * 0x68];
    if ((&UNK_110b78548)[(ulong)uVar3 * 0x68] == 0) {
      bVar4 = *(byte *)(param_1 + 0x4c);
    }
    if (bVar4 <= uVar8) {
      piVar7 = (int *)((long)param_2 + 4);
      if (*(long *)(param_1 + 0x68) == *(long *)(uVar5 + 0x68)) goto LAB_109f0f124;
      break;
    }
  }
  uVar8 = 0;
  do {
    bVar4 = (&UNK_110b78549)[(ulong)uVar3 * 0x68];
    if ((&UNK_110b78549)[(ulong)uVar3 * 0x68] == 0) {
      bVar4 = *(byte *)(param_1 + 0x4c);
    }
    if (bVar4 <= uVar8) {
      lVar6 = 8;
      if (*(long *)(param_1 + 0x98) != *(long *)(uVar5 + 0x98)) {
        lVar6 = 0;
      }
      goto LAB_109f0f120;
    }
    pcVar1 = (char *)(param_1 + 0xa0 + uVar8);
    pcVar2 = (char *)(uVar5 + 0xa0 + uVar8);
    uVar8 = uVar8 + 1;
  } while (*pcVar1 == *pcVar2);
  lVar6 = 0;
LAB_109f0f120:
  piVar7 = (int *)((long)param_2 + lVar6);
LAB_109f0f124:
  *piVar7 = *piVar7 + 1;
LAB_109f0f130:
  lVar10 = *(long *)(lVar10 + 8);
  if (lVar10 == lVar9 + 8) {
    return;
  }
  goto LAB_109f0f010;
}



/* Entry: 109f0f144; end: 109f0f3ff;  */

undefined8 FUN_109f0f144(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  plVar10 = *(long **)(param_1 + 0x178);
  for (plVar6 = (long *)**(long **)(param_1 + 0x178); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    lVar9 = plVar10[6];
    if (lVar9 != 0) {
      do {
        lVar12 = *(long *)(lVar9 + 0x30);
        if (lVar12 != 0) {
          do {
            for (plVar6 = *(long **)(lVar12 + 0x20); *plVar6 != 0; plVar6 = (long *)*plVar6) {
              if ((((int)plVar6[3] == 1) && ((int)plVar6[5] == 0)) &&
                 (lVar13 = plVar6[7], (*(ulong *)(lVar13 + 0x20) & 0x1fffff) == 0x20000)) {
                lVar3 = lVar13;
                (**(code **)(lVar1 + 8))(lVar13);
                lVar4 = lVar1;
                FUN_109f64fdc(lVar1,lVar3,lVar13);
                if (lVar4 == 0) {
                  lVar3 = lVar13;
                  (**(code **)(lVar1 + 8))(lVar13);
                  func_0x000109f650c0(lVar1,lVar3,lVar13,lVar9);
                }
                else if (*(long *)(lVar4 + 0x10) != lVar9) {
                  *(undefined8 *)(lVar4 + 0x10) = 0;
                }
              }
            }
            FUN_109ecc434();
          } while (lVar12 != 0);
          plVar6 = (long *)*plVar10;
        }
        plVar2 = (long *)*plVar6;
        plVar10 = plVar6;
        while( true ) {
          plVar6 = plVar2;
          if (plVar6 == (long *)0x0) goto LAB_109f0f1a0;
          lVar9 = plVar10[6];
          if (lVar9 != 0) break;
          plVar2 = (long *)*plVar6;
          plVar10 = plVar6;
        }
      } while( true );
    }
    plVar10 = plVar6;
  }
LAB_109f0f1a0:
  plVar10 = *(long **)(param_1 + 8);
  plVar6 = (long *)*plVar10;
  if (plVar6 != (long *)0x0) {
    bVar11 = false;
    plVar2 = (long *)0x0;
    if (*plVar6 != 0) {
      plVar2 = plVar6;
    }
LAB_109f0f1bc:
    plVar6 = plVar2;
    if ((*(byte *)((long)plVar10 + 0x22) >> 1 & 1) == 0) {
LAB_109f0f23c:
      if (plVar6 == (long *)0x0) goto LAB_109f0f340;
    }
    else {
      plVar2 = plVar10;
      (**(code **)(lVar1 + 8))(plVar10);
      lVar9 = lVar1;
      FUN_109f64fdc(lVar1,plVar2,plVar10);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_109f0f23c;
      lVar12 = *plVar10;
      plVar2 = (long *)plVar10[1];
      *(long **)(lVar12 + 8) = plVar2;
      *plVar2 = lVar12;
      plVar10[4] = plVar10[4] & 0xffffffffffe00000U | 0x40000;
      *plVar10 = lVar9 + 0x68;
      plVar10[1] = 0;
      puVar7 = *(undefined8 **)(lVar9 + 0x70);
      plVar10[1] = (long)puVar7;
      *puVar7 = plVar10;
      *(long **)(lVar9 + 0x70) = plVar10;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) & 7;
      if (plVar6 == (long *)0x0) {
        if (lVar1 != 0) {
          FUN_109f65aa4(lVar1 + -0x30);
          FUN_109f65ae0(lVar1 + -0x30);
        }
        goto LAB_109f0f398;
      }
      bVar11 = true;
    }
    plVar8 = (long *)*plVar6;
    plVar2 = (long *)0x0;
    plVar10 = plVar6;
    if ((plVar8 != (long *)0x0) && (plVar2 = (long *)0x0, *plVar8 != 0)) {
      plVar2 = plVar8;
    }
    goto LAB_109f0f1bc;
  }
  if (lVar1 != 0) {
    FUN_109f65aa4(lVar1 + -0x30);
    FUN_109f65ae0(lVar1 + -0x30);
  }
LAB_109f0f378:
  uVar5 = 0;
LAB_109f0f3ac:
  plVar10 = *(long **)(param_1 + 0x178);
  do {
    plVar6 = (long *)*plVar10;
    if (plVar6 == (long *)0x0) {
      return uVar5;
    }
    lVar1 = plVar10[6];
    plVar10 = plVar6;
  } while (lVar1 == 0);
  do {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffff7;
    plVar10 = plVar6;
    do {
      plVar6 = (long *)*plVar10;
      if (plVar6 == (long *)0x0) {
        return uVar5;
      }
      lVar1 = plVar10[6];
      plVar10 = plVar6;
    } while (lVar1 == 0);
  } while( true );
LAB_109f0f340:
  if (lVar1 != 0) {
    FUN_109f65aa4(lVar1 + -0x30);
    FUN_109f65ae0(lVar1 + -0x30);
  }
  if (bVar11) {
LAB_109f0f398:
    FUN_109efa06c(param_1,FUN_109efa1c4);
    uVar5 = 1;
    goto LAB_109f0f3ac;
  }
  goto LAB_109f0f378;
}



/* Entry: 109f0f400; end: 109f0f633;  */

undefined8 FUN_109f0f400(int param_1)

{
  undefined8 uVar1;
  
  if (0x17d < param_1) {
    if (0x194 < param_1) {
      if (param_1 < 0x1a4) {
        if (param_1 < 0x1a0) {
          if ((param_1 == 0x195) || (param_1 == 0x19a)) goto LAB_109f0f4b0;
        }
        else if ((param_1 == 0x1a0) || (param_1 == 0x1a2)) goto LAB_109f0f530;
      }
      else if (param_1 < 0x1a9) {
        if (param_1 == 0x1a4) goto LAB_109f0f4f4;
        if (param_1 == 0x1a7) goto code_r0x000109f0f4ec;
      }
      else {
        if (param_1 == 0x1a9) goto LAB_109f0f574;
        if (param_1 == 0x1c0) goto code_r0x000109f0f548;
      }
      goto LAB_109f0f584;
    }
    if (param_1 < 0x183) {
      if (2 < param_1 - 0x17eU) goto LAB_109f0f584;
    }
    else if (3 < param_1 - 0x183U) {
      if (param_1 == 0x18e) goto LAB_109f0f4f4;
      if (param_1 == 0x193) {
        return 0x4000;
      }
      goto LAB_109f0f584;
    }
    goto LAB_109f0f568;
  }
  uVar1 = 1;
  if (param_1 < 0x97) {
    if (param_1 < 0x74) {
      if (param_1 == 0) {
        return 1;
      }
      if (param_1 != 0x24) {
        if (param_1 == 0x71) {
          return 0x10;
        }
        goto LAB_109f0f584;
      }
    }
    else {
      if (param_1 - 0x83U < 4) {
        return 0x2000;
      }
      if (param_1 == 0x74) {
        return 0x8000;
      }
      if (param_1 != 0x90) goto LAB_109f0f584;
    }
    goto LAB_109f0f568;
  }
  switch(param_1) {
  case 0x113:
  case 0x114:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11e:
  case 0x11f:
  case 0x121:
  case 0x122:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x13a:
  case 0x13c:
  case 0x13d:
  case 0x13f:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14c:
  case 0x151:
LAB_109f0f584:
    uVar1 = 0;
    break;
  case 0x11c:
    uVar1 = 0x80;
    break;
  case 0x11d:
  case 0x150:
    uVar1 = 0x40;
    break;
  case 0x120:
  case 0x146:
  case 0x14a:
  case 0x152:
    uVar1 = 0x200;
    break;
  case 0x123:
  case 0x139:
  case 0x14b:
LAB_109f0f4f4:
    uVar1 = 4;
    break;
  case 0x124:
  case 0x12a:
  case 0x12f:
  case 0x141:
LAB_109f0f4b0:
    uVar1 = 0x20;
    break;
  case 0x137:
  case 0x138:
LAB_109f0f530:
    uVar1 = 0x400;
    break;
  case 0x13b:
    break;
  case 0x13e:
code_r0x000109f0f4ec:
    uVar1 = 0x1000;
    break;
  case 0x140:
LAB_109f0f574:
    uVar1 = 8;
    break;
  case 0x145:
    uVar1 = 0x100;
    break;
  case 0x14d:
  case 0x14e:
code_r0x000109f0f548:
    uVar1 = 0x800;
    break;
  case 0x14f:
    uVar1 = 2;
    break;
  default:
    if (param_1 != 0x97) {
      if (param_1 == 0xd5) {
        return 0x400000;
      }
      goto LAB_109f0f584;
    }
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
LAB_109f0f568:
    uVar1 = 0x800000;
  }
  return uVar1;
}



/* Entry: 109f0f634; end: 109f109d7;  */

undefined8 **
FUN_109f0f634(undefined8 **param_1,undefined8 **param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined8 **ppuVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  undefined8 **ppuVar25;
  uint uVar26;
  long lVar27;
  undefined8 **ppuVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 **ppuVar34;
  int iVar35;
  char *pcVar36;
  uint *puVar37;
  uint uVar38;
  undefined8 **ppuVar39;
  ulong uVar40;
  undefined8 **ppuVar41;
  undefined8 **ppuVar42;
  uint uVar43;
  long *plVar44;
  long lVar45;
  uint uVar46;
  ulong uVar47;
  undefined8 **ppuStack_638;
  undefined8 **ppuStack_600;
  ulong uStack_5f0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 **ppuStack_598;
  undefined8 uStack_590;
  undefined8 **ppuStack_588;
  long lStack_580;
  undefined8 **ppuStack_578;
  uint uStack_570;
  uint uStack_56c;
  undefined8 *puStack_560;
  code *pcStack_558;
  code *pcStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long alStack_520 [7];
  long *plStack_4e8;
  long alStack_120 [16];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar44 = param_1[0x2f];
  for (plVar22 = (long *)*param_1[0x2f]; ppuVar17 = param_3, ppuVar25 = param_4,
      plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    lVar27 = plVar44[6];
    if (lVar27 != 0) {
      uVar23 = 0;
      ppuVar39 = param_4;
      ppuVar28 = param_2;
      do {
        ppuStack_588 = *(undefined8 ***)(*(long *)(lVar27 + 0x20) + 0x18);
        puStack_5a0 = (undefined8 *)0x0;
        ppuStack_598 = (undefined8 **)0x0;
        uStack_590 = 0;
        puVar13 = (undefined8 *)0x30;
        lStack_580 = lVar27;
        _malloc();
        puVar12 = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          puVar13[4] = 0;
          puVar12 = puVar13 + 6;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
        }
        uStack_570 = (uint)ppuVar28;
        uStack_56c = (uint)ppuVar39;
        uStack_548 = 0x300000005;
        uStack_538 = 0x5555555555555556;
        uStack_540 = 0x3333333333333334;
        uStack_530 = 2;
        pcStack_558 = FUN_109f65518;
        pcStack_550 = FUN_109f65668;
        ppuVar18 = (undefined8 **)0x50;
        puStack_5a8 = puVar12;
        ppuStack_578 = param_3;
        FUN_109f658b0();
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[7] = 0;
          puVar12[6] = 0;
          puVar12[9] = 0;
          puVar12[8] = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[1] = 0;
          *puVar12 = 0;
        }
        uStack_528 = 0;
        lVar14 = *(long *)(lVar27 + 0x30);
        puStack_560 = puVar12;
        if (lVar14 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            ppuVar39 = *(undefined8 ***)(lVar14 + 0x20);
            ppuVar28 = (undefined8 **)*ppuVar39;
            if (ppuVar28 == (undefined8 **)0x0) {
              uVar38 = 0;
            }
            else {
              uVar38 = 0;
              puVar12 = ppuStack_588[5];
              ppuVar41 = (undefined8 **)0x0;
              if (*ppuVar28 != (undefined8 *)0x0) {
                ppuVar41 = ppuVar28;
              }
LAB_109f0f7d8:
              ppuVar28 = ppuVar41;
              if (*(int *)(ppuVar39 + 3) == 4) {
                iVar35 = *(int *)(ppuVar39 + 5);
                if (iVar35 - 0xbbU < 4) {
                  if (((*(byte *)((long)puVar12 + 0x6a) & 1) != 0) ||
                     (*(char *)((long)puVar12 + 0x6b) == '\x01')) {
LAB_109f0f828:
                    lVar45 = *ppuVar39[0x13];
                    lVar30 = lVar45;
                    if (*(int *)(lVar45 + 0x18) != 1) {
                      lVar30 = 0;
                    }
                    lVar29 = lVar45;
                    if ((*(uint *)(lVar45 + 0x2c) & uStack_570) != 0) {
                      while (*(int *)(lVar29 + 0x28) != 0) {
                        if (*(int *)(lVar29 + 0x28) == 5) {
                          ppuVar41 = (undefined8 **)0x0;
                          goto LAB_109f0f888;
                        }
                        lVar29 = **(long **)(lVar29 + 0x50);
                        if (*(int *)(lVar29 + 0x18) != 1) {
                          lVar29 = 0;
                        }
                      }
                      ppuVar41 = *(undefined8 ***)(lVar29 + 0x38);
LAB_109f0f888:
                      puStack_5a0 = (undefined8 *)0x2;
                      ppuVar18 = (undefined8 **)(long)*(char *)((long)ppuStack_588 + 0x61);
                      ppuVar34 = ppuVar41;
                      ppuStack_598 = ppuVar39;
                      func_0x000109f0f5ac();
                      puVar13 = ppuVar41[4];
                      uVar26 = (uint)puVar13 & 0x1fffff;
                      uVar43 = 1;
                      if (uVar26 != 4 && uVar26 != 8) {
                        uVar43 = (uint)((ulong)puVar13 >> 0x28) & 1;
                      }
                      ppuVar42 = (undefined8 **)(ulong)uVar43;
                      lVar29 = lVar30;
                      FUN_109ef9754();
                      ppuVar16 = ppuStack_578;
                      if ((int)lVar29 == 0) {
                        FUN_109ef9548(alStack_520,lVar30,0);
                        if ((int)ppuVar34 == 0) {
                          ppuStack_600 = (undefined8 **)0x0;
                          plVar22 = plStack_4e8 + 1;
                        }
                        else {
                          ppuStack_600 = *(undefined8 ***)(plStack_4e8[1] + 0x70);
                          plVar22 = plStack_4e8 + 2;
                        }
                        uStack_5f0 = (ulong)puVar13 >> 0x24 & 3;
                        if (((*(byte *)(*(long *)(*plStack_4e8 + 0x38) + 0x24) >> 6 & 1) == 0) ||
                           (lVar30 = **(long **)(*plVar22 + 0x70), *(int *)(lVar30 + 0x18) != 5)) {
                          ppuVar34 = (undefined8 **)*ppuStack_588;
                          FUN_109f6600c(ppuVar34,0x50,8);
                          if (ppuVar34 != (undefined8 **)0x0) {
                            ppuVar34[7] = (undefined8 *)0x0;
                            ppuVar34[6] = (undefined8 *)0x0;
                            ppuVar34[9] = (undefined8 *)0x0;
                            ppuVar34[8] = (undefined8 *)0x0;
                            ppuVar34[3] = (undefined8 *)0x0;
                            ppuVar34[2] = (undefined8 *)0x0;
                            ppuVar34[5] = (undefined8 *)0x0;
                            ppuVar34[4] = (undefined8 *)0x0;
                            ppuVar34[1] = (undefined8 *)0x0;
                            *ppuVar34 = (undefined8 *)0x0;
                          }
                          *(undefined4 *)(ppuVar34 + 3) = 5;
                          ppuVar34[1] = (undefined8 *)0x0;
                          ppuVar34[2] = (undefined8 *)0x0;
                          ppuVar21 = ppuVar34 + 5;
                          *ppuVar34 = (undefined8 *)0x0;
                          ppuVar25 = (undefined8 **)0x20;
                          FUN_109ecb048(ppuVar34,ppuVar21,1);
                          ppuVar34[9] = (undefined8 *)0x0;
                          ppuVar17 = ppuVar34;
                          FUN_109ecb4f0(puStack_5a0);
                          puStack_5a0 = (undefined8 *)0x3;
                          lVar30 = *plVar22;
                          ppuVar18 = ppuStack_598;
                          while (ppuStack_598 = ppuVar34, lVar30 != 0) {
                            if (*(int *)(lVar30 + 0x28) == 1) {
                              uVar32 = *(ulong *)(lVar30 + 0x30);
                              (*(code *)ppuVar16)(uVar32,ppuVar42);
                              ppuVar25 = &puStack_5a0;
                              FUN_109f1111c(ppuVar25,*(undefined8 *)(*plVar22 + 0x70),
                                            uVar32 & 0xffffffff);
LAB_109f0fc8c:
                              ppuVar34 = &puStack_5a0;
                              ppuVar18 = (undefined8 **)0x11d;
                              FUN_109ece1b0();
                              ppuVar17 = ppuVar21;
                              ppuVar21 = ppuVar34;
                            }
                            else {
                              if (*(int *)(lVar30 + 0x58) == 0) {
                                uVar32 = 0;
                              }
                              else {
                                lVar30 = 0;
                                uVar33 = 0;
                                uVar32 = 0;
                                lVar29 = plVar22[-1];
                                do {
                                  iVar35 = (int)*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar29 + 0x30) + 0x30) +
                                                 lVar30);
                                  ppuVar18 = ppuVar42;
                                  (*(code *)ppuVar16)();
                                  uVar32 = (ulong)(uint)(iVar35 + (int)uVar32);
                                  uVar33 = uVar33 + 1;
                                  lVar30 = lVar30 + 0x30;
                                } while (uVar33 < *(uint *)(*plVar22 + 0x58));
                              }
                              bVar20 = *(byte *)((long)ppuVar21 + 0x1d);
                              uVar26 = (uint)bVar20;
                              uVar33 = 0xffffffff;
                              if (uVar26 != 0x40) {
                                uVar33 = (ulong)~(uint)(-1L << ((ulong)bVar20 & 0x3f));
                              }
                              uVar33 = uVar33 & uVar32;
                              if (uVar33 != 0) {
                                uVar26 = (uVar26 & 0xaaaaaaaa) >> 1 | (uVar26 & 0x55555555) << 1;
                                uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
                                uVar26 = (uint)LZCOUNT((uVar26 >> 4 | (uVar26 & 0xf0f0f0f) << 4) <<
                                                       0x18);
                                if (uVar26 < 5) {
                                  if (uVar26 == 0) {
                                    uVar40 = 0;
                                    uVar33 = 1;
                                    uVar32 = 0;
                                  }
                                  else {
                                    uVar40 = 0;
                                    uVar32 = 0;
                                    if (uVar26 != 3) {
                                      uVar32 = uVar33;
                                    }
                                  }
                                }
                                else {
                                  uVar40 = uVar33 & 0xffff0000;
                                  uVar32 = uVar33;
                                }
                                ppuVar17 = (undefined8 **)*ppuStack_588;
                                FUN_109f6600c(ppuVar17,0x50,8);
                                if (ppuVar17 != (undefined8 **)0x0) {
                                  ppuVar17[7] = (undefined8 *)0x0;
                                  ppuVar17[6] = (undefined8 *)0x0;
                                  ppuVar17[9] = (undefined8 *)0x0;
                                  ppuVar17[8] = (undefined8 *)0x0;
                                  ppuVar17[3] = (undefined8 *)0x0;
                                  ppuVar17[2] = (undefined8 *)0x0;
                                  ppuVar17[5] = (undefined8 *)0x0;
                                  ppuVar17[4] = (undefined8 *)0x0;
                                  ppuVar17[1] = (undefined8 *)0x0;
                                  *ppuVar17 = (undefined8 *)0x0;
                                }
                                *(undefined4 *)(ppuVar17 + 3) = 5;
                                ppuVar17[1] = (undefined8 *)0x0;
                                ppuVar17[2] = (undefined8 *)0x0;
                                *ppuVar17 = (undefined8 *)0x0;
                                ppuVar25 = ppuVar17 + 5;
                                FUN_109ecb048(ppuVar17,ppuVar25,1,(ulong)bVar20);
                                ppuVar17[9] = (undefined8 *)
                                              (uVar32 & 0xff00 | uVar40 | uVar33 & 0xff);
                                FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar17);
                                puStack_5a0 = (undefined8 *)0x3;
                                ppuStack_598 = ppuVar17;
                                goto LAB_109f0fc8c;
                              }
                            }
                            plVar22 = plVar22 + 1;
                            ppuVar34 = ppuStack_598;
                            lVar30 = *plVar22;
                          }
                          FUN_109ef9640(alStack_520);
                        }
                        else {
                          uVar26 = (uint)*(undefined8 *)(lVar30 + 0x48);
                          uVar43 = (*(byte *)(lVar30 + 0x45) & 0xaaaaaaaa) >> 1 |
                                   (*(byte *)(lVar30 + 0x45) & 0x55555555) << 1;
                          uVar43 = (uVar43 & 0xcccccccc) >> 2 | (uVar43 & 0x33333333) << 2;
                          uVar31 = (uint)LZCOUNT((uVar43 >> 4 | (uVar43 & 0xf0f0f0f) << 4) << 0x18);
                          uVar43 = uVar26 & 0xff;
                          if (uVar31 != 3) {
                            uVar43 = uVar26 & 0xffff;
                          }
                          uVar7 = uVar26 & 1;
                          if (uVar31 != 0) {
                            uVar7 = uVar43;
                          }
                          if (uVar31 < 5) {
                            uVar26 = uVar7;
                          }
                          iVar35 = 0xe05dce0;
                          (*(code *)ppuVar16)(&DAT_10e05dce0,ppuVar42);
                          ppuVar34 = (undefined8 **)*ppuStack_588;
                          FUN_109f6600c(ppuVar34,0x50,8);
                          if (ppuVar34 != (undefined8 **)0x0) {
                            ppuVar34[7] = (undefined8 *)0x0;
                            ppuVar34[6] = (undefined8 *)0x0;
                            ppuVar34[9] = (undefined8 *)0x0;
                            ppuVar34[8] = (undefined8 *)0x0;
                            ppuVar34[3] = (undefined8 *)0x0;
                            ppuVar34[2] = (undefined8 *)0x0;
                            ppuVar34[5] = (undefined8 *)0x0;
                            ppuVar34[4] = (undefined8 *)0x0;
                            ppuVar34[1] = (undefined8 *)0x0;
                            *ppuVar34 = (undefined8 *)0x0;
                          }
                          uVar26 = (int)uStack_5f0 + uVar26;
                          uStack_5f0 = (ulong)(uVar26 & 3);
                          *(undefined4 *)(ppuVar34 + 3) = 5;
                          ppuVar34[1] = (undefined8 *)0x0;
                          ppuVar34[2] = (undefined8 *)0x0;
                          *ppuVar34 = (undefined8 *)0x0;
                          ppuVar21 = ppuVar34 + 5;
                          ppuVar25 = (undefined8 **)0x20;
                          FUN_109ecb048(ppuVar34,ppuVar21,1);
                          ppuVar34[9] = (undefined8 *)(ulong)((uVar26 >> 2) * iVar35);
                          ppuVar17 = ppuVar34;
                          FUN_109ecb4f0(puStack_5a0);
                          puStack_5a0 = (undefined8 *)0x3;
                          ppuVar18 = ppuStack_598;
                          ppuStack_598 = ppuVar34;
                        }
                        iVar35 = *(int *)(ppuVar39 + 5);
                        if (iVar35 - 0xbbU < 4) {
                          uVar38 = (uint)((ulong)ppuVar41[4] >> 0x21) & 7;
                          if ((uVar38 == 4) || (uVar38 == 2)) {
                            if (((ulong)ppuVar41[4] & 0xe00000000) == 0x800000000) {
                              ppuStack_600 = (undefined8 **)ppuVar39[0x17];
                            }
                            else {
                              ppuStack_600 = (undefined8 **)0x0;
                            }
LAB_109f0fd28:
                            ppuVar17 = ppuStack_600;
                            ppuVar18 = &puStack_5a8;
                            ppuVar16 = ppuVar39;
                            FUN_109f14d5c();
                            ppuVar25 = ppuVar41;
                            param_5 = ppuVar21;
                            ppuVar34 = ppuStack_598;
                            if (ppuVar16 == (undefined8 **)0x0) goto LAB_109f108d4;
                          }
                          else {
                            ppuVar17 = ppuStack_588;
                            FUN_109ecb0a8(ppuStack_588,
                                          *(undefined4 *)
                                           (&UNK_10e06d910 + (ulong)(iVar35 - 0xbbU) * 4));
                            FUN_109ecb048();
                            uVar26 = (uint)((ulong)ppuVar41[4] >> 0x21) & 7;
                            uVar38 = *(uint *)((long)ppuVar41 + 0x3c);
                            if ((((0xd < uVar38) || ((1 << (ulong)(uVar38 & 0x1f) & 0x2006U) == 0))
                                && (uVar38 != 0xe)) && (uVar26 == 0)) {
                              uVar26 = 1;
                            }
                            *(uint *)((long)ppuVar17 +
                                     (ulong)(byte)(&UNK_110b671b3)
                                                  [(ulong)*(uint *)(ppuVar17 + 5) * 0x68] * 4 + 0x50
                                     ) = uVar26;
                            if (*(int *)(ppuVar39 + 5) - 0xbcU < 3) {
                              puVar13 = ppuVar39[0x17];
                              ppuVar17[0x10] = (undefined8 *)0x0;
                              ppuVar17[0x11] = (undefined8 *)0x0;
                              ppuVar17[0x12] = (undefined8 *)0x0;
                              ppuVar17[0x13] = puVar13;
                            }
                            FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar17);
                            puStack_5a0 = (undefined8 *)0x3;
                            uVar38 = *(uint *)((long)ppuVar41 + 0x3c);
                            ppuVar18 = &puStack_5a8;
                            ppuStack_598 = ppuVar17;
                            func_0x000109f15798(ppuVar18,ppuVar41);
                            if ((*(byte *)(ppuStack_588[5] + 0x19) >> 3 & 1) == 0) {
                              uVar26 = (uint)((ulong)ppuVar41[4] >> 6) & 0x800000;
                            }
                            else {
                              uVar26 = 0;
                            }
                            uVar5 = *(undefined1 *)((long)ppuVar39 + 0x4c);
                            bVar20 = *(byte *)((long)ppuVar39 + 0x4d);
                            ppuVar25 = (undefined8 **)(ulong)bVar20;
                            uVar2 = *(undefined4 *)((long)ppuVar41 + 0x44);
                            ppuVar41 = ppuStack_588;
                            FUN_109ecb0a8(ppuStack_588,0x149);
                            *(undefined1 *)(ppuVar41 + 10) = uVar5;
                            ppuVar16 = ppuVar41 + 6;
                            FUN_109ecb048();
                            ppuVar41[0x10] = (undefined8 *)0x0;
                            ppuVar41[0x11] = (undefined8 *)0x0;
                            ppuVar41[0x12] = (undefined8 *)0x0;
                            ppuVar41[0x13] = ppuVar17 + 6;
                            ppuVar41[0x14] = (undefined8 *)0x0;
                            ppuVar41[0x15] = (undefined8 *)0x0;
                            ppuVar41[0x16] = (undefined8 *)0x0;
                            ppuVar41[0x17] = ppuVar21;
                            lVar30 = (ulong)*(uint *)(ppuVar41 + 5) * 0x68;
                            *(undefined4 *)
                             ((long)ppuVar41 + (ulong)(byte)(&UNK_110b671a9)[lVar30] * 4 + 0x50) =
                                 uVar2;
                            *(int *)((long)ppuVar41 +
                                    (ulong)(byte)(&UNK_110b671b1)[lVar30] * 4 + 0x50) =
                                 (int)uStack_5f0;
                            *(uint *)((long)ppuVar41 +
                                     (ulong)(byte)(&UNK_110b671c1)[lVar30] * 4 + 0x50) =
                                 bVar20 | 0x80;
                            *(uint *)((long)ppuVar41 +
                                     (ulong)(byte)(&UNK_110b671cf)[lVar30] * 4 + 0x50) =
                                 uVar38 & 0x7f | ((uint)ppuVar18 & 0x3f) << 7 | uVar26;
                            ppuVar17 = ppuVar41;
                            FUN_109ecb4f0(puStack_5a0);
                            puStack_5a0 = (undefined8 *)0x3;
                            ppuVar18 = ppuStack_598;
                            ppuStack_598 = ppuVar41;
                          }
                          ppuVar34 = ppuStack_598;
                          if ((undefined8 **)(ppuVar39[8] + -1) != ppuVar39 + 6) {
                            plVar22 = ppuVar39[8];
                            do {
                              lVar30 = *plVar22;
                              plVar1 = (long *)plVar22[1];
                              *(long **)(lVar30 + 8) = plVar1;
                              *plVar1 = lVar30;
                              plVar22[1] = (long)(ppuVar16 + 1);
                              plVar22[2] = (long)ppuVar16;
                              *plVar22 = 0;
                              puVar13 = ppuVar16[1];
                              *plVar22 = (long)puVar13;
                              puVar13[1] = plVar22;
                              ppuVar16[1] = plVar22;
                              plVar22 = plVar1;
                            } while ((undefined8 **)(plVar1 + -1) != ppuVar39 + 6);
                          }
                        }
                        else {
                          if (iVar35 != 0x26f) {
                            if (iVar35 != 0x112) goto LAB_109f108e4;
                            goto LAB_109f0fd28;
                          }
                          bVar20 = *(byte *)(*(long *)(lVar45 + 0x30) + 4);
                          if (bVar20 < 0x10 && (1 << (ulong)(bVar20 & 0x1f) & 0xefe3U) != 0) {
                            ppuVar18 = (undefined8 **)ppuVar39[0x17];
                            cVar3 = *(char *)((long)ppuVar18 + 0x1d);
                            if (cVar3 != '@') goto LAB_109f10828;
LAB_109f0fe7c:
                            if ((uStack_56c & 5) != 0) goto LAB_109f0fe88;
                            ppuVar25 = ppuVar18;
                            if (*(char *)((long)ppuVar39 + 0x4d) == '\x01') goto LAB_109f10874;
LAB_109f10844:
                            func_0x000109ecd718();
                          }
                          else {
                            ppuVar18 = (undefined8 **)ppuVar39[0x17];
                            cVar3 = *(char *)((long)ppuVar18 + 0x1d);
                            if (cVar3 == '@') {
                              if ((uStack_56c >> 1 & 1) == 0) goto LAB_109f0fe7c;
LAB_109f0fe88:
                              ppuStack_638 = ppuVar39 + 0x17;
                              puVar15 = &DAT_10e05df80;
                              ppuVar18 = (undefined8 **)0x0;
                              (*(code *)ppuStack_578)();
                              uVar38 = (uint)*(byte *)(ppuVar39 + 10);
                              ppuVar34 = ppuStack_598;
                              if (*(byte *)(ppuVar39 + 10) != 0) {
                                uVar43 = 0;
                                uVar26 = *(uint *)((long)ppuVar39 +
                                                  (ulong)(byte)(&UNK_110b671aa)
                                                               [(ulong)*(uint *)(ppuVar39 + 5) *
                                                                0x68] * 4 + 0x50);
                                do {
                                  uVar7 = 4 - (int)uStack_5f0;
                                  uVar31 = uVar38 - uVar43;
                                  if (uVar7 >> 1 <= uVar38 - uVar43) {
                                    uVar31 = uVar7 >> 1;
                                  }
                                  if ((uVar26 & (-1 << (ulong)(uVar31 & 0x1f) ^ 0xffffffffU)) != 0)
                                  {
                                    uVar38 = 0xffff;
                                    if (uVar31 + uVar43 != 0x20) {
                                      uVar38 = ~(-1 << (ulong)(uVar31 + uVar43 & 0x1f));
                                    }
                                    uVar7 = 0;
                                    if (uVar43 != 0x20) {
                                      uVar7 = -1 << (ulong)(uVar43 & 0x1f);
                                    }
                                    ppuVar25 = &puStack_5a0;
                                    FUN_109f14260(ppuVar25,*ppuStack_638,uVar38 & uVar7 & 0xffff);
                                    bVar20 = *(byte *)((long)ppuVar25 + 0x1d);
                                    uVar7 = (uint)*(byte *)((long)ppuVar25 + 0x1c) * (uint)bVar20;
                                    uVar38 = (uint)bVar20;
                                    if (0x1f < uVar38) {
                                      uVar38 = 0x20;
                                    }
                                    if (uVar38 <= (uVar7 & 0xffe0)) {
                                      uVar32 = 0;
                                      iVar35 = 0;
                                      uVar33 = 0;
                                      uVar9 = 0;
                                      if (uVar38 != 0) {
                                        uVar9 = (uVar7 & 0xffe0) / uVar38;
                                      }
                                      do {
                                        uVar40 = uVar32 * uVar38;
                                        uVar47 = (ulong)*(byte *)((long)ppuVar25 + 0x1d);
                                        bVar4 = *(byte *)((long)ppuVar25 + 0x1c);
                                        uVar46 = (uint)*(byte *)((long)ppuVar25 + 0x1d);
                                        if ((uVar33 & 0xffffffff) <= uVar40) {
                                          uVar33 = uVar33 & 0xffffffff;
                                          do {
                                            uVar33 = uVar33 + bVar4 * uVar47;
                                          } while (uVar33 <= uVar40);
                                          iVar35 = (int)uVar33 - bVar4 * uVar46;
                                        }
                                        uVar8 = (int)uVar40 - iVar35;
                                        uVar10 = 0;
                                        if (uVar46 != 0) {
                                          uVar10 = uVar8 / uVar46;
                                        }
                                        if ((bVar4 != 1) ||
                                           (ppuVar17 = ppuVar25, (uVar10 & 0xff) != 0)) {
                                          ppuVar18 = ppuStack_588;
                                          FUN_109ecaef8(ppuStack_588,0x154);
                                          ppuVar17 = ppuVar18 + 6;
                                          FUN_109ecb048();
                                          *(ushort *)((long)ppuVar18 + 0x2c) =
                                               *(ushort *)((long)ppuVar18 + 0x2c) & 0xf000 |
                                               (*(ushort *)((long)ppuVar18 + 0x2c) & 0xf006 |
                                               (ushort)(byte)uStack_590) & 7 |
                                               (uStack_590._4_2_ & 0x1ff) << 3;
                                          ppuVar18[10] = (undefined8 *)0x0;
                                          ppuVar18[0xb] = (undefined8 *)0x0;
                                          ppuVar18[0xc] = (undefined8 *)0x0;
                                          ppuVar18[0xd] = ppuVar25;
                                          *(char *)(ppuVar18 + 0xe) = (char)uVar10;
                                          *(undefined8 *)((long)ppuVar18 + 0x71) = 0;
                                          ppuVar18[0xf] = (undefined8 *)0x0;
                                          FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar18);
                                          puStack_5a0 = (undefined8 *)0x3;
                                          uVar47 = (ulong)*(byte *)((long)ppuVar25 + 0x1d);
                                          ppuStack_598 = ppuVar18;
                                        }
                                        ppuVar18 = ppuVar17;
                                        if (uVar38 < (uint)uVar47) {
                                          bVar4 = *(byte *)((long)ppuVar17 + 0x1d);
                                          if (bVar4 == 0x20) {
                                            if (uVar38 == 8) {
                                              uVar19 = 0x1af;
                                            }
                                            else {
                                              if (uVar38 == 0x20) goto LAB_109f101e8;
                                              if (uVar38 != 0x10) goto LAB_109f100bc;
                                              uVar19 = 0x1ac;
                                            }
LAB_109f101dc:
                                            ppuVar18 = &puStack_5a0;
                                            FUN_109ece168(ppuVar18,uVar19,ppuVar17);
                                            ppuVar17 = ppuVar18;
                                          }
                                          else {
                                            if (bVar4 == 0x40) {
                                              if (uVar38 == 0x10) {
                                                uVar19 = 0x1b3;
                                              }
                                              else {
                                                if (uVar38 != 0x20) goto LAB_109f100bc;
                                                uVar19 = 0x1b0;
                                              }
                                              goto LAB_109f101dc;
                                            }
LAB_109f100bc:
                                            uVar11 = 0;
                                            if (uVar38 != 0) {
                                              uVar11 = bVar4 / uVar38;
                                            }
                                            uVar40 = (ulong)uVar11;
                                            if (uVar38 <= bVar4) {
                                              puVar13 = (undefined8 *)0x0;
                                              uVar47 = 0;
                                              do {
                                                ppuVar18 = ppuVar17;
                                                if (uVar47 != 0) {
                                                  ppuVar34 = (undefined8 **)*ppuStack_588;
                                                  FUN_109f6600c(ppuVar34,0x50,8);
                                                  if (ppuVar34 != (undefined8 **)0x0) {
                                                    ppuVar34[7] = (undefined8 *)0x0;
                                                    ppuVar34[6] = (undefined8 *)0x0;
                                                    ppuVar34[9] = (undefined8 *)0x0;
                                                    ppuVar34[8] = (undefined8 *)0x0;
                                                    ppuVar34[3] = (undefined8 *)0x0;
                                                    ppuVar34[2] = (undefined8 *)0x0;
                                                    ppuVar34[5] = (undefined8 *)0x0;
                                                    ppuVar34[4] = (undefined8 *)0x0;
                                                    ppuVar34[1] = (undefined8 *)0x0;
                                                    *ppuVar34 = (undefined8 *)0x0;
                                                  }
                                                  *(undefined4 *)(ppuVar34 + 3) = 5;
                                                  ppuVar34[1] = (undefined8 *)0x0;
                                                  ppuVar34[2] = (undefined8 *)0x0;
                                                  *ppuVar34 = (undefined8 *)0x0;
                                                  FUN_109ecb048(ppuVar34,ppuVar34 + 5,1,0x20);
                                                  ppuVar34[9] = puVar13;
                                                  FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar34);
                                                  puStack_5a0 = (undefined8 *)0x3;
                                                  ppuVar18 = &puStack_5a0;
                                                  ppuStack_598 = ppuVar34;
                                                  FUN_109ece1b0(ppuVar18,0x1c0,ppuVar17,ppuVar34 + 5
                                                               );
                                                }
                                                ppuVar34 = &puStack_5a0;
                                                FUN_109ece954(ppuVar34,ppuVar18,4,uVar38 | 4,0);
                                                alStack_120[uVar47] = (long)ppuVar34;
                                                uVar47 = uVar47 + 1;
                                                puVar13 = (undefined8 *)
                                                          ((long)puVar13 + (ulong)uVar38);
                                              } while (uVar47 < uVar40);
                                            }
                                            func_0x000109ecd728(uVar40);
                                            ppuVar17 = &puStack_5a0;
                                            FUN_109ece300(ppuVar17,uVar40,alStack_120);
                                          }
LAB_109f101e8:
                                          uVar8 = uVar8 - uVar10 * uVar46;
                                          if ((uVar38 <= uVar8) ||
                                             (ppuVar18 = ppuVar17,
                                             *(char *)((long)ppuVar17 + 0x1c) != '\x01')) {
                                            uVar5 = 0;
                                            if (uVar38 != 0) {
                                              uVar5 = (undefined1)(uVar8 / uVar38);
                                            }
                                            ppuVar34 = ppuStack_588;
                                            FUN_109ecaef8(ppuStack_588,0x154);
                                            ppuVar18 = ppuVar34 + 6;
                                            FUN_109ecb048();
                                            *(ushort *)((long)ppuVar34 + 0x2c) =
                                                 *(ushort *)((long)ppuVar34 + 0x2c) & 0xf000 |
                                                 (*(ushort *)((long)ppuVar34 + 0x2c) & 0xf006 |
                                                 (ushort)(byte)uStack_590) & 7 |
                                                 (uStack_590._4_2_ & 0x1ff) << 3;
                                            ppuVar34[10] = (undefined8 *)0x0;
                                            ppuVar34[0xb] = (undefined8 *)0x0;
                                            ppuVar34[0xc] = (undefined8 *)0x0;
                                            ppuVar34[0xd] = ppuVar17;
                                            *(undefined1 *)(ppuVar34 + 0xe) = uVar5;
                                            *(undefined8 *)((long)ppuVar34 + 0x71) = 0;
                                            ppuVar34[0xf] = (undefined8 *)0x0;
                                            FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar34);
                                            puStack_5a0 = (undefined8 *)0x3;
                                            ppuStack_598 = ppuVar34;
                                          }
                                        }
                                        alStack_520[uVar32] = (long)ppuVar18;
                                        uVar32 = uVar32 + 1;
                                      } while (uVar32 < uVar9);
                                    }
                                    uVar32 = (ulong)(uVar7 >> 5);
                                    if (bVar20 < 0x20) {
                                      if (0x1f < uVar7) {
                                        uVar7 = 0;
                                        if (uVar38 != 0) {
                                          uVar7 = 0x20 / uVar38;
                                        }
                                        uVar47 = (ulong)uVar7;
                                        uVar40 = uVar47;
                                        func_0x000109ecd728(uVar47);
                                        uVar33 = 0;
                                        do {
                                          ppuVar25 = &puStack_5a0;
                                          FUN_109ece300(ppuVar25,uVar40,
                                                        alStack_520 + uVar33 * uVar47);
                                          cVar3 = *(char *)((long)ppuVar25 + 0x1d);
                                          ppuVar17 = ppuVar25;
                                          if (cVar3 != ' ') {
                                            if (cVar3 == '\x10') {
                                              uVar19 = 0x15c;
                                            }
                                            else {
                                              if (cVar3 != '\b') {
                                                ppuVar18 = (undefined8 **)*ppuStack_588;
                                                FUN_109f6600c(ppuVar18,0x50,8);
                                                if (ppuVar18 != (undefined8 **)0x0) {
                                                  ppuVar18[7] = (undefined8 *)0x0;
                                                  ppuVar18[6] = (undefined8 *)0x0;
                                                  ppuVar18[9] = (undefined8 *)0x0;
                                                  ppuVar18[8] = (undefined8 *)0x0;
                                                  ppuVar18[3] = (undefined8 *)0x0;
                                                  ppuVar18[2] = (undefined8 *)0x0;
                                                  ppuVar18[5] = (undefined8 *)0x0;
                                                  ppuVar18[4] = (undefined8 *)0x0;
                                                  ppuVar18[1] = (undefined8 *)0x0;
                                                  *ppuVar18 = (undefined8 *)0x0;
                                                }
                                                *(undefined4 *)(ppuVar18 + 3) = 5;
                                                ppuVar18[1] = (undefined8 *)0x0;
                                                ppuVar18[2] = (undefined8 *)0x0;
                                                ppuVar17 = ppuVar18 + 5;
                                                *ppuVar18 = (undefined8 *)0x0;
                                                FUN_109ecb048(ppuVar18,ppuVar17,1,0x20);
                                                ppuVar18[9] = (undefined8 *)0x0;
                                                FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar18);
                                                puStack_5a0 = (undefined8 *)0x3;
                                                bVar20 = *(byte *)((long)ppuVar25 + 0x1c);
                                                ppuStack_598 = ppuVar18;
                                                if (bVar20 != 0) {
                                                  uVar38 = 0;
                                                  do {
                                                    if ((bVar20 != 1) ||
                                                       (ppuVar18 = ppuVar25, uVar38 != 0)) {
                                                      ppuVar34 = ppuStack_588;
                                                      FUN_109ecaef8(ppuStack_588,0x154);
                                                      ppuVar18 = ppuVar34 + 6;
                                                      FUN_109ecb048();
                                                      *(ushort *)((long)ppuVar34 + 0x2c) =
                                                           *(ushort *)((long)ppuVar34 + 0x2c) &
                                                           0xf000 | (*(ushort *)
                                                                      ((long)ppuVar34 + 0x2c) &
                                                                     0xf006 | (ushort)(byte)
                                                  uStack_590) & 7 | (uStack_590._4_2_ & 0x1ff) << 3;
                                                  ppuVar34[10] = (undefined8 *)0x0;
                                                  ppuVar34[0xb] = (undefined8 *)0x0;
                                                  ppuVar34[0xc] = (undefined8 *)0x0;
                                                  ppuVar34[0xd] = ppuVar25;
                                                  *(char *)(ppuVar34 + 0xe) = (char)uVar38;
                                                  *(undefined8 *)((long)ppuVar34 + 0x71) = 0;
                                                  ppuVar34[0xf] = (undefined8 *)0x0;
                                                  FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar34);
                                                  puStack_5a0 = (undefined8 *)0x3;
                                                  ppuStack_598 = ppuVar34;
                                                  }
                                                  ppuVar34 = &puStack_5a0;
                                                  FUN_109ece954(ppuVar34,ppuVar18,4,0x24,0);
                                                  bVar20 = *(byte *)((long)ppuVar25 + 0x1d);
                                                  ppuVar18 = (undefined8 **)*ppuStack_588;
                                                  FUN_109f6600c(ppuVar18,0x50,8);
                                                  if (ppuVar18 != (undefined8 **)0x0) {
                                                    ppuVar18[7] = (undefined8 *)0x0;
                                                    ppuVar18[6] = (undefined8 *)0x0;
                                                    ppuVar18[9] = (undefined8 *)0x0;
                                                    ppuVar18[8] = (undefined8 *)0x0;
                                                    ppuVar18[3] = (undefined8 *)0x0;
                                                    ppuVar18[2] = (undefined8 *)0x0;
                                                    ppuVar18[5] = (undefined8 *)0x0;
                                                    ppuVar18[4] = (undefined8 *)0x0;
                                                    ppuVar18[1] = (undefined8 *)0x0;
                                                    *ppuVar18 = (undefined8 *)0x0;
                                                  }
                                                  *(undefined4 *)(ppuVar18 + 3) = 5;
                                                  ppuVar18[1] = (undefined8 *)0x0;
                                                  ppuVar18[2] = (undefined8 *)0x0;
                                                  *ppuVar18 = (undefined8 *)0x0;
                                                  FUN_109ecb048(ppuVar18,ppuVar18 + 5,1,0x20);
                                                  ppuVar18[9] = (undefined8 *)
                                                                (ulong)(uVar38 * bVar20);
                                                  FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar18);
                                                  puStack_5a0 = (undefined8 *)0x3;
                                                  ppuVar16 = &puStack_5a0;
                                                  ppuStack_598 = ppuVar18;
                                                  FUN_109ece1b0(ppuVar16,0x14d,ppuVar34,ppuVar18 + 5
                                                               );
                                                  ppuVar18 = &puStack_5a0;
                                                  FUN_109ece1b0(ppuVar18,0x14a,ppuVar17,ppuVar16);
                                                  uVar38 = uVar38 + 1;
                                                  bVar20 = *(byte *)((long)ppuVar25 + 0x1c);
                                                  ppuVar17 = ppuVar18;
                                                  } while (uVar38 < bVar20);
                                                }
                                                goto LAB_109f104f0;
                                              }
                                              uVar19 = 0x15e;
                                            }
                                            ppuVar17 = &puStack_5a0;
                                            FUN_109ece168(ppuVar17,uVar19,ppuVar25);
                                          }
LAB_109f104f0:
                                          alStack_120[uVar33] = (long)ppuVar17;
                                          uVar33 = uVar33 + 1;
                                        } while (uVar33 != uVar32);
                                      }
                                      func_0x000109ecd728(uVar32);
                                      plVar22 = alStack_120;
                                    }
                                    else {
                                      func_0x000109ecd728(uVar32);
                                      plVar22 = alStack_520;
                                    }
                                    ppuVar18 = &puStack_5a0;
                                    FUN_109ece300(ppuVar18,uVar32,plVar22);
                                    ppuVar17 = ppuStack_600;
                                    ppuVar25 = ppuVar41;
                                    param_5 = ppuVar21;
                                    FUN_109f15850(&puStack_5a8);
                                  }
                                  uVar43 = uVar31 + uVar43;
                                  bVar20 = *(byte *)((long)ppuVar21 + 0x1d);
                                  uVar38 = (uint)bVar20;
                                  uVar32 = 0xffffffff;
                                  if (uVar38 != 0x40) {
                                    uVar32 = (ulong)~(uint)(-1L << ((ulong)bVar20 & 0x3f));
                                  }
                                  uVar32 = uVar32 & (ulong)puVar15 & 0xffffffff;
                                  ppuVar34 = ppuVar21;
                                  if (uVar32 != 0) {
                                    uVar38 = (uVar38 & 0xaaaaaaaa) >> 1 | (uVar38 & 0x55555555) << 1
                                    ;
                                    uVar38 = (uVar38 & 0xcccccccc) >> 2 | (uVar38 & 0x33333333) << 2
                                    ;
                                    uVar38 = (uint)LZCOUNT((uVar38 >> 4 | (uVar38 & 0xf0f0f0f) << 4)
                                                           << 0x18);
                                    if (uVar38 < 5) {
                                      if (uVar38 == 0) {
                                        uVar40 = 0;
                                        uVar32 = 1;
                                        uVar33 = 0;
                                      }
                                      else {
                                        uVar40 = 0;
                                        uVar33 = 0;
                                        if (uVar38 != 3) {
                                          uVar33 = uVar32;
                                        }
                                      }
                                    }
                                    else {
                                      uVar40 = uVar32 & 0xffff0000;
                                      uVar33 = uVar32;
                                    }
                                    ppuVar17 = (undefined8 **)*ppuStack_588;
                                    FUN_109f6600c(ppuVar17,0x50,8);
                                    if (ppuVar17 != (undefined8 **)0x0) {
                                      ppuVar17[7] = (undefined8 *)0x0;
                                      ppuVar17[6] = (undefined8 *)0x0;
                                      ppuVar17[9] = (undefined8 *)0x0;
                                      ppuVar17[8] = (undefined8 *)0x0;
                                      ppuVar17[3] = (undefined8 *)0x0;
                                      ppuVar17[2] = (undefined8 *)0x0;
                                      ppuVar17[5] = (undefined8 *)0x0;
                                      ppuVar17[4] = (undefined8 *)0x0;
                                      ppuVar17[1] = (undefined8 *)0x0;
                                      *ppuVar17 = (undefined8 *)0x0;
                                    }
                                    *(undefined4 *)(ppuVar17 + 3) = 5;
                                    ppuVar17[1] = (undefined8 *)0x0;
                                    ppuVar17[2] = (undefined8 *)0x0;
                                    *ppuVar17 = (undefined8 *)0x0;
                                    FUN_109ecb048(ppuVar17,ppuVar17 + 5,1,(ulong)bVar20);
                                    ppuVar17[9] = (undefined8 *)
                                                  (uVar33 & 0xff00 | uVar40 | uVar32 & 0xff);
                                    FUN_109ecb4f0(puStack_5a0,ppuStack_598,ppuVar17);
                                    puStack_5a0 = (undefined8 *)0x3;
                                    ppuVar34 = &puStack_5a0;
                                    ppuVar25 = ppuVar17 + 5;
                                    ppuVar18 = (undefined8 **)0x11d;
                                    ppuStack_598 = ppuVar17;
                                    FUN_109ece1b0();
                                    ppuVar17 = ppuVar21;
                                  }
                                  uStack_5f0 = 0;
                                  uVar26 = (uVar26 & 0xffff) >> (ulong)(uVar31 & 0x1f);
                                  uVar38 = (uint)*(byte *)(ppuVar39 + 10);
                                  ppuVar21 = ppuVar34;
                                  ppuVar34 = ppuStack_598;
                                } while (uVar43 < uVar38);
                              }
                              goto LAB_109f108d4;
                            }
LAB_109f10828:
                            if (*(char *)((long)ppuVar39 + 0x4d) != '\x01') goto LAB_109f10844;
                            ppuVar25 = ppuVar18;
                            if (cVar3 != ' ') {
LAB_109f10874:
                              ppuVar18 = &puStack_5a0;
                              FUN_109ece168(ppuVar18,0x1c,ppuVar25);
                            }
                          }
                          FUN_109f15850(&puStack_5a8);
                          ppuVar17 = ppuStack_600;
                          ppuVar25 = ppuVar41;
                          param_5 = ppuVar21;
                          ppuVar34 = ppuStack_598;
                        }
                      }
                      else {
                        ppuVar34 = ppuStack_598;
                        if (*(int *)(ppuVar39 + 5) != 0x26f) {
                          ppuVar34 = ppuStack_588;
                          FUN_109ecafe4(ppuStack_588,*(undefined1 *)((long)ppuVar39 + 0x4c),
                                        *(undefined1 *)((long)ppuVar39 + 0x4d));
                          ppuVar17 = ppuVar34;
                          FUN_109ecb4f0(puStack_5a0);
                          puStack_5a0 = (undefined8 *)0x3;
                          ppuVar18 = ppuStack_598;
                          if ((undefined8 **)(ppuVar39[8] + -1) != ppuVar39 + 6) {
                            ppuVar41 = ppuVar34 + 6;
                            plVar22 = ppuVar39[8];
                            do {
                              lVar30 = *plVar22;
                              plVar1 = (long *)plVar22[1];
                              *(long **)(lVar30 + 8) = plVar1;
                              *plVar1 = lVar30;
                              plVar22[1] = (long)ppuVar41;
                              plVar22[2] = (long)(ppuVar34 + 5);
                              *plVar22 = 0;
                              puVar13 = *ppuVar41;
                              *plVar22 = (long)puVar13;
                              puVar13[1] = plVar22;
                              *ppuVar41 = plVar22;
                              plVar22 = plVar1;
                            } while ((undefined8 **)(plVar1 + -1) != ppuVar39 + 6);
                          }
                        }
                      }
LAB_109f108d4:
                      ppuStack_598 = ppuVar34;
                      FUN_109ecb9c0(ppuVar39);
                      uVar38 = 1;
                    }
                  }
                }
                else if ((iVar35 == 0x112) || (iVar35 == 0x26f)) goto LAB_109f0f828;
              }
LAB_109f108e4:
              if (ppuVar28 != (undefined8 **)0x0) {
                ppuVar34 = (undefined8 **)*ppuVar28;
                ppuVar41 = (undefined8 **)0x0;
                ppuVar39 = ppuVar28;
                if ((ppuVar34 != (undefined8 **)0x0) &&
                   (ppuVar41 = (undefined8 **)0x0, *ppuVar34 != (undefined8 *)0x0)) {
                  ppuVar41 = ppuVar34;
                }
                goto LAB_109f0f7d8;
              }
            }
            uVar24 = uVar24 | uVar38;
            FUN_109ecc434();
          } while (lVar14 != 0);
        }
        param_1 = (undefined8 **)0x0;
        if (puStack_5a8 != (undefined8 *)0x0) {
          param_1 = (undefined8 **)(puStack_5a8 + -6);
          FUN_109f65aa4(param_1);
          FUN_109f65ae0();
        }
        *(undefined4 *)(lVar27 + 0x84) = 0;
        uVar23 = uVar23 | uVar24;
        plVar44 = (long *)*plVar44;
        ppuVar39 = (undefined8 **)((ulong)param_4 & 0xffffffff);
        ppuVar28 = (undefined8 **)((ulong)param_2 & 0xffffffff);
        plVar22 = (long *)*plVar44;
        while( true ) {
          if (plVar22 == (long *)0x0) goto LAB_109f1098c;
          lVar27 = plVar44[6];
          if (lVar27 != 0) break;
          plVar44 = plVar22;
          plVar22 = (long *)*plVar22;
        }
      } while( true );
    }
    plVar44 = plVar22;
  }
  uVar23 = 0;
  ppuVar18 = param_2;
LAB_109f1098c:
  uVar24 = (uint)ppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return (undefined8 **)(ulong)uVar23;
  }
  ___stack_chk_fail();
  ppuVar17 = param_1;
  if ((int)uVar24 < 5) {
    if (1 < uVar24) {
      if (1 < uVar24 - 3) {
        ppuVar25 = ppuVar18;
        if (*(char *)((long)ppuVar18 + 0x1c) != '\x01') {
          puVar12 = param_1[3];
          FUN_109ecaef8(puVar12,0x154);
          ppuVar25 = (undefined8 **)(puVar12 + 6);
          FUN_109ecb048();
          uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)((long)puVar12 + 0x2c) = uVar6;
          *(ushort *)((long)puVar12 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
          puVar12[10] = 0;
          puVar12[0xb] = 0;
          puVar12[0xc] = 0;
          puVar12[0xd] = ppuVar18;
          puVar12[0xe] = 0;
          puVar12[0xf] = 0;
          FUN_109ecb4f0(*param_1,param_1[1],puVar12);
          *param_1 = (undefined8 *)0x3;
          param_1[1] = puVar12;
        }
        puVar12 = param_1[3];
        FUN_109ecaef8(puVar12,0x154);
        FUN_109ecb048();
        uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)((long)puVar12 + 0x2c) = uVar6;
        *(ushort *)((long)puVar12 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = ppuVar18;
        *(undefined1 *)(puVar12 + 0xe) = 1;
        *(undefined8 *)((long)puVar12 + 0x71) = 0;
        puVar12[0xf] = 0;
        FUN_109ecb4f0(*param_1,param_1[1],puVar12);
        *param_1 = (undefined8 *)0x3;
        param_1[1] = puVar12;
        ppuVar18 = param_1;
        FUN_109ece1b0(param_1,0x11d,ppuVar25,param_5);
        ppuVar39 = param_1;
        FUN_109ece1b0(param_1,0x19a,ppuVar18,ppuVar25);
        ppuVar25 = param_1;
        FUN_109ece168(param_1,0x23,ppuVar39);
        FUN_109ece1b0(param_1,0x11d,puVar12 + 6,ppuVar25);
        uVar19 = 0x1c5;
        goto code_r0x000109ece1b0;
      }
      puVar12 = param_1[3];
      FUN_109ecaef8(puVar12,0x154);
      FUN_109ecb048();
      uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)((long)puVar12 + 0x2c) = uVar6;
      *(ushort *)((long)puVar12 + 0x2c) =
           (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = ppuVar18;
      *(undefined1 *)(puVar12 + 0xe) = 3;
      *(undefined8 *)((long)puVar12 + 0x71) = 0;
      puVar12[0xf] = 0;
      FUN_109ecb4f0(*param_1,param_1[1],puVar12);
      *param_1 = (undefined8 *)0x3;
      param_1[1] = puVar12;
      ppuVar25 = param_1;
      FUN_109ece1b0(param_1,0x11d,puVar12 + 6,param_5);
      uVar32 = (ulong)*(byte *)((long)ppuVar18 + 0x1c);
      func_0x000109ecd728(uVar32);
      puVar12 = param_1[3];
      FUN_109ecaef8(puVar12,uVar32);
      if (*(char *)((long)ppuVar18 + 0x1c) != '\0') {
        uVar32 = 0;
        puVar13 = puVar12 + 0xe;
        do {
          if (uVar32 == 3) {
            puVar12[0x1c] = 0;
            puVar12[0x1d] = 0;
            puVar12[0x1e] = 0;
            puVar12[0x1f] = ppuVar25;
            *(undefined1 *)(puVar12 + 0x20) = 0;
          }
          else {
            puVar13[-4] = 0;
            puVar13[-3] = 0;
            puVar13[-2] = 0;
            puVar13[-1] = ppuVar18;
            *(char *)puVar13 = (char)uVar32;
          }
          uVar32 = uVar32 + 1;
          puVar13 = puVar13 + 6;
        } while (uVar32 < *(byte *)((long)ppuVar18 + 0x1c));
      }
      goto SUB_109ecdf34;
    }
LAB_109f10e1c:
    uVar19 = 0x11d;
    ppuVar17 = param_5;
code_r0x000109ece1b0:
    puVar12 = param_1[3];
    FUN_109ecaef8(puVar12,uVar19);
    if (puVar12 == (undefined8 *)0x0) {
      return (undefined8 **)0x0;
    }
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = ppuVar18;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = ppuVar17;
  }
  else {
    if (7 < (int)uVar24) {
      if (uVar24 == 8) {
        if (((ulong)ppuVar25 & 0xfff1ffff) == 0) {
          ppuVar25 = param_1;
          FUN_109ece168(param_1,0x1b1,ppuVar18);
          FUN_109ece168(param_1,0x1b2,ppuVar18);
          ppuVar39 = param_5;
          if (*(char *)((long)param_5 + 0x1d) != ' ') {
            ppuVar39 = param_1;
            FUN_109ece168(param_1,0x184,param_5);
          }
          ppuVar18 = param_1;
          FUN_109ece1b0(param_1,0x11d,ppuVar25,ppuVar39);
          uVar19 = 0x163;
          goto code_r0x000109ece1b0;
        }
      }
      else if (uVar24 == 10) {
        ppuVar25 = ppuVar18;
        if (*(char *)((long)ppuVar18 + 0x1d) != ' ') {
          ppuVar25 = param_1;
          FUN_109ece168(param_1,0x184,ppuVar18);
        }
        FUN_109ece1b0(param_1,0x11d,ppuVar25,param_5);
        if (*(char *)((long)ppuVar17 + 0x1d) == '@') {
          return ppuVar17;
        }
        puVar12 = param_1[3];
        FUN_109ecaef8(puVar12,0x185);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 **)0x0;
        }
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = ppuVar17;
        goto SUB_109ecdf34;
      }
      goto LAB_109f10e1c;
    }
    if (uVar24 != 5) {
      if (uVar24 != 6) {
        puVar12 = param_1[3];
        FUN_109ecaef8(puVar12,0x154);
        FUN_109ecb048();
        uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)((long)puVar12 + 0x2c) = uVar6;
        *(ushort *)((long)puVar12 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = ppuVar18;
        *(undefined1 *)(puVar12 + 0xe) = 2;
        *(undefined8 *)((long)puVar12 + 0x71) = 0;
        puVar12[0xf] = 0;
        FUN_109ecb4f0(*param_1,param_1[1],puVar12);
        *param_1 = (undefined8 *)0x3;
        param_1[1] = puVar12;
        ppuVar25 = param_1;
        FUN_109ece1b0(param_1,0x11d,puVar12 + 6,param_5);
        uVar32 = (ulong)*(byte *)((long)ppuVar18 + 0x1c);
        func_0x000109ecd728(uVar32);
        puVar12 = param_1[3];
        FUN_109ecaef8(puVar12,uVar32);
        if (*(char *)((long)ppuVar18 + 0x1c) != '\0') {
          uVar32 = 0;
          puVar13 = puVar12 + 0xe;
          do {
            if (uVar32 == 2) {
              puVar12[0x16] = 0;
              puVar12[0x17] = 0;
              puVar12[0x18] = 0;
              puVar12[0x19] = ppuVar25;
              *(undefined1 *)(puVar12 + 0x1a) = 0;
            }
            else {
              puVar13[-4] = 0;
              puVar13[-3] = 0;
              puVar13[-2] = 0;
              puVar13[-1] = ppuVar18;
              *(char *)puVar13 = (char)uVar32;
            }
            uVar32 = uVar32 + 1;
            puVar13 = puVar13 + 6;
          } while (uVar32 < *(byte *)((long)ppuVar18 + 0x1c));
        }
        goto SUB_109ecdf34;
      }
      ppuVar25 = param_1;
      FUN_109ece168(param_1,0x1b1,ppuVar18);
      ppuVar39 = param_1;
      FUN_109ece1b0(param_1,0x11d,ppuVar25,param_5);
      FUN_109ece168(param_1,0x1b2,ppuVar18);
      uVar19 = 0x163;
      ppuVar18 = ppuVar39;
      goto code_r0x000109ece1b0;
    }
    puVar12 = param_1[3];
    FUN_109ecaef8(puVar12,0x154);
    FUN_109ecb048();
    uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)((long)puVar12 + 0x2c) = uVar6;
    *(ushort *)((long)puVar12 + 0x2c) =
         (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = ppuVar18;
    *(undefined1 *)(puVar12 + 0xe) = 1;
    *(undefined8 *)((long)puVar12 + 0x71) = 0;
    puVar12[0xf] = 0;
    FUN_109ecb4f0(*param_1,param_1[1],puVar12);
    *param_1 = (undefined8 *)0x3;
    param_1[1] = puVar12;
    ppuVar25 = param_1;
    FUN_109ece1b0(param_1,0x11d,puVar12 + 6,param_5);
    uVar32 = (ulong)*(byte *)((long)ppuVar18 + 0x1c);
    func_0x000109ecd728(uVar32);
    puVar12 = param_1[3];
    FUN_109ecaef8(puVar12,uVar32);
    if (*(char *)((long)ppuVar18 + 0x1c) != '\0') {
      uVar32 = 0;
      puVar13 = puVar12 + 0xe;
      do {
        if (uVar32 == 1) {
          puVar12[0x10] = 0;
          puVar12[0x11] = 0;
          puVar12[0x12] = 0;
          puVar12[0x13] = ppuVar25;
          *(undefined1 *)(puVar12 + 0x14) = 0;
        }
        else {
          puVar13[-4] = 0;
          puVar13[-3] = 0;
          puVar13[-2] = 0;
          puVar13[-1] = ppuVar18;
          *(char *)puVar13 = (char)uVar32;
        }
        uVar32 = uVar32 + 1;
        puVar13 = puVar13 + 6;
      } while (uVar32 < *(byte *)((long)ppuVar18 + 0x1c));
    }
  }
SUB_109ecdf34:
  lVar27 = (ulong)*(uint *)(puVar12 + 5) * 0x68;
  uVar6 = *(ushort *)((long)puVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)((long)puVar12 + 0x2c) = uVar6;
  *(ushort *)((long)puVar12 + 0x2c) =
       (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar6 & 0xf007;
  bVar20 = (&UNK_110b78541)[lVar27];
  if (bVar20 == 0) {
    uVar32 = (ulong)(byte)(&UNK_110b78540)[lVar27];
    if ((&UNK_110b78540)[lVar27] == 0) {
      bVar20 = 0;
      uVar23 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar27) & 0x79) != 0) {
        uVar23 = *(uint *)(&UNK_110b78544 + lVar27) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar20 = 0;
    plVar44 = puVar12 + 0xd;
    pcVar36 = &UNK_110b78548 + lVar27;
    uVar33 = uVar32;
    do {
      if ((*pcVar36 == '\0') && (bVar20 <= *(byte *)(*plVar44 + 0x1c))) {
        bVar20 = *(byte *)(*plVar44 + 0x1c);
      }
      plVar44 = plVar44 + 6;
      uVar33 = uVar33 - 1;
      pcVar36 = pcVar36 + 1;
    } while (uVar33 != 0);
  }
  else {
    uVar32 = (ulong)(byte)(&UNK_110b78540)[lVar27];
  }
  uVar24 = *(uint *)(&UNK_110b78544 + lVar27) & 0x79;
  if (uVar24 == 0) {
    if ((int)uVar32 == 0) {
      uVar23 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar44 = puVar12 + 0xd;
    puVar37 = (uint *)(&UNK_110b78558 + lVar27);
    uVar33 = uVar32;
    uVar23 = 0;
    do {
      uVar24 = (uint)*(byte *)(*plVar44 + 0x1d);
      if ((*puVar37 & 0x79) != 0 || uVar23 != 0) {
        uVar24 = uVar23;
      }
      uVar33 = uVar33 - 1;
      plVar44 = plVar44 + 6;
      puVar37 = puVar37 + 1;
      uVar23 = uVar24;
    } while (uVar33 != 0);
  }
  else {
    uVar23 = uVar24;
    if ((int)uVar32 == 0) goto LAB_109ece0a8;
  }
  uVar33 = 0;
  puVar13 = puVar12 + 0xe;
  do {
    lVar27 = puVar12[uVar33 * 6 + 0xd];
    uVar40 = (ulong)*(byte *)(lVar27 + 0x1c);
    if (uVar40 < 0x10) {
      do {
        *(char *)((long)puVar13 + uVar40) = *(char *)(lVar27 + 0x1c) + -1;
        uVar40 = uVar40 + 1;
      } while (uVar40 != 0x10);
    }
    uVar33 = uVar33 + 1;
    puVar13 = puVar13 + 6;
  } while (uVar33 != uVar32);
  uVar23 = 0x20;
  if (uVar24 != 0) {
    uVar23 = uVar24;
  }
LAB_109ece0a8:
  FUN_109ecb048(puVar12,puVar12 + 6,bVar20,uVar23);
  FUN_109ecb4f0(*param_1,param_1[1],puVar12);
  *param_1 = (undefined8 *)0x3;
  param_1[1] = puVar12;
  return (undefined8 **)(puVar12 + 6);
}



/* Entry: 109f109d8; end: 109f10fcf;  */

undefined8 *
FUN_109f109d8(undefined8 *param_1,undefined8 *param_2,uint param_3,ulong param_4,undefined8 *param_5
             )

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  puVar5 = param_1;
  if ((int)param_3 < 5) {
    if (1 < param_3) {
      if (1 < param_3 - 3) {
        puVar4 = param_2;
        if (*(char *)((long)param_2 + 0x1c) != '\x01') {
          lVar2 = param_1[3];
          FUN_109ecaef8(lVar2,0x154);
          puVar4 = (undefined8 *)(lVar2 + 0x30);
          FUN_109ecb048();
          uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)(lVar2 + 0x2c) = uVar1;
          *(ushort *)(lVar2 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
          *(undefined8 *)(lVar2 + 0x50) = 0;
          *(undefined8 *)(lVar2 + 0x58) = 0;
          *(undefined8 *)(lVar2 + 0x60) = 0;
          *(undefined8 **)(lVar2 + 0x68) = param_2;
          *(undefined8 *)(lVar2 + 0x70) = 0;
          *(undefined8 *)(lVar2 + 0x78) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],lVar2);
          *param_1 = 3;
          param_1[1] = lVar2;
        }
        lVar2 = param_1[3];
        FUN_109ecaef8(lVar2,0x154);
        FUN_109ecb048();
        uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar2 + 0x2c) = uVar1;
        *(ushort *)(lVar2 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(undefined8 **)(lVar2 + 0x68) = param_2;
        *(undefined1 *)(lVar2 + 0x70) = 1;
        *(undefined8 *)(lVar2 + 0x71) = 0;
        *(undefined8 *)(lVar2 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar2);
        *param_1 = 3;
        param_1[1] = lVar2;
        param_2 = param_1;
        FUN_109ece1b0(param_1,0x11d,puVar4,param_5);
        puVar3 = param_1;
        FUN_109ece1b0(param_1,0x19a,param_2,puVar4);
        puVar4 = param_1;
        FUN_109ece168(param_1,0x23,puVar3);
        FUN_109ece1b0(param_1,0x11d,lVar2 + 0x30,puVar4);
        uVar6 = 0x1c5;
        goto LAB_109f10e2c;
      }
      lVar2 = param_1[3];
      FUN_109ecaef8(lVar2,0x154);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar2 + 0x2c) = uVar1;
      *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 **)(lVar2 + 0x68) = param_2;
      *(undefined1 *)(lVar2 + 0x70) = 3;
      *(undefined8 *)(lVar2 + 0x71) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar2);
      *param_1 = 3;
      param_1[1] = lVar2;
      FUN_109ece1b0(param_1,0x11d,lVar2 + 0x30,param_5);
      uVar10 = (ulong)*(byte *)((long)param_2 + 0x1c);
      func_0x000109ecd728(uVar10);
      lVar2 = param_1[3];
      FUN_109ecaef8(lVar2,uVar10);
      if (*(char *)((long)param_2 + 0x1c) != '\0') {
        uVar10 = 0;
        puVar13 = (undefined1 *)(lVar2 + 0x70);
        do {
          if (uVar10 == 3) {
            *(undefined8 *)(lVar2 + 0xe0) = 0;
            *(undefined8 *)(lVar2 + 0xe8) = 0;
            *(undefined8 *)(lVar2 + 0xf0) = 0;
            *(undefined8 **)(lVar2 + 0xf8) = puVar5;
            *(undefined1 *)(lVar2 + 0x100) = 0;
          }
          else {
            *(undefined8 *)(puVar13 + -0x20) = 0;
            *(undefined8 *)(puVar13 + -0x18) = 0;
            *(undefined8 *)(puVar13 + -0x10) = 0;
            *(undefined8 **)(puVar13 + -8) = param_2;
            *puVar13 = (char)uVar10;
          }
          uVar10 = uVar10 + 1;
          puVar13 = puVar13 + 0x30;
        } while (uVar10 < *(byte *)((long)param_2 + 0x1c));
      }
      goto SUB_109ecdf34;
    }
LAB_109f10e1c:
    uVar6 = 0x11d;
    puVar5 = param_5;
LAB_109f10e2c:
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,uVar6);
    if (lVar2 == 0) {
      return (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 **)(lVar2 + 0x68) = param_2;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 **)(lVar2 + 0x98) = puVar5;
  }
  else {
    if (7 < (int)param_3) {
      if (param_3 == 8) {
        if ((param_4 & 0xfff1ffff) == 0) {
          puVar4 = param_1;
          FUN_109ece168(param_1,0x1b1,param_2);
          FUN_109ece168(param_1,0x1b2,param_2);
          puVar3 = param_5;
          if (*(char *)((long)param_5 + 0x1d) != ' ') {
            puVar3 = param_1;
            FUN_109ece168(param_1,0x184,param_5);
          }
          param_2 = param_1;
          FUN_109ece1b0(param_1,0x11d,puVar4,puVar3);
          uVar6 = 0x163;
          goto LAB_109f10e2c;
        }
      }
      else if (param_3 == 10) {
        puVar5 = param_2;
        if (*(char *)((long)param_2 + 0x1d) != ' ') {
          puVar5 = param_1;
          FUN_109ece168(param_1,0x184,param_2);
        }
        puVar4 = param_1;
        FUN_109ece1b0(param_1,0x11d,puVar5,param_5);
        if (*(char *)((long)puVar4 + 0x1d) == '@') {
          return puVar4;
        }
        lVar2 = param_1[3];
        FUN_109ecaef8(lVar2,0x185);
        if (lVar2 == 0) {
          return (undefined8 *)0x0;
        }
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(undefined8 **)(lVar2 + 0x68) = puVar4;
        goto SUB_109ecdf34;
      }
      goto LAB_109f10e1c;
    }
    if (param_3 != 5) {
      if (param_3 != 6) {
        lVar2 = param_1[3];
        FUN_109ecaef8(lVar2,0x154);
        FUN_109ecb048();
        uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar2 + 0x2c) = uVar1;
        *(ushort *)(lVar2 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(undefined8 **)(lVar2 + 0x68) = param_2;
        *(undefined1 *)(lVar2 + 0x70) = 2;
        *(undefined8 *)(lVar2 + 0x71) = 0;
        *(undefined8 *)(lVar2 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar2);
        *param_1 = 3;
        param_1[1] = lVar2;
        FUN_109ece1b0(param_1,0x11d,lVar2 + 0x30,param_5);
        uVar10 = (ulong)*(byte *)((long)param_2 + 0x1c);
        func_0x000109ecd728(uVar10);
        lVar2 = param_1[3];
        FUN_109ecaef8(lVar2,uVar10);
        if (*(char *)((long)param_2 + 0x1c) != '\0') {
          uVar10 = 0;
          puVar13 = (undefined1 *)(lVar2 + 0x70);
          do {
            if (uVar10 == 2) {
              *(undefined8 *)(lVar2 + 0xb0) = 0;
              *(undefined8 *)(lVar2 + 0xb8) = 0;
              *(undefined8 *)(lVar2 + 0xc0) = 0;
              *(undefined8 **)(lVar2 + 200) = puVar5;
              *(undefined1 *)(lVar2 + 0xd0) = 0;
            }
            else {
              *(undefined8 *)(puVar13 + -0x20) = 0;
              *(undefined8 *)(puVar13 + -0x18) = 0;
              *(undefined8 *)(puVar13 + -0x10) = 0;
              *(undefined8 **)(puVar13 + -8) = param_2;
              *puVar13 = (char)uVar10;
            }
            uVar10 = uVar10 + 1;
            puVar13 = puVar13 + 0x30;
          } while (uVar10 < *(byte *)((long)param_2 + 0x1c));
        }
        goto SUB_109ecdf34;
      }
      puVar4 = param_1;
      FUN_109ece168(param_1,0x1b1,param_2);
      puVar3 = param_1;
      FUN_109ece1b0(param_1,0x11d,puVar4,param_5);
      FUN_109ece168(param_1,0x1b2,param_2);
      uVar6 = 0x163;
      param_2 = puVar3;
      goto LAB_109f10e2c;
    }
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar2 + 0x2c) = uVar1;
    *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 **)(lVar2 + 0x68) = param_2;
    *(undefined1 *)(lVar2 + 0x70) = 1;
    *(undefined8 *)(lVar2 + 0x71) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar2);
    *param_1 = 3;
    param_1[1] = lVar2;
    FUN_109ece1b0(param_1,0x11d,lVar2 + 0x30,param_5);
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x1c);
    func_0x000109ecd728(uVar10);
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,uVar10);
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      uVar10 = 0;
      puVar13 = (undefined1 *)(lVar2 + 0x70);
      do {
        if (uVar10 == 1) {
          *(undefined8 *)(lVar2 + 0x80) = 0;
          *(undefined8 *)(lVar2 + 0x88) = 0;
          *(undefined8 *)(lVar2 + 0x90) = 0;
          *(undefined8 **)(lVar2 + 0x98) = puVar5;
          *(undefined1 *)(lVar2 + 0xa0) = 0;
        }
        else {
          *(undefined8 *)(puVar13 + -0x20) = 0;
          *(undefined8 *)(puVar13 + -0x18) = 0;
          *(undefined8 *)(puVar13 + -0x10) = 0;
          *(undefined8 **)(puVar13 + -8) = param_2;
          *puVar13 = (char)uVar10;
        }
        uVar10 = uVar10 + 1;
        puVar13 = puVar13 + 0x30;
      } while (uVar10 < *(byte *)((long)param_2 + 0x1c));
    }
  }
SUB_109ecdf34:
  lVar16 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar7 = (&UNK_110b78541)[lVar16];
  if (bVar7 == 0) {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar16];
    if ((&UNK_110b78540)[lVar16] == 0) {
      bVar7 = 0;
      uVar8 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar16) & 0x79) != 0) {
        uVar8 = *(uint *)(&UNK_110b78544 + lVar16) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar7 = 0;
    plVar11 = (long *)(lVar2 + 0x68);
    pcVar14 = &UNK_110b78548 + lVar16;
    uVar12 = uVar10;
    do {
      if ((*pcVar14 == '\0') && (bVar7 <= *(byte *)(*plVar11 + 0x1c))) {
        bVar7 = *(byte *)(*plVar11 + 0x1c);
      }
      plVar11 = plVar11 + 6;
      uVar12 = uVar12 - 1;
      pcVar14 = pcVar14 + 1;
    } while (uVar12 != 0);
  }
  else {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar16];
  }
  uVar9 = *(uint *)(&UNK_110b78544 + lVar16) & 0x79;
  if (uVar9 == 0) {
    if ((int)uVar10 == 0) {
      uVar8 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar11 = (long *)(lVar2 + 0x68);
    puVar15 = (uint *)(&UNK_110b78558 + lVar16);
    uVar12 = uVar10;
    uVar8 = 0;
    do {
      uVar9 = (uint)*(byte *)(*plVar11 + 0x1d);
      if ((*puVar15 & 0x79) != 0 || uVar8 != 0) {
        uVar9 = uVar8;
      }
      uVar12 = uVar12 - 1;
      plVar11 = plVar11 + 6;
      puVar15 = puVar15 + 1;
      uVar8 = uVar9;
    } while (uVar12 != 0);
  }
  else {
    uVar8 = uVar9;
    if ((int)uVar10 == 0) goto LAB_109ece0a8;
  }
  uVar12 = 0;
  lVar16 = lVar2 + 0x70;
  do {
    lVar17 = *(long *)(lVar2 + uVar12 * 0x30 + 0x68);
    uVar18 = (ulong)*(byte *)(lVar17 + 0x1c);
    if (uVar18 < 0x10) {
      do {
        *(char *)(lVar16 + uVar18) = *(char *)(lVar17 + 0x1c) + -1;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x10);
    }
    uVar12 = uVar12 + 1;
    lVar16 = lVar16 + 0x30;
  } while (uVar12 != uVar10);
  uVar8 = 0x20;
  if (uVar9 != 0) {
    uVar8 = uVar9;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar7,uVar8);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return (undefined8 *)(lVar2 + 0x30);
}



/* Entry: 109f10fd0; end: 109f1111b;  */

undefined8 *
FUN_109f10fd0(undefined8 *param_1,undefined8 *param_2,uint param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  if (param_5 == 0) {
    return param_2;
  }
  uVar21 = 0x20;
  if ((param_3 != 6) && (param_3 != 10)) {
    uVar21 = (uint)*(byte *)((long)param_2 + 0x1d);
  }
  uVar11 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
  uVar12 = 0;
  if (uVar11 != 5) {
    uVar12 = param_5 & 0xffffffff00000000;
  }
  uVar14 = 0;
  if (uVar11 != 4) {
    uVar14 = param_5;
  }
  uVar20 = 0;
  if (uVar11 != 4) {
    uVar20 = uVar12;
  }
  uVar12 = 1;
  if (uVar11 != 0) {
    uVar12 = param_5;
  }
  uVar1 = param_5;
  if (uVar11 < 4) {
    uVar14 = 0;
    uVar20 = 0;
    param_5 = 0;
    uVar1 = uVar12;
  }
  puVar8 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar8,0x50,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  *(undefined4 *)(puVar8 + 3) = 5;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_109ecb048(puVar8,puVar8 + 5,1,uVar21);
  puVar8[9] = uVar20 | uVar14 & 0xffff0000 | param_5 & 0xff00 | uVar1 & 0xff;
  FUN_109ecb4f0(*param_1,param_1[1],puVar8);
  *param_1 = 3;
  param_1[1] = puVar8;
  puVar4 = puVar8 + 5;
  puVar5 = param_1;
  if ((int)param_3 < 5) {
    if (1 < param_3) {
      if (1 < param_3 - 3) {
        puVar8 = param_2;
        if (*(char *)((long)param_2 + 0x1c) != '\x01') {
          lVar3 = param_1[3];
          FUN_109ecaef8(lVar3,0x154);
          puVar8 = (undefined8 *)(lVar3 + 0x30);
          FUN_109ecb048();
          uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)(lVar3 + 0x2c) = uVar2;
          *(ushort *)(lVar3 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
          *(undefined8 *)(lVar3 + 0x50) = 0;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined8 *)(lVar3 + 0x60) = 0;
          *(undefined8 **)(lVar3 + 0x68) = param_2;
          *(undefined8 *)(lVar3 + 0x70) = 0;
          *(undefined8 *)(lVar3 + 0x78) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],lVar3);
          *param_1 = 3;
          param_1[1] = lVar3;
        }
        lVar3 = param_1[3];
        FUN_109ecaef8(lVar3,0x154);
        FUN_109ecb048();
        uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar3 + 0x2c) = uVar2;
        *(ushort *)(lVar3 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        *(undefined8 **)(lVar3 + 0x68) = param_2;
        *(undefined1 *)(lVar3 + 0x70) = 1;
        *(undefined8 *)(lVar3 + 0x71) = 0;
        *(undefined8 *)(lVar3 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar3);
        *param_1 = 3;
        param_1[1] = lVar3;
        param_2 = param_1;
        FUN_109ece1b0(param_1,0x11d,puVar8,puVar4);
        puVar4 = param_1;
        FUN_109ece1b0(param_1,0x19a,param_2,puVar8);
        puVar8 = param_1;
        FUN_109ece168(param_1,0x23,puVar4);
        FUN_109ece1b0(param_1,0x11d,lVar3 + 0x30,puVar8);
        uVar9 = 0x1c5;
        goto LAB_109f10e2c;
      }
      lVar3 = param_1[3];
      FUN_109ecaef8(lVar3,0x154);
      FUN_109ecb048();
      uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar3 + 0x2c) = uVar2;
      *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 **)(lVar3 + 0x68) = param_2;
      *(undefined1 *)(lVar3 + 0x70) = 3;
      *(undefined8 *)(lVar3 + 0x71) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar3);
      *param_1 = 3;
      param_1[1] = lVar3;
      puVar8 = param_1;
      FUN_109ece1b0(param_1,0x11d,lVar3 + 0x30,puVar4);
      uVar12 = (ulong)*(byte *)((long)param_2 + 0x1c);
      func_0x000109ecd728(uVar12);
      lVar3 = param_1[3];
      FUN_109ecaef8(lVar3,uVar12);
      if (*(char *)((long)param_2 + 0x1c) != '\0') {
        uVar12 = 0;
        puVar15 = (undefined1 *)(lVar3 + 0x70);
        do {
          if (uVar12 == 3) {
            *(undefined8 *)(lVar3 + 0xe0) = 0;
            *(undefined8 *)(lVar3 + 0xe8) = 0;
            *(undefined8 *)(lVar3 + 0xf0) = 0;
            *(undefined8 **)(lVar3 + 0xf8) = puVar8;
            *(undefined1 *)(lVar3 + 0x100) = 0;
          }
          else {
            *(undefined8 *)(puVar15 + -0x20) = 0;
            *(undefined8 *)(puVar15 + -0x18) = 0;
            *(undefined8 *)(puVar15 + -0x10) = 0;
            *(undefined8 **)(puVar15 + -8) = param_2;
            *puVar15 = (char)uVar12;
          }
          uVar12 = uVar12 + 1;
          puVar15 = puVar15 + 0x30;
        } while (uVar12 < *(byte *)((long)param_2 + 0x1c));
      }
      goto SUB_109ecdf34;
    }
LAB_109f10e1c:
    uVar9 = 0x11d;
    puVar5 = puVar4;
LAB_109f10e2c:
    lVar3 = param_1[3];
    FUN_109ecaef8(lVar3,uVar9);
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = param_2;
    *(undefined8 *)(lVar3 + 0x80) = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0;
    *(undefined8 *)(lVar3 + 0x90) = 0;
    *(undefined8 **)(lVar3 + 0x98) = puVar5;
  }
  else {
    if (7 < (int)param_3) {
      if (param_3 == 8) {
        if ((param_4 & 0xfff1ffff) == 0) {
          puVar6 = param_1;
          FUN_109ece168(param_1,0x1b1,param_2);
          FUN_109ece168(param_1,0x1b2,param_2);
          puVar7 = puVar4;
          if (*(char *)((long)puVar8 + 0x45) != ' ') {
            puVar7 = param_1;
            FUN_109ece168(param_1,0x184,puVar4);
          }
          param_2 = param_1;
          FUN_109ece1b0(param_1,0x11d,puVar6,puVar7);
          uVar9 = 0x163;
          goto LAB_109f10e2c;
        }
      }
      else if (param_3 == 10) {
        puVar8 = param_2;
        if (*(char *)((long)param_2 + 0x1d) != ' ') {
          puVar8 = param_1;
          FUN_109ece168(param_1,0x184,param_2);
        }
        FUN_109ece1b0(param_1,0x11d,puVar8,puVar4);
        if (*(char *)((long)puVar5 + 0x1d) == '@') {
          return puVar5;
        }
        lVar3 = param_1[3];
        FUN_109ecaef8(lVar3,0x185);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        *(undefined8 **)(lVar3 + 0x68) = puVar5;
        goto SUB_109ecdf34;
      }
      goto LAB_109f10e1c;
    }
    if (param_3 != 5) {
      if (param_3 != 6) {
        lVar3 = param_1[3];
        FUN_109ecaef8(lVar3,0x154);
        FUN_109ecb048();
        uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar3 + 0x2c) = uVar2;
        *(ushort *)(lVar3 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        *(undefined8 **)(lVar3 + 0x68) = param_2;
        *(undefined1 *)(lVar3 + 0x70) = 2;
        *(undefined8 *)(lVar3 + 0x71) = 0;
        *(undefined8 *)(lVar3 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar3);
        *param_1 = 3;
        param_1[1] = lVar3;
        puVar8 = param_1;
        FUN_109ece1b0(param_1,0x11d,lVar3 + 0x30,puVar4);
        uVar12 = (ulong)*(byte *)((long)param_2 + 0x1c);
        func_0x000109ecd728(uVar12);
        lVar3 = param_1[3];
        FUN_109ecaef8(lVar3,uVar12);
        if (*(char *)((long)param_2 + 0x1c) != '\0') {
          uVar12 = 0;
          puVar15 = (undefined1 *)(lVar3 + 0x70);
          do {
            if (uVar12 == 2) {
              *(undefined8 *)(lVar3 + 0xb0) = 0;
              *(undefined8 *)(lVar3 + 0xb8) = 0;
              *(undefined8 *)(lVar3 + 0xc0) = 0;
              *(undefined8 **)(lVar3 + 200) = puVar8;
              *(undefined1 *)(lVar3 + 0xd0) = 0;
            }
            else {
              *(undefined8 *)(puVar15 + -0x20) = 0;
              *(undefined8 *)(puVar15 + -0x18) = 0;
              *(undefined8 *)(puVar15 + -0x10) = 0;
              *(undefined8 **)(puVar15 + -8) = param_2;
              *puVar15 = (char)uVar12;
            }
            uVar12 = uVar12 + 1;
            puVar15 = puVar15 + 0x30;
          } while (uVar12 < *(byte *)((long)param_2 + 0x1c));
        }
        goto SUB_109ecdf34;
      }
      puVar8 = param_1;
      FUN_109ece168(param_1,0x1b1,param_2);
      puVar6 = param_1;
      FUN_109ece1b0(param_1,0x11d,puVar8,puVar4);
      FUN_109ece168(param_1,0x1b2,param_2);
      uVar9 = 0x163;
      param_2 = puVar6;
      goto LAB_109f10e2c;
    }
    lVar3 = param_1[3];
    FUN_109ecaef8(lVar3,0x154);
    FUN_109ecb048();
    uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar3 + 0x2c) = uVar2;
    *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = param_2;
    *(undefined1 *)(lVar3 + 0x70) = 1;
    *(undefined8 *)(lVar3 + 0x71) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar3);
    *param_1 = 3;
    param_1[1] = lVar3;
    puVar8 = param_1;
    FUN_109ece1b0(param_1,0x11d,lVar3 + 0x30,puVar4);
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x1c);
    func_0x000109ecd728(uVar12);
    lVar3 = param_1[3];
    FUN_109ecaef8(lVar3,uVar12);
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      uVar12 = 0;
      puVar15 = (undefined1 *)(lVar3 + 0x70);
      do {
        if (uVar12 == 1) {
          *(undefined8 *)(lVar3 + 0x80) = 0;
          *(undefined8 *)(lVar3 + 0x88) = 0;
          *(undefined8 *)(lVar3 + 0x90) = 0;
          *(undefined8 **)(lVar3 + 0x98) = puVar8;
          *(undefined1 *)(lVar3 + 0xa0) = 0;
        }
        else {
          *(undefined8 *)(puVar15 + -0x20) = 0;
          *(undefined8 *)(puVar15 + -0x18) = 0;
          *(undefined8 *)(puVar15 + -0x10) = 0;
          *(undefined8 **)(puVar15 + -8) = param_2;
          *puVar15 = (char)uVar12;
        }
        uVar12 = uVar12 + 1;
        puVar15 = puVar15 + 0x30;
      } while (uVar12 < *(byte *)((long)param_2 + 0x1c));
    }
  }
SUB_109ecdf34:
  lVar18 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar3 + 0x2c) = uVar2;
  *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar10 = (&UNK_110b78541)[lVar18];
  if (bVar10 == 0) {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar18];
    if ((&UNK_110b78540)[lVar18] == 0) {
      bVar10 = 0;
      uVar21 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar18) & 0x79) != 0) {
        uVar21 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar10 = 0;
    plVar13 = (long *)(lVar3 + 0x68);
    pcVar16 = &UNK_110b78548 + lVar18;
    uVar14 = uVar12;
    do {
      if ((*pcVar16 == '\0') && (bVar10 <= *(byte *)(*plVar13 + 0x1c))) {
        bVar10 = *(byte *)(*plVar13 + 0x1c);
      }
      plVar13 = plVar13 + 6;
      uVar14 = uVar14 - 1;
      pcVar16 = pcVar16 + 1;
    } while (uVar14 != 0);
  }
  else {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar18];
  }
  uVar11 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
  if (uVar11 == 0) {
    if ((int)uVar12 == 0) {
      uVar21 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar13 = (long *)(lVar3 + 0x68);
    puVar17 = (uint *)(&UNK_110b78558 + lVar18);
    uVar14 = uVar12;
    uVar21 = 0;
    do {
      uVar11 = (uint)*(byte *)(*plVar13 + 0x1d);
      if ((*puVar17 & 0x79) != 0 || uVar21 != 0) {
        uVar11 = uVar21;
      }
      uVar14 = uVar14 - 1;
      plVar13 = plVar13 + 6;
      puVar17 = puVar17 + 1;
      uVar21 = uVar11;
    } while (uVar14 != 0);
  }
  else {
    uVar21 = uVar11;
    if ((int)uVar12 == 0) goto LAB_109ece0a8;
  }
  uVar14 = 0;
  lVar18 = lVar3 + 0x70;
  do {
    lVar19 = *(long *)(lVar3 + uVar14 * 0x30 + 0x68);
    uVar20 = (ulong)*(byte *)(lVar19 + 0x1c);
    if (uVar20 < 0x10) {
      do {
        *(char *)(lVar18 + uVar20) = *(char *)(lVar19 + 0x1c) + -1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x10);
    }
    uVar14 = uVar14 + 1;
    lVar18 = lVar18 + 0x30;
  } while (uVar14 != uVar12);
  uVar21 = 0x20;
  if (uVar11 != 0) {
    uVar21 = uVar11;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar3,lVar3 + 0x30,bVar10,uVar21);
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return (undefined8 *)(lVar3 + 0x30);
}



/* Entry: 109f1111c; end: 109f1135b;  */

undefined8 * FUN_109f1111c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar18 = (ulong)*(byte *)((long)param_2 + 0x1d);
  uVar11 = (uint)*(byte *)((long)param_2 + 0x1d);
  uVar10 = 0xffffffff;
  if (uVar11 != 0x40) {
    uVar10 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar10 = uVar10 & param_3;
  if ((int)uVar10 == 1) {
    return param_2;
  }
  if ((int)uVar10 == 0) {
    puVar5 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar5,0x50,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    *(undefined4 *)(puVar5 + 3) = 5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109ecb048(puVar5,puVar5 + 5,1,uVar18);
    puVar5[9] = 0;
    FUN_109ecb4f0(*param_1,param_1[1],puVar5);
    *param_1 = 3;
    param_1[1] = puVar5;
    return puVar5 + 5;
  }
  puVar5 = (undefined8 *)param_1[3];
  if (puVar5[5] == 0) {
    if ((uVar10 & uVar10 - 1) != 0) goto LAB_109f1128c;
LAB_109f11204:
    uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    puVar5 = (undefined8 *)*puVar5;
    FUN_109f6600c(puVar5,0x50,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    *(undefined4 *)(puVar5 + 3) = 5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109ecb048(puVar5,puVar5 + 5,1,0x20);
    puVar5[9] = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
    FUN_109ecb4f0(*param_1,param_1[1],puVar5);
    *param_1 = 3;
    param_1[1] = puVar5;
    uVar6 = 0x14d;
  }
  else {
    if (((*(byte *)(puVar5[5] + 0x1e) & 1) == 0) && ((uVar10 & uVar10 - 1) == 0))
    goto LAB_109f11204;
LAB_109f1128c:
    uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar15 = uVar10 & 0xffff0000;
    uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
    uVar17 = 0;
    if (uVar11 != 3) {
      uVar17 = uVar10;
    }
    uVar1 = 0;
    if (uVar11 != 0) {
      uVar1 = uVar17;
    }
    uVar17 = 1;
    if (uVar11 != 0) {
      uVar17 = uVar10;
    }
    uVar3 = uVar10;
    if (uVar11 < 5) {
      uVar15 = 0;
      uVar10 = uVar17;
      uVar3 = uVar1;
    }
    puVar5 = (undefined8 *)*puVar5;
    FUN_109f6600c(puVar5,0x50,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    *(undefined4 *)(puVar5 + 3) = 5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109ecb048(puVar5,puVar5 + 5,1,uVar18);
    puVar5[9] = uVar3 & 0xff00 | uVar15 | uVar10 & 0xff;
    FUN_109ecb4f0(*param_1,param_1[1],puVar5);
    *param_1 = 3;
    param_1[1] = puVar5;
    uVar6 = 0;
  }
  lVar4 = param_1[3];
  FUN_109ecaef8(lVar4,uVar6);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 **)(lVar4 + 0x68) = param_2;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 **)(lVar4 + 0x98) = puVar5 + 5;
  lVar14 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar2 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar2;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar7 = (&UNK_110b78541)[lVar14];
  if (bVar7 == 0) {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar14];
    if ((&UNK_110b78540)[lVar14] == 0) {
      bVar7 = 0;
      uVar11 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar14) & 0x79) != 0) {
        uVar11 = *(uint *)(&UNK_110b78544 + lVar14) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar7 = 0;
    plVar9 = (long *)(lVar4 + 0x68);
    pcVar12 = &UNK_110b78548 + lVar14;
    uVar18 = uVar10;
    do {
      if ((*pcVar12 == '\0') && (bVar7 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar7 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar18 = uVar18 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar18 != 0);
  }
  else {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar14];
  }
  uVar8 = *(uint *)(&UNK_110b78544 + lVar14) & 0x79;
  if (uVar8 == 0) {
    if ((int)uVar10 == 0) {
      uVar11 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar4 + 0x68);
    puVar13 = (uint *)(&UNK_110b78558 + lVar14);
    uVar18 = uVar10;
    uVar11 = 0;
    do {
      uVar8 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar11 != 0) {
        uVar8 = uVar11;
      }
      uVar18 = uVar18 - 1;
      plVar9 = plVar9 + 6;
      puVar13 = puVar13 + 1;
      uVar11 = uVar8;
    } while (uVar18 != 0);
  }
  else {
    uVar11 = uVar8;
    if ((int)uVar10 == 0) goto LAB_109ece0a8;
  }
  uVar18 = 0;
  lVar14 = lVar4 + 0x70;
  do {
    lVar16 = *(long *)(lVar4 + uVar18 * 0x30 + 0x68);
    uVar17 = (ulong)*(byte *)(lVar16 + 0x1c);
    if (uVar17 < 0x10) {
      do {
        *(char *)(lVar14 + uVar17) = *(char *)(lVar16 + 0x1c) + -1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x10);
    }
    uVar18 = uVar18 + 1;
    lVar14 = lVar14 + 0x30;
  } while (uVar18 != uVar10);
  uVar11 = 0x20;
  if (uVar8 != 0) {
    uVar11 = uVar8;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar4,lVar4 + 0x30,bVar7,uVar11);
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return (undefined8 *)(lVar4 + 0x30);
}



/* Entry: 109f1135c; end: 109f114e3;  */

void FUN_109f1135c(long param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uStack_38;
  uint uStack_34;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    if (*(uint *)(param_1 + 0x5c) != 0) {
      *param_3 = *(uint *)(param_1 + 0x5c);
      uStack_38 = *(uint *)(param_1 + 0x60);
      goto LAB_109f113b0;
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    *param_3 = 0x100;
    uStack_38 = (uint)*(byte *)(*(long *)(param_1 + 0x38) + 0x44);
    goto LAB_109f113b0;
  }
  lVar5 = **(long **)(param_1 + 0x50);
  if (*(int *)(lVar5 + 0x18) != 1) {
    if ((int)param_2 == 0) {
      return;
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2c);
    if (uVar2 == 0) {
      return;
    }
    *param_3 = uVar2;
    *param_4 = 0;
    return;
  }
  lVar4 = lVar5;
  FUN_109f1135c(lVar5,param_2,&uStack_34,&uStack_38);
  if ((int)lVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) - 1U < 3) {
    lVar5 = param_1;
    FUN_109ef9984();
    uVar2 = (uint)lVar5;
    if (uVar2 == 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x28) == 2) ||
       (lVar5 = **(long **)(param_1 + 0x70), *(int *)(lVar5 + 0x18) != 5)) {
      if ((uVar2 & -uVar2) <= uStack_34) {
        uStack_34 = uVar2 & -uVar2;
      }
      *param_3 = uStack_34;
    }
    else {
      uVar3 = (uint)*(byte *)(lVar5 + 0x45);
      FUN_109f12b04(*(byte *)(lVar5 + 0x45),*(undefined8 *)(lVar5 + 0x48));
      *param_3 = uStack_34;
      uStack_38 = uStack_38 + uVar2 * uVar3;
    }
    uVar2 = 0;
    if (uStack_34 != 0) {
      uVar2 = uStack_38 / uStack_34;
    }
    uStack_38 = uStack_38 - uVar2 * uStack_34;
  }
  else if (*(int *)(param_1 + 0x28) == 4) {
    iVar1 = *(int *)(*(long *)(*(long *)(lVar5 + 0x30) + 0x30) +
                     (ulong)*(uint *)(param_1 + 0x58) * 0x30 + 0x18);
    if (iVar1 < 0) {
      return;
    }
    *param_3 = uStack_34;
    uStack_38 = uStack_38 + iVar1;
    uVar2 = 0;
    if (uStack_34 != 0) {
      uVar2 = uStack_38 / uStack_34;
    }
    uStack_38 = uStack_38 - uVar2 * uStack_34;
  }
  else {
    *param_3 = uStack_34;
  }
LAB_109f113b0:
  *param_4 = uStack_38;
  return;
}



/* Entry: 109f114e4; end: 109f12b03;  */

ulong * FUN_109f114e4(ulong *param_1,long param_2,ulong *param_3,ulong param_4,uint param_5,
                     undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  char *pcVar26;
  uint *puVar27;
  ulong uVar28;
  int iVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  ulong *puStack_70;
  
  uVar17 = (uint)param_4;
  if ((param_5 ^ param_5 - 1) <= param_5 - 1) {
    uVar15 = param_5 & 0xfff9ffff;
    if ((param_5 & 0x20000) != 0) {
      param_5 = uVar15 | 0x40000;
    }
    if ((param_5 & param_5 - 1) != 0) {
      if (uVar17 < 5) {
        param_5 = 0x100000;
      }
      else if ((uVar17 != 8) || (param_5 != 0x100000)) {
        puVar8 = param_1;
        if ((param_5 >> 0x12 & 1) == 0) {
          puVar22 = param_1;
          FUN_109f15ad8(param_1,param_3,param_4,0x80000);
          FUN_109ece6c4(param_1,puVar22);
          FUN_109f114e4(param_1,param_2,param_3,param_4,0x80000,param_6,param_7,param_8);
          uVar13 = param_1[1];
          if ((*param_1 & 0xfffffffe) == 2) {
            uVar13 = *(ulong *)(uVar13 + 0x10);
          }
          uVar13 = *(ulong *)(*(long *)(uVar13 + 0x18) + 0x68);
          if (*(int *)(uVar13 + 0x10) == 0) {
            uVar10 = 0;
          }
          else {
            puVar22 = (ulong *)(uVar13 + 8);
            uVar13 = 0;
            if (*(long *)(*puVar22 + 8) != 0) {
              uVar13 = *puVar22;
            }
            uVar10 = 1;
          }
          *param_1 = uVar10;
          param_1[1] = uVar13;
          uVar15 = 0x100000;
        }
        else {
          puVar22 = param_1;
          FUN_109f15ad8(param_1,param_3,param_4,0x40000);
          FUN_109ece6c4(param_1,puVar22);
          FUN_109f114e4(param_1,param_2,param_3,param_4,0x40000,param_6,param_7,param_8);
          uVar13 = param_1[1];
          if ((*param_1 & 0xfffffffe) == 2) {
            uVar13 = *(ulong *)(uVar13 + 0x10);
          }
          uVar13 = *(ulong *)(*(long *)(uVar13 + 0x18) + 0x68);
          if (*(int *)(uVar13 + 0x10) == 0) {
            uVar10 = 0;
          }
          else {
            puVar22 = (ulong *)(uVar13 + 8);
            uVar13 = 0;
            if (*(long *)(*puVar22 + 8) != 0) {
              uVar13 = *puVar22;
            }
            uVar10 = 1;
          }
          *param_1 = uVar10;
          param_1[1] = uVar13;
        }
        puVar22 = param_1;
        FUN_109f114e4(param_1,param_2,param_3,param_4,uVar15,param_6,param_7,param_8);
        uVar13 = param_1[1];
        if ((*param_1 & 0xfffffffe) == 2) {
          uVar13 = *(ulong *)(uVar13 + 0x10);
        }
        puVar20 = *(ulong **)(uVar13 + 0x18);
        if ((int)puVar20[2] == 0) {
          uVar13 = 1;
          puVar21 = puVar20;
        }
        else {
          uVar13 = 0;
          puVar21 = (ulong *)0x0;
          if (*(ulong *)*puVar20 != 0) {
            puVar21 = (ulong *)*puVar20;
          }
        }
        *param_1 = uVar13;
        param_1[1] = (ulong)puVar21;
        uVar13 = param_1[1];
        if ((*param_1 & 0xfffffffe) == 2) {
          uVar13 = *(ulong *)(uVar13 + 0x10);
        }
        lVar31 = *(long *)(uVar13 + 8);
        lVar19 = 0;
        if (*(long *)(lVar31 + 8) != 0) {
          lVar19 = lVar31;
        }
        puVar12 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar12,0x68,8);
        *(undefined4 *)(puVar12 + 3) = 8;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[7] = 0;
        puVar12[5] = puVar12 + 7;
        *puVar12 = 0;
        puVar12[6] = 0;
        puVar12[8] = puVar12 + 5;
        if (*(long *)(lVar31 + 0x48) == lVar19 + 0x58) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar31 + 0x60);
        }
        FUN_109ecb354(puVar12,uVar9,puVar8);
        if (*(long *)(lVar31 + 0x68) == lVar19 + 0x78) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar31 + 0x80);
        }
        FUN_109ecb354(puVar12,uVar9,puVar22);
        FUN_109ecb048(puVar12,puVar12 + 9,*(undefined1 *)((long)puVar8 + 0x1c),
                      *(undefined1 *)((long)puVar8 + 0x1d));
        FUN_109ecb4f0(*param_1,param_1[1],puVar12);
        *param_1 = 3;
        param_1[1] = (ulong)puVar12;
        return puVar12 + 9;
      }
    }
  }
  lVar31 = **(long **)(param_2 + 0x98);
  lVar19 = lVar31;
  if (*(int *)(lVar31 + 0x18) != 1) {
    lVar19 = 0;
  }
  puVar8 = param_1;
  if (*(int *)(param_2 + 0x28) != 0x112) {
    if (param_5 == 0x100000) {
      iVar16 = 0x12e;
    }
    else if (param_5 == 0x80000) {
      iVar16 = 0x1ca;
    }
    else {
      iVar16 = 0x12e;
      if (4 < uVar17) {
        iVar16 = 0x1d3;
      }
    }
    goto LAB_109f11844;
  }
  uVar15 = (param_5 & 0xaaaaaaaa) >> 1 | (param_5 & 0x55555555) << 1;
  uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
  uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
  if (uVar15 < 0xb) {
    if (uVar15 < 8) {
      if (uVar15 == 1) {
        iVar16 = 0x14e;
        goto LAB_109f11844;
      }
      iVar16 = 0x202;
      if ((int)uVar17 < 3) {
        if (uVar17 < 3) {
LAB_109f11840:
          iVar16 = 0x12f;
        }
        goto LAB_109f11844;
      }
      if (uVar17 == 3) {
        uVar13 = param_1[3];
        FUN_109ecb0a8(uVar13,0x131);
        puVar8 = param_3;
        if (*(char *)((long)param_3 + 0x1c) != '\x02') {
          puVar8 = param_1;
          func_0x000109f14260(param_1,param_3,3);
        }
        puVar22 = param_1;
        FUN_109ece168(param_1,0x162,puVar8);
        *(undefined8 *)(uVar13 + 0x80) = 0;
        *(undefined8 *)(uVar13 + 0x88) = 0;
        *(undefined8 *)(uVar13 + 0x90) = 0;
        *(ulong **)(uVar13 + 0x98) = puVar22;
        uVar10 = param_1[3];
        FUN_109ecaef8(uVar10,0x154);
        FUN_109ecb048();
        uVar3 = *(ushort *)(uVar10 + 0x2c) & 0xfffe | (ushort)(byte)param_1[2];
        *(ushort *)(uVar10 + 0x2c) = uVar3;
        *(ushort *)(uVar10 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
        *(undefined8 *)(uVar10 + 0x50) = 0;
        *(undefined8 *)(uVar10 + 0x58) = 0;
        *(undefined8 *)(uVar10 + 0x60) = 0;
        *(ulong **)(uVar10 + 0x68) = param_3;
        *(undefined1 *)(uVar10 + 0x70) = 3;
        *(undefined8 *)(uVar10 + 0x71) = 0;
        *(undefined8 *)(uVar10 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],uVar10);
        *param_1 = 3;
        param_1[1] = uVar10;
        *(undefined8 *)(uVar13 + 0xa0) = 0;
        *(undefined8 *)(uVar13 + 0xa8) = 0;
        *(undefined8 *)(uVar13 + 0xb0) = 0;
        *(ulong *)(uVar13 + 0xb8) = uVar10 + 0x30;
        iVar16 = 0x131;
      }
      else {
        if (uVar17 != 4) {
          if (uVar17 == 8) {
            if (param_5 != 0x100000) goto LAB_109f11ebc;
            goto LAB_109f11840;
          }
          goto LAB_109f11844;
        }
        uVar13 = param_1[3];
        FUN_109ecb0a8(uVar13,0x130);
        puVar8 = param_3;
        if (*(char *)((long)param_3 + 0x1c) != '\x02') {
          puVar8 = param_1;
          func_0x000109f14260(param_1,param_3,3);
        }
        puVar22 = param_1;
        FUN_109ece168(param_1,0x162,puVar8);
        *(undefined8 *)(uVar13 + 0x80) = 0;
        *(undefined8 *)(uVar13 + 0x88) = 0;
        *(undefined8 *)(uVar13 + 0x90) = 0;
        *(ulong **)(uVar13 + 0x98) = puVar22;
        uVar10 = param_1[3];
        FUN_109ecaef8(uVar10,0x154);
        FUN_109ecb048();
        uVar3 = *(ushort *)(uVar10 + 0x2c) & 0xfffe | (ushort)(byte)param_1[2];
        *(ushort *)(uVar10 + 0x2c) = uVar3;
        *(ushort *)(uVar10 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
        *(undefined8 *)(uVar10 + 0x50) = 0;
        *(undefined8 *)(uVar10 + 0x58) = 0;
        *(undefined8 *)(uVar10 + 0x60) = 0;
        *(ulong **)(uVar10 + 0x68) = param_3;
        *(undefined1 *)(uVar10 + 0x70) = 3;
        *(undefined8 *)(uVar10 + 0x71) = 0;
        *(undefined8 *)(uVar10 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],uVar10);
        *param_1 = 3;
        param_1[1] = uVar10;
        *(undefined8 *)(uVar13 + 0xa0) = 0;
        *(undefined8 *)(uVar13 + 0xa8) = 0;
        *(undefined8 *)(uVar13 + 0xb0) = 0;
        *(ulong *)(uVar13 + 0xb8) = uVar10 + 0x30;
        uVar10 = param_1[3];
        FUN_109ecaef8(uVar10,0x154);
        FUN_109ecb048();
        uVar3 = *(ushort *)(uVar10 + 0x2c) & 0xfffe | (ushort)(byte)param_1[2];
        *(ushort *)(uVar10 + 0x2c) = uVar3;
        *(ushort *)(uVar10 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
        *(undefined8 *)(uVar10 + 0x50) = 0;
        *(undefined8 *)(uVar10 + 0x58) = 0;
        *(undefined8 *)(uVar10 + 0x60) = 0;
        *(ulong **)(uVar10 + 0x68) = param_3;
        *(undefined1 *)(uVar10 + 0x70) = 2;
        *(undefined8 *)(uVar10 + 0x71) = 0;
        *(undefined8 *)(uVar10 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],uVar10);
        *param_1 = 3;
        param_1[1] = uVar10;
        *(undefined8 *)(uVar13 + 0xc0) = 0;
        *(undefined8 *)(uVar13 + 200) = 0;
        *(undefined8 *)(uVar13 + 0xd0) = 0;
        *(ulong *)(uVar13 + 0xd8) = uVar10 + 0x30;
        iVar16 = 0x130;
      }
      param_8 = param_8 & 0xffffffff;
      param_4 = param_4 & 0xffffffff;
    }
    else {
      if (uVar15 == 8) {
        iVar16 = 0x17d;
        goto LAB_109f11844;
      }
      if (uVar15 != 9) {
        bVar4 = param_5 != 0x100000;
        if (uVar17 != 8) {
          bVar4 = uVar17 - 9 < 2;
        }
        if (!bVar4) {
          if (uVar17 != 2) goto LAB_109f11840;
          goto LAB_109f11678;
        }
        iVar16 = 0xff;
        goto LAB_109f11844;
      }
      if (uVar17 < 5) {
LAB_109f11738:
        iVar16 = 0x12a;
        goto LAB_109f11844;
      }
      if (uVar17 != 8) {
        iVar16 = 0x1d1;
        goto LAB_109f11844;
      }
      if (param_5 == 0x100000) goto LAB_109f11738;
      iVar16 = 0x1d1;
LAB_109f11ebc:
      uVar13 = param_1[3];
      FUN_109ecb0a8(uVar13,iVar16);
LAB_109f11af4:
      bVar4 = param_5 != 0x100000;
      if (uVar17 != 8) {
        bVar4 = uVar17 - 9 < 2;
      }
      if (bVar4) {
        FUN_109f15d9c(param_1,param_3,param_4);
        goto LAB_109f11874;
      }
      FUN_109f15f0c(param_1,param_3,param_4);
      *(undefined8 *)(uVar13 + 0x80) = 0;
      *(undefined8 *)(uVar13 + 0x88) = 0;
      *(undefined8 *)(uVar13 + 0x90) = 0;
      *(ulong **)(uVar13 + 0x98) = puVar8;
      puVar8 = param_1;
      FUN_109f15d9c(param_1,param_3,param_4);
      *(undefined8 *)(uVar13 + 0xa0) = 0;
      *(undefined8 *)(uVar13 + 0xa8) = 0;
      *(undefined8 *)(uVar13 + 0xb0) = 0;
      *(ulong **)(uVar13 + 0xb8) = puVar8;
    }
  }
  else {
    if (uVar15 < 0x13) {
      if (uVar15 - 0x11 < 2) {
        bVar4 = param_5 != 0x100000;
        if (uVar17 != 8) {
          bVar4 = uVar17 - 9 < 2;
        }
        if (!bVar4) goto LAB_109f11670;
        iVar16 = 0x1c1;
      }
      else {
        iVar16 = 0x1e7;
      }
LAB_109f11844:
      uVar13 = param_1[3];
      FUN_109ecb0a8(uVar13,iVar16);
      if ((4 < uVar17) && ((uVar17 != 8 || (param_5 != 0x100000)))) goto LAB_109f11af4;
    }
    else {
      if (uVar15 == 0x13) {
        iVar16 = 0x1c7;
        goto LAB_109f11844;
      }
LAB_109f11670:
      if (uVar17 != 2) goto LAB_109f11738;
LAB_109f11678:
      uVar13 = param_1[3];
      iVar16 = 299;
      FUN_109ecb0a8(uVar13,299);
    }
    func_0x000109f14434(param_1,param_3,param_4);
LAB_109f11874:
    *(undefined8 *)(uVar13 + 0x80) = 0;
    *(undefined8 *)(uVar13 + 0x88) = 0;
    *(undefined8 *)(uVar13 + 0x90) = 0;
    *(ulong **)(uVar13 + 0x98) = puVar8;
  }
  puStack_70 = param_1 + 3;
  iVar29 = (int)param_4;
  uVar17 = *(uint *)(uVar13 + 0x28);
  if ((ulong)(byte)(&UNK_110b671ba)[(ulong)uVar17 * 0x68] != 0) {
    *(undefined4 *)(uVar13 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar17 * 0x68] * 4 + 0x50) =
         *(undefined4 *)
          (param_2 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] * 4 +
          0x50);
  }
  if (iVar16 == 0x14e) {
    *(undefined4 *)(uVar13 + (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar17 * 0x68] * 4 + 0x50) = 0;
    uVar5 = *(undefined4 *)(*puStack_70 + 0x19c);
LAB_109f11968:
    *(undefined4 *)(uVar13 + (ulong)(byte)(&UNK_110b671ae)[(ulong)uVar17 * 0x68] * 4 + 0x50) = uVar5
    ;
  }
  else {
    if (iVar16 == 0xff) {
      *(undefined4 *)(uVar13 + (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar17 * 0x68] * 4 + 0x50) = 0;
      uVar5 = *(undefined4 *)(*puStack_70 + 0x1b8);
      goto LAB_109f11968;
    }
    if (param_5 == 0x100) {
      iVar6 = *(int *)(lVar31 + 0x28);
      lVar32 = lVar31;
      while (iVar6 != 0) {
        lVar32 = **(long **)(lVar32 + 0x50);
        iVar6 = *(int *)(lVar32 + 0x28);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      *(undefined4 *)(uVar13 + (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar17 * 0x68] * 4 + 0x50) = 0;
      uVar9 = *(undefined8 *)(lVar32 + 0x10);
      FUN_109ec96e8(uVar9,0);
      uVar5 = (undefined4)uVar9;
      uVar17 = *(uint *)(uVar13 + 0x28);
      goto LAB_109f11968;
    }
  }
  uVar15 = 0x20;
  if (*(byte *)(param_2 + 0x4d) != 1) {
    uVar15 = (uint)*(byte *)(param_2 + 0x4d);
  }
  if (((ulong)(byte)(&UNK_110b671bd)[(ulong)uVar17 * 0x68] != 0) &&
     (bVar14 = (&UNK_110b671be)[(ulong)uVar17 * 0x68], (ulong)bVar14 != 0)) {
    *(int *)(uVar13 + 0x54 + (ulong)(byte)(&UNK_110b671bd)[(ulong)uVar17 * 0x68] * 4 + -4) =
         (int)param_6;
    *(int *)(uVar13 + 0x54 + (ulong)bVar14 * 4 + -4) = (int)param_7;
  }
  if ((&UNK_110b671ad)[(ulong)uVar17 * 0x68] != '\0') {
    uVar10 = *(ulong *)(lVar31 + 0x30);
    FUN_109ec96e8(uVar10,0);
    piVar30 = (int *)(lVar19 + 0x28);
    iVar6 = *piVar30;
    if (iVar6 != 0) {
      iVar33 = 0;
      do {
        iVar34 = (int)uVar10;
        lVar32 = **(long **)(lVar31 + 0x50);
        iVar7 = *(int *)(lVar32 + 0x18);
        lVar19 = lVar32;
        if (iVar7 != 1) {
          lVar19 = 0;
        }
        if (iVar6 - 1U < 3) {
          lVar11 = lVar31;
          FUN_109ef9984();
          iVar6 = (int)lVar11;
          if ((iVar6 == 0) || (lVar19 == 0)) break;
          if ((*piVar30 == 2) || (lVar19 = **(long **)(lVar31 + 0x70), *(int *)(lVar19 + 0x18) != 5)
             ) {
            iVar7 = (int)*(undefined8 *)(lVar32 + 0x30);
            FUN_109eca23c();
            if (iVar7 == 0) break;
            uVar10 = (ulong)(uint)(iVar34 + (iVar7 + -1) * iVar6);
          }
          else {
            uVar18 = (uint)*(undefined8 *)(lVar19 + 0x48);
            uVar17 = (*(byte *)(lVar19 + 0x45) & 0xaaaaaaaa) >> 1 |
                     (*(byte *)(lVar19 + 0x45) & 0x55555555) << 1;
            uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
            uVar23 = (uint)LZCOUNT((uVar17 >> 4 | (uVar17 & 0xf0f0f0f) << 4) << 0x18);
            uVar17 = uVar18 & 0xff;
            if (uVar23 != 3) {
              uVar17 = uVar18 & 0xffff;
            }
            uVar1 = uVar18 & 1;
            if (uVar23 != 0) {
              uVar1 = uVar17;
            }
            if (uVar23 < 5) {
              uVar18 = uVar1;
            }
            iVar33 = iVar33 + iVar6 * uVar18;
          }
        }
        else {
          if (iVar6 != 4) {
            if (iVar6 != 5) break;
            if (iVar7 == 4) {
              if (*(int *)(lVar32 + 0x28) == 0x21a) goto LAB_109f11c74;
              break;
            }
            if (iVar7 != 5) break;
            lVar19 = 0x50;
            if ((iVar29 != 5) && (iVar29 != 9)) {
              if (iVar29 != 7) break;
              lVar19 = 0x58;
            }
            iVar33 = *(int *)(lVar32 + lVar19) + iVar33;
            goto LAB_109f11c74;
          }
          if (lVar19 == 0) break;
          iVar33 = *(int *)(*(long *)(*(long *)(lVar32 + 0x30) + 0x30) +
                            (ulong)*(uint *)(lVar31 + 0x58) * 0x30 + 0x18) + iVar33;
        }
        piVar30 = (int *)(lVar32 + 0x28);
        iVar6 = *piVar30;
        lVar31 = lVar32;
      } while (iVar6 != 0);
    }
    iVar33 = 0;
    iVar34 = -1;
LAB_109f11c74:
    lVar19 = (ulong)*(uint *)(uVar13 + 0x28) * 0x68;
    *(int *)(uVar13 + 0x54 + (ulong)(byte)(&UNK_110b671ad)[lVar19] * 4 + -4) = iVar33;
    *(int *)(uVar13 + 0x54 + (ulong)(byte)(&UNK_110b671ae)[lVar19] * 4 + -4) = iVar34;
    param_8 = param_8 & 0xffffffff;
  }
  *(char *)(uVar13 + 0x50) = (char)param_8;
  puVar8 = (ulong *)(uVar13 + 0x30);
  FUN_109ecb048(uVar13,puVar8,param_8,uVar15);
  if ((iVar29 == 4) && (iVar16 != 0x130)) {
    uVar10 = param_1[3];
    FUN_109ecafe4(uVar10,*(undefined1 *)(uVar13 + 0x50),uVar15);
    FUN_109ecb4f0(*param_1,param_1[1],uVar10);
    *param_1 = 3;
    param_1[1] = uVar10;
    puVar22 = param_1;
    FUN_109f16008(param_1,param_3,uVar15 >> 3);
    FUN_109ece6c4(param_1,puVar22);
    FUN_109ecb4f0(*param_1,param_1[1],uVar13);
    *param_1 = 3;
    param_1[1] = uVar13;
    puVar22 = *(ulong **)(*(long *)(uVar13 + 0x10) + 0x18);
    if ((int)puVar22[2] == 0) {
      uVar13 = 1;
      puVar20 = puVar22;
    }
    else {
      uVar13 = 0;
      puVar20 = (ulong *)0x0;
      if (*(ulong *)*puVar22 != 0) {
        puVar20 = (ulong *)*puVar22;
      }
    }
    *param_1 = uVar13;
    param_1[1] = (ulong)puVar20;
    puVar22 = param_1;
    FUN_109ece7d4(param_1,puVar8,uVar10 + 0x28);
    puVar8 = puVar22;
  }
  else {
    FUN_109ecb4f0(*param_1,param_1[1],uVar13);
    *param_1 = 3;
    param_1[1] = uVar13;
  }
  if (*(char *)(param_2 + 0x4d) != '\x01') {
    return puVar8;
  }
  if (((param_5 == 0x20000) || (param_5 == 0x80000)) || (param_5 == 0x40000)) {
    if (*(char *)((long)puVar8 + 0x1d) == '\x01') {
      return puVar8;
    }
    uVar13 = param_1[3];
    FUN_109ecaef8(uVar13,0x1a);
    if (uVar13 == 0) {
      return (ulong *)0x0;
    }
    *(undefined8 *)(uVar13 + 0x50) = 0;
    *(undefined8 *)(uVar13 + 0x58) = 0;
    *(undefined8 *)(uVar13 + 0x60) = 0;
    *(ulong **)(uVar13 + 0x68) = puVar8;
  }
  else {
    uVar2 = *(undefined1 *)((long)puVar8 + 0x1d);
    puVar12 = *(undefined8 **)*puStack_70;
    FUN_109f6600c(puVar12,0x50,8);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
    }
    *(undefined4 *)(puVar12 + 3) = 5;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    FUN_109ecb048(puVar12,puVar12 + 5,1,uVar2);
    puVar12[9] = 0;
    FUN_109ecb4f0(*param_1,param_1[1],puVar12);
    *param_1 = 3;
    param_1[1] = (ulong)puVar12;
    uVar13 = param_1[3];
    FUN_109ecaef8(uVar13,0x141);
    if (uVar13 == 0) {
      return (ulong *)0x0;
    }
    *(undefined8 *)(uVar13 + 0x50) = 0;
    *(undefined8 *)(uVar13 + 0x58) = 0;
    *(undefined8 *)(uVar13 + 0x60) = 0;
    *(ulong **)(uVar13 + 0x68) = puVar8;
    *(undefined8 *)(uVar13 + 0x80) = 0;
    *(undefined8 *)(uVar13 + 0x88) = 0;
    *(undefined8 *)(uVar13 + 0x90) = 0;
    *(undefined8 **)(uVar13 + 0x98) = puVar12 + 5;
  }
  lVar19 = (ulong)*(uint *)(uVar13 + 0x28) * 0x68;
  uVar3 = *(ushort *)(uVar13 + 0x2c) & 0xfffe | (ushort)(byte)param_1[2];
  *(ushort *)(uVar13 + 0x2c) = uVar3;
  *(ushort *)(uVar13 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
  bVar14 = (&UNK_110b78541)[lVar19];
  if (bVar14 == 0) {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar19];
    if ((&UNK_110b78540)[lVar19] == 0) {
      bVar14 = 0;
      uVar17 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar19) & 0x79) != 0) {
        uVar17 = *(uint *)(&UNK_110b78544 + lVar19) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar14 = 0;
    plVar24 = (long *)(uVar13 + 0x68);
    pcVar26 = &UNK_110b78548 + lVar19;
    uVar25 = uVar10;
    do {
      if ((*pcVar26 == '\0') && (bVar14 <= *(byte *)(*plVar24 + 0x1c))) {
        bVar14 = *(byte *)(*plVar24 + 0x1c);
      }
      plVar24 = plVar24 + 6;
      uVar25 = uVar25 - 1;
      pcVar26 = pcVar26 + 1;
    } while (uVar25 != 0);
  }
  else {
    uVar10 = (ulong)(byte)(&UNK_110b78540)[lVar19];
  }
  uVar15 = *(uint *)(&UNK_110b78544 + lVar19) & 0x79;
  if (uVar15 == 0) {
    if ((int)uVar10 == 0) {
      uVar17 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar24 = (long *)(uVar13 + 0x68);
    puVar27 = (uint *)(&UNK_110b78558 + lVar19);
    uVar25 = uVar10;
    uVar17 = 0;
    do {
      uVar15 = (uint)*(byte *)(*plVar24 + 0x1d);
      if ((*puVar27 & 0x79) != 0 || uVar17 != 0) {
        uVar15 = uVar17;
      }
      uVar25 = uVar25 - 1;
      plVar24 = plVar24 + 6;
      puVar27 = puVar27 + 1;
      uVar17 = uVar15;
    } while (uVar25 != 0);
  }
  else {
    uVar17 = uVar15;
    if ((int)uVar10 == 0) goto LAB_109ece0a8;
  }
  uVar25 = 0;
  lVar19 = uVar13 + 0x70;
  do {
    lVar31 = *(long *)(uVar13 + uVar25 * 0x30 + 0x68);
    uVar28 = (ulong)*(byte *)(lVar31 + 0x1c);
    if (uVar28 < 0x10) {
      do {
        *(char *)(lVar19 + uVar28) = *(char *)(lVar31 + 0x1c) + -1;
        uVar28 = uVar28 + 1;
      } while (uVar28 != 0x10);
    }
    uVar25 = uVar25 + 1;
    lVar19 = lVar19 + 0x30;
  } while (uVar25 != uVar10);
  uVar17 = 0x20;
  if (uVar15 != 0) {
    uVar17 = uVar15;
  }
LAB_109ece0a8:
  FUN_109ecb048(uVar13,uVar13 + 0x30,bVar14,uVar17);
  FUN_109ecb4f0(*param_1,param_1[1],uVar13);
  *param_1 = 3;
  param_1[1] = uVar13;
  return (ulong *)(uVar13 + 0x30);
}



/* Entry: 109f12b04; end: 109f12b3f;  */

ulong FUN_109f12b04(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (param_1 & 0xaaaaaaaa) >> 1 | (param_1 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar1 = param_2 & 0xffffffff;
  if (uVar3 != 5) {
    uVar1 = param_2;
  }
  uVar2 = param_2 & 0xffff;
  if (uVar3 != 4) {
    uVar2 = uVar1;
  }
  uVar1 = param_2 & 1;
  if (uVar3 != 0) {
    uVar1 = param_2 & 0xff;
  }
  if (uVar3 < 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 109f12b40; end: 109f13f47;  */

/* WARNING: Type propagation algorithm not settling */

uint FUN_109f12b40(ulong param_1,ulong *******param_2,ulong *******param_3)

{
  ulong *****pppppuVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulong *******pppppppuVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong *******pppppppuVar10;
  ulong *****pppppuVar11;
  long *plVar12;
  uint uVar13;
  ulong ******ppppppuVar14;
  long *plVar15;
  long lVar16;
  byte bVar17;
  undefined8 unaff_x19;
  ulong ***pppuVar18;
  ulong ******ppppppuVar19;
  ulong *******pppppppuVar20;
  undefined8 unaff_x20;
  uint uVar21;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******pppppppuVar22;
  ulong uVar23;
  ulong *******unaff_x23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  long lVar26;
  ulong *******unaff_x24;
  long *plVar27;
  undefined8 unaff_x25;
  ulong ******ppppppuVar28;
  bool bVar29;
  ulong *******unaff_x26;
  ulong *******unaff_x27;
  uint uVar30;
  ulong *******unaff_x28;
  int iStack_1d8;
  int iStack_1d4;
  ulong *******pppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  ushort uStack_170;
  long lStack_168;
  long *plStack_160;
  uint uStack_158;
  uint uStack_154;
  ulong *******pppppppuStack_150;
  long lStack_148;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  ulong *******pppppppuStack_130;
  uint uStack_124;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  undefined8 uStack_110;
  ulong *******pppppppuStack_108;
  long lStack_100;
  int iStack_f8;
  uint uStack_f4;
  ulong ******appppppuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = *(long **)(param_1 + 0x178);
  for (plVar15 = (long *)**(long **)(param_1 + 0x178); plVar15 != (long *)0x0;
      plVar15 = (long *)*plVar15) {
    lVar16 = plVar27[6];
    unaff_x27 = param_3;
    unaff_x28 = param_2;
    if (lVar16 != 0) {
      uVar9 = 0;
      uStack_124 = (uint)param_3;
      uStack_154 = uStack_124 - 3;
      uStack_134 = (uint)param_2;
      goto LAB_109f12bbc;
    }
    plVar27 = plVar15;
  }
  uVar9 = 0;
LAB_109f13c34:
  uVar30 = (uint)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar9 & 1;
  }
  ___stack_chk_fail();
  uStack_178 = 0x109f13c74;
  pppppppuStack_1d0 = unaff_x28;
  pppppppuStack_1c8 = unaff_x27;
  pppppppuStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  pppppppuStack_1b0 = unaff_x24;
  pppppppuStack_1a8 = unaff_x23;
  pppppppuStack_1a0 = unaff_x22;
  pppppppuStack_198 = unaff_x21;
  uStack_190 = unaff_x20;
  uStack_188 = unaff_x19;
  puStack_180 = &stack0xfffffffffffffff0;
  if ((uVar30 >> 1 & 1) == 0) {
    uVar23 = 0;
    uVar9 = 0;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,2,param_3);
    uVar9 = (uint)uVar23;
  }
  if ((uVar30 >> 0x14 & 1) != 0) {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x100000,param_3);
    uVar23 = (ulong)(uVar9 | (uint)uVar23);
  }
  uVar9 = (uint)uVar23;
  if ((uVar30 >> 0x13 & 1) != 0) {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x80000,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 0x11 & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x20000,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 10 & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x400,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 5 & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x20,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 6 & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x40,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 0xb & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x800,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 0xc & 1) == 0) {
    uVar9 = (uint)uVar23;
  }
  else {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x1000,param_3);
    uVar9 = uVar9 | (uint)uVar23;
    uVar23 = (ulong)uVar9;
  }
  if ((uVar30 >> 0xd & 1) != 0) {
    uVar23 = param_1;
    FUN_109f13f48(param_1,param_1 + 8,0x2000,param_3);
    uVar23 = (ulong)(uVar9 | (uint)uVar23);
  }
  uVar9 = (uint)uVar23;
  plVar27 = *(long **)(param_1 + 0x178);
  plVar15 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar15 == (long *)0x0) {
LAB_109f13d40:
      return uVar9 & 1;
    }
    lVar16 = plVar27[6];
    if (lVar16 != 0) goto LAB_109f13d80;
    plVar27 = plVar15;
    plVar15 = (long *)*plVar15;
  } while( true );
LAB_109f12bbc:
  pppppppuStack_120 = (ulong *******)0x0;
  pppppppuStack_118 = (ulong *******)0x0;
  pppppppuStack_108 = *(ulong ********)(*(long *)(lVar16 + 0x20) + 0x18);
  uStack_110 = 0;
  lVar26 = *(long *)(lVar16 + 0x48);
  plVar15 = plVar27;
  lStack_100 = lVar16;
  if (lVar26 == 0) {
LAB_109f13c00:
    uVar30 = 0xfffffff7;
  }
  else {
    unaff_x19 = 0;
    lStack_168 = lVar16;
    plStack_160 = plVar27;
    uStack_158 = uVar9;
    do {
      pppppppuVar22 = *(ulong ********)(lVar26 + 0x38);
      unaff_x21 = (ulong *******)pppppppuVar22[1];
      unaff_x22 = pppppppuVar22;
      if (unaff_x21 != (ulong *******)0x0) {
        do {
          lStack_148 = lVar26;
          pppppppuVar24 = (ulong *******)0x0;
          unaff_x22 = pppppppuVar22;
          if (unaff_x21[1] != (ulong ******)0x0) {
            pppppppuVar24 = unaff_x21;
          }
          do {
            pppppppuVar22 = pppppppuVar24;
            uVar9 = (uint)unaff_x27;
            uVar30 = (uint)unaff_x28;
            if (*(uint *)(unaff_x22 + 3) != 4) {
              if ((*(uint *)(unaff_x22 + 3) != 1) ||
                 (uVar13 = *(uint *)((long)unaff_x22 + 0x2c), (uVar13 & uVar30) == 0))
              goto LAB_109f13a90;
              if (((uVar13 >> 1 & 1) == 0) || (1 < *(byte *)((long)unaff_x22[6] + 4) - 0xd)) {
                if ((ulong *******)unaff_x22[0x12] == unaff_x22 + 0x11) {
                  FUN_109ecb9c0(unaff_x22);
                }
                else {
                  pppppppuStack_120 = (ulong *******)0x3;
                  uVar30 = *(uint *)(unaff_x22 + 5);
                  if (uVar30 == 0) {
                    ppppppuVar19 = unaff_x22[7];
                    unaff_x24 = (ulong *******)
                                (ulong)*(uint *)(&UNK_10e06d9a4 +
                                                ((ulong)unaff_x27 & 0xffffffff) * 4);
                    uVar3 = (undefined1)
                            *(undefined4 *)(&UNK_10e06d91c + ((ulong)unaff_x27 & 0xffffffff) * 4);
                    if ((int)uVar9 < 8) {
                      uVar9 = (*(uint *)(ppppppuVar19 + 4) & 0xaaaaa) >> 1 |
                              (*(uint *)(ppppppuVar19 + 4) & 0x155555) << 1;
                      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
                      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
                      uVar30 = uVar9 & 0xff00ff;
                      uVar9 = (uint)LZCOUNT(uVar30 >> 8 |
                                            ((uVar9 & 0xff00ff00) >> 8 | uVar30 << 8) << 0x10);
                      pppppppuVar24 = pppppppuStack_108;
                      if (uVar9 < 0x12) {
                        if (uVar9 == 10) {
                          uVar8 = 0x101;
                          goto LAB_109f13898;
                        }
                        pppppppuStack_118 = unaff_x22;
                        FUN_109ecb0a8(pppppppuStack_108,0x1c2);
                        *(undefined1 *)(pppppppuVar24 + 10) = uVar3;
                        param_2 = pppppppuVar24 + 6;
                        FUN_109ecb048();
                        *(undefined4 *)
                         ((long)pppppppuVar24 +
                         (ulong)(byte)(&UNK_110b671a9)[(ulong)*(uint *)(pppppppuVar24 + 5) * 0x68] *
                         4 + 0x50) = 0;
                      }
                      else if (uVar9 == 0x12) {
                        pppppppuStack_118 = unaff_x22;
                        FUN_109ecb0a8(pppppppuStack_108,0x1c2);
                        *(undefined1 *)(pppppppuVar24 + 10) = uVar3;
                        param_2 = pppppppuVar24 + 6;
                        FUN_109ecb048();
                        *(undefined4 *)
                         ((long)pppppppuVar24 +
                         (ulong)(byte)(&UNK_110b671a9)[(ulong)*(uint *)(pppppppuVar24 + 5) * 0x68] *
                         4 + 0x50) = 1;
                      }
                      else {
                        if (uVar9 == 0x13) {
                          uVar8 = 0x1c9;
                        }
                        else {
                          uVar8 = 0x12d;
                        }
LAB_109f13898:
                        pppppppuStack_118 = unaff_x22;
                        FUN_109ecb0a8(pppppppuStack_108,uVar8);
                        *(undefined1 *)(pppppppuVar24 + 10) = uVar3;
                        param_2 = pppppppuVar24 + 6;
                        FUN_109ecb048();
                      }
                      FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar24);
                      uVar23 = (ulong)*(uint *)((long)ppppppuVar19 + 0x44);
                      uVar13 = *(uint *)(ppppppuVar19 + 4) & 0x1fffff;
                      unaff_x26 = param_2;
                      pppppppuStack_118 = pppppppuVar24;
LAB_109f13928:
                      pppppppuStack_120 = (ulong *******)0x3;
                      unaff_x23 = (ulong *******)&pppppppuStack_120;
                      param_3 = unaff_x27;
                      FUN_109f10fd0(unaff_x23,param_2,unaff_x27,uVar13,uVar23);
                    }
                    else {
                      if (uVar9 == 8) {
                        uVar9 = (*(uint *)(ppppppuVar19 + 4) & 0x1fffff) - 0x20000 >> 0x11 |
                                *(uint *)(ppppppuVar19 + 4) << 0xf;
                        if (uVar9 < 2) {
                          uVar9 = *(uint *)((long)ppppppuVar19 + 0x44);
                          unaff_x24 = (ulong *******)*pppppppuStack_108;
                          pppppppuStack_118 = unaff_x22;
                          FUN_109f6600c(unaff_x24,0x50,8);
                          if (unaff_x24 != (ulong *******)0x0) {
                            unaff_x24[7] = (ulong ******)0x0;
                            unaff_x24[6] = (ulong ******)0x0;
                            unaff_x24[9] = (ulong ******)0x0;
                            unaff_x24[8] = (ulong ******)0x0;
                            unaff_x24[3] = (ulong ******)0x0;
                            unaff_x24[2] = (ulong ******)0x0;
                            unaff_x24[5] = (ulong ******)0x0;
                            unaff_x24[4] = (ulong ******)0x0;
                            unaff_x24[1] = (ulong ******)0x0;
                            *unaff_x24 = (ulong ******)0x0;
                          }
                          ppppppuVar19 = (ulong ******)((ulong)uVar9 | 0x8000000000000000);
                        }
                        else {
                          if (uVar9 != 3) {
                            pppppppuVar10 = pppppppuStack_108;
                            pppppppuStack_118 = unaff_x22;
                            FUN_109ecb0a8(pppppppuStack_108,0x12d);
                            *(undefined1 *)(pppppppuVar10 + 10) = uVar3;
                            pppppppuVar24 = pppppppuVar10 + 6;
                            FUN_109ecb048();
                            param_3 = pppppppuVar10;
                            FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar10);
                            pppppppuStack_120 = (ulong *******)0x3;
                            unaff_x24 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar10 + 0x4d);
                            uVar9 = (uint)*(byte *)((long)pppppppuVar10 + 0x4d);
                            uVar23 = 0xffffffff;
                            if (uVar9 != 0x40) {
                              uVar23 = (ulong)~(uint)(-1L << ((ulong)unaff_x24 & 0x3f));
                            }
                            pppppppuVar20 =
                                 (ulong *******)(uVar23 & *(uint *)((long)ppppppuVar19 + 0x44));
                            param_2 = pppppppuStack_118;
                            unaff_x23 = pppppppuVar24;
                            unaff_x26 = pppppppuVar10;
                            pppppppuStack_118 = pppppppuVar10;
                            if (pppppppuVar20 != (ulong *******)0x0) {
                              uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
                              uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
                              uVar9 = (uint)LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18)
                              ;
                              if (uVar9 < 5) {
                                if (uVar9 == 0) {
                                  unaff_x21 = (ulong *******)0x0;
                                  pppppppuVar20 = (ulong *******)0x1;
                                  unaff_x26 = (ulong *******)0x0;
                                }
                                else {
                                  unaff_x21 = (ulong *******)0x0;
                                  unaff_x26 = (ulong *******)0x0;
                                  if (uVar9 != 3) {
                                    unaff_x26 = pppppppuVar20;
                                  }
                                }
                              }
                              else {
                                unaff_x21 = (ulong *******)((ulong)pppppppuVar20 & 0xffff0000);
                                unaff_x26 = pppppppuVar20;
                              }
                              pppppppuVar10 = (ulong *******)*pppppppuStack_108;
                              FUN_109f6600c(pppppppuVar10,0x50,8);
                              if (pppppppuVar10 != (ulong *******)0x0) {
                                pppppppuVar10[7] = (ulong ******)0x0;
                                pppppppuVar10[6] = (ulong ******)0x0;
                                pppppppuVar10[9] = (ulong ******)0x0;
                                pppppppuVar10[8] = (ulong ******)0x0;
                                pppppppuVar10[3] = (ulong ******)0x0;
                                pppppppuVar10[2] = (ulong ******)0x0;
                                pppppppuVar10[5] = (ulong ******)0x0;
                                pppppppuVar10[4] = (ulong ******)0x0;
                                pppppppuVar10[1] = (ulong ******)0x0;
                                *pppppppuVar10 = (ulong ******)0x0;
                              }
                              *(uint *)(pppppppuVar10 + 3) = 5;
                              pppppppuVar10[1] = (ulong ******)0x0;
                              pppppppuVar10[2] = (ulong ******)0x0;
                              *pppppppuVar10 = (ulong ******)0x0;
                              FUN_109ecb048(pppppppuVar10,pppppppuVar10 + 5,1,unaff_x24);
                              pppppppuVar10[9] =
                                   (ulong ******)
                                   ((ulong)unaff_x26 & 0xff00 | (ulong)unaff_x21 |
                                   (ulong)pppppppuVar20 & 0xff);
                              FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar10);
                              pppppppuStack_120 = (ulong *******)0x3;
                              unaff_x23 = (ulong *******)&pppppppuStack_120;
                              param_2 = (ulong *******)0x11d;
                              pppppppuStack_118 = pppppppuVar10;
                              FUN_109ece1b0(unaff_x23,0x11d,pppppppuVar24,pppppppuVar10 + 5);
                              param_3 = pppppppuVar24;
                            }
                            goto LAB_109f13a38;
                          }
                          uVar9 = *(uint *)((long)ppppppuVar19 + 0x44);
                          unaff_x24 = (ulong *******)*pppppppuStack_108;
                          pppppppuStack_118 = unaff_x22;
                          FUN_109f6600c(unaff_x24,0x50,8);
                          if (unaff_x24 != (ulong *******)0x0) {
                            unaff_x24[7] = (ulong ******)0x0;
                            unaff_x24[6] = (ulong ******)0x0;
                            unaff_x24[9] = (ulong ******)0x0;
                            unaff_x24[8] = (ulong ******)0x0;
                            unaff_x24[3] = (ulong ******)0x0;
                            unaff_x24[2] = (ulong ******)0x0;
                            unaff_x24[5] = (ulong ******)0x0;
                            unaff_x24[4] = (ulong ******)0x0;
                            unaff_x24[1] = (ulong ******)0x0;
                            *unaff_x24 = (ulong ******)0x0;
                          }
                          ppppppuVar19 = (ulong ******)((ulong)uVar9 | 0x4000000000000000);
                        }
                        *(uint *)(unaff_x24 + 3) = 5;
                        unaff_x24[1] = (ulong ******)0x0;
                        unaff_x24[2] = (ulong ******)0x0;
                        unaff_x23 = unaff_x24 + 5;
                        *unaff_x24 = (ulong ******)0x0;
                        FUN_109ecb048(unaff_x24,unaff_x23,1,0x40);
                        unaff_x24[9] = ppppppuVar19;
                        param_3 = unaff_x24;
                        FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,unaff_x24);
                      }
                      else {
                        if (uVar9 == 9) {
                          uVar9 = *(uint *)((long)ppppppuVar19 + 0x44);
                          unaff_x24 = (ulong *******)*pppppppuStack_108;
                          pppppppuStack_118 = unaff_x22;
                          FUN_109f6600c(unaff_x24,0x50,8);
                          if (unaff_x24 != (ulong *******)0x0) {
                            unaff_x24[7] = (ulong ******)0x0;
                            unaff_x24[6] = (ulong ******)0x0;
                            unaff_x24[9] = (ulong ******)0x0;
                            unaff_x24[8] = (ulong ******)0x0;
                            unaff_x24[3] = (ulong ******)0x0;
                            unaff_x24[2] = (ulong ******)0x0;
                            unaff_x24[5] = (ulong ******)0x0;
                            unaff_x24[4] = (ulong ******)0x0;
                            unaff_x24[1] = (ulong ******)0x0;
                            *unaff_x24 = (ulong ******)0x0;
                          }
                          *(uint *)(unaff_x24 + 3) = 5;
                          unaff_x24[1] = (ulong ******)0x0;
                          unaff_x24[2] = (ulong ******)0x0;
                          *unaff_x24 = (ulong ******)0x0;
                          uVar8 = 0x20;
                        }
                        else {
                          uVar9 = *(uint *)((long)ppppppuVar19 + 0x44);
                          unaff_x24 = (ulong *******)*pppppppuStack_108;
                          pppppppuStack_118 = unaff_x22;
                          FUN_109f6600c(unaff_x24,0x50,8);
                          if (unaff_x24 != (ulong *******)0x0) {
                            unaff_x24[7] = (ulong ******)0x0;
                            unaff_x24[6] = (ulong ******)0x0;
                            unaff_x24[9] = (ulong ******)0x0;
                            unaff_x24[8] = (ulong ******)0x0;
                            unaff_x24[3] = (ulong ******)0x0;
                            unaff_x24[2] = (ulong ******)0x0;
                            unaff_x24[5] = (ulong ******)0x0;
                            unaff_x24[4] = (ulong ******)0x0;
                            unaff_x24[1] = (ulong ******)0x0;
                            *unaff_x24 = (ulong ******)0x0;
                          }
                          *(uint *)(unaff_x24 + 3) = 5;
                          unaff_x24[1] = (ulong ******)0x0;
                          unaff_x24[2] = (ulong ******)0x0;
                          *unaff_x24 = (ulong ******)0x0;
                          uVar8 = 0x40;
                        }
                        unaff_x23 = unaff_x24 + 5;
                        FUN_109ecb048(unaff_x24,unaff_x23,1,uVar8);
                        unaff_x24[9] = (ulong ******)(ulong)uVar9;
                        param_3 = unaff_x24;
                        FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,unaff_x24);
                      }
                      pppppppuStack_120 = (ulong *******)0x3;
                      param_2 = pppppppuStack_118;
                      pppppppuStack_118 = unaff_x24;
                    }
                  }
                  else {
                    pppppppuVar24 = (ulong *******)unaff_x22[10];
                    if ((int)uVar30 < 4) {
                      unaff_x24 = unaff_x22;
                      pppppppuStack_118 = unaff_x22;
                      FUN_109ef9984();
                      bVar17 = 0x20;
                      if ((uVar9 != 6) && (uVar9 != 10)) {
                        bVar17 = *(byte *)((long)pppppppuVar24 + 0x1d);
                      }
                      pppppppuVar10 = (ulong *******)unaff_x22[0xe];
                      if ((*(char *)(unaff_x22 + 0xf) == '\x01') && (*(uint *)(unaff_x22 + 5) == 1))
                      {
                        pppppppuVar20 = pppppppuVar10;
                        if (*(char *)((long)pppppppuVar10 + 0x1d) != ' ') {
                          pppppppuVar20 = (ulong *******)&pppppppuStack_120;
                          FUN_109ece168(pppppppuVar20,0x184,pppppppuVar10);
                        }
                        pppppppuVar25 = (ulong *******)&pppppppuStack_120;
                        FUN_109f1111c(pppppppuVar25,pppppppuVar20,(ulong)unaff_x24 & 0xffffffff);
                        pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                        FUN_109ece954(pppppppuVar10,pppppppuVar25,4,bVar17 | 4,0);
                      }
                      else {
                        pppppppuVar20 = (ulong *******)&pppppppuStack_120;
                        FUN_109ece954(pppppppuVar20,pppppppuVar10,2,bVar17 | 2,0);
                        pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                        FUN_109f1111c(pppppppuVar10,pppppppuVar20,(ulong)unaff_x24 & 0xffffffff);
                      }
                      unaff_x23 = (ulong *******)&pppppppuStack_120;
                      param_3 = unaff_x27;
                      FUN_109f109d8(unaff_x23,pppppppuVar24,unaff_x27,
                                    *(uint *)((long)unaff_x22 + 0x2c),pppppppuVar10);
                      param_2 = pppppppuVar24;
                    }
                    else {
                      unaff_x23 = pppppppuVar24;
                      pppppppuStack_118 = unaff_x22;
                      if (uVar30 == 4) {
                        uVar23 = (ulong)*(int *)((*pppppppuVar24)[6][6] +
                                                (ulong)*(uint *)(unaff_x22 + 0xb) * 6 + 3);
                        param_2 = pppppppuVar24;
                        pppppppuStack_118 = unaff_x22;
                        goto LAB_109f13928;
                      }
                    }
                  }
LAB_109f13a38:
                  FUN_109ecb9c0(unaff_x22);
                  if ((ulong *******)(unaff_x22[0x12] + -1) != unaff_x22 + 0x10) {
                    ppppppuVar19 = unaff_x22[0x12];
                    do {
                      pppppuVar1 = *ppppppuVar19;
                      ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                      pppppuVar1[1] = (ulong ****)ppppppuVar28;
                      *ppppppuVar28 = pppppuVar1;
                      ppppppuVar19[1] = (ulong *****)(unaff_x23 + 1);
                      ppppppuVar19[2] = (ulong *****)unaff_x23;
                      *ppppppuVar19 = (ulong *****)0x0;
                      ppppppuVar14 = unaff_x23[1];
                      *ppppppuVar19 = (ulong *****)ppppppuVar14;
                      ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                      unaff_x23[1] = ppppppuVar19;
                      ppppppuVar19 = ppppppuVar28;
                    } while ((ulong *******)(ppppppuVar28 + -1) != unaff_x22 + 0x10);
                  }
                }
              }
LAB_109f13a8c:
              unaff_x19 = 1;
              goto LAB_109f13a90;
            }
            uVar13 = *(uint *)(unaff_x22 + 5);
            if ((int)uVar13 < 0xc9) {
              if (uVar13 - 0x62 < 2) goto LAB_109f12d54;
              if (uVar13 == 100) {
                if ((*(uint *)((long)*unaff_x22[0x13] + 0x2c) & uVar30) == 0) goto LAB_109f13a90;
                pppppppuStack_120 = (ulong *******)0x3;
                pppppuVar11 = *unaff_x22[0x13];
                pppppuVar1 = pppppuVar11;
                if (*(int *)(pppppuVar11 + 3) != 1) {
                  pppppuVar1 = (ulong *****)0x0;
                }
                pppppppuStack_130 = (ulong *******)(ulong)*(uint *)(pppppuVar11[6] + 5);
                ppppppuVar19 = (ulong ******)(pppppuVar1 + 0x10);
                if (uStack_154 < 2) {
                  unaff_x21 = pppppppuStack_108;
                  pppppppuStack_118 = unaff_x22;
                  FUN_109ecaef8(pppppppuStack_108,0x154);
                  pppppppuVar24 = unaff_x21 + 6;
                  FUN_109ecb048();
                  *(ushort *)((long)unaff_x21 + 0x2c) =
                       *(ushort *)((long)unaff_x21 + 0x2c) & 0xf000 |
                       (*(ushort *)((long)unaff_x21 + 0x2c) & 0xf006 | (ushort)(byte)uStack_110) & 7
                       | (uStack_110._4_2_ & 0x1ff) << 3;
                  unaff_x21[10] = (ulong ******)0x0;
                  unaff_x21[0xb] = (ulong ******)0x0;
                  unaff_x21[0xc] = (ulong ******)0x0;
                  unaff_x21[0xd] = ppppppuVar19;
                  *(undefined1 *)(unaff_x21 + 0xe) = 3;
                  *(undefined8 *)((long)unaff_x21 + 0x71) = 0;
                  unaff_x21[0xf] = (ulong ******)0x0;
                  FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,unaff_x21);
                  pppppppuStack_120 = (ulong *******)0x3;
                  pppppppuVar10 = pppppppuStack_108;
                  pppppppuStack_118 = unaff_x21;
                  FUN_109ecaef8(pppppppuStack_108,0x154);
                  FUN_109ecb048();
                  *(ushort *)((long)pppppppuVar10 + 0x2c) =
                       *(ushort *)((long)pppppppuVar10 + 0x2c) & 0xf000 |
                       (*(ushort *)((long)pppppppuVar10 + 0x2c) & 0xf006 | (ushort)(byte)uStack_110)
                       & 7 | (uStack_110._4_2_ & 0x1ff) << 3;
                  pppppppuVar10[10] = (ulong ******)0x0;
                  pppppppuVar10[0xb] = (ulong ******)0x0;
                  pppppppuVar10[0xc] = (ulong ******)0x0;
                  pppppppuVar10[0xd] = ppppppuVar19;
                  *(undefined1 *)(pppppppuVar10 + 0xe) = 2;
                  *(undefined8 *)((long)pppppppuVar10 + 0x71) = 0;
                  pppppppuVar10[0xf] = (ulong ******)0x0;
                  unaff_x27 = (ulong *******)(ulong)uStack_124;
                }
                else {
                  pppppppuVar24 = (ulong *******)&pppppppuStack_120;
                  unaff_x27 = (ulong *******)(ulong)uStack_124;
                  pppppppuStack_118 = unaff_x22;
                  FUN_109f15d9c(pppppppuVar24,ppppppuVar19,unaff_x27);
                  unaff_x21 = (ulong *******)&pppppppuStack_120;
                  FUN_109f15f0c(unaff_x21,ppppppuVar19,unaff_x27);
                  uVar2 = *(undefined4 *)
                           ((long)unaff_x22 +
                           (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(unaff_x22 + 5) * 0x68] * 4
                           + 0x50);
                  pppppppuVar10 = pppppppuStack_108;
                  FUN_109ecb0a8(pppppppuStack_108,0x88);
                  FUN_109ecb048();
                  pppppppuVar10[0x10] = (ulong ******)0x0;
                  pppppppuVar10[0x11] = (ulong ******)0x0;
                  pppppppuVar10[0x12] = (ulong ******)0x0;
                  pppppppuVar10[0x13] = (ulong ******)unaff_x21;
                  *(undefined4 *)
                   ((long)pppppppuVar10 +
                   (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(pppppppuVar10 + 5) * 0x68] * 4 +
                   0x50) = uVar2;
                }
                unaff_x26 = pppppppuVar10 + 6;
                FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar10);
                pppppppuStack_120 = (ulong *******)0x3;
                unaff_x23 = (ulong *******)&pppppppuStack_120;
                param_2 = (ulong *******)0x1c3;
                param_3 = unaff_x26;
                pppppppuStack_118 = pppppppuVar10;
                FUN_109ece1b0(unaff_x23,0x1c3,unaff_x26,pppppppuVar24);
                unaff_x24 = (ulong *******)(ulong)*(byte *)((long)unaff_x23 + 0x1d);
                uVar9 = (uint)*(byte *)((long)unaff_x23 + 0x1d);
                uVar23 = 0xffffffff;
                if (uVar9 != 0x40) {
                  uVar23 = (ulong)~(uint)(-1L << ((ulong)unaff_x24 & 0x3f));
                }
                pppppppuVar24 = (ulong *******)(uVar23 & (ulong)pppppppuStack_130);
                if ((int)pppppppuVar24 == 0) {
LAB_109f13488:
                  uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
                  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
                  uVar23 = (ulong)pppppppuVar24 & 0xffff0000;
                  uVar9 = (uint)LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18);
                  pppppppuVar10 = (ulong *******)0x0;
                  if (uVar9 != 3) {
                    pppppppuVar10 = pppppppuVar24;
                  }
                  pppppppuVar20 = (ulong *******)(ulong)(pppppppuVar24 != (ulong *******)0x0);
                  pppppppuVar25 = (ulong *******)0x0;
                  if (uVar9 != 0) {
                    pppppppuVar20 = pppppppuVar24;
                    pppppppuVar25 = pppppppuVar10;
                  }
                  unaff_x26 = pppppppuVar24;
                  unaff_x21 = pppppppuVar24;
                  if (uVar9 < 5) {
                    uVar23 = 0;
                    unaff_x26 = pppppppuVar20;
                    unaff_x21 = pppppppuVar25;
                  }
                  pppppppuVar24 = (ulong *******)*pppppppuStack_108;
                  FUN_109f6600c(pppppppuVar24,0x50,8);
                  if (pppppppuVar24 != (ulong *******)0x0) {
                    pppppppuVar24[7] = (ulong ******)0x0;
                    pppppppuVar24[6] = (ulong ******)0x0;
                    pppppppuVar24[9] = (ulong ******)0x0;
                    pppppppuVar24[8] = (ulong ******)0x0;
                    pppppppuVar24[3] = (ulong ******)0x0;
                    pppppppuVar24[2] = (ulong ******)0x0;
                    pppppppuVar24[5] = (ulong ******)0x0;
                    pppppppuVar24[4] = (ulong ******)0x0;
                    pppppppuVar24[1] = (ulong ******)0x0;
                    *pppppppuVar24 = (ulong ******)0x0;
                  }
                  *(uint *)(pppppppuVar24 + 3) = 5;
                  pppppppuVar24[1] = (ulong ******)0x0;
                  pppppppuVar24[2] = (ulong ******)0x0;
                  *pppppppuVar24 = (ulong ******)0x0;
                  FUN_109ecb048(pppppppuVar24,pppppppuVar24 + 5,1,unaff_x24);
                  pppppppuVar24[9] =
                       (ulong ******)((ulong)unaff_x21 & 0xff00 | uVar23 | (ulong)unaff_x26 & 0xff);
                  FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar24);
                  param_2 = (ulong *******)0x18e;
                  pppppppuStack_118 = pppppppuVar24;
LAB_109f13548:
                  pppppppuStack_120 = (ulong *******)0x3;
                  pppppppuVar24 = (ulong *******)&pppppppuStack_120;
                  FUN_109ece1b0(pppppppuVar24,param_2,unaff_x23,pppppppuStack_118 + 5);
                  param_3 = unaff_x23;
                  unaff_x23 = pppppppuVar24;
                }
                else if ((int)pppppppuVar24 != 1) {
                  if (((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) != 0) goto LAB_109f13488;
                  uVar23 = ((ulong)pppppppuVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                           ((ulong)pppppppuVar24 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  ppppppuVar19 = (ulong ******)
                                 LZCOUNT((uVar23 >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10) <<
                                         0x20);
                  if (ppppppuVar19 == (ulong ******)0x0) goto LAB_109f13554;
                  unaff_x24 = (ulong *******)*pppppppuStack_108;
                  FUN_109f6600c(unaff_x24,0x50,8);
                  if (unaff_x24 != (ulong *******)0x0) {
                    unaff_x24[7] = (ulong ******)0x0;
                    unaff_x24[6] = (ulong ******)0x0;
                    unaff_x24[9] = (ulong ******)0x0;
                    unaff_x24[8] = (ulong ******)0x0;
                    unaff_x24[3] = (ulong ******)0x0;
                    unaff_x24[2] = (ulong ******)0x0;
                    unaff_x24[5] = (ulong ******)0x0;
                    unaff_x24[4] = (ulong ******)0x0;
                    unaff_x24[1] = (ulong ******)0x0;
                    *unaff_x24 = (ulong ******)0x0;
                  }
                  *(uint *)(unaff_x24 + 3) = 5;
                  unaff_x24[1] = (ulong ******)0x0;
                  unaff_x24[2] = (ulong ******)0x0;
                  *unaff_x24 = (ulong ******)0x0;
                  FUN_109ecb048(unaff_x24,unaff_x24 + 5,1,0x20);
                  unaff_x24[9] = ppppppuVar19;
                  FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,unaff_x24);
                  param_2 = (ulong *******)0x1c0;
                  pppppppuStack_118 = unaff_x24;
                  goto LAB_109f13548;
                }
LAB_109f13554:
                pppppppuVar24 = unaff_x22 + 6;
                if ((ulong *******)(unaff_x22[8] + -1) != pppppppuVar24) {
                  ppppppuVar19 = unaff_x22[8];
                  do {
                    pppppuVar1 = *ppppppuVar19;
                    ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                    pppppuVar1[1] = (ulong ****)ppppppuVar28;
                    *ppppppuVar28 = pppppuVar1;
                    ppppppuVar19[1] = (ulong *****)(unaff_x23 + 1);
                    ppppppuVar19[2] = (ulong *****)unaff_x23;
                    *ppppppuVar19 = (ulong *****)0x0;
                    ppppppuVar14 = unaff_x23[1];
                    *ppppppuVar19 = (ulong *****)ppppppuVar14;
                    ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                    unaff_x23[1] = ppppppuVar19;
                    ppppppuVar19 = ppppppuVar28;
                  } while ((ulong *******)(ppppppuVar28 + -1) != pppppppuVar24);
                }
                pppppppuVar24 = (ulong *******)*pppppppuVar24;
                goto LAB_109f13838;
              }
              if ((uVar13 == 0x66) &&
                 (unaff_x23 = (ulong *******)unaff_x22[0x13],
                 (*(uint *)((long)*unaff_x23 + 0x2c) & uVar30) != 0)) {
                if (4 < uVar9) {
                  if ((unaff_x21 == (ulong *******)0x0) || (unaff_x21[1] == (ulong ******)0x0)) {
                    ppppppuVar19 = (ulong ******)0x0;
                    unaff_x21 = (ulong *******)unaff_x22[2];
                  }
                  else {
                    ppppppuVar19 = (ulong ******)0x3;
                  }
                  FUN_109ecb9c0(unaff_x22);
                  pppppppuVar24 = (ulong *******)&pppppppuStack_120;
                  param_2 = unaff_x23;
                  param_3 = unaff_x27;
                  pppppppuStack_120 = (ulong *******)ppppppuVar19;
                  pppppppuStack_118 = unaff_x21;
                  FUN_109f15ad8(pppppppuVar24,unaff_x23,unaff_x27,
                                *(undefined4 *)
                                 ((long)unaff_x22 +
                                 (ulong)(byte)(&UNK_110b671cc)
                                              [(ulong)*(uint *)(unaff_x22 + 5) * 0x68] * 4 + 0x50));
                  if ((ulong *******)(unaff_x22[8] + -1) != unaff_x22 + 6) {
                    ppppppuVar19 = unaff_x22[8];
                    do {
                      pppppuVar1 = *ppppppuVar19;
                      ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                      pppppuVar1[1] = (ulong ****)ppppppuVar28;
                      *ppppppuVar28 = pppppuVar1;
                      ppppppuVar19[1] = (ulong *****)(pppppppuVar24 + 1);
                      ppppppuVar19[2] = (ulong *****)pppppppuVar24;
                      *ppppppuVar19 = (ulong *****)0x0;
                      ppppppuVar14 = pppppppuVar24[1];
                      *ppppppuVar19 = (ulong *****)ppppppuVar14;
                      ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                      pppppppuVar24[1] = ppppppuVar19;
                      ppppppuVar19 = ppppppuVar28;
                    } while ((ulong *******)(ppppppuVar28 + -1) != unaff_x22 + 6);
                  }
                  goto LAB_109f13a8c;
                }
                unaff_x19 = 1;
                *(uint *)(unaff_x22 + 5) = 1;
              }
            }
            else {
              if ((1 < uVar13 - 0x112) && (1 < uVar13 - 0x26f)) {
                if ((uVar13 == 0xc9) && ((uVar30 >> 0xb & 1) != 0)) {
                  pppuVar18 = (*unaff_x22[0x17])[7][4];
                  unaff_x23 = (ulong *******)(*unaff_x22[0x17])[7][2];
                  FUN_109ec96e8(unaff_x23,0);
                  pppppppuVar24 = (ulong *******)unaff_x22[1];
                  if ((pppppppuVar24 == (ulong *******)0x0) ||
                     (pppppppuVar24[1] == (ulong ******)0x0)) {
                    unaff_x24 = (ulong *******)0x0;
                    pppppppuVar24 = (ulong *******)unaff_x22[2];
                  }
                  else {
                    unaff_x24 = (ulong *******)0x3;
                  }
                  ppppppuVar19 = unaff_x22[0x13];
                  FUN_109ecb9c0(unaff_x22);
                  unaff_x21 = pppppppuStack_108;
                  pppppppuStack_120 = unaff_x24;
                  pppppppuStack_118 = pppppppuVar24;
                  FUN_109ecb0a8(pppppppuStack_108,200);
                  unaff_x21[0x10] = (ulong ******)0x0;
                  unaff_x21[0x11] = (ulong ******)0x0;
                  unaff_x21[0x12] = (ulong ******)0x0;
                  unaff_x21[0x13] = ppppppuVar19;
                  uVar9 = *(uint *)(unaff_x21 + 5);
                  *(uint *)((long)unaff_x21 +
                           (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar9 * 0x68] * 4 + 0x50) =
                       (uint)((ulong)pppuVar18 >> 0x2a) & 1;
                  *(int *)((long)unaff_x21 +
                          (ulong)(byte)(&UNK_110b671ae)[(ulong)uVar9 * 0x68] * 4 + 0x50) =
                       (int)unaff_x23;
                  param_3 = unaff_x21;
                  FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,unaff_x21);
                  pppppppuStack_120 = (ulong *******)0x3;
                  param_2 = pppppppuStack_118;
                  pppppppuStack_118 = unaff_x21;
                  goto LAB_109f13a8c;
                }
                goto LAB_109f13a90;
              }
LAB_109f12d54:
              unaff_x23 = (ulong *******)unaff_x22[0x13];
              if ((*(uint *)((long)*unaff_x23 + 0x2c) & uVar30) != 0) {
                pppppppuStack_120 = (ulong *******)0x3;
                ppppppuVar28 = *unaff_x23;
                ppppppuVar19 = ppppppuVar28;
                if (*(int *)(ppppppuVar28 + 3) != 1) {
                  ppppppuVar19 = (ulong ******)0x0;
                }
                bVar17 = *(byte *)((long)ppppppuVar28[6] + 4);
                if (bVar17 == 0xb) {
                  unaff_x21 = (ulong *******)0x4;
                }
                else {
                  unaff_x21 = (ulong *******)(ulong)*(uint *)(&UNK_10e06d94c + (ulong)bVar17 * 4);
                }
                uVar13 = *(uint *)(ppppppuVar28[6] + 5);
                uVar21 = (uint)unaff_x21;
                uVar30 = uVar21;
                if (uVar13 != 0) {
                  uVar30 = uVar13;
                }
                unaff_x26 = (ulong *******)(ulong)uVar30;
                param_3 = (ulong *******)&uStack_f4;
                param_2 = (ulong *******)0x1;
                ppppppuVar14 = ppppppuVar28;
                pppppppuStack_118 = unaff_x22;
                FUN_109f1135c(ppppppuVar28,1,param_3,&iStack_f8);
                if (((ulong)ppppppuVar14 & 1) == 0) {
                  iStack_f8 = 0;
                  uStack_f4 = uVar21;
                }
                uVar5 = uStack_f4;
                iVar4 = iStack_f8;
                uVar13 = *(uint *)(unaff_x22 + 5);
                pppppppuVar24 = unaff_x22;
                if ((int)uVar13 < 0x26f) {
                  if (uVar13 == 0x112) {
                    if (uVar9 != 4 && uVar30 <= uVar21) {
                      pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                      param_2 = unaff_x22;
                      param_3 = unaff_x23;
                      FUN_109f114e4(pppppppuVar10,unaff_x22,unaff_x23,unaff_x27,
                                    *(undefined4 *)((long)ppppppuVar28 + 0x2c),uStack_f4,iStack_f8,
                                    *(undefined1 *)(unaff_x22 + 10));
                    }
                    else {
                      appppppuStack_f0[0xd] = (ulong ******)0x0;
                      appppppuStack_f0[0xc] = (ulong ******)0x0;
                      appppppuStack_f0[0xf] = (ulong ******)0x0;
                      appppppuStack_f0[0xe] = (ulong ******)0x0;
                      appppppuStack_f0[9] = (ulong ******)0x0;
                      appppppuStack_f0[8] = (ulong ******)0x0;
                      appppppuStack_f0[0xb] = (ulong ******)0x0;
                      appppppuStack_f0[10] = (ulong ******)0x0;
                      appppppuStack_f0[5] = (ulong ******)0x0;
                      appppppuStack_f0[4] = (ulong ******)0x0;
                      appppppuStack_f0[7] = (ulong ******)0x0;
                      appppppuStack_f0[6] = (ulong ******)0x0;
                      appppppuStack_f0[1] = (ulong ******)0x0;
                      appppppuStack_f0[0] = (ulong ******)0x0;
                      appppppuStack_f0[3] = (ulong ******)0x0;
                      appppppuStack_f0[2] = (ulong ******)0x0;
                      if (*(char *)(unaff_x22 + 10) == '\0') {
                        param_2 = (ulong *******)0x0;
                      }
                      else {
                        unaff_x21 = (ulong *******)0x0;
                        pppppppuVar10 = (ulong *******)0x0;
                        unaff_x24 = (ulong *******)(ulong)uStack_f4;
                        do {
                          pppppppuVar20 = (ulong *******)&pppppppuStack_120;
                          FUN_109f10fd0(pppppppuVar20,unaff_x23,unaff_x27,
                                        *(undefined4 *)((long)ppppppuVar19 + 0x2c),unaff_x21);
                          uVar9 = iVar4 + (int)unaff_x21;
                          uVar13 = 0;
                          if (uVar5 != 0) {
                            uVar13 = uVar9 / uVar5;
                          }
                          pppppppuVar25 = (ulong *******)&pppppppuStack_120;
                          FUN_109f114e4(pppppppuVar25,unaff_x22,pppppppuVar20,unaff_x27,
                                        *(undefined4 *)((long)ppppppuVar19 + 0x2c),unaff_x24,
                                        uVar9 - uVar13 * uVar5,1);
                          appppppuStack_f0[(long)pppppppuVar10] = (ulong ******)pppppppuVar25;
                          pppppppuVar10 = (ulong *******)((long)pppppppuVar10 + 1);
                          param_2 = (ulong *******)(ulong)*(byte *)(unaff_x22 + 10);
                          unaff_x21 = (ulong *******)(ulong)((int)unaff_x21 + uVar30);
                        } while (pppppppuVar10 < param_2);
                        unaff_x28 = (ulong *******)(ulong)uStack_134;
                        unaff_x23 = pppppppuVar10;
                      }
                      func_0x000109ecd728();
                      pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                      param_3 = appppppuStack_f0;
                      FUN_109ece300(pppppppuVar10,param_2,param_3);
                    }
                    if ((ulong *******)(unaff_x22[8] + -1) != unaff_x22 + 6) {
                      ppppppuVar19 = unaff_x22[8];
                      do {
                        pppppuVar1 = *ppppppuVar19;
                        ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                        pppppuVar1[1] = (ulong ****)ppppppuVar28;
                        *ppppppuVar28 = pppppuVar1;
                        ppppppuVar19[1] = (ulong *****)(pppppppuVar10 + 1);
                        ppppppuVar19[2] = (ulong *****)pppppppuVar10;
                        *ppppppuVar19 = (ulong *****)0x0;
                        ppppppuVar14 = pppppppuVar10[1];
                        *ppppppuVar19 = (ulong *****)ppppppuVar14;
                        ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                        pppppppuVar10[1] = ppppppuVar19;
                        ppppppuVar19 = ppppppuVar28;
                      } while ((ulong *******)(ppppppuVar28 + -1) != unaff_x22 + 6);
                    }
                  }
                  else if (uVar13 == 0x113) {
                    pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                    param_2 = unaff_x22;
                    param_3 = unaff_x23;
                    FUN_109f114e4(pppppppuVar10,unaff_x22,unaff_x23,unaff_x27,
                                  *(undefined4 *)((long)ppppppuVar28 + 0x2c),uStack_f4,iStack_f8,
                                  *(undefined1 *)(unaff_x22 + 10));
                    if ((ulong *******)(unaff_x22[8] + -1) != unaff_x22 + 6) {
                      ppppppuVar19 = unaff_x22[8];
                      do {
                        pppppuVar1 = *ppppppuVar19;
                        ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                        pppppuVar1[1] = (ulong ****)ppppppuVar28;
                        *ppppppuVar28 = pppppuVar1;
                        ppppppuVar19[1] = (ulong *****)(pppppppuVar10 + 1);
                        ppppppuVar19[2] = (ulong *****)pppppppuVar10;
                        *ppppppuVar19 = (ulong *****)0x0;
                        ppppppuVar14 = pppppppuVar10[1];
                        *ppppppuVar19 = (ulong *****)ppppppuVar14;
                        ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                        pppppppuVar10[1] = ppppppuVar19;
                        ppppppuVar19 = ppppppuVar28;
                      } while ((ulong *******)(ppppppuVar28 + -1) != unaff_x22 + 6);
                    }
                  }
                  else {
LAB_109f13080:
                    pppppppuVar10 = (ulong *******)&pppppppuStack_120;
                    param_2 = unaff_x22;
                    param_3 = unaff_x23;
                    func_0x000109f12614(pppppppuVar10,unaff_x22,unaff_x23,unaff_x27,
                                        *(undefined4 *)((long)ppppppuVar28 + 0x2c));
                    if ((ulong *******)(unaff_x22[8] + -1) != unaff_x22 + 6) {
                      ppppppuVar19 = unaff_x22[8];
                      do {
                        pppppuVar1 = *ppppppuVar19;
                        ppppppuVar28 = (ulong ******)ppppppuVar19[1];
                        pppppuVar1[1] = (ulong ****)ppppppuVar28;
                        *ppppppuVar28 = pppppuVar1;
                        ppppppuVar19[1] = (ulong *****)(pppppppuVar10 + 1);
                        ppppppuVar19[2] = (ulong *****)pppppppuVar10;
                        *ppppppuVar19 = (ulong *****)0x0;
                        ppppppuVar14 = pppppppuVar10[1];
                        *ppppppuVar19 = (ulong *****)ppppppuVar14;
                        ppppppuVar14[1] = (ulong *****)ppppppuVar19;
                        pppppppuVar10[1] = ppppppuVar19;
                        ppppppuVar19 = ppppppuVar28;
                      } while ((ulong *******)(ppppppuVar28 + -1) != unaff_x22 + 6);
                    }
                  }
                }
                else {
                  if (uVar13 == 0x26f) {
                    pppppppuVar10 = (ulong *******)unaff_x22[0x17];
                    uVar13 = (uint)*(ushort *)((long)unaff_x22 + 0x54);
                    unaff_x21 = pppppppuVar10;
                    if (uVar9 == 4 || uVar30 > uVar21) {
                      pppppppuVar20 = (ulong *******)(ulong)*(byte *)(unaff_x22 + 10);
                      pppppppuStack_130 = unaff_x23;
                      if (*(byte *)(unaff_x22 + 10) != 0) {
                        unaff_x24 = (ulong *******)0x0;
                        pppppppuVar25 = (ulong *******)0x0;
                        iStack_140 = iStack_f8;
                        pppppppuStack_150 = pppppppuVar22;
                        uStack_13c = uVar13;
                        uStack_138 = uVar30;
                        do {
                          if ((uVar13 >> (ulong)((uint)pppppppuVar25 & 0x1f) & 1) != 0) {
                            param_3 = (ulong *******)&pppppppuStack_120;
                            FUN_109f10fd0(param_3,pppppppuStack_130,unaff_x27,
                                          *(undefined4 *)((long)ppppppuVar19 + 0x2c),unaff_x24);
                            uVar2 = *(undefined4 *)((long)ppppppuVar19 + 0x2c);
                            if ((((ulong)pppppppuVar25 & 0xff) != 0) ||
                               (pppppppuVar20 = pppppppuVar10,
                               *(char *)((long)pppppppuVar10 + 0x1c) != '\x01')) {
                              pppppppuVar6 = pppppppuStack_108;
                              FUN_109ecaef8(pppppppuStack_108,0x154);
                              pppppppuVar20 = pppppppuVar6 + 6;
                              FUN_109ecb048();
                              *(ushort *)((long)pppppppuVar6 + 0x2c) =
                                   *(ushort *)((long)pppppppuVar6 + 0x2c) & 0xf000 |
                                   (*(ushort *)((long)pppppppuVar6 + 0x2c) & 0xf006 |
                                   (ushort)(byte)uStack_110) & 7 | (uStack_110._4_2_ & 0x1ff) << 3;
                              pppppppuVar6[10] = (ulong ******)0x0;
                              pppppppuVar6[0xb] = (ulong ******)0x0;
                              pppppppuVar6[0xc] = (ulong ******)0x0;
                              pppppppuVar6[0xd] = (ulong ******)pppppppuVar10;
                              *(char *)(pppppppuVar6 + 0xe) = (char)pppppppuVar25;
                              *(undefined8 *)((long)pppppppuVar6 + 0x71) = 0;
                              pppppppuVar6[0xf] = (ulong ******)0x0;
                              FUN_109ecb4f0(pppppppuStack_120,pppppppuStack_118,pppppppuVar6);
                              pppppppuStack_120 = (ulong *******)0x3;
                              pppppppuVar22 = pppppppuStack_150;
                              pppppppuStack_118 = pppppppuVar6;
                            }
                            uVar9 = iStack_140 + (int)unaff_x24;
                            uVar30 = 0;
                            if (uVar5 != 0) {
                              uVar30 = uVar9 / uVar5;
                            }
                            uStack_170 = 1;
                            unaff_x27 = (ulong *******)(ulong)uStack_124;
                            param_2 = unaff_x22;
                            func_0x000109f12128(&pppppppuStack_120,unaff_x22,param_3,unaff_x27,uVar2
                                                ,uVar5,uVar9 - uVar30 * uVar5,pppppppuVar20);
                            pppppppuVar20 = (ulong *******)(ulong)*(byte *)(unaff_x22 + 10);
                            unaff_x26 = (ulong *******)(ulong)uStack_138;
                            unaff_x28 = (ulong *******)(ulong)uStack_134;
                            uVar13 = uStack_13c;
                          }
                          pppppppuVar25 = (ulong *******)((long)pppppppuVar25 + 1);
                          unaff_x24 = (ulong *******)(ulong)(uint)((int)unaff_x24 + (int)unaff_x26);
                          unaff_x23 = pppppppuVar25;
                        } while (pppppppuVar25 < pppppppuVar20);
                      }
                      goto LAB_109f13838;
                    }
                    uVar2 = *(undefined4 *)((long)ppppppuVar28 + 0x2c);
                    uStack_170 = *(ushort *)((long)unaff_x22 + 0x54);
                  }
                  else {
                    if (uVar13 != 0x270) goto LAB_109f13080;
                    pppppppuVar10 = (ulong *******)unaff_x22[0x17];
                    uVar2 = *(undefined4 *)((long)ppppppuVar28 + 0x2c);
                    uStack_170 = 0;
                  }
                  param_2 = unaff_x22;
                  param_3 = unaff_x23;
                  func_0x000109f12128(&pppppppuStack_120,unaff_x22,unaff_x23,unaff_x27,uVar2,
                                      uStack_f4,iStack_f8,pppppppuVar10);
                }
LAB_109f13838:
                FUN_109ecb9c0(pppppppuVar24);
                unaff_x19 = 1;
              }
            }
LAB_109f13a90:
            lVar26 = lStack_148;
            if (pppppppuVar22 == (ulong *******)0x0) {
              unaff_x20 = 0;
              goto LAB_109f13be0;
            }
            unaff_x21 = (ulong *******)pppppppuVar22[1];
            pppppppuVar24 = (ulong *******)0x0;
            unaff_x22 = pppppppuVar22;
          } while (unaff_x21 == (ulong *******)0x0);
        } while( true );
      }
LAB_109f13be0:
      FUN_109ecc588();
    } while (lVar26 != 0);
    plVar15 = plStack_160;
    lVar16 = lStack_168;
    uVar9 = uStack_158;
    if ((int)unaff_x19 == 0) goto LAB_109f13c00;
    uVar30 = 0;
    uVar9 = 1;
  }
  param_1 = 0;
  unaff_x25 = 3;
  *(uint *)(lVar16 + 0x84) = *(uint *)(lVar16 + 0x84) & uVar30;
  plVar27 = (undefined8 *)*plVar15;
  plVar15 = *(long **)*plVar15;
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_109f13c34;
    lVar16 = plVar27[6];
    if (lVar16 != 0) break;
    plVar27 = plVar15;
    plVar15 = (long *)*plVar15;
  }
  goto LAB_109f12bbc;
LAB_109f13d80:
  uVar9 = (uint)uVar23;
  if ((uVar30 >> 0x12 & 1) != 0) {
    uVar23 = param_1;
    FUN_109f13f48(param_1,lVar16 + 0x58,0x40000,param_3);
    uVar9 = uVar9 | (uint)uVar23;
  }
  lVar26 = *(long *)(lVar16 + 0x30);
  if (lVar26 == 0) {
LAB_109f13e58:
    uVar13 = 0;
    uVar21 = 0xfffffff7;
  }
  else {
    bVar29 = false;
    do {
      plVar15 = *(long **)(lVar26 + 0x20);
      for (plVar12 = (long *)**(long **)(lVar26 + 0x20); plVar12 != (long *)0x0;
          plVar12 = (long *)*plVar12) {
        if ((*(int *)(plVar15 + 3) == 1) && ((*(uint *)((long)plVar15 + 0x2c) & uVar30) != 0)) {
          lVar7 = plVar15[6];
          FUN_109ec9b20(lVar7,param_3,&iStack_1d4,&iStack_1d8);
          if (lVar7 != plVar15[6]) {
            plVar15[6] = lVar7;
            bVar29 = true;
          }
          if ((*(int *)(plVar15 + 5) == 5) &&
             (uVar13 = (iStack_1d4 + iStack_1d8) - 1U & -iStack_1d8,
             uVar13 != *(uint *)(plVar15 + 0xb))) {
            *(uint *)(plVar15 + 0xb) = uVar13;
            bVar29 = true;
          }
          plVar12 = (long *)*plVar15;
        }
        plVar15 = plVar12;
      }
      FUN_109ecc434();
    } while (lVar26 != 0);
    if (!bVar29) goto LAB_109f13e58;
    uVar13 = 1;
    uVar21 = 0x17;
  }
  *(uint *)(lVar16 + 0x84) = *(uint *)(lVar16 + 0x84) & uVar21;
  uVar9 = uVar9 | uVar13;
  uVar23 = (ulong)uVar9;
  plVar27 = (long *)*plVar27;
  plVar15 = (long *)*plVar27;
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_109f13d40;
    lVar16 = plVar27[6];
    if (lVar16 != 0) break;
    plVar27 = plVar15;
    plVar15 = (long *)*plVar15;
  }
  goto LAB_109f13d80;
}



/* Entry: 109f13f48; end: 109f140f3;  */

undefined8 FUN_109f13f48(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  uint uStack_48;
  int iStack_44;
  
  iVar6 = 0;
  uVar7 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  if (uVar7 < 0xc) {
    if (9 < uVar7) {
      if (uVar7 == 10) {
        iVar6 = *(int *)(param_1 + 0x1b8);
      }
      else {
        iVar6 = *(int *)(param_1 + 300);
      }
    }
  }
  else if (uVar7 < 0x13) {
    if (1 < uVar7 - 0xc) {
      iVar6 = *(int *)(param_1 + 0x1a8);
    }
  }
  else if (uVar7 == 0x13) {
    iVar6 = *(int *)(param_1 + 0x128);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1a4);
  }
  plVar4 = *(long **)*param_2;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    plVar8 = (long *)*param_2;
    do {
      plVar5 = plVar4;
      if ((*(uint *)(plVar8 + 4) & 0x1fffff) == param_3) {
        lVar2 = plVar8[2];
        FUN_109ec9b20(lVar2,param_4,&iStack_44,&uStack_48);
        if (lVar2 != plVar8[2]) {
          plVar8[2] = lVar2;
        }
        uVar1 = uStack_48;
        if (uStack_48 <= *(uint *)(plVar8 + 8)) {
          uVar1 = *(uint *)(plVar8 + 8);
        }
        uVar1 = (iVar6 + uVar1) - 1 & -uVar1;
        *(uint *)((long)plVar8 + 0x44) = uVar1;
        iVar6 = uVar1 + iStack_44;
        plVar5 = (long *)*plVar8;
        uVar3 = 1;
      }
      plVar4 = (long *)*plVar5;
      plVar8 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if (uVar7 < 0xc) {
    if (uVar7 < 10) {
      if (1 < uVar7 - 5) {
        *(int *)(param_1 + 0x19c) = iVar6;
      }
    }
    else if (uVar7 == 10) {
      *(int *)(param_1 + 0x1b8) = iVar6;
    }
    else {
      *(int *)(param_1 + 300) = iVar6;
    }
  }
  else if (uVar7 < 0x11) {
    if (uVar7 == 0xc) {
      *(int *)(param_1 + 0x168) = iVar6;
    }
  }
  else if (uVar7 - 0x11 < 2) {
    *(int *)(param_1 + 0x1a8) = iVar6;
  }
  else if (uVar7 == 0x13) {
    *(int *)(param_1 + 0x128) = iVar6;
  }
  else {
    *(int *)(param_1 + 0x1a4) = iVar6;
  }
  return uVar3;
}



/* Entry: 109f140f4; end: 109f1425f;  */

undefined8 FUN_109f140f4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x1c1) {
    if (0x143 < iVar1) {
      uVar2 = iVar1 - 0x144;
      if (uVar2 < 0x3a) {
        if ((1L << ((ulong)uVar2 & 0x3f) & 0xe000000028U) != 0) {
          return 1;
        }
        if ((1L << ((ulong)uVar2 & 0x3f) & 0x200001100000401U) != 0) {
          return uVar3;
        }
      }
      return 0xffffffff;
    }
    if (iVar1 < 0xfb) {
      if ((1 < iVar1 - 0x8aU) && (1 < iVar1 - 0x8fU)) {
        if (1 < iVar1 - 0xcaU) {
          return 0xffffffff;
        }
        return 1;
      }
    }
    else if (0x38 < iVar1 - 0xfbU ||
             (1L << ((ulong)(iVar1 - 0xfbU) & 0x3f) & 0x111900000000011U) == 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar4 = (ulong)(iVar1 - 600U);
    if (iVar1 - 600U < 0x3c) {
      if ((1L << (uVar4 & 0x3f) & 0x80c042600a000U) != 0) {
        return 1;
      }
      if ((1L << (uVar4 & 0x3f) & 0xc00000000000003U) != 0) {
        return uVar3;
      }
      if ((1L << (uVar4 & 0x3f) & 0x801800000000U) != 0) {
        return 2;
      }
    }
    uVar2 = iVar1 - 0x1c7;
    if (uVar2 < 0x3f) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x800000000000600U) != 0) {
        return 1;
      }
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x4000000100000001U) != 0) {
        return uVar3;
      }
    }
    if (iVar1 != 0x1c1) {
      return 0xffffffff;
    }
  }
  return uVar3;
}



/* Entry: 109f14260; end: 109f1455f;  */

undefined8 * FUN_109f14260(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint auStack_f0 [22];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar16 = 0;
  uVar17 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_f0[10] = 0;
  auStack_f0[0xb] = 0;
  auStack_f0[8] = 0;
  auStack_f0[9] = 0;
  auStack_f0[0xe] = 0;
  auStack_f0[0xf] = 0;
  auStack_f0[0xc] = 0;
  auStack_f0[0xd] = 0;
  auStack_f0[2] = 0;
  auStack_f0[3] = 0;
  auStack_f0[0] = 0;
  auStack_f0[1] = 0;
  auStack_f0[6] = 0;
  auStack_f0[7] = 0;
  auStack_f0[4] = 0;
  auStack_f0[5] = 0;
  do {
    if ((param_3 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
      auStack_f0[uVar17] = uVar16;
      uVar17 = (ulong)((int)uVar17 + 1);
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x10);
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_68 = param_2;
  uVar16 = (uint)uVar17;
  if (uVar16 == 0) {
    bVar2 = true;
  }
  else {
    uVar11 = 0;
    uVar9 = uVar16;
    if (0xf < uVar16) {
      uVar9 = 0x10;
    }
    bVar2 = true;
    do {
      bVar2 = (bool)(uVar11 == auStack_f0[uVar11] & bVar2);
      *(char *)((long)&uStack_60 + uVar11) = (char)auStack_f0[uVar11];
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  puVar4 = param_1;
  puVar5 = param_2;
  if ((uVar16 != *(byte *)((long)param_2 + 0x1c)) || (!bVar2)) {
    auStack_f0[0x12] = 0;
    auStack_f0[0x13] = 0;
    auStack_f0[0x10] = 0;
    auStack_f0[0x11] = 0;
    puStack_98 = param_2;
    auStack_f0[0x14] = 0;
    auStack_f0[0x15] = 0;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    if (uVar16 == *(byte *)((long)param_2 + 0x1c)) {
      if (uVar16 != 0) {
        uVar11 = 0;
        bVar2 = false;
        do {
          bVar2 = (bool)(uVar11 != *(byte *)((long)&uStack_90 + uVar11) | bVar2);
          uVar11 = uVar11 + 1;
        } while (uVar17 != uVar11);
        if (bVar2) goto LAB_109f14388;
      }
    }
    else {
LAB_109f14388:
      lVar3 = param_1[3];
      FUN_109ecaef8(lVar3,0x154);
      puVar5 = (undefined8 *)(lVar3 + 0x30);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar3 + 0x2c) = uVar1;
      *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar3 + 0x58) = uStack_78;
      *(undefined8 *)(lVar3 + 0x50) = uStack_80;
      *(undefined8 **)(lVar3 + 0x68) = puStack_68;
      *(undefined8 *)(lVar3 + 0x60) = uStack_70;
      *(undefined8 *)(lVar3 + 0x78) = uStack_58;
      *(undefined8 *)(lVar3 + 0x70) = uStack_60;
      puVar4 = (undefined8 *)*param_1;
      param_2 = (undefined8 *)param_1[1];
      lVar7 = lVar3;
      FUN_109ecb4f0();
      param_3 = (uint)lVar7;
      *param_1 = 3;
      param_1[1] = lVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (1 < param_3 - 3) {
    return param_2;
  }
  puVar5 = param_2;
  if (*(char *)((long)param_2 + 0x1c) != '\x02') {
    puVar5 = puVar4;
    FUN_109f14260(puVar4,param_2,3);
  }
  puVar6 = puVar4;
  FUN_109ece168(puVar4,0x162,puVar5);
  lVar7 = puVar4[3];
  FUN_109ecaef8(lVar7,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar4 + 2);
  *(ushort *)(lVar7 + 0x2c) = uVar1;
  *(ushort *)(lVar7 + 0x2c) = (*(ushort *)((long)puVar4 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined8 **)(lVar7 + 0x68) = param_2;
  *(undefined1 *)(lVar7 + 0x70) = 3;
  *(undefined8 *)(lVar7 + 0x71) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  FUN_109ecb4f0(*puVar4,puVar4[1],lVar7);
  *puVar4 = 3;
  puVar4[1] = lVar7;
  puVar5 = (undefined8 *)(lVar7 + 0x30);
  if (*(char *)(lVar7 + 0x4d) != '@') {
    puVar5 = puVar4;
    FUN_109ece168(puVar4,0x185,(undefined8 *)(lVar7 + 0x30));
  }
  lVar7 = puVar4[3];
  FUN_109ecaef8(lVar7,0x11d);
  if (lVar7 == 0) {
    return (undefined8 *)0x0;
  }
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined8 **)(lVar7 + 0x68) = puVar6;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 **)(lVar7 + 0x98) = puVar5;
  lVar3 = (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar4 + 2);
  *(ushort *)(lVar7 + 0x2c) = uVar1;
  *(ushort *)(lVar7 + 0x2c) = (*(ushort *)((long)puVar4 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar8 = (&UNK_110b78541)[lVar3];
  if (bVar8 == 0) {
    uVar17 = (ulong)(byte)(&UNK_110b78540)[lVar3];
    if ((&UNK_110b78540)[lVar3] == 0) {
      bVar8 = 0;
      uVar16 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar3) & 0x79) != 0) {
        uVar16 = *(uint *)(&UNK_110b78544 + lVar3) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar8 = 0;
    plVar10 = (long *)(lVar7 + 0x68);
    pcVar12 = &UNK_110b78548 + lVar3;
    uVar11 = uVar17;
    do {
      if ((*pcVar12 == '\0') && (bVar8 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar8 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar17 = (ulong)(byte)(&UNK_110b78540)[lVar3];
  }
  uVar9 = *(uint *)(&UNK_110b78544 + lVar3) & 0x79;
  if (uVar9 == 0) {
    if ((int)uVar17 == 0) {
      uVar16 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = (long *)(lVar7 + 0x68);
    puVar13 = (uint *)(&UNK_110b78558 + lVar3);
    uVar11 = uVar17;
    uVar16 = 0;
    do {
      uVar9 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar16 != 0) {
        uVar9 = uVar16;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar13 = puVar13 + 1;
      uVar16 = uVar9;
    } while (uVar11 != 0);
  }
  else {
    uVar16 = uVar9;
    if ((int)uVar17 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  lVar3 = lVar7 + 0x70;
  do {
    lVar14 = *(long *)(lVar7 + uVar11 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar3 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar11 = uVar11 + 1;
    lVar3 = lVar3 + 0x30;
  } while (uVar11 != uVar17);
  uVar16 = 0x20;
  if (uVar9 != 0) {
    uVar16 = uVar9;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar7,lVar7 + 0x30,bVar8,uVar16);
  FUN_109ecb4f0(*puVar4,puVar4[1],lVar7);
  *puVar4 = 3;
  puVar4[1] = lVar7;
  return (undefined8 *)(lVar7 + 0x30);
}



/* Entry: 109f14560; end: 109f14917;  */

byte FUN_109f14560(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  long *plVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  
  plVar12 = *(long **)(param_1 + 0x178);
  plVar8 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar14 = plVar12[6];
    if (lVar14 != 0) break;
    plVar12 = plVar8;
    plVar8 = (long *)*plVar8;
  }
  bVar13 = 0;
  do {
    lVar15 = *(long *)(lVar14 + 0x30);
    if (lVar15 == 0) {
      uVar7 = 0xfffffff7;
    }
    else {
      bVar16 = false;
      puVar19 = *(undefined8 **)(*(long *)(lVar14 + 0x20) + 0x18);
      do {
        plVar21 = *(long **)(lVar15 + 0x20);
        plVar8 = (long *)*plVar21;
        bVar2 = 0;
        if (plVar8 != (long *)0x0) {
          bVar2 = 0;
          do {
            plVar3 = (long *)0x0;
            plVar17 = plVar21;
            if (*plVar8 != 0) {
              plVar3 = plVar8;
            }
            do {
              plVar21 = plVar3;
              if (((int)plVar17[3] == 4) &&
                 (((((param_2 >> 2 & 1) != 0 &&
                    ((uVar18 = (ulong)*(uint *)(plVar17 + 5),
                     uVar18 - 0x144 < 0x27 && (1L << (uVar18 - 0x144 & 0x3f) & 0x5000000029U) != 0
                     || (uVar18 == 0x127)))) ||
                   (((param_2 >> 3 & 1) != 0 &&
                    ((uVar18 = (ulong)*(uint *)(plVar17 + 5),
                     uVar18 - 0x164 < 8 && (1L << (uVar18 - 0x164 & 0x3f) & 0xa1U) != 0 ||
                     (uVar18 - 0x27a < 3)))))) &&
                  ((uVar7 = *(uint *)((long)plVar17 +
                                     (ulong)(byte)(&UNK_110b671cf)[uVar18 * 0x68] * 4 + 0x50),
                   *(char *)((long)puVar19 + 0x61) != '\a' ||
                   (((uVar7 & 0x7f) != 0x1b || ((*(byte *)((long)puVar19 + 0xa3) >> 3 & 1) != 0)))))
                  ))) {
                plVar3 = plVar17;
                FUN_109f140f4();
                plVar8 = plVar17 + (long)(int)(uint)plVar3 * 4 + 0x10;
                if (0x7fffffff < (uint)plVar3) {
                  plVar8 = (long *)0x0;
                }
                lVar9 = *(long *)plVar8[3];
                if (*(int *)(lVar9 + 0x18) == 5 && (uVar7 & 0x1000000) == 0) {
                  uVar5 = (uint)*(undefined8 *)(lVar9 + 0x48);
                  uVar6 = (*(byte *)(lVar9 + 0x45) & 0xaaaaaaaa) >> 1 |
                          (*(byte *)(lVar9 + 0x45) & 0x55555555) << 1;
                  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                  uVar11 = (uint)LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
                  uVar6 = uVar5 & 0xff;
                  if (uVar11 != 3) {
                    uVar6 = uVar5 & 0xffff;
                  }
                  uVar1 = uVar5 & 1;
                  if (uVar11 != 0) {
                    uVar1 = uVar6;
                  }
                  if (uVar11 < 5) {
                    uVar5 = uVar1;
                  }
                  if (uVar5 != 0) {
                    *(uint *)((long)plVar17 +
                             (ulong)(byte)(&UNK_110b671a9)[uVar18 * 0x68] * 4 + 0x50) =
                         *(int *)((long)plVar17 +
                                 (ulong)(byte)(&UNK_110b671a9)[uVar18 * 0x68] * 4 + 0x50) + uVar5;
                    puVar4 = (undefined8 *)*puVar19;
                    FUN_109f6600c(puVar4,0x50,8);
                    if (puVar4 != (undefined8 *)0x0) {
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
                    }
                    *(undefined4 *)(puVar4 + 3) = 5;
                    uVar7 = uVar7 & 0xfeffff80 | uVar7 + uVar5 & 0x7f;
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    *puVar4 = 0;
                    bVar2 = 1;
                    FUN_109ecb048(puVar4,puVar4 + 5,1,0x20);
                    puVar4[9] = 0;
                    FUN_109ecb4f0(2,plVar17,puVar4);
                    plVar20 = plVar8 + 1;
                    lVar9 = *plVar20;
                    plVar3 = (long *)plVar8[2];
                    *(long **)(lVar9 + 8) = plVar3;
                    *plVar3 = lVar9;
                    *plVar20 = 0;
                    plVar3 = puVar4 + 6;
                    lVar9 = *plVar3;
                    plVar8[2] = (long)plVar3;
                    plVar8[3] = (long)(puVar4 + 5);
                    *plVar20 = lVar9;
                    *(long **)(lVar9 + 8) = plVar20;
                    *plVar3 = (long)plVar20;
                    uVar18 = (ulong)*(uint *)(plVar17 + 5);
                  }
                  if (uVar18 - 0x27a < 3) {
                    if (*(char *)(plVar17[0x13] + 0x1d) != '@') goto LAB_109f14840;
                    pbVar10 = (byte *)(plVar17[0x13] + 0x1c);
LAB_109f14824:
                    uVar6 = 0x100;
                    if (*pbVar10 < 3) {
                      uVar6 = 0x80;
                    }
                  }
                  else {
                    if (*(char *)((long)plVar17 + 0x4d) == '@') {
                      pbVar10 = (byte *)((long)plVar17 + 0x4c);
                      goto LAB_109f14824;
                    }
LAB_109f14840:
                    uVar6 = 0x80;
                  }
                  *(uint *)((long)plVar17 + (ulong)(byte)(&UNK_110b671cf)[uVar18 * 0x68] * 4 + 0x50)
                       = uVar6 | uVar7 & 0xffffe07f;
                }
              }
              if (plVar21 == (long *)0x0) goto LAB_109f14884;
              plVar8 = (long *)*plVar21;
              plVar3 = (long *)0x0;
              plVar17 = plVar21;
            } while (plVar8 == (long *)0x0);
          } while( true );
        }
LAB_109f14884:
        bVar16 = (bool)(bVar16 | bVar2);
        FUN_109ecc434();
      } while (lVar15 != 0);
      uVar7 = 3;
      if (!bVar16) {
        uVar7 = 0xfffffff7;
      }
      bVar13 = bVar16 | bVar13;
      plVar8 = (long *)*plVar12;
    }
    *(uint *)(lVar14 + 0x84) = *(uint *)(lVar14 + 0x84) & uVar7;
    plVar21 = (long *)*plVar8;
    plVar12 = plVar8;
    while( true ) {
      plVar8 = plVar21;
      if (plVar8 == (long *)0x0) {
        return bVar13;
      }
      lVar14 = plVar12[6];
      if (lVar14 != 0) break;
      plVar21 = (long *)*plVar8;
      plVar12 = plVar8;
    }
  } while( true );
}



/* Entry: 109f14918; end: 109f14ba3;  */

long FUN_109f14918(long param_1,char *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  uint uVar25;
  long lVar26;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar8 = (int)param_2;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)**(long **)(param_1 + 0x178);
  if (plVar16 == (long *)0x0) {
LAB_109f1497c:
    lVar23 = 0;
  }
  else {
    plVar14 = *(long **)(param_1 + 0x178);
    plVar15 = (long *)0x0;
    do {
      plVar1 = plVar14;
      if ((char)plVar14[7] == '\0') {
        plVar1 = plVar15;
      }
      plVar17 = (long *)*plVar16;
      plVar14 = plVar16;
      plVar15 = plVar1;
      plVar16 = plVar17;
    } while (plVar17 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB_109f1497c;
    lVar23 = plVar1[6];
  }
  lVar13 = 2;
  puVar11 = (undefined1 *)(param_1 + 0x142);
  do {
    *puVar11 = (char)(*(ushort *)(*(long *)(param_1 + 0x1c0) + lVar13) >> 2);
    lVar13 = lVar13 + 4;
    puVar11 = puVar11 + 1;
  } while (lVar13 != 0x12);
  lVar13 = *(long *)(lVar23 + 0x30);
  if (lVar13 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = 0;
    do {
      plVar16 = *(long **)(lVar13 + 0x20);
      plVar14 = (long *)*plVar16;
      if (plVar14 != (long *)0x0) {
        do {
          plVar15 = plVar16;
          plVar1 = (long *)0x0;
          if (*plVar14 != 0) {
            plVar1 = plVar14;
          }
          do {
            plVar16 = plVar1;
            if ((int)plVar15[3] == 4) {
              uVar19 = *(uint *)(plVar15 + 5);
              if ((((ulong)(byte)(&UNK_110b671d0)[(ulong)uVar19 * 0x68] != 0) &&
                  (lVar21 = (ulong)(byte)(&UNK_110b671d0)[(ulong)uVar19 * 0x68] - 1,
                  (*(uint *)((long)plVar15 + lVar21 * 4 + 0x54) & 0xf000f) == 0)) &&
                 ((*(uint *)((long)plVar15 +
                            (ulong)(byte)(&UNK_110b671d1)[(ulong)uVar19 * 0x68] * 4 + 0x50) &
                  0xf000f) == 0)) {
                lVar22 = (ulong)uVar19 * 0x68;
                uVar2 = *(uint *)((long)plVar15 + (ulong)(byte)(&UNK_110b671cf)[lVar22] * 4 + 0x50);
                iVar8 = *(int *)((long)plVar15 + (ulong)(byte)(&UNK_110b671aa)[lVar22] * 4 + 0x50);
                uVar25 = *(uint *)((long)plVar15 + (ulong)(byte)(&UNK_110b671b1)[lVar22] * 4 + 0x50)
                ;
                uStack_60 = 0;
                lVar22 = *(long *)(param_1 + 0x1c0);
                uVar18 = (ulong)*(ushort *)(lVar22 + 0x16);
                if (uVar18 != 0) {
                  uVar20 = 0;
                  do {
                    param_2 = (char *)(lVar22 + 0x18 + uVar20 * 8);
                    if (((uVar2 & 0x7f) == (uint)(byte)param_2[4]) &&
                       (uVar19 = iVar8 << (ulong)(uVar25 & 0x1f) & (uint)(byte)param_2[6],
                       uVar19 != 0)) {
                      cVar3 = *param_2;
                      uVar6 = (uint)(*(ushort *)(param_2 + 2) >> 2) - (uint)(byte)param_2[7];
                      param_2 = (char *)(ulong)uVar6;
                      do {
                        uVar5 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
                        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
                        lVar26 = LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
                        uVar9 = (uint)lVar26;
                        uVar5 = ~(uVar19 >> (ulong)(uVar9 & 0x1f));
                        uVar5 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
                        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
                        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
                        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                        lVar21 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
                        pcVar10 = (char *)((long)&uStack_60 + (ulong)(uVar9 >> 1) * 4 |
                                          (ulong)(uVar9 & 1) << 1);
                        *pcVar10 = cVar3 * '\x10' + (char)lVar21;
                        pcVar10[1] = (char)uVar6 + (char)lVar26;
                        uVar19 = uVar19 & (~(-1 << (ulong)((uint)lVar21 & 0x1f)) <<
                                           (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
                      } while (uVar19 != 0);
                      lVar26 = 1;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 != uVar18);
                  uVar19 = *(uint *)(plVar15 + 5);
                  lVar21 = (ulong)(byte)(&UNK_110b671d0)[(ulong)uVar19 * 0x68] - 1;
                }
                *(undefined4 *)((long)plVar15 + lVar21 * 4 + 0x54) = 0;
                *(undefined4 *)
                 ((long)plVar15 + (ulong)(byte)(&UNK_110b671d1)[(ulong)uVar19 * 0x68] * 4 + 0x50) =
                     0;
              }
            }
            if (plVar16 == (long *)0x0) goto LAB_109f14b4c;
            plVar14 = (long *)*plVar16;
            plVar15 = plVar16;
            plVar1 = (long *)0x0;
          } while (plVar14 == (long *)0x0);
        } while( true );
      }
LAB_109f14b4c:
      FUN_109ecc434();
      iVar8 = (int)param_2;
    } while (lVar13 != 0);
  }
  lVar13 = 0;
  *(uint *)(lVar23 + 0x84) = *(uint *)(lVar23 + 0x84) & 0xfffffff7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar26;
  }
  ___stack_chk_fail();
  sVar4 = *(short *)(lVar13 + 0x61) << 8;
  if (sVar4 == 0x500) {
    return lVar13;
  }
  bVar7 = true;
  uVar2 = 1 << (ulong)((uint)(int)sVar4 >> 8 & 0x1f);
  uVar19 = uVar2 & *(byte *)(*(long *)(lVar13 + 0x28) + 0xb8);
  if ((uVar2 & *(byte *)(*(long *)(lVar13 + 0x28) + 0xb9)) != 0) {
    bVar7 = *(long *)(lVar13 + 0x1c0) != 0;
  }
  uVar25 = 4;
  uVar2 = 0;
  if (sVar4 != 0) {
    uVar2 = uVar25;
  }
  uVar6 = 0;
  if (sVar4 != 0x400) {
    uVar6 = 8;
  }
  FUN_109f050f4(lVar13,uVar2 | uVar6);
  if (uVar19 != 0 && bVar7 == false) goto LAB_109f14c9c;
  plVar16 = (long *)**(long **)(lVar13 + 0x178);
  if (plVar16 == (long *)0x0) {
LAB_109f14c6c:
    lVar23 = 0;
  }
  else {
    plVar14 = *(long **)(lVar13 + 0x178);
    plVar15 = (long *)0x0;
    do {
      plVar1 = plVar14;
      if ((char)plVar14[7] == '\0') {
        plVar1 = plVar15;
      }
      plVar17 = (long *)*plVar16;
      plVar14 = plVar16;
      plVar15 = plVar1;
      plVar16 = plVar17;
    } while (plVar17 != (long *)0x0);
    if (plVar1 == (long *)0x0) goto LAB_109f14c6c;
    lVar23 = plVar1[6];
  }
  FUN_109f18ef4(lVar13,lVar23,bVar7,uVar19 == 0);
  FUN_109f46234(lVar13);
  FUN_109f1de0c(lVar13);
  FUN_109f0f144(lVar13);
LAB_109f14c9c:
  if (iVar8 == 0) {
    uVar25 = 1;
  }
  FUN_109f0f634(lVar13,0xc,FUN_109f14d50,uVar25);
  FUN_109f2414c(lVar13);
  FUN_109f14560(lVar13,0xc);
  func_0x000109f1eca0(lVar13);
  FUN_109f287bc(lVar13);
  FUN_109f43ecc(lVar13,0x40000,0);
  if (*(char *)(lVar13 + 0x61) != '\0') {
    iVar8 = 1;
  }
  uVar24 = 0xc;
  if (iVar8 == 0) {
    uVar24 = 8;
  }
  lVar23 = lVar13;
  func_0x000109f1a388(lVar13,uVar24);
  if (*(long *)(lVar13 + 0x1c0) != 0) {
    lVar23 = lVar13;
    FUN_109f14918(lVar13);
  }
  pcVar12 = *(code **)(*(long *)(lVar13 + 0x28) + 0xd0);
  if (pcVar12 != (code *)0x0) {
    lVar23 = lVar13;
    (*pcVar12)(lVar13);
  }
  *(ushort *)(lVar13 + 0x152) = *(ushort *)(lVar13 + 0x152) | 0x10;
  return lVar23;
}



/* Entry: 109f14ba4; end: 109f14d4f;  */

void FUN_109f14ba4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  short sVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  uint uVar14;
  
  sVar5 = *(short *)(param_1 + 0x61) << 8;
  if (sVar5 == 0x500) {
    return;
  }
  bVar6 = true;
  uVar4 = 1 << (ulong)((uint)(int)sVar5 >> 8 & 0x1f);
  uVar1 = uVar4 & *(byte *)(*(long *)(param_1 + 0x28) + 0xb8);
  if ((uVar4 & *(byte *)(*(long *)(param_1 + 0x28) + 0xb9)) != 0) {
    bVar6 = *(long *)(param_1 + 0x1c0) != 0;
  }
  uVar14 = 4;
  uVar4 = 0;
  if (sVar5 != 0) {
    uVar4 = uVar14;
  }
  uVar2 = 0;
  if (sVar5 != 0x400) {
    uVar2 = 8;
  }
  FUN_109f050f4(param_1,uVar4 | uVar2);
  if (uVar1 != 0 && bVar6 == false) goto LAB_109f14c9c;
  plVar11 = (long *)**(long **)(param_1 + 0x178);
  if (plVar11 == (long *)0x0) {
LAB_109f14c6c:
    lVar7 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x178);
    plVar10 = (long *)0x0;
    do {
      plVar3 = plVar8;
      if ((char)plVar8[7] == '\0') {
        plVar3 = plVar10;
      }
      plVar12 = (long *)*plVar11;
      plVar8 = plVar11;
      plVar10 = plVar3;
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB_109f14c6c;
    lVar7 = plVar3[6];
  }
  FUN_109f18ef4(param_1,lVar7,bVar6,uVar1 == 0);
  FUN_109f46234(param_1);
  FUN_109f1de0c(param_1);
  FUN_109f0f144(param_1);
LAB_109f14c9c:
  if (param_2 == 0) {
    uVar14 = 1;
  }
  FUN_109f0f634(param_1,0xc,FUN_109f14d50,uVar14);
  FUN_109f2414c(param_1);
  FUN_109f14560(param_1,0xc);
  func_0x000109f1eca0(param_1);
  FUN_109f287bc(param_1);
  FUN_109f43ecc(param_1,0x40000,0);
  if (*(char *)(param_1 + 0x61) != '\0') {
    param_2 = 1;
  }
  uVar13 = 0xc;
  if (param_2 == 0) {
    uVar13 = 8;
  }
  func_0x000109f1a388(param_1,uVar13);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_109f14918(param_1);
  }
  pcVar9 = *(code **)(*(long *)(param_1 + 0x28) + 0xd0);
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(param_1);
  }
  *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 0x10;
  return;
}



/* Entry: 109f14d50; end: 109f14d5b;  */

int FUN_109f14d50(long param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  iVar4 = 1;
  while( true ) {
    bVar2 = *(byte *)(param_1 + 4);
    uVar5 = (uint)bVar2;
    if (bVar2 < 0x11) break;
    if (uVar5 != 0x13) {
      if (uVar5 - 0x11 < 2) {
        uVar6 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) != 0) {
          uVar5 = 0;
          puVar7 = *(undefined8 **)(param_1 + 0x30);
          do {
            uVar3 = *puVar7;
            FUN_109ec9e40(uVar3,0,1);
            uVar5 = (int)uVar3 + uVar5;
            uVar6 = uVar6 - 1;
            puVar7 = puVar7 + 6;
          } while (uVar6 != 0);
          goto LAB_109ec9f48;
        }
        goto LAB_109ec9f44;
      }
      if (uVar5 != 0x15) goto LAB_109ec9f44;
      uVar5 = 1;
      goto LAB_109ec9f48;
    }
    piVar1 = (int *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x30);
    iVar4 = *piVar1 * iVar4;
  }
  if (uVar5 == 8 || bVar2 < 8) {
    if ((3 < uVar5) && (3 < uVar5 - 5)) {
      if (uVar5 != 4) {
LAB_109ec9f44:
        uVar5 = 0;
        goto LAB_109ec9f48;
      }
LAB_109ec9f28:
      uVar5 = (uint)*(byte *)(param_1 + 0xe) << (ulong)(2 < *(byte *)(param_1 + 0xd));
      goto LAB_109ec9f48;
    }
  }
  else {
    if (uVar5 - 0xd < 3) {
      uVar5 = 1;
      goto LAB_109ec9f48;
    }
    if (uVar5 - 9 < 2) goto LAB_109ec9f28;
    if (uVar5 != 0xb) goto LAB_109ec9f44;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0xe);
LAB_109ec9f48:
  return uVar5 * iVar4;
}



/* Entry: 109f14d5c; end: 109f152c7;  */

ulong FUN_109f14d5c(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                   undefined8 param_6,uint param_7)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  long alStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_7 & 0xff) < 0x10 && (1 << (ulong)(param_7 & 0x1f) & 0xefe3U) != 0) {
    cVar20 = *(char *)(param_1 + 0x4d);
    if (cVar20 == '@') {
      uVar21 = *(uint *)(param_2 + 0x3c);
LAB_109f14dd4:
      if ((uVar21 & 5) != 0) goto LAB_109f14de0;
      cVar20 = '@';
    }
    else {
LAB_109f151b8:
      if (cVar20 == '\x01') {
        uVar8 = param_2;
        FUN_109f1533c(param_2,param_3,param_4,param_5,param_6,*(undefined1 *)(param_1 + 0x4c),0x20,
                      0x26,0);
        if (*(char *)(uVar8 + 0x1d) != '\x01') {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            lVar17 = *(long *)(param_2 + 0x20);
            FUN_109ecaef8(lVar17,0x1a);
            if (lVar17 == 0) {
              return 0;
            }
            *(undefined8 *)(lVar17 + 0x50) = 0;
            *(undefined8 *)(lVar17 + 0x58) = 0;
            *(undefined8 *)(lVar17 + 0x60) = 0;
            *(ulong *)(lVar17 + 0x68) = uVar8;
            lVar18 = (ulong)*(uint *)(lVar17 + 0x28) * 0x68;
            uVar2 = *(ushort *)(lVar17 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_2 + 0x18);
            *(ushort *)(lVar17 + 0x2c) = uVar2;
            *(ushort *)(lVar17 + 0x2c) = (*(ushort *)(param_2 + 0x1c) & 0x1ff) << 3 | uVar2 & 0xf007
            ;
            bVar9 = (&UNK_110b78541)[lVar18];
            if (bVar9 == 0) {
              uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar18];
              if ((&UNK_110b78540)[lVar18] == 0) {
                bVar9 = 0;
                uVar21 = 0x20;
                if ((*(uint *)(&UNK_110b78544 + lVar18) & 0x79) != 0) {
                  uVar21 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
                }
                goto LAB_109ece0a8;
              }
              bVar9 = 0;
              plVar12 = (long *)(lVar17 + 0x68);
              pcVar13 = &UNK_110b78548 + lVar18;
              uVar6 = uVar8;
              do {
                if ((*pcVar13 == '\0') && (bVar9 <= *(byte *)(*plVar12 + 0x1c))) {
                  bVar9 = *(byte *)(*plVar12 + 0x1c);
                }
                plVar12 = plVar12 + 6;
                uVar6 = uVar6 - 1;
                pcVar13 = pcVar13 + 1;
              } while (uVar6 != 0);
            }
            else {
              uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar18];
            }
            uVar10 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
            if (uVar10 == 0) {
              if ((int)uVar8 == 0) {
                uVar21 = 0x20;
                goto LAB_109ece0a8;
              }
              plVar12 = (long *)(lVar17 + 0x68);
              puVar14 = (uint *)(&UNK_110b78558 + lVar18);
              uVar6 = uVar8;
              uVar21 = 0;
              do {
                uVar10 = (uint)*(byte *)(*plVar12 + 0x1d);
                if ((*puVar14 & 0x79) != 0 || uVar21 != 0) {
                  uVar10 = uVar21;
                }
                uVar6 = uVar6 - 1;
                plVar12 = plVar12 + 6;
                puVar14 = puVar14 + 1;
                uVar21 = uVar10;
              } while (uVar6 != 0);
            }
            else {
              uVar21 = uVar10;
              if ((int)uVar8 == 0) goto LAB_109ece0a8;
            }
            uVar6 = 0;
            lVar18 = lVar17 + 0x70;
            do {
              lVar15 = *(long *)(lVar17 + uVar6 * 0x30 + 0x68);
              uVar16 = (ulong)*(byte *)(lVar15 + 0x1c);
              if (uVar16 < 0x10) {
                do {
                  *(char *)(lVar18 + uVar16) = *(char *)(lVar15 + 0x1c) + -1;
                  uVar16 = uVar16 + 1;
                } while (uVar16 != 0x10);
              }
              uVar6 = uVar6 + 1;
              lVar18 = lVar18 + 0x30;
            } while (uVar6 != uVar8);
            uVar21 = 0x20;
            if (uVar10 != 0) {
              uVar21 = uVar10;
            }
LAB_109ece0a8:
            FUN_109ecb048(lVar17,lVar17 + 0x30,bVar9,uVar21);
            FUN_109ecb4f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),lVar17);
            *(undefined8 *)(param_2 + 8) = 3;
            *(long *)(param_2 + 0x10) = lVar17;
            return lVar17 + 0x30;
          }
          goto LAB_109f152c4;
        }
        goto LAB_109f151f8;
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x4c);
    uVar8 = (ulong)(param_7 & 0xff);
    func_0x000109ecd718(uVar8);
    FUN_109f1533c(param_2,param_3,param_4,param_5,param_6,uVar1,cVar20,uVar8,0);
    uVar8 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_2;
    }
  }
  else {
    cVar20 = *(char *)(param_1 + 0x4d);
    if (cVar20 != '@') goto LAB_109f151b8;
    uVar21 = *(uint *)(param_2 + 0x3c);
    if ((uVar21 >> 1 & 1) == 0) goto LAB_109f14dd4;
LAB_109f14de0:
    uVar8 = param_2;
    FUN_109f152c8(param_2,param_4);
    lVar17 = param_5;
    if ((int)uVar8 != 0) {
      puVar4 = (undefined8 *)**(undefined8 **)(param_2 + 0x20);
      FUN_109f6600c(puVar4,0x50,8);
      if (puVar4 != (undefined8 *)0x0) {
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
      }
      *(undefined4 *)(puVar4 + 3) = 5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      FUN_109ecb048(puVar4,puVar4 + 5,1,0x20);
      puVar4[9] = 1;
      FUN_109ecb4f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),puVar4);
      *(undefined8 *)(param_2 + 8) = 3;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      lVar17 = param_2 + 8;
      FUN_109ece1b0(lVar17,0x1c0,param_5,puVar4 + 5);
    }
    puVar5 = &DAT_10e05df80;
    (**(code **)(param_2 + 0x30))(&DAT_10e05df80,0);
    uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
    if (*(byte *)(param_1 + 0x4c) != 0) {
      bVar3 = false;
      uVar21 = 0;
      do {
        uVar10 = (int)uVar6 - uVar21;
        uVar11 = 4 - (int)param_6;
        if (uVar11 >> 1 <= uVar10) {
          uVar10 = uVar11 >> 1;
        }
        uVar6 = param_2;
        FUN_109f1533c(param_2,param_3,param_4,lVar17,param_6,uVar10 << 1,0x20,0x24,bVar3);
        if (uVar10 != 0) {
          lVar18 = 0;
          plVar12 = alStack_88 + uVar21;
          do {
            lVar15 = param_2 + 8;
            FUN_109f14260(lVar15,uVar6,3 << (ulong)((uint)lVar18 & 0x1f) & 0xffff);
            lVar7 = param_2 + 8;
            FUN_109ece168(lVar7,0x162,lVar15);
            *plVar12 = lVar7;
            lVar18 = lVar18 + 2;
            plVar12 = plVar12 + 1;
          } while ((ulong)uVar10 << 1 != lVar18);
        }
        if ((uVar8 & 1) == 0) {
          bVar9 = *(byte *)(lVar17 + 0x1d);
          uVar11 = (uint)bVar9;
          uVar6 = 0xffffffff;
          if (uVar11 != 0x40) {
            uVar6 = (ulong)~(uint)(-1L << ((ulong)bVar9 & 0x3f));
          }
          uVar6 = uVar6 & (ulong)puVar5 & 0xffffffff;
          if (uVar6 != 0) {
            uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
            uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
            uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
            if (uVar11 < 5) {
              if (uVar11 == 0) {
                uVar19 = 0;
                uVar6 = 1;
                uVar16 = 0;
              }
              else {
                uVar19 = 0;
                uVar16 = 0;
                if (uVar11 != 3) {
                  uVar16 = uVar6;
                }
              }
            }
            else {
              uVar19 = uVar6 & 0xffff0000;
              uVar16 = uVar6;
            }
            puVar4 = (undefined8 *)**(undefined8 **)(param_2 + 0x20);
            FUN_109f6600c(puVar4,0x50,8);
            if (puVar4 != (undefined8 *)0x0) {
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
            }
            *(undefined4 *)(puVar4 + 3) = 5;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            FUN_109ecb048(puVar4,puVar4 + 5,1,(ulong)bVar9);
            puVar4[9] = uVar16 & 0xff00 | uVar19 | uVar6 & 0xff;
            FUN_109ecb4f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),puVar4);
            *(undefined8 *)(param_2 + 8) = 3;
            *(undefined8 **)(param_2 + 0x10) = puVar4;
            lVar18 = param_2 + 8;
            FUN_109ece1b0(lVar18,0x11d,lVar17,puVar4 + 5);
            lVar17 = lVar18;
          }
        }
        else {
          lVar18 = lVar17;
          if (bVar3) {
            bVar9 = *(byte *)(lVar17 + 0x1d);
            uVar11 = (uint)bVar9;
            uVar6 = 0xffffffff;
            if (uVar11 != 0x40) {
              uVar6 = (ulong)~(uint)(-1L << ((ulong)bVar9 & 0x3f));
            }
            uVar6 = uVar6 & (ulong)puVar5 & 0xffffffff;
            if (uVar6 != 0) {
              uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
              uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
              uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
              if (uVar11 < 5) {
                if (uVar11 == 0) {
                  uVar19 = 0;
                  uVar6 = 1;
                  uVar16 = 0;
                }
                else {
                  uVar19 = 0;
                  uVar16 = 0;
                  if (uVar11 != 3) {
                    uVar16 = uVar6;
                  }
                }
              }
              else {
                uVar19 = uVar6 & 0xffff0000;
                uVar16 = uVar6;
              }
              puVar4 = (undefined8 *)**(undefined8 **)(param_2 + 0x20);
              FUN_109f6600c(puVar4,0x50,8);
              if (puVar4 != (undefined8 *)0x0) {
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
              }
              *(undefined4 *)(puVar4 + 3) = 5;
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_109ecb048(puVar4,puVar4 + 5,1,(ulong)bVar9);
              puVar4[9] = uVar16 & 0xff00 | uVar19 | uVar6 & 0xff;
              FUN_109ecb4f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),puVar4);
              *(undefined8 *)(param_2 + 8) = 3;
              *(undefined8 **)(param_2 + 0x10) = puVar4;
              lVar18 = param_2 + 8;
              FUN_109ece1b0(lVar18,0x11d,lVar17,puVar4 + 5);
            }
          }
          bVar3 = (bool)(bVar3 ^ 1);
          lVar17 = lVar18;
        }
        param_6 = 0;
        uVar21 = uVar10 + uVar21;
        uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
      } while (uVar21 < *(byte *)(param_1 + 0x4c));
    }
    func_0x000109ecd728();
    uVar8 = param_2 + 8;
    FUN_109ece300(uVar8,uVar6,alStack_88);
    param_3 = uVar6;
LAB_109f151f8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar8;
    }
  }
LAB_109f152c4:
  ___stack_chk_fail();
  if (((*(char *)(*(long *)(uVar8 + 0x20) + 0x61) == '\0') &&
      ((*(byte *)(uVar8 + 0x3c) >> 2 & 1) != 0)) && ((*(ulong *)(param_3 + 0x20) & 0x1fffff) == 4))
  {
    for (lVar17 = *(long *)(param_3 + 0x10); uVar21 = (uint)*(byte *)(lVar17 + 4),
        *(byte *)(lVar17 + 4) == 0x13; lVar17 = *(long *)(lVar17 + 0x30)) {
    }
    FUN_109ec9858();
    if (uVar21 == 0x40) {
      return (ulong)(2 < *(byte *)(lVar17 + 0xd));
    }
  }
  return 0;
}



/* Entry: 109f152c8; end: 109f1533b;  */

bool FUN_109f152c8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (((*(char *)(*(long *)(param_1 + 0x20) + 0x61) == '\0') &&
      ((*(byte *)(param_1 + 0x3c) >> 2 & 1) != 0)) && ((*(ulong *)(param_2 + 0x20) & 0x1fffff) == 4)
     ) {
    for (lVar2 = *(long *)(param_2 + 0x10); uVar1 = (uint)*(byte *)(lVar2 + 4),
        *(byte *)(lVar2 + 4) == 0x13; lVar2 = *(long *)(lVar2 + 0x30)) {
    }
    FUN_109ec9858();
    if (uVar1 == 0x40) {
      return 2 < *(byte *)(lVar2 + 0xd);
    }
  }
  return false;
}



/* Entry: 109f1533c; end: 109f15687;  */

long FUN_109f1533c(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar8 = *(ulong *)(param_3 + 0x20);
  uVar1 = (uint)uVar8 & 0x1fffff;
  if (uVar1 == 2) {
    lVar12 = 0;
    uVar7 = 0x205;
  }
  else if (uVar1 == 8) {
    lVar12 = 0;
    if (param_2 == 0) {
      uVar7 = 0x164;
    }
    else {
      uVar7 = 0x16b;
      if ((*(byte *)(param_3 + 0x2e) & 1) != 0) {
        uVar7 = 0x169;
      }
    }
  }
  else {
    if (*(char *)(lVar2 + 0x61) == '\x04') {
      uVar6 = uVar8 >> 0x21 & 7;
      iVar5 = (int)uVar6;
      if ((*(char *)(*(long *)(lVar2 + 0x28) + 0x6a) == '\x01' && iVar5 != 2) &&
         (uVar9 = (uint)*(undefined8 *)(param_3 + 0x2c), (uVar9 >> 0x10 & 1) == 0)) {
        lVar12 = 0;
        uVar7 = 0x147;
        if ((iVar5 != 4) && ((uVar9 >> 0x11 & 1) == 0)) {
          uVar7 = 0xe2;
          if ((uVar8 & 0x400000) != 0) {
            uVar7 = 0xda;
          }
          if ((uVar8 & 0x800000) != 0) {
            uVar7 = 0xe3;
          }
          uVar9 = *(uint *)(param_3 + 0x3c);
          if ((((0xd < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0x2006U) == 0)) && (iVar5 == 0)) &&
             (uVar9 != 0xe)) {
            uVar6 = 1;
          }
          lVar12 = param_1 + 8;
          func_0x000109f15688(lVar12,uVar7,uVar6);
          lVar2 = *(long *)(param_1 + 0x20);
          uVar7 = 0x149;
        }
        goto LAB_109f15414;
      }
    }
    uVar10 = 0x144;
    if (param_2 != 0) {
      uVar10 = 0x16a;
    }
    uVar7 = 0x168;
    if ((*(byte *)(param_3 + 0x2e) & 1) == 0) {
      uVar7 = uVar10;
    }
    lVar12 = 0;
  }
LAB_109f15414:
  FUN_109ecb0a8(lVar2,uVar7);
  *(char *)(lVar2 + 0x50) = (char)param_6;
  lVar3 = param_1;
  func_0x000109f15710(param_1,*(undefined8 *)(param_3 + 0x18));
  *(long *)(lVar2 + 0x78) = lVar3;
  uVar8 = (ulong)*(uint *)(lVar2 + 0x28);
  lVar3 = lVar2 + 0x54;
  *(undefined4 *)(lVar3 + (ulong)(byte)(&UNK_110b671a9)[uVar8 * 0x68] * 4 + -4) =
       *(undefined4 *)(param_3 + 0x44);
  if ((&UNK_110b671ae)[uVar8 * 0x68] != '\0') {
    uVar7 = (undefined4)*(undefined8 *)(param_3 + 0x10);
    if (param_2 != 0) {
      func_0x000109eca118();
    }
    (**(code **)(param_1 + 0x30))();
    uVar8 = (ulong)*(uint *)(lVar2 + 0x28);
    *(undefined4 *)(lVar3 + (ulong)(byte)(&UNK_110b671ae)[uVar8 * 0x68] * 4 + -4) = uVar7;
  }
  if (uVar1 == 4 || uVar1 == 8) {
    *(undefined4 *)(lVar3 + (ulong)(byte)(&UNK_110b671b1)[uVar8 * 0x68] * 4 + -4) = param_5;
  }
  if ((ulong)(byte)(&UNK_110b671ba)[uVar8 * 0x68] != 0) {
    *(uint *)(lVar3 + (ulong)(byte)(&UNK_110b671ba)[uVar8 * 0x68] * 4 + -4) =
         *(uint *)(param_3 + 0x30) & 0x1ff;
  }
  *(undefined4 *)(lVar3 + (ulong)(byte)(&UNK_110b671c1)[uVar8 * 0x68] * 4 + -4) = param_8;
  if ((int)uVar8 != 0x205) {
    uVar9 = *(uint *)(param_3 + 0x3c);
    lVar4 = param_1;
    func_0x000109f15798(param_1,param_3);
    uVar1 = (uint)(*(ulong *)(param_3 + 0x20) >> 6) & 0x800000;
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 200) & 8) != 0) {
      uVar1 = 0;
    }
    uVar11 = 0x8000000;
    if (param_9 == '\0') {
      uVar11 = 0;
    }
    *(uint *)(lVar3 + (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(lVar2 + 0x28) * 0x68] * 4 + -4)
         = uVar11 | uVar9 & 0x7f | ((uint)lVar4 & 0x3f) << 7 |
           (uint)(*(ulong *)(param_3 + 0x20) >> 0x19) & 0x4000 | uVar1 |
           (*(uint *)(param_3 + 0x2c) >> 0x11 & 1) << 0x1e;
  }
  if (param_2 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    if (lVar12 == 0) {
      *(undefined8 *)(lVar2 + 0x98) = param_4;
    }
    else {
      *(long *)(lVar2 + 0x98) = lVar12;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = param_4;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(long *)(lVar2 + 0x98) = param_2;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = param_4;
  }
  FUN_109ecb048(lVar2,lVar2 + 0x30,param_6,param_7);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar2);
  *(undefined8 *)(param_1 + 8) = 3;
  *(long *)(param_1 + 0x10) = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f15688; end: 109f1584f;  */

long FUN_109f15688(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_1[3];
  FUN_109ecb0a8();
  FUN_109ecb048();
  *(undefined4 *)
   (lVar1 + (ulong)(byte)(&UNK_110b671b3)[(ulong)*(uint *)(lVar1 + 0x28) * 0x68] * 4 + 0x50) =
       param_3;
  FUN_109ecb4f0(*param_1,param_1[1],lVar1);
  *param_1 = 3;
  param_1[1] = lVar1;
  return lVar1 + 0x30;
}



/* Entry: 109f15850; end: 109f15ad7;  */

void FUN_109f15850(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  if (param_3 == 0) {
    uVar9 = 0x27a;
  }
  else {
    uVar9 = 0x27b;
    if ((*(byte *)(param_4 + 0x2e) & 1) == 0) {
      uVar9 = 0x27c;
    }
  }
  lVar7 = *(long *)(param_1 + 0x20);
  FUN_109ecb0a8(lVar7,uVar9);
  *(char *)(lVar7 + 0x50) = (char)param_7;
  lVar8 = param_1;
  func_0x000109f15710(param_1,*(undefined8 *)(param_4 + 0x18));
  *(long *)(lVar7 + 0x78) = lVar8;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0x98) = param_2;
  uVar9 = (undefined4)*(undefined8 *)(param_4 + 0x10);
  if (param_3 != 0) {
    func_0x000109eca118();
  }
  (**(code **)(param_1 + 0x30))();
  lVar8 = lVar7 + 0x54;
  lVar11 = (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
  *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671a9)[lVar11] * 4 + -4) =
       *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671ae)[lVar11] * 4 + -4) = uVar9;
  *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671b1)[lVar11] * 4 + -4) = param_6;
  *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671c0)[lVar11] * 4 + -4) = param_9;
  *(undefined4 *)(lVar8 + (ulong)(byte)(&UNK_110b671aa)[lVar11] * 4 + -4) = param_8;
  if ((ulong)(byte)(&UNK_110b671ba)[lVar11] != 0) {
    *(uint *)(lVar8 + (ulong)(byte)(&UNK_110b671ba)[lVar11] * 4 + -4) =
         *(uint *)(param_4 + 0x30) & 0x1ff;
  }
  if (param_3 == 0) {
    lVar11 = 1;
  }
  else {
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    lVar11 = 2;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(long *)(lVar7 + 0xb8) = param_3;
  }
  puVar1 = (undefined8 *)(lVar7 + 0x80) + lVar11 * 4;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_5;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x61) == '\x03') {
    uVar2 = *(uint *)(param_4 + 0x2c);
    if ((uVar2 >> 0x1d & 1) == 0) {
      uVar10 = 0;
      if (param_7 != 0) {
        uVar2 = uVar2 >> 0x15;
        uVar10 = param_7 + 3U & 0x1fc;
        uVar3 = param_7 - 1;
        auVar14._0_8_ = CONCAT44(uVar2,uVar2) & 0xff000000ff;
        auVar14._8_4_ = uVar2 & 0xff;
        auVar14._12_4_ = uVar2 & 0xff;
        auVar13 = ZEXT216(0);
        uVar2 = 0;
        uVar4 = 1;
        uVar5 = 2;
        uVar6 = 3;
        do {
          uVar20 = uVar6;
          uVar19 = uVar5;
          uVar18 = uVar4;
          uVar17 = uVar2;
          auVar15 = auVar13;
          auVar16._4_4_ = uVar18 * 2;
          auVar16._0_4_ = uVar17 * 2;
          auVar16._8_4_ = uVar19 * 2;
          auVar16._12_4_ = uVar20 * 2;
          auVar16 = NEON_ushl(auVar14,auVar16,4);
          auVar13[0] = auVar16[0] | auVar15[0];
          auVar13[1] = auVar16[1] | auVar15[1];
          auVar13[2] = auVar16[2] | auVar15[2];
          auVar13[3] = auVar16[3] | auVar15[3];
          auVar13[4] = auVar16[4] | auVar15[4];
          auVar13[5] = auVar16[5] | auVar15[5];
          auVar13[6] = auVar16[6] | auVar15[6];
          auVar13[7] = auVar16[7] | auVar15[7];
          auVar13[8] = auVar16[8] | auVar15[8];
          auVar13[9] = auVar16[9] | auVar15[9];
          auVar13[10] = auVar16[10] | auVar15[10];
          auVar13[0xb] = auVar16[0xb] | auVar15[0xb];
          auVar13[0xc] = auVar16[0xc] | auVar15[0xc];
          auVar13[0xd] = auVar16[0xd] | auVar15[0xd];
          auVar13[0xe] = auVar16[0xe] | auVar15[0xe];
          auVar13[0xf] = auVar16[0xf] | auVar15[0xf];
          uVar10 = uVar10 - 4;
          uVar2 = uVar17 + 4;
          uVar4 = uVar18 + 4;
          uVar5 = uVar19 + 4;
          uVar6 = uVar20 + 4;
        } while (uVar10 != 0);
        auVar12._0_4_ = -(uint)(uVar3 < uVar17);
        auVar12._4_4_ = -(uint)(uVar3 < uVar18);
        auVar12._8_4_ = -(uint)(uVar3 < uVar19);
        auVar12._12_4_ = -(uint)(uVar3 < uVar20);
        auVar13 = auVar13 ^ (auVar13 ^ auVar15) & auVar12;
        auVar14 = NEON_ext(auVar13,auVar13,8,1);
        uVar10 = (uint)(byte)(auVar13[0] | auVar14[0] | auVar13[4] | auVar14[4]);
      }
    }
    else {
      uVar10 = uVar2 >> 0x15 & 0xff;
    }
  }
  else {
    uVar10 = 0;
  }
  uVar3 = *(uint *)(param_4 + 0x3c);
  lVar11 = param_1;
  func_0x000109f15798(param_1,param_4);
  uVar2 = (uint)(*(ulong *)(param_4 + 0x20) >> 6) & 0x800000;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 200) & 8) != 0) {
    uVar2 = 0;
  }
  *(uint *)(lVar8 + (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(lVar7 + 0x28) * 0x68] * 4 + -4) =
       (uVar10 << 0xf |
        uVar3 & 0x7f | ((uint)lVar11 & 0x3f) << 7 | (*(uint *)(param_4 + 0x34) & 1) << 0xd |
        (*(uint *)(param_4 + 0x2c) >> 0xf & 1) << 0x18 |
       ((uint)(*(ulong *)(param_4 + 0x20) >> 0x19) & 1) << 0x1a) + uVar2;
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar7);
  *(undefined8 *)(param_1 + 8) = 3;
  *(long *)(param_1 + 0x10) = lVar7;
  return;
}



/* Entry: 109f15ad8; end: 109f15d9b;  */

long FUN_109f15ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0x50,8);
  if (puVar4 != (undefined8 *)0x0) {
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
  }
  *(undefined4 *)(puVar4 + 3) = 5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_109ecb048(puVar4,puVar4 + 5,1,0x20);
  puVar4[9] = 0x3e;
  FUN_109ecb4f0(*param_1,param_1[1],puVar4);
  *param_1 = 3;
  param_1[1] = puVar4;
  puVar5 = param_1;
  FUN_109ece1b0(param_1,0x1c0,param_2,puVar4 + 5);
  uVar10 = param_4 - 0x20000U >> 0x11 | param_4 << 0xf;
  if (uVar10 < 2) {
    bVar9 = *(byte *)((long)puVar5 + 0x1d);
    uVar8 = 1;
    if ((bVar9 & 1) == 0) {
      uVar8 = 2;
    }
    puVar4 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar4,0x50,8);
    if (puVar4 != (undefined8 *)0x0) {
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
    }
    *(undefined4 *)(puVar4 + 3) = 5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
LAB_109f15c2c:
    FUN_109ecb048(puVar4,puVar4 + 5,1,bVar9);
    puVar4[9] = uVar8;
    FUN_109ecb4f0(*param_1,param_1[1],puVar4);
    *param_1 = 3;
    param_1[1] = puVar4;
    puVar4 = puVar4 + 5;
    uVar8 = 0x124;
    puVar6 = puVar5;
  }
  else {
    if (uVar10 == 3) {
      bVar9 = *(byte *)((long)puVar5 + 0x1d);
      puVar4 = *(undefined8 **)param_1[3];
      FUN_109f6600c(puVar4,0x50,8);
      if (puVar4 != (undefined8 *)0x0) {
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
      }
      *(undefined4 *)(puVar4 + 3) = 5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar8 = 1;
      goto LAB_109f15c2c;
    }
    uVar1 = *(undefined1 *)((long)puVar5 + 0x1d);
    puVar4 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar4,0x50,8);
    if (puVar4 != (undefined8 *)0x0) {
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
    }
    *(undefined4 *)(puVar4 + 3) = 5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_109ecb048(puVar4,puVar4 + 5,1,uVar1);
    puVar4[9] = 0;
    FUN_109ecb4f0(*param_1,param_1[1],puVar4);
    *param_1 = 3;
    param_1[1] = puVar4;
    puVar6 = param_1;
    FUN_109ece1b0(param_1,0x124,puVar5,puVar4 + 5);
    bVar9 = *(byte *)((long)puVar5 + 0x1d);
    uVar8 = 3;
    if ((bVar9 & 1) != 0) {
      uVar8 = 1;
    }
    puVar7 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar7,0x50,8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
    }
    *(undefined4 *)(puVar7 + 3) = 5;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_109ecb048(puVar7,puVar7 + 5,1,bVar9);
    puVar7[9] = uVar8;
    FUN_109ecb4f0(*param_1,param_1[1],puVar7);
    *param_1 = 3;
    param_1[1] = puVar7;
    puVar4 = param_1;
    FUN_109ece1b0(param_1,0x124,puVar5,puVar7 + 5);
    uVar8 = 0x14a;
  }
  lVar3 = param_1[3];
  FUN_109ecaef8(lVar3,uVar8);
  if (lVar3 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 **)(lVar3 + 0x68) = puVar6;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 **)(lVar3 + 0x98) = puVar4;
  lVar17 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar3 + 0x2c) = uVar2;
  *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar9 = (&UNK_110b78541)[lVar17];
  if (bVar9 == 0) {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar17];
    if ((&UNK_110b78540)[lVar17] == 0) {
      bVar9 = 0;
      uVar10 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar17) & 0x79) != 0) {
        uVar10 = *(uint *)(&UNK_110b78544 + lVar17) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar9 = 0;
    plVar13 = (long *)(lVar3 + 0x68);
    pcVar15 = &UNK_110b78548 + lVar17;
    uVar14 = uVar12;
    do {
      if ((*pcVar15 == '\0') && (bVar9 <= *(byte *)(*plVar13 + 0x1c))) {
        bVar9 = *(byte *)(*plVar13 + 0x1c);
      }
      plVar13 = plVar13 + 6;
      uVar14 = uVar14 - 1;
      pcVar15 = pcVar15 + 1;
    } while (uVar14 != 0);
  }
  else {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar17];
  }
  uVar11 = *(uint *)(&UNK_110b78544 + lVar17) & 0x79;
  if (uVar11 == 0) {
    if ((int)uVar12 == 0) {
      uVar10 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar13 = (long *)(lVar3 + 0x68);
    puVar16 = (uint *)(&UNK_110b78558 + lVar17);
    uVar14 = uVar12;
    uVar10 = 0;
    do {
      uVar11 = (uint)*(byte *)(*plVar13 + 0x1d);
      if ((*puVar16 & 0x79) != 0 || uVar10 != 0) {
        uVar11 = uVar10;
      }
      uVar14 = uVar14 - 1;
      plVar13 = plVar13 + 6;
      puVar16 = puVar16 + 1;
      uVar10 = uVar11;
    } while (uVar14 != 0);
  }
  else {
    uVar10 = uVar11;
    if ((int)uVar12 == 0) goto LAB_109ece0a8;
  }
  uVar14 = 0;
  lVar17 = lVar3 + 0x70;
  do {
    lVar18 = *(long *)(lVar3 + uVar14 * 0x30 + 0x68);
    uVar19 = (ulong)*(byte *)(lVar18 + 0x1c);
    if (uVar19 < 0x10) {
      do {
        *(char *)(lVar17 + uVar19) = *(char *)(lVar18 + 0x1c) + -1;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x10);
    }
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 0x30;
  } while (uVar14 != uVar12);
  uVar10 = 0x20;
  if (uVar11 != 0) {
    uVar10 = uVar11;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar3,lVar3 + 0x30,bVar9,uVar10);
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3 + 0x30;
}



/* Entry: 109f15d9c; end: 109f15f0b;  */

long FUN_109f15d9c(undefined8 *param_1,long param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_3 < 8) {
    if (param_3 == 5) {
      lVar2 = param_1[3];
      FUN_109ecaef8(lVar2,0x154);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar2 + 0x2c) = uVar1;
      *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(long *)(lVar2 + 0x68) = param_2;
      *(undefined1 *)(lVar2 + 0x70) = 1;
LAB_109f15ed4:
      *(undefined8 *)(lVar2 + 0x71) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar2);
      *param_1 = 3;
      param_1[1] = lVar2;
      return lVar2 + 0x30;
    }
    if (param_3 != 6) {
      lVar2 = param_1[3];
      FUN_109ecaef8(lVar2,0x154);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar2 + 0x2c) = uVar1;
      *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(long *)(lVar2 + 0x68) = param_2;
      *(undefined1 *)(lVar2 + 0x70) = 2;
      goto LAB_109f15ed4;
    }
    uVar3 = 0x1b1;
  }
  else {
    if ((param_3 != 8) && (param_3 == 9)) {
      return param_2;
    }
    if (*(char *)(param_2 + 0x1d) == ' ') {
      return param_2;
    }
    uVar3 = 0x184;
  }
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,uVar3);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(long *)(lVar2 + 0x68) = param_2;
  lVar12 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar4 = (&UNK_110b78541)[lVar12];
  if (bVar4 == 0) {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
    if ((&UNK_110b78540)[lVar12] == 0) {
      bVar4 = 0;
      uVar5 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar12) & 0x79) != 0) {
        uVar5 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar4 = 0;
    plVar8 = (long *)(lVar2 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar12;
    uVar9 = uVar7;
    do {
      if ((*pcVar10 == '\0') && (bVar4 <= *(byte *)(*plVar8 + 0x1c))) {
        bVar4 = *(byte *)(*plVar8 + 0x1c);
      }
      plVar8 = plVar8 + 6;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
  }
  uVar6 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
  if (uVar6 == 0) {
    if ((int)uVar7 == 0) {
      uVar5 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar8 = (long *)(lVar2 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar12);
    uVar9 = uVar7;
    uVar5 = 0;
    do {
      uVar6 = (uint)*(byte *)(*plVar8 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar9 = uVar9 - 1;
      plVar8 = plVar8 + 6;
      puVar11 = puVar11 + 1;
      uVar5 = uVar6;
    } while (uVar9 != 0);
  }
  else {
    uVar5 = uVar6;
    if ((int)uVar7 == 0) goto LAB_109ece0a8;
  }
  uVar9 = 0;
  lVar12 = lVar2 + 0x70;
  do {
    lVar13 = *(long *)(lVar2 + uVar9 * 0x30 + 0x68);
    uVar14 = (ulong)*(byte *)(lVar13 + 0x1c);
    if (uVar14 < 0x10) {
      do {
        *(char *)(lVar12 + uVar14) = *(char *)(lVar13 + 0x1c) + -1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x10);
    }
    uVar9 = uVar9 + 1;
    lVar12 = lVar12 + 0x30;
  } while (uVar9 != uVar7);
  uVar5 = 0x20;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar4,uVar5);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f15f0c; end: 109f16007;  */

undefined8 * FUN_109f15f0c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  uint auStack_f0 [22];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  puVar6 = param_1;
  if (param_3 == 7) {
    if (*(char *)((long)param_2 + 0x1c) == '\x02') {
      return param_2;
    }
    iVar10 = 3;
    puVar3 = auStack_f0;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar18 = 0;
    uVar12 = 0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    auStack_f0[10] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[8] = 0;
    auStack_f0[9] = 0;
    auStack_f0[0xe] = 0;
    auStack_f0[0xf] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xd] = 0;
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[0] = 0;
    auStack_f0[1] = 0;
    auStack_f0[6] = 0;
    auStack_f0[7] = 0;
    auStack_f0[4] = 0;
    auStack_f0[5] = 0;
    do {
      if ((3U >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
        auStack_f0[uVar12] = uVar18;
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x10);
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    puStack_68 = param_2;
    uVar18 = (uint)uVar12;
    if (uVar18 == 0) {
      bVar2 = true;
    }
    else {
      uVar14 = 0;
      uVar11 = uVar18;
      if (0xf < uVar18) {
        uVar11 = 0x10;
      }
      bVar2 = true;
      do {
        bVar2 = (bool)(uVar14 == auStack_f0[uVar14] & bVar2);
        *(char *)((long)&uStack_60 + uVar14) = (char)auStack_f0[uVar14];
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
    unaff_x20 = param_2;
    if ((uVar18 != *(byte *)((long)param_2 + 0x1c)) || (!bVar2)) {
      auStack_f0[0x12] = 0;
      auStack_f0[0x13] = 0;
      auStack_f0[0x10] = 0;
      auStack_f0[0x11] = 0;
      puStack_98 = param_2;
      auStack_f0[0x14] = 0;
      auStack_f0[0x15] = 0;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      if (uVar18 == *(byte *)((long)param_2 + 0x1c)) {
        if (uVar18 != 0) {
          uVar14 = 0;
          bVar2 = false;
          do {
            bVar2 = (bool)(uVar14 != *(byte *)((long)&uStack_90 + uVar14) | bVar2);
            uVar14 = uVar14 + 1;
          } while (uVar12 != uVar14);
          if (bVar2) goto LAB_109f14388;
        }
      }
      else {
LAB_109f14388:
        lVar5 = param_1[3];
        FUN_109ecaef8(lVar5,0x154);
        unaff_x20 = (undefined8 *)(lVar5 + 0x30);
        FUN_109ecb048();
        uVar1 = *(ushort *)(lVar5 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar5 + 0x2c) = uVar1;
        *(ushort *)(lVar5 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
        *(undefined8 *)(lVar5 + 0x58) = uStack_78;
        *(undefined8 *)(lVar5 + 0x50) = uStack_80;
        *(undefined8 **)(lVar5 + 0x68) = puStack_68;
        *(undefined8 *)(lVar5 + 0x60) = uStack_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        puVar6 = (undefined8 *)*param_1;
        param_2 = (undefined8 *)param_1[1];
        lVar4 = lVar5;
        FUN_109ecb4f0();
        iVar10 = (int)lVar4;
        *param_1 = 3;
        param_1[1] = lVar5;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    if (1 < iVar10 - 3U) {
      return param_2;
    }
    puVar7 = param_2;
    if (*(char *)((long)param_2 + 0x1c) != '\x02') {
      puVar7 = puVar6;
      FUN_109f14260(puVar6,param_2,3);
    }
    puVar8 = puVar6;
    FUN_109ece168(puVar6,0x162,puVar7);
    lVar4 = puVar6[3];
    FUN_109ecaef8(lVar4,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar6 + 2);
    *(ushort *)(lVar4 + 0x2c) = uVar1;
    *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)puVar6 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 **)(lVar4 + 0x68) = param_2;
    *(undefined1 *)(lVar4 + 0x70) = 3;
    *(undefined8 *)(lVar4 + 0x71) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    FUN_109ecb4f0(*puVar6,puVar6[1],lVar4);
    *puVar6 = 3;
    puVar6[1] = lVar4;
    puVar7 = (undefined8 *)(lVar4 + 0x30);
    if (*(char *)(lVar4 + 0x4d) != '@') {
      puVar7 = puVar6;
      FUN_109ece168(puVar6,0x185,(undefined8 *)(lVar4 + 0x30));
    }
    lVar4 = puVar6[3];
    FUN_109ecaef8(lVar4,0x11d);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 **)(lVar4 + 0x68) = puVar8;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 **)(lVar4 + 0x98) = puVar7;
    unaff_x30 = 0x109f14434;
  }
  else {
    if (param_3 != 6) {
      puVar6 = param_2;
      if (*(char *)((long)param_2 + 0x1c) != '\x01') {
        lVar4 = param_1[3];
        FUN_109ecaef8(lVar4,0x154);
        puVar6 = (undefined8 *)(lVar4 + 0x30);
        FUN_109ecb048();
        uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar4 + 0x2c) = uVar1;
        *(ushort *)(lVar4 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x60) = 0;
        *(undefined8 **)(lVar4 + 0x68) = param_2;
        *(undefined8 *)(lVar4 + 0x70) = 0;
        *(undefined8 *)(lVar4 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar4);
        *param_1 = 3;
        param_1[1] = lVar4;
      }
      return puVar6;
    }
    lVar4 = param_1[3];
    FUN_109ecaef8(lVar4,0x1b2);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 **)(lVar4 + 0x68) = param_2;
    puVar3 = (uint *)register0x00000008;
    param_1 = unaff_x19;
  }
  *(undefined8 **)((long)puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)((long)puVar3 + -0x18) = param_1;
  *(undefined1 **)((long)puVar3 + -0x10) = unaff_x29;
  *(undefined8 *)((long)puVar3 + -8) = unaff_x30;
  lVar5 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar6 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar1;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)puVar6 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar9 = (&UNK_110b78541)[lVar5];
  if (bVar9 == 0) {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar5];
    if ((&UNK_110b78540)[lVar5] == 0) {
      bVar9 = 0;
      uVar18 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar5) & 0x79) != 0) {
        uVar18 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar9 = 0;
    plVar13 = (long *)(lVar4 + 0x68);
    pcVar15 = &UNK_110b78548 + lVar5;
    uVar14 = uVar12;
    do {
      if ((*pcVar15 == '\0') && (bVar9 <= *(byte *)(*plVar13 + 0x1c))) {
        bVar9 = *(byte *)(*plVar13 + 0x1c);
      }
      plVar13 = plVar13 + 6;
      uVar14 = uVar14 - 1;
      pcVar15 = pcVar15 + 1;
    } while (uVar14 != 0);
  }
  else {
    uVar12 = (ulong)(byte)(&UNK_110b78540)[lVar5];
  }
  uVar11 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
  if (uVar11 == 0) {
    if ((int)uVar12 == 0) {
      uVar18 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar13 = (long *)(lVar4 + 0x68);
    puVar3 = (uint *)(&UNK_110b78558 + lVar5);
    uVar14 = uVar12;
    uVar18 = 0;
    do {
      uVar11 = (uint)*(byte *)(*plVar13 + 0x1d);
      if ((*puVar3 & 0x79) != 0 || uVar18 != 0) {
        uVar11 = uVar18;
      }
      uVar14 = uVar14 - 1;
      plVar13 = plVar13 + 6;
      puVar3 = puVar3 + 1;
      uVar18 = uVar11;
    } while (uVar14 != 0);
  }
  else {
    uVar18 = uVar11;
    if ((int)uVar12 == 0) goto LAB_109ece0a8;
  }
  uVar14 = 0;
  lVar5 = lVar4 + 0x70;
  do {
    lVar16 = *(long *)(lVar4 + uVar14 * 0x30 + 0x68);
    uVar17 = (ulong)*(byte *)(lVar16 + 0x1c);
    if (uVar17 < 0x10) {
      do {
        *(char *)(lVar5 + uVar17) = *(char *)(lVar16 + 0x1c) + -1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x10);
    }
    uVar14 = uVar14 + 1;
    lVar5 = lVar5 + 0x30;
  } while (uVar14 != uVar12);
  uVar18 = 0x20;
  if (uVar11 != 0) {
    uVar18 = uVar11;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar4,lVar4 + 0x30,bVar9,uVar18);
  FUN_109ecb4f0(*puVar6,puVar6[1],lVar4);
  *puVar6 = 3;
  puVar6[1] = lVar4;
  return (undefined8 *)(lVar4 + 0x30);
}



/* Entry: 109f16008; end: 109f16227;  */

long FUN_109f16008(undefined8 *param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  uint *puVar14;
  long lVar15;
  
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_2;
  *(undefined1 *)(lVar2 + 0x70) = 3;
  *(undefined8 *)(lVar2 + 0x71) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  bVar6 = *(byte *)(lVar2 + 0x4d);
  uVar8 = (uint)bVar6;
  uVar9 = 0xffffffff;
  if (uVar8 != 0x40) {
    uVar9 = (ulong)~(uint)(-1L << ((ulong)bVar6 & 0x3f));
  }
  uVar9 = uVar9 & param_3 - 1;
  puVar4 = (undefined8 *)(lVar2 + 0x30);
  if (uVar9 != 0) {
    uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    if (uVar8 < 5) {
      if (uVar8 == 0) {
        uVar12 = 0;
        uVar9 = 1;
        uVar11 = 0;
      }
      else {
        uVar12 = 0;
        uVar11 = 0;
        if (uVar8 != 3) {
          uVar11 = uVar9;
        }
      }
    }
    else {
      uVar12 = uVar9 & 0xffff0000;
      uVar11 = uVar9;
    }
    puVar3 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar3,0x50,8);
    if (puVar3 != (undefined8 *)0x0) {
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
    }
    *(undefined4 *)(puVar3 + 3) = 5;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109ecb048(puVar3,puVar3 + 5,1,(ulong)bVar6);
    puVar3[9] = uVar11 & 0xff00 | uVar12 | uVar9 & 0xff;
    FUN_109ecb4f0(*param_1,param_1[1],puVar3);
    *param_1 = 3;
    param_1[1] = puVar3;
    puVar4 = param_1;
    FUN_109ece1b0(param_1,0x11d,(undefined8 *)(lVar2 + 0x30),puVar3 + 5);
  }
  lVar5 = param_1[3];
  FUN_109ecaef8(lVar5,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar5 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar5 + 0x2c) = uVar1;
  *(ushort *)(lVar5 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = param_2;
  *(undefined1 *)(lVar5 + 0x70) = 2;
  *(undefined8 *)(lVar5 + 0x71) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar5);
  *param_1 = 3;
  param_1[1] = lVar5;
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x19a);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 **)(lVar2 + 0x68) = puVar4;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(long *)(lVar2 + 0x98) = lVar5 + 0x30;
  lVar5 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar6 = (&UNK_110b78541)[lVar5];
  if (bVar6 == 0) {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar5];
    if ((&UNK_110b78540)[lVar5] == 0) {
      bVar6 = 0;
      uVar8 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar5) & 0x79) != 0) {
        uVar8 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar6 = 0;
    plVar10 = (long *)(lVar2 + 0x68);
    pcVar13 = &UNK_110b78548 + lVar5;
    uVar11 = uVar9;
    do {
      if ((*pcVar13 == '\0') && (bVar6 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar6 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar13 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar5];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar9 == 0) {
      uVar8 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = (long *)(lVar2 + 0x68);
    puVar14 = (uint *)(&UNK_110b78558 + lVar5);
    uVar11 = uVar9;
    uVar8 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar14 & 0x79) != 0 || uVar8 != 0) {
        uVar7 = uVar8;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar14 = puVar14 + 1;
      uVar8 = uVar7;
    } while (uVar11 != 0);
  }
  else {
    uVar8 = uVar7;
    if ((int)uVar9 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  lVar5 = lVar2 + 0x70;
  do {
    lVar15 = *(long *)(lVar2 + uVar11 * 0x30 + 0x68);
    uVar12 = (ulong)*(byte *)(lVar15 + 0x1c);
    if (uVar12 < 0x10) {
      do {
        *(char *)(lVar5 + uVar12) = *(char *)(lVar15 + 0x1c) + -1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x10);
    }
    uVar11 = uVar11 + 1;
    lVar5 = lVar5 + 0x30;
  } while (uVar11 != uVar9);
  uVar8 = 0x20;
  if (uVar7 != 0) {
    uVar8 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar6,uVar8);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f16228; end: 109f16ae7;  */

void FUN_109f16228(long param_1,uint param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uStack_e8;
  ulong uStack_d8;
  int iStack_ac;
  undefined1 auStack_a0 [56];
  long lStack_68;
  long lVar8;
  long lVar9;
  
  plVar28 = *(long **)(param_1 + 0x178);
  plVar15 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar15 == (long *)0x0) {
      return;
    }
    lVar19 = plVar28[6];
    if (lVar19 != 0) break;
    plVar28 = plVar15;
    plVar15 = (long *)*plVar15;
  }
  do {
    lVar27 = *(long *)(lVar19 + 0x30);
    if (lVar27 != 0) {
      puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0x20) + 0x18);
      do {
        plVar26 = *(long **)(lVar27 + 0x20);
        plVar15 = (long *)*plVar26;
        if (plVar15 != (long *)0x0) {
          do {
            plVar17 = (long *)0x0;
            plVar29 = plVar26;
            if (*plVar15 != 0) {
              plVar17 = plVar15;
            }
            do {
              plVar26 = plVar17;
              if (((int)plVar29[3] == 4) &&
                 ((((iVar6 = (int)plVar29[5], iVar6 - 0xbbU < 4 || (iVar6 == 0x26f)) ||
                   (iVar6 == 0x112)) &&
                  (lVar19 = *(long *)plVar29[0x13], (*(uint *)(lVar19 + 0x2c) & param_2) != 0)))) {
                while (*(int *)(lVar19 + 0x28) != 0) {
                  if (*(int *)(lVar19 + 0x28) == 5) {
                    lVar19 = 0;
                    goto LAB_109f16350;
                  }
                  lVar19 = **(long **)(lVar19 + 0x50);
                  if (*(int *)(lVar19 + 0x18) != 1) {
                    lVar19 = 0;
                  }
                }
                lVar19 = *(long *)(lVar19 + 0x38);
LAB_109f16350:
                uVar24 = *(ulong *)(lVar19 + 0x20);
                if ((((uVar24 >> 0x26 & 1) == 0) && (-1 < *(char *)(lVar19 + 0x2d))) &&
                   ((*(uint *)(param_3 +
                              ((ulong)(long)*(int *)(lVar19 + 0x3c) >> 3 & 0x7ffffffffffffff) * 4)
                     >> (ulong)((uint)((long)*(int *)(lVar19 + 0x3c) << 2) & 0x1c |
                               (uint)(uVar24 >> 0x24) & 3) & 1) == 0)) {
                  lVar23 = *(long *)(lVar19 + 0x10);
                  lVar16 = lVar19;
                  func_0x000109f0f5ac(lVar19,(long)*(char *)((long)puVar14 + 0x61));
                  if ((int)lVar16 != 0) {
                    func_0x000109eca118();
                  }
                  bVar3 = *(byte *)(lVar23 + 4);
                  if (bVar3 == 0x13) {
                    do {
                      lVar23 = *(long *)(lVar23 + 0x30);
                      bVar3 = *(byte *)(lVar23 + 4);
                    } while (bVar3 == 0x13);
                  }
                  else if (*(byte *)(lVar23 + 0xe) < 2 || 2 < bVar3 - 2) goto LAB_109f16384;
                  if ((((1 < bVar3 - 0x11) &&
                       (((param_5 & 1) != 0 ||
                        ((0x1f < *(uint *)(lVar19 + 0x3c) && ((*(byte *)(lVar19 + 0x24) & 1) == 0)))
                        ))) && ((iVar6 = (int)plVar29[5], iVar6 - 0xbbU < 4 ||
                                ((iVar6 == 0x26f || (iVar6 == 0x112)))))) &&
                     ((uVar20 = (uint)uVar24 & 0x1fffff, ((uint)(uVar20 == 4) & param_2 >> 2) != 0
                      || (((uint)(uVar20 == 8) & param_2 >> 3) != 0)))) {
                    lVar16 = *(long *)plVar29[0x13];
                    if (*(int *)(lVar16 + 0x18) != 1) {
                      lVar16 = 0;
                    }
                    iVar6 = (int)lVar16;
                    FUN_109ef9754();
                    if (iVar6 == 0) {
                      uVar5 = *(undefined2 *)((long)puVar14 + 0x61);
                      lVar16 = lVar19;
                      (**(code **)(param_4 + 8))(lVar19);
                      lVar23 = param_4;
                      FUN_109f64fdc(param_4,lVar16,lVar19);
                      if (lVar23 == 0) {
                        lVar16 = *(long *)(lVar19 + 0x10);
                        lVar23 = lVar19;
                        func_0x000109f0f5ac(lVar19,(int)(char)uVar5);
                        if ((int)lVar23 != 0) {
                          func_0x000109eca118();
                        }
                        bVar3 = *(byte *)(lVar16 + 4);
                        lVar23 = lVar16;
                        if (bVar3 == 0x13) {
                          lVar8 = lVar16;
                          FUN_109ec88a0();
                          iVar6 = (int)lVar8;
                          do {
                            lVar23 = *(long *)(lVar23 + 0x30);
                            bVar4 = *(byte *)(lVar23 + 4);
                          } while (bVar4 == 0x13);
                        }
                        else {
                          iVar6 = 1;
                          bVar4 = bVar3;
                        }
                        if ((*(byte *)(lVar23 + 0xe) < 2) || (2 < bVar4 - 2)) {
                          uVar20 = 1;
                        }
                        else {
                          while (bVar3 == 0x13) {
                            lVar16 = *(long *)(lVar16 + 0x30);
                            bVar3 = *(byte *)(lVar16 + 4);
                          }
                          uVar20 = (uint)*(byte *)(lVar16 + 0xe);
                        }
                        uStack_d8 = (ulong)(uVar20 * iVar6);
                        _calloc(uStack_d8,8);
                        lVar16 = lVar19;
                        (**(code **)(param_4 + 8))(lVar19);
                        func_0x000109f650c0(param_4,lVar16,lVar19,uStack_d8);
                      }
                      else {
                        uStack_d8 = *(ulong *)(lVar23 + 0x10);
                      }
                      lVar16 = *(long *)plVar29[0x13];
                      if (*(int *)(lVar16 + 0x18) != 1) {
                        lVar16 = 0;
                      }
                      FUN_109ef9548(auStack_a0,lVar16,0);
                      lVar16 = lStack_68;
                      lVar23 = lVar19;
                      func_0x000109f0f5ac(lVar19,(long)*(char *)((long)puVar14 + 0x61));
                      if ((int)lVar23 == 0) {
                        uStack_e8 = 0;
                        plVar15 = (long *)(lVar16 + 8);
                      }
                      else {
                        uStack_e8 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x70);
                        plVar15 = (long *)(lVar16 + 0x10);
                      }
                      lVar16 = *plVar15;
                      if (lVar16 == 0) {
                        iVar6 = 0;
                        uVar24 = 0;
                        iStack_ac = 0;
                      }
                      else {
                        iVar6 = 0;
                        uVar20 = 0;
                        iStack_ac = 0;
                        do {
                          if (*(int *)(lVar16 + 0x28) == 1) {
                            uVar18 = (uint)*(undefined8 *)(**(long **)(lVar16 + 0x70) + 0x48);
                            uVar21 = (uint)*(byte *)(**(long **)(lVar16 + 0x70) + 0x45);
                            uVar21 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
                            uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
                            uVar22 = (uint)LZCOUNT((uVar21 >> 4 | (uVar21 & 0xf0f0f0f) << 4) << 0x18
                                                  );
                            uVar21 = uVar18 & 0xff;
                            if (uVar22 != 3) {
                              uVar21 = uVar18 & 0xffff;
                            }
                            uVar1 = uVar18 & 1;
                            if (uVar22 != 0) {
                              uVar1 = uVar21;
                            }
                            if (uVar22 < 5) {
                              uVar18 = uVar1;
                            }
                            lVar16 = *(long *)(lVar16 + 0x30);
                            lVar23 = lVar16;
                            FUN_109ec9e40(lVar16,0,1);
                            lVar8 = lVar16;
                            func_0x000109ec8650();
                            bVar3 = *(byte *)(lVar16 + 4);
                            lVar25 = lVar16;
                            if (bVar3 == 0x13) {
                              lVar9 = lVar16;
                              FUN_109ec88a0();
                              iVar7 = (int)lVar9;
                              do {
                                lVar25 = *(long *)(lVar25 + 0x30);
                                bVar4 = *(byte *)(lVar25 + 4);
                              } while (bVar4 == 0x13);
                            }
                            else {
                              iVar7 = 1;
                              bVar4 = bVar3;
                            }
                            if ((*(byte *)(lVar25 + 0xe) < 2) || (2 < bVar4 - 2)) {
                              uVar21 = 1;
                            }
                            else {
                              while (bVar3 == 0x13) {
                                lVar16 = *(long *)(lVar16 + 0x30);
                                bVar3 = *(byte *)(lVar16 + 4);
                              }
                              uVar21 = (uint)*(byte *)(lVar16 + 0xe);
                            }
                            iStack_ac = iStack_ac + (int)lVar23 * uVar18;
                            iVar6 = iVar6 + uVar18 * (int)lVar8 * 4;
                            uVar20 = uVar20 + iVar7 * uVar18 * uVar21;
                          }
                          else if (*(int *)(lVar16 + 0x28) == 4) break;
                          plVar15 = plVar15 + 1;
                          lVar16 = *plVar15;
                        } while (lVar16 != 0);
                        uVar24 = (ulong)uVar20;
                      }
                      FUN_109ef9640(auStack_a0);
                      lVar16 = *(long *)(uStack_d8 + uVar24 * 8);
                      if (lVar16 == 0) {
                        lVar16 = lVar19;
                        FUN_109ecf6d0(lVar19,puVar14);
                        *(int *)(lVar16 + 0x3c) = *(int *)(lVar19 + 0x3c) + iStack_ac;
                        if ((*(byte *)(lVar19 + 0x2c) >> 6 & 1) != 0) {
                          *(int *)(lVar16 + 0x48) = *(int *)(lVar19 + 0x48) + iVar6;
                        }
                        for (lVar23 = *(long *)(lVar16 + 0x10); *(byte *)(lVar23 + 4) == 0x13;
                            lVar23 = *(long *)(lVar23 + 0x30)) {
                        }
                        if ((1 < *(byte *)(lVar23 + 0xe)) && (*(byte *)(lVar23 + 4) - 2 < 3)) {
                          func_0x000109ec8580();
                        }
                        lVar8 = lVar19;
                        func_0x000109f0f5ac(lVar19,(long)*(char *)((long)puVar14 + 0x61));
                        if ((int)lVar8 != 0) {
                          lVar25 = *(long *)(lVar16 + 0x10);
                          lVar8 = lVar25;
                          FUN_109eca23c(lVar25);
                          FUN_109ec69f4(lVar23,lVar8,*(undefined4 *)(lVar25 + 0x28));
                        }
                        *(long *)(lVar16 + 0x10) = lVar23;
                        *(long *)(uStack_d8 + uVar24 * 8) = lVar16;
                        FUN_109eca704(puVar14,lVar16);
                      }
                      puVar10 = (undefined8 *)*puVar14;
                      FUN_109f6600c(puVar10,0xa0,8);
                      if (puVar10 != (undefined8 *)0x0) {
                        puVar10[0x11] = 0;
                        puVar10[0x10] = 0;
                        puVar10[0x13] = 0;
                        puVar10[0x12] = 0;
                        puVar10[0xd] = 0;
                        puVar10[0xc] = 0;
                        puVar10[0xf] = 0;
                        puVar10[0xe] = 0;
                        puVar10[9] = 0;
                        puVar10[8] = 0;
                        puVar10[0xb] = 0;
                        puVar10[10] = 0;
                        puVar10[5] = 0;
                        puVar10[4] = 0;
                        puVar10[7] = 0;
                        puVar10[6] = 0;
                        puVar10[1] = 0;
                        *puVar10 = 0;
                        puVar10[3] = 0;
                        puVar10[2] = 0;
                      }
                      *(undefined4 *)(puVar10 + 3) = 1;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      *puVar10 = 0;
                      *(undefined4 *)(puVar10 + 5) = 0;
                      *(uint *)((long)puVar10 + 0x2c) = *(uint *)(lVar16 + 0x20) & 0x1fffff;
                      puVar10[6] = *(undefined8 *)(lVar16 + 0x10);
                      puVar10[7] = lVar16;
                      if (*(char *)((long)puVar14 + 0x61) == '\x0e') {
                        uVar13 = *(undefined4 *)(puVar14 + 0x2c);
                      }
                      else {
                        uVar13 = 0x20;
                      }
                      FUN_109ecb048(puVar10,puVar10 + 0x10,1,uVar13);
                      FUN_109ecb4f0(2,plVar29,puVar10);
                      func_0x000109f0f5ac(lVar19,(long)*(char *)((long)puVar14 + 0x61));
                      puVar11 = puVar10;
                      if ((int)lVar19 != 0) {
                        puVar11 = puVar14;
                        func_0x000109ecaf70(puVar14,1);
                        *(undefined4 *)((long)puVar11 + 0x2c) =
                             *(undefined4 *)((long)puVar10 + 0x2c);
                        uVar12 = puVar10[6];
                        func_0x000109eca118();
                        puVar11[6] = uVar12;
                        puVar11[7] = 0;
                        puVar11[8] = 0;
                        puVar11[9] = 0;
                        puVar11[10] = puVar10 + 0x10;
                        puVar11[0xb] = 0;
                        puVar11[0xc] = 0;
                        puVar11[0xd] = 0;
                        puVar11[0xe] = uStack_e8;
                        FUN_109ecb048(puVar11,puVar11 + 0x10,*(undefined1 *)((long)puVar10 + 0x9c),
                                      *(undefined1 *)((long)puVar10 + 0x9d));
                        FUN_109ecb4f0(3,puVar10,puVar11);
                      }
                      puVar10 = puVar14;
                      FUN_109ecb0a8(puVar14,(int)plVar29[5]);
                      *(char *)(puVar10 + 10) = (char)plVar29[10];
                      puVar10[0x10] = 0;
                      puVar10[0x11] = 0;
                      puVar10[0x12] = 0;
                      puVar10[0x13] = puVar11 + 0x10;
                      if ((int)plVar29[5] == 0x26f) {
                        *(undefined4 *)
                         ((long)puVar10 +
                         (ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(puVar10 + 5) * 0x68] * 4 +
                         0x50) = *(undefined4 *)((long)plVar29 + 0x54);
                        lVar19 = plVar29[0x17];
                        puVar10[0x14] = 0;
                        puVar10[0x15] = 0;
                        puVar10[0x16] = 0;
                        puVar10[0x17] = lVar19;
                      }
                      else {
                        FUN_109ecb048(puVar10,puVar10 + 6,(char)plVar29[10],
                                      *(undefined1 *)((long)plVar29 + 0x4d));
                        if ((int)plVar29[5] - 0xbcU < 3) {
                          lVar19 = plVar29[0x17];
                          puVar10[0x14] = 0;
                          puVar10[0x15] = 0;
                          puVar10[0x16] = 0;
                          puVar10[0x17] = lVar19;
                        }
                        if ((long *)plVar29[8] + -1 != plVar29 + 6) {
                          plVar15 = puVar10 + 7;
                          plVar17 = (long *)plVar29[8];
                          do {
                            lVar19 = *plVar17;
                            plVar2 = (long *)plVar17[1];
                            *(long **)(lVar19 + 8) = plVar2;
                            *plVar2 = lVar19;
                            plVar17[1] = (long)plVar15;
                            plVar17[2] = (long)(puVar10 + 6);
                            *plVar17 = 0;
                            lVar19 = *plVar15;
                            *plVar17 = lVar19;
                            *(long **)(lVar19 + 8) = plVar17;
                            *plVar15 = (long)plVar17;
                            plVar17 = plVar2;
                          } while (plVar2 + -1 != plVar29 + 6);
                        }
                      }
                      FUN_109ecb4f0(3,puVar11,puVar10);
                      param_5 = param_5 & 0xffffffff;
                    }
                    else if ((int)plVar29[5] != 0x26f) {
                      puVar10 = puVar14;
                      FUN_109ecafe4(puVar14,*(undefined1 *)((long)plVar29 + 0x4c),
                                    *(undefined1 *)((long)plVar29 + 0x4d));
                      FUN_109ecb4f0(2,plVar29,puVar10);
                      if ((long *)plVar29[8] + -1 != plVar29 + 6) {
                        plVar15 = puVar10 + 6;
                        plVar17 = (long *)plVar29[8];
                        do {
                          lVar19 = *plVar17;
                          plVar2 = (long *)plVar17[1];
                          *(long **)(lVar19 + 8) = plVar2;
                          *plVar2 = lVar19;
                          plVar17[1] = (long)plVar15;
                          plVar17[2] = (long)(puVar10 + 5);
                          *plVar17 = 0;
                          lVar19 = *plVar15;
                          *plVar17 = lVar19;
                          *(long **)(lVar19 + 8) = plVar17;
                          *plVar15 = (long)plVar17;
                          plVar17 = plVar2;
                        } while (plVar2 + -1 != plVar29 + 6);
                      }
                    }
                    FUN_109ecb9c0(plVar29);
                  }
                }
              }
LAB_109f16384:
              if (plVar26 == (long *)0x0) goto LAB_109f16aa8;
              plVar15 = (long *)*plVar26;
              plVar17 = (long *)0x0;
              plVar29 = plVar26;
            } while (plVar15 == (long *)0x0);
          } while( true );
        }
LAB_109f16aa8:
        FUN_109ecc434();
      } while (lVar27 != 0);
      plVar15 = (long *)*plVar28;
    }
    plVar26 = (long *)*plVar15;
    plVar28 = plVar15;
    while( true ) {
      plVar15 = plVar26;
      if (plVar15 == (long *)0x0) {
        return;
      }
      lVar19 = plVar28[6];
      if (lVar19 != 0) break;
      plVar26 = (long *)*plVar15;
      plVar28 = plVar15;
    }
  } while( true );
}



/* Entry: 109f16ae8; end: 109f16d9b;  */

ulong FUN_109f16ae8(ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_120 [56];
  long lStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  plVar6 = (long *)0x0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_109f16d9c(param_1,&uStack_80,8);
  FUN_109f16d9c(param_2,&uStack_80,4);
  FUN_109f16228(param_1,8,&uStack_80,plVar6,0);
  lVar7 = 4;
  FUN_109f16228(param_2,4,&uStack_80,plVar5,0);
  if (*(uint *)(plVar5 + 4) != 0) {
    lVar10 = (ulong)*(uint *)(plVar5 + 4) * 0x18;
    lVar16 = *plVar5;
    do {
      lVar17 = lVar16 + 0x18;
      plVar13 = *(long **)(lVar16 + 8);
      if ((plVar13 != (long *)0x0) && (plVar13 != (long *)plVar5[3])) {
        lVar10 = *plVar13;
        plVar11 = (long *)plVar13[1];
        *(long **)(lVar10 + 8) = plVar11;
        *plVar11 = lVar10;
        *plVar13 = 0;
        plVar13[1] = 0;
        _free(*(undefined8 *)(lVar16 + 0x10));
        lVar10 = *plVar5 + (ulong)*(uint *)(plVar5 + 4) * 0x18;
        if (lVar17 != lVar10) {
          do {
            lVar16 = lVar17 + 0x18;
            plVar13 = *(long **)(lVar17 + 8);
            if ((plVar13 != (long *)0x0) && (plVar13 != (long *)plVar5[3])) {
              lVar10 = *plVar13;
              plVar11 = (long *)plVar13[1];
              *(long **)(lVar10 + 8) = plVar11;
              *plVar11 = lVar10;
              *plVar13 = 0;
              plVar13[1] = 0;
              _free(*(undefined8 *)(lVar17 + 0x10));
              lVar10 = *plVar5 + (ulong)*(uint *)(plVar5 + 4) * 0x18;
            }
            lVar17 = lVar16;
          } while (lVar16 != lVar10);
        }
        break;
      }
      lVar10 = lVar10 + -0x18;
      lVar16 = lVar17;
    } while (lVar10 != 0);
  }
  iVar8 = (int)puVar9;
  if (*(uint *)(plVar6 + 4) != 0) {
    lVar10 = (ulong)*(uint *)(plVar6 + 4) * 0x18;
    lVar16 = *plVar6;
    do {
      lVar17 = lVar16 + 0x18;
      plVar13 = *(long **)(lVar16 + 8);
      if ((plVar13 != (long *)0x0) && (plVar13 != (long *)plVar6[3])) {
        lVar10 = *plVar13;
        plVar11 = (long *)plVar13[1];
        *(long **)(lVar10 + 8) = plVar11;
        *plVar11 = lVar10;
        *plVar13 = 0;
        plVar13[1] = 0;
        _free(*(undefined8 *)(lVar16 + 0x10));
        iVar8 = (int)puVar9;
        lVar10 = *plVar6 + (ulong)*(uint *)(plVar6 + 4) * 0x18;
        if (lVar17 != lVar10) {
          do {
            iVar8 = (int)puVar9;
            lVar16 = lVar17;
            while( true ) {
              lVar17 = lVar16 + 0x18;
              plVar13 = *(long **)(lVar16 + 8);
              if ((plVar13 != (long *)0x0) && (plVar13 != (long *)plVar6[3])) break;
              lVar16 = lVar17;
              if (lVar17 == lVar10) goto LAB_109f16c1c;
            }
            lVar10 = *plVar13;
            plVar11 = (long *)plVar13[1];
            *(long **)(lVar10 + 8) = plVar11;
            *plVar11 = lVar10;
            *plVar13 = 0;
            plVar13[1] = 0;
            _free(*(undefined8 *)(lVar16 + 0x10));
            iVar8 = (int)puVar9;
            lVar10 = *plVar6 + (ulong)*(uint *)(plVar6 + 4) * 0x18;
          } while (lVar17 != lVar10);
        }
        break;
      }
      lVar10 = lVar10 + -0x18;
      lVar16 = lVar17;
    } while (lVar10 != 0);
  }
LAB_109f16c1c:
  FUN_109f65aa4(plVar5 + -6);
  FUN_109f65ae0(plVar5 + -6);
  FUN_109f65aa4(plVar6 + -6);
  FUN_109f65ae0(plVar6 + -6);
  FUN_109ef9fec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    plVar5 = *(long **)(param_1 + 0x178);
    plVar6 = (long *)**(long **)(param_1 + 0x178);
    while( true ) {
      if (plVar6 == (long *)0x0) {
        return param_1;
      }
      lVar10 = plVar5[6];
      if (lVar10 != 0) break;
      plVar5 = plVar6;
      plVar6 = (long *)*plVar6;
    }
    do {
      lVar16 = *(long *)(lVar10 + 0x30);
      if (lVar16 != 0) {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x20) + 0x18);
        do {
          plVar13 = *(long **)(lVar16 + 0x20);
          plVar6 = (long *)*plVar13;
          if (plVar6 != (long *)0x0) {
            do {
              plVar11 = plVar13;
              plVar3 = (long *)0x0;
              if (*plVar6 != 0) {
                plVar3 = plVar6;
              }
              do {
                plVar13 = plVar3;
                if (((int)plVar11[3] == 4) &&
                   (((iVar1 = (int)plVar11[5], iVar1 - 0xbbU < 4 || (iVar1 == 0x26f)) ||
                    (iVar1 == 0x112)))) {
                  lVar12 = *(long *)plVar11[0x13];
                  lVar17 = lVar12;
                  if (*(int *)(lVar12 + 0x18) != 1) {
                    lVar17 = 0;
                  }
                  if (*(int *)(lVar12 + 0x2c) == iVar8) {
                    while (*(int *)(lVar12 + 0x28) != 0) {
                      if (*(int *)(lVar12 + 0x28) == 5) {
                        lVar12 = 0;
                        goto LAB_109f16ec4;
                      }
                      lVar12 = **(long **)(lVar12 + 0x50);
                      if (*(int *)(lVar12 + 0x18) != 1) {
                        lVar12 = 0;
                      }
                    }
                    lVar12 = *(long *)(lVar12 + 0x38);
LAB_109f16ec4:
                    FUN_109ef9548(auStack_120,lVar17,0);
                    lVar2 = lStack_e8;
                    uVar14 = *(uint *)(lVar12 + 0x3c);
                    uVar15 = *(undefined8 *)(lVar12 + 0x20);
                    func_0x000109f0f5ac(lVar12,(long)*(char *)(lVar10 + 0x61));
                    lVar17 = 0x10;
                    if ((int)lVar12 == 0) {
                      lVar17 = 8;
                    }
                    lVar12 = *(long *)(lVar2 + lVar17);
                    if (lVar12 != 0) {
                      plVar6 = (long *)(lVar2 + lVar17);
                      do {
                        plVar6 = plVar6 + 1;
                        if ((*(int *)(lVar12 + 0x28) == 1) &&
                           (*(int *)(**(long **)(lVar12 + 0x70) + 0x18) != 5)) {
                          uVar4 = (ulong)(long)(int)uVar14 >> 1 & 0x1ffffffffffffffc;
                          *(uint *)(lVar7 + uVar4) =
                               *(uint *)(lVar7 + uVar4) |
                               1 << (ulong)((uint)((ulong)uVar15 >> 0x24) & 3 | (uVar14 & 7) << 2);
                          break;
                        }
                        lVar12 = *plVar6;
                      } while (lVar12 != 0);
                    }
                    FUN_109ef9640(auStack_120);
                  }
                }
                if (plVar13 == (long *)0x0) goto LAB_109f16f78;
                plVar6 = (long *)*plVar13;
                plVar11 = plVar13;
                plVar3 = (long *)0x0;
              } while (plVar6 == (long *)0x0);
            } while( true );
          }
LAB_109f16f78:
          FUN_109ecc434();
        } while (lVar16 != 0);
        plVar6 = (long *)*plVar5;
        param_1 = 0;
      }
      plVar13 = (long *)*plVar6;
      plVar5 = plVar6;
      while( true ) {
        plVar6 = plVar13;
        if (plVar6 == (long *)0x0) {
          return param_1;
        }
        lVar10 = plVar5[6];
        if (lVar10 != 0) break;
        plVar13 = (long *)*plVar6;
        plVar5 = plVar6;
      }
    } while( true );
  }
  plVar5 = *(long **)(param_2 + 0x178);
  plVar6 = (long *)**(long **)(param_2 + 0x178);
  do {
    if (plVar6 == (long *)0x0) {
      uVar14 = 0;
LAB_109efa020:
      return (ulong)(uVar14 & 1);
    }
    uVar4 = plVar5[6];
    if (uVar4 != 0) {
      FUN_109ef9f3c();
      do {
        uVar14 = (uint)uVar4;
        plVar5 = (long *)*plVar5;
        plVar6 = (long *)*plVar5;
        while( true ) {
          if (plVar6 == (long *)0x0) goto LAB_109efa020;
          lVar7 = plVar5[6];
          if (lVar7 != 0) break;
          plVar5 = plVar6;
          plVar6 = (long *)*plVar6;
        }
        FUN_109ef9f3c();
        uVar4 = (ulong)((uint)lVar7 | uVar14);
      } while( true );
    }
    plVar5 = plVar6;
    plVar6 = (long *)*plVar6;
  } while( true );
}



/* Entry: 109f16d9c; end: 109f17a83;  */

void FUN_109f16d9c(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_a0 [56];
  long lStack_68;
  
  plVar13 = *(long **)(param_1 + 0x178);
  plVar9 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar8 = plVar13[6];
    if (lVar8 != 0) break;
    plVar13 = plVar9;
    plVar9 = (long *)*plVar9;
  }
  do {
    lVar12 = *(long *)(lVar8 + 0x30);
    if (lVar12 != 0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + 0x18);
      do {
        plVar14 = *(long **)(lVar12 + 0x20);
        plVar9 = (long *)*plVar14;
        if (plVar9 != (long *)0x0) {
          do {
            plVar6 = plVar14;
            plVar5 = (long *)0x0;
            if (*plVar9 != 0) {
              plVar5 = plVar9;
            }
            do {
              plVar14 = plVar5;
              if (((int)plVar6[3] == 4) &&
                 (((iVar2 = (int)plVar6[5], iVar2 - 0xbbU < 4 || (iVar2 == 0x26f)) ||
                  (iVar2 == 0x112)))) {
                lVar7 = *(long *)plVar6[0x13];
                lVar1 = lVar7;
                if (*(int *)(lVar7 + 0x18) != 1) {
                  lVar1 = 0;
                }
                if (*(int *)(lVar7 + 0x2c) == param_3) {
                  while (*(int *)(lVar7 + 0x28) != 0) {
                    if (*(int *)(lVar7 + 0x28) == 5) {
                      lVar7 = 0;
                      goto LAB_109f16ec4;
                    }
                    lVar7 = **(long **)(lVar7 + 0x50);
                    if (*(int *)(lVar7 + 0x18) != 1) {
                      lVar7 = 0;
                    }
                  }
                  lVar7 = *(long *)(lVar7 + 0x38);
LAB_109f16ec4:
                  FUN_109ef9548(auStack_a0,lVar1,0);
                  lVar4 = lStack_68;
                  uVar3 = *(uint *)(lVar7 + 0x3c);
                  uVar11 = *(undefined8 *)(lVar7 + 0x20);
                  func_0x000109f0f5ac(lVar7,(long)*(char *)(lVar8 + 0x61));
                  lVar1 = 0x10;
                  if ((int)lVar7 == 0) {
                    lVar1 = 8;
                  }
                  lVar7 = *(long *)(lVar4 + lVar1);
                  if (lVar7 != 0) {
                    plVar9 = (long *)(lVar4 + lVar1);
                    do {
                      plVar9 = plVar9 + 1;
                      if ((*(int *)(lVar7 + 0x28) == 1) &&
                         (*(int *)(**(long **)(lVar7 + 0x70) + 0x18) != 5)) {
                        uVar10 = (ulong)(long)(int)uVar3 >> 1 & 0x1ffffffffffffffc;
                        *(uint *)(param_2 + uVar10) =
                             *(uint *)(param_2 + uVar10) |
                             1 << (ulong)((uint)((ulong)uVar11 >> 0x24) & 3 | (uVar3 & 7) << 2);
                        break;
                      }
                      lVar7 = *plVar9;
                    } while (lVar7 != 0);
                  }
                  FUN_109ef9640(auStack_a0);
                }
              }
              if (plVar14 == (long *)0x0) goto LAB_109f16f78;
              plVar9 = (long *)*plVar14;
              plVar6 = plVar14;
              plVar5 = (long *)0x0;
            } while (plVar9 == (long *)0x0);
          } while( true );
        }
LAB_109f16f78:
        FUN_109ecc434();
      } while (lVar12 != 0);
      plVar9 = (long *)*plVar13;
    }
    plVar14 = (long *)*plVar9;
    plVar13 = plVar9;
    while( true ) {
      plVar9 = plVar14;
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar8 = plVar13[6];
      if (lVar8 != 0) break;
      plVar14 = (long *)*plVar9;
      plVar13 = plVar9;
    }
  } while( true );
}



/* Entry: 109f17a84; end: 109f17ceb;  */

undefined8 FUN_109f17a84(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_48;
  long *plStack_40;
  undefined4 uStack_38;
  
  plVar1 = (long *)0x0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  plVar2 = (long *)0x0;
  plStack_48 = plVar1;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  uVar3 = param_1;
  plStack_40 = plVar2;
  uStack_38 = param_2;
  func_0x000109f16fb8(param_1,FUN_109f17cec,&plStack_48);
  if (*(uint *)(plStack_48 + 4) != 0) {
    lVar4 = (ulong)*(uint *)(plStack_48 + 4) * 0x18;
    lVar6 = *plStack_48;
    do {
      lVar5 = lVar6 + 0x18;
      plVar1 = *(long **)(lVar6 + 8);
      if ((plVar1 != (long *)0x0) && (plVar1 != (long *)plStack_48[3])) {
        lVar4 = *plVar1;
        plVar2 = (long *)plVar1[1];
        *(long **)(lVar4 + 8) = plVar2;
        *plVar2 = lVar4;
        *plVar1 = 0;
        plVar1[1] = 0;
        _free(*(undefined8 *)(lVar6 + 0x10));
        lVar4 = *plStack_48 + (ulong)*(uint *)(plStack_48 + 4) * 0x18;
        if (lVar5 != lVar4) {
          do {
            lVar6 = lVar5 + 0x18;
            plVar1 = *(long **)(lVar5 + 8);
            if ((plVar1 != (long *)0x0) && (plVar1 != (long *)plStack_48[3])) {
              lVar4 = *plVar1;
              plVar2 = (long *)plVar1[1];
              *(long **)(lVar4 + 8) = plVar2;
              *plVar2 = lVar4;
              *plVar1 = 0;
              plVar1[1] = 0;
              _free(*(undefined8 *)(lVar5 + 0x10));
              lVar4 = *plStack_48 + (ulong)*(uint *)(plStack_48 + 4) * 0x18;
            }
            lVar5 = lVar6;
          } while (lVar6 != lVar4);
        }
        break;
      }
      lVar4 = lVar4 + -0x18;
      lVar6 = lVar5;
    } while (lVar4 != 0);
  }
  if (*(uint *)(plStack_40 + 4) != 0) {
    lVar4 = (ulong)*(uint *)(plStack_40 + 4) * 0x18;
    lVar6 = *plStack_40;
    do {
      lVar5 = lVar6 + 0x18;
      plVar1 = *(long **)(lVar6 + 8);
      if ((plVar1 != (long *)0x0) && (plVar1 != (long *)plStack_40[3])) {
        lVar4 = *plVar1;
        plVar2 = (long *)plVar1[1];
        *(long **)(lVar4 + 8) = plVar2;
        *plVar2 = lVar4;
        *plVar1 = 0;
        plVar1[1] = 0;
        _free(*(undefined8 *)(lVar6 + 0x10));
        lVar4 = *plStack_40 + (ulong)*(uint *)(plStack_40 + 4) * 0x18;
        if (lVar5 != lVar4) {
          do {
            lVar6 = lVar5 + 0x18;
            plVar1 = *(long **)(lVar5 + 8);
            if ((plVar1 != (long *)0x0) && (plVar1 != (long *)plStack_40[3])) {
              lVar4 = *plVar1;
              plVar2 = (long *)plVar1[1];
              *(long **)(lVar4 + 8) = plVar2;
              *plVar2 = lVar4;
              *plVar1 = 0;
              plVar1[1] = 0;
              _free(*(undefined8 *)(lVar5 + 0x10));
              lVar4 = *plStack_40 + (ulong)*(uint *)(plStack_40 + 4) * 0x18;
            }
            lVar5 = lVar6;
          } while (lVar6 != lVar4);
        }
        break;
      }
      lVar4 = lVar4 + -0x18;
      lVar6 = lVar5;
    } while (lVar4 != 0);
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + -6;
    FUN_109f65aa4(plVar1);
    FUN_109f65ae0(plVar1);
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + -6;
    FUN_109f65aa4(plVar1);
    FUN_109f65ae0(plVar1);
  }
  FUN_109ef9fec(param_1);
  return uVar3;
}



/* Entry: 109f17cec; end: 109f17edf;  */

undefined8 FUN_109f17cec(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  if ((*(int *)(param_2 + 0x18) != 4) || (*(char *)(param_2 + 0x50) == '\x01')) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (((3 < iVar1 - 0xbbU) && (iVar1 != 0x26f)) && (iVar1 != 0x112)) {
    return 0;
  }
  lVar6 = **(long **)(param_2 + 0x98);
  uVar2 = *(uint *)(param_3 + 2);
  if ((*(uint *)(lVar6 + 0x2c) & uVar2) == 0) {
    return 0;
  }
  do {
    if (*(int *)(lVar6 + 0x28) == 0) {
      lVar6 = *(long *)(lVar6 + 0x38);
LAB_109f17d84:
      uVar11 = *(ulong *)(lVar6 + 0x20);
      if (((uint)uVar11 >> 0x18 & 1) != 0) {
        return 0;
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      bVar3 = *(byte *)(lVar9 + 4);
      uVar10 = (uint)bVar3;
      lVar8 = lVar9;
      uVar7 = uVar10;
      bVar4 = bVar3;
      while (bVar4 == 0x13) {
        lVar8 = *(long *)(lVar8 + 0x30);
        bVar4 = *(byte *)(lVar8 + 4);
        uVar7 = (uint)bVar4;
      }
      if ((uVar7 - 4 < 0xc) && ((0xe61U >> (ulong)(uVar7 - 4 & 0x1f) & 1) != 0)) {
        return 0;
      }
      uVar7 = (uint)uVar11 & 0x1fffff;
      if ((uVar7 == 4) && (*(char *)(*(long *)(param_1 + 0x18) + 0x61) == '\0')) {
        if ((uVar11 >> 0x20 & 1) != 0) {
          return 0;
        }
      }
      else {
        if ((uVar11 >> 0x20 & 1) != 0) {
          return 0;
        }
        if (*(uint *)(lVar6 + 0x3c) < 0x20) {
          return 0;
        }
      }
      lVar8 = lVar9;
      uVar5 = uVar10;
      if ((*(byte *)(lVar6 + 0x2d) >> 3 & 1) != 0) {
        return 0;
      }
      while (bVar3 == 0x13) {
        bVar3 = *(byte *)(*(long *)(lVar8 + 0x30) + 4);
        lVar8 = *(long *)(lVar8 + 0x30);
        uVar5 = (uint)bVar3;
      }
      if ((1 < *(byte *)(lVar8 + 0xe)) && (uVar5 - 2 < 3)) {
        return 0;
      }
      while (uVar10 == 0x13) {
        lVar9 = *(long *)(lVar9 + 0x30);
        uVar10 = (uint)*(byte *)(lVar9 + 4);
      }
      if (uVar10 - 0x11 < 2) {
        return 0;
      }
      if (3 < iVar1 - 0xbbU) {
        if (iVar1 == 0x26f) {
          if ((uVar2 >> 3 & 1) == 0) {
            return 0;
          }
          if (uVar7 == 8) {
            func_0x000109f18aec(param_1,param_2,lVar6,param_3[1]);
            return 1;
          }
          return 0;
        }
        if (iVar1 != 0x112) {
          return 0;
        }
      }
      if (((uVar2 >> 2 & 1) == 0) || (uVar7 != 4)) {
        if ((uVar2 >> 3 & 1) == 0) {
          return 0;
        }
        if (uVar7 != 8) {
          return 0;
        }
      }
      func_0x000109f18830(param_1,param_2,lVar6,*param_3,param_3[1]);
      return 1;
    }
    if (*(int *)(lVar6 + 0x28) == 5) {
      lVar6 = 0;
      goto LAB_109f17d84;
    }
    lVar6 = **(long **)(lVar6 + 0x50);
    if (*(int *)(lVar6 + 0x18) != 1) {
      lVar6 = 0;
    }
  } while( true );
}



/* Entry: 109f17ee0; end: 109f18db3;  */

void FUN_109f17ee0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  undefined8 uVar33;
  long lVar34;
  byte *pbVar35;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined **unaff_x22;
  uint uVar36;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  long alStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 2;
  param_1[1] = param_2;
  if (*(char *)(param_2 + 0x50) == '\0') {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    unaff_x26 = (undefined8 *)0x0;
    unaff_x25 = param_2 + 0x54;
    puStack_100 = (undefined8 *)(param_2 + 0x98);
    unaff_x28 = 0x68;
    unaff_x22 = &PTR_DAT_110b67188;
    lStack_128 = unaff_x25;
    do {
      lVar34 = param_2;
      FUN_109ecd800();
      uVar26 = *(uint *)(unaff_x25 +
                         (ulong)(byte)(&UNK_110b671b1)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] * 4
                        + -4);
      unaff_x23 = (ulong)uVar26;
      lVar14 = param_1[3];
      FUN_109ecb0a8();
      lStack_f8 = lVar14 + 0x30;
      FUN_109ecb048();
      *(undefined1 *)(lVar14 + 0x50) = 1;
      if (*(long *)(param_2 + 0x78) != 0) {
        *(long *)(lVar14 + 0x78) = *(long *)(param_2 + 0x78);
      }
      lVar15 = lVar14 + 0x54;
      lVar20 = (ulong)*(uint *)(lVar14 + 0x28) * 0x68;
      *(undefined4 *)(lVar15 + (ulong)(byte)(&UNK_110b671a9)[lVar20] * 4 + -4) =
           *(undefined4 *)
            (unaff_x25 + (ulong)(byte)(&UNK_110b671a9)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] * 4
            + -4);
      uVar26 = ((uint)unaff_x26 << (((uint)lVar34 & 0x79) == 0x40)) + uVar26;
      unaff_x24 = (ulong)uVar26;
      *(uint *)(lVar15 + (ulong)(byte)(&UNK_110b671b1)[lVar20] * 4 + -4) = uVar26 & 3;
      *(undefined4 *)(lVar15 + (ulong)(byte)(&UNK_110b671c1)[lVar20] * 4 + -4) =
           *(undefined4 *)
            (unaff_x25 + (ulong)(byte)(&UNK_110b671c1)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] * 4
            + -4);
      uVar27 = *(uint *)(unaff_x25 +
                         (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] * 4
                        + -4);
      *(uint *)(lVar15 + (ulong)(byte)(&UNK_110b671cf)[lVar20] * 4 + -4) =
           uVar27 & 0xff800000 |
           uVar27 & 0x7fff |
           ((uVar27 >> 0xf & 0xff) >> (ulong)(((uint)unaff_x26 & 0xf) << 1) & 3) << 0xf;
      if ((&UNK_110b67190)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] != '\0') {
        uVar24 = 0;
        puVar18 = (undefined8 *)(lVar14 + 0x98);
        puVar16 = puStack_100;
        do {
          uVar33 = *puVar16;
          puVar18[-3] = 0;
          puVar18[-2] = 0;
          puVar18[-1] = 0;
          *puVar18 = uVar33;
          uVar24 = uVar24 + 1;
          puVar18 = puVar18 + 4;
          puVar16 = puVar16 + 4;
        } while (uVar24 < (byte)(&UNK_110b67190)[(ulong)*(uint *)(param_2 + 0x28) * 0x68]);
      }
      if (3 < uVar26) {
        lVar15 = lVar14;
        FUN_109f140f4();
        lVar34 = lVar14 + (long)(int)(uint)lVar15 * 0x20;
        puVar18 = (undefined8 *)(lVar34 + 0x80);
        if (0x7fffffff < (uint)lVar15) {
          puVar18 = (undefined8 *)0x0;
        }
        puVar16 = (undefined8 *)puVar18[3];
        unaff_x24 = (ulong)*(byte *)((long)puVar16 + 0x1d);
        uVar27 = (uint)*(byte *)((long)puVar16 + 0x1d);
        uVar24 = 0x3fffffff;
        if (uVar27 != 0x40) {
          uVar24 = (ulong)~(uint)(-1L << (unaff_x24 & 0x3f));
        }
        uVar24 = uVar24 & uVar26 >> 2;
        if (uVar24 != 0) {
          uVar26 = (uVar27 & 0xaaaaaaaa) >> 1 | (uVar27 & 0x55555555) << 1;
          uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
          uVar28 = LZCOUNT((uVar26 >> 4 | (uVar26 & 0xf0f0f0f) << 4) << 0x18);
          uVar26 = (uint)uVar28;
          uVar4 = 0;
          if (uVar26 != 3) {
            uVar4 = uVar24;
          }
          uVar3 = uVar28;
          if (uVar26 != 0) {
            uVar28 = 0;
            uVar3 = uVar4;
          }
          uVar4 = 1;
          if (uVar26 != 0) {
            uVar4 = uVar24;
          }
          uStack_120 = uVar24;
          uStack_118 = uVar24;
          uVar24 = uVar24 & 0x3fff0000;
          if (uVar26 < 5) {
            uStack_120 = uVar4;
            uStack_118 = uVar3;
            uVar24 = uVar28;
          }
          puVar17 = *(undefined8 **)param_1[3];
          puStack_110 = puVar16;
          puStack_108 = puVar18;
          FUN_109f6600c(puVar17,0x50,8);
          if (puVar17 != (undefined8 *)0x0) {
            puVar17[7] = 0;
            puVar17[6] = 0;
            puVar17[9] = 0;
            puVar17[8] = 0;
            puVar17[3] = 0;
            puVar17[2] = 0;
            puVar17[5] = 0;
            puVar17[4] = 0;
            puVar17[1] = 0;
            *puVar17 = 0;
          }
          *(undefined4 *)(puVar17 + 3) = 5;
          puVar17[1] = 0;
          puVar17[2] = 0;
          unaff_x23 = uStack_118 & 0xff00 | uVar24 | uStack_120 & 0xff;
          *puVar17 = 0;
          FUN_109ecb048(puVar17,puVar17 + 5,1,unaff_x24);
          puVar17[9] = unaff_x23;
          FUN_109ecb4f0(*param_1,param_1[1],puVar17);
          *param_1 = 3;
          param_1[1] = puVar17;
          puVar16 = param_1;
          FUN_109ece1b0(param_1,0x11d,puStack_110,puVar17 + 5);
          puVar18 = puStack_108;
          unaff_x25 = lStack_128;
        }
        *(undefined8 *)(lVar34 + 0x80) = 0;
        *(undefined8 *)(lVar34 + 0x88) = 0;
        *(undefined8 *)(lVar34 + 0x90) = 0;
        puVar18[3] = puVar16;
      }
      unaff_x27 = 0x79;
      FUN_109ecb4f0(*param_1,param_1[1],lVar14);
      *param_1 = 3;
      param_1[1] = lVar14;
      alStack_f0[(long)unaff_x26] = lStack_f8;
      unaff_x26 = (undefined8 *)((long)unaff_x26 + 1);
      puVar18 = (undefined8 *)(ulong)*(byte *)(param_2 + 0x50);
    } while (unaff_x26 < puVar18);
  }
  plVar1 = (long *)(param_2 + 0x30);
  func_0x000109ecd728();
  puVar16 = param_1;
  FUN_109ece300(param_1,puVar18,alStack_f0);
  if (*(long **)(param_2 + 0x40) + -1 != plVar1) {
    plVar25 = *(long **)(param_2 + 0x40);
    do {
      lVar34 = *plVar25;
      plVar5 = (long *)plVar25[1];
      *(long **)(lVar34 + 8) = plVar5;
      *plVar5 = lVar34;
      plVar25[1] = (long)(puVar16 + 1);
      plVar25[2] = (long)puVar16;
      *plVar25 = 0;
      lVar34 = puVar16[1];
      *plVar25 = lVar34;
      *(long **)(lVar34 + 8) = plVar25;
      puVar16[1] = plVar25;
      plVar25 = plVar5;
    } while (plVar5 + -1 != plVar1);
  }
  puVar17 = (undefined8 *)*plVar1;
  puVar16 = puVar17;
  puVar11 = (undefined1 *)register0x00000008;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_138 = 0x109f18294;
    *puVar17 = 2;
    puVar17[1] = puVar18;
    puVar16 = puVar18;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = uStack_138;
    puVar11 = auStack_130;
    uStack_190 = unaff_x28;
    uStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    ppuStack_160 = unaff_x22;
    plStack_158 = plVar1;
    puStack_150 = param_1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    if (*(char *)(puVar18 + 10) != '\0') {
      uVar26 = 0;
      lVar34 = puVar18[0x13];
      do {
        if ((*(uint *)((long)puVar18 +
                      (ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(puVar18 + 5) * 0x68] * 4 + 0x50
                      ) >> (ulong)(uVar26 & 0x1f) & 1) == 0) goto LAB_109f187fc;
        puVar19 = puVar18;
        FUN_109ecd790(puVar18,0);
        uVar2 = (uint)puVar19 & 0x79;
        uVar24 = (ulong)*(uint *)(puVar18 + 5);
        lVar14 = uVar24 * 0x68;
        uVar27 = (uVar26 << (uVar2 == 0x40)) +
                 *(int *)((long)puVar18 + (ulong)(byte)(&UNK_110b671b1)[lVar14] * 4 + 0x50);
        uVar36 = uVar27 & 3;
        if ((&UNK_110b671d0)[lVar14] == 0) {
          bVar12 = false;
        }
        else {
          uVar30 = 0;
          do {
            bVar6 = (&UNK_110b671d0)[lVar14];
            if (1 < uVar30) {
              bVar6 = (&UNK_110b671d1)[uVar24 * 0x68];
            }
            uStack_194 = *(undefined4 *)((long)puVar18 + (ulong)bVar6 * 4 + 0x50);
            bVar12 = uVar36 < uVar30 + (*(byte *)((ulong)&uStack_194 | (ulong)(uVar30 & 1) << 1) &
                                       0xf);
            bVar13 = uVar36 != uVar30;
            uVar30 = uVar30 + 1;
          } while (!bVar12 && bVar13);
        }
        uVar30 = *(uint *)((long)puVar18 + (ulong)(byte)(&UNK_110b671cf)[lVar14] * 4 + 0x50);
        if (((uVar30 >> 0x1d & 1) == 0) &&
           ((((uVar30 & 0x7f) < 0x20 && ((1 << (ulong)(uVar30 & 0x1f) & 0xcddf9001U) != 0)) ||
            ((uVar30 & 0x7f) - 0x1a < 4)))) {
LAB_109f18410:
          lVar14 = puVar17[3];
          FUN_109ecb0a8(lVar14,uVar24);
          *(undefined1 *)(lVar14 + 0x50) = 1;
          if (puVar18[0xf] != 0) {
            *(undefined8 *)(lVar14 + 0x78) = puVar18[0xf];
          }
          uVar30 = *(uint *)(lVar14 + 0x28);
          lVar15 = lVar14 + 0x54;
          lVar20 = (ulong)uVar30 * 0x68;
          *(undefined4 *)(lVar15 + (ulong)(byte)(&UNK_110b671a9)[lVar20] * 4 + -4) =
               *(undefined4 *)
                ((long)puVar18 +
                (ulong)(byte)(&UNK_110b671a9)[(ulong)*(uint *)(puVar18 + 5) * 0x68] * 4 + 0x50);
          *(undefined4 *)(lVar15 + (ulong)(byte)(&UNK_110b671aa)[lVar20] * 4 + -4) = 1;
          *(uint *)(lVar15 + (ulong)(byte)(&UNK_110b671b1)[lVar20] * 4 + -4) = uVar36;
          *(undefined4 *)(lVar15 + (ulong)(byte)(&UNK_110b671c0)[lVar20] * 4 + -4) =
               *(undefined4 *)
                ((long)puVar18 +
                (ulong)(byte)(&UNK_110b671c0)[(ulong)*(uint *)(puVar18 + 5) * 0x68] * 4 + 0x50);
          uVar31 = *(uint *)((long)puVar18 +
                            (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(puVar18 + 5) * 0x68] * 4
                            + 0x50);
          *(uint *)(lVar15 + (ulong)(byte)(&UNK_110b671cf)[lVar20] * 4 + -4) =
               uVar31 & 0xff800000 |
               uVar31 & 0x7fff | ((uVar31 >> 0xf & 0xff) >> (ulong)((uVar26 & 0xf) << 1) & 3) << 0xf
          ;
          if ((&UNK_110b671d0)[(ulong)*(uint *)(puVar18 + 5) * 0x68] != 0) {
            uVar31 = 0;
            do {
              pbVar35 = &UNK_110b671d0 + (ulong)*(uint *)(puVar18 + 5) * 0x68;
              if (1 < uVar31) {
                pbVar35 = &UNK_110b671d1 + (ulong)*(uint *)(puVar18 + 5) * 0x68;
              }
              uStack_198 = *(undefined4 *)((long)puVar18 + (ulong)*pbVar35 * 4 + 0x50);
              bVar6 = *(byte *)((ulong)&uStack_198 | (ulong)(uVar31 & 1) << 1);
              if (uVar36 < uVar31 + (bVar6 & 0xf)) {
                uStack_19c = 0;
                bVar32 = 1;
                if (uVar2 == 0x40) {
                  bVar32 = 2;
                }
                pbVar35 = (byte *)((ulong)&uStack_19c | (ulong)(uVar27 & 1) << 1);
                *pbVar35 = bVar6 & 0xf0 | bVar32;
                pbVar35[1] = *(char *)(((ulong)&uStack_198 | 1) + (ulong)(uVar31 & 1) * 2) +
                             ((char)uVar36 - (char)uVar31);
                puVar10 = &UNK_110b671d0;
                if (1 < uVar36) {
                  puVar10 = &UNK_110b671d1;
                }
                *(undefined4 *)(lVar15 + (ulong)(byte)puVar10[(ulong)uVar30 * 0x68] * 4 + -4) = 0;
                break;
              }
              uVar31 = uVar31 + 1;
            } while (uVar36 + 1 != uVar31);
          }
          if (((uVar26 & 0xff) != 0) || (lVar15 = lVar34, *(char *)(lVar34 + 0x1c) != '\x01')) {
            lVar20 = puVar17[3];
            FUN_109ecaef8(lVar20,0x154);
            lVar15 = lVar20 + 0x30;
            FUN_109ecb048();
            uVar7 = *(ushort *)(lVar20 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar17 + 2);
            *(ushort *)(lVar20 + 0x2c) = uVar7;
            *(ushort *)(lVar20 + 0x2c) =
                 (*(ushort *)((long)puVar17 + 0x14) & 0x1ff) << 3 | uVar7 & 0xf007;
            *(undefined8 *)(lVar20 + 0x50) = 0;
            *(undefined8 *)(lVar20 + 0x58) = 0;
            *(undefined8 *)(lVar20 + 0x60) = 0;
            *(long *)(lVar20 + 0x68) = lVar34;
            *(char *)(lVar20 + 0x70) = (char)uVar26;
            *(undefined8 *)(lVar20 + 0x71) = 0;
            *(undefined8 *)(lVar20 + 0x78) = 0;
            FUN_109ecb4f0(*puVar17,puVar17[1],lVar20);
            *puVar17 = 3;
            puVar17[1] = lVar20;
          }
          *(undefined8 *)(lVar14 + 0x80) = 0;
          *(undefined8 *)(lVar14 + 0x88) = 0;
          *(undefined8 *)(lVar14 + 0x90) = 0;
          *(long *)(lVar14 + 0x98) = lVar15;
          if (1 < (byte)(&UNK_110b67190)[(ulong)*(uint *)(puVar18 + 5) * 0x68]) {
            puVar19 = (undefined8 *)(lVar14 + 0xb8);
            uVar24 = 1;
            puVar29 = puVar18 + 0x17;
            do {
              uVar33 = *puVar29;
              puVar19[-3] = 0;
              puVar19[-2] = 0;
              puVar19[-1] = 0;
              *puVar19 = uVar33;
              uVar24 = uVar24 + 1;
              puVar19 = puVar19 + 4;
              puVar29 = puVar29 + 4;
            } while (uVar24 < (byte)(&UNK_110b67190)[(ulong)*(uint *)(puVar18 + 5) * 0x68]);
          }
          if (3 < uVar27) {
            lVar15 = lVar14;
            FUN_109f140f4();
            puVar19 = (undefined8 *)(lVar14 + 0x80) + (long)(int)(uint)lVar15 * 4;
            puVar29 = puVar19;
            if (0x7fffffff < (uint)lVar15) {
              puVar29 = (undefined8 *)0x0;
            }
            puVar21 = (undefined8 *)puVar29[3];
            bVar6 = *(byte *)((long)puVar21 + 0x1d);
            uVar36 = (uint)bVar6;
            uVar24 = 0x3fffffff;
            if (uVar36 != 0x40) {
              uVar24 = (ulong)~(uint)(-1L << ((ulong)bVar6 & 0x3f));
            }
            uVar24 = uVar24 & uVar27 >> 2;
            puVar23 = puVar21;
            if (uVar24 != 0) {
              uVar27 = (uVar36 & 0xaaaaaaaa) >> 1 | (uVar36 & 0x55555555) << 1;
              uVar27 = (uVar27 & 0xcccccccc) >> 2 | (uVar27 & 0x33333333) << 2;
              uVar28 = LZCOUNT((uVar27 >> 4 | (uVar27 & 0xf0f0f0f) << 4) << 0x18);
              uVar27 = (uint)uVar28;
              uVar4 = 0;
              if (uVar27 != 3) {
                uVar4 = uVar24;
              }
              uVar3 = uVar28;
              if (uVar27 != 0) {
                uVar28 = 0;
                uVar3 = uVar4;
              }
              uVar4 = 1;
              if (uVar27 != 0) {
                uVar4 = uVar24;
              }
              uVar8 = uVar24;
              uVar9 = uVar24 & 0x3fff0000;
              if (uVar27 < 5) {
                uVar24 = uVar4;
                uVar8 = uVar3;
                uVar9 = uVar28;
              }
              puVar22 = *(undefined8 **)puVar17[3];
              FUN_109f6600c(puVar22,0x50,8);
              if (puVar22 != (undefined8 *)0x0) {
                puVar22[7] = 0;
                puVar22[6] = 0;
                puVar22[9] = 0;
                puVar22[8] = 0;
                puVar22[3] = 0;
                puVar22[2] = 0;
                puVar22[5] = 0;
                puVar22[4] = 0;
                puVar22[1] = 0;
                *puVar22 = 0;
              }
              *(undefined4 *)(puVar22 + 3) = 5;
              puVar22[1] = 0;
              puVar22[2] = 0;
              *puVar22 = 0;
              FUN_109ecb048(puVar22,puVar22 + 5,1,(ulong)bVar6);
              puVar22[9] = uVar8 & 0xff00 | uVar9 | uVar24 & 0xff;
              FUN_109ecb4f0(*puVar17,puVar17[1],puVar22);
              *puVar17 = 3;
              puVar17[1] = puVar22;
              puVar23 = puVar17;
              FUN_109ece1b0(puVar17,0x11d,puVar21,puVar22 + 5);
            }
            *puVar19 = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar29[3] = puVar23;
          }
          FUN_109ecb4f0(*puVar17,puVar17[1],lVar14);
          *puVar17 = 3;
          puVar17[1] = lVar14;
        }
        else if ((uVar30 >> 0x1c & 1) == 0) {
          uVar30 = uVar30 & 0x7f;
          func_0x000109ecdc48();
          if (bVar12 || (uVar30 & 1) != 0) goto LAB_109f18410;
        }
        else if (bVar12) goto LAB_109f18410;
LAB_109f187fc:
        uVar26 = uVar26 + 1;
        unaff_x19 = lStack_148;
        unaff_x20 = puStack_150;
        unaff_x29 = puStack_140;
        unaff_x30 = uStack_138;
        puVar11 = auStack_130;
      } while (uVar26 < *(byte *)(puVar18 + 10));
    }
  }
  uVar26 = *(uint *)(puVar16 + 3);
  *(undefined8 **)(puVar11 + -0x20) = unaff_x20;
  *(long *)(puVar11 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar11 + -8) = unaff_x30;
                    /* WARNING: Could not recover jumptable at 0x000109ecb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06c3ab)[uVar26] * 4 + 0x109ecb9e8))();
  return;
}



/* Entry: 109f18db4; end: 109f18ef3;  */

undefined8 FUN_109f18db4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  (**(code **)(param_1 + 8))(param_2);
  lVar2 = param_1;
  FUN_109f64fdc(param_1,uVar1,param_2);
  if (lVar2 == 0) {
    uVar3 = 4;
    _calloc(4,8);
    uVar1 = param_2;
    (**(code **)(param_1 + 8))(param_2);
    func_0x000109f650c0(param_1,uVar1,param_2,uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  return uVar3;
}



/* Entry: 109f18ef4; end: 109f196fb;  */

undefined8 FUN_109f18ef4(undefined8 **param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long *plStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long **pplStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long **pplStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_70;
  
  if (*(byte *)((long)param_1 + 0x61) < 8 &&
      (1 << (ulong)(*(byte *)((long)param_1 + 0x61) & 0x1f) & 0xc2U) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffff7;
    return 0;
  }
  lVar6 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  lStack_d8 = lVar6;
  plStack_138 = &lStack_128;
  uStack_130 = 0;
  lStack_128 = 0;
  pplStack_120 = &plStack_138;
  if (param_4 != 0) {
    FUN_109f196fc(param_1[1],4,&plStack_138);
  }
  uStack_150 = 0;
  lStack_148 = 0;
  pplStack_140 = &plStack_158;
  plStack_158 = &lStack_148;
  if (param_3 != 0) {
    FUN_109f196fc(param_1[1],8,&plStack_158);
  }
  puStack_f8 = &uStack_e8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_e0 = &puStack_f8;
  puStack_118 = &uStack_108;
  uStack_110 = 0;
  uStack_108 = 0;
  ppuStack_100 = &puStack_118;
  for (plVar17 = plStack_158; *plVar17 != 0; plVar17 = (long *)*plVar17) {
    ppuVar7 = param_1;
    FUN_109f19770(param_1,plVar17);
    *ppuVar7 = &uStack_108;
    ppuVar7[1] = ppuStack_100;
    *ppuStack_100 = ppuVar7;
    ppuStack_100 = ppuVar7;
  }
  lVar6 = *plStack_138;
  plVar17 = plStack_138;
  while (lVar6 != 0) {
    ppuVar7 = param_1;
    FUN_109f19770(param_1,plVar17);
    *ppuVar7 = &uStack_e8;
    ppuVar7[1] = ppuStack_e0;
    *ppuStack_e0 = ppuVar7;
    lVar6 = lStack_d8;
    plVar12 = plVar17;
    ppuStack_e0 = ppuVar7;
    (**(code **)(lStack_d8 + 8))(plVar17);
    func_0x000109f650c0(lVar6,plVar12,plVar17,ppuVar7);
    plVar17 = (long *)*plVar17;
    lVar6 = *plVar17;
  }
  plVar17 = param_1[0x2f];
  plVar12 = (long *)*param_1[0x2f];
  do {
    if (plVar12 == (long *)0x0) {
LAB_109f190c8:
      if (plStack_138 != &lStack_128) {
        puVar15 = param_1[4];
        *puVar15 = plStack_138;
        plStack_138[1] = (long)puVar15;
        param_1[4] = pplStack_120;
        *pplStack_120 = (long *)(param_1 + 3);
        uStack_130 = 0;
        lStack_128 = 0;
        plStack_138 = &lStack_128;
        pplStack_120 = &plStack_138;
      }
      if (plStack_158 != &lStack_148) {
        puVar15 = param_1[4];
        *puVar15 = plStack_158;
        plStack_158[1] = (long)puVar15;
        param_1[4] = pplStack_140;
        *pplStack_140 = (long *)(param_1 + 3);
        uStack_150 = 0;
        lStack_148 = 0;
        plStack_158 = &lStack_148;
        pplStack_140 = &plStack_158;
      }
      if (puStack_f8 != &uStack_e8) {
        puVar15 = param_1[4];
        *puVar15 = puStack_f8;
        puStack_f8[1] = puVar15;
        param_1[4] = ppuStack_e0;
        *ppuStack_e0 = param_1 + 3;
        uStack_f0 = 0;
        uStack_e8 = 0;
        puStack_f8 = &uStack_e8;
        ppuStack_e0 = &puStack_f8;
      }
      if (puStack_118 != &uStack_108) {
        puVar15 = param_1[4];
        *puVar15 = puStack_118;
        puStack_118[1] = puVar15;
        param_1[4] = ppuStack_100;
        *ppuStack_100 = param_1 + 3;
        uStack_110 = 0;
        uStack_108 = 0;
        puStack_118 = &uStack_108;
        ppuStack_100 = &puStack_118;
      }
      FUN_109efa06c(param_1,FUN_109efa1c4);
      if (lStack_d8 != 0) {
        lVar6 = lStack_d8 + -0x30;
        FUN_109f65aa4(lVar6);
        FUN_109f65ae0(lVar6);
      }
      return 1;
    }
    lVar6 = plVar17[6];
    if (lVar6 != 0) {
      do {
        if ((param_4 != 0) && (param_2 == lVar6)) {
          puStack_b0 = *(undefined8 **)(lVar6 + 0x30);
          if (*(int *)(puStack_b0 + 2) == 0) {
            uStack_d0 = 0;
            puStack_c8 = puStack_b0;
            goto LAB_109f19270;
          }
          puVar15 = (undefined8 *)puStack_b0[1];
          puStack_b0 = (undefined8 *)0x0;
          if (puVar15[1] != 0) {
            puStack_b0 = puVar15;
          }
          uStack_d0 = 1;
          iVar2 = *(int *)(puVar15 + 2);
          puStack_c8 = puStack_b0;
          while (iVar2 != 3) {
LAB_109f19270:
            puStack_b0 = (undefined8 *)puStack_b0[3];
            iVar2 = *(int *)(puStack_b0 + 2);
          }
          puStack_b8 = *(undefined8 **)(puStack_b0[4] + 0x18);
          uStack_c0 = 0;
          FUN_109f19830(&uStack_d0,plStack_138,puStack_f8);
          if (*(char *)((long)param_1 + 0x61) == '\x04') {
            lVar8 = *(long *)(lVar6 + 0x30);
            while (lVar8 != 0) {
              plVar16 = *(long **)(lVar8 + 0x20);
              plVar12 = (long *)*plVar16;
              if (plVar12 != (long *)0x0) {
                do {
                  plVar5 = (long *)0x0;
                  plVar14 = plVar16;
                  if (*plVar12 != 0) {
                    plVar5 = plVar12;
                  }
                  do {
                    plVar16 = plVar5;
                    if (((int)plVar14[3] == 4) && ((int)plVar14[5] - 0xbbU < 4)) {
                      lVar13 = *(long *)plVar14[0x13];
                      if (*(int *)(lVar13 + 0x18) != 1) {
                        lVar13 = 0;
                      }
                      FUN_109ef9548(&uStack_a8,lVar13,0);
                      lVar13 = lStack_d8;
                      lVar18 = *plStack_70;
                      uVar19 = *(undefined8 *)(lVar18 + 0x38);
                      uVar9 = uVar19;
                      (**(code **)(lStack_d8 + 8))(uVar19);
                      func_0x000109f64fdc(lVar13,uVar9,uVar19);
                      puVar15 = puStack_b8;
                      lVar13 = *(long *)(lVar13 + 0x10);
                      puVar10 = (undefined8 *)*puStack_b8;
                      FUN_109f6600c(puVar10,0xa0,8);
                      if (puVar10 != (undefined8 *)0x0) {
                        puVar10[0x11] = 0;
                        puVar10[0x10] = 0;
                        puVar10[0x13] = 0;
                        puVar10[0x12] = 0;
                        puVar10[0xd] = 0;
                        puVar10[0xc] = 0;
                        puVar10[0xf] = 0;
                        puVar10[0xe] = 0;
                        puVar10[9] = 0;
                        puVar10[8] = 0;
                        puVar10[0xb] = 0;
                        puVar10[10] = 0;
                        puVar10[5] = 0;
                        puVar10[4] = 0;
                        puVar10[7] = 0;
                        puVar10[6] = 0;
                        puVar10[1] = 0;
                        *puVar10 = 0;
                        puVar10[3] = 0;
                        puVar10[2] = 0;
                      }
                      *(undefined4 *)(puVar10 + 3) = 1;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      *puVar10 = 0;
                      *(undefined4 *)(puVar10 + 5) = 0;
                      *(uint *)((long)puVar10 + 0x2c) = *(uint *)(lVar13 + 0x20) & 0x1fffff;
                      puVar10[6] = *(undefined8 *)(lVar13 + 0x10);
                      puVar10[7] = lVar13;
                      if (*(char *)((long)puVar15 + 0x61) == '\x0e') {
                        uVar11 = *(undefined4 *)(puVar15 + 0x2c);
                      }
                      else {
                        uVar11 = 0x20;
                      }
                      FUN_109ecb048(puVar10,puVar10 + 0x10,1,uVar11);
                      FUN_109ecb4f0(2,plVar14,puVar10);
                      uStack_d0 = 3;
                      puStack_c8 = puVar10;
                      func_0x000109f19a64(&uStack_d0,plStack_70 + 1,lVar18,puVar10,plVar14);
                      lVar18 = *(long *)plVar14[0x13];
                      lVar13 = lVar18;
                      if (*(int *)(lVar18 + 0x18) != 1) {
                        lVar13 = 0;
                      }
                      uVar4 = *(undefined1 *)(*(long *)(lVar18 + 0x30) + 0xd);
                      puVar15 = puStack_b8;
                      FUN_109ecb0a8(puStack_b8,0x112);
                      *(undefined1 *)(puVar15 + 10) = uVar4;
                      FUN_109ecb048();
                      puVar15[0x10] = 0;
                      puVar15[0x11] = 0;
                      puVar15[0x12] = 0;
                      puVar15[0x13] = lVar13 + 0x80;
                      *(undefined4 *)
                       ((long)puVar15 +
                       (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(puVar15 + 5) * 0x68] * 4 +
                       0x50) = 0;
                      FUN_109ecb4f0(uStack_d0,puStack_c8,puVar15);
                      uStack_d0 = 3;
                      plVar12 = plVar14 + 6;
                      if ((long *)plVar14[8] + -1 != plVar12) {
                        plVar5 = puVar15 + 7;
                        plVar14 = (long *)plVar14[8];
                        do {
                          lVar13 = *plVar14;
                          plVar1 = (long *)plVar14[1];
                          *(long **)(lVar13 + 8) = plVar1;
                          *plVar1 = lVar13;
                          plVar14[1] = (long)plVar5;
                          plVar14[2] = (long)(puVar15 + 6);
                          *plVar14 = 0;
                          lVar13 = *plVar5;
                          *plVar14 = lVar13;
                          *(long **)(lVar13 + 8) = plVar14;
                          *plVar5 = (long)plVar14;
                          plVar14 = plVar1;
                        } while (plVar1 + -1 != plVar12);
                      }
                      puStack_c8 = puVar15;
                      FUN_109ecb9c0(*plVar12);
                      FUN_109ef9640(&uStack_a8);
                    }
                    if (plVar16 == (long *)0x0) goto LAB_109f19508;
                    plVar12 = (long *)*plVar16;
                    plVar5 = (long *)0x0;
                    plVar14 = plVar16;
                  } while (plVar12 == (long *)0x0);
                } while( true );
              }
LAB_109f19508:
              FUN_109ecc434();
            }
          }
        }
        if (param_3 != 0) {
          uStack_a8 = 0;
          puStack_a0 = (undefined8 *)0x0;
          uStack_90 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18);
          uStack_98 = 0;
          lStack_88 = lVar6;
          if (*(char *)((long)param_1 + 0x61) == '\x03') {
            lVar8 = *(long *)(lVar6 + 0x30);
            while (lVar8 != 0) {
              puVar15 = *(undefined8 **)(lVar8 + 0x20);
              for (puVar10 = (undefined8 *)**(undefined8 **)(lVar8 + 0x20);
                  puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
                if ((*(int *)(puVar15 + 3) == 4) &&
                   ((*(int *)(puVar15 + 5) == 0x70 || (*(int *)(puVar15 + 5) == 0x6e)))) {
                  uStack_a8 = 2;
                  puStack_a0 = puVar15;
                  FUN_109f19830(&uStack_a8,puStack_118,plStack_158);
                  puVar10 = (undefined8 *)*puVar15;
                }
                puVar15 = puVar10;
              }
              FUN_109ecc434();
            }
          }
          else if (param_2 == lVar6) {
            puStack_a0 = *(undefined8 **)(lVar6 + 0x30);
            if (*(int *)(puStack_a0 + 2) == 0) {
              uStack_a8 = 0;
            }
            else {
              puVar15 = puStack_a0 + 1;
              puStack_a0 = (undefined8 *)0x0;
              if (((undefined8 *)*puVar15)[1] != 0) {
                puStack_a0 = (undefined8 *)*puVar15;
              }
              uStack_a8 = 1;
            }
            FUN_109f19830(&uStack_a8,plStack_158,puStack_118);
            lVar8 = *(long *)(*(long *)(lVar6 + 0x50) + 0x58);
            uVar3 = *(uint *)(lVar8 + 0x20);
            if (uVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 8);
              lVar13 = (ulong)uVar3 << 4;
              do {
                puVar15 = *(undefined8 **)(lVar8 + 8);
                if (puVar15 != (undefined8 *)0x0 && puVar15 != (undefined8 *)&UNK_10e47dcd0) {
                  do {
                    if ((((undefined8 *)puVar15[4] == puVar15 + 6) ||
                        (puVar10 = (undefined8 *)puVar15[7], puVar10 == (undefined8 *)0x0)) ||
                       (*(int *)(puVar10 + 3) != 6)) {
                      uStack_a8 = 1;
                    }
                    else {
                      uStack_a8 = 2;
                      puVar15 = puVar10;
                    }
                    puStack_a0 = puVar15;
                    FUN_109f19830(&uStack_a8,puStack_118,plStack_158);
                    lVar18 = *(long *)(*(long *)(lVar6 + 0x50) + 0x58);
                    lVar13 = lVar8;
                    do {
                      lVar8 = lVar13 + 0x10;
                      if (lVar8 == *(long *)(lVar18 + 8) + (ulong)*(uint *)(lVar18 + 0x20) * 0x10)
                      goto LAB_109f195c4;
                      puVar15 = *(undefined8 **)(lVar13 + 0x18);
                      lVar13 = lVar8;
                    } while (puVar15 == (undefined8 *)0x0 || puVar15 == (undefined8 *)&UNK_10e47dcd0
                            );
                  } while( true );
                }
                lVar8 = lVar8 + 0x10;
                lVar13 = lVar13 + -0x10;
              } while (lVar13 != 0);
            }
          }
        }
LAB_109f195c4:
        *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) & 3;
        plVar17 = (long *)*plVar17;
        plVar12 = (long *)*plVar17;
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_109f190c8;
          lVar6 = plVar17[6];
          if (lVar6 != 0) break;
          plVar17 = plVar12;
          plVar12 = (long *)*plVar12;
        }
      } while( true );
    }
    plVar17 = plVar12;
    plVar12 = (long *)*plVar12;
  } while( true );
}



/* Entry: 109f196fc; end: 109f1976f;  */

void FUN_109f196fc(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)0x0;
    if (*plVar1 != 0) {
      plVar2 = plVar1;
    }
    while( true ) {
      if ((param_2 & *(uint *)(param_1 + 4)) != 0) {
        puVar3 = (undefined8 *)param_1[1];
        plVar1[1] = (long)puVar3;
        *puVar3 = plVar1;
        *param_1 = param_3 + 0x10;
        param_1[1] = 0;
        puVar3 = *(undefined8 **)(param_3 + 0x18);
        param_1[1] = (long)puVar3;
        *puVar3 = param_1;
        *(long **)(param_3 + 0x18) = param_1;
      }
      if (plVar2 == (long *)0x0) break;
      plVar1 = (long *)*plVar2;
      param_1 = plVar2;
      plVar2 = (long *)0x0;
      if ((plVar1 != (long *)0x0) && (plVar2 = (long *)0x0, *plVar1 != 0)) {
        plVar2 = plVar1;
      }
    }
  }
  return;
}



/* Entry: 109f19770; end: 109f1982f;  */

undefined8 * FUN_109f19770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_109f658b0(param_1,0x98);
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  uVar3 = param_2[0x11];
  uVar2 = param_2[0x10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0x12] = param_2[0x12];
  param_1[4] = param_1[4] | 0x80000000;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  FUN_109f65b2c();
  puVar1 = param_2;
  FUN_109f65d74(param_2,&UNK_10f619398);
  param_2[3] = puVar1;
  param_2[4] = param_2[4] & 0xffffff3fffc00000 | 0x20000;
  return param_1;
}



/* Entry: 109f19830; end: 109f19e3b;  */

void FUN_109f19830(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = (long *)*param_3;
  plVar9 = (long *)*param_2;
  if ((long *)*param_2 != (long *)0x0 && (long *)*param_3 != (long *)0x0) {
    do {
      plVar8 = plVar9;
      plVar6 = plVar7;
      if (((param_3[4] & 0x80001fffffU) != 8) && ((*(byte *)((long)param_2 + 0x22) >> 5 & 1) == 0))
      {
        puVar2 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar2,0xa0,8);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[0x11] = 0;
          puVar2[0x10] = 0;
          puVar2[0x13] = 0;
          puVar2[0x12] = 0;
          puVar2[0xd] = 0;
          puVar2[0xc] = 0;
          puVar2[0xf] = 0;
          puVar2[0xe] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[0xb] = 0;
          puVar2[10] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
        }
        *(undefined4 *)(puVar2 + 3) = 1;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 5) = 0;
        *(uint *)((long)puVar2 + 0x2c) = *(uint *)(param_2 + 4) & 0x1fffff;
        puVar2[6] = param_2[2];
        puVar2[7] = param_2;
        if (*(char *)(param_1[3] + 0x61) == '\x0e') {
          uVar5 = *(undefined4 *)(param_1[3] + 0x160);
        }
        else {
          uVar5 = 0x20;
        }
        FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar5);
        FUN_109ecb4f0(*param_1,param_1[1],puVar2);
        *param_1 = 3;
        param_1[1] = puVar2;
        puVar3 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar3,0xa0,8);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[9] = 0;
          puVar3[8] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
        }
        *(undefined4 *)(puVar3 + 3) = 1;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 5) = 0;
        *(uint *)((long)puVar3 + 0x2c) = *(uint *)(param_3 + 4) & 0x1fffff;
        puVar3[6] = param_3[2];
        puVar3[7] = param_3;
        if (*(char *)(param_1[3] + 0x61) == '\x0e') {
          uVar5 = *(undefined4 *)(param_1[3] + 0x160);
        }
        else {
          uVar5 = 0x20;
        }
        FUN_109ecb048(puVar3,puVar3 + 0x10,1,uVar5);
        FUN_109ecb4f0(*param_1,param_1[1],puVar3);
        *param_1 = 3;
        param_1[1] = puVar3;
        lVar4 = param_1[3];
        FUN_109ecb0a8(lVar4,0x54);
        *(undefined8 *)(lVar4 + 0x80) = 0;
        *(undefined8 *)(lVar4 + 0x88) = 0;
        *(undefined8 *)(lVar4 + 0x90) = 0;
        *(undefined8 **)(lVar4 + 0x98) = puVar2 + 0x10;
        *(undefined8 *)(lVar4 + 0xa0) = 0;
        *(undefined8 *)(lVar4 + 0xa8) = 0;
        *(undefined8 *)(lVar4 + 0xb0) = 0;
        *(undefined8 **)(lVar4 + 0xb8) = puVar3 + 0x10;
        lVar1 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
        *(undefined4 *)(lVar4 + 0x54 + (ulong)(byte)(&UNK_110b671c8)[lVar1] * 4 + -4) = 0;
        *(undefined4 *)(lVar4 + 0x54 + (ulong)(byte)(&UNK_110b671c9)[lVar1] * 4 + -4) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],lVar4);
        *param_1 = 3;
        param_1[1] = lVar4;
      }
      plVar7 = (long *)*plVar6;
      plVar9 = (long *)*plVar8;
      param_3 = plVar6;
      param_2 = plVar8;
    } while (plVar9 != (long *)0x0 && plVar7 != (long *)0x0);
  }
  return;
}



/* Entry: 109f19e3c; end: 109f19fa3;  */

long FUN_109f19e3c(undefined8 *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar1 = *(byte *)(param_2 + 0x9d);
  uVar5 = (bVar1 & 0xaaaaaaaa) >> 1 | (bVar1 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
  uVar7 = param_3;
  if (uVar5 < 5) {
    if (uVar5 == 0) {
      uVar6 = 0;
      param_3 = (ulong)(param_3 != 0);
      uVar7 = 0;
    }
    else if (uVar5 == 3) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = param_3 & 0xffff0000;
  }
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x50,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 5;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_109ecb048(puVar2,puVar2 + 5,1,bVar1);
  puVar2[9] = uVar7 & 0xff00 | uVar6 | param_3 & 0xff;
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  lVar3 = param_1[3];
  func_0x000109ecaf70(lVar3,1);
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x000109eca118();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(long *)(lVar3 + 0x50) = param_2 + 0x80;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 **)(lVar3 + 0x70) = puVar2 + 5;
  FUN_109ecb048(lVar3,lVar3 + 0x80,*(undefined1 *)(param_2 + 0x9c),*(undefined1 *)(param_2 + 0x9d));
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3;
}



/* Entry: 109f19fa4; end: 109f1a0af;  */

undefined8 FUN_109f19fa4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x61) == '\x01') {
    uVar5 = 8;
  }
  else {
    if (*(char *)(param_1 + 0x61) != '\x02') {
      return 0;
    }
    uVar5 = 4;
  }
  plVar3 = (long *)**(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  bVar7 = false;
  plVar6 = *(long **)(param_1 + 8);
  do {
    while ((plVar4 = plVar3, (uVar5 & *(uint *)(plVar6 + 4)) != 0 &&
           ((*(uint *)((long)plVar6 + 0x3c) & 0xfffffffe) == 0x1a))) {
      lVar1 = plVar6[2];
      FUN_109eca23c(lVar1);
      bVar7 = true;
      lVar2 = 2;
      func_0x000109ec6c94(2,lVar1,1,0,0,0);
      plVar6[2] = lVar2;
      plVar6[4] = plVar6[4] & 0xffffffbfffffffff;
      plVar6 = (long *)*plVar6;
      plVar3 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) {
LAB_109f1a064:
        FUN_109efa06c(param_1,FUN_109efa234);
        FUN_109f0aa2c(param_1,uVar5,FUN_109f1a0b0,0xf);
        FUN_109f287bc(param_1);
        return 1;
      }
    }
    plVar3 = (long *)*plVar4;
    plVar6 = plVar4;
  } while (plVar3 != (long *)0x0);
  if (!bVar7) {
    return 0;
  }
  goto LAB_109f1a064;
}



/* Entry: 109f1a0b0; end: 109f1a0c3;  */

bool FUN_109f1a0b0(long param_1)

{
  return (*(uint *)(param_1 + 0x3c) & 0xfffffffe) == 0x1a;
}



/* Entry: 109f1a0c4; end: 109f1a8bf;  */

ulong FUN_109f1a0c4(long param_1,ulong param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  long *plVar44;
  uint uVar45;
  ulong uVar46;
  int iVar47;
  long lVar48;
  int iVar49;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar50;
  long lVar51;
  ulong unaff_x22;
  ulong unaff_x23;
  long *plVar52;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  bool bVar53;
  long *unaff_x28;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  uint uStack_1f4;
  uint auStack_1f0 [4];
  undefined8 auStack_1e0 [2];
  uint auStack_1d0 [4];
  long alStack_1c0 [4];
  long *plStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  uint uStack_12c;
  long lStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  uint auStack_f0 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar43 = *(long **)(param_1 + 0x178);
  for (plVar52 = (long *)**(long **)(param_1 + 0x178); plVar52 != (long *)0x0;
      plVar52 = (long *)*plVar52) {
    lVar48 = plVar43[6];
    if (lVar48 != 0) {
      uVar45 = 0;
      goto LAB_109f1a124;
    }
    plVar43 = plVar52;
  }
  uVar45 = 0;
LAB_109f1a348:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (ulong)(uVar45 & 1);
  }
  ___stack_chk_fail();
  uStack_148 = 0x109f1a388;
  alStack_1c0[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar43 = (long *)**(long **)(param_1 + 0x178);
  if (plVar43 == (long *)0x0) {
LAB_109f1a3f4:
    lVar48 = 0;
  }
  else {
    plVar52 = *(long **)(param_1 + 0x178);
    plVar37 = (long *)0x0;
    do {
      plVar38 = plVar52;
      if ((char)plVar52[7] == '\0') {
        plVar38 = plVar37;
      }
      plVar44 = (long *)*plVar43;
      plVar52 = plVar43;
      plVar37 = plVar38;
      plVar43 = plVar44;
    } while (plVar44 != (long *)0x0);
    if (plVar38 == (long *)0x0) goto LAB_109f1a3f4;
    lVar48 = plVar38[6];
  }
  alStack_1c0[0] = 0;
  alStack_1c0[1] = 0;
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  auStack_1d0[2] = 0;
  auStack_1d0[3] = 0;
  auStack_1e0[0] = 0;
  auStack_1e0[1] = 0;
  auStack_1f0[0] = 0;
  auStack_1f0[1] = 0;
  auStack_1f0[2] = 0;
  auStack_1f0[3] = 0;
  lVar51 = *(long *)(lVar48 + 0x30);
  uVar39 = param_2;
  plStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  plStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  plStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  plStack_160 = unaff_x20;
  plStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  if (lVar51 != 0) {
    lVar35 = lVar51;
    FUN_109ecc434();
    lVar41 = lVar51;
    do {
      lVar36 = lVar35;
      plVar52 = *(long **)(lVar41 + 0x20);
      plVar43 = (long *)*plVar52;
      if (plVar43 != (long *)0x0) {
        do {
          plVar37 = plVar52;
          plVar38 = (long *)0x0;
          if (*plVar43 != 0) {
            plVar38 = plVar43;
          }
          do {
            plVar52 = plVar38;
            param_3 = &uStack_1f4;
            uVar39 = param_2;
            FUN_109f1a8c0();
            if (plVar37 != (long *)0x0) {
              uVar45 = *(uint *)((long)plVar37 +
                                (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(plVar37 + 5) * 0x68]
                                * 4 + 0x50);
              uVar40 = uVar45 >> 7 & 0x3f;
              if ((uVar45 & 0x800000) != 0) {
                uVar40 = (uVar45 >> 0x19 & 1) + uVar40 + 1 >> 1;
              }
              if (uStack_1f4 == 4) {
                if (uVar40 != 0) {
                  uVar42 = uVar45 & 0x7f;
                  puVar1 = auStack_1d0;
                  if (*(uint *)(plVar37 + 5) != 0x168) {
                    puVar1 = (uint *)alStack_1c0;
                  }
                  do {
                    uVar5 = 1 << (ulong)(uVar42 & 0x1f);
                    uVar6 = uVar42 >> 5;
                    puVar1[uVar6] = uVar5 | puVar1[uVar6];
                    if ((uVar45 >> 0x1b & 1) != 0) {
                      *(uint *)((long)auStack_1e0 + (ulong)uVar6 * 4) =
                           *(uint *)((long)auStack_1e0 + (ulong)uVar6 * 4) | uVar5;
                    }
                    uVar42 = uVar42 + 1;
                    uVar40 = uVar40 - 1;
                  } while (uVar40 != 0);
                }
              }
              else if (((uVar45 >> 0xd & 1) == 0) && (uVar40 != 0)) {
                uVar45 = uVar45 & 0x7f;
                do {
                  auStack_1f0[uVar45 >> 5] = 1 << (ulong)(uVar45 & 0x1f) | auStack_1f0[uVar45 >> 5];
                  uVar45 = uVar45 + 1;
                  uVar40 = uVar40 - 1;
                } while (uVar40 != 0);
              }
            }
            if (plVar52 == (long *)0x0) goto LAB_109f1a538;
            plVar43 = (long *)*plVar52;
            plVar37 = plVar52;
            plVar38 = (long *)0x0;
          } while (plVar43 == (long *)0x0);
        } while( true );
      }
LAB_109f1a538:
      lVar35 = lVar36;
      FUN_109ecc434();
      lVar41 = lVar36;
    } while (lVar36 != 0);
  }
  uVar45 = (uint)uVar39;
  if (lVar51 == 0) {
LAB_109f1a838:
    uVar39 = 0;
    uVar40 = 0xfffffff7;
  }
  else {
    uVar57 = (undefined1)alStack_1c0[1];
    uVar15 = (ulong)alStack_1c0[1] >> 8;
    uVar16 = (ulong)alStack_1c0[1] >> 0x10;
    uVar17 = (ulong)alStack_1c0[1] >> 0x18;
    uVar18 = (ulong)alStack_1c0[1] >> 0x20;
    uVar19 = (ulong)alStack_1c0[1] >> 0x28;
    uVar20 = (ulong)alStack_1c0[1] >> 0x30;
    uVar21 = (ulong)alStack_1c0[1] >> 0x38;
    uVar54 = (undefined1)alStack_1c0[0];
    uVar2 = (ulong)alStack_1c0[0] >> 8;
    uVar9 = (ulong)alStack_1c0[0] >> 0x10;
    uVar10 = (ulong)alStack_1c0[0] >> 0x18;
    uVar11 = (ulong)alStack_1c0[0] >> 0x20;
    uVar12 = (ulong)alStack_1c0[0] >> 0x28;
    uVar13 = (ulong)alStack_1c0[0] >> 0x30;
    uVar14 = (ulong)alStack_1c0[0] >> 0x38;
    uVar59 = (undefined1)auStack_1e0[1];
    uVar27 = (ulong)auStack_1e0[1] >> 8;
    uVar28 = (ulong)auStack_1e0[1] >> 0x10;
    uVar29 = (ulong)auStack_1e0[1] >> 0x18;
    uVar30 = (ulong)auStack_1e0[1] >> 0x20;
    uVar31 = (ulong)auStack_1e0[1] >> 0x28;
    uVar32 = (ulong)auStack_1e0[1] >> 0x30;
    uVar33 = (ulong)auStack_1e0[1] >> 0x38;
    uVar58 = (undefined1)auStack_1e0[0];
    uVar22 = (ulong)auStack_1e0[0] >> 8;
    uVar23 = (ulong)auStack_1e0[0] >> 0x20;
    uVar24 = (ulong)auStack_1e0[0] >> 0x28;
    uVar25 = (ulong)auStack_1e0[0] >> 0x30;
    uVar26 = (ulong)auStack_1e0[0] >> 0x38;
    bVar4 = POPCOUNT((char)((ulong)auStack_1e0[0] >> 0x10)) +
            POPCOUNT((char)((ulong)auStack_1e0[0] >> 0x18));
    lVar35 = lVar51;
    FUN_109ecc434();
    bVar53 = false;
    uVar55 = SUB81(auStack_1f0._8_8_,4);
    uVar56 = SUB81(auStack_1f0._8_8_,5);
    do {
      lVar41 = lVar35;
      plVar52 = *(long **)(lVar51 + 0x20);
      plVar43 = (long *)*plVar52;
      if (plVar43 != (long *)0x0) {
        do {
          plVar37 = (long *)0x0;
          plVar38 = plVar52;
          if (*plVar43 != 0) {
            plVar37 = plVar43;
          }
          do {
            plVar52 = plVar37;
            param_3 = &uStack_1f4;
            uVar39 = param_2;
            FUN_109f1a8c0();
            if (plVar38 != (long *)0x0) {
              uVar45 = *(uint *)(plVar38 + 5);
              uVar40 = *(uint *)((long)plVar38 +
                                (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar45 * 0x68] * 4 + 0x50);
              if (uStack_1f4 == 4) {
                uVar46 = (ulong)(uVar40 >> 5) & 3;
                if (uVar45 == 0x168) {
                  lVar51 = 0;
                  iVar47 = 0;
                  do {
                    if (uVar46 * 4 - lVar51 == 0) {
                      uVar40 = auStack_1d0[uVar46] & (-1 << (ulong)(uVar40 & 0x1f) ^ 0xffffffffU);
                      iVar47 = (uint)(byte)(POPCOUNT((char)uVar40) + POPCOUNT((char)(uVar40 >> 8)) +
                                            POPCOUNT((char)(uVar40 >> 0x10)) +
                                           POPCOUNT((char)(uVar40 >> 0x18))) + iVar47;
                      break;
                    }
                    uVar3 = *(undefined4 *)((long)auStack_1d0 + lVar51);
                    iVar47 = (uint)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)((uint)uVar3 >> 8))
                                          + POPCOUNT((char)((uint)uVar3 >> 0x10)) +
                                         POPCOUNT((char)((uint)uVar3 >> 0x18))) + iVar47;
                    lVar51 = lVar51 + 4;
                  } while (lVar51 != 0x10);
                  uVar42 = (CONCAT12(bVar4,(ushort)(byte)POPCOUNT(uVar58) +
                                           (ushort)(byte)POPCOUNT((char)uVar22)) & 0xffff) +
                           (uint)bVar4 +
                           (uint)(ushort)((ushort)(byte)POPCOUNT(uVar54) +
                                         (ushort)(byte)POPCOUNT((char)uVar2)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar9) +
                                         (ushort)(byte)POPCOUNT((char)uVar10)) +
                           (uint)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)uVar24)) +
                           (uint)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)uVar26)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar11) +
                                         (ushort)(byte)POPCOUNT((char)uVar12)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar13) +
                                         (ushort)(byte)POPCOUNT((char)uVar14)) +
                           (uint)(byte)(POPCOUNT(uVar59) + POPCOUNT((char)uVar27)) +
                           (uint)(byte)(POPCOUNT((char)uVar28) + POPCOUNT((char)uVar29)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT(uVar57) +
                                         (ushort)(byte)POPCOUNT((char)uVar15)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar16) +
                                         (ushort)(byte)POPCOUNT((char)uVar17)) +
                           (uint)(byte)(POPCOUNT((char)uVar30) + POPCOUNT((char)uVar31)) +
                           (uint)(byte)(POPCOUNT((char)uVar32) + POPCOUNT((char)uVar33)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar18) +
                                         (ushort)(byte)POPCOUNT((char)uVar19)) +
                           (uint)(ushort)((ushort)(byte)POPCOUNT((char)uVar20) +
                                         (ushort)(byte)POPCOUNT((char)uVar21)) + iVar47;
                }
                else {
                  lVar51 = 0;
                  iVar47 = 0;
                  do {
                    if (uVar46 * 4 - lVar51 == 0) {
                      uVar42 = *(uint *)((ulong)alStack_1c0 | uVar46 << 2) &
                               (-1 << (ulong)(uVar40 & 0x1f) ^ 0xffffffffU);
                      iVar47 = (uint)(byte)(POPCOUNT((char)uVar42) + POPCOUNT((char)(uVar42 >> 8)) +
                                            POPCOUNT((char)(uVar42 >> 0x10)) +
                                           POPCOUNT((char)(uVar42 >> 0x18))) + iVar47;
                      break;
                    }
                    uVar3 = *(undefined4 *)((long)alStack_1c0 + lVar51);
                    iVar47 = (uint)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)((uint)uVar3 >> 8))
                                          + POPCOUNT((char)((uint)uVar3 >> 0x10)) +
                                         POPCOUNT((char)((uint)uVar3 >> 0x18))) + iVar47;
                    lVar51 = lVar51 + 4;
                  } while (lVar51 != 0x10);
                  lVar51 = 0;
                  iVar49 = 0;
                  do {
                    if (uVar46 * 4 - lVar51 == 0) {
                      uVar42 = *(uint *)((ulong)auStack_1e0 | uVar46 << 2) &
                               (-1 << (ulong)(uVar40 & 0x1f) ^ 0xffffffffU);
                      iVar49 = (uint)(byte)(POPCOUNT((char)uVar42) + POPCOUNT((char)(uVar42 >> 8)) +
                                            POPCOUNT((char)(uVar42 >> 0x10)) +
                                           POPCOUNT((char)(uVar42 >> 0x18))) + iVar49;
                      break;
                    }
                    uVar3 = *(undefined4 *)((long)auStack_1e0 + lVar51);
                    iVar49 = (uint)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)((uint)uVar3 >> 8))
                                          + POPCOUNT((char)((uint)uVar3 >> 0x10)) +
                                         POPCOUNT((char)((uint)uVar3 >> 0x18))) + iVar49;
                    lVar51 = lVar51 + 4;
                  } while (lVar51 != 0x10);
                  uVar42 = iVar47 + (uVar40 >> 0x1b & 1) + iVar49;
                }
              }
              else if ((uVar40 >> 0xd & 1) == 0) {
                lVar51 = 0;
                uVar42 = 0;
                uVar46 = (ulong)(uVar40 >> 5) & 3;
                do {
                  if (uVar46 * 4 - lVar51 == 0) {
                    uVar40 = *(uint *)((ulong)auStack_1f0 | uVar46 << 2) &
                             (-1 << (ulong)(uVar40 & 0x1f) ^ 0xffffffffU);
                    uVar40 = (uint)(byte)(POPCOUNT((char)uVar40) + POPCOUNT((char)(uVar40 >> 8)) +
                                          POPCOUNT((char)(uVar40 >> 0x10)) +
                                         POPCOUNT((char)(uVar40 >> 0x18)));
                    goto LAB_109f1a758;
                  }
                  uVar3 = *(undefined4 *)((long)auStack_1f0 + lVar51);
                  uVar42 = (byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)((uint)uVar3 >> 8)) +
                                  POPCOUNT((char)((uint)uVar3 >> 0x10)) +
                                 POPCOUNT((char)((uint)uVar3 >> 0x18))) + uVar42;
                  lVar51 = lVar51 + 4;
                } while (lVar51 != 0x10);
              }
              else {
                lVar51 = 0;
                uVar40 = 0;
                do {
                  uVar3 = *(undefined4 *)((long)auStack_1f0 + lVar51);
                  uVar40 = (byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)((uint)uVar3 >> 8)) +
                                  POPCOUNT((char)((uint)uVar3 >> 0x10)) +
                                 POPCOUNT((char)((uint)uVar3 >> 0x18))) + uVar40;
                  lVar51 = lVar51 + 4;
                  uVar42 = (uint)(byte)(POPCOUNT(uVar55) + POPCOUNT(uVar56));
                } while (lVar51 != 0xc);
LAB_109f1a758:
                uVar42 = uVar40 + uVar42;
              }
              *(uint *)((long)plVar38 +
                       (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar45 * 0x68] * 4 + 0x50) = uVar42;
              bVar53 = true;
            }
            if (plVar52 == (long *)0x0) goto LAB_109f1a81c;
            plVar43 = (long *)*plVar52;
            plVar37 = (long *)0x0;
            plVar38 = plVar52;
          } while (plVar43 == (long *)0x0);
        } while( true );
      }
LAB_109f1a81c:
      lVar35 = lVar41;
      FUN_109ecc434();
      uVar45 = (uint)uVar39;
      lVar51 = lVar41;
    } while (lVar41 != 0);
    if (!bVar53) goto LAB_109f1a838;
    uVar39 = 1;
    uVar40 = 3;
  }
  *(uint *)(lVar48 + 0x84) = *(uint *)(lVar48 + 0x84) & uVar40;
  if (((uint)param_2 >> 2 & 1) != 0) {
    auVar7[2] = POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x10)) +
                POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x18));
    auVar7._0_2_ = (ushort)(byte)POPCOUNT((char)alStack_1c0[0]) +
                   (ushort)(byte)POPCOUNT((char)((ulong)alStack_1c0[0] >> 8));
    auVar7[3] = 0;
    auVar7[4] = POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x20)) +
                POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x28));
    auVar7[5] = 0;
    auVar7[6] = POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x30)) +
                POPCOUNT((char)((ulong)alStack_1c0[0] >> 0x38));
    auVar7[7] = 0;
    auVar7[8] = POPCOUNT((char)alStack_1c0[1]) + POPCOUNT((char)((ulong)alStack_1c0[1] >> 8));
    auVar7[9] = 0;
    auVar7[10] = POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x10)) +
                 POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x18));
    auVar7[0xb] = 0;
    auVar7[0xc] = POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x20)) +
                  POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x28));
    auVar7[0xd] = 0;
    auVar7[0xe] = POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x30)) +
                  POPCOUNT((char)((ulong)alStack_1c0[1] >> 0x38));
    auVar7[0xf] = 0;
    uVar3 = NEON_uaddlv(auVar7,2);
    *(undefined4 *)(param_1 + 0x198) = uVar3;
  }
  if (((uint)param_2 >> 3 & 1) != 0) {
    auVar8[2] = POPCOUNT(SUB81(auStack_1f0._0_8_,2)) + POPCOUNT(SUB81(auStack_1f0._0_8_,3));
    auVar8._0_2_ = (ushort)(byte)POPCOUNT((char)auStack_1f0._0_8_) +
                   (ushort)(byte)POPCOUNT(SUB81(auStack_1f0._0_8_,1));
    auVar8[3] = 0;
    auVar8[4] = POPCOUNT(SUB81(auStack_1f0._0_8_,4)) + POPCOUNT(SUB81(auStack_1f0._0_8_,5));
    auVar8[5] = 0;
    auVar8[6] = POPCOUNT(SUB81(auStack_1f0._0_8_,6)) + POPCOUNT(SUB81(auStack_1f0._0_8_,7));
    auVar8[7] = 0;
    auVar8[8] = POPCOUNT((char)auStack_1f0._8_8_) + POPCOUNT(SUB81(auStack_1f0._8_8_,1));
    auVar8[9] = 0;
    auVar8[10] = POPCOUNT(SUB81(auStack_1f0._8_8_,2)) + POPCOUNT(SUB81(auStack_1f0._8_8_,3));
    auVar8[0xb] = 0;
    auVar8[0xc] = POPCOUNT(SUB81(auStack_1f0._8_8_,4)) + POPCOUNT(SUB81(auStack_1f0._8_8_,5));
    auVar8[0xd] = 0;
    auVar8[0xe] = POPCOUNT(SUB81(auStack_1f0._8_8_,6)) + POPCOUNT(SUB81(auStack_1f0._8_8_,7));
    auVar8[0xf] = 0;
    uVar3 = NEON_uaddlv(auVar8,2);
    *(undefined4 *)(param_1 + 0x1a0) = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_1c0[3]) {
    return uVar39;
  }
  ___stack_chk_fail();
  if (*(int *)(uVar39 + 0x18) != 4) {
    return 0;
  }
  iVar47 = *(int *)(uVar39 + 0x28);
  uVar40 = iVar47 - 0x144;
  if (uVar40 < 0x28) {
    if ((1L << ((ulong)uVar40 & 0x3f) & 0x5000000029U) != 0) {
      uVar40 = 4;
      goto LAB_109f1a924;
    }
    if ((1L << ((ulong)uVar40 & 0x3f) & 0x8100000000U) == 0) goto LAB_109f1a910;
  }
  else {
LAB_109f1a910:
    if ((iVar47 != 0x27c) && (iVar47 != 0x27a)) {
      return 0;
    }
  }
  uVar40 = 8;
LAB_109f1a924:
  *param_3 = uVar40;
  uVar2 = 0;
  if ((uVar40 & uVar45) != 0) {
    uVar2 = uVar39;
  }
  return uVar2;
LAB_109f1a124:
  lVar51 = *(long *)(lVar48 + 0x30);
  plVar52 = plVar43;
  if (lVar51 == 0) {
LAB_109f1a30c:
    uVar40 = 0;
    uVar42 = 0xfffffff7;
  }
  else {
    unaff_x21 = 0;
    lStack_140 = lVar48;
    plStack_138 = plVar43;
    uStack_12c = uVar45;
    do {
      unaff_x28 = *(long **)(lVar51 + 0x20);
      plVar43 = (long *)*unaff_x28;
      if (plVar43 != (long *)0x0) {
        do {
          lStack_128 = lVar51;
          plVar52 = (long *)0x0;
          unaff_x19 = unaff_x28;
          if (*plVar43 != 0) {
            plVar52 = plVar43;
          }
          do {
            unaff_x28 = plVar52;
            if ((int)unaff_x19[3] == 5) {
              bVar4 = *(byte *)((long)unaff_x19 + 0x44);
              unaff_x22 = (ulong)bVar4;
              if (bVar4 != 1) {
                for (lStack_f8 = unaff_x19[2]; *(int *)(lStack_f8 + 0x10) != 3;
                    lStack_f8 = *(long *)(lStack_f8 + 0x18)) {
                }
                unaff_x25 = *(undefined8 **)(*(long *)(lStack_f8 + 0x20) + 0x18);
                uStack_108 = 0;
                uStack_118 = 2;
                puStack_100 = unaff_x25;
                if (bVar4 == 0) {
                  param_2 = 0;
                  plStack_110 = unaff_x19;
                }
                else {
                  uStack_120 = (uint)bVar4;
                  uStack_11c = (uint)unaff_x21;
                  unaff_x27 = 0;
                  unaff_x26 = unaff_x19 + 9;
                  uVar50 = 2;
                  plVar43 = unaff_x19;
                  do {
                    unaff_x23 = (ulong)*(byte *)((long)unaff_x19 + 0x45);
                    plVar52 = (long *)*unaff_x25;
                    plStack_110 = plVar43;
                    FUN_109f6600c(plVar52,0x50,8);
                    if (plVar52 != (long *)0x0) {
                      plVar52[7] = 0;
                      plVar52[6] = 0;
                      plVar52[9] = 0;
                      plVar52[8] = 0;
                      plVar52[3] = 0;
                      plVar52[2] = 0;
                      plVar52[5] = 0;
                      plVar52[4] = 0;
                      plVar52[1] = 0;
                      *plVar52 = 0;
                    }
                    *(undefined4 *)(plVar52 + 3) = 5;
                    plVar52[1] = 0;
                    plVar52[2] = 0;
                    unaff_x24 = plVar52 + 5;
                    *plVar52 = 0;
                    FUN_109ecb048(plVar52,unaff_x24,1,unaff_x23);
                    plVar52[9] = unaff_x26[unaff_x27];
                    FUN_109ecb4f0(uVar50,plVar43,plVar52);
                    *(long **)(auStack_f0 + unaff_x27 * 2) = unaff_x24;
                    uStack_118 = 3;
                    unaff_x27 = unaff_x27 + 1;
                    param_2 = (ulong)*(byte *)((long)unaff_x19 + 0x44);
                    uVar50 = 3;
                    plVar43 = plVar52;
                  } while (unaff_x27 < param_2);
                  unaff_x22 = (ulong)uStack_120;
                  unaff_x21 = (ulong)uStack_11c;
                  plStack_110 = plVar52;
                }
                unaff_x20 = unaff_x19 + 5;
                func_0x000109ecd728();
                puVar34 = &uStack_118;
                param_3 = auStack_f0;
                FUN_109ece300();
                if ((long *)unaff_x19[7] + -1 != unaff_x20) {
                  plVar43 = (long *)unaff_x19[7];
                  do {
                    lVar48 = *plVar43;
                    plVar52 = (long *)plVar43[1];
                    *(long **)(lVar48 + 8) = plVar52;
                    *plVar52 = lVar48;
                    plVar43[1] = (long)(puVar34 + 1);
                    plVar43[2] = (long)puVar34;
                    *plVar43 = 0;
                    lVar48 = puVar34[1];
                    *plVar43 = lVar48;
                    *(long **)(lVar48 + 8) = plVar43;
                    puVar34[1] = plVar43;
                    plVar43 = plVar52;
                  } while (plVar52 + -1 != unaff_x20);
                }
                FUN_109ecb9c0(*unaff_x20);
              }
              unaff_x21 = (ulong)((uint)unaff_x21 | (uint)((int)unaff_x22 != 1));
            }
            lVar51 = lStack_128;
            if (unaff_x28 == (long *)0x0) {
              unaff_x28 = (long *)0x0;
              goto LAB_109f1a2ec;
            }
            plVar43 = (long *)*unaff_x28;
            plVar52 = (long *)0x0;
            unaff_x19 = unaff_x28;
          } while (plVar43 == (long *)0x0);
        } while( true );
      }
LAB_109f1a2ec:
      FUN_109ecc434();
    } while (lVar51 != 0);
    plVar52 = plStack_138;
    lVar48 = lStack_140;
    uVar45 = uStack_12c;
    if ((unaff_x21 & 1) == 0) goto LAB_109f1a30c;
    uVar40 = 1;
    uVar42 = 3;
  }
  param_1 = 0;
  *(uint *)(lVar48 + 0x84) = *(uint *)(lVar48 + 0x84) & uVar42;
  uVar45 = uVar45 | uVar40;
  plVar43 = (long *)*plVar52;
  plVar52 = *(long **)*plVar52;
  while( true ) {
    if (plVar52 == (long *)0x0) goto LAB_109f1a348;
    lVar48 = plVar43[6];
    if (lVar48 != 0) break;
    plVar43 = plVar52;
    plVar52 = (long *)*plVar52;
  }
  goto LAB_109f1a124;
}



/* Entry: 109f1a8c0; end: 109f1a93b;  */

long FUN_109f1a8c0(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x18) != 4) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = iVar2 - 0x144;
  if (uVar3 < 0x28) {
    if ((1L << ((ulong)uVar3 & 0x3f) & 0x5000000029U) != 0) {
      uVar3 = 4;
      goto LAB_109f1a924;
    }
    if ((1L << ((ulong)uVar3 & 0x3f) & 0x8100000000U) == 0) goto LAB_109f1a910;
  }
  else {
LAB_109f1a910:
    if ((iVar2 != 0x27c) && (iVar2 != 0x27a)) {
      return 0;
    }
  }
  uVar3 = 8;
LAB_109f1a924:
  *param_3 = uVar3;
  lVar1 = 0;
  if ((uVar3 & param_2) != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



/* Entry: 109f1a93c; end: 109f1adbb;  */

uint FUN_109f1a93c(long param_1,ulong param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((param_2 & 0xfffbffff) == 0) {
    uVar14 = 0;
  }
  else {
    lVar3 = 0;
    FUN_109f6695c(0,0x109f65648,FUN_109f65684);
    lVar13 = 0;
    plVar15 = *(long **)(param_1 + 0x178);
    plVar11 = (long *)**(long **)(param_1 + 0x178);
    do {
      plVar16 = plVar15;
      if (*(char *)(plVar15 + 7) == '\0') {
        plVar16 = (long *)lVar13;
      }
      plVar10 = (long *)*plVar11;
      lVar13 = (long)plVar16;
      plVar15 = plVar11;
      plVar11 = plVar10;
    } while (plVar10 != (long *)0x0);
    lVar13 = *(long *)(*(long *)((long)plVar16 + 0x30) + 0x30);
    while (lVar13 != 0) {
      for (plVar15 = *(long **)(lVar13 + 0x20); *plVar15 != 0; plVar15 = (long *)*plVar15) {
        if (((int)plVar15[3] == 4) && ((*(uint *)(plVar15 + 5) & 0xfffffffe) == 0x62)) {
          plVar11 = plVar15 + 0x13;
          while( true ) {
            lVar9 = *(long *)*plVar11;
            if (*(int *)(lVar9 + 0x28) == 0) break;
            if (*(int *)(lVar9 + 0x28) == 5) goto LAB_109f1aa90;
            if (*(int *)(lVar9 + 0x18) != 1) {
              lVar9 = 0;
            }
            plVar11 = (long *)(lVar9 + 0x50);
          }
          lVar9 = *(long *)(lVar9 + 0x38);
          if (lVar9 == 0) {
LAB_109f1aa90:
            if (lVar3 != 0) {
              FUN_109f65aa4(lVar3 + -0x30);
              FUN_109f65ae0(lVar3 + -0x30);
            }
            uVar14 = 0;
            goto LAB_109f1ad80;
          }
          lVar4 = lVar9;
          (**(code **)(lVar3 + 0x10))(lVar9);
          lVar5 = lVar3;
          FUN_109f66e48(lVar3,lVar4,lVar9,0);
          if (lVar5 != 0) {
            *(long *)(lVar5 + 8) = lVar9;
          }
        }
      }
      FUN_109ecc434();
    }
    plVar15 = *(long **)(param_1 + 8);
    if (*plVar15 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        plVar11 = plVar15;
        FUN_109f1adbc(plVar15,param_2,lVar3);
        uVar14 = (uint)plVar11 | uVar14;
        plVar15 = (long *)*plVar15;
      } while (*plVar15 != 0);
    }
    if (lVar3 != 0) {
      FUN_109f65aa4(lVar3 + -0x30);
      FUN_109f65ae0(lVar3 + -0x30);
    }
  }
  plVar15 = *(long **)(param_1 + 0x178);
  plVar11 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar11 == (long *)0x0) {
LAB_109f1ad80:
      return uVar14 & 1;
    }
    lVar13 = plVar15[6];
    if (lVar13 != 0) break;
    plVar15 = plVar11;
    plVar11 = (long *)*plVar11;
  } while( true );
LAB_109f1ab08:
  uVar7 = uVar14;
  if (((uint)param_2 >> 0x12 & 1) != 0) {
    plVar11 = *(long **)(lVar13 + 0x58);
    lVar3 = *plVar11;
    while (lVar3 != 0) {
      plVar16 = plVar11;
      FUN_109f1adbc(plVar11,param_2,0);
      uVar7 = (uint)plVar16 | uVar7;
      plVar11 = (long *)*plVar11;
      lVar3 = *plVar11;
    }
  }
  if ((uVar7 & 1) != 0) {
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    uStack_70 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18);
    uStack_78 = 0;
    lVar3 = *(long *)(lVar13 + 0x30);
    lStack_68 = lVar13;
    if (lVar3 == 0) {
LAB_109f1ad4c:
      uVar7 = 0xfffffff7;
    }
    else {
      bVar17 = false;
      do {
        plVar16 = *(long **)(lVar3 + 0x20);
        plVar11 = (long *)*plVar16;
        if (plVar11 != (long *)0x0) {
          do {
            plVar10 = (long *)0x0;
            plVar12 = plVar16;
            if (*plVar11 != 0) {
              plVar10 = plVar11;
            }
            do {
              plVar16 = plVar10;
              if ((int)plVar12[3] == 4) {
                if ((int)plVar12[5] == 0x26f) {
                  if ((*(char *)(plVar12[0x17] + 0x1d) == ' ') &&
                     (uVar7 = (uint)*(byte *)(*(long *)(*(long *)plVar12[0x13] + 0x30) + 4),
                     (1 << (ulong)(uVar7 & 0x1f) & 0x20fe77U) == 0)) {
                    uStack_88 = 2;
                    uVar8 = 0x8c;
                    if (uVar7 != 3) {
                      uVar8 = 0x119;
                    }
                    puVar6 = &uStack_88;
                    plStack_80 = plVar12;
                    FUN_109ece168(puVar6,uVar8);
                    plVar10 = plVar12 + 0x15;
                    lVar9 = *plVar10;
                    plVar11 = (long *)plVar12[0x16];
                    *(long **)(lVar9 + 8) = plVar11;
                    *plVar11 = lVar9;
                    *plVar10 = 0;
                    plVar12[0x17] = (long)puVar6;
                    plVar11 = puVar6 + 1;
                    lVar9 = *plVar11;
                    *plVar10 = lVar9;
                    plVar12[0x16] = (long)plVar11;
                    *(long **)(lVar9 + 8) = plVar10;
                    *plVar11 = (long)plVar10;
                    goto LAB_109f1acc8;
                  }
                }
                else if ((((int)plVar12[5] == 0x112) && (*(char *)((long)plVar12 + 0x4d) == ' ')) &&
                        (lVar9 = *(long *)(*(long *)plVar12[0x13] + 0x30),
                        (1 << (ulong)(*(byte *)(lVar9 + 4) & 0x1f) & 0x20fe77U) == 0)) {
                  *(undefined1 *)((long)plVar12 + 0x4d) = 0x10;
                  uStack_88 = 3;
                  puVar6 = &uStack_88;
                  plStack_80 = plVar12;
                  FUN_109ece168(puVar6,*(undefined4 *)
                                        (&UNK_10e06da2c +
                                        (ulong)(*(int *)(lVar9 + 4) + 0xfdU & 0xff) * 4),plVar12 + 6
                               );
                  func_0x000109ecc1d0(plVar12 + 6,puVar6,*puVar6);
LAB_109f1acc8:
                  bVar17 = true;
                }
              }
              else if (((int)plVar12[3] == 1) &&
                      ((*(uint *)((long)plVar12 + 0x2c) & (uint)param_2) != 0)) {
                iVar1 = (int)plVar12[5];
                if (iVar1 - 1U < 2) {
                  lVar9 = *(long *)(*(long *)plVar12[10] + 0x30);
                  func_0x000109eca118();
                  plVar12[6] = lVar9;
                }
                else if (iVar1 == 4) {
                  plVar12[6] = *(long *)(*(long *)(*(long *)(*(long *)plVar12[10] + 0x30) + 0x30) +
                                        (ulong)*(uint *)(plVar12 + 0xb) * 0x30);
                }
                else {
                  if (iVar1 != 0) {
                    FUN_109f3de34(plVar12,*(undefined8 *)PTR____stderrp_11034bdc8);
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x109f1adbc);
                    (*pcVar2)();
                  }
                  plVar12[6] = *(long *)(plVar12[7] + 0x10);
                }
              }
              if (plVar16 == (long *)0x0) goto LAB_109f1ad2c;
              plVar11 = (long *)*plVar16;
              plVar10 = (long *)0x0;
              plVar12 = plVar16;
            } while (plVar11 == (long *)0x0);
          } while( true );
        }
LAB_109f1ad2c:
        FUN_109ecc434();
      } while (lVar3 != 0);
      if (!bVar17) goto LAB_109f1ad4c;
      uVar14 = 1;
      uVar7 = 3;
    }
    *(uint *)(lVar13 + 0x84) = *(uint *)(lVar13 + 0x84) & uVar7;
  }
  plVar15 = (long *)*plVar15;
  plVar11 = (long *)*plVar15;
  while( true ) {
    if (plVar11 == (long *)0x0) goto LAB_109f1ad80;
    lVar13 = plVar15[6];
    if (lVar13 != 0) break;
    plVar15 = plVar11;
    plVar11 = (long *)*plVar11;
  }
  goto LAB_109f1ab08;
}



/* Entry: 109f1adbc; end: 109f1ae3b;  */

undefined8 FUN_109f1adbc(long param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x20) >> 0x1d & 1) == 0) {
    return 0;
  }
  if ((param_2 & *(uint *)(param_1 + 0x20) & 0x1fffff) == 0) {
    return 0;
  }
  if (param_3 != 0) {
    lVar1 = param_1;
    (**(code **)(param_3 + 0x10))(param_1);
    FUN_109f66ba8(param_3,lVar1,param_1);
    if (param_3 != 0) {
      return 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_109eca28c();
  if (*(long *)(param_1 + 0x10) == lVar1) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return 1;
}



/* Entry: 109f1ae3c; end: 109f1b0ab;  */

undefined8 FUN_109f1ae3c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar12 = *(long **)(param_1 + 0x178);
  plVar8 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar14 = plVar12[6];
    if (lVar14 != 0) break;
    plVar12 = plVar8;
    plVar8 = (long *)*plVar8;
  }
  uVar13 = 0;
  do {
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    lStack_70 = *(long *)(*(long *)(lVar14 + 0x20) + 0x18);
    uStack_78 = 0;
    lVar10 = *(long *)(lVar14 + 0x30);
    if (lVar10 == 0) {
LAB_109f1b054:
      uVar7 = 0xfffffff7;
    }
    else {
      lVar2 = lVar10;
      lStack_68 = lVar14;
      FUN_109ecc434();
      bVar15 = false;
      do {
        lVar3 = lVar2;
        plVar16 = *(long **)(lVar10 + 0x20);
        plVar8 = (long *)*plVar16;
        if (plVar8 != (long *)0x0) {
          do {
            plVar9 = (long *)0x0;
            plVar11 = plVar16;
            if (*plVar8 != 0) {
              plVar9 = plVar8;
            }
            do {
              plVar16 = plVar9;
              if ((int)plVar11[3] == 0) {
                iVar1 = (int)plVar11[5];
                bVar6 = 0;
                if (iVar1 < 0x1ac) {
                  if (0x161 < iVar1) {
                    if (iVar1 == 0x162) {
                      lVar10 = 0;
                    }
                    else {
                      if (iVar1 != 0x164) goto LAB_109f1b01c;
                      lVar10 = 2;
                    }
                    goto LAB_109f1af84;
                  }
                  if (iVar1 == 0x15c) {
                    lVar10 = 4;
                    goto LAB_109f1af84;
                  }
                  if (iVar1 == 0x15e) {
                    lVar10 = 6;
                    goto LAB_109f1af84;
                  }
                }
                else {
                  if (iVar1 < 0x1b0) {
                    if (iVar1 == 0x1ac) {
                      lVar10 = 5;
                    }
                    else {
                      if (iVar1 != 0x1af) goto LAB_109f1b01c;
                      lVar10 = 7;
                    }
                  }
                  else if (iVar1 == 0x1b3) {
                    lVar10 = 3;
                  }
                  else {
                    if (iVar1 != 0x1b0) goto LAB_109f1b01c;
                    lVar10 = 1;
                  }
LAB_109f1af84:
                  if ((*(uint *)(*(long *)(lStack_70 + 0x28) + 0xcc) >> lVar10 & 1) == 0) {
                    uStack_88 = 2;
                    puVar4 = &uStack_88;
                    plStack_80 = plVar11;
                    func_0x000109ece464(puVar4,plVar11,0);
                    puVar5 = &uStack_88;
                    (*(code *)(&PTR_FUN_110b784f8)[lVar10])(puVar5,puVar4);
                    plVar8 = plVar11 + 6;
                    if ((long *)plVar11[8] + -1 != plVar8) {
                      plVar9 = (long *)plVar11[8];
                      do {
                        lVar10 = *plVar9;
                        plVar11 = (long *)plVar9[1];
                        *(long **)(lVar10 + 8) = plVar11;
                        *plVar11 = lVar10;
                        plVar9[1] = (long)(puVar5 + 1);
                        plVar9[2] = (long)puVar5;
                        *plVar9 = 0;
                        lVar10 = puVar5[1];
                        *plVar9 = lVar10;
                        *(long **)(lVar10 + 8) = plVar9;
                        puVar5[1] = plVar9;
                        plVar9 = plVar11;
                      } while (plVar11 + -1 != plVar8);
                    }
                    FUN_109ecb9c0(*plVar8);
                    bVar6 = 1;
                  }
                  else {
                    bVar6 = 0;
                  }
                }
LAB_109f1b01c:
                bVar15 = (bool)(bVar15 | bVar6);
              }
              if (plVar16 == (long *)0x0) goto LAB_109f1b038;
              plVar8 = (long *)*plVar16;
              plVar9 = (long *)0x0;
              plVar11 = plVar16;
            } while (plVar8 == (long *)0x0);
          } while( true );
        }
LAB_109f1b038:
        lVar2 = lVar3;
        FUN_109ecc434();
        lVar10 = lVar3;
      } while (lVar3 != 0);
      if (!bVar15) goto LAB_109f1b054;
      uVar13 = 1;
      uVar7 = 3;
    }
    *(uint *)(lVar14 + 0x84) = *(uint *)(lVar14 + 0x84) & uVar7;
    plVar12 = (long *)*plVar12;
    plVar8 = (long *)*plVar12;
    while( true ) {
      if (plVar8 == (long *)0x0) {
        return uVar13;
      }
      lVar14 = plVar12[6];
      if (lVar14 != 0) break;
      plVar12 = plVar8;
      plVar8 = (long *)*plVar8;
    }
  } while( true );
}



/* Entry: 109f1b0ac; end: 109f1b1db;  */

long FUN_109f1b0ac(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  
  lVar12 = param_2;
  if (*(char *)(param_2 + 0x1c) != '\x01') {
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x154);
    lVar12 = lVar2 + 0x30;
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar2 + 0x2c) = uVar1;
    *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(long *)(lVar2 + 0x68) = param_2;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar2);
    *param_1 = 3;
    param_1[1] = lVar2;
  }
  lVar3 = param_1[3];
  FUN_109ecaef8(lVar3,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar3 + 0x2c) = uVar1;
  *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(long *)(lVar3 + 0x68) = param_2;
  *(undefined1 *)(lVar3 + 0x70) = 1;
  *(undefined8 *)(lVar3 + 0x71) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x163);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(long *)(lVar2 + 0x68) = lVar12;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(long *)(lVar2 + 0x98) = lVar3 + 0x30;
  lVar12 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar4 = (&UNK_110b78541)[lVar12];
  if (bVar4 == 0) {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
    if ((&UNK_110b78540)[lVar12] == 0) {
      bVar4 = 0;
      uVar5 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar12) & 0x79) != 0) {
        uVar5 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar4 = 0;
    plVar8 = (long *)(lVar2 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar12;
    uVar9 = uVar7;
    do {
      if ((*pcVar10 == '\0') && (bVar4 <= *(byte *)(*plVar8 + 0x1c))) {
        bVar4 = *(byte *)(*plVar8 + 0x1c);
      }
      plVar8 = plVar8 + 6;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
  }
  uVar6 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
  if (uVar6 == 0) {
    if ((int)uVar7 == 0) {
      uVar5 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar8 = (long *)(lVar2 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar12);
    uVar9 = uVar7;
    uVar5 = 0;
    do {
      uVar6 = (uint)*(byte *)(*plVar8 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar9 = uVar9 - 1;
      plVar8 = plVar8 + 6;
      puVar11 = puVar11 + 1;
      uVar5 = uVar6;
    } while (uVar9 != 0);
  }
  else {
    uVar5 = uVar6;
    if ((int)uVar7 == 0) goto LAB_109ece0a8;
  }
  uVar9 = 0;
  lVar12 = lVar2 + 0x70;
  do {
    lVar3 = *(long *)(lVar2 + uVar9 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar3 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar12 + uVar13) = *(char *)(lVar3 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar9 = uVar9 + 1;
    lVar12 = lVar12 + 0x30;
  } while (uVar9 != uVar7);
  uVar5 = 0x20;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar4,uVar5);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f1b1dc; end: 109f1b233;  */

long FUN_109f1b1dc(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar3 = param_1;
  FUN_109ece168(param_1,0x1b1,param_2);
  puVar4 = param_1;
  FUN_109ece168(param_1,0x1b2,param_2);
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x1c5);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 **)(lVar2 + 0x68) = puVar3;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 **)(lVar2 + 0x98) = puVar4;
  lVar13 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar5 = (&UNK_110b78541)[lVar13];
  if (bVar5 == 0) {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
    if ((&UNK_110b78540)[lVar13] == 0) {
      bVar5 = 0;
      uVar6 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar13) & 0x79) != 0) {
        uVar6 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar5 = 0;
    plVar9 = (long *)(lVar2 + 0x68);
    pcVar11 = &UNK_110b78548 + lVar13;
    uVar10 = uVar8;
    do {
      if ((*pcVar11 == '\0') && (bVar5 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar5 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar11 + 1;
    } while (uVar10 != 0);
  }
  else {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar8 == 0) {
      uVar6 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar2 + 0x68);
    puVar12 = (uint *)(&UNK_110b78558 + lVar13);
    uVar10 = uVar8;
    uVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar12 & 0x79) != 0 || uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 6;
      puVar12 = puVar12 + 1;
      uVar6 = uVar7;
    } while (uVar10 != 0);
  }
  else {
    uVar6 = uVar7;
    if ((int)uVar8 == 0) goto LAB_109ece0a8;
  }
  uVar10 = 0;
  lVar13 = lVar2 + 0x70;
  do {
    lVar14 = *(long *)(lVar2 + uVar10 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar13 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar10 = uVar10 + 1;
    lVar13 = lVar13 + 0x30;
  } while (uVar10 != uVar8);
  uVar6 = 0x20;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar5,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f1b234; end: 109f1b653;  */

long FUN_109f1b234(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar4 = param_2;
  if (*(char *)(param_2 + 0x1c) != '\x01') {
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x154);
    lVar4 = lVar2 + 0x30;
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar2 + 0x2c) = uVar1;
    *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(long *)(lVar2 + 0x68) = param_2;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar2);
    *param_1 = 3;
    param_1[1] = lVar2;
  }
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(long *)(lVar2 + 0x68) = param_2;
  *(undefined1 *)(lVar2 + 0x70) = 1;
  *(undefined8 *)(lVar2 + 0x71) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  puVar3 = param_1;
  FUN_109ece1b0(param_1,0x15d,lVar4,lVar2 + 0x30);
  lVar4 = param_1[3];
  FUN_109ecaef8(lVar4,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar1;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(long *)(lVar4 + 0x68) = param_2;
  *(undefined1 *)(lVar4 + 0x70) = 2;
  *(undefined8 *)(lVar4 + 0x71) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(long *)(lVar2 + 0x68) = param_2;
  *(undefined1 *)(lVar2 + 0x70) = 3;
  *(undefined8 *)(lVar2 + 0x71) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  puVar5 = param_1;
  FUN_109ece1b0(param_1,0x15d,lVar4 + 0x30,lVar2 + 0x30);
  lVar4 = param_1[3];
  FUN_109ecaef8(lVar4,0x163);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 **)(lVar4 + 0x68) = puVar3;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 **)(lVar4 + 0x98) = puVar5;
  lVar2 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar1;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar6 = (&UNK_110b78541)[lVar2];
  if (bVar6 == 0) {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar2];
    if ((&UNK_110b78540)[lVar2] == 0) {
      bVar6 = 0;
      uVar7 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar2) & 0x79) != 0) {
        uVar7 = *(uint *)(&UNK_110b78544 + lVar2) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar6 = 0;
    plVar10 = (long *)(lVar4 + 0x68);
    pcVar12 = &UNK_110b78548 + lVar2;
    uVar11 = uVar9;
    do {
      if ((*pcVar12 == '\0') && (bVar6 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar6 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar2];
  }
  uVar8 = *(uint *)(&UNK_110b78544 + lVar2) & 0x79;
  if (uVar8 == 0) {
    if ((int)uVar9 == 0) {
      uVar7 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = (long *)(lVar4 + 0x68);
    puVar13 = (uint *)(&UNK_110b78558 + lVar2);
    uVar11 = uVar9;
    uVar7 = 0;
    do {
      uVar8 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar7 != 0) {
        uVar8 = uVar7;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar13 = puVar13 + 1;
      uVar7 = uVar8;
    } while (uVar11 != 0);
  }
  else {
    uVar7 = uVar8;
    if ((int)uVar9 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  lVar2 = lVar4 + 0x70;
  do {
    lVar14 = *(long *)(lVar4 + uVar11 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar2 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar11 = uVar11 + 1;
    lVar2 = lVar2 + 0x30;
  } while (uVar11 != uVar9);
  uVar7 = 0x20;
  if (uVar8 != 0) {
    uVar7 = uVar8;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar4,lVar4 + 0x30,bVar6,uVar7);
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return lVar4 + 0x30;
}



/* Entry: 109f1b654; end: 109f1b6ab;  */

long FUN_109f1b654(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar3 = param_1;
  FUN_109ece168(param_1,0x1ad,param_2);
  puVar4 = param_1;
  FUN_109ece168(param_1,0x1ae,param_2);
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x1c5);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 **)(lVar2 + 0x68) = puVar3;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 **)(lVar2 + 0x98) = puVar4;
  lVar13 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar5 = (&UNK_110b78541)[lVar13];
  if (bVar5 == 0) {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
    if ((&UNK_110b78540)[lVar13] == 0) {
      bVar5 = 0;
      uVar6 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar13) & 0x79) != 0) {
        uVar6 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar5 = 0;
    plVar9 = (long *)(lVar2 + 0x68);
    pcVar11 = &UNK_110b78548 + lVar13;
    uVar10 = uVar8;
    do {
      if ((*pcVar11 == '\0') && (bVar5 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar5 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar11 + 1;
    } while (uVar10 != 0);
  }
  else {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar8 == 0) {
      uVar6 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar2 + 0x68);
    puVar12 = (uint *)(&UNK_110b78558 + lVar13);
    uVar10 = uVar8;
    uVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar12 & 0x79) != 0 || uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 6;
      puVar12 = puVar12 + 1;
      uVar6 = uVar7;
    } while (uVar10 != 0);
  }
  else {
    uVar6 = uVar7;
    if ((int)uVar8 == 0) goto LAB_109ece0a8;
  }
  uVar10 = 0;
  lVar13 = lVar2 + 0x70;
  do {
    lVar14 = *(long *)(lVar2 + uVar10 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar13 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar10 = uVar10 + 1;
    lVar13 = lVar13 + 0x30;
  } while (uVar10 != uVar8);
  uVar6 = 0x20;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar5,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f1b6ac; end: 109f1c187;  */

long FUN_109f1b6ac(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  uint *puVar17;
  ulong uVar18;
  
  lVar3 = param_1[3];
  if (*(char *)(*(long *)(lVar3 + 0x28) + 0x7b) == '\x01') {
    puVar9 = param_2;
    if (*(char *)((long)param_2 + 0x1c) != '\x01') {
      FUN_109ecaef8(lVar3,0x154);
      puVar9 = (undefined8 *)(lVar3 + 0x30);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar3 + 0x2c) = uVar1;
      *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 **)(lVar3 + 0x68) = param_2;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar3);
      *param_1 = 3;
      param_1[1] = lVar3;
      lVar3 = param_1[3];
    }
    FUN_109ecaef8(lVar3,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar3 + 0x2c) = uVar1;
    *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = param_2;
    *(undefined1 *)(lVar3 + 0x70) = 1;
    *(undefined8 *)(lVar3 + 0x71) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar3);
    *param_1 = 3;
    param_1[1] = lVar3;
    lVar4 = param_1[3];
    FUN_109ecaef8(lVar4,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar4 + 0x2c) = uVar1;
    *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 **)(lVar4 + 0x68) = param_2;
    *(undefined1 *)(lVar4 + 0x70) = 2;
    *(undefined8 *)(lVar4 + 0x71) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar4);
    *param_1 = 3;
    param_1[1] = lVar4;
    lVar5 = param_1[3];
    FUN_109ecaef8(lVar5,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar5 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar5 + 0x2c) = uVar1;
    *(ushort *)(lVar5 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 **)(lVar5 + 0x68) = param_2;
    *(undefined1 *)(lVar5 + 0x70) = 3;
    *(undefined8 *)(lVar5 + 0x71) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar5);
    *param_1 = 3;
    param_1[1] = lVar5;
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x15f);
    if (lVar2 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 **)(lVar2 + 0x68) = puVar9;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(long *)(lVar2 + 0x98) = lVar3 + 0x30;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(long *)(lVar2 + 200) = lVar4 + 0x30;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(long *)(lVar2 + 0xf8) = lVar5 + 0x30;
  }
  else {
    puVar9 = param_2;
    if (*(char *)((long)param_2 + 0x1d) != ' ') {
      puVar9 = param_1;
      FUN_109ece168(param_1,0x184,param_2);
      lVar3 = param_1[3];
    }
    puVar8 = puVar9;
    if (*(char *)((long)puVar9 + 0x1c) != '\x01') {
      FUN_109ecaef8(lVar3,0x154);
      puVar8 = (undefined8 *)(lVar3 + 0x30);
      FUN_109ecb048();
      uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
      *(ushort *)(lVar3 + 0x2c) = uVar1;
      *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 **)(lVar3 + 0x68) = puVar9;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      FUN_109ecb4f0(*param_1,param_1[1],lVar3);
      *param_1 = 3;
      param_1[1] = lVar3;
      lVar3 = param_1[3];
    }
    FUN_109ecaef8(lVar3,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar3 + 0x2c) = uVar1;
    *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = puVar9;
    *(undefined1 *)(lVar3 + 0x70) = 1;
    *(undefined8 *)(lVar3 + 0x71) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar3);
    *param_1 = 3;
    param_1[1] = lVar3;
    puVar6 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar6,0x50,8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    *(undefined4 *)(puVar6 + 3) = 5;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_109ecb048(puVar6,puVar6 + 5,1,0x20);
    puVar6[9] = 8;
    FUN_109ecb4f0(*param_1,param_1[1],puVar6);
    *param_1 = 3;
    param_1[1] = puVar6;
    puVar7 = param_1;
    FUN_109ece1b0(param_1,0x14d,lVar3 + 0x30,puVar6 + 5);
    puVar6 = param_1;
    FUN_109ece1b0(param_1,0x14a,puVar8,puVar7);
    lVar3 = param_1[3];
    FUN_109ecaef8(lVar3,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar3 + 0x2c) = uVar1;
    *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = puVar9;
    *(undefined1 *)(lVar3 + 0x70) = 2;
    *(undefined8 *)(lVar3 + 0x71) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar3);
    *param_1 = 3;
    param_1[1] = lVar3;
    puVar8 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar8,0x50,8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
    }
    *(undefined4 *)(puVar8 + 3) = 5;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109ecb048(puVar8,puVar8 + 5,1,0x20);
    puVar8[9] = 0x10;
    FUN_109ecb4f0(*param_1,param_1[1],puVar8);
    *param_1 = 3;
    param_1[1] = puVar8;
    puVar7 = param_1;
    FUN_109ece1b0(param_1,0x14d,lVar3 + 0x30,puVar8 + 5);
    lVar3 = param_1[3];
    FUN_109ecaef8(lVar3,0x154);
    FUN_109ecb048();
    uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(lVar3 + 0x2c) = uVar1;
    *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 **)(lVar3 + 0x68) = puVar9;
    *(undefined1 *)(lVar3 + 0x70) = 3;
    *(undefined8 *)(lVar3 + 0x71) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar3);
    *param_1 = 3;
    param_1[1] = lVar3;
    puVar9 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar9,0x50,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    *(undefined4 *)(puVar9 + 3) = 5;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_109ecb048(puVar9,puVar9 + 5,1,0x20);
    puVar9[9] = 0x18;
    FUN_109ecb4f0(*param_1,param_1[1],puVar9);
    *param_1 = 3;
    param_1[1] = puVar9;
    puVar8 = param_1;
    FUN_109ece1b0(param_1,0x14d,lVar3 + 0x30,puVar9 + 5);
    puVar9 = param_1;
    FUN_109ece1b0(param_1,0x14a,puVar7,puVar8);
    lVar2 = param_1[3];
    FUN_109ecaef8(lVar2,0x14a);
    if (lVar2 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 **)(lVar2 + 0x68) = puVar6;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 **)(lVar2 + 0x98) = puVar9;
  }
  lVar3 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar10 = (&UNK_110b78541)[lVar3];
  if (bVar10 == 0) {
    uVar13 = (ulong)(byte)(&UNK_110b78540)[lVar3];
    if ((&UNK_110b78540)[lVar3] == 0) {
      bVar10 = 0;
      uVar11 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar3) & 0x79) != 0) {
        uVar11 = *(uint *)(&UNK_110b78544 + lVar3) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar10 = 0;
    plVar14 = (long *)(lVar2 + 0x68);
    pcVar16 = &UNK_110b78548 + lVar3;
    uVar15 = uVar13;
    do {
      if ((*pcVar16 == '\0') && (bVar10 <= *(byte *)(*plVar14 + 0x1c))) {
        bVar10 = *(byte *)(*plVar14 + 0x1c);
      }
      plVar14 = plVar14 + 6;
      uVar15 = uVar15 - 1;
      pcVar16 = pcVar16 + 1;
    } while (uVar15 != 0);
  }
  else {
    uVar13 = (ulong)(byte)(&UNK_110b78540)[lVar3];
  }
  uVar12 = *(uint *)(&UNK_110b78544 + lVar3) & 0x79;
  if (uVar12 == 0) {
    if ((int)uVar13 == 0) {
      uVar11 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar14 = (long *)(lVar2 + 0x68);
    puVar17 = (uint *)(&UNK_110b78558 + lVar3);
    uVar15 = uVar13;
    uVar11 = 0;
    do {
      uVar12 = (uint)*(byte *)(*plVar14 + 0x1d);
      if ((*puVar17 & 0x79) != 0 || uVar11 != 0) {
        uVar12 = uVar11;
      }
      uVar15 = uVar15 - 1;
      plVar14 = plVar14 + 6;
      puVar17 = puVar17 + 1;
      uVar11 = uVar12;
    } while (uVar15 != 0);
  }
  else {
    uVar11 = uVar12;
    if ((int)uVar13 == 0) goto LAB_109ece0a8;
  }
  uVar15 = 0;
  lVar3 = lVar2 + 0x70;
  do {
    lVar4 = *(long *)(lVar2 + uVar15 * 0x30 + 0x68);
    uVar18 = (ulong)*(byte *)(lVar4 + 0x1c);
    if (uVar18 < 0x10) {
      do {
        *(char *)(lVar3 + uVar18) = *(char *)(lVar4 + 0x1c) + -1;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x10);
    }
    uVar15 = uVar15 + 1;
    lVar3 = lVar3 + 0x30;
  } while (uVar15 != uVar13);
  uVar11 = 0x20;
  if (uVar12 != 0) {
    uVar11 = uVar12;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar10,uVar11);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109f1c188; end: 109f1c90f;  */

int FUN_109f1c188(long param_1,uint param_2,long param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plStack_98;
  
  if ((param_2 != 0) || (param_3 != 0)) {
    plStack_98 = *(long **)(param_1 + 0x178);
    for (plVar15 = (long *)**(long **)(param_1 + 0x178); plVar15 != (long *)0x0;
        plVar15 = (long *)*plVar15) {
      lVar11 = plStack_98[6];
      if (lVar11 != 0) {
        iVar10 = 0;
        lVar13 = 0;
        do {
          lVar3 = *(long *)(lVar11 + 0x30);
          while (lVar3 != 0) {
            plVar15 = *(long **)(lVar3 + 0x20);
            plVar7 = (long *)*plVar15;
            if (plVar7 != (long *)0x0) {
              puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x20) + 0x18);
              plVar2 = (long *)0x0;
              if (*plVar7 != 0) {
                plVar2 = plVar7;
              }
              while( true ) {
                plVar7 = plVar2;
                if (((int)plVar15[3] == 4) && ((int)plVar15[5] == 0x167)) {
                  if (param_2 == 0) {
                    if (lVar13 == 0) {
                      lVar13 = param_1;
                      func_0x000109eca958(param_1,&DAT_10e05d928,&UNK_10f60d7ff,param_3);
                    }
                    puVar4 = (undefined8 *)*puVar14;
                    FUN_109f6600c(puVar4,0xa0,8);
                    if (puVar4 != (undefined8 *)0x0) {
                      puVar4[0x11] = 0;
                      puVar4[0x10] = 0;
                      puVar4[0x13] = 0;
                      puVar4[0x12] = 0;
                      puVar4[0xd] = 0;
                      puVar4[0xc] = 0;
                      puVar4[0xf] = 0;
                      puVar4[0xe] = 0;
                      puVar4[9] = 0;
                      puVar4[8] = 0;
                      puVar4[0xb] = 0;
                      puVar4[10] = 0;
                      puVar4[5] = 0;
                      puVar4[4] = 0;
                      puVar4[7] = 0;
                      puVar4[6] = 0;
                      puVar4[1] = 0;
                      *puVar4 = 0;
                      puVar4[3] = 0;
                      puVar4[2] = 0;
                    }
                    *(undefined4 *)(puVar4 + 3) = 1;
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    *puVar4 = 0;
                    *(undefined4 *)(puVar4 + 5) = 0;
                    *(uint *)((long)puVar4 + 0x2c) = *(uint *)(lVar13 + 0x20) & 0x1fffff;
                    puVar4[6] = *(undefined8 *)(lVar13 + 0x10);
                    puVar4[7] = lVar13;
                    if (*(char *)((long)puVar14 + 0x61) == '\x0e') {
                      uVar6 = *(undefined4 *)(puVar14 + 0x2c);
                    }
                    else {
                      uVar6 = 0x20;
                    }
                    FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
                    FUN_109ecb4f0(2,plVar15,puVar4);
                    uVar1 = *(undefined1 *)(puVar4[6] + 0xd);
                    puVar5 = puVar14;
                    FUN_109ecb0a8(puVar14,0x112);
                    *(undefined1 *)(puVar5 + 10) = uVar1;
                    puVar12 = puVar5 + 6;
                    FUN_109ecb048();
                    puVar5[0x10] = 0;
                    puVar5[0x11] = 0;
                    puVar5[0x12] = 0;
                    puVar5[0x13] = puVar4 + 0x10;
                    *(undefined4 *)
                     ((long)puVar5 +
                     (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(puVar5 + 5) * 0x68] * 4 + 0x50)
                         = 0;
                    FUN_109ecb4f0(3,puVar4,puVar5);
                  }
                  else {
                    puVar4 = (undefined8 *)*puVar14;
                    FUN_109f6600c(puVar4,0x50,8);
                    if (puVar4 != (undefined8 *)0x0) {
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
                    }
                    *(undefined4 *)(puVar4 + 3) = 5;
                    puVar4[1] = 0;
                    puVar4[2] = 0;
                    puVar12 = puVar4 + 5;
                    *puVar4 = 0;
                    FUN_109ecb048(puVar4,puVar12,1,0x20);
                    puVar4[9] = (ulong)param_2;
                    FUN_109ecb4f0(2,plVar15,puVar4);
                  }
                  plVar2 = plVar15 + 6;
                  if ((long *)plVar15[8] + -1 != plVar2) {
                    plVar15 = (long *)plVar15[8];
                    do {
                      lVar9 = *plVar15;
                      plVar8 = (long *)plVar15[1];
                      *(long **)(lVar9 + 8) = plVar8;
                      *plVar8 = lVar9;
                      plVar15[1] = (long)(puVar12 + 1);
                      plVar15[2] = (long)puVar12;
                      *plVar15 = 0;
                      lVar9 = puVar12[1];
                      *plVar15 = lVar9;
                      *(long **)(lVar9 + 8) = plVar15;
                      puVar12[1] = plVar15;
                      plVar15 = plVar8;
                    } while (plVar8 + -1 != plVar2);
                  }
                  FUN_109ecb9c0(*plVar2);
                  iVar10 = 1;
                }
                if (plVar7 == (long *)0x0) break;
                plVar8 = (long *)*plVar7;
                plVar2 = (long *)0x0;
                plVar15 = plVar7;
                if ((plVar8 != (long *)0x0) && (plVar2 = (long *)0x0, *plVar8 != 0)) {
                  plVar2 = plVar8;
                }
              }
            }
            FUN_109ecc434();
          }
          if (iVar10 != 0) {
            *(uint *)(lVar11 + 0x84) = *(uint *)(lVar11 + 0x84) & 3;
          }
          plStack_98 = (long *)*plStack_98;
          plVar15 = (long *)*plStack_98;
          while( true ) {
            if (plVar15 == (long *)0x0) {
              return iVar10;
            }
            lVar11 = plStack_98[6];
            if (lVar11 != 0) break;
            plStack_98 = plVar15;
            plVar15 = (long *)*plVar15;
          }
        } while( true );
      }
      plStack_98 = plVar15;
    }
  }
  return 0;
}



/* Entry: 109f1c910; end: 109f1cb17;  */

ulong FUN_109f1c910(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    uVar7 = 0;
  }
  else if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    lVar8 = *(long *)(param_2 + 0x38);
    lVar4 = param_1;
    (**(code **)(lVar8 + 8))();
    FUN_109f64fdc(lVar8,lVar4,param_1);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_2 + 0x38);
      lVar4 = param_1;
      (**(code **)(lVar8 + 8))(param_1);
      func_0x000109f650c0(lVar8,lVar4,param_1,1);
      plVar3 = *(long **)(param_1 + 0x28);
      for (plVar6 = (long *)**(long **)(param_1 + 0x28); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        uVar5 = *(ulong *)plVar3[6];
        iVar1 = *(int *)(uVar5 + 0x18);
        if (iVar1 < 5) {
          if (iVar1 == 0) {
            uVar2 = *(uint *)(uVar5 + 0x28);
            if ((&UNK_110b78541)[(ulong)uVar2 * 0x68] == '\0') goto LAB_109f1cb10;
            uVar7 = 1;
            if ((uVar2 - 0x1c4 < 6) || (uVar2 == 0x154)) goto LAB_109f1cacc;
          }
          else if (iVar1 == 4) {
            iVar1 = *(int *)(uVar5 + 0x28);
            uVar7 = 1;
            if (iVar1 < 0x12a) {
              if (iVar1 == 0x112) {
                if ((*(byte *)(**(long **)(uVar5 + 0x98) + 0x2e) & 6) == 0) goto LAB_109f1cacc;
              }
              else if (iVar1 - 0xbbU < 4) goto LAB_109f1cacc;
            }
            else if ((iVar1 - 0x12aU < 0x3f &&
                      (1L << ((ulong)(iVar1 - 0x12aU) & 0x3f) & 0x4000000004000021U) != 0) ||
                    (iVar1 - 0x1d1U < 0x35 &&
                     (1L << ((ulong)(iVar1 - 0x1d1U) & 0x3f) & 0x12000000000001U) != 0))
            goto LAB_109f1cacc;
          }
        }
        else if (iVar1 == 8) {
          FUN_109f1c910(uVar5,param_2);
          if ((uVar5 & 1) != 0) {
LAB_109f1cb10:
            uVar7 = 1;
            goto LAB_109f1cacc;
          }
          plVar6 = (long *)*plVar3;
        }
        else if (iVar1 == 5) goto LAB_109f1cb10;
        plVar3 = plVar6;
      }
      uVar7 = 0;
LAB_109f1cacc:
      lVar8 = *(long *)(param_2 + 0x38);
      lVar4 = param_1;
      (**(code **)(lVar8 + 8))(param_1);
      FUN_109f64fdc(lVar8,lVar4,param_1);
      *(ulong *)(lVar8 + 0x10) = uVar7;
    }
    else {
      uVar7 = (ulong)(*(long *)(lVar8 + 0x10) != 0);
    }
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 109f1cb18; end: 109f1d0b7;  */

ulong FUN_109f1cb18(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long unaff_x19;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 *puStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  uint uStack_164;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  uint uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long alStack_100 [17];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x30) + 0x20),
     plVar13 != (long *)(*(long *)(param_1 + 0x30) + 0x30) && plVar13 != (long *)0x0)) {
    do {
      if (((int)plVar13[3] == 4) && ((int)plVar13[5] == 0x5f)) {
        if ((int)plVar13[0xb] != 0) {
          plVar13 = (long *)*plVar13;
          do {
            plVar12 = (long *)*plVar13;
            plVar20 = plVar13;
            while( true ) {
              plVar13 = plVar12;
              if (plVar13 == (long *)0x0) goto LAB_109f1cb90;
              if (((int)plVar20[3] == 4) && ((int)plVar20[5] == 0x5f)) break;
              plVar12 = (long *)*plVar13;
              plVar20 = plVar13;
            }
          } while ((int)plVar20[0xb] != 0);
        }
        FUN_109f204b8(param_1,3);
        FUN_109ecc7dc(param_1);
        puVar8 = (undefined8 *)0x30;
        _malloc();
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8 = puVar8 + 6;
        }
        lStack_148 = 0;
        plStack_140 = (long *)0x0;
        plStack_130 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
        uStack_138 = 0;
        uVar7 = (ulong)*(uint *)(param_1 + 0x7c) + 0x1f >> 5;
        uStack_120 = (uint)uVar7;
        puVar9 = puVar8;
        lStack_128 = param_1;
        FUN_109f658b0(puVar8,uVar7 << 2);
        unaff_x19 = param_1;
        puStack_118 = puVar9;
        FUN_109f3c2b8();
        puVar9 = puVar8;
        lStack_110 = unaff_x19;
        func_0x000109f6590c(puVar8,(ulong)*(uint *)(param_1 + 0x78) << 3);
        lVar19 = *(long *)(param_1 + 0x30);
        puStack_108 = puVar9;
        while (lVar19 != 0) {
          plVar20 = *(long **)(lVar19 + 0x20);
          plVar13 = (long *)*plVar20;
          puStack_198 = puVar8;
          lStack_190 = param_1;
          if (plVar13 != (long *)0x0) {
            do {
              plVar16 = (long *)0x0;
              plVar12 = plVar20;
              if (*plVar13 != 0) {
                plVar16 = plVar13;
              }
              do {
                plVar20 = plVar16;
                puVar8 = puStack_118;
                if ((int)plVar12[3] == 4) {
                  iVar1 = (int)plVar12[5];
                  if (iVar1 == 0x27f) {
                    plVar13 = (long *)puStack_108[*(uint *)((undefined8 *)plVar12[0x17] + 3)];
                    if (plVar13 != (long *)0x0) {
                      plVar16 = (long *)plVar12[0x13];
                      plVar17 = *(long **)plVar12[0x17];
                      uVar4 = *(uint *)((long)plVar17 +
                                       (ulong)(byte)(&UNK_110b671dd)
                                                    [(ulong)*(uint *)(plVar17 + 5) * 0x68] * 4 +
                                       0x50);
                      uVar7 = (ulong)uVar4;
                      uVar5 = *(uint *)(plVar12 + 0xb);
                      uVar14 = 0xffffffff;
                      if (uVar4 != 0x20) {
                        uVar14 = ~(-1 << (ulong)(uVar4 & 0x1f));
                      }
                      lVar10 = plVar12[2];
                      if (uVar5 != uVar14) {
                        lStack_178 = plVar12[2];
                        plStack_170 = plVar13;
                        plStack_158 = plVar16;
                        FUN_109f3c620();
                        alStack_100[0xd] = 0;
                        alStack_100[0xc] = 0;
                        alStack_100[0xf] = 0;
                        alStack_100[0xe] = 0;
                        alStack_100[9] = 0;
                        alStack_100[8] = 0;
                        alStack_100[0xb] = 0;
                        alStack_100[10] = 0;
                        alStack_100[5] = 0;
                        alStack_100[4] = 0;
                        alStack_100[7] = 0;
                        alStack_100[6] = 0;
                        alStack_100[1] = 0;
                        alStack_100[0] = 0;
                        alStack_100[3] = 0;
                        alStack_100[2] = 0;
                        lStack_148 = 2;
                        plStack_150 = plVar13;
                        lVar10 = lStack_148;
                        plVar13 = plVar12;
                        if (uVar4 != 0) {
                          uVar18 = 0;
                          plStack_160 = plStack_130;
                          uStack_164 = (byte)uStack_138 & 0xfffff007 |
                                       (uStack_138._4_2_ & 0x1ff) << 3;
                          lVar10 = 2;
                          plVar16 = plStack_158;
                          plStack_188 = plVar17;
                          lStack_180 = lVar19;
                          plStack_140 = plVar12;
                          do {
                            if ((uVar5 >> (ulong)((uint)uVar18 & 0x1f) & 1) == 0) {
                              plVar17 = plStack_150;
                              if ((uVar18 & 0xff) == 0) {
                                cVar6 = *(char *)((long)plStack_150 + 0x1c);
                                plVar21 = plStack_150;
                                goto joined_r0x000109f1cf18;
                              }
LAB_109f1cf24:
                              plVar11 = plStack_160;
                              FUN_109ecaef8(plStack_160,0x154);
                              plVar21 = plVar11 + 6;
                              FUN_109ecb048();
                              *(ushort *)((long)plVar11 + 0x2c) =
                                   *(ushort *)((long)plVar11 + 0x2c) & 0xf006 | (ushort)uStack_164;
                              plVar11[10] = 0;
                              plVar11[0xb] = 0;
                              plVar11[0xc] = 0;
                              plVar11[0xd] = (long)plVar17;
                              *(char *)(plVar11 + 0xe) = (char)uVar18;
                              *(undefined8 *)((long)plVar11 + 0x71) = 0;
                              plVar11[0xf] = 0;
                              FUN_109ecb4f0(lVar10,plVar13,plVar11);
                              lVar10 = 3;
                              plVar16 = plStack_158;
                              plVar13 = plVar11;
                            }
                            else {
                              plVar17 = plVar16;
                              if ((uVar18 & 0xff) != 0) goto LAB_109f1cf24;
                              cVar6 = *(char *)((long)plVar16 + 0x1c);
                              plVar21 = plVar16;
joined_r0x000109f1cf18:
                              plVar17 = plVar21;
                              if (cVar6 != '\x01') goto LAB_109f1cf24;
                            }
                            alStack_100[uVar18] = (long)plVar21;
                            uVar18 = uVar18 + 1;
                            plVar17 = plStack_188;
                            lVar19 = lStack_180;
                          } while (uVar7 != uVar18);
                        }
                        plStack_140 = plVar13;
                        lStack_148 = lVar10;
                        func_0x000109ecd728(uVar7);
                        plVar16 = &lStack_148;
                        FUN_109ece300(plVar16,uVar7,alStack_100);
                        plVar13 = plStack_170;
                        lVar10 = lStack_178;
                      }
                      uVar18 = (ulong)(*(int *)(lVar10 + 0x40) << 2 | 1);
                      uVar7 = uVar18;
                      (*(code *)plVar13[9])(uVar18);
                      func_0x000109f650c0(plVar13 + 8,uVar7,uVar18,plVar16);
                      FUN_109ecb9c0(plVar12);
                      plVar12 = plVar17;
                      if ((long *)plVar17[8] == plVar17 + 7) goto LAB_109f1d034;
                    }
                  }
                  else if (iVar1 == 0x19b) {
                    lVar10 = puStack_108[*(uint *)((undefined8 *)plVar12[0x13] + 3)];
                    if (lVar10 != 0) {
                      plVar16 = *(long **)plVar12[0x13];
                      FUN_109f3c620(lVar10,plVar12[2]);
                      plVar13 = plVar12 + 6;
                      if ((long *)plVar12[8] + -1 != plVar13) {
                        plVar12 = (long *)plVar12[8];
                        do {
                          lVar15 = *plVar12;
                          plVar17 = (long *)plVar12[1];
                          *(long **)(lVar15 + 8) = plVar17;
                          *plVar17 = lVar15;
                          plVar12[1] = lVar10 + 8;
                          plVar12[2] = lVar10;
                          *plVar12 = 0;
                          lVar15 = *(long *)(lVar10 + 8);
                          *plVar12 = lVar15;
                          *(long **)(lVar15 + 8) = plVar12;
                          *(long **)(lVar10 + 8) = plVar12;
                          plVar12 = plVar17;
                        } while (plVar17 + -1 != plVar13);
                      }
                      FUN_109ecb9c0(*plVar13);
                      plVar12 = plVar16;
                      if ((long *)plVar16[8] == plVar16 + 7) goto LAB_109f1d034;
                    }
                  }
                  else if (iVar1 == 0x5f) {
                    if ((long *)plVar12[8] == plVar12 + 7) {
LAB_109f1d034:
                      FUN_109ecb9c0(plVar12);
                    }
                    else if ((int)plVar12[0xb] == 0) {
                      uVar2 = *(undefined4 *)((long)plVar12 + 0x54);
                      uVar3 = *(undefined4 *)((long)plVar12 + 0x5c);
                      _bzero(puStack_118,(ulong)uStack_120 << 2);
                      for (plVar13 = (long *)plVar12[8]; plVar13 != plVar12 + 7;
                          plVar13 = (long *)plVar13[1]) {
                        uVar7 = plVar13[-1];
                        if (((uVar7 & 1) == 0) && (*(int *)(uVar7 + 0x28) - 0x27fU < 2)) {
                          uVar14 = *(uint *)(*(long *)(uVar7 + 0x10) + 0x40);
                          uVar7 = (ulong)(uVar14 >> 3) & 0x1ffffffc;
                          *(uint *)((long)puVar8 + uVar7) =
                               1 << (ulong)(uVar14 & 0x1f) | *(uint *)((long)puVar8 + uVar7);
                        }
                      }
                      lVar10 = lStack_110;
                      FUN_109f3c390(lStack_110,uVar2,uVar3,puVar8);
                      puStack_108[*(uint *)(plVar12 + 9)] = lVar10;
                    }
                  }
                }
                if (plVar20 == (long *)0x0) goto LAB_109f1d078;
                plVar13 = (long *)*plVar20;
                plVar16 = (long *)0x0;
                plVar12 = plVar20;
              } while (plVar13 == (long *)0x0);
            } while( true );
          }
LAB_109f1d078:
          FUN_109ecc3f8();
          unaff_x19 = lStack_110;
          puVar8 = puStack_198;
          param_1 = lStack_190;
        }
        FUN_109f3c7f0(unaff_x19);
        FUN_109f65a74(puVar8);
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 3;
        uVar7 = 1;
        goto LAB_109f1cba0;
      }
      plVar13 = (long *)*plVar13;
    } while (*plVar13 != 0);
  }
LAB_109f1cb90:
  uVar7 = 0;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
LAB_109f1cba0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_1a8 = FUN_109f1d0b8;
    lVar19 = uVar7 + 0x30;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f0 = *(undefined8 *)(*(long *)(uVar7 + 0x20) + 0x18);
    uStack_1f8 = 0;
    uStack_1e8 = uVar7;
    lStack_1e0 = lVar19;
    lStack_1c0 = param_1;
    lStack_1b8 = unaff_x19;
    puStack_1b0 = &stack0xfffffffffffffff0;
    FUN_109f1d138(lVar19,&uStack_208);
    uVar14 = (uint)lVar19 | (uint)uStack_1c8._1_1_;
    if ((uVar14 & 1) == 0) {
      *(uint *)(uVar7 + 0x84) = *(uint *)(uVar7 + 0x84) & 0xfffffff7;
    }
    else {
      *(undefined4 *)(uVar7 + 0x84) = 0;
      FUN_109efaa24(uVar7);
      FUN_109f443fc(uVar7);
    }
    return (ulong)(uVar14 & 1);
  }
  return uVar7;
}



/* Entry: 109f1d0b8; end: 109f1d137;  */

uint FUN_109f1d0b8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  lVar2 = param_1 + 0x30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_50 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uStack_58 = 0;
  lStack_48 = param_1;
  lStack_40 = lVar2;
  FUN_109f1d138(lVar2,&uStack_68);
  uVar1 = (uint)lVar2 | (uint)uStack_28._1_1_;
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_109efaa24(param_1);
    FUN_109f443fc(param_1);
  }
  return uVar1 & 1;
}



/* Entry: 109f1d138; end: 109f1d5ff;  */

undefined8 FUN_109f1d138(long param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *aplStack_88 [2];
  long alStack_78 [2];
  undefined8 uStack_68;
  
  uVar14 = param_2[5];
  param_2[5] = param_1;
  plVar7 = (long *)(*(long **)(param_1 + 0x18))[1];
  if (plVar7 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    plVar9 = (long *)0x0;
    if (plVar7[1] != 0) {
      plVar9 = plVar7;
    }
    plVar7 = *(long **)(param_1 + 0x18);
LAB_109f1d188:
    plVar8 = plVar9;
    if ((int)plVar7[2] == 2) {
      uVar5 = param_2[6];
      param_2[6] = plVar7;
      plVar9 = plVar7 + 4;
      FUN_109f1d138(plVar9,param_2);
      param_2[6] = uVar5;
      if ((int)plVar9 != 0) {
        func_0x000109f1d7dc(plVar7,param_2);
        uVar15 = 1;
        *(undefined1 *)(param_2 + 8) = 1;
      }
    }
    else if ((int)plVar7[2] == 1) {
      bVar1 = *(byte *)(param_2 + 8);
      *(undefined1 *)(param_2 + 8) = 0;
      plVar9 = plVar7 + 9;
      FUN_109f1d138(plVar9,param_2);
      plVar11 = plVar7 + 0xd;
      FUN_109f1d138(plVar11,param_2);
      uVar12 = (uint)plVar9;
      uVar2 = uVar12 | (uint)plVar11;
      if ((uVar2 & 1) != 0) {
        if (param_2[6] == 0) {
          if (*(char *)(param_2 + 8) == '\x01') {
            func_0x000109f1d7dc(plVar7,param_2);
          }
          else {
            if ((int)plVar7[2] == 0) {
              uVar15 = 1;
              plVar9 = plVar7;
            }
            else {
              uVar15 = 0;
              plVar9 = (long *)0x0;
              if (*(long *)*plVar7 != 0) {
                plVar9 = (long *)*plVar7;
              }
            }
            plVar10 = (long *)param_2[5];
            if ((long *)*plVar10 == plVar10 + 2) {
              plVar10 = (long *)0x0;
            }
            else {
              plVar10 = (long *)plVar10[3];
            }
            if ((int)plVar10[2] == 0) {
              uVar5 = 1;
              plVar6 = plVar10;
            }
            else {
              uVar5 = 0;
              plVar6 = (long *)0x0;
              if (*(long *)*plVar10 != 0) {
                plVar6 = (long *)*plVar10;
              }
            }
            FUN_109ef87e8(aplStack_88,uVar15,plVar9,uVar5,plVar6);
            plVar9 = aplStack_88[0];
            if ((uVar12 & (uint)plVar11) == 1) {
              for (; *plVar9 != 0; plVar9 = (long *)*plVar9) {
                FUN_109ef8c00(plVar9,uStack_68);
              }
            }
            else {
              if (uVar12 == 0) {
                plVar7 = (long *)plVar7[0xc];
              }
              else {
                plVar7 = (long *)plVar7[0x10];
              }
              if ((int)plVar7[2] == 0) {
                uVar15 = 1;
                plVar9 = plVar7;
              }
              else {
                uVar15 = 0;
                plVar9 = (long *)0x0;
                if (*(long *)*plVar7 != 0) {
                  plVar9 = (long *)*plVar7;
                }
              }
              FUN_109ef8954(aplStack_88,uVar15,plVar9);
            }
          }
        }
        uVar15 = 1;
      }
      *(byte *)(param_2 + 8) = ((byte)uVar2 | bVar1) & 1;
    }
    else if ((*(int *)(plVar7[0xb] + 0x40) == 0) && (*(long **)(param_2[4] + 0x30) != plVar7)) {
      plVar9 = (long *)param_2[5];
      if ((long *)*plVar9 == plVar9 + 2) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)plVar9[3];
      }
      if ((int)plVar9[2] == 0) {
        uVar5 = 1;
        plVar11 = plVar9;
      }
      else {
        uVar5 = 0;
        plVar11 = (long *)0x0;
        if (*(long *)*plVar9 != 0) {
          plVar11 = (long *)*plVar9;
        }
      }
      FUN_109ef87e8(aplStack_88,0,plVar7,uVar5,plVar11);
      if (aplStack_88[0] != alStack_78) {
        *(undefined1 *)((long)param_2 + 0x41) = 1;
        for (plVar7 = aplStack_88[0]; *plVar7 != 0; plVar7 = (long *)*plVar7) {
          FUN_109ef8c00(plVar7,uStack_68);
        }
      }
    }
    else if (((long *)plVar7[4] != plVar7 + 6) &&
            (((lVar3 = plVar7[7], lVar3 != 0 && (*(int *)(lVar3 + 0x18) == 6)) &&
             (*(int *)(lVar3 + 0x28) == 0)))) {
      FUN_109ecb9c0();
      lVar3 = param_2[4];
      if (*(long **)(lVar3 + 0x48) != plVar7) {
        lVar13 = param_2[7];
        if (lVar13 == 0) {
          FUN_109eca8c0(lVar3,&DAT_10e05d7a0,&UNK_10f48d1b8);
          param_2[7] = lVar3;
          lVar13 = *(long *)(param_2[4] + 0x30);
          if (*(int *)(lVar13 + 0x10) == 0) {
            uVar15 = 0;
          }
          else {
            plVar9 = (long *)(lVar13 + 8);
            lVar13 = 0;
            if (*(long *)(*plVar9 + 8) != 0) {
              lVar13 = *plVar9;
            }
            uVar15 = 1;
          }
          *param_2 = uVar15;
          param_2[1] = lVar13;
          puVar4 = *(undefined8 **)param_2[3];
          FUN_109f6600c(puVar4,0x50,8);
          if (puVar4 != (undefined8 *)0x0) {
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
          }
          *(undefined4 *)(puVar4 + 3) = 5;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          FUN_109ecb048(puVar4,puVar4 + 5,1,1);
          puVar4[9] = 0;
          FUN_109ecb4f0(*param_2,param_2[1],puVar4);
          *param_2 = 3;
          param_2[1] = puVar4;
          func_0x000109f1d680(param_2,lVar3,puVar4 + 5);
          lVar13 = param_2[7];
        }
        *param_2 = 1;
        param_2[1] = plVar7;
        puVar4 = *(undefined8 **)param_2[3];
        FUN_109f6600c(puVar4,0x50,8);
        if (puVar4 != (undefined8 *)0x0) {
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
        }
        *(undefined4 *)(puVar4 + 3) = 5;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        uVar15 = 1;
        FUN_109ecb048(puVar4,puVar4 + 5,1,1);
        puVar4[9] = 1;
        FUN_109ecb4f0(*param_2,param_2[1],puVar4);
        *param_2 = 3;
        param_2[1] = puVar4;
        func_0x000109f1d680(param_2,lVar13,puVar4 + 5);
        if (param_2[6] == 0) goto LAB_109f1d440;
        puVar4 = *(undefined8 **)param_2[3];
        FUN_109f6600c(puVar4,0x60,8);
        *(undefined4 *)(puVar4 + 3) = 6;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 5) = 2;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[9] = 0;
        FUN_109ecb4f0(*param_2,param_2[1],puVar4);
        *param_2 = 3;
        param_2[1] = puVar4;
        FUN_109ef7d10(plVar7[9],plVar7);
      }
      uVar15 = 1;
    }
LAB_109f1d440:
    if (plVar8 != (long *)0x0) {
      plVar11 = (long *)plVar8[1];
      plVar9 = (long *)0x0;
      plVar7 = plVar8;
      if ((plVar11 != (long *)0x0) && (plVar9 = (long *)0x0, plVar11[1] != 0)) {
        plVar9 = plVar11;
      }
      goto LAB_109f1d188;
    }
  }
  param_2[5] = uVar14;
  return uVar15;
}



/* Entry: 109f1d600; end: 109f1d67f;  */

uint FUN_109f1d600(ulong param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = param_1;
  FUN_109f333b4();
  uVar3 = (uint)uVar4;
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
LAB_109f1d670:
      return uVar3 & 1;
    }
    lVar2 = plVar5[6];
    if (lVar2 != 0) {
      do {
        uVar3 = (uint)lVar2;
        FUN_109f1d0b8();
        uVar3 = uVar3 | (uint)uVar4;
        uVar4 = (ulong)uVar3;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f1d670;
          lVar2 = plVar5[6];
          if (lVar2 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f1d680; end: 109f1db57;  */

void FUN_109f1d680(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0xa0,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  *(uint *)((long)puVar4 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar4[6] = *(undefined8 *)(param_2 + 0x10);
  puVar4[7] = param_2;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar6 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar6 = 0x20;
  }
  uVar7 = 1;
  FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],puVar4);
  *param_1 = 3;
  param_1[1] = puVar4;
  cVar1 = *(char *)(param_3 + 0x1c);
  lVar5 = param_1[3];
  FUN_109ecb0a8(lVar5,0x26f);
  bVar2 = *(byte *)(param_3 + 0x1c);
  *(byte *)(lVar5 + 0x50) = bVar2;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 **)(lVar5 + 0x98) = puVar4 + 0x10;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(long *)(lVar5 + 0xb8) = param_3;
  if (cVar1 == '\0') {
    uVar7 = 0xffffffff;
    if (bVar2 != 0x20) {
      uVar7 = ~(-1 << (ulong)(bVar2 & 0x1f));
    }
  }
  lVar3 = (ulong)*(uint *)(lVar5 + 0x28) * 0x68;
  *(uint *)(lVar5 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar3] * 4 + -4) = uVar7;
  *(undefined4 *)(lVar5 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar3] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar5);
  *param_1 = 3;
  param_1[1] = lVar5;
  return;
}



/* Entry: 109f1db58; end: 109f1dc03;  */

void FUN_109f1db58(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [56];
  undefined8 *puStack_78;
  undefined1 auStack_70 [56];
  undefined8 *puStack_38;
  
  uVar1 = **(undefined8 **)(param_2 + 0xb8);
  FUN_109ef9548(auStack_70,**(undefined8 **)(param_2 + 0x98),0);
  FUN_109ef9548(auStack_b0,uVar1,0);
  *param_1 = 2;
  param_1[1] = param_2;
  FUN_109f1dc04(param_1,*puStack_38,puStack_38 + 1,*puStack_78,puStack_78 + 1,
                *(undefined4 *)
                 (param_2 + (ulong)(byte)(&UNK_110b671c9)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] *
                            4 + 0x50));
  FUN_109ef9640(auStack_70);
  FUN_109ef9640(auStack_b0);
  return;
}



/* Entry: 109f1dc04; end: 109f1de0b;  */

void FUN_109f1dc04(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lStack_70;
  long lStack_68;
  
  lStack_70 = param_5;
  lStack_68 = param_3;
  if (param_3 == 0 && param_5 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    puVar4 = param_1;
    FUN_109f1dfa8(param_1,param_2,&lStack_68);
    puVar5 = param_1;
    FUN_109f1dfa8(param_1,param_4,&lStack_70);
    param_2 = puVar4;
    param_4 = puVar5;
    lVar7 = lStack_68;
    lVar8 = lStack_70;
  }
  uVar6 = param_4[6];
  if (lVar7 == 0 && lVar8 == 0) {
    uVar1 = *(undefined1 *)(uVar6 + 0xd);
    lVar7 = param_1[3];
    FUN_109ecb0a8(lVar7,0x112);
    *(undefined1 *)(lVar7 + 0x50) = uVar1;
    FUN_109ecb048();
    *(undefined8 *)(lVar7 + 0x80) = 0;
    *(undefined8 *)(lVar7 + 0x88) = 0;
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined8 **)(lVar7 + 0x98) = param_4 + 0x10;
    *(int *)(lVar7 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar7 + 0x28) * 0x68] * 4 + 0x50
            ) = (int)param_6;
    FUN_109ecb4f0(*param_1,param_1[1],lVar7);
    *param_1 = 3;
    param_1[1] = lVar7;
    bVar2 = *(byte *)(lVar7 + 0x4c);
    lVar8 = param_1[3];
    FUN_109ecb0a8(lVar8,0x26f);
    bVar3 = *(byte *)(lVar7 + 0x4c);
    *(byte *)(lVar8 + 0x50) = bVar3;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 **)(lVar8 + 0x98) = param_2 + 0x10;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(long *)(lVar8 + 0xb8) = lVar7 + 0x30;
    if (bVar2 == 0) {
      uVar10 = 0xffffffff;
      if (bVar3 != 0x20) {
        uVar10 = ~(-1 << (ulong)(bVar3 & 0x1f));
      }
    }
    else {
      uVar10 = ~(-1 << (ulong)(bVar2 & 0x1f));
    }
    lVar7 = (ulong)*(uint *)(lVar8 + 0x28) * 0x68;
    *(uint *)(lVar8 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar7] * 4 + -4) = uVar10;
    *(int *)(lVar8 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar7] * 4 + -4) = (int)param_6;
    FUN_109ecb4f0(*param_1,param_1[1],lVar8);
    *param_1 = 3;
    param_1[1] = lVar8;
  }
  else {
    FUN_109eca23c();
    if ((int)uVar6 != 0) {
      uVar9 = 0;
      do {
        puVar4 = param_1;
        FUN_109f1e224(param_1,param_2,uVar9);
        puVar5 = param_1;
        FUN_109f1e224(param_1,param_4,uVar9);
        FUN_109f1dc04(param_1,puVar4,lVar7 + 8,puVar5,lVar8 + 8,param_6);
        uVar9 = uVar9 + 1;
      } while ((uVar6 & 0xffffffff) != uVar9);
    }
  }
  return;
}



/* Entry: 109f1de0c; end: 109f1dfa7;  */

undefined8 FUN_109f1de0c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 0x20;
  plVar9 = *(long **)(param_1 + 0x178);
  plVar5 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    lVar11 = plVar9[6];
    if (lVar11 != 0) break;
    plVar9 = plVar5;
    plVar5 = (long *)*plVar5;
  }
  uVar10 = 0;
  do {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_60 = *(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x18);
    uStack_68 = 0;
    lVar7 = *(long *)(lVar11 + 0x30);
    if (lVar7 == 0) {
LAB_109f1df54:
      uVar4 = 0xfffffff7;
    }
    else {
      lVar6 = lVar7;
      lStack_58 = lVar11;
      FUN_109ecc434();
      bVar1 = false;
      do {
        lVar3 = lVar6;
        plVar12 = *(long **)(lVar7 + 0x20);
        plVar5 = (long *)*plVar12;
        if (plVar5 != (long *)0x0) {
          do {
            plVar2 = (long *)0x0;
            plVar8 = plVar12;
            if (*plVar5 != 0) {
              plVar2 = plVar5;
            }
            do {
              plVar12 = plVar2;
              if ((int)plVar8[3] == 4) {
                lVar7 = plVar8[5];
                if ((int)lVar7 == 0x54) {
                  FUN_109f1db58(&uStack_78,plVar8);
                  FUN_109ecb9c0(plVar8);
                  lVar6 = *(long *)plVar8[0x13];
                  if (*(int *)(lVar6 + 0x18) != 1) {
                    lVar6 = 0;
                  }
                  func_0x000109ef9690(lVar6);
                  lVar6 = *(long *)plVar8[0x17];
                  if (*(int *)(lVar6 + 0x18) != 1) {
                    lVar6 = 0;
                  }
                  func_0x000109ef9690(lVar6);
                  FUN_109ecbc58(plVar8);
                }
                bVar1 = (bool)(bVar1 | (int)lVar7 == 0x54);
              }
              if (plVar12 == (long *)0x0) goto LAB_109f1df38;
              plVar5 = (long *)*plVar12;
              plVar2 = (long *)0x0;
              plVar8 = plVar12;
            } while (plVar5 == (long *)0x0);
          } while( true );
        }
LAB_109f1df38:
        lVar6 = lVar3;
        FUN_109ecc434();
        lVar7 = lVar3;
      } while (lVar3 != 0);
      if (!bVar1) goto LAB_109f1df54;
      uVar10 = 1;
      uVar4 = 3;
    }
    *(uint *)(lVar11 + 0x84) = *(uint *)(lVar11 + 0x84) & uVar4;
    plVar9 = (long *)*plVar9;
    plVar5 = (long *)*plVar9;
    while( true ) {
      if (plVar5 == (long *)0x0) {
        return uVar10;
      }
      lVar11 = plVar9[6];
      if (lVar11 != 0) break;
      plVar9 = plVar5;
      plVar5 = (long *)*plVar5;
    }
  } while( true );
}



/* Entry: 109f1dfa8; end: 109f1e223;  */

undefined8 * FUN_109f1dfa8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)*param_3;
  puVar1 = *(undefined8 **)*param_3;
  while( true ) {
    puVar6 = puVar1;
    if (puVar6 == (undefined8 *)0x0) {
      *param_3 = 0;
      return param_2;
    }
    iVar2 = *(int *)(puVar6 + 5);
    if (iVar2 == 2) break;
    puVar1 = param_2 + 0x10;
    if ((undefined8 *)puVar6[10] != puVar1) {
      if (iVar2 < 4) {
        if (iVar2 == 1) {
          puVar8 = param_1;
          FUN_109ece954(param_1,puVar6[0xe],2,*(byte *)((long)param_2 + 0x9d) | 2,0);
          puVar6 = (undefined8 *)param_1[3];
          func_0x000109ecaf70(puVar6,1);
          *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
          uVar7 = param_2[6];
          func_0x000109eca118();
          puVar6[6] = uVar7;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = puVar1;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0xe] = puVar8;
        }
        else {
          puVar8 = param_1;
          FUN_109ece954(param_1,puVar6[0xe],2,*(byte *)((long)param_2 + 0x9d) | 2,0);
          puVar6 = (undefined8 *)param_1[3];
          func_0x000109ecaf70(puVar6,3);
          *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
          uVar7 = param_2[6];
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[6] = uVar7;
          puVar6[7] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[10] = puVar1;
          puVar6[0xb] = 0;
          puVar6[0xe] = puVar8;
        }
      }
      else if (iVar2 == 4) {
        uVar3 = *(uint *)(puVar6 + 0xb);
        puVar6 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar6,0xa0,8);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[0x11] = 0;
          puVar6[0x10] = 0;
          puVar6[0x13] = 0;
          puVar6[0x12] = 0;
          puVar6[0xd] = 0;
          puVar6[0xc] = 0;
          puVar6[0xf] = 0;
          puVar6[0xe] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[0xb] = 0;
          puVar6[10] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
        }
        *(undefined4 *)(puVar6 + 3) = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[10] = 0;
        uVar4 = *(undefined4 *)((long)param_2 + 0x2c);
        *(undefined4 *)(puVar6 + 5) = 4;
        *(undefined4 *)((long)puVar6 + 0x2c) = uVar4;
        puVar6[6] = *(undefined8 *)(*(long *)(param_2[6] + 0x30) + (ulong)uVar3 * 0x30);
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = puVar1;
        *(uint *)(puVar6 + 0xb) = uVar3;
      }
      else {
        uVar4 = *(undefined4 *)((long)puVar6 + 0x2c);
        uVar7 = puVar6[6];
        uVar9 = puVar6[0xb];
        uVar5 = *(undefined4 *)(puVar6 + 0xc);
        puVar6 = *(undefined8 **)param_1[3];
        FUN_109f6600c(puVar6,0xa0,8);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[0x11] = 0;
          puVar6[0x10] = 0;
          puVar6[0x13] = 0;
          puVar6[0x12] = 0;
          puVar6[0xd] = 0;
          puVar6[0xc] = 0;
          puVar6[0xf] = 0;
          puVar6[0xe] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[0xb] = 0;
          puVar6[10] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
        }
        *(undefined4 *)(puVar6 + 3) = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 5) = 5;
        *(undefined4 *)((long)puVar6 + 0x2c) = uVar4;
        puVar6[6] = uVar7;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = puVar1;
        *(undefined4 *)(puVar6 + 0xc) = uVar5;
        puVar6[0xb] = uVar9;
      }
      FUN_109ecb048();
      FUN_109ecb4f0(*param_1,param_1[1],puVar6);
      *param_1 = 3;
      param_1[1] = puVar6;
      puVar8 = (undefined8 *)*param_3;
    }
    *param_3 = puVar8 + 1;
    puVar1 = puVar8 + 1;
    puVar8 = puVar8 + 1;
    puVar1 = (undefined8 *)*puVar1;
    param_2 = puVar6;
  }
  return param_2;
}



/* Entry: 109f1e224; end: 109f1e4af;  */

long FUN_109f1e224(undefined8 *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar1 = *(byte *)(param_2 + 0x9d);
  uVar5 = (bVar1 & 0xaaaaaaaa) >> 1 | (bVar1 & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
  uVar7 = param_3;
  if (uVar5 < 5) {
    if (uVar5 == 0) {
      uVar6 = 0;
      param_3 = (ulong)(param_3 != 0);
      uVar7 = 0;
    }
    else if (uVar5 == 3) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = param_3 & 0xffff0000;
  }
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x50,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 5;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_109ecb048(puVar2,puVar2 + 5,1,bVar1);
  puVar2[9] = uVar7 & 0xff00 | uVar6 | param_3 & 0xff;
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  lVar3 = param_1[3];
  func_0x000109ecaf70(lVar3,1);
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x000109eca118();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(long *)(lVar3 + 0x50) = param_2 + 0x80;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 **)(lVar3 + 0x70) = puVar2 + 5;
  FUN_109ecb048(lVar3,lVar3 + 0x80,*(undefined1 *)(param_2 + 0x9c),*(undefined1 *)(param_2 + 0x9d));
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3;
}



/* Entry: 109f1e4b0; end: 109f1fb8b;  */

undefined8 FUN_109f1e4b0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  
  lVar7 = *(long *)(param_1[4] + 0x30);
  if (*(int *)(lVar7 + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    plVar9 = (long *)(lVar7 + 8);
    lVar7 = 0;
    if (*(long *)(*plVar9 + 8) != 0) {
      lVar7 = *plVar9;
    }
    uVar8 = 1;
  }
  *param_1 = uVar8;
  param_1[1] = lVar7;
  plVar9 = *(long **)*param_2;
  if (plVar9 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    plVar12 = (long *)*param_2;
    do {
      plVar10 = plVar9;
      if ((param_3 & 0x1fffff & *(uint *)(plVar12 + 4)) != 0) {
        plVar9 = plVar12 + 0xf;
        if (*plVar9 == 0) {
          plVar9 = plVar12 + 0x10;
          lVar7 = *plVar9;
          if (lVar7 == 0) goto LAB_109f1e7b8;
          puVar4 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar4,0xa0,8);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[0x11] = 0;
            puVar4[0x10] = 0;
            puVar4[0x13] = 0;
            puVar4[0x12] = 0;
            puVar4[0xd] = 0;
            puVar4[0xc] = 0;
            puVar4[0xf] = 0;
            puVar4[0xe] = 0;
            puVar4[9] = 0;
            puVar4[8] = 0;
            puVar4[0xb] = 0;
            puVar4[10] = 0;
            puVar4[5] = 0;
            puVar4[4] = 0;
            puVar4[7] = 0;
            puVar4[6] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
          }
          *(undefined4 *)(puVar4 + 3) = 1;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 5) = 0;
          *(uint *)((long)puVar4 + 0x2c) = *(uint *)(lVar7 + 0x20) & 0x1fffff;
          puVar4[6] = *(undefined8 *)(lVar7 + 0x10);
          puVar4[7] = lVar7;
          if (*(char *)(param_1[3] + 0x61) == '\x0e') {
            uVar6 = *(undefined4 *)(param_1[3] + 0x160);
          }
          else {
            uVar6 = 0x20;
          }
          FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
          FUN_109ecb4f0(*param_1,param_1[1],puVar4);
          *param_1 = 3;
          param_1[1] = puVar4;
          puVar5 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar5,0xa0,8);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[0x11] = 0;
            puVar5[0x10] = 0;
            puVar5[0x13] = 0;
            puVar5[0x12] = 0;
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
          }
          *(undefined4 *)(puVar5 + 3) = 1;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 5) = 0;
          *(uint *)((long)puVar5 + 0x2c) = *(uint *)(plVar12 + 4) & 0x1fffff;
          puVar5[6] = plVar12[2];
          puVar5[7] = plVar12;
          if (*(char *)(param_1[3] + 0x61) == '\x0e') {
            uVar6 = *(undefined4 *)(param_1[3] + 0x160);
          }
          else {
            uVar6 = 0x20;
          }
          FUN_109ecb048(puVar5,puVar5 + 0x10,1,uVar6);
          FUN_109ecb4f0(*param_1,param_1[1],puVar5);
          *param_1 = 3;
          param_1[1] = puVar5;
          bVar1 = *(byte *)((long)puVar4 + 0x9c);
          lVar7 = param_1[3];
          FUN_109ecb0a8(lVar7,0x26f);
          bVar2 = *(byte *)((long)puVar4 + 0x9c);
          *(byte *)(lVar7 + 0x50) = bVar2;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          *(undefined8 *)(lVar7 + 0x88) = 0;
          *(undefined8 *)(lVar7 + 0x90) = 0;
          *(undefined8 **)(lVar7 + 0x98) = puVar5 + 0x10;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          *(undefined8 *)(lVar7 + 0xa8) = 0;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
          *(undefined8 **)(lVar7 + 0xb8) = puVar4 + 0x10;
          if (bVar1 == 0) {
            uVar11 = 0xffffffff;
            if (bVar2 != 0x20) {
              uVar11 = ~(-1 << (ulong)(bVar2 & 0x1f));
            }
          }
          else {
            uVar11 = ~(-1 << (ulong)(bVar1 & 0x1f));
          }
          lVar3 = (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
          *(uint *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar3] * 4 + -4) = uVar11;
          *(undefined4 *)(lVar7 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar3] * 4 + -4) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],lVar7);
          *param_1 = 3;
          param_1[1] = lVar7;
        }
        else {
          puVar4 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar4,0xa0,8);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[0x11] = 0;
            puVar4[0x10] = 0;
            puVar4[0x13] = 0;
            puVar4[0x12] = 0;
            puVar4[0xd] = 0;
            puVar4[0xc] = 0;
            puVar4[0xf] = 0;
            puVar4[0xe] = 0;
            puVar4[9] = 0;
            puVar4[8] = 0;
            puVar4[0xb] = 0;
            puVar4[10] = 0;
            puVar4[5] = 0;
            puVar4[4] = 0;
            puVar4[7] = 0;
            puVar4[6] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
          }
          *(undefined4 *)(puVar4 + 3) = 1;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 5) = 0;
          *(uint *)((long)puVar4 + 0x2c) = *(uint *)(plVar12 + 4) & 0x1fffff;
          puVar4[6] = plVar12[2];
          puVar4[7] = plVar12;
          if (*(char *)(param_1[3] + 0x61) == '\x0e') {
            uVar6 = *(undefined4 *)(param_1[3] + 0x160);
          }
          else {
            uVar6 = 0x20;
          }
          FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
          FUN_109ecb4f0(*param_1,param_1[1],puVar4);
          *param_1 = 3;
          param_1[1] = puVar4;
          func_0x000109f1e7ec(param_1,puVar4,*plVar9);
        }
        *plVar9 = 0;
        plVar10 = (long *)*plVar12;
        uVar8 = 1;
      }
LAB_109f1e7b8:
      plVar9 = (long *)*plVar10;
      plVar12 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  return uVar8;
}



/* Entry: 109f1fb8c; end: 109f1fd3b;  */

undefined8 * FUN_109f1fb8c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar1 = param_1;
  (**(code **)(lVar3 + 8))();
  FUN_109f64fdc(lVar3,lVar1,param_1);
  if (lVar3 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar2 = uVar5;
    FUN_109eca23c(uVar5);
    func_0x000109f6590c(puVar4,(uVar2 & 0xffffffff) * 8 + 0xa0);
    *puVar4 = 0;
    puVar4[1] = uVar5;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *(undefined1 *)(puVar4 + 0x11) = 1;
    lVar3 = *(long *)(param_2 + 0x18);
    lVar1 = param_1;
    (**(code **)(lVar3 + 8))(param_1);
    func_0x000109f650c0(lVar3,lVar1,param_1,puVar4);
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
  }
  return puVar4;
}



/* Entry: 109f1fd3c; end: 109f1ff0f;  */

undefined8 * FUN_109f1fd3c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      lVar4 = *(long *)(param_2 + 0x18);
      lVar7 = lVar1;
      (**(code **)(lVar4 + 8))();
      FUN_109f64fdc(lVar4,lVar7,lVar1);
      if (lVar4 == 0) {
        uVar6 = *(ulong *)(lVar1 + 0x10);
        puVar5 = *(undefined8 **)(param_2 + 8);
        uVar2 = uVar6;
        FUN_109eca23c(uVar6);
        func_0x000109f6590c(puVar5,(uVar2 & 0xffffffff) * 8 + 0xa0);
        *puVar5 = 0;
        puVar5[1] = uVar6;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        *(undefined1 *)(puVar5 + 0x11) = 1;
        lVar4 = *(long *)(param_2 + 0x18);
        lVar7 = lVar1;
        (**(code **)(lVar4 + 8))(lVar1);
        func_0x000109f650c0(lVar4,lVar7,lVar1,puVar5);
      }
      else {
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
      }
      return puVar5;
    }
    puVar3 = (undefined8 *)**(long **)(param_1 + 0x50);
    if (*(int *)(puVar3 + 3) != 1) {
      puVar3 = (undefined8 *)0x0;
    }
    FUN_109f1fd3c(puVar3,param_2);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 != (undefined8 *)0x1) {
        if (*(int *)(param_1 + 0x28) != 1) {
          if (*(int *)(param_1 + 0x28) != 2) {
            if ((undefined8 *)puVar3[(ulong)*(uint *)(param_1 + 0x58) + 0x14] != (undefined8 *)0x0)
            {
              return (undefined8 *)puVar3[(ulong)*(uint *)(param_1 + 0x58) + 0x14];
            }
            puVar5 = puVar3;
            func_0x000109f1fc38(puVar3,*(undefined8 *)(param_1 + 0x30),
                                *(undefined1 *)(puVar3 + 0x11),*(undefined8 *)(param_2 + 8));
            puVar3[(ulong)*(uint *)(param_1 + 0x58) + 0x14] = puVar5;
            return (undefined8 *)puVar3[(ulong)*(uint *)(param_1 + 0x58) + 0x14];
          }
          if ((undefined8 *)puVar3[0x12] != (undefined8 *)0x0) {
            return (undefined8 *)puVar3[0x12];
          }
          puVar5 = puVar3;
          func_0x000109f1fc38(puVar3,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_2 + 8))
          ;
          puVar3[0x12] = puVar5;
          return puVar5;
        }
        lVar7 = puVar3[1];
        if (*(byte *)(lVar7 + 0xd) < 2) {
          if ((*(byte *)(lVar7 + 0xd) == 1) && ((*(byte *)(lVar7 + 4) & 0xf0) == 0)) {
            return puVar3;
          }
        }
        else if ((*(char *)(lVar7 + 0xe) == '\x01') && ((*(uint *)(lVar7 + 4) & 0xfc) < 0xc)) {
          return puVar3;
        }
        lVar4 = **(long **)(param_1 + 0x70);
        if (*(int *)(lVar4 + 0x18) != 5) {
          if ((undefined8 *)puVar3[0x13] != (undefined8 *)0x0) {
            return (undefined8 *)puVar3[0x13];
          }
          puVar5 = puVar3;
          func_0x000109f1fc38(puVar3,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_2 + 8))
          ;
          puVar3[0x13] = puVar5;
          return puVar5;
        }
        uVar2 = (ulong)*(byte *)(lVar4 + 0x45);
        FUN_109f1ff10(uVar2,*(undefined8 *)(lVar4 + 0x48));
        FUN_109eca23c();
        if ((uint)uVar2 < (uint)lVar7) {
          if ((undefined8 *)puVar3[(uVar2 & 0xffffffff) + 0x14] != (undefined8 *)0x0) {
            return (undefined8 *)puVar3[(uVar2 & 0xffffffff) + 0x14];
          }
          puVar5 = puVar3;
          func_0x000109f1fc38(puVar3,*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(puVar3 + 0x11),
                              *(undefined8 *)(param_2 + 8));
          puVar3[(uVar2 & 0xffffffff) + 0x14] = puVar5;
          return puVar5;
        }
      }
      puVar5 = (undefined8 *)0x1;
    }
  }
  return puVar5;
}



/* Entry: 109f1ff10; end: 109f1ff4b;  */

ulong FUN_109f1ff10(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (param_1 & 0xaaaaaaaa) >> 1 | (param_1 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar1 = param_2 & 0xffffffff;
  if (uVar3 != 5) {
    uVar1 = param_2;
  }
  uVar2 = param_2 & 0xffff;
  if (uVar3 != 4) {
    uVar2 = uVar1;
  }
  uVar1 = param_2 & 1;
  if (uVar3 != 0) {
    uVar1 = param_2 & 0xff;
  }
  if (uVar3 < 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 109f1ff4c; end: 109f2006f;  */

undefined8 FUN_109f1ff4c(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return 0;
  }
  do {
    param_2 = param_2 + 1;
    if (*(int *)(lVar3 + 0x28) != 4) {
      lVar6 = *(long *)(param_1 + 8);
      if (*(byte *)(lVar6 + 0xd) < 2) {
        if ((*(byte *)(lVar6 + 0xd) == 1) && ((*(byte *)(lVar6 + 4) & 0xf0) == 0)) {
          return 0;
        }
      }
      else if ((*(char *)(lVar6 + 0xe) == '\x01') && ((*(uint *)(lVar6 + 4) & 0xfc) < 0xc)) {
        return 0;
      }
      lVar3 = **(long **)(lVar3 + 0x70);
      if (*(int *)(lVar3 + 0x18) == 5) {
        uVar4 = (ulong)*(uint *)(lVar3 + 0x48);
        uVar5 = (*(byte *)(lVar3 + 0x45) & 0xaaaaaaaa) >> 1 |
                (*(byte *)(lVar3 + 0x45) & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
        uVar2 = uVar4 & 0xff;
        if (uVar5 != 3) {
          uVar2 = uVar4 & 0xffff;
        }
        uVar1 = uVar4 & 1;
        if (uVar5 != 0) {
          uVar1 = uVar2;
        }
        if (uVar5 < 5) {
          uVar4 = uVar1;
        }
        if (((*(long *)(param_1 + 0x98) == 0) &&
            ((uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0xa0), uVar2 == 0 ||
             (FUN_109f1ff4c(uVar2,param_2), (uVar2 & 1) == 0)))) &&
           ((uVar2 = *(ulong *)(param_1 + 0x90), uVar2 == 0 ||
            (FUN_109f1ff4c(uVar2,param_2), (uVar2 & 1) == 0)))) {
          return 0;
        }
      }
      return 1;
    }
    param_1 = *(long *)(param_1 + (ulong)*(uint *)(lVar3 + 0x58) * 8 + 0xa0);
    if (param_1 == 0) {
      return 0;
    }
    lVar3 = *param_2;
  } while (lVar3 != 0);
  return 0;
}



/* Entry: 109f20070; end: 109f202b7;  */

void FUN_109f20070(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  do {
    lVar6 = *(long *)(param_1 + 8);
    if (*(byte *)(lVar6 + 0xd) < 2) {
      if ((*(byte *)(lVar6 + 0xd) == 1) && ((*(byte *)(lVar6 + 4) & 0xf0) == 0)) goto LAB_109f2016c;
    }
    else if ((*(char *)(lVar6 + 0xe) == '\x01') && ((*(uint *)(lVar6 + 4) & 0xfc) < 0xc)) {
LAB_109f2016c:
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 == 0) {
        return;
      }
      lStack_78 = *(long *)(param_3 + 0x10);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_80 = *(undefined8 *)(*(long *)(lStack_78 + 0x20) + 0x18);
      uStack_88 = 0;
      if (*(uint *)(lVar6 + 0x20) != 0) {
        lVar11 = *(long *)(lVar6 + 8);
        lVar6 = (ulong)*(uint *)(lVar6 + 0x20) << 4;
        do {
          puVar9 = *(undefined **)(lVar11 + 8);
          if (puVar9 != (undefined *)0x0 && puVar9 != &UNK_10e47dcd0) {
            do {
              FUN_109f1db58(&uStack_98,puVar9);
              lVar6 = 0x18;
              bVar3 = true;
              do {
                bVar5 = bVar3;
                lVar6 = **(long **)(puVar9 + lVar6 + 0x80);
                if (*(int *)(lVar6 + 0x18) != 1) {
                  lVar6 = 0;
                }
                func_0x000109f1fc8c(lVar6,param_3);
                if (lVar6 != 0 && lVar6 != param_1) {
                  lVar10 = *(long *)(lVar6 + 0x78);
                  puVar4 = puVar9;
                  (**(code **)(lVar10 + 0x10))(puVar9);
                  FUN_109f66ba8(lVar10,puVar4,puVar9);
                  if (lVar10 != 0) {
                    lVar6 = *(long *)(lVar6 + 0x78);
                    *(undefined **)(lVar10 + 8) = &UNK_10e47dcd0;
                    uVar12 = *(undefined8 *)(lVar6 + 0x40);
                    *(ulong *)(lVar6 + 0x40) =
                         CONCAT44((int)((ulong)uVar12 >> 0x20) + 1,(int)uVar12 + -1);
                  }
                }
                lVar6 = 0x38;
                bVar3 = false;
              } while (bVar5);
              FUN_109ecb9c0(puVar9);
              lVar6 = lVar11;
              do {
                lVar11 = lVar6 + 0x10;
                if (lVar11 == *(long *)(*(long *)(param_1 + 0x78) + 8) +
                              (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0x20) * 0x10)
                goto LAB_109f201c0;
                puVar9 = *(undefined **)(lVar6 + 0x18);
                lVar6 = lVar11;
              } while (puVar9 == (undefined *)0x0 || puVar9 == &UNK_10e47dcd0);
            } while( true );
          }
          lVar11 = lVar11 + 0x10;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
LAB_109f201c0:
      *(undefined8 *)(param_1 + 0x78) = 0;
      return;
    }
    lVar6 = *param_2;
    if (*(int *)(lVar6 + 0x28) == 4) {
      param_1 = *(long *)(param_1 + (ulong)*(uint *)(lVar6 + 0x58) * 8 + 0xa0);
    }
    else {
      uVar7 = (ulong)*(uint *)(**(long **)(lVar6 + 0x70) + 0x48);
      uVar8 = (uint)*(byte *)(**(long **)(lVar6 + 0x70) + 0x45);
      uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
      uVar1 = uVar7 & 0xff;
      if (uVar8 != 3) {
        uVar1 = uVar7 & 0xffff;
      }
      uVar2 = uVar7 & 1;
      if (uVar8 != 0) {
        uVar2 = uVar1;
      }
      if (uVar8 < 5) {
        uVar7 = uVar2;
      }
      lVar6 = *(long *)(param_1 + uVar7 * 8 + 0xa0);
      if (lVar6 != 0) {
        FUN_109f20070(lVar6,param_2 + 1,param_3);
      }
      param_1 = *(long *)(param_1 + 0x90);
    }
    param_2 = param_2 + 1;
    if (param_1 == 0) {
      return;
    }
  } while( true );
}



/* Entry: 109f202b8; end: 109f2031f;  */

undefined8 FUN_109f202b8(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    lVar1 = *(long *)(**(long **)(param_1 + 0x50) + 0x30);
    if (*(byte *)(lVar1 + 0xd) < 2) {
      if ((*(byte *)(lVar1 + 0xd) == 1) && ((*(byte *)(lVar1 + 4) & 0xf0) == 0)) goto LAB_109f20318;
    }
    else if ((*(char *)(lVar1 + 0xe) == '\x01') && ((*(uint *)(lVar1 + 4) & 0xfc) < 0xc)) {
LAB_109f20318:
      return *(undefined8 *)(param_1 + 0x70);
    }
  }
  return 0;
}



/* Entry: 109f20320; end: 109f204b7;  */

long FUN_109f20320(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  
  iVar11 = (int)param_4;
  if ((int)param_5 + -1 == iVar11) {
    return *(long *)(param_2 + (param_4 & 0xffffffff) * 8);
  }
  uVar10 = iVar11 + ((uint)((int)param_5 - iVar11) >> 1);
  uVar20 = (ulong)uVar10;
  bVar9 = *(byte *)(param_3 + 0x1d);
  uVar12 = (bVar9 & 0xaaaaaaaa) >> 1 | (bVar9 & 0x55555555) << 1;
  uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
  uVar15 = uVar20 & 0xffff0000;
  uVar12 = (uint)LZCOUNT((uVar12 >> 4 | (uVar12 & 0xf0f0f0f) << 4) << 0x18);
  uVar13 = 0;
  if (uVar12 != 3) {
    uVar13 = uVar20;
  }
  uVar1 = (ulong)(uVar10 != 0);
  uVar3 = 0;
  if (uVar12 != 0) {
    uVar1 = uVar20;
    uVar3 = uVar13;
  }
  uVar13 = uVar20;
  uVar4 = uVar20;
  if (uVar12 < 5) {
    uVar15 = 0;
    uVar13 = uVar1;
    uVar4 = uVar3;
  }
  puVar6 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar6,0x50,8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  *(undefined4 *)(puVar6 + 3) = 5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  FUN_109ecb048(puVar6,puVar6 + 5,1,bVar9);
  puVar6[9] = uVar4 & 0xff00 | uVar15 | uVar13 & 0xff;
  FUN_109ecb4f0(*param_1,param_1[1],puVar6);
  *param_1 = 3;
  param_1[1] = puVar6;
  puVar7 = param_1;
  FUN_109ece1b0(param_1,0x12f,param_3,puVar6 + 5);
  puVar6 = param_1;
  FUN_109f20320(param_1,param_2,param_3,param_4,uVar20);
  puVar8 = param_1;
  FUN_109f20320(param_1,param_2,param_3,uVar20,param_5);
  lVar5 = param_1[3];
  FUN_109ecaef8(lVar5,0x71);
  if (lVar5 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 **)(lVar5 + 0x68) = puVar7;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 **)(lVar5 + 0x98) = puVar6;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined8 *)(lVar5 + 0xc0) = 0;
  *(undefined8 **)(lVar5 + 200) = puVar8;
  lVar18 = (ulong)*(uint *)(lVar5 + 0x28) * 0x68;
  uVar2 = *(ushort *)(lVar5 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar5 + 0x2c) = uVar2;
  *(ushort *)(lVar5 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar9 = (&UNK_110b78541)[lVar18];
  if (bVar9 == 0) {
    uVar13 = (ulong)(byte)(&UNK_110b78540)[lVar18];
    if ((&UNK_110b78540)[lVar18] == 0) {
      bVar9 = 0;
      uVar10 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar18) & 0x79) != 0) {
        uVar10 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar9 = 0;
    plVar14 = (long *)(lVar5 + 0x68);
    pcVar16 = &UNK_110b78548 + lVar18;
    uVar15 = uVar13;
    do {
      if ((*pcVar16 == '\0') && (bVar9 <= *(byte *)(*plVar14 + 0x1c))) {
        bVar9 = *(byte *)(*plVar14 + 0x1c);
      }
      plVar14 = plVar14 + 6;
      uVar15 = uVar15 - 1;
      pcVar16 = pcVar16 + 1;
    } while (uVar15 != 0);
  }
  else {
    uVar13 = (ulong)(byte)(&UNK_110b78540)[lVar18];
  }
  uVar12 = *(uint *)(&UNK_110b78544 + lVar18) & 0x79;
  if (uVar12 == 0) {
    if ((int)uVar13 == 0) {
      uVar10 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar14 = (long *)(lVar5 + 0x68);
    puVar17 = (uint *)(&UNK_110b78558 + lVar18);
    uVar15 = uVar13;
    uVar10 = 0;
    do {
      uVar12 = (uint)*(byte *)(*plVar14 + 0x1d);
      if ((*puVar17 & 0x79) != 0 || uVar10 != 0) {
        uVar12 = uVar10;
      }
      uVar15 = uVar15 - 1;
      plVar14 = plVar14 + 6;
      puVar17 = puVar17 + 1;
      uVar10 = uVar12;
    } while (uVar15 != 0);
  }
  else {
    uVar10 = uVar12;
    if ((int)uVar13 == 0) goto LAB_109ece0a8;
  }
  uVar15 = 0;
  lVar18 = lVar5 + 0x70;
  do {
    lVar19 = *(long *)(lVar5 + uVar15 * 0x30 + 0x68);
    uVar20 = (ulong)*(byte *)(lVar19 + 0x1c);
    if (uVar20 < 0x10) {
      do {
        *(char *)(lVar18 + uVar20) = *(char *)(lVar19 + 0x1c) + -1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x10);
    }
    uVar15 = uVar15 + 1;
    lVar18 = lVar18 + 0x30;
  } while (uVar15 != uVar13);
  uVar10 = 0x20;
  if (uVar12 != 0) {
    uVar10 = uVar12;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar5,lVar5 + 0x30,bVar9,uVar10);
  FUN_109ecb4f0(*param_1,param_1[1],lVar5);
  *param_1 = 3;
  param_1[1] = lVar5;
  return lVar5 + 0x30;
}



/* Entry: 109f204b8; end: 109f2057b;  */

void FUN_109f204b8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((param_2 & (uVar1 ^ 0xffffffff) & 1) != 0) {
    FUN_109ecc784(param_1);
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  uVar2 = ~uVar1;
  if (((param_2 & uVar2) >> 5 & 1) != 0) {
    FUN_109ecc8fc(param_1);
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar2 = ~uVar1;
  }
  if (((param_2 & uVar2) >> 1 & 1) != 0) {
    FUN_109efe024(param_1);
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar2 = ~uVar1;
  }
  if (((param_2 & uVar2) >> 2 & 1) != 0) {
    FUN_109f05258(param_1);
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar2 = ~uVar1;
  }
  if (((param_2 & uVar2) >> 4 & 1) != 0) {
    FUN_109f05a00(param_1,in_stack_00000000,*(int *)((ulong)&stack0x00000000 | 8) != 0);
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  *(uint *)(param_1 + 0x84) = uVar1 | param_2;
  return;
}



/* Entry: 109f2057c; end: 109f2076f;  */

void FUN_109f2057c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x178);
  do {
    plVar2 = (long *)*plVar1;
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar3 = plVar1[6];
    plVar1 = plVar2;
  } while (lVar3 == 0);
  do {
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffff7;
    plVar1 = plVar2;
    do {
      plVar2 = (long *)*plVar1;
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar3 = plVar1[6];
      plVar1 = plVar2;
    } while (lVar3 == 0);
  } while( true );
}



/* Entry: 109f20770; end: 109f2117b;  */

byte FUN_109f20770(long param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  uint3 uVar9;
  uint3 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  long *plVar25;
  uint3 uVar26;
  uint3 uVar27;
  long *plStack_170;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 auStack_110 [176];
  
  lVar5 = 0;
  lStack_150 = param_1;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  lVar6 = 0;
  lStack_148 = lVar5;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  uStack_138 = 0;
  plStack_170 = *(long **)(param_1 + 0x178);
  for (plVar11 = (long *)**(long **)(param_1 + 0x178); lStack_140 = lVar6, plVar11 != (long *)0x0;
      plVar11 = (long *)*plVar11) {
    lVar15 = plStack_170[6];
    if (lVar15 != 0) {
      bVar3 = false;
      uVar26 = 0;
      bVar1 = false;
      uVar27 = 0;
      do {
        lVar15 = *(long *)(lVar15 + 0x30);
        if (lVar15 != 0) {
          do {
            for (plVar11 = *(long **)(lVar15 + 0x20); *plVar11 != 0; plVar11 = (long *)*plVar11) {
              if ((int)plVar11[3] == 4) {
                uVar24 = *(uint *)(plVar11 + 5);
                if ((int)uVar24 < 0x97) {
                  uVar19 = uVar24 - 0x2f;
                  if (uVar19 < 0x35) {
                    if ((1L << ((ulong)uVar19 & 0x3f) & 0x3443U) == 0) {
                      if ((1L << ((ulong)uVar19 & 0x3f) & 0x18000000000000U) != 0)
                      goto LAB_109f20a14;
                    }
                    else {
                      uVar9 = (uint3)(uVar24 != 0x35 && uVar24 != 0x3b);
                      if (*(int *)((long)plVar11 +
                                  (ulong)(byte)(&UNK_110b671b7)[(ulong)uVar24 * 0x68] * 4 + 0x50) ==
                          5) {
                        bVar3 = (bool)(bVar3 | uVar24 != 0x3c);
                        uVar26 = uVar26 | uVar9;
                      }
                      else {
                        bVar1 = (bool)(bVar1 | uVar24 != 0x3c);
                        uVar27 = uVar27 | uVar9;
                      }
                    }
                  }
                }
                else if (uVar24 - 0x97 < 0xf && (1 << (ulong)(uVar24 - 0x97 & 0x1f) & 0x6843U) != 0)
                {
                  plVar25 = plVar11 + 0x13;
                  while( true ) {
                    lVar22 = *(long *)*plVar25;
                    if (*(int *)(lVar22 + 0x28) == 0) break;
                    if (*(int *)(lVar22 + 0x28) == 5) {
                      lVar22 = 0;
                      goto LAB_109f20928;
                    }
                    if (*(int *)(lVar22 + 0x18) != 1) {
                      lVar22 = 0;
                    }
                    plVar25 = (long *)(lVar22 + 0x50);
                  }
                  lVar22 = *(long *)(lVar22 + 0x38);
LAB_109f20928:
                  for (lVar13 = *(long *)(lVar22 + 0x10); (*(uint *)(lVar13 + 4) & 0xff) == 0x13;
                      lVar13 = *(long *)(lVar13 + 0x30)) {
                  }
                  uVar10 = (uint3)(uVar24 != 0x9d && uVar24 != 0xa4);
                  bVar2 = (bool)(bVar1 | uVar24 != 0xa5);
                  uVar9 = uVar27 | uVar10;
                  if ((*(uint *)(lVar13 + 4) & 0xf0000) == 0x50000) {
                    bVar3 = (bool)(bVar3 | uVar24 != 0xa5);
                    bVar2 = bVar1;
                    uVar9 = uVar27;
                    uVar26 = uVar26 | uVar10;
                  }
                  uVar27 = uVar9;
                  bVar1 = bVar2;
                  uVar19 = *(uint *)(lVar22 + 0x20) & 0x1fffff;
                  if ((uVar19 == 0x10 || uVar19 == 2) && (uVar24 != 0xa5)) {
                    lVar13 = lVar22;
                    (**(code **)(lVar6 + 0x10))(lVar22);
                    lVar12 = lVar6;
                    FUN_109f66e48(lVar6,lVar13,lVar22,0);
                    if (lVar12 != 0) {
                      *(long *)(lVar12 + 8) = lVar22;
                    }
                    uVar19 = *(uint *)(lVar22 + 0x20) & 0x1fffff;
                  }
                  if (((uVar19 == 0x10 || uVar19 == 2) && (uVar24 != 0x9d)) && (uVar24 != 0xa4))
                  goto LAB_109f20ab8;
                }
                else if ((uVar24 == 0x112) || (uVar24 == 0x26f)) {
LAB_109f20a14:
                  uVar19 = *(uint *)(*(long *)plVar11[0x13] + 0x2c);
                  if ((uVar19 & 0x100200) != 0) {
                    bVar3 = (bool)(bVar3 | uVar24 != 0x26f);
                    uVar26 = uVar26 | uVar24 != 0x112;
                    if (uVar19 == 0x200) {
                      uStack_130 = 0;
                      uStack_128 = 0;
                      uStack_120 = 0;
                      plStack_118 = (long *)plVar11[0x13];
                      FUN_109ecd2fc(auStack_110,&uStack_130);
                      lVar22 = param_1;
                      FUN_109ecd62c(param_1,auStack_110);
                      if (lVar22 == 0) {
                        for (plVar25 = *(long **)(param_1 + 8); *plVar25 != 0;
                            plVar25 = (long *)*plVar25) {
                          if ((*(byte *)((long)plVar25 + 0x21) >> 1 & 1) != 0) {
                            if (uVar24 != 0x26f) {
                              plVar14 = plVar25;
                              (**(code **)(lVar6 + 0x10))(plVar25);
                              lVar22 = lVar6;
                              FUN_109f66e48(lVar6,plVar14,plVar25,0);
                              if (lVar22 != 0) {
                                *(long **)(lVar22 + 8) = plVar25;
                              }
                              if (uVar24 == 0x112) goto LAB_109f20b68;
                            }
                            plVar14 = plVar25;
                            (**(code **)(lVar5 + 0x10))(plVar25);
                            lVar22 = lVar5;
                            FUN_109f66e48(lVar5,plVar14,plVar25,0);
                            if (lVar22 != 0) {
                              *(long **)(lVar22 + 8) = plVar25;
                            }
                          }
LAB_109f20b68:
                        }
                      }
                      else {
                        if (uVar24 != 0x26f) {
                          lVar13 = lVar22;
                          (**(code **)(lVar6 + 0x10))(lVar22);
                          lVar12 = lVar6;
                          FUN_109f66e48(lVar6,lVar13,lVar22,0);
                          if (lVar12 != 0) {
                            *(long *)(lVar12 + 8) = lVar22;
                          }
                          if (uVar24 == 0x112) goto LAB_109f20ae4;
                        }
LAB_109f20ab8:
                        lVar13 = lVar22;
                        (**(code **)(lVar5 + 0x10))(lVar22);
                        lVar12 = lVar5;
                        FUN_109f66e48(lVar5,lVar13,lVar22,0);
                        if (lVar12 != 0) {
                          *(long *)(lVar12 + 8) = lVar22;
                        }
                      }
                    }
                  }
                }
              }
LAB_109f20ae4:
            }
            FUN_109ecc434();
          } while (lVar15 != 0);
          plVar11 = (long *)*plStack_170;
        }
        plVar25 = (long *)*plVar11;
        plStack_170 = plVar11;
        while( true ) {
          plVar11 = plVar25;
          if (plVar11 == (long *)0x0) goto LAB_109f20bbc;
          lVar15 = plStack_170[6];
          if (lVar15 != 0) break;
          plVar25 = (long *)*plVar11;
          plStack_170 = plVar11;
        }
      } while( true );
    }
    plStack_170 = plVar11;
  }
  uVar27 = 0;
  bVar1 = false;
  uVar26 = 0;
  bVar3 = false;
LAB_109f20bbc:
  uStack_138 = CONCAT31(CONCAT12(bVar3,CONCAT11(bVar1,(char)uVar26)),(char)uVar27);
  if ((*param_2 & 1) != 0) {
    uVar26 = uVar26 | uVar27;
    uStack_138 = CONCAT31(uVar26,(char)uVar26);
    bVar3 = (bool)(bVar3 | bVar1);
    uStack_138 = CONCAT13(bVar3,CONCAT12(bVar3,(undefined2)uStack_138));
    bVar1 = bVar3;
    uVar27 = uVar26;
  }
  plVar11 = (long *)**(long **)(param_1 + 8);
  if (plVar11 == (long *)0x0) {
    bVar23 = 0;
  }
  else {
    bVar23 = 0;
    plVar25 = *(long **)(param_1 + 8);
    do {
      plVar14 = plVar11;
      uVar16 = plVar25[4];
      if ((uVar16 & 0x292) != 0) {
        for (lVar15 = plVar25[2]; uVar24 = *(uint *)(lVar15 + 4), (uVar24 & 0xff) == 0x13;
            lVar15 = *(long *)(lVar15 + 0x30)) {
        }
        uVar19 = (uint)uVar16 & 0x1fffff;
        if (uVar19 == 0x200) {
LAB_109f20c6c:
          uVar19 = (uint)(*(ulong *)((long)plVar25 + 0x2c) >> 0x20);
          if ((uVar19 >> 6 & 1) != 0) goto LAB_109f20c94;
          uVar20 = *(ulong *)((long)plVar25 + 0x2c) >> 0x20 & 0x1ff;
          uVar21 = uVar20;
          if ((uVar16 & 0x1fffff) == 0x200) {
            if ((uVar19 >> 4 & 1) == 0) {
LAB_109f20cb4:
              bVar2 = true;
              if (uVar26 != 0) goto LAB_109f20cbc;
LAB_109f20d00:
              uVar21 = uVar20 | 0x10;
              goto LAB_109f20d04;
            }
            if ((uVar19 >> 3 & 1) == 0) {
LAB_109f20d0c:
              if (bVar3) goto LAB_109f20d10;
LAB_109f20d48:
              uVar20 = uVar21 | 8;
            }
          }
          else {
            bVar2 = (uVar24 & 0xf0000) == 0x50000;
            if ((uVar19 >> 4 & 1) == 0) {
              if ((uVar24 & 0xf0000) == 0x50000) goto LAB_109f20cb4;
              bVar2 = false;
              if (uVar27 == 0) goto LAB_109f20d00;
LAB_109f20cbc:
              if ((uVar19 >> 1 & 1) != 0) {
                plVar11 = plVar25;
                (**(code **)(lVar5 + 0x10))(plVar25);
                lVar15 = lVar5;
                FUN_109f66ba8(lVar5,plVar11,plVar25);
                uVar21 = uVar20 | 0x10;
                if (lVar15 != 0) {
                  uVar21 = uVar20;
                }
              }
            }
LAB_109f20d04:
            uVar20 = uVar21;
            if (((uint)uVar21 >> 3 & 1) == 0) {
              if (bVar2) goto LAB_109f20d0c;
              if (!bVar1) goto LAB_109f20d48;
LAB_109f20d10:
              uVar20 = uVar21;
              if (((uint)uVar21 >> 1 & 1) != 0) {
                plVar11 = plVar25;
                (**(code **)(lVar6 + 0x10))(plVar25);
                lVar15 = lVar6;
                FUN_109f66ba8(lVar6,plVar11,plVar25);
                uVar20 = uVar21 | 8;
                if (lVar15 != 0) {
                  uVar20 = uVar21;
                }
              }
            }
          }
          uVar16 = *(ulong *)((long)plVar25 + 0x2c);
          bVar2 = (uVar16 >> 0x20 & 0x1ff) != uVar20;
          *(ulong *)((long)plVar25 + 0x2c) =
               uVar16 & 0xfffffe0000000000 | uVar16 & 0xffffffff | uVar20 << 0x20;
          plVar14 = (long *)*plVar25;
        }
        else {
          if (uVar19 == 2) {
            if (((uVar16 & 0x1fffff) == 0x10) || ((uVar24 & 0xff) == 0xf)) goto LAB_109f20c6c;
          }
          else if ((uVar16 & 0x1fffff) == 0x10) goto LAB_109f20c6c;
LAB_109f20c94:
          bVar2 = false;
        }
        bVar23 = bVar23 | bVar2;
      }
      plVar11 = (long *)*plVar14;
      plVar25 = plVar14;
    } while ((long *)*plVar14 != (long *)0x0);
  }
  plVar11 = *(long **)(param_1 + 0x178);
  plVar25 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar25 == (long *)0x0) {
      bVar18 = 0;
LAB_109f20fa0:
      func_0x000109f66a2c(lVar6,0);
      func_0x000109f66a2c(lVar5,0);
      return bVar23 | bVar18;
    }
    lVar15 = plVar11[6];
    if (lVar15 != 0) {
      bVar18 = 0;
      do {
        lVar22 = *(long *)(lVar15 + 0x30);
        if (lVar22 == 0) {
          bVar8 = 0;
        }
        else {
          uVar24 = 0;
          do {
            plVar25 = *(long **)(lVar22 + 0x20);
            for (plVar14 = (long *)**(long **)(lVar22 + 0x20); plVar14 != (long *)0x0;
                plVar14 = (long *)*plVar14) {
              if (*(int *)(plVar25 + 3) == 4) {
                uVar4 = 0;
                uVar19 = *(uint *)(plVar25 + 5);
                if ((int)uVar19 < 0x9d) {
                  if (0x3c < uVar19 || (1L << ((ulong)uVar19 & 0x3f) & 0x1820000000000000U) == 0)
                  goto LAB_109f20eb0;
                  bVar3 = *(int *)((long)plVar25 +
                                  (ulong)(byte)(&UNK_110b671b7)[(ulong)uVar19 * 0x68] * 4 + 0x50) ==
                          5;
LAB_109f20ea8:
                  uVar7 = 0;
LAB_109f20eac:
                  plVar14 = &lStack_150;
                  func_0x000109f20fe0(plVar14,plVar25,bVar3,uVar7);
                  uVar4 = (uint)plVar14;
                }
                else {
                  if (uVar19 - 0x9d < 9 && (1 << (ulong)(uVar19 - 0x9d & 0x1f) & 0x181U) != 0) {
                    puVar17 = plVar25 + 0x13;
                    do {
                      lVar12 = *(long *)*puVar17;
                      lVar13 = lVar12;
                      if (*(int *)(lVar12 + 0x18) != 1) {
                        lVar13 = 0;
                      }
                      puVar17 = (undefined8 *)(lVar13 + 0x50);
                    } while (*(int *)(lVar12 + 0x28) != 0);
                    for (lVar13 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                        (*(uint *)(lVar13 + 4) & 0xff) == 0x13; lVar13 = *(long *)(lVar13 + 0x30)) {
                    }
                    bVar3 = (*(uint *)(lVar13 + 4) & 0xf0000) == 0x50000;
                    goto LAB_109f20ea8;
                  }
                  if ((uVar19 == 0x112) || (uVar19 == 0x26f)) {
                    if (*(int *)(*(long *)plVar25[0x13] + 0x2c) == 0x200) {
                      bVar3 = true;
                      goto LAB_109f20ea8;
                    }
                    if (*(int *)(*(long *)plVar25[0x13] + 0x2c) != 0x100000) {
                      uVar4 = 0;
                      goto LAB_109f20eb0;
                    }
                    bVar3 = false;
                    uVar7 = 1;
                    goto LAB_109f20eac;
                  }
                }
LAB_109f20eb0:
                uVar24 = uVar24 | uVar4;
                plVar14 = (long *)*plVar25;
              }
              plVar25 = plVar14;
            }
            FUN_109ecc434();
          } while (lVar22 != 0);
          if ((uVar24 & 1) == 0) {
            bVar8 = 0;
          }
          else {
            *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0x17;
            bVar8 = 1;
          }
        }
        if (bVar23 != 0) {
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0x17;
        }
        bVar18 = bVar18 | bVar8;
        plVar11 = (long *)*plVar11;
        plVar25 = (long *)*plVar11;
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_109f20fa0;
          lVar15 = plVar11[6];
          if (lVar15 != 0) break;
          plVar11 = plVar25;
          plVar25 = (long *)*plVar25;
        }
      } while( true );
    }
    plVar11 = plVar25;
    plVar25 = (long *)*plVar25;
  } while( true );
}



/* Entry: 109f2117c; end: 109f21adf;  */

uint FUN_109f2117c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined1 uStack_d0;
  byte bStack_cf;
  byte bStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  ulong uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  undefined1 uStack_b9;
  byte bStack_b8;
  undefined1 uStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  undefined1 uStack_a9;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  undefined1 uStack_a4;
  byte bStack_a3;
  undefined1 uStack_a2;
  byte bStack_a1;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  byte bStack_9a;
  byte bStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  byte bStack_90;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  undefined1 uStack_8a;
  byte bStack_89;
  byte bStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  undefined1 uStack_82;
  byte bStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  byte bStack_75;
  undefined1 uStack_74;
  byte bStack_73;
  undefined1 uStack_72;
  byte bStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  undefined1 uStack_59;
  byte bStack_58;
  byte bStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  char cStack_52;
  undefined1 uStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  undefined1 uStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  byte bStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  byte bStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  uStack_d0 = 1;
  bStack_ce = puVar5[0x1e];
  bStack_cf = bStack_ce ^ 1;
  if ((bStack_ce & 1) == 0) {
    uStack_cd = (*(uint *)(puVar5 + 0xac) & 0x801) == 1;
  }
  else {
    uStack_cd = false;
  }
  uStack_cc = puVar5[0x6c];
  bStack_ba = puVar5[0x2b];
  if (bStack_ba == 1) {
    bStack_cb = puVar5[0x28];
  }
  else {
    bStack_cb = 1;
  }
  bStack_cb = bStack_cb & 1;
  bStack_ca = puVar5[0x54] ^ 1;
  bStack_c9 = puVar5[0x52] ^ 1;
  if ((puVar5[0x84] & 1) == 0) {
    if (puVar5[0x85] == '\x01') {
      bVar4 = (*(byte *)(param_1 + 0x125) & 4) == 0;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = true;
  }
  uVar3 = *(undefined4 *)(puVar5 + 0x80);
  bVar12 = (byte)uVar3;
  uVar13 = (undefined1)((uint)uVar3 >> 8);
  bVar14 = (byte)((uint)uVar3 >> 0x10);
  uVar15 = (undefined1)((uint)uVar3 >> 0x18);
  uVar16 = NEON_ext((ulong)CONCAT16(uVar15,(uint6)CONCAT14(bVar14,(uint)CONCAT12(uVar13,(ushort)
                                                  bVar12))),
                    (ulong)CONCAT16(uVar15,(uint6)CONCAT14(bVar14,(uint)CONCAT12(uVar13,(ushort)
                                                  bVar12))),6,1);
  uStack_c8 = (CONCAT17(~bVar14,CONCAT16(~bVar12,CONCAT15(~(byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT14(~(byte)uVar16,
                                                                   CONCAT13(~puVar5[0x7f],
                                                                            CONCAT12(~puVar5[0x7e],
                                                                                     CONCAT11(puVar5
                                                  [0x7d],bVar4))))))) ^ 0x100) & 0x101010101010101;
  bStack_c0 = puVar5[7];
  bStack_bf = bStack_c0 ^ 1;
  bStack_be = puVar5[8];
  bStack_bd = bStack_be ^ 1;
  bStack_bc = puVar5[9];
  bStack_bb = bStack_bc ^ 1;
  uVar1 = *(uint *)(puVar5 + 0xb0);
  uVar2 = (uint)bStack_ba | (uVar1 & 8) >> 3;
  uVar9 = uVar1 & 0x10;
  if ((uVar2 == 1) && (uVar9 != 0)) {
    uStack_b9 = (uVar1 & 0x40) == 0;
    bStack_b8 = puVar5[0x28];
    uVar9 = 1;
LAB_109f21354:
    uStack_b7 = (uVar1 & 0x40) == 0;
    bStack_b6 = (bStack_b8 ^ 1) & 1;
    bVar4 = uVar9 == 0;
    bStack_b5 = (bStack_b8 ^ 1) & bVar4;
  }
  else {
    uStack_b9 = (undefined1)uVar2;
    bStack_b8 = puVar5[0x28];
    if (((bStack_b8 & 1) != 0) || (uVar9 != 0)) goto LAB_109f21354;
    uStack_b7 = false;
    bVar4 = true;
    bStack_b6 = 1;
    bStack_b5 = 1;
  }
  bStack_b4 = puVar5[0x29];
  bStack_b3 = (bStack_b4 | (uVar1 & 0x40) != 0) & bVar4;
  uStack_b2 = puVar5[0x2a];
  uStack_b1 = puVar5[1];
  uStack_b0 = puVar5[2];
  uStack_af = puVar5[3];
  uStack_ae = puVar5[4];
  uStack_ad = puVar5[5];
  uStack_ac = puVar5[6];
  bStack_ab = puVar5[0x25];
  bStack_aa = bStack_ab ^ 1;
  uStack_a9 = puVar5[0x26];
  bStack_a7 = puVar5[0x89];
  if (bStack_a7 == 1) {
    bStack_a8 = puVar5[0x90] ^ 1;
  }
  else {
    bStack_a8 = 0;
  }
  bStack_a8 = bStack_a8 & 1;
  bStack_a6 = puVar5[0xb] ^ 1;
  bStack_a5 = puVar5[0x21] ^ 1;
  uStack_a4 = puVar5[0xb];
  bStack_a3 = puVar5[0x20] ^ 1;
  uStack_a2 = ((uint)(byte)puVar5[0x20] | uVar1 >> 0xb | 0xfffffffe) != 0xffffffff;
  if (puVar5[0x22] == '\x01') {
    bStack_a1 = puVar5[0x1e] ^ 1;
  }
  else {
    bStack_a1 = 0;
  }
  bStack_a1 = bStack_a1 & 1;
  if (puVar5[0x23] == '\x01') {
    bStack_a0 = puVar5[0x1e] ^ 1;
  }
  else {
    bStack_a0 = 0;
  }
  bStack_a0 = bStack_a0 & 1;
  bStack_9f = puVar5[0x22] ^ 1;
  bStack_9e = puVar5[0x23] ^ 1;
  uStack_9d = 1;
  if ((((puVar5[0x22] & 1) == 0) && (((byte)puVar5[0xad] >> 2 & 1) == 0)) ||
     ((puVar5[0x1e] & 1) != 0)) {
    uStack_9c = false;
  }
  else {
    uStack_9c = (puVar5[0xad] & 2) == 0;
  }
  if ((((puVar5[0x23] & 1) == 0) && (((byte)puVar5[0xad] >> 2 & 1) == 0)) ||
     ((puVar5[0x1e] & 1) != 0)) {
    uStack_9b = false;
  }
  else {
    uStack_9b = (puVar5[0xad] & 2) == 0;
  }
  uVar9 = *(uint *)(puVar5 + 0xac);
  uStack_98 = (uVar9 & 0x400) == 0;
  bStack_9a = (puVar5[0x22] ^ 1) & uStack_98;
  bStack_99 = (puVar5[0x23] ^ 1) & uStack_98;
  uStack_97 = puVar5[0x1c];
  uStack_96 = puVar5[0x1d];
  bStack_95 = puVar5[0x36] ^ 1;
  bStack_94 = puVar5[0x6e];
  bStack_93 = puVar5[0x6f];
  bStack_92 = puVar5[0x6d] ^ 1;
  bStack_91 = bStack_94 ^ 1;
  bStack_90 = bStack_93 ^ 1;
  bStack_8f = puVar5[0x70];
  bStack_8e = bStack_8f & bStack_90;
  bStack_8d = puVar5[10];
  if (((puVar5[0x84] & 1) == 0) && ((bStack_8d & 1) != 0)) {
    if (puVar5[0x85] == '\x01') {
      bStack_8d = (*(byte *)(param_1 + 0x125) & 4) == 0;
    }
    else {
      bStack_8d = 0;
    }
  }
  bStack_8d = bStack_8d & 1;
  bStack_8c = puVar5[10];
  bStack_8b = bStack_8c ^ 1;
  uStack_8a = *puVar5;
  bStack_89 = puVar5[0xc];
  bStack_88 = bStack_89 ^ 1;
  uStack_87 = puVar5[0xd];
  uStack_86 = (uVar1 & 0x4000) == 0;
  bStack_85 = puVar5[0x40] ^ 1;
  bStack_84 = puVar5[0x41] ^ 1;
  bStack_83 = puVar5[0x7b];
  uStack_82 = puVar5[0x36];
  if ((puVar5[0x37] & 1) == 0) {
    bStack_81 = puVar5[0x3f];
  }
  else {
    bStack_81 = 1;
  }
  bStack_81 = bStack_81 & 1;
  uStack_80 = puVar5[0x87];
  uStack_7f = puVar5[0x3d];
  if ((puVar5[0x3e] & 1) == 0) {
    bStack_7e = puVar5[0x3f];
  }
  else {
    bStack_7e = 1;
  }
  bStack_7e = bStack_7e & 1;
  bStack_7d = puVar5[0x3d] ^ 1;
  bStack_7c = puVar5[0x86];
  bStack_7b = puVar5[0x13] ^ 1;
  bStack_7a = puVar5[0x14] ^ 1;
  bStack_79 = puVar5[0x15] ^ 1;
  uStack_78 = puVar5[0xe];
  uStack_77 = puVar5[0x16];
  uStack_76 = puVar5[0x17];
  if ((puVar5[0x10] == '\x01') && (puVar5[0x8a] == '\x01')) {
    bStack_75 = puVar5[0x8b];
  }
  else {
    bStack_75 = 0;
  }
  bStack_75 = bStack_75 & 1;
  uStack_74 = puVar5[0x50];
  bStack_73 = puVar5[0x51] | (byte)((uVar9 & 0x40) >> 6);
  uStack_72 = puVar5[0x55];
  bStack_71 = puVar5[0x52] | (uVar9 & 0x1000040) != 0;
  uStack_70 = puVar5[0x52];
  uStack_6f = puVar5[0x53];
  bStack_6e = (byte)(uVar9 >> 0x14) & 1;
  bStack_6d = (byte)(uVar9 >> 0x15) & 1;
  bStack_6c = (byte)(uVar9 >> 10) & 1;
  bStack_6b = (byte)(uVar9 >> 5) & 1;
  bStack_67 = puVar5[0x8a];
  if (puVar5[0x10] == '\x01') {
    if ((bStack_67 & 1) == 0) {
      bStack_67 = 0;
      bStack_69 = 0;
      bStack_6a = 1;
      goto LAB_109f217e0;
    }
    if ((puVar5[0x8b] & 1) == 0) {
      bStack_6a = puVar5[0x8c] ^ 1;
    }
    else {
      bStack_6a = 0;
    }
    bStack_67 = 1;
  }
  else {
    bStack_6a = 0;
  }
  bStack_69 = 0;
  bStack_6a = bStack_6a & 1;
  if ((puVar5[0x10] == '\x01') && (bStack_67 != 0)) {
    bStack_69 = puVar5[0x8c];
    bStack_67 = 1;
  }
LAB_109f217e0:
  bStack_65 = 0;
  bStack_69 = bStack_69 & 1;
  bStack_68 = puVar5[0xf] & bStack_a7;
  bStack_66 = (bStack_a7 ^ 1) & puVar5[0xf];
  bStack_60 = puVar5[0x13] | bStack_7c;
  if ((puVar5[0x13] == 1) && ((bStack_7c & 1) == 0)) {
    bStack_60 = 0;
    bStack_65 = puVar5[0x8d] ^ 1;
  }
  bStack_65 = bStack_65 & 1;
  bStack_64 = bStack_60 & puVar5[0x13];
  bVar12 = puVar5[0x8d];
  bStack_63 = puVar5[0x13] & bVar12;
  bStack_62 = bStack_60 & puVar5[0x14];
  bStack_61 = puVar5[0x14] & bVar12;
  bStack_60 = bStack_60 & (bVar12 ^ 1);
  uStack_5f = puVar5[0x15];
  uStack_5e = puVar5[0x40];
  uStack_5d = puVar5[0x41];
  uStack_5c = puVar5[0x2f];
  bStack_5b = puVar5[0x31] & (bStack_83 ^ 1);
  bStack_5a = puVar5[0x31] & bStack_83;
  uStack_59 = puVar5[0x30];
  bStack_58 = puVar5[0x32] & (bStack_83 ^ 1);
  bStack_57 = puVar5[0x32] & bStack_83;
  uStack_56 = puVar5[0x39];
  uStack_55 = puVar5[0x3b];
  uStack_54 = puVar5[0x3a];
  uStack_53 = puVar5[0x3c];
  cStack_52 = puVar5[0x3f];
  if (cStack_52 == '\x01') {
    uStack_51 = (*(byte *)(param_1 + 0x125) & 0x10) == 0;
  }
  else {
    uStack_51 = false;
  }
  if (puVar5[0x3f] == '\x01') {
    bStack_50 = *(byte *)(param_1 + 0x125) >> 4 & 1;
  }
  else {
    bStack_50 = 0;
  }
  bStack_4f = puVar5[0x1f];
  bStack_4e = bStack_4f ^ 1;
  uStack_4d = puVar5[0x20];
  bStack_4c = (byte)(uVar1 >> 0xb) & 1;
  bStack_4b = puVar5[0x72] ^ 1;
  bStack_4a = puVar5[0x73] ^ 1;
  bStack_49 = puVar5[0x75] ^ 1;
  uStack_48 = puVar5[0x72];
  uStack_47 = puVar5[0x75];
  uStack_46 = puVar5[0x73];
  bStack_45 = (uVar9 & 0x1000040) == 0 & (puVar5[0x52] ^ 0xff);
  bStack_44 = puVar5[0x53] ^ 1;
  bStack_43 = (uVar9 & 0x100000) == 0 & (puVar5[0x53] ^ 0xff);
  uStack_42 = puVar5[0x54];
  uStack_41 = puVar5[0x91];
  uStack_40 = puVar5[0x92];
  uStack_3f = puVar5[0x2d];
  bStack_3e = puVar5[0x11] ^ 1;
  uStack_3d = puVar5[0x8e];
  uStack_3c = puVar5[0x1b];
  uStack_3b = puVar5[0xbe];
  uStack_3a = puVar5[0x90];
  bStack_39 = puVar5[0x68] ^ 1;
  plVar11 = *(long **)(param_1 + 0x178);
  plVar6 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar6 == (long *)0x0) {
      uVar9 = 0;
LAB_109f21a48:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return uVar9 & 1;
      }
      ___stack_chk_fail();
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0 || lVar8 == param_1 + 0x38) {
        return 0;
      }
      return (uint)(*(long *)(lVar8 + 8) == param_1 + 0x38);
    }
    param_1 = plVar11[6];
    if (param_1 != 0) {
      func_0x000109f448cc(param_1,&uStack_d0,&PTR_DAT_110b83f48);
      plVar11 = (long *)*plVar11;
      plVar6 = (long *)*plVar11;
      uVar10 = param_1;
      while (uVar9 = (uint)uVar10, plVar6 != (long *)0x0) {
        while (plVar7 = plVar6, param_1 = plVar11[6], param_1 == 0) {
          plVar6 = (long *)*plVar7;
          plVar11 = plVar7;
          if (plVar6 == (long *)0x0) goto LAB_109f21a48;
        }
        func_0x000109f448cc(param_1,&uStack_d0,&PTR_DAT_110b83f48);
        uVar10 = (ulong)(uVar9 | (uint)param_1);
        plVar11 = (long *)*plVar11;
        plVar6 = (long *)*plVar11;
      }
      goto LAB_109f21a48;
    }
    plVar11 = plVar6;
    plVar6 = (long *)*plVar6;
  } while( true );
}



/* Entry: 109f21ae0; end: 109f21c17;  */

bool FUN_109f21ae0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0 || lVar1 == param_1 + 0x38) {
    return false;
  }
  return *(long *)(lVar1 + 8) == param_1 + 0x38;
}



/* Entry: 109f21c18; end: 109f21c5f;  */

bool FUN_109f21c18(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x30;
  FUN_109f438e4(uVar1,2);
  return uVar1 < 0x100;
}



/* Entry: 109f21c60; end: 109f21ff3;  */

undefined8 FUN_109f21c60(undefined8 param_1,long param_2,uint param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = **(long **)(param_2 + (ulong)param_3 * 0x30 + 0x68);
  if (*(int *)(lVar5 + 0x18) != 5) {
    return 0;
  }
  if (param_4 != 0) {
    uVar1 = *(uint *)(&UNK_110b78558 + (ulong)*(uint *)(param_2 + 0x28) * 0x68 + (ulong)param_3 * 4)
            & 0x86;
    if (uVar1 != 4 && uVar1 != 2) {
      return 0;
    }
    uVar3 = (ulong)param_4;
    uVar2 = (*(byte *)(lVar5 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar5 + 0x45) & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    do {
      uVar6 = *(ulong *)(lVar5 + 0x48 + (ulong)*param_5 * 8);
      uVar4 = (uint)LZCOUNT((uVar2 >> 4 | (uVar2 & 0xf0f0f0f) << 4) << 0x18);
      if (uVar1 == 2) {
        if (uVar4 < 5) {
          if (uVar4 == 3) {
            uVar7 = (long)(char)uVar6;
          }
          else {
            if (uVar4 != 4) {
              return 0;
            }
            uVar7 = (long)(short)uVar6;
          }
        }
        else {
          uVar7 = (long)(int)uVar6;
          if (uVar4 != 5) {
            uVar7 = uVar6;
          }
        }
        if ((long)uVar7 < 1 || (uVar7 & uVar7 - 1) != 0) {
          return 0;
        }
      }
      else {
        if (uVar4 < 4) {
          if (uVar4 == 0) {
            uVar6 = uVar6 & 1;
          }
          else {
            uVar6 = uVar6 & 0xff;
          }
        }
        else {
          uVar7 = uVar6 & 0xffffffff;
          if (uVar4 != 5) {
            uVar7 = uVar6;
          }
          uVar6 = uVar6 & 0xffff;
          if (uVar4 != 4) {
            uVar6 = uVar7;
          }
        }
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
          return 0;
        }
      }
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return 1;
}



/* Entry: 109f21ff4; end: 109f2203b;  */

bool FUN_109f21ff4(ulong param_1)

{
  FUN_109f4250c();
  return param_1 >> 0x30 != 0 && ((uint)param_1 == 5 || ((uint)param_1 & 0xfffffffd) == 1);
}



/* Entry: 109f2203c; end: 109f226c7;  */

bool FUN_109f2203c(undefined8 param_1,long param_2,uint param_3)

{
  return *(int *)(**(long **)(param_2 + (ulong)param_3 * 0x30 + 0x68) + 0x18) != 5;
}



/* Entry: 109f226c8; end: 109f226df;  */

ulong FUN_109f226c8(ulong param_1)

{
  FUN_109f4250c();
  return param_1 >> 0x28 & 1;
}



/* Entry: 109f226e0; end: 109f228df;  */

bool FUN_109f226e0(undefined8 param_1,long param_2,uint param_3,uint param_4,byte *param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = **(long **)(param_2 + (ulong)param_3 * 0x30 + 0x68);
  if (*(int *)(lVar2 + 0x18) == 5) {
    if (param_4 == 0) {
      return true;
    }
    if ((*(uint *)(&UNK_110b78558 + (ulong)*(uint *)(param_2 + 0x28) * 0x68 + (ulong)param_3 * 4) &
        0x86) == 0x80) {
      uVar3 = (ulong)param_4;
      do {
        uVar3 = uVar3 - 1;
        dVar4 = *(double *)(lVar2 + 0x48 + (ulong)*param_5 * 8);
        if (*(char *)(lVar2 + 0x45) != '@') {
          fVar6 = SUB84(dVar4,0);
          if (*(char *)(lVar2 + 0x45) != ' ') {
            fVar5 = (float)(((uint)fVar6 & 0x7fff) << 0xd) * 5.192297e+33;
            if (65536.0 <= fVar5) {
              fVar5 = (float)((uint)fVar5 | 0x7f800000);
            }
            fVar6 = (float)((uint)fVar5 | ((uint)fVar6 >> 0xf) << 0x1f);
          }
          dVar4 = (double)fVar6;
        }
        bVar1 = dVar4 < 1.0 && 0.0 < dVar4;
      } while ((bVar1) && (param_5 = param_5 + 1, uVar3 != 0));
      return bVar1;
    }
  }
  return false;
}



/* Entry: 109f228e0; end: 109f22903;  */

bool FUN_109f228e0(int param_1)

{
  FUN_109f4250c();
  return param_1 == 6 || param_1 - 3U < 2;
}



/* Entry: 109f22904; end: 109f22c8b;  */

bool FUN_109f22904(undefined8 param_1,long param_2,uint param_3,uint param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar5 = *(long **)(param_2 + (ulong)param_3 * 0x30 + 0x68);
  lVar7 = *plVar5;
  if (*(int *)(lVar7 + 0x18) != 5) {
    return false;
  }
  if (param_4 == 0) {
    return true;
  }
  bVar4 = *(byte *)((long)plVar5 + 0x1d) >> 1;
  uVar2 = 0xffffffffffffffff;
  if (bVar4 != 0x40) {
    uVar2 = ~(-1L << ((ulong)bVar4 & 0x3f));
  }
  uVar3 = (*(byte *)(lVar7 + 0x45) & 0xaaaaaaaa) >> 1 | (*(byte *)(lVar7 + 0x45) & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar8 = (ulong)param_4;
  do {
    uVar8 = uVar8 - 1;
    uVar9 = *(ulong *)(lVar7 + 0x48 + (ulong)*param_5 * 8);
    uVar6 = (uint)LZCOUNT((uVar3 >> 4 | (uVar3 & 0xf0f0f0f) << 4) << 0x18);
    if (uVar6 < 4) {
      if (uVar6 == 0) {
        uVar9 = uVar9 & 1;
      }
      else {
        uVar9 = uVar9 & 0xff;
      }
    }
    else {
      uVar1 = uVar9 & 0xffffffff;
      if (uVar6 != 5) {
        uVar1 = uVar9;
      }
      uVar9 = uVar9 & 0xffff;
      if (uVar6 != 4) {
        uVar9 = uVar1;
      }
    }
  } while (((uVar9 & uVar2) == 0) && (param_5 = param_5 + 1, uVar8 != 0));
  return (uVar9 & uVar2) == 0;
}



/* Entry: 109f22c8c; end: 109f22dd3;  */

ulong FUN_109f22c8c(ulong param_1)

{
  FUN_109f4250c();
  return param_1 >> 0x20 & 1;
}



/* Entry: 109f22dd4; end: 109f23017;  */

bool FUN_109f22dd4(undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = (ulong)param_3 * 0x30 + 0x18;
  do {
    param_2 = **(long **)(param_2 + lVar3 + 0x50);
    bVar2 = *(int *)(param_2 + 0x18) == 0;
    bVar1 = param_2 != 0 && bVar2;
    if (param_2 == 0 || !bVar2) {
      return bVar1;
    }
    lVar3 = 0x18;
  } while (*(int *)(param_2 + 0x28) == 0xea);
  return *(int *)(param_2 + 0x28) - 0xe8U < 2 && bVar1;
}



/* Entry: 109f23018; end: 109f23a37;  */

undefined8 FUN_109f23018(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  bool bVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  uint auStack_80 [4];
  uint *puStack_70;
  
  plVar22 = *(long **)(param_1 + 0x178);
  plVar17 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar17 == (long *)0x0) {
      return 0;
    }
    lVar19 = plVar22[6];
    if (lVar19 != 0) break;
    plVar22 = plVar17;
    plVar17 = (long *)*plVar17;
  }
  uVar23 = 0;
  do {
    FUN_109f204b8(lVar19,0x22);
    puVar8 = (uint *)0x18;
    _malloc();
    if (puVar8 == (uint *)0x0) {
LAB_109f233c8:
      uVar16 = 0xfffffff7;
    }
    else {
      puVar8[2] = 8;
      puVar8[3] = 0x40;
      puVar8[0] = 0;
      puVar8[1] = 0;
      lVar9 = 0x40;
      _malloc();
      *(long *)(puVar8 + 4) = lVar9;
      if (lVar9 == 0) {
LAB_109f233c4:
        _free(puVar8);
        goto LAB_109f233c8;
      }
      auStack_80[2] = 8;
      auStack_80[3] = 0x100;
      auStack_80[0] = 0;
      auStack_80[1] = 0;
      puVar10 = (uint *)0x100;
      _malloc();
      puStack_70 = puVar10;
      if (puVar10 == (uint *)0x0) {
        _free(lVar9);
        goto LAB_109f233c4;
      }
      lVar9 = *(long *)(lVar19 + 0x30);
      if (lVar9 == 0) {
        uVar16 = 0;
LAB_109f233ac:
        puVar8[1] = uVar16;
        _free(*(undefined8 *)(puVar8 + 4));
        _free(puVar8);
        puVar8 = puStack_70;
        goto LAB_109f233c4;
      }
      lVar13 = lVar9;
      FUN_109ecc434();
      do {
        lVar11 = lVar13;
        plVar24 = *(long **)(lVar9 + 0x20);
        plVar17 = (long *)*plVar24;
        if (plVar17 != (long *)0x0) {
          do {
            plVar7 = (long *)0x0;
            plVar21 = plVar24;
            if (*plVar17 != 0) {
              plVar7 = plVar17;
            }
            do {
              plVar24 = plVar7;
              if ((int)plVar21[3] == 1) {
                if ((*(uint *)((long)plVar21 + 0x2c) & 0x180210) == 0) {
                  iVar15 = 1;
                  plVar17 = plVar21;
                  while( true ) {
                    plVar17 = (long *)plVar17[6];
                    if (*(char *)((long)plVar17 + 4) != '\x13') break;
                    iVar15 = (int)plVar17[2] * iVar15;
                  }
                  if (*(char *)((long)plVar17 + 4) == '\x10') {
                    iVar18 = 4;
                  }
                  else {
                    iVar18 = 0;
                  }
                  if (iVar18 * iVar15 == 0) goto LAB_109f231b0;
                }
                puVar10 = auStack_80;
LAB_109f231a8:
                FUN_109f68850();
                *(long **)puVar10 = plVar21;
              }
              else if (((int)plVar21[3] == 4) && (puVar10 = puVar8, (int)plVar21[5] == 0x2d))
              goto LAB_109f231a8;
LAB_109f231b0:
              if (plVar24 == (long *)0x0) goto LAB_109f231c8;
              plVar17 = (long *)*plVar24;
              plVar7 = (long *)0x0;
              plVar21 = plVar24;
            } while (plVar17 == (long *)0x0);
          } while( true );
        }
LAB_109f231c8:
        lVar13 = lVar11;
        FUN_109ecc434();
        puVar10 = puStack_70;
        lVar9 = lVar11;
      } while (lVar11 != 0);
      uVar2 = *puVar8;
      uVar16 = puVar8[1];
      if (uVar2 == uVar16) goto LAB_109f233ac;
      bVar20 = false;
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      lVar9 = *(long *)(puVar8 + 4);
      do {
        if (lVar9 == 0) {
          _free();
          _free(puVar8);
          puVar8 = puVar10;
          goto LAB_109f233c4;
        }
        lVar13 = *(long *)(lVar9 + (ulong)(uVar4 - 1 & uVar16));
        if (lVar13 == 0) break;
        uVar5 = *(uint *)(lVar13 + 0x28);
        lVar11 = lVar13 + 0x54;
        uVar6 = *(uint *)(lVar11 + ((ulong)(byte)(&UNK_110b671cc)[(ulong)uVar5 * 0x68] - 1) * 4);
        uVar12 = uVar6 & 0xffe7fdef;
        for (uVar1 = auStack_80[1]; uVar1 != auStack_80[0]; uVar1 = auStack_80[2] + uVar1) {
          lVar14 = *(long *)((long)puStack_70 + (ulong)(auStack_80[3] - 1 & uVar1));
          iVar15 = 1;
          lVar25 = lVar14;
          while( true ) {
            lVar25 = *(long *)(lVar25 + 0x30);
            if (*(char *)(lVar25 + 4) != '\x13') break;
            iVar15 = *(int *)(lVar25 + 0x10) * iVar15;
          }
          if (*(char *)(lVar25 + 4) == '\x10') {
            iVar18 = 4;
          }
          else {
            iVar18 = 0;
          }
          uVar26 = 0;
          if (iVar18 * iVar15 != 0) {
            uVar26 = 0x200;
          }
          uVar26 = (uVar26 | *(uint *)(lVar14 + 0x2c)) & uVar6;
          if (uVar26 != 0) {
            lVar25 = *(long *)(lVar13 + 0x10);
            lVar27 = *(long *)(lVar14 + 0x10);
            if (lVar25 == lVar27) {
              if (*(uint *)(lVar13 + 0x20) < *(uint *)(lVar14 + 0x20)) goto LAB_109f232f8;
            }
            else if ((*(uint *)(lVar25 + 0x80) <= *(uint *)(lVar27 + 0x80)) &&
                    (*(uint *)(lVar27 + 0x84) <= *(uint *)(lVar25 + 0x84))) {
LAB_109f232f8:
              uVar26 = 0;
            }
            uVar12 = uVar26 | uVar12;
          }
        }
        if (uVar6 != uVar12) {
          *(uint *)(lVar11 + ((ulong)(byte)(&UNK_110b671cc)[(ulong)uVar5 * 0x68] - 1) * 4) = uVar12;
          bVar20 = true;
        }
        if (uVar12 == 0x80000 &&
            *(int *)(lVar11 + (ulong)(byte)(&UNK_110b671ce)[(ulong)uVar5 * 0x68] * 4 + -4) == 0) {
          lVar11 = lVar11 + (ulong)(byte)(&UNK_110b671cd)[(ulong)uVar5 * 0x68] * 4;
          uVar1 = *(uint *)(lVar11 + -4);
          if (3 < uVar1) {
            uVar1 = 4;
          }
          *(uint *)(lVar11 + -4) = uVar1;
          bVar20 = true;
        }
        uVar16 = uVar3 + uVar16;
      } while (uVar2 != uVar16);
      _free();
      _free(puVar8);
      _free(puVar10);
      if (!bVar20) goto LAB_109f233c8;
      uVar23 = 1;
      uVar16 = 7;
    }
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) & uVar16;
    plVar22 = (long *)*plVar22;
    plVar17 = (long *)*plVar22;
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return uVar23;
      }
      lVar19 = plVar22[6];
      if (lVar19 != 0) break;
      plVar22 = plVar17;
      plVar17 = (long *)*plVar17;
    }
  } while( true );
}



/* Entry: 109f23a38; end: 109f23b93;  */

void FUN_109f23a38(uint *param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if ((*param_1 & param_2) != 0) {
    if (*(uint **)(param_1 + 4) != param_1 + 2) {
      puVar4 = *(uint **)(param_1 + 4);
      do {
        puVar6 = puVar4 + 2;
        puVar5 = *(uint **)puVar6;
        if ((*(uint *)(*(long *)(puVar4 + 6) + 0x2c) & param_2) != 0) {
          FUN_109f23b94(param_1,puVar4);
          lVar1 = *(long *)puVar4;
          plVar2 = *(long **)(puVar4 + 2);
          *(long **)(lVar1 + 8) = plVar2;
          *plVar2 = lVar1;
          *(undefined2 *)(puVar4 + 4) = 0;
          puVar6[0] = 0;
          puVar6[1] = 0;
          puVar3 = *(undefined8 **)(param_1 + 0x16);
          *(uint **)puVar4 = param_1 + 0x14;
          *(undefined8 **)(puVar4 + 2) = puVar3;
          *puVar3 = puVar4;
          *(uint **)(param_1 + 0x16) = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != param_1 + 2);
    }
  }
  return;
}


