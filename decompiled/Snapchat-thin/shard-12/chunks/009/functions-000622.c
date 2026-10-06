/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109caaf50; end: 109cab007;  */

long FUN_109caaf50(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cab008; end: 109cab04f;  */

long FUN_109cab008(long param_1)

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



/* Entry: 109cab050; end: 109cab063;  */

void FUN_109cab050(void)

{
  FUN_109cab008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cab064; end: 109cab087;  */

undefined ** FUN_109cab064(void)

{
  return &PTR_DAT_110b38600;
}



/* Entry: 109cab088; end: 109cab41f;  */

byte * FUN_109cab088(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cab148:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cab1e0:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cab1e0;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cab148;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cab420; end: 109cab4d7;  */

long FUN_109cab420(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cab4d8; end: 109cab51f;  */

long FUN_109cab4d8(long param_1)

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



/* Entry: 109cab520; end: 109cab533;  */

void FUN_109cab520(void)

{
  FUN_109cab4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cab534; end: 109cab557;  */

undefined ** FUN_109cab534(void)

{
  return &PTR_DAT_110b38650;
}



/* Entry: 109cab558; end: 109cab8ef;  */

byte * FUN_109cab558(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cab618:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cab6b0:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cab6b0;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cab618;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cab8f0; end: 109cab9a7;  */

long FUN_109cab8f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cab9a8; end: 109cab9ef;  */

long FUN_109cab9a8(long param_1)

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



/* Entry: 109cab9f0; end: 109caba03;  */

void FUN_109cab9f0(void)

{
  FUN_109cab9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109caba04; end: 109caba27;  */

undefined ** FUN_109caba04(void)

{
  return &PTR_DAT_110b386a0;
}



/* Entry: 109caba28; end: 109cabdbf;  */

byte * FUN_109caba28(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cabae8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cabb80:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cabb80;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cabae8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cabdc0; end: 109cabe77;  */

long FUN_109cabdc0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cabe78; end: 109cabebf;  */

long FUN_109cabe78(long param_1)

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



/* Entry: 109cabec0; end: 109cabed3;  */

void FUN_109cabec0(void)

{
  FUN_109cabe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cabed4; end: 109cabef7;  */

undefined ** FUN_109cabed4(void)

{
  return &PTR_DAT_110b386f0;
}



/* Entry: 109cabef8; end: 109cac28f;  */

byte * FUN_109cabef8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cabfb8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cac050:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cac050;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cabfb8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cac290; end: 109cac347;  */

long FUN_109cac290(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cac348; end: 109cac38f;  */

long FUN_109cac348(long param_1)

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



/* Entry: 109cac390; end: 109cac3a3;  */

void FUN_109cac390(void)

{
  FUN_109cac348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cac3a4; end: 109cac3c7;  */

undefined ** FUN_109cac3a4(void)

{
  return &PTR_DAT_110b38740;
}



/* Entry: 109cac3c8; end: 109cac75f;  */

byte * FUN_109cac3c8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cac488:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cac520:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cac520;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cac488;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cac760; end: 109cac817;  */

long FUN_109cac760(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cac818; end: 109cac85f;  */

long FUN_109cac818(long param_1)

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



/* Entry: 109cac860; end: 109cac873;  */

void FUN_109cac860(void)

{
  FUN_109cac818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cac874; end: 109cac897;  */

undefined ** FUN_109cac874(void)

{
  return &PTR_DAT_110b38790;
}



/* Entry: 109cac898; end: 109cacc2f;  */

byte * FUN_109cac898(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cac958:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cac9f0:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cac9f0;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cac958;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109cacc30; end: 109cacce7;  */

long FUN_109cacc30(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cacce8; end: 109cacd2f;  */

long FUN_109cacce8(long param_1)

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



/* Entry: 109cacd30; end: 109cacd43;  */

void FUN_109cacd30(void)

{
  FUN_109cacce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cacd44; end: 109cacd63;  */

undefined ** FUN_109cacd44(void)

{
  return &PTR_DAT_110b387e0;
}



/* Entry: 109cacd64; end: 109cad033;  */

byte * FUN_109cacd64(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
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
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cace24:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cacebc:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109cacebc;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cace24;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109cad034; end: 109cad0db;  */

long FUN_109cad034(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cad0dc; end: 109cad107;  */

void FUN_109cad0dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cad108; end: 109cad127;  */

undefined ** FUN_109cad108(void)

{
  return &PTR_DAT_110b38830;
}



/* Entry: 109cad128; end: 109cad267;  */

long * FUN_109cad128(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
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



/* Entry: 109cad268; end: 109cad2d7;  */

ulong FUN_109cad268(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109cad2d8; end: 109cad31f;  */

long FUN_109cad2d8(long param_1)

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



/* Entry: 109cad320; end: 109cad333;  */

void FUN_109cad320(void)

{
  FUN_109cad2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cad334; end: 109cad353;  */

undefined ** FUN_109cad334(void)

{
  return &PTR_DAT_110b38880;
}



/* Entry: 109cad354; end: 109cad623;  */

byte * FUN_109cad354(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
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
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cad414:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cad4ac:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109cad4ac;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cad414;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109cad624; end: 109cad6cb;  */

long FUN_109cad624(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cad6cc; end: 109cad6f7;  */

void FUN_109cad6cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cad6f8; end: 109cad713;  */

undefined ** FUN_109cad6f8(void)

{
  return &PTR_DAT_110b388d0;
}



/* Entry: 109cad714; end: 109cad83f;  */

long * FUN_109cad714(long param_1,long *param_2,long *param_3)

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



/* Entry: 109cad840; end: 109cad887;  */

long FUN_109cad840(long param_1)

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



/* Entry: 109cad888; end: 109cad8b3;  */

void FUN_109cad888(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cad8b4; end: 109cad8cf;  */

undefined ** FUN_109cad8b4(void)

{
  return &PTR_DAT_110b38920;
}



/* Entry: 109cad8d0; end: 109cad9fb;  */

long * FUN_109cad8d0(long param_1,long *param_2,long *param_3)

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



/* Entry: 109cad9fc; end: 109cada43;  */

long FUN_109cad9fc(long param_1)

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



/* Entry: 109cada44; end: 109cada8b;  */

long FUN_109cada44(long param_1)

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



/* Entry: 109cada8c; end: 109cada9f;  */

void FUN_109cada8c(void)

{
  FUN_109cada44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cadaa0; end: 109cadac3;  */

undefined ** FUN_109cadaa0(void)

{
  return &PTR_DAT_110b38970;
}



/* Entry: 109cadac4; end: 109caddf7;  */

byte * FUN_109cadac4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cadb84:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cadc1c:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109cadc1c;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cadb84;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109caddf8; end: 109cadea7;  */

long FUN_109caddf8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cadea8; end: 109caded3;  */

void FUN_109cadea8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caded4; end: 109cadef7;  */

undefined ** FUN_109caded4(void)

{
  return &PTR_DAT_110b389b8;
}



/* Entry: 109cadef8; end: 109cae11f;  */

byte * FUN_109cadef8(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  pbVar8 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar8 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar8);
      uVar4 = *(ulong *)(param_1 + 0x18);
    }
    pbVar6 = pbVar8 + 1;
    *pbVar8 = 0x10;
    uVar5 = uVar4;
    pbVar8 = pbVar6;
    if (0x7f < uVar4) {
      do {
        pbVar6 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar8 = pbVar6;
      } while (uVar7 != 0);
    }
    pbVar8 = pbVar6 + 1;
    *pbVar6 = (byte)uVar4;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    pbVar6 = *(byte **)param_3;
    if (pbVar8 < pbVar6) {
      bVar2 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar8);
      bVar2 = *(byte *)(param_1 + 0x20);
    }
    *pbVar8 = 0x18;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar9 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar6;
          _memcpy(pbVar8,lVar9,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar10;
          pbVar6 = *(byte **)param_3;
          pbVar1 = pbVar8 + iVar10;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar8 + ((int)pbVar1 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar8 = pbVar1;
          } while (pbVar6 <= pbVar1);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar9,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar9,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109cae120; end: 109cae18f;  */

long FUN_109cae120(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cae190; end: 109cae1bb;  */

void FUN_109cae190(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cae1bc; end: 109cae1df;  */

undefined ** FUN_109cae1bc(void)

{
  return &PTR_DAT_110b38a00;
}



/* Entry: 109cae1e0; end: 109cae383;  */

long * FUN_109cae1e0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
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
      uVar2 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x10;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar7);
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
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109cae384; end: 109cae3d7;  */

long FUN_109cae384(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
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



/* Entry: 109cae3d8; end: 109cae403;  */

void FUN_109cae3d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cae404; end: 109cae427;  */

undefined ** FUN_109cae404(void)

{
  return &PTR_DAT_110b38a48;
}



/* Entry: 109cae428; end: 109cae5cb;  */

long * FUN_109cae428(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
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
      uVar2 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x10;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar7);
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
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109cae5cc; end: 109cae61f;  */

long FUN_109cae5cc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
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



/* Entry: 109cae620; end: 109cae667;  */

long FUN_109cae620(long param_1)

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



/* Entry: 109cae668; end: 109cae67b;  */

void FUN_109cae668(void)

{
  FUN_109cae620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cae67c; end: 109cae69f;  */

undefined ** FUN_109cae67c(void)

{
  return &PTR_DAT_110b38a90;
}



/* Entry: 109cae6a0; end: 109caea07;  */

byte * FUN_109cae6a0(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar9 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x28),param_2);
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar9);
      uVar3 = *(ulong *)(param_1 + 0x30);
    }
    pbVar5 = pbVar9 + 1;
    *pbVar9 = 0x10;
    uVar4 = uVar3;
    pbVar9 = pbVar5;
    if (0x7f < uVar3) {
      do {
        pbVar5 = pbVar9 + 1;
        *pbVar9 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar9 = pbVar5;
      } while (uVar7 != 0);
    }
    pbVar9 = pbVar5 + 1;
    *pbVar5 = (byte)uVar3;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar9);
    }
    pbVar5 = pbVar9 + 1;
    *pbVar9 = 0x1a;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar5;
        pbVar5 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar5 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar5 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar17 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109cae7a4:
            param_3[0x38] = 1;
LAB_109cae83c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar5 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_109cae83c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar17 - (long)pbVar5);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cae7a4;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar5 = uVar18;
              *(byte **)param_3 = pbVar5 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar17);
          pbVar10 = pbVar9;
          pbVar17 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar3 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar3 | 0x80;
          uVar4 = uVar3 >> 7;
          uVar7 = uVar3 >> 0xe;
          uVar3 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar3 + 8);
      uVar4 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar11 = uVar3 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar5;
          _memcpy(pbVar9,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar5 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar16;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar5 <= pbVar10);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar9);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109caea08; end: 109caeae7;  */

long FUN_109caea08(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  return lVar4;
}



/* Entry: 109caeae8; end: 109caeb13;  */

void FUN_109caeae8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caeb14; end: 109caeb2f;  */

undefined ** FUN_109caeb14(void)

{
  return &PTR_DAT_110b38ad8;
}



/* Entry: 109caeb30; end: 109caec5b;  */

long * FUN_109caeb30(long param_1,long *param_2,long *param_3)

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



/* Entry: 109caec5c; end: 109caeca3;  */

long FUN_109caec5c(long param_1)

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



/* Entry: 109caeca4; end: 109caeccf;  */

void FUN_109caeca4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caecd0; end: 109caeceb;  */

undefined ** FUN_109caecd0(void)

{
  return &PTR_DAT_110b38b20;
}



/* Entry: 109caecec; end: 109caee17;  */

long * FUN_109caecec(long param_1,long *param_2,long *param_3)

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



/* Entry: 109caee18; end: 109caee5f;  */

long FUN_109caee18(long param_1)

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



/* Entry: 109caee60; end: 109caee8b;  */

void FUN_109caee60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caee8c; end: 109caeea7;  */

undefined ** FUN_109caee8c(void)

{
  return &PTR_DAT_110b38b68;
}



/* Entry: 109caeea8; end: 109caefd3;  */

long * FUN_109caeea8(long param_1,long *param_2,long *param_3)

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



/* Entry: 109caefd4; end: 109caf01b;  */

long FUN_109caefd4(long param_1)

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



/* Entry: 109caf01c; end: 109caf047;  */

void FUN_109caf01c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caf048; end: 109caf063;  */

undefined ** FUN_109caf048(void)

{
  return &PTR_DAT_110b38bb0;
}



/* Entry: 109caf064; end: 109caf18f;  */

long * FUN_109caf064(long param_1,long *param_2,long *param_3)

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



/* Entry: 109caf190; end: 109caf1d7;  */

long FUN_109caf190(long param_1)

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



/* Entry: 109caf1d8; end: 109caf203;  */

void FUN_109caf1d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109caf204; end: 109caf223;  */

undefined ** FUN_109caf204(void)

{
  return &PTR_DAT_110b38bf8;
}



/* Entry: 109caf224; end: 109caf417;  */

long * FUN_109caf224(long param_1,long *param_2,long *param_3)

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



/* Entry: 109caf418; end: 109caf463;  */

long FUN_109caf418(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 109caf464; end: 109caf537;  */

long FUN_109caf464(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x7c)) {
    if (*(long *)(*(long *)(param_1 + 0x80) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    if (*(long *)(*(long *)(param_1 + 0x58) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
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



/* Entry: 109caf538; end: 109caf54b;  */

void FUN_109caf538(void)

{
  FUN_109caf464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109caf54c; end: 109caf57f;  */

undefined ** FUN_109caf54c(void)

{
  return &PTR_DAT_110b38c40;
}



/* Entry: 109caf580; end: 109cb013f;  */

byte * FUN_109caf580(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  int iVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
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
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar6 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar18 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar17 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caf640:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109caf6d8:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109caf6d8;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caf640;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar19;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar15 = puVar17 + 1;
      uVar4 = *puVar17;
      uVar16 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar16 | 0x80;
          uVar4 = uVar16 >> 7;
          uVar8 = uVar16 >> 0xe;
          uVar16 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar17 = puVar15;
    } while (puVar15 < puVar14 + iVar18);
  }
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
      uVar12 = *(uint *)(param_1 + 0x28);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar16;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109cafdb4:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109cafd94:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109cafd94;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109cafdb4;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar16 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar16;
  }
  uVar12 = *(uint *)(param_1 + 0x48);
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
    *param_2 = 0x1a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar6 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar14 = *(ulong **)(param_1 + 0x40);
    iVar18 = *(int *)(param_1 + 0x38);
    pbVar3 = (byte *)(param_3 + 2);
    puVar17 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caf7fc:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109caf894:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109caf894;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caf7fc;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar19;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar15 = puVar17 + 1;
      uVar4 = *puVar17;
      uVar16 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar16 | 0x80;
          uVar4 = uVar16 >> 7;
          uVar8 = uVar16 >> 0xe;
          uVar16 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar17 = puVar15;
    } while (puVar15 < puVar14 + iVar18);
  }
  uVar12 = *(uint *)(param_1 + 0x50);
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
      uVar12 = *(uint *)(param_1 + 0x50);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x22;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x58);
    uVar16 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar16;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109cafec8:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109cafea8:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109cafea8;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109cafec8;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar16 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar16;
  }
  uVar12 = *(uint *)(param_1 + 0x70);
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
    *param_2 = 0x2a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar6 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar14 = *(ulong **)(param_1 + 0x68);
    iVar18 = *(int *)(param_1 + 0x60);
    pbVar3 = (byte *)(param_3 + 2);
    puVar17 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caf9b8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cafa50:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109cafa50;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caf9b8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar19;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar15 = puVar17 + 1;
      uVar4 = *puVar17;
      uVar16 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar16 | 0x80;
          uVar4 = uVar16 >> 7;
          uVar8 = uVar16 >> 0xe;
          uVar16 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar17 = puVar15;
    } while (puVar15 < puVar14 + iVar18);
  }
  uVar12 = *(uint *)(param_1 + 0x78);
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
      uVar12 = *(uint *)(param_1 + 0x78);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x32;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x80);
    uVar16 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar16;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109caffdc:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109caffbc:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109caffbc;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109caffdc;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar16 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar16;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar13 = *(long *)(uVar16 + 8);
      uVar4 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar13 = uVar16 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = (int)uVar4 - iVar18;
          uVar4 = (ulong)uVar12;
          lVar13 = lVar13 + iVar18;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar18;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar13,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109cb0140; end: 109cb0347;  */

long FUN_109cb0140(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar8 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar7 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar7;
      uVar10 = uVar10 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar7;
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = lVar7;
    }
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar7 = 0;
  if (uVar1 != 0) {
    lVar7 = (ulong)((int)LZCOUNT((long)(int)uVar1) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if ((int)uVar2 < 1) {
    lVar12 = 0;
    lVar13 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    lVar11 = 0;
    uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    do {
      lVar11 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar11;
      uVar10 = uVar10 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x48) = (int)lVar11;
    lVar12 = 0;
    if (lVar11 != 0) {
      lVar12 = lVar11;
    }
    lVar13 = 0;
    if (lVar11 != 0) {
      lVar13 = (ulong)((int)LZCOUNT((long)(int)lVar11) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  lVar11 = 0;
  if (uVar2 != 0) {
    lVar11 = (ulong)((int)LZCOUNT((long)(int)uVar2) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  if ((int)uVar3 < 1) {
    lVar14 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar14 = 0;
    uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    do {
      lVar14 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar14;
      uVar10 = uVar10 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x70) = (int)lVar14;
    if (lVar14 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar14) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulong)((int)LZCOUNT((long)(int)uVar3) * -9 + 0x280U >> 6) + 1;
  }
  lVar8 = lVar9 + lVar8 + (ulong)uVar1 + lVar7 + lVar12 + lVar13 + (ulong)uVar2 +
          lVar11 + lVar14 + lVar4 + (ulong)uVar3 + lVar6;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar10 + 0x10);
    }
    lVar8 = lVar9 + lVar8;
  }
  *(int *)(param_1 + 0x88) = (int)lVar8;
  return lVar8;
}


