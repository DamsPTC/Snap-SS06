/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093412d8; end: 10934130b;  */

undefined ** FUN_1093412d8(void)

{
  return &PTR_DAT_110aefc98;
}



/* Entry: 10934130c; end: 1093415ab;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10934130c(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar2 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar7 >> 1 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar2 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar7 >> 2 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar2 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar2 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x25;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if ((uVar7 >> 4 & 1) != 0) {
    plVar3 = param_3;
    func_0x0001088b96ec(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar6 = *(long *)(uVar4 + 8);
      uVar8 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar6 = uVar4 + 8;
    }
    uVar7 = (uint)uVar8;
    if (*param_3 - (long)plVar3 < (long)(int)uVar7) {
      puVar10 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar10 < (int)uVar7) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(plVar3,lVar6,(long)iVar9);
          uVar7 = (int)uVar8 - iVar9;
          uVar8 = (ulong)uVar7;
          lVar6 = lVar6 + iVar9;
          plVar5 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar9);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar5 <= plVar2);
          puVar10 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar3));
        } while ((int)puVar10 < (int)uVar7);
      }
      _memcpy(plVar3,lVar6,(long)(int)uVar7);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar3,lVar6,uVar8 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar7);
    }
  }
  return plVar3;
}



/* Entry: 1093415ac; end: 10934163f;  */

long FUN_1093415ac(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if ((uVar1 & 1) != 0) {
      lVar2 = 5;
    }
    if ((uVar1 & 2) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 & 4) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 & 8) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 109341640; end: 109341677;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109341640(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001093412e4();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
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



/* Entry: 109341678; end: 10934168f;  */

void FUN_109341678(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110aefb40;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109341690; end: 1093417d3;  */

void FUN_109341690(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aefb40;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1093417d4; end: 1093417d7;  */

long FUN_1093417d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093417d8; end: 1093417eb;  */

void FUN_1093417d8(void)

{
  func_0x00010934177c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093417ec; end: 10934186b;  */

undefined ** FUN_1093417ec(void)

{
  return &PTR_DAT_110aefe18;
}



/* Entry: 10934186c; end: 109341bcf;  */

byte * FUN_10934186c(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  pbVar7 = param_2;
  if (lVar4 != 0) {
    pbVar7 = param_3;
    func_0x000107c280a0(param_3,1,uVar3,param_2);
  }
  iVar14 = *(int *)(param_1 + 0x10);
  if (0 < iVar14) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar7);
      iVar14 = *(int *)(param_1 + 0x10);
    }
    uVar12 = iVar14 * 4;
    uVar13 = (ulong)uVar12;
    pbVar5 = pbVar7 + 1;
    *pbVar7 = 0x12;
    uVar3 = uVar13;
    uVar9 = uVar12;
    if (0x7f < uVar12) {
      do {
        pbVar7 = pbVar5;
        uVar8 = (uint)uVar3;
        pbVar5 = pbVar7 + 1;
        *pbVar7 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar9 = (uint)uVar3;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar7 = pbVar7 + 2;
    *pbVar5 = (byte)uVar9;
    lVar4 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    if ((*(long *)param_3 - (long)pbVar7 < (long)(int)uVar12) &&
       (pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10), uVar3 = uVar15,
       (int)pbVar5 < (int)uVar12)) {
      pbVar1 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar5;
        _memcpy(pbVar7,lVar4,(long)iVar14);
        uVar12 = (int)uVar13 - iVar14;
        uVar13 = (ulong)uVar12;
        lVar4 = lVar4 + iVar14;
        pbVar11 = pbVar7 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar7 = pbVar1;
          pbVar5 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109341abc:
            param_3[0x38] = 1;
LAB_109341a9c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar5 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar1 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109341a9c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar1,(long)pbVar6 - (long)pbVar1);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109341abc;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar1 = uVar16;
              *(byte **)param_3 = pbVar1 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar5 = pbVar1 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
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
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar6);
          pbVar6 = pbVar5;
          pbVar7 = pbVar11;
        } while (pbVar5 <= pbVar11);
        pbVar5 = pbVar5 + (0x10 - (long)pbVar7);
      } while ((int)pbVar5 < (int)uVar12);
      uVar15 = (ulong)(int)uVar12;
      uVar3 = uVar15;
    }
    _memcpy(pbVar7,lVar4,uVar3);
    pbVar7 = pbVar7 + uVar15;
  }
  uVar3 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  pbVar5 = pbVar7;
  if (lVar4 != 0) {
    pbVar5 = param_3;
    func_0x000107c280a0(param_3,3,uVar3,pbVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar4 = *(long *)(uVar3 + 8);
      uVar13 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar4 = uVar3 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar12) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar7 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar7;
          _memcpy(pbVar5,lVar4,(long)iVar14);
          uVar12 = (int)uVar13 - iVar14;
          uVar13 = (ulong)uVar12;
          lVar4 = lVar4 + iVar14;
          pbVar7 = *(byte **)param_3;
          pbVar1 = pbVar5 + iVar14;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar5 + ((int)pbVar1 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar5 = pbVar1;
          } while (pbVar7 <= pbVar1);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar5);
        } while ((int)pbVar7 < (int)uVar12);
      }
      _memcpy(pbVar5,lVar4,(long)(int)uVar12);
      pbVar5 = pbVar5 + (int)uVar12;
    }
    else {
      _memcpy(pbVar5,lVar4,uVar13 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar12;
    }
  }
  return pbVar5;
}



/* Entry: 109341bd0; end: 109341cc3;  */

long FUN_109341bd0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  lVar2 = lVar2 + (ulong)uVar1 * 4;
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar4 = lVar5;
    }
    lVar2 = lVar2 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar4 = lVar5;
    }
    lVar2 = lVar2 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar4 + lVar2;
  }
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 109341cc4; end: 109341dd3;  */

void FUN_109341cc4(long param_1,long param_2)

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
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar4) {
      FUN_109311970(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x18);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  uVar3 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar3,uVar5);
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



/* Entry: 109341dd4; end: 109341e17;  */

long FUN_109341dd4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010934177c();
    __ZdlPv();
  }
  FUN_10934261c(param_1 + 0x18);
  return param_1;
}



/* Entry: 109341e18; end: 109341e1b;  */

long FUN_109341e18(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010934177c();
    __ZdlPv();
  }
  FUN_10934261c(param_1 + 0x18);
  return param_1;
}



/* Entry: 109341e1c; end: 109341e2f;  */

void FUN_109341e1c(void)

{
  FUN_109341dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109341e30; end: 109341e3b;  */

undefined ** FUN_109341e30(void)

{
  return &PTR_DAT_110aefe58;
}



/* Entry: 109341e3c; end: 109341e97;  */

void FUN_109341e3c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001093417f8(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 109341e98; end: 109342107;  */

long * FUN_109341e98(long param_1,long *param_2,long *param_3)

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
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x30),param_2,param_3);
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



/* Entry: 109342108; end: 10934210b;  */

void FUN_109342108(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_109342744(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_109341cc4();
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



/* Entry: 10934210c; end: 1093421c3;  */

void FUN_10934210c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_109342744(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_109341cc4();
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



/* Entry: 1093421c4; end: 109342243;  */

undefined8 * FUN_1093421c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aefdd8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10934282c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 109342244; end: 10934227f;  */

long FUN_109342244(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109341dd4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109342280; end: 109342283;  */

long FUN_109342280(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109341dd4();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109342284; end: 109342297;  */

void FUN_109342284(void)

{
  FUN_109342244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109342298; end: 1093422a3;  */

undefined ** FUN_109342298(void)

{
  return &PTR_DAT_110aefe90;
}



/* Entry: 1093422a4; end: 1093422ef;  */

void FUN_1093422a4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109341e3c(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 1093422f0; end: 1093424c3;  */

byte * FUN_1093422f0(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  pbVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar4 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar8;
          _memcpy(pbVar4,lVar2,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar10;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar4 + iVar10;
          do {
            pbVar4 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar4 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar4);
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar4,lVar2,(long)(int)(uint)uStack_48);
      pbVar4 = pbVar4 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar4,lVar2,uStack_48 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar3;
    }
  }
  return pbVar4;
}



/* Entry: 1093424c4; end: 10934255b;  */

void FUN_1093424c4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000109342030();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10934255c; end: 10934255f;  */

void FUN_10934255c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10934282c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10934210c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109342560; end: 109342603;  */

void FUN_109342560(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10934282c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10934210c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109342604; end: 10934261b;  */

void FUN_109342604(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110aefd38;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10934261c; end: 10934264f;  */

long * FUN_10934261c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109342650; end: 109342743;  */

void FUN_109342650(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aefd38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 109342744; end: 10934282b;  */

undefined8 * FUN_109342744(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aefd38;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1093118fc(puVar1 + 2,param_1,param_2 + 0x10);
  puVar3 = (ulong *)(param_2 + 0x20);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[4] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[5] = puVar2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 10934282c; end: 1093428e7;  */

undefined8 * FUN_10934282c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aefd88;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar2 + 3,param_2 + 0x18);
    uVar1 = *(uint *)(puVar2 + 2);
  }
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109342744(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  return puVar2;
}



/* Entry: 1093428e8; end: 109342953;  */

long FUN_1093428e8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109342954; end: 109342957;  */

long FUN_109342954(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109342958; end: 10934296b;  */

void FUN_109342958(void)

{
  FUN_1093428e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10934296c; end: 109342977;  */

undefined ** FUN_10934296c(void)

{
  return &PTR_DAT_110aeffb8;
}



/* Entry: 109342978; end: 1093429d7;  */

void FUN_109342978(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093068c4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093068c4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 1093429d8; end: 109342bc7;  */

byte * FUN_1093429d8(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x28);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  pbVar5 = param_2;
  if ((uVar2 & 1) != 0) {
    pbVar5 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1c),param_2,param_3);
  }
  pbVar7 = pbVar5;
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar7 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1c),pbVar5,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar9 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)pbVar7 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar10 = (int)pbVar5;
          _memcpy(pbVar7,lVar9,(long)iVar10);
          uVar2 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar2;
          lVar9 = lVar9 + iVar10;
          pbVar5 = (byte *)*param_3;
          pbVar8 = pbVar7 + iVar10;
          do {
            pbVar7 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            pbVar7 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar7);
        } while ((int)pbVar5 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar7,lVar9,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar9,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar2;
    }
  }
  return pbVar7;
}



/* Entry: 109342bc8; end: 109342ca7;  */

void FUN_109342bc8(long param_1)

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
      FUN_109306b34();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109306b34();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3;
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



/* Entry: 109342ca8; end: 109342d87;  */

void FUN_109342ca8(long param_1,long param_2)

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
        func_0x0001093431f0(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093067b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x0001093431f0(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093067b8();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 109342d88; end: 109342dfb;  */

undefined8 * FUN_109342d88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeff78;
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



/* Entry: 109342dfc; end: 109342e2f;  */

long FUN_109342dfc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109343120(param_1 + 0x10);
  return param_1;
}



/* Entry: 109342e30; end: 109342e33;  */

long FUN_109342e30(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109343120(param_1 + 0x10);
  return param_1;
}



/* Entry: 109342e34; end: 109342e47;  */

void FUN_109342e34(void)

{
  FUN_109342dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109342e48; end: 109342e53;  */

undefined ** FUN_109342e48(void)

{
  return &PTR_DAT_110aefff8;
}



/* Entry: 109342e54; end: 109342e9b;  */

void FUN_109342e54(long param_1)

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



/* Entry: 109342e9c; end: 1093430b7;  */

long * FUN_109342e9c(long param_1,long *param_2,long *param_3)

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



/* Entry: 1093430b8; end: 1093430bb;  */

void FUN_1093430b8(long param_1,long param_2)

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



/* Entry: 1093430bc; end: 10934310f;  */

void FUN_1093430bc(long param_1,long param_2)

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



/* Entry: 109343110; end: 10934311f;  */

void FUN_109343110(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110aeff28;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 109343120; end: 109343153;  */

long * FUN_109343120(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109343154; end: 10934328f;  */

void FUN_109343154(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aeff28;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 109343290; end: 109343293;  */

long FUN_109343290(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109342dfc();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109347bb8();
    __ZdlPv();
  }
  FUN_10934383c(param_1 + 0x30);
  FUN_109343808(param_1 + 0x18);
  return param_1;
}



/* Entry: 109343294; end: 1093432a7;  */

void FUN_109343294(void)

{
  func_0x000109343234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093432a8; end: 1093432b3;  */

undefined ** FUN_1093432a8(void)

{
  return &PTR_DAT_110af00b8;
}



/* Entry: 1093432b4; end: 10934333b;  */

void FUN_1093432b4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109342e54(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109347c18(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x58) = 0;
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



/* Entry: 10934333c; end: 10934358f;  */

long * FUN_10934333c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar8 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x28),param_2,param_3);
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar5 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar10 * 8 + 7);
      }
      plVar2 = (long *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar5,param_3);
      iVar10 = iVar10 + 1;
      plVar5 = plVar2;
    } while (iVar11 != iVar10);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar2 < plVar5) {
      uVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar6 + (long)((int)plVar2 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= plVar2);
      uVar3 = *(undefined1 *)(param_1 + 0x58);
    }
    *(undefined1 *)plVar2 = 0x18;
    *(undefined1 *)((long)plVar2 + 1) = uVar3;
    plVar2 = (long *)((long)plVar2 + 2);
  }
  iVar11 = *(int *)(param_1 + 0x38);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar5 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar10 * 8 + 7);
      }
      plVar2 = (long *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar5,param_3);
      iVar10 = iVar10 + 1;
      plVar5 = plVar2;
    } while (iVar11 != iVar10);
  }
  plVar5 = plVar2;
  if ((uVar8 >> 1 & 1) != 0) {
    plVar5 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x40),plVar2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar7 = uVar4 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)plVar5 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar5,lVar7,(long)iVar11);
          uVar8 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar11;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)plVar5 + (long)iVar11);
          do {
            plVar5 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar5 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar5 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar5 = plVar2;
          } while (plVar6 <= plVar2);
          puVar12 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar5));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar5,lVar7,(long)(int)uVar8);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar5,lVar7,uVar9 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar8);
    }
  }
  return plVar5;
}



/* Entry: 109343590; end: 1093436ef;  */

void FUN_109343590(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
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
      FUN_109345b08();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar5 = lVar5 + iVar2;
  iVar3 = (int)lVar5;
  puVar6 = (ulong *)(param_1 + 0x30);
  if ((uVar4 & 1) != 0) {
    puVar6 = (ulong *)(uVar4 + 7);
  }
  if (iVar2 != 0) {
    lVar7 = (long)iVar2 << 3;
    do {
      uVar4 = *puVar6;
      func_0x0001093466cc();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      iVar3 = (int)lVar5;
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x000109343010();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x000109347e34();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x58) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 1093436f0; end: 1093436f3;  */

void FUN_1093436f0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        func_0x0001093438cc(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1093430bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        func_0x000109343910(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar3;
      }
      else {
        FUN_109347f30();
      }
    }
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 1;
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



/* Entry: 1093436f4; end: 1093437ff;  */

void FUN_1093436f4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        func_0x0001093438cc(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1093430bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        func_0x000109343910(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar3;
      }
      else {
        FUN_109347f30();
      }
    }
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 1;
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



/* Entry: 109343800; end: 109343807;  */

void FUN_109343800(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af0078;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = param_2;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 109343808; end: 10934383b;  */

long * FUN_109343808(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10934383c; end: 10934386f;  */

long * FUN_10934383c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109343870; end: 1093439a3;  */

void FUN_109343870(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af0078;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = param_1;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 1093439a4; end: 1093439a7;  */

long FUN_1093439a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093439a8; end: 1093439bb;  */

void FUN_1093439a8(void)

{
  func_0x000109343954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093439bc; end: 109343a17;  */

undefined ** FUN_1093439bc(void)

{
  return &PTR_DAT_110af02e8;
}



/* Entry: 109343a18; end: 109343fdf;  */

byte * FUN_109343a18(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  pbVar10 = param_2;
  if (lVar5 != 0) {
    pbVar10 = param_3;
    func_0x000107c280a0(param_3,1,uVar3,param_2);
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      uVar3 = *(ulong *)(param_1 + 0x28);
    }
    pbVar8 = pbVar10 + 1;
    *pbVar10 = 0x10;
    uVar13 = uVar3;
    pbVar10 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar3 = uVar13 >> 7;
        uVar14 = uVar13 >> 0xe;
        uVar13 = uVar3;
        pbVar10 = pbVar8;
      } while (uVar14 != 0);
    }
    pbVar10 = pbVar8 + 1;
    *pbVar8 = (byte)uVar3;
  }
  iVar15 = *(int *)(param_1 + 0x30);
  if (iVar15 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      iVar15 = *(int *)(param_1 + 0x30);
    }
    *pbVar10 = 0x1d;
    *(int *)(pbVar10 + 1) = iVar15;
    pbVar10 = pbVar10 + 5;
  }
  iVar15 = *(int *)(param_1 + 0x34);
  if (iVar15 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      iVar15 = *(int *)(param_1 + 0x34);
    }
    *pbVar10 = 0x25;
    *(int *)(pbVar10 + 1) = iVar15;
    pbVar10 = pbVar10 + 5;
  }
  iVar15 = *(int *)(param_1 + 0x38);
  if (iVar15 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      iVar15 = *(int *)(param_1 + 0x38);
    }
    *pbVar10 = 0x2d;
    *(int *)(pbVar10 + 1) = iVar15;
    pbVar10 = pbVar10 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x3c);
  if (uVar12 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      uVar12 = *(uint *)(param_1 + 0x3c);
    }
    pbVar8 = pbVar10 + 1;
    *pbVar10 = 0x30;
    pbVar10 = pbVar8;
    uVar4 = uVar12;
    if (0x7f < uVar12) {
      do {
        pbVar8 = pbVar10 + 1;
        *pbVar10 = (byte)uVar4 | 0x80;
        uVar12 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        pbVar10 = pbVar8;
        uVar4 = uVar12;
      } while (uVar7 != 0);
    }
    pbVar10 = pbVar8 + 1;
    *pbVar8 = (byte)uVar12;
  }
  iVar15 = *(int *)(param_1 + 0x40);
  if (iVar15 != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      iVar15 = *(int *)(param_1 + 0x40);
    }
    *pbVar10 = 0x3d;
    *(int *)(pbVar10 + 1) = iVar15;
    pbVar10 = pbVar10 + 5;
  }
  iVar15 = *(int *)(param_1 + 0x10);
  if (0 < iVar15) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar10);
      iVar15 = *(int *)(param_1 + 0x10);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar8 = pbVar10 + 1;
    *pbVar10 = 0x42;
    uVar3 = uVar13;
    uVar4 = uVar12;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar8;
        uVar7 = (uint)uVar3;
        pbVar8 = pbVar10 + 1;
        *pbVar10 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar4 = (uint)uVar3;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar8 = (byte)uVar4;
    lVar5 = *(long *)(param_1 + 0x18);
    uVar14 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    if ((*(long *)param_3 - (long)pbVar10 < (long)(int)uVar12) &&
       (pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10), uVar3 = uVar14,
       (int)pbVar8 < (int)uVar12)) {
      pbVar1 = param_3 + 0x10;
      do {
        iVar15 = (int)pbVar8;
        _memcpy(pbVar10,lVar5,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar5 = lVar5 + iVar15;
        pbVar11 = pbVar10 + iVar15;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar10 = pbVar1;
          pbVar8 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109343e9c:
            param_3[0x38] = 1;
LAB_109343e7c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar8 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar1 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109343e7c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar1,(long)pbVar6 - (long)pbVar1);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109343e9c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar1 = uVar16;
              *(byte **)param_3 = pbVar1 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar8 = pbVar1 + (int)uStack_64;
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
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar10 = pbStack_70;
            }
          }
          pbVar11 = pbVar10 + ((int)pbVar11 - (int)pbVar6);
          pbVar6 = pbVar8;
          pbVar10 = pbVar11;
        } while (pbVar8 <= pbVar11);
        pbVar8 = pbVar8 + (0x10 - (long)pbVar10);
      } while ((int)pbVar8 < (int)uVar12);
      uVar14 = (ulong)(int)uVar12;
      uVar3 = uVar14;
    }
    _memcpy(pbVar10,lVar5,uVar3);
    pbVar10 = pbVar10 + uVar14;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar5 = *(long *)(uVar3 + 8);
      uVar13 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar5 = uVar3 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar12) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar8 < (int)uVar12) {
        do {
          iVar15 = (int)pbVar8;
          _memcpy(pbVar10,lVar5,(long)iVar15);
          uVar12 = (int)uVar13 - iVar15;
          uVar13 = (ulong)uVar12;
          lVar5 = lVar5 + iVar15;
          pbVar8 = *(byte **)param_3;
          pbVar1 = pbVar10 + iVar15;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar10 + ((int)pbVar1 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar10 = pbVar1;
          } while (pbVar8 <= pbVar1);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar10);
        } while ((int)pbVar8 < (int)uVar12);
      }
      _memcpy(pbVar10,lVar5,(long)(int)uVar12);
      pbVar10 = pbVar10 + (int)uVar12;
    }
    else {
      _memcpy(pbVar10,lVar5,uVar13 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar12;
    }
  }
  return pbVar10;
}



/* Entry: 109343fe0; end: 109344103;  */

long FUN_109343fe0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  lVar3 = lVar5;
  if (lVar5 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  lVar2 = lVar2 + (ulong)uVar1 * 4;
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar3 = lVar5;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = lVar2 + 5;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar2 = lVar2 + 5;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar2 = lVar2 + 5;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x3c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = lVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x44) = (int)lVar2;
  return lVar2;
}



/* Entry: 109344104; end: 109344237;  */

void FUN_109344104(long param_1,long param_2)

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
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar4) {
      FUN_109311970(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x18);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  uVar3 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar3,uVar5);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
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



/* Entry: 109344238; end: 1093442f3;  */

void FUN_109344238(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x10 + lVar2);
    *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_2 + 0x10 + lVar2);
    *(undefined1 *)(param_2 + 0x10 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x28 + lVar2);
    *(undefined1 *)(param_1 + 0x28 + lVar2) = *(undefined1 *)(param_2 + 0x28 + lVar2);
    *(undefined1 *)(param_2 + 0x28 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1c);
  return;
}



/* Entry: 1093442f4; end: 10934434b;  */

long FUN_1093442f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10934434c; end: 10934436f;  */

undefined ** FUN_10934434c(void)

{
  return &PTR_DAT_110af0328;
}



/* Entry: 109344370; end: 1093445e3;  */

byte * FUN_109344370(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
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
      iVar9 = *(int *)(param_1 + 0x10);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x14);
  if (iVar9 != 0) {
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
      iVar9 = *(int *)(param_1 + 0x14);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
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
      uVar4 = *(uint *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    pbVar5 = pbVar7;
    uVar3 = uVar4;
    if (0x7f < uVar4) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar3 | 0x80;
        uVar4 = uVar3 >> 7;
        uVar1 = uVar3 >> 0xe;
        pbVar5 = pbVar7;
        uVar3 = uVar4;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar8 = uVar6 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar4) {
        do {
          iVar9 = (int)pbVar5;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar4 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar4;
          lVar8 = lVar8 + iVar9;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar2 + (long)((int)pbVar7 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar4;
    }
  }
  return param_2;
}



/* Entry: 1093445e4; end: 109344653;  */

long FUN_1093445e4(long param_1)

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
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
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



/* Entry: 109344654; end: 1093446bb;  */

long FUN_109344654(long param_1)

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
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093446bc; end: 1093446bf;  */

long FUN_1093446bc(long param_1)

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
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093446c0; end: 1093446d3;  */

void FUN_1093446c0(void)

{
  FUN_109344654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093446d4; end: 1093446df;  */

undefined ** FUN_1093446d4(void)

{
  return &PTR_DAT_110af0388;
}



/* Entry: 1093446e0; end: 10934472f;  */

void FUN_1093446e0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109344358(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 109344730; end: 109344aa3;  */

byte * FUN_109344730(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x38);
  if (uVar11 != 0) {
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
      uVar11 = *(uint *)(param_1 + 0x38);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    pbVar5 = pbVar8;
    uVar3 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar3 | 0x80;
        uVar11 = uVar3 >> 7;
        uVar1 = uVar3 >> 0xe;
        pbVar5 = pbVar8;
        uVar3 = uVar11;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar11;
  }
  uVar11 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar11) {
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
    }
    pbVar5 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar5;
        pbVar5 = param_2 + 1;
        *param_2 = (byte)uVar11 | 0x80;
        uVar3 = uVar11 >> 0xe;
        uVar11 = uVar11 >> 7;
      } while (uVar3 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar5 = (byte)uVar11;
    puVar13 = *(uint **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar5 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar8 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar8 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10934481c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_1093448b4:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_1093448b4;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10934481c;
            } while (uStack_64 == 0);
            puVar7 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar7;
              param_3[3] = puVar7[1];
              *(undefined8 *)pbVar5 = uVar17;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar8 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar8 + ((int)param_2 - (int)pbVar9);
          pbVar8 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar11 = *puVar14;
      pbVar9 = pbVar8;
      uVar3 = uVar11;
      if (0x7f < uVar11) {
        do {
          pbVar8 = pbVar9 + 1;
          *pbVar9 = (byte)uVar3 | 0x80;
          uVar11 = uVar3 >> 7;
          uVar1 = uVar3 >> 0xe;
          pbVar9 = pbVar8;
          uVar3 = uVar11;
        } while (uVar1 != 0);
      }
      param_2 = pbVar8 + 1;
      *pbVar8 = (byte)uVar11;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uVar12 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*param_3 - (long)pbVar5 < (long)(int)uVar11) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar11) {
        do {
          iVar16 = (int)pbVar8;
          _memcpy(pbVar5,lVar10,(long)iVar16);
          uVar11 = (int)uVar12 - iVar16;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar16;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar5 + iVar16;
          do {
            pbVar5 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar5 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar5);
        } while ((int)pbVar8 < (int)uVar11);
      }
      _memcpy(pbVar5,lVar10,(long)(int)uVar11);
      pbVar5 = pbVar5 + (int)uVar11;
    }
    else {
      _memcpy(pbVar5,lVar10,uVar12 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar11;
    }
  }
  return pbVar5;
}



/* Entry: 109344aa4; end: 109344bb3;  */

long FUN_109344aa4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    do {
      lVar2 = lVar2 + (ulong)((int)LZCOUNT(*puVar3) * -9 + 0x160U >> 6);
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_1093445e4();
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109344bb4; end: 109344bb7;  */

void FUN_109344bb4(long param_1,long param_2)

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
      func_0x000107c29104(param_1 + 0x18);
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
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_109345f94(uVar7,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar7;
    }
    else {
      func_0x0001093442ac();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 109344bb8; end: 109344cc3;  */

void FUN_109344bb8(long param_1,long param_2)

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
      func_0x000107c29104(param_1 + 0x18);
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
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_109345f94(uVar7,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar7;
    }
    else {
      func_0x0001093442ac();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 109344cc4; end: 109344d37;  */

void FUN_109344cc4(long param_1,long param_2)

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
  } while (lVar3 != 0xc);
  return;
}



/* Entry: 109344d38; end: 109344d6f;  */

long FUN_109344d38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109344d70(param_1);
  return param_1;
}



/* Entry: 109344d70; end: 109344e17;  */

long * FUN_109344d70(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c30258(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109307000();
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_109344654();
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 109344e18; end: 109344e1b;  */

long FUN_109344e18(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109344d70(param_1);
  return param_1;
}



/* Entry: 109344e1c; end: 109344e2f;  */

void FUN_109344e1c(void)

{
  FUN_109344d38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109344e30; end: 109344e3b;  */

undefined ** FUN_109344e30(void)

{
  return &PTR_DAT_110af03d0;
}



/* Entry: 109344e3c; end: 109344f1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109344e3c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109307550(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109307090(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109307b00(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109306ca4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_1093446e0(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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



/* Entry: 109344f1c; end: 10934544f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109344f1c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    iVar11 = 0;
    plVar6 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x44),plVar6,param_3);
      iVar11 = iVar11 + 1;
      plVar6 = param_2;
    } while (iVar13 != iVar11);
  }
  iVar13 = *(int *)(param_1 + 0x60);
  if (iVar13 != 0) {
    plVar6 = (long *)*param_3;
    if (plVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar3 + (long)((int)param_2 - (int)plVar6));
        plVar6 = (long *)*param_3;
      } while (plVar6 <= param_2);
      iVar13 = *(int *)(param_1 + 0x60);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar13;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar6 = param_2;
  if (*(int *)(param_1 + 100) != 0) {
    plVar6 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 100),param_2);
  }
  plVar3 = plVar6;
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar3 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x68),plVar6);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_109345034;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109345034;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566781);
  plVar6 = param_3;
  func_0x000107c280a0(param_3,5,puVar9,plVar3);
  plVar3 = plVar6;
LAB_109345034:
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar6 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x48),plVar3,param_3);
    plVar3 = plVar6;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar6 = (long *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),plVar3,param_3);
    plVar3 = plVar6;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    plVar6 = (long *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x28),plVar3,param_3);
    plVar3 = plVar6;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar6 = (long *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x28),plVar3,param_3);
    plVar3 = plVar6;
  }
  plVar6 = plVar3;
  if ((uVar8 >> 4 & 1) != 0) {
    plVar6 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),plVar3,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar10 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)plVar6 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar13 = (int)puVar12;
          _memcpy(plVar6,lVar4,(long)iVar13);
          uVar8 = (int)uVar10 - iVar13;
          uVar10 = (ulong)uVar8;
          lVar4 = lVar4 + iVar13;
          plVar7 = (long *)*param_3;
          plVar3 = (long *)((long)plVar6 + (long)iVar13);
          do {
            plVar6 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar6 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar6 + (long)((int)plVar3 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar6 = plVar3;
          } while (plVar7 <= plVar3);
          puVar12 = (undefined1 *)((long)plVar7 + (0x10 - (long)plVar6));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar6,lVar4,(long)(int)uVar8);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar6,lVar4,uVar10 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar8);
    }
  }
  return plVar6;
}



/* Entry: 109345450; end: 109345453;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109345450(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar5;
        func_0x00010934601c(uVar5,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093073f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x000109346060(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10930731c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x0001093460a4(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        func_0x0001093079ec();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x000109307f78(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        func_0x000109306b90();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        FUN_1093460e8(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_109344bb8();
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 109345454; end: 109345623;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109345454(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar5;
        func_0x00010934601c(uVar5,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_1093073f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x000109346060(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10930731c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x0001093460a4(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        func_0x0001093079ec();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x000109307f78(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        func_0x000109306b90();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        FUN_1093460e8(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_109344bb8();
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 109345624; end: 10934567b;  */

long FUN_109345624(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10934567c; end: 10934569b;  */

undefined ** FUN_10934567c(void)

{
  return &PTR_DAT_110af0410;
}



/* Entry: 10934569c; end: 10934584b;  */

byte * FUN_10934569c(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}


