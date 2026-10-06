/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093565fc; end: 10935663b;  */

void FUN_1093565fc(long param_1,long param_2)

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



/* Entry: 10935663c; end: 109356693;  */

long FUN_10935663c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109356694; end: 1093566b7;  */

undefined ** FUN_109356694(void)

{
  return &PTR_DAT_110af28e8;
}



/* Entry: 1093566b8; end: 109356827;  */

long * FUN_1093566b8(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  plVar1 = plVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),plVar2);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar2 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar1 + (long)((int)plVar2 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar2;
          } while (plVar4 <= plVar2);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar3);
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



/* Entry: 109356828; end: 1093568b3;  */

ulong FUN_109356828(long param_1)

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
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 1093568b4; end: 10935690b;  */

long FUN_1093568b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10935690c; end: 10935692b;  */

undefined ** FUN_10935690c(void)

{
  return &PTR_DAT_110af2940;
}



/* Entry: 10935692c; end: 109356ab7;  */

long * FUN_10935692c(long param_1,long *param_2,long *param_3)

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
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar4 = (long *)*param_3;
    if (param_2 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      uVar2 = *(undefined1 *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar8 < (int)uVar3);
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



/* Entry: 109356ab8; end: 109356b17;  */

long FUN_109356ab8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 109356b18; end: 109356b6f;  */

long FUN_109356b18(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109356b70; end: 109356b8f;  */

undefined ** FUN_109356b70(void)

{
  return &PTR_DAT_110af2998;
}



/* Entry: 109356b90; end: 109356d1b;  */

long * FUN_109356b90(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0x15;
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



/* Entry: 109356d1c; end: 109356dbf;  */

long FUN_109356d1c(long param_1)

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



/* Entry: 109356dc0; end: 109356e17;  */

long FUN_109356dc0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109356e18; end: 109356e37;  */

undefined ** FUN_109356e18(void)

{
  return &PTR_DAT_110af29e8;
}



/* Entry: 109356e38; end: 10935702b;  */

long * FUN_109356e38(long param_1,long *param_2,long *param_3)

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
    *(undefined1 *)param_2 = 0x1d;
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



/* Entry: 10935702c; end: 1093570bf;  */

long FUN_10935702c(long param_1)

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



/* Entry: 1093570c0; end: 109357117;  */

long FUN_1093570c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109357118; end: 10935713b;  */

undefined ** FUN_109357118(void)

{
  return &PTR_DAT_110af2a40;
}



/* Entry: 10935713c; end: 109357347;  */

long * FUN_10935713c(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109357348; end: 10935742f;  */

ulong FUN_109357348(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
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



/* Entry: 109357430; end: 109357487;  */

long FUN_109357430(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109357488; end: 1093574af;  */

undefined ** FUN_109357488(void)

{
  return &PTR_DAT_110af2a90;
}



/* Entry: 1093574b0; end: 1093578cb;  */

byte * FUN_1093574b0(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x20;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    pbVar3 = param_3;
    func_0x0001088b96ec(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if (iVar9 != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar1 + ((int)pbVar3 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar3);
      iVar9 = *(int *)(param_1 + 0x24);
    }
    *pbVar3 = 0x35;
    *(int *)(pbVar3 + 1) = iVar9;
    pbVar3 = pbVar3 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar3) {
      do {
        if (param_3[0x38] == 1) {
          pbVar3 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar3 = pbVar1 + ((int)pbVar3 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar3);
      iVar9 = *(int *)(param_1 + 0x28);
    }
    *pbVar3 = 0x3d;
    *(int *)(pbVar3 + 1) = iVar9;
    pbVar3 = pbVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar2) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar7 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar7;
          _memcpy(pbVar3,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar7 = *(byte **)param_3;
          pbVar1 = pbVar3 + iVar9;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar3 + ((int)pbVar1 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar3 = pbVar1;
          } while (pbVar7 <= pbVar1);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar3);
        } while ((int)pbVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar3,lVar8,(long)(int)(uint)uStack_48);
      pbVar3 = pbVar3 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar3,lVar8,uStack_48 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar2;
    }
  }
  return pbVar3;
}



/* Entry: 1093578cc; end: 1093579bb;  */

long FUN_1093578cc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
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
  *(int *)(param_1 + 0x2c) = (int)lVar1;
  return lVar1;
}



/* Entry: 1093579bc; end: 1093579f3;  */

long FUN_1093579bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093579f4(param_1);
  return param_1;
}



/* Entry: 1093579f4; end: 109357b13;  */

void FUN_1093579f4(long param_1)

{
  long lVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109342244();
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac((long *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 109357b14; end: 109357b17;  */

long FUN_109357b14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_1093579f4(param_1);
  return param_1;
}



/* Entry: 109357b18; end: 109357b2b;  */

void FUN_109357b18(void)

{
  FUN_1093579bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109357b2c; end: 109357b37;  */

undefined ** FUN_109357b2c(void)

{
  return &PTR_DAT_110af2ae0;
}



/* Entry: 109357b38; end: 109357cbf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109357b38(long param_1)

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
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
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
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1093422a4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093566a0(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109356918(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109356b7c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000109356e24(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000109357124(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000109357494(*(undefined8 *)(param_1 + 0x80));
    }
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



/* Entry: 109357cc0; end: 10935869f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109357cc0(long param_1,long *param_2,long *param_3)

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
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar9;
      goto LAB_109357d08;
    }
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109357d08:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f56687f);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,1,puVar9,param_2);
      param_2 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar9;
      goto LAB_109357d58;
    }
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109357d58:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5668ac);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,2,puVar9,param_2);
      param_2 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_109357dd0;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109357dd0;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5668e9);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,param_2);
  param_2 = plVar2;
LAB_109357dd0:
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar2,param_3);
      iVar11 = iVar11 + 1;
      plVar2 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
  }
  plVar2 = param_2;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,5,uVar6,param_2);
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar4 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar4 = (long *)0x7;
    func_0x000107c303cc(7,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1c),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    plVar4 = (long *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x14),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar4 = (long *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x14),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar4 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x18),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar4 = (long *)0xb;
    func_0x000107c303cc(0xb,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x1c),plVar2,param_3);
    plVar2 = plVar4;
  }
  plVar4 = plVar2;
  if ((uVar8 >> 6 & 1) != 0) {
    plVar4 = (long *)0xc;
    func_0x000107c303cc(0xc,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x2c),plVar2,param_3);
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
    if (*param_3 - (long)plVar4 < (long)(int)uVar8) {
      lVar13 = (*param_3 - (long)plVar4) + 0x10;
      if ((int)lVar13 < (int)uVar8) {
        do {
          iVar12 = (int)lVar13;
          _memcpy(plVar4,lVar5,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar5 = lVar5 + iVar12;
          plVar7 = (long *)*param_3;
          plVar2 = (long *)((long)plVar4 + (long)iVar12);
          do {
            plVar4 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar4 = plVar2;
          } while (plVar7 <= plVar2);
          lVar13 = (long)plVar7 + (0x10 - (long)plVar4);
        } while ((int)lVar13 < (int)uVar8);
      }
      _memcpy(plVar4,lVar5,(long)(int)uVar8);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar4,lVar5,uVar10 & 0xffffffff);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar8);
    }
  }
  return plVar4;
}



/* Entry: 1093586a0; end: 1093586df;  */

void FUN_1093586a0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af2630;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1093586e0; end: 10935899f;  */

void FUN_1093586e0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2630;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1093589a0; end: 109358a27;  */

undefined8 * FUN_1093589a0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2680;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1093565fc();
  return puVar1;
}



/* Entry: 109358a28; end: 109358acb;  */

undefined8 * FUN_109358a28(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110af27c0;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109358acc; end: 109358b7b;  */

undefined8 * FUN_109358acc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af2720;
  puVar1[2] = 0;
  iVar2 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
  }
  *(int *)(puVar1 + 2) = iVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109358b7c; end: 109358c07;  */

undefined8 * FUN_109358b7c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2630;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x000109356d84();
  return puVar1;
}



/* Entry: 109358c08; end: 109358c8f;  */

undefined8 * FUN_109358c08(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af26d0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x000109357078();
  return puVar1;
}



/* Entry: 109358c90; end: 109358d1b;  */

undefined8 * FUN_109358c90(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2810;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  func_0x0001093573b8();
  return puVar1;
}



/* Entry: 109358d1c; end: 109358d63;  */

long FUN_109358d1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 109358d64; end: 109358d67;  */

long FUN_109358d64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 109358d68; end: 109358d7b;  */

void FUN_109358d68(void)

{
  FUN_109358d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109358d7c; end: 109358d87;  */

undefined ** FUN_109358d7c(void)

{
  return &PTR_DAT_110af2d28;
}



/* Entry: 109358d88; end: 109358dd3;  */

void FUN_109358d88(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    func_0x000107c30258(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
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



/* Entry: 109358dd4; end: 109358f5f;  */

long * FUN_109358dd4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x10),param_2);
  }
  else {
    plVar1 = param_2;
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar8 + 0x17);
      puVar2 = puVar8;
      if (lVar3 < 0) {
        lVar3 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
      }
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f56691f);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,1,puVar8,param_2);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_48 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar1 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar1,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar1 + (long)iVar10);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar1);
        } while ((int)lVar3 < (int)uVar7);
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



/* Entry: 109358f60; end: 109358ffb;  */

ulong FUN_109358f60(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar1 = *(byte *)(uVar2 + 0x17);
    uVar2 = *(ulong *)(uVar2 + 8);
    if (-1 < (char)bVar1) {
      uVar2 = (ulong)bVar1;
    }
    uVar2 = uVar2 + ((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6) + 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 109358ffc; end: 1093590e3;  */

void FUN_109358ffc(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 == 1) {
        func_0x000107c30258(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
    else if (iVar2 == 1) {
      if (iVar3 != 1) {
        *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 1) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x10,puVar1,uVar4);
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



/* Entry: 1093590e4; end: 109359147;  */

long FUN_1093590e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
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



/* Entry: 109359148; end: 10935914b;  */

long FUN_109359148(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
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



/* Entry: 10935914c; end: 10935915f;  */

void FUN_10935914c(void)

{
  FUN_1093590e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109359160; end: 10935918b;  */

undefined ** FUN_109359160(void)

{
  return &PTR_DAT_110af2d60;
}



/* Entry: 10935918c; end: 1093597a7;  */

byte * FUN_10935918c(long param_1,byte *param_2,long *param_3)

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
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x30);
  if (iVar16 != 0) {
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
      iVar16 = *(int *)(param_1 + 0x30);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar16;
    param_2 = param_2 + 5;
  }
  iVar16 = *(int *)(param_1 + 0x34);
  if (iVar16 != 0) {
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
      iVar16 = *(int *)(param_1 + 0x34);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar16;
    param_2 = param_2 + 5;
  }
  iVar16 = *(int *)(param_1 + 0x10);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x10);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x1a;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar15,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar10 = param_2 + iVar16;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_10935954c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10935952c:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_10935952c;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10935954c;
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
      uVar15 = (ulong)(int)uVar12;
      uVar4 = uVar15;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar15;
  }
  iVar16 = *(int *)(param_1 + 0x20);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x20);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x22;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x28);
    uVar15 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar15,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar10 = param_2 + iVar16;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109359660:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109359640:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109359640;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109359660;
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
      uVar15 = (ulong)(int)uVar12;
      uVar4 = uVar15;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar15;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
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
      bVar2 = *(byte *)(param_1 + 0x38);
    }
    *param_2 = 0x28;
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
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar14,(long)iVar16);
          uVar12 = (int)uVar13 - iVar16;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar11 = param_2 + iVar16;
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



/* Entry: 1093597a8; end: 109359847;  */

long FUN_1093597a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar3 = 0;
  if (uVar2 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar4 + ((ulong)uVar2 + (ulong)uVar1) * 4 + lVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar3 = lVar3 + 5;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x38) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x3c) = (int)lVar3;
  return lVar3;
}



/* Entry: 109359848; end: 10935997b;  */

void FUN_109359848(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
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



/* Entry: 10935997c; end: 1093599cb;  */

void FUN_10935997c(long param_1,long param_2)

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



/* Entry: 1093599cc; end: 109359a23;  */

long FUN_1093599cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109359a24; end: 109359a43;  */

undefined ** FUN_109359a24(void)

{
  return &PTR_DAT_110af2da0;
}



/* Entry: 109359a44; end: 109359c87;  */

byte * FUN_109359a44(long param_1,byte *param_2,byte *param_3)

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
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
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
      iVar9 = *(int *)(param_1 + 0x18);
    }
    *pbVar7 = 0x1d;
    *(int *)(pbVar7 + 1) = iVar9;
    pbVar7 = pbVar7 + 5;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
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
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x20;
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



/* Entry: 109359c88; end: 109359d1f;  */

ulong FUN_109359c88(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109359d20; end: 109359eab;  */

undefined8 * FUN_109359d20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af2ce8;
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
  puVar4 = (ulong *)(param_3 + 0x48);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[9] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x50);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[10] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x58);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[0xb] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010935ab6c(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10935abb0(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10935ac7c(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x78);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_3 + 0x80);
  param_1[0xf] = uVar3;
  return param_1;
}



/* Entry: 109359eac; end: 109359ee3;  */

long FUN_109359eac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109359ee4(param_1);
  return param_1;
}



/* Entry: 109359ee4; end: 109359f63;  */

long * FUN_109359ee4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_109351198();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_1093590e4();
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  FUN_10935a9d8(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 109359f64; end: 109359f67;  */

long FUN_109359f64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109359ee4(param_1);
  return param_1;
}



/* Entry: 109359f68; end: 109359f7b;  */

void FUN_109359f68(void)

{
  FUN_109359eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109359f7c; end: 109359f87;  */

undefined ** FUN_109359f7c(void)

{
  return &PTR_DAT_110af2dd8;
}



/* Entry: 109359f88; end: 10935a0bb;  */

void FUN_109359f88(long param_1)

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
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
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
  if ((*(ulong *)(param_1 + 0x50) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10935122c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010935916c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109359a30(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10935a0bc; end: 10935a7bf;  */

byte * FUN_10935a0bc(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar12[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar12;
      goto LAB_10935a104;
    }
  }
  else {
    puVar3 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) != '\0') {
LAB_10935a104:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f566935);
      pbVar4 = param_3;
      func_0x000107c280a0(param_3,1,puVar12,param_2);
      param_2 = pbVar4;
    }
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar4 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar4,param_3);
      iVar13 = iVar13 + 1;
      pbVar4 = param_2;
    } while (iVar14 != iVar13);
  }
  iVar14 = *(int *)(param_1 + 0x38);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar4 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar13 * 8 + 7);
      }
      param_2 = (byte *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar4,param_3);
      iVar13 = iVar13 + 1;
      pbVar4 = param_2;
    } while (iVar14 != iVar13);
  }
  uVar7 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar7 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
  }
  pbVar4 = param_2;
  if (lVar5 != 0) {
    pbVar4 = param_3;
    func_0x000107c280a0(param_3,9,uVar7,param_2);
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  pbVar2 = pbVar4;
  if ((uVar11 & 1) != 0) {
    pbVar2 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x18),pbVar4,param_3);
  }
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar12[1];
    if (lVar5 == 0) goto LAB_10935a264;
    puVar3 = (undefined8 *)*puVar12;
  }
  else {
    puVar3 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) == '\0') goto LAB_10935a264;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f566955);
  pbVar4 = param_3;
  func_0x000107c280a0(param_3,0xb,puVar12,pbVar2);
  pbVar2 = pbVar4;
LAB_10935a264:
  pbVar4 = pbVar2;
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar4 = (byte *)0xc;
    func_0x000107c303cc(0xc,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x3c),pbVar2,param_3);
  }
  pbVar2 = pbVar4;
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar2 = (byte *)0xd;
    func_0x000107c303cc(0xd,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20),pbVar4,param_3);
  }
  uVar11 = *(uint *)(param_1 + 0x78);
  if (uVar11 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if (param_3[0x38] == 1) {
          pbVar2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar2 = pbVar10 + ((int)pbVar2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar2);
      uVar11 = *(uint *)(param_1 + 0x78);
    }
    pbVar10 = pbVar2 + 1;
    *pbVar2 = 0x70;
    uVar8 = (ulong)(int)uVar11;
    uVar7 = uVar8;
    pbVar4 = pbVar10;
    if (0x7f < uVar11) {
      do {
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar8 = uVar7 >> 7;
        uVar9 = uVar7 >> 0xe;
        uVar7 = uVar8;
        pbVar4 = pbVar10;
      } while (uVar9 != 0);
    }
    pbVar2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  uVar11 = *(uint *)(param_1 + 0x7c);
  if (uVar11 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if (param_3[0x38] == 1) {
          pbVar2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar2 = pbVar10 + ((int)pbVar2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar2);
      uVar11 = *(uint *)(param_1 + 0x7c);
    }
    pbVar10 = pbVar2 + 1;
    *pbVar2 = 0x78;
    uVar8 = (ulong)(int)uVar11;
    uVar7 = uVar8;
    pbVar4 = pbVar10;
    if (0x7f < uVar11) {
      do {
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar8 = uVar7 >> 7;
        uVar9 = uVar7 >> 0xe;
        uVar7 = uVar8;
        pbVar4 = pbVar10;
      } while (uVar9 != 0);
    }
    pbVar2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    pbVar4 = *(byte **)param_3;
    if (pbVar2 < pbVar4) {
      bVar6 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar2 = pbVar10 + ((int)pbVar2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar2);
      bVar6 = *(byte *)(param_1 + 0x80);
    }
    pbVar2[0] = 0x80;
    pbVar2[1] = 1;
    pbVar2[2] = bVar6;
    pbVar2 = pbVar2 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar8 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    uVar11 = (uint)uVar8;
    if (*(long *)param_3 - (long)pbVar2 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar2) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar2,lVar5,(long)iVar14);
          uVar11 = (int)uVar8 - iVar14;
          uVar8 = (ulong)uVar11;
          lVar5 = lVar5 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar10 = pbVar2 + iVar14;
          do {
            pbVar2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar2 + ((int)pbVar10 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar2 = pbVar10;
          } while (pbVar4 <= pbVar10);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar2);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar2,lVar5,(long)(int)uVar11);
      pbVar2 = pbVar2 + (int)uVar11;
    }
    else {
      _memcpy(pbVar2,lVar5,uVar8 & 0xffffffff);
      pbVar2 = pbVar2 + (int)uVar11;
    }
  }
  return pbVar2;
}



/* Entry: 10935a7c0; end: 10935a7c3;  */

void FUN_10935a7c0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010935ab6c(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109351460();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        FUN_10935abb0(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109359848();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        FUN_10935ac7c(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar5;
      }
      else {
        FUN_10935997c();
      }
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 1;
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



/* Entry: 10935a7c4; end: 10935a9b7;  */

void FUN_10935a7c4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010935ab6c(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109351460();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        FUN_10935abb0(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109359848();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        FUN_10935ac7c(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar5;
      }
      else {
        FUN_10935997c();
      }
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 1;
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



/* Entry: 10935a9b8; end: 10935a9d7;  */

void FUN_10935a9b8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af2bf8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10935a9d8; end: 10935aa0b;  */

long * FUN_10935a9d8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10935aa0c; end: 10935abaf;  */

void FUN_10935aa0c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2bf8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10935abb0; end: 10935ac7b;  */

undefined8 * FUN_10935abb0(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110af2c98;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1093118fc(puVar1 + 2,param_1,param_2 + 0x10);
  FUN_1093118fc(puVar1 + 4,param_1,param_2 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_2 + 0x38);
  puVar1[6] = uVar2;
  return puVar1;
}



/* Entry: 10935ac7c; end: 10935ad07;  */

undefined8 * FUN_10935ac7c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2c48;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_10935997c();
  return puVar1;
}



/* Entry: 10935ad08; end: 10935ad43;  */

long FUN_10935ad08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ad44; end: 10935ad47;  */

long FUN_10935ad44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10935ad48; end: 10935ad5b;  */

void FUN_10935ad48(void)

{
  FUN_10935ad08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935ad5c; end: 10935ad67;  */

undefined ** FUN_10935ad5c(void)

{
  return &PTR_DAT_110af2f10;
}



/* Entry: 10935ad68; end: 10935adc3;  */

void FUN_10935ad68(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x00010598fd84(param_1 + 0x28);
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



/* Entry: 10935adc4; end: 10935b093;  */

long * FUN_10935adc4(long param_1,long *param_2,long *param_3)

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
  int iVar10;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar11;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar13 = 8;
    plVar7 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar9 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f566975);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar9[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar7) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,puVar9,plVar7);
      }
      else {
        *(undefined1 *)plVar7 = 10;
        *(char *)((long)plVar7 + 1) = (char)lVar4;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy((undefined1 *)((long)plVar7 + 2),puVar9,lVar4);
        param_2 = (long *)((undefined1 *)((long)plVar7 + 2) + lVar4);
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      plVar7 = param_2;
    } while (uVar12 != 0);
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    lVar13 = 8;
    plVar7 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar9 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5669ba);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar9[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar7) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar9,plVar7);
      }
      else {
        *(undefined1 *)plVar7 = 0x12;
        *(char *)((long)plVar7 + 1) = (char)lVar4;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy((long)plVar7 + 2,puVar9,lVar4);
        param_2 = (long *)((long)plVar7 + 2 + lVar4);
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      plVar7 = param_2;
    } while (uVar12 != 0);
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
    uVar8 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar13,(long)iVar10);
          uVar8 = (int)uVar5 - iVar10;
          uVar5 = (ulong)uVar8;
          lVar13 = lVar13 + iVar10;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar3 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar7;
          } while (plVar6 <= plVar7);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar13,uVar5 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 10935b094; end: 10935b193;  */

long FUN_10935b094(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  uVar8 = uVar4;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)(uVar7 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar2 = puVar9;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar1 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      uVar8 = uVar1 + uVar8 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x30);
  lVar5 = uVar8 + uVar4;
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    uVar8 = *(ulong *)(param_1 + 0x28);
    puVar9 = (ulong *)(uVar8 + 7);
    do {
      puVar2 = (ulong *)(param_1 + 0x28);
      if ((uVar8 & 1) != 0) {
        puVar2 = puVar9;
      }
      bVar3 = *(byte *)(*puVar2 + 0x17);
      uVar7 = *(ulong *)(*puVar2 + 8);
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
      }
      lVar5 = uVar7 + lVar5 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar8 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  return lVar5;
}



/* Entry: 10935b194; end: 10935b2b7;  */

void FUN_10935b194(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303bc(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10935b2b8; end: 10935b2bb;  */

long FUN_10935b2b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10936295c();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x00010935b1fc(param_1);
  }
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10935b2bc; end: 10935b2cf;  */

void FUN_10935b2bc(void)

{
  func_0x00010935b254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935b2d0; end: 10935b2db;  */

undefined ** FUN_10935b2d0(void)

{
  return &PTR_DAT_110af2f70;
}



/* Entry: 10935b2dc; end: 10935b3a3;  */

void FUN_10935b2dc(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
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
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001093629c8(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  func_0x00010935b1fc(param_1);
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



/* Entry: 10935b3a4; end: 10935b897;  */

byte * FUN_10935b3a4(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  
  iVar14 = *(int *)(param_1 + 0x48);
  if (iVar14 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= param_2);
      iVar14 = *(int *)(param_1 + 0x48);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar14;
    param_2 = param_2 + 5;
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar13 = 8;
    pbVar4 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar11 = (undefined8 *)*puVar1;
      lVar2 = (long)*(char *)((long)puVar11 + 0x17);
      puVar10 = puVar11;
      if (lVar2 < 0) {
        lVar2 = puVar11[1];
        puVar10 = (undefined8 *)*puVar11;
      }
      func_0x000107c303d4(puVar10,lVar2,1,&UNK_10f566a01);
      lVar2 = (long)*(char *)((long)puVar11 + 0x17);
      if (((lVar2 < 0) && (lVar2 = puVar11[1], 0x7f < lVar2)) ||
         ((*(long *)param_3 - (long)pbVar4) + 0xe < lVar2)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar11,pbVar4);
      }
      else {
        *pbVar4 = 0x12;
        pbVar4[1] = (byte)lVar2;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar11 = (undefined8 *)*puVar11;
        }
        _memcpy(pbVar4 + 2,puVar11,lVar2);
        param_2 = pbVar4 + 2 + lVar2;
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      pbVar4 = param_2;
    } while (uVar12 != 0);
  }
  pbVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2c),param_2,param_3);
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar13 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar13 < 0) {
    lVar13 = puVar10[1];
    if (lVar13 == 0) goto LAB_10935b544;
    puVar11 = (undefined8 *)*puVar10;
  }
  else {
    puVar11 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10935b544;
  }
  func_0x000107c303d4(puVar11,lVar13,1,&UNK_10f566a29);
  pbVar8 = param_3;
  func_0x000107c280a0(param_3,4,puVar10,pbVar4);
  pbVar4 = pbVar8;
LAB_10935b544:
  uVar12 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar13 = (long)*(char *)(uVar12 + 0x17);
  if (lVar13 < 0) {
    lVar13 = *(long *)(uVar12 + 8);
  }
  pbVar8 = pbVar4;
  if (lVar13 != 0) {
    pbVar8 = param_3;
    func_0x000107c280a0(param_3,5,uVar12,pbVar4);
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    pbVar4 = *(byte **)param_3;
    if (pbVar8 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      bVar3 = *(byte *)(param_1 + 0x50);
    }
    *pbVar8 = 0x30;
    pbVar8[1] = bVar3;
    pbVar8 = pbVar8 + 2;
  }
  uVar9 = *(uint *)(param_1 + 0x4c);
  if (uVar9 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      uVar9 = *(uint *)(param_1 + 0x4c);
    }
    pbVar7 = pbVar8 + 1;
    *pbVar8 = 0x38;
    uVar5 = (ulong)(int)uVar9;
    uVar12 = uVar5;
    pbVar4 = pbVar7;
    if (0x7f < uVar9) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar12 | 0x80;
        uVar5 = uVar12 >> 7;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar5;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  if (*(char *)(param_1 + 0x51) == '\x01') {
    pbVar4 = *(byte **)param_3;
    if (pbVar8 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      bVar3 = *(byte *)(param_1 + 0x51);
    }
    *pbVar8 = 0x40;
    pbVar8[1] = bVar3;
    pbVar8 = pbVar8 + 2;
  }
  uVar9 = *(uint *)(param_1 + 0x54);
  if (uVar9 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      uVar9 = *(uint *)(param_1 + 0x54);
    }
    pbVar7 = pbVar8 + 1;
    *pbVar8 = 0x48;
    uVar5 = (ulong)(int)uVar9;
    uVar12 = uVar5;
    pbVar4 = pbVar7;
    if (0x7f < uVar9) {
      do {
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)uVar12 | 0x80;
        uVar5 = uVar12 >> 7;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar5;
        pbVar4 = pbVar7;
      } while (uVar6 != 0);
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  pbVar4 = pbVar8;
  if (*(int *)(param_1 + 0x60) == 10) {
    pbVar4 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x40),pbVar8,param_3);
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
    if (*(long *)param_3 - (long)pbVar4 < (long)(int)uVar9) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar8 < (int)uVar9) {
        do {
          iVar14 = (int)pbVar8;
          _memcpy(pbVar4,lVar13,(long)iVar14);
          uVar9 = (int)uVar5 - iVar14;
          uVar5 = (ulong)uVar9;
          lVar13 = lVar13 + iVar14;
          pbVar8 = *(byte **)param_3;
          pbVar7 = pbVar4 + iVar14;
          do {
            pbVar4 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar4 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar4 + ((int)pbVar7 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar4 = pbVar7;
          } while (pbVar8 <= pbVar7);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar4);
        } while ((int)pbVar8 < (int)uVar9);
      }
      _memcpy(pbVar4,lVar13,(long)(int)uVar9);
      pbVar4 = pbVar4 + (int)uVar9;
    }
    else {
      _memcpy(pbVar4,lVar13,uVar5 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar9;
    }
  }
  return pbVar4;
}



/* Entry: 10935b898; end: 10935baa3;  */

long FUN_10935b898(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x20);
  uVar7 = uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    puVar9 = (ulong *)(uVar8 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar7 = uVar2 + uVar7 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  lVar4 = lVar6;
  if (lVar6 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar4 = lVar6;
    }
    uVar7 = uVar7 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  lVar4 = lVar6;
  if (lVar6 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar4 = lVar6;
    }
    uVar7 = uVar7 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    FUN_109362db8();
    uVar7 = uVar7 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar7 = uVar7 + 5;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar7 = uVar7 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = uVar7 + (ulong)*(byte *)(param_1 + 0x50) * 2 + (ulong)*(byte *)(param_1 + 0x51) * 2;
  if (*(int *)(param_1 + 0x54) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x60) == 10) {
    lVar6 = *(long *)(param_1 + 0x58);
    FUN_10935b094();
    lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    lVar4 = lVar6 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10935baa4; end: 10935bc5f;  */

void FUN_10935baa4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  uVar3 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar3,uVar4);
  }
  uVar3 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar3 = uVar6;
      func_0x00010935bd28(uVar6,*(undefined8 *)(param_2 + 0x40));
      *(ulong *)(param_1 + 0x40) = uVar3;
    }
    else {
      FUN_109362ea0();
    }
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x60);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x60) == iVar2) {
      if (iVar2 == 10) {
        FUN_10935b194(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
      }
    }
    else {
      if (*(int *)(param_1 + 0x60) != 0) {
        func_0x00010935b1fc(param_1);
      }
      *(int *)(param_1 + 0x60) = iVar2;
      if (iVar2 == 10) {
        FUN_10935bd6c(uVar6,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar6;
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



/* Entry: 10935bc60; end: 10935bc6f;  */

void FUN_10935bc60(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110af2e80;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10935bc70; end: 10935bd6b;  */

void FUN_10935bc70(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2e80;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10935bd6c; end: 10935be2f;  */

undefined8 * FUN_10935bd6c(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af2e80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(puVar1 + 2,param_2 + 0x10);
  }
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303bc(puVar1 + 5,param_2 + 0x28);
  }
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 10935be30; end: 10935be77;  */

long FUN_10935be30(long param_1)

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



/* Entry: 10935be78; end: 10935be7b;  */

long FUN_10935be78(long param_1)

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



/* Entry: 10935be7c; end: 10935be8f;  */

void FUN_10935be7c(void)

{
  FUN_10935be30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935be90; end: 10935beaf;  */

undefined ** FUN_10935be90(void)

{
  return &PTR_DAT_110af3210;
}



/* Entry: 10935beb0; end: 10935c1bb;  */

byte * FUN_10935beb0(long param_1,byte *param_2,long *param_3)

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
LAB_10935c0a8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10935c088:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_10935c088;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_10935c0a8;
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



/* Entry: 10935c1bc; end: 10935c213;  */

long FUN_10935c1bc(long param_1)

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



/* Entry: 10935c214; end: 10935c2bb;  */

void FUN_10935c214(long param_1,long param_2)

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


