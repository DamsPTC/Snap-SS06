/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109348f7c; end: 109349237;  */

long * FUN_109348f7c(long param_1,long *param_2,long *param_3)

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



/* Entry: 109349238; end: 1093492af;  */

long FUN_109349238(long param_1)

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



/* Entry: 1093492b0; end: 109349397;  */

void FUN_1093492b0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0b68;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109349398; end: 10934939b;  */

long FUN_109349398(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934939c; end: 1093493af;  */

void FUN_10934939c(void)

{
  func_0x000109349348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093493b0; end: 1093493bb;  */

undefined ** FUN_1093493b0(void)

{
  return &PTR_DAT_110af0cf0;
}



/* Entry: 1093493bc; end: 10934940f;  */

void FUN_1093493bc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 109349410; end: 109349acf;  */

byte * FUN_109349410(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar17 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar18 = 8;
    pbVar9 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar18 + -1);
      }
      puVar14 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar14 + 0x17);
      puVar10 = puVar14;
      if (lVar4 < 0) {
        lVar4 = puVar14[1];
        puVar10 = (undefined8 *)*puVar14;
      }
      func_0x000107c303d4(puVar10,lVar4,1,&UNK_10f5667a7);
      lVar4 = (long)*(char *)((long)puVar14 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar14[1], 0x7f < lVar4)) ||
         ((*(long *)param_3 - (long)pbVar9) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,puVar14,pbVar9);
      }
      else {
        *pbVar9 = 10;
        pbVar9[1] = (byte)lVar4;
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          puVar14 = (undefined8 *)*puVar14;
        }
        _memcpy(pbVar9 + 2,puVar14,lVar4);
        param_2 = pbVar9 + 2 + lVar4;
      }
      lVar18 = lVar18 + 8;
      uVar17 = uVar17 - 1;
      pbVar9 = param_2;
    } while (uVar17 != 0);
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if (uVar13 != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar11 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
      uVar13 = *(uint *)(param_1 + 0x38);
    }
    pbVar11 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    pbVar9 = pbVar11;
    if (0x7f < uVar13) {
      do {
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar5 = uVar17 >> 7;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar5;
        pbVar9 = pbVar11;
      } while (uVar16 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  pbVar9 = param_2;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pbVar9 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x3c),param_2);
  }
  uVar13 = *(uint *)(param_1 + 0x40);
  if (uVar13 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar2 + ((int)pbVar9 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar9);
      uVar13 = *(uint *)(param_1 + 0x40);
    }
    pbVar11 = pbVar9 + 1;
    *pbVar9 = 0x20;
    uVar5 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    pbVar9 = pbVar11;
    if (0x7f < uVar13) {
      do {
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar5 = uVar17 >> 7;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar5;
        pbVar9 = pbVar11;
      } while (uVar16 != 0);
    }
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  if (0 < iVar15) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar2 + ((int)pbVar9 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar9);
      iVar15 = *(int *)(param_1 + 0x28);
    }
    uVar13 = iVar15 * 4;
    uVar5 = (ulong)uVar13;
    pbVar11 = pbVar9 + 1;
    *pbVar9 = 0x2a;
    uVar17 = uVar5;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar9 = pbVar11;
        uVar7 = (uint)uVar17;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar17 = uVar17 >> 7;
        uVar8 = (uint)uVar17;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar11 = (byte)uVar8;
    lVar18 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    if ((*(long *)param_3 - (long)pbVar9 < (long)(int)uVar13) &&
       (pbVar11 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10), uVar17 = uVar16,
       (int)pbVar11 < (int)uVar13)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar15 = (int)pbVar11;
        _memcpy(pbVar9,lVar18,(long)iVar15);
        uVar13 = (int)uVar5 - iVar15;
        uVar5 = (ulong)uVar13;
        lVar18 = lVar18 + iVar15;
        pbVar12 = pbVar9 + iVar15;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar9 = pbVar2;
          pbVar11 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109349994:
            param_3[0x38] = 1;
LAB_109349974:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109349974;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109349994;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar2 + (int)uStack_64;
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
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar9 = pbStack_70;
            }
          }
          pbVar12 = pbVar9 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar11;
          pbVar9 = pbVar12;
        } while (pbVar11 <= pbVar12);
        pbVar11 = pbVar11 + (0x10 - (long)pbVar9);
      } while ((int)pbVar11 < (int)uVar13);
      uVar16 = (ulong)(int)uVar13;
      uVar17 = uVar16;
    }
    _memcpy(pbVar9,lVar18,uVar17);
    pbVar9 = pbVar9 + uVar16;
  }
  uVar13 = *(uint *)(param_1 + 0x44);
  if (uVar13 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar2 + ((int)pbVar9 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar9);
      uVar13 = *(uint *)(param_1 + 0x44);
    }
    pbVar11 = pbVar9 + 1;
    *pbVar9 = 0x30;
    uVar5 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    pbVar9 = pbVar11;
    if (0x7f < uVar13) {
      do {
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar5 = uVar17 >> 7;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar5;
        pbVar9 = pbVar11;
      } while (uVar16 != 0);
    }
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  uVar13 = *(uint *)(param_1 + 0x48);
  if (uVar13 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar2 + ((int)pbVar9 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar9);
      uVar13 = *(uint *)(param_1 + 0x48);
    }
    pbVar11 = pbVar9 + 1;
    *pbVar9 = 0x38;
    uVar5 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    pbVar9 = pbVar11;
    if (0x7f < uVar13) {
      do {
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar5 = uVar17 >> 7;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar5;
        pbVar9 = pbVar11;
      } while (uVar16 != 0);
    }
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  uVar13 = *(uint *)(param_1 + 0x4c);
  if (uVar13 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar2 + ((int)pbVar9 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar9);
      uVar13 = *(uint *)(param_1 + 0x4c);
    }
    pbVar11 = pbVar9 + 1;
    *pbVar9 = 0x40;
    uVar5 = (ulong)(int)uVar13;
    uVar17 = uVar5;
    pbVar9 = pbVar11;
    if (0x7f < uVar13) {
      do {
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar17 | 0x80;
        uVar5 = uVar17 >> 7;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar5;
        pbVar9 = pbVar11;
      } while (uVar16 != 0);
    }
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  pbVar11 = pbVar9;
  if (*(int *)(param_1 + 0x50) != 0) {
    pbVar11 = param_3;
    func_0x000108b3207c(param_3,*(int *)(param_1 + 0x50),pbVar9);
  }
  pbVar9 = pbVar11;
  if (*(int *)(param_1 + 0x54) != 0) {
    pbVar9 = param_3;
    func_0x0001089f53f0(param_3,*(int *)(param_1 + 0x54),pbVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar17 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar17 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar18 = *(long *)(uVar17 + 8);
      uVar5 = (ulong)*(uint *)(uVar17 + 0x10);
    }
    else {
      lVar18 = uVar17 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar13) {
      pbVar11 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar11 < (int)uVar13) {
        do {
          iVar15 = (int)pbVar11;
          _memcpy(pbVar9,lVar18,(long)iVar15);
          uVar13 = (int)uVar5 - iVar15;
          uVar5 = (ulong)uVar13;
          lVar18 = lVar18 + iVar15;
          pbVar11 = *(byte **)param_3;
          pbVar2 = pbVar9 + iVar15;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar9 + ((int)pbVar2 - (int)pbVar11);
            pbVar11 = *(byte **)param_3;
            pbVar9 = pbVar2;
          } while (pbVar11 <= pbVar2);
          pbVar11 = pbVar11 + (0x10 - (long)pbVar9);
        } while ((int)pbVar11 < (int)uVar13);
      }
      _memcpy(pbVar9,lVar18,(long)(int)uVar13);
      pbVar9 = pbVar9 + (int)uVar13;
    }
    else {
      _memcpy(pbVar9,lVar18,uVar5 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar13;
    }
  }
  return pbVar9;
}



/* Entry: 109349ad0; end: 109349c6b;  */

long FUN_109349ad0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  uVar8 = uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar9 = *(ulong *)(param_1 + 0x10);
    puVar10 = (ulong *)(uVar9 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar9 & 1) != 0) {
        puVar1 = puVar10;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      uVar8 = uVar2 + uVar8 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar10 = puVar10 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  lVar6 = 0;
  if (uVar3 != 0) {
    lVar6 = (ulong)((int)LZCOUNT(-((ulong)(uVar3 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar3 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar6 = (ulong)uVar3 * 4 + uVar8 + lVar6;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar6 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar6;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar6 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar6;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    lVar6 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + lVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar8 + 0x10);
    }
    lVar6 = lVar7 + lVar6;
  }
  *(int *)(param_1 + 0x58) = (int)lVar6;
  return lVar6;
}



/* Entry: 109349c6c; end: 109349d87;  */

void FUN_109349c6c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
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
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
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



/* Entry: 109349d88; end: 109349d8f;  */

void FUN_109349d88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x60);
  }
  *puVar1 = &PTR_FUN_110af0cb0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 109349d90; end: 109349def;  */

void FUN_109349d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110af0cb0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 109349df0; end: 109349e6f;  */

undefined8 * FUN_109349df0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af0d50;
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



/* Entry: 109349e70; end: 109349ea3;  */

long FUN_109349e70(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109349ea4; end: 109349ea7;  */

long FUN_109349ea4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109349ea8; end: 109349ebb;  */

void FUN_109349ea8(void)

{
  FUN_109349e70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109349ebc; end: 109349f0b;  */

undefined ** FUN_109349ebc(void)

{
  return &PTR_DAT_110af0d90;
}



/* Entry: 109349f0c; end: 10934a0e7;  */

long * FUN_109349f0c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  iVar11 = *(int *)(param_1 + 0x1c);
  if (iVar11 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar6 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      iVar11 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar11;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109349fc0;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109349fc0;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5667cd);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,3,puVar8,plVar1);
  plVar1 = plVar4;
LAB_109349fc0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar1 < (long)(int)uVar7) {
      puVar10 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar10 < (int)uVar7) {
        do {
          iVar11 = (int)puVar10;
          _memcpy(plVar1,lVar3,(long)iVar11);
          uVar7 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar7;
          lVar3 = lVar3 + iVar11;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar11);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar6 <= plVar4);
          puVar10 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar1));
        } while ((int)puVar10 < (int)uVar7);
      }
      _memcpy(plVar1,lVar3,(long)(int)uVar7);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar1,lVar3,uVar9 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
  }
  return plVar1;
}



/* Entry: 10934a0e8; end: 10934a193;  */

long FUN_10934a0e8(long param_1)

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
    lVar2 = lVar2 + 5;
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



/* Entry: 10934a194; end: 10934a223;  */

void FUN_10934a194(long param_1,long param_2)

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



/* Entry: 10934a224; end: 10934a22b;  */

void FUN_10934a224(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af0d50;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10934a22c; end: 10934a27f;  */

void FUN_10934a22c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0d50;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10934a280; end: 10934a2ff;  */

undefined8 * FUN_10934a280(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af0de8;
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
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10934a300; end: 10934a333;  */

long FUN_10934a300(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934a334; end: 10934a337;  */

long FUN_10934a334(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934a338; end: 10934a34b;  */

void FUN_10934a338(void)

{
  FUN_10934a300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934a34c; end: 10934a39b;  */

undefined ** FUN_10934a34c(void)

{
  return &PTR_DAT_110af0e78;
}



/* Entry: 10934a39c; end: 10934a523;  */

long * FUN_10934a39c(long param_1,long *param_2,long *param_3)

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
  long lStack_48;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10934a428;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10934a428;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5667e6);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,plVar1);
  plVar1 = plVar3;
LAB_10934a428:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_48 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar1 < (long)(int)uVar7) {
      lVar4 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar4 < (int)uVar7) {
        do {
          iVar10 = (int)lVar4;
          _memcpy(plVar1,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar6 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar10);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar6 <= plVar3);
          lVar4 = (long)plVar6 + (0x10 - (long)plVar1);
        } while ((int)lVar4 < (int)uVar7);
      }
      _memcpy(plVar1,lStack_48,(long)(int)uVar7);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar1,lStack_48,uVar9 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
  }
  return plVar1;
}



/* Entry: 10934a524; end: 10934a5bf;  */

long FUN_10934a524(long param_1)

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



/* Entry: 10934a5c0; end: 10934a673;  */

void FUN_10934a5c0(long param_1,long param_2)

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



/* Entry: 10934a674; end: 10934a677;  */

long FUN_10934a674(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934a960(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934a678; end: 10934a68b;  */

void FUN_10934a678(void)

{
  func_0x00010934a640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934a68c; end: 10934a697;  */

undefined ** FUN_10934a68c(void)

{
  return &PTR_DAT_110af0ea8;
}



/* Entry: 10934a698; end: 10934a6df;  */

void FUN_10934a698(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10934a6e0; end: 10934a8fb;  */

long * FUN_10934a6e0(long param_1,long *param_2,long *param_3)

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
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 10934a8fc; end: 10934a94f;  */

void FUN_10934a8fc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10934a950; end: 10934a95f;  */

void FUN_10934a950(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af0de8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10934a960; end: 10934a993;  */

long * FUN_10934a960(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10934a994; end: 10934aa7b;  */

void FUN_10934a994(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0de8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10934aa7c; end: 10934aa7f;  */

long FUN_10934aa7c(long param_1)

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



/* Entry: 10934aa80; end: 10934aa93;  */

void FUN_10934aa80(void)

{
  func_0x00010934aa34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934aa94; end: 10934aab3;  */

undefined ** FUN_10934aa94(void)

{
  return &PTR_DAT_110af0f70;
}



/* Entry: 10934aab4; end: 10934ad83;  */

byte * FUN_10934aab4(long param_1,byte *param_2,long *param_3)

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
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
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
    puVar13 = *(uint **)(param_1 + 0x18);
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
LAB_10934ab74:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10934ac0c:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_10934ac0c;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10934ab74;
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
      uVar4 = (ulong)(int)*puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar14) {
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



/* Entry: 10934ad84; end: 10934ae27;  */

long FUN_10934ad84(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
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
    piVar4 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 1;
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



/* Entry: 10934ae28; end: 10934aecf;  */

void FUN_10934ae28(long param_1,long param_2)

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



/* Entry: 10934aed0; end: 10934aed7;  */

void FUN_10934aed0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af0f30;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 10934aed8; end: 10934b03f;  */

void FUN_10934aed8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0f30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10934b040; end: 10934b043;  */

long FUN_10934b040(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010934af2c(param_1);
  }
  return param_1;
}



/* Entry: 10934b044; end: 10934b057;  */

void FUN_10934b044(void)

{
  func_0x00010934b004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934b058; end: 10934b083;  */

long FUN_10934b058(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10934b084; end: 10934b097;  */

long FUN_10934b084(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934c908(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934b098; end: 10934b0cf;  */

void FUN_10934b098(long param_1)

{
  ulong *puVar1;
  
  func_0x00010934af2c();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10934b0d0; end: 10934b22b;  */

long * FUN_10934b0d0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x1c) - 1;
  if (uVar3 < 3) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x10) + *(long *)(&UNK_10dfc7000 + (ulong)uVar3 * 8)),
                        param_2,param_3);
    param_2 = plVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 10934b22c; end: 10934b2cb;  */

void FUN_10934b22c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010934c438();
  }
  else if (iVar1 == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010934be70();
  }
  else {
    if (iVar1 != 1) {
      iVar1 = 0;
      goto LAB_10934b29c;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10934b694();
  }
  iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
LAB_10934b29c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10934b2cc; end: 10934b44b;  */

/* WARNING: Possible PIC construction at 0x00010934b374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010934b378) */

void FUN_10934b2cc(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x00010934af2c(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 == 3) {
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 3) {
          ppuVar2 = &PTR_PTR_1132dabd0;
        }
        func_0x00010934b4a0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
      }
      else {
        FUN_10934ccd4(uVar8,*(undefined8 *)(param_2 + 0x10));
LAB_10934b400:
        *(ulong *)(param_1 + 0x10) = uVar8;
      }
    }
    else if (iVar3 == 2) {
      if (iVar4 != 2) {
        FUN_10934cc44(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_10934b400;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar2 = &PTR_PTR_1132daba0;
      }
      FUN_10934b44c(*(undefined8 *)(param_1 + 0x10),ppuVar2);
    }
    else if (iVar3 == 1) {
      if (iVar4 != 1) {
        FUN_10934cba4(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_10934b400;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar2 = &PTR_PTR_1132dab88;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar6 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x10934b378;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar5 = (ulong *)(lVar6 + 8);
        unaff_x19 = puVar7;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar5 = puVar7;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar5 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10934b44c; end: 10934b533;  */

void FUN_10934b44c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10934b534; end: 10934b553;  */

undefined ** FUN_10934b534(void)

{
  return &PTR_DAT_110af1208;
}



/* Entry: 10934b554; end: 10934b693;  */

long * FUN_10934b554(long param_1,long *param_2,long *param_3)

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
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
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



/* Entry: 10934b694; end: 10934b707;  */

ulong FUN_10934b694(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10934b708; end: 10934b77b;  */

undefined8 * FUN_10934b708(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af1030;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109311ab0(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  return param_1;
}



/* Entry: 10934b77c; end: 10934b7c3;  */

long FUN_10934b77c(long param_1)

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



/* Entry: 10934b7c4; end: 10934b7c7;  */

long FUN_10934b7c4(long param_1)

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



/* Entry: 10934b7c8; end: 10934b7db;  */

void FUN_10934b7c8(void)

{
  FUN_10934b77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934b7dc; end: 10934b7ff;  */

undefined ** FUN_10934b7dc(void)

{
  return &PTR_DAT_110af1268;
}



/* Entry: 10934b800; end: 10934bae7;  */

byte * FUN_10934b800(long param_1,byte *param_2,byte *param_3)

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
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if (*(int *)(param_1 + 0x24) != 0) {
    pbVar9 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x24),param_2);
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x12;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar17 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10934b8d8:
            param_3[0x38] = 1;
LAB_10934b970:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_10934b970;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar17 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10934b8d8;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
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
      uVar4 = (ulong)(int)*puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar14) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
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
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar16;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
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



/* Entry: 10934bae8; end: 10934bbab;  */

long FUN_10934bae8(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
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
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 1;
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
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  return lVar4;
}



/* Entry: 10934bbac; end: 10934bc5f;  */

void FUN_10934bbac(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10934bc60; end: 10934bc93;  */

long FUN_10934bc60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934c908(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934bc94; end: 10934bca7;  */

void FUN_10934bc94(void)

{
  FUN_10934bc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934bca8; end: 10934bcb3;  */

undefined ** FUN_10934bca8(void)

{
  return &PTR_DAT_110af12d0;
}



/* Entry: 10934bcb4; end: 10934bcfb;  */

void FUN_10934bcb4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10934bcfc; end: 10934bf17;  */

long * FUN_10934bcfc(long param_1,long *param_2,long *param_3)

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
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x28),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 10934bf18; end: 10934bf1b;  */

void FUN_10934bf18(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10934bf1c; end: 10934bf4f;  */

long FUN_10934bf1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934c93c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10934bf50; end: 10934bf63;  */

void FUN_10934bf50(void)

{
  FUN_10934bf1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934bf64; end: 10934bf6f;  */

undefined ** FUN_10934bf64(void)

{
  return &PTR_DAT_110af1330;
}



/* Entry: 10934bf70; end: 10934bfcf;  */

void FUN_10934bf70(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000107c30320(param_1 + 0x18,0x1000010000c,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 10934bfd0; end: 10934c2d3;  */

long * FUN_10934bfd0(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar13;
  uint *puVar14;
  ulong uStack_68;
  uint *puStack_60;
  uint uStack_58;
  undefined1 *puVar12;
  
  puVar14 = (uint *)(param_1 + 0x18);
  uVar7 = *puVar14;
  uVar13 = (ulong)uVar7;
  if (uVar7 != 0) {
    puStack_60 = puVar14;
    if ((uVar7 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar7 = *(uint *)(param_1 + 0x24);
      if (uVar7 != *(uint *)(param_1 + 0x1c)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x28) + (ulong)uVar7 * 8);
        plVar5 = param_2;
        uStack_58 = uVar7;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          param_2 = (long *)(uStack_68 + 8);
          FUN_10934c2d4(param_2,uStack_68 + 0xc,plVar5,param_3);
          func_0x000107c27d54(&uStack_68);
          plVar5 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      puVar9 = (undefined4 *)(uVar13 << 4);
      puVar2 = puVar9;
      __Znam();
      puVar4 = puVar2;
      do {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar2 + uVar13 * 4);
      uStack_58 = *(uint *)(param_1 + 0x24);
      puVar4 = puVar2;
      if (uStack_58 == *(uint *)(param_1 + 0x1c)) {
        uStack_58 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x28) + (ulong)uStack_58 * 8);
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
      }
      while (uStack_68 != 0) {
        *puVar4 = *(undefined4 *)(uStack_68 + 8);
        *(undefined4 **)(puVar4 + 2) = (undefined4 *)(uStack_68 + 8);
        func_0x000107c27d54(&uStack_68);
        puVar4 = puVar4 + 4;
      }
      FUN_10934cd94(puVar2,puVar2 + uVar13 * 4,&uStack_68,LZCOUNT(uVar13) * -2 + 0x7e,1);
      lVar11 = 8;
      plVar5 = param_2;
      do {
        param_2 = *(long **)((long)puVar2 + lVar11);
        FUN_10934c2d4(param_2,(undefined1 *)((long)param_2 + 4),plVar5,param_3);
        lVar11 = lVar11 + 0x10;
        puVar9 = puVar9 + -4;
        plVar5 = param_2;
      } while (puVar9 != (undefined4 *)0x0);
      __ZdaPv(puVar2);
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar13 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar11 = *(long *)(uVar13 + 8);
      uVar8 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      lVar11 = uVar13 + 8;
    }
    uVar7 = (uint)uVar8;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      puVar12 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar12 < (int)uVar7) {
        do {
          iVar10 = (int)puVar12;
          _memcpy(param_2,lVar11,(long)iVar10);
          uVar7 = (int)uVar8 - iVar10;
          uVar8 = (ulong)uVar7;
          lVar11 = lVar11 + iVar10;
          plVar6 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar3 + (long)((int)plVar5 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar6 <= plVar5);
          puVar12 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar12 < (int)uVar7);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar11,uVar8 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 10934c2d4; end: 10934c507;  */

byte * FUN_10934c2d4(uint *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar4 = (undefined8 *)*param_4;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        param_3 = param_4 + 2;
        break;
      }
      puVar7 = param_4;
      func_0x000107c303dc();
      param_3 = (undefined8 *)((long)puVar7 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_4;
    } while (puVar4 <= param_3);
  }
  *(undefined1 *)param_3 = 10;
  puVar4 = (undefined8 *)((long)param_3 + 2);
  *(char *)((long)param_3 + 1) =
       (char)((int)LZCOUNT((long)(int)*param_1) * 0x3ff7 + 0x280U >> 6) + '\x06';
  puVar7 = (undefined8 *)*param_4;
  if (puVar7 <= puVar4) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        puVar4 = param_4 + 2;
        break;
      }
      puVar3 = param_4;
      func_0x000107c303dc();
      puVar4 = (undefined8 *)((long)puVar3 + (long)((int)puVar4 - (int)puVar7));
      puVar7 = (undefined8 *)*param_4;
    } while (puVar7 <= puVar4);
  }
  uVar2 = *param_1;
  uVar8 = (ulong)(int)uVar2;
  pbVar5 = (byte *)((long)puVar4 + 1);
  *(undefined1 *)puVar4 = 8;
  pbVar6 = pbVar5;
  uVar9 = uVar8;
  if (0x7f < uVar2) {
    do {
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9 | 0x80;
      uVar8 = uVar9 >> 7;
      uVar10 = uVar9 >> 0xe;
      pbVar6 = pbVar5;
      uVar9 = uVar8;
    } while (uVar10 != 0);
  }
  pbVar6 = pbVar5 + 1;
  *pbVar5 = (byte)uVar8;
  pbVar5 = (byte *)*param_4;
  if (pbVar5 <= pbVar6) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        pbVar6 = (byte *)(param_4 + 2);
        break;
      }
      puVar4 = param_4;
      func_0x000107c303dc();
      pbVar6 = (byte *)((long)puVar4 + (long)((int)pbVar6 - (int)pbVar5));
      pbVar5 = (byte *)*param_4;
    } while (pbVar5 <= pbVar6);
  }
  uVar1 = *param_2;
  *pbVar6 = 0x15;
  *(undefined4 *)(pbVar6 + 1) = uVar1;
  return pbVar6 + 5;
}



/* Entry: 10934c508; end: 10934c50b;  */

void FUN_10934c508(long param_1,long param_2)

{
  uint uVar1;
  
  FUN_10934e09c(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
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



/* Entry: 10934c50c; end: 10934c53f;  */

long FUN_10934c50c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934c980(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934c540; end: 10934c543;  */

long FUN_10934c540(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10934c980(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934c544; end: 10934c557;  */

void FUN_10934c544(void)

{
  FUN_10934c50c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934c558; end: 10934c563;  */

undefined ** FUN_10934c558(void)

{
  return &PTR_DAT_110af1388;
}



/* Entry: 10934c564; end: 10934c5af;  */

void FUN_10934c564(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10934c5b0; end: 10934c877;  */

byte * FUN_10934c5b0(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uStack_48;
  
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar5,param_3);
      iVar10 = iVar10 + 1;
      pbVar5 = param_2;
    } while (iVar11 != iVar10);
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar9,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar11;
          pbVar5 = (byte *)*param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar2 + (long)((int)pbVar8 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 10934c878; end: 10934c8d7;  */

void FUN_10934c878(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10934c8d8; end: 10934c907;  */

void FUN_10934c8d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110af0fe0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10934c908; end: 10934c93b;  */

long * FUN_10934c908(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10934c93c; end: 10934c97f;  */

long FUN_10934c93c(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x10000c,0);
  }
  return param_1;
}



/* Entry: 10934c980; end: 10934c9b3;  */

long * FUN_10934c980(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10934c9b4; end: 10934cba3;  */

void FUN_10934c9b4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0fe0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10934cba4; end: 10934cc43;  */

undefined8 * FUN_10934cba4(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af0fe0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 10934cc44; end: 10934ccd3;  */

undefined8 * FUN_10934cc44(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af1080;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10934ccd4; end: 10934cd93;  */

undefined8 * FUN_10934ccd4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110af10d0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 1;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 1;
  puVar1[5] = &DAT_10e5b4a18;
  puVar1[6] = param_1;
  FUN_10934e09c(puVar1 + 3,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10934cd94; end: 10934d55f;  */

/* WARNING: Removing unreachable block (ram,0x00010934de08) */
/* WARNING: Removing unreachable block (ram,0x00010934de0c) */
/* WARNING: Removing unreachable block (ram,0x00010934de1c) */
/* WARNING: Removing unreachable block (ram,0x00010934de48) */

int * FUN_10934cd94(int *param_1,int *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  piVar3 = param_1;
LAB_10934cdc8:
  do {
    param_4 = -param_4;
    piVar5 = piVar3;
    do {
      piVar3 = piVar5;
      param_4 = param_4 + 1;
      uVar10 = (long)param_2 - (long)piVar3 >> 4;
      if ((long)uVar10 < 3) {
        if (uVar10 < 2) {
          return param_1;
        }
        if (uVar10 == 2) {
          iVar8 = *piVar3;
          if (iVar8 <= param_2[-4]) {
            return param_1;
          }
          *piVar3 = param_2[-4];
          param_2[-4] = iVar8;
LAB_10934d314:
          uVar9 = *(undefined8 *)(piVar3 + 2);
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          return param_1;
        }
      }
      else {
        if (uVar10 == 3) {
          iVar8 = piVar3[4];
          iVar11 = *piVar3;
          iVar7 = param_2[-4];
          if (iVar8 < iVar11) {
            if (iVar8 <= iVar7) {
              *piVar3 = iVar8;
              piVar3[4] = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
              *(undefined8 *)(piVar3 + 6) = uVar9;
              if (iVar11 <= param_2[-4]) {
                return param_1;
              }
              piVar3[4] = param_2[-4];
              param_2[-4] = iVar11;
              *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)(param_2 + -2) = uVar9;
              return param_1;
            }
            *piVar3 = iVar7;
            param_2[-4] = iVar11;
            goto LAB_10934d314;
          }
          if (iVar8 <= iVar7) {
            return param_1;
          }
          piVar3[4] = iVar7;
          param_2[-4] = iVar8;
          uVar9 = *(undefined8 *)(piVar3 + 6);
          *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = *piVar3;
          if (iVar8 <= piVar3[4]) {
            return param_1;
          }
          *piVar3 = piVar3[4];
          piVar3[4] = iVar8;
          uVar9 = *(undefined8 *)(piVar3 + 2);
          uVar12 = *(undefined8 *)(piVar3 + 6);
          goto LAB_10934d53c;
        }
        if (uVar10 == 4) {
          iVar8 = piVar3[4];
          iVar11 = *piVar3;
          iVar7 = piVar3[8];
          iVar6 = iVar7;
          if (iVar8 < iVar11) {
            if (iVar7 < iVar8) {
              *piVar3 = iVar7;
              piVar3[8] = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 10);
            }
            else {
              *piVar3 = iVar8;
              piVar3[4] = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
              *(undefined8 *)(piVar3 + 6) = uVar9;
              if (iVar11 <= iVar7) goto LAB_10934d4d8;
              piVar3[4] = iVar7;
              piVar3[8] = iVar11;
              *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
            }
            *(undefined8 *)(piVar3 + 10) = uVar9;
            iVar6 = iVar11;
          }
          else if (iVar7 < iVar8) {
            piVar3[4] = iVar7;
            piVar3[8] = iVar8;
            uVar12 = *(undefined8 *)(piVar3 + 6);
            uVar9 = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 6) = uVar9;
            *(undefined8 *)(piVar3 + 10) = uVar12;
            iVar6 = iVar8;
            if (iVar7 < iVar11) {
              *piVar3 = iVar7;
              piVar3[4] = iVar11;
              uVar12 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = uVar9;
              *(undefined8 *)(piVar3 + 6) = uVar12;
            }
          }
LAB_10934d4d8:
          if (iVar6 <= param_2[-4]) {
            return param_1;
          }
          piVar3[8] = param_2[-4];
          param_2[-4] = iVar6;
          uVar9 = *(undefined8 *)(piVar3 + 10);
          *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = piVar3[8];
          iVar11 = piVar3[4];
          if (iVar11 <= iVar8) {
            return param_1;
          }
          piVar3[4] = iVar8;
          piVar3[8] = iVar11;
          uVar9 = *(undefined8 *)(piVar3 + 6);
          uVar12 = *(undefined8 *)(piVar3 + 10);
          *(undefined8 *)(piVar3 + 6) = uVar12;
          *(undefined8 *)(piVar3 + 10) = uVar9;
          iVar11 = *piVar3;
          if (iVar11 <= iVar8) {
            return param_1;
          }
          *piVar3 = iVar8;
          piVar3[4] = iVar11;
          uVar9 = *(undefined8 *)(piVar3 + 2);
LAB_10934d53c:
          *(undefined8 *)(piVar3 + 2) = uVar12;
          *(undefined8 *)(piVar3 + 6) = uVar9;
          return param_1;
        }
        if (uVar10 == 5) {
          piVar5 = piVar3 + 4;
          piVar4 = piVar3 + 8;
          piVar2 = piVar3 + 0xc;
          iVar8 = *piVar5;
          iVar11 = *piVar3;
          iVar7 = *piVar4;
          if (iVar8 < iVar11) {
            if (iVar7 < iVar8) {
              *piVar3 = iVar7;
              *piVar4 = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 10);
              *(undefined8 *)(piVar3 + 10) = uVar9;
              iVar7 = iVar11;
            }
            else {
              *piVar3 = iVar8;
              *piVar5 = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
              *(undefined8 *)(piVar3 + 6) = uVar9;
              iVar7 = *piVar4;
              if (iVar7 < iVar11) {
                *piVar5 = iVar7;
                *piVar4 = iVar11;
                *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
                *(undefined8 *)(piVar3 + 10) = uVar9;
                iVar7 = iVar11;
              }
            }
          }
          else if (iVar7 < iVar8) {
            *piVar5 = iVar7;
            *piVar4 = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 6);
            *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 10) = uVar9;
            iVar11 = *piVar3;
            iVar7 = iVar8;
            if (*piVar5 < iVar11) {
              *piVar3 = *piVar5;
              *piVar5 = iVar11;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
              *(undefined8 *)(piVar3 + 6) = uVar9;
              iVar7 = *piVar4;
            }
          }
          if (*piVar2 < iVar7) {
            *piVar4 = *piVar2;
            *piVar2 = iVar7;
            uVar9 = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 0xe);
            *(undefined8 *)(piVar3 + 0xe) = uVar9;
            iVar8 = *piVar5;
            if (*piVar4 < iVar8) {
              *piVar5 = *piVar4;
              *piVar4 = iVar8;
              uVar9 = *(undefined8 *)(piVar3 + 6);
              *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
              *(undefined8 *)(piVar3 + 10) = uVar9;
              iVar8 = *piVar3;
              if (*piVar5 < iVar8) {
                *piVar3 = *piVar5;
                *piVar5 = iVar8;
                uVar9 = *(undefined8 *)(piVar3 + 2);
                *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
                *(undefined8 *)(piVar3 + 6) = uVar9;
              }
            }
          }
          iVar8 = param_2[-4];
          iVar11 = *piVar2;
          if (iVar8 < iVar11) {
            *piVar2 = iVar8;
            param_2[-4] = iVar11;
            uVar9 = *(undefined8 *)(piVar3 + 0xe);
            *(undefined8 *)(piVar3 + 0xe) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)(param_2 + -2) = uVar9;
            iVar8 = *piVar4;
            if (*piVar2 < iVar8) {
              *piVar4 = *piVar2;
              *piVar2 = iVar8;
              uVar9 = *(undefined8 *)(piVar3 + 10);
              *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 0xe);
              *(undefined8 *)(piVar3 + 0xe) = uVar9;
              iVar8 = *piVar5;
              if (*piVar4 < iVar8) {
                *piVar5 = *piVar4;
                *piVar4 = iVar8;
                uVar9 = *(undefined8 *)(piVar3 + 6);
                *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
                *(undefined8 *)(piVar3 + 10) = uVar9;
                iVar8 = *piVar3;
                if (*piVar5 < iVar8) {
                  *piVar3 = *piVar5;
                  *piVar5 = iVar8;
                  uVar9 = *(undefined8 *)(piVar3 + 2);
                  *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
                  *(undefined8 *)(piVar3 + 6) = uVar9;
                }
              }
            }
          }
          return piVar3;
        }
      }
      if ((long)uVar10 < 0x18) {
        if ((param_5 & 1) == 0) {
          if ((piVar3 != param_2) && (piVar3 + 4 != param_2)) {
            piVar5 = piVar3 + 6;
            piVar4 = piVar3;
            piVar2 = piVar3 + 4;
            do {
              piVar3 = piVar2;
              iVar8 = piVar4[4];
              iVar11 = *piVar4;
              if (iVar8 < iVar11) {
                uVar9 = *(undefined8 *)(piVar4 + 6);
                piVar4 = piVar5;
                do {
                  piVar2 = piVar4;
                  piVar2[-2] = iVar11;
                  piVar4 = piVar2 + -4;
                  *(undefined8 *)piVar2 = *(undefined8 *)piVar4;
                  iVar11 = piVar2[-10];
                } while (iVar8 < iVar11);
                piVar2[-6] = iVar8;
                *(undefined8 *)piVar4 = uVar9;
              }
              piVar5 = piVar5 + 4;
              piVar4 = piVar3;
              piVar2 = piVar3 + 4;
            } while (piVar3 + 4 != param_2);
          }
          return piVar3;
        }
        if (piVar3 == param_2) {
          return piVar3;
        }
        if (piVar3 + 4 == param_2) {
          return piVar3;
        }
        lVar14 = 0;
        piVar5 = piVar3 + 4;
        piVar4 = piVar3;
        goto LAB_10934d760;
      }
      if (param_4 == 1) {
        if (piVar3 == param_2) {
          return param_1;
        }
        if (piVar3 != param_2) {
          lVar14 = (long)param_2 - (long)piVar3 >> 4;
          if (1 < lVar14) {
            uVar10 = lVar14 - 2U >> 1;
            lVar15 = uVar10 + 1;
            piVar5 = piVar3 + uVar10 * 4;
            do {
              FUN_10934deec(piVar3,param_3,lVar14,piVar5);
              piVar5 = piVar5 + -4;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          piVar5 = param_2;
          if (1 < lVar14) {
            do {
              piVar2 = piVar5 + -4;
              iVar8 = *piVar3;
              uVar9 = *(undefined8 *)(piVar3 + 2);
              piVar4 = piVar3;
              func_0x00010934dfc4(piVar3,param_3,lVar14);
              if (piVar2 == piVar4) {
                *piVar4 = iVar8;
                *(undefined8 *)(piVar4 + 2) = uVar9;
              }
              else {
                *piVar4 = *piVar2;
                *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar5 + -2);
                *piVar2 = iVar8;
                *(undefined8 *)(piVar5 + -2) = uVar9;
                func_0x00010934e038(piVar3,piVar4 + 4,param_3,(long)(piVar4 + 4) - (long)piVar3 >> 4
                                   );
              }
              bVar1 = 2 < lVar14;
              lVar14 = lVar14 + -1;
              piVar5 = piVar2;
            } while (bVar1);
          }
        }
        return param_2;
      }
      piVar5 = piVar3 + (uVar10 >> 1) * 4;
      iVar8 = param_2[-4];
      if (uVar10 < 0x81) {
        iVar11 = *piVar3;
        iVar7 = *piVar5;
        if (iVar11 < iVar7) {
          if (iVar8 < iVar11) {
            *piVar5 = iVar8;
            param_2[-4] = iVar7;
            uVar9 = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar5 = iVar11;
            *piVar3 = iVar7;
            uVar9 = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar3 + 2);
            *(undefined8 *)(piVar3 + 2) = uVar9;
            if (iVar7 <= param_2[-4]) goto joined_r0x00010934d020;
            *piVar3 = param_2[-4];
            param_2[-4] = iVar7;
            *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + -2);
          }
          *(undefined8 *)(param_2 + -2) = uVar9;
        }
        else if (iVar8 < iVar11) {
          *piVar3 = iVar8;
          param_2[-4] = iVar11;
          uVar9 = *(undefined8 *)(piVar3 + 2);
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = *piVar5;
          if (*piVar3 < iVar8) {
            *piVar5 = *piVar3;
            *piVar3 = iVar8;
            uVar9 = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar3 + 2);
            *(undefined8 *)(piVar3 + 2) = uVar9;
          }
        }
      }
      else {
        iVar11 = *piVar5;
        iVar7 = *piVar3;
        if (iVar11 < iVar7) {
          if (iVar8 < iVar11) {
            *piVar3 = iVar8;
            param_2[-4] = iVar7;
            uVar9 = *(undefined8 *)(piVar3 + 2);
            *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar3 = iVar11;
            *piVar5 = iVar7;
            uVar9 = *(undefined8 *)(piVar3 + 2);
            *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = uVar9;
            if (iVar7 <= param_2[-4]) goto LAB_10934cf64;
            *piVar5 = param_2[-4];
            param_2[-4] = iVar7;
            *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(param_2 + -2);
          }
          *(undefined8 *)(param_2 + -2) = uVar9;
        }
        else if (iVar8 < iVar11) {
          *piVar5 = iVar8;
          param_2[-4] = iVar11;
          uVar9 = *(undefined8 *)(piVar5 + 2);
          *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = *piVar3;
          if (*piVar5 < iVar8) {
            *piVar3 = *piVar5;
            *piVar5 = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 2);
            *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = uVar9;
          }
        }
LAB_10934cf64:
        iVar11 = piVar5[-4];
        iVar8 = piVar3[4];
        iVar7 = param_2[-8];
        if (iVar11 < iVar8) {
          if (iVar7 < iVar11) {
            piVar3[4] = iVar7;
            param_2[-8] = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 6);
            *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(param_2 + -6);
            *(undefined8 *)(param_2 + -6) = uVar9;
          }
          else {
            piVar3[4] = iVar11;
            piVar5[-4] = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 6);
            *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)(piVar5 + -2) = uVar9;
            if (param_2[-8] < iVar8) {
              piVar5[-4] = param_2[-8];
              param_2[-8] = iVar8;
              *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(param_2 + -6);
              *(undefined8 *)(param_2 + -6) = uVar9;
            }
          }
        }
        else if (iVar7 < iVar11) {
          piVar5[-4] = iVar7;
          param_2[-8] = iVar11;
          uVar9 = *(undefined8 *)(piVar5 + -2);
          *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)(param_2 + -6) = uVar9;
          iVar8 = piVar3[4];
          if (piVar5[-4] < iVar8) {
            piVar3[4] = piVar5[-4];
            piVar5[-4] = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 6);
            *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)(piVar5 + -2) = uVar9;
          }
        }
        iVar8 = piVar5[4];
        iVar11 = piVar3[8];
        iVar7 = param_2[-0xc];
        if (iVar8 < iVar11) {
          if (iVar7 < iVar8) {
            piVar3[8] = iVar7;
            param_2[-0xc] = iVar11;
            uVar9 = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(param_2 + -10);
            *(undefined8 *)(param_2 + -10) = uVar9;
          }
          else {
            piVar3[8] = iVar8;
            piVar5[4] = iVar11;
            uVar9 = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar5 + 6);
            *(undefined8 *)(piVar5 + 6) = uVar9;
            if (param_2[-0xc] < iVar11) {
              piVar5[4] = param_2[-0xc];
              param_2[-0xc] = iVar11;
              *(undefined8 *)(piVar5 + 6) = *(undefined8 *)(param_2 + -10);
              *(undefined8 *)(param_2 + -10) = uVar9;
            }
          }
        }
        else if (iVar7 < iVar8) {
          piVar5[4] = iVar7;
          param_2[-0xc] = iVar8;
          uVar9 = *(undefined8 *)(piVar5 + 6);
          *(undefined8 *)(piVar5 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)(param_2 + -10) = uVar9;
          iVar8 = piVar3[8];
          if (piVar5[4] < iVar8) {
            piVar3[8] = piVar5[4];
            piVar5[4] = iVar8;
            uVar9 = *(undefined8 *)(piVar3 + 10);
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar5 + 6);
            *(undefined8 *)(piVar5 + 6) = uVar9;
          }
        }
        iVar8 = *piVar5;
        iVar7 = piVar5[-4];
        iVar11 = piVar5[4];
        if (iVar8 < iVar7) {
          if (iVar11 < iVar8) {
            piVar5[-4] = iVar11;
            piVar5[4] = iVar7;
            uVar9 = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(piVar5 + 6);
            *(undefined8 *)(piVar5 + 6) = uVar9;
          }
          else {
            piVar5[-4] = iVar8;
            *piVar5 = iVar7;
            uVar9 = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(piVar5 + 2);
            *(undefined8 *)(piVar5 + 2) = uVar9;
            iVar8 = iVar7;
            if (iVar11 < iVar7) {
              *piVar5 = iVar11;
              piVar5[4] = iVar7;
              *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar5 + 6);
              *(undefined8 *)(piVar5 + 6) = uVar9;
              iVar8 = iVar11;
            }
          }
        }
        else if (iVar11 < iVar8) {
          *piVar5 = iVar11;
          piVar5[4] = iVar8;
          uVar12 = *(undefined8 *)(piVar5 + 2);
          uVar9 = *(undefined8 *)(piVar5 + 6);
          *(undefined8 *)(piVar5 + 2) = uVar9;
          *(undefined8 *)(piVar5 + 6) = uVar12;
          iVar8 = iVar11;
          if (iVar11 < iVar7) {
            piVar5[-4] = iVar11;
            *piVar5 = iVar7;
            uVar12 = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)(piVar5 + -2) = uVar9;
            *(undefined8 *)(piVar5 + 2) = uVar12;
            iVar8 = iVar7;
          }
        }
        iVar11 = *piVar3;
        *piVar3 = iVar8;
        *piVar5 = iVar11;
        uVar9 = *(undefined8 *)(piVar3 + 2);
        *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar5 + 2);
        *(undefined8 *)(piVar5 + 2) = uVar9;
      }
joined_r0x00010934d020:
      if (((param_5 & 1) == 0) && (*piVar3 <= piVar3[-4])) {
        func_0x00010934d840(piVar3,param_2,param_3);
        piVar5 = piVar3;
        goto LAB_10934d284;
      }
      piVar4 = piVar3;
      piVar5 = param_2;
      func_0x00010934d910(piVar3,param_2,param_3);
      if (((ulong)piVar5 & 1) == 0) break;
      piVar2 = piVar3;
      FUN_10934d9e8(piVar3,piVar4,param_3);
      piVar5 = piVar4 + 4;
      param_1 = piVar5;
      FUN_10934d9e8(piVar5,param_2,param_3);
      if ((int)param_1 != 0) {
        param_4 = -param_4;
        param_2 = piVar4;
        if (((ulong)piVar2 & 1) != 0) {
          return param_1;
        }
        goto LAB_10934cdc8;
      }
    } while (((ulong)piVar2 & 1) != 0);
    FUN_10934cd94(piVar3,piVar4,param_3,-param_4,param_5 & 1);
    piVar5 = piVar4 + 4;
LAB_10934d284:
    param_5 = 0;
    param_4 = -param_4;
    param_1 = piVar3;
    piVar3 = piVar5;
  } while( true );
LAB_10934d760:
  piVar2 = piVar5;
  iVar8 = piVar4[4];
  iVar11 = *piVar4;
  if (iVar8 < iVar11) {
    uVar9 = *(undefined8 *)(piVar4 + 6);
    lVar15 = lVar14;
    do {
      lVar13 = lVar15;
      *(int *)((long)piVar3 + lVar13 + 0x10) = iVar11;
      *(undefined8 *)((long)piVar3 + lVar13 + 0x18) = *(undefined8 *)((long)piVar3 + lVar13 + 8);
      piVar5 = piVar3;
      if (lVar13 == 0) goto LAB_10934d7b0;
      iVar11 = *(int *)((long)piVar3 + lVar13 + -0x10);
      lVar15 = lVar13 + -0x10;
    } while (iVar8 < iVar11);
    piVar5 = (int *)((long)piVar3 + lVar13);
LAB_10934d7b0:
    *piVar5 = iVar8;
    *(undefined8 *)(piVar5 + 2) = uVar9;
  }
  piVar5 = piVar2 + 4;
  lVar14 = lVar14 + 0x10;
  piVar4 = piVar2;
  if (piVar5 == param_2) {
    return piVar3;
  }
  goto LAB_10934d760;
}



/* Entry: 10934d560; end: 10934d9e7;  */

void FUN_10934d560(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  iVar3 = *param_3;
  if (iVar1 < iVar2) {
    if (iVar3 < iVar1) {
      *param_1 = iVar3;
      *param_3 = iVar2;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = uVar4;
      iVar3 = iVar2;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar4;
      iVar3 = *param_3;
      if (iVar3 < iVar2) {
        *param_2 = iVar3;
        *param_3 = iVar2;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_3 + 2) = uVar4;
        iVar3 = iVar2;
      }
    }
  }
  else if (iVar3 < iVar1) {
    *param_2 = iVar3;
    *param_3 = iVar1;
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = uVar4;
    iVar2 = *param_1;
    iVar3 = iVar1;
    if (*param_2 < iVar2) {
      *param_1 = *param_2;
      *param_2 = iVar2;
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar4;
      iVar3 = *param_3;
    }
  }
  if (*param_4 < iVar3) {
    *param_3 = *param_4;
    *param_4 = iVar3;
    uVar4 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_4 + 2) = uVar4;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = uVar4;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        *param_1 = *param_2;
        *param_2 = iVar1;
        uVar4 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = uVar4;
      }
    }
  }
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    uVar4 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_5 + 2) = uVar4;
    iVar1 = *param_3;
    if (*param_4 < iVar1) {
      *param_3 = *param_4;
      *param_4 = iVar1;
      uVar4 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)(param_4 + 2) = uVar4;
      iVar1 = *param_2;
      if (*param_3 < iVar1) {
        *param_2 = *param_3;
        *param_3 = iVar1;
        uVar4 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_3 + 2) = uVar4;
        iVar1 = *param_1;
        if (*param_2 < iVar1) {
          *param_1 = *param_2;
          *param_2 = iVar1;
          uVar4 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)(param_2 + 2) = uVar4;
        }
      }
    }
  }
  return;
}



/* Entry: 10934d9e8; end: 10934dd8f;  */

bool FUN_10934d9e8(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 != 2) {
LAB_10934da94:
      iVar12 = param_1[8];
      iVar10 = param_1[4];
      iVar2 = *param_1;
      if (iVar10 < iVar2) {
        if (iVar12 < iVar10) {
          *param_1 = iVar12;
          param_1[8] = iVar2;
          uVar6 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)(param_1 + 10) = uVar6;
        }
        else {
          *param_1 = iVar10;
          param_1[4] = iVar2;
          uVar6 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 6) = uVar6;
          if (iVar12 < iVar2) {
            param_1[4] = iVar12;
            param_1[8] = iVar2;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)(param_1 + 10) = uVar6;
          }
        }
      }
      else if (iVar12 < iVar10) {
        param_1[4] = iVar12;
        param_1[8] = iVar10;
        uVar11 = *(undefined8 *)(param_1 + 6);
        uVar6 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 6) = uVar6;
        *(undefined8 *)(param_1 + 10) = uVar11;
        if (iVar12 < iVar2) {
          *param_1 = iVar12;
          param_1[4] = iVar2;
          uVar11 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = uVar6;
          *(undefined8 *)(param_1 + 6) = uVar11;
        }
      }
      if (param_1 + 0xc == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      piVar7 = param_1 + 8;
      piVar8 = param_1 + 0xc;
      do {
        iVar2 = *piVar8;
        iVar12 = *piVar7;
        if (iVar2 < iVar12) {
          uVar6 = *(undefined8 *)(piVar8 + 2);
          lVar3 = lVar9;
          do {
            lVar13 = lVar3;
            *(int *)((long)param_1 + lVar13 + 0x30) = iVar12;
            *(undefined8 *)((long)param_1 + lVar13 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x28);
            piVar7 = param_1;
            if (lVar13 == -0x20) goto LAB_10934dc9c;
            iVar12 = *(int *)((long)param_1 + lVar13 + 0x10);
            lVar3 = lVar13 + -0x10;
          } while (iVar2 < iVar12);
          piVar7 = (int *)((long)param_1 + lVar13 + 0x20);
LAB_10934dc9c:
          *piVar7 = iVar2;
          *(undefined8 *)(piVar7 + 2) = uVar6;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return piVar8 + 4 == param_2;
          }
        }
        piVar1 = piVar8 + 4;
        lVar9 = lVar9 + 0x10;
        piVar7 = piVar8;
        piVar8 = piVar1;
        if (piVar1 == param_2) {
          return true;
        }
      } while( true );
    }
    iVar10 = *param_1;
    if (iVar10 <= param_2[-4]) {
      return true;
    }
    *param_1 = param_2[-4];
    param_2[-4] = iVar10;
LAB_10934da80:
    uVar6 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_2 + -2) = uVar6;
  }
  else {
    if (uVar5 == 3) {
      iVar10 = param_1[4];
      iVar2 = *param_1;
      iVar12 = param_2[-4];
      if (iVar10 < iVar2) {
        if (iVar10 <= iVar12) {
          *param_1 = iVar10;
          param_1[4] = iVar2;
          uVar6 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 6) = uVar6;
          if (iVar2 <= param_2[-4]) {
            return true;
          }
          param_1[4] = param_2[-4];
          param_2[-4] = iVar2;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar6;
          return true;
        }
        *param_1 = iVar12;
        param_2[-4] = iVar2;
        goto LAB_10934da80;
      }
      if (iVar10 <= iVar12) {
        return true;
      }
      param_1[4] = iVar12;
      param_2[-4] = iVar10;
      uVar6 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar6;
      iVar10 = *param_1;
      if (iVar10 <= param_1[4]) {
        return true;
      }
      *param_1 = param_1[4];
      param_1[4] = iVar10;
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar11 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (uVar5 != 4) {
        if (uVar5 == 5) {
          FUN_10934d560(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4,param_3);
          return true;
        }
        goto LAB_10934da94;
      }
      iVar10 = param_1[4];
      iVar2 = *param_1;
      iVar12 = param_1[8];
      iVar4 = iVar12;
      if (iVar10 < iVar2) {
        if (iVar12 < iVar10) {
          *param_1 = iVar12;
          param_1[8] = iVar2;
          uVar6 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        }
        else {
          *param_1 = iVar10;
          param_1[4] = iVar2;
          uVar6 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 6) = uVar6;
          if (iVar2 <= iVar12) goto LAB_10934dd08;
          param_1[4] = iVar12;
          param_1[8] = iVar2;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        }
        *(undefined8 *)(param_1 + 10) = uVar6;
        iVar4 = iVar2;
      }
      else if (iVar12 < iVar10) {
        param_1[4] = iVar12;
        param_1[8] = iVar10;
        uVar11 = *(undefined8 *)(param_1 + 6);
        uVar6 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 6) = uVar6;
        *(undefined8 *)(param_1 + 10) = uVar11;
        iVar4 = iVar10;
        if (iVar12 < iVar2) {
          *param_1 = iVar12;
          param_1[4] = iVar2;
          uVar11 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 2) = uVar6;
          *(undefined8 *)(param_1 + 6) = uVar11;
        }
      }
LAB_10934dd08:
      if (iVar4 <= param_2[-4]) {
        return true;
      }
      param_1[8] = param_2[-4];
      param_2[-4] = iVar4;
      uVar6 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar6;
      iVar10 = param_1[8];
      iVar2 = param_1[4];
      if (iVar2 <= iVar10) {
        return true;
      }
      param_1[4] = iVar10;
      param_1[8] = iVar2;
      uVar6 = *(undefined8 *)(param_1 + 6);
      uVar11 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 6) = uVar11;
      *(undefined8 *)(param_1 + 10) = uVar6;
      iVar2 = *param_1;
      if (iVar2 <= iVar10) {
        return true;
      }
      *param_1 = iVar10;
      param_1[4] = iVar2;
      uVar6 = *(undefined8 *)(param_1 + 2);
    }
    *(undefined8 *)(param_1 + 2) = uVar11;
    *(undefined8 *)(param_1 + 6) = uVar6;
  }
  return true;
}



/* Entry: 10934dd90; end: 10934deeb;  */

int * FUN_10934dd90(int *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  
  piVar8 = param_3;
  if (param_1 != param_2) {
    lVar6 = (long)param_2 - (long)param_1 >> 4;
    piVar8 = param_2;
    if (1 < lVar6) {
      uVar4 = lVar6 - 2U >> 1;
      lVar9 = uVar4 + 1;
      piVar3 = param_1 + uVar4 * 4;
      do {
        FUN_10934deec(param_1,param_4,lVar6,piVar3);
        piVar3 = piVar3 + -4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    for (; piVar8 != param_3; piVar8 = piVar8 + 4) {
      iVar2 = *piVar8;
      if (iVar2 < *param_1) {
        *piVar8 = *param_1;
        *param_1 = iVar2;
        uVar5 = *(undefined8 *)(piVar8 + 2);
        *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = uVar5;
        FUN_10934deec(param_1,param_4,lVar6,param_1);
      }
    }
    if (1 < lVar6) {
      do {
        piVar7 = param_2 + -4;
        iVar2 = *param_1;
        uVar5 = *(undefined8 *)(param_1 + 2);
        piVar3 = param_1;
        func_0x00010934dfc4(param_1,param_4,lVar6);
        if (piVar7 == piVar3) {
          *piVar3 = iVar2;
          *(undefined8 *)(piVar3 + 2) = uVar5;
        }
        else {
          *piVar3 = *piVar7;
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + -2);
          *piVar7 = iVar2;
          *(undefined8 *)(param_2 + -2) = uVar5;
          func_0x00010934e038(param_1,piVar3 + 4,param_4,(long)(piVar3 + 4) - (long)param_1 >> 4);
        }
        bVar1 = 2 < lVar6;
        lVar6 = lVar6 + -1;
        param_2 = piVar7;
      } while (bVar1);
    }
  }
  return piVar8;
}



/* Entry: 10934deec; end: 10934e09b;  */

void FUN_10934deec(long param_1,undefined8 param_2,long param_3,int *param_4)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  
  if (1 < param_3) {
    uVar6 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar6) {
      lVar10 = (long)param_4 - param_1 >> 3;
      uVar1 = lVar10 + 1;
      piVar7 = (int *)(param_1 + uVar1 * 0x10);
      uVar9 = lVar10 + 2;
      if ((long)uVar9 < param_3) {
        iVar3 = *piVar7;
        iVar4 = piVar7[4];
        iVar12 = iVar3;
        if (iVar3 <= iVar4) {
          iVar12 = iVar4;
        }
        piVar8 = piVar7 + 4;
        if (iVar4 <= iVar3) {
          piVar8 = piVar7;
          uVar9 = uVar1;
        }
      }
      else {
        iVar12 = *piVar7;
        piVar8 = piVar7;
        uVar9 = uVar1;
      }
      iVar3 = *param_4;
      if (iVar3 <= iVar12) {
        uVar11 = *(undefined8 *)(param_4 + 2);
        do {
          piVar7 = piVar8;
          *param_4 = iVar12;
          *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar7 + 2);
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          piVar2 = (int *)(param_1 + uVar1 * 0x10);
          uVar9 = uVar9 * 2 + 2;
          if ((long)uVar9 < param_3) {
            iVar4 = *piVar2;
            iVar5 = piVar2[4];
            iVar12 = iVar4;
            if (iVar4 <= iVar5) {
              iVar12 = iVar5;
            }
            piVar8 = piVar2 + 4;
            if (iVar5 <= iVar4) {
              piVar8 = piVar2;
              uVar9 = uVar1;
            }
          }
          else {
            iVar12 = *piVar2;
            piVar8 = piVar2;
            uVar9 = uVar1;
          }
          param_4 = piVar7;
        } while (iVar3 <= iVar12);
        *piVar7 = iVar3;
        *(undefined8 *)(piVar7 + 2) = uVar11;
      }
    }
  }
  return;
}


