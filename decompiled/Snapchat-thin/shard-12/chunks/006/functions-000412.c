/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10935c2bc; end: 10935c343;  */

long FUN_10935c2bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    if (*(long *)(*(long *)(param_1 + 0x58) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_10935e610(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10935c344; end: 10935c347;  */

long FUN_10935c344(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    if (*(long *)(*(long *)(param_1 + 0x58) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_10935e610(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10935c348; end: 10935c35b;  */

void FUN_10935c348(void)

{
  FUN_10935c2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935c35c; end: 10935c367;  */

undefined ** FUN_10935c35c(void)

{
  return &PTR_DAT_110af3260;
}



/* Entry: 10935c368; end: 10935c3bf;  */

void FUN_10935c368(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    func_0x0001053936e4(param_1 + 0x38);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
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



/* Entry: 10935c3c0; end: 10935ca97;  */

byte * FUN_10935c3c0(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar3 = param_2;
  if (*(int *)(param_1 + 100) != 0) {
    pbVar3 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 100),param_2);
  }
  pbVar10 = pbVar3;
  if (*(int *)(param_1 + 0x68) != 0) {
    pbVar10 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x68),pbVar3);
  }
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x1a;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar15 = *(uint **)(param_1 + 0x18);
    iVar19 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar15;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10935c4b0:
            param_3[0x38] = 1;
LAB_10935c548:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar21;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_10935c548;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10935c4b0;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar21;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar16 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar20 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar20 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar16;
    } while (puVar16 < puVar15 + iVar19);
  }
  iVar19 = *(int *)(param_1 + 0x28);
  if (0 < iVar19) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
      iVar19 = *(int *)(param_1 + 0x28);
    }
    uVar13 = iVar19 * 4;
    uVar4 = (ulong)uVar13;
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x22;
    uVar5 = uVar4;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        uVar7 = (uint)uVar5;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar8;
    lVar17 = *(long *)(param_1 + 0x30);
    uVar20 = (ulong)(int)uVar13;
    uVar5 = uVar4;
    if ((*(long *)param_3 - (long)pbVar10 < (long)(int)uVar13) &&
       (pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10), uVar5 = uVar20,
       (int)pbVar3 < (int)uVar13)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar19 = (int)pbVar3;
        _memcpy(pbVar10,lVar17,(long)iVar19);
        uVar13 = (int)uVar4 - iVar19;
        uVar4 = (ulong)uVar13;
        lVar17 = lVar17 + iVar19;
        pbVar12 = pbVar10 + iVar19;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar10 = pbVar11;
          pbVar3 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10935c974:
            param_3[0x38] = 1;
LAB_10935c954:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar3 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar21;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10935c954;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10935c974;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar11 = uVar21;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar10 = pbStack_70;
            }
          }
          pbVar12 = pbVar10 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar3;
          pbVar10 = pbVar12;
        } while (pbVar3 <= pbVar12);
        pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
      } while ((int)pbVar3 < (int)uVar13);
      uVar20 = (ulong)(int)uVar13;
      uVar5 = uVar20;
    }
    _memcpy(pbVar10,lVar17,uVar5);
    pbVar10 = pbVar10 + uVar20;
  }
  iVar19 = *(int *)(param_1 + 0x40);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar3 = pbVar10;
    do {
      uVar5 = *(ulong *)(param_1 + 0x38);
      puVar1 = (ulong *)(param_1 + 0x38);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar14 * 8 + 7);
      }
      pbVar10 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar3,param_3);
      iVar14 = iVar14 + 1;
      pbVar3 = pbVar10;
    } while (iVar19 != iVar14);
  }
  uVar13 = *(uint *)(param_1 + 0x60);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x32;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar15 = *(uint **)(param_1 + 0x58);
    iVar19 = *(int *)(param_1 + 0x50);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar15;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10935c6bc:
            param_3[0x38] = 1;
LAB_10935c754:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar21;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_10935c754;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10935c6bc;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar21;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar16 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar20 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar20 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar16;
    } while (puVar16 < puVar15 + iVar19);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar17 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar17 = uVar5 + 8;
    }
    uVar13 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar13) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar3 < (int)uVar13) {
        do {
          iVar19 = (int)pbVar3;
          _memcpy(pbVar10,lVar17,(long)iVar19);
          uVar13 = (int)uVar4 - iVar19;
          uVar4 = (ulong)uVar13;
          lVar17 = lVar17 + iVar19;
          pbVar3 = *(byte **)param_3;
          pbVar11 = pbVar10 + iVar19;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar10 + ((int)pbVar11 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar10 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
        } while ((int)pbVar3 < (int)uVar13);
      }
      _memcpy(pbVar10,lVar17,(long)(int)uVar13);
      pbVar10 = pbVar10 + (int)uVar13;
    }
    else {
      _memcpy(pbVar10,lVar17,uVar4 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar13;
    }
  }
  return pbVar10;
}



/* Entry: 10935ca98; end: 10935cc8b;  */

void FUN_10935ca98(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < 1) {
    lVar4 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar4 = 0;
    uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x18);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar4;
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar4;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar7 = *(ulong *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x40);
  lVar5 = lVar5 + lVar4 + lVar1 + (ulong)uVar2 * 4 + (long)iVar3;
  iVar8 = (int)lVar5;
  puVar9 = (ulong *)(param_1 + 0x38);
  if ((uVar7 & 1) != 0) {
    puVar9 = (ulong *)(uVar7 + 7);
  }
  if (iVar3 != 0) {
    lVar4 = (long)iVar3 << 3;
    do {
      uVar7 = *puVar9;
      FUN_10935c1bc();
      lVar5 = uVar7 + lVar5 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6);
      iVar8 = (int)lVar5;
      lVar4 = lVar4 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  if ((int)uVar2 < 1) {
    lVar5 = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x58);
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar5;
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x60) = (int)lVar5;
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  iVar3 = (int)lVar5 + iVar8 + iVar3;
  if (*(int *)(param_1 + 100) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar7 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x6c) = iVar3;
  return;
}



/* Entry: 10935cc8c; end: 10935cc8f;  */

void FUN_10935cc8c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x000107c282d8(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x18);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x30);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    func_0x000107c303c4(param_1 + 0x38,param_2 + 0x38);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x54) < iVar3) {
      func_0x000107c282d8(param_1 + 0x50);
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x58);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x58) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 10935cc90; end: 10935ce1b;  */

void FUN_10935cc90(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x000107c282d8(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x18);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x30);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    func_0x000107c303c4(param_1 + 0x38,param_2 + 0x38);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x54) < iVar3) {
      func_0x000107c282d8(param_1 + 0x50);
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x58);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x58) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 10935ce1c; end: 10935ce73;  */

void FUN_10935ce1c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
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



/* Entry: 10935ce74; end: 10935cecb;  */

long FUN_10935ce74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10935cecc; end: 10935ceef;  */

undefined ** FUN_10935cecc(void)

{
  return &PTR_DAT_110af32a0;
}



/* Entry: 10935cef0; end: 10935d15f;  */

long * FUN_10935cef0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  iVar9 = *(int *)(param_1 + 0x14);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      iVar9 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar9;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      iVar9 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar9;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x20;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar9 = (int)puVar8;
          _memcpy(plVar1,lVar7,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar9;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar9);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lVar7,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar7,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 10935d160; end: 10935d233;  */

long FUN_10935d160(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = uVar3 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = uVar3 + 5;
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x1c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10935d234; end: 10935d28b;  */

long FUN_10935d234(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10935d28c; end: 10935d2ab;  */

undefined ** FUN_10935d28c(void)

{
  return &PTR_DAT_110af32e8;
}



/* Entry: 10935d2ac; end: 10935d567;  */

long * FUN_10935d2ac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x1d;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)param_2 = 0x25;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(param_2,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar6,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar6,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 10935d568; end: 10935d617;  */

long FUN_10935d568(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10935d618; end: 10935d66f;  */

long FUN_10935d618(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10935d670; end: 10935d693;  */

undefined ** FUN_10935d670(void)

{
  return &PTR_DAT_110af3328;
}



/* Entry: 10935d694; end: 10935d89f;  */

long * FUN_10935d694(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar3 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar3 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar3,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar3 + (long)iVar8);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar3 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar3 = plVar1;
          } while (plVar4 <= plVar1);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar3));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar3,lVar6,(long)(int)(uint)uStack_48);
      plVar3 = (long *)((long)plVar3 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar3,lVar6,uStack_48 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar2);
    }
  }
  return plVar3;
}



/* Entry: 10935d8a0; end: 10935d90f;  */

long FUN_10935d8a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10935d910; end: 10935d94b;  */

long FUN_10935d910(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10935d94c; end: 10935d94f;  */

long FUN_10935d94c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10935d950; end: 10935d963;  */

void FUN_10935d950(void)

{
  FUN_10935d910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935d964; end: 10935d9df;  */

undefined ** FUN_10935d964(void)

{
  return &PTR_DAT_110af3360;
}



/* Entry: 10935d9e0; end: 10935db8f;  */

long * FUN_10935d9e0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar8;
      goto LAB_10935da28;
    }
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10935da28:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566a54);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,1,puVar8,param_2);
      param_2 = plVar1;
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10935daa0;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10935daa0;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566a79);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10935daa0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(param_2,lVar4,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar4 = lVar4 + iVar10;
          plVar6 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar3 + (long)((int)plVar1 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar6 <= plVar1);
          lVar11 = (long)plVar6 + (0x10 - (long)param_2);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(param_2,lVar4,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar4,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 10935db90; end: 10935dc53;  */

long FUN_10935db90(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10935dc54; end: 10935dd2f;  */

void FUN_10935dc54(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10935dd30; end: 10935dde3;  */

long * FUN_10935dd30(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109359eac();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10935c2bc();
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10935dde4; end: 10935dde7;  */

long FUN_10935dde4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10935dd30(param_1);
  return param_1;
}



/* Entry: 10935dde8; end: 10935ddfb;  */

void FUN_10935dde8(void)

{
  func_0x00010935dcfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935ddfc; end: 10935de07;  */

undefined ** FUN_10935ddfc(void)

{
  return &PTR_DAT_110af33a0;
}



/* Entry: 10935de08; end: 10935dec7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10935de08(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109359f88(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10935c368(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010935ced8(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010935d298(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010935d67c(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10935dec8; end: 10935e22f;  */

long * FUN_10935dec8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar13;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar9 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
  }
  uVar14 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar15 = 8;
    plVar4 = plVar2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + lVar15 + -1);
      }
      puVar11 = (undefined8 *)*puVar1;
      lVar5 = (long)*(char *)((long)puVar11 + 0x17);
      puVar3 = puVar11;
      if (lVar5 < 0) {
        lVar5 = puVar11[1];
        puVar3 = (undefined8 *)*puVar11;
      }
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f566a9e);
      lVar5 = (long)*(char *)((long)puVar11 + 0x17);
      if (((lVar5 < 0) && (lVar5 = puVar11[1], 0x7f < lVar5)) ||
         ((*param_3 - (long)plVar4) + 0xe < lVar5)) {
        plVar2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar11,plVar4);
      }
      else {
        *(undefined1 *)plVar4 = 0x12;
        *(char *)((long)plVar4 + 1) = (char)lVar5;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar11 = (undefined8 *)*puVar11;
        }
        _memcpy((undefined1 *)((long)plVar4 + 2),puVar11,lVar5);
        plVar2 = (long *)((undefined1 *)((long)plVar4 + 2) + lVar5);
      }
      lVar15 = lVar15 + 8;
      uVar14 = uVar14 - 1;
      plVar4 = plVar2;
    } while (uVar14 != 0);
  }
  if ((uVar9 >> 1 & 1) != 0) {
    plVar4 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x6c),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    plVar4 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x20),plVar2,param_3);
    plVar2 = plVar4;
  }
  plVar4 = plVar2;
  if ((uVar9 >> 3 & 1) != 0) {
    plVar4 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x20),plVar2,param_3);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar2 = (long *)*param_3;
    if (plVar4 < plVar2) {
      uVar6 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar4 = param_3 + 2;
          break;
        }
        plVar8 = param_3;
        func_0x000107c303dc();
        plVar4 = (long *)((long)plVar8 + (long)((int)plVar4 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= plVar4);
      uVar6 = *(undefined1 *)(param_1 + 0x70);
    }
    *(undefined1 *)plVar4 = 0x40;
    *(undefined1 *)((long)plVar4 + 1) = uVar6;
    plVar4 = (long *)((long)plVar4 + 2);
  }
  plVar2 = plVar4;
  if ((uVar9 >> 4 & 1) != 0) {
    plVar2 = (long *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x1c),plVar4,param_3);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar10 = 0;
    plVar4 = plVar2;
    do {
      uVar14 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar14 & 1) != 0) {
        puVar1 = (ulong *)(uVar14 + (long)iVar10 * 8 + 7);
      }
      plVar2 = (long *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar4,param_3);
      iVar10 = iVar10 + 1;
      plVar4 = plVar2;
    } while (iVar12 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar14 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar15 = *(long *)(uVar14 + 8);
      uVar7 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      lVar15 = uVar14 + 8;
    }
    uVar9 = (uint)uVar7;
    if (*param_3 - (long)plVar2 < (long)(int)uVar9) {
      puVar13 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar13 < (int)uVar9) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(plVar2,lVar15,(long)iVar12);
          uVar9 = (int)uVar7 - iVar12;
          uVar7 = (ulong)uVar9;
          lVar15 = lVar15 + iVar12;
          plVar8 = (long *)*param_3;
          plVar4 = (long *)((long)plVar2 + (long)iVar12);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar8));
            plVar8 = (long *)*param_3;
            plVar2 = plVar4;
          } while (plVar8 <= plVar4);
          puVar13 = (undefined1 *)((long)plVar8 + (0x10 - (long)plVar2));
        } while ((int)puVar13 < (int)uVar9);
      }
      _memcpy(plVar2,lVar15,(long)(int)uVar9);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar9);
    }
    else {
      _memcpy(plVar2,lVar15,uVar7 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar9);
    }
  }
  return plVar2;
}



/* Entry: 10935e230; end: 10935e5d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10935e230(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  uVar7 = uVar8;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar10 = *(ulong *)(param_1 + 0x18);
    puVar11 = (ulong *)(uVar10 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar10 & 1) != 0) {
        puVar1 = puVar11;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      uVar7 = uVar2 + uVar7 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar11 = puVar11 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = *(ulong *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x38);
  lVar9 = uVar7 + (long)iVar5;
  iVar6 = (int)lVar9;
  puVar11 = (ulong *)(param_1 + 0x30);
  if ((uVar8 & 1) != 0) {
    puVar11 = (ulong *)(uVar8 + 7);
  }
  if (iVar5 != 0) {
    lVar12 = (long)iVar5 << 3;
    do {
      uVar7 = *puVar11;
      FUN_10935db90();
      lVar9 = uVar7 + lVar9 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6);
      iVar6 = (int)lVar9;
      lVar12 = lVar12 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x1f) != 0) {
    if ((uVar3 & 1) != 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010935a500();
      iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x50);
      FUN_10935ca98();
      iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x58);
      FUN_10935d160();
      iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x60);
      FUN_10935d568();
      iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x68);
      FUN_10935d8a0();
      iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
    }
  }
  iVar6 = iVar6 + (uint)*(byte *)(param_1 + 0x70) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar7 + 0x10);
    }
    iVar6 = (int)lVar9 + iVar6;
  }
  *(int *)(param_1 + 0x14) = iVar6;
  return;
}



/* Entry: 10935e5d8; end: 10935e60f;  */

void FUN_10935e5d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110af2ff0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10935e610; end: 10935e643;  */

long * FUN_10935e610(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10935e644; end: 10935e8db;  */

void FUN_10935e644(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110af2ff0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10935e8dc; end: 10935ea0b;  */

undefined8 * FUN_10935e8dc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x70);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3180;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109311ab0(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1093118fc(puVar1 + 5,param_1,param_2 + 0x28);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = param_1;
  if (*(int *)(param_2 + 0x40) != 0) {
    func_0x000107c303c4(puVar1 + 7,param_2 + 0x38);
  }
  FUN_109311ab0(puVar1 + 10,param_1,param_2 + 0x50);
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = *(undefined8 *)(param_2 + 100);
  return puVar1;
}



/* Entry: 10935ea0c; end: 10935ea9b;  */

undefined8 * FUN_10935ea0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3040;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x15) = 0;
  FUN_10935ce1c();
  return puVar1;
}



/* Entry: 10935ea9c; end: 10935eb27;  */

undefined8 * FUN_10935ea9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af30e0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010935d1d8();
  return puVar1;
}



/* Entry: 10935eb28; end: 10935ebaf;  */

undefined8 * FUN_10935eb28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3090;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010935d5d0();
  return puVar1;
}



/* Entry: 10935ebb0; end: 10935ebe3;  */

long FUN_10935ebb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10935f2c4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ebe4; end: 10935ebe7;  */

long FUN_10935ebe4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10935f2c4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ebe8; end: 10935ebfb;  */

void FUN_10935ebe8(void)

{
  FUN_10935ebb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935ebfc; end: 10935ec07;  */

undefined ** FUN_10935ebfc(void)

{
  return &PTR_DAT_110af34d8;
}



/* Entry: 10935ec08; end: 10935ec63;  */

void FUN_10935ec08(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10100280020,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10935ec64; end: 10935ef97;  */

long * FUN_10935ec64(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  ulong uStack_68;
  uint *puStack_60;
  uint uStack_58;
  
  iVar11 = *(int *)(param_1 + 0x30);
  if (iVar11 != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar3 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
      iVar11 = *(int *)(param_1 + 0x30);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar11;
    param_2 = (long *)((long)param_2 + 5);
  }
  puVar8 = (uint *)(param_1 + 0x10);
  uVar4 = *puVar8;
  uVar6 = (ulong)uVar4;
  if (uVar4 != 0) {
    puStack_60 = puVar8;
    if ((uVar4 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x1c);
      if (uVar4 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 8);
        plVar2 = param_2;
        uStack_58 = uVar4;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar6 = uStack_68;
          plVar3 = (long *)(uStack_68 + 8);
          param_2 = plVar3;
          FUN_10935ef98(plVar3,uStack_68 + 0x20,plVar2,param_3);
          lVar10 = (long)*(char *)(uVar6 + 0x1f);
          if (lVar10 < 0) {
            plVar3 = *(long **)(uVar6 + 8);
            lVar10 = *(long *)(uVar6 + 0x10);
          }
          func_0x000107c303d4(plVar3,lVar10,1,&UNK_10f566ac9);
          func_0x000107c27d54(&uStack_68);
          plVar2 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      plVar2 = (long *)(uVar6 * 8);
      __Znam();
      uStack_58 = *(uint *)(param_1 + 0x1c);
      plVar3 = plVar2;
      if (uStack_58 == *(uint *)(param_1 + 0x14)) {
        uStack_58 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_58 * 8);
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
      }
      while (uStack_68 != 0) {
        *plVar3 = uStack_68 + 8;
        func_0x000107c27d54(&uStack_68);
        plVar3 = plVar3 + 1;
      }
      func_0x000105991c74(plVar2,plVar2 + uVar6,&uStack_68,LZCOUNT(uVar6) * -2 + 0x7e,1);
      lVar10 = 0;
      plVar3 = param_2;
      do {
        plVar9 = *(long **)((long)plVar2 + lVar10);
        param_2 = plVar9;
        FUN_10935ef98(plVar9,plVar9 + 3,plVar3,param_3);
        lVar1 = (long)*(char *)((long)plVar9 + 0x17);
        plVar3 = plVar9;
        if (lVar1 < 0) {
          plVar3 = (long *)*plVar9;
          lVar1 = plVar9[1];
        }
        func_0x000107c303d4(plVar3,lVar1,1,&UNK_10f566ac9);
        lVar10 = lVar10 + 8;
        plVar3 = param_2;
      } while ((long)(uVar6 * 8) - lVar10 != 0);
      __ZdaPv(plVar2);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar10 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar10 = uVar6 + 8;
    }
    uVar4 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar4) {
        do {
          iVar11 = (int)puVar7;
          _memcpy(param_2,lVar10,(long)iVar11);
          uVar4 = (int)uVar5 - iVar11;
          uVar5 = (ulong)uVar4;
          lVar10 = lVar10 + iVar11;
          plVar3 = (long *)*param_3;
          plVar2 = (long *)((long)param_2 + (long)iVar11);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar9 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar9 + (long)((int)plVar2 - (int)plVar3));
            plVar3 = (long *)*param_3;
            param_2 = plVar2;
          } while (plVar3 <= plVar2);
          puVar7 = (undefined1 *)((long)plVar3 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar4);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar4);
      param_2 = (long *)((long)param_2 + (long)(int)uVar4);
    }
    else {
      _memcpy(param_2,lVar10,uVar5 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar4);
    }
  }
  return param_2;
}



/* Entry: 10935ef98; end: 10935f16b;  */

byte * FUN_10935ef98(long *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  
  pbVar7 = *(byte **)param_4;
  if (pbVar7 <= param_3) {
    do {
      if (param_4[0x38] == 1) {
        param_3 = param_4 + 0x10;
        break;
      }
      pbVar5 = param_4;
      func_0x000107c303dc();
      param_3 = pbVar5 + ((int)param_3 - (int)pbVar7);
      pbVar7 = *(byte **)param_4;
    } while (pbVar7 <= param_3);
  }
  pbVar7 = param_3 + 1;
  *param_3 = 0x12;
  uVar8 = *(uint *)(param_1 + 1);
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar8 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  uVar8 = uVar8 + ((int)LZCOUNT(uVar8) * -9 + 0x160U >> 6) + 6;
  pbVar5 = pbVar7;
  uVar6 = uVar8;
  if (0x7f < uVar8) {
    do {
      pbVar7 = pbVar5 + 1;
      *pbVar5 = (byte)uVar6 | 0x80;
      uVar8 = uVar6 >> 7;
      uVar3 = uVar6 >> 0xe;
      pbVar5 = pbVar7;
      uVar6 = uVar8;
    } while (uVar3 != 0);
  }
  pbVar5 = pbVar7 + 1;
  *pbVar7 = (byte)uVar8;
  pbVar7 = *(byte **)param_4;
  if (pbVar7 <= pbVar5) {
    do {
      if (param_4[0x38] == 1) {
        pbVar5 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar5 = pbVar4 + ((int)pbVar5 - (int)pbVar7);
      pbVar7 = *(byte **)param_4;
    } while (pbVar7 <= pbVar5);
  }
  lVar9 = (long)*(char *)((long)param_1 + 0x17);
  if (((lVar9 < 0) && (lVar9 = param_1[1], 0x7f < lVar9)) ||
     ((long)(pbVar7 + (0xe - (long)pbVar5)) < lVar9)) {
    pbVar7 = param_4;
    func_0x00010b4d5120(param_4,1,param_1);
  }
  else {
    *pbVar5 = 10;
    pbVar5[1] = (byte)lVar9;
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    _memcpy(pbVar5 + 2,plVar1,lVar9);
    pbVar7 = pbVar5 + 2 + lVar9;
  }
  pbVar5 = *(byte **)param_4;
  if (pbVar5 <= pbVar7) {
    do {
      if (param_4[0x38] == 1) {
        pbVar7 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar7 = pbVar4 + ((int)pbVar7 - (int)pbVar5);
      pbVar5 = *(byte **)param_4;
    } while (pbVar5 <= pbVar7);
  }
  uVar2 = *param_2;
  *pbVar7 = 0x15;
  *(undefined4 *)(pbVar7 + 1) = uVar2;
  return pbVar7 + 5;
}



/* Entry: 10935f16c; end: 10935f25f;  */

void FUN_10935f16c(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uStack_48;
  int *piStack_40;
  uint uStack_38;
  
  piStack_40 = (int *)(param_1 + 0x10);
  iVar3 = *piStack_40;
  uStack_38 = *(uint *)(param_1 + 0x1c);
  if (uStack_38 != *(uint *)(param_1 + 0x14)) {
    uStack_48 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_38 * 8);
    if ((uStack_48 & 1) != 0) {
      uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
    }
    do {
      uVar2 = *(uint *)(uStack_48 + 0x10);
      if (-1 < (char)*(byte *)(uStack_48 + 0x1f)) {
        uVar2 = (uint)*(byte *)(uStack_48 + 0x1f);
      }
      iVar1 = uVar2 + ((int)LZCOUNT(uVar2) * -9 + 0x160U >> 6) + 6;
      iVar3 = iVar3 + iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
      func_0x000107c27d54(&uStack_48);
    } while (uStack_48 != 0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x34) = iVar3;
  return;
}



/* Entry: 10935f260; end: 10935f2bb;  */

void FUN_10935f260(long param_1,long param_2)

{
  FUN_10935f36c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10935f2bc; end: 10935f2c3;  */

void FUN_10935f2bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110af3498;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  return;
}



/* Entry: 10935f2c4; end: 10935f30b;  */

long FUN_10935f2c4(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,&UNK_100280020,0);
  }
  return param_1;
}



/* Entry: 10935f30c; end: 10935f36b;  */

void FUN_10935f30c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110af3498;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  return;
}



/* Entry: 10935f36c; end: 10935f3fb;  */

void FUN_10935f36c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uStack_68;
  long lStack_60;
  uint uStack_58;
  long alStack_50 [4];
  
  uStack_58 = *(uint *)(param_2 + 0xc);
  if (uStack_58 != *(uint *)(param_2 + 4)) {
    uStack_68 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_58 * 8);
    lStack_60 = param_2;
    if ((uStack_68 & 1) != 0) {
      uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
    }
    do {
      uVar1 = *(undefined4 *)(uStack_68 + 0x20);
      FUN_10935f3fc(alStack_50,param_1,uStack_68 + 8);
      *(undefined4 *)(alStack_50[0] + 0x20) = uVar1;
      func_0x000107c27d54(&uStack_68);
    } while (uStack_68 != 0);
  }
  return;
}



/* Entry: 10935f3fc; end: 10935f4ef;  */

void FUN_10935f3fc(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  piVar2 = param_2;
  func_0x000107c27d5c(param_2,puVar3,uVar1,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar2 != 0) {
      uVar1 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      func_0x000107c27d5c(param_2,puVar3,uVar1,0);
    }
    piVar2 = param_2;
    func_0x000107c27d64(param_2,0x28);
    func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_2 + 6),param_3);
    piVar2[8] = 0;
    func_0x000107c27d68(param_2,puVar3,piVar2);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar2;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)puVar3;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 10935f4f0; end: 10935f523;  */

long FUN_10935f4f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935f524; end: 10935f527;  */

long FUN_10935f524(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935f528; end: 10935f53b;  */

void FUN_10935f528(void)

{
  FUN_10935f4f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935f53c; end: 10935f58b;  */

undefined ** FUN_10935f53c(void)

{
  return &PTR_DAT_110af3620;
}



/* Entry: 10935f58c; end: 10935f74f;  */

long * FUN_10935f58c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *puVar12;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar9[1];
    if (lVar3 == 0) goto LAB_10935f5fc;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10935f5fc;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f566afb);
  plVar5 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar5;
LAB_10935f5fc:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar5 = (long *)*param_3;
    if (param_2 < plVar5) {
      uVar4 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar7 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar7 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
      uVar4 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar4;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar10 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(param_2,lVar3,(long)iVar11);
          uVar8 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar8;
          lVar3 = lVar3 + iVar11;
          plVar7 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar11);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar7));
            plVar7 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar7 <= plVar5);
          puVar12 = (undefined1 *)((long)plVar7 + (0x10 - (long)param_2));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(param_2,lVar3,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar3,uVar10 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 10935f750; end: 10935f7cf;  */

long FUN_10935f750(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10935f7d0; end: 10935f8a7;  */

void FUN_10935f7d0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
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



/* Entry: 10935f8a8; end: 10935f8ab;  */

long FUN_10935f8a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  FUN_109360884(param_1 + 0x40);
  FUN_1093608b8(param_1 + 0x28);
  FUN_1093608b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935f8ac; end: 10935f8bf;  */

void FUN_10935f8ac(void)

{
  func_0x00010935f854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935f8c0; end: 10935f8cb;  */

undefined ** FUN_10935f8c0(void)

{
  return &PTR_DAT_110af3658;
}



/* Entry: 10935f8cc; end: 10935f99b;  */

void FUN_10935f8cc(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x60) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
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



/* Entry: 10935f99c; end: 10935fe0f;  */

long * FUN_10935f99c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar9;
      goto LAB_10935f9e4;
    }
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_10935f9e4:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f566b14);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,1,puVar9,param_2);
      param_2 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10935fa5c;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10935fa5c;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f566b2b);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar2;
LAB_10935fa5c:
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar2,param_3);
      iVar11 = iVar11 + 1;
      plVar2 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x30);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar2,param_3);
      iVar11 = iVar11 + 1;
      plVar2 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x48);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x40);
      puVar1 = (ulong *)(param_1 + 0x40);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar2,param_3);
      iVar11 = iVar11 + 1;
      plVar2 = param_2;
    } while (iVar12 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar10 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      lVar13 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar13 < (int)uVar8) {
        do {
          iVar12 = (int)lVar13;
          _memcpy(param_2,lVar5,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar5 = lVar5 + iVar12;
          plVar7 = (long *)*param_3;
          plVar2 = (long *)((long)param_2 + (long)iVar12);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar7));
            plVar7 = (long *)*param_3;
            param_2 = plVar2;
          } while (plVar7 <= plVar2);
          lVar13 = (long)plVar7 + (0x10 - (long)param_2);
        } while ((int)lVar13 < (int)uVar8);
      }
      _memcpy(param_2,lVar5,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar5,uVar10 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 10935fe10; end: 10935fefb;  */

void FUN_10935fe10(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x00010b4d37ec(param_1 + 0x40,param_2 + 0x40,&UNK_1002a1270);
  }
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar1,uVar2);
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



/* Entry: 10935fefc; end: 10935ff4b;  */

void FUN_10935fefc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110af35e0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0x100000000;
  param_1[0xd] = &DAT_10e5b4a18;
  param_1[0xe] = param_2;
  param_1[0xf] = &DAT_11383d918;
  param_1[0x10] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 10935ff4c; end: 10935ffa7;  */

long FUN_10935ff4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000105991a90(param_1 + 0x58);
  FUN_1093608b8(param_1 + 0x40);
  FUN_1093608b8(param_1 + 0x28);
  FUN_1093608ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ffa8; end: 10935ffab;  */

long FUN_10935ffa8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000105991a90(param_1 + 0x58);
  FUN_1093608b8(param_1 + 0x40);
  FUN_1093608b8(param_1 + 0x28);
  FUN_1093608ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ffac; end: 10935ffbf;  */

void FUN_10935ffac(void)

{
  FUN_10935ff4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935ffc0; end: 10935ffcb;  */

undefined ** FUN_10935ffc0(void)

{
  return &PTR_DAT_110af3690;
}



/* Entry: 10935ffcc; end: 1093600c3;  */

void FUN_10935ffcc(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x5c) != 1) {
    func_0x000107c30320(param_1 + 0x58,0x10300380020,0);
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
  if ((*(ulong *)(param_1 + 0x80) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
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
  *(undefined8 *)(param_1 + 0x88) = 0;
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



/* Entry: 1093600c4; end: 109360503;  */

long * FUN_1093600c4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uStack_68;
  int *piStack_60;
  uint uStack_58;
  
  plVar3 = param_2;
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar3 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x88),param_2);
  }
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar12[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar12;
      goto LAB_10936012c;
    }
  }
  else {
    puVar4 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) != '\0') {
LAB_10936012c:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f566b42);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,2,puVar12,plVar3);
      plVar3 = plVar2;
    }
  }
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    plVar2 = plVar3;
    do {
      uVar9 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar9 & 1) != 0) {
        puVar1 = (ulong *)(uVar9 + (long)iVar15 * 8 + 7);
      }
      plVar3 = (long *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x68),plVar2,param_3);
      iVar15 = iVar15 + 1;
      plVar2 = plVar3;
    } while (iVar16 != iVar15);
  }
  iVar16 = *(int *)(param_1 + 0x30);
  if (iVar16 != 0) {
    iVar15 = 0;
    plVar2 = plVar3;
    do {
      uVar9 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar9 & 1) != 0) {
        puVar1 = (ulong *)(uVar9 + (long)iVar15 * 8 + 7);
      }
      plVar3 = (long *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar2,param_3);
      iVar15 = iVar15 + 1;
      plVar2 = plVar3;
    } while (iVar16 != iVar15);
  }
  iVar16 = *(int *)(param_1 + 0x48);
  if (iVar16 != 0) {
    iVar15 = 0;
    plVar2 = plVar3;
    do {
      uVar9 = *(ulong *)(param_1 + 0x40);
      puVar1 = (ulong *)(param_1 + 0x40);
      if ((uVar9 & 1) != 0) {
        puVar1 = (ulong *)(uVar9 + (long)iVar15 * 8 + 7);
      }
      plVar3 = (long *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar2,param_3);
      iVar15 = iVar15 + 1;
      plVar2 = plVar3;
    } while (iVar16 != iVar15);
  }
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar12[1];
    if (lVar5 == 0) goto LAB_109360288;
    puVar4 = (undefined8 *)*puVar12;
  }
  else {
    puVar4 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) == '\0') goto LAB_109360288;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f566b59);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,6,puVar12,plVar3);
  plVar3 = plVar2;
LAB_109360288:
  piVar6 = (int *)(param_1 + 0x58);
  if (*piVar6 != 0) {
    if ((*piVar6 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar11 = *(uint *)(param_1 + 100);
      piStack_60 = piVar6;
      if (uVar11 != *(uint *)(param_1 + 0x5c)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x68) + (ulong)uVar11 * 8);
        plVar2 = plVar3;
        uStack_58 = uVar11;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar9 = uStack_68;
          lVar5 = uStack_68 + 8;
          lVar7 = uStack_68 + 0x20;
          plVar3 = (long *)0x7;
          func_0x000105990ac4(7,lVar5,lVar7,plVar2,param_3);
          lVar8 = (long)*(char *)(uVar9 + 0x1f);
          if (lVar8 < 0) {
            lVar5 = *(long *)(uVar9 + 8);
            lVar8 = *(long *)(uVar9 + 0x10);
          }
          func_0x000107c303d4(lVar5,lVar8,1,&UNK_10f566b75);
          lVar5 = (long)*(char *)(uVar9 + 0x37);
          if (lVar5 < 0) {
            lVar7 = *(long *)(uVar9 + 0x20);
            lVar5 = *(long *)(uVar9 + 0x28);
          }
          func_0x000107c303d4(lVar7,lVar5,1,&UNK_10f566b75);
          func_0x000107c27d54(&uStack_68);
          plVar2 = plVar3;
        } while (uStack_68 != 0);
      }
    }
    else {
      func_0x000105991b98(&uStack_68);
      piVar6 = piStack_60;
      if (uStack_68 != 0) {
        lVar5 = uStack_68 << 3;
        plVar2 = plVar3;
        piVar13 = piStack_60;
        do {
          puVar17 = *(undefined8 **)piVar13;
          puVar12 = puVar17 + 3;
          plVar3 = (long *)0x7;
          func_0x000105990ac4(7,puVar17,puVar12,plVar2,param_3);
          lVar7 = (long)*(char *)((long)puVar17 + 0x17);
          puVar4 = puVar17;
          if (lVar7 < 0) {
            lVar7 = puVar17[1];
            puVar4 = (undefined8 *)*puVar17;
          }
          func_0x000107c303d4(puVar4,lVar7,1,&UNK_10f566b75);
          lVar7 = (long)*(char *)((long)puVar17 + 0x2f);
          if (lVar7 < 0) {
            puVar12 = (undefined8 *)puVar17[3];
            lVar7 = puVar17[4];
          }
          func_0x000107c303d4(puVar12,lVar7,1,&UNK_10f566b75);
          piVar13 = piVar13 + 2;
          lVar5 = lVar5 + -8;
          plVar2 = plVar3;
          piVar6 = piStack_60;
        } while (lVar5 != 0);
      }
      piStack_60 = (int *)0x0;
      if (piVar6 != (int *)0x0) {
        __ZdaPv(piVar6);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar5 = *(long *)(uVar9 + 8);
      uVar14 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      lVar5 = uVar9 + 8;
    }
    uVar11 = (uint)uVar14;
    if (*param_3 - (long)plVar3 < (long)(int)uVar11) {
      lVar7 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar7 < (int)uVar11) {
        do {
          iVar16 = (int)lVar7;
          _memcpy(plVar3,lVar5,(long)iVar16);
          uVar11 = (int)uVar14 - iVar16;
          uVar14 = (ulong)uVar11;
          lVar5 = lVar5 + iVar16;
          plVar10 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar16);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar10));
            plVar10 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar10 <= plVar2);
          lVar7 = (long)plVar10 + (0x10 - (long)plVar3);
        } while ((int)lVar7 < (int)uVar11);
      }
      _memcpy(plVar3,lVar5,(long)(int)uVar11);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar11);
    }
    else {
      _memcpy(plVar3,lVar5,uVar14 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar11);
    }
  }
  return plVar3;
}



/* Entry: 109360504; end: 10936076f;  */

long FUN_109360504(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uStack_58;
  uint *puStack_50;
  uint uStack_48;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar4 = (long)*(int *)(param_1 + 0x18);
  puVar5 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar5 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar4 = 0;
  }
  else {
    lVar6 = lVar4 << 3;
    do {
      uVar2 = *puVar5;
      func_0x00010935fc30();
      lVar4 = uVar2 + lVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar4 = lVar4 + iVar1;
  puVar5 = (ulong *)(param_1 + 0x28);
  if ((uVar2 & 1) != 0) {
    puVar5 = (ulong *)(uVar2 + 7);
  }
  if (iVar1 != 0) {
    lVar6 = (long)iVar1 << 3;
    do {
      uVar2 = *puVar5;
      FUN_10935f750();
      lVar4 = uVar2 + lVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x48);
  lVar4 = lVar4 + iVar1;
  puVar5 = (ulong *)(param_1 + 0x40);
  if ((uVar2 & 1) != 0) {
    puVar5 = (ulong *)(uVar2 + 7);
  }
  if (iVar1 != 0) {
    lVar6 = (long)iVar1 << 3;
    do {
      uVar2 = *puVar5;
      FUN_10935f750();
      lVar4 = uVar2 + lVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  puStack_50 = (uint *)(param_1 + 0x58);
  lVar4 = lVar4 + (ulong)*puStack_50;
  uStack_48 = *(uint *)(param_1 + 100);
  if (uStack_48 != *(uint *)(param_1 + 0x5c)) {
    uStack_58 = *(ulong *)(*(long *)(param_1 + 0x68) + (ulong)uStack_48 * 8);
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      lVar6 = uStack_58 + 8;
      func_0x000105990b3c(lVar6,uStack_58 + 0x20);
      lVar4 = lVar6 + lVar4;
      func_0x000107c27d54(&uStack_58);
    } while (uStack_58 != 0);
  }
  uVar2 = *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  lVar6 = lVar3;
  if (lVar3 < 0) {
    lVar6 = *(long *)(uVar2 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar6 = lVar3;
    }
    lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  lVar6 = lVar3;
  if (lVar3 < 0) {
    lVar6 = *(long *)(uVar2 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar6 = lVar3;
    }
    lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar6 + lVar4;
  }
  *(int *)(param_1 + 0x90) = (int)lVar4;
  return lVar4;
}



/* Entry: 109360770; end: 10936086b;  */

void FUN_109360770(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  func_0x0001059929d4(param_1 + 0x58,param_2 + 0x58);
  uVar1 = *(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x78,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x80) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x80,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
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



/* Entry: 10936086c; end: 109360883;  */

void FUN_10936086c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110af3540;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 109360884; end: 1093608b7;  */

long * FUN_109360884(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1093608b8; end: 1093608eb;  */

long * FUN_1093608b8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1093608ec; end: 10936091f;  */

long * FUN_1093608ec(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109360920; end: 109360a63;  */

void FUN_109360920(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110af3540;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 109360a64; end: 109360ae3;  */

undefined8 * FUN_109360a64(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af3720;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar2 = (ulong *)(param_3 + 0x10);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[2] = puVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 109360ae4; end: 109360b17;  */

long FUN_109360ae4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109360b18; end: 109360b1b;  */

long FUN_109360b18(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109360b1c; end: 109360b2f;  */

void FUN_109360b1c(void)

{
  FUN_109360ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109360b30; end: 109360b7f;  */

undefined ** FUN_109360b30(void)

{
  return &PTR_DAT_110af3800;
}



/* Entry: 109360b80; end: 109360d03;  */

long * FUN_109360b80(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x1c),plVar1);
  }
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  plVar1 = plVar2;
  if (lVar5 != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,3,uVar3,plVar2);
  }
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
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      lVar5 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar5 < (int)uVar4) {
        do {
          iVar7 = (int)lVar5;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar4 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar4;
          lStack_50 = lStack_50 + iVar7;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar1 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar1 = plVar2;
          } while (plVar6 <= plVar2);
          lVar5 = (long)plVar6 + (0x10 - (long)plVar1);
        } while ((int)lVar5 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar4);
    }
  }
  return plVar1;
}



/* Entry: 109360d04; end: 109360dbb;  */

long FUN_109360d04(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109360dbc; end: 109360eb3;  */

void FUN_109360dbc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 109360eb4; end: 109360eb7;  */

long FUN_109360eb4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109349e70();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109360ae4();
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109360eb8; end: 109360ecb;  */

void FUN_109360eb8(void)

{
  func_0x000109360e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109360ecc; end: 109360ed7;  */

undefined ** FUN_109360ecc(void)

{
  return &PTR_DAT_110af3848;
}



/* Entry: 109360ed8; end: 109360f4b;  */

void FUN_109360ed8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109349ec8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109360b3c(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109348c04(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 109360f4c; end: 1093610e3;  */

long * FUN_109360f4c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 1093610e4; end: 1093611cf;  */

long FUN_1093610e4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_10934a0e8();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109360d04();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_109348da0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1093611d0; end: 1093612d7;  */

void FUN_1093611d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010936179c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10934a194();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109350458(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109360dbc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000109350414(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_109348af4();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093612d8; end: 10936134b;  */

undefined8 * FUN_1093612d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af37c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}


