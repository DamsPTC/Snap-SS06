/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10934e09c; end: 10934e19b;  */

void FUN_10934e09c(int *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  ulong uStack_58;
  long lStack_50;
  uint uStack_48;
  
  uStack_48 = *(uint *)(param_2 + 0xc);
  if (uStack_48 != *(uint *)(param_2 + 4)) {
    uStack_58 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_48 * 8);
    lStack_50 = param_2;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      uVar1 = uStack_58;
      iVar4 = *(int *)(uStack_58 + 0xc);
      uVar3 = (ulong)*(uint *)(uStack_58 + 8);
      piVar2 = param_1;
      func_0x000105689068(param_1,uVar3,0);
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
        func_0x000105689120(param_1,*param_1 + 1);
        if ((int)piVar2 != 0) {
          uVar3 = (ulong)*(uint *)(uVar1 + 8);
          func_0x000105689068(param_1,uVar3,0);
        }
        piVar2 = param_1;
        func_0x000107c27d64(param_1,0x10);
        piVar2[2] = *(int *)(uVar1 + 8);
        piVar2[3] = 0;
        func_0x0001056891b0(param_1,uVar3,piVar2);
        *param_1 = *param_1 + 1;
      }
      piVar2[3] = iVar4;
      func_0x000107c27d54(&uStack_58);
    } while (uStack_58 != 0);
  }
  return;
}



/* Entry: 10934e19c; end: 10934e1e3;  */

long FUN_10934e19c(long param_1)

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



/* Entry: 10934e1e4; end: 10934e1e7;  */

long FUN_10934e1e4(long param_1)

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



/* Entry: 10934e1e8; end: 10934e1fb;  */

void FUN_10934e1e8(void)

{
  FUN_10934e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934e1fc; end: 10934e21f;  */

undefined ** FUN_10934e1fc(void)

{
  return &PTR_DAT_110af1558;
}



/* Entry: 10934e220; end: 10934e58f;  */

byte * FUN_10934e220(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar15 = *(int *)(param_1 + 0x10);
  if (0 < iVar15) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      iVar15 = *(int *)(param_1 + 0x10);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    uVar4 = uVar13;
    uVar7 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar6 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar7 = (uint)uVar4;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar7;
    lVar14 = *(long *)(param_1 + 0x18);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_10934e474:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10934e454:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_10934e454;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10934e474;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    pbVar3 = (byte *)*param_3;
    if (param_2 < pbVar3) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x20);
    }
    *param_2 = 0x10;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar14 = *(long *)(uVar4 + 8);
      uVar13 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar14 = uVar4 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar15 = (int)pbVar3;
          _memcpy(param_2,lVar14,(long)iVar15);
          uVar12 = (int)uVar13 - iVar15;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar15;
          pbVar3 = (byte *)*param_3;
          pbVar11 = param_2 + iVar15;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar1 + (long)((int)pbVar11 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar14,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar14,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 10934e590; end: 10934e5f3;  */

long FUN_10934e590(long param_1)

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
  lVar2 = lVar2 + (ulong)uVar1 * 4 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10934e5f4; end: 10934e75f;  */

void FUN_10934e5f4(long param_1,long param_2)

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
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
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



/* Entry: 10934e760; end: 10934e7ab;  */

long FUN_10934e760(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10934f378();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10934e19c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10934e7ac; end: 10934e7af;  */

long FUN_10934e7ac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10934f378();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10934e19c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10934e7b0; end: 10934e7c3;  */

void FUN_10934e7b0(void)

{
  FUN_10934e760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934e7c4; end: 10934e7cf;  */

undefined ** FUN_10934e7c4(void)

{
  return &PTR_DAT_110af15a0;
}



/* Entry: 10934e7d0; end: 10934e83b;  */

void FUN_10934e7d0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10934e83c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010934e208(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10934e83c; end: 10934e853;  */

void FUN_10934e83c(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10934e854; end: 10934ef1f;  */

byte * FUN_10934e854(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  
  iVar11 = *(int *)(param_1 + 0x28);
  if (iVar11 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      iVar11 = *(int *)(param_1 + 0x28);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  iVar11 = *(int *)(param_1 + 0x2c);
  if (iVar11 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      iVar11 = *(int *)(param_1 + 0x2c);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  iVar11 = *(int *)(param_1 + 0x30);
  if (iVar11 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      iVar11 = *(int *)(param_1 + 0x30);
    }
    *param_2 = 0x1d;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  iVar11 = *(int *)(param_1 + 0x34);
  if (iVar11 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      iVar11 = *(int *)(param_1 + 0x34);
    }
    *param_2 = 0x25;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  iVar11 = *(int *)(param_1 + 0x38);
  if (iVar11 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      iVar11 = *(int *)(param_1 + 0x38);
    }
    *param_2 = 0x2d;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pbVar3 = param_3;
    func_0x00010598f468(param_3,*(int *)(param_1 + 0x3c),param_2);
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    pbVar4 = *(byte **)param_3;
    if (pbVar3 < pbVar4) {
      bVar1 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar3);
      bVar1 = *(byte *)(param_1 + 0x40);
    }
    *pbVar3 = 0x40;
    pbVar3[1] = bVar1;
    pbVar3 = pbVar3 + 2;
  }
  iVar11 = *(int *)(param_1 + 0x44);
  if (iVar11 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar3);
      iVar11 = *(int *)(param_1 + 0x44);
    }
    *pbVar3 = 0x4d;
    *(int *)(pbVar3 + 1) = iVar11;
    pbVar3 = pbVar3 + 5;
  }
  iVar11 = *(int *)(param_1 + 0x48);
  if (iVar11 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar3);
      iVar11 = *(int *)(param_1 + 0x48);
    }
    *pbVar3 = 0x55;
    *(int *)(pbVar3 + 1) = iVar11;
    pbVar3 = pbVar3 + 5;
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x4c) != 0) {
    pbVar4 = param_3;
    func_0x0001089f5418(param_3,*(int *)(param_1 + 0x4c),pbVar3);
  }
  uVar10 = *(uint *)(param_1 + 0x50);
  if (uVar10 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar8 + ((int)pbVar4 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar4);
      uVar10 = *(uint *)(param_1 + 0x50);
    }
    pbVar8 = pbVar4 + 1;
    *pbVar4 = 0x68;
    uVar6 = (ulong)(int)uVar10;
    uVar5 = uVar6;
    pbVar3 = pbVar8;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar6 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar6;
        pbVar3 = pbVar8;
      } while (uVar7 != 0);
    }
    pbVar4 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  pbVar3 = pbVar4;
  if ((uVar10 & 1) != 0) {
    pbVar3 = (byte *)0xe;
    func_0x000107c303cc(0xe,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x24),pbVar4,param_3);
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x54) != 0) {
    pbVar4 = param_3;
    FUN_10932d954(param_3,*(int *)(param_1 + 0x54),pbVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar8 + ((int)pbVar4 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar4);
      uVar2 = *(uint *)(param_1 + 0x58);
    }
    pbVar8 = pbVar4 + 2;
    pbVar4[0] = 0x80;
    pbVar4[1] = 1;
    uVar6 = (ulong)(int)uVar2;
    uVar5 = uVar6;
    pbVar3 = pbVar8;
    if (0x7f < uVar2) {
      do {
        pbVar8 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar6 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar6;
        pbVar3 = pbVar8;
      } while (uVar7 != 0);
    }
    pbVar4 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar8 + ((int)pbVar4 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar4);
      uVar2 = *(uint *)(param_1 + 0x5c);
    }
    pbVar8 = pbVar4 + 2;
    pbVar4[0] = 0x88;
    pbVar4[1] = 1;
    uVar6 = (ulong)(int)uVar2;
    uVar5 = uVar6;
    pbVar3 = pbVar8;
    if (0x7f < uVar2) {
      do {
        pbVar8 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar6 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar6;
        pbVar3 = pbVar8;
      } while (uVar7 != 0);
    }
    pbVar4 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar3 = pbVar4;
  if ((uVar10 >> 1 & 1) != 0) {
    pbVar3 = (byte *)0x12;
    func_0x000107c303cc(0x12,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),pbVar4,param_3);
  }
  uVar10 = *(uint *)(param_1 + 0x60);
  if (uVar10 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar3);
      uVar10 = *(uint *)(param_1 + 0x60);
    }
    pbVar4 = pbVar3 + 2;
    pbVar3[0] = 0x98;
    pbVar3[1] = 1;
    uVar6 = (ulong)(int)uVar10;
    uVar5 = uVar6;
    pbVar3 = pbVar4;
    if (0x7f < uVar10) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar6 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar6;
        pbVar3 = pbVar4;
      } while (uVar7 != 0);
    }
    pbVar3 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar9 = *(long *)(uVar5 + 8);
      uVar6 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar9 = uVar5 + 8;
    }
    uVar10 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar10) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar4 < (int)uVar10) {
        do {
          iVar11 = (int)pbVar4;
          _memcpy(pbVar3,lVar9,(long)iVar11);
          uVar10 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar10;
          lVar9 = lVar9 + iVar11;
          pbVar4 = *(byte **)param_3;
          pbVar8 = pbVar3 + iVar11;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar3 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar3);
        } while ((int)pbVar4 < (int)uVar10);
      }
      _memcpy(pbVar3,lVar9,(long)(int)uVar10);
      pbVar3 = pbVar3 + (int)uVar10;
    }
    else {
      _memcpy(pbVar3,lVar9,uVar6 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar10;
    }
  }
  return pbVar3;
}



/* Entry: 10934ef20; end: 10934f117;  */

void FUN_10934ef20(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_10934f708();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_10934e590();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x40) * 2;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x60)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10934f118; end: 10934f11b;  */

void FUN_10934f118(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010934f898(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10934f2c4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010934f924(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10934e5f4();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
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
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
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



/* Entry: 10934f11c; end: 10934f2c3;  */

void FUN_10934f11c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010934f898(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10934f2c4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x00010934f924(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_10934e5f4();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
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
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
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



/* Entry: 10934f2c4; end: 10934f377;  */

void FUN_10934f2c4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10934f378; end: 10934f3bf;  */

long FUN_10934f378(long param_1)

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



/* Entry: 10934f3c0; end: 10934f3c3;  */

long FUN_10934f3c0(long param_1)

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



/* Entry: 10934f3c4; end: 10934f3d7;  */

void FUN_10934f3c4(void)

{
  FUN_10934f378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934f3d8; end: 10934f3e3;  */

undefined ** FUN_10934f3d8(void)

{
  return &PTR_DAT_110af15e0;
}



/* Entry: 10934f3e4; end: 10934f707;  */

byte * FUN_10934f3e4(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar1 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    pbVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  iVar14 = *(int *)(param_1 + 0x10);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x10);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x12;
    uVar5 = uVar12;
    uVar8 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar7 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar8;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10934f5f4:
            param_3[0x38] = 1;
LAB_10934f5d4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10934f5d4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_10934f5f4;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar13 = uVar5 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar1,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar14;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar4 <= pbVar2);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar1,lVar13,(long)(int)uVar11);
      pbVar1 = pbVar1 + (int)uVar11;
    }
    else {
      _memcpy(pbVar1,lVar13,uVar12 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar11;
    }
  }
  return pbVar1;
}



/* Entry: 10934f708; end: 10934f79b;  */

long FUN_10934f708(long param_1)

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
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10934f79c; end: 10934f897;  */

void FUN_10934f79c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af1478;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10934f898; end: 10934f9af;  */

undefined8 * FUN_10934f898(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110af14c8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1093118fc(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar1;
}



/* Entry: 10934f9b0; end: 10934fa33;  */

long FUN_10934f9b0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109360ae4();
    __ZdlPv();
  }
  FUN_1093502c4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10934fa34; end: 10934fa37;  */

long FUN_10934fa34(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109360ae4();
    __ZdlPv();
  }
  FUN_1093502c4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10934fa38; end: 10934fa4b;  */

void FUN_10934fa38(void)

{
  FUN_10934f9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934fa4c; end: 10934fa57;  */

undefined ** FUN_10934fa4c(void)

{
  return &PTR_DAT_110af1708;
}



/* Entry: 10934fa58; end: 10934fadf;  */

void FUN_10934fa58(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109348f68(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109348c04(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109360b3c(*(undefined8 *)(param_1 + 0x40));
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



/* Entry: 10934fae0; end: 10934fe0b;  */

long * FUN_10934fae0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  ulong uStack_48;
  long lVar10;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 != 0) {
    iVar8 = 0;
    plVar2 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar2,param_3);
      iVar8 = iVar8 + 1;
      plVar2 = param_2;
    } while (iVar9 != iVar8);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if ((uVar4 >> 2 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      lVar10 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar10 < (int)uVar4) {
        do {
          iVar9 = (int)lVar10;
          _memcpy(plVar2,lVar3,(long)iVar9);
          uVar4 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar9;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)plVar2 + (long)iVar9);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar2 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar2 = plVar7;
          } while (plVar6 <= plVar7);
          lVar10 = (long)plVar6 + (0x10 - (long)plVar2);
        } while ((int)lVar10 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar2,lVar3,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar3,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar4);
    }
  }
  return plVar2;
}



/* Entry: 10934fe0c; end: 10934fe0f;  */

void FUN_10934fe0c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x0001093503d0(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x000109348e48();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x000109350414(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109348af4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        func_0x000109350458(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        FUN_109360dbc();
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



/* Entry: 10934fe10; end: 10934ff2b;  */

void FUN_10934fe10(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x0001093503d0(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x000109348e48();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x000109350414(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109348af4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        func_0x000109350458(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        FUN_109360dbc();
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



/* Entry: 10934ff2c; end: 10934ff9f;  */

undefined8 * FUN_10934ff2c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af16c8;
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



/* Entry: 10934ffa0; end: 10934ffd3;  */

long FUN_10934ffa0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093502f8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934ffd4; end: 10934ffd7;  */

long FUN_10934ffd4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093502f8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10934ffd8; end: 10934ffeb;  */

void FUN_10934ffd8(void)

{
  FUN_10934ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934ffec; end: 10934fff7;  */

undefined ** FUN_10934ffec(void)

{
  return &PTR_DAT_110af1740;
}



/* Entry: 10934fff8; end: 10935003f;  */

void FUN_10934fff8(long param_1)

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



/* Entry: 109350040; end: 10935025b;  */

long * FUN_109350040(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
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



/* Entry: 10935025c; end: 10935025f;  */

void FUN_10935025c(long param_1,long param_2)

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



/* Entry: 109350260; end: 1093502b3;  */

void FUN_109350260(long param_1,long param_2)

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



/* Entry: 1093502b4; end: 1093502c3;  */

void FUN_1093502b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110af1678;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 1093502c4; end: 1093502f7;  */

long * FUN_1093502c4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1093502f8; end: 10935032b;  */

long * FUN_1093502f8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10935032c; end: 10935053f;  */

void FUN_10935032c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110af1678;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 109350540; end: 109350543;  */

long FUN_109350540(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010935049c(param_1);
  }
  return param_1;
}



/* Entry: 109350544; end: 109350557;  */

void FUN_109350544(void)

{
  func_0x000109350504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109350558; end: 109350583;  */

long FUN_109350558(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109350584; end: 10935058f;  */

undefined ** FUN_109350584(void)

{
  return &PTR_DAT_110af1898;
}



/* Entry: 109350590; end: 1093505c7;  */

void FUN_109350590(long param_1)

{
  ulong *puVar1;
  
  func_0x00010935049c();
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



/* Entry: 1093505c8; end: 109350717;  */

long * FUN_1093505c8(long param_1,long *param_2,long *param_3)

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
  if (*(int *)(param_1 + 0x1c) == 1) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x1c),param_2,param_3);
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



/* Entry: 109350718; end: 10935078f;  */

void FUN_109350718(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109350ac4();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  else {
    iVar1 = 0;
  }
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



/* Entry: 109350790; end: 109350853;  */

void FUN_109350790(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_109350854(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x00010935049c(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109350f90(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 109350854; end: 109350893;  */

void FUN_109350854(long param_1,long param_2)

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



/* Entry: 109350894; end: 1093508bf;  */

void FUN_109350894(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1093508c0; end: 1093508e3;  */

undefined ** FUN_1093508c0(void)

{
  return &PTR_DAT_110af18e8;
}



/* Entry: 1093508e4; end: 109350ac3;  */

byte * FUN_1093508e4(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar2 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  pbVar7 = pbVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    pbVar7 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),pbVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x18;
    uVar3 = (ulong)(int)uVar1;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    pbVar7 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar8 = uVar4 + 8;
    }
    uVar1 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar1) {
      pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar2 < (int)uVar1) {
        do {
          iVar9 = (int)pbVar2;
          _memcpy(pbVar7,lVar8,(long)iVar9);
          uVar1 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar1;
          lVar8 = lVar8 + iVar9;
          pbVar2 = *(byte **)param_3;
          pbVar6 = pbVar7 + iVar9;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar6 = pbVar7 + ((int)pbVar6 - (int)pbVar2);
            pbVar2 = *(byte **)param_3;
            pbVar7 = pbVar6;
          } while (pbVar2 <= pbVar6);
          pbVar2 = pbVar2 + (0x10 - (long)pbVar7);
        } while ((int)pbVar2 < (int)uVar1);
      }
      uStack_48._0_4_ = uVar1;
      _memcpy(pbVar7,lVar8,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar8,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar1;
    }
  }
  return pbVar7;
}



/* Entry: 109350ac4; end: 109350b53;  */

ulong FUN_109350ac4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 109350b54; end: 109350b87;  */

long FUN_109350b54(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109350e7c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109350b88; end: 109350b8b;  */

long FUN_109350b88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109350e7c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109350b8c; end: 109350b9f;  */

void FUN_109350b8c(void)

{
  FUN_109350b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109350ba0; end: 109350bab;  */

undefined ** FUN_109350ba0(void)

{
  return &PTR_DAT_110af1938;
}



/* Entry: 109350bac; end: 109350bf3;  */

void FUN_109350bac(long param_1)

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



/* Entry: 109350bf4; end: 109350e0f;  */

long * FUN_109350bf4(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),plVar6,param_3);
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



/* Entry: 109350e10; end: 109350e63;  */

void FUN_109350e10(long param_1,long param_2)

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



/* Entry: 109350e64; end: 109350e7b;  */

void FUN_109350e64(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af17b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 109350e7c; end: 109350eaf;  */

long * FUN_109350e7c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109350eb0; end: 109350f8f;  */

void FUN_109350eb0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af17b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 109350f90; end: 109351017;  */

undefined8 * FUN_109350f90(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af17b8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_109350854();
  return puVar1;
}



/* Entry: 109351018; end: 1093510ef;  */

void FUN_109351018(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_1093510b0;
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_1093510b0;
    FUN_109351ba8(lVar3);
  }
  else {
    if (iVar1 != 1) goto LAB_1093510b0;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_1093510b0;
    FUN_109351730(lVar3);
  }
  __ZdlPv(lVar3);
LAB_1093510b0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1093510f0; end: 109351197;  */

undefined8 * FUN_1093510f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af1ac8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 3) {
    FUN_109352514(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else if (iVar1 == 2) {
    func_0x000109352484(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    FUN_1093523ec(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 109351198; end: 1093511d3;  */

long FUN_109351198(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109351018(param_1);
  }
  return param_1;
}



/* Entry: 1093511d4; end: 1093511d7;  */

long FUN_1093511d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109351018(param_1);
  }
  return param_1;
}



/* Entry: 1093511d8; end: 1093511eb;  */

void FUN_1093511d8(void)

{
  FUN_109351198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093511ec; end: 1093511f3;  */

long FUN_1093511ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093511f4; end: 10935121f;  */

long FUN_1093511f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109351220; end: 10935122b;  */

undefined ** FUN_109351220(void)

{
  return &PTR_DAT_110af1b08;
}



/* Entry: 10935122c; end: 109351263;  */

void FUN_10935122c(long param_1)

{
  ulong *puVar1;
  
  FUN_109351018();
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



/* Entry: 109351264; end: 1093513bb;  */

long * FUN_109351264(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)((*(long *)(param_1 + 0x10) - (ulong)(uVar3 * 0x10)) + 0x38),
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



/* Entry: 1093513bc; end: 10935145b;  */

void FUN_1093513bc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109352230();
  }
  else if (iVar1 == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109351f0c();
  }
  else {
    if (iVar1 != 1) {
      iVar1 = 0;
      goto LAB_10935142c;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109351a94();
  }
  iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
LAB_10935142c:
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



/* Entry: 10935145c; end: 10935145f;  */

void FUN_10935145c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109351578;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109351018(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 3) {
        ppuVar1 = &PTR_PTR_1132db4e8;
      }
      FUN_1093516f8(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    FUN_109352514(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1132db478;
      }
      FUN_109351644(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    func_0x000109352484(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_109351578;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_1132db4a8;
      }
      FUN_1093515c0(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    FUN_1093523ec(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_109351578:
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



/* Entry: 109351460; end: 1093515bf;  */

void FUN_109351460(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109351578;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109351018(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 3) {
        ppuVar1 = &PTR_PTR_1132db4e8;
      }
      FUN_1093516f8(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    FUN_109352514(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1132db478;
      }
      FUN_109351644(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    func_0x000109352484(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_109351578;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_1132db4a8;
      }
      FUN_1093515c0(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109351578;
    }
    FUN_1093523ec(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_109351578:
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



/* Entry: 1093515c0; end: 109351643;  */

void FUN_1093515c0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 109351644; end: 1093516f7;  */

void FUN_109351644(long param_1,long param_2)

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



/* Entry: 1093516f8; end: 10935172f;  */

void FUN_1093516f8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
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



/* Entry: 109351730; end: 109351763;  */

long FUN_109351730(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109351764; end: 109351777;  */

void FUN_109351764(void)

{
  FUN_109351730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109351778; end: 109351783;  */

undefined ** FUN_109351778(void)

{
  return &PTR_DAT_110af1b40;
}



/* Entry: 109351784; end: 1093517cf;  */

void FUN_109351784(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 1093517d0; end: 109351a93;  */

byte * FUN_1093517d0(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar13 = 8;
    pbVar8 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar10 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar10 + 0x17);
      puVar2 = puVar10;
      if (lVar4 < 0) {
        lVar4 = puVar10[1];
        puVar2 = (undefined8 *)*puVar10;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5667ff);
      lVar4 = (long)*(char *)((long)puVar10 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar10[1], 0x7f < lVar4)) ||
         ((*(long *)param_3 - (long)pbVar8) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,puVar10,pbVar8);
      }
      else {
        *pbVar8 = 10;
        pbVar8[1] = (byte)lVar4;
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          puVar10 = (undefined8 *)*puVar10;
        }
        _memcpy(pbVar8 + 2,puVar10,lVar4);
        param_2 = pbVar8 + 2 + lVar4;
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      pbVar8 = param_2;
    } while (uVar12 != 0);
  }
  pbVar8 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    pbVar8 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x28),param_2);
  }
  pbVar6 = pbVar8;
  if (*(int *)(param_1 + 0x2c) != 0) {
    pbVar6 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x2c),pbVar8);
  }
  pbVar8 = pbVar6;
  if (*(int *)(param_1 + 0x30) != 0) {
    pbVar8 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x30),pbVar6);
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  if (uVar9 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar8);
      uVar9 = *(uint *)(param_1 + 0x34);
    }
    pbVar6 = pbVar8 + 1;
    *pbVar8 = 0x28;
    uVar5 = (ulong)(int)uVar9;
    uVar12 = uVar5;
    pbVar8 = pbVar6;
    if (0x7f < uVar9) {
      do {
        pbVar6 = pbVar8 + 1;
        *pbVar8 = (byte)uVar12 | 0x80;
        uVar5 = uVar12 >> 7;
        uVar7 = uVar12 >> 0xe;
        uVar12 = uVar5;
        pbVar8 = pbVar6;
      } while (uVar7 != 0);
    }
    pbVar8 = pbVar6 + 1;
    *pbVar6 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar12 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar13 = *(long *)(uVar12 + 8);
      uVar5 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      lVar13 = uVar12 + 8;
    }
    uVar9 = (uint)uVar5;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar9) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar9) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(pbVar8,lVar13,(long)iVar11);
          uVar9 = (int)uVar5 - iVar11;
          uVar5 = (ulong)uVar9;
          lVar13 = lVar13 + iVar11;
          pbVar6 = *(byte **)param_3;
          pbVar3 = pbVar8 + iVar11;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar8 = pbVar3;
          } while (pbVar6 <= pbVar3);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar9);
      }
      _memcpy(pbVar8,lVar13,(long)(int)uVar9);
      pbVar8 = pbVar8 + (int)uVar9;
    }
    else {
      _memcpy(pbVar8,lVar13,uVar5 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar9;
    }
  }
  return pbVar8;
}



/* Entry: 109351a94; end: 109351ba7;  */

ulong FUN_109351a94(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar8;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar4 = uVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
  }
  *(int *)(param_1 + 0x38) = (int)uVar4;
  return uVar4;
}



/* Entry: 109351ba8; end: 109351bef;  */

long FUN_109351ba8(long param_1)

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



/* Entry: 109351bf0; end: 109351c03;  */

void FUN_109351bf0(void)

{
  FUN_109351ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109351c04; end: 109351c27;  */

undefined ** FUN_109351c04(void)

{
  return &PTR_DAT_110af1b78;
}



/* Entry: 109351c28; end: 109351f0b;  */

byte * FUN_109351c28(long param_1,byte *param_2,byte *param_3)

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
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (uVar12 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar6 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
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
    puVar13 = *(uint **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109351ce4:
            param_3[0x38] = 1;
LAB_109351d7c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar7 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              *(byte **)(param_3 + 8) = pbVar10;
              goto LAB_109351d7c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109351ce4;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = (ulong)(int)*puVar14;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < *puVar14) {
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
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x24) != 0) {
    pbVar3 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x24),param_2);
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
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar6 = *(byte **)param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar3 + ((int)pbVar10 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
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



/* Entry: 109351f0c; end: 109351fcb;  */

long FUN_109351f0c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = (long)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = 0;
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar4 >> 0x1e))) * -9
                      + 0x280U >> 6) + lVar2;
      lVar4 = lVar4 + 0x100000000;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    if (lVar2 != 0) {
      lVar1 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
      goto LAB_109351f7c;
    }
  }
  lVar1 = 0;
LAB_109351f7c:
  *(int *)(param_1 + 0x20) = (int)lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 109351fcc; end: 109351ff7;  */

void FUN_109351fcc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


