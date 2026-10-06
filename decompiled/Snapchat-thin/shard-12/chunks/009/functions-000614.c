/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c7fc24; end: 109c7fdcf;  */

void FUN_109c7fc24(long param_1,long param_2)

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
  ulong uVar10;
  
  uVar10 = *(ulong *)(param_1 + 8);
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x20);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
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
  uVar3 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar3,uVar5);
  }
  uVar9 = *(uint *)(param_2 + 0x10);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x000109cc23c0(uVar10,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar10;
    }
    else {
      FUN_109c90a54();
    }
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar9;
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



/* Entry: 109c7fdd0; end: 109c7fe27;  */

long FUN_109c7fdd0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7fe28; end: 109c7fe47;  */

undefined ** FUN_109c7fe28(void)

{
  return &PTR_DAT_110b35950;
}



/* Entry: 109c7fe48; end: 109c7ffd3;  */

long * FUN_109c7fe48(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
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
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
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
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
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



/* Entry: 109c7ffd4; end: 109c8003b;  */

long FUN_109c7ffd4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c8003c; end: 109c80093;  */

long FUN_109c8003c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c80094; end: 109c800b3;  */

undefined ** FUN_109c80094(void)

{
  return &PTR_DAT_110b35998;
}



/* Entry: 109c800b4; end: 109c8023f;  */

long * FUN_109c800b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
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
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
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
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
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



/* Entry: 109c80240; end: 109c802a7;  */

long FUN_109c80240(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c802a8; end: 109c802ff;  */

long FUN_109c802a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c80300; end: 109c8031b;  */

undefined ** FUN_109c80300(void)

{
  return &PTR_DAT_110b359e8;
}



/* Entry: 109c8031c; end: 109c80447;  */

long * FUN_109c8031c(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c80448; end: 109c8048f;  */

long FUN_109c80448(long param_1)

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



/* Entry: 109c80490; end: 109c804e7;  */

long FUN_109c80490(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c804e8; end: 109c80503;  */

undefined ** FUN_109c804e8(void)

{
  return &PTR_DAT_110b35a30;
}



/* Entry: 109c80504; end: 109c8062f;  */

long * FUN_109c80504(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c80630; end: 109c80677;  */

long FUN_109c80630(long param_1)

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



/* Entry: 109c80678; end: 109c806c3;  */

long FUN_109c80678(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c806c4; end: 109c806c7;  */

long FUN_109c806c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c806c8; end: 109c806db;  */

void FUN_109c806c8(void)

{
  FUN_109c80678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c806dc; end: 109c806e7;  */

undefined ** FUN_109c806dc(void)

{
  return &PTR_DAT_110b35a78;
}



/* Entry: 109c806e8; end: 109c80743;  */

void FUN_109c806e8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 109c80744; end: 109c808af;  */

long * FUN_109c80744(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c808b0; end: 109c8096f;  */

long FUN_109c808b0(long param_1)

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
      FUN_109c908c0();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109c908c0();
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



/* Entry: 109c80970; end: 109c80973;  */

void FUN_109c80970(long param_1,long param_2)

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
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_109c7fc24();
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



/* Entry: 109c80974; end: 109c80a47;  */

void FUN_109c80974(long param_1,long param_2)

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
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_109c7fc24();
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



/* Entry: 109c80a48; end: 109c80bdb;  */

void FUN_109c80a48(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 0x1f) {
    if (iVar1 < 0x14) {
      if (((iVar1 != 5) && (iVar1 != 10)) && (iVar1 != 0xf)) goto LAB_109c80b40;
    }
    else if (iVar1 != 0x14) {
      if (iVar1 == 0x19) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_109c80b40;
        FUN_109c7f840(lVar3);
        goto LAB_109c80b38;
      }
      if (iVar1 != 0x1e) goto LAB_109c80b40;
    }
LAB_109c80b14:
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_109c80b40;
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  else {
    if (iVar1 < 0x32) {
      if (((iVar1 != 0x1f) && (iVar1 != 0x28)) && (iVar1 != 0x29)) goto LAB_109c80b40;
      goto LAB_109c80b14;
    }
    if (iVar1 < 0x46) {
      if ((iVar1 != 0x32) && (iVar1 != 0x3c)) goto LAB_109c80b40;
      goto LAB_109c80b14;
    }
    if (iVar1 == 0x46) goto LAB_109c80b14;
    if (iVar1 != 0x47) goto LAB_109c80b40;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) goto LAB_109c80b40;
    FUN_109c80678(lVar3);
  }
LAB_109c80b38:
  __ZdlPv(lVar3);
LAB_109c80b40:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109c80bdc; end: 109c80bdf;  */

long FUN_109c80bdc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109c80a48(param_1);
  }
  return param_1;
}



/* Entry: 109c80be0; end: 109c80bf3;  */

void FUN_109c80be0(void)

{
  func_0x000109c80ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c80bf4; end: 109c80bff;  */

undefined ** FUN_109c80bf4(void)

{
  return &PTR_DAT_110b35ad0;
}



/* Entry: 109c80c00; end: 109c80c37;  */

void FUN_109c80c00(long param_1)

{
  ulong *puVar1;
  
  FUN_109c80a48();
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



/* Entry: 109c80c38; end: 109c80def;  */

long * FUN_109c80c38(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  plVar1 = (long *)(ulong)uVar3;
  lVar4 = 0x18;
  uVar6 = (ulong)(uVar3 - 10);
  if (uVar3 - 10 < 0x3e) {
    if ((1L << (uVar6 & 0x3f) & 0x1004000040100001U) == 0) {
      if ((1L << (uVar6 & 0x3f) & 0x2000010000008420U) == 0) {
        if ((1L << (uVar6 & 0x3f) & 0x80200000U) == 0) goto LAB_109c80ccc;
      }
      else {
        lVar4 = 0x14;
      }
    }
    else {
      lVar4 = 0x10;
    }
  }
  else {
LAB_109c80ccc:
    if (uVar3 != 5) goto LAB_109c80cec;
  }
  func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                      *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar4),param_2,param_3);
  param_2 = plVar1;
LAB_109c80cec:
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar4 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar4 < (int)uVar3) {
        do {
          iVar7 = (int)lVar4;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar5 <= plVar1);
          lVar4 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar4 < (int)uVar3);
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



/* Entry: 109c80df0; end: 109c81037;  */

void FUN_109c80df0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 0x1f) {
    if (iVar1 < 0x14) {
      if (iVar1 == 5) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_109c7f500();
        iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
      }
      else {
        if (iVar1 == 10) {
          uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
          if ((uVar4 & 1) == 0) {
            lVar3 = 0;
          }
          else {
            uVar4 = uVar4 & 0xfffffffffffffffe;
            lVar3 = (long)*(char *)(uVar4 + 0x1f);
            if (lVar3 < 0) {
              lVar3 = *(long *)(uVar4 + 0x10);
            }
          }
          iVar2 = (int)lVar3;
          *(int *)(*(long *)(param_1 + 0x10) + 0x10) = iVar2;
        }
        else {
          if (iVar1 != 0xf) goto LAB_109c80fb0;
          lVar3 = *(long *)(param_1 + 0x10);
          iVar2 = 0;
          if (*(int *)(lVar3 + 0x10) != 0) {
            iVar2 = 5;
          }
          if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
            uVar4 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
            lVar5 = (long)*(char *)(uVar4 + 0x1f);
            if (lVar5 < 0) {
              lVar5 = *(long *)(uVar4 + 0x10);
            }
            iVar2 = (int)lVar5 + iVar2;
          }
          *(int *)(lVar3 + 0x14) = iVar2;
        }
        iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
      }
      iVar2 = iVar2 + 1;
      goto LAB_109c80fb0;
    }
    if (iVar1 != 0x14) {
      if (iVar1 != 0x19) {
        if (iVar1 != 0x1e) goto LAB_109c80fb0;
        goto LAB_109c80ed4;
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109c7fb14();
      goto LAB_109c80f94;
    }
LAB_109c80eec:
    lVar3 = *(long *)(param_1 + 0x10);
    iVar2 = 0;
    if (*(int *)(lVar3 + 0x10) != 0) {
      iVar2 = 5;
    }
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      uVar4 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
      lVar5 = (long)*(char *)(uVar4 + 0x1f);
      if (lVar5 < 0) {
        lVar5 = *(long *)(uVar4 + 0x10);
      }
      iVar2 = (int)lVar5 + iVar2;
    }
    *(int *)(lVar3 + 0x14) = iVar2;
LAB_109c80f0c:
    iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
  }
  else {
    if (0x31 < iVar1) {
      if (iVar1 < 0x46) {
        if (iVar1 == 0x32) goto LAB_109c80eec;
        if (iVar1 != 0x3c) goto LAB_109c80fb0;
      }
      else if (iVar1 != 0x46) {
        if (iVar1 != 0x47) goto LAB_109c80fb0;
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_109c808b0();
        goto LAB_109c80f94;
      }
LAB_109c80ed4:
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
      }
      else {
        uVar4 = uVar4 & 0xfffffffffffffffe;
        lVar3 = (long)*(char *)(uVar4 + 0x1f);
        if (lVar3 < 0) {
          lVar3 = *(long *)(uVar4 + 0x10);
        }
      }
      iVar2 = (int)lVar3;
      *(int *)(*(long *)(param_1 + 0x10) + 0x10) = iVar2;
      goto LAB_109c80f0c;
    }
    if (iVar1 == 0x1f) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109c7f024();
    }
    else {
      if (iVar1 == 0x28) goto LAB_109c80ed4;
      if (iVar1 != 0x29) goto LAB_109c80fb0;
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109c7f7f4();
    }
LAB_109c80f94:
    iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
  }
  iVar2 = iVar2 + 2;
LAB_109c80fb0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



/* Entry: 109c81038; end: 109c8103b;  */

/* WARNING: Possible PIC construction at 0x000109c8130c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c81310) */

void FUN_109c81038(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong *unaff_x19;
  ulong *puVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = (ulong *)(param_1 + 8);
  uVar10 = *puVar9;
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109c81410;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c80a48(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 < 0x1f) {
    if (iVar2 < 0x14) {
      if (iVar2 == 5) {
        if (iVar3 == 5) {
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 5) {
            ppuVar8 = &PTR_PTR_1132faeb0;
          }
          func_0x000109c7f258(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          goto LAB_109c81410;
        }
        FUN_109cbb364(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else if (iVar2 == 10) {
        if (iVar3 == 10) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faad8;
          bVar4 = *(int *)(param_2 + 0x1c) == 10;
          goto LAB_109c812f0;
        }
        FUN_109cbb3f0(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0xf) goto LAB_109c81410;
        if (iVar3 == 0xf) {
          lVar7 = *(long *)(param_1 + 0x10);
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faaf0;
          bVar4 = *(int *)(param_2 + 0x1c) == 0xf;
          goto LAB_109c812a8;
        }
        FUN_109cbb488(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (iVar2 != 0x14) {
        if (iVar2 == 0x19) {
          if (iVar3 != 0x19) {
            FUN_109cbb5e8(uVar10,*(undefined8 *)(param_2 + 0x10));
            goto LAB_109c8140c;
          }
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 0x19) {
            ppuVar8 = &PTR_PTR_1132faef0;
          }
          FUN_109c7fb8c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
        }
        else if (iVar2 == 0x1e) {
          if (iVar3 == 0x1e) {
            ppuVar6 = *(undefined ***)(param_2 + 0x10);
            ppuVar8 = &PTR_PTR_1132faa78;
            bVar4 = *(int *)(param_2 + 0x1c) == 0x1e;
            goto LAB_109c812f0;
          }
          FUN_109cbb67c(uVar10,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109c8140c;
        }
        goto LAB_109c81410;
      }
      if (iVar3 == 0x14) {
        lVar7 = *(long *)(param_1 + 0x10);
        ppuVar6 = *(undefined ***)(param_2 + 0x10);
        ppuVar8 = &PTR_PTR_1132faa60;
        bVar4 = *(int *)(param_2 + 0x1c) == 0x14;
LAB_109c812a8:
        if (!bVar4) {
          ppuVar6 = ppuVar8;
        }
        if (*(int *)(ppuVar6 + 2) != 0) {
          *(int *)(lVar7 + 0x10) = *(int *)(ppuVar6 + 2);
        }
        if (((ulong)ppuVar6[1] & 1) != 0) {
LAB_109c8130c:
          unaff_x30 = 0x109c81310;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar5 = (ulong *)(lVar7 + 8);
          unaff_x19 = puVar9;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
        goto LAB_109c81410;
      }
      FUN_109cbb538(uVar10,*(undefined8 *)(param_2 + 0x10));
    }
LAB_109c8140c:
    *(ulong *)(param_1 + 0x10) = uVar10;
  }
  else {
    if (iVar2 < 0x32) {
      if (iVar2 == 0x1f) {
        if (iVar3 == 0x1f) {
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 0x1f) {
            ppuVar8 = &PTR_PTR_1132fae90;
          }
          func_0x000109c7ed7c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          goto LAB_109c81410;
        }
        FUN_109cbb714(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0x28) {
          if (iVar2 == 0x29) {
            if (iVar3 != 0x29) {
              FUN_109cbb838(uVar10,*(undefined8 *)(param_2 + 0x10));
              goto LAB_109c8140c;
            }
            ppuVar8 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x1c) != 0x29) {
              ppuVar8 = &PTR_PTR_1132fae70;
            }
            func_0x000109c7f54c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          }
          goto LAB_109c81410;
        }
        if (iVar3 == 0x28) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faac0;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x28;
          goto LAB_109c812f0;
        }
        FUN_109cbb7a0(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      goto LAB_109c8140c;
    }
    if (iVar2 < 0x46) {
      if (iVar2 == 0x32) {
        if (iVar3 == 0x32) {
          lVar7 = *(long *)(param_1 + 0x10);
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132fab08;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x32;
          goto LAB_109c812a8;
        }
        FUN_109cbb8c4(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0x3c) goto LAB_109c81410;
        if (iVar3 == 0x3c) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faa90;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x3c;
          goto LAB_109c812f0;
        }
        FUN_109cbb974(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      goto LAB_109c8140c;
    }
    if (iVar2 == 0x46) {
      if (iVar3 != 0x46) {
        FUN_109cbba0c(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109c8140c;
      }
      ppuVar6 = *(undefined ***)(param_2 + 0x10);
      ppuVar8 = &PTR_PTR_1132faaa8;
      bVar4 = *(int *)(param_2 + 0x1c) == 0x46;
LAB_109c812f0:
      if (!bVar4) {
        ppuVar6 = ppuVar8;
      }
      if (((ulong)ppuVar6[1] & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        goto LAB_109c8130c;
      }
    }
    else if (iVar2 == 0x47) {
      if (iVar3 != 0x47) {
        FUN_109cbbaa4(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109c8140c;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 0x47) {
        ppuVar8 = &PTR_PTR_1132fb318;
      }
      FUN_109c80974(*(undefined8 *)(param_1 + 0x10),ppuVar8);
    }
  }
LAB_109c81410:
  puVar5 = puVar9;
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



/* Entry: 109c8103c; end: 109c81457;  */

/* WARNING: Possible PIC construction at 0x000109c8130c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c81310) */

void FUN_109c8103c(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong *unaff_x19;
  ulong *puVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = (ulong *)(param_1 + 8);
  uVar10 = *puVar9;
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109c81410;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c80a48(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 < 0x1f) {
    if (iVar2 < 0x14) {
      if (iVar2 == 5) {
        if (iVar3 == 5) {
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 5) {
            ppuVar8 = &PTR_PTR_1132faeb0;
          }
          func_0x000109c7f258(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          goto LAB_109c81410;
        }
        FUN_109cbb364(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else if (iVar2 == 10) {
        if (iVar3 == 10) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faad8;
          bVar4 = *(int *)(param_2 + 0x1c) == 10;
          goto LAB_109c812f0;
        }
        FUN_109cbb3f0(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0xf) goto LAB_109c81410;
        if (iVar3 == 0xf) {
          lVar7 = *(long *)(param_1 + 0x10);
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faaf0;
          bVar4 = *(int *)(param_2 + 0x1c) == 0xf;
          goto LAB_109c812a8;
        }
        FUN_109cbb488(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (iVar2 != 0x14) {
        if (iVar2 == 0x19) {
          if (iVar3 != 0x19) {
            FUN_109cbb5e8(uVar10,*(undefined8 *)(param_2 + 0x10));
            goto LAB_109c8140c;
          }
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 0x19) {
            ppuVar8 = &PTR_PTR_1132faef0;
          }
          FUN_109c7fb8c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
        }
        else if (iVar2 == 0x1e) {
          if (iVar3 == 0x1e) {
            ppuVar6 = *(undefined ***)(param_2 + 0x10);
            ppuVar8 = &PTR_PTR_1132faa78;
            bVar4 = *(int *)(param_2 + 0x1c) == 0x1e;
            goto LAB_109c812f0;
          }
          FUN_109cbb67c(uVar10,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109c8140c;
        }
        goto LAB_109c81410;
      }
      if (iVar3 == 0x14) {
        lVar7 = *(long *)(param_1 + 0x10);
        ppuVar6 = *(undefined ***)(param_2 + 0x10);
        ppuVar8 = &PTR_PTR_1132faa60;
        bVar4 = *(int *)(param_2 + 0x1c) == 0x14;
LAB_109c812a8:
        if (!bVar4) {
          ppuVar6 = ppuVar8;
        }
        if (*(int *)(ppuVar6 + 2) != 0) {
          *(int *)(lVar7 + 0x10) = *(int *)(ppuVar6 + 2);
        }
        if (((ulong)ppuVar6[1] & 1) != 0) {
LAB_109c8130c:
          unaff_x30 = 0x109c81310;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar5 = (ulong *)(lVar7 + 8);
          unaff_x19 = puVar9;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
        goto LAB_109c81410;
      }
      FUN_109cbb538(uVar10,*(undefined8 *)(param_2 + 0x10));
    }
LAB_109c8140c:
    *(ulong *)(param_1 + 0x10) = uVar10;
  }
  else {
    if (iVar2 < 0x32) {
      if (iVar2 == 0x1f) {
        if (iVar3 == 0x1f) {
          ppuVar8 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x1c) != 0x1f) {
            ppuVar8 = &PTR_PTR_1132fae90;
          }
          func_0x000109c7ed7c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          goto LAB_109c81410;
        }
        FUN_109cbb714(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0x28) {
          if (iVar2 == 0x29) {
            if (iVar3 != 0x29) {
              FUN_109cbb838(uVar10,*(undefined8 *)(param_2 + 0x10));
              goto LAB_109c8140c;
            }
            ppuVar8 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x1c) != 0x29) {
              ppuVar8 = &PTR_PTR_1132fae70;
            }
            func_0x000109c7f54c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
          }
          goto LAB_109c81410;
        }
        if (iVar3 == 0x28) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faac0;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x28;
          goto LAB_109c812f0;
        }
        FUN_109cbb7a0(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      goto LAB_109c8140c;
    }
    if (iVar2 < 0x46) {
      if (iVar2 == 0x32) {
        if (iVar3 == 0x32) {
          lVar7 = *(long *)(param_1 + 0x10);
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132fab08;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x32;
          goto LAB_109c812a8;
        }
        FUN_109cbb8c4(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar2 != 0x3c) goto LAB_109c81410;
        if (iVar3 == 0x3c) {
          ppuVar6 = *(undefined ***)(param_2 + 0x10);
          ppuVar8 = &PTR_PTR_1132faa90;
          bVar4 = *(int *)(param_2 + 0x1c) == 0x3c;
          goto LAB_109c812f0;
        }
        FUN_109cbb974(uVar10,*(undefined8 *)(param_2 + 0x10));
      }
      goto LAB_109c8140c;
    }
    if (iVar2 == 0x46) {
      if (iVar3 != 0x46) {
        FUN_109cbba0c(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109c8140c;
      }
      ppuVar6 = *(undefined ***)(param_2 + 0x10);
      ppuVar8 = &PTR_PTR_1132faaa8;
      bVar4 = *(int *)(param_2 + 0x1c) == 0x46;
LAB_109c812f0:
      if (!bVar4) {
        ppuVar6 = ppuVar8;
      }
      if (((ulong)ppuVar6[1] & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        goto LAB_109c8130c;
      }
    }
    else if (iVar2 == 0x47) {
      if (iVar3 != 0x47) {
        FUN_109cbbaa4(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109c8140c;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 0x47) {
        ppuVar8 = &PTR_PTR_1132fb318;
      }
      FUN_109c80974(*(undefined8 *)(param_1 + 0x10),ppuVar8);
    }
  }
LAB_109c81410:
  puVar5 = puVar9;
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



/* Entry: 109c81458; end: 109c8149f;  */

long FUN_109c81458(long param_1)

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



/* Entry: 109c814a0; end: 109c814a3;  */

long FUN_109c814a0(long param_1)

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



/* Entry: 109c814a4; end: 109c814b7;  */

void FUN_109c814a4(void)

{
  FUN_109c81458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c814b8; end: 109c814db;  */

undefined ** FUN_109c814b8(void)

{
  return &PTR_DAT_110b35b18;
}



/* Entry: 109c814dc; end: 109c8182b;  */

byte * FUN_109c814dc(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
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
  
  uVar13 = *(uint *)(param_1 + 0x24);
  if (uVar13 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar13 = *(uint *)(param_1 + 0x24);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar10;
    uVar3 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar6 + 1;
        *pbVar6 = (byte)uVar3 | 0x80;
        uVar13 = uVar3 >> 7;
        uVar1 = uVar3 >> 0xe;
        pbVar6 = pbVar10;
        uVar3 = uVar13;
      } while (uVar1 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar13;
  }
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    pbVar6 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar3 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar3 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar6 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar6;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c815c8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c81660:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar6 = uVar18;
              param_3[1] = (long)pbVar11;
              goto LAB_109c81660;
            }
            _memcpy(param_3[1],pbVar6,(long)pbVar11 - (long)pbVar6);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c815c8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar6 = uVar18;
              *param_3 = (long)(pbVar6 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar4 = *puVar15;
      uVar5 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar12 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar12 = uVar5 + 8;
    }
    uVar13 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar6;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar4 - iVar17;
          uVar4 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar6 = (byte *)*param_3;
          pbVar10 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar6 <= pbVar10);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109c8182c; end: 109c818ef;  */

long FUN_109c8182c(long param_1)

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
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
  }
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



/* Entry: 109c818f0; end: 109c819a3;  */

void FUN_109c818f0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x00010598df1c(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
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



/* Entry: 109c819a4; end: 109c82ddb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c819a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 < 0x370) {
    if (599 < iVar1) {
      if (iVar1 < 0x2f3) {
        if (iVar1 < 0x2a8) {
          if (iVar1 < 0x27b) {
            if (iVar1 < 0x267) {
              if (iVar1 == 600) goto LAB_109c8248c;
              if (iVar1 != 0x25d) goto LAB_109c824b8;
              uVar2 = *(ulong *)(param_1 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0))
              goto LAB_109c824b8;
              FUN_109c8d1cc(lVar3);
            }
            else {
              if (iVar1 != 0x267) {
                if ((iVar1 != 0x26c) && (iVar1 != 0x271)) goto LAB_109c824b8;
                goto LAB_109c8248c;
              }
              uVar2 = *(ulong *)(param_1 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0))
              goto LAB_109c824b8;
              FUN_109c8d4c4(lVar3);
            }
            goto LAB_109c824b0;
          }
          if (iVar1 < 0x294) {
            if ((iVar1 != 0x27b) && (iVar1 != 0x280)) goto LAB_109c824b8;
          }
          else if ((iVar1 != 0x294) && ((iVar1 != 0x299 && (iVar1 != 0x29e)))) goto LAB_109c824b8;
        }
        else if (iVar1 < 0x2d0) {
          if (iVar1 < 700) {
            if ((iVar1 != 0x2a8) && (iVar1 != 0x2ad)) goto LAB_109c824b8;
          }
          else if ((iVar1 != 700) && ((iVar1 != 0x2c6 && (iVar1 != 0x2cb)))) goto LAB_109c824b8;
        }
        else if (iVar1 < 0x2df) {
          if ((iVar1 != 0x2d0) && (iVar1 != 0x2da)) goto LAB_109c824b8;
        }
        else if ((iVar1 != 0x2df) && ((iVar1 != 0x2e4 && (iVar1 != 0x2ee)))) goto LAB_109c824b8;
      }
      else if (iVar1 < 0x33b) {
        if (iVar1 < 0x316) {
          if (iVar1 < 0x302) {
            if ((iVar1 != 0x2f3) && (iVar1 != 0x2f8)) goto LAB_109c824b8;
          }
          else if ((iVar1 != 0x302) && ((iVar1 != 0x307 && (iVar1 != 0x30c)))) goto LAB_109c824b8;
        }
        else if (iVar1 < 0x32f) {
          if ((iVar1 != 0x316) && (iVar1 != 0x31b)) goto LAB_109c824b8;
        }
        else if ((iVar1 != 0x32f) && ((iVar1 != 0x334 && (iVar1 != 0x339)))) goto LAB_109c824b8;
      }
      else if (iVar1 < 0x352) {
        if (iVar1 < 0x340) {
          if ((iVar1 != 0x33b) && (iVar1 != 0x33e)) goto LAB_109c824b8;
        }
        else if ((iVar1 != 0x340) && ((iVar1 != 0x348 && (iVar1 != 0x34d)))) goto LAB_109c824b8;
      }
      else if (iVar1 < 0x361) {
        if ((iVar1 != 0x352) && (iVar1 != 0x357)) goto LAB_109c824b8;
      }
      else if ((iVar1 != 0x361) && ((iVar1 != 0x366 && (iVar1 != 0x36b)))) goto LAB_109c824b8;
      goto LAB_109c8248c;
    }
    if (iVar1 < 0xf5) {
      if (iVar1 < 0xb4) {
        if (iVar1 < 0x96) {
          if (iVar1 < 0x82) {
            if (iVar1 == 100) {
              uVar2 = *(ulong *)(param_1 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0))
              goto LAB_109c824b8;
              func_0x000109c91b3c(lVar3);
            }
            else {
              if (iVar1 != 0x78) goto LAB_109c824b8;
              uVar2 = *(ulong *)(param_1 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0))
              goto LAB_109c824b8;
              func_0x000109c95550(lVar3);
            }
          }
          else if (iVar1 == 0x82) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            func_0x000109c80ba0(lVar3);
          }
          else {
            if (iVar1 != 0x8c) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109c93b88(lVar3);
          }
        }
        else {
          if (0xa4 < iVar1) {
            if (((iVar1 != 0xa5) && (iVar1 != 0xaa)) && (iVar1 != 0xaf)) goto LAB_109c824b8;
            goto LAB_109c8248c;
          }
          if (iVar1 == 0x96) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109c940a4(lVar3);
          }
          else {
            if (iVar1 != 0xa0) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109c949f4(lVar3);
          }
        }
      }
      else {
        if (0xd3 < iVar1) {
          if (iVar1 < 0xe6) {
            if (iVar1 == 0xd4) {
              uVar2 = *(ulong *)(param_1 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0))
              goto LAB_109c824b8;
              FUN_109c98f1c(lVar3);
              goto LAB_109c824b0;
            }
            if (iVar1 != 0xdc) goto LAB_109c824b8;
          }
          else if (((iVar1 != 0xe6) && (iVar1 != 0xe7)) && (iVar1 != 0xf0)) goto LAB_109c824b8;
LAB_109c8248c:
          uVar2 = *(ulong *)(param_1 + 8);
          goto joined_r0x000109c824dc;
        }
        if (iVar1 < 200) {
          if (iVar1 == 0xb4) goto LAB_109c8248c;
          if (iVar1 != 0xbe) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c9bd4c(lVar3);
        }
        else if (iVar1 == 200) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          func_0x000109c96d00(lVar3);
        }
        else if (iVar1 == 0xd2) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c98300(lVar3);
        }
        else {
          if (iVar1 != 0xd3) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c98a64(lVar3);
        }
      }
    }
    else if (iVar1 < 0x140) {
      if (iVar1 < 0x118) {
        if (0x103 < iVar1) {
          if (((iVar1 != 0x104) && (iVar1 != 0x105)) && (iVar1 != 0x10e)) goto LAB_109c824b8;
          goto LAB_109c8248c;
        }
        if (iVar1 == 0xf5) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c999ec(lVar3);
        }
        else {
          if (iVar1 != 0xfa) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c99544(lVar3);
        }
      }
      else if (iVar1 < 300) {
        if (iVar1 == 0x118) goto LAB_109c8248c;
        if (iVar1 != 0x122) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c9a1bc(lVar3);
      }
      else if (iVar1 == 300) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c9ab14(lVar3);
      }
      else {
        if (iVar1 == 0x12d) goto LAB_109c8248c;
        if (iVar1 != 0x136) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c9afb0(lVar3);
      }
    }
    else {
      if (iVar1 < 400) {
        if (iVar1 < 0x154) {
          if ((iVar1 != 0x140) && (iVar1 != 0x14a)) goto LAB_109c824b8;
        }
        else if ((iVar1 != 0x154) && ((iVar1 != 0x159 && (iVar1 != 0x15e)))) goto LAB_109c824b8;
        goto LAB_109c8248c;
      }
      if (iVar1 < 0x1a4) {
        if (iVar1 == 400) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c9cebc(lVar3);
        }
        else {
          if (iVar1 != 0x19a) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c9d528(lVar3);
        }
      }
      else if (iVar1 == 0x1a4) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c9ef90(lVar3);
      }
      else if (iVar1 == 0x1ae) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c9f504(lVar3);
      }
      else {
        if (iVar1 != 500) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109ca0144(lVar3);
      }
    }
    goto LAB_109c824b0;
  }
  if (iVar1 < 0x46f) {
    if (iVar1 < 0x3d9) {
      if (iVar1 < 0x3a7) {
        if (iVar1 < 900) {
          if (iVar1 < 0x37a) {
            if ((iVar1 != 0x370) && (iVar1 != 0x375)) goto LAB_109c824b8;
          }
          else if ((iVar1 != 0x37a) && (iVar1 != 0x37f)) goto LAB_109c824b8;
        }
        else if (iVar1 < 0x398) {
          if ((iVar1 != 900) && (iVar1 != 0x389)) goto LAB_109c824b8;
        }
        else {
          if (iVar1 == 0x398) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109cb0ff0(lVar3);
            goto LAB_109c824b0;
          }
          if ((iVar1 != 0x39d) && (iVar1 != 0x3a2)) goto LAB_109c824b8;
        }
      }
      else if (iVar1 < 0x3ba) {
        if (iVar1 < 0x3b1) {
          if ((iVar1 != 0x3a7) && (iVar1 != 0x3ac)) goto LAB_109c824b8;
        }
        else if ((iVar1 != 0x3b1) && ((iVar1 != 0x3b6 && (iVar1 != 0x3b8)))) goto LAB_109c824b8;
      }
      else if (iVar1 < 0x3c5) {
        if (iVar1 != 0x3ba) {
          if (iVar1 != 0x3c0) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109ca1870(lVar3);
          goto LAB_109c824b0;
        }
      }
      else if (iVar1 != 0x3c5) {
        if (iVar1 == 0x3cf) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cae620(lVar3);
          goto LAB_109c824b0;
        }
        if (iVar1 != 0x3d4) goto LAB_109c824b8;
      }
      goto LAB_109c8248c;
    }
    if (iVar1 < 0x42e) {
      if (iVar1 < 0x3fc) {
        if (iVar1 < 1000) {
          if (iVar1 == 0x3d9) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109ca0a38(lVar3);
          }
          else {
            if (iVar1 != 0x3e3) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109caf464(lVar3);
          }
        }
        else {
          if (iVar1 != 1000) {
            if (iVar1 == 0x3ed) {
              uVar2 = *(ulong *)(param_1 + 8);
            }
            else {
              if (iVar1 != 0x3f7) goto LAB_109c824b8;
              uVar2 = *(ulong *)(param_1 + 8);
            }
            goto joined_r0x000109c824dc;
          }
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cb0348(lVar3);
        }
      }
      else {
        if (iVar1 < 0x410) {
          if (iVar1 == 0x3fc) {
            uVar2 = *(ulong *)(param_1 + 8);
          }
          else {
            if (iVar1 != 0x401) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
          }
          goto joined_r0x000109c824dc;
        }
        if (iVar1 == 0x410) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109c9454c(lVar3);
        }
        else {
          if (iVar1 != 0x415) {
            if (iVar1 != 0x429) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            goto joined_r0x000109c824dc;
          }
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109ca0e2c(lVar3);
        }
      }
    }
    else if (iVar1 < 0x451) {
      if (iVar1 < 0x43d) {
        if (iVar1 != 0x42e) {
          if (iVar1 != 0x438) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          goto joined_r0x000109c824dc;
        }
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109ca1e60(lVar3);
      }
      else {
        if (iVar1 != 0x43d) {
          if (iVar1 == 0x442) {
            uVar2 = *(ulong *)(param_1 + 8);
          }
          else {
            if (iVar1 != 0x44c) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
          }
          goto joined_r0x000109c824dc;
        }
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109ca2548(lVar3);
      }
    }
    else if (iVar1 < 0x460) {
      if (iVar1 != 0x451) {
        if (iVar1 != 0x456) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        goto joined_r0x000109c824dc;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
      FUN_109ca4f74(lVar3);
    }
    else if (iVar1 == 0x460) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
      FUN_109cada44(lVar3);
    }
    else {
      if (iVar1 != 0x465) {
        if (iVar1 != 0x46a) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        goto joined_r0x000109c824dc;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
      FUN_109cacce8(lVar3);
    }
    goto LAB_109c824b0;
  }
  if (iVar1 < 0x4fb) {
    if (iVar1 < 0x4b0) {
      if (0x491 < iVar1) {
        if (iVar1 < 0x49c) {
          if (iVar1 != 0x492) {
            if (iVar1 != 0x497) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109ca7dbc(lVar3);
            goto LAB_109c824b0;
          }
          uVar2 = *(ulong *)(param_1 + 8);
        }
        else if (iVar1 == 0x49c) {
          uVar2 = *(ulong *)(param_1 + 8);
        }
        else {
          if (iVar1 != 0x4a6) {
            if (iVar1 != 0x4ab) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109ca884c(lVar3);
            goto LAB_109c824b0;
          }
          uVar2 = *(ulong *)(param_1 + 8);
        }
        goto joined_r0x000109c824dc;
      }
      if (iVar1 < 0x479) {
        if (iVar1 == 0x46f) {
          uVar2 = *(ulong *)(param_1 + 8);
          goto joined_r0x000109c824dc;
        }
        if (iVar1 != 0x474) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109cad2d8(lVar3);
      }
      else {
        if (iVar1 == 0x479) {
          uVar2 = *(ulong *)(param_1 + 8);
          goto joined_r0x000109c824dc;
        }
        if (iVar1 == 0x47e) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109ca722c(lVar3);
        }
        else {
          if (iVar1 != 0x483) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109ca7620(lVar3);
        }
      }
    }
    else {
      if (iVar1 < 0x4e2) {
        if (iVar1 < 0x4bf) {
          if (iVar1 == 0x4b0) {
            uVar2 = *(ulong *)(param_1 + 8);
          }
          else {
            if (iVar1 != 0x4ba) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
          }
        }
        else {
          if (iVar1 == 0x4bf) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109ca926c(lVar3);
            goto LAB_109c824b0;
          }
          if (iVar1 == 0x4c4) {
            uVar2 = *(ulong *)(param_1 + 8);
          }
          else {
            if (iVar1 != 0x4ce) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
          }
        }
        goto joined_r0x000109c824dc;
      }
      if (iVar1 < 0x4ec) {
        if (iVar1 == 0x4e2) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109ca9cc8(lVar3);
        }
        else {
          if (iVar1 != 0x4e7) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109caa198(lVar3);
        }
      }
      else if (iVar1 == 0x4ec) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109caa668(lVar3);
      }
      else if (iVar1 == 0x4f1) {
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109caab38(lVar3);
      }
      else {
        if (iVar1 != 0x4f6) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109cab008(lVar3);
      }
    }
  }
  else {
    if (iVar1 < 0x546) {
      if (iVar1 < 0x521) {
        if (iVar1 < 0x505) {
          if (iVar1 == 0x4fb) {
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109cab4d8(lVar3);
          }
          else {
            if (iVar1 != 0x500) goto LAB_109c824b8;
            uVar2 = *(ulong *)(param_1 + 8);
            if ((uVar2 & 1) != 0) {
              uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
            }
            if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
            FUN_109cab9a8(lVar3);
          }
        }
        else if (iVar1 == 0x505) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cabe78(lVar3);
        }
        else if (iVar1 == 0x50a) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cac348(lVar3);
        }
        else {
          if (iVar1 != 0x50f) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cac818(lVar3);
        }
        goto LAB_109c824b0;
      }
      if (iVar1 < 0x528) {
        if (iVar1 == 0x521) {
          uVar2 = *(ulong *)(param_1 + 8);
        }
        else {
          if (iVar1 != 0x523) goto LAB_109c824b8;
          uVar2 = *(ulong *)(param_1 + 8);
        }
      }
      else if (iVar1 == 0x528) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else if (iVar1 == 0x52d) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else {
        if (iVar1 != 0x532) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
      }
    }
    else if (iVar1 < 0x5b5) {
      if (iVar1 < 0x5aa) {
        if (iVar1 == 0x546) {
          uVar2 = *(ulong *)(param_1 + 8);
          if ((uVar2 & 1) != 0) {
            uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
          }
          if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
          FUN_109cb2274(lVar3);
          goto LAB_109c824b0;
        }
        if (iVar1 != 0x578) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else if (iVar1 == 0x5aa) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else if (iVar1 == 0x5af) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else {
        if (iVar1 != 0x5b4) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
      }
    }
    else if (iVar1 < 0x5ba) {
      if (iVar1 == 0x5b5) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      else {
        if (iVar1 != 0x5b9) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
      }
    }
    else if (iVar1 == 0x5ba) {
      uVar2 = *(ulong *)(param_1 + 8);
    }
    else {
      if (iVar1 != 0x5be) {
        if (iVar1 != 0x5bf) goto LAB_109c824b8;
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
        FUN_109c92a84(lVar3);
        goto LAB_109c824b0;
      }
      uVar2 = *(ulong *)(param_1 + 8);
    }
joined_r0x000109c824dc:
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x80), lVar3 == 0)) goto LAB_109c824b8;
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
LAB_109c824b0:
  __ZdlPv(lVar3);
LAB_109c824b8:
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}



/* Entry: 109c82ddc; end: 109c82ddf;  */

long FUN_109c82ddc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x70);
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_109c819a4(param_1);
  }
  FUN_109cb7064(param_1 + 0x58);
  FUN_109cb7064(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c82de0; end: 109c82df3;  */

void FUN_109c82de0(void)

{
  func_0x000109c82d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c82df4; end: 109c82e07;  */

long FUN_109c82df4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_109c91a9c(param_1);
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
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



/* Entry: 109c82e08; end: 109c82eb7;  */

long FUN_109c82e08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c82eb8; end: 109c82ecb;  */

long FUN_109c82eb8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c8f5ec();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c82ecc; end: 109c82f7b;  */

long FUN_109c82ecc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c82f7c; end: 109c82f83;  */

long FUN_109c82f7c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109c903d8();
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



/* Entry: 109c82f84; end: 109c83033;  */

long FUN_109c82f84(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83034; end: 109c8303b;  */

long FUN_109c83034(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c8303c; end: 109c83067;  */

long FUN_109c8303c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83068; end: 109c8306b;  */

long FUN_109c83068(long param_1)

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



/* Entry: 109c8306c; end: 109c83147;  */

long FUN_109c8306c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83148; end: 109c8315b;  */

long FUN_109c83148(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c80ba0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c8315c; end: 109c83187;  */

long FUN_109c8315c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83188; end: 109c8318f;  */

long FUN_109c83188(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c7d0d0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c7d0d0();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c83190; end: 109c838f3;  */

long FUN_109c83190(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c838f4; end: 109c838f7;  */

long FUN_109c838f4(long param_1)

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



/* Entry: 109c838f8; end: 109c83a57;  */

long FUN_109c838f8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83a58; end: 109c83a5b;  */

long FUN_109c83a58(long param_1)

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



/* Entry: 109c83a5c; end: 109c83a87;  */

long FUN_109c83a5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83a88; end: 109c83a8b;  */

long FUN_109c83a88(long param_1)

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



/* Entry: 109c83a8c; end: 109c83ab7;  */

long FUN_109c83a8c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83ab8; end: 109c83ac3;  */

long FUN_109c83ab8(long param_1)

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



/* Entry: 109c83ac4; end: 109c83b73;  */

long FUN_109c83ac4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83b74; end: 109c83b7b;  */

long FUN_109c83b74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c83b7c; end: 109c83ba7;  */

long FUN_109c83b7c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83ba8; end: 109c83bab;  */

long FUN_109c83ba8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c83bac; end: 109c83bd7;  */

long FUN_109c83bac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83bd8; end: 109c83bdb;  */

long FUN_109c83bd8(long param_1)

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



/* Entry: 109c83bdc; end: 109c83c33;  */

long FUN_109c83bdc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83c34; end: 109c83c37;  */

long FUN_109c83c34(long param_1)

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



/* Entry: 109c83c38; end: 109c83c63;  */

long FUN_109c83c38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83c64; end: 109c83c6b;  */

long FUN_109c83c64(long param_1)

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



/* Entry: 109c83c6c; end: 109c83cc3;  */

long FUN_109c83c6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83cc4; end: 109c83cc7;  */

long FUN_109c83cc4(long param_1)

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



/* Entry: 109c83cc8; end: 109c83cf3;  */

long FUN_109c83cc8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83cf4; end: 109c83cfb;  */

long FUN_109c83cf4(long param_1)

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



/* Entry: 109c83cfc; end: 109c83d27;  */

long FUN_109c83cfc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83d28; end: 109c83d2b;  */

long FUN_109c83d28(long param_1)

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



/* Entry: 109c83d2c; end: 109c83d83;  */

long FUN_109c83d2c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83d84; end: 109c83d87;  */

long FUN_109c83d84(long param_1)

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



/* Entry: 109c83d88; end: 109c83ddf;  */

long FUN_109c83d88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83de0; end: 109c83de3;  */

long FUN_109c83de0(long param_1)

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



/* Entry: 109c83de4; end: 109c83e3b;  */

long FUN_109c83de4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83e3c; end: 109c83e63;  */

long FUN_109c83e3c(long param_1)

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



/* Entry: 109c83e64; end: 109c83f3f;  */

long FUN_109c83e64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c83f40; end: 109c83f43;  */

long FUN_109c83f40(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c83f44; end: 109c840a3;  */

long FUN_109c83f44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c840a4; end: 109c840b3;  */

long FUN_109c840a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c840b4; end: 109c84173;  */

void FUN_109c840b4(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x00010598fd84(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
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
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_109c819a4(param_1);
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



/* Entry: 109c84174; end: 109c84c43;  */

long * FUN_109c84174(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar16;
  undefined1 *puVar15;
  
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar13 = (undefined8 *)*puVar11;
      goto LAB_109c841c4;
    }
  }
  else {
    puVar13 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c841c4:
      func_0x000107c303d4(puVar13,lVar4,1,&UNK_10f5a6a47);
      plVar8 = param_3;
      func_0x000107c280a0(param_3,1,puVar11,param_2);
      param_2 = plVar8;
    }
  }
  uVar16 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar4 = 8;
    plVar8 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + lVar4 + -1);
      }
      puVar13 = (undefined8 *)*puVar1;
      lVar5 = (long)*(char *)((long)puVar13 + 0x17);
      puVar11 = puVar13;
      if (lVar5 < 0) {
        lVar5 = puVar13[1];
        puVar11 = (undefined8 *)*puVar13;
      }
      func_0x000107c303d4(puVar11,lVar5,1,&UNK_10f5a6a74);
      lVar5 = (long)*(char *)((long)puVar13 + 0x17);
      if (((lVar5 < 0) && (lVar5 = puVar13[1], 0x7f < lVar5)) ||
         ((*param_3 - (long)plVar8) + 0xe < lVar5)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar13,plVar8);
      }
      else {
        *(undefined1 *)plVar8 = 0x12;
        *(char *)((long)plVar8 + 1) = (char)lVar5;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          puVar13 = (undefined8 *)*puVar13;
        }
        _memcpy((undefined1 *)((long)plVar8 + 2),puVar13,lVar5);
        param_2 = (long *)((undefined1 *)((long)plVar8 + 2) + lVar5);
      }
      lVar4 = lVar4 + 8;
      uVar16 = uVar16 - 1;
      plVar8 = param_2;
    } while (uVar16 != 0);
  }
  uVar16 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    lVar4 = 8;
    plVar8 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + lVar4 + -1);
      }
      puVar13 = (undefined8 *)*puVar1;
      lVar5 = (long)*(char *)((long)puVar13 + 0x17);
      puVar11 = puVar13;
      if (lVar5 < 0) {
        lVar5 = puVar13[1];
        puVar11 = (undefined8 *)*puVar13;
      }
      func_0x000107c303d4(puVar11,lVar5,1,&UNK_10f5a6aa2);
      lVar5 = (long)*(char *)((long)puVar13 + 0x17);
      if (((lVar5 < 0) && (lVar5 = puVar13[1], 0x7f < lVar5)) ||
         ((*param_3 - (long)plVar8) + 0xe < lVar5)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,3,puVar13,plVar8);
      }
      else {
        *(undefined1 *)plVar8 = 0x1a;
        *(char *)((long)plVar8 + 1) = (char)lVar5;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          puVar13 = (undefined8 *)*puVar13;
        }
        _memcpy((long)plVar8 + 2,puVar13,lVar5);
        param_2 = (long *)((long)plVar8 + 2 + lVar5);
      }
      lVar4 = lVar4 + 8;
      uVar16 = uVar16 - 1;
      plVar8 = param_2;
    } while (uVar16 != 0);
  }
  iVar14 = *(int *)(param_1 + 0x48);
  if (iVar14 != 0) {
    iVar12 = 0;
    plVar8 = param_2;
    do {
      uVar16 = *(ulong *)(param_1 + 0x40);
      puVar1 = (ulong *)(param_1 + 0x40);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar12 * 8 + 7);
      }
      param_2 = (long *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x28),plVar8,param_3);
      iVar12 = iVar12 + 1;
      plVar8 = param_2;
    } while (iVar14 != iVar12);
  }
  iVar14 = *(int *)(param_1 + 0x60);
  if (iVar14 != 0) {
    iVar12 = 0;
    plVar8 = param_2;
    do {
      uVar16 = *(ulong *)(param_1 + 0x58);
      puVar1 = (ulong *)(param_1 + 0x58);
      if ((uVar16 & 1) != 0) {
        puVar1 = (ulong *)(uVar16 + (long)iVar12 * 8 + 7);
      }
      param_2 = (long *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x28),plVar8,param_3);
      iVar12 = iVar12 + 1;
      plVar8 = param_2;
    } while (iVar14 != iVar12);
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    plVar8 = (long *)*param_3;
    if (param_2 < plVar8) {
      uVar6 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar9 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar9 + (long)((int)param_2 - (int)plVar8));
        plVar8 = (long *)*param_3;
      } while (plVar8 <= param_2);
      uVar6 = *(undefined1 *)(param_1 + 0x78);
    }
    *(undefined1 *)param_2 = 0x50;
    *(undefined1 *)((long)param_2 + 1) = uVar6;
    param_2 = (long *)((long)param_2 + 2);
  }
  uVar10 = *(uint *)(param_1 + 0x8c);
  plVar8 = (long *)(ulong)uVar10;
  lVar4 = 0x14;
  if ((int)uVar10 < 0x366) {
    if (599 < (int)uVar10) {
      if ((int)uVar10 < 0x2ad) {
        if ((int)uVar10 < 0x26c) {
          if (uVar10 != 600) {
            if ((uVar10 != 0x25d) && (uVar10 != 0x267)) goto LAB_109c84af4;
            goto LAB_109c84adc;
          }
        }
        else {
          uVar16 = (ulong)(uVar10 - 0x26c);
          if (0x3c < uVar10 - 0x26c) goto LAB_109c84af4;
          if ((1L << (uVar16 & 0x3f) & 0x1004200000000021U) == 0) {
            if ((1L << (uVar16 & 0x3f) & 0x10000100000U) == 0) {
              if (uVar16 != 0xf) goto LAB_109c84af4;
              goto LAB_109c84ad8;
            }
            goto LAB_109c849fc;
          }
        }
      }
      else {
        uVar2 = uVar10 - 0x32f;
        if (uVar2 < 0x33) {
          if ((1L << ((ulong)uVar2 & 0x3f) & 0x29421U) != 0) goto LAB_109c84adc;
          if ((1L << ((ulong)uVar2 & 0x3f) & 0x4010842000000U) != 0) goto LAB_109c84ab8;
        }
        if ((0x37 < uVar10 - 0x2ad) ||
           ((1L << ((ulong)(uVar10 - 0x2ad) & 0x3f) & 0x84200842008001U) == 0)) {
          uVar10 = uVar10 - 0x2ee;
          if (0x2d < uVar10) goto LAB_109c84af4;
          if ((1L << ((ulong)uVar10 & 0x3f) & 0x10042100421U) == 0) {
            if ((ulong)uVar10 != 0x2d) goto LAB_109c84af4;
            goto LAB_109c84adc;
          }
        }
      }
      goto LAB_109c84ab8;
    }
    if ((int)uVar10 < 0xe6) {
      if ((int)uVar10 < 0xaf) {
        uVar16 = (ulong)(uVar10 - 100);
        if (uVar10 - 100 < 0x3d) {
          if ((1L << (uVar16 & 0x3f) & 0x1004010000000001U) == 0) {
            if (uVar16 != 0x14) {
              if (uVar16 == 0x1e) goto LAB_109c849fc;
              goto LAB_109c846c4;
            }
            lVar4 = 0x50;
          }
        }
        else {
LAB_109c846c4:
          if (uVar10 == 0xa5) goto LAB_109c849fc;
          if (uVar10 != 0xaa) goto LAB_109c84af4;
        }
      }
      else if ((int)uVar10 < 0xd2) {
        if ((int)uVar10 < 0xbe) {
          if (uVar10 == 0xaf) goto LAB_109c84ab8;
          if (uVar10 != 0xb4) goto LAB_109c84af4;
          goto LAB_109c84a8c;
        }
        if ((uVar10 != 0xbe) && (uVar10 != 200)) goto LAB_109c84af4;
      }
      else if (1 < uVar10 - 0xd3) {
        if (uVar10 != 0xd2) {
          if (uVar10 != 0xdc) goto LAB_109c84af4;
          goto LAB_109c84a8c;
        }
        lVar4 = 0x40;
      }
    }
    else if ((int)uVar10 < 0x12d) {
      uVar16 = (ulong)(uVar10 - 0xe6);
      if (uVar10 - 0xe6 < 0x3d) {
        if ((1L << (uVar16 & 0x3f) & 0x1000010000108003U) != 0) goto LAB_109c84adc;
        if ((1L << (uVar16 & 0x3f) & 0xc0000400U) != 0) goto LAB_109c84ab8;
        if (uVar16 == 0x32) goto LAB_109c84ad8;
      }
      if (uVar10 != 300) goto LAB_109c84af4;
LAB_109c84548:
      lVar4 = 0x28;
    }
    else if ((int)uVar10 < 0x15e) {
      if (0x149 < (int)uVar10) {
        if ((uVar10 == 0x14a) || (uVar10 == 0x154)) goto LAB_109c849fc;
        if (uVar10 != 0x159) goto LAB_109c84af4;
        goto LAB_109c84ad8;
      }
      if (uVar10 != 0x12d) {
        if (uVar10 == 0x136) goto LAB_109c84a8c;
        if (uVar10 != 0x140) goto LAB_109c84af4;
      }
    }
    else if ((0x1e < uVar10 - 400) || ((1 << (ulong)(uVar10 - 400 & 0x1f) & 0x40100401U) == 0)) {
      if (uVar10 == 0x15e) goto LAB_109c84a5c;
      if (uVar10 != 500) goto LAB_109c84af4;
      lVar4 = 0x58;
    }
  }
  else {
    if ((int)uVar10 < 0x46f) {
      if ((int)uVar10 < 0x3d9) {
        if ((int)uVar10 < 0x3a7) {
          uVar16 = (ulong)(uVar10 - 0x366);
          if (0x3c < uVar10 - 0x366) goto LAB_109c84af4;
          if ((1L << (uVar16 & 0x3f) & 0x842108421U) != 0) goto LAB_109c84ab8;
          if ((1L << (uVar16 & 0x3f) & 0x1080000000000000U) == 0) {
            if (uVar16 != 0x32) goto LAB_109c84af4;
            goto LAB_109c84a8c;
          }
        }
        else {
          if (0x3b9 < (int)uVar10) {
            if ((int)uVar10 < 0x3c5) {
              if (uVar10 != 0x3ba) {
                if (uVar10 != 0x3c0) goto LAB_109c84af4;
                goto LAB_109c84ad0;
              }
            }
            else {
              if (uVar10 == 0x3c5) goto LAB_109c84ad0;
              if (uVar10 == 0x3cf) goto LAB_109c84a40;
              if (uVar10 != 0x3d4) goto LAB_109c84af4;
            }
            goto LAB_109c84ad8;
          }
          if ((int)uVar10 < 0x3b1) {
            if (uVar10 != 0x3a7) {
              if (uVar10 != 0x3ac) goto LAB_109c84af4;
              goto LAB_109c84ab8;
            }
            goto LAB_109c84ad8;
          }
          if (uVar10 == 0x3b1) goto LAB_109c84adc;
          if ((uVar10 != 0x3b6) && (uVar10 != 0x3b8)) goto LAB_109c84af4;
        }
LAB_109c849fc:
        lVar4 = 0x18;
        goto LAB_109c84adc;
      }
      if ((int)uVar10 < 0x410) {
        if ((int)uVar10 < 0x3ed) {
          if (uVar10 != 0x3d9) {
            if (uVar10 == 0x3e3) {
              lVar4 = 0x88;
            }
            else {
              if (uVar10 != 1000) goto LAB_109c84af4;
              lVar4 = 0x70;
            }
            goto LAB_109c84adc;
          }
        }
        else {
          if (0x3fb < (int)uVar10) {
            if ((uVar10 != 0x3fc) && (uVar10 != 0x401)) goto LAB_109c84af4;
            goto LAB_109c84ad8;
          }
          if (uVar10 == 0x3ed) goto LAB_109c84548;
          if (uVar10 != 0x3f7) goto LAB_109c84af4;
        }
      }
      else {
        if ((int)uVar10 < 0x451) {
          uVar16 = (ulong)(uVar10 - 0x410);
          if (0x3c < uVar10 - 0x410) goto LAB_109c84af4;
          if ((1L << (uVar16 & 0x3f) & 0x4010040000021U) != 0) goto LAB_109c84adc;
          if ((1L << (uVar16 & 0x3f) & 0x1000000002000000U) != 0) goto LAB_109c84ab8;
          if (uVar16 != 0x2d) goto LAB_109c84af4;
          goto LAB_109c84548;
        }
        if ((int)uVar10 < 0x460) {
          if (uVar10 != 0x451) {
            if (uVar10 != 0x456) goto LAB_109c84af4;
            goto LAB_109c84ab8;
          }
        }
        else {
          if (uVar10 == 0x460) goto LAB_109c84548;
          if (uVar10 != 0x465) {
            if (uVar10 != 0x46a) goto LAB_109c84af4;
            goto LAB_109c849fc;
          }
        }
      }
    }
    else {
      if (0x4e6 < (int)uVar10) {
        if (0x52c < (int)uVar10) {
          if ((int)uVar10 < 0x5b4) {
            if (0x577 < (int)uVar10) {
              if (uVar10 == 0x578) goto LAB_109c84a8c;
              if (uVar10 != 0x5aa) {
                if (uVar10 != 0x5af) goto LAB_109c84af4;
                goto LAB_109c84ad8;
              }
              goto LAB_109c84548;
            }
            if (uVar10 == 0x52d) goto LAB_109c849fc;
            if (uVar10 == 0x532) goto LAB_109c84ab8;
            if (uVar10 != 0x546) goto LAB_109c84af4;
          }
          else if ((int)uVar10 < 0x5ba) {
            if (uVar10 == 0x5b4) goto LAB_109c849fc;
            if (uVar10 == 0x5b5) goto LAB_109c84ad8;
            if (uVar10 != 0x5b9) goto LAB_109c84af4;
            lVar4 = 0x4c;
          }
          else if (uVar10 != 0x5ba) {
            if (uVar10 == 0x5be) goto LAB_109c84ad0;
            if (uVar10 != 0x5bf) goto LAB_109c84af4;
          }
          goto LAB_109c84adc;
        }
        uVar16 = (ulong)(uVar10 - 0x4e7);
        if (uVar10 - 0x4e7 < 0x3d) {
          if ((1L << (uVar16 & 0x3f) & 0x10842108421U) != 0) goto LAB_109c84548;
          if (uVar16 == 0x3a) goto LAB_109c84ab8;
          if (uVar16 == 0x3c) goto LAB_109c84ad0;
        }
        if (uVar10 != 0x528) goto LAB_109c84af4;
        goto LAB_109c849fc;
      }
      if (0x4a5 < (int)uVar10) {
        if ((int)uVar10 < 0x4bf) {
          if ((int)uVar10 < 0x4b0) {
            if (uVar10 != 0x4a6) {
              if (uVar10 != 0x4ab) goto LAB_109c84af4;
              goto LAB_109c84a40;
            }
          }
          else if (uVar10 != 0x4b0) {
            if (uVar10 != 0x4ba) goto LAB_109c84af4;
            goto LAB_109c84ad8;
          }
LAB_109c84ad0:
          lVar4 = 0x20;
        }
        else {
          if (0x4cd < (int)uVar10) {
            if (uVar10 != 0x4ce) {
              if (uVar10 != 0x4e2) goto LAB_109c84af4;
              goto LAB_109c84548;
            }
LAB_109c84a5c:
            lVar4 = 0x2c;
            goto LAB_109c84adc;
          }
          if (uVar10 == 0x4bf) {
            lVar4 = 0x34;
            goto LAB_109c84adc;
          }
          if (uVar10 != 0x4c4) goto LAB_109c84af4;
LAB_109c84ad8:
          lVar4 = 0x1c;
        }
        goto LAB_109c84adc;
      }
      if (0x482 < (int)uVar10) {
        if ((int)uVar10 < 0x497) {
          if (uVar10 == 0x483) goto LAB_109c84a5c;
          if (uVar10 != 0x492) goto LAB_109c84af4;
        }
        else {
          if (uVar10 == 0x497) {
LAB_109c84a40:
            lVar4 = 0x38;
            goto LAB_109c84adc;
          }
          if (uVar10 != 0x49c) goto LAB_109c84af4;
        }
        goto LAB_109c84ad0;
      }
      if ((int)uVar10 < 0x479) {
        if (uVar10 == 0x46f) {
LAB_109c84ab8:
          lVar4 = 0x10;
          goto LAB_109c84adc;
        }
        if (uVar10 != 0x474) goto LAB_109c84af4;
      }
      else {
        if (uVar10 == 0x479) goto LAB_109c84ab8;
        if (uVar10 != 0x47e) goto LAB_109c84af4;
      }
    }
LAB_109c84a8c:
    lVar4 = 0x24;
  }
LAB_109c84adc:
  func_0x000107c303cc(plVar8,*(long *)(param_1 + 0x80),
                      *(undefined4 *)(*(long *)(param_1 + 0x80) + lVar4),param_2,param_3);
  param_2 = plVar8;
LAB_109c84af4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar4 = *(long *)(uVar16 + 8);
      uVar7 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar4 = uVar16 + 8;
    }
    uVar10 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar10) {
      puVar15 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar15 < (int)uVar10) {
        do {
          iVar14 = (int)puVar15;
          _memcpy(param_2,lVar4,(long)iVar14);
          uVar10 = (int)uVar7 - iVar14;
          uVar7 = (ulong)uVar10;
          lVar4 = lVar4 + iVar14;
          plVar9 = (long *)*param_3;
          plVar8 = (long *)((long)param_2 + (long)iVar14);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar8 = (long *)((long)plVar3 + (long)((int)plVar8 - (int)plVar9));
            plVar9 = (long *)*param_3;
            param_2 = plVar8;
          } while (plVar9 <= plVar8);
          puVar15 = (undefined1 *)((long)plVar9 + (0x10 - (long)param_2));
        } while ((int)puVar15 < (int)uVar10);
      }
      _memcpy(param_2,lVar4,(long)(int)uVar10);
      param_2 = (long *)((long)param_2 + (long)(int)uVar10);
    }
    else {
      _memcpy(param_2,lVar4,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar10);
    }
  }
  return param_2;
}



/* Entry: 109c84c44; end: 109c85b3b;  */

long FUN_109c84c44(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  uVar9 = uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    puVar10 = (ulong *)(uVar8 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar2 = puVar10;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar1 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      uVar9 = uVar1 + uVar9 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
      puVar10 = puVar10 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  lVar6 = uVar9 + uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    uVar9 = *(ulong *)(param_1 + 0x28);
    puVar10 = (ulong *)(uVar9 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x28);
      if ((uVar9 & 1) != 0) {
        puVar2 = puVar10;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar8 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar8 = (ulong)bVar3;
      }
      lVar6 = uVar8 + lVar6 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      puVar10 = puVar10 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar9 = *(ulong *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x48);
  lVar6 = lVar6 + iVar4;
  puVar10 = (ulong *)(param_1 + 0x40);
  if ((uVar9 & 1) != 0) {
    puVar10 = (ulong *)(uVar9 + 7);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      uVar9 = *puVar10;
      FUN_109c8182c();
      lVar6 = uVar9 + lVar6 + (ulong)((int)LZCOUNT((int)uVar9) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  uVar9 = *(ulong *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x60);
  lVar6 = lVar6 + iVar4;
  puVar10 = (ulong *)(param_1 + 0x58);
  if ((uVar9 & 1) != 0) {
    puVar10 = (ulong *)(uVar9 + 7);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      uVar9 = *puVar10;
      FUN_109c8182c();
      lVar6 = uVar9 + lVar6 + (ulong)((int)LZCOUNT((int)uVar9) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  uVar9 = *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar9 + 0x17);
  lVar11 = lVar7;
  if (lVar7 < 0) {
    lVar11 = *(long *)(uVar9 + 8);
  }
  if (lVar11 != 0) {
    lVar11 = *(long *)(uVar9 + 8);
    if (-1 < *(char *)(uVar9 + 0x17)) {
      lVar11 = lVar7;
    }
    lVar6 = lVar6 + lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6) + 1;
  }
  lVar6 = lVar6 + (ulong)*(byte *)(param_1 + 0x78) * 2;
  iVar4 = *(int *)(param_1 + 0x8c);
  if (iVar4 < 0x370) {
    if (iVar4 < 600) {
      if (iVar4 < 0xf5) {
        if (iVar4 < 0xb4) {
          if (iVar4 < 0x96) {
            if (iVar4 < 0x82) {
              if (iVar4 == 100) {
                lVar11 = *(long *)(param_1 + 0x80);
                FUN_109c92734();
              }
              else {
                if (iVar4 != 0x78) goto LAB_109c85aec;
                lVar11 = *(long *)(param_1 + 0x80);
                FUN_109c95c28();
              }
            }
            else if (iVar4 == 0x82) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c80df0();
            }
            else {
              if (iVar4 != 0x8c) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c93f90();
            }
          }
          else if (iVar4 < 0xa5) {
            if (iVar4 == 0x96) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c94448();
            }
            else {
              if (iVar4 != 0xa0) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c94e74();
            }
          }
          else {
            if (iVar4 != 0xa5) {
              if (iVar4 != 0xaa) {
                if (iVar4 != 0xaf) goto LAB_109c85aec;
                goto LAB_109c85744;
              }
              lVar11 = *(long *)(param_1 + 0x80);
              func_0x000109c85b3c();
              goto LAB_109c85ae8;
            }
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c9cc04();
          }
        }
        else if (iVar4 < 0xd4) {
          if (iVar4 < 200) {
            if (iVar4 == 0xb4) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c975c0();
            }
            else {
              if (iVar4 != 0xbe) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109c9c104();
            }
          }
          else if (iVar4 == 200) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c96f3c();
          }
          else if (iVar4 == 0xd2) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c9895c();
          }
          else {
            if (iVar4 != 0xd3) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c98e2c();
          }
        }
        else {
          if (0xe5 < iVar4) {
            if (iVar4 == 0xe6) {
              lVar11 = *(long *)(param_1 + 0x80);
              func_0x000109c85b8c();
            }
            else {
              if (iVar4 != 0xe7) {
                if (iVar4 != 0xf0) goto LAB_109c85aec;
                goto LAB_109c85744;
              }
              lVar11 = *(long *)(param_1 + 0x80);
              func_0x000109c85bdc();
            }
            goto LAB_109c85ae8;
          }
          if (iVar4 == 0xd4) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c99404();
          }
          else {
            if (iVar4 != 0xdc) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c98274();
          }
        }
      }
      else if (iVar4 < 0x140) {
        if (iVar4 < 0x118) {
          if (0x103 < iVar4) {
            if ((iVar4 == 0x104) || (iVar4 == 0x105)) goto LAB_109c85744;
            if (iVar4 != 0x10e) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85c2c();
            goto LAB_109c85ae8;
          }
          if (iVar4 == 0xf5) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c9a018();
          }
          else {
            if (iVar4 != 0xfa) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c998fc();
          }
        }
        else if (iVar4 < 300) {
          if (iVar4 == 0x118) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c9bcd0();
          }
          else {
            if (iVar4 != 0x122) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c9a574();
          }
        }
        else if (iVar4 == 300) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9aee8();
        }
        else if (iVar4 == 0x12d) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9aaa0();
        }
        else {
          if (iVar4 != 0x136) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9b2fc();
        }
      }
      else if (iVar4 < 400) {
        if (iVar4 < 0x154) {
          if (iVar4 == 0x140) {
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85c74();
            goto LAB_109c85ae8;
          }
          if (iVar4 != 0x14a) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c979f4();
        }
        else if (iVar4 == 0x154) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9ce4c();
        }
        else if (iVar4 == 0x159) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9b624();
        }
        else {
          if (iVar4 != 0x15e) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9b944();
        }
      }
      else if (iVar4 < 0x1a4) {
        if (iVar4 == 400) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c9d3a4();
        }
        else {
          if (iVar4 != 0x19a) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          func_0x000109c9dbc4();
        }
      }
      else if (iVar4 == 0x1a4) {
        lVar11 = *(long *)(param_1 + 0x80);
        func_0x000109c9f3ac();
      }
      else if (iVar4 == 0x1ae) {
        lVar11 = *(long *)(param_1 + 0x80);
        func_0x000109c9f950();
      }
      else {
        if (iVar4 != 500) goto LAB_109c85aec;
        lVar11 = *(long *)(param_1 + 0x80);
        func_0x000109ca0838();
      }
      goto LAB_109c85acc;
    }
    if (iVar4 < 0x2f3) {
      if (iVar4 < 0x2a8) {
        if (0x27a < iVar4) {
          if (iVar4 < 0x294) {
            if (iVar4 == 0x27b) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109cb1c74();
            }
            else {
              if (iVar4 != 0x280) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109cb1f10();
            }
          }
          else {
            if (iVar4 != 0x294) {
              if ((iVar4 != 0x299) && (iVar4 != 0x29e)) goto LAB_109c85aec;
              goto LAB_109c85744;
            }
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109caf418();
          }
          goto LAB_109c85acc;
        }
        if (iVar4 < 0x267) {
          if (iVar4 != 600) {
            if (iVar4 != 0x25d) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c8d400();
            goto LAB_109c85acc;
          }
        }
        else {
          if (iVar4 == 0x267) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109c8d7ec();
            goto LAB_109c85acc;
          }
          if ((iVar4 != 0x26c) && (iVar4 != 0x271)) goto LAB_109c85aec;
        }
      }
      else if (iVar4 < 0x2d0) {
        if (iVar4 < 700) {
          if ((iVar4 != 0x2a8) && (iVar4 != 0x2ad)) goto LAB_109c85aec;
        }
        else if ((iVar4 != 700) && ((iVar4 != 0x2c6 && (iVar4 != 0x2cb)))) goto LAB_109c85aec;
      }
      else if (iVar4 < 0x2df) {
        if ((iVar4 != 0x2d0) && (iVar4 != 0x2da)) goto LAB_109c85aec;
      }
      else if ((iVar4 != 0x2df) && ((iVar4 != 0x2e4 && (iVar4 != 0x2ee)))) goto LAB_109c85aec;
    }
    else if (iVar4 < 0x33b) {
      if (iVar4 < 0x316) {
        if (iVar4 < 0x302) {
          if ((iVar4 != 0x2f3) && (iVar4 != 0x2f8)) goto LAB_109c85aec;
        }
        else if ((iVar4 != 0x302) && ((iVar4 != 0x307 && (iVar4 != 0x30c)))) goto LAB_109c85aec;
      }
      else {
        if (0x32e < iVar4) {
          if (iVar4 == 0x32f) {
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85cc4();
          }
          else if (iVar4 == 0x334) {
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85d14();
          }
          else {
            if (iVar4 != 0x339) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85d64();
          }
          goto LAB_109c85ae8;
        }
        if (iVar4 != 0x316) {
          if (iVar4 != 0x31b) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cb1958();
          goto LAB_109c85acc;
        }
      }
    }
    else {
      if (iVar4 < 0x352) {
        if (iVar4 < 0x340) {
          if (iVar4 == 0x33b) {
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85db4();
          }
          else {
            if (iVar4 != 0x33e) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85e04();
          }
        }
        else {
          if (iVar4 != 0x340) {
            if ((iVar4 != 0x348) && (iVar4 != 0x34d)) goto LAB_109c85aec;
            goto LAB_109c85744;
          }
          lVar11 = *(long *)(param_1 + 0x80);
          func_0x000109c85e54();
        }
        goto LAB_109c85ae8;
      }
      if (iVar4 < 0x361) {
        if ((iVar4 != 0x352) && (iVar4 != 0x357)) goto LAB_109c85aec;
      }
      else if ((iVar4 != 0x361) && ((iVar4 != 0x366 && (iVar4 != 0x36b)))) goto LAB_109c85aec;
    }
LAB_109c85744:
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x80) + 8);
    if ((uVar9 & 1) == 0) {
      lVar11 = 0;
    }
    else {
      uVar9 = uVar9 & 0xfffffffffffffffe;
      lVar11 = (long)*(char *)(uVar9 + 0x1f);
      if (lVar11 < 0) {
        lVar11 = *(long *)(uVar9 + 0x10);
      }
    }
    *(int *)(*(long *)(param_1 + 0x80) + 0x10) = (int)lVar11;
    lVar11 = lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6);
  }
  else {
    if (iVar4 < 0x46f) {
      if (iVar4 < 0x3d9) {
        if (iVar4 < 0x3a7) {
          if (iVar4 < 900) {
            if (iVar4 < 0x37a) {
              if ((iVar4 != 0x370) && (iVar4 != 0x375)) goto LAB_109c85aec;
            }
            else if ((iVar4 != 0x37a) && (iVar4 != 0x37f)) goto LAB_109c85aec;
          }
          else {
            if (0x397 < iVar4) {
              if (iVar4 == 0x398) {
                lVar11 = *(long *)(param_1 + 0x80);
                FUN_109cb133c();
              }
              else if (iVar4 == 0x39d) {
                lVar11 = *(long *)(param_1 + 0x80);
                FUN_109ca71bc();
              }
              else {
                if (iVar4 != 0x3a2) goto LAB_109c85aec;
                lVar11 = *(long *)(param_1 + 0x80);
                FUN_109ca6490();
              }
              goto LAB_109c85acc;
            }
            if ((iVar4 != 900) && (iVar4 != 0x389)) goto LAB_109c85aec;
          }
          goto LAB_109c85744;
        }
        if (iVar4 < 0x3ba) {
          if (iVar4 < 0x3b1) {
            if (iVar4 != 0x3a7) {
              if (iVar4 != 0x3ac) goto LAB_109c85aec;
              goto LAB_109c85744;
            }
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca6718();
          }
          else if (iVar4 == 0x3b1) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca6b3c();
          }
          else if (iVar4 == 0x3b6) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca1800();
          }
          else {
            if (iVar4 != 0x3b8) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca6d3c();
          }
        }
        else if (iVar4 < 0x3c5) {
          if (iVar4 == 0x3ba) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca6fc4();
          }
          else {
            if (iVar4 != 0x3c0) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca1bf4();
          }
        }
        else if (iVar4 == 0x3c5) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca1df8();
        }
        else if (iVar4 == 0x3cf) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109caea08();
        }
        else {
          if (iVar4 != 0x3d4) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca1620();
        }
      }
      else if (iVar4 < 0x42e) {
        if (iVar4 < 0x3fc) {
          if (iVar4 < 1000) {
            if (iVar4 == 0x3d9) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109ca0d84();
            }
            else {
              if (iVar4 != 0x3e3) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109cb0140();
            }
          }
          else if (iVar4 == 1000) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cb0e5c();
          }
          else if (iVar4 == 0x3ed) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cb21f0();
          }
          else {
            if (iVar4 != 0x3f7) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cae120();
          }
        }
        else if (iVar4 < 0x410) {
          if (iVar4 == 0x3fc) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cae5cc();
          }
          else {
            if (iVar4 != 0x401) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cae384();
          }
        }
        else if (iVar4 == 0x410) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109c948f0();
        }
        else {
          if (iVar4 != 0x415) {
            if (iVar4 != 0x429) goto LAB_109c85aec;
            goto LAB_109c85744;
          }
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca12fc();
        }
      }
      else {
        if (iVar4 < 0x451) {
          if (iVar4 < 0x43d) {
            if (iVar4 == 0x42e) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109ca2218();
              goto LAB_109c85acc;
            }
            if (iVar4 != 0x438) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85ea4();
          }
          else {
            if (iVar4 == 0x43d) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109ca28fc();
              goto LAB_109c85acc;
            }
            if (iVar4 != 0x442) {
              if (iVar4 != 0x44c) goto LAB_109c85aec;
              goto LAB_109c85744;
            }
            lVar11 = *(long *)(param_1 + 0x80);
            func_0x000109c85ef4();
          }
          goto LAB_109c85ae8;
        }
        if (iVar4 < 0x460) {
          if (iVar4 != 0x451) {
            if (iVar4 != 0x456) goto LAB_109c85aec;
            goto LAB_109c85744;
          }
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca52c0();
        }
        else if (iVar4 == 0x460) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109caddf8();
        }
        else if (iVar4 == 0x465) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cad034();
        }
        else {
          if (iVar4 != 0x46a) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cad268();
        }
      }
    }
    else if (iVar4 < 0x4fb) {
      if (iVar4 < 0x4b0) {
        if (iVar4 < 0x492) {
          if (iVar4 < 0x479) {
            if (iVar4 != 0x46f) {
              if (iVar4 != 0x474) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109cad624();
              goto LAB_109c85acc;
            }
          }
          else if (iVar4 != 0x479) {
            if (iVar4 == 0x47e) {
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109ca7578();
            }
            else {
              if (iVar4 != 0x483) goto LAB_109c85aec;
              lVar11 = *(long *)(param_1 + 0x80);
              FUN_109ca7a3c();
            }
            goto LAB_109c85acc;
          }
          goto LAB_109c85744;
        }
        if (iVar4 < 0x49c) {
          if (iVar4 == 0x492) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca7d54();
          }
          else {
            if (iVar4 != 0x497) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca81ec();
          }
        }
        else if (iVar4 == 0x49c) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca8524();
        }
        else if (iVar4 == 0x4a6) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca87e4();
        }
        else {
          if (iVar4 != 0x4ab) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca8c7c();
        }
      }
      else if (iVar4 < 0x4e2) {
        if (iVar4 < 0x4bf) {
          if (iVar4 == 0x4b0) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca8fb4();
          }
          else {
            if (iVar4 != 0x4ba) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109ca9210();
          }
        }
        else if (iVar4 == 0x4bf) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca963c();
        }
        else if (iVar4 == 0x4c4) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca9904();
        }
        else {
          if (iVar4 != 0x4ce) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109ca9c3c();
        }
      }
      else if (iVar4 < 0x4ec) {
        if (iVar4 == 0x4e2) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109caa0e0();
        }
        else {
          if (iVar4 != 0x4e7) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109caa5b0();
        }
      }
      else if (iVar4 == 0x4ec) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109caaa80();
      }
      else if (iVar4 == 0x4f1) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109caaf50();
      }
      else {
        if (iVar4 != 0x4f6) goto LAB_109c85aec;
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109cab420();
      }
    }
    else if (iVar4 < 0x546) {
      if (iVar4 < 0x521) {
        if (iVar4 < 0x505) {
          if (iVar4 == 0x4fb) {
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cab8f0();
          }
          else {
            if (iVar4 != 0x500) goto LAB_109c85aec;
            lVar11 = *(long *)(param_1 + 0x80);
            FUN_109cabdc0();
          }
        }
        else if (iVar4 == 0x505) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cac290();
        }
        else if (iVar4 == 0x50a) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cac760();
        }
        else {
          if (iVar4 != 0x50f) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cacc30();
        }
      }
      else if (iVar4 < 0x528) {
        if (iVar4 == 0x521) goto LAB_109c85744;
        if (iVar4 != 0x523) goto LAB_109c85aec;
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109ca4958();
      }
      else if (iVar4 == 0x528) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109ca4d48();
      }
      else {
        if (iVar4 != 0x52d) {
          if (iVar4 != 0x532) goto LAB_109c85aec;
          goto LAB_109c85744;
        }
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109ca4b4c();
      }
    }
    else if (iVar4 < 0x5b5) {
      if (iVar4 < 0x5aa) {
        if (iVar4 == 0x546) {
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cb26d8();
        }
        else {
          if (iVar4 != 0x578) goto LAB_109c85aec;
          lVar11 = *(long *)(param_1 + 0x80);
          FUN_109cb2b38();
        }
      }
      else if (iVar4 == 0x5aa) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109cb3f90();
      }
      else if (iVar4 == 0x5af) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109cb4270();
      }
      else {
        if (iVar4 != 0x5b4) goto LAB_109c85aec;
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109cb2df0();
      }
    }
    else if (iVar4 < 0x5ba) {
      if (iVar4 == 0x5b5) {
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109cb3030();
      }
      else {
        if (iVar4 != 0x5b9) goto LAB_109c85aec;
        lVar11 = *(long *)(param_1 + 0x80);
        FUN_109c9620c();
      }
    }
    else if (iVar4 == 0x5ba) {
      lVar11 = *(long *)(param_1 + 0x80);
      FUN_109c965d8();
    }
    else if (iVar4 == 0x5be) {
      lVar11 = *(long *)(param_1 + 0x80);
      FUN_109cb3228();
    }
    else {
      if (iVar4 != 0x5bf) goto LAB_109c85aec;
      lVar11 = *(long *)(param_1 + 0x80);
      FUN_109c937ec();
    }
LAB_109c85acc:
    lVar11 = lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6);
  }
LAB_109c85ae8:
  lVar6 = lVar6 + lVar11 + 2;
LAB_109c85aec:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar11 < 0) {
      lVar11 = *(long *)(uVar9 + 0x10);
    }
    lVar6 = lVar11 + lVar6;
  }
  *(int *)(param_1 + 0x88) = (int)lVar6;
  return lVar6;
}



/* Entry: 109c85b3c; end: 109c85f47;  */

long FUN_109c85b3c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
}



/* Entry: 109c85f48; end: 109c893db;  */

/* WARNING: Possible PIC construction at 0x000109c88044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109c87d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c88048) */
/* WARNING: Removing unreachable block (ram,0x000109c87d34) */

void FUN_109c85f48(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong *unaff_x19;
  ulong *puVar11;
  long unaff_x20;
  ulong uVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar12 = *puVar11;
  if ((uVar12 & 1) != 0) {
    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303bc(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    func_0x000107c303c4(param_1 + 0x58,param_2 + 0x58);
  }
  uVar6 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x70,uVar6,uVar7);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x8c);
  if (iVar2 == 0) goto LAB_109c88a58;
  iVar3 = *(int *)(param_1 + 0x8c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c819a4(param_1);
    }
    *(int *)(param_1 + 0x8c) = iVar2;
  }
  if (iVar2 < 0x370) {
    if (iVar2 < 600) {
      if (iVar2 < 0xf5) {
        if (iVar2 < 0xb4) {
          if (iVar2 < 0x96) {
            if (iVar2 < 0x82) {
              if (iVar2 == 100) {
                if (iVar3 != 100) {
                  FUN_109cbbb54(uVar12,*(undefined8 *)(param_2 + 0x80));
                  goto LAB_109c88a54;
                }
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 100) {
                  ppuVar10 = &PTR_PTR_1132fc0b8;
                }
                func_0x000109c88aac(*(undefined8 *)(param_1 + 0x80),ppuVar10);
              }
              else if (iVar2 == 0x78) {
                if (iVar3 != 0x78) {
                  FUN_109cbbd14(uVar12,*(undefined8 *)(param_2 + 0x80));
                  goto LAB_109c88a54;
                }
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 0x78) {
                  ppuVar10 = &PTR_PTR_1132fbca8;
                }
                func_0x000109c88e00(*(undefined8 *)(param_1 + 0x80),ppuVar10);
              }
            }
            else if (iVar2 == 0x82) {
              if (iVar3 != 0x82) {
                func_0x000109cbbe38(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x82) {
                ppuVar10 = &PTR_PTR_1132faf10;
              }
              FUN_109c8103c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            else if (iVar2 == 0x8c) {
              if (iVar3 != 0x8c) {
                func_0x000109cbc00c(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x8c) {
                ppuVar10 = &PTR_PTR_1132fb9e8;
              }
              func_0x000109c89064(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
          }
          else if (iVar2 < 0xa5) {
            if (iVar2 == 0x96) {
              if (iVar3 != 0x96) {
                func_0x000109cbc0cc(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x96) {
                ppuVar10 = &PTR_PTR_1132fba68;
              }
              func_0x000109c89170(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            else if (iVar2 == 0xa0) {
              if (iVar3 != 0xa0) {
                func_0x000109cbc18c(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0xa0) {
                ppuVar10 = &PTR_PTR_1132fbbc0;
              }
              func_0x000109c8926c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
          }
          else if (iVar2 == 0xa5) {
            if (iVar3 != 0xa5) {
              FUN_109cbc27c(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xa5) {
              ppuVar10 = &PTR_PTR_1132facf0;
            }
            func_0x000109c893dc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xaa) {
            if (iVar3 != 0xaa) {
              FUN_109cbc308(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xaa) {
              ppuVar10 = &PTR_PTR_1132fa778;
            }
            func_0x000109c89428(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xaf) {
            if (iVar3 == 0xaf) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa4c0;
              bVar4 = *(int *)(param_2 + 0x8c) == 0xaf;
              goto LAB_109c87f1c;
            }
            FUN_109cbc3b8(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
        }
        else if (iVar2 < 0xd4) {
          if (iVar2 < 200) {
            if (iVar2 == 0xb4) {
              if (iVar3 != 0xb4) {
                FUN_109cbc450(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0xb4) {
                ppuVar10 = &PTR_PTR_1132fb278;
              }
              func_0x000109c89454(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            else if (iVar2 == 0xbe) {
              if (iVar3 != 0xbe) {
                func_0x000109cbc4dc(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0xbe) {
                ppuVar10 = &PTR_PTR_1132fb7d0;
              }
              func_0x000109c894ac(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
          }
          else if (iVar2 == 200) {
            if (iVar3 != 200) {
              func_0x000109cbc588(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 200) {
              ppuVar10 = &PTR_PTR_1132fb6f8;
            }
            func_0x000109c895ac(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xd2) {
            if (iVar3 != 0xd2) {
              FUN_109cbc670(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xd2) {
              ppuVar10 = &PTR_PTR_1132fbae8;
            }
            FUN_109c89768(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xd3) {
            if (iVar3 != 0xd3) {
              FUN_109cbc738(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xd3) {
              ppuVar10 = &PTR_PTR_1132fb798;
            }
            FUN_109c89884(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 < 0xe6) {
          if (iVar2 == 0xd4) {
            if (iVar3 != 0xd4) {
              func_0x000109cbc7e4(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xd4) {
              ppuVar10 = &PTR_PTR_1132fbb30;
            }
            func_0x000109c899a4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xdc) {
            if (iVar3 != 0xdc) {
              FUN_109cbc8b4(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xdc) {
              ppuVar10 = &PTR_PTR_1132faf30;
            }
            func_0x000109c89b34(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 0xe6) {
          if (iVar3 != 0xe6) {
            FUN_109cbc940(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0xe6) {
            ppuVar10 = &PTR_PTR_1132faa30;
          }
          func_0x000109c89b9c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0xe7) {
          if (iVar3 != 0xe7) {
            FUN_109cbc9f0(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0xe7) {
            ppuVar10 = &PTR_PTR_1132fa610;
          }
          func_0x000109c89bc8(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0xf0) {
          if (iVar3 == 0xf0) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa9b8;
            bVar4 = *(int *)(param_2 + 0x8c) == 0xf0;
            goto LAB_109c87f1c;
          }
          FUN_109cbcaa0(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
      }
      else if (iVar2 < 0x140) {
        if (iVar2 < 0x118) {
          if (0x103 < iVar2) {
            if (iVar2 == 0x104) {
              if (iVar3 == 0x104) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa688;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x104;
LAB_109c87f1c:
                if (!bVar4) {
                  ppuVar9 = ppuVar10;
                }
                if (((ulong)ppuVar9[1] & 1) != 0) {
                  puVar5 = (ulong *)(*(long *)(param_1 + 0x80) + 8);
                  goto LAB_109c88044;
                }
                goto LAB_109c88a58;
              }
              FUN_109cbccf0(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else if (iVar2 == 0x105) {
              if (iVar3 == 0x105) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa658;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x105;
                goto LAB_109c87f1c;
              }
              FUN_109cbcd88(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else {
              if (iVar2 != 0x10e) goto LAB_109c88a58;
              if (iVar3 == 0x10e) {
                lVar8 = *(long *)(param_1 + 0x80);
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa8e0;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x10e;
                goto LAB_109c8737c;
              }
              FUN_109cbce20(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            goto LAB_109c88a54;
          }
          if (iVar2 == 0xf5) {
            if (iVar3 != 0xf5) {
              FUN_109cbcb38(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xf5) {
              ppuVar10 = &PTR_PTR_1132fbd58;
            }
            func_0x000109c89bf4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0xfa) {
            if (iVar3 != 0xfa) {
              FUN_109cbcc44(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0xfa) {
              ppuVar10 = &PTR_PTR_1132fb878;
            }
            func_0x000109c89d90(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 < 300) {
          if (iVar2 == 0x118) {
            if (iVar3 != 0x118) {
              FUN_109cbcec4(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x118) {
              ppuVar10 = &PTR_PTR_1132fac50;
            }
            FUN_109c89e90(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x122) {
            if (iVar3 != 0x122) {
              func_0x000109cbcf4c(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x122) {
              ppuVar10 = &PTR_PTR_1132fb840;
            }
            FUN_109c89ed4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 300) {
          if (iVar3 != 300) {
            func_0x000109cbcff8(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 300) {
            ppuVar10 = &PTR_PTR_1132fb3f8;
          }
          FUN_109c89fd4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x12d) {
          if (iVar3 != 0x12d) {
            FUN_109cbd088(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x12d) {
            ppuVar10 = &PTR_PTR_1132fa850;
          }
          FUN_109c8a088(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x136) {
          if (iVar3 != 0x136) {
            FUN_109cbd128(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x136) {
            ppuVar10 = &PTR_PTR_1132fb160;
          }
          FUN_109c8a0b0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 400) {
        if (iVar2 < 0x154) {
          if (iVar2 == 0x140) {
            if (iVar3 != 0x140) {
              FUN_109cbd1ac(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            lVar8 = *(long *)(param_1 + 0x80);
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa958;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x140;
LAB_109c8737c:
            if (!bVar4) {
              ppuVar9 = ppuVar10;
            }
            if (*(char *)(ppuVar9 + 2) == '\x01') {
              *(undefined1 *)(lVar8 + 0x10) = 1;
            }
            if (((ulong)ppuVar9[1] & 1) != 0) {
              puVar5 = (ulong *)(lVar8 + 8);
LAB_109c88044:
              unaff_x30 = 0x109c88048;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
              unaff_x19 = puVar11;
              unaff_x20 = param_2;
              unaff_x29 = puVar1;
              goto code_r0x00010b4d197c;
            }
          }
          else if (iVar2 == 0x14a) {
            if (iVar3 != 0x14a) {
              FUN_109cbd250(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x14a) {
              ppuVar10 = &PTR_PTR_1132fab90;
            }
            func_0x000109c8a158(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 0x154) {
          if (iVar3 != 0x154) {
            FUN_109cbd2f4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x154) {
            ppuVar10 = &PTR_PTR_1132fabd0;
          }
          func_0x000109c8a180(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x159) {
          if (iVar3 != 0x159) {
            FUN_109cbd398(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x159) {
            ppuVar10 = &PTR_PTR_1132fac30;
          }
          func_0x000109c8a1a8(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x15e) {
          if (iVar3 != 0x15e) {
            FUN_109cbd420(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x15e) {
            ppuVar10 = &PTR_PTR_1132fb3c8;
          }
          func_0x000109c8a1dc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 0x1a4) {
        if (iVar2 == 400) {
          if (iVar3 != 400) {
            func_0x000109cbd4ac(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 400) {
            ppuVar10 = &PTR_PTR_1132fbc58;
          }
          func_0x000109c8a228(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x19a) {
          if (iVar3 != 0x19a) {
            func_0x000109cbd5a4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x19a) {
            ppuVar10 = &PTR_PTR_1132fc028;
          }
          func_0x000109c8a3a4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x1a4) {
        if (iVar3 != 0x1a4) {
          func_0x000109cbd750(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x1a4) {
          ppuVar10 = &PTR_PTR_1132fbd00;
        }
        func_0x000109c8a60c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x1ae) {
        if (iVar3 != 0x1ae) {
          FUN_109cbd838(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x1ae) {
          ppuVar10 = &PTR_PTR_1132fbe90;
        }
        func_0x000109c8a71c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 500) {
        if (iVar3 != 500) {
          FUN_109cbd95c(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 500) {
          ppuVar10 = &PTR_PTR_1132fbdb8;
        }
        FUN_109c8a814(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else {
      if (iVar2 < 0x2f3) {
        if (iVar2 < 0x2a8) {
          if (iVar2 < 0x27b) {
            if (iVar2 < 0x267) {
              if (iVar2 != 600) {
                if (iVar2 == 0x25d) {
                  if (iVar3 != 0x25d) {
                    func_0x000109cbdb14(uVar12,*(undefined8 *)(param_2 + 0x80));
                    goto LAB_109c88a54;
                  }
                  ppuVar10 = *(undefined ***)(param_2 + 0x80);
                  if (*(int *)(param_2 + 0x8c) != 0x25d) {
                    ppuVar10 = &PTR_PTR_1132fb340;
                  }
                  func_0x000109c8a8dc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
                }
                goto LAB_109c88a58;
              }
              if (iVar3 == 600) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa940;
                bVar4 = *(int *)(param_2 + 0x8c) == 600;
                goto LAB_109c87f1c;
              }
              FUN_109cbda7c(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else if (iVar2 == 0x267) {
              if (iVar3 == 0x267) {
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 0x267) {
                  ppuVar10 = &PTR_PTR_1132fb8b0;
                }
                func_0x000109c8a9b0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
                goto LAB_109c88a58;
              }
              func_0x000109cbdbc4(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else if (iVar2 == 0x26c) {
              if (iVar3 == 0x26c) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa6d0;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x26c;
                goto LAB_109c87f1c;
              }
              FUN_109cbdca0(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else {
              if (iVar2 != 0x271) goto LAB_109c88a58;
              if (iVar3 == 0x271) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa6b8;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x271;
                goto LAB_109c87f1c;
              }
              FUN_109cbdd38(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
          }
          else {
            if (iVar2 < 0x294) {
              if (iVar2 == 0x27b) {
                if (iVar3 != 0x27b) {
                  FUN_109cbddd0(uVar12,*(undefined8 *)(param_2 + 0x80));
                  goto LAB_109c88a54;
                }
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 0x27b) {
                  ppuVar10 = &PTR_PTR_1132fac70;
                }
                func_0x000109c8aac4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
              }
              else if (iVar2 == 0x280) {
                if (iVar3 != 0x280) {
                  FUN_109cbde58(uVar12,*(undefined8 *)(param_2 + 0x80));
                  goto LAB_109c88a54;
                }
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 0x280) {
                  ppuVar10 = &PTR_PTR_1132fac90;
                }
                func_0x000109c8ab10(*(undefined8 *)(param_1 + 0x80),ppuVar10);
              }
              goto LAB_109c88a58;
            }
            if (iVar2 == 0x294) {
              if (iVar3 == 0x294) {
                ppuVar10 = *(undefined ***)(param_2 + 0x80);
                if (*(int *)(param_2 + 0x8c) != 0x294) {
                  ppuVar10 = &PTR_PTR_1132fadd0;
                }
                func_0x000109c8ab4c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
                goto LAB_109c88a58;
              }
              FUN_109cbdee4(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else if (iVar2 == 0x299) {
              if (iVar3 == 0x299) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa970;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x299;
                goto LAB_109c87f1c;
              }
              FUN_109cbdf70(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else {
              if (iVar2 != 0x29e) goto LAB_109c88a58;
              if (iVar3 == 0x29e) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa820;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x29e;
                goto LAB_109c87f1c;
              }
              FUN_109cbe008(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
          }
        }
        else if (iVar2 < 0x2d0) {
          if (iVar2 < 700) {
            if (iVar2 == 0x2a8) {
              if (iVar3 == 0x2a8) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa508;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x2a8;
                goto LAB_109c87f1c;
              }
              FUN_109cbe0a0(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else {
              if (iVar2 != 0x2ad) goto LAB_109c88a58;
              if (iVar3 == 0x2ad) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa550;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x2ad;
                goto LAB_109c87f1c;
              }
              FUN_109cbe138(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
          }
          else if (iVar2 == 700) {
            if (iVar3 == 700) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa898;
              bVar4 = *(int *)(param_2 + 0x8c) == 700;
              goto LAB_109c87f1c;
            }
            FUN_109cbe1d0(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else if (iVar2 == 0x2c6) {
            if (iVar3 == 0x2c6) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa4f0;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2c6;
              goto LAB_109c87f1c;
            }
            FUN_109cbe268(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else {
            if (iVar2 != 0x2cb) goto LAB_109c88a58;
            if (iVar3 == 0x2cb) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa928;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2cb;
              goto LAB_109c87f1c;
            }
            FUN_109cbe300(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
        }
        else if (iVar2 < 0x2df) {
          if (iVar2 == 0x2d0) {
            if (iVar3 == 0x2d0) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa490;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2d0;
              goto LAB_109c87f1c;
            }
            FUN_109cbe398(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else {
            if (iVar2 != 0x2da) goto LAB_109c88a58;
            if (iVar3 == 0x2da) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132faa18;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2da;
              goto LAB_109c87f1c;
            }
            FUN_109cbe430(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
        }
        else if (iVar2 == 0x2df) {
          if (iVar3 == 0x2df) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fab38;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x2df;
LAB_109c88028:
            if (!bVar4) {
              ppuVar9 = ppuVar10;
            }
            if (((ulong)ppuVar9[1] & 1) != 0) {
              puVar5 = (ulong *)(*(long *)(param_1 + 0x80) + 8);
              goto LAB_109c88044;
            }
            goto LAB_109c88a58;
          }
          FUN_109cbe4c8(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else if (iVar2 == 0x2e4) {
          if (iVar3 == 0x2e4) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa9e8;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x2e4;
            goto LAB_109c88028;
          }
          FUN_109cbe560(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else {
          if (iVar2 != 0x2ee) goto LAB_109c88a58;
          if (iVar3 == 0x2ee) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa4d8;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x2ee;
            goto LAB_109c88028;
          }
          FUN_109cbe5f8(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
      }
      else if (iVar2 < 0x33b) {
        if (0x315 < iVar2) {
          if (iVar2 < 0x32f) {
            if (iVar2 == 0x316) {
              if (iVar3 == 0x316) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa8b0;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x316;
                goto LAB_109c88028;
              }
              FUN_109cbe988(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            if (iVar2 == 0x31b) {
              if (iVar3 != 0x31b) {
                FUN_109cbea20(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x31b) {
                ppuVar10 = &PTR_PTR_1132fa7f0;
              }
              func_0x000109c8ab88(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
          }
          else if (iVar2 == 0x32f) {
            if (iVar3 != 0x32f) {
              FUN_109cbeac0(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x32f) {
              ppuVar10 = &PTR_PTR_1132fa8c8;
            }
            func_0x000109c8abb0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x334) {
            if (iVar3 != 0x334) {
              FUN_109cbeb70(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x334) {
              ppuVar10 = &PTR_PTR_1132fa5f8;
            }
            func_0x000109c8abdc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x339) {
            if (iVar3 != 0x339) {
              FUN_109cbec20(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x339) {
              ppuVar10 = &PTR_PTR_1132fa748;
            }
            func_0x000109c8ac08(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          goto LAB_109c88a58;
        }
        if (iVar2 < 0x302) {
          if (iVar2 == 0x2f3) {
            if (iVar3 == 0x2f3) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa910;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2f3;
              goto LAB_109c88028;
            }
            FUN_109cbe690(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else {
            if (iVar2 != 0x2f8) goto LAB_109c88a58;
            if (iVar3 == 0x2f8) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa478;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x2f8;
              goto LAB_109c88028;
            }
            FUN_109cbe728(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
        }
        else if (iVar2 == 0x302) {
          if (iVar3 == 0x302) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132faa00;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x302;
            goto LAB_109c88028;
          }
          FUN_109cbe7c0(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else if (iVar2 == 0x307) {
          if (iVar3 == 0x307) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fab20;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x307;
            goto LAB_109c88028;
          }
          FUN_109cbe858(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else {
          if (iVar2 != 0x30c) goto LAB_109c88a58;
          if (iVar3 == 0x30c) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa9d0;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x30c;
            goto LAB_109c88028;
          }
          FUN_109cbe8f0(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
      }
      else if (iVar2 < 0x352) {
        if (iVar2 < 0x340) {
          if (iVar2 == 0x33b) {
            if (iVar3 != 0x33b) {
              FUN_109cbecd0(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x33b) {
              ppuVar10 = &PTR_PTR_1132fa760;
            }
            func_0x000109c8ac34(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x33e) {
            if (iVar3 != 0x33e) {
              FUN_109cbed80(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x33e) {
              ppuVar10 = &PTR_PTR_1132fa790;
            }
            func_0x000109c8ac60(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          goto LAB_109c88a58;
        }
        if (iVar2 == 0x340) {
          if (iVar3 == 0x340) {
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x340) {
              ppuVar10 = &PTR_PTR_1132fa7a8;
            }
            func_0x000109c8ac8c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            goto LAB_109c88a58;
          }
          FUN_109cbee30(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else if (iVar2 == 0x348) {
          if (iVar3 == 0x348) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa700;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x348;
            goto LAB_109c88028;
          }
          FUN_109cbeee0(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else {
          if (iVar2 != 0x34d) goto LAB_109c88a58;
          if (iVar3 == 0x34d) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa6e8;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x34d;
            goto LAB_109c88028;
          }
          func_0x000109cbef78(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
      }
      else if (iVar2 < 0x361) {
        if (iVar2 == 0x352) {
          if (iVar3 == 0x352) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa718;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x352;
            goto LAB_109c88028;
          }
          func_0x000109cbf010(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
        else {
          if (iVar2 != 0x357) goto LAB_109c88a58;
          if (iVar3 == 0x357) {
            ppuVar9 = *(undefined ***)(param_2 + 0x80);
            ppuVar10 = &PTR_PTR_1132fa730;
            bVar4 = *(int *)(param_2 + 0x8c) == 0x357;
            goto LAB_109c88028;
          }
          func_0x000109cbf0a8(uVar12,*(undefined8 *)(param_2 + 0x80));
        }
      }
      else if (iVar2 == 0x361) {
        if (iVar3 == 0x361) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa640;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x361;
          goto LAB_109c88028;
        }
        func_0x000109cbf140(uVar12,*(undefined8 *)(param_2 + 0x80));
      }
      else if (iVar2 == 0x366) {
        if (iVar3 == 0x366) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa670;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x366;
          goto LAB_109c88028;
        }
        func_0x000109cbf1d8(uVar12,*(undefined8 *)(param_2 + 0x80));
      }
      else {
        if (iVar2 != 0x36b) goto LAB_109c88a58;
        if (iVar3 == 0x36b) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa6a0;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x36b;
          goto LAB_109c88028;
        }
        func_0x000109cbf270(uVar12,*(undefined8 *)(param_2 + 0x80));
      }
LAB_109c88a54:
      *(ulong *)(param_1 + 0x80) = uVar12;
    }
  }
  else if (iVar2 < 0x46f) {
    if (iVar2 < 0x3d9) {
      if (iVar2 < 0x3a7) {
        if (iVar2 < 900) {
          if (iVar2 < 0x37a) {
            if (iVar2 == 0x370) {
              if (iVar3 == 0x370) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132faa48;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x370;
                goto LAB_109c88028;
              }
              func_0x000109cbf308(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
            else {
              if (iVar2 != 0x375) goto LAB_109c88a58;
              if (iVar3 == 0x375) {
                ppuVar9 = *(undefined ***)(param_2 + 0x80);
                ppuVar10 = &PTR_PTR_1132fa598;
                bVar4 = *(int *)(param_2 + 0x8c) == 0x375;
                goto LAB_109c88028;
              }
              func_0x000109cbf3a0(uVar12,*(undefined8 *)(param_2 + 0x80));
            }
          }
          else if (iVar2 == 0x37a) {
            if (iVar3 == 0x37a) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa8f8;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x37a;
              goto LAB_109c88028;
            }
            func_0x000109cbf438(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else {
            if (iVar2 != 0x37f) goto LAB_109c88a58;
            if (iVar3 == 0x37f) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa838;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x37f;
              goto LAB_109c88028;
            }
            func_0x000109cbf4d0(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
        }
        else {
          if (0x397 < iVar2) {
            if (iVar2 == 0x398) {
              if (iVar3 != 0x398) {
                func_0x000109cbf698(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x398) {
                ppuVar10 = &PTR_PTR_1132fafa8;
              }
              FUN_109c8acb8(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            else if (iVar2 == 0x39d) {
              if (iVar3 != 0x39d) {
                func_0x000109cbf71c(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x39d) {
                ppuVar10 = &PTR_PTR_1132fab70;
              }
              func_0x000109c8ad60(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            else if (iVar2 == 0x3a2) {
              if (iVar3 != 0x3a2) {
                func_0x000109cbf7c0(uVar12,*(undefined8 *)(param_2 + 0x80));
                goto LAB_109c88a54;
              }
              ppuVar10 = *(undefined ***)(param_2 + 0x80);
              if (*(int *)(param_2 + 0x8c) != 0x3a2) {
                ppuVar10 = &PTR_PTR_1132fad30;
              }
              func_0x000109c8ad88(*(undefined8 *)(param_1 + 0x80),ppuVar10);
            }
            goto LAB_109c88a58;
          }
          if (iVar2 == 900) {
            if (iVar3 == 900) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa628;
              bVar4 = *(int *)(param_2 + 0x8c) == 900;
              goto LAB_109c88028;
            }
            func_0x000109cbf568(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
          else {
            if (iVar2 != 0x389) goto LAB_109c88a58;
            if (iVar3 == 0x389) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa4a8;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x389;
              goto LAB_109c88028;
            }
            func_0x000109cbf600(uVar12,*(undefined8 *)(param_2 + 0x80));
          }
        }
        goto LAB_109c88a54;
      }
      if (iVar2 < 0x3ba) {
        if (iVar2 < 0x3b1) {
          if (iVar2 == 0x3a7) {
            if (iVar3 != 0x3a7) {
              func_0x000109cbf864(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x3a7) {
              ppuVar10 = &PTR_PTR_1132fabf0;
            }
            func_0x000109c8adb0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x3ac) {
            if (iVar3 == 0x3ac) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa808;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x3ac;
              goto LAB_109c88028;
            }
            func_0x000109cbf8ec(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
        }
        else if (iVar2 == 0x3b1) {
          if (iVar3 != 0x3b1) {
            func_0x000109cbf984(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3b1) {
            ppuVar10 = &PTR_PTR_1132fa520;
          }
          func_0x000109c8ade4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x3b6) {
          if (iVar3 != 0x3b6) {
            func_0x000109cbfa24(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3b6) {
            ppuVar10 = &PTR_PTR_1132fabb0;
          }
          func_0x000109c8ae0c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x3b8) {
          if (iVar3 != 0x3b8) {
            func_0x000109cbfac8(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3b8) {
            ppuVar10 = &PTR_PTR_1132fad50;
          }
          func_0x000109c8ae34(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 0x3c5) {
        if (iVar2 == 0x3ba) {
          if (iVar3 != 0x3ba) {
            func_0x000109cbfb6c(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3ba) {
            ppuVar10 = &PTR_PTR_1132fac10;
          }
          func_0x000109c8ae5c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x3c0) {
          if (iVar3 != 0x3c0) {
            func_0x000109cbfbf4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3c0) {
            ppuVar10 = &PTR_PTR_1132fb020;
          }
          FUN_109c8ae90(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x3c5) {
        if (iVar3 != 0x3c5) {
          func_0x000109cbfc78(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x3c5) {
          ppuVar10 = &PTR_PTR_1132faff8;
        }
        FUN_109c8af38(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x3cf) {
        if (iVar3 != 0x3cf) {
          func_0x000109cbfd04(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x3cf) {
          ppuVar10 = &PTR_PTR_1132fb8e8;
        }
        FUN_109c8af6c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x3d4) {
        if (iVar3 != 0x3d4) {
          func_0x000109cbfd94(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x3d4) {
          ppuVar10 = &PTR_PTR_1132fadb0;
        }
        FUN_109c8b02c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 < 0x42e) {
      if (iVar2 < 0x3fc) {
        if (iVar2 < 1000) {
          if (iVar2 == 0x3d9) {
            if (iVar3 != 0x3d9) {
              func_0x000109cbfe24(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x3d9) {
              ppuVar10 = &PTR_PTR_1132faf58;
            }
            func_0x000109c8b064(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x3e3) {
            if (iVar3 != 0x3e3) {
              func_0x000109cbfea8(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x3e3) {
              ppuVar10 = &PTR_PTR_1132fbf08;
            }
            func_0x000109c8b10c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 1000) {
          if (iVar3 != 1000) {
            func_0x000109cc0040(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 1000) {
            ppuVar10 = &PTR_PTR_1132fbe18;
          }
          func_0x000109c8b380(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x3ed) {
          if (iVar3 != 0x3ed) {
            func_0x000109cc01a0(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3ed) {
            ppuVar10 = &PTR_PTR_1132fb398;
          }
          func_0x000109c8b598(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x3f7) {
          if (iVar3 != 0x3f7) {
            func_0x000109cc0230(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3f7) {
            ppuVar10 = &PTR_PTR_1132faf80;
          }
          func_0x000109c8b5d8(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 0x410) {
        if (iVar2 == 0x3fc) {
          if (iVar3 != 0x3fc) {
            func_0x000109cc02c0(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x3fc) {
            ppuVar10 = &PTR_PTR_1132fae30;
          }
          func_0x000109c8b61c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x401) {
          if (iVar3 != 0x401) {
            func_0x000109cc0350(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x401) {
            ppuVar10 = &PTR_PTR_1132fae50;
          }
          func_0x000109c8b654(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x410) {
        if (iVar3 != 0x410) {
          func_0x000109cc03e0(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x410) {
          ppuVar10 = &PTR_PTR_1132fba28;
        }
        func_0x000109c8b68c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x415) {
        if (iVar3 != 0x415) {
          func_0x000109cc04a0(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x415) {
          ppuVar10 = &PTR_PTR_1132fbaa8;
        }
        func_0x000109c8b788(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x429) {
        if (iVar3 == 0x429) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa7d8;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x429;
          goto LAB_109c88028;
        }
        func_0x000109cc0560(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
    }
    else if (iVar2 < 0x451) {
      if (iVar2 < 0x43d) {
        if (iVar2 == 0x42e) {
          if (iVar3 != 0x42e) {
            func_0x000109cc05f8(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x42e) {
            ppuVar10 = &PTR_PTR_1132fb808;
          }
          func_0x000109c8b8b4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x438) {
          if (iVar3 != 0x438) {
            func_0x000109cc06a4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x438) {
            ppuVar10 = &PTR_PTR_1132fa868;
          }
          FUN_109c8b9b4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x43d) {
        if (iVar3 != 0x43d) {
          func_0x000109cc0754(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x43d) {
          ppuVar10 = &PTR_PTR_1132fb638;
        }
        FUN_109c8b9e0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x442) {
        if (iVar3 != 0x442) {
          func_0x000109cc07e4(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x442) {
          ppuVar10 = &PTR_PTR_1132fa880;
        }
        FUN_109c8ba98(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x44c) {
        if (iVar3 == 0x44c) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa988;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x44c;
          goto LAB_109c88028;
        }
        func_0x000109cc0894(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
    }
    else if (iVar2 < 0x460) {
      if (iVar2 == 0x451) {
        if (iVar3 != 0x451) {
          func_0x000109cc092c(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x451) {
          ppuVar10 = &PTR_PTR_1132fb2f0;
        }
        func_0x000109c8bac4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x456) {
        if (iVar3 == 0x456) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa9a0;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x456;
          goto LAB_109c88028;
        }
        func_0x000109cc09b0(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
    }
    else if (iVar2 == 0x460) {
      if (iVar3 != 0x460) {
        func_0x000109cc0a48(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x460) {
        ppuVar10 = &PTR_PTR_1132fb368;
      }
      func_0x000109c8bb6c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x465) {
      if (iVar3 != 0x465) {
        func_0x000109cc0ad8(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x465) {
        ppuVar10 = &PTR_PTR_1132fb2a0;
      }
      func_0x000109c8bc24(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x46a) {
      if (iVar3 != 0x46a) {
        func_0x000109cc0b5c(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x46a) {
        ppuVar10 = &PTR_PTR_1132fad70;
      }
      FUN_109c8bccc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
  }
  else if (iVar2 < 0x4fb) {
    if (iVar2 < 0x4b0) {
      if (iVar2 < 0x492) {
        if (iVar2 < 0x479) {
          if (iVar2 == 0x46f) {
            if (iVar3 == 0x46f) {
              ppuVar9 = *(undefined ***)(param_2 + 0x80);
              ppuVar10 = &PTR_PTR_1132fa568;
              bVar4 = *(int *)(param_2 + 0x8c) == 0x46f;
              goto LAB_109c87d14;
            }
            func_0x000109cc0c00(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          if (iVar2 == 0x474) {
            if (iVar3 != 0x474) {
              func_0x000109cc0c98(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x474) {
              ppuVar10 = &PTR_PTR_1132fb048;
            }
            func_0x000109c8bcf4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 0x479) {
          if (iVar3 != 0x479) {
            func_0x000109cc0d1c(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa580;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x479;
LAB_109c87d14:
          if (!bVar4) {
            ppuVar9 = ppuVar10;
          }
          if (((ulong)ppuVar9[1] & 1) != 0) {
            unaff_x30 = 0x109c87d34;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            puVar5 = (ulong *)(*(long *)(param_1 + 0x80) + 8);
            unaff_x19 = puVar11;
            unaff_x20 = param_2;
            unaff_x29 = puVar1;
            goto code_r0x00010b4d197c;
          }
        }
        else if (iVar2 == 0x47e) {
          if (iVar3 != 0x47e) {
            func_0x000109cc0db4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x47e) {
            ppuVar10 = &PTR_PTR_1132fb070;
          }
          func_0x000109c8bd9c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x483) {
          if (iVar3 != 0x483) {
            func_0x000109cc0e38(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x483) {
            ppuVar10 = &PTR_PTR_1132fb668;
          }
          func_0x000109c8be44(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 0x49c) {
        if (iVar2 == 0x492) {
          if (iVar3 != 0x492) {
            func_0x000109cc0ed0(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x492) {
            ppuVar10 = &PTR_PTR_1132fb0e8;
          }
          FUN_109c8bf0c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x497) {
          if (iVar3 != 0x497) {
            func_0x000109cc0f5c(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x497) {
            ppuVar10 = &PTR_PTR_1132fb968;
          }
          FUN_109c8bf54(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x49c) {
        if (iVar3 != 0x49c) {
          func_0x000109cc0fec(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x49c) {
          ppuVar10 = &PTR_PTR_1132fb110;
        }
        func_0x000109c8c028(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x4a6) {
        if (iVar3 != 0x4a6) {
          func_0x000109cc1078(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4a6) {
          ppuVar10 = &PTR_PTR_1132fb098;
        }
        func_0x000109c8c070(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x4ab) {
        if (iVar3 != 0x4ab) {
          func_0x000109cc1104(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4ab) {
          ppuVar10 = &PTR_PTR_1132fb928;
        }
        FUN_109c8c0b8(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 < 0x4e2) {
      if (iVar2 < 0x4bf) {
        if (iVar2 == 0x4b0) {
          if (iVar3 != 0x4b0) {
            func_0x000109cc1194(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x4b0) {
            ppuVar10 = &PTR_PTR_1132fb0c0;
          }
          func_0x000109c8c18c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x4ba) {
          if (iVar3 != 0x4ba) {
            func_0x000109cc1220(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x4ba) {
            ppuVar10 = &PTR_PTR_1132facb0;
          }
          func_0x000109c8c1d4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x4bf) {
        if (iVar3 != 0x4bf) {
          func_0x000109cc12a8(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4bf) {
          ppuVar10 = &PTR_PTR_1132fb728;
        }
        FUN_109c8c20c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x4c4) {
        if (iVar3 != 0x4c4) {
          func_0x000109cc1340(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4c4) {
          ppuVar10 = &PTR_PTR_1132facd0;
        }
        func_0x000109c8c2d0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x4ce) {
        if (iVar3 != 0x4ce) {
          func_0x000109cc13c8(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4ce) {
          ppuVar10 = &PTR_PTR_1132fb698;
        }
        func_0x000109c8c308(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 < 0x4ec) {
      if (iVar2 == 0x4e2) {
        if (iVar3 != 0x4e2) {
          func_0x000109cc1454(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4e2) {
          ppuVar10 = &PTR_PTR_1132fb5d8;
        }
        func_0x000109c8c36c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x4e7) {
        if (iVar3 != 0x4e7) {
          func_0x000109cc14e4(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x4e7) {
          ppuVar10 = &PTR_PTR_1132fb5a8;
        }
        func_0x000109c8c434(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 == 0x4ec) {
      if (iVar3 != 0x4ec) {
        func_0x000109cc1574(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x4ec) {
        ppuVar10 = &PTR_PTR_1132fb518;
      }
      func_0x000109c8c4fc(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x4f1) {
      if (iVar3 != 0x4f1) {
        func_0x000109cc1604(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x4f1) {
        ppuVar10 = &PTR_PTR_1132fb4b8;
      }
      func_0x000109c8c5c4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x4f6) {
      if (iVar3 != 0x4f6) {
        func_0x000109cc1694(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x4f6) {
        ppuVar10 = &PTR_PTR_1132fb458;
      }
      func_0x000109c8c68c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
  }
  else {
    if (0x545 < iVar2) {
      if (iVar2 < 0x5b5) {
        if (iVar2 < 0x5aa) {
          if (iVar2 == 0x546) {
            if (iVar3 != 0x546) {
              func_0x000109cc1cf8(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x546) {
              ppuVar10 = &PTR_PTR_1132fbb78;
            }
            FUN_109c8cbc0(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
          else if (iVar2 == 0x578) {
            if (iVar3 != 0x578) {
              func_0x000109cc1dc8(uVar12,*(undefined8 *)(param_2 + 0x80));
              goto LAB_109c88a54;
            }
            ppuVar10 = *(undefined ***)(param_2 + 0x80);
            if (*(int *)(param_2 + 0x8c) != 0x578) {
              ppuVar10 = &PTR_PTR_1132fb188;
            }
            func_0x000109c8cd00(*(undefined8 *)(param_1 + 0x80),ppuVar10);
          }
        }
        else if (iVar2 == 0x5aa) {
          if (iVar3 != 0x5aa) {
            func_0x000109cc1e58(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x5aa) {
            ppuVar10 = &PTR_PTR_1132fb608;
          }
          func_0x000109c8cd58(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x5af) {
          if (iVar3 != 0x5af) {
            func_0x000109cc1ee8(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x5af) {
            ppuVar10 = &PTR_PTR_1132fad90;
          }
          func_0x000109c8cdac(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x5b4) {
          if (iVar3 != 0x5b4) {
            func_0x000109cc1f78(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x5b4) {
            ppuVar10 = &PTR_PTR_1132fadf0;
          }
          func_0x000109c8cdf4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 < 0x5ba) {
        if (iVar2 == 0x5b5) {
          if (iVar3 != 0x5b5) {
            func_0x000109cc2004(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x5b5) {
            ppuVar10 = &PTR_PTR_1132fae10;
          }
          func_0x000109c8ce30(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x5b9) {
          if (iVar3 != 0x5b9) {
            func_0x000109cc2094(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x5b9) {
            ppuVar10 = &PTR_PTR_1132fbc08;
          }
          func_0x000109c8ce68(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x5ba) {
        if (iVar3 != 0x5ba) {
          func_0x000109cc2124(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x5ba) {
          ppuVar10 = &PTR_PTR_1132fa7c0;
        }
        func_0x000109c8cf3c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x5be) {
        if (iVar3 != 0x5be) {
          func_0x000109cc21c4(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x5be) {
          ppuVar10 = &PTR_PTR_1132fafd0;
        }
        func_0x000109c8cf64(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x5bf) {
        if (iVar3 != 0x5bf) {
          func_0x000109cc2250(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x5bf) {
          ppuVar10 = &PTR_PTR_1132fbf98;
        }
        FUN_109c8cf98(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      goto LAB_109c88a58;
    }
    if (iVar2 < 0x521) {
      if (iVar2 < 0x505) {
        if (iVar2 == 0x4fb) {
          if (iVar3 != 0x4fb) {
            func_0x000109cc1724(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x4fb) {
            ppuVar10 = &PTR_PTR_1132fb488;
          }
          func_0x000109c8c754(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
        else if (iVar2 == 0x500) {
          if (iVar3 != 0x500) {
            func_0x000109cc17b4(uVar12,*(undefined8 *)(param_2 + 0x80));
            goto LAB_109c88a54;
          }
          ppuVar10 = *(undefined ***)(param_2 + 0x80);
          if (*(int *)(param_2 + 0x8c) != 0x500) {
            ppuVar10 = &PTR_PTR_1132fb4e8;
          }
          func_0x000109c8c81c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
        }
      }
      else if (iVar2 == 0x505) {
        if (iVar3 != 0x505) {
          func_0x000109cc1844(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x505) {
          ppuVar10 = &PTR_PTR_1132fb548;
        }
        func_0x000109c8c8e4(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x50a) {
        if (iVar3 != 0x50a) {
          func_0x000109cc18d4(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x50a) {
          ppuVar10 = &PTR_PTR_1132fb428;
        }
        func_0x000109c8c9ac(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
      else if (iVar2 == 0x50f) {
        if (iVar3 != 0x50f) {
          func_0x000109cc1964(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x50f) {
          ppuVar10 = &PTR_PTR_1132fb578;
        }
        func_0x000109c8ca74(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 < 0x528) {
      if (iVar2 == 0x521) {
        if (iVar3 == 0x521) {
          ppuVar9 = *(undefined ***)(param_2 + 0x80);
          ppuVar10 = &PTR_PTR_1132fa448;
          bVar4 = *(int *)(param_2 + 0x8c) == 0x521;
          goto LAB_109c87d14;
        }
        func_0x000109cc19f4(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      if (iVar2 == 0x523) {
        if (iVar3 != 0x523) {
          func_0x000109cc1a8c(uVar12,*(undefined8 *)(param_2 + 0x80));
          goto LAB_109c88a54;
        }
        ppuVar10 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x8c) != 0x523) {
          ppuVar10 = &PTR_PTR_1132fb228;
        }
        func_0x000109c8cb3c(*(undefined8 *)(param_1 + 0x80),ppuVar10);
      }
    }
    else if (iVar2 == 0x528) {
      if (iVar3 != 0x528) {
        func_0x000109cc1b18(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x528) {
        ppuVar10 = &PTR_PTR_1132fad10;
      }
      func_0x000109c8cb70(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x52d) {
      if (iVar3 != 0x52d) {
        func_0x000109cc1bbc(uVar12,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109c88a54;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x8c) != 0x52d) {
        ppuVar10 = &PTR_PTR_1132fab50;
      }
      func_0x000109c8cb98(*(undefined8 *)(param_1 + 0x80),ppuVar10);
    }
    else if (iVar2 == 0x532) {
      if (iVar3 == 0x532) {
        ppuVar9 = *(undefined ***)(param_2 + 0x80);
        ppuVar10 = &PTR_PTR_1132fa460;
        bVar4 = *(int *)(param_2 + 0x8c) == 0x532;
        goto LAB_109c87d14;
      }
      func_0x000109cc1c60(uVar12,*(undefined8 *)(param_2 + 0x80));
      goto LAB_109c88a54;
    }
  }
LAB_109c88a58:
  puVar5 = puVar11;
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



/* Entry: 109c893dc; end: 109c894ab;  */

void FUN_109c893dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 109c894ac; end: 109c89767;  */

void FUN_109c894ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
      func_0x0001087675dc(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x20);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8);
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
      func_0x000109cc2330(uVar7,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar7;
    }
    else {
      FUN_109c8f8ac();
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



/* Entry: 109c89768; end: 109c89883;  */

void FUN_109c89768(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x0001087675dc(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
      do {
        *puVar6 = *puVar4;
        uVar8 = uVar8 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
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
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
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


