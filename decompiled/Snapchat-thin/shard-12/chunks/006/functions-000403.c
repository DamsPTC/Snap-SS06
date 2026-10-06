/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10932c260; end: 10932c2d3;  */

void FUN_10932c260(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010932ae90(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010932b700(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10932baf0(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 10932c2d4; end: 10932c46b;  */

long * FUN_10932c2d4(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
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



/* Entry: 10932c46c; end: 10932c557;  */

long FUN_10932c46c(long param_1)

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
      FUN_10932b390();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_10932b8e8();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_10932befc();
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



/* Entry: 10932c558; end: 10932c55b;  */

void FUN_10932c558(long param_1,long param_2)

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
        func_0x0001093323c4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10932b50c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x0001093324ac(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_10932b9b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_109332560(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10932c0a0();
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



/* Entry: 10932c55c; end: 10932c663;  */

void FUN_10932c55c(long param_1,long param_2)

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
        func_0x0001093323c4(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_10932b50c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x0001093324ac(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_10932b9b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_109332560(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_10932c0a0();
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



/* Entry: 10932c664; end: 10932c6d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932c664(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
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



/* Entry: 10932c6d8; end: 10932c72f;  */

long FUN_10932c6d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10932c730; end: 10932c75f;  */

undefined ** FUN_10932c730(void)

{
  return &PTR_DAT_110aee540;
}



/* Entry: 10932c760; end: 10932c8fb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10932c760(long param_1,long *param_2,long *param_3)

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
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
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



/* Entry: 10932c8fc; end: 10932c9c3;  */

ulong FUN_10932c8fc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10932c9c4; end: 10932ca2b;  */

long FUN_10932c9c4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x28);
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



/* Entry: 10932ca2c; end: 10932ca2f;  */

long FUN_10932ca2c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x28);
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



/* Entry: 10932ca30; end: 10932ca43;  */

void FUN_10932ca30(void)

{
  FUN_10932c9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932ca44; end: 10932ca4f;  */

undefined ** FUN_10932ca44(void)

{
  return &PTR_DAT_110aee578;
}



/* Entry: 10932ca50; end: 10932caaf;  */

void FUN_10932ca50(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010932c73c(*(undefined8 *)(param_1 + 0x28));
  }
  if ((uVar1 & 0x3e) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
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



/* Entry: 10932cab0; end: 10932cf0f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10932cab0(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x30);
    *param_2 = 8;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar12 >> 5 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar2) {
    uVar15 = 0;
    pbVar5 = (byte *)(param_3 + 2);
    do {
      pbVar11 = (byte *)*param_3;
      pbVar6 = param_2;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10932cb80:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10932cc20:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar16;
              param_3[1] = (long)pbVar11;
              goto LAB_10932cc20;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar4 = (long *)param_3[6];
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) goto LAB_10932cb80;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar5 = uVar16;
              pbVar7 = pbVar5 + (int)uStack_64;
              *param_3 = (long)pbVar7;
              param_3[1] = (long)pbStack_70;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *param_3 = (long)pbVar7;
              param_3[1] = 0;
              pbVar6 = pbStack_70;
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar11);
          pbVar11 = pbVar7;
          pbVar6 = param_2;
        } while (pbVar7 <= param_2);
      }
      bVar3 = *(byte *)(*(long *)(param_1 + 0x20) + uVar15);
      *pbVar6 = 0x18;
      param_2 = pbVar6 + 2;
      pbVar6[1] = bVar3;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x31);
    *param_2 = 0x20;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar12 >> 3 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x32);
    *param_2 = 0x28;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar12 & 1) != 0) {
    pbVar5 = (byte *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  if ((uVar12 >> 4 & 1) != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
    }
    uVar12 = *(uint *)(param_1 + 0x34);
    uVar13 = (ulong)(int)uVar12;
    pbVar11 = param_2 + 1;
    *param_2 = 0x38;
    uVar15 = uVar13;
    pbVar5 = pbVar11;
    if (0x7f < uVar12) {
      do {
        pbVar11 = pbVar5 + 1;
        *pbVar5 = (byte)uVar15 | 0x80;
        uVar13 = uVar15 >> 7;
        uVar9 = uVar15 >> 0xe;
        uVar15 = uVar13;
        pbVar5 = pbVar11;
      } while (uVar9 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar13;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar10 = *(long *)(uVar15 + 8);
      uVar13 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar10 = uVar15 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar5;
          _memcpy(param_2,lVar10,(long)iVar14);
          uVar12 = (int)uVar13 - iVar14;
          uVar13 = (ulong)uVar12;
          lVar10 = lVar10 + iVar14;
          pbVar5 = (byte *)*param_3;
          pbVar11 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar4 + (long)((int)pbVar11 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar5 <= pbVar11);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar10,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 10932cf10; end: 10932cfeb;  */

long FUN_10932cf10(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (ulong)*(uint *)(param_1 + 0x18) * 2;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_10932c8fc();
      lVar4 = lVar2 + lVar4 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    lVar4 = lVar4 + (ulong)((uVar1 >> 1 & 2) + (uVar1 & 2) + (uVar1 >> 2 & 2));
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 & 0x20) != 0) {
      lVar4 = lVar4 + 5;
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



/* Entry: 10932cfec; end: 10932cfef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932cfec(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 0x3f) != 0) {
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_109332678(uVar7,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
      else {
        FUN_10932c664();
      }
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
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



/* Entry: 10932cff0; end: 10932d14f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932cff0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 0x3f) != 0) {
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_109332678(uVar7,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
      else {
        FUN_10932c664();
      }
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
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



/* Entry: 10932d150; end: 10932d187;  */

long FUN_10932d150(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932d188(param_1);
  return param_1;
}



/* Entry: 10932d188; end: 10932d217;  */

long * FUN_10932d188(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10932c1e0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10931371c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_109313e3c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_1093108e0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10932c9c4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_109315738();
    __ZdlPv();
  }
  FUN_10932e470(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10932d218; end: 10932d21b;  */

long FUN_10932d218(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932d188(param_1);
  return param_1;
}



/* Entry: 10932d21c; end: 10932d22f;  */

void FUN_10932d21c(void)

{
  FUN_10932d150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932d230; end: 10932d23b;  */

undefined ** FUN_10932d230(void)

{
  return &PTR_DAT_110aee5b0;
}



/* Entry: 10932d23c; end: 10932d367;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932d23c(long param_1)

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
  if ((uVar1 & 0x7f) != 0) {
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
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10932c260(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109313808(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_109314088(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_1093109d4(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10932ca50(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_109315790(*(undefined8 *)(param_1 + 0x78));
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  if ((uVar1 & 0x30000) != 0) {
    *(undefined8 *)(param_1 + 0x9c) = 0x8000000004;
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



/* Entry: 10932d368; end: 10932d953;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10932d368(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar5 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar5 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  pbVar5 = param_2;
  if ((uVar11 >> 3 & 1) != 0) {
    pbVar5 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x14),param_2,param_3);
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar6 = pbVar5;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar6,param_3);
      iVar13 = iVar13 + 1;
      pbVar6 = pbVar5;
    } while (iVar14 != iVar13);
  }
  if ((uVar11 >> 7 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar9 + ((int)pbVar5 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    *pbVar5 = 0x2d;
    *(undefined4 *)(pbVar5 + 1) = uVar2;
    pbVar5 = pbVar5 + 5;
  }
  if ((uVar11 >> 4 & 1) != 0) {
    pbVar6 = (byte *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x14),pbVar5,param_3);
    pbVar5 = pbVar6;
  }
  if ((uVar11 >> 8 & 1) != 0) {
    pbVar6 = param_3;
    func_0x000108b3207c(param_3,*(undefined4 *)(param_1 + 0x84),pbVar5);
    pbVar5 = pbVar6;
  }
  if ((uVar11 >> 9 & 1) != 0) {
    pbVar6 = param_3;
    func_0x0001089f53f0(param_3,*(undefined4 *)(param_1 + 0x88),pbVar5);
    pbVar5 = pbVar6;
  }
  pbVar6 = pbVar5;
  if ((uVar11 & 1) != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,0xb,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,pbVar5);
  }
  iVar14 = *(int *)(param_1 + 0x38);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar5 = pbVar6;
    do {
      uVar7 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      pbVar6 = (byte *)0xc;
      func_0x000107c303cc(0xc,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar5,param_3);
      iVar13 = iVar13 + 1;
      pbVar5 = pbVar6;
    } while (iVar14 != iVar13);
  }
  if ((uVar11 >> 0xb & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x90);
    *pbVar6 = 0x68;
    pbVar6[1] = bVar3;
    pbVar6 = pbVar6 + 2;
  }
  if ((uVar11 >> 0x10 & 1) != 0) {
    pbVar5 = param_3;
    func_0x0001089f5440(param_3,*(undefined4 *)(param_1 + 0x9c),pbVar6);
    pbVar6 = pbVar5;
  }
  if ((uVar11 >> 0x11 & 1) != 0) {
    pbVar5 = param_3;
    FUN_10932d954(param_3,*(undefined4 *)(param_1 + 0xa0),pbVar6);
    pbVar6 = pbVar5;
  }
  if ((uVar11 >> 10 & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    pbVar6[0] = 0x85;
    pbVar6[1] = 1;
    *(undefined4 *)(pbVar6 + 2) = uVar2;
    pbVar6 = pbVar6 + 6;
  }
  if ((uVar11 >> 5 & 1) != 0) {
    pbVar5 = (byte *)0x11;
    func_0x000107c303cc(0x11,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x14),pbVar6,param_3);
    pbVar6 = pbVar5;
  }
  if ((uVar11 >> 0xc & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x91);
    pbVar6[0] = 0x90;
    pbVar6[1] = 1;
    pbVar6[2] = bVar3;
    pbVar6 = pbVar6 + 3;
  }
  if ((uVar11 >> 0xd & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x92);
    pbVar6[0] = 0x98;
    pbVar6[1] = 1;
    pbVar6[2] = bVar3;
    pbVar6 = pbVar6 + 3;
  }
  if ((uVar11 >> 0xe & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x94);
    uVar12 = (ulong)(int)uVar4;
    pbVar9 = pbVar6 + 2;
    pbVar6[0] = 0xa0;
    pbVar6[1] = 1;
    uVar7 = uVar12;
    pbVar5 = pbVar9;
    if (0x7f < uVar4) {
      do {
        pbVar9 = pbVar5 + 1;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar12 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar12;
        pbVar5 = pbVar9;
      } while (uVar8 != 0);
    }
    pbVar6 = pbVar9 + 1;
    *pbVar9 = (byte)uVar12;
  }
  if ((uVar11 >> 0xf & 1) != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar9 + ((int)pbVar6 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar6);
    }
    uVar4 = *(uint *)(param_1 + 0x98);
    uVar12 = (ulong)(int)uVar4;
    pbVar9 = pbVar6 + 2;
    pbVar6[0] = 0xa8;
    pbVar6[1] = 1;
    uVar7 = uVar12;
    pbVar5 = pbVar9;
    if (0x7f < uVar4) {
      do {
        pbVar9 = pbVar5 + 1;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar12 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar12;
        pbVar5 = pbVar9;
      } while (uVar8 != 0);
    }
    pbVar6 = pbVar9 + 1;
    *pbVar9 = (byte)uVar12;
  }
  pbVar5 = pbVar6;
  if ((uVar11 >> 6 & 1) != 0) {
    pbVar5 = (byte *)0x16;
    func_0x000107c303cc(0x16,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14),pbVar6,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar10 = *(long *)(uVar7 + 8);
      uVar12 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar10 = uVar7 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar11) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar6 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar6;
          _memcpy(pbVar5,lVar10,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar14;
          pbVar6 = *(byte **)param_3;
          pbVar9 = pbVar5 + iVar14;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar5 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar5);
        } while ((int)pbVar6 < (int)uVar11);
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



/* Entry: 10932d954; end: 10932d9f7;  */

byte * FUN_10932d954(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_1 + 7) == '\x01') {
        param_3 = param_1 + 2;
        break;
      }
      puVar1 = param_1;
      func_0x000107c303dc();
      param_3 = (undefined8 *)((long)puVar1 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_1;
    } while (puVar4 <= param_3);
  }
  pbVar2 = (byte *)((long)param_3 + 1);
  *(undefined1 *)param_3 = 0x78;
  uVar5 = (ulong)(int)param_2;
  pbVar3 = pbVar2;
  uVar6 = uVar5;
  if (0x7f < param_2) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      uVar5 = uVar6 >> 7;
      uVar7 = uVar6 >> 0xe;
      pbVar3 = pbVar2;
      uVar6 = uVar5;
    } while (uVar7 != 0);
  }
  *pbVar2 = (byte)uVar5;
  return pbVar2 + 1;
}



/* Entry: 10932d9f8; end: 10932dd5f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10932d9f8(long param_1)

{
  uint uVar1;
  byte bVar2;
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
      FUN_109329d9c();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar5 = lVar5 + iVar3;
  puVar6 = (ulong *)(param_1 + 0x30);
  if ((uVar4 & 1) != 0) {
    puVar6 = (ulong *)(uVar4 + 7);
  }
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    do {
      uVar4 = *puVar6;
      FUN_10932d9f8();
      lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)bVar2) {
        uVar4 = (ulong)bVar2;
      }
      lVar5 = lVar5 + uVar4 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x50);
      FUN_10932c46c();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      FUN_109313ad0();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x60);
      FUN_1093147dc();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x68);
      FUN_1093112d0();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x70);
      FUN_10932cf10();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x78);
      func_0x000109315a60();
      lVar5 = lVar5 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 & 0x80) != 0) {
      lVar5 = lVar5 + 5;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x84)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      lVar5 = lVar5 + 6;
    }
    lVar5 = lVar5 + ((ulong)(uVar1 >> 10) & 2);
    if ((uVar1 & 0x1000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar1 & 0x2000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x94)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x98)) * -9 + 0x280U >> 6) + 2;
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x9c)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xa0)) * -9 + 0x2c0U >> 6) + lVar5;
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



/* Entry: 10932dd60; end: 10932dd63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932dd60(long param_1,long param_2)

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
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar4;
        func_0x000109332704(uVar4,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10932c55c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar4;
        func_0x0001093327d0(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_109313c84();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar4;
        func_0x00010933290c(uVar4,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109314dc8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar4;
        FUN_109332cb0(uVar4,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109311638();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar4;
        func_0x000109332cf4(uVar4,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10932cff0();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x000109332dac(uVar4,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar4;
      }
      else {
        FUN_109315b54();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
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



/* Entry: 10932dd64; end: 10932e00b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932dd64(long param_1,long param_2)

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
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar4;
        func_0x000109332704(uVar4,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10932c55c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar4;
        func_0x0001093327d0(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_109313c84();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar4;
        func_0x00010933290c(uVar4,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109314dc8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar4;
        FUN_109332cb0(uVar4,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109311638();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar4;
        func_0x000109332cf4(uVar4,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10932cff0();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x000109332dac(uVar4,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar4;
      }
      else {
        FUN_109315b54();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
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



/* Entry: 10932e00c; end: 10932e233;  */

void FUN_10932e00c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110aebe48;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10932e234; end: 10932e267;  */

long * FUN_10932e234(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e268; end: 10932e29b;  */

long * FUN_10932e268(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e29c; end: 10932e2cf;  */

long * FUN_10932e29c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e2d0; end: 10932e303;  */

long * FUN_10932e2d0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e304; end: 10932e337;  */

long * FUN_10932e304(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e338; end: 10932e36b;  */

long * FUN_10932e338(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e36c; end: 10932e39f;  */

long * FUN_10932e36c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e3a0; end: 10932e3d3;  */

long * FUN_10932e3a0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e3d4; end: 10932e407;  */

long * FUN_10932e3d4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e408; end: 10932e43b;  */

long * FUN_10932e408(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e43c; end: 10932e46f;  */

long * FUN_10932e43c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e470; end: 10932e4a3;  */

long * FUN_10932e470(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e4a4; end: 10932e4d7;  */

long * FUN_10932e4a4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10932e4d8; end: 10932fce3;  */

void FUN_10932e4d8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aebe48;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10932fce4; end: 10932fda3;  */

undefined8 * FUN_10932fce4(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aec578;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  *(int *)(puVar2 + 6) = iVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar2[4] = *(undefined8 *)(param_2 + 0x20);
  puVar2[3] = uVar5;
  if (iVar1 == 2) {
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  }
  else if (iVar1 == 1) {
    puVar4 = (ulong *)(param_2 + 0x28);
    puVar3 = (ulong *)*puVar4;
    if ((*puVar4 & 3) != 0) {
      func_0x000107c30244(puVar4,param_1);
      puVar3 = puVar4;
    }
    puVar2[5] = puVar3;
  }
  return puVar2;
}



/* Entry: 10932fda4; end: 10932fe6f;  */

undefined8 * FUN_10932fda4(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aeec78;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 10932fe70; end: 10932ff0b;  */

undefined8 * FUN_10932fe70(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec1b8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x441a00000;
  func_0x0001093172e0();
  return puVar1;
}



/* Entry: 10932ff0c; end: 10932ffdf;  */

undefined8 * FUN_10932ff0c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aed108;
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
    func_0x00010932fe2c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar2[0xb] = *(undefined8 *)(param_2 + 0x58);
  puVar2[10] = uVar6;
  puVar2[9] = uVar5;
  puVar2[8] = uVar4;
  puVar2[7] = uVar3;
  return puVar2;
}



/* Entry: 10932ffe0; end: 109330093;  */

undefined8 * FUN_10932ffe0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec398;
  puVar1[2] = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0x38d1b717;
  puVar1[4] = 0x300000015;
  puVar1[5] = 0x3c23d70a0000001e;
  *(undefined1 *)(puVar1 + 3) = 0;
  FUN_10931d594();
  return puVar1;
}



/* Entry: 109330094; end: 1093301f3;  */

undefined8 * FUN_109330094(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x90;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x90);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aecca8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_109311ab0(puVar1 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_109311ab0(puVar1 + 6,param_1,param_2 + 0x30);
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_1;
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(puVar1 + 9,param_2 + 0x48);
  }
  FUN_109311ab0(puVar1 + 0xc,param_1,param_2 + 0x60);
  *(undefined4 *)(puVar1 + 0xe) = 0;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x78));
  }
  puVar1[0xf] = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(puVar1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  puVar1[0x10] = uVar2;
  return puVar1;
}



/* Entry: 1093301f4; end: 109330287;  */

undefined8 * FUN_1093301f4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aecf28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000109312590(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109330288; end: 10933030f;  */

undefined8 * FUN_109330288(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aef578;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_109311ab0(puVar1 + 5,param_1,param_2 + 0x28);
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_109311ab0(puVar1 + 8,param_1,param_2 + 0x40);
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  return puVar1;
}



/* Entry: 109330310; end: 10933039b;  */

undefined8 * FUN_109330310(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec4d8;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  FUN_109315edc();
  return puVar1;
}



/* Entry: 10933039c; end: 10933042f;  */

undefined8 * FUN_10933039c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aed1f8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1093130e4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109330430; end: 1093304bb;  */

undefined8 * FUN_109330430(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec118;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  func_0x0001093161cc();
  return puVar1;
}



/* Entry: 1093304bc; end: 10933062b;  */

undefined8 * FUN_1093304bc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aecac8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932fce4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10932fce4(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar2;
}



/* Entry: 10933062c; end: 1093306bb;  */

undefined8 * FUN_10933062c(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aec708;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  FUN_109316d40();
  return puVar1;
}



/* Entry: 1093306bc; end: 1093307bf;  */

undefined8 * FUN_1093306bc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aece38;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_1093118fc(puVar2 + 3,param_1,param_2 + 0x18);
  FUN_1093118fc(puVar2 + 5,param_1,param_2 + 0x28);
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932fce4(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10932fce4(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = param_1;
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48);
  return puVar2;
}



/* Entry: 1093307c0; end: 1093309bb;  */

undefined8 * FUN_1093307c0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aec8e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10932fce4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar2;
}



/* Entry: 1093309bc; end: 109330a47;  */

undefined8 * FUN_1093309bc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec348;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_10931a00c();
  return puVar1;
}



/* Entry: 109330a48; end: 109330b07;  */

undefined8 * FUN_109330a48(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aec6b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  puVar3 = (ulong *)(param_2 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[3] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x20);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[4] = puVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 109330b08; end: 109330b9f;  */

undefined8 * FUN_109330b08(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec758;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x400000000;
  FUN_10931a6c4();
  return puVar1;
}



/* Entry: 109330ba0; end: 109330cff;  */

undefined8 * FUN_109330ba0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aecd48;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar2 + 3,param_2 + 0x18);
  }
  puVar5 = (ulong *)(param_2 + 0x30);
  puVar3 = (ulong *)*puVar5;
  if ((*puVar5 & 3) != 0) {
    func_0x000107c30244(puVar5,param_1);
    puVar3 = puVar5;
  }
  puVar2[6] = puVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = puVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x50));
  }
  puVar2[10] = puVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010932fde8(param_1,*(undefined8 *)(param_2 + 0x58));
  }
  puVar2[0xb] = param_1;
  return puVar2;
}



/* Entry: 109330d00; end: 109330d87;  */

undefined8 * FUN_109330d00(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec078;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10931b750();
  return puVar1;
}



/* Entry: 109330d88; end: 109330e33;  */

undefined8 * FUN_109330d88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aed068;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)((long)puVar1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  puVar1[6] = uVar2;
  return puVar1;
}



/* Entry: 109330e34; end: 109330edb;  */

undefined8 * FUN_109330e34(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec488;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x3f00000041a00000;
  puVar1[5] = 0x40a0000000000004;
  FUN_10931bf1c();
  return puVar1;
}



/* Entry: 109330edc; end: 109330fff;  */

undefined8 * FUN_109330edc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aed248;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_109311ab0(puVar2 + 3,param_1,param_2 + 0x18);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = param_1;
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(puVar2 + 5,param_2 + 0x28);
  }
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932fe70(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10932ff0c(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010932fe2c(param_1,*(undefined8 *)(param_2 + 0x50));
  }
  puVar2[10] = param_1;
  return puVar2;
}



/* Entry: 109331000; end: 1093310c3;  */

undefined8 * FUN_109331000(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aeca78;
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
    FUN_10932ffe0(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar2[8] = *(undefined8 *)(param_2 + 0x40);
  puVar2[7] = uVar3;
  return puVar2;
}



/* Entry: 1093310c4; end: 10933115f;  */

undefined8 * FUN_1093310c4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec2f8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x41f000003f800000;
  FUN_10931e01c();
  return puVar1;
}



/* Entry: 109331160; end: 10933123f;  */

undefined8 * FUN_109331160(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aec028;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar3 = (ulong *)(param_2 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[6] = puVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x40);
  puVar1[7] = uVar4;
  return puVar1;
}



/* Entry: 109331240; end: 1093312cf;  */

undefined8 * FUN_109331240(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aebe98;
  puVar1[3] = 0x400000000;
  puVar1[2] = 0;
  FUN_10931e998();
  return puVar1;
}



/* Entry: 1093312d0; end: 10933159b;  */

undefined8 * FUN_1093312d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aecde8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar1[8] = *(undefined8 *)(param_2 + 0x40);
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  return puVar1;
}



/* Entry: 10933159c; end: 10933162b;  */

undefined8 * FUN_10933159c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aebf38;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x41a0000000000000;
  func_0x00010931aa68();
  return puVar1;
}



/* Entry: 10933162c; end: 1093316c3;  */

undefined8 * FUN_10933162c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec168;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 4;
  FUN_1093225c4();
  return puVar1;
}



/* Entry: 1093316c4; end: 109331753;  */

undefined8 * FUN_1093316c4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec3e8;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 3;
  func_0x00010932295c();
  return puVar1;
}



/* Entry: 109331754; end: 109331857;  */

undefined8 * FUN_109331754(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x88;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x88);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aed1a8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_109311ab0(puVar2 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar2 + 5) = 0;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_109312ce0(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_109330094(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1093301f4(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  puVar2[0x10] = *(undefined8 *)(param_2 + 0x80);
  puVar2[0xf] = uVar10;
  puVar2[0xe] = uVar9;
  puVar2[0xd] = uVar8;
  puVar2[0xc] = uVar7;
  puVar2[0xb] = uVar6;
  puVar2[10] = uVar5;
  puVar2[9] = uVar4;
  return puVar2;
}



/* Entry: 109331858; end: 10933194f;  */

undefined8 * FUN_109331858(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aed158;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar3 = (ulong *)(param_2 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[6] = puVar2;
  if ((*(byte *)(puVar1 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109312ce0(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar1[7] = param_1;
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x40);
  return puVar1;
}



/* Entry: 109331950; end: 1093319df;  */

undefined8 * FUN_109331950(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aecc08;
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



/* Entry: 1093319e0; end: 109331a77;  */

undefined8 * FUN_1093319e0(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110aec7f8;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109331a78; end: 109331b0f;  */

undefined8 * FUN_109331a78(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aec5c8;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109331b10; end: 109331ba7;  */

undefined8 * FUN_109331b10(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aec2a8;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109331ba8; end: 109331cbb;  */

undefined8 * FUN_109331ba8(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aebe48;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109311ab0(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 109331cbc; end: 109331dc7;  */

undefined8 * FUN_109331cbc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x78);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aecfc8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(puVar1 + 6,param_2 + 0x30);
  }
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_1;
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303bc(puVar1 + 9,param_2 + 0x48);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  puVar1[0xe] = *(undefined8 *)(param_2 + 0x70);
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  return puVar1;
}



/* Entry: 109331dc8; end: 109331e57;  */

undefined8 * FUN_109331dc8(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110aec618;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 109331e58; end: 109331eef;  */

undefined8 * FUN_109331e58(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110aec528;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109331ef0; end: 109331fdf;  */

undefined8 * FUN_109331ef0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aed0b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar3 = (ulong *)(param_2 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[6] = puVar2;
  if ((*(byte *)(puVar1 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109330094(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar1[7] = param_1;
  return puVar1;
}



/* Entry: 109331fe0; end: 1093320db;  */

undefined8 * FUN_109331fe0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aecc58;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(puVar1 + 3,param_2 + 0x18);
  }
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(puVar1 + 6,param_2 + 0x30);
  }
  puVar3 = (ulong *)(param_2 + 0x48);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[9] = puVar2;
  return puVar1;
}



/* Entry: 1093320dc; end: 1093322f7;  */

undefined8 * FUN_1093320dc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xb8;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0xb8);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aec9d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_109311ab0(puVar2 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_109311ab0(puVar2 + 6,param_1,param_2 + 0x30);
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_109311ab0(puVar2 + 9,param_1,param_2 + 0x48);
  *(undefined4 *)(puVar2 + 0xb) = 0;
  FUN_109311ab0(puVar2 + 0xc,param_1,param_2 + 0x60);
  *(undefined4 *)(puVar2 + 0xe) = 0;
  FUN_1093118fc(puVar2 + 0xf,param_1,param_2 + 0x78);
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = param_1;
  if (*(int *)(param_2 + 0x90) != 0) {
    func_0x000107c303c4(puVar2 + 0x11,param_2 + 0x88);
  }
  puVar5 = (ulong *)(param_2 + 0xa0);
  puVar3 = (ulong *)*puVar5;
  if ((*puVar5 & 3) != 0) {
    func_0x000107c30244(puVar5,param_1);
    puVar3 = puVar5;
  }
  puVar2[0x14] = puVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x000109330288(param_1,*(undefined8 *)(param_2 + 0xa8));
  }
  puVar2[0x15] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x0001093302cc(param_1,*(undefined8 *)(param_2 + 0xb0));
  }
  puVar2[0x16] = param_1;
  return puVar2;
}



/* Entry: 1093322f8; end: 1093323c3;  */

undefined8 * FUN_1093322f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aec7a8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_109311ab0(puVar1 + 3,param_1,param_2 + 0x18);
  puVar3 = (ulong *)(param_2 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[5] = puVar2;
  return puVar1;
}



/* Entry: 1093323c4; end: 10933255f;  */

undefined8 * FUN_1093323c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aebf88;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  puVar3 = (ulong *)(param_2 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[3] = puVar2;
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
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  puVar1[6] = uVar4;
  return puVar1;
}



/* Entry: 109332560; end: 109332677;  */

undefined8 * FUN_109332560(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aec668;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(puVar1 + 3,param_2 + 0x18);
  }
  puVar3 = (ulong *)(param_2 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[6] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x38);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[7] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x40);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[8] = puVar2;
  puVar1[9] = *(undefined8 *)(param_2 + 0x48);
  return puVar1;
}



/* Entry: 109332678; end: 109332703;  */

undefined8 * FUN_109332678(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aec258;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  FUN_10932c664();
  return puVar1;
}



/* Entry: 109332704; end: 109332caf;  */

undefined8 * FUN_109332704(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aecd98;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x0001093323c4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x0001093324ac(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109332560(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = param_1;
  return puVar2;
}



/* Entry: 109332cb0; end: 109332cf3;  */

undefined8 * FUN_109332cb0(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xe0;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0xe0);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110aeb7e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(puVar2 + 3,param_2 + 0x18);
  }
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(puVar2 + 6,param_2 + 0x30);
  }
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_1;
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(puVar2 + 9,param_2 + 0x48);
  }
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = param_1;
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(puVar2 + 0xc,param_2 + 0x60);
  }
  FUN_1093118fc(puVar2 + 0xf,param_1,param_2 + 0x78);
  FUN_1093118fc(puVar2 + 0x11,param_1,param_2 + 0x88);
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = param_1;
  if (*(int *)(param_2 + 0xa0) != 0) {
    func_0x000107c303c4(puVar2 + 0x13,param_2 + 0x98);
  }
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = param_1;
  if (*(int *)(param_2 + 0xb8) != 0) {
    func_0x000107c303c4(puVar2 + 0x16,param_2 + 0xb0);
  }
  puVar3 = (ulong *)(param_2 + 200);
  puVar1 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar1 = puVar3;
  }
  puVar2[0x19] = puVar1;
  if ((*(byte *)(puVar2 + 2) >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109312ce0(param_1,*(undefined8 *)(param_2 + 0xd0));
  }
  puVar2[0x1a] = param_1;
  puVar2[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  return puVar2;
}



/* Entry: 109332cf4; end: 109332e4f;  */

undefined8 * FUN_109332cf4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeced8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  func_0x000109311b24(puVar1 + 3,param_1,param_2 + 0x18);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109332678(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar1[5] = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  puVar1[6] = uVar2;
  return puVar1;
}



/* Entry: 109332e50; end: 109332ea7;  */

long FUN_109332e50(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109332ea8; end: 109332ed7;  */

undefined ** FUN_109332ea8(void)

{
  return &PTR_DAT_110aeefd8;
}



/* Entry: 109332ed8; end: 109333073;  */

long * FUN_109332ed8(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar5 + (long)((int)plVar2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)plVar2 = 0x15;
    *(undefined4 *)((long)plVar2 + 1) = uVar1;
    plVar2 = (long *)((long)plVar2 + 5);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(plVar2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar2 + (long)iVar7);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar2));
        } while ((int)puVar8 < (int)uVar3);
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



/* Entry: 109333074; end: 10933312f;  */

ulong FUN_109333074(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}


