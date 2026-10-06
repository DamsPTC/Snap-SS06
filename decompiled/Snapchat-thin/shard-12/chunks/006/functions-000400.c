/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10931b07c; end: 10931b07f;  */

long FUN_10931b07c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  FUN_10932e2d0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931b080; end: 10931b093;  */

void FUN_10931b080(void)

{
  FUN_10931afa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931b094; end: 10931b09f;  */

undefined ** FUN_10931b094(void)

{
  return &PTR_DAT_110aed9e8;
}



/* Entry: 10931b0a0; end: 10931b17b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931b0a0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
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
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x58));
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



/* Entry: 10931b17c; end: 10931b3b7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931b17c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 >> 1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if ((uVar7 & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,5,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
  }
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 != 0) {
    iVar9 = 0;
    plVar3 = plVar2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar9 * 8 + 7);
      }
      plVar2 = (long *)0x6;
      func_0x000107c303cc(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar3,param_3);
      iVar9 = iVar9 + 1;
      plVar3 = plVar2;
    } while (iVar10 != iVar9);
  }
  plVar3 = plVar2;
  if ((uVar7 >> 5 & 1) != 0) {
    plVar3 = (long *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),plVar2,param_3);
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
      lVar11 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(plVar3,lVar6,(long)iVar10);
          uVar7 = (int)uVar8 - iVar10;
          uVar8 = (ulong)uVar7;
          lVar6 = lVar6 + iVar10;
          plVar5 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar10);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar5 <= plVar2);
          lVar11 = (long)plVar5 + (0x10 - (long)plVar3);
        } while ((int)lVar11 < (int)uVar7);
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



/* Entry: 10931b3b8; end: 10931b59f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10931b3b8(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_1 + 0x20);
  puVar5 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar5 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar6 = lVar4 << 3;
    do {
      uVar3 = *puVar5;
      FUN_10931b3b8();
      lVar4 = uVar3 + lVar4 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar3 + 0x17);
      uVar3 = *(ulong *)(uVar3 + 8);
      if (-1 < (char)bVar2) {
        uVar3 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar3 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x38);
      FUN_10933c8f8();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x40);
      FUN_10933c8f8();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x48);
      FUN_10933c8f8();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x50);
      FUN_10933c8f8();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x58);
      FUN_10933c8f8();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar6 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10931b5a0; end: 10931b5a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931b5a0(long param_1,long param_2)

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
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar4;
      }
      else {
        FUN_10933c5e8();
      }
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



/* Entry: 10931b5a4; end: 10931b74f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931b5a4(long param_1,long param_2)

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
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar4;
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010932fde8(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar4;
      }
      else {
        FUN_10933c5e8();
      }
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



/* Entry: 10931b750; end: 10931b79b;  */

void FUN_10931b750(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
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



/* Entry: 10931b79c; end: 10931b7f3;  */

long FUN_10931b79c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931b7f4; end: 10931b823;  */

undefined ** FUN_10931b7f4(void)

{
  return &PTR_DAT_110aeda30;
}



/* Entry: 10931b824; end: 10931ba03;  */

long * FUN_10931b824(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar4 >> 1 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      puVar9 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar9 < (int)uVar4) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(param_2,lVar3,(long)iVar8);
          uVar4 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar8;
          plVar6 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar6 <= plVar5);
          puVar9 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar9 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar3,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar3,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar4);
    }
  }
  return param_2;
}



/* Entry: 10931ba04; end: 10931ba57;  */

long FUN_10931ba04(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar3 = 0;
  if ((uVar1 & 1) != 0) {
    lVar3 = 5;
  }
  if ((uVar1 & 2) != 0) {
    lVar3 = lVar3 + 5;
  }
  lVar2 = 0;
  if ((uVar1 & 3) != 0) {
    lVar2 = lVar3;
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



/* Entry: 10931ba58; end: 10931ba8b;  */

long FUN_10931ba58(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932e304(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931ba8c; end: 10931ba8f;  */

long FUN_10931ba8c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10932e304(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931ba90; end: 10931baa3;  */

void FUN_10931ba90(void)

{
  FUN_10931ba58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931baa4; end: 10931baaf;  */

undefined ** FUN_10931baa4(void)

{
  return &PTR_DAT_110aeda80;
}



/* Entry: 10931bab0; end: 10931bb0f;  */

void FUN_10931bab0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 0xf) != 0) {
    *(undefined8 *)(param_1 + 0x35) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10931bb10; end: 10931be6b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931bb10(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar7,param_3);
      iVar11 = iVar11 + 1;
      plVar7 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    plVar7 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = plVar7;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    plVar7 = (long *)*param_3;
    if (plVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar8 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar8 + (long)((int)param_2 - (int)plVar7));
        plVar7 = (long *)*param_3;
      } while (plVar7 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    plVar7 = param_3;
    func_0x0001088b96ec(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
    param_2 = plVar7;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    plVar7 = (long *)*param_3;
    if (plVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar8 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar8 + (long)((int)param_2 - (int)plVar7));
        plVar7 = (long *)*param_3;
      } while (plVar7 <= param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x30;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar10 = *(long *)(uVar9 + 8);
      uVar6 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      lVar10 = uVar9 + 8;
    }
    uVar5 = (uint)uVar6;
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      puVar13 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar13 < (int)uVar5) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(param_2,lVar10,(long)iVar12);
          uVar5 = (int)uVar6 - iVar12;
          uVar6 = (ulong)uVar5;
          lVar10 = lVar10 + iVar12;
          plVar8 = (long *)*param_3;
          plVar7 = (long *)((long)param_2 + (long)iVar12);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar4 + (long)((int)plVar7 - (int)plVar8));
            plVar8 = (long *)*param_3;
            param_2 = plVar7;
          } while (plVar8 <= plVar7);
          puVar13 = (undefined1 *)((long)plVar8 + (0x10 - (long)param_2));
        } while ((int)puVar13 < (int)uVar5);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar5);
      param_2 = (long *)((long)param_2 + (long)(int)uVar5);
    }
    else {
      _memcpy(param_2,lVar10,uVar6 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar5);
    }
  }
  return param_2;
}



/* Entry: 10931be6c; end: 10931be6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931be6c(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
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



/* Entry: 10931be70; end: 10931bf1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931be70(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
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



/* Entry: 10931bf1c; end: 10931bfaf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931bf1c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
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
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
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



/* Entry: 10931bfb0; end: 10931c007;  */

long FUN_10931bfb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931c008; end: 10931c04f;  */

undefined ** FUN_10931c008(void)

{
  return &PTR_DAT_110aedad0;
}



/* Entry: 10931c050; end: 10931c2cb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931c050(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0xd;
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
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar7 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    plVar3 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 5 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined1 *)param_2 = 0x35;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if ((uVar7 >> 1 & 1) != 0) {
    plVar3 = param_3;
    func_0x00010598f468(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
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



/* Entry: 10931c2cc; end: 10931c393;  */

ulong FUN_10931c2cc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 + 5;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 5;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 10931c394; end: 10931c3d7;  */

long FUN_10931c394(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10933c2d4();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931c3d8; end: 10931c3db;  */

long FUN_10931c3d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10933c2d4();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931c3dc; end: 10931c3ef;  */

void FUN_10931c3dc(void)

{
  FUN_10931c394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931c3f0; end: 10931c3fb;  */

undefined ** FUN_10931c3f0(void)

{
  return &PTR_DAT_110aedb18;
}



/* Entry: 10931c3fc; end: 10931c493;  */

void FUN_10931c3fc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_10933c32c(*(undefined8 *)(param_1 + 0x30));
  }
  if ((uVar1 & 0xfe) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  if ((uVar1 & 0x7f00) != 0) {
    *(undefined2 *)(param_1 + 0x4b) = 0x101;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(undefined8 *)(param_1 + 0x50) = 0x200000004;
    *(undefined8 *)(param_1 + 0x58) = 0x3f80000040a00000;
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



/* Entry: 10931c494; end: 10931ca6f;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10931c494(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
    param_2 = pbVar5;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar5 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x3c),param_2);
    param_2 = pbVar5;
  }
  pbVar5 = param_2;
  if ((uVar11 >> 0xb & 1) != 0) {
    pbVar5 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x50),param_2);
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar8 = pbVar5;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      pbVar5 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar8,param_3);
      iVar13 = iVar13 + 1;
      pbVar8 = pbVar5;
    } while (iVar14 != iVar13);
  }
  if ((uVar11 >> 3 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x40);
    uVar12 = (ulong)(int)uVar4;
    pbVar8 = pbVar5 + 1;
    *pbVar5 = 0x28;
    uVar7 = uVar12;
    pbVar5 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar12 = uVar7 >> 7;
        uVar9 = uVar7 >> 0xe;
        uVar7 = uVar12;
        pbVar5 = pbVar8;
      } while (uVar9 != 0);
    }
    pbVar5 = pbVar8 + 1;
    *pbVar8 = (byte)uVar12;
  }
  if ((uVar11 >> 0xc & 1) != 0) {
    pbVar8 = param_3;
    func_0x0001089f53c8(param_3,*(undefined4 *)(param_1 + 0x54),pbVar5);
    pbVar5 = pbVar8;
  }
  if ((uVar11 >> 4 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x44);
    uVar12 = (ulong)(int)uVar4;
    pbVar8 = pbVar5 + 1;
    *pbVar5 = 0x38;
    uVar7 = uVar12;
    pbVar5 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar12 = uVar7 >> 7;
        uVar9 = uVar7 >> 0xe;
        uVar7 = uVar12;
        pbVar5 = pbVar8;
      } while (uVar9 != 0);
    }
    pbVar5 = pbVar8 + 1;
    *pbVar8 = (byte)uVar12;
  }
  if ((uVar11 & 1) != 0) {
    pbVar8 = (byte *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28),pbVar5,param_3);
    pbVar5 = pbVar8;
  }
  if ((uVar11 >> 5 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x48);
    *pbVar5 = 0x48;
    pbVar5[1] = bVar3;
    pbVar5 = pbVar5 + 2;
  }
  if ((uVar11 >> 6 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x49);
    *pbVar5 = 0x50;
    pbVar5[1] = bVar3;
    pbVar5 = pbVar5 + 2;
  }
  if ((uVar11 >> 8 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x4b);
    *pbVar5 = 0x58;
    pbVar5[1] = bVar3;
    pbVar5 = pbVar5 + 2;
  }
  if ((uVar11 >> 0xd & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *pbVar5 = 0x65;
    *(undefined4 *)(pbVar5 + 1) = uVar2;
    pbVar5 = pbVar5 + 5;
  }
  if ((uVar11 >> 0xe & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *pbVar5 = 0x6d;
    *(undefined4 *)(pbVar5 + 1) = uVar2;
    pbVar5 = pbVar5 + 5;
  }
  if ((uVar11 >> 7 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x4a);
    *pbVar5 = 0x70;
    pbVar5[1] = bVar3;
    pbVar5 = pbVar5 + 2;
  }
  if ((uVar11 >> 9 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x4c);
    *pbVar5 = 0x78;
    pbVar5[1] = bVar3;
    pbVar5 = pbVar5 + 2;
  }
  if ((uVar11 >> 10 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar6 + ((int)pbVar5 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar5);
    }
    bVar3 = *(byte *)(param_1 + 0x4d);
    pbVar5[0] = 0x80;
    pbVar5[1] = 1;
    pbVar5[2] = bVar3;
    pbVar5 = pbVar5 + 3;
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
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar8;
          _memcpy(pbVar5,lVar10,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar14;
          pbVar8 = *(byte **)param_3;
          pbVar6 = pbVar5 + iVar14;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar6 = pbVar5 + ((int)pbVar6 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar5 = pbVar6;
          } while (pbVar8 <= pbVar6);
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



/* Entry: 10931ca70; end: 10931cc7f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10931ca70(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      uVar2 = *puVar4;
      FUN_10933bbb4();
      lVar3 = uVar2 + lVar3 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010933c4e8();
      lVar3 = lVar3 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * -9 + 0x280U >> 6) + 1;
    }
    lVar3 = lVar3 + (ulong)((uVar1 >> 5 & 2) + (uVar1 >> 4 & 2) + (uVar1 >> 6 & 2));
  }
  if ((uVar1 & 0x7f00) != 0) {
    lVar3 = lVar3 + (ulong)((uVar1 >> 8 & 2) + (uVar1 >> 7 & 2));
    if ((uVar1 & 0x400) != 0) {
      lVar3 = lVar3 + 3;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 & 0x2000) != 0) {
      lVar3 = lVar3 + 5;
    }
    if ((uVar1 & 0x4000) != 0) {
      lVar3 = lVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar5 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10931cc80; end: 10931cc83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931cc80(long param_1,long param_2)

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
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010932fe2c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10933c594();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
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



/* Entry: 10931cc84; end: 10931ce33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931cc84(long param_1,long param_2)

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
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010932fe2c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10933c594();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
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



/* Entry: 10931ce34; end: 10931cec3;  */

long FUN_10931ce34(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10931c394();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10933c2d4();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10931cec4; end: 10931cec7;  */

long FUN_10931cec4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10931c394();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10933c2d4();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10931cec8; end: 10931cedb;  */

void FUN_10931cec8(void)

{
  FUN_10931ce34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931cedc; end: 10931cee7;  */

undefined ** FUN_10931cedc(void)

{
  return &PTR_DAT_110aedb60;
}



/* Entry: 10931cee8; end: 10931cf73;  */

void FUN_10931cee8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093173b8(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10931c3fc(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10933c32c(*(undefined8 *)(param_1 + 0x50));
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



/* Entry: 10931cf74; end: 10931d28f;  */

byte * FUN_10931cf74(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar14 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar14 & 1) != 0) {
    pbVar4 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
  }
  pbVar5 = pbVar4;
  if ((uVar14 >> 1 & 1) != 0) {
    pbVar5 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),pbVar4,param_3);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar2) {
    uVar18 = 0;
    pbVar4 = (byte *)(param_3 + 2);
    do {
      pbVar8 = pbVar5;
      pbVar12 = (byte *)*param_3;
      if ((byte *)*param_3 <= pbVar5) {
        do {
          pbVar8 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10931d05c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10931d0fc:
            *param_3 = (long)(param_3 + 4);
            pbVar9 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar12;
              param_3[3] = *(long *)(pbVar12 + 8);
              *(undefined8 *)pbVar4 = uVar19;
              param_3[1] = (long)pbVar12;
              goto LAB_10931d0fc;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar12 - (long)pbVar4);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) goto LAB_10931d05c;
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar4 = uVar19;
              pbVar9 = pbVar4 + (int)uStack_64;
              *param_3 = (long)pbVar9;
              param_3[1] = (long)pbStack_70;
            }
            else {
              uVar19 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar19;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *param_3 = (long)pbVar9;
              param_3[1] = 0;
              pbVar8 = pbStack_70;
            }
          }
          pbVar5 = pbVar8 + ((int)pbVar5 - (int)pbVar12);
          pbVar8 = pbVar5;
          pbVar12 = pbVar9;
        } while (pbVar9 <= pbVar5);
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + uVar18 * 4);
      uVar7 = (ulong)(int)uVar3;
      pbVar12 = pbVar8 + 1;
      *pbVar8 = 0x18;
      uVar15 = uVar7;
      pbVar5 = pbVar12;
      if (0x7f < uVar3) {
        do {
          pbVar12 = pbVar5 + 1;
          *pbVar5 = (byte)uVar15 | 0x80;
          uVar7 = uVar15 >> 7;
          uVar10 = uVar15 >> 0xe;
          uVar15 = uVar7;
          pbVar5 = pbVar12;
        } while (uVar10 != 0);
      }
      pbVar5 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar2);
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    iVar16 = 0;
    pbVar4 = pbVar5;
    do {
      uVar18 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar18 & 1) != 0) {
        puVar1 = (ulong *)(uVar18 + (long)iVar16 * 8 + 7);
      }
      pbVar5 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar16 = iVar16 + 1;
      pbVar4 = pbVar5;
    } while (iVar17 != iVar16);
  }
  pbVar4 = pbVar5;
  if ((uVar14 >> 2 & 1) != 0) {
    pbVar4 = (byte *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x28),pbVar5,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar15 = (ulong)*(char *)(uVar18 + 0x1f);
    if ((long)uVar15 < 0) {
      lVar13 = *(long *)(uVar18 + 8);
      uVar15 = (ulong)*(uint *)(uVar18 + 0x10);
    }
    else {
      lVar13 = uVar18 + 8;
    }
    uVar14 = (uint)uVar15;
    if (*param_3 - (long)pbVar4 < (long)(int)uVar14) {
      pbVar5 = (byte *)((*param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar5 < (int)uVar14) {
        do {
          iVar17 = (int)pbVar5;
          _memcpy(pbVar4,lVar13,(long)iVar17);
          uVar14 = (int)uVar15 - iVar17;
          uVar15 = (ulong)uVar14;
          lVar13 = lVar13 + iVar17;
          pbVar5 = (byte *)*param_3;
          pbVar8 = pbVar4 + iVar17;
          do {
            pbVar4 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar6 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar6 + (long)((int)pbVar8 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            pbVar4 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar4);
        } while ((int)pbVar5 < (int)uVar14);
      }
      _memcpy(pbVar4,lVar13,(long)(int)uVar14);
      pbVar4 = pbVar4 + (int)uVar14;
    }
    else {
      _memcpy(pbVar4,lVar13,uVar15 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar14;
    }
  }
  return pbVar4;
}



/* Entry: 10931d290; end: 10931d417;  */

long FUN_10931d290(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar4 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT((long)*piVar4) * -9 + 0x280U >> 6) + lVar3;
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 != 0);
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar3 = lVar3 + (ulong)uVar1 + (long)iVar2;
  puVar6 = (ulong *)(param_1 + 0x28);
  if ((uVar5 & 1) != 0) {
    puVar6 = (ulong *)(uVar5 + 7);
  }
  if (iVar2 != 0) {
    lVar7 = (long)iVar2 << 3;
    do {
      uVar5 = *puVar6;
      FUN_10933bbb4();
      lVar3 = uVar5 + lVar3 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x40);
      FUN_1093175e8();
      lVar3 = lVar3 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x48);
      FUN_10931ca70();
      lVar3 = lVar3 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x50);
      func_0x00010933c4e8();
      lVar3 = lVar3 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar7 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10931d418; end: 10931d41b;  */

void FUN_10931d418(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar8;
        FUN_10932fe70(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        func_0x0001093172e0();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar8;
        FUN_10932ff0c(uVar8,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10931cc84();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        func_0x00010932fe2c(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
      else {
        FUN_10933c594();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 10931d41c; end: 10931d593;  */

void FUN_10931d41c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 7) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar8;
        FUN_10932fe70(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        func_0x0001093172e0();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar8;
        FUN_10932ff0c(uVar8,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10931cc84();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        func_0x00010932fe2c(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
      else {
        FUN_10933c594();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 10931d594; end: 10931d627;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931d594(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
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
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
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



/* Entry: 10931d628; end: 10931d67f;  */

long FUN_10931d628(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931d680; end: 10931d6d7;  */

undefined ** FUN_10931d680(void)

{
  return &PTR_DAT_110aedba8;
}



/* Entry: 10931d6d8; end: 10931d953;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931d6d8(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 >> 2 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar4 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined1 *)param_2 = 0x25;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)param_2 = 0x2d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0x30;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar7,(long)iVar10);
          uVar8 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar10;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar3 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar6 <= plVar4);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar7,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 10931d954; end: 10931da1b;  */

ulong FUN_10931d954(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ulong)uVar1 & 1) << 1;
    if ((uVar1 & 2) != 0) {
      uVar2 = ((ulong)uVar1 & 1) << 1 | 5;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 & 0x20) != 0) {
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



/* Entry: 10931da1c; end: 10931da6f;  */

long FUN_10931da1c(long param_1)

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
  FUN_109311f44(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931da70; end: 10931da73;  */

long FUN_10931da70(long param_1)

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
  FUN_109311f44(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931da74; end: 10931da87;  */

void FUN_10931da74(void)

{
  FUN_10931da1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931da88; end: 10931da93;  */

undefined ** FUN_10931da88(void)

{
  return &PTR_DAT_110aedbf0;
}



/* Entry: 10931da94; end: 10931db0b;  */

void FUN_10931da94(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010931d68c(*(undefined8 *)(param_1 + 0x30));
  }
  if ((uVar1 & 0x1e) != 0) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0x3f4ccccd41200000;
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



/* Entry: 10931db0c; end: 10931df0f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931db0c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 >> 1 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar9 & 1) != 0) {
    plVar5 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    param_2 = plVar5;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= param_2) {
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
    }
    uVar3 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x28;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = (long *)((long)param_2 + 2);
  }
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar5 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x6;
      func_0x000107c303cc(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar5,param_3);
      iVar11 = iVar11 + 1;
      plVar5 = param_2;
    } while (iVar12 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar8 = *(long *)(uVar6 + 8);
      uVar10 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar8 = uVar6 + 8;
    }
    uVar9 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      puVar13 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar13 < (int)uVar9) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(param_2,lVar8,(long)iVar12);
          uVar9 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar9;
          lVar8 = lVar8 + iVar12;
          plVar7 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar12);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar4 + (long)((int)plVar5 - (int)plVar7));
            plVar7 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar7 <= plVar5);
          puVar13 = (undefined1 *)((long)plVar7 + (0x10 - (long)param_2));
        } while ((int)puVar13 < (int)uVar9);
      }
      _memcpy(param_2,lVar8,(long)(int)uVar9);
      param_2 = (long *)((long)param_2 + (long)(int)uVar9);
    }
    else {
      _memcpy(param_2,lVar8,uVar10 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar9);
    }
  }
  return param_2;
}



/* Entry: 10931df10; end: 10931df13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931df10(long param_1,long param_2)

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
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10932ffe0(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10931d594();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
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



/* Entry: 10931df14; end: 10931e01b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931df14(long param_1,long param_2)

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
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10932ffe0(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10931d594();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
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



/* Entry: 10931e01c; end: 10931e08f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931e01c(long param_1,long param_2)

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



/* Entry: 10931e090; end: 10931e0e7;  */

long FUN_10931e090(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931e0e8; end: 10931e123;  */

undefined ** FUN_10931e0e8(void)

{
  return &PTR_DAT_110aedc30;
}



/* Entry: 10931e124; end: 10931e3a7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931e124(long param_1,long *param_2,long *param_3)

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
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
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
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
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
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
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
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x25;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      puVar10 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar10 < (int)uVar7) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(param_2,lVar6,(long)iVar9);
          uVar7 = (int)uVar8 - iVar9;
          uVar8 = (ulong)uVar7;
          lVar6 = lVar6 + iVar9;
          plVar5 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar2 + (long)((int)plVar3 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar5 <= plVar3);
          puVar10 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar10 < (int)uVar7);
      }
      _memcpy(param_2,lVar6,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar6,uVar8 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 10931e3a8; end: 10931e413;  */

long FUN_10931e3a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar3 = 0;
  if ((uVar1 & 1) != 0) {
    lVar3 = 5;
  }
  if ((uVar1 & 2) != 0) {
    lVar3 = lVar3 + 5;
  }
  if ((uVar1 & 4) != 0) {
    lVar3 = lVar3 + 5;
  }
  if ((uVar1 & 8) != 0) {
    lVar3 = lVar3 + 5;
  }
  lVar2 = 0;
  if ((uVar1 & 0xf) != 0) {
    lVar2 = lVar3;
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



/* Entry: 10931e414; end: 10931e44f;  */

long FUN_10931e414(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  FUN_10932e338(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931e450; end: 10931e453;  */

long FUN_10931e450(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  FUN_10932e338(param_1 + 0x18);
  return param_1;
}



/* Entry: 10931e454; end: 10931e467;  */

void FUN_10931e454(void)

{
  FUN_10931e414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931e468; end: 10931e473;  */

undefined ** FUN_10931e468(void)

{
  return &PTR_DAT_110aedc70;
}



/* Entry: 10931e474; end: 10931e503;  */

void FUN_10931e474(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
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
  if ((uVar1 & 0xe) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x41f00000;
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



/* Entry: 10931e504; end: 10931e8b3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931e504(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 >> 1 & 1) != 0) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 2 & 1) != 0) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 3 & 1) != 0) {
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
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if ((uVar8 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar4 = plVar3;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar10 * 8 + 7);
      }
      plVar3 = (long *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar4,param_3);
      iVar10 = iVar10 + 1;
      plVar4 = plVar3;
    } while (iVar11 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)plVar3 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar3,lVar7,(long)iVar11);
          uVar8 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar11;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)plVar3 + (long)iVar11);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar3 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar3 = plVar4;
          } while (plVar6 <= plVar4);
          puVar12 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar3));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar3,lVar7,(long)(int)uVar8);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar3,lVar7,uVar9 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
  }
  return plVar3;
}



/* Entry: 10931e8b4; end: 10931e8b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931e8b4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
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



/* Entry: 10931e8b8; end: 10931e997;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931e8b8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
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



/* Entry: 10931e998; end: 10931e9e3;  */

void FUN_10931e998(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
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



/* Entry: 10931e9e4; end: 10931ea3b;  */

long FUN_10931e9e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10931ea3c; end: 10931ea73;  */

undefined ** FUN_10931ea3c(void)

{
  return &PTR_DAT_110aedcb0;
}



/* Entry: 10931ea74; end: 10931ebcf;  */

long * FUN_10931ea74(long param_1,long *param_2,long *param_3)

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
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x1c),plVar1);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
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



/* Entry: 10931ebd0; end: 10931ec57;  */

ulong FUN_10931ebd0(long param_1)

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
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
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



/* Entry: 10931ec58; end: 10931ecd7;  */

long FUN_10931ec58(long param_1)

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



/* Entry: 10931ecd8; end: 10931ecdb;  */

long FUN_10931ecd8(long param_1)

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



/* Entry: 10931ecdc; end: 10931ecef;  */

void FUN_10931ecdc(void)

{
  FUN_10931ec58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931ecf0; end: 10931ed17;  */

undefined ** FUN_10931ecf0(void)

{
  return &PTR_DAT_110aedcf0;
}



/* Entry: 10931ed18; end: 10931f1e7;  */

byte * FUN_10931ed18(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar11) {
    uVar14 = 0;
    pbVar5 = (byte *)(param_3 + 2);
    do {
      pbVar4 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10931edb8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10931ee50:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar15 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar15;
              param_3[1] = (long)pbVar9;
              goto LAB_10931ee50;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10931edb8;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar15 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar5 = uVar15;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar15 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar15;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar4 + ((int)param_2 - (int)pbVar9);
          pbVar4 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + uVar14 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 8;
      uVar12 = uVar3;
      pbVar4 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar4 + 1;
          *pbVar4 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar7 = uVar12 >> 0xe;
          uVar12 = uVar3;
          pbVar4 = pbVar9;
        } while (uVar7 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar11) {
    uVar14 = 0;
    pbVar5 = (byte *)(param_3 + 2);
    do {
      pbVar4 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10931eef0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10931ef88:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar15 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar15;
              param_3[1] = (long)pbVar9;
              goto LAB_10931ef88;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10931eef0;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar15 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar5 = uVar15;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar15 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar15;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar4 + ((int)param_2 - (int)pbVar9);
          pbVar4 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + uVar14 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 0x10;
      uVar12 = uVar3;
      pbVar4 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar4 + 1;
          *pbVar4 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar7 = uVar12 >> 0xe;
          uVar12 = uVar3;
          pbVar4 = pbVar9;
        } while (uVar7 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar11) {
    uVar14 = 0;
    pbVar5 = (byte *)(param_3 + 2);
    do {
      pbVar4 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10931f028:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10931f0c0:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar15 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar15;
              param_3[1] = (long)pbVar9;
              goto LAB_10931f0c0;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10931f028;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar15 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar5 = uVar15;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar15 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar15;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar4 + ((int)param_2 - (int)pbVar9);
          pbVar4 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + uVar14 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 0x18;
      uVar12 = uVar3;
      pbVar4 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar4 + 1;
          *pbVar4 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar7 = uVar12 >> 0xe;
          uVar12 = uVar3;
          pbVar4 = pbVar9;
        } while (uVar7 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar14 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar10 = *(long *)(uVar14 + 8);
      uVar12 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      lVar10 = uVar14 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar11) {
        do {
          iVar13 = (int)pbVar5;
          _memcpy(param_2,lVar10,(long)iVar13);
          uVar11 = (int)uVar12 - iVar13;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar13;
          pbVar5 = (byte *)*param_3;
          pbVar4 = param_2 + iVar13;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar4 = (byte *)((long)plVar2 + (long)((int)pbVar4 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar4;
          } while (pbVar5 <= pbVar4);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar11);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar10,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 10931f1e8; end: 10931f2eb;  */

long FUN_10931f1e8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x18);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)uVar2 < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x28);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar7;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((int)uVar3 < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar6 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x38);
    do {
      lVar8 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar8;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  lVar8 = lVar4 + (ulong)uVar1 + (ulong)uVar2 + lVar7 + (ulong)uVar3 + lVar8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar8 = lVar4 + lVar8;
  }
  *(int *)(param_1 + 0x40) = (int)lVar8;
  return lVar8;
}



/* Entry: 10931f2ec; end: 10931f44b;  */

void FUN_10931f2ec(long param_1,long param_2)

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
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x24) < iVar3) {
      func_0x000107c282d8(param_1 + 0x20);
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



/* Entry: 10931f44c; end: 10931f48b;  */

long FUN_10931f44c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10931f48c; end: 10931f48f;  */

long FUN_10931f48c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10931f490; end: 10931f4a3;  */

void FUN_10931f490(void)

{
  FUN_10931f44c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931f4a4; end: 10931f4af;  */

undefined ** FUN_10931f4a4(void)

{
  return &PTR_DAT_110aedd30;
}



/* Entry: 10931f4b0; end: 10931f527;  */

void FUN_10931f4b0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 0x3f) != 0) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0x400000002;
    *(undefined4 *)(param_1 + 0x44) = 0x3e4ccccd;
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



/* Entry: 10931f528; end: 10931f813;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10931f528(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((uVar12 & 1) != 0) {
    pbVar7 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = pbVar7;
  }
  if ((uVar12 >> 4 & 1) != 0) {
    pbVar7 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x40),param_2);
    param_2 = pbVar7;
  }
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar7 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x34),param_2);
    param_2 = pbVar7;
  }
  if ((uVar12 >> 5 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *param_2 = 0x25;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar13 * 8 + 7);
      }
      param_2 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x40),pbVar7,param_3);
      iVar13 = iVar13 + 1;
      pbVar7 = param_2;
    } while (iVar14 != iVar13);
  }
  if ((uVar12 >> 3 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
    }
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar8 = (ulong)(int)uVar4;
    pbVar10 = param_2 + 1;
    *param_2 = 0x30;
    uVar6 = uVar8;
    pbVar7 = pbVar10;
    if (0x7f < uVar4) {
      do {
        pbVar10 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6 | 0x80;
        uVar8 = uVar6 >> 7;
        uVar9 = uVar6 >> 0xe;
        uVar6 = uVar8;
        pbVar7 = pbVar10;
      } while (uVar9 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x38);
    *param_2 = 0x38;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar11 = *(long *)(uVar6 + 8);
      uVar8 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar11 = uVar6 + 8;
    }
    uVar12 = (uint)uVar8;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar7 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar7;
          _memcpy(param_2,lVar11,(long)iVar14);
          uVar12 = (int)uVar8 - iVar14;
          uVar8 = (ulong)uVar12;
          lVar11 = lVar11 + iVar14;
          pbVar7 = *(byte **)param_3;
          pbVar10 = param_2 + iVar14;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar5 + ((int)pbVar10 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            param_2 = pbVar10;
          } while (pbVar7 <= pbVar10);
          pbVar7 = pbVar7 + (0x10 - (long)param_2);
        } while ((int)pbVar7 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar8 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 10931f814; end: 10931f957;  */

long FUN_10931f814(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      uVar2 = *puVar4;
      FUN_10931f1e8();
      lVar3 = uVar2 + lVar3 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    lVar3 = lVar3 + ((ulong)(uVar1 >> 1) & 2);
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 & 0x20) != 0) {
      lVar3 = lVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar5 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10931f958; end: 10931f95b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931f958(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
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



/* Entry: 10931f95c; end: 10931fa9b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931f95c(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
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



/* Entry: 10931fa9c; end: 10931fa9f;  */

long FUN_10931fa9c(long param_1)

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
  return param_1;
}



/* Entry: 10931faa0; end: 10931fab3;  */

void FUN_10931faa0(void)

{
  func_0x00010931fa28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10931fab4; end: 10931fabf;  */

undefined ** FUN_10931fab4(void)

{
  return &PTR_DAT_110aedd78;
}



/* Entry: 10931fac0; end: 10931fb67;  */

void FUN_10931fac0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
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
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x28));
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x35) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10931fb68; end: 10931fd9b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10931fb68(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar4;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    plVar4 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = plVar4;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x34),param_2);
    param_2 = plVar4;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar4 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar4;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    plVar4 = param_3;
    func_0x0001088b96ec(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
    param_2 = plVar4;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    plVar4 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar4;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x38;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar8 = *(long *)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar8 = uVar7 + 8;
    }
    uVar3 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar10 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar10 < (int)uVar3) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar3 = (int)uVar5 - iVar9;
          uVar5 = (ulong)uVar3;
          lVar8 = lVar8 + iVar9;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar6 <= plVar4);
          puVar10 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar10 < (int)uVar3);
      }
      _memcpy(param_2,lVar8,(long)(int)uVar3);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
    else {
      _memcpy(param_2,lVar8,uVar5 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 10931fd9c; end: 10931ff07;  */

void FUN_10931fd9c(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x7f) == 0) {
    iVar5 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar3 = *(byte *)(uVar7 + 0x17);
      uVar1 = (uint)*(undefined8 *)(uVar7 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (uint)bVar3;
      }
      iVar5 = uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109340c2c();
      iVar5 = iVar5 + iVar4 + ((int)LZCOUNT(iVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
      FUN_109340c2c();
      iVar5 = iVar5 + iVar4 + ((int)LZCOUNT(iVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      iVar5 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar5;
    }
    iVar5 = iVar5 + (uVar2 >> 5 & 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    iVar5 = (int)lVar6 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return;
}



/* Entry: 10931ff08; end: 10931ff0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931ff08(long param_1,long param_2)

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
  if ((uVar1 & 0x7f) != 0) {
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
        func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
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



/* Entry: 10931ff0c; end: 109320063;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10931ff0c(long param_1,long param_2)

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
  if ((uVar1 & 0x7f) != 0) {
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
        func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
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



/* Entry: 109320064; end: 10932010b;  */

long FUN_109320064(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
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
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}


