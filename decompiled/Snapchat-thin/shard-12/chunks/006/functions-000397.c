/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109309f8c; end: 109309f8f;  */

long FUN_109309f8c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109309f90; end: 109309fa3;  */

void FUN_109309f90(void)

{
  FUN_109309f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109309fa4; end: 10930a03b;  */

undefined ** FUN_109309fa4(void)

{
  return &PTR_DAT_110aeb9d0;
}



/* Entry: 10930a03c; end: 10930a3bb;  */

byte * FUN_10930a03c(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  pbVar5 = param_2;
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
  }
  pbVar2 = pbVar5;
  if ((uVar12 >> 3 & 1) != 0) {
    pbVar2 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x3c),pbVar5);
  }
  iVar15 = *(int *)(param_1 + 0x18);
  if (0 < iVar15) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar2) {
      do {
        if (param_3[0x38] == 1) {
          pbVar2 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        pbVar2 = pbVar3 + ((int)pbVar2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar2);
      iVar15 = *(int *)(param_1 + 0x18);
    }
    uVar1 = iVar15 * 4;
    uVar13 = (ulong)uVar1;
    pbVar5 = pbVar2 + 1;
    *pbVar2 = 0x1a;
    uVar6 = uVar13;
    uVar9 = uVar1;
    if (0x7f < uVar1) {
      do {
        pbVar2 = pbVar5;
        uVar8 = (uint)uVar6;
        pbVar5 = pbVar2 + 1;
        *pbVar2 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        uVar9 = (uint)uVar6;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar2 = pbVar2 + 2;
    *pbVar5 = (byte)uVar9;
    lVar14 = *(long *)(param_1 + 0x20);
    uVar16 = (ulong)(int)uVar1;
    uVar6 = uVar13;
    if ((*(long *)param_3 - (long)pbVar2 < (long)(int)uVar1) &&
       (pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar2) + 0x10), uVar6 = uVar16,
       (int)pbVar5 < (int)uVar1)) {
      pbVar3 = param_3 + 0x10;
      do {
        iVar15 = (int)pbVar5;
        _memcpy(pbVar2,lVar14,(long)iVar15);
        uVar1 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar1;
        lVar14 = lVar14 + iVar15;
        pbVar11 = pbVar2 + iVar15;
        pbVar7 = *(byte **)param_3;
        do {
          pbVar2 = pbVar3;
          pbVar5 = pbVar7;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10930a2a8:
            param_3[0x38] = 1;
LAB_10930a288:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar5 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar17 = *(undefined8 *)pbVar7;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar7 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              *(byte **)(param_3 + 8) = pbVar7;
              goto LAB_10930a288;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar7 - (long)pbVar3);
            do {
              plVar4 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) goto LAB_10930a2a8;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar3 = uVar17;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar2 = pbStack_70;
            }
          }
          pbVar11 = pbVar2 + ((int)pbVar11 - (int)pbVar7);
          pbVar7 = pbVar5;
          pbVar2 = pbVar11;
        } while (pbVar5 <= pbVar11);
        pbVar5 = pbVar5 + (0x10 - (long)pbVar2);
      } while ((int)pbVar5 < (int)uVar1);
      uVar16 = (ulong)(int)uVar1;
      uVar6 = uVar16;
    }
    _memcpy(pbVar2,lVar14,uVar6);
    pbVar2 = pbVar2 + uVar16;
  }
  pbVar5 = pbVar2;
  if ((uVar12 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,pbVar2);
  }
  pbVar2 = pbVar5;
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar2 = param_3;
    func_0x000107c280a0(param_3,5,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,pbVar5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar14 = *(long *)(uVar6 + 8);
      uVar13 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar14 = uVar6 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*(long *)param_3 - (long)pbVar2 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar2) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar15 = (int)pbVar5;
          _memcpy(pbVar2,lVar14,(long)iVar15);
          uVar12 = (int)uVar13 - iVar15;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar15;
          pbVar5 = *(byte **)param_3;
          pbVar3 = pbVar2 + iVar15;
          do {
            pbVar2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar2 = param_3;
            func_0x000107c303dc();
            pbVar3 = pbVar2 + ((int)pbVar3 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar2 = pbVar3;
          } while (pbVar5 <= pbVar3);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar2);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(pbVar2,lVar14,(long)(int)uVar12);
      pbVar2 = pbVar2 + (int)uVar12;
    }
    else {
      _memcpy(pbVar2,lVar14,uVar13 & 0xffffffff);
      pbVar2 = pbVar2 + (int)uVar12;
    }
  }
  return pbVar2;
}



/* Entry: 10930a3bc; end: 10930a4f3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10930a3bc(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar4 + (ulong)uVar1 * 4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10930a4f4; end: 10930a643;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930a4f4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xf) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 10930a644; end: 10930a6c3;  */

long FUN_10930a644(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
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



/* Entry: 10930a6c4; end: 10930a6c7;  */

long FUN_10930a6c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
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



/* Entry: 10930a6c8; end: 10930a6db;  */

void FUN_10930a6c8(void)

{
  FUN_10930a644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930a6dc; end: 10930a703;  */

undefined ** FUN_10930a6dc(void)

{
  return &PTR_DAT_110aeba08;
}



/* Entry: 10930a704; end: 10930ad9b;  */

byte * FUN_10930a704(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar17 = *(int *)(param_1 + 0x10);
  if (0 < iVar17) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
      iVar17 = *(int *)(param_1 + 0x10);
    }
    uVar11 = iVar17 * 4;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar18 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar18,
       (int)pbVar2 < (int)uVar11)) {
      pbVar9 = (byte *)(param_3 + 2);
      do {
        iVar17 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar17);
        uVar11 = (int)uVar12 - iVar17;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar17;
        pbVar10 = param_2 + iVar17;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar9;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar9;
          if (param_3[6] == 0) {
LAB_10930ab50:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10930ab30:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar9 = uVar19;
              param_3[1] = (long)pbVar4;
              goto LAB_10930ab30;
            }
            _memcpy(param_3[1],pbVar9,(long)pbVar4 - (long)pbVar9);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10930ab50;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar9 = uVar19;
              *param_3 = (long)(pbVar9 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar10 = pbVar7 + ((int)pbVar10 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar10;
        } while (pbVar2 <= pbVar10);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar18 = (ulong)(int)uVar11;
      uVar3 = uVar18;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar18;
  }
  iVar17 = *(int *)(param_1 + 0x20);
  if (0 < iVar17) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
      iVar17 = *(int *)(param_1 + 0x20);
    }
    uVar11 = iVar17 * 4;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 0x12;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar18 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar18,
       (int)pbVar2 < (int)uVar11)) {
      pbVar9 = (byte *)(param_3 + 2);
      do {
        iVar17 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar17);
        uVar11 = (int)uVar12 - iVar17;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar17;
        pbVar10 = param_2 + iVar17;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar9;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar9;
          if (param_3[6] == 0) {
LAB_10930ac64:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10930ac44:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar9 = uVar19;
              param_3[1] = (long)pbVar4;
              goto LAB_10930ac44;
            }
            _memcpy(param_3[1],pbVar9,(long)pbVar4 - (long)pbVar9);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10930ac64;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar9 = uVar19;
              *param_3 = (long)(pbVar9 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar10 = pbVar7 + ((int)pbVar10 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar10;
        } while (pbVar2 <= pbVar10);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar18 = (ulong)(int)uVar11;
      uVar3 = uVar18;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar18;
  }
  uVar11 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar11) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
    }
    pbVar2 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar11 | 0x80;
        uVar5 = uVar11 >> 0xe;
        uVar11 = uVar11 >> 7;
      } while (uVar5 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar11;
    puVar14 = *(uint **)(param_1 + 0x38);
    iVar17 = *(int *)(param_1 + 0x30);
    pbVar2 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar9 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar9 = pbVar2;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10930a894:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10930a92c:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar2 = uVar19;
              param_3[1] = (long)pbVar10;
              goto LAB_10930a92c;
            }
            _memcpy(param_3[1],pbVar2,(long)pbVar10 - (long)pbVar2);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10930a894;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar2 = uVar19;
              *param_3 = (long)(pbVar2 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar9 = pbStack_70;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar9 + ((int)param_2 - (int)pbVar10);
          pbVar9 = param_2;
          pbVar10 = pbVar4;
        } while (pbVar4 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar12 = (ulong)(int)*puVar15;
      uVar3 = uVar12;
      pbVar10 = pbVar9;
      if (0x7f < *puVar15) {
        do {
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar3 | 0x80;
          uVar12 = uVar3 >> 7;
          uVar18 = uVar3 >> 0xe;
          uVar3 = uVar12;
          pbVar10 = pbVar9;
        } while (uVar18 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar12;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar3 + 8);
      uVar12 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar13 = uVar3 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar11) {
        do {
          iVar17 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar17);
          uVar11 = (int)uVar12 - iVar17;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar17;
          pbVar2 = (byte *)*param_3;
          pbVar9 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar9;
          } while (pbVar2 <= pbVar9);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar11);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar13,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 10930ad9c; end: 10930ae8b;  */

long FUN_10930ad9c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar5 = 0;
  if (uVar2 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((int)uVar3 < 1) {
    lVar7 = 0;
    lVar6 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar7 = 0;
    uVar9 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar8 = *(int **)(param_1 + 0x38);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar8) * -9 + 0x280U >> 6) + lVar7;
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar9 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + ((ulong)uVar2 + (ulong)uVar1) * 4 + lVar5 + lVar7 + lVar6;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar9 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x44) = (int)lVar4;
  return lVar4;
}



/* Entry: 10930ae8c; end: 10930b073;  */

void FUN_10930ae8c(long param_1,long param_2)

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
      FUN_109311970(param_1 + 0x10);
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
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x24) < iVar3) {
      FUN_109311970(param_1 + 0x20);
      iVar2 = *(int *)(param_1 + 0x20);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x20) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x28);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 4);
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



/* Entry: 10930b074; end: 10930b0af;  */

long FUN_10930b074(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109307fbc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10930b0b0; end: 10930b0b3;  */

long FUN_10930b0b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109307fbc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10930b0b4; end: 10930b0c7;  */

void FUN_10930b0b4(void)

{
  FUN_10930b074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930b0c8; end: 10930b0d3;  */

undefined ** FUN_10930b0c8(void)

{
  return &PTR_DAT_110aeba38;
}



/* Entry: 10930b0d4; end: 10930b12b;  */

void FUN_10930b0d4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000109308014(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0xe) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10930b12c; end: 10930b383;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10930b12c(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar4 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = pbVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pbVar4 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = pbVar4;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x20);
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    uVar3 = uVar5;
    pbVar4 = pbVar7;
    if (0x7f < uVar5) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar6 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x28);
    pbVar7 = param_2 + 1;
    *param_2 = 0x20;
    uVar3 = uVar5;
    pbVar4 = pbVar7;
    if (0x7f < uVar5) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        uVar6 = uVar3 >> 0xe;
        uVar3 = uVar5;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uVar3;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar2 = (int)uVar3 - iVar9;
          uVar3 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar4 = *(byte **)param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            param_2 = pbVar7;
          } while (pbVar4 <= pbVar7);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar2);
      }
      _memcpy(param_2,lVar8,(long)(int)uVar2);
      param_2 = param_2 + (int)uVar2;
    }
    else {
      _memcpy(param_2,lVar8,uVar3 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 10930b384; end: 10930b46b;  */

void FUN_10930b384(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_10930820c();
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10930b46c; end: 10930b46f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930b46c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_1093125d4(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093082f8(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10930b470; end: 10930b547;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930b470(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_1093125d4(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093082f8(*(long *)(param_1 + 0x18));
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10930b548; end: 10930b58f;  */

long FUN_10930b548(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10930b590; end: 10930b593;  */

long FUN_10930b590(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10930b594; end: 10930b5a7;  */

void FUN_10930b594(void)

{
  FUN_10930b548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930b5a8; end: 10930b5c7;  */

undefined ** FUN_10930b5a8(void)

{
  return &PTR_DAT_110aeba78;
}



/* Entry: 10930b5c8; end: 10930b8d3;  */

byte * FUN_10930b5c8(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar14 = *(int *)(param_1 + 0x10);
  if (0 < iVar14) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
      iVar14 = *(int *)(param_1 + 0x10);
    }
    uVar9 = iVar14 * 4;
    uVar10 = (ulong)uVar9;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar10;
    uVar6 = uVar9;
    if (0x7f < uVar9) {
      do {
        param_2 = pbVar2;
        uVar5 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar6 = (uint)uVar3;
      } while (uVar5 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar9;
    uVar3 = uVar10;
    if ((*param_3 - (long)param_2 < (long)(int)uVar9) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar9)) {
      pbVar12 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar9 = (int)uVar10 - iVar14;
        uVar10 = (ulong)uVar9;
        lVar13 = lVar13 + iVar14;
        pbVar11 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar12;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar12;
          if (param_3[6] == 0) {
LAB_10930b7c0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10930b7a0:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_10930b7a0;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10930b7c0;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar12 = uVar16;
              *param_3 = (long)(pbVar12 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar12 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar11;
        } while (pbVar2 <= pbVar11);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar9);
      uVar15 = (ulong)(int)uVar9;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar13 = *(long *)(uVar3 + 8);
      uVar10 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar13 = uVar3 + 8;
    }
    uVar9 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar9) {
        do {
          iVar14 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar14);
          uVar9 = (int)uVar10 - iVar14;
          uVar10 = (ulong)uVar9;
          lVar13 = lVar13 + iVar14;
          pbVar2 = (byte *)*param_3;
          pbVar12 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar12 = (byte *)((long)plVar1 + (long)((int)pbVar12 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar12;
          } while (pbVar2 <= pbVar12);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar9);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar13,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 10930b8d4; end: 10930b92b;  */

long FUN_10930b8d4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)uVar1 * 4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10930b92c; end: 10930b9d3;  */

void FUN_10930b92c(long param_1,long param_2)

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
      FUN_109311970(param_1 + 0x10);
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



/* Entry: 10930b9d4; end: 10930ba2b;  */

long FUN_10930b9d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109311cd4(param_1 + 0x40);
  FUN_109311cd4(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10930ba2c; end: 10930ba2f;  */

long FUN_10930ba2c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109311cd4(param_1 + 0x40);
  FUN_109311cd4(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10930ba30; end: 10930ba43;  */

void FUN_10930ba30(void)

{
  FUN_10930b9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930ba44; end: 10930ba4f;  */

undefined ** FUN_10930ba44(void)

{
  return &PTR_DAT_110aebae0;
}



/* Entry: 10930ba50; end: 10930bac7;  */

void FUN_10930ba50(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
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



/* Entry: 10930bac8; end: 10930bf33;  */

byte * FUN_10930bac8(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar12 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
  }
  uVar18 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar18) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar5 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
      uVar18 = *(uint *)(param_1 + 0x18);
    }
    pbVar7 = pbVar4 + 1;
    *pbVar4 = 0x12;
    uVar9 = uVar18;
    if (0x7f < uVar18) {
      do {
        pbVar4 = pbVar7;
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar9 | 0x80;
        uVar3 = uVar9 >> 0xe;
        uVar9 = uVar9 >> 7;
      } while (uVar3 != 0);
    }
    pbVar4 = pbVar4 + 2;
    *pbVar7 = (byte)uVar9;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar16 = (ulong)(int)uVar18;
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar18) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      uVar14 = uVar16;
      if ((int)pbVar7 < (int)uVar18) {
        pbVar5 = param_3 + 0x10;
        do {
          iVar17 = (int)pbVar7;
          _memcpy(pbVar4,lVar13,(long)iVar17);
          uVar18 = uVar18 - iVar17;
          lVar13 = lVar13 + iVar17;
          pbVar11 = pbVar4 + iVar17;
          pbVar8 = *(byte **)param_3;
          do {
            pbVar4 = pbVar5;
            pbVar7 = pbVar8;
            if ((param_3[0x38] & 1) != 0) break;
            if (*(long *)(param_3 + 0x30) == 0) {
LAB_10930be10:
              param_3[0x38] = 1;
LAB_10930bdf0:
              *(byte **)param_3 = param_3 + 0x20;
              pbVar7 = param_3 + 0x20;
            }
            else {
              if (*(long *)(param_3 + 8) == 0) {
                uVar19 = *(undefined8 *)pbVar8;
                *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar8 + 8);
                *(undefined8 *)pbVar5 = uVar19;
                *(byte **)(param_3 + 8) = pbVar8;
                goto LAB_10930bdf0;
              }
              _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar8 - (long)pbVar5);
              do {
                plVar6 = *(long **)(param_3 + 0x30);
                (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
                if (((ulong)plVar6 & 1) == 0) goto LAB_10930be10;
              } while (uStack_64 == 0);
              puVar10 = *(undefined8 **)param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar10;
                *(undefined8 *)(param_3 + 0x18) = puVar10[1];
                *(undefined8 *)pbVar5 = uVar19;
                *(byte **)param_3 = pbVar5 + (int)uStack_64;
                *(byte **)(param_3 + 8) = pbStack_70;
                pbVar7 = pbVar5 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar10;
                *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                param_3[8] = 0;
                param_3[9] = 0;
                param_3[10] = 0;
                param_3[0xb] = 0;
                param_3[0xc] = 0;
                param_3[0xd] = 0;
                param_3[0xe] = 0;
                param_3[0xf] = 0;
                pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar4 = pbStack_70;
              }
            }
            pbVar11 = pbVar4 + ((int)pbVar11 - (int)pbVar8);
            pbVar8 = pbVar7;
            pbVar4 = pbVar11;
          } while (pbVar7 <= pbVar11);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar4);
        } while ((int)pbVar7 < (int)uVar18);
        uVar14 = (ulong)(int)uVar18;
        uVar16 = uVar14;
      }
    }
    else {
      uVar14 = (ulong)uVar18;
    }
    _memcpy(pbVar4,lVar13,uVar14);
    pbVar4 = pbVar4 + uVar16;
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar7 = pbVar4;
    do {
      uVar16 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      pbVar4 = (byte *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar7,param_3);
      iVar15 = iVar15 + 1;
      pbVar7 = pbVar4;
    } while (iVar17 != iVar15);
  }
  iVar17 = *(int *)(param_1 + 0x48);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar7 = pbVar4;
    do {
      uVar16 = *(ulong *)(param_1 + 0x40);
      puVar1 = (ulong *)(param_1 + 0x40);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      pbVar4 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar7,param_3);
      iVar15 = iVar15 + 1;
      pbVar7 = pbVar4;
    } while (iVar17 != iVar15);
  }
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar5 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    bVar2 = *(byte *)(param_1 + 0x5c);
    *pbVar4 = 0x28;
    pbVar4[1] = bVar2;
    pbVar4 = pbVar4 + 2;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar5 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    bVar2 = *(byte *)(param_1 + 0x5d);
    *pbVar4 = 0x30;
    pbVar4[1] = bVar2;
    pbVar4 = pbVar4 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar13 = *(long *)(uVar16 + 8);
      uVar14 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar13 = uVar16 + 8;
    }
    uVar12 = (uint)uVar14;
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar12) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar7 < (int)uVar12) {
        do {
          iVar17 = (int)pbVar7;
          _memcpy(pbVar4,lVar13,(long)iVar17);
          uVar12 = (int)uVar14 - iVar17;
          uVar14 = (ulong)uVar12;
          lVar13 = lVar13 + iVar17;
          pbVar7 = *(byte **)param_3;
          pbVar5 = pbVar4 + iVar17;
          do {
            pbVar4 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar4 = param_3;
            func_0x000107c303dc();
            pbVar5 = pbVar4 + ((int)pbVar5 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar4 = pbVar5;
          } while (pbVar7 <= pbVar5);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar4);
        } while ((int)pbVar7 < (int)uVar12);
      }
      _memcpy(pbVar4,lVar13,(long)(int)uVar12);
      pbVar4 = pbVar4 + (int)uVar12;
    }
    else {
      _memcpy(pbVar4,lVar13,uVar14 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar12;
    }
  }
  return pbVar4;
}



/* Entry: 10930bf34; end: 10930c097;  */

long FUN_10930bf34(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)((int)LZCOUNT((long)(int)uVar1) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar3 = lVar3 + (ulong)uVar1 + (long)iVar2;
  puVar5 = (ulong *)(param_1 + 0x28);
  if ((uVar4 & 1) != 0) {
    puVar5 = (ulong *)(uVar4 + 7);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      uVar4 = *puVar5;
      FUN_10930b8d4();
      lVar3 = uVar4 + lVar3 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  lVar3 = lVar3 + iVar2;
  puVar5 = (ulong *)(param_1 + 0x40);
  if ((uVar4 & 1) != 0) {
    puVar5 = (ulong *)(uVar4 + 7);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      uVar4 = *puVar5;
      FUN_10930b8d4();
      lVar3 = uVar4 + lVar3 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    lVar3 = lVar3 + (ulong)((uVar1 >> 1 & 2) + (uVar1 & 2));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar6 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10930c098; end: 10930c09b;  */

void FUN_10930c098(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311b98(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined1 **)(param_2 + 0x20);
      puVar5 = (undefined1 *)(*(long *)(param_1 + 0x20) + (long)iVar2);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 7) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
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



/* Entry: 10930c09c; end: 10930c1b3;  */

void FUN_10930c09c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311b98(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined1 **)(param_2 + 0x20);
      puVar5 = (undefined1 *)(*(long *)(param_1 + 0x20) + (long)iVar2);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 7) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
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



/* Entry: 10930c1b4; end: 10930c24f;  */

void FUN_10930c1b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aeb798;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x13] = 0x100000000;
  param_1[0x12] = 0x100000000;
  param_1[0x14] = &DAT_10e5b4a18;
  param_1[0x15] = param_2;
  param_1[0x16] = &DAT_11383d918;
  *(undefined8 *)((long)param_1 + 0x15c) = 0x200000002;
  *(undefined8 *)((long)param_1 + 0x154) = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x164) = 0x2ffffffff;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  return;
}



/* Entry: 10930c250; end: 10930c5bb;  */

undefined8 * FUN_10930c250(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb798;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  if (*(int *)(param_3 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 9,param_3 + 0x48);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  if (*(int *)(param_3 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0xc,param_3 + 0x60);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  if (*(int *)(param_3 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0xf,param_3 + 0x78);
  }
  FUN_109311d08(param_1 + 0x12,param_2,param_3 + 0x90);
  puVar4 = (ulong *)(param_3 + 0xb0);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[0x16] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10931267c(param_2,*(undefined8 *)(param_3 + 0xb8));
  }
  param_1[0x17] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093126c0(param_2,*(undefined8 *)(param_3 + 0xc0));
  }
  param_1[0x18] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_109312770(param_2,*(undefined8 *)(param_3 + 200));
  }
  param_1[0x19] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000109312848(param_2,*(undefined8 *)(param_3 + 0xd0));
  }
  param_1[0x1a] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010931288c(param_2,*(undefined8 *)(param_3 + 0xd8));
  }
  param_1[0x1b] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093125d4(param_2,*(undefined8 *)(param_3 + 0xe0));
  }
  param_1[0x1c] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10931267c(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  param_1[0x1d] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093128d0(param_2,*(undefined8 *)(param_3 + 0xf0));
  }
  param_1[0x1e] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093129a8(param_2,*(undefined8 *)(param_3 + 0xf8));
  }
  param_1[0x1f] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093129ec(param_2,*(undefined8 *)(param_3 + 0x100));
  }
  param_1[0x20] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093126c0(param_2,*(undefined8 *)(param_3 + 0x108));
  }
  param_1[0x21] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010931288c(param_2,*(undefined8 *)(param_3 + 0x110));
  }
  param_1[0x22] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_109312ae4(param_2,*(undefined8 *)(param_3 + 0x118));
  }
  param_1[0x23] = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_109312bf0(param_2,*(undefined8 *)(param_3 + 0x120));
  }
  param_1[0x24] = uVar3;
  if ((uVar1 >> 0xf & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109312ce0(param_2,*(undefined8 *)(param_3 + 0x128));
  }
  param_1[0x25] = param_2;
  uVar5 = *(undefined8 *)(param_3 + 0x138);
  uVar3 = *(undefined8 *)(param_3 + 0x130);
  uVar7 = *(undefined8 *)(param_3 + 0x148);
  uVar6 = *(undefined8 *)(param_3 + 0x140);
  uVar9 = *(undefined8 *)(param_3 + 0x158);
  uVar8 = *(undefined8 *)(param_3 + 0x150);
  uVar10 = *(undefined8 *)(param_3 + 0x15c);
  *(undefined8 *)((long)param_1 + 0x164) = *(undefined8 *)(param_3 + 0x164);
  *(undefined8 *)((long)param_1 + 0x15c) = uVar10;
  param_1[0x29] = uVar7;
  param_1[0x28] = uVar6;
  param_1[0x2b] = uVar9;
  param_1[0x2a] = uVar8;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar3;
  return param_1;
}



/* Entry: 10930c5bc; end: 10930c5f3;  */

long FUN_10930c5bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10930c5f4(param_1);
  return param_1;
}



/* Entry: 10930c5f4; end: 10930c753;  */

long * FUN_10930c5f4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c30258(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1093083c4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_1093092b4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_1093387dc();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10930889c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x000109307fbc();
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_1093098f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10933e960();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_109309f34();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_1093083c4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_10930889c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_10930b9d4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_10930a644();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  FUN_109311d5c(param_1 + 0x90);
  FUN_109311da4(param_1 + 0x78);
  FUN_109311da4(param_1 + 0x60);
  FUN_109311dd8(param_1 + 0x48);
  FUN_109311da4(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10930c754; end: 10930c757;  */

long FUN_10930c754(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10930c5f4(param_1);
  return param_1;
}



/* Entry: 10930c758; end: 10930c76b;  */

void FUN_10930c758(void)

{
  FUN_10930c5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930c76c; end: 10930c793;  */

undefined ** FUN_10930c76c(void)

{
  return &PTR_DAT_110aebb40;
}



/* Entry: 10930c794; end: 10930c9bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930c794(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    func_0x0001053936e4(param_1 + 0x60);
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    func_0x0001053936e4(param_1 + 0x78);
  }
  if (*(int *)(param_1 + 0x94) != 1) {
    func_0x000107c30320(param_1 + 0x90,0x10500580020,0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf0d4(param_1 + 0xb0,&PTR_DAT_1132d0698,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109340dd8(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109308454(*(undefined8 *)(param_1 + 0xc0));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109309328(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000109338834(*(undefined8 *)(param_1 + 0xd0));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10930894c(*(undefined8 *)(param_1 + 0xd8));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000109308014(*(undefined8 *)(param_1 + 0xe0));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000109340dd8(*(undefined8 *)(param_1 + 0xe8));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x000109309968(*(undefined8 *)(param_1 + 0xf0));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x00010933ea00(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x000109309fb0(*(undefined8 *)(param_1 + 0x100));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_109308454(*(undefined8 *)(param_1 + 0x108));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_10930894c(*(undefined8 *)(param_1 + 0x110));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_10930ba50(*(undefined8 *)(param_1 + 0x118));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x00010930a6e8(*(undefined8 *)(param_1 + 0x120));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_109335ed0(*(undefined8 *)(param_1 + 0x128));
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if ((uVar1 & 0x7f000000) != 0) {
    *(undefined8 *)(param_1 + 0x158) = 0x200000001;
    *(undefined8 *)(param_1 + 0x150) = 0x100000000;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff00000002;
    *(undefined4 *)(param_1 + 0x168) = 2;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  *(byte *)puVar3 = 0;
  *(byte *)((long)puVar3 + 0x17) = 0;
  return;
}



/* Entry: 10930c9bc; end: 10930d603;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10930c9bc(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uStack_68;
  long *plStack_60;
  uint uStack_58;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((uVar12 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar5;
  }
  if ((uVar12 >> 0x10 & 1) != 0) {
    pbVar5 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x130),param_2);
    param_2 = pbVar5;
  }
  if ((uVar12 >> 0x11 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar6 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x134);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar5 = (byte *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0xb8),
                        *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar5 = (byte *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0xc0),
                        *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  pbVar5 = param_2;
  if ((uVar12 >> 3 & 1) != 0) {
    pbVar5 = (byte *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 200),*(undefined4 *)(*(long *)(param_1 + 200) + 0x14),
                        param_2,param_3);
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar6 = pbVar5;
    do {
      uVar8 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x8;
      func_0x000107c303cc(8,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar13 = iVar13 + 1;
      pbVar6 = pbVar5;
    } while (iVar14 != iVar13);
  }
  iVar14 = *(int *)(param_1 + 0x38);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar6 = pbVar5;
    do {
      uVar8 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x9;
      func_0x000107c303cc(9,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar13 = iVar13 + 1;
      pbVar6 = pbVar5;
    } while (iVar14 != iVar13);
  }
  if ((uVar12 >> 0x12 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x138);
    *pbVar5 = 0x55;
    *(undefined4 *)(pbVar5 + 1) = uVar2;
    pbVar5 = pbVar5 + 5;
  }
  if ((uVar12 >> 4 & 1) != 0) {
    pbVar6 = (byte *)0xb;
    func_0x000107c303cc(0xb,*(long *)(param_1 + 0xd0),
                        *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),pbVar5,param_3);
    pbVar5 = pbVar6;
  }
  if ((uVar12 >> 0x19 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x154);
    uVar9 = (ulong)(int)uVar4;
    pbVar6 = pbVar5 + 1;
    *pbVar5 = 0x68;
    uVar8 = uVar9;
    pbVar5 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar6;
      } while (uVar10 != 0);
    }
    pbVar5 = pbVar6 + 1;
    *pbVar6 = (byte)uVar9;
  }
  if ((uVar12 >> 0x1a & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x158);
    uVar9 = (ulong)(int)uVar4;
    pbVar6 = pbVar5 + 1;
    *pbVar5 = 0x70;
    uVar8 = uVar9;
    pbVar5 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar6;
      } while (uVar10 != 0);
    }
    pbVar5 = pbVar6 + 1;
    *pbVar6 = (byte)uVar9;
  }
  if ((uVar12 >> 0x1b & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x15c);
    uVar9 = (ulong)(int)uVar4;
    pbVar6 = pbVar5 + 1;
    *pbVar5 = 0x78;
    uVar8 = uVar9;
    pbVar5 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar6;
      } while (uVar10 != 0);
    }
    pbVar5 = pbVar6 + 1;
    *pbVar6 = (byte)uVar9;
  }
  iVar14 = *(int *)(param_1 + 0x50);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar6 = pbVar5;
    do {
      uVar8 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x10;
      func_0x000107c303cc(0x10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar13 = iVar13 + 1;
      pbVar6 = pbVar5;
    } while (iVar14 != iVar13);
  }
  if ((uVar12 >> 5 & 1) != 0) {
    pbVar6 = (byte *)0x11;
    func_0x000107c303cc(0x11,*(long *)(param_1 + 0xd8),
                        *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x14),pbVar5,param_3);
    pbVar5 = pbVar6;
  }
  if ((uVar12 >> 6 & 1) != 0) {
    pbVar6 = (byte *)0x12;
    func_0x000107c303cc(0x12,*(long *)(param_1 + 0xe0),
                        *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x14),pbVar5,param_3);
    pbVar5 = pbVar6;
  }
  if ((uVar12 >> 0x1c & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x160);
    uVar9 = (ulong)(int)uVar4;
    pbVar6 = pbVar5 + 2;
    pbVar5[0] = 0x98;
    pbVar5[1] = 1;
    uVar8 = uVar9;
    pbVar5 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar6;
      } while (uVar10 != 0);
    }
    pbVar5 = pbVar6 + 1;
    *pbVar6 = (byte)uVar9;
  }
  if ((uVar12 >> 0x1d & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x164);
    uVar9 = (ulong)(int)uVar4;
    pbVar6 = pbVar5 + 2;
    pbVar5[0] = 0xa0;
    pbVar5[1] = 1;
    uVar8 = uVar9;
    pbVar5 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar6;
      } while (uVar10 != 0);
    }
    pbVar5 = pbVar6 + 1;
    *pbVar6 = (byte)uVar9;
  }
  if ((uVar12 >> 0x13 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar11 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x13c);
    pbVar5[0] = 0xa8;
    pbVar5[1] = 1;
    pbVar5[2] = bVar3;
    pbVar5 = pbVar5 + 3;
  }
  pbVar6 = pbVar5;
  if ((uVar12 >> 7 & 1) != 0) {
    pbVar6 = (byte *)0x16;
    func_0x000107c303cc(0x16,*(long *)(param_1 + 0xe8),
                        *(undefined4 *)(*(long *)(param_1 + 0xe8) + 0x14),pbVar5,param_3);
  }
  iVar14 = *(int *)(param_1 + 0x68);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar5 = pbVar6;
    do {
      uVar8 = *(ulong *)(param_1 + 0x60);
      puVar1 = (ulong *)(param_1 + 0x60);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar13 * 8 + 7);
      }
      pbVar6 = (byte *)0x17;
      func_0x000107c303cc(0x17,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar5,param_3);
      iVar13 = iVar13 + 1;
      pbVar5 = pbVar6;
    } while (iVar14 != iVar13);
  }
  if ((uVar12 >> 0x14 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x140);
    uVar9 = (ulong)(int)uVar4;
    pbVar11 = pbVar6 + 2;
    pbVar6[0] = 0xc0;
    pbVar6[1] = 1;
    uVar8 = uVar9;
    pbVar5 = pbVar11;
    if (0x7f < uVar4) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar6 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar12 >> 0x15 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x144);
    uVar9 = (ulong)(int)uVar4;
    pbVar11 = pbVar6 + 2;
    pbVar6[0] = 200;
    pbVar6[1] = 1;
    uVar8 = uVar9;
    pbVar5 = pbVar11;
    if (0x7f < uVar4) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar6 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar12 >> 8 & 1) != 0) {
    pbVar5 = (byte *)0x1a;
    func_0x000107c303cc(0x1a,*(long *)(param_1 + 0xf0),
                        *(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 9 & 1) != 0) {
    pbVar5 = (byte *)0x1b;
    func_0x000107c303cc(0x1b,*(long *)(param_1 + 0xf8),
                        *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 10 & 1) != 0) {
    pbVar5 = (byte *)0x1c;
    func_0x000107c303cc(0x1c,*(long *)(param_1 + 0x100),
                        *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0xb & 1) != 0) {
    pbVar5 = (byte *)0x1d;
    func_0x000107c303cc(0x1d,*(long *)(param_1 + 0x108),
                        *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0xc & 1) != 0) {
    pbVar5 = (byte *)0x1e;
    func_0x000107c303cc(0x1e,*(long *)(param_1 + 0x110),
                        *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0xd & 1) != 0) {
    pbVar5 = (byte *)0x1f;
    func_0x000107c303cc(0x1f,*(long *)(param_1 + 0x118),
                        *(undefined4 *)(*(long *)(param_1 + 0x118) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0xe & 1) != 0) {
    pbVar5 = (byte *)0x21;
    func_0x000107c303cc(0x21,*(long *)(param_1 + 0x120),
                        *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x44),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0x1e & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x168);
    uVar9 = (ulong)(int)uVar4;
    pbVar11 = pbVar6 + 2;
    pbVar6[0] = 0x90;
    pbVar6[1] = 2;
    uVar8 = uVar9;
    pbVar5 = pbVar11;
    if (0x7f < uVar4) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar6 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar12 >> 0xf & 1) != 0) {
    pbVar5 = (byte *)0x23;
    func_0x000107c303cc(0x23,*(long *)(param_1 + 0x128),
                        *(undefined4 *)(*(long *)(param_1 + 0x128) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar12 >> 0x16 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    pbVar6[0] = 0xa5;
    pbVar6[1] = 2;
    *(undefined4 *)(pbVar6 + 2) = uVar2;
    pbVar6 = pbVar6 + 6;
  }
  iVar14 = *(int *)(param_1 + 0x80);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar5 = pbVar6;
    do {
      uVar8 = *(ulong *)(param_1 + 0x78);
      puVar1 = (ulong *)(param_1 + 0x78);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar13 * 8 + 7);
      }
      pbVar6 = (byte *)0x25;
      func_0x000107c303cc(0x25,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar5,param_3);
      iVar13 = iVar13 + 1;
      pbVar5 = pbVar6;
    } while (iVar14 != iVar13);
  }
  plVar7 = (long *)(param_1 + 0x90);
  if (*(int *)plVar7 != 0) {
    if ((*(int *)plVar7 == 1) || ((param_3[0x3a] & 1) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x9c);
      plStack_60 = plVar7;
      if (uVar4 != *(uint *)(param_1 + 0x94)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0xa0) + (ulong)uVar4 * 8);
        pbVar5 = pbVar6;
        uStack_58 = uVar4;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          pbVar6 = (byte *)0x26;
          FUN_10930d604(0x26,uStack_68 + 8,uStack_68 + 0x20,pbVar5,param_3);
          func_0x000107c27d54(&uStack_68);
          pbVar5 = pbVar6;
        } while (uStack_68 != 0);
      }
    }
    else {
      FUN_109312d24(&uStack_68);
      if (uStack_68 != 0) {
        lVar15 = uStack_68 << 3;
        pbVar5 = pbVar6;
        plVar7 = plStack_60;
        do {
          pbVar6 = (byte *)0x26;
          FUN_10930d604(0x26,*plVar7,*plVar7 + 0x18,pbVar5,param_3);
          lVar15 = lVar15 + -8;
          pbVar5 = pbVar6;
          plVar7 = plVar7 + 1;
        } while (lVar15 != 0);
      }
      if (plStack_60 != (long *)0x0) {
        __ZdaPv(plStack_60);
      }
    }
  }
  if ((uVar12 >> 0x17 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x14c);
    uVar9 = (ulong)(int)uVar4;
    pbVar11 = pbVar6 + 2;
    pbVar6[0] = 0xb8;
    pbVar6[1] = 2;
    uVar8 = uVar9;
    pbVar5 = pbVar11;
    if (0x7f < uVar4) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar6 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar12 >> 0x18 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar12 = *(uint *)(param_1 + 0x150);
    uVar9 = (ulong)(int)uVar12;
    pbVar11 = pbVar6 + 2;
    pbVar6[0] = 0xc0;
    pbVar6[1] = 2;
    uVar8 = uVar9;
    pbVar5 = pbVar11;
    if (0x7f < uVar12) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar9;
        pbVar5 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar6 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar15 = *(long *)(uVar8 + 8);
      uVar9 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar15 = uVar8 + 8;
    }
    uVar12 = (uint)uVar9;
    if (*(long *)param_3 - (long)pbVar6 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar5;
          _memcpy(pbVar6,lVar15,(long)iVar14);
          uVar12 = (int)uVar9 - iVar14;
          uVar9 = (ulong)uVar12;
          lVar15 = lVar15 + iVar14;
          pbVar5 = *(byte **)param_3;
          pbVar11 = pbVar6 + iVar14;
          do {
            pbVar6 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar6 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar6 = pbVar11;
          } while (pbVar5 <= pbVar11);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar6);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(pbVar6,lVar15,(long)(int)uVar12);
      pbVar6 = pbVar6 + (int)uVar12;
    }
    else {
      _memcpy(pbVar6,lVar15,uVar9 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar12;
    }
  }
  return pbVar6;
}



/* Entry: 10930d604; end: 10930df3f;  */

void FUN_10930d604(uint param_1,long *param_2,long *param_3,byte *param_4,byte *param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar9 = *(byte **)param_5;
  if (pbVar9 <= param_4) {
    do {
      if (param_5[0x38] == 1) {
        param_4 = param_5 + 0x10;
        break;
      }
      pbVar6 = param_5;
      func_0x000107c303dc();
      param_4 = pbVar6 + ((int)param_4 - (int)pbVar9);
      pbVar9 = *(byte **)param_5;
    } while (pbVar9 <= param_4);
  }
  *param_4 = (byte)(param_1 << 3) | 0x82;
  pbVar9 = param_4 + 2;
  param_4[1] = (byte)(param_1 >> 4);
  uVar8 = *(uint *)(param_2 + 1);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar8 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  uVar8 = *(int *)((long)param_3 + 0x14) + uVar8 +
          ((int)LZCOUNT(*(int *)((long)param_3 + 0x14)) * -9 + 0x160U >> 6) +
          ((int)LZCOUNT(uVar8) * -9 + 0x160U >> 6) + 2;
  pbVar6 = pbVar9;
  uVar7 = uVar8;
  if (0x7f < uVar8) {
    do {
      pbVar9 = pbVar6 + 1;
      *pbVar6 = (byte)uVar7 | 0x80;
      uVar8 = uVar7 >> 7;
      uVar2 = uVar7 >> 0xe;
      pbVar6 = pbVar9;
      uVar7 = uVar8;
    } while (uVar2 != 0);
  }
  pbVar6 = pbVar9 + 1;
  *pbVar9 = (byte)uVar8;
  pbVar9 = *(byte **)param_5;
  if (pbVar9 <= pbVar6) {
    do {
      if (param_5[0x38] == 1) {
        pbVar6 = param_5 + 0x10;
        break;
      }
      pbVar4 = param_5;
      func_0x000107c303dc();
      pbVar6 = pbVar4 + ((int)pbVar6 - (int)pbVar9);
      pbVar9 = *(byte **)param_5;
    } while (pbVar9 <= pbVar6);
  }
  lVar10 = (long)*(char *)((long)param_2 + 0x17);
  if (((lVar10 < 0) && (lVar10 = param_2[1], 0x7f < lVar10)) ||
     ((long)(pbVar9 + (0xe - (long)pbVar6)) < lVar10)) {
    pbVar9 = param_5;
    func_0x00010b4d5120(param_5,1,param_2);
  }
  else {
    *pbVar6 = 10;
    pbVar6[1] = (byte)lVar10;
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    _memcpy(pbVar6 + 2,plVar1,lVar10);
    pbVar9 = pbVar6 + 2 + lVar10;
  }
  pbVar6 = *(byte **)param_5;
  if (pbVar6 <= pbVar9) {
    do {
      if (param_5[0x38] == 1) {
        pbVar9 = param_5 + 0x10;
        break;
      }
      pbVar4 = param_5;
      func_0x000107c303dc();
      pbVar9 = pbVar4 + ((int)pbVar9 - (int)pbVar6);
      pbVar6 = *(byte **)param_5;
    } while (pbVar6 <= pbVar9);
  }
  uVar5 = (ulong)*(uint *)((long)param_3 + 0x14);
  pbVar6 = param_5;
  func_0x0001001a597c(param_5,pbVar9);
  uVar3 = 0x12;
  func_0x0001001a59d0(0x12,pbVar6);
  func_0x0001001a59d0(uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,uVar5,param_5);
  return;
}



/* Entry: 10930df40; end: 10930dfb3;  */

long FUN_10930df40(uint param_1,byte param_2,long param_3)

{
  long lVar1;
  
  if (-1 < (char)param_2) {
    param_1 = (uint)param_2;
  }
  FUN_10930b384(param_3);
  lVar1 = param_3 + (int)(param_1 + ((int)LZCOUNT(param_1) * -9 + 0x160U >> 6) + 2) +
          (ulong)((int)LZCOUNT((int)param_3) * -9 + 0x160U >> 6);
  return lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
}



/* Entry: 10930dfb4; end: 10930dfb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930dfb4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0x78,param_2 + 0x78);
  }
  FUN_109312e24(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xb0,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar4;
        FUN_109312770(uVar4,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_1093097dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar4;
        func_0x000109312848(uVar4,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_10933aa98();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar4;
        FUN_1093128d0(uVar4,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        FUN_109309e1c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        uVar2 = uVar4;
        FUN_1093129a8(uVar4,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar2;
      }
      else {
        FUN_10933f360();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x100) == 0) {
        uVar2 = uVar4;
        FUN_1093129ec(uVar4,*(undefined8 *)(param_2 + 0x100));
        *(ulong *)(param_1 + 0x100) = uVar2;
      }
      else {
        FUN_10930a4f4();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0x108));
        *(ulong *)(param_1 + 0x108) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar2 = uVar4;
        FUN_109312ae4(uVar4,*(undefined8 *)(param_2 + 0x118));
        *(ulong *)(param_1 + 0x118) = uVar2;
      }
      else {
        FUN_10930c09c();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) {
        uVar2 = uVar4;
        FUN_109312bf0(uVar4,*(undefined8 *)(param_2 + 0x120));
        *(ulong *)(param_1 + 0x120) = uVar2;
      }
      else {
        FUN_10930ae8c();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x128) == 0) {
        FUN_109312ce0(uVar4,*(undefined8 *)(param_2 + 0x128));
        *(ulong *)(param_1 + 0x128) = uVar4;
      }
      else {
        FUN_109336d7c();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10930dfb8; end: 10930e47b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930dfb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0x78,param_2 + 0x78);
  }
  FUN_109312e24(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xb0,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar4;
        FUN_109312770(uVar4,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_1093097dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar4;
        func_0x000109312848(uVar4,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_10933aa98();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar4;
        FUN_1093128d0(uVar4,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        FUN_109309e1c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        uVar2 = uVar4;
        FUN_1093129a8(uVar4,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar2;
      }
      else {
        FUN_10933f360();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x100) == 0) {
        uVar2 = uVar4;
        FUN_1093129ec(uVar4,*(undefined8 *)(param_2 + 0x100));
        *(ulong *)(param_1 + 0x100) = uVar2;
      }
      else {
        FUN_10930a4f4();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0x108));
        *(ulong *)(param_1 + 0x108) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar2 = uVar4;
        FUN_109312ae4(uVar4,*(undefined8 *)(param_2 + 0x118));
        *(ulong *)(param_1 + 0x118) = uVar2;
      }
      else {
        FUN_10930c09c();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) {
        uVar2 = uVar4;
        FUN_109312bf0(uVar4,*(undefined8 *)(param_2 + 0x120));
        *(ulong *)(param_1 + 0x120) = uVar2;
      }
      else {
        FUN_10930ae8c();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x128) == 0) {
        FUN_109312ce0(uVar4,*(undefined8 *)(param_2 + 0x128));
        *(ulong *)(param_1 + 0x128) = uVar4;
      }
      else {
        FUN_109336d7c();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10930e47c; end: 10930e4f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930e47c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10930c794();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0x78,param_2 + 0x78);
  }
  FUN_109312e24(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xb0,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0xc0));
        *(ulong *)(param_1 + 0xc0) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
        uVar2 = uVar4;
        FUN_109312770(uVar4,*(undefined8 *)(param_2 + 200));
        *(ulong *)(param_1 + 200) = uVar2;
      }
      else {
        FUN_1093097dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar2 = uVar4;
        func_0x000109312848(uVar4,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar2;
      }
      else {
        FUN_10933aa98();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0xd8));
        *(ulong *)(param_1 + 0xd8) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) {
        uVar2 = uVar4;
        FUN_10931267c(uVar4,*(undefined8 *)(param_2 + 0xe8));
        *(ulong *)(param_1 + 0xe8) = uVar2;
      }
      else {
        func_0x000109340c8c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        uVar2 = uVar4;
        FUN_1093128d0(uVar4,*(undefined8 *)(param_2 + 0xf0));
        *(ulong *)(param_1 + 0xf0) = uVar2;
      }
      else {
        FUN_109309e1c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        uVar2 = uVar4;
        FUN_1093129a8(uVar4,*(undefined8 *)(param_2 + 0xf8));
        *(ulong *)(param_1 + 0xf8) = uVar2;
      }
      else {
        FUN_10933f360();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x100) == 0) {
        uVar2 = uVar4;
        FUN_1093129ec(uVar4,*(undefined8 *)(param_2 + 0x100));
        *(ulong *)(param_1 + 0x100) = uVar2;
      }
      else {
        FUN_10930a4f4();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        uVar2 = uVar4;
        FUN_1093126c0(uVar4,*(undefined8 *)(param_2 + 0x108));
        *(ulong *)(param_1 + 0x108) = uVar2;
      }
      else {
        FUN_1093086e0();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar2 = uVar4;
        func_0x00010931288c(uVar4,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar2;
      }
      else {
        FUN_109308c48();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar2 = uVar4;
        FUN_109312ae4(uVar4,*(undefined8 *)(param_2 + 0x118));
        *(ulong *)(param_1 + 0x118) = uVar2;
      }
      else {
        FUN_10930c09c();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) {
        uVar2 = uVar4;
        FUN_109312bf0(uVar4,*(undefined8 *)(param_2 + 0x120));
        *(ulong *)(param_1 + 0x120) = uVar2;
      }
      else {
        FUN_10930ae8c();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x128) == 0) {
        FUN_109312ce0(uVar4,*(undefined8 *)(param_2 + 0x128));
        *(ulong *)(param_1 + 0x128) = uVar4;
      }
      else {
        FUN_109336d7c();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10930e4f8; end: 10930e4fb;  */

long FUN_10930e4f8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  FUN_109311e0c(param_1 + 0x30);
  FUN_109311e0c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10930e4fc; end: 10930e50f;  */

void FUN_10930e4fc(void)

{
  func_0x00010930e4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930e510; end: 10930e51b;  */

undefined ** FUN_10930e510(void)

{
  return &PTR_DAT_110aebb80;
}



/* Entry: 10930e51c; end: 10930e5c7;  */

void FUN_10930e51c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((uVar1 & 0xfe) != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar3 = 0;
  puVar3[1] = 0;
  return;
}



/* Entry: 10930e5c8; end: 10930ea77;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10930e5c8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 >> 1 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 *)param_2 = 9;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 2 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined1 *)param_2 = 0x11;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    *(undefined1 *)param_2 = 0x19;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined1 *)param_2 = 0x21;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    *(undefined1 *)param_2 = 0x29;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 6 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined1 *)param_2 = 0x31;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((uVar8 >> 7 & 1) != 0) {
    plVar2 = (long *)*param_3;
    if (plVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar2));
        plVar2 = (long *)*param_3;
      } while (plVar2 <= param_2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined1 *)param_2 = 0x39;
    *(undefined8 *)((long)param_2 + 1) = uVar5;
    param_2 = (long *)((long)param_2 + 9);
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar2 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar10 * 8 + 7);
      }
      param_2 = (long *)0x8;
      func_0x000107c303cc(8,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar2,param_3);
      iVar10 = iVar10 + 1;
      plVar2 = param_2;
    } while (iVar11 != iVar10);
  }
  plVar2 = param_2;
  if ((uVar8 & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,9,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,param_2);
  }
  iVar11 = *(int *)(param_1 + 0x38);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar4 = plVar2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar10 * 8 + 7);
      }
      plVar2 = (long *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar4,param_3);
      iVar10 = iVar10 + 1;
      plVar4 = plVar2;
    } while (iVar11 != iVar10);
  }
  if ((uVar8 >> 8 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar6 + (long)((int)plVar2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined1 *)plVar2 = 0x59;
    *(undefined8 *)((long)plVar2 + 1) = uVar5;
    plVar2 = (long *)((long)plVar2 + 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar3 + 8);
      uVar9 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar7 = uVar3 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar2,lVar7,(long)iVar11);
          uVar8 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar11;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)plVar2 + (long)iVar11);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar2 = plVar4;
          } while (plVar6 <= plVar4);
          puVar12 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar2));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar2,lVar7,(long)(int)uVar8);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar2,lVar7,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
  }
  return plVar2;
}



/* Entry: 10930ea78; end: 10930ec17;  */

void FUN_10930ea78(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  lVar7 = (long)*(int *)(param_1 + 0x20);
  puVar8 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(uVar6 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      uVar6 = *puVar8;
      FUN_10930ea78();
      lVar7 = uVar6 + lVar7 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar7 = lVar7 + iVar4;
  iVar5 = (int)lVar7;
  puVar8 = (ulong *)(param_1 + 0x30);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(uVar6 + 7);
  }
  if (iVar4 != 0) {
    lVar9 = (long)iVar4 << 3;
    do {
      uVar6 = *puVar8;
      FUN_10930ea78();
      lVar7 = uVar6 + lVar7 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      iVar5 = (int)lVar7;
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar3 = *(byte *)(uVar6 + 0x17);
      uVar1 = (uint)*(undefined8 *)(uVar6 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (uint)bVar3;
      }
      iVar5 = iVar5 + uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 & 2) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 4) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 8) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 0x10) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 0x20) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 0x40) != 0) {
      iVar5 = iVar5 + 9;
    }
    if ((uVar2 & 0x80) != 0) {
      iVar5 = iVar5 + 9;
    }
  }
  if ((uVar2 & 0x100) != 0) {
    iVar5 = iVar5 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar6 + 0x10);
    }
    iVar5 = (int)lVar7 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return;
}



/* Entry: 10930ec18; end: 10930ec1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930ec18(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x48,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
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



/* Entry: 10930ec1c; end: 10930ed5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930ec1c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x48,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
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



/* Entry: 10930ed5c; end: 10930ef1b;  */

undefined8 * FUN_10930ed5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb838;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  FUN_109311d08(param_1 + 9,param_2,param_3 + 0x48);
  puVar4 = (ulong *)(param_3 + 0x68);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[0xd] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_109312fd4(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001093130e4(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093125d4(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000109313128(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1093125d4(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010931316c(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = param_2;
  uVar5 = *(undefined8 *)(param_3 + 0xa8);
  uVar3 = *(undefined8 *)(param_3 + 0xa0);
  param_1[0x16] = *(undefined8 *)(param_3 + 0xb0);
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar3;
  return param_1;
}



/* Entry: 10930ef1c; end: 10930ef53;  */

long FUN_10930ef1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10930ef54(param_1);
  return param_1;
}



/* Entry: 10930ef54; end: 10930efeb;  */

long * FUN_10930ef54(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010930e4b4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10930c5bc();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x000109307fbc();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10933df00();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x000109307fbc();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10933e438();
    __ZdlPv();
  }
  FUN_109311d5c(param_1 + 0x48);
  FUN_109311e40(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10930efec; end: 10930efef;  */

long FUN_10930efec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10930ef54(param_1);
  return param_1;
}



/* Entry: 10930eff0; end: 10930f003;  */

void FUN_10930eff0(void)

{
  FUN_10930ef1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930f004; end: 10930f00f;  */

undefined ** FUN_10930f004(void)

{
  return &PTR_DAT_110aebbb8;
}



/* Entry: 10930f010; end: 10930f14b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930f010(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x4c) != 1) {
    func_0x000107c30320(param_1 + 0x48,0x10500580020,0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10930e51c(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10930c794(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109308014(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10933df90(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000109308014(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_10933e4c8(*(undefined8 *)(param_1 + 0x98));
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((uVar1 & 0x1f00) != 0) {
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar3 = 0;
  puVar3[1] = 0;
  return;
}



/* Entry: 10930f14c; end: 10930f627;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10930f14c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uStack_68;
  long *plStack_60;
  uint uStack_58;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  pbVar5 = param_2;
  if ((uVar10 >> 7 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0xa0),param_2);
  }
  pbVar4 = pbVar5;
  if ((uVar10 >> 8 & 1) != 0) {
    pbVar4 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0xa4),pbVar5);
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar5 = pbVar4;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      pbVar4 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar5,param_3);
      iVar13 = iVar13 + 1;
      pbVar5 = pbVar4;
    } while (iVar14 != iVar13);
  }
  if ((uVar10 >> 1 & 1) != 0) {
    pbVar5 = (byte *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x14),pbVar4,param_3);
    pbVar4 = pbVar5;
  }
  if ((uVar10 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c280a0(param_3,6,*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc,pbVar4);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 9 & 1) != 0) {
    pbVar5 = param_3;
    func_0x00010598f468(param_3,*(undefined4 *)(param_1 + 0xa8),pbVar4);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 10 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000108b32050(param_3,*(undefined4 *)(param_1 + 0xac),pbVar4);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 2 & 1) != 0) {
    pbVar5 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14),pbVar4,param_3);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 3 & 1) != 0) {
    pbVar5 = (byte *)0xb;
    func_0x000107c303cc(0xb,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14),pbVar4,param_3);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 4 & 1) != 0) {
    pbVar5 = (byte *)0xc;
    func_0x000107c303cc(0xc,*(long *)(param_1 + 0x88),
                        *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x14),pbVar4,param_3);
    pbVar4 = pbVar5;
  }
  if ((uVar10 >> 0xb & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar9 + ((int)pbVar4 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar4);
    }
    uVar3 = *(uint *)(param_1 + 0xb0);
    uVar11 = (ulong)(int)uVar3;
    pbVar9 = pbVar4 + 1;
    *pbVar4 = 0x68;
    uVar7 = uVar11;
    pbVar5 = pbVar9;
    if (0x7f < uVar3) {
      do {
        pbVar9 = pbVar5 + 1;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar11 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar11;
        pbVar5 = pbVar9;
      } while (uVar8 != 0);
    }
    pbVar4 = pbVar9 + 1;
    *pbVar9 = (byte)uVar11;
  }
  if ((uVar10 >> 0xc & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar9 + ((int)pbVar4 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar4);
    }
    uVar2 = *(undefined4 *)(param_1 + 0xb4);
    *pbVar4 = 0x7d;
    *(undefined4 *)(pbVar4 + 1) = uVar2;
    pbVar4 = pbVar4 + 5;
  }
  pbVar5 = pbVar4;
  if ((uVar10 >> 5 & 1) != 0) {
    pbVar5 = (byte *)0x10;
    func_0x000107c303cc(0x10,*(long *)(param_1 + 0x90),
                        *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x14),pbVar4,param_3);
  }
  iVar14 = *(int *)(param_1 + 0x38);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar4 = pbVar5;
    do {
      uVar7 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x12;
      func_0x000107c303cc(0x12,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar13 = iVar13 + 1;
      pbVar4 = pbVar5;
    } while (iVar14 != iVar13);
  }
  pbVar4 = pbVar5;
  if ((uVar10 >> 6 & 1) != 0) {
    pbVar4 = (byte *)0x13;
    func_0x000107c303cc(0x13,*(long *)(param_1 + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14),pbVar5,param_3);
  }
  plVar6 = (long *)(param_1 + 0x48);
  if (*(int *)plVar6 != 0) {
    if ((*(int *)plVar6 == 1) || ((param_3[0x3a] & 1) == 0)) {
      uVar10 = *(uint *)(param_1 + 0x54);
      plStack_60 = plVar6;
      if (uVar10 != *(uint *)(param_1 + 0x4c)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x58) + (ulong)uVar10 * 8);
        pbVar5 = pbVar4;
        uStack_58 = uVar10;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          pbVar4 = (byte *)0x14;
          FUN_10930d604(0x14,uStack_68 + 8,uStack_68 + 0x20,pbVar5,param_3);
          func_0x000107c27d54(&uStack_68);
          pbVar5 = pbVar4;
        } while (uStack_68 != 0);
      }
    }
    else {
      FUN_109312d24(&uStack_68);
      if (uStack_68 != 0) {
        lVar12 = uStack_68 << 3;
        pbVar5 = pbVar4;
        plVar6 = plStack_60;
        do {
          pbVar4 = (byte *)0x14;
          FUN_10930d604(0x14,*plVar6,*plVar6 + 0x18,pbVar5,param_3);
          lVar12 = lVar12 + -8;
          pbVar5 = pbVar4;
          plVar6 = plVar6 + 1;
        } while (lVar12 != 0);
      }
      if (plStack_60 != (long *)0x0) {
        __ZdaPv(plStack_60);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar12 = *(long *)(uVar7 + 8);
      uVar11 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar12 = uVar7 + 8;
    }
    uVar10 = (uint)uVar11;
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar10) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar5 < (int)uVar10) {
        do {
          iVar14 = (int)pbVar5;
          _memcpy(pbVar4,lVar12,(long)iVar14);
          uVar10 = (int)uVar11 - iVar14;
          uVar11 = (ulong)uVar10;
          lVar12 = lVar12 + iVar14;
          pbVar5 = *(byte **)param_3;
          pbVar9 = pbVar4 + iVar14;
          do {
            pbVar4 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar4 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar4 + ((int)pbVar9 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar4 = pbVar9;
          } while (pbVar5 <= pbVar9);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar4);
        } while ((int)pbVar5 < (int)uVar10);
      }
      _memcpy(pbVar4,lVar12,(long)(int)uVar10);
      pbVar4 = pbVar4 + (int)uVar10;
    }
    else {
      _memcpy(pbVar4,lVar12,uVar11 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar10;
    }
  }
  return pbVar4;
}



/* Entry: 10930f628; end: 10930f9bf;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10930f628(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uStack_58;
  uint *puStack_50;
  uint uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar5 = (long)*(int *)(param_1 + 0x20);
  puVar6 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar6 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar5 = 0;
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      uVar4 = *puVar6;
      func_0x00010930d804();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar5 = lVar5 + (long)iVar3 * 2;
  puVar6 = (ulong *)(param_1 + 0x30);
  if ((uVar4 & 1) != 0) {
    puVar6 = (ulong *)(uVar4 + 7);
  }
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    do {
      uVar4 = *puVar6;
      FUN_10930820c();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  puStack_50 = (uint *)(param_1 + 0x48);
  lVar5 = lVar5 + (ulong)*puStack_50 * 2;
  uVar1 = *(uint *)(param_1 + 0x54);
  if (uVar1 != *(uint *)(param_1 + 0x4c)) {
    uStack_58 = *(ulong *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 8);
    uStack_48 = uVar1;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      lVar7 = *(long *)(uStack_58 + 0x10);
      FUN_10930df40(lVar7,*(undefined1 *)(uStack_58 + 0x1f),uStack_58 + 0x20);
      lVar5 = lVar7 + lVar5;
      func_0x000107c27d54(&uStack_58);
    } while (uStack_58 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)bVar2) {
        uVar4 = (ulong)bVar2;
      }
      lVar5 = lVar5 + uVar4 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x70);
      FUN_10930ea78();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x78);
      func_0x00010930d804();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x80);
      FUN_10930820c();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x88);
      FUN_10933e1a4();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x90);
      FUN_10930820c();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x98);
      FUN_10933e690();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xa0)) * -9 + 0x2c0U >> 6) + lVar5;
    }
  }
  if ((uVar1 & 0x1f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xa4)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xa8)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xac)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xb0)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 & 0x1000) != 0) {
      lVar5 = lVar5 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar7 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10930f9c0; end: 10930f9c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930f9c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  FUN_109312e24(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x68,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar4;
        FUN_109312fd4(uVar4,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10930ec1c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar4;
        func_0x0001093130e4(uVar4,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_10930dfb8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar4;
        func_0x000109313128(uVar4,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10933e2a4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        func_0x00010931316c(uVar4,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar4;
      }
      else {
        FUN_10933e754();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
  }
  if ((uVar1 & 0x1f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
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



/* Entry: 10930f9c4; end: 10930fc27;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930f9c4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  FUN_109312e24(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x68,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar4;
        FUN_109312fd4(uVar4,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10930ec1c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar4;
        func_0x0001093130e4(uVar4,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_10930dfb8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar4;
        func_0x000109313128(uVar4,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10933e2a4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar4;
        FUN_1093125d4(uVar4,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_1093082f8();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        func_0x00010931316c(uVar4,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar4;
      }
      else {
        FUN_10933e754();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
  }
  if ((uVar1 & 0x1f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
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



/* Entry: 10930fc28; end: 10930fd8f;  */

void FUN_10930fc28(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x18 + lVar3);
    *(undefined1 *)(param_1 + 0x18 + lVar3) = *(undefined1 *)(param_2 + 0x18 + lVar3);
    *(undefined1 *)(param_2 + 0x18 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x30 + lVar3);
    *(undefined1 *)(param_1 + 0x30 + lVar3) = *(undefined1 *)(param_2 + 0x30 + lVar3);
    *(undefined1 *)(param_2 + 0x30 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  func_0x000107c282e0(param_1 + 0x48,param_2 + 0x48);
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x70 + lVar3);
    *(undefined1 *)(param_1 + 0x70 + lVar3) = *(undefined1 *)(param_2 + 0x70 + lVar3);
    *(undefined1 *)(param_2 + 0x70 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x48);
  return;
}



/* Entry: 10930fd90; end: 10930fd93;  */

long FUN_10930fd90(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10930fd94; end: 10930fda7;  */

void FUN_10930fd94(void)

{
  func_0x00010930fcfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930fda8; end: 10930fdb3;  */

undefined ** FUN_10930fda8(void)

{
  return &PTR_DAT_110aebbf0;
}



/* Entry: 10930fdb4; end: 10930fe5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10930fdb4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010933ba34(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010933ba34(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010933ba34(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      *(byte *)puVar3 = 0;
      *(byte *)((long)puVar3 + 0x17) = 0;
      return;
    }
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  return;
}



/* Entry: 10930fe5c; end: 109310017;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10930fe5c(long param_1,long *param_2,long *param_3)

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
    plVar1 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
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



/* Entry: 109310018; end: 10931014b;  */

long FUN_109310018(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)bVar2) {
        uVar4 = (ulong)bVar2;
      }
      lVar5 = uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      FUN_10933bbb4();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      FUN_10933bbb4();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      FUN_10933bbb4();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10931014c; end: 10931028b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931014c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar4 & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar2;
        func_0x0001093131b0(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10933b928();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar2;
        func_0x0001093131b0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10933b928();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x0001093131b0(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10933b928();
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



/* Entry: 10931028c; end: 1093102d3;  */

long FUN_10931028c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1093102d4; end: 1093102d7;  */

long FUN_1093102d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1093102d8; end: 1093102eb;  */

void FUN_1093102d8(void)

{
  FUN_10931028c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093102ec; end: 1093102f7;  */

undefined ** FUN_1093102ec(void)

{
  return &PTR_DAT_110aebc28;
}



/* Entry: 1093102f8; end: 109310373;  */

void FUN_1093102f8(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109310374; end: 1093105f7;  */

long * FUN_109310374(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
  }
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      plVar2 = (long *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = plVar2;
    } while (iVar8 != iVar7);
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
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(plVar2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar8);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 1093105f8; end: 10931069b;  */

void FUN_1093105f8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x30);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10931069c; end: 1093108df;  */

undefined8 * FUN_10931069c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb7e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 3,param_3 + 0x18);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  if (*(int *)(param_3 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 9,param_3 + 0x48);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  if (*(int *)(param_3 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0xc,param_3 + 0x60);
  }
  FUN_1093118fc(param_1 + 0xf,param_2,param_3 + 0x78);
  FUN_1093118fc(param_1 + 0x11,param_2,param_3 + 0x88);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  if (*(int *)(param_3 + 0xa0) != 0) {
    func_0x000107c303c4(param_1 + 0x13,param_3 + 0x98);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  if (*(int *)(param_3 + 0xb8) != 0) {
    func_0x000107c303c4(param_1 + 0x16,param_3 + 0xb0);
  }
  puVar2 = (ulong *)(param_3 + 200);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0x19] = puVar1;
  if ((*(byte *)(param_1 + 2) >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109312ce0(param_2,*(undefined8 *)(param_3 + 0xd0));
  }
  param_1[0x1a] = param_2;
  param_1[0x1b] = *(undefined8 *)(param_3 + 0xd8);
  return param_1;
}



/* Entry: 1093108e0; end: 109310917;  */

long FUN_1093108e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109310918(param_1);
  return param_1;
}



/* Entry: 109310918; end: 1093109af;  */

long * FUN_109310918(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 200);
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  FUN_109311e74(param_1 + 0xb0);
  FUN_109311ea8(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(long *)(*(long *)(param_1 + 0x90) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x7c)) {
    if (*(long *)(*(long *)(param_1 + 0x80) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109311edc(param_1 + 0x60);
  FUN_109311f10(param_1 + 0x48);
  FUN_109311f44(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 1093109b0; end: 1093109b3;  */

long FUN_1093109b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109310918(param_1);
  return param_1;
}



/* Entry: 1093109b4; end: 1093109c7;  */

void FUN_1093109b4(void)

{
  FUN_1093108e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093109c8; end: 1093109d3;  */

undefined ** FUN_1093109c8(void)

{
  return &PTR_DAT_110aebc60;
}



/* Entry: 1093109d4; end: 109310adf;  */

void FUN_1093109d4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    func_0x0001053936e4(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    func_0x0001053936e4(param_1 + 0x98);
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    func_0x0001053936e4(param_1 + 0xb0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109335ed0(*(undefined8 *)(param_1 + 0xd0));
    }
  }
  if ((uVar1 & 0xc) != 0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  *(byte *)puVar3 = 0;
  *(byte *)((long)puVar3 + 0x17) = 0;
  return;
}



/* Entry: 109310ae0; end: 1093112cf;  */

byte * FUN_109310ae0(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar16 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar19 = 8;
    pbVar3 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar19 + -1);
      }
      plVar5 = (long *)*puVar1;
      lVar14 = (long)*(char *)((long)plVar5 + 0x17);
      if (((lVar14 < 0) && (lVar14 = plVar5[1], 0x7f < lVar14)) ||
         ((*(long *)param_3 - (long)pbVar3) + 0xe < lVar14)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,plVar5,pbVar3);
      }
      else {
        *pbVar3 = 10;
        pbVar3[1] = (byte)lVar14;
        if (*(char *)((long)plVar5 + 0x17) < '\0') {
          plVar5 = (long *)*plVar5;
        }
        _memcpy(pbVar3 + 2,plVar5,lVar14);
        param_2 = pbVar3 + 2 + lVar14;
      }
      lVar19 = lVar19 + 8;
      uVar16 = uVar16 - 1;
      pbVar3 = param_2;
    } while (uVar16 != 0);
  }
  iVar17 = *(int *)(param_1 + 0x38);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar3 = param_2;
    do {
      uVar16 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar3,param_3);
      iVar15 = iVar15 + 1;
      pbVar3 = param_2;
    } while (iVar17 != iVar15);
  }
  iVar17 = *(int *)(param_1 + 0x50);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar3 = param_2;
    do {
      uVar16 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar3,param_3);
      iVar15 = iVar15 + 1;
      pbVar3 = param_2;
    } while (iVar17 != iVar15);
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar3 = param_2;
  if ((uVar13 & 1) != 0) {
    pbVar3 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 200) & 0xfffffffffffffffc,param_2);
  }
  iVar17 = *(int *)(param_1 + 0x68);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar7 = pbVar3;
    do {
      uVar16 = *(ulong *)(param_1 + 0x60);
      puVar1 = (ulong *)(param_1 + 0x60);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      pbVar3 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar15 = iVar15 + 1;
      pbVar7 = pbVar3;
    } while (iVar17 != iVar15);
  }
  pbVar7 = pbVar3;
  if ((uVar13 >> 2 & 1) != 0) {
    pbVar7 = param_3;
    func_0x0001089f53c8(param_3,*(undefined4 *)(param_1 + 0xd8),pbVar3);
  }
  iVar17 = *(int *)(param_1 + 0x78);
  if (0 < iVar17) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar4 + ((int)pbVar7 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar7);
      iVar17 = *(int *)(param_1 + 0x78);
    }
    uVar2 = iVar17 * 4;
    uVar6 = (ulong)uVar2;
    pbVar3 = pbVar7 + 1;
    *pbVar7 = 0x3a;
    uVar16 = uVar6;
    uVar9 = uVar2;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3;
        uVar10 = (uint)uVar16;
        pbVar3 = pbVar7 + 1;
        *pbVar7 = (byte)uVar16 | 0x80;
        uVar16 = uVar16 >> 7;
        uVar9 = (uint)uVar16;
      } while (uVar10 >> 0xe != 0);
    }
    pbVar7 = pbVar7 + 2;
    *pbVar3 = (byte)uVar9;
    lVar19 = *(long *)(param_1 + 0x80);
    uVar18 = (ulong)(int)uVar2;
    uVar16 = uVar6;
    if ((*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) &&
       (pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10), uVar16 = uVar18,
       (int)pbVar3 < (int)uVar2)) {
      pbVar4 = param_3 + 0x10;
      do {
        iVar17 = (int)pbVar3;
        _memcpy(pbVar7,lVar19,(long)iVar17);
        uVar2 = (int)uVar6 - iVar17;
        uVar6 = (ulong)uVar2;
        lVar19 = lVar19 + iVar17;
        pbVar12 = pbVar7 + iVar17;
        pbVar8 = *(byte **)param_3;
        do {
          pbVar7 = pbVar4;
          pbVar3 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109311068:
            param_3[0x38] = 1;
LAB_109311048:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar3 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar8;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar8 + 8);
              *(undefined8 *)pbVar4 = uVar20;
              *(byte **)(param_3 + 8) = pbVar8;
              goto LAB_109311048;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar4,(long)pbVar8 - (long)pbVar4);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109311068;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar4 = uVar20;
              *(byte **)param_3 = pbVar4 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar3 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar20 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar20;
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
              pbVar7 = pbStack_70;
            }
          }
          pbVar12 = pbVar7 + ((int)pbVar12 - (int)pbVar8);
          pbVar8 = pbVar3;
          pbVar7 = pbVar12;
        } while (pbVar3 <= pbVar12);
        pbVar3 = pbVar3 + (0x10 - (long)pbVar7);
      } while ((int)pbVar3 < (int)uVar2);
      uVar18 = (ulong)(int)uVar2;
      uVar16 = uVar18;
    }
    _memcpy(pbVar7,lVar19,uVar16);
    pbVar7 = pbVar7 + uVar18;
  }
  iVar17 = *(int *)(param_1 + 0x88);
  if (0 < iVar17) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar4 + ((int)pbVar7 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar7);
      iVar17 = *(int *)(param_1 + 0x88);
    }
    uVar2 = iVar17 * 4;
    uVar6 = (ulong)uVar2;
    pbVar3 = pbVar7 + 1;
    *pbVar7 = 0x42;
    uVar16 = uVar6;
    uVar9 = uVar2;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3;
        uVar10 = (uint)uVar16;
        pbVar3 = pbVar7 + 1;
        *pbVar7 = (byte)uVar16 | 0x80;
        uVar16 = uVar16 >> 7;
        uVar9 = (uint)uVar16;
      } while (uVar10 >> 0xe != 0);
    }
    pbVar7 = pbVar7 + 2;
    *pbVar3 = (byte)uVar9;
    lVar19 = *(long *)(param_1 + 0x90);
    uVar18 = (ulong)(int)uVar2;
    uVar16 = uVar6;
    if ((*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) &&
       (pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10), uVar16 = uVar18,
       (int)pbVar3 < (int)uVar2)) {
      pbVar4 = param_3 + 0x10;
      do {
        iVar17 = (int)pbVar3;
        _memcpy(pbVar7,lVar19,(long)iVar17);
        uVar2 = (int)uVar6 - iVar17;
        uVar6 = (ulong)uVar2;
        lVar19 = lVar19 + iVar17;
        pbVar12 = pbVar7 + iVar17;
        pbVar8 = *(byte **)param_3;
        do {
          pbVar7 = pbVar4;
          pbVar3 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10931117c:
            param_3[0x38] = 1;
LAB_10931115c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar3 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar8;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar8 + 8);
              *(undefined8 *)pbVar4 = uVar20;
              *(byte **)(param_3 + 8) = pbVar8;
              goto LAB_10931115c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar4,(long)pbVar8 - (long)pbVar4);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_10931117c;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar4 = uVar20;
              *(byte **)param_3 = pbVar4 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar3 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar20 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar20;
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
              pbVar7 = pbStack_70;
            }
          }
          pbVar12 = pbVar7 + ((int)pbVar12 - (int)pbVar8);
          pbVar8 = pbVar3;
          pbVar7 = pbVar12;
        } while (pbVar3 <= pbVar12);
        pbVar3 = pbVar3 + (0x10 - (long)pbVar7);
      } while ((int)pbVar3 < (int)uVar2);
      uVar18 = (ulong)(int)uVar2;
      uVar16 = uVar18;
    }
    _memcpy(pbVar7,lVar19,uVar16);
    pbVar7 = pbVar7 + uVar18;
  }
  pbVar3 = pbVar7;
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar3 = (byte *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0xd0),
                        *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),pbVar7,param_3);
  }
  iVar17 = *(int *)(param_1 + 0xa0);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar7 = pbVar3;
    do {
      uVar16 = *(ulong *)(param_1 + 0x98);
      puVar1 = (ulong *)(param_1 + 0x98);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      pbVar3 = (byte *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar15 = iVar15 + 1;
      pbVar7 = pbVar3;
    } while (iVar17 != iVar15);
  }
  iVar17 = *(int *)(param_1 + 0xb8);
  if (iVar17 != 0) {
    iVar15 = 0;
    pbVar7 = pbVar3;
    do {
      uVar16 = *(ulong *)(param_1 + 0xb0);
      puVar1 = (ulong *)(param_1 + 0xb0);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar15 * 8 + 7);
      }
      pbVar3 = (byte *)0xb;
      func_0x000107c303cc(0xb,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar15 = iVar15 + 1;
      pbVar7 = pbVar3;
    } while (iVar17 != iVar15);
  }
  if ((uVar13 >> 3 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar4 + ((int)pbVar3 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar3);
    }
    uVar13 = *(uint *)(param_1 + 0xdc);
    uVar6 = (ulong)(int)uVar13;
    pbVar7 = pbVar3 + 1;
    *pbVar3 = 0x60;
    uVar16 = uVar6;
    pbVar3 = pbVar7;
    if (0x7f < uVar13) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar16 | 0x80;
        uVar6 = uVar16 >> 7;
        uVar18 = uVar16 >> 0xe;
        uVar16 = uVar6;
        pbVar3 = pbVar7;
      } while (uVar18 != 0);
    }
    pbVar3 = pbVar7 + 1;
    *pbVar7 = (byte)uVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar19 = *(long *)(uVar16 + 8);
      uVar6 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar19 = uVar16 + 8;
    }
    uVar13 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar13) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar7 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar7;
          _memcpy(pbVar3,lVar19,(long)iVar17);
          uVar13 = (int)uVar6 - iVar17;
          uVar6 = (ulong)uVar13;
          lVar19 = lVar19 + iVar17;
          pbVar7 = *(byte **)param_3;
          pbVar4 = pbVar3 + iVar17;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar4 = pbVar3 + ((int)pbVar4 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar3 = pbVar4;
          } while (pbVar7 <= pbVar4);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar3);
        } while ((int)pbVar7 < (int)uVar13);
      }
      _memcpy(pbVar3,lVar19,(long)(int)uVar13);
      pbVar3 = pbVar3 + (int)uVar13;
    }
    else {
      _memcpy(pbVar3,lVar19,uVar6 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar13;
    }
  }
  return pbVar3;
}



/* Entry: 1093112d0; end: 109311633;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1093112d0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = (ulong)*(uint *)(param_1 + 0x20);
  uVar8 = uVar9;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar10 = *(ulong *)(param_1 + 0x18);
    puVar11 = (ulong *)(uVar10 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar10 & 1) != 0) {
        puVar1 = puVar11;
      }
      bVar6 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar6) {
        uVar2 = (ulong)bVar6;
      }
      uVar8 = uVar2 + uVar8 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar11 = puVar11 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = *(ulong *)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x38);
  lVar12 = uVar8 + (long)iVar7;
  puVar11 = (ulong *)(param_1 + 0x30);
  if ((uVar9 & 1) != 0) {
    puVar11 = (ulong *)(uVar9 + 7);
  }
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 3;
    do {
      uVar8 = *puVar11;
      FUN_10933bbb4();
      lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
  uVar8 = *(ulong *)(param_1 + 0x48);
  iVar7 = *(int *)(param_1 + 0x50);
  lVar12 = lVar12 + iVar7;
  puVar11 = (ulong *)(param_1 + 0x48);
  if ((uVar8 & 1) != 0) {
    puVar11 = (ulong *)(uVar8 + 7);
  }
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 3;
    do {
      uVar8 = *puVar11;
      FUN_10933beac();
      lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
  uVar8 = *(ulong *)(param_1 + 0x60);
  iVar7 = *(int *)(param_1 + 0x68);
  lVar12 = lVar12 + iVar7;
  puVar11 = (ulong *)(param_1 + 0x60);
  if ((uVar8 & 1) != 0) {
    puVar11 = (ulong *)(uVar8 + 7);
  }
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 3;
    do {
      uVar8 = *puVar11;
      FUN_1093112d0();
      lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x78);
  lVar13 = 0;
  if (uVar4 != 0) {
    lVar13 = (ulong)((int)LZCOUNT(-((ulong)(uVar4 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar4 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x88);
  lVar3 = 0;
  if (uVar5 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar5 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar5 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar8 = *(ulong *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0xa0);
  lVar12 = lVar13 + lVar12 + ((ulong)uVar5 + (ulong)uVar4) * 4 + lVar3 + iVar7;
  puVar11 = (ulong *)(param_1 + 0x98);
  if ((uVar8 & 1) != 0) {
    puVar11 = (ulong *)(uVar8 + 7);
  }
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 3;
    do {
      uVar8 = *puVar11;
      func_0x00010931050c();
      lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
  uVar8 = *(ulong *)(param_1 + 0xb0);
  iVar7 = *(int *)(param_1 + 0xb8);
  lVar12 = lVar12 + iVar7;
  puVar11 = (ulong *)(param_1 + 0xb0);
  if ((uVar8 & 1) != 0) {
    puVar11 = (ulong *)(uVar8 + 7);
  }
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 3;
    do {
      uVar8 = *puVar11;
      FUN_109340c2c();
      lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar13 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xf) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 200) & 0xfffffffffffffffc;
      bVar6 = *(byte *)(uVar8 + 0x17);
      uVar8 = *(ulong *)(uVar8 + 8);
      if (-1 < (char)bVar6) {
        uVar8 = (ulong)bVar6;
      }
      lVar12 = lVar12 + uVar8 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0xd0);
      FUN_10933686c();
      lVar12 = lVar12 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      lVar12 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xd8)) * -9 + 0x2c0U >> 6) + lVar12;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      lVar12 = lVar12 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xdc)) * -9 + 0x280U >> 6) + 1
      ;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar13 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar13 < 0) {
      lVar13 = *(long *)(uVar8 + 0x10);
    }
    lVar12 = lVar13 + lVar12;
  }
  *(int *)(param_1 + 0x14) = (int)lVar12;
  return lVar12;
}



/* Entry: 109311634; end: 109311637;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109311634(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      FUN_109311970(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      FUN_109311970(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    func_0x000107c303c4(param_1 + 0x98,param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0xb8) != 0) {
    func_0x000107c303c4(param_1 + 0xb0,param_2 + 0xb0);
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xf) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 200,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        FUN_109312ce0(uVar9,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar9;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109311638; end: 109311873;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109311638(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      FUN_109311970(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      FUN_109311970(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    func_0x000107c303c4(param_1 + 0x98,param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0xb8) != 0) {
    func_0x000107c303c4(param_1 + 0xb0,param_2 + 0xb0);
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xf) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 200,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        FUN_109312ce0(uVar9,*(undefined8 *)(param_2 + 0xd0));
        *(ulong *)(param_1 + 0xd0) = uVar9;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109311874; end: 1093118fb;  */

void FUN_109311874(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110aeb338;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  return;
}



/* Entry: 1093118fc; end: 10931196f;  */

int * FUN_1093118fc(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_109311970(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined4 **)(param_1 + 2);
      puVar3 = *(undefined4 **)(param_3 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 109311970; end: 109311973;  */

void FUN_109311970(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar4 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_1093119c8;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_3 < 2) {
LAB_1093119c8:
      uVar5 = 2;
      goto LAB_1093119e0;
    }
    if (0x3ffffffb < iVar2) {
      uVar5 = 0x7fffffff;
      goto LAB_1093119e0;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar5 = (ulong)uVar1;
LAB_1093119e0:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 4 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x00010b4d810c(plVar4,uVar5 * 4 + 0xf & 0x3fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 8),(ulong)param_2 << 2);
    }
    FUN_109311a58(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar5;
  *(long **)(param_1 + 8) = plVar3 + 1;
  return;
}


