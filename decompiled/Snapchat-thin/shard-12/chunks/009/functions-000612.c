/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c7589c; end: 109c7589f;  */

void FUN_109c7589c(long param_1,long param_2)

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
        func_0x000109c75964(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x000109c75568(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109c75dd4(uVar2,*(undefined8 *)(param_2 + 0x10));
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



/* Entry: 109c758a0; end: 109c75a37;  */

void FUN_109c758a0(long param_1,long param_2)

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
        func_0x000109c75964(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x000109c75568(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109c75dd4(uVar2,*(undefined8 *)(param_2 + 0x10));
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



/* Entry: 109c75a38; end: 109c75a83;  */

long FUN_109c75a38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109cc5914();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc5914();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c75a84; end: 109c75a97;  */

void FUN_109c75a84(void)

{
  FUN_109c75a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c75a98; end: 109c75aa3;  */

undefined ** FUN_109c75a98(void)

{
  return &PTR_DAT_110b30b78;
}



/* Entry: 109c75aa4; end: 109c75aff;  */

void FUN_109c75aa4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109cc596c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109cc596c(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 109c75b00; end: 109c75c6b;  */

long * FUN_109c75b00(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),plVar1,param_3);
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



/* Entry: 109c75c6c; end: 109c75d2b;  */

long FUN_109c75c6c(long param_1)

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
      func_0x000109cc5b1c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x000109cc5b1c();
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



/* Entry: 109c75d2c; end: 109c75d3f;  */

void FUN_109c75d2c(long param_1,long param_2)

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
        FUN_109c75e84(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109cc5b98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109c75e84(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x000109cc5b98();
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



/* Entry: 109c75d40; end: 109c75dd3;  */

void FUN_109c75d40(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b30aa0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 109c75dd4; end: 109c75e83;  */

undefined8 * FUN_109c75dd4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b30aa0;
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
    FUN_109c75e84(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109c75e84(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 109c75e84; end: 109c75f03;  */

undefined8 * FUN_109c75e84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110b3a9b0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar3 = (ulong *)(param_2 + 0x10);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[2] = puVar2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 109c75f04; end: 109c75f07;  */

long FUN_109c75f04(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x28);
  FUN_109c79d34(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c75f08; end: 109c75f1b;  */

void FUN_109c75f08(void)

{
  func_0x000109c75ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c75f1c; end: 109c75f27;  */

undefined ** FUN_109c75f1c(void)

{
  return &PTR_DAT_110b30e70;
}



/* Entry: 109c75f28; end: 109c75f83;  */

void FUN_109c75f28(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
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



/* Entry: 109c75f84; end: 109c761c7;  */

long * FUN_109c75f84(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar14;
  undefined1 *puVar13;
  
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 != 0) {
    iVar10 = 0;
    plVar8 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar10 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar8,param_3);
      iVar10 = iVar10 + 1;
      plVar8 = param_2;
    } while (iVar12 != iVar10);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    lVar14 = 8;
    plVar8 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar14 + -1);
      }
      puVar11 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar11 + 0x17);
      puVar2 = puVar11;
      if (lVar4 < 0) {
        lVar4 = puVar11[1];
        puVar2 = (undefined8 *)*puVar11;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a67c1);
      lVar4 = (long)*(char *)((long)puVar11 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar11[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar8) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,puVar11,plVar8);
      }
      else {
        *(undefined1 *)plVar8 = 0x12;
        *(char *)((long)plVar8 + 1) = (char)lVar4;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar11 = (undefined8 *)*puVar11;
        }
        _memcpy((undefined1 *)((long)plVar8 + 2),puVar11,lVar4);
        param_2 = (long *)((undefined1 *)((long)plVar8 + 2) + lVar4);
      }
      lVar14 = lVar14 + 8;
      uVar5 = uVar5 - 1;
      plVar8 = param_2;
    } while (uVar5 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar14 = *(long *)(uVar5 + 8);
      uVar6 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar14 = uVar5 + 8;
    }
    uVar9 = (uint)uVar6;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      puVar13 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar13 < (int)uVar9) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(param_2,lVar14,(long)iVar12);
          uVar9 = (int)uVar6 - iVar12;
          uVar6 = (ulong)uVar9;
          lVar14 = lVar14 + iVar12;
          plVar7 = (long *)*param_3;
          plVar8 = (long *)((long)param_2 + (long)iVar12);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar8 = (long *)((long)plVar3 + (long)((int)plVar8 - (int)plVar7));
            plVar7 = (long *)*param_3;
            param_2 = plVar8;
          } while (plVar7 <= plVar8);
          puVar13 = (undefined1 *)((long)plVar7 + (0x10 - (long)param_2));
        } while ((int)puVar13 < (int)uVar9);
      }
      _memcpy(param_2,lVar14,(long)(int)uVar9);
      param_2 = (long *)((long)param_2 + (long)(int)uVar9);
    }
    else {
      _memcpy(param_2,lVar14,uVar6 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar9);
    }
  }
  return param_2;
}



/* Entry: 109c761c8; end: 109c762cf;  */

void FUN_109c761c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar8 = (long)*(int *)(param_1 + 0x18);
  puVar7 = (ulong *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    puVar7 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = lVar8 << 3;
    do {
      uVar5 = *puVar7;
      FUN_109c78e44();
      lVar8 = uVar5 + lVar8 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
      lVar9 = lVar9 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  lVar8 = lVar8 + uVar5;
  iVar4 = (int)lVar8;
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    uVar6 = *(ulong *)(param_1 + 0x28);
    puVar7 = (ulong *)(uVar6 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar6 & 1) != 0) {
        puVar1 = puVar7;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      lVar8 = uVar2 + lVar8 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      iVar4 = (int)lVar8;
      puVar7 = puVar7 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar8 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar5 + 0x10);
    }
    iVar4 = (int)lVar8 + iVar4;
  }
  *(int *)(param_1 + 0x40) = iVar4;
  return;
}



/* Entry: 109c762d0; end: 109c762d3;  */

void FUN_109c762d0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c762d4; end: 109c76377;  */

void FUN_109c762d4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c76378; end: 109c7637b;  */

long FUN_109c76378(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c75ec8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c7637c; end: 109c7638f;  */

void FUN_109c7637c(void)

{
  func_0x000109c7633c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c76390; end: 109c7639b;  */

undefined ** FUN_109c76390(void)

{
  return &PTR_DAT_110b30eb0;
}



/* Entry: 109c7639c; end: 109c763e3;  */

void FUN_109c7639c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c75f28(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109c763e4; end: 109c7652f;  */

long * FUN_109c763e4(long param_1,long *param_2,long *param_3)

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
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
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



/* Entry: 109c76530; end: 109c765a3;  */

void FUN_109c76530(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109c761c8();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
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



/* Entry: 109c765a4; end: 109c765a7;  */

void FUN_109c765a4(long param_1,long param_2)

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
      FUN_109c7a054(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c762d4(*(long *)(param_1 + 0x18));
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



/* Entry: 109c765a8; end: 109c7663f;  */

void FUN_109c765a8(long param_1,long param_2)

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
      FUN_109c7a054(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c762d4(*(long *)(param_1 + 0x18));
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



/* Entry: 109c76640; end: 109c7667b;  */

long FUN_109c76640(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c75ec8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c7667c; end: 109c7667f;  */

long FUN_109c7667c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c75ec8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c76680; end: 109c76693;  */

void FUN_109c76680(void)

{
  FUN_109c76640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c76694; end: 109c7669f;  */

undefined ** FUN_109c76694(void)

{
  return &PTR_DAT_110b30ef8;
}



/* Entry: 109c766a0; end: 109c766e7;  */

void FUN_109c766a0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c75f28(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109c766e8; end: 109c76833;  */

long * FUN_109c766e8(long param_1,long *param_2,long *param_3)

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
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
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



/* Entry: 109c76834; end: 109c768a7;  */

void FUN_109c76834(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109c761c8();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
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



/* Entry: 109c768a8; end: 109c768ab;  */

void FUN_109c768a8(long param_1,long param_2)

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
      FUN_109c7a054(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c762d4(*(long *)(param_1 + 0x18));
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



/* Entry: 109c768ac; end: 109c76943;  */

void FUN_109c768ac(long param_1,long param_2)

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
      FUN_109c7a054(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109c762d4(*(long *)(param_1 + 0x18));
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



/* Entry: 109c76944; end: 109c7698f;  */

long FUN_109c76944(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109c6f378();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c76990; end: 109c76993;  */

long FUN_109c76990(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109c6f378();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c76994; end: 109c769a7;  */

void FUN_109c76994(void)

{
  FUN_109c76944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c769a8; end: 109c769b3;  */

undefined ** FUN_109c769a8(void)

{
  return &PTR_DAT_110b30f40;
}



/* Entry: 109c769b4; end: 109c76a5b;  */

void FUN_109c769b4(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
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
    FUN_109c6f3d8(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 109c76a5c; end: 109c76c2f;  */

long * FUN_109c76a5c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)*puVar8;
      goto LAB_109c76aa4;
    }
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_109c76aa4:
      func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a67e5);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,1,puVar8,param_2);
      param_2 = plVar2;
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109c76b1c;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109c76b1c;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6812);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar2;
LAB_109c76b1c:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(plVar2,lVar3,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar3 = lVar3 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar11 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(plVar2,lVar3,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lVar3,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109c76c30; end: 109c76d3b;  */

long FUN_109c76c30(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  lVar4 = lVar2;
  if (lVar2 < 0) {
    lVar4 = *(long *)(uVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar4 = lVar2;
    }
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    FUN_109c6f5d8();
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109c76d3c; end: 109c76e47;  */

void FUN_109c76d3c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_109c7a118(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_109c6f70c();
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



/* Entry: 109c76e48; end: 109c76e9b;  */

long FUN_109c76e48(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c76e9c; end: 109c76e9f;  */

long FUN_109c76e9c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c76ea0; end: 109c76eb3;  */

void FUN_109c76ea0(void)

{
  FUN_109c76e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c76eb4; end: 109c76ebf;  */

undefined ** FUN_109c76eb4(void)

{
  return &PTR_DAT_110b30f88;
}



/* Entry: 109c76ec0; end: 109c76fd7;  */

void FUN_109c76ec0(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10300380020,0);
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
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
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



/* Entry: 109c76fd8; end: 109c773bb;  */

long * FUN_109c76fd8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong uStack_68;
  int *piStack_60;
  uint uStack_58;
  
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109c77028;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c77028:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a684b);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,1,puVar11,param_2);
      param_2 = plVar1;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109c77078;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c77078:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a687a);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,2,puVar11,param_2);
      param_2 = plVar1;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109c770c8;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c770c8:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a68a6);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,3,puVar11,param_2);
      param_2 = plVar1;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 == 0) goto LAB_109c77140;
    puVar2 = (undefined8 *)*puVar11;
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_109c77140;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a68cb);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,4,puVar11,param_2);
  param_2 = plVar1;
LAB_109c77140:
  piVar5 = (int *)(param_1 + 0x10);
  if (*piVar5 != 0) {
    if ((*piVar5 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar10 = *(uint *)(param_1 + 0x1c);
      piStack_60 = piVar5;
      if (uVar10 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 8);
        plVar1 = param_2;
        uStack_58 = uVar10;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar8 = uStack_68;
          lVar4 = uStack_68 + 8;
          lVar6 = uStack_68 + 0x20;
          param_2 = (long *)0x64;
          func_0x000105990ac4(100,lVar4,lVar6,plVar1,param_3);
          lVar7 = (long)*(char *)(uVar8 + 0x1f);
          if (lVar7 < 0) {
            lVar4 = *(long *)(uVar8 + 8);
            lVar7 = *(long *)(uVar8 + 0x10);
          }
          func_0x000107c303d4(lVar4,lVar7,1,&UNK_10f5a68f1);
          lVar4 = (long)*(char *)(uVar8 + 0x37);
          if (lVar4 < 0) {
            lVar6 = *(long *)(uVar8 + 0x20);
            lVar4 = *(long *)(uVar8 + 0x28);
          }
          func_0x000107c303d4(lVar6,lVar4,1,&UNK_10f5a68f1);
          func_0x000107c27d54(&uStack_68);
          plVar1 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      func_0x000105991b98(&uStack_68);
      piVar5 = piStack_60;
      if (uStack_68 != 0) {
        lVar4 = uStack_68 << 3;
        plVar1 = param_2;
        piVar12 = piStack_60;
        do {
          puVar15 = *(undefined8 **)piVar12;
          puVar11 = puVar15 + 3;
          param_2 = (long *)0x64;
          func_0x000105990ac4(100,puVar15,puVar11,plVar1,param_3);
          lVar6 = (long)*(char *)((long)puVar15 + 0x17);
          puVar2 = puVar15;
          if (lVar6 < 0) {
            lVar6 = puVar15[1];
            puVar2 = (undefined8 *)*puVar15;
          }
          func_0x000107c303d4(puVar2,lVar6,1,&UNK_10f5a68f1);
          lVar6 = (long)*(char *)((long)puVar15 + 0x2f);
          if (lVar6 < 0) {
            puVar11 = (undefined8 *)puVar15[3];
            lVar6 = puVar15[4];
          }
          func_0x000107c303d4(puVar11,lVar6,1,&UNK_10f5a68f1);
          piVar12 = piVar12 + 2;
          lVar4 = lVar4 + -8;
          plVar1 = param_2;
          piVar5 = piStack_60;
        } while (lVar4 != 0);
      }
      piStack_60 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        __ZdaPv(piVar5);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar4 = *(long *)(uVar8 + 8);
      uVar13 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar4 = uVar8 + 8;
    }
    uVar10 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar10) {
      lVar6 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar6 < (int)uVar10) {
        do {
          iVar14 = (int)lVar6;
          _memcpy(param_2,lVar4,(long)iVar14);
          uVar10 = (int)uVar13 - iVar14;
          uVar13 = (ulong)uVar10;
          lVar4 = lVar4 + iVar14;
          plVar9 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar14);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar3 + (long)((int)plVar1 - (int)plVar9));
            plVar9 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar9 <= plVar1);
          lVar6 = (long)plVar9 + (0x10 - (long)param_2);
        } while ((int)lVar6 < (int)uVar10);
      }
      _memcpy(param_2,lVar4,(long)(int)uVar10);
      param_2 = (long *)((long)param_2 + (long)(int)uVar10);
    }
    else {
      _memcpy(param_2,lVar4,uVar13 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar10);
    }
  }
  return param_2;
}



/* Entry: 109c773bc; end: 109c7759b;  */

long FUN_109c773bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uStack_38;
  uint *puStack_30;
  uint uStack_28;
  
  puStack_30 = (uint *)(param_1 + 0x10);
  lVar4 = (ulong)*puStack_30 << 1;
  uStack_28 = *(uint *)(param_1 + 0x1c);
  if (uStack_28 != *(uint *)(param_1 + 0x14)) {
    uStack_38 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_28 * 8);
    if ((uStack_38 & 1) != 0) {
      uStack_38 = *(ulong *)(**(long **)(uStack_38 - 1) + 0x20);
    }
    do {
      lVar2 = uStack_38 + 8;
      func_0x000105990b3c(lVar2,uStack_38 + 0x20);
      lVar4 = lVar2 + lVar4;
      func_0x000107c27d54(&uStack_38);
    } while (uStack_38 != 0);
  }
  uVar1 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x50) = (int)lVar4;
  return lVar4;
}



/* Entry: 109c7759c; end: 109c7759f;  */

void FUN_109c7759c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
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



/* Entry: 109c775a0; end: 109c7771f;  */

void FUN_109c775a0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
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



/* Entry: 109c77720; end: 109c77723;  */

long FUN_109c77720(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_109c76e48();
    __ZdlPv();
  }
  FUN_109c79d68(param_1 + 0x48);
  FUN_109c79d68(param_1 + 0x30);
  FUN_109c79d68(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c77724; end: 109c77737;  */

void FUN_109c77724(void)

{
  func_0x000109c776bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c77738; end: 109c77743;  */

undefined ** FUN_109c77738(void)

{
  return &PTR_DAT_110b30fc8;
}



/* Entry: 109c77744; end: 109c77827;  */

void FUN_109c77744(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if ((*(ulong *)(param_1 + 0x60) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x68) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
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
    FUN_109c76ec0(*(undefined8 *)(param_1 + 0x70));
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



/* Entry: 109c77828; end: 109c77cef;  */

long * FUN_109c77828(long param_1,long *param_2,long *param_3)

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
  int iVar12;
  long lVar13;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar3 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar3,param_3);
      iVar11 = iVar11 + 1;
      plVar3 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar3 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar3,param_3);
      iVar11 = iVar11 + 1;
      plVar3 = param_2;
    } while (iVar12 != iVar11);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar9;
      goto LAB_109c77908;
    }
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c77908:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a691b);
      plVar3 = param_3;
      func_0x000107c280a0(param_3,0xb,puVar9,param_2);
      param_2 = plVar3;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_109c77980;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109c77980;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a6956);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,0xc,puVar9,param_2);
  param_2 = plVar3;
LAB_109c77980:
  iVar12 = *(int *)(param_1 + 0x50);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar3 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x32;
      func_0x000107c303cc(0x32,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar3,param_3);
      iVar11 = iVar11 + 1;
      plVar3 = param_2;
    } while (iVar12 != iVar11);
  }
  plVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)0x64;
    func_0x000107c303cc(100,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x50),param_2,param_3);
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
    if (*param_3 - (long)plVar3 < (long)(int)uVar8) {
      lVar13 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar13 < (int)uVar8) {
        do {
          iVar12 = (int)lVar13;
          _memcpy(plVar3,lVar4,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar4 = lVar4 + iVar12;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)plVar3 + (long)iVar12);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar3 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar3 = plVar7;
          } while (plVar6 <= plVar7);
          lVar13 = (long)plVar6 + (0x10 - (long)plVar3);
        } while ((int)lVar13 < (int)uVar8);
      }
      _memcpy(plVar3,lVar4,(long)(int)uVar8);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar3,lVar4,uVar10 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
  }
  return plVar3;
}



/* Entry: 109c77cf0; end: 109c77cf3;  */

void FUN_109c77cf0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      FUN_109c7a15c(uVar5,*(undefined8 *)(param_2 + 0x70));
      *(ulong *)(param_1 + 0x70) = uVar5;
    }
    else {
      FUN_109c775a0();
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



/* Entry: 109c77cf4; end: 109c77e3b;  */

void FUN_109c77cf4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      FUN_109c7a15c(uVar5,*(undefined8 *)(param_2 + 0x70));
      *(ulong *)(param_1 + 0x70) = uVar5;
    }
    else {
      FUN_109c775a0();
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



/* Entry: 109c77e3c; end: 109c77e77;  */

long FUN_109c77e3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c77e78; end: 109c77e7b;  */

long FUN_109c77e78(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c77e7c; end: 109c77e8f;  */

void FUN_109c77e7c(void)

{
  FUN_109c77e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c77e90; end: 109c77f0b;  */

undefined ** FUN_109c77e90(void)

{
  return &PTR_DAT_110b31010;
}



/* Entry: 109c77f0c; end: 109c780a7;  */

long * FUN_109c77f0c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109c77f80;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109c77f80;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6997);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109c77f80:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  plVar2 = param_2;
  if (lVar3 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,param_2);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109c780a8; end: 109c7816f;  */

long FUN_109c780a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
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
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
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



/* Entry: 109c78170; end: 109c78a4f;  */

void FUN_109c78170(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 109c78a50; end: 109c78a53;  */

long FUN_109c78a50(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c776bc();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x000109c78218(param_1);
  }
  return param_1;
}



/* Entry: 109c78a54; end: 109c78a67;  */

void FUN_109c78a54(void)

{
  func_0x000109c78a04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c78a68; end: 109c78a73;  */

undefined ** FUN_109c78a68(void)

{
  return &PTR_DAT_110b31058;
}



/* Entry: 109c78a74; end: 109c78acb;  */

void FUN_109c78a74(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c77744(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  func_0x000109c78218(param_1);
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



/* Entry: 109c78acc; end: 109c78e43;  */

long * FUN_109c78acc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  plVar4 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar4 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  plVar1 = plVar4;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),plVar4,param_3);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
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
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar6 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x24);
    }
    *(undefined1 *)plVar1 = 0x50;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  plVar4 = (long *)(ulong)uVar3;
  lVar5 = 0x14;
  if ((int)uVar3 < 600) {
    if ((int)uVar3 < 400) {
      if ((int)uVar3 < 0x12d) {
        if (1 < uVar3 - 200) {
          if (uVar3 == 0xca) goto LAB_109c78cd8;
          if (uVar3 != 300) goto LAB_109c78d04;
          lVar5 = 0x3c;
        }
      }
      else if (3 < uVar3 - 0x12d) goto LAB_109c78d04;
    }
    else if ((int)uVar3 < 500) {
      if (3 < uVar3 - 0x191) {
        if (uVar3 != 400) goto LAB_109c78d04;
        lVar5 = 0x48;
      }
    }
    else if (1 < uVar3 - 500) {
      if (uVar3 != 0x22b) {
        if (uVar3 != 0x22c) goto LAB_109c78d04;
        goto LAB_109c78c34;
      }
LAB_109c78cd8:
      lVar5 = 0x40;
    }
  }
  else if ((int)uVar3 < 0x262) {
    if ((int)uVar3 < 0x25c) {
      if (uVar3 - 600 < 2) {
LAB_109c78cb8:
        lVar5 = 0x20;
      }
      else {
        if (uVar3 != 0x25a) {
          if (uVar3 != 0x25b) goto LAB_109c78d04;
          goto LAB_109c78c34;
        }
        lVar5 = 0x28;
      }
    }
    else {
      if ((int)uVar3 < 0x25f) {
        if (uVar3 == 0x25c) goto LAB_109c78ca0;
        if (uVar3 != 0x25e) goto LAB_109c78d04;
        goto LAB_109c78cb8;
      }
      if (uVar3 != 0x25f) {
        if (uVar3 != 0x261) goto LAB_109c78d04;
        goto LAB_109c78cd0;
      }
    }
  }
  else if ((int)uVar3 < 0x7d2) {
    if ((int)uVar3 < 2000) {
      if (uVar3 == 0x262) {
        lVar5 = 0x60;
      }
      else {
        if (uVar3 != 900) goto LAB_109c78d04;
        lVar5 = 0x10;
      }
    }
    else {
      if (uVar3 == 2000) goto LAB_109c78ca0;
      if (uVar3 != 0x7d1) goto LAB_109c78d04;
      lVar5 = 0x50;
    }
  }
  else if ((int)uVar3 < 0x7d5) {
    if (uVar3 - 0x7d2 < 2) {
LAB_109c78c34:
      lVar5 = 0x18;
    }
    else {
      if (uVar3 != 0x7d4) goto LAB_109c78d04;
LAB_109c78ca0:
      lVar5 = 0x30;
    }
  }
  else {
    if (uVar3 != 0x7d5) {
      if (uVar3 != 3000) goto LAB_109c78d04;
      goto LAB_109c78cb8;
    }
LAB_109c78cd0:
    lVar5 = 0x24;
  }
  func_0x000107c303cc(plVar4,*(long *)(param_1 + 0x28),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar5),plVar1,param_3);
  plVar1 = plVar4;
LAB_109c78d04:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar9 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar9 < (int)uVar3) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(plVar1,lVar5,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lVar5 = lVar5 + iVar8;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar6 <= plVar4);
          puVar9 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar1));
        } while ((int)puVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lVar5,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar5,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109c78e44; end: 109c7927b;  */

long FUN_109c78e44(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x000109c77ae0();
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x24) * 2;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 600) {
    if (iVar2 < 400) {
      if (iVar2 < 0x12d) {
        if (iVar2 < 0xca) {
          if (iVar2 == 200) {
            lVar1 = *(long *)(param_1 + 0x28);
            FUN_109c76530();
          }
          else {
            if (iVar2 != 0xc9) goto LAB_109c79234;
            lVar1 = *(long *)(param_1 + 0x28);
            FUN_109c76834();
          }
        }
        else if (iVar2 == 0xca) {
          lVar1 = *(long *)(param_1 + 0x28);
          FUN_109c761c8();
        }
        else {
          if (iVar2 != 300) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          FUN_109c727b8();
        }
      }
      else if (iVar2 < 0x12f) {
        if (iVar2 == 0x12d) {
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109cc8a6c();
        }
        else {
          if (iVar2 != 0x12e) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109cd0550();
        }
      }
      else if (iVar2 == 0x12f) {
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cb4778();
      }
      else {
        if (iVar2 != 0x130) goto LAB_109c79234;
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109c64468();
      }
    }
    else if (iVar2 < 0x194) {
      if (iVar2 < 0x192) {
        if (iVar2 == 400) {
          lVar1 = *(long *)(param_1 + 0x28);
          FUN_109c71a00();
        }
        else {
          if (iVar2 != 0x191) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109cc9af8();
        }
      }
      else if (iVar2 == 0x192) {
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cd000c();
      }
      else {
        if (iVar2 != 0x193) goto LAB_109c79234;
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cb38f4();
      }
    }
    else if (iVar2 < 0x1f5) {
      if (iVar2 == 0x194) {
        lVar1 = *(long *)(param_1 + 0x28);
        FUN_109c7b490();
      }
      else {
        if (iVar2 != 500) goto LAB_109c79234;
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109c7d53c();
      }
    }
    else if (iVar2 == 0x1f5) {
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x000109c74f20();
    }
    else if (iVar2 == 0x22b) {
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_109c6620c();
    }
    else {
      if (iVar2 != 0x22c) goto LAB_109c79234;
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_109c75824();
    }
LAB_109c79214:
    iVar2 = (int)LZCOUNT((int)lVar1);
  }
  else {
    if (iVar2 < 0x262) {
      if (iVar2 < 0x25c) {
        if (iVar2 < 0x25a) {
          if (iVar2 == 600) {
            lVar1 = *(long *)(param_1 + 0x28);
            func_0x000109cc4c9c();
          }
          else {
            if (iVar2 != 0x259) goto LAB_109c79234;
            lVar1 = *(long *)(param_1 + 0x28);
            FUN_109c73ac4();
          }
        }
        else if (iVar2 == 0x25a) {
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109c70cb0();
        }
        else {
          if (iVar2 != 0x25b) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          FUN_109c6b8b8();
        }
      }
      else if (iVar2 < 0x25f) {
        if (iVar2 == 0x25c) {
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109ccb0f0();
        }
        else {
          if (iVar2 != 0x25e) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          FUN_109c650a8();
        }
      }
      else if (iVar2 == 0x25f) {
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cc47cc();
      }
      else {
        if (iVar2 != 0x261) goto LAB_109c79234;
        lVar1 = *(long *)(param_1 + 0x28);
        FUN_109c62ec8();
      }
      goto LAB_109c79214;
    }
    if (0x7d1 < iVar2) {
      if (iVar2 < 0x7d4) {
        if (iVar2 == 0x7d2) {
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109cd1344();
        }
        else {
          if (iVar2 != 0x7d3) goto LAB_109c79234;
          lVar1 = *(long *)(param_1 + 0x28);
          func_0x000109cce01c();
        }
      }
      else if (iVar2 == 0x7d4) {
        lVar1 = *(long *)(param_1 + 0x28);
        FUN_109c72ebc();
      }
      else {
        if (iVar2 != 0x7d5) {
          if (iVar2 == 3000) {
            lVar1 = *(long *)(param_1 + 0x28);
            FUN_109c780a8();
            lVar3 = lVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 3;
          }
          goto LAB_109c79234;
        }
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cd1abc();
      }
      goto LAB_109c79214;
    }
    if (1999 < iVar2) {
      if (iVar2 == 2000) {
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cce710();
      }
      else {
        if (iVar2 != 0x7d1) goto LAB_109c79234;
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x000109cd23b0();
      }
      goto LAB_109c79214;
    }
    if (iVar2 == 0x262) {
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x000109cc3de8();
      goto LAB_109c79214;
    }
    if (iVar2 != 900) goto LAB_109c79234;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
    if ((uVar4 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      uVar4 = uVar4 & 0xfffffffffffffffe;
      lVar1 = (long)*(char *)(uVar4 + 0x1f);
      if (lVar1 < 0) {
        lVar1 = *(long *)(uVar4 + 0x10);
      }
    }
    *(int *)(*(long *)(param_1 + 0x28) + 0x10) = (int)lVar1;
    iVar2 = (int)LZCOUNT((int)lVar1);
  }
  lVar3 = lVar3 + lVar1 + (ulong)(iVar2 * -9 + 0x160U >> 6) + 2;
LAB_109c79234:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c7927c; end: 109c79cf3;  */

/* WARNING: Possible PIC construction at 0x000109c79504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c79508) */

void FUN_109c7927c(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  ulong *puVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (ulong *)(param_1 + 8);
  uVar9 = *puVar8;
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar6 = uVar9;
      FUN_109c7a270(uVar9,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar6;
    }
    else {
      FUN_109c77cf4();
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 == 0) goto LAB_109c79cac;
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 != iVar4) {
    if (iVar5 != 0) {
      func_0x000109c78218(param_1);
    }
    *(int *)(param_1 + 0x30) = iVar4;
  }
  if (599 < iVar4) {
    if (iVar4 < 0x262) {
      if (iVar4 < 0x25c) {
        if (iVar4 < 0x25a) {
          if (iVar4 == 600) {
            if (iVar5 != 600) {
              func_0x000109c7a8c8(uVar9,*(undefined8 *)(param_2 + 0x28));
              goto LAB_109c79ca8;
            }
            ppuVar2 = *(undefined ***)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x30) != 600) {
              ppuVar2 = &PTR_PTR_1132fc5a8;
            }
            func_0x000109cc4d58(*(undefined8 *)(param_1 + 0x28),ppuVar2);
          }
          else if (iVar4 == 0x259) {
            if (iVar5 != 0x259) {
              func_0x000109c7a90c(uVar9,*(undefined8 *)(param_2 + 0x28));
              goto LAB_109c79ca8;
            }
            ppuVar2 = *(undefined ***)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x30) != 0x259) {
              ppuVar2 = &PTR_PTR_1132efe00;
            }
            FUN_109c73c7c(*(undefined8 *)(param_1 + 0x28),ppuVar2);
          }
        }
        else if (iVar4 == 0x25a) {
          if (iVar5 != 0x25a) {
            func_0x000109c7a950(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0x25a) {
            ppuVar2 = &PTR_PTR_1132ef7c0;
          }
          FUN_109c70d5c(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
        else if (iVar4 == 0x25b) {
          if (iVar5 != 0x25b) {
            func_0x000109c7a994(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0x25b) {
            ppuVar2 = &PTR_PTR_1132eecc0;
          }
          FUN_109c6b948(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
      }
      else if (iVar4 < 0x25f) {
        if (iVar4 == 0x25c) {
          if (iVar5 != 0x25c) {
            func_0x000109c7a9d8(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0x25c) {
            ppuVar2 = &PTR_PTR_1132fd2f8;
          }
          func_0x000109ccb16c(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
        else if (iVar4 == 0x25e) {
          if (iVar5 != 0x25e) {
            func_0x000109c7aa1c(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0x25e) {
            ppuVar2 = &PTR_PTR_1132ee238;
          }
          FUN_109c651a8(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
      }
      else if (iVar4 == 0x25f) {
        if (iVar5 != 0x25f) {
          func_0x000109c7aa60(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x25f) {
          ppuVar2 = &PTR_PTR_1132fc530;
        }
        func_0x000109cc4508(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 0x261) {
        if (iVar5 != 0x261) {
          func_0x000109c7aaa4(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x261) {
          ppuVar2 = &PTR_PTR_1132edc30;
        }
        FUN_109c62f70(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      goto LAB_109c79cac;
    }
    if (iVar4 < 0x7d2) {
      if (iVar4 < 2000) {
        if (iVar4 == 0x262) {
          if (iVar5 != 0x262) {
            func_0x000109c7aae8(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0x262) {
            ppuVar2 = &PTR_PTR_1132fc188;
          }
          func_0x000109cc40b8(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
        else if (iVar4 == 900) {
          if (iVar5 != 900) {
            func_0x000109c7ab2c(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 900) {
            ppuVar2 = &PTR_PTR_1132efd98;
          }
          if (((ulong)ppuVar2[1] & 1) != 0) {
            unaff_x30 = 0x109c79508;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            puVar7 = (ulong *)(*(long *)(param_1 + 0x28) + 8);
            unaff_x19 = puVar8;
            unaff_x20 = param_2;
            unaff_x29 = puVar1;
            goto code_r0x00010b4d197c;
          }
        }
      }
      else if (iVar4 == 2000) {
        if (iVar5 != 2000) {
          func_0x000109c7ab70(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 2000) {
          ppuVar2 = &PTR_PTR_1132fdbc0;
        }
        func_0x000109cce848(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 0x7d1) {
        if (iVar5 != 0x7d1) {
          func_0x000109c7abb4(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x7d1) {
          ppuVar2 = &PTR_PTR_1132fe5a8;
        }
        func_0x000109cd2614(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
    }
    else if (iVar4 < 0x7d4) {
      if (iVar4 == 0x7d2) {
        if (iVar5 != 0x7d2) {
          func_0x000109c7abf8(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x7d2) {
          ppuVar2 = &PTR_PTR_1132fe2c0;
        }
        func_0x000109cd13d4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 0x7d3) {
        if (iVar5 != 0x7d3) {
          func_0x000109c7ac3c(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x7d3) {
          ppuVar2 = &PTR_PTR_1132fdae8;
        }
        func_0x000109cce0a4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
    }
    else if (iVar4 == 0x7d4) {
      if (iVar5 != 0x7d4) {
        func_0x000109c7ac80(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x7d4) {
        ppuVar2 = &PTR_PTR_1132efc58;
      }
      FUN_109c72ff4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else if (iVar4 == 0x7d5) {
      if (iVar5 != 0x7d5) {
        func_0x000109c7acc4(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x7d5) {
        ppuVar2 = &PTR_PTR_1132fe490;
      }
      func_0x000109cd1ba4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else if (iVar4 == 3000) {
      if (iVar5 != 3000) {
        FUN_109c7ad08(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 3000) {
        ppuVar2 = &PTR_PTR_1132f1110;
      }
      func_0x000109c78170(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    goto LAB_109c79cac;
  }
  if (iVar4 < 400) {
    if (iVar4 < 0x12d) {
      if (iVar4 < 0xca) {
        if (iVar4 == 200) {
          if (iVar5 != 200) {
            func_0x000109c7a3e8(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 200) {
            ppuVar2 = &PTR_PTR_1132f10d0;
          }
          FUN_109c765a8(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
        else if (iVar4 == 0xc9) {
          if (iVar5 != 0xc9) {
            func_0x000109c7a47c(uVar9,*(undefined8 *)(param_2 + 0x28));
            goto LAB_109c79ca8;
          }
          ppuVar2 = *(undefined ***)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x30) != 0xc9) {
            ppuVar2 = &PTR_PTR_1132f10f0;
          }
          FUN_109c768ac(*(undefined8 *)(param_1 + 0x28),ppuVar2);
        }
      }
      else if (iVar4 == 0xca) {
        if (iVar5 != 0xca) {
          FUN_109c7a054(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0xca) {
          ppuVar2 = &PTR_PTR_1132f1138;
        }
        FUN_109c762d4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 300) {
        if (iVar5 != 300) {
          func_0x000109c7a510(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 300) {
          ppuVar2 = &PTR_PTR_1132efb08;
        }
        FUN_109c728ac(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
    }
    else if (iVar4 < 0x12f) {
      if (iVar4 == 0x12d) {
        if (iVar5 != 0x12d) {
          func_0x000109c7a554(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x12d) {
          ppuVar2 = &PTR_PTR_1132fc9b8;
        }
        func_0x000109cc8b88(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 0x12e) {
        if (iVar5 != 0x12e) {
          func_0x000109c7a598(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x12e) {
          ppuVar2 = &PTR_PTR_1132fdde8;
        }
        func_0x000109cd05ec(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
    }
    else if (iVar4 == 0x12f) {
      if (iVar5 != 0x12f) {
        func_0x000109c7a5dc(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x12f) {
        ppuVar2 = &PTR_PTR_1132f1a30;
      }
      FUN_109cb48dc(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else if (iVar4 == 0x130) {
      if (iVar5 != 0x130) {
        func_0x000109c7a620(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x130) {
        ppuVar2 = &PTR_PTR_1132edd38;
      }
      FUN_109c647c4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    goto LAB_109c79cac;
  }
  if (iVar4 < 0x194) {
    if (iVar4 < 0x192) {
      if (iVar4 == 400) {
        if (iVar5 != 400) {
          func_0x000109c7a664(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 400) {
          ppuVar2 = &PTR_PTR_1132ef940;
        }
        FUN_109c71b58(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
      else if (iVar4 == 0x191) {
        if (iVar5 != 0x191) {
          func_0x000109c7a6a8(uVar9,*(undefined8 *)(param_2 + 0x28));
          goto LAB_109c79ca8;
        }
        ppuVar2 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x30) != 0x191) {
          ppuVar2 = &PTR_PTR_1132fc9f8;
        }
        func_0x000109cc9d44(*(undefined8 *)(param_1 + 0x28),ppuVar2);
      }
    }
    else if (iVar4 == 0x192) {
      if (iVar5 != 0x192) {
        func_0x000109c7a6ec(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x192) {
        ppuVar2 = &PTR_PTR_1132fde10;
      }
      func_0x000109cd00f4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else if (iVar4 == 0x193) {
      if (iVar5 != 0x193) {
        func_0x000109c7a730(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x193) {
        ppuVar2 = &PTR_PTR_1132f1a88;
      }
      FUN_109cb3af0(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
  }
  else if (iVar4 < 0x1f5) {
    if (iVar4 == 0x194) {
      if (iVar5 != 0x194) {
        func_0x000109c7a774(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x194) {
        ppuVar2 = &PTR_PTR_1132f11e8;
      }
      FUN_109c7b668(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else if (iVar4 == 500) {
      if (iVar5 != 500) {
        func_0x000109c7a7b8(uVar9,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c79ca8;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 500) {
        ppuVar2 = &PTR_PTR_1132f1948;
      }
      FUN_109c7d6a0(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
  }
  else if (iVar4 == 0x1f5) {
    if (iVar5 == 0x1f5) {
      ppuVar2 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x1f5) {
        ppuVar2 = &PTR_PTR_1132effd8;
      }
      FUN_109c751f8(*(undefined8 *)(param_1 + 0x28),ppuVar2);
    }
    else {
      func_0x000109c7a7fc(uVar9,*(undefined8 *)(param_2 + 0x28));
LAB_109c79ca8:
      *(ulong *)(param_1 + 0x28) = uVar9;
    }
  }
  else if (iVar4 == 0x22b) {
    if (iVar5 != 0x22b) {
      func_0x000109c7a840(uVar9,*(undefined8 *)(param_2 + 0x28));
      goto LAB_109c79ca8;
    }
    ppuVar2 = *(undefined ***)(param_2 + 0x28);
    if (*(int *)(param_2 + 0x30) != 0x22b) {
      ppuVar2 = &PTR_PTR_1132ee358;
    }
    FUN_109c663b4(*(undefined8 *)(param_1 + 0x28),ppuVar2);
  }
  else if (iVar4 == 0x22c) {
    if (iVar5 != 0x22c) {
      func_0x000109c7a884(uVar9,*(undefined8 *)(param_2 + 0x28));
      goto LAB_109c79ca8;
    }
    ppuVar2 = *(undefined ***)(param_2 + 0x28);
    if (*(int *)(param_2 + 0x30) != 0x22c) {
      ppuVar2 = &PTR_PTR_1132f0458;
    }
    FUN_109c758a0(*(undefined8 *)(param_1 + 0x28),ppuVar2);
  }
LAB_109c79cac:
  puVar7 = puVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar7 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c79cf4; end: 109c79d33;  */

void FUN_109c79cf4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b30c00;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c79d34; end: 109c79d67;  */

long * FUN_109c79d34(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c79d68; end: 109c79d9b;  */

long * FUN_109c79d68(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c79d9c; end: 109c7a053;  */

void FUN_109c79d9c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b30c00;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c7a054; end: 109c7a117;  */

undefined8 * FUN_109c7a054(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b30d90;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar1 + 2,param_2 + 0x10);
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



/* Entry: 109c7a118; end: 109c7a15b;  */

undefined8 * FUN_109c7a118(undefined8 *param_1,long param_2)

{
  int iVar1;
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
  *puVar2 = &PTR_FUN_110b2fbc0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(int *)((long)puVar2 + 0x24) = iVar1;
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_2 + 0x10);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      FUN_109c70188(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    else if (iVar1 == 2) {
      FUN_109c702b8(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      if (iVar1 != 3) {
        return puVar2;
      }
      FUN_109c70220(param_1,*(undefined8 *)(param_2 + 0x18));
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      func_0x000109c70350(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      if (iVar1 != 5) {
        return puVar2;
      }
      func_0x000109c7040c(param_1,*(undefined8 *)(param_2 + 0x18));
    }
  }
  else if (iVar1 == 6) {
    func_0x000109c70518(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar1 != 7) {
      return puVar2;
    }
    func_0x000109c705c4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109c7a15c; end: 109c7a26f;  */

undefined8 * FUN_109c7a15c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b30c50;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000105991a48(puVar1 + 2,param_1,param_2 + 0x10);
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
  puVar3 = (ulong *)(param_2 + 0x48);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[9] = puVar2;
  *(undefined4 *)(puVar1 + 10) = 0;
  return puVar1;
}



/* Entry: 109c7a270; end: 109c7a3e7;  */

undefined8 * FUN_109c7a270(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x78);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b30cf0;
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
    func_0x000107c303c4(puVar1 + 9,param_2 + 0x48);
  }
  puVar3 = (ulong *)(param_2 + 0x60);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[0xc] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x68);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[0xd] = puVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109c7a15c(param_1,*(undefined8 *)(param_2 + 0x70));
  }
  puVar1[0xe] = param_1;
  return puVar1;
}



/* Entry: 109c7a3e8; end: 109c7a50f;  */

undefined8 * FUN_109c7a3e8(undefined8 *param_1,long param_2)

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
  *puVar2 = &PTR_FUN_110b30de0;
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
    FUN_109c7a054(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109c7a510; end: 109c7ad07;  */

undefined8 * FUN_109c7a510(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_FUN_110b30538;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar1 + 2,param_2 + 0x10);
  }
  FUN_10934069c(puVar1 + 5,param_1,param_2 + 0x28);
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 109c7ad08; end: 109c7adb7;  */

undefined8 * FUN_109c7ad08(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b30c00;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar3 = (ulong *)(param_2 + 0x10);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[2] = puVar2;
  puVar3 = (ulong *)(param_2 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_1);
    puVar2 = puVar3;
  }
  puVar1[3] = puVar2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 109c7adb8; end: 109c7aeb3;  */

void FUN_109c7adb8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x40) == 0x65) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109c7ae14;
    FUN_109c684b8();
  }
  else {
    if (*(int *)(param_1 + 0x40) != 100) goto LAB_109c7ae14;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109c7ae14;
    FUN_109c680c8();
  }
  __ZdlPv();
LAB_109c7ae14:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 109c7aeb4; end: 109c7b007;  */

undefined8 * FUN_109c7aeb4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b31348;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_109c7cbc0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_109c7ccb4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  uVar2 = param_2;
  if (*(int *)(param_1 + 8) == 0x65) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    if (*(int *)(param_1 + 8) != 100) goto LAB_109c7af80;
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
LAB_109c7af80:
  if (*(int *)((long)param_1 + 0x44) == 0x6f) {
    param_1[6] = *(undefined8 *)(param_3 + 0x30);
  }
  else if (*(int *)((long)param_1 + 0x44) == 0x6e) {
    puVar4 = (ulong *)(param_3 + 0x30);
    puVar3 = (ulong *)*puVar4;
    if ((*puVar4 & 3) != 0) {
      func_0x000107c30244(puVar4,param_2);
      puVar3 = puVar4;
    }
    param_1[6] = puVar3;
  }
  if (*(int *)(param_1 + 9) == 0xd2) {
    FUN_109c7cd90(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  else {
    if (*(int *)(param_1 + 9) != 200) {
      return param_1;
    }
    FUN_109c7ccf8(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  return param_1;
}



/* Entry: 109c7b008; end: 109c7b08f;  */

long FUN_109c7b008(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c7bbc0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc501c();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_109c7adb8(param_1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(int *)(param_1 + 0x44) == 0x6e) {
      func_0x000107c30258(param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x000109c7ae44(param_1);
  }
  return param_1;
}



/* Entry: 109c7b090; end: 109c7b093;  */

long FUN_109c7b090(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109c7bbc0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc501c();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_109c7adb8(param_1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(int *)(param_1 + 0x44) == 0x6e) {
      func_0x000107c30258(param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x000109c7ae44(param_1);
  }
  return param_1;
}



/* Entry: 109c7b094; end: 109c7b0a7;  */

void FUN_109c7b094(void)

{
  FUN_109c7b008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7b0a8; end: 109c7b0ff;  */

long FUN_109c7b0a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c7b100; end: 109c7b10b;  */

undefined ** FUN_109c7b100(void)

{
  return &PTR_DAT_110b31388;
}



/* Entry: 109c7b10c; end: 109c7b1eb;  */

void FUN_109c7b10c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7b190(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109cc507c(*(undefined8 *)(param_1 + 0x20));
    }
  }
  FUN_109c7adb8(param_1);
  if (*(int *)(param_1 + 0x44) == 0x6e) {
    func_0x000107c30258(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  func_0x000109c7ae44(param_1);
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



/* Entry: 109c7b1ec; end: 109c7b48f;  */

byte * FUN_109c7b1ec(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  pbVar1 = param_2;
  if ((uVar8 & 1) != 0) {
    pbVar1 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
  }
  pbVar2 = pbVar1;
  if ((uVar8 >> 1 & 1) != 0) {
    pbVar2 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),pbVar1,param_3);
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  pbVar1 = (byte *)(ulong)uVar8;
  if (uVar8 == 100) {
    lVar4 = 0x28;
LAB_109c7b270:
    func_0x000107c303cc(pbVar1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4),pbVar2,param_3);
    pbVar2 = pbVar1;
  }
  else if (uVar8 == 0x65) {
    lVar4 = 0x24;
    goto LAB_109c7b270;
  }
  if (*(int *)(param_1 + 0x44) != 0x6f) {
    pbVar1 = pbVar2;
    if (*(int *)(param_1 + 0x44) == 0x6e) {
      puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar3 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar3 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a69c7);
      pbVar1 = param_3;
      func_0x000107c280a0(param_3,0x6e,puVar9,pbVar2);
    }
    goto LAB_109c7b30c;
  }
  pbVar1 = *(byte **)param_3;
  if (pbVar2 < pbVar1) {
LAB_109c7b2c0:
    uVar5 = *(ulong *)(param_1 + 0x30);
    pbVar7 = pbVar2 + 2;
    pbVar2[0] = 0xf8;
    pbVar2[1] = 6;
    uVar10 = uVar5;
    pbVar1 = pbVar7;
    if (0x7f < uVar5) {
      do {
        pbVar7 = pbVar1 + 1;
        *pbVar1 = (byte)uVar10 | 0x80;
        uVar5 = uVar10 >> 7;
        uVar6 = uVar10 >> 0xe;
        uVar10 = uVar5;
        pbVar1 = pbVar7;
      } while (uVar6 != 0);
    }
  }
  else {
    do {
      if (param_3[0x38] == 1) {
        pbVar2 = param_3 + 0x10;
        break;
      }
      pbVar7 = param_3;
      func_0x000107c303dc();
      pbVar2 = pbVar7 + ((int)pbVar2 - (int)pbVar1);
      pbVar1 = *(byte **)param_3;
    } while (pbVar1 <= pbVar2);
    if (*(int *)(param_1 + 0x44) == 0x6f) goto LAB_109c7b2c0;
    uVar5 = 0;
    pbVar7 = pbVar2 + 2;
    pbVar2[0] = 0xf8;
    pbVar2[1] = 6;
  }
  pbVar1 = pbVar7 + 1;
  *pbVar7 = (byte)uVar5;
LAB_109c7b30c:
  uVar8 = *(uint *)(param_1 + 0x48);
  pbVar2 = (byte *)(ulong)uVar8;
  if ((uVar8 == 0xd2) || (uVar8 == 200)) {
    func_0x000107c303cc(pbVar2,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),pbVar1,param_3);
    pbVar1 = pbVar2;
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
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar8) {
      pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar2 < (int)uVar8) {
        do {
          iVar11 = (int)pbVar2;
          _memcpy(pbVar1,lVar4,(long)iVar11);
          uVar8 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar8;
          lVar4 = lVar4 + iVar11;
          pbVar2 = *(byte **)param_3;
          pbVar7 = pbVar1 + iVar11;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar2);
            pbVar2 = *(byte **)param_3;
            pbVar1 = pbVar7;
          } while (pbVar2 <= pbVar7);
          pbVar2 = pbVar2 + (0x10 - (long)pbVar1);
        } while ((int)pbVar2 < (int)uVar8);
      }
      _memcpy(pbVar1,lVar4,(long)(int)uVar8);
      pbVar1 = pbVar1 + (int)uVar8;
    }
    else {
      _memcpy(pbVar1,lVar4,uVar10 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar8;
    }
  }
  return pbVar1;
}



/* Entry: 109c7b490; end: 109c7b663;  */

long FUN_109c7b490(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x000109c7beac();
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x000109cc5230();
      lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(int *)(param_1 + 0x40) == 0x65) {
    lVar3 = *(long *)(param_1 + 0x28);
    FUN_109c68808();
LAB_109c7b540:
    lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  else if (*(int *)(param_1 + 0x40) == 100) {
    lVar3 = *(long *)(param_1 + 0x28);
    FUN_109c68360();
    goto LAB_109c7b540;
  }
  if (*(int *)(param_1 + 0x44) == 0x6f) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x280U >> 6);
  }
  else {
    if (*(int *)(param_1 + 0x44) != 0x6e) goto LAB_109c7b5d0;
    uVar4 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar4 + 0x17);
    uVar4 = *(ulong *)(uVar4 + 8);
    if (-1 < (char)bVar2) {
      uVar4 = (ulong)bVar2;
    }
    lVar5 = lVar5 + uVar4 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
  }
  lVar5 = lVar5 + 2;
LAB_109c7b5d0:
  if ((*(int *)(param_1 + 0x48) == 0xd2) || (*(int *)(param_1 + 0x48) == 200)) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x38) + 8);
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
    *(int *)(*(long *)(param_1 + 0x38) + 0x10) = (int)lVar3;
    lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
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



/* Entry: 109c7b664; end: 109c7b667;  */

/* WARNING: Possible PIC construction at 0x000109c7b8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c7b8a8) */

void FUN_109c7b664(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
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
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar7 = uVar12;
        FUN_109c7cbc0(uVar12,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar7;
      }
      else {
        func_0x000109c7b914();
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar7 = uVar12;
        FUN_109c7ccb4(uVar12,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar7;
      }
      else {
        func_0x000109cc52e0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_109c7adb8(param_1);
      }
      *(int *)(param_1 + 0x40) = iVar4;
    }
    uVar7 = uVar12;
    if (iVar4 == 0x65) {
      if (iVar5 == 0x65) {
        ppuVar10 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x40) != 0x65) {
          ppuVar10 = &PTR_PTR_1132ee5c8;
        }
        FUN_109c688b0(*(undefined8 *)(param_1 + 0x28),ppuVar10);
      }
      else {
        func_0x000109c6baf8(uVar12,*(undefined8 *)(param_2 + 0x28));
LAB_109c7b79c:
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
    }
    else if (iVar4 == 100) {
      if (iVar5 != 100) {
        func_0x000109c6bab4(uVar12,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c7b79c;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x40) != 100) {
        ppuVar10 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x28),ppuVar10);
    }
  }
  iVar4 = *(int *)(param_2 + 0x44);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 != iVar4) {
      if (iVar5 == 0x6e) {
        func_0x000107c30258(param_1 + 0x30);
      }
      *(int *)(param_1 + 0x44) = iVar4;
    }
    if (iVar4 == 0x6f) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else if (iVar4 == 0x6e) {
      if (iVar5 != 0x6e) {
        *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x44) != 0x6e) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x30,puVar2,uVar12);
    }
  }
  iVar4 = *(int *)(param_2 + 0x48);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        func_0x000109c7ae44(param_1);
      }
      *(int *)(param_1 + 0x48) = iVar4;
    }
    if (iVar4 == 0xd2) {
      if (iVar5 == 0xd2) {
        ppuVar9 = *(undefined ***)(param_2 + 0x38);
        ppuVar10 = &PTR_PTR_1132f1670;
        bVar6 = *(int *)(param_2 + 0x48) == 0xd2;
        goto LAB_109c7b888;
      }
      FUN_109c7cd90(uVar12,*(undefined8 *)(param_2 + 0x38));
LAB_109c7b8c8:
      *(ulong *)(param_1 + 0x38) = uVar12;
    }
    else if (iVar4 == 200) {
      if (iVar5 != 200) {
        FUN_109c7ccf8(uVar12,*(undefined8 *)(param_2 + 0x38));
        goto LAB_109c7b8c8;
      }
      ppuVar9 = *(undefined ***)(param_2 + 0x38);
      ppuVar10 = &PTR_PTR_1132f1628;
      bVar6 = *(int *)(param_2 + 0x48) == 200;
LAB_109c7b888:
      if (!bVar6) {
        ppuVar9 = ppuVar10;
      }
      if (((ulong)ppuVar9[1] & 1) != 0) {
        unaff_x30 = 0x109c7b8a8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar8 = (ulong *)(*(long *)(param_1 + 0x38) + 8);
        unaff_x19 = puVar11;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar8 = puVar11;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar8 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c7b668; end: 109c7bae7;  */

/* WARNING: Possible PIC construction at 0x000109c7b8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c7b8a8) */

void FUN_109c7b668(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
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
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar7 = uVar12;
        FUN_109c7cbc0(uVar12,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar7;
      }
      else {
        func_0x000109c7b914();
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar7 = uVar12;
        FUN_109c7ccb4(uVar12,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar7;
      }
      else {
        func_0x000109cc52e0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_109c7adb8(param_1);
      }
      *(int *)(param_1 + 0x40) = iVar4;
    }
    uVar7 = uVar12;
    if (iVar4 == 0x65) {
      if (iVar5 == 0x65) {
        ppuVar10 = *(undefined ***)(param_2 + 0x28);
        if (*(int *)(param_2 + 0x40) != 0x65) {
          ppuVar10 = &PTR_PTR_1132ee5c8;
        }
        FUN_109c688b0(*(undefined8 *)(param_1 + 0x28),ppuVar10);
      }
      else {
        func_0x000109c6baf8(uVar12,*(undefined8 *)(param_2 + 0x28));
LAB_109c7b79c:
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
    }
    else if (iVar4 == 100) {
      if (iVar5 != 100) {
        func_0x000109c6bab4(uVar12,*(undefined8 *)(param_2 + 0x28));
        goto LAB_109c7b79c;
      }
      ppuVar10 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x40) != 100) {
        ppuVar10 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x28),ppuVar10);
    }
  }
  iVar4 = *(int *)(param_2 + 0x44);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 != iVar4) {
      if (iVar5 == 0x6e) {
        func_0x000107c30258(param_1 + 0x30);
      }
      *(int *)(param_1 + 0x44) = iVar4;
    }
    if (iVar4 == 0x6f) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    else if (iVar4 == 0x6e) {
      if (iVar5 != 0x6e) {
        *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x44) != 0x6e) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x30,puVar2,uVar12);
    }
  }
  iVar4 = *(int *)(param_2 + 0x48);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        func_0x000109c7ae44(param_1);
      }
      *(int *)(param_1 + 0x48) = iVar4;
    }
    if (iVar4 == 0xd2) {
      if (iVar5 == 0xd2) {
        ppuVar9 = *(undefined ***)(param_2 + 0x38);
        ppuVar10 = &PTR_PTR_1132f1670;
        bVar6 = *(int *)(param_2 + 0x48) == 0xd2;
        goto LAB_109c7b888;
      }
      FUN_109c7cd90(uVar12,*(undefined8 *)(param_2 + 0x38));
LAB_109c7b8c8:
      *(ulong *)(param_1 + 0x38) = uVar12;
    }
    else if (iVar4 == 200) {
      if (iVar5 != 200) {
        FUN_109c7ccf8(uVar12,*(undefined8 *)(param_2 + 0x38));
        goto LAB_109c7b8c8;
      }
      ppuVar9 = *(undefined ***)(param_2 + 0x38);
      ppuVar10 = &PTR_PTR_1132f1628;
      bVar6 = *(int *)(param_2 + 0x48) == 200;
LAB_109c7b888:
      if (!bVar6) {
        ppuVar9 = ppuVar10;
      }
      if (((ulong)ppuVar9[1] & 1) != 0) {
        unaff_x30 = 0x109c7b8a8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar8 = (ulong *)(*(long *)(param_1 + 0x38) + 8);
        unaff_x19 = puVar11;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar8 = puVar11;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar8 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c7bae8; end: 109c7bc13;  */

void FUN_109c7bae8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x44) == 0x6e) || (*(int *)(param_1 + 0x44) == 100)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) {
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



/* Entry: 109c7bc14; end: 109c7bc17;  */

long FUN_109c7bc14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_109c7bae8(param_1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x000109c7bb58(param_1);
  }
  FUN_109c7c978(param_1 + 0x10);
  return param_1;
}


