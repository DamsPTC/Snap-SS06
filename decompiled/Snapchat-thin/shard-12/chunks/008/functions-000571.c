/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a1dc68; end: 109a1dc6b;  */

long FUN_109a1dc68(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  FUN_109a1e8b4(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x44)) {
    if (*(long *)(*(long *)(param_1 + 0x48) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109a1e8e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1dc6c; end: 109a1dc7f;  */

void FUN_109a1dc6c(void)

{
  FUN_109a1dbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1dc80; end: 109a1dc8b;  */

undefined ** FUN_109a1dc80(void)

{
  return &PTR_DAT_110b21268;
}



/* Entry: 109a1dc8c; end: 109a1dd53;  */

void FUN_109a1dc8c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    func_0x0001053936e4(param_1 + 0x58);
  }
  if ((*(ulong *)(param_1 + 0x70) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x78) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109a1dd54; end: 109a1e383;  */

byte * FUN_109a1dd54(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar15 = (undefined8 *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar15 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar15[1];
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)*puVar15;
      goto LAB_109a1dda8;
    }
  }
  else {
    puVar4 = puVar15;
    if (*(char *)((long)puVar15 + 0x17) != '\0') {
LAB_109a1dda8:
      func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f5946a2);
      pbVar9 = param_3;
      func_0x000107c280a0(param_3,1,puVar15,param_2);
      param_2 = pbVar9;
    }
  }
  iVar20 = *(int *)(param_1 + 0x18);
  if (iVar20 != 0) {
    iVar16 = 0;
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar16 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar9,param_3);
      iVar16 = iVar16 + 1;
      pbVar9 = param_2;
    } while (iVar20 != iVar16);
  }
  uVar14 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar14) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar14) {
      do {
        param_2 = pbVar9;
        pbVar9 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar7 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar7 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar9 = (byte)uVar14;
    puVar17 = *(uint **)(param_1 + 0x30);
    iVar20 = *(int *)(param_1 + 0x28);
    pbVar9 = param_3 + 0x10;
    puVar19 = puVar17;
    do {
      pbVar13 = param_2;
      pbVar5 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar13 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109a1deb0:
            param_3[0x38] = 1;
LAB_109a1df48:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar5;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar5 + 8);
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)(param_3 + 8) = pbVar5;
              goto LAB_109a1df48;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar5 - (long)pbVar9);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109a1deb0;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar13 = pbStack_70;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar13 + ((int)param_2 - (int)pbVar5);
          pbVar13 = param_2;
          pbVar5 = pbVar11;
        } while (pbVar11 <= param_2);
      }
      puVar18 = puVar19 + 1;
      uVar10 = (ulong)(int)*puVar19;
      uVar8 = uVar10;
      pbVar5 = pbVar13;
      if (0x7f < *puVar19) {
        do {
          pbVar13 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar10 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar10;
          pbVar5 = pbVar13;
        } while (uVar12 != 0);
      }
      param_2 = pbVar13 + 1;
      *pbVar13 = (byte)uVar10;
      puVar19 = puVar18;
    } while (puVar18 < puVar17 + iVar20);
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar14) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x22;
    if (0x7f < uVar14) {
      do {
        param_2 = pbVar9;
        pbVar9 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar7 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar7 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar9 = (byte)uVar14;
    puVar17 = *(uint **)(param_1 + 0x48);
    iVar20 = *(int *)(param_1 + 0x40);
    pbVar9 = param_3 + 0x10;
    puVar19 = puVar17;
    do {
      pbVar13 = param_2;
      pbVar5 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar13 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109a1e008:
            param_3[0x38] = 1;
LAB_109a1e0a0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar5;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar5 + 8);
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)(param_3 + 8) = pbVar5;
              goto LAB_109a1e0a0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar5 - (long)pbVar9);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109a1e008;
            } while (uStack_64 == 0);
            puVar15 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar15;
              *(undefined8 *)(param_3 + 0x18) = puVar15[1];
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar15;
              *(undefined8 *)(pbStack_70 + 8) = puVar15[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar13 = pbStack_70;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar13 + ((int)param_2 - (int)pbVar5);
          pbVar13 = param_2;
          pbVar5 = pbVar11;
        } while (pbVar11 <= param_2);
      }
      puVar18 = puVar19 + 1;
      uVar10 = (ulong)(int)*puVar19;
      uVar8 = uVar10;
      pbVar5 = pbVar13;
      if (0x7f < *puVar19) {
        do {
          pbVar13 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar10 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar10;
          pbVar5 = pbVar13;
        } while (uVar12 != 0);
      }
      param_2 = pbVar13 + 1;
      *pbVar13 = (byte)uVar10;
      puVar19 = puVar18;
    } while (puVar18 < puVar17 + iVar20);
  }
  iVar20 = *(int *)(param_1 + 0x60);
  if (iVar20 != 0) {
    iVar16 = 0;
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x58);
      puVar1 = (ulong *)(param_1 + 0x58);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar16 * 8 + 7);
      }
      param_2 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar9,param_3);
      iVar16 = iVar16 + 1;
      pbVar9 = param_2;
    } while (iVar20 != iVar16);
  }
  uVar14 = *(uint *)(param_1 + 0x80);
  if (uVar14 != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
      uVar14 = *(uint *)(param_1 + 0x80);
    }
    pbVar13 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 1;
    pbVar9 = pbVar13;
    uVar7 = uVar14;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar9 + 1;
        *pbVar9 = (byte)uVar7 | 0x80;
        uVar14 = uVar7 >> 7;
        uVar2 = uVar7 >> 0xe;
        pbVar9 = pbVar13;
        uVar7 = uVar14;
      } while (uVar2 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar14;
  }
  puVar15 = (undefined8 *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar15 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar15[1];
    if (lVar6 == 0) goto LAB_109a1e194;
    puVar4 = (undefined8 *)*puVar15;
  }
  else {
    puVar4 = puVar15;
    if (*(char *)((long)puVar15 + 0x17) == '\0') goto LAB_109a1e194;
  }
  func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f5946c2);
  pbVar9 = param_3;
  func_0x000107c280a0(param_3,0x15,puVar15,param_2);
  param_2 = pbVar9;
LAB_109a1e194:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar10 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    uVar14 = (uint)uVar10;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar14) {
      pbVar9 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar14) {
        do {
          iVar20 = (int)pbVar9;
          _memcpy(param_2,lVar6,(long)iVar20);
          uVar14 = (int)uVar10 - iVar20;
          uVar10 = (ulong)uVar14;
          lVar6 = lVar6 + iVar20;
          pbVar9 = *(byte **)param_3;
          pbVar13 = param_2 + iVar20;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar13 = pbVar5 + ((int)pbVar13 - (int)pbVar9);
            pbVar9 = *(byte **)param_3;
            param_2 = pbVar13;
          } while (pbVar9 <= pbVar13);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
        } while ((int)pbVar9 < (int)uVar14);
      }
      _memcpy(param_2,lVar6,(long)(int)uVar14);
      param_2 = param_2 + (int)uVar14;
    }
    else {
      _memcpy(param_2,lVar6,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar14;
    }
  }
  return param_2;
}



/* Entry: 109a1e384; end: 109a1e623;  */

void FUN_109a1e384(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar10 = (long)*(int *)(param_1 + 0x18);
  puVar11 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar11 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar10 = 0;
  }
  else {
    lVar12 = lVar10 << 3;
    do {
      uVar4 = *puVar11;
      FUN_109a1d11c();
      lVar10 = uVar4 + lVar10 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar12 = lVar12 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((int)uVar1 < 1) {
    lVar12 = 0;
    lVar7 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar5 = 0;
    uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x30);
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar5;
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 != 0);
    *(int *)(param_1 + 0x38) = (int)lVar5;
    lVar12 = 0;
    if (lVar5 != 0) {
      lVar12 = lVar5;
    }
    lVar7 = 0;
    if (lVar5 != 0) {
      lVar7 = (ulong)((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((int)uVar1 < 1) {
    lVar5 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar8 = 0;
    uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x48);
    do {
      lVar8 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar8;
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 != 0);
    *(int *)(param_1 + 0x50) = (int)lVar8;
    lVar5 = 0;
    if (lVar8 != 0) {
      lVar5 = lVar8;
    }
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar8) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  lVar10 = lVar12 + lVar10 + lVar7 + lVar5 + lVar9 + (long)iVar2;
  iVar3 = (int)lVar10;
  puVar11 = (ulong *)(param_1 + 0x58);
  if ((uVar4 & 1) != 0) {
    puVar11 = (ulong *)(uVar4 + 7);
  }
  if (iVar2 != 0) {
    lVar12 = (long)iVar2 << 3;
    do {
      uVar4 = *puVar11;
      FUN_109a1ee9c();
      lVar10 = uVar4 + lVar10 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      iVar3 = (int)lVar10;
      lVar12 = lVar12 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  lVar12 = (long)*(char *)(uVar4 + 0x17);
  lVar10 = lVar12;
  if (lVar12 < 0) {
    lVar10 = *(long *)(uVar4 + 8);
  }
  if (lVar10 != 0) {
    lVar10 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar10 = lVar12;
    }
    iVar3 = iVar3 + (int)lVar10 + ((int)LZCOUNT((int)lVar10) * -9 + 0x160U >> 6) + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc;
  lVar12 = (long)*(char *)(uVar4 + 0x17);
  lVar10 = lVar12;
  if (lVar12 < 0) {
    lVar10 = *(long *)(uVar4 + 8);
  }
  if (lVar10 != 0) {
    lVar10 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar10 = lVar12;
    }
    iVar3 = iVar3 + (int)lVar10 + ((int)LZCOUNT((int)lVar10) * -9 + 0x160U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(param_1 + 0x80)) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar10 + iVar3;
  }
  *(int *)(param_1 + 0x84) = iVar3;
  return;
}



/* Entry: 109a1e624; end: 109a1e627;  */

void FUN_109a1e624(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x30);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x44) < iVar4) {
      func_0x000107c282d8(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x40);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x40) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x48);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    func_0x000107c303c4(param_1 + 0x58,param_2 + 0x58);
  }
  uVar3 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x70,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x78,uVar3,uVar5);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1e628; end: 109a1e7c7;  */

void FUN_109a1e628(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x30);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x44) < iVar4) {
      func_0x000107c282d8(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x40);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x40) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x48);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    func_0x000107c303c4(param_1 + 0x58,param_2 + 0x58);
  }
  uVar3 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x70,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x78,uVar3,uVar5);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1e7c8; end: 109a1e8b3;  */

void FUN_109a1e7c8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x10 + lVar3);
    *(undefined1 *)(param_1 + 0x10 + lVar3) = *(undefined1 *)(param_2 + 0x10 + lVar3);
    *(undefined1 *)(param_2 + 0x10 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x28 + lVar3);
    *(undefined1 *)(param_1 + 0x28 + lVar3) = *(undefined1 *)(param_2 + 0x28 + lVar3);
    *(undefined1 *)(param_2 + 0x28 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x40 + lVar3);
    *(undefined1 *)(param_1 + 0x40 + lVar3) = *(undefined1 *)(param_2 + 0x40 + lVar3);
    *(undefined1 *)(param_2 + 0x40 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x58 + lVar3);
    *(undefined1 *)(param_1 + 0x58 + lVar3) = *(undefined1 *)(param_2 + 0x58 + lVar3);
    *(undefined1 *)(param_2 + 0x58 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_2 + 0x80) = uVar1;
  return;
}



/* Entry: 109a1e8b4; end: 109a1e8e7;  */

long * FUN_109a1e8b4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109a1e8e8; end: 109a1e91b;  */

long * FUN_109a1e8e8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109a1e91c; end: 109a1e9f3;  */

void FUN_109a1e91c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x88;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x88);
  }
  *puVar1 = &PTR_FUN_110b21228;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = param_1;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = param_1;
  puVar1[0xe] = &DAT_11383d918;
  puVar1[0xf] = &DAT_11383d918;
  puVar1[0x10] = 0;
  return;
}



/* Entry: 109a1e9f4; end: 109a1ea0f;  */

undefined ** FUN_109a1e9f4(void)

{
  return &PTR_DAT_110b21310;
}



/* Entry: 109a1ea10; end: 109a1eb3b;  */

long * FUN_109a1ea10(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109a1eb3c; end: 109a1eb8b;  */

long FUN_109a1eb3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109a1eb8c; end: 109a1ec6f;  */

void FUN_109a1eb8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110b212d0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109a1ec70; end: 109a1ec73;  */

long FUN_109a1ec70(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109a1ebd4(param_1);
  }
  return param_1;
}



/* Entry: 109a1ec74; end: 109a1ec87;  */

void FUN_109a1ec74(void)

{
  func_0x000109a1ec2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1ec88; end: 109a1ec97;  */

long FUN_109a1ec88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109a1bef8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109a1ec98; end: 109a1ed03;  */

void FUN_109a1ec98(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  func_0x000109a1ebd4(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109a1ed04; end: 109a1ee9b;  */

long * FUN_109a1ed04(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109a1ed78;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109a1ed78;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5946e6);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109a1ed78:
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x24) == 2) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_48 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109a1ee9c; end: 109a1ef5f;  */

long FUN_109a1ee9c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar2;
  if (lVar2 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar2;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_109a1f738();
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 109a1ef60; end: 109a1ef63;  */

void FUN_109a1ef60(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x000109a1f05c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        func_0x000109a1ebd4(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_109a1f95c(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1ef64; end: 109a1f1b7;  */

void FUN_109a1ef64(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x000109a1f05c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        func_0x000109a1ebd4(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_109a1f95c(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1f1b8; end: 109a1f22b;  */

long FUN_109a1f1b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109a1bef8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109a1f22c; end: 109a1f23f;  */

void FUN_109a1f22c(void)

{
  FUN_109a1f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1f240; end: 109a1f24b;  */

undefined ** FUN_109a1f240(void)

{
  return &PTR_DAT_110b21438;
}



/* Entry: 109a1f24c; end: 109a1f29b;  */

void FUN_109a1f24c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109a1bf58(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109a1f29c; end: 109a1f737;  */

byte * FUN_109a1f29c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = (byte *)(param_3 + 2);
    puVar15 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109a1f35c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109a1f3f4:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109a1f3f4;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109a1f35c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar14 = puVar15 + 1;
      uVar4 = (ulong)(int)*puVar15;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < *puVar15) {
        do {
          pbVar6 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar6;
        } while (uVar8 != 0);
      }
      param_2 = pbVar6 + 1;
      *pbVar6 = (byte)uVar4;
      puVar15 = puVar14;
    } while (puVar14 < puVar13 + iVar16);
  }
  uVar12 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x38);
    iVar16 = *(int *)(param_1 + 0x30);
    pbVar3 = (byte *)(param_3 + 2);
    puVar15 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109a1f4b4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109a1f54c:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109a1f54c;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109a1f4b4;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar14 = puVar15 + 1;
      uVar4 = (ulong)(int)*puVar15;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < *puVar15) {
        do {
          pbVar6 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar6;
        } while (uVar8 != 0);
      }
      param_2 = pbVar6 + 1;
      *pbVar6 = (byte)uVar4;
      puVar15 = puVar14;
    } while (puVar14 < puVar13 + iVar16);
  }
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x30),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar6 = (byte *)*param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar3 = pbVar10;
          } while (pbVar6 <= pbVar10);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar3);
        } while ((int)pbVar6 < (int)uVar12);
      }
      _memcpy(pbVar3,lVar11,(long)(int)uVar12);
      pbVar3 = pbVar3 + (int)uVar12;
    }
    else {
      _memcpy(pbVar3,lVar11,uVar4 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar12;
    }
  }
  return pbVar3;
}



/* Entry: 109a1f738; end: 109a1f897;  */

long FUN_109a1f738(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar3;
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x38);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar7;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    if (lVar7 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar2 + lVar4 + lVar7 + lVar3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x000109a1c17c();
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109a1f898; end: 109a1f8ab;  */

void FUN_109a1f898(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x38);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109a1fa44(uVar7,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar7;
    }
    else {
      FUN_109a1c274();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1f8ac; end: 109a1f95b;  */

void FUN_109a1f8ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110b21370;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  return;
}



/* Entry: 109a1f95c; end: 109a1fa43;  */

undefined8 * FUN_109a1f95c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b21370;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_109311ab0(puVar1 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_109311ab0(puVar1 + 6,param_1,param_2 + 0x30);
  *(undefined4 *)(puVar1 + 8) = 0;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109a1fa44(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar1[9] = param_1;
  return puVar1;
}



/* Entry: 109a1fa44; end: 109a1fa87;  */

undefined8 * FUN_109a1fa44(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b20e58;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar2 + 2,param_2 + 0x10);
  }
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar1 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar1 = puVar3;
  }
  puVar2[5] = puVar1;
  *(undefined4 *)(puVar2 + 6) = 0;
  return puVar2;
}



/* Entry: 109a1fa88; end: 109a2101b;  */

/* WARNING: Removing unreachable block (ram,0x000109a20b94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109a1fa88(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  long ****pppplVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong uVar12;
  long **pplVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long **pplVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long **pplVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long ***ppplVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long **pplVar29;
  long *plVar30;
  long **unaff_x25;
  long **unaff_x26;
  long **pplVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long **pplStack_400;
  long **pplStack_3f8;
  long ****pppplStack_3e8;
  long ****pppplStack_3e0;
  long ****pppplStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_320;
  undefined1 auStack_318 [136];
  long ****pppplStack_290;
  long ****pppplStack_288;
  long ****pppplStack_280;
  long ****pppplStack_278;
  long ****pppplStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  long *plStack_210;
  long *plStack_208;
  byte bStack_1f9;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [32];
  long ****pppplStack_160;
  long ****pppplStack_158;
  long lStack_150;
  long ***ppplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long **pplStack_128;
  long *plStack_120;
  long lStack_118;
  float fStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [3];
  
  FUN_109a22d3c(auStack_318,param_2);
  pcVar11 = "value";
  func_0x000107c31940(&uStack_378);
  uStack_358 = uStack_370;
  uStack_360 = uStack_378;
  lStack_350 = lStack_368;
  uStack_370 = 0;
  lStack_368 = 0;
  uStack_378 = 0;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_328 = 0x3f800000;
  uStack_320 = 0;
  pppplVar7 = *(long *****)(param_2 + 0x58);
  uStack_398 = 0;
  lStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_380 = 0x3f800000;
  uStack_3c8 = 0;
  lStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3b0 = 0x3f800000;
  pppplStack_3e8 = (long ****)0x0;
  pppplStack_3e0 = (long ****)0x0;
  pppplStack_3d8 = (long ****)0x0;
  if (pppplVar7 != (long ****)0x0) {
    if ((ulong)pppplVar7 >> 0x3c != 0) {
      FUN_109a21204();
      goto LAB_109a20d34;
    }
    pppplStack_270 = (long ****)&pppplStack_3e8;
    FUN_109a21218();
    pppplVar24 = (long ****)((long)pppplVar7 - ((long)pppplStack_3e0 - (long)pppplStack_3e8));
    _memcpy(pppplVar24);
    pppplStack_280 = pppplStack_3e8;
    pppplStack_278 = pppplStack_3d8;
    pppplStack_290 = pppplStack_3e8;
    pppplStack_288 = pppplStack_3e8;
    pppplStack_3e8 = pppplVar24;
    pppplStack_3e0 = pppplVar7;
    pppplStack_3d8 = pppplVar7 + (long)pcVar11 * 2;
    func_0x000109a2124c(&pppplStack_290);
  }
  plVar28 = (long *)(param_2 + 0x28);
  plVar20 = plVar28;
  do {
    plVar20 = (long *)*plVar20;
    if (plVar20 == (long *)0x0) {
      plVar20 = (long *)(param_2 + 0x50);
      plVar21 = plVar20;
      goto LAB_109a1fbd0;
    }
    if (plVar20[5] == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pplStack_f0,&UNK_10f5946fe,plVar20 + 2);
      FUN_109259240(&pppplStack_290,&pplStack_f0,&UNK_10f594713);
      func_0x000105687ee0(&pppplStack_290);
      goto LAB_109a20d34;
    }
    if (*(long *)(plVar20[5] + 0x18) != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pplStack_f0,&UNK_10f5946fe,plVar20 + 2);
      FUN_109259240(&pppplStack_290,&pplStack_f0,&UNK_10f59471d);
      func_0x000105687ee0(&pppplStack_290);
      goto LAB_109a20d34;
    }
    FUN_109a2101c(&uStack_360,plVar20 + 2);
    plVar21 = &lStack_3a0;
    FUN_109a224e8(plVar21,plVar20[5],plVar20[5],plVar20 + 2);
  } while (((ulong)plVar21 & 1) != 0);
  func_0x000105688514(&UNK_10f59475c);
  goto LAB_109a20d34;
LAB_109a1fbd0:
  pppplVar7 = pppplStack_3e0;
  plVar21 = (long *)*plVar21;
  if (plVar21 == (long *)0x0) goto LAB_109a1fc24;
  plVar30 = plVar21 + 5;
  lVar16 = (long)(plVar21 + 2);
  if (*plVar30 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pplStack_f0,&UNK_10f594790,lVar16);
    FUN_109259240(&pppplStack_290,&pplStack_f0,&UNK_10f594713);
    func_0x000105687ee0(&pppplStack_290);
    goto LAB_109a20d34;
  }
  if (*(long *)(*plVar30 + 0x18) == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pplStack_f0,&UNK_10f594790,lVar16);
    FUN_109259240(&pppplStack_290,&pplStack_f0,&UNK_10f5947a6);
    func_0x000105687ee0(&pppplStack_290);
    goto LAB_109a20d34;
  }
  FUN_109a2101c(&uStack_360,lVar16);
  plVar27 = &lStack_3d0;
  FUN_109a224e8(plVar27,*plVar30,*plVar30,lVar16);
  if (((ulong)plVar27 & 1) == 0) {
    func_0x000105688514(&UNK_10f5947eb);
    goto LAB_109a20d34;
  }
  FUN_109a210b8(&pppplStack_3e8,plVar30);
  goto LAB_109a1fbd0;
LAB_109a20b18:
  do {
    plVar20 = (long *)*plVar20;
    if (plVar20 == (long *)0x0) {
      pppplStack_290 = &ppplStack_148;
      FUN_109a22414(&pppplStack_290);
      FUN_109a223cc(&lStack_130);
      func_0x000107c2826c(&lStack_d8);
      FUN_109a19274(param_1,0,auStack_318);
      if (pplStack_400 != (long **)0x0) {
        __ZdlPv(pplStack_400);
      }
      pppplStack_290 = (long ****)&pppplStack_3e8;
      FUN_109a22414(&pppplStack_290);
      func_0x000109a22484(&lStack_3d0);
      func_0x000109a22484(&lStack_3a0);
      func_0x000107c2826c(&uStack_348);
      if (lStack_350 < 0) {
        __ZdlPv(uStack_360);
      }
      FUN_109a1dbe4(auStack_318);
      return;
    }
    lVar26 = lVar16;
    FUN_109a22300(lVar16,pplVar31,plVar20[5]);
  } while (lVar26 != 0);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&plStack_210,&UNK_10f594790,plVar20 + 2);
  FUN_109259240(&pppplStack_290,&plStack_210,&UNK_10f594956);
  func_0x000105687ee0(&pppplStack_290);
  goto LAB_109a20d34;
LAB_109a1fc24:
  pplStack_e8 = (long **)0x0;
  pplStack_f0 = (long **)0x0;
  lStack_d8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x3f800000);
  pppplStack_278 = (long ****)0x0;
  pppplStack_280 = (long ****)0x0;
  lStack_268 = 0;
  pppplStack_270 = (long ****)0x0;
  pppplStack_288 = (long ****)0x0;
  pppplStack_290 = (long ****)0x0;
  if (pppplStack_3e8 == pppplStack_3e0) {
    pplStack_400 = (long **)0x0;
    pplStack_3f8 = (long **)0x0;
  }
  else {
    pplStack_400 = (long **)0x0;
    pplStack_3f8 = (long **)0x0;
    pplVar31 = (long **)0x0;
    pppplVar24 = pppplStack_3e8;
    do {
      pplVar13 = pplStack_e8;
      ppplVar25 = *pppplVar24;
      unaff_x26 = ppplVar25[3];
      if (unaff_x26 != (long **)0x0) {
        uVar12 = ((ulong)(uint)((int)unaff_x26 << 3) + 8 ^ (ulong)unaff_x26 >> 0x20) *
                 -0x622015f714c7d297;
        uVar12 = ((ulong)unaff_x26 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        pplVar29 = (long **)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        if (pplStack_e8 != (long **)0x0) {
          uVar12 = (long)pplStack_e8 - 1;
          if (((ulong)pplStack_e8 & uVar12) == 0) {
            unaff_x25 = (long **)(uVar12 & (ulong)pplVar29);
          }
          else {
            unaff_x25 = pplVar29;
            if (pplStack_e8 <= pplVar29) {
              uVar14 = 0;
              if (pplStack_e8 != (long **)0x0) {
                uVar14 = (ulong)pplVar29 / (ulong)pplStack_e8;
              }
              unaff_x25 = (long **)((long)pplVar29 - uVar14 * (long)pplStack_e8);
            }
          }
          plVar21 = pplStack_f0[(long)unaff_x25];
          if (plVar21 != (long *)0x0) {
            do {
              while( true ) {
                plVar21 = (long *)*plVar21;
                if (plVar21 == (long *)0x0) goto LAB_109a1fd34;
                pplVar17 = (long **)plVar21[1];
                if (pplVar17 != pplVar29) break;
                if ((long **)plVar21[2] == unaff_x26) goto LAB_109a20214;
              }
              if (((ulong)pplStack_e8 & uVar12) == 0) {
                pplVar17 = (long **)((ulong)pplVar17 & uVar12);
              }
              else if (pplStack_e8 <= pplVar17) {
                uVar14 = 0;
                if (pplStack_e8 != (long **)0x0) {
                  uVar14 = (ulong)pplVar17 / (ulong)pplStack_e8;
                }
                pplVar17 = (long **)((long)pplVar17 - uVar14 * (long)pplStack_e8);
              }
            } while (pplVar17 == unaff_x25);
          }
        }
LAB_109a1fd34:
        plVar21 = (long *)0x20;
        __Znwm();
        *plVar21 = 0;
        plVar21[1] = (long)pplVar29;
        plVar21[2] = (long)unaff_x26;
        plVar21[3] = 0;
        if ((pplVar13 == (long **)0x0) ||
           ((float)uStack_d0 * (float)pplVar13 < (float)(lStack_d8 + 1))) {
          uVar12 = 1;
          if ((long **)0x2 < pplVar13) {
            uVar12 = (ulong)(((ulong)pplVar13 & (long)pplVar13 - 1U) != 0);
          }
          uVar12 = uVar12 | (long)pplVar13 << 1;
          uVar14 = (ulong)((float)(lStack_d8 + 1) / (float)uStack_d0);
          if (uVar12 <= uVar14) {
            uVar12 = uVar14;
          }
          FUN_109a212f0(&pplStack_f0,uVar12);
          pplVar13 = pplStack_e8;
          if (((ulong)pplStack_e8 & (long)pplStack_e8 - 1U) == 0) {
            unaff_x25 = (long **)((long)pplStack_e8 - 1U & (ulong)pplVar29);
          }
          else {
            unaff_x25 = pplVar29;
            if (pplStack_e8 <= pplVar29) {
              uVar12 = 0;
              if (pplStack_e8 != (long **)0x0) {
                uVar12 = (ulong)pplVar29 / (ulong)pplStack_e8;
              }
              unaff_x25 = (long **)((long)pplVar29 - uVar12 * (long)pplStack_e8);
            }
          }
        }
        pplVar29 = (long **)pplStack_f0[(long)unaff_x25];
        if (pplVar29 == (long **)0x0) {
          *plVar21 = (long)plStack_e0;
          pplStack_f0[(long)unaff_x25] = (long *)&plStack_e0;
          plStack_e0 = plVar21;
          if (*plVar21 != 0) {
            pplVar29 = *(long ***)(*plVar21 + 8);
            if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
              pplVar29 = (long **)((ulong)pplVar29 & (long)pplVar13 - 1U);
            }
            else if (pplVar13 <= pplVar29) {
              uVar12 = 0;
              if (pplVar13 != (long **)0x0) {
                uVar12 = (ulong)pplVar29 / (ulong)pplVar13;
              }
              pplVar29 = (long **)((long)pplVar29 - uVar12 * (long)pplVar13);
            }
            pplVar29 = pplStack_f0 + (long)pplVar29;
            goto LAB_109a1fe38;
          }
        }
        else {
          *plVar21 = (long)*pplVar29;
LAB_109a1fe38:
          *pplVar29 = plVar21;
        }
        lStack_d8 = lStack_d8 + 1;
        FUN_109a214c0(&pppplStack_290,ppplVar25[3]);
        pplVar13 = pplStack_400;
        lVar16 = lStack_268;
        pplVar29 = pplStack_f0;
        while (pplStack_400 = pplVar13, pplStack_f0 = pplVar29, lVar16 != 0) {
          lVar26 = lVar16 + -1;
          pplVar22 = pppplStack_288[(ulong)(lVar26 + (long)pppplStack_270) >> 9]
                     [lVar26 + (long)pppplStack_270 & 0x1ff];
          unaff_x25 = pplVar29;
          FUN_109a2191c(pplVar29,pplStack_e8,pplVar22);
          pplVar17 = pplStack_e8;
          if (unaff_x25[3] == (long *)((long)pplVar22[4] - (long)pplVar22[3] >> 4)) {
            lVar32 = lVar16;
            if (pplStack_3f8 < pplVar31) {
              *pplStack_3f8 = (long *)pplVar22;
            }
            else {
              lVar16 = (long)pplStack_3f8 - (long)pplVar13;
              uVar12 = (lVar16 >> 3) + 1;
              if (uVar12 >> 0x3d != 0) {
                FUN_109a219e8();
                goto LAB_109a20d34;
              }
              uVar14 = (long)pplVar31 - (long)pplVar13 >> 2;
              if (uVar14 <= uVar12) {
                uVar14 = uVar12;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pplVar31 - (long)pplVar13)) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109a20d34;
              }
              lVar8 = uVar14 << 3;
              __Znwm();
              pplStack_3f8 = (long **)(lVar8 + lVar16);
              pplVar31 = (long **)(lVar8 + uVar14 * 8);
              *pplStack_3f8 = (long *)pplVar22;
              pplStack_400 = pplStack_3f8 + -(lVar16 >> 3);
              _memcpy(pplStack_400,pplVar13,lVar16);
              if (pplVar13 != (long **)0x0) {
                __ZdlPv(pplVar13);
                lVar26 = lStack_268 + -1;
                lVar32 = lStack_268;
              }
            }
            unaff_x25 = pplStack_3f8 + 1;
            lVar8 = 0;
            if (pppplStack_280 != pppplStack_288) {
              lVar8 = ((long)pppplStack_280 - (long)pppplStack_288) * 0x40 + -1;
            }
            pplVar13 = pplStack_400;
            pplStack_3f8 = unaff_x25;
            lVar16 = lVar26;
            lStack_268 = lVar26;
            pplVar29 = pplStack_f0;
            if ((lVar8 - (lVar32 + (long)pppplStack_270)) - 0x3ffU < 0xfffffffffffffc00) {
              pppplVar23 = pppplStack_280 + -1;
              __ZdlPv(*pppplVar23);
              pppplStack_280 = pppplVar23;
              pplVar29 = pplStack_f0;
            }
          }
          else {
            plVar21 = pplVar22[3] + (long)unaff_x25[3] * 2;
            lVar16 = *plVar21;
            plVar30 = *(long **)(lVar16 + 0x18);
            plVar27 = *(long **)(lVar16 + 0x20);
            if (plVar27 != (long *)0x0) {
              plVar1 = plVar27 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plStack_210 = plVar30;
            plStack_208 = plVar27;
            if (plVar30 == (long *)0x0) {
              lVar16 = lStack_3a0;
              FUN_109a219fc(lStack_3a0,uStack_398,*plVar21);
              if (lVar16 == 0) {
                func_0x000105688514(&UNK_10f594877);
                goto LAB_109a20d34;
              }
LAB_109a1fffc:
              unaff_x25[3] = (long *)((long)unaff_x25[3] + 1);
            }
            else {
              pplVar22 = pplVar29;
              FUN_109a2191c(pplVar29,pplStack_e8,plVar30);
              if (pplVar22 != (long **)0x0) {
                if ((long *)(plVar30[4] - plVar30[3] >> 4) <= pplVar22[3]) goto LAB_109a1fffc;
                func_0x000105688514(&UNK_10f5948e4);
                goto LAB_109a20d34;
              }
              uVar12 = ((ulong)(uint)((int)plVar30 << 3) + 8 ^ (ulong)plVar30 >> 0x20) *
                       -0x622015f714c7d297;
              uVar12 = ((ulong)plVar30 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
              unaff_x25 = (long **)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
              if (pplVar17 != (long **)0x0) {
                uVar12 = (long)pplVar17 - 1;
                if (((ulong)pplVar17 & uVar12) == 0) {
                  unaff_x26 = (long **)(uVar12 & (ulong)unaff_x25);
                }
                else {
                  unaff_x26 = unaff_x25;
                  if (pplVar17 <= unaff_x25) {
                    uVar14 = 0;
                    if (pplVar17 != (long **)0x0) {
                      uVar14 = (ulong)unaff_x25 / (ulong)pplVar17;
                    }
                    unaff_x26 = (long **)((long)unaff_x25 - uVar14 * (long)pplVar17);
                  }
                }
                plVar21 = pplVar29[(long)unaff_x26];
                if (plVar21 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar21 = (long *)*plVar21;
                      if (plVar21 == (long *)0x0) goto LAB_109a200b4;
                      pplVar29 = (long **)plVar21[1];
                      if (pplVar29 != unaff_x25) break;
                      if ((long *)plVar21[2] == plVar30) goto LAB_109a201c8;
                    }
                    if (((ulong)pplVar17 & uVar12) == 0) {
                      pplVar29 = (long **)((ulong)pplVar29 & uVar12);
                    }
                    else if (pplVar17 <= pplVar29) {
                      uVar14 = 0;
                      if (pplVar17 != (long **)0x0) {
                        uVar14 = (ulong)pplVar29 / (ulong)pplVar17;
                      }
                      pplVar29 = (long **)((long)pplVar29 - uVar14 * (long)pplVar17);
                    }
                  } while (pplVar29 == unaff_x26);
                }
              }
LAB_109a200b4:
              plVar21 = (long *)0x20;
              __Znwm();
              *plVar21 = 0;
              plVar21[1] = (long)unaff_x25;
              plVar21[2] = (long)plVar30;
              plVar21[3] = 0;
              if ((pplVar17 == (long **)0x0) ||
                 ((float)uStack_d0 * (float)pplVar17 < (float)(lStack_d8 + 1))) {
                uVar12 = 1;
                if ((long **)0x2 < pplVar17) {
                  uVar12 = (ulong)(((ulong)pplVar17 & (long)pplVar17 - 1U) != 0);
                }
                uVar12 = uVar12 | (long)pplVar17 << 1;
                uVar14 = (ulong)((float)(lStack_d8 + 1) / (float)uStack_d0);
                if (uVar12 <= uVar14) {
                  uVar12 = uVar14;
                }
                FUN_109a212f0(&pplStack_f0,uVar12);
                pplVar17 = pplStack_e8;
                if (((ulong)pplStack_e8 & (long)pplStack_e8 - 1U) == 0) {
                  unaff_x26 = (long **)((long)pplStack_e8 - 1U & (ulong)unaff_x25);
                }
                else {
                  unaff_x26 = unaff_x25;
                  if (pplStack_e8 <= unaff_x25) {
                    uVar12 = 0;
                    if (pplStack_e8 != (long **)0x0) {
                      uVar12 = (ulong)unaff_x25 / (ulong)pplStack_e8;
                    }
                    unaff_x26 = (long **)((long)unaff_x25 - uVar12 * (long)pplStack_e8);
                  }
                }
              }
              pplVar29 = (long **)pplStack_f0[(long)unaff_x26];
              if (pplVar29 == (long **)0x0) {
                *plVar21 = (long)plStack_e0;
                pplStack_f0[(long)unaff_x26] = (long *)&plStack_e0;
                plStack_e0 = plVar21;
                if (*plVar21 != 0) {
                  pplVar29 = *(long ***)(*plVar21 + 8);
                  if (((ulong)pplVar17 & (long)pplVar17 - 1U) == 0) {
                    pplVar29 = (long **)((ulong)pplVar29 & (long)pplVar17 - 1U);
                  }
                  else if (pplVar17 <= pplVar29) {
                    uVar12 = 0;
                    if (pplVar17 != (long **)0x0) {
                      uVar12 = (ulong)pplVar29 / (ulong)pplVar17;
                    }
                    pplVar29 = (long **)((long)pplVar29 - uVar12 * (long)pplVar17);
                  }
                  pplVar29 = pplStack_f0 + (long)pplVar29;
                  goto LAB_109a201b8;
                }
              }
              else {
                *plVar21 = (long)*pplVar29;
LAB_109a201b8:
                *pplVar29 = plVar21;
              }
              lStack_d8 = lStack_d8 + 1;
LAB_109a201c8:
              FUN_109a214c0(&pppplStack_290,plVar30);
            }
            lVar16 = lStack_268;
            pplVar29 = pplStack_f0;
            if (plVar27 != (long *)0x0) {
              plVar21 = plVar27 + 1;
              do {
                lVar26 = *plVar21;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar4) {
                  *plVar21 = lVar26 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                lVar16 = lStack_268;
                pplVar29 = pplStack_f0;
              }
            }
          }
        }
      }
LAB_109a20214:
      pppplVar24 = pppplVar24 + 2;
    } while (pppplVar24 != pppplVar7);
  }
  FUN_109a21b20(&pppplStack_290);
  FUN_109a21be8(&pplStack_f0);
  func_0x000107c31940(&pplStack_108,&DAT_10f638aa8);
  pplStack_e8 = pplStack_100;
  pplStack_f0 = pplStack_108;
  plStack_e0 = plStack_f8;
  pplStack_100 = (long **)0x0;
  plStack_f8 = (long *)0x0;
  pplStack_108 = (long **)0x0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0x3f800000;
  uStack_b0 = 0;
  pplStack_128 = (long **)0x0;
  lStack_130 = 0;
  lStack_118 = 0;
  plStack_120 = (long *)0x0;
  fStack_110 = 1.0;
  uStack_140 = 0;
  ppplStack_148 = (long ***)0x0;
  uStack_138 = 0;
  pplVar31 = pplStack_128;
  lVar16 = lStack_130;
  if (pplStack_400 != pplStack_3f8) {
    pplVar13 = pplStack_400;
    do {
      plVar21 = *pplVar13;
      pppplStack_158 = (long ****)0x0;
      pppplStack_160 = (long ****)0x0;
      lStack_150 = 0;
      FUN_109a21c30(&pppplStack_160,plVar21[4] - plVar21[3] >> 4);
      puVar2 = (undefined8 *)plVar21[4];
      for (puVar19 = (undefined8 *)plVar21[3]; puVar19 != puVar2; puVar19 = puVar19 + 2) {
        plVar30 = (long *)*puVar19;
        uVar12 = ((ulong)(uint)((int)plVar30 << 3) + 8 ^ (ulong)plVar30 >> 0x20) *
                 -0x622015f714c7d297;
        uVar12 = ((ulong)plVar30 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        pplVar31 = (long **)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        if (pplStack_128 != (long **)0x0) {
          uVar12 = (long)pplStack_128 - 1;
          if (((ulong)pplStack_128 & uVar12) == 0) {
            pplVar29 = (long **)((ulong)pplVar31 & uVar12);
          }
          else {
            pplVar29 = pplVar31;
            if (pplStack_128 <= pplVar31) {
              uVar14 = 0;
              if (pplStack_128 != (long **)0x0) {
                uVar14 = (ulong)pplVar31 / (ulong)pplStack_128;
              }
              pplVar29 = (long **)((long)pplVar31 - uVar14 * (long)pplStack_128);
            }
          }
          puVar18 = *(undefined8 **)(lStack_130 + (long)pplVar29 * 8);
          if (puVar18 != (undefined8 *)0x0) {
            for (plVar27 = (long *)*puVar18; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
              pplVar17 = (long **)plVar27[1];
              if (pplVar17 == pplVar31) {
                if ((long *)plVar27[2] == plVar30) goto LAB_109a20594;
              }
              else {
                if (((ulong)pplStack_128 & uVar12) == 0) {
                  pplVar17 = (long **)((ulong)pplVar17 & uVar12);
                }
                else if (pplStack_128 <= pplVar17) {
                  uVar14 = 0;
                  if (pplStack_128 != (long **)0x0) {
                    uVar14 = (ulong)pplVar17 / (ulong)pplStack_128;
                  }
                  pplVar17 = (long **)((long)pplVar17 - uVar14 * (long)pplStack_128);
                }
                if (pplVar17 != pplVar29) break;
              }
            }
          }
        }
        lVar16 = lStack_3a0;
        FUN_109a219fc(lStack_3a0,uStack_398,plVar30);
        (**(code **)(*plVar30 + 0x10))(auStack_180,plVar30);
        puVar9 = auStack_318;
        FUN_109a22fac(puVar9,lVar16 + 0x18,auStack_180);
        pplVar29 = pplStack_128;
        if (pplStack_128 != (long **)0x0) {
          uVar12 = (long)pplStack_128 - 1;
          if (((ulong)pplStack_128 & uVar12) == 0) {
            unaff_x26 = (long **)(uVar12 & (ulong)pplVar31);
          }
          else {
            unaff_x26 = pplVar31;
            if (pplStack_128 <= pplVar31) {
              uVar14 = 0;
              if (pplStack_128 != (long **)0x0) {
                uVar14 = (ulong)pplVar31 / (ulong)pplStack_128;
              }
              unaff_x26 = (long **)((long)pplVar31 - uVar14 * (long)pplStack_128);
            }
          }
          puVar18 = *(undefined8 **)(lStack_130 + (long)unaff_x26 * 8);
          if (puVar18 != (undefined8 *)0x0) {
            for (plVar27 = (long *)*puVar18; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
              pplVar17 = (long **)plVar27[1];
              if (pplVar17 == pplVar31) {
                if ((long *)plVar27[2] == plVar30) goto LAB_109a2058c;
              }
              else {
                if (((ulong)pplStack_128 & uVar12) == 0) {
                  pplVar17 = (long **)((ulong)pplVar17 & uVar12);
                }
                else if (pplStack_128 <= pplVar17) {
                  uVar14 = 0;
                  if (pplStack_128 != (long **)0x0) {
                    uVar14 = (ulong)pplVar17 / (ulong)pplStack_128;
                  }
                  pplVar17 = (long **)((long)pplVar17 - uVar14 * (long)pplStack_128);
                }
                if (pplVar17 != unaff_x26) break;
              }
            }
          }
        }
        plVar27 = (long *)0x20;
        __Znwm();
        *plVar27 = 0;
        plVar27[1] = (long)pplVar31;
        plVar27[2] = (long)plVar30;
        *(int *)(plVar27 + 3) = (int)puVar9;
        if ((pplVar29 == (long **)0x0) || (fStack_110 * (float)pplVar29 < (float)(lStack_118 + 1)))
        {
          uVar12 = 1;
          if ((long **)0x2 < pplVar29) {
            uVar12 = (ulong)(((ulong)pplVar29 & (long)pplVar29 - 1U) != 0);
          }
          uVar12 = uVar12 | (long)pplVar29 << 1;
          uVar14 = (ulong)((float)(lStack_118 + 1) / fStack_110);
          if (uVar12 <= uVar14) {
            uVar12 = uVar14;
          }
          FUN_109a22050(&lStack_130,uVar12);
          pplVar29 = pplStack_128;
          if (((ulong)pplStack_128 & (long)pplStack_128 - 1U) == 0) {
            unaff_x26 = (long **)((long)pplStack_128 - 1U & (ulong)pplVar31);
          }
          else {
            unaff_x26 = pplVar31;
            if (pplStack_128 <= pplVar31) {
              uVar12 = 0;
              if (pplStack_128 != (long **)0x0) {
                uVar12 = (ulong)pplVar31 / (ulong)pplStack_128;
              }
              unaff_x26 = (long **)((long)pplVar31 - uVar12 * (long)pplStack_128);
            }
          }
        }
        plVar30 = *(long **)(lStack_130 + (long)unaff_x26 * 8);
        if (plVar30 == (long *)0x0) {
          *plVar27 = (long)plStack_120;
          *(long ***)(lStack_130 + (long)unaff_x26 * 8) = &plStack_120;
          plStack_120 = plVar27;
          if (*plVar27 != 0) {
            pplVar31 = *(long ***)(*plVar27 + 8);
            if (((ulong)pplVar29 & (long)pplVar29 - 1U) == 0) {
              pplVar31 = (long **)((ulong)pplVar31 & (long)pplVar29 - 1U);
            }
            else if (pplVar29 <= pplVar31) {
              uVar12 = 0;
              if (pplVar29 != (long **)0x0) {
                uVar12 = (ulong)pplVar31 / (ulong)pplVar29;
              }
              pplVar31 = (long **)((long)pplVar31 - uVar12 * (long)pplVar29);
            }
            plVar30 = (long *)(lStack_130 + (long)pplVar31 * 8);
            goto LAB_109a2057c;
          }
        }
        else {
          *plVar27 = *plVar30;
LAB_109a2057c:
          *plVar30 = (long)plVar27;
        }
        lStack_118 = lStack_118 + 1;
LAB_109a2058c:
        func_0x000109a1cb94(auStack_180);
LAB_109a20594:
        func_0x000109a21cc0(&pppplStack_160,plVar27 + 3);
      }
      lStack_198 = 0;
      lStack_1a0 = 0;
      uStack_190 = 0;
      FUN_109a21c30(&lStack_1a0,plVar21[7] - plVar21[6] >> 4);
      if (plVar21[7] != plVar21[6]) {
        uVar12 = 0;
        do {
          FUN_109a22a14(&plStack_210,plVar21,uVar12);
          FUN_109a210b8(&ppplStack_148,&plStack_210);
          plVar30 = plStack_210;
          lVar16 = lStack_3d0;
          FUN_109a219fc(lStack_3d0,uStack_3c8,plStack_210);
          if (lVar16 == 0) {
            FUN_109a21d80(&pppplStack_290,&uStack_360);
            (**(code **)(*plStack_210 + 0x10))(auStack_1e0);
            puVar9 = auStack_318;
            FUN_109a22db8(puVar9,&pppplStack_290,auStack_1e0);
            uVar6 = SUB84(puVar9,0);
            ppuStack_a0 = (undefined8 **)CONCAT44(ppuStack_a0._4_4_,uVar6);
            func_0x000109a1cb94(auStack_1e0);
            if ((long)pppplStack_280 < 0) {
              __ZdlPv(pppplStack_290);
            }
          }
          else {
            (**(code **)(*plVar30 + 0x10))(auStack_1c0,plVar30);
            puVar9 = auStack_318;
            FUN_109a23164(puVar9,lVar16 + 0x18,auStack_1c0);
            uVar6 = SUB84(puVar9,0);
            ppuStack_a0 = (undefined8 **)CONCAT44(ppuStack_a0._4_4_,uVar6);
            func_0x000109a1cb94(auStack_1c0);
          }
          pplVar31 = pplStack_128;
          plVar30 = plStack_210;
          uVar14 = ((ulong)(uint)((int)plStack_210 << 3) + 8 ^ (ulong)plStack_210 >> 0x20) *
                   -0x622015f714c7d297;
          uVar14 = ((ulong)plStack_210 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          pplVar29 = (long **)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
          if (pplStack_128 != (long **)0x0) {
            uVar14 = (long)pplStack_128 - 1;
            if (((ulong)pplStack_128 & uVar14) == 0) {
              unaff_x26 = (long **)((ulong)pplVar29 & uVar14);
            }
            else {
              unaff_x26 = pplVar29;
              if (pplStack_128 <= pplVar29) {
                uVar15 = 0;
                if (pplStack_128 != (long **)0x0) {
                  uVar15 = (ulong)pplVar29 / (ulong)pplStack_128;
                }
                unaff_x26 = (long **)((long)pplVar29 - uVar15 * (long)pplStack_128);
              }
            }
            plVar27 = *(long **)(lStack_130 + (long)unaff_x26 * 8);
            if (plVar27 != (long *)0x0) {
              do {
                while( true ) {
                  plVar27 = (long *)*plVar27;
                  if (plVar27 == (long *)0x0) goto LAB_109a2074c;
                  pplVar17 = (long **)plVar27[1];
                  if (pplVar17 != pplVar29) break;
                  if ((long *)plVar27[2] == plStack_210) goto LAB_109a20864;
                }
                if (((ulong)pplStack_128 & uVar14) == 0) {
                  pplVar17 = (long **)((ulong)pplVar17 & uVar14);
                }
                else if (pplStack_128 <= pplVar17) {
                  uVar15 = 0;
                  if (pplStack_128 != (long **)0x0) {
                    uVar15 = (ulong)pplVar17 / (ulong)pplStack_128;
                  }
                  pplVar17 = (long **)((long)pplVar17 - uVar15 * (long)pplStack_128);
                }
              } while (pplVar17 == unaff_x26);
            }
          }
LAB_109a2074c:
          plVar27 = (long *)0x20;
          __Znwm();
          *plVar27 = 0;
          plVar27[1] = (long)pplVar29;
          plVar27[2] = (long)plVar30;
          *(undefined4 *)(plVar27 + 3) = uVar6;
          if ((pplVar31 == (long **)0x0) || (fStack_110 * (float)pplVar31 < (float)(lStack_118 + 1))
             ) {
            uVar14 = 1;
            if ((long **)0x2 < pplVar31) {
              uVar14 = (ulong)(((ulong)pplVar31 & (long)pplVar31 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)pplVar31 << 1;
            uVar15 = (ulong)((float)(lStack_118 + 1) / fStack_110);
            if (uVar14 <= uVar15) {
              uVar14 = uVar15;
            }
            FUN_109a22050(&lStack_130,uVar14);
            pplVar31 = pplStack_128;
            if (((ulong)pplStack_128 & (long)pplStack_128 - 1U) == 0) {
              unaff_x26 = (long **)((long)pplStack_128 - 1U & (ulong)pplVar29);
            }
            else {
              unaff_x26 = pplVar29;
              if (pplStack_128 <= pplVar29) {
                uVar14 = 0;
                if (pplStack_128 != (long **)0x0) {
                  uVar14 = (ulong)pplVar29 / (ulong)pplStack_128;
                }
                unaff_x26 = (long **)((long)pplVar29 - uVar14 * (long)pplStack_128);
              }
            }
          }
          plVar30 = *(long **)(lStack_130 + (long)unaff_x26 * 8);
          if (plVar30 == (long *)0x0) {
            *plVar27 = (long)plStack_120;
            *(long ***)(lStack_130 + (long)unaff_x26 * 8) = &plStack_120;
            plStack_120 = plVar27;
            if (*plVar27 != 0) {
              pplVar29 = *(long ***)(*plVar27 + 8);
              if (((ulong)pplVar31 & (long)pplVar31 - 1U) == 0) {
                pplVar29 = (long **)((ulong)pplVar29 & (long)pplVar31 - 1U);
              }
              else if (pplVar31 <= pplVar29) {
                uVar14 = 0;
                if (pplVar31 != (long **)0x0) {
                  uVar14 = (ulong)pplVar29 / (ulong)pplVar31;
                }
                pplVar29 = (long **)((long)pplVar29 - uVar14 * (long)pplVar31);
              }
              plVar30 = (long *)(lStack_130 + (long)pplVar29 * 8);
              goto LAB_109a20854;
            }
          }
          else {
            *plVar27 = *plVar30;
LAB_109a20854:
            *plVar30 = (long)plVar27;
          }
          lStack_118 = lStack_118 + 1;
LAB_109a20864:
          func_0x000109a21cc0(&lStack_1a0,&ppuStack_a0);
          plVar30 = plStack_208;
          if (plStack_208 != (long *)0x0) {
            plVar27 = plStack_208 + 1;
            do {
              lVar16 = *plVar27;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar4) {
                *plVar27 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_208 + 0x10))(plStack_208);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulong)(plVar21[7] - plVar21[6] >> 4));
      }
      (**(code **)(*plVar21 + 0x10))(&plStack_210,plVar21,auStack_318,&uStack_360);
      FUN_109a21d80(&pppplStack_290,&pplStack_f0);
      lStack_268 = lStack_150;
      pppplStack_270 = pppplStack_158;
      pppplStack_278 = pppplStack_160;
      lStack_150 = 0;
      pppplStack_158 = (long ****)0x0;
      pppplStack_160 = (long ****)0x0;
      lStack_258 = lStack_198;
      lStack_260 = lStack_1a0;
      uStack_250 = uStack_190;
      lStack_1a0 = 0;
      lStack_198 = 0;
      uStack_190 = 0;
      if ((char)bStack_1f9 < '\0') {
        func_0x000107c3192c(&plStack_248,plStack_210,plStack_208);
      }
      else {
        plStack_240 = plStack_208;
        plStack_248 = plStack_210;
        lStack_238 = (ulong)bStack_1f9 << 0x38;
      }
      puVar18 = puStack_1f0;
      puVar19 = puStack_1f8;
      puStack_230 = (undefined8 *)0x0;
      puStack_228 = (undefined8 *)0x0;
      lStack_220 = 0;
      puVar2 = (undefined8 *)((long)puStack_1f0 - (long)puStack_1f8);
      if (puVar2 != (undefined8 *)0x0) {
        if ((long)puVar2 < 0) {
          FUN_109a22220();
          goto LAB_109a20d34;
        }
        puVar10 = puVar2;
        __Znwm();
        lStack_220 = (long)puVar10 + (long)puVar2;
        ppuStack_98 = &puStack_80;
        ppuStack_90 = apuStack_78;
        uStack_88 = 0;
        puStack_230 = puVar10;
        puStack_228 = puVar10;
        ppuStack_a0 = &puStack_230;
        puStack_80 = puVar10;
        do {
          apuStack_78[0] = puVar10;
          if (*(char *)((long)puVar19 + 0x17) < '\0') {
            func_0x000107c3192c(puVar10,*puVar19,puVar19[1]);
          }
          else {
            uVar34 = puVar19[1];
            uVar33 = *puVar19;
            puVar10[2] = puVar19[2];
            puVar10[1] = uVar34;
            *puVar10 = uVar33;
          }
          *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar19 + 3);
          puVar19 = puVar19 + 4;
          puVar10 = apuStack_78[0] + 4;
        } while (puVar19 != puVar18);
        uStack_88 = 1;
        apuStack_78[0] = puVar10;
        FUN_109a22234(&ppuStack_a0);
        puStack_228 = puVar10;
      }
      FUN_109a2366c(auStack_318,&pppplStack_290);
      func_0x000109a22290(&puStack_230);
      if (lStack_238 < 0) {
        __ZdlPv(plStack_248);
      }
      if (lStack_260 != 0) {
        lStack_258 = lStack_260;
        __ZdlPv();
      }
      if (pppplStack_278 != (long ****)0x0) {
        pppplStack_270 = pppplStack_278;
        __ZdlPv();
      }
      if ((long)pppplStack_280 < 0) {
        __ZdlPv(pppplStack_290);
      }
      func_0x000109a22290(&puStack_1f8);
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(plStack_210);
      }
      if (lStack_1a0 != 0) {
        __ZdlPv();
      }
      if (pppplStack_160 != (long ****)0x0) {
        __ZdlPv();
      }
      pplVar13 = pplVar13 + 1;
      pplVar31 = pplStack_128;
      lVar16 = lStack_130;
    } while (pplVar13 != pplStack_3f8);
  }
  do {
    plVar28 = (long *)*plVar28;
    if (plVar28 == (long *)0x0) goto LAB_109a20b18;
    lVar26 = lVar16;
    FUN_109a22300(lVar16,pplVar31,plVar28[5]);
  } while (lVar26 != 0);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&plStack_210,&UNK_10f5946fe,plVar28 + 2);
  FUN_109259240(&pppplStack_290,&plStack_210,&UNK_10f59493c);
  func_0x000105687ee0(&pppplStack_290);
LAB_109a20d34:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a20d38);
  (*pcVar5)();
}



/* Entry: 109a2101c; end: 109a210b7;  */

void FUN_109a2101c(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar2 = param_2;
  func_0x000107c2827c(param_1 + 0x18,param_2,param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_50,&UNK_10f594820,param_2);
  FUN_109259240(auStack_38,auStack_50,&UNK_10f594863);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a21084);
  (*pcVar1)();
}



/* Entry: 109a210b8; end: 109a211cb;  */

long * FUN_109a210b8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar10 = puVar10 + 2;
    plVar5 = param_1;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109a21204();
      func_0x000107c2826c(param_1 + 3);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    puVar6 = param_2;
    plStack_38 = param_1;
    FUN_109a21218();
    puVar2 = (undefined8 *)(uVar9 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar10 = puVar2 + 2;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = uVar9 + (long)puVar6 * 0x10;
    plVar5 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109a2124c(plVar5);
  }
  param_1[1] = (long)puVar10;
  return plVar5;
}



/* Entry: 109a211cc; end: 109a21203;  */

undefined8 * FUN_109a211cc(undefined8 *param_1)

{
  func_0x000107c2826c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109a21204; end: 109a21217;  */

undefined1  [16] FUN_109a21204(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x000109a21298();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109a21218; end: 109a212ef;  */

undefined1  [16] FUN_109a21218(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x000109a21298();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109a212f0; end: 109a214bf;  */

void FUN_109a212f0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  
  plVar10 = param_1;
  plVar14 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = param_2;
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 > param_2 || param_2 == plVar17) {
    if (plVar17 <= param_2) {
      return;
    }
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (param_2 <= plVar10) {
      param_2 = plVar10;
    }
    if (plVar17 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar10 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
      plVar10 = (long *)((long)plVar10 + 1);
    } while (param_2 != plVar10);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      plVar14 = (long *)plVar10[1];
      uVar11 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar11) == 0) {
        plVar14 = (long *)((ulong)plVar14 & uVar11);
      }
      else if (param_2 <= plVar14) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar14 / (ulong)param_2;
        }
        plVar14 = (long *)((long)plVar14 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
      plVar17 = (long *)*plVar10;
      while (plVar17 != (long *)0x0) {
        plVar16 = (long *)plVar17[1];
        if (((ulong)param_2 & uVar11) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar11);
        }
        else if (param_2 <= plVar16) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar16 / (ulong)param_2;
          }
          plVar16 = (long *)((long)plVar16 - uVar3 * (long)param_2);
        }
        plVar12 = plVar17;
        if (plVar16 != plVar14) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar16 * 8) = plVar10;
            plVar14 = plVar16;
          }
          else {
            *plVar10 = *plVar17;
            *plVar17 = **(undefined8 **)(lVar4 + (long)plVar16 * 8);
            **(long **)(lVar4 + (long)plVar16 * 8) = (long)plVar17;
            plVar12 = plVar10;
          }
        }
        plVar10 = plVar12;
        plVar17 = (long *)*plVar12;
      }
    }
    return;
  }
  func_0x000104c4f740();
  puVar22 = (undefined8 *)plVar10[1];
  puVar15 = (undefined8 *)plVar10[2];
  uVar3 = (long)puVar15 - (long)puVar22;
  uVar11 = 0;
  if (uVar3 != 0) {
    uVar11 = ((long)puVar15 - (long)puVar22) * 0x40 - 1;
  }
  uVar1 = plVar10[4];
  lVar4 = plVar10[5];
  uVar13 = lVar4 + uVar1;
  if (uVar11 != uVar13) goto LAB_109a2178c;
  if (uVar1 < 0x200) {
    puVar19 = (undefined8 *)plVar10[3];
    puVar20 = (undefined8 *)*plVar10;
    if (uVar3 < (ulong)((long)puVar19 - (long)puVar20)) {
      uVar7 = 0x1000;
      plVar17 = plVar14;
      __Znwm();
      if (puVar19 == puVar15) {
        if (puVar22 == puVar20) {
          lVar4 = (long)puVar19 - (long)puVar22 >> 2;
          if (puVar15 == puVar22) {
            lVar4 = 1;
          }
          lVar5 = lVar4 * 2;
          FUN_109a218e8();
          puVar22 = (undefined8 *)(lVar4 + (lVar5 + 6U & 0xfffffffffffffff8));
          lVar5 = plVar10[2] - plVar10[1];
          puVar15 = puVar22;
          if (lVar5 != 0) {
            puVar15 = (undefined8 *)((long)puVar22 + lVar5);
            puVar19 = (undefined8 *)plVar10[1];
            puVar20 = puVar22;
            do {
              *puVar20 = *puVar19;
              lVar5 = lVar5 + -8;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            } while (lVar5 != 0);
          }
          lVar5 = *plVar10;
          *plVar10 = lVar4;
          plVar10[1] = (long)puVar22;
          plVar10[2] = (long)puVar15;
          plVar10[3] = lVar4 + (long)plVar17 * 8;
          if (lVar5 != 0) {
            __ZdlPv(lVar5);
            puVar22 = (undefined8 *)plVar10[1];
          }
        }
        puVar22[-1] = uVar7;
        lVar4 = plVar10[1];
        plVar10[1] = lVar4 + -8;
        uVar7 = *(undefined8 *)(lVar4 + -8);
        plVar10[1] = lVar4;
        goto LAB_109a21520;
      }
      *puVar15 = uVar7;
      plVar10[2] = plVar10[2] + 8;
    }
    else {
      plVar17 = (long *)((long)puVar19 - (long)puVar20 >> 2);
      if (puVar19 == puVar20) {
        plVar17 = (long *)0x1;
      }
      plVar8 = plVar14;
      FUN_109a218e8();
      lVar4 = 0x1000;
      plVar9 = plVar8;
      __Znwm();
      plVar16 = (long *)((long)plVar17 + uVar3);
      plVar12 = plVar17 + (long)plVar8;
      plVar6 = plVar17;
      if (uVar3 == (long)plVar8 * 8) {
        if ((long)uVar3 < 1) {
          plVar16 = (long *)((long)plVar16 - (long)plVar17 >> 2);
          if (puVar15 == puVar22) {
            plVar16 = (long *)0x1;
          }
          plVar6 = plVar16;
          FUN_109a218e8();
          plVar16 = plVar6 + ((ulong)plVar16 >> 2);
          plVar12 = plVar6 + (long)plVar9;
          if (plVar17 != (long *)0x0) {
            __ZdlPv(plVar17);
          }
        }
        else {
          lVar5 = ((long)plVar16 - (long)plVar17 >> 3) + 1;
          plVar16 = plVar16 + -((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
        }
      }
      plVar17 = plVar16 + 1;
      *plVar16 = lVar4;
      plVar8 = (long *)plVar10[2];
      plVar18 = plVar6;
      if (plVar8 != (long *)plVar10[1]) {
        do {
          plVar6 = plVar18;
          plVar21 = plVar16;
          if (plVar16 == plVar18) {
            if (plVar17 < plVar12) {
              lVar4 = ((long)plVar12 - (long)plVar17 >> 3) + 1;
              lVar5 = (long)plVar17 - (long)plVar18;
              lVar2 = (long)plVar17 - (long)plVar18;
              plVar17 = plVar17 + ((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1);
              plVar21 = (long *)((long)plVar17 - lVar5);
              if (lVar2 != 0) {
                _memmove(plVar21,plVar16,lVar2);
                plVar9 = plVar16;
              }
            }
            else {
              plVar21 = (long *)((long)plVar12 - (long)plVar18 >> 2);
              if ((long)plVar12 - (long)plVar18 == 0) {
                plVar21 = (long *)0x1;
              }
              plVar6 = plVar21;
              FUN_109a218e8();
              plVar21 = (long *)((long)plVar6 + ((long)plVar21 * 2 + 6U & 0xfffffffffffffff8));
              lVar4 = (long)plVar17 - (long)plVar18;
              plVar17 = plVar21;
              if (lVar4 != 0) {
                plVar17 = (long *)((long)plVar21 + lVar4);
                plVar12 = plVar21;
                do {
                  *plVar12 = *plVar16;
                  lVar4 = lVar4 + -8;
                  plVar12 = plVar12 + 1;
                  plVar16 = plVar16 + 1;
                } while (lVar4 != 0);
              }
              plVar12 = plVar6 + (long)plVar9;
              if (plVar18 != (long *)0x0) {
                __ZdlPv(plVar18);
              }
            }
          }
          plVar8 = plVar8 + -1;
          plVar16 = plVar21 + -1;
          *plVar16 = *plVar8;
          plVar18 = plVar6;
        } while (plVar8 != (long *)plVar10[1]);
      }
      lVar4 = *plVar10;
      *plVar10 = (long)plVar6;
      plVar10[1] = (long)plVar16;
      plVar10[2] = (long)plVar17;
      plVar10[3] = (long)plVar12;
      if (lVar4 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    plVar10[4] = uVar1 - 0x200;
    uVar7 = *puVar22;
    plVar10[1] = (long)(puVar22 + 1);
LAB_109a21520:
    FUN_109a217ec(plVar10,uVar7);
  }
  puVar22 = (undefined8 *)plVar10[1];
  lVar4 = plVar10[5];
  uVar13 = plVar10[4] + lVar4;
LAB_109a2178c:
  *(long **)(puVar22[uVar13 >> 9] + (uVar13 & 0x1ff) * 8) = plVar14;
  plVar10[5] = lVar4 + 1;
  return;
}



/* Entry: 109a214c0; end: 109a217eb;  */

void FUN_109a214c0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar17 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)param_1[2];
  uVar9 = (long)puVar12 - (long)puVar17;
  uVar8 = 0;
  if (uVar9 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar17) * 0x40 - 1;
  }
  uVar1 = param_1[4];
  uVar10 = param_1[5];
  uVar11 = uVar10 + uVar1;
  if (uVar8 != uVar11) goto LAB_109a2178c;
  if (uVar1 < 0x200) {
    puVar13 = (undefined8 *)param_1[3];
    puVar15 = (undefined8 *)*param_1;
    if (uVar9 < (ulong)((long)puVar13 - (long)puVar15)) {
      uVar5 = 0x1000;
      puVar7 = param_2;
      __Znwm();
      if (puVar13 == puVar12) {
        if (puVar17 == puVar15) {
          uVar8 = (long)puVar13 - (long)puVar17 >> 2;
          if (puVar12 == puVar17) {
            uVar8 = 1;
          }
          lVar14 = uVar8 * 2;
          FUN_109a218e8();
          puVar17 = (undefined8 *)(uVar8 + (lVar14 + 6U & 0xfffffffffffffff8));
          lVar14 = param_1[2] - (long)param_1[1];
          puVar12 = puVar17;
          if (lVar14 != 0) {
            puVar12 = (undefined8 *)((long)puVar17 + lVar14);
            puVar13 = (undefined8 *)param_1[1];
            puVar15 = puVar17;
            do {
              *puVar15 = *puVar13;
              lVar14 = lVar14 + -8;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar14 != 0);
          }
          uVar9 = *param_1;
          *param_1 = uVar8;
          param_1[1] = (ulong)puVar17;
          param_1[2] = (ulong)puVar12;
          param_1[3] = uVar8 + (long)puVar7 * 8;
          if (uVar9 != 0) {
            __ZdlPv(uVar9);
            puVar17 = (undefined8 *)param_1[1];
          }
        }
        puVar17[-1] = uVar5;
        uVar8 = param_1[1];
        param_1[1] = uVar8 - 8;
        uVar5 = *(undefined8 *)(uVar8 - 8);
        param_1[1] = uVar8;
        goto LAB_109a21520;
      }
      *puVar12 = uVar5;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar13 - (long)puVar15 >> 2);
      if (puVar13 == puVar15) {
        puVar7 = (undefined8 *)0x1;
      }
      puVar16 = param_2;
      FUN_109a218e8();
      uVar5 = 0x1000;
      puVar6 = puVar16;
      __Znwm();
      puVar13 = (undefined8 *)((long)puVar7 + uVar9);
      puVar15 = puVar7 + (long)puVar16;
      puVar4 = puVar7;
      if (uVar9 == (long)puVar16 * 8) {
        if ((long)uVar9 < 1) {
          puVar13 = (undefined8 *)((long)puVar13 - (long)puVar7 >> 2);
          if (puVar12 == puVar17) {
            puVar13 = (undefined8 *)0x1;
          }
          puVar4 = puVar13;
          FUN_109a218e8();
          puVar13 = puVar4 + ((ulong)puVar13 >> 2);
          puVar15 = puVar4 + (long)puVar6;
          if (puVar7 != (undefined8 *)0x0) {
            __ZdlPv(puVar7);
          }
        }
        else {
          lVar14 = ((long)puVar13 - (long)puVar7 >> 3) + 1;
          puVar13 = puVar13 + -((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
        }
      }
      puVar17 = puVar13 + 1;
      *puVar13 = uVar5;
      puVar12 = (undefined8 *)param_1[2];
      puVar7 = puVar4;
      if (puVar12 != (undefined8 *)param_1[1]) {
        do {
          puVar4 = puVar7;
          puVar16 = puVar13;
          if (puVar13 == puVar7) {
            if (puVar17 < puVar15) {
              lVar14 = ((long)puVar15 - (long)puVar17 >> 3) + 1;
              lVar2 = (long)puVar17 - (long)puVar7;
              lVar3 = (long)puVar17 - (long)puVar7;
              puVar17 = puVar17 + ((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
              puVar16 = (undefined8 *)((long)puVar17 - lVar2);
              if (lVar3 != 0) {
                _memmove(puVar16,puVar13,lVar3);
                puVar6 = puVar13;
              }
            }
            else {
              puVar16 = (undefined8 *)((long)puVar15 - (long)puVar7 >> 2);
              if ((long)puVar15 - (long)puVar7 == 0) {
                puVar16 = (undefined8 *)0x1;
              }
              puVar4 = puVar16;
              FUN_109a218e8();
              puVar16 = (undefined8 *)((long)puVar4 + ((long)puVar16 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar14 = (long)puVar17 - (long)puVar7;
              puVar17 = puVar16;
              if (lVar14 != 0) {
                puVar17 = (undefined8 *)((long)puVar16 + lVar14);
                puVar15 = puVar16;
                do {
                  *puVar15 = *puVar13;
                  lVar14 = lVar14 + -8;
                  puVar15 = puVar15 + 1;
                  puVar13 = puVar13 + 1;
                } while (lVar14 != 0);
              }
              puVar15 = puVar4 + (long)puVar6;
              if (puVar7 != (undefined8 *)0x0) {
                __ZdlPv(puVar7);
              }
            }
          }
          puVar12 = puVar12 + -1;
          puVar13 = puVar16 + -1;
          *puVar13 = *puVar12;
          puVar7 = puVar4;
        } while (puVar12 != (undefined8 *)param_1[1]);
      }
      uVar8 = *param_1;
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar13;
      param_1[2] = (ulong)puVar17;
      param_1[3] = (ulong)puVar15;
      if (uVar8 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar1 - 0x200;
    uVar5 = *puVar17;
    param_1[1] = (ulong)(puVar17 + 1);
LAB_109a21520:
    FUN_109a217ec(param_1,uVar5);
  }
  puVar17 = (undefined8 *)param_1[1];
  uVar10 = param_1[5];
  uVar11 = param_1[4] + uVar10;
LAB_109a2178c:
  *(undefined8 **)(puVar17[uVar11 >> 9] + (uVar11 & 0x1ff) * 8) = param_2;
  param_1[5] = uVar10 + 1;
  return;
}



/* Entry: 109a217ec; end: 109a218e7;  */

void FUN_109a217ec(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_109a218e8();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109a218e8; end: 109a2191b;  */

undefined1  [16] FUN_109a218e8(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  iVar4 = (int)param_3;
  if (param_1 >> 0x3d == 0) {
    lVar3 = param_1 << 3;
    __Znwm(lVar3);
    auVar11._8_8_ = param_1;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  func_0x000104c4f740();
  if (param_2 != 0) {
    uVar6 = ((ulong)(uint)(iVar4 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
    uVar6 = ((ulong)uVar5 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = param_2 - 1;
    if ((param_2 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (param_2 <= uVar6) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar6 / param_2;
        }
        uVar8 = uVar6 - uVar8 * param_2;
      }
    }
    plVar9 = *(long **)(param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == CONCAT44(uVar5,iVar4)) break;
        }
        else {
          if ((param_2 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (param_2 <= uVar10) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar10 / param_2;
            }
            uVar10 = uVar10 - uVar1 * param_2;
          }
          if (uVar10 != uVar8) goto LAB_109a219e0;
        }
      }
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = plVar9;
      return auVar12;
    }
  }
LAB_109a219e0:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 109a2191c; end: 109a219e7;  */

long * FUN_109a2191c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a219e8; end: 109a219fb;  */

long * FUN_109a219e8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  iVar4 = (int)param_3;
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 != 0) {
    uVar6 = ((ulong)(uint)(iVar4 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
    uVar6 = ((ulong)uVar5 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = param_2 - 1;
    if ((param_2 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (param_2 <= uVar6) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar6 / param_2;
        }
        uVar8 = uVar6 - uVar8 * param_2;
      }
    }
    if (*(long **)(puVar2 + uVar8 * 8) != (long *)0x0) {
      plVar3 = (long *)**(long **)(puVar2 + uVar8 * 8);
      do {
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar3[1];
        if (uVar6 - uVar9 == 0) {
          if (plVar3[2] == CONCAT44(uVar5,iVar4)) {
            return plVar3;
          }
        }
        else {
          if ((param_2 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          if (uVar9 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a219fc; end: 109a21ac7;  */

long * FUN_109a219fc(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a21ac8; end: 109a21b1f;  */

long FUN_109a21ac8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 109a21b20; end: 109a21be7;  */

long * FUN_109a21b20(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_109a21b90;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_109a21b90:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a21be8; end: 109a21c2f;  */

long * FUN_109a21be8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a21c30; end: 109a21d7f;  */

long * FUN_109a21c30(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 ***pppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 **appuStack_e0 [2];
  char cStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  long lStack_b8;
  
  lVar9 = *param_1;
  if ((undefined4 *)(param_1[2] - lVar9 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_109a22008();
      puVar7 = (undefined4 *)param_1[1];
      if (puVar7 < (undefined4 *)param_1[2]) {
        puVar13 = puVar7 + 1;
        *puVar7 = *param_2;
        plVar5 = param_1;
      }
      else {
        lVar9 = (long)puVar7 - *param_1;
        uVar1 = (lVar9 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
          FUN_109a22008();
          lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          *extraout_x8 = 0;
          extraout_x8[2] = 0;
          extraout_x8[1] = 0;
          do {
            uVar1 = param_1[1];
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
            }
            func_0x000104c4f768(appuStack_e0,uVar1 + 1,&ppuStack_f8);
            pppuVar2 = (undefined8 ***)appuStack_e0[0];
            if (-1 < cStack_c9) {
              pppuVar2 = appuStack_e0;
            }
            if (uVar1 != 0) {
              plVar5 = (long *)*param_1;
              if (-1 < *(char *)((long)param_1 + 0x17)) {
                plVar5 = param_1;
              }
              _memmove(pppuVar2,plVar5,uVar1);
            }
            *(undefined2 *)((long)pppuVar2 + uVar1) = 0x5f;
            *(int *)(param_1 + 8) = (int)param_1[8] + 1;
            __ZNSt3__19to_stringEi(&ppuStack_f8);
            uVar1 = uStack_f0;
            pppuVar2 = (undefined8 ***)ppuStack_f8;
            if (-1 < (char)bStack_e1) {
              uVar1 = (ulong)bStack_e1;
              pppuVar2 = &ppuStack_f8;
            }
            pppuVar6 = appuStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppuVar6,pppuVar2,uVar1);
            ppuVar3 = *pppuVar6;
            uStack_c8 = SUB87(pppuVar6[1],0);
            uStack_c1 = (undefined1)*(undefined8 *)((long)pppuVar6 + 0xf);
            uStack_c0 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar6 + 0xf) >> 8);
            uVar4 = *(undefined1 *)((long)pppuVar6 + 0x17);
            pppuVar6[1] = (undefined8 **)0x0;
            pppuVar6[2] = (undefined8 **)0x0;
            *pppuVar6 = (undefined8 **)0x0;
            if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
              __ZdlPv(*extraout_x8);
            }
            *extraout_x8 = ppuVar3;
            extraout_x8[1] = CONCAT17(uStack_c1,uStack_c8);
            *(ulong *)((long)extraout_x8 + 0xf) = CONCAT71(uStack_c0,uStack_c1);
            *(undefined1 *)((long)extraout_x8 + 0x17) = uVar4;
            if ((char)bStack_e1 < '\0') {
              __ZdlPv(ppuStack_f8);
            }
            if (cStack_c9 < '\0') {
              __ZdlPv(appuStack_e0[0]);
            }
            plVar5 = param_1 + 3;
            func_0x0001067e045c(plVar5,extraout_x8);
          } while (plVar5 != (long *)0x0);
          param_1 = param_1 + 3;
          func_0x000107c2827c(param_1,extraout_x8,extraout_x8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
            ___stack_chk_fail();
            if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
              __ZdlPv(*extraout_x8);
            }
            __Unwind_Resume();
            func_0x000109a22290(param_1 + 0xc);
            if (*(char *)((long)param_1 + 0x5f) < '\0') {
              __ZdlPv(param_1[9]);
            }
            if (param_1[6] != 0) {
              param_1[7] = param_1[6];
              __ZdlPv();
            }
            if (param_1[3] != 0) {
              param_1[4] = param_1[3];
              __ZdlPv();
            }
            if (*(char *)((long)param_1 + 0x17) < '\0') {
              __ZdlPv(*param_1);
            }
            return param_1;
          }
          return param_1;
        }
        uVar10 = param_1[2] - *param_1;
        uVar12 = (long)uVar10 >> 1;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar10) {
          uVar12 = 0x3fffffffffffffff;
        }
        puVar8 = param_2;
        FUN_109a2201c();
        lVar11 = *param_1;
        puVar7 = (undefined4 *)(uVar12 + lVar9);
        lVar9 = (long)puVar7 - (param_1[1] - lVar11);
        puVar13 = puVar7 + 1;
        *puVar7 = *param_2;
        _memcpy(lVar9,lVar11);
        plVar5 = (long *)*param_1;
        *param_1 = lVar9;
        param_1[1] = (long)puVar13;
        param_1[2] = uVar12 + (long)puVar8 * 4;
        if (plVar5 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar13;
      return plVar5;
    }
    lVar11 = param_1[1];
    puVar7 = param_2;
    FUN_109a2201c();
    lVar9 = (long)param_2 + (lVar11 - lVar9);
    lVar11 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    plVar5 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = lVar9;
    param_1[2] = (long)(param_2 + (long)puVar7);
    param_1 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar5;
    }
  }
  return param_1;
}



/* Entry: 109a21d80; end: 109a21f67;  */

long * FUN_109a21d80(undefined8 *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  undefined1 uVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 **appuStack_80 [2];
  char cStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  do {
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    func_0x000104c4f768(appuStack_80,uVar2 + 1,&ppuStack_98);
    pppuVar1 = (undefined8 ***)appuStack_80[0];
    if (-1 < cStack_69) {
      pppuVar1 = appuStack_80;
    }
    if (uVar2 != 0) {
      plVar6 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar6 = param_2;
      }
      _memmove(pppuVar1,plVar6,uVar2);
    }
    *(undefined2 *)((long)pppuVar1 + uVar2) = 0x5f;
    *(int *)(param_2 + 8) = (int)param_2[8] + 1;
    __ZNSt3__19to_stringEi(&ppuStack_98);
    uVar2 = uStack_90;
    pppuVar1 = (undefined8 ***)ppuStack_98;
    if (-1 < (char)bStack_81) {
      uVar2 = (ulong)bStack_81;
      pppuVar1 = &ppuStack_98;
    }
    pppuVar5 = appuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar5,pppuVar1,uVar2);
    ppuVar3 = *pppuVar5;
    uStack_68 = SUB87(pppuVar5[1],0);
    uStack_61 = (undefined1)*(undefined8 *)((long)pppuVar5 + 0xf);
    uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar5 + 0xf) >> 8);
    uVar4 = *(undefined1 *)((long)pppuVar5 + 0x17);
    pppuVar5[1] = (undefined8 **)0x0;
    pppuVar5[2] = (undefined8 **)0x0;
    *pppuVar5 = (undefined8 **)0x0;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    *param_1 = ppuVar3;
    param_1[1] = CONCAT17(uStack_61,uStack_68);
    *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_60,uStack_61);
    *(undefined1 *)((long)param_1 + 0x17) = uVar4;
    if ((char)bStack_81 < '\0') {
      __ZdlPv(ppuStack_98);
    }
    if (cStack_69 < '\0') {
      __ZdlPv(appuStack_80[0]);
    }
    plVar6 = param_2 + 3;
    func_0x0001067e045c(plVar6,param_1);
  } while (plVar6 != (long *)0x0);
  param_2 = param_2 + 3;
  func_0x000107c2827c(param_2,param_1,param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    __Unwind_Resume();
    func_0x000109a22290(param_2 + 0xc);
    if (*(char *)((long)param_2 + 0x5f) < '\0') {
      __ZdlPv(param_2[9]);
    }
    if (param_2[6] != 0) {
      param_2[7] = param_2[6];
      __ZdlPv();
    }
    if (param_2[3] != 0) {
      param_2[4] = param_2[3];
      __ZdlPv();
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
    return param_2;
  }
  return param_2;
}



/* Entry: 109a21f68; end: 109a22007;  */

undefined8 * FUN_109a21f68(undefined8 *param_1)

{
  func_0x000109a22290(param_1 + 0xc);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109a22008; end: 109a2201b;  */

/* WARNING: Removing unreachable block (ram,0x000109a22284) */

undefined1  [16] FUN_109a22008(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar2 >> 0x3e == 0) {
    lVar3 = (long)plVar2 << 2;
    __Znwm(lVar3);
    auVar13._8_8_ = plVar2;
    auVar13._0_8_ = lVar3;
    return auVar13;
  }
  func_0x000104c4f740();
  plVar4 = plVar2;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar12 = (long *)plVar2[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) goto LAB_109a2220c;
    plVar4 = (long *)(long)((float)(ulong)plVar2[3] / *(float *)(plVar2 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar12 <= param_2) goto LAB_109a2220c;
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*plVar2;
      *plVar2 = 0;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      plVar2[1] = 0;
      goto LAB_109a2220c;
    }
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    puVar5 = &DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if ((puVar5[0x18] & 1) == 0) {
      for (lVar3 = **(long **)(puVar5 + 0x10); lVar3 != **(long **)(puVar5 + 8);
          lVar3 = lVar3 + -0x20) {
      }
    }
    auVar15._8_8_ = plVar6;
    auVar15._0_8_ = puVar5;
    return auVar15;
  }
  lVar3 = (long)param_2 << 3;
  __Znwm();
  plVar4 = (long *)*plVar2;
  *plVar2 = lVar3;
  if (plVar4 != (long *)0x0) {
    __ZdlPv();
  }
  plVar12 = (long *)0x0;
  plVar2[1] = (long)param_2;
  do {
    *(undefined8 *)(*plVar2 + (long)plVar12 * 8) = 0;
    plVar12 = (long *)((long)plVar12 + 1);
  } while (param_2 != plVar12);
  plVar12 = (long *)plVar2[2];
  if (plVar12 != (long *)0x0) {
    plVar8 = (long *)plVar12[1];
    uVar7 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar8 & uVar7);
    }
    else if (param_2 <= plVar8) {
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar8 / (ulong)param_2;
      }
      plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
    }
    *(long **)(*plVar2 + (long)plVar8 * 8) = plVar2 + 2;
    plVar9 = (long *)*plVar12;
    while (plVar9 != (long *)0x0) {
      plVar11 = (long *)plVar9[1];
      if (((ulong)param_2 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar7);
      }
      else if (param_2 <= plVar11) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar1 * (long)param_2);
      }
      plVar10 = plVar9;
      if (plVar11 != plVar8) {
        lVar3 = *plVar2;
        if (*(long *)(lVar3 + (long)plVar11 * 8) == 0) {
          *(long **)(lVar3 + (long)plVar11 * 8) = plVar12;
          plVar8 = plVar11;
        }
        else {
          *plVar12 = *plVar9;
          *plVar9 = **(undefined8 **)(lVar3 + (long)plVar11 * 8);
          **(long **)(lVar3 + (long)plVar11 * 8) = (long)plVar9;
          plVar10 = plVar12;
        }
      }
      plVar12 = plVar10;
      plVar9 = (long *)*plVar10;
    }
  }
LAB_109a2220c:
  auVar14._8_8_ = plVar6;
  auVar14._0_8_ = plVar4;
  return auVar14;
}



/* Entry: 109a2201c; end: 109a2204f;  */

/* WARNING: Removing unreachable block (ram,0x000109a22284) */

undefined1  [16] FUN_109a2201c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar2 = (long)param_1 << 2;
    __Znwm(lVar2);
    auVar12._8_8_ = param_1;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  func_0x000104c4f740();
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) goto LAB_109a2220c;
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar11 <= param_2) goto LAB_109a2220c;
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      goto LAB_109a2220c;
    }
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    puVar4 = &DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if ((puVar4[0x18] & 1) == 0) {
      for (lVar2 = **(long **)(puVar4 + 0x10); lVar2 != **(long **)(puVar4 + 8);
          lVar2 = lVar2 + -0x20) {
      }
    }
    auVar14._8_8_ = plVar5;
    auVar14._0_8_ = puVar4;
    return auVar14;
  }
  lVar2 = (long)param_2 << 3;
  __Znwm();
  plVar3 = (long *)*param_1;
  *param_1 = lVar2;
  if (plVar3 != (long *)0x0) {
    __ZdlPv();
  }
  plVar11 = (long *)0x0;
  param_1[1] = (long)param_2;
  do {
    *(undefined8 *)(*param_1 + (long)plVar11 * 8) = 0;
    plVar11 = (long *)((long)plVar11 + 1);
  } while (param_2 != plVar11);
  plVar11 = (long *)param_1[2];
  if (plVar11 != (long *)0x0) {
    plVar7 = (long *)plVar11[1];
    uVar6 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar7 & uVar6);
    }
    else if (param_2 <= plVar7) {
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar11;
    while (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      if (((ulong)param_2 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar6);
      }
      else if (param_2 <= plVar10) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)param_2;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)param_2);
      }
      plVar9 = plVar8;
      if (plVar10 != plVar7) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
          *(long **)(lVar2 + (long)plVar10 * 8) = plVar11;
          plVar7 = plVar10;
        }
        else {
          *plVar11 = *plVar8;
          *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
          **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
          plVar9 = plVar11;
        }
      }
      plVar11 = plVar9;
      plVar8 = (long *)*plVar9;
    }
  }
LAB_109a2220c:
  auVar13._8_8_ = plVar5;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 109a22050; end: 109a2221f;  */

/* WARNING: Removing unreachable block (ram,0x000109a22284) */

long * FUN_109a22050(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((*(byte *)(plVar3 + 3) & 1) == 0) {
    for (lVar2 = *(long *)plVar3[2]; lVar2 != *(long *)plVar3[1]; lVar2 = lVar2 + -0x20) {
    }
  }
  return plVar3;
}



/* Entry: 109a22220; end: 109a22233;  */

/* WARNING: Removing unreachable block (ram,0x000109a22284) */

undefined * FUN_109a22220(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((puVar1[0x18] & 1) == 0) {
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x20
        ) {
    }
  }
  return puVar1;
}



/* Entry: 109a22234; end: 109a222ff;  */

/* WARNING: Removing unreachable block (ram,0x000109a22284) */

long FUN_109a22234(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 109a22300; end: 109a223cb;  */

long * FUN_109a22300(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a223cc; end: 109a22413;  */

long * FUN_109a223cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a22414; end: 109a224e7;  */

void FUN_109a22414(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000109a21298();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a224e8; end: 109a2290b;  */

undefined8 FUN_109a224e8(long *param_1,ulong param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  
  uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar14 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar14;
    }
    else {
      unaff_x25 = uVar14;
      if (uVar7 <= uVar14) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar14 / uVar7;
        }
        unaff_x25 = uVar14 - uVar10 * uVar7;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_109a225d0;
          uVar10 = plVar8[1];
          if (uVar10 != uVar14) break;
          if (plVar8[2] == param_2) {
            return 0;
          }
        }
        if ((uVar7 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (uVar7 <= uVar10) {
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar6 * uVar7;
        }
      } while (uVar10 == unaff_x25);
    }
  }
LAB_109a225d0:
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  plVar8[2] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar8 + 3,*param_4,param_4[1]);
  }
  else {
    lVar3 = *param_4;
    plVar8[4] = param_4[1];
    plVar8[3] = lVar3;
    plVar8[5] = param_4[2];
  }
  if ((uVar7 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar7))
  goto LAB_109a22808;
  uVar5 = 1;
  if (2 < uVar7) {
    uVar5 = (ulong)((uVar7 & uVar7 - 1) != 0);
  }
  uVar5 = uVar5 | uVar7 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < uVar5) {
LAB_109a22690:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109a228e4);
      (*pcVar2)();
    }
    lVar3 = uVar5 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = uVar5;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    plVar9 = (long *)param_1[2];
    uVar7 = uVar5;
    if (plVar9 != (long *)0x0) {
      uVar10 = plVar9[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar5 <= uVar10) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar13 * uVar5;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar9;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((uVar5 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar5 <= uVar13) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar13 / uVar5;
          }
          uVar13 = uVar13 - uVar1 * uVar5;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar13 * 8) == 0) {
            *(long **)(lVar3 + uVar13 * 8) = plVar9;
            uVar10 = uVar13;
          }
          else {
            *plVar9 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
            **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar5 < uVar7) {
    uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar10) {
      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 < uVar7) {
      if (uVar5 != 0) goto LAB_109a22690;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = param_1[1];
    }
  }
  if ((uVar7 & uVar7 - 1) == 0) {
    unaff_x25 = uVar7 - 1 & uVar14;
  }
  else {
    unaff_x25 = uVar14;
    if (uVar7 <= uVar14) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar14 / uVar7;
      }
      unaff_x25 = uVar14 - uVar5 * uVar7;
    }
  }
LAB_109a22808:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar9;
    if (*plVar8 != 0) {
      uVar14 = *(ulong *)(*plVar8 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar14 = uVar14 & uVar7 - 1;
      }
      else if (uVar7 <= uVar14) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar14 / uVar7;
        }
        uVar14 = uVar14 - uVar5 * uVar7;
      }
      *(long **)(*param_1 + uVar14 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
  return 1;
}



/* Entry: 109a2290c; end: 109a2293f;  */

void FUN_109a2290c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x2f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109a22940; end: 109a22a13;  */

undefined8 * FUN_109a22940(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b214b8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar4 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar4;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_109a22b78(param_1 + 6,param_3);
  plVar2 = (long *)param_1[3];
  do {
    if (plVar2 == (long *)param_1[4]) {
      return param_1;
    }
    lVar3 = *plVar2;
    plVar2 = plVar2 + 2;
  } while (lVar3 != 0);
  func_0x000105688514(&UNK_10f594975);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a229dc);
  (*pcVar1)();
}



/* Entry: 109a22a14; end: 109a22b6f;  */

void FUN_109a22a14(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_3 < (ulong)(param_2[7] - param_2[6] >> 4)) {
    plVar2 = (long *)(param_2[6] + param_3 * 0x10);
    *param_1 = 0;
    param_1[1] = 0;
    lVar6 = plVar2[1];
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar6;
      if ((lVar6 != 0) && (lVar6 = *plVar2, *param_1 = lVar6, lVar6 != 0)) {
        return;
      }
    }
    func_0x000109a21298(param_1);
    (**(code **)(*param_2 + 0x18))(param_1,param_2,param_3);
    lVar6 = *param_1;
    if (lVar6 != 0) {
      FUN_109a22cfc(auStack_40,param_2 + 1);
      FUN_109a23998(lVar6,auStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      plVar2 = (long *)(param_2[6] + param_3 * 0x10);
      lVar8 = param_1[1];
      lVar6 = *param_1;
      if (param_1[1] != 0) {
        plVar1 = (long *)(param_1[1] + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = plVar2[1];
      plVar2[1] = lVar8;
      *plVar2 = lVar6;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5949c9);
  }
  func_0x000105688514(&UNK_10f5949f5);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a22b4c);
  (*pcVar5)();
}



/* Entry: 109a22b70; end: 109a22b77;  */

void FUN_109a22b70(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a22b74);
  (*pcVar1)();
}



/* Entry: 109a22b78; end: 109a22bf3;  */

undefined8 * FUN_109a22b78(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109a22bf4(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 4);
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 109a22bf4; end: 109a22c2b;  */

void FUN_109a22bf4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_109a22c40();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_109a22c2c();
  puVar2 = (undefined8 *)&UNK_10f594a22;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar2 != 0) {
    FUN_109a22cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar2);
    return;
  }
  return;
}



/* Entry: 109a22c2c; end: 109a22c3f;  */

void FUN_109a22c2c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f594a22;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar1 != 0) {
    FUN_109a22cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 109a22c40; end: 109a22cb3;  */

void FUN_109a22c40(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*param_1 != 0) {
    FUN_109a22cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109a22cb4; end: 109a22cfb;  */

void FUN_109a22cb4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a22cfc; end: 109a22d3b;  */

undefined8 * FUN_109a22cfc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  FUN_1092315e8();
  *puVar2 = &PTR_FUN_110b21228;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((long)puVar2 + 0x34) = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = &DAT_11383d918;
  puVar2[0xf] = &DAT_11383d918;
  puVar2[0x10] = 0;
  func_0x000107c30248();
  *(undefined4 *)(puVar2 + 0x10) = 1;
  return puVar2;
}



/* Entry: 109a22d3c; end: 109a22db7;  */

undefined8 * FUN_109a22d3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b21228;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = &DAT_11383d918;
  param_1[0xf] = &DAT_11383d918;
  param_1[0x10] = 0;
  func_0x000107c30248(param_1 + 0xe,param_2,0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return param_1;
}



/* Entry: 109a22db8; end: 109a22f0b;  */

undefined8 FUN_109a22db8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110b21040;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &DAT_11383d918;
  func_0x000107c30248(&puStack_48,param_2,0);
  uStack_50 = uStack_50 | 1;
  if (uStack_40 == 0) {
    uVar2 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar2 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    func_0x000109a1d7c4();
    uStack_40 = uVar2;
  }
  uVar2 = uStack_40;
  if (uStack_40 != param_3) {
    uVar3 = *(ulong *)(uStack_40 + 8);
    uVar5 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar6 = *(ulong *)(param_3 + 8);
    uVar7 = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar5 == uVar7) {
      *(ulong *)(uStack_40 + 8) = uVar6;
      *(ulong *)(param_3 + 8) = uVar3;
      uVar4 = *(undefined8 *)(uStack_40 + 0x10);
      *(undefined8 *)(uStack_40 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      uVar1 = *(undefined4 *)(uStack_40 + 0x1c);
      *(undefined4 *)(uStack_40 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_3 + 0x1c) = uVar1;
    }
    else {
      func_0x000109a1c6d4(uStack_40);
      FUN_109a1c968(uVar2,param_3);
    }
  }
  FUN_109a22f0c(param_1,&ppuStack_60);
  FUN_109a1ce74(&ppuStack_60);
  return param_1;
}



/* Entry: 109a22f0c; end: 109a22fab;  */

undefined4 FUN_109a22f0c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  param_1 = param_1 + 0x10;
  func_0x000107c303b0(param_1,0x109a1d80c);
  if (param_1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar3) {
      FUN_109a1d324(param_1,param_2);
    }
    else {
      FUN_109a1ceec(param_1);
      FUN_109a1d21c(param_1,param_2);
    }
  }
  return uVar1;
}



/* Entry: 109a22fac; end: 109a230ff;  */

undefined8 FUN_109a22fac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110b21040;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &DAT_11383d918;
  func_0x000107c30248(&puStack_48,param_2,0);
  uStack_50 = uStack_50 | 1;
  if (uStack_40 == 0) {
    uVar2 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar2 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    func_0x000109a1d7c4();
    uStack_40 = uVar2;
  }
  uVar2 = uStack_40;
  if (uStack_40 != param_3) {
    uVar3 = *(ulong *)(uStack_40 + 8);
    uVar5 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar6 = *(ulong *)(param_3 + 8);
    uVar7 = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar5 == uVar7) {
      *(ulong *)(uStack_40 + 8) = uVar6;
      *(ulong *)(param_3 + 8) = uVar3;
      uVar4 = *(undefined8 *)(uStack_40 + 0x10);
      *(undefined8 *)(uStack_40 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      uVar1 = *(undefined4 *)(uStack_40 + 0x1c);
      *(undefined4 *)(uStack_40 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_3 + 0x1c) = uVar1;
    }
    else {
      func_0x000109a1c6d4(uStack_40);
      FUN_109a1c968(uVar2,param_3);
    }
  }
  FUN_109a23100(param_1,&ppuStack_60);
  FUN_109a1ce74(&ppuStack_60);
  return param_1;
}



/* Entry: 109a23100; end: 109a23163;  */

long FUN_109a23100(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  lVar2 = param_1;
  FUN_109a22f0c();
  piVar4 = (int *)(param_1 + 0x28);
  iVar3 = *piVar4;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar3 == iVar1) {
    func_0x000107c282d8(piVar4,iVar1,iVar1 + 1);
    iVar3 = *piVar4;
  }
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  *(int *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 4) = (int)lVar2;
  return lVar2;
}



/* Entry: 109a23164; end: 109a232b7;  */

undefined8 FUN_109a23164(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110b21040;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &DAT_11383d918;
  func_0x000107c30248(&puStack_48,param_2,0);
  uStack_50 = uStack_50 | 1;
  if (uStack_40 == 0) {
    uVar2 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar2 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    func_0x000109a1d7c4();
    uStack_40 = uVar2;
  }
  uVar2 = uStack_40;
  if (uStack_40 != param_3) {
    uVar3 = *(ulong *)(uStack_40 + 8);
    uVar5 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar6 = *(ulong *)(param_3 + 8);
    uVar7 = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar5 == uVar7) {
      *(ulong *)(uStack_40 + 8) = uVar6;
      *(ulong *)(param_3 + 8) = uVar3;
      uVar4 = *(undefined8 *)(uStack_40 + 0x10);
      *(undefined8 *)(uStack_40 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      uVar1 = *(undefined4 *)(uStack_40 + 0x1c);
      *(undefined4 *)(uStack_40 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_3 + 0x1c) = uVar1;
    }
    else {
      func_0x000109a1c6d4(uStack_40);
      FUN_109a1c968(uVar2,param_3);
    }
  }
  FUN_109a232b8(param_1,&ppuStack_60);
  FUN_109a1ce74(&ppuStack_60);
  return param_1;
}



/* Entry: 109a232b8; end: 109a2331b;  */

long FUN_109a232b8(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  lVar2 = param_1;
  FUN_109a22f0c();
  piVar4 = (int *)(param_1 + 0x40);
  iVar3 = *piVar4;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar3 == iVar1) {
    func_0x000107c282d8(piVar4,iVar1,iVar1 + 1);
    iVar3 = *piVar4;
  }
  *(int *)(param_1 + 0x40) = iVar3 + 1;
  *(int *)(*(long *)(param_1 + 0x48) + (long)iVar3 * 4) = (int)lVar2;
  return lVar2;
}



/* Entry: 109a2331c; end: 109a23527;  */

undefined8 FUN_109a2331c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110b21040;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &DAT_11383d918;
  func_0x000107c30248(&puStack_48,param_2,0);
  uStack_50 = uStack_50 | 1;
  if (uStack_40 == 0) {
    uVar2 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar2 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    func_0x000109a1d7c4();
    uStack_40 = uVar2;
  }
  uVar2 = uStack_40;
  if (uStack_40 != param_3) {
    uVar3 = *(ulong *)(uStack_40 + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar6 = *(ulong *)(param_3 + 8);
    uVar8 = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar4 == uVar8) {
      *(ulong *)(uStack_40 + 8) = uVar6;
      *(ulong *)(param_3 + 8) = uVar3;
      uVar5 = *(undefined8 *)(uStack_40 + 0x10);
      *(undefined8 *)(uStack_40 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar5;
      uVar1 = *(undefined4 *)(uStack_40 + 0x1c);
      *(undefined4 *)(uStack_40 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_3 + 0x1c) = uVar1;
    }
    else {
      func_0x000109a1c6d4(uStack_40);
      FUN_109a1c968(uVar2,param_3);
    }
  }
  uStack_50 = uStack_50 | 2;
  if (uStack_38 == 0) {
    uVar2 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar2 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    func_0x000107c2ae88();
    uStack_38 = uVar2;
  }
  uVar2 = uStack_38;
  if (uStack_38 != param_4) {
    uVar3 = *(ulong *)(uStack_38 + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar6 = *(ulong *)(param_4 + 8);
    uVar8 = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar4 == uVar8) {
      *(ulong *)(uStack_38 + 8) = uVar6;
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      uVar7 = *(undefined8 *)(uStack_38 + 0x10);
      *(ulong *)(param_4 + 8) = uVar3;
      *(undefined8 *)(param_4 + 0x10) = uVar7;
      *(undefined8 *)(uStack_38 + 0x10) = uVar5;
      uVar5 = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(uStack_38 + 0x18);
      *(undefined8 *)(uStack_38 + 0x18) = uVar5;
    }
    else {
      func_0x00010bceaf4c(uStack_38);
      func_0x00010bceaeac(uVar2,param_4);
    }
  }
  FUN_109a22f0c(param_1,&ppuStack_60);
  FUN_109a1ce74(&ppuStack_60);
  return param_1;
}



/* Entry: 109a23528; end: 109a2366b;  */

void FUN_109a23528(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x18))) {
    return;
  }
  uStack_30 = param_3;
  uStack_28 = param_4;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_90,&UNK_10f594a63,*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
  FUN_109259240(auStack_78,auStack_90,&UNK_10f594a73);
  FUN_1098998d4(&ppuStack_a8,&uStack_30);
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    ppuStack_a8 = &ppuStack_a8;
  }
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,ppuStack_a8,uStack_a0);
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  uStack_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_109259240(auStack_48,&uStack_60,&UNK_10f594a77);
  func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a235f0);
  (*pcVar1)();
}



/* Entry: 109a2366c; end: 109a23997;  */

void FUN_109a2366c(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  ppuStack_78 = &PTR_FUN_110b213c0;
  ppuStack_70 = (undefined **)0x0;
  ppuStack_68 = (undefined **)&DAT_11383d918;
  uStack_58 = 0;
  func_0x000107c30248(&ppuStack_68,param_2,0);
  if (uStack_58._4_4_ != 2) {
    func_0x000109a1ebd4(&ppuStack_78);
    uStack_58 = CONCAT44(2,(undefined4)uStack_58);
    ppuStack_60 = ppuStack_70;
    if (((ulong)ppuStack_70 & 1) != 0) {
      ppuStack_60 = *(undefined ***)((ulong)ppuStack_70 & 0xfffffffffffffffe);
    }
    FUN_109a1f8ac();
  }
  ppuVar12 = ppuStack_60;
  puVar4 = *(undefined4 **)(param_2 + 0x20);
  for (puVar2 = *(undefined4 **)(param_2 + 0x18); puVar2 != puVar4; puVar2 = puVar2 + 1) {
    uVar6 = *puVar2;
    FUN_109a23528(param_1,uVar6,&UNK_10f594a29,0x11);
    iVar10 = *(int *)(ppuVar12 + 3);
    iVar1 = *(int *)((long)ppuVar12 + 0x1c);
    if (iVar10 == iVar1) {
      func_0x000107c282d8(ppuVar12 + 3,iVar1,iVar1 + 1);
      iVar10 = *(int *)(ppuVar12 + 3);
    }
    *(int *)(ppuVar12 + 3) = iVar10 + 1;
    *(undefined4 *)(ppuVar12[4] + (long)iVar10 * 4) = uVar6;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  for (puVar2 = *(undefined4 **)(param_2 + 0x30); puVar2 != puVar4; puVar2 = puVar2 + 1) {
    uVar6 = *puVar2;
    FUN_109a23528(param_1,uVar6,&UNK_10f594a3b,0x12);
    iVar10 = *(int *)(ppuVar12 + 6);
    iVar1 = *(int *)((long)ppuVar12 + 0x34);
    if (iVar10 == iVar1) {
      func_0x000107c282d8(ppuVar12 + 6,iVar1,iVar1 + 1);
      iVar10 = *(int *)(ppuVar12 + 6);
    }
    *(int *)(ppuVar12 + 6) = iVar10 + 1;
    *(undefined4 *)(ppuVar12[7] + (long)iVar10 * 4) = uVar6;
  }
  *(uint *)(ppuVar12 + 2) = *(uint *)(ppuVar12 + 2) | 1;
  puVar14 = ppuVar12[9];
  if (puVar14 == (undefined *)0x0) {
    puVar14 = ppuVar12[1];
    if (((ulong)puVar14 & 1) != 0) {
      puVar14 = *(undefined **)((ulong)puVar14 & 0xfffffffffffffffe);
    }
    FUN_109a1c338();
    ppuVar12[9] = puVar14;
  }
  uVar9 = *(ulong *)(puVar14 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(puVar14 + 0x28,param_2 + 0x48,uVar9);
  lVar5 = *(long *)(param_2 + 0x68);
  for (lVar3 = *(long *)(param_2 + 0x60); lVar3 != lVar5; lVar3 = lVar3 + 0x20) {
    FUN_109a23528(param_1,*(undefined4 *)(lVar3 + 0x18),&UNK_10f594a4e,0x14);
    puVar7 = puVar14 + 0x10;
    func_0x000107c303b0(puVar7,0x109a1d72c);
    uVar9 = *(ulong *)(puVar7 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(puVar7 + 0x10,lVar3,uVar9);
    *(undefined4 *)(puVar7 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
  }
  pppuVar8 = (undefined ***)(param_1 + 0x58);
  func_0x000107c303b0(pppuVar8,0x109a1f908);
  if (pppuVar8 != &ppuStack_78) {
    ppuVar11 = pppuVar8[1];
    ppuVar12 = ppuVar11;
    if (((ulong)ppuVar11 & 1) != 0) {
      ppuVar12 = *(undefined ***)((ulong)ppuVar11 & 0xfffffffffffffffe);
    }
    ppuVar13 = ppuStack_70;
    if (((ulong)ppuStack_70 & 1) != 0) {
      ppuVar13 = *(undefined ***)((ulong)ppuStack_70 & 0xfffffffffffffffe);
    }
    if (ppuVar12 == ppuVar13) {
      ppuVar12 = pppuVar8[2];
      ppuVar13 = pppuVar8[3];
      pppuVar8[1] = ppuStack_70;
      pppuVar8[2] = ppuStack_68;
      pppuVar8[3] = ppuStack_60;
      uVar6 = *(undefined4 *)((long)pppuVar8 + 0x24);
      *(int *)((long)pppuVar8 + 0x24) = uStack_58._4_4_;
      uStack_58 = CONCAT44(uVar6,(undefined4)uStack_58);
      ppuStack_70 = ppuVar11;
      ppuStack_68 = ppuVar12;
      ppuStack_60 = ppuVar13;
    }
    else {
      FUN_109a1ec98(pppuVar8);
      FUN_109a1ef64(pppuVar8,&ppuStack_78);
    }
  }
  func_0x000109a1ec2c(&ppuStack_78);
  return;
}



/* Entry: 109a23998; end: 109a239df;  */

long * FUN_109a23998(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar7;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar8;
  
  puVar4 = &stack0xfffffffffffffff0;
  if (*param_2 == 0) {
    func_0x000105688514(&UNK_10f594a99);
  }
  else {
    plVar5 = (long *)(param_1 + 0x18);
    if (*plVar5 == 0) goto code_r0x000109a239e0;
    if (*plVar5 == *param_2) {
      return plVar5;
    }
  }
  plVar5 = (long *)&UNK_10f594ac6;
  unaff_x30 = FUN_109a239e0;
  func_0x000105688514();
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  unaff_x29 = puVar4;
code_r0x000109a239e0:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = param_2[1];
  lVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = (long *)plVar5[1];
  plVar5[1] = lVar8;
  *plVar5 = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar5;
}



/* Entry: 109a239e0; end: 109a23a43;  */

undefined8 * FUN_109a239e0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109a23a44; end: 109a24833;  */

/* WARNING: Removing unreachable block (ram,0x000109a246f4) */
/* WARNING: Removing unreachable block (ram,0x000109a246f8) */
/* WARNING: Removing unreachable block (ram,0x000109a24700) */
/* WARNING: Removing unreachable block (ram,0x000109a24708) */
/* WARNING: Removing unreachable block (ram,0x000109a2470c) */
/* WARNING: Removing unreachable block (ram,0x000109a24758) */
/* WARNING: Removing unreachable block (ram,0x000109a24760) */
/* WARNING: Removing unreachable block (ram,0x000109a24770) */
/* WARNING: Removing unreachable block (ram,0x000109a24774) */
/* WARNING: Removing unreachable block (ram,0x000109a2477c) */
/* WARNING: Removing unreachable block (ram,0x000109a24784) */
/* WARNING: Removing unreachable block (ram,0x000109a24788) */
/* WARNING: Removing unreachable block (ram,0x000109a247d4) */
/* WARNING: Removing unreachable block (ram,0x000109a247dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_109a23a44(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  uint3 uVar21;
  uint uVar22;
  bool bVar23;
  short *psVar24;
  long lVar39;
  long lVar40;
  int iVar41;
  undefined2 *puVar42;
  short *psVar43;
  long lVar44;
  short *psVar45;
  long lVar46;
  short *psVar47;
  long lVar48;
  long lVar49;
  int iVar50;
  long lVar51;
  long lVar52;
  short *psVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  uint *puVar58;
  undefined2 *puVar59;
  uint uVar60;
  int iVar61;
  int iVar62;
  long lVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  int iVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  int iVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  int iVar95;
  float fVar96;
  undefined1 auVar94 [16];
  float fVar97;
  undefined8 uVar98;
  int iVar99;
  float fVar100;
  int iVar101;
  float fVar102;
  undefined1 auVar103 [16];
  int iVar104;
  float fVar105;
  int iVar106;
  float fVar107;
  int iVar108;
  int iVar109;
  float fVar110;
  int iVar111;
  float fVar116;
  undefined1 auVar113 [16];
  float fVar112;
  int iVar117;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  short sVar118;
  short sVar120;
  short sVar121;
  short sVar122;
  undefined1 auVar119 [16];
  short sVar123;
  int iVar124;
  short sVar126;
  short sVar127;
  short sVar129;
  undefined8 uVar125;
  int iVar128;
  int iVar130;
  int iVar131;
  short sVar132;
  int iVar133;
  undefined8 uVar134;
  short sVar137;
  short sVar138;
  int iVar139;
  short sVar140;
  int iVar141;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  int iVar142;
  short sVar143;
  short sVar144;
  short sVar146;
  short sVar147;
  short sVar148;
  undefined8 uVar145;
  int aiStack_580 [14];
  int *piStack_548;
  long *plStack_540;
  long lStack_538;
  ulong uStack_530;
  uint uStack_528;
  undefined4 uStack_524;
  int aiStack_520 [14];
  int *piStack_4e8;
  long *plStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  short *psStack_4c8;
  long lStack_4c0;
  short asStack_4b8 [524];
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  short *psVar34;
  short *psVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  
  puVar6 = *(uint **)(param_1 + 8);
  puVar7 = *(uint **)(param_1 + 0x10);
  puVar58 = *(uint **)(param_1 + 0x18);
  uVar8 = *puVar6;
  lVar49 = ((ulong)(uVar8 >> 3) & 0x1ff) + 1;
  iVar20 = (int)*(undefined8 *)(param_1 + 0x40);
  iVar67 = (int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  iVar61 = (int)lVar49;
  iVar9 = iVar67 * iVar20 * iVar61;
  uVar22 = iVar9 * 3;
  psVar47 = asStack_4b8;
  if (0x208 < uVar22) {
    psVar47 = (short *)((long)(int)uVar22 << 1);
    if (0x7fffffff < uVar22) {
      psVar47 = (short *)0xffffffffffffffff;
    }
    psStack_4c8 = asStack_4b8;
    __Znam();
  }
  uVar10 = iVar61 * 8 - 5;
  uVar1 = (uVar10 >> 2) + 2;
  lVar54 = (long)(int)uVar1 * (long)iVar20;
  uVar2 = (iVar61 * 0x10 - 5U >> 2 & 0x3fe) + 2;
  lVar56 = (long)(int)uVar2 * (long)iVar20;
  lVar48 = (long)*param_2;
  if (*param_2 < param_2[1]) {
    uVar65 = NEON_scvtf(CONCAT44(iVar67 + -1,iVar20 + -1),4);
    fVar64 = (float)uVar65 * 0.5;
    fVar66 = (float)((ulong)uVar65 >> 0x20) * 0.5;
    uVar65 = NEON_fmov(0x3f800000,4);
    do {
      uVar5 = *(uint *)(param_1 + 0x58);
      fVar92 = 1.0 / (float)(1 << (ulong)(uVar5 & 0x1f));
      uVar72 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar48 * 8);
      fVar97 = (float)uVar72 * fVar92;
      fVar102 = (float)((ulong)uVar72 >> 0x20) * fVar92;
      if (uVar5 == *(uint *)(param_1 + 0x5c)) {
        lVar51 = *(long *)(param_1 + 0x28);
        uVar72 = CONCAT17((char)((uint)fVar102 >> 0x18),
                          CONCAT16((char)((uint)fVar102 >> 0x10),
                                   CONCAT15((char)((uint)fVar102 >> 8),
                                            CONCAT14(SUB41(fVar102,0),fVar97))));
        if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) goto LAB_109a23c58;
      }
      else {
        lVar51 = *(long *)(param_1 + 0x28);
        fVar92 = 2.0;
LAB_109a23c58:
        uVar72 = *(undefined8 *)(lVar51 + lVar48 * 8);
        uVar72 = CONCAT44((float)((ulong)uVar72 >> 0x20) * fVar92,(float)uVar72 * fVar92);
      }
      *(undefined8 *)(lVar51 + lVar48 * 8) = uVar72;
      fVar97 = fVar97 - fVar64;
      fVar102 = fVar102 - fVar66;
      uVar98 = NEON_scvtf(CONCAT44((int)fVar102,(int)fVar97),4);
      iVar90 = (int)fVar97 - (uint)(fVar97 < (float)uVar98);
      iVar95 = (int)fVar102 - (uint)(fVar102 < (float)((ulong)uVar98 >> 0x20));
      iVar111 = *(int *)(param_1 + 0x40);
      if ((((iVar90 + iVar111 < 0 == SCARRY4(iVar90,iVar111)) && (iVar90 < (int)puVar58[3])) &&
          (uVar60 = *(uint *)(param_1 + 0x44), (int)(iVar95 + uVar60) < 0 == SCARRY4(iVar95,uVar60))
          ) && (iVar95 < (int)puVar58[2])) {
        uVar55 = *(ulong *)(puVar7 + 0x14);
        uVar5 = *puVar7;
        fVar92 = (float)((ulong)uVar65 >> 0x20);
        if ((int)uVar60 < 1) {
          uVar98 = 0;
          fVar97 = 0.0;
          auVar115 = ZEXT216(0);
          iVar99 = 0;
          iVar101 = 0;
          iVar106 = 0;
          iVar109 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar80 = 0;
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar87 = 0;
          uVar88 = 0;
          uVar89 = 0;
        }
        else {
          lVar51 = 0;
          uVar98 = NEON_scvtf(CONCAT44(iVar95,iVar90),4);
          fVar97 = fVar97 - (float)uVar98;
          fVar102 = fVar102 - (float)((ulong)uVar98 >> 0x20);
          fVar91 = (float)uVar65 - fVar97;
          fVar96 = fVar92 - fVar102;
          lVar46 = (long)(float)(int)(fVar91 * fVar96 * 16384.0);
          lVar63 = (long)(float)(int)(fVar97 * fVar96 * 16384.0);
          lVar52 = (long)(float)(int)(fVar91 * fVar102 * 16384.0);
          iVar62 = (int)lVar63;
          iVar41 = (int)lVar46;
          iVar50 = (int)lVar52;
          iVar11 = (0x4000 - iVar50) - (iVar41 + iVar62);
          uVar60 = 0x88442211 >> (((ulong)*puVar6 & 7) << 2);
          iVar99 = 0;
          if ((uVar60 & 0xf) != 0) {
            iVar99 = (int)(*(ulong *)(puVar6 + 0x14) / ((ulong)uVar60 & 0xf));
          }
          uVar60 = 0x88442211 >> (((ulong)*puVar58 & 7) << 2);
          uVar12 = 0;
          if ((uVar60 & 0xf) != 0) {
            uVar12 = *(ulong *)(puVar58 + 0x14) / ((ulong)uVar60 & 0xf);
          }
          lVar40 = (long)(int)uVar12;
          iVar117 = iVar61 * 2 + (int)uVar12;
          lVar39 = (long)iVar99;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar80 = 0;
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar87 = 0;
          uVar88 = 0;
          uVar89 = 0;
          fVar102 = 0.0;
          fVar97 = 0.0;
          fVar91 = 0.0;
          iVar99 = 0;
          iVar101 = 0;
          iVar106 = 0;
          iVar109 = 0;
          auVar115 = ZEXT216(0);
          do {
            lVar3 = *(long *)(puVar6 + 4) + (lVar51 + iVar95) * lVar39 + (long)iVar61 * (long)iVar90
            ;
            psVar43 = (short *)(*(long *)(puVar58 + 4) + (lVar51 + iVar95) * lVar40 * 2 +
                               (long)(iVar90 * iVar61 * 2) * 2);
            puVar42 = (undefined2 *)((long)psVar47 + lVar56 * lVar51 + (long)iVar9 * 2);
            uVar60 = iVar111 * iVar61;
            if ((int)uVar60 < 4) {
              uVar57 = 0;
            }
            else {
              uVar57 = 0;
              psVar45 = (short *)((long)psVar47 + lVar54 * lVar51);
              psVar53 = psVar43;
              auVar94 = auVar115;
              do {
                uVar98 = *(undefined8 *)(lVar3 + uVar57);
                uVar93 = *(undefined8 *)(lVar3 + lVar49 + uVar57);
                uVar125 = *(undefined8 *)(lVar3 + uVar57 + lVar39);
                uVar134 = *(undefined8 *)(lVar3 + lVar49 + uVar57 + lVar39);
                sVar68 = (short)lVar63;
                iVar124 = (int)sVar68;
                sVar144 = (short)lVar46;
                iVar111 = (int)sVar144;
                sVar69 = (short)lVar52;
                iVar104 = (int)sVar69;
                sVar70 = (short)iVar11;
                iVar108 = (int)sVar70;
                auVar113._0_4_ =
                     (short)(ushort)(byte)uVar93 * iVar124 + (short)(ushort)(byte)uVar98 * iVar111 +
                     (short)(ushort)(byte)uVar125 * iVar104 + (short)(ushort)(byte)uVar134 * iVar108
                ;
                auVar113._4_4_ =
                     (short)(ushort)(byte)((ulong)uVar93 >> 8) * iVar124 +
                     (short)(ushort)(byte)((ulong)uVar98 >> 8) * iVar111 +
                     (short)(ushort)(byte)((ulong)uVar125 >> 8) * iVar104 +
                     (short)(ushort)(byte)((ulong)uVar134 >> 8) * iVar108;
                auVar113._8_4_ =
                     (short)(ushort)(byte)((ulong)uVar93 >> 0x10) * iVar124 +
                     (short)(ushort)(byte)((ulong)uVar98 >> 0x10) * iVar111 +
                     (short)(ushort)(byte)((ulong)uVar125 >> 0x10) * iVar104 +
                     (short)(ushort)(byte)((ulong)uVar134 >> 0x10) * iVar108;
                auVar113._12_4_ =
                     (short)(ushort)(byte)((ulong)uVar93 >> 0x18) * iVar124 +
                     (short)(ushort)(byte)((ulong)uVar98 >> 0x18) * iVar111 +
                     (short)(ushort)(byte)((ulong)uVar125 >> 0x18) * iVar104 +
                     (short)(ushort)(byte)((ulong)uVar134 >> 0x18) * iVar108;
                sVar118 = *psVar53;
                sVar123 = psVar53[1];
                sVar120 = psVar53[2];
                sVar126 = psVar53[3];
                sVar121 = psVar53[4];
                sVar127 = psVar53[5];
                sVar122 = psVar53[6];
                sVar129 = psVar53[7];
                psVar43 = psVar53 + 8;
                psVar37 = psVar53 + lVar49 * 2;
                sVar132 = *psVar37;
                sVar143 = psVar37[1];
                sVar137 = psVar37[2];
                sVar146 = psVar37[3];
                sVar138 = psVar37[4];
                sVar147 = psVar37[5];
                sVar140 = psVar37[6];
                sVar148 = psVar37[7];
                auVar103._8_4_ = 0xfffffff7;
                auVar103._0_8_ = 0xfffffff7fffffff7;
                auVar103._12_4_ = 0xfffffff7;
                auVar115 = NEON_sqrshl(auVar113,auVar103,4);
                *(ulong *)psVar45 =
                     CONCAT26(auVar115._12_2_,
                              CONCAT24(auVar115._8_2_,CONCAT22(auVar115._4_2_,auVar115._0_2_)));
                psVar37 = psVar53 + lVar40;
                psVar53 = psVar53 + iVar117;
                iVar131 = (int)sVar68;
                iVar133 = (int)sVar68;
                iVar111 = (int)sVar144;
                iVar104 = (int)sVar69;
                iVar108 = (int)sVar144;
                iVar124 = (int)sVar70;
                iVar139 = sVar137 * iVar131 + sVar120 * iVar111 + psVar37[2] * iVar104 +
                          psVar53[2] * iVar124;
                iVar141 = sVar138 * iVar131 + sVar121 * iVar111 + psVar37[4] * iVar104 +
                          psVar53[4] * iVar124;
                iVar142 = sVar140 * iVar131 + sVar122 * iVar111 + psVar37[6] * iVar104 +
                          psVar53[6] * iVar124;
                iVar128 = (int)sVar69;
                iVar130 = (int)sVar70;
                auVar135._0_4_ =
                     sVar143 * iVar133 + sVar123 * iVar108 + psVar37[1] * iVar128 +
                     psVar53[1] * iVar130;
                auVar135._4_4_ =
                     sVar146 * iVar133 + sVar126 * iVar108 + psVar37[3] * iVar128 +
                     psVar53[3] * iVar130;
                auVar135._8_4_ =
                     sVar147 * iVar133 + sVar127 * iVar108 + psVar37[5] * iVar128 +
                     psVar53[5] * iVar130;
                auVar135._12_4_ =
                     sVar148 * iVar133 + sVar129 * iVar108 + psVar37[7] * iVar128 +
                     psVar53[7] * iVar130;
                auVar15._8_4_ = 0xfffffff2;
                auVar15._0_8_ = 0xfffffff2fffffff2;
                auVar15._12_4_ = 0xfffffff2;
                auVar19._4_2_ = (short)iVar139;
                auVar19._0_4_ =
                     sVar132 * iVar131 + sVar118 * iVar111 + *psVar37 * iVar104 + *psVar53 * iVar124
                ;
                auVar19._6_2_ = (short)((uint)iVar139 >> 0x10);
                auVar19._8_2_ = (short)iVar141;
                auVar19._10_2_ = (short)((uint)iVar141 >> 0x10);
                auVar19._12_2_ = (short)iVar142;
                auVar19._14_2_ = (short)((uint)iVar142 >> 0x10);
                auVar115 = NEON_sqrshl(auVar19,auVar15,4);
                auVar16._8_4_ = 0xfffffff2;
                auVar16._0_8_ = 0xfffffff2fffffff2;
                auVar16._12_4_ = 0xfffffff2;
                auVar103 = NEON_sqrshl(auVar135,auVar16,4);
                iVar104 = auVar115._0_4_;
                iVar108 = auVar115._4_4_;
                iVar124 = auVar115._8_4_;
                iVar128 = auVar115._12_4_;
                iVar111 = CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) +
                          iVar104 * iVar104;
                uVar74 = (undefined1)iVar111;
                uVar75 = (undefined1)((uint)iVar111 >> 8);
                uVar76 = (undefined1)((uint)iVar111 >> 0x10);
                uVar77 = (undefined1)((uint)iVar111 >> 0x18);
                iVar111 = CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) +
                          iVar108 * iVar108;
                uVar78 = (undefined1)iVar111;
                uVar79 = (undefined1)((uint)iVar111 >> 8);
                uVar80 = (undefined1)((uint)iVar111 >> 0x10);
                uVar81 = (undefined1)((uint)iVar111 >> 0x18);
                iVar111 = CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82))) +
                          iVar124 * iVar124;
                uVar82 = (undefined1)iVar111;
                uVar83 = (undefined1)((uint)iVar111 >> 8);
                uVar84 = (undefined1)((uint)iVar111 >> 0x10);
                uVar85 = (undefined1)((uint)iVar111 >> 0x18);
                iVar111 = CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))) +
                          iVar128 * iVar128;
                uVar86 = (undefined1)iVar111;
                uVar87 = (undefined1)((uint)iVar111 >> 8);
                uVar88 = (undefined1)((uint)iVar111 >> 0x10);
                uVar89 = (undefined1)((uint)iVar111 >> 0x18);
                iVar111 = auVar103._0_4_;
                iVar130 = auVar103._4_4_;
                iVar131 = auVar103._8_4_;
                iVar133 = auVar103._12_4_;
                iVar99 = iVar99 + iVar111 * iVar104;
                iVar101 = iVar101 + iVar130 * iVar108;
                iVar106 = iVar106 + iVar131 * iVar124;
                iVar109 = iVar109 + iVar133 * iVar128;
                *puVar42 = auVar115._0_2_;
                puVar42[1] = auVar103._0_2_;
                puVar42[2] = auVar115._4_2_;
                puVar42[3] = auVar103._4_2_;
                puVar42[4] = auVar115._8_2_;
                puVar42[5] = auVar103._8_2_;
                puVar42[6] = auVar115._12_2_;
                puVar42[7] = auVar103._12_2_;
                puVar42 = puVar42 + 8;
                auVar115._0_4_ = auVar94._0_4_ + iVar111 * iVar111;
                auVar115._4_4_ = auVar94._4_4_ + iVar130 * iVar130;
                auVar115._8_4_ = auVar94._8_4_ + iVar131 * iVar131;
                auVar115._12_4_ = auVar94._12_4_ + iVar133 * iVar133;
                uVar57 = uVar57 + 4;
                iVar111 = *(int *)(param_1 + 0x40);
                uVar60 = iVar111 * iVar61;
                psVar45 = psVar45 + 4;
                psVar53 = psVar43;
                auVar94 = auVar115;
              } while ((long)uVar57 <= (long)(int)(uVar60 - 4));
              uVar57 = uVar57 & 0xffffffff;
            }
            if ((int)uVar57 < (int)uVar60) {
              lVar44 = uVar60 - uVar57;
              psVar53 = psVar43 + ((ulong)(uVar8 >> 3) & 0x1ff) * 2 + 3;
              puVar42 = puVar42 + 1;
              puVar59 = (undefined2 *)((long)psVar47 + lVar54 * lVar51 + uVar57 * 2);
              do {
                iVar104 = psVar53[-1] * iVar62 + *psVar43 * iVar41 + psVar43[lVar40] * iVar50 +
                          iVar11 * psVar43[iVar117] + 0x2000 >> 0xe;
                iVar108 = *psVar53 * iVar62 + psVar43[1] * iVar41 +
                          *(short *)((long)psVar43 +
                                    ((long)((uVar12 << 0x20) + 0x100000000) >> 0x1f)) * iVar50 +
                          iVar11 * (psVar43 + iVar117)[1] + 0x2000 >> 0xe;
                *puVar59 = (short)((uint)*(byte *)(lVar3 + lVar49 + uVar57) * iVar62 +
                                   (uint)*(byte *)(lVar3 + uVar57) * iVar41 +
                                   (uint)*(byte *)(lVar3 + uVar57 + lVar39) * iVar50 +
                                   iVar11 * (uint)*(byte *)(lVar3 + lVar49 + uVar57 + lVar39) +
                                   0x100 >> 9);
                puVar42[-1] = (short)iVar104;
                *puVar42 = (short)iVar108;
                fVar102 = fVar102 + (float)(uint)(iVar104 * iVar104);
                fVar97 = fVar97 + (float)(iVar108 * iVar104);
                uVar57 = uVar57 + 1;
                fVar91 = fVar91 + (float)(uint)(iVar108 * iVar108);
                psVar53 = psVar53 + 2;
                psVar43 = psVar43 + 2;
                lVar44 = lVar44 + -1;
                puVar42 = puVar42 + 2;
                puVar59 = puVar59 + 1;
              } while (lVar44 != 0);
              uVar98 = CONCAT44(fVar102,fVar91);
            }
            else {
              uVar98 = CONCAT44(fVar102,fVar91);
            }
            lVar51 = lVar51 + 1;
            uVar60 = *(uint *)(param_1 + 0x44);
          } while (lVar51 < (int)uVar60);
        }
        auVar94[1] = uVar75;
        auVar94[0] = uVar74;
        auVar94[2] = uVar76;
        auVar94[3] = uVar77;
        auVar94[4] = uVar78;
        auVar94[5] = uVar79;
        auVar94[6] = uVar80;
        auVar94[7] = uVar81;
        auVar94[8] = uVar82;
        auVar94[9] = uVar83;
        auVar94[10] = uVar84;
        auVar94[0xb] = uVar85;
        auVar94[0xc] = uVar86;
        auVar94[0xd] = uVar87;
        auVar94[0xe] = uVar88;
        auVar94[0xf] = uVar89;
        auVar18[1] = uVar75;
        auVar18[0] = uVar74;
        auVar18[2] = uVar76;
        auVar18[3] = uVar77;
        auVar18[4] = uVar78;
        auVar18[5] = uVar79;
        auVar18[6] = uVar80;
        auVar18[7] = uVar81;
        auVar18[8] = uVar82;
        auVar18[9] = uVar83;
        auVar18[10] = uVar84;
        auVar18[0xb] = uVar85;
        auVar18[0xc] = uVar86;
        auVar18[0xd] = uVar87;
        auVar18[0xe] = uVar88;
        auVar18[0xf] = uVar89;
        auVar103 = NEON_ext(auVar94,auVar18,8,1);
        auVar94 = NEON_ext(auVar115,auVar115,8,1);
        fVar97 = (fVar97 + (float)(iVar99 + iVar101 + iVar106 + iVar109)) * 9.536743e-07;
        uVar93 = NEON_scvtf(CONCAT44(CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) +
                                     CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) +
                                     auVar103._0_4_ + auVar103._4_4_,
                                     auVar115._0_4_ + auVar115._4_4_ + auVar94._0_4_ + auVar94._4_4_
                                    ),4);
        fVar102 = ((float)uVar98 + (float)uVar93) * 9.536743e-07;
        fVar91 = ((float)((ulong)uVar98 >> 0x20) + (float)((ulong)uVar93 >> 0x20)) * 9.536743e-07;
        fVar96 = ((fVar102 + fVar91) -
                 SQRT(fVar97 * fVar97 * 4.0 + (fVar91 - fVar102) * (fVar91 - fVar102))) /
                 (float)(int)(iVar111 * uVar60 * 2);
        if ((*(long *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0)) {
          *(float *)(*(long *)(param_1 + 0x38) + lVar48 * 4) = fVar96;
        }
        fVar100 = -(fVar97 * fVar97) + fVar102 * fVar91;
        bVar23 = true;
        if ((*(float *)(param_1 + 100) <= fVar96) && (bVar23 = false, !NAN(fVar100))) {
          bVar23 = fVar100 < 1.1920929e-07;
        }
        if (bVar23) {
          if ((*(int *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
            *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar48) = 0;
          }
        }
        else {
          uVar5 = 0x88442211 >> (((ulong)uVar5 & 7) << 2);
          iVar90 = *(int *)(param_1 + 0x4c);
          iVar95 = 0;
          if ((uVar5 & 0xf) != 0) {
            iVar95 = (int)(uVar55 / ((ulong)uVar5 & 0xf));
          }
          if (0 < iVar90) {
            iVar99 = 0;
            fVar71 = (float)uVar72 - fVar64;
            fVar73 = (float)((ulong)uVar72 >> 0x20) - fVar66;
            iVar101 = iVar111 * iVar61;
            lVar51 = (long)iVar95;
            fVar96 = 0.0;
            fVar105 = 0.0;
            do {
              uVar72 = NEON_scvtf(CONCAT44((int)fVar73,(int)fVar71),4);
              iVar106 = (int)fVar71 - (uint)(fVar71 < (float)uVar72);
              iVar109 = (int)fVar73 - (uint)(fVar73 < (float)((ulong)uVar72 >> 0x20));
              if (((iVar106 < -iVar111) || ((int)puVar7[3] <= iVar106 || iVar109 < (int)-uVar60)) ||
                 ((int)puVar7[2] <= iVar109)) {
                if ((*(int *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
                  *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar48) = 0;
                }
                break;
              }
              if ((int)uVar60 < 1) {
                fVar107 = 0.0;
                fVar110 = 0.0;
                auVar119 = ZEXT216(0);
                auVar114 = ZEXT216(0);
              }
              else {
                uVar55 = 0;
                uVar72 = NEON_scvtf(CONCAT44(iVar109,iVar106),4);
                fVar107 = fVar71 - (float)uVar72;
                fVar110 = fVar73 - (float)((ulong)uVar72 >> 0x20);
                fVar112 = (float)uVar65 - fVar107;
                fVar116 = fVar92 - fVar110;
                lVar63 = (long)(float)(int)(fVar112 * fVar116 * 16384.0);
                lVar46 = (long)(float)(int)(fVar107 * fVar116 * 16384.0);
                lVar52 = (long)(float)(int)(fVar112 * fVar110 * 16384.0);
                iVar50 = (int)lVar52;
                iVar41 = (int)lVar46;
                iVar62 = (int)lVar63;
                iVar11 = (0x4000 - iVar62) - (iVar41 + iVar50);
                fVar107 = 0.0;
                fVar110 = 0.0;
                auVar114 = ZEXT216(0);
                auVar119 = ZEXT216(0);
                psVar43 = psVar47;
                do {
                  lVar39 = *(long *)(puVar7 + 4) + (long)iVar61 * (long)iVar106 +
                           (uVar55 + (long)iVar109) * lVar51;
                  psVar53 = (short *)((long)psVar47 + uVar55 * lVar56 + (long)iVar9 * 2);
                  if (iVar101 < 8) {
                    iVar117 = 0;
                  }
                  else {
                    lVar40 = 0;
                    psVar45 = psVar43;
                    do {
                      uVar125 = *(undefined8 *)(lVar39 + lVar40);
                      uVar134 = *(undefined8 *)(lVar39 + lVar49 + lVar40);
                      uVar145 = *(undefined8 *)(lVar39 + lVar40 + lVar51);
                      uVar72 = *(undefined8 *)(lVar39 + lVar49 + lVar40 + lVar51);
                      uVar21 = CONCAT12((char)((ulong)uVar145 >> 8),(short)uVar145) & 0xff00ff;
                      sVar144 = (short)lVar46;
                      iVar131 = (int)sVar144;
                      iVar133 = (int)sVar144;
                      uVar93 = *(undefined8 *)(psVar45 + 4);
                      uVar98 = *(undefined8 *)psVar45;
                      sVar144 = (short)lVar63;
                      iVar117 = (int)sVar144;
                      sVar68 = (short)lVar52;
                      iVar104 = (int)sVar68;
                      sVar69 = (short)iVar11;
                      iVar108 = (int)sVar69;
                      iVar139 = (short)(ushort)(byte)((ulong)uVar134 >> 8) * iVar131 +
                                (short)(ushort)(byte)((ulong)uVar125 >> 8) * iVar117 +
                                (short)(ushort)(byte)(uVar21 >> 0x10) * iVar104 +
                                (short)(ushort)(byte)((ulong)uVar72 >> 8) * iVar108;
                      iVar124 = (int)sVar144;
                      iVar128 = (int)sVar68;
                      iVar130 = (int)sVar69;
                      auVar136._0_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x20) * iVar133 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x20) * iVar124 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x20) * iVar128 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x20) * iVar130;
                      auVar136._4_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x28) * iVar133 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x28) * iVar124 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x28) * iVar128 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x28) * iVar130;
                      auVar136._8_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x30) * iVar133 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x30) * iVar124 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x30) * iVar128 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x30) * iVar130;
                      auVar136._12_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x38) * iVar133 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x38) * iVar124 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x38) * iVar128 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x38) * iVar130;
                      auVar13._8_4_ = 0xfffffff7;
                      auVar13._0_8_ = 0xfffffff7fffffff7;
                      auVar13._12_4_ = 0xfffffff7;
                      auVar17._4_2_ = (short)iVar139;
                      auVar17._0_4_ =
                           (short)(ushort)(byte)uVar134 * iVar131 +
                           (short)(ushort)(byte)uVar125 * iVar117 + (short)uVar21 * iVar104 +
                           (short)(ushort)(byte)uVar72 * iVar108;
                      auVar17._6_2_ = (short)((uint)iVar139 >> 0x10);
                      auVar17._8_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x10) * iVar131 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x10) * iVar117 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x10) * iVar104 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x10) * iVar108;
                      auVar17._12_4_ =
                           (short)(ushort)(byte)((ulong)uVar134 >> 0x18) * iVar131 +
                           (short)(ushort)(byte)((ulong)uVar125 >> 0x18) * iVar117 +
                           (short)(ushort)(byte)((ulong)uVar145 >> 0x18) * iVar104 +
                           (short)(ushort)(byte)((ulong)uVar72 >> 0x18) * iVar108;
                      auVar115 = NEON_sqrshl(auVar17,auVar13,4);
                      auVar14._8_4_ = 0xfffffff7;
                      auVar14._0_8_ = 0xfffffff7fffffff7;
                      auVar14._12_4_ = 0xfffffff7;
                      auVar94 = NEON_sqrshl(auVar136,auVar14,4);
                      sVar144 = *psVar53;
                      psVar24 = psVar53 + 1;
                      psVar25 = psVar53 + 2;
                      psVar26 = psVar53 + 3;
                      psVar27 = psVar53 + 4;
                      psVar28 = psVar53 + 5;
                      psVar29 = psVar53 + 6;
                      psVar30 = psVar53 + 7;
                      psVar31 = psVar53 + 8;
                      psVar32 = psVar53 + 9;
                      psVar33 = psVar53 + 10;
                      psVar34 = psVar53 + 0xb;
                      psVar35 = psVar53 + 0xc;
                      psVar36 = psVar53 + 0xd;
                      psVar37 = psVar53 + 0xe;
                      psVar38 = psVar53 + 0xf;
                      psVar53 = psVar53 + 0x10;
                      iVar124 = auVar115._0_4_ - (int)(short)uVar98;
                      iVar128 = auVar115._4_4_ - (int)(short)((ulong)uVar98 >> 0x10);
                      iVar130 = auVar115._8_4_ - (int)(short)((ulong)uVar98 >> 0x20);
                      iVar131 = auVar115._12_4_ - (int)(short)((ulong)uVar98 >> 0x30);
                      iVar133 = auVar94._0_4_ - (int)(short)uVar93;
                      iVar139 = auVar94._4_4_ - (int)(short)((ulong)uVar93 >> 0x10);
                      iVar141 = auVar94._8_4_ - (int)(short)((ulong)uVar93 >> 0x20);
                      iVar142 = auVar94._12_4_ - (int)(short)((ulong)uVar93 >> 0x30);
                      iVar117 = auVar114._4_4_;
                      iVar104 = auVar114._8_4_;
                      iVar108 = auVar114._12_4_;
                      auVar114._0_4_ = auVar114._0_4_ + iVar133 * *psVar31 + iVar124 * sVar144;
                      auVar114._4_4_ = iVar117 + iVar139 * *psVar33 + iVar128 * *psVar25;
                      auVar114._8_4_ = iVar104 + iVar141 * *psVar35 + iVar130 * *psVar27;
                      auVar114._12_4_ = iVar108 + iVar142 * *psVar37 + iVar131 * *psVar29;
                      iVar117 = auVar119._4_4_;
                      iVar104 = auVar119._8_4_;
                      iVar108 = auVar119._12_4_;
                      auVar119._0_4_ = auVar119._0_4_ + iVar133 * *psVar32 + iVar124 * *psVar24;
                      auVar119._4_4_ = iVar117 + iVar139 * *psVar34 + iVar128 * *psVar26;
                      auVar119._8_4_ = iVar104 + iVar141 * *psVar36 + iVar130 * *psVar28;
                      auVar119._12_4_ = iVar108 + iVar142 * *psVar38 + iVar131 * *psVar30;
                      lVar40 = lVar40 + 8;
                      psVar45 = psVar45 + 8;
                      iVar117 = (iVar101 - 8U & 0xfffffff8) + 8;
                    } while (lVar40 <= (int)(iVar101 - 8U));
                  }
                  if (iVar117 < iVar101) {
                    lVar40 = (long)iVar117;
                    do {
                      iVar117 = ((int)((uint)*(byte *)(lVar39 + lVar49 + lVar40) * iVar41 +
                                       (uint)*(byte *)(lVar39 + lVar40) * iVar62 +
                                       (uint)*(byte *)(lVar39 + lVar40 + lVar51) * iVar50 +
                                       iVar11 * (uint)*(byte *)(lVar39 + lVar49 + lVar40 + lVar51) +
                                      0x100) >> 9) - (int)psVar43[lVar40];
                      uVar72 = NEON_scvtf(CONCAT44(iVar117 * *psVar53,iVar117 * psVar53[1]),4);
                      fVar107 = fVar107 + (float)uVar72;
                      fVar110 = fVar110 + (float)((ulong)uVar72 >> 0x20);
                      lVar40 = lVar40 + 1;
                      psVar53 = psVar53 + 2;
                    } while (iVar101 != lVar40);
                  }
                  uVar55 = uVar55 + 1;
                  psVar43 = (short *)((long)psVar43 + lVar54);
                } while (uVar55 != uVar60);
              }
              auVar115 = NEON_ext(auVar114,auVar114,8,1);
              auVar94 = NEON_ext(auVar119,auVar119,8,1);
              uVar72 = NEON_scvtf(CONCAT44(auVar114._0_4_ + auVar114._4_4_ + auVar115._0_4_ +
                                           auVar115._4_4_,
                                           auVar119._0_4_ + auVar119._4_4_ + auVar94._0_4_ +
                                           auVar94._4_4_),4);
              fVar107 = (fVar107 + (float)uVar72) * 9.536743e-07;
              fVar110 = (fVar110 + (float)((ulong)uVar72 >> 0x20)) * 9.536743e-07;
              uVar72 = NEON_rev64(CONCAT44(fVar110,fVar107),4);
              fVar107 = ((float)uVar72 * -fVar102 + fVar107 * fVar97) * (1.0 / fVar100);
              fVar110 = ((float)((ulong)uVar72 >> 0x20) * -fVar91 + fVar110 * fVar97) *
                        (1.0 / fVar100);
              fVar71 = fVar71 + fVar107;
              fVar73 = fVar73 + fVar110;
              lVar46 = *(long *)(param_1 + 0x28);
              *(ulong *)(lVar46 + lVar48 * 8) = CONCAT44(fVar66 + fVar73,fVar64 + fVar71);
              if ((double)fVar110 * (double)fVar110 + (double)fVar107 * (double)fVar107 <=
                  *(double *)(param_1 + 0x50)) break;
              if (((iVar99 != 0) && (ABS(fVar105 + fVar107) < 0.01)) &&
                 (ABS(fVar96 + fVar110) < 0.01)) {
                *(ulong *)(lVar46 + lVar48 * 8) =
                     CONCAT44(fVar66 + fVar73 + fVar110 * -0.5,fVar64 + fVar71 + fVar107 * -0.5);
                break;
              }
              iVar99 = iVar99 + 1;
              fVar96 = fVar110;
              fVar105 = fVar107;
            } while (iVar99 != iVar90);
          }
          if ((((*(char *)(*(long *)(param_1 + 0x30) + lVar48) != '\0') &&
               (*(long *)(param_1 + 0x38) != 0)) && (*(int *)(param_1 + 0x58) == 0)) &&
             ((*(byte *)(param_1 + 0x60) >> 3 & 1) == 0)) {
            pfVar4 = (float *)(*(long *)(param_1 + 0x28) + lVar48 * 8);
            fVar102 = *pfVar4 - fVar64;
            fVar97 = pfVar4[1] - fVar66;
            iVar90 = (int)fVar102 - (uint)(fVar102 < (float)(int)fVar102);
            iVar111 = *(int *)(param_1 + 0x40);
            if ((iVar90 + iVar111 < 0 == SCARRY4(iVar90,iVar111)) && (iVar90 < (int)puVar7[3])) {
              iVar99 = (int)fVar97 - (uint)(fVar97 < (float)(int)fVar97);
              uVar5 = *(uint *)(param_1 + 0x44);
              if (((int)(iVar99 + uVar5) < 0 == SCARRY4(iVar99,uVar5)) && (iVar99 < (int)puVar7[2]))
              {
                if ((int)uVar5 < 1) {
                  fVar97 = 0.0;
                }
                else {
                  uVar55 = 0;
                  fVar92 = 1.0 - (fVar102 - (float)iVar90);
                  fVar91 = 1.0 - (fVar97 - (float)iVar99);
                  iVar106 = (int)(long)(float)(int)((fVar102 - (float)iVar90) * fVar91 * 16384.0);
                  iVar109 = (int)(long)(float)(int)(fVar92 * (fVar97 - (float)iVar99) * 16384.0);
                  iVar101 = (int)(long)(float)(int)(fVar92 * fVar91 * 16384.0);
                  fVar97 = 0.0;
                  psVar43 = psVar47;
                  do {
                    if (0 < iVar111 * iVar61) {
                      lVar51 = 0;
                      lVar52 = *(long *)(puVar7 + 4) + (long)iVar61 * (long)iVar90 +
                               (uVar55 + (long)iVar99) * (long)iVar95;
                      psVar53 = psVar43;
                      lVar46 = (ulong)(uint)(iVar111 * iVar61) << 1;
                      do {
                        lVar63 = lVar51 + iVar95;
                        fVar97 = fVar97 + ABS((float)(((int)((uint)*(byte *)(lVar52 + lVar49 +
                                                                            lVar51) * iVar106 +
                                                             (uint)*(byte *)(lVar52 + lVar51) *
                                                             iVar101 + (uint)*(byte *)(lVar52 + 
                                                  lVar63) * iVar109 +
                                                  ((0x4000 - iVar101) - (iVar109 + iVar106)) *
                                                  (uint)*(byte *)(lVar52 + lVar49 + lVar63) + 0x100)
                                                  >> 9) - (int)*psVar53));
                        lVar51 = lVar51 + 1;
                        lVar46 = lVar46 + -2;
                        psVar53 = psVar53 + 1;
                      } while (lVar46 != 0);
                    }
                    uVar55 = uVar55 + 1;
                    psVar43 = (short *)((long)psVar43 + lVar54);
                  } while (uVar55 != uVar5);
                }
                *(float *)(*(long *)(param_1 + 0x38) + lVar48 * 4) =
                     fVar97 / (float)(int)(iVar61 * 0x20 * iVar111 * uVar5);
                goto LAB_109a24048;
              }
            }
            *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar48) = 0;
          }
        }
      }
      else if (uVar5 == 0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar48) = 0;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar48 * 4) = 0;
        }
      }
LAB_109a24048:
      lVar48 = lVar48 + 1;
    } while (lVar48 < param_2[1]);
  }
  lVar49 = 0;
  do {
    aiStack_580[lVar49] = 0;
    lVar49 = lVar49 + 1;
  } while (lVar49 < 2);
  lVar49 = 0;
  do {
    aiStack_520[lVar49] = 0;
    lVar49 = lVar49 + 1;
  } while (lVar49 < 2);
  aiStack_520[0xc] = 0;
  aiStack_520[0xd] = 0;
  aiStack_520[10] = 0;
  aiStack_520[0xb] = 0;
  aiStack_520[8] = 0;
  aiStack_520[9] = 0;
  aiStack_520[6] = 0;
  aiStack_520[7] = 0;
  aiStack_520[4] = 0;
  aiStack_520[5] = 0;
  aiStack_520[2] = 0;
  aiStack_520[3] = 0;
  uStack_524 = 2;
  aiStack_580[0xc] = 0;
  aiStack_580[0xd] = 0;
  aiStack_580[10] = 0;
  aiStack_580[0xb] = 0;
  aiStack_580[8] = 0;
  aiStack_580[9] = 0;
  aiStack_580[6] = 0;
  aiStack_580[7] = 0;
  aiStack_580[4] = 0;
  aiStack_580[5] = 0;
  aiStack_580[2] = 0;
  aiStack_580[3] = 0;
  if (psVar47 != asStack_4b8 && psVar47 != (short *)0x0) {
    aiStack_580[0] = iVar67;
    aiStack_580[1] = iVar20;
    piStack_548 = aiStack_580;
    plStack_540 = &lStack_538;
    lStack_538 = lVar56;
    uStack_530 = (ulong)uVar2;
    uStack_528 = uVar10 | 0x42ff4000;
    aiStack_520[0] = iVar67;
    aiStack_520[1] = iVar20;
    piStack_4e8 = aiStack_520;
    plStack_4e0 = &lStack_4d8;
    lStack_4d8 = lVar54;
    uStack_4d0 = (ulong)uVar1;
    psStack_4c8 = psVar47;
    lStack_4c0 = (long)(int)uVar22;
    __ZdaPv();
  }
  return;
}



/* Entry: 109a24834; end: 109a25463;  */

void FUN_109a24834(uint *param_1,ulong *param_2,uint *param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined8 *puVar9;
  short *psVar10;
  short *psVar11;
  undefined3 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  code *pcVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  ulong *puVar34;
  ulong uVar35;
  undefined4 *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong *puVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint uVar43;
  int iVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 *puVar47;
  long lVar48;
  uint **ppuVar49;
  double *pdVar50;
  uint uVar51;
  long lVar52;
  ulong uVar53;
  double dVar54;
  ulong uVar55;
  undefined8 *puVar56;
  int *piVar57;
  ulong uVar58;
  undefined8 *puVar59;
  long lVar60;
  long lVar61;
  undefined8 *puVar62;
  undefined2 *puVar63;
  ulong uVar64;
  short *psVar65;
  uint uVar66;
  int iVar67;
  uint uVar68;
  ulong uVar69;
  uint uVar70;
  long lVar71;
  long lVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  char cVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  byte bVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  byte bVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  byte bVar97;
  char cVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  undefined8 uVar112;
  byte bVar120;
  undefined1 auVar113 [16];
  undefined1 auVar121 [16];
  double dVar122;
  ulong uStack_ae8;
  long lStack_ac8;
  undefined4 auStack_a40 [2];
  uint *puStack_a38;
  undefined8 uStack_a30;
  int iStack_a28;
  int iStack_a24;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  uint uStack_a10;
  int iStack_a0c;
  int iStack_a08;
  int iStack_a04;
  long lStack_a00;
  long lStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  undefined8 uStack_9e0;
  long lStack_9d8;
  int *piStack_9d0;
  long *plStack_9c8;
  long lStack_9c0;
  ulong uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  uint *puStack_9a0;
  undefined8 *puStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  double *pdStack_968;
  double dStack_960;
  undefined8 uStack_958;
  uint uStack_950;
  int iStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  long lStack_918;
  undefined4 *puStack_910;
  undefined8 *puStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  uint *puStack_8f0;
  long lStack_8e8;
  undefined8 uStack_8e0;
  uint *puStack_8d8;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  byte bStack_8bf;
  undefined2 uStack_8be;
  int iStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  ulong uStack_888;
  ulong uStack_880;
  double *pdStack_878;
  double dStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  undefined8 *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  uint **ppuStack_738;
  uint *puStack_730;
  undefined8 *puStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  double *pdStack_6f8;
  double dStack_6f0;
  double dStack_6e8;
  uint uStack_6e0;
  float fStack_6dc;
  long lStack_318;
  uint uStack_280;
  uint uStack_27c;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined4 auStack_240 [2];
  ulong *puStack_238;
  undefined8 uStack_230;
  int iStack_228;
  int iStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar37 = *(ulong **)(param_1 + 2);
    puStack_160 = (undefined8 *)((ulong)&uStack_1a0 | 8);
    uStack_198 = puVar37[1];
    uStack_1a0 = *puVar37;
    uStack_188 = puVar37[3];
    uStack_190 = puVar37[2];
    uStack_178 = puVar37[5];
    uStack_180 = puVar37[4];
    uStack_168 = puVar37[7];
    uStack_170 = puVar37[6];
    puStack_158 = &uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    if (puVar37[7] != 0) {
      piVar57 = (int *)(puVar37[7] + 0x14);
      do {
        cVar81 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
        if (bVar32) {
          *piVar57 = *piVar57 + 1;
          cVar81 = ExclusiveMonitorsStatus();
        }
      } while (cVar81 != '\0');
    }
    if (*(int *)((long)puVar37 + 4) < 3) {
      uStack_150 = *(undefined8 *)puVar37[9];
      uStack_148 = ((undefined8 *)puVar37[9])[1];
    }
    else {
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      func_0x000109a84868(&uStack_1a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1a0,param_1,0xffffffff);
  }
  if ((((uStack_1a0 & 7) != 0) || (iVar33 = (int)param_3, iVar33 < 3)) ||
     (iVar67 = (int)param_4, iVar67 < 3)) {
    puVar36 = (undefined4 *)0x44;
    func_0x000107c2ae8c();
    *puVar36 = 1;
    uStack_e0 = puVar36 + 1;
    puStack_d8 = (ulong *)0x3f;
    *(undefined8 *)(puVar36 + 3) = 0x43203d3d20292868;
    *(undefined8 *)(puVar36 + 1) = 0x747065642e676d69;
    *(undefined1 *)((long)puVar36 + 0x43) = 0;
    *(undefined8 *)(puVar36 + 7) = 0x2e657a69536e6977;
    *(undefined8 *)(puVar36 + 5) = 0x2026262055385f56;
    *(undefined8 *)(puVar36 + 0xb) = 0x6e69772026262032;
    *(undefined8 *)(puVar36 + 9) = 0x203e206874646977;
    *(undefined8 *)((long)puVar36 + 0x3b) = 0x32203e2074686769;
    *(undefined8 *)((long)puVar36 + 0x33) = 0x65682e657a69536e;
    FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f594b1a,&UNK_10f594b32,0x2ec);
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x109a253ac);
    (*pcVar29)();
  }
  uVar1 = param_5 + 1;
  puVar40 = (uint *)0x0;
  puVar41 = (uint *)0xffffffff;
  puVar42 = (uint *)0x1;
  puVar37 = (ulong *)0x0;
  FUN_109a8f64c(param_2,1,uVar1);
  if (uStack_1a0._1_1_ < '\0') {
    uStack_e0 = (undefined4 *)0x0;
    uStack_210 = 0;
    puVar38 = &uStack_210;
    FUN_109a86b88(&uStack_1a0,&uStack_e0);
    if (((int)uStack_210 < iVar33) || (uStack_210._4_4_ < iVar67)) goto LAB_109a249c0;
    if ((int)uStack_e0 < (int)uStack_210 + iVar33 + uStack_198._4_4_) goto LAB_109a249c0;
    if (uStack_e0._4_4_ < uStack_210._4_4_ + iVar67 + (int)uStack_198) goto LAB_109a249c0;
    puVar39 = param_2;
    FUN_109a8ec3c(param_2,0);
    if (puVar39 != &uStack_1a0) {
      if (uStack_168 != 0) {
        piVar57 = (int *)(uStack_168 + 0x14);
        do {
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = *piVar57 + 1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
      }
      if (puVar39[7] != 0) {
        piVar57 = (int *)(puVar39[7] + 0x14);
        do {
          iVar44 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar44 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar44 + -1 == 0) {
          func_0x000109a848d4(puVar39);
        }
      }
      puVar39[7] = 0;
      puVar39[3] = 0;
      puVar39[2] = 0;
      puVar39[5] = 0;
      puVar39[4] = 0;
      if ((int)*(uint *)((long)puVar39 + 4) < 1) {
        *(uint *)puVar39 = (uint)uStack_1a0;
LAB_109a252e4:
        if (2 < (int)uStack_1a0._4_4_) goto LAB_109a25318;
        *(uint *)((long)puVar39 + 4) = uStack_1a0._4_4_;
        puVar39[1] = uStack_198;
        puVar47 = (undefined8 *)puVar39[9];
        *puVar47 = *puStack_158;
        puVar47[1] = puStack_158[1];
      }
      else {
        lVar52 = 0;
        uVar45 = puVar39[8];
        do {
          *(undefined4 *)(uVar45 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)*(uint *)((long)puVar39 + 4));
        *(uint *)puVar39 = (uint)uStack_1a0;
        if ((int)*(uint *)((long)puVar39 + 4) < 3) goto LAB_109a252e4;
LAB_109a25318:
        func_0x000109a84868(puVar39,&uStack_1a0);
      }
      puVar39[3] = uStack_188;
      puVar39[2] = uStack_190;
      puVar39[5] = uStack_178;
      puVar39[4] = uStack_180;
      puVar39[7] = uStack_168;
      puVar39[6] = uStack_170;
    }
  }
  else {
LAB_109a249c0:
    puVar39 = param_2;
    FUN_109a8ec3c(param_2,0);
    if (puVar39[2] != 0) {
      uVar45 = (ulong)*(uint *)((long)puVar39 + 4);
      if ((int)*(uint *)((long)puVar39 + 4) < 3) {
        lVar52 = (long)(int)*(uint *)((long)puVar39 + 0xc) * (long)(int)(uint)puVar39[1];
      }
      else {
        lVar52 = 1;
        piVar57 = (int *)puVar39[8];
        do {
          lVar52 = lVar52 * *piVar57;
          uVar45 = uVar45 - 1;
          piVar57 = piVar57 + 1;
        } while (uVar45 != 0);
      }
      if (lVar52 != 0) {
        FUN_109a86cdc(puVar39,param_4,param_4,param_3,param_3);
      }
    }
    uVar66 = (uint)*puVar39 & 0xfff;
    if (uVar66 == ((uint)uStack_1a0 & 0xfff)) {
      uVar51 = *(uint *)((long)puVar39 + 0xc);
      uVar43 = uStack_198._4_4_ + iVar33 * 2;
      if ((uVar51 != uVar43) || (uVar43 = uVar51, (uint)puVar39[1] != (int)uStack_198 + iVar67 * 2))
      goto LAB_109a24a78;
    }
    else {
      uVar51 = *(uint *)((long)puVar39 + 0xc);
      uVar43 = uStack_198._4_4_ + iVar33 * 2;
LAB_109a24a78:
      uVar68 = (int)uStack_198 + iVar67 * 2;
      if ((((uVar66 != ((uint)uStack_1a0 & 0xfff)) || (2 < (int)*(uint *)((long)puVar39 + 4))) ||
          ((uint)puVar39[1] != uVar68)) || ((uVar51 != uVar43 || (puVar39[2] == 0)))) {
        uStack_e0 = (undefined4 *)CONCAT44(uVar43,uVar68);
        FUN_109a83fd0(puVar39,2,&uStack_e0);
      }
    }
    uStack_210 = CONCAT44(uStack_210._4_4_,0x1010000);
    puStack_208 = &uStack_1a0;
    uStack_200 = 0;
    uStack_140 = CONCAT44(uStack_140._4_4_,0x2010000);
    uStack_130 = 0;
    puStack_d8 = (ulong *)0x0;
    uStack_e0 = (undefined4 *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    param_8 = &uStack_e0;
    puVar37 = (ulong *)0x4;
    puVar42 = param_3;
    puStack_138 = puVar39;
    FUN_109a4a0a4(&uStack_210,&uStack_140,param_4,param_4,param_3);
    puVar38 = (ulong *)(ulong)(uint)-iVar67;
    puVar40 = (uint *)(ulong)(uint)-iVar33;
    puVar41 = puVar40;
    FUN_109a86cdc(puVar39);
  }
  uStack_1a8 = NEON_rev64(*puStack_160,4);
  puVar39 = param_2;
  FUN_109a8ec3c(param_2,0);
  uStack_a0 = (ulong)&uStack_e0 | 8;
  puStack_d8 = (ulong *)puVar39[1];
  uStack_e0 = (undefined4 *)*puVar39;
  uStack_c8 = puVar39[3];
  uStack_d0 = puVar39[2];
  uStack_b8 = puVar39[5];
  uStack_c0 = puVar39[4];
  uStack_a8 = puVar39[7];
  uStack_b0 = puVar39[6];
  uStack_90 = 0;
  uStack_88 = 0;
  if (puVar39[7] != 0) {
    piVar57 = (int *)(puVar39[7] + 0x14);
    do {
      cVar81 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
      if (bVar32) {
        *piVar57 = *piVar57 + 1;
        cVar81 = ExclusiveMonitorsStatus();
      }
    } while (cVar81 != '\0');
  }
  puStack_98 = &uStack_90;
  if ((int)*(uint *)((long)puVar39 + 4) < 3) {
    uStack_90 = *(undefined8 *)puVar39[9];
    uStack_88 = ((undefined8 *)puVar39[9])[1];
  }
  else {
    uStack_e0 = (undefined4 *)((ulong)uStack_e0 & 0xffffffff);
    func_0x000109a84868(&uStack_e0);
  }
  uVar45 = (ulong)&uStack_210 | 8;
  puStack_208 = puStack_d8;
  uStack_210 = (ulong)uStack_e0;
  uStack_1f8 = uStack_c8;
  uStack_200 = uStack_d0;
  uStack_1e8 = uStack_b8;
  uStack_1f0 = uStack_c0;
  uStack_1d8 = uStack_a8;
  uStack_1e0 = uStack_b0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  if (uStack_a8 != 0) {
    piVar57 = (int *)(uStack_a8 + 0x14);
    do {
      cVar81 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
      if (bVar32) {
        *piVar57 = *piVar57 + 1;
        cVar81 = ExclusiveMonitorsStatus();
      }
    } while (cVar81 != '\0');
  }
  uStack_1d0 = uVar45;
  puStack_1c8 = &uStack_1c0;
  if (uStack_e0._4_4_ < 3) {
    uStack_1c0 = *puStack_98;
    uStack_1b8 = puStack_98[1];
  }
  else {
    uStack_210 = (ulong)uStack_e0 & 0xffffffff;
    puVar39 = &uStack_e0;
    func_0x000109a84868(&uStack_210);
  }
  if ((int)param_5 < 0) {
    uVar1 = uStack_27c;
    uVar66 = 0;
  }
  else {
    uVar43 = 0;
    puStack_270 = (undefined8 *)((ulong)&uStack_140 | 4);
    do {
      if (uVar43 != 0) {
        puVar34 = param_2;
        FUN_109a8ec3c(param_2,uVar43);
        if (puVar34[2] != 0) {
          uVar46 = (ulong)*(uint *)((long)puVar34 + 4);
          if ((int)*(uint *)((long)puVar34 + 4) < 3) {
            lVar52 = (long)(int)*(uint *)((long)puVar34 + 0xc) * (long)(int)(uint)puVar34[1];
          }
          else {
            lVar52 = 1;
            piVar57 = (int *)puVar34[8];
            do {
              lVar52 = lVar52 * *piVar57;
              uVar46 = uVar46 - 1;
              piVar57 = piVar57 + 1;
            } while (uVar46 != 0);
          }
          if (lVar52 != 0) {
            FUN_109a86cdc(puVar34,param_4,param_4,param_3,param_3);
          }
        }
        uVar66 = (uint)*puVar34 & 0xfff;
        if (uVar66 == ((uint)uStack_1a0 & 0xfff)) {
          uVar68 = *(uint *)((long)puVar34 + 0xc);
          uVar51 = (int)uStack_1a8 + iVar33 * 2;
          if ((uVar68 != uVar51) ||
             (uVar51 = uVar68, (uint)puVar34[1] != uStack_1a8._4_4_ + iVar67 * 2))
          goto LAB_109a24d40;
        }
        else {
          uVar68 = *(uint *)((long)puVar34 + 0xc);
          uVar51 = (int)uStack_1a8 + iVar33 * 2;
LAB_109a24d40:
          uVar3 = uStack_1a8._4_4_ + iVar67 * 2;
          if ((((uVar66 != ((uint)uStack_1a0 & 0xfff)) || (2 < (int)*(uint *)((long)puVar34 + 4)))
              || ((uint)puVar34[1] != uVar3)) || ((uVar68 != uVar51 || (puVar34[2] == 0)))) {
            uStack_140 = CONCAT44(uVar51,uVar3);
            FUN_109a83fd0(puVar34,2,&uStack_140);
          }
        }
        uStack_220 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
        iStack_228 = iVar33;
        iStack_224 = iVar67;
        FUN_109a852c8(&uStack_140,puVar34,&iStack_228);
        if (uStack_1d8 != 0) {
          piVar57 = (int *)(uStack_1d8 + 0x14);
          do {
            iVar44 = *piVar57;
            cVar81 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
            if (bVar32) {
              *piVar57 = iVar44 + -1;
              cVar81 = ExclusiveMonitorsStatus();
            }
          } while (cVar81 != '\0');
          if (iVar44 + -1 == 0) {
            func_0x000109a848d4(&uStack_210);
          }
        }
        if (0 < uStack_210._4_4_) {
          lVar52 = 0;
          do {
            *(undefined4 *)(uStack_1d0 + lVar52 * 4) = 0;
            lVar52 = lVar52 + 1;
          } while (lVar52 < uStack_210._4_4_);
        }
        puStack_208 = puStack_138;
        uStack_210 = uStack_140;
        uStack_1f8 = uStack_128;
        uStack_200 = uStack_130;
        uStack_1e8 = uStack_118;
        uStack_1f0 = uStack_120;
        uStack_1d8 = uStack_108;
        uStack_1e0 = uStack_110;
        iVar44 = uStack_140._4_4_;
        uVar46 = uStack_1d0;
        puVar47 = puStack_1c8;
        if ((puStack_1c8 != &uStack_1c0) &&
           (uVar46 = uVar45, puVar47 = &uStack_1c0, puStack_1c8 != (undefined8 *)0x0)) {
          _free(puStack_1c8[-1]);
          iVar44 = uStack_140._4_4_;
        }
        puStack_1c8 = puVar47;
        uStack_1d0 = uVar46;
        puVar47 = puStack_f8;
        if (iVar44 < 3) {
          *puStack_1c8 = *puStack_f8;
          puStack_1c8[1] = puVar47[1];
          uStack_140 = CONCAT44(uStack_140._4_4_,0x42ff0000);
          puStack_270[1] = 0;
          *puStack_270 = 0;
          puStack_270[3] = 0;
          puStack_270[2] = 0;
          puStack_270[5] = 0;
          puStack_270[4] = 0;
          *(undefined8 *)((long)puStack_270 + 0x34) = 0;
          *(undefined8 *)((long)puStack_270 + 0x2c) = 0;
          if (puVar47 != auStack_f0) {
            _free(puVar47[-1]);
          }
        }
        else {
          uStack_1d0 = uStack_100;
          puStack_1c8 = puStack_f8;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,0x1010000);
        puStack_138 = &uStack_e0;
        uStack_130 = 0;
        iStack_228 = 0x2010000;
        uStack_218 = 0;
        uStack_220 = &uStack_210;
        FUN_109b3a7f4(&uStack_140,&iStack_228,&uStack_1a8,4);
        uStack_218 = 0;
        iStack_228 = 0x1010000;
        auStack_240[0] = 0x2010000;
        uStack_230 = 0;
        puStack_138 = (ulong *)0x0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        param_8 = &uStack_140;
        puVar37 = (ulong *)0x14;
        puVar42 = param_3;
        puStack_238 = puVar34;
        uStack_220 = &uStack_210;
        FUN_109a4a0a4(&iStack_228,auStack_240,param_4,param_4,param_3);
        puVar39 = (ulong *)(ulong)(uint)-iVar67;
        puVar38 = (ulong *)(ulong)(uint)-iVar67;
        puVar40 = (uint *)(ulong)(uint)-iVar33;
        puVar41 = (uint *)(ulong)(uint)-iVar33;
        FUN_109a86cdc(puVar34);
      }
      iVar44 = (int)uStack_1a8 + 1;
      iVar15 = (int)((ulong)uStack_1a8 >> 0x20) + 1;
      cVar81 = (char)(iVar44 - (iVar44 >> 0x1f) >> 0x19);
      iVar16 = iVar15 / 2;
      cVar98 = (char)(iVar15 - (iVar15 >> 0x1f) >> 0x19);
      uVar12 = (undefined3)(iVar44 / 2);
      uStack_1a8 = CONCAT17(cVar98,CONCAT16((char)((uint)iVar16 >> 0x10),
                                            CONCAT15((char)((uint)iVar16 >> 8),
                                                     CONCAT14((char)iVar16,CONCAT13(cVar81,uVar12)))
                                           ));
      puStack_278 = &uStack_90;
      if (CONCAT13(cVar81,uVar12) <= iVar33 || CONCAT13(cVar98,(int3)iVar16) <= iVar67) {
        puVar38 = (ulong *)(ulong)(uVar43 + 1);
        puVar39 = (ulong *)0x1;
        puVar40 = (uint *)0x0;
        puVar41 = (uint *)0xffffffff;
        puVar42 = (uint *)0x1;
        puVar37 = (ulong *)0x0;
        FUN_109a8f64c(param_2);
        uVar66 = uVar43;
        break;
      }
      if (uStack_1d8 != 0) {
        piVar57 = (int *)(uStack_1d8 + 0x14);
        do {
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = *piVar57 + 1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
      }
      if (uStack_a8 != 0) {
        piVar57 = (int *)(uStack_a8 + 0x14);
        do {
          iVar44 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar44 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar44 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      uStack_a8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      if (uStack_e0._4_4_ < 1) {
LAB_109a24fdc:
        if (2 < uStack_210._4_4_) goto LAB_109a25010;
        uStack_e0 = (undefined4 *)uStack_210;
        puStack_d8 = puStack_208;
        *puStack_98 = *puStack_1c8;
        puStack_98[1] = puStack_1c8[1];
      }
      else {
        lVar52 = 0;
        do {
          *(undefined4 *)(uStack_a0 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < uStack_e0._4_4_);
        if (uStack_e0._4_4_ < 3) goto LAB_109a24fdc;
LAB_109a25010:
        uStack_e0 = (undefined4 *)CONCAT44(uStack_e0._4_4_,(int)uStack_210);
        puVar39 = &uStack_210;
        func_0x000109a84868(&uStack_e0);
      }
      uStack_c8 = uStack_1f8;
      uStack_d0 = uStack_200;
      uStack_b8 = uStack_1e8;
      uStack_c0 = uStack_1f0;
      uStack_a8 = uStack_1d8;
      uStack_b0 = uStack_1e0;
      bVar32 = uVar43 != param_5;
      uVar43 = uVar43 + 1;
      uVar66 = uVar1;
    } while (bVar32);
  }
  if (uStack_1d8 != 0) {
    piVar57 = (int *)(uStack_1d8 + 0x14);
    do {
      iVar33 = *piVar57;
      cVar81 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
      if (bVar32) {
        *piVar57 = iVar33 + -1;
        cVar81 = ExclusiveMonitorsStatus();
      }
    } while (cVar81 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  uStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if (0 < uStack_210._4_4_) {
    lVar52 = 0;
    do {
      *(undefined4 *)(uStack_1d0 + lVar52 * 4) = 0;
      lVar52 = lVar52 + 1;
    } while (lVar52 < uStack_210._4_4_);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  if (uStack_a8 != 0) {
    piVar57 = (int *)(uStack_a8 + 0x14);
    do {
      iVar33 = *piVar57;
      cVar81 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
      if (bVar32) {
        *piVar57 = iVar33 + -1;
        cVar81 = ExclusiveMonitorsStatus();
      }
    } while (cVar81 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar52 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar52 * 4) = 0;
      lVar52 = lVar52 + 1;
    } while (lVar52 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  if (uStack_168 != 0) {
    piVar57 = (int *)(uStack_168 + 0x14);
    do {
      iVar33 = *piVar57;
      cVar81 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
      if (bVar32) {
        *piVar57 = iVar33 + -1;
        cVar81 = ExclusiveMonitorsStatus();
      }
    } while (cVar81 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_1a0);
    }
  }
  uStack_168 = 0;
  uVar73 = 0;
  uVar75 = 0;
  uVar78 = 0;
  uVar82 = 0;
  uVar86 = 0;
  uVar90 = 0;
  uVar94 = 0;
  uVar99 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (0 < (int)uStack_1a0._4_4_) {
    lVar52 = 0;
    do {
      *(undefined4 *)((long)puStack_160 + lVar52 * 4) = 0;
      lVar52 = lVar52 + 1;
    } while (lVar52 < (int)uStack_1a0._4_4_);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  if ((int)param_5 <= (int)uVar66) {
    uVar66 = param_5;
  }
  puVar34 = (ulong *)(ulong)uVar66;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar39 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_210);
    func_0x00010567aa40(&uStack_e0);
    func_0x00010567aa40(&uStack_1a0);
  }
  __Unwind_Resume();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*puVar38 & 0x1f0000) == 0x10000) {
    puVar38 = (ulong *)puVar38[1];
    puStack_760 = (undefined8 *)((ulong)&uStack_7a0 | 8);
    uStack_798 = puVar38[1];
    uStack_7a0 = *puVar38;
    uStack_788 = puVar38[3];
    uStack_790 = puVar38[2];
    uStack_778 = puVar38[5];
    uStack_780 = puVar38[4];
    uStack_768 = puVar38[7];
    uStack_770 = puVar38[6];
    puStack_758 = &uStack_750;
    uStack_748 = 0;
    uStack_750 = 0;
    if (puVar38[7] != 0) {
      piVar57 = (int *)(puVar38[7] + 0x14);
      do {
        cVar81 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
        if (bVar32) {
          *piVar57 = *piVar57 + 1;
          cVar81 = ExclusiveMonitorsStatus();
        }
      } while (cVar81 != '\0');
    }
    if (*(int *)((long)puVar38 + 4) < 3) {
      uStack_750 = *(undefined8 *)puVar38[9];
      uStack_748 = ((undefined8 *)puVar38[9])[1];
    }
    else {
      uStack_7a0 = uStack_7a0 & 0xffffffff;
      func_0x000109a84868(&uStack_7a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_7a0,puVar38,0xffffffff);
  }
  uVar66 = (uint)param_8;
  if ((((int)uVar66 < 0) || ((int)*puVar37 < 3)) || (*(int *)((long)puVar37 + 4) < 3)) {
    puVar36 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar36 = 1;
    uStack_740 = (undefined **)(puVar36 + 1);
    ppuStack_738 = (uint **)0x38;
    *(undefined8 *)(puVar36 + 3) = 0x26262030203d3e20;
    *(undefined8 *)(puVar36 + 1) = 0x6c6576654c78616d;
    *(undefined1 *)(puVar36 + 0xf) = 0;
    *(undefined8 *)(puVar36 + 7) = 0x3e2068746469772e;
    *(undefined8 *)(puVar36 + 5) = 0x657a69536e697720;
    *(undefined8 *)(puVar36 + 0xb) = 0x65682e657a69536e;
    *(undefined8 *)(puVar36 + 9) = 0x6977202626203220;
    *(undefined8 *)(puVar36 + 0xd) = 0x32203e2074686769;
    FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x457);
    goto LAB_109a27020;
  }
  puVar47 = &uStack_7a0;
  FUN_109a89cd4(puVar47,2,5,1);
  iVar33 = (int)puVar47;
  if (iVar33 < 0) {
    puVar36 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar36 = 1;
    uStack_740 = (undefined **)(puVar36 + 1);
    ppuStack_738 = (uint **)0x38;
    *(undefined8 *)(puVar36 + 3) = 0x5076657270203d20;
    *(undefined8 *)(puVar36 + 1) = 0x73746e696f706e28;
    *(undefined1 *)(puVar36 + 0xf) = 0;
    *(undefined8 *)(puVar36 + 7) = 0x6f746365566b6365;
    *(undefined8 *)(puVar36 + 5) = 0x68632e74614d7374;
    *(undefined8 *)(puVar36 + 0xb) = 0x757274202c463233;
    *(undefined8 *)(puVar36 + 9) = 0x5f5643202c322872;
    *(undefined8 *)(puVar36 + 0xd) = 0x30203d3e20292965;
    FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x45a);
    goto LAB_109a27020;
  }
  if (iVar33 == 0) {
    FUN_109a8e944(puVar40);
    FUN_109a8e944(puVar41);
    FUN_109a8e944(puVar42);
LAB_109a26984:
    if (uStack_768 != 0) {
      piVar57 = (int *)(uStack_768 + 0x14);
      do {
        iVar33 = *piVar57;
        cVar81 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
        if (bVar32) {
          *piVar57 = iVar33 + -1;
          cVar81 = ExclusiveMonitorsStatus();
        }
      } while (cVar81 != '\0');
      if (iVar33 + -1 == 0) {
        func_0x000109a848d4(&uStack_7a0);
      }
    }
    uStack_768 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    uStack_778 = 0;
    uStack_780 = 0;
    if (0 < uStack_7a0._4_4_) {
      lVar52 = 0;
      do {
        *(undefined4 *)((long)puStack_760 + lVar52 * 4) = 0;
        lVar52 = lVar52 + 1;
      } while (lVar52 < uStack_7a0._4_4_);
    }
    if (puStack_758 != &uStack_750 && puStack_758 != (undefined8 *)0x0) {
      _free(puStack_758[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (((uint)puStack_270 >> 2 & 1) == 0) {
      uStack_740 = (undefined **)NEON_rev64(*puStack_760,4);
      FUN_109a8ee3c(puVar40,&uStack_740,(uint)uStack_7a0 & 0xfff,0xffffffff,1,0);
    }
    if ((*puVar40 & 0x1f0000) == 0x10000) {
      puVar38 = *(ulong **)(puVar40 + 2);
      uStack_7c0 = (ulong)&uStack_800 | 8;
      uStack_7f8 = puVar38[1];
      uStack_800 = *puVar38;
      uStack_7e8 = puVar38[3];
      uStack_7f0 = puVar38[2];
      uStack_7d8 = puVar38[5];
      uStack_7e0 = puVar38[4];
      uStack_7c8 = puVar38[7];
      uStack_7d0 = puVar38[6];
      puStack_7b8 = &uStack_7b0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      if (puVar38[7] != 0) {
        piVar57 = (int *)(puVar38[7] + 0x14);
        do {
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = *piVar57 + 1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
      }
      if (*(int *)((long)puVar38 + 4) < 3) {
        uStack_7b0 = *(undefined8 *)puVar38[9];
        uStack_7a8 = ((undefined8 *)puVar38[9])[1];
      }
      else {
        uStack_800 = uStack_800 & 0xffffffff;
        func_0x000109a84868(&uStack_800);
      }
    }
    else {
      FUN_109a8a180(&uStack_800,puVar40,0xffffffff);
    }
    puVar59 = &uStack_800;
    FUN_109a89cd4(puVar59,2,5,1);
    uVar46 = uStack_790;
    uVar45 = uStack_7f0;
    if ((int)puVar59 != iVar33) {
      puVar36 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar36 = 1;
      uStack_740 = (undefined **)(puVar36 + 1);
      ppuStack_738 = (uint **)0x32;
      *(undefined8 *)(puVar36 + 3) = 0x6b636568632e7461;
      *(undefined8 *)(puVar36 + 1) = 0x4d7374507478656e;
      *(undefined2 *)(puVar36 + 0xd) = 0x7374;
      *(undefined1 *)((long)puVar36 + 0x36) = 0;
      *(undefined8 *)(puVar36 + 7) = 0x4632335f5643202c;
      *(undefined8 *)(puVar36 + 5) = 0x3228726f74636556;
      *(undefined8 *)(puVar36 + 0xb) = 0x6e696f706e203d3d;
      *(undefined8 *)(puVar36 + 9) = 0x202965757274202c;
      FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x468);
      goto LAB_109a27020;
    }
    FUN_109a8f64c(puVar41,puVar47,1,0,0xffffffff,1,0);
    if ((*puVar41 & 0x1f0000) == 0x10000) {
      puVar38 = *(ulong **)(puVar41 + 2);
      uStack_820 = (ulong)&uStack_860 | 8;
      uStack_858 = puVar38[1];
      uStack_860 = *puVar38;
      uStack_848 = puVar38[3];
      uStack_850 = puVar38[2];
      uStack_838 = puVar38[5];
      uStack_840 = puVar38[4];
      uStack_828 = puVar38[7];
      uStack_830 = puVar38[6];
      puStack_818 = &uStack_810;
      uStack_808 = 0;
      uStack_810 = 0;
      if (puVar38[7] != 0) {
        piVar57 = (int *)(puVar38[7] + 0x14);
        do {
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = *piVar57 + 1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
      }
      if (*(int *)((long)puVar38 + 4) < 3) {
        uStack_810 = *(undefined8 *)puVar38[9];
        uStack_808 = ((undefined8 *)puVar38[9])[1];
      }
      else {
        uStack_860 = uStack_860 & 0xffffffff;
        func_0x000109a84868(&uStack_860);
      }
    }
    else {
      FUN_109a8a180(&uStack_860,puVar41,0xffffffff);
    }
    uVar28 = uStack_850;
    uStack_8c0 = 0;
    bStack_8bf = 0;
    uStack_8be = 0x42ff;
    uVar64 = (ulong)&uStack_8c0 | 8;
    uStack_8b4 = 0;
    uStack_8b0 = 0;
    iStack_8bc = 0;
    uStack_8b8 = 0;
    uStack_8a4 = 0;
    uStack_8a0 = 0;
    uStack_8ac = 0;
    uStack_8a8 = 0;
    uStack_894 = 0;
    uStack_89c = 0;
    uStack_898 = 0;
    uStack_888 = 0;
    uStack_890 = 0;
    uStack_88c = 0;
    uStack_868 = 0;
    dStack_870 = 0.0;
    uStack_880 = uVar64;
    pdStack_878 = &dStack_870;
    if ((uStack_860._1_1_ >> 6 & 1) == 0) {
      puVar36 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar36 = 1;
      uStack_740 = (undefined **)(puVar36 + 1);
      ppuStack_738 = (uint **)0x18;
      *(undefined1 *)(puVar36 + 7) = 0;
      *(undefined8 *)(puVar36 + 3) = 0x746e6f4373692e74;
      *(undefined8 *)(puVar36 + 1) = 0x614d737574617473;
      *(undefined8 *)(puVar36 + 5) = 0x292873756f756e69;
      FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x46f);
      goto LAB_109a27020;
    }
    _memset(uStack_850,1,(ulong)puVar47 & 0xffffffff);
    if ((*puVar42 & 0x1f0000) == 0) {
      uStack_ae8 = 0;
    }
    else {
      FUN_109a8f64c(puVar42,(ulong)puVar47 & 0xffffffff,1,5,0xffffffff,1,0);
      if ((*puVar42 & 0x1f0000) == 0x10000) {
        puVar38 = *(ulong **)(puVar42 + 2);
        uStack_740 = (undefined **)*puVar38;
        ppuStack_738 = (uint **)puVar38[1];
        puStack_728 = (undefined8 *)puVar38[3];
        puStack_730 = (uint *)puVar38[2];
        uStack_718 = puVar38[5];
        uStack_720 = puVar38[4];
        uStack_708 = puVar38[7];
        uStack_710 = puVar38[6];
        uStack_700 = (ulong)&uStack_740 | 8;
        pdStack_6f8 = &dStack_6f0;
        dStack_6e8 = 0.0;
        dStack_6f0 = 0.0;
        if (puVar38[7] != 0) {
          piVar57 = (int *)(puVar38[7] + 0x14);
          do {
            cVar81 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
            if (bVar32) {
              *piVar57 = *piVar57 + 1;
              cVar81 = ExclusiveMonitorsStatus();
            }
          } while (cVar81 != '\0');
        }
        if (*(int *)((long)puVar38 + 4) < 3) {
          dStack_6f0 = *(double *)puVar38[9];
          dStack_6e8 = ((double *)puVar38[9])[1];
        }
        else {
          uStack_740 = (undefined **)((ulong)uStack_740 & 0xffffffff);
          func_0x000109a84868(&uStack_740);
        }
      }
      else {
        FUN_109a8a180(&uStack_740,puVar42,0xffffffff);
      }
      if (uStack_888 != 0) {
        piVar57 = (int *)(uStack_888 + 0x14);
        do {
          iVar67 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar67 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar67 + -1 == 0) {
          func_0x000109a848d4(&uStack_8c0);
        }
      }
      if (0 < iStack_8bc) {
        lVar52 = 0;
        do {
          *(undefined4 *)(uStack_880 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < iStack_8bc);
      }
      uStack_8b8 = SUB84(ppuStack_738,0);
      uStack_8b4 = (undefined4)((ulong)ppuStack_738 >> 0x20);
      uStack_8c0 = SUB81(uStack_740,0);
      bStack_8bf = (byte)((ulong)uStack_740 >> 8);
      uStack_8be = (undefined2)((ulong)uStack_740 >> 0x10);
      uStack_8a8 = SUB84(puStack_728,0);
      uStack_8a4 = (undefined4)((ulong)puStack_728 >> 0x20);
      uStack_8b0 = SUB84(puStack_730,0);
      uStack_8ac = (undefined4)((ulong)puStack_730 >> 0x20);
      uStack_898 = (undefined4)uStack_718;
      uStack_894 = (undefined4)(uStack_718 >> 0x20);
      uStack_8a0 = (undefined4)uStack_720;
      uStack_89c = (undefined4)(uStack_720 >> 0x20);
      uStack_888 = uStack_708;
      uStack_890 = (undefined4)uStack_710;
      uStack_88c = (undefined4)(uStack_710 >> 0x20);
      iVar67 = uStack_740._4_4_;
      iStack_8bc = uStack_740._4_4_;
      if (pdStack_878 != &dStack_870) {
        if (pdStack_878 != (double *)0x0) {
          _free(pdStack_878[-1]);
          iVar67 = uStack_740._4_4_;
        }
        pdStack_878 = &dStack_870;
        uStack_880 = uVar64;
      }
      if (iVar67 < 3) {
        puVar47 = (undefined8 *)((ulong)&uStack_740 | 4);
        *pdStack_878 = *pdStack_6f8;
        pdStack_878[1] = pdStack_6f8[1];
        uStack_740 = (undefined **)CONCAT44(uStack_740._4_4_,0x42ff0000);
        puVar47[1] = 0;
        *puVar47 = 0;
        puVar47[3] = 0;
        puVar47[2] = 0;
        puVar47[5] = 0;
        puVar47[4] = 0;
        *(undefined8 *)((long)puVar47 + 0x34) = 0;
        *(undefined8 *)((long)puVar47 + 0x2c) = 0;
        if (pdStack_6f8 != &dStack_6f0) {
          _free(pdStack_6f8[-1]);
        }
      }
      else {
        pdStack_878 = pdStack_6f8;
        uStack_880 = uStack_700;
      }
      if ((bStack_8bf >> 6 & 1) == 0) {
        puVar36 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar36 = 1;
        uStack_740 = (undefined **)(puVar36 + 1);
        ppuStack_738 = (uint **)0x15;
        *(undefined1 *)((long)puVar36 + 0x19) = 0;
        *(undefined8 *)(puVar36 + 3) = 0x756e69746e6f4373;
        *(undefined8 *)(puVar36 + 1) = 0x692e74614d727265;
        *(undefined8 *)((long)puVar36 + 0x11) = 0x292873756f756e69;
        FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x47a);
        goto LAB_109a27020;
      }
      uStack_ae8 = CONCAT44(uStack_8ac,uStack_8b0);
    }
    lStack_8d0 = 0;
    puStack_8d8 = (uint *)0x0;
    uStack_8c8 = 0;
    lStack_8e8 = 0;
    puStack_8f0 = (uint *)0x0;
    uStack_8e0 = 0;
    uVar43 = (uint)*puVar34 & 0x1f0000;
    if (uVar43 != 0x50000) {
      lVar52 = 1;
LAB_109a25b20:
      uVar66 = (uint)*puVar39 & 0x1f0000;
      if (uVar66 == 0x50000) {
        FUN_109a8c15c(puVar39,&puStack_8f0);
        iVar67 = (int)((ulong)(lStack_8e8 - (long)puStack_8f0) >> 5) * -0x55555555;
        if (iVar67 < 1) {
          puVar36 = (undefined4 *)0x14;
          func_0x000107c2ae8c();
          *puVar36 = 1;
          uStack_740 = (undefined **)(puVar36 + 1);
          *uStack_740 = (undefined *)0x2032736c6576656c;
          ppuStack_738 = (uint **)0xc;
          *(undefined1 *)(puVar36 + 4) = 0;
          puVar36[3] = 0x30203d3e;
          FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x4a5);
          goto LAB_109a27020;
        }
        uVar51 = iVar67 - 1;
        if ((uVar51 & 0x80000001) == 1) {
          if (((*puStack_8f0 >> 2 & 0x3fe | 1) == (puStack_8f0[0x18] >> 3 & 0x1ff)) &&
             ((puStack_8f0[0x18] & 7) == 3)) {
            uVar51 = uVar51 >> 1;
            lStack_ac8 = 2;
            if (uVar51 == 0) goto LAB_109a25c58;
          }
          else {
            lStack_ac8 = 1;
          }
LAB_109a25bd4:
          uStack_950 = 0;
          iStack_94c = 0;
          uStack_9b0 = (uint **)0x0;
          FUN_109a86b88(puStack_8f0 + lStack_ac8 * 0x18,&uStack_950,&uStack_9b0);
          if ((int)*puVar37 <= (int)(uint)uStack_9b0) {
            if (((*(int *)((long)puVar37 + 4) <= uStack_9b0._4_4_) &&
                ((int)((int)*puVar37 + (uint)uStack_9b0 + puStack_8f0[lStack_ac8 * 0x18 + 3]) <=
                 (int)uStack_950)) &&
               ((int)(*(int *)((long)puVar37 + 4) + uStack_9b0._4_4_ +
                     puStack_8f0[lStack_ac8 * 0x18 + 2]) <= iStack_94c)) goto LAB_109a25c58;
          }
          puVar36 = (undefined4 *)0xc0;
          func_0x000107c2ae8c();
          *puVar36 = 1;
          uStack_740 = (undefined **)(puVar36 + 1);
          ppuStack_738 = (uint **)0xbb;
          *(undefined8 *)(puVar36 + 0x23) = 0x706574536c766c5b;
          *(undefined8 *)(puVar36 + 0x21) = 0x7279507478656e20;
          *(undefined8 *)(puVar36 + 0x27) = 0x7a69536e6977202b;
          *(undefined8 *)(puVar36 + 0x25) = 0x2073776f722e5d32;
          *(undefined8 *)(puVar36 + 0x2b) = 0x6c6c7566203d3c20;
          *(undefined8 *)(puVar36 + 0x29) = 0x7468676965682e65;
          *(undefined8 *)((long)puVar36 + 0xb7) = 0x7468676965682e65;
          *(undefined8 *)((long)puVar36 + 0xaf) = 0x7a69536c6c756620;
          *(undefined8 *)(puVar36 + 0x13) = 0x632e5d3270657453;
          *(undefined8 *)(puVar36 + 0x11) = 0x6c766c5b72795074;
          *(undefined8 *)(puVar36 + 0x17) = 0x69772e657a69536e;
          *(undefined8 *)(puVar36 + 0x15) = 0x6977202b20736c6f;
          *(undefined8 *)(puVar36 + 0x1b) = 0x2e657a69536c6c75;
          *(undefined8 *)(puVar36 + 0x19) = 0x66203d3c20687464;
          *(undefined8 *)(puVar36 + 0x1f) = 0x2b20792e73666f20;
          *(undefined8 *)(puVar36 + 0x1d) = 0x2626206874646977;
          *(undefined8 *)(puVar36 + 3) = 0x657a69536e697720;
          *(undefined8 *)(puVar36 + 1) = 0x3d3e20782e73666f;
          *(undefined8 *)(puVar36 + 7) = 0x20792e73666f2026;
          *(undefined8 *)(puVar36 + 5) = 0x262068746469772e;
          *(undefined8 *)(puVar36 + 0xb) = 0x68676965682e657a;
          *(undefined8 *)(puVar36 + 9) = 0x69536e6977203d3e;
          *(undefined1 *)((long)puVar36 + 0xbf) = 0;
          *(undefined8 *)(puVar36 + 0xf) = 0x78656e202b20782e;
          *(undefined8 *)(puVar36 + 0xd) = 0x73666f2026262074;
          FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x4b5);
          goto LAB_109a27020;
        }
        lStack_ac8 = 1;
        if (uVar51 != 0) goto LAB_109a25bd4;
LAB_109a25c58:
        if ((uint)param_8 <= uVar51) {
          uVar51 = (uint)param_8;
        }
        param_8 = (ulong *)(ulong)uVar51;
      }
      else {
        lStack_ac8 = 1;
      }
      if (uVar43 != 0x50000) {
        uStack_740 = (undefined **)CONCAT44(uStack_740._4_4_,0x2050000);
        ppuStack_738 = &puStack_8d8;
        puStack_730 = (uint *)0x0;
        FUN_109a24834(puVar34,&uStack_740,(int)*puVar37,*(int *)((long)puVar37 + 4),param_8);
        param_8 = puVar34;
      }
      if (uVar66 != 0x50000) {
        uStack_740 = (undefined **)CONCAT44(uStack_740._4_4_,0x2050000);
        ppuStack_738 = &puStack_8f0;
        puStack_730 = (uint *)0x0;
        FUN_109a24834(puVar39,&uStack_740,(int)*puVar37,*(int *)((long)puVar37 + 4),param_8);
        param_8 = puVar39;
      }
      uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      if (99 < (int)uVar1) {
        uVar1 = 100;
      }
      uVar66 = 0x1e;
      if ((uStack_280 & 1) != 0) {
        uVar66 = uVar1;
      }
      uVar100 = 0;
      uVar74 = 0;
      uVar76 = 0;
      uVar79 = 0;
      uVar83 = 0;
      uVar87 = 0;
      uVar91 = 0;
      uVar95 = 0;
      if (0.0 <= (double)puStack_278) {
        uVar74 = SUB81(puStack_278,0);
        uVar76 = (undefined1)((ulong)puStack_278 >> 8);
        uVar79 = (undefined1)((ulong)puStack_278 >> 0x10);
        uVar83 = (undefined1)((ulong)puStack_278 >> 0x18);
        uVar87 = (undefined1)((ulong)puStack_278 >> 0x20);
        uVar91 = (undefined1)((ulong)puStack_278 >> 0x28);
        uVar95 = (undefined1)((ulong)puStack_278 >> 0x30);
        uVar100 = (undefined1)((ulong)puStack_278 >> 0x38);
      }
      bVar30 = false;
      bVar31 = false;
      bVar32 = NAN((double)CONCAT17(uVar100,CONCAT16(uVar95,CONCAT15(uVar91,CONCAT14(uVar87,CONCAT13
                                                  (uVar83,CONCAT12(uVar79,CONCAT11(uVar76,uVar74))))
                                                  ))));
      if (!bVar32) {
        bVar30 = (double)CONCAT17(uVar100,CONCAT16(uVar95,CONCAT15(uVar91,CONCAT14(uVar87,CONCAT13(
                                                  uVar83,CONCAT12(uVar79,CONCAT11(uVar76,uVar74)))))
                                                  )) < 10.0;
        bVar31 = (double)CONCAT17(uVar100,CONCAT16(uVar95,CONCAT15(uVar91,CONCAT14(uVar87,CONCAT13(
                                                  uVar83,CONCAT12(uVar79,CONCAT11(uVar76,uVar74)))))
                                                  )) == 10.0;
      }
      uVar103 = 0;
      uVar104 = 0;
      uVar105 = 0;
      uVar84 = 0;
      uVar88 = 0;
      uVar92 = 0;
      uVar96 = 0x24;
      uVar101 = 0x40;
      if (bVar31 || bVar30 != bVar32) {
        uVar103 = uVar74;
        uVar104 = uVar76;
        uVar105 = uVar79;
        uVar84 = uVar83;
        uVar88 = uVar87;
        uVar92 = uVar91;
        uVar96 = uVar95;
        uVar101 = uVar100;
      }
      uStack_944 = 0;
      uStack_940 = 0;
      iStack_94c = 0;
      uStack_948 = 0;
      uStack_934 = 0;
      uStack_930 = 0;
      uStack_93c = 0;
      uStack_938 = 0;
      uStack_924 = 0;
      uStack_92c = 0;
      uStack_928 = 0;
      lStack_918 = 0;
      uStack_920 = 0;
      uStack_91c = 0;
      uStack_950 = 0x42ff0000;
      puStack_910 = &uStack_948;
      dVar122 = 0.01;
      if ((uStack_280 & 2) != 0) {
        dVar122 = (double)CONCAT17(uVar101,CONCAT16(uVar96,CONCAT15(uVar92,CONCAT14(uVar88,CONCAT13(
                                                  uVar84,CONCAT12(uVar105,CONCAT11(uVar104,uVar103))
                                                  )))));
      }
      uStack_8f8 = 0;
      uStack_900 = 0;
      puStack_908 = &uStack_900;
      if ((int)lVar52 == 1) {
        iVar67 = (int)(*puVar37 >> 0x20) * 2;
        uVar20 = NEON_rev64(CONCAT17((char)((uint)iVar67 >> 0x18),
                                     CONCAT16((char)((uint)iVar67 >> 0x10),
                                              CONCAT15((char)((uint)iVar67 >> 8),
                                                       CONCAT14((char)iVar67,(int)*puVar37 * 2)))),4
                           );
        iVar67 = (int)((ulong)uVar20 >> 0x20) +
                 (int)((ulong)*(undefined8 *)(puStack_8d8 + 2) >> 0x20);
        uStack_740 = (undefined **)
                     CONCAT17((char)((uint)iVar67 >> 0x18),
                              CONCAT16((char)((uint)iVar67 >> 0x10),
                                       CONCAT15((char)((uint)iVar67 >> 8),
                                                CONCAT14((char)iVar67,
                                                         (int)uVar20 +
                                                         (int)*(undefined8 *)(puStack_8d8 + 2)))));
        FUN_109a83fd0(&uStack_950,2,&uStack_740,(*puStack_8d8 >> 3 & 0xff) << 4 | 0xb);
      }
      if (-1 < (int)param_8) {
        puVar47 = (undefined8 *)((ulong)&uStack_9b0 | 4);
        uVar53 = (ulong)&uStack_9b0 | 8;
        puVar59 = (undefined8 *)((ulong)&uStack_740 | 4);
        puVar38 = param_8;
        uVar64 = (ulong)param_8 & 0xffffffff;
        do {
          puVar40 = puStack_8d8;
          uStack_9b0 = (uint **)CONCAT44(uStack_9b0._4_4_,0x42ff0000);
          puVar47[1] = 0;
          *puVar47 = 0;
          puVar47[3] = 0;
          puVar47[2] = 0;
          puVar47[5] = 0;
          puVar47[4] = 0;
          *(undefined8 *)((long)puVar47 + 0x34) = 0;
          *(undefined8 *)((long)puVar47 + 0x2c) = 0;
          dStack_960 = 0.0;
          uStack_958 = 0;
          uStack_970 = uVar53;
          pdStack_968 = &dStack_960;
          if ((int)lVar52 == 1) {
            iVar67 = **(int **)(puStack_8d8 + uVar64 * 0x18 + 0x10);
            iVar44 = (*(int **)(puStack_8d8 + uVar64 * 0x18 + 0x10))[1];
            iStack_a08 = iVar67 + *(int *)((long)puVar37 + 4) * 2;
            iStack_a04 = iVar44 + (int)*puVar37 * 2;
            lStack_a00 = CONCAT44(uStack_93c,uStack_940);
            uStack_a10 = uStack_950 & 0xfff | 0x42ff0000;
            iStack_a0c = 2;
            lStack_9e8 = 0;
            lStack_9f0 = 0;
            lStack_9d8 = 0;
            uStack_9e0 = 0;
            lStack_9c0 = 0;
            uStack_9b8 = 0;
            lStack_9f8 = lStack_a00;
            piStack_9d0 = &iStack_a08;
            plStack_9c8 = &lStack_9c0;
            if ((lStack_a00 == 0) && ((long)iStack_a04 * (long)iStack_a08 != 0)) {
              puVar36 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar36 = 1;
              uStack_740 = (undefined **)(puVar36 + 1);
              ppuStack_738 = (uint **)0x1c;
              *(undefined1 *)(puVar36 + 8) = 0;
              *(undefined8 *)(puVar36 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar36 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar36 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar36 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
              goto LAB_109a27020;
            }
            uVar1 = ((uStack_950 & 0xfff) >> 3) + 1 <<
                    (ulong)(0xfa50U >> (ulong)((uStack_950 & 7) << 1) & 3);
            uStack_9b8 = (ulong)uVar1;
            lStack_9c0 = (long)(int)uVar1 * (long)iStack_a04;
            uStack_a10 = uStack_950 & 0xfff | 0x42ff4000;
            lStack_9f0 = lStack_a00 + lStack_9c0 * iStack_a08;
            uStack_a20 = (undefined8 *)CONCAT44(iVar67,iVar44);
            iStack_a28 = (int)*puVar37;
            iStack_a24 = *(int *)((long)puVar37 + 4);
            lStack_9e8 = lStack_9f0;
            FUN_109a852c8(&uStack_740,&uStack_a10,&iStack_a28);
            if (uStack_978 != 0) {
              piVar57 = (int *)(uStack_978 + 0x14);
              do {
                iVar67 = *piVar57;
                cVar81 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
                if (bVar32) {
                  *piVar57 = iVar67 + -1;
                  cVar81 = ExclusiveMonitorsStatus();
                }
              } while (cVar81 != '\0');
              if (iVar67 + -1 == 0) {
                func_0x000109a848d4(&uStack_9b0);
              }
            }
            if (0 < uStack_9b0._4_4_) {
              lVar48 = 0;
              do {
                *(undefined4 *)(uStack_970 + lVar48 * 4) = 0;
                lVar48 = lVar48 + 1;
              } while (lVar48 < uStack_9b0._4_4_);
            }
            uStack_9a8 = ppuStack_738;
            uStack_9b0 = (uint **)uStack_740;
            puStack_998 = puStack_728;
            puStack_9a0 = puStack_730;
            uStack_988 = uStack_718;
            uStack_990 = uStack_720;
            uStack_978 = uStack_708;
            uStack_980 = uStack_710;
            uVar58 = uStack_970;
            pdVar50 = pdStack_968;
            if ((pdStack_968 != &dStack_960) &&
               (uVar58 = uVar53, pdVar50 = &dStack_960, pdStack_968 != (double *)0x0)) {
              _free(pdStack_968[-1]);
            }
            pdStack_968 = pdVar50;
            uStack_970 = uVar58;
            pdVar50 = pdStack_6f8;
            if (uStack_740._4_4_ < 3) {
              *pdStack_968 = *pdStack_6f8;
              pdStack_968[1] = pdVar50[1];
              uStack_740 = (undefined **)CONCAT44(uStack_740._4_4_,0x42ff0000);
              puVar59[1] = 0;
              *puVar59 = 0;
              puVar59[3] = 0;
              puVar59[2] = 0;
              puVar59[5] = 0;
              puVar59[4] = 0;
              *(undefined8 *)((long)puVar59 + 0x34) = 0;
              *(undefined8 *)((long)puVar59 + 0x2c) = 0;
              if (pdVar50 != &dStack_6f0) {
                _free(pdVar50[-1]);
              }
            }
            else {
              uStack_970 = uStack_700;
              pdStack_968 = pdStack_6f8;
            }
            puVar40 = puStack_8d8 + uVar64 * 0x18;
            uVar1 = *puVar40;
            if ((uVar1 & 7) != 0) {
              puVar36 = (undefined4 *)0x14;
              func_0x000107c2ae8c();
              *puVar36 = 1;
              uStack_740 = (undefined **)(puVar36 + 1);
              *uStack_740 = (undefined *)0x3d3d206874706564;
              ppuStack_738 = (uint **)0xe;
              *(undefined1 *)((long)puVar36 + 0x12) = 0;
              *(undefined8 *)((long)puVar36 + 10) = 0x55385f5643203d3d;
              FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594c59,&UNK_10f594b32,0x39);
              goto LAB_109a27020;
            }
            uVar51 = puVar40[2];
            uVar43 = puVar40[3];
            uStack_740 = *(undefined ***)(puVar40 + 2);
            lVar48 = ((ulong)(uVar1 >> 3) & 0x1ff) + 1;
            uVar68 = (uint)lVar48;
            if (uStack_9b0._4_4_ < 3) {
              if (((uint)uStack_9a8 != uVar51 || uStack_9a8._4_4_ != uVar43) ||
                 (((uint)uStack_9b0 & 0xfff) != (uVar68 * 0x10 + 0xffb & 0xfff) ||
                  puStack_9a0 == (uint *)0x0)) goto LAB_109a26120;
            }
            else {
LAB_109a26120:
              FUN_109a83fd0(&uStack_9b0,2,&uStack_740);
            }
            uVar58 = (ulong)(uVar68 * (uVar43 + 2)) + 0xf;
            uVar70 = (uint)uVar58 & 0xfffffff0;
            uVar3 = uVar70 * 2 + 0x40;
            ppuVar49 = &puStack_730;
            if (0x208 < uVar3) {
              ppuVar49 = (uint **)((long)(int)uVar3 << 1);
              if ((int)uVar70 < -0x20) {
                ppuVar49 = (uint **)0xffffffffffffffff;
              }
              uStack_740 = (undefined **)&puStack_730;
              __Znam();
            }
            if (0 < (int)uVar51) {
              uVar70 = uVar68 * uVar43;
              puVar62 = (undefined8 *)((long)ppuVar49 + lVar48 * 2 + 0xf & 0xfffffffffffffff0);
              uVar58 = -(uVar58 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar58 & 0xfffffff0) << 1;
              iVar67 = uVar51 - 2;
              uVar8 = uVar51 - 1;
              if (uVar8 == 0) {
                iVar67 = 0;
              }
              uVar4 = uVar68;
              if ((int)uVar43 < 2) {
                uVar4 = 0;
              }
              if ((int)uVar43 < 3) {
                uVar43 = 2;
              }
              uVar68 = uVar68 * (uVar43 - 2);
              uVar35 = (ulong)(uVar1 >> 3) & 0x1ff;
              lVar48 = uVar35 * 2 + 2;
              lVar60 = uVar58 + uVar35 * -2;
              lVar27 = lVar60 + -2;
              uVar69 = 0;
              do {
                uVar1 = (uint)(uVar8 != 0);
                if (uVar69 != 0) {
                  uVar1 = (int)uVar69 - 1;
                }
                lVar72 = *(long *)(puVar40 + 4);
                lVar71 = **(long **)(puVar40 + 0x12);
                uVar2 = uVar69 + 1;
                iVar44 = (int)uVar2;
                if (uVar8 <= uVar69) {
                  iVar44 = iVar67;
                }
                dVar54 = *pdStack_968;
                if ((int)uVar70 < 8) {
                  uVar55 = 0;
                }
                else {
                  uVar55 = 0;
                  puVar56 = puVar62;
                  do {
                    uVar20 = *(undefined8 *)(lVar72 + (int)uVar1 * lVar71 + uVar55);
                    bVar77 = (byte)((ulong)uVar20 >> 8);
                    bVar80 = (byte)((ulong)uVar20 >> 0x10);
                    bVar85 = (byte)((ulong)uVar20 >> 0x18);
                    bVar89 = (byte)((ulong)uVar20 >> 0x20);
                    bVar93 = (byte)((ulong)uVar20 >> 0x28);
                    bVar97 = (byte)((ulong)uVar20 >> 0x30);
                    bVar102 = (byte)((ulong)uVar20 >> 0x38);
                    uVar21 = *(undefined8 *)(lVar72 + lVar71 * uVar69 + uVar55);
                    uVar112 = *(undefined8 *)(lVar72 + lVar71 * iVar44 + uVar55);
                    bVar114 = (byte)((ulong)uVar112 >> 8);
                    bVar115 = (byte)((ulong)uVar112 >> 0x10);
                    bVar116 = (byte)((ulong)uVar112 >> 0x18);
                    bVar117 = (byte)((ulong)uVar112 >> 0x20);
                    bVar118 = (byte)((ulong)uVar112 >> 0x28);
                    bVar119 = (byte)((ulong)uVar112 >> 0x30);
                    bVar120 = (byte)((ulong)uVar112 >> 0x38);
                    sVar5 = (ushort)bVar114 - (ushort)bVar77;
                    sVar6 = (ushort)bVar115 - (ushort)bVar80;
                    sVar7 = (ushort)bVar116 - (ushort)bVar85;
                    sVar17 = (ushort)bVar118 - (ushort)bVar93;
                    sVar18 = (ushort)bVar119 - (ushort)bVar97;
                    sVar22 = (ushort)bVar120 - (ushort)bVar102;
                    auVar113._0_8_ =
                         CONCAT26(((ushort)bVar116 + (ushort)bVar85) * 3 +
                                  (ushort)(byte)((ulong)uVar21 >> 0x18) * 10,
                                  CONCAT24(((ushort)bVar115 + (ushort)bVar80) * 3 +
                                           (ushort)(byte)((ulong)uVar21 >> 0x10) * 10,
                                           CONCAT22(((ushort)bVar114 + (ushort)bVar77) * 3 +
                                                    (ushort)(byte)((ulong)uVar21 >> 8) * 10,
                                                    ((ushort)(byte)uVar112 + (ushort)(byte)uVar20) *
                                                    3 + (ushort)(byte)uVar21 * 10)));
                    auVar113._8_2_ =
                         ((ushort)bVar117 + (ushort)bVar89) * 3 +
                         (ushort)(byte)((ulong)uVar21 >> 0x20) * 10;
                    auVar113._10_2_ =
                         ((ushort)bVar118 + (ushort)bVar93) * 3 +
                         (ushort)(byte)((ulong)uVar21 >> 0x28) * 10;
                    auVar113._12_2_ =
                         ((ushort)bVar119 + (ushort)bVar97) * 3 +
                         (ushort)(byte)((ulong)uVar21 >> 0x30) * 10;
                    auVar113._14_2_ =
                         ((ushort)bVar120 + (ushort)bVar102) * 3 +
                         (ushort)(byte)((ulong)uVar21 >> 0x38) * 10;
                    puVar56[1] = auVar113._8_8_;
                    *puVar56 = auVar113._0_8_;
                    ((undefined8 *)((long)puVar56 + uVar58))[1] =
                         CONCAT17((char)((ushort)sVar22 >> 8),
                                  CONCAT16((char)sVar22,
                                           CONCAT15((char)((ushort)sVar18 >> 8),
                                                    CONCAT14((char)sVar18,
                                                             CONCAT13((char)((ushort)sVar17 >> 8),
                                                                      CONCAT12((char)sVar17,
                                                                               (ushort)bVar117 -
                                                                               (ushort)bVar89))))));
                    *(undefined8 *)((long)puVar56 + uVar58) =
                         CONCAT17((char)((ushort)sVar7 >> 8),
                                  CONCAT16((char)sVar7,
                                           CONCAT15((char)((ushort)sVar6 >> 8),
                                                    CONCAT14((char)sVar6,
                                                             CONCAT13((char)((ushort)sVar5 >> 8),
                                                                      CONCAT12((char)sVar5,
                                                                               (ushort)(byte)uVar112
                                                                               - (ushort)(byte)
                                                  uVar20))))));
                    uVar55 = uVar55 + 8;
                    puVar56 = puVar56 + 2;
                  } while ((long)uVar55 <= (long)(int)(uVar70 - 8));
                  uVar55 = uVar55 & 0xffffffff;
                }
                if ((int)uVar55 < (int)uVar70) {
                  lVar61 = 0;
                  do {
                    bVar77 = *(byte *)(lVar72 + (int)uVar1 * lVar71 + uVar55 + lVar61);
                    bVar80 = *(byte *)(lVar72 + lVar71 * iVar44 + uVar55 + lVar61);
                    *(ushort *)((long)puVar62 + lVar61 * 2 + uVar55 * 2) =
                         ((ushort)bVar80 + (ushort)bVar77) * 3 +
                         (ushort)*(byte *)(lVar72 + uVar55 + lVar71 * uVar69 + lVar61) * 10;
                    *(ushort *)((long)puVar62 + lVar61 * 2 + uVar55 * 2 + uVar58) =
                         (ushort)bVar80 - (ushort)bVar77;
                    lVar61 = lVar61 + 1;
                  } while (uVar70 - uVar55 != lVar61);
                }
                lVar71 = 0;
                do {
                  *(undefined2 *)((long)puVar62 + lVar71 + uVar35 * -2 + -2) =
                       *(undefined2 *)((long)puVar62 + lVar71 + (ulong)uVar4 * 2);
                  *(undefined2 *)((long)puVar62 + lVar71 + (long)(int)uVar70 * 2) =
                       *(undefined2 *)((long)puVar62 + lVar71 + (ulong)uVar68 * 2);
                  *(undefined2 *)((long)puVar62 + lVar71 + lVar27) =
                       *(undefined2 *)((long)puVar62 + lVar71 + uVar58 + (ulong)uVar4 * 2);
                  *(undefined2 *)((long)puVar62 + lVar71 + uVar58 + (long)(int)uVar70 * 2) =
                       *(undefined2 *)((long)puVar62 + lVar71 + uVar58 + (ulong)uVar68 * 2);
                  lVar71 = lVar71 + 2;
                } while (lVar48 != lVar71);
                if ((int)uVar70 < 8) {
                  uVar55 = 0;
                }
                else {
                  uVar55 = 0;
                  puVar63 = (undefined2 *)((long)puStack_9a0 + (long)dVar54 * uVar69 + 0x10);
                  puVar56 = puVar62;
                  do {
                    uVar21 = ((undefined8 *)((long)puVar56 + lVar48))[1];
                    uVar20 = *(undefined8 *)((long)puVar56 + lVar48);
                    puVar9 = (undefined8 *)((long)puVar56 + (uVar35 * 2 ^ 0xfffffffffffffffe));
                    uVar26 = puVar9[1];
                    uVar112 = *puVar9;
                    psVar65 = (short *)((long)puVar56 + lVar48 + uVar58);
                    psVar10 = (short *)((long)puVar56 + lVar60 + -2);
                    sVar5 = (short)uVar20 - (short)uVar112;
                    sVar6 = (short)((ulong)uVar20 >> 0x10) - (short)((ulong)uVar112 >> 0x10);
                    uVar74 = (undefined1)((ushort)sVar6 >> 8);
                    sVar7 = (short)((ulong)uVar20 >> 0x20) - (short)((ulong)uVar112 >> 0x20);
                    uVar76 = (undefined1)((ushort)sVar7 >> 8);
                    sVar17 = (short)((ulong)uVar20 >> 0x30) - (short)((ulong)uVar112 >> 0x30);
                    uVar79 = (undefined1)((ushort)sVar17 >> 8);
                    sVar18 = (short)uVar21 - (short)uVar26;
                    uVar83 = (undefined1)sVar18;
                    uVar87 = (undefined1)((ushort)sVar18 >> 8);
                    sVar18 = (short)((ulong)uVar21 >> 0x10) - (short)((ulong)uVar26 >> 0x10);
                    uVar91 = (undefined1)sVar18;
                    uVar95 = (undefined1)((ushort)sVar18 >> 8);
                    sVar18 = (short)((ulong)uVar21 >> 0x20) - (short)((ulong)uVar26 >> 0x20);
                    uVar100 = (undefined1)sVar18;
                    uVar103 = (undefined1)((ushort)sVar18 >> 8);
                    sVar18 = (short)((ulong)uVar21 >> 0x30) - (short)((ulong)uVar26 >> 0x30);
                    uVar104 = (undefined1)sVar18;
                    uVar105 = (undefined1)((ushort)sVar18 >> 8);
                    psVar11 = (short *)((long)puVar56 + uVar58);
                    sVar18 = *psVar11 * 10 + (*psVar10 + *psVar65) * 3;
                    sVar22 = psVar11[1] * 10 + (psVar10[1] + psVar65[1]) * 3;
                    uVar84 = (undefined1)((ushort)sVar22 >> 8);
                    sVar23 = psVar11[2] * 10 + (psVar10[2] + psVar65[2]) * 3;
                    uVar88 = (undefined1)((ushort)sVar23 >> 8);
                    sVar24 = psVar11[3] * 10 + (psVar10[3] + psVar65[3]) * 3;
                    uVar92 = (undefined1)((ushort)sVar24 >> 8);
                    sVar25 = psVar11[4] * 10 + (psVar10[4] + psVar65[4]) * 3;
                    uVar96 = (undefined1)sVar25;
                    uVar101 = (undefined1)((ushort)sVar25 >> 8);
                    sVar25 = psVar11[5] * 10 + (psVar10[5] + psVar65[5]) * 3;
                    uVar106 = (undefined1)sVar25;
                    uVar107 = (undefined1)((ushort)sVar25 >> 8);
                    sVar25 = psVar11[6] * 10 + (psVar10[6] + psVar65[6]) * 3;
                    uVar108 = (undefined1)sVar25;
                    uVar109 = (undefined1)((ushort)sVar25 >> 8);
                    sVar25 = psVar11[7] * 10 + (psVar10[7] + psVar65[7]) * 3;
                    uVar110 = (undefined1)sVar25;
                    uVar111 = (undefined1)((ushort)sVar25 >> 8);
                    auVar121[2] = (char)sVar22;
                    auVar121._0_2_ = sVar18;
                    auVar121[3] = uVar84;
                    auVar121[4] = (char)sVar23;
                    auVar121[5] = uVar88;
                    auVar121[6] = (char)sVar24;
                    auVar121[7] = uVar92;
                    auVar121[8] = uVar96;
                    auVar121[9] = uVar101;
                    auVar121[10] = uVar106;
                    auVar121[0xb] = uVar107;
                    auVar121[0xc] = uVar108;
                    auVar121[0xd] = uVar109;
                    auVar121[0xe] = uVar110;
                    auVar121[0xf] = uVar111;
                    auVar19[2] = (char)sVar22;
                    auVar19._0_2_ = sVar18;
                    auVar19[3] = uVar84;
                    auVar19[4] = (char)sVar23;
                    auVar19[5] = uVar88;
                    auVar19[6] = (char)sVar24;
                    auVar19[7] = uVar92;
                    auVar19[8] = uVar96;
                    auVar19[9] = uVar101;
                    auVar19[10] = uVar106;
                    auVar19[0xb] = uVar107;
                    auVar19[0xc] = uVar108;
                    auVar19[0xd] = uVar109;
                    auVar19[0xe] = uVar110;
                    auVar19[0xf] = uVar111;
                    auVar121 = NEON_ext(auVar121,auVar19,8,1);
                    auVar13[2] = (char)sVar6;
                    auVar13._0_2_ = sVar5;
                    auVar13[3] = uVar74;
                    auVar13[4] = (char)sVar7;
                    auVar13[5] = uVar76;
                    auVar13[6] = (char)sVar17;
                    auVar13[7] = uVar79;
                    auVar13[8] = uVar83;
                    auVar13[9] = uVar87;
                    auVar13[10] = uVar91;
                    auVar13[0xb] = uVar95;
                    auVar13[0xc] = uVar100;
                    auVar13[0xd] = uVar103;
                    auVar13[0xe] = uVar104;
                    auVar13[0xf] = uVar105;
                    auVar14[2] = (char)sVar6;
                    auVar14._0_2_ = sVar5;
                    auVar14[3] = uVar74;
                    auVar14[4] = (char)sVar7;
                    auVar14[5] = uVar76;
                    auVar14[6] = (char)sVar17;
                    auVar14[7] = uVar79;
                    auVar14[8] = uVar83;
                    auVar14[9] = uVar87;
                    auVar14[10] = uVar91;
                    auVar14[0xb] = uVar95;
                    auVar14[0xc] = uVar100;
                    auVar14[0xd] = uVar103;
                    auVar14[0xe] = uVar104;
                    auVar14[0xf] = uVar105;
                    auVar113 = NEON_ext(auVar13,auVar14,8,1);
                    puVar63[-8] = sVar5;
                    puVar63[-7] = sVar18;
                    puVar63[-6] = sVar6;
                    puVar63[-5] = sVar22;
                    puVar63[-4] = sVar7;
                    puVar63[-3] = sVar23;
                    puVar63[-2] = sVar17;
                    puVar63[-1] = sVar24;
                    *puVar63 = auVar113._0_2_;
                    puVar63[1] = auVar121._0_2_;
                    puVar63[2] = auVar113._2_2_;
                    puVar63[3] = auVar121._2_2_;
                    puVar63[4] = auVar113._4_2_;
                    puVar63[5] = auVar121._4_2_;
                    puVar63[6] = auVar113._6_2_;
                    puVar63[7] = auVar121._6_2_;
                    uVar55 = uVar55 + 8;
                    puVar56 = puVar56 + 2;
                    puVar63 = puVar63 + 0x10;
                  } while ((long)uVar55 <= (long)(int)(uVar70 - 8));
                  uVar55 = uVar55 & 0xffffffff;
                }
                if ((int)uVar55 < (int)uVar70) {
                  lVar71 = 0;
                  psVar65 = (short *)((long)puStack_9a0 + (long)dVar54 * uVar69 + uVar55 * 4 + 2);
                  do {
                    sVar5 = *(short *)((long)puVar62 +
                                      lVar71 * 2 + (uVar35 + uVar55) * 2 + uVar58 + 2);
                    sVar6 = *(short *)((long)puVar62 + lVar71 * 2 + uVar55 * 2 + lVar27);
                    sVar7 = *(short *)((long)puVar62 + lVar71 * 2 + uVar55 * 2 + uVar58);
                    psVar65[-1] = *(short *)((long)puVar62 + lVar71 * 2 + (uVar35 + uVar55) * 2 + 2)
                                  - *(short *)((long)puVar62 +
                                              lVar71 * 2 + uVar55 * 2 + uVar35 * -2 + -2);
                    *psVar65 = (sVar6 + sVar5) * 3 + sVar7 * 10;
                    lVar71 = lVar71 + 1;
                    psVar65 = psVar65 + 2;
                  } while (uVar70 - uVar55 != lVar71);
                }
                uVar69 = uVar2;
              } while (uVar2 != uVar51);
            }
            puVar38 = (ulong *)((ulong)param_8 & 0xffffffff);
            if ((ppuVar49 != &puStack_730) && (ppuVar49 != (uint **)0x0)) {
              uStack_740 = (undefined **)ppuVar49;
              ppuStack_738 = (uint **)(long)(int)uVar3;
              __ZdaPv();
            }
            iStack_a28 = 0x1010000;
            uStack_a20 = &uStack_9b0;
            uStack_a18 = 0;
            auStack_a40[0] = 0x2010000;
            puStack_a38 = &uStack_a10;
            uStack_a30 = 0;
            puStack_728 = (undefined8 *)0x0;
            puStack_730 = (uint *)0x0;
            ppuStack_738 = (uint **)0x0;
            uStack_740 = (undefined **)0x0;
            FUN_109a4a0a4(&iStack_a28,auStack_a40,*(int *)((long)puVar37 + 4),
                          *(int *)((long)puVar37 + 4),(int)*puVar37,(int)*puVar37,0x10,&uStack_740);
            if (lStack_9d8 != 0) {
              piVar57 = (int *)(lStack_9d8 + 0x14);
              do {
                iVar67 = *piVar57;
                cVar81 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
                if (bVar32) {
                  *piVar57 = iVar67 + -1;
                  cVar81 = ExclusiveMonitorsStatus();
                }
              } while (cVar81 != '\0');
              if (iVar67 + -1 == 0) {
                func_0x000109a848d4(&uStack_a10);
              }
            }
            lStack_9d8 = 0;
            lStack_9f8 = 0;
            lStack_a00 = 0;
            lStack_9e8 = 0;
            lStack_9f0 = 0;
            if (0 < iStack_a0c) {
              lVar48 = 0;
              do {
                piStack_9d0[lVar48] = 0;
                lVar48 = lVar48 + 1;
              } while (lVar48 < iStack_a0c);
            }
            if (plStack_9c8 != &lStack_9c0 && plStack_9c8 != (long *)0x0) {
              _free(plStack_9c8[-1]);
            }
          }
          else {
            puVar41 = puStack_8d8 + uVar64 * 0x30 + 0x18;
            if ((uint *)&uStack_9b0 != puVar41) {
              if (*(long *)(puStack_8d8 + uVar64 * 0x30 + 0x26) != 0) {
                piVar57 = (int *)(*(long *)(puStack_8d8 + uVar64 * 0x30 + 0x26) + 0x14);
                do {
                  cVar81 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
                  if (bVar32) {
                    *piVar57 = *piVar57 + 1;
                    cVar81 = ExclusiveMonitorsStatus();
                  }
                } while (cVar81 != '\0');
                if (uStack_978 != 0) {
                  piVar57 = (int *)(uStack_978 + 0x14);
                  do {
                    iVar67 = *piVar57;
                    cVar81 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
                    if (bVar32) {
                      *piVar57 = iVar67 + -1;
                      cVar81 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar81 != '\0');
                  if (iVar67 + -1 == 0) {
                    func_0x000109a848d4(&uStack_9b0);
                  }
                }
              }
              uStack_978 = 0;
              puStack_998 = (undefined8 *)0x0;
              puStack_9a0 = (uint *)0x0;
              uStack_988 = 0;
              uStack_990 = 0;
              if (uStack_9b0._4_4_ < 1) {
                uStack_9b0 = (uint **)CONCAT44(uStack_9b0._4_4_,*puVar41);
LAB_109a265bc:
                if (2 < (int)puVar40[uVar64 * 0x30 + 0x19]) goto LAB_109a265f0;
                uStack_9b0 = (uint **)CONCAT44(puVar40[uVar64 * 0x30 + 0x19],(uint)uStack_9b0);
                uStack_9a8 = *(uint ***)(puVar40 + uVar64 * 0x30 + 0x1a);
                pdVar50 = *(double **)(puVar40 + uVar64 * 0x30 + 0x2a);
                *pdStack_968 = *pdVar50;
                pdStack_968[1] = pdVar50[1];
              }
              else {
                lVar48 = 0;
                do {
                  *(undefined4 *)(uStack_970 + lVar48 * 4) = 0;
                  lVar48 = lVar48 + 1;
                } while (lVar48 < uStack_9b0._4_4_);
                uStack_9b0 = (uint **)CONCAT44(uStack_9b0._4_4_,*puVar41);
                if (uStack_9b0._4_4_ < 3) goto LAB_109a265bc;
LAB_109a265f0:
                func_0x000109a84868(&uStack_9b0,puVar41);
              }
              puStack_998 = *(undefined8 **)(puVar40 + uVar64 * 0x30 + 0x1e);
              puStack_9a0 = *(uint **)(puVar40 + uVar64 * 0x30 + 0x1c);
              uStack_988 = *(ulong *)(puVar40 + uVar64 * 0x30 + 0x22);
              uStack_990 = *(ulong *)(puVar40 + uVar64 * 0x30 + 0x20);
              uStack_978 = *(ulong *)(puVar40 + uVar64 * 0x30 + 0x26);
              uStack_980 = *(ulong *)(puVar40 + uVar64 * 0x30 + 0x24);
            }
          }
          if ((*(int **)(puStack_8d8 + uVar64 * lVar52 * 0x18 + 0x10))[1] !=
              (*(int **)(puStack_8f0 + uVar64 * lStack_ac8 * 0x18 + 0x10))[1] ||
              **(int **)(puStack_8d8 + uVar64 * lVar52 * 0x18 + 0x10) !=
              **(int **)(puStack_8f0 + uVar64 * lStack_ac8 * 0x18 + 0x10)) {
            puVar36 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *puVar36 = 1;
            uStack_740 = (undefined **)(puVar36 + 1);
            ppuStack_738 = (uint **)0x44;
            *(undefined8 *)(puVar36 + 3) = 0x202a206c6576656c;
            *(undefined8 *)(puVar36 + 1) = 0x5b72795076657270;
            *(undefined8 *)(puVar36 + 7) = 0x2928657a69732e5d;
            *(undefined8 *)(puVar36 + 5) = 0x31706574536c766c;
            *(undefined8 *)(puVar36 + 0xb) = 0x6576656c5b727950;
            *(undefined8 *)(puVar36 + 9) = 0x7478656e203d3d20;
            *(undefined1 *)(puVar36 + 0x12) = 0;
            puVar36[0x11] = 0x2928657a;
            *(undefined8 *)(puVar36 + 0xf) = 0x69732e5d32706574;
            *(undefined8 *)(puVar36 + 0xd) = 0x536c766c202a206c;
            FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x4e0);
            goto LAB_109a27020;
          }
          if (((puStack_8f0[uVar64 * lStack_ac8 * 0x18] ^ puStack_8d8[uVar64 * lVar52 * 0x18]) &
              0xfff) != 0) {
            puVar36 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *puVar36 = 1;
            uStack_740 = (undefined **)(puVar36 + 1);
            ppuStack_738 = (uint **)0x44;
            *(undefined8 *)(puVar36 + 3) = 0x202a206c6576656c;
            *(undefined8 *)(puVar36 + 1) = 0x5b72795076657270;
            *(undefined8 *)(puVar36 + 7) = 0x2928657079742e5d;
            *(undefined8 *)(puVar36 + 5) = 0x31706574536c766c;
            *(undefined8 *)(puVar36 + 0xb) = 0x6576656c5b727950;
            *(undefined8 *)(puVar36 + 9) = 0x7478656e203d3d20;
            *(undefined1 *)(puVar36 + 0x12) = 0;
            puVar36[0x11] = 0x29286570;
            *(undefined8 *)(puVar36 + 0xf) = 0x79742e5d32706574;
            *(undefined8 *)(puVar36 + 0xd) = 0x536c766c202a206c;
            FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x4e1);
            goto LAB_109a27020;
          }
          uStack_a10 = 0;
          uStack_740 = &PTR_FUN_110b21520;
          puStack_728 = &uStack_9b0;
          uStack_718 = uVar45;
          uStack_710 = uVar28;
          uStack_708 = uStack_ae8;
          uStack_700 = *puVar37;
          dStack_6e8 = (double)CONCAT44((int)puVar38,(int)uVar64);
          uStack_6e0 = (uint)puStack_270;
          iStack_a0c = iVar33;
          ppuStack_738 = (uint **)(puStack_8d8 + uVar64 * lVar52 * 0x18);
          puStack_730 = puStack_8f0 + uVar64 * lStack_ac8 * 0x18;
          uStack_720 = uVar46;
          pdStack_6f8 = (double *)CONCAT44(uVar66,uStack_280);
          dStack_6f0 = dVar122 * dVar122;
          fStack_6dc = (float)(double)CONCAT17(uVar99,CONCAT16(uVar94,CONCAT15(uVar90,CONCAT14(
                                                  uVar86,CONCAT13(uVar82,CONCAT12(uVar78,CONCAT11(
                                                  uVar75,uVar73)))))));
          func_0x000109aa87cc(&uStack_a10,&uStack_740);
          if (uStack_978 != 0) {
            piVar57 = (int *)(uStack_978 + 0x14);
            do {
              iVar67 = *piVar57;
              cVar81 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
              if (bVar32) {
                *piVar57 = iVar67 + -1;
                cVar81 = ExclusiveMonitorsStatus();
              }
            } while (cVar81 != '\0');
            if (iVar67 + -1 == 0) {
              func_0x000109a848d4(&uStack_9b0);
            }
          }
          uStack_978 = 0;
          puStack_998 = (undefined8 *)0x0;
          puStack_9a0 = (uint *)0x0;
          uStack_988 = 0;
          uStack_990 = 0;
          if (0 < uStack_9b0._4_4_) {
            lVar48 = 0;
            do {
              *(undefined4 *)(uStack_970 + lVar48 * 4) = 0;
              lVar48 = lVar48 + 1;
            } while (lVar48 < uStack_9b0._4_4_);
          }
          if (pdStack_968 != &dStack_960 && pdStack_968 != (double *)0x0) {
            _free(pdStack_968[-1]);
          }
          bVar32 = 0 < (long)uVar64;
          uVar64 = uVar64 - 1;
        } while (bVar32);
      }
      if (lStack_918 != 0) {
        piVar57 = (int *)(lStack_918 + 0x14);
        do {
          iVar33 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar33 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&uStack_950);
        }
      }
      lStack_918 = 0;
      uStack_938 = 0;
      uStack_934 = 0;
      uStack_940 = 0;
      uStack_93c = 0;
      uStack_928 = 0;
      uStack_924 = 0;
      uStack_930 = 0;
      uStack_92c = 0;
      if (0 < iStack_94c) {
        lVar52 = 0;
        do {
          puStack_910[lVar52] = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < iStack_94c);
      }
      if (puStack_908 != &uStack_900 && puStack_908 != (undefined8 *)0x0) {
        _free(puStack_908[-1]);
      }
      uStack_740 = (undefined **)&puStack_8f0;
      FUN_1093702c4(&uStack_740);
      uStack_740 = (undefined **)&puStack_8d8;
      FUN_1093702c4(&uStack_740);
      if (uStack_888 != 0) {
        piVar57 = (int *)(uStack_888 + 0x14);
        do {
          iVar33 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar33 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&uStack_8c0);
        }
      }
      uStack_888 = 0;
      uStack_8a8 = 0;
      uStack_8a4 = 0;
      uStack_8b0 = 0;
      uStack_8ac = 0;
      uStack_898 = 0;
      uStack_894 = 0;
      uStack_8a0 = 0;
      uStack_89c = 0;
      if (0 < iStack_8bc) {
        lVar52 = 0;
        do {
          *(undefined4 *)(uStack_880 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < iStack_8bc);
      }
      if (pdStack_878 != &dStack_870 && pdStack_878 != (double *)0x0) {
        _free(pdStack_878[-1]);
      }
      if (uStack_828 != 0) {
        piVar57 = (int *)(uStack_828 + 0x14);
        do {
          iVar33 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar33 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&uStack_860);
        }
      }
      uStack_828 = 0;
      uStack_848 = 0;
      uStack_850 = 0;
      uStack_838 = 0;
      uStack_840 = 0;
      if (0 < uStack_860._4_4_) {
        lVar52 = 0;
        do {
          *(undefined4 *)(uStack_820 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < uStack_860._4_4_);
      }
      if (puStack_818 != &uStack_810 && puStack_818 != (undefined8 *)0x0) {
        _free(puStack_818[-1]);
      }
      if (uStack_7c8 != 0) {
        piVar57 = (int *)(uStack_7c8 + 0x14);
        do {
          iVar33 = *piVar57;
          cVar81 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar57,0x10);
          if (bVar32) {
            *piVar57 = iVar33 + -1;
            cVar81 = ExclusiveMonitorsStatus();
          }
        } while (cVar81 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&uStack_800);
        }
      }
      uStack_7c8 = 0;
      uStack_7e8 = 0;
      uStack_7f0 = 0;
      uStack_7d8 = 0;
      uStack_7e0 = 0;
      if (0 < uStack_800._4_4_) {
        lVar52 = 0;
        do {
          *(undefined4 *)(uStack_7c0 + lVar52 * 4) = 0;
          lVar52 = lVar52 + 1;
        } while (lVar52 < uStack_800._4_4_);
      }
      if (puStack_7b8 != &uStack_7b0 && puStack_7b8 != (undefined8 *)0x0) {
        _free(puStack_7b8[-1]);
      }
      goto LAB_109a26984;
    }
    FUN_109a8c15c(puVar34,&puStack_8d8);
    iVar67 = (int)((ulong)(lStack_8d0 - (long)puStack_8d8) >> 5) * -0x55555555;
    if (iVar67 < 1) {
      puVar36 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar36 = 1;
      uStack_740 = (undefined **)(puVar36 + 1);
      *uStack_740 = (undefined *)0x2031736c6576656c;
      ppuStack_738 = (uint **)0xc;
      *(undefined1 *)(puVar36 + 4) = 0;
      puVar36[3] = 0x30203d3e;
      FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x489);
      goto LAB_109a27020;
    }
    uVar51 = iVar67 - 1;
    if ((uVar51 & 0x80000001) != 1) {
      lVar52 = 1;
      if (uVar51 != 0) goto LAB_109a25a98;
LAB_109a25b18:
      if (uVar66 <= uVar51) {
        uVar51 = uVar66;
      }
      param_8 = (ulong *)(ulong)uVar51;
      goto LAB_109a25b20;
    }
    if (((*puStack_8d8 >> 2 & 0x3fe | 1) == (puStack_8d8[0x18] >> 3 & 0x1ff)) &&
       ((puStack_8d8[0x18] & 7) == 3)) {
      uVar51 = uVar51 >> 1;
      lVar52 = 2;
      if (uVar51 == 0) goto LAB_109a25b18;
    }
    else {
      lVar52 = 1;
    }
LAB_109a25a98:
    uStack_950 = 0;
    iStack_94c = 0;
    uStack_9b0 = (uint **)0x0;
    FUN_109a86b88(puStack_8d8 + lVar52 * 0x18,&uStack_950,&uStack_9b0);
    if ((int)*puVar37 <= (int)(uint)uStack_9b0) {
      if (((*(int *)((long)puVar37 + 4) <= uStack_9b0._4_4_) &&
          ((int)((int)*puVar37 + (uint)uStack_9b0 + puStack_8d8[lVar52 * 0x18 + 3]) <=
           (int)uStack_950)) &&
         ((int)(*(int *)((long)puVar37 + 4) + uStack_9b0._4_4_ + puStack_8d8[lVar52 * 0x18 + 2]) <=
          iStack_94c)) goto LAB_109a25b18;
    }
  }
  puVar36 = (undefined4 *)0xc0;
  func_0x000107c2ae8c();
  *puVar36 = 1;
  uStack_740 = (undefined **)(puVar36 + 1);
  ppuStack_738 = (uint **)0xbb;
  *(undefined8 *)(puVar36 + 0x23) = 0x706574536c766c5b;
  *(undefined8 *)(puVar36 + 0x21) = 0x7279507665727020;
  *(undefined8 *)(puVar36 + 0x27) = 0x7a69536e6977202b;
  *(undefined8 *)(puVar36 + 0x25) = 0x2073776f722e5d31;
  *(undefined8 *)(puVar36 + 0x2b) = 0x6c6c7566203d3c20;
  *(undefined8 *)(puVar36 + 0x29) = 0x7468676965682e65;
  *(undefined8 *)((long)puVar36 + 0xb7) = 0x7468676965682e65;
  *(undefined8 *)((long)puVar36 + 0xaf) = 0x7a69536c6c756620;
  *(undefined8 *)(puVar36 + 0x13) = 0x632e5d3170657453;
  *(undefined8 *)(puVar36 + 0x11) = 0x6c766c5b72795076;
  *(undefined8 *)(puVar36 + 0x17) = 0x69772e657a69536e;
  *(undefined8 *)(puVar36 + 0x15) = 0x6977202b20736c6f;
  *(undefined8 *)(puVar36 + 0x1b) = 0x2e657a69536c6c75;
  *(undefined8 *)(puVar36 + 0x19) = 0x66203d3c20687464;
  *(undefined8 *)(puVar36 + 0x1f) = 0x2b20792e73666f20;
  *(undefined8 *)(puVar36 + 0x1d) = 0x2626206874646977;
  *(undefined8 *)(puVar36 + 3) = 0x657a69536e697720;
  *(undefined8 *)(puVar36 + 1) = 0x3d3e20782e73666f;
  *(undefined8 *)(puVar36 + 7) = 0x20792e73666f2026;
  *(undefined8 *)(puVar36 + 5) = 0x262068746469772e;
  *(undefined8 *)(puVar36 + 0xb) = 0x68676965682e657a;
  *(undefined8 *)(puVar36 + 9) = 0x69536e6977203d3e;
  *(undefined1 *)((long)puVar36 + 0xbf) = 0;
  *(undefined8 *)(puVar36 + 0xf) = 0x657270202b20782e;
  *(undefined8 *)(puVar36 + 0xd) = 0x73666f2026262074;
  FUN_109ac3188(0xffffff29,&uStack_740,&UNK_10f594bb4,&UNK_10f594b32,0x499);
LAB_109a27020:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x109a27024);
  (*pcVar29)();
}



/* Entry: 109a25464; end: 109a2734b;  */

void FUN_109a25464(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,ulong *param_7,uint *param_8,ulong param_9,double param_10,
                  uint param_11)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *puVar16;
  short *psVar17;
  short *psVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  short sVar21;
  short sVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined8 uVar30;
  long lVar31;
  uint *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  code *pcVar36;
  bool bVar37;
  bool bVar38;
  int iVar39;
  ulong uVar40;
  undefined4 *puVar41;
  ulong *puVar42;
  uint uVar43;
  long lVar44;
  undefined8 *puVar45;
  long lVar46;
  uint **ppuVar47;
  double *pdVar48;
  ulong uVar49;
  double dVar50;
  ulong uVar51;
  undefined8 *puVar52;
  ulong uVar53;
  undefined8 *puVar54;
  long lVar55;
  long lVar56;
  undefined8 *puVar57;
  undefined2 *puVar58;
  uint uVar59;
  ulong uVar60;
  short *psVar61;
  uint *puVar62;
  uint uVar63;
  ulong uVar64;
  uint uVar65;
  long lVar66;
  long lVar67;
  undefined1 in_b0;
  undefined1 uVar68;
  undefined1 in_register_00005001;
  undefined1 uVar69;
  byte bVar70;
  undefined1 in_register_00005002;
  undefined1 uVar71;
  byte bVar72;
  undefined1 in_register_00005003;
  undefined1 uVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 in_register_00005004;
  undefined1 uVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 in_register_00005005;
  undefined1 uVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 in_register_00005006;
  undefined1 uVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 in_register_00005007;
  undefined1 uVar85;
  undefined1 uVar86;
  byte bVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined8 uVar97;
  byte bVar105;
  undefined1 auVar98 [16];
  undefined1 auVar106 [16];
  double dVar107;
  ulong uStack_868;
  long lStack_848;
  undefined4 auStack_7c0 [2];
  uint *puStack_7b8;
  undefined8 uStack_7b0;
  int iStack_7a8;
  int iStack_7a4;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  uint uStack_790;
  int iStack_78c;
  int iStack_788;
  int iStack_784;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  undefined8 uStack_760;
  long lStack_758;
  int *piStack_750;
  long *plStack_748;
  long lStack_740;
  ulong uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  uint *puStack_720;
  undefined8 *puStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  double *pdStack_6e8;
  double adStack_6e0 [2];
  uint uStack_6d0;
  int iStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  long lStack_698;
  undefined4 *puStack_690;
  undefined8 *puStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  uint *puStack_670;
  long lStack_668;
  undefined8 uStack_660;
  uint *puStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined1 uStack_640;
  byte bStack_63f;
  undefined2 uStack_63e;
  int iStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  ulong uStack_608;
  ulong uStack_600;
  double *pdStack_5f8;
  double adStack_5f0 [2];
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  uint **ppuStack_4b8;
  uint *puStack_4b0;
  undefined8 *puStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  double *pdStack_478;
  double dStack_470;
  double dStack_468;
  uint uStack_460;
  float fStack_45c;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar42 = *(ulong **)(param_3 + 2);
    puStack_4e0 = (undefined8 *)((ulong)&uStack_520 | 8);
    uStack_518 = puVar42[1];
    uStack_520 = *puVar42;
    uStack_508 = puVar42[3];
    uStack_510 = puVar42[2];
    uStack_4f8 = puVar42[5];
    uStack_500 = puVar42[4];
    uStack_4e8 = puVar42[7];
    uStack_4f0 = puVar42[6];
    puStack_4d8 = &uStack_4d0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (puVar42[7] != 0) {
      piVar2 = (int *)(puVar42[7] + 0x14);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = *piVar2 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    if (*(int *)((long)puVar42 + 4) < 3) {
      uStack_4d0 = *(undefined8 *)puVar42[9];
      uStack_4c8 = ((undefined8 *)puVar42[9])[1];
    }
    else {
      uStack_520 = uStack_520 & 0xffffffff;
      func_0x000109a84868(&uStack_520);
    }
  }
  else {
    FUN_109a8a180(&uStack_520,param_3,0xffffffff);
  }
  uVar43 = (uint)param_8;
  if ((((int)uVar43 < 0) || ((int)*param_7 < 3)) || (*(int *)((long)param_7 + 4) < 3)) {
    puVar41 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar41 = 1;
    uStack_4c0 = (undefined **)(puVar41 + 1);
    ppuStack_4b8 = (uint **)0x38;
    *(undefined8 *)(puVar41 + 3) = 0x26262030203d3e20;
    *(undefined8 *)(puVar41 + 1) = 0x6c6576654c78616d;
    *(undefined1 *)(puVar41 + 0xf) = 0;
    *(undefined8 *)(puVar41 + 7) = 0x3e2068746469772e;
    *(undefined8 *)(puVar41 + 5) = 0x657a69536e697720;
    *(undefined8 *)(puVar41 + 0xb) = 0x65682e657a69536e;
    *(undefined8 *)(puVar41 + 9) = 0x6977202626203220;
    *(undefined8 *)(puVar41 + 0xd) = 0x32203e2074686769;
    FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x457);
    goto LAB_109a27020;
  }
  puVar45 = &uStack_520;
  FUN_109a89cd4(puVar45,2,5,1);
  iVar39 = (int)puVar45;
  if (iVar39 < 0) {
    puVar41 = (undefined4 *)0x40;
    func_0x000107c2ae8c();
    *puVar41 = 1;
    uStack_4c0 = (undefined **)(puVar41 + 1);
    ppuStack_4b8 = (uint **)0x38;
    *(undefined8 *)(puVar41 + 3) = 0x5076657270203d20;
    *(undefined8 *)(puVar41 + 1) = 0x73746e696f706e28;
    *(undefined1 *)(puVar41 + 0xf) = 0;
    *(undefined8 *)(puVar41 + 7) = 0x6f746365566b6365;
    *(undefined8 *)(puVar41 + 5) = 0x68632e74614d7374;
    *(undefined8 *)(puVar41 + 0xb) = 0x757274202c463233;
    *(undefined8 *)(puVar41 + 9) = 0x5f5643202c322872;
    *(undefined8 *)(puVar41 + 0xd) = 0x30203d3e20292965;
    FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x45a);
    goto LAB_109a27020;
  }
  if (iVar39 == 0) {
    FUN_109a8e944(param_4);
    FUN_109a8e944(param_5);
    FUN_109a8e944(param_6);
LAB_109a26984:
    if (uStack_4e8 != 0) {
      piVar2 = (int *)(uStack_4e8 + 0x14);
      do {
        iVar39 = *piVar2;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = iVar39 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar39 + -1 == 0) {
        func_0x000109a848d4(&uStack_520);
      }
    }
    uStack_4e8 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    if (0 < uStack_520._4_4_) {
      lVar44 = 0;
      do {
        *(undefined4 *)((long)puStack_4e0 + lVar44 * 4) = 0;
        lVar44 = lVar44 + 1;
      } while (lVar44 < uStack_520._4_4_);
    }
    if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
      _free(puStack_4d8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((param_11 >> 2 & 1) == 0) {
      uStack_4c0 = (undefined **)NEON_rev64(*puStack_4e0,4);
      FUN_109a8ee3c(param_4,&uStack_4c0,(uint)uStack_520 & 0xfff,0xffffffff,1,0);
    }
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar42 = *(ulong **)(param_4 + 2);
      uStack_540 = (ulong)&uStack_580 | 8;
      uStack_578 = puVar42[1];
      uStack_580 = *puVar42;
      uStack_568 = puVar42[3];
      uStack_570 = puVar42[2];
      uStack_558 = puVar42[5];
      uStack_560 = puVar42[4];
      uStack_548 = puVar42[7];
      uStack_550 = puVar42[6];
      puStack_538 = &uStack_530;
      uStack_528 = 0;
      uStack_530 = 0;
      if (puVar42[7] != 0) {
        piVar2 = (int *)(puVar42[7] + 0x14);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = *piVar2 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      if (*(int *)((long)puVar42 + 4) < 3) {
        uStack_530 = *(undefined8 *)puVar42[9];
        uStack_528 = ((undefined8 *)puVar42[9])[1];
      }
      else {
        uStack_580 = uStack_580 & 0xffffffff;
        func_0x000109a84868(&uStack_580);
      }
    }
    else {
      FUN_109a8a180(&uStack_580,param_4,0xffffffff);
    }
    puVar54 = &uStack_580;
    FUN_109a89cd4(puVar54,2,5,1);
    uVar35 = uStack_510;
    uVar34 = uStack_570;
    if ((int)puVar54 != iVar39) {
      puVar41 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar41 = 1;
      uStack_4c0 = (undefined **)(puVar41 + 1);
      ppuStack_4b8 = (uint **)0x32;
      *(undefined8 *)(puVar41 + 3) = 0x6b636568632e7461;
      *(undefined8 *)(puVar41 + 1) = 0x4d7374507478656e;
      *(undefined2 *)(puVar41 + 0xd) = 0x7374;
      *(undefined1 *)((long)puVar41 + 0x36) = 0;
      *(undefined8 *)(puVar41 + 7) = 0x4632335f5643202c;
      *(undefined8 *)(puVar41 + 5) = 0x3228726f74636556;
      *(undefined8 *)(puVar41 + 0xb) = 0x6e696f706e203d3d;
      *(undefined8 *)(puVar41 + 9) = 0x202965757274202c;
      FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x468);
      goto LAB_109a27020;
    }
    FUN_109a8f64c(param_5,puVar45,1,0,0xffffffff,1,0);
    if ((*param_5 & 0x1f0000) == 0x10000) {
      puVar42 = *(ulong **)(param_5 + 2);
      uStack_5a0 = (ulong)&uStack_5e0 | 8;
      uStack_5d8 = puVar42[1];
      uStack_5e0 = *puVar42;
      uStack_5c8 = puVar42[3];
      uStack_5d0 = puVar42[2];
      uStack_5b8 = puVar42[5];
      uStack_5c0 = puVar42[4];
      uStack_5a8 = puVar42[7];
      uStack_5b0 = puVar42[6];
      puStack_598 = &uStack_590;
      uStack_588 = 0;
      uStack_590 = 0;
      if (puVar42[7] != 0) {
        piVar2 = (int *)(puVar42[7] + 0x14);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = *piVar2 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      if (*(int *)((long)puVar42 + 4) < 3) {
        uStack_590 = *(undefined8 *)puVar42[9];
        uStack_588 = ((undefined8 *)puVar42[9])[1];
      }
      else {
        uStack_5e0 = uStack_5e0 & 0xffffffff;
        func_0x000109a84868(&uStack_5e0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5e0,param_5,0xffffffff);
    }
    uVar33 = uStack_5d0;
    uStack_640 = 0;
    bStack_63f = 0;
    uStack_63e = 0x42ff;
    uVar60 = (ulong)&uStack_640 | 8;
    uStack_634 = 0;
    uStack_630 = 0;
    iStack_63c = 0;
    uStack_638 = 0;
    uStack_624 = 0;
    uStack_620 = 0;
    uStack_62c = 0;
    uStack_628 = 0;
    uStack_614 = 0;
    uStack_61c = 0;
    uStack_618 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_60c = 0;
    adStack_5f0[1] = 0.0;
    adStack_5f0[0] = 0.0;
    uStack_600 = uVar60;
    pdStack_5f8 = adStack_5f0;
    if ((uStack_5e0._1_1_ >> 6 & 1) == 0) {
      puVar41 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar41 = 1;
      uStack_4c0 = (undefined **)(puVar41 + 1);
      ppuStack_4b8 = (uint **)0x18;
      *(undefined1 *)(puVar41 + 7) = 0;
      *(undefined8 *)(puVar41 + 3) = 0x746e6f4373692e74;
      *(undefined8 *)(puVar41 + 1) = 0x614d737574617473;
      *(undefined8 *)(puVar41 + 5) = 0x292873756f756e69;
      FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x46f);
      goto LAB_109a27020;
    }
    _memset(uStack_5d0,1,(ulong)puVar45 & 0xffffffff);
    if ((*param_6 & 0x1f0000) == 0) {
      uStack_868 = 0;
    }
    else {
      FUN_109a8f64c(param_6,(ulong)puVar45 & 0xffffffff,1,5,0xffffffff,1,0);
      if ((*param_6 & 0x1f0000) == 0x10000) {
        puVar42 = *(ulong **)(param_6 + 2);
        uStack_480 = (ulong)&uStack_4c0 | 8;
        ppuStack_4b8 = (uint **)puVar42[1];
        uStack_4c0 = (undefined **)*puVar42;
        puStack_4a8 = (undefined8 *)puVar42[3];
        puStack_4b0 = (uint *)puVar42[2];
        uStack_498 = puVar42[5];
        uStack_4a0 = puVar42[4];
        uStack_488 = puVar42[7];
        uStack_490 = puVar42[6];
        pdStack_478 = &dStack_470;
        dStack_468 = 0.0;
        dStack_470 = 0.0;
        if (puVar42[7] != 0) {
          piVar2 = (int *)(puVar42[7] + 0x14);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = *piVar2 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        if (*(int *)((long)puVar42 + 4) < 3) {
          dStack_470 = *(double *)puVar42[9];
          dStack_468 = ((double *)puVar42[9])[1];
        }
        else {
          uStack_4c0 = (undefined **)((ulong)uStack_4c0 & 0xffffffff);
          func_0x000109a84868(&uStack_4c0);
        }
      }
      else {
        FUN_109a8a180(&uStack_4c0,param_6,0xffffffff);
      }
      if (uStack_608 != 0) {
        piVar2 = (int *)(uStack_608 + 0x14);
        do {
          iVar6 = *piVar2;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar6 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_640);
        }
      }
      if (0 < iStack_63c) {
        lVar44 = 0;
        do {
          *(undefined4 *)(uStack_600 + lVar44 * 4) = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < iStack_63c);
      }
      uStack_638 = SUB84(ppuStack_4b8,0);
      uStack_634 = (undefined4)((ulong)ppuStack_4b8 >> 0x20);
      uStack_640 = SUB81(uStack_4c0,0);
      bStack_63f = (byte)((ulong)uStack_4c0 >> 8);
      uStack_63e = (undefined2)((ulong)uStack_4c0 >> 0x10);
      uStack_628 = SUB84(puStack_4a8,0);
      uStack_624 = (undefined4)((ulong)puStack_4a8 >> 0x20);
      uStack_630 = SUB84(puStack_4b0,0);
      uStack_62c = (undefined4)((ulong)puStack_4b0 >> 0x20);
      uStack_618 = (undefined4)uStack_498;
      uStack_614 = (undefined4)(uStack_498 >> 0x20);
      uStack_620 = (undefined4)uStack_4a0;
      uStack_61c = (undefined4)(uStack_4a0 >> 0x20);
      uStack_608 = uStack_488;
      uStack_610 = (undefined4)uStack_490;
      uStack_60c = (undefined4)(uStack_490 >> 0x20);
      iStack_63c = uStack_4c0._4_4_;
      uVar49 = uStack_600;
      pdVar48 = pdStack_5f8;
      if ((pdStack_5f8 != adStack_5f0) &&
         (uVar49 = uVar60, pdVar48 = adStack_5f0, pdStack_5f8 != (double *)0x0)) {
        _free(pdStack_5f8[-1]);
      }
      pdStack_5f8 = pdVar48;
      uStack_600 = uVar49;
      if (uStack_4c0._4_4_ < 3) {
        puVar45 = (undefined8 *)((ulong)&uStack_4c0 | 4);
        *pdStack_5f8 = *pdStack_478;
        pdStack_5f8[1] = pdStack_478[1];
        uStack_4c0 = (undefined **)CONCAT44(uStack_4c0._4_4_,0x42ff0000);
        puVar45[1] = 0;
        *puVar45 = 0;
        puVar45[3] = 0;
        puVar45[2] = 0;
        puVar45[5] = 0;
        puVar45[4] = 0;
        *(undefined8 *)((long)puVar45 + 0x34) = 0;
        *(undefined8 *)((long)puVar45 + 0x2c) = 0;
        if (pdStack_478 != &dStack_470) {
          _free(pdStack_478[-1]);
        }
      }
      else {
        pdStack_5f8 = pdStack_478;
        uStack_600 = uStack_480;
      }
      if ((bStack_63f >> 6 & 1) == 0) {
        puVar41 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar41 = 1;
        uStack_4c0 = (undefined **)(puVar41 + 1);
        ppuStack_4b8 = (uint **)0x15;
        *(undefined1 *)((long)puVar41 + 0x19) = 0;
        *(undefined8 *)(puVar41 + 3) = 0x756e69746e6f4373;
        *(undefined8 *)(puVar41 + 1) = 0x692e74614d727265;
        *(undefined8 *)((long)puVar41 + 0x11) = 0x292873756f756e69;
        FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x47a);
        goto LAB_109a27020;
      }
      uStack_868 = CONCAT44(uStack_62c,uStack_630);
    }
    lStack_650 = 0;
    puStack_658 = (uint *)0x0;
    uStack_648 = 0;
    lStack_668 = 0;
    puStack_670 = (uint *)0x0;
    uStack_660 = 0;
    uVar9 = *param_1;
    if ((uVar9 & 0x1f0000) != 0x50000) {
      lVar44 = 1;
LAB_109a25b20:
      uVar43 = *param_2;
      if ((uVar43 & 0x1f0000) == 0x50000) {
        FUN_109a8c15c(param_2,&puStack_670);
        iVar6 = (int)((ulong)(lStack_668 - (long)puStack_670) >> 5) * -0x55555555;
        if (iVar6 < 1) {
          puVar41 = (undefined4 *)0x14;
          func_0x000107c2ae8c();
          *puVar41 = 1;
          uStack_4c0 = (undefined **)(puVar41 + 1);
          *uStack_4c0 = (undefined *)0x2032736c6576656c;
          ppuStack_4b8 = (uint **)0xc;
          *(undefined1 *)(puVar41 + 4) = 0;
          puVar41[3] = 0x30203d3e;
          FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x4a5);
          goto LAB_109a27020;
        }
        uVar59 = iVar6 - 1;
        if ((uVar59 & 0x80000001) == 1) {
          if (((*puStack_670 >> 2 & 0x3fe | 1) == (puStack_670[0x18] >> 3 & 0x1ff)) &&
             ((puStack_670[0x18] & 7) == 3)) {
            uVar59 = uVar59 >> 1;
            lStack_848 = 2;
            if (uVar59 == 0) goto LAB_109a25c58;
          }
          else {
            lStack_848 = 1;
          }
LAB_109a25bd4:
          uStack_6d0 = 0;
          iStack_6cc = 0;
          uStack_730 = (uint **)0x0;
          FUN_109a86b88(puStack_670 + lStack_848 * 0x18,&uStack_6d0,&uStack_730);
          if ((int)*param_7 <= (int)(uint)uStack_730) {
            if (((*(int *)((long)param_7 + 4) <= uStack_730._4_4_) &&
                ((int)((int)*param_7 + (uint)uStack_730 + puStack_670[lStack_848 * 0x18 + 3]) <=
                 (int)uStack_6d0)) &&
               ((int)(*(int *)((long)param_7 + 4) + uStack_730._4_4_ +
                     puStack_670[lStack_848 * 0x18 + 2]) <= iStack_6cc)) goto LAB_109a25c58;
          }
          puVar41 = (undefined4 *)0xc0;
          func_0x000107c2ae8c();
          *puVar41 = 1;
          uStack_4c0 = (undefined **)(puVar41 + 1);
          ppuStack_4b8 = (uint **)0xbb;
          *(undefined8 *)(puVar41 + 0x23) = 0x706574536c766c5b;
          *(undefined8 *)(puVar41 + 0x21) = 0x7279507478656e20;
          *(undefined8 *)(puVar41 + 0x27) = 0x7a69536e6977202b;
          *(undefined8 *)(puVar41 + 0x25) = 0x2073776f722e5d32;
          *(undefined8 *)(puVar41 + 0x2b) = 0x6c6c7566203d3c20;
          *(undefined8 *)(puVar41 + 0x29) = 0x7468676965682e65;
          *(undefined8 *)((long)puVar41 + 0xb7) = 0x7468676965682e65;
          *(undefined8 *)((long)puVar41 + 0xaf) = 0x7a69536c6c756620;
          *(undefined8 *)(puVar41 + 0x13) = 0x632e5d3270657453;
          *(undefined8 *)(puVar41 + 0x11) = 0x6c766c5b72795074;
          *(undefined8 *)(puVar41 + 0x17) = 0x69772e657a69536e;
          *(undefined8 *)(puVar41 + 0x15) = 0x6977202b20736c6f;
          *(undefined8 *)(puVar41 + 0x1b) = 0x2e657a69536c6c75;
          *(undefined8 *)(puVar41 + 0x19) = 0x66203d3c20687464;
          *(undefined8 *)(puVar41 + 0x1f) = 0x2b20792e73666f20;
          *(undefined8 *)(puVar41 + 0x1d) = 0x2626206874646977;
          *(undefined8 *)(puVar41 + 3) = 0x657a69536e697720;
          *(undefined8 *)(puVar41 + 1) = 0x3d3e20782e73666f;
          *(undefined8 *)(puVar41 + 7) = 0x20792e73666f2026;
          *(undefined8 *)(puVar41 + 5) = 0x262068746469772e;
          *(undefined8 *)(puVar41 + 0xb) = 0x68676965682e657a;
          *(undefined8 *)(puVar41 + 9) = 0x69536e6977203d3e;
          *(undefined1 *)((long)puVar41 + 0xbf) = 0;
          *(undefined8 *)(puVar41 + 0xf) = 0x78656e202b20782e;
          *(undefined8 *)(puVar41 + 0xd) = 0x73666f2026262074;
          FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x4b5);
          goto LAB_109a27020;
        }
        lStack_848 = 1;
        if (uVar59 != 0) goto LAB_109a25bd4;
LAB_109a25c58:
        if ((uint)param_8 <= uVar59) {
          uVar59 = (uint)param_8;
        }
        param_8 = (uint *)(ulong)uVar59;
      }
      else {
        lStack_848 = 1;
      }
      if ((uVar9 & 0x1f0000) != 0x50000) {
        uStack_4c0 = (undefined **)CONCAT44(uStack_4c0._4_4_,0x2050000);
        ppuStack_4b8 = &puStack_658;
        puStack_4b0 = (uint *)0x0;
        FUN_109a24834(param_1,&uStack_4c0,(int)*param_7,*(int *)((long)param_7 + 4),param_8);
        param_8 = param_1;
      }
      if ((uVar43 & 0x1f0000) != 0x50000) {
        uStack_4c0 = (undefined **)CONCAT44(uStack_4c0._4_4_,0x2050000);
        ppuStack_4b8 = &puStack_670;
        puStack_4b0 = (uint *)0x0;
        FUN_109a24834(param_2,&uStack_4c0,(int)*param_7,*(int *)((long)param_7 + 4),param_8);
        param_8 = param_2;
      }
      uVar43 = (uint)(param_9 >> 0x20);
      uVar43 = uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU);
      if (99 < (int)uVar43) {
        uVar43 = 100;
      }
      uVar9 = 0x1e;
      if ((param_9 & 1) != 0) {
        uVar9 = uVar43;
      }
      uVar85 = 0;
      uVar68 = 0;
      uVar69 = 0;
      uVar71 = 0;
      uVar73 = 0;
      uVar76 = 0;
      uVar79 = 0;
      uVar82 = 0;
      if (0.0 <= param_10) {
        uVar68 = SUB81(param_10,0);
        uVar69 = (undefined1)((ulong)param_10 >> 8);
        uVar71 = (undefined1)((ulong)param_10 >> 0x10);
        uVar73 = (undefined1)((ulong)param_10 >> 0x18);
        uVar76 = (undefined1)((ulong)param_10 >> 0x20);
        uVar79 = (undefined1)((ulong)param_10 >> 0x28);
        uVar82 = (undefined1)((ulong)param_10 >> 0x30);
        uVar85 = (undefined1)((ulong)param_10 >> 0x38);
      }
      bVar37 = false;
      bVar38 = false;
      bVar14 = NAN((double)CONCAT17(uVar85,CONCAT16(uVar82,CONCAT15(uVar79,CONCAT14(uVar76,CONCAT13(
                                                  uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar68)))))
                                                  )));
      if (!bVar14) {
        bVar37 = (double)CONCAT17(uVar85,CONCAT16(uVar82,CONCAT15(uVar79,CONCAT14(uVar76,CONCAT13(
                                                  uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar68)))))
                                                 )) < 10.0;
        bVar38 = (double)CONCAT17(uVar85,CONCAT16(uVar82,CONCAT15(uVar79,CONCAT14(uVar76,CONCAT13(
                                                  uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar68)))))
                                                 )) == 10.0;
      }
      uVar88 = 0;
      uVar89 = 0;
      uVar90 = 0;
      uVar74 = 0;
      uVar77 = 0;
      uVar80 = 0;
      uVar83 = 0x24;
      uVar86 = 0x40;
      if (bVar38 || bVar37 != bVar14) {
        uVar88 = uVar68;
        uVar89 = uVar69;
        uVar90 = uVar71;
        uVar74 = uVar73;
        uVar77 = uVar76;
        uVar80 = uVar79;
        uVar83 = uVar82;
        uVar86 = uVar85;
      }
      uStack_6c4 = 0;
      uStack_6c0 = 0;
      iStack_6cc = 0;
      uStack_6c8 = 0;
      uStack_6b4 = 0;
      uStack_6b0 = 0;
      uStack_6bc = 0;
      uStack_6b8 = 0;
      uStack_6a4 = 0;
      uStack_6ac = 0;
      uStack_6a8 = 0;
      lStack_698 = 0;
      uStack_6a0 = 0;
      uStack_69c = 0;
      uStack_6d0 = 0x42ff0000;
      puStack_690 = &uStack_6c8;
      dVar107 = 0.01;
      if ((param_9 & 2) != 0) {
        dVar107 = (double)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,CONCAT13(
                                                  uVar74,CONCAT12(uVar90,CONCAT11(uVar89,uVar88)))))
                                                  ));
      }
      uStack_678 = 0;
      uStack_680 = 0;
      puStack_688 = &uStack_680;
      if ((int)lVar44 == 1) {
        iVar6 = (int)(*param_7 >> 0x20) * 2;
        uVar24 = NEON_rev64(CONCAT17((char)((uint)iVar6 >> 0x18),
                                     CONCAT16((char)((uint)iVar6 >> 0x10),
                                              CONCAT15((char)((uint)iVar6 >> 8),
                                                       CONCAT14((char)iVar6,(int)*param_7 * 2)))),4)
        ;
        iVar6 = (int)((ulong)uVar24 >> 0x20) +
                (int)((ulong)*(undefined8 *)(puStack_658 + 2) >> 0x20);
        uStack_4c0 = (undefined **)
                     CONCAT17((char)((uint)iVar6 >> 0x18),
                              CONCAT16((char)((uint)iVar6 >> 0x10),
                                       CONCAT15((char)((uint)iVar6 >> 8),
                                                CONCAT14((char)iVar6,
                                                         (int)uVar24 +
                                                         (int)*(undefined8 *)(puStack_658 + 2)))));
        FUN_109a83fd0(&uStack_6d0,2,&uStack_4c0,(*puStack_658 >> 3 & 0xff) << 4 | 0xb);
      }
      if (-1 < (int)param_8) {
        puVar45 = (undefined8 *)((ulong)&uStack_730 | 4);
        uVar49 = (ulong)&uStack_730 | 8;
        puVar54 = (undefined8 *)((ulong)&uStack_4c0 | 4);
        puVar62 = param_8;
        uVar60 = (ulong)param_8 & 0xffffffff;
        do {
          puVar32 = puStack_658;
          uStack_730 = (uint **)CONCAT44(uStack_730._4_4_,0x42ff0000);
          puVar45[1] = 0;
          *puVar45 = 0;
          puVar45[3] = 0;
          puVar45[2] = 0;
          puVar45[5] = 0;
          puVar45[4] = 0;
          *(undefined8 *)((long)puVar45 + 0x34) = 0;
          *(undefined8 *)((long)puVar45 + 0x2c) = 0;
          adStack_6e0[0] = 0.0;
          adStack_6e0[1] = 0.0;
          uStack_6f0 = uVar49;
          pdStack_6e8 = adStack_6e0;
          if ((int)lVar44 == 1) {
            iVar6 = **(int **)(puStack_658 + uVar60 * 0x18 + 0x10);
            iVar8 = (*(int **)(puStack_658 + uVar60 * 0x18 + 0x10))[1];
            iStack_788 = iVar6 + *(int *)((long)param_7 + 4) * 2;
            iStack_784 = iVar8 + (int)*param_7 * 2;
            lStack_780 = CONCAT44(uStack_6bc,uStack_6c0);
            uStack_790 = uStack_6d0 & 0xfff | 0x42ff0000;
            iStack_78c = 2;
            lStack_768 = 0;
            lStack_770 = 0;
            lStack_758 = 0;
            uStack_760 = 0;
            lStack_740 = 0;
            uStack_738 = 0;
            lStack_778 = lStack_780;
            piStack_750 = &iStack_788;
            plStack_748 = &lStack_740;
            if ((lStack_780 == 0) && ((long)iStack_784 * (long)iStack_788 != 0)) {
              puVar41 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar41 = 1;
              uStack_4c0 = (undefined **)(puVar41 + 1);
              ppuStack_4b8 = (uint **)0x1c;
              *(undefined1 *)(puVar41 + 8) = 0;
              *(undefined8 *)(puVar41 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar41 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar41 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar41 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
              goto LAB_109a27020;
            }
            uVar43 = ((uStack_6d0 & 0xfff) >> 3) + 1 <<
                     (ulong)(0xfa50U >> (ulong)((uStack_6d0 & 7) << 1) & 3);
            uStack_738 = (ulong)uVar43;
            lStack_740 = (long)(int)uVar43 * (long)iStack_784;
            uStack_790 = uStack_6d0 & 0xfff | 0x42ff4000;
            lStack_770 = lStack_780 + lStack_740 * iStack_788;
            uStack_7a0 = (undefined8 *)CONCAT44(iVar6,iVar8);
            iStack_7a8 = (int)*param_7;
            iStack_7a4 = *(int *)((long)param_7 + 4);
            lStack_768 = lStack_770;
            FUN_109a852c8(&uStack_4c0,&uStack_790,&iStack_7a8);
            if (uStack_6f8 != 0) {
              piVar2 = (int *)(uStack_6f8 + 0x14);
              do {
                iVar6 = *piVar2;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar14) {
                  *piVar2 = iVar6 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (iVar6 + -1 == 0) {
                func_0x000109a848d4(&uStack_730);
              }
            }
            if (0 < uStack_730._4_4_) {
              lVar46 = 0;
              do {
                *(undefined4 *)(uStack_6f0 + lVar46 * 4) = 0;
                lVar46 = lVar46 + 1;
              } while (lVar46 < uStack_730._4_4_);
            }
            uStack_728 = ppuStack_4b8;
            uStack_730 = (uint **)uStack_4c0;
            puStack_718 = puStack_4a8;
            puStack_720 = puStack_4b0;
            uStack_708 = uStack_498;
            uStack_710 = uStack_4a0;
            uStack_6f8 = uStack_488;
            uStack_700 = uStack_490;
            uVar53 = uStack_6f0;
            pdVar48 = pdStack_6e8;
            if ((pdStack_6e8 != adStack_6e0) &&
               (uVar53 = uVar49, pdVar48 = adStack_6e0, pdStack_6e8 != (double *)0x0)) {
              _free(pdStack_6e8[-1]);
            }
            pdStack_6e8 = pdVar48;
            uStack_6f0 = uVar53;
            pdVar48 = pdStack_478;
            if (uStack_4c0._4_4_ < 3) {
              *pdStack_6e8 = *pdStack_478;
              pdStack_6e8[1] = pdVar48[1];
              uStack_4c0 = (undefined **)CONCAT44(uStack_4c0._4_4_,0x42ff0000);
              puVar54[1] = 0;
              *puVar54 = 0;
              puVar54[3] = 0;
              puVar54[2] = 0;
              puVar54[5] = 0;
              puVar54[4] = 0;
              *(undefined8 *)((long)puVar54 + 0x34) = 0;
              *(undefined8 *)((long)puVar54 + 0x2c) = 0;
              if (pdVar48 != &dStack_470) {
                _free(pdVar48[-1]);
              }
            }
            else {
              uStack_6f0 = uStack_480;
              pdStack_6e8 = pdStack_478;
            }
            puVar62 = puStack_658 + uVar60 * 0x18;
            uVar43 = *puVar62;
            if ((uVar43 & 7) != 0) {
              puVar41 = (undefined4 *)0x14;
              func_0x000107c2ae8c();
              *puVar41 = 1;
              uStack_4c0 = (undefined **)(puVar41 + 1);
              *uStack_4c0 = (undefined *)0x3d3d206874706564;
              ppuStack_4b8 = (uint **)0xe;
              *(undefined1 *)((long)puVar41 + 0x12) = 0;
              *(undefined8 *)((long)puVar41 + 10) = 0x55385f5643203d3d;
              FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594c59,&UNK_10f594b32,0x39);
              goto LAB_109a27020;
            }
            uVar7 = puVar62[2];
            uVar59 = puVar62[3];
            uStack_4c0 = *(undefined ***)(puVar62 + 2);
            lVar46 = ((ulong)(uVar43 >> 3) & 0x1ff) + 1;
            uVar63 = (uint)lVar46;
            if (uStack_730._4_4_ < 3) {
              if (((uint)uStack_728 != uVar7 || uStack_728._4_4_ != uVar59) ||
                 (((uint)uStack_730 & 0xfff) != (uVar63 * 0x10 + 0xffb & 0xfff) ||
                  puStack_720 == (uint *)0x0)) goto LAB_109a26120;
            }
            else {
LAB_109a26120:
              FUN_109a83fd0(&uStack_730,2,&uStack_4c0);
            }
            uVar53 = (ulong)(uVar63 * (uVar59 + 2)) + 0xf;
            uVar65 = (uint)uVar53 & 0xfffffff0;
            uVar1 = uVar65 * 2 + 0x40;
            ppuVar47 = &puStack_4b0;
            if (0x208 < uVar1) {
              ppuVar47 = (uint **)((long)(int)uVar1 << 1);
              if ((int)uVar65 < -0x20) {
                ppuVar47 = (uint **)0xffffffffffffffff;
              }
              uStack_4c0 = (undefined **)&puStack_4b0;
              __Znam();
            }
            if (0 < (int)uVar7) {
              uVar65 = uVar63 * uVar59;
              puVar57 = (undefined8 *)((long)ppuVar47 + lVar46 * 2 + 0xf & 0xfffffffffffffff0);
              uVar53 = -(uVar53 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar53 & 0xfffffff0) << 1;
              iVar6 = uVar7 - 2;
              uVar15 = uVar7 - 1;
              if (uVar15 == 0) {
                iVar6 = 0;
              }
              uVar5 = uVar63;
              if ((int)uVar59 < 2) {
                uVar5 = 0;
              }
              if ((int)uVar59 < 3) {
                uVar59 = 2;
              }
              uVar63 = uVar63 * (uVar59 - 2);
              uVar40 = (ulong)(uVar43 >> 3) & 0x1ff;
              lVar46 = uVar40 * 2 + 2;
              lVar55 = uVar53 + uVar40 * -2;
              lVar31 = lVar55 + -2;
              uVar64 = 0;
              do {
                uVar43 = (uint)(uVar15 != 0);
                if (uVar64 != 0) {
                  uVar43 = (int)uVar64 - 1;
                }
                lVar67 = *(long *)(puVar62 + 4);
                lVar66 = **(long **)(puVar62 + 0x12);
                uVar4 = uVar64 + 1;
                iVar8 = (int)uVar4;
                if (uVar15 <= uVar64) {
                  iVar8 = iVar6;
                }
                dVar50 = *pdStack_6e8;
                if ((int)uVar65 < 8) {
                  uVar51 = 0;
                }
                else {
                  uVar51 = 0;
                  puVar52 = puVar57;
                  do {
                    uVar24 = *(undefined8 *)(lVar67 + (int)uVar43 * lVar66 + uVar51);
                    bVar70 = (byte)((ulong)uVar24 >> 8);
                    bVar72 = (byte)((ulong)uVar24 >> 0x10);
                    bVar75 = (byte)((ulong)uVar24 >> 0x18);
                    bVar78 = (byte)((ulong)uVar24 >> 0x20);
                    bVar81 = (byte)((ulong)uVar24 >> 0x28);
                    bVar84 = (byte)((ulong)uVar24 >> 0x30);
                    bVar87 = (byte)((ulong)uVar24 >> 0x38);
                    uVar25 = *(undefined8 *)(lVar67 + lVar66 * uVar64 + uVar51);
                    uVar97 = *(undefined8 *)(lVar67 + lVar66 * iVar8 + uVar51);
                    bVar99 = (byte)((ulong)uVar97 >> 8);
                    bVar100 = (byte)((ulong)uVar97 >> 0x10);
                    bVar101 = (byte)((ulong)uVar97 >> 0x18);
                    bVar102 = (byte)((ulong)uVar97 >> 0x20);
                    bVar103 = (byte)((ulong)uVar97 >> 0x28);
                    bVar104 = (byte)((ulong)uVar97 >> 0x30);
                    bVar105 = (byte)((ulong)uVar97 >> 0x38);
                    sVar10 = (ushort)bVar99 - (ushort)bVar70;
                    sVar11 = (ushort)bVar100 - (ushort)bVar72;
                    sVar12 = (ushort)bVar101 - (ushort)bVar75;
                    sVar21 = (ushort)bVar103 - (ushort)bVar81;
                    sVar22 = (ushort)bVar104 - (ushort)bVar84;
                    sVar26 = (ushort)bVar105 - (ushort)bVar87;
                    auVar98._0_8_ =
                         CONCAT26(((ushort)bVar101 + (ushort)bVar75) * 3 +
                                  (ushort)(byte)((ulong)uVar25 >> 0x18) * 10,
                                  CONCAT24(((ushort)bVar100 + (ushort)bVar72) * 3 +
                                           (ushort)(byte)((ulong)uVar25 >> 0x10) * 10,
                                           CONCAT22(((ushort)bVar99 + (ushort)bVar70) * 3 +
                                                    (ushort)(byte)((ulong)uVar25 >> 8) * 10,
                                                    ((ushort)(byte)uVar97 + (ushort)(byte)uVar24) *
                                                    3 + (ushort)(byte)uVar25 * 10)));
                    auVar98._8_2_ =
                         ((ushort)bVar102 + (ushort)bVar78) * 3 +
                         (ushort)(byte)((ulong)uVar25 >> 0x20) * 10;
                    auVar98._10_2_ =
                         ((ushort)bVar103 + (ushort)bVar81) * 3 +
                         (ushort)(byte)((ulong)uVar25 >> 0x28) * 10;
                    auVar98._12_2_ =
                         ((ushort)bVar104 + (ushort)bVar84) * 3 +
                         (ushort)(byte)((ulong)uVar25 >> 0x30) * 10;
                    auVar98._14_2_ =
                         ((ushort)bVar105 + (ushort)bVar87) * 3 +
                         (ushort)(byte)((ulong)uVar25 >> 0x38) * 10;
                    puVar52[1] = auVar98._8_8_;
                    *puVar52 = auVar98._0_8_;
                    ((undefined8 *)((long)puVar52 + uVar53))[1] =
                         CONCAT17((char)((ushort)sVar26 >> 8),
                                  CONCAT16((char)sVar26,
                                           CONCAT15((char)((ushort)sVar22 >> 8),
                                                    CONCAT14((char)sVar22,
                                                             CONCAT13((char)((ushort)sVar21 >> 8),
                                                                      CONCAT12((char)sVar21,
                                                                               (ushort)bVar102 -
                                                                               (ushort)bVar78))))));
                    *(undefined8 *)((long)puVar52 + uVar53) =
                         CONCAT17((char)((ushort)sVar12 >> 8),
                                  CONCAT16((char)sVar12,
                                           CONCAT15((char)((ushort)sVar11 >> 8),
                                                    CONCAT14((char)sVar11,
                                                             CONCAT13((char)((ushort)sVar10 >> 8),
                                                                      CONCAT12((char)sVar10,
                                                                               (ushort)(byte)uVar97
                                                                               - (ushort)(byte)
                                                  uVar24))))));
                    uVar51 = uVar51 + 8;
                    puVar52 = puVar52 + 2;
                  } while ((long)uVar51 <= (long)(int)(uVar65 - 8));
                  uVar51 = uVar51 & 0xffffffff;
                }
                if ((int)uVar51 < (int)uVar65) {
                  lVar56 = 0;
                  do {
                    bVar70 = *(byte *)(lVar67 + (int)uVar43 * lVar66 + uVar51 + lVar56);
                    bVar72 = *(byte *)(lVar67 + lVar66 * iVar8 + uVar51 + lVar56);
                    *(ushort *)((long)puVar57 + lVar56 * 2 + uVar51 * 2) =
                         ((ushort)bVar72 + (ushort)bVar70) * 3 +
                         (ushort)*(byte *)(lVar67 + uVar51 + lVar66 * uVar64 + lVar56) * 10;
                    *(ushort *)((long)puVar57 + lVar56 * 2 + uVar51 * 2 + uVar53) =
                         (ushort)bVar72 - (ushort)bVar70;
                    lVar56 = lVar56 + 1;
                  } while (uVar65 - uVar51 != lVar56);
                }
                lVar66 = 0;
                do {
                  *(undefined2 *)((long)puVar57 + lVar66 + uVar40 * -2 + -2) =
                       *(undefined2 *)((long)puVar57 + lVar66 + (ulong)uVar5 * 2);
                  *(undefined2 *)((long)puVar57 + lVar66 + (long)(int)uVar65 * 2) =
                       *(undefined2 *)((long)puVar57 + lVar66 + (ulong)uVar63 * 2);
                  *(undefined2 *)((long)puVar57 + lVar66 + lVar31) =
                       *(undefined2 *)((long)puVar57 + lVar66 + uVar53 + (ulong)uVar5 * 2);
                  *(undefined2 *)((long)puVar57 + lVar66 + uVar53 + (long)(int)uVar65 * 2) =
                       *(undefined2 *)((long)puVar57 + lVar66 + uVar53 + (ulong)uVar63 * 2);
                  lVar66 = lVar66 + 2;
                } while (lVar46 != lVar66);
                if ((int)uVar65 < 8) {
                  uVar51 = 0;
                }
                else {
                  uVar51 = 0;
                  puVar58 = (undefined2 *)((long)puStack_720 + (long)dVar50 * uVar64 + 0x10);
                  puVar52 = puVar57;
                  do {
                    uVar25 = ((undefined8 *)((long)puVar52 + lVar46))[1];
                    uVar24 = *(undefined8 *)((long)puVar52 + lVar46);
                    puVar16 = (undefined8 *)((long)puVar52 + (uVar40 * 2 ^ 0xfffffffffffffffe));
                    uVar30 = puVar16[1];
                    uVar97 = *puVar16;
                    psVar61 = (short *)((long)puVar52 + lVar46 + uVar53);
                    psVar17 = (short *)((long)puVar52 + lVar55 + -2);
                    sVar10 = (short)uVar24 - (short)uVar97;
                    sVar11 = (short)((ulong)uVar24 >> 0x10) - (short)((ulong)uVar97 >> 0x10);
                    uVar68 = (undefined1)((ushort)sVar11 >> 8);
                    sVar12 = (short)((ulong)uVar24 >> 0x20) - (short)((ulong)uVar97 >> 0x20);
                    uVar69 = (undefined1)((ushort)sVar12 >> 8);
                    sVar21 = (short)((ulong)uVar24 >> 0x30) - (short)((ulong)uVar97 >> 0x30);
                    uVar71 = (undefined1)((ushort)sVar21 >> 8);
                    sVar22 = (short)uVar25 - (short)uVar30;
                    uVar73 = (undefined1)sVar22;
                    uVar76 = (undefined1)((ushort)sVar22 >> 8);
                    sVar22 = (short)((ulong)uVar25 >> 0x10) - (short)((ulong)uVar30 >> 0x10);
                    uVar79 = (undefined1)sVar22;
                    uVar82 = (undefined1)((ushort)sVar22 >> 8);
                    sVar22 = (short)((ulong)uVar25 >> 0x20) - (short)((ulong)uVar30 >> 0x20);
                    uVar85 = (undefined1)sVar22;
                    uVar88 = (undefined1)((ushort)sVar22 >> 8);
                    sVar22 = (short)((ulong)uVar25 >> 0x30) - (short)((ulong)uVar30 >> 0x30);
                    uVar89 = (undefined1)sVar22;
                    uVar90 = (undefined1)((ushort)sVar22 >> 8);
                    psVar18 = (short *)((long)puVar52 + uVar53);
                    sVar22 = *psVar18 * 10 + (*psVar17 + *psVar61) * 3;
                    sVar26 = psVar18[1] * 10 + (psVar17[1] + psVar61[1]) * 3;
                    uVar74 = (undefined1)((ushort)sVar26 >> 8);
                    sVar27 = psVar18[2] * 10 + (psVar17[2] + psVar61[2]) * 3;
                    uVar77 = (undefined1)((ushort)sVar27 >> 8);
                    sVar28 = psVar18[3] * 10 + (psVar17[3] + psVar61[3]) * 3;
                    uVar80 = (undefined1)((ushort)sVar28 >> 8);
                    sVar29 = psVar18[4] * 10 + (psVar17[4] + psVar61[4]) * 3;
                    uVar83 = (undefined1)sVar29;
                    uVar86 = (undefined1)((ushort)sVar29 >> 8);
                    sVar29 = psVar18[5] * 10 + (psVar17[5] + psVar61[5]) * 3;
                    uVar91 = (undefined1)sVar29;
                    uVar92 = (undefined1)((ushort)sVar29 >> 8);
                    sVar29 = psVar18[6] * 10 + (psVar17[6] + psVar61[6]) * 3;
                    uVar93 = (undefined1)sVar29;
                    uVar94 = (undefined1)((ushort)sVar29 >> 8);
                    sVar29 = psVar18[7] * 10 + (psVar17[7] + psVar61[7]) * 3;
                    uVar95 = (undefined1)sVar29;
                    uVar96 = (undefined1)((ushort)sVar29 >> 8);
                    auVar106[2] = (char)sVar26;
                    auVar106._0_2_ = sVar22;
                    auVar106[3] = uVar74;
                    auVar106[4] = (char)sVar27;
                    auVar106[5] = uVar77;
                    auVar106[6] = (char)sVar28;
                    auVar106[7] = uVar80;
                    auVar106[8] = uVar83;
                    auVar106[9] = uVar86;
                    auVar106[10] = uVar91;
                    auVar106[0xb] = uVar92;
                    auVar106[0xc] = uVar93;
                    auVar106[0xd] = uVar94;
                    auVar106[0xe] = uVar95;
                    auVar106[0xf] = uVar96;
                    auVar23[2] = (char)sVar26;
                    auVar23._0_2_ = sVar22;
                    auVar23[3] = uVar74;
                    auVar23[4] = (char)sVar27;
                    auVar23[5] = uVar77;
                    auVar23[6] = (char)sVar28;
                    auVar23[7] = uVar80;
                    auVar23[8] = uVar83;
                    auVar23[9] = uVar86;
                    auVar23[10] = uVar91;
                    auVar23[0xb] = uVar92;
                    auVar23[0xc] = uVar93;
                    auVar23[0xd] = uVar94;
                    auVar23[0xe] = uVar95;
                    auVar23[0xf] = uVar96;
                    auVar106 = NEON_ext(auVar106,auVar23,8,1);
                    auVar19[2] = (char)sVar11;
                    auVar19._0_2_ = sVar10;
                    auVar19[3] = uVar68;
                    auVar19[4] = (char)sVar12;
                    auVar19[5] = uVar69;
                    auVar19[6] = (char)sVar21;
                    auVar19[7] = uVar71;
                    auVar19[8] = uVar73;
                    auVar19[9] = uVar76;
                    auVar19[10] = uVar79;
                    auVar19[0xb] = uVar82;
                    auVar19[0xc] = uVar85;
                    auVar19[0xd] = uVar88;
                    auVar19[0xe] = uVar89;
                    auVar19[0xf] = uVar90;
                    auVar20[2] = (char)sVar11;
                    auVar20._0_2_ = sVar10;
                    auVar20[3] = uVar68;
                    auVar20[4] = (char)sVar12;
                    auVar20[5] = uVar69;
                    auVar20[6] = (char)sVar21;
                    auVar20[7] = uVar71;
                    auVar20[8] = uVar73;
                    auVar20[9] = uVar76;
                    auVar20[10] = uVar79;
                    auVar20[0xb] = uVar82;
                    auVar20[0xc] = uVar85;
                    auVar20[0xd] = uVar88;
                    auVar20[0xe] = uVar89;
                    auVar20[0xf] = uVar90;
                    auVar98 = NEON_ext(auVar19,auVar20,8,1);
                    puVar58[-8] = sVar10;
                    puVar58[-7] = sVar22;
                    puVar58[-6] = sVar11;
                    puVar58[-5] = sVar26;
                    puVar58[-4] = sVar12;
                    puVar58[-3] = sVar27;
                    puVar58[-2] = sVar21;
                    puVar58[-1] = sVar28;
                    *puVar58 = auVar98._0_2_;
                    puVar58[1] = auVar106._0_2_;
                    puVar58[2] = auVar98._2_2_;
                    puVar58[3] = auVar106._2_2_;
                    puVar58[4] = auVar98._4_2_;
                    puVar58[5] = auVar106._4_2_;
                    puVar58[6] = auVar98._6_2_;
                    puVar58[7] = auVar106._6_2_;
                    uVar51 = uVar51 + 8;
                    puVar52 = puVar52 + 2;
                    puVar58 = puVar58 + 0x10;
                  } while ((long)uVar51 <= (long)(int)(uVar65 - 8));
                  uVar51 = uVar51 & 0xffffffff;
                }
                if ((int)uVar51 < (int)uVar65) {
                  lVar66 = 0;
                  psVar61 = (short *)((long)puStack_720 + (long)dVar50 * uVar64 + uVar51 * 4 + 2);
                  do {
                    sVar10 = *(short *)((long)puVar57 +
                                       lVar66 * 2 + (uVar40 + uVar51) * 2 + uVar53 + 2);
                    sVar11 = *(short *)((long)puVar57 + lVar66 * 2 + uVar51 * 2 + lVar31);
                    sVar12 = *(short *)((long)puVar57 + lVar66 * 2 + uVar51 * 2 + uVar53);
                    psVar61[-1] = *(short *)((long)puVar57 + lVar66 * 2 + (uVar40 + uVar51) * 2 + 2)
                                  - *(short *)((long)puVar57 +
                                              lVar66 * 2 + uVar51 * 2 + uVar40 * -2 + -2);
                    *psVar61 = (sVar11 + sVar10) * 3 + sVar12 * 10;
                    lVar66 = lVar66 + 1;
                    psVar61 = psVar61 + 2;
                  } while (uVar65 - uVar51 != lVar66);
                }
                uVar64 = uVar4;
              } while (uVar4 != uVar7);
            }
            puVar62 = (uint *)((ulong)param_8 & 0xffffffff);
            if ((ppuVar47 != &puStack_4b0) && (ppuVar47 != (uint **)0x0)) {
              uStack_4c0 = (undefined **)ppuVar47;
              ppuStack_4b8 = (uint **)(long)(int)uVar1;
              __ZdaPv();
            }
            iStack_7a8 = 0x1010000;
            uStack_7a0 = &uStack_730;
            uStack_798 = 0;
            auStack_7c0[0] = 0x2010000;
            puStack_7b8 = &uStack_790;
            uStack_7b0 = 0;
            puStack_4a8 = (undefined8 *)0x0;
            puStack_4b0 = (uint *)0x0;
            ppuStack_4b8 = (uint **)0x0;
            uStack_4c0 = (undefined **)0x0;
            FUN_109a4a0a4(&iStack_7a8,auStack_7c0,*(int *)((long)param_7 + 4),
                          *(int *)((long)param_7 + 4),(int)*param_7,(int)*param_7,0x10,&uStack_4c0);
            if (lStack_758 != 0) {
              piVar2 = (int *)(lStack_758 + 0x14);
              do {
                iVar6 = *piVar2;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar14) {
                  *piVar2 = iVar6 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (iVar6 + -1 == 0) {
                func_0x000109a848d4(&uStack_790);
              }
            }
            lStack_758 = 0;
            lStack_778 = 0;
            lStack_780 = 0;
            lStack_768 = 0;
            lStack_770 = 0;
            if (0 < iStack_78c) {
              lVar46 = 0;
              do {
                piStack_750[lVar46] = 0;
                lVar46 = lVar46 + 1;
              } while (lVar46 < iStack_78c);
            }
            if (plStack_748 != &lStack_740 && plStack_748 != (long *)0x0) {
              _free(plStack_748[-1]);
            }
          }
          else {
            puVar3 = puStack_658 + uVar60 * 0x30 + 0x18;
            if ((uint *)&uStack_730 != puVar3) {
              if (*(long *)(puStack_658 + uVar60 * 0x30 + 0x26) != 0) {
                piVar2 = (int *)(*(long *)(puStack_658 + uVar60 * 0x30 + 0x26) + 0x14);
                do {
                  cVar13 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar14) {
                    *piVar2 = *piVar2 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (uStack_6f8 != 0) {
                  piVar2 = (int *)(uStack_6f8 + 0x14);
                  do {
                    iVar6 = *piVar2;
                    cVar13 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar14) {
                      *piVar2 = iVar6 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (iVar6 + -1 == 0) {
                    func_0x000109a848d4(&uStack_730);
                  }
                }
              }
              uStack_6f8 = 0;
              puStack_718 = (undefined8 *)0x0;
              puStack_720 = (uint *)0x0;
              uStack_708 = 0;
              uStack_710 = 0;
              if (uStack_730._4_4_ < 1) {
                uStack_730 = (uint **)CONCAT44(uStack_730._4_4_,*puVar3);
LAB_109a265bc:
                if (2 < (int)puVar32[uVar60 * 0x30 + 0x19]) goto LAB_109a265f0;
                uStack_730 = (uint **)CONCAT44(puVar32[uVar60 * 0x30 + 0x19],(uint)uStack_730);
                uStack_728 = *(uint ***)(puVar32 + uVar60 * 0x30 + 0x1a);
                pdVar48 = *(double **)(puVar32 + uVar60 * 0x30 + 0x2a);
                *pdStack_6e8 = *pdVar48;
                pdStack_6e8[1] = pdVar48[1];
              }
              else {
                lVar46 = 0;
                do {
                  *(undefined4 *)(uStack_6f0 + lVar46 * 4) = 0;
                  lVar46 = lVar46 + 1;
                } while (lVar46 < uStack_730._4_4_);
                uStack_730 = (uint **)CONCAT44(uStack_730._4_4_,*puVar3);
                if (uStack_730._4_4_ < 3) goto LAB_109a265bc;
LAB_109a265f0:
                func_0x000109a84868(&uStack_730,puVar3);
              }
              puStack_718 = *(undefined8 **)(puVar32 + uVar60 * 0x30 + 0x1e);
              puStack_720 = *(uint **)(puVar32 + uVar60 * 0x30 + 0x1c);
              uStack_708 = *(ulong *)(puVar32 + uVar60 * 0x30 + 0x22);
              uStack_710 = *(ulong *)(puVar32 + uVar60 * 0x30 + 0x20);
              uStack_6f8 = *(ulong *)(puVar32 + uVar60 * 0x30 + 0x26);
              uStack_700 = *(ulong *)(puVar32 + uVar60 * 0x30 + 0x24);
            }
          }
          if ((*(int **)(puStack_658 + uVar60 * lVar44 * 0x18 + 0x10))[1] !=
              (*(int **)(puStack_670 + uVar60 * lStack_848 * 0x18 + 0x10))[1] ||
              **(int **)(puStack_658 + uVar60 * lVar44 * 0x18 + 0x10) !=
              **(int **)(puStack_670 + uVar60 * lStack_848 * 0x18 + 0x10)) {
            puVar41 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *puVar41 = 1;
            uStack_4c0 = (undefined **)(puVar41 + 1);
            ppuStack_4b8 = (uint **)0x44;
            *(undefined8 *)(puVar41 + 3) = 0x202a206c6576656c;
            *(undefined8 *)(puVar41 + 1) = 0x5b72795076657270;
            *(undefined8 *)(puVar41 + 7) = 0x2928657a69732e5d;
            *(undefined8 *)(puVar41 + 5) = 0x31706574536c766c;
            *(undefined8 *)(puVar41 + 0xb) = 0x6576656c5b727950;
            *(undefined8 *)(puVar41 + 9) = 0x7478656e203d3d20;
            *(undefined1 *)(puVar41 + 0x12) = 0;
            puVar41[0x11] = 0x2928657a;
            *(undefined8 *)(puVar41 + 0xf) = 0x69732e5d32706574;
            *(undefined8 *)(puVar41 + 0xd) = 0x536c766c202a206c;
            FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x4e0);
            goto LAB_109a27020;
          }
          if (((puStack_670[uVar60 * lStack_848 * 0x18] ^ puStack_658[uVar60 * lVar44 * 0x18]) &
              0xfff) != 0) {
            puVar41 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *puVar41 = 1;
            uStack_4c0 = (undefined **)(puVar41 + 1);
            ppuStack_4b8 = (uint **)0x44;
            *(undefined8 *)(puVar41 + 3) = 0x202a206c6576656c;
            *(undefined8 *)(puVar41 + 1) = 0x5b72795076657270;
            *(undefined8 *)(puVar41 + 7) = 0x2928657079742e5d;
            *(undefined8 *)(puVar41 + 5) = 0x31706574536c766c;
            *(undefined8 *)(puVar41 + 0xb) = 0x6576656c5b727950;
            *(undefined8 *)(puVar41 + 9) = 0x7478656e203d3d20;
            *(undefined1 *)(puVar41 + 0x12) = 0;
            puVar41[0x11] = 0x29286570;
            *(undefined8 *)(puVar41 + 0xf) = 0x79742e5d32706574;
            *(undefined8 *)(puVar41 + 0xd) = 0x536c766c202a206c;
            FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x4e1);
            goto LAB_109a27020;
          }
          uStack_790 = 0;
          uStack_4c0 = &PTR_FUN_110b21520;
          puStack_4a8 = &uStack_730;
          uStack_498 = uVar34;
          uStack_490 = uVar33;
          uStack_488 = uStack_868;
          uStack_480 = *param_7;
          dStack_468 = (double)CONCAT44((int)puVar62,(int)uVar60);
          uStack_460 = param_11;
          iStack_78c = iVar39;
          ppuStack_4b8 = (uint **)(puStack_658 + uVar60 * lVar44 * 0x18);
          puStack_4b0 = puStack_670 + uVar60 * lStack_848 * 0x18;
          uStack_4a0 = uVar35;
          pdStack_478 = (double *)(param_9 & 0xffffffff | (ulong)uVar9 << 0x20);
          dStack_470 = dVar107 * dVar107;
          fStack_45c = (float)(double)CONCAT17(in_register_00005007,
                                               CONCAT16(in_register_00005006,
                                                        CONCAT15(in_register_00005005,
                                                                 CONCAT14(in_register_00005004,
                                                                          CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                              );
          func_0x000109aa87cc(&uStack_790,&uStack_4c0);
          if (uStack_6f8 != 0) {
            piVar2 = (int *)(uStack_6f8 + 0x14);
            do {
              iVar6 = *piVar2;
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar14) {
                *piVar2 = iVar6 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (iVar6 + -1 == 0) {
              func_0x000109a848d4(&uStack_730);
            }
          }
          uStack_6f8 = 0;
          puStack_718 = (undefined8 *)0x0;
          puStack_720 = (uint *)0x0;
          uStack_708 = 0;
          uStack_710 = 0;
          if (0 < uStack_730._4_4_) {
            lVar46 = 0;
            do {
              *(undefined4 *)(uStack_6f0 + lVar46 * 4) = 0;
              lVar46 = lVar46 + 1;
            } while (lVar46 < uStack_730._4_4_);
          }
          if (pdStack_6e8 != adStack_6e0 && pdStack_6e8 != (double *)0x0) {
            _free(pdStack_6e8[-1]);
          }
          bVar14 = 0 < (long)uVar60;
          uVar60 = uVar60 - 1;
        } while (bVar14);
      }
      if (lStack_698 != 0) {
        piVar2 = (int *)(lStack_698 + 0x14);
        do {
          iVar39 = *piVar2;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar39 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_6d0);
        }
      }
      lStack_698 = 0;
      uStack_6b8 = 0;
      uStack_6b4 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      uStack_6a8 = 0;
      uStack_6a4 = 0;
      uStack_6b0 = 0;
      uStack_6ac = 0;
      if (0 < iStack_6cc) {
        lVar44 = 0;
        do {
          puStack_690[lVar44] = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < iStack_6cc);
      }
      if (puStack_688 != &uStack_680 && puStack_688 != (undefined8 *)0x0) {
        _free(puStack_688[-1]);
      }
      uStack_4c0 = (undefined **)&puStack_670;
      FUN_1093702c4(&uStack_4c0);
      uStack_4c0 = (undefined **)&puStack_658;
      FUN_1093702c4(&uStack_4c0);
      if (uStack_608 != 0) {
        piVar2 = (int *)(uStack_608 + 0x14);
        do {
          iVar39 = *piVar2;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar39 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_640);
        }
      }
      uStack_608 = 0;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_630 = 0;
      uStack_62c = 0;
      uStack_618 = 0;
      uStack_614 = 0;
      uStack_620 = 0;
      uStack_61c = 0;
      if (0 < iStack_63c) {
        lVar44 = 0;
        do {
          *(undefined4 *)(uStack_600 + lVar44 * 4) = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < iStack_63c);
      }
      if (pdStack_5f8 != adStack_5f0 && pdStack_5f8 != (double *)0x0) {
        _free(pdStack_5f8[-1]);
      }
      if (uStack_5a8 != 0) {
        piVar2 = (int *)(uStack_5a8 + 0x14);
        do {
          iVar39 = *piVar2;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar39 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_5e0);
        }
      }
      uStack_5a8 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      if (0 < uStack_5e0._4_4_) {
        lVar44 = 0;
        do {
          *(undefined4 *)(uStack_5a0 + lVar44 * 4) = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < uStack_5e0._4_4_);
      }
      if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
        _free(puStack_598[-1]);
      }
      if (uStack_548 != 0) {
        piVar2 = (int *)(uStack_548 + 0x14);
        do {
          iVar39 = *piVar2;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar39 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar39 + -1 == 0) {
          func_0x000109a848d4(&uStack_580);
        }
      }
      uStack_548 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      if (0 < uStack_580._4_4_) {
        lVar44 = 0;
        do {
          *(undefined4 *)(uStack_540 + lVar44 * 4) = 0;
          lVar44 = lVar44 + 1;
        } while (lVar44 < uStack_580._4_4_);
      }
      if (puStack_538 != &uStack_530 && puStack_538 != (undefined8 *)0x0) {
        _free(puStack_538[-1]);
      }
      goto LAB_109a26984;
    }
    FUN_109a8c15c(param_1,&puStack_658);
    iVar6 = (int)((ulong)(lStack_650 - (long)puStack_658) >> 5) * -0x55555555;
    if (iVar6 < 1) {
      puVar41 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar41 = 1;
      uStack_4c0 = (undefined **)(puVar41 + 1);
      *uStack_4c0 = (undefined *)0x2031736c6576656c;
      ppuStack_4b8 = (uint **)0xc;
      *(undefined1 *)(puVar41 + 4) = 0;
      puVar41[3] = 0x30203d3e;
      FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x489);
      goto LAB_109a27020;
    }
    uVar59 = iVar6 - 1;
    if ((uVar59 & 0x80000001) != 1) {
      lVar44 = 1;
      if (uVar59 != 0) goto LAB_109a25a98;
LAB_109a25b18:
      if (uVar43 <= uVar59) {
        uVar59 = uVar43;
      }
      param_8 = (uint *)(ulong)uVar59;
      goto LAB_109a25b20;
    }
    if (((*puStack_658 >> 2 & 0x3fe | 1) == (puStack_658[0x18] >> 3 & 0x1ff)) &&
       ((puStack_658[0x18] & 7) == 3)) {
      uVar59 = uVar59 >> 1;
      lVar44 = 2;
      if (uVar59 == 0) goto LAB_109a25b18;
    }
    else {
      lVar44 = 1;
    }
LAB_109a25a98:
    uStack_6d0 = 0;
    iStack_6cc = 0;
    uStack_730 = (uint **)0x0;
    FUN_109a86b88(puStack_658 + lVar44 * 0x18,&uStack_6d0,&uStack_730);
    if ((int)*param_7 <= (int)(uint)uStack_730) {
      if (((*(int *)((long)param_7 + 4) <= uStack_730._4_4_) &&
          ((int)((int)*param_7 + (uint)uStack_730 + puStack_658[lVar44 * 0x18 + 3]) <=
           (int)uStack_6d0)) &&
         ((int)(*(int *)((long)param_7 + 4) + uStack_730._4_4_ + puStack_658[lVar44 * 0x18 + 2]) <=
          iStack_6cc)) goto LAB_109a25b18;
    }
  }
  puVar41 = (undefined4 *)0xc0;
  func_0x000107c2ae8c();
  *puVar41 = 1;
  uStack_4c0 = (undefined **)(puVar41 + 1);
  ppuStack_4b8 = (uint **)0xbb;
  *(undefined8 *)(puVar41 + 0x23) = 0x706574536c766c5b;
  *(undefined8 *)(puVar41 + 0x21) = 0x7279507665727020;
  *(undefined8 *)(puVar41 + 0x27) = 0x7a69536e6977202b;
  *(undefined8 *)(puVar41 + 0x25) = 0x2073776f722e5d31;
  *(undefined8 *)(puVar41 + 0x2b) = 0x6c6c7566203d3c20;
  *(undefined8 *)(puVar41 + 0x29) = 0x7468676965682e65;
  *(undefined8 *)((long)puVar41 + 0xb7) = 0x7468676965682e65;
  *(undefined8 *)((long)puVar41 + 0xaf) = 0x7a69536c6c756620;
  *(undefined8 *)(puVar41 + 0x13) = 0x632e5d3170657453;
  *(undefined8 *)(puVar41 + 0x11) = 0x6c766c5b72795076;
  *(undefined8 *)(puVar41 + 0x17) = 0x69772e657a69536e;
  *(undefined8 *)(puVar41 + 0x15) = 0x6977202b20736c6f;
  *(undefined8 *)(puVar41 + 0x1b) = 0x2e657a69536c6c75;
  *(undefined8 *)(puVar41 + 0x19) = 0x66203d3c20687464;
  *(undefined8 *)(puVar41 + 0x1f) = 0x2b20792e73666f20;
  *(undefined8 *)(puVar41 + 0x1d) = 0x2626206874646977;
  *(undefined8 *)(puVar41 + 3) = 0x657a69536e697720;
  *(undefined8 *)(puVar41 + 1) = 0x3d3e20782e73666f;
  *(undefined8 *)(puVar41 + 7) = 0x20792e73666f2026;
  *(undefined8 *)(puVar41 + 5) = 0x262068746469772e;
  *(undefined8 *)(puVar41 + 0xb) = 0x68676965682e657a;
  *(undefined8 *)(puVar41 + 9) = 0x69536e6977203d3e;
  *(undefined1 *)((long)puVar41 + 0xbf) = 0;
  *(undefined8 *)(puVar41 + 0xf) = 0x657270202b20782e;
  *(undefined8 *)(puVar41 + 0xd) = 0x73666f2026262074;
  FUN_109ac3188(0xffffff29,&uStack_4c0,&UNK_10f594bb4,&UNK_10f594b32,0x499);
LAB_109a27020:
                    /* WARNING: Does not return */
  pcVar36 = (code *)SoftwareBreakpoint(1,0x109a27024);
  (*pcVar36)();
}



/* Entry: 109a2734c; end: 109a27353;  */

void FUN_109a2734c(void)

{
  return;
}



/* Entry: 109a27354; end: 109a276db;  */

void FUN_109a27354(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  undefined4 *puVar9;
  long *plVar10;
  int *piVar11;
  long alStack_88 [11];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  FUN_109ab27e4(alStack_88 + 2,param_2,1,&puStack_30);
  (**(code **)(*param_1 + 0x38))(alStack_88,param_1);
  plVar8 = alStack_88 + 2;
  FUN_109ab2b2c(plVar8,alStack_88);
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  puVar9 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_30 = puVar9 + 1;
  uStack_28 = 1;
  *(undefined1 *)((long)puVar9 + 5) = 0;
  *(undefined1 *)puStack_30 = 0x7b;
  FUN_109ab2b2c(plVar8,&puStack_30);
  puVar9 = puStack_30;
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar11 = puVar9 + -1;
    do {
      iVar3 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  lVar6 = alStack_88[0];
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  if (lVar6 != 0) {
    piVar11 = (int *)(lVar6 + -4);
    do {
      iVar3 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(lVar6 + -0xc));
    }
  }
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  puVar9 = (undefined4 *)0xc;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_30 = puVar9 + 1;
  uStack_28 = 6;
  *(undefined1 *)((long)puVar9 + 10) = 0;
  *(undefined2 *)(puVar9 + 2) = 0x7461;
  puVar9[1] = 0x6d726f66;
  plVar8 = alStack_88 + 2;
  FUN_109ab2b2c(plVar8,&puStack_30);
  puVar9 = puStack_30;
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar11 = puVar9 + -1;
    do {
      iVar3 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  plVar10 = plVar8;
  (**(code **)(*plVar8 + 0x18))();
  if ((int)plVar10 != 0) {
    if ((int)plVar8[8] == 6) {
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_30 = puVar9 + 1;
      uStack_28 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x20656d616e20746e;
      *(undefined8 *)(puVar9 + 1) = 0x656d656c65206f4e;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x6e65766967206e65;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x6562207361682065;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f594c91,&UNK_10f594c9c,0x428);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x109a275e4);
      (*pcVar7)();
    }
    puVar1 = &UNK_10f5995ac;
    if ((undefined *)plVar8[3] != (undefined *)0x0) {
      puVar1 = (undefined *)plVar8[3];
    }
    puVar2 = (undefined *)0x0;
    if (plVar8[4] != 0) {
      puVar2 = puVar1;
    }
    FUN_109aac30c(plVar8[2],puVar2,3);
    if ((*(byte *)(plVar8 + 8) >> 2 & 1) != 0) {
      *(undefined4 *)(plVar8 + 8) = 6;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,alStack_88 + 2);
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  puVar9 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_30 = puVar9 + 1;
  uStack_28 = 1;
  *(undefined2 *)(puVar9 + 1) = 0x7d;
  FUN_109ab2b2c(alStack_88 + 2,&puStack_30);
  puVar9 = puStack_30;
  puStack_30 = (undefined4 *)0x0;
  uStack_28 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar11 = puVar9 + -1;
    do {
      iVar3 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar9 + -3));
    }
  }
  FUN_109ab28f4(alStack_88 + 2);
  return;
}



/* Entry: 109a276dc; end: 109a27727;  */

void FUN_109a276dc(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x10;
  func_0x000107c2ae8c();
  *puVar1 = 1;
  *(undefined2 *)(puVar1 + 3) = 0x74;
  *(undefined8 *)(puVar1 + 1) = 0x63656a626f5f796d;
  *param_1 = puVar1 + 1;
  param_1[1] = 9;
  return;
}



/* Entry: 109a27728; end: 109a27737;  */

void FUN_109a27728(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



/* Entry: 109a27738; end: 109a278ff;  */

void FUN_109a27738(uint *param_1,uint param_2,undefined1 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = (ulong)param_1[1];
  if ((int)param_1[1] < 3) {
    iVar10 = param_1[3] * param_1[2];
  }
  else {
    iVar10 = 1;
    piVar6 = *(int **)(param_1 + 0x10);
    do {
      iVar10 = *piVar6 * iVar10;
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  uVar2 = param_2 >> 3 & 0x1ff;
  param_2 = param_2 & 7;
  iVar1 = iVar10;
  if ((int)uVar2 < iVar10) {
    iVar1 = uVar2 + 1;
  }
  uStack_50 = (undefined8 *)CONCAT44(1,iVar1);
  (*(code *)(&PTR_FUN_110b21620)[(ulong)param_2 * 8 + ((ulong)*param_1 & 7)])
            (*(undefined8 *)(param_1 + 4),1,0,1,param_3,1,&uStack_50,0);
  uVar5 = (ulong)(uVar2 + 1) << (0xfa50U >> (ulong)(param_2 << 1) & 3);
  if (iVar10 <= (int)uVar2) {
    if (iVar10 != 1) {
      puVar4 = (undefined4 *)0x10;
      func_0x000107c2ae8c();
      *puVar4 = 1;
      uStack_50 = (undefined8 *)(puVar4 + 1);
      *uStack_50 = 0x31203d3d206e6373;
      uStack_48 = 8;
      *(undefined1 *)(puVar4 + 3) = 0;
      FUN_109ac3188(0xffffff29,&uStack_50,&UNK_10f594ddb,&UNK_10f594df2,0x44);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109a278d4);
      (*pcVar3)();
    }
    uVar7 = (ulong)(0x88442211 >> (param_2 << 2)) & 0xf;
    lVar8 = uVar5 - uVar7;
    puVar9 = param_3;
    if (uVar7 <= uVar5 && lVar8 != 0) {
      do {
        puVar9[uVar7] = *puVar9;
        lVar8 = lVar8 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
    }
  }
  if (uVar5 <= param_4 * uVar5 && param_4 * uVar5 - uVar5 != 0) {
    lVar8 = (param_4 + -1) * uVar5;
    do {
      param_3[uVar5] = *param_3;
      param_3 = param_3 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 109a27900; end: 109a279fb;  */

void FUN_109a27900(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + uVar7);
          uVar9 = puVar1[1];
          uVar8 = *puVar1;
          uVar11 = puVar1[3];
          uVar10 = puVar1[2];
          puVar1 = (undefined8 *)(param_3 + uVar7);
          uVar13 = puVar1[1];
          uVar12 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & (byte)((ulong)uVar9 >> 0x38),
                               CONCAT16((byte)((ulong)uVar13 >> 0x30) & (byte)((ulong)uVar9 >> 0x30)
                                        ,CONCAT15((byte)((ulong)uVar13 >> 0x28) &
                                                  (byte)((ulong)uVar9 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar13 >> 0x20) &
                                                           (byte)((ulong)uVar9 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar13 >> 0x18) &
                                                                    (byte)((ulong)uVar9 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar13 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar9 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) & (byte)((ulong)uVar9 >> 8),
                                                  (byte)uVar13 & (byte)uVar9)))))));
          *puVar1 = CONCAT17((byte)((ulong)uVar12 >> 0x38) & (byte)((ulong)uVar8 >> 0x38),
                             CONCAT16((byte)((ulong)uVar12 >> 0x30) & (byte)((ulong)uVar8 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                               (byte)((ulong)uVar8 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                        (byte)((ulong)uVar8 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar12 >> 0x18) &
                                                                 (byte)((ulong)uVar8 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar12 >>
                                                                                0x10) &
                                                                          (byte)((ulong)uVar8 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar12 >> 8) & (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar12 & (byte)uVar8)))))));
          puVar1[3] = CONCAT17((byte)((ulong)uVar15 >> 0x38) & (byte)((ulong)uVar11 >> 0x38),
                               CONCAT16((byte)((ulong)uVar15 >> 0x30) &
                                        (byte)((ulong)uVar11 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar15 >> 0x28) &
                                                 (byte)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) &
                                                          (byte)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) &
                                                                   (byte)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) & (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 & (byte)uVar11)))))));
          puVar1[2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & (byte)((ulong)uVar10 >> 0x38),
                               CONCAT16((byte)((ulong)uVar14 >> 0x30) &
                                        (byte)((ulong)uVar10 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar14 >> 0x28) &
                                                 (byte)((ulong)uVar10 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) &
                                                          (byte)((ulong)uVar10 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) &
                                                                   (byte)((ulong)uVar10 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar14 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar10 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) & (byte)((ulong)uVar10 >> 8),
                                                  (byte)uVar14 & (byte)uVar10)))))));
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pbVar2 = (byte *)(param_1 + uVar7);
          pbVar3 = (byte *)(param_3 + uVar7);
          bVar5 = pbVar2[1];
          bVar6 = pbVar3[1];
          pbVar4 = (byte *)(param_5 + uVar7);
          *pbVar4 = *pbVar3 & *pbVar2;
          pbVar4[1] = bVar6 & bVar5;
          bVar5 = pbVar2[3];
          bVar6 = pbVar3[3];
          pbVar4[2] = pbVar3[2] & pbVar2[2];
          pbVar4[3] = bVar6 & bVar5;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          *(byte *)(param_5 + uVar7) = *(byte *)(param_3 + uVar7) & *(byte *)(param_1 + uVar7);
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a279fc; end: 109a28f7b;  */

void FUN_109a279fc(uint *param_1,uint *param_2,uint *param_3,uint *param_4,undefined8 *param_5,
                  int param_6,int param_7)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  long lVar20;
  int iVar21;
  code *pcVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  bool bVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  uint uStack_720;
  code *pcStack_700;
  int aiStack_6f8 [2];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  undefined4 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  ulong uStack_560;
  undefined8 *puStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_1;
  uVar6 = *param_2;
  puVar31 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar13 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar11 = (uint)puVar13;
  puVar14 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  puVar15 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  if ((int)puVar14 < 3) {
    FUN_109a8b004(&uStack_570,param_1,0xffffffff);
  }
  else {
    uStack_570 = (undefined8 *)0x0;
  }
  if ((int)puVar15 < 3) {
    FUN_109a8b004(&uStack_578,param_2,0xffffffff);
  }
  else {
    uStack_578 = (undefined8 *)0x0;
  }
  puVar16 = param_4;
  FUN_109a8e1c4();
  uVar5 = uVar5 & 0x1f0000;
  uVar6 = uVar6 & 0x1f0000;
  uVar30 = (uint)puVar31;
  uStack_720 = uVar30 & 7;
  uVar8 = uVar30 >> 3 & 0x1ff;
  iVar35 = uVar8 + 1;
  uVar24 = (uint)puVar16;
  iVar34 = iVar35;
  if (((int)puVar14 < 3 && (int)puVar15 < 3) && (uVar5 == uVar6)) {
    if (((((int)uStack_570 == (int)uStack_578 && uStack_570._4_4_ == uStack_578._4_4_) &&
         uVar30 == uVar11) & uVar24) != 1) goto LAB_109a27f60;
    uStack_520 = uStack_570;
    FUN_109a8ee3c(param_3,&uStack_520,puVar31,0xffffffff,0,0);
    if (param_6 == 0) {
      puVar18 = param_5 + uStack_720;
    }
    else {
      puVar18 = param_5;
      iVar34 = iVar35 << (ulong)(0xfa50U >> (ulong)((uVar30 & 7) << 1) & 3);
    }
    pcVar22 = (code *)*puVar18;
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar18 = *(undefined8 **)(param_1 + 2);
      uStack_4e0 = (ulong)&uStack_520 | 8;
      uStack_518 = (undefined8 *)puVar18[1];
      uStack_520 = (undefined8 *)*puVar18;
      uStack_508 = puVar18[3];
      uStack_510 = puVar18[2];
      uStack_4f8 = puVar18[5];
      uStack_500 = puVar18[4];
      lStack_4e8 = puVar18[7];
      uStack_4f0 = puVar18[6];
      puStack_4d8 = &uStack_4d0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      if (puVar18[7] != 0) {
        piVar1 = (int *)(puVar18[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar18 + 4) < 3) {
        uStack_4d0 = *(undefined8 *)puVar18[9];
        uStack_4c8 = ((undefined8 *)puVar18[9])[1];
      }
      else {
        uStack_520 = (undefined8 *)((ulong)uStack_520 & 0xffffffff);
        func_0x000109a84868(&uStack_520);
      }
    }
    else {
      FUN_109a8a180(&uStack_520,param_1,0xffffffff);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar19 = *(ulong **)(param_2 + 2);
      puStack_f8 = (undefined8 *)puVar19[1];
      uStack_100 = *puVar19;
      uStack_e8 = puVar19[3];
      uStack_f0 = puVar19[2];
      uStack_d8 = puVar19[5];
      uStack_e0 = puVar19[4];
      uStack_c8 = puVar19[7];
      uStack_d0 = puVar19[6];
      uStack_c0 = (ulong)&uStack_100 | 8;
      puStack_b8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (puVar19[7] != 0) {
        piVar1 = (int *)(puVar19[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar19 + 4) < 3) {
        uStack_b0 = *(undefined8 *)puVar19[9];
        uStack_a8 = ((undefined8 *)puVar19[9])[1];
      }
      else {
        uStack_100 = uStack_100 & 0xffffffff;
        func_0x000109a84868(&uStack_100);
      }
    }
    else {
      FUN_109a8a180(&uStack_100,param_2,0xffffffff);
    }
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar19 = *(ulong **)(param_3 + 2);
      uStack_5a0 = (ulong)&uStack_5e0 | 8;
      uStack_5d8 = puVar19[1];
      uStack_5e0 = *puVar19;
      uStack_5c8 = puVar19[3];
      uStack_5d0 = puVar19[2];
      uStack_5b8 = puVar19[5];
      uStack_5c0 = puVar19[4];
      uStack_5a8 = puVar19[7];
      uStack_5b0 = puVar19[6];
      puStack_598 = &uStack_590;
      uStack_590 = 0;
      uStack_588 = 0;
      if (puVar19[7] != 0) {
        piVar1 = (int *)(puVar19[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar19 + 4) < 3) {
        uStack_590 = *(undefined8 *)puVar19[9];
        uStack_588 = ((undefined8 *)puVar19[9])[1];
      }
      else {
        uStack_5e0 = uStack_5e0 & 0xffffffff;
        func_0x000109a84868(&uStack_5e0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5e0,param_3,0xffffffff);
    }
    iVar21 = uStack_518._4_4_;
    iVar4 = (int)uStack_518;
    if (((((uint)uStack_520 & (uint)uStack_100 & (uint)uStack_5e0) >> 0xe & 1) != 0) &&
       (iVar23 = (int)((long)(int)uStack_518 * (long)uStack_518._4_4_),
       (long)iVar23 == (long)(int)uStack_518 * (long)uStack_518._4_4_)) {
      iVar21 = iVar23;
      iVar4 = 1;
    }
    lVar20 = (long)iVar34 * (long)iVar21;
    if (lVar20 - (int)lVar20 != 0) {
      if (uStack_5a8 != 0) {
        piVar1 = (int *)(uStack_5a8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_5e0);
        }
      }
      uStack_5a8 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      if (0 < uStack_5e0._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_5e0._4_4_);
      }
      if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
        _free(puStack_598[-1]);
      }
      if (uStack_c8 != 0) {
        piVar1 = (int *)(uStack_c8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_100);
        }
      }
      uStack_c8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (0 < uStack_100._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_100._4_4_);
      }
      if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
        _free(puStack_b8[-1]);
      }
      if (lStack_4e8 != 0) {
        piVar1 = (int *)(lStack_4e8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_520);
        }
      }
      lStack_4e8 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (0 < uStack_520._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_4e0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_520._4_4_);
      }
      if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
        _free(puStack_4d8[-1]);
      }
      goto LAB_109a27f60;
    }
    (*pcVar22)(uStack_510,uStack_4d0,uStack_f0,uStack_b0,uStack_5d0,uStack_590,lVar20,iVar4,0);
    if (uStack_5a8 != 0) {
      piVar1 = (int *)(uStack_5a8 + 0x14);
      do {
        iVar35 = *piVar1;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar35 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e0);
      }
    }
    uStack_5a8 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    if (0 < uStack_5e0._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_5e0._4_4_);
    }
    if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
      _free(puStack_598[-1]);
    }
    if (uStack_c8 != 0) {
      piVar1 = (int *)(uStack_c8 + 0x14);
      do {
        iVar35 = *piVar1;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar35 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (0 < uStack_100._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_100._4_4_);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    if (lStack_4e8 != 0) {
      piVar1 = (int *)(lStack_4e8 + 0x14);
      do {
        iVar35 = *piVar1;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar35 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_520);
      }
    }
    lStack_4e8 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    if (0 < uStack_520._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_4e0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_520._4_4_);
    }
    if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
      _free(puStack_4d8[-1]);
    }
LAB_109a28ae0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a27f60:
    puVar14 = param_1;
    if (param_7 == 0xc) {
LAB_109a27f6c:
      bVar26 = true;
    }
    else {
      if ((uVar5 == 0x20000) != (uVar6 == 0x20000)) {
LAB_109a27fd0:
        puVar15 = param_1;
        FUN_109a8d7e8(param_1,0xffffffff);
        if (((int)puVar15 < 3) &&
           (puVar15 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar15 != 0)) {
          FUN_109a8b004(&uStack_520,param_1,0xffffffff);
          if ((uStack_520._4_4_ == 1 || (uint)uStack_520 == 1) &&
             (uVar5 == 0x20000 || uVar6 != 0x20000)) {
            uVar30 = uVar11 >> 3 & 0x1ff;
            iVar4 = uVar30 + 1;
            if ((((uint)uStack_520 == 1 && (uStack_520._4_4_ == iVar4 || uStack_520._4_4_ == 1)) ||
                (uStack_520._4_4_ == 1 && (uint)uStack_520 == iVar4)) ||
               (((uint)uStack_520 == 1 &&
                (((uStack_520._4_4_ == 4 &&
                  (puVar15 = param_1, FUN_109a8b904(param_1,0xffffffff), uVar30 < 4)) &&
                 ((int)puVar15 == 6)))))) {
              puVar18 = uStack_578;
              puVar31 = (uint *)((ulong)puVar13 & 0xffffffff);
              uStack_720 = uVar11 & 7;
              uStack_578 = uStack_570;
              uStack_570 = puVar18;
              bVar26 = true;
              puVar14 = param_2;
              param_2 = param_1;
              iVar35 = iVar4;
              iVar34 = iVar4;
              goto LAB_109a28184;
            }
          }
        }
        puVar13 = param_2;
        FUN_109a8d7e8(param_2,0xffffffff);
        if (((int)puVar13 < 3) &&
           (puVar13 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar13 != 0)) {
          FUN_109a8b004(&uStack_520,param_2,0xffffffff);
          if ((uStack_520._4_4_ == 1 || (uint)uStack_520 == 1) &&
             (uVar6 == 0x20000 || uVar5 != 0x20000)) {
            if (((uint)uStack_520 == 1 && (uStack_520._4_4_ == iVar35 || uStack_520._4_4_ == 1)) ||
               (uStack_520._4_4_ == 1 && (uint)uStack_520 == iVar35)) goto LAB_109a27f6c;
            if (((uint)uStack_520 == 1) &&
               (((uStack_520._4_4_ == 4 &&
                 (puVar13 = param_2, FUN_109a8b904(param_2,0xffffffff), uVar8 < 4)) &&
                ((int)puVar13 == 6)))) {
              bVar26 = true;
              goto LAB_109a28184;
            }
          }
        }
        puVar17 = (undefined4 *)0x88;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        uStack_520 = (undefined8 *)(puVar17 + 1);
        uStack_518 = (undefined8 *)0x82;
        *(undefined8 *)(puVar17 + 0x13) = 0x7420646e6120657a;
        *(undefined8 *)(puVar17 + 0x11) = 0x697320656d617320;
        *(undefined8 *)(puVar17 + 0x17) = 0x7961727261272072;
        *(undefined8 *)(puVar17 + 0x15) = 0x6f6e202c29657079;
        *(undefined8 *)(puVar17 + 0x1b) = 0x726f6e202c277261;
        *(undefined8 *)(puVar17 + 0x19) = 0x6c61637320706f20;
        *(undefined8 *)(puVar17 + 0x1f) = 0x6172726120706f20;
        *(undefined8 *)(puVar17 + 0x1d) = 0x72616c6163732720;
        *(undefined8 *)(puVar17 + 3) = 0x7369206e6f697461;
        *(undefined8 *)(puVar17 + 1) = 0x7265706f20656854;
        *(undefined8 *)(puVar17 + 7) = 0x2079617272612720;
        *(undefined8 *)(puVar17 + 5) = 0x7265687469656e20;
        *(undefined8 *)(puVar17 + 0xb) = 0x6572656877282027;
        *(undefined8 *)(puVar17 + 9) = 0x796172726120706f;
        *(undefined1 *)((long)puVar17 + 0x86) = 0;
        *(undefined2 *)(puVar17 + 0x21) = 0x2779;
        *(undefined8 *)(puVar17 + 0xf) = 0x6568742065766168;
        *(undefined8 *)(puVar17 + 0xd) = 0x2073796172726120;
        FUN_109ac3188(0xffffff2f,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xe1);
        goto LAB_109a28e18;
      }
      puVar15 = param_1;
      FUN_109a8d584(param_1,param_2);
      uVar12 = 0;
      if (uVar30 == uVar11) {
        uVar12 = (uint)puVar15;
      }
      if ((uVar12 & 1) == 0) goto LAB_109a27fd0;
      FUN_109a8d584(param_1,param_2);
      if (((ulong)param_1 & 1) == 0) {
        puVar17 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        uStack_520 = (undefined8 *)(puVar17 + 1);
        uStack_518 = (undefined8 *)0x29;
        *(undefined1 *)((long)puVar17 + 0x2d) = 0;
        *(undefined8 *)(puVar17 + 3) = 0x28657a6953656d61;
        *(undefined8 *)(puVar17 + 1) = 0x733e2d3163727370;
        *(undefined8 *)(puVar17 + 7) = 0x3165707974202626;
        *(undefined8 *)(puVar17 + 5) = 0x202932637273702a;
        *(undefined8 *)((long)puVar17 + 0x25) = 0x3265707974203d3d;
        *(undefined8 *)((long)puVar17 + 0x1d) = 0x2031657079742026;
        FUN_109ac3188(0xffffff29,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xe6);
        goto LAB_109a28e18;
      }
      bVar26 = false;
    }
LAB_109a28184:
    uVar5 = iVar35 << (ulong)(0xfa50U >> (ulong)(((uint)puVar31 & 7) << 1) & 3);
    uStack_5e8 = (ulong)uVar5;
    if (((ulong)puVar16 & 1) != 0) {
      pcStack_700 = (code *)0x0;
      bVar10 = true;
LAB_109a2823c:
      uStack_518 = (undefined8 *)0x408;
      puVar13 = puVar14;
      uStack_520 = &uStack_510;
      FUN_109a8d1f0(puVar14,&uStack_100,0xffffffff);
      FUN_109a8727c(param_3,puVar13,&uStack_100,puVar31,0xffffffff,0,0);
      if (!bVar10) {
        uStack_650 = 0;
        uStack_100 = CONCAT44(uStack_100._4_4_,0xc1020006);
        puStack_f8 = &uStack_650;
        uStack_f0 = 0x100000001;
        uStack_5e0 = uStack_5e0 & 0xffffffff00000000;
        uStack_5d8 = 0;
        uStack_5d0 = 0;
        FUN_109a9168c(param_3,&uStack_100,&uStack_5e0);
      }
      if ((*puVar14 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(puVar14 + 2);
        puStack_f8 = (undefined8 *)puVar19[1];
        uStack_100 = *puVar19;
        uStack_e8 = puVar19[3];
        uStack_f0 = puVar19[2];
        uStack_d8 = puVar19[5];
        uStack_e0 = puVar19[4];
        uStack_c8 = puVar19[7];
        uStack_d0 = puVar19[6];
        uStack_c0 = (ulong)&uStack_100 | 8;
        puStack_b8 = &uStack_b0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        if (puVar19[7] != 0) {
          piVar1 = (int *)(puVar19[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_b0 = *(undefined8 *)puVar19[9];
          uStack_a8 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_100 = uStack_100 & 0xffffffff;
          func_0x000109a84868(&uStack_100);
        }
      }
      else {
        FUN_109a8a180(&uStack_100,puVar14,0xffffffff);
      }
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(param_2 + 2);
        uStack_5a0 = (ulong)&uStack_5e0 | 8;
        uStack_5d8 = puVar19[1];
        uStack_5e0 = *puVar19;
        uStack_5c8 = puVar19[3];
        uStack_5d0 = puVar19[2];
        uStack_5b8 = puVar19[5];
        uStack_5c0 = puVar19[4];
        uStack_5a8 = puVar19[7];
        uStack_5b0 = puVar19[6];
        puStack_598 = &uStack_590;
        uStack_590 = 0;
        uStack_588 = 0;
        if (puVar19[7] != 0) {
          piVar1 = (int *)(puVar19[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_590 = *(undefined8 *)puVar19[9];
          uStack_588 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_5e0 = uStack_5e0 & 0xffffffff;
          func_0x000109a84868(&uStack_5e0);
        }
      }
      else {
        FUN_109a8a180(&uStack_5e0,param_2,0xffffffff);
      }
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(param_3 + 2);
        uStack_610 = (ulong)&uStack_650 | 8;
        uStack_648 = puVar19[1];
        uStack_650 = *puVar19;
        uStack_638 = puVar19[3];
        uStack_640 = puVar19[2];
        uStack_628 = puVar19[5];
        uStack_630 = puVar19[4];
        uStack_618 = puVar19[7];
        uStack_620 = puVar19[6];
        puStack_608 = &uStack_600;
        uStack_600 = 0;
        uStack_5f8 = 0;
        if (puVar19[7] != 0) {
          piVar1 = (int *)(puVar19[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_600 = *(undefined8 *)puVar19[9];
          uStack_5f8 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_650 = uStack_650 & 0xffffffff;
          func_0x000109a84868(&uStack_650);
        }
      }
      else {
        FUN_109a8a180(&uStack_650,param_3,0xffffffff);
      }
      if ((*param_4 & 0x1f0000) == 0x10000) {
        puVar19 = *(ulong **)(param_4 + 2);
        uStack_670 = (ulong)&uStack_6b0 | 8;
        uStack_6a8 = puVar19[1];
        uStack_6b0 = *puVar19;
        uStack_698 = puVar19[3];
        uStack_6a0 = puVar19[2];
        uStack_688 = puVar19[5];
        uStack_690 = puVar19[4];
        uStack_678 = puVar19[7];
        uStack_680 = puVar19[6];
        puStack_668 = &uStack_660;
        uStack_660 = 0;
        uStack_658 = 0;
        if (puVar19[7] != 0) {
          piVar1 = (int *)(puVar19[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar19 + 4) < 3) {
          uStack_660 = *(undefined8 *)puVar19[9];
          uStack_658 = ((undefined8 *)puVar19[9])[1];
        }
        else {
          uStack_6b0 = uStack_6b0 & 0xffffffff;
          func_0x000109a84868(&uStack_6b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_6b0,param_4,0xffffffff);
      }
      iVar35 = (int)uStack_5e8;
      if (param_6 == 0) {
        iVar35 = iVar34;
      }
      uVar25 = 0;
      if (param_6 == 0) {
        uVar25 = (ulong)uStack_720;
      }
      pcVar22 = (code *)param_5[uVar25];
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = (uVar5 + 0x3ff) / uVar5;
      }
      uVar25 = (ulong)uVar6;
      puStack_548 = &uStack_100;
      if (bVar26) {
        puStack_540 = &uStack_650;
        puStack_538 = &uStack_6b0;
        puStack_530 = (undefined8 *)0x0;
        uStack_6b8 = 0;
        uStack_6e8 = 0;
        uStack_6e0 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6c8 = 0;
        uStack_6c0 = 0;
        FUN_109a9b368(&uStack_6f0,&puStack_548,0,&lStack_568,0xffffffff);
        uVar9 = uStack_6c8;
        uVar32 = uStack_6c8;
        if (uVar25 <= uStack_6c8) {
          uVar32 = uVar25;
        }
        puVar28 = (undefined8 *)((uVar32 << ((ulong)(uVar24 ^ 1) & 0x3f)) * uStack_5e8 + 0x20);
        puVar18 = puVar28;
        if (uStack_518 < puVar28) {
          if (uStack_520 != &uStack_510) {
            if (uStack_520 != (undefined8 *)0x0) {
              __ZdaPv(uStack_520);
            }
            uStack_518 = (undefined8 *)0x408;
            uStack_520 = &uStack_510;
          }
          puVar18 = uStack_518;
          if ((undefined8 *)0x408 < puVar28) {
            puVar18 = puVar28;
            __Znam();
            uStack_520 = puVar18;
            puVar18 = puVar28;
          }
        }
        uStack_518 = puVar18;
        puVar18 = uStack_520;
        uVar25 = uStack_5e8;
        FUN_109a27738(&uStack_5e0,(uint)uStack_100 & 0xfff,uStack_520,uVar32);
        uVar29 = (long)puVar18 + uVar25 * uVar32 + 0xf & 0xfffffffffffffff0;
        for (uVar25 = 0; uVar25 < uStack_6d0; uVar25 = uVar25 + 1) {
          if (uVar9 != 0) {
            uVar33 = 0;
            do {
              uVar3 = uVar9 - uVar33;
              if (uVar32 <= uVar9 - uVar33) {
                uVar3 = uVar32;
              }
              uVar2 = uStack_560;
              if (uVar24 == 0) {
                uVar2 = uVar29;
              }
              iVar34 = (int)uVar3;
              (*pcVar22)(lStack_568,0,puVar18,0,uVar2,0,iVar35 * iVar34,1,0);
              if (((ulong)puVar16 & 1) == 0) {
                aiStack_6f8[1] = 1;
                aiStack_6f8[0] = iVar34;
                (*pcStack_700)(uVar29,0,puStack_558,0,uStack_560,0,aiStack_6f8,&uStack_5e8);
                puStack_558 = (undefined8 *)((long)puStack_558 + uVar3);
              }
              lStack_568 = lStack_568 + iVar34 * (int)uStack_5e8;
              uStack_560 = uStack_560 + (long)(iVar34 * (int)uStack_5e8);
              uVar33 = uVar33 + uVar32;
            } while (uVar33 < uVar9);
          }
          FUN_109a8350c(&uStack_6f0);
        }
      }
      else {
        puStack_540 = &uStack_5e0;
        puStack_538 = &uStack_650;
        puStack_530 = &uStack_6b0;
        uStack_528 = 0;
        uStack_6b8 = 0;
        uStack_6e8 = 0;
        uStack_6e0 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6c8 = 0;
        uStack_6c0 = 0;
        FUN_109a9b368(&uStack_6f0,&puStack_548,0,&lStack_568,0xffffffff);
        uVar9 = uStack_6c8;
        uVar32 = uStack_6c8;
        if (uStack_6c8 * (long)iVar35 >> 0x1f != 0) {
          iVar34 = 0;
          if (iVar35 != 0) {
            iVar34 = 0x7fffffff / iVar35;
          }
          uVar32 = (ulong)iVar34;
        }
        if (((ulong)puVar16 & 1) == 0) {
          if (uVar25 <= uVar32) {
            uVar32 = uVar25;
          }
          puVar27 = (undefined8 *)(uStack_5e8 * uVar32);
          puVar18 = uStack_520;
          puVar28 = puVar27;
          if (uStack_518 < puVar27) {
            if (uStack_520 != &uStack_510) {
              if (uStack_520 != (undefined8 *)0x0) {
                __ZdaPv(uStack_520);
              }
              uStack_518 = (undefined8 *)0x408;
              uStack_520 = &uStack_510;
            }
            puVar18 = uStack_520;
            puVar28 = uStack_518;
            if ((undefined8 *)0x408 < puVar27) {
              puVar18 = puVar27;
              __Znam();
              uStack_520 = puVar18;
              puVar28 = puVar27;
            }
          }
        }
        else {
          puVar18 = (undefined8 *)0x0;
          puVar28 = uStack_518;
        }
        uStack_518 = puVar28;
        for (uVar25 = 0; uVar25 < uStack_6d0; uVar25 = uVar25 + 1) {
          if (uVar9 != 0) {
            uVar29 = 0;
            uVar33 = uVar9;
            do {
              uVar3 = uVar33;
              if (uVar32 <= uVar33) {
                uVar3 = uVar32;
              }
              puVar28 = puStack_558;
              if (uVar24 == 0) {
                puVar28 = puVar18;
              }
              iVar34 = (int)uVar3;
              (*pcVar22)(lStack_568,0,uStack_560,0,puVar28,0,iVar35 * iVar34,1,0);
              if (uVar24 == 0) {
                aiStack_6f8[1] = 1;
                aiStack_6f8[0] = iVar34;
                (*pcStack_700)(puVar18,0,lStack_550,0,puStack_558,0,aiStack_6f8,&uStack_5e8);
                lStack_550 = lStack_550 + iVar34;
              }
              lVar20 = (long)(uStack_5e8 * (uVar3 << 0x20)) >> 0x20;
              lStack_568 = lStack_568 + lVar20;
              uStack_560 = uStack_560 + lVar20;
              puStack_558 = (undefined8 *)((long)puStack_558 + lVar20);
              uVar29 = uVar29 + uVar32;
              uVar33 = uVar33 - uVar32;
            } while (uVar29 < uVar9);
          }
          FUN_109a8350c(&uStack_6f0);
        }
      }
      if (uStack_678 != 0) {
        piVar1 = (int *)(uStack_678 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_6b0);
        }
      }
      uStack_678 = 0;
      uStack_698 = 0;
      uStack_6a0 = 0;
      uStack_688 = 0;
      uStack_690 = 0;
      if (0 < uStack_6b0._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_670 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_6b0._4_4_);
      }
      if (puStack_668 != &uStack_660 && puStack_668 != (undefined8 *)0x0) {
        _free(puStack_668[-1]);
      }
      if (uStack_618 != 0) {
        piVar1 = (int *)(uStack_618 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_650);
        }
      }
      uStack_618 = 0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_628 = 0;
      uStack_630 = 0;
      if (0 < uStack_650._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_610 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_650._4_4_);
      }
      if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
        _free(puStack_608[-1]);
      }
      if (uStack_5a8 != 0) {
        piVar1 = (int *)(uStack_5a8 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_5e0);
        }
      }
      uStack_5a8 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      if (0 < uStack_5e0._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_5e0._4_4_);
      }
      if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
        _free(puStack_598[-1]);
      }
      if (uStack_c8 != 0) {
        piVar1 = (int *)(uStack_c8 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_100);
        }
      }
      uStack_c8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (0 < uStack_100._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_100._4_4_);
      }
      if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
        _free(puStack_b8[-1]);
      }
      if (uStack_520 != &uStack_510 && uStack_520 != (undefined8 *)0x0) {
        __ZdaPv();
      }
      goto LAB_109a28ae0;
    }
    puVar13 = param_4;
    FUN_109a8b904(param_4,0xffffffff);
    if (((uint)puVar13 < 2) &&
       (puVar13 = param_4, FUN_109a8d584(param_4,puVar14), ((ulong)puVar13 & 1) != 0)) {
      pcStack_700 = (code *)0x109a47910;
      if (uStack_5e8 < 0x21) {
        pcVar22 = *(code **)(uStack_5e8 * 8 + 0x1132e8de8);
        pcStack_700 = (code *)0x109a47910;
        if (pcVar22 != (code *)0x0) {
          pcStack_700 = pcVar22;
        }
      }
      puVar13 = param_3;
      FUN_109a8d584(param_3,puVar14);
      if ((int)puVar13 == 0) {
        bVar10 = false;
      }
      else {
        puVar13 = param_3;
        FUN_109a8b904(param_3,0xffffffff);
        bVar10 = (uint)puVar13 == (uint)puVar31;
      }
      goto LAB_109a2823c;
    }
  }
  puVar17 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar17 = 1;
  uStack_520 = (undefined8 *)(puVar17 + 1);
  uStack_518 = (undefined8 *)0x3c;
  *(undefined8 *)(puVar17 + 3) = 0x2055385f5643203d;
  *(undefined8 *)(puVar17 + 1) = 0x3d20657079746d28;
  *(undefined1 *)(puVar17 + 0x10) = 0;
  *(undefined8 *)(puVar17 + 7) = 0x385f5643203d3d20;
  *(undefined8 *)(puVar17 + 5) = 0x657079746d207c7c;
  *(undefined8 *)(puVar17 + 0xb) = 0x656d61732e6b7361;
  *(undefined8 *)(puVar17 + 9) = 0x6d5f202626202953;
  *(undefined8 *)(puVar17 + 0xe) = 0x2931637273702a28;
  *(undefined8 *)(puVar17 + 0xc) = 0x657a6953656d6173;
  FUN_109ac3188(0xffffff29,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xf1);
LAB_109a28e18:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x109a28e1c);
  (*pcVar22)();
}



/* Entry: 109a28f7c; end: 109a2924b;  */

void FUN_109a28f7c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + uVar7);
          uVar9 = puVar1[1];
          uVar8 = *puVar1;
          uVar11 = puVar1[3];
          uVar10 = puVar1[2];
          puVar1 = (undefined8 *)(param_3 + uVar7);
          uVar13 = puVar1[1];
          uVar12 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = CONCAT17((byte)((ulong)uVar13 >> 0x38) | (byte)((ulong)uVar9 >> 0x38),
                               CONCAT16((byte)((ulong)uVar13 >> 0x30) | (byte)((ulong)uVar9 >> 0x30)
                                        ,CONCAT15((byte)((ulong)uVar13 >> 0x28) |
                                                  (byte)((ulong)uVar9 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar13 >> 0x20) |
                                                           (byte)((ulong)uVar9 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar13 >> 0x18) |
                                                                    (byte)((ulong)uVar9 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar13 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar9 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) | (byte)((ulong)uVar9 >> 8),
                                                  (byte)uVar13 | (byte)uVar9)))))));
          *puVar1 = CONCAT17((byte)((ulong)uVar12 >> 0x38) | (byte)((ulong)uVar8 >> 0x38),
                             CONCAT16((byte)((ulong)uVar12 >> 0x30) | (byte)((ulong)uVar8 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar12 >> 0x28) |
                                               (byte)((ulong)uVar8 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar12 >> 0x20) |
                                                        (byte)((ulong)uVar8 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar12 >> 0x18) |
                                                                 (byte)((ulong)uVar8 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar12 >>
                                                                                0x10) |
                                                                          (byte)((ulong)uVar8 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar12 >> 8) | (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar12 | (byte)uVar8)))))));
          puVar1[3] = CONCAT17((byte)((ulong)uVar15 >> 0x38) | (byte)((ulong)uVar11 >> 0x38),
                               CONCAT16((byte)((ulong)uVar15 >> 0x30) |
                                        (byte)((ulong)uVar11 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar15 >> 0x28) |
                                                 (byte)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) |
                                                          (byte)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) |
                                                                   (byte)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) | (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 | (byte)uVar11)))))));
          puVar1[2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) | (byte)((ulong)uVar10 >> 0x38),
                               CONCAT16((byte)((ulong)uVar14 >> 0x30) |
                                        (byte)((ulong)uVar10 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar14 >> 0x28) |
                                                 (byte)((ulong)uVar10 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar14 >> 0x20) |
                                                          (byte)((ulong)uVar10 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar14 >> 0x18) |
                                                                   (byte)((ulong)uVar10 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar14 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar10 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) | (byte)((ulong)uVar10 >> 8),
                                                  (byte)uVar14 | (byte)uVar10)))))));
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pbVar2 = (byte *)(param_1 + uVar7);
          pbVar3 = (byte *)(param_3 + uVar7);
          bVar5 = pbVar2[1];
          bVar6 = pbVar3[1];
          pbVar4 = (byte *)(param_5 + uVar7);
          *pbVar4 = *pbVar3 | *pbVar2;
          pbVar4[1] = bVar6 | bVar5;
          bVar5 = pbVar2[3];
          bVar6 = pbVar3[3];
          pbVar4[2] = pbVar3[2] | pbVar2[2];
          pbVar4[3] = bVar6 | bVar5;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          *(byte *)(param_5 + uVar7) = *(byte *)(param_3 + uVar7) | *(byte *)(param_1 + uVar7);
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2924c; end: 109a292eb;  */

/* WARNING: Removing unreachable block (ram,0x000109a27b80) */

void FUN_109a2924c(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  long lVar20;
  int iVar21;
  code *pcVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  bool bVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  uint uStack_720;
  code *pcStack_700;
  int aiStack_6f8 [2];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  undefined4 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  ulong uStack_560;
  undefined8 *puStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  
  puVar17 = param_1;
  FUN_109a91d90();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_1;
  uVar5 = *param_2;
  puVar31 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar12 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar10 = (uint)puVar12;
  puVar13 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  puVar14 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  if ((int)puVar13 < 3) {
    FUN_109a8b004(&uStack_570,param_1,0xffffffff);
  }
  else {
    uStack_570 = (undefined8 *)0x0;
  }
  if ((int)puVar14 < 3) {
    FUN_109a8b004(&uStack_578,param_2,0xffffffff);
  }
  else {
    uStack_578 = (undefined8 *)0x0;
  }
  puVar15 = puVar17;
  FUN_109a8e1c4();
  uVar4 = uVar4 & 0x1f0000;
  uVar5 = uVar5 & 0x1f0000;
  uVar30 = (uint)puVar31;
  uStack_720 = uVar30 & 7;
  uVar7 = uVar30 >> 3 & 0x1ff;
  uVar35 = uVar7 + 1;
  uVar24 = (uint)puVar15;
  if (((int)puVar13 < 3 && (int)puVar14 < 3) && (uVar4 == uVar5)) {
    if (((((int)uStack_570 == (int)uStack_578 && uStack_570._4_4_ == uStack_578._4_4_) &&
         uVar30 == uVar10) & uVar24) != 1) goto LAB_109a27f60;
    uStack_520 = uStack_570;
    FUN_109a8ee3c(param_3,&uStack_520,puVar31,0xffffffff,0,0);
    pcVar22 = (code *)(&PTR_FUN_1132e8b50)[uStack_720];
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar18 = *(undefined8 **)(param_1 + 2);
      uStack_4e0 = (ulong)&uStack_520 | 8;
      uStack_518 = (undefined8 *)puVar18[1];
      uStack_520 = (undefined8 *)*puVar18;
      uStack_508 = puVar18[3];
      uStack_510 = puVar18[2];
      uStack_4f8 = puVar18[5];
      uStack_500 = puVar18[4];
      lStack_4e8 = puVar18[7];
      uStack_4f0 = puVar18[6];
      puStack_4d8 = &uStack_4d0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      if (puVar18[7] != 0) {
        piVar1 = (int *)(puVar18[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar18 + 4) < 3) {
        uStack_4d0 = *(undefined8 *)puVar18[9];
        uStack_4c8 = ((undefined8 *)puVar18[9])[1];
      }
      else {
        uStack_520 = (undefined8 *)((ulong)uStack_520 & 0xffffffff);
        func_0x000109a84868(&uStack_520);
      }
    }
    else {
      FUN_109a8a180(&uStack_520,param_1,0xffffffff);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar19 = *(ulong **)(param_2 + 2);
      puStack_f8 = (undefined8 *)puVar19[1];
      uStack_100 = *puVar19;
      uStack_e8 = puVar19[3];
      uStack_f0 = puVar19[2];
      uStack_d8 = puVar19[5];
      uStack_e0 = puVar19[4];
      uStack_c8 = puVar19[7];
      uStack_d0 = puVar19[6];
      uStack_c0 = (ulong)&uStack_100 | 8;
      puStack_b8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (puVar19[7] != 0) {
        piVar1 = (int *)(puVar19[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar19 + 4) < 3) {
        uStack_b0 = *(undefined8 *)puVar19[9];
        uStack_a8 = ((undefined8 *)puVar19[9])[1];
      }
      else {
        uStack_100 = uStack_100 & 0xffffffff;
        func_0x000109a84868(&uStack_100);
      }
    }
    else {
      FUN_109a8a180(&uStack_100,param_2,0xffffffff);
    }
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar19 = *(ulong **)(param_3 + 2);
      uStack_5a0 = (ulong)&uStack_5e0 | 8;
      uStack_5d8 = puVar19[1];
      uStack_5e0 = *puVar19;
      uStack_5c8 = puVar19[3];
      uStack_5d0 = puVar19[2];
      uStack_5b8 = puVar19[5];
      uStack_5c0 = puVar19[4];
      uStack_5a8 = puVar19[7];
      uStack_5b0 = puVar19[6];
      puStack_598 = &uStack_590;
      uStack_590 = 0;
      uStack_588 = 0;
      if (puVar19[7] != 0) {
        piVar1 = (int *)(puVar19[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar19 + 4) < 3) {
        uStack_590 = *(undefined8 *)puVar19[9];
        uStack_588 = ((undefined8 *)puVar19[9])[1];
      }
      else {
        uStack_5e0 = uStack_5e0 & 0xffffffff;
        func_0x000109a84868(&uStack_5e0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5e0,param_3,0xffffffff);
    }
    iVar21 = uStack_518._4_4_;
    iVar34 = (int)uStack_518;
    if (((((uint)uStack_520 & (uint)uStack_100 & (uint)uStack_5e0) >> 0xe & 1) != 0) &&
       (iVar23 = (int)((long)(int)uStack_518 * (long)uStack_518._4_4_),
       (long)iVar23 == (long)(int)uStack_518 * (long)uStack_518._4_4_)) {
      iVar21 = iVar23;
      iVar34 = 1;
    }
    lVar20 = (long)(int)uVar35 * (long)iVar21;
    if (lVar20 - (int)lVar20 != 0) {
      if (uStack_5a8 != 0) {
        piVar1 = (int *)(uStack_5a8 + 0x14);
        do {
          iVar34 = *piVar1;
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar34 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_5e0);
        }
      }
      uStack_5a8 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      if (0 < uStack_5e0._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_5e0._4_4_);
      }
      if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
        _free(puStack_598[-1]);
      }
      if (uStack_c8 != 0) {
        piVar1 = (int *)(uStack_c8 + 0x14);
        do {
          iVar34 = *piVar1;
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar34 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_100);
        }
      }
      uStack_c8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (0 < uStack_100._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_100._4_4_);
      }
      if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
        _free(puStack_b8[-1]);
      }
      if (lStack_4e8 != 0) {
        piVar1 = (int *)(lStack_4e8 + 0x14);
        do {
          iVar34 = *piVar1;
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = iVar34 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar34 + -1 == 0) {
          func_0x000109a848d4(&uStack_520);
        }
      }
      lStack_4e8 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (0 < (int)uStack_520._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_4e0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < (int)uStack_520._4_4_);
      }
      if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
        _free(puStack_4d8[-1]);
      }
      goto LAB_109a27f60;
    }
    (*pcVar22)(uStack_510,uStack_4d0,uStack_f0,uStack_b0,uStack_5d0,uStack_590,lVar20,iVar34,0);
    if (uStack_5a8 != 0) {
      piVar1 = (int *)(uStack_5a8 + 0x14);
      do {
        iVar34 = *piVar1;
        cVar6 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar34 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar34 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e0);
      }
    }
    uStack_5a8 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    if (0 < uStack_5e0._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_5e0._4_4_);
    }
    if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
      _free(puStack_598[-1]);
    }
    if (uStack_c8 != 0) {
      piVar1 = (int *)(uStack_c8 + 0x14);
      do {
        iVar34 = *piVar1;
        cVar6 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar34 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar34 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (0 < uStack_100._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_100._4_4_);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    if (lStack_4e8 != 0) {
      piVar1 = (int *)(lStack_4e8 + 0x14);
      do {
        iVar34 = *piVar1;
        cVar6 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = iVar34 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar34 + -1 == 0) {
        func_0x000109a848d4(&uStack_520);
      }
    }
    lStack_4e8 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    if (0 < (int)uStack_520._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_4e0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)uStack_520._4_4_);
    }
    if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
      _free(puStack_4d8[-1]);
    }
LAB_109a28ae0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
LAB_109a28d44:
    puVar16 = (undefined4 *)0x44;
    func_0x000107c2ae8c();
    *puVar16 = 1;
    uStack_520 = (undefined8 *)(puVar16 + 1);
    uStack_518 = (undefined8 *)0x3c;
    *(undefined8 *)(puVar16 + 3) = 0x2055385f5643203d;
    *(undefined8 *)(puVar16 + 1) = 0x3d20657079746d28;
    *(undefined1 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 7) = 0x385f5643203d3d20;
    *(undefined8 *)(puVar16 + 5) = 0x657079746d207c7c;
    *(undefined8 *)(puVar16 + 0xb) = 0x656d61732e6b7361;
    *(undefined8 *)(puVar16 + 9) = 0x6d5f202626202953;
    *(undefined8 *)(puVar16 + 0xe) = 0x2931637273702a28;
    *(undefined8 *)(puVar16 + 0xc) = 0x657a6953656d6173;
    FUN_109ac3188(0xffffff29,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xf1);
  }
  else {
LAB_109a27f60:
    puVar13 = param_1;
    if ((uVar4 == 0x20000) == (uVar5 == 0x20000)) {
      puVar14 = param_1;
      FUN_109a8d584(param_1,param_2);
      uVar11 = 0;
      if (uVar30 == uVar10) {
        uVar11 = (uint)puVar14;
      }
      if ((uVar11 & 1) == 0) goto LAB_109a27fd0;
      FUN_109a8d584(param_1,param_2);
      if (((ulong)param_1 & 1) == 0) {
        puVar16 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar16 = 1;
        uStack_520 = (undefined8 *)(puVar16 + 1);
        uStack_518 = (undefined8 *)0x29;
        *(undefined1 *)((long)puVar16 + 0x2d) = 0;
        *(undefined8 *)(puVar16 + 3) = 0x28657a6953656d61;
        *(undefined8 *)(puVar16 + 1) = 0x733e2d3163727370;
        *(undefined8 *)(puVar16 + 7) = 0x3165707974202626;
        *(undefined8 *)(puVar16 + 5) = 0x202932637273702a;
        *(undefined8 *)((long)puVar16 + 0x25) = 0x3265707974203d3d;
        *(undefined8 *)((long)puVar16 + 0x1d) = 0x2031657079742026;
        FUN_109ac3188(0xffffff29,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xe6);
        goto LAB_109a28e18;
      }
      bVar26 = false;
      goto LAB_109a28184;
    }
LAB_109a27fd0:
    puVar14 = param_1;
    FUN_109a8d7e8(param_1,0xffffffff);
    if (((int)puVar14 < 3) &&
       (puVar14 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar14 != 0)) {
      FUN_109a8b004(&uStack_520,param_1,0xffffffff);
      if ((uStack_520._4_4_ == 1 || (uint)uStack_520 == 1) && (uVar4 == 0x20000 || uVar5 != 0x20000)
         ) {
        uVar11 = uVar10 >> 3 & 0x1ff;
        uVar30 = uVar11 + 1;
        if ((((uint)uStack_520 == 1 && (uStack_520._4_4_ == uVar30 || uStack_520._4_4_ == 1)) ||
            (uStack_520._4_4_ == 1 && (uint)uStack_520 == uVar30)) ||
           (((uint)uStack_520 == 1 &&
            (((uStack_520._4_4_ == 4 &&
              (puVar14 = param_1, FUN_109a8b904(param_1,0xffffffff), uVar11 < 4)) &&
             ((int)puVar14 == 6)))))) {
          puVar18 = uStack_578;
          puVar31 = (uint *)((ulong)puVar12 & 0xffffffff);
          uStack_720 = uVar10 & 7;
          uStack_578 = uStack_570;
          uStack_570 = puVar18;
          bVar26 = true;
          puVar13 = param_2;
          param_2 = param_1;
          uVar35 = uVar30;
          goto LAB_109a28184;
        }
      }
    }
    puVar12 = param_2;
    FUN_109a8d7e8(param_2,0xffffffff);
    if (((int)puVar12 < 3) &&
       (puVar12 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar12 != 0)) {
      FUN_109a8b004(&uStack_520,param_2,0xffffffff);
      if ((uStack_520._4_4_ == 1 || (uint)uStack_520 == 1) && (uVar5 == 0x20000 || uVar4 != 0x20000)
         ) {
        if (((uint)uStack_520 == 1 && (uStack_520._4_4_ == uVar35 || uStack_520._4_4_ == 1)) ||
           (uStack_520._4_4_ == 1 && (uint)uStack_520 == uVar35)) {
          bVar26 = true;
        }
        else {
          if (((((uint)uStack_520 != 1) || (uStack_520._4_4_ != 4)) ||
              (puVar12 = param_2, FUN_109a8b904(param_2,0xffffffff), 3 < uVar7)) ||
             ((int)puVar12 != 6)) goto LAB_109a28cb4;
          bVar26 = true;
        }
LAB_109a28184:
        uVar4 = uVar35 << (ulong)(0xfa50U >> (ulong)(((uint)puVar31 & 7) << 1) & 3);
        uStack_5e8 = (ulong)uVar4;
        if (((ulong)puVar15 & 1) != 0) {
          pcStack_700 = (code *)0x0;
          bVar9 = true;
LAB_109a2823c:
          uStack_518 = (undefined8 *)0x408;
          puVar12 = puVar13;
          uStack_520 = &uStack_510;
          FUN_109a8d1f0(puVar13,&uStack_100,0xffffffff);
          FUN_109a8727c(param_3,puVar12,&uStack_100,puVar31,0xffffffff,0,0);
          if (!bVar9) {
            uStack_650 = 0;
            uStack_100 = CONCAT44(uStack_100._4_4_,0xc1020006);
            puStack_f8 = &uStack_650;
            uStack_f0 = 0x100000001;
            uStack_5e0 = uStack_5e0 & 0xffffffff00000000;
            uStack_5d8 = 0;
            uStack_5d0 = 0;
            FUN_109a9168c(param_3,&uStack_100,&uStack_5e0);
          }
          if ((*puVar13 & 0x1f0000) == 0x10000) {
            puVar19 = *(ulong **)(puVar13 + 2);
            puStack_f8 = (undefined8 *)puVar19[1];
            uStack_100 = *puVar19;
            uStack_e8 = puVar19[3];
            uStack_f0 = puVar19[2];
            uStack_d8 = puVar19[5];
            uStack_e0 = puVar19[4];
            uStack_c8 = puVar19[7];
            uStack_d0 = puVar19[6];
            uStack_c0 = (ulong)&uStack_100 | 8;
            puStack_b8 = &uStack_b0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            if (puVar19[7] != 0) {
              piVar1 = (int *)(puVar19[7] + 0x14);
              do {
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (*(int *)((long)puVar19 + 4) < 3) {
              uStack_b0 = *(undefined8 *)puVar19[9];
              uStack_a8 = ((undefined8 *)puVar19[9])[1];
            }
            else {
              uStack_100 = uStack_100 & 0xffffffff;
              func_0x000109a84868(&uStack_100);
            }
          }
          else {
            FUN_109a8a180(&uStack_100,puVar13,0xffffffff);
          }
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar19 = *(ulong **)(param_2 + 2);
            uStack_5a0 = (ulong)&uStack_5e0 | 8;
            uStack_5d8 = puVar19[1];
            uStack_5e0 = *puVar19;
            uStack_5c8 = puVar19[3];
            uStack_5d0 = puVar19[2];
            uStack_5b8 = puVar19[5];
            uStack_5c0 = puVar19[4];
            uStack_5a8 = puVar19[7];
            uStack_5b0 = puVar19[6];
            puStack_598 = &uStack_590;
            uStack_590 = 0;
            uStack_588 = 0;
            if (puVar19[7] != 0) {
              piVar1 = (int *)(puVar19[7] + 0x14);
              do {
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (*(int *)((long)puVar19 + 4) < 3) {
              uStack_590 = *(undefined8 *)puVar19[9];
              uStack_588 = ((undefined8 *)puVar19[9])[1];
            }
            else {
              uStack_5e0 = uStack_5e0 & 0xffffffff;
              func_0x000109a84868(&uStack_5e0);
            }
          }
          else {
            FUN_109a8a180(&uStack_5e0,param_2,0xffffffff);
          }
          if ((*param_3 & 0x1f0000) == 0x10000) {
            puVar19 = *(ulong **)(param_3 + 2);
            uStack_610 = (ulong)&uStack_650 | 8;
            uStack_648 = puVar19[1];
            uStack_650 = *puVar19;
            uStack_638 = puVar19[3];
            uStack_640 = puVar19[2];
            uStack_628 = puVar19[5];
            uStack_630 = puVar19[4];
            uStack_618 = puVar19[7];
            uStack_620 = puVar19[6];
            puStack_608 = &uStack_600;
            uStack_600 = 0;
            uStack_5f8 = 0;
            if (puVar19[7] != 0) {
              piVar1 = (int *)(puVar19[7] + 0x14);
              do {
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (*(int *)((long)puVar19 + 4) < 3) {
              uStack_600 = *(undefined8 *)puVar19[9];
              uStack_5f8 = ((undefined8 *)puVar19[9])[1];
            }
            else {
              uStack_650 = uStack_650 & 0xffffffff;
              func_0x000109a84868(&uStack_650);
            }
          }
          else {
            FUN_109a8a180(&uStack_650,param_3,0xffffffff);
          }
          if ((*puVar17 & 0x1f0000) == 0x10000) {
            puVar19 = *(ulong **)(puVar17 + 2);
            uStack_670 = (ulong)&uStack_6b0 | 8;
            uStack_6a8 = puVar19[1];
            uStack_6b0 = *puVar19;
            uStack_698 = puVar19[3];
            uStack_6a0 = puVar19[2];
            uStack_688 = puVar19[5];
            uStack_690 = puVar19[4];
            uStack_678 = puVar19[7];
            uStack_680 = puVar19[6];
            puStack_668 = &uStack_660;
            uStack_660 = 0;
            uStack_658 = 0;
            if (puVar19[7] != 0) {
              piVar1 = (int *)(puVar19[7] + 0x14);
              do {
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (*(int *)((long)puVar19 + 4) < 3) {
              uStack_660 = *(undefined8 *)puVar19[9];
              uStack_658 = ((undefined8 *)puVar19[9])[1];
            }
            else {
              uStack_6b0 = uStack_6b0 & 0xffffffff;
              func_0x000109a84868(&uStack_6b0);
            }
          }
          else {
            FUN_109a8a180(&uStack_6b0,puVar17,0xffffffff);
          }
          pcVar22 = (code *)(&PTR_FUN_1132e8b50)[uStack_720];
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = (uVar4 + 0x3ff) / uVar4;
          }
          uVar25 = (ulong)uVar5;
          puStack_548 = &uStack_100;
          if (bVar26) {
            puStack_540 = &uStack_650;
            puStack_538 = &uStack_6b0;
            puStack_530 = (undefined8 *)0x0;
            uStack_6b8 = 0;
            uStack_6e8 = 0;
            uStack_6e0 = 0;
            uStack_6f0 = 0;
            uStack_6d8 = 0;
            uStack_6d0 = 0;
            uStack_6c8 = 0;
            uStack_6c0 = 0;
            FUN_109a9b368(&uStack_6f0,&puStack_548,0,&lStack_568,0xffffffff);
            uVar8 = uStack_6c8;
            uVar32 = uStack_6c8;
            if (uVar25 <= uStack_6c8) {
              uVar32 = uVar25;
            }
            puVar28 = (undefined8 *)((uVar32 << ((ulong)(uVar24 ^ 1) & 0x3f)) * uStack_5e8 + 0x20);
            puVar18 = puVar28;
            if (uStack_518 < puVar28) {
              if (uStack_520 != &uStack_510) {
                if (uStack_520 != (undefined8 *)0x0) {
                  __ZdaPv(uStack_520);
                }
                uStack_518 = (undefined8 *)0x408;
                uStack_520 = &uStack_510;
              }
              puVar18 = uStack_518;
              if ((undefined8 *)0x408 < puVar28) {
                puVar18 = puVar28;
                __Znam();
                uStack_520 = puVar18;
                puVar18 = puVar28;
              }
            }
            uStack_518 = puVar18;
            puVar18 = uStack_520;
            uVar25 = uStack_5e8;
            FUN_109a27738(&uStack_5e0,(uint)uStack_100 & 0xfff,uStack_520,uVar32);
            uVar29 = (long)puVar18 + uVar25 * uVar32 + 0xf & 0xfffffffffffffff0;
            for (uVar25 = 0; uVar25 < uStack_6d0; uVar25 = uVar25 + 1) {
              if (uVar8 != 0) {
                uVar33 = 0;
                do {
                  uVar3 = uVar8 - uVar33;
                  if (uVar32 <= uVar8 - uVar33) {
                    uVar3 = uVar32;
                  }
                  uVar2 = uStack_560;
                  if (uVar24 == 0) {
                    uVar2 = uVar29;
                  }
                  iVar34 = (int)uVar3;
                  (*pcVar22)(lStack_568,0,puVar18,0,uVar2,0,uVar35 * iVar34,1,0);
                  if (((ulong)puVar15 & 1) == 0) {
                    aiStack_6f8[1] = 1;
                    aiStack_6f8[0] = iVar34;
                    (*pcStack_700)(uVar29,0,puStack_558,0,uStack_560,0,aiStack_6f8,&uStack_5e8);
                    puStack_558 = (undefined8 *)((long)puStack_558 + uVar3);
                  }
                  lStack_568 = lStack_568 + iVar34 * (int)uStack_5e8;
                  uStack_560 = uStack_560 + (long)(iVar34 * (int)uStack_5e8);
                  uVar33 = uVar33 + uVar32;
                } while (uVar33 < uVar8);
              }
              FUN_109a8350c(&uStack_6f0);
            }
          }
          else {
            puStack_540 = &uStack_5e0;
            puStack_538 = &uStack_650;
            puStack_530 = &uStack_6b0;
            uStack_528 = 0;
            uStack_6b8 = 0;
            uStack_6e8 = 0;
            uStack_6e0 = 0;
            uStack_6f0 = 0;
            uStack_6d8 = 0;
            uStack_6d0 = 0;
            uStack_6c8 = 0;
            uStack_6c0 = 0;
            FUN_109a9b368(&uStack_6f0,&puStack_548,0,&lStack_568,0xffffffff);
            uVar8 = uStack_6c8;
            uVar32 = uStack_6c8;
            if (uStack_6c8 * (long)(int)uVar35 >> 0x1f != 0) {
              uVar4 = 0;
              if (uVar35 != 0) {
                uVar4 = 0x7fffffff / uVar35;
              }
              uVar32 = (ulong)(int)uVar4;
            }
            if (((ulong)puVar15 & 1) == 0) {
              if (uVar25 <= uVar32) {
                uVar32 = uVar25;
              }
              puVar27 = (undefined8 *)(uStack_5e8 * uVar32);
              puVar18 = uStack_520;
              puVar28 = puVar27;
              if (uStack_518 < puVar27) {
                if (uStack_520 != &uStack_510) {
                  if (uStack_520 != (undefined8 *)0x0) {
                    __ZdaPv(uStack_520);
                  }
                  uStack_518 = (undefined8 *)0x408;
                  uStack_520 = &uStack_510;
                }
                puVar18 = uStack_520;
                puVar28 = uStack_518;
                if ((undefined8 *)0x408 < puVar27) {
                  puVar18 = puVar27;
                  __Znam();
                  uStack_520 = puVar18;
                  puVar28 = puVar27;
                }
              }
            }
            else {
              puVar18 = (undefined8 *)0x0;
              puVar28 = uStack_518;
            }
            uStack_518 = puVar28;
            for (uVar25 = 0; uVar25 < uStack_6d0; uVar25 = uVar25 + 1) {
              if (uVar8 != 0) {
                uVar29 = 0;
                uVar33 = uVar8;
                do {
                  uVar3 = uVar33;
                  if (uVar32 <= uVar33) {
                    uVar3 = uVar32;
                  }
                  puVar28 = puStack_558;
                  if (uVar24 == 0) {
                    puVar28 = puVar18;
                  }
                  iVar34 = (int)uVar3;
                  (*pcVar22)(lStack_568,0,uStack_560,0,puVar28,0,uVar35 * iVar34,1,0);
                  if (uVar24 == 0) {
                    aiStack_6f8[1] = 1;
                    aiStack_6f8[0] = iVar34;
                    (*pcStack_700)(puVar18,0,lStack_550,0,puStack_558,0,aiStack_6f8,&uStack_5e8);
                    lStack_550 = lStack_550 + iVar34;
                  }
                  lVar20 = (long)(uStack_5e8 * (uVar3 << 0x20)) >> 0x20;
                  lStack_568 = lStack_568 + lVar20;
                  uStack_560 = uStack_560 + lVar20;
                  puStack_558 = (undefined8 *)((long)puStack_558 + lVar20);
                  uVar29 = uVar29 + uVar32;
                  uVar33 = uVar33 - uVar32;
                } while (uVar29 < uVar8);
              }
              FUN_109a8350c(&uStack_6f0);
            }
          }
          if (uStack_678 != 0) {
            piVar1 = (int *)(uStack_678 + 0x14);
            do {
              iVar34 = *piVar1;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar26) {
                *piVar1 = iVar34 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_6b0);
            }
          }
          uStack_678 = 0;
          uStack_698 = 0;
          uStack_6a0 = 0;
          uStack_688 = 0;
          uStack_690 = 0;
          if (0 < uStack_6b0._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_670 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_6b0._4_4_);
          }
          if (puStack_668 != &uStack_660 && puStack_668 != (undefined8 *)0x0) {
            _free(puStack_668[-1]);
          }
          if (uStack_618 != 0) {
            piVar1 = (int *)(uStack_618 + 0x14);
            do {
              iVar34 = *piVar1;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar26) {
                *piVar1 = iVar34 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_650);
            }
          }
          uStack_618 = 0;
          uStack_638 = 0;
          uStack_640 = 0;
          uStack_628 = 0;
          uStack_630 = 0;
          if (0 < uStack_650._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_610 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_650._4_4_);
          }
          if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
            _free(puStack_608[-1]);
          }
          if (uStack_5a8 != 0) {
            piVar1 = (int *)(uStack_5a8 + 0x14);
            do {
              iVar34 = *piVar1;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar26) {
                *piVar1 = iVar34 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_5e0);
            }
          }
          uStack_5a8 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          uStack_5b8 = 0;
          uStack_5c0 = 0;
          if (0 < uStack_5e0._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_5a0 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_5e0._4_4_);
          }
          if (puStack_598 != &uStack_590 && puStack_598 != (undefined8 *)0x0) {
            _free(puStack_598[-1]);
          }
          if (uStack_c8 != 0) {
            piVar1 = (int *)(uStack_c8 + 0x14);
            do {
              iVar34 = *piVar1;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar26) {
                *piVar1 = iVar34 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar34 + -1 == 0) {
              func_0x000109a848d4(&uStack_100);
            }
          }
          uStack_c8 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          if (0 < uStack_100._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)(uStack_c0 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_100._4_4_);
          }
          if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
            _free(puStack_b8[-1]);
          }
          if (uStack_520 != &uStack_510 && uStack_520 != (undefined8 *)0x0) {
            __ZdaPv();
          }
          goto LAB_109a28ae0;
        }
        puVar12 = puVar17;
        FUN_109a8b904(puVar17,0xffffffff);
        if (((uint)puVar12 < 2) &&
           (puVar12 = puVar17, FUN_109a8d584(puVar17,puVar13), ((ulong)puVar12 & 1) != 0)) {
          pcStack_700 = (code *)0x109a47910;
          if (uStack_5e8 < 0x21) {
            pcVar22 = *(code **)(uStack_5e8 * 8 + 0x1132e8de8);
            pcStack_700 = (code *)0x109a47910;
            if (pcVar22 != (code *)0x0) {
              pcStack_700 = pcVar22;
            }
          }
          puVar12 = param_3;
          FUN_109a8d584(param_3,puVar13);
          if ((int)puVar12 == 0) {
            bVar9 = false;
          }
          else {
            puVar12 = param_3;
            FUN_109a8b904(param_3,0xffffffff);
            bVar9 = (uint)puVar12 == (uint)puVar31;
          }
          goto LAB_109a2823c;
        }
        goto LAB_109a28d44;
      }
    }
LAB_109a28cb4:
    puVar16 = (undefined4 *)0x88;
    func_0x000107c2ae8c();
    *puVar16 = 1;
    uStack_520 = (undefined8 *)(puVar16 + 1);
    uStack_518 = (undefined8 *)0x82;
    *(undefined8 *)(puVar16 + 0x13) = 0x7420646e6120657a;
    *(undefined8 *)(puVar16 + 0x11) = 0x697320656d617320;
    *(undefined8 *)(puVar16 + 0x17) = 0x7961727261272072;
    *(undefined8 *)(puVar16 + 0x15) = 0x6f6e202c29657079;
    *(undefined8 *)(puVar16 + 0x1b) = 0x726f6e202c277261;
    *(undefined8 *)(puVar16 + 0x19) = 0x6c61637320706f20;
    *(undefined8 *)(puVar16 + 0x1f) = 0x6172726120706f20;
    *(undefined8 *)(puVar16 + 0x1d) = 0x72616c6163732720;
    *(undefined8 *)(puVar16 + 3) = 0x7369206e6f697461;
    *(undefined8 *)(puVar16 + 1) = 0x7265706f20656854;
    *(undefined8 *)(puVar16 + 7) = 0x2079617272612720;
    *(undefined8 *)(puVar16 + 5) = 0x7265687469656e20;
    *(undefined8 *)(puVar16 + 0xb) = 0x6572656877282027;
    *(undefined8 *)(puVar16 + 9) = 0x796172726120706f;
    *(undefined1 *)((long)puVar16 + 0x86) = 0;
    *(undefined2 *)(puVar16 + 0x21) = 0x2779;
    *(undefined8 *)(puVar16 + 0xf) = 0x6568742065766168;
    *(undefined8 *)(puVar16 + 0xd) = 0x2073796172726120;
    FUN_109ac3188(0xffffff2f,&uStack_520,&UNK_10f59510d,&UNK_10f594df2,0xe1);
  }
LAB_109a28e18:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x109a28e1c);
  (*pcVar22)();
}



/* Entry: 109a292ec; end: 109a293c3;  */

void FUN_109a292ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_28[0] = 0x2010000;
  uStack_18 = 0;
  uStack_30 = 0;
  auStack_40[0] = 0x1010000;
  uStack_48 = 0;
  auStack_58[0] = 0x1010000;
  uStack_50 = param_2;
  uStack_38 = param_1;
  uStack_20 = param_3;
  FUN_109a91d90();
  FUN_109a279fc(auStack_40,auStack_58,auStack_28,param_1,&PTR_FUN_1132e8b50,0,0xe);
  return;
}



/* Entry: 109a293c4; end: 109a2b23f;  */

void FUN_109a293c4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,long param_6
                  ,uint param_7,undefined8 param_8)

{
  int *piVar1;
  ulong uVar2;
  double **ppdVar3;
  double **ppdVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  double **ppdVar21;
  double **ppdVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  double **ppdVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  code *pcVar32;
  double *pdVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  double **ppdVar42;
  ulong uVar43;
  double **ppdVar44;
  code *pcStack_728;
  code *pcStack_710;
  code *pcStack_6f8;
  uint uStack_6d8;
  uint uStack_6cc;
  int aiStack_6c8 [2];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined4 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  double **ppdStack_4d8;
  double **ppdStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  double *pdStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  ulong uStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar30 = *param_1;
  uStack_6d8 = *param_2;
  puVar16 = param_4;
  FUN_109a8e1c4();
  uVar14 = (uint)puVar16;
  puVar31 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar17 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar15 = (uint)puVar17;
  puVar18 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  puVar19 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  iVar29 = (int)puVar18;
  if (iVar29 < 3) {
    FUN_109a8b004(&uStack_4e0,param_1,0xffffffff);
  }
  else {
    uStack_4e0 = 0;
  }
  iVar38 = (int)puVar19;
  if (iVar38 < 3) {
    FUN_109a8b004(&uStack_4e8,param_2,0xffffffff);
  }
  else {
    uStack_4e8 = 0;
  }
  puVar18 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  uVar30 = uVar30 & 0x1f0000;
  uStack_6d8 = uStack_6d8 & 0x1f0000;
  pcStack_728._0_4_ = uVar15 >> 3 & 0x1ff;
  uStack_6cc = (uVar15 >> 3 & 0x1ff) + 1;
  if (((int)puVar18 < 3) &&
     (puVar18 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar18 != 0)) {
    FUN_109a8b004(&uStack_490,param_1,0xffffffff);
    if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
       ((uVar30 != 0x20000 && (uStack_6d8 == 0x20000)))) goto LAB_109a29528;
    bVar10 = true;
    if (((((uint)uStack_490 != 1 || uStack_490._4_4_ != uStack_6cc && uStack_490._4_4_ != 1) &&
         (uStack_490._4_4_ != 1 || (uint)uStack_490 != uStack_6cc)) &&
        (bVar10 = false, (uint)uStack_490 == 1)) && (uStack_490._4_4_ == 4)) {
      puVar18 = param_1;
      FUN_109a8b904(param_1,0xffffffff);
      bVar10 = (uint)pcStack_728 < 4 && (int)puVar18 == 6;
    }
  }
  else {
LAB_109a29528:
    bVar10 = false;
  }
  puVar18 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  uVar41 = (uint)puVar31;
  uVar7 = uVar41 >> 3 & 0x1ff;
  uVar28 = uVar7 + 1;
  if (((int)puVar18 < 3) &&
     (puVar18 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar18 != 0)) {
    FUN_109a8b004(&uStack_490,param_2,0xffffffff);
    if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
       ((uVar30 == 0x20000 && (uStack_6d8 != 0x20000)))) goto LAB_109a29594;
    bVar11 = true;
    if (((((uint)uStack_490 != 1 || uStack_490._4_4_ != uVar28 && uStack_490._4_4_ != 1) &&
         (uStack_490._4_4_ != 1 || (uint)uStack_490 != uVar28)) &&
        (bVar11 = false, (uint)uStack_490 == 1)) && (uStack_490._4_4_ == 4)) {
      puVar18 = param_2;
      FUN_109a8b904(param_2,0xffffffff);
      bVar11 = uVar7 < 4 && (int)puVar18 == 6;
    }
  }
  else {
LAB_109a29594:
    bVar11 = false;
  }
  pcStack_710._0_4_ = uVar41 & 7;
  if ((uVar30 == uStack_6d8) || (uVar7 == 0)) {
    if (((((((int)uStack_4e0 == (int)uStack_4e8 && uStack_4e0._4_4_ == uStack_4e8._4_4_) &&
           iVar29 < 3) && iVar38 < 3) && uVar41 == uVar15) & uVar14) != 1) goto LAB_109a296e4;
    if ((int)*param_3 < 0) {
      puVar18 = param_3;
      FUN_109a8b904(param_3,0xffffffff);
      if ((uint)puVar18 == uVar41) goto LAB_109a29624;
      goto LAB_109a296e4;
    }
    if ((param_5 & 7) != (uVar41 & 7) && -1 < (int)param_5) goto LAB_109a296e4;
LAB_109a29624:
    if (bVar10 != bVar11) goto LAB_109a296e4;
    puVar16 = param_1;
    FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
    FUN_109a8727c(param_3,puVar16,&uStack_490,puVar31,0xffffffff,0,0);
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar24 = *(undefined8 **)(param_1 + 2);
      uStack_450 = (ulong)&uStack_490 | 8;
      uStack_488 = (double **)puVar24[1];
      uStack_490 = (double **)*puVar24;
      uStack_478 = puVar24[3];
      pdStack_480 = (double *)puVar24[2];
      uStack_468 = puVar24[5];
      uStack_470 = puVar24[4];
      lStack_458 = puVar24[7];
      uStack_460 = puVar24[6];
      puStack_448 = &uStack_440;
      uStack_438 = 0;
      uStack_440 = 0;
      if (puVar24[7] != 0) {
        piVar1 = (int *)(puVar24[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar24 + 4) < 3) {
        uStack_440 = *(undefined8 *)puVar24[9];
        uStack_438 = ((undefined8 *)puVar24[9])[1];
      }
      else {
        uStack_490 = (double **)((ulong)uStack_490 & 0xffffffff);
        func_0x000109a84868(&uStack_490);
      }
    }
    else {
      FUN_109a8a180(&uStack_490,param_1,0xffffffff);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(param_2 + 2);
      uStack_510 = (ulong)&uStack_550 | 8;
      uStack_548 = puVar25[1];
      uStack_550 = *puVar25;
      uStack_538 = puVar25[3];
      uStack_540 = puVar25[2];
      uStack_528 = puVar25[5];
      uStack_530 = puVar25[4];
      uStack_518 = puVar25[7];
      uStack_520 = puVar25[6];
      puStack_508 = &uStack_500;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_500 = *(undefined8 *)puVar25[9];
        uStack_4f8 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_550 = uStack_550 & 0xffffffff;
        func_0x000109a84868(&uStack_550);
      }
    }
    else {
      FUN_109a8a180(&uStack_550,param_2,0xffffffff);
    }
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(param_3 + 2);
      uStack_570 = (ulong)&uStack_5b0 | 8;
      uStack_5a8 = puVar25[1];
      uStack_5b0 = (double *)*puVar25;
      uStack_598 = puVar25[3];
      uStack_5a0 = puVar25[2];
      uStack_588 = puVar25[5];
      uStack_590 = puVar25[4];
      uStack_578 = puVar25[7];
      uStack_580 = puVar25[6];
      puStack_568 = &uStack_560;
      uStack_558 = 0;
      uStack_560 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_560 = *(undefined8 *)puVar25[9];
        uStack_558 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_5b0 = (double *)((ulong)uStack_5b0 & 0xffffffff);
        func_0x000109a84868(&uStack_5b0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5b0,param_3,0xffffffff);
    }
    uVar35 = (ulong)uStack_488 & 0xffffffff;
    iVar29 = ((uint)uStack_490 >> 3 & 0x1ff) + 1;
    if (((((uint)uStack_490 & (uint)uStack_550 & (uint)uStack_5b0) >> 0xe & 1) == 0) ||
       (uVar27 = (long)uStack_488._4_4_ * (long)iVar29 * (long)(int)uStack_488,
       uVar27 - (long)(int)uVar27 != 0)) {
      uVar27 = (ulong)(uint)(uStack_488._4_4_ * iVar29);
    }
    else {
      uVar35 = 1;
    }
    (**(code **)(param_6 + (ulong)(uVar41 & 7) * 8))
              (pdStack_480,uStack_440,uStack_540,uStack_500,uStack_5a0,uStack_560,uVar27,uVar35,
               param_8);
    if (uStack_578 != 0) {
      piVar1 = (int *)(uStack_578 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_5b0);
      }
    }
    uStack_578 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    if (0 < uStack_5b0._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_570 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_5b0._4_4_);
    }
    if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
      _free(puStack_568[-1]);
    }
    if (uStack_518 != 0) {
      piVar1 = (int *)(uStack_518 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    uStack_518 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    if (0 < uStack_550._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_510 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_550._4_4_);
    }
    if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
      _free(puStack_508[-1]);
    }
    if (lStack_458 != 0) {
      piVar1 = (int *)(lStack_458 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_490);
      }
    }
    lStack_458 = 0;
    uStack_478 = 0;
    pdStack_480 = (double *)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    if (0 < (int)uStack_490._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_450 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < (int)uStack_490._4_4_);
    }
    if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
      uVar23 = puStack_448[-1];
      goto LAB_109a2a9f0;
    }
LAB_109a2a9f4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a296e4:
    uVar40 = uVar15 & 7;
    if (iVar29 == iVar38) {
      if ((int)uStack_4e0 != (int)uStack_4e8) goto LAB_109a29768;
      if (((uStack_4e0._4_4_ != uStack_4e8._4_4_) || (uVar7 != (uint)pcStack_728)) ||
         ((uVar30 == 0x20000 &&
          (((int)uStack_4e0 == 1 && (uStack_4e0._4_4_ == 4 || uStack_4e0._4_4_ == 1))))))
      goto LAB_109a29768;
      if (uStack_6d8 == 0x20000) {
        if (((int)uStack_4e0 == 1) && (uStack_4e0._4_4_ == 4 || uStack_4e0._4_4_ == 1))
        goto LAB_109a29768;
      }
      bVar10 = false;
      bVar11 = false;
      uStack_6cc = uVar28;
    }
    else {
LAB_109a29768:
      puVar18 = param_1;
      FUN_109a8d7e8(param_1,0xffffffff);
      if ((2 < (int)puVar18) ||
         (puVar18 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar18 == 0)) {
LAB_109a297c8:
        puVar31 = param_2;
        FUN_109a8d7e8(param_2,0xffffffff);
        if (((int)puVar31 < 3) &&
           (puVar31 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar31 != 0)) {
          FUN_109a8b004(&uStack_490,param_2,0xffffffff);
          if ((((uint)uStack_490 == 1) || (uStack_490._4_4_ == 1)) &&
             (((uVar30 != 0x20000 || (uStack_6d8 == 0x20000)) &&
              ((((uint)uStack_490 == 1 && (uStack_490._4_4_ == uVar28 || uStack_490._4_4_ == 1) ||
                (uStack_490._4_4_ == 1 && (uint)uStack_490 == uVar28)) ||
               (((((uint)uStack_490 == 1 && (uStack_490._4_4_ == 4)) &&
                 (puVar31 = param_2, FUN_109a8b904(param_2,0xffffffff), uVar7 < 4)) &&
                ((int)puVar31 == 6)))))))) {
            bVar10 = false;
            puVar31 = (uint *)((ulong)puVar17 & 0xffffffff);
            puVar17 = param_1;
            uVar40 = (uint)pcStack_710;
            uStack_6cc = uVar28;
            goto LAB_109a298ac;
          }
        }
        puVar20 = (undefined4 *)0xa0;
        func_0x000107c2ae8c();
        *puVar20 = 1;
        uStack_490 = (double **)(puVar20 + 1);
        uStack_488 = (double **)0x99;
        *(undefined8 *)(puVar20 + 0x1b) = 0x726f6e202c29736c;
        *(undefined8 *)(puVar20 + 0x19) = 0x656e6e6168632066;
        *(undefined8 *)(puVar20 + 0x1f) = 0x616c61637320706f;
        *(undefined8 *)(puVar20 + 0x1d) = 0x2079617272612720;
        *(undefined8 *)(puVar20 + 0x23) = 0x2072616c61637327;
        *(undefined8 *)(puVar20 + 0x21) = 0x20726f6e202c2772;
        *(undefined8 *)((long)puVar20 + 0x95) = 0x2779617272612070;
        *(undefined8 *)((long)puVar20 + 0x8d) = 0x6f2072616c616373;
        *(undefined8 *)(puVar20 + 0xb) = 0x6572656877282027;
        *(undefined8 *)(puVar20 + 9) = 0x796172726120706f;
        *(undefined8 *)(puVar20 + 0xf) = 0x6568742065766168;
        *(undefined8 *)(puVar20 + 0xd) = 0x2073796172726120;
        *(undefined8 *)(puVar20 + 0x13) = 0x7420646e6120657a;
        *(undefined8 *)(puVar20 + 0x11) = 0x697320656d617320;
        *(undefined8 *)(puVar20 + 0x17) = 0x6f207265626d756e;
        *(undefined8 *)(puVar20 + 0x15) = 0x20656d6173206568;
        *(undefined8 *)(puVar20 + 3) = 0x7369206e6f697461;
        *(undefined8 *)(puVar20 + 1) = 0x7265706f20656854;
        *(undefined1 *)((long)puVar20 + 0x9d) = 0;
        *(undefined8 *)(puVar20 + 7) = 0x2079617272612720;
        *(undefined8 *)(puVar20 + 5) = 0x7265687469656e20;
        FUN_109ac3188(0xffffff2f,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x27f);
        goto LAB_109a2b0d8;
      }
      FUN_109a8b004(&uStack_490,param_1,0xffffffff);
      if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
         ((uVar30 != 0x20000 && (uStack_6d8 == 0x20000)))) goto LAB_109a297c8;
      if ((((uint)uStack_490 != 1 || uStack_490._4_4_ != uStack_6cc && uStack_490._4_4_ != 1) &&
          (uStack_490._4_4_ != 1 || (uint)uStack_490 != uStack_6cc)) &&
         (((uint)uStack_490 != 1 ||
          (((uStack_490._4_4_ != 4 ||
            (puVar18 = param_1, FUN_109a8b904(param_1,0xffffffff), 3 < (uint)pcStack_728)) ||
           ((int)puVar18 != 6)))))) goto LAB_109a297c8;
      uVar23 = uStack_4e8;
      uStack_4e8 = uStack_4e0;
      bVar10 = true;
      puVar17 = param_2;
      param_2 = param_1;
      uStack_4e0 = uVar23;
      uVar41 = uVar15;
LAB_109a298ac:
      if (((int)puVar31 != 6) || ((uStack_4e8._4_4_ != 1 && (uStack_4e8._4_4_ != 4)))) {
        puVar20 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar20 = 1;
        uStack_490 = (double **)(puVar20 + 1);
        uStack_488 = (double **)0x37;
        *(undefined8 *)(puVar20 + 3) = 0x204634365f564320;
        *(undefined8 *)(puVar20 + 1) = 0x3d3d203265707974;
        *(undefined1 *)((long)puVar20 + 0x3b) = 0;
        *(undefined8 *)(puVar20 + 7) = 0x3d20746867696568;
        *(undefined8 *)(puVar20 + 5) = 0x2e327a7328202626;
        *(undefined8 *)(puVar20 + 0xb) = 0x68676965682e327a;
        *(undefined8 *)(puVar20 + 9) = 0x73207c7c2031203d;
        *(undefined8 *)((long)puVar20 + 0x33) = 0x2934203d3d207468;
        FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x281);
        goto LAB_109a2b0d8;
      }
      if ((param_7 & 1) == 0) {
        if ((*param_2 & 0x1f0000) == 0x10000) {
          puVar24 = *(undefined8 **)(param_2 + 2);
          uStack_450 = (ulong)&uStack_490 | 8;
          uStack_488 = (double **)puVar24[1];
          uStack_490 = (double **)*puVar24;
          uStack_478 = puVar24[3];
          pdStack_480 = (double *)puVar24[2];
          uStack_468 = puVar24[5];
          uStack_470 = puVar24[4];
          lStack_458 = puVar24[7];
          uStack_460 = puVar24[6];
          puStack_448 = &uStack_440;
          uStack_438 = 0;
          uStack_440 = 0;
          if (puVar24[7] != 0) {
            piVar1 = (int *)(puVar24[7] + 0x14);
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (*(int *)((long)puVar24 + 4) < 3) {
            uStack_440 = *(undefined8 *)puVar24[9];
            uStack_438 = ((undefined8 *)puVar24[9])[1];
          }
          else {
            uStack_490 = (double **)((ulong)uStack_490 & 0xffffffff);
            func_0x000109a84868(&uStack_490);
          }
        }
        else {
          FUN_109a8a180(&uStack_490,param_2,0xffffffff);
        }
        iVar38 = 0x7fffffff;
        iVar29 = -0x80000000;
        uVar35 = (ulong)uStack_6cc;
        pdVar33 = pdStack_480;
        do {
          iVar34 = (int)(long)(double)(long)*pdVar33;
          if (*pdVar33 != (double)iVar34) {
            uVar30 = 5;
            if (uVar40 != 5 && 3 < uVar40) {
              uVar30 = 6;
            }
            goto LAB_109a299f8;
          }
          if (iVar29 <= iVar34) {
            iVar29 = iVar34;
          }
          if (iVar34 <= iVar38) {
            iVar38 = iVar34;
          }
          uVar35 = uVar35 - 1;
          pdVar33 = pdVar33 + 1;
        } while (uVar35 != 0);
        if ((iVar38 < 0) || (0xff < iVar29)) {
          if ((iVar38 < -0x80) || (0x7f < iVar29)) {
            if ((iVar38 < 0) || (0xffff < iVar29)) {
              uVar30 = 3;
              if (0x7fff < iVar29 || iVar38 < -0x8000) {
                uVar30 = 4;
              }
            }
            else {
              uVar30 = 2;
            }
          }
          else {
            uVar30 = 1;
          }
        }
        else {
          uVar30 = 0;
        }
LAB_109a299f8:
        if (lStack_458 != 0) {
          piVar1 = (int *)(lStack_458 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar29 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_490);
          }
        }
        lStack_458 = 0;
        uStack_478 = 0;
        pdStack_480 = (double *)0x0;
        uStack_468 = 0;
        uStack_470 = 0;
        if (0 < (int)uStack_490._4_4_) {
          lVar36 = 0;
          do {
            *(undefined4 *)(uStack_450 + lVar36 * 4) = 0;
            lVar36 = lVar36 + 1;
          } while (lVar36 < (int)uStack_490._4_4_);
        }
        if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
          _free(puStack_448[-1]);
        }
      }
      else {
        uVar30 = 6;
      }
      bVar11 = true;
      uVar15 = 6;
      param_1 = puVar17;
      pcStack_710._0_4_ = uVar40;
      uVar40 = uVar30;
    }
    if ((int)param_5 < 0) {
      if ((int)*param_3 < 0) {
        puVar31 = param_3;
        FUN_109a8b904(param_3,0xffffffff);
        param_5 = (uint)puVar31;
      }
      else {
        bVar13 = bVar11;
        if (uVar41 == uVar15) {
          bVar13 = true;
        }
        param_5 = uVar41;
        if (!bVar13) {
          puVar20 = (undefined4 *)0x90;
          func_0x000107c2ae8c();
          *puVar20 = 1;
          uStack_490 = (double **)(puVar20 + 1);
          uStack_488 = (double **)0x88;
          *(undefined8 *)(puVar20 + 0x17) = 0x74757074756f2065;
          *(undefined8 *)(puVar20 + 0x15) = 0x6874202c73657079;
          *(undefined8 *)(puVar20 + 0x1b) = 0x7473756d20657079;
          *(undefined8 *)(puVar20 + 0x19) = 0x7420796172726120;
          *(undefined8 *)(puVar20 + 0x1f) = 0x7320796c74696369;
          *(undefined8 *)(puVar20 + 0x1d) = 0x6c70786520656220;
          *(undefined8 *)(puVar20 + 7) = 0x6275732f64646120;
          *(undefined8 *)(puVar20 + 5) = 0x6e69207379617272;
          *(undefined8 *)(puVar20 + 0xb) = 0x642f796c7069746c;
          *(undefined8 *)(puVar20 + 9) = 0x756d2f7463617274;
          *(undefined8 *)(puVar20 + 0xf) = 0x20736e6f6974636e;
          *(undefined8 *)(puVar20 + 0xd) = 0x7566206564697669;
          *(undefined8 *)(puVar20 + 0x13) = 0x7420746e65726566;
          *(undefined8 *)(puVar20 + 0x11) = 0x6669642065766168;
          *(undefined1 *)(puVar20 + 0x23) = 0;
          *(undefined8 *)(puVar20 + 0x21) = 0x6465696669636570;
          *(undefined8 *)(puVar20 + 3) = 0x61207475706e6920;
          *(undefined8 *)(puVar20 + 1) = 0x656874206e656857;
          FUN_109ac3188(0xfffffffb,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x297);
          goto LAB_109a2b0d8;
        }
      }
    }
    param_5 = param_5 & 7;
    if (((uint)pcStack_710 != uVar40) || (param_5 != (uint)pcStack_710)) {
      if ((param_7 & 1) == 0) {
        if ((uVar40 < 2) && ((uint)pcStack_710 < 2)) {
          uVar28 = 3;
        }
        else {
          uVar30 = (uint)pcStack_710;
          if ((uint)pcStack_710 <= uVar40) {
            uVar30 = uVar40;
          }
          uVar28 = 4;
          if (4 < (uint)pcStack_710 || 4 < uVar40) {
            uVar28 = uVar30;
          }
        }
        if (uVar28 <= param_5) {
          uVar28 = param_5;
        }
        uVar30 = 4;
        if (4 < (uint)pcStack_710 && 4 < uVar40) {
          uVar30 = uVar28;
        }
        bVar12 = 3 < param_5;
        bVar13 = param_5 == 4;
      }
      else {
        if (uVar40 <= (uint)pcStack_710) {
          uVar40 = (uint)pcStack_710;
        }
        uVar28 = uVar40;
        if (uVar40 <= param_5) {
          uVar28 = param_5;
        }
        bVar12 = 4 < uVar28;
        bVar13 = uVar28 == 5;
        uVar30 = 5;
      }
      uVar40 = uVar28;
      if (!bVar12 || bVar13) {
        uVar40 = uVar30;
      }
    }
    uVar28 = uStack_6cc * 8 - 8;
    uVar30 = param_5 | uVar28;
    if (((ulong)puVar16 & 1) != 0) {
      puVar16 = param_1;
      FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
      FUN_109a8727c(param_3,puVar16,&uStack_490,uVar30,0xffffffff,0,0);
LAB_109a29cf8:
      uVar30 = uVar40 | uVar28;
      if (uVar41 == uVar30) {
        pcVar9 = (code *)0x0;
      }
      else {
        pcVar9 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar40 * 8 + (ulong)(uVar41 & 7)];
      }
      pcStack_6f8 = pcVar9;
      if (uVar15 != uVar41) {
        if (uVar15 == uVar30) {
          pcStack_6f8 = (code *)0x0;
        }
        else {
          pcStack_6f8 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar40 * 8 + (ulong)(uVar15 & 7)];
        }
      }
      if (param_5 == uVar40) {
        pcStack_710 = (code *)0x0;
      }
      else {
        pcStack_710 = (code *)(&PTR_FUN_110b21620)[(ulong)param_5 * 8 + (ulong)uVar40];
      }
      iVar29 = (uVar28 >> 3) + 1;
      uVar28 = iVar29 << (ulong)(0xfa50U >> (ulong)(param_5 << 1) & 3);
      uStack_5b8 = (ulong)uVar28;
      pcStack_728 = (code *)0x109a47910;
      if (uVar28 < 0x21) {
        pcVar32 = *(code **)(uStack_5b8 * 8 + 0x1132e8de8);
        pcStack_728 = (code *)0x109a47910;
        if (pcVar32 != (code *)0x0) {
          pcStack_728 = pcVar32;
        }
      }
      if ((*param_1 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_1 + 2);
        uStack_510 = (ulong)&uStack_550 | 8;
        uStack_548 = puVar25[1];
        uStack_550 = *puVar25;
        uStack_538 = puVar25[3];
        uStack_540 = puVar25[2];
        uStack_528 = puVar25[5];
        uStack_530 = puVar25[4];
        uStack_518 = puVar25[7];
        uStack_520 = puVar25[6];
        puStack_508 = &uStack_500;
        uStack_4f8 = 0;
        uStack_500 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_500 = *(undefined8 *)puVar25[9];
          uStack_4f8 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_550 = uStack_550 & 0xffffffff;
          func_0x000109a84868(&uStack_550);
        }
      }
      else {
        FUN_109a8a180(&uStack_550,param_1,0xffffffff);
      }
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_2 + 2);
        uStack_570 = (ulong)&uStack_5b0 | 8;
        uStack_5a8 = puVar25[1];
        uStack_5b0 = (double *)*puVar25;
        uStack_598 = puVar25[3];
        uStack_5a0 = puVar25[2];
        uStack_588 = puVar25[5];
        uStack_590 = puVar25[4];
        uStack_578 = puVar25[7];
        uStack_580 = puVar25[6];
        puStack_568 = &uStack_560;
        uStack_558 = 0;
        uStack_560 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_560 = *(undefined8 *)puVar25[9];
          uStack_558 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_5b0 = (double *)((ulong)uStack_5b0 & 0xffffffff);
          func_0x000109a84868(&uStack_5b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_5b0,param_2,0xffffffff);
      }
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_3 + 2);
        uStack_5e0 = (ulong)&uStack_620 | 8;
        uStack_618 = puVar25[1];
        uStack_620 = *puVar25;
        uStack_608 = puVar25[3];
        uStack_610 = puVar25[2];
        uStack_5f8 = puVar25[5];
        uStack_600 = puVar25[4];
        uStack_5e8 = puVar25[7];
        uStack_5f0 = puVar25[6];
        puStack_5d8 = &uStack_5d0;
        uStack_5d0 = 0;
        uStack_5c8 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_5d0 = *(undefined8 *)puVar25[9];
          uStack_5c8 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_620 = uStack_620 & 0xffffffff;
          func_0x000109a84868(&uStack_620);
        }
      }
      else {
        FUN_109a8a180(&uStack_620,param_3,0xffffffff);
      }
      if ((*param_4 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_4 + 2);
        uStack_640 = (ulong)&uStack_680 | 8;
        uStack_678 = puVar25[1];
        uStack_680 = *puVar25;
        uStack_668 = puVar25[3];
        uStack_670 = puVar25[2];
        uStack_658 = puVar25[5];
        uStack_660 = puVar25[4];
        uStack_648 = puVar25[7];
        uStack_650 = puVar25[6];
        puStack_638 = &uStack_630;
        uStack_630 = 0;
        uStack_628 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = *piVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_630 = *(undefined8 *)puVar25[9];
          uStack_628 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_680 = uStack_680 & 0xffffffff;
          func_0x000109a84868(&uStack_680);
        }
      }
      else {
        FUN_109a8a180(&uStack_680,param_4,0xffffffff);
      }
      uVar7 = iVar29 << (ulong)(0xfa50U >> (ulong)(uVar40 << 1) & 3);
      uVar35 = (ulong)uVar7;
      uVar41 = (uVar41 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar41 & 7) << 1) & 3);
      uVar28 = uVar14 ^ 1;
      uVar8 = 0;
      if ((uVar7 & 0xffff) != 0) {
        uVar8 = (uVar7 + 0x3ff & 0xffff) / (uVar7 & 0xffff);
      }
      uVar39 = (ulong)uVar8;
      uStack_488 = (double **)0x408;
      uVar27 = uVar35;
      if (pcVar9 == (code *)0x0) {
        uVar27 = 0;
      }
      bVar13 = bVar11;
      if (pcStack_6f8 != (code *)0x0) {
        bVar13 = true;
      }
      uVar2 = uVar35;
      if (!bVar13) {
        uVar2 = 0;
      }
      uVar43 = uVar35;
      if (pcStack_710 == (code *)0x0) {
        uVar43 = 0;
      }
      uVar37 = 0;
      if (uVar14 == 0) {
        uVar37 = uStack_5b8;
      }
      lVar36 = uVar2 + uVar27 + uVar43 + uVar37;
      pcVar32 = *(code **)(param_6 + (ulong)uVar40 * 8);
      puStack_4b8 = &uStack_550;
      uStack_490 = &pdStack_480;
      if (bVar11) {
        puStack_4b0 = &uStack_620;
        puStack_4a8 = &uStack_680;
        puStack_4a0 = (undefined8 *)0x0;
        uStack_688 = 0;
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        uStack_6c0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        FUN_109a9b368(&uStack_6c0,&puStack_4b8,0,&ppdStack_4d8,0xffffffff);
        uVar2 = uStack_698;
        uVar27 = uStack_698;
        if (uVar39 <= uStack_698) {
          uVar27 = uVar39;
        }
        ppdVar42 = (double **)(uVar27 * lVar36 + 0x40);
        ppdVar22 = ppdVar42;
        if (uStack_488 < ppdVar42) {
          if (uStack_490 != &pdStack_480) {
            if (uStack_490 != (double **)0x0) {
              __ZdaPv(uStack_490);
            }
            uStack_488 = (double **)0x408;
            uStack_490 = &pdStack_480;
          }
          ppdVar22 = uStack_488;
          if ((double **)0x408 < ppdVar42) {
            ppdVar22 = ppdVar42;
            __Znam();
            uStack_490 = ppdVar22;
            ppdVar22 = ppdVar42;
          }
        }
        uStack_488 = ppdVar22;
        ppdVar42 = uStack_490;
        lVar36 = uVar27 * uVar35;
        ppdVar22 = (double **)((long)uStack_490 + lVar36 + 0xf & 0xfffffffffffffff0);
        if (pcVar9 == (code *)0x0) {
          ppdVar22 = uStack_490;
        }
        FUN_109a27738(&uStack_5b0,uVar30,ppdVar22,uVar27);
        uVar39 = 0;
        uVar43 = (long)ppdVar22 + lVar36 + 0xf & 0xfffffffffffffff0;
        uVar35 = uVar43 + lVar36 + 0xf;
        if (pcStack_710 != (code *)0x0) {
          uVar28 = 1;
        }
        for (; uVar39 < uStack_6a0; uVar39 = uVar39 + 1) {
          if (uVar2 != 0) {
            uVar37 = 0;
            do {
              ppdVar4 = ppdStack_4d0;
              uVar5 = uVar2 - uVar37;
              if (uVar27 <= uVar2 - uVar37) {
                uVar5 = uVar27;
              }
              iVar38 = (int)uVar5;
              iVar29 = uStack_6cc * iVar38;
              ppdVar21 = ppdStack_4d8;
              if (pcVar9 != (code *)0x0) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcVar9)(ppdStack_4d8,1,0,1,ppdVar42,1,aiStack_6c8,0);
                ppdVar21 = ppdVar42;
              }
              ppdVar3 = ppdVar21;
              ppdVar44 = ppdVar22;
              if (!bVar10) {
                ppdVar3 = ppdVar22;
                ppdVar44 = ppdVar21;
              }
              if ((uVar28 & 1) == 0) {
                (*pcVar32)(ppdVar44,1,ppdVar3,1,ppdVar4,1,iVar29,1,param_8);
              }
              else {
                (*pcVar32)(ppdVar44,1,ppdVar3,1,uVar43,1,iVar29,1,param_8);
                if (uVar14 == 0) {
                  if (pcStack_710 == (code *)0x0) {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar43,1,lStack_4c8,1,ppdVar4,1,aiStack_6c8,&uStack_5b8);
                  }
                  else {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar29;
                    (*pcStack_710)(uVar43,1,0,1,uVar35 & 0xfffffffffffffff0,1,aiStack_6c8,0);
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar35 & 0xfffffffffffffff0,1,lStack_4c8,1,ppdVar4,1,aiStack_6c8,
                                   &uStack_5b8);
                  }
                  lStack_4c8 = lStack_4c8 + uVar5;
                }
                else {
                  aiStack_6c8[1] = 1;
                  aiStack_6c8[0] = iVar29;
                  (*pcStack_710)(uVar43,1,0,1,ppdVar4,1,aiStack_6c8,0);
                }
              }
              ppdStack_4d8 = (double **)((long)ppdStack_4d8 + uVar5 * uVar41);
              ppdStack_4d0 = (double **)((long)ppdStack_4d0 + uStack_5b8 * uVar5);
              uVar37 = uVar37 + uVar27;
            } while (uVar37 < uVar2);
          }
          FUN_109a8350c(&uStack_6c0);
        }
      }
      else {
        puStack_4b0 = &uStack_5b0;
        puStack_4a8 = &uStack_620;
        puStack_4a0 = &uStack_680;
        uStack_498 = 0;
        uStack_688 = 0;
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        uStack_6c0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        FUN_109a9b368(&uStack_6c0,&puStack_4b8,0,&ppdStack_4d8,0xffffffff);
        uVar27 = uStack_698;
        uVar30 = uVar28;
        if (pcVar9 != (code *)0x0) {
          uVar30 = 1;
        }
        if (pcStack_6f8 != (code *)0x0) {
          uVar30 = 1;
        }
        if (pcStack_710 != (code *)0x0) {
          uVar30 = 1;
        }
        uVar2 = uStack_698;
        if (uVar39 <= uStack_698) {
          uVar2 = uVar39;
        }
        if (uVar30 == 0) {
          uVar2 = uStack_698;
        }
        ppdVar42 = (double **)(uVar2 * lVar36 + 0x40);
        ppdVar22 = ppdVar42;
        if (uStack_488 < ppdVar42) {
          if (uStack_490 != &pdStack_480) {
            if (uStack_490 != (double **)0x0) {
              __ZdaPv(uStack_490);
            }
            uStack_488 = (double **)0x408;
            uStack_490 = &pdStack_480;
          }
          ppdVar22 = uStack_488;
          if ((double **)0x408 < ppdVar42) {
            ppdVar22 = ppdVar42;
            __Znam();
            uStack_490 = ppdVar22;
            ppdVar22 = ppdVar42;
          }
        }
        uStack_488 = ppdVar22;
        ppdVar42 = uStack_490;
        uVar39 = 0;
        lVar36 = uVar2 * uVar35;
        ppdVar22 = (double **)((long)uStack_490 + lVar36 + 0xf & 0xfffffffffffffff0);
        if (pcVar9 == (code *)0x0) {
          ppdVar22 = uStack_490;
        }
        ppdVar21 = (double **)((long)ppdVar22 + lVar36 + 0xf & 0xfffffffffffffff0);
        ppdVar4 = ppdVar22;
        if (pcStack_6f8 == (code *)0x0) {
          ppdVar4 = (double **)0x0;
          ppdVar21 = ppdVar22;
        }
        uVar35 = (long)ppdVar21 + lVar36 + 0xf;
        if (pcStack_710 != (code *)0x0) {
          uVar28 = 1;
        }
        for (; uVar39 < uStack_6a0; uVar39 = uVar39 + 1) {
          if (uVar27 != 0) {
            uVar43 = 0;
            uVar37 = uVar27;
            do {
              lVar36 = lStack_4c8;
              ppdVar3 = ppdStack_4d0;
              uVar5 = uVar37;
              if (uVar2 <= uVar37) {
                uVar5 = uVar2;
              }
              iVar38 = (int)uVar5;
              iVar29 = uStack_6cc * iVar38;
              ppdVar44 = ppdStack_4d8;
              if (pcVar9 != (code *)0x0) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcVar9)(ppdStack_4d8,1,0,1,ppdVar42,1,aiStack_6c8,0);
                ppdVar44 = ppdVar42;
              }
              ppdVar26 = ppdVar44;
              if ((ppdStack_4d8 != ppdStack_4d0) && (ppdVar26 = ppdVar3, pcStack_6f8 != (code *)0x0)
                 ) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcStack_6f8)(ppdVar3,1,0,1,ppdVar22,1,aiStack_6c8,0);
                ppdVar26 = ppdVar4;
              }
              if ((uVar28 & 1) == 0) {
                (*pcVar32)(ppdVar44,1,ppdVar26,1,lVar36,1,iVar29,1,param_8);
              }
              else {
                (*pcVar32)(ppdVar44,1,ppdVar26,1,ppdVar21,0,iVar29,1,param_8);
                if (uVar14 == 0) {
                  if (pcStack_710 == (code *)0x0) {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(ppdVar21,1,lStack_4c0,1,lVar36,1,aiStack_6c8,&uStack_5b8);
                  }
                  else {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar29;
                    (*pcStack_710)(ppdVar21,1,0,1,uVar35 & 0xfffffffffffffff0,1,aiStack_6c8,0);
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar35 & 0xfffffffffffffff0,1,lStack_4c0,1,lVar36,1,aiStack_6c8,
                                   &uStack_5b8);
                  }
                  lStack_4c0 = lStack_4c0 + iVar38;
                }
                else {
                  aiStack_6c8[1] = 1;
                  aiStack_6c8[0] = iVar29;
                  (*pcStack_710)(ppdVar21,1,0,1,lVar36,1,aiStack_6c8,0);
                }
              }
              ppdStack_4d8 = (double **)((long)ppdStack_4d8 + (long)iVar38 * (long)(int)uVar41);
              ppdStack_4d0 = (double **)
                             ((long)ppdStack_4d0 +
                             (long)iVar38 *
                             (long)(int)((uVar15 >> 3 & 0x1ff) + 1 <<
                                        (ulong)(0xfa50U >> (ulong)((uVar15 & 7) << 1) & 3)));
              lStack_4c8 = lStack_4c8 + uStack_5b8 * (long)iVar38;
              uVar43 = uVar43 + uVar2;
              uVar37 = uVar37 - uVar2;
            } while (uVar43 < uVar27);
          }
          FUN_109a8350c(&uStack_6c0);
        }
      }
      if (uStack_490 != &pdStack_480 && uStack_490 != (double **)0x0) {
        __ZdaPv();
      }
      if (uStack_648 != 0) {
        piVar1 = (int *)(uStack_648 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar29 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_680);
        }
      }
      uStack_648 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      if (0 < uStack_680._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_640 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_680._4_4_);
      }
      if (puStack_638 != &uStack_630 && puStack_638 != (undefined8 *)0x0) {
        _free(puStack_638[-1]);
      }
      if (uStack_5e8 != 0) {
        piVar1 = (int *)(uStack_5e8 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar29 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_620);
        }
      }
      uStack_5e8 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      if (0 < uStack_620._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_5e0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_620._4_4_);
      }
      if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
        _free(puStack_5d8[-1]);
      }
      if (uStack_578 != 0) {
        piVar1 = (int *)(uStack_578 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar29 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_5b0);
        }
      }
      uStack_578 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      if (0 < uStack_5b0._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_570 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_5b0._4_4_);
      }
      if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
        _free(puStack_568[-1]);
      }
      if (uStack_518 != 0) {
        piVar1 = (int *)(uStack_518 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar29 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_550);
        }
      }
      uStack_518 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      if (0 < uStack_550._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_510 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_550._4_4_);
      }
      if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
        uVar23 = puStack_508[-1];
LAB_109a2a9f0:
        _free(uVar23);
      }
      goto LAB_109a2a9f4;
    }
    puVar16 = param_4;
    FUN_109a8b904(param_4,0xffffffff);
    if (((uint)puVar16 < 2) &&
       (puVar16 = param_4, FUN_109a8d584(param_4,param_1), ((ulong)puVar16 & 1) != 0)) {
      puVar16 = param_3;
      FUN_109a8d584(param_3,param_1);
      if ((int)puVar16 == 0) {
        puVar16 = param_1;
        FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
        FUN_109a8727c(param_3,puVar16,&uStack_490,uVar30,0xffffffff,0,0);
      }
      else {
        puVar16 = param_3;
        FUN_109a8b904(param_3,0xffffffff);
        puVar31 = param_1;
        FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
        FUN_109a8727c(param_3,puVar31,&uStack_490,uVar30,0xffffffff,0,0);
        if ((uint)puVar16 == uVar30) goto LAB_109a29cf8;
      }
      uStack_5b0 = (double *)0x0;
      uStack_490 = (double **)CONCAT44(uStack_490._4_4_,0xc1020006);
      uStack_488 = (double **)&uStack_5b0;
      pdStack_480 = (double *)((long)&MACH_HEADER.magic + 1);
      uStack_550 = uStack_550 & 0xffffffff00000000;
      uStack_540 = 0;
      uStack_548 = 0;
      FUN_109a9168c(param_3,&uStack_490,&uStack_550);
      goto LAB_109a29cf8;
    }
  }
  puVar20 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *puVar20 = 1;
  uStack_490 = (double **)(puVar20 + 1);
  uStack_488 = (double **)0x40;
  *(undefined8 *)(puVar20 + 3) = 0x4355385f5643203d;
  *(undefined8 *)(puVar20 + 1) = 0x3d20657079746d28;
  *(undefined8 *)(puVar20 + 7) = 0x5643203d3d206570;
  *(undefined8 *)(puVar20 + 5) = 0x79746d207c7c2031;
  *(undefined8 *)(puVar20 + 0xb) = 0x2e6b73616d5f2026;
  *(undefined8 *)(puVar20 + 9) = 0x262029314353385f;
  *(undefined1 *)(puVar20 + 0x11) = 0;
  *(undefined8 *)(puVar20 + 0xf) = 0x2931637273702a28;
  *(undefined8 *)(puVar20 + 0xd) = 0x657a6953656d6173;
  FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x2b7);
LAB_109a2b0d8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109a2b0dc);
  (*pcVar9)();
}



/* Entry: 109a2b240; end: 109a2b293;  */

/* WARNING: Removing unreachable block (ram,0x000109a298d4) */
/* WARNING: Removing unreachable block (ram,0x000109a29610) */
/* WARNING: Removing unreachable block (ram,0x000109a29b54) */
/* WARNING: Removing unreachable block (ram,0x000109a29b58) */
/* WARNING: Removing unreachable block (ram,0x000109a29b60) */

void FUN_109a2b240(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  double **ppdVar3;
  double **ppdVar4;
  ulong uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  double **ppdVar20;
  double **ppdVar21;
  undefined8 uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  double **ppdVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  code *pcVar32;
  double *pdVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  double **ppdVar42;
  ulong uVar43;
  double **ppdVar44;
  code *pcStack_728;
  code *pcStack_710;
  code *pcStack_6f8;
  uint uStack_6d8;
  uint uStack_6cc;
  int aiStack_6c8 [2];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined4 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  double **ppdStack_4d8;
  double **ppdStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  double *pdStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  ulong uStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_78;
  
  puVar23 = param_1;
  FUN_109a91d90();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar30 = *param_1;
  uVar6 = *param_2;
  puVar15 = puVar23;
  FUN_109a8e1c4();
  uVar13 = (uint)puVar15;
  puVar31 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar16 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar14 = (uint)puVar16;
  puVar17 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  puVar18 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  iVar29 = (int)puVar17;
  if (iVar29 < 3) {
    FUN_109a8b004(&uStack_4e0,param_1,0xffffffff);
  }
  else {
    uStack_4e0 = 0;
  }
  iVar38 = (int)puVar18;
  if (iVar38 < 3) {
    FUN_109a8b004(&uStack_4e8,param_2,0xffffffff);
  }
  else {
    uStack_4e8 = 0;
  }
  puVar17 = param_1;
  FUN_109a8d7e8(param_1,0xffffffff);
  uVar30 = uVar30 & 0x1f0000;
  uStack_6d8 = uVar6 & 0x1f0000;
  uVar28 = uVar14 >> 3 & 0x1ff;
  pcStack_728._0_4_ = uVar14 >> 3 & 0x1ff;
  uStack_6cc = uVar28 + 1;
  if (((int)puVar17 < 3) &&
     (puVar17 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar17 != 0)) {
    FUN_109a8b004(&uStack_490,param_1,0xffffffff);
    if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
       ((uVar30 != 0x20000 && ((uVar6 & 0x1f0000) == 0x20000)))) goto LAB_109a29528;
    bVar11 = true;
    if (((((uint)uStack_490 != 1 || uStack_490._4_4_ != uStack_6cc && uStack_490._4_4_ != 1) &&
         (uStack_490._4_4_ != 1 || (uint)uStack_490 != uStack_6cc)) &&
        (bVar11 = false, (uint)uStack_490 == 1)) && (uStack_490._4_4_ == 4)) {
      puVar17 = param_1;
      FUN_109a8b904(param_1,0xffffffff);
      bVar11 = uVar28 < 4 && (int)puVar17 == 6;
    }
  }
  else {
LAB_109a29528:
    bVar11 = false;
  }
  puVar17 = param_2;
  FUN_109a8d7e8(param_2,0xffffffff);
  uVar41 = (uint)puVar31;
  uVar28 = uVar41 >> 3 & 0x1ff;
  uVar6 = uVar28 + 1;
  if (((int)puVar17 < 3) &&
     (puVar17 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar17 != 0)) {
    FUN_109a8b004(&uStack_490,param_2,0xffffffff);
    if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
       ((uVar30 == 0x20000 && (uStack_6d8 != 0x20000)))) goto LAB_109a29594;
    bVar12 = true;
    if (((((uint)uStack_490 != 1 || uStack_490._4_4_ != uVar6 && uStack_490._4_4_ != 1) &&
         (uStack_490._4_4_ != 1 || (uint)uStack_490 != uVar6)) &&
        (bVar12 = false, (uint)uStack_490 == 1)) && (uStack_490._4_4_ == 4)) {
      puVar17 = param_2;
      FUN_109a8b904(param_2,0xffffffff);
      bVar12 = uVar28 < 4 && (int)puVar17 == 6;
    }
  }
  else {
LAB_109a29594:
    bVar12 = false;
  }
  pcStack_710._0_4_ = uVar41 & 7;
  if ((uVar30 == uStack_6d8) || (uVar28 == 0)) {
    if (((((((((int)uStack_4e0 == (int)uStack_4e8 && uStack_4e0._4_4_ == uStack_4e8._4_4_) &&
             iVar29 < 3) && iVar38 < 3) && uVar41 == uVar14) & uVar13) != 1) ||
        (((int)*param_3 < 0 &&
         (puVar17 = param_3, FUN_109a8b904(param_3,0xffffffff), (uint)puVar17 != uVar41)))) ||
       (bVar11 != bVar12)) goto LAB_109a296e4;
    puVar23 = param_1;
    FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
    FUN_109a8727c(param_3,puVar23,&uStack_490,puVar31,0xffffffff,0,0);
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar24 = *(undefined8 **)(param_1 + 2);
      uStack_450 = (ulong)&uStack_490 | 8;
      uStack_488 = (double **)puVar24[1];
      uStack_490 = (double **)*puVar24;
      uStack_478 = puVar24[3];
      pdStack_480 = (double *)puVar24[2];
      uStack_468 = puVar24[5];
      uStack_470 = puVar24[4];
      lStack_458 = puVar24[7];
      uStack_460 = puVar24[6];
      puStack_448 = &uStack_440;
      uStack_438 = 0;
      uStack_440 = 0;
      if (puVar24[7] != 0) {
        piVar1 = (int *)(puVar24[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar24 + 4) < 3) {
        uStack_440 = *(undefined8 *)puVar24[9];
        uStack_438 = ((undefined8 *)puVar24[9])[1];
      }
      else {
        uStack_490 = (double **)((ulong)uStack_490 & 0xffffffff);
        func_0x000109a84868(&uStack_490);
      }
    }
    else {
      FUN_109a8a180(&uStack_490,param_1,0xffffffff);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(param_2 + 2);
      uStack_510 = (ulong)&uStack_550 | 8;
      uStack_548 = puVar25[1];
      uStack_550 = *puVar25;
      uStack_538 = puVar25[3];
      uStack_540 = puVar25[2];
      uStack_528 = puVar25[5];
      uStack_530 = puVar25[4];
      uStack_518 = puVar25[7];
      uStack_520 = puVar25[6];
      puStack_508 = &uStack_500;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_500 = *(undefined8 *)puVar25[9];
        uStack_4f8 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_550 = uStack_550 & 0xffffffff;
        func_0x000109a84868(&uStack_550);
      }
    }
    else {
      FUN_109a8a180(&uStack_550,param_2,0xffffffff);
    }
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar25 = *(ulong **)(param_3 + 2);
      uStack_570 = (ulong)&uStack_5b0 | 8;
      uStack_5a8 = puVar25[1];
      uStack_5b0 = (double *)*puVar25;
      uStack_598 = puVar25[3];
      uStack_5a0 = puVar25[2];
      uStack_588 = puVar25[5];
      uStack_590 = puVar25[4];
      uStack_578 = puVar25[7];
      uStack_580 = puVar25[6];
      puStack_568 = &uStack_560;
      uStack_558 = 0;
      uStack_560 = 0;
      if (puVar25[7] != 0) {
        piVar1 = (int *)(puVar25[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar25 + 4) < 3) {
        uStack_560 = *(undefined8 *)puVar25[9];
        uStack_558 = ((undefined8 *)puVar25[9])[1];
      }
      else {
        uStack_5b0 = (double *)((ulong)uStack_5b0 & 0xffffffff);
        func_0x000109a84868(&uStack_5b0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5b0,param_3,0xffffffff);
    }
    uVar35 = (ulong)uStack_488 & 0xffffffff;
    iVar29 = ((uint)uStack_490 >> 3 & 0x1ff) + 1;
    if (((((uint)uStack_490 & (uint)uStack_550 & (uint)uStack_5b0) >> 0xe & 1) == 0) ||
       (uVar27 = (long)uStack_488._4_4_ * (long)iVar29 * (long)(int)uStack_488,
       uVar27 - (long)(int)uVar27 != 0)) {
      uVar27 = (ulong)(uint)(uStack_488._4_4_ * iVar29);
    }
    else {
      uVar35 = 1;
    }
    (*(code *)(&PTR_DAT_1132e8c50)[uVar41 & 7])
              (pdStack_480,uStack_440,uStack_540,uStack_500,uStack_5a0,uStack_560,uVar27,uVar35,0);
    if (uStack_578 != 0) {
      piVar1 = (int *)(uStack_578 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar29 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_5b0);
      }
    }
    uStack_578 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    if (0 < uStack_5b0._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_570 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_5b0._4_4_);
    }
    if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
      _free(puStack_568[-1]);
    }
    if (uStack_518 != 0) {
      piVar1 = (int *)(uStack_518 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar29 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    uStack_518 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    if (0 < uStack_550._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_510 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < uStack_550._4_4_);
    }
    if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
      _free(puStack_508[-1]);
    }
    if (lStack_458 != 0) {
      piVar1 = (int *)(lStack_458 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar29 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar29 + -1 == 0) {
        func_0x000109a848d4(&uStack_490);
      }
    }
    lStack_458 = 0;
    uStack_478 = 0;
    pdStack_480 = (double *)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    if (0 < (int)uStack_490._4_4_) {
      lVar36 = 0;
      do {
        *(undefined4 *)(uStack_450 + lVar36 * 4) = 0;
        lVar36 = lVar36 + 1;
      } while (lVar36 < (int)uStack_490._4_4_);
    }
    if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
      uVar22 = puStack_448[-1];
      goto LAB_109a2a9f0;
    }
LAB_109a2a9f4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a296e4:
    uVar40 = uVar14 & 7;
    if (iVar29 == iVar38) {
      if ((int)uStack_4e0 != (int)uStack_4e8) goto LAB_109a29768;
      if (((uStack_4e0._4_4_ != uStack_4e8._4_4_) || (uVar28 != (uint)pcStack_728)) ||
         ((uVar30 == 0x20000 &&
          (((int)uStack_4e0 == 1 && (uStack_4e0._4_4_ == 4 || uStack_4e0._4_4_ == 1))))))
      goto LAB_109a29768;
      if (uStack_6d8 == 0x20000) {
        if (((int)uStack_4e0 == 1) && (uStack_4e0._4_4_ == 4 || uStack_4e0._4_4_ == 1))
        goto LAB_109a29768;
      }
      bVar11 = false;
      bVar12 = false;
      uStack_6cc = uVar6;
    }
    else {
LAB_109a29768:
      puVar17 = param_1;
      FUN_109a8d7e8(param_1,0xffffffff);
      if ((2 < (int)puVar17) ||
         (puVar17 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)puVar17 == 0)) {
LAB_109a297c8:
        puVar31 = param_2;
        FUN_109a8d7e8(param_2,0xffffffff);
        if (((int)puVar31 < 3) &&
           (puVar31 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar31 != 0)) {
          FUN_109a8b004(&uStack_490,param_2,0xffffffff);
          if ((((uint)uStack_490 == 1) || (uStack_490._4_4_ == 1)) &&
             (((uVar30 != 0x20000 || (uStack_6d8 == 0x20000)) &&
              ((((uint)uStack_490 == 1 && (uStack_490._4_4_ == uVar6 || uStack_490._4_4_ == 1) ||
                (uStack_490._4_4_ == 1 && (uint)uStack_490 == uVar6)) ||
               (((((uint)uStack_490 == 1 && (uStack_490._4_4_ == 4)) &&
                 (puVar31 = param_2, FUN_109a8b904(param_2,0xffffffff), uVar28 < 4)) &&
                ((int)puVar31 == 6)))))))) {
            bVar11 = false;
            puVar31 = (uint *)((ulong)puVar16 & 0xffffffff);
            puVar16 = param_1;
            uVar40 = (uint)pcStack_710;
            uStack_6cc = uVar6;
            goto LAB_109a298ac;
          }
        }
        puVar19 = (undefined4 *)0xa0;
        func_0x000107c2ae8c();
        *puVar19 = 1;
        uStack_490 = (double **)(puVar19 + 1);
        uStack_488 = (double **)0x99;
        *(undefined8 *)(puVar19 + 0x1b) = 0x726f6e202c29736c;
        *(undefined8 *)(puVar19 + 0x19) = 0x656e6e6168632066;
        *(undefined8 *)(puVar19 + 0x1f) = 0x616c61637320706f;
        *(undefined8 *)(puVar19 + 0x1d) = 0x2079617272612720;
        *(undefined8 *)(puVar19 + 0x23) = 0x2072616c61637327;
        *(undefined8 *)(puVar19 + 0x21) = 0x20726f6e202c2772;
        *(undefined8 *)((long)puVar19 + 0x95) = 0x2779617272612070;
        *(undefined8 *)((long)puVar19 + 0x8d) = 0x6f2072616c616373;
        *(undefined8 *)(puVar19 + 0xb) = 0x6572656877282027;
        *(undefined8 *)(puVar19 + 9) = 0x796172726120706f;
        *(undefined8 *)(puVar19 + 0xf) = 0x6568742065766168;
        *(undefined8 *)(puVar19 + 0xd) = 0x2073796172726120;
        *(undefined8 *)(puVar19 + 0x13) = 0x7420646e6120657a;
        *(undefined8 *)(puVar19 + 0x11) = 0x697320656d617320;
        *(undefined8 *)(puVar19 + 0x17) = 0x6f207265626d756e;
        *(undefined8 *)(puVar19 + 0x15) = 0x20656d6173206568;
        *(undefined8 *)(puVar19 + 3) = 0x7369206e6f697461;
        *(undefined8 *)(puVar19 + 1) = 0x7265706f20656854;
        *(undefined1 *)((long)puVar19 + 0x9d) = 0;
        *(undefined8 *)(puVar19 + 7) = 0x2079617272612720;
        *(undefined8 *)(puVar19 + 5) = 0x7265687469656e20;
        FUN_109ac3188(0xffffff2f,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x27f);
        goto LAB_109a2b0d8;
      }
      FUN_109a8b004(&uStack_490,param_1,0xffffffff);
      if ((((uint)uStack_490 != 1) && (uStack_490._4_4_ != 1)) ||
         ((uVar30 != 0x20000 && (uStack_6d8 == 0x20000)))) goto LAB_109a297c8;
      if ((((uint)uStack_490 != 1 || uStack_490._4_4_ != uStack_6cc && uStack_490._4_4_ != 1) &&
          (uStack_490._4_4_ != 1 || (uint)uStack_490 != uStack_6cc)) &&
         (((uint)uStack_490 != 1 ||
          (((uStack_490._4_4_ != 4 ||
            (puVar17 = param_1, FUN_109a8b904(param_1,0xffffffff), 3 < (uint)pcStack_728)) ||
           ((int)puVar17 != 6)))))) goto LAB_109a297c8;
      uVar22 = uStack_4e8;
      uStack_4e8 = uStack_4e0;
      bVar11 = true;
      puVar16 = param_2;
      param_2 = param_1;
      uStack_4e0 = uVar22;
      uVar41 = uVar14;
LAB_109a298ac:
      if (((int)puVar31 != 6) || ((uStack_4e8._4_4_ != 1 && (uStack_4e8._4_4_ != 4)))) {
        puVar19 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar19 = 1;
        uStack_490 = (double **)(puVar19 + 1);
        uStack_488 = (double **)0x37;
        *(undefined8 *)(puVar19 + 3) = 0x204634365f564320;
        *(undefined8 *)(puVar19 + 1) = 0x3d3d203265707974;
        *(undefined1 *)((long)puVar19 + 0x3b) = 0;
        *(undefined8 *)(puVar19 + 7) = 0x3d20746867696568;
        *(undefined8 *)(puVar19 + 5) = 0x2e327a7328202626;
        *(undefined8 *)(puVar19 + 0xb) = 0x68676965682e327a;
        *(undefined8 *)(puVar19 + 9) = 0x73207c7c2031203d;
        *(undefined8 *)((long)puVar19 + 0x33) = 0x2934203d3d207468;
        FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x281);
        goto LAB_109a2b0d8;
      }
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar24 = *(undefined8 **)(param_2 + 2);
        uStack_450 = (ulong)&uStack_490 | 8;
        uStack_488 = (double **)puVar24[1];
        uStack_490 = (double **)*puVar24;
        uStack_478 = puVar24[3];
        pdStack_480 = (double *)puVar24[2];
        uStack_468 = puVar24[5];
        uStack_470 = puVar24[4];
        lStack_458 = puVar24[7];
        uStack_460 = puVar24[6];
        puStack_448 = &uStack_440;
        uStack_438 = 0;
        uStack_440 = 0;
        if (puVar24[7] != 0) {
          piVar1 = (int *)(puVar24[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar24 + 4) < 3) {
          uStack_440 = *(undefined8 *)puVar24[9];
          uStack_438 = ((undefined8 *)puVar24[9])[1];
        }
        else {
          uStack_490 = (double **)((ulong)uStack_490 & 0xffffffff);
          func_0x000109a84868(&uStack_490);
        }
      }
      else {
        FUN_109a8a180(&uStack_490,param_2,0xffffffff);
      }
      iVar38 = 0x7fffffff;
      iVar29 = -0x80000000;
      uVar35 = (ulong)uStack_6cc;
      pdVar33 = pdStack_480;
      do {
        iVar34 = (int)(long)(double)(long)*pdVar33;
        if (*pdVar33 != (double)iVar34) {
          uVar30 = 5;
          if (uVar40 != 5 && 3 < uVar40) {
            uVar30 = 6;
          }
          goto LAB_109a299f8;
        }
        if (iVar29 <= iVar34) {
          iVar29 = iVar34;
        }
        if (iVar34 <= iVar38) {
          iVar38 = iVar34;
        }
        uVar35 = uVar35 - 1;
        pdVar33 = pdVar33 + 1;
      } while (uVar35 != 0);
      if ((iVar38 < 0) || (0xff < iVar29)) {
        if ((iVar38 < -0x80) || (0x7f < iVar29)) {
          if ((iVar38 < 0) || (0xffff < iVar29)) {
            uVar30 = 3;
            if (0x7fff < iVar29 || iVar38 < -0x8000) {
              uVar30 = 4;
            }
          }
          else {
            uVar30 = 2;
          }
        }
        else {
          uVar30 = 1;
        }
      }
      else {
        uVar30 = 0;
      }
LAB_109a299f8:
      if (lStack_458 != 0) {
        piVar1 = (int *)(lStack_458 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_490);
        }
      }
      lStack_458 = 0;
      uStack_478 = 0;
      pdStack_480 = (double *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      if (0 < (int)uStack_490._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_450 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < (int)uStack_490._4_4_);
      }
      if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
        _free(puStack_448[-1]);
      }
      bVar12 = true;
      uVar14 = 6;
      param_1 = puVar16;
      pcStack_710._0_4_ = uVar40;
      uVar40 = uVar30;
    }
    if ((int)*param_3 < 0) {
      puVar31 = param_3;
      FUN_109a8b904(param_3,0xffffffff);
      uVar30 = (uint)puVar31;
    }
    else {
      bVar8 = bVar12;
      if (uVar41 == uVar14) {
        bVar8 = true;
      }
      uVar30 = uVar41;
      if (!bVar8) {
        puVar19 = (undefined4 *)0x90;
        func_0x000107c2ae8c();
        *puVar19 = 1;
        uStack_490 = (double **)(puVar19 + 1);
        uStack_488 = (double **)0x88;
        *(undefined8 *)(puVar19 + 0x17) = 0x74757074756f2065;
        *(undefined8 *)(puVar19 + 0x15) = 0x6874202c73657079;
        *(undefined8 *)(puVar19 + 0x1b) = 0x7473756d20657079;
        *(undefined8 *)(puVar19 + 0x19) = 0x7420796172726120;
        *(undefined8 *)(puVar19 + 0x1f) = 0x7320796c74696369;
        *(undefined8 *)(puVar19 + 0x1d) = 0x6c70786520656220;
        *(undefined8 *)(puVar19 + 7) = 0x6275732f64646120;
        *(undefined8 *)(puVar19 + 5) = 0x6e69207379617272;
        *(undefined8 *)(puVar19 + 0xb) = 0x642f796c7069746c;
        *(undefined8 *)(puVar19 + 9) = 0x756d2f7463617274;
        *(undefined8 *)(puVar19 + 0xf) = 0x20736e6f6974636e;
        *(undefined8 *)(puVar19 + 0xd) = 0x7566206564697669;
        *(undefined8 *)(puVar19 + 0x13) = 0x7420746e65726566;
        *(undefined8 *)(puVar19 + 0x11) = 0x6669642065766168;
        *(undefined1 *)(puVar19 + 0x23) = 0;
        *(undefined8 *)(puVar19 + 0x21) = 0x6465696669636570;
        *(undefined8 *)(puVar19 + 3) = 0x61207475706e6920;
        *(undefined8 *)(puVar19 + 1) = 0x656874206e656857;
        FUN_109ac3188(0xfffffffb,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x297);
        goto LAB_109a2b0d8;
      }
    }
    uVar30 = uVar30 & 7;
    if (((uint)pcStack_710 != uVar40) || (uVar30 != (uint)pcStack_710)) {
      if ((uVar40 < 2) && ((uint)pcStack_710 < 2)) {
        uVar28 = 3;
      }
      else {
        uVar6 = (uint)pcStack_710;
        if ((uint)pcStack_710 <= uVar40) {
          uVar6 = uVar40;
        }
        uVar28 = 4;
        if (4 < (uint)pcStack_710 || 4 < uVar40) {
          uVar28 = uVar6;
        }
      }
      if (uVar28 <= uVar30) {
        uVar28 = uVar30;
      }
      uVar6 = 4;
      if (4 < (uint)pcStack_710 && 4 < uVar40) {
        uVar6 = uVar28;
      }
      uVar40 = uVar28;
      if (uVar30 < 5) {
        uVar40 = uVar6;
      }
    }
    uVar28 = uStack_6cc * 8 - 8;
    uVar6 = uVar30 | uVar28;
    if (((ulong)puVar15 & 1) != 0) {
      puVar15 = param_1;
      FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
      FUN_109a8727c(param_3,puVar15,&uStack_490,uVar6,0xffffffff,0,0);
LAB_109a29cf8:
      uVar6 = uVar40 | uVar28;
      if (uVar41 == uVar6) {
        pcVar10 = (code *)0x0;
      }
      else {
        pcVar10 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar40 * 8 + (ulong)(uVar41 & 7)];
      }
      pcStack_6f8 = pcVar10;
      if (uVar14 != uVar41) {
        if (uVar14 == uVar6) {
          pcStack_6f8 = (code *)0x0;
        }
        else {
          pcStack_6f8 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar40 * 8 + (ulong)(uVar14 & 7)];
        }
      }
      if (uVar30 == uVar40) {
        pcStack_710 = (code *)0x0;
      }
      else {
        pcStack_710 = (code *)(&PTR_FUN_110b21620)[(ulong)uVar30 * 8 + (ulong)uVar40];
      }
      iVar29 = (uVar28 >> 3) + 1;
      uVar30 = iVar29 << (ulong)(0xfa50U >> (ulong)(uVar30 << 1) & 3);
      uStack_5b8 = (ulong)uVar30;
      pcStack_728 = (code *)0x109a47910;
      if (uVar30 < 0x21) {
        pcVar32 = *(code **)(uStack_5b8 * 8 + 0x1132e8de8);
        pcStack_728 = (code *)0x109a47910;
        if (pcVar32 != (code *)0x0) {
          pcStack_728 = pcVar32;
        }
      }
      if ((*param_1 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_1 + 2);
        uStack_510 = (ulong)&uStack_550 | 8;
        uStack_548 = puVar25[1];
        uStack_550 = *puVar25;
        uStack_538 = puVar25[3];
        uStack_540 = puVar25[2];
        uStack_528 = puVar25[5];
        uStack_530 = puVar25[4];
        uStack_518 = puVar25[7];
        uStack_520 = puVar25[6];
        puStack_508 = &uStack_500;
        uStack_4f8 = 0;
        uStack_500 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_500 = *(undefined8 *)puVar25[9];
          uStack_4f8 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_550 = uStack_550 & 0xffffffff;
          func_0x000109a84868(&uStack_550);
        }
      }
      else {
        FUN_109a8a180(&uStack_550,param_1,0xffffffff);
      }
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_2 + 2);
        uStack_570 = (ulong)&uStack_5b0 | 8;
        uStack_5a8 = puVar25[1];
        uStack_5b0 = (double *)*puVar25;
        uStack_598 = puVar25[3];
        uStack_5a0 = puVar25[2];
        uStack_588 = puVar25[5];
        uStack_590 = puVar25[4];
        uStack_578 = puVar25[7];
        uStack_580 = puVar25[6];
        puStack_568 = &uStack_560;
        uStack_558 = 0;
        uStack_560 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_560 = *(undefined8 *)puVar25[9];
          uStack_558 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_5b0 = (double *)((ulong)uStack_5b0 & 0xffffffff);
          func_0x000109a84868(&uStack_5b0);
        }
      }
      else {
        FUN_109a8a180(&uStack_5b0,param_2,0xffffffff);
      }
      if ((*param_3 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_3 + 2);
        uStack_5e0 = (ulong)&uStack_620 | 8;
        uStack_618 = puVar25[1];
        uStack_620 = *puVar25;
        uStack_608 = puVar25[3];
        uStack_610 = puVar25[2];
        uStack_5f8 = puVar25[5];
        uStack_600 = puVar25[4];
        uStack_5e8 = puVar25[7];
        uStack_5f0 = puVar25[6];
        puStack_5d8 = &uStack_5d0;
        uStack_5d0 = 0;
        uStack_5c8 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_5d0 = *(undefined8 *)puVar25[9];
          uStack_5c8 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_620 = uStack_620 & 0xffffffff;
          func_0x000109a84868(&uStack_620);
        }
      }
      else {
        FUN_109a8a180(&uStack_620,param_3,0xffffffff);
      }
      if ((*puVar23 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(puVar23 + 2);
        uStack_640 = (ulong)&uStack_680 | 8;
        uStack_678 = puVar25[1];
        uStack_680 = *puVar25;
        uStack_668 = puVar25[3];
        uStack_670 = puVar25[2];
        uStack_658 = puVar25[5];
        uStack_660 = puVar25[4];
        uStack_648 = puVar25[7];
        uStack_650 = puVar25[6];
        puStack_638 = &uStack_630;
        uStack_630 = 0;
        uStack_628 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_630 = *(undefined8 *)puVar25[9];
          uStack_628 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_680 = uStack_680 & 0xffffffff;
          func_0x000109a84868(&uStack_680);
        }
      }
      else {
        FUN_109a8a180(&uStack_680,puVar23,0xffffffff);
      }
      uVar28 = iVar29 << (ulong)(0xfa50U >> (ulong)(uVar40 << 1) & 3);
      uVar35 = (ulong)uVar28;
      uVar41 = (uVar41 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar41 & 7) << 1) & 3);
      uVar30 = uVar13 ^ 1;
      uVar9 = 0;
      if ((uVar28 & 0xffff) != 0) {
        uVar9 = (uVar28 + 0x3ff & 0xffff) / (uVar28 & 0xffff);
      }
      uVar39 = (ulong)uVar9;
      uStack_488 = (double **)0x408;
      uVar27 = uVar35;
      if (pcVar10 == (code *)0x0) {
        uVar27 = 0;
      }
      bVar8 = bVar12;
      if (pcStack_6f8 != (code *)0x0) {
        bVar8 = true;
      }
      uVar2 = uVar35;
      if (!bVar8) {
        uVar2 = 0;
      }
      uVar43 = uVar35;
      if (pcStack_710 == (code *)0x0) {
        uVar43 = 0;
      }
      uVar37 = 0;
      if (uVar13 == 0) {
        uVar37 = uStack_5b8;
      }
      lVar36 = uVar2 + uVar27 + uVar43 + uVar37;
      pcVar32 = (code *)(&PTR_DAT_1132e8c50)[uVar40];
      puStack_4b8 = &uStack_550;
      uStack_490 = &pdStack_480;
      if (bVar12) {
        puStack_4b0 = &uStack_620;
        puStack_4a8 = &uStack_680;
        puStack_4a0 = (undefined8 *)0x0;
        uStack_688 = 0;
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        uStack_6c0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        FUN_109a9b368(&uStack_6c0,&puStack_4b8,0,&ppdStack_4d8,0xffffffff);
        uVar2 = uStack_698;
        uVar27 = uStack_698;
        if (uVar39 <= uStack_698) {
          uVar27 = uVar39;
        }
        ppdVar42 = (double **)(uVar27 * lVar36 + 0x40);
        ppdVar21 = ppdVar42;
        if (uStack_488 < ppdVar42) {
          if (uStack_490 != &pdStack_480) {
            if (uStack_490 != (double **)0x0) {
              __ZdaPv(uStack_490);
            }
            uStack_488 = (double **)0x408;
            uStack_490 = &pdStack_480;
          }
          ppdVar21 = uStack_488;
          if ((double **)0x408 < ppdVar42) {
            ppdVar21 = ppdVar42;
            __Znam();
            uStack_490 = ppdVar21;
            ppdVar21 = ppdVar42;
          }
        }
        uStack_488 = ppdVar21;
        ppdVar42 = uStack_490;
        lVar36 = uVar27 * uVar35;
        ppdVar21 = (double **)((long)uStack_490 + lVar36 + 0xf & 0xfffffffffffffff0);
        if (pcVar10 == (code *)0x0) {
          ppdVar21 = uStack_490;
        }
        FUN_109a27738(&uStack_5b0,uVar6,ppdVar21,uVar27);
        uVar39 = 0;
        uVar43 = (long)ppdVar21 + lVar36 + 0xf & 0xfffffffffffffff0;
        uVar35 = uVar43 + lVar36 + 0xf;
        if (pcStack_710 != (code *)0x0) {
          uVar30 = 1;
        }
        for (; uVar39 < uStack_6a0; uVar39 = uVar39 + 1) {
          if (uVar2 != 0) {
            uVar37 = 0;
            do {
              ppdVar4 = ppdStack_4d0;
              uVar5 = uVar2 - uVar37;
              if (uVar27 <= uVar2 - uVar37) {
                uVar5 = uVar27;
              }
              iVar38 = (int)uVar5;
              iVar29 = uStack_6cc * iVar38;
              ppdVar20 = ppdStack_4d8;
              if (pcVar10 != (code *)0x0) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcVar10)(ppdStack_4d8,1,0,1,ppdVar42,1,aiStack_6c8,0);
                ppdVar20 = ppdVar42;
              }
              ppdVar3 = ppdVar20;
              ppdVar44 = ppdVar21;
              if (!bVar11) {
                ppdVar3 = ppdVar21;
                ppdVar44 = ppdVar20;
              }
              if ((uVar30 & 1) == 0) {
                (*pcVar32)(ppdVar44,1,ppdVar3,1,ppdVar4,1,iVar29,1,0);
              }
              else {
                (*pcVar32)(ppdVar44,1,ppdVar3,1,uVar43,1,iVar29,1,0);
                if (uVar13 == 0) {
                  if (pcStack_710 == (code *)0x0) {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar43,1,lStack_4c8,1,ppdVar4,1,aiStack_6c8,&uStack_5b8);
                  }
                  else {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar29;
                    (*pcStack_710)(uVar43,1,0,1,uVar35 & 0xfffffffffffffff0,1,aiStack_6c8,0);
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar35 & 0xfffffffffffffff0,1,lStack_4c8,1,ppdVar4,1,aiStack_6c8,
                                   &uStack_5b8);
                  }
                  lStack_4c8 = lStack_4c8 + uVar5;
                }
                else {
                  aiStack_6c8[1] = 1;
                  aiStack_6c8[0] = iVar29;
                  (*pcStack_710)(uVar43,1,0,1,ppdVar4,1,aiStack_6c8,0);
                }
              }
              ppdStack_4d8 = (double **)((long)ppdStack_4d8 + uVar5 * uVar41);
              ppdStack_4d0 = (double **)((long)ppdStack_4d0 + uStack_5b8 * uVar5);
              uVar37 = uVar37 + uVar27;
            } while (uVar37 < uVar2);
          }
          FUN_109a8350c(&uStack_6c0);
        }
      }
      else {
        puStack_4b0 = &uStack_5b0;
        puStack_4a8 = &uStack_620;
        puStack_4a0 = &uStack_680;
        uStack_498 = 0;
        uStack_688 = 0;
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        uStack_6c0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        FUN_109a9b368(&uStack_6c0,&puStack_4b8,0,&ppdStack_4d8,0xffffffff);
        uVar27 = uStack_698;
        uVar6 = uVar30;
        if (pcVar10 != (code *)0x0) {
          uVar6 = 1;
        }
        if (pcStack_6f8 != (code *)0x0) {
          uVar6 = 1;
        }
        if (pcStack_710 != (code *)0x0) {
          uVar6 = 1;
        }
        uVar2 = uStack_698;
        if (uVar39 <= uStack_698) {
          uVar2 = uVar39;
        }
        if (uVar6 == 0) {
          uVar2 = uStack_698;
        }
        ppdVar42 = (double **)(uVar2 * lVar36 + 0x40);
        ppdVar21 = ppdVar42;
        if (uStack_488 < ppdVar42) {
          if (uStack_490 != &pdStack_480) {
            if (uStack_490 != (double **)0x0) {
              __ZdaPv(uStack_490);
            }
            uStack_488 = (double **)0x408;
            uStack_490 = &pdStack_480;
          }
          ppdVar21 = uStack_488;
          if ((double **)0x408 < ppdVar42) {
            ppdVar21 = ppdVar42;
            __Znam();
            uStack_490 = ppdVar21;
            ppdVar21 = ppdVar42;
          }
        }
        uStack_488 = ppdVar21;
        ppdVar42 = uStack_490;
        uVar39 = 0;
        lVar36 = uVar2 * uVar35;
        ppdVar21 = (double **)((long)uStack_490 + lVar36 + 0xf & 0xfffffffffffffff0);
        if (pcVar10 == (code *)0x0) {
          ppdVar21 = uStack_490;
        }
        ppdVar20 = (double **)((long)ppdVar21 + lVar36 + 0xf & 0xfffffffffffffff0);
        ppdVar4 = ppdVar21;
        if (pcStack_6f8 == (code *)0x0) {
          ppdVar4 = (double **)0x0;
          ppdVar20 = ppdVar21;
        }
        uVar35 = (long)ppdVar20 + lVar36 + 0xf;
        if (pcStack_710 != (code *)0x0) {
          uVar30 = 1;
        }
        for (; uVar39 < uStack_6a0; uVar39 = uVar39 + 1) {
          if (uVar27 != 0) {
            uVar43 = 0;
            uVar37 = uVar27;
            do {
              lVar36 = lStack_4c8;
              ppdVar3 = ppdStack_4d0;
              uVar5 = uVar37;
              if (uVar2 <= uVar37) {
                uVar5 = uVar2;
              }
              iVar38 = (int)uVar5;
              iVar29 = uStack_6cc * iVar38;
              ppdVar44 = ppdStack_4d8;
              if (pcVar10 != (code *)0x0) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcVar10)(ppdStack_4d8,1,0,1,ppdVar42,1,aiStack_6c8,0);
                ppdVar44 = ppdVar42;
              }
              ppdVar26 = ppdVar44;
              if ((ppdStack_4d8 != ppdStack_4d0) && (ppdVar26 = ppdVar3, pcStack_6f8 != (code *)0x0)
                 ) {
                aiStack_6c8[1] = 1;
                aiStack_6c8[0] = iVar29;
                (*pcStack_6f8)(ppdVar3,1,0,1,ppdVar21,1,aiStack_6c8,0);
                ppdVar26 = ppdVar4;
              }
              if ((uVar30 & 1) == 0) {
                (*pcVar32)(ppdVar44,1,ppdVar26,1,lVar36,1,iVar29,1,0);
              }
              else {
                (*pcVar32)(ppdVar44,1,ppdVar26,1,ppdVar20,0,iVar29,1,0);
                if (uVar13 == 0) {
                  if (pcStack_710 == (code *)0x0) {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(ppdVar20,1,lStack_4c0,1,lVar36,1,aiStack_6c8,&uStack_5b8);
                  }
                  else {
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar29;
                    (*pcStack_710)(ppdVar20,1,0,1,uVar35 & 0xfffffffffffffff0,1,aiStack_6c8,0);
                    aiStack_6c8[1] = 1;
                    aiStack_6c8[0] = iVar38;
                    (*pcStack_728)(uVar35 & 0xfffffffffffffff0,1,lStack_4c0,1,lVar36,1,aiStack_6c8,
                                   &uStack_5b8);
                  }
                  lStack_4c0 = lStack_4c0 + iVar38;
                }
                else {
                  aiStack_6c8[1] = 1;
                  aiStack_6c8[0] = iVar29;
                  (*pcStack_710)(ppdVar20,1,0,1,lVar36,1,aiStack_6c8,0);
                }
              }
              ppdStack_4d8 = (double **)((long)ppdStack_4d8 + (long)iVar38 * (long)(int)uVar41);
              ppdStack_4d0 = (double **)
                             ((long)ppdStack_4d0 +
                             (long)iVar38 *
                             (long)(int)((uVar14 >> 3 & 0x1ff) + 1 <<
                                        (ulong)(0xfa50U >> (ulong)((uVar14 & 7) << 1) & 3)));
              lStack_4c8 = lStack_4c8 + uStack_5b8 * (long)iVar38;
              uVar43 = uVar43 + uVar2;
              uVar37 = uVar37 - uVar2;
            } while (uVar43 < uVar27);
          }
          FUN_109a8350c(&uStack_6c0);
        }
      }
      if (uStack_490 != &pdStack_480 && uStack_490 != (double **)0x0) {
        __ZdaPv();
      }
      if (uStack_648 != 0) {
        piVar1 = (int *)(uStack_648 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_680);
        }
      }
      uStack_648 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      if (0 < uStack_680._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_640 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_680._4_4_);
      }
      if (puStack_638 != &uStack_630 && puStack_638 != (undefined8 *)0x0) {
        _free(puStack_638[-1]);
      }
      if (uStack_5e8 != 0) {
        piVar1 = (int *)(uStack_5e8 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_620);
        }
      }
      uStack_5e8 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      if (0 < uStack_620._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_5e0 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_620._4_4_);
      }
      if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
        _free(puStack_5d8[-1]);
      }
      if (uStack_578 != 0) {
        piVar1 = (int *)(uStack_578 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_5b0);
        }
      }
      uStack_578 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      if (0 < uStack_5b0._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_570 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_5b0._4_4_);
      }
      if (puStack_568 != &uStack_560 && puStack_568 != (undefined8 *)0x0) {
        _free(puStack_568[-1]);
      }
      if (uStack_518 != 0) {
        piVar1 = (int *)(uStack_518 + 0x14);
        do {
          iVar29 = *piVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar29 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_550);
        }
      }
      uStack_518 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      if (0 < uStack_550._4_4_) {
        lVar36 = 0;
        do {
          *(undefined4 *)(uStack_510 + lVar36 * 4) = 0;
          lVar36 = lVar36 + 1;
        } while (lVar36 < uStack_550._4_4_);
      }
      if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
        uVar22 = puStack_508[-1];
LAB_109a2a9f0:
        _free(uVar22);
      }
      goto LAB_109a2a9f4;
    }
    puVar15 = puVar23;
    FUN_109a8b904(puVar23,0xffffffff);
    if (((uint)puVar15 < 2) &&
       (puVar15 = puVar23, FUN_109a8d584(puVar23,param_1), ((ulong)puVar15 & 1) != 0)) {
      puVar15 = param_3;
      FUN_109a8d584(param_3,param_1);
      if ((int)puVar15 == 0) {
        puVar15 = param_1;
        FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
        FUN_109a8727c(param_3,puVar15,&uStack_490,uVar6,0xffffffff,0,0);
      }
      else {
        puVar15 = param_3;
        FUN_109a8b904(param_3,0xffffffff);
        puVar31 = param_1;
        FUN_109a8d1f0(param_1,&uStack_490,0xffffffff);
        FUN_109a8727c(param_3,puVar31,&uStack_490,uVar6,0xffffffff,0,0);
        if ((uint)puVar15 == uVar6) goto LAB_109a29cf8;
      }
      uStack_5b0 = (double *)0x0;
      uStack_490 = (double **)CONCAT44(uStack_490._4_4_,0xc1020006);
      uStack_488 = (double **)&uStack_5b0;
      pdStack_480 = (double *)((long)&MACH_HEADER.magic + 1);
      uStack_550 = uStack_550 & 0xffffffff00000000;
      uStack_540 = 0;
      uStack_548 = 0;
      FUN_109a9168c(param_3,&uStack_490,&uStack_550);
      goto LAB_109a29cf8;
    }
  }
  puVar19 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *puVar19 = 1;
  uStack_490 = (double **)(puVar19 + 1);
  uStack_488 = (double **)0x40;
  *(undefined8 *)(puVar19 + 3) = 0x4355385f5643203d;
  *(undefined8 *)(puVar19 + 1) = 0x3d20657079746d28;
  *(undefined8 *)(puVar19 + 7) = 0x5643203d3d206570;
  *(undefined8 *)(puVar19 + 5) = 0x79746d207c7c2031;
  *(undefined8 *)(puVar19 + 0xb) = 0x2e6b73616d5f2026;
  *(undefined8 *)(puVar19 + 9) = 0x262029314353385f;
  *(undefined1 *)(puVar19 + 0x11) = 0;
  *(undefined8 *)(puVar19 + 0xf) = 0x2931637273702a28;
  *(undefined8 *)(puVar19 + 0xd) = 0x657a6953656d6173;
  FUN_109ac3188(0xffffff29,&uStack_490,&UNK_10f595218,&UNK_10f594df2,0x2b7);
LAB_109a2b0d8:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109a2b0dc);
  (*pcVar10)();
}



/* Entry: 109a2b294; end: 109a2c427;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109a2b294(uint ****param_1,uint *******param_2,uint *******param_3,uint param_4)

{
  int *piVar1;
  uint *****pppppuVar2;
  uint uVar3;
  undefined8 **ppuVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  uint ****ppppuVar15;
  byte *pbVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint *******pppppppuVar23;
  uint *******pppppppuVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  uint ***pppuVar27;
  uint ******ppppppuVar28;
  uint ****ppppuVar29;
  uint ***pppuVar30;
  ulong uVar31;
  uint ****ppppuVar32;
  ulong uVar33;
  uint uVar34;
  code *pcVar35;
  undefined8 *puVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  uint *puVar40;
  int iVar41;
  uint *puVar42;
  byte *pbVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  byte *pbVar48;
  code *pcVar49;
  ulong uVar50;
  uint *******pppppppuVar51;
  long lVar52;
  uint *****pppppuVar53;
  uint ****ppppuVar54;
  uint ****ppppuVar55;
  code *unaff_x26;
  uint ***unaff_x27;
  ulong uVar56;
  uint ****unaff_x28;
  double dVar57;
  uint uStack_e44;
  ulong uStack_e00;
  ulong uStack_df8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  uint *****pppppuStack_dc0;
  uint *****pppppuStack_db8;
  uint *****pppppuStack_db0;
  uint *****pppppuStack_da8;
  uint *****pppppuStack_da0;
  uint *****pppppuStack_d98;
  uint *puStack_d90;
  uint ****ppppuStack_d88;
  uint ***pppuStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined4 uStack_d58;
  ulong uStack_d50;
  ulong uStack_d48;
  undefined4 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  uint **ppuStack_d28;
  uint **ppuStack_d20;
  uint **ppuStack_d18;
  uint **ppuStack_d10;
  uint **ppuStack_d08;
  uint **ppuStack_d00;
  uint **ppuStack_cf8;
  ulong uStack_cf0;
  undefined8 *puStack_ce8;
  uint *puStack_ce0;
  uint *puStack_cd8;
  undefined8 uStack_cd0;
  uint *****pppppuStack_cc8;
  uint *****pppppuStack_cc0;
  uint *****pppppuStack_cb8;
  uint *****pppppuStack_cb0;
  uint *****pppppuStack_ca8;
  uint *****pppppuStack_ca0;
  uint *****pppppuStack_c98;
  uint *puStack_c90;
  uint ****ppppuStack_c88;
  uint ****ppppuStack_c80;
  uint ****ppppuStack_c78;
  undefined8 uStack_c70;
  uint *****pppppuStack_c68;
  uint *****pppppuStack_c60;
  uint *****pppppuStack_c58;
  uint **ppuStack_c50;
  uint **ppuStack_c48;
  uint *****pppppuStack_c40;
  uint *****pppppuStack_c38;
  uint *puStack_c30;
  uint ****ppppuStack_c28;
  uint ***pppuStack_c20;
  uint *puStack_c18;
  undefined8 uStack_c10;
  uint *****pppppuStack_c08;
  uint *****pppppuStack_c00;
  uint *****pppppuStack_bf8;
  uint *****pppppuStack_bf0;
  uint *****pppppuStack_be8;
  uint *****pppppuStack_be0;
  uint *****pppppuStack_bd8;
  uint *puStack_bd0;
  uint ****ppppuStack_bc8;
  uint ****ppppuStack_bc0;
  uint ****ppppuStack_bb8;
  undefined4 *puStack_ba8;
  undefined8 uStack_ba0;
  byte *pbStack_b98;
  byte *pbStack_b90;
  byte abStack_b88 [1032];
  ulong uStack_780;
  byte *pbStack_778;
  ulong uStack_770;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 uStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined8 uStack_728;
  long lStack_720;
  uint ****ppppuStack_710;
  uint ***pppuStack_708;
  code *pcStack_700;
  uint ****ppppuStack_6f8;
  uint ****ppppuStack_6f0;
  undefined8 *puStack_6e8;
  uint *******pppppppuStack_6e0;
  uint ****ppppuStack_6d8;
  uint *******pppppppuStack_6d0;
  uint *******pppppppuStack_6c8;
  undefined1 *puStack_6c0;
  code *pcStack_6b8;
  uint ****ppppuStack_6b0;
  uint *******pppppppuStack_6a8;
  int iStack_69c;
  double dStack_698;
  undefined8 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long lStack_658;
  long lStack_650;
  undefined1 *puStack_648;
  undefined1 auStack_640 [16];
  undefined8 uStack_630;
  uint *******pppppppuStack_628;
  uint *******pppppppuStack_620;
  uint *****pppppuStack_618;
  uint *******pppppppuStack_610;
  uint *****pppppuStack_608;
  uint *****pppppuStack_600;
  uint *****pppppuStack_5f8;
  uint ****ppppuStack_5f0;
  uint ****ppppuStack_5e8;
  uint ****ppppuStack_5e0;
  uint ****ppppuStack_5d8;
  undefined8 uStack_5d0;
  uint *******pppppppuStack_5c8;
  uint *******pppppppuStack_5c0;
  uint *****pppppuStack_5b8;
  uint *******pppppppuStack_5b0;
  uint *****pppppuStack_5a8;
  uint *****pppppuStack_5a0;
  uint *****pppppuStack_598;
  uint ****ppppuStack_590;
  uint ****ppppuStack_588;
  uint ****ppppuStack_580;
  uint *puStack_578;
  uint uStack_564;
  undefined8 uStack_560;
  uint ***pppuStack_558;
  uint ***pppuStack_550;
  uint ***pppuStack_548;
  double *pdStack_540;
  double *pdStack_538;
  undefined8 uStack_530;
  long lStack_528;
  ulong uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  uint *******pppppppuStack_4f8;
  uint *******pppppppuStack_4f0;
  uint *****pppppuStack_4e8;
  uint *******pppppppuStack_4e0;
  uint *****pppppuStack_4d8;
  uint *****pppppuStack_4d0;
  uint *****pppppuStack_4c8;
  uint ****ppppuStack_4c0;
  uint ****ppppuStack_4b8;
  uint ****ppppuStack_4b0;
  uint ****ppppuStack_4a8;
  uint ***pppuStack_e0;
  uint *******pppppppuStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  uint *******pppppppuStack_c0;
  uint ****ppppuStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_564 = param_4;
  if (5 < param_4) {
    puVar26 = (undefined4 *)0x64;
    func_0x000107c2ae8c();
    *puVar26 = 1;
    uStack_500 = (uint *******)(puVar26 + 1);
    pppppppuStack_4f8 = (uint *******)0x5c;
    *(undefined8 *)(puVar26 + 0xb) = 0x207c7c2051455f50;
    *(undefined8 *)(puVar26 + 9) = 0x4d43203d3d20706f;
    *(undefined8 *)(puVar26 + 0xf) = 0x207c7c20454e5f50;
    *(undefined8 *)(puVar26 + 0xd) = 0x4d43203d3d20706f;
    *(undefined8 *)(puVar26 + 0x13) = 0x207c7c2045475f50;
    *(undefined8 *)(puVar26 + 0x11) = 0x4d43203d3d20706f;
    *(undefined8 *)(puVar26 + 0x16) = 0x54475f504d43203d;
    *(undefined8 *)(puVar26 + 0x14) = 0x3d20706f207c7c20;
    *(undefined8 *)(puVar26 + 3) = 0x207c7c20544c5f50;
    *(undefined8 *)(puVar26 + 1) = 0x4d43203d3d20706f;
    *(undefined1 *)(puVar26 + 0x18) = 0;
    *(undefined8 *)(puVar26 + 7) = 0x207c7c20454c5f50;
    *(undefined8 *)(puVar26 + 5) = 0x4d43203d3d20706f;
    FUN_109ac3188(0xffffff29,&uStack_500,&UNK_10f594ecd,&UNK_10f594df2,0x4ae);
    goto LAB_109a2c2fc;
  }
  if (((((ulong)*param_1 & 0x1f0000) == 0x20000) == (((ulong)*param_2 & 0x1f0000) == 0x20000)) &&
     (ppppuVar54 = param_1, FUN_109a8d584(param_1,param_2), (int)ppppuVar54 != 0)) {
    ppppuVar54 = param_1;
    FUN_109a8b904(param_1,0xffffffff);
    pppppppuVar51 = param_2;
    FUN_109a8b904(param_2,0xffffffff);
    if ((int)ppppuVar54 != (int)pppppppuVar51) goto LAB_109a2b344;
    pppppppuVar51 = (uint *******)0x0;
LAB_109a2b4a0:
    uVar34 = *(uint *)param_1;
    uVar7 = *(uint *)param_2;
    ppppuVar55 = (uint ****)(ulong)uVar7;
    if ((uVar34 & 0x1f0000) == 0x10000) {
      pppuVar27 = param_1[1];
      ppppuStack_590 = (uint ****)((ulong)&uStack_5d0 | 8);
      pppppppuStack_5c8 = (uint *******)pppuVar27[1];
      uStack_5d0 = (uint *******)*pppuVar27;
      pppppuStack_5b8 = (uint *****)pppuVar27[3];
      pppppppuStack_5c0 = (uint *******)pppuVar27[2];
      pppppuStack_5a8 = (uint *****)pppuVar27[5];
      pppppppuStack_5b0 = (uint *******)pppuVar27[4];
      pppppuStack_598 = (uint *****)pppuVar27[7];
      pppppuStack_5a0 = (uint *****)pppuVar27[6];
      ppppuStack_588 = (uint ****)&ppppuStack_580;
      ppppuStack_580 = (uint ****)0x0;
      puStack_578 = (uint *)0x0;
      if (pppuVar27[7] != (uint **)0x0) {
        piVar1 = (int *)((long)pppuVar27[7] + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      if (*(int *)((long)pppuVar27 + 4) < 3) {
        ppppuStack_580 = (uint ****)*pppuVar27[9];
        puStack_578 = pppuVar27[9][1];
      }
      else {
        uStack_5d0 = (uint *******)((ulong)uStack_5d0 & 0xffffffff);
        func_0x000109a84868(&uStack_5d0);
      }
    }
    else {
      FUN_109a8a180(&uStack_5d0,param_1,0xffffffff);
    }
    if (((ulong)*param_2 & 0x1f0000) == 0x10000) {
      ppppppuVar28 = param_2[1];
      ppppuStack_5f0 = (uint ****)((ulong)&uStack_630 | 8);
      pppppppuStack_628 = (uint *******)ppppppuVar28[1];
      uStack_630 = (uint *******)*ppppppuVar28;
      pppppuStack_618 = ppppppuVar28[3];
      pppppppuStack_620 = (uint *******)ppppppuVar28[2];
      pppppuStack_608 = ppppppuVar28[5];
      pppppppuStack_610 = (uint *******)ppppppuVar28[4];
      pppppuStack_5f8 = ppppppuVar28[7];
      pppppuStack_600 = ppppppuVar28[6];
      ppppuStack_5e8 = (uint ****)&ppppuStack_5e0;
      ppppuStack_5e0 = (uint ****)0x0;
      ppppuStack_5d8 = (uint ****)0x0;
      if (ppppppuVar28[7] != (uint *****)0x0) {
        puVar40 = (uint *)((long)ppppppuVar28[7] + 0x14);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
          if (bVar12) {
            *puVar40 = *puVar40 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      if (*(int *)((long)ppppppuVar28 + 4) < 3) {
        ppppuStack_5e0 = *ppppppuVar28[9];
        ppppuStack_5d8 = ppppppuVar28[9][1];
      }
      else {
        uStack_630 = (uint *******)((ulong)uStack_630 & 0xffffffff);
        func_0x000109a84868(&uStack_630);
      }
    }
    else {
      FUN_109a8a180(&uStack_630,param_2,0xffffffff);
    }
    uVar8 = (uint)uStack_5d0;
    uVar3 = (uint)uStack_630;
    if ((((uVar34 & 0x1f0000) == (uVar7 & 0x1f0000)) && (uStack_5d0._4_4_ < 3)) &&
       (uStack_630._4_4_ < 3)) {
      param_2 = (uint *******)((ulong)uStack_5d0 & 0xffffffff);
      ppppuVar54 = (uint ****)((ulong)uStack_630 & 0xffffffff);
      if ((*(uint *)((long)ppppuStack_590 + 4) != *(uint *)((long)ppppuStack_5f0 + 4) ||
          *(uint *)ppppuStack_590 != *(uint *)ppppuStack_5f0) ||
          (((uint)uStack_630 ^ (uint)uStack_5d0) & 0xfff) != 0) goto LAB_109a2b6dc;
      uStack_500 = (uint *******)
                   CONCAT44(*(uint *)ppppuStack_590,*(uint *)((long)ppppuStack_590 + 4));
      FUN_109a8ee3c(param_3,&uStack_500,(uint)uStack_5d0 & 0xff8,0xffffffff,0,0);
      if (((ulong)*param_3 & 0x1f0000) == 0x10000) {
        ppppppuVar28 = param_3[1];
        ppppuStack_4c0 = (uint ****)((ulong)&uStack_500 | 8);
        pppppppuStack_4f8 = (uint *******)ppppppuVar28[1];
        uStack_500 = (uint *******)*ppppppuVar28;
        pppppuStack_4e8 = ppppppuVar28[3];
        pppppppuStack_4f0 = (uint *******)ppppppuVar28[2];
        pppppuStack_4d8 = ppppppuVar28[5];
        pppppppuStack_4e0 = (uint *******)ppppppuVar28[4];
        pppppuStack_4c8 = ppppppuVar28[7];
        pppppuStack_4d0 = ppppppuVar28[6];
        ppppuStack_4b8 = (uint ****)&ppppuStack_4b0;
        ppppuStack_4b0 = (uint ****)0x0;
        ppppuStack_4a8 = (uint ****)0x0;
        if (ppppppuVar28[7] != (uint *****)0x0) {
          puVar40 = (uint *)((long)ppppppuVar28[7] + 0x14);
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
            if (bVar12) {
              *puVar40 = *puVar40 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        if (*(int *)((long)ppppppuVar28 + 4) < 3) {
          ppppuStack_4b0 = *ppppppuVar28[9];
          ppppuStack_4a8 = ppppppuVar28[9][1];
        }
        else {
          uStack_500 = (uint *******)((ulong)uStack_500 & 0xffffffff);
          func_0x000109a84868(&uStack_500);
        }
      }
      else {
        FUN_109a8a180(&uStack_500,param_3,0xffffffff);
      }
      ppppuStack_6b0 = (uint ****)&uStack_564;
      pppppppuVar23 = pppppppuStack_5c0;
      ppppuVar29 = ppppuStack_580;
      param_3 = pppppppuStack_620;
      ppppuVar32 = ppppuStack_5e0;
      (*(code *)(&PTR_DAT_110b21560)[(ulong)uStack_5d0 & 7])();
      if (pppppuStack_4c8 != (uint *****)0x0) {
        puVar40 = (uint *)((long)pppppuStack_4c8 + 0x14);
        do {
          uVar34 = *puVar40;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
          if (bVar12) {
            *puVar40 = uVar34 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar34 - 1 == 0) {
          pppppppuVar23 = (uint *******)&uStack_500;
          func_0x000109a848d4();
        }
      }
      pppppuStack_4c8 = (uint *****)0x0;
      pppppuStack_4e8 = (uint *****)0x0;
      pppppppuStack_4f0 = (uint *******)0x0;
      pppppuStack_4d8 = (uint *****)0x0;
      pppppppuStack_4e0 = (uint *******)0x0;
      if (0 < uStack_500._4_4_) {
        lVar39 = 0;
        do {
          *(uint *)((long)ppppuStack_4c0 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < uStack_500._4_4_);
      }
      if ((uint *****)ppppuStack_4b8 != &ppppuStack_4b0 && ppppuStack_4b8 != (uint ****)0x0) {
        pppppppuVar23 = (uint *******)ppppuStack_4b8[-1];
        goto LAB_109a2bdb8;
      }
    }
    else {
LAB_109a2b6dc:
      ppppuVar54 = (uint ****)((ulong)uStack_630 & 0xffffffff);
      FUN_109a8727c(param_3,uStack_5d0._4_4_,ppppuStack_590,(uint)uStack_5d0 & 0xff8,0xffffffff,0,0)
      ;
      FUN_109a890bc(&uStack_500,&uStack_5d0,1,0);
      if (pppppuStack_598 != (uint *****)0x0) {
        puVar40 = (uint *)((long)pppppuStack_598 + 0x14);
        do {
          uVar34 = *puVar40;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
          if (bVar12) {
            *puVar40 = uVar34 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar34 - 1 == 0) {
          func_0x000109a848d4(&uStack_5d0);
        }
      }
      if (0 < uStack_5d0._4_4_) {
        lVar39 = 0;
        do {
          *(uint *)((long)ppppuStack_590 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < uStack_5d0._4_4_);
      }
      pppppppuStack_5c8 = pppppppuStack_4f8;
      uStack_5d0 = uStack_500;
      pppppuStack_5b8 = pppppuStack_4e8;
      pppppppuStack_5c0 = pppppppuStack_4f0;
      pppppuStack_5a8 = pppppuStack_4d8;
      pppppppuStack_5b0 = pppppppuStack_4e0;
      pppppuStack_598 = pppppuStack_4c8;
      pppppuStack_5a0 = pppppuStack_4d0;
      ppppuVar29 = ppppuStack_590;
      ppppuVar32 = ppppuStack_588;
      if (((uint *****)ppppuStack_588 != &ppppuStack_580) &&
         (ppppuVar55 = (uint ****)((ulong)&uStack_5d0 | 8), ppppuVar29 = ppppuVar55,
         ppppuVar32 = (uint ****)&ppppuStack_580, ppppuStack_588 != (uint ****)0x0)) {
        _free(ppppuStack_588[-1]);
      }
      ppppuStack_588 = ppppuVar32;
      ppppuStack_590 = ppppuVar29;
      ppppuVar29 = ppppuStack_4b8;
      if (uStack_500._4_4_ < 3) {
        puVar36 = (undefined8 *)((ulong)&uStack_500 | 4);
        *ppppuStack_588 = *ppppuStack_4b8;
        ppppuStack_588[1] = ppppuVar29[1];
        uStack_500 = (uint *******)CONCAT44(uStack_500._4_4_,0x42ff0000);
        puVar36[1] = 0;
        *puVar36 = 0;
        puVar36[3] = 0;
        puVar36[2] = 0;
        puVar36[5] = 0;
        puVar36[4] = 0;
        *(undefined8 *)((long)puVar36 + 0x34) = 0;
        *(undefined8 *)((long)puVar36 + 0x2c) = 0;
        if ((uint *****)ppppuVar29 != &ppppuStack_4b0) {
          _free(ppppuVar29[-1]);
        }
      }
      else {
        ppppuStack_590 = ppppuStack_4c0;
        ppppuStack_588 = ppppuStack_4b8;
      }
      FUN_109a890bc(&uStack_500,&uStack_630,1,0);
      if (pppppuStack_5f8 != (uint *****)0x0) {
        puVar40 = (uint *)((long)pppppuStack_5f8 + 0x14);
        do {
          uVar34 = *puVar40;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
          if (bVar12) {
            *puVar40 = uVar34 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar34 - 1 == 0) {
          func_0x000109a848d4(&uStack_630);
        }
      }
      if (0 < uStack_630._4_4_) {
        lVar39 = 0;
        do {
          *(uint *)((long)ppppuStack_5f0 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < uStack_630._4_4_);
      }
      pppppppuStack_628 = pppppppuStack_4f8;
      uStack_630 = uStack_500;
      pppppuStack_618 = pppppuStack_4e8;
      pppppppuStack_620 = pppppppuStack_4f0;
      pppppuStack_608 = pppppuStack_4d8;
      pppppppuStack_610 = pppppppuStack_4e0;
      pppppuStack_5f8 = pppppuStack_4c8;
      pppppuStack_600 = pppppuStack_4d0;
      ppppuVar29 = ppppuStack_5f0;
      ppppuVar32 = ppppuStack_5e8;
      if (((uint *****)ppppuStack_5e8 != &ppppuStack_5e0) &&
         (ppppuVar55 = (uint ****)((ulong)&uStack_630 | 8), ppppuVar29 = ppppuVar55,
         ppppuVar32 = (uint ****)&ppppuStack_5e0, ppppuStack_5e8 != (uint ****)0x0)) {
        _free(ppppuStack_5e8[-1]);
      }
      ppppuStack_5e8 = ppppuVar32;
      ppppuStack_5f0 = ppppuVar29;
      ppppuVar29 = ppppuStack_4b8;
      if (uStack_500._4_4_ < 3) {
        puVar36 = (undefined8 *)((ulong)&uStack_500 | 4);
        *ppppuStack_5e8 = *ppppuStack_4b8;
        ppppuStack_5e8[1] = ppppuVar29[1];
        uStack_500 = (uint *******)CONCAT44(uStack_500._4_4_,0x42ff0000);
        puVar36[1] = 0;
        *puVar36 = 0;
        puVar36[3] = 0;
        puVar36[2] = 0;
        puVar36[5] = 0;
        puVar36[4] = 0;
        *(undefined8 *)((long)puVar36 + 0x34) = 0;
        *(undefined8 *)((long)puVar36 + 0x2c) = 0;
        if ((uint *****)ppppuVar29 != &ppppuStack_4b0) {
          _free(ppppuVar29[-1]);
        }
      }
      else {
        ppppuStack_5f0 = ppppuStack_4c0;
        ppppuStack_5e8 = ppppuStack_4b8;
      }
      if (((ulong)*param_3 & 0x1f0000) == 0x10000) {
        ppppppuVar28 = param_3[1];
        ppppuStack_4c0 = (uint ****)((ulong)&uStack_500 | 8);
        pppppppuStack_4f8 = (uint *******)ppppppuVar28[1];
        uStack_500 = (uint *******)*ppppppuVar28;
        pppppuStack_4e8 = ppppppuVar28[3];
        pppppppuStack_4f0 = (uint *******)ppppppuVar28[2];
        pppppuStack_4d8 = ppppppuVar28[5];
        pppppppuStack_4e0 = (uint *******)ppppppuVar28[4];
        pppppuStack_4c8 = ppppppuVar28[7];
        pppppuStack_4d0 = ppppppuVar28[6];
        ppppuStack_4b8 = (uint ****)&ppppuStack_4b0;
        ppppuStack_4b0 = (uint ****)0x0;
        ppppuStack_4a8 = (uint ****)0x0;
        if (ppppppuVar28[7] != (uint *****)0x0) {
          puVar40 = (uint *)((long)ppppppuVar28[7] + 0x14);
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
            if (bVar12) {
              *puVar40 = *puVar40 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        if (*(int *)((long)ppppppuVar28 + 4) < 3) {
          ppppuStack_4b0 = *ppppppuVar28[9];
          ppppuStack_4a8 = ppppppuVar28[9][1];
        }
        else {
          uStack_500 = (uint *******)((ulong)uStack_500 & 0xffffffff);
          func_0x000109a84868(&uStack_500);
        }
      }
      else {
        FUN_109a8a180(&uStack_500,param_3,0xffffffff);
      }
      FUN_109a890bc(&uStack_690,&uStack_500,1,0);
      if (pppppuStack_4c8 != (uint *****)0x0) {
        puVar40 = (uint *)((long)pppppuStack_4c8 + 0x14);
        do {
          uVar34 = *puVar40;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
          if (bVar12) {
            *puVar40 = uVar34 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar34 - 1 == 0) {
          func_0x000109a848d4(&uStack_500);
        }
      }
      uVar8 = uVar8 & 7;
      param_1 = (uint ****)(ulong)uVar8;
      pppppuStack_4c8 = (uint *****)0x0;
      pppppuStack_4e8 = (uint *****)0x0;
      pppppppuStack_4f0 = (uint *******)0x0;
      pppppuStack_4d8 = (uint *****)0x0;
      pppppppuStack_4e0 = (uint *******)0x0;
      if (0 < uStack_500._4_4_) {
        lVar39 = 0;
        do {
          *(uint *)((long)ppppuStack_4c0 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < uStack_500._4_4_);
      }
      if ((uint *****)ppppuStack_4b8 != &ppppuStack_4b0 && ppppuStack_4b8 != (uint ****)0x0) {
        _free(ppppuStack_4b8[-1]);
      }
      unaff_x26 = (code *)(&PTR_DAT_110b21560)[(long)param_1];
      if ((int)pppppppuVar51 == 0) {
        uStack_560 = (uint ***)&uStack_5d0;
        pppuStack_558 = (uint ***)&uStack_630;
        pppuStack_550 = (uint ***)&uStack_690;
        pppuStack_548 = (uint ***)0x0;
        pppppuStack_4c8 = (uint *****)0x0;
        pppppppuStack_4f8 = (uint *******)0x0;
        pppppppuStack_4f0 = (uint *******)0x0;
        uStack_500 = (uint *******)0x0;
        pppppppuStack_4e0 = (uint *******)0x0;
        pppppuStack_4d8 = (uint *****)0x0;
        pppppuStack_4e8 = (uint *****)((ulong)pppppuStack_4e8 & 0xffffffff00000000);
        pppppuStack_4d0 = (uint *****)((ulong)pppppuStack_4d0 & 0xffffffff00000000);
        pppppppuVar23 = (uint *******)&uStack_500;
        ppppuVar29 = (uint ****)&uStack_560;
        ppppuVar32 = &pppuStack_e0;
        param_3 = (uint *******)0x0;
        FUN_109a9b368();
        param_2 = (uint *******)0xffffffffffffffff;
        param_1 = (uint ****)&uStack_564;
        while (param_2 = (uint *******)((long)param_2 + 1), param_2 < pppppppuStack_4e0) {
          ppppuVar29 = (uint ****)0x0;
          ppppuVar32 = (uint ****)0x0;
          param_3 = pppppppuStack_d8;
          ppppuStack_6b0 = param_1;
          (*unaff_x26)(pppuStack_e0);
          pppppppuVar23 = (uint *******)&uStack_500;
          FUN_109a8350c();
        }
      }
      else {
        unaff_x27 = ppppuStack_588[((ulong)uStack_5d0 >> 0x20) - 1];
        puStack_90 = &uStack_5d0;
        puStack_88 = &uStack_690;
        uStack_80 = 0;
        uStack_a8 = 0;
        pppuStack_e0 = (uint ***)0x0;
        uStack_d0 = 0;
        pppppppuStack_d8 = (uint *******)0x0;
        ppppuStack_b8 = (uint ****)0x0;
        pppppppuStack_c0 = (uint *******)0x0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        FUN_109a9b368(&pppuStack_e0,&puStack_90,0,&lStack_a0,0xffffffff);
        unaff_x28 = ppppuStack_b8;
        ppppuVar15 = (uint ****)0x0;
        if (unaff_x27 != (uint ***)0x0) {
          ppppuVar15 = (uint ****)(((long)unaff_x27 + 0x3ffU) / (ulong)unaff_x27);
        }
        if (ppppuStack_b8 <= ppppuVar15) {
          ppppuVar15 = ppppuStack_b8;
        }
        pppppppuVar51 = (uint *******)((long)ppppuVar15 * (long)unaff_x27);
        pppppppuStack_6a8 = (uint *******)&pppppppuStack_4f0;
        param_2 = pppppppuStack_6a8;
        if ((uint *******)0x408 < pppppppuVar51) {
          param_2 = pppppppuVar51;
          uStack_500 = pppppppuStack_6a8;
          __Znam();
        }
        ppppuVar29 = param_1;
        uStack_500 = param_2;
        pppppppuStack_4f8 = pppppppuVar51;
        if (uVar8 < 5) {
          dStack_698 = 0.0;
          uStack_560 = (uint ***)0x100000001;
          param_3 = (uint *******)0x0;
          ppppuVar32 = (uint ****)0x1;
          (*(code *)(&PTR_DAT_110b217a0)[uVar3 & 7])
                    (pppppppuStack_620,1,0,1,&dStack_698,1,&uStack_560,0);
          if (*(double *)(&UNK_10e02acf0 + (ulong)uVar8 * 8) <= dStack_698) {
            if (dStack_698 <= *(double *)(&UNK_10e02ad30 + (long)param_1 * 8)) {
              iStack_69c = (int)(long)(double)(long)dStack_698;
              if (dStack_698 != (double)iStack_69c) {
                if ((uStack_564 & 0xfffffffe) == 2) {
                  iStack_69c = (int)dStack_698;
                  if ((double)iStack_69c < dStack_698) {
                    iStack_69c = iStack_69c + 1;
                  }
                }
                else {
                  if ((uStack_564 != 4) && (uStack_564 != 1)) {
                    uVar34 = 0xff;
                    if (uStack_564 != 5) {
                      uVar34 = 0;
                    }
                    uStack_560 = (uint ***)(double)uVar34;
                    ppppuVar29 = (uint ****)&uStack_560;
                    pppuStack_558 = uStack_560;
                    pppuStack_550 = uStack_560;
                    pppuStack_548 = uStack_560;
                    FUN_109a48880(&uStack_690);
                    goto LAB_109a2bd28;
                  }
                  iStack_69c = (int)dStack_698 - (uint)(dStack_698 < (double)(int)dStack_698);
                }
              }
              uStack_520 = (ulong)&uStack_560 | 8;
              pppuStack_550 = (uint ***)&iStack_69c;
              uStack_530 = 0;
              lStack_528 = 0;
              pppuStack_558 = (uint ***)((long)&MACH_HEADER.magic + 1);
              uStack_560 = (uint ***)0x242ff4004;
              uStack_508 = 4;
              uStack_510 = 4;
              pdStack_540 = &dStack_698;
              param_3 = param_2;
              ppppuVar32 = ppppuVar15;
              pppuStack_548 = pppuStack_550;
              pdStack_538 = pdStack_540;
              puStack_518 = &uStack_510;
              FUN_109a27738(&uStack_560);
              if (lStack_528 != 0) {
                piVar1 = (int *)(lStack_528 + 0x14);
                do {
                  iVar38 = *piVar1;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar12) {
                    *piVar1 = iVar38 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar38 + -1 == 0) {
                  func_0x000109a848d4(&uStack_560);
                }
              }
              lStack_528 = 0;
              pppuStack_548 = (uint ***)0x0;
              pppuStack_550 = (uint ***)0x0;
              pdStack_538 = (double *)0x0;
              pdStack_540 = (double *)0x0;
              if (0 < uStack_560._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)(uStack_520 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < uStack_560._4_4_);
              }
              if (puStack_518 != &uStack_510 && puStack_518 != (undefined8 *)0x0) {
                _free(puStack_518[-1]);
              }
              goto LAB_109a2bb08;
            }
            uVar34 = 0xff;
            if (uStack_564 != 5) {
              uVar34 = 0;
            }
            uStack_560 = (uint ***)0x406fe00000000000;
            if (1 < uStack_564 - 3) {
              uStack_560 = (uint ***)(double)uVar34;
            }
            ppppuVar29 = (uint ****)&uStack_560;
            pppuStack_558 = uStack_560;
            pppuStack_550 = uStack_560;
            pppuStack_548 = uStack_560;
            FUN_109a48880(&uStack_690);
          }
          else {
            uVar34 = 0xff;
            if (uStack_564 != 5) {
              uVar34 = 0;
            }
            uStack_560 = (uint ***)0x406fe00000000000;
            if (1 < uStack_564 - 1) {
              uStack_560 = (uint ***)(double)uVar34;
            }
            ppppuVar29 = (uint ****)&uStack_560;
            pppuStack_558 = uStack_560;
            pppuStack_550 = uStack_560;
            pppuStack_548 = uStack_560;
            FUN_109a48880(&uStack_690);
          }
LAB_109a2bd28:
          pppppppuVar23 = uStack_500;
          if ((uStack_500 != pppppppuStack_6a8) && (uStack_500 != (uint *******)0x0))
          goto LAB_109a2bd3c;
        }
        else {
          param_3 = param_2;
          ppppuVar32 = ppppuVar15;
          FUN_109a27738(&uStack_630);
LAB_109a2bb08:
          ppppuVar54 = (uint ****)&uStack_564;
          for (pppppppuVar51 = (uint *******)0x0; pppppppuVar51 < pppppppuStack_c0;
              pppppppuVar51 = (uint *******)((long)pppppppuVar51 + 1)) {
            if (unaff_x28 != (uint ****)0x0) {
              ppppuVar55 = (uint ****)0x0;
              do {
                param_1 = (uint ****)((long)unaff_x28 - (long)ppppuVar55);
                if (ppppuVar15 <= (uint ****)((long)unaff_x28 - (long)ppppuVar55)) {
                  param_1 = ppppuVar15;
                }
                ppppuVar29 = (uint ****)0x0;
                ppppuVar32 = (uint ****)0x0;
                param_3 = param_2;
                ppppuStack_6b0 = ppppuVar54;
                (*unaff_x26)(lStack_a0);
                lStack_a0 = lStack_a0 + (long)(int)param_1 * (long)unaff_x27;
                lStack_98 = lStack_98 + (int)param_1;
                ppppuVar55 = (uint ****)((long)ppppuVar55 + (long)ppppuVar15);
              } while (ppppuVar55 < unaff_x28);
            }
            FUN_109a8350c(&pppuStack_e0);
          }
          pppppppuVar23 = uStack_500;
          if (uStack_500 != pppppppuStack_6a8 && uStack_500 != (uint *******)0x0) {
LAB_109a2bd3c:
            pppppppuVar23 = uStack_500;
            __ZdaPv();
          }
        }
      }
      if (lStack_658 != 0) {
        piVar1 = (int *)(lStack_658 + 0x14);
        do {
          iVar38 = *piVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar38 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar38 + -1 == 0) {
          pppppppuVar23 = (uint *******)&uStack_690;
          func_0x000109a848d4();
        }
      }
      lStack_658 = 0;
      uStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      if (0 < uStack_690._4_4_) {
        lVar39 = 0;
        do {
          *(undefined4 *)(lStack_650 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < uStack_690._4_4_);
      }
      if (puStack_648 != auStack_640 && puStack_648 != (undefined1 *)0x0) {
        pppppppuVar23 = *(uint ********)(puStack_648 + -8);
LAB_109a2bdb8:
        _free();
      }
    }
    if (pppppuStack_5f8 != (uint *****)0x0) {
      puVar40 = (uint *)((long)pppppuStack_5f8 + 0x14);
      do {
        uVar34 = *puVar40;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar12) {
          *puVar40 = uVar34 - 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (uVar34 - 1 == 0) {
        pppppppuVar23 = (uint *******)&uStack_630;
        func_0x000109a848d4();
      }
    }
    pppppuStack_5f8 = (uint *****)0x0;
    pppppuStack_618 = (uint *****)0x0;
    pppppppuStack_620 = (uint *******)0x0;
    pppppuStack_608 = (uint *****)0x0;
    pppppppuStack_610 = (uint *******)0x0;
    if (0 < uStack_630._4_4_) {
      lVar39 = 0;
      do {
        *(uint *)((long)ppppuStack_5f0 + lVar39 * 4) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar39 < uStack_630._4_4_);
    }
    if ((uint *****)ppppuStack_5e8 != &ppppuStack_5e0 && ppppuStack_5e8 != (uint ****)0x0) {
      pppppppuVar23 = (uint *******)ppppuStack_5e8[-1];
      _free();
    }
    if (pppppuStack_598 != (uint *****)0x0) {
      puVar40 = (uint *)((long)pppppuStack_598 + 0x14);
      do {
        uVar34 = *puVar40;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar12) {
          *puVar40 = uVar34 - 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (uVar34 - 1 == 0) {
        pppppppuVar23 = (uint *******)&uStack_5d0;
        func_0x000109a848d4();
      }
    }
    pppppuStack_598 = (uint *****)0x0;
    pppppuStack_5b8 = (uint *****)0x0;
    pppppppuStack_5c0 = (uint *******)0x0;
    pppppuStack_5a8 = (uint *****)0x0;
    pppppppuStack_5b0 = (uint *******)0x0;
    if (0 < uStack_5d0._4_4_) {
      lVar39 = 0;
      do {
        *(uint *)((long)ppppuStack_590 + lVar39 * 4) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar39 < uStack_5d0._4_4_);
    }
    if ((uint *****)ppppuStack_588 != &ppppuStack_580 && ppppuStack_588 != (uint ****)0x0) {
      pppppppuVar23 = (uint *******)ppppuStack_588[-1];
      _free();
    }
  }
  else {
LAB_109a2b344:
    pppppppuVar51 = param_2;
    FUN_109a8b904(param_2,0xffffffff);
    uVar34 = *(uint *)param_1;
    ppppuVar55 = (uint ****)(ulong)uVar34;
    uVar7 = *(uint *)param_2;
    ppppuVar54 = (uint ****)(ulong)uVar7;
    ppppuVar29 = param_1;
    FUN_109a8d7e8(param_1,0xffffffff);
    if ((2 < (int)ppppuVar29) ||
       (ppppuVar29 = param_1, FUN_109a8e368(param_1,0xffffffff), (int)ppppuVar29 == 0)) {
LAB_109a2b3c0:
      ppppuVar54 = param_1;
      FUN_109a8b904(param_1,0xffffffff);
      ppppppuVar28 = *param_2;
      pppuVar27 = *param_1;
      pppppppuVar51 = param_2;
      FUN_109a8d7e8(param_2,0xffffffff);
      if (((int)pppppppuVar51 < 3) &&
         (pppppppuVar51 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)pppppppuVar51 != 0)) {
        FUN_109a8b004(&uStack_500,param_2,0xffffffff);
        if ((((int)uStack_500 == 1) || (uStack_500._4_4_ == 1)) &&
           ((((ulong)ppppppuVar28 & 0x1f0000) == 0x20000 ||
            (((ulong)pppuVar27 & 0x1f0000) != 0x20000)))) {
          uVar34 = (uint)ppppuVar54 >> 3 & 0x1ff;
          iVar38 = uVar34 + 1;
          if ((((int)uStack_500 == 1 && (uStack_500._4_4_ == iVar38 || uStack_500._4_4_ == 1)) ||
              (uStack_500._4_4_ == 1 && (int)uStack_500 == iVar38)) ||
             (((((int)uStack_500 == 1 && (uStack_500._4_4_ == 4)) &&
               (pppppppuVar51 = param_2, FUN_109a8b904(param_2,0xffffffff), uVar34 < 4)) &&
              ((int)pppppppuVar51 == 6)))) {
            pppppppuVar51 = (uint *******)0x1;
            goto LAB_109a2b4a0;
          }
        }
      }
      puVar26 = (undefined4 *)0x90;
      func_0x000107c2ae8c();
      *puVar26 = 1;
      uStack_500 = (uint *******)(puVar26 + 1);
      pppppppuStack_4f8 = (uint *******)0x8b;
      *(undefined8 *)(puVar26 + 0x17) = 0x6e202c2965707974;
      *(undefined8 *)(puVar26 + 0x15) = 0x20656d6173206568;
      *(undefined8 *)(puVar26 + 0x1b) = 0x61637320706f2079;
      *(undefined8 *)(puVar26 + 0x19) = 0x617272612720726f;
      *(undefined8 *)(puVar26 + 0x1f) = 0x616c616373272072;
      *(undefined8 *)(puVar26 + 0x1d) = 0x6f6e202c2772616c;
      *(undefined8 *)((long)puVar26 + 0x87) = 0x2779617272612070;
      *(undefined8 *)((long)puVar26 + 0x7f) = 0x6f2072616c616373;
      *(undefined8 *)(puVar26 + 7) = 0x2079617272612720;
      *(undefined8 *)(puVar26 + 5) = 0x7265687469656e20;
      *(undefined8 *)(puVar26 + 0xb) = 0x6572656877282027;
      *(undefined8 *)(puVar26 + 9) = 0x796172726120706f;
      *(undefined8 *)(puVar26 + 0xf) = 0x6568742065766168;
      *(undefined8 *)(puVar26 + 0xd) = 0x2073796172726120;
      *(undefined8 *)(puVar26 + 0x13) = 0x7420646e6120657a;
      *(undefined8 *)(puVar26 + 0x11) = 0x697320656d617320;
      *(undefined1 *)((long)puVar26 + 0x8f) = 0;
      *(undefined8 *)(puVar26 + 3) = 0x7369206e6f697461;
      *(undefined8 *)(puVar26 + 1) = 0x7265706f20656854;
      FUN_109ac3188(0xffffff2f,&uStack_500,&UNK_10f594ecd,&UNK_10f594df2,0x4c1);
LAB_109a2c2fc:
                    /* WARNING: Does not return */
      pcVar35 = (code *)SoftwareBreakpoint(1,0x109a2c300);
      (*pcVar35)();
    }
    FUN_109a8b004(&uStack_500,param_1,0xffffffff);
    if ((((int)uStack_500 != 1) && (uStack_500._4_4_ != 1)) ||
       (((uVar34 & 0x1f0000) != 0x20000 && ((uVar7 & 0x1f0000) == 0x20000)))) goto LAB_109a2b3c0;
    uVar34 = (uint)pppppppuVar51 >> 3 & 0x1ff;
    pppppppuVar51 = (uint *******)(ulong)uVar34;
    if (((int)uStack_500 != 1 || uStack_500._4_4_ != uVar34 + 1 && uStack_500._4_4_ != 1) &&
       ((uStack_500._4_4_ != 1 || (int)uStack_500 != uVar34 + 1 &&
        (((((int)uStack_500 != 1 || (uStack_500._4_4_ != 4)) ||
          (ppppuVar29 = param_1, FUN_109a8b904(param_1,0xffffffff), 3 < uVar34)) ||
         ((int)ppppuVar29 != 6)))))) goto LAB_109a2b3c0;
    if (uStack_564 - 2 < 3) {
      uVar34 = *(uint *)(&UNK_10e02ad70 + (ulong)(uStack_564 - 2) * 4);
    }
    else {
      uVar34 = 3;
      if (uStack_564 != 1) {
        uVar34 = uStack_564;
      }
    }
    ppppuVar32 = (uint ****)(ulong)uVar34;
    pppppppuVar23 = param_2;
    ppppuVar29 = param_1;
    uStack_564 = uVar34;
    FUN_109a2b294();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_500 != pppppppuStack_6a8 && uStack_500 != (uint *******)0x0) {
    __ZdaPv();
  }
  func_0x00010567aa40(&uStack_690);
  func_0x00010567aa40(&uStack_630);
  func_0x00010567aa40(&uStack_5d0);
  pppppppuVar24 = pppppppuVar23;
  __Unwind_Resume();
  ppppuStack_710 = unaff_x28;
  pppuStack_708 = unaff_x27;
  pcStack_700 = unaff_x26;
  ppppuStack_6f8 = ppppuVar55;
  ppppuStack_6f0 = ppppuVar54;
  puStack_6e8 = &uStack_630;
  pppppppuStack_6e0 = pppppppuVar51;
  ppppuStack_6d8 = param_1;
  pppppppuStack_6d0 = param_2;
  pppppppuStack_6c8 = pppppppuVar23;
  puStack_6c0 = &stack0xfffffffffffffff0;
  pcStack_6b8 = FUN_109a2c428;
  lStack_720 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar34 = *(uint *)pppppppuVar24 & 0x1f0000;
  uVar7 = *(uint *)ppppuVar29;
  uVar8 = *(uint *)param_3;
  if (uVar34 == 0x10000) {
    ppppppuVar28 = pppppppuVar24[1];
    uStack_c10 = *ppppppuVar28;
    pppppuStack_c08 = ppppppuVar28[1];
    pppppuStack_bf8 = ppppppuVar28[3];
    pppppuStack_c00 = ppppppuVar28[2];
    pppppuStack_be8 = ppppppuVar28[5];
    pppppuStack_bf0 = ppppppuVar28[4];
    pppppuStack_bd8 = ppppppuVar28[7];
    pppppuStack_be0 = ppppppuVar28[6];
    puStack_bd0 = (uint *)((ulong)&uStack_c10 | 8);
    ppppuStack_bc8 = (uint ****)&ppppuStack_bc0;
    ppppuStack_bb8 = (uint ****)0x0;
    ppppuStack_bc0 = (uint ****)0x0;
    if (ppppppuVar28[7] != (uint *****)0x0) {
      puVar40 = (uint *)((long)ppppppuVar28[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar12) {
          *puVar40 = *puVar40 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)ppppppuVar28 + 4) < 3) {
      ppppuStack_bc0 = *ppppppuVar28[9];
      ppppuStack_bb8 = ppppppuVar28[9][1];
    }
    else {
      uStack_c10 = (uint *****)((ulong)uStack_c10 & 0xffffffff);
      func_0x000109a84868(&uStack_c10);
    }
  }
  else {
    FUN_109a8a180(&uStack_c10);
  }
  if (((ulong)*ppppuVar29 & 0x1f0000) == 0x10000) {
    pppuVar27 = ppppuVar29[1];
    uStack_c70 = *pppuVar27;
    pppppuStack_c68 = (uint *****)pppuVar27[1];
    pppppuStack_c58 = (uint *****)pppuVar27[3];
    pppppuStack_c60 = (uint *****)pppuVar27[2];
    ppuStack_c48 = pppuVar27[5];
    ppuStack_c50 = pppuVar27[4];
    pppppuStack_c38 = (uint *****)pppuVar27[7];
    pppppuStack_c40 = (uint *****)pppuVar27[6];
    puStack_c30 = (uint *)((ulong)&uStack_c70 | 8);
    ppppuStack_c28 = &pppuStack_c20;
    puStack_c18 = (uint *)0x0;
    pppuStack_c20 = (uint ***)0x0;
    if (pppuVar27[7] != (uint **)0x0) {
      piVar1 = (int *)((long)pppuVar27[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)pppuVar27 + 4) < 3) {
      pppuStack_c20 = (uint ***)*pppuVar27[9];
      puStack_c18 = pppuVar27[9][1];
    }
    else {
      uStack_c70 = (uint **)((ulong)uStack_c70 & 0xffffffff);
      func_0x000109a84868(&uStack_c70);
    }
  }
  else {
    FUN_109a8a180(&uStack_c70,ppppuVar29,0xffffffff);
  }
  if (((ulong)*param_3 & 0x1f0000) == 0x10000) {
    ppppppuVar28 = param_3[1];
    puStack_c90 = (uint *)((ulong)&uStack_cd0 | 8);
    pppppuStack_cc8 = ppppppuVar28[1];
    uStack_cd0 = *ppppppuVar28;
    pppppuStack_cb8 = ppppppuVar28[3];
    pppppuStack_cc0 = ppppppuVar28[2];
    pppppuStack_ca8 = ppppppuVar28[5];
    pppppuStack_cb0 = ppppppuVar28[4];
    pppppuStack_c98 = ppppppuVar28[7];
    pppppuStack_ca0 = ppppppuVar28[6];
    ppppuStack_c88 = (uint ****)&ppppuStack_c80;
    ppppuStack_c80 = (uint ****)0x0;
    ppppuStack_c78 = (uint ****)0x0;
    if (ppppppuVar28[7] != (uint *****)0x0) {
      puVar40 = (uint *)((long)ppppppuVar28[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar12) {
          *puVar40 = *puVar40 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)ppppppuVar28 + 4) < 3) {
      ppppuStack_c80 = *ppppppuVar28[9];
      ppppuStack_c78 = ppppppuVar28[9][1];
    }
    else {
      uStack_cd0 = (uint *****)((ulong)uStack_cd0 & 0xffffffff);
      func_0x000109a84868(&uStack_cd0);
    }
  }
  else {
    FUN_109a8a180(&uStack_cd0,param_3,0xffffffff);
  }
  uVar3 = (uint)uStack_c10;
  if ((uVar34 == 0x20000) || ((uVar7 & 0x1f0000) != 0x20000)) {
    uVar9 = puStack_bd0[-1];
    uVar44 = (ulong)uVar9;
    if (uVar9 != puStack_c30[-1]) goto LAB_109a2c6d8;
    if (uVar9 == 2) {
      if ((*puStack_bd0 != *puStack_c30) || (puStack_bd0[1] != puStack_c30[1])) goto LAB_109a2c6d8;
    }
    else {
      puVar40 = puStack_bd0;
      puVar42 = puStack_c30;
      if (0 < (int)uVar9) {
        do {
          if (*puVar40 != *puVar42) goto LAB_109a2c6d8;
          uVar44 = uVar44 - 1;
          puVar40 = puVar40 + 1;
          puVar42 = puVar42 + 1;
        } while (uVar44 != 0);
      }
    }
    if ((((uint)uStack_c70 ^ (uint)uStack_c10) & 0xfff) != 0) goto LAB_109a2c6d8;
    bVar12 = false;
    goto LAB_109a2c77c;
  }
LAB_109a2c6d8:
  if ((uStack_c70._4_4_ < 3) && (((uint)uStack_c70 >> 0xe & 1) != 0)) {
    uVar9 = *puStack_c30;
    uVar6 = puStack_c30[1];
    if ((uVar6 == 1 || uVar9 == 1) && ((uVar34 != 0x20000 || ((uVar7 & 0x1f0000) == 0x20000)))) {
      uVar14 = (uint)uStack_c10 >> 3 & 0x1ff;
      uVar7 = uVar14 + 1;
      bVar12 = true;
      if ((uVar6 != 1 || uVar9 != uVar7 && uVar9 != 1) && (uVar9 != 1 || uVar6 != uVar7)) {
        if ((((uVar6 != 1) || (uVar9 != 4)) || (3 < uVar14)) || (((uint)uStack_c70 & 0xfff) != 6))
        goto LAB_109a2d328;
        bVar12 = true;
      }
LAB_109a2c77c:
      if ((uVar34 != 0x20000) && ((uVar8 & 0x1f0000) == 0x20000)) {
LAB_109a2c808:
        if ((uStack_cd0._4_4_ < 3) && (((uint)uStack_cd0 >> 0xe & 1) != 0)) {
          uVar7 = *puStack_c90;
          uVar9 = puStack_c90[1];
          if ((uVar9 == 1 || uVar7 == 1) && ((uVar34 != 0x20000 || ((uVar8 & 0x1f0000) == 0x20000)))
             ) {
            uStack_e44 = (uint)uStack_c10 >> 3 & 0x1ff;
            uVar34 = uStack_e44 + 1;
            if ((uVar9 == 1 && (uVar7 == uVar34 || uVar7 == 1)) ||
               ((uVar7 == 1 && uVar9 == uVar34 ||
                ((((uVar9 == 1 && (uVar7 == 4)) && (uStack_e44 < 4)) &&
                 (((uint)uStack_cd0 & 0xfff) == 6)))))) {
              if (!bVar12) goto LAB_109a2d420;
              bVar17 = true;
              lVar39 = 2;
              goto LAB_109a2c8b4;
            }
          }
        }
        puVar26 = (undefined4 *)0x60;
        func_0x000107c2ae8c();
        *puVar26 = 1;
        pbStack_b98 = (byte *)(puVar26 + 1);
        pbStack_b90 = (byte *)0x59;
        *(undefined8 *)(puVar26 + 0xb) = 0x6d61732065687420;
        *(undefined8 *)(puVar26 + 9) = 0x666f207961727261;
        *(undefined8 *)(puVar26 + 0xf) = 0x20656d617320646e;
        *(undefined8 *)(puVar26 + 0xd) = 0x6120657a69732065;
        *(undefined8 *)(puVar26 + 0x13) = 0x726f6e202c637273;
        *(undefined8 *)(puVar26 + 0x11) = 0x2073612065707974;
        *(undefined8 *)((long)puVar26 + 0x55) = 0x72616c6163732061;
        *(undefined8 *)((long)puVar26 + 0x4d) = 0x20726f6e202c6372;
        *(undefined8 *)(puVar26 + 3) = 0x72616e756f622072;
        *(undefined8 *)(puVar26 + 1) = 0x6570707520656854;
        *(undefined1 *)((long)puVar26 + 0x5d) = 0;
        *(undefined8 *)(puVar26 + 7) = 0x206e612072656874;
        *(undefined8 *)(puVar26 + 5) = 0x69656e2073692079;
        FUN_109ac3188(0xffffff2f,&pbStack_b98,&UNK_10f594fbb,&UNK_10f594df2,0x77b);
        goto LAB_109a2d54c;
      }
      uVar7 = puStack_bd0[-1];
      uVar44 = (ulong)uVar7;
      if (uVar7 != puStack_c90[-1]) goto LAB_109a2c808;
      if (uVar7 == 2) {
        if ((*puStack_bd0 != *puStack_c90) || (puStack_bd0[1] != puStack_c90[1]))
        goto LAB_109a2c808;
      }
      else {
        puVar40 = puStack_c90;
        puVar42 = puStack_bd0;
        if (0 < (int)uVar7) {
          do {
            if (*puVar42 != *puVar40) goto LAB_109a2c808;
            uVar44 = uVar44 - 1;
            puVar40 = puVar40 + 1;
            puVar42 = puVar42 + 1;
          } while (uVar44 != 0);
        }
      }
      if ((((uint)uStack_cd0 ^ (uint)uStack_c10) & 0xfff) != 0) goto LAB_109a2c808;
      if (bVar12) {
LAB_109a2d420:
        puVar26 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar26 = 1;
        pbStack_b98 = (byte *)(puVar26 + 1);
        pbStack_b90 = (byte *)0x14;
        *(undefined1 *)(puVar26 + 6) = 0;
        puVar26[5] = 0x72616c61;
        *(undefined8 *)(puVar26 + 3) = 0x63536275203d3d20;
        *(undefined8 *)(puVar26 + 1) = 0x72616c616353626c;
        FUN_109ac3188(0xffffff29,&pbStack_b98,&UNK_10f594fbb,&UNK_10f594df2,0x77f);
        goto LAB_109a2d54c;
      }
      lVar39 = 0;
      bVar17 = false;
      uStack_e44 = (uint)uStack_c10 >> 3 & 0x1ff;
      uVar34 = uStack_e44 + 1;
LAB_109a2c8b4:
      pppuVar27 = ppppuStack_bc8[((ulong)uStack_c10 >> 0x20) - 1];
      FUN_109a8727c(ppppuVar32,(ulong)uStack_c10 >> 0x20,puStack_bd0,0,0xffffffff,0,0);
      if (((ulong)*ppppuVar32 & 0x1f0000) == 0x10000) {
        pppuVar30 = ppppuVar32[1];
        uStack_cf0 = (ulong)&uStack_d30 | 8;
        ppuStack_d28 = pppuVar30[1];
        uStack_d30 = *pppuVar30;
        ppuStack_d18 = pppuVar30[3];
        ppuStack_d20 = pppuVar30[2];
        ppuStack_d08 = pppuVar30[5];
        ppuStack_d10 = pppuVar30[4];
        ppuStack_cf8 = pppuVar30[7];
        ppuStack_d00 = pppuVar30[6];
        puStack_ce8 = &puStack_ce0;
        puStack_ce0 = (uint *)0x0;
        puStack_cd8 = (uint *)0x0;
        if (pppuVar30[7] != (uint **)0x0) {
          piVar1 = (int *)((long)pppuVar30[7] + 0x14);
          do {
            cVar11 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar20) {
              *piVar1 = *piVar1 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        if (*(int *)((long)pppuVar30 + 4) < 3) {
          puStack_ce0 = *pppuVar30[9];
          puStack_cd8 = pppuVar30[9][1];
        }
        else {
          uStack_d30 = (uint **)((ulong)uStack_d30 & 0xffffffff);
          func_0x000109a84868(&uStack_d30);
        }
      }
      else {
        FUN_109a8a180(&uStack_d30,ppppuVar32,0xffffffff);
      }
      uVar3 = uVar3 & 7;
      pcVar35 = (code *)(&PTR_FUN_110b215a0)[uVar3];
      puStack_760 = &uStack_c10;
      puStack_758 = &uStack_d30;
      uStack_728 = 0;
      puStack_750 = &uStack_c70;
      puStack_748 = &uStack_cd0;
      uStack_740 = 0;
      ppuVar4 = &puStack_738;
      if (!(bool)(bVar12 & bVar17)) {
        ppuVar4 = &puStack_760;
      }
      uStack_d38 = 0;
      uStack_d68 = 0;
      uStack_d60 = 0;
      uStack_d70 = 0;
      uStack_d58 = 0;
      uStack_d50 = 0;
      uStack_d48 = 0;
      uStack_d40 = 0;
      puStack_738 = puStack_760;
      puStack_730 = puStack_758;
      FUN_109a9b368(&uStack_d70,ppuVar4,0,&uStack_780,0xffffffff);
      uVar19 = uStack_d48;
      uVar44 = 0;
      if (pppuVar27 != (uint ***)0x0) {
        uVar44 = ((long)pppuVar27 + 0x3ffU) / (ulong)pppuVar27;
      }
      if (uStack_d48 <= uVar44) {
        uVar44 = uStack_d48;
      }
      pbVar48 = (byte *)((ulong)(uVar34 * 8 + 0x80) +
                        uVar44 * ((long)pppuVar27 * lVar39 + (ulong)uVar34));
      pbStack_b98 = abStack_b88;
      pbVar25 = abStack_b88;
      if ((byte *)0x408 < pbVar48) {
        pbVar25 = pbVar48;
        __Znam();
        pbStack_b98 = pbVar25;
      }
      uVar56 = (ulong)uVar34;
      pbStack_b90 = pbVar48;
      pbStack_b98 = pbVar25;
      if ((bool)(bVar12 & bVar17)) {
        if ((((uint)uStack_cd0 ^ (uint)uStack_c70) & 0xfff) == 0) {
          uStack_e00 = (ulong)(pbVar25 + uVar44 * uVar56 + 0xf) & 0xfffffffffffffff0;
          uStack_df8 = uStack_e00 + uVar44 * (long)pppuVar27 + 0xf & 0xfffffffffffffff0;
          if ((uVar3 < 4) && ((uint)((ulong)uStack_c70 & 7) != uVar3)) {
            pppppuVar53 = (uint *****)
                          (uStack_df8 + uVar44 * (long)pppuVar27 + 0xf & 0xfffffffffffffff0);
            pcVar49 = (code *)(&PTR_DAT_110b21720)[(ulong)uStack_c70 & 7];
            uStack_dd0 = (uint *****)CONCAT44(1,uVar34);
            (*pcVar49)(pppppuStack_c60,1,0,1,pppppuVar53,1,&uStack_dd0,0);
            pppppuVar2 = (uint *****)((long)pppppuVar53 + uVar56 * 4);
            uStack_dd0 = (uint *****)CONCAT44(1,uVar34);
            (*pcVar49)(pppppuStack_cc0,1,0,1,pppppuVar2,1,&uStack_dd0,0);
            lVar39 = 0;
            dVar57 = *(double *)(&UNK_10e02ad30 + (ulong)uVar3 * 8);
            iVar38 = (int)(long)(double)(long)*(double *)(&UNK_10e02acf0 + (ulong)uVar3 * 8);
            do {
              iVar10 = *(int *)((long)pppppuVar53 + lVar39);
              bVar20 = false;
              bVar21 = false;
              bVar22 = false;
              if (iVar10 <= *(int *)((long)pppppuVar2 + lVar39)) {
                iVar41 = (int)(long)(double)(long)dVar57;
                bVar22 = SBORROW4(iVar10,iVar41);
                bVar20 = iVar10 - iVar41 < 0;
                bVar21 = iVar10 == iVar41;
              }
              if (!bVar21 && bVar20 == bVar22 || *(int *)((long)pppppuVar2 + lVar39) < iVar38) {
                *(int *)((long)pppppuVar53 + lVar39) = iVar38 + 1;
                *(int *)((long)pppppuVar2 + lVar39) = iVar38;
              }
              lVar39 = lVar39 + 4;
            } while (uVar56 * 4 - lVar39 != 0);
            uStack_dd0 = (uint *****)0x242ff0004;
            puStack_d90 = (uint *)((ulong)&uStack_dd0 | 8);
            uStack_dc8 = (uint *****)CONCAT44(1,uVar34);
            pppppuStack_da8 = (uint *****)0x0;
            pppppuStack_db0 = (uint *****)0x0;
            pppppuStack_d98 = (uint *****)0x0;
            pppppuStack_da0 = (uint *****)0x0;
            pppuStack_d80 = (uint ***)0x0;
            uStack_d78 = 0;
            pppppuStack_dc0 = pppppuVar53;
            pppppuStack_db8 = pppppuVar53;
            ppppuStack_d88 = &pppuStack_d80;
            if (pppppuVar53 == (uint *****)0x0) {
              puVar26 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar26 = 1;
              puStack_ba8 = puVar26 + 1;
              uStack_ba0 = 0x1c;
              *(undefined1 *)(puVar26 + 8) = 0;
              *(undefined8 *)(puVar26 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar26 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar26 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar26 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&puStack_ba8,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
              goto LAB_109a2d54c;
            }
            uStack_dd0 = (uint *****)0x242ff4004;
            uStack_d78 = 4;
            pppuStack_d80 = (uint ***)0x4;
            pppppuStack_db0 = (uint *****)((long)pppppuVar53 + (ulong)(uVar34 << 2));
            pppppuStack_da8 = pppppuStack_db0;
            if (pppppuStack_c38 != (uint *****)0x0) {
              puVar40 = (uint *)((long)pppppuStack_c38 + 0x14);
              do {
                uVar7 = *puVar40;
                cVar11 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(puVar40,0x10);
                if (bVar20) {
                  *puVar40 = uVar7 - 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (uVar7 - 1 == 0) {
                func_0x000109a848d4(&uStack_c70);
              }
            }
            if (0 < uStack_c70._4_4_) {
              lVar39 = 0;
              do {
                puStack_c30[lVar39] = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < uStack_c70._4_4_);
            }
            pppppuStack_c68 = uStack_dc8;
            uStack_c70 = (uint **)uStack_dd0;
            pppppuStack_c58 = pppppuStack_db8;
            pppppuStack_c60 = pppppuStack_dc0;
            ppuStack_c48 = (uint **)pppppuStack_da8;
            ppuStack_c50 = (uint **)pppppuStack_db0;
            pppppuStack_c38 = pppppuStack_d98;
            pppppuStack_c40 = pppppuStack_da0;
            puVar40 = puStack_c30;
            ppppuVar54 = ppppuStack_c28;
            if ((ppppuStack_c28 != &pppuStack_c20) &&
               (puVar40 = (uint *)((ulong)&uStack_c70 | 8), ppppuVar54 = &pppuStack_c20,
               ppppuStack_c28 != (uint ****)0x0)) {
              _free(ppppuStack_c28[-1]);
            }
            ppppuStack_c28 = ppppuVar54;
            puStack_c30 = puVar40;
            if (uStack_dd0._4_4_ < 3) {
              puVar36 = (undefined8 *)((ulong)&uStack_dd0 | 4);
              *ppppuStack_c28 = *ppppuStack_d88;
              ppppuStack_c28[1] = ppppuStack_d88[1];
              uStack_dd0 = (uint *****)CONCAT44(uStack_dd0._4_4_,0x42ff0000);
              puVar36[1] = 0;
              *puVar36 = 0;
              puVar36[3] = 0;
              puVar36[2] = 0;
              puVar36[5] = 0;
              puVar36[4] = 0;
              *(undefined8 *)((long)puVar36 + 0x34) = 0;
              *(undefined8 *)((long)puVar36 + 0x2c) = 0;
              if (ppppuStack_d88 != &pppuStack_d80) {
                _free(ppppuStack_d88[-1]);
              }
            }
            else {
              ppppuStack_c28 = ppppuStack_d88;
              puStack_c30 = puStack_d90;
            }
            puStack_d90 = (uint *)((ulong)&uStack_dd0 | 8);
            uStack_dc8 = (uint *****)CONCAT44(1,uVar34);
            pppppuStack_da0 = (uint *****)0x0;
            pppppuStack_d98 = (uint *****)0x0;
            uStack_dd0 = (uint *****)0x242ff4004;
            uStack_d78 = 4;
            pppuStack_d80 = (uint ***)0x4;
            pppppuStack_db0 = (uint *****)((long)pppppuVar2 + uVar56 * 4);
            pppppuStack_dc0 = pppppuVar2;
            pppppuStack_db8 = pppppuVar2;
            pppppuStack_da8 = pppppuStack_db0;
            ppppuStack_d88 = &pppuStack_d80;
            if (pppppuStack_c98 != (uint *****)0x0) {
              puVar40 = (uint *)((long)pppppuStack_c98 + 0x14);
              do {
                uVar7 = *puVar40;
                cVar11 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(puVar40,0x10);
                if (bVar20) {
                  *puVar40 = uVar7 - 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (uVar7 - 1 == 0) {
                func_0x000109a848d4(&uStack_cd0);
              }
            }
            if (0 < uStack_cd0._4_4_) {
              lVar39 = 0;
              do {
                puStack_c90[lVar39] = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < uStack_cd0._4_4_);
            }
            pppppuStack_cc8 = uStack_dc8;
            uStack_cd0 = uStack_dd0;
            pppppuStack_cb8 = pppppuStack_db8;
            pppppuStack_cc0 = pppppuStack_dc0;
            pppppuStack_ca8 = pppppuStack_da8;
            pppppuStack_cb0 = pppppuStack_db0;
            pppppuStack_c98 = pppppuStack_d98;
            pppppuStack_ca0 = pppppuStack_da0;
            puVar40 = puStack_c90;
            ppppuVar54 = ppppuStack_c88;
            if (((uint *****)ppppuStack_c88 != &ppppuStack_c80) &&
               (puVar40 = (uint *)((ulong)&uStack_cd0 | 8), ppppuVar54 = (uint ****)&ppppuStack_c80,
               ppppuStack_c88 != (uint ****)0x0)) {
              _free(ppppuStack_c88[-1]);
            }
            ppppuStack_c88 = ppppuVar54;
            puStack_c90 = puVar40;
            if (uStack_dd0._4_4_ < 3) {
              puVar36 = (undefined8 *)((ulong)&uStack_dd0 | 4);
              *ppppuStack_c88 = *ppppuStack_d88;
              ppppuStack_c88[1] = ppppuStack_d88[1];
              uStack_dd0 = (uint *****)CONCAT44(uStack_dd0._4_4_,0x42ff0000);
              puVar36[1] = 0;
              *puVar36 = 0;
              puVar36[3] = 0;
              puVar36[2] = 0;
              puVar36[5] = 0;
              puVar36[4] = 0;
              *(undefined8 *)((long)puVar36 + 0x34) = 0;
              *(undefined8 *)((long)puVar36 + 0x2c) = 0;
              if (ppppuStack_d88 != &pppuStack_d80) {
                _free(ppppuStack_d88[-1]);
              }
            }
            else {
              puStack_c90 = puStack_d90;
              ppppuStack_c88 = ppppuStack_d88;
            }
          }
          FUN_109a27738(&uStack_c70,(uint)uStack_c10 & 0xfff,uStack_e00,uVar44);
          FUN_109a27738(&uStack_cd0,(uint)uStack_c10 & 0xfff,uStack_df8,uVar44);
          goto LAB_109a2ce40;
        }
      }
      else {
        uStack_e00 = 0;
        uStack_df8 = 0;
LAB_109a2ce40:
        uVar46 = 0;
        lVar39 = 0x10;
        if (!bVar12) {
          lVar39 = 0x18;
        }
        uVar7 = uVar34 & 3;
        uVar8 = 4;
        if (uVar7 != 0) {
          uVar8 = uVar7;
        }
        pbVar48 = pbVar25 + 3;
        for (; uVar46 < uStack_d50; uVar46 = uVar46 + 1) {
          if (uVar19 != 0) {
            uVar50 = 0;
            do {
              uVar33 = uStack_770;
              uVar45 = uVar19 - uVar50;
              if (uVar44 <= uVar19 - uVar50) {
                uVar45 = uVar44;
              }
              lVar52 = (long)(int)uVar45;
              lVar47 = lVar52 * (long)pppuVar27;
              uVar31 = uStack_e00;
              if (!bVar12) {
                uStack_770 = uStack_770 + lVar47;
                uVar31 = uVar33;
              }
              uVar33 = uStack_df8;
              if (!bVar17) {
                uVar33 = *(ulong *)((long)&uStack_780 + lVar39);
                *(ulong *)((long)&uStack_780 + lVar39) = uVar33 + lVar47;
              }
              uStack_dd0 = (uint *****)CONCAT44(1,uVar34 * (int)uVar45);
              pbVar5 = pbStack_778;
              if (uStack_e44 != 0) {
                pbVar5 = pbVar25;
              }
              (*pcVar35)(uStack_780,0,uVar31,0,uVar33,0,pbVar5,0,&uStack_dd0);
              if (uStack_e44 != 0) {
                lVar37 = uVar45 << 0x20;
                if (uVar7 < 2) {
                  lVar13 = lVar52;
                  pbVar5 = pbVar25;
                  pbVar16 = pbStack_778;
                  pbVar43 = pbVar48;
                  lVar18 = lVar37;
                  if (uVar7 == 0) {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar43[-2] & pbVar43[-3] & pbVar43[-1] & *pbVar43;
                      lVar13 = lVar13 + -1;
                      pbVar43 = pbVar43 + uVar56;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                  else {
                    while (lVar18 != 0) {
                      *pbVar16 = *pbVar5;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar56;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                }
                else {
                  pbVar5 = pbVar25 + 2;
                  lVar13 = lVar52;
                  pbVar16 = pbStack_778;
                  lVar18 = lVar37;
                  pbVar43 = pbVar25 + 1;
                  if (uVar7 == 2) {
                    while (lVar18 != 0) {
                      *pbVar16 = *pbVar43 & pbVar43[-1];
                      lVar13 = lVar13 + -1;
                      pbVar43 = pbVar43 + uVar56;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                  else {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar5[-1] & pbVar5[-2] & *pbVar5;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar56;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                }
                lVar13 = lVar52;
                pbVar5 = pbVar48 + uVar8;
                pbVar16 = pbStack_778;
                lVar18 = lVar37;
                uVar45 = (ulong)uVar8;
                pbVar43 = pbVar48 + uVar8;
                if (uVar8 <= uStack_e44) {
                  do {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar5[-2] & pbVar5[-3] & pbVar5[-1] & *pbVar5 & *pbVar16;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar56;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                    uVar45 = uVar45 + 4;
                    lVar13 = lVar52;
                    pbVar5 = (byte *)((long)pbVar43 + 4);
                    pbVar16 = pbStack_778;
                    lVar18 = lVar37;
                    pbVar43 = (byte *)((long)pbVar43 + 4);
                  } while (uVar45 < uVar56);
                }
              }
              uStack_780 = uStack_780 + lVar47;
              pbStack_778 = pbStack_778 + lVar52;
              uVar50 = uVar50 + uVar44;
            } while (uVar50 < uVar19);
          }
          FUN_109a8350c(&uStack_d70);
        }
        if (pbStack_b98 != abStack_b88 && pbStack_b98 != (byte *)0x0) {
          __ZdaPv();
        }
        if (ppuStack_cf8 != (uint **)0x0) {
          piVar1 = (int *)((long)ppuStack_cf8 + 0x14);
          do {
            iVar38 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar38 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar38 + -1 == 0) {
            func_0x000109a848d4(&uStack_d30);
          }
        }
        ppuStack_cf8 = (uint **)0x0;
        ppuStack_d18 = (uint **)0x0;
        ppuStack_d20 = (uint **)0x0;
        ppuStack_d08 = (uint **)0x0;
        ppuStack_d10 = (uint **)0x0;
        if (0 < uStack_d30._4_4_) {
          lVar39 = 0;
          do {
            *(undefined4 *)(uStack_cf0 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < uStack_d30._4_4_);
        }
        if ((uint **)puStack_ce8 != &puStack_ce0 && puStack_ce8 != (undefined8 *)0x0) {
          _free(puStack_ce8[-1]);
        }
        if (pppppuStack_c98 != (uint *****)0x0) {
          puVar40 = (uint *)((long)pppppuStack_c98 + 0x14);
          do {
            uVar34 = *puVar40;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
            if (bVar12) {
              *puVar40 = uVar34 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar34 - 1 == 0) {
            func_0x000109a848d4(&uStack_cd0);
          }
        }
        pppppuStack_c98 = (uint *****)0x0;
        pppppuStack_cb8 = (uint *****)0x0;
        pppppuStack_cc0 = (uint *****)0x0;
        pppppuStack_ca8 = (uint *****)0x0;
        pppppuStack_cb0 = (uint *****)0x0;
        if (0 < uStack_cd0._4_4_) {
          lVar39 = 0;
          do {
            puStack_c90[lVar39] = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < uStack_cd0._4_4_);
        }
        if ((uint *****)ppppuStack_c88 != &ppppuStack_c80 && ppppuStack_c88 != (uint ****)0x0) {
          _free(ppppuStack_c88[-1]);
        }
        if (pppppuStack_c38 != (uint *****)0x0) {
          puVar40 = (uint *)((long)pppppuStack_c38 + 0x14);
          do {
            uVar34 = *puVar40;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
            if (bVar12) {
              *puVar40 = uVar34 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar34 - 1 == 0) {
            func_0x000109a848d4(&uStack_c70);
          }
        }
        pppppuStack_c38 = (uint *****)0x0;
        pppppuStack_c58 = (uint *****)0x0;
        pppppuStack_c60 = (uint *****)0x0;
        ppuStack_c48 = (uint **)0x0;
        ppuStack_c50 = (uint **)0x0;
        if (0 < uStack_c70._4_4_) {
          lVar39 = 0;
          do {
            puStack_c30[lVar39] = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < uStack_c70._4_4_);
        }
        if (ppppuStack_c28 != &pppuStack_c20 && ppppuStack_c28 != (uint ****)0x0) {
          _free(ppppuStack_c28[-1]);
        }
        if (pppppuStack_bd8 != (uint *****)0x0) {
          puVar40 = (uint *)((long)pppppuStack_bd8 + 0x14);
          do {
            uVar34 = *puVar40;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar40,0x10);
            if (bVar12) {
              *puVar40 = uVar34 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar34 - 1 == 0) {
            func_0x000109a848d4(&uStack_c10);
          }
        }
        pppppuStack_bd8 = (uint *****)0x0;
        pppppuStack_bf8 = (uint *****)0x0;
        pppppuStack_c00 = (uint *****)0x0;
        pppppuStack_be8 = (uint *****)0x0;
        pppppuStack_bf0 = (uint *****)0x0;
        if (0 < uStack_c10._4_4_) {
          lVar39 = 0;
          do {
            puStack_bd0[lVar39] = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < uStack_c10._4_4_);
        }
        if ((uint *****)ppppuStack_bc8 != &ppppuStack_bc0 && ppppuStack_bc8 != (uint ****)0x0) {
          _free(ppppuStack_bc8[-1]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_720) {
          return;
        }
        ___stack_chk_fail();
      }
      puVar26 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar26 = 1;
      uStack_dd0 = (uint *****)(puVar26 + 1);
      uStack_dc8 = (uint *****)0x16;
      *(undefined1 *)((long)puVar26 + 0x1a) = 0;
      *(undefined8 *)(puVar26 + 3) = 0x2e6275203d3d2029;
      *(undefined8 *)(puVar26 + 1) = 0x28657079742e626c;
      *(undefined8 *)((long)puVar26 + 0x12) = 0x2928657079742e62;
      FUN_109ac3188(0xffffff29,&uStack_dd0,&UNK_10f594fbb,&UNK_10f594df2,0x79a);
      goto LAB_109a2d54c;
    }
  }
LAB_109a2d328:
  puVar26 = (undefined4 *)0x60;
  func_0x000107c2ae8c();
  *puVar26 = 1;
  pbStack_b98 = (byte *)(puVar26 + 1);
  pbStack_b90 = (byte *)0x59;
  *(undefined8 *)(puVar26 + 0xb) = 0x6d61732065687420;
  *(undefined8 *)(puVar26 + 9) = 0x666f207961727261;
  *(undefined8 *)(puVar26 + 0xf) = 0x20656d617320646e;
  *(undefined8 *)(puVar26 + 0xd) = 0x6120657a69732065;
  *(undefined8 *)(puVar26 + 0x13) = 0x726f6e202c637273;
  *(undefined8 *)(puVar26 + 0x11) = 0x2073612065707974;
  *(undefined8 *)((long)puVar26 + 0x55) = 0x72616c6163732061;
  *(undefined8 *)((long)puVar26 + 0x4d) = 0x20726f6e202c6372;
  *(undefined8 *)(puVar26 + 3) = 0x72616e756f622072;
  *(undefined8 *)(puVar26 + 1) = 0x65776f6c20656854;
  *(undefined1 *)((long)puVar26 + 0x5d) = 0;
  *(undefined8 *)(puVar26 + 7) = 0x206e612072656874;
  *(undefined8 *)(puVar26 + 5) = 0x69656e2073692079;
  FUN_109ac3188(0xffffff2f,&pbStack_b98,&UNK_10f594fbb,&UNK_10f594df2,0x772);
LAB_109a2d54c:
                    /* WARNING: Does not return */
  pcVar35 = (code *)SoftwareBreakpoint(1,0x109a2d550);
  (*pcVar35)();
}


