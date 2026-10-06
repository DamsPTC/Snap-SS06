/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10933bf9c; end: 10933bfa7;  */

undefined ** FUN_10933bf9c(void)

{
  return &PTR_DAT_110aef760;
}



/* Entry: 10933bfa8; end: 10933bfef;  */

void FUN_10933bfa8(long param_1)

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



/* Entry: 10933bff0; end: 10933c20b;  */

long * FUN_10933bff0(long param_1,long *param_2,long *param_3)

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



/* Entry: 10933c20c; end: 10933c25f;  */

void FUN_10933c20c(long param_1,long param_2)

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



/* Entry: 10933c260; end: 10933c2d3;  */

undefined8 * FUN_10933c260(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef6b8;
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



/* Entry: 10933c2d4; end: 10933c307;  */

long FUN_10933c2d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10933f5cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10933c308; end: 10933c30b;  */

long FUN_10933c308(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10933f5cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10933c30c; end: 10933c31f;  */

void FUN_10933c30c(void)

{
  FUN_10933c2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933c320; end: 10933c32b;  */

undefined ** FUN_10933c320(void)

{
  return &PTR_DAT_110aef7a0;
}



/* Entry: 10933c32c; end: 10933c373;  */

void FUN_10933c32c(long param_1)

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



/* Entry: 10933c374; end: 10933c58f;  */

long * FUN_10933c374(long param_1,long *param_2,long *param_3)

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



/* Entry: 10933c590; end: 10933c593;  */

void FUN_10933c590(long param_1,long param_2)

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



/* Entry: 10933c594; end: 10933c5e7;  */

void FUN_10933c594(long param_1,long param_2)

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



/* Entry: 10933c5e8; end: 10933c633;  */

void FUN_10933c5e8(long param_1,long param_2)

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



/* Entry: 10933c634; end: 10933c68f;  */

undefined8 * FUN_10933c634(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef528;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10933c5e8(param_1,param_3);
  return param_1;
}



/* Entry: 10933c690; end: 10933c6e7;  */

long FUN_10933c690(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10933c6e8; end: 10933c717;  */

undefined ** FUN_10933c6e8(void)

{
  return &PTR_DAT_110aef7e0;
}



/* Entry: 10933c718; end: 10933c8f7;  */

long * FUN_10933c718(long param_1,long *param_2,long *param_3)

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



/* Entry: 10933c8f8; end: 10933c9bf;  */

long FUN_10933c8f8(long param_1)

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



/* Entry: 10933c9c0; end: 10933ca17;  */

long FUN_10933c9c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10933ca18; end: 10933ca47;  */

undefined ** FUN_10933ca18(void)

{
  return &PTR_DAT_110aef818;
}



/* Entry: 10933ca48; end: 10933cccb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10933ca48(long param_1,long *param_2,long *param_3)

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



/* Entry: 10933cccc; end: 10933cd37;  */

long FUN_10933cccc(long param_1)

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



/* Entry: 10933cd38; end: 10933ce1f;  */

undefined8 * FUN_10933cd38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef578;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1093118fc(param_1 + 3,param_2,param_3 + 0x18);
  FUN_109311ab0(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_109311ab0(param_1 + 8,param_2,param_3 + 0x40);
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)(param_3 + 0x54);
  return param_1;
}



/* Entry: 10933ce20; end: 10933ce9f;  */

long FUN_10933ce20(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
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
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10933cea0; end: 10933cea3;  */

long FUN_10933cea0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
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
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10933cea4; end: 10933ceb7;  */

void FUN_10933cea4(void)

{
  FUN_10933ce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933ceb8; end: 10933cef3;  */

undefined ** FUN_10933ceb8(void)

{
  return &PTR_DAT_110aef850;
}



/* Entry: 10933cef4; end: 10933d583;  */

byte * FUN_10933cef4(long param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
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
  
  uVar11 = *(uint *)(param_1 + 0x10);
  pbVar2 = param_2;
  if ((uVar11 & 1) != 0) {
    pbVar2 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x54),param_2);
  }
  pbVar8 = pbVar2;
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar8 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x58),pbVar2);
  }
  iVar17 = *(int *)(param_1 + 0x18);
  if (0 < iVar17) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar8);
      iVar17 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar17 * 4;
    uVar12 = (ulong)uVar11;
    pbVar2 = pbVar8 + 1;
    *pbVar8 = 0x1a;
    uVar3 = uVar12;
    uVar6 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar8 = pbVar2;
        uVar5 = (uint)uVar3;
        pbVar2 = pbVar8 + 1;
        *pbVar8 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar6 = (uint)uVar3;
      } while (uVar5 >> 0xe != 0);
    }
    pbVar8 = pbVar8 + 2;
    *pbVar2 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar18 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*(long *)param_3 - (long)pbVar8 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10), uVar3 = uVar18,
       (int)pbVar2 < (int)uVar11)) {
      pbVar9 = param_3 + 0x10;
      do {
        iVar17 = (int)pbVar2;
        _memcpy(pbVar8,lVar13,(long)iVar17);
        uVar11 = (int)uVar12 - iVar17;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar17;
        pbVar10 = pbVar8 + iVar17;
        pbVar4 = *(byte **)param_3;
        do {
          pbVar8 = pbVar9;
          pbVar2 = pbVar4;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933d460:
            param_3[0x38] = 1;
LAB_10933d440:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar2 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar4;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar4 + 8);
              *(undefined8 *)pbVar9 = uVar19;
              *(byte **)(param_3 + 8) = pbVar4;
              goto LAB_10933d440;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar4 - (long)pbVar9);
            do {
              plVar1 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10933d460;
            } while (uStack_64 == 0);
            puVar7 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar7;
              *(undefined8 *)(param_3 + 0x18) = puVar7[1];
              *(undefined8 *)pbVar9 = uVar19;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar2 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
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
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar4);
          pbVar4 = pbVar2;
          pbVar8 = pbVar10;
        } while (pbVar2 <= pbVar10);
        pbVar2 = pbVar2 + (0x10 - (long)pbVar8);
      } while ((int)pbVar2 < (int)uVar11);
      uVar18 = (ulong)(int)uVar11;
      uVar3 = uVar18;
    }
    _memcpy(pbVar8,lVar13,uVar3);
    pbVar8 = pbVar8 + uVar18;
  }
  uVar11 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar11) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar8);
    }
    pbVar2 = pbVar8 + 1;
    *pbVar8 = 0x22;
    if (0x7f < uVar11) {
      do {
        pbVar8 = pbVar2;
        pbVar2 = pbVar8 + 1;
        *pbVar8 = (byte)uVar11 | 0x80;
        uVar6 = uVar11 >> 0xe;
        uVar11 = uVar11 >> 7;
      } while (uVar6 != 0);
    }
    pbVar8 = pbVar8 + 2;
    *pbVar2 = (byte)uVar11;
    puVar14 = *(uint **)(param_1 + 0x30);
    iVar17 = *(int *)(param_1 + 0x28);
    pbVar2 = param_3 + 0x10;
    puVar16 = puVar14;
    do {
      pbVar9 = pbVar8;
      pbVar10 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar8) {
        do {
          pbVar9 = pbVar2;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933d050:
            param_3[0x38] = 1;
LAB_10933d0e8:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar10;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar10 + 8);
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)(param_3 + 8) = pbVar10;
              goto LAB_10933d0e8;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar10 - (long)pbVar2);
            do {
              plVar1 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10933d050;
            } while (uStack_64 == 0);
            puVar7 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar7;
              *(undefined8 *)(param_3 + 0x18) = puVar7[1];
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
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
              pbVar9 = pbStack_70;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar10);
          pbVar9 = pbVar8;
          pbVar10 = pbVar4;
        } while (pbVar4 <= pbVar8);
      }
      puVar15 = puVar16 + 1;
      uVar12 = (ulong)(int)*puVar16;
      uVar3 = uVar12;
      pbVar8 = pbVar9;
      if (0x7f < *puVar16) {
        do {
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar3 | 0x80;
          uVar12 = uVar3 >> 7;
          uVar18 = uVar3 >> 0xe;
          uVar3 = uVar12;
          pbVar8 = pbVar9;
        } while (uVar18 != 0);
      }
      pbVar8 = pbVar9 + 1;
      *pbVar9 = (byte)uVar12;
      puVar16 = puVar15;
    } while (puVar15 < puVar14 + iVar17);
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar11) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar8);
    }
    pbVar2 = pbVar8 + 1;
    *pbVar8 = 0x2a;
    if (0x7f < uVar11) {
      do {
        pbVar8 = pbVar2;
        pbVar2 = pbVar8 + 1;
        *pbVar8 = (byte)uVar11 | 0x80;
        uVar6 = uVar11 >> 0xe;
        uVar11 = uVar11 >> 7;
      } while (uVar6 != 0);
    }
    pbVar8 = pbVar8 + 2;
    *pbVar2 = (byte)uVar11;
    puVar14 = *(uint **)(param_1 + 0x48);
    iVar17 = *(int *)(param_1 + 0x40);
    pbVar2 = param_3 + 0x10;
    puVar16 = puVar14;
    do {
      pbVar9 = pbVar8;
      pbVar10 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar8) {
        do {
          pbVar9 = pbVar2;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933d1a8:
            param_3[0x38] = 1;
LAB_10933d240:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar10;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar10 + 8);
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)(param_3 + 8) = pbVar10;
              goto LAB_10933d240;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar10 - (long)pbVar2);
            do {
              plVar1 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10933d1a8;
            } while (uStack_64 == 0);
            puVar7 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar7;
              *(undefined8 *)(param_3 + 0x18) = puVar7[1];
              *(undefined8 *)pbVar2 = uVar19;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
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
              pbVar9 = pbStack_70;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar8 = pbVar9 + ((int)pbVar8 - (int)pbVar10);
          pbVar9 = pbVar8;
          pbVar10 = pbVar4;
        } while (pbVar4 <= pbVar8);
      }
      puVar15 = puVar16 + 1;
      uVar12 = (ulong)(int)*puVar16;
      uVar3 = uVar12;
      pbVar8 = pbVar9;
      if (0x7f < *puVar16) {
        do {
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar3 | 0x80;
          uVar12 = uVar3 >> 7;
          uVar18 = uVar3 >> 0xe;
          uVar3 = uVar12;
          pbVar8 = pbVar9;
        } while (uVar18 != 0);
      }
      pbVar8 = pbVar9 + 1;
      *pbVar9 = (byte)uVar12;
      puVar16 = puVar15;
    } while (puVar15 < puVar14 + iVar17);
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
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar11) {
      pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar2 < (int)uVar11) {
        do {
          iVar17 = (int)pbVar2;
          _memcpy(pbVar8,lVar13,(long)iVar17);
          uVar11 = (int)uVar12 - iVar17;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar17;
          pbVar2 = *(byte **)param_3;
          pbVar9 = pbVar8 + iVar17;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar8 + ((int)pbVar9 - (int)pbVar2);
            pbVar2 = *(byte **)param_3;
            pbVar8 = pbVar9;
          } while (pbVar2 <= pbVar9);
          pbVar2 = pbVar2 + (0x10 - (long)pbVar8);
        } while ((int)pbVar2 < (int)uVar11);
      }
      _memcpy(pbVar8,lVar13,(long)(int)uVar11);
      pbVar8 = pbVar8 + (int)uVar11;
    }
    else {
      _memcpy(pbVar8,lVar13,uVar12 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar11;
    }
  }
  return pbVar8;
}



/* Entry: 10933d584; end: 10933d70b;  */

long FUN_10933d584(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar3 = 0;
  if (uVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < 1) {
    lVar4 = 0;
    lVar6 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar5 = 0;
    uVar9 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x30);
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar5;
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar9 != 0);
    *(int *)(param_1 + 0x38) = (int)lVar5;
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = (ulong)((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((int)uVar2 < 1) {
    lVar8 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar8 = 0;
    uVar9 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x48);
    do {
      lVar8 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar8;
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar9 != 0);
    *(int *)(param_1 + 0x50) = (int)lVar8;
    if (lVar8 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar8) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + (ulong)uVar1 * 4 + lVar4 + lVar6 + lVar8 + lVar5;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10933d70c; end: 10933d90f;  */

void FUN_10933d70c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x28);
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
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x44) < iVar3) {
      func_0x000107c282d8(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x40);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x40) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x48);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 3) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
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



/* Entry: 10933d910; end: 10933d957;  */

long FUN_10933d910(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10933d958; end: 10933d95b;  */

long FUN_10933d958(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10933d95c; end: 10933d96f;  */

void FUN_10933d95c(void)

{
  FUN_10933d910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933d970; end: 10933d9a3;  */

undefined ** FUN_10933d970(void)

{
  return &PTR_DAT_110aef898;
}



/* Entry: 10933d9a4; end: 10933dce3;  */

byte * FUN_10933d9a4(long param_1,byte *param_2,byte *param_3)

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
  
  uVar11 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar11 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  pbVar1 = pbVar4;
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x2c),pbVar4);
  }
  iVar14 = *(int *)(param_1 + 0x18);
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
      iVar14 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x1a;
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
    lVar13 = *(long *)(param_1 + 0x20);
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
LAB_10933dbd0:
            param_3[0x38] = 1;
LAB_10933dbb0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10933dbb0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_10933dbd0;
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



/* Entry: 10933dce4; end: 10933dd8b;  */

long FUN_10933dce4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar3 + (ulong)uVar1 * 4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10933dd8c; end: 10933deff;  */

void FUN_10933dd8c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
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
  if ((uVar6 & 3) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
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



/* Entry: 10933df00; end: 10933df6b;  */

long FUN_10933df00(long param_1)

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



/* Entry: 10933df6c; end: 10933df6f;  */

long FUN_10933df6c(long param_1)

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



/* Entry: 10933df70; end: 10933df83;  */

void FUN_10933df70(void)

{
  FUN_10933df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933df84; end: 10933df8f;  */

undefined ** FUN_10933df84(void)

{
  return &PTR_DAT_110aef8d8;
}



/* Entry: 10933df90; end: 10933dff7;  */

void FUN_10933df90(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  if ((uVar1 & 0xc) != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10933dff8; end: 10933e1a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10933dff8(long param_1,long *param_2,long *param_3)

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
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
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



/* Entry: 10933e1a4; end: 10933e29f;  */

long FUN_10933e1a4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109340c2c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + lVar4;
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



/* Entry: 10933e2a0; end: 10933e2a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10933e2a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
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



/* Entry: 10933e2a4; end: 10933e3a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10933e2a4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
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



/* Entry: 10933e3a4; end: 10933e437;  */

undefined8 * FUN_10933e3a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef5c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109312590(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10933f97c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10933e438; end: 10933e4a3;  */

long FUN_10933e438(long param_1)

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



/* Entry: 10933e4a4; end: 10933e4a7;  */

long FUN_10933e4a4(long param_1)

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



/* Entry: 10933e4a8; end: 10933e4bb;  */

void FUN_10933e4a8(void)

{
  FUN_10933e438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933e4bc; end: 10933e4c7;  */

undefined ** FUN_10933e4bc(void)

{
  return &PTR_DAT_110aef918;
}



/* Entry: 10933e4c8; end: 10933e523;  */

void FUN_10933e4c8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010933ca24(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10933e524; end: 10933e68f;  */

long * FUN_10933e524(long param_1,long *param_2,long *param_3)

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
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),plVar1,param_3);
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



/* Entry: 10933e690; end: 10933e74f;  */

long FUN_10933e690(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109340c2c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_10933cccc();
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



/* Entry: 10933e750; end: 10933e753;  */

void FUN_10933e750(long param_1,long param_2)

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
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10933f97c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010933c94c();
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



/* Entry: 10933e754; end: 10933e827;  */

void FUN_10933e754(long param_1,long param_2)

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
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10933f97c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010933c94c();
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



/* Entry: 10933e828; end: 10933e95f;  */

undefined8 * FUN_10933e828(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef3e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1093118fc(param_1 + 3,param_2,param_3 + 0x18);
  FUN_1093118fc(param_1 + 5,param_2,param_3 + 0x28);
  puVar2 = (ulong *)(param_3 + 0x38);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[7] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x40);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[8] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x48);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[9] = puVar1;
  uVar4 = *(undefined8 *)(param_3 + 0x58);
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10933e960; end: 10933e9db;  */

long FUN_10933e960(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
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



/* Entry: 10933e9dc; end: 10933e9df;  */

long FUN_10933e9dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
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



/* Entry: 10933e9e0; end: 10933e9f3;  */

void FUN_10933e9e0(void)

{
  FUN_10933e960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933e9f4; end: 10933eacf;  */

undefined ** FUN_10933e9f4(void)

{
  return &PTR_DAT_110aef950;
}



/* Entry: 10933ead0; end: 10933f197;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10933ead0(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar13 >> 3 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x50),param_2);
  }
  pbVar7 = pbVar4;
  if ((uVar13 >> 4 & 1) != 0) {
    pbVar7 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x54),pbVar4);
  }
  iVar16 = *(int *)(param_1 + 0x18);
  if (0 < iVar16) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar11 + ((int)pbVar7 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar7);
      iVar16 = *(int *)(param_1 + 0x18);
    }
    uVar2 = iVar16 * 4;
    uVar14 = (ulong)uVar2;
    pbVar4 = pbVar7 + 1;
    *pbVar7 = 0x1a;
    uVar5 = uVar14;
    uVar8 = uVar2;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar4;
        uVar9 = (uint)uVar5;
        pbVar4 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar9 >> 0xe != 0);
    }
    pbVar7 = pbVar7 + 2;
    *pbVar4 = (byte)uVar8;
    lVar15 = *(long *)(param_1 + 0x20);
    uVar17 = (ulong)(int)uVar2;
    uVar5 = uVar14;
    if ((*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10), uVar5 = uVar17,
       (int)pbVar4 < (int)uVar2)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar16 = (int)pbVar4;
        _memcpy(pbVar7,lVar15,(long)iVar16);
        uVar2 = (int)uVar14 - iVar16;
        uVar14 = (ulong)uVar2;
        lVar15 = lVar15 + iVar16;
        pbVar12 = pbVar7 + iVar16;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar7 = pbVar11;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933ef20:
            param_3[0x38] = 1;
LAB_10933ef00:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar18;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10933ef00;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_10933ef20;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar11 = uVar18;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
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
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar12 = pbVar7 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar7 = pbVar12;
        } while (pbVar4 <= pbVar12);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar7);
      } while ((int)pbVar4 < (int)uVar2);
      uVar17 = (ulong)(int)uVar2;
      uVar5 = uVar17;
    }
    _memcpy(pbVar7,lVar15,uVar5);
    pbVar7 = pbVar7 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if (0 < iVar16) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar11 + ((int)pbVar7 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar7);
      iVar16 = *(int *)(param_1 + 0x28);
    }
    uVar2 = iVar16 * 4;
    uVar14 = (ulong)uVar2;
    pbVar4 = pbVar7 + 1;
    *pbVar7 = 0x22;
    uVar5 = uVar14;
    uVar8 = uVar2;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar4;
        uVar9 = (uint)uVar5;
        pbVar4 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar9 >> 0xe != 0);
    }
    pbVar7 = pbVar7 + 2;
    *pbVar4 = (byte)uVar8;
    lVar15 = *(long *)(param_1 + 0x30);
    uVar17 = (ulong)(int)uVar2;
    uVar5 = uVar14;
    if ((*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10), uVar5 = uVar17,
       (int)pbVar4 < (int)uVar2)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar16 = (int)pbVar4;
        _memcpy(pbVar7,lVar15,(long)iVar16);
        uVar2 = (int)uVar14 - iVar16;
        uVar14 = (ulong)uVar2;
        lVar15 = lVar15 + iVar16;
        pbVar12 = pbVar7 + iVar16;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar7 = pbVar11;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933f034:
            param_3[0x38] = 1;
LAB_10933f014:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar18;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10933f014;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_10933f034;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar11 = uVar18;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
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
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar12 = pbVar7 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar7 = pbVar12;
        } while (pbVar4 <= pbVar12);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar7);
      } while ((int)pbVar4 < (int)uVar2);
      uVar17 = (ulong)(int)uVar2;
      uVar5 = uVar17;
    }
    _memcpy(pbVar7,lVar15,uVar5);
    pbVar7 = pbVar7 + uVar17;
  }
  if ((uVar13 >> 5 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar11 + ((int)pbVar7 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar7);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *pbVar7 = 0x2d;
    *(undefined4 *)(pbVar7 + 1) = uVar1;
    pbVar7 = pbVar7 + 5;
  }
  if ((uVar13 >> 6 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar11 + ((int)pbVar7 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar7);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
    *pbVar7 = 0x35;
    *(undefined4 *)(pbVar7 + 1) = uVar1;
    pbVar7 = pbVar7 + 5;
  }
  if ((uVar13 >> 7 & 1) != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar11 + ((int)pbVar7 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar7);
    }
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar14 = (ulong)(int)uVar2;
    pbVar11 = pbVar7 + 1;
    *pbVar7 = 0x38;
    uVar5 = uVar14;
    pbVar4 = pbVar11;
    if (0x7f < uVar2) {
      do {
        pbVar11 = pbVar4 + 1;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar14 = uVar5 >> 7;
        uVar17 = uVar5 >> 0xe;
        uVar5 = uVar14;
        pbVar4 = pbVar11;
      } while (uVar17 != 0);
    }
    pbVar7 = pbVar11 + 1;
    *pbVar11 = (byte)uVar14;
  }
  if ((uVar13 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,8,*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc,pbVar7);
    pbVar7 = pbVar4;
  }
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,9,*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc,pbVar7);
    pbVar7 = pbVar4;
  }
  pbVar4 = pbVar7;
  if ((uVar13 >> 2 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,10,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,pbVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar15 = *(long *)(uVar5 + 8);
      uVar14 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar15 = uVar5 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar13) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar7 < (int)uVar13) {
        do {
          iVar16 = (int)pbVar7;
          _memcpy(pbVar4,lVar15,(long)iVar16);
          uVar13 = (int)uVar14 - iVar16;
          uVar14 = (ulong)uVar13;
          lVar15 = lVar15 + iVar16;
          pbVar7 = *(byte **)param_3;
          pbVar11 = pbVar4 + iVar16;
          do {
            pbVar4 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar4 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar4 + ((int)pbVar11 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar4 = pbVar11;
          } while (pbVar7 <= pbVar11);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar4);
        } while ((int)pbVar7 < (int)uVar13);
      }
      _memcpy(pbVar4,lVar15,(long)(int)uVar13);
      pbVar4 = pbVar4 + (int)uVar13;
    }
    else {
      _memcpy(pbVar4,lVar15,uVar14 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar13;
    }
  }
  return pbVar4;
}



/* Entry: 10933f198; end: 10933f35f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10933f198(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar6 = 0;
  if (uVar1 != 0) {
    lVar6 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar5 = 0;
  if (uVar2 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = lVar6 + ((ulong)uVar2 + (ulong)uVar1) * 4 + lVar5;
  bVar3 = *(byte *)(param_1 + 0x10);
  if (bVar3 != 0) {
    if ((bVar3 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      lVar5 = lVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((bVar3 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      lVar5 = lVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((bVar3 >> 2 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      lVar5 = lVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((bVar3 >> 3 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((bVar3 >> 4 & 1) != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + lVar5;
    }
    if ((bVar3 & 0x20) != 0) {
      lVar5 = lVar5 + 5;
    }
    if ((bVar3 & 0x40) != 0) {
      lVar5 = lVar5 + 5;
    }
    if ((char)bVar3 < '\0') {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x60)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10933f360; end: 10933f573;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10933f360(long param_1,long param_2)

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
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x38,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x40,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x48,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
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



/* Entry: 10933f574; end: 10933f5cb;  */

void FUN_10933f574(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110aef398;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10933f5cc; end: 10933f5ff;  */

long * FUN_10933f5cc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10933f600; end: 10933f97b;  */

void FUN_10933f600(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aef398;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10933f97c; end: 10933fa07;  */

undefined8 * FUN_10933f97c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aef488;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  func_0x00010933c94c();
  return puVar1;
}



/* Entry: 10933fa08; end: 10933fb13;  */

undefined8 * FUN_10933fa08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aefaa0;
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
  FUN_10934069c(param_1 + 6,param_2,param_3 + 0x30);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109313128(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010931316c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1093129a8(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x68);
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 10933fb14; end: 10933fbb3;  */

long FUN_10933fb14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933fb48(param_1);
  return param_1;
}



/* Entry: 10933fbb4; end: 10933fbb7;  */

long FUN_10933fbb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933fb48(param_1);
  return param_1;
}



/* Entry: 10933fbb8; end: 10933fbcb;  */

void FUN_10933fbb8(void)

{
  FUN_10933fb14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933fbcc; end: 10933fbd7;  */

undefined ** FUN_10933fbcc(void)

{
  return &PTR_DAT_110aefae0;
}



/* Entry: 10933fbd8; end: 10933fc73;  */

void FUN_10933fbd8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10933df90(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10933e4c8(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010933ea00(*(undefined8 *)(param_1 + 0x50));
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
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



/* Entry: 10933fc74; end: 10934022b;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10933fc74(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uVar13 >> 3 & 1) != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar3 + ((int)param_2 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= param_2);
    }
    uVar5 = *(ulong *)(param_1 + 0x58);
    pbVar3 = param_2 + 1;
    *param_2 = 8;
    uVar15 = uVar5;
    pbVar2 = pbVar3;
    if (0x7f < uVar5) {
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = (byte)uVar15 | 0x80;
        uVar5 = uVar15 >> 7;
        uVar17 = uVar15 >> 0xe;
        uVar15 = uVar5;
        pbVar2 = pbVar3;
      } while (uVar17 != 0);
    }
    param_2 = pbVar3 + 1;
    *pbVar3 = (byte)uVar5;
  }
  if ((uVar13 >> 4 & 1) != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar3 + ((int)param_2 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x60);
    pbVar3 = param_2 + 1;
    *param_2 = 0x10;
    pbVar2 = pbVar3;
    uVar9 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = (byte)uVar9 | 0x80;
        uVar7 = uVar9 >> 7;
        uVar8 = uVar9 >> 0xe;
        pbVar2 = pbVar3;
        uVar9 = uVar7;
      } while (uVar8 != 0);
    }
    param_2 = pbVar3 + 1;
    *pbVar3 = (byte)uVar7;
  }
  if ((uVar13 & 1) != 0) {
    pbVar2 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = pbVar2;
  }
  pbVar2 = param_2;
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar2 = (byte *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar18 = 8;
    pbVar3 = pbVar2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar18 + -1);
      }
      plVar4 = (long *)*puVar1;
      lVar14 = (long)*(char *)((long)plVar4 + 0x17);
      if (((lVar14 < 0) && (lVar14 = plVar4[1], 0x7f < lVar14)) ||
         ((*(long *)param_3 - (long)pbVar3) + 0xe < lVar14)) {
        pbVar2 = param_3;
        func_0x00010b4d5120(param_3,5,plVar4,pbVar3);
      }
      else {
        *pbVar3 = 0x2a;
        pbVar3[1] = (byte)lVar14;
        if (*(char *)((long)plVar4 + 0x17) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        _memcpy(pbVar3 + 2,plVar4,lVar14);
        pbVar2 = pbVar3 + 2 + lVar14;
      }
      lVar18 = lVar18 + 8;
      uVar15 = uVar15 - 1;
      pbVar3 = pbVar2;
    } while (uVar15 != 0);
  }
  pbVar3 = pbVar2;
  if ((uVar13 >> 2 & 1) != 0) {
    pbVar3 = (byte *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),pbVar2,param_3);
  }
  if ((uVar13 >> 5 & 1) != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar11 + ((int)pbVar3 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar3);
    }
    uVar7 = *(uint *)(param_1 + 100);
    uVar5 = (ulong)(int)uVar7;
    pbVar11 = pbVar3 + 1;
    *pbVar3 = 0x38;
    uVar15 = uVar5;
    pbVar2 = pbVar11;
    if (0x7f < uVar7) {
      do {
        pbVar11 = pbVar2 + 1;
        *pbVar2 = (byte)uVar15 | 0x80;
        uVar5 = uVar15 >> 7;
        uVar17 = uVar15 >> 0xe;
        uVar15 = uVar5;
        pbVar2 = pbVar11;
      } while (uVar17 != 0);
    }
    pbVar3 = pbVar11 + 1;
    *pbVar11 = (byte)uVar5;
  }
  iVar16 = *(int *)(param_1 + 0x30);
  if (0 < iVar16) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar11 + ((int)pbVar3 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar3);
      iVar16 = *(int *)(param_1 + 0x30);
    }
    uVar7 = iVar16 * 8;
    uVar5 = (ulong)uVar7;
    pbVar2 = pbVar3 + 1;
    *pbVar3 = 0x42;
    uVar15 = uVar5;
    uVar9 = uVar7;
    if (0x7f < uVar7) {
      do {
        pbVar3 = pbVar2;
        uVar8 = (uint)uVar15;
        pbVar2 = pbVar3 + 1;
        *pbVar3 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar9 = (uint)uVar15;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar3 = pbVar3 + 2;
    *pbVar2 = (byte)uVar9;
    lVar18 = *(long *)(param_1 + 0x38);
    uVar17 = (ulong)(int)uVar7;
    uVar15 = uVar5;
    if ((*(long *)param_3 - (long)pbVar3 < (long)(int)uVar7) &&
       (pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10), uVar15 = uVar17,
       (int)pbVar2 < (int)uVar7)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar16 = (int)pbVar2;
        _memcpy(pbVar3,lVar18,(long)iVar16);
        uVar7 = (int)uVar5 - iVar16;
        uVar5 = (ulong)uVar7;
        lVar18 = lVar18 + iVar16;
        pbVar12 = pbVar3 + iVar16;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar3 = pbVar11;
          pbVar2 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093400ac:
            param_3[0x38] = 1;
LAB_10934008c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar2 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar19;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_10934008c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar4 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) goto LAB_1093400ac;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar11 = uVar19;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar2 = pbVar11 + (int)uStack_64;
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
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar3 = pbStack_70;
            }
          }
          pbVar12 = pbVar3 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar2;
          pbVar3 = pbVar12;
        } while (pbVar2 <= pbVar12);
        pbVar2 = pbVar2 + (0x10 - (long)pbVar3);
      } while ((int)pbVar2 < (int)uVar7);
      uVar17 = (ulong)(int)uVar7;
      uVar15 = uVar17;
    }
    _memcpy(pbVar3,lVar18,uVar15);
    pbVar3 = pbVar3 + uVar17;
  }
  pbVar2 = pbVar3;
  if ((uVar13 >> 6 & 1) != 0) {
    pbVar2 = param_3;
    func_0x000108b3207c(param_3,*(undefined4 *)(param_1 + 0x68),pbVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar18 = *(long *)(uVar15 + 8);
      uVar5 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar18 = uVar15 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*(long *)param_3 - (long)pbVar2 < (long)(int)uVar13) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar2) + 0x10);
      if ((int)pbVar3 < (int)uVar13) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(pbVar2,lVar18,(long)iVar16);
          uVar13 = (int)uVar5 - iVar16;
          uVar5 = (ulong)uVar13;
          lVar18 = lVar18 + iVar16;
          pbVar3 = *(byte **)param_3;
          pbVar11 = pbVar2 + iVar16;
          do {
            pbVar2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar2 + ((int)pbVar11 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar2);
        } while ((int)pbVar3 < (int)uVar13);
      }
      _memcpy(pbVar2,lVar18,(long)(int)uVar13);
      pbVar2 = pbVar2 + (int)uVar13;
    }
    else {
      _memcpy(pbVar2,lVar18,uVar5 & 0xffffffff);
      pbVar2 = pbVar2 + (int)uVar13;
    }
  }
  return pbVar2;
}



/* Entry: 10934022c; end: 109340437;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10934022c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    puVar9 = (ulong *)(uVar8 + 7);
    uVar7 = uVar6;
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      uVar6 = uVar2 + uVar6 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  lVar10 = 0;
  if (uVar3 != 0) {
    lVar10 = (ulong)((int)LZCOUNT(-((ulong)(uVar3 >> 0x1c) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar3 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar10 = (ulong)uVar3 * 8 + uVar6 + lVar10;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x7f) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      FUN_10933e1a4();
      lVar10 = lVar10 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      FUN_10933e690();
      lVar10 = lVar10 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x50);
      FUN_10933f198();
      lVar10 = lVar10 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      lVar10 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar10;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      lVar10 = lVar10 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x60)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      lVar10 = lVar10 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      lVar10 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + lVar10;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar10 = lVar5 + lVar10;
  }
  *(int *)(param_1 + 0x14) = (int)lVar10;
  return lVar10;
}



/* Entry: 109340438; end: 10934043b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109340438(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar4) {
      FUN_109340710(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x30);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x38);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0x7f) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar8;
        func_0x000109313128(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10933e2a4();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar8;
        func_0x00010931316c(uVar8,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10933e754();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1093129a8(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
      else {
        FUN_10933f360();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 10934043c; end: 1093405f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10934043c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar4) {
      FUN_109340710(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x30);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x38);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0x7f) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar8;
        func_0x000109313128(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10933e2a4();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar8;
        func_0x00010931316c(uVar8,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10933e754();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1093129a8(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar8;
      }
      else {
        FUN_10933f360();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 1093405f8; end: 10934069b;  */

void FUN_1093405f8(long param_1,long param_2)

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
  lVar3 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x40 + lVar3);
    *(undefined1 *)(param_1 + 0x40 + lVar3) = *(undefined1 *)(param_2 + 0x40 + lVar3);
    *(undefined1 *)(param_2 + 0x40 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x2c);
  return;
}



/* Entry: 10934069c; end: 10934070f;  */

int * FUN_10934069c(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_109340710(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined8 **)(param_1 + 2);
      puVar3 = *(undefined8 **)(param_3 + 2);
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



/* Entry: 109340710; end: 109340713;  */

void FUN_109340710(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_109340780;
  }
  else {
    plVar3 = (long *)plVar3[-1];
    if ((int)param_3 < 1) {
LAB_109340780:
      uVar4 = 1;
      goto LAB_109340784;
    }
    if (0x3ffffffb < iVar1) {
      uVar4 = 0x7fffffff;
      goto LAB_109340784;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar4 = (ulong)param_3;
LAB_109340784:
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)(uVar4 * 8 + 8);
    __Znwm();
  }
  else {
    plVar2 = plVar3;
    func_0x00010b4d810c(plVar3,uVar4 * 8 + 0xf & 0x7fffffff8);
  }
  *plVar2 = (long)plVar3;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar2 + 1,*(undefined8 *)(param_1 + 8),(ulong)param_2 << 3);
    }
    FUN_1093407fc(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar4;
  *(long **)(param_1 + 8) = plVar2 + 1;
  return;
}



/* Entry: 109340714; end: 1093407fb;  */

void FUN_109340714(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_109340780;
  }
  else {
    plVar3 = (long *)plVar3[-1];
    if ((int)param_3 < 1) {
LAB_109340780:
      uVar4 = 1;
      goto LAB_109340784;
    }
    if (0x3ffffffb < iVar1) {
      uVar4 = 0x7fffffff;
      goto LAB_109340784;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar4 = (ulong)param_3;
LAB_109340784:
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)(uVar4 * 8 + 8);
    __Znwm();
  }
  else {
    plVar2 = plVar3;
    func_0x00010b4d810c(plVar3,uVar4 * 8 + 0xf & 0x7fffffff8);
  }
  *plVar2 = (long)plVar3;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar2 + 1,*(undefined8 *)(param_1 + 8),(ulong)param_2 << 3);
    }
    FUN_1093407fc(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar4;
  *(long **)(param_1 + 8) = plVar2 + 1;
  return;
}



/* Entry: 1093407fc; end: 109340853;  */

void FUN_1093407fc(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *extraout_x9;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)((long)*(int *)(param_1 + 4));
  if (ppuVar3[1] == (undefined *)*extraout_x9) {
    puVar4 = ppuVar3[2];
    uVar1 = extraout_x8 * 8 + 8;
    uVar6 = 0x3b - LZCOUNT(uVar1);
    bVar2 = puVar4[0x50];
    if (uVar6 < bVar2) {
      lVar7 = *(long *)(puVar4 + 0x58);
      *plVar5 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar5;
    }
    else {
      if (bVar2 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar5,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
        lVar7 = (ulong)(byte)puVar4[0x50] << 3;
      }
      uVar6 = uVar1 >> 3;
      if (0 < (long)(uVar1 - lVar7)) {
        _bzero((long)plVar5 + lVar7);
      }
      *(long **)(puVar4 + 0x58) = plVar5;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar4[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 109340854; end: 1093408af;  */

void FUN_109340854(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110aefaa0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  return;
}



/* Entry: 1093408b0; end: 109340913;  */

void FUN_1093408b0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
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



/* Entry: 109340914; end: 109340973;  */

undefined8 * FUN_109340914(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aefbe0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1093408b0(param_1,param_3);
  return param_1;
}



/* Entry: 109340974; end: 1093409cb;  */

long FUN_109340974(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093409cc; end: 1093409ff;  */

undefined ** FUN_1093409cc(void)

{
  return &PTR_DAT_110aefc20;
}



/* Entry: 109340a00; end: 109340c2b;  */

long * FUN_109340a00(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
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
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0xd;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar3 >> 1 & 1) != 0) {
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
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar3 >> 2 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
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



/* Entry: 109340c2c; end: 109340d0f;  */

long FUN_109340c2c(long param_1)

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
  lVar2 = 0;
  if ((uVar1 & 7) != 0) {
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



/* Entry: 109340d10; end: 109340d73;  */

undefined8 * FUN_109340d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aefb90;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  func_0x000109340c8c(param_1,param_3);
  return param_1;
}



/* Entry: 109340d74; end: 109340dcb;  */

long FUN_109340d74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109340dcc; end: 109340dff;  */

undefined ** FUN_109340dcc(void)

{
  return &PTR_DAT_110aefc58;
}



/* Entry: 109340e00; end: 1093410df;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109340e00(long param_1,long *param_2,long *param_3)

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
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)param_2 = 0xd;
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
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 2 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)param_2 = 0x1d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 3 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x25;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 4 & 1) != 0) {
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
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x28;
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



/* Entry: 1093410e0; end: 10934115f;  */

long FUN_1093410e0(long param_1)

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
    lVar2 = lVar2 + ((ulong)(uVar1 >> 3) & 2);
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



/* Entry: 109341160; end: 109341197;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109341160(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000109340dd8();
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
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
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



/* Entry: 109341198; end: 10934121b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109341198(long param_1,long param_2)

{
  uint uVar1;
  
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



/* Entry: 10934121c; end: 10934127f;  */

undefined8 * FUN_10934121c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aefb40;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_109341198(param_1,param_3);
  return param_1;
}



/* Entry: 109341280; end: 1093412d7;  */

long FUN_109341280(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}


